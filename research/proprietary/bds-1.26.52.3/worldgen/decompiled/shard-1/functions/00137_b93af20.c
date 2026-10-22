/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba3af20 (ELF vaddr 0xb93af20)
 * Label: string:worldGeneratorType
 * Body:  [[0ba3af20, 0ba41202] [0ba41210, 0ba41b7d] [0ba41b80, 0ba41d11] [0ba41d20, 0ba422ce] [0ba422d0, 0ba42665] [0ba42670, 0ba427d9] [0ba427e0, 0ba42a25] [0ba42a30, 0ba4384b] [0ba43850, 0ba43a95] [0ba43aa0, 0ba44fa9] [0ba44fb0, 0ba451f5] [0ba45200, 0ba45dbe] [0ba45dc0, 0ba46005] [0ba46010, 0ba46bd7] [0ba46be0, 0ba46e25] [0ba46e30, 0ba47a02] [0ba47a10, 0ba47c55] [0ba47c60, 0ba48cdb] [0ba48ce0, 0ba49912]]
 * Ghidra: FUN_0ba3af20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ba3af20(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [4];
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  uint uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  code *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_4e8 [4];
  undefined4 uStack_4e4;
  undefined1 uStack_4e0;
  undefined2 uStack_4df;
  undefined1 uStack_4dd;
  undefined4 uStack_4dc;
  undefined8 *puStack_4d8;
  uint uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  uint uStack_4c4;
  undefined1 *puStack_4c0;
  undefined1 auStack_4b8 [16];
  long *plStack_4a8;
  code *pcStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined1 auStack_430 [24];
  code *pcStack_418;
  undefined1 auStack_3e8 [24];
  code *pcStack_3d0;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined1 uStack_332;
  undefined1 uStack_331;
  undefined1 uStack_330;
  undefined2 uStack_32f;
  undefined1 uStack_32d;
  uint uStack_32c;
  undefined1 uStack_328;
  undefined2 uStack_327;
  undefined1 uStack_325;
  uint uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 uStack_2b8;
  undefined2 uStack_2b7;
  undefined1 uStack_2b5;
  uint uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  uint uStack_8c;
  byte bStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  auStack_4e8 = (undefined1  [4])0x49736914;
  uStack_4e4 = 0x7265746e;
  uStack_4e0 = 0x6e;
  uStack_4df = 0x6c61;
  uStack_4dd = 0;
  uStack_40 = param_1;
  lStack_38 = param_2;
  uVar13 = func_0x09997d10(param_3,auStack_4e8,1);
  uStack_64 = _DAT_0f57e304;
  uStack_68 = _DAT_0f57e300;
  if ((_DAT_0f57e308 & 1) == 0) {
    uStack_50 = _DAT_0f57e318;
    uStack_60 = _DAT_0f57e308;
    uStack_5c = uRam000000000f57e30c;
    uStack_58 = _DAT_0f57e310;
    uStack_54 = uRam000000000f57e314;
  }
  else {
    FUN_0412e5e0(&uStack_60,_DAT_0f57e318,CONCAT44(uRam000000000f57e314,_DAT_0f57e310));
  }
  func_0x0730fa70(uVar13,&uStack_68,0);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT44(uStack_5c,uStack_60) & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4e8 & 1) != 0) {
    func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
  }
  func_0x0b912cd0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b7ca520(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b90bcc0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b90ca90(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b90d1a0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b90ad40(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b910a20(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0b911370(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06b1bae0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b19f10(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06b1adf0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068d1a90(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068d2720(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068d5f00(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068d6dc0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068dc960(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068dd4b0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068e0d60(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068e1b70(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068dbd30(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b07400(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06b08190(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06b0ab60(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068caf60(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x064f3440(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0664ae30(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x068c0410(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06648570(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06641eb0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06649cf0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06650f10(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0664d250(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0664c900(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x066502f0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06b4f4c0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b502f0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06af22e0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0679d390(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06afe280(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06afcec0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06797600(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06796970(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06795bc0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068f1d90(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068ec430(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x068eee60(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068f03c0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068f10a0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068ebd40(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xa8);
  if (puVar15 < *(undefined8 **)(param_3 + 0xb0)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    plStack_4a8 = (long *)0x0;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puVar15 + 0xe;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f1a0(param_3 + 0xa0,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xa8) = puVar15;
  func_0x0652e2f0(auStack_4e8);
  func_0x06795460(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xa8);
  if (puVar15 < *(undefined8 **)(param_3 + 0xb0)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    plStack_4a8 = (long *)0x0;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puVar15 + 0xe;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f1a0(param_3 + 0xa0,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xa8) = puVar15;
  func_0x0652e2f0(auStack_4e8);
  func_0x06913030(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xa8);
  if (puVar15 < *(undefined8 **)(param_3 + 0xb0)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    plStack_4a8 = (long *)0x0;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puVar15 + 0xe;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f1a0(param_3 + 0xa0,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xa8) = puVar15;
  func_0x0652e2f0(auStack_4e8);
  func_0x068e9cf0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xa8);
  if (puVar15 < *(undefined8 **)(param_3 + 0xb0)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    plStack_4a8 = (long *)0x0;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puVar15 + 0xe;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f1a0(param_3 + 0xa0,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xa8) = puVar15;
  func_0x0652e2f0(auStack_4e8);
  func_0x06914870(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06913790(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06925da0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06922f10(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x069295e0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06928630(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06785140(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06784710(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06786e20(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0692d670(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0692be90(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0692aed0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06935c80(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x069353d0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06780300(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0677f610(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0677da80(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0677e9c0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06756f90(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x067579a0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0675a920(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0675d560(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x067601e0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06763140(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06766310(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0676a6a0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06772ad0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06775a50(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0676ded0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0676eae0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0677af70(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0677a780(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06922290(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0691ae30(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x069174b0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x069165f0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0678adb0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06787d20(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06933240(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x069317e0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06939050(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x069379b0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06936c10(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x067944c0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x069121f0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x064ead90(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b053e0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b04780(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x068e82d0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b512e0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x064e7470(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x068eb310(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0b7486c0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b747900(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b745fa0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b745350(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b746c40(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b76ce60(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b7744f0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b770150(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b779870(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0b775210(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b2e030(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b2d150(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x06b1edd0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06b29140(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06b29db0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06b2aa70(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x06b2b6e0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0x90);
  if (puVar15 < *(undefined8 **)(param_3 + 0x98)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    puVar15[0xf] = lStack_470;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    lStack_470 = 0;
    puVar15[0x10] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0x10] = uStack_468;
    puVar15[0x11] = uStack_460;
    puVar15[0x12] = pcStack_458;
    uStack_468 = 0;
    uStack_460 = 0;
    pcStack_458 = (code *)0x0;
    puVar15 = puVar15 + 0x13;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85ec80(param_3 + 0x88,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0x90) = puVar15;
  func_0x0652e400(auStack_4e8);
  func_0x0b70cdf0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0ba0d8e0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b790d20(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b91c350(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b916340(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b915660(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xc0);
  if (puVar15 < *(undefined8 **)(param_3 + 200)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    *(undefined1 *)(puVar15 + 8) = plStack_4a8._0_1_;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    puVar15[0xb] = uStack_490;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    uStack_490 = (long *)0x0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    puVar15[0xe] = plStack_478;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    puVar15 = puVar15 + 0xf;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f490(param_3 + 0xb8,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xc0) = puVar15;
  func_0x0652e0f0(auStack_4e8);
  func_0x0b9175d0(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b923b60(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b91fe40(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b921070(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x0b91b3b0(auStack_4e8);
  puVar15 = *(undefined8 **)(param_3 + 0xa8);
  uStack_48 = param_5;
  if (puVar15 < *(undefined8 **)(param_3 + 0xb0)) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = CONCAT44(uStack_4e4,auStack_4e8);
    puVar15[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puVar15[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puVar15[5] = puStack_4c0;
    puVar15[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puVar15[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puVar15[6] = auStack_4b8._0_8_;
    puVar15[7] = auStack_4b8._8_8_;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[8] = plStack_4a8;
    puVar15[9] = pcStack_4a0;
    puVar15[10] = pcStack_498;
    plStack_4a8 = (long *)0x0;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xb] = uStack_490;
    puVar15[0xc] = uStack_488;
    puVar15[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puVar15 + 0xe;
  }
  else {
    puVar15 = (undefined8 *)func_0x0d85f1a0(param_3 + 0xa0,auStack_4e8);
  }
  *(undefined8 **)(param_3 + 0xa8) = puVar15;
  func_0x0652e2f0(auStack_4e8);
  auStack_4e8 = (undefined1  [4])0x74784512;
  uStack_4e4 = 0x69736e65;
  uStack_4e0 = 0x6f;
  uStack_4df = 0x6e;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_260);
  func_0x048b1dc0(auStack_250);
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  if ((uStack_278 & 1) == 0) {
    puStack_268 = puStack_4d8;
    uStack_278 = CONCAT44(uStack_4e4,auStack_4e8);
    uStack_270 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
  }
  else {
    func_0x04885120(&uStack_278,auStack_4e8 + 1,9);
    if (((uint)auStack_4e8 & 1) != 0) {
      func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
    }
  }
  uStack_338 = 0x6d616e08;
  uStack_334 = 0x65;
  uStack_333 = 0;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auStack_4b8 = func_0x0d8543b0();
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f6f40;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f6f90;
  if (uStack_490 == (long *)0x0) {
LAB_0ba4092c:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba4093e;
LAB_0ba40978:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba4092c;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba40978;
LAB_0ba4093e:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  uStack_8c = param_4;
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x73656416;
  uStack_334 = 99;
  uStack_333 = 0x72;
  uStack_332 = 0x69;
  uStack_331 = 0x70;
  uStack_330 = 0x74;
  uStack_32f = 0x6f69;
  uStack_32d = 0x6e;
  uStack_32c = uStack_32c & 0xffffff00;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0d8543b0();
  auStack_4b8 = auVar23;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f6ff0;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f7040;
  if (uStack_490 == (long *)0x0) {
LAB_0ba40b1c:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba40b2e;
LAB_0ba40b68:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba40b1c;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba40b68;
LAB_0ba40b2e:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x746f6e0a;
  uStack_334 = 0x65;
  uStack_333 = 0x73;
  uStack_332 = 0;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0d8543b0();
  auStack_4b8 = auVar23;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f70a0;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f70f0;
  if (uStack_490 == (long *)0x0) {
LAB_0ba40cf5:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba40d07;
LAB_0ba40d41:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba40cf5;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba40d41;
LAB_0ba40d07:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = CONCAT31((int3)_DAT_014bd577,0x24);
  uStack_334 = (undefined1)((uint)_DAT_014bd577 >> 0x18);
  uStack_333 = (undefined1)_UNK_014bd57b;
  uStack_332 = (undefined1)((uint)_UNK_014bd57b >> 8);
  uStack_331 = (undefined1)((uint)_UNK_014bd57b >> 0x10);
  uStack_330 = (undefined1)((uint)_UNK_014bd57b >> 0x18);
  uStack_32f = (undefined2)_UNK_014bd57f;
  uStack_32d = (undefined1)((uint)_UNK_014bd57f >> 0x10);
  uStack_32c._1_3_ = (undefined3)_UNK_014bd583;
  uStack_32c = CONCAT31(uStack_32c._1_3_,(char)((uint)_UNK_014bd57f >> 0x18));
  uStack_328 = (undefined1)((uint)_UNK_014bd583 >> 0x18);
  uStack_327 = 0x6449;
  uStack_325 = 0;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0d8543b0();
  auStack_4b8 = auVar23;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f7150;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f71a0;
  if (uStack_490 == (long *)0x0) {
LAB_0ba40eda:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba40eec;
LAB_0ba40f26:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba40eda;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba40f26;
LAB_0ba40eec:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 + -0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&uStack_2a8);
  auStack_260 = func_0x0ba70060();
  lVar21 = lStack_290;
  lVar20 = lStack_288;
  if (lStack_290 != 0) {
    for (; lVar21 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_288 = lVar21;
    func_0x0412a280(lStack_290,lStack_280 - lStack_290);
  }
  uStack_188 = uStack_298;
  uStack_190 = (long *)uStack_2a0;
  uStack_198 = (long *)uStack_2a8;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_170 = puStack_268;
  uStack_180 = uStack_278;
  uStack_178 = uStack_270;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  auStack_158._0_8_ = auStack_250._0_8_;
  auStack_158._8_8_ = auStack_250._8_8_;
  uStack_148 = uStack_240;
  uStack_140 = uStack_238;
  uStack_138 = uStack_230;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_130 = uStack_228;
  uStack_128 = uStack_220;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_120 = uStack_218;
  uStack_118 = puStack_210;
  uStack_110 = puStack_208;
  uStack_218 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_108 = uStack_200;
  lStack_100 = uStack_1f8;
  uStack_f8 = uStack_1f0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_f0 = uStack_1e8;
  uStack_e8 = uStack_1e0;
  uStack_e0 = uStack_1d8;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_d8 = uStack_1d0;
  uStack_d0 = uStack_1c8;
  uStack_c8 = uStack_1c0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_c0 = (undefined4)uStack_1b8;
  uStack_bc = uStack_1b8._4_4_;
  uStack_b8 = (undefined4)uStack_1b0;
  uStack_b4 = uStack_1b0._4_4_;
  uStack_b0 = uStack_1a8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_168 = auStack_260;
  func_0x0651ffe0();
  uVar8 = uStack_2a8;
  uVar18 = uStack_2a0;
  if (uStack_2a8 != 0) {
    for (; uVar8 != uVar18; uVar18 = uVar18 - 0x30) {
      if ((*(byte *)(uVar18 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar18 - 0x10),
                        *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_2a0 = uVar8;
    func_0x0412a280(uStack_2a8,uStack_298 - uStack_2a8);
  }
  func_0x0d84fd50(param_3,&uStack_198);
  func_0x0651ffe0(&uStack_198);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar13 = _UNK_013d437a;
  auStack_4e8 = (undefined1  [4])0x21;
  uStack_4e4 = 0;
  uStack_4e0 = 0x1b;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  *(ulong *)((long)puVar15 + 0xb) = CONCAT35(_UNK_013d4377,_DAT_013d4372);
  *(undefined8 *)((long)puVar15 + 0x13) = uVar13;
  uVar13 = CONCAT53(_DAT_013d4372,_UNK_013d436f);
  *puVar15 = _DAT_013d4367;
  puVar15[1] = uVar13;
  *(undefined1 *)((long)puVar15 + 0x1b) = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  puStack_268 = (undefined8 *)0x0;
  puStack_4d8 = puVar15;
  func_0x048b1dc0(auStack_260);
  func_0x048b1dc0(auStack_250);
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_200 = 0;
  if ((uStack_278 & 1) == 0) {
    if (((uint)auStack_4e8 & 1) == 0) {
      puStack_268 = puStack_4d8;
      uStack_278 = CONCAT44(uStack_4e4,auStack_4e8);
      uStack_270 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    }
    else {
      FUN_04885070(&uStack_278,puStack_4d8,
                   CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0))));
    }
  }
  else {
    bVar22 = ((uint)auStack_4e8 & 1) != 0;
    puVar15 = (undefined8 *)(auStack_4e8 + 1);
    if (bVar22) {
      puVar15 = puStack_4d8;
    }
    uVar18 = (ulong)(auStack_4e8[0] >> 1);
    if (bVar22) {
      uVar18 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    }
    func_0x04885120(&uStack_278,puVar15,uVar18);
  }
  auVar23 = func_0x0baa4260();
  auStack_260 = auVar23;
  if (((uint)auStack_4e8 & 1) != 0) {
    func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
  }
  uStack_338 = 0x73656416;
  uStack_334 = 99;
  uStack_333 = 0x72;
  uStack_332 = 0x69;
  uStack_331 = 0x70;
  uStack_330 = 0x74;
  uStack_32f = 0x6f69;
  uStack_32d = 0x6e;
  uStack_32c = uStack_32c & 0xffffff00;
  func_0x066baa80();
  func_0x065af670(auStack_4e8);
  lVar20 = (long)&uStack_338 + 1;
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar21 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar21 = lVar20;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar21,uVar18);
  }
  auVar23 = func_0x066d15f0();
  auStack_4b8 = auVar23;
  func_0x066baa80();
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  pcVar3 = pcStack_4a0;
  *(long *)((long)pcVar16 + 8) = 0;
  *(long *)((long)pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f2f94b0;
  plStack_4a8 = (long *)((long)pcVar16 + 0x20);
  *(long *)((long)pcVar16 + 0x50) = 0;
  *(long *)((long)pcVar16 + 0x80) = 0;
  *(undefined1 *)((long)pcVar16 + 0x90) = 1;
  *(long *)((long)pcVar16 + 0x98) = 0;
  *(long *)((long)pcVar16 + 0xa0) = 0;
  *(long *)((long)pcVar16 + 0xa8) = 0;
  *(undefined **)((long)pcVar16 + 0x20) = &UNK_0f2f9500;
  if (pcStack_4a0 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_4a0 + 8);
    lVar21 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_4a0;
      pcStack_4a0 = pcVar16;
      (**(code **)(lVar21 + 0x10))(pcVar3);
      func_0x0412c2d0(pcVar3);
      pcVar16 = pcStack_4a0;
    }
  }
  pcStack_4a0 = pcVar16;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f9558;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f95a8;
  if (uStack_490 == (long *)0x0) {
LAB_0ba415a7:
    uStack_490 = plVar14;
    if (uStack_238 < uStack_230) goto LAB_0ba415b9;
LAB_0ba415f3:
    uStack_238 = func_0x065b01f0(&uStack_240,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0ba415a7;
    lVar21 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar21 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_230 <= uStack_238) goto LAB_0ba415f3;
LAB_0ba415b9:
    uVar18 = uStack_238;
    func_0x065b0410(uStack_238,auStack_4e8);
    uStack_238 = uVar18 + 0x1b0;
  }
  lVar21 = uStack_238 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar21);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x746f6e0a;
  uStack_334 = 0x65;
  uStack_333 = 0x73;
  uStack_332 = 0;
  func_0x066baa80();
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar21 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar21 = lVar20;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar21,uVar18);
  }
  auVar23 = func_0x066d15f0();
  auStack_4b8 = auVar23;
  func_0x066baa80();
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  pcVar3 = pcStack_4a0;
  *(long *)((long)pcVar16 + 8) = 0;
  *(long *)((long)pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f2f9608;
  plStack_4a8 = (long *)((long)pcVar16 + 0x20);
  *(long *)((long)pcVar16 + 0x50) = 0;
  *(long *)((long)pcVar16 + 0x80) = 0;
  *(undefined1 *)((long)pcVar16 + 0x90) = 1;
  *(long *)((long)pcVar16 + 0x98) = 0;
  *(long *)((long)pcVar16 + 0xa0) = 0;
  *(long *)((long)pcVar16 + 0xa8) = 0;
  *(undefined **)((long)pcVar16 + 0x20) = &UNK_0f2f9658;
  if (pcStack_4a0 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_4a0 + 8);
    lVar21 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      lVar21 = *(long *)pcStack_4a0;
      pcStack_4a0 = pcVar16;
      (**(code **)(lVar21 + 0x10))(pcVar3);
      func_0x0412c2d0(pcVar3);
      pcVar16 = pcStack_4a0;
    }
  }
  pcStack_4a0 = pcVar16;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2f96b0;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2f9700;
  if (uStack_490 == (long *)0x0) {
LAB_0ba41822:
    uStack_490 = plVar14;
    if (uStack_238 < uStack_230) goto LAB_0ba41834;
LAB_0ba4186e:
    uStack_238 = func_0x065b01f0(&uStack_240,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 != 0) goto LAB_0ba41822;
    lVar21 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar21 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_230 <= uStack_238) goto LAB_0ba4186e;
LAB_0ba41834:
    uVar18 = uStack_238;
    func_0x065b0410(uStack_238,auStack_4e8);
    uStack_238 = uVar18 + 0x1b0;
  }
  lVar21 = uStack_238 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar21);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x6f6f7416;
  uStack_334 = 0x6c;
  uStack_333 = 0x47;
  uStack_332 = 0x72;
  uStack_331 = 0x6f;
  uStack_330 = 0x75;
  uStack_32f = 0x4970;
  uStack_32d = 100;
  uStack_32c = uStack_32c & 0xffffff00;
  func_0x066baa80();
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar21 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar21 = lVar20;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar21,uVar18);
  }
  auVar23 = func_0x066d15f0();
  auStack_4b8 = auVar23;
  func_0x066baa80();
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  pcVar3 = pcStack_4a0;
  *(undefined8 *)((long)pcVar16 + 8) = 0;
  *(undefined8 *)((long)pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f2f9760;
  plStack_4a8 = (long *)((long)pcVar16 + 0x20);
  *(undefined8 *)((long)pcVar16 + 0x50) = 0;
  *(undefined8 *)((long)pcVar16 + 0x80) = 0;
  *(undefined1 *)((long)pcVar16 + 0x90) = 1;
  *(undefined8 *)((long)pcVar16 + 0x98) = 0;
  *(undefined8 *)((long)pcVar16 + 0xa0) = 0;
  *(undefined8 *)((long)pcVar16 + 0xa8) = 0;
  *(undefined **)((long)pcVar16 + 0x20) = &UNK_0f2f97b0;
  if (pcStack_4a0 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_4a0 + 8);
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *(long *)pcStack_4a0;
      pcStack_4a0 = pcVar16;
      (**(code **)(lVar20 + 0x10))(pcVar3);
      func_0x0412c2d0(pcVar3);
      pcVar16 = pcStack_4a0;
    }
  }
  pcStack_4a0 = pcVar16;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar14 = uStack_490;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f2f9808;
  pcStack_498 = (code *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f2f9858;
  if (uStack_490 == (long *)0x0) {
LAB_0ba41aad:
    uStack_490 = puVar15;
    if (uStack_238 < uStack_230) goto LAB_0ba41abf;
LAB_0ba41af9:
    uStack_238 = func_0x065b01f0(&uStack_240,auStack_4e8);
  }
  else {
    LOCK();
    plVar2 = uStack_490 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba41aad;
    lVar20 = *uStack_490;
    uStack_490 = puVar15;
    (**(code **)(lVar20 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_230 <= uStack_238) goto LAB_0ba41af9;
LAB_0ba41abf:
    uVar18 = uStack_238;
    func_0x065b0410(uStack_238,auStack_4e8);
    uStack_238 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_238 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&uStack_2a8);
  lVar21 = lStack_290;
  lVar20 = lStack_288;
  if (lStack_290 != 0) {
    for (; lVar21 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_288 = lVar21;
    func_0x0412a280(lStack_290,lStack_280 - lStack_290);
  }
  uStack_188 = uStack_298;
  uStack_190 = (long *)uStack_2a0;
  uStack_198 = (long *)uStack_2a8;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_170 = puStack_268;
  uStack_180 = uStack_278;
  uStack_178 = uStack_270;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  auStack_158._0_8_ = auStack_250._0_8_;
  auStack_158._8_8_ = auStack_250._8_8_;
  uStack_148 = uStack_240;
  uStack_140 = uStack_238;
  uStack_138 = uStack_230;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_130 = uStack_228;
  uStack_128 = uStack_220;
  uStack_120 = uStack_218;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_118 = puStack_210;
  uStack_110 = puStack_208;
  uStack_108 = uStack_200;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_200 = 0;
  auStack_168 = auStack_260;
  func_0x0652e400();
  uVar8 = uStack_2a8;
  uVar18 = uStack_2a0;
  if (uStack_2a8 != 0) {
    for (; uVar8 != uVar18; uVar18 = uVar18 - 0x30) {
      if ((*(byte *)(uVar18 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar18 - 0x10),
                        *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_2a0 = uVar8;
    func_0x0412a280(uStack_2a8,uStack_298 - uStack_2a8);
  }
  puVar17 = *(ulong **)(param_3 + 0x90);
  if (puVar17 < *(ulong **)(param_3 + 0x98)) {
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = (ulong)uStack_198;
    puVar17[1] = (ulong)uStack_190;
    puVar17[2] = uStack_188;
    uStack_198 = (long *)0x0;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    puVar17[5] = (ulong)puStack_170;
    puVar17[3] = uStack_180;
    puVar17[4] = uStack_178;
    uStack_180 = 0;
    uStack_178 = 0;
    puStack_170 = (undefined8 *)0x0;
    puVar17[8] = auStack_158._0_8_;
    puVar17[9] = auStack_158._8_8_;
    *(undefined1 (*) [16])(puVar17 + 6) = auStack_168;
    puVar17[10] = 0;
    puVar17[0xb] = 0;
    puVar17[0xc] = 0;
    puVar17[10] = uStack_148;
    puVar17[0xb] = uStack_140;
    puVar17[0xc] = uStack_138;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0;
    puVar17[0xf] = 0;
    puVar17[0xd] = uStack_130;
    puVar17[0xe] = uStack_128;
    puVar17[0xf] = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    puVar17[0x10] = 0;
    puVar17[0x11] = 0;
    puVar17[0x12] = 0;
    *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_118;
    *(undefined4 *)((long)puVar17 + 0x84) = uStack_118._4_4_;
    *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_110;
    *(undefined4 *)((long)puVar17 + 0x8c) = uStack_110._4_4_;
    puVar17[0x12] = uStack_108;
    uStack_118 = (undefined8 *)0x0;
    uStack_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    puVar17 = puVar17 + 0x13;
  }
  else {
    puVar17 = (ulong *)func_0x0d85ec80(param_3 + 0x88,&uStack_198);
  }
  *(ulong **)(param_3 + 0x90) = puVar17;
  func_0x0652e400(&uStack_198);
  func_0x06adc890(auStack_4e8);
  func_0x0d84fd50(param_3,auStack_4e8);
  func_0x0651ffe0(auStack_4e8);
  func_0x06ae5a80(param_3);
  auStack_4e8 = (undefined1  [4])0x6d69531e;
  uStack_4e4 = 0x74616c75;
  uStack_4e0 = 0x69;
  uStack_4df = 0x6e6f;
  uStack_4dd = 0x53;
  uStack_4dc = 0x65746174;
  puStack_4d8 = (undefined8 *)((ulong)puStack_4d8 & 0xffffffffffffff00);
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_260);
  func_0x048b1dc0(auStack_250);
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  if ((uStack_278 & 1) == 0) {
    puStack_268 = puStack_4d8;
    uStack_278 = CONCAT44(uStack_4e4,auStack_4e8);
    uStack_270 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
  }
  else {
    func_0x04885120(&uStack_278,auStack_4e8 + 1,0xf);
    if (((uint)auStack_4e8 & 1) != 0) {
      func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
    }
  }
  puStack_4d8 = (undefined8 *)0x0;
  uStack_4c4 = 0;
  puStack_4c0 = (undefined1 *)0x0;
  uStack_488 = 0;
  uStack_480 = 0;
  pcStack_498 = (code *)0x0;
  uStack_490 = (long *)0x0;
  plStack_4a8 = (long *)0x0;
  pcStack_4a0 = (code *)0x0;
  auStack_4b8._0_8_ = 0;
  auStack_4b8._8_8_ = 0;
  auStack_4e8 = (undefined1  [4])0x0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  uStack_4d0 = 0x50736910;
  uStack_4cc = 0x65737561;
  uStack_4c8 = 100;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar16 + 8) = 0;
  *(undefined8 *)(pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f2fd7d8;
  uVar11 = func_0x0d858500(&uStack_2c8);
  pcVar3 = pcVar16 + 0x18;
  pcVar16[0x20] = (code)0x1;
  *(undefined4 *)(pcVar16 + 0x24) = uVar11;
  *(undefined4 *)(pcVar16 + 0x28) = 0;
  *(undefined8 *)(pcVar16 + 0x30) = 0;
  *(undefined8 *)(pcVar16 + 0x38) = 0;
  *(undefined8 *)(pcVar16 + 0x40) = 0;
  *(undefined **)(pcVar16 + 0x18) = &UNK_0f2fd828;
  *(undefined8 *)(pcVar16 + 0x48) = 0;
  *(undefined8 *)(pcVar16 + 0x50) = 0;
  *(undefined8 *)(pcVar16 + 0x58) = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  uVar11 = func_0x0d858620(pcVar3);
  pcVar7 = pcStack_498;
  *(undefined4 *)(pcVar16 + 0x28) = uVar11;
  pcStack_4a0 = pcVar3;
  if (pcStack_498 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_498 + 8);
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *(long *)pcStack_498;
      pcStack_498 = pcVar16;
      (**(code **)(lVar20 + 0x10))(pcVar7);
      func_0x0412c2d0(pcVar7);
      pcVar16 = pcStack_498;
    }
  }
  pcStack_498 = pcVar16;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_333 = 0;
  uStack_332 = 0;
  uStack_331 = 0;
  uStack_330 = 0;
  uStack_32f = 0;
  uStack_32d = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_327 = 0;
  uStack_325 = 0;
  uStack_324 = 0;
  (**(code **)(*(long *)pcStack_4a0 + 0x20))();
  uVar13 = auStack_4b8._0_8_;
  lVar20 = auStack_4b8._8_8_;
  if (auStack_4b8._0_8_ != 0) {
    while (uVar13 != lVar20) {
      func_0x05fe8450(lVar20 + -0x140);
      lVar20 = lVar20 + -0x140;
    }
    auStack_4b8._8_8_ = uVar13;
    func_0x0412a280(auStack_4b8._0_8_,(long)plStack_4a8 - auStack_4b8._0_8_);
  }
  auStack_4b8._0_8_ = 0;
  auStack_4b8._8_8_ = 0;
  plStack_4a8 = (long *)0x0;
  if (puStack_210 < puStack_208) {
    *puStack_210 = 0;
    puStack_210[1] = 0;
    puStack_210[2] = 0;
    *puStack_210 = CONCAT44(uStack_4e4,auStack_4e8);
    puStack_210[1] = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    puStack_210[2] = puStack_4d8;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    puStack_210[5] = puStack_4c0;
    puStack_210[3] = CONCAT44(uStack_4cc,uStack_4d0);
    puStack_210[4] = CONCAT44(uStack_4c4,uStack_4c8);
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    puStack_4c0 = (undefined1 *)0x0;
    puStack_210[6] = 0;
    puStack_210[7] = 0;
    puStack_210[8] = 0;
    puStack_210[6] = 0;
    puStack_210[7] = 0;
    puStack_210[8] = 0;
    auStack_4b8._0_8_ = 0;
    auStack_4b8._8_8_ = 0;
    plStack_4a8 = (long *)0x0;
    puStack_210[9] = pcStack_4a0;
    puStack_210[10] = pcStack_498;
    pcStack_4a0 = (code *)0x0;
    pcStack_498 = (code *)0x0;
    puStack_210[0xb] = 0;
    puStack_210[0xc] = 0;
    puStack_210[0xd] = 0;
    *(undefined4 *)(puStack_210 + 0xb) = (undefined4)uStack_490;
    *(undefined4 *)((long)puStack_210 + 0x5c) = uStack_490._4_4_;
    *(undefined4 *)(puStack_210 + 0xc) = (undefined4)uStack_488;
    *(undefined4 *)((long)puStack_210 + 100) = uStack_488._4_4_;
    puStack_210[0xd] = uStack_480;
    uStack_490 = (long *)0x0;
    uStack_488 = 0;
    uStack_480 = 0;
    puVar15 = puStack_210 + 0xe;
    lVar20 = CONCAT44(uStack_2c4,uStack_2c8);
  }
  else {
    puVar15 = (undefined8 *)func_0x0652ac80(&uStack_218,auStack_4e8);
    lVar20 = CONCAT44(uStack_2c4,uStack_2c8);
  }
  puStack_210 = puVar15;
  if (lVar20 != 0) {
    if (lVar20 != CONCAT44(uStack_2bc,uStack_2c0)) {
      lVar21 = CONCAT44(uStack_2bc,uStack_2c0) + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar19 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar19 != lVar20);
      lVar20 = CONCAT44(uStack_2c4,uStack_2c8);
    }
    func_0x0412a280(lVar20,CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT21(uStack_2b7,uStack_2b8)))
                           - lVar20);
  }
  func_0x05f93280(auStack_4e8);
  func_0x064e40a0(puVar15 + -0xe);
  bStack_88 = 0x10;
  uStack_87 = 0x65737561507369;
  uStack_80 = 100;
  uStack_7f = 0;
  func_0x064fd070(auStack_4e8,&bStack_88);
  uStack_328 = 0;
  uStack_327 = 0;
  uStack_325 = 0;
  uStack_324 = 0;
  uStack_310 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  plStack_2e8 = (long *)0x0;
  uStack_2e0 = 0;
  uStack_2f8 = 0;
  puStack_2f0 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_333 = 0;
  uStack_332 = 0;
  uStack_331 = 0;
  uStack_330 = 0;
  uStack_32f = 0;
  uStack_32d = 0;
  uStack_32c = 0;
  uStack_320 = 0x7375615074657312;
  uStack_318 = 0x6465;
  func_0x06c57d00(&uStack_2c8,auStack_4e8);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2fd8a8;
  uVar11 = func_0x0d858500(&uStack_2c8);
  puVar15 = plVar14 + 3;
  *(undefined1 *)(plVar14 + 4) = 0;
  *(undefined4 *)((long)plVar14 + 0x24) = uVar11;
  *(undefined4 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[3] = (long)&UNK_0f2fd8f8;
  *(uint *)(plVar14 + 9) = uStack_2c8;
  *(undefined4 *)((long)plVar14 + 0x4c) = uStack_2c4;
  *(undefined4 *)(plVar14 + 10) = uStack_2c0;
  *(undefined4 *)((long)plVar14 + 0x54) = uStack_2bc;
  plVar14[0xb] = CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT21(uStack_2b7,uStack_2b8)));
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b7 = 0;
  uStack_2b5 = 0;
  uStack_2b4 = 0;
  uVar11 = func_0x0d858620(puVar15);
  plVar2 = plStack_2e8;
  *(undefined4 *)(plVar14 + 5) = uVar11;
  puStack_2f0 = puVar15;
  if (plStack_2e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2e8 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *plStack_2e8;
      plStack_2e8 = plVar14;
      (**(code **)(lVar20 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar14 = plStack_2e8;
    }
  }
  plStack_2e8 = plVar14;
  cVar10 = func_0x06c57e80(&uStack_338,auStack_4e8);
  if (cVar10 == '\0') {
    puVar15 = (undefined8 *)0xf6c4ab8;
    lVar20 = CONCAT44(uStack_2c4,uStack_2c8);
  }
  else {
    if (puStack_210 < puStack_208) {
      *puStack_210 = 0;
      puStack_210[1] = 0;
      puStack_210[2] = 0;
      *puStack_210 = CONCAT17(uStack_331,
                              CONCAT16(uStack_332,
                                       CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338))));
      puStack_210[1] = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
      puStack_210[2] = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_333 = 0;
      uStack_332 = 0;
      uStack_331 = 0;
      uStack_330 = 0;
      uStack_32f = 0;
      uStack_32d = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_327 = 0;
      uStack_325 = 0;
      uStack_324 = 0;
      puStack_210[5] = uStack_310;
      puStack_210[3] = uStack_320;
      puStack_210[4] = uStack_318;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      puStack_210[6] = 0;
      puStack_210[7] = 0;
      puStack_210[8] = 0;
      puStack_210[6] = uStack_308;
      puStack_210[7] = uStack_300;
      puStack_210[8] = uStack_2f8;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      puStack_210[9] = puStack_2f0;
      puStack_210[10] = plStack_2e8;
      puStack_2f0 = (undefined8 *)0x0;
      plStack_2e8 = (undefined8 *)0x0;
      puStack_210[0xb] = 0;
      puStack_210[0xc] = 0;
      puStack_210[0xd] = 0;
      puStack_210[0xb] = uStack_2e0;
      puStack_210[0xc] = uStack_2d8;
      puStack_210[0xd] = uStack_2d0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      puStack_210 = puStack_210 + 0xe;
    }
    else {
      puStack_210 = (undefined8 *)func_0x0652ac80(&uStack_218,&uStack_338);
    }
    puVar15 = puStack_210 + -0xe;
    lVar20 = CONCAT44(uStack_2c4,uStack_2c8);
  }
  if (lVar20 != 0) {
    lVar21 = lVar20;
    if (lVar20 != CONCAT44(uStack_2bc,uStack_2c0)) {
      lVar21 = CONCAT44(uStack_2bc,uStack_2c0) + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar19 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar19 != lVar20);
      lVar21 = CONCAT44(uStack_2c4,uStack_2c8);
    }
    uStack_2c0 = (undefined4)lVar20;
    uStack_2bc = (undefined4)((ulong)lVar20 >> 0x20);
    func_0x0412a280(lVar21,CONCAT44(uStack_2b4,CONCAT13(uStack_2b5,CONCAT21(uStack_2b7,uStack_2b8)))
                           - lVar21);
  }
  func_0x05f93280(&uStack_338);
  func_0x064e40a0(puVar15);
  if (pcStack_3d0 != (code *)0x0) {
    (*pcStack_3d0)(auStack_3e8);
  }
  if (pcStack_418 != (code *)0x0) {
    (*pcStack_418)(auStack_430);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(&lStack_470);
  }
  if (pcStack_498 != (code *)0x0) {
    (*pcStack_498)(auStack_4b8 + 8);
  }
  if (((uint)auStack_4e8 & 1) != 0) {
    func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
  }
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_74,uStack_78),CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe
                   );
  }
  func_0x064e40a0(&uStack_2a8);
  auVar23 = func_0x0bab4ae0();
  lVar21 = lStack_290;
  auStack_260 = auVar23;
  lVar20 = lStack_288;
  if (lStack_290 != 0) {
    for (; lVar21 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_288 = lVar21;
    func_0x0412a280(lStack_290,lStack_280 - lStack_290);
  }
  uStack_188 = uStack_298;
  uStack_190 = (long *)uStack_2a0;
  uStack_198 = (long *)uStack_2a8;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_170 = puStack_268;
  uStack_180 = uStack_278;
  uStack_178 = uStack_270;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  auStack_158._0_8_ = auStack_250._0_8_;
  auStack_158._8_8_ = auStack_250._8_8_;
  uStack_148 = uStack_240;
  uStack_140 = uStack_238;
  uStack_138 = uStack_230;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_130 = uStack_228;
  uStack_128 = uStack_220;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_120 = uStack_218;
  uStack_118 = puStack_210;
  uStack_110 = puStack_208;
  uStack_218 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_108 = uStack_200;
  lStack_100 = uStack_1f8;
  uStack_f8 = uStack_1f0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_f0 = uStack_1e8;
  uStack_e8 = uStack_1e0;
  uStack_e0 = uStack_1d8;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_d8 = uStack_1d0;
  uStack_d0 = uStack_1c8;
  uStack_c8 = uStack_1c0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_c0 = (undefined4)uStack_1b8;
  uStack_bc = uStack_1b8._4_4_;
  uStack_b8 = (undefined4)uStack_1b0;
  uStack_b4 = uStack_1b0._4_4_;
  uStack_b0 = uStack_1a8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_168 = auStack_260;
  func_0x0651ffe0();
  uVar8 = uStack_2a8;
  uVar18 = uStack_2a0;
  if (uStack_2a8 != 0) {
    for (; uVar8 != uVar18; uVar18 = uVar18 - 0x30) {
      if ((*(byte *)(uVar18 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar18 - 0x10),
                        *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_2a0 = uVar8;
    func_0x0412a280(uStack_2a8,uStack_298 - uStack_2a8);
  }
  func_0x0d84fd50(param_3,&uStack_198);
  func_0x0651ffe0(&uStack_198);
  auStack_4e8 = (undefined1  [4])0x6e694d1e;
  uStack_4e4 = 0x61726365;
  uStack_4e0 = 0x66;
  uStack_4df = 0x4574;
  uStack_4dd = 100;
  uStack_4dc = 0x726f7469;
  puStack_4d8 = (undefined8 *)((ulong)puStack_4d8 & 0xffffffffffffff00);
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_260);
  func_0x048b1dc0(auStack_250);
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  if ((uStack_278 & 1) == 0) {
    puStack_268 = puStack_4d8;
    uStack_278 = CONCAT44(uStack_4e4,auStack_4e8);
    uStack_270 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
  }
  else {
    func_0x04885120(&uStack_278,auStack_4e8 + 1,0xf);
    if (((uint)auStack_4e8 & 1) != 0) {
      func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
    }
  }
  uStack_338 = 0x74666116;
  uStack_334 = 0x65;
  uStack_333 = 0x72;
  uStack_332 = 0x45;
  uStack_331 = 0x76;
  uStack_330 = 0x65;
  uStack_32f = 0x746e;
  uStack_32d = 0x73;
  uStack_32c = uStack_32c & 0xffffff00;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auStack_4b8 = func_0x0babd1a0();
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2fa998;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 3;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2fa9e8;
  if (uStack_490 == (long *)0x0) {
LAB_0ba42cd7:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba42ce9;
LAB_0ba42d23:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba42cd7;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba42d23;
LAB_0ba42ce9:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x6d697314;
  uStack_334 = 0x75;
  uStack_333 = 0x6c;
  uStack_332 = 0x61;
  uStack_331 = 0x74;
  uStack_330 = 0x69;
  uStack_32f = 0x6e6f;
  uStack_32d = 0;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0babdcc0();
  auStack_4b8 = auVar23;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2faa48;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2faa98;
  if (uStack_490 == (long *)0x0) {
LAB_0ba42eb1:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba42ec3;
LAB_0ba42efd:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba42eb1;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba42efd;
LAB_0ba42ec3:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x6e6f6312;
  uStack_334 = 0x73;
  uStack_333 = 0x74;
  uStack_332 = 0x61;
  uStack_331 = 0x6e;
  uStack_330 = 0x74;
  uStack_32f = 0x73;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0babe370();
  auStack_4b8 = auVar23;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar2 = uStack_490;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2faaf8;
  pcStack_498 = (code *)(plVar14 + 3);
  *(undefined1 *)(plVar14 + 4) = 1;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[3] = (long)&UNK_0f2fab48;
  if (uStack_490 == (long *)0x0) {
LAB_0ba43083:
    uStack_490 = plVar14;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba43095;
LAB_0ba430cf:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar1 = uStack_490 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba43083;
    lVar20 = *uStack_490;
    uStack_490 = plVar14;
    (**(code **)(lVar20 + 0x10))(plVar2);
    func_0x0412c2d0(plVar2);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba430cf;
LAB_0ba43095:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_338 = 0x676f6c06;
  uStack_334 = 0;
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
      uStack_4cc = CONCAT13(uStack_331,CONCAT12(uStack_332,CONCAT11(uStack_333,uStack_334)));
      uStack_4c8 = CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330));
      uStack_4d0 = uStack_338;
      uStack_4c4 = uStack_32c;
    }
    else {
      FUN_04885070(&uStack_4d0,
                   CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                   CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330))));
    }
  }
  else {
    bVar22 = (uStack_338 & 1) == 0;
    lVar20 = CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328)));
    if (bVar22) {
      lVar20 = (long)&uStack_338 + 1;
    }
    uVar18 = (ulong)((byte)uStack_338 >> 1);
    if (!bVar22) {
      uVar18 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auVar23 = func_0x0babea20();
  auStack_4b8 = auVar23;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar14 = uStack_490;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f2faba8;
  pcStack_498 = (code *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f2fabf8;
  if (uStack_490 == (long *)0x0) {
LAB_0ba43244:
    uStack_490 = puVar15;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba43256;
LAB_0ba43290:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar2 = uStack_490 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba43244;
    lVar20 = *uStack_490;
    uStack_490 = puVar15;
    (**(code **)(lVar20 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba43290;
LAB_0ba43256:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 - 0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_324,CONCAT13(uStack_325,CONCAT21(uStack_327,uStack_328))),
                    CONCAT17(uStack_331,
                             CONCAT16(uStack_332,
                                      CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338)))) &
                    0xfffffffffffffffe);
  }
  uStack_a8 = CONCAT31((int3)_DAT_013948d1,0x24);
  uStack_a4._1_3_ = (undefined3)_UNK_013948d5;
  uStack_a4 = CONCAT31(uStack_a4._1_3_,(char)((uint)_DAT_013948d1 >> 0x18));
  uStack_a0._1_3_ = (undefined3)_UNK_013948d9;
  uStack_a0 = CONCAT31(uStack_a0._1_3_,(char)((uint)_UNK_013948d5 >> 0x18));
  uStack_9c._1_3_ = (undefined3)_UNK_013948dd;
  uStack_9c = CONCAT31(uStack_9c._1_3_,(char)((uint)_UNK_013948d9 >> 0x18));
  uStack_98 = (undefined1)((uint)_UNK_013948dd >> 0x18);
  uStack_97 = 0x6570;
  uStack_95 = 0;
  lVar20 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar20 == 0) {
    func_0x048b0de0(auStack_4e8,&uStack_338);
    uVar6 = uStack_4dc;
    uRam000000000f54fd94 = uStack_4e4;
    _DAT_0f54fd90 = auStack_4e8;
    uVar11 = CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0));
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    uRam000000000f54fd9c = uVar6;
    _DAT_0f54fd98 = uVar11;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar20 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0)));
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar20 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar20 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6c93c8 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f6c93c8);
    if (iVar12 != 0) {
      func_0x0babff20();
      func_0x0410844d(&DAT_0f6c93c8);
    }
  }
  if (DAT_0f6c93c8 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f6c93c8);
    if (iVar12 != 0) {
      func_0x0babff20();
      func_0x0410844d(&DAT_0f6c93c8);
    }
  }
  auStack_4e8 = (undefined1  [4])0xf6c93b0;
  uStack_4e4 = 0;
  uStack_4e0 = (undefined1)_DAT_0f6c93b4;
  uStack_4df = (undefined2)((uint)_DAT_0f6c93b4 >> 8);
  uStack_4dd = (undefined1)((uint)_DAT_0f6c93b4 >> 0x18);
  puStack_4d8 = (undefined8 *)0x0;
  uStack_4d0 = 0x80;
  uStack_4c8 = 8;
  uStack_4c4 = 0;
  puStack_4c0 = &UNK_0babfe60;
  auStack_4b8._0_8_ = &UNK_0babffa0;
  auStack_4b8._8_8_ = 0;
  plStack_4a8 = (long *)&UNK_0bac0270;
  pcStack_4a0 = (code *)0x1;
  pcStack_498 = (code *)&SUB_048b5640;
  uStack_490 = (long *)&UNK_0bac0320;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  lStack_470 = 0;
  func_0x048aee30(&bStack_88,lVar20,auStack_4e8,0x693b619f);
  lVar20 = lStack_470;
  lStack_470 = 0;
  if (lVar20 != 0) {
    func_0x048ae940(lVar20);
    func_0x0412a280(lVar20,0x78);
  }
  plVar14 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_478 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar14);
    }
  }
  if (DAT_0f6c9480 == '\0') {
    iVar12 = FUN_04108328(&DAT_0f6c9480);
    if (iVar12 != 0) {
      func_0x0bac0520();
      func_0x0410844d(&DAT_0f6c9480);
    }
  }
  auStack_4e8 = (undefined1  [4])_DAT_0f6c946c;
  uStack_4e0 = 1;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  puStack_4d8 = (undefined8 *)&UNK_07af1f30;
  uStack_4d0 = 0xbac0330;
  uStack_4cc = 0;
  func_0x065abe60(&bStack_88);
  uStack_2b8 = (undefined1)uStack_78;
  uStack_2b7 = (undefined2)((uint)uStack_78 >> 8);
  uStack_2b5 = (undefined1)((uint)uStack_78 >> 0x18);
  uStack_2b4 = uStack_74;
  uStack_2b0 = uStack_70;
  uStack_2ac = uStack_6c;
  uStack_2c8 = (uint)CONCAT71(uStack_87,bStack_88);
  uStack_2c4 = (undefined4)((uint7)uStack_87 >> 0x18);
  uStack_2c0 = (undefined4)CONCAT62(uStack_7e,CONCAT11(uStack_7f,uStack_80));
  uStack_2bc = (undefined4)((uint6)uStack_7e >> 0x10);
  auStack_4e8 = (undefined1  [4])0xf55160ec;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  puStack_4d8 = (undefined8 *)((ulong)puStack_4d8 & 0xffffffff00000000);
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0x65b4120;
  uStack_4c4 = 0;
  puStack_4c0 = &SUB_048b06d0;
  auStack_4b8._0_8_ = &UNK_0bac05a0;
  auStack_4b8._8_8_ = 0;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  pcStack_4a0 = (code *)0x0;
  pcStack_498 = (code *)0x0;
  func_0x049057f0(&uStack_2c8,auStack_4e8);
  func_0x048aea50(auStack_4e8);
  uStack_328 = uStack_2b8;
  uStack_327 = uStack_2b7;
  uStack_325 = uStack_2b5;
  uStack_324 = uStack_2b4;
  uStack_320 = CONCAT44(uStack_2ac,uStack_2b0);
  uStack_338 = uStack_2c8;
  uStack_334 = (undefined1)uStack_2c4;
  uStack_333 = (undefined1)((uint)uStack_2c4 >> 8);
  uStack_332 = (undefined1)((uint)uStack_2c4 >> 0x10);
  uStack_331 = (undefined1)((uint)uStack_2c4 >> 0x18);
  uStack_330 = (undefined1)uStack_2c0;
  uStack_32f = (undefined2)((uint)uStack_2c0 >> 8);
  uStack_32d = (undefined1)((uint)uStack_2c0 >> 0x18);
  uStack_32c = uStack_2bc;
  auStack_4e8 = (undefined1  [4])0xf55160ec;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  puStack_4d8 = (undefined8 *)CONCAT44(puStack_4d8._4_4_,1);
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0x65b4120;
  uStack_4c4 = 0;
  puStack_4c0 = &SUB_048b06d0;
  auStack_4b8._0_8_ = &UNK_0bac0850;
  auStack_4b8._8_8_ = 0;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  pcStack_4a0 = (code *)0x0;
  pcStack_498 = (code *)0x0;
  func_0x049057f0(&uStack_338,auStack_4e8);
  func_0x048aea50(auStack_4e8);
  func_0x065af670(auStack_4e8);
  if ((uStack_4d0 & 1) == 0) {
    if ((uStack_a8 & 1) == 0) {
      puStack_4c0 = (undefined1 *)
                    CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,uStack_98)));
      uStack_4d0 = uStack_a8;
      uStack_4cc = uStack_a4;
      uStack_4c8 = uStack_a0;
      uStack_4c4 = uStack_9c;
    }
    else {
      FUN_04885070(&uStack_4d0,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,uStack_98)))
                   ,CONCAT44(uStack_9c,uStack_a0));
    }
  }
  else {
    bVar22 = (uStack_a8 & 1) != 0;
    lVar20 = (long)&uStack_a8 + 1;
    if (bVar22) {
      lVar20 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,uStack_98)));
    }
    uVar18 = (ulong)((byte)uStack_a8 >> 1);
    if (bVar22) {
      uVar18 = CONCAT44(uStack_9c,uStack_a0);
    }
    func_0x04885120(&uStack_4d0,lVar20,uVar18);
  }
  auStack_4b8 = func_0x0bac0af0();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar14 = uStack_490;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f2fac58;
  pcStack_498 = (code *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f2faca8;
  if (uStack_490 == (long *)0x0) {
LAB_0ba43766:
    uStack_490 = puVar15;
    if (uStack_1f8 < uStack_1f0) goto LAB_0ba43778;
LAB_0ba437b2:
    uStack_1f8 = func_0x065b01f0(&uStack_200,auStack_4e8);
  }
  else {
    LOCK();
    plVar2 = uStack_490 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0ba43766;
    lVar20 = *uStack_490;
    uStack_490 = puVar15;
    (**(code **)(lVar20 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_1f0 <= uStack_1f8) goto LAB_0ba437b2;
LAB_0ba43778:
    uVar18 = uStack_1f8;
    func_0x065b0410(uStack_1f8,auStack_4e8);
    uStack_1f8 = uVar18 + 0x1b0;
  }
  lVar20 = uStack_1f8 + -0x1b0;
  func_0x0652dc20(auStack_4e8);
  func_0x064e40a0(lVar20);
  if ((uStack_a8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,uStack_98))),
                    CONCAT44(uStack_a4,uStack_a8) & 0xfffffffffffffffe);
  }
  func_0x064e40a0(&uStack_2a8);
  auVar23 = func_0x0babd710();
  lVar21 = lStack_290;
  auStack_260 = auVar23;
  lVar20 = lStack_288;
  if (lStack_290 != 0) {
    for (; lVar21 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_288 = lVar21;
    func_0x0412a280(lStack_290,lStack_280 - lStack_290);
  }
  uStack_188 = uStack_298;
  uStack_190 = (long *)uStack_2a0;
  uStack_198 = (long *)uStack_2a8;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_170 = puStack_268;
  uStack_180 = uStack_278;
  uStack_178 = uStack_270;
  uStack_278 = 0;
  uStack_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  auStack_158._0_8_ = auStack_250._0_8_;
  auStack_158._8_8_ = auStack_250._8_8_;
  uStack_148 = uStack_240;
  uStack_140 = uStack_238;
  uStack_138 = uStack_230;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_130 = uStack_228;
  uStack_128 = uStack_220;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_120 = uStack_218;
  uStack_118 = puStack_210;
  uStack_110 = puStack_208;
  uStack_218 = 0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_108 = uStack_200;
  lStack_100 = uStack_1f8;
  uStack_f8 = uStack_1f0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_f0 = uStack_1e8;
  uStack_e8 = uStack_1e0;
  uStack_e0 = uStack_1d8;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_d8 = uStack_1d0;
  uStack_d0 = uStack_1c8;
  uStack_c8 = uStack_1c0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_c0 = (undefined4)uStack_1b8;
  uStack_bc = uStack_1b8._4_4_;
  uStack_b8 = (undefined4)uStack_1b0;
  uStack_b4 = uStack_1b0._4_4_;
  uStack_b0 = uStack_1a8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  auStack_168 = auStack_260;
  func_0x0651ffe0();
  uVar8 = uStack_2a8;
  uVar18 = uStack_2a0;
  if (uStack_2a8 != 0) {
    for (; uVar8 != uVar18; uVar18 = uVar18 - 0x30) {
      if ((*(byte *)(uVar18 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar18 - 0x10),
                        *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_2a0 = uVar8;
    func_0x0412a280(uStack_2a8,uStack_298 - uStack_2a8);
  }
  func_0x0d84fd50(param_3,&uStack_198);
  func_0x0651ffe0(&uStack_198);
  uStack_2a8 = 0x726f746964650c;
  auStack_4e8 = (undefined1  [4])0x0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  puStack_4d8 = (undefined8 *)0x0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f2ff438;
  uVar11 = func_0x0d858500(auStack_4e8);
  *(undefined1 *)(plVar14 + 4) = 0;
  *(undefined4 *)((long)plVar14 + 0x24) = uVar11;
  *(undefined4 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[3] = (long)&UNK_0f2ff488;
  plVar14[9] = lStack_38;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  auStack_4e8 = (undefined1  [4])0x0;
  uStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4dd = 0;
  uStack_4dc = 0;
  puStack_4d8 = (undefined8 *)0x0;
  uVar11 = func_0x0d858620(plVar14 + 3);
  *(undefined4 *)(plVar14 + 5) = uVar11;
  uStack_198 = plVar14 + 3;
  uStack_190 = plVar14;
  auVar23 = func_0x0bb10e60();
  uStack_338 = auVar23._0_4_;
  uStack_334 = auVar23[4];
  uStack_333 = auVar23[5];
  uStack_332 = auVar23[6];
  uStack_331 = auVar23[7];
  uStack_330 = auVar23[8];
  uStack_32f = auVar23._9_2_;
  uStack_32d = auVar23[0xb];
  uStack_32c = auVar23._12_4_;
  puVar15 = *(undefined8 **)(param_3 + 0xf0);
  if (puVar15 < *(undefined8 **)(param_3 + 0xf8)) {
    if ((uStack_2a8 & 1) == 0) {
      puStack_4d8 = (undefined8 *)uStack_298;
      auStack_4e8 = SUB84(uStack_2a8,0);
      uStack_4e4 = (undefined4)(uStack_2a8 >> 0x20);
      uStack_4e0 = (undefined1)uStack_2a0;
      uStack_4df = (undefined2)(uStack_2a0 >> 8);
      uStack_4dd = (undefined1)(uStack_2a0 >> 0x18);
      uStack_4dc = (undefined4)(uStack_2a0 >> 0x20);
    }
    else {
      FUN_0412e5e0(auStack_4e8,uStack_298,uStack_2a0);
    }
    plVar14 = uStack_190;
    if (uStack_190 != (long *)0x0) {
      LOCK();
      uStack_190[1] = uStack_190[1] + 1;
      UNLOCK();
    }
    uVar13 = CONCAT17(uStack_331,
                      CONCAT16(uStack_332,CONCAT15(uStack_333,CONCAT14(uStack_334,uStack_338))));
    uVar4 = CONCAT44(uStack_32c,CONCAT13(uStack_32d,CONCAT21(uStack_32f,uStack_330)));
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[5] = puStack_4d8;
    *(undefined1 (*) [4])(puVar15 + 3) = auStack_4e8;
    *(undefined4 *)((long)puVar15 + 0x1c) = uStack_4e4;
    *(uint *)(puVar15 + 4) = CONCAT13(uStack_4dd,CONCAT21(uStack_4df,uStack_4e0));
    *(undefined4 *)((long)puVar15 + 0x24) = uStack_4dc;
    auStack_4e8 = (undefined1  [4])0x0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4df = 0;
    uStack_4dd = 0;
    uStack_4dc = 0;
    puStack_4d8 = (undefined8 *)0x0;
    *(undefined4 *)(puVar15 + 6) = (undefined4)uStack_198;
    *(undefined4 *)((long)puVar15 + 0x34) = uStack_198._4_4_;
    *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_190;
    *(undefined4 *)((long)puVar15 + 0x3c) = uStack_190._4_4_;
    if (uStack_190 == (long *)0x0) {
      puVar15[8] = uVar13;
      puVar15[9] = uVar4;
    }
    else {
      LOCK();
      uStack_190[1] = uStack_190[1] + 1;
      UNLOCK();
      puVar15[8] = uVar13;
      puVar15[9] = uVar4;
      LOCK();
      plVar2 = uStack_190 + 1;
      lVar20 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_190 + 0x10))(uStack_190);
        func_0x0412c2d0(plVar14);
      }
      if (((uint)auStack_4e8 & 1) != 0) {
        func_0x0412a280(puStack_4d8,CONCAT44(uStack_4e4,auStack_4e8) & 0xfffffffffffffffe);
      }
    }
    puVar15 = puVar15 + 10;
    *(undefined8 **)(param_3 + 0xf0) = puVar15;
    *(undefined8 **)(param_3 + 0xf0) = puVar15;
    plVar14 = uStack_190;
  }
  else {
    puVar15 = (undefined8 *)func_0x098c2690(param_3 + 0xe8,&uStack_2a8,&uStack_198,&uStack_338);
    *(undefined8 **)(param_3 + 0xf0) = puVar15;
    plVar14 = uStack_190;
  }
  uStack_190 = plVar14;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x064e40a0(puVar15 + -10);
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
  }
  func_0x06b55d30(param_3);
  func_0x06b5
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1350210  NumberTaskPromise
 * 0x13948d1  worldGeneratorType
 * 0x13d4367  ExtensionOptionalParameters
 * 0x13d4372  tionalParameters
 * 0x14219cb  VolumeTaskPromise
 * 0x1455ba1  ManifestTaskPromise
 * 0x14bd577  defaultToolGroupId
 */
