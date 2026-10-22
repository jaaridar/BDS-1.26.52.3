/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa29eab0 (ELF vaddr 0xa19eab0)
 * Label: string:PlaceJigsawError
 * Body:  [[0a29eab0, 0a29ef7b] [0a29ef80, 0a29f085] [0a29f090, 0a29f1b9]]
 * Ghidra: FUN_0a29eab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a29eab0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined6 uStack_18e;
  undefined4 uStack_188;
  undefined2 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  undefined1 auStack_50 [32];
  
  uStack_1a0 = CONCAT31((int3)_DAT_014030d8,0x20);
  uStack_19c = (undefined4)((ulong)_DAT_014030d8 >> 0x18);
  uStack_198._0_1_ = (undefined1)((ulong)_DAT_014030d8 >> 0x38);
  uStack_198._1_3_ = (undefined3)_UNK_014030e0;
  uStack_194 = (undefined4)((ulong)_UNK_014030e0 >> 0x18);
  uStack_190 = (undefined1)((ulong)_UNK_014030e0 >> 0x38);
  uStack_18f = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  func_0x048b1dc0(&puStack_120);
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  if ((uStack_138 & 1) == 0) {
    lStack_128 = CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190));
    uStack_138 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_130 = CONCAT44(uStack_194,uStack_198);
  }
  else {
    func_0x04885120(&uStack_138,(long)&uStack_1a0 + 1,0x10);
  }
  plVar8 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar8 == (long *)0x0) {
    func_0x048b0de0(&uStack_d8,auStack_50);
    _DAT_0f54fd90 = (undefined4)uStack_d8;
    uRam000000000f54fd94 = uStack_d8._4_4_;
    uVar3 = (undefined4)uStack_d0;
    uVar4 = uStack_d0._4_4_;
    uStack_d8 = (undefined *)0x0;
    uStack_d0 = (long *)0x0;
    plVar8 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar6 = uStack_d0 + 1;
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f65e250 == '\0') && (iVar5 = func_0x04108328(&DAT_0f65e250), iVar5 != 0)) {
    func_0x0a3175e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f65e1d0,0xf53dab8);
    func_0x0410844d(&DAT_0f65e250);
  }
  plVar6 = (long *)(*plVar8 +
                   (ulong)((int)((ulong)(plVar8[1] - *plVar8) >> 3) - 1U &
                          *(uint *)(_DAT_0f65e1d0 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_0a29ec71;
    plVar6 = (long *)(plVar8[3] + lVar7 * 0x18);
  } while (*(uint *)(plVar8[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f65e1d0 + 4));
  if (plVar6 == (long *)plVar8[4]) {
LAB_0a29ec71:
    puStack_120 = &DAT_0f65e1d0;
  }
  else {
    puStack_120 = (undefined *)plVar6[2];
  }
  lVar7 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  plStack_118 = plVar8;
  if (lVar7 == 0) {
    func_0x048b0de0(&uStack_d8,auStack_50);
    _DAT_0f54fd90 = (undefined4)uStack_d8;
    uRam000000000f54fd94 = uStack_d8._4_4_;
    uVar3 = (undefined4)uStack_d0;
    uVar4 = uStack_d0._4_4_;
    uStack_d8 = (undefined *)0x0;
    uStack_d0 = (long *)0x0;
    plVar8 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar6 = uStack_d0 + 1;
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        func_0x0412c2d0(plVar8);
      }
    }
    lVar7 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f65e270 == '\0') && (iVar5 = func_0x04108328(&DAT_0f65e270), iVar5 != 0)) {
    func_0x0a3176e0();
    func_0x0410844d(&DAT_0f65e270);
  }
  if ((DAT_0f65e270 == '\0') && (iVar5 = func_0x04108328(&DAT_0f65e270), iVar5 != 0)) {
    func_0x0a3176e0();
    func_0x0410844d(&DAT_0f65e270);
  }
  uStack_d8 = &DAT_0f65e258;
  uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,_DAT_0f65e25c);
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0x80;
  uStack_b8 = 0xb0;
  puStack_b0 = &UNK_0a317520;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_98 = &UNK_0a317760;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
  func_0x048aee30(auStack_50,lVar7,&uStack_d8,0xb7762584);
  lVar7 = lStack_60;
  lStack_60 = 0;
  if (lVar7 != 0) {
    func_0x048ae940(lVar7);
    func_0x0412a280(lVar7,0x78);
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_68 + 1;
    lVar7 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f584e80 == '\0') && (iVar5 = func_0x04108328(&DAT_0f584e80), iVar5 != 0)) {
    func_0x066c3c40(0xf584e68);
    func_0x0410844d(&DAT_0f584e80);
  }
  uStack_d8 = (undefined *)CONCAT44(uStack_d8._4_4_,_DAT_0f584e6c);
  uStack_d0 = (long *)&UNK_066c3cb0;
  puStack_c8 = &UNK_0a317a10;
  func_0x05da1460(auStack_50);
  if ((uStack_1a0 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190)),
                    CONCAT44(uStack_19c,uStack_1a0) & 0xfffffffffffffffe);
  }
  uStack_188 = _DAT_0f6422a0;
  uStack_184 = _DAT_0f6422a4;
  if ((_DAT_0f6422a8 & 1) == 0) {
    uStack_170 = _DAT_0f6422b8;
    uStack_180 = _DAT_0f6422a8;
    uStack_17c = uRam000000000f6422ac;
    uStack_178 = _DAT_0f6422b0;
    uStack_174 = uRam000000000f6422b4;
  }
  else {
    func_0x0412e5e0(&uStack_180,_DAT_0f6422b8,CONCAT44(uRam000000000f6422b4,_DAT_0f6422b0));
  }
  func_0x0730fa70(&lStack_168,&uStack_188,0);
  if ((uStack_180 & 1) != 0) {
    func_0x0412a280(uStack_170,CONCAT44(uStack_17c,uStack_180) & 0xfffffffffffffffe);
  }
  lVar1 = lStack_150;
  lVar7 = lStack_148;
  if (lStack_150 != 0) {
    for (; lVar1 != lVar7; lVar7 = lVar7 + -0x30) {
      if ((*(byte *)(lVar7 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar7 + -0x10),
                        *(ulong *)(lVar7 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_148 = lVar1;
    func_0x0412a280(lStack_150,lStack_140 - lStack_150);
  }
  lVar2 = lStack_158;
  lVar1 = lStack_160;
  lVar7 = lStack_168;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  *param_1 = lVar7;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  param_1[5] = lStack_128;
  param_1[3] = uStack_138;
  param_1[4] = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  param_1[6] = (long)puStack_120;
  param_1[7] = (long)plStack_118;
  param_1[8] = lStack_110;
  param_1[9] = lStack_108;
  param_1[10] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_f8;
  *(undefined4 *)((long)param_1 + 0x5c) = uStack_f8._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_f0;
  *(undefined4 *)((long)param_1 + 100) = uStack_f0._4_4_;
  param_1[0xd] = lStack_e8;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  func_0x0652e2f0(&lStack_150);
  lVar1 = lStack_168;
  lVar7 = lStack_160;
  if (lStack_168 != 0) {
    for (; lVar1 != lVar7; lVar7 = lVar7 + -0x30) {
      if ((*(byte *)(lVar7 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar7 + -0x10),
                        *(ulong *)(lVar7 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_160 = lVar1;
    func_0x0412a280(lStack_168,lStack_158 - lStack_168);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14030d8  PlaceJigsawError
 */
