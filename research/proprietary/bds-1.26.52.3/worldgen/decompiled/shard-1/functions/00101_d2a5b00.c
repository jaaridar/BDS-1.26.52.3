/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a5b00
 * Label: FlatWorldGenerator::vslot56
 * Body:  [[0d2a5b00, 0d2a5b06]]
 * Ghidra: wg_FlatWorldGenerator__vslot56
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_FlatWorldGenerator__vslot56(void)

{
  *(int *)((ulong)&stack0x00000000 & 0xffffffff) =
       *(int *)((ulong)&stack0x00000000 & 0xffffffff) + (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


