/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc655900 (ELF vaddr 0xc555900)
 * Label: JigsawBlock::vslot106
 * Body:  [[0c655900, 0c655d01]]
 * Ghidra: wg_JigsawBlock__vslot106
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_JigsawBlock__vslot106(undefined8 param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined7 uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
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
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar9 = *(long *)(param_3 + 0x68);
  uVar11 = (uint)*(ushort *)(param_3 + 0x128);
  lVar4 = *(long *)(lVar9 + 0x1b0);
  if (lVar4 == 0) {
LAB_0c655977:
    uVar3 = 0;
    for (plVar12 = *(long **)(lVar9 + 0x350); plVar12 != *(long **)(lVar9 + 0x358);
        plVar12 = plVar12 + 2) {
      if (*(ulong *)(((undefined8 *)*plVar12)[1] + 8) == _DAT_0f6ff6b0) {
        uVar3 = (*(code *)**(undefined8 **)*plVar12)();
        lVar9 = *(long *)(param_3 + 0x68);
        uVar11 = (uint)*(ushort *)(param_3 + 0x128);
        lVar4 = *(long *)(lVar9 + 0x1b0);
        break;
      }
    }
    uVar13 = uVar3 & 0xffffffff;
    if ((uVar3 & 0x100000000) == 0) {
      uVar13 = 0;
    }
  }
  else {
    lVar10 = lVar9 + 0x1b0;
    lVar7 = lVar4;
    do {
      bVar14 = *(ulong *)(lVar7 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar14) {
        lVar10 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar14 * 8);
    } while (lVar7 != 0);
    if ((lVar10 == lVar9 + 0x1b0) || (_DAT_0f6ff6b0 < *(ulong *)(lVar10 + 0x20))) goto LAB_0c655977;
    cVar8 = (char)*(undefined4 *)(lVar10 + 0x2c);
    uVar13 = (ulong)((uint)(*(ushort *)(param_3 + 0x128) >>
                           (((char)*(undefined4 *)(lVar10 + 0x30) - cVar8) + 1U & 0x1f)) &
                    0xffffU >> (0x10U - cVar8 & 0x1f));
  }
  if (lVar4 != 0) {
    lVar7 = lVar9 + 0x1b0;
    do {
      bVar14 = *(ulong *)(lVar4 + 0x20) < _DAT_0f6fc200;
      if (!bVar14) {
        lVar7 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar14 * 8);
    } while (lVar4 != 0);
    if ((lVar7 != lVar9 + 0x1b0) && (*(ulong *)(lVar7 + 0x20) <= _DAT_0f6fc200)) {
      cVar8 = (char)*(undefined4 *)(lVar7 + 0x2c);
      uVar3 = (ulong)(uVar11 >> (((char)*(undefined4 *)(lVar7 + 0x30) - cVar8) + 1U & 0x1f) &
                     0xffffU >> (0x10U - cVar8 & 0x1f));
      goto LAB_0c655a9b;
    }
  }
  uVar5 = 0;
  for (plVar12 = *(long **)(lVar9 + 0x350); plVar12 != *(long **)(lVar9 + 0x358);
      plVar12 = plVar12 + 2) {
    puVar1 = (undefined8 *)*plVar12;
    if (*(ulong *)(puVar1[1] + 8) == _DAT_0f6fc200) {
      uVar5 = (**(code **)*puVar1)(puVar1,lVar9,uVar11);
      break;
    }
  }
  uVar3 = uVar5 & 0xffffffff;
  if ((uVar5 & 0x100000000) == 0) {
    uVar3 = 0;
  }
LAB_0c655a9b:
  func_0x0b5ab100(&fStack_4c,uVar13 & 0xff,uVar3);
  fVar20 = fStack_3c * fStack_2c - fStack_30 * fStack_38;
  fVar18 = fStack_48 * fStack_2c - fStack_30 * fStack_44;
  fVar16 = fStack_48 * fStack_38 - fStack_3c * fStack_44;
  fVar22 = _DAT_011983f0 / (fStack_34 * fVar16 + (fStack_4c * fVar20 - fStack_40 * fVar18));
  uVar3 = (ulong)(param_2 & 0xff);
  fVar21 = *(float *)(&UNK_01823a70 + uVar3 * 0xc);
  fVar17 = *(float *)(&UNK_01823a74 + uVar3 * 0xc);
  fVar19 = *(float *)(&UNK_01823a78 + uVar3 * 0xc);
  fVar20 = (fStack_40 * fStack_30 - fStack_34 * fStack_3c) * fVar22 * fVar19 +
           (fVar20 * fVar22 * fVar21 -
           (fStack_40 * fStack_2c - fStack_34 * fStack_38) * fVar22 * fVar17);
  fVar18 = fVar19 * fVar22 * (float)((uint)(fStack_30 * fStack_4c - fStack_34 * fStack_48) ^
                                    _DAT_014e9ac0) +
           fVar21 * (float)((uint)fVar18 ^ _DAT_014e9ac0) * fVar22 +
           fVar17 * (fStack_2c * fStack_4c - fStack_34 * fStack_44) * fVar22;
  fVar21 = fVar19 * fVar22 * (fStack_4c * fStack_3c - fStack_40 * fStack_48) +
           fVar21 * fVar16 * fVar22 +
           fVar17 * (float)((uint)(fStack_38 * fStack_4c - fStack_44 * fStack_40) ^ _DAT_014e9ac0) *
                    fVar22;
  uVar6 = (undefined7)(uVar3 * 3 >> 8);
  uVar3 = CONCAT71(uVar6,1);
  if (_DAT_0119884c < fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18) {
    fVar19 = (float)((uint)fVar20 & _DAT_014e7ba0);
    fVar17 = (float)(_DAT_014e7ba0 & (uint)fVar18);
    if ((fVar17 <= fVar19) || (fVar17 <= (float)(_UNK_014e7ba4 & (uint)fVar21))) {
      iVar15 = -(uint)((float)(_UNK_014e7ba4 & (uint)fVar21) < fVar19);
      auVar2._4_4_ = -(uint)(fVar17 < fVar19);
      auVar2._0_4_ = -(uint)(fVar17 < fVar19);
      auVar2._8_4_ = iVar15;
      auVar2._12_4_ = iVar15;
      iVar15 = movmskpd((int)uVar3,auVar2);
      if (iVar15 == 3) {
        uVar3 = (ulong)(0.0 < fVar20) | 4;
      }
      else {
        uVar3 = (ulong)CONCAT31((int3)((uint)iVar15 >> 8),0.0 < fVar21) | 2;
      }
    }
    else {
      uVar3 = CONCAT71(uVar6,0.0 < fVar18);
    }
  }
  return uVar3;
}


