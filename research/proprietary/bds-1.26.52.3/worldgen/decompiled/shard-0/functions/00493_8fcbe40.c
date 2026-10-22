/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x90cbe40 (ELF vaddr 0x8fcbe40)
 * Label: caller-of-callee
 * Body:  [[090cbe40, 090cbebb] [090cbec0, 090cbefe] [090cbf00, 090cc49d] [090cc4a0, 090cc4d4] [090cc4e0, 090cc54b] [090cc550, 090cc569] [090cc570, 090cca17] [090cca20, 090cca91]]
 * Ghidra: FUN_090cbe40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_090cbe40(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 extraout_DL;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  undefined1 auStack_140 [16];
  ulong uStack_130;
  long *plStack_128;
  int iStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_104;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_58;
  long *plStack_40;
  long *plStack_38;
  
  if (param_1[3] != 0) {
    puVar5 = (undefined8 *)param_1[2];
    while (puVar5 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar5;
      plVar13 = (long *)puVar5[5];
      if ((plVar13 != (long *)0x0) && (*plVar13 != 0 && (int)plVar13[1] == *(int *)(puVar5 + 6))) {
        func_0x0d8569b0(*plVar13,puVar5[7],*(undefined4 *)(puVar5 + 8));
      }
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        thunk_FUN_0ee326a0(puVar5[4],puVar5[2] & 0xfffffffffffffffe);
      }
      thunk_FUN_0ee326a0(puVar5,0x48);
      puVar5 = puVar4;
    }
    param_1[2] = 0;
    if (param_1[1] != 0) {
      func_0x0eee2dd0(*param_1,0,param_1[1] << 3);
    }
    param_1[3] = 0;
  }
  plStack_40 = param_1 + 2;
  lVar19 = 0;
  plStack_38 = param_2;
LAB_090cbecd:
  lVar8 = *(long *)(lVar19 * 8 + 0xf6e9e40);
  if (lVar8 != 0) {
    if ((*(byte *)(lVar8 + 0x98) & 1) == 0) {
      lStack_148 = *(long *)(lVar8 + 0xa8);
      uStack_158 = *(uint *)(lVar8 + 0x98);
      uStack_154 = *(undefined4 *)(lVar8 + 0x9c);
      uStack_150 = *(undefined4 *)(lVar8 + 0xa0);
      uStack_14c = *(undefined4 *)(lVar8 + 0xa4);
    }
    else {
      FUN_0412e5e0(&uStack_158,*(undefined8 *)(lVar8 + 0xa8),*(undefined8 *)(lVar8 + 0xa0));
    }
    func_0x0edfe9a0(&bStack_100,&uStack_158,0x5f);
    lVar8 = func_0x091e70e0(param_1,&uStack_158);
    lVar9 = func_0x0c6308e0(0xf6e9e18,&uStack_158);
    iVar7 = _DAT_0f60fa50;
    plVar13 = _DAT_0f60fa48;
    if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) && (lVar8 == 0)) {
      plVar3 = (long *)*plStack_38;
      if ((plVar3 == (long *)0x0) ||
         (lVar8 = *plVar3, lVar8 == 0 || (int)plVar3[1] != (int)plStack_38[1])) {
        plStack_128 = _DAT_0f60fa48;
        iStack_120 = _DAT_0f60fa50;
        uStack_118 = CONCAT44(uRam000000000f60fa5c,_DAT_0f60fa58);
        uStack_110 = uRam000000000f60fa60;
        uStack_10c = uRam000000000f60fa64;
        if (_DAT_0f60fa48 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else if (*_DAT_0f60fa48 != 0 && (int)_DAT_0f60fa48[1] == _DAT_0f60fa50) {
          func_0x0d8568b0(*_DAT_0f60fa48,uStack_118);
        }
      }
      else {
        plStack_70 = (long *)(lVar8 + 0x10);
        plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffff0000);
        plStack_e0 = (long *)&UNK_091e7360;
        puStack_d8 = &UNK_091e7540;
        plStack_a8 = (long *)0x0;
        uStack_98 = 0;
        uStack_90 = 0x100000008;
        plStack_88 = (long *)0x0;
        plStack_78 = (long *)&UNK_0f17c4e0;
        pplStack_58 = &plStack_78;
        func_0x065bdd40(&plStack_78,&uStack_c8);
        if (pplStack_58 == &plStack_78) {
          lVar10 = 0x20;
LAB_090cc0a0:
          (**(code **)((long)*pplStack_58 + lVar10))();
        }
        else {
          lVar10 = 0x28;
          if (pplStack_58 != (long **)0x0) goto LAB_090cc0a0;
        }
        lVar10 = func_0x0d856c70(lVar8,&plStack_e8);
        plVar13 = plStack_88;
        plStack_88 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (plStack_a8 == &uStack_c8) {
          lVar11 = 0x20;
LAB_090cc11a:
          (**(code **)(*plStack_a8 + lVar11))();
          if ((int)lVar10 == -1) goto LAB_090cc0ff;
LAB_090cc126:
          uStack_104 = 0x55dfea5b;
          auStack_140._0_8_ = lVar8 + 0x70;
          plVar13 = (long *)(*(long *)(lVar8 + 0x70) +
                            (ulong)((int)((ulong)(*(long *)(lVar8 + 0x78) - *(long *)(lVar8 + 0x70))
                                         >> 3) - 1U & 0x55dfea5b) * 8);
          do {
            if (*plVar13 == -1) goto LAB_090cc194;
            lVar11 = *plVar13 * 0x20;
            plVar13 = (long *)(*(long *)(lVar8 + 0x88) + lVar11);
          } while (*(int *)(*(long *)(lVar8 + 0x88) + 8 + lVar11) != 0x55dfea5b);
          uStack_130 = CONCAT71(uStack_130._1_7_,extraout_DL);
          if (plVar13 == *(long **)(lVar8 + 0x90)) {
LAB_090cc194:
            uStack_130 = CONCAT71(uStack_130._1_7_,extraout_DL);
            plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
            if (plVar13 == (long *)0x0) {
              func_0x0eec74c0(0x80,0);
            }
            plVar13[1] = 0;
            plVar13[2] = 0;
            *plVar13 = (long)&UNK_0f17c560;
            if ((DAT_0f6177f0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6177f0), iVar7 != 0)) {
              func_0x091df0f0(0xf6177d8);
              func_0x0410844d(&DAT_0f6177f0);
            }
            plStack_78 = plVar13 + 3;
            plVar13[8] = 0;
            plVar13[9] = 0;
            plVar13[6] = 0;
            plVar13[7] = 0;
            plVar13[4] = 0;
            plVar13[5] = 0;
            plVar13[10] = 0xf6177d8;
            *(undefined1 *)(plVar13 + 0xb) = 1;
            plVar13[0xc] = 0xffffffff;
            plVar13[3] = (long)&UNK_0f17c5b0;
            plVar13[0xd] = 0;
            plVar13[0xe] = 0;
            plVar13[0xf] = 0;
            plStack_70 = plVar13;
            func_0x065bf170(auStack_140._0_8_,&uStack_104,&plStack_78);
            puStack_d8 = &UNK_065bf690;
            uStack_c8._0_4_ = 0x145ad657;
            pcStack_d0 = (code *)0x0;
            uStack_c8._4_1_ = 3;
            plStack_e8 = (long *)(lVar8 + 0x38);
            (**(code **)(*plStack_78 + 0x28))(plStack_78,&plStack_e8);
            if (pcStack_d0 != (code *)0x0) {
              (*pcStack_d0)(&plStack_e8);
            }
            plVar3 = plStack_70;
            plVar13 = plStack_78;
            if (plStack_70 != (long *)0x0) {
              LOCK();
              plVar1 = plStack_70 + 1;
              lVar11 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plStack_70 + 0x10))(plStack_70);
                func_0x0412c2d0(plVar3);
              }
            }
          }
          else {
            plVar13 = (long *)plVar13[2];
          }
          auStack_140 = func_0x0d8547a0(plVar13,lVar10,0,0);
          plVar13 = (long *)func_0x091e8db0(plVar13,auStack_140._8_8_ + -1);
          *plVar13 = lVar9;
          plVar13 = *(long **)(lVar8 + 8);
          uVar17 = (undefined1)uStack_130;
          if (plVar13 != (long *)0x0) goto LAB_090cc10c;
LAB_090cc33e:
          iVar7 = 0;
        }
        else {
          lVar11 = 0x28;
          if (plStack_a8 != (long *)0x0) goto LAB_090cc11a;
          if ((int)lVar10 != -1) goto LAB_090cc126;
LAB_090cc0ff:
          plVar13 = *(long **)(lVar8 + 8);
          uVar17 = extraout_DL;
          if (plVar13 == (long *)0x0) goto LAB_090cc33e;
LAB_090cc10c:
          iVar7 = (int)plVar13[1];
        }
        uStack_110 = CONCAT31(uStack_110._1_3_,uVar17);
        plStack_128 = plVar13;
        iStack_120 = iVar7;
        uStack_118 = lVar10;
      }
      bVar20 = (uStack_158 & 1) == 0;
      lVar8 = lStack_148;
      if (bVar20) {
        lVar8 = (long)&uStack_158 + 1;
      }
      uVar18 = (ulong)((byte)uStack_158 >> 1);
      if (!bVar20) {
        uVar18 = CONCAT44(uStack_14c,uStack_150);
      }
      auStack_140._0_8_ = plVar13;
      uVar12 = func_0x04883620(&plStack_e8,lVar8,uVar18);
      uVar18 = param_1[1];
      if (uVar18 != 0) {
        uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          uVar14 = uVar18 - 1 & uVar12;
        }
        else {
          uVar14 = uVar12;
          if (uVar18 <= uVar12) {
            if ((uVar12 | uVar18) >> 0x20 == 0) {
              uVar14 = (uVar12 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar14 = uVar12 % uVar18;
            }
          }
        }
        plVar13 = *(long **)(*param_1 + uVar14 * 8);
        uStack_130 = uVar14;
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if ((uStack_158 & 1) == 0) {
            uVar16 = (ulong)((byte)uStack_158 >> 1);
            auStack_140._8_8_ = (long)&uStack_158 + 1;
          }
          else {
            uVar16 = CONCAT44(uStack_14c,uStack_150);
            auStack_140._8_8_ = lStack_148;
          }
          if ((byte)(uVar15 >> 0x38) < 2) {
            do {
              if (plVar13[1] == uVar12) {
                bVar2 = *(byte *)(plVar13 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar15 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar15 = plVar13[3];
                }
                if (uVar15 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar8 = (long)plVar13 + 0x11;
                  }
                  else {
                    lVar8 = plVar13[4];
                  }
                  iVar6 = func_0x0eee3000(lVar8,auStack_140._8_8_,uVar16);
                  uVar14 = uStack_130;
                  if (iVar6 == 0) goto LAB_090cc5a1;
                }
              }
              else if ((plVar13[1] & uVar18 - 1) != uVar14) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar15 = plVar13[1];
              if (uVar15 == uVar12) {
                bVar2 = *(byte *)(plVar13 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar15 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar15 = plVar13[3];
                }
                if (uVar15 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar8 = (long)plVar13 + 0x11;
                  }
                  else {
                    lVar8 = plVar13[4];
                  }
                  iVar6 = func_0x0eee3000(lVar8,auStack_140._8_8_,uVar16);
                  uVar14 = uStack_130;
                  if (iVar6 == 0) goto LAB_090cc5a1;
                }
              }
              else {
                if (uVar18 <= uVar15) {
                  if ((uVar15 | uVar18) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar18 & 0xffffffff);
                  }
                  else {
                    uVar15 = uVar15 % uVar18;
                  }
                }
                if (uVar15 != uVar14) break;
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
      puStack_d8 = (undefined *)0x0;
      *plVar13 = 0;
      plVar13[1] = uVar12;
      plStack_e8 = plVar13;
      plStack_e0 = param_1;
      if ((uStack_158 & 1) == 0) {
        plVar13[4] = lStack_148;
        plVar13[2] = CONCAT44(uStack_154,uStack_158);
        plVar13[3] = CONCAT44(uStack_14c,uStack_150);
      }
      else {
        FUN_0412e5e0(plVar13 + 2,lStack_148,CONCAT44(uStack_14c,uStack_150));
      }
      plVar13[5] = auStack_140._0_8_;
      *(int *)(plVar13 + 6) = iVar7;
      plVar13[7] = uStack_118;
      plVar13[8] = CONCAT44(uStack_10c,uStack_110);
      plStack_128 = (long *)0x0;
      iStack_120 = 0;
      uStack_118 = 0xffffffffffffff;
      uStack_110 = uStack_110 & 0xffffff00;
      puStack_d8 = (undefined *)CONCAT71(puStack_d8._1_7_,1);
      if ((long)uVar18 < 0) {
        fVar22 = (float)uVar18;
        fVar21 = *(float *)(param_1 + 4);
        if (uVar18 != 0) goto LAB_090cc713;
LAB_090cc724:
        uVar15 = 1;
        if (2 < uVar18) {
          uVar15 = (ulong)((uVar18 & uVar18 - 1) != 0);
        }
        uVar15 = uVar18 * 2 | uVar15;
        fVar21 = (float)ceilf((float)(param_1[3] + 1) / fVar21);
        uVar18 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
        if (uVar18 < uVar15) {
          uVar18 = uVar15;
        }
        uVar15 = 2;
        if ((uVar18 == 1) || (uVar15 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
          uVar18 = param_1[1];
          bVar20 = uVar15 < uVar18;
          if (uVar15 <= uVar18) goto LAB_090cc7bb;
LAB_090cc795:
          func_0x091e2760(param_1,uVar15);
        }
        else {
          uVar15 = func_0x0412c3f0();
          uVar18 = param_1[1];
          bVar20 = uVar15 < uVar18;
          if (uVar18 < uVar15) goto LAB_090cc795;
LAB_090cc7bb:
          if (bVar20) {
            fVar21 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            uVar14 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
            if ((uVar18 < 3) ||
               (uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
               uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
               1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar14 = func_0x0412c3f0(uVar14);
            }
            else if (1 < uVar14) {
              lVar8 = 0x3f;
              if (uVar14 - 1 != 0) {
                for (; uVar14 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar14 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
            }
            if (uVar15 <= uVar14) {
              uVar15 = uVar14;
            }
            if (uVar15 < uVar18) goto LAB_090cc795;
          }
        }
        uVar18 = param_1[1];
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar15 = uVar12 & uVar18 - 1;
        }
        else {
          uVar15 = uVar12;
          if (uVar18 <= uVar12) {
            if ((uVar12 | uVar18) >> 0x20 == 0) {
              uVar15 = (uVar12 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar15 = uVar12 % uVar18;
            }
          }
        }
      }
      else {
        fVar22 = (float)(long)uVar18;
        fVar21 = *(float *)(param_1 + 4);
        if (uVar18 == 0) goto LAB_090cc724;
LAB_090cc713:
        uVar15 = uStack_130;
        if (fVar22 * fVar21 < (float)(param_1[3] + 1)) goto LAB_090cc724;
      }
      lVar8 = *param_1;
      plVar3 = *(long **)(lVar8 + uVar15 * 8);
      if (plVar3 == (long *)0x0) {
        *plVar13 = *plStack_40;
        *plStack_40 = (long)plVar13;
        *(long **)(lVar8 + uVar15 * 8) = plStack_40;
        if (*plVar13 != 0) {
          uVar12 = *(ulong *)(*plVar13 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            *(long **)(lVar8 + (uVar12 & uVar18 - 1) * 8) = plVar13;
          }
          else {
            if (uVar18 <= uVar12) {
              if ((uVar12 | uVar18) >> 0x20 == 0) {
                *(long **)(lVar8 + ((uVar12 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) = plVar13;
                goto LAB_090cc910;
              }
              uVar12 = uVar12 % uVar18;
            }
            *(long **)(lVar8 + uVar12 * 8) = plVar13;
          }
        }
      }
      else {
        *plVar13 = *plVar3;
        *plVar3 = (long)plVar13;
      }
LAB_090cc910:
      param_1[3] = param_1[3] + 1;
    }
    goto LAB_090cc918;
  }
  goto LAB_090cbec0;
LAB_090cc5a1:
  if (((long *)auStack_140._0_8_ != (long *)0x0) &&
     (*(long *)auStack_140._0_8_ != 0 && (int)*(long *)(auStack_140._0_8_ + 8) == iVar7)) {
    func_0x0d8569b0(*(long *)auStack_140._0_8_,uStack_118,uStack_110);
  }
LAB_090cc918:
  if ((bStack_100 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
  }
  if ((uStack_158 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_148,CONCAT44(uStack_154,uStack_158) & 0xfffffffffffffffe);
  }
LAB_090cbec0:
  lVar19 = lVar19 + 1;
  if (lVar19 == 0x26) {
    return;
  }
  goto LAB_090cbecd;
}


