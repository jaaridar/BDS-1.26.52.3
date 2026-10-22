/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8630f20 (ELF vaddr 0x8530f20)
 * Label: caller-of-callee
 * Body:  [[08630f20, 08631551] [08631560, 0863167c]]
 * Ghidra: FUN_08630f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_08630f20(undefined4 *param_1,long *param_2,long *param_3,long *param_4,undefined2 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  int *piVar18;
  ulong uVar19;
  undefined *puStack_180;
  long *plStack_178;
  undefined4 uStack_170;
  long *plStack_168;
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
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if ((DAT_0f5d8188 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d8188), iVar11 != 0)) {
    func_0x0862e5c0();
    func_0x0410844d(&DAT_0f5d8188);
  }
  if (param_4 == (long *)0x0) {
    uVar16 = 0x811c9dc5;
  }
  else {
    uVar12 = (ulong)((uint)param_4 & 3);
    if (param_4 < (long *)0x4) {
      uVar16 = 0x811c9dc5;
      uVar15 = 0;
    }
    else {
      uVar16 = 0x811c9dc5;
      uVar15 = 0;
      do {
        uVar16 = ((int)*(char *)((long)param_3 + uVar15 + 3) ^
                 ((int)*(char *)((long)param_3 + uVar15 + 2) ^
                 ((int)*(char *)((long)param_3 + uVar15 + 1) ^
                 ((int)*(char *)((long)param_3 + uVar15) ^ uVar16) * 0x1000193) * 0x1000193) *
                 0x1000193) * 0x1000193;
        uVar15 = uVar15 + 4;
      } while (((ulong)param_4 & 0xfffffffffffffffc) != uVar15);
    }
    if (uVar12 != 0) {
      uVar19 = 0;
      do {
        uVar16 = ((int)*(char *)((long)param_3 + uVar19 + uVar15) ^ uVar16) * 0x1000193;
        uVar19 = uVar19 + 1;
      } while (uVar12 != uVar19);
    }
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar16;
  lVar13 = *param_2;
  if ((DAT_0f5d8220 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5d8220), iVar11 != 0)) {
    func_0x0862e700();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d81a0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d8220);
  }
  plVar14 = param_2 + 1;
  plStack_178 = (long *)(lVar13 + 0x18);
  plVar17 = (long *)(*(long *)(lVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5d81a0 + 4)) * 8);
  do {
    lVar1 = *plVar17;
    if (lVar1 == -1) goto LAB_08631050;
    plVar17 = (long *)(*(long *)(lVar13 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5d81a0 + 4));
  if (plVar17 == *(long **)(lVar13 + 0x38)) {
LAB_08631050:
    puStack_180 = &DAT_0f5d81a0;
  }
  else {
    puStack_180 = (undefined *)plVar17[2];
  }
  func_0x0ed621a0(&puStack_180,*(undefined4 *)((long)param_2 + 0x2c));
  puStack_180 = (undefined *)CONCAT62(puStack_180._2_6_,param_5);
  uStack_170 = *(undefined4 *)((long)param_2 + 0x2c);
  plStack_168 = (long *)0x0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plStack_178 = plVar14;
  if (param_4 < (long *)0xfffffffffffffff8) {
    if (param_4 < (long *)0x17) {
      uStack_140 = CONCAT71(uStack_140._1_7_,(char)param_4 * '\x02');
      lVar13 = (long)&uStack_140 + 1;
      if (param_4 != (long *)0x0) goto LAB_0863111c;
    }
    else {
      uVar12 = 0x1a;
      if (((ulong)param_4 | 7) != 0x17) {
        uVar12 = ((ulong)param_4 | 7) + 1;
      }
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
      if (lVar13 == 0) {
        func_0x0eec74c0(uVar12,0);
      }
      uStack_140 = uVar12 | 1;
      plStack_138 = param_4;
      lStack_130 = lVar13;
LAB_0863111c:
      memcpy(lVar13,param_3,param_4);
    }
    *(undefined1 *)(lVar13 + (long)param_4) = 0;
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
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar14 = (long)&UNK_0f102db8;
    if (plStack_168 != (long *)0x0) {
      lVar13 = *plStack_168;
      plStack_168 = plVar14;
      (**(code **)(lVar13 + 8))();
      plVar14 = plStack_168;
    }
    plStack_168 = plVar14;
    auStack_b0[0] = uStack_170;
    plStack_a8 = (long *)0x0;
    uStack_a0 = (long *)((ulong)uStack_a0._4_4_ << 0x20);
    uStack_98 = 1;
    uStack_90 = 0;
    puStack_88 = &UNK_086316f0;
    puStack_80 = &SUB_048b06d0;
    puStack_78 = &UNK_07d6ea60;
    puStack_70 = &UNK_08631700;
    puStack_68 = &UNK_086318c0;
    uStack_60 = 0;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    func_0x048b05a0(plStack_178,auStack_b0);
    plVar14 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_50 + 1;
      lVar13 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        func_0x0412c2d0(plVar14);
      }
    }
    param_3 = plStack_178;
    if (DAT_0f550a20 == '\0') goto LAB_0863164c;
  }
  else {
    func_0x04882e30();
LAB_0863164c:
    iVar11 = func_0x04108328(&DAT_0f550a20);
    if (iVar11 != 0) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
  }
  auStack_b0[0] = _DAT_0f550a0c;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar13 = lStack_160;
  plVar17 = plStack_168;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_168 = (long *)0x0;
  lStack_160 = 0;
  plVar14[3] = (long)plVar17;
  plVar14[4] = lVar13;
  plVar14[7] = lStack_148;
  plVar14[5] = lStack_158;
  plVar14[6] = lStack_150;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar14[10] = lStack_130;
  plVar14[8] = uStack_140;
  plVar14[9] = (long)plStack_138;
  uStack_140 = 0;
  plStack_138 = (long *)0x0;
  lStack_130 = 0;
  plVar14[0xb] = lStack_128;
  plVar14[0xc] = lStack_120;
  plVar14[0xd] = lStack_118;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  plVar14[0xe] = lStack_110;
  plVar14[0xf] = lStack_108;
  plVar14[0x10] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_f8;
  plVar14[0x12] = lStack_f0;
  plVar14[0x13] = lStack_e8;
  plVar14[0x14] = lStack_e0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  plVar14[0x17] = lStack_c8;
  *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_d8;
  *(undefined4 *)((long)plVar14 + 0xac) = uStack_d8._4_4_;
  *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_d0;
  *(undefined4 *)((long)plVar14 + 0xb4) = uStack_d0._4_4_;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_b4,CONCAT43(uStack_b8,uStack_bc._1_3_));
  plVar14[0x18] = CONCAT44(uStack_bc,CONCAT22(uStack_be,uStack_c0));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  plStack_a8 = plVar14 + 3;
  uStack_a0 = plVar14;
  func_0x048afd20(param_3,auStack_b0);
  plVar14 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar17 = uStack_a0 + 1;
    lVar13 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      func_0x0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_40 + 1;
    lVar13 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar14);
    }
  }
  lVar13 = param_3[2];
  iVar11 = *(int *)((long)param_3 + 0x1c);
  if (iVar11 == 2) {
    piVar18 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar11 = *piVar18;
    while (iVar11 != (int)param_3[3]) {
      piVar18 = piVar18 + 0x16;
      iVar11 = *piVar18;
    }
    for (; *(long *)(piVar18 + 0xc) != param_3[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
    }
  }
  else {
    if (iVar11 != 1) {
      if (iVar11 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_180 << 0x10;
      }
      goto LAB_0863156d;
    }
    piVar18 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
    iVar11 = *piVar18;
    while (iVar11 != (int)param_3[3]) {
      piVar18 = piVar18 + 0x1a;
      iVar11 = *piVar18;
    }
  }
  piVar18[4] = piVar18[4] | (int)puStack_180 << 0x10;
LAB_0863156d:
  *(char *)(param_1 + 0xc) = (char)param_2[6];
  lVar13 = *param_2;
  uVar2 = *(undefined4 *)((long)param_2 + 4);
  lVar1 = param_2[1];
  uVar3 = *(undefined4 *)((long)param_2 + 0xc);
  lVar8 = param_2[2];
  uVar4 = *(undefined4 *)((long)param_2 + 0x14);
  lVar9 = param_2[3];
  uVar5 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar6 = *(undefined4 *)((long)param_2 + 0x24);
  lVar10 = param_2[5];
  uVar7 = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[8] = (int)param_2[4];
  param_1[9] = uVar6;
  param_1[10] = (int)lVar10;
  param_1[0xb] = uVar7;
  param_1[4] = (int)lVar8;
  param_1[5] = uVar4;
  param_1[6] = (int)lVar9;
  param_1[7] = uVar5;
  *param_1 = (int)lVar13;
  param_1[1] = uVar2;
  param_1[2] = (int)lVar1;
  param_1[3] = uVar3;
  func_0x048b0bc0(&plStack_168);
  return param_1;
}


