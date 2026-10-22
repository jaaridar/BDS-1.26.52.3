/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cc560 (ELF vaddr 0x48cc560)
 * Label: XoroshiroPositionalRandomFactory::vslot1
 * Body:  [[049cc560, 049cc569]]
 * Ghidra: wg_XoroshiroPositionalRandomFactory__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_XoroshiroPositionalRandomFactory__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


