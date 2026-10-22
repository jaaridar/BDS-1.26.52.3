/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd175fd0 (ELF vaddr 0xd075fd0)
 * Label: callee-of:0xc5ce220
 * Body:  [[0d175fd0, 0d1760d2] [0d1760e0, 0d176148] [0d176150, 0d176173]]
 * Ghidra: FUN_0d175fd0
 */


long * FUN_0d175fd0(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  iVar1 = *param_2;
  uVar8 = (long)iVar1 + 0x9e3779b9;
  iVar2 = param_2[1];
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + (long)iVar2 ^ uVar8;
  iVar3 = param_2[2];
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + (long)iVar3 ^ uVar8;
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar5 >> 0x38 < 2) {
    uVar6 = uVar4 - 1 & uVar8;
  }
  else {
    uVar6 = uVar8;
    if (uVar4 <= uVar8) {
      uVar6 = uVar8 % uVar4;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar6 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    if ((byte)(uVar5 >> 0x38) < 2) {
      do {
        if (plVar7[1] == uVar8) {
          if ((((int)plVar7[2] == iVar1) && (*(int *)((long)plVar7 + 0x14) == iVar2)) &&
             ((int)plVar7[3] == iVar3)) {
            return plVar7;
          }
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar6) {
          return (long *)0x0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar8) {
          if ((((int)plVar7[2] == iVar1) && (*(int *)((long)plVar7 + 0x14) == iVar2)) &&
             ((int)plVar7[3] == iVar3)) {
            return plVar7;
          }
        }
        else {
          if (uVar4 <= uVar5) {
            if ((uVar5 | uVar4) >> 0x20 == 0) {
              uVar5 = (uVar5 & 0xffffffff) % (uVar4 & 0xffffffff);
            }
            else {
              uVar5 = uVar5 % uVar4;
            }
          }
          if (uVar5 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


