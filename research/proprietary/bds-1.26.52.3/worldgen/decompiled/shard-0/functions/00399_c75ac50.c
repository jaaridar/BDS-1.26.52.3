/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc85ac50 (ELF vaddr 0xc75ac50)
 * Label: caller-of-seed
 * Body:  [[0c85ac50, 0c85ae1e] [0c85ae20, 0c85af18]]
 * Ghidra: FUN_0c85ac50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c85ac50(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  code *pcVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  short *psVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  short *psVar18;
  long lVar19;
  byte bStack_51;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar7 = (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 8));
  if ((char)uVar7 != '\0') {
    uVar7 = uVar7 & 0xffffffff;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 8));
    plVar1 = *(long **)(param_1 + 8);
    if ((DAT_0f6eaf00 == '\0') && (iVar6 = func_0x04108328(&DAT_0f6eaf00), iVar6 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6eaef8 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      FUN_0410844d(&DAT_0f6eaf00);
    }
    sVar5 = _DAT_0f6eaef8;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *plVar8 = (long)&UNK_0f3e2508;
    plVar8[1] = (long)param_2;
    psVar2 = (short *)plVar1[1];
    psVar18 = (short *)*plVar1;
    for (psVar9 = psVar18; psVar9 != psVar2; psVar9 = psVar9 + 8) {
      if (*psVar9 == sVar5) {
        if (*(long *)(psVar9 + 4) != 0) {
          func_0x0c8bf340(plVar8);
          goto LAB_0c85ae89;
        }
        func_0x04890760();
        plVar17 = plVar1;
        plVar11 = plVar8;
        goto LAB_0c85aeb0;
      }
    }
    if ((short *)plVar1[2] <= psVar2) {
      lStack_38 = (long)psVar2 - (long)psVar18;
      lStack_40 = lStack_38 >> 4;
      uVar14 = lStack_40 + 1;
      if (uVar14 >> 0x3c == 0) {
        uVar10 = plVar1[2] - (long)psVar18;
        uVar16 = (long)uVar10 >> 3;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar16 = 0xfffffffffffffff;
        }
        if (uVar16 < 0x1000000000000000) {
          bStack_51 = (byte)uVar7;
          plVar17 = (long *)(uVar16 << 4);
          plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,plVar17);
          plStack_50 = plVar1;
          plStack_48 = plVar8;
          if (plVar11 == (long *)0x0) {
LAB_0c85aeb0:
            func_0x0eec74c0(plVar17,0);
          }
          lVar15 = (long)plVar11 + lStack_40 * -0x10 + lStack_38;
          *(short *)((long)plVar11 + lStack_38) = sVar5;
          *(long **)((long)plVar11 + lStack_38 + 8) = plStack_48;
          lVar19 = (long)plVar11 + lStack_38 + 0x10;
          if (psVar18 != psVar2) {
            lVar12 = 0;
            do {
              *(undefined2 *)(lVar15 + lVar12) = *(undefined2 *)((long)psVar18 + lVar12);
              uVar13 = *(undefined8 *)((long)psVar18 + lVar12 + 8);
              *(undefined8 *)((long)psVar18 + lVar12 + 8) = 0;
              *(undefined8 *)(lVar15 + 8 + lVar12) = uVar13;
              lVar4 = lVar12 + 0x10;
              lVar12 = lVar12 + 0x10;
            } while ((short *)((long)psVar18 + lVar4) != psVar2);
            do {
              plVar1 = *(long **)(psVar18 + 4);
              psVar18[4] = 0;
              psVar18[5] = 0;
              psVar18[6] = 0;
              psVar18[7] = 0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              psVar18 = psVar18 + 8;
            } while (psVar18 != psVar2);
            psVar18 = (short *)*plStack_50;
          }
          *plStack_50 = lVar15;
          plStack_50[1] = lVar19;
          lVar15 = plStack_50[2];
          plStack_50[2] = (long)plVar17 + (long)plVar11;
          if (psVar18 != (short *)0x0) {
            func_0x0412a280(psVar18,lVar15 - (long)psVar18);
          }
          plStack_50[1] = lVar19;
          uVar7 = (ulong)bStack_51;
          goto LAB_0c85ae89;
        }
      }
      else {
        func_0x049cff50();
      }
      uVar13 = FUN_04882eb0();
      (**(code **)(*plVar8 + 8))();
      func_0x0eee2d70(uVar13);
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    *psVar2 = sVar5;
    *(long **)(psVar2 + 4) = plVar8;
    plVar1[1] = (long)(psVar2 + 8);
  }
LAB_0c85ae89:
  return uVar7 ^ 1;
}


