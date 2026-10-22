/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5248370
 * Label: NoiseGradientBiomeSurfaceComponent::vslot0
 * Body:  [[05248370, 05248376]]
 * Ghidra: wg_NoiseGradientBiomeSurfaceComponent__vslot0
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_NoiseGradientBiomeSurfaceComponent__vslot0
               (int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


