/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2d4060 (ELF vaddr 0xe1d4060)
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot1
 * Body:  [[0e2d4060, 0e2d41b7]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot1(undefined1 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  param_1[0xa8] = 0;
  param_1[0xb0] = 0;
  param_1[0xb8] = 0;
  param_1[0xc0] = 0;
  param_1[200] = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  param_1[0xf0] = 0;
  param_1[0xf8] = 0;
  param_1[0x100] = 0;
  param_1[0x140] = 0;
  param_1[0x178] = 0;
  param_1[0x180] = 0;
  param_1[0x198] = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  param_1[0x128] = 0;
  *(undefined8 *)(param_1 + 0x151) = 0;
  *(undefined8 *)(param_1 + 0x159) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (lVar1 == 0) {
    func_0x0eec74c0(0x88,0);
  }
  *(long *)(param_1 + 0x170) = lVar1;
  *(undefined8 *)(param_1 + 0x160) = 0x89;
  *(undefined8 *)(param_1 + 0x168) = 0x86;
  func_0x0eee2f00(lVar1,&UNK_013f3b4a,0x86);
  *(undefined1 *)(lVar1 + 0x86) = 0;
  param_1[0x178] = 1;
  return param_1;
}


