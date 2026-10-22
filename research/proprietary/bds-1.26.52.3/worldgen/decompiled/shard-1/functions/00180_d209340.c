/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd309340 (ELF vaddr 0xd209340)
 * Label: br::worldgen::JigsawStructure::vslot1
 * Body:  [[0d309340, 0d3093ea]]
 * Ghidra: wg_br__worldgen__JigsawStructure__vslot1
 */


void wg_br__worldgen__JigsawStructure__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f4604f0;
  param_1[0x1d] = &UNK_0f45f520;
  if ((ulong)*(uint *)(param_1 + 0x23) != 0xffffffff) {
    (**(code **)(&UNK_0f45fa00 + (ulong)*(uint *)(param_1 + 0x23) * 8))(&uStack_9,param_1 + 0x1e);
  }
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    func_0x0412a280(param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
  }
  wg_br__worldgen__Structure__vslot0(param_1);
  func_0x0412a280(param_1,0x138);
  return;
}


