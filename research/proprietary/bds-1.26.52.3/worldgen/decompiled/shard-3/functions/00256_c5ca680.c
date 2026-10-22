/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ca680 (ELF vaddr 0xc5ca680)
 * Label: JigsawBlock::vslot12
 * Body:  [[0c6ca680, 0c6ca818]]
 * Ghidra: wg_JigsawBlock__vslot12
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_JigsawBlock__vslot12
          (long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(byte *)(param_2 + 0xbc) & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(&fStack_30,param_1,param_2,param_3,param_4,0);
    if (fStack_24 <= fStack_30) {
      return 0;
    }
    if (fStack_2c < fStack_20) {
      if (fStack_1c <= fStack_28) {
        return 0;
      }
      fVar6 = (float)-*(int *)(param_4 + 1);
      fStack_28 = fStack_28 + fVar6;
      fStack_1c = fStack_1c + fVar6;
      fVar6 = (float)-(int)*param_4;
      fVar7 = (float)-(int)((ulong)*param_4 >> 0x20);
      fStack_30 = fStack_30 + fVar6;
      fStack_2c = fStack_2c + fVar7;
      fStack_24 = fStack_24 + fVar6;
      fStack_20 = fStack_20 + fVar7;
      iVar4 = -(uint)(_DAT_014e5300 <= fStack_24 - fStack_30);
      iVar5 = -(uint)(_UNK_014e5304 <= fStack_20 - fStack_2c);
      auVar2._4_4_ = iVar4;
      auVar2._0_4_ = iVar4;
      auVar2._8_4_ = iVar5;
      auVar2._12_4_ = iVar5;
      uVar3 = movmskpd(-*(int *)(param_4 + 1),auVar2);
      if (((uVar3 >> 1 & 0x7f) + (uVar3 & 1) + 1) - (uint)(fStack_1c - fStack_28 < _DAT_011983f0) <
          2) {
        return 0;
      }
      fVar6 = _DAT_011983f0;
      if (fStack_30 <= 0.0) {
        fStack_30 = _DAT_014e5300;
        fVar6 = _UNK_014e5304;
      }
      if (_DAT_011983f0 <= fStack_24) {
        fStack_24 = 0.0;
      }
      if (fStack_2c <= 0.0) {
        fStack_2c = fVar6;
      }
      if (_DAT_011983f0 <= fStack_20) {
        fStack_20 = 0.0;
      }
      uVar3 = ~-(uint)(0.0 < fStack_28) & (uint)_DAT_011983f0;
      bVar1 = fStack_1c < _DAT_011983f0;
      *param_5 = CONCAT44(fStack_20,fStack_24);
      *(uint *)(param_5 + 1) = -(uint)bVar1 & (uint)fStack_1c;
      *(ulong *)((long)param_5 + 0xc) = CONCAT44(fStack_2c,fStack_30);
      *(uint *)((long)param_5 + 0x14) = uVar3 | (uint)fStack_28 & -(uint)(0.0 < fStack_28);
      return 1;
    }
  }
  return 0;
}


