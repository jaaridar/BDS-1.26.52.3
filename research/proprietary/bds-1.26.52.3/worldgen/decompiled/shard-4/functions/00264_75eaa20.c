/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x76eaa20 (ELF vaddr 0x75eaa20)
 * Label: caller-of-callee
 * Body:  [[076eaa20, 076eb061] [076eb070, 076eb25e] [076eb260, 076eb48e]]
 * Ghidra: FUN_076eaa20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_076eaa20(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  bool bVar14;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined2 uStack_15f;
  undefined5 uStack_15d;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  uint uStack_e4;
  uint uStack_e0;
  undefined1 uStack_dc;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  char cStack_a8;
  undefined4 auStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  func_0x07822800();
  if ((DAT_0f5ab178 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5ab178), iVar5 != 0)) {
    func_0x0775f560();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ab0f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ab178);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5ab0f8 + 4)) * 8);
  do {
    lVar13 = *plVar7;
    if (lVar13 == -1) goto LAB_076eaaa0;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f5ab0f8 + 4))
  ;
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_076eaaa0:
    puVar6 = &DAT_0f5ab0f8;
    if (iRam000000000f5ab158 != -0x2b3da790) goto LAB_076eab0d;
LAB_076eaacb:
    lVar13 = *(long *)(puVar6 + 0x68);
    if (lVar13 == 0) goto LAB_076eab0d;
    bVar14 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar11 = lVar13 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar13 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar14) {
      uVar10 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0775fd70(&lStack_d8,param_1,lVar11,uVar10);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_076eaacb;
LAB_076eab0d:
    func_0x0775fd70(&lStack_d8,param_1,&UNK_012a8068,0x16);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5ab198 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5ab198), iVar5 != 0)) {
    func_0x0775f670();
    func_0x0410844d(&DAT_0f5ab198);
  }
  lVar13 = lStack_d8;
  uStack_b0 = 0x292e075d00000001;
  if ((DAT_0f5ab178 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5ab178), iVar5 != 0)) {
    func_0x0775f560();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5ab0f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ab178);
  }
  puStack_1a0 = (undefined1 *)(lVar13 + 0x18);
  plVar7 = (long *)(*(long *)(lVar13 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5ab0f8 + 4)) * 8);
  do {
    lVar11 = *plVar7;
    if (lVar11 == -1) goto LAB_076eabd0;
    plVar7 = (long *)(*(long *)(lVar13 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5ab0f8 + 4));
  if (plVar7 == *(long **)(lVar13 + 0x38)) {
LAB_076eabd0:
    puStack_1a8 = &DAT_0f5ab0f8;
  }
  else {
    puStack_1a8 = (undefined *)plVar7[2];
  }
  func_0x0ed621a0(&puStack_1a8,uStack_b0._4_4_);
  puStack_1a8 = (undefined *)CONCAT62(puStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x12;
  uStack_167 = 0x61446b636f6c43;
  uStack_160 = 0x74;
  uStack_15f = 0x61;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0x3f600000;
  puStack_1a0 = auStack_d0;
  func_0x048afb10(&lStack_150,8);
  uStack_f8 = 0;
  lStack_f0 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_e8 = 0xff00;
  uStack_e4 = uStack_e4 & 0xffffff00;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f0e3d08;
  if (plStack_190 != (long *)0x0) {
    lVar13 = *plStack_190;
    plStack_190 = plVar7;
    (**(code **)(lVar13 + 8))();
    plVar7 = plStack_190;
  }
  plStack_190 = plVar7;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_077645f0;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &UNK_077630b0;
  puStack_60 = &UNK_077646b0;
  puStack_58 = &UNK_077648f0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar7 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar2 = puStack_1a0;
  if ((DAT_0f550a20 == '\0') && (iVar5 = FUN_04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar13 = lStack_188;
  plVar1 = plStack_190;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  plStack_98 = plVar7 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar7[3] = (long)plVar1;
  plVar7[4] = lVar13;
  plVar7[7] = lStack_170;
  plVar7[5] = lStack_180;
  plVar7[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar7[10] = lStack_158;
  plVar7[8] = CONCAT71(uStack_167,uStack_168);
  plVar7[9] = CONCAT53(uStack_15d,CONCAT21(uStack_15f,uStack_160));
  uStack_168 = 0;
  uStack_167 = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15d = 0;
  lStack_158 = 0;
  plVar7[0xb] = lStack_150;
  plVar7[0xc] = lStack_148;
  plVar7[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar7[0xe] = lStack_138;
  plVar7[0xf] = lStack_130;
  plVar7[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_120;
  plVar7[0x12] = lStack_118;
  plVar7[0x13] = lStack_110;
  plVar7[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar7[0x17] = lStack_f0;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar7[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  uStack_90 = plVar7;
  func_0x048afd20(puVar2,auStack_a0);
  plVar7 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar13 = *(long *)(puVar2 + 0x10);
  iVar5 = *(int *)(puVar2 + 0x1c);
  if (iVar5 == 2) {
    piVar12 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != *(int *)(puVar2 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar2 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_076eb07d;
    }
    piVar12 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
    iVar5 = *piVar12;
    while (iVar5 != *(int *)(puVar2 + 0x18)) {
      piVar12 = piVar12 + 0x1a;
      iVar5 = *piVar12;
    }
  }
  piVar12[4] = piVar12[4] | (int)puStack_1a8 << 0x10;
LAB_076eb07d:
  iVar5 = (int)uStack_b0;
  uVar3 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if (iVar5 == 4) {
    if ((DAT_0f5ab178 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5ab178), iVar5 != 0)) {
      func_0x0775f560();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ab0f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5ab178);
    }
    plVar7 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5ab0f8 + 4)) * 8);
    do {
      lVar13 = *plVar7;
      if (lVar13 == -1) goto LAB_076eb178;
      plVar7 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5ab0f8 + 4));
    if (plVar7 == *(long **)(lStack_d8 + 0x38)) {
LAB_076eb178:
      puVar6 = &DAT_0f5ab0f8;
    }
    else {
      puVar6 = (undefined *)plVar7[2];
    }
    puVar6 = (undefined *)func_0x048b1040(lStack_d8 + 0x18,puVar6,uVar3,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1a8);
      puVar9 = *(undefined **)(puStack_1a8 + 0x38);
      puVar6 = puStack_1a8;
    }
    else {
      puVar9 = *(undefined **)(puVar6 + 0x38);
    }
    if (puVar9 != (undefined *)0x0) goto LAB_076eb265;
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_1a8);
    puVar4 = puStack_1a8;
    while (puVar9 = puVar4, puVar9 != (undefined *)0x0) {
LAB_076eb265:
      puVar6 = puVar9;
      puVar4 = *(undefined **)(puVar9 + 0x38);
      if (*(undefined **)(puVar9 + 0x38) == (undefined *)0x0) {
        puStack_1a8 = (undefined *)0x0;
        puStack_1a0 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_1a8);
        puVar4 = puStack_1a8;
      }
    }
    lVar13 = *(long *)(puVar6 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar5 != 1) {
      return;
    }
    if ((DAT_0f5ab178 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5ab178), iVar5 != 0)) {
      func_0x0775f560();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5ab0f8,0xf53dab8);
      func_0x0410844d(&DAT_0f5ab178);
    }
    plVar7 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5ab0f8 + 4)) * 8);
    do {
      lVar13 = *plVar7;
      if (lVar13 == -1) goto LAB_076eb108;
      plVar7 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5ab0f8 + 4));
    if (plVar7 == *(long **)(lStack_d8 + 0x38)) {
LAB_076eb108:
      puVar6 = &DAT_0f5ab0f8;
    }
    else {
      puVar6 = (undefined *)plVar7[2];
    }
    puVar6 = (undefined *)FUN_048b0c90(lStack_d8 + 0x18,puVar6,uVar3,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1a8);
      puVar6 = puStack_1a8;
    }
    lVar13 = *(long *)(puVar6 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar8[1] = 0x100;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f4e3cf0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined8 *)((long)puVar8 + 0x29) = 0;
  *(undefined8 *)((long)puVar8 + 0x31) = 0;
  plVar7 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  return;
}


