/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb3cf240 (ELF vaddr 0xb2cf240)
 * Label: callee-of:0xc966020
 * Body:  [[0b3cf240, 0b3cf346]]
 * Ghidra: FUN_0b3cf240
 */


undefined8 * FUN_0b3cf240(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar8 = (long *)(*(long *)(lVar3 + 0x38) +
                   (ulong)(((uint)(*(int *)(lVar3 + 0x40) - (int)*(long *)(lVar3 + 0x38)) >> 3) - 1
                          & 0x18f957af) * 8);
  do {
    if (*plVar8 == -1) {
      plVar7 = *(long **)(lVar3 + 0x58);
      plVar8 = plVar7;
      goto LAB_0b3cf299;
    }
    lVar10 = *plVar8 * 0x20;
    plVar8 = (long *)(*(long *)(lVar3 + 0x50) + lVar10);
  } while (*(int *)(*(long *)(lVar3 + 0x50) + 8 + lVar10) != 0x18f957af);
  plVar7 = *(long **)(lVar3 + 0x58);
LAB_0b3cf299:
  if ((plVar8 != plVar7) && (lVar3 = plVar8[2], lVar3 != 0)) {
    uVar9 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
    if ((uVar9 < (ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 3)) &&
       (lVar10 = *(long *)(*(long *)(lVar3 + 8) + uVar9 * 8), lVar10 != 0)) {
      uVar2 = *(uint *)(lVar10 + (ulong)(uVar1 & 0x7ff) * 4);
      if (((uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + (ulong)(uVar2 >> 4 & 0x3ff8)), lVar3 != 0)) {
        puVar6 = (undefined8 *)(lVar3 + (ulong)(uVar2 & 0x7f) * 8);
        if ((*(long *)(lVar3 + (ulong)(uVar2 & 0x7f) * 8) == -1) &&
           (*(long **)(param_1 + 0x1d0) != (long *)0x0)) {
          uVar5 = (**(code **)(**(long **)(param_1 + 0x1d0) + 0x820))();
          *puVar6 = uVar5;
          return puVar6;
        }
        return puVar6;
      }
    }
  }
  func_0x04890760();
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar4)();
  return puVar6;
}


