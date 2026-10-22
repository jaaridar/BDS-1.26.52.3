/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3d130 (ELF vaddr 0x493d130)
 * Label: caller-of-callee
 * Body:  [[04a3d130, 04a3d251] [04a3d260, 04a3d2f7] [04a3d300, 04a3d34b] [04a3d350, 04a3d4a9] [04a3d4b0, 04a3d4fe] [04a3d500, 04a3d557] [04a3d560, 04a3d5f5] [04a3d600, 04a3d683] [04a3d688, 04a3d6a3] [04a3d6b0, 04a3d6f3]]
 * Ghidra: FUN_04a3d130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a3d130(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  short sVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  ushort uStack_d0;
  float fStack_cc;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_3 == 0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,99,&UNK_013f93ad,&UNK_01309eae),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar22 = *(long **)(param_1 + 8);
  sVar13 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa);
  sVar8 = *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = (**(code **)(**(long **)(param_2 + 0x28) + 0x438))();
  (**(code **)(*plVar22 + 0x10))
            (auStack_a8,plVar22,(int)(short)(sVar13 - sVar8),uVar12,uVar2,uVar9,param_3);
  uVar15 = *(uint *)(param_2 + 0x38);
  sVar8 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa) -
          *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  sVar13 = sVar8 + 0xf;
  if (-1 < sVar8) {
    sVar13 = sVar8;
  }
  iVar3 = *(int *)(param_2 + 0x44);
  uStack_d0 = (ushort)((uint)(int)sVar13 >> 4);
  if ((int)uVar15 <= iVar3) {
    uVar4 = *(uint *)(param_2 + 0x40);
    iVar5 = *(int *)(param_2 + 0x4c);
    if (((int)uVar4 <= iVar5) && (0x1e < (ushort)(sVar8 + 0xfU))) {
LAB_04a3d2d2:
      uStack_80 = (ulong)uVar15;
      auStack_58 = ZEXT416((uint)(float)(int)uVar15);
      uVar19 = uVar4;
LAB_04a3d310:
      uStack_78 = (ulong)uVar19;
      uStack_70 = (ulong)((uVar19 & 0xf) << 4 | (uVar15 & 0xf) << 8);
      fStack_44 = (float)(int)uVar19;
      fStack_48 = (float)auStack_58._0_4_;
      uStack_40 = auStack_58._8_4_;
      uStack_3c = auStack_58._12_4_;
      uVar20 = 0;
      lVar18 = 0;
      lVar10 = 0;
LAB_04a3d361:
      lVar11 = *(long *)(lStack_a0 + uVar20 * 0x18);
      if (lVar11 != 0) {
        lStack_88 = lVar11 + uStack_70 * 8;
        lVar17 = 0;
        lVar11 = lVar10;
        uStack_68 = uVar20;
LAB_04a3d3ab:
        lVar10 = *(long *)(lStack_88 + lVar17 * 8);
        if (lVar10 == lVar11) {
          lVar10 = lVar11;
          if (lVar18 == 0) goto LAB_04a3d603;
          goto LAB_04a3d399;
        }
        if ((lVar10 == 0) &&
           (cVar7 = func_0x0eeddcf0(&UNK_013df12f,&UNK_011b8334,0xb8,&UNK_013f93ad,&UNK_011b8340),
           cVar7 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar20 = *(ulong *)(param_1 + 0x18);
        if (uVar20 != 0) {
          uVar1 = *(ushort *)(lVar10 + 0x168);
          uVar14 = (ulong)uVar1;
          uVar16 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
          uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar16 >> 0x38 < 2) {
            uVar21 = (ulong)((uint)uVar1 & (int)uVar20 - 1U);
          }
          else {
            uVar21 = uVar14;
            if (uVar20 <= uVar14) {
              uVar21 = (ulong)(ushort)(uVar1 % (ushort)uVar20);
            }
          }
          plVar22 = *(long **)(*(long *)(param_1 + 0x10) + uVar21 * 8);
          if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
            if ((byte)(uVar16 >> 0x38) < 2) {
              do {
                if (plVar22[1] == uVar14) {
                  if (*(ushort *)(plVar22 + 2) == uVar1) goto LAB_04a3d529;
                }
                else if ((plVar22[1] & uVar20 - 1) != uVar21) break;
                plVar22 = (long *)*plVar22;
              } while (plVar22 != (long *)0x0);
            }
            else {
              do {
                uVar16 = plVar22[1];
                if (uVar16 == uVar14) {
                  if (*(ushort *)(plVar22 + 2) == uVar1) goto LAB_04a3d529;
                }
                else {
                  if (uVar20 <= uVar16) {
                    if ((uVar16 | uVar20) >> 0x20 == 0) {
                      if ((uVar16 & 0xffffffff) % (uVar20 & 0xffffffff) == uVar21)
                      goto LAB_04a3d4b7;
                      break;
                    }
                    uVar16 = uVar16 % uVar20;
                  }
                  if (uVar16 != uVar21) break;
                }
LAB_04a3d4b7:
                plVar22 = (long *)*plVar22;
              } while (plVar22 != (long *)0x0);
            }
          }
        }
        goto LAB_04a3d603;
      }
      func_0x04890760();
      goto LAB_04a3d650;
    }
  }
LAB_04a3d219:
  func_0x0caf8e10(param_2 + 0x120,auStack_a8,uStack_d0);
  lVar10 = lStack_a0;
  if (lStack_a0 != 0) {
    for (; lVar10 != lStack_98; lStack_98 = lStack_98 + -0x18) {
      lVar18 = *(long *)(lStack_98 + -0x18);
      if (lVar18 != 0) {
        *(long *)(lStack_98 + -0x10) = lVar18;
        func_0x0412a280(lVar18,*(long *)(lStack_98 + -8) - lVar18);
      }
    }
    lStack_98 = lVar10;
    func_0x0412a280(lStack_a0,lStack_90 - lStack_a0);
  }
  return;
LAB_04a3d529:
  plVar23 = (long *)plVar22[3];
  if ((char)plVar23[2] == '\0') {
    lVar18 = *plVar23;
  }
  else {
    plVar22 = (long *)plVar22[4];
    if (plVar23 == plVar22) {
      lVar18 = 0;
      goto LAB_04a3d3a2;
    }
    fStack_cc = _DAT_01198724;
    lVar18 = lVar10;
    do {
      if ((char)plVar23[2] != '\x01') {
        uVar12 = func_0x048a88b0();
        lVar10 = lStack_a0;
        if (lStack_a0 != 0) {
          for (; lVar10 != lStack_98; lStack_98 = lStack_98 + -0x18) {
            lVar18 = *(long *)(lStack_98 + -0x18);
            if (lVar18 != 0) {
              *(long *)(lStack_98 + -0x10) = lVar18;
              func_0x0412a280(lVar18,*(long *)(lStack_98 + -8) - lVar18);
            }
          }
          lStack_98 = lVar10;
          func_0x0412a280(lStack_a0,lStack_90 - lStack_a0);
        }
        _Unwind_Resume(uVar12);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar11 = *(long *)(param_1 + 0x68) + plVar23[1] * 0x814;
      fVar24 = *(float *)(*(long *)(param_1 + 0x68) + 0x810 + plVar23[1] * 0x814);
      uStack_60 = CONCAT44(fVar24 * fStack_44,fVar24 * fStack_48);
      fVar24 = (float)func_0x0d2eb5d0(lVar11,&uStack_60);
      if ((fVar24 < *(float *)(lVar11 + 0x80c)) && (fVar24 < fStack_cc)) {
        lVar18 = *plVar23;
        fStack_cc = fVar24;
      }
      plVar23 = plVar23 + 3;
    } while (plVar23 != plVar22);
  }
  if (lVar18 == lVar10) {
LAB_04a3d603:
    lVar18 = 0;
  }
  else {
LAB_04a3d399:
    *(long *)(lStack_88 + lVar17 * 8) = lVar18;
  }
LAB_04a3d3a2:
  lVar17 = lVar17 + 1;
  lVar11 = lVar10;
  if (lVar17 == 0x10) goto LAB_04a3d350;
  goto LAB_04a3d3ab;
LAB_04a3d350:
  uVar19 = (int)uStack_68 + 1;
  uVar20 = (ulong)(uVar19 & 0xffff);
  if (uStack_d0 <= (ushort)uVar19) goto LAB_04a3d300;
  goto LAB_04a3d361;
LAB_04a3d300:
  uVar19 = (int)uStack_78 + 1;
  if ((int)uStack_78 == iVar5) goto LAB_04a3d2c0;
  goto LAB_04a3d310;
LAB_04a3d2c0:
  uVar15 = (int)uStack_80 + 1;
  if ((int)uStack_80 == iVar3) goto LAB_04a3d650;
  goto LAB_04a3d2d2;
LAB_04a3d650:
  sVar8 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa) -
          *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  sVar13 = sVar8 + 0xf;
  if (-1 < sVar8) {
    sVar13 = sVar8;
  }
  uStack_d0 = (ushort)((uint)(int)sVar13 >> 4);
  goto LAB_04a3d219;
}


