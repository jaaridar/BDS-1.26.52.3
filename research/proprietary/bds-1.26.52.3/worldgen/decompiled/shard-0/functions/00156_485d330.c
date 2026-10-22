/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485d330
 * Label: EditorCustomBiomeSource::vslot2
 * Body:  [[0485d330, 0485d357]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot2
 */


undefined4 wg_EditorCustomBiomeSource__vslot2(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  long unaff_RBX;
  
  pcVar1 = (char *)(param_3 + -0x77 + unaff_RBX);
  *pcVar1 = *pcVar1 << 2;
  uVar2 = func_0x0485cec0();
  return uVar2;
}


