/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9e2ed0 (ELF vaddr 0xc8e2ed0)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9e2ed0, 0c9e2f74] [0c9e2f80, 0c9e2fc8] [0c9e2fd0, 0c9e3008] [0c9e3010, 0c9e3038]]
 * Ghidra: FUN_0c9e2ed0
 */


undefined8 FUN_0c9e2ed0(long *param_1,undefined1 *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 in_EAX;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  lVar3 = (**(code **)(*param_1 + 0x138))();
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if ((*(short *)((long)param_1 + 0x42) <= iVar1) && (iVar1 < (short)param_1[8])) {
      uStack_18 = CONCAT26((short)iVar1 - *(short *)((long)param_1 + 0x42),
                           CONCAT15(param_2[8],CONCAT14(*param_2,(undefined4)uStack_18))) &
                  0xffff0f0fffffffff;
      uVar4 = func_0x0caf8020(lVar3,(long)&uStack_18 + 4);
      return uVar4;
    }
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x158))(param_1);
  lVar3 = (**(code **)(*plVar5 + 0x2b0))(plVar5);
  uVar2 = (**(code **)(*(long *)param_1[7] + 0xd0))();
  puVar6 = *(undefined8 **)(lVar3 + 0x380);
  puVar8 = *(undefined8 **)(lVar3 + 0x388);
  uVar9 = (long)*(undefined8 **)(lVar3 + 0x388) - (long)puVar6 >> 3;
  do {
    while( true ) {
      uVar10 = uVar9;
      puVar7 = puVar8;
      uVar9 = uVar10 >> 1;
      puVar8 = puVar6 + uVar9;
      if (uVar2 <= *(ushort *)(puVar6[uVar9] + 0x168)) break;
      puVar6 = puVar8 + 1;
      puVar8 = puVar7;
      uVar9 = ~uVar9 + uVar10;
    }
  } while (*(ushort *)(puVar6[uVar9] + 0x168) != uVar2);
  if (uVar10 != 1) {
    do {
      uVar10 = uVar9 >> 1;
      if (*(ushort *)(puVar6[uVar10] + 0x168) < uVar2) {
        puVar6 = puVar6 + uVar10 + 1;
        uVar10 = ~uVar10 + uVar9;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
  }
  puVar8 = puVar8 + 1;
  lVar3 = (long)puVar7 - (long)puVar8;
  if (lVar3 != 0) {
    uVar9 = lVar3 >> 3;
    do {
      uVar10 = uVar9 >> 1;
      if (*(ushort *)(puVar8[uVar10] + 0x168) <= uVar2) {
        puVar8 = puVar8 + uVar10 + 1;
        uVar10 = ~uVar10 + uVar9;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
  }
  return *puVar6;
}


