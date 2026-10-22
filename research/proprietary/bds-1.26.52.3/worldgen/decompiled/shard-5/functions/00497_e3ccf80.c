/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4ccf80 (ELF vaddr 0xe3ccf80)
 * Label: caller-of-callee
 * Body:  [[0e4ccf80, 0e4cd590] [0e4cd5a0, 0e4cd683]]
 * Ghidra: FUN_0e4ccf80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0e4ccf80(undefined4 *param_1,undefined4 *param_2,ulong *param_3,ulong param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  long *plStack_40;
  
  if (param_4 == 0) {
    uVar19 = 0x811c9dc5;
  }
  else {
    uVar14 = (ulong)((uint)param_4 & 3);
    if (param_4 < 4) {
      uVar19 = 0x811c9dc5;
      uVar17 = 0;
    }
    else {
      uVar19 = 0x811c9dc5;
      uVar17 = 0;
      do {
        uVar19 = ((int)*(char *)((long)param_3 + uVar17 + 3) ^
                 ((int)*(char *)((long)param_3 + uVar17 + 2) ^
                 ((int)*(char *)((long)param_3 + uVar17 + 1) ^
                 ((int)*(char *)((long)param_3 + uVar17) ^ uVar19) * 0x1000193) * 0x1000193) *
                 0x1000193) * 0x1000193;
        uVar17 = uVar17 + 4;
      } while ((param_4 & 0xfffffffffffffffc) != uVar17);
    }
    if (uVar14 != 0) {
      uVar20 = 0;
      do {
        uVar19 = ((int)*(char *)((long)param_3 + uVar20 + uVar17) ^ uVar19) * 0x1000193;
        uVar20 = uVar20 + 1;
      } while (uVar14 != uVar20);
    }
  }
  param_2[10] = 2;
  param_2[0xb] = uVar19;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_158 = 0;
  lStack_150 = 0;
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  uStack_118 = 0x3f600000;
  FUN_048afb10(&lStack_148,8);
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_e0 = 0xff00;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_d8 = uStack_d8 & 0xffffff00;
  uStack_d4 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f4be7b0;
  if (plStack_188 != (long *)0x0) {
    lVar16 = *plStack_188;
    plStack_188 = plVar15;
    (**(code **)(lVar16 + 8))();
    plVar15 = plStack_188;
  }
  plStack_188 = plVar15;
  if (param_4 < 0xfffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_d0 = CONCAT71(uStack_d0._1_7_,(char)param_4 * '\x02');
      lVar16 = (long)&uStack_d0 + 1;
      if (param_4 != 0) goto LAB_0e4cd510;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_d0._1_1_ = 0;
    }
    else {
      uVar14 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar14 = (param_4 | 7) + 1;
      }
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
      if (lVar16 == 0) {
        func_0x0eec74c0(uVar14,0);
      }
      uStack_d0 = uVar14 | 1;
      plStack_c8 = (long *)param_4;
      plStack_c0 = (long *)lVar16;
LAB_0e4cd510:
      func_0x0eee2f00(lVar16,param_3,param_4);
      *(undefined1 *)(lVar16 + param_4) = 0;
    }
    if ((uStack_160 & 1) != 0) {
      func_0x0412a280(lStack_150,uStack_160 & 0xfffffffffffffffe);
    }
    param_3 = &uStack_160;
    lStack_150 = (long)plStack_c0;
    uStack_160 = uStack_d0;
    uStack_158 = (ulong)plStack_c8;
    if (DAT_0f7569d8 == '\0') goto LAB_0e4cd622;
  }
  else {
    func_0x04882e30();
LAB_0e4cd622:
    iVar13 = func_0x04108328(&DAT_0f7569d8);
    if (iVar13 != 0) {
      func_0x0e573ad0(0xf7569c0);
      FUN_0410844d(&DAT_0f7569d8);
    }
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,param_2[0xb]);
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,3);
  uStack_b8 = 1;
  uStack_b0 = 0;
  puStack_a8 = &UNK_0e573870;
  puStack_a0 = &SUB_048b06d0;
  puStack_98 = &UNK_0e573280;
  puStack_90 = &UNK_0e574670;
  puStack_88 = &UNK_0e574680;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x048b05a0(param_2 + 2,&uStack_d0);
  plVar15 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar15);
    }
  }
  uStack_68 = param_2[2];
  uStack_64 = param_2[3];
  uStack_60 = param_2[4];
  uStack_5c = param_2[5];
  uStack_58 = param_2[6];
  uStack_54 = param_2[7];
  iStack_50 = param_2[8];
  iStack_4c = param_2[9];
  if ((DAT_0f550a20 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550a20), iVar13 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,_DAT_0f550a0c);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar16 = lStack_180;
  plVar1 = plStack_188;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0ef439d0;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  plVar15[3] = (long)plVar1;
  plVar15[4] = lVar16;
  plVar15[7] = lStack_168;
  plVar15[5] = lStack_178;
  plVar15[6] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  plVar15[10] = param_3[2];
  uVar14 = param_3[1];
  plVar15[8] = *param_3;
  plVar15[9] = uVar14;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar15[0xb] = lStack_148;
  plVar15[0xc] = lStack_140;
  plVar15[0xd] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar15[0xe] = lStack_130;
  plVar15[0xf] = lStack_128;
  plVar15[0x10] = lStack_120;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  *(undefined4 *)(plVar15 + 0x11) = uStack_118;
  plVar15[0x12] = lStack_110;
  plVar15[0x13] = lStack_108;
  plVar15[0x14] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  plVar15[0x17] = lStack_e8;
  *(undefined4 *)(plVar15 + 0x15) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar15 + 0xac) = uStack_f8._4_4_;
  *(undefined4 *)(plVar15 + 0x16) = (undefined4)uStack_f0;
  *(undefined4 *)((long)plVar15 + 0xb4) = uStack_f0._4_4_;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_d4,CONCAT43(uStack_d8,uStack_dc._1_3_));
  plVar15[0x18] = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  plStack_c8 = plVar15 + 3;
  plStack_c0 = plVar15;
  func_0x048afd20(&uStack_68,&uStack_d0);
  plVar15 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar15);
    }
  }
  lVar16 = CONCAT44(uStack_54,uStack_58);
  if (iStack_4c == 2) {
    piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
    iVar13 = *piVar18;
    while (iVar13 != iStack_50) {
      piVar18 = piVar18 + 0x16;
      iVar13 = *piVar18;
    }
    for (; *(long *)(piVar18 + 0xc) != CONCAT44(uStack_5c,uStack_60);
        piVar18 = *(int **)(piVar18 + 0xe)) {
    }
  }
  else {
    if (iStack_4c != 1) {
      if (iStack_4c == 0) {
        *(byte *)(lVar16 + 0x1a) = *(byte *)(lVar16 + 0x1a) | 9;
      }
      goto LAB_0e4cd5ae;
    }
    piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
    iVar13 = *piVar18;
    while (iVar13 != iStack_50) {
      piVar18 = piVar18 + 0x1a;
      iVar13 = *piVar18;
    }
  }
  *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 9;
LAB_0e4cd5ae:
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  func_0x048b0bc0(&plStack_188);
  return param_1;
}


