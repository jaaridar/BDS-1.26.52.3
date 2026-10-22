/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdde4110 (ELF vaddr 0xdce4110)
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dde4110, 0dde4ae1]]
 * Ghidra: FUN_0dde4110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dde4110(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  byte bStack_2e0;
  undefined7 uStack_2df;
  ulong uStack_2d8;
  undefined7 *puStack_2d0;
  undefined4 auStack_2c8 [2];
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_250;
  undefined7 *puStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_218;
  undefined *puStack_208;
  undefined *puStack_1f8;
  undefined *puStack_1e8;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  char cStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char cStack_c8;
  undefined7 uStack_c7;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  func_0x0dea0f00();
  lVar3 = func_0x0cd06a70(param_1 + 0x18);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (lVar3 = *(long *)(lVar3 + 0x68), lVar3 != 0)) {
    bVar9 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar8 = lVar3 + 9;
    if (bVar9) {
      lVar8 = *(long *)(lVar3 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0de45430(&uStack_80,param_1,lVar8,uVar7);
    uStack_178 = uStack_80;
    uStack_174 = uStack_7c;
    uStack_170 = uStack_78;
    uStack_16c = uStack_74;
    uStack_168 = uStack_70;
    uStack_164 = uStack_6c;
    uStack_160 = uStack_68;
    uStack_15c = uStack_64;
    uStack_158 = uStack_60;
    uStack_154 = uStack_5c;
    uStack_150 = uStack_58;
    uStack_14c = uStack_54;
    cStack_148 = cStack_50;
  }
  else {
    func_0x0de45430(&uStack_80,param_1,&UNK_0126acb2,0x15);
    uStack_178 = uStack_80;
    uStack_174 = uStack_7c;
    uStack_170 = uStack_78;
    uStack_16c = uStack_74;
    uStack_168 = uStack_70;
    uStack_164 = uStack_6c;
    uStack_160 = uStack_68;
    uStack_15c = uStack_64;
    uStack_158 = uStack_60;
    uStack_154 = uStack_5c;
    uStack_150 = uStack_58;
    uStack_14c = uStack_54;
    cStack_148 = cStack_50;
  }
  if (cStack_148 != '\0') {
    return;
  }
  func_0x0de45970(&puStack_248,CONCAT44(uStack_174,uStack_178) + 0x18);
  if (uStack_230._4_4_ == 2) {
    piVar5 = *(int **)(*(long *)((long)puStack_238 + 0x78) + 0x60);
    iVar2 = *piVar5;
    while (iVar2 != (int)uStack_230) {
      piVar5 = piVar5 + 0x16;
      iVar2 = *piVar5;
    }
    lVar3 = *(long *)(piVar5 + 0xc);
    while (lVar3 != uStack_240) {
      piVar5 = *(int **)(piVar5 + 0xe);
      lVar3 = *(long *)(piVar5 + 0xc);
    }
LAB_0dde425f:
    *(byte *)((long)piVar5 + 0x12) = *(byte *)((long)piVar5 + 0x12) | 4;
  }
  else {
    if (uStack_230._4_4_ == 1) {
      piVar5 = *(int **)(*(long *)((long)puStack_238 + 0x78) + 0x48);
      iVar2 = *piVar5;
      while (iVar2 != (int)uStack_230) {
        piVar5 = piVar5 + 0x1a;
        iVar2 = *piVar5;
      }
      goto LAB_0dde425f;
    }
    if (uStack_230._4_4_ == 0) {
      *(uint *)((long)puStack_238 + 0x18) = *(uint *)((long)puStack_238 + 0x18) | 0x40000;
    }
  }
  func_0x0de45d20(&puStack_248,&uStack_178,&UNK_0137f4f8,7);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0ef44b00;
  if (uStack_230 != (long *)0x0) {
    lVar3 = *uStack_230;
    uStack_230 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = uStack_230;
  }
  uStack_230 = plVar4;
  auStack_2c8[0] = puStack_238._0_4_;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_048b3f30;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_048b2190;
  puStack_288 = &UNK_0de46210;
  puStack_280 = &UNK_0de463d0;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(uStack_240,auStack_2c8);
  plVar4 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0de45f10(&puStack_248);
  cStack_c8 = cStack_148;
  uStack_d8 = uStack_158;
  uStack_d4 = uStack_154;
  uStack_d0 = uStack_150;
  uStack_cc = uStack_14c;
  uStack_e8 = uStack_168;
  uStack_e4 = uStack_164;
  uStack_e0 = uStack_160;
  uStack_dc = uStack_15c;
  uStack_f8 = uStack_178;
  uStack_f4 = uStack_174;
  uStack_f0 = uStack_170;
  uStack_ec = uStack_16c;
  func_0x048b0bc0(&uStack_230);
  uStack_138 = uStack_f8;
  uStack_134 = uStack_f4;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  uStack_118 = uStack_d8;
  uStack_114 = uStack_d4;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  uStack_108 = CONCAT71(uStack_c7,cStack_c8);
  func_0x0de45970(&puStack_248,CONCAT44(uStack_f4,uStack_f8) + 0x18);
  if (uStack_230._4_4_ == 2) {
    piVar5 = *(int **)(*(long *)((long)puStack_238 + 0x78) + 0x60);
    iVar2 = *piVar5;
    while (iVar2 != (int)uStack_230) {
      piVar5 = piVar5 + 0x16;
      iVar2 = *piVar5;
    }
    lVar3 = *(long *)(piVar5 + 0xc);
    while (lVar3 != uStack_240) {
      piVar5 = *(int **)(piVar5 + 0xe);
      lVar3 = *(long *)(piVar5 + 0xc);
    }
LAB_0dde44ff:
    *(byte *)((long)piVar5 + 0x12) = *(byte *)((long)piVar5 + 0x12) | 4;
  }
  else {
    if (uStack_230._4_4_ == 1) {
      piVar5 = *(int **)(*(long *)((long)puStack_238 + 0x78) + 0x48);
      iVar2 = *piVar5;
      while (iVar2 != (int)uStack_230) {
        piVar5 = piVar5 + 0x1a;
        iVar2 = *piVar5;
      }
      goto LAB_0dde44ff;
    }
    if (uStack_230._4_4_ == 0) {
      *(uint *)((long)puStack_238 + 0x18) = *(uint *)((long)puStack_238 + 0x18) | 0x40000;
    }
  }
  func_0x0de45d20(&puStack_248,&uStack_138,&UNK_01268a39,0xb);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f49fcc0;
  if (uStack_230 != (long *)0x0) {
    lVar3 = *uStack_230;
    uStack_230 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = uStack_230;
  }
  uStack_230 = plVar4;
  auStack_2c8[0] = puStack_238._0_4_;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_0dd147e0;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &SUB_0dd141f0;
  puStack_288 = &UNK_0de465a0;
  puStack_280 = &UNK_0de46700;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(uStack_240,auStack_2c8);
  plVar4 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0de45f10(&puStack_248);
  uStack_88 = (undefined1)uStack_108;
  uStack_98 = uStack_118;
  uStack_94 = uStack_114;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  uStack_a8 = uStack_128;
  uStack_a4 = uStack_124;
  uStack_a0 = uStack_120;
  uStack_9c = uStack_11c;
  uStack_b8 = uStack_138;
  uStack_b4 = uStack_134;
  uStack_b0 = uStack_130;
  uStack_ac = uStack_12c;
  func_0x048b0bc0(&uStack_230);
  puStack_248 = (undefined7 *)&UNK_013c28d2;
  puStack_238 = &UNK_013d7623;
  puStack_228 = &UNK_0131d5bd;
  puStack_218 = &UNK_012e9aec;
  puStack_208 = &UNK_013bdce6;
  puStack_1f8 = &UNK_01272580;
  puStack_1e8 = &UNK_0135c5cd;
  func_0x0470d9a0(&bStack_2e0,&UNK_013f2e9e,0xca,&UNK_0ccccccc,&puStack_248);
  puStack_248 = &uStack_2df;
  uStack_240 = (ulong)(bStack_2e0 >> 1);
  if ((bStack_2e0 & 1) != 0) {
    uStack_240 = uStack_2d8;
    puStack_248 = puStack_2d0;
  }
  func_0x0470d9a0(&bStack_260,&UNK_012e8f55,0x28,0xd,&puStack_248);
  uStack_48 = uStack_b8;
  uStack_44 = uStack_b4;
  uStack_40 = uStack_b0;
  uStack_3c = uStack_ac;
  uStack_38 = uStack_a8;
  uStack_34 = uStack_a4;
  uStack_30 = uStack_a0;
  uStack_2c = uStack_9c;
  uStack_28 = uStack_98;
  uStack_24 = uStack_94;
  uStack_20 = uStack_90;
  uStack_1c = uStack_8c;
  uStack_18 = CONCAT71(uStack_87,uStack_88);
  func_0x0de45970(&puStack_248,CONCAT44(uStack_b4,uStack_b8) + 0x18);
  if (uStack_230._4_4_ == 2) {
    piVar5 = *(int **)(*(long *)(puStack_238 + 0x78) + 0x60);
    iVar2 = *piVar5;
    while (iVar2 != (int)uStack_230) {
      piVar5 = piVar5 + 0x16;
      iVar2 = *piVar5;
    }
    uVar7 = *(ulong *)(piVar5 + 0xc);
    while (uVar7 != uStack_240) {
      piVar5 = *(int **)(piVar5 + 0xe);
      uVar7 = *(ulong *)(piVar5 + 0xc);
    }
  }
  else {
    if (uStack_230._4_4_ != 1) {
      if (uStack_230._4_4_ == 0) {
        *(uint *)(puStack_238 + 0x18) = *(uint *)(puStack_238 + 0x18) | 0x40000;
      }
      goto LAB_0dde4873;
    }
    piVar5 = *(int **)(*(long *)(puStack_238 + 0x78) + 0x48);
    iVar2 = *piVar5;
    while (iVar2 != (int)uStack_230) {
      piVar5 = piVar5 + 0x1a;
      iVar2 = *piVar5;
    }
  }
  *(byte *)((long)piVar5 + 0x12) = *(byte *)((long)piVar5 + 0x12) | 4;
LAB_0dde4873:
  func_0x0de45d20(&puStack_248,&uStack_48,&UNK_013bf612,0xe);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f012438;
  if (uStack_230 != (long *)0x0) {
    lVar3 = *uStack_230;
    uStack_230 = puVar6;
    (**(code **)(lVar3 + 8))();
    puVar6 = uStack_230;
  }
  uStack_230 = puVar6;
  auStack_2c8[0] = puStack_238._0_4_;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_05fc5e00;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_05dcda00;
  puStack_288 = &UNK_0de468e0;
  puStack_280 = &UNK_0de46a40;
  uStack_278 = 0;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(uStack_240,auStack_2c8);
  plVar4 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0de45f10(&puStack_248);
  func_0x048b0bc0(&uStack_230);
  func_0x0470d9a0(&puStack_248,&UNK_012d1474,0x37,0,auStack_2c8);
  if (((ulong)puStack_248 & 1) != 0) {
    func_0x0412a280(puStack_238,(ulong)puStack_248 & 0xfffffffffffffffe);
  }
  if ((bStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
  }
  if ((bStack_2e0 & 1) == 0) {
    return;
  }
  func_0x0412a280(puStack_2d0,CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
  return;
}


