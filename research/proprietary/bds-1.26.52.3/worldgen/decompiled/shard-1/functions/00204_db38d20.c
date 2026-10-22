/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdc38d20 (ELF vaddr 0xdb38d20)
 * Label: caller-of-callee
 * Body:  [[0dc38d20, 0dc395db] [0dc395e0, 0dc399bd]]
 * Ghidra: FUN_0dc38d20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dc38d20(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f738dd8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738dd8), iVar5 != 0)) {
    func_0x0dc78190();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f738d58,0xf53dab8);
    func_0x0410844d(&DAT_0f738dd8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f738d58 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0dc38d90;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f738d58 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dc38d90:
    puVar6 = &DAT_0f738d58;
    if (_DAT_0f738db8 != -0x2b3da790) goto LAB_0dc38dfd;
LAB_0dc38dbb:
    lVar10 = *(long *)(puVar6 + 0x68);
    if (lVar10 == 0) goto LAB_0dc38dfd;
    bVar13 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar11 = lVar10 + 9;
    if (bVar13) {
      lVar11 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar13) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0dc78840(&lStack_e8,param_1,lVar11,uVar12);
  }
  else {
    puVar6 = (undefined *)plVar8[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0dc38dbb;
LAB_0dc38dfd:
    func_0x0dc78840(&lStack_e8,param_1,&UNK_014dd69d,0x11);
  }
  if (cStack_b8 != '\0') {
    return;
  }
  uStack_c0 = 0x1e1bc4d500000004;
  if ((DAT_0f738df8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738df8), iVar5 != 0)) {
    func_0x0dc782c0();
    func_0x0410844d(&DAT_0f738df8);
  }
  uStack_178 = (undefined *)CONCAT44(uStack_178._4_4_,uStack_c0._4_4_);
  uStack_170 = (long *)0x0;
  uStack_168 = (long *)((ulong)uStack_168._4_4_ << 0x20);
  uStack_160 = 2;
  pcStack_158 = FUN_048aead0;
  puStack_150 = &UNK_0d89b2d0;
  puStack_148 = &UNK_0dc793c0;
  uStack_140 = 0;
  uStack_138 = (ulong)uStack_138._4_4_ << 0x20;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  func_0x049057f0(&uStack_e0,&uStack_178);
  func_0x048aea50(&uStack_178);
  uStack_188 = uStack_d0;
  uStack_184 = uStack_cc;
  iStack_180 = iStack_c8;
  iStack_17c = iStack_c4;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_178 = (undefined *)CONCAT44(uStack_178._4_4_,_DAT_0f551bb4);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  uStack_170 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_168 = plVar8;
  func_0x048afd20(&uStack_198,&uStack_178);
  plVar8 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f738df8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738df8), iVar5 != 0)) {
    func_0x0dc782c0();
    func_0x0410844d(&DAT_0f738df8);
  }
  if (iStack_c4 == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_cc,uStack_d0) + 0x78) + 0x60);
    iVar5 = *piVar9;
    while (iVar5 != iStack_c8) {
      piVar9 = piVar9 + 0x16;
      iVar5 = *piVar9;
    }
    lVar10 = *(long *)(piVar9 + 0xc);
    while (lVar10 != CONCAT44(uStack_d4,uStack_d8)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar10 = *(long *)(piVar9 + 0xc);
    }
LAB_0dc3904f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
  }
  else {
    if (iStack_c4 == 1) {
      piVar9 = *(int **)(*(long *)(CONCAT44(uStack_cc,uStack_d0) + 0x78) + 0x48);
      iVar5 = *piVar9;
      while (iVar5 != iStack_c8) {
        piVar9 = piVar9 + 0x1a;
        iVar5 = *piVar9;
      }
      goto LAB_0dc3904f;
    }
    if (iStack_c4 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_cc,uStack_d0) + 0x18);
      *puVar2 = *puVar2 | 0x20000;
    }
  }
  if ((DAT_0f738df8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738df8), iVar5 != 0)) {
    func_0x0dc782c0();
    func_0x0410844d(&DAT_0f738df8);
  }
  uStack_178 = (undefined *)CONCAT44(uStack_178._4_4_,0xbf75c8f8);
  uStack_170 = (long *)0x0;
  uStack_168 = (long *)CONCAT44(uStack_168._4_4_,1);
  uStack_160 = 0;
  pcStack_158 = (code *)&SUB_048b2190;
  puStack_150 = &SUB_048b06d0;
  puStack_148 = &UNK_0dc79a80;
  uStack_140 = 0;
  uStack_138 = uStack_138 & 0xffffffff00000000;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  func_0x049057f0(&uStack_e0,&uStack_178);
  func_0x048aea50(&uStack_178);
  uStack_188 = uStack_d0;
  uStack_184 = uStack_cc;
  iStack_180 = iStack_c8;
  iStack_17c = iStack_c4;
  uStack_198 = CONCAT44(uStack_dc,uStack_e0);
  uStack_190 = CONCAT44(uStack_d4,uStack_d8);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0ef44b00;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_178 = (undefined *)CONCAT44(uStack_178._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  uStack_170 = plVar8 + 3;
  plVar8[3] = (long)puVar7;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_168 = plVar8;
  func_0x048afd20(&uStack_198,&uStack_178);
  plVar8 = uStack_168;
  if (uStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_168 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_168 + 0x10))(uStack_168);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      func_0x0412c2d0(plVar8);
    }
  }
  iVar5 = (int)uStack_c0;
  uVar3 = uStack_c0._4_4_;
  pcStack_158 = (code *)0x0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  puStack_150 = (undefined *)0x0;
  puStack_148 = (undefined *)0x0;
  uStack_100 = 0;
  uStack_170 = (long *)0xffffffffffffffff;
  uStack_168 = (long *)0x0;
  uStack_160._0_1_ = 0xff;
  uStack_160._1_7_ = 0;
  uStack_178 = &UNK_0f4e3c70;
  func_0x041679a0(&pcStack_158);
  puStack_150 = (undefined *)func_0x041681f0(&pcStack_158,0xf547a30);
  puStack_148 = (undefined *)func_0x041681f0(&pcStack_158,0xf547770);
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 1;
  uStack_160 = CONCAT71(uStack_160._1_7_,4);
  uStack_a8 = (undefined4)uStack_170;
  uStack_a4 = uStack_170._4_4_;
  uStack_a0 = (undefined4)uStack_168;
  uStack_9c = uStack_168._4_4_;
  uStack_98 = 4;
  puStack_b0 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_90,&pcStack_158);
  uStack_88 = puStack_150;
  uStack_80 = puStack_148;
  uStack_78 = (undefined4)uStack_140;
  uStack_74 = uStack_140._4_4_;
  uStack_70 = (undefined4)uStack_138;
  uStack_6c = uStack_138._4_4_;
  uStack_68 = uStack_130;
  plStack_60 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    LOCK();
    plStack_128[1] = plStack_128[1] + 1;
    UNLOCK();
  }
  uStack_58 = uStack_120;
  if ((uStack_118 & 1) == 0) {
    uStack_40 = uStack_108;
    uStack_50 = uStack_118;
    uStack_48 = uStack_110;
  }
  else {
    func_0x0412e5e0(&uStack_50,uStack_108,uStack_110);
  }
  uStack_38 = uStack_100;
  if (iVar5 == 4) {
    if ((DAT_0f738dd8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738dd8), iVar5 != 0)) {
      func_0x0dc78190();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f738d58,0xf53dab8);
      func_0x0410844d(&DAT_0f738dd8);
    }
    plVar8 = (long *)(*(long *)(lStack_e8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f738d58 + 4)) * 8);
    do {
      lVar10 = *plVar8;
      if (lVar10 == -1) goto LAB_0dc39488;
      plVar8 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar10 * 0x18) !=
             *(uint *)(_DAT_0f738d58 + 4));
    if (plVar8 == *(long **)(lStack_e8 + 0x38)) {
LAB_0dc39488:
      puVar6 = &DAT_0f738d58;
    }
    else {
      puVar6 = (undefined *)plVar8[2];
    }
    lVar10 = func_0x048b1040(lStack_e8 + 0x18,puVar6,uVar3,1);
    if (lVar10 == 0) {
      uStack_198 = 0;
      uStack_190 = 0;
      FUN_048b10d0(&uStack_198);
      lVar11 = *(long *)(uStack_198 + 0x38);
      lVar10 = uStack_198;
    }
    else {
      lVar11 = *(long *)(lVar10 + 0x38);
    }
    if (lVar11 != 0) goto LAB_0dc395e5;
    uStack_198 = 0;
    uStack_190 = 0;
    FUN_048b10d0(&uStack_198);
    lVar4 = uStack_198;
    while (lVar11 = lVar4, lVar11 != 0) {
LAB_0dc395e5:
      lVar10 = lVar11;
      lVar4 = *(long *)(lVar11 + 0x38);
      if (*(long *)(lVar11 + 0x38) == 0) {
        uStack_198 = 0;
        uStack_190 = 0;
        FUN_048b10d0(&uStack_198);
        lVar4 = uStack_198;
      }
    }
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iVar5 != 1) goto LAB_0dc396d8;
    if ((DAT_0f738dd8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f738dd8), iVar5 != 0)) {
      func_0x0dc78190();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f738d58,0xf53dab8);
      func_0x0410844d(&DAT_0f738dd8);
    }
    plVar8 = (long *)(*(long *)(lStack_e8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f738d58 + 4)) * 8);
    do {
      lVar10 = *plVar8;
      if (lVar10 == -1) goto LAB_0dc39408;
      plVar8 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar10 * 0x18) !=
             *(uint *)(_DAT_0f738d58 + 4));
    if (plVar8 == *(long **)(lStack_e8 + 0x38)) {
LAB_0dc39408:
      puVar6 = &DAT_0f738d58;
    }
    else {
      puVar6 = (undefined *)plVar8[2];
    }
    lVar10 = func_0x048b0c90(lStack_e8 + 0x18,puVar6,uVar3,1);
    if (lVar10 == 0) {
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x048b0d20(&uStack_198);
      lVar10 = uStack_198;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar7 + 3) = uStack_98;
  *(undefined4 *)(puVar7 + 1) = uStack_a8;
  *(undefined4 *)((long)puVar7 + 0xc) = uStack_a4;
  *(undefined4 *)(puVar7 + 2) = uStack_a0;
  *(undefined4 *)((long)puVar7 + 0x14) = uStack_9c;
  *puVar7 = &UNK_0f4e3c70;
  func_0x04167a20(puVar7 + 4,auStack_90);
  puVar7[5] = uStack_88;
  puVar7[6] = uStack_80;
  puVar7[7] = CONCAT44(uStack_74,uStack_78);
  puVar7[8] = CONCAT44(uStack_6c,uStack_70);
  puVar7[9] = uStack_68;
  puVar7[10] = plStack_60;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  puVar7[0xb] = uStack_58;
  puVar7[0xe] = uStack_40;
  *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_50;
  *(undefined4 *)((long)puVar7 + 100) = uStack_50._4_4_;
  *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_48;
  *(undefined4 *)((long)puVar7 + 0x6c) = uStack_48._4_4_;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar7[0xf] = uStack_38;
  plVar8 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_0dc396d8:
  puStack_b0 = &UNK_0f4e3c70;
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,uStack_50 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(auStack_90);
  uStack_178 = &UNK_0f4e3c70;
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,uStack_118 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_128 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(&pcStack_158);
  return;
}


