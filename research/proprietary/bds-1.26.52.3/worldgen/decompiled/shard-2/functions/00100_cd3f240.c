/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f240 (ELF vaddr 0xcd3f240)
 * Label: JigsawBlockActor::vslot15
 * Body:  [[0ce3f240, 0ce3f289]]
 * Ghidra: wg_JigsawBlockActor__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlockActor__vslot15(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar5 [16];
  
  fVar2 = (float)*(int *)(param_1 + -0x28);
  fVar3 = _DAT_011983f0 + fVar2;
  fVar4 = (float)(int)*(undefined8 *)(param_1 + -0x30);
  fVar6 = (float)(int)((ulong)*(undefined8 *)(param_1 + -0x30) >> 0x20);
  auVar5._0_8_ = CONCAT44(fVar6,fVar4);
  auVar5._8_8_ = 0;
  fVar4 = _DAT_014e5300 + fVar4;
  fVar6 = _UNK_014e5304 + fVar6;
  fVar7 = _UNK_014e5308 + 0.0;
  fVar8 = _UNK_014e530c + 0.0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar5._0_8_;
  auVar10._4_4_ = fVar6;
  auVar10._0_4_ = fVar4;
  auVar10._8_4_ = fVar7;
  auVar10._12_4_ = fVar8;
  auVar10 = minps(auVar9,auVar10);
  fVar11 = fVar2;
  if (fVar3 <= fVar2) {
    fVar11 = fVar3;
  }
  *(long *)(param_1 + 0x18) = auVar10._0_8_;
  *(float *)(param_1 + 0x20) = fVar11;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar10 = maxps(auVar5,auVar1);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(long *)(param_1 + 0x24) = auVar10._0_8_;
  *(float *)(param_1 + 0x2c) = fVar2;
  return;
}


