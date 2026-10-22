/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8b83f0 (ELF vaddr 0xe7b83f0)
 * Label: callee-of:0xe7af270
 * Body:  [[0e8b83f0, 0e8b8638]]
 * Ghidra: FUN_0e8b83f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8b83f0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined4 auStack_50 [2];
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  if (DAT_0f550a20 == '\0') {
    iVar10 = func_0x04108328(&DAT_0f550a20);
    if (iVar10 != 0) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
  }
  auStack_50[0] = _DAT_0f550a0c;
  plStack_40 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plStack_40 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  plStack_40[1] = 0;
  plStack_40[2] = 0;
  *plStack_40 = (long)&UNK_0ef439d0;
  plStack_48 = plStack_40 + 3;
  lVar2 = *param_3;
  lVar5 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plStack_40[3] = lVar2;
  plStack_40[4] = lVar5;
  plStack_40[7] = param_3[4];
  lVar2 = param_3[3];
  plStack_40[5] = param_3[2];
  plStack_40[6] = lVar2;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  plStack_40[10] = param_3[7];
  lVar2 = param_3[6];
  plStack_40[8] = param_3[5];
  plStack_40[9] = lVar2;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  lVar2 = param_3[9];
  plStack_40[0xb] = param_3[8];
  plStack_40[0xc] = lVar2;
  plStack_40[0xd] = param_3[10];
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  lVar2 = param_3[0xc];
  plStack_40[0xe] = param_3[0xb];
  plStack_40[0xf] = lVar2;
  plStack_40[0x10] = param_3[0xd];
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  *(int *)(plStack_40 + 0x11) = (int)param_3[0xe];
  lVar2 = param_3[0x10];
  plStack_40[0x12] = param_3[0xf];
  plStack_40[0x13] = lVar2;
  plStack_40[0x14] = param_3[0x11];
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  plStack_40[0x17] = param_3[0x14];
  uVar3 = *(undefined4 *)((long)param_3 + 0x94);
  lVar2 = param_3[0x13];
  uVar4 = *(undefined4 *)((long)param_3 + 0x9c);
  *(int *)(plStack_40 + 0x15) = (int)param_3[0x12];
  *(undefined4 *)((long)plStack_40 + 0xac) = uVar3;
  *(int *)(plStack_40 + 0x16) = (int)lVar2;
  *(undefined4 *)((long)plStack_40 + 0xb4) = uVar4;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  lVar2 = param_3[0x15];
  *(undefined8 *)((long)plStack_40 + 0xc5) = *(undefined8 *)((long)param_3 + 0xad);
  plStack_40[0x18] = lVar2;
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  func_0x048afd20(param_2,auStack_50);
  plVar9 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  return;
}


