/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d62a60 (ELF vaddr 0x5c62a60)
 * Label: caller-of-callee
 * Body:  [[05d62a60, 05d63121] [05d63130, 05d631eb]]
 * Ghidra: FUN_05d62a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d62a60(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined4 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 uStack_e4;
  undefined4 auStack_e0 [2];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_38;
  
  uVar2 = _DAT_0f5435d8;
  uVar4 = strlen(_DAT_0f5435d8);
  if (uVar4 < 0xfffffffffffffff8) {
    lVar10 = (long)&uStack_1b0 + 1;
    if (uVar4 < 0x17) {
      uStack_1b0 = CONCAT71(uStack_1b0._1_7_,(char)uVar4 * '\x02');
      lVar5 = lVar10;
      if (uVar4 != 0) goto LAB_05d62af8;
    }
    else {
      uVar11 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        uVar11 = (uVar4 | 7) + 1;
      }
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
      if (lVar5 == 0) {
        FUN_0eec74c0(uVar11,0);
      }
      uStack_1b0 = uVar11 | 1;
      puStack_1a8 = (undefined1 *)uVar4;
      lStack_1a0 = lVar5;
LAB_05d62af8:
      func_0x0eee2ee0(lVar5,uVar2,uVar4);
    }
    uVar11 = uStack_1b0;
    *(undefined1 *)(lVar5 + uVar4) = 0;
    lVar5 = lStack_1a0;
    puVar12 = (undefined1 *)(uStack_1b0 >> 1 & 0x7f);
    if ((uStack_1b0 & 1) != 0) {
      puVar12 = puStack_1a8;
      lVar10 = lStack_1a0;
    }
    lVar6 = func_0x05ee7a70(param_1 + 0x18);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar13 = (*(byte *)(lVar6 + 8) & 1) != 0;
      lVar10 = lVar6 + 9;
      if (bVar13) {
        lVar10 = *(long *)(lVar6 + 0x18);
      }
      uVar4 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar13) {
        uVar4 = *(ulong *)(lVar6 + 0x10);
      }
      func_0x05ee8ec0(&lStack_68,param_1,lVar10,uVar4);
    }
    else {
      func_0x05ee8ec0(&lStack_68,param_1,lVar10,puVar12);
    }
    if ((uVar11 & 1) != 0) {
      func_0x0412a280(lVar5,uStack_1b0 & 0xfffffffffffffffe);
    }
    if (cStack_38 != '\0') {
      return;
    }
    func_0x05ee9400(&uStack_1b0,lStack_68 + 0x18);
    if (uStack_198._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(lStack_1a0 + 0x78) + 0x60);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_198) {
        piVar7 = piVar7 + 0x16;
        iVar3 = *piVar7;
      }
      uVar4 = *(ulong *)(piVar7 + 0xc);
      while ((undefined1 *)uVar4 != puStack_1a8) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar4 = *(ulong *)(piVar7 + 0xc);
      }
LAB_05d62c1f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_198._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(lStack_1a0 + 0x78) + 0x48);
        iVar3 = *piVar7;
        while (iVar3 != (int)uStack_198) {
          piVar7 = piVar7 + 0x1a;
          iVar3 = *piVar7;
        }
        goto LAB_05d62c1f;
      }
      if (uStack_198._4_4_ == 0) {
        *(uint *)(lStack_1a0 + 0x18) = *(uint *)(lStack_1a0 + 0x18) | 0x40000;
      }
    }
    if (DAT_0f55ee80 == '\0') goto LAB_05d6318a;
  }
  else {
    func_0x04882e30();
LAB_05d6318a:
    iVar3 = func_0x04108328(&DAT_0f55ee80);
    if (iVar3 != 0) {
      func_0x05ee7c60(0xf55ee68);
      func_0x0410844d(&DAT_0f55ee80);
    }
  }
  uStack_40 = 0x2c9b7f0c00000001;
  uStack_1b0 = func_0x05ee7a70(lStack_68 + 0x18);
  puStack_1a8 = (undefined1 *)(lStack_68 + 0x18);
  func_0x0ed621a0(&uStack_1b0,uStack_40._4_4_);
  puStack_1a8 = auStack_60;
  uStack_1b0 = CONCAT62(uStack_1b0._2_6_,0x10);
  lStack_1a0 = CONCAT44(lStack_1a0._4_4_,uStack_40._4_4_);
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = CONCAT26(uStack_170._6_2_,0x6469756708);
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0x3f600000;
  func_0x048afb10(&lStack_158,8);
  uStack_100 = 0;
  lStack_f8 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_f0 = 0xff00;
  uStack_ec = uStack_ec & 0xffffff00;
  uStack_e8 = uStack_e8 & 0xffffff00;
  uStack_e4 = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f012348;
  if (uStack_198 != (long *)0x0) {
    lVar10 = *uStack_198;
    uStack_198 = puVar8;
    (**(code **)(lVar10 + 8))();
    puVar8 = uStack_198;
  }
  uStack_198 = puVar8;
  auStack_e0[0] = (undefined4)lStack_1a0;
  plStack_d8 = (long *)0x0;
  uStack_d0 = (long *)((ulong)uStack_d0._4_4_ << 0x20);
  uStack_c8 = 1;
  uStack_c0 = 0;
  puStack_b8 = &UNK_05ea71a0;
  puStack_b0 = &SUB_048b06d0;
  puStack_a8 = &SUB_05e9fca0;
  puStack_a0 = &UNK_05ee97c0;
  puStack_98 = &UNK_05ee99d0;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  FUN_048b05a0(puStack_1a8,auStack_e0);
  plVar9 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      func_0x0412c2d0(plVar9);
    }
  }
  puVar12 = puStack_1a8;
  if ((DAT_0f550a20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f550a20), iVar3 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_e0[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar10 = lStack_190;
  puVar8 = uStack_198;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_d8 = plVar9 + 3;
  uStack_198 = (long *)0x0;
  lStack_190 = 0;
  plVar9[3] = (long)puVar8;
  plVar9[4] = lVar10;
  plVar9[7] = lStack_178;
  plVar9[5] = lStack_188;
  plVar9[6] = lStack_180;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar9[10] = lStack_160;
  plVar9[8] = uStack_170;
  plVar9[9] = lStack_168;
  uStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  plVar9[0xb] = lStack_158;
  plVar9[0xc] = lStack_150;
  plVar9[0xd] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  plVar9[0xe] = lStack_140;
  plVar9[0xf] = lStack_138;
  plVar9[0x10] = lStack_130;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_128;
  plVar9[0x12] = lStack_120;
  plVar9[0x13] = lStack_118;
  plVar9[0x14] = lStack_110;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  plVar9[0x17] = lStack_f8;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_108;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_108._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_100._4_4_;
  uStack_108 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_e4,CONCAT43(uStack_e8,uStack_ec._1_3_));
  plVar9[0x18] = CONCAT44(uStack_ec,CONCAT22(uStack_ee,uStack_f0));
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_d0 = plVar9;
  func_0x048afd20(puVar12,auStack_e0);
  plVar9 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar10 = *(long *)(puVar12 + 0x10);
  iVar3 = *(int *)(puVar12 + 0x1c);
  if (iVar3 == 2) {
    piVar7 = *(int **)(*(long *)(lVar10 + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != *(int *)(puVar12 + 0x18)) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    for (; *(long *)(piVar7 + 0xc) != *(long *)(puVar12 + 8); piVar7 = *(int **)(piVar7 + 0xe)) {
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) | (int)uStack_1b0 << 0x10;
      }
      goto LAB_05d6313d;
    }
    piVar7 = *(int **)(*(long *)(lVar10 + 0x78) + 0x48);
    iVar3 = *piVar7;
    while (iVar3 != *(int *)(puVar12 + 0x18)) {
      piVar7 = piVar7 + 0x1a;
      iVar3 = *piVar7;
    }
  }
  piVar7[4] = piVar7[4] | (int)uStack_1b0 << 0x10;
LAB_05d6313d:
  func_0x048b0bc0(&uStack_198);
  return;
}


