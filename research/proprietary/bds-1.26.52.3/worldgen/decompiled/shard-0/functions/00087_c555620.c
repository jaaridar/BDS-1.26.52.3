/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc655620 (ELF vaddr 0xc555620)
 * Label: JigsawBlock::vslot105
 * Body:  [[0c655620, 0c6558f0]]
 * Ghidra: wg_JigsawBlock__vslot105
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot105(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  
  lVar1 = *(long *)(param_1 + 0x200);
  lVar4 = *(long *)(lVar1 + 0x68);
  lVar3 = lVar4 + 0x1b0;
  lVar9 = *(long *)(lVar4 + 0x1b0);
  lVar7 = lVar3;
  lVar6 = lVar9;
  if (lVar9 == 0) {
LAB_0c655673:
    plVar8 = *(long **)(lVar4 + 0x350);
    while( true ) {
      if (plVar8 == *(long **)(lVar4 + 0x358)) {
        return lVar1;
      }
      if (*(ulong *)(*(long *)(*plVar8 + 8) + 8) == _DAT_0f6ff6b0) break;
      plVar8 = plVar8 + 2;
    }
  }
  else {
    do {
      bVar10 = *(ulong *)(lVar6 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar10) {
        lVar7 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar10 * 8);
    } while (lVar6 != 0);
    if ((lVar7 == lVar3) || (_DAT_0f6ff6b0 < *(ulong *)(lVar7 + 0x20))) goto LAB_0c655673;
  }
  lVar7 = lVar3;
  lVar6 = lVar9;
  if (lVar9 == 0) {
LAB_0c6556e3:
    plVar8 = *(long **)(lVar4 + 0x350);
    while( true ) {
      if (plVar8 == *(long **)(lVar4 + 0x358)) {
        return lVar1;
      }
      if (*(ulong *)(*(long *)(*plVar8 + 8) + 8) == _DAT_0f6fc200) break;
      plVar8 = plVar8 + 2;
    }
  }
  else {
    do {
      bVar10 = *(ulong *)(lVar6 + 0x20) < _DAT_0f6fc200;
      if (!bVar10) {
        lVar7 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + (ulong)bVar10 * 8);
    } while (lVar6 != 0);
    if ((lVar7 == lVar3) || (_DAT_0f6fc200 < *(ulong *)(lVar7 + 0x20))) goto LAB_0c6556e3;
  }
  lVar6 = lVar3;
  if (lVar9 == 0) {
LAB_0c655753:
    for (plVar8 = *(long **)(lVar4 + 0x350); plVar8 != *(long **)(lVar4 + 0x358);
        plVar8 = plVar8 + 2) {
      plVar2 = (long *)*plVar8;
      if (*(ulong *)(plVar2[1] + 8) == _DAT_0f6ff6b0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2,lVar4,*(ushort *)(lVar1 + 0x128),3);
        if (lVar3 != 0) goto LAB_0c655802;
        break;
      }
    }
    if ((*(byte *)(lVar4 + 0x135) & 8) != 0) {
      lVar3 = *(long *)(lVar4 + 0x200);
      goto LAB_0c655802;
    }
  }
  else {
    do {
      bVar10 = *(ulong *)(lVar9 + 0x20) < _DAT_0f6ff6b0;
      if (!bVar10) {
        lVar6 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar10 * 8);
    } while (lVar9 != 0);
    if ((lVar6 == lVar3) || (_DAT_0f6ff6b0 < *(ulong *)(lVar6 + 0x20))) goto LAB_0c655753;
    if (3 < *(uint *)(lVar6 + 0x28)) {
      uVar5 = (ulong)(3 << (((char)*(undefined4 *)(lVar6 + 0x30) -
                            (char)*(undefined4 *)(lVar6 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                     ~*(uint *)(lVar6 + 0x34) & (uint)*(ushort *)(lVar1 + 0x128));
      if ((uVar5 < (ulong)(*(long *)(lVar4 + 0x1f0) - *(long *)(lVar4 + 0x1e8) >> 3)) &&
         (lVar3 = *(long *)(*(long *)(lVar4 + 0x1e8) + uVar5 * 8), lVar3 != 0)) goto LAB_0c655802;
    }
  }
  lVar3 = lVar1;
LAB_0c655802:
  lVar1 = *(long *)(lVar3 + 0x68);
  lVar4 = *(long *)(lVar1 + 0x1b0);
  if (lVar4 != 0) {
    lVar6 = lVar1 + 0x1b0;
    do {
      bVar10 = *(ulong *)(lVar4 + 0x20) < _DAT_0f6fc200;
      if (!bVar10) {
        lVar6 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar10 * 8);
    } while (lVar4 != 0);
    if ((lVar6 != lVar1 + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6fc200)) {
      if (*(int *)(lVar6 + 0x28) == 0) {
        return lVar3;
      }
      uVar5 = (ulong)(~*(uint *)(lVar6 + 0x34) & (uint)*(ushort *)(lVar3 + 0x128));
      if (uVar5 < (ulong)(*(long *)(lVar1 + 0x1f0) - *(long *)(lVar1 + 0x1e8) >> 3)) {
        lVar1 = *(long *)(*(long *)(lVar1 + 0x1e8) + uVar5 * 8);
        if (lVar1 != 0) {
          return lVar1;
        }
        return lVar3;
      }
      return lVar3;
    }
  }
  plVar8 = *(long **)(lVar1 + 0x350);
  do {
    if (plVar8 == *(long **)(lVar1 + 0x358)) {
LAB_0c655886:
      if ((*(byte *)(lVar1 + 0x135) & 8) == 0) {
        return lVar3;
      }
      return *(long *)(lVar1 + 0x200);
    }
    plVar2 = (long *)*plVar8;
    if (*(ulong *)(plVar2[1] + 8) == _DAT_0f6fc200) {
      lVar4 = (**(code **)(*plVar2 + 8))(plVar2,lVar1,*(ushort *)(lVar3 + 0x128),0);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_0c655886;
    }
    plVar8 = plVar8 + 2;
  } while( true );
}


