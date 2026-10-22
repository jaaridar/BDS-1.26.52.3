/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd334750 (ELF vaddr 0xd234750)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot2
 * Body:  [[0d334750, 0d334791] [0d3347a0, 0d334817] [0d334820, 0d3348e3]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot2
 */


bool wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot2(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  lVar8 = *(long *)(param_1 + 0x18);
  param_1 = param_1 + 0x18;
  if (lVar8 != 0) {
    lVar1 = *(long *)(param_2 + 0x68);
    uVar6 = *(ulong *)(lVar1 + 200);
    lVar10 = lVar1 + 0xd1;
    lVar12 = param_1;
    do {
      uVar11 = *(ulong *)(lVar8 + 0x20);
      bVar2 = (uVar11 >= uVar6 && uVar11 != uVar6) - (uVar11 < uVar6);
      if (uVar11 == uVar6) {
        lVar7 = *(long *)(lVar1 + 0xe0);
        uVar11 = *(ulong *)(lVar1 + 0xd8);
        if ((*(byte *)(lVar1 + 0xd0) & 1) == 0) {
          lVar7 = lVar10;
          uVar11 = (ulong)(*(byte *)(lVar1 + 0xd0) >> 1);
        }
        if ((*(byte *)(lVar8 + 0x28) & 1) == 0) {
          uVar5 = (ulong)(*(byte *)(lVar8 + 0x28) >> 1);
          lVar9 = lVar8 + 0x29;
        }
        else {
          uVar5 = *(ulong *)(lVar8 + 0x30);
          lVar9 = *(long *)(lVar8 + 0x38);
        }
        uVar4 = uVar5;
        if (uVar11 < uVar5) {
          uVar4 = uVar11;
        }
        iVar3 = func_0x0eee2ff0(lVar9,lVar7,uVar4);
        if (iVar3 == 0) {
          iVar3 = (int)(char)((uVar11 < uVar5) - (uVar5 < uVar11));
        }
        bVar2 = (0 < iVar3) - (iVar3 < 0);
      }
      if (-1 < (char)bVar2) {
        lVar12 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)(bVar2 >> 4 & 8));
    } while (lVar8 != 0);
    if (lVar12 != param_1) {
      if (uVar6 == *(ulong *)(lVar12 + 0x20)) {
        bVar13 = (*(byte *)(lVar12 + 0x28) & 1) != 0;
        lVar8 = lVar12 + 0x29;
        if (bVar13) {
          lVar8 = *(long *)(lVar12 + 0x38);
        }
        uVar6 = (ulong)(*(byte *)(lVar12 + 0x28) >> 1);
        if (bVar13) {
          uVar6 = *(ulong *)(lVar12 + 0x30);
        }
        if ((*(byte *)(lVar1 + 0xd0) & 1) == 0) {
          uVar11 = (ulong)(*(byte *)(lVar1 + 0xd0) >> 1);
        }
        else {
          uVar11 = *(ulong *)(lVar1 + 0xd8);
          lVar10 = *(long *)(lVar1 + 0xe0);
        }
        uVar5 = uVar11;
        if (uVar6 < uVar11) {
          uVar5 = uVar6;
        }
        iVar3 = func_0x0eee2ff0(lVar10,lVar8,uVar5);
        bVar13 = iVar3 < 0;
        if (iVar3 == 0) {
          bVar13 = uVar11 < uVar6;
        }
        if (!bVar13) goto LAB_0d33489d;
      }
      else if (*(ulong *)(lVar12 + 0x20) <= uVar6) goto LAB_0d33489d;
    }
  }
  lVar12 = param_1;
LAB_0d33489d:
  return lVar12 != param_1;
}


