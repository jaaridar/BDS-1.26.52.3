/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd331480 (ELF vaddr 0xd231480)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot8
 * Body:  [[0d331480, 0d3314c4] [0d3314d0, 0d33152c] [0d331530, 0d331560] [0d331570, 0d3315ed] [0d3315f0, 0d331620] [0d331630, 0d33166c] [0d331670, 0d331743]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot8
 */


undefined8
wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot8(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  
  if (*(long *)(param_1 + 0x20) != *(long *)(param_2 + 0x20)) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)(param_1 + 0x18)) {
    plVar7 = *(long **)(param_2 + 0x10);
    do {
      lVar10 = 0x40;
      if (plVar5[4] != plVar7[4]) goto LAB_0d3316b5;
      if (((long *)plVar5[8] != plVar7 + 4) || ((long *)plVar7[8] != plVar5 + 4)) {
        bVar2 = *(byte *)(plVar5 + 5);
        if ((bVar2 & 1) == 0) {
          uVar9 = (ulong)(bVar2 >> 1);
          uVar8 = (ulong)*(byte *)(plVar7 + 5);
          if ((*(byte *)(plVar7 + 5) & 1) == 0) goto LAB_0d331527;
LAB_0d33153f:
          uVar11 = plVar7[6];
        }
        else {
          uVar9 = plVar5[6];
          uVar8 = (ulong)*(byte *)(plVar7 + 5);
          if ((*(byte *)(plVar7 + 5) & 1) != 0) goto LAB_0d33153f;
LAB_0d331527:
          uVar11 = uVar8 >> 1;
        }
        if (uVar9 != uVar11) goto LAB_0d3316b5;
        if ((bVar2 & 1) == 0) {
          lVar13 = (long)plVar5 + 0x29;
          if ((uVar8 & 1) == 0) goto LAB_0d33155a;
LAB_0d331579:
          lVar12 = plVar7[7];
        }
        else {
          lVar13 = plVar5[7];
          if ((uVar8 & 1) != 0) goto LAB_0d331579;
LAB_0d33155a:
          lVar12 = (long)plVar7 + 0x29;
        }
        iVar4 = func_0x0eee3000(lVar13,lVar12);
        if (iVar4 != 0) goto LAB_0d3316b5;
        plVar5[8] = (long)(plVar7 + 4);
        plVar7[8] = (long)(plVar5 + 4);
      }
      lVar10 = 0x68;
      if (plVar5[9] != plVar7[9]) goto LAB_0d3316b5;
      if (((long *)plVar5[0xd] == plVar7 + 9) && ((long *)plVar7[0xd] == plVar5 + 9)) {
        plVar3 = (long *)plVar5[1];
        plVar15 = plVar5;
        if ((long *)plVar5[1] != (long *)0x0) goto LAB_0d331660;
LAB_0d331670:
        do {
          plVar5 = (long *)plVar15[2];
          bVar16 = plVar15 != (long *)*plVar5;
          plVar15 = plVar5;
        } while (bVar16);
      }
      else {
        bVar2 = *(byte *)(plVar5 + 10);
        if ((bVar2 & 1) == 0) {
          uVar9 = (ulong)(bVar2 >> 1);
          uVar8 = (ulong)*(byte *)(plVar7 + 10);
          if ((*(byte *)(plVar7 + 10) & 1) == 0) goto LAB_0d3315e8;
LAB_0d3315ff:
          uVar11 = plVar7[0xb];
        }
        else {
          uVar9 = plVar5[0xb];
          uVar8 = (ulong)*(byte *)(plVar7 + 10);
          if ((*(byte *)(plVar7 + 10) & 1) != 0) goto LAB_0d3315ff;
LAB_0d3315e8:
          uVar11 = uVar8 >> 1;
        }
        if (uVar9 != uVar11) goto LAB_0d3316b5;
        if ((bVar2 & 1) == 0) {
          lVar13 = (long)plVar5 + 0x51;
          if ((uVar8 & 1) == 0) goto LAB_0d33161a;
LAB_0d331639:
          lVar12 = plVar7[0xc];
        }
        else {
          lVar13 = plVar5[0xc];
          if ((uVar8 & 1) != 0) goto LAB_0d331639;
LAB_0d33161a:
          lVar12 = (long)plVar7 + 0x51;
        }
        iVar4 = func_0x0eee3000(lVar13,lVar12);
        if (iVar4 != 0) {
LAB_0d3316b5:
          *(undefined8 *)((long)plVar5 + lVar10) = 0;
          return 0;
        }
        plVar5[0xd] = (long)(plVar7 + 9);
        plVar7[0xd] = (long)(plVar5 + 9);
        plVar3 = (long *)plVar5[1];
        plVar15 = plVar5;
        if ((long *)plVar5[1] == (long *)0x0) goto LAB_0d331670;
LAB_0d331660:
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar3 = (long *)plVar7[1];
      plVar15 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar15[2];
          bVar16 = plVar15 != (long *)*plVar7;
          plVar15 = plVar7;
        } while (bVar16);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar5 != (long *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    lVar10 = *(long *)(param_1 + 0x28);
    lVar13 = *(long *)(param_1 + 0x30);
    lVar12 = *(long *)(param_2 + 0x28);
    if (lVar13 - lVar10 == *(long *)(param_2 + 0x30) - lVar12) {
      uVar6 = CONCAT71((int7)((ulong)(lVar13 - lVar10) >> 8),1);
      if (lVar10 == lVar13) {
        return uVar6;
      }
      lVar14 = 0;
      while (((*(int *)(lVar10 + lVar14) == *(int *)(lVar12 + lVar14) &&
              (lVar1 = lVar10 + lVar14, *(int *)(lVar1 + 4) == *(int *)(lVar12 + 4 + lVar14))) &&
             (*(int *)(lVar1 + 8) == *(int *)(lVar12 + 8 + lVar14)))) {
        lVar14 = lVar14 + 0xc;
        if (lVar1 + 0xc == lVar13) {
          return uVar6;
        }
      }
    }
  }
  return 0;
}


