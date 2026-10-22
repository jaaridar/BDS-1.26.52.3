/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9810 (ELF vaddr 0xd1d9810)
 * Label: br::worldgen::processors::PosRules::Test::vslot2
 * Body:  [[0d2d9810, 0d2d98a8]]
 * Ghidra: wg_br__worldgen__processors__PosRules__Test__vslot2
 */


void wg_br__worldgen__processors__PosRules__Test__vslot2
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  code *pcVar1;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined1 **ppuStack_38;
  
  puStack_40 = (undefined1 *)&plStack_48;
  plStack_48 = (long *)0x0;
  if ((ulong)*(uint *)(param_1 + 0x28) != 0xffffffff) {
    ppuStack_38 = &puStack_40;
    puStack_40 = (undefined1 *)&plStack_48;
    (**(code **)(&UNK_0f45f038 + (ulong)*(uint *)(param_1 + 0x28) * 8))(&ppuStack_38,param_1 + 8);
    (**(code **)(*plStack_48 + 0x10))
              (plStack_48,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


