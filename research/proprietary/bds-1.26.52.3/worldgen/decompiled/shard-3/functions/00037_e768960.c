/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe768960
 * Label: SharedTypes::v1_20_60::ClimateBiomeJsonComponent::vslot1
 * Body:  [[0e768960, 0e7689ba]]
 * Ghidra: wg_SharedTypes__v1_20_60__ClimateBiomeJsonComponent__vslot1
 */


long wg_SharedTypes__v1_20_60__ClimateBiomeJsonComponent__vslot1
               (undefined4 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int *in_RAX;
  long *plVar3;
  
  uVar1 = in(param_3);
  *param_1 = uVar1;
  *in_RAX = *in_RAX + 1;
  plVar3 = (long *)(*(long *)(param_1 + 1) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 3) - *(long *)(param_1 + 1)) >> 3) - 1U
                          & in_RAX[1]) * 8);
  do {
    lVar2 = *plVar3;
    if (lVar2 == -1) {
      return 0xf75f6c8;
    }
    plVar3 = (long *)(*(long *)(param_1 + 7) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 7) + 8 + lVar2 * 0x18) != in_RAX[1]);
  if (plVar3 == *(long **)(param_1 + 9)) {
    return 0xf75f6c8;
  }
  return plVar3[2];
}


