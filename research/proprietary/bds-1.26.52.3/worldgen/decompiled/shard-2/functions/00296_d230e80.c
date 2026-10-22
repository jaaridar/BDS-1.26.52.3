/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd330e80 (ELF vaddr 0xd230e80)
 * Label: caller-of-seed
 * Body:  [[0d330e80, 0d330ec0] [0d330ed0, 0d330f0c] [0d330f10, 0d330f54]]
 * Ghidra: FUN_0d330e80
 */


void FUN_0d330e80(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  *param_1 = &UNK_0f4608b0;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_1 + 3;
  plVar2 = (long *)*param_2;
  if (plVar2 != param_2 + 1) {
    do {
      func_0x050aea30(param_1 + 2,param_1 + 3,plVar2 + 4);
      plVar1 = (long *)plVar2[1];
      plVar3 = plVar2;
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar3[2];
          bVar4 = plVar3 != (long *)*plVar2;
          plVar3 = plVar2;
        } while (bVar4);
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    } while (plVar2 != param_2 + 1);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &UNK_0f460540;
  func_0x0cf7b960(param_1 + 0xd,param_4);
  return;
}


