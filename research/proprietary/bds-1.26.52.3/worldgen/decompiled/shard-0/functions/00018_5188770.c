/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5188770
 * Label: OverworldGeneratorMultinoise::vslot51
 * Body:  [[05188770, 0518877e] [0518878c, 051887b7] [0518a3dc, 0518adad] [0518b120, 0518b132] [0518b171, 0518b2f8] [0518bfde, 0518bff0] [0518c05a, 0518c082] [0518c094, 0518c548] [0518e927, 0518e94f] [0518e970, 0518e982] [0518e9a6, 0518e9d5] [0518e9e3, 0518ea0e] [0518fb3a, 0518fce7]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot51
 */


void wg_OverworldGeneratorMultinoise__vslot51(void)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined1 uStack00000000000001f0;
  undefined8 in_stack_00000200;
  byte in_stack_00000208;
  undefined7 in_stack_00000209;
  undefined8 in_stack_00000218;
  byte in_stack_00000238;
  undefined7 in_stack_00000239;
  undefined8 in_stack_00000248;
  byte in_stack_00000268;
  undefined7 in_stack_00000269;
  undefined8 in_stack_00000278;
  byte in_stack_00000298;
  undefined7 in_stack_00000299;
  undefined8 in_stack_000002a8;
  byte in_stack_000002c8;
  undefined7 in_stack_000002c9;
  undefined8 in_stack_000002d8;
  byte in_stack_000002f8;
  undefined7 in_stack_000002f9;
  undefined8 in_stack_00000308;
  byte in_stack_00000328;
  undefined7 in_stack_00000329;
  undefined8 in_stack_00000338;
  byte in_stack_00000358;
  undefined7 in_stack_00000359;
  undefined8 in_stack_00000368;
  byte in_stack_00000388;
  undefined7 in_stack_00000389;
  undefined8 in_stack_00000398;
  byte in_stack_000003b8;
  undefined7 in_stack_000003b9;
  undefined8 in_stack_000003c8;
  byte in_stack_000003e8;
  undefined7 in_stack_000003e9;
  undefined8 in_stack_000003f8;
  byte in_stack_00000418;
  undefined7 in_stack_00000419;
  undefined8 in_stack_00000428;
  byte in_stack_00000448;
  undefined7 in_stack_00000449;
  undefined8 in_stack_00000458;
  byte in_stack_00000478;
  undefined7 in_stack_00000479;
  undefined8 in_stack_00000488;
  byte in_stack_000004a8;
  undefined7 in_stack_000004a9;
  undefined8 in_stack_000004b8;
  byte in_stack_000004d8;
  undefined7 in_stack_000004d9;
  undefined8 in_stack_000004e8;
  byte in_stack_00000508;
  undefined7 in_stack_00000509;
  undefined8 in_stack_00000518;
  byte in_stack_00000538;
  undefined7 in_stack_00000539;
  undefined8 in_stack_00000548;
  byte in_stack_00000568;
  undefined7 in_stack_00000569;
  undefined8 in_stack_00000578;
  byte in_stack_00000598;
  undefined7 in_stack_00000599;
  undefined8 in_stack_000005a8;
  byte in_stack_000005c8;
  undefined7 in_stack_000005c9;
  undefined8 in_stack_000005d8;
  byte in_stack_000005f8;
  undefined7 in_stack_000005f9;
  undefined8 in_stack_00000608;
  byte in_stack_00000628;
  undefined7 in_stack_00000629;
  undefined8 in_stack_00000638;
  byte in_stack_00000658;
  undefined7 in_stack_00000659;
  undefined8 in_stack_00000668;
  byte in_stack_00000688;
  undefined7 in_stack_00000689;
  undefined8 in_stack_00000698;
  byte in_stack_000006b8;
  undefined7 in_stack_000006b9;
  undefined8 in_stack_000006c8;
  byte in_stack_000006e8;
  undefined7 in_stack_000006e9;
  undefined8 in_stack_000006f8;
  byte in_stack_00000718;
  undefined7 in_stack_00000719;
  undefined8 in_stack_00000728;
  byte in_stack_00000748;
  undefined7 in_stack_00000749;
  undefined8 in_stack_00000758;
  byte in_stack_00000778;
  undefined7 in_stack_00000779;
  undefined8 in_stack_00000788;
  byte in_stack_000007a8;
  undefined7 in_stack_000007a9;
  undefined8 in_stack_000007b8;
  byte in_stack_000007d8;
  undefined7 in_stack_000007d9;
  undefined8 in_stack_000007e8;
  byte in_stack_00000808;
  undefined7 in_stack_00000809;
  undefined8 in_stack_00000818;
  byte in_stack_00000838;
  undefined7 in_stack_00000839;
  undefined8 in_stack_00000848;
  byte in_stack_00000868;
  undefined7 in_stack_00000869;
  undefined8 in_stack_00000878;
  byte in_stack_00000898;
  undefined7 in_stack_00000899;
  undefined8 in_stack_000008a8;
  byte in_stack_000008c8;
  undefined7 in_stack_000008c9;
  undefined8 in_stack_000008d8;
  byte in_stack_000008f8;
  undefined7 in_stack_000008f9;
  undefined8 in_stack_00000908;
  byte in_stack_00000928;
  undefined7 in_stack_00000929;
  undefined8 in_stack_00000938;
  byte in_stack_00000958;
  undefined7 in_stack_00000959;
  undefined8 in_stack_00000968;
  byte in_stack_00000988;
  undefined7 in_stack_00000989;
  undefined8 in_stack_00000998;
  byte in_stack_000009b8;
  undefined7 in_stack_000009b9;
  undefined8 in_stack_000009c8;
  byte in_stack_000009e8;
  undefined7 in_stack_000009e9;
  undefined8 in_stack_000009f8;
  byte in_stack_00000a18;
  undefined7 in_stack_00000a19;
  undefined8 in_stack_00000a28;
  byte in_stack_00000a48;
  undefined7 in_stack_00000a49;
  undefined8 in_stack_00000a58;
  byte in_stack_00000a78;
  undefined7 in_stack_00000a79;
  undefined8 in_stack_00000a88;
  byte in_stack_00000aa8;
  undefined7 in_stack_00000aa9;
  undefined8 in_stack_00000ab8;
  byte in_stack_00000ad8;
  undefined7 in_stack_00000ad9;
  undefined8 in_stack_00000ae8;
  byte in_stack_00000b08;
  undefined7 in_stack_00000b09;
  undefined8 in_stack_00000b18;
  byte in_stack_00000b38;
  undefined7 in_stack_00000b39;
  undefined8 in_stack_00000b48;
  byte in_stack_00000b50;
  undefined7 in_stack_00000b51;
  undefined8 in_stack_00000b60;
  byte in_stack_00000b80;
  undefined7 in_stack_00000b81;
  undefined8 in_stack_00000b90;
  byte in_stack_00000bb0;
  undefined7 in_stack_00000bb1;
  undefined8 in_stack_00000bc0;
  byte in_stack_00000be0;
  undefined7 in_stack_00000be1;
  undefined8 in_stack_00000bf0;
  byte in_stack_00000c10;
  undefined7 in_stack_00000c11;
  undefined8 in_stack_00000c20;
  byte in_stack_00000c40;
  undefined7 in_stack_00000c41;
  undefined8 in_stack_00000c50;
  byte in_stack_00000c70;
  undefined7 in_stack_00000c71;
  undefined8 in_stack_00000c80;
  byte in_stack_00000c88;
  undefined7 in_stack_00000c89;
  undefined8 in_stack_00000c98;
  byte in_stack_00000ca0;
  undefined7 in_stack_00000ca1;
  undefined8 in_stack_00000cb0;
  byte in_stack_00000cd0;
  undefined7 in_stack_00000cd1;
  undefined8 in_stack_00000ce0;
  byte in_stack_00000d00;
  undefined7 in_stack_00000d01;
  undefined8 in_stack_00000d10;
  byte in_stack_00000d30;
  undefined7 in_stack_00000d31;
  undefined8 in_stack_00000d40;
  byte in_stack_00000d60;
  undefined7 in_stack_00000d61;
  undefined8 in_stack_00000d70;
  byte in_stack_00000d90;
  undefined7 in_stack_00000d91;
  undefined8 in_stack_00000da0;
  byte in_stack_00000dc0;
  undefined7 in_stack_00000dc1;
  undefined8 in_stack_00000dd0;
  byte in_stack_00000df0;
  undefined7 in_stack_00000df1;
  undefined8 in_stack_00000e00;
  byte in_stack_00000e20;
  undefined7 in_stack_00000e21;
  undefined8 in_stack_00000e30;
  byte in_stack_00000e50;
  undefined7 in_stack_00000e51;
  undefined8 in_stack_00000e60;
  byte in_stack_00000e80;
  undefined7 in_stack_00000e81;
  undefined8 in_stack_00000e90;
  byte in_stack_00000eb0;
  undefined7 in_stack_00000eb1;
  undefined8 in_stack_00000ec0;
  byte in_stack_00000ee0;
  undefined7 in_stack_00000ee1;
  undefined8 in_stack_00000ef0;
  byte in_stack_00000f10;
  undefined7 in_stack_00000f11;
  undefined8 in_stack_00000f20;
  byte in_stack_00000f40;
  undefined7 in_stack_00000f41;
  undefined8 in_stack_00000f50;
  byte in_stack_00000f70;
  undefined7 in_stack_00000f71;
  undefined8 in_stack_00000f80;
  byte in_stack_00000fa0;
  undefined7 in_stack_00000fa1;
  undefined8 in_stack_00000fb0;
  byte in_stack_00000fd0;
  undefined7 in_stack_00000fd1;
  undefined8 in_stack_00000fe0;
  byte in_stack_00001000;
  undefined7 in_stack_00001001;
  undefined8 in_stack_00001010;
  byte in_stack_00001030;
  undefined7 in_stack_00001031;
  undefined8 in_stack_00001040;
  byte in_stack_00001060;
  undefined7 in_stack_00001061;
  undefined8 in_stack_00001070;
  byte in_stack_00001090;
  undefined7 in_stack_00001091;
  undefined8 in_stack_000010a0;
  byte in_stack_000010c0;
  undefined7 in_stack_000010c1;
  undefined8 in_stack_000010d0;
  byte in_stack_000010f0;
  undefined7 in_stack_000010f1;
  undefined8 in_stack_00001100;
  byte in_stack_00001108;
  undefined7 in_stack_00001109;
  undefined8 in_stack_00001118;
  byte in_stack_00001120;
  undefined7 in_stack_00001121;
  undefined8 in_stack_00001130;
  byte in_stack_00001d68;
  undefined7 in_stack_00001d69;
  undefined8 in_stack_00001d78;
  byte in_stack_00001d80;
  undefined7 in_stack_00001d81;
  undefined8 in_stack_00001d90;
  byte in_stack_00001db0;
  undefined7 in_stack_00001db1;
  undefined8 in_stack_00001dc0;
  byte in_stack_00001de0;
  undefined7 in_stack_00001de1;
  undefined8 in_stack_00001df0;
  byte in_stack_00001e10;
  undefined7 in_stack_00001e11;
  undefined8 in_stack_00001e20;
  byte in_stack_00001e40;
  undefined7 in_stack_00001e41;
  undefined8 in_stack_00001e50;
  byte in_stack_00001e70;
  undefined7 in_stack_00001e71;
  undefined8 in_stack_00001e80;
  byte in_stack_00001ea0;
  undefined7 in_stack_00001ea1;
  undefined8 in_stack_00001eb0;
  byte in_stack_00001ed0;
  undefined7 in_stack_00001ed1;
  undefined8 in_stack_00001ee0;
  byte in_stack_00001f00;
  undefined7 in_stack_00001f01;
  undefined8 in_stack_00001f10;
  
  if ((_uStack00000000000001f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000200,_uStack00000000000001f0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000208 & 1) != 0) {
    func_0x0412a280(in_stack_00000218,
                    CONCAT71(in_stack_00000209,in_stack_00000208) & 0xfffffffffffffffe);
    in_RAX = func_0x0eee2d70();
    if ((in_stack_00000238 & 1) != 0) {
      func_0x0412a280(in_stack_00000248,
                      CONCAT71(in_stack_00000239,in_stack_00000238) & 0xfffffffffffffffe);
      in_RAX = func_0x0eee2d70(in_RAX);
      if ((in_stack_00000268 & 1) != 0) {
        func_0x0412a280(in_stack_00000278,
                        CONCAT71(in_stack_00000269,in_stack_00000268) & 0xfffffffffffffffe);
        in_RAX = func_0x0eee2d70(in_RAX);
        if ((in_stack_00000298 & 1) != 0) {
          func_0x0412a280(in_stack_000002a8,
                          CONCAT71(in_stack_00000299,in_stack_00000298) & 0xfffffffffffffffe);
          in_RAX = func_0x0eee2d70(in_RAX);
          if ((in_stack_000002c8 & 1) != 0) {
            func_0x0412a280(in_stack_000002d8,
                            CONCAT71(in_stack_000002c9,in_stack_000002c8) & 0xfffffffffffffffe);
            in_RAX = func_0x0eee2d70(in_RAX);
            if ((in_stack_000002f8 & 1) != 0) {
              func_0x0412a280(in_stack_00000308,
                              CONCAT71(in_stack_000002f9,in_stack_000002f8) & 0xfffffffffffffffe);
              in_RAX = func_0x0eee2d70(in_RAX);
              if ((in_stack_00000328 & 1) != 0) {
                func_0x0412a280(in_stack_00000338,
                                CONCAT71(in_stack_00000329,in_stack_00000328) & 0xfffffffffffffffe);
                in_RAX = func_0x0eee2d70(in_RAX);
                if ((in_stack_00000358 & 1) != 0) {
                  func_0x0412a280(in_stack_00000368,
                                  CONCAT71(in_stack_00000359,in_stack_00000358) & 0xfffffffffffffffe
                                 );
                  in_RAX = func_0x0eee2d70(in_RAX);
                  if ((in_stack_00000388 & 1) != 0) {
                    func_0x0412a280(in_stack_00000398,
                                    CONCAT71(in_stack_00000389,in_stack_00000388) &
                                    0xfffffffffffffffe);
                    in_RAX = func_0x0eee2d70(in_RAX);
                    if ((in_stack_000003b8 & 1) != 0) {
                      func_0x0412a280(in_stack_000003c8,
                                      CONCAT71(in_stack_000003b9,in_stack_000003b8) &
                                      0xfffffffffffffffe);
                      in_RAX = func_0x0eee2d70(in_RAX);
                      if ((in_stack_000003e8 & 1) != 0) {
                        func_0x0412a280(in_stack_000003f8,
                                        CONCAT71(in_stack_000003e9,in_stack_000003e8) &
                                        0xfffffffffffffffe);
                        in_RAX = func_0x0eee2d70(in_RAX);
                        if ((in_stack_00000418 & 1) != 0) {
                          func_0x0412a280(in_stack_00000428,
                                          CONCAT71(in_stack_00000419,in_stack_00000418) &
                                          0xfffffffffffffffe);
                          in_RAX = func_0x0eee2d70(in_RAX);
                          if ((in_stack_00000448 & 1) != 0) {
                            func_0x0412a280(in_stack_00000458,
                                            CONCAT71(in_stack_00000449,in_stack_00000448) &
                                            0xfffffffffffffffe);
                            in_RAX = func_0x0eee2d70(in_RAX);
                            if ((in_stack_00000478 & 1) != 0) {
                              func_0x0412a280(in_stack_00000488,
                                              CONCAT71(in_stack_00000479,in_stack_00000478) &
                                              0xfffffffffffffffe);
                              in_RAX = func_0x0eee2d70(in_RAX);
                              if ((in_stack_000004a8 & 1) != 0) {
                                func_0x0412a280(in_stack_000004b8,
                                                CONCAT71(in_stack_000004a9,in_stack_000004a8) &
                                                0xfffffffffffffffe);
                                in_RAX = func_0x0eee2d70(in_RAX);
                                if ((in_stack_000004d8 & 1) != 0) {
                                  func_0x0412a280(in_stack_000004e8,
                                                  CONCAT71(in_stack_000004d9,in_stack_000004d8) &
                                                  0xfffffffffffffffe);
                                  in_RAX = func_0x0eee2d70(in_RAX);
                                  if ((in_stack_00000508 & 1) != 0) {
                                    func_0x0412a280(in_stack_00000518,
                                                    CONCAT71(in_stack_00000509,in_stack_00000508) &
                                                    0xfffffffffffffffe);
                                    in_RAX = func_0x0eee2d70(in_RAX);
                                    if ((in_stack_00000538 & 1) != 0) {
                                      func_0x0412a280(in_stack_00000548,
                                                      CONCAT71(in_stack_00000539,in_stack_00000538)
                                                      & 0xfffffffffffffffe);
                                      in_RAX = func_0x0eee2d70(in_RAX);
                                      if ((in_stack_00000568 & 1) != 0) {
                                        func_0x0412a280(in_stack_00000578,
                                                        CONCAT71(in_stack_00000569,in_stack_00000568
                                                                ) & 0xfffffffffffffffe);
                                        in_RAX = func_0x0eee2d70(in_RAX);
                                        if ((in_stack_00000598 & 1) != 0) {
                                          func_0x0412a280(in_stack_000005a8,
                                                          CONCAT71(in_stack_00000599,
                                                                   in_stack_00000598) &
                                                          0xfffffffffffffffe);
                                          in_RAX = func_0x0eee2d70(in_RAX);
                                          if ((in_stack_000005c8 & 1) != 0) {
                                            func_0x0412a280(in_stack_000005d8,
                                                            CONCAT71(in_stack_000005c9,
                                                                     in_stack_000005c8) &
                                                            0xfffffffffffffffe);
                                            in_RAX = func_0x0eee2d70(in_RAX);
                                            if ((in_stack_000005f8 & 1) != 0) {
                                              func_0x0412a280(in_stack_00000608,
                                                              CONCAT71(in_stack_000005f9,
                                                                       in_stack_000005f8) &
                                                              0xfffffffffffffffe);
                                              in_RAX = func_0x0eee2d70(in_RAX);
                                              if ((in_stack_00000628 & 1) != 0) {
                                                func_0x0412a280(in_stack_00000638,
                                                                CONCAT71(in_stack_00000629,
                                                                         in_stack_00000628) &
                                                                0xfffffffffffffffe);
                                                in_RAX = func_0x0eee2d70(in_RAX);
                                                if ((in_stack_00000658 & 1) != 0) {
                                                  func_0x0412a280(in_stack_00000668,
                                                                  CONCAT71(in_stack_00000659,
                                                                           in_stack_00000658) &
                                                                  0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000688 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000698,
                                                                    CONCAT71(in_stack_00000689,
                                                                             in_stack_00000688) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_000006b8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000006c8,
                                                                      CONCAT71(in_stack_000006b9,
                                                                               in_stack_000006b8) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_000006e8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000006f8,
                                                                        CONCAT71(in_stack_000006e9,
                                                                                 in_stack_000006e8)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000718 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000728,
                                                                          CONCAT71(in_stack_00000719
                                                                                   ,
                                                  in_stack_00000718) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000748 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000758,
                                                                    CONCAT71(in_stack_00000749,
                                                                             in_stack_00000748) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000778 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000788,
                                                                      CONCAT71(in_stack_00000779,
                                                                               in_stack_00000778) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_000007a8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000007b8,
                                                                        CONCAT71(in_stack_000007a9,
                                                                                 in_stack_000007a8)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_000007d8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000007e8,
                                                                          CONCAT71(in_stack_000007d9
                                                                                   ,
                                                  in_stack_000007d8) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000808 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000818,
                                                                    CONCAT71(in_stack_00000809,
                                                                             in_stack_00000808) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000838 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000848,
                                                                      CONCAT71(in_stack_00000839,
                                                                               in_stack_00000838) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000868 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000878,
                                                                        CONCAT71(in_stack_00000869,
                                                                                 in_stack_00000868)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000898 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000008a8,
                                                                          CONCAT71(in_stack_00000899
                                                                                   ,
                                                  in_stack_00000898) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_000008c8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000008d8,
                                                                    CONCAT71(in_stack_000008c9,
                                                                             in_stack_000008c8) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_000008f8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000908,
                                                                      CONCAT71(in_stack_000008f9,
                                                                               in_stack_000008f8) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000928 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000938,
                                                                        CONCAT71(in_stack_00000929,
                                                                                 in_stack_00000928)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000958 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000968,
                                                                          CONCAT71(in_stack_00000959
                                                                                   ,
                                                  in_stack_00000958) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000988 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000998,
                                                                    CONCAT71(in_stack_00000989,
                                                                             in_stack_00000988) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_000009b8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000009c8,
                                                                      CONCAT71(in_stack_000009b9,
                                                                               in_stack_000009b8) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_000009e8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000009f8,
                                                                        CONCAT71(in_stack_000009e9,
                                                                                 in_stack_000009e8)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000a18 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000a28,
                                                                          CONCAT71(in_stack_00000a19
                                                                                   ,
                                                  in_stack_00000a18) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000a48 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000a58,
                                                                    CONCAT71(in_stack_00000a49,
                                                                             in_stack_00000a48) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000a78 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000a88,
                                                                      CONCAT71(in_stack_00000a79,
                                                                               in_stack_00000a78) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000aa8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ab8,
                                                                        CONCAT71(in_stack_00000aa9,
                                                                                 in_stack_00000aa8)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000ad8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000ae8,
                                                                          CONCAT71(in_stack_00000ad9
                                                                                   ,
                                                  in_stack_00000ad8) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000b08 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000b18,
                                                                    CONCAT71(in_stack_00000b09,
                                                                             in_stack_00000b08) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000b38 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000b48,
                                                                      CONCAT71(in_stack_00000b39,
                                                                               in_stack_00000b38) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      func_0x050d26f0(&stack0x00000020);
                                                      func_0x0412a280();
                                                      if ((in_stack_00000b50 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000b60,
                                                                        CONCAT71(in_stack_00000b51,
                                                                                 in_stack_00000b50)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000b80 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000b90,
                                                                          CONCAT71(in_stack_00000b81
                                                                                   ,
                                                  in_stack_00000b80) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000bb0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000bc0,
                                                                    CONCAT71(in_stack_00000bb1,
                                                                             in_stack_00000bb0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000be0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000bf0,
                                                                      CONCAT71(in_stack_00000be1,
                                                                               in_stack_00000be0) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000c10 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000c20,
                                                                        CONCAT71(in_stack_00000c11,
                                                                                 in_stack_00000c10)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000c40 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000c50,
                                                                          CONCAT71(in_stack_00000c41
                                                                                   ,
                                                  in_stack_00000c40) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000c70 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000c80,
                                                                    CONCAT71(in_stack_00000c71,
                                                                             in_stack_00000c70) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    func_0x050d26f0(&stack0x00000020);
                                                    func_0x0412a280();
                                                    if ((in_stack_00000c88 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000c98,
                                                                      CONCAT71(in_stack_00000c89,
                                                                               in_stack_00000c88) &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    if ((in_stack_00000ca0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000cb0,
                                                                      CONCAT71(in_stack_00000ca1,
                                                                               in_stack_00000ca0) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000cd0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ce0,
                                                                        CONCAT71(in_stack_00000cd1,
                                                                                 in_stack_00000cd0)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000d00 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000d10,
                                                                          CONCAT71(in_stack_00000d01
                                                                                   ,
                                                  in_stack_00000d00) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000d30 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000d40,
                                                                    CONCAT71(in_stack_00000d31,
                                                                             in_stack_00000d30) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000d60 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000d70,
                                                                      CONCAT71(in_stack_00000d61,
                                                                               in_stack_00000d60) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000d90 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000da0,
                                                                        CONCAT71(in_stack_00000d91,
                                                                                 in_stack_00000d90)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000dc0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000dd0,
                                                                          CONCAT71(in_stack_00000dc1
                                                                                   ,
                                                  in_stack_00000dc0) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000df0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000e00,
                                                                    CONCAT71(in_stack_00000df1,
                                                                             in_stack_00000df0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000e20 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000e30,
                                                                      CONCAT71(in_stack_00000e21,
                                                                               in_stack_00000e20) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000e50 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000e60,
                                                                        CONCAT71(in_stack_00000e51,
                                                                                 in_stack_00000e50)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000e80 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000e90,
                                                                          CONCAT71(in_stack_00000e81
                                                                                   ,
                                                  in_stack_00000e80) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000eb0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000ec0,
                                                                    CONCAT71(in_stack_00000eb1,
                                                                             in_stack_00000eb0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000ee0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000ef0,
                                                                      CONCAT71(in_stack_00000ee1,
                                                                               in_stack_00000ee0) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000f10 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000f20,
                                                                        CONCAT71(in_stack_00000f11,
                                                                                 in_stack_00000f10)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00000f40 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000f50,
                                                                          CONCAT71(in_stack_00000f41
                                                                                   ,
                                                  in_stack_00000f40) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00000f70 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000f80,
                                                                    CONCAT71(in_stack_00000f71,
                                                                             in_stack_00000f70) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00000fa0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000fb0,
                                                                      CONCAT71(in_stack_00000fa1,
                                                                               in_stack_00000fa0) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00000fd0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000fe0,
                                                                        CONCAT71(in_stack_00000fd1,
                                                                                 in_stack_00000fd0)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00001000 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001010,
                                                                          CONCAT71(in_stack_00001001
                                                                                   ,
                                                  in_stack_00001000) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00001030 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001040,
                                                                    CONCAT71(in_stack_00001031,
                                                                             in_stack_00001030) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00001060 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001070,
                                                                      CONCAT71(in_stack_00001061,
                                                                               in_stack_00001060) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00001090 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000010a0,
                                                                        CONCAT71(in_stack_00001091,
                                                                                 in_stack_00001090)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_000010c0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000010d0,
                                                                          CONCAT71(in_stack_000010c1
                                                                                   ,
                                                  in_stack_000010c0) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_000010f0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001100,
                                                                    CONCAT71(in_stack_000010f1,
                                                                             in_stack_000010f0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00001108 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001118,
                                                                      CONCAT71(in_stack_00001109,
                                                                               in_stack_00001108) &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    if ((in_stack_00001120 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001130,
                                                                      CONCAT71(in_stack_00001121,
                                                                               in_stack_00001120) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00001d68 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001d78,
                                                                        CONCAT71(in_stack_00001d69,
                                                                                 in_stack_00001d68)
                                                                        & 0xfffffffffffffffe);
                                                      }
                                                      if ((in_stack_00001d80 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001d90,
                                                                        CONCAT71(in_stack_00001d81,
                                                                                 in_stack_00001d80)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00001db0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001dc0,
                                                                          CONCAT71(in_stack_00001db1
                                                                                   ,
                                                  in_stack_00001db0) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00001de0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001df0,
                                                                    CONCAT71(in_stack_00001de1,
                                                                             in_stack_00001de0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00001e10 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001e20,
                                                                      CONCAT71(in_stack_00001e11,
                                                                               in_stack_00001e10) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00001e40 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001e50,
                                                                        CONCAT71(in_stack_00001e41,
                                                                                 in_stack_00001e40)
                                                                        & 0xfffffffffffffffe);
                                                        in_RAX = func_0x0eee2d70(in_RAX);
                                                        if ((in_stack_00001e70 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001e80,
                                                                          CONCAT71(in_stack_00001e71
                                                                                   ,
                                                  in_stack_00001e70) & 0xfffffffffffffffe);
                                                  in_RAX = func_0x0eee2d70(in_RAX);
                                                  if ((in_stack_00001ea0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001eb0,
                                                                    CONCAT71(in_stack_00001ea1,
                                                                             in_stack_00001ea0) &
                                                                    0xfffffffffffffffe);
                                                    in_RAX = func_0x0eee2d70(in_RAX);
                                                    if ((in_stack_00001ed0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001ee0,
                                                                      CONCAT71(in_stack_00001ed1,
                                                                               in_stack_00001ed0) &
                                                                      0xfffffffffffffffe);
                                                      in_RAX = func_0x0eee2d70(in_RAX);
                                                      if ((in_stack_00001f00 & 1) != 0)
                                                      goto LAB_0518fcc6;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x0eee2d70(in_RAX);
LAB_0518fcc6:
  func_0x0412a280(in_stack_00001f10,
                  CONCAT71(in_stack_00001f01,in_stack_00001f00) & 0xfffffffffffffffe);
  func_0x0eee2d70(in_RAX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 05188770 */  MOV RBX,RAX
/* 05188773 */  TEST byte ptr [RSP + 0x1f0],0x1
/* 0518877b */  JZ 0x0518874b
/* 0518877d */  JMP 0x0518878c
/* 0518878c */  MOV RSI,qword ptr [RSP + 0x1f0]
/* 05188794 */  MOV RDI,qword ptr [RSP + 0x200]
/* 0518879c */  AND RSI,-0x2
/* 051887a0 */  CALL 0x0412a280
/* 051887a5 */  TEST byte ptr [RSP + 0x208],0x1
/* 051887ad */  JZ 0x0518fcbe
/* 051887b3 */  JMP 0x0518a3dc
/* 0518a3dc */  MOV RSI,qword ptr [RSP + 0x208]
/* 0518a3e4 */  MOV RDI,qword ptr [RSP + 0x218]
/* 0518a3ec */  AND RSI,-0x2
/* 0518a3f0 */  CALL 0x0412a280
/* 0518a3f5 */  MOV RDI,RBX
/* 0518a3f8 */  CALL 0x0eee2d70
/* 0518a3fd */  MOV RBX,RAX
/* 0518a400 */  TEST byte ptr [RSP + 0x238],0x1
/* 0518a408 */  JZ 0x0518fcbe
/* 0518a40e */  MOV RSI,qword ptr [RSP + 0x238]
/* 0518a416 */  MOV RDI,qword ptr [RSP + 0x248]
/* 0518a41e */  AND RSI,-0x2
/* 0518a422 */  CALL 0x0412a280
/* 0518a427 */  MOV RDI,RBX
/* 0518a42a */  CALL 0x0eee2d70
/* 0518a42f */  MOV RBX,RAX
/* 0518a432 */  TEST byte ptr [RSP + 0x268],0x1
/* 0518a43a */  JZ 0x0518fcbe
/* 0518a440 */  MOV RSI,qword ptr [RSP + 0x268]
/* 0518a448 */  MOV RDI,qword ptr [RSP + 0x278]
/* 0518a450 */  AND RSI,-0x2
/* 0518a454 */  CALL 0x0412a280
/* 0518a459 */  MOV RDI,RBX
/* 0518a45c */  CALL 0x0eee2d70
/* 0518a461 */  MOV RBX,RAX
/* 0518a464 */  TEST byte ptr [RSP + 0x298],0x1
/* 0518a46c */  JZ 0x0518fcbe
/* 0518a472 */  MOV RSI,qword ptr [RSP + 0x298]
/* 0518a47a */  MOV RDI,qword ptr [RSP + 0x2a8]
/* 0518a482 */  AND RSI,-0x2
/* 0518a486 */  CALL 0x0412a280
/* 0518a48b */  MOV RDI,RBX
/* 0518a48e */  CALL 0x0eee2d70
/* 0518a493 */  MOV RBX,RAX
/* 0518a496 */  TEST byte ptr [RSP + 0x2c8],0x1
/* 0518a49e */  JZ 0x0518fcbe
/* 0518a4a4 */  MOV RSI,qword ptr [RSP + 0x2c8]
/* 0518a4ac */  MOV RDI,qword ptr [RSP + 0x2d8]
/* 0518a4b4 */  AND RSI,-0x2
/* 0518a4b8 */  CALL 0x0412a280
/* 0518a4bd */  MOV RDI,RBX
/* 0518a4c0 */  CALL 0x0eee2d70
/* 0518a4c5 */  MOV RBX,RAX
/* 0518a4c8 */  TEST byte ptr [RSP + 0x2f8],0x1
/* 0518a4d0 */  JZ 0x0518fcbe
/* 0518a4d6 */  MOV RSI,qword ptr [RSP + 0x2f8]
/* 0518a4de */  MOV RDI,qword ptr [RSP + 0x308]
/* 0518a4e6 */  AND RSI,-0x2
/* 0518a4ea */  CALL 0x0412a280
/* 0518a4ef */  MOV RDI,RBX
/* 0518a4f2 */  CALL 0x0eee2d70
/* 0518a4f7 */  MOV RBX,RAX
/* 0518a4fa */  TEST byte ptr [RSP + 0x328],0x1
/* 0518a502 */  JZ 0x0518fcbe
/* 0518a508 */  MOV RSI,qword ptr [RSP + 0x328]
/* 0518a510 */  MOV RDI,qword ptr [RSP + 0x338]
/* 0518a518 */  AND RSI,-0x2
/* 0518a51c */  CALL 0x0412a280
/* 0518a521 */  MOV RDI,RBX
/* 0518a524 */  CALL 0x0eee2d70
/* 0518a529 */  MOV RBX,RAX
/* 0518a52c */  TEST byte ptr [RSP + 0x358],0x1
/* 0518a534 */  JZ 0x0518fcbe
/* 0518a53a */  MOV RSI,qword ptr [RSP + 0x358]
/* 0518a542 */  MOV RDI,qword ptr [RSP + 0x368]
/* 0518a54a */  AND RSI,-0x2
/* 0518a54e */  CALL 0x0412a280
/* 0518a553 */  MOV RDI,RBX
/* 0518a556 */  CALL 0x0eee2d70
/* 0518a55b */  MOV RBX,RAX
/* 0518a55e */  TEST byte ptr [RSP + 0x388],0x1
/* 0518a566 */  JZ 0x0518fcbe
/* 0518a56c */  MOV RSI,qword ptr [RSP + 0x388]
/* 0518a574 */  MOV RDI,qword ptr [RSP + 0x398]
/* 0518a57c */  AND RSI,-0x2
/* 0518a580 */  CALL 0x0412a280
/* 0518a585 */  MOV RDI,RBX
/* 0518a588 */  CALL 0x0eee2d70
/* 0518a58d */  MOV RBX,RAX
/* 0518a590 */  TEST byte ptr [RSP + 0x3b8],0x1
/* 0518a598 */  JZ 0x0518fcbe
/* 0518a59e */  MOV RSI,qword ptr [RSP + 0x3b8]
/* 0518a5a6 */  MOV RDI,qword ptr [RSP + 0x3c8]
/* 0518a5ae */  AND RSI,-0x2
/* 0518a5b2 */  CALL 0x0412a280
/* 0518a5b7 */  MOV RDI,RBX
/* 0518a5ba */  CALL 0x0eee2d70
/* 0518a5bf */  MOV RBX,RAX
/* 0518a5c2 */  TEST byte ptr [RSP + 0x3e8],0x1
/* 0518a5ca */  JZ 0x0518fcbe
/* 0518a5d0 */  MOV RSI,qword ptr [RSP + 0x3e8]
/* 0518a5d8 */  MOV RDI,qword ptr [RSP + 0x3f8]
/* 0518a5e0 */  AND RSI,-0x2
/* 0518a5e4 */  CALL 0x0412a280
/* 0518a5e9 */  MOV RDI,RBX
/* 0518a5ec */  CALL 0x0eee2d70
/* 0518a5f1 */  MOV RBX,RAX
/* 0518a5f4 */  TEST byte ptr [RSP + 0x418],0x1
/* 0518a5fc */  JZ 0x0518fcbe
/* 0518a602 */  MOV RSI,qword ptr [RSP + 0x418]
/* 0518a60a */  MOV RDI,qword ptr [RSP + 0x428]
/* 0518a612 */  AND RSI,-0x2
/* 0518a616 */  CALL 0x0412a280
/* 0518a61b */  MOV RDI,RBX
/* 0518a61e */  CALL 0x0eee2d70
/* 0518a623 */  MOV RBX,RAX
/* 0518a626 */  TEST byte ptr [RSP + 0x448],0x1
/* 0518a62e */  JZ 0x0518fcbe
/* 0518a634 */  MOV RSI,qword ptr [RSP + 0x448]
/* 0518a63c */  MOV RDI,qword ptr [RSP + 0x458]
/* 0518a644 */  AND RSI,-0x2
/* 0518a648 */  CALL 0x0412a280
/* 0518a64d */  MOV RDI,RBX
/* 0518a650 */  CALL 0x0eee2d70
/* 0518a655 */  MOV RBX,RAX
/* 0518a658 */  TEST byte ptr [RSP + 0x478],0x1
/* 0518a660 */  JZ 0x0518fcbe
/* 0518a666 */  MOV RSI,qword ptr [RSP + 0x478]
/* 0518a66e */  MOV RDI,qword ptr [RSP + 0x488]
/* 0518a676 */  AND RSI,-0x2
/* 0518a67a */  CALL 0x0412a280
/* 0518a67f */  MOV RDI,RBX
/* 0518a682 */  CALL 0x0eee2d70
/* 0518a687 */  MOV RBX,RAX
/* 0518a68a */  TEST byte ptr [RSP + 0x4a8],0x1
/* 0518a692 */  JZ 0x0518fcbe
/* 0518a698 */  MOV RSI,qword ptr [RSP + 0x4a8]
/* 0518a6a0 */  MOV RDI,qword ptr [RSP + 0x4b8]
/* 0518a6a8 */  AND RSI,-0x2
/* 0518a6ac */  CALL 0x0412a280
/* 0518a6b1 */  MOV RDI,RBX
/* 0518a6b4 */  CALL 0x0eee2d70
/* 0518a6b9 */  MOV RBX,RAX
/* 0518a6bc */  TEST byte ptr [RSP + 0x4d8],0x1
/* 0518a6c4 */  JZ 0x0518fcbe
/* 0518a6ca */  MOV RSI,qword ptr [RSP + 0x4d8]
/* 0518a6d2 */  MOV RDI,qword ptr [RSP + 0x4e8]
/* 0518a6da */  AND RSI,-0x2
/* 0518a6de */  CALL 0x0412a280
/* 0518a6e3 */  MOV RDI,RBX
/* 0518a6e6 */  CALL 0x0eee2d70
/* 0518a6eb */  MOV RBX,RAX
/* 0518a6ee */  TEST byte ptr [RSP + 0x508],0x1
/* 0518a6f6 */  JZ 0x0518fcbe
/* 0518a6fc */  MOV RSI,qword ptr [RSP + 0x508]
/* 0518a704 */  MOV RDI,qword ptr [RSP + 0x518]
/* 0518a70c */  AND RSI,-0x2
/* 0518a710 */  CALL 0x0412a280
/* 0518a715 */  MOV RDI,RBX
/* 0518a718 */  CALL 0x0eee2d70
/* 0518a71d */  MOV RBX,RAX
/* 0518a720 */  TEST byte ptr [RSP + 0x538],0x1
/* 0518a728 */  JZ 0x0518fcbe
/* 0518a72e */  MOV RSI,qword ptr [RSP + 0x538]
/* 0518a736 */  MOV RDI,qword ptr [RSP + 0x548]
/* 0518a73e */  AND RSI,-0x2
/* 0518a742 */  CALL 0x0412a280
/* 0518a747 */  MOV RDI,RBX
/* 0518a74a */  CALL 0x0eee2d70
/* 0518a74f */  MOV RBX,RAX
/* 0518a752 */  TEST byte ptr [RSP + 0x568],0x1
/* 0518a75a */  JZ 0x0518fcbe
/* 0518a760 */  MOV RSI,qword ptr [RSP + 0x568]
/* 0518a768 */  MOV RDI,qword ptr [RSP + 0x578]
/* 0518a770 */  AND RSI,-0x2
/* 0518a774 */  CALL 0x0412a280
/* 0518a779 */  MOV RDI,RBX
/* 0518a77c */  CALL 0x0eee2d70
/* 0518a781 */  MOV RBX,RAX
/* 0518a784 */  TEST byte ptr [RSP + 0x598],0x1
/* 0518a78c */  JZ 0x0518fcbe
/* 0518a792 */  MOV RSI,qword ptr [RSP + 0x598]
/* 0518a79a */  MOV RDI,qword ptr [RSP + 0x5a8]
/* 0518a7a2 */  AND RSI,-0x2
/* 0518a7a6 */  CALL 0x0412a280
/* 0518a7ab */  MOV RDI,RBX
/* 0518a7ae */  CALL 0x0eee2d70
/* 0518a7b3 */  MOV RBX,RAX
/* 0518a7b6 */  TEST byte ptr [RSP + 0x5c8],0x1
/* 0518a7be */  JZ 0x0518fcbe
/* 0518a7c4 */  MOV RSI,qword ptr [RSP + 0x5c8]
/* 0518a7cc */  MOV RDI,qword ptr [RSP + 0x5d8]
/* 0518a7d4 */  AND RSI,-0x2
/* 0518a7d8 */  CALL 0x0412a280
/* 0518a7dd */  MOV RDI,RBX
/* 0518a7e0 */  CALL 0x0eee2d70
/* 0518a7e5 */  MOV RBX,RAX
/* 0518a7e8 */  TEST byte ptr [RSP + 0x5f8],0x1
/* 0518a7f0 */  JZ 0x0518fcbe
/* 0518a7f6 */  MOV RSI,qword ptr [RSP + 0x5f8]
/* 0518a7fe */  MOV RDI,qword ptr [RSP + 0x608]
/* 0518a806 */  AND RSI,-0x2
/* 0518a80a */  CALL 0x0412a280
/* 0518a80f */  MOV RDI,RBX
/* 0518a812 */  CALL 0x0eee2d70
/* 0518a817 */  MOV RBX,RAX
/* 0518a81a */  TEST byte ptr [RSP + 0x628],0x1
/* 0518a822 */  JZ 0x0518fcbe
/* 0518a828 */  MOV RSI,qword ptr [RSP + 0x628]
/* 0518a830 */  MOV RDI,qword ptr [RSP + 0x638]
/* 0518a838 */  AND RSI,-0x2
/* 0518a83c */  CALL 0x0412a280
/* 0518a841 */  MOV RDI,RBX
/* 0518a844 */  CALL 0x0eee2d70
/* 0518a849 */  MOV RBX,RAX
/* 0518a84c */  TEST byte ptr [RSP + 0x658],0x1
/* 0518a854 */  JZ 0x0518fcbe
/* 0518a85a */  MOV RSI,qword ptr [RSP + 0x658]
/* 0518a862 */  MOV RDI,qword ptr [RSP + 0x668]
/* 0518a86a */  AND RSI,-0x2
/* 0518a86e */  CALL 0x0412a280
/* 0518a873 */  MOV RDI,RBX
/* 0518a876 */  CALL 0x0eee2d70
/* 0518a87b */  MOV RBX,RAX
/* 0518a87e */  TEST byte ptr [RSP + 0x688],0x1
/* 0518a886 */  JZ 0x0518fcbe
/* 0518a88c */  MOV RSI,qword ptr [RSP + 0x688]
/* 0518a894 */  MOV RDI,qword ptr [RSP + 0x698]
/* 0518a89c */  AND RSI,-0x2
/* 0518a8a0 */  CALL 0x0412a280
/* 0518a8a5 */  MOV RDI,RBX
/* 0518a8a8 */  CALL 0x0eee2d70
/* 0518a8ad */  MOV RBX,RAX
/* 0518a8b0 */  TEST byte ptr [RSP + 0x6b8],0x1
/* 0518a8b8 */  JZ 0x0518fcbe
/* 0518a8be */  MOV RSI,qword ptr [RSP + 0x6b8]
/* 0518a8c6 */  MOV RDI,qword ptr [RSP + 0x6c8]
/* 0518a8ce */  AND RSI,-0x2
/* 0518a8d2 */  CALL 0x0412a280
/* 0518a8d7 */  MOV RDI,RBX
/* 0518a8da */  CALL 0x0eee2d70
/* 0518a8df */  MOV RBX,RAX
/* 0518a8e2 */  TEST byte ptr [RSP + 0x6e8],0x1
/* 0518a8ea */  JZ 0x0518fcbe
/* 0518a8f0 */  MOV RSI,qword ptr [RSP + 0x6e8]
/* 0518a8f8 */  MOV RDI,qword ptr [RSP + 0x6f8]
/* 0518a900 */  AND RSI,-0x2
/* 0518a904 */  CALL 0x0412a280
/* 0518a909 */  MOV RDI,RBX
/* 0518a90c */  CALL 0x0eee2d70
/* 0518a911 */  MOV RBX,RAX
/* 0518a914 */  TEST byte ptr [RSP + 0x718],0x1
/* 0518a91c */  JZ 0x0518fcbe
/* 0518a922 */  MOV RSI,qword ptr [RSP + 0x718]
/* 0518a92a */  MOV RDI,qword ptr [RSP + 0x728]
/* 0518a932 */  AND RSI,-0x2
/* 0518a936 */  CALL 0x0412a280
/* 0518a93b */  MOV RDI,RBX
/* 0518a93e */  CALL 0x0eee2d70
/* 0518a943 */  MOV RBX,RAX
/* 0518a946 */  TEST byte ptr [RSP + 0x748],0x1
/* 0518a94e */  JZ 0x0518fcbe
/* 0518a954 */  MOV RSI,qword ptr [RSP + 0x748]
/* 0518a95c */  MOV RDI,qword ptr [RSP + 0x758]
/* 0518a964 */  AND RSI,-0x2
/* 0518a968 */  CALL 0x0412a280
/* 0518a96d */  MOV RDI,RBX
/* 0518a970 */  CALL 0x0eee2d70
/* 0518a975 */  MOV RBX,RAX
/* 0518a978 */  TEST byte ptr [RSP + 0x778],0x1
/* 0518a980 */  JZ 0x0518fcbe
/* 0518a986 */  MOV RSI,qword ptr [RSP + 0x778]
/* 0518a98e */  MOV RDI,qword ptr [RSP + 0x788]
/* 0518a996 */  AND RSI,-0x2
/* 0518a99a */  CALL 0x0412a280
/* 0518a99f */  MOV RDI,RBX
/* 0518a9a2 */  CALL 0x0eee2d70
/* 0518a9a7 */  MOV RBX,RAX
/* 0518a9aa */  TEST byte ptr [RSP + 0x7a8],0x1
/* 0518a9b2 */  JZ 0x0518fcbe
/* 0518a9b8 */  MOV RSI,qword ptr [RSP + 0x7a8]
/* 0518a9c0 */  MOV RDI,qword ptr [RSP + 0x7b8]
/* 0518a9c8 */  AND RSI,-0x2
/* 0518a9cc */  CALL 0x0412a280
/* 0518a9d1 */  MOV RDI,RBX
/* 0518a9d4 */  CALL 0x0eee2d70
/* 0518a9d9 */  MOV RBX,RAX
/* 0518a9dc */  TEST byte ptr [RSP + 0x7d8],0x1
/* 0518a9e4 */  JZ 0x0518fcbe
/* 0518a9ea */  MOV RSI,qword ptr [RSP + 0x7d8]
/* 0518a9f2 */  MOV RDI,qword ptr [RSP + 0x7e8]
/* 0518a9fa */  AND RSI,-0x2
/* 0518a9fe */  CALL 0x0412a280
/* 0518aa03 */  MOV RDI,RBX
/* 0518aa06 */  CALL 0x0eee2d70
/* 0518aa0b */  MOV RBX,RAX
/* 0518aa0e */  TEST byte ptr [RSP + 0x808],0x1
/* 0518aa16 */  JZ 0x0518fcbe
/* 0518aa1c */  MOV RSI,qword ptr [RSP + 0x808]
/* 0518aa24 */  MOV RDI,qword ptr [RSP + 0x818]
/* 0518aa2c */  AND RSI,-0x2
/* 0518aa30 */  CALL 0x0412a280
/* 0518aa35 */  MOV RDI,RBX
/* 0518aa38 */  CALL 0x0eee2d70
/* 0518aa3d */  MOV RBX,RAX
/* 0518aa40 */  TEST byte ptr [RSP + 0x838],0x1
/* 0518aa48 */  JZ 0x0518fcbe
/* 0518aa4e */  MOV RSI,qword ptr [RSP + 0x838]
/* 0518aa56 */  MOV RDI,qword ptr [RSP + 0x848]
/* 0518aa5e */  AND RSI,-0x2
/* 0518aa62 */  CALL 0x0412a280
/* 0518aa67 */  MOV RDI,RBX
/* 0518aa6a */  CALL 0x0eee2d70
/* 0518aa6f */  MOV RBX,RAX
/* 0518aa72 */  TEST byte ptr [RSP + 0x868],0x1
/* 0518aa7a */  JZ 0x0518fcbe
/* 0518aa80 */  MOV RSI,qword ptr [RSP + 0x868]
/* 0518aa88 */  MOV RDI,qword ptr [RSP + 0x878]
/* 0518aa90 */  AND RSI,-0x2
/* 0518aa94 */  CALL 0x0412a280
/* 0518aa99 */  MOV RDI,RBX
/* 0518aa9c */  CALL 0x0eee2d70
/* 0518aaa1 */  MOV RBX,RAX
/* 0518aaa4 */  TEST byte ptr [RSP + 0x898],0x1
/* 0518aaac */  JZ 0x0518fcbe
/* 0518aab2 */  MOV RSI,qword ptr [RSP + 0x898]
/* 0518aaba */  MOV RDI,qword ptr [RSP + 0x8a8]
/* 0518aac2 */  AND RSI,-0x2
/* 0518aac6 */  CALL 0x0412a280
/* 0518aacb */  MOV RDI,RBX
/* 0518aace */  CALL 0x0eee2d70
/* 0518aad3 */  MOV RBX,RAX
/* 0518aad6 */  TEST byte ptr [RSP + 0x8c8],0x1
/* 0518aade */  JZ 0x0518fcbe
/* 0518aae4 */  MOV RSI,qword ptr [RSP + 0x8c8]
/* 0518aaec */  MOV RDI,qword ptr [RSP + 0x8d8]
/* 0518aaf4 */  AND RSI,-0x2
/* 0518aaf8 */  CALL 0x0412a280
/* 0518aafd */  MOV RDI,RBX
/* 0518ab00 */  CALL 0x0eee2d70
/* 0518ab05 */  MOV RBX,RAX
/* 0518ab08 */  TEST byte ptr [RSP + 0x8f8],0x1
/* 0518ab10 */  JZ 0x0518fcbe
/* 0518ab16 */  MOV RSI,qword ptr [RSP + 0x8f8]
/* 0518ab1e */  MOV RDI,qword ptr [RSP + 0x908]
/* 0518ab26 */  AND RSI,-0x2
/* 0518ab2a */  CALL 0x0412a280
/* 0518ab2f */  MOV RDI,RBX
/* 0518ab32 */  CALL 0x0eee2d70
/* 0518ab37 */  MOV RBX,RAX
/* 0518ab3a */  TEST byte ptr [RSP + 0x928],0x1
/* 0518ab42 */  JZ 0x0518fcbe
/* 0518ab48 */  MOV RSI,qword ptr [RSP + 0x928]
/* 0518ab50 */  MOV RDI,qword ptr [RSP + 0x938]
/* 0518ab58 */  AND RSI,-0x2
/* 0518ab5c */  CALL 0x0412a280
/* 0518ab61 */  MOV RDI,RBX
/* 0518ab64 */  CALL 0x0eee2d70
/* 0518ab69 */  MOV RBX,RAX
/* 0518ab6c */  TEST byte ptr [RSP + 0x958],0x1
/* 0518ab74 */  JZ 0x0518fcbe
/* 0518ab7a */  MOV RSI,qword ptr [RSP + 0x958]
/* 0518ab82 */  MOV RDI,qword ptr [RSP + 0x968]
/* 0518ab8a */  AND RSI,-0x2
/* 0518ab8e */  CALL 0x0412a280
/* 0518ab93 */  MOV RDI,RBX
/* 0518ab96 */  CALL 0x0eee2d70
/* 0518ab9b */  MOV RBX,RAX
/* 0518ab9e */  TEST byte ptr [RSP + 0x988],0x1
/* 0518aba6 */  JZ 0x0518fcbe
/* 0518abac */  MOV RSI,qword ptr [RSP + 0x988]
/* 0518abb4 */  MOV RDI,qword ptr [RSP + 0x998]
/* 0518abbc */  AND RSI,-0x2
/* 0518abc0 */  CALL 0x0412a280
/* 0518abc5 */  MOV RDI,RBX
/* 0518abc8 */  CALL 0x0eee2d70
/* 0518abcd */  MOV RBX,RAX
/* 0518abd0 */  TEST byte ptr [RSP + 0x9b8],0x1
/* 0518abd8 */  JZ 0x0518fcbe
/* 0518abde */  MOV RSI,qword ptr [RSP + 0x9b8]
/* 0518abe6 */  MOV RDI,qword ptr [RSP + 0x9c8]
/* 0518abee */  AND RSI,-0x2
/* 0518abf2 */  CALL 0x0412a280
/* 0518abf7 */  MOV RDI,RBX
/* 0518abfa */  CALL 0x0eee2d70
/* 0518abff */  MOV RBX,RAX
/* 0518ac02 */  TEST byte ptr [RSP + 0x9e8],0x1
/* 0518ac0a */  JZ 0x0518fcbe
/* 0518ac10 */  MOV RSI,qword ptr [RSP + 0x9e8]
/* 0518ac18 */  MOV RDI,qword ptr [RSP + 0x9f8]
/* 0518ac20 */  AND RSI,-0x2
/* 0518ac24 */  CALL 0x0412a280
/* 0518ac29 */  MOV RDI,RBX
/* 0518ac2c */  CALL 0x0eee2d70
/* 0518ac31 */  MOV RBX,RAX
/* 0518ac34 */  TEST byte ptr [RSP + 0xa18],0x1
/* 0518ac3c */  JZ 0x0518fcbe
/* 0518ac42 */  MOV RSI,qword ptr [RSP + 0xa18]
/* 0518ac4a */  MOV RDI,qword ptr [RSP + 0xa28]
/* 0518ac52 */  AND RSI,-0x2
/* 0518ac56 */  CALL 0x0412a280
/* 0518ac5b */  MOV RDI,RBX
/* 0518ac5e */  CALL 0x0eee2d70
/* 0518ac63 */  MOV RBX,RAX
/* 0518ac66 */  TEST byte ptr [RSP + 0xa48],0x1
/* 0518ac6e */  JZ 0x0518fcbe
/* 0518ac74 */  MOV RSI,qword ptr [RSP + 0xa48]
/* 0518ac7c */  MOV RDI,qword ptr [RSP + 0xa58]
/* 0518ac84 */  AND RSI,-0x2
/* 0518ac88 */  CALL 0x0412a280
/* 0518ac8d */  MOV RDI,RBX
/* 0518ac90 */  CALL 0x0eee2d70
/* 0518ac95 */  MOV RBX,RAX
/* 0518ac98 */  TEST byte ptr [RSP + 0xa78],0x1
/* 0518aca0 */  JZ 0x0518fcbe
/* 0518aca6 */  MOV RSI,qword ptr [RSP + 0xa78]
/* 0518acae */  MOV RDI,qword ptr [RSP + 0xa88]
/* 0518acb6 */  AND RSI,-0x2
/* 0518acba */  CALL 0x0412a280
/* 0518acbf */  MOV RDI,RBX
/* 0518acc2 */  CALL 0x0eee2d70
/* 0518acc7 */  MOV RBX,RAX
/* 0518acca */  TEST byte ptr [RSP + 0xaa8],0x1
/* 0518acd2 */  JZ 0x0518fcbe
/* 0518acd8 */  MOV RSI,qword ptr [RSP + 0xaa8]
/* 0518ace0 */  MOV RDI,qword ptr [RSP + 0xab8]
/* 0518ace8 */  AND RSI,-0x2
/* 0518acec */  CALL 0x0412a280
/* 0518acf1 */  MOV RDI,RBX
/* 0518acf4 */  CALL 0x0eee2d70
/* 0518acf9 */  MOV RBX,RAX
/* 0518acfc */  TEST byte ptr [RSP + 0xad8],0x1
/* 0518ad04 */  JZ 0x0518fcbe
/* 0518ad0a */  MOV RSI,qword ptr [RSP + 0xad8]
/* 0518ad12 */  MOV RDI,qword ptr [RSP + 0xae8]
/* 0518ad1a */  AND RSI,-0x2
/* 0518ad1e */  CALL 0x0412a280
/* 0518ad23 */  MOV RDI,RBX
/* 0518ad26 */  CALL 0x0eee2d70
/* 0518ad2b */  MOV RBX,RAX
/* 0518ad2e */  TEST byte ptr [RSP + 0xb08],0x1
/* 0518ad36 */  JZ 0x0518fcbe
/* 0518ad3c */  MOV RSI,qword ptr [RSP + 0xb08]
/* 0518ad44 */  MOV RDI,qword ptr [RSP + 0xb18]
/* 0518ad4c */  AND RSI,-0x2
/* 0518ad50 */  CALL 0x0412a280
/* 0518ad55 */  MOV RDI,RBX
/* 0518ad58 */  CALL 0x0eee2d70
/* 0518ad5d */  MOV RBX,RAX
/* 0518ad60 */  TEST byte ptr [RSP + 0xb38],0x1
/* 0518ad68 */  JZ 0x0518fcbe
/* 0518ad6e */  MOV RSI,qword ptr [RSP + 0xb38]
/* 0518ad76 */  MOV RDI,qword ptr [RSP + 0xb48]
/* 0518ad7e */  AND RSI,-0x2
/* 0518ad82 */  CALL 0x0412a280
/* 0518ad87 */  MOV RDI,RBX
/* 0518ad8a */  CALL 0x0eee2d70
/* 0518ad8f */  MOV RBX,RAX
/* 0518ad92 */  LEA RDI,[RSP + 0x20]
/* 0518ad97 */  CALL 0x050d26f0
/* 0518ad9c */  MOV ESI,0x108
/* 0518ada1 */  MOV RDI,R12
/* 0518ada4 */  CALL 0x0412a280
/* 0518ada9 */  JMP 0x0518b171
/* 0518b120 */  TEST byte ptr [RSP + 0xca0],0x1
/* 0518b128 */  JNZ 0x0518c094
/* 0518b12e */  JMP 0x0518fcbe
/* 0518b171 */  TEST byte ptr [RSP + 0xb50],0x1
/* 0518b179 */  JZ 0x0518fcbe
/* 0518b17f */  MOV RSI,qword ptr [RSP + 0xb50]
/* 0518b187 */  MOV RDI,qword ptr [RSP + 0xb60]
/* 0518b18f */  AND RSI,-0x2
/* 0518b193 */  CALL 0x0412a280
/* 0518b198 */  MOV RDI,RBX
/* 0518b19b */  CALL 0x0eee2d70
/* 0518b1a0 */  MOV RBX,RAX
/* 0518b1a3 */  TEST byte ptr [RSP + 0xb80],0x1
/* 0518b1ab */  JZ 0x0518fcbe
/* 0518b1b1 */  MOV RSI,qword ptr [RSP + 0xb80]
/* 0518b1b9 */  MOV RDI,qword ptr [RSP + 0xb90]
/* 0518b1c1 */  AND RSI,-0x2
/* 0518b1c5 */  CALL 0x0412a280
/* 0518b1ca */  MOV RDI,RBX
/* 0518b1cd */  CALL 0x0eee2d70
/* 0518b1d2 */  MOV RBX,RAX
/* 0518b1d5 */  TEST byte ptr [RSP + 0xbb0],0x1
/* 0518b1dd */  JZ 0x0518fcbe
/* 0518b1e3 */  MOV RSI,qword ptr [RSP + 0xbb0]
/* 0518b1eb */  MOV RDI,qword ptr [RSP + 0xbc0]
/* 0518b1f3 */  AND RSI,-0x2
/* 0518b1f7 */  CALL 0x0412a280
/* 0518b1fc */  MOV RDI,RBX
/* 0518b1ff */  CALL 0x0eee2d70
/* 0518b204 */  MOV RBX,RAX
/* 0518b207 */  TEST byte ptr [RSP + 0xbe0],0x1
/* 0518b20f */  JZ 0x0518fcbe
/* 0518b215 */  MOV RSI,qword ptr [RSP + 0xbe0]
/* 0518b21d */  MOV RDI,qword ptr [RSP + 0xbf0]
/* 0518b225 */  AND RSI,-0x2
/* 0518b229 */  CALL 0x0412a280
/* 0518b22e */  MOV RDI,RBX
/* 0518b231 */  CALL 0x0eee2d70
/* 0518b236 */  MOV RBX,RAX
/* 0518b239 */  TEST byte ptr [RSP + 0xc10],0x1
/* 0518b241 */  JZ 0x0518fcbe
/* 0518b247 */  MOV RSI,qword ptr [RSP + 0xc10]
/* 0518b24f */  MOV RDI,qword ptr [RSP + 0xc20]
/* 0518b257 */  AND RSI,-0x2
/* 0518b25b */  CALL 0x0412a280
/* 0518b260 */  MOV RDI,RBX
/* 0518b263 */  CALL 0x0eee2d70
/* 0518b268 */  MOV RBX,RAX
/* 0518b26b */  TEST byte ptr [RSP + 0xc40],0x1
/* 0518b273 */  JZ 0x0518fcbe
/* 0518b279 */  MOV RSI,qword ptr [RSP + 0xc40]
/* 0518b281 */  MOV RDI,qword ptr [RSP + 0xc50]
/* 0518b289 */  AND RSI,-0x2
/* 0518b28d */  CALL 0x0412a280
/* 0518b292 */  MOV RDI,RBX
/* 0518b295 */  CALL 0x0eee2d70
/* 0518b29a */  MOV RBX,RAX
/* 0518b29d */  TEST byte ptr [RSP + 0xc70],0x1
/* 0518b2a5 */  JZ 0x0518fcbe
/* 0518b2ab */  MOV RSI,qword ptr [RSP + 0xc70]
/* 0518b2b3 */  MOV RDI,qword ptr [RSP + 0xc80]
/* 0518b2bb */  AND RSI,-0x2
/* 0518b2bf */  CALL 0x0412a280
/* 0518b2c4 */  MOV RDI,RBX
/* 0518b2c7 */  CALL 0x0eee2d70
/* 0518b2cc */  MOV RBX,RAX
/* 0518b2cf */  LEA RDI,[RSP + 0x20]
/* 0518b2d4 */  CALL 0x050d26f0
/* 0518b2d9 */  MOV ESI,0x108
/* 0518b2de */  MOV RDI,R12
/* 0518b2e1 */  CALL 0x0412a280
/* 0518b2e6 */  TEST byte ptr [RSP + 0xc88],0x1
/* 0518b2ee */  JZ 0x0518b120
/* 0518b2f4 */  JMP 0x0518c05a
/* 0518bfde */  TEST byte ptr [RSP + 0x1120],0x1
/* 0518bfe6 */  JNZ 0x0518e9a6
/* 0518bfec */  JMP 0x0518fcbe
/* 0518c05a */  MOV RSI,qword ptr [RSP + 0xc88]
/* 0518c062 */  MOV RDI,qword ptr [RSP + 0xc98]
/* 0518c06a */  AND RSI,-0x2
/* 0518c06e */  CALL 0x0412a280
/* 0518c073 */  TEST byte ptr [RSP + 0xca0],0x1
/* 0518c07b */  JZ 0x0518fcbe
/* 0518c081 */  JMP 0x0518c094
/* 0518c094 */  MOV RSI,qword ptr [RSP + 0xca0]
/* 0518c09c */  MOV RDI,qword ptr [RSP + 0xcb0]
/* 0518c0a4 */  AND RSI,-0x2
/* 0518c0a8 */  CALL 0x0412a280
/* 0518c0ad */  MOV RDI,RBX
/* 0518c0b0 */  CALL 0x0eee2d70
/* 0518c0b5 */  MOV RBX,RAX
/* 0518c0b8 */  TEST byte ptr [RSP + 0xcd0],0x1
/* 0518c0c0 */  JZ 0x0518fcbe
/* 0518c0c6 */  MOV RSI,qword ptr [RSP + 0xcd0]
/* 0518c0ce */  MOV RDI,qword ptr [RSP + 0xce0]
/* 0518c0d6 */  AND RSI,-0x2
/* 0518c0da */  CALL 0x0412a280
/* 0518c0df */  MOV RDI,RBX
/* 0518c0e2 */  CALL 0x0eee2d70
/* 0518c0e7 */  MOV RBX,RAX
/* 0518c0ea */  TEST byte ptr [RSP + 0xd00],0x1
/* 0518c0f2 */  JZ 0x0518fcbe
/* 0518c0f8 */  MOV RSI,qword ptr [RSP + 0xd00]
/* 0518c100 */  MOV RDI,qword ptr [RSP + 0xd10]
/* 0518c108 */  AND RSI,-0x2
/* 0518c10c */  CALL 0x0412a280
/* 0518c111 */  MOV RDI,RBX
/* 0518c114 */  CALL 0x0eee2d70
/* 0518c119 */  MOV RBX,RAX
/* 0518c11c */  TEST byte ptr [RSP + 0xd30],0x1
/* 0518c124 */  JZ 0x0518fcbe
/* 0518c12a */  MOV RSI,qword ptr [RSP + 0xd30]
/* 0518c132 */  MOV RDI,qword ptr [RSP + 0xd40]
/* 0518c13a */  AND RSI,-0x2
/* 0518c13e */  CALL 0x0412a280
/* 0518c143 */  MOV RDI,RBX
/* 0518c146 */  CALL 0x0eee2d70
/* 0518c14b */  MOV RBX,RAX
/* 0518c14e */  TEST byte ptr [RSP + 0xd60],0x1
/* 0518c156 */  JZ 0x0518fcbe
/* 0518c15c */  MOV RSI,qword ptr [RSP + 0xd60]
/* 0518c164 */  MOV RDI,qword ptr [RSP + 0xd70]
/* 0518c16c */  AND RSI,-0x2
/* 0518c170 */  CALL 0x0412a280
/* 0518c175 */  MOV RDI,RBX
/* 0518c178 */  CALL 0x0eee2d70
/* 0518c17d */  MOV RBX,RAX
/* 0518c180 */  TEST byte ptr [RSP + 0xd90],0x1
/* 0518c188 */  JZ 0x0518fcbe
/* 0518c18e */  MOV RSI,qword ptr [RSP + 0xd90]
/* 0518c196 */  MOV RDI,qword ptr [RSP + 0xda0]
/* 0518c19e */  AND RSI,-0x2
/* 0518c1a2 */  CALL 0x0412a280
/* 0518c1a7 */  MOV RDI,RBX
/* 0518c1aa */  CALL 0x0eee2d70
/* 0518c1af */  MOV RBX,RAX
/* 0518c1b2 */  TEST byte ptr [RSP + 0xdc0],0x1
/* 0518c1ba */  JZ 0x0518fcbe
/* 0518c1c0 */  MOV RSI,qword ptr [RSP + 0xdc0]
/* 0518c1c8 */  MOV RDI,qword ptr [RSP + 0xdd0]
/* 0518c1d0 */  AND RSI,-0x2
/* 0518c1d4 */  CALL 0x0412a280
/* 0518c1d9 */  MOV RDI,RBX
/* 0518c1dc */  CALL 0x0eee2d70
/* 0518c1e1 */  MOV RBX,RAX
/* 0518c1e4 */  TEST byte ptr [RSP + 0xdf0],0x1
/* 0518c1ec */  JZ 0x0518fcbe
/* 0518c1f2 */  MOV RSI,qword ptr [RSP + 0xdf0]
/* 0518c1fa */  MOV RDI,qword ptr [RSP + 0xe00]
/* 0518c202 */  AND RSI,-0x2
/* 0518c206 */  CALL 0x0412a280
/* 0518c20b */  MOV RDI,RBX
/* 0518c20e */  CALL 0x0eee2d70
/* 0518c213 */  MOV RBX,RAX
/* 0518c216 */  TEST byte ptr [RSP + 0xe20],0x1
/* 0518c21e */  JZ 0x0518fcbe
/* 0518c224 */  MOV RSI,qword ptr [RSP + 0xe20]
/* 0518c22c */  MOV RDI,qword ptr [RSP + 0xe30]
/* 0518c234 */  AND RSI,-0x2
/* 0518c238 */  CALL 0x0412a280
/* 0518c23d */  MOV RDI,RBX
/* 0518c240 */  CALL 0x0eee2d70
/* 0518c245 */  MOV RBX,RAX
/* 0518c248 */  TEST byte ptr [RSP + 0xe50],0x1
/* 0518c250 */  JZ 0x0518fcbe
/* 0518c256 */  MOV RSI,qword ptr [RSP + 0xe50]
/* 0518c25e */  MOV RDI,qword ptr [RSP + 0xe60]
/* 0518c266 */  AND RSI,-0x2
/* 0518c26a */  CALL 0x0412a280
/* 0518c26f */  MOV RDI,RBX
/* 0518c272 */  CALL 0x0eee2d70
/* 0518c277 */  MOV RBX,RAX
/* 0518c27a */  TEST byte ptr [RSP + 0xe80],0x1
/* 0518c282 */  JZ 0x0518fcbe
/* 0518c288 */  MOV RSI,qword ptr [RSP + 0xe80]
/* 0518c290 */  MOV RDI,qword ptr [RSP + 0xe90]
/* 0518c298 */  AND RSI,-0x2
/* 0518c29c */  CALL 0x0412a280
/* 0518c2a1 */  MOV RDI,RBX
/* 0518c2a4 */  CALL 0x0eee2d70
/* 0518c2a9 */  MOV RBX,RAX
/* 0518c2ac */  TEST byte ptr [RSP + 0xeb0],0x1
/* 0518c2b4 */  JZ 0x0518fcbe
/* 0518c2ba */  MOV RSI,qword ptr [RSP + 0xeb0]
/* 0518c2c2 */  MOV RDI,qword ptr [RSP + 0xec0]
/* 0518c2ca */  AND RSI,-0x2
/* 0518c2ce */  CALL 0x0412a280
/* 0518c2d3 */  MOV RDI,RBX
/* 0518c2d6 */  CALL 0x0eee2d70
/* 0518c2db */  MOV RBX,RAX
/* 0518c2de */  TEST byte ptr [RSP + 0xee0],0x1
/* 0518c2e6 */  JZ 0x0518fcbe
/* 0518c2ec */  MOV RSI,qword ptr [RSP + 0xee0]
/* 0518c2f4 */  MOV RDI,qword ptr [RSP + 0xef0]
/* 0518c2fc */  AND RSI,-0x2
/* 0518c300 */  CALL 0x0412a280
/* 0518c305 */  MOV RDI,RBX
/* 0518c308 */  CALL 0x0eee2d70
/* 0518c30d */  MOV RBX,RAX
/* 0518c310 */  TEST byte ptr [RSP + 0xf10],0x1
/* 0518c318 */  JZ 0x0518fcbe
/* 0518c31e */  MOV RSI,qword ptr [RSP + 0xf10]
/* 0518c326 */  MOV RDI,qword ptr [RSP + 0xf20]
/* 0518c32e */  AND RSI,-0x2
/* 0518c332 */  CALL 0x0412a280
/* 0518c337 */  MOV RDI,RBX
/* 0518c33a */  CALL 0x0eee2d70
/* 0518c33f */  MOV RBX,RAX
/* 0518c342 */  TEST byte ptr [RSP + 0xf40],0x1
/* 0518c34a */  JZ 0x0518fcbe
/* 0518c350 */  MOV RSI,qword ptr [RSP + 0xf40]
/* 0518c358 */  MOV RDI,qword ptr [RSP + 0xf50]
/* 0518c360 */  AND RSI,-0x2
/* 0518c364 */  CALL 0x0412a280
/* 0518c369 */  MOV RDI,RBX
/* 0518c36c */  CALL 0x0eee2d70
/* 0518c371 */  MOV RBX,RAX
/* 0518c374 */  TEST byte ptr [RSP + 0xf70],0x1
/* 0518c37c */  JZ 0x0518fcbe
/* 0518c382 */  MOV RSI,qword ptr [RSP + 0xf70]
/* 0518c38a */  MOV RDI,qword ptr [RSP + 0xf80]
/* 0518c392 */  AND RSI,-0x2
/* 0518c396 */  CALL 0x0412a280
/* 0518c39b */  MOV RDI,RBX
/* 0518c39e */  CALL 0x0eee2d70
/* 0518c3a3 */  MOV RBX,RAX
/* 0518c3a6 */  TEST byte ptr [RSP + 0xfa0],0x1
/* 0518c3ae */  JZ 0x0518fcbe
/* 0518c3b4 */  MOV RSI,qword ptr [RSP + 0xfa0]
/* 0518c3bc */  MOV RDI,qword ptr [RSP + 0xfb0]
/* 0518c3c4 */  AND RSI,-0x2
/* 0518c3c8 */  CALL 0x0412a280
/* 0518c3cd */  MOV RDI,RBX
/* 0518c3d0 */  CALL 0x0eee2d70
/* 0518c3d5 */  MOV RBX,RAX
/* 0518c3d8 */  TEST byte ptr [RSP + 0xfd0],0x1
/* 0518c3e0 */  JZ 0x0518fcbe
/* 0518c3e6 */  MOV RSI,qword ptr [RSP + 0xfd0]
/* 0518c3ee */  MOV RDI,qword ptr [RSP + 0xfe0]
/* 0518c3f6 */  AND RSI,-0x2
/* 0518c3fa */  CALL 0x0412a280
/* 0518c3ff */  MOV RDI,RBX
/* 0518c402 */  CALL 0x0eee2d70
/* 0518c407 */  MOV RBX,RAX
/* 0518c40a */  TEST byte ptr [RSP + 0x1000],0x1
/* 0518c412 */  JZ 0x0518fcbe
/* 0518c418 */  MOV RSI,qword ptr [RSP + 0x1000]
/* 0518c420 */  MOV RDI,qword ptr [RSP + 0x1010]
/* 0518c428 */  AND RSI,-0x2
/* 0518c42c */  CALL 0x0412a280
/* 0518c431 */  MOV RDI,RBX
/* 0518c434 */  CALL 0x0eee2d70
/* 0518c439 */  MOV RBX,RAX
/* 0518c43c */  TEST byte ptr [RSP + 0x1030],0x1
/* 0518c444 */  JZ 0x0518fcbe
/* 0518c44a */  MOV RSI,qword ptr [RSP + 0x1030]
/* 0518c452 */  MOV RDI,qword ptr [RSP + 0x1040]
/* 0518c45a */  AND RSI,-0x2
/* 0518c45e */  CALL 0x0412a280
/* 0518c463 */  MOV RDI,RBX
/* 0518c466 */  CALL 0x0eee2d70
/* 0518c46b */  MOV RBX,RAX
/* 0518c46e */  TEST byte ptr [RSP + 0x1060],0x1
/* 0518c476 */  JZ 0x0518fcbe
/* 0518c47c */  MOV RSI,qword ptr [RSP + 0x1060]
/* 0518c484 */  MOV RDI,qword ptr [RSP + 0x1070]
/* 0518c48c */  AND RSI,-0x2
/* 0518c490 */  CALL 0x0412a280
/* 0518c495 */  MOV RDI,RBX
/* 0518c498 */  CALL 0x0eee2d70
/* 0518c49d */  MOV RBX,RAX
/* 0518c4a0 */  TEST byte ptr [RSP + 0x1090],0x1
/* 0518c4a8 */  JZ 0x0518fcbe
/* 0518c4ae */  MOV RSI,qword ptr [RSP + 0x1090]
/* 0518c4b6 */  MOV RDI,qword ptr [RSP + 0x10a0]
/* 0518c4be */  AND RSI,-0x2
/* 0518c4c2 */  CALL 0x0412a280
/* 0518c4c7 */  MOV RDI,RBX
/* 0518c4ca */  CALL 0x0eee2d70
/* 0518c4cf */  MOV RBX,RAX
/* 0518c4d2 */  TEST byte ptr [RSP + 0x10c0],0x1
/* 0518c4da */  JZ 0x0518fcbe
/* 0518c4e0 */  MOV RSI,qword ptr [RSP + 0x10c0]
/* 0518c4e8 */  MOV RDI,qword ptr [RSP + 0x10d0]
/* 0518c4f0 */  AND RSI,-0x2
/* 0518c4f4 */  CALL 0x0412a280
/* 0518c4f9 */  MOV RDI,RBX
/* 0518c4fc */  CALL 0x0eee2d70
/* 0518c501 */  MOV RBX,RAX
/* 0518c504 */  TEST byte ptr [RSP + 0x10f0],0x1
/* 0518c50c */  JZ 0x0518fcbe
/* 0518c512 */  MOV RSI,qword ptr [RSP + 0x10f0]
/* 0518c51a */  MOV RDI,qword ptr [RSP + 0x1100]
/* 0518c522 */  AND RSI,-0x2
/* 0518c526 */  CALL 0x0412a280
/* 0518c52b */  MOV RDI,RBX
/* 0518c52e */  CALL 0x0eee2d70
/* 0518c533 */  MOV RBX,RAX
/* 0518c536 */  TEST byte ptr [RSP + 0x1108],0x1
/* 0518c53e */  JZ 0x0518bfde
/* 0518c544 */  JMP 0x0518e927
/* 0518e927 */  MOV RSI,qword ptr [RSP + 0x1108]
/* 0518e92f */  MOV RDI,qword ptr [RSP + 0x1118]
/* 0518e937 */  AND RSI,-0x2
/* 0518e93b */  CALL 0x0412a280
/* 0518e940 */  TEST byte ptr [RSP + 0x1120],0x1
/* 0518e948 */  JZ 0x0518fcbe
/* 0518e94e */  JMP 0x0518e9a6
/* 0518e970 */  TEST byte ptr [RSP + 0x1d80],0x1
/* 0518e978 */  JNZ 0x0518fb3a
/* 0518e97e */  JMP 0x0518fcbe
/* 0518e9a6 */  MOV RSI,qword ptr [RSP + 0x1120]
/* 0518e9ae */  MOV RDI,qword ptr [RSP + 0x1130]
/* 0518e9b6 */  AND RSI,-0x2
/* 0518e9ba */  CALL 0x0412a280
/* 0518e9bf */  MOV RDI,RBX
/* 0518e9c2 */  CALL 0x0eee2d70
/* 0518e9c7 */  MOV RBX,RAX
/* 0518e9ca */  TEST byte ptr [RSP + 0x1d68],0x1
/* 0518e9d2 */  JZ 0x0518e970
/* 0518e9d4 */  JMP 0x0518e9e3
/* 0518e9e3 */  MOV RSI,qword ptr [RSP + 0x1d68]
/* 0518e9eb */  MOV RDI,qword ptr [RSP + 0x1d78]
/* 0518e9f3 */  AND RSI,-0x2
/* 0518e9f7 */  CALL 0x0412a280
/* 0518e9fc */  TEST byte ptr [RSP + 0x1d80],0x1
/* 0518ea04 */  JZ 0x0518fcbe
/* 0518ea0a */  JMP 0x0518fb3a
/* 0518fb3a */  MOV RSI,qword ptr [RSP + 0x1d80]
/* 0518fb42 */  MOV RDI,qword ptr [RSP + 0x1d90]
/* 0518fb4a */  AND RSI,-0x2
/* 0518fb4e */  CALL 0x0412a280
/* 0518fb53 */  MOV RDI,RBX
/* 0518fb56 */  CALL 0x0eee2d70
/* 0518fb5b */  MOV RBX,RAX
/* 0518fb5e */  TEST byte ptr [RSP + 0x1db0],0x1
/* 0518fb66 */  JZ 0x0518fcbe
/* 0518fb6c */  MOV RSI,qword ptr [RSP + 0x1db0]
/* 0518fb74 */  MOV RDI,qword ptr [RSP + 0x1dc0]
/* 0518fb7c */  AND RSI,-0x2
/* 0518fb80 */  CALL 0x0412a280
/* 0518fb85 */  MOV RDI,RBX
/* 0518fb88 */  CALL 0x0eee2d70
/* 0518fb8d */  MOV RBX,RAX
/* 0518fb90 */  TEST byte ptr [RSP + 0x1de0],0x1
/* 0518fb98 */  JZ 0x0518fcbe
/* 0518fb9e */  MOV RSI,qword ptr [RSP + 0x1de0]
/* 0518fba6 */  MOV RDI,qword ptr [RSP + 0x1df0]
/* 0518fbae */  AND RSI,-0x2
/* 0518fbb2 */  CALL 0x0412a280
/* 0518fbb7 */  MOV RDI,RBX
/* 0518fbba */  CALL 0x0eee2d70
/* 0518fbbf */  MOV RBX,RAX
/* 0518fbc2 */  TEST byte ptr [RSP + 0x1e10],0x1
/* 0518fbca */  JZ 0x0518fcbe
/* 0518fbd0 */  MOV RSI,qword ptr [RSP + 0x1e10]
/* 0518fbd8 */  MOV RDI,qword ptr [RSP + 0x1e20]
/* 0518fbe0 */  AND RSI,-0x2
/* 0518fbe4 */  CALL 0x0412a280
/* 0518fbe9 */  MOV RDI,RBX
/* 0518fbec */  CALL 0x0eee2d70
/* 0518fbf1 */  MOV RBX,RAX
/* 0518fbf4 */  TEST byte ptr [RSP + 0x1e40],0x1
/* 0518fbfc */  JZ 0x0518fcbe
/* 0518fc02 */  MOV RSI,qword ptr [RSP + 0x1e40]
/* 0518fc0a */  MOV RDI,qword ptr [RSP + 0x1e50]
/* 0518fc12 */  AND RSI,-0x2
/* 0518fc16 */  CALL 0x0412a280
/* 0518fc1b */  MOV RDI,RBX
/* 0518fc1e */  CALL 0x0eee2d70
/* 0518fc23 */  MOV RBX,RAX
/* 0518fc26 */  TEST byte ptr [RSP + 0x1e70],0x1
/* 0518fc2e */  JZ 0x0518fcbe
/* 0518fc34 */  MOV RSI,qword ptr [RSP + 0x1e70]
/* 0518fc3c */  MOV RDI,qword ptr [RSP + 0x1e80]
/* 0518fc44 */  AND RSI,-0x2
/* 0518fc48 */  CALL 0x0412a280
/* 0518fc4d */  MOV RDI,RBX
/* 0518fc50 */  CALL 0x0eee2d70
/* 0518fc55 */  MOV RBX,RAX
/* 0518fc58 */  TEST byte ptr [RSP + 0x1ea0],0x1
/* 0518fc60 */  JZ 0x0518fcbe
/* 0518fc62 */  MOV RSI,qword ptr [RSP + 0x1ea0]
/* 0518fc6a */  MOV RDI,qword ptr [RSP + 0x1eb0]
/* 0518fc72 */  AND RSI,-0x2
/* 0518fc76 */  CALL 0x0412a280
/* 0518fc7b */  MOV RDI,RBX
/* 0518fc7e */  CALL 0x0eee2d70
/* 0518fc83 */  MOV RBX,RAX
/* 0518fc86 */  TEST byte ptr [RSP + 0x1ed0],0x1
/* 0518fc8e */  JZ 0x0518fcbe
/* 0518fc90 */  MOV RSI,qword ptr [RSP + 0x1ed0]
/* 0518fc98 */  MOV RDI,qword ptr [RSP + 0x1ee0]
/* 0518fca0 */  AND RSI,-0x2
/* 0518fca4 */  CALL 0x0412a280
/* 0518fca9 */  MOV RDI,RBX
/* 0518fcac */  CALL 0x0eee2d70
/* 0518fcb1 */  MOV RBX,RAX
/* 0518fcb4 */  TEST byte ptr [RSP + 0x1f00],0x1
/* 0518fcbc */  JNZ 0x0518fcc6
/* 0518fcbe */  MOV RDI,RBX
/* 0518fcc1 */  CALL 0x0eee2d70
/* 0518fcc6 */  MOV RSI,qword ptr [RSP + 0x1f00]
/* 0518fcce */  MOV RDI,qword ptr [RSP + 0x1f10]
/* 0518fcd6 */  AND RSI,-0x2
/* 0518fcda */  CALL 0x0412a280
/* 0518fcdf */  MOV RDI,RBX
/* 0518fce2 */  CALL 0x0eee2d70
/* 0518fce7 */  INT3
