/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b1040 (ELF vaddr 0x47b1040)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b1040, 048b10c4]]
 * Ghidra: FUN_048b1040
 */


int * FUN_048b1040(undefined8 param_1,long param_2,int param_3,char param_4)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x78);
  if (lVar4 != 0) {
    for (piVar3 = *(int **)(lVar4 + 0x60); piVar3 != *(int **)(lVar4 + 0x68); piVar3 = piVar3 + 0x16
        ) {
      if (*piVar3 == param_3) {
        return piVar3;
      }
    }
    if (param_4 != '\0') {
      lVar1 = *(long *)(lVar4 + 0x20);
      for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
        uVar2 = (**(code **)(lVar4 + 8))(param_1);
        piVar3 = (int *)FUN_048b1040(param_1,uVar2,param_3,1);
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
    }
  }
  return (int *)0x0;
}


