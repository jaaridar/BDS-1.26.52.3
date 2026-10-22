/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca699d0 (ELF vaddr 0xc9699d0)
 * Label: Dimension::vslot37
 * Body:  [[0bc343c0, 0bc344ea] [0ca699d0, 0ca699e3]]
 * Ghidra: wg_Dimension__vslot37
 */


undefined8 wg_Dimension__vslot37(long param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  lVar3 = *(long *)(param_3 + 0x10);
  uVar1 = *(uint *)(param_3 + 0x18);
  plVar10 = (long *)(*(long *)(lVar3 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38)) >> 3) -
                            1U & 0xaf993816) * 8);
  do {
    if (*plVar10 == -1) {
      plVar7 = *(long **)(lVar3 + 0x58);
      plVar10 = plVar7;
      goto LAB_0bc34419;
    }
    lVar12 = *plVar10 * 0x20;
    plVar10 = (long *)(*(long *)(lVar3 + 0x50) + lVar12);
  } while (*(int *)(*(long *)(lVar3 + 0x50) + 8 + lVar12) != -0x5066c7ea);
  plVar7 = *(long **)(lVar3 + 0x58);
LAB_0bc34419:
  if ((plVar10 != plVar7) && (lVar3 = plVar10[2], lVar3 != 0)) {
    uVar11 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
    if ((uVar11 < (ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 3)) &&
       (lVar12 = *(long *)(*(long *)(lVar3 + 8) + uVar11 * 8), lVar12 != 0)) {
      uVar2 = *(uint *)(lVar12 + (ulong)(uVar1 & 0x7ff) * 4);
      if ((uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + (ulong)(uVar2 >> 4 & 0x3ff8));
        if (lVar3 != 0) {
          if ((*(int *)(lVar3 + (ulong)(uVar2 & 0x7f) * 4) == *(int *)(param_1 + 0x170)) &&
             (lVar3 = *(long *)(param_3 + 0x790), lVar3 != 0)) {
            iVar6 = *(int *)(lVar3 + 0xe0) + 0x2e;
            iVar9 = *param_2 - *(int *)(lVar3 + 0xd4);
            iVar8 = param_2[2] - *(int *)(lVar3 + 0xdc);
            return CONCAT71((int7)((ulong)lVar3 >> 8),
                            (uint)(iVar8 * iVar8 + iVar9 * iVar9) < (uint)(iVar6 * iVar6));
          }
          return 0;
        }
      }
    }
  }
  func_0x04890760();
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return uVar5;
}


