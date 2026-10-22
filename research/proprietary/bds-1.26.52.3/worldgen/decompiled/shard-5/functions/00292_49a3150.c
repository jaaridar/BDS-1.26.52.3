/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aa3150 (ELF vaddr 0x49a3150)
 * Label: caller-of-seed
 * Body:  [[04aa3150, 04aa35bd]]
 * Ghidra: FUN_04aa3150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04aa3150(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  undefined8 auStack_d8 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_88;
  undefined8 uStack_78;
  byte bStack_70;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined8 uStack_60;
  byte bStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined2 uStack_47;
  undefined5 uStack_45;
  
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4e8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x4e8,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef55158;
  plVar1 = plVar6 + 3;
  auStack_d8[0] = *param_3;
  lStack_c8 = 0;
  uStack_c0 = 0;
  if ((undefined8 *)param_3[2] == (undefined8 *)0x0) {
    lStack_c8 = 0;
  }
  else {
    (**(code **)param_3[2])(param_3 + 2);
    lStack_c8 = param_3[2];
  }
  param_3[2] = 0;
  plStack_88 = (long *)param_3[10];
  param_3[10] = 0;
  uStack_78 = 0x100000000000002;
  bStack_70 = 0xc;
  uStack_6f = 0x45656854;
  uStack_6b = 0x646e;
  uStack_69 = 0;
  bStack_58 = 0x22;
  uStack_57 = _DAT_013df14a;
  uStack_53 = _UNK_013df14e;
  uStack_4f = _UNK_013df152;
  uStack_4b = _UNK_013df156;
  uStack_47 = 100;
  func_0x0ca5c8c0(plVar1,auStack_d8);
  if ((bStack_58 & 1) != 0) {
    FUN_0412a280(CONCAT53(uStack_45,CONCAT21(uStack_47,uStack_4b._3_1_)),
                 CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,bStack_58)) & 0xfffffffffffffffe)
    ;
  }
  plVar8 = plStack_88;
  if ((bStack_70 & 1) != 0) {
    FUN_0412a280(uStack_60,
                 CONCAT17(uStack_69,CONCAT25(uStack_6b,CONCAT41(uStack_6f,bStack_70))) &
                 0xfffffffffffffffe);
    plVar8 = plStack_88;
  }
  plStack_88 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plStack_88 = (long *)0x0;
    (**(code **)(*plVar8 + 8))();
  }
  if (lStack_c8 != 0) {
    (**(code **)(lStack_c8 + 8))(&lStack_c8);
  }
  plVar6[3] = (long)&UNK_0ef54780;
  plVar6[4] = (long)&UNK_0ef54920;
  plVar6[5] = (long)&UNK_0ef54a30;
  plVar6[10] = (long)&UNK_0ef54a60;
  plVar6[0x9a] = 0;
  plVar6[0x9b] = 0;
  *(undefined1 *)(plVar6 + 0x9c) = 0;
  *(undefined2 *)((long)plVar6 + 0xc4) = 0x3f;
  *(undefined1 *)((long)plVar6 + 0xc6) = 0;
  uVar3 = *(uint *)(plVar6 + 0x1c);
  if ((ulong)uVar3 == 0xffffffff) {
LAB_04aa3379:
    plVar6[0x1a] = (long)&UNK_0f45e6c8;
    plVar6[0x1b] = 0x700000000;
    *(undefined4 *)(plVar6 + 0x1c) = 1;
  }
  else {
    if (uVar3 != 1) {
      (**(code **)(&UNK_0ef54f18 + (ulong)uVar3 * 8))(auStack_d8,plVar6 + 0x1a);
      goto LAB_04aa3379;
    }
    plVar6[0x1b] = 0x700000000;
  }
  *(float *)(plVar6 + 0x20) = *(float *)(plVar6 + 0x20) + _DAT_01198724;
  plVar8 = (long *)plVar6[0x17];
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar7 = plVar8;
  puVar7[1] = 0;
  puVar7[2] = 0;
  uVar5 = _UNK_014e2798;
  puVar7[3] = _DAT_014e2790;
  puVar7[4] = uVar5;
  puVar7[5] = _DAT_014e8d00;
  *(undefined4 *)(puVar7 + 6) = 0x41200000;
  plVar8 = (long *)(**(code **)(*plVar8 + 0xa70))(plVar8);
  fVar10 = (float)(**(code **)(*plVar8 + 0x30))(plVar8);
  *(float *)(puVar7 + 5) = fVar10 * _DAT_01198a04 + _DAT_01198af0;
  fVar10 = *(float *)((long)puVar7 + 0x1c);
  fVar2 = *(float *)(puVar7 + 4);
  fVar11 = (float)(**(code **)(*plVar8 + 0x30))(plVar8);
  *(float *)(puVar7 + 3) = fVar11 * (fVar2 - fVar10) + fVar10;
  lVar4 = plVar6[0x9b];
  plVar6[0x9b] = (long)puVar7;
  if (lVar4 != 0) {
    FUN_0412a280(lVar4,0x38);
  }
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  puVar9 = &UNK_0f3ed310;
  *puVar7 = &UNK_0f3ed310;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  plVar8 = (long *)plVar6[0x27];
  plVar6[0x27] = (long)puVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    puVar7 = (undefined8 *)plVar6[0x27];
    puVar9 = (undefined *)*puVar7;
  }
  (**(code **)(puVar9 + 0x10))(puVar7);
  if (plVar6[0xe] == 0) {
    LOCK();
    plVar6[1] = plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar6[2] = plVar6[2] + 1;
    UNLOCK();
    plVar6[0xd] = (long)plVar1;
    plVar6[0xe] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[0xe] + 8) != -1) goto LAB_04aa356d;
    LOCK();
    plVar6[1] = plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar6[2] = plVar6[2] + 1;
    UNLOCK();
    plVar6[0xd] = (long)plVar1;
    plVar6[0xe] = (long)plVar6;
    FUN_0412c2d0();
  }
  plVar8 = plVar6 + 1;
  LOCK();
  lVar4 = *plVar8;
  *plVar8 = *plVar8 + -1;
  UNLOCK();
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0412c2d0(plVar6);
  }
LAB_04aa356d:
  *param_1 = plVar1;
  param_1[1] = plVar6;
  return;
}



/* ---- referenced strings ----
 * 0x13df14a  minecraft:the_end
 */
