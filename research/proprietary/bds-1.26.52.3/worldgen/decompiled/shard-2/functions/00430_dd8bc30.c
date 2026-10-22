/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xde8bc30 (ELF vaddr 0xdd8bc30)
 * Label: caller-of-callee
 * Body:  [[0de8bc30, 0de8c4fc] [0de8c500, 0de8cc3b] [0de8cc40, 0de8cec0] [0de8ced0, 0de8d3b8] [0de8d3c0, 0de8d4f4] [0de8d500, 0de8dc3d] [0de8dc40, 0de8de7d] [0de8de80, 0de8deb1] [0de8dec0, 0de8def2] [0de8df00, 0de8e8dc] [0de8e8e0, 0de8f35c] [0de8f360, 0de8f394] [0de8f3a0, 0de8f76c]]
 * Ghidra: FUN_0de8bc30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0de8bc30(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined5 uVar8;
  undefined3 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  uint *puVar27;
  byte *pbVar28;
  code *pcVar29;
  byte *pbVar30;
  long lVar31;
  bool bVar32;
  undefined *puStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  code *pcStack_6f0;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined1 *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long *plStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 uStack_690;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined4 *puStack_678;
  undefined1 uStack_670;
  undefined8 *puStack_668;
  ulong uStack_660;
  undefined8 *puStack_658;
  long lStack_650;
  undefined4 uStack_648;
  undefined1 uStack_640;
  undefined *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  uint uStack_620;
  int iStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  uint uStack_60c;
  byte bStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined4 uStack_5f7;
  undefined1 uStack_5f3;
  undefined2 uStack_5f2;
  byte bStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined5 uStack_5e7;
  undefined2 uStack_5e2;
  undefined1 uStack_5e0;
  undefined5 uStack_5df;
  undefined1 uStack_5da;
  undefined1 uStack_5d9;
  byte bStack_5d8;
  undefined4 uStack_5d7;
  undefined4 uStack_5d3;
  undefined4 uStack_5cf;
  undefined4 uStack_5cb;
  undefined4 uStack_5c7;
  undefined3 uStack_5c3;
  ulong uStack_5c0;
  undefined *puStack_5b8;
  undefined4 *puStack_5b0;
  undefined4 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  byte bStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  undefined5 uStack_587;
  undefined2 uStack_582;
  undefined1 uStack_580;
  undefined5 uStack_57f;
  undefined1 uStack_57a;
  undefined1 uStack_579;
  uint uStack_578;
  undefined4 uStack_574;
  undefined1 uStack_570;
  undefined4 uStack_56f;
  undefined4 uStack_56b;
  undefined4 uStack_567;
  undefined1 uStack_563;
  undefined2 uStack_562;
  ulong uStack_560;
  undefined8 uStack_558;
  undefined4 *puStack_550;
  ulong uStack_548;
  undefined8 uStack_540;
  undefined4 *puStack_538;
  byte bStack_528;
  undefined4 uStack_527;
  undefined4 uStack_523;
  undefined4 uStack_51f;
  undefined2 uStack_51b;
  undefined1 uStack_519;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined4 *puStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 *puStack_4e8;
  byte bStack_4e0;
  undefined4 uStack_4df;
  undefined4 uStack_4db;
  undefined4 uStack_4d7;
  undefined1 uStack_4d3;
  undefined2 uStack_4d2;
  undefined1 uStack_4d0;
  undefined5 uStack_4cf;
  undefined1 uStack_4ca;
  undefined1 uStack_4c9;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  byte bStack_4b0;
  undefined4 uStack_4af;
  undefined4 uStack_4ab;
  undefined4 uStack_4a7;
  undefined4 uStack_4a3;
  undefined2 uStack_49f;
  undefined5 uStack_49d;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  byte bStack_480;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined4 uStack_46f;
  undefined1 uStack_46b;
  undefined2 uStack_46a;
  byte bStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined5 uStack_45f;
  undefined2 uStack_45a;
  undefined1 uStack_458;
  undefined5 uStack_457;
  undefined1 uStack_452;
  undefined1 uStack_451;
  byte bStack_450;
  undefined4 uStack_44f;
  undefined4 uStack_44b;
  undefined4 uStack_447;
  undefined4 uStack_443;
  undefined4 uStack_43f;
  undefined3 uStack_43b;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 *puStack_428;
  ulong uStack_420;
  undefined8 *puStack_418;
  undefined4 *puStack_410;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined4 *puStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  byte bStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined5 uStack_3cf;
  undefined2 uStack_3ca;
  undefined1 uStack_3c8;
  undefined5 uStack_3c7;
  undefined1 uStack_3c2;
  undefined1 uStack_3c1;
  byte bStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined4 uStack_3af;
  undefined1 uStack_3ab;
  undefined2 uStack_3aa;
  byte bStack_3a8;
  undefined4 uStack_3a7;
  undefined4 uStack_3a3;
  undefined4 uStack_39f;
  undefined4 uStack_39b;
  undefined4 uStack_397;
  undefined3 uStack_393;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  char cStack_358;
  long lStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  char cStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  char cStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *puStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined4 *puStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0de8feb0();
  func_0x0de81860(param_1);
  if ((DAT_0f740380 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740380), iVar14 != 0)) {
    func_0x0df43660();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740300,0xf53dab8);
    func_0x0410844d(&DAT_0f740380);
  }
  lVar19 = param_1 + 0x18;
  plVar17 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740300 + 4)) * 8);
  do {
    lVar31 = *plVar17;
    if (lVar31 == -1) goto LAB_0de8bcb0;
    plVar17 = (long *)(*(long *)(param_1 + 0x30) + lVar31 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar31 * 0x18) != *(uint *)(_DAT_0f740300 + 4))
  ;
  if (plVar17 == *(long **)(param_1 + 0x38)) {
LAB_0de8bcb0:
    puVar16 = &DAT_0f740300;
    if (iRam000000000f740360 != -0x2b3da790) goto LAB_0de8bd1d;
LAB_0de8bcdb:
    lVar31 = *(long *)(puVar16 + 0x68);
    if (lVar31 == 0) goto LAB_0de8bd1d;
    bVar32 = (*(byte *)(lVar31 + 8) & 1) != 0;
    lVar21 = lVar31 + 9;
    if (bVar32) {
      lVar21 = *(long *)(lVar31 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar31 + 8) >> 1);
    if (bVar32) {
      uVar18 = *(ulong *)(lVar31 + 0x10);
    }
    func_0x0df43c80(&uStack_348,param_1,lVar21,uVar18);
  }
  else {
    puVar16 = (undefined *)plVar17[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0de8bcdb;
LAB_0de8bd1d:
    func_0x0df43c80(&uStack_348,param_1,&UNK_012854dd,0xb);
  }
  if (cStack_318 == '\0') {
    puStack_6c0 = (undefined *)0x0;
    uStack_700 = (undefined8 *)0xffffffffffffffff;
    uStack_6f8 = (undefined4 *)0x0;
    pcStack_6f0 = (code *)0xff;
    puStack_708 = &UNK_0f4e3df0;
    puStack_6e8 = (undefined *)0x0;
    puStack_6e0 = (undefined *)0x0;
    puStack_6d8 = (undefined8 *)0x0;
    puStack_6d0 = (undefined1 *)0x0;
    puStack_6c8 = (undefined *)0x3f800000;
    bStack_528 = 0x2c;
    uStack_51b = (undefined2)_UNK_01268974;
    uStack_519 = 0x6b;
    uStack_518 = 0x746e655f;
    uStack_514 = 0x797469;
    uStack_527 = _DAT_01268968;
    uStack_523 = _UNK_0126896c;
    uStack_51f = _UNK_01268970;
    puStack_500 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_500 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar25 = _UNK_0131c644;
    uStack_510 = (long *)0x21;
    puStack_508 = (undefined *)0x19;
    *(ulong *)((long)puStack_500 + 9) = CONCAT17(UNK_0131c643,CONCAT43(_UNK_0131c63f,_DAT_0131c63c))
    ;
    *(undefined8 *)((long)puStack_500 + 0x11) = uVar25;
    uVar12 = _UNK_0131c63f;
    uVar11 = _UNK_0131c63b;
    uVar10 = _UNK_0131c637;
    *puStack_500 = _DAT_0131c633;
    puStack_500[1] = uVar10;
    puStack_500[2] = uVar11;
    puStack_500[3] = uVar12;
    *(undefined1 *)((long)puStack_500 + 0x19) = 0;
    puStack_4e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_4e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar25 = _UNK_013d6da9;
    uStack_4f8 = 0x21;
    uStack_4f0 = 0x19;
    *(ulong *)((long)puStack_4e8 + 9) = CONCAT17(UNK_013d6da8,_DAT_013d6da1);
    *(undefined8 *)((long)puStack_4e8 + 0x11) = uVar25;
    uVar25 = CONCAT71(_DAT_013d6da1,UNK_013d6da0);
    *puStack_4e8 = _DAT_013d6d98;
    puStack_4e8[1] = uVar25;
    *(undefined1 *)((long)puStack_4e8 + 0x19) = 0;
    bStack_4e0 = 0x2a;
    uStack_4df = _DAT_011cabba;
    uStack_4db = _UNK_011cabbe;
    uStack_4d7 = _UNK_011cabc2;
    uStack_4d3 = (undefined1)_UNK_011cabc6;
    uStack_4d2 = 0x5f6d;
    uStack_4d0 = 0x76;
    uStack_4cf = 0x6c61757369;
    uStack_4ca = 0;
    puStack_4b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_4b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar25 = _UNK_011ff925;
    puStack_4c8 = (undefined *)0x21;
    uStack_4c0 = 0x1b;
    *(ulong *)((long)puStack_4b8 + 0xb) = CONCAT35(_UNK_011ff922,_DAT_011ff91d);
    *(undefined8 *)((long)puStack_4b8 + 0x13) = uVar25;
    uVar25 = CONCAT53(_DAT_011ff91d,_UNK_011ff91a);
    *puStack_4b8 = _DAT_011ff912;
    puStack_4b8[1] = uVar25;
    *(undefined1 *)((long)puStack_4b8 + 0x1b) = 0;
    bStack_4b0 = 0x22;
    uStack_4af = _DAT_013f085d;
    uStack_4ab = _UNK_013f0861;
    uStack_4a7 = _UNK_013f0865;
    uStack_4a3 = _UNK_013f0869;
    uStack_49f = 0x74;
    puStack_488 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puStack_488 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar25 = _UNK_0147048f;
    uStack_498 = 0x1b;
    uStack_490 = 0x17;
    *puStack_488 = _DAT_01470487;
    puStack_488[1] = uVar25;
    *(undefined8 *)((long)puStack_488 + 0xf) = 0x7974696c69626168;
    *(undefined1 *)((long)puStack_488 + 0x17) = 0;
    bStack_480 = 0x28;
    uStack_47f = (undefined7)_DAT_014a58e8;
    uStack_478 = (undefined1)((ulong)_DAT_014a58e8 >> 0x38);
    uStack_477 = (undefined7)_UNK_014a58f0;
    uStack_470 = (undefined1)((ulong)_UNK_014a58f0 >> 0x38);
    uStack_46f = 0x6e6f5f6c;
    uStack_46b = 0;
    bStack_468 = 0x2a;
    uStack_467 = (undefined7)_DAT_01301518;
    uStack_460 = (undefined1)((ulong)_DAT_01301518 >> 0x38);
    uStack_45f = (undefined5)_UNK_01301520;
    uStack_45a = 0x6e69;
    uStack_458 = 0x74;
    uStack_457 = 0x7463617265;
    uStack_452 = 0;
    bStack_450 = 0x26;
    uStack_44f = _DAT_0147049f;
    uStack_44b = _UNK_014704a3;
    uStack_447 = _UNK_014704a7;
    uStack_443 = CONCAT13(0x61,(int3)_UNK_014704ab);
    uStack_43f = 0x646563;
    puStack_428 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_428 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar25 = _UNK_014a5912;
    uStack_438 = 0x21;
    uStack_430 = 0x1d;
    *(ulong *)((long)puStack_428 + 0xd) = CONCAT53(_UNK_014a590d,_DAT_014a590a);
    *(undefined8 *)((long)puStack_428 + 0x15) = uVar25;
    uVar12 = _UNK_014a5909;
    uVar11 = _UNK_014a5905;
    uVar10 = _UNK_014a5901;
    *puStack_428 = _DAT_014a58fd;
    puStack_428[1] = uVar10;
    puStack_428[2] = uVar11;
    puStack_428[3] = uVar12;
    *(undefined1 *)((long)puStack_428 + 0x1d) = 0;
    puStack_410 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_410 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar25 = _UNK_0140a15c;
    uStack_420 = 0x21;
    puStack_418 = (undefined8 *)0x1b;
    *(ulong *)((long)puStack_410 + 0xb) =
         CONCAT35(_UNK_0140a159,CONCAT41(_UNK_0140a155,DAT_0140a154));
    *(undefined8 *)((long)puStack_410 + 0x13) = uVar25;
    uVar12 = _UNK_0140a155;
    uVar11 = _UNK_0140a151;
    uVar10 = _UNK_0140a14d;
    *puStack_410 = _DAT_0140a149;
    puStack_410[1] = uVar10;
    puStack_410[2] = uVar11;
    puStack_410[3] = uVar12;
    *(undefined1 *)((long)puStack_410 + 0x1b) = 0;
    puStack_3f8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_3f8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar12 = _UNK_012689ac;
    uVar11 = _UNK_012689a8;
    uVar10 = _UNK_012689a4;
    uStack_408 = 0x21;
    uStack_400 = 0x18;
    *puStack_3f8 = _DAT_012689a0;
    puStack_3f8[1] = uVar10;
    puStack_3f8[2] = uVar11;
    puStack_3f8[3] = uVar12;
    *(undefined8 *)(puStack_3f8 + 4) = 0x676e696b6369745f;
    *(undefined1 *)(puStack_3f8 + 6) = 0;
    puStack_3e0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_3e0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uStack_3f0 = 0x21;
    uStack_3e8 = 0x18;
    uVar25 = CONCAT44(_UNK_011e3a14,_UNK_011e3a10);
    *puStack_3e0 = CONCAT44(_UNK_011e3a0c,_DAT_011e3a08);
    puStack_3e0[1] = uVar25;
    puStack_3e0[2] = 0x676e696b6369745f;
    *(undefined1 *)(puStack_3e0 + 3) = 0;
    bStack_3d8 = 0x2a;
    uStack_3d7 = (undefined7)_DAT_014db039;
    uStack_3d0 = (undefined1)((ulong)_DAT_014db039 >> 0x38);
    uStack_3cf = (undefined5)_UNK_014db041;
    uStack_3ca = 0x7473;
    uStack_3c8 = 0x65;
    uStack_3c7 = 0x66666f5f70;
    uStack_3c2 = 0;
    bStack_3c0 = 0x28;
    uStack_3bf = (undefined7)CONCAT44(_UNK_011e39f7,_DAT_011e39f3);
    uStack_3b8 = (undefined1)((uint)_UNK_011e39f7 >> 0x18);
    uStack_3b7 = (undefined7)CONCAT44(_UNK_011e39ff,_UNK_011e39fb);
    uStack_3b0 = (undefined1)((uint)_UNK_011e39ff >> 0x18);
    uStack_3af = 0x6e6f5f70;
    uStack_3ab = 0;
    bStack_3a8 = 0x26;
    uStack_3a7 = _DAT_0131c4c6;
    uStack_3a3 = _UNK_0131c4ca;
    uStack_39f = _UNK_0131c4ce;
    uStack_39b = CONCAT13(99,(int3)_UNK_0131c4d2);
    uStack_397 = 0x656275;
    func_0x0ed620a0(&puStack_708,&bStack_528,0x11);
    uStack_2f0 = CONCAT31(uStack_2f0._1_3_,pcStack_6f0._0_1_);
    uStack_300 = uStack_700;
    uStack_2f8 = uStack_6f8;
    uStack_308 = &UNK_0f4e3df0;
    func_0x04907a10(&uStack_2e8,&puStack_6e8);
    uStack_2c0 = puStack_6c0._0_1_;
    puStack_630 = (undefined8 *)0xffffffffffffffff;
    puStack_628 = (undefined8 *)0x0;
    uStack_620._0_1_ = 0xff;
    puStack_638 = &UNK_0f4a2f30;
    uStack_610 = 0xffffffff;
    uStack_60c = 0xffffffff;
    bStack_608 = 0;
    uStack_607 = 0;
    uStack_600 = 0xff;
    uStack_618 = 0xf4a2e50;
    uStack_614 = 0;
    bStack_5f0 = 0xff;
    uStack_5ef = 0xffffffffffffff;
    uStack_5e8 = 0;
    uStack_5e7 = 0;
    uStack_5e2 = 0;
    uStack_5e0 = 0xff;
    uStack_5f8 = 0x50;
    uStack_5f7 = 0xf4a2c;
    uStack_5f3 = 0;
    uStack_5f2 = 0;
    uStack_5cf = 0xffffffff;
    uStack_5cb = 0xffffff;
    uStack_5c7 = 0;
    uStack_5c3 = 0;
    uStack_5c0 = CONCAT71(uStack_5c0._1_7_,0xff);
    bStack_5d8 = 0xd0;
    uStack_5d7 = 0xf4a2c;
    uStack_5d3 = 0xff000000;
    puStack_5b0 = (undefined4 *)uStack_300;
    puStack_5a8 = uStack_2f8;
    uStack_5a0 = CONCAT71(uStack_5a0._1_7_,(undefined1)uStack_2f0);
    puStack_5b8 = &UNK_0f4e3df0;
    func_0x04907a10(&puStack_598,&uStack_2e8);
    uStack_620 = CONCAT31(uStack_620._1_3_,0xff);
    uStack_308 = &UNK_0f4e3df0;
    uStack_570 = uStack_2c0;
    lVar31 = uStack_2e8;
    puVar20 = (undefined8 *)CONCAT71(uStack_2d7,uStack_2d8);
    while (puVar20 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar20;
      uStack_2e8 = lVar31;
      if ((*(byte *)(puVar20 + 2) & 1) != 0) {
        func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar20,0x28);
      lVar31 = uStack_2e8;
      puVar20 = puVar7;
    }
    uStack_2e8 = 0;
    if (lVar31 != 0) {
      func_0x0412a280(lVar31,CONCAT44(uStack_2dc,iStack_2e0) << 3);
    }
    if ((bStack_3a8 & 1) != 0) {
      func_0x0412a280(CONCAT35(uStack_393,CONCAT41(uStack_397,uStack_39b._3_1_)),
                      CONCAT35((undefined3)uStack_3a3,CONCAT41(uStack_3a7,bStack_3a8)) &
                      0xfffffffffffffffe);
    }
    if ((bStack_3c0 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_3aa,CONCAT15(uStack_3ab,CONCAT41(uStack_3af,uStack_3b0))),
                      CONCAT71(uStack_3bf,bStack_3c0) & 0xfffffffffffffffe);
    }
    if ((bStack_3d8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_3c1,CONCAT16(uStack_3c2,CONCAT51(uStack_3c7,uStack_3c8))),
                      CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
    }
    if ((uStack_3f0 & 1) != 0) {
      func_0x0412a280(puStack_3e0,uStack_3f0 & 0xfffffffffffffffe);
    }
    if ((uStack_408 & 1) != 0) {
      func_0x0412a280(puStack_3f8,uStack_408 & 0xfffffffffffffffe);
    }
    if ((uStack_420 & 1) != 0) {
      func_0x0412a280(puStack_410,uStack_420 & 0xfffffffffffffffe);
    }
    uVar10 = uStack_443;
    if ((uStack_438 & 1) != 0) {
      func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
      uVar10 = uStack_443;
    }
    uStack_443 = uVar10;
    if ((bStack_450 & 1) != 0) {
      uStack_443._3_1_ = (undefined1)((uint)uVar10 >> 0x18);
      uVar8 = CONCAT41(uStack_43f,uStack_443._3_1_);
      func_0x0412a280(CONCAT35(uStack_43b,uVar8),
                      CONCAT35((undefined3)uStack_44b,CONCAT41(uStack_44f,bStack_450)) &
                      0xfffffffffffffffe);
    }
    if ((bStack_468 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_451,CONCAT16(uStack_452,CONCAT51(uStack_457,uStack_458))),
                      CONCAT71(uStack_467,bStack_468) & 0xfffffffffffffffe);
    }
    if ((bStack_480 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_46a,CONCAT15(uStack_46b,CONCAT41(uStack_46f,uStack_470))),
                      CONCAT71(uStack_47f,bStack_480) & 0xfffffffffffffffe);
    }
    if ((uStack_498 & 1) != 0) {
      func_0x0412a280(puStack_488,uStack_498 & 0xfffffffffffffffe);
    }
    if ((bStack_4b0 & 1) != 0) {
      uStack_4a3._3_1_ = (undefined1)((uint)uStack_4a3 >> 0x18);
      uVar9 = CONCAT21(uStack_49f,uStack_4a3._3_1_);
      func_0x0412a280(CONCAT53(uStack_49d,uVar9),
                      CONCAT35((undefined3)uStack_4ab,CONCAT41(uStack_4af,bStack_4b0)) &
                      0xfffffffffffffffe);
    }
    if (((ulong)puStack_4c8 & 1) != 0) {
      func_0x0412a280(puStack_4b8,(ulong)puStack_4c8 & 0xfffffffffffffffe);
    }
    if ((bStack_4e0 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_4c9,CONCAT16(uStack_4ca,CONCAT51(uStack_4cf,uStack_4d0))),
                      CONCAT35((undefined3)uStack_4db,CONCAT41(uStack_4df,bStack_4e0)) &
                      0xfffffffffffffffe);
    }
    if ((uStack_4f8 & 1) != 0) {
      func_0x0412a280(puStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_510 & 1) != 0) {
      func_0x0412a280(puStack_500,(ulong)uStack_510 & 0xfffffffffffffffe);
    }
    if ((bStack_528 & 1) == 0) {
      uStack_6b8._4_4_ = (uint)(uStack_6b8 >> 0x20);
      puStack_708 = &UNK_0f4e3df0;
      uVar3 = uStack_6b8._4_4_;
      puVar16 = puStack_6e8;
      puVar20 = puStack_6d8;
    }
    else {
      func_0x0412a280(CONCAT44(uStack_514,uStack_518),
                      CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,bStack_528)) &
                      0xfffffffffffffffe);
      puStack_708 = &UNK_0f4e3df0;
      uVar3 = uStack_6b8._4_4_;
      puVar16 = puStack_6e8;
      puVar20 = puStack_6d8;
    }
    while (puVar20 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar20;
      puStack_6e8 = puVar16;
      if ((*(byte *)(puVar20 + 2) & 1) != 0) {
        func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar20,0x28);
      uVar3 = uStack_6b8._4_4_;
      puVar16 = puStack_6e8;
      puVar20 = puVar7;
    }
    puStack_6e8 = (undefined *)0x0;
    uStack_6b8._4_4_ = uVar3;
    if (puVar16 != (undefined *)0x0) {
      func_0x0412a280(puVar16,(long)puStack_6e0 << 3);
    }
    func_0x0df44830(&bStack_528,&uStack_348,&UNK_0122361d,9,1);
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar17 = (long)&UNK_0f2cccf0;
    if (uStack_510 != (long *)0x0) {
      lVar31 = *uStack_510;
      uStack_510 = plVar17;
      (**(code **)(lVar31 + 8))();
      plVar17 = uStack_510;
    }
    uStack_510 = plVar17;
    puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,uStack_518);
    uStack_700 = (undefined8 *)0x0;
    uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
    pcStack_6f0 = (code *)0x1;
    puStack_6e8 = (undefined *)0x0;
    puStack_6e0 = &UNK_0d9d7be0;
    puStack_6d8 = (undefined8 *)&SUB_048b06d0;
    puStack_6d0 = &SUB_0b68b830;
    puStack_6c8 = &UNK_0df44e50;
    puStack_6c0 = &UNK_0df45090;
    uStack_6b8 = (ulong)uStack_6b8._4_4_ << 0x20;
    uStack_6b0 = 0;
    plStack_6a8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_519,CONCAT25(uStack_51b,CONCAT41(uStack_51f,uStack_523._3_1_))),
                    &puStack_708);
    plVar17 = plStack_6a8;
    if (plStack_6a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_6a8 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
        FUN_0412c2d0(plVar17);
      }
    }
    func_0x0df44b50(&bStack_528);
    cStack_358 = cStack_318;
    uStack_368 = uStack_328;
    uStack_364 = uStack_324;
    iStack_360 = iStack_320;
    uStack_35c = uStack_31c;
    uStack_378 = uStack_338;
    uStack_374 = uStack_334;
    uStack_370 = uStack_330;
    uStack_36c = uStack_32c;
    uStack_388 = uStack_348;
    uStack_384 = uStack_344;
    uStack_380 = uStack_340;
    uStack_37c = uStack_33c;
    func_0x048b0bc0(&uStack_510);
    func_0x0df44830(&bStack_528,&uStack_388,&UNK_011ed181,10,1);
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar17 = (long)&UNK_0f4a6670;
    if (uStack_510 != (long *)0x0) {
      lVar31 = *uStack_510;
      uStack_510 = plVar17;
      (**(code **)(lVar31 + 8))();
      plVar17 = uStack_510;
    }
    uStack_510 = plVar17;
    puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,uStack_518);
    uStack_700 = (undefined8 *)0x0;
    uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
    pcStack_6f0 = (code *)0x1;
    puStack_6e8 = (undefined *)0x0;
    puStack_6e0 = &UNK_0df45490;
    puStack_6d8 = (undefined8 *)&SUB_048b06d0;
    puStack_6d0 = &SUB_0de12090;
    puStack_6c8 = &UNK_0df454a0;
    puStack_6c0 = &UNK_0df45670;
    uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
    uStack_6b0 = 0;
    plStack_6a8 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_519,CONCAT25(uStack_51b,CONCAT41(uStack_51f,uStack_523._3_1_))),
                    &puStack_708);
    plVar17 = plStack_6a8;
    if (plStack_6a8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_6a8 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
        FUN_0412c2d0(plVar17);
      }
    }
    func_0x0df44b50(&bStack_528);
    cVar13 = cStack_358;
    uVar10 = uStack_35c;
    iVar14 = iStack_360;
    lVar31 = CONCAT44(uStack_384,uStack_388);
    uStack_218 = CONCAT44(uStack_37c,uStack_380);
    uStack_210 = CONCAT44(uStack_374,uStack_378);
    uStack_208 = uStack_370;
    uStack_204 = uStack_36c;
    uStack_200 = uStack_368;
    uStack_1fc = uStack_364;
    func_0x048b0bc0(&uStack_510);
    puStack_668 = puStack_598;
    uStack_700 = puStack_630;
    uStack_6f8 = (undefined4 *)puStack_628;
    pcStack_6f0 = (code *)CONCAT71(pcStack_6f0._1_7_,(undefined1)uStack_620);
    puStack_708 = &UNK_0f4a2f30;
    puStack_6e0 = (undefined *)CONCAT44(uStack_60c,uStack_610);
    puStack_6d8 = (undefined8 *)CONCAT71(uStack_607,bStack_608);
    puStack_6d0 = (undefined1 *)CONCAT71(puStack_6d0._1_7_,uStack_600);
    puStack_6e8 = &UNK_0f4a2e50;
    puStack_6c0 = (undefined *)CONCAT71(uStack_5ef,bStack_5f0);
    uStack_6b8 = CONCAT26(uStack_5e2,CONCAT51(uStack_5e7,uStack_5e8));
    uStack_6b0 = CONCAT71(uStack_6b0._1_7_,uStack_5e0);
    puStack_6c8 = &UNK_0f4a2c50;
    uStack_6a0 = CONCAT35((undefined3)uStack_5cb,CONCAT41(uStack_5cf,uStack_5d3._3_1_));
    uStack_698 = CONCAT35(uStack_5c3,CONCAT41(uStack_5c7,uStack_5cb._3_1_));
    uStack_690 = (undefined1)uStack_5c0;
    plStack_6a8 = (long *)&UNK_0f4a2cd0;
    uStack_680 = puStack_5b0;
    puStack_678 = puStack_5a8;
    uStack_670 = (undefined1)uStack_5a0;
    puStack_688 = &UNK_0f4e3df0;
    puStack_598 = (undefined8 *)0x0;
    uStack_660 = CONCAT71(uStack_58f,bStack_590);
    bStack_590 = 0;
    uStack_58f = 0;
    puStack_658 = (undefined8 *)CONCAT26(uStack_582,CONCAT51(uStack_587,uStack_588));
    lStack_650 = CONCAT17(uStack_579,CONCAT16(uStack_57a,CONCAT51(uStack_57f,uStack_580)));
    uStack_648 = uStack_578;
    if (lStack_650 != 0) {
      uVar18 = puStack_658[1];
      if ((uStack_660 & uStack_660 - 1) == 0) {
        uVar18 = uVar18 & uStack_660 - 1;
      }
      else if (uStack_660 <= uVar18) {
        if ((uVar18 | uStack_660) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uStack_660 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uStack_660;
        }
      }
      puStack_668[uVar18] = &puStack_658;
      uStack_588 = 0;
      uStack_587 = 0;
      uStack_582 = 0;
      uStack_580 = 0;
      uStack_57f = 0;
      uStack_57a = 0;
      uStack_579 = 0;
    }
    uStack_640 = uStack_570;
    lStack_350 = lVar19;
    if (iVar14 == 4) {
      if ((DAT_0f740380 == '\0') && (iVar15 = func_0x04108328(&DAT_0f740380), iVar15 != 0)) {
        func_0x0df43660();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740300,0xf53dab8);
        func_0x0410844d(&DAT_0f740380);
      }
      plVar17 = (long *)(*(long *)(lVar31 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar31 + 0x20) - *(long *)(lVar31 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f740300 + 4)) * 8);
      do {
        lVar19 = *plVar17;
        if (lVar19 == -1) goto LAB_0de8cda8;
        plVar17 = (long *)(*(long *)(lVar31 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(lVar31 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f740300 + 4));
      if (plVar17 == *(long **)(lVar31 + 0x38)) {
LAB_0de8cda8:
        puVar16 = &DAT_0f740300;
      }
      else {
        puVar16 = (undefined *)plVar17[2];
      }
      lVar19 = func_0x048b1040(lVar31 + 0x18,puVar16,uVar10,1);
      if (lVar19 == 0) {
        bStack_528 = 0;
        uStack_527 = 0;
        uStack_523 = 0;
        uStack_51f = 0;
        uStack_51b = 0;
        uStack_519 = 0;
        func_0x048b10d0(&bStack_528);
        lVar19 = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,bStack_528));
        lVar21 = *(long *)(lVar19 + 0x38);
        if (lVar21 == 0) goto LAB_0de8ce92;
LAB_0de8ceb7:
        do {
          lVar19 = lVar21;
          lVar21 = *(long *)(lVar19 + 0x38);
          if (lVar21 == 0) {
            bStack_528 = 0;
            uStack_527 = 0;
            uStack_523 = 0;
            uStack_51f = 0;
            uStack_51b = 0;
            uStack_519 = 0;
            func_0x048b10d0(&bStack_528);
            lVar21 = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,bStack_528));
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar19 + 0x38);
        if (lVar21 != 0) goto LAB_0de8ceb7;
LAB_0de8ce92:
        bStack_528 = 0;
        uStack_527 = 0;
        uStack_523 = 0;
        uStack_51f = 0;
        uStack_51b = 0;
        uStack_519 = 0;
        func_0x048b10d0(&bStack_528);
        lVar21 = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,bStack_528));
        if (lVar21 != 0) goto LAB_0de8ceb7;
      }
      lVar19 = *(long *)(lVar19 + 0x48);
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
LAB_0de8cf25:
      uVar18 = uStack_660;
      puVar7 = puStack_668;
      *(undefined1 *)(puVar20 + 3) = pcStack_6f0._0_1_;
      puVar20[1] = uStack_700;
      puVar20[2] = uStack_6f8;
      *puVar20 = &UNK_0f4a2f30;
      puVar20[5] = puStack_6e0;
      puVar20[6] = puStack_6d8;
      *(undefined1 *)(puVar20 + 7) = puStack_6d0._0_1_;
      puVar20[4] = &UNK_0f4a2e50;
      puVar20[9] = puStack_6c0;
      puVar20[10] = uStack_6b8;
      *(undefined1 *)(puVar20 + 0xb) = (undefined1)uStack_6b0;
      puVar20[8] = &UNK_0f4a2c50;
      puVar20[0xd] = uStack_6a0;
      puVar20[0xe] = uStack_698;
      *(undefined1 *)(puVar20 + 0xf) = uStack_690;
      puVar20[0xc] = &UNK_0f4a2cd0;
      puVar20[0x11] = uStack_680;
      puVar20[0x12] = puStack_678;
      *(undefined1 *)(puVar20 + 0x13) = uStack_670;
      puVar20[0x10] = &UNK_0f4e3df0;
      puStack_668 = (undefined8 *)0x0;
      puVar20[0x14] = puVar7;
      puVar20[0x15] = uStack_660;
      uStack_660 = 0;
      puVar20[0x16] = puStack_658;
      puVar20[0x17] = lStack_650;
      *(undefined4 *)(puVar20 + 0x18) = uStack_648;
      if (lStack_650 != 0) {
        uVar22 = puStack_658[1];
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar22 = uVar22 & uVar18 - 1;
        }
        else if (uVar18 <= uVar22) {
          if ((uVar22 | uVar18) >> 0x20 == 0) {
            uVar22 = (uVar22 & 0xffffffff) % (uVar18 & 0xffffffff);
          }
          else {
            uVar22 = uVar22 % uVar18;
          }
        }
        puVar7[uVar22] = puVar20 + 0x16;
        puStack_658 = (undefined8 *)0x0;
        lStack_650 = 0;
      }
      *(undefined1 *)(puVar20 + 0x19) = uStack_640;
      plVar17 = *(long **)(lVar19 + 8);
      *(undefined8 **)(lVar19 + 8) = puVar20;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x28))();
      }
    }
    else if (iVar14 == 1) {
      if ((DAT_0f740380 == '\0') && (iVar15 = func_0x04108328(&DAT_0f740380), iVar15 != 0)) {
        func_0x0df43660();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740300,0xf53dab8);
        func_0x0410844d(&DAT_0f740380);
      }
      plVar17 = (long *)(*(long *)(lVar31 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar31 + 0x20) - *(long *)(lVar31 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f740300 + 4)) * 8);
      do {
        lVar19 = *plVar17;
        if (lVar19 == -1) goto LAB_0de8cd38;
        plVar17 = (long *)(*(long *)(lVar31 + 0x30) + lVar19 * 0x18);
      } while (*(uint *)(*(long *)(lVar31 + 0x30) + 8 + lVar19 * 0x18) !=
               *(uint *)(_DAT_0f740300 + 4));
      if (plVar17 == *(long **)(lVar31 + 0x38)) {
LAB_0de8cd38:
        puVar16 = &DAT_0f740300;
      }
      else {
        puVar16 = (undefined *)plVar17[2];
      }
      lVar19 = func_0x048b0c90(lVar31 + 0x18,puVar16,uVar10,1);
      if (lVar19 == 0) {
        bStack_528 = 0;
        uStack_527 = 0;
        uStack_523 = 0;
        uStack_51f = 0;
        uStack_51b = 0;
        uStack_519 = 0;
        func_0x048b0d20(&bStack_528);
        lVar19 = CONCAT35((undefined3)uStack_523,CONCAT41(uStack_527,bStack_528));
      }
      lVar19 = *(long *)(lVar19 + 0x58);
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      goto LAB_0de8cf25;
    }
    uStack_2b0 = (undefined4)uStack_218;
    uStack_2ac = uStack_218._4_4_;
    uStack_2a8 = (undefined4)uStack_210;
    uStack_2a4 = uStack_210._4_4_;
    uStack_2a0 = uStack_208;
    uStack_29c = uStack_204;
    uStack_298 = uStack_200;
    uStack_294 = uStack_1fc;
    iStack_290 = iVar14;
    uStack_28c = uVar10;
    cStack_288 = cVar13;
    uStack_2b8 = lVar31;
    func_0x0df44270(&bStack_528,lVar31 + 0x18);
    lVar19 = lStack_350;
    if (uStack_510._4_4_ == 2) {
      piVar23 = *(int **)(*(long *)(CONCAT44(uStack_514,uStack_518) + 0x78) + 0x60);
      iVar14 = *piVar23;
      while (iVar14 != (int)uStack_510) {
        piVar23 = piVar23 + 0x16;
        iVar14 = *piVar23;
      }
      lVar31 = *(long *)(piVar23 + 0xc);
      while (lVar31 != CONCAT17(uStack_519,
                                CONCAT25(uStack_51b,CONCAT41(uStack_51f,uStack_523._3_1_)))) {
        piVar23 = *(int **)(piVar23 + 0xe);
        lVar31 = *(long *)(piVar23 + 0xc);
      }
LAB_0de8d18f:
      *(byte *)((long)piVar23 + 0x12) = *(byte *)((long)piVar23 + 0x12) | 4;
    }
    else {
      if (uStack_510._4_4_ == 1) {
        piVar23 = *(int **)(*(long *)(CONCAT44(uStack_514,uStack_518) + 0x78) + 0x48);
        iVar14 = *piVar23;
        while (iVar14 != (int)uStack_510) {
          piVar23 = piVar23 + 0x1a;
          iVar14 = *piVar23;
        }
        goto LAB_0de8d18f;
      }
      if (uStack_510._4_4_ == 0) {
        puVar27 = (uint *)(CONCAT44(uStack_514,uStack_518) + 0x18);
        *puVar27 = *puVar27 | 0x40000;
      }
    }
    func_0x0df44830(&bStack_528,&uStack_2b8,&UNK_0142629f,0x1a,0x10);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef474e0;
    if (uStack_510 != (long *)0x0) {
      lVar31 = *uStack_510;
      uStack_510 = puVar20;
      (**(code **)(lVar31 + 8))();
      puVar20 = uStack_510;
    }
    uStack_510 = puVar20;
    uStack_280 = uStack_518;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 1;
    uStack_260 = 0;
    uStack_258 = &UNK_049119f0;
    puStack_250 = &SUB_048b06d0;
    puStack_248 = &UNK_0490fc00;
    puStack_240 = &UNK_0df45c70;
    puStack_238 = &UNK_0df45e70;
    uStack_230 = 0;
    uStack_228 = 0;
    plStack_220 = (long *)0x0;
    func_0x048b05a0(CONCAT17(uStack_519,CONCAT25(uStack_51b,CONCAT41(uStack_51f,uStack_523._3_1_))),
                    &uStack_280);
    plVar17 = plStack_220;
    if (plStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_220 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_220 + 0x10))(plStack_220);
        FUN_0412c2d0(plVar17);
      }
    }
    func_0x0df44b50(&bStack_528);
    func_0x048b0bc0(&uStack_510);
    puStack_708 = &UNK_0f4a2f30;
    puStack_688 = &UNK_0f4e3df0;
    puVar20 = puStack_668;
    puVar7 = puStack_658;
    while (puVar7 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar7;
      puStack_668 = puVar20;
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        func_0x0412a280(puVar7[4],puVar7[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar7,0x28);
      puVar20 = puStack_668;
      puVar7 = puVar5;
    }
    puStack_668 = (undefined8 *)0x0;
    if (puVar20 != (undefined8 *)0x0) {
      func_0x0412a280(puVar20,uStack_660 << 3);
    }
    lVar31 = CONCAT44(uStack_344,uStack_348);
    if ((DAT_0f740380 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740380), iVar14 != 0)) {
      func_0x0df43660();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f740300,0xf53dab8);
      func_0x0410844d(&DAT_0f740380);
    }
    lVar21 = lVar31 + 0x18;
    plVar17 = (long *)(*(long *)(lVar31 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar31 + 0x20) - *(long *)(lVar31 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f740300 + 4)) * 8);
    do {
      lVar4 = *plVar17;
      if (lVar4 == -1) goto LAB_0de8d3b0;
      plVar17 = (long *)(*(long *)(lVar31 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar31 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f740300 + 4))
    ;
    if (plVar17 == *(long **)(lVar31 + 0x38)) {
LAB_0de8d3b0:
      puVar16 = &DAT_0f740300;
    }
    else {
      puVar16 = (undefined *)plVar17[2];
    }
    bStack_528 = (byte)puVar16;
    uStack_527 = (undefined4)((ulong)puVar16 >> 8);
    uStack_523._0_3_ = (undefined3)((ulong)puVar16 >> 0x28);
    uStack_523._3_1_ = (undefined1)lVar21;
    uStack_51f = (undefined4)((ulong)lVar21 >> 8);
    uStack_51b = (undefined2)((ulong)lVar21 >> 0x28);
    uStack_519 = (undefined1)((ulong)lVar21 >> 0x38);
    func_0x0ed624b0(&bStack_528,&UNK_0142629f,0x1a);
    puStack_638 = &UNK_0f4a2f30;
    puStack_5b8 = &UNK_0f4e3df0;
    puVar20 = puStack_598;
    puVar7 = (undefined8 *)CONCAT26(uStack_582,CONCAT51(uStack_587,uStack_588));
    while (puVar7 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar7;
      puStack_598 = puVar20;
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        func_0x0412a280(puVar7[4],puVar7[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar7,0x28);
      puVar20 = puStack_598;
      puVar7 = puVar5;
    }
    puStack_598 = (undefined8 *)0x0;
    if (puVar20 != (undefined8 *)0x0) {
      func_0x0412a280(puVar20,CONCAT71(uStack_58f,bStack_590) << 3);
    }
  }
  if ((DAT_0f740438 == '\0') && (iVar14 = func_0x04108328(&DAT_0f740438), iVar14 != 0)) {
    func_0x0df46110();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7403b8,0xf53dab8);
    func_0x0410844d(&DAT_0f740438);
  }
  plVar17 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7403b8 + 4)) * 8);
  do {
    lVar31 = *plVar17;
    if (lVar31 == -1) goto LAB_0de8d4e0;
    plVar17 = (long *)(*(long *)(param_1 + 0x30) + lVar31 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar31 * 0x18) != *(uint *)(_DAT_0f7403b8 + 4))
  ;
  if (plVar17 == *(long **)(param_1 + 0x38)) {
LAB_0de8d4e0:
    puVar16 = &DAT_0f7403b8;
    if (iRam000000000f740418 != -0x2b3da790) goto LAB_0de8d57c;
LAB_0de8d54f:
    lVar31 = *(long *)(puVar16 + 0x68);
    if (lVar31 == 0) goto LAB_0de8d57c;
    bVar32 = (*(byte *)(lVar31 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar31 + 9);
    if (bVar32) {
      puVar16 = *(undefined **)(lVar31 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar31 + 8) >> 1);
    if (bVar32) {
      uVar18 = *(ulong *)(lVar31 + 0x10);
    }
  }
  else {
    puVar16 = (undefined *)plVar17[2];
    if (*(int *)(puVar16 + 0x60) == -0x2b3da790) goto LAB_0de8d54f;
LAB_0de8d57c:
    puVar16 = &UNK_0129e243;
    uVar18 = 0x1b;
  }
  func_0x0df468b0(&bStack_528,param_1,puVar16,uVar18);
  lVar19 = func_0x0cca0b50(lVar19);
  if ((*(int *)(lVar19 + 0x60) == -0x2b3da790) && (lVar19 = *(long *)(lVar19 + 0x68), lVar19 != 0))
  {
    bVar32 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar31 = lVar19 + 9;
    if (bVar32) {
      lVar31 = *(long *)(lVar19 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar32) {
      uVar18 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0df47470(&uStack_280,param_1,lVar31,uVar18);
  }
  else {
    func_0x0df47470(&uStack_280,param_1,&UNK_013f2e7a,0x17);
  }
  if ((char)puStack_250 != '\0') {
    return;
  }
  puStack_6c0 = (undefined *)0x0;
  uStack_700 = (undefined8 *)0xffffffffffffffff;
  uStack_6f8 = (undefined4 *)0x0;
  pcStack_6f0 = (code *)0xff;
  puStack_708 = &UNK_0f4e3df0;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = (undefined *)0x0;
  puStack_6d8 = (undefined8 *)0x0;
  puStack_6d0 = (undefined1 *)0x0;
  puStack_6c8 = (undefined *)0x3f800000;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar25 = _UNK_0147048f;
  puStack_638 = (undefined *)0x1b;
  puStack_630 = (undefined8 *)0x17;
  *puVar20 = _DAT_01470487;
  puVar20[1] = uVar25;
  *(undefined8 *)((long)puVar20 + 0xf) = 0x7974696c69626168;
  *(undefined1 *)((long)puVar20 + 0x17) = 0;
  uStack_620._1_3_ = (undefined3)_DAT_0131c4c6;
  uStack_620 = CONCAT31(uStack_620._1_3_,0x26);
  iStack_61c = (int)(CONCAT44(_UNK_0131c4ca,_DAT_0131c4c6) >> 0x18);
  uStack_618._1_3_ = (undefined3)_UNK_0131c4ce;
  uStack_618 = CONCAT31(uStack_618._1_3_,(char)((uint)_UNK_0131c4ca >> 0x18));
  uStack_614 = (undefined4)(CONCAT44(_UNK_0131c4d2,_UNK_0131c4ce) >> 0x18);
  uStack_610 = 0x65627563;
  uStack_60c = uStack_60c & 0xffffff00;
  bStack_608 = 0x28;
  uStack_607 = (undefined7)_DAT_014a58e8;
  uStack_600 = (undefined1)((ulong)_DAT_014a58e8 >> 0x38);
  uStack_5ff = (undefined7)_UNK_014a58f0;
  uStack_5f8 = (undefined1)((ulong)_UNK_014a58f0 >> 0x38);
  uStack_5f7 = 0x6e6f5f6c;
  uStack_5f3 = 0;
  bStack_5f0 = 0x2a;
  uStack_5df = 0x7463617265;
  uStack_5ef = (undefined7)_DAT_01301518;
  uStack_5e8 = (undefined1)((ulong)_DAT_01301518 >> 0x38);
  uStack_5e7 = (undefined5)_UNK_01301520;
  uStack_5e2 = (undefined2)((ulong)_UNK_01301520 >> 0x28);
  uStack_5e0 = (undefined1)((ulong)_UNK_01301520 >> 0x38);
  uStack_5da = 0;
  bStack_5d8 = 0x26;
  uStack_5d7 = _DAT_0147049f;
  uStack_5d3 = _UNK_014704a3;
  uStack_5cf = _UNK_014704a7;
  uStack_5cb._0_3_ = (undefined3)_UNK_014704ab;
  uStack_5cb = CONCAT13(0x61,(undefined3)uStack_5cb);
  uStack_5c7 = 0x646563;
  puStack_628 = puVar20;
  puVar24 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar24 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar25 = _UNK_014a5912;
  uStack_5c0 = 0x21;
  puStack_5b8 = (undefined *)0x1d;
  *(ulong *)((long)puVar24 + 0xd) = CONCAT53(_UNK_014a590d,_DAT_014a590a);
  *(undefined8 *)((long)puVar24 + 0x15) = uVar25;
  uVar12 = _UNK_014a5909;
  uVar11 = _UNK_014a5905;
  uVar10 = _UNK_014a5901;
  *puVar24 = _DAT_014a58fd;
  puVar24[1] = uVar10;
  puVar24[2] = uVar11;
  puVar24[3] = uVar12;
  *(undefined1 *)((long)puVar24 + 0x1d) = 0;
  puStack_5b0 = puVar24;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar25 = _UNK_0140a15c;
  puStack_5a8 = (undefined4 *)0x21;
  uStack_5a0 = 0x1b;
  *(ulong *)((long)puVar20 + 0xb) = CONCAT35(_UNK_0140a159,CONCAT41(_UNK_0140a155,DAT_0140a154));
  *(undefined8 *)((long)puVar20 + 0x13) = uVar25;
  uVar25 = CONCAT44(_UNK_0140a155,_UNK_0140a151);
  *puVar20 = CONCAT44(_UNK_0140a14d,_DAT_0140a149);
  puVar20[1] = uVar25;
  *(undefined1 *)((long)puVar20 + 0x1b) = 0;
  bStack_590 = 0x2a;
  uStack_58f = (undefined7)_DAT_014db039;
  uStack_588 = (undefined1)((ulong)_DAT_014db039 >> 0x38);
  uStack_587 = (undefined5)_UNK_014db041;
  uStack_582 = 0x7473;
  uStack_580 = 0x65;
  uStack_57f = 0x66666f5f70;
  uStack_57a = 0;
  uStack_578 = CONCAT31((int3)_DAT_011e39f3,0x28);
  uStack_574._1_3_ = (undefined3)_UNK_011e39f7;
  uStack_574 = CONCAT31(uStack_574._1_3_,(char)((uint)_DAT_011e39f3 >> 0x18));
  uStack_570 = (undefined1)((uint)_UNK_011e39f7 >> 0x18);
  uStack_56f = _UNK_011e39fb;
  uStack_56b = _UNK_011e39ff;
  uStack_567 = 0x6e6f5f70;
  uStack_563 = 0;
  puStack_598 = puVar20;
  puStack_550 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_550 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar12 = _UNK_012689ac;
  uVar11 = _UNK_012689a8;
  uVar10 = _UNK_012689a4;
  uStack_560 = 0x21;
  uStack_558 = 0x18;
  *puStack_550 = _DAT_012689a0;
  puStack_550[1] = uVar10;
  puStack_550[2] = uVar11;
  puStack_550[3] = uVar12;
  *(undefined8 *)(puStack_550 + 4) = 0x676e696b6369745f;
  *(undefined1 *)(puStack_550 + 6) = 0;
  puStack_538 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_538 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar12 = _UNK_011e3a14;
  uVar11 = _UNK_011e3a10;
  uVar10 = _UNK_011e3a0c;
  uStack_548 = 0x21;
  uStack_540 = 0x18;
  *puStack_538 = _DAT_011e3a08;
  puStack_538[1] = uVar10;
  puStack_538[2] = uVar11;
  puStack_538[3] = uVar12;
  *(undefined8 *)(puStack_538 + 4) = 0x676e696b6369745f;
  *(undefined1 *)(puStack_538 + 6) = 0;
  func_0x0ed620a0(&puStack_708,&puStack_638,0xb);
  uStack_90 = pcStack_6f0._0_1_;
  iStack_a0 = (int)uStack_700;
  uStack_9c = uStack_700._4_4_;
  uStack_98 = (undefined4)uStack_6f8;
  uStack_94 = uStack_6f8._4_4_;
  puStack_a8 = &UNK_0f4e3df0;
  func_0x04907a10(&lStack_88,&puStack_6e8);
  uStack_60 = puStack_6c0._0_1_;
  uStack_51f = 0xffffffff;
  uStack_51b = 0xffff;
  uStack_519 = 0xff;
  uStack_518 = 0;
  uStack_514 = 0;
  uStack_510._0_1_ = 0xff;
  bStack_528 = 0xb0;
  uStack_527 = 0xf4a2f;
  uStack_523 = 0xff000000;
  puStack_500 = (undefined4 *)0xffffffffffffffff;
  uStack_4f8 = 0;
  uStack_4f0 = CONCAT71(uStack_4f0._1_7_,0xff);
  puStack_508 = &UNK_0f4a2bd0;
  bStack_4e0 = 0xff;
  uStack_4df = 0xffffffff;
  uStack_4db = 0xffffff;
  uStack_4d7 = 0;
  uStack_4d3 = 0;
  uStack_4d2 = 0;
  uStack_4d0 = 0xff;
  puStack_4e8 = (undefined8 *)&UNK_0f4a2e50;
  uStack_4c0 = 0xffffffffffffffff;
  puStack_4b8 = (undefined8 *)0x0;
  bStack_4b0 = 0xff;
  puStack_4c8 = &UNK_0f4a2c50;
  uStack_49f = 0xffff;
  uStack_49d = 0xffffffffff;
  uStack_498 = 0;
  uStack_490 = CONCAT71(uStack_490._1_7_,0xff);
  uStack_4ab = CONCAT13(0xd0,(undefined3)uStack_4ab);
  uStack_4a7 = 0xf4a2c;
  uStack_4a3 = 0xff000000;
  bStack_480 = 0xff;
  uStack_47f = 0xffffffffffffff;
  uStack_478 = 0;
  uStack_477 = 0;
  uStack_470 = 0xff;
  puStack_488 = (undefined8 *)&UNK_0f4a2d50;
  uStack_460 = 0xff;
  uStack_45f = 0xffffffffff;
  uStack_45a = 0xffff;
  uStack_458 = 0;
  uStack_457 = 0;
  uStack_452 = 0;
  uStack_451 = 0;
  bStack_450 = 0xff;
  bStack_468 = 0xd0;
  uStack_467 = 0xf4a2d;
  uStack_430 = CONCAT71(uStack_430._1_7_,uStack_90);
  uStack_43f._3_1_ = (undefined1)uStack_9c;
  uStack_43f = CONCAT13(uStack_43f._3_1_,(int3)((uint)iStack_a0 >> 8));
  uStack_43b = (undefined3)((uint)uStack_9c >> 8);
  uStack_438 = CONCAT44(uStack_94,uStack_98);
  uStack_44b = CONCAT13(0xf0,(undefined3)uStack_44b);
  uStack_447 = 0xf4e3d;
  uStack_443 = iStack_a0 << 0x18;
  func_0x04907a10(&puStack_428,&lStack_88);
  uStack_400 = CONCAT71(uStack_400._1_7_,uStack_60);
  uStack_510 = (long *)CONCAT71(uStack_510._1_7_,0xff);
  puStack_a8 = &UNK_0f4e3df0;
  lVar19 = lStack_88;
  while (puStack_78 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)*puStack_78;
    lStack_88 = lVar19;
    if ((*(byte *)(puStack_78 + 2) & 1) != 0) {
      func_0x0412a280(puStack_78[4],puStack_78[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puStack_78,0x28);
    lVar19 = lStack_88;
    puStack_78 = puVar20;
  }
  lStack_88 = 0;
  if (lVar19 != 0) {
    func_0x0412a280(lVar19,lStack_80 << 3);
  }
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,uStack_548 & 0xfffffffffffffffe);
  }
  if ((uStack_560 & 1) != 0) {
    func_0x0412a280(puStack_550,uStack_560 & 0xfffffffffffffffe);
  }
  if ((uStack_578 & 1) != 0) {
    uStack_56b._3_1_ = (undefined1)((uint)uStack_56b >> 0x18);
    uVar8 = CONCAT41(uStack_567,uStack_56b._3_1_);
    func_0x0412a280(CONCAT26(uStack_562,CONCAT15(uStack_563,uVar8)),
                    CONCAT44(uStack_574,uStack_578) & 0xfffffffffffffffe);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_579,CONCAT16(uStack_57a,CONCAT51(uStack_57f,uStack_580))),
                    CONCAT71(uStack_58f,bStack_590) & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_5a8 & 1) != 0) {
    func_0x0412a280(puStack_598,(ulong)puStack_5a8 & 0xfffffffffffffffe);
  }
  if ((uStack_5c0 & 1) != 0) {
    func_0x0412a280(puStack_5b0,uStack_5c0 & 0xfffffffffffffffe);
  }
  if ((bStack_5d8 & 1) != 0) {
    uStack_5cb._3_1_ = (undefined1)((uint)uStack_5cb >> 0x18);
    uVar8 = CONCAT41(uStack_5c7,uStack_5cb._3_1_);
    func_0x0412a280(CONCAT35(uStack_5c3,uVar8),
                    CONCAT35((undefined3)uStack_5d3,CONCAT41(uStack_5d7,bStack_5d8)) &
                    0xfffffffffffffffe);
  }
  if ((bStack_5f0 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_5d9,CONCAT16(uStack_5da,CONCAT51(uStack_5df,uStack_5e0))),
                    CONCAT71(uStack_5ef,bStack_5f0) & 0xfffffffffffffffe);
  }
  if ((bStack_608 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_5f2,CONCAT15(uStack_5f3,CONCAT41(uStack_5f7,uStack_5f8))),
                    CONCAT71(uStack_607,bStack_608) & 0xfffffffffffffffe);
  }
  if ((uStack_620 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_60c,uStack_610),
                    CONCAT44(iStack_61c,uStack_620) & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_638 & 1) == 0) {
    puStack_708 = &UNK_0f4e3df0;
    puVar16 = puStack_6e8;
    puVar20 = puStack_6d8;
  }
  else {
    func_0x0412a280(puStack_628,(ulong)puStack_638 & 0xfffffffffffffffe);
    puStack_708 = &UNK_0f4e3df0;
    puVar16 = puStack_6e8;
    puVar20 = puStack_6d8;
  }
  while (puVar20 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar20;
    puStack_6e8 = puVar16;
    if ((*(byte *)(puVar20 + 2) & 1) != 0) {
      func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar20,0x28);
    puVar16 = puStack_6e8;
    puVar20 = puVar7;
  }
  puStack_6e8 = (undefined *)0x0;
  if (puVar16 != (undefined *)0x0) {
    func_0x0412a280(puVar16,(long)puStack_6e0 << 3);
  }
  lVar31 = CONCAT44(uStack_27c,uStack_280) + 0x18;
  lVar19 = func_0x0cca0b50(lVar31);
  pbVar6 = *(byte **)(CONCAT44(uStack_27c,uStack_280) + 0x58);
  for (pbVar30 = *(byte **)(CONCAT44(uStack_27c,uStack_280) + 0x50); pbVar30 != pbVar6;
      pbVar30 = pbVar30 + 0x38) {
    bVar2 = *pbVar30;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0de8df0a;
    }
    else if (*(long *)(pbVar30 + 8) == 0x24) {
LAB_0de8df0a:
      if ((bVar2 & 1) == 0) {
        pbVar28 = pbVar30 + 1;
      }
      else {
        pbVar28 = *(byte **)(pbVar30 + 0x10);
      }
      iVar14 = func_0x0eee3000(&DAT_014518a9,pbVar28,0x24);
      if (iVar14 == 0) break;
    }
  }
  if (pbVar30 == pbVar6) {
LAB_0de8df38:
    if ((int)uStack_258 == 0) {
      if ((*(int *)(lVar19 + 0x60) != -0x2b3da790) || (*(long *)(lVar19 + 0x68) == 0))
      goto LAB_0de8dfb4;
      lVar19 = *(long *)(lVar19 + 0x68) + 0x38;
    }
    else {
      puVar16 = (undefined *)func_0x048b0c90(lVar31,lVar19,uStack_258._4_4_,1);
      if (puVar16 == (undefined *)0x0) {
        puStack_638 = (undefined *)0x0;
        puStack_630 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_638);
        puVar16 = puStack_638;
        if (puStack_638 == (undefined *)0x0) goto LAB_0de8dfb4;
      }
      if ((*(int *)(puVar16 + 0x50) == -0x45dcb126) && (*(long *)(puVar16 + 0x58) != 0)) {
        lVar19 = *(long *)(puVar16 + 0x58) + 0x40;
      }
      else {
LAB_0de8dfb4:
        lVar19 = 0;
      }
    }
    puStack_708 = (undefined *)0x0;
    uStack_6f8 = (undefined4 *)&UNK_048b4ab0;
    pcVar29 = (code *)&UNK_048b49f0;
    pcStack_6f0 = (code *)&UNK_048b49f0;
    puStack_6e8 = (undefined *)CONCAT35(puStack_6e8._5_3_,0x1d33bd9c5);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar20 = 0x736b636f6c420c;
    puVar20[1] = 0;
    puVar20[2] = 0;
    *(undefined2 *)(puVar20 + 3) = 0x102;
    puVar20[4] = 0x10014001a0001;
    puVar20[5] = &UNK_01254d89;
    puVar20[6] = &UNK_01254d89;
    puStack_638 = &UNK_048b46e0;
    uStack_620 = 0x48b4ab0;
    iStack_61c = 0;
    uStack_618 = 0x48b49f0;
    uStack_614 = 0;
    uStack_610 = 0xd33bd9c5;
    uStack_60c = CONCAT31(uStack_60c._1_3_,1);
    puStack_708 = (undefined *)0x0;
    puStack_630 = puVar20;
    puVar24 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar24 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar25 = _UNK_014518c1;
    uStack_308 = (undefined *)0x29;
    uStack_300 = 0x24;
    *(undefined8 *)(puVar24 + 4) = _DAT_014518b9;
    *(undefined8 *)(puVar24 + 6) = uVar25;
    uVar12 = _UNK_014518b5;
    uVar11 = _UNK_014518b1;
    uVar10 = _UNK_014518ad;
    *puVar24 = _DAT_014518a9;
    puVar24[1] = uVar10;
    puVar24[2] = uVar11;
    puVar24[3] = uVar12;
    puVar24[8] = 0x5d797472;
    *(undefined1 *)(puVar24 + 9) = 0;
    uStack_2f8 = puVar24;
    lVar19 = FUN_048b5060(lVar19,&uStack_308);
    *(undefined **)(lVar19 + 0x20) = &UNK_048b46e0;
    if ((undefined **)(lVar19 + 0x20) != &puStack_638) {
      puVar20 = (undefined8 *)(lVar19 + 0x28);
      if (*(code **)(lVar19 + 0x40) == (code *)0x0) {
LAB_0de8e158:
        puVar7 = puStack_630;
        puStack_630 = (undefined8 *)0x0;
        *puVar20 = puVar7;
      }
      else {
        (**(code **)(lVar19 + 0x40))(puVar20);
        if ((char)uStack_60c != '\0') {
          if ((char)uStack_60c != '\x02') goto LAB_0de8e158;
          (*(code *)CONCAT44(iStack_61c,uStack_620))(5,&puStack_630,puVar20);
        }
      }
      pcVar29 = (code *)CONCAT44(uStack_614,uStack_618);
      *(uint *)(lVar19 + 0x38) = uStack_620;
      *(int *)(lVar19 + 0x3c) = iStack_61c;
      *(undefined4 *)(lVar19 + 0x40) = uStack_618;
      *(undefined4 *)(lVar19 + 0x44) = uStack_614;
      *(undefined4 *)(lVar19 + 0x48) = uStack_610;
      *(char *)(lVar19 + 0x4c) = (char)uStack_60c;
    }
    if (((ulong)uStack_308 & 1) != 0) {
      func_0x0412a280(uStack_2f8,(ulong)uStack_308 & 0xfffffffffffffffe);
      pcVar29 = (code *)CONCAT44(uStack_614,uStack_618);
    }
    if (pcVar29 != (code *)0x0) {
      (*pcVar29)(&puStack_630);
    }
    if (pcStack_6f0 != (code *)0x0) {
      (*pcStack_6f0)(&puStack_708);
    }
  }
  else {
    iVar14 = *(int *)(pbVar30 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar15 = func_0x04108328(&DAT_0f550768), iVar15 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar14 == _DAT_0f550754) goto LAB_0de8df38;
  }
  puStack_1e8 = puStack_250;
  uStack_1f8 = (undefined4)uStack_260;
  uStack_1f4 = uStack_260._4_4_;
  iStack_1f0 = (int)uStack_258;
  uStack_1ec = uStack_258._4_4_;
  uStack_208 = uStack_270;
  uStack_204 = uStack_26c;
  uStack_200 = (undefined4)uStack_268;
  uStack_1fc = uStack_268._4_4_;
  uStack_218 = CONCAT44(uStack_27c,uStack_280);
  uStack_210 = uStack_278;
  func_0x0df47e20(&puStack_638,&uStack_218,&UNK_011ea907,0xb,1);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4a67c8;
  plVar17 = (long *)CONCAT44(iStack_61c,uStack_620);
  uStack_620 = (uint)puVar20;
  iStack_61c = (int)((ulong)puVar20 >> 0x20);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,puStack_628._0_4_);
  uStack_700 = (undefined8 *)0x0;
  uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
  pcStack_6f0 = (code *)0x1;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = &UNK_0df48c80;
  puStack_6d8 = (undefined8 *)&SUB_048b06d0;
  puStack_6d0 = &UNK_0df48920;
  puStack_6c8 = &UNK_0df48d40;
  puStack_6c0 = &UNK_0df48f30;
  uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
  uStack_6b0 = 0;
  plStack_6a8 = (long *)0x0;
  func_0x048b05a0(puStack_630,&puStack_708);
  plVar17 = plStack_6a8;
  if (plStack_6a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6a8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0df48080(&puStack_638);
  cStack_358 = puStack_1e8._0_1_;
  uStack_368 = uStack_1f8;
  uStack_364 = uStack_1f4;
  iStack_360 = iStack_1f0;
  uStack_35c = uStack_1ec;
  uStack_378 = uStack_208;
  uStack_374 = uStack_204;
  uStack_370 = uStack_200;
  uStack_36c = uStack_1fc;
  uStack_388 = (undefined4)uStack_218;
  uStack_384 = uStack_218._4_4_;
  uStack_380 = (undefined4)uStack_210;
  uStack_37c = uStack_210._4_4_;
  func_0x048b0bc0(&uStack_620);
  func_0x0df47e20(&puStack_638,&uStack_388,&UNK_011ed181,10,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4a6670;
  plVar17 = (long *)CONCAT44(iStack_61c,uStack_620);
  uStack_620 = (uint)puVar20;
  iStack_61c = (int)((ulong)puVar20 >> 0x20);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,puStack_628._0_4_);
  uStack_700 = (undefined8 *)0x0;
  uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
  pcStack_6f0 = (code *)0x1;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = &UNK_0df45490;
  puStack_6d8 = (undefined8 *)&SUB_048b06d0;
  puStack_6d0 = &SUB_0de12090;
  puStack_6c8 = &UNK_0df493a0;
  puStack_6c0 = &UNK_0df49570;
  uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
  uStack_6b0 = 0;
  plStack_6a8 = (long *)0x0;
  func_0x048b05a0(puStack_630,&puStack_708);
  plVar17 = plStack_6a8;
  if (plStack_6a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6a8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0df48080(&puStack_638);
  cVar13 = cStack_358;
  uVar10 = uStack_35c;
  iVar14 = iStack_360;
  lVar19 = CONCAT44(uStack_384,uStack_388);
  uStack_58 = CONCAT44(uStack_37c,uStack_380);
  uStack_50 = CONCAT44(uStack_374,uStack_378);
  uStack_48 = uStack_370;
  uStack_44 = uStack_36c;
  uStack_40 = uStack_368;
  uStack_3c = uStack_364;
  func_0x048b0bc0(&uStack_620);
  uVar18 = uStack_420;
  puStack_d8 = puStack_428;
  uStack_1d0 = CONCAT17(uStack_519,CONCAT25(uStack_51b,CONCAT41(uStack_51f,uStack_523._3_1_)));
  uStack_1c8 = CONCAT44(uStack_514,uStack_518);
  uStack_1c0 = (undefined1)uStack_510;
  puStack_1d8 = &UNK_0f4a2fb0;
  uStack_1b0 = puStack_500;
  uStack_1a8 = uStack_4f8;
  uStack_1a0 = (undefined1)uStack_4f0;
  puStack_1b8 = &UNK_0f4a2bd0;
  uStack_190 = CONCAT35((undefined3)uStack_4db,CONCAT41(uStack_4df,bStack_4e0));
  uStack_188 = CONCAT26(uStack_4d2,CONCAT15(uStack_4d3,CONCAT41(uStack_4d7,uStack_4db._3_1_)));
  uStack_180 = uStack_4d0;
  puStack_198 = &UNK_0f4a2e50;
  uStack_170 = uStack_4c0;
  uStack_168 = puStack_4b8;
  uStack_160 = bStack_4b0;
  puStack_178 = &UNK_0f4a2c50;
  uStack_150 = CONCAT53(uStack_49d,CONCAT21(uStack_49f,uStack_4a3._3_1_));
  uStack_148 = uStack_498;
  uStack_140 = (undefined1)uStack_490;
  puStack_158 = &UNK_0f4a2cd0;
  uStack_120 = uStack_470;
  uStack_130 = CONCAT71(uStack_47f,bStack_480);
  uStack_128 = CONCAT71(uStack_477,uStack_478);
  puStack_138 = &UNK_0f4a2d50;
  uStack_100 = bStack_450;
  uStack_110 = CONCAT26(uStack_45a,CONCAT51(uStack_45f,uStack_460));
  uStack_108 = CONCAT17(uStack_451,CONCAT16(uStack_452,CONCAT51(uStack_457,uStack_458)));
  puStack_118 = &UNK_0f4a2dd0;
  uStack_e0 = (undefined1)uStack_430;
  uStack_f0 = CONCAT35(uStack_43b,CONCAT41(uStack_43f,uStack_443._3_1_));
  uStack_e8 = uStack_438;
  puStack_f8 = &UNK_0f4e3df0;
  puStack_428 = (undefined4 *)0x0;
  uStack_d0 = uStack_420;
  uStack_420 = 0;
  puStack_c8 = puStack_418;
  puStack_c0 = puStack_410;
  uStack_b8 = (undefined4)uStack_408;
  if (puStack_410 != (undefined4 *)0x0) {
    uVar22 = puStack_418[1];
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar22 = uVar22 & uVar18 - 1;
    }
    else if (uVar18 <= uVar22) {
      if ((uVar22 | uVar18) >> 0x20 == 0) {
        uVar22 = (uVar22 & 0xffffffff) % (uVar18 & 0xffffffff);
      }
      else {
        uVar22 = uVar22 % uVar18;
      }
    }
    *(undefined8 ***)(puStack_d8 + uVar22 * 2) = &puStack_c8;
    puStack_418 = (undefined8 *)0x0;
    puStack_410 = (undefined4 *)0x0;
  }
  uStack_b0 = (undefined1)uStack_400;
  if (iVar14 == 4) {
    uVar25 = func_0x0cca0b50(lVar19 + 0x18);
    puVar16 = (undefined *)func_0x048b1040(lVar19 + 0x18,uVar25,uVar10,1);
    if (puVar16 == (undefined *)0x0) {
      puStack_638 = (undefined *)0x0;
      puStack_630 = (undefined8 *)0x0;
      func_0x048b10d0(&puStack_638);
      puVar26 = *(undefined **)(puStack_638 + 0x38);
      puVar16 = puStack_638;
      if (puVar26 == (undefined *)0x0) goto LAB_0de8e8ae;
LAB_0de8e8d3:
      do {
        puVar16 = puVar26;
        puVar26 = *(undefined **)(puVar16 + 0x38);
        if (*(undefined **)(puVar16 + 0x38) == (undefined *)0x0) {
          puStack_638 = (undefined *)0x0;
          puStack_630 = (undefined8 *)0x0;
          func_0x048b10d0(&puStack_638);
          puVar26 = puStack_638;
        }
      } while (puVar26 != (undefined *)0x0);
    }
    else {
      puVar26 = *(undefined **)(puVar16 + 0x38);
      if (*(undefined **)(puVar16 + 0x38) != (undefined *)0x0) goto LAB_0de8e8d3;
LAB_0de8e8ae:
      puStack_638 = (undefined *)0x0;
      puStack_630 = (undefined8 *)0x0;
      func_0x048b10d0(&puStack_638);
      puVar26 = puStack_638;
      if (puStack_638 != (undefined *)0x0) goto LAB_0de8e8d3;
    }
    lVar31 = *(long *)(puVar16 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x130);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x130,0);
    }
LAB_0de8e934:
    uVar18 = uStack_d0;
    puVar24 = puStack_d8;
    *(undefined1 *)(puVar20 + 3) = uStack_1c0;
    puVar20[1] = uStack_1d0;
    puVar20[2] = uStack_1c8;
    *puVar20 = &UNK_0f4a2fb0;
    puVar20[5] = uStack_1b0;
    puVar20[6] = uStack_1a8;
    *(undefined1 *)(puVar20 + 7) = uStack_1a0;
    puVar20[4] = &UNK_0f4a2bd0;
    puVar20[9] = uStack_190;
    puVar20[10] = uStack_188;
    *(undefined1 *)(puVar20 + 0xb) = uStack_180;
    puVar20[8] = &UNK_0f4a2e50;
    puVar20[0xd] = uStack_170;
    puVar20[0xe] = uStack_168;
    *(undefined1 *)(puVar20 + 0xf) = uStack_160;
    puVar20[0xc] = &UNK_0f4a2c50;
    puVar20[0x11] = uStack_150;
    puVar20[0x12] = uStack_148;
    *(undefined1 *)(puVar20 + 0x13) = uStack_140;
    puVar20[0x10] = &UNK_0f4a2cd0;
    *(undefined1 *)(puVar20 + 0x17) = uStack_120;
    puVar20[0x15] = uStack_130;
    puVar20[0x16] = uStack_128;
    puVar20[0x14] = &UNK_0f4a2d50;
    *(undefined1 *)(puVar20 + 0x1b) = uStack_100;
    puVar20[0x19] = uStack_110;
    puVar20[0x1a] = uStack_108;
    puVar20[0x18] = &UNK_0f4a2dd0;
    *(undefined1 *)(puVar20 + 0x1f) = uStack_e0;
    puVar20[0x1d] = uStack_f0;
    puVar20[0x1e] = uStack_e8;
    puVar20[0x1c] = &UNK_0f4e3df0;
    puStack_d8 = (undefined4 *)0x0;
    puVar20[0x20] = puVar24;
    puVar20[0x21] = uStack_d0;
    uStack_d0 = 0;
    puVar20[0x22] = puStack_c8;
    puVar20[0x23] = puStack_c0;
    *(undefined4 *)(puVar20 + 0x24) = uStack_b8;
    if (puStack_c0 != (undefined4 *)0x0) {
      uVar22 = puStack_c8[1];
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar22 = uVar22 & uVar18 - 1;
      }
      else if (uVar18 <= uVar22) {
        if ((uVar22 | uVar18) >> 0x20 == 0) {
          uVar22 = (uVar22 & 0xffffffff) % (uVar18 & 0xffffffff);
        }
        else {
          uVar22 = uVar22 % uVar18;
        }
      }
      *(undefined8 **)(puVar24 + uVar22 * 2) = puVar20 + 0x22;
      puStack_c8 = (undefined8 *)0x0;
      puStack_c0 = (undefined4 *)0x0;
    }
    *(undefined1 *)(puVar20 + 0x25) = uStack_b0;
    plVar17 = *(long **)(lVar31 + 8);
    *(undefined8 **)(lVar31 + 8) = puVar20;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x28))();
    }
  }
  else if (iVar14 == 1) {
    uVar25 = func_0x0cca0b50(lVar19 + 0x18);
    puVar16 = (undefined *)func_0x048b0c90(lVar19 + 0x18,uVar25,uVar10,1);
    if (puVar16 == (undefined *)0x0) {
      puStack_638 = (undefined *)0x0;
      puStack_630 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_638);
      puVar16 = puStack_638;
    }
    lVar31 = *(long *)(puVar16 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x130);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x130,0);
    }
    goto LAB_0de8e934;
  }
  uStack_2b0 = (undefined4)uStack_58;
  uStack_2ac = uStack_58._4_4_;
  uStack_2a8 = (undefined4)uStack_50;
  uStack_2a4 = uStack_50._4_4_;
  uStack_2a0 = uStack_48;
  uStack_29c = uStack_44;
  uStack_298 = uStack_40;
  uStack_294 = uStack_3c;
  iStack_290 = iVar14;
  uStack_28c = uVar10;
  cStack_288 = cVar13;
  uStack_2b8 = lVar19;
  func_0x0df479b0(&puStack_638,lVar19 + 0x18);
  if (iStack_61c == 2) {
    puVar27 = *(uint **)(puStack_628[0xf] + 0x60);
    uVar3 = *puVar27;
    while (uVar3 != uStack_620) {
      puVar27 = puVar27 + 0x16;
      uVar3 = *puVar27;
    }
    puVar20 = *(undefined8 **)(puVar27 + 0xc);
    while (puVar20 != puStack_630) {
      puVar27 = *(uint **)(puVar27 + 0xe);
      puVar20 = *(undefined8 **)(puVar27 + 0xc);
    }
LAB_0de8ec1f:
    *(byte *)((long)puVar27 + 0x12) = *(byte *)((long)puVar27 + 0x12) | 4;
  }
  else {
    if (iStack_61c == 1) {
      puVar27 = *(uint **)(puStack_628[0xf] + 0x48);
      uVar3 = *puVar27;
      while (uVar3 != uStack_620) {
        puVar27 = puVar27 + 0x1a;
        uVar3 = *puVar27;
      }
      goto LAB_0de8ec1f;
    }
    if (iStack_61c == 0) {
      *(uint *)(puStack_628 + 3) = *(uint *)(puStack_628 + 3) | 0x40000;
    }
  }
  func_0x0df47e20(&puStack_638,&uStack_2b8,&UNK_011c497f,0xc,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4a6840;
  plVar17 = (long *)CONCAT44(iStack_61c,uStack_620);
  uStack_620 = (uint)puVar20;
  iStack_61c = (int)((ulong)puVar20 >> 0x20);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,puStack_628._0_4_);
  uStack_700 = (undefined8 *)0x0;
  uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
  pcStack_6f0 = (code *)0x1;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = &UNK_0df4cb60;
  puStack_6d8 = (undefined8 *)&SUB_048b06d0;
  puStack_6d0 = &UNK_0df4b630;
  puStack_6c8 = &UNK_0df4cc20;
  puStack_6c0 = &UNK_0df4cf40;
  uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
  uStack_6b0 = 0;
  plStack_6a8 = (long *)0x0;
  func_0x048b05a0(puStack_630,&puStack_708);
  plVar17 = plStack_6a8;
  if (plStack_6a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6a8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0df48080(&puStack_638);
  cStack_318 = cStack_288;
  uStack_328 = uStack_298;
  uStack_324 = uStack_294;
  iStack_320 = iStack_290;
  uStack_31c = uStack_28c;
  uStack_338 = uStack_2a8;
  uStack_334 = uStack_2a4;
  uStack_330 = uStack_2a0;
  uStack_32c = uStack_29c;
  uStack_348 = (undefined4)uStack_2b8;
  uStack_344 = uStack_2b8._4_4_;
  uStack_340 = uStack_2b0;
  uStack_33c = uStack_2ac;
  func_0x048b0bc0(&uStack_620);
  func_0x0df479b0(&puStack_638,CONCAT44(uStack_344,uStack_348) + 0x18);
  if (iStack_61c == 2) {
    puVar27 = *(uint **)(puStack_628[0xf] + 0x60);
    uVar3 = *puVar27;
    while (uVar3 != uStack_620) {
      puVar27 = puVar27 + 0x16;
      uVar3 = *puVar27;
    }
    puVar20 = *(undefined8 **)(puVar27 + 0xc);
    while (puVar20 != puStack_630) {
      puVar27 = *(uint **)(puVar27 + 0xe);
      puVar20 = *(undefined8 **)(puVar27 + 0xc);
    }
LAB_0de8ee8f:
    *(byte *)((long)puVar27 + 0x12) = *(byte *)((long)puVar27 + 0x12) | 4;
  }
  else {
    if (iStack_61c == 1) {
      puVar27 = *(uint **)(puStack_628[0xf] + 0x48);
      uVar3 = *puVar27;
      while (uVar3 != uStack_620) {
        puVar27 = puVar27 + 0x1a;
        uVar3 = *puVar27;
      }
      goto LAB_0de8ee8f;
    }
    if (iStack_61c == 0) {
      *(uint *)(puStack_628 + 3) = *(uint *)(puStack_628 + 3) | 0x40000;
    }
  }
  func_0x0df47e20(&puStack_638,&uStack_348,&UNK_01416889,6,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4a69c0;
  plVar17 = (long *)CONCAT44(iStack_61c,uStack_620);
  uStack_620 = (uint)puVar20;
  iStack_61c = (int)((ulong)puVar20 >> 0x20);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,puStack_628._0_4_);
  uStack_700 = (undefined8 *)0x0;
  uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
  pcStack_6f0 = (code *)0x1;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = &UNK_0df53ae0;
  puStack_6d8 = (undefined8 *)&SUB_048b06d0;
  puStack_6d0 = &UNK_0df51940;
  puStack_6c8 = &UNK_0df53ba0;
  puStack_6c0 = &UNK_0df53d90;
  uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
  uStack_6b0 = 0;
  plStack_6a8 = (long *)0x0;
  func_0x048b05a0(puStack_630,&puStack_708);
  plVar17 = plStack_6a8;
  if (plStack_6a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6a8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0df48080(&puStack_638);
  uStack_2d8 = cStack_318;
  uStack_2e8 = CONCAT44(uStack_324,uStack_328);
  iStack_2e0 = iStack_320;
  uStack_2dc = uStack_31c;
  uStack_2f8 = (undefined4 *)CONCAT44(uStack_334,uStack_338);
  uStack_2f0 = uStack_330;
  uStack_2ec = uStack_32c;
  uStack_308 = (undefined *)CONCAT44(uStack_344,uStack_348);
  uStack_300 = CONCAT44(uStack_33c,uStack_340);
  func_0x048b0bc0(&uStack_620);
  func_0x0df479b0(&puStack_638,(long)uStack_308 + 0x18);
  if (iStack_61c == 2) {
    puVar27 = *(uint **)(puStack_628[0xf] + 0x60);
    uVar3 = *puVar27;
    while (uVar3 != uStack_620) {
      puVar27 = puVar27 + 0x16;
      uVar3 = *puVar27;
    }
    puVar20 = *(undefined8 **)(puVar27 + 0xc);
    while (puVar20 != puStack_630) {
      puVar27 = *(uint **)(puVar27 + 0xe);
      puVar20 = *(undefined8 **)(puVar27 + 0xc);
    }
  }
  else {
    if (iStack_61c != 1) {
      if (iStack_61c == 0) {
        *(uint *)(puStack_628 + 3) = *(uint *)(puStack_628 + 3) | 0x40000;
      }
      goto LAB_0de8f0f3;
    }
    puVar27 = *(uint **)(puStack_628[0xf] + 0x48);
    uVar3 = *puVar27;
    while (uVar3 != uStack_620) {
      puVar27 = puVar27 + 0x1a;
      uVar3 = *puVar27;
    }
  }
  *(byte *)((long)puVar27 + 0x12) = *(byte *)((long)puVar27 + 0x12) | 4;
LAB_0de8f0f3:
  func_0x0df47e20(&puStack_638,&uStack_308,&UNK_0142629f,0x1a,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0ef474e0;
  plVar17 = (long *)CONCAT44(iStack_61c,uStack_620);
  uStack_620 = (uint)puVar20;
  iStack_61c = (int)((ulong)puVar20 >> 0x20);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  puStack_708 = (undefined *)CONCAT44(puStack_708._4_4_,puStack_628._0_4_);
  uStack_700 = (undefined8 *)0x0;
  uStack_6f8 = (undefined4 *)((ulong)uStack_6f8 & 0xffffffff00000000);
  pcStack_6f0 = (code *)0x1;
  puStack_6e8 = (undefined *)0x0;
  puStack_6e0 = &UNK_049119f0;
  puStack_6d8 = (undefined8 *)&SUB_048b06d0;
  puStack_6d0 = &UNK_0490fc00;
  puStack_6c8 = &UNK_0df54210;
  puStack_6c0 = &UNK_0df54420;
  uStack_6b8 = uStack_6b8 & 0xffffffff00000000;
  uStack_6b0 = 0;
  plStack_6a8 = (long *)0x0;
  func_0x048b05a0(puStack_630,&puStack_708);
  plVar17 = plStack_6a8;
  if (plStack_6a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6a8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0df48080(&puStack_638);
  func_0x048b0bc0(&uStack_620);
  puStack_1d8 = &UNK_0f4a2fb0;
  puStack_f8 = &UNK_0f4e3df0;
  puVar24 = puStack_d8;
  puVar20 = puStack_c8;
  while (puVar20 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar20;
    puStack_d8 = puVar24;
    if ((*(byte *)(puVar20 + 2) & 1) != 0) {
      func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar20,0x28);
    puVar24 = puStack_d8;
    puVar20 = puVar7;
  }
  puStack_d8 = (undefined4 *)0x0;
  if (puVar24 != (undefined4 *)0x0) {
    func_0x0412a280(puVar24,uStack_d0 << 3);
  }
  puVar20 = (undefined8 *)(CONCAT44(uStack_27c,uStack_280) + 0x18);
  puStack_638 = (undefined *)func_0x0cca0b50(puVar20);
  puStack_630 = puVar20;
  func_0x0ed624b0(&puStack_638,&UNK_01416889,6);
  puVar20 = (undefined8 *)(CONCAT44(uStack_27c,uStack_280) + 0x18);
  puStack_638 = (undefined *)func_0x0cca0b50(puVar20);
  puStack_630 = puVar20;
  func_0x0ed624b0(&puStack_638,&UNK_0142629f,0x1a);
  bStack_528 = 0xb0;
  uStack_527 = 0xf4a2f;
  uStack_523 = uStack_523 & 0xff000000;
  uStack_44b = CONCAT13(0xf0,(undefined3)uStack_44b);
  uStack_447 = 0xf4e3d;
  uStack_443 = uStack_443 & 0xff000000;
  puVar24 = puStack_428;
  puVar20 = puStack_418;
  while (puVar20 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar20;
    puStack_428 = puVar24;
    if ((*(byte *)(puVar20 + 2) & 1) != 0) {
      func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar20,0x28);
    puVar24 = puStack_428;
    puVar20 = puVar7;
  }
  puStack_428 = (undefined4 *)0x0;
  if (puVar24 != (undefined4 *)0x0) {
    func_0x0412a280(puVar24,uStack_420 << 3);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11cabba  minecraft:item_visual
 * 0x11e39f3  minecraft:on_step_on
 * 0x11e3a08  minecraft:random_ticking
 * 0x11ff912  minecraft:redstone_consumer
 * 0x11ff91d  edstone_consumer
 * 0x1268968  minecraft:block_entity
 * 0x12689a0  minecraft:queued_ticking
 * 0x1301518  minecraft:on_interact
 * 0x131c4c6  minecraft:unit_cube
 * 0x131c633  minecraft:embedded_visual
 * 0x131c63c  :embedded_visual
 * 0x13d6d98  minecraft:flower_pottable
 * 0x13d6da1  :flower_pottable
 * 0x13f085d  minecraft:support
 * 0x140a149  minecraft:on_player_placing
 * 0x140a154  n_player_placing
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x1470487  minecraft:breathability
 * 0x147049f  minecraft:on_placed
 * 0x14a58e8  minecraft:on_fall_on
 * 0x14a58fd  minecraft:on_player_destroyed
 * 0x14a590a  player_destroyed
 * 0x14db039  minecraft:on_step_off
 */
