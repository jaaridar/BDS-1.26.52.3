/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ecfa0 (ELF vaddr 0xd1ecfa0)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2ecfa0, 0d2ecfc6] [0d2ecfd0, 0d2ed047] [0d2ed050, 0d2ed0c8] [0d2ed0d0, 0d2ed13d]]
 * Ghidra: FUN_0d2ecfa0
 */


long * FUN_0d2ecfa0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar6 = param_1[1];
    lVar5 = lVar1;
    if (lVar1 != lVar6) {
      do {
        if (*(long *)(lVar6 + -8) != 0) {
          func_0x0412c2d0();
        }
        lVar6 = lVar6 + -0x40;
      } while (lVar6 != lVar1);
      lVar5 = *param_1;
    }
    param_1[1] = lVar1;
    func_0x0412a280(lVar5,param_1[2] - lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar2 = *(undefined4 *)((long)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar6 = param_1[4];
    lVar5 = lVar1;
    if (lVar1 != lVar6) {
      do {
        if (*(long *)(lVar6 + -8) != 0) {
          func_0x0412c2d0();
        }
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != lVar1);
      lVar5 = param_1[3];
    }
    param_1[4] = lVar1;
    func_0x0412a280(lVar5,param_1[5] - lVar5);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    lVar6 = param_1[7];
    lVar5 = lVar1;
    if (lVar1 != lVar6) {
      do {
        if (*(long *)(lVar6 + -8) != 0) {
          func_0x0412c2d0();
        }
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != lVar1);
      lVar5 = param_1[6];
    }
    param_1[7] = lVar1;
    func_0x0412a280(lVar5,param_1[8] - lVar5);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return param_1;
}


