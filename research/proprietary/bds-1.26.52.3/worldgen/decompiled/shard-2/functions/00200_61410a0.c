/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x61410a0
 * Label: Editor::Services::EditorJigsawService::vslot12
 * Body:  [[061410a0, 061410b5]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot12
 */


void wg_Editor__Services__EditorJigsawService__vslot12
               (byte *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x77);
  *pcVar1 = *pcVar1 + param_4;
  *param_1 = *param_1 - param_4;
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  pbVar2 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x41);
  *pbVar2 = *pbVar2 ^ unaff_BL;
  return;
}


