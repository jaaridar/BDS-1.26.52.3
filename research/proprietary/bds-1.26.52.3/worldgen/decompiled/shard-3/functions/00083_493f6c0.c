/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3f6c0 (ELF vaddr 0x493f6c0)
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[04a3f6c0, 04a3f750] [04a3f760, 04a3f786] [04a3f790, 04a3f8dd] [04a3f8e0, 04a3f91e] [04a3f920, 04a3f96e] [04a3f970, 04a3f9c8] [04a3f9d0, 04a3fa52] [04a3fa5d, 04a3fa84]]
 * Ghidra: FUN_04a3f6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_04a3f6c0(int *param_1,long param_2,int *param_3,int param_4)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  float fVar21;
  float fStack_a0;
  long lStack_98;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x30))();
  iVar15 = (param_3[3] - *param_3) / param_4;
  iVar7 = (param_3[4] - param_3[1]) / param_4;
  iVar8 = (param_3[5] - param_3[2]) / param_4;
  if ((iVar15 == 0) || (iVar7 == 0 || iVar8 == 0)) {
    return param_1;
  }
  iVar14 = 0;
LAB_04a3f768:
  auStack_58 = ZEXT416((uint)(float)(iVar14 * param_4 + *param_3));
  iVar20 = 0;
LAB_04a3f799:
  fStack_44 = (float)(iVar20 * param_4 + param_3[2]);
  fStack_48 = (float)auStack_58._0_4_;
  uStack_40 = auStack_58._8_4_;
  uStack_3c = auStack_58._12_4_;
  iVar18 = 0;
LAB_04a3f7e8:
  uVar19 = (ulong)(uint)(*param_1 * iVar20 + param_1[1] * iVar14 + iVar18);
  lVar3 = *(long *)(param_1 + 2);
  lStack_98 = *(long *)(lVar3 + uVar19 * 8);
  if ((lStack_98 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013df12f,&UNK_011b8334,0xb8,&UNK_013f93ad,&UNK_011b8340),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  if (uVar4 != 0) {
    uVar2 = *(ushort *)(lStack_98 + 0x168);
    uVar11 = (ulong)uVar2;
    uVar12 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar12 >> 0x38 < 2) {
      uVar16 = (ulong)((uint)uVar2 & (int)uVar4 - 1U);
    }
    else {
      uVar16 = uVar11;
      if (uVar4 <= uVar11) {
        uVar16 = (ulong)(ushort)(uVar2 % (ushort)uVar4);
      }
    }
    plVar17 = *(long **)(*(long *)(param_2 + 0x10) + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if ((byte)(uVar12 >> 0x38) < 2) {
        do {
          if (plVar17[1] == uVar11) {
            if (*(ushort *)(plVar17 + 2) == uVar2) goto LAB_04a3f999;
          }
          else if ((plVar17[1] & uVar4 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar17[1];
          if (uVar12 == uVar11) {
            if (*(ushort *)(plVar17 + 2) == uVar2) goto LAB_04a3f999;
          }
          else {
            if (uVar4 <= uVar12) {
              if ((uVar12 | uVar4) >> 0x20 == 0) {
                if ((uVar12 & 0xffffffff) % (uVar4 & 0xffffffff) == uVar16) goto LAB_04a3f927;
                break;
              }
              uVar12 = uVar12 % uVar4;
            }
            if (uVar12 != uVar16) break;
          }
LAB_04a3f927:
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_04a3f7d0;
LAB_04a3f999:
  plVar13 = (long *)plVar17[3];
  if ((char)plVar13[2] == '\x01') {
    plVar17 = (long *)plVar17[4];
    if (plVar13 != plVar17) {
      fStack_a0 = _DAT_01198724;
      do {
        if ((char)plVar13[2] == '\0') {
          uVar9 = func_0x048a88b0();
          lVar3 = *(long *)(param_1 + 2);
          if (lVar3 != 0) {
            *(long *)(param_1 + 4) = lVar3;
            func_0x0412a280(lVar3,*(long *)(param_1 + 6) - lVar3);
          }
          func_0x0eee2d70(uVar9);
          pcVar5 = (code *)swi(3);
          piVar10 = (int *)(*pcVar5)();
          return piVar10;
        }
        lVar1 = *(long *)(param_2 + 0x68) + plVar13[1] * 0x814;
        fVar21 = *(float *)(*(long *)(param_2 + 0x68) + 0x810 + plVar13[1] * 0x814);
        uStack_60 = CONCAT44(fVar21 * fStack_44,fVar21 * fStack_48);
        fVar21 = (float)func_0x0d2eb5d0(lVar1,&uStack_60);
        if ((fVar21 < *(float *)(lVar1 + 0x80c)) && (fVar21 < fStack_a0)) {
          lStack_98 = *plVar13;
          fStack_a0 = fVar21;
        }
        plVar13 = plVar13 + 3;
      } while (plVar13 != plVar17);
    }
  }
  else {
    lStack_98 = *plVar13;
  }
LAB_04a3f7d0:
  *(long *)(lVar3 + uVar19 * 8) = lStack_98;
  iVar18 = iVar18 + 1;
  if (iVar18 == iVar7) goto LAB_04a3f790;
  goto LAB_04a3f7e8;
LAB_04a3f790:
  iVar20 = iVar20 + 1;
  if (iVar20 == iVar8) goto LAB_04a3f760;
  goto LAB_04a3f799;
LAB_04a3f760:
  iVar14 = iVar14 + 1;
  if (iVar14 == iVar15) {
    return param_1;
  }
  goto LAB_04a3f768;
}


