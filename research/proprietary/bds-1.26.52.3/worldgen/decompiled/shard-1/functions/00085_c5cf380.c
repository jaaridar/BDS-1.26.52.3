/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cf380 (ELF vaddr 0xc5cf380)
 * Label: JigsawBlock::vslot88
 * Body:  [[0c6cf380, 0c6cf5d6]]
 * Ghidra: wg_JigsawBlock__vslot88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_JigsawBlock__vslot88(undefined8 param_1,long param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  float fVar8;
  float fVar9;
  float fVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 unaff_RBP;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  undefined8 uStack_34;
  uint uStack_2c;
  
  lVar12 = *(long *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x18);
  plVar13 = (long *)(*(long *)(lVar12 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar12 + 0x40) - *(long *)(lVar12 + 0x38)) >> 3)
                            - 1U & 0xc29078a0) * 8);
  do {
    if (*plVar13 == -1) goto LAB_0c6cf5c6;
    lVar15 = *plVar13 * 0x20;
    plVar13 = (long *)(*(long *)(lVar12 + 0x50) + lVar15);
  } while (*(int *)(*(long *)(lVar12 + 0x50) + 8 + lVar15) != -0x3d6f8760);
  if ((plVar13 != *(long **)(lVar12 + 0x58)) && (lVar12 = plVar13[2], lVar12 != 0)) {
    uVar14 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
    if ((uVar14 < (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 3)) &&
       ((lVar12 = *(long *)(*(long *)(lVar12 + 8) + uVar14 * 8), lVar12 != 0 &&
        ((uVar4 & 0xfffc0000 ^ *(uint *)(lVar12 + (ulong)(uVar4 & 0x7ff) * 4)) < 0x3ffff)))) {
      uVar5 = *(undefined8 *)(param_2 + 0x1c8);
      fVar17 = (float)func_0x0eee4390();
      plVar11 = (long *)func_0x0412c300(uVar5);
      plVar6 = *(long **)(param_2 + 0x1c0);
      LOCK();
      plVar13 = plVar11 + 1;
      lVar12 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
      lVar12 = (**(code **)(*plVar6 + 0x68))(plVar6);
      pauVar7 = *(undefined1 (**) [16])(param_2 + 0x210);
      auVar2 = *pauVar7;
      fVar8 = auVar2._0_4_;
      fVar9 = auVar2._8_4_;
      fVar10 = auVar2._12_4_;
      fVar18 = auVar2._4_4_ + _DAT_011985d4;
      fVar20 = *(float *)pauVar7[1] + _DAT_011983f0;
      fVar1 = *(float *)(pauVar7[1] + 4);
      fVar19 = fVar18;
      if (fVar20 <= fVar18) {
        fVar19 = fVar20;
      }
      uStack_40 = CONCAT44(fVar19,-(uint)(fVar8 < fVar10) & (uint)fVar8 |
                                  ~-(uint)(fVar8 < fVar10) & (uint)(fVar10 + 0.0));
      uStack_38 = -(uint)(fVar9 < fVar1) & (uint)fVar9 |
                  ~-(uint)(fVar9 < fVar1) & (uint)(fVar1 + 0.0);
      if (fVar18 <= fVar20) {
        fVar18 = fVar20;
      }
      uStack_34 = CONCAT44(fVar18,-(uint)(fVar10 < fVar8) & (uint)fVar8 |
                                  ~-(uint)(fVar10 < fVar8) & (uint)(fVar10 + 0.0));
      uStack_2c = -(uint)(fVar1 < fVar9) & (uint)fVar9 |
                  ~-(uint)(fVar1 < fVar9) & (uint)(fVar1 + 0.0);
      func_0x0c9dcae0(&lStack_58,lVar12,0x13,&uStack_40);
      bVar16 = lStack_58 == lStack_50;
      sVar3 = *(short *)(lVar12 + 0x42);
      if (lStack_58 != 0) {
        lStack_50 = lStack_58;
        func_0x0412a280(lStack_58,lStack_48 - lStack_58);
      }
      uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),
                        bVar16 || (int)fVar17 <= (int)(short)(sVar3 + -0x28));
      goto LAB_0c6cf5c8;
    }
  }
LAB_0c6cf5c6:
  uVar14 = 0;
LAB_0c6cf5c8:
  return uVar14 & 0xffffffff;
}


