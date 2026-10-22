/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1d4060
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot1
 * Body:  [[0e1d4060, 0e1d406b] [0e1d409b, 0e1d40b2]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot1
 */


void wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *in_RAX;
  
  *(undefined4 *)(in_RAX + 3) = param_4;
  *(undefined1 *)((long)in_RAX + 0x24) = 1;
  *in_RAX = param_3;
  in_RAX[5] = param_2;
  in_RAX[6] = 0;
  in_RAX[7] = &UNK_0e1d3b90;
  return;
}


