/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa61a0f0 (ELF vaddr 0xa51a0f0)
 * Label: caller-of-callee
 * Body:  [[0a61a0f0, 0a61a30b] [0a61a310, 0a61a345] [0a61a350, 0a61a3ba] [0a61a3c0, 0a61a3da] [0a61a3e0, 0a61aac7] [0a61aad0, 0a61ab05] [0a61ab10, 0a61ab89] [0a61ab90, 0a61b10b]]
 * Ghidra: FUN_0a61a0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a61a0f0(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 extraout_DL;
  long *extraout_RDX;
  ulong uVar17;
  long *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  long *plStack_140;
  int iStack_138;
  long lStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  long *plStack_118;
  uint uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  long *plStack_f8;
  int iStack_f0;
  long *plStack_e8;
  uint uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
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
  long *plStack_38;
  
  plStack_160 = param_1;
  func_0x0a622c00(&plStack_f8,param_3);
  lVar10 = *param_2;
  if ((*(byte *)(lVar10 + 8) & 1) == 0) {
    lStack_178 = *(long *)(lVar10 + 0x18);
    uStack_188 = *(uint *)(lVar10 + 8);
    uStack_184 = *(undefined4 *)(lVar10 + 0xc);
    uStack_180 = *(undefined4 *)(lVar10 + 0x10);
    uStack_17c = *(undefined4 *)(lVar10 + 0x14);
  }
  else {
    func_0x0412e5e0(&uStack_188,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x10));
  }
  uVar5 = uStack_e0;
  plVar15 = plStack_e8;
  iVar6 = iStack_f0;
  plVar13 = plStack_f8;
  if ((int)plStack_f8[1] == iStack_f0) {
    lVar10 = *plStack_f8;
  }
  else {
    lVar10 = 0;
  }
  lVar7 = func_0x0a6cc720(lVar10,plStack_e8);
  iStack_120 = iVar6;
  plStack_168 = plVar15;
  bVar19 = (uStack_188 & 1) == 0;
  lVar10 = lStack_178;
  if (bVar19) {
    lVar10 = (long)&uStack_188 + 1;
  }
  uVar14 = (ulong)((byte)uStack_188 >> 1);
  if (!bVar19) {
    uVar14 = CONCAT44(uStack_17c,uStack_180);
  }
  uVar8 = FUN_04883620(&plStack_d8,lVar10,uVar14);
  uVar14 = *(ulong *)(lVar7 + 0x30);
  plStack_38 = param_2;
  if (uVar14 == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    uVar9 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
    uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar9 >> 0x38 < 2) {
      uVar17 = uVar14 - 1 & uVar8;
      plVar15 = *(long **)(*(long *)(lVar7 + 0x28) + uVar17 * 8);
    }
    else if (uVar8 < uVar14) {
      plVar15 = *(long **)(*(long *)(lVar7 + 0x28) + uVar8 * 8);
      uVar17 = uVar8;
    }
    else if ((uVar8 | uVar14) >> 0x20 == 0) {
      uVar17 = (uVar8 & 0xffffffff) % (uVar14 & 0xffffffff);
      plVar15 = *(long **)(*(long *)(lVar7 + 0x28) + uVar17 * 8);
    }
    else {
      plVar15 = *(long **)(*(long *)(lVar7 + 0x28) + (uVar8 % uVar14) * 8);
      uVar17 = uVar8 % uVar14;
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if ((uStack_188 & 1) == 0) {
        uVar16 = (ulong)((byte)uStack_188 >> 1);
        lVar10 = (long)&uStack_188 + 1;
      }
      else {
        uVar16 = CONCAT44(uStack_17c,uStack_180);
        lVar10 = lStack_178;
      }
      if ((byte)(uVar9 >> 0x38) < 2) {
        do {
          if (plVar15[1] == uVar8) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar9 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar9 = plVar15[3];
            }
            if (uVar9 == uVar16) {
              if ((bVar1 & 1) == 0) {
                lVar7 = (long)plVar15 + 0x11;
              }
              else {
                lVar7 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar7,lVar10,uVar16);
              if (iVar6 == 0) goto LAB_0a61a412;
            }
          }
          else if ((plVar15[1] & uVar14 - 1) != uVar17) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar15[1];
          if (uVar9 == uVar8) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar9 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar9 = plVar15[3];
            }
            if (uVar9 == uVar16) {
              if ((bVar1 & 1) == 0) {
                lVar7 = (long)plVar15 + 0x11;
              }
              else {
                lVar7 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar7,lVar10,uVar16);
              if (iVar6 == 0) goto LAB_0a61a412;
            }
          }
          else {
            if (uVar14 <= uVar9) {
              if ((uVar9 | uVar14) >> 0x20 == 0) {
                uVar9 = (uVar9 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar9 = uVar9 % uVar14;
              }
            }
            if (uVar9 != uVar17) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    plVar15 = (long *)0x0;
  }
LAB_0a61a412:
  iVar6 = iStack_120;
  plVar18 = plStack_168;
  if ((int)plVar13[1] == iStack_120) {
    lVar10 = *plVar13;
  }
  else {
    lVar10 = 0;
  }
  func_0x0a6cc720(lVar10,plStack_168,uVar5 & 0xff);
  if (plVar15 != (long *)0x0) {
    plVar13 = (long *)plVar15[5];
    *plStack_160 = (long)plVar13;
    lVar10 = plVar15[6];
    *(int *)(plStack_160 + 1) = (int)lVar10;
    uVar3 = *(undefined4 *)((long)plVar15 + 0x3c);
    lVar7 = plVar15[8];
    uVar4 = *(undefined4 *)((long)plVar15 + 0x44);
    *(int *)(plStack_160 + 2) = (int)plVar15[7];
    *(undefined4 *)((long)plStack_160 + 0x14) = uVar3;
    *(int *)(plStack_160 + 3) = (int)lVar7;
    *(undefined4 *)((long)plStack_160 + 0x1c) = uVar4;
    if ((plVar13 != (long *)0x0) && (*plVar13 != 0 && (int)plVar13[1] == (int)lVar10)) {
      func_0x0d8568b0(*plVar13,plStack_160[2]);
    }
    goto LAB_0a61afa3;
  }
  if ((int)plVar13[1] == iVar6) {
    lVar10 = *plVar13;
  }
  else {
    lVar10 = 0;
  }
  lVar10 = func_0x0a6cc720(lVar10,plVar18,uVar5 & 0xff);
  plVar15 = _DAT_0f6711f8;
  plVar13 = (long *)*param_3;
  if ((plVar13 != (long *)0x0) &&
     (lVar7 = *plVar13, lVar7 != 0 && (int)plVar13[1] == (int)param_3[1])) {
    plStack_60 = (long *)(lVar7 + 0x10);
    plStack_d8 = (long *)((ulong)plStack_d8 & 0xffffffffffff0000);
    plStack_d0 = (long *)&UNK_0a6cc800;
    puStack_c8 = &UNK_0a6cc9e0;
    plStack_98 = (long *)0x0;
    uStack_88 = 0;
    uStack_80 = 0x100000010;
    plStack_78 = (long *)0x0;
    plStack_68 = (long *)&UNK_0f236758;
    pplStack_48 = &plStack_68;
    func_0x065bdd40(&plStack_68,&uStack_b8);
    if (pplStack_48 == &plStack_68) {
      lVar11 = 0x20;
LAB_0a61a60b:
      (**(code **)((long)*pplStack_48 + lVar11))();
    }
    else {
      lVar11 = 0x28;
      if (pplStack_48 != (long **)0x0) goto LAB_0a61a60b;
    }
    lVar11 = func_0x0d856c70(lVar7,&plStack_d8);
    plVar13 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if (plStack_98 == (long *)&uStack_b8) {
      lVar12 = 0x20;
LAB_0a61a670:
      (**(code **)(*plStack_98 + lVar12))();
    }
    else {
      lVar12 = 0x28;
      if (plStack_98 != (long *)0x0) goto LAB_0a61a670;
    }
    if ((int)lVar11 != -1) {
      plVar15 = (long *)(lVar7 + 0x38);
      uStack_11c = 0x45623710;
      plVar18 = (long *)(lVar7 + 0x70);
      plVar13 = (long *)(*(long *)(lVar7 + 0x70) +
                        (ulong)((int)((ulong)(*(long *)(lVar7 + 0x78) - *(long *)(lVar7 + 0x70)) >>
                                     3) - 1U & 0x45623710) * 8);
      do {
        if (*plVar13 == -1) goto LAB_0a61a6f0;
        lVar12 = *plVar13 * 0x20;
        plVar13 = (long *)(*(long *)(lVar7 + 0x88) + lVar12);
      } while (*(int *)(*(long *)(lVar7 + 0x88) + 8 + lVar12) != 0x45623710);
      if (plVar13 != *(long **)(lVar7 + 0x90)) {
        plVar13 = (long *)plVar13[2];
        goto LAB_0a61a857;
      }
LAB_0a61a6f0:
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar13 == (long *)0x0) goto LAB_0a61b0cb;
      do {
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&UNK_0f2367d8;
        if ((DAT_0f675a68 == '\0') && (iVar6 = func_0x04108328(&DAT_0f675a68), iVar6 != 0)) {
          func_0x0a6b3f50();
          func_0x0410844d(&DAT_0f675a68);
        }
        plStack_68 = plVar13 + 3;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[10] = (long)&DAT_0f675a50;
        *(undefined1 *)(plVar13 + 0xb) = 1;
        plVar13[0xc] = 0xffffffff;
        plVar13[3] = (long)&UNK_0f236828;
        plVar13[0xd] = 0;
        plVar13[0xe] = 0;
        plVar13[0xf] = 0;
        plStack_60 = plVar13;
        func_0x065bf170(plVar18,&uStack_11c,&plStack_68);
        puStack_c8 = &UNK_065bf690;
        uStack_b8 = 0x145ad657;
        pcStack_c0 = (code *)0x0;
        uStack_b4 = 3;
        plStack_d8 = plVar15;
        (**(code **)(*plStack_68 + 0x28))(plStack_68,&plStack_d8);
        if (pcStack_c0 != (code *)0x0) {
          (*pcStack_c0)(&plStack_d8);
        }
        plVar15 = plStack_60;
        plVar13 = plStack_68;
        if (plStack_60 != (long *)0x0) {
          LOCK();
          plVar18 = plStack_60 + 1;
          lVar12 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            func_0x0412c2d0(plVar15);
          }
        }
LAB_0a61a857:
        func_0x0d8547a0(plVar13,lVar11,0,0);
        plVar15 = (long *)((long)extraout_RDX + -1);
        plVar13 = (long *)func_0x0a6ce2c0(plVar13,plVar15);
        lVar12 = *plStack_38;
        plVar18 = (long *)plStack_38[1];
        if (plVar18 == (long *)0x0) {
          if (lVar12 != 0) {
            *plVar13 = lVar12;
            plVar13[1] = 0;
            break;
          }
        }
        else {
          LOCK();
          plVar18[1] = plVar18[1] + 1;
          UNLOCK();
          if (lVar12 != 0) {
            *plVar13 = lVar12;
            plVar13[1] = (long)plVar18;
            LOCK();
            plVar18[1] = plVar18[1] + 1;
            UNLOCK();
            if (*plVar13 != 0) goto code_r0x0a61a8b5;
          }
        }
        func_0x04890760();
        plVar13 = extraout_RDX;
LAB_0a61b0cb:
        FUN_0eec74c0(0x80,0);
      } while( true );
    }
    goto LAB_0a61a8ee;
  }
  plStack_118 = _DAT_0f6711f8;
  uVar14 = (ulong)_DAT_0f671200;
  uStack_110 = _DAT_0f671200;
  uStack_108 = CONCAT44(uRam000000000f67120c,_DAT_0f671208);
  uStack_100 = uRam000000000f671210;
  uStack_fc = uRam000000000f671214;
  if (_DAT_0f6711f8 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else if (*_DAT_0f6711f8 != 0 && *(uint *)(_DAT_0f6711f8 + 1) == _DAT_0f671200) {
    func_0x0d8568b0(*_DAT_0f6711f8,uStack_108);
  }
  if ((uStack_188 & 1) != 0) goto LAB_0a61a92d;
LAB_0a61a5ed:
  lStack_148 = lStack_178;
  uStack_158 = CONCAT44(uStack_184,uStack_188);
  uStack_150 = CONCAT44(uStack_17c,uStack_180);
LAB_0a61a941:
  iStack_138 = (int)uVar14;
  lStack_130 = uStack_108;
  uStack_128 = uStack_100;
  uStack_124 = uStack_fc;
  plStack_118 = (long *)0x0;
  uStack_110 = 0;
  uStack_108 = 0xffffffffffffff;
  bVar19 = (uStack_158 & 1) == 0;
  lVar7 = lStack_148;
  if (bVar19) {
    lVar7 = (long)&uStack_158 + 1;
  }
  uStack_100 = uStack_100 & 0xffffff00;
  uVar8 = uStack_158 >> 1 & 0x7f;
  if (!bVar19) {
    uVar8 = uStack_150;
  }
  plStack_140 = plVar15;
  uVar9 = FUN_04883620(&plStack_d8,lVar7,uVar8);
  plVar13 = (long *)(lVar10 + 0x28);
  uVar8 = *(ulong *)(lVar10 + 0x30);
  if (uVar8 != 0) {
    uVar14 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    uVar17 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar17 >> 0x38 < 2) {
      uVar14 = uVar8 - 1 & uVar9;
      puVar2 = *(undefined8 **)(*plVar13 + uVar14 * 8);
    }
    else {
      uVar14 = uVar9;
      if (uVar8 <= uVar9) {
        if ((uVar9 | uVar8) >> 0x20 == 0) {
          uVar14 = (uVar9 & 0xffffffff) % (uVar8 & 0xffffffff);
          puVar2 = *(undefined8 **)(*plVar13 + uVar14 * 8);
          goto joined_r0x0a61aa7c;
        }
        uVar14 = uVar9 % uVar8;
      }
      puVar2 = *(undefined8 **)(*plVar13 + uVar14 * 8);
    }
joined_r0x0a61aa7c:
    if ((puVar2 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar2, plVar15 != (long *)0x0)) {
      lVar7 = lStack_148;
      uVar16 = uStack_150;
      if ((uStack_158 & 1) == 0) {
        lVar7 = (long)&uStack_158 + 1;
        uVar16 = uStack_158 >> 1 & 0x7f;
      }
      if ((byte)(uVar17 >> 0x38) < 2) {
        plStack_168 = plVar13;
        do {
          if (plVar15[1] == uVar9) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar17 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar17 = plVar15[3];
            }
            if (uVar17 == uVar16) {
              if ((bVar1 & 1) == 0) {
                lVar11 = (long)plVar15 + 0x11;
              }
              else {
                lVar11 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar11,lVar7,uVar16);
              if (iVar6 == 0) goto LAB_0a61af12;
            }
          }
          else {
            plVar13 = plStack_168;
            if ((plVar15[1] & uVar8 - 1) != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
          plVar13 = plStack_168;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar15[1];
          if (uVar17 == uVar9) {
            bVar1 = *(byte *)(plVar15 + 2);
            if ((bVar1 & 1) == 0) {
              uVar17 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar17 = plVar15[3];
            }
            if (uVar17 == uVar16) {
              if ((bVar1 & 1) == 0) {
                lVar11 = (long)plVar15 + 0x11;
              }
              else {
                lVar11 = plVar15[4];
              }
              iVar6 = func_0x0eee3000(lVar11,lVar7,uVar16);
              if (iVar6 == 0) goto LAB_0a61af12;
            }
          }
          else {
            if (uVar8 <= uVar17) {
              if ((uVar17 | uVar8) >> 0x20 == 0) {
                uVar17 = (uVar17 & 0xffffffff) % (uVar8 & 0xffffffff);
              }
              else {
                uVar17 = uVar17 % uVar8;
              }
            }
            if (uVar17 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar15 == (long *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  puStack_c8 = (undefined *)0x0;
  *plVar15 = 0;
  plVar15[1] = uVar9;
  plStack_d8 = plVar15;
  plStack_d0 = plVar13;
  if ((uStack_158 & 1) == 0) {
    plVar15[4] = lStack_148;
    plVar15[2] = uStack_158;
    plVar15[3] = uStack_150;
  }
  else {
    func_0x0412e5e0(plVar15 + 2,lStack_148,uStack_150);
  }
  plVar15[5] = (long)plStack_140;
  *(int *)(plVar15 + 6) = iStack_138;
  plVar15[7] = lStack_130;
  plVar15[8] = CONCAT44(uStack_124,uStack_128);
  plStack_140 = (long *)0x0;
  iStack_138 = 0;
  lStack_130 = 0xffffffffffffff;
  uStack_128 = uStack_128 & 0xffffff00;
  puStack_c8 = (undefined *)CONCAT71(puStack_c8._1_7_,1);
  fVar20 = (float)(*(long *)(lVar10 + 0x40) + 1);
  if ((long)uVar8 < 0) {
    fVar22 = (float)uVar8;
    fVar21 = *(float *)(lVar10 + 0x48);
    if (uVar8 != 0) goto LAB_0a61acf3;
LAB_0a61ad15:
    uVar14 = 1;
    if (2 < uVar8) {
      uVar14 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar14 = uVar14 | uVar8 * 2;
    fVar20 = (float)func_0x0eee3ab0(fVar20 / fVar21);
    uVar8 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
    if (uVar8 < uVar14) {
      uVar8 = uVar14;
    }
    uVar14 = 2;
    if ((uVar8 == 1) || (uVar14 = uVar8, (uVar8 & uVar8 - 1) == 0)) {
      uVar8 = *(ulong *)(lVar10 + 0x30);
      bVar19 = uVar14 < uVar8;
      if (uVar14 <= uVar8) goto LAB_0a61adad;
LAB_0a61ad87:
      func_0x0a6cc380(plVar13,uVar14);
    }
    else {
      uVar14 = func_0x0412c3f0();
      uVar8 = *(ulong *)(lVar10 + 0x30);
      bVar19 = uVar14 < uVar8;
      if (uVar8 < uVar14) goto LAB_0a61ad87;
LAB_0a61adad:
      if (bVar19) {
        fVar20 = (float)func_0x0eee3ab0((float)*(ulong *)(lVar10 + 0x40) / *(float *)(lVar10 + 0x48)
                                       );
        uVar17 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
        if ((uVar8 < 3) ||
           (uVar16 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
           1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar17 = func_0x0412c3f0(uVar17);
        }
        else if (1 < uVar17) {
          lVar7 = 0x3f;
          if (uVar17 - 1 != 0) {
            for (; uVar17 - 1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar17 = 1L << (-((byte)lVar7 ^ 0x3f) & 0x3f);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar8) goto LAB_0a61ad87;
      }
    }
    uVar8 = *(ulong *)(lVar10 + 0x30);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar14 = uVar9 & uVar8 - 1;
      lVar7 = *plVar13;
      plVar13 = *(long **)(lVar7 + uVar14 * 8);
    }
    else {
      if (uVar8 <= uVar9) {
        if ((uVar9 | uVar8) >> 0x20 == 0) {
          uVar14 = (uVar9 & 0xffffffff) % (uVar8 & 0xffffffff);
          lVar7 = *plVar13;
          plVar13 = *(long **)(lVar7 + uVar14 * 8);
          goto joined_r0x0a61b040;
        }
        uVar9 = uVar9 % uVar8;
      }
      lVar7 = *plVar13;
      plVar13 = *(long **)(lVar7 + uVar9 * 8);
      uVar14 = uVar9;
    }
joined_r0x0a61b040:
    if (plVar13 == (long *)0x0) goto LAB_0a61b046;
LAB_0a61af04:
    *plVar15 = *plVar13;
    *plVar13 = (long)plVar15;
  }
  else {
    fVar22 = (float)(long)uVar8;
    fVar21 = *(float *)(lVar10 + 0x48);
    if (uVar8 == 0) goto LAB_0a61ad15;
LAB_0a61acf3:
    if (fVar22 * fVar21 < fVar20) goto LAB_0a61ad15;
    lVar7 = *plVar13;
    plVar13 = *(long **)(lVar7 + uVar14 * 8);
    if (plVar13 != (long *)0x0) goto LAB_0a61af04;
LAB_0a61b046:
    *plVar15 = *(long *)(lVar10 + 0x38);
    *(long **)(lVar10 + 0x38) = plVar15;
    *(long *)(lVar7 + uVar14 * 8) = lVar10 + 0x38;
    if (*plVar15 != 0) {
      uVar14 = *(ulong *)(*plVar15 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        *(long **)(lVar7 + (uVar14 & uVar8 - 1) * 8) = plVar15;
      }
      else {
        if (uVar8 <= uVar14) {
          if ((uVar14 | uVar8) >> 0x20 == 0) {
            *(long **)(lVar7 + ((uVar14 & 0xffffffff) % (uVar8 & 0xffffffff)) * 8) = plVar15;
            goto LAB_0a61af0e;
          }
          uVar14 = uVar14 % uVar8;
        }
        *(long **)(lVar7 + uVar14 * 8) = plVar15;
      }
    }
  }
LAB_0a61af0e:
  *(long *)(lVar10 + 0x40) = *(long *)(lVar10 + 0x40) + 1;
LAB_0a61af12:
  plVar13 = (long *)plVar15[5];
  *plStack_160 = (long)plVar13;
  lVar10 = plVar15[6];
  *(int *)(plStack_160 + 1) = (int)lVar10;
  uVar3 = *(undefined4 *)((long)plVar15 + 0x3c);
  lVar7 = plVar15[8];
  uVar4 = *(undefined4 *)((long)plVar15 + 0x44);
  *(int *)(plStack_160 + 2) = (int)plVar15[7];
  *(undefined4 *)((long)plStack_160 + 0x14) = uVar3;
  *(int *)(plStack_160 + 3) = (int)lVar7;
  *(undefined4 *)((long)plStack_160 + 0x1c) = uVar4;
  if ((plVar13 != (long *)0x0) && (*plVar13 != 0 && (int)plVar13[1] == (int)lVar10)) {
    func_0x0d8568b0(*plVar13,plStack_160[2]);
  }
  if ((plStack_140 != (long *)0x0) && (*plStack_140 != 0 && (int)plStack_140[1] == iStack_138)) {
    func_0x0d8569b0(*plStack_140,lStack_130,uStack_128);
  }
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(lStack_148,uStack_158 & 0xfffffffffffffffe);
  }
LAB_0a61afa3:
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(lStack_178,CONCAT44(uStack_184,uStack_188) & 0xfffffffffffffffe);
  }
  if ((plStack_f8 != (long *)0x0) && (*plStack_f8 != 0 && (int)plStack_f8[1] == iStack_f0)) {
    func_0x0d8569b0(*plStack_f8,plStack_e8,uStack_e0);
  }
  return;
code_r0x0a61a8b5:
  LOCK();
  plVar13 = plVar18 + 1;
  lVar12 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
  }
LAB_0a61a8ee:
  plVar15 = *(long **)(lVar7 + 8);
  if (plVar15 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)*(uint *)(plVar15 + 1);
  }
  uStack_110 = (uint)uVar14;
  uStack_100 = CONCAT31(uStack_100._1_3_,extraout_DL);
  plStack_118 = plVar15;
  uStack_108 = lVar11;
  if ((uStack_188 & 1) == 0) goto LAB_0a61a5ed;
LAB_0a61a92d:
  func_0x0412e5e0(&uStack_158,lStack_178,CONCAT44(uStack_17c,uStack_180));
  goto LAB_0a61a941;
}


