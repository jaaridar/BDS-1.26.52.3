/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4328e90 (ELF vaddr 0x4228e90)
 * Label: string:WebRTC-Bwe-LimitPacingFactorByUpperLinkCapacityEstimate
 * Body:  [[04328e90, 04329433]]
 * Ghidra: FUN_04328e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04328e90(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bStack_78;
  undefined1 auStack_77 [15];
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  *param_1 = &UNK_0eefc528;
  lVar12 = *param_2;
  param_1[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  puStack_50 = param_1 + 1;
  lVar12 = param_2[1];
  uVar15 = *(undefined4 *)((long)param_2 + 0xc);
  lVar10 = param_2[2];
  uVar16 = *(undefined4 *)((long)param_2 + 0x14);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar5 = param_2[4];
  uVar4 = *(undefined4 *)((long)param_2 + 0x24);
  *(int *)(param_1 + 4) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  *(int *)(param_1 + 5) = (int)lVar5;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar4;
  *(int *)(param_1 + 2) = (int)lVar12;
  *(undefined4 *)((long)param_1 + 0x14) = uVar15;
  *(int *)(param_1 + 3) = (int)lVar10;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar16;
  puStack_58 = param_1 + 6;
  func_0x04480670(puStack_58,&UNK_012ee1a5,7);
  puStack_60 = param_1 + 0xe;
  func_0x04480670(puStack_60,&UNK_01239f8c,3);
  puVar1 = param_1 + 2;
  (**(code **)(*(long *)*puVar1 + 0x10))(&bStack_78,(long *)*puVar1,&UNK_012baba7,0x1f);
  uVar13 = auStack_77._7_8_;
  if ((bStack_78 & 1) == 0) {
    uVar13 = (ulong)(bStack_78 >> 1);
  }
  bVar14 = true;
  if (7 < uVar13) {
    plVar11 = (long *)auStack_77;
    if ((bStack_78 & 1) != 0) {
      plVar11 = plStack_68;
    }
    bVar14 = *plVar11 != 0x64656c6261736944;
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(plStack_68,CONCAT71(auStack_77._0_7_,bStack_78) & 0xfffffffffffffffe);
  }
  *(bool *)(param_1 + 0x16) = bVar14;
  (**(code **)(*(long *)param_1[2] + 0x10))(&bStack_78,(long *)param_1[2],&UNK_011b591b,0x34);
  if ((bStack_78 & 1) == 0) {
    bVar14 = true;
    if (7 < bStack_78 >> 1) goto LAB_04328fd5;
  }
  else {
    bVar14 = true;
    if (7 < (ulong)auStack_77._7_8_) {
LAB_04328fd5:
      plVar11 = (long *)auStack_77;
      if ((bStack_78 & 1) != 0) {
        plVar11 = plStack_68;
      }
      bVar14 = *plVar11 != 0x64656c6261736944;
    }
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(plStack_68,CONCAT71(auStack_77._0_7_,bStack_78) & 0xfffffffffffffffe);
  }
  *(bool *)((long)param_1 + 0xb1) = bVar14;
  (**(code **)(*(long *)param_1[2] + 0x10))(&bStack_78,(long *)param_1[2],&UNK_013c26cf,0x31);
  if ((bStack_78 & 1) == 0) {
    bVar14 = true;
    if (7 < bStack_78 >> 1) goto LAB_04329049;
  }
  else {
    bVar14 = true;
    if (7 < (ulong)auStack_77._7_8_) {
LAB_04329049:
      plVar11 = (long *)auStack_77;
      if ((bStack_78 & 1) != 0) {
        plVar11 = plStack_68;
      }
      bVar14 = *plVar11 != 0x64656c6261736944;
    }
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(plStack_68,CONCAT71(auStack_77._0_7_,bStack_78) & 0xfffffffffffffffe);
  }
  *(bool *)((long)param_1 + 0xb2) = bVar14;
  puVar2 = param_1 + 0x17;
  func_0x044847e0(puVar2,param_1[2]);
  puStack_48 = puVar2;
  (**(code **)(*(long *)*puVar1 + 0x10))(&bStack_78,(long *)*puVar1,&UNK_013dc78c,0x37);
  if ((bStack_78 & 1) == 0) {
    if (6 < bStack_78 >> 1) goto LAB_043290be;
  }
  else if (6 < (ulong)auStack_77._7_8_) {
LAB_043290be:
    plVar11 = (long *)auStack_77;
    if ((bStack_78 & 1) != 0) {
      plVar11 = plStack_68;
    }
    bVar14 = *(int *)((long)plVar11 + 3) == 0x64656c62 && (int)*plVar11 == 0x62616e45;
    goto joined_r0x043290f8;
  }
  bVar14 = false;
joined_r0x043290f8:
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(plStack_68,CONCAT71(auStack_77._0_7_,bStack_78) & 0xfffffffffffffffe);
  }
  *(bool *)(param_1 + 0x22) = bVar14;
  uVar7 = func_0x0ee32660(0x880);
  func_0x0432e1f0(uVar7,param_1[2],param_1[5]);
  param_1[0x23] = uVar7;
  cVar6 = func_0x04484ba0(puVar2);
  if (cVar6 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar9 = *puVar1;
    uVar7 = func_0x0ee32660(0x30);
    func_0x043302f0(uVar7,uVar9);
  }
  param_1[0x24] = uVar7;
  uVar7 = param_1[2];
  uVar9 = param_1[5];
  uVar8 = func_0x0ee32660(0x2e0);
  func_0x04330890(uVar8,uVar7,uVar9);
  param_1[0x25] = uVar8;
  func_0x0433b5a0(param_1 + 0x26,puStack_50);
  uVar7 = func_0x0ee32660(0x30);
  func_0x0433c1c0(uVar7,param_1[5]);
  param_1[0x36] = uVar7;
  uVar7 = param_3[1];
  uVar15 = *(undefined4 *)param_3;
  uVar16 = *(undefined4 *)((long)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((long)param_3 + 0xc);
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 0x37) = uVar15;
  *(undefined4 *)((long)param_1 + 0x1bc) = uVar16;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c4) = uVar4;
  uVar9 = func_0x0ee32660(0x248);
  func_0x0433d590(uVar9,param_1[2],param_1[5],uVar7);
  param_1[0x39] = uVar9;
  func_0x04342b20(param_1 + 0x3a,param_1[2]);
  lVar12 = *param_2;
  param_1[0x3b] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  lVar12 = param_2[1];
  uVar15 = *(undefined4 *)((long)param_2 + 0xc);
  lVar10 = param_2[2];
  uVar16 = *(undefined4 *)((long)param_2 + 0x14);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar5 = param_2[4];
  uVar4 = *(undefined4 *)((long)param_2 + 0x24);
  *(int *)(param_1 + 0x3e) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 500) = uVar3;
  *(int *)(param_1 + 0x3f) = (int)lVar5;
  *(undefined4 *)((long)param_1 + 0x1fc) = uVar4;
  *(int *)(param_1 + 0x3c) = (int)lVar12;
  *(undefined4 *)((long)param_1 + 0x1e4) = uVar15;
  *(int *)(param_1 + 0x3d) = (int)lVar10;
  *(undefined4 *)((long)param_1 + 0x1ec) = uVar16;
  func_0x04319630(param_1 + 0x40,param_2 + 5);
  func_0x043195c0(param_1 + 0x47,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x51) = 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  lVar12 = param_2[10];
  param_1[0x70] = lVar12;
  param_1[0x71] = lVar12;
  *(undefined4 *)(param_1 + 0x72) = 3;
  *(undefined2 *)((long)param_1 + 0x394) = 0x100;
  param_1[0x73] = 0x7fffffffffffffff;
  if ((char)param_2[0xf] == '\0') {
    uVar15 = (undefined4)_DAT_014f05f0;
    uVar16 = (undefined4)((ulong)_DAT_014f05f0 >> 0x20);
  }
  else {
    uVar15 = (undefined4)param_2[0xe];
    uVar16 = (undefined4)((ulong)param_2[0xe] >> 0x20);
  }
  param_1[0x74] = CONCAT44(uVar16,uVar15);
  lVar10 = 0;
  lVar12 = 0;
  if ((char)param_2[0x11] != '\0') {
    lVar12 = param_2[0x10];
  }
  param_1[0x75] = lVar12;
  if ((char)param_2[0x13] != '\0') {
    lVar10 = param_2[0x12];
  }
  param_1[0x76] = lVar10;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  puStack_40 = puStack_58;
  puStack_38 = puStack_60;
  (**(code **)(*(long *)param_1[2] + 0x10))(&bStack_78,(long *)param_1[2],&UNK_01199a1e,0x21);
  uVar13 = (ulong)(bStack_78 >> 1);
  plVar11 = (long *)auStack_77;
  if ((bStack_78 & 1) != 0) {
    uVar13 = auStack_77._7_8_;
    plVar11 = plStack_68;
  }
  func_0x0447f550(&puStack_40,2,plVar11,uVar13);
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(plStack_68,CONCAT71(auStack_77._0_7_,bStack_78) & 0xfffffffffffffffe);
  }
  if (param_1[0x39] != 0) {
    func_0x0433e5a0(param_1[0x39],5000);
  }
  return;
}


