/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9028a0 (ELF vaddr 0xc8028a0)
 * Label: callee-of:0x517cd10
 * Body:  [[0c9028a0, 0c902a03]]
 * Ghidra: FUN_0c9028a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c9028a0(long *param_1,undefined1 *param_2)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  ulong in_RAX;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  float fVar9;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  lVar5 = (**(code **)(*param_1 + 0x138))();
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if ((*(short *)((long)param_1 + 0x42) <= iVar1) && (iVar1 < (short)param_1[8])) {
      uStack_28 = CONCAT26((short)iVar1 - *(short *)((long)param_1 + 0x42),
                           CONCAT15(param_2[8],CONCAT14(*param_2,(undefined4)uStack_28))) &
                  0xffff0f0fffffffff;
      uVar6 = func_0x0caf8020(lVar5,(long)&uStack_28 + 4);
      goto LAB_0c902931;
    }
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x158))(param_1);
  uVar6 = (**(code **)(*plVar7 + 0x2b0))(plVar7);
  uVar4 = (**(code **)(*(long *)param_1[7] + 0xd0))();
  uVar6 = func_0x0c8cca10(uVar6,uVar4);
LAB_0c902931:
  fVar9 = (float)func_0x0c8b8560(uVar6,param_1,param_2);
  if ((((_DAT_01198788 < fVar9) ||
       (iVar1 = *(int *)(param_2 + 4), sVar2 = (**(code **)(*param_1 + 0x110))(param_1),
       iVar1 < sVar2)) ||
      (iVar1 = *(int *)(param_2 + 4), sVar2 = (**(code **)(*param_1 + 0x118))(param_1),
      sVar2 <= iVar1)) || (uVar3 = func_0x0c9d58e0(param_1,param_2), 0x9ff < uVar3)) {
    return 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  if (*(long *)(*(long *)(lVar5 + 0x68) + 200) != _DAT_0f6eaec0) {
    pcVar8 = (char *)func_0x0cdbf900(lVar5);
    if (pcVar8 == (char *)0x0) {
      return 0;
    }
    if (*pcVar8 != '\x03') {
      return 0;
    }
  }
  lVar5 = func_0x0cc41df0(0xf6ff9e0,0xf715218,1);
                    /* WARNING: Could not recover jumptable at 0x0c9029f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(**(long **)(lVar5 + 0x68) + 0x218))(*(long **)(lVar5 + 0x68),param_1,param_2)
  ;
  return uVar6;
}


