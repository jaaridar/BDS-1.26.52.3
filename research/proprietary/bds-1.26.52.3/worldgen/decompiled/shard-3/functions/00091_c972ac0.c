/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972ac0
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot4
 * Body:  [[0c972ac0, 0c972afe]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot4
 */


void wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *in_stack_00000a10;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  func_0x0b935480(&stack0x00000000);
  lVar2 = 0x20;
  if ((in_stack_00000a10 == (long *)&stack0x000009f0) ||
     (lVar2 = 0x28, in_stack_00000a10 != (long *)0x0)) {
    (**(code **)(*in_stack_00000a10 + lVar2))();
  }
  func_0x0b935480(&stack0x00000020);
  uVar3 = func_0x0eee2d70();
  func_0x09e00460(&stack0x00000050);
  func_0x0eee2d70(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


