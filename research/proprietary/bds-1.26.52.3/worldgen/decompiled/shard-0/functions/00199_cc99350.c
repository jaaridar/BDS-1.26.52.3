/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd99350 (ELF vaddr 0xcc99350)
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0cd99350, 0cd99c81] [0cd99c90, 0cd99d99]]
 * Ghidra: FUN_0cd99350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cd99350(long param_1)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined4 auStack_2e0 [2];
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  char cStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  undefined7 uStack_a7;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  char cStack_28;
  
  func_0x0d012070();
  uVar12 = (ulong)(DAT_0f705068 >> 1);
  uVar9 = 0xf705069;
  if ((DAT_0f705068 & 1) != 0) {
    uVar12 = _DAT_0f705070;
    uVar9 = _DAT_0f705078;
  }
  lVar5 = func_0x0cdd61c0(param_1 + 0x18);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar14 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar13 = lVar5 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar5 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0cdd67e0(&uStack_58,param_1,lVar13,uVar12);
    uStack_1a8 = uStack_58;
    uStack_1a4 = uStack_54;
    uStack_1a0 = uStack_50;
    uStack_19c = uStack_4c;
    uStack_198 = uStack_48;
    uStack_194 = uStack_44;
    uStack_190 = uStack_40;
    uStack_18c = uStack_3c;
    uStack_188 = uStack_38;
    uStack_184 = uStack_34;
    iStack_180 = iStack_30;
    uStack_17c = uStack_2c;
    cStack_178 = cStack_28;
  }
  else {
    func_0x0cdd67e0(&uStack_58,param_1,uVar9,uVar12);
    uStack_1a8 = uStack_58;
    uStack_1a4 = uStack_54;
    uStack_1a0 = uStack_50;
    uStack_19c = uStack_4c;
    uStack_198 = uStack_48;
    uStack_194 = uStack_44;
    uStack_190 = uStack_40;
    uStack_18c = uStack_3c;
    uStack_188 = uStack_38;
    uStack_184 = uStack_34;
    iStack_180 = iStack_30;
    uStack_17c = uStack_2c;
    cStack_178 = cStack_28;
  }
  if (cStack_178 != '\0') {
    return;
  }
  func_0x0cdd6d20(&puStack_278,CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
  if (uStack_260._4_4_ == 2) {
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != (int)uStack_260) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    lVar5 = *(long *)(piVar7 + 0xc);
    while (lVar5 != lStack_270) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar5 = *(long *)(piVar7 + 0xc);
    }
LAB_0cd994bf:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
  }
  else {
    if (uStack_260._4_4_ == 1) {
      piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x48);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_260) {
        piVar7 = piVar7 + 0x1a;
        iVar3 = *piVar7;
      }
      goto LAB_0cd994bf;
    }
    if (uStack_260._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_264,uStack_268) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0cdd70e0(&puStack_278,&uStack_1a8,&UNK_01d60619,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (uStack_260 != (long *)0x0) {
    lVar5 = *uStack_260;
    uStack_260 = plVar6;
    (**(code **)(lVar5 + 8))();
    plVar6 = uStack_260;
  }
  uStack_260 = plVar6;
  auStack_2e0[0] = uStack_268;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_048b3f30;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &UNK_048b2190;
  puStack_2a0 = &UNK_0cdd75d0;
  puStack_298 = &UNK_0cdd77a0;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  func_0x048b05a0(lStack_270,auStack_2e0);
  plVar6 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0cdd72d0(&puStack_278);
  cStack_a8 = cStack_178;
  uStack_b8 = uStack_188;
  uStack_b4 = uStack_184;
  iStack_b0 = iStack_180;
  uStack_ac = uStack_17c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  uStack_c0 = uStack_190;
  uStack_bc = uStack_18c;
  uStack_d8 = uStack_1a8;
  uStack_d4 = uStack_1a4;
  uStack_d0 = uStack_1a0;
  uStack_cc = uStack_19c;
  func_0x048b0bc0(&uStack_260);
  uStack_168 = uStack_d8;
  uStack_164 = uStack_d4;
  uStack_160 = uStack_d0;
  uStack_15c = uStack_cc;
  uStack_158 = uStack_c8;
  uStack_154 = uStack_c4;
  uStack_150 = uStack_c0;
  uStack_14c = uStack_bc;
  uStack_148 = uStack_b8;
  uStack_144 = uStack_b4;
  iStack_140 = iStack_b0;
  uStack_13c = uStack_ac;
  uStack_138 = CONCAT71(uStack_a7,cStack_a8);
  func_0x0cdd6d20(&puStack_278,CONCAT44(uStack_d4,uStack_d8) + 0x18);
  if (uStack_260._4_4_ == 2) {
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != (int)uStack_260) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    lVar5 = *(long *)(piVar7 + 0xc);
    while (lVar5 != lStack_270) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar5 = *(long *)(piVar7 + 0xc);
    }
LAB_0cd9973f:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
  }
  else {
    if (uStack_260._4_4_ == 1) {
      piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x48);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_260) {
        piVar7 = piVar7 + 0x1a;
        iVar3 = *piVar7;
      }
      goto LAB_0cd9973f;
    }
    if (uStack_260._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_264,uStack_268) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0cdd70e0(&puStack_278,&uStack_168,&UNK_01d60631,0xb);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f406ce8;
  if (uStack_260 != (long *)0x0) {
    lVar5 = *uStack_260;
    uStack_260 = plVar6;
    (**(code **)(lVar5 + 8))();
    plVar6 = uStack_260;
  }
  uStack_260 = plVar6;
  auStack_2e0[0] = uStack_268;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_0cddae80;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &SUB_0cdda890;
  puStack_2a0 = &UNK_0cddae90;
  puStack_298 = &UNK_0cddaff0;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  func_0x048b05a0(lStack_270,auStack_2e0);
  plVar6 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0cdd72d0(&puStack_278);
  uStack_68 = (undefined1)uStack_138;
  uStack_78 = uStack_148;
  uStack_74 = uStack_144;
  iStack_70 = iStack_140;
  uStack_6c = uStack_13c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  uStack_80 = uStack_150;
  uStack_7c = uStack_14c;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_8c = uStack_15c;
  func_0x048b0bc0(&uStack_260);
  puStack_278 = &UNK_011af8a7;
  func_0x0470d9a0(&bStack_130,&UNK_012e8f55,0x28,0xc,&puStack_278);
  uStack_118 = uStack_98;
  uStack_114 = uStack_94;
  uStack_110 = uStack_90;
  uStack_10c = uStack_8c;
  uStack_108 = uStack_88;
  uStack_104 = uStack_84;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  uStack_f8 = uStack_78;
  uStack_f4 = uStack_74;
  iStack_f0 = iStack_70;
  uStack_ec = uStack_6c;
  uStack_e8 = CONCAT71(uStack_67,uStack_68);
  func_0x0cdd6d20(&puStack_278,CONCAT44(uStack_94,uStack_98) + 0x18);
  if (uStack_260._4_4_ == 2) {
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != (int)uStack_260) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    lVar5 = *(long *)(piVar7 + 0xc);
    while (lVar5 != lStack_270) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar5 = *(long *)(piVar7 + 0xc);
    }
LAB_0cd999ef:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
  }
  else {
    if (uStack_260._4_4_ == 1) {
      piVar7 = *(int **)(*(long *)(CONCAT44(uStack_264,uStack_268) + 0x78) + 0x48);
      iVar3 = *piVar7;
      while (iVar3 != (int)uStack_260) {
        piVar7 = piVar7 + 0x1a;
        iVar3 = *piVar7;
      }
      goto LAB_0cd999ef;
    }
    if (uStack_260._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_264,uStack_268) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0cdd70e0(&puStack_278,&uStack_118,&UNK_01d60649,0xe);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0ef46ce8;
  if (uStack_260 != (long *)0x0) {
    lVar5 = *uStack_260;
    uStack_260 = puVar8;
    (**(code **)(lVar5 + 8))();
    puVar8 = uStack_260;
  }
  uStack_260 = puVar8;
  auStack_2e0[0] = uStack_268;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 1;
  uStack_2c0 = 0;
  puStack_2b8 = &UNK_0490ce30;
  puStack_2b0 = &SUB_048b06d0;
  puStack_2a8 = &UNK_0490cb20;
  puStack_2a0 = &UNK_0cddb460;
  puStack_298 = &UNK_0cddb5c0;
  uStack_290 = 0;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  func_0x048b05a0(lStack_270,auStack_2e0);
  plVar6 = plStack_280;
  if (plStack_280 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_280 + 0x10))(plStack_280);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0cdd72d0(&puStack_278);
  uVar4 = uStack_ec;
  iVar3 = iStack_f0;
  lVar5 = CONCAT44(uStack_114,uStack_118);
  func_0x048b0bc0(&uStack_260);
  if (iVar3 == 4) {
    lVar5 = lVar5 + 0x18;
    uVar9 = func_0x0cdd61c0(lVar5);
    puVar10 = (undefined *)func_0x048b1040(lVar5,uVar9,uVar4,1);
    if (puVar10 == (undefined *)0x0) {
      puStack_278 = (undefined *)0x0;
      lStack_270 = 0;
      func_0x048b10d0(&puStack_278);
      puVar11 = *(undefined **)(puStack_278 + 0x38);
      puVar10 = puStack_278;
      if (puVar11 == (undefined *)0x0) goto LAB_0cd99c5f;
LAB_0cd99c7b:
      do {
        puVar10 = puVar11;
        puVar11 = *(undefined **)(puVar10 + 0x38);
        if (*(undefined **)(puVar10 + 0x38) == (undefined *)0x0) {
          puStack_278 = (undefined *)0x0;
          lStack_270 = 0;
          func_0x048b10d0(&puStack_278);
          puVar11 = puStack_278;
        }
      } while (puVar11 != (undefined *)0x0);
    }
    else {
      puVar11 = *(undefined **)(puVar10 + 0x38);
      if (*(undefined **)(puVar10 + 0x38) != (undefined *)0x0) goto LAB_0cd99c7b;
LAB_0cd99c5f:
      puStack_278 = (undefined *)0x0;
      lStack_270 = 0;
      func_0x048b10d0(&puStack_278);
      puVar11 = puStack_278;
      if (puStack_278 != (undefined *)0x0) goto LAB_0cd99c7b;
    }
    lVar5 = *(long *)(puVar10 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  else {
    if (iVar3 != 1) goto LAB_0cd99d25;
    lVar5 = lVar5 + 0x18;
    uVar9 = func_0x0cdd61c0(lVar5);
    puVar10 = (undefined *)func_0x048b0c90(lVar5,uVar9,uVar4,1);
    if (puVar10 == (undefined *)0x0) {
      puStack_278 = (undefined *)0x0;
      lStack_270 = 0;
      func_0x048b0d20(&puStack_278);
      puVar10 = puStack_278;
    }
    lVar5 = *(long *)(puVar10 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  puVar8[1] = 0xffffffffffffffff;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 0xff;
  *puVar8 = &UNK_0f0edce8;
  *(undefined8 *)((long)puVar8 + 0x1c) = 0xff00000000;
  *(undefined8 *)((long)puVar8 + 0x24) = 0;
  plVar6 = *(long **)(lVar5 + 8);
  *(undefined8 **)(lVar5 + 8) = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
LAB_0cd99d25:
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
  }
  return;
}


