/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6be0 (ELF vaddr 0xd1d6be0)
 * Label: br::worldgen::processors::BlockIgnore::vslot2
 * Body:  [[0d2d6be0, 0d2d6c40]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot2
 */


void wg_br__worldgen__processors__BlockIgnore__vslot2(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *in_stack_00000018;
  
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != *(long **)(param_2 + 0x10)) {
    do {
      if (*plVar5 == *(long *)(in_stack_00000018[2] + 0x68)) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != *(long **)(param_2 + 0x10));
  }
  uVar2 = *in_stack_00000018;
  uVar3 = in_stack_00000018[1];
  uVar4 = in_stack_00000018[3];
  param_1[2] = in_stack_00000018[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = in_stack_00000018[5];
  uVar2 = in_stack_00000018[5];
  param_1[4] = in_stack_00000018[4];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    LOCK();
    plVar5 = (long *)(lVar1 + 8);
    *plVar5 = *plVar5 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


