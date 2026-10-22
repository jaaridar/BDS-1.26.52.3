/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb59800 (ELF vaddr 0xca59800)
 * Label: callee-of:0x517c470
 * Body:  [[0cb59800, 0cb598ea]]
 * Ghidra: FUN_0cb59800
 */


void FUN_0cb59800(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  func_0x0412d450();
  if (0 < *(int *)(param_1 + 0xb4)) {
    piVar2 = (int *)*param_2;
    iVar6 = *piVar2 >> 4;
    if ((*(int *)(param_1 + 0x90) <= iVar6) && (iVar6 <= *(int *)(param_1 + 0x9c))) {
      iVar7 = piVar2[1] >> 4;
      if ((*(int *)(param_1 + 0x94) <= iVar7) && (iVar7 <= *(int *)(param_1 + 0xa0))) {
        iVar8 = piVar2[2] >> 4;
        if ((*(int *)(param_1 + 0x98) <= iVar8) && (iVar8 <= *(int *)(param_1 + 0xa4))) {
          lVar3 = *(long *)(param_1 + 0xc0);
          lVar5 = (long)((iVar6 - *(int *)(param_1 + 0x90)) +
                         (iVar7 - *(int *)(param_1 + 0x94)) * *(int *)(param_1 + 0xb4) +
                        (iVar8 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0xa8)) * 0x10;
          *(undefined8 *)(lVar3 + lVar5) = 0;
          plVar4 = *(long **)(lVar3 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              func_0x0412c2d0(plVar4);
            }
          }
        }
      }
    }
  }
  func_0x0412d520(param_1);
  return;
}


