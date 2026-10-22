/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca9fb30 (ELF vaddr 0xc99fb30)
 * Label: callee-of:0xc95fb20
 * Body:  [[0ca9fb30, 0ca9fcc1]]
 * Ghidra: FUN_0ca9fb30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca9fb30(undefined8 *param_1,long *param_2,int *param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = &UNK_0f534768;
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &UNK_0ef44a60;
  *(undefined1 *)(puVar4 + 3) = 1;
  param_1[1] = puVar4 + 3;
  param_1[2] = puVar4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  param_1[4] = *(undefined8 *)(lVar1 + 0x20);
  param_1[5] = uVar3;
  param_1[6] = lVar1;
  param_1[8] = *(undefined8 *)(lVar2 + 0x390);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = lVar1;
  *param_1 = &UNK_0f3ee408;
  iVar5 = param_3[2] >> 4;
  uVar7 = (*param_3 >> 4) - param_4 / 2;
  iVar9 = (param_5 - (param_5 + 1 >> 0x1f)) + 1 >> 1;
  uVar8 = (uVar7 + (uVar7 & 1)) - 8;
  iVar6 = (iVar5 - param_5 / 2 & 0xfffffffeU) - 6;
  uVar7 = ((((param_4 - (param_4 + 1 >> 0x1f)) + 1 >> 1) + (*param_3 >> 4)) - 1U & 0xfffffffe) + 8;
  iVar5 = ((iVar9 + iVar5) - 1U & 1) + iVar9 + iVar5 + 5;
  param_1[0xe] = (ulong)uVar8;
  *(int *)(param_1 + 0xf) = iVar6;
  *(ulong *)((long)param_1 + 0x7c) = (ulong)uVar7;
  *(int *)((long)param_1 + 0x84) = iVar5;
  uVar7 = (uVar7 - uVar8) + 1;
  iVar6 = (iVar5 - iVar6) + 1;
  iVar5 = uVar7 * iVar6;
  param_1[0x11] = (ulong)uVar7 | 0x100000000;
  *(int *)(param_1 + 0x12) = iVar6;
  *(int *)((long)param_1 + 0x94) = iVar5;
  *(int *)(param_1 + 0x13) = iVar5;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x10;
  return;
}


