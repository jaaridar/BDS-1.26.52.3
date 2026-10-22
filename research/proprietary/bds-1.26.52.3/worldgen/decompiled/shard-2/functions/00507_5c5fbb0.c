/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d5fbb0 (ELF vaddr 0x5c5fbb0)
 * Label: caller-of-callee
 * Body:  [[05d5fbb0, 05d602f1] [05d60300, 05d60434]]
 * Ghidra: FUN_05d5fbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d5fbb0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined4 uStack_157;
  undefined1 uStack_153;
  undefined2 uStack_152;
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
  undefined4 auStack_d0 [2];
  long *plStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_50;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  char cStack_20;
  
  puVar10 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar7 = _UNK_01258a5d;
  *(undefined8 *)(puVar10 + 4) = _DAT_01258a55;
  *(undefined8 *)(puVar10 + 6) = uVar7;
  uVar6 = _UNK_01258a51;
  uVar5 = _UNK_01258a4d;
  uVar4 = _UNK_01258a49;
  *puVar10 = _DAT_01258a45;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  *(undefined8 *)((long)puVar10 + 0x1d) = 0x64616f6c79615074;
  *(undefined1 *)((long)puVar10 + 0x25) = 0;
  if ((DAT_0f55e338 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55e338), iVar9 != 0)) {
    func_0x05ec8060();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55e2b8,0xf53dab8);
    func_0x0410844d(&DAT_0f55e338);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f55e2b8 + 4)) * 8);
  do {
    lVar3 = *plVar14;
    if (lVar3 == -1) goto LAB_05d5fc70;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f55e2b8 + 4));
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_05d5fc70:
    puVar11 = &DAT_0f55e2b8;
    if (iRam000000000f55e318 != -0x2b3da790) goto LAB_05d5fccb;
LAB_05d5fc9b:
    lVar3 = *(long *)(puVar11 + 0x68);
    if (lVar3 == 0) goto LAB_05d5fccb;
    bVar17 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar16 = (undefined4 *)(lVar3 + 9);
    if (bVar17) {
      puVar16 = *(undefined4 **)(lVar3 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar17) {
      uVar15 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_05d5fc9b;
LAB_05d5fccb:
    uVar15 = 0x25;
    puVar16 = puVar10;
  }
  func_0x05ec9470(&lStack_50,param_1,puVar16,uVar15);
  func_0x0412a280(puVar10,0x28);
  if (cStack_20 != '\0') {
    return;
  }
  func_0x05ec9a60(&puStack_1a0,lStack_50 + 0x18);
  if (uStack_188._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_18c,uStack_190) + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != (int)uStack_188) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    lVar3 = *(long *)(piVar12 + 0xc);
    while ((undefined1 *)lVar3 != puStack_198) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar3 = *(long *)(piVar12 + 0xc);
    }
LAB_05d5fd6f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_188._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_18c,uStack_190) + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != (int)uStack_188) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      goto LAB_05d5fd6f;
    }
    if (uStack_188._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_18c,uStack_190) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  if ((DAT_0f55e358 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55e358), iVar9 != 0)) {
    func_0x05ec8170();
    func_0x0410844d(&DAT_0f55e358);
  }
  uStack_28 = 0xbd92469800000001;
  if ((DAT_0f55e338 == '\0') && (iVar9 = func_0x04108328(&DAT_0f55e338), iVar9 != 0)) {
    func_0x05ec8060();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f55e2b8,0xf53dab8);
    func_0x0410844d(&DAT_0f55e338);
  }
  puStack_198 = (undefined1 *)(lStack_50 + 0x18);
  plVar14 = (long *)(*(long *)(lStack_50 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_50 + 0x20) - *(long *)(lStack_50 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f55e2b8 + 4)) * 8);
  do {
    lVar3 = *plVar14;
    if (lVar3 == -1) goto LAB_05d5fe00;
    plVar14 = (long *)(*(long *)(lStack_50 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lStack_50 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f55e2b8 + 4)
          );
  if (plVar14 == *(long **)(lStack_50 + 0x38)) {
LAB_05d5fe00:
    puStack_1a0 = &DAT_0f55e2b8;
  }
  else {
    puStack_1a0 = (undefined *)plVar14[2];
  }
  FUN_0ed621a0(&puStack_1a0,uStack_28._4_4_);
  puStack_1a0 = (undefined *)CONCAT62(puStack_1a0._2_6_,0x10);
  uStack_190 = uStack_28._4_4_;
  uStack_188 = (long *)0x0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_160 = 0x18;
  uStack_15f = 0x75746375727473;
  uStack_158 = 0x72;
  uStack_157 = 0x73644965;
  uStack_153 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0x3f600000;
  puStack_198 = auStack_48;
  func_0x048afb10(&lStack_148,8);
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
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0ef474e0;
  if (uStack_188 != (long *)0x0) {
    lVar3 = *uStack_188;
    uStack_188 = puVar13;
    (**(code **)(lVar3 + 8))();
    puVar13 = uStack_188;
  }
  uStack_188 = puVar13;
  auStack_d0[0] = uStack_190;
  plStack_c8 = (long *)0x0;
  uStack_c0 = (long *)((ulong)uStack_c0._4_4_ << 0x20);
  uStack_b8 = 1;
  uStack_b0 = 0;
  puStack_a8 = &UNK_049119f0;
  puStack_a0 = &SUB_048b06d0;
  puStack_98 = &UNK_0490fc00;
  puStack_90 = &UNK_05eca020;
  puStack_88 = &UNK_05eca220;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x048b05a0(puStack_198,auStack_d0);
  plVar14 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      FUN_0412c2d0(plVar14);
    }
  }
  puVar8 = puStack_198;
  if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_d0[0] = _DAT_0f550a0c;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar3 = lStack_180;
  puVar13 = uStack_188;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_c8 = plVar14 + 3;
  uStack_188 = (long *)0x0;
  lStack_180 = 0;
  plVar14[3] = (long)puVar13;
  plVar14[4] = lVar3;
  plVar14[7] = lStack_168;
  plVar14[5] = lStack_178;
  plVar14[6] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  plVar14[10] = lStack_150;
  plVar14[8] = CONCAT71(uStack_15f,uStack_160);
  plVar14[9] = CONCAT26(uStack_152,CONCAT15(uStack_153,CONCAT41(uStack_157,uStack_158)));
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_158 = 0;
  uStack_157 = 0;
  uStack_153 = 0;
  uStack_152 = 0;
  lStack_150 = 0;
  plVar14[0xb] = lStack_148;
  plVar14[0xc] = lStack_140;
  plVar14[0xd] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar14[0xe] = lStack_130;
  plVar14[0xf] = lStack_128;
  plVar14[0x10] = lStack_120;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_118;
  plVar14[0x12] = lStack_110;
  plVar14[0x13] = lStack_108;
  plVar14[0x14] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  plVar14[0x17] = lStack_e8;
  *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar14 + 0xac) = uStack_f8._4_4_;
  *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_f0;
  *(undefined4 *)((long)plVar14 + 0xb4) = uStack_f0._4_4_;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_d4,CONCAT43(uStack_d8,uStack_dc._1_3_));
  plVar14[0x18] = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_c0 = plVar14;
  FUN_048afd20(puVar8,auStack_d0);
  plVar14 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_c0 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      FUN_0412c2d0(plVar14);
    }
  }
  plVar14 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      FUN_0412c2d0(plVar14);
    }
  }
  lVar3 = *(long *)(puVar8 + 0x10);
  iVar9 = *(int *)(puVar8 + 0x1c);
  if (iVar9 == 2) {
    piVar12 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
    iVar9 = *piVar12;
    while (iVar9 != *(int *)(puVar8 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar9 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar8 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (int)puStack_1a0 << 0x10;
      }
      goto LAB_05d6030d;
    }
    piVar12 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
    iVar9 = *piVar12;
    while (iVar9 != *(int *)(puVar8 + 0x18)) {
      piVar12 = piVar12 + 0x1a;
      iVar9 = *piVar12;
    }
  }
  piVar12[4] = piVar12[4] | (int)puStack_1a0 << 0x10;
LAB_05d6030d:
  func_0x048b0bc0(&uStack_188);
  return;
}



/* ---- referenced strings ----
 * 0x1258a45  Editor::Network::StructureListPayload
 * 0x1258a55  :StructureListPayload
 */
