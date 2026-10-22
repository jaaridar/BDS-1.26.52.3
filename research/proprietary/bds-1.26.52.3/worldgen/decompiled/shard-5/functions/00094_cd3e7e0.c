/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3e7e0 (ELF vaddr 0xcd3e7e0)
 * Label: JigsawBlockActor::vslot6
 * Body:  [[0ce3e7e0, 0ce3e888]]
 * Ghidra: wg_JigsawBlockActor__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_JigsawBlockActor__vslot6(long param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = (float *)(**(code **)(*(long *)(param_1 + -0x38) + 0x138))(param_1 + -0x38);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = fVar5;
  if (fVar5 <= *pfVar1) {
    fVar7 = *pfVar1;
  }
  uVar2 = -(uint)(pfVar1[3] < fVar5);
  fVar8 = fVar6;
  if (fVar6 <= pfVar1[1]) {
    fVar8 = pfVar1[1];
  }
  uVar3 = -(uint)(pfVar1[4] < fVar6);
  fVar9 = param_2[2];
  fVar10 = fVar9;
  if (fVar9 <= pfVar1[2]) {
    fVar10 = pfVar1[2];
  }
  uVar4 = -(uint)(pfVar1[5] < fVar9);
  fVar5 = fVar5 - (float)(~uVar2 & (uint)fVar7 | (uint)pfVar1[3] & uVar2);
  fVar6 = fVar6 - (float)(~uVar3 & (uint)fVar8 | (uint)pfVar1[4] & uVar3);
  fVar9 = fVar9 - (float)(~uVar4 & (uint)fVar10 | (uint)pfVar1[5] & uVar4);
  return fVar9 * fVar9 + fVar5 * fVar5 + fVar6 * fVar6 < _DAT_01198c28;
}


