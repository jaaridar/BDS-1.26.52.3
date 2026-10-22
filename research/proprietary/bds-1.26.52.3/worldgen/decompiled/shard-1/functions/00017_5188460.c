/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5188460
 * Label: OverworldGeneratorMultinoise::vslot54
 * Body:  [[05188460, 0518848d] [051884fe, 05188520] [0518a321, 0518a539]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot54
 */


void wg_OverworldGeneratorMultinoise__vslot54(void)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  uint in_stack_00000078;
  undefined8 in_stack_00000088;
  byte bStack0000000000000118;
  undefined7 uStack0000000000000119;
  undefined8 in_stack_00000128;
  byte bStack0000000000000178;
  undefined7 uStack0000000000000179;
  undefined8 in_stack_00000188;
  byte bStack00000000000001a8;
  undefined7 uStack00000000000001a9;
  undefined8 in_stack_000001b8;
  byte bStack00000000000001d8;
  undefined7 uStack00000000000001d9;
  undefined8 in_stack_000001e8;
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
  
  func_0x0412a280(in_stack_00000088,in_stack_00000078 & 0xfffffffe);
  func_0x050d26f0(&stack0x00000060);
  func_0x0412a280();
  if ((bStack0000000000000118 & 1) != 0) {
    func_0x0412a280(in_stack_00000128,
                    CONCAT71(uStack0000000000000119,bStack0000000000000118) & 0xfffffffffffffffe);
    unaff_RBX = func_0x0eee2d70();
    if ((bStack0000000000000178 & 1) != 0) {
      func_0x0412a280(in_stack_00000188,
                      CONCAT71(uStack0000000000000179,bStack0000000000000178) & 0xfffffffffffffffe);
      unaff_RBX = func_0x0eee2d70(unaff_RBX);
      if ((bStack00000000000001a8 & 1) != 0) {
        func_0x0412a280(in_stack_000001b8,
                        CONCAT71(uStack00000000000001a9,bStack00000000000001a8) & 0xfffffffffffffffe
                       );
        unaff_RBX = func_0x0eee2d70(unaff_RBX);
        if ((bStack00000000000001d8 & 1) != 0) {
          func_0x0412a280(in_stack_000001e8,
                          CONCAT71(uStack00000000000001d9,bStack00000000000001d8) &
                          0xfffffffffffffffe);
          unaff_RBX = func_0x0eee2d70(unaff_RBX);
          if ((in_stack_00000208 & 1) != 0) {
            func_0x0412a280(in_stack_00000218,
                            CONCAT71(in_stack_00000209,in_stack_00000208) & 0xfffffffffffffffe);
            unaff_RBX = func_0x0eee2d70(unaff_RBX);
            if ((in_stack_00000238 & 1) != 0) {
              func_0x0412a280(in_stack_00000248,
                              CONCAT71(in_stack_00000239,in_stack_00000238) & 0xfffffffffffffffe);
              unaff_RBX = func_0x0eee2d70(unaff_RBX);
              if ((in_stack_00000268 & 1) != 0) {
                func_0x0412a280(in_stack_00000278,
                                CONCAT71(in_stack_00000269,in_stack_00000268) & 0xfffffffffffffffe);
                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                if ((in_stack_00000298 & 1) != 0) {
                  func_0x0412a280(in_stack_000002a8,
                                  CONCAT71(in_stack_00000299,in_stack_00000298) & 0xfffffffffffffffe
                                 );
                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                  if ((in_stack_000002c8 & 1) != 0) {
                    func_0x0412a280(in_stack_000002d8,
                                    CONCAT71(in_stack_000002c9,in_stack_000002c8) &
                                    0xfffffffffffffffe);
                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                    if ((in_stack_000002f8 & 1) != 0) {
                      func_0x0412a280(in_stack_00000308,
                                      CONCAT71(in_stack_000002f9,in_stack_000002f8) &
                                      0xfffffffffffffffe);
                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                      if ((in_stack_00000328 & 1) != 0) {
                        func_0x0412a280(in_stack_00000338,
                                        CONCAT71(in_stack_00000329,in_stack_00000328) &
                                        0xfffffffffffffffe);
                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                        if ((in_stack_00000358 & 1) != 0) {
                          func_0x0412a280(in_stack_00000368,
                                          CONCAT71(in_stack_00000359,in_stack_00000358) &
                                          0xfffffffffffffffe);
                          unaff_RBX = func_0x0eee2d70(unaff_RBX);
                          if ((in_stack_00000388 & 1) != 0) {
                            func_0x0412a280(in_stack_00000398,
                                            CONCAT71(in_stack_00000389,in_stack_00000388) &
                                            0xfffffffffffffffe);
                            unaff_RBX = func_0x0eee2d70(unaff_RBX);
                            if ((in_stack_000003b8 & 1) != 0) {
                              func_0x0412a280(in_stack_000003c8,
                                              CONCAT71(in_stack_000003b9,in_stack_000003b8) &
                                              0xfffffffffffffffe);
                              unaff_RBX = func_0x0eee2d70(unaff_RBX);
                              if ((in_stack_000003e8 & 1) != 0) {
                                func_0x0412a280(in_stack_000003f8,
                                                CONCAT71(in_stack_000003e9,in_stack_000003e8) &
                                                0xfffffffffffffffe);
                                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                if ((in_stack_00000418 & 1) != 0) {
                                  func_0x0412a280(in_stack_00000428,
                                                  CONCAT71(in_stack_00000419,in_stack_00000418) &
                                                  0xfffffffffffffffe);
                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                  if ((in_stack_00000448 & 1) != 0) {
                                    func_0x0412a280(in_stack_00000458,
                                                    CONCAT71(in_stack_00000449,in_stack_00000448) &
                                                    0xfffffffffffffffe);
                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                    if ((in_stack_00000478 & 1) != 0) {
                                      func_0x0412a280(in_stack_00000488,
                                                      CONCAT71(in_stack_00000479,in_stack_00000478)
                                                      & 0xfffffffffffffffe);
                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                      if ((in_stack_000004a8 & 1) != 0) {
                                        func_0x0412a280(in_stack_000004b8,
                                                        CONCAT71(in_stack_000004a9,in_stack_000004a8
                                                                ) & 0xfffffffffffffffe);
                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                        if ((in_stack_000004d8 & 1) != 0) {
                                          func_0x0412a280(in_stack_000004e8,
                                                          CONCAT71(in_stack_000004d9,
                                                                   in_stack_000004d8) &
                                                          0xfffffffffffffffe);
                                          unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                          if ((in_stack_00000508 & 1) != 0) {
                                            func_0x0412a280(in_stack_00000518,
                                                            CONCAT71(in_stack_00000509,
                                                                     in_stack_00000508) &
                                                            0xfffffffffffffffe);
                                            unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                            if ((in_stack_00000538 & 1) != 0) {
                                              func_0x0412a280(in_stack_00000548,
                                                              CONCAT71(in_stack_00000539,
                                                                       in_stack_00000538) &
                                                              0xfffffffffffffffe);
                                              unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                              if ((in_stack_00000568 & 1) != 0) {
                                                func_0x0412a280(in_stack_00000578,
                                                                CONCAT71(in_stack_00000569,
                                                                         in_stack_00000568) &
                                                                0xfffffffffffffffe);
                                                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                if ((in_stack_00000598 & 1) != 0) {
                                                  func_0x0412a280(in_stack_000005a8,
                                                                  CONCAT71(in_stack_00000599,
                                                                           in_stack_00000598) &
                                                                  0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000005c8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000005d8,
                                                                    CONCAT71(in_stack_000005c9,
                                                                             in_stack_000005c8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000005f8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000608,
                                                                      CONCAT71(in_stack_000005f9,
                                                                               in_stack_000005f8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000628 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000638,
                                                                        CONCAT71(in_stack_00000629,
                                                                                 in_stack_00000628)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000658 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000668,
                                                                          CONCAT71(in_stack_00000659
                                                                                   ,
                                                  in_stack_00000658) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000688 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000698,
                                                                    CONCAT71(in_stack_00000689,
                                                                             in_stack_00000688) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000006b8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000006c8,
                                                                      CONCAT71(in_stack_000006b9,
                                                                               in_stack_000006b8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000006e8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000006f8,
                                                                        CONCAT71(in_stack_000006e9,
                                                                                 in_stack_000006e8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000718 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000728,
                                                                          CONCAT71(in_stack_00000719
                                                                                   ,
                                                  in_stack_00000718) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000748 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000758,
                                                                    CONCAT71(in_stack_00000749,
                                                                             in_stack_00000748) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000778 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000788,
                                                                      CONCAT71(in_stack_00000779,
                                                                               in_stack_00000778) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000007a8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000007b8,
                                                                        CONCAT71(in_stack_000007a9,
                                                                                 in_stack_000007a8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_000007d8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000007e8,
                                                                          CONCAT71(in_stack_000007d9
                                                                                   ,
                                                  in_stack_000007d8) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000808 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000818,
                                                                    CONCAT71(in_stack_00000809,
                                                                             in_stack_00000808) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000838 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000848,
                                                                      CONCAT71(in_stack_00000839,
                                                                               in_stack_00000838) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000868 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000878,
                                                                        CONCAT71(in_stack_00000869,
                                                                                 in_stack_00000868)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000898 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000008a8,
                                                                          CONCAT71(in_stack_00000899
                                                                                   ,
                                                  in_stack_00000898) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000008c8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000008d8,
                                                                    CONCAT71(in_stack_000008c9,
                                                                             in_stack_000008c8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000008f8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000908,
                                                                      CONCAT71(in_stack_000008f9,
                                                                               in_stack_000008f8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000928 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000938,
                                                                        CONCAT71(in_stack_00000929,
                                                                                 in_stack_00000928)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000958 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000968,
                                                                          CONCAT71(in_stack_00000959
                                                                                   ,
                                                  in_stack_00000958) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000988 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000998,
                                                                    CONCAT71(in_stack_00000989,
                                                                             in_stack_00000988) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000009b8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000009c8,
                                                                      CONCAT71(in_stack_000009b9,
                                                                               in_stack_000009b8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000009e8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000009f8,
                                                                        CONCAT71(in_stack_000009e9,
                                                                                 in_stack_000009e8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000a18 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000a28,
                                                                          CONCAT71(in_stack_00000a19
                                                                                   ,
                                                  in_stack_00000a18) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000a48 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000a58,
                                                                    CONCAT71(in_stack_00000a49,
                                                                             in_stack_00000a48) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000a78 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000a88,
                                                                      CONCAT71(in_stack_00000a79,
                                                                               in_stack_00000a78) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000aa8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ab8,
                                                                        CONCAT71(in_stack_00000aa9,
                                                                                 in_stack_00000aa8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000ad8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000ae8,
                                                                          CONCAT71(in_stack_00000ad9
                                                                                   ,
                                                  in_stack_00000ad8) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000b08 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000b18,
                                                                    CONCAT71(in_stack_00000b09,
                                                                             in_stack_00000b08) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000b38 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000b48,
                                                                      CONCAT71(in_stack_00000b39,
                                                                               in_stack_00000b38) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      func_0x050d26f0(&stack0x00000020);
                                                      func_0x0412a280();
                                                      if ((in_stack_00000b50 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000b60,
                                                                        CONCAT71(in_stack_00000b51,
                                                                                 in_stack_00000b50)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000b80 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000b90,
                                                                          CONCAT71(in_stack_00000b81
                                                                                   ,
                                                  in_stack_00000b80) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000bb0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000bc0,
                                                                    CONCAT71(in_stack_00000bb1,
                                                                             in_stack_00000bb0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000be0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000bf0,
                                                                      CONCAT71(in_stack_00000be1,
                                                                               in_stack_00000be0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000c10 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000c20,
                                                                        CONCAT71(in_stack_00000c11,
                                                                                 in_stack_00000c10)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000c40 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000c50,
                                                                          CONCAT71(in_stack_00000c41
                                                                                   ,
                                                  in_stack_00000c40) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000c70 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000c80,
                                                                    CONCAT71(in_stack_00000c71,
                                                                             in_stack_00000c70) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
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
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000cd0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ce0,
                                                                        CONCAT71(in_stack_00000cd1,
                                                                                 in_stack_00000cd0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000d00 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000d10,
                                                                          CONCAT71(in_stack_00000d01
                                                                                   ,
                                                  in_stack_00000d00) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000d30 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000d40,
                                                                    CONCAT71(in_stack_00000d31,
                                                                             in_stack_00000d30) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000d60 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000d70,
                                                                      CONCAT71(in_stack_00000d61,
                                                                               in_stack_00000d60) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000d90 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000da0,
                                                                        CONCAT71(in_stack_00000d91,
                                                                                 in_stack_00000d90)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000dc0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000dd0,
                                                                          CONCAT71(in_stack_00000dc1
                                                                                   ,
                                                  in_stack_00000dc0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000df0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000e00,
                                                                    CONCAT71(in_stack_00000df1,
                                                                             in_stack_00000df0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000e20 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000e30,
                                                                      CONCAT71(in_stack_00000e21,
                                                                               in_stack_00000e20) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000e50 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000e60,
                                                                        CONCAT71(in_stack_00000e51,
                                                                                 in_stack_00000e50)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000e80 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000e90,
                                                                          CONCAT71(in_stack_00000e81
                                                                                   ,
                                                  in_stack_00000e80) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000eb0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000ec0,
                                                                    CONCAT71(in_stack_00000eb1,
                                                                             in_stack_00000eb0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000ee0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000ef0,
                                                                      CONCAT71(in_stack_00000ee1,
                                                                               in_stack_00000ee0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000f10 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000f20,
                                                                        CONCAT71(in_stack_00000f11,
                                                                                 in_stack_00000f10)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000f40 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000f50,
                                                                          CONCAT71(in_stack_00000f41
                                                                                   ,
                                                  in_stack_00000f40) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000f70 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000f80,
                                                                    CONCAT71(in_stack_00000f71,
                                                                             in_stack_00000f70) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000fa0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000fb0,
                                                                      CONCAT71(in_stack_00000fa1,
                                                                               in_stack_00000fa0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000fd0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000fe0,
                                                                        CONCAT71(in_stack_00000fd1,
                                                                                 in_stack_00000fd0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001000 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001010,
                                                                          CONCAT71(in_stack_00001001
                                                                                   ,
                                                  in_stack_00001000) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001030 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001040,
                                                                    CONCAT71(in_stack_00001031,
                                                                             in_stack_00001030) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001060 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001070,
                                                                      CONCAT71(in_stack_00001061,
                                                                               in_stack_00001060) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001090 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000010a0,
                                                                        CONCAT71(in_stack_00001091,
                                                                                 in_stack_00001090)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_000010c0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000010d0,
                                                                          CONCAT71(in_stack_000010c1
                                                                                   ,
                                                  in_stack_000010c0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000010f0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001100,
                                                                    CONCAT71(in_stack_000010f1,
                                                                             in_stack_000010f0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
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
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
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
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001db0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001dc0,
                                                                          CONCAT71(in_stack_00001db1
                                                                                   ,
                                                  in_stack_00001db0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001de0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001df0,
                                                                    CONCAT71(in_stack_00001de1,
                                                                             in_stack_00001de0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001e10 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001e20,
                                                                      CONCAT71(in_stack_00001e11,
                                                                               in_stack_00001e10) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001e40 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001e50,
                                                                        CONCAT71(in_stack_00001e41,
                                                                                 in_stack_00001e40)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001e70 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001e80,
                                                                          CONCAT71(in_stack_00001e71
                                                                                   ,
                                                  in_stack_00001e70) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001ea0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001eb0,
                                                                    CONCAT71(in_stack_00001ea1,
                                                                             in_stack_00001ea0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001ed0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001ee0,
                                                                      CONCAT71(in_stack_00001ed1,
                                                                               in_stack_00001ed0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
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
        }
      }
    }
  }
  func_0x0eee2d70(unaff_RBX);
LAB_0518fcc6:
  func_0x0412a280(in_stack_00001f10,
                  CONCAT71(in_stack_00001f01,in_stack_00001f00) & 0xfffffffffffffffe);
  func_0x0eee2d70(unaff_RBX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 05188460 */  MOV ESI,dword ptr [RSP + 0x78]
/* 05188464 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0518846c */  AND RSI,-0x2
/* 05188470 */  CALL 0x0412a280
/* 05188475 */  LEA RDI,[RSP + 0x60]
/* 0518847a */  CALL 0x050d26f0
/* 0518847f */  MOV ESI,0x108
/* 05188484 */  MOV RDI,R15
/* 05188487 */  CALL 0x0412a280
/* 0518848c */  JMP 0x051884fe
/* 051884fe */  TEST byte ptr [RSP + 0x118],0x1
/* 05188506 */  JZ 0x0518fcbe
/* 0518850c */  LEA RAX,[RSP + 0x118]
/* 05188514 */  MOV RDI,qword ptr [RSP + 0x128]
/* 0518851c */  JMP 0x0518a321
/* 0518a321 */  MOV RSI,qword ptr [RAX]
/* 0518a324 */  AND RSI,-0x2
/* 0518a328 */  CALL 0x0412a280
/* 0518a32d */  MOV RDI,RBX
/* 0518a330 */  CALL 0x0eee2d70
/* 0518a335 */  MOV RBX,RAX
/* 0518a338 */  TEST byte ptr [RSP + 0x178],0x1
/* 0518a340 */  JZ 0x0518fcbe
/* 0518a346 */  MOV RSI,qword ptr [RSP + 0x178]
/* 0518a34e */  MOV RDI,qword ptr [RSP + 0x188]
/* 0518a356 */  AND RSI,-0x2
/* 0518a35a */  CALL 0x0412a280
/* 0518a35f */  MOV RDI,RBX
/* 0518a362 */  CALL 0x0eee2d70
/* 0518a367 */  MOV RBX,RAX
/* 0518a36a */  TEST byte ptr [RSP + 0x1a8],0x1
/* 0518a372 */  JZ 0x0518fcbe
/* 0518a378 */  MOV RSI,qword ptr [RSP + 0x1a8]
/* 0518a380 */  MOV RDI,qword ptr [RSP + 0x1b8]
/* 0518a388 */  AND RSI,-0x2
/* 0518a38c */  CALL 0x0412a280
/* 0518a391 */  MOV RDI,RBX
/* 0518a394 */  CALL 0x0eee2d70
/* 0518a399 */  MOV RBX,RAX
/* 0518a39c */  TEST byte ptr [RSP + 0x1d8],0x1
/* 0518a3a4 */  JZ 0x0518fcbe
/* 0518a3aa */  MOV RSI,qword ptr [RSP + 0x1d8]
/* 0518a3b2 */  MOV RDI,qword ptr [RSP + 0x1e8]
/* 0518a3ba */  AND RSI,-0x2
/* 0518a3be */  CALL 0x0412a280
/* 0518a3c3 */  MOV RDI,RBX
/* 0518a3c6 */  CALL 0x0eee2d70
/* 0518a3cb */  MOV RBX,RAX
/* 0518a3ce */  TEST byte ptr [RSP + 0x208],0x1
/* 0518a3d6 */  JZ 0x0518fcbe
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
