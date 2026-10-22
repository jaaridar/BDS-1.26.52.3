/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9930 (ELF vaddr 0xd1d9930)
 * Label: br::worldgen::processors::PosRules::AxisAlignedLinear::vslot2
 * Body:  [[0d2d9930, 0d2d9a1f]]
 * Ghidra: wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__PosRules__AxisAlignedLinear__vslot2
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
               long *param_6,undefined8 param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar3 = (int *)&UNK_019b3c94;
    puVar5 = (undefined8 *)&UNK_019b3c8c;
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    piVar3 = (int *)&UNK_019b3c7c;
    puVar5 = (undefined8 *)&UNK_019b3c74;
  }
  else {
    piVar3 = (int *)&UNK_019b3c64;
    puVar5 = (undefined8 *)&UNK_019b3c5c;
  }
  iVar7 = (int)*puVar5 * ((int)param_4 - (int)param_7);
  iVar2 = -iVar7;
  if (iVar2 < 0) {
    iVar2 = iVar7;
  }
  iVar4 = (int)((ulong)*puVar5 >> 0x20) * ((int)((ulong)param_4 >> 0x20) - param_7._4_4_);
  iVar7 = -iVar4;
  if (iVar7 < 0) {
    iVar7 = iVar4;
  }
  iVar6 = (param_5 - param_8) * *piVar3;
  iVar4 = -iVar6;
  if (iVar4 < 0) {
    iVar4 = iVar6;
  }
  fVar8 = (float)(iVar7 + iVar2 + iVar4);
  (**(code **)(*param_6 + 0x30))(param_6);
  fVar1 = *(float *)(param_1 + 8);
  fVar9 = ((float)(int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) - fVar8) /
          ((float)(int)*(undefined8 *)(param_1 + 0x10) - fVar8);
  fVar8 = fVar1;
  if ((0.0 <= fVar9) && (fVar8 = *(float *)(param_1 + 0xc), fVar9 <= _DAT_011983f0)) {
    fVar8 = fVar1 + (fVar8 - fVar1) * fVar9;
  }
  return extraout_XMM0_Da <= fVar8;
}


