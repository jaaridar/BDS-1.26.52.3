/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdad400 (ELF vaddr 0xccad400)
 * Label: caller-of-callee
 * Body:  [[0cdad400, 0cdadb37]]
 * Ghidra: FUN_0cdad400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cdad400(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  long *plStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  char cStack_a8;
  undefined *apuStack_a0 [4];
  undefined1 auStack_80 [48];
  long *plStack_50;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_30;
  
  FUN_0cdadbb0();
  lVar4 = func_0x0cdfaf70(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
    bVar10 = (*(byte *)(lVar4 + 8) & 1) != 0;
    lVar9 = lVar4 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar4 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(lVar4 + 0x10);
    }
    func_0x0cdfb570(&uStack_d8,param_1,lVar9,uVar8);
  }
  else {
    func_0x0cdfb570(&uStack_d8,param_1,&UNK_01482e17,4);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  func_0x0d928ca0(apuStack_a0);
  uStack_1c8 = (**(code **)(apuStack_a0[0] + 0x10))(apuStack_a0);
  func_0x0470d9a0(&bStack_f0,&UNK_013bd391,99,4,&uStack_1c8);
  iStack_138 = iStack_b8;
  iStack_134 = iStack_b4;
  uStack_158 = uStack_d8;
  uStack_154 = uStack_d4;
  uStack_150 = uStack_d0;
  uStack_14c = uStack_cc;
  uStack_148 = uStack_c8;
  uStack_144 = uStack_c4;
  uStack_140 = uStack_c0;
  uStack_13c = uStack_bc;
  uStack_130 = 0x1e1bc4d500000004;
  if ((DAT_0f706d38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f706d38), iVar3 != 0)) {
    func_0x0cdfb160(0xf706d20);
    func_0x0410844d(&DAT_0f706d38);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uStack_130._4_4_);
  plStack_1c0 = (long *)0x0;
  uStack_1b8 = (long *)((ulong)uStack_1b8._4_4_ << 0x20);
  uStack_1b0 = 1;
  puStack_1a8 = &SUB_048aead0;
  puStack_1a0 = &UNK_0cdfbe30;
  puStack_198 = &UNK_0cdfbe40;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  func_0x049057f0(&uStack_150,&uStack_1c8);
  func_0x048aea50(&uStack_1c8);
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  iStack_100 = iStack_138;
  iStack_fc = iStack_134;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f406a90;
  if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,_DAT_0f551bb4);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef46c48;
  plStack_1c0 = plVar6 + 3;
  plVar6[3] = (long)puVar5;
  plVar6[4] = 0;
  *(undefined1 *)(plVar6 + 5) = 0xff;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  uStack_1b8 = plVar6;
  func_0x048afd20(&uStack_118,&uStack_1c8);
  plVar6 = uStack_1b8;
  if (uStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*uStack_1b8 + 0x10))(uStack_1b8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((DAT_0f706d38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f706d38), iVar3 != 0)) {
    func_0x0cdfb160(0xf706d20);
    func_0x0410844d(&DAT_0f706d38);
  }
  if (iStack_134 == 2) {
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_13c,uStack_140) + 0x78) + 0x60);
    iVar3 = *piVar7;
    while (iVar3 != iStack_138) {
      piVar7 = piVar7 + 0x16;
      iVar3 = *piVar7;
    }
    lVar4 = *(long *)(piVar7 + 0xc);
    while (lVar4 != CONCAT44(uStack_144,uStack_148)) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar4 = *(long *)(piVar7 + 0xc);
    }
  }
  else {
    if (iStack_134 != 1) {
      if (iStack_134 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_13c,uStack_140) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0cdad743;
    }
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_13c,uStack_140) + 0x78) + 0x48);
    iVar3 = *piVar7;
    while (iVar3 != iStack_138) {
      piVar7 = piVar7 + 0x1a;
      iVar3 = *piVar7;
    }
  }
  *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 2;
LAB_0cdad743:
  if ((DAT_0f706d38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f706d38), iVar3 != 0)) {
    func_0x0cdfb160(0xf706d20);
    func_0x0410844d(&DAT_0f706d38);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0xbf75c8f8);
  plStack_1c0 = (long *)0x0;
  uStack_1b8 = (long *)((ulong)uStack_1b8 & 0xffffffff00000000);
  uStack_1b0 = 0;
  puStack_1a8 = &SUB_0cdf8ff0;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_0cdfc2f0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  func_0x049057f0(&uStack_150,&uStack_1c8);
  func_0x048aea50(&uStack_1c8);
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  iStack_100 = iStack_138;
  iStack_fc = iStack_134;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f406a90;
  if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,_DAT_0f551c9c);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef46c98;
  plStack_1c0 = plVar6 + 3;
  plVar6[3] = (long)puVar5;
  *(undefined1 *)(plVar6 + 4) = 0xff;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  uStack_1b8 = plVar6;
  func_0x048afd20(&uStack_118,&uStack_1c8);
  plVar6 = uStack_1b8;
  if (uStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b8 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*uStack_1b8 + 0x10))(uStack_1b8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bStack_40 & 1) == 0) {
    apuStack_a0[0] = &UNK_0f4e3c70;
  }
  else {
    apuStack_a0[0] = &UNK_0f4e3c70;
    func_0x0412a280(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
  }
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    lVar4 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plStack_50);
    }
  }
  func_0x04167a40(auStack_80);
  return;
}


