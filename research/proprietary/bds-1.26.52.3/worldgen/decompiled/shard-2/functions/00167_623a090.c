/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633a090 (ELF vaddr 0x623a090)
 * Label: callee-of:0x61415a0
 * Body:  [[0633a090, 0633a0b5] [0633a0c0, 0633a0fd] [0633a100, 0633a1a1] [0633a1b0, 0633a1b7] [0633a1c0, 0633a1fd]]
 * Ghidra: FUN_0633a090
 */


void FUN_0633a090(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  undefined8 *apuStack_48 [3];
  
  if (param_2 != param_3) {
    plVar1 = param_1 + 1;
    do {
      plVar3 = (long *)param_1[1];
      plVar4 = plVar1;
      if (plVar1 == (long *)*param_1) {
LAB_0633a119:
        plVar6 = plVar4 + 1;
        plVar5 = plVar4;
        if (plVar3 == (long *)0x0) {
          plVar6 = plVar1;
          plVar5 = plVar1;
        }
        if (*plVar6 == 0) goto LAB_0633a12f;
      }
      else {
        plVar5 = plVar3;
        plVar6 = plVar1;
        if (plVar3 == (long *)0x0) {
          do {
            plVar4 = (long *)plVar6[2];
            bVar7 = plVar6 == (long *)*plVar4;
            plVar6 = plVar4;
          } while (bVar7);
        }
        else {
          do {
            plVar4 = plVar5;
            plVar5 = (long *)plVar4[1];
          } while ((long *)plVar4[1] != (long *)0x0);
        }
        bVar2 = *(byte *)(param_2 + 4);
        plVar5 = plVar1;
        if (*(byte *)(plVar4 + 4) < bVar2) goto LAB_0633a119;
        while (plVar6 = plVar5, plVar3 != (long *)0x0) {
          while (plVar5 = plVar3, *(byte *)(plVar5 + 4) <= bVar2) {
            if (bVar2 <= *(byte *)(plVar5 + 4)) goto LAB_0633a167;
            plVar3 = (long *)plVar5[1];
            if ((long *)plVar5[1] == (long *)0x0) {
              plVar6 = plVar5 + 1;
              goto LAB_0633a12f;
            }
          }
          plVar3 = (long *)*plVar5;
        }
LAB_0633a12f:
        func_0x0633a360(apuStack_48,param_1);
        *apuStack_48[0] = 0;
        apuStack_48[0][1] = 0;
        apuStack_48[0][2] = plVar5;
        *plVar6 = (long)apuStack_48[0];
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
        }
        func_0x048bed00(param_1[1]);
        param_1[2] = param_1[2] + 1;
      }
LAB_0633a167:
      plVar4 = (long *)param_2[1];
      plVar3 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar3[2];
          bVar7 = plVar3 != (long *)*param_2;
          plVar3 = param_2;
        } while (bVar7);
      }
      else {
        do {
          param_2 = plVar4;
          plVar4 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}


