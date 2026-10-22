/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7b8190
 * Label: Biome::vslot1
 * Body:  [[0c7b8190, 0c7b8196] [0c7b81bf, 0c7b81d7]]
 * Ghidra: wg_Biome__vslot1
 */


void wg_Biome__vslot1(void)

{
  code *pcVar1;
  ulong *unaff_R15;
  bool in_ZF;
  
  if (!in_ZF) {
    func_0x0412a280(unaff_R15[2],*unaff_R15 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


