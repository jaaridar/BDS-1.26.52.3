/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdaed110 (ELF vaddr 0xd9ed110)
 * Label: caller-of-callee
 * Body:  [[0daed110, 0daed7a1] [0daed7b0, 0daed88f]]
 * Ghidra: FUN_0daed110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0daed110(undefined4 *param_1,long *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uStack_180;
  long *plStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  uint uStack_bc;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined4 auStack_b0 [2];
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x0dafde20(&uStack_180);
  if (uStack_168._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)(CONCAT44(uStack_16c,uStack_170) + 0x78) + 0x60);
    iVar13 = *piVar14;
    while (iVar13 != (int)uStack_168) {
      piVar14 = piVar14 + 0x16;
      iVar13 = *piVar14;
    }
    lVar16 = *(long *)(piVar14 + 0xc);
    while ((long *)lVar16 != plStack_178) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar16 = *(long *)(piVar14 + 0xc);
    }
LAB_0daed18f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_168._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)(CONCAT44(uStack_16c,uStack_170) + 0x78) + 0x48);
      iVar13 = *piVar14;
      while (iVar13 != (int)uStack_168) {
        piVar14 = piVar14 + 0x1a;
        iVar13 = *piVar14;
      }
      goto LAB_0daed18f;
    }
    if (uStack_168._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_16c,uStack_170) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  if ((DAT_0f7335e0 == '\0') && (iVar13 = func_0x04108328(&DAT_0f7335e0), iVar13 != 0)) {
    func_0x0da9a9f0(0xf7335c8);
    func_0x0410844d(&DAT_0f7335e0);
  }
  if (param_4 == (long *)0x0) {
    uVar19 = 0x811c9dc5;
  }
  else {
    uVar15 = (ulong)((uint)param_4 & 3);
    if (param_4 < (long *)0x4) {
      uVar19 = 0x811c9dc5;
      uVar18 = 0;
    }
    else {
      uVar19 = 0x811c9dc5;
      uVar18 = 0;
      do {
        uVar19 = ((int)*(char *)((long)param_3 + uVar18 + 3) ^
                 ((int)*(char *)((long)param_3 + uVar18 + 2) ^
                 ((int)*(char *)((long)param_3 + uVar18 + 1) ^
                 ((int)*(char *)((long)param_3 + uVar18) ^ uVar19) * 0x1000193) * 0x1000193) *
                 0x1000193) * 0x1000193;
        uVar18 = uVar18 + 4;
      } while (((ulong)param_4 & 0xfffffffffffffffc) != uVar18);
    }
    if (uVar15 != 0) {
      uVar20 = 0;
      do {
        uVar19 = ((int)*(char *)((long)param_3 + uVar20 + uVar18) ^ uVar19) * 0x1000193;
        uVar20 = uVar20 + 1;
      } while (uVar15 != uVar20);
    }
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar19;
  lVar16 = *param_2;
  uStack_180 = func_0x0da9a900(lVar16 + 0x18);
  plStack_178 = (long *)(lVar16 + 0x18);
  FUN_0ed621a0(&uStack_180,*(undefined4 *)((long)param_2 + 0x2c));
  plStack_178 = param_2 + 1;
  uStack_180 = CONCAT62(uStack_180._2_6_,0x10);
  uStack_170 = *(undefined4 *)((long)param_2 + 0x2c);
  uStack_168 = (long *)0x0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  if (param_4 < (long *)0xfffffffffffffff8) {
    if (param_4 < (long *)0x17) {
      uStack_140 = CONCAT71(uStack_140._1_7_,(char)param_4 * '\x02');
      lVar16 = (long)&uStack_140 + 1;
      if (param_4 != (long *)0x0) goto LAB_0daed314;
    }
    else {
      uVar15 = 0x1a;
      if (((ulong)param_4 | 7) != 0x17) {
        uVar15 = ((ulong)param_4 | 7) + 1;
      }
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (lVar16 == 0) {
        func_0x0eec74c0(uVar15,0);
      }
      uStack_140 = uVar15 | 1;
      plStack_138 = param_4;
      lStack_130 = lVar16;
LAB_0daed314:
      func_0x0eee2f00(lVar16,param_3,param_4);
    }
    *(undefined1 *)(lVar16 + (long)param_4) = 0;
    param_4 = &lStack_128;
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_f8 = 0x3f600000;
    func_0x048afb10(param_4,8);
    uStack_d0 = 0;
    lStack_c8 = 0;
    lStack_e0 = 0;
    uStack_d8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_c0 = 0xff00;
    uStack_bc = uStack_bc & 0xffffff00;
    uStack_b8 = uStack_b8 & 0xffffff00;
    uStack_b4 = 0;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar17 = (long)&UNK_0f48a6e8;
    if (uStack_168 != (long *)0x0) {
      lVar16 = *uStack_168;
      uStack_168 = plVar17;
      (**(code **)(lVar16 + 8))();
      plVar17 = uStack_168;
    }
    uStack_168 = plVar17;
    auStack_b0[0] = uStack_170;
    plStack_a8 = (long *)0x0;
    uStack_a0 = (long *)((ulong)uStack_a0._4_4_ << 0x20);
    uStack_98 = 1;
    uStack_90 = 0;
    puStack_88 = &UNK_0d8d78d0;
    puStack_80 = &SUB_048b06d0;
    puStack_78 = &SUB_0d8d7560;
    puStack_70 = &UNK_0dafe800;
    puStack_68 = &UNK_0dafea20;
    uStack_60 = 0;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    func_0x048b05a0(plStack_178,auStack_b0);
    plVar17 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar16 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        FUN_0412c2d0(plVar17);
      }
    }
    param_3 = plStack_178;
    if (DAT_0f550a20 == '\0') goto LAB_0daed85f;
  }
  else {
    FUN_04882e30();
LAB_0daed85f:
    iVar13 = func_0x04108328(&DAT_0f550a20);
    if (iVar13 != 0) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
  }
  auStack_b0[0] = _DAT_0f550a0c;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar16 = lStack_160;
  plVar2 = uStack_168;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0ef439d0;
  uStack_168 = (long *)0x0;
  lStack_160 = 0;
  plVar17[3] = (long)plVar2;
  plVar17[4] = lVar16;
  plVar17[7] = lStack_148;
  plVar17[5] = lStack_158;
  plVar17[6] = lStack_150;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar17[10] = lStack_130;
  plVar17[8] = uStack_140;
  plVar17[9] = (long)plStack_138;
  uStack_140 = 0;
  plStack_138 = (long *)0x0;
  lStack_130 = 0;
  plVar17[0xb] = lStack_128;
  plVar17[0xc] = lStack_120;
  plVar17[0xd] = lStack_118;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  plVar17[0xe] = lStack_110;
  plVar17[0xf] = lStack_108;
  plVar17[0x10] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  *(undefined4 *)(plVar17 + 0x11) = uStack_f8;
  plVar17[0x12] = lStack_f0;
  plVar17[0x13] = lStack_e8;
  plVar17[0x14] = lStack_e0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  plVar17[0x17] = lStack_c8;
  *(undefined4 *)(plVar17 + 0x15) = (undefined4)uStack_d8;
  *(undefined4 *)((long)plVar17 + 0xac) = uStack_d8._4_4_;
  *(undefined4 *)(plVar17 + 0x16) = (undefined4)uStack_d0;
  *(undefined4 *)((long)plVar17 + 0xb4) = uStack_d0._4_4_;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  *(ulong *)((long)plVar17 + 0xc5) = CONCAT17(uStack_b4,CONCAT43(uStack_b8,uStack_bc._1_3_));
  plVar17[0x18] = CONCAT44(uStack_bc,CONCAT22(uStack_be,uStack_c0));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  plStack_a8 = plVar17 + 3;
  uStack_a0 = plVar17;
  FUN_048afd20(param_3,auStack_b0);
  plVar17 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_a0 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      FUN_0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar17);
    }
  }
  lVar16 = param_3[2];
  iVar13 = *(int *)((long)param_3 + 0x1c);
  if (iVar13 == 2) {
    piVar14 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
    iVar13 = *piVar14;
    while (iVar13 != (int)param_3[3]) {
      piVar14 = piVar14 + 0x16;
      iVar13 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != param_3[1]; piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar13 != 1) {
      if (iVar13 == 0) {
        *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)uStack_180 << 0x10;
      }
      goto LAB_0daed7bd;
    }
    piVar14 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
    iVar13 = *piVar14;
    while (iVar13 != (int)param_3[3]) {
      piVar14 = piVar14 + 0x1a;
      iVar13 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | (int)uStack_180 << 0x10;
LAB_0daed7bd:
  *(char *)(param_1 + 0xc) = (char)param_2[6];
  lVar16 = *param_2;
  uVar3 = *(undefined4 *)((long)param_2 + 4);
  lVar9 = param_2[1];
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  lVar10 = param_2[2];
  uVar5 = *(undefined4 *)((long)param_2 + 0x14);
  lVar11 = param_2[3];
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar7 = *(undefined4 *)((long)param_2 + 0x24);
  lVar12 = param_2[5];
  uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[8] = (int)param_2[4];
  param_1[9] = uVar7;
  param_1[10] = (int)lVar12;
  param_1[0xb] = uVar8;
  param_1[4] = (int)lVar10;
  param_1[5] = uVar5;
  param_1[6] = (int)lVar11;
  param_1[7] = uVar6;
  *param_1 = (int)lVar16;
  param_1[1] = uVar3;
  param_1[2] = (int)lVar9;
  param_1[3] = uVar4;
  func_0x048b0bc0(&uStack_168);
  return param_1;
}


