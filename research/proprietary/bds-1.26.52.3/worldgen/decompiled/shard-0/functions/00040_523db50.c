/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523db50
 * Label: VanillaSurfaceBuilders::TheEndSurfaceBuilder::vslot2
 * Body:  [[0523db50, 0523db63]]
 * Ghidra: wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot2
 */


void wg_VanillaSurfaceBuilders__TheEndSurfaceBuilder__vslot2(void)

{
  long in_RAX;
  char in_CL;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & unaff_BH;
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + in_CL;
  return;
}


