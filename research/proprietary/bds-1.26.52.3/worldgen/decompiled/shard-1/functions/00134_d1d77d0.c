/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d77d0 (ELF vaddr 0xd1d77d0)
 * Label: br::worldgen::processors::BlockRules::TagMatch::vslot2
 * Body:  [[0c8338a0, 0c8339f4] [0c833a00, 0c833a6a] [0d2d77d0, 0d2d77de]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__TagMatch__vslot2
 */


ulong wg_br__worldgen__processors__BlockRules__TagMatch__vslot2(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_RBP;
  long lVar9;
  long *plVar10;
  
  plVar1 = (long *)(param_1 + 8);
  plVar10 = *(long **)(param_2 + 0xd8);
  plVar3 = *(long **)(param_2 + 0xe0);
  if (plVar10 != plVar3) {
    lVar4 = *plVar1;
    do {
      if (*plVar10 == lVar4) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (((long *)plVar10[4] == plVar1) && (plVar10 == *(long **)(param_1 + 0x28)))
        goto LAB_0c833a46;
        bVar2 = *(byte *)(plVar10 + 1);
        if ((bVar2 & 1) == 0) {
          uVar8 = (ulong)(bVar2 >> 1);
          uVar7 = (ulong)*(byte *)(param_1 + 0x10);
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) goto LAB_0c83393d;
LAB_0c833925:
          if (uVar8 != uVar7 >> 1) goto LAB_0c8338e6;
        }
        else {
          uVar8 = plVar10[2];
          uVar7 = (ulong)*(byte *)(param_1 + 0x10);
          if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0c833925;
LAB_0c83393d:
          if (uVar8 != *(ulong *)(param_1 + 0x18)) goto LAB_0c8338e6;
        }
        if ((bVar2 & 1) == 0) {
          lVar5 = (long)plVar10 + 9;
        }
        else {
          lVar5 = plVar10[3];
        }
        lVar9 = param_1 + 0x11;
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(param_1 + 0x20);
        }
        iVar6 = func_0x0eee3000(lVar5,lVar9);
        if (iVar6 == 0) {
          plVar10[4] = (long)plVar1;
          *(long **)(param_1 + 0x28) = plVar10;
          goto LAB_0c833a46;
        }
      }
LAB_0c8338e6:
      plVar10[4] = 0;
      plVar10 = plVar10 + 5;
    } while (plVar10 != plVar3);
  }
  plVar10 = *(long **)(*(long *)(param_2 + 0x68) + 0x170);
  plVar3 = *(long **)(*(long *)(param_2 + 0x68) + 0x178);
  if (plVar10 != plVar3) {
    lVar4 = *plVar1;
    do {
      if (*plVar10 == lVar4) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (((long *)plVar10[4] == plVar1) && (plVar10 == *(long **)(param_1 + 0x28)))
        goto LAB_0c833a46;
        bVar2 = *(byte *)(plVar10 + 1);
        if ((bVar2 & 1) == 0) {
          uVar8 = (ulong)(bVar2 >> 1);
          uVar7 = (ulong)*(byte *)(param_1 + 0x10);
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) goto LAB_0c833a0d;
LAB_0c8339ea:
          if (uVar8 != uVar7 >> 1) goto LAB_0c8339ab;
        }
        else {
          uVar8 = plVar10[2];
          uVar7 = (ulong)*(byte *)(param_1 + 0x10);
          if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0c8339ea;
LAB_0c833a0d:
          if (uVar8 != *(ulong *)(param_1 + 0x18)) goto LAB_0c8339ab;
        }
        if ((bVar2 & 1) == 0) {
          lVar5 = (long)plVar10 + 9;
        }
        else {
          lVar5 = plVar10[3];
        }
        lVar9 = param_1 + 0x11;
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(param_1 + 0x20);
        }
        iVar6 = func_0x0eee3000(lVar5,lVar9);
        if (iVar6 == 0) {
          plVar10[4] = (long)plVar1;
          *(long **)(param_1 + 0x28) = plVar10;
          goto LAB_0c833a46;
        }
      }
LAB_0c8339ab:
      plVar10[4] = 0;
      plVar10 = plVar10 + 5;
    } while (plVar10 != plVar3);
  }
  unaff_RBP = 0;
LAB_0c833a46:
  return unaff_RBP & 0xffffffff;
}


