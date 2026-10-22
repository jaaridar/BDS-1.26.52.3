/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ee510 (ELF vaddr 0xd1ee510)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2ee510, 0d2ee615] [0d2ee620, 0d2ee673] [0d2ee680, 0d2ee6d5]]
 * Ghidra: FUN_0d2ee510
 */


undefined8 * FUN_0d2ee510(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x0412d550(param_2 + 5);
  uVar1 = param_2[1];
  if (uVar1 != 0) {
    uVar2 = (long)(int)*param_3 + 0x9e3779b9;
    uVar2 = (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + (long)*(int *)((long)param_3 + 4) ^ uVar2;
    uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      uVar4 = uVar1 - 1 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar2 % uVar1;
      }
    }
    plVar5 = *(long **)(*param_2 + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((byte)(uVar3 >> 0x38) < 2) {
        do {
          if (plVar5[1] == uVar2) {
            if (plVar5[2] == *param_3) goto LAB_0d2ee6c8;
          }
          else if ((plVar5[1] & uVar1 - 1) != uVar4) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar5[1];
          if (uVar3 == uVar2) {
            if (plVar5[2] == *param_3) goto LAB_0d2ee6c8;
          }
          else {
            if (uVar1 <= uVar3) {
              if ((uVar3 | uVar1) >> 0x20 == 0) {
                if ((uVar3 & 0xffffffff) % (uVar1 & 0xffffffff) == uVar4) goto LAB_0d2ee686;
                break;
              }
              uVar3 = uVar3 % uVar1;
            }
            if (uVar3 != uVar4) break;
          }
LAB_0d2ee686:
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
LAB_0d2ee65d:
  func_0x0412d610(param_2 + 5);
  return param_1;
LAB_0d2ee6c8:
  func_0x0d2ecac0(param_1,plVar5 + 3);
  goto LAB_0d2ee65d;
}


