/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535dfa0 (ELF vaddr 0x525dfa0)
 * Label: callee-of:0x5254ab0
 * Body:  [[0535dfa0, 0535e153] [0535e160, 0535e267]]
 * Ghidra: FUN_0535dfa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0535dfa0(long *param_1)

{
  short *psVar1;
  code *pcVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  short *psVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_R12;
  ulong uVar14;
  long lVar15;
  short *psVar16;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((DAT_0f557480 == '\0') && (iVar5 = func_0x04108328(&DAT_0f557480), iVar5 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557478 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557480);
  }
  sVar4 = _DAT_0f557478;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar6 = (long)&UNK_0efa5b88;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  psVar1 = (short *)param_1[1];
  psVar16 = (short *)*param_1;
  for (psVar7 = psVar16; psVar7 != psVar1; psVar7 = psVar7 + 8) {
    if (*psVar7 == sVar4) {
      plVar9 = *(long **)(psVar7 + 4);
      if (plVar9 != (long *)0x0) {
        func_0x0412a280(plVar6,0x20);
        return plVar9;
      }
      func_0x04890760();
      plVar9 = plVar6;
      goto LAB_0535e1ff;
    }
  }
  if (psVar1 < (short *)param_1[2]) {
    *psVar1 = sVar4;
    *(long **)(psVar1 + 4) = plVar6;
    param_1[1] = (long)(psVar1 + 8);
    return plVar6;
  }
  lStack_38 = (long)psVar1 - (long)psVar16;
  lStack_40 = lStack_38 >> 4;
  uVar12 = lStack_40 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar8 = param_1[2] - (long)psVar16;
    uVar14 = (long)uVar8 >> 3;
    if (uVar14 <= uVar12) {
      uVar14 = uVar12;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 < 0x1000000000000000) {
      unaff_R12 = uVar14 << 4;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12);
      plStack_50 = plVar6;
      plStack_48 = param_1;
      if (plVar9 == (long *)0x0) {
LAB_0535e1ff:
        func_0x0eec74c0(unaff_R12,0);
      }
      lVar13 = (long)plVar9 + lStack_40 * -0x10 + lStack_38;
      *(short *)((long)plVar9 + lStack_38) = sVar4;
      *(long **)((long)plVar9 + lStack_38 + 8) = plStack_50;
      lVar15 = (long)plVar9 + lStack_38 + 0x10;
      if (psVar16 != psVar1) {
        lVar10 = 0;
        do {
          *(undefined2 *)(lVar13 + lVar10) = *(undefined2 *)((long)psVar16 + lVar10);
          uVar11 = *(undefined8 *)((long)psVar16 + lVar10 + 8);
          *(undefined8 *)((long)psVar16 + lVar10 + 8) = 0;
          *(undefined8 *)(lVar13 + 8 + lVar10) = uVar11;
          lVar3 = lVar10 + 0x10;
          lVar10 = lVar10 + 0x10;
        } while ((short *)((long)psVar16 + lVar3) != psVar1);
        do {
          plVar6 = *(long **)(psVar16 + 4);
          psVar16[4] = 0;
          psVar16[5] = 0;
          psVar16[6] = 0;
          psVar16[7] = 0;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
          psVar16 = psVar16 + 8;
        } while (psVar16 != psVar1);
        psVar16 = (short *)*plStack_48;
      }
      *plStack_48 = lVar13;
      plStack_48[1] = lVar15;
      lVar13 = plStack_48[2];
      plStack_48[2] = unaff_R12 + (long)plVar9;
      if (psVar16 != (short *)0x0) {
        func_0x0412a280(psVar16,lVar13 - (long)psVar16);
      }
      plStack_48[1] = lVar15;
      return plStack_50;
    }
  }
  else {
    func_0x049cff50();
  }
  uVar11 = func_0x04882eb0();
  (**(code **)(*plVar6 + 8))();
  func_0x0eee2d70(uVar11);
  pcVar2 = (code *)swi(3);
  plVar6 = (long *)(*pcVar2)();
  return plVar6;
}


