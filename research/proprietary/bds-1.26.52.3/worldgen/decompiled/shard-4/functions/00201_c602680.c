/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc702680 (ELF vaddr 0xc602680)
 * Label: caller-of-callee
 * Body:  [[0c702680, 0c7030b9] [0c7030c0, 0c70365d]]
 * Ghidra: FUN_0c702680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c702680(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  long *plStack_140;
  long lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  char cStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0ecdb580();
  if ((DAT_0f6ea670 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea670), iVar8 != 0)) {
    func_0x0c704020();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6ea5f0,0xf53dab8);
    func_0x0410844d(&DAT_0f6ea670);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6ea5f0 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0c702700;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f6ea5f0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0c702700:
    puVar9 = &DAT_0f6ea5f0;
    if (iRam000000000f6ea650 != -0x2b3da790) goto LAB_0c70276d;
LAB_0c70272b:
    lVar13 = *(long *)(puVar9 + 0x68);
    if (lVar13 == 0) goto LAB_0c70276d;
    bVar17 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar14 = lVar13 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar17) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0c7047f0(&lStack_130,param_1,lVar14,uVar16);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0c70272b;
LAB_0c70276d:
    func_0x0c7047f0(&lStack_130,param_1,&UNK_0148a5ef,0xc);
  }
  if (cStack_100 != '\0') {
    return;
  }
  uStack_108 = 0x1e1bc4d500000004;
  if ((DAT_0f6ea690 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea690), iVar8 != 0)) {
    func_0x0c704130();
    func_0x0410844d(&DAT_0f6ea690);
  }
  uStack_1e8 = (undefined *)CONCAT44(uStack_1e8._4_4_,uStack_108._4_4_);
  uStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)((ulong)uStack_1d8._4_4_ << 0x20);
  uStack_1d0 = 1;
  puStack_1c8 = &SUB_048aead0;
  puStack_1c0 = &UNK_0c7055b0;
  puStack_1b8 = &UNK_0c7055c0;
  uStack_1b0 = 0;
  uStack_1a8 = (ulong)uStack_1a8._4_4_ << 0x20;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  FUN_049057f0(&uStack_128,&uStack_1e8);
  func_0x048aea50(&uStack_1e8);
  uStack_158 = uStack_118;
  uStack_154 = uStack_114;
  iStack_150 = iStack_110;
  iStack_14c = iStack_10c;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f3d74f0;
  if ((DAT_0f551bc8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551bc8), iVar8 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_1e8 = (undefined *)CONCAT44(uStack_1e8._4_4_,_DAT_0f551bb4);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c48;
  uStack_1e0 = plVar11 + 3;
  plVar11[3] = (long)puVar10;
  plVar11[4] = 0;
  *(undefined1 *)(plVar11 + 5) = 0xff;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  uStack_1d8 = plVar11;
  func_0x048afd20(&uStack_168,&uStack_1e8);
  plVar11 = uStack_1d8;
  if (uStack_1d8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1d8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f6ea690 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea690), iVar8 != 0)) {
    func_0x0c704130();
    func_0x0410844d(&DAT_0f6ea690);
  }
  if (iStack_10c == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_114,uStack_118) + 0x78) + 0x60);
    iVar8 = *piVar12;
    while (iVar8 != iStack_110) {
      piVar12 = piVar12 + 0x16;
      iVar8 = *piVar12;
    }
    lVar13 = *(long *)(piVar12 + 0xc);
    while (lVar13 != CONCAT44(uStack_11c,uStack_120)) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar13 = *(long *)(piVar12 + 0xc);
    }
LAB_0c7029cf:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
  }
  else {
    if (iStack_10c == 1) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_114,uStack_118) + 0x78) + 0x48);
      iVar8 = *piVar12;
      while (iVar8 != iStack_110) {
        piVar12 = piVar12 + 0x1a;
        iVar8 = *piVar12;
      }
      goto LAB_0c7029cf;
    }
    if (iStack_10c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_114,uStack_118) + 0x18);
      *puVar2 = *puVar2 | 0x20000;
    }
  }
  if ((DAT_0f6ea690 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea690), iVar8 != 0)) {
    func_0x0c704130();
    func_0x0410844d(&DAT_0f6ea690);
  }
  uStack_1e8 = (undefined *)CONCAT44(uStack_1e8._4_4_,0xbf75c8f8);
  uStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,1);
  uStack_1d0 = 0;
  puStack_1c8 = &UNK_0c705ec0;
  puStack_1c0 = &SUB_048b06d0;
  puStack_1b8 = &UNK_0c708310;
  uStack_1b0 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  FUN_049057f0(&uStack_128,&uStack_1e8);
  func_0x048aea50(&uStack_1e8);
  uStack_158 = uStack_118;
  uStack_154 = uStack_114;
  iStack_150 = iStack_110;
  iStack_14c = iStack_10c;
  uStack_168 = CONCAT44(uStack_124,uStack_128);
  uStack_160 = CONCAT44(uStack_11c,uStack_120);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f3d74f0;
  if ((DAT_0f551cb0 == '\0') && (iVar8 = FUN_04108328(&DAT_0f551cb0), iVar8 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_1e8 = (undefined *)CONCAT44(uStack_1e8._4_4_,_DAT_0f551c9c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c98;
  uStack_1e0 = plVar11 + 3;
  plVar11[3] = (long)puVar10;
  *(undefined1 *)(plVar11 + 4) = 0xff;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  uStack_1d8 = plVar11;
  func_0x048afd20(&uStack_168,&uStack_1e8);
  plVar11 = uStack_1d8;
  if (uStack_1d8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1d8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      func_0x0412c2d0(plVar11);
    }
  }
  iVar8 = (int)uStack_108;
  uVar5 = uStack_108._4_4_;
  puStack_1c8 = (undefined1 *)0x0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_190 = 0;
  uStack_188 = 0;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puStack_1c0 = (undefined *)0x0;
  puStack_1b8 = (undefined *)0x0;
  lStack_170 = 0;
  uStack_1e0 = (long *)0xffffffffffffffff;
  uStack_1d8 = (long *)0x0;
  uStack_1d0 = 0xff;
  uStack_1e8 = &UNK_0f4e3c70;
  func_0x041679a0(&puStack_1c8);
  puStack_1c0 = (undefined *)FUN_041681f0(&puStack_1c8,0xf547a30);
  puStack_1b8 = (undefined *)FUN_041681f0(&puStack_1c8,0xf547770);
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  lStack_190 = 0;
  uStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 1;
  uStack_a8 = (undefined4)uStack_1e0;
  uStack_a4 = uStack_1e0._4_4_;
  uStack_a0 = (undefined4)uStack_1d8;
  uStack_9c = uStack_1d8._4_4_;
  uStack_98 = (undefined1)uStack_1d0;
  puStack_b0 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_90,&puStack_1c8);
  lStack_88 = (long)puStack_1c0;
  lStack_80 = (long)puStack_1b8;
  uStack_78 = (undefined4)uStack_1b0;
  uStack_74 = uStack_1b0._4_4_;
  uStack_70 = (undefined4)uStack_1a8;
  uStack_6c = uStack_1a8._4_4_;
  lStack_68 = lStack_1a0;
  plStack_60 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plStack_198[1] = plStack_198[1] + 1;
    UNLOCK();
  }
  lStack_58 = lStack_190;
  if ((uStack_188 & 1) == 0) {
    lStack_40 = lStack_178;
    uStack_50 = uStack_188;
    lStack_48 = lStack_180;
  }
  else {
    func_0x0412e5e0(&uStack_50,lStack_178,lStack_180);
  }
  lStack_38 = lStack_170;
  uStack_f0 = 0xffffffffffffffff;
  uStack_e8 = 0;
  uStack_e0 = 0xff;
  puStack_f8 = &UNK_0f4e3d70;
  uStack_d8 = 0;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f0fb8c0;
  plVar1 = plVar11 + 3;
  *(undefined4 *)(plVar11 + 4) = uStack_a8;
  *(undefined4 *)((long)plVar11 + 0x24) = uStack_a4;
  *(undefined4 *)(plVar11 + 5) = uStack_a0;
  *(undefined4 *)((long)plVar11 + 0x2c) = uStack_9c;
  *(undefined1 *)(plVar11 + 6) = uStack_98;
  plVar11[3] = (long)&UNK_0f4e3c70;
  FUN_04167a20(plVar11 + 7,auStack_90);
  plVar11[8] = lStack_88;
  plVar11[9] = lStack_80;
  plVar11[10] = CONCAT44(uStack_74,uStack_78);
  plVar11[0xb] = CONCAT44(uStack_6c,uStack_70);
  plVar11[0xc] = lStack_68;
  plVar11[0xd] = (long)plStack_60;
  lStack_68 = 0;
  plStack_60 = (long *)0x0;
  plVar11[0xe] = lStack_58;
  plVar11[0x11] = lStack_40;
  plVar11[0xf] = uStack_50;
  plVar11[0x10] = lStack_48;
  uStack_50 = 0;
  lStack_48 = 0;
  lStack_40 = 0;
  plVar11[0x12] = lStack_38;
  uStack_c0 = 0;
  uStack_b8 = (long *)0x0;
  plStack_d0 = plVar1;
  plStack_c8 = plVar11;
  if (iVar8 == 4) {
    if ((DAT_0f6ea670 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea670), iVar8 != 0)) {
      func_0x0c704020();
      __cxa_atexit(&UNK_048ae800,&DAT_0f6ea5f0,0xf53dab8);
      func_0x0410844d(&DAT_0f6ea670);
    }
    plVar11 = (long *)(*(long *)(lStack_130 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_130 + 0x20) -
                                           *(long *)(lStack_130 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f6ea5f0 + 4)) * 8);
    do {
      lVar13 = *plVar11;
      if (lVar13 == -1) goto LAB_0c702f38;
      plVar11 = (long *)(*(long *)(lStack_130 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_130 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f6ea5f0 + 4));
    if (plVar11 == *(long **)(lStack_130 + 0x38)) {
LAB_0c702f38:
      puVar9 = &DAT_0f6ea5f0;
    }
    else {
      puVar9 = (undefined *)plVar11[2];
    }
    lVar13 = func_0x048b1040(lStack_130 + 0x18,puVar9,uVar5,1);
    if (lVar13 == 0) {
      uStack_168 = 0;
      uStack_160 = 0;
      func_0x048b10d0(&uStack_168);
      lVar14 = *(long *)(uStack_168 + 0x38);
      lVar13 = uStack_168;
      if (lVar14 == 0) goto LAB_0c70308b;
LAB_0c7030b0:
      do {
        lVar13 = lVar14;
        lVar14 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          uStack_168 = 0;
          uStack_160 = 0;
          func_0x048b10d0(&uStack_168);
          lVar14 = uStack_168;
        }
      } while (lVar14 != 0);
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) != 0) goto LAB_0c7030b0;
LAB_0c70308b:
      uStack_168 = 0;
      uStack_160 = 0;
      func_0x048b10d0(&uStack_168);
      lVar14 = uStack_168;
      if (uStack_168 != 0) goto LAB_0c7030b0;
    }
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if (iVar8 != 1) goto LAB_0c70317c;
    if ((DAT_0f6ea670 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea670), iVar8 != 0)) {
      func_0x0c704020();
      __cxa_atexit(&UNK_048ae800,&DAT_0f6ea5f0,0xf53dab8);
      func_0x0410844d(&DAT_0f6ea670);
    }
    plVar11 = (long *)(*(long *)(lStack_130 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_130 + 0x20) -
                                           *(long *)(lStack_130 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f6ea5f0 + 4)) * 8);
    do {
      lVar13 = *plVar11;
      if (lVar13 == -1) goto LAB_0c702eb8;
      plVar11 = (long *)(*(long *)(lStack_130 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_130 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f6ea5f0 + 4));
    if (plVar11 == *(long **)(lStack_130 + 0x38)) {
LAB_0c702eb8:
      puVar9 = &DAT_0f6ea5f0;
    }
    else {
      puVar9 = (undefined *)plVar11[2];
    }
    lVar13 = FUN_048b0c90(lStack_130 + 0x18,puVar9,uVar5,1);
    if (lVar13 == 0) {
      uStack_168 = 0;
      uStack_160 = 0;
      func_0x048b0d20(&uStack_168);
      lVar13 = uStack_168;
    }
    lVar13 = *(long *)(lVar13 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  *(undefined1 *)(puVar10 + 3) = uStack_e0;
  puVar10[1] = uStack_f0;
  puVar10[2] = uStack_e8;
  *puVar10 = &UNK_0f4e3d70;
  puVar10[4] = uStack_d8;
  puVar10[5] = plStack_d0;
  puVar10[6] = plStack_c8;
  plStack_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((long)puVar10 + 0x3c) = uStack_c0._4_4_;
  *(undefined4 *)(puVar10 + 8) = (undefined4)uStack_b8;
  *(undefined4 *)((long)puVar10 + 0x44) = uStack_b8._4_4_;
  uStack_c0 = 0;
  uStack_b8 = (long *)0x0;
  plVar11 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
LAB_0c70317c:
  puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (puVar15 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x70,0);
  }
  uVar4 = _UNK_013d63f9;
  *(ulong *)((long)puVar15 + 0x5b) = CONCAT35(_UNK_013d63f6,_DAT_013d63f1);
  *(undefined8 *)((long)puVar15 + 99) = uVar4;
  uVar4 = CONCAT53(_DAT_013d63f1,_UNK_013d63ee);
  *(undefined8 *)(puVar15 + 0x14) = _DAT_013d63e6;
  *(undefined8 *)(puVar15 + 0x16) = uVar4;
  uVar4 = _UNK_013d63de;
  *(undefined8 *)(puVar15 + 0x10) = _DAT_013d63d6;
  *(undefined8 *)(puVar15 + 0x12) = uVar4;
  uVar4 = _UNK_013d63ce;
  *(undefined8 *)(puVar15 + 0xc) = _DAT_013d63c6;
  *(undefined8 *)(puVar15 + 0xe) = uVar4;
  uVar4 = _UNK_013d63be;
  *(undefined8 *)(puVar15 + 8) = _DAT_013d63b6;
  *(undefined8 *)(puVar15 + 10) = uVar4;
  uVar4 = _UNK_013d63ae;
  *(undefined8 *)(puVar15 + 4) = _DAT_013d63a6;
  *(undefined8 *)(puVar15 + 6) = uVar4;
  uVar7 = _UNK_013d63a2;
  uVar6 = _UNK_013d639e;
  uVar5 = _UNK_013d639a;
  *puVar15 = _DAT_013d6396;
  puVar15[1] = uVar5;
  puVar15[2] = uVar6;
  puVar15[3] = uVar7;
  *(undefined1 *)((long)puVar15 + 0x6b) = 0;
  if ((DAT_0f6ea670 == '\0') && (iVar8 = FUN_04108328(&DAT_0f6ea670), iVar8 != 0)) {
    func_0x0c704020();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6ea5f0,0xf53dab8);
    func_0x0410844d(&DAT_0f6ea670);
  }
  plVar11 = (long *)(*(long *)(lStack_130 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_130 + 0x20) -
                                         *(long *)(lStack_130 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f6ea5f0 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0c703250;
    plVar11 = (long *)(*(long *)(lStack_130 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lStack_130 + 0x30) + 8 + lVar13 * 0x18) !=
           *(uint *)(_DAT_0f6ea5f0 + 4));
  if (plVar11 == *(long **)(lStack_130 + 0x38)) {
LAB_0c703250:
    bVar3 = *(byte *)(_DAT_0f6ea658 + 0x88);
    lVar13 = _DAT_0f6ea658;
  }
  else {
    bVar3 = *(byte *)(*(long *)(plVar11[2] + 0x68) + 0x88);
    lVar13 = *(long *)(plVar11[2] + 0x68);
  }
  if ((bVar3 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar13 + 0x98),*(ulong *)(lVar13 + 0x88) & 0xfffffffffffffffe);
  }
  plVar11 = uStack_b8;
  *(undefined8 *)(lVar13 + 0x88) = 0x71;
  *(undefined8 *)(lVar13 + 0x90) = 0x6b;
  *(undefined4 **)(lVar13 + 0x98) = puVar15;
  puStack_f8 = &UNK_0f4e3d70;
  if (uStack_b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_b8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_b8 + 0x10))(uStack_b8);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      func_0x0412c2d0(plVar11);
    }
  }
  puStack_b0 = &UNK_0f4e3c70;
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(lStack_40,uStack_50 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x04167a40(auStack_90);
  uStack_1e8 = &UNK_0f4e3c70;
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_198 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x04167a40(&puStack_1c8);
  return;
}



/* ---- referenced strings ----
 * 0x13d6396  one or more block states are not valid Vanilla states; block filter entries cannot use custom bl
 * 0x13d63a6  k states are not valid Vanilla states; block filter entries cannot use custom block states.
 * 0x13d63b6   valid Vanilla states; block filter entries cannot use custom block states.
 * 0x13d63c6  tates; block filter entries cannot use custom block states.
 * 0x13d63d6  ter entries cannot use custom block states.
 * 0x13d63e6  ot use custom block states.
 * 0x13d63f1  om block states.
 */
