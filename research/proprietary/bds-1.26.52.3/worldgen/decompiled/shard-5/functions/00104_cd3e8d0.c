/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e8d0 (ELF vaddr 0xcd3e8d0)
 * Label: JigsawBlockActor::vslot37
 * Body:  [[0ce3e8d0, 0ce3e8e8]]
 * Ghidra: wg_JigsawBlockActor__vslot37
 */


bool wg_JigsawBlockActor__vslot37(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((SBORROW4(0,*(int *)(param_1 + 8))) && (SBORROW4(0,*(int *)(param_1 + 0xc)))) {
    bVar1 = !SBORROW4(0,*(int *)(param_1 + 0x10));
  }
  return bVar1;
}


