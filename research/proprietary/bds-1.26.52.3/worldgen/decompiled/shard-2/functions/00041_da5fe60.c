/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda5fe60
 * Label: callee-of:0xda370f0
 * Body:  [[0da5fe60, 0da5fe76] [0da5fe86, 0da5ff66]]
 * Ghidra: FUN_0da5fe60
 */


ulong FUN_0da5fe60(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_RBX;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_R14;
  bool in_ZF;
  
  if (in_ZF) {
    iVar6 = func_0x0eee3000();
  }
  else {
    iVar6 = func_0x0eee3000();
  }
  if (((iVar6 == 0) && (*(char *)(unaff_R14 + 0x18) == *(char *)(unaff_RBX + 0x18))) &&
     (*(char *)(unaff_R14 + 0x19) == *(char *)(unaff_RBX + 0x19))) {
    lVar3 = *(long *)(unaff_R14 + 0x20);
    lVar4 = *(long *)(unaff_R14 + 0x28);
    lVar5 = *(long *)(unaff_RBX + 0x20);
    if (lVar4 - lVar3 == *(long *)(unaff_RBX + 0x28) - lVar5) {
      uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (lVar3 != lVar4) {
        lVar13 = 0;
        do {
          bVar2 = *(byte *)(lVar3 + lVar13);
          if ((bVar2 & 1) == 0) {
            uVar8 = (ulong)(bVar2 >> 1);
            uVar7 = (ulong)*(byte *)(lVar5 + lVar13);
            if ((*(byte *)(lVar5 + lVar13) & 1) != 0) goto LAB_0da5ff0d;
LAB_0da5fef9:
            uVar10 = uVar7 >> 1;
          }
          else {
            uVar8 = *(ulong *)(lVar3 + 8 + lVar13);
            uVar7 = (ulong)*(byte *)(lVar5 + lVar13);
            if ((*(byte *)(lVar5 + lVar13) & 1) == 0) goto LAB_0da5fef9;
LAB_0da5ff0d:
            uVar10 = *(ulong *)(lVar5 + 8 + lVar13);
          }
          if (uVar8 != uVar10) goto LAB_0da5ff54;
          lVar1 = lVar3 + lVar13;
          lVar12 = lVar1 + 1;
          if ((bVar2 & 1) != 0) {
            lVar12 = *(long *)(lVar1 + 0x10);
          }
          if ((uVar7 & 1) == 0) {
            lVar11 = lVar5 + lVar13 + 1;
          }
          else {
            lVar11 = *(long *)(lVar5 + lVar13 + 0x10);
          }
          iVar6 = func_0x0eee3000(lVar12,lVar11);
          if (iVar6 != 0) goto LAB_0da5ff54;
          lVar13 = lVar13 + 0x18;
        } while (lVar1 + 0x18 != lVar4);
      }
      goto LAB_0da5ff56;
    }
  }
LAB_0da5ff54:
  uVar9 = 0;
LAB_0da5ff56:
  return uVar9 & 0xffffffff;
}


