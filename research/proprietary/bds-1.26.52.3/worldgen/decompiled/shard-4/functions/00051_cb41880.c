/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc41880 (ELF vaddr 0xcb41880)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0cc41880, 0cc4194b] [0cc41950, 0cc419b9] [0cc419c0, 0cc41a3e] [0cc41a40, 0cc41aa9] [0cc41ab0, 0cc41b42]]
 * Ghidra: FUN_0cc41880
 */


ulong FUN_0cc41880(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  uStack_58 = *(undefined4 *)(param_1 + 0x148);
  uStack_54 = *(undefined4 *)(param_1 + 0x14c);
  uStack_50 = *(undefined4 *)(param_1 + 0x150);
  uStack_4c = *(undefined4 *)(param_1 + 0x154);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46520(auStack_40,&uStack_58);
  plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar7 = func_0x0bd862c0(param_1 + 0x18,param_2);
  lVar11 = param_1;
  if (lVar7 == 0) {
    uVar4 = *param_2;
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) +
                     (((ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 3) - 1 &
                     uVar4) * 8);
    if (lVar7 != -1) {
      lVar13 = *(long *)(param_1 + 0x58);
      do {
        lVar11 = lVar7 * 0xb0;
        lVar7 = lVar13 + lVar11;
        if (*(ulong *)(lVar13 + 0x10 + lVar11) == uVar4) {
          if ((*(ulong **)(lVar7 + 0x30) == param_2) && (param_2[4] == lVar7 + 0x10U))
          goto LAB_0cc41b16;
          bVar3 = *(byte *)(lVar7 + 0x18);
          if ((bVar3 & 1) == 0) {
            uVar10 = (ulong)(bVar3 >> 1);
            uVar9 = (ulong)(byte)param_2[1];
            if (((byte)param_2[1] & 1) != 0) goto LAB_0cc41abe;
LAB_0cc41a9f:
            if (uVar10 != uVar9 >> 1) goto LAB_0cc41a4d;
          }
          else {
            uVar10 = *(ulong *)(lVar7 + 0x20);
            uVar9 = (ulong)(byte)param_2[1];
            if (((byte)param_2[1] & 1) == 0) goto LAB_0cc41a9f;
LAB_0cc41abe:
            if (uVar10 != param_2[2]) goto LAB_0cc41a4d;
          }
          if ((bVar3 & 1) == 0) {
            lVar8 = lVar7 + 0x19;
          }
          else {
            lVar8 = *(long *)(lVar7 + 0x28);
          }
          uVar10 = (long)param_2 + 9;
          if ((uVar9 & 1) != 0) {
            uVar10 = param_2[3];
          }
          iVar6 = bcmp(lVar8,uVar10);
          if (iVar6 == 0) {
            *(ulong **)(lVar7 + 0x30) = param_2;
            param_2[4] = lVar7 + 0x10U;
            goto LAB_0cc41b16;
          }
        }
LAB_0cc41a4d:
        *(undefined8 *)(lVar7 + 0x30) = 0;
        lVar7 = *(long *)(lVar13 + lVar11);
      } while (lVar7 != -1);
    }
  }
  else {
    uVar4 = *(ulong *)(lVar7 + 0x38);
    lVar8 = *(long *)(*(long *)(param_1 + 0x40) +
                     (((ulong)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) >> 3) - 1 &
                     uVar4) * 8);
    if (lVar8 != -1) {
      lVar13 = *(long *)(param_1 + 0x58);
      lStack_48 = lVar7 + 0x41;
LAB_0cc41973:
      lVar11 = lVar8 * 0xb0;
      lVar8 = lVar13 + lVar11;
      if (*(ulong *)(lVar13 + 0x10 + lVar11) != uVar4) {
LAB_0cc4195d:
        *(undefined8 *)(lVar8 + 0x30) = 0;
        lVar8 = *(long *)(lVar13 + lVar11);
        if (lVar8 == -1) goto LAB_0cc41af6;
        goto LAB_0cc41973;
      }
      if ((*(long *)(lVar8 + 0x30) == lVar7 + 0x38) && (*(long *)(lVar7 + 0x58) == lVar8 + 0x10))
      goto LAB_0cc41b16;
      bVar3 = *(byte *)(lVar8 + 0x18);
      if ((bVar3 & 1) == 0) {
        uVar10 = (ulong)(bVar3 >> 1);
        uVar9 = (ulong)*(byte *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x40) & 1) != 0) goto LAB_0cc419ce;
LAB_0cc419af:
        if (uVar10 != uVar9 >> 1) goto LAB_0cc4195d;
      }
      else {
        uVar10 = *(ulong *)(lVar8 + 0x20);
        uVar9 = (ulong)*(byte *)(lVar7 + 0x40);
        if ((*(byte *)(lVar7 + 0x40) & 1) == 0) goto LAB_0cc419af;
LAB_0cc419ce:
        if (uVar10 != *(ulong *)(lVar7 + 0x48)) goto LAB_0cc4195d;
      }
      if ((bVar3 & 1) == 0) {
        lVar5 = lVar8 + 0x19;
      }
      else {
        lVar5 = *(long *)(lVar8 + 0x28);
      }
      lVar12 = lStack_48;
      if ((uVar9 & 1) != 0) {
        lVar12 = *(long *)(lVar7 + 0x50);
      }
      iVar6 = bcmp(lVar5,lVar12);
      if (iVar6 != 0) goto LAB_0cc4195d;
      *(long *)(lVar8 + 0x30) = lVar7 + 0x38;
      *(long *)(lVar7 + 0x58) = lVar8 + 0x10;
LAB_0cc41b16:
      lVar13 = lVar13 + lVar11;
      lVar7 = *(long *)(param_1 + 0x60);
      goto LAB_0cc41b22;
    }
  }
LAB_0cc41af6:
  lVar7 = *(long *)(param_1 + 0x60);
  lVar13 = lVar7;
LAB_0cc41b22:
  func_0x0cc465d0(auStack_40);
  return CONCAT71((int7)((ulong)lVar11 >> 8),lVar13 != lVar7) & 0xffffffff;
}


