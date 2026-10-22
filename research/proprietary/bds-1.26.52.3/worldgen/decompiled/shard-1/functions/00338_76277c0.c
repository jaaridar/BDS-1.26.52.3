/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x77277c0 (ELF vaddr 0x76277c0)
 * Label: caller-of-callee
 * Body:  [[077277c0, 07727e31] [07727e40, 077280cc]]
 * Ghidra: FUN_077277c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_077277c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  bool bVar14;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
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
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  char cStack_a8;
  undefined4 auStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  func_0x078210b0();
  if ((DAT_0f5ad478 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5ad478), iVar7 != 0)) {
    func_0x077da770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ad3f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ad478);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5ad3f8 + 4)) * 8);
  do {
    lVar2 = *plVar10;
    if (lVar2 == -1) goto LAB_07727840;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5ad3f8 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_07727840:
    puVar9 = &DAT_0f5ad3f8;
    if (iRam000000000f5ad458 != -0x2b3da790) goto LAB_077278ad;
LAB_0772786b:
    lVar2 = *(long *)(puVar9 + 0x68);
    if (lVar2 == 0) goto LAB_077278ad;
    bVar14 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar14) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x077dc940(&lStack_d8,param_1,lVar12,uVar11);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0772786b;
LAB_077278ad:
    func_0x077dc940(&lStack_d8,param_1,&UNK_0144bb96,0x23);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5ad3e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5ad3e0), iVar7 != 0)) {
    func_0x077da630();
    func_0x0410844d(&DAT_0f5ad3e0);
  }
  lVar2 = lStack_d8;
  uStack_b0 = 0x3a917b9900000001;
  if ((DAT_0f5ad478 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5ad478), iVar7 != 0)) {
    func_0x077da770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ad3f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ad478);
  }
  puStack_1a0 = (undefined1 *)(lVar2 + 0x18);
  plVar10 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5ad3f8 + 4)) * 8);
  do {
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_07727970;
    plVar10 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5ad3f8 + 4));
  if (plVar10 == *(long **)(lVar2 + 0x38)) {
LAB_07727970:
    puStack_1a8 = &DAT_0f5ad3f8;
  }
  else {
    puStack_1a8 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&puStack_1a8,uStack_b0._4_4_);
  puStack_1a8 = (undefined *)CONCAT62(puStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  puStack_1a0 = auStack_d0;
  puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_158 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01344989;
  lStack_168 = 0x21;
  lStack_160 = 0x18;
  *puStack_158 = _DAT_01344981;
  puStack_158[1] = uVar3;
  puStack_158[2] = 0x61746144746e656e;
  *(undefined1 *)(puStack_158 + 3) = 0;
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
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f012080;
  if (plStack_190 != (long *)0x0) {
    lVar2 = *plStack_190;
    plStack_190 = plVar10;
    (**(code **)(lVar2 + 8))();
    plVar10 = plStack_190;
  }
  plStack_190 = plVar10;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_05dd3ca0;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &UNK_05dd3990;
  puStack_60 = &UNK_077dd450;
  puStack_58 = &UNK_077dd5b0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar10 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar10);
    }
  }
  puVar4 = puStack_1a0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = lStack_188;
  plVar1 = plStack_190;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_98 = plVar10 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar10[3] = (long)plVar1;
  plVar10[4] = lVar2;
  plVar10[7] = lStack_170;
  plVar10[5] = lStack_180;
  plVar10[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar10[10] = (long)puStack_158;
  plVar10[8] = lStack_168;
  plVar10[9] = lStack_160;
  lStack_168 = 0;
  lStack_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  plVar10[0xb] = lStack_150;
  plVar10[0xc] = lStack_148;
  plVar10[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar10[0xe] = lStack_138;
  plVar10[0xf] = lStack_130;
  plVar10[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_120;
  plVar10[0x12] = lStack_118;
  plVar10[0x13] = lStack_110;
  plVar10[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar10[0x17] = lStack_f0;
  *(undefined4 *)(plVar10 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar10 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar10 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar10 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar10[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  uStack_90 = plVar10;
  func_0x048afd20(puVar4,auStack_a0);
  plVar10 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar2 = *(long *)(puVar4 + 0x10);
  iVar7 = *(int *)(puVar4 + 0x1c);
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != *(int *)(puVar4 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar4 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_07727e4d;
    }
    piVar13 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar7 = *piVar13;
    while (iVar7 != *(int *)(puVar4 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar7 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | (int)puStack_1a8 << 0x10;
LAB_07727e4d:
  iVar7 = (int)uStack_b0;
  uVar5 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if ((DAT_0f5ad478 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ad478), iVar8 != 0)) {
    func_0x077da770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5ad3f8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ad478);
  }
  plVar10 = (long *)(*(long *)(lStack_d8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f5ad3f8 + 4)) * 8);
  do {
    lVar2 = *plVar10;
    if (lVar2 == -1) goto LAB_07727ed0;
    plVar10 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5ad3f8 + 4)
          );
  if (plVar10 == *(long **)(lStack_d8 + 0x38)) {
LAB_07727ed0:
    puVar9 = &DAT_0f5ad3f8;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  if ((1 < iVar7 - 1U) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01227555),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_1a8 = (undefined *)func_0x048b0c90(lStack_d8 + 0x18,puVar9,uVar5,1);
  if (puStack_1a8 == (undefined *)0x0) {
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b0d20(&puStack_1a8);
  }
  *(undefined1 *)(*(long *)(puStack_1a8 + 0x58) + 0xa8) = 1;
  return;
}



/* ---- referenced strings ----
 * 0x1344981  Input Lock ComponentData
 */
