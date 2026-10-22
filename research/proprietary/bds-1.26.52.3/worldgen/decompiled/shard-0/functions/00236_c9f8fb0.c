/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaf8fb0 (ELF vaddr 0xc9f8fb0)
 * Label: callee-of:0x493aaf0
 * Body:  [[0caf8fb0, 0caf9008] [0caf9010, 0caf90ac] [0caf90b0, 0caf90dd]]
 * Ghidra: FUN_0caf8fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0caf8fb0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  short sVar3;
  undefined8 uVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  sVar5 = *(short *)(*(long *)(param_1 + 0x30) + 0xaa) -
          *(short *)(*(long *)(param_1 + 0x30) + 0xa8);
  sVar3 = sVar5 + 0xf;
  if (-1 < sVar5) {
    sVar3 = sVar5;
  }
  lStack_38 = *param_2;
  lVar8 = param_2[1];
  uVar6 = lVar8 - lStack_38;
  uVar7 = (ulong)((uint)(int)sVar3 >> 4 & 0xffff);
  if (uVar7 < (ulong)((long)uVar6 >> 3)) {
    lVar1 = lStack_38 + uVar7 * 8;
    if (lVar1 != lVar8) {
      do {
        plVar2 = *(long **)(lVar8 + -8);
        *(undefined8 *)(lVar8 + -8) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        lVar8 = lVar8 + -8;
      } while (lVar8 != lVar1);
      lStack_38 = *param_2;
    }
    param_2[1] = lVar1;
    uVar6 = lVar1 - lStack_38;
    lVar8 = lVar1;
  }
  lStack_28 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lStack_30 = lVar8;
  uVar4 = func_0x0caf9100(param_1 + 0x120,&lStack_38,uVar6 >> 3 & 0xffff);
  lVar1 = lStack_38;
  lVar8 = lStack_30;
  if (lStack_38 != 0) {
    for (; lVar1 != lVar8; lVar8 = lVar8 + -8) {
      plVar2 = *(long **)(lVar8 + -8);
      *(undefined8 *)(lVar8 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar2 + 8))();
      }
    }
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return uVar4;
  }
  return uVar4;
}


