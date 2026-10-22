/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d97a0
 * Label: br::worldgen::processors::JigsawReplacement::vslot5
 * Body:  [[0d1d9780, 0d1d979d] [0d1d97a0, 0d1d97ab]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot5
 */


void wg_br__worldgen__processors__JigsawReplacement__vslot5(void)

{
  byte *in_RAX;
  long *unaff_R14;
  
  *in_RAX = *in_RAX | (byte)in_RAX;
  while (unaff_R14 = (long *)*unaff_R14, unaff_R14 != (long *)0x0) {
    if (*(char *)(unaff_R14[5] + 8) == '\x01') {
      func_0x0d1d97b0();
      *(undefined1 *)(unaff_R14[5] + 8) = 0;
    }
  }
  return;
}


