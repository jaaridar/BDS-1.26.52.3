/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc92d990 (ELF vaddr 0xc82d990)
 * Label: callee-of:0xc961580
 * Body:  [[0c92d990, 0c92daa2]]
 * Ghidra: FUN_0c92d990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c92d990(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  
  lVar1 = *param_1;
  if (*(char *)(*(long *)(lVar1 + 0x58) + 0xe0) == '\x01') {
    fVar5 = *(float *)(lVar1 + 0x34);
    fVar4 = *(float *)(lVar1 + 0x38) - fVar5;
    if (_DAT_011987c4 < fVar5 + fVar4) {
      if (*(float *)(param_2 + 8) <= _DAT_01198788) {
        fVar5 = fVar4 * 0.0 + fVar5;
        fVar4 = *(float *)(param_2 + 0xc);
        fVar6 = fVar5 * _DAT_014e2ab0;
        fVar9 = fVar5 * _UNK_014e2ab4;
        fVar10 = fVar5 * _UNK_014e2ab8;
        fVar5 = fVar5 * _UNK_014e2abc;
      }
      else {
        fVar13 = _DAT_01198788 - *(float *)(param_2 + 8);
        fVar5 = fVar4 * 0.0 + fVar5;
        fVar4 = *(float *)(param_2 + 0xc);
        fVar6 = fVar5 * fVar13 * _DAT_014e3080;
        fVar9 = fVar5 * fVar13 * _UNK_014e3084;
        fVar10 = fVar5 * fVar13 * _UNK_014e3088;
        fVar5 = fVar5 * fVar13 * _UNK_014e308c;
      }
      auVar11._0_4_ = fVar4 * fVar6;
      auVar11._4_4_ = fVar4 * fVar9;
      auVar11._8_4_ = fVar4 * fVar10;
      auVar11._12_4_ = fVar4 * fVar5;
      auVar12 = divps(auVar11,_DAT_014e8d60);
      fVar5 = (float)(*(ulong *)(param_2 + 0x28) >> 0x20);
      auVar8._0_4_ = (float)*(undefined8 *)(param_2 + 0x20) + auVar12._0_4_;
      auVar8._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) + auVar12._4_4_;
      auVar8._8_4_ = auVar12._8_4_ + 0.0;
      auVar8._12_4_ = auVar12._12_4_ + 0.0;
      uVar3 = -(uint)(fVar5 < auVar8._0_4_);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulong *)(param_2 + 0x28) & 0xffffffff;
      auVar12 = maxps(auVar8,auVar2);
      *(ulong *)(param_2 + 0x20) =
           CONCAT44(~-(uint)(_UNK_014e9664 < auVar8._4_4_) & auVar12._4_4_,~uVar3 & auVar12._0_4_) |
           CONCAT44((uint)_UNK_014e9664 & -(uint)(_UNK_014e9664 < auVar8._4_4_),(uint)fVar5 & uVar3)
      ;
      return;
    }
  }
  auVar7._0_4_ = (float)*(undefined8 *)(param_2 + 0x20) + _DAT_014e9ef0;
  auVar7._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) + _UNK_014e9ef4;
  auVar7._8_4_ = _UNK_014e9ef8 + 0.0;
  auVar7._12_4_ = _UNK_014e9efc + 0.0;
  fVar5 = (float)(*(ulong *)(param_2 + 0x28) >> 0x20);
  uVar3 = -(uint)(fVar5 < auVar7._0_4_);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulong *)(param_2 + 0x28) & 0xffffffff;
  auVar12 = maxps(auVar7,auVar12);
  *(ulong *)(param_2 + 0x20) =
       CONCAT44(~-(uint)(_UNK_014e9664 < auVar7._4_4_) & auVar12._4_4_,~uVar3 & auVar12._0_4_) |
       CONCAT44((uint)_UNK_014e9664 & -(uint)(_UNK_014e9664 < auVar7._4_4_),(uint)fVar5 & uVar3);
  return;
}


