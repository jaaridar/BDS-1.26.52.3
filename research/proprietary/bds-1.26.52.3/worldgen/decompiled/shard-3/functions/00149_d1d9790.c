/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9790
 * Label: br::worldgen::processors::JigsawReplacement::vslot4
 * Body:  [[0d1d9780, 0d1d97ab]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot4
 */


void wg_br__worldgen__processors__JigsawReplacement__vslot4(void)

{
  long *unaff_R14;
  undefined1 in_ZF;
  
  while( true ) {
    if ((bool)in_ZF) {
      func_0x0d1d97b0();
      *(undefined1 *)(unaff_R14[5] + 8) = 0;
    }
    unaff_R14 = (long *)*unaff_R14;
    if (unaff_R14 == (long *)0x0) break;
    in_ZF = *(char *)(unaff_R14[5] + 8) == '\x01';
  }
  return;
}


