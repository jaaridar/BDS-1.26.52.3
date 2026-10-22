/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1b85e0 (ELF vaddr 0xd0b85e0)
 * Label: caller-of-callee
 * Body:  [[0d1b85e0, 0d1b8796] [0d1b87a0, 0d1b88b4] [0d1b88c0, 0d1b9724] [0d1b9730, 0d1b97d6] [0d1b97e0, 0d1ba604] [0d1ba622, 0d1ba650] [0d1ba656, 0d1ba684] [0d1ba68a, 0d1ba9c9] [0d1bab5b, 0d1bab76] [0d1baba2, 0d1babac] [0d1babd7, 0d1babfb] [0d1bac4a, 0d1bac76]]
 * Ghidra: FUN_0d1b85e0
 */


/* WARNING: Removing unreachable block (ram,0x0d1ba9b0) */
/* WARNING: Removing unreachable block (ram,0x0d1ba9b7) */
/* WARNING: Removing unreachable block (ram,0x0d1ba9a3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d1b85e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  byte *pbVar20;
  long *plVar21;
  int *piVar22;
  long *in_FS_OFFSET;
  long *plStack_840;
  undefined4 uStack_834;
  undefined1 auStack_830 [16];
  long *plStack_820;
  uint uStack_814;
  undefined8 *puStack_810;
  undefined8 *puStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  undefined8 *puStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  long lStack_788;
  long *plStack_780;
  undefined8 *puStack_778;
  byte *pbStack_770;
  long *plStack_768;
  uint uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  byte *pbStack_750;
  byte bStack_748;
  undefined7 uStack_747;
  ulong uStack_740;
  int *piStack_738;
  long lStack_730;
  undefined8 uStack_728;
  byte bStack_720;
  undefined1 uStack_71f;
  undefined2 uStack_71e;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  int *piStack_700;
  byte bStack_6f8;
  undefined1 uStack_6f7;
  undefined2 uStack_6f6;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  byte *pbStack_6e8;
  long *plStack_6d8;
  undefined1 auStack_6d0 [16];
  undefined8 uStack_6c0;
  byte bStack_6b8;
  undefined1 uStack_6b7;
  undefined2 uStack_6b6;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 uStack_6a8;
  undefined8 uStack_698;
  byte bStack_690;
  undefined1 uStack_68f;
  undefined2 uStack_68e;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined8 uStack_680;
  undefined8 uStack_670;
  byte bStack_668;
  undefined1 uStack_667;
  undefined2 uStack_666;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 uStack_648;
  byte bStack_640;
  undefined1 uStack_63f;
  undefined2 uStack_63e;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 uStack_630;
  undefined8 uStack_620;
  byte bStack_618;
  undefined1 uStack_617;
  undefined2 uStack_616;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined8 uStack_5f8;
  byte bStack_5f0;
  undefined1 uStack_5ef;
  undefined2 uStack_5ee;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d0;
  byte bStack_5c8;
  undefined1 uStack_5c7;
  undefined2 uStack_5c6;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5a8;
  byte bStack_5a0;
  undefined1 uStack_59f;
  undefined2 uStack_59e;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 uStack_590;
  undefined8 uStack_580;
  byte bStack_578;
  undefined1 uStack_577;
  undefined2 uStack_576;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_558;
  byte bStack_550;
  undefined1 uStack_54f;
  undefined2 uStack_54e;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 uStack_530;
  byte bStack_528;
  undefined1 uStack_527;
  undefined2 uStack_526;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  undefined8 uStack_508;
  byte bStack_500;
  undefined1 uStack_4ff;
  undefined2 uStack_4fe;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined8 uStack_4e0;
  byte bStack_4d8;
  undefined1 uStack_4d7;
  undefined2 uStack_4d6;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4b8;
  byte bStack_4b0;
  undefined1 uStack_4af;
  undefined2 uStack_4ae;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  byte bStack_488;
  undefined1 uStack_487;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined8 uStack_468;
  byte bStack_460;
  undefined1 uStack_45f;
  undefined2 uStack_45e;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_450;
  undefined8 uStack_440;
  byte bStack_438;
  undefined1 uStack_437;
  undefined2 uStack_436;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 uStack_418;
  byte bStack_410;
  undefined1 uStack_40f;
  undefined2 uStack_40e;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  int *piStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  byte *pbStack_3d8;
  long *plStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  uint uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  uint uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  uint uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  uint uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  uint uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  uint uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  uint uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plStack_780 = param_1;
  cVar7 = func_0x04864260(param_2);
  if (cVar7 == '\0') {
    func_0x04865630(auStack_830,param_2);
    func_0x048656b0(auStack_6d0,param_2);
    puStack_778 = &uStack_3c0;
    puStack_790 = &uStack_390;
    puStack_798 = &uStack_360;
    puStack_7a0 = &uStack_330;
    puStack_7a8 = &uStack_300;
    puStack_7b0 = &uStack_2d0;
    puStack_7b8 = &uStack_2a0;
    puStack_7c0 = &uStack_270;
    puStack_7c8 = &uStack_240;
    puStack_7d0 = &uStack_210;
    puStack_7d8 = &uStack_1e0;
    puStack_7e0 = &uStack_1b0;
    puStack_7e8 = &uStack_180;
    puStack_7f0 = &uStack_150;
    puStack_7f8 = &uStack_120;
    puStack_800 = &uStack_f0;
    puStack_808 = &uStack_c0;
    puStack_810 = &uStack_90;
    lStack_730 = *in_FS_OFFSET;
    plStack_6d8 = (long *)(lStack_730 + -0xb60);
    lStack_788 = 0;
    plStack_820 = (long *)0x0;
    plStack_768 = (long *)0x0;
LAB_0d1b87c3:
    cVar7 = func_0x04862c80(auStack_830,auStack_6d0);
    if (cVar7 == '\0') {
      uVar9 = func_0x04862b80(auStack_830);
      cVar7 = func_0x04864290(uVar9);
      if (cVar7 != '\0') {
        func_0x04863120(&uStack_728,&UNK_011e096c);
        func_0x04864d90(&piStack_700,uVar9,&UNK_0144437b,&uStack_728);
        piStack_3f0 = (int *)((ulong)piStack_3f0 & 0xffffffffffff0000);
        func_0x04863cb0(&bStack_748,&piStack_700,&piStack_3f0);
        if (((ulong)piStack_3f0 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT44(uStack_3dc,uStack_3e0),(ulong)piStack_3f0 & 0xfffffffffffffffe
                            );
        }
        FUN_04863610(&piStack_700);
        FUN_04863610(&uStack_728);
        if ((bStack_748 & 1) == 0) {
          uVar13 = (ulong)(bStack_748 >> 1);
          piVar22 = (int *)&uStack_747;
          if (uVar13 != 6) goto LAB_0d1b8895;
LAB_0d1b88d3:
          if ((short)piVar22[1] != 0x736c || *piVar22 != 0x61757165) goto LAB_0d1b8907;
LAB_0d1b88ea:
          uStack_834 = (undefined4)CONCAT71((int7)((ulong)piVar22 >> 8),1);
LAB_0d1b8943:
          uVar10 = func_0x048648e0(uVar9,&UNK_0122361d);
          plVar12 = plStack_6d8;
          piStack_3f0 = (int *)((ulong)piStack_3f0 & 0xffffffffffff0000);
          func_0x04863cb0(&uStack_760,uVar10,&piStack_3f0);
          if (((ulong)piStack_3f0 & 1) != 0) {
            thunk_FUN_0ee326a0(CONCAT44(uStack_3dc,uStack_3e0),
                               (ulong)piStack_3f0 & 0xfffffffffffffffe);
          }
          if (*(char *)(lStack_730 + -0xb38) == '\0') {
            func_0x0ee25490(&piStack_700,0x8cc06084de7c0eb6,&UNK_01353224);
            plStack_3d0 = (long *)0x0;
            pbStack_3d8 = pbStack_6e8;
            uStack_3e8 = CONCAT22(uStack_6f6,CONCAT11(uStack_6f7,bStack_6f8));
            uStack_3e4 = uStack_6f4;
            uStack_3e0 = uStack_6f0;
            uStack_3dc = uStack_6ec;
            bStack_6f8 = 0;
            uStack_6f7 = 0;
            piStack_3f0 = piStack_700;
            puStack_3c8 = &UNK_0d1bb890;
            func_0x0ee25490(&uStack_728,0xea0c7bcb1d831b13,&UNK_01219af9);
            uStack_3a0 = 0;
            uStack_3a8 = uStack_710;
            uStack_3b8 = CONCAT22(uStack_71e,CONCAT11(uStack_71f,bStack_720));
            uStack_3b4 = uStack_71c;
            uStack_3b0 = uStack_718;
            uStack_3ac = uStack_714;
            bStack_720 = 0;
            uStack_71f = 0;
            uStack_3c0 = uStack_728;
            puStack_398 = &UNK_0d1bb980;
            func_0x0ee25490(&uStack_418,0x8257d73575882584,&UNK_0136f0f8);
            uStack_370 = 0;
            uStack_378 = uStack_400;
            uStack_388 = CONCAT22(uStack_40e,CONCAT11(uStack_40f,bStack_410));
            uStack_384 = uStack_40c;
            uStack_380 = uStack_408;
            uStack_37c = uStack_404;
            bStack_410 = 0;
            uStack_40f = 0;
            uStack_390 = uStack_418;
            puStack_368 = &UNK_0d1bb5c0;
            func_0x0ee25490(&uStack_440,0x9883eb0a70881414,&UNK_0129ca29);
            uStack_340 = 0;
            uStack_348 = uStack_428;
            uStack_358 = CONCAT22(uStack_436,CONCAT11(uStack_437,bStack_438));
            uStack_354 = uStack_434;
            uStack_350 = uStack_430;
            uStack_34c = uStack_42c;
            bStack_438 = 0;
            uStack_437 = 0;
            uStack_360 = uStack_440;
            puStack_338 = &UNK_0d1bada0;
            func_0x0ee25490(&uStack_468,0xe2eb68f3f0d4fdb9,&UNK_013bdea7);
            uStack_310 = 0;
            uStack_318 = uStack_450;
            uStack_328 = CONCAT22(uStack_45e,CONCAT11(uStack_45f,bStack_460));
            uStack_324 = uStack_45c;
            uStack_320 = uStack_458;
            uStack_31c = uStack_454;
            bStack_460 = 0;
            uStack_45f = 0;
            uStack_330 = uStack_468;
            puStack_308 = &UNK_0d1bd160;
            func_0x0ee25490(&uStack_490,0xd2c890f00d362920,&UNK_0140adba);
            uStack_2e0 = 0;
            uStack_2e8 = uStack_478;
            uStack_2f8 = CONCAT22(uStack_486,CONCAT11(uStack_487,bStack_488));
            uStack_2f4 = uStack_484;
            uStack_2f0 = uStack_480;
            uStack_2ec = uStack_47c;
            bStack_488 = 0;
            uStack_487 = 0;
            uStack_300 = uStack_490;
            puStack_2d8 = &UNK_0d1b7df0;
            func_0x0ee25490(&uStack_4b8,0x3e6d6d3d1d30b2c3,&UNK_014d7619);
            uStack_2b0 = 0;
            uStack_2b8 = uStack_4a0;
            uStack_2c8 = CONCAT22(uStack_4ae,CONCAT11(uStack_4af,bStack_4b0));
            uStack_2c4 = uStack_4ac;
            uStack_2c0 = uStack_4a8;
            uStack_2bc = uStack_4a4;
            bStack_4b0 = 0;
            uStack_4af = 0;
            uStack_2d0 = uStack_4b8;
            puStack_2a8 = &UNK_0d1be510;
            func_0x0ee25490(&uStack_4e0,0xf0c577528d72bdeb,&UNK_01388bc9);
            uStack_280 = 0;
            uStack_288 = uStack_4c8;
            uStack_298 = CONCAT22(uStack_4d6,CONCAT11(uStack_4d7,bStack_4d8));
            uStack_294 = uStack_4d4;
            uStack_290 = uStack_4d0;
            uStack_28c = uStack_4cc;
            bStack_4d8 = 0;
            uStack_4d7 = 0;
            uStack_2a0 = uStack_4e0;
            puStack_278 = &UNK_0d1be900;
            func_0x0ee25490(&uStack_508,0x6ccf8db6ec714861,&UNK_013d77f5);
            uStack_250 = 0;
            uStack_258 = uStack_4f0;
            uStack_268 = CONCAT22(uStack_4fe,CONCAT11(uStack_4ff,bStack_500));
            uStack_264 = uStack_4fc;
            uStack_260 = uStack_4f8;
            uStack_25c = uStack_4f4;
            bStack_500 = 0;
            uStack_4ff = 0;
            uStack_270 = uStack_508;
            puStack_248 = &UNK_0d1be6f0;
            func_0x0ee25490(&uStack_530,0x38ece0592c8c45bb,&UNK_012b5a14);
            uStack_220 = 0;
            uStack_228 = uStack_518;
            uStack_238 = CONCAT22(uStack_526,CONCAT11(uStack_527,bStack_528));
            uStack_234 = uStack_524;
            uStack_230 = uStack_520;
            uStack_22c = uStack_51c;
            bStack_528 = 0;
            uStack_527 = 0;
            uStack_240 = uStack_530;
            puStack_218 = &UNK_0d1be820;
            func_0x0ee25490(&uStack_558,0xf605e70691eba463,&UNK_011afc7a);
            uStack_1f0 = 0;
            uStack_1f8 = uStack_540;
            uStack_208 = CONCAT22(uStack_54e,CONCAT11(uStack_54f,bStack_550));
            uStack_204 = uStack_54c;
            uStack_200 = uStack_548;
            uStack_1fc = uStack_544;
            bStack_550 = 0;
            uStack_54f = 0;
            uStack_210 = uStack_558;
            puStack_1e8 = &UNK_0d1b7bd0;
            func_0x0ee25490(&uStack_580,0xd2dcfe2580047e8d,&UNK_0133857a);
            uStack_1c0 = 0;
            uStack_1c8 = uStack_568;
            uStack_1d8 = CONCAT22(uStack_576,CONCAT11(uStack_577,bStack_578));
            uStack_1d4 = uStack_574;
            uStack_1d0 = uStack_570;
            uStack_1cc = uStack_56c;
            bStack_578 = 0;
            uStack_577 = 0;
            uStack_1e0 = uStack_580;
            puStack_1b8 = &UNK_0d1b7cd0;
            func_0x0ee25490(&uStack_5a8,0x8d000bfe5129d2d,&UNK_012e9bb4);
            uStack_190 = 0;
            uStack_198 = uStack_590;
            uStack_1a8 = CONCAT22(uStack_59e,CONCAT11(uStack_59f,bStack_5a0));
            uStack_1a4 = uStack_59c;
            uStack_1a0 = uStack_598;
            uStack_19c = uStack_594;
            bStack_5a0 = 0;
            uStack_59f = 0;
            uStack_1b0 = uStack_5a8;
            puStack_188 = &UNK_0d1bc020;
            func_0x0ee25490(&uStack_5d0,0x3ed2a0d70840aad8,&UNK_01300b65);
            uStack_160 = 0;
            uStack_168 = uStack_5b8;
            uStack_178 = CONCAT22(uStack_5c6,CONCAT11(uStack_5c7,bStack_5c8));
            uStack_174 = uStack_5c4;
            uStack_170 = uStack_5c0;
            uStack_16c = uStack_5bc;
            bStack_5c8 = 0;
            uStack_5c7 = 0;
            uStack_180 = uStack_5d0;
            puStack_158 = &UNK_0d1bb490;
            func_0x0ee25490(&uStack_5f8,0x2c5f1a5ea2e1f121,&UNK_012adcdd);
            uStack_130 = 0;
            uStack_138 = uStack_5e0;
            uStack_148 = CONCAT22(uStack_5ee,CONCAT11(uStack_5ef,bStack_5f0));
            uStack_144 = uStack_5ec;
            uStack_140 = uStack_5e8;
            uStack_13c = uStack_5e4;
            bStack_5f0 = 0;
            uStack_5ef = 0;
            uStack_150 = uStack_5f8;
            puStack_128 = &UNK_0d1bb180;
            func_0x0ee25490(&uStack_620,0x41a154195131e18f,&UNK_012cd9b7);
            uStack_100 = 0;
            uStack_108 = uStack_608;
            uStack_118 = CONCAT22(uStack_616,CONCAT11(uStack_617,bStack_618));
            uStack_114 = uStack_614;
            uStack_110 = uStack_610;
            uStack_10c = uStack_60c;
            bStack_618 = 0;
            uStack_617 = 0;
            uStack_120 = uStack_620;
            puStack_f8 = &UNK_0d1bdbf0;
            func_0x0ee25490(&uStack_648,0xae9ed53ae21ba100,&UNK_013eff61);
            uStack_d0 = 0;
            uStack_d8 = uStack_630;
            uStack_e8 = CONCAT22(uStack_63e,CONCAT11(uStack_63f,bStack_640));
            uStack_e4 = uStack_63c;
            uStack_e0 = uStack_638;
            uStack_dc = uStack_634;
            bStack_640 = 0;
            uStack_63f = 0;
            uStack_f0 = uStack_648;
            puStack_c8 = &UNK_0d1bd530;
            func_0x0ee25490(&uStack_670,0x97e33481d8512f7f,&UNK_0140962f);
            uStack_a0 = 0;
            uStack_a8 = uStack_658;
            uStack_b8 = CONCAT22(uStack_666,CONCAT11(uStack_667,bStack_668));
            uStack_b4 = uStack_664;
            uStack_b0 = uStack_660;
            uStack_ac = uStack_65c;
            bStack_668 = 0;
            uStack_667 = 0;
            uStack_c0 = uStack_670;
            puStack_98 = &UNK_0d1bd8c0;
            func_0x0ee25490(&uStack_698,0x720d2df870c76c96,&UNK_01336833);
            uStack_70 = 0;
            uStack_78 = uStack_680;
            uStack_88 = CONCAT22(uStack_68e,CONCAT11(uStack_68f,bStack_690));
            uStack_84 = uStack_68c;
            uStack_80 = uStack_688;
            uStack_7c = uStack_684;
            bStack_690 = 0;
            uStack_68f = 0;
            uStack_90 = uStack_698;
            puStack_68 = &UNK_0d1bdfb0;
            func_0x0ee25490(&uStack_6c0,0x9afa51332f44a837,&UNK_014c0ab7);
            uStack_40 = 0;
            uStack_48 = uStack_6a8;
            uStack_58 = CONCAT22(uStack_6b6,CONCAT11(uStack_6b7,bStack_6b8));
            uStack_54 = uStack_6b4;
            uStack_50 = uStack_6b0;
            uStack_4c = uStack_6ac;
            bStack_6b8 = 0;
            uStack_6b7 = 0;
            uStack_60 = uStack_6c0;
            puStack_38 = &UNK_0d1b8240;
            func_0x0d1bf5c0(&piStack_3f0);
            if ((uStack_58 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
            }
            if ((uStack_88 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
            }
            if ((uStack_b8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
            }
            if ((uStack_e8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
            }
            if ((uStack_118 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_108,CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
            }
            if ((uStack_148 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_138,CONCAT44(uStack_144,uStack_148) & 0xfffffffffffffffe);
            }
            if ((uStack_178 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_168,CONCAT44(uStack_174,uStack_178) & 0xfffffffffffffffe);
            }
            if ((uStack_1a8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_198,CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
            }
            if ((uStack_1d8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe);
            }
            if ((uStack_208 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_1f8,CONCAT44(uStack_204,uStack_208) & 0xfffffffffffffffe);
            }
            if ((uStack_238 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
            }
            if ((uStack_268 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_258,CONCAT44(uStack_264,uStack_268) & 0xfffffffffffffffe);
            }
            if ((uStack_298 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_288,CONCAT44(uStack_294,uStack_298) & 0xfffffffffffffffe);
            }
            if ((uStack_2c8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_2b8,CONCAT44(uStack_2c4,uStack_2c8) & 0xfffffffffffffffe);
            }
            if ((uStack_2f8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_2e8,CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
            }
            if ((uStack_328 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_318,CONCAT44(uStack_324,uStack_328) & 0xfffffffffffffffe);
            }
            if ((uStack_358 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_348,CONCAT44(uStack_354,uStack_358) & 0xfffffffffffffffe);
            }
            if ((uStack_388 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_378,CONCAT44(uStack_384,uStack_388) & 0xfffffffffffffffe);
            }
            if ((uStack_3b8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_3a8,CONCAT44(uStack_3b4,uStack_3b8) & 0xfffffffffffffffe);
            }
            if ((uStack_3e8 & 1) != 0) {
              thunk_FUN_0ee326a0(pbStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
            }
            if ((bStack_6b8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_6a8,
                                 CONCAT44(uStack_6b4,
                                          CONCAT22(uStack_6b6,CONCAT11(uStack_6b7,bStack_6b8))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_690 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_680,
                                 CONCAT44(uStack_68c,
                                          CONCAT22(uStack_68e,CONCAT11(uStack_68f,bStack_690))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_668 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_658,
                                 CONCAT44(uStack_664,
                                          CONCAT22(uStack_666,CONCAT11(uStack_667,bStack_668))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_640 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_630,
                                 CONCAT44(uStack_63c,
                                          CONCAT22(uStack_63e,CONCAT11(uStack_63f,bStack_640))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_618 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_608,
                                 CONCAT44(uStack_614,
                                          CONCAT22(uStack_616,CONCAT11(uStack_617,bStack_618))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_5f0 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_5e0,
                                 CONCAT44(uStack_5ec,
                                          CONCAT22(uStack_5ee,CONCAT11(uStack_5ef,bStack_5f0))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_5c8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_5b8,
                                 CONCAT44(uStack_5c4,
                                          CONCAT22(uStack_5c6,CONCAT11(uStack_5c7,bStack_5c8))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_5a0 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_590,
                                 CONCAT44(uStack_59c,
                                          CONCAT22(uStack_59e,CONCAT11(uStack_59f,bStack_5a0))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_578 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_568,
                                 CONCAT44(uStack_574,
                                          CONCAT22(uStack_576,CONCAT11(uStack_577,bStack_578))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_550 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_540,
                                 CONCAT44(uStack_54c,
                                          CONCAT22(uStack_54e,CONCAT11(uStack_54f,bStack_550))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_528 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_518,
                                 CONCAT44(uStack_524,
                                          CONCAT22(uStack_526,CONCAT11(uStack_527,bStack_528))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_500 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_4f0,
                                 CONCAT44(uStack_4fc,
                                          CONCAT22(uStack_4fe,CONCAT11(uStack_4ff,bStack_500))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_4d8 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_4c8,
                                 CONCAT44(uStack_4d4,
                                          CONCAT22(uStack_4d6,CONCAT11(uStack_4d7,bStack_4d8))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_4b0 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_4a0,
                                 CONCAT44(uStack_4ac,
                                          CONCAT22(uStack_4ae,CONCAT11(uStack_4af,bStack_4b0))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_488 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_478,
                                 CONCAT44(uStack_484,
                                          CONCAT22(uStack_486,CONCAT11(uStack_487,bStack_488))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_460 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_450,
                                 CONCAT44(uStack_45c,
                                          CONCAT22(uStack_45e,CONCAT11(uStack_45f,bStack_460))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_438 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_428,
                                 CONCAT44(uStack_434,
                                          CONCAT22(uStack_436,CONCAT11(uStack_437,bStack_438))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_410 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_400,
                                 CONCAT44(uStack_40c,
                                          CONCAT22(uStack_40e,CONCAT11(uStack_40f,bStack_410))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_720 & 1) != 0) {
              thunk_FUN_0ee326a0(uStack_710,
                                 CONCAT44(uStack_71c,
                                          CONCAT22(uStack_71e,CONCAT11(uStack_71f,bStack_720))) &
                                 0xfffffffffffffffe);
            }
            if ((bStack_6f8 & 1) != 0) {
              thunk_FUN_0ee326a0(pbStack_6e8,
                                 CONCAT44(uStack_6f4,
                                          CONCAT22(uStack_6f6,CONCAT11(uStack_6f7,bStack_6f8))) &
                                 0xfffffffffffffffe);
            }
            lVar11 = lStack_730;
            func_0x0417d010(&UNK_0d1bffc0,lStack_730 + -0xb60,0xf53dab8);
            *(undefined1 *)(lVar11 + -0xb38) = 1;
            piStack_3f0 = (int *)0x0;
            if ((uStack_760 & 1) == 0) goto LAB_0d1b89d5;
LAB_0d1b9525:
            piStack_3f0 = (int *)0x0;
            FUN_0412e5e0(&uStack_3e8,pbStack_750,CONCAT44(uStack_754,uStack_758));
          }
          else {
            piStack_3f0 = (int *)0x0;
            if ((uStack_760 & 1) != 0) goto LAB_0d1b9525;
LAB_0d1b89d5:
            piStack_3f0 = (int *)0x0;
            pbStack_3d8 = pbStack_750;
            uStack_3e8 = uStack_760;
            uStack_3e4 = uStack_75c;
            uStack_3e0 = uStack_758;
            uStack_3dc = uStack_754;
          }
          uVar6 = uStack_3e8;
          plStack_3d0 = (long *)0x0;
          if ((uStack_3e8 & 1) == 0) {
            uVar13 = (ulong)((byte)uStack_3e8 >> 1);
            if (uVar13 != 0) goto LAB_0d1b9571;
LAB_0d1b95c7:
            piVar22 = (int *)0x0;
          }
          else {
            uVar13 = CONCAT44(uStack_3dc,uStack_3e0);
            if (uVar13 == 0) goto LAB_0d1b95c7;
LAB_0d1b9571:
            pbVar20 = (byte *)((long)&uStack_3e8 + 1);
            if ((uStack_3e8 & 1) != 0) {
              pbVar20 = pbStack_3d8;
            }
            if ((pbVar20 == (byte *)0x0) || (*pbVar20 == 0)) goto LAB_0d1b95c7;
            uVar15 = func_0x0eee2e90(pbVar20);
            piVar22 = (int *)0xcbf29ce484222325;
            if (uVar15 != 0) {
              if (7 < uVar15) {
                uVar14 = uVar15 & 0xfffffffffffffff8;
                do {
                  piVar22 = (int *)(((((((((long)piVar22 * 0x100000001b3 ^ (ulong)*pbVar20) *
                                          0x100000001b3 ^ (ulong)pbVar20[1]) * 0x100000001b3 ^
                                        (ulong)pbVar20[2]) * 0x100000001b3 ^ (ulong)pbVar20[3]) *
                                       0x100000001b3 ^ (ulong)pbVar20[4]) * 0x100000001b3 ^
                                     (ulong)pbVar20[5]) * 0x100000001b3 ^ (ulong)pbVar20[6]) *
                                    0x100000001b3 ^ (ulong)pbVar20[7]);
                  pbVar20 = pbVar20 + 8;
                  uVar14 = uVar14 - 8;
                } while (uVar14 != 0);
              }
              if ((uVar15 & 7) != 0) {
                uVar14 = 0;
                do {
                  piVar22 = (int *)((long)piVar22 * 0x100000001b3 ^ (ulong)pbVar20[uVar14]);
                  uVar14 = uVar14 + 1;
                } while (((uint)uVar15 & 7) != uVar14);
              }
            }
          }
          uVar18 = uVar6 & 0xff;
          piVar3 = (int *)plVar12[1];
          piStack_3f0 = piVar22;
          if (piVar3 != (int *)0x0) {
            lVar11 = *plVar12;
            uVar15 = (long)piVar3 - ((ulong)piVar3 >> 1 & 0x5555555555555555);
            uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
            uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar15 >> 0x38 < 2) {
              piVar19 = (int *)((long)piVar3 - 1U & (ulong)piVar22);
              plVar12 = *(long **)(lVar11 + (long)piVar19 * 8);
            }
            else {
              piVar19 = piVar22;
              if (piVar3 <= piVar22) {
                if (((ulong)piVar22 | (ulong)piVar3) >> 0x20 == 0) {
                  piVar19 = (int *)(((ulong)piVar22 & 0xffffffff) % ((ulong)piVar3 & 0xffffffff));
                  plVar12 = *(long **)(lVar11 + (long)piVar19 * 8);
                  goto joined_r0x0d1b98cb;
                }
                piVar19 = (int *)((ulong)piVar22 % (ulong)piVar3);
              }
              plVar12 = *(long **)(lVar11 + (long)piVar19 * 8);
            }
joined_r0x0d1b98cb:
            if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
              pbStack_770 = (byte *)((long)&uStack_3e8 + 1);
              if ((uVar6 & 1) != 0) {
                pbStack_770 = pbStack_3d8;
              }
              uStack_814 = uVar6 & 0xff;
              if ((byte)(uVar15 >> 0x38) < 2) {
                do {
                  if (piVar22 == (int *)plVar12[1]) {
                    if ((int *)plVar12[2] == piVar22) {
                      bVar2 = *(byte *)(plVar12 + 3);
                      if ((bVar2 & 1) == 0) {
                        uVar15 = (ulong)(bVar2 >> 1);
                      }
                      else {
                        uVar15 = plVar12[4];
                      }
                      if (uVar15 == uVar13) {
                        if ((bVar2 & 1) == 0) {
                          lVar11 = (long)plVar12 + 0x19;
                        }
                        else {
                          lVar11 = plVar12[5];
                        }
                        iVar8 = func_0x0eee3000(lVar11,pbStack_770,uVar13);
                        uVar18 = uStack_814;
                        if (iVar8 == 0) goto LAB_0d1b9afd;
                      }
                    }
                    plVar12[6] = 0;
                  }
                  else if ((int *)((ulong)plVar12[1] & (long)piVar3 - 1U) != piVar19) break;
                  plVar12 = (long *)*plVar12;
                } while (plVar12 != (long *)0x0);
              }
              else {
                do {
                  piVar16 = (int *)plVar12[1];
                  if (piVar22 == piVar16) {
                    if ((int *)plVar12[2] == piVar22) {
                      bVar2 = *(byte *)(plVar12 + 3);
                      if ((bVar2 & 1) == 0) {
                        uVar15 = (ulong)(bVar2 >> 1);
                      }
                      else {
                        uVar15 = plVar12[4];
                      }
                      if (uVar15 == uVar13) {
                        if ((bVar2 & 1) == 0) {
                          lVar11 = (long)plVar12 + 0x19;
                        }
                        else {
                          lVar11 = plVar12[5];
                        }
                        iVar8 = func_0x0eee3000(lVar11,pbStack_770,uVar13);
                        uVar18 = uStack_814;
                        if (iVar8 == 0) goto LAB_0d1b9afd;
                      }
                    }
                    plVar12[6] = 0;
                  }
                  else {
                    if (piVar3 <= piVar16) {
                      if (((ulong)piVar16 | (ulong)piVar3) >> 0x20 == 0) {
                        if ((int *)(((ulong)piVar16 & 0xffffffff) % ((ulong)piVar3 & 0xffffffff)) ==
                            piVar19) goto LAB_0d1b96f7;
                        break;
                      }
                      piVar16 = (int *)((ulong)piVar16 % (ulong)piVar3);
                    }
                    if (piVar16 != piVar19) break;
                  }
LAB_0d1b96f7:
                  plVar12 = (long *)*plVar12;
                } while (plVar12 != (long *)0x0);
              }
            }
          }
          plVar12 = (long *)0x0;
          goto joined_r0x0d1b9b1e;
        }
        piVar22 = piStack_738;
        uVar13 = uStack_740;
        if (uStack_740 == 6) goto LAB_0d1b88d3;
LAB_0d1b8895:
        if (uVar13 == 3) {
          if (*(char *)((long)piVar22 + 2) == 't' && (short)*piVar22 == 0x6f6e) {
LAB_0d1b893b:
            uStack_834 = 0;
            goto LAB_0d1b8943;
          }
        }
        else if (uVar13 == 2) {
          if ((short)*piVar22 == 0x3d21) goto LAB_0d1b893b;
          if ((short)*piVar22 == 0x3d3d) goto LAB_0d1b88ea;
        }
LAB_0d1b8907:
        piStack_3f0 = piVar22;
        func_0x0c00b4c0(1,3,0x23,&UNK_014dbdf7,&piStack_3f0);
        plStack_840 = (long *)0x0;
        goto LAB_0d1b9950;
      }
      func_0x0b626520(1,3,0x23,&UNK_011cb6e8);
      plVar21 = plStack_768;
      goto LAB_0d1b87bb;
    }
    func_0x04862b40(auStack_6d0);
    func_0x04862b40(auStack_830);
  }
  return plStack_780;
LAB_0d1b9afd:
  plStack_3d0 = plVar12 + 2;
  plVar12[6] = (long)&piStack_3f0;
  uVar18 = uStack_814;
joined_r0x0d1b9b1e:
  if ((uVar18 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
  }
  if (plVar12 == (long *)0x0) {
    plStack_840 = (long *)0x0;
  }
  else {
    (*(code *)plVar12[7])(&plStack_840,uVar9);
    if (plStack_840 != (long *)0x0) {
      *(char *)(plStack_840 + 1) = (char)uStack_834;
    }
  }
  if ((uStack_760 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_750,CONCAT44(uStack_75c,uStack_760) & 0xfffffffffffffffe);
  }
LAB_0d1b9950:
  if ((bStack_748 & 1) != 0) {
    thunk_FUN_0ee326a0(piStack_738,CONCAT71(uStack_747,bStack_748) & 0xfffffffffffffffe);
  }
  plVar12 = plStack_840;
  plVar21 = plStack_768;
  if (plStack_840 != (long *)0x0) {
    if (plStack_768 < plStack_820) {
      plStack_840 = (long *)0x0;
      *plStack_768 = (long)plVar12;
      plVar21 = plStack_768 + 1;
      plVar1 = plStack_820;
      lVar11 = lStack_788;
    }
    else {
      lVar17 = (long)plStack_768 - lStack_788;
      uVar13 = (lVar17 >> 3) + 1;
      if (0x1fffffffffffffff < uVar13) {
LAB_0d1ba164:
        uVar9 = func_0x0d1c0120();
        if ((uStack_58 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
        }
        if ((uStack_88 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
        }
        if ((uStack_b8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_d8,CONCAT44(uStack_e4,uStack_e8) & 0xfffffffffffffffe);
        }
        if ((uStack_118 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_108,CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
        }
        if ((uStack_148 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_138,CONCAT44(uStack_144,uStack_148) & 0xfffffffffffffffe);
        }
        if ((uStack_178 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_168,CONCAT44(uStack_174,uStack_178) & 0xfffffffffffffffe);
        }
        if ((uStack_1a8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_198,CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
        }
        if ((uStack_1d8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe);
        }
        if ((uStack_208 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_1f8,CONCAT44(uStack_204,uStack_208) & 0xfffffffffffffffe);
        }
        if ((uStack_238 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
        }
        if ((uStack_268 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_258,CONCAT44(uStack_264,uStack_268) & 0xfffffffffffffffe);
        }
        if ((uStack_298 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_288,CONCAT44(uStack_294,uStack_298) & 0xfffffffffffffffe);
        }
        if ((uStack_2c8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_2b8,CONCAT44(uStack_2c4,uStack_2c8) & 0xfffffffffffffffe);
        }
        if ((uStack_2f8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_2e8,CONCAT44(uStack_2f4,uStack_2f8) & 0xfffffffffffffffe);
        }
        if ((uStack_328 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_318,CONCAT44(uStack_324,uStack_328) & 0xfffffffffffffffe);
        }
        if ((uStack_358 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_348,CONCAT44(uStack_354,uStack_358) & 0xfffffffffffffffe);
        }
        if ((uStack_388 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_378,CONCAT44(uStack_384,uStack_388) & 0xfffffffffffffffe);
        }
        if ((uStack_3b8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_3a8,CONCAT44(uStack_3b4,uStack_3b8) & 0xfffffffffffffffe);
        }
        if ((uStack_3e8 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
        }
        if ((bStack_6b8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_6a8,
                             CONCAT44(uStack_6b4,
                                      CONCAT22(uStack_6b6,CONCAT11(uStack_6b7,bStack_6b8))) &
                             0xfffffffffffffffe);
        }
        if ((bStack_690 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_680,
                             CONCAT44(uStack_68c,
                                      CONCAT22(uStack_68e,CONCAT11(uStack_68f,bStack_690))) &
                             0xfffffffffffffffe);
        }
        puStack_810 = &uStack_60;
        if ((bStack_668 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_658,
                             CONCAT44(uStack_664,
                                      CONCAT22(uStack_666,CONCAT11(uStack_667,bStack_668))) &
                             0xfffffffffffffffe);
        }
        puStack_808 = puStack_810;
        if ((bStack_640 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_630,
                             CONCAT44(uStack_63c,
                                      CONCAT22(uStack_63e,CONCAT11(uStack_63f,bStack_640))) &
                             0xfffffffffffffffe);
        }
        puStack_800 = puStack_808;
        if ((bStack_618 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_608,
                             CONCAT44(uStack_614,
                                      CONCAT22(uStack_616,CONCAT11(uStack_617,bStack_618))) &
                             0xfffffffffffffffe);
        }
        puStack_7f8 = puStack_800;
        if ((bStack_5f0 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_5e0,
                             CONCAT44(uStack_5ec,
                                      CONCAT22(uStack_5ee,CONCAT11(uStack_5ef,bStack_5f0))) &
                             0xfffffffffffffffe);
        }
        puStack_7f0 = puStack_7f8;
        if ((bStack_5c8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_5b8,
                             CONCAT44(uStack_5c4,
                                      CONCAT22(uStack_5c6,CONCAT11(uStack_5c7,bStack_5c8))) &
                             0xfffffffffffffffe);
        }
        puStack_7e8 = puStack_7f0;
        if ((bStack_5a0 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_590,
                             CONCAT44(uStack_59c,
                                      CONCAT22(uStack_59e,CONCAT11(uStack_59f,bStack_5a0))) &
                             0xfffffffffffffffe);
        }
        puStack_7e0 = puStack_7e8;
        if ((bStack_578 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_568,
                             CONCAT44(uStack_574,
                                      CONCAT22(uStack_576,CONCAT11(uStack_577,bStack_578))) &
                             0xfffffffffffffffe);
        }
        puStack_7d8 = puStack_7e0;
        if ((bStack_550 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_540,
                             CONCAT44(uStack_54c,
                                      CONCAT22(uStack_54e,CONCAT11(uStack_54f,bStack_550))) &
                             0xfffffffffffffffe);
        }
        puStack_7d0 = puStack_7d8;
        if ((bStack_528 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_518,
                             CONCAT44(uStack_524,
                                      CONCAT22(uStack_526,CONCAT11(uStack_527,bStack_528))) &
                             0xfffffffffffffffe);
        }
        puStack_7c8 = puStack_7d0;
        if ((bStack_500 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_4f0,
                             CONCAT44(uStack_4fc,
                                      CONCAT22(uStack_4fe,CONCAT11(uStack_4ff,bStack_500))) &
                             0xfffffffffffffffe);
        }
        puStack_7c0 = puStack_7c8;
        if ((bStack_4d8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_4c8,
                             CONCAT44(uStack_4d4,
                                      CONCAT22(uStack_4d6,CONCAT11(uStack_4d7,bStack_4d8))) &
                             0xfffffffffffffffe);
        }
        puStack_7b8 = puStack_7c0;
        if ((bStack_4b0 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_4a0,
                             CONCAT44(uStack_4ac,
                                      CONCAT22(uStack_4ae,CONCAT11(uStack_4af,bStack_4b0))) &
                             0xfffffffffffffffe);
        }
        puStack_7b0 = puStack_7b8;
        if ((bStack_488 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_478,
                             CONCAT44(uStack_484,
                                      CONCAT22(uStack_486,CONCAT11(uStack_487,bStack_488))) &
                             0xfffffffffffffffe);
        }
        puStack_7a8 = puStack_7b0;
        if ((bStack_460 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_450,
                             CONCAT44(uStack_45c,
                                      CONCAT22(uStack_45e,CONCAT11(uStack_45f,bStack_460))) &
                             0xfffffffffffffffe);
        }
        puStack_7a0 = puStack_7a8;
        if ((bStack_438 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_428,
                             CONCAT44(uStack_434,
                                      CONCAT22(uStack_436,CONCAT11(uStack_437,bStack_438))) &
                             0xfffffffffffffffe);
        }
        puStack_798 = puStack_7a0;
        if ((bStack_410 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_400,
                             CONCAT44(uStack_40c,
                                      CONCAT22(uStack_40e,CONCAT11(uStack_40f,bStack_410))) &
                             0xfffffffffffffffe);
        }
        puStack_790 = puStack_798;
        if ((bStack_720 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_710,
                             CONCAT44(uStack_71c,
                                      CONCAT22(uStack_71e,CONCAT11(uStack_71f,bStack_720))) &
                             0xfffffffffffffffe);
        }
        puStack_778 = puStack_790;
        if ((bStack_6f8 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_6e8,
                             CONCAT44(uStack_6f4,
                                      CONCAT22(uStack_6f6,CONCAT11(uStack_6f7,bStack_6f8))) &
                             0xfffffffffffffffe);
        }
        if ((uStack_760 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_750,CONCAT44(uStack_75c,uStack_760) & 0xfffffffffffffffe);
        }
        if ((bStack_748 & 1) != 0) {
          thunk_FUN_0ee326a0(piStack_738,CONCAT71(uStack_747,bStack_748) & 0xfffffffffffffffe);
        }
        func_0x04862b40(auStack_6d0);
        func_0x04862b40(auStack_830);
        func_0x0d1bac80(plStack_780);
        func_0x0eee2d70(uVar9);
        pcVar4 = (code *)swi(3);
        plVar12 = (long *)(*pcVar4)();
        return plVar12;
      }
      plStack_820 = (long *)((long)plStack_820 - lStack_788);
      uVar15 = (long)plStack_820 >> 2;
      if ((ulong)((long)plStack_820 >> 2) <= uVar13) {
        uVar15 = uVar13;
      }
      if ((long *)0x7ffffffffffffff7 < plStack_820) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (0x1fffffffffffffff < uVar15) {
        func_0x04882eb0();
        goto LAB_0d1ba164;
      }
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
      if (lVar11 == 0) {
        func_0x0eec74c0(uVar15 * 8,0);
      }
      lVar5 = lStack_788;
      plVar1 = (long *)(lVar11 + uVar15 * 8);
      plStack_840 = (long *)0x0;
      *(long **)(lVar11 + lVar17) = plVar12;
      plVar21 = (long *)(lVar11 + lVar17 + 8);
      lVar11 = lVar11 + lVar17 + (lVar17 >> 3) * -8;
      func_0x0eee2f00(lVar11,lStack_788,lVar17);
      *plStack_780 = lVar11;
      plStack_780[1] = (long)plVar21;
      plStack_780[2] = (long)plVar1;
      if (lVar5 != 0) {
        thunk_FUN_0ee326a0(lVar5,plStack_820);
      }
    }
    lStack_788 = lVar11;
    plStack_820 = plVar1;
    plVar12 = plStack_840;
    plStack_780[1] = (long)plVar21;
    plStack_840 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
  }
LAB_0d1b87bb:
  plStack_768 = plVar21;
  func_0x04862ba0(auStack_830);
  goto LAB_0d1b87c3;
}


