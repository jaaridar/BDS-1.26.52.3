/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x488e200 (ELF vaddr 0x478e200)
 * Label: callee-of:0x524f1c0
 * Body:  [[0488e200, 0488e280]]
 * Ghidra: FUN_0488e200
 */


long FUN_0488e200(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  lVar2 = *(long *)(param_2 + 0x78);
  if (lVar2 != 0) {
    piVar1 = *(int **)(lVar2 + 0x20);
    for (piVar4 = *(int **)(lVar2 + 0x18); piVar4 != piVar1; piVar4 = piVar4 + 6) {
      lVar2 = (**(code **)(piVar4 + 4))(param_4);
      if (*piVar4 == param_3) {
        return lVar2;
      }
      uVar3 = (**(code **)(piVar4 + 2))(param_1);
      lVar2 = FUN_0488e200(param_1,uVar3,param_3,lVar2);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  return 0;
}


