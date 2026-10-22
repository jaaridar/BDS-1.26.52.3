/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeecbd00 (ELF vaddr 0xedcbd00)
 * Label: callee-of:0xc961580
 * Body:  [[0eeca3c0, 0eeca74e] [0eeca750, 0eeca784] [0eeca790, 0eeca7f6] [0eeca800, 0eeca818] [0eeca820, 0eecab2b] [0eecab30, 0eecb05a] [0eecb060, 0eecb094] [0eecb0a0, 0eecb10b] [0eecb110, 0eecb128] [0eecb130, 0eecb391] [0eecb3a0, 0eecb48a] [0eecb490, 0eecb6b8] [0eecb6c0, 0eecb740] [0eecb750, 0eecb85c] [0eecb861, 0eecb86f] [0eecb8a2, 0eecb8ad] [0eecb8e1, 0eecb8fb] [0eecbd00, 0eecbd74]]
 * Ghidra: FUN_0eecbd00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0eecbd00(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 uStack_b1;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined4 uStack_58;
  ulong uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar11 = (long *)(param_3 & 0xffffffff);
  if ((DAT_0f7b9fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b9fb8), iVar8 != 0)) {
    func_0x0eecb9c0(&DAT_0f7b9fb0);
    func_0x0eee2f40(&UNK_0eecbab0,&DAT_0f7b9fb0,0xf53dab8);
    FUN_0410844d(&DAT_0f7b9fb8);
  }
  plVar19 = _DAT_0f7b9fb0;
  plVar10 = _DAT_0f7b9fb0 + 0x12;
  func_0x0412d450(plVar10);
  plStack_90 = param_1;
  plStack_78 = param_1;
  plStack_70 = param_2;
  plVar9 = (long *)func_0x0eecc7e0(plVar19,&plStack_78);
  if (plVar9 != (long *)0x0) goto LAB_0eecb4cb;
  plStack_48 = (long *)&UNK_01287b93;
  plStack_40 = (long *)0xe;
  plStack_80 = plVar10;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar10 == (long *)0x0) goto LAB_0eecb7ce;
  while (*plVar10 = (long)&plStack_48, param_2 < (long *)0xfffffffffffffff8) {
    plStack_b0 = plVar19;
    if (param_2 < (long *)0x17) {
      *(char *)(plVar10 + 1) = (char)param_2 * '\x02';
      lVar20 = (long)plVar10 + 9;
      if (param_2 != (long *)0x0) goto LAB_0eeca4d0;
    }
    else {
      uVar13 = 0x1a;
      if (((ulong)param_2 | 7) != 0x17) {
        uVar13 = ((ulong)param_2 | 7) + 1;
      }
      lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (lVar20 == 0) {
        func_0x0eec74c0(uVar13,0);
      }
      plVar10[3] = lVar20;
      plVar10[1] = uVar13 | 1;
      plVar10[2] = (long)param_2;
LAB_0eeca4d0:
      func_0x0eee2f00(lVar20,plStack_90,param_2);
    }
    *(undefined1 *)(lVar20 + (long)param_2) = 0;
    *(int *)(plVar10 + 4) = (int)plVar11;
    *(undefined1 *)((long)plVar10 + 0x24) = 0;
    plStack_88 = plVar10;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plStack_70 = plStack_b0;
    puStack_68 = (undefined8 *)0x0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plStack_78 = plVar11;
    if (param_2 < (long *)0x17) {
      *(char *)(plVar11 + 2) = (char)param_2 * '\x02';
      plVar10 = (long *)((long)plVar11 + 0x11);
      plVar19 = plStack_b0;
      if (param_2 != (long *)0x0) goto LAB_0eeca59d;
    }
    else {
      uVar13 = 0x1a;
      if (((ulong)param_2 | 7) != 0x17) {
        uVar13 = ((ulong)param_2 | 7) + 1;
      }
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(uVar13,0);
      }
      plVar11[4] = (long)plVar10;
      plVar11[2] = uVar13 | 1;
      plVar11[3] = (long)param_2;
LAB_0eeca59d:
      plVar19 = plStack_b0;
      func_0x0eee2ee0(plVar10,plStack_90,param_2);
    }
    plVar9 = plStack_88;
    *(undefined1 *)((long)plVar10 + (long)param_2) = 0;
    plStack_88 = (long *)0x0;
    plVar11[5] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,1);
      bVar22 = (*(byte *)(plVar11 + 2) & 1) != 0;
      lVar20 = (long)plVar11 + 0x11;
      if (bVar22) {
        lVar20 = plVar11[4];
      }
      uVar13 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
      if (bVar22) {
        uVar13 = plVar11[3];
      }
      lVar20 = func_0x04883620(&uStack_b1,lVar20,uVar13);
      plStack_98 = plStack_78;
      plVar11[1] = lVar20;
      plStack_a8 = (long *)((long)plStack_78 + 0x11);
      bVar22 = (*(byte *)(plStack_78 + 2) & 1) == 0;
      plVar11 = (long *)plStack_78[4];
      if (bVar22) {
        plVar11 = plStack_a8;
      }
      uVar13 = (ulong)(*(byte *)(plStack_78 + 2) >> 1);
      if (!bVar22) {
        uVar13 = plStack_78[3];
      }
      plStack_a0 = param_2;
      uVar12 = func_0x04883620(&uStack_b1,plVar11,uVar13);
      plStack_98[1] = uVar12;
      uVar13 = plVar19[1];
      if (uVar13 == 0) goto LAB_0eeca8e1;
      uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
      uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar18 >> 0x38 < 2) {
        uVar17 = uVar13 - 1 & uVar12;
LAB_0eeca6bd:
        puVar1 = *(undefined8 **)(*plStack_b0 + uVar17 * 8);
      }
      else {
        uVar17 = uVar12;
        if (uVar12 < uVar13) goto LAB_0eeca6bd;
        if ((uVar12 | uVar13) >> 0x20 == 0) {
          uVar17 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
          puVar1 = *(undefined8 **)(*plStack_b0 + uVar17 * 8);
        }
        else {
          uVar17 = uVar12 % uVar13;
          puVar1 = *(undefined8 **)(*plStack_b0 + uVar17 * 8);
        }
      }
      if ((puVar1 == (undefined8 *)0x0) || (plVar11 = (long *)*puVar1, plVar11 == (long *)0x0))
      goto LAB_0eeca8e1;
      bVar7 = *(byte *)(plStack_98 + 2);
      uStack_50 = CONCAT71(uStack_50._1_7_,bVar7) & 0xffffffffffffff01;
      if ((bVar7 & 1) == 0) {
        uVar21 = (ulong)(bVar7 >> 1);
      }
      else {
        uVar21 = plStack_98[3];
        plStack_a8 = (long *)plStack_98[4];
      }
      if (1 < (byte)(uVar18 >> 0x38)) goto LAB_0eeca7da;
      goto LAB_0eeca768;
    }
    func_0x04890760();
LAB_0eecb7ce:
    func_0x0eec74c0(0x28,0);
  }
  func_0x04882e30();
  goto LAB_0eecb851;
LAB_0eeca7da:
  do {
    uVar18 = plVar11[1];
    if (uVar18 == uVar12) {
      bVar7 = *(byte *)(plVar11 + 2);
      if ((bVar7 & 1) == 0) {
        uVar18 = (ulong)(bVar7 >> 1);
      }
      else {
        uVar18 = plVar11[3];
      }
      if (uVar18 == uVar21) {
        if ((bVar7 & 1) == 0) {
          lVar20 = (long)plVar11 + 0x11;
        }
        else {
          lVar20 = plVar11[4];
        }
        iVar8 = func_0x0eee3000(lVar20,plStack_a8,uVar21);
        if (iVar8 == 0) goto LAB_0eeca848;
      }
    }
    else {
      if (uVar13 <= uVar18) {
        if ((uVar18 | uVar13) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uVar13;
        }
      }
      if (uVar18 != uVar17) break;
    }
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
  goto LAB_0eeca8e1;
LAB_0eeca848:
  plVar9 = plStack_98;
  plVar19 = plStack_a0;
  plVar10 = plStack_b0;
  if (plStack_98 != (long *)0x0) {
    lVar20 = plStack_98[5];
    plStack_98[5] = 0;
    bVar7 = (byte)uStack_50;
    if (lVar20 != 0) {
      if ((*(byte *)(lVar20 + 8) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + 0x18),*(ulong *)(lVar20 + 8) & 0xfffffffffffffffe);
      }
      func_0x0412a280(lVar20,0x28);
      bVar7 = *(byte *)(plVar9 + 2) & 1;
    }
    if (bVar7 != 0) {
      func_0x0412a280(plVar9[4],plVar9[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar9,0x30);
  }
  goto LAB_0eecabbb;
LAB_0eecb158:
  plVar9 = plStack_98;
  plVar19 = plStack_a0;
  plVar11 = plStack_b0;
  plVar10 = plStack_80;
  if (plStack_a0 != (long *)0x0) {
    func_0x0eeccae0(plStack_a0 + 2);
    func_0x0412a280(plVar19,0x50);
    plVar10 = plStack_80;
  }
  goto joined_r0x0eecb46b;
LAB_0eeca768:
  do {
    if (plVar11[1] == uVar12) {
      bVar7 = *(byte *)(plVar11 + 2);
      if ((bVar7 & 1) == 0) {
        uVar18 = (ulong)(bVar7 >> 1);
      }
      else {
        uVar18 = plVar11[3];
      }
      if (uVar18 == uVar21) {
        if ((bVar7 & 1) == 0) {
          lVar20 = (long)plVar11 + 0x11;
        }
        else {
          lVar20 = plVar11[4];
        }
        iVar8 = func_0x0eee3000(lVar20,plStack_a8,uVar21);
        if (iVar8 == 0) goto LAB_0eeca848;
      }
    }
    else if ((plVar11[1] & uVar13 - 1) != uVar17) break;
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
LAB_0eeca8e1:
  plVar10 = plStack_b0;
  if ((long)uVar13 < 0) {
    fVar24 = (float)uVar13;
    fVar23 = *(float *)(plStack_b0 + 4);
    if (uVar13 != 0) goto LAB_0eeca94b;
LAB_0eecaa23:
    uVar12 = 1;
    if (2 < uVar13) {
      uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar12 = uVar12 | uVar13 * 2;
    fVar23 = (float)func_0x0eee3ab0((float)(plStack_b0[3] + 1) / fVar23);
    uVar18 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
    if (uVar18 < uVar12) {
      uVar18 = uVar12;
    }
    uVar12 = 2;
    if ((uVar18 == 1) || (uVar12 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
      bVar22 = uVar12 < uVar13;
      uVar18 = uVar12;
      if (uVar12 <= uVar13) goto LAB_0eecad36;
    }
    else {
      uVar12 = func_0x0412c3f0();
      uVar13 = plVar10[1];
      bVar22 = uVar12 < uVar13;
      uVar18 = uVar12;
      if (uVar12 <= uVar13) {
LAB_0eecad36:
        if (bVar22) {
          fVar23 = (float)func_0x0eee3ab0((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
          uVar12 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
          if ((uVar13 < 3) ||
             (uVar17 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
             1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar12 = func_0x0412c3f0(uVar12);
          }
          else if (1 < uVar12) {
            lVar20 = 0x3f;
            if (uVar12 - 1 != 0) {
              for (; uVar12 - 1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar12 = 1L << (-((byte)lVar20 ^ 0x3f) & 0x3f);
          }
          if (uVar12 < uVar18) {
            uVar12 = uVar18;
          }
          if (uVar12 < uVar13) {
            if (uVar12 != 0) goto LAB_0eecaa9c;
            lVar20 = *plVar10;
            *plVar10 = 0;
            if (lVar20 != 0) {
              func_0x0412a280(lVar20,plVar10[1] << 3);
            }
            plVar10[1] = 0;
          }
        }
        goto LAB_0eeca958;
      }
    }
LAB_0eecaa9c:
    if (uVar12 >> 0x3d != 0) {
LAB_0eecb851:
      FUN_04882eb0();
      goto LAB_0eecb856;
    }
    lVar20 = uVar12 * 8;
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
    if (lVar14 == 0) {
      func_0x0eec74c0(lVar20,0);
    }
    lVar2 = *plVar10;
    *plVar10 = lVar14;
    if (lVar2 != 0) {
      func_0x0412a280(lVar2,plVar10[1] << 3);
      lVar14 = *plVar10;
    }
    plVar10[1] = uVar12;
    func_0x0eee2dd0(lVar14,0,lVar20);
    plVar11 = (long *)plVar10[2];
    if (plVar11 != (long *)0x0) {
      uVar18 = plVar11[1];
      uVar13 = uVar12 - 1;
      if ((uVar12 & uVar13) == 0) {
        *(long **)(lVar14 + (uVar18 & uVar13) * 8) = plVar10 + 2;
        uVar12 = uVar18 & uVar13;
        while (plVar19 = plVar11, plVar11 = (long *)*plVar19, plVar11 != (long *)0x0) {
          uVar18 = plVar11[1] & uVar13;
          if (uVar18 != uVar12) {
            if (*(long *)(lVar14 + uVar18 * 8) == 0) {
              *(long **)(lVar14 + uVar18 * 8) = plVar19;
              uVar12 = uVar18;
            }
            else {
              *plVar19 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar14 + uVar18 * 8);
              **(long **)(lVar14 + uVar18 * 8) = (long)plVar11;
              plVar11 = plVar19;
            }
          }
        }
      }
      else {
        if (uVar12 <= uVar18) {
          if ((uVar18 | uVar12) >> 0x20 == 0) {
            uVar18 = (uVar18 & 0xffffffff) % (uVar12 & 0xffffffff);
          }
          else {
            uVar18 = uVar18 % uVar12;
          }
        }
        *(long **)(lVar14 + uVar18 * 8) = plVar10 + 2;
        plVar19 = (long *)*plVar11;
        while (plVar19 != (long *)0x0) {
          uVar13 = plVar19[1];
          if (uVar12 <= uVar13) {
            if ((uVar13 | uVar12) >> 0x20 == 0) {
              uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar13 = uVar13 % uVar12;
            }
          }
          if (uVar13 != uVar18) {
            if (*(long *)(lVar14 + uVar13 * 8) == 0) {
              *(long **)(lVar14 + uVar13 * 8) = plVar11;
              uVar18 = uVar13;
            }
            else {
              *plVar11 = *plVar19;
              *plVar19 = **(long **)(lVar14 + uVar13 * 8);
              **(undefined8 **)(lVar14 + uVar13 * 8) = plVar19;
              plVar19 = plVar11;
            }
          }
          plVar11 = plVar19;
          plVar19 = (long *)*plVar11;
        }
      }
    }
  }
  else {
    fVar24 = (float)(long)uVar13;
    fVar23 = *(float *)(plStack_b0 + 4);
    if (uVar13 == 0) goto LAB_0eecaa23;
LAB_0eeca94b:
    if (fVar24 * fVar23 < (float)(plStack_b0[3] + 1)) goto LAB_0eecaa23;
  }
LAB_0eeca958:
  uVar13 = plVar10[1];
  uVar12 = plStack_98[1];
  uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar18 >> 0x38 < 2) {
    uVar12 = uVar12 & uVar13 - 1;
    lVar20 = *plVar10;
    plVar11 = *(long **)(lVar20 + uVar12 * 8);
    if (plVar11 == (long *)0x0) goto LAB_0eeca9e8;
LAB_0eecabae:
    *plStack_98 = *plVar11;
    *plVar11 = (long)plStack_98;
  }
  else {
    if (uVar12 < uVar13) {
LAB_0eecab9d:
      lVar20 = *plVar10;
      plVar11 = *(long **)(lVar20 + uVar12 * 8);
    }
    else {
      if ((uVar12 | uVar13) >> 0x20 != 0) {
        uVar12 = uVar12 % uVar13;
        goto LAB_0eecab9d;
      }
      uVar12 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
      lVar20 = *plVar10;
      plVar11 = *(long **)(lVar20 + uVar12 * 8);
    }
    if (plVar11 != (long *)0x0) goto LAB_0eecabae;
LAB_0eeca9e8:
    *plStack_98 = plVar10[2];
    plVar10[2] = (long)plStack_98;
    *(long **)(lVar20 + uVar12 * 8) = plVar10 + 2;
    if (*plStack_98 != 0) {
      uVar12 = *(ulong *)(*plStack_98 + 8);
      if ((byte)(uVar18 >> 0x38) < 2) {
        *(long **)(lVar20 + (uVar12 & uVar13 - 1) * 8) = plStack_98;
      }
      else {
        if (uVar13 <= uVar12) {
          if ((uVar12 | uVar13) >> 0x20 == 0) {
            *(long **)(lVar20 + ((uVar12 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) = plStack_98;
            goto LAB_0eecabb7;
          }
          uVar12 = uVar12 % uVar13;
        }
        *(long **)(lVar20 + uVar12 * 8) = plStack_98;
      }
    }
  }
LAB_0eecabb7:
  plVar10[3] = plVar10[3] + 1;
  plVar19 = plStack_a0;
  plVar11 = plStack_98;
LAB_0eecabbb:
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0x3f800000;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  plStack_a8 = plVar10 + 5;
  uStack_38 = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plStack_48 = plVar9;
  plStack_40 = plStack_a8;
  if (plVar19 < (long *)0x17) {
    *(char *)(plVar9 + 2) = (char)plVar19 * '\x02';
    lVar20 = (long)plVar9 + 0x11;
    if (plVar19 != (long *)0x0) goto LAB_0eecac7d;
  }
  else {
    uVar13 = 0x1a;
    if (((ulong)plVar19 | 7) != 0x17) {
      uVar13 = ((ulong)plVar19 | 7) + 1;
    }
    lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
    if (lVar20 == 0) {
      func_0x0eec74c0(uVar13,0);
    }
    plVar9[4] = lVar20;
    plVar9[2] = uVar13 | 1;
    plVar9[3] = (long)plVar19;
    plVar10 = plStack_b0;
LAB_0eecac7d:
    func_0x0eee2ee0(lVar20,plStack_90,plVar19);
  }
  plVar6 = plStack_70;
  plVar5 = plStack_78;
  *(undefined1 *)(lVar20 + (long)plVar19) = 0;
  plStack_78 = (long *)0x0;
  plVar9[5] = (long)plVar5;
  plVar9[6] = (long)plStack_70;
  plStack_70 = (long *)0x0;
  plVar9[7] = (long)puStack_68;
  plVar9[8] = lStack_60;
  *(undefined4 *)(plVar9 + 9) = uStack_58;
  if (lStack_60 != 0) {
    uVar13 = puStack_68[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      uVar13 = uVar13 & (long)plVar6 - 1U;
    }
    else if (plVar6 <= uVar13) {
      if ((uVar13 | (ulong)plVar6) >> 0x20 == 0) {
        uVar13 = (uVar13 & 0xffffffff) % ((ulong)plVar6 & 0xffffffff);
      }
      else {
        uVar13 = uVar13 % (ulong)plVar6;
      }
    }
    plVar5[uVar13] = (long)(plVar9 + 7);
    puStack_68 = (undefined8 *)0x0;
    lStack_60 = 0;
  }
  puVar1 = puStack_68;
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  bVar22 = (*(byte *)(plVar9 + 2) & 1) != 0;
  lVar20 = (long)plVar9 + 0x11;
  if (bVar22) {
    lVar20 = plVar9[4];
  }
  uVar13 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
  if (bVar22) {
    uVar13 = plVar9[3];
  }
  lVar20 = func_0x04883620(&plStack_88,lVar20,uVar13);
  plVar19 = plStack_48;
  plVar9[1] = lVar20;
  plStack_90 = (long *)((long)plStack_48 + 0x11);
  bVar22 = (*(byte *)(plStack_48 + 2) & 1) == 0;
  plVar9 = (long *)plStack_48[4];
  if (bVar22) {
    plVar9 = plStack_90;
  }
  uVar13 = (ulong)(*(byte *)(plStack_48 + 2) >> 1);
  if (!bVar22) {
    uVar13 = plStack_48[3];
  }
  plStack_98 = plVar11;
  uVar12 = func_0x04883620(&plStack_88,plVar9,uVar13);
  plStack_a0 = plVar19;
  plVar19[1] = uVar12;
  uVar13 = plVar10[6];
  if (uVar13 != 0) {
    uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
    uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar18 >> 0x38 < 2) {
      uVar17 = uVar13 - 1 & uVar12;
    }
    else {
      uVar17 = uVar12;
      if (uVar13 <= uVar12) {
        if ((uVar12 | uVar13) >> 0x20 == 0) {
          uVar17 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar17 = uVar12 % uVar13;
        }
      }
    }
    plVar11 = *(long **)(*plStack_a8 + uVar17 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((*(byte *)(plVar19 + 2) & 1) == 0) {
        uVar21 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
      }
      else {
        uVar21 = plVar19[3];
        plStack_90 = (long *)plVar19[4];
      }
      if ((byte)(uVar18 >> 0x38) < 2) {
        uVar18 = uVar13 - 1;
        uStack_50 = uVar18;
        do {
          if (plVar11[1] == uVar12) {
            bVar7 = *(byte *)(plVar11 + 2);
            if ((bVar7 & 1) == 0) {
              uVar16 = (ulong)(bVar7 >> 1);
            }
            else {
              uVar16 = plVar11[3];
            }
            if (uVar16 == uVar21) {
              if ((bVar7 & 1) == 0) {
                lVar20 = (long)plVar11 + 0x11;
              }
              else {
                lVar20 = plVar11[4];
              }
              iVar8 = func_0x0eee3000(lVar20,plStack_90,uVar21);
              uVar18 = uStack_50;
              if (iVar8 == 0) goto LAB_0eecb158;
            }
          }
          else if ((plVar11[1] & uVar18) != uVar17) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar11[1];
          if (uVar18 == uVar12) {
            bVar7 = *(byte *)(plVar11 + 2);
            if ((bVar7 & 1) == 0) {
              uVar18 = (ulong)(bVar7 >> 1);
            }
            else {
              uVar18 = plVar11[3];
            }
            if (uVar18 == uVar21) {
              if ((bVar7 & 1) == 0) {
                lVar20 = (long)plVar11 + 0x11;
              }
              else {
                lVar20 = plVar11[4];
              }
              iVar8 = func_0x0eee3000(lVar20,plStack_90,uVar21);
              if (iVar8 == 0) goto LAB_0eecb158;
            }
          }
          else {
            if (uVar13 <= uVar18) {
              if ((uVar18 | uVar13) >> 0x20 == 0) {
                uVar18 = (uVar18 & 0xffffffff) % (uVar13 & 0xffffffff);
              }
              else {
                uVar18 = uVar18 % uVar13;
              }
            }
            if (uVar18 != uVar17) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = plStack_b0;
  if ((long)uVar13 < 0) {
    fVar24 = (float)uVar13;
    fVar23 = *(float *)(plStack_b0 + 9);
    if (uVar13 != 0) goto LAB_0eecb1f5;
LAB_0eecb286:
    uVar12 = 1;
    if (2 < uVar13) {
      uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar12 = uVar12 | uVar13 * 2;
    fVar23 = (float)func_0x0eee3ab0((float)(plStack_b0[8] + 1) / fVar23);
    uVar18 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
    if (uVar18 < uVar12) {
      uVar18 = uVar12;
    }
    uVar12 = 2;
    if ((uVar18 == 1) || (uVar12 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
      bVar22 = uVar12 < uVar13;
      uVar18 = uVar12;
      if (uVar12 <= uVar13) goto LAB_0eecb420;
    }
    else {
      uVar12 = func_0x0412c3f0();
      uVar13 = plVar11[6];
      bVar22 = uVar12 < uVar13;
      uVar18 = uVar12;
      if (uVar12 <= uVar13) {
LAB_0eecb420:
        if (bVar22) {
          fVar23 = (float)func_0x0eee3ab0((float)(ulong)plVar11[8] / *(float *)(plVar11 + 9));
          uVar12 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
          if ((uVar13 < 3) ||
             (uVar17 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
             1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar12 = func_0x0412c3f0(uVar12);
          }
          else if (1 < uVar12) {
            lVar20 = 0x3f;
            if (uVar12 - 1 != 0) {
              for (; uVar12 - 1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar12 = 1L << (-((byte)lVar20 ^ 0x3f) & 0x3f);
          }
          if (uVar12 < uVar18) {
            uVar12 = uVar18;
          }
          if (uVar12 < uVar13) {
            if (uVar12 != 0) goto LAB_0eecb2ff;
            lVar20 = *plStack_a8;
            *plStack_a8 = 0;
            if (lVar20 != 0) {
              func_0x0412a280(lVar20,plVar11[6] << 3);
            }
            plVar11[6] = 0;
          }
        }
        goto LAB_0eecb202;
      }
    }
LAB_0eecb2ff:
    if (uVar12 >> 0x3d != 0) {
LAB_0eecb856:
      uVar15 = FUN_04882eb0();
      func_0x0eeccab0(&plStack_48);
      func_0x0eecb940(&plStack_78);
      func_0x0412d520(plStack_80);
      uVar15 = func_0x0eee2d70(uVar15);
      FUN_04882e20(uVar15);
      pcVar4 = (code *)swi(3);
      lVar20 = (*pcVar4)();
      return lVar20;
    }
    lVar20 = uVar12 * 8;
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
    if (lVar14 == 0) {
      func_0x0eec74c0(lVar20,0);
    }
    lVar2 = *plStack_a8;
    *plStack_a8 = lVar14;
    if (lVar2 != 0) {
      func_0x0412a280(lVar2,plVar11[6] << 3);
      lVar14 = plVar11[5];
    }
    plVar11[6] = uVar12;
    func_0x0eee2dd0(lVar14,0,lVar20);
    plVar10 = (long *)plVar11[7];
    if (plVar10 != (long *)0x0) {
      uVar18 = plVar10[1];
      uVar13 = uVar12 - 1;
      if ((uVar12 & uVar13) == 0) {
        *(long **)(lVar14 + (uVar18 & uVar13) * 8) = plVar11 + 7;
        uVar12 = uVar18 & uVar13;
        while (plVar19 = plVar10, plVar10 = (long *)*plVar19, plVar10 != (long *)0x0) {
          uVar18 = plVar10[1] & uVar13;
          if (uVar18 != uVar12) {
            if (*(long *)(lVar14 + uVar18 * 8) == 0) {
              *(long **)(lVar14 + uVar18 * 8) = plVar19;
              uVar12 = uVar18;
            }
            else {
              *plVar19 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar14 + uVar18 * 8);
              **(long **)(lVar14 + uVar18 * 8) = (long)plVar10;
              plVar10 = plVar19;
            }
          }
        }
      }
      else {
        if (uVar12 <= uVar18) {
          if ((uVar18 | uVar12) >> 0x20 == 0) {
            uVar18 = (uVar18 & 0xffffffff) % (uVar12 & 0xffffffff);
          }
          else {
            uVar18 = uVar18 % uVar12;
          }
        }
        *(long **)(lVar14 + uVar18 * 8) = plVar11 + 7;
        plVar19 = (long *)*plVar10;
        while (plVar19 != (long *)0x0) {
          uVar13 = plVar19[1];
          if (uVar12 <= uVar13) {
            if ((uVar13 | uVar12) >> 0x20 == 0) {
              uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar13 = uVar13 % uVar12;
            }
          }
          if (uVar13 != uVar18) {
            if (*(long *)(lVar14 + uVar13 * 8) == 0) {
              *(long **)(lVar14 + uVar13 * 8) = plVar10;
              uVar18 = uVar13;
            }
            else {
              *plVar10 = *plVar19;
              *plVar19 = **(long **)(lVar14 + uVar13 * 8);
              **(undefined8 **)(lVar14 + uVar13 * 8) = plVar19;
              plVar19 = plVar10;
            }
          }
          plVar10 = plVar19;
          plVar19 = (long *)*plVar10;
        }
      }
    }
  }
  else {
    fVar24 = (float)(long)uVar13;
    fVar23 = *(float *)(plStack_b0 + 9);
    if (uVar13 == 0) goto LAB_0eecb286;
LAB_0eecb1f5:
    if (fVar24 * fVar23 < (float)(plStack_b0[8] + 1)) goto LAB_0eecb286;
  }
LAB_0eecb202:
  uVar13 = plVar11[6];
  uVar12 = plStack_a0[1];
  uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar18 >> 0x38 < 2) {
    uVar12 = uVar12 & uVar13 - 1;
  }
  else if (uVar13 <= uVar12) {
    if ((uVar12 | uVar13) >> 0x20 == 0) {
      uVar12 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
    }
    else {
      uVar12 = uVar12 % uVar13;
    }
  }
  lVar20 = *plStack_a8;
  plVar10 = *(long **)(lVar20 + uVar12 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_a0 = plVar11[7];
    plVar11[7] = (long)plStack_a0;
    *(long **)(lVar20 + uVar12 * 8) = plVar11 + 7;
    if (*plStack_a0 != 0) {
      uVar12 = *(ulong *)(*plStack_a0 + 8);
      if ((byte)(uVar18 >> 0x38) < 2) {
        *(long **)(lVar20 + (uVar12 & uVar13 - 1) * 8) = plStack_a0;
      }
      else {
        if (uVar13 <= uVar12) {
          if ((uVar12 | uVar13) >> 0x20 == 0) {
            *(long **)(lVar20 + ((uVar12 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) = plStack_a0;
            goto LAB_0eecb464;
          }
          uVar12 = uVar12 % uVar13;
        }
        *(long **)(lVar20 + uVar12 * 8) = plStack_a0;
      }
    }
  }
  else {
    *plStack_a0 = *plVar10;
    *plVar10 = (long)plStack_a0;
  }
LAB_0eecb464:
  plVar11[8] = plVar11[8] + 1;
  plVar10 = plStack_80;
  plVar9 = plStack_98;
joined_r0x0eecb46b:
  while (plStack_80 = plVar10, puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      func_0x0412a280(puVar1[4],puVar1[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar1,0x28);
    plVar10 = plStack_80;
    puVar1 = puVar3;
  }
  if (plVar11[10] != 0) {
    (**(code **)(plVar11[10] + 0x10))(plVar11 + 10,plVar9[5]);
  }
LAB_0eecb4cb:
  lVar20 = plVar9[5];
  func_0x0412d520(plVar10);
  return lVar20;
}


