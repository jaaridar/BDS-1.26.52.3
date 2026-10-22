/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdcf0a90 (ELF vaddr 0xdbf0a90)
 * Label: callee-of:0x871a310
 * Body:  [[0dcf0a90, 0dcf10de] [0dcf10e0, 0dcf11c7]]
 * Ghidra: FUN_0dcf0a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dcf0a90(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  undefined4 auStack_280 [2];
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  long *aplStack_1c0 [23];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  char cStack_d8;
  undefined7 uStack_d7;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  char cStack_20;
  
  lVar4 = func_0x08912600(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
    bVar10 = (*(byte *)(lVar4 + 8) & 1) != 0;
    lVar8 = lVar4 + 9;
    if (bVar10) {
      lVar8 = *(long *)(lVar4 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
    if (bVar10) {
      uVar9 = *(ulong *)(lVar4 + 0x10);
    }
    func_0x0dd59990(&uStack_50,param_1,lVar8,uVar9);
  }
  else {
    func_0x0dd59990(&uStack_50,param_1,&UNK_01303534,0xf);
  }
  if (cStack_20 != '\0') {
    return;
  }
  func_0x0dd5a250(&lStack_1d8,&uStack_50,&UNK_01410416,4);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef44b00;
  if (aplStack_1c0[0] != (long *)0x0) {
    lVar4 = *aplStack_1c0[0];
    aplStack_1c0[0] = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = aplStack_1c0[0];
  }
  aplStack_1c0[0] = plVar5;
  auStack_280[0] = uStack_1c8;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 1;
  uStack_260 = 0;
  puStack_258 = &UNK_048b3f30;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &SUB_048b2190;
  puStack_240 = &UNK_0dd5a740;
  puStack_238 = &UNK_0dd5a900;
  uStack_230 = 0;
  uStack_228 = 0;
  plStack_220 = (long *)0x0;
  func_0x048b05a0(uStack_1d0,auStack_280);
  plVar5 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_220 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0dd5a440(&lStack_1d8);
  cStack_d8 = cStack_20;
  uStack_e8 = uStack_30;
  uStack_e4 = uStack_2c;
  iStack_e0 = iStack_28;
  uStack_dc = uStack_24;
  uStack_f8 = uStack_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  uStack_108 = uStack_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  func_0x048b0bc0(aplStack_1c0);
  uStack_218 = uStack_108;
  uStack_214 = uStack_104;
  uStack_210 = uStack_100;
  uStack_20c = uStack_fc;
  uStack_208 = uStack_f8;
  uStack_204 = uStack_f4;
  uStack_200 = uStack_f0;
  uStack_1fc = uStack_ec;
  uStack_1f8 = uStack_e8;
  uStack_1f4 = uStack_e4;
  iStack_1f0 = iStack_e0;
  uStack_1ec = uStack_dc;
  uStack_1e8 = CONCAT71(uStack_d7,cStack_d8);
  func_0x0dd5a250(&lStack_1d8,&uStack_218,&UNK_014415dd,0xc);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ce8;
  if (aplStack_1c0[0] != (long *)0x0) {
    lVar4 = *aplStack_1c0[0];
    aplStack_1c0[0] = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = aplStack_1c0[0];
  }
  aplStack_1c0[0] = plVar5;
  auStack_280[0] = uStack_1c8;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 1;
  uStack_260 = 0;
  puStack_258 = &UNK_0490ce30;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &SUB_0490cb20;
  puStack_240 = &UNK_0dd5aad0;
  puStack_238 = &UNK_0dd5ac30;
  uStack_230 = 0;
  uStack_228 = 0;
  plStack_220 = (long *)0x0;
  func_0x048b05a0(uStack_1d0,auStack_280);
  plVar5 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_220 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0dd5a440(&lStack_1d8);
  uStack_98 = (undefined1)uStack_1e8;
  uStack_a8 = uStack_1f8;
  uStack_a4 = uStack_1f4;
  iStack_a0 = iStack_1f0;
  uStack_9c = uStack_1ec;
  uStack_b8 = uStack_208;
  uStack_b4 = uStack_204;
  uStack_b0 = uStack_200;
  uStack_ac = uStack_1fc;
  uStack_c8 = uStack_218;
  uStack_c4 = uStack_214;
  uStack_c0 = uStack_210;
  uStack_bc = uStack_20c;
  func_0x048b0bc0(aplStack_1c0);
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  iStack_60 = iStack_a0;
  uStack_5c = uStack_9c;
  uStack_58 = CONCAT71(uStack_97,uStack_98);
  func_0x0dd5a250(&lStack_1d8,&uStack_88,&UNK_011cd3be,10);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0f0ebac8;
  if (aplStack_1c0[0] != (long *)0x0) {
    lVar4 = *aplStack_1c0[0];
    aplStack_1c0[0] = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = aplStack_1c0[0];
  }
  aplStack_1c0[0] = plVar5;
  auStack_280[0] = uStack_1c8;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 1;
  uStack_260 = 0;
  puStack_258 = &UNK_07927c80;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &UNK_07926c30;
  puStack_240 = &UNK_0dd5ae10;
  puStack_238 = &UNK_0dd5b000;
  uStack_230 = 0;
  uStack_228 = 0;
  plStack_220 = (long *)0x0;
  func_0x048b05a0(uStack_1d0,auStack_280);
  plVar5 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_220 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0dd5a440(&lStack_1d8);
  uVar3 = uStack_5c;
  iVar2 = iStack_60;
  lVar4 = CONCAT44(uStack_84,uStack_88);
  func_0x048b0bc0(aplStack_1c0);
  if (iVar2 != 4) {
    if (iVar2 != 1) {
      return;
    }
    lVar4 = lVar4 + 0x18;
    uVar6 = func_0x08912600(lVar4);
    lVar4 = FUN_048b0c90(lVar4,uVar6,uVar3,1);
    if (lVar4 == 0) {
      lStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x048b0d20(&lStack_1d8);
      lVar4 = lStack_1d8;
    }
    lVar4 = *(long *)(lVar4 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0dcf1134;
  }
  lVar4 = lVar4 + 0x18;
  uVar6 = func_0x08912600(lVar4);
  lVar4 = func_0x048b1040(lVar4,uVar6,uVar3,1);
  if (lVar4 == 0) {
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x048b10d0(&lStack_1d8);
    lVar8 = *(long *)(lStack_1d8 + 0x38);
    lVar4 = lStack_1d8;
    if (lVar8 == 0) goto LAB_0dcf10b0;
LAB_0dcf10d5:
    do {
      lVar4 = lVar8;
      lVar8 = *(long *)(lVar4 + 0x38);
      if (*(long *)(lVar4 + 0x38) == 0) {
        lStack_1d8 = 0;
        uStack_1d0 = 0;
        func_0x048b10d0(&lStack_1d8);
        lVar8 = lStack_1d8;
      }
    } while (lVar8 != 0);
  }
  else {
    lVar8 = *(long *)(lVar4 + 0x38);
    if (*(long *)(lVar4 + 0x38) != 0) goto LAB_0dcf10d5;
LAB_0dcf10b0:
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x048b10d0(&lStack_1d8);
    lVar8 = lStack_1d8;
    if (lStack_1d8 != 0) goto LAB_0dcf10d5;
  }
  lVar4 = *(long *)(lVar4 + 0x48);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
LAB_0dcf1134:
  puVar7[1] = 100;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 0xff;
  *puVar7 = &UNK_0f4e3cf0;
  puVar7[4] = 1;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *(undefined1 *)(puVar7 + 7) = 0;
  plVar5 = *(long **)(lVar4 + 8);
  *(undefined8 **)(lVar4 + 8) = puVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))();
  }
  return;
}


