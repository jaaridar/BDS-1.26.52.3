/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523d870
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot1
 * Body:  [[0523d870, 0523d875]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot1(undefined8 param_1,int param_2)

{
  int *piVar1;
  char in_AL;
  undefined7 in_register_00000001;
  long unaff_RBX;
  long unaff_RBP;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  piVar1 = (int *)(unaff_RBP + -0x15 + unaff_RBX * 8);
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


