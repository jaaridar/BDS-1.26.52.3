/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3411f0 (ELF vaddr 0xd2411f0)
 * Label: callee-of:0x5156180
 * Body:  [[0d3411f0, 0d34149b] [0d3414a0, 0d3414b9]]
 * Ghidra: FUN_0d3411f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3411f0(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint uVar12;
  undefined1 auVar11 [16];
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar22;
  int iVar25;
  int iVar26;
  int iVar27;
  
  func_0x0d33fd60();
  func_0x0d33fd60(param_1 + 0x18,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar3 = *param_4;
  uVar5 = (uint)((ulong)(param_4[1] - lVar3) >> 2);
  fVar4 = _DAT_01198724;
  if ((int)uVar5 < 1) goto LAB_0d341461;
  uVar7 = uVar5 & 0x7fffffff;
  if ((ulong)uVar7 < 8) {
    uVar9 = 0x80000000;
    uVar16 = 0x7fffffff;
    uVar6 = 0;
LAB_0d3414a8:
    do {
      if (*(float *)(lVar3 + uVar6 * 4) != 0.0) {
        uVar5 = (uint)uVar6;
        if ((int)uVar5 <= (int)uVar16) {
          uVar16 = uVar5;
        }
        if ((int)uVar9 <= (int)uVar5) {
          uVar9 = uVar5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  else {
    uVar6 = (ulong)(uVar5 & 0x7ffffff8);
    uVar8 = 0;
    auVar10 = _DAT_014e9ac0;
    auVar11 = _DAT_014e9ac0;
    auVar15 = _DAT_014e31a0;
    auVar19 = _DAT_014e7ba0;
    auVar21 = _DAT_014e7ba0;
    do {
      iVar22 = auVar15._0_4_;
      auVar23._0_4_ = iVar22 + _DAT_014e3640;
      iVar25 = auVar15._4_4_;
      auVar23._4_4_ = iVar25 + _UNK_014e3644;
      iVar26 = auVar15._8_4_;
      iVar27 = auVar15._12_4_;
      auVar23._8_4_ = iVar26 + _UNK_014e3648;
      auVar23._12_4_ = iVar27 + _UNK_014e364c;
      auVar28._0_4_ = -(uint)(auVar19._0_4_ < iVar22);
      auVar28._4_4_ = -(uint)(auVar19._4_4_ < iVar25);
      auVar28._8_4_ = -(uint)(auVar19._8_4_ < iVar26);
      auVar28._12_4_ = -(uint)(auVar19._12_4_ < iVar27);
      pfVar1 = (float *)(lVar3 + uVar8 * 4);
      auVar29._0_4_ = -(uint)(auVar21._0_4_ < auVar23._0_4_);
      auVar29._4_4_ = -(uint)(auVar21._4_4_ < auVar23._4_4_);
      auVar29._8_4_ = -(uint)(auVar21._8_4_ < auVar23._8_4_);
      auVar29._12_4_ = -(uint)(auVar21._12_4_ < auVar23._12_4_);
      pfVar2 = (float *)(lVar3 + 0x10 + uVar8 * 4);
      auVar33._4_4_ = -(uint)(pfVar1[1] == 0.0);
      auVar33._0_4_ = -(uint)(*pfVar1 == 0.0);
      auVar33._8_4_ = -(uint)(pfVar1[2] == 0.0);
      auVar33._12_4_ = -(uint)(pfVar1[3] == 0.0);
      auVar18._4_4_ = -(uint)NAN(pfVar1[1]);
      auVar18._0_4_ = -(uint)NAN(*pfVar1);
      auVar18._8_4_ = -(uint)NAN(pfVar1[2]);
      auVar18._12_4_ = -(uint)NAN(pfVar1[3]);
      auVar18 = auVar18 | auVar33;
      auVar34._4_4_ = -(uint)(pfVar2[1] == 0.0);
      auVar34._0_4_ = -(uint)(*pfVar2 == 0.0);
      auVar34._8_4_ = -(uint)(pfVar2[2] == 0.0);
      auVar34._12_4_ = -(uint)(pfVar2[3] == 0.0);
      auVar20._4_4_ = -(uint)NAN(pfVar2[1]);
      auVar20._0_4_ = -(uint)NAN(*pfVar2);
      auVar20._8_4_ = -(uint)NAN(pfVar2[2]);
      auVar20._12_4_ = -(uint)NAN(pfVar2[3]);
      auVar20 = auVar20 | auVar34;
      auVar32._0_4_ = -(uint)(iVar22 < auVar10._0_4_);
      auVar32._4_4_ = -(uint)(iVar25 < auVar10._4_4_);
      auVar32._8_4_ = -(uint)(iVar26 < auVar10._8_4_);
      auVar32._12_4_ = -(uint)(iVar27 < auVar10._12_4_);
      auVar30 = ~auVar32 & auVar15 | auVar10 & auVar32;
      auVar31._0_4_ = -(uint)(auVar23._0_4_ < auVar11._0_4_);
      auVar31._4_4_ = -(uint)(auVar23._4_4_ < auVar11._4_4_);
      auVar31._8_4_ = -(uint)(auVar23._8_4_ < auVar11._8_4_);
      auVar31._12_4_ = -(uint)(auVar23._12_4_ < auVar11._12_4_);
      auVar32 = ~auVar31 & auVar23 | auVar11 & auVar31;
      auVar24._0_4_ = ~auVar18._0_4_ & auVar30._0_4_;
      auVar24._4_4_ = ~auVar18._4_4_ & auVar30._4_4_;
      auVar24._8_4_ = ~auVar18._8_4_ & auVar30._8_4_;
      auVar24._12_4_ = ~auVar18._12_4_ & auVar30._12_4_;
      auVar10 = auVar10 & auVar18 | auVar24;
      auVar30._0_4_ = ~auVar20._0_4_ & auVar32._0_4_;
      auVar30._4_4_ = ~auVar20._4_4_ & auVar32._4_4_;
      auVar30._8_4_ = ~auVar20._8_4_ & auVar32._8_4_;
      auVar30._12_4_ = ~auVar20._12_4_ & auVar32._12_4_;
      auVar11 = auVar11 & auVar20 | auVar30;
      auVar19 = ~auVar18 & (~auVar28 & auVar15 | auVar19 & auVar28) | auVar19 & auVar18;
      auVar21 = ~auVar20 & (~auVar29 & auVar23 | auVar21 & auVar29) | auVar21 & auVar20;
      uVar8 = uVar8 + 8;
      auVar15._0_4_ = iVar22 + _DAT_014e1710;
      auVar15._4_4_ = iVar25 + _UNK_014e1714;
      auVar15._8_4_ = iVar26 + _UNK_014e1718;
      auVar15._12_4_ = iVar27 + _UNK_014e171c;
    } while (uVar6 != uVar8);
    auVar14._0_4_ = -(uint)(auVar19._0_4_ < auVar21._0_4_);
    auVar14._4_4_ = -(uint)(auVar19._4_4_ < auVar21._4_4_);
    auVar14._8_4_ = -(uint)(auVar19._8_4_ < auVar21._8_4_);
    auVar14._12_4_ = -(uint)(auVar19._12_4_ < auVar21._12_4_);
    auVar15 = ~auVar14 & auVar21 | auVar19 & auVar14;
    auVar21._0_8_ = auVar15._8_8_;
    auVar21._8_4_ = auVar15._8_4_;
    auVar21._12_4_ = auVar15._12_4_;
    auVar17._0_4_ = -(uint)(auVar15._0_4_ < auVar15._8_4_);
    auVar17._4_4_ = -(uint)(auVar15._4_4_ < auVar15._12_4_);
    auVar17._8_8_ = 0;
    auVar15 = ~auVar17 & auVar21 | auVar15 & auVar17;
    uVar9 = auVar15._0_4_;
    uVar12 = auVar15._4_4_;
    uVar16 = -(uint)((int)uVar9 < (int)uVar12);
    uVar16 = ~uVar16 & uVar12 | uVar9 & uVar16;
    auVar19._0_4_ = -(uint)(auVar11._0_4_ < auVar10._0_4_);
    auVar19._4_4_ = -(uint)(auVar11._4_4_ < auVar10._4_4_);
    auVar19._8_4_ = -(uint)(auVar11._8_4_ < auVar10._8_4_);
    auVar19._12_4_ = -(uint)(auVar11._12_4_ < auVar10._12_4_);
    auVar15 = ~auVar19 & auVar11 | auVar10 & auVar19;
    auVar10._0_8_ = auVar15._8_8_;
    auVar10._8_4_ = auVar15._8_4_;
    auVar10._12_4_ = auVar15._12_4_;
    auVar11._0_4_ = -(uint)(auVar15._8_4_ < auVar15._0_4_);
    auVar11._4_4_ = -(uint)(auVar15._12_4_ < auVar15._4_4_);
    auVar11._8_8_ = 0;
    auVar10 = ~auVar11 & auVar10 | auVar15 & auVar11;
    uVar9 = auVar10._0_4_;
    uVar12 = auVar10._4_4_;
    uVar13 = -(uint)((int)uVar12 < (int)uVar9);
    uVar9 = ~uVar13 & uVar12 | uVar9 & uVar13;
    if (uVar7 != (uVar5 & 0x7ffffff8)) goto LAB_0d3414a8;
  }
  fVar4 = (float)(int)(uVar9 - uVar16) + _DAT_011983f0;
LAB_0d341461:
  *(float *)(param_1 + 0x30) =
       _DAT_011988b0 / ((_DAT_011983f0 / fVar4 + _DAT_011983f0) * _DAT_01198a9c);
  return;
}


