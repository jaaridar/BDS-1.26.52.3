/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88922f0 (ELF vaddr 0x87922f0)
 * Label: caller-of-callee
 * Body:  [[088922f0, 08892ce1] [08892cf0, 08892eec] [08892ef0, 0889318d]]
 * Ghidra: FUN_088922f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088922f0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  bool bVar13;
  undefined4 auStack_1e0 [2];
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  long *plStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined5 uStack_137;
  undefined2 uStack_132;
  undefined1 uStack_130;
  undefined5 uStack_12f;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  char cStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f5e6810 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e6810), iVar4 != 0)) {
    func_0x089e6020();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e6790,0xf53dab8);
    func_0x0410844d(&DAT_0f5e6810);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e6790 + 4)) * 8);
  do {
    lVar12 = *plVar6;
    if (lVar12 == -1) goto LAB_08892360;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5e6790 + 4))
  ;
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_08892360:
    puVar5 = &DAT_0f5e6790;
    if (iRam000000000f5e67f0 != -0x2b3da790) goto LAB_088923cd;
LAB_0889238b:
    lVar12 = *(long *)(puVar5 + 0x68);
    if (lVar12 == 0) goto LAB_088923cd;
    bVar13 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar10 = lVar12 + 9;
    if (bVar13) {
      lVar10 = *(long *)(lVar12 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar13) {
      uVar9 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x089e66a0(&uStack_a0,param_1,lVar10,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0889238b;
LAB_088923cd:
    func_0x089e66a0(&uStack_a0,param_1,&UNK_01229f47,0xf);
  }
  if (cStack_70 == '\0') {
    uStack_1d0._4_4_ = (uint)((ulong)uStack_1d0 >> 0x20);
    func_0x089e7200(&puStack_178,&uStack_a0,&UNK_01228842,7);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f01ae00;
    if (plStack_160 != (long *)0x0) {
      lVar12 = *plStack_160;
      plStack_160 = plVar6;
      (**(code **)(lVar12 + 8))();
      plVar6 = plStack_160;
    }
    plStack_160 = plVar6;
    auStack_1e0[0] = uStack_168;
    plStack_1d8 = (long *)0x0;
    uStack_1d0 = (long *)((ulong)uStack_1d0._4_4_ << 0x20);
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    puStack_1b8 = &UNK_06046510;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &UNK_0602fbb0;
    puStack_1a0 = &UNK_089e77b0;
    puStack_198 = &UNK_089e7910;
    uStack_190 = 0;
    uStack_188 = 0;
    plStack_180 = (long *)0x0;
    func_0x048b05a0(puStack_170,auStack_1e0);
    plVar6 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x089e74b0(&puStack_178);
    cStack_38 = cStack_70;
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    uStack_40 = (int)uStack_78;
    uStack_3c = uStack_78._4_4_;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    FUN_048b0bc0(&plStack_160);
    func_0x089e7200(&puStack_178,&uStack_68,&UNK_01229f57,9);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_160 != (long *)0x0) {
      lVar12 = *plStack_160;
      plStack_160 = plVar6;
      (**(code **)(lVar12 + 8))();
      plVar6 = plStack_160;
    }
    plStack_160 = plVar6;
    auStack_1e0[0] = uStack_168;
    plStack_1d8 = (long *)0x0;
    uStack_1d0 = (long *)((ulong)uStack_1d0 & 0xffffffff00000000);
    uStack_1c8 = 1;
    uStack_1c0 = 0;
    puStack_1b8 = &UNK_048b3f30;
    puStack_1b0 = &SUB_048b06d0;
    puStack_1a8 = &SUB_048b2190;
    puStack_1a0 = &UNK_089e7ae0;
    puStack_198 = &UNK_089e7cb0;
    uStack_190 = 0;
    uStack_188 = 0;
    plStack_180 = (long *)0x0;
    func_0x048b05a0(puStack_170,auStack_1e0);
    plVar6 = plStack_180;
    if (plStack_180 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_180 + 0x10))(plStack_180);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x089e74b0(&puStack_178);
    FUN_048b0bc0(&plStack_160);
  }
  if ((DAT_0f5e66a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e66a0), iVar4 != 0)) {
    func_0x089e2b40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e6620,0xf53dab8);
    func_0x0410844d(&DAT_0f5e66a0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e6620 + 4)) * 8);
  do {
    lVar12 = *plVar6;
    if (lVar12 == -1) goto LAB_088926f0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5e6620 + 4))
  ;
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_088926f0:
    puVar5 = &DAT_0f5e6620;
    if (iRam000000000f5e6680 != -0x2b3da790) goto LAB_0889275d;
LAB_0889271b:
    lVar12 = *(long *)(puVar5 + 0x68);
    if (lVar12 == 0) goto LAB_0889275d;
    bVar13 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar10 = lVar12 + 9;
    if (bVar13) {
      lVar10 = *(long *)(lVar12 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar13) {
      uVar9 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x089e7e90(&uStack_a0,param_1,lVar10,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0889271b;
LAB_0889275d:
    func_0x089e7e90(&uStack_a0,param_1,&UNK_01466458,0x24);
  }
  if (cStack_70 != '\0') {
    return;
  }
  if ((DAT_0f5e6608 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e6608), iVar4 != 0)) {
    func_0x089e23b0();
    func_0x0410844d(&DAT_0f5e6608);
  }
  uStack_78 = 0x6a2995fb00000001;
  lVar12 = CONCAT44(uStack_9c,uStack_a0);
  if ((DAT_0f5e66a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e66a0), iVar4 != 0)) {
    func_0x089e2b40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e6620,0xf53dab8);
    func_0x0410844d(&DAT_0f5e66a0);
  }
  puStack_170 = (undefined1 *)(lVar12 + 0x18);
  plVar6 = (long *)(*(long *)(lVar12 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5e6620 + 4)) * 8);
  do {
    lVar10 = *plVar6;
    if (lVar10 == -1) goto LAB_08892820;
    plVar6 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e6620 + 4));
  if (plVar6 == *(long **)(lVar12 + 0x38)) {
LAB_08892820:
    puStack_178 = &DAT_0f5e6620;
  }
  else {
    puStack_178 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&puStack_178,uStack_78._4_4_);
  puStack_178 = (undefined *)CONCAT62(puStack_178._2_6_,1);
  uStack_168 = uStack_78._4_4_;
  plStack_160 = (long *)0x0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0x1a;
  uStack_137 = 0x697373694d;
  uStack_132 = 0x676e;
  uStack_130 = 0x20;
  uStack_12f = 0x73626f6c42;
  uStack_12a = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0x3f600000;
  puStack_170 = auStack_98;
  func_0x048afb10(&lStack_120,8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_b8 = 0xff00;
  uStack_b4 = uStack_b4 & 0xffffff00;
  uStack_b0 = uStack_b0 & 0xffffff00;
  uStack_ac = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f136d88;
  if (plStack_160 != (long *)0x0) {
    lVar12 = *plStack_160;
    plStack_160 = plVar6;
    (**(code **)(lVar12 + 8))();
    plVar6 = plStack_160;
  }
  plStack_160 = plVar6;
  auStack_1e0[0] = uStack_168;
  plStack_1d8 = (long *)0x0;
  uStack_1d0 = (long *)((ulong)uStack_1d0 & 0xffffffff00000000);
  uStack_1c8 = 1;
  uStack_1c0 = 0;
  puStack_1b8 = &UNK_089ebd20;
  puStack_1b0 = &SUB_048b06d0;
  puStack_1a8 = &UNK_089ea880;
  puStack_1a0 = &UNK_089ebde0;
  puStack_198 = &UNK_089ebfd0;
  uStack_190 = 0;
  uStack_188 = 0;
  plStack_180 = (long *)0x0;
  func_0x048b05a0(puStack_170,auStack_1e0);
  plVar6 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar2 = puStack_170;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_1e0[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar12 = lStack_158;
  plVar1 = plStack_160;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_1d8 = plVar6 + 3;
  plStack_160 = (long *)0x0;
  lStack_158 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar12;
  plVar6[7] = lStack_140;
  plVar6[5] = lStack_150;
  plVar6[6] = lStack_148;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar6[10] = lStack_128;
  plVar6[8] = CONCAT26(uStack_132,CONCAT51(uStack_137,uStack_138));
  plVar6[9] = CONCAT17(uStack_129,CONCAT16(uStack_12a,CONCAT51(uStack_12f,uStack_130)));
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_132 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_12a = 0;
  uStack_129 = 0;
  lStack_128 = 0;
  plVar6[0xb] = lStack_120;
  plVar6[0xc] = lStack_118;
  plVar6[0xd] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar6[0xe] = lStack_108;
  plVar6[0xf] = lStack_100;
  plVar6[0x10] = lStack_f8;
  lStack_108 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_f0;
  plVar6[0x12] = lStack_e8;
  plVar6[0x13] = lStack_e0;
  plVar6[0x14] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plVar6[0x17] = lStack_c0;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_d0;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_d0._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_c8;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_c8._4_4_;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_ac,CONCAT43(uStack_b0,uStack_b4._1_3_));
  plVar6[0x18] = CONCAT44(uStack_b4,CONCAT22(uStack_b6,uStack_b8));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_1d0 = plVar6;
  func_0x048afd20(puVar2,auStack_1e0);
  plVar6 = uStack_1d0;
  if (uStack_1d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1d0 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_1d0 + 0x10))(uStack_1d0);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar12 = *(long *)(puVar2 + 0x10);
  iVar4 = *(int *)(puVar2 + 0x1c);
  if (iVar4 == 2) {
    piVar11 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar4 = *piVar11;
    while (iVar4 != *(int *)(puVar2 + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar4 = *piVar11;
    }
    for (; *(long *)(piVar11 + 0xc) != *(long *)(puVar2 + 8); piVar11 = *(int **)(piVar11 + 0xe)) {
    }
LAB_08892cfa:
    piVar11[4] = piVar11[4] | (int)puStack_178 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar11 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
      iVar4 = *piVar11;
      while (iVar4 != *(int *)(puVar2 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar4 = *piVar11;
      }
      goto LAB_08892cfa;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | (int)puStack_178 << 0x10;
    }
  }
  lVar12 = CONCAT44(uStack_9c,uStack_a0);
  iVar4 = (int)uStack_78;
  uVar3 = uStack_78._4_4_;
  FUN_048b0bc0(&plStack_160);
  if (iVar4 != 4) {
    if (iVar4 != 1) {
      return;
    }
    if ((DAT_0f5e66a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e66a0), iVar4 != 0)) {
      func_0x089e2b40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e6620,0xf53dab8);
      func_0x0410844d(&DAT_0f5e66a0);
    }
    plVar6 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e6620 + 4)) * 8);
    do {
      lVar10 = *plVar6;
      if (lVar10 == -1) goto LAB_08892d88;
      plVar6 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e6620 + 4)
            );
    if (plVar6 == *(long **)(lVar12 + 0x38)) {
LAB_08892d88:
      puVar5 = &DAT_0f5e6620;
    }
    else {
      puVar5 = (undefined *)plVar6[2];
    }
    puVar5 = (undefined *)func_0x048b0c90(lVar12 + 0x18,puVar5,uVar3,1);
    if (puVar5 == (undefined *)0x0) {
      puStack_178 = (undefined *)0x0;
      puStack_170 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_178);
      puVar5 = puStack_178;
    }
    lVar12 = *(long *)(puVar5 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_08892f3e;
  }
  if ((DAT_0f5e66a0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e66a0), iVar4 != 0)) {
    func_0x089e2b40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e6620,0xf53dab8);
    func_0x0410844d(&DAT_0f5e66a0);
  }
  plVar6 = (long *)(*(long *)(lVar12 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5e6620 + 4)) * 8);
  do {
    lVar10 = *plVar6;
    if (lVar10 == -1) goto LAB_08892df8;
    plVar6 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e6620 + 4));
  if (plVar6 == *(long **)(lVar12 + 0x38)) {
LAB_08892df8:
    puVar5 = &DAT_0f5e6620;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
  }
  puVar5 = (undefined *)func_0x048b1040(lVar12 + 0x18,puVar5,uVar3,1);
  if (puVar5 == (undefined *)0x0) {
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_178);
    puVar8 = *(undefined **)(puStack_178 + 0x38);
    puVar5 = puStack_178;
    if (puVar8 == (undefined *)0x0) goto LAB_08892eca;
LAB_08892ee6:
    do {
      puVar5 = puVar8;
      puVar8 = *(undefined **)(puVar5 + 0x38);
      if (*(undefined **)(puVar5 + 0x38) == (undefined *)0x0) {
        puStack_178 = (undefined *)0x0;
        puStack_170 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_178);
        puVar8 = puStack_178;
      }
    } while (puVar8 != (undefined *)0x0);
  }
  else {
    puVar8 = *(undefined **)(puVar5 + 0x38);
    if (*(undefined **)(puVar5 + 0x38) != (undefined *)0x0) goto LAB_08892ee6;
LAB_08892eca:
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_178);
    puVar8 = puStack_178;
    if (puStack_178 != (undefined *)0x0) goto LAB_08892ee6;
  }
  lVar12 = *(long *)(puVar5 + 0x48);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_08892f3e:
  puVar7[1] = 0xfff;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f4e3cf0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x29) = 0;
  *(undefined8 *)((long)puVar7 + 0x31) = 0;
  plVar6 = *(long **)(lVar12 + 8);
  *(undefined8 **)(lVar12 + 8) = puVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  return;
}


