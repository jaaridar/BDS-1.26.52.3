/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c81e0 (ELF vaddr 0xd1c81e0)
 * Label: br::worldgen::JigsawStructure::vslot0
 * Body:  [[0d2c81e0, 0d2c827d]]
 * Ghidra: wg_br__worldgen__JigsawStructure__vslot0
 */


void wg_br__worldgen__JigsawStructure__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f4604f0;
  param_1[0x1d] = &UNK_0f45f520;
  if ((ulong)*(uint *)(param_1 + 0x23) != 0xffffffff) {
    (**(code **)(&UNK_0f45ed90 + (ulong)*(uint *)(param_1 + 0x23) * 8))(&uStack_9,param_1 + 0x1e);
  }
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    func_0x0412a280(param_1[0x1b],param_1[0x19] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
  }
  func_0x0d2de2e0(param_1);
  return;
}


