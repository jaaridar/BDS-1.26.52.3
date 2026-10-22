/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48cab00
 * Label: br::worldgen::WorldGenRandom::vslot12
 * Body:  [[048cab00, 048cab02]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot12
 */


void wg_br__worldgen__WorldGenRandom__vslot12(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


