# OpenBDS - open-source headless Bedrock server
# Build:  docker build -t openbds .
# Run:    docker run --rm -p 19132:19132/udp -v "$PWD/server.properties:/app/server.properties:ro" openbds

FROM node:22-alpine

# No native modules required: OpenBDS defaults to the pure-JS RakNet backend.
WORKDIR /app

# Install dependencies first for better layer caching.
COPY package.json package-lock.json .npmrc ./
RUN npm ci --no-audit --no-fund

COPY bin ./bin
COPY src ./src
COPY tools ./tools
COPY docs ./docs
COPY LICENSE NOTICE README.md ./

# Mount points for configuration and world data
VOLUME ["/app/data", "/app/logs"]

ENV NODE_ENV=production \
    OPENBDS_HOST=0.0.0.0 \
    OPENBDS_SERVER_PORT=19132

EXPOSE 19132/udp

HEALTHCHECK --interval=30s --timeout=6s --start-period=10s \
  CMD node tools/ping.js 127.0.0.1 19132 || exit 1

# No shell wrapper: run the server directly so signals reach Node.
ENTRYPOINT ["node", "bin/openbds.js"]
CMD ["--host", "0.0.0.0", "--port", "19132"]
