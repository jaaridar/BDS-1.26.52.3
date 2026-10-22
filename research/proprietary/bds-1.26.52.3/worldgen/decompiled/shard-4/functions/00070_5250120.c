/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350120 (ELF vaddr 0x5250120)
 * Label: FrozenNoiseBasedBiomeComponentGlue::vslot3
 * Body:  [[05350120, 053503e6]]
 * Ghidra: wg_FrozenNoiseBasedBiomeComponentGlue__vslot3
 */


/* WARNING: Possible PIC construction at 0x05350349: Changing call to branch */
/* WARNING: Possible PIC construction at 0x053503d9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x053503de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * wg_FrozenNoiseBasedBiomeComponentGlue__vslot3(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  short *psVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long unaff_R13;
  short *psVar14;
  long lVar15;
  undefined8 auStack_60 [2];
  long lStack_50;
  short *psStack_48;
  long lStack_40;
  long lStack_38;
  
  if (DAT_0f557500 == '\0') {
    auStack_60[0] = 0x5350395;
    iVar8 = func_0x04108328(&DAT_0f557500);
    if (iVar8 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f5574f8 = _DAT_0f556458;
      auStack_60[0] = 0x53503bd;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557500);
    }
  }
  sVar7 = _DAT_0f5574f8;
  auStack_60[0] = 0x535015d;
  psVar9 = (short *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (psVar9 == (short *)0x0) {
    auStack_60[0] = 0x5350370;
    func_0x0eec74c0(8,0);
  }
  *(undefined **)psVar9 = &UNK_0efa5aa8;
  psVar3 = *(short **)(param_2 + 0x178);
  psVar14 = *(short **)(param_2 + 0x170);
  for (psVar10 = psVar14; psVar10 != psVar3; psVar10 = psVar10 + 8) {
    if (*psVar10 == sVar7) {
      if (*(long *)(psVar10 + 4) != 0) goto SUB_0412a280;
      auStack_60[0] = 0x535037a;
      func_0x04890760();
      goto LAB_0535037a;
    }
  }
  psVar10 = *(short **)(param_2 + 0x180);
  if (psVar3 < psVar10) {
    *psVar3 = sVar7;
    *(short **)(psVar3 + 4) = psVar9;
    *(short **)(param_2 + 0x178) = psVar3 + 8;
    return psVar10;
  }
  lVar11 = (long)psVar3 - (long)psVar14;
  lVar12 = lVar11 >> 4;
  uVar1 = lVar12 + 1;
  psStack_48 = psVar9;
  if (uVar1 >> 0x3c == 0) {
    uVar13 = (long)psVar10 - (long)psVar14 >> 3;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)((long)psVar10 - (long)psVar14)) {
      uVar13 = 0xfffffffffffffff;
    }
    lStack_50 = param_2;
    lStack_40 = lVar12;
    lStack_38 = lVar11;
    if (uVar13 < 0x1000000000000000) {
      psVar9 = (short *)(uVar13 << 4);
      auStack_60[0] = 0x5350245;
      unaff_R13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,psVar9);
      if (unaff_R13 == 0) {
LAB_0535037a:
        auStack_60[0] = 0x5350384;
        func_0x0eec74c0(psVar9,0);
      }
      lVar11 = lStack_50;
      lVar15 = lStack_38 + unaff_R13 + lStack_40 * -0x10;
      *(short *)(unaff_R13 + lStack_38) = sVar7;
      *(short **)(unaff_R13 + 8 + lStack_38) = psStack_48;
      lVar12 = lStack_38 + unaff_R13 + 0x10;
      psVar10 = psStack_48;
      if (psVar14 != psVar3) {
        psVar10 = (short *)0x0;
        do {
          *(undefined2 *)(lVar15 + (long)psVar10) = *(undefined2 *)((long)psVar14 + (long)psVar10);
          uVar4 = *(undefined8 *)((long)(psVar14 + 4) + (long)psVar10);
          *(undefined8 *)((long)(psVar14 + 4) + (long)psVar10) = 0;
          *(undefined8 *)(lVar15 + 8 + (long)psVar10) = uVar4;
          lVar2 = (long)psVar14 + (long)psVar10;
          psVar10 = psVar10 + 8;
        } while ((short *)(lVar2 + 0x10) != psVar3);
        do {
          plVar5 = *(long **)(psVar14 + 4);
          psVar14[4] = 0;
          psVar14[5] = 0;
          psVar14[6] = 0;
          psVar14[7] = 0;
          if (plVar5 != (long *)0x0) {
            auStack_60[0] = 0x53502f0;
            psVar10 = (short *)(**(code **)(*plVar5 + 8))();
          }
          psVar14 = psVar14 + 8;
        } while (psVar14 != psVar3);
        psVar14 = *(short **)(lVar11 + 0x170);
      }
      *(long *)(lVar11 + 0x170) = lVar15;
      *(long *)(lVar11 + 0x178) = lVar12;
      *(long *)(lVar11 + 0x180) = (long)psVar9 + unaff_R13;
      if (psVar14 == (short *)0x0) {
        *(long *)(lVar11 + 0x178) = lVar12;
        return psVar10;
      }
      register0x00000020 = (BADSPACEBASE *)auStack_60;
      auStack_60[0] = 0x535034e;
      psVar9 = psVar14;
      goto SUB_0412a280;
    }
  }
  else {
    auStack_60[0] = 0x53503c7;
    func_0x049cff50();
  }
  auStack_60[0] = 0x53503cc;
  psVar10 = (short *)func_0x04882eb0();
  register0x00000020 = (BADSPACEBASE *)auStack_60;
  auStack_60[0] = 0x53503de;
  psVar9 = psStack_48;
SUB_0412a280:
  *(short **)((long)register0x00000020 + -8) = psVar10;
  if (psVar9 != (short *)0x0) {
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar6)(&DAT_0f5463b0,psVar9);
  }
  return *(short **)((long)register0x00000020 + -8);
}


