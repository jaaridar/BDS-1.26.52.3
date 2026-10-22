/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cc550 (ELF vaddr 0xc5cc550)
 * Label: JigsawBlock::vslot84
 * Body:  [[0c6cc550, 0c6cc5f4] [0c6e2dd0, 0c6e2e05] [0c6e2e10, 0c6e2f29]]
 * Ghidra: wg_JigsawBlock__vslot84
 */


/* WARNING: Possible PIC construction at 0x0c6cc5da: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c6cc5df) */
/* WARNING: Removing unreachable block (ram,0x0c6cc5e7) */
/* WARNING: Removing unreachable block (ram,0x0c6cc5e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot84(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint7 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_RBX;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uStack_10;
  
  lVar8 = *(long *)(param_1 + 0x1b0);
  if (lVar8 != 0) {
    lVar6 = param_1 + 0x1b0;
    do {
      bVar13 = *(ulong *)(lVar8 + 0x20) < _DAT_0f6fce60;
      if (!bVar13) {
        lVar6 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)bVar13 * 8);
    } while (lVar8 != 0);
    if ((lVar6 != param_1 + 0x1b0) && (*(ulong *)(lVar6 + 0x20) <= _DAT_0f6fce60)) {
LAB_0c6cc5eb:
      param_1 = param_1 + 0x28;
      goto SUB_0c6e2dd0;
    }
  }
  for (plVar5 = *(long **)(param_1 + 0x350); plVar5 != *(long **)(param_1 + 0x358);
      plVar5 = plVar5 + 2) {
    if (*(ulong *)(*(long *)(*plVar5 + 8) + 8) == _DAT_0f6fce60) goto LAB_0c6cc5eb;
  }
  param_1 = param_2 + 8;
  register0x00000020 = (BADSPACEBASE *)&uStack_10;
  uStack_10 = 0xc6cc5df;
  unaff_RBX = param_2;
SUB_0c6e2dd0:
  *(long *)((long)register0x00000020 + -8) = unaff_RBX;
  if (DAT_0f559f78 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xc6e2ef7;
    iVar3 = func_0x04108328(&DAT_0f559f78);
    if (iVar3 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f559f70 = _DAT_0f556458;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0xc6e2f22;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f559f78);
    }
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar4 = (uint7)((ulong)lVar6 >> 8);
  if (lVar6 - lVar8 != 0) {
    lVar7 = lVar6;
    uVar9 = lVar6 - lVar8 >> 1;
    do {
      while( true ) {
        uVar11 = uVar9 >> 1;
        lVar1 = lVar8 + (uVar9 & 0xfffffffffffffffe);
        uVar2 = *(ushort *)(lVar8 + (uVar9 & 0xfffffffffffffffe));
        if (uVar2 < _DAT_0f559f70) break;
        if (uVar2 <= _DAT_0f559f70) {
          if (uVar9 != 1) {
            uVar9 = (long)uVar9 >> 1;
            do {
              uVar12 = ~(uVar9 >> 1) + uVar9;
              uVar11 = uVar9 & 0xfffffffffffffffe;
              uVar9 = uVar9 >> 1;
              if (*(ushort *)(lVar8 + uVar11) < _DAT_0f559f70) {
                lVar8 = lVar8 + 2 + uVar11;
                uVar9 = uVar12;
              }
            } while (uVar9 != 0);
          }
          lVar10 = lVar7 - (lVar1 + 2);
          if (lVar10 != 0) {
            uVar9 = lVar10 >> 1;
            lVar7 = lVar1 + 2;
            do {
              uVar11 = uVar9 >> 1;
              uVar12 = uVar9 & 0xfffffffffffffffe;
              uVar9 = ~uVar11 + uVar9;
              lVar1 = lVar7 + 2 + uVar12;
              if (_DAT_0f559f70 < *(ushort *)(lVar7 + uVar12)) {
                uVar9 = uVar11;
                lVar1 = lVar7;
              }
              lVar7 = lVar1;
            } while (uVar9 != 0);
          }
          if (lVar8 != lVar7) {
            return CONCAT71(uVar4,lVar8 != lVar6);
          }
          goto LAB_0c6e2eda;
        }
        lVar7 = lVar1;
        uVar9 = uVar11;
        if (uVar11 == 0) goto LAB_0c6e2eda;
      }
      lVar8 = lVar1 + 2;
      uVar9 = ~uVar11 + uVar9;
    } while (uVar9 != 0);
  }
LAB_0c6e2eda:
  return (ulong)uVar4 << 8;
}


