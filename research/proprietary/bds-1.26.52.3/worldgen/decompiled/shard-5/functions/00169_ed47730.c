/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee47730 (ELF vaddr 0xed47730)
 * Label: callee-of:0xd1be5f0
 * Body:  [[0ee47730, 0ee478e6]]
 * Ghidra: FUN_0ee47730
 */


void FUN_0ee47730(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    *plVar1 = *plVar1 + param_3;
    uVar2 = (ulong)*(uint *)(plVar1 + 9);
    if (param_3 + uVar2 < 0x20) {
      func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,param_2,param_3);
      *(int *)(plVar1 + 9) = (int)plVar1[9] + (int)param_3;
    }
    else {
      plVar4 = (long *)(param_3 + (long)param_2);
      if (uVar2 != 0) {
        func_0x0eee2f00((long)plVar1 + uVar2 + 0x28,param_2,0x20 - *(uint *)(plVar1 + 9));
        uVar2 = plVar1[5] * -0x3d4d51c2d82b14b1 + plVar1[1];
        plVar1[1] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[6] * -0x3d4d51c2d82b14b1 + plVar1[2];
        plVar1[2] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[7] * -0x3d4d51c2d82b14b1 + plVar1[3];
        plVar1[3] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        uVar2 = plVar1[8] * -0x3d4d51c2d82b14b1 + plVar1[4];
        plVar1[4] = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
        param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)plVar1[9]));
        *(undefined4 *)(plVar1 + 9) = 0;
      }
      if (param_2 + 4 <= plVar4) {
        lVar3 = plVar1[1];
        lVar6 = plVar1[2];
        lVar7 = plVar1[3];
        lVar5 = plVar1[4];
        do {
          uVar2 = *param_2 * -0x3d4d51c2d82b14b1 + lVar3;
          lVar3 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[1] = lVar3;
          uVar2 = param_2[1] * -0x3d4d51c2d82b14b1 + lVar6;
          lVar6 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[2] = lVar6;
          uVar2 = param_2[2] * -0x3d4d51c2d82b14b1 + lVar7;
          lVar7 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[3] = lVar7;
          uVar2 = param_2[3] * -0x3d4d51c2d82b14b1 + lVar5;
          lVar5 = (uVar2 * 0x80000000 | uVar2 >> 0x21) * -0x61c8864e7a143579;
          plVar1[4] = lVar5;
          param_2 = param_2 + 4;
        } while (param_2 <= plVar4 + -4);
      }
      if (param_2 < plVar4) {
        func_0x0eee2f00(plVar1 + 5,param_2,(long)plVar4 - (long)param_2);
        *(int *)(plVar1 + 9) = (int)((long)plVar4 - (long)param_2);
      }
    }
  }
  return;
}


