/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62338e0 (ELF vaddr 0x61338e0)
 * Label: caller-of-callee
 * Body:  [[062338e0, 06234081] [06234090, 06234241]]
 * Ghidra: FUN_062338e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_062338e0(long param_1)

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
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined1 uStack_19f;
  undefined6 uStack_19e;
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
  char cStack_70;
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
  undefined8 uStack_40;
  
  uVar4 = _DAT_0f543828;
  uVar7 = func_0x0eee2e90(_DAT_0f543828);
  if (uVar7 < 0xfffffffffffffff8) {
    puVar2 = (undefined *)((long)&uStack_1f0 + 1);
    if (uVar7 < 0x17) {
      uStack_1f0 = CONCAT71(uStack_1f0._1_7_,(char)uVar7 * '\x02');
      lVar8 = (long)puVar2;
      if (uVar7 != 0) goto LAB_06233978;
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
LAB_06233978:
      func_0x0eee2ee0(lVar8,uVar4,uVar7);
    }
    uVar13 = uStack_1f0;
    *(undefined1 *)(lVar8 + uVar7) = 0;
    puVar5 = puStack_1e0;
    puVar14 = (undefined4 *)(uStack_1f0 >> 1 & 0x7f);
    if ((uStack_1f0 & 1) != 0) {
      puVar14 = puStack_1e8;
      puVar2 = puStack_1e0;
    }
    lVar8 = func_0x0630c490(param_1 + 0x18);
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
      func_0x0630d7a0(&uStack_a0,param_1,lVar12,uVar7);
    }
    else {
      func_0x0630d7a0(&uStack_a0,param_1,puVar2,puVar14);
    }
    if ((uVar13 & 1) != 0) {
      func_0x0412a280(puVar5,uStack_1f0 & 0xfffffffffffffffe);
    }
    if (cStack_70 != '\0') {
      return;
    }
    if (DAT_0f56d528 == '\0') goto LAB_06234135;
  }
  else {
    func_0x04882e30();
LAB_06234135:
    iVar6 = func_0x04108328(&DAT_0f56d528);
    if (iVar6 != 0) {
      func_0x0630c680(0xf56d510);
      func_0x0410844d(&DAT_0f56d528);
    }
  }
  if ((DAT_0f56cfc0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56cfc0), iVar6 != 0)) {
    func_0x062fd520(&uStack_98);
    func_0x0410844d(&DAT_0f56cfc0);
  }
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,_DAT_0f56cfac);
  puStack_1e8 = (undefined4 *)&UNK_062fd350;
  puStack_1e0 = &UNK_0630e0a0;
  func_0x05da1460(&uStack_98);
  lVar8 = CONCAT44(uStack_9c,uStack_a0);
  if ((DAT_0f56cfa0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56cfa0), iVar6 != 0)) {
    func_0x062fd410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56cf20,0xf53dab8);
    func_0x0410844d(&DAT_0f56cfa0);
  }
  plVar11 = (long *)(*(long *)(lVar8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f56cf20 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    bVar3 = bRam000000000f56cf3a;
    if (lVar12 == -1) goto joined_r0x06233b16;
    plVar11 = (long *)(*(long *)(lVar8 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f56cf20 + 4));
  if (plVar11 != *(long **)(lVar8 + 0x38)) {
    bVar3 = *(byte *)(plVar11[2] + 0x1a);
  }
joined_r0x06233b16:
  if ((bVar3 & 4) != 0) {
    func_0x0630dce0(&uStack_1f0,CONCAT44(uStack_9c,uStack_a0) + 0x18);
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
        goto LAB_06233b83;
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
LAB_06233b83:
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  uStack_58 = uStack_90;
  uStack_54 = uStack_8c;
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  uStack_68 = uStack_a0;
  uStack_64 = uStack_9c;
  uStack_60 = uStack_98;
  uStack_5c = uStack_94;
  if ((DAT_0f56d528 == '\0') && (iVar6 = func_0x04108328(&DAT_0f56d528), iVar6 != 0)) {
    func_0x0630c680(0xf56d510);
    func_0x0410844d(&DAT_0f56d528);
  }
  uStack_40 = 0xac54d7c300000001;
  lVar8 = CONCAT44(uStack_64,uStack_68) + 0x18;
  uStack_1f0 = func_0x0630c490(lVar8);
  puStack_1e8 = (undefined4 *)lVar8;
  func_0x0ed621a0(&uStack_1f0,uStack_40._4_4_);
  puStack_1e8 = &uStack_60;
  uStack_1f0 = CONCAT62(uStack_1f0._2_6_,1);
  puStack_1e0 = (undefined *)CONCAT44(puStack_1e0._4_4_,uStack_40._4_4_);
  uStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0x20;
  uStack_1af = _DAT_013c6524;
  uStack_1ab = _UNK_013c6528;
  uStack_1a7 = _UNK_013c652c;
  uStack_1a3 = _UNK_013c6530;
  uStack_19f = 0;
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
  *puVar10 = &UNK_0ef46ef8;
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
  puStack_f8 = &UNK_04906f70;
  puStack_f0 = &SUB_048b06d0;
  puStack_e8 = &SUB_04906c50;
  puStack_e0 = &UNK_0630e0b0;
  puStack_d8 = &UNK_0630e210;
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
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
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
  plVar11[10] = CONCAT62(uStack_19e,CONCAT11(uStack_19f,uStack_1a3._3_1_));
  plVar11[8] = CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,uStack_1b0));
  plVar11[9] = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,uStack_1ab._3_1_));
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1ab = 0;
  uStack_1a7 = 0;
  uStack_1a3 = 0;
  uStack_19f = 0;
  uStack_19e = 0;
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
      goto LAB_0623409d;
    }
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != puVar14[6]) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)uStack_1f0 << 0x10;
LAB_0623409d:
  func_0x048b0bc0(&uStack_1d8);
  return;
}



/* ---- referenced strings ----
 * 0x13c6524  allPlanesVisible
 */
