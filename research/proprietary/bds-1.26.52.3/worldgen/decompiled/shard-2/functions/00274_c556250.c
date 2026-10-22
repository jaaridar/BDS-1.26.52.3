/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc656250 (ELF vaddr 0xc556250)
 * Label: JigsawBlock::vslot79
 * Body:  [[0c656250, 0c656579]]
 * Ghidra: wg_JigsawBlock__vslot79
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot79(long param_1,long param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  
  puVar4 = *(undefined4 **)(param_2 + 0x208);
  fVar16 = (float)func_0x0eee4390(*puVar4);
  iVar7 = (int)fVar16;
  iVar3 = *param_3;
  uVar11 = iVar3 - iVar7;
  if (iVar3 < iVar7) {
    uVar11 = iVar7 - iVar3;
  }
  if (uVar11 < 2) {
    fVar16 = (float)func_0x0eee4390(puVar4[2]);
    iVar7 = (int)fVar16;
    iVar3 = param_3[2];
    uVar11 = iVar3 - iVar7;
    if (iVar3 < iVar7) {
      uVar11 = iVar7 - iVar3;
    }
    if (1 < uVar11) goto LAB_0c6562d2;
    fVar17 = (float)param_3[1];
    fVar16 = *(float *)(*(long *)(param_2 + 0x210) + 4);
    if ((fVar16 <= fVar17) &&
       (pfVar1 = (float *)(*(long *)(param_2 + 0x210) + 0x10), fVar17 < *pfVar1 || fVar17 == *pfVar1
       )) goto LAB_0c6562d2;
    fVar2 = *(float *)(*(long *)(param_2 + 0x218) + 4);
    if (fVar16 <= fVar17) {
      fVar16 = fVar2 * _DAT_011983e4 + _DAT_011986e0;
      uVar12 = (int)fVar16 - (uint)(fVar16 < (float)(int)fVar16) & 3;
      uVar11 = 0;
    }
    else {
      fVar16 = fVar2 * _DAT_011983c8 + _DAT_011986e0;
      uVar12 = (int)fVar16 - (uint)(fVar16 < (float)(int)fVar16) & 3;
      uVar11 = 1;
    }
  }
  else {
LAB_0c6562d2:
    fVar16 = (*(float *)(*(long *)(param_2 + 0x218) + 4) * _DAT_011987f8) / _DAT_01198934 +
             _DAT_011986e0;
    uVar11 = *(uint *)(&UNK_014e59e0 +
                      (ulong)((int)fVar16 - (uint)(fVar16 < (float)(int)fVar16) & 3) * 4);
    uVar12 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x200);
  lVar10 = *(long *)(lVar5 + 0x68);
  lVar8 = *(long *)(lVar10 + 0x1b0);
  if (lVar8 == 0) {
LAB_0c656373:
    for (plVar13 = *(long **)(lVar10 + 0x350); plVar13 != *(long **)(lVar10 + 0x358);
        plVar13 = plVar13 + 2) {
      plVar6 = (long *)*plVar13;
      if (*(ulong *)(plVar6[1] + 8) == _DAT_0f6ff6b0) {
        lVar8 = (**(code **)(*plVar6 + 8))(plVar6,lVar10,*(ushort *)(lVar5 + 0x128),uVar11);
        if (lVar8 != 0) goto LAB_0c656410;
        break;
      }
    }
    if ((*(byte *)(lVar10 + 0x135) & 8) != 0) {
      lVar8 = *(long *)(lVar10 + 0x200);
      goto LAB_0c656410;
    }
  }
  else {
    lVar14 = lVar10 + 0x1b0;
    do {
      bVar15 = *(ulong *)(lVar8 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar15) {
        lVar14 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)bVar15 * 8);
    } while (lVar8 != 0);
    if ((lVar14 == lVar10 + 0x1b0) || (_DAT_0f6ff6b0 < *(ulong *)(lVar14 + 0x20)))
    goto LAB_0c656373;
    if (uVar11 < *(uint *)(lVar14 + 0x28)) {
      uVar9 = (ulong)(uVar11 << (((char)*(undefined4 *)(lVar14 + 0x30) -
                                 (char)*(undefined4 *)(lVar14 + 0x2c)) + 1U & 0x1f) & 0xffff |
                     ~*(uint *)(lVar14 + 0x34) & (uint)*(ushort *)(lVar5 + 0x128));
      if ((uVar9 < (ulong)(*(long *)(lVar10 + 0x1f0) - *(long *)(lVar10 + 0x1e8) >> 3)) &&
         (lVar8 = *(long *)(*(long *)(lVar10 + 0x1e8) + uVar9 * 8), lVar8 != 0)) goto LAB_0c656410;
    }
  }
  lVar8 = lVar5;
LAB_0c656410:
  lVar5 = *(long *)(lVar8 + 0x68);
  lVar10 = *(long *)(lVar5 + 0x1b0);
  if (lVar10 != 0) {
    lVar14 = lVar5 + 0x1b0;
    do {
      bVar15 = *(ulong *)(lVar10 + 0x20) < _DAT_0f6fc200;
      if (!bVar15) {
        lVar14 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)bVar15 * 8);
    } while (lVar10 != 0);
    if ((lVar14 != lVar5 + 0x1b0) && (*(ulong *)(lVar14 + 0x20) <= _DAT_0f6fc200)) {
      if (*(uint *)(lVar14 + 0x28) <= uVar12) {
        return lVar8;
      }
      uVar9 = (ulong)(uVar12 << (((char)*(undefined4 *)(lVar14 + 0x30) -
                                 (char)*(undefined4 *)(lVar14 + 0x2c)) + 1U & 0x1f) & 0xffff |
                     ~*(uint *)(lVar14 + 0x34) & (uint)*(ushort *)(lVar8 + 0x128));
      if ((ulong)(*(long *)(lVar5 + 0x1f0) - *(long *)(lVar5 + 0x1e8) >> 3) <= uVar9) {
        return lVar8;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x1e8) + uVar9 * 8);
      if (lVar5 == 0) {
        return lVar8;
      }
      return lVar5;
    }
  }
  plVar13 = *(long **)(lVar5 + 0x350);
  do {
    if (plVar13 == *(long **)(lVar5 + 0x358)) {
LAB_0c656496:
      if ((*(byte *)(lVar5 + 0x135) & 8) == 0) {
        return lVar8;
      }
      return *(long *)(lVar5 + 0x200);
    }
    plVar6 = (long *)*plVar13;
    if (*(ulong *)(plVar6[1] + 8) == _DAT_0f6fc200) {
      lVar10 = (**(code **)(*plVar6 + 8))(plVar6,lVar5,*(ushort *)(lVar8 + 0x128),uVar12);
      if (lVar10 != 0) {
        return lVar10;
      }
      goto LAB_0c656496;
    }
    plVar13 = plVar13 + 2;
  } while( true );
}


