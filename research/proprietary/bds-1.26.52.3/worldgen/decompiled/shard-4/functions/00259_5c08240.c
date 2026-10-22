/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d08240 (ELF vaddr 0x5c08240)
 * Label: caller-of-callee
 * Body:  [[05d08240, 05d08ab1] [05d08ac0, 05d08c71]]
 * Ghidra: FUN_05d08240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d08240(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined4 uStack_1a8;
  uint uStack_1a4;
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
  undefined4 auStack_120 [2];
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
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
  undefined8 uStack_80;
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
  char cStack_38;
  
  uVar4 = _DAT_0f543518;
  uVar7 = func_0x0eee2e90(_DAT_0f543518);
  if (uVar7 < 0xfffffffffffffff8) {
    puVar2 = (undefined *)((long)&uStack_1f0 + 1);
    if (uVar7 < 0x17) {
      uStack_1f0 = CONCAT71(uStack_1f0._1_7_,(char)uVar7 * '\x02');
      lVar8 = (long)puVar2;
      if (uVar7 != 0) goto LAB_05d082d8;
    }
    else {
      uVar13 = 0x1a;
      if ((uVar7 | 7) != 0x17) {
        uVar13 = (uVar7 | 7) + 1;
      }
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (lVar8 == 0) {
        func_0x0eec74c0(uVar13,0);
      }
      uStack_1f0 = uVar13 | 1;
      puStack_1e8 = (undefined4 *)uVar7;
      puStack_1e0 = (undefined *)lVar8;
LAB_05d082d8:
      memmove(lVar8,uVar4,uVar7);
    }
    uVar13 = uStack_1f0;
    *(undefined1 *)(lVar8 + uVar7) = 0;
    puVar5 = puStack_1e0;
    puVar14 = (undefined4 *)(uStack_1f0 >> 1 & 0x7f);
    if ((uStack_1f0 & 1) != 0) {
      puVar14 = puStack_1e8;
      puVar2 = puStack_1e0;
    }
    lVar8 = func_0x05ddb850(param_1 + 0x18);
    if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
      bVar15 = (*(byte *)(lVar8 + 8) & 1) != 0;
      lVar12 = lVar8 + 9;
      if (bVar15) {
        lVar12 = *(long *)(lVar8 + 0x18);
      }
      uVar7 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
      if (bVar15) {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      func_0x05ddcba0(&uStack_68,param_1,lVar12,uVar7);
    }
    else {
      func_0x05ddcba0(&uStack_68,param_1,puVar2,puVar14);
    }
    if ((uVar13 & 1) != 0) {
      func_0x0412a280(puVar5,uStack_1f0 & 0xfffffffffffffffe);
    }
    if (cStack_38 != '\0') {
      return;
    }
    if (DAT_0f55b078 == '\0') goto LAB_05d08b65;
  }
  else {
    func_0x04882e30();
LAB_05d08b65:
    iVar6 = FUN_04108328(&DAT_0f55b078);
    if (iVar6 != 0) {
      func_0x05ddba40(0xf55b060);
      func_0x0410844d(&DAT_0f55b078);
    }
  }
  if ((DAT_0f55a4f8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f55a4f8), iVar6 != 0)) {
    func_0x05d9cfa0(&uStack_60);
    func_0x0410844d(&DAT_0f55a4f8);
  }
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,_DAT_0f55a4e4);
  puStack_1e8 = (undefined4 *)&UNK_05d9cdd0;
  puStack_1e0 = &UNK_05ddd4a0;
  func_0x05da1460(&uStack_60);
  lVar8 = CONCAT44(uStack_64,uStack_68);
  if ((DAT_0f55a4d8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f55a4d8), iVar6 != 0)) {
    func_0x05d9ce90();
    __cxa_atexit(&UNK_048ae800,&DAT_0f55a458,0xf53dab8);
    func_0x0410844d(&DAT_0f55a4d8);
  }
  plVar11 = (long *)(*(long *)(lVar8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f55a458 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    bVar3 = bRam000000000f55a472;
    if (lVar12 == -1) goto joined_r0x05d08476;
    plVar11 = (long *)(*(long *)(lVar8 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f55a458 + 4));
  if (plVar11 != *(long **)(lVar8 + 0x38)) {
    bVar3 = *(byte *)(plVar11[2] + 0x1a);
  }
joined_r0x05d08476:
  if ((bVar3 & 4) != 0) {
    func_0x05ddd0e0(&uStack_1f0,CONCAT44(uStack_64,uStack_68) + 0x18);
    if (uStack_1d8._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)(puStack_1e0 + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_1d8) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      puVar2 = *(undefined **)(piVar9 + 0xc);
      while ((undefined4 *)puVar2 != puStack_1e8) {
        piVar9 = *(int **)(piVar9 + 0xe);
        puVar2 = *(undefined **)(piVar9 + 0xc);
      }
    }
    else {
      if (uStack_1d8._4_4_ != 1) {
        if (uStack_1d8._4_4_ == 0) {
          *(uint *)(puStack_1e0 + 0x18) = *(uint *)(puStack_1e0 + 0x18) | 0x40000;
        }
        goto LAB_05d084e3;
      }
      piVar9 = *(int **)(*(long *)(puStack_1e0 + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_1d8) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
    }
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
LAB_05d084e3:
  uStack_88 = uStack_48;
  uStack_84 = uStack_44;
  uStack_98 = uStack_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  uStack_a8 = uStack_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  func_0x05ddd0e0(&uStack_1f0,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_1d8._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(puStack_1e0 + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != (int)uStack_1d8) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    puVar2 = *(undefined **)(piVar9 + 0xc);
    while ((undefined4 *)puVar2 != puStack_1e8) {
      piVar9 = *(int **)(piVar9 + 0xe);
      puVar2 = *(undefined **)(piVar9 + 0xc);
    }
LAB_05d0858f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (uStack_1d8._4_4_ == 1) {
      piVar9 = *(int **)(*(long *)(puStack_1e0 + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_1d8) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
      goto LAB_05d0858f;
    }
    if (uStack_1d8._4_4_ == 0) {
      *(uint *)(puStack_1e0 + 0x18) = *(uint *)(puStack_1e0 + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f55b078 == '\0') && (iVar6 = FUN_04108328(&DAT_0f55b078), iVar6 != 0)) {
    func_0x05ddba40(0xf55b060);
    func_0x0410844d(&DAT_0f55b078);
  }
  uStack_80 = 0x14018abd00000001;
  lVar8 = CONCAT44(uStack_a4,uStack_a8) + 0x18;
  uStack_1f0 = func_0x05ddb850(lVar8);
  puStack_1e8 = (undefined4 *)lVar8;
  func_0x0ed621a0(&uStack_1f0,uStack_80._4_4_);
  puStack_1e8 = &uStack_a0;
  uStack_1f0 = CONCAT62(uStack_1f0._2_6_,0x10);
  puStack_1e0 = (undefined *)CONCAT44(puStack_1e0._4_4_,uStack_80._4_4_);
  uStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0x16;
  uStack_1af = 0x656e6f706d6f63;
  uStack_1a8 = 0x6449746e;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x3f600000;
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
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0ef42d08;
  if (uStack_1d8 != (long *)0x0) {
    lVar8 = *uStack_1d8;
    uStack_1d8 = puVar10;
    (**(code **)(lVar8 + 8))();
    puVar10 = uStack_1d8;
  }
  uStack_1d8 = puVar10;
  auStack_120[0] = puStack_1e0._0_4_;
  plStack_118 = (long *)0x0;
  uStack_110 = (long *)((ulong)uStack_110._4_4_ << 0x20);
  uStack_108 = 1;
  uStack_100 = 0;
  puStack_f8 = &UNK_048b06c0;
  puStack_f0 = &SUB_048b06d0;
  puStack_e8 = &SUB_048b02c0;
  puStack_e0 = &UNK_05ddd4b0;
  puStack_d8 = &UNK_05ddd610;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  func_0x048b05a0(puStack_1e8,auStack_120);
  plVar11 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar11);
    }
  }
  puVar14 = puStack_1e8;
  if ((DAT_0f550a20 == '\0') && (iVar6 = FUN_04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_120[0] = _DAT_0f550a0c;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_1d0;
  puVar10 = uStack_1d8;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_118 = plVar11 + 3;
  uStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  plVar11[3] = (long)puVar10;
  plVar11[4] = lVar8;
  plVar11[7] = lStack_1b8;
  plVar11[5] = lStack_1c8;
  plVar11[6] = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar11[10] = lStack_1a0;
  plVar11[8] = CONCAT71(uStack_1af,uStack_1b0);
  plVar11[9] = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  lStack_1a0 = 0;
  plVar11[0xb] = lStack_198;
  plVar11[0xc] = lStack_190;
  plVar11[0xd] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar11[0xe] = lStack_180;
  plVar11[0xf] = lStack_178;
  plVar11[0x10] = lStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_168;
  plVar11[0x12] = lStack_160;
  plVar11[0x13] = lStack_158;
  plVar11[0x14] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar11[0x17] = lStack_138;
  *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar11 + 0xac) = uStack_148._4_4_;
  *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_140;
  *(undefined4 *)((long)plVar11 + 0xb4) = uStack_140._4_4_;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
  plVar11[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_110 = plVar11;
  func_0x048afd20(puVar14,auStack_120);
  plVar11 = uStack_110;
  if (uStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_110 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_110 + 0x10))(uStack_110);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plVar11);
    }
  }
  lVar8 = *(long *)(puVar14 + 4);
  iVar6 = puVar14[7];
  if (iVar6 == 2) {
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != puVar14[6]) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(puVar14 + 2); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)uStack_1f0 << 0x10;
      }
      goto LAB_05d08acd;
    }
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != puVar14[6]) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)uStack_1f0 << 0x10;
LAB_05d08acd:
  func_0x048b0bc0(&uStack_1d8);
  return;
}


