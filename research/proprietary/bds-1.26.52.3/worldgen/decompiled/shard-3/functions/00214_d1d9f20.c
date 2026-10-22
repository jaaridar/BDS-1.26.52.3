/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9f20 (ELF vaddr 0xd1d9f20)
 * Label: br::worldgen::processors::Capped::vslot1
 * Body:  [[0d2d9f20, 0d2d9fa3]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot1
 */


void wg_br__worldgen__processors__Capped__vslot1(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 uStack_11;
  
  *param_1 = &UNK_0f45f7f8;
  param_1[3] = &UNK_0f45e658;
  if ((ulong)*(uint *)(param_1 + 6) != 0xffffffff) {
    (**(code **)(&UNK_0f45ed28 + (ulong)*(uint *)(param_1 + 6) * 8))(&uStack_11,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0412c2d0(plVar3);
    }
  }
  func_0x0412a280(param_1,0x38);
  return;
}


