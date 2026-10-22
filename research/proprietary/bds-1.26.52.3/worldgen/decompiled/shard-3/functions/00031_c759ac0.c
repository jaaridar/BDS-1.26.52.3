/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759ac0
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot0
 * Body:  [[0c759ac0, 0c759acd]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot0
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot0(void)

{
  uint *puVar1;
  long in_RAX;
  char in_CL;
  
  puVar1 = (uint *)(in_RAX + -0x73);
  *puVar1 = *puVar1 >> 5 | *puVar1 << 0x1b;
  *(char *)(in_RAX + -0x2e) = (*(char *)(in_RAX + -0x2e) - in_CL) - ((int)*puVar1 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


