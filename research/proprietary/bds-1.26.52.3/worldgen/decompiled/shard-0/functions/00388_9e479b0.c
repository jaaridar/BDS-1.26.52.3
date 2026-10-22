/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f479b0 (ELF vaddr 0x9e479b0)
 * Label: caller-of-callee
 * Body:  [[09f479b0, 09f486d0] [09f486e0, 09f49032] [09f4912a, 09f49188]]
 * Ghidra: FUN_09f479b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_09f479b0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  code *pcVar4;
  byte *pbVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long *plVar19;
  byte bVar20;
  int iVar21;
  int *piVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  short sVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  float fVar30;
  long lStack_1a8;
  undefined1 auStack_199 [9];
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *puStack_168;
  undefined **ppuStack_160;
  ulong uStack_158;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  byte *pbStack_138;
  long *plStack_130;
  long lStack_128;
  byte *pbStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined **ppuStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  long lStack_b8;
  byte bStack_48;
  long lStack_38;
  
  plVar19 = *(long **)(param_1 + 0xf0);
  if (plVar19 == (long *)0x0) {
    uVar23 = 0;
    goto LAB_09f47ace;
  }
  lStack_150 = param_3;
  (**(code **)(*plVar19 + 0x20))(&uStack_178,plVar19,param_2);
  lVar17 = CONCAT44(uStack_174,uStack_178);
  if (((lVar17 == 0) || (*(char *)(lVar17 + 0x110a) != '\x01')) ||
     (*(char *)(lVar17 + 0xb8) != '\v')) {
    uVar23 = 0;
    plVar19 = (long *)CONCAT44(uStack_16c,uStack_170);
  }
  else {
    cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x9f0))();
    auStack_199._1_8_ = param_1;
    if ((cVar6 == '\0') &&
       (cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0xc38))(), cVar6 != '\0')) {
      uVar9 = func_0x0417cc60();
      *(undefined8 *)(param_1 + 0x180) = uVar9;
      *(undefined1 *)(param_1 + 0x188) = 1;
      uStack_180 = CONCAT44(uStack_174,uStack_178);
      bVar20 = *(byte *)(param_1 + 0xd0);
      plVar19 = *(long **)(*(long *)(param_1 + 8) + 0x7f0);
      lVar10 = func_0x0eee2fc0();
      lVar27 = *plVar19;
      LOCK();
      lVar17 = plVar19[2];
      bVar29 = lVar27 == lVar17;
      if (bVar29) {
        plVar19[2] = lVar10;
        lVar17 = lVar27;
      }
      UNLOCK();
      lStack_190 = lVar10;
      if (!bVar29) {
        iVar21 = 3000;
        do {
          while( true ) {
            if ((lVar17 == lVar10) && (iVar8 = (int)plVar19[1] + 1, iVar8 != -1)) {
              *(int *)(plVar19 + 1) = iVar8;
              goto LAB_09f47b27;
            }
            if (iVar21 == 0) break;
            iVar21 = iVar21 + -1;
            lVar27 = *plVar19;
            LOCK();
            lVar17 = plVar19[2];
            bVar29 = lVar27 == lVar17;
            if (bVar29) {
              plVar19[2] = lVar10;
              lVar17 = lVar27;
            }
            UNLOCK();
            if (bVar29) goto LAB_09f47b1e;
          }
          func_0x0eee35d0();
          iVar21 = 0;
          lVar27 = *plVar19;
          LOCK();
          lVar17 = plVar19[2];
          bVar29 = lVar27 == lVar17;
          if (bVar29) {
            plVar19[2] = lVar10;
            lVar17 = lVar27;
          }
          UNLOCK();
        } while (!bVar29);
      }
LAB_09f47b1e:
      *(undefined4 *)(plVar19 + 1) = 1;
LAB_09f47b27:
      func_0x0eee2f00(&puStack_f8,param_1 + 0x18,0xb0);
      bStack_48 = bVar20;
      uVar11 = func_0x08b53b60(&puStack_f8);
      plVar3 = plVar19 + 3;
      uVar11 = (uVar11 >> 2) + uVar11 * 0x40 + 0x9e3779b9 + (ulong)bStack_48 ^ uVar11;
      uVar23 = plVar19[4];
      lVar17 = lStack_190;
      if (uVar23 != 0) {
        uVar12 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          uStack_188 = uVar23 - 1 & uVar11;
        }
        else {
          uStack_188 = uVar11;
          if (uVar23 <= uVar11) {
            uStack_188 = uVar11 % uVar23;
          }
        }
        puVar1 = *(undefined8 **)(*plVar3 + uStack_188 * 8);
        if ((puVar1 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar1, plVar14 != (long *)0x0)) {
          if ((byte)(uVar12 >> 0x38) < 2) {
            uStack_158 = uVar23 - 1;
            do {
              if (plVar14[1] == uVar11) {
                uVar12 = func_0x08b53b60(plVar14 + 2);
                bVar20 = *(byte *)(plVar14 + 0x18);
                uVar13 = func_0x08b53b60(&puStack_f8);
                param_1 = auStack_199._1_8_;
                lVar17 = lStack_190;
                if (((uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 + (ulong)bVar20 ^ uVar12) ==
                    (uVar13 * 0x40 + 0x9e3779b9 + (uVar13 >> 2) + (ulong)bStack_48 ^ uVar13))
                goto LAB_09f481e3;
              }
              else if ((plVar14[1] & uStack_158) != uStack_188) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar14[1];
              if (uVar12 == uVar11) {
                uVar12 = func_0x08b53b60(plVar14 + 2);
                bVar20 = *(byte *)(plVar14 + 0x18);
                uVar13 = func_0x08b53b60(&puStack_f8);
                param_1 = auStack_199._1_8_;
                lVar17 = lStack_190;
                if (((uVar12 >> 2) + uVar12 * 0x40 + 0x9e3779b9 + (ulong)bVar20 ^ uVar12) ==
                    (uVar13 * 0x40 + 0x9e3779b9 + (uVar13 >> 2) + (ulong)bStack_48 ^ uVar13))
                goto LAB_09f481e3;
              }
              else {
                if (uVar23 <= uVar12) {
                  if ((uVar12 | uVar23) >> 0x20 == 0) {
                    uVar12 = (uVar12 & 0xffffffff) % (uVar23 & 0xffffffff);
                  }
                  else {
                    uVar12 = uVar12 % uVar23;
                  }
                }
                if (uVar12 != uStack_188) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0xf0,0);
      }
      pbStack_138 = (byte *)0x1;
      *plVar14 = 0;
      plVar14[1] = uVar11;
      plStack_148 = plVar14;
      plStack_140 = plVar3;
      func_0x0eee2f00(plVar14 + 2,&puStack_f8,0xb0);
      *(byte *)(plVar14 + 0x18) = bStack_48;
      plVar14[0x1b] = 0;
      plVar14[0x1c] = 0;
      plVar14[0x19] = 0;
      plVar14[0x1a] = 0;
      *(undefined4 *)(plVar14 + 0x1d) = 0x3f800000;
      if ((uVar23 == 0) ||
         (uVar12 = uStack_188, (float)uVar23 * *(float *)(plVar19 + 7) < (float)(plVar19[6] + 1))) {
        uVar12 = 1;
        if (2 < uVar23) {
          uVar12 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar12 = uVar12 | uVar23 * 2;
        fVar30 = (float)ceilf((float)(plVar19[6] + 1) / *(float *)(plVar19 + 7));
        lVar17 = lStack_190;
        uVar23 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
        if (uVar23 < uVar12) {
          uVar23 = uVar12;
        }
        uVar12 = 2;
        if ((uVar23 != 1) && (uVar12 = uVar23, (uVar23 & uVar23 - 1) != 0)) {
          uVar12 = func_0x0412c3f0();
        }
        uVar23 = plVar19[4];
        if (uVar23 < uVar12) {
LAB_09f47f47:
          if (uVar12 >> 0x3d != 0) {
            func_0x04882eb0();
            goto LAB_09f49015;
          }
          uStack_188 = uVar12 * 8;
          lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (lVar27 == 0) {
            func_0x0eec74c0(uStack_188,0);
          }
          lVar10 = *plVar3;
          *plVar3 = lVar27;
          if (lVar10 != 0) {
            thunk_FUN_0ee326a0(lVar10,plVar19[4] << 3);
            lVar27 = plVar19[3];
          }
          plVar19[4] = uVar12;
          func_0x0eee2dd0(lVar27,0,uStack_188);
          plVar24 = (long *)plVar19[5];
          if (plVar24 != (long *)0x0) {
            uVar13 = plVar24[1];
            uVar23 = uVar12 - 1;
            if ((uVar12 & uVar23) == 0) {
              *(long **)(lVar27 + (uVar13 & uVar23) * 8) = plVar19 + 5;
              uVar12 = uVar13 & uVar23;
              while (plVar25 = plVar24, plVar24 = (long *)*plVar25, plVar24 != (long *)0x0) {
                uVar13 = plVar24[1] & uVar23;
                if (uVar13 != uVar12) {
                  if (*(long *)(lVar27 + uVar13 * 8) == 0) {
                    *(long **)(lVar27 + uVar13 * 8) = plVar25;
                    uVar12 = uVar13;
                  }
                  else {
                    *plVar25 = *plVar24;
                    *plVar24 = **(undefined8 **)(lVar27 + uVar13 * 8);
                    **(long **)(lVar27 + uVar13 * 8) = (long)plVar24;
                    plVar24 = plVar25;
                  }
                }
              }
            }
            else {
              if (uVar12 <= uVar13) {
                if ((uVar13 | uVar12) >> 0x20 == 0) {
                  uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
                }
                else {
                  uVar13 = uVar13 % uVar12;
                }
              }
              *(long **)(lVar27 + uVar13 * 8) = plVar19 + 5;
              plVar25 = (long *)*plVar24;
              while (plVar25 != (long *)0x0) {
                uVar23 = plVar25[1];
                if (uVar12 <= uVar23) {
                  if ((uVar23 | uVar12) >> 0x20 == 0) {
                    uVar23 = (uVar23 & 0xffffffff) % (uVar12 & 0xffffffff);
                  }
                  else {
                    uVar23 = uVar23 % uVar12;
                  }
                }
                if (uVar23 != uVar13) {
                  if (*(long *)(lVar27 + uVar23 * 8) == 0) {
                    *(long **)(lVar27 + uVar23 * 8) = plVar24;
                    uVar13 = uVar23;
                  }
                  else {
                    *plVar24 = *plVar25;
                    *plVar25 = **(long **)(lVar27 + uVar23 * 8);
                    **(undefined8 **)(lVar27 + uVar23 * 8) = plVar25;
                    plVar25 = plVar24;
                  }
                }
                plVar24 = plVar25;
                plVar25 = (long *)*plVar24;
              }
            }
          }
        }
        else if (uVar12 < uVar23) {
          fVar30 = (float)ceilf((float)(ulong)plVar19[6] / *(float *)(plVar19 + 7));
          uVar13 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
          if ((uVar23 < 3) ||
             (uVar15 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
             uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
             1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar13 = func_0x0412c3f0();
          }
          else if (1 < uVar13) {
            lVar27 = 0x3f;
            if (uVar13 - 1 != 0) {
              for (; uVar13 - 1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            uVar13 = 1L << (-((byte)lVar27 ^ 0x3f) & 0x3f);
          }
          if (uVar13 < uVar12) {
            uVar13 = uVar12;
          }
          uVar12 = uVar13;
          if (uVar12 < uVar23) {
            if (uVar12 != 0) goto LAB_09f47f47;
            lVar27 = *plVar3;
            *plVar3 = 0;
            if (lVar27 != 0) {
              thunk_FUN_0ee326a0(lVar27,plVar19[4] << 3);
            }
            plVar19[4] = 0;
          }
        }
        uVar23 = plVar19[4];
        param_1 = auStack_199._1_8_;
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar12 = uVar11 & uVar23 - 1;
        }
        else {
          uVar12 = uVar11;
          if (uVar23 <= uVar11) {
            uVar12 = uVar11 % uVar23;
          }
        }
      }
      lVar27 = *plVar3;
      plVar3 = *(long **)(lVar27 + uVar12 * 8);
      if (plVar3 == (long *)0x0) {
        *plVar14 = plVar19[5];
        plVar19[5] = (long)plVar14;
        *(long **)(lVar27 + uVar12 * 8) = plVar19 + 5;
        if (*plVar14 != 0) {
          uVar11 = *(ulong *)(*plVar14 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            *(long **)(lVar27 + (uVar11 & uVar23 - 1) * 8) = plVar14;
          }
          else {
            if (uVar23 <= uVar11) {
              if ((uVar11 | uVar23) >> 0x20 == 0) {
                *(long **)(lVar27 + ((uVar11 & 0xffffffff) % (uVar23 & 0xffffffff)) * 8) = plVar14;
                goto LAB_09f481de;
              }
              uVar11 = uVar11 % uVar23;
            }
            *(long **)(lVar27 + uVar11 * 8) = plVar14;
          }
        }
      }
      else {
        *plVar14 = *plVar3;
        *plVar3 = (long)plVar14;
      }
LAB_09f481de:
      plVar19[6] = plVar19[6] + 1;
LAB_09f481e3:
      func_0x0647bc50(plVar14 + 0x19,uStack_180 + 0x50);
      if (plVar19[2] == lVar17) {
        iVar21 = (int)plVar19[1];
        if (iVar21 == 1) {
          *(undefined4 *)(plVar19 + 1) = 0;
          plVar19[2] = *plVar19;
        }
        else {
          if (iVar21 == 0) goto LAB_09f4821e;
          *(int *)(plVar19 + 1) = iVar21 + -1;
        }
      }
      else {
LAB_09f4821e:
        cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
        if (cVar6 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
    }
    (**(code **)(**(long **)(CONCAT44(uStack_174,uStack_178) + 0x28) + 0x9f0))();
    func_0x08afb260(&lStack_108,0x3a);
    lVar17 = CONCAT44(uStack_174,uStack_178);
    *(undefined8 *)(lStack_108 + 0x30) = *(undefined8 *)(lVar17 + 0x50);
    *(bool *)(lStack_108 + 0x48) = lStack_150 != 0;
    *(undefined4 *)(lStack_108 + 0x38) = *(undefined4 *)(param_2 + 8);
    lStack_1a8 = *(long *)(lVar17 + 0x108);
    lStack_190 = *(long *)(lVar17 + 0x110);
    uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x9f0))();
    uStack_188 = CONCAT71(uStack_188._1_7_,uVar7);
    (**(code **)(**(long **)(param_1 + 8) + 0xa50))(&pbStack_120);
    uVar23 = lStack_190 - lStack_1a8;
    if ((byte)uStack_188 == '\0') {
      func_0x0412d550(0xf5a3810);
      LOCK();
      _DAT_0f5a38e0 = _DAT_0f5a38e0 + 1;
      UNLOCK();
      func_0x0412d610(0xf5a3810);
      plVar19 = _DAT_0f5a38f8;
      uStack_e8 = _DAT_0f5a38f0;
      if ((_DAT_0f5a38f0 == (byte *)0x0) || (*_DAT_0f5a38f0 != 1)) {
LAB_09f49015:
        uVar9 = FUN_0eee02f0(0xf5a3810);
        func_0x0488cfb0(&plStack_148);
        puStack_f8 = &UNK_0f534730;
        if ((uStack_f0 & 1) != 0) {
          thunk_FUN_0ee326a0(plStack_e0,uStack_f0 & 0xfffffffffffffffe);
        }
        func_0x0751f3c0(&pbStack_120);
        func_0x08afbe40(&lStack_108);
        func_0x04a7efb0(&uStack_178);
        func_0x0eee2d70(uVar9);
        pcVar4 = (code *)swi(3);
        uVar23 = (*pcVar4)();
        return uVar23;
      }
      bVar20 = 1;
      if (_DAT_0f5a38f8 != (long *)0x0) {
        LOCK();
        _DAT_0f5a38f8[1] = _DAT_0f5a38f8[1] + 1;
        UNLOCK();
        bVar20 = *uStack_e8;
      }
      lVar17 = _DAT_0f5a3900;
      puStack_f8 = (undefined *)0xf5a3810;
      uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
      plStack_e0 = plVar19;
      ppuStack_d8 = (undefined **)_DAT_0f5a3900;
      if (((bVar20 & 1) == 0) &&
         (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0120b832),
         cVar6 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      piVar2 = *(int **)(lVar17 + 0x20);
      for (piVar22 = *(int **)(lVar17 + 0x18); (piVar22 != piVar2 && (*piVar22 != 0x2f));
          piVar22 = piVar22 + 0x20) {
      }
      if ((piVar22 == piVar2) || (lVar17 = *(long *)(piVar22 + 2), *(long *)(piVar22 + 2) == 0)) {
        cVar6 = '\0';
      }
      else {
        do {
          lVar27 = lVar17;
          lVar17 = *(long *)(*(long *)(lVar27 + 8) + 0x1a0);
        } while (lVar17 != 0);
        cVar6 = *(char *)(lVar27 + 0x10);
      }
      uStack_e8 = (byte *)0x0;
      plStack_e0 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar3 = plVar19 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
        plVar19 = plStack_e0;
        ppuStack_d8 = (undefined **)0x0;
        if (plStack_e0 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_e0 + 1;
          lVar17 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            func_0x0412c2d0(plVar19);
          }
        }
      }
      if ((char)uStack_f0 == '\x01') {
        FUN_0eee02f0(puStack_f8);
      }
      if (cVar6 != '\0') goto LAB_09f48510;
      *(undefined4 *)(lStack_108 + 0x40) = 0xffffffff;
      *(undefined1 *)(lStack_108 + 0x44) = 1;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      uStack_158 = uStack_158 & 0xffffffff00000000;
    }
    else {
      if (pbStack_120 == (byte *)0x0) {
LAB_09f48510:
        uStack_158 = uStack_158 & 0xffffffff00000000;
      }
      else {
        uStack_158 = CONCAT44(uStack_158._4_4_,(uint)*pbStack_120);
      }
      iVar21 = (int)(uVar23 >> 3) * -0x3b13b13b;
      *(int *)(lStack_108 + 0x3c) = iVar21;
      uStack_180 = CONCAT44(uStack_180._4_4_,(int)CONCAT71((uint7)(uint3)((uint)iVar21 >> 8),1));
    }
    if (lStack_150 != 0) {
      uVar9 = (**(code **)(**(long **)(auStack_199._1_8_ + 8) + 0x80))();
      uVar7 = func_0x0c9e8950(uVar9,CONCAT44(uStack_174,uStack_178),0);
      *(undefined1 *)(lStack_108 + 0x80) = uVar7;
      if ((byte)uStack_180 == '\0') {
LAB_09f485e2:
        lVar17 = *(long *)(lStack_108 + 0x50);
        lVar10 = lStack_150;
        lVar27 = auStack_199._1_8_;
        if (*(long *)(lStack_108 + 0x60) == lVar17) {
          uVar23 = 1;
          lVar27 = 0;
LAB_09f48608:
          lVar10 = *(long *)(lStack_108 + 0x58);
          lStack_38 = lVar27;
          lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 8);
          if (lVar27 == 0) {
            func_0x0eec74c0(uVar23 * 8,0);
          }
          lVar10 = lVar10 - lVar17;
          func_0x0eee2f00(lVar27,lVar17,lVar10);
          *(long *)(lStack_108 + 0x50) = lVar27;
          *(long *)(lStack_108 + 0x58) = lVar27 + lVar10;
          *(ulong *)(lStack_108 + 0x60) = lVar27 + uVar23 * 8;
          if (lVar17 != 0) {
            thunk_FUN_0ee326a0(lVar17,lStack_38);
          }
          lVar10 = lStack_150;
          lVar27 = auStack_199._1_8_;
          if (((byte)uStack_180 & lStack_190 != lStack_1a8) != 0) goto LAB_09f486b8;
        }
      }
      else {
        uVar23 = ((long)uVar23 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        lVar17 = *(long *)(lStack_108 + 0x50);
        lVar27 = *(long *)(lStack_108 + 0x60) - lVar17;
        if ((ulong)(lVar27 >> 3) < uVar23) {
          if (uVar23 >> 0x3d != 0) {
            func_0x0846a710();
            goto LAB_09f485e2;
          }
          goto LAB_09f48608;
        }
        lVar10 = lStack_150;
        lVar27 = auStack_199._1_8_;
        if (lStack_190 == lStack_1a8) goto LAB_09f4873e;
LAB_09f486b8:
        lVar10 = lStack_150;
        lVar27 = auStack_199._1_8_;
        lVar17 = lStack_1a8;
        lVar28 = lStack_1a8;
        do {
          puStack_f8 = &UNK_0f1f76c8;
          uStack_f0 = lVar28;
          ppuStack_d8 = &puStack_f8;
          func_0x09f49190(lVar27,lStack_108,lVar10,&puStack_f8);
          if (ppuStack_d8 == &puStack_f8) {
            lVar16 = 0x20;
LAB_09f486e5:
            (**(code **)(*ppuStack_d8 + lVar16))();
          }
          else {
            lVar16 = 0x28;
            if (ppuStack_d8 != (undefined **)0x0) goto LAB_09f486e5;
          }
          lVar17 = lVar17 + 0x68;
          lVar28 = lVar28 + 0x68;
        } while (lVar17 != lStack_190);
      }
LAB_09f4873e:
      if (CONCAT44(uStack_16c,uStack_170) != 0) {
        LOCK();
        plVar19 = (long *)(CONCAT44(uStack_16c,uStack_170) + 8);
        *plVar19 = *plVar19 + 1;
        UNLOCK();
      }
      puStack_f8 = &UNK_0f1f7758;
      uStack_f0 = CONCAT44(uStack_174,uStack_178);
      uStack_e8 = (byte *)CONCAT44(uStack_16c,uStack_170);
      ppuStack_d8 = &puStack_f8;
      func_0x09f49190(lVar27,lStack_108,lVar10,&puStack_f8);
      if (ppuStack_d8 == &puStack_f8) {
        lVar17 = 0x20;
      }
      else {
        lVar17 = 0x28;
        if (ppuStack_d8 == (undefined **)0x0) goto LAB_09f487b3;
      }
      (**(code **)(*ppuStack_d8 + lVar17))();
    }
LAB_09f487b3:
    lStack_b8 = lStack_108 + 0x68;
    bVar29 = (*(byte *)(lStack_108 + 0x68) & 1) != 0;
    ppuStack_d8 = (undefined **)(lStack_108 + 0x69);
    if (bVar29) {
      ppuStack_d8 = (undefined **)*(long *)(lStack_108 + 0x78);
    }
    uStack_d0 = (ulong)(*(byte *)(lStack_108 + 0x68) >> 1);
    if (bVar29) {
      uStack_d0 = *(ulong *)(lStack_108 + 0x70);
    }
    uStack_f0 = uStack_f0 & 0xffffffffffff0000;
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_f8 = &UNK_0f533820;
    puStack_168 = &UNK_0f533990;
    ppuStack_160 = &puStack_f8;
    if (lStack_150 == 0) {
      if ((lStack_190 != lStack_1a8 & (byte)uStack_180) == 1) {
        do {
          (**(code **)(puStack_168 + 0x30))(&puStack_168,9);
          uVar11 = 2 - (ulong)(*(long *)(lStack_1a8 + 0x38) == 0);
          (**(code **)(puStack_168 + 0x30))(&puStack_168,uVar11 & 0xffffffff);
          (**(code **)(puStack_168 + 0x30))(&puStack_168,(int)*(char *)(lStack_1a8 + 0x61));
          uVar23 = 0;
          do {
            plVar19 = *(long **)(lStack_1a8 + 0x30 + uVar23 * 8);
            plStack_148 = (long *)&UNK_0caad8f0;
            plStack_140 = (long *)auStack_199;
            cVar6 = (**(code **)(*plVar19 + 0x40))(plVar19);
            (**(code **)(puStack_168 + 0x30))(&puStack_168,(int)(char)(cVar6 * '\x02' + '\x01'));
            (**(code **)(*plVar19 + 0x88))(plVar19,&puStack_168,&plStack_148);
            uVar23 = uVar23 + 1;
          } while (uVar11 != uVar23);
          lStack_1a8 = lStack_1a8 + 0x68;
        } while (lStack_190 != lStack_1a8);
      }
      lVar17 = CONCAT44(uStack_174,uStack_178);
      if (*(char *)(lVar17 + 0x110b) == '\x01') {
        plVar19 = *(long **)(lVar17 + 800);
        plVar3 = *(long **)(lVar17 + 0x328);
        if (plVar19 != plVar3) {
          do {
            if ((long *)*plVar19 == (long *)0x0) {
              (**(code **)(puStack_168 + 0x30))(&puStack_168,0xffffffff);
            }
            else {
              cVar6 = (**(code **)(*(long *)*plVar19 + 0x40))();
              (**(code **)(puStack_168 + 0x30))(&puStack_168,(int)(char)(cVar6 * '\x02' + '\x01'));
              plStack_148 = (long *)&UNK_0cb0c7a0;
              plStack_140 = (long *)auStack_199;
              (**(code **)(*(long *)*plVar19 + 0x88))((long *)*plVar19,&puStack_168,&plStack_148);
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 != plVar3);
        }
      }
      else {
        (**(code **)(puStack_168 + 0x50))(&puStack_168,lVar17 + 0x120,0x200);
      }
    }
    lVar17 = CONCAT44(uStack_174,uStack_178);
    if (*(char *)(lStack_108 + 0x44) == '\x01') {
      lVar27 = (*(long *)(lVar17 + 0x110) - *(long *)(lVar17 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5;
      iVar21 = 0;
      if (-1 < (short)((short)lVar27 + -1)) {
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + -2;
        do {
          iVar21 = iVar21 + -1;
          sVar26 = (short)iVar21;
          lVar10 = (ulong)((int)lVar27 + 1U & 0x7fff) * 0x68 + *(long *)(lVar17 + 0x108);
          if ((_DAT_0f6ffb10 == (long *)0x0) &&
             (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901)
             , cVar6 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar9 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
          plVar19 = *(long **)(lVar10 + 0x30);
          cVar6 = (**(code **)(*plVar19 + 0x18))(plVar19,uVar9);
          if ((cVar6 == '\0') ||
             ((plVar19 = *(long **)(lVar10 + 0x38), plVar19 != (long *)0x0 &&
              (cVar6 = (**(code **)(*plVar19 + 0x18))(plVar19,uVar9), cVar6 == '\0'))))
          goto LAB_09f48ae7;
          sVar26 = (short)lVar27;
          lVar27 = lVar27 + -1;
        } while (-1 < sVar26);
        sVar26 = -1;
LAB_09f48ae7:
        iVar21 = sVar26 + 1;
        lVar17 = CONCAT44(uStack_174,uStack_178);
      }
      *(int *)(lStack_108 + 0x40) = iVar21;
      *(undefined1 *)(lStack_108 + 0x44) = 1;
    }
    cVar6 = func_0x0cae6f90(lVar17,&puStack_168);
    if (cVar6 == '\0') {
      (**(code **)(*ppuStack_160 + 0x20))(ppuStack_160,0,&UNK_013b0f7f,0);
    }
    if ((byte)uStack_180 == '\0') {
LAB_09f48b8e:
      if ((byte)uStack_188 != '\0') goto LAB_09f48b99;
LAB_09f48c8a:
      plVar19 = (long *)(**(code **)(**(long **)(auStack_199._1_8_ + 8) + 0xa48))();
      (**(code **)(*plVar19 + 0x38))
                (plVar19,auStack_199._1_8_ + 0x18,lStack_108,
                 *(undefined1 *)(auStack_199._1_8_ + 0xd0));
    }
    else {
      uVar9 = CONCAT44(uStack_174,uStack_178);
      puVar18 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
      if (puVar18 == (undefined1 *)0x0) {
        func_0x0eec74c0(1,0);
      }
      *puVar18 = 1;
      func_0x0cae7660(uVar9,&puStack_168,puVar18);
      thunk_FUN_0ee326a0(puVar18,1);
      lVar17 = CONCAT44(uStack_174,uStack_178);
      if ((*(byte *)(lVar17 + 0x14e8) & 1) == 0) {
        *(undefined2 *)(lVar17 + 0x14e8) = 0;
        goto LAB_09f48b8e;
      }
      **(undefined1 **)(lVar17 + 0x14f8) = 0;
      *(undefined8 *)(lVar17 + 0x14f0) = 0;
      if ((byte)uStack_188 == '\0') goto LAB_09f48c8a;
LAB_09f48b99:
      if ((char)uStack_158 != '\0') {
        *(undefined1 *)(lStack_108 + 0x81) = 1;
        if ((pbStack_120 == (byte *)0x0) &&
           (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012c1a15),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*pbStack_120 == 0) &&
           (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012c1a15),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        plVar19 = *(long **)(lStack_108 + 0x20);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x10))(plVar19,auStack_199._1_8_ + 0x18,uStack_110,&lStack_108);
        }
      }
    }
    *(int *)(auStack_199._1_8_ + 0xe8) = *(int *)(auStack_199._1_8_ + 0xe8) + 1;
    func_0x0412d550(0xf550550);
    LOCK();
    _DAT_0f550620 = _DAT_0f550620 + 1;
    UNLOCK();
    func_0x0412d610(0xf550550);
    plVar19 = _DAT_0f550638;
    pbVar5 = _DAT_0f550630;
    if ((_DAT_0f550630 == (byte *)0x0) || (*_DAT_0f550630 != 1)) {
      plStack_148 = (long *)0x0;
      plStack_140 = (long *)((ulong)plStack_140._1_7_ << 8);
      FUN_0eee02f0(0xf550550);
    }
    else {
      bVar20 = 1;
      if (_DAT_0f550638 != (long *)0x0) {
        LOCK();
        _DAT_0f550638[1] = _DAT_0f550638[1] + 1;
        UNLOCK();
        bVar20 = *pbVar5;
      }
      lVar17 = _DAT_0f550640;
      plStack_148 = (long *)0xf550550;
      plStack_140 = (long *)CONCAT71(plStack_140._1_7_,1);
      pbStack_138 = pbVar5;
      plStack_130 = plVar19;
      lStack_128 = _DAT_0f550640;
      if ((((byte)uStack_188 | ~bVar20) & 1) == 0) {
        if (((bVar20 & 1) == 0) &&
           (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01207944),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        LOCK();
        *(int *)(lVar17 + 0x204) = *(int *)(lVar17 + 0x204) + 1;
        UNLOCK();
      }
      pbStack_138 = (byte *)0x0;
      plStack_130 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar3 = plVar19 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          func_0x0412c2d0(plVar19);
        }
        plVar19 = plStack_130;
        lStack_128 = 0;
        if (plStack_130 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_130 + 1;
          lVar17 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            func_0x0412c2d0(plVar19);
          }
        }
      }
    }
    if ((char)plStack_140 == '\x01') {
      FUN_0eee02f0(plStack_148);
    }
    puStack_f8 = &UNK_0f534730;
    if ((uStack_f0 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_e0,uStack_f0 & 0xfffffffffffffffe);
    }
    plVar19 = plStack_118;
    pbStack_120 = (byte *)0x0;
    plStack_118 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar3 = plVar19 + 1;
      lVar17 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      plVar19 = plStack_118;
      uStack_110 = 0;
      if (plStack_118 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_118 + 1;
        lVar17 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          func_0x0412c2d0(plVar19);
        }
      }
    }
    if (plStack_100 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_100 + 1;
      lVar17 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        func_0x0412c2d0(plStack_100);
      }
    }
    uVar23 = CONCAT71((int7)((ulong)plStack_100 >> 8),1);
    plVar19 = (long *)CONCAT44(uStack_16c,uStack_170);
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar3 = plVar19 + 1;
    lVar17 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
LAB_09f47ace:
  return uVar23 & 0xffffffff;
}


