/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ced30 (ELF vaddr 0xc5ced30)
 * Label: JigsawBlock::vslot25
 * Body:  [[0c6ced30, 0c6ced54]]
 * Ghidra: wg_JigsawBlock__vslot25
 */


undefined1 wg_JigsawBlock__vslot25(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x128)) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x20) + 3) != '\0') {
    return 1;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x20) + 5);
}


