/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e8f0 (ELF vaddr 0xcd3e8f0)
 * Label: JigsawBlockActor::vslot9
 * Body:  [[0ce3e8f0, 0ce3e906]]
 * Ghidra: wg_JigsawBlockActor__vslot9
 */


bool wg_JigsawBlockActor__vslot9(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((SBORROW4(0,*(int *)(param_1 + -0x30))) && (SBORROW4(0,*(int *)(param_1 + -0x2c)))) {
    bVar1 = !SBORROW4(0,*(int *)(param_1 + -0x28));
  }
  return bVar1;
}


