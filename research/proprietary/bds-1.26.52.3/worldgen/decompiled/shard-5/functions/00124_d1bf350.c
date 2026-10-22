/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2bf350 (ELF vaddr 0xd1bf350)
 * Label: br::worldgen::processors::Capped::vslot2
 * Body:  [[0d2bf350, 0d2bf380]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot2
 */


void wg_br__worldgen__processors__Capped__vslot2(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_stack_00000018;
  
  uVar3 = *in_stack_00000018;
  uVar4 = in_stack_00000018[1];
  uVar5 = in_stack_00000018[3];
  param_1[2] = in_stack_00000018[2];
  param_1[3] = uVar5;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar2 = in_stack_00000018[5];
  uVar3 = in_stack_00000018[5];
  param_1[4] = in_stack_00000018[4];
  param_1[5] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


