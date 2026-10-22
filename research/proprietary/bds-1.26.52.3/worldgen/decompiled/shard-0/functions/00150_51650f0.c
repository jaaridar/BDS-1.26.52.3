/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52650f0 (ELF vaddr 0x51650f0)
 * Label: string:minecraft:nether_gold_ore_feature
 * Body:  [[052650f0, 052663e8] [052663f0, 052665fe] [05266600, 05266722] [05266730, 052668f5] [05266900, 0526697a] [05266980, 052669c0] [052669d0, 05266c0e] [05266c10, 05266dc6] [05266dd0, 05266e4a] [05266e50, 05266e90] [05266ea0, 0526884d] [05268850, 05268971]]
 * Ghidra: FUN_052650f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_052650f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  long *plVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  bool bVar26;
  ulong uStack_6f0;
  undefined8 uStack_6e8;
  int iStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  undefined4 *puStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined1 uStack_6a8;
  uint uStack_69c;
  undefined8 uStack_698;
  uint uStack_68c;
  long *plStack_688;
  byte bStack_679;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  int iStack_668;
  long *plStack_660;
  ulong *puStack_658;
  undefined8 uStack_650;
  long lStack_648;
  ulong uStack_640;
  undefined *puStack_638;
  long *plStack_630;
  undefined8 uStack_628;
  long alStack_618 [4];
  long *plStack_5f8;
  undefined8 uStack_5e8;
  undefined1 uStack_5d8;
  long *plStack_5c8;
  long lStack_5c0;
  long *plStack_5b8;
  uint uStack_5b0;
  uint uStack_5ac;
  undefined1 auStack_5a8 [7];
  char cStack_5a1;
  ulong uStack_5a0;
  ulong uStack_598;
  char cStack_590;
  undefined *puStack_588;
  undefined2 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  int iStack_560;
  long lStack_558;
  long lStack_540;
  long alStack_4a8 [4];
  long *plStack_488;
  undefined1 auStack_440 [64];
  uint uStack_400;
  undefined1 auStack_3e8 [64];
  uint uStack_3a8;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  ulong *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  int iStack_340;
  int iStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  undefined2 uStack_2e8;
  undefined6 uStack_2e6;
  undefined2 uStack_2e0;
  undefined *puStack_2d8;
  undefined2 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  byte bStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined2 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long alStack_200 [5];
  long *plStack_1d8;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined *puStack_60;
  undefined2 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  plStack_5c8 = param_1;
  func_0x0412d550(param_2 + 0x22);
  lVar19 = param_2[0x34];
  lVar22 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_340 = (int)lVar19 + 1;
  iStack_33c = (int)lVar22 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_5c0,param_2,&iStack_340);
  lVar19 = lStack_5c0;
  FUN_0ca8a1f0(&lStack_2a8,*(undefined8 *)(*(long *)(lStack_5c0 + 0x30) + 0x198),lStack_5c0 + 0x50,
               param_2);
  bVar7 = bStack_290;
  if (bStack_290 == 0) goto LAB_05268827;
  func_0x0c9d0c10(alStack_200,param_2[4],param_2[5],param_2,0,1,1,0);
  puStack_638 = &UNK_0f3e3a00;
  uStack_628 = 0;
  plStack_5f8 = (long *)0x0;
  uStack_5e8 = 0;
  uStack_5d8 = 1;
  plStack_630 = alStack_200;
  uStack_228 = func_0x0c9e2ed0(alStack_200,lStack_5c0 + 0x44);
  plVar21 = plStack_5c8;
  uStack_2e8 = 0;
  uStack_2e6 = 0;
  uStack_2e0 = 0;
  lStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2ee = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  lStack_238 = 0;
  uStack_230 = 1;
  puStack_110 = &uStack_338;
  puStack_118 = &uStack_288;
  plVar16 = (long *)func_0x052be380(plStack_5c8 + 0x2a);
  iVar14 = *(int *)(lVar19 + 0x50);
  lStack_348 = lVar19;
  uStack_69c = *(int *)(lVar19 + 0x54);
  uVar17 = (**(code **)(*(long *)plVar21[4] + 0x438))();
  lVar19 = plVar16[0x13f];
  if (*(char *)(lVar19 + 0x9e7) == '\x01') {
    *(int *)(lVar19 + 8) = (int)uVar17;
    *(undefined2 *)(lVar19 + 0x9e4) = 0;
    *(undefined4 *)(lVar19 + 0x9d4) = 0;
    *(undefined8 *)(lVar19 + 0x9d8) = 0;
    *(int *)(lVar19 + 0xc) = (int)uVar17;
    lVar22 = 5;
    while( true ) {
      uVar17 = ((ulong)(((uint)(uVar17 >> 0x1e) & 3 ^ (uint)uVar17) * 0x6c078965) + lVar22) - 4;
      uVar9 = (uint)uVar17;
      *(uint *)(lVar19 + -4 + lVar22 * 4) = uVar9;
      if (lVar22 == 0x191) break;
      uVar9 = (((uint)(uVar17 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar22) - 3;
      uVar17 = (ulong)uVar9;
      *(uint *)(lVar19 + lVar22 * 4) = uVar9;
      lVar22 = lVar22 + 2;
    }
    *(undefined8 *)(lVar19 + 0x9cc) = 0x18e00000270;
  }
  bStack_679 = bVar7;
  iVar10 = (**(code **)(*plVar16 + 0x10))(plVar16);
  plStack_688 = plVar16;
  iVar11 = (**(code **)(*plVar16 + 0x10))(plVar16);
  iVar12 = *(int *)(lStack_348 + 0x50);
  iVar13 = *(int *)(lStack_348 + 0x54);
  uVar9 = (**(code **)(*(long *)plStack_5c8[4] + 0x438))();
  uStack_5b0 = iVar10 - (iVar10 >> 0x1f) | 1;
  uStack_5ac = iVar11 - (iVar11 >> 0x1f) | 1;
  lVar19 = plStack_688[0x13f];
  if (*(char *)(lVar19 + 0x9e7) == '\x01') {
    uVar9 = uVar9 ^ iVar12 * uStack_5b0 + iVar13 * uStack_5ac;
    *(uint *)(lVar19 + 8) = uVar9;
    *(undefined2 *)(lVar19 + 0x9e4) = 0;
    *(undefined4 *)(lVar19 + 0x9d4) = 0;
    *(undefined8 *)(lVar19 + 0x9d8) = 0;
    *(uint *)(lVar19 + 0xc) = uVar9;
    lVar22 = 5;
    while( true ) {
      uVar17 = ((ulong)((uVar9 >> 0x1e ^ uVar9) * 0x6c078965) + lVar22) - 4;
      uVar9 = (uint)uVar17;
      *(uint *)(lVar19 + -4 + lVar22 * 4) = uVar9;
      if (lVar22 == 0x191) break;
      uVar9 = (((uint)(uVar17 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar22) - 3;
      *(uint *)(lVar19 + lVar22 * 4) = uVar9;
      lVar22 = lVar22 + 2;
    }
    *(undefined8 *)(lVar19 + 0x9cc) = 0x18e00000270;
  }
  uStack_2b8 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  plVar21 = plStack_688;
  uStack_2d0 = 0x101;
  uStack_2c8 = _DAT_0f6b3a90;
  uStack_2c0 = 0;
  puStack_2d8 = &UNK_0ef56898;
  uStack_2b0 = 0;
  iVar12 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
  iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uStack_68c = iVar14 << 4;
  uStack_69c = uStack_69c << 4;
  uStack_698 = CONCAT44(uStack_698._4_4_,uStack_68c) | 8;
  uStack_6f0._0_4_ = uStack_69c | 8;
  iStack_560 = iStack_560 + (uStack_69c | 8);
  uStack_568 = CONCAT44(iVar13 + 4,iVar12 + (uStack_68c | 8));
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(iVar12 + 4,iVar14 + (int)uStack_698);
  func_0x04abe520(&puStack_2d8,alStack_200,&uStack_568,plVar21);
  uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
  uStack_218 = 0x101;
  uStack_210 = _DAT_0f6b3a90;
  uStack_208 = 0;
  puStack_220 = &UNK_0ef56ba8;
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,10);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,iVar14 + 1);
  if (-1 < iVar14) {
    iVar14 = iVar14 + 1;
    do {
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
      iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_560 = iStack_560 + (uint)uStack_6f0;
      uStack_568 = CONCAT44(iVar13 + 4,iVar12 + (int)uStack_698);
      func_0x04abc4c0(&puStack_220,alStack_200,&uStack_568,plVar21);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uStack_580 = 0x101;
  uStack_578 = _DAT_0f6b3a90;
  uStack_570 = 0;
  puStack_588 = &UNK_0efa0410;
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,10);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,iVar14 + 1);
  if (0 < iVar14) {
    do {
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x78);
      iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_560 = iStack_560 + (uint)uStack_6f0;
      uStack_568 = CONCAT44(iVar13 + 4,iVar12 + (int)uStack_698);
      func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
  iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
  iStack_560 = iStack_560 + (uint)uStack_6f0;
  uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
  func_0x052c9160(&puStack_588,alStack_200,&uStack_568,plVar21);
  uStack_40 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf719018,1);
  uStack_58 = 0x101;
  uStack_50 = _DAT_0f6b3a90;
  uStack_48 = 0;
  puStack_60 = &UNK_0ef56818;
  uStack_38 = 0x40;
  iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,1);
  plVar21 = plStack_688;
  if (iVar14 == 0) {
    iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
    uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
    iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iStack_560 = iStack_560 + (uint)uStack_6f0;
    uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
    func_0x04ab9020(&puStack_60,alStack_200,&uStack_568,plVar21);
  }
  uStack_70 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf719040,1);
  plVar21 = plStack_688;
  uStack_88 = 0x101;
  uStack_80 = _DAT_0f6b3a90;
  uStack_78 = 0;
  puStack_90 = &UNK_0ef56818;
  uStack_68 = 0x40;
  iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,1);
  if (iVar14 == 0) {
    iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    uVar15 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80);
    iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iStack_560 = iStack_560 + (uint)uStack_6f0;
    uStack_568 = CONCAT44(uVar15,iVar14 + (int)uStack_698);
    func_0x04ab9020(&puStack_90,alStack_200,&uStack_568,plVar21);
  }
  lStack_648 = ((long *)plStack_5c8[4])[0x69];
  lVar19 = (**(code **)(*(long *)plStack_5c8[4] + 0x568))();
  puVar24 = (undefined *)(lVar19 + 0x50);
  puVar23 = puVar24;
  if ((*(char *)(lVar19 + 0x77) == '\0') &&
     (((puVar25 = (undefined *)(lVar19 + 0x70), *(char *)(lVar19 + 0x68) != '\0' ||
       (puVar23 = puVar25, (*(byte *)(lVar19 + 0x56) & 1) != 0)) &&
      (cVar6 = func_0x04fa7a10(puVar25,puVar24), puVar23 = puVar24, cVar6 != '\0')))) {
    puVar23 = puVar25;
  }
  puVar24 = &DAT_0f72b850;
  if (((puVar23[6] | puVar23[0x18]) & 1) != 0) {
    puVar24 = puVar23;
  }
  func_0x0d88e390(auStack_5a8,puVar24);
  if (((DAT_0f5a27d8 == '\0') && (cStack_590 == '\0')) &&
     (((DAT_0f5a27c6 & 1) == 0 ||
      ((cStack_5a1 != '\0' || (cVar6 = func_0x04fa7a10(auStack_5a8,0xf5a27c0), cVar6 == '\0')))))) {
    puStack_6c8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_6c8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar18 = _UNK_012f1560;
    uStack_6d8 = 0x29;
    uStack_6d0 = 0x21;
    *(undefined8 *)(puStack_6c8 + 4) = _DAT_012f1558;
    *(undefined8 *)(puStack_6c8 + 6) = uVar18;
    uVar5 = _UNK_012f1554;
    uVar4 = _UNK_012f1550;
    uVar15 = _UNK_012f154c;
    *puStack_6c8 = _DAT_012f1548;
    puStack_6c8[1] = uVar15;
    puStack_6c8[2] = uVar4;
    puStack_6c8[3] = uVar5;
    *(undefined2 *)(puStack_6c8 + 8) = 0x65;
    func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
    if ((char)iStack_560 == '\x01') {
      uStack_698 = uStack_568;
      uStack_6f0 = lStack_558;
      if (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) == 0) goto LAB_052663a7;
      bVar26 = true;
    }
    else {
LAB_052663a7:
      uStack_698 = 0;
      bVar26 = false;
      uStack_6f0 = 0;
    }
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    if (bVar26) {
      iVar14 = 0;
      do {
        plVar21 = plStack_688;
        iVar12 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
        iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x6c);
        iVar10 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
        ppuStack_678 = (undefined **)CONCAT44(iVar13 + 10,iVar12 + uStack_68c);
        uStack_670 = CONCAT44(uStack_670._4_4_,iVar10 + uStack_69c);
        lStack_6b8 = 0;
        lStack_6b0 = 0;
        puStack_6c8 = (undefined4 *)0x0;
        lStack_6c0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6a8 = 0;
        func_0x0d3d5ac0(&uStack_568,alStack_200,&ppuStack_678,&uStack_6d8);
        plVar21 = *(long **)(*(long *)(uStack_698 + 0x18) + uStack_6f0 * 8);
        ppuStack_378 = &puStack_638;
        uStack_368 = CONCAT44(uStack_368._4_4_,(undefined4)uStack_670);
        ppuStack_370 = ppuStack_678;
        plStack_360 = plStack_688;
        uStack_350 = 0;
        puStack_358 = &uStack_568;
        (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_378);
        if ((ulong)uStack_3a8 != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_378,auStack_3e8);
        }
        uStack_3a8 = 0xffffffff;
        if ((ulong)uStack_400 != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_378,auStack_440);
        }
        uStack_400 = 0xffffffff;
        if (plStack_488 == alStack_4a8) {
          lVar19 = 0x20;
LAB_05266605:
          (**(code **)(*plStack_488 + lVar19))();
        }
        else {
          lVar19 = 0x28;
          if (plStack_488 != (long *)0x0) goto LAB_05266605;
        }
        if (lStack_540 != 0) {
          func_0x0412c2d0();
        }
        lVar22 = lStack_6c0;
        lVar19 = lStack_6b8;
        if (lStack_6c0 != 0) {
          while (lVar22 != lVar19) {
            func_0x0b62f250(lVar19 + -8,0);
            lVar19 = lVar19 + -8;
          }
          lStack_6b8 = lVar22;
          func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
        }
        if (uStack_6d8 != 0) {
          uStack_6d0 = uStack_6d8;
          func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 10);
    }
  }
  puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar20 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar18 = _UNK_01207d52;
  uStack_6d8 = 0x29;
  uStack_6d0 = 0x23;
  *(undefined8 *)(puVar20 + 4) = _DAT_01207d4a;
  *(undefined8 *)(puVar20 + 6) = uVar18;
  uVar5 = _UNK_01207d46;
  uVar4 = _UNK_01207d42;
  uVar15 = _UNK_01207d3e;
  *puVar20 = _DAT_01207d3a;
  puVar20[1] = uVar15;
  puVar20[2] = uVar4;
  puVar20[3] = uVar5;
  *(undefined4 *)((long)puVar20 + 0x1f) = 0x65727574;
  *(undefined1 *)((long)puVar20 + 0x23) = 0;
  puStack_6c8 = puVar20;
  func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
  plVar21 = plStack_688;
  if (((char)iStack_560 == '\x01') &&
     (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
    bVar3 = true;
    bVar26 = true;
    uStack_6f0 = uStack_568;
    uStack_640 = lStack_558;
  }
  else {
    bVar3 = false;
    bVar26 = false;
    uStack_6f0 = 0;
    uStack_640 = 0;
  }
  if ((uStack_6d8 & 1) != 0) {
    func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    bVar26 = bVar3;
  }
  if (bVar26) {
    iVar14 = 0;
    do {
      uStack_698 = CONCAT44(uStack_698._4_4_,iVar14);
      iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x6c);
      iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      ppuStack_678 = (undefined **)CONCAT44(iVar12 + 10,iVar14 + uStack_68c);
      uStack_670 = CONCAT44(uStack_670._4_4_,iVar13 + uStack_69c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&ppuStack_678,&uStack_6d8);
      plVar16 = *(long **)(*(long *)(uStack_6f0 + 0x18) + uStack_640 * 8);
      ppuStack_378 = &puStack_638;
      uStack_368 = CONCAT44(uStack_368._4_4_,(undefined4)uStack_670);
      ppuStack_370 = ppuStack_678;
      uStack_350 = 0;
      plStack_360 = plVar21;
      puStack_358 = &uStack_568;
      (**(code **)(*plVar16 + 0x10))(plVar16,&ppuStack_378);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_378,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_378,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar19 = 0x20;
LAB_052669d5:
        (**(code **)(*plStack_488 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_052669d5;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar22 = lStack_6c0;
      lVar19 = lStack_6b8;
      if (lStack_6c0 != 0) {
        for (; lVar22 != lVar19; lVar19 = lVar19 + -8) {
          lVar1 = *(long *)(lVar19 + -8);
          *(undefined8 *)(lVar19 + -8) = 0;
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x58);
            *(undefined8 *)(lVar1 + 0x58) = 0;
            if (lVar2 != 0) {
              if ((ulong)*(uint *)(lVar2 + 0x50) != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar2 + 0x50) * 8))
                          (&uStack_568,lVar2 + 0x10);
              }
              func_0x0412a280(lVar2,0x58);
            }
            if ((ulong)*(uint *)(lVar1 + 0x50) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar1 + 0x50) * 8))
                        (&uStack_568,lVar1 + 0x10);
            }
            func_0x0412a280(lVar1,0x68);
          }
        }
        lStack_6b8 = lVar22;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      iVar14 = (int)uStack_698;
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      iVar14 = iVar14 + 1;
      plVar21 = plStack_688;
    } while (iVar14 != 0x10);
  }
  puStack_358 = (ulong *)func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
  plVar21 = plStack_688;
  ppuStack_370 = (undefined **)CONCAT62(ppuStack_370._2_6_,0x101);
  uStack_368 = _DAT_0f6b3a90;
  plStack_360 = (long *)0x0;
  ppuStack_378 = (undefined **)&UNK_0ef56898;
  uStack_350 = CONCAT71(uStack_350._1_7_,1);
  iVar14 = 0x10;
  do {
    iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iVar13 = (**(code **)(*plVar21 + 0x18))(plVar21,0x6c);
    iStack_560 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iStack_560 = iStack_560 + uStack_69c;
    uStack_568 = CONCAT44(iVar13 + 10,iVar12 + uStack_68c);
    func_0x04abe520(&ppuStack_378,alStack_200,&uStack_568,plVar21);
    uVar18 = func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f713b90,1);
    func_0x0c9d2c20(&uStack_338,alStack_200,&uStack_568,uVar18,0,0);
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar20 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar18 = _UNK_0123cb02;
  uStack_6d8 = 0x21;
  uStack_6d0 = 0x1e;
  *(ulong *)((long)puVar20 + 0xe) = CONCAT62(_UNK_0123cafc,_DAT_0123cafa);
  *(undefined8 *)((long)puVar20 + 0x16) = uVar18;
  uVar5 = _UNK_0123caf4;
  uVar4 = _UNK_0123caf0;
  uVar15 = CONCAT22(_DAT_0123cafa,_UNK_0123caf8);
  *puVar20 = _DAT_0123caec;
  puVar20[1] = uVar4;
  puVar20[2] = uVar5;
  puVar20[3] = uVar15;
  *(undefined1 *)((long)puVar20 + 0x1e) = 0;
  puStack_6c8 = puVar20;
  func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
  plVar21 = plStack_688;
  if (((char)iStack_560 == '\x01') &&
     (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
    bVar3 = true;
    bVar26 = true;
    uStack_6f0 = lStack_558;
    uStack_640 = uStack_568;
  }
  else {
    uStack_6f0 = 0;
    bVar3 = false;
    bVar26 = false;
    uStack_640 = 0;
  }
  if ((uStack_6d8 & 1) != 0) {
    func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    bVar26 = bVar3;
  }
  if (bVar26) {
    iVar14 = 0;
    do {
      uStack_698 = CONCAT44(uStack_698._4_4_,iVar14);
      iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0xe);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 0x17,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar16 = *(long **)(*(long *)(uStack_640 + 0x18) + uStack_6f0 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      uStack_650 = 0;
      plStack_660 = plVar21;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar16 + 0x10))(plVar16,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar19 = 0x20;
LAB_05266ea5:
        (**(code **)(*plStack_488 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_05266ea5;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar22 = lStack_6c0;
      lVar19 = lStack_6b8;
      if (lStack_6c0 != 0) {
        for (; lVar22 != lVar19; lVar19 = lVar19 + -8) {
          lVar1 = *(long *)(lVar19 + -8);
          *(undefined8 *)(lVar19 + -8) = 0;
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x58);
            *(undefined8 *)(lVar1 + 0x58) = 0;
            if (lVar2 != 0) {
              if ((ulong)*(uint *)(lVar2 + 0x50) != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar2 + 0x50) * 8))
                          (&uStack_568,lVar2 + 0x10);
              }
              func_0x0412a280(lVar2,0x58);
            }
            if ((ulong)*(uint *)(lVar1 + 0x50) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar1 + 0x50) * 8))
                        (&uStack_568,lVar1 + 0x10);
            }
            func_0x0412a280(lVar1,0x68);
          }
        }
        lStack_6b8 = lVar22;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      iVar14 = (int)uStack_698;
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      iVar14 = iVar14 + 1;
      plVar21 = plStack_688;
    } while (iVar14 != 9);
  }
  puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar20 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar18 = _UNK_0142c1a3;
  uStack_6d8 = 0x31;
  uStack_6d0 = 0x2b;
  *(ulong *)((long)puVar20 + 0x1b) = CONCAT35(_UNK_0142c1a0,_DAT_0142c19b);
  *(undefined8 *)((long)puVar20 + 0x23) = uVar18;
  uVar18 = CONCAT53(_DAT_0142c19b,_UNK_0142c198);
  *(undefined8 *)(puVar20 + 4) = _DAT_0142c190;
  *(undefined8 *)(puVar20 + 6) = uVar18;
  uVar5 = _UNK_0142c18c;
  uVar4 = _UNK_0142c188;
  uVar15 = _UNK_0142c184;
  *puVar20 = _DAT_0142c180;
  puVar20[1] = uVar15;
  puVar20[2] = uVar4;
  puVar20[3] = uVar5;
  *(undefined1 *)((long)puVar20 + 0x2b) = 0;
  puStack_6c8 = puVar20;
  func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
  if (((char)iStack_560 == '\x01') &&
     (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
    bVar3 = true;
    bVar26 = true;
    lVar19 = lStack_558;
    uVar17 = uStack_568;
  }
  else {
    bVar3 = false;
    bVar26 = false;
    lVar19 = 0;
    uVar17 = 0;
  }
  if ((uStack_6d8 & 1) != 0) {
    func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    bVar26 = bVar3;
  }
  if (bVar26) {
    iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x20);
    iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iStack_6e0 = iStack_6e0 + uStack_69c;
    uStack_6e8 = CONCAT44(iVar12 + 5,iVar14 + uStack_68c);
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    puStack_6c8 = (undefined4 *)0x0;
    lStack_6c0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6a8 = 0;
    func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
    plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
    ppuStack_678 = &puStack_638;
    iStack_668 = iStack_6e0;
    uStack_670 = uStack_6e8;
    plStack_660 = plStack_688;
    uStack_650 = 0;
    puStack_658 = &uStack_568;
    (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
    if ((ulong)uStack_3a8 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
    }
    uStack_3a8 = 0xffffffff;
    if ((ulong)uStack_400 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
    }
    uStack_400 = 0xffffffff;
    if (plStack_488 == alStack_4a8) {
      lVar22 = 0x20;
LAB_0526743f:
      (**(code **)(*plStack_488 + lVar22))();
    }
    else {
      lVar22 = 0x28;
      if (plStack_488 != (long *)0x0) goto LAB_0526743f;
    }
    if (lStack_540 != 0) {
      func_0x0412c2d0();
    }
    lVar1 = lStack_6c0;
    lVar22 = lStack_6b8;
    if (lStack_6c0 != 0) {
      while (lVar1 != lVar22) {
        func_0x0b62f250(lVar22 + -8,0);
        lVar22 = lVar22 + -8;
      }
      lStack_6b8 = lVar1;
      func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
    }
    if (uStack_6d8 != 0) {
      uStack_6d0 = uStack_6d8;
      func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
    }
    plVar21 = plStack_688;
    iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
    iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x20);
    iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
    iStack_6e0 = iStack_6e0 + uStack_69c;
    uStack_6e8 = CONCAT44(iVar12 + 5,iVar14 + uStack_68c);
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    puStack_6c8 = (undefined4 *)0x0;
    lStack_6c0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6a8 = 0;
    func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
    plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
    ppuStack_678 = &puStack_638;
    iStack_668 = iStack_6e0;
    uStack_670 = uStack_6e8;
    plStack_660 = plStack_688;
    uStack_650 = 0;
    puStack_658 = &uStack_568;
    (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
    if ((ulong)uStack_3a8 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
    }
    uStack_3a8 = 0xffffffff;
    if ((ulong)uStack_400 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
    }
    uStack_400 = 0xffffffff;
    if (plStack_488 == alStack_4a8) {
      lVar19 = 0x20;
LAB_05267460:
      (**(code **)(*plStack_488 + lVar19))();
    }
    else {
      lVar19 = 0x28;
      if (plStack_488 != (long *)0x0) goto LAB_05267460;
    }
    if (lStack_540 != 0) {
      func_0x0412c2d0();
    }
    lVar22 = lStack_6c0;
    lVar19 = lStack_6b8;
    if (lStack_6c0 != 0) {
      while (lVar22 != lVar19) {
        func_0x0b62f250(lVar19 + -8,0);
        lVar19 = lVar19 + -8;
      }
      lStack_6b8 = lVar22;
      func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
    }
    plVar21 = plStack_688;
    if (uStack_6d8 != 0) {
      uStack_6d0 = uStack_6d8;
      func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      plVar21 = plStack_688;
    }
  }
  if (((DAT_0f5a27d8 == '\0') && (cStack_590 == '\0')) &&
     (((DAT_0f5a27c6 & 1) == 0 ||
      ((cStack_5a1 != '\0' || (cVar6 = func_0x04fa7a10(auStack_5a8,0xf5a27c0), cVar6 == '\0')))))) {
    puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar18 = _UNK_014c915d;
    uStack_6d8 = 0x21;
    uStack_6d0 = 0x1c;
    *(ulong *)(puVar20 + 3) = CONCAT44(_UNK_014c9159,_DAT_014c9155);
    *(undefined8 *)(puVar20 + 5) = uVar18;
    uVar5 = _DAT_014c9155;
    uVar4 = _UNK_014c9151;
    uVar15 = _UNK_014c914d;
    *puVar20 = _DAT_014c9149;
    puVar20[1] = uVar15;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *(undefined1 *)(puVar20 + 7) = 0;
    puStack_6c8 = puVar20;
    func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
    if (((char)iStack_560 == '\x01') &&
       (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
      bVar26 = true;
      lVar19 = lStack_558;
      uVar17 = uStack_568;
    }
    else {
      lVar19 = 0;
      bVar26 = false;
      uVar17 = 0;
    }
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    if (bVar26) {
      iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x20);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 5,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plStack_688;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar22 = 0x20;
LAB_05267616:
        (**(code **)(*plStack_488 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_05267616;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar1 = lStack_6c0;
      lVar22 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar1 != lVar22) {
          func_0x0b62f250(lVar22 + -8,0);
          lVar22 = lVar22 + -8;
        }
        lStack_6b8 = lVar1;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      plVar21 = plStack_688;
      iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x20);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 5,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plStack_688;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar19 = 0x20;
LAB_05267806:
        (**(code **)(*plStack_488 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_05267806;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar22 = lStack_6c0;
      lVar19 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar22 != lVar19) {
          func_0x0b62f250(lVar19 + -8,0);
          lVar19 = lVar19 + -8;
        }
        lStack_6b8 = lVar22;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      plVar21 = plStack_688;
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
        plVar21 = plStack_688;
      }
    }
  }
  iVar14 = *(int *)(lStack_348 + 0x50);
  iVar12 = *(int *)(lStack_348 + 0x54);
  uVar9 = (**(code **)(*(long *)plStack_5c8[4] + 0x438))();
  lVar19 = plVar21[0x13f];
  if (*(char *)(lVar19 + 0x9e7) == '\x01') {
    uVar9 = uVar9 ^ iVar14 * uStack_5b0 + iVar12 * uStack_5ac;
    *(uint *)(lVar19 + 8) = uVar9;
    *(undefined2 *)(lVar19 + 0x9e4) = 0;
    *(undefined4 *)(lVar19 + 0x9d4) = 0;
    *(undefined8 *)(lVar19 + 0x9d8) = 0;
    *(uint *)(lVar19 + 0xc) = uVar9;
    lVar22 = 5;
    while( true ) {
      uVar17 = ((ulong)((uVar9 >> 0x1e ^ uVar9) * 0x6c078965) + lVar22) - 4;
      uVar9 = (uint)uVar17;
      *(uint *)(lVar19 + -4 + lVar22 * 4) = uVar9;
      if (lVar22 == 0x191) break;
      uVar9 = (((uint)(uVar17 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar22) - 3;
      *(uint *)(lVar19 + lVar22 * 4) = uVar9;
      lVar22 = lVar22 + 2;
    }
    *(undefined8 *)(lVar19 + 0x9cc) = 0x18e00000270;
  }
  (**(code **)(*plStack_5c8 + 0x1c0))(plStack_5c8,uStack_228,lStack_5c0,alStack_200,plVar21);
  if (((DAT_0f5a27d8 == '\0') && (cStack_590 == '\0')) &&
     (((DAT_0f5a27c6 & 1) == 0 ||
      ((cStack_5a1 != '\0' || (cVar6 = func_0x04fa7a10(auStack_5a8,0xf5a27c0), cVar6 == '\0')))))) {
    puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar20 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar18 = _UNK_014adead;
    uStack_6d8 = 0x29;
    uStack_6d0 = 0x27;
    *(undefined8 *)(puVar20 + 4) = _DAT_014adea5;
    *(undefined8 *)(puVar20 + 6) = uVar18;
    uVar5 = _UNK_014adea1;
    uVar4 = _UNK_014ade9d;
    uVar15 = _UNK_014ade99;
    *puVar20 = _DAT_014ade95;
    puVar20[1] = uVar15;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *(undefined8 *)((long)puVar20 + 0x1f) = 0x657275746165665f;
    *(undefined1 *)((long)puVar20 + 0x27) = 0;
    puStack_6c8 = puVar20;
    func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
    if (((char)iStack_560 == '\x01') &&
       (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
      bVar26 = true;
      uVar17 = uStack_568;
      lVar19 = lStack_558;
    }
    else {
      lVar19 = 0;
      bVar26 = false;
      uVar17 = 0;
    }
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    if (bVar26) {
      iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 8,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plStack_688;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar22 = 0x20;
LAB_05267c07:
        (**(code **)(*plStack_488 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_05267c07;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar1 = lStack_6c0;
      lVar22 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar1 != lVar22) {
          func_0x0b62f250(lVar22 + -8,0);
          lVar22 = lVar22 + -8;
        }
        lStack_6b8 = lVar1;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      plVar21 = plStack_688;
      iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 8,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plStack_688;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar19 = 0x20;
LAB_05267e00:
        (**(code **)(*plStack_488 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_05267e00;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar22 = lStack_6c0;
      lVar19 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar22 != lVar19) {
          func_0x0b62f250(lVar19 + -8,0);
          lVar19 = lVar19 + -8;
        }
        lStack_6b8 = lVar22;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      plVar21 = plStack_688;
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
        plVar21 = plStack_688;
      }
    }
    puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar20 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar18 = _UNK_012d6cfe;
    uStack_6d8 = 0x29;
    uStack_6d0 = 0x27;
    *(undefined8 *)(puVar20 + 4) = _DAT_012d6cf6;
    *(undefined8 *)(puVar20 + 6) = uVar18;
    uVar5 = _UNK_012d6cf2;
    uVar4 = _UNK_012d6cee;
    uVar15 = _UNK_012d6cea;
    *puVar20 = _DAT_012d6ce6;
    puVar20[1] = uVar15;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *(undefined8 *)((long)puVar20 + 0x1f) = 0x657275746165665f;
    *(undefined1 *)((long)puVar20 + 0x27) = 0;
    puStack_6c8 = puVar20;
    func_0x0d3a0d80(&uStack_568,lStack_648,&uStack_6d8);
    if (((char)iStack_560 == '\x01') &&
       (*(long *)(*(long *)(uStack_568 + 0x18) + lStack_558 * 8) != 0)) {
      bVar26 = true;
      lVar19 = lStack_558;
      uVar17 = uStack_568;
    }
    else {
      lVar19 = 0;
      bVar26 = false;
      uVar17 = 0;
    }
    if ((uStack_6d8 & 1) != 0) {
      func_0x0412a280(puStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    if (bVar26) {
      iVar14 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iVar12 = (**(code **)(*plVar21 + 0x18))(plVar21,0x70);
      iStack_6e0 = (**(code **)(*plVar21 + 0x18))(plVar21,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 8,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar16 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      uStack_650 = 0;
      plStack_660 = plVar21;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar16 + 0x10))(plVar16,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar22 = 0x20;
LAB_052680a9:
        (**(code **)(*plStack_488 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_052680a9;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar1 = lStack_6c0;
      lVar22 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar1 != lVar22) {
          func_0x0b62f250(lVar22 + -8,0);
          lVar22 = lVar22 + -8;
        }
        lStack_6b8 = lVar1;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      plVar16 = plStack_688;
      iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
      iVar12 = (**(code **)(*plVar16 + 0x18))(plVar16,0x70);
      iStack_6e0 = (**(code **)(*plVar16 + 0x18))(plVar16,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 8,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plVar16;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar22 = 0x20;
LAB_0526828e:
        (**(code **)(*plStack_488 + lVar22))();
      }
      else {
        lVar22 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_0526828e;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar1 = lStack_6c0;
      lVar22 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar1 != lVar22) {
          func_0x0b62f250(lVar22 + -8,0);
          lVar22 = lVar22 + -8;
        }
        lStack_6b8 = lVar1;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
      plVar16 = plStack_688;
      iVar14 = (**(code **)(*plStack_688 + 0x18))(plStack_688,0x10);
      iVar12 = (**(code **)(*plVar16 + 0x18))(plVar16,0x70);
      iStack_6e0 = (**(code **)(*plVar16 + 0x18))(plVar16,0x10);
      iStack_6e0 = iStack_6e0 + uStack_69c;
      uStack_6e8 = CONCAT44(iVar12 + 8,iVar14 + uStack_68c);
      lStack_6b8 = 0;
      lStack_6b0 = 0;
      puStack_6c8 = (undefined4 *)0x0;
      lStack_6c0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6a8 = 0;
      func_0x0d3d5ac0(&uStack_568,alStack_200,&uStack_6e8,&uStack_6d8);
      plVar21 = *(long **)(*(long *)(uVar17 + 0x18) + lVar19 * 8);
      ppuStack_678 = &puStack_638;
      iStack_668 = iStack_6e0;
      uStack_670 = uStack_6e8;
      plStack_660 = plVar16;
      uStack_650 = 0;
      puStack_658 = &uStack_568;
      (**(code **)(*plVar21 + 0x10))(plVar21,&ppuStack_678);
      if ((ulong)uStack_3a8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_3a8 * 8))(&ppuStack_678,auStack_3e8);
      }
      uStack_3a8 = 0xffffffff;
      if ((ulong)uStack_400 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_400 * 8))(&ppuStack_678,auStack_440);
      }
      uStack_400 = 0xffffffff;
      if (plStack_488 == alStack_4a8) {
        lVar19 = 0x20;
LAB_0526846e:
        (**(code **)(*plStack_488 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_488 != (long *)0x0) goto LAB_0526846e;
      }
      if (lStack_540 != 0) {
        func_0x0412c2d0();
      }
      lVar22 = lStack_6c0;
      lVar19 = lStack_6b8;
      if (lStack_6c0 != 0) {
        while (lVar22 != lVar19) {
          func_0x0b62f250(lVar19 + -8,0);
          lVar19 = lVar19 + -8;
        }
        lStack_6b8 = lVar22;
        func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
      }
      if (uStack_6d8 != 0) {
        uStack_6d0 = uStack_6d8;
        func_0x0412a280(uStack_6d8,(long)puStack_6c8 - uStack_6d8);
      }
    }
  }
  plVar21 = (long *)(**(code **)(alStack_200[0] + 0x150))(alStack_200);
  bVar7 = (**(code **)(*plVar21 + 0xc38))(plVar21);
  bVar8 = (**(code **)(*plStack_1d8 + 0x9f0))();
  if (((byte)(bVar7 | bVar8 ^ 1) == 1) && (lStack_320 != lStack_328)) {
    uVar17 = 0;
    do {
      FUN_0c9e4770(&uStack_338,alStack_200,&UNK_01d38818,0x7fffffff,1);
      if (lStack_320 == lStack_328) break;
      bVar26 = uVar17 < 0x7f;
      uVar17 = uVar17 + 1;
    } while (bVar26);
  }
  plVar21 = (long *)(**(code **)(alStack_200[0] + 0x150))(alStack_200);
  bVar7 = (**(code **)(*plVar21 + 0xc38))(plVar21);
  bVar8 = (**(code **)(*plStack_1d8 + 0x9f0))();
  if (((byte)(bVar7 | bVar8 ^ 1) == 1) && (lStack_270 != lStack_278)) {
    uVar17 = 0;
    do {
      FUN_0c9e4770(&uStack_288,alStack_200,&UNK_01d38818,0x7fffffff,1);
      if (lStack_270 == lStack_278) break;
      bVar26 = uVar17 < 0x7f;
      uVar17 = uVar17 + 1;
    } while (bVar26);
  }
  func_0x0c9e7730(*(undefined8 *)(lStack_5c0 + 0xf8),&uStack_338);
  func_0x0c9e7730(*(undefined8 *)(lStack_5c0 + 0x100),&uStack_288);
  FUN_0cafd630(lStack_5c0);
  if ((uStack_598 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_598 & 0xff00ffffffffffff) - 8);
  }
  bVar7 = bStack_679;
  uStack_598 = 0;
  if ((uStack_5a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5a0 & 0xff00ffffffffffff) - 8);
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    func_0x0412a280(lStack_248,lStack_238 - lStack_248);
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    func_0x0412a280(lStack_260,lStack_250 - lStack_260);
  }
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    func_0x0412a280(lStack_278,lStack_268 - lStack_278);
  }
  if (lStack_2f8 != 0) {
    uStack_2f0 = (undefined2)lStack_2f8;
    uStack_2ee = (undefined6)((ulong)lStack_2f8 >> 0x10);
    func_0x0412a280(lStack_2f8,CONCAT62(uStack_2e6,uStack_2e8) - lStack_2f8);
  }
  if (lStack_310 != 0) {
    lStack_308 = lStack_310;
    func_0x0412a280(lStack_310,lStack_300 - lStack_310);
  }
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    func_0x0412a280(lStack_328,lStack_318 - lStack_328);
  }
  puStack_638 = &UNK_0f3e3a00;
  if (plStack_5f8 == alStack_618) {
    lVar19 = 0x20;
LAB_0526880c:
    (**(code **)(*plStack_5f8 + lVar19))();
  }
  else {
    lVar19 = 0x28;
    if (plStack_5f8 != (long *)0x0) goto LAB_0526880c;
  }
  func_0x0c9d0f40(alStack_200);
LAB_05268827:
  lVar19 = lStack_2a8;
  if (((bStack_290 & 1) != 0) && (lVar22 = lStack_2a0, lStack_2a8 != 0)) {
    for (; lVar19 != lVar22; lVar22 = lVar22 + -0x20) {
      if (*(char *)(lVar22 + -8) == '\x01') {
        pthread_mutex_unlock(*(undefined8 *)(lVar22 + -0x10));
      }
      plVar21 = *(long **)(lVar22 + -0x18);
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar16 = plVar21 + 1;
        lVar1 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
    }
    lStack_2a0 = lVar19;
    func_0x0412a280(lStack_2a8,lStack_298 - lStack_2a8);
  }
  if (plStack_5b8 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_5b8 + 1;
    lVar19 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
      func_0x0412c2d0(plStack_5b8);
    }
  }
  return bVar7;
}



/* ---- referenced strings ----
 * 0x1207d3a  minecraft:nether_quartz_ore_feature
 * 0x1207d4a  _quartz_ore_feature
 * 0x123caec  minecraft:nether_magma_feature
 * 0x123cafa  er_magma_feature
 * 0x12d6ce6  minecraft:nether_netherite_tall_feature
 * 0x12d6cf6  _netherite_tall_feature
 * 0x12f1548  minecraft:nether_gold_ore_feature
 * 0x12f1558  _gold_ore_feature
 * 0x142c180  minecraft:nether_gravel_underground_feature
 * 0x142c190  _gravel_underground_feature
 * 0x142c19b  erground_feature
 * 0x14ade95  minecraft:nether_netherite_deep_feature
 * 0x14adea5  _netherite_deep_feature
 * 0x14c9149  minecraft:blackstone_feature
 * 0x14c9155  ackstone_feature
 */
