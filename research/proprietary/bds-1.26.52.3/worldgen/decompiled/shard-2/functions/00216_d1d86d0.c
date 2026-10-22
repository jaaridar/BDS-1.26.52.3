/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d86d0 (ELF vaddr 0xd1d86d0)
 * Label: br::worldgen::processors::Gravity::vslot5
 * Body:  [[0d2d86d0, 0d2d872a]]
 * Ghidra: wg_br__worldgen__processors__Gravity__vslot5
 */


void wg_br__worldgen__processors__Gravity__vslot5(long param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  func_0x0ee47730(param_2,&UNK_0144b2e9,8);
  uStack_18._0_4_ = CONCAT13(*(undefined1 *)(param_1 + 8),(undefined3)uStack_18);
  func_0x0ee47730(param_2,(long)&uStack_18 + 3,1);
  uStack_18 = CONCAT44(*(undefined4 *)(param_1 + 0xc),(undefined4)uStack_18);
  func_0x0ee47730(param_2,(long)&uStack_18 + 4,4);
  return;
}


