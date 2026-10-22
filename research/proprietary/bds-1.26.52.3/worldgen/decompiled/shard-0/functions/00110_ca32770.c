/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32770 (ELF vaddr 0xca32770)
 * Label: WorldGenerator::vslot15
 * Body:  [[0cb32770, 0cb32785]]
 * Ghidra: wg_WorldGenerator__vslot15
 */


void wg_WorldGenerator__vslot15(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2,param_3);
    return;
  }
  return;
}


