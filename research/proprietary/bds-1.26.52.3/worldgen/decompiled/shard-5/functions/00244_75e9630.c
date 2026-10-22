/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x76e9630 (ELF vaddr 0x75e9630)
 * Label: caller-of-callee
 * Body:  [[076e9630, 076ea421] [076ea430, 076ea62c] [076ea630, 076ea968]]
 * Ghidra: FUN_076e9630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_076e9630(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_260 [2];
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined4 uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined2 uStack_1af;
  undefined5 uStack_1ad;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  uint uStack_134;
  uint uStack_130;
  undefined1 uStack_12c;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  char cStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  char cStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char cStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_0f5aae38 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aae38), iVar6 != 0)) {
    func_0x07758e20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aadb8,0xf53dab8);
    FUN_0410844d(&DAT_0f5aae38);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5aadb8 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_076e96a0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5aadb8 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_076e96a0:
    puVar7 = &DAT_0f5aadb8;
    if (iRam000000000f5aae18 != -0x2b3da790) goto LAB_076e970d;
LAB_076e96cb:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_076e970d;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x07759250(&lStack_128,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_076e96cb;
LAB_076e970d:
    func_0x07759250(&lStack_128,param_1,&UNK_01430edf,0x17);
  }
  if (cStack_f8 == '\0') {
    uStack_250._4_4_ = (uint)((ulong)uStack_250 >> 0x20);
    func_0x07759d60(&puStack_1f8,&lStack_128,&UNK_013e3461,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f01ae00;
    if (plStack_1e0 != (long *)0x0) {
      lVar14 = *plStack_1e0;
      plStack_1e0 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_1e0;
    }
    plStack_1e0 = plVar8;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250._4_4_ << 0x20);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_06046510;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &SUB_0602fbb0;
    puStack_220 = &UNK_0775a310;
    puStack_218 = &UNK_0775a470;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar8 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0775a010(&puStack_1f8);
    cVar3 = cStack_f8;
    lVar14 = lStack_128;
    uStack_78 = uStack_120;
    uStack_70 = uStack_118;
    uStack_68 = uStack_110;
    uStack_64 = uStack_10c;
    uStack_60 = uStack_108;
    uStack_5c = uStack_104;
    func_0x048b0bc0(&plStack_1e0);
    if ((DAT_0f5aae38 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aae38), iVar6 != 0)) {
      func_0x07758e20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aadb8,0xf53dab8);
      FUN_0410844d(&DAT_0f5aae38);
    }
    plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5aadb8 + 4)) * 8);
    do {
      lVar12 = *plVar8;
      if (lVar12 == -1) goto LAB_076e9911;
      plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5aadb8 + 4)
            );
    if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_076e9911:
      puVar7 = &DAT_0f5aadb8;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < (int)uStack_100 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012273f7),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar7 = (undefined *)func_0x048b0c90(lVar14 + 0x18,puVar7,uStack_100._4_4_,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1f8);
      puVar7 = puStack_1f8;
    }
    *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa8) = 1;
    lStack_f0 = lVar14;
    uStack_e8 = (undefined4)uStack_78;
    uStack_e4 = uStack_78._4_4_;
    uStack_e0 = (undefined4)uStack_70;
    uStack_dc = uStack_70._4_4_;
    uStack_d8 = uStack_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
    iStack_c8 = (int)uStack_100;
    uStack_c4 = uStack_100._4_4_;
    cStack_c0 = cVar3;
    func_0x07759d60(&puStack_1f8,&lStack_f0,&UNK_012a8063,4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ce8;
    if (plStack_1e0 != (long *)0x0) {
      lVar14 = *plStack_1e0;
      plStack_1e0 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_1e0;
    }
    plStack_1e0 = plVar8;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_0490ce30;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &SUB_0490cb20;
    puStack_220 = &UNK_0775a640;
    puStack_218 = &UNK_0775a7a0;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar8 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0775a010(&puStack_1f8);
    cVar3 = cStack_c0;
    uVar2 = uStack_c4;
    iVar6 = iStack_c8;
    lVar14 = lStack_f0;
    uStack_58 = uStack_e8;
    uStack_54 = uStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    uStack_48 = uStack_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    func_0x048b0bc0(&plStack_1e0);
    if ((DAT_0f5aae38 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5aae38), iVar5 != 0)) {
      func_0x07758e20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aadb8,0xf53dab8);
      FUN_0410844d(&DAT_0f5aae38);
    }
    plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5aadb8 + 4)) * 8);
    do {
      lVar12 = *plVar8;
      if (lVar12 == -1) goto LAB_076e9bd1;
      plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5aadb8 + 4)
            );
    if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_076e9bd1:
      puVar7 = &DAT_0f5aadb8;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012273f7),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar7 = (undefined *)func_0x048b0c90(lVar14 + 0x18,puVar7,uVar2,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1f8);
      puVar7 = puStack_1f8;
    }
    *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa8) = 1;
    lStack_b8 = lVar14;
    uStack_b0 = (long *)CONCAT44(uStack_54,uStack_58);
    uStack_a8 = uStack_50;
    uStack_a4 = uStack_4c;
    uStack_a0 = uStack_48;
    uStack_9c = uStack_44;
    uStack_98 = uStack_40;
    uStack_94 = uStack_3c;
    iStack_90 = iVar6;
    uStack_8c = uVar2;
    cStack_88 = cVar3;
    func_0x07759d60(&puStack_1f8,&lStack_b8,&UNK_014170db,8);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_1e0 != (long *)0x0) {
      lVar14 = *plStack_1e0;
      plStack_1e0 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_1e0;
    }
    plStack_1e0 = plVar8;
    auStack_260[0] = uStack_1e8;
    plStack_258 = (long *)0x0;
    uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
    uStack_248 = 1;
    uStack_240 = 0;
    puStack_238 = &UNK_04906f70;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &SUB_04906c50;
    puStack_220 = &UNK_0775a980;
    puStack_218 = &UNK_0775aae0;
    uStack_210 = 0;
    uStack_208 = 0;
    plStack_200 = (long *)0x0;
    func_0x048b05a0(puStack_1f0,auStack_260);
    plVar8 = plStack_200;
    if (plStack_200 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_200 + 0x10))(plStack_200);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0775a010(&puStack_1f8);
    func_0x048b0bc0(&plStack_1e0);
  }
  if ((DAT_0f5aaef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aaef0), iVar6 != 0)) {
    func_0x0775ad80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aae70,0xf53dab8);
    FUN_0410844d(&DAT_0f5aaef0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5aae70 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_076e9e40;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5aae70 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_076e9e40:
    puVar7 = &DAT_0f5aae70;
    if (iRam000000000f5aaed0 != -0x2b3da790) goto LAB_076e9ead;
LAB_076e9e6b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_076e9ead;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0775b3c0(&lStack_128,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_076e9e6b;
LAB_076e9ead:
    func_0x0775b3c0(&lStack_128,param_1,&UNK_0130e9e1,0xd);
  }
  if (cStack_f8 != '\0') {
    return;
  }
  if ((DAT_0f5aaf10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aaf10), iVar6 != 0)) {
    func_0x0775ae90();
    FUN_0410844d(&DAT_0f5aaf10);
  }
  lVar14 = lStack_128;
  uStack_100 = 0x292e075d00000001;
  if ((DAT_0f5aaef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aaef0), iVar6 != 0)) {
    func_0x0775ad80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aae70,0xf53dab8);
    FUN_0410844d(&DAT_0f5aaef0);
  }
  puStack_1f0 = (undefined8 *)(lVar14 + 0x18);
  plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5aae70 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_076e9f70;
    plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5aae70 + 4));
  if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_076e9f70:
    puStack_1f8 = &DAT_0f5aae70;
  }
  else {
    puStack_1f8 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_1f8,uStack_100._4_4_);
  puStack_1f8 = (undefined *)CONCAT62(puStack_1f8._2_6_,1);
  uStack_1e8 = uStack_100._4_4_;
  plStack_1e0 = (long *)0x0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = 0x12;
  uStack_1b7 = 0x61446b636f6c43;
  uStack_1b0 = 0x74;
  uStack_1af = 0x61;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0x3f600000;
  puStack_1f0 = &uStack_120;
  FUN_048afb10(&lStack_1a0,8);
  uStack_148 = 0;
  lStack_140 = 0;
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_138 = 0xff00;
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  uStack_12c = 0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0e3b18;
  if (plStack_1e0 != (long *)0x0) {
    lVar14 = *plStack_1e0;
    plStack_1e0 = plVar8;
    (**(code **)(lVar14 + 8))();
    plVar8 = plStack_1e0;
  }
  plStack_1e0 = plVar8;
  auStack_260[0] = uStack_1e8;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)((ulong)uStack_250 & 0xffffffff00000000);
  uStack_248 = 1;
  uStack_240 = 0;
  puStack_238 = &UNK_0775ed80;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_0775dbf0;
  puStack_220 = &UNK_0775ee40;
  puStack_218 = &UNK_0775f030;
  uStack_210 = 0;
  uStack_208 = 0;
  plStack_200 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_260);
  plVar8 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar9 = puStack_1f0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_260[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar14 = lStack_1d8;
  plVar1 = plStack_1e0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_258 = plVar8 + 3;
  plStack_1e0 = (long *)0x0;
  lStack_1d8 = 0;
  plVar8[3] = (long)plVar1;
  plVar8[4] = lVar14;
  plVar8[7] = lStack_1c0;
  plVar8[5] = lStack_1d0;
  plVar8[6] = lStack_1c8;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plVar8[10] = lStack_1a8;
  plVar8[8] = CONCAT71(uStack_1b7,uStack_1b8);
  plVar8[9] = CONCAT53(uStack_1ad,CONCAT21(uStack_1af,uStack_1b0));
  uStack_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1ad = 0;
  lStack_1a8 = 0;
  plVar8[0xb] = lStack_1a0;
  plVar8[0xc] = lStack_198;
  plVar8[0xd] = lStack_190;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  plVar8[0xe] = lStack_188;
  plVar8[0xf] = lStack_180;
  plVar8[0x10] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_170;
  plVar8[0x12] = lStack_168;
  plVar8[0x13] = lStack_160;
  plVar8[0x14] = lStack_158;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  plVar8[0x17] = lStack_140;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_150;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_150._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_148._4_4_;
  uStack_150 = 0;
  uStack_148 = 0;
  lStack_140 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_12c,CONCAT43(uStack_130,uStack_134._1_3_));
  plVar8[0x18] = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
  lStack_b8 = 0;
  uStack_b0 = (long *)0x0;
  uStack_250 = plVar8;
  func_0x048afd20(puVar9,auStack_260);
  plVar8 = uStack_250;
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_250 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_b0;
  if (uStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
      func_0x0412c2d0(plVar8);
    }
  }
  lVar14 = puVar9[2];
  iVar6 = *(int *)((long)puVar9 + 0x1c);
  if (iVar6 == 2) {
    piVar13 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != *(int *)(puVar9 + 3)) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != puVar9[1]; piVar13 = *(int **)(piVar13 + 0xe)) {
    }
LAB_076ea43a:
    piVar13[4] = piVar13[4] | (int)puStack_1f8 << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puVar9 + 3)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_076ea43a;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | (int)puStack_1f8 << 0x10;
    }
  }
  iVar6 = (int)uStack_100;
  uVar2 = uStack_100._4_4_;
  func_0x048b0bc0(&plStack_1e0);
  if (iVar6 != 4) {
    if (iVar6 != 1) {
      return;
    }
    if ((DAT_0f5aaef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aaef0), iVar6 != 0)) {
      func_0x0775ad80();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aae70,0xf53dab8);
      FUN_0410844d(&DAT_0f5aaef0);
    }
    plVar8 = (long *)(*(long *)(lStack_128 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_128 + 0x20) -
                                          *(long *)(lStack_128 + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f5aae70 + 4)) * 8);
    do {
      lVar14 = *plVar8;
      if (lVar14 == -1) goto LAB_076ea4c8;
      plVar8 = (long *)(*(long *)(lStack_128 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lStack_128 + 0x30) + 8 + lVar14 * 0x18) !=
             *(uint *)(_DAT_0f5aae70 + 4));
    if (plVar8 == *(long **)(lStack_128 + 0x38)) {
LAB_076ea4c8:
      puVar7 = &DAT_0f5aae70;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    puVar7 = (undefined *)func_0x048b0c90(lStack_128 + 0x18,puVar7,uVar2,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1f8 = (undefined *)0x0;
      puStack_1f0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1f8);
      puVar7 = puStack_1f8;
    }
    lVar14 = *(long *)(puVar7 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_076ea67e;
  }
  if ((DAT_0f5aaef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5aaef0), iVar6 != 0)) {
    func_0x0775ad80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5aae70,0xf53dab8);
    FUN_0410844d(&DAT_0f5aaef0);
  }
  plVar8 = (long *)(*(long *)(lStack_128 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_128 + 0x20) - *(long *)(lStack_128 + 0x18)
                                        ) >> 3) - 1U & *(uint *)(_DAT_0f5aae70 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_076ea538;
    plVar8 = (long *)(*(long *)(lStack_128 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lStack_128 + 0x30) + 8 + lVar14 * 0x18) !=
           *(uint *)(_DAT_0f5aae70 + 4));
  if (plVar8 == *(long **)(lStack_128 + 0x38)) {
LAB_076ea538:
    puVar7 = &DAT_0f5aae70;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
  }
  puVar7 = (undefined *)FUN_048b1040(lStack_128 + 0x18,puVar7,uVar2,1);
  if (puVar7 == (undefined *)0x0) {
    puStack_1f8 = (undefined *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_1f8);
    puVar10 = *(undefined **)(puStack_1f8 + 0x38);
    puVar7 = puStack_1f8;
    if (puVar10 == (undefined *)0x0) goto LAB_076ea60a;
LAB_076ea626:
    do {
      puVar7 = puVar10;
      puVar10 = *(undefined **)(puVar7 + 0x38);
      if (*(undefined **)(puVar7 + 0x38) == (undefined *)0x0) {
        puStack_1f8 = (undefined *)0x0;
        puStack_1f0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_1f8);
        puVar10 = puStack_1f8;
      }
    } while (puVar10 != (undefined *)0x0);
  }
  else {
    puVar10 = *(undefined **)(puVar7 + 0x38);
    if (*(undefined **)(puVar7 + 0x38) != (undefined *)0x0) goto LAB_076ea626;
LAB_076ea60a:
    puStack_1f8 = (undefined *)0x0;
    puStack_1f0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_1f8);
    puVar10 = puStack_1f8;
    if (puStack_1f8 != (undefined *)0x0) goto LAB_076ea626;
  }
  lVar14 = *(long *)(puVar7 + 0x48);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_076ea67e:
  puVar9[1] = 0x100;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f4e3cf0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined8 *)((long)puVar9 + 0x29) = 0;
  *(undefined8 *)((long)puVar9 + 0x31) = 0;
  plVar8 = *(long **)(lVar14 + 8);
  *(undefined8 **)(lVar14 + 8) = puVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


