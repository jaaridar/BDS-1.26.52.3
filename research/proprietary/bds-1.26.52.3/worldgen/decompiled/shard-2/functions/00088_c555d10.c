/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc655d10 (ELF vaddr 0xc555d10)
 * Label: JigsawBlock::vslot107
 * Body:  [[0c655d10, 0c656244]]
 * Ghidra: wg_JigsawBlock__vslot107
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 wg_JigsawBlock__vslot107(undefined8 param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  undefined8 uStack_6c;
  float fStack_64;
  undefined8 uStack_60;
  
  lVar8 = *(long *)(param_3 + 0x68);
  uVar11 = (uint)*(ushort *)(param_3 + 0x128);
  lVar5 = *(long *)(lVar8 + 0x1b0);
  if (lVar5 == 0) {
LAB_0c655d87:
    uVar4 = 0;
    for (plVar12 = *(long **)(lVar8 + 0x350); plVar12 != *(long **)(lVar8 + 0x358);
        plVar12 = plVar12 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar12)[1] + 8) == _DAT_0f6ff6b0) {
        uVar4 = (*(code *)**(undefined8 **)*plVar12)();
        lVar8 = *(long *)(param_3 + 0x68);
        uVar11 = (uint)*(ushort *)(param_3 + 0x128);
        lVar5 = *(long *)(lVar8 + 0x1b0);
        break;
      }
    }
    uVar13 = uVar4 & 0xffffffff;
    if ((uVar4 & 0x100000000) == 0) {
      uVar13 = 0;
    }
  }
  else {
    lVar10 = lVar8 + 0x1b0;
    lVar6 = lVar5;
    do {
      bVar14 = *(ulong *)(lVar6 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar14) {
        lVar10 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar14 * 8);
    } while (lVar6 != 0);
    if ((lVar10 == lVar8 + 0x1b0) || (_DAT_0f6ff6b0 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c655d87;
    cVar7 = (char)*(undefined4 *)(lVar10 + 0x2c);
    uVar13 = (ulong)((uint)(*(ushort *)(param_3 + 0x128) >>
                           (((char)*(undefined4 *)(lVar10 + 0x30) - cVar7) + 1U & 0x1f)) &
                    0xffffU >> (0x10U - cVar7 & 0x1f));
  }
  if (lVar5 != 0) {
    lVar6 = lVar8 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar5 + 0x20) < _DAT_0f6fc200;
      if (!bVar14) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar14 * 8);
    } while (lVar5 != 0);
    if ((lVar6 != lVar8 + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6fc200)) {
      cVar7 = (char)*(undefined4 *)(lVar6 + 0x2c);
      uVar4 = (ulong)(uVar11 >> (((char)*(undefined4 *)(lVar6 + 0x30) - cVar7) + 1U & 0x1f) &
                     0xffffU >> (0x10U - cVar7 & 0x1f));
      goto LAB_0c655eab;
    }
  }
  uVar9 = 0;
  for (plVar12 = *(long **)(lVar8 + 0x350); plVar12 != *(long **)(lVar8 + 0x358);
      plVar12 = plVar12 + 2) {
    puVar1 = (undefined8 *)*plVar12;
    if (*(ulong *)(puVar1[1] + 8) == _DAT_0f6fc200) {
      uVar9 = (**(code **)*puVar1)(puVar1,lVar8,uVar11);
      break;
    }
  }
  uVar4 = uVar9 & 0xffffffff;
  if ((uVar9 & 0x100000000) == 0) {
    uVar4 = 0;
  }
LAB_0c655eab:
  func_0x0b5ab100(&fStack_7c,uVar13 & 0xff,uVar4);
  fVar18 = (float)uStack_60;
  fVar19 = (float)((ulong)uStack_60 >> 0x20);
  fVar20 = (float)uStack_6c;
  fVar21 = (float)((ulong)uStack_6c >> 0x20);
  fVar23 = fVar20 * fVar19 - fVar18 * fVar21;
  fVar26 = (float)uStack_78;
  fVar27 = (float)((ulong)uStack_78 >> 0x20);
  fVar22 = fVar26 * fVar19 - fVar18 * fVar27;
  fVar16 = fVar26 * fVar21 - fVar20 * fVar27;
  fVar25 = _DAT_011983f0 / (fStack_64 * fVar16 + (fStack_7c * fVar23 - fStack_70 * fVar22));
  uVar4 = (ulong)(param_2 & 0xff);
  fVar28 = *(float *)(&UNK_01823a70 + uVar4 * 0xc);
  fVar17 = *(float *)(&UNK_01823a74 + uVar4 * 0xc);
  fVar24 = *(float *)(&UNK_01823a78 + uVar4 * 0xc);
  fVar23 = (fStack_70 * fVar18 - fStack_64 * fVar20) * fVar25 * fVar24 +
           (fVar23 * fVar25 * fVar28 - (fStack_70 * fVar19 - fStack_64 * fVar21) * fVar25 * fVar17);
  fVar22 = fVar24 * fVar25 * (float)((uint)(fStack_7c * fVar18 - fStack_64 * fVar26) ^ _DAT_014e9ac0
                                    ) +
           fVar28 * (float)((uint)fVar22 ^ _DAT_014e9ac0) * fVar25 +
           fVar17 * (fVar19 * fStack_7c - fStack_64 * fVar27) * fVar25;
  fVar28 = fVar24 * fVar25 * (fStack_7c * fVar20 - fStack_70 * fVar26) +
           fVar28 * fVar16 * fVar25 +
           fVar17 * (float)((uint)(fVar21 * fStack_7c - fVar27 * fStack_70) ^ _DAT_014e9ac0) *
                    fVar25;
  uVar13 = 1;
  uVar9 = 1;
  if (_DAT_0119884c < fVar28 * fVar28 + fVar23 * fVar23 + fVar22 * fVar22) {
    fVar24 = (float)((uint)fVar23 & _DAT_014e7ba0);
    fVar17 = (float)((uint)fVar22 & _DAT_014e7ba0);
    if ((fVar17 <= fVar24) || (fVar17 <= (float)((uint)fVar28 & _UNK_014e7ba4))) {
      iVar15 = -(uint)((float)((uint)fVar28 & _UNK_014e7ba4) < fVar24);
      auVar2._4_4_ = -(uint)(fVar17 < fVar24);
      auVar2._0_4_ = -(uint)(fVar17 < fVar24);
      auVar2._8_4_ = iVar15;
      auVar2._12_4_ = iVar15;
      iVar15 = movmskpd(1,auVar2);
      if (iVar15 == 3) {
        uVar9 = (ulong)(0.0 < fVar23) | 4;
      }
      else {
        uVar9 = (ulong)(0.0 < fVar28) | 2;
      }
    }
    else {
      uVar9 = (ulong)(0.0 < fVar22);
    }
  }
  uVar9 = (ulong)(byte)(&UNK_01d06538)[uVar9];
  fVar28 = *(float *)(&UNK_01823a70 + uVar9 * 0xc);
  fVar17 = *(float *)(&UNK_01823a74 + uVar9 * 0xc);
  fVar24 = *(float *)(&UNK_01823a78 + uVar9 * 0xc);
  fVar23 = fStack_64 * fVar24 + fStack_7c * fVar28 + fStack_70 * fVar17;
  fVar16 = fVar18 * fVar24 + fVar26 * fVar28 + fVar20 * fVar17;
  fVar28 = fVar19 * fVar24 + fVar27 * fVar28 + fVar21 * fVar17;
  if (_DAT_0119884c < fVar28 * fVar28 + fVar23 * fVar23 + fVar16 * fVar16) {
    fVar17 = (float)((uint)fVar23 & _DAT_014e7ba0);
    fVar24 = (float)(_DAT_014e7ba0 & (uint)fVar16);
    if ((fVar24 <= fVar17) || (fVar24 <= (float)(_UNK_014e7ba4 & (uint)fVar28))) {
      iVar15 = -(uint)((float)(_UNK_014e7ba4 & (uint)fVar28) < fVar17);
      auVar3._4_4_ = -(uint)(fVar24 < fVar17);
      auVar3._0_4_ = -(uint)(fVar24 < fVar17);
      auVar3._8_4_ = iVar15;
      auVar3._12_4_ = iVar15;
      iVar15 = movmskpd(1,auVar3);
      if (iVar15 == 3) {
        uVar13 = (ulong)(0.0 < fVar23) | 4;
      }
      else {
        uVar13 = (ulong)(0.0 < fVar28) | 2;
      }
    }
    else {
      uVar13 = (ulong)(0.0 < fVar16);
    }
  }
  return (&UNK_01d06540)[uVar13 + uVar4 * 6];
}


