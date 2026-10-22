/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3ea70
 * Label: JigsawBlockActor::vslot4
 * Body:  [[0cd3ea70, 0cd3ea8a]]
 * Ghidra: wg_JigsawBlockActor__vslot4
 */


void wg_JigsawBlockActor__vslot4(long param_1)

{
  code *pcVar1;
  long unaff_RBX;
  bool in_ZF;
  
  if (!in_ZF) {
    *(long *)(unaff_RBX + 0x10) = param_1;
    func_0x0412a280(param_1,*(long *)(unaff_RBX + 0x18) - param_1);
  }
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


