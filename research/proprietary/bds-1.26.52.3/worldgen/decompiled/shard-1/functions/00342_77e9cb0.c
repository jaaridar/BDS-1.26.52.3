/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x78e9cb0 (ELF vaddr 0x77e9cb0)
 * Label: caller-of-callee
 * Body:  [[078e9cb0, 078eab61] [078eab70, 078ed74e]]
 * Ghidra: FUN_078e9cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_078e9cb0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  bool bVar15;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined2 uStack_98;
  undefined2 uStack_96;
  uint uStack_94;
  uint uStack_90;
  undefined1 uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  char cStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x078ed980();
  func_0x07be4da0(param_1);
  func_0x07dda5d0(param_1);
  func_0x07de5830(param_1);
  func_0x0786eae0(param_1);
  func_0x07bf3530(param_1);
  func_0x07b97f60(param_1);
  func_0x07820f40(param_1);
  if ((DAT_0f5b18f8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b18f8), iVar6 != 0)) {
    func_0x07937000();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b1878,0xf53dab8);
    func_0x0410844d(&DAT_0f5b18f8);
  }
  lVar9 = param_1 + 0x18;
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b1878 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_078e9d60;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b1878 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_078e9d60:
    puVar7 = &DAT_0f5b1878;
    if (iRam000000000f5b18d8 != -0x2b3da790) goto LAB_078e9dcd;
LAB_078e9d8b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_078e9dcd;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x07937830(&lStack_88,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_078e9d8b;
LAB_078e9dcd:
    func_0x07937830(&lStack_88,param_1,&UNK_011a1d2b,0x1c);
  }
  if (cStack_58 == '\0') {
    uStack_1b0._4_4_ = (uint)((ulong)uStack_1b0 >> 0x20);
    func_0x079383b0(&puStack_158,&lStack_88,&UNK_012db118,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar14 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0._4_4_ << 0x20);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_048b3f30;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_07938960;
    puStack_178 = &UNK_07938b20;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07938660(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x079383b0(&puStack_158,&lStack_88,&UNK_0128f36b,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0eddf0;
    if (plStack_140 != (long *)0x0) {
      lVar14 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0793c1e0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0793bbf0;
    puStack_180 = &UNK_0793c1f0;
    puStack_178 = &UNK_0793c350;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07938660(&puStack_158);
    lVar14 = lStack_88;
    iVar6 = (int)uStack_60;
    uVar3 = uStack_60._4_4_;
    lStack_50 = lVar9;
    func_0x048b0bc0(&plStack_140);
    if ((DAT_0f5b18f8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5b18f8), iVar5 != 0)) {
      func_0x07937000();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b1878,0xf53dab8);
      func_0x0410844d(&DAT_0f5b18f8);
    }
    plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b1878 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_078ea0e1;
      plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b1878 + 4))
    ;
    if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_078ea0e1:
      puVar7 = &DAT_0f5b1878;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013fda1d),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar7 = (undefined *)func_0x048b0c90(lVar14 + 0x18,puVar7,uVar3,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_158 = (undefined *)0x0;
      puStack_150 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_158);
      puVar7 = puStack_158;
    }
    *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa8) = 4;
    func_0x079383b0(&puStack_158,&lStack_88,&UNK_012407df,6);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    lVar9 = lStack_50;
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef42d08;
    if (plStack_140 != (long *)0x0) {
      lVar14 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_048b06c0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b02c0;
    puStack_180 = &UNK_0793c7b0;
    puStack_178 = &UNK_0793c910;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07938660(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x079383b0(&puStack_158,&lStack_88,&UNK_013e38df,0xe);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar14 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04906f70;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_0793caf0;
    puStack_178 = &UNK_0793cc50;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07938660(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x079383b0(&puStack_158,&lStack_88,&UNK_0147c0cf,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar14 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_048b3f30;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_0793ce30;
    puStack_178 = &UNK_0793d000;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07938660(&puStack_158);
    func_0x048b0bc0(&plStack_140);
  }
  func_0x07b97f60(param_1);
  func_0x07bf3530(param_1);
  if ((DAT_0f5b1ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b1ef0), iVar6 != 0)) {
    func_0x0794d4f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b1e70,0xf53dab8);
    func_0x0410844d(&DAT_0f5b1ef0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b1e70 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_078ea580;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5b1e70 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_078ea580:
    puVar7 = &DAT_0f5b1e70;
    if (iRam000000000f5b1ed0 != -0x2b3da790) goto LAB_078ea5ed;
LAB_078ea5ab:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_078ea5ed;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0799c340(&lStack_88,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_078ea5ab;
LAB_078ea5ed:
    func_0x0799c340(&lStack_88,param_1,&UNK_0147ce2f,0xc);
  }
  if (cStack_58 != '\0') goto LAB_078eab82;
  if ((DAT_0f5b1e58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b1e58), iVar6 != 0)) {
    func_0x0794d3b0();
    func_0x0410844d(&DAT_0f5b1e58);
  }
  lVar14 = lStack_88;
  uStack_60 = 0x25bb4ed100000001;
  if ((DAT_0f5b1ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5b1ef0), iVar6 != 0)) {
    func_0x0794d4f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b1e70,0xf53dab8);
    func_0x0410844d(&DAT_0f5b1ef0);
  }
  puStack_150 = (undefined1 *)(lVar14 + 0x18);
  plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5b1e70 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_078ea6b0;
    plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5b1e70 + 4));
  if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_078ea6b0:
    puStack_158 = &DAT_0f5b1e70;
  }
  else {
    puStack_158 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_158,uStack_60._4_4_);
  puStack_158 = (undefined *)CONCAT62(puStack_158._2_6_,1);
  uStack_148 = uStack_60._4_4_;
  plStack_140 = (long *)0x0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_118 = 0x73726f6c6f430c;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0x3f600000;
  puStack_150 = auStack_80;
  func_0x048afb10(&lStack_100,8);
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_98 = 0xff00;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_8c = 0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0ed9a0;
  if (plStack_140 != (long *)0x0) {
    lVar14 = *plStack_140;
    plStack_140 = plVar8;
    (**(code **)(lVar14 + 8))();
    plVar8 = plStack_140;
  }
  plStack_140 = plVar8;
  auStack_1c0[0] = uStack_148;
  plStack_1b8 = (long *)0x0;
  uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
  uStack_1a8 = 1;
  uStack_1a0 = 0;
  puStack_198 = &UNK_0799f7f0;
  puStack_190 = &SUB_048b06d0;
  puStack_188 = &UNK_0799f010;
  puStack_180 = &UNK_0799f8b0;
  puStack_178 = &UNK_0799fa30;
  uStack_170 = 0;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  func_0x048b05a0(puStack_150,auStack_1c0);
  plVar8 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar2 = puStack_150;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_1c0[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar14 = lStack_138;
  plVar1 = plStack_140;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_1b8 = plVar8 + 3;
  plStack_140 = (long *)0x0;
  lStack_138 = 0;
  plVar8[3] = (long)plVar1;
  plVar8[4] = lVar14;
  plVar8[7] = lStack_120;
  plVar8[5] = lStack_130;
  plVar8[6] = lStack_128;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  plVar8[10] = lStack_108;
  plVar8[8] = lStack_118;
  plVar8[9] = lStack_110;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar8[0xb] = lStack_100;
  plVar8[0xc] = lStack_f8;
  plVar8[0xd] = lStack_f0;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  plVar8[0xe] = lStack_e8;
  plVar8[0xf] = lStack_e0;
  plVar8[0x10] = lStack_d8;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_d0;
  plVar8[0x12] = lStack_c8;
  plVar8[0x13] = lStack_c0;
  plVar8[0x14] = lStack_b8;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  plVar8[0x17] = lStack_a0;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_b0;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_b0._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_a8;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_a8._4_4_;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_8c,CONCAT43(uStack_90,uStack_94._1_3_));
  plVar8[0x18] = CONCAT44(uStack_94,CONCAT22(uStack_96,uStack_98));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_1b0 = plVar8;
  func_0x048afd20(puVar2,auStack_1c0);
  plVar8 = uStack_1b0;
  if (uStack_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar8);
    }
  }
  lVar14 = *(long *)(puVar2 + 0x10);
  iVar6 = *(int *)(puVar2 + 0x1c);
  if (iVar6 == 2) {
    piVar13 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != *(int *)(puVar2 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar2 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
LAB_078eab7a:
    piVar13[4] = piVar13[4] | (int)puStack_158 << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puVar2 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_078eab7a;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | (int)puStack_158 << 0x10;
    }
  }
  func_0x048b0bc0(&plStack_140);
LAB_078eab82:
  func_0x09bf6120(param_1);
  lVar9 = func_0x0793d1e0(lVar9);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar15 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar14 = lVar9 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar9 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0793d7e0(&lStack_88,param_1,lVar14,uVar11);
  }
  else {
    func_0x0793d7e0(&lStack_88,param_1,&UNK_013e38ee,0xe);
  }
  if (cStack_58 == '\0') {
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_012f5e8c,2);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_0793e690;
    puStack_178 = &UNK_0793e6e0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_011d820f,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_0793ea50;
    puStack_178 = &UNK_0793eaa0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0144c00f,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_0793eac0;
    puStack_178 = &UNK_0793eb10;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0137af5f,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0edbf0;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0793f290;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0793ef60;
    puStack_180 = &UNK_0793f2a0;
    puStack_178 = &UNK_0793f2f0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_011d8219,0x11);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ebf10;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07943950;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_07942600;
    puStack_180 = &UNK_07943a10;
    puStack_178 = &UNK_07943c10;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01463f91,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0edbf0;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_0793f290;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_0793ef60;
    puStack_180 = &UNK_07943fb0;
    puStack_178 = &UNK_07944000;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0147cdf9,0xc);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f087df0;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07944020;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_06d00d00;
    puStack_180 = &UNK_07944030;
    puStack_178 = &UNK_079441d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_011bd171,0x1c);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ec090;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07944f20;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_07944c00;
    puStack_180 = &UNK_07944f30;
    puStack_178 = &UNK_07945170;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_011bd18e,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_07945510;
    puStack_178 = &UNK_07945560;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01241970,6);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_07945580;
    puStack_178 = &UNK_079455d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01417465,6);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_079455f0;
    puStack_178 = &UNK_07945640;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_013b0114,7);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ea768;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07945660;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_078badc0;
    puStack_180 = &UNK_07945670;
    puStack_178 = &UNK_079457d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    iVar6 = (int)uStack_60;
    uVar3 = uStack_60._4_4_;
    func_0x048b0bc0(&plStack_140);
    uVar10 = func_0x0793d1e0(lStack_88 + 0x18);
    if ((1 < iVar6 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013613d5),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar7 = (undefined *)func_0x048b0c90(lStack_88 + 0x18,uVar10,uVar3,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_158 = (undefined *)0x0;
      puStack_150 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_158);
      puVar7 = puStack_158;
    }
    *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa8) = 4;
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_012dbf30,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f011c18;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07945b50;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_05dbbf30;
    puStack_180 = &UNK_07945b60;
    puStack_178 = &UNK_07945cc0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01463f9f,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ec108;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07949de0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_079486d0;
    puStack_180 = &UNK_07949ea0;
    puStack_178 = &UNK_0794a000;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_011d822b,0xf);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ec288;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07951e10;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &UNK_0794f570;
    puStack_180 = &UNK_07951ed0;
    puStack_178 = &UNK_07952030;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0120c8ab,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_079523d0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_079523e0;
    puStack_178 = &UNK_07952430;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0144c01d,9);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_079523d0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_07952780;
    puStack_178 = &UNK_079527d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_013b0f4e,0x1a);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_079523d0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_07952800;
    puStack_178 = &UNK_07952850;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0147ce06,0xd);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_079523d0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_07952880;
    puStack_178 = &UNK_079528d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_0132a418,0x19);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_079523d0;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_04906c50;
    puStack_180 = &UNK_07952900;
    puStack_178 = &UNK_07952950;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01395e1d,0xf);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ee020;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_07956280;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_07955890;
    puStack_180 = &UNK_07956290;
    puStack_178 = &UNK_079563f0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
    func_0x0793e120(&puStack_158,&lStack_88,&UNK_01395e2d,0xb);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (plStack_140 != (long *)0x0) {
      lVar9 = *plStack_140;
      plStack_140 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = plStack_140;
    }
    plStack_140 = plVar8;
    auStack_1c0[0] = uStack_148;
    plStack_1b8 = (long *)0x0;
    uStack_1b0 = (long *)((ulong)uStack_1b0 & 0xffffffff00000000);
    uStack_1a8 = 1;
    uStack_1a0 = 0;
    puStack_198 = &UNK_04905970;
    puStack_190 = &SUB_048b06d0;
    puStack_188 = &SUB_048b2190;
    puStack_180 = &UNK_07956780;
    puStack_178 = &UNK_079567d0;
    uStack_170 = 0;
    uStack_168 = 0;
    plStack_160 = (long *)0x0;
    func_0x048b05a0(puStack_150,auStack_1c0);
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    iVar6 = *(int *)(puStack_150 + 0x1c);
    if (iVar6 == 2) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar6 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != *(long *)(puStack_150 + 8)) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(*(long *)(puStack_150 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puStack_150 + 0x18)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_150 + 0x10) + 0x18) | 0x40000;
    }
    func_0x0793e390(&puStack_158);
    func_0x048b0bc0(&plStack_140);
  }
  return;
}


