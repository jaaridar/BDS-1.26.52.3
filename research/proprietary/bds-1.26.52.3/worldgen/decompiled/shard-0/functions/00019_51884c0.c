/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x51884c0
 * Label: OverworldGeneratorMultinoise::vslot62
 * Body:  [[051884c0, 051884d8] [0518a303, 0518a3db]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot62
 */


void wg_OverworldGeneratorMultinoise__vslot62(long *param_1)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  char *unaff_retaddr;
  byte bStack0000000000000138;
  undefined7 uStack0000000000000139;
  undefined8 in_stack_00000148;
  byte bStack0000000000000180;
  undefined7 uStack0000000000000181;
  undefined8 in_stack_00000190;
  byte bStack00000000000001b0;
  undefined7 uStack00000000000001b1;
  undefined8 in_stack_000001c0;
  byte bStack00000000000001e0;
  undefined7 uStack00000000000001e1;
  undefined8 in_stack_000001f0;
  byte in_stack_00000210;
  undefined7 in_stack_00000211;
  undefined8 in_stack_00000220;
  byte in_stack_00000240;
  undefined7 in_stack_00000241;
  undefined8 in_stack_00000250;
  byte in_stack_00000270;
  undefined7 in_stack_00000271;
  undefined8 in_stack_00000280;
  byte in_stack_000002a0;
  undefined7 in_stack_000002a1;
  undefined8 in_stack_000002b0;
  byte in_stack_000002d0;
  undefined7 in_stack_000002d1;
  undefined8 in_stack_000002e0;
  byte in_stack_00000300;
  undefined7 in_stack_00000301;
  undefined8 in_stack_00000310;
  byte in_stack_00000330;
  undefined7 in_stack_00000331;
  undefined8 in_stack_00000340;
  byte in_stack_00000360;
  undefined7 in_stack_00000361;
  undefined8 in_stack_00000370;
  byte in_stack_00000390;
  undefined7 in_stack_00000391;
  undefined8 in_stack_000003a0;
  byte in_stack_000003c0;
  undefined7 in_stack_000003c1;
  undefined8 in_stack_000003d0;
  byte in_stack_000003f0;
  undefined7 in_stack_000003f1;
  undefined8 in_stack_00000400;
  byte in_stack_00000420;
  undefined7 in_stack_00000421;
  undefined8 in_stack_00000430;
  byte in_stack_00000450;
  undefined7 in_stack_00000451;
  undefined8 in_stack_00000460;
  byte in_stack_00000480;
  undefined7 in_stack_00000481;
  undefined8 in_stack_00000490;
  byte in_stack_000004b0;
  undefined7 in_stack_000004b1;
  undefined8 in_stack_000004c0;
  byte in_stack_000004e0;
  undefined7 in_stack_000004e1;
  undefined8 in_stack_000004f0;
  byte in_stack_00000510;
  undefined7 in_stack_00000511;
  undefined8 in_stack_00000520;
  byte in_stack_00000540;
  undefined7 in_stack_00000541;
  undefined8 in_stack_00000550;
  byte in_stack_00000570;
  undefined7 in_stack_00000571;
  undefined8 in_stack_00000580;
  byte in_stack_000005a0;
  undefined7 in_stack_000005a1;
  undefined8 in_stack_000005b0;
  byte in_stack_000005d0;
  undefined7 in_stack_000005d1;
  undefined8 in_stack_000005e0;
  byte in_stack_00000600;
  undefined7 in_stack_00000601;
  undefined8 in_stack_00000610;
  byte in_stack_00000630;
  undefined7 in_stack_00000631;
  undefined8 in_stack_00000640;
  byte in_stack_00000660;
  undefined7 in_stack_00000661;
  undefined8 in_stack_00000670;
  byte in_stack_00000690;
  undefined7 in_stack_00000691;
  undefined8 in_stack_000006a0;
  byte in_stack_000006c0;
  undefined7 in_stack_000006c1;
  undefined8 in_stack_000006d0;
  byte in_stack_000006f0;
  undefined7 in_stack_000006f1;
  undefined8 in_stack_00000700;
  byte in_stack_00000720;
  undefined7 in_stack_00000721;
  undefined8 in_stack_00000730;
  byte in_stack_00000750;
  undefined7 in_stack_00000751;
  undefined8 in_stack_00000760;
  byte in_stack_00000780;
  undefined7 in_stack_00000781;
  undefined8 in_stack_00000790;
  byte in_stack_000007b0;
  undefined7 in_stack_000007b1;
  undefined8 in_stack_000007c0;
  byte in_stack_000007e0;
  undefined7 in_stack_000007e1;
  undefined8 in_stack_000007f0;
  byte in_stack_00000810;
  undefined7 in_stack_00000811;
  undefined8 in_stack_00000820;
  byte in_stack_00000840;
  undefined7 in_stack_00000841;
  undefined8 in_stack_00000850;
  byte in_stack_00000870;
  undefined7 in_stack_00000871;
  undefined8 in_stack_00000880;
  byte in_stack_000008a0;
  undefined7 in_stack_000008a1;
  undefined8 in_stack_000008b0;
  byte in_stack_000008d0;
  undefined7 in_stack_000008d1;
  undefined8 in_stack_000008e0;
  byte in_stack_00000900;
  undefined7 in_stack_00000901;
  undefined8 in_stack_00000910;
  byte in_stack_00000930;
  undefined7 in_stack_00000931;
  undefined8 in_stack_00000940;
  byte in_stack_00000960;
  undefined7 in_stack_00000961;
  undefined8 in_stack_00000970;
  byte in_stack_00000990;
  undefined7 in_stack_00000991;
  undefined8 in_stack_000009a0;
  byte in_stack_000009c0;
  undefined7 in_stack_000009c1;
  undefined8 in_stack_000009d0;
  byte in_stack_000009f0;
  undefined7 in_stack_000009f1;
  undefined8 in_stack_00000a00;
  byte in_stack_00000a20;
  undefined7 in_stack_00000a21;
  undefined8 in_stack_00000a30;
  byte in_stack_00000a50;
  undefined7 in_stack_00000a51;
  undefined8 in_stack_00000a60;
  byte in_stack_00000a80;
  undefined7 in_stack_00000a81;
  undefined8 in_stack_00000a90;
  byte in_stack_00000ab0;
  undefined7 in_stack_00000ab1;
  undefined8 in_stack_00000ac0;
  byte in_stack_00000ae0;
  undefined7 in_stack_00000ae1;
  undefined8 in_stack_00000af0;
  byte in_stack_00000b10;
  undefined7 in_stack_00000b11;
  undefined8 in_stack_00000b20;
  byte in_stack_00000b40;
  undefined7 in_stack_00000b41;
  undefined8 in_stack_00000b50;
  byte in_stack_00000b58;
  undefined7 in_stack_00000b59;
  undefined8 in_stack_00000b68;
  byte in_stack_00000b88;
  undefined7 in_stack_00000b89;
  undefined8 in_stack_00000b98;
  byte in_stack_00000bb8;
  undefined7 in_stack_00000bb9;
  undefined8 in_stack_00000bc8;
  byte in_stack_00000be8;
  undefined7 in_stack_00000be9;
  undefined8 in_stack_00000bf8;
  byte in_stack_00000c18;
  undefined7 in_stack_00000c19;
  undefined8 in_stack_00000c28;
  byte in_stack_00000c48;
  undefined7 in_stack_00000c49;
  undefined8 in_stack_00000c58;
  byte in_stack_00000c78;
  undefined7 in_stack_00000c79;
  undefined8 in_stack_00000c88;
  byte in_stack_00000c90;
  undefined7 in_stack_00000c91;
  undefined8 in_stack_00000ca0;
  byte in_stack_00000ca8;
  undefined7 in_stack_00000ca9;
  undefined8 in_stack_00000cb8;
  byte in_stack_00000cd8;
  undefined7 in_stack_00000cd9;
  undefined8 in_stack_00000ce8;
  byte in_stack_00000d08;
  undefined7 in_stack_00000d09;
  undefined8 in_stack_00000d18;
  byte in_stack_00000d38;
  undefined7 in_stack_00000d39;
  undefined8 in_stack_00000d48;
  byte in_stack_00000d68;
  undefined7 in_stack_00000d69;
  undefined8 in_stack_00000d78;
  byte in_stack_00000d98;
  undefined7 in_stack_00000d99;
  undefined8 in_stack_00000da8;
  byte in_stack_00000dc8;
  undefined7 in_stack_00000dc9;
  undefined8 in_stack_00000dd8;
  byte in_stack_00000df8;
  undefined7 in_stack_00000df9;
  undefined8 in_stack_00000e08;
  byte in_stack_00000e28;
  undefined7 in_stack_00000e29;
  undefined8 in_stack_00000e38;
  byte in_stack_00000e58;
  undefined7 in_stack_00000e59;
  undefined8 in_stack_00000e68;
  byte in_stack_00000e88;
  undefined7 in_stack_00000e89;
  undefined8 in_stack_00000e98;
  byte in_stack_00000eb8;
  undefined7 in_stack_00000eb9;
  undefined8 in_stack_00000ec8;
  byte in_stack_00000ee8;
  undefined7 in_stack_00000ee9;
  undefined8 in_stack_00000ef8;
  byte in_stack_00000f18;
  undefined7 in_stack_00000f19;
  undefined8 in_stack_00000f28;
  byte in_stack_00000f48;
  undefined7 in_stack_00000f49;
  undefined8 in_stack_00000f58;
  byte in_stack_00000f78;
  undefined7 in_stack_00000f79;
  undefined8 in_stack_00000f88;
  byte in_stack_00000fa8;
  undefined7 in_stack_00000fa9;
  undefined8 in_stack_00000fb8;
  byte in_stack_00000fd8;
  undefined7 in_stack_00000fd9;
  undefined8 in_stack_00000fe8;
  byte in_stack_00001008;
  undefined7 in_stack_00001009;
  undefined8 in_stack_00001018;
  byte in_stack_00001038;
  undefined7 in_stack_00001039;
  undefined8 in_stack_00001048;
  byte in_stack_00001068;
  undefined7 in_stack_00001069;
  undefined8 in_stack_00001078;
  byte in_stack_00001098;
  undefined7 in_stack_00001099;
  undefined8 in_stack_000010a8;
  byte in_stack_000010c8;
  undefined7 in_stack_000010c9;
  undefined8 in_stack_000010d8;
  byte in_stack_000010f8;
  undefined7 in_stack_000010f9;
  undefined8 in_stack_00001108;
  byte in_stack_00001110;
  undefined7 in_stack_00001111;
  undefined8 in_stack_00001120;
  byte in_stack_00001128;
  undefined7 in_stack_00001129;
  undefined8 in_stack_00001138;
  byte in_stack_00001d70;
  undefined7 in_stack_00001d71;
  undefined8 in_stack_00001d80;
  byte in_stack_00001d88;
  undefined7 in_stack_00001d89;
  undefined8 in_stack_00001d98;
  byte in_stack_00001db8;
  undefined7 in_stack_00001db9;
  undefined8 in_stack_00001dc8;
  byte in_stack_00001de8;
  undefined7 in_stack_00001de9;
  undefined8 in_stack_00001df8;
  byte in_stack_00001e18;
  undefined7 in_stack_00001e19;
  undefined8 in_stack_00001e28;
  byte in_stack_00001e48;
  undefined7 in_stack_00001e49;
  undefined8 in_stack_00001e58;
  byte in_stack_00001e78;
  undefined7 in_stack_00001e79;
  undefined8 in_stack_00001e88;
  byte in_stack_00001ea8;
  undefined7 in_stack_00001ea9;
  undefined8 in_stack_00001eb8;
  byte in_stack_00001ed8;
  undefined7 in_stack_00001ed9;
  undefined8 in_stack_00001ee8;
  byte in_stack_00001f08;
  undefined7 in_stack_00001f09;
  undefined8 in_stack_00001f18;
  
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))();
  }
  if ((bStack0000000000000138 & 1) != 0) {
    func_0x0412a280(in_stack_00000148,
                    CONCAT71(uStack0000000000000139,bStack0000000000000138) & 0xfffffffffffffffe);
    unaff_RBX = func_0x0eee2d70();
    if ((bStack0000000000000180 & 1) != 0) {
      func_0x0412a280(in_stack_00000190,
                      CONCAT71(uStack0000000000000181,bStack0000000000000180) & 0xfffffffffffffffe);
      unaff_RBX = func_0x0eee2d70(unaff_RBX);
      if ((bStack00000000000001b0 & 1) != 0) {
        func_0x0412a280(in_stack_000001c0,
                        CONCAT71(uStack00000000000001b1,bStack00000000000001b0) & 0xfffffffffffffffe
                       );
        unaff_RBX = func_0x0eee2d70(unaff_RBX);
        if ((bStack00000000000001e0 & 1) != 0) {
          func_0x0412a280(in_stack_000001f0,
                          CONCAT71(uStack00000000000001e1,bStack00000000000001e0) &
                          0xfffffffffffffffe);
          unaff_RBX = func_0x0eee2d70(unaff_RBX);
          if ((in_stack_00000210 & 1) != 0) {
            func_0x0412a280(in_stack_00000220,
                            CONCAT71(in_stack_00000211,in_stack_00000210) & 0xfffffffffffffffe);
            unaff_RBX = func_0x0eee2d70(unaff_RBX);
            if ((in_stack_00000240 & 1) != 0) {
              func_0x0412a280(in_stack_00000250,
                              CONCAT71(in_stack_00000241,in_stack_00000240) & 0xfffffffffffffffe);
              unaff_RBX = func_0x0eee2d70(unaff_RBX);
              if ((in_stack_00000270 & 1) != 0) {
                func_0x0412a280(in_stack_00000280,
                                CONCAT71(in_stack_00000271,in_stack_00000270) & 0xfffffffffffffffe);
                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                if ((in_stack_000002a0 & 1) != 0) {
                  func_0x0412a280(in_stack_000002b0,
                                  CONCAT71(in_stack_000002a1,in_stack_000002a0) & 0xfffffffffffffffe
                                 );
                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                  if ((in_stack_000002d0 & 1) != 0) {
                    func_0x0412a280(in_stack_000002e0,
                                    CONCAT71(in_stack_000002d1,in_stack_000002d0) &
                                    0xfffffffffffffffe);
                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                    if ((in_stack_00000300 & 1) != 0) {
                      func_0x0412a280(in_stack_00000310,
                                      CONCAT71(in_stack_00000301,in_stack_00000300) &
                                      0xfffffffffffffffe);
                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                      if ((in_stack_00000330 & 1) != 0) {
                        func_0x0412a280(in_stack_00000340,
                                        CONCAT71(in_stack_00000331,in_stack_00000330) &
                                        0xfffffffffffffffe);
                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                        if ((in_stack_00000360 & 1) != 0) {
                          func_0x0412a280(in_stack_00000370,
                                          CONCAT71(in_stack_00000361,in_stack_00000360) &
                                          0xfffffffffffffffe);
                          unaff_RBX = func_0x0eee2d70(unaff_RBX);
                          if ((in_stack_00000390 & 1) != 0) {
                            func_0x0412a280(in_stack_000003a0,
                                            CONCAT71(in_stack_00000391,in_stack_00000390) &
                                            0xfffffffffffffffe);
                            unaff_RBX = func_0x0eee2d70(unaff_RBX);
                            if ((in_stack_000003c0 & 1) != 0) {
                              func_0x0412a280(in_stack_000003d0,
                                              CONCAT71(in_stack_000003c1,in_stack_000003c0) &
                                              0xfffffffffffffffe);
                              unaff_RBX = func_0x0eee2d70(unaff_RBX);
                              if ((in_stack_000003f0 & 1) != 0) {
                                func_0x0412a280(in_stack_00000400,
                                                CONCAT71(in_stack_000003f1,in_stack_000003f0) &
                                                0xfffffffffffffffe);
                                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                if ((in_stack_00000420 & 1) != 0) {
                                  func_0x0412a280(in_stack_00000430,
                                                  CONCAT71(in_stack_00000421,in_stack_00000420) &
                                                  0xfffffffffffffffe);
                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                  if ((in_stack_00000450 & 1) != 0) {
                                    func_0x0412a280(in_stack_00000460,
                                                    CONCAT71(in_stack_00000451,in_stack_00000450) &
                                                    0xfffffffffffffffe);
                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                    if ((in_stack_00000480 & 1) != 0) {
                                      func_0x0412a280(in_stack_00000490,
                                                      CONCAT71(in_stack_00000481,in_stack_00000480)
                                                      & 0xfffffffffffffffe);
                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                      if ((in_stack_000004b0 & 1) != 0) {
                                        func_0x0412a280(in_stack_000004c0,
                                                        CONCAT71(in_stack_000004b1,in_stack_000004b0
                                                                ) & 0xfffffffffffffffe);
                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                        if ((in_stack_000004e0 & 1) != 0) {
                                          func_0x0412a280(in_stack_000004f0,
                                                          CONCAT71(in_stack_000004e1,
                                                                   in_stack_000004e0) &
                                                          0xfffffffffffffffe);
                                          unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                          if ((in_stack_00000510 & 1) != 0) {
                                            func_0x0412a280(in_stack_00000520,
                                                            CONCAT71(in_stack_00000511,
                                                                     in_stack_00000510) &
                                                            0xfffffffffffffffe);
                                            unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                            if ((in_stack_00000540 & 1) != 0) {
                                              func_0x0412a280(in_stack_00000550,
                                                              CONCAT71(in_stack_00000541,
                                                                       in_stack_00000540) &
                                                              0xfffffffffffffffe);
                                              unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                              if ((in_stack_00000570 & 1) != 0) {
                                                func_0x0412a280(in_stack_00000580,
                                                                CONCAT71(in_stack_00000571,
                                                                         in_stack_00000570) &
                                                                0xfffffffffffffffe);
                                                unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                if ((in_stack_000005a0 & 1) != 0) {
                                                  func_0x0412a280(in_stack_000005b0,
                                                                  CONCAT71(in_stack_000005a1,
                                                                           in_stack_000005a0) &
                                                                  0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000005d0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000005e0,
                                                                    CONCAT71(in_stack_000005d1,
                                                                             in_stack_000005d0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000600 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000610,
                                                                      CONCAT71(in_stack_00000601,
                                                                               in_stack_00000600) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000630 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000640,
                                                                        CONCAT71(in_stack_00000631,
                                                                                 in_stack_00000630)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000660 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000670,
                                                                          CONCAT71(in_stack_00000661
                                                                                   ,
                                                  in_stack_00000660) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000690 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000006a0,
                                                                    CONCAT71(in_stack_00000691,
                                                                             in_stack_00000690) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000006c0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000006d0,
                                                                      CONCAT71(in_stack_000006c1,
                                                                               in_stack_000006c0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000006f0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000700,
                                                                        CONCAT71(in_stack_000006f1,
                                                                                 in_stack_000006f0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000720 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000730,
                                                                          CONCAT71(in_stack_00000721
                                                                                   ,
                                                  in_stack_00000720) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000750 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000760,
                                                                    CONCAT71(in_stack_00000751,
                                                                             in_stack_00000750) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000780 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000790,
                                                                      CONCAT71(in_stack_00000781,
                                                                               in_stack_00000780) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000007b0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000007c0,
                                                                        CONCAT71(in_stack_000007b1,
                                                                                 in_stack_000007b0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_000007e0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000007f0,
                                                                          CONCAT71(in_stack_000007e1
                                                                                   ,
                                                  in_stack_000007e0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000810 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000820,
                                                                    CONCAT71(in_stack_00000811,
                                                                             in_stack_00000810) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000840 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000850,
                                                                      CONCAT71(in_stack_00000841,
                                                                               in_stack_00000840) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000870 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000880,
                                                                        CONCAT71(in_stack_00000871,
                                                                                 in_stack_00000870)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_000008a0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000008b0,
                                                                          CONCAT71(in_stack_000008a1
                                                                                   ,
                                                  in_stack_000008a0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000008d0 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000008e0,
                                                                    CONCAT71(in_stack_000008d1,
                                                                             in_stack_000008d0) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000900 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000910,
                                                                      CONCAT71(in_stack_00000901,
                                                                               in_stack_00000900) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000930 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000940,
                                                                        CONCAT71(in_stack_00000931,
                                                                                 in_stack_00000930)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000960 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000970,
                                                                          CONCAT71(in_stack_00000961
                                                                                   ,
                                                  in_stack_00000960) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000990 & 1) != 0) {
                                                    func_0x0412a280(in_stack_000009a0,
                                                                    CONCAT71(in_stack_00000991,
                                                                             in_stack_00000990) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_000009c0 & 1) != 0) {
                                                      func_0x0412a280(in_stack_000009d0,
                                                                      CONCAT71(in_stack_000009c1,
                                                                               in_stack_000009c0) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_000009f0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000a00,
                                                                        CONCAT71(in_stack_000009f1,
                                                                                 in_stack_000009f0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000a20 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000a30,
                                                                          CONCAT71(in_stack_00000a21
                                                                                   ,
                                                  in_stack_00000a20) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000a50 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000a60,
                                                                    CONCAT71(in_stack_00000a51,
                                                                             in_stack_00000a50) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000a80 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000a90,
                                                                      CONCAT71(in_stack_00000a81,
                                                                               in_stack_00000a80) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000ab0 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ac0,
                                                                        CONCAT71(in_stack_00000ab1,
                                                                                 in_stack_00000ab0)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000ae0 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000af0,
                                                                          CONCAT71(in_stack_00000ae1
                                                                                   ,
                                                  in_stack_00000ae0) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000b10 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000b20,
                                                                    CONCAT71(in_stack_00000b11,
                                                                             in_stack_00000b10) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000b40 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000b50,
                                                                      CONCAT71(in_stack_00000b41,
                                                                               in_stack_00000b40) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      func_0x050d26f0(&stack0x00000028);
                                                      func_0x0412a280();
                                                      if ((in_stack_00000b58 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000b68,
                                                                        CONCAT71(in_stack_00000b59,
                                                                                 in_stack_00000b58)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000b88 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000b98,
                                                                          CONCAT71(in_stack_00000b89
                                                                                   ,
                                                  in_stack_00000b88) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000bb8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000bc8,
                                                                    CONCAT71(in_stack_00000bb9,
                                                                             in_stack_00000bb8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000be8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000bf8,
                                                                      CONCAT71(in_stack_00000be9,
                                                                               in_stack_00000be8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000c18 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000c28,
                                                                        CONCAT71(in_stack_00000c19,
                                                                                 in_stack_00000c18)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000c48 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000c58,
                                                                          CONCAT71(in_stack_00000c49
                                                                                   ,
                                                  in_stack_00000c48) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000c78 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000c88,
                                                                    CONCAT71(in_stack_00000c79,
                                                                             in_stack_00000c78) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    func_0x050d26f0(&stack0x00000028);
                                                    func_0x0412a280();
                                                    if ((in_stack_00000c90 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000ca0,
                                                                      CONCAT71(in_stack_00000c91,
                                                                               in_stack_00000c90) &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    if ((in_stack_00000ca8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000cb8,
                                                                      CONCAT71(in_stack_00000ca9,
                                                                               in_stack_00000ca8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000cd8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000ce8,
                                                                        CONCAT71(in_stack_00000cd9,
                                                                                 in_stack_00000cd8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000d08 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000d18,
                                                                          CONCAT71(in_stack_00000d09
                                                                                   ,
                                                  in_stack_00000d08) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000d38 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000d48,
                                                                    CONCAT71(in_stack_00000d39,
                                                                             in_stack_00000d38) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000d68 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000d78,
                                                                      CONCAT71(in_stack_00000d69,
                                                                               in_stack_00000d68) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000d98 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000da8,
                                                                        CONCAT71(in_stack_00000d99,
                                                                                 in_stack_00000d98)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000dc8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000dd8,
                                                                          CONCAT71(in_stack_00000dc9
                                                                                   ,
                                                  in_stack_00000dc8) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000df8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000e08,
                                                                    CONCAT71(in_stack_00000df9,
                                                                             in_stack_00000df8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000e28 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000e38,
                                                                      CONCAT71(in_stack_00000e29,
                                                                               in_stack_00000e28) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000e58 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000e68,
                                                                        CONCAT71(in_stack_00000e59,
                                                                                 in_stack_00000e58)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000e88 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000e98,
                                                                          CONCAT71(in_stack_00000e89
                                                                                   ,
                                                  in_stack_00000e88) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000eb8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000ec8,
                                                                    CONCAT71(in_stack_00000eb9,
                                                                             in_stack_00000eb8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000ee8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000ef8,
                                                                      CONCAT71(in_stack_00000ee9,
                                                                               in_stack_00000ee8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000f18 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000f28,
                                                                        CONCAT71(in_stack_00000f19,
                                                                                 in_stack_00000f18)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00000f48 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00000f58,
                                                                          CONCAT71(in_stack_00000f49
                                                                                   ,
                                                  in_stack_00000f48) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00000f78 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00000f88,
                                                                    CONCAT71(in_stack_00000f79,
                                                                             in_stack_00000f78) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00000fa8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00000fb8,
                                                                      CONCAT71(in_stack_00000fa9,
                                                                               in_stack_00000fa8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00000fd8 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00000fe8,
                                                                        CONCAT71(in_stack_00000fd9,
                                                                                 in_stack_00000fd8)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001008 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001018,
                                                                          CONCAT71(in_stack_00001009
                                                                                   ,
                                                  in_stack_00001008) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001038 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001048,
                                                                    CONCAT71(in_stack_00001039,
                                                                             in_stack_00001038) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001068 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001078,
                                                                      CONCAT71(in_stack_00001069,
                                                                               in_stack_00001068) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001098 & 1) != 0) {
                                                        func_0x0412a280(in_stack_000010a8,
                                                                        CONCAT71(in_stack_00001099,
                                                                                 in_stack_00001098)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_000010c8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_000010d8,
                                                                          CONCAT71(in_stack_000010c9
                                                                                   ,
                                                  in_stack_000010c8) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_000010f8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001108,
                                                                    CONCAT71(in_stack_000010f9,
                                                                             in_stack_000010f8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001110 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001120,
                                                                      CONCAT71(in_stack_00001111,
                                                                               in_stack_00001110) &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    if ((in_stack_00001128 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001138,
                                                                      CONCAT71(in_stack_00001129,
                                                                               in_stack_00001128) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001d70 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001d80,
                                                                        CONCAT71(in_stack_00001d71,
                                                                                 in_stack_00001d70)
                                                                        & 0xfffffffffffffffe);
                                                      }
                                                      if ((in_stack_00001d88 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001d98,
                                                                        CONCAT71(in_stack_00001d89,
                                                                                 in_stack_00001d88)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001db8 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001dc8,
                                                                          CONCAT71(in_stack_00001db9
                                                                                   ,
                                                  in_stack_00001db8) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001de8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001df8,
                                                                    CONCAT71(in_stack_00001de9,
                                                                             in_stack_00001de8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001e18 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001e28,
                                                                      CONCAT71(in_stack_00001e19,
                                                                               in_stack_00001e18) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001e48 & 1) != 0) {
                                                        func_0x0412a280(in_stack_00001e58,
                                                                        CONCAT71(in_stack_00001e49,
                                                                                 in_stack_00001e48)
                                                                        & 0xfffffffffffffffe);
                                                        unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                        if ((in_stack_00001e78 & 1) != 0) {
                                                          func_0x0412a280(in_stack_00001e88,
                                                                          CONCAT71(in_stack_00001e79
                                                                                   ,
                                                  in_stack_00001e78) & 0xfffffffffffffffe);
                                                  unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                  if ((in_stack_00001ea8 & 1) != 0) {
                                                    func_0x0412a280(in_stack_00001eb8,
                                                                    CONCAT71(in_stack_00001ea9,
                                                                             in_stack_00001ea8) &
                                                                    0xfffffffffffffffe);
                                                    unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                    if ((in_stack_00001ed8 & 1) != 0) {
                                                      func_0x0412a280(in_stack_00001ee8,
                                                                      CONCAT71(in_stack_00001ed9,
                                                                               in_stack_00001ed8) &
                                                                      0xfffffffffffffffe);
                                                      unaff_RBX = func_0x0eee2d70(unaff_RBX);
                                                      if ((in_stack_00001f08 & 1) != 0)
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
  func_0x0412a280(in_stack_00001f18,
                  CONCAT71(in_stack_00001f09,in_stack_00001f08) & 0xfffffffffffffffe);
  func_0x0eee2d70(unaff_RBX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 051884c0 */  POP RAX
/* 051884c1 */  ADD byte ptr [RAX],AL
/* 051884c3 */  ADD byte ptr [RAX],AL
/* 051884c5 */  TEST RDI,RDI
/* 051884c8 */  JZ 0x0518a303
/* 051884ce */  MOV RAX,qword ptr [RDI]
/* 051884d1 */  CALL qword ptr [RAX + 0x78]
/* 051884d4 */  JMP 0x0518a303
/* 0518a303 */  TEST byte ptr [RSP + 0x130],0x1
/* 0518a30b */  JZ 0x0518fcbe
/* 0518a311 */  LEA RAX,[RSP + 0x130]
/* 0518a319 */  MOV RDI,qword ptr [RSP + 0x140]
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
