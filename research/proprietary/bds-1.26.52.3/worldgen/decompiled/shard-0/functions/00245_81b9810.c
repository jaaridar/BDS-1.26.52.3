/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x82b9810 (ELF vaddr 0x81b9810)
 * Label: caller-of-callee
 * Body:  [[082b9810, 082ba381] [082ba390, 082ba58c] [082ba590, 082ba884]]
 * Ghidra: FUN_082b9810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_082b9810(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
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
  undefined4 auStack_210 [2];
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
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
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  char cStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0786f350();
  if ((DAT_0f5ceef8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ceef8), iVar6 != 0)) {
    func_0x08374ab0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cee78,0xf53dab8);
    func_0x0410844d(&DAT_0f5ceef8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5cee78 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_082b9890;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5cee78 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_082b9890:
    puVar7 = &DAT_0f5cee78;
    if (iRam000000000f5ceed8 != -0x2b3da790) goto LAB_082b98fd;
LAB_082b98bb:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_082b98fd;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x08374ee0(&lStack_d0,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_082b98bb;
LAB_082b98fd:
    func_0x08374ee0(&lStack_d0,param_1,&UNK_012291b6,0x16);
  }
  if (cStack_a0 == '\0') {
    uStack_200._4_4_ = (uint)((ulong)uStack_200 >> 0x20);
    func_0x083759f0(&puStack_1a8,&lStack_d0,&UNK_011be442,10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0ea848;
    if (plStack_190 != (long *)0x0) {
      lVar14 = *plStack_190;
      plStack_190 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_190;
    }
    plStack_190 = plVar8;
    auStack_210[0] = uStack_198;
    plStack_208 = (long *)0x0;
    uStack_200 = (long *)((ulong)uStack_200._4_4_ << 0x20);
    uStack_1f8 = 1;
    uStack_1f0 = 0;
    puStack_1e8 = &UNK_078c3740;
    puStack_1e0 = &SUB_048b06d0;
    puStack_1d8 = &SUB_078bf400;
    puStack_1d0 = &UNK_08375fa0;
    puStack_1c8 = &UNK_08376100;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x048b05a0(puStack_1a0,auStack_210);
    plVar8 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x08375ca0(&puStack_1a8);
    cVar4 = cStack_a0;
    lVar14 = lStack_d0;
    uStack_58 = uStack_c8;
    uStack_50 = uStack_c0;
    uStack_48 = uStack_b8;
    uStack_44 = uStack_b4;
    uStack_40 = uStack_b0;
    uStack_3c = uStack_ac;
    FUN_048b0bc0(&plStack_190);
    if ((DAT_0f5ceef8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ceef8), iVar6 != 0)) {
      func_0x08374ab0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5cee78,0xf53dab8);
      func_0x0410844d(&DAT_0f5ceef8);
    }
    plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5cee78 + 4)) * 8);
    do {
      lVar12 = *plVar8;
      if (lVar12 == -1) goto LAB_082b9b01;
      plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5cee78 + 4)
            );
    if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_082b9b01:
      puVar7 = &DAT_0f5cee78;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < (int)uStack_a8 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0120df12),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar7 = (undefined *)func_0x048b0c90(lVar14 + 0x18,puVar7,uStack_a8._4_4_,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1a8);
      puVar7 = puStack_1a8;
    }
    *(undefined1 *)(*(long *)(puVar7 + 0x58) + 0xa8) = 5;
    lStack_98 = lVar14;
    plStack_90 = (long *)uStack_58;
    uStack_88 = (undefined4)uStack_50;
    uStack_84 = uStack_50._4_4_;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    iStack_70 = (int)uStack_a8;
    uStack_6c = uStack_a8._4_4_;
    cStack_68 = cVar4;
    func_0x083759f0(&puStack_1a8,&lStack_98,&UNK_0124399b,6);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0c2a88;
    if (plStack_190 != (long *)0x0) {
      lVar14 = *plStack_190;
      plStack_190 = plVar8;
      (**(code **)(lVar14 + 8))();
      plVar8 = plStack_190;
    }
    plStack_190 = plVar8;
    auStack_210[0] = uStack_198;
    plStack_208 = (long *)0x0;
    uStack_200 = (long *)((ulong)uStack_200 & 0xffffffff00000000);
    uStack_1f8 = 1;
    uStack_1f0 = 0;
    puStack_1e8 = &UNK_0729f0a0;
    puStack_1e0 = &SUB_048b06d0;
    puStack_1d8 = &UNK_0651e820;
    puStack_1d0 = &UNK_08376560;
    puStack_1c8 = &UNK_083766c0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x0;
    func_0x048b05a0(puStack_1a0,auStack_210);
    plVar8 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      lVar14 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x08375ca0(&puStack_1a8);
    FUN_048b0bc0(&plStack_190);
  }
  if ((DAT_0f5cedb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cedb8), iVar6 != 0)) {
    func_0x08372e00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ced38,0xf53dab8);
    func_0x0410844d(&DAT_0f5cedb8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5ced38 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_082b9d70;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f5ced38 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_082b9d70:
    puVar7 = &DAT_0f5ced38;
    if (iRam000000000f5ced98 != -0x2b3da790) goto LAB_082b9ddd;
LAB_082b9d9b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_082b9ddd;
    bVar15 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar15) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x083768a0(&lStack_d0,param_1,lVar12,uVar11);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_082b9d9b;
LAB_082b9ddd:
    func_0x083768a0(&lStack_d0,param_1,&UNK_011a360d,0x1e);
  }
  if (cStack_a0 != '\0') {
    return;
  }
  if ((DAT_0f5ced20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5ced20), iVar6 != 0)) {
    func_0x08372b50();
    func_0x0410844d(&DAT_0f5ced20);
  }
  lVar14 = lStack_d0;
  uStack_a8 = 0xfb96274700000001;
  if ((DAT_0f5cedb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cedb8), iVar6 != 0)) {
    func_0x08372e00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ced38,0xf53dab8);
    func_0x0410844d(&DAT_0f5cedb8);
  }
  puStack_1a0 = (undefined8 *)(lVar14 + 0x18);
  plVar8 = (long *)(*(long *)(lVar14 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5ced38 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_082b9ea0;
    plVar8 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5ced38 + 4));
  if (plVar8 == *(long **)(lVar14 + 0x38)) {
LAB_082b9ea0:
    puStack_1a8 = &DAT_0f5ced38;
  }
  else {
    puStack_1a8 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_1a8,uStack_a8._4_4_);
  puStack_1a8 = (undefined *)CONCAT62(puStack_1a8._2_6_,1);
  uStack_198 = uStack_a8._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  puStack_1a0 = &uStack_c8;
  puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_158 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar2 = _UNK_0147e723;
  lStack_168 = 0x21;
  lStack_160 = 0x1b;
  *(ulong *)((long)puStack_158 + 0xb) = CONCAT35(_UNK_0147e720,_DAT_0147e71b);
  *(undefined8 *)((long)puStack_158 + 0x13) = uVar2;
  uVar2 = CONCAT53(_DAT_0147e71b,_UNK_0147e718);
  *puStack_158 = _DAT_0147e710;
  puStack_158[1] = uVar2;
  *(undefined1 *)((long)puStack_158 + 0x1b) = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_120 = 0x3f600000;
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
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f1152d8;
  if (plStack_190 != (long *)0x0) {
    lVar14 = *plStack_190;
    plStack_190 = plVar8;
    (**(code **)(lVar14 + 8))();
    plVar8 = plStack_190;
  }
  plStack_190 = plVar8;
  auStack_210[0] = uStack_198;
  plStack_208 = (long *)0x0;
  uStack_200 = (long *)((ulong)uStack_200 & 0xffffffff00000000);
  uStack_1f8 = 1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_0837a310;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_08379180;
  puStack_1d0 = &UNK_0837a3d0;
  puStack_1c8 = &UNK_0837a5c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_210);
  plVar8 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar9 = puStack_1a0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_210[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar14 = lStack_188;
  plVar1 = plStack_190;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_208 = plVar8 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar8[3] = (long)plVar1;
  plVar8[4] = lVar14;
  plVar8[7] = lStack_170;
  plVar8[5] = lStack_180;
  plVar8[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar8[10] = (long)puStack_158;
  plVar8[8] = lStack_168;
  plVar8[9] = lStack_160;
  lStack_168 = 0;
  lStack_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  plVar8[0xb] = lStack_150;
  plVar8[0xc] = lStack_148;
  plVar8[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar8[0xe] = lStack_138;
  plVar8[0xf] = lStack_130;
  plVar8[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_120;
  plVar8[0x12] = lStack_118;
  plVar8[0x13] = lStack_110;
  plVar8[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar8[0x17] = lStack_f0;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar8[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  lStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_200 = plVar8;
  func_0x048afd20(puVar9,auStack_210);
  plVar8 = uStack_200;
  if (uStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_200 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_200 + 0x10))(uStack_200);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
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
LAB_082ba39a:
    piVar13[4] = piVar13[4] | (int)puStack_1a8 << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar13 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != *(int *)(puVar9 + 3)) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_082ba39a;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | (int)puStack_1a8 << 0x10;
    }
  }
  iVar6 = (int)uStack_a8;
  uVar3 = uStack_a8._4_4_;
  FUN_048b0bc0(&plStack_190);
  if (iVar6 != 4) {
    if (iVar6 != 1) {
      return;
    }
    if ((DAT_0f5cedb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cedb8), iVar6 != 0)) {
      func_0x08372e00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ced38,0xf53dab8);
      func_0x0410844d(&DAT_0f5cedb8);
    }
    plVar8 = (long *)(*(long *)(lStack_d0 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d0 + 0x20) - *(long *)(lStack_d0 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5ced38 + 4)) * 8);
    do {
      lVar14 = *plVar8;
      if (lVar14 == -1) goto LAB_082ba428;
      plVar8 = (long *)(*(long *)(lStack_d0 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d0 + 0x30) + 8 + lVar14 * 0x18) !=
             *(uint *)(_DAT_0f5ced38 + 4));
    if (plVar8 == *(long **)(lStack_d0 + 0x38)) {
LAB_082ba428:
      puVar7 = &DAT_0f5ced38;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    puVar7 = (undefined *)func_0x048b0c90(lStack_d0 + 0x18,puVar7,uVar3,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_1a8);
      puVar7 = puStack_1a8;
    }
    lVar14 = *(long *)(puVar7 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_082ba5de;
  }
  if ((DAT_0f5cedb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5cedb8), iVar6 != 0)) {
    func_0x08372e00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ced38,0xf53dab8);
    func_0x0410844d(&DAT_0f5cedb8);
  }
  plVar8 = (long *)(*(long *)(lStack_d0 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_d0 + 0x20) - *(long *)(lStack_d0 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5ced38 + 4)) * 8);
  do {
    lVar14 = *plVar8;
    if (lVar14 == -1) goto LAB_082ba498;
    plVar8 = (long *)(*(long *)(lStack_d0 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(lStack_d0 + 0x30) + 8 + lVar14 * 0x18) !=
           *(uint *)(_DAT_0f5ced38 + 4));
  if (plVar8 == *(long **)(lStack_d0 + 0x38)) {
LAB_082ba498:
    puVar7 = &DAT_0f5ced38;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
  }
  puVar7 = (undefined *)func_0x048b1040(lStack_d0 + 0x18,puVar7,uVar3,1);
  if (puVar7 == (undefined *)0x0) {
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_1a8);
    puVar10 = *(undefined **)(puStack_1a8 + 0x38);
    puVar7 = puStack_1a8;
    if (puVar10 == (undefined *)0x0) goto LAB_082ba56a;
LAB_082ba586:
    do {
      puVar7 = puVar10;
      puVar10 = *(undefined **)(puVar7 + 0x38);
      if (*(undefined **)(puVar7 + 0x38) == (undefined *)0x0) {
        puStack_1a8 = (undefined *)0x0;
        puStack_1a0 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_1a8);
        puVar10 = puStack_1a8;
      }
    } while (puVar10 != (undefined *)0x0);
  }
  else {
    puVar10 = *(undefined **)(puVar7 + 0x38);
    if (*(undefined **)(puVar7 + 0x38) != (undefined *)0x0) goto LAB_082ba586;
LAB_082ba56a:
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    func_0x048b10d0(&puStack_1a8);
    puVar10 = puStack_1a8;
    if (puStack_1a8 != (undefined *)0x0) goto LAB_082ba586;
  }
  lVar14 = *(long *)(puVar7 + 0x48);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_082ba5de:
  puVar9[1] = 5;
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



/* ---- referenced strings ----
 * 0x147e710  Armor Slot and Damage Pairs
 * 0x147e71b  and Damage Pairs
 */
