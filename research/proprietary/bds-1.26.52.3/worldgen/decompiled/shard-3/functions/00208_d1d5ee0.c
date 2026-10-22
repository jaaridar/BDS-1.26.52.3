/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5ee0 (ELF vaddr 0xd1d5ee0)
 * Label: br::worldgen::processors::BlockEntity::Modifier::vslot2
 * Body:  [[0d2d5ee0, 0d2d5f55]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Modifier__vslot2
 */


undefined8
wg_br__worldgen__processors__BlockEntity__Modifier__vslot2
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plStack_30;
  long **pplStack_28;
  undefined8 **ppuStack_20;
  
  plStack_30 = (long *)0x0;
  pplStack_28 = &plStack_30;
  if ((ulong)*(uint *)(param_2 + 0x28) != 0xffffffff) {
    ppuStack_20 = &pplStack_28;
    (**(code **)(&UNK_0f45ef58 + (ulong)*(uint *)(param_2 + 0x28) * 8))(&ppuStack_20,param_2 + 8);
    (**(code **)(*plStack_30 + 0x10))(param_1,plStack_30,param_3,param_4);
    return param_1;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


