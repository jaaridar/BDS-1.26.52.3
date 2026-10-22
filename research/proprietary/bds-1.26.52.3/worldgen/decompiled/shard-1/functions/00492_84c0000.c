/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x85c0000 (ELF vaddr 0x84c0000)
 * Label: caller-of-callee
 * Body:  [[085c0000, 085c0651] [085c0660, 085c0ca1] [085c0cb0, 085c168a]]
 * Ghidra: FUN_085c0000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_085c0000(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  bool bVar10;
  undefined4 auStack_258 [2];
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined *puStack_1f0;
  undefined4 *puStack_1e8;
  undefined4 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  uint uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  char cStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  char cStack_38;
  undefined7 uStack_37;
  
  func_0x07dba970();
  func_0x07ddabf0(param_1);
  func_0x07ccf220(param_1);
  if ((DAT_0f5d99a8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d99a8), iVar4 != 0)) {
    func_0x08675740();
    func_0x0410844d(&DAT_0f5d99a8);
  }
  uVar7 = _DAT_0f5d99a0;
  lVar9 = _DAT_0f5d9998;
  if ((DAT_0f5d9988 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9988), iVar4 != 0)) {
    func_0x08674670();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9908,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9988);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d9908 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_085c00a1;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d9908 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_085c00a1:
    puVar5 = &DAT_0f5d9908;
    iVar4 = iRam000000000f5d9968;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08674bc0(&uStack_120,param_1,lVar9,uVar7);
  if (cStack_f0 == '\0') {
    if ((DAT_0f5d99a8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d99a8), iVar4 != 0)) {
      func_0x08675740();
      func_0x0410844d(&DAT_0f5d99a8);
    }
    uStack_f8 = 0xe65fb50400000001;
    lVar9 = CONCAT44(uStack_11c,uStack_120);
    if ((DAT_0f5d9988 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9988), iVar4 != 0)) {
      func_0x08674670();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d9908,0xf53dab8);
      func_0x0410844d(&DAT_0f5d9988);
    }
    puStack_1e8 = (undefined4 *)(lVar9 + 0x18);
    plVar6 = (long *)(*(long *)(lVar9 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5d9908 + 4)) * 8);
    do {
      lVar2 = *plVar6;
      if (lVar2 == -1) goto LAB_085c01a0;
      plVar6 = (long *)(*(long *)(lVar9 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d9908 + 4));
    if (plVar6 == *(long **)(lVar9 + 0x38)) {
LAB_085c01a0:
      puStack_1f0 = &DAT_0f5d9908;
    }
    else {
      puStack_1f0 = (undefined *)plVar6[2];
    }
    func_0x0ed621a0(&puStack_1f0,uStack_f8._4_4_);
    puStack_1f0 = (undefined *)CONCAT62(puStack_1f0._2_6_,1);
    uStack_1e0 = uStack_f8._4_4_;
    plStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0x736e6f697463410e;
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    uStack_168 = 0x3f600000;
    puStack_1e8 = &uStack_118;
    func_0x048afb10(&lStack_198,8);
    uStack_140 = 0;
    lStack_138 = 0;
    lStack_150 = 0;
    uStack_148 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    uStack_130 = 0xff00;
    uStack_12c = uStack_12c & 0xffffff00;
    uStack_128 = uStack_128 & 0xffffff00;
    uStack_124 = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0f8a90;
    if (plStack_1d8 != (long *)0x0) {
      lVar9 = *plStack_1d8;
      plStack_1d8 = plVar6;
      (**(code **)(lVar9 + 8))();
      plVar6 = plStack_1d8;
    }
    plStack_1d8 = plVar6;
    auStack_258[0] = uStack_1e0;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_07e069a0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_07d9cc10;
    puStack_218 = &UNK_086757c0;
    puStack_210 = &UNK_08675930;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(puStack_1e8,auStack_258);
    plVar6 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar6);
      }
    }
    puVar3 = puStack_1e8;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_258[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar9 = lStack_1d0;
    plVar1 = plStack_1d8;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_250 = plVar6 + 3;
    plStack_1d8 = (long *)0x0;
    lStack_1d0 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar9;
    plVar6[7] = lStack_1b8;
    plVar6[5] = lStack_1c8;
    plVar6[6] = lStack_1c0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    plVar6[10] = lStack_1a0;
    plVar6[8] = lStack_1b0;
    plVar6[9] = uStack_1a8;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    lStack_1a0 = 0;
    plVar6[0xb] = lStack_198;
    plVar6[0xc] = lStack_190;
    plVar6[0xd] = lStack_188;
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
    plVar6[0xe] = lStack_180;
    plVar6[0xf] = lStack_178;
    plVar6[0x10] = lStack_170;
    lStack_180 = 0;
    lStack_178 = 0;
    lStack_170 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_168;
    plVar6[0x12] = lStack_160;
    plVar6[0x13] = lStack_158;
    plVar6[0x14] = lStack_150;
    lStack_160 = 0;
    lStack_158 = 0;
    lStack_150 = 0;
    plVar6[0x17] = lStack_138;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_148;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_148._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_140;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_140._4_4_;
    uStack_148 = 0;
    uStack_140 = 0;
    lStack_138 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
    plVar6[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
    uStack_e8 = 0;
    uStack_e0 = (long *)0x0;
    uStack_248 = plVar6;
    func_0x048afd20(puVar3,auStack_258);
    plVar6 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_248 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar6);
      }
    }
    lVar9 = *(long *)(puVar3 + 4);
    iVar4 = puVar3[7];
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != puVar3[6]) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 2); piVar8 = *(int **)(piVar8 + 0xe)) {
      }
LAB_085c066a:
      piVar8[4] = piVar8[4] | (int)puStack_1f0 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar8 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar4 = *piVar8;
        while (iVar4 != puVar3[6]) {
          piVar8 = piVar8 + 0x1a;
          iVar4 = *piVar8;
        }
        goto LAB_085c066a;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | (int)puStack_1f0 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_1d8);
  }
  if ((DAT_0f5d9a60 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9a60), iVar4 != 0)) {
    func_0x08676c90();
    func_0x0410844d(&DAT_0f5d9a60);
  }
  uVar7 = _DAT_0f5d9a58;
  lVar9 = _DAT_0f5d9a50;
  if ((DAT_0f5d9a40 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9a40), iVar4 != 0)) {
    func_0x08675bc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d99c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9a40);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d99c0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_085c06f1;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d99c0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_085c06f1:
    puVar5 = &DAT_0f5d99c0;
    iVar4 = iRam000000000f5d9a20;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08676110(&uStack_120,param_1,lVar9,uVar7);
  if (cStack_f0 != '\0') goto LAB_085c0cc2;
  if ((DAT_0f5d9a60 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9a60), iVar4 != 0)) {
    func_0x08676c90();
    func_0x0410844d(&DAT_0f5d9a60);
  }
  uStack_f8 = 0xe65fb50400000001;
  lVar9 = CONCAT44(uStack_11c,uStack_120);
  if ((DAT_0f5d9a40 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9a40), iVar4 != 0)) {
    func_0x08675bc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d99c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9a40);
  }
  puStack_1e8 = (undefined4 *)(lVar9 + 0x18);
  plVar6 = (long *)(*(long *)(lVar9 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5d99c0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_085c07f0;
    plVar6 = (long *)(*(long *)(lVar9 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d99c0 + 4));
  if (plVar6 == *(long **)(lVar9 + 0x38)) {
LAB_085c07f0:
    puStack_1f0 = &DAT_0f5d99c0;
  }
  else {
    puStack_1f0 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&puStack_1f0,uStack_f8._4_4_);
  puStack_1f0 = (undefined *)CONCAT62(puStack_1f0._2_6_,1);
  uStack_1e0 = uStack_f8._4_4_;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0x736e6f697463410e;
  uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x3f600000;
  puStack_1e8 = &uStack_118;
  func_0x048afb10(&lStack_198,8);
  uStack_140 = 0;
  lStack_138 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  uStack_130 = 0xff00;
  uStack_12c = uStack_12c & 0xffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_124 = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0f8a90;
  if (plStack_1d8 != (long *)0x0) {
    lVar9 = *plStack_1d8;
    plStack_1d8 = plVar6;
    (**(code **)(lVar9 + 8))();
    plVar6 = plStack_1d8;
  }
  plStack_1d8 = plVar6;
  auStack_258[0] = uStack_1e0;
  plStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
  uStack_240 = 1;
  uStack_238 = 0;
  puStack_230 = &UNK_07e069a0;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_07d9cc10;
  puStack_218 = &UNK_08676d10;
  puStack_210 = &UNK_08676e80;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_258);
  plVar6 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar3 = puStack_1e8;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_258[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar9 = lStack_1d0;
  plVar1 = plStack_1d8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_250 = plVar6 + 3;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar9;
  plVar6[7] = lStack_1b8;
  plVar6[5] = lStack_1c8;
  plVar6[6] = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar6[10] = lStack_1a0;
  plVar6[8] = lStack_1b0;
  plVar6[9] = uStack_1a8;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1a0 = 0;
  plVar6[0xb] = lStack_198;
  plVar6[0xc] = lStack_190;
  plVar6[0xd] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar6[0xe] = lStack_180;
  plVar6[0xf] = lStack_178;
  plVar6[0x10] = lStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_168;
  plVar6[0x12] = lStack_160;
  plVar6[0x13] = lStack_158;
  plVar6[0x14] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar6[0x17] = lStack_138;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_148._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_140;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_140._4_4_;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
  plVar6[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  uStack_e8 = 0;
  uStack_e0 = (long *)0x0;
  uStack_248 = plVar6;
  func_0x048afd20(puVar3,auStack_258);
  plVar6 = uStack_248;
  if (uStack_248 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_248 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_248 + 0x10))(uStack_248);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = uStack_e0;
  if (uStack_e0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_e0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar9 = *(long *)(puVar3 + 4);
  iVar4 = puVar3[7];
  if (iVar4 == 2) {
    piVar8 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
    iVar4 = *piVar8;
    while (iVar4 != puVar3[6]) {
      piVar8 = piVar8 + 0x16;
      iVar4 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar3 + 2); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
LAB_085c0cba:
    piVar8[4] = piVar8[4] | (int)puStack_1f0 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar8 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != puVar3[6]) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      goto LAB_085c0cba;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | (int)puStack_1f0 << 0x10;
    }
  }
  func_0x048b0bc0(&plStack_1d8);
LAB_085c0cc2:
  func_0x07dd3560(param_1);
  func_0x07dd88f0(param_1);
  func_0x07db7ab0(param_1);
  if ((DAT_0f5d97b0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d97b0), iVar4 != 0)) {
    func_0x08672a10();
    func_0x0410844d(&DAT_0f5d97b0);
  }
  uVar7 = _DAT_0f5d97a8;
  lVar9 = _DAT_0f5d97a0;
  if ((DAT_0f5d9848 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5d9848), iVar4 != 0)) {
    func_0x08672b50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d97c8,0xf53dab8);
    func_0x0410844d(&DAT_0f5d9848);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5d97c8 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_085c0d51;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5d97c8 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_085c0d51:
    puVar5 = &DAT_0f5d97c8;
    iVar4 = iRam000000000f5d9828;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08677050(&uStack_120,param_1,lVar9,uVar7);
  if (cStack_f0 == '\0') {
    func_0x08677be0(&puStack_1f0,&uStack_120,&UNK_014191a2,0x11,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f1159c8;
    if (plStack_1d8 != (long *)0x0) {
      lVar9 = *plStack_1d8;
      plStack_1d8 = plVar6;
      (**(code **)(lVar9 + 8))();
      plVar6 = plStack_1d8;
    }
    plStack_1d8 = plVar6;
    auStack_258[0] = uStack_1e0;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_08391a10;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &SUB_07e08100;
    puStack_218 = &UNK_086781a0;
    puStack_210 = &UNK_08678300;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(puStack_1e8,auStack_258);
    plVar6 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x08677ea0(&puStack_1f0);
    cStack_38 = cStack_f0;
    uStack_48 = uStack_100;
    uStack_44 = uStack_fc;
    uStack_40 = (undefined4)uStack_f8;
    uStack_3c = uStack_f8._4_4_;
    uStack_58 = uStack_110;
    uStack_54 = uStack_10c;
    uStack_50 = uStack_108;
    uStack_4c = uStack_104;
    uStack_68 = uStack_120;
    uStack_64 = uStack_11c;
    uStack_60 = uStack_118;
    uStack_5c = uStack_114;
    func_0x048b0bc0(&plStack_1d8);
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    uStack_78 = CONCAT71(uStack_37,cStack_38);
    func_0x08677be0(&puStack_1f0,&uStack_a8,&UNK_0132b97d,0x15,0);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f115a40;
    if (plStack_1d8 != (long *)0x0) {
      lVar9 = *plStack_1d8;
      plStack_1d8 = plVar6;
      (**(code **)(lVar9 + 8))();
      plVar6 = plStack_1d8;
    }
    plStack_1d8 = plVar6;
    auStack_258[0] = uStack_1e0;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 1;
    uStack_238 = 0;
    puStack_230 = &UNK_083965d0;
    puStack_228 = &SUB_048b06d0;
    puStack_220 = &UNK_08396290;
    puStack_218 = &UNK_086784d0;
    puStack_210 = &UNK_086786b0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(puStack_1e8,auStack_258);
    plVar6 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar6);
      }
    }
    iVar4 = puStack_1e8[7];
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_1e8 + 4) + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != puStack_1e8[6]) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      lVar9 = *(long *)(piVar8 + 0xc);
      while (lVar9 != *(long *)(puStack_1e8 + 2)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar9 = *(long *)(piVar8 + 0xc);
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar4 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_1e8 + 4) + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != puStack_1e8[6]) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar4 == 0) {
      *(uint *)(*(long *)(puStack_1e8 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_1e8 + 4) + 0x18) | 0x40000;
    }
    func_0x08677ea0(&puStack_1f0);
    uStack_b8 = (undefined1)uStack_78;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_e0 = (long *)CONCAT44(uStack_9c,uStack_a0);
    func_0x048b0bc0(&plStack_1d8);
    func_0x08677be0(&puStack_1f0,&uStack_e8,&UNK_012f7a8e,0xb,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f125310;
    if (plStack_1d8 != (long *)0x0) {
      lVar9 = *plStack_1d8;
      plStack_1d8 = plVar6;
      (**(code **)(lVar9 + 8))();
      plVar6 = plStack_1d8;
    }
    plStack_1d8 = plVar6;
    auStack_258[0] = 0xd0481ac3;
    plStack_250 = (long *)0x0;
    uStack_248 = (long *)((ulong)uStack_248 & 0xffffffff00000000);
    uStack_240 = 2;
    uStack_238 = 1;
    puStack_230 = &UNK_0867fcd0;
    puStack_228 = &UNK_07d98660;
    puStack_220 = &UNK_0867d750;
    puStack_218 = &UNK_0867fcf0;
    puStack_210 = &UNK_0867fff0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f8 = (long *)0x0;
    func_0x048b05a0(puStack_1e8,auStack_258);
    plVar6 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar6);
      }
    }
    iVar4 = puStack_1e8[7];
    if (iVar4 == 2) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_1e8 + 4) + 0x78) + 0x60);
      iVar4 = *piVar8;
      while (iVar4 != puStack_1e8[6]) {
        piVar8 = piVar8 + 0x16;
        iVar4 = *piVar8;
      }
      lVar9 = *(long *)(piVar8 + 0xc);
      while (lVar9 != *(long *)(puStack_1e8 + 2)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar9 = *(long *)(piVar8 + 0xc);
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar4 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_1e8 + 4) + 0x78) + 0x48);
      iVar4 = *piVar8;
      while (iVar4 != puStack_1e8[6]) {
        piVar8 = piVar8 + 0x1a;
        iVar4 = *piVar8;
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar4 == 0) {
      *(uint *)(*(long *)(puStack_1e8 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_1e8 + 4) + 0x18) | 0x40000;
    }
    func_0x08677ea0(&puStack_1f0);
    func_0x048b0bc0(&plStack_1d8);
  }
  return;
}


