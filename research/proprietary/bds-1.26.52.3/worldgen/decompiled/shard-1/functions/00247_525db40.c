/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535db40 (ELF vaddr 0x525db40)
 * Label: callee-of:0x5253670
 * Body:  [[0535db40, 0535ddff]]
 * Ghidra: FUN_0535db40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0535db40(long *param_1)

{
  ulong uVar1;
  short *psVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long unaff_R13;
  short sVar15;
  long lVar16;
  short *psVar17;
  long *plStack_50;
  long lStack_40;
  long lStack_38;
  
  if ((DAT_0f5570f0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5570f0), iVar6 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5570e8 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5570f0);
  }
  sVar15 = _DAT_0f5570e8;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  *plVar7 = (long)&UNK_0efa5b50;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined1 *)(plVar7 + 4) = 1;
  psVar2 = (short *)param_1[1];
  psVar17 = (short *)*param_1;
  for (psVar8 = psVar17; psVar8 != psVar2; psVar8 = psVar8 + 8) {
    if (*psVar8 == sVar15) {
      plVar13 = *(long **)(psVar8 + 4);
      if (plVar13 != (long *)0x0) {
        func_0x0412a280(plVar7,0x50);
        return plVar13;
      }
      func_0x04890760();
      sVar15 = 0;
      plVar13 = param_1;
      goto LAB_0535dd99;
    }
  }
  if (psVar2 < (short *)param_1[2]) {
    *psVar2 = sVar15;
    *(long **)(psVar2 + 4) = plVar7;
    param_1[1] = (long)(psVar2 + 8);
    return plVar7;
  }
  lStack_38 = (long)psVar2 - (long)psVar17;
  lStack_40 = lStack_38 >> 4;
  uVar1 = lStack_40 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = param_1[2] - (long)psVar17;
    uVar12 = (long)uVar9 >> 3;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 < 0x1000000000000000) {
      plVar13 = (long *)(uVar12 << 4);
      unaff_R13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,plVar13);
      plStack_50 = param_1;
      if (unaff_R13 == 0) {
LAB_0535dd99:
        func_0x0eec74c0(plVar13,0);
      }
      lVar14 = lStack_38 + unaff_R13 + lStack_40 * -0x10;
      *(short *)(unaff_R13 + lStack_38) = sVar15;
      *(long **)(unaff_R13 + 8 + lStack_38) = plVar7;
      lVar16 = lStack_38 + unaff_R13 + 0x10;
      if (psVar17 != psVar2) {
        lVar10 = 0;
        do {
          *(undefined2 *)(lVar14 + lVar10) = *(undefined2 *)((long)psVar17 + lVar10);
          uVar11 = *(undefined8 *)((long)psVar17 + lVar10 + 8);
          *(undefined8 *)((long)psVar17 + lVar10 + 8) = 0;
          *(undefined8 *)(lVar14 + 8 + lVar10) = uVar11;
          lVar5 = lVar10 + 0x10;
          lVar10 = lVar10 + 0x10;
        } while ((short *)((long)psVar17 + lVar5) != psVar2);
        do {
          plVar3 = *(long **)(psVar17 + 4);
          psVar17[4] = 0;
          psVar17[5] = 0;
          psVar17[6] = 0;
          psVar17[7] = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          psVar17 = psVar17 + 8;
        } while (psVar17 != psVar2);
        psVar17 = (short *)*plStack_50;
      }
      *plStack_50 = lVar14;
      plStack_50[1] = lVar16;
      lVar14 = plStack_50[2];
      plStack_50[2] = (long)plVar13 + unaff_R13;
      if (psVar17 != (short *)0x0) {
        func_0x0412a280(psVar17,lVar14 - (long)psVar17);
      }
      plStack_50[1] = lVar16;
      return plVar7;
    }
  }
  else {
    func_0x049cff50();
  }
  uVar11 = func_0x04882eb0();
  (**(code **)(*plVar7 + 8))(plVar7);
  func_0x0eee2d70(uVar11);
  pcVar4 = (code *)swi(3);
  plVar7 = (long *)(*pcVar4)();
  return plVar7;
}


