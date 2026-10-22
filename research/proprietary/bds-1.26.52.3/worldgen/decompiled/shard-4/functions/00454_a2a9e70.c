/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa3a9e70 (ELF vaddr 0xa2a9e70)
 * Label: caller-of-callee
 * Body:  [[0a3a9e70, 0a3aa476] [0a3aa480, 0a3aa4b5] [0a3aa4c0, 0a3aa52c] [0a3aa530, 0a3aa549] [0a3aa550, 0a3aa7f2] [0a3aa800, 0a3aab2a] [0a3aab30, 0a3aac19] [0d8568b0, 0d8569ac]]
 * Ghidra: FUN_0a3a9e70
 */


/* WARNING: Possible PIC construction at 0x0a3a9f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0a3aaa6b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0a3a9f7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a3a9e70(long *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  undefined1 extraout_DL;
  long extraout_RDX;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined1 uVar22;
  ulong uVar23;
  bool bVar24;
  float fVar25;
  int iStack_134;
  long lStack_130;
  ulong uStack_120;
  long *plStack_108;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  long *plStack_e8;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  code *pcStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  long *plStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_68;
  long *plStack_60;
  long **pplStack_48;
  
  pbVar1 = (byte *)(param_3 + 0x40);
  plVar15 = (long *)(param_2 + 0x50);
  lVar9 = func_0x0a48ac90(plVar15,pbVar1);
  if (lVar9 != 0) {
    plVar15 = *(long **)(lVar9 + 0x28);
    *param_1 = (long)plVar15;
    iVar16 = *(int *)(lVar9 + 0x30);
    *(int *)(param_1 + 1) = iVar16;
    uVar4 = *(undefined4 *)(lVar9 + 0x3c);
    uVar7 = *(undefined4 *)(lVar9 + 0x40);
    uVar8 = *(undefined4 *)(lVar9 + 0x44);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar9 + 0x38);
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
    if (plVar15 == (long *)0x0) {
      return;
    }
    lVar9 = *plVar15;
    if (lVar9 == 0 || (int)plVar15[1] != iVar16) {
      return;
    }
    uStack_f8 = param_1[2];
    uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
    goto SUB_0d8568b0;
  }
  puVar5 = *(ulong **)(param_2 + 0x28);
  uVar18 = param_3;
  if ((puVar5 == (ulong *)0x0) ||
     (uVar20 = *puVar5, uVar20 == 0 || (int)puVar5[1] != *(int *)(param_2 + 0x30))) {
    plStack_108 = _DAT_0f65f290;
    uStack_f8 = CONCAT44(uRam000000000f65f2a4,_DAT_0f65f2a0);
    uStack_f0 = uRam000000000f65f2a8;
    uStack_ec = uRam000000000f65f2ac;
    iStack_134 = _DAT_0f65f298;
    if (_DAT_0f65f290 == (long *)0x0) {
      plStack_e8 = (long *)0x0;
      goto LAB_0a3aa34b;
    }
    plStack_e8 = _DAT_0f65f290;
    lVar9 = *_DAT_0f65f290;
    if (lVar9 == 0 || (int)_DAT_0f65f290[1] != _DAT_0f65f298) goto LAB_0a3aa34b;
    goto SUB_0d8568b0;
  }
  plStack_60 = (long *)(uVar20 + 0x10);
  uStack_d8 = 0;
  uStack_d0._0_4_ = 0xa49c2a0;
  uStack_d0._4_4_ = 0;
  uStack_c8 = 0xa49c490;
  uStack_c4 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0x100000038;
  plStack_78 = (long *)0x0;
  plStack_68 = (long *)&UNK_0f223b80;
  pplStack_48 = &plStack_68;
  func_0x065bdd40(&plStack_68,&uStack_b8);
  if (pplStack_48 == &plStack_68) {
    lVar9 = 0x20;
LAB_0a3aa045:
    (**(code **)((long)*pplStack_48 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (pplStack_48 != (long **)0x0) goto LAB_0a3aa045;
  }
  uVar12 = func_0x0d856c70(uVar20,&uStack_d8);
  plVar13 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (plStack_98 == (long *)&uStack_b8) {
    lVar9 = 0x20;
LAB_0a3aa0be:
    (**(code **)(*plStack_98 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (plStack_98 != (long *)0x0) goto LAB_0a3aa0be;
  }
  if ((int)uVar12 == -1) {
    plStack_108 = *(long **)(uVar20 + 8);
    uVar22 = extraout_DL;
    if (plStack_108 == (long *)0x0) goto LAB_0a3aa32d;
    goto LAB_0a3aa0ac;
  }
  uStack_120 = CONCAT71(uStack_120._1_7_,extraout_DL);
  uVar23 = 0xffffffff;
  lStack_130 = uVar20 + 0x38;
  uStack_dc = 0xf50a5e37;
  uVar14 = uVar20 + 0x70;
  plVar13 = (long *)(*(long *)(uVar20 + 0x70) +
                    (ulong)((int)((ulong)(*(long *)(uVar20 + 0x78) - *(long *)(uVar20 + 0x70)) >> 3)
                            - 1U & 0xf50a5e37) * 8);
  do {
    if (*plVar13 == -1) goto LAB_0a3aa140;
    lVar9 = *plVar13 * 0x20;
    plVar13 = (long *)(*(long *)(uVar20 + 0x88) + lVar9);
  } while (*(int *)(*(long *)(uVar20 + 0x88) + 8 + lVar9) != -0xaf5a1c9);
  if (plVar13 != *(long **)(uVar20 + 0x90)) {
    plVar13 = (long *)plVar13[2];
    goto LAB_0a3aa297;
  }
LAB_0a3aa140:
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f223c00;
  uVar11 = param_3;
  if (DAT_0f65f940 == '\0') goto LAB_0a3aabd8;
LAB_0a3aa184:
  plStack_68 = plVar13 + 3;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[10] = 0xf65f928;
  *(undefined1 *)(plVar13 + 0xb) = 1;
  plVar13[0xc] = uVar23;
  plVar13[3] = (long)&UNK_0f223c50;
  plVar13[0xd] = 0;
  plVar13[0xe] = 0;
  plVar13[0xf] = 0;
  plStack_60 = plVar13;
  func_0x065bf170(uVar14,&uStack_dc,&plStack_68);
  uStack_c8 = 0x65bf690;
  uStack_c4 = 0;
  uStack_b8 = 0x145ad657;
  pcStack_c0 = (code *)0x0;
  uStack_b4 = 3;
  uStack_d8 = (undefined2)lStack_130;
  uStack_d6 = (undefined2)((ulong)lStack_130 >> 0x10);
  uStack_d4 = (undefined4)((ulong)lStack_130 >> 0x20);
  (**(code **)(*plStack_68 + 0x28))(plStack_68,&uStack_d8);
  if (pcStack_c0 != (code *)0x0) {
    (*pcStack_c0)(&uStack_d8);
  }
  plVar19 = plStack_60;
  plVar13 = plStack_68;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_60 + 1;
    lVar9 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar19);
    }
  }
LAB_0a3aa297:
  func_0x0d8547a0(plVar13,uVar12,0,0);
  puVar10 = (undefined8 *)func_0x0a49dd10(plVar13,extraout_RDX + -1);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uStack_d4 = (undefined4)*(undefined8 *)(param_2 + 0x18);
  uStack_d0._0_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  uStack_d0._4_4_ = (undefined4)*(undefined8 *)(param_2 + 0x20);
  uStack_c8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  *puVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(puVar10 + 1) = uVar4;
  *(undefined4 *)(puVar10 + 2) = uStack_d4;
  *(undefined4 *)((long)puVar10 + 0x14) = (undefined4)uStack_d0;
  *(undefined4 *)(puVar10 + 3) = uStack_d0._4_4_;
  *(undefined4 *)((long)puVar10 + 0x1c) = uStack_c8;
  if ((*pbVar1 & 1) == 0) {
    puVar10[6] = *(undefined8 *)(param_3 + 0x50);
    uVar4 = *(undefined4 *)(param_3 + 0x44);
    uVar7 = *(undefined4 *)(param_3 + 0x48);
    uVar8 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)pbVar1;
    *(undefined4 *)((long)puVar10 + 0x24) = uVar4;
    *(undefined4 *)(puVar10 + 5) = uVar7;
    *(undefined4 *)((long)puVar10 + 0x2c) = uVar8;
  }
  else {
    func_0x0412e5e0(puVar10 + 4,*(undefined8 *)(uVar18 + 0x50),*(undefined8 *)(uVar18 + 0x48));
  }
  plStack_108 = *(long **)(uVar20 + 8);
  uVar22 = (undefined1)uStack_120;
  if (plStack_108 == (long *)0x0) {
LAB_0a3aa32d:
    iStack_134 = 0;
  }
  else {
LAB_0a3aa0ac:
    iStack_134 = (int)plStack_108[1];
  }
  uStack_f0 = CONCAT31(uStack_f0._1_3_,uVar22);
  uStack_f8 = uVar12;
  plStack_e8 = plStack_108;
LAB_0a3aa34b:
  lStack_130 = uVar18 + 0x41;
  bVar24 = (*(byte *)(uVar18 + 0x40) & 1) == 0;
  lVar9 = *(long *)(uVar18 + 0x50);
  if (bVar24) {
    lVar9 = lStack_130;
  }
  uVar20 = (ulong)(*(byte *)(uVar18 + 0x40) >> 1);
  if (!bVar24) {
    uVar20 = *(ulong *)(uVar18 + 0x48);
  }
  uVar11 = func_0x04883620(&uStack_d8,lVar9,uVar20);
  uVar20 = *(ulong *)(param_2 + 0x58);
  if (uVar20 != 0) {
    uVar12 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar12 >> 0x38 < 2) {
      uStack_120 = uVar20 - 1 & uVar11;
    }
    else {
      uStack_120 = uVar11;
      if (uVar20 <= uVar11) {
        if ((uVar11 | uVar20) >> 0x20 == 0) {
          uStack_120 = (uVar11 & 0xffffffff) % (uVar20 & 0xffffffff);
        }
        else {
          uStack_120 = uVar11 % uVar20;
        }
      }
    }
    puVar10 = *(undefined8 **)(*plVar15 + uStack_120 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar10, plVar13 != (long *)0x0)) {
      if ((*(byte *)(uVar18 + 0x40) & 1) == 0) {
        uVar14 = (ulong)(*(byte *)(uVar18 + 0x40) >> 1);
      }
      else {
        uVar14 = *(ulong *)(uVar18 + 0x48);
        lStack_130 = *(long *)(uVar18 + 0x50);
      }
      if ((byte)(uVar12 >> 0x38) < 2) {
        do {
          if (plVar13[1] == uVar11) {
            bVar3 = *(byte *)(plVar13 + 2);
            if ((bVar3 & 1) == 0) {
              uVar12 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar12 = plVar13[3];
            }
            if (uVar12 == uVar14) {
              if ((bVar3 & 1) == 0) {
                lVar9 = (long)plVar13 + 0x11;
              }
              else {
                lVar9 = plVar13[4];
              }
              iVar16 = bcmp(lVar9,lStack_130,uVar14);
              if (iVar16 == 0) goto LAB_0a3aa581;
            }
          }
          else if ((plVar13[1] & uVar20 - 1) != uStack_120) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar13[1];
          if (uVar12 == uVar11) {
            bVar3 = *(byte *)(plVar13 + 2);
            if ((bVar3 & 1) == 0) {
              uVar12 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar12 = plVar13[3];
            }
            if (uVar12 == uVar14) {
              if ((bVar3 & 1) == 0) {
                lVar9 = (long)plVar13 + 0x11;
              }
              else {
                lVar9 = plVar13[4];
              }
              iVar16 = bcmp(lVar9,lStack_130,uVar14);
              if (iVar16 == 0) goto LAB_0a3aa581;
            }
          }
          else {
            if (uVar20 <= uVar12) {
              if ((uVar12 | uVar20) >> 0x20 == 0) {
                uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
              }
              else {
                uVar12 = uVar12 % uVar20;
              }
            }
            if (uVar12 != uStack_120) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uStack_d8 = SUB82(plVar13,0);
  uStack_d6 = (undefined2)((ulong)plVar13 >> 0x10);
  uStack_d4 = (undefined4)((ulong)plVar13 >> 0x20);
  uStack_c8 = 0;
  uStack_c4 = 0;
  *plVar13 = 0;
  plVar13[1] = uVar11;
  uStack_d0 = plVar15;
  if ((*pbVar1 & 1) == 0) {
    plVar13[4] = *(long *)(param_3 + 0x50);
    lVar9 = *(long *)(param_3 + 0x48);
    plVar13[2] = *(long *)pbVar1;
    plVar13[3] = lVar9;
  }
  else {
    func_0x0412e5e0(plVar13 + 2,*(undefined8 *)(uVar18 + 0x50),*(undefined8 *)(uVar18 + 0x48));
  }
  plVar13[5] = (long)plStack_e8;
  *(int *)(plVar13 + 6) = iStack_134;
  plVar13[7] = uStack_f8;
  plVar13[8] = CONCAT44(uStack_ec,uStack_f0);
  plStack_108 = (long *)0x0;
  uStack_f8 = 0xffffffffffffff;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  fVar25 = (float)(*(long *)(param_2 + 0x68) + 1);
  if ((long)uVar20 < 0) {
    fVar2 = *(float *)(param_2 + 0x70);
  }
  else {
    fVar2 = *(float *)(param_2 + 0x70);
  }
  if ((uVar20 != 0) && (fVar25 <= (float)uVar20 * fVar2)) goto LAB_0a3aaa10;
  uVar18 = 1;
  if (2 < uVar20) {
    uVar18 = (ulong)((uVar20 & uVar20 - 1) != 0);
  }
  uVar18 = uVar18 | uVar20 * 2;
  fVar25 = (float)func_0x0eee3ab0(fVar25 / fVar2);
  uVar20 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
  if (uVar20 < uVar18) {
    uVar20 = uVar18;
  }
  uVar14 = 2;
  if ((uVar20 == 1) || (uVar14 = uVar20, (uVar20 & uVar20 - 1) == 0)) {
    uVar12 = *(ulong *)(param_2 + 0x58);
    bVar24 = uVar14 < uVar12;
    uVar23 = uVar14;
    if (uVar14 <= uVar12) goto LAB_0a3aa861;
  }
  else {
    uVar14 = func_0x0412c3f0();
    uVar12 = *(ulong *)(param_2 + 0x58);
    bVar24 = uVar14 < uVar12;
    uVar23 = uVar14;
    if (uVar14 <= uVar12) {
LAB_0a3aa861:
      if (!bVar24) goto LAB_0a3aa9c0;
      fVar25 = (float)func_0x0eee3ab0((float)*(ulong *)(param_2 + 0x68) / *(float *)(param_2 + 0x70)
                                     );
      uVar23 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
      if ((uVar12 < 3) ||
         (uVar18 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
         1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar23 = func_0x0412c3f0(uVar23);
      }
      else if (1 < uVar23) {
        lVar9 = 0x3f;
        if (uVar23 - 1 != 0) {
          for (; uVar23 - 1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar23 = 1L << (-((byte)lVar9 ^ 0x3f) & 0x3f);
      }
      if (uVar23 < uVar14) {
        uVar23 = uVar14;
      }
      if (uVar12 <= uVar23) goto LAB_0a3aa9c0;
      if (uVar23 == 0) {
        lVar9 = *plVar15;
        *plVar15 = 0;
        if (lVar9 != 0) {
          func_0x0412a280(lVar9,*(long *)(param_2 + 0x58) << 3);
        }
        *(undefined8 *)(param_2 + 0x58) = 0;
        goto LAB_0a3aa9c0;
      }
    }
  }
  if (uVar23 >> 0x3d != 0) {
    plVar13 = (long *)func_0x04882eb0();
    uVar20 = uStack_120;
LAB_0a3aabd8:
    iVar16 = FUN_04108328(&DAT_0f65f940);
    uVar18 = uVar11;
    if (iVar16 != 0) {
      func_0x0a2bd2a0(0xf65f928);
      func_0x0410844d(&DAT_0f65f940);
    }
    goto LAB_0a3aa184;
  }
  lVar9 = uVar23 * 8;
  lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
  if (lVar17 == 0) {
    func_0x0eec74c0(lVar9,0);
  }
  lVar6 = *plVar15;
  *plVar15 = lVar17;
  if (lVar6 != 0) {
    func_0x0412a280(lVar6,*(long *)(param_2 + 0x58) << 3);
    lVar17 = *(long *)(param_2 + 0x50);
  }
  *(ulong *)(param_2 + 0x58) = uVar23;
  memset(lVar17,0,lVar9);
  plVar19 = *(long **)(param_2 + 0x60);
  if (plVar19 != (long *)0x0) {
    uVar20 = plVar19[1];
    uVar18 = uVar23 - 1;
    if ((uVar23 & uVar18) == 0) {
      *(long *)(lVar17 + (uVar20 & uVar18) * 8) = param_2 + 0x60;
      uVar20 = uVar20 & uVar18;
      while (plVar21 = plVar19, plVar19 = (long *)*plVar21, plVar19 != (long *)0x0) {
        uVar12 = plVar19[1] & uVar18;
        if (uVar12 != uVar20) {
          if (*(long *)(lVar17 + uVar12 * 8) == 0) {
            *(long **)(lVar17 + uVar12 * 8) = plVar21;
            uVar20 = uVar12;
          }
          else {
            *plVar21 = *plVar19;
            *plVar19 = **(undefined8 **)(lVar17 + uVar12 * 8);
            **(long **)(lVar17 + uVar12 * 8) = (long)plVar19;
            plVar19 = plVar21;
          }
        }
      }
    }
    else {
      if (uVar23 <= uVar20) {
        if ((uVar20 | uVar23) >> 0x20 == 0) {
          uVar20 = (uVar20 & 0xffffffff) % (uVar23 & 0xffffffff);
        }
        else {
          uVar20 = uVar20 % uVar23;
        }
      }
      *(long *)(lVar17 + uVar20 * 8) = param_2 + 0x60;
      plVar21 = (long *)*plVar19;
      while (plVar21 != (long *)0x0) {
        uVar18 = plVar21[1];
        if (uVar23 <= uVar18) {
          if ((uVar18 | uVar23) >> 0x20 == 0) {
            uVar18 = (uVar18 & 0xffffffff) % (uVar23 & 0xffffffff);
          }
          else {
            uVar18 = uVar18 % uVar23;
          }
        }
        if (uVar18 != uVar20) {
          if (*(long *)(lVar17 + uVar18 * 8) == 0) {
            *(long **)(lVar17 + uVar18 * 8) = plVar19;
            uVar20 = uVar18;
          }
          else {
            *plVar19 = *plVar21;
            *plVar21 = **(long **)(lVar17 + uVar18 * 8);
            **(undefined8 **)(lVar17 + uVar18 * 8) = plVar21;
            plVar21 = plVar19;
          }
        }
        plVar19 = plVar21;
        plVar21 = (long *)*plVar19;
      }
    }
  }
LAB_0a3aa9c0:
  uVar20 = *(ulong *)(param_2 + 0x58);
  if ((uVar20 & uVar20 - 1) == 0) {
    uStack_120 = uVar11 & uVar20 - 1;
  }
  else {
    uStack_120 = uVar11;
    if (uVar20 <= uVar11) {
      if ((uVar11 | uVar20) >> 0x20 == 0) {
        uStack_120 = (uVar11 & 0xffffffff) % (uVar20 & 0xffffffff);
      }
      else {
        uStack_120 = uVar11 % uVar20;
      }
    }
  }
LAB_0a3aaa10:
  lVar9 = *plVar15;
  plVar15 = *(long **)(lVar9 + uStack_120 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar13 = *(long *)(param_2 + 0x60);
    *(long **)(param_2 + 0x60) = plVar13;
    *(long *)(lVar9 + uStack_120 * 8) = param_2 + 0x60;
    if (*plVar13 != 0) {
      uVar18 = *(ulong *)(*plVar13 + 8);
      if ((uVar20 & uVar20 - 1) == 0) {
        *(long **)(lVar9 + (uVar18 & uVar20 - 1) * 8) = plVar13;
      }
      else {
        if (uVar20 <= uVar18) {
          if ((uVar18 | uVar20) >> 0x20 == 0) {
            *(long **)(lVar9 + ((uVar18 & 0xffffffff) % (uVar20 & 0xffffffff)) * 8) = plVar13;
            goto LAB_0a3aaa2f;
          }
          uVar18 = uVar18 % uVar20;
        }
        *(long **)(lVar9 + uVar18 * 8) = plVar13;
      }
    }
  }
  else {
    *plVar13 = *plVar15;
    *plVar15 = (long)plVar13;
  }
LAB_0a3aaa2f:
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
  iStack_134 = 0;
LAB_0a3aaa35:
  plVar15 = (long *)plVar13[5];
  *param_1 = (long)plVar15;
  lVar17 = plVar13[6];
  *(int *)(param_1 + 1) = (int)lVar17;
  uVar4 = *(undefined4 *)((long)plVar13 + 0x3c);
  lVar9 = plVar13[8];
  uVar7 = *(undefined4 *)((long)plVar13 + 0x44);
  *(int *)(param_1 + 2) = (int)plVar13[7];
  *(undefined4 *)((long)param_1 + 0x14) = uVar4;
  *(int *)(param_1 + 3) = (int)lVar9;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
  if ((plVar15 == (long *)0x0) || (lVar9 = *plVar15, lVar9 == 0 || (int)plVar15[1] != (int)lVar17))
  {
    if ((plStack_108 != (long *)0x0) && (*plStack_108 != 0 && (int)plStack_108[1] == iStack_134)) {
      func_0x0d8569b0(*plStack_108,uStack_f8,uStack_f0);
    }
    return;
  }
  uStack_f8 = param_1[2];
SUB_0d8568b0:
  plVar15 = (long *)(*(long *)(lVar9 + 0x70) +
                    (ulong)((int)((ulong)(*(long *)(lVar9 + 0x78) - *(long *)(lVar9 + 0x70)) >> 3) -
                            1U & 0x68e12cdc) * 8);
  do {
    if (*plVar15 == -1) {
      return;
    }
    lVar17 = *plVar15 * 0x20;
    plVar15 = (long *)(*(long *)(lVar9 + 0x88) + lVar17);
  } while (*(int *)(*(long *)(lVar9 + 0x88) + 8 + lVar17) != 0x68e12cdc);
  if ((plVar15 != *(long **)(lVar9 + 0x90)) && (lVar9 = plVar15[2], lVar9 != 0)) {
    uVar18 = uStack_f8 >> 0xc & 0xfffff;
    if ((uVar18 < (ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8) >> 3)) &&
       ((lVar17 = *(long *)(*(long *)(lVar9 + 8) + uVar18 * 8), lVar17 != 0 &&
        (uVar18 = *(ulong *)(lVar17 + (ulong)((uint)uStack_f8 & 0xfff) * 8),
        (uStack_f8 & 0xffffff00000000 ^ uVar18) < 0xffffffff)))) {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x50) + (uVar18 >> 7 & 0x1ffffff) * 8);
      if (lVar9 != 0) {
        lVar9 = lVar9 + (ulong)((uint)uVar18 & 0x7f) * 0x70;
        iVar16 = *(int *)(lVar9 + 0x5c) + 1;
        *(int *)(lVar9 + 0x5c) = iVar16;
        if ((iVar16 == 2) && (*(long **)(lVar9 + 0x60) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0d8569a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(lVar9 + 0x60) + 0x18))();
          return;
        }
      }
    }
  }
  return;
LAB_0a3aa581:
  goto LAB_0a3aaa35;
}


