/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d7340 (ELF vaddr 0xd1d7340)
 * Label: br::worldgen::processors::BlockRules::Test::vslot2
 * Body:  [[0d2d7340, 0d2d73a7]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__Test__vslot2
 */


void wg_br__worldgen__processors__BlockRules__Test__vslot2
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plStack_28;
  undefined1 *puStack_20;
  undefined1 **ppuStack_18;
  
  puStack_20 = (undefined1 *)&plStack_28;
  plStack_28 = (long *)0x0;
  if ((ulong)*(uint *)(param_1 + 0x38) != 0xffffffff) {
    ppuStack_18 = &puStack_20;
    puStack_20 = (undefined1 *)&plStack_28;
    (**(code **)(&UNK_0f45ef78 + (ulong)*(uint *)(param_1 + 0x38) * 8))(&ppuStack_18,param_1 + 8);
    (**(code **)(*plStack_28 + 0x10))(plStack_28,param_2,param_3);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


