/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495c870 (ELF vaddr 0x485c870)
 * Label: caller-of-seed
 * Body:  [[0495c870, 0495c92a] [0495c930, 0495c966] [0495c970, 0495ca12] [0495ca20, 0495ca9a] [0495caa0, 0495caea] [0495caf0, 0495cc34] [0495cc40, 0495cd3a] [0495cd40, 0495cdb6] [0495cdc0, 0495d129]]
 * Ghidra: FUN_0495c870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0495c870(ulong param_1,long *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  long *plStack_438;
  long *plStack_430;
  undefined2 auStack_408 [4];
  byte bStack_400;
  undefined4 uStack_3ff;
  undefined4 uStack_3fb;
  undefined4 uStack_3f7;
  undefined4 uStack_3f3;
  undefined1 uStack_3ef;
  undefined6 uStack_3ee;
  undefined4 uStack_3e8;
  long lStack_3e0;
  long *plStack_3d8;
  long lStack_3d0;
  long *plStack_3c8;
  long lStack_3c0;
  long *plStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long *plStack_388;
  byte bStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long lStack_350;
  int iStack_348;
  undefined1 auStack_318 [56];
  undefined1 auStack_2e0 [56];
  undefined1 auStack_2a8 [56];
  undefined1 auStack_270 [56];
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [464];
  
  uStack_3e8 = *(undefined4 *)(param_1 + 0x40c);
  auStack_408[0] = 0;
  bStack_400 = 0x20;
  uStack_3ff = _DAT_014adbb4;
  uStack_3fb = _UNK_014adbb8;
  uStack_3f7 = _UNK_014adbbc;
  uStack_3f3 = _UNK_014adbc0;
  uStack_3ef = 0;
  lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3f8);
  uVar17 = param_1;
  if (lVar3 == 0) goto LAB_0495d108;
  do {
    func_0x0c8caab0(lVar3);
    plVar10 = *(long **)(uVar17 + 8);
    *(long *)(uVar17 + 8) = lVar3;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
      lVar3 = *(long *)(uVar17 + 8);
    }
    lStack_3e0 = uVar17 + 0x38;
    func_0x04a51300(lVar3,auStack_408,&DAT_0f72b850);
    plVar10 = (long *)*param_2;
    plStack_3d8 = param_2 + 1;
    if (plVar10 == plStack_3d8) {
LAB_0495cdf1:
      uVar2 = *(undefined2 *)(uVar17 + 0x408);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0xd0,0);
      }
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 4) = 0x3f800000;
      func_0x0412d440(puVar8 + 5);
      *(undefined1 *)(puVar8 + 0x17) = 1;
      puVar8[0x18] = 0;
      *(undefined2 *)(puVar8 + 0x19) = uVar2;
      lVar3 = *(long *)(uVar17 + 0x70);
      *(undefined8 **)(uVar17 + 0x70) = puVar8;
      if (lVar3 != 0) {
        func_0x049db610(lVar3);
        func_0x0412a280(lVar3,0xd0);
      }
      uVar11 = *(ulong *)(uVar17 + 0x400) ^ 0x6a09e667f3bcc909;
      uVar14 = (uVar11 >> 0x1e ^ uVar11) * -0x40a7b892e31b1a47;
      uVar9 = (uVar14 >> 0x1b ^ uVar14) * -0x6b2fb644ecceee15;
      uVar9 = uVar9 >> 0x1f ^ uVar9;
      uVar14 = (uVar11 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar11 + 0x9e3779b97f4a7c15) *
               -0x40a7b892e31b1a47;
      uVar14 = (uVar14 >> 0x1b ^ uVar14) * -0x6b2fb644ecceee15;
      uVar14 = uVar14 >> 0x1f ^ uVar14;
      if (uVar14 == 0 && uVar9 == 0) {
        uVar14 = 0x6a09e667f3bcc909;
        uVar9 = 0x9e3779b97f4a7c15;
      }
      lStack_398 = ((uVar14 + uVar9) * 0x20000 | uVar14 + uVar9 >> 0x2f) + uVar9;
      uVar14 = uVar14 ^ uVar9;
      uVar9 = uVar14 << 0x15 ^ (uVar9 << 0x31 | uVar9 >> 0xf) ^ uVar14;
      uVar14 = (uVar14 << 0x1c | uVar14 >> 0x24) + uVar9;
      lStack_390 = (uVar14 * 0x20000 | uVar14 >> 0x2f) + uVar9;
      puStack_3a0 = &UNK_0ef51388;
      func_0x05256180(&plStack_388,&puStack_3a0);
      lVar3 = uVar17 + 0x78;
      if (*(char *)(uVar17 + 0x3d0) == '\x01') {
        func_0x0495d8f0(lVar3);
        *(undefined1 *)(uVar17 + 0x3d0) = 0;
      }
      func_0x049cce40(lVar3,&plStack_388);
      func_0x049cce40(uVar17 + 0xb0,&lStack_350);
      func_0x049cce40(uVar17 + 0xe8,auStack_318);
      func_0x049cce40(uVar17 + 0x120,auStack_2e0);
      func_0x049cce40(uVar17 + 0x158,auStack_2a8);
      func_0x049cce40(uVar17 + 400,auStack_270);
      func_0x049cce40(uVar17 + 0x1c8,auStack_238);
      func_0x049cd050(uVar17 + 0x200,auStack_200);
      *(undefined1 *)(uVar17 + 0x3d0) = 1;
      func_0x0495d8f0(&plStack_388);
      func_0x0528a530(&plStack_388,&puStack_3a0,*(undefined8 *)(uVar17 + 8),0,uVar17 + 0x18,
                      lStack_3e0,lVar3,*(undefined8 *)(uVar17 + 0x70),uVar17 + 0x408);
      plVar16 = plStack_388;
      plStack_388 = (long *)0x0;
      plVar10 = *(long **)(uVar17 + 0x10);
      *(long **)(uVar17 + 0x10) = plVar16;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
        plVar10 = plStack_388;
        plStack_388 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((bStack_400 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_3ee,CONCAT11(uStack_3ef,uStack_3f3._3_1_)),
                        CONCAT35((undefined3)uStack_3fb,CONCAT41(uStack_3ff,bStack_400)) &
                        0xfffffffffffffffe);
      }
      return;
    }
LAB_0495c93e:
    bVar1 = *(byte *)(plVar10 + 4);
    if ((bVar1 & 1) == 0) {
      plVar16 = (long *)((long)plVar10 + 0x21);
      lVar3 = *(long *)(uVar17 + 8);
      iVar13 = *(int *)(lVar3 + 0x3b0);
      if ((short)iVar13 != -1) goto LAB_0495c95c;
LAB_0495c985:
      plStack_388 = plVar16;
      func_0x0c8cb900(1,3,5,&UNK_0131b97e,&UNK_01d37212,&plStack_388);
      plStack_3c8 = *(long **)(lVar3 + 0x3b8);
    }
    else {
      plVar16 = (long *)plVar10[6];
      lVar3 = *(long *)(uVar17 + 8);
      iVar13 = *(int *)(lVar3 + 0x3b0);
      if ((short)iVar13 == -1) goto LAB_0495c985;
LAB_0495c95c:
      if ((bVar1 & 1) == 0) {
        uVar14 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar14 = plVar10[5];
      }
      *(int *)(lVar3 + 0x3b0) = iVar13 + 1;
      plStack_3c8 = (long *)func_0x0c8cbaa0(lVar3,plVar16,uVar14);
    }
    lVar4 = func_0x049db9a0(plStack_3c8 + 0x2e);
    lVar3 = plVar10[9];
    if (plVar10[10] == lVar3) {
LAB_0495cdc0:
      plVar16 = (long *)plVar10[1];
      plVar12 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar12[2];
          bVar18 = plVar12 != (long *)*plVar10;
          plVar12 = plVar10;
        } while (bVar18);
      }
      else {
        do {
          plVar10 = plVar16;
          plVar16 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar10 == plStack_3d8) goto LAB_0495cdf1;
      goto LAB_0495c93e;
    }
    lStack_3d0 = lVar4 + 8;
    uVar14 = 0;
    plStack_3b8 = plVar10;
LAB_0495ca5d:
    param_2 = *(long **)(lVar3 + uVar14 * 0x28);
    plVar10 = (long *)(lVar3 + uVar14 * 0x28 + 8);
    iVar13 = (int)uVar14;
    if (param_2 == plVar10) goto LAB_0495ca25;
    lStack_3c0 = lVar3 + uVar14 * 0x28;
    plStack_430 = (long *)0x0;
    plVar16 = (long *)0x0;
    plStack_438 = (long *)0x0;
LAB_0495caae:
    lVar5 = func_0x0c8ba8f0(*(undefined8 *)(uVar17 + 8),param_2 + 4);
    if (lVar5 == 0) {
LAB_0495cbd0:
      plVar12 = (long *)param_2[1];
      if ((long *)param_2[1] != (long *)0x0) goto LAB_0495cbe0;
LAB_0495cc10:
      do {
        plVar15 = (long *)param_2[2];
        bVar18 = param_2 != (long *)*plVar15;
        param_2 = plVar15;
      } while (bVar18);
LAB_0495caa0:
      param_2 = plVar15;
      if (plVar15 == plVar10) break;
      goto LAB_0495caae;
    }
    if (plVar16 < plStack_438) {
      *plVar16 = lVar5;
      plVar16 = plVar16 + 1;
      plVar12 = (long *)param_2[1];
joined_r0x0495cae0:
      if (plVar12 == (long *)0x0) goto LAB_0495cc10;
LAB_0495cbe0:
      do {
        plVar15 = plVar12;
        plVar12 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
      goto LAB_0495caa0;
    }
    lVar3 = (long)plVar16 - (long)plStack_430;
    uVar14 = (lVar3 >> 3) + 1;
    param_1 = uVar17;
    if (uVar14 < 0x2000000000000000) {
      param_1 = (long)plStack_438 - (long)plStack_430;
      uVar9 = (long)param_1 >> 2;
      if ((ulong)((long)param_1 >> 2) <= uVar14) {
        uVar9 = uVar14;
      }
      if (0x7ffffffffffffff7 < param_1) {
        uVar9 = 0x1fffffffffffffff;
      }
      lStack_3a8 = lVar3;
      if (uVar9 < 0x2000000000000000) {
        lStack_3b0 = uVar9 * 8;
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
        if (lVar6 == 0) {
          FUN_0eec74c0(lStack_3b0,0);
        }
        *(long *)(lVar6 + lStack_3a8) = lVar5;
        plStack_438 = (long *)(lVar6 + uVar9 * 8);
        plVar16 = (long *)(lVar6 + lStack_3a8 + 8);
        plVar15 = (long *)(lVar6 + lStack_3a8 + (lVar3 >> 3) * -8);
        func_0x0eee2f00(plVar15,plStack_430);
        if (plStack_430 != (long *)0x0) {
          func_0x0412a280(plStack_430,param_1);
          plStack_430 = plVar15;
          goto LAB_0495cbd0;
        }
        plVar12 = (long *)param_2[1];
        plStack_430 = plVar15;
        goto joined_r0x0495cae0;
      }
      func_0x04882eb0();
    }
    func_0x049cca50();
LAB_0495d108:
    FUN_0eec74c0(0x3f8,0);
    uVar17 = param_1;
  } while( true );
  if (plStack_430 == plVar16) {
    if (plVar16 == (long *)0x0) goto LAB_0495ca25;
    uVar14 = (long)plStack_438 - (long)plVar16;
  }
  else {
    plStack_388 = plStack_3c8;
    bStack_380 = 0x26;
    uStack_37f = (undefined7)_DAT_0142bedc;
    uStack_378 = (undefined1)((ulong)_DAT_0142bedc >> 0x38);
    uStack_377 = (undefined7)_UNK_0142bee4;
    uStack_370 = 0x646c726f;
    uStack_36c = uStack_36c & 0xffffff00;
    uStack_368 = plStack_430;
    plStack_358 = plStack_438;
    lStack_350 = *(long *)(lStack_3c0 + 0x18);
    plVar10 = *(long **)(lVar4 + 0x10);
    iStack_348 = iVar13;
    if (plVar10 < *(long **)(lVar4 + 0x18)) {
      *plVar10 = (long)plStack_3c8;
      plVar10[3] = CONCAT44(uStack_36c,0x646c726f);
      plVar10[1] = CONCAT71(uStack_37f,0x26);
      plVar10[2] = CONCAT71(uStack_377,uStack_378);
      bStack_380 = 0;
      uStack_37f = 0;
      uStack_378 = 0;
      uStack_377 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      uStack_368._0_4_ = SUB84(plStack_430,0);
      uStack_368._4_4_ = (undefined4)((ulong)plStack_430 >> 0x20);
      uStack_360._0_4_ = SUB84(plVar16,0);
      uStack_360._4_4_ = (undefined4)((ulong)plVar16 >> 0x20);
      *(undefined4 *)(plVar10 + 4) = (undefined4)uStack_368;
      *(undefined4 *)((long)plVar10 + 0x24) = uStack_368._4_4_;
      *(undefined4 *)(plVar10 + 5) = (undefined4)uStack_360;
      *(undefined4 *)((long)plVar10 + 0x2c) = uStack_360._4_4_;
      plVar10[6] = (long)plStack_438;
      uStack_368 = (long *)0x0;
      uStack_360 = (long *)0x0;
      plStack_358 = (long *)0x0;
      *(int *)(plVar10 + 8) = iVar13;
      plVar10[7] = lStack_350;
      *(long **)(lVar4 + 0x10) = plVar10 + 9;
    }
    else {
      uStack_360 = plVar16;
      uVar7 = func_0x049cca60(lStack_3d0,&plStack_388);
      *(undefined8 *)(lVar4 + 0x10) = uVar7;
      if (uStack_368 != (long *)0x0) {
        uStack_360 = uStack_368;
        func_0x0412a280(uStack_368,(long)plStack_358 - (long)uStack_368);
      }
    }
    if ((bStack_380 & 1) == 0) goto LAB_0495ca25;
    plStack_430 = (long *)CONCAT44(uStack_36c,uStack_370);
    uVar14 = CONCAT71(uStack_37f,bStack_380) & 0xfffffffffffffffe;
  }
  func_0x0412a280(plStack_430,uVar14);
LAB_0495ca25:
  uVar14 = (ulong)(iVar13 + 1);
  lVar3 = plStack_3b8[9];
  uVar9 = (plStack_3b8[10] - lVar3 >> 3) * -0x3333333333333333;
  plVar10 = plStack_3b8;
  if (uVar9 < uVar14 || uVar9 - uVar14 == 0) goto LAB_0495cdc0;
  goto LAB_0495ca5d;
}



/* ---- referenced strings ----
 * 0x142bedc  minecraft:overworld
 * 0x14adbb4  minecraft:plains
 */
