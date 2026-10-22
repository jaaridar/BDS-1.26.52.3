/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x829f960 (ELF vaddr 0x819f960)
 * Label: caller-of-callee
 * Body:  [[0829f960, 0829ff40] [0829ff50, 082a0362]]
 * Ghidra: FUN_0829f960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0829f960(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [5];
  int iStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f5ce3d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5ce3d0), iVar3 != 0)) {
    func_0x083505f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ce350,0xf53dab8);
    func_0x0410844d(&DAT_0f5ce3d0);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5ce350 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0829f9d0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f5ce350 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0829f9d0:
    puVar4 = &DAT_0f5ce350;
    if (iRam000000000f5ce3b0 != -0x2b3da790) goto LAB_0829fa3d;
LAB_0829f9fb:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0829fa3d;
    bVar10 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar8 = lVar6 + 9;
    if (bVar10) {
      lVar8 = *(long *)(lVar6 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar10) {
      uVar9 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x08352190(alStack_68,param_1,lVar8,uVar9);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0829f9fb;
LAB_0829fa3d:
    func_0x08352190(alStack_68,param_1,&UNK_011be3e1,0x2b);
  }
  if (cStack_38 != '\0') {
    return;
  }
  func_0x08352cf0(&puStack_1b8,alStack_68,&UNK_013975b1,6);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef44b00;
  if (plStack_1a0 != (long *)0x0) {
    lVar6 = *plStack_1a0;
    plStack_1a0 = plVar5;
    (**(code **)(lVar6 + 8))();
    plVar5 = plStack_1a0;
  }
  plStack_1a0 = plVar5;
  uStack_228 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_1a8);
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_208 = 0;
  puStack_200 = &UNK_048b3f30;
  puStack_1f8 = &SUB_048b06d0;
  puStack_1f0 = &SUB_048b2190;
  puStack_1e8 = &UNK_08353290;
  puStack_1e0 = &UNK_08353450;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  func_0x048b05a0(uStack_1b0,&uStack_228);
  plVar5 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x08352f90(&puStack_1b8);
  func_0x048b0bc0(&plStack_1a0);
  uStack_198 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_140 = 0;
  uStack_1b0 = 0xffffffffffffffff;
  uStack_1a8 = 0;
  plStack_1a0 = (long *)0xff;
  puStack_1b8 = &UNK_0f4e3c70;
  FUN_041679a0(&uStack_198);
  uStack_190 = func_0x041681f0(&uStack_198,0xf547a30);
  uStack_188 = func_0x041681f0(&uStack_198,0xf547770);
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_1b0 = 0x800;
  uStack_e0 = 0x800;
  uStack_dc = 0;
  uStack_d8 = (undefined4)uStack_1a8;
  uStack_d4 = uStack_1a8._4_4_;
  uStack_d0 = plStack_1a0._0_1_;
  puStack_e8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_c8,&uStack_198);
  uStack_c0 = uStack_190;
  uStack_b8 = uStack_188;
  uStack_b0 = (undefined4)uStack_180;
  uStack_ac = uStack_180._4_4_;
  uStack_a8 = (undefined4)uStack_178;
  uStack_a4 = uStack_178._4_4_;
  uStack_a0 = uStack_170;
  plStack_98 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    LOCK();
    plStack_168[1] = plStack_168[1] + 1;
    UNLOCK();
  }
  uStack_90 = uStack_160;
  if ((uStack_158 & 1) == 0) {
    uStack_78 = uStack_148;
    uStack_88 = uStack_158;
    uStack_80 = uStack_150;
  }
  else {
    func_0x0412e5e0(&uStack_88,uStack_148,uStack_150);
  }
  uStack_70 = uStack_140;
  if (iStack_40 == 4) {
    if ((DAT_0f5ce3d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5ce3d0), iVar3 != 0)) {
      func_0x083505f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ce350,0xf53dab8);
      func_0x0410844d(&DAT_0f5ce3d0);
    }
    plVar5 = (long *)(*(long *)(alStack_68[0] + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(alStack_68[0] + 0x20) -
                                          *(long *)(alStack_68[0] + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f5ce350 + 4)) * 8);
    do {
      lVar6 = *plVar5;
      if (lVar6 == -1) goto LAB_0829fe58;
      plVar5 = (long *)(*(long *)(alStack_68[0] + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(alStack_68[0] + 0x30) + 8 + lVar6 * 0x18) !=
             *(uint *)(_DAT_0f5ce350 + 4));
    if (plVar5 == *(long **)(alStack_68[0] + 0x38)) {
LAB_0829fe58:
      puVar4 = &DAT_0f5ce350;
    }
    else {
      puVar4 = (undefined *)plVar5[2];
    }
    lVar6 = func_0x048b1040(alStack_68[0] + 0x18,puVar4,uStack_3c,1);
    if (lVar6 == 0) {
      uStack_228 = 0;
      uStack_220 = 0;
      func_0x048b10d0(&uStack_228);
      lVar8 = *(long *)(uStack_228 + 0x38);
      lVar6 = uStack_228;
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x38);
    }
    if (lVar8 != 0) goto LAB_0829ff55;
    uStack_228 = 0;
    uStack_220 = 0;
    func_0x048b10d0(&uStack_228);
    lVar2 = uStack_228;
    while (lVar8 = lVar2, lVar8 != 0) {
LAB_0829ff55:
      lVar6 = lVar8;
      lVar2 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) == 0) {
        uStack_228 = 0;
        uStack_220 = 0;
        func_0x048b10d0(&uStack_228);
        lVar2 = uStack_228;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iStack_40 != 1) goto LAB_082a0048;
    if ((DAT_0f5ce3d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5ce3d0), iVar3 != 0)) {
      func_0x083505f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ce350,0xf53dab8);
      func_0x0410844d(&DAT_0f5ce3d0);
    }
    plVar5 = (long *)(*(long *)(alStack_68[0] + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(alStack_68[0] + 0x20) -
                                          *(long *)(alStack_68[0] + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f5ce350 + 4)) * 8);
    do {
      lVar6 = *plVar5;
      if (lVar6 == -1) goto LAB_0829fde8;
      plVar5 = (long *)(*(long *)(alStack_68[0] + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(alStack_68[0] + 0x30) + 8 + lVar6 * 0x18) !=
             *(uint *)(_DAT_0f5ce350 + 4));
    if (plVar5 == *(long **)(alStack_68[0] + 0x38)) {
LAB_0829fde8:
      puVar4 = &DAT_0f5ce350;
    }
    else {
      puVar4 = (undefined *)plVar5[2];
    }
    lVar6 = func_0x048b0c90(alStack_68[0] + 0x18,puVar4,uStack_3c,1);
    if (lVar6 == 0) {
      uStack_228 = 0;
      uStack_220 = 0;
      func_0x048b0d20(&uStack_228);
      lVar6 = uStack_228;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar7 + 3) = uStack_d0;
  *(undefined4 *)(puVar7 + 1) = uStack_e0;
  *(undefined4 *)((long)puVar7 + 0xc) = uStack_dc;
  *(undefined4 *)(puVar7 + 2) = uStack_d8;
  *(undefined4 *)((long)puVar7 + 0x14) = uStack_d4;
  *puVar7 = &UNK_0f4e3c70;
  func_0x04167a20(puVar7 + 4,auStack_c8);
  puVar7[5] = uStack_c0;
  puVar7[6] = uStack_b8;
  puVar7[7] = CONCAT44(uStack_ac,uStack_b0);
  puVar7[8] = CONCAT44(uStack_a4,uStack_a8);
  puVar7[9] = uStack_a0;
  puVar7[10] = plStack_98;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  puVar7[0xb] = uStack_90;
  puVar7[0xe] = uStack_78;
  *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_88;
  *(undefined4 *)((long)puVar7 + 100) = uStack_88._4_4_;
  *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_80;
  *(undefined4 *)((long)puVar7 + 0x6c) = uStack_80._4_4_;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar7[0xf] = uStack_70;
  plVar5 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))();
  }
LAB_082a0048:
  puStack_e8 = &UNK_0f4e3c70;
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_c8);
  puStack_1b8 = &UNK_0f4e3c70;
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_168 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(&uStack_198);
  func_0x08352cf0(&puStack_1b8,alStack_68,&UNK_0137c6e5,8);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (plStack_1a0 != (long *)0x0) {
    lVar6 = *plStack_1a0;
    plStack_1a0 = plVar5;
    (**(code **)(lVar6 + 8))();
    plVar5 = plStack_1a0;
  }
  plStack_1a0 = plVar5;
  uStack_228 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_1a8);
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_208 = 0;
  puStack_200 = &UNK_04906f70;
  puStack_1f8 = &SUB_048b06d0;
  puStack_1f0 = &UNK_04906c50;
  puStack_1e8 = &UNK_08353620;
  puStack_1e0 = &UNK_08353780;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  func_0x048b05a0(uStack_1b0,&uStack_228);
  plVar5 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x08352f90(&puStack_1b8);
  func_0x048b0bc0(&plStack_1a0);
  return;
}


