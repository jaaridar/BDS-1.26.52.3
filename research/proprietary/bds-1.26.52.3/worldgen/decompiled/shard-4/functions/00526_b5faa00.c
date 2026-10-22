/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb6faa00 (ELF vaddr 0xb5faa00)
 * Label: caller-of-callee
 * Body:  [[0b6faa00, 0b6faa98] [0b6faaa0, 0b6facb3] [0b6facc0, 0b6facec] [0b6facf0, 0b6fad29] [0b6fad30, 0b6fb9d4] [0b6fba99, 0b6fbab3] [0b6fbaeb, 0b6fbb03] [0b6fbb11, 0b6fbb26]]
 * Ghidra: FUN_0b6faa00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b6faa00(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *******ppppppplVar9;
  long *****ppppplVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long *****ppppplStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *******ppppppplStack_1d8;
  long *****ppppplStack_1d0;
  undefined8 uStack_1c8;
  long *****ppppplStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  undefined4 uStack_198;
  uint uStack_188;
  undefined1 auStack_178 [8];
  long *****ppppplStack_170;
  long *******ppppppplStack_168;
  long *plStack_158;
  long ******pppppplStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long ******pppppplStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  code *pcStack_e8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  code *pcStack_a0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  uStack_1f8 = *(long ******)(param_2 + 0x18);
  uStack_1f0 = *(long ******)(param_2 + 0x20);
  if ((uStack_1f8 == _DAT_0f7ba058) && (uStack_1f0 == _DAT_0f7ba060)) {
    return;
  }
  ppppplStack_148 = *(long ******)(param_2 + 8);
  ppppplStack_140 = *(long ******)(param_2 + 0x10);
  if ((ppppplStack_148 == _DAT_0f7ba058) && (ppppplStack_140 == _DAT_0f7ba060)) {
    return;
  }
  plVar22 = *(long **)(param_1 + 0x50);
  if (plVar22 != *(long **)(param_1 + 0x58)) {
    plStack_1e8 = (long *)(param_1 + 0x68);
    plStack_158 = (long *)(param_1 + 0x78);
LAB_0b6faaaf:
    plStack_118 = (long *)0x0;
    plStack_110 = (long *)0x0;
    if ((plVar22[1] != 0) &&
       (plVar6 = (long *)func_0x0412c300(), plStack_110 = plVar6, plVar6 != (long *)0x0)) {
      plVar18 = (long *)*plVar22;
      plStack_118 = plVar18;
      if (plVar18 == (long *)0x0) goto LAB_0b6facc3;
      cVar4 = (**(code **)*plVar18)(plVar18,&uStack_1f8);
      if (cVar4 == '\0') {
        plVar22 = plVar22 + 2;
        iVar5 = 0;
        LOCK();
        plVar18 = plVar6 + 1;
        lVar7 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        goto joined_r0x0b6fadcf;
      }
      (**(code **)(*plVar18 + 8))(&puStack_108,plVar18,&uStack_1f8);
      lVar7 = func_0x05f929d0(&puStack_108);
      if (lVar7 == 0) {
        if ((char)puStack_108 == '\0') {
          func_0x049e8590(&ppppppplStack_1d8,&uStack_100);
        }
        else {
          lStack_1a8 = 0;
          pcStack_1a0 = (code *)0x0;
          uStack_1b8 = (long *******)0x0;
          uStack_1b0 = 0;
          uStack_1c8 = (long *****)0x0;
          ppppplStack_1c0 = (long *****)0x0;
          ppppppplStack_1d8 = (long *******)0x0;
          ppppplStack_1d0 = (long *****)0x0;
          func_0x05d84ba0(&ppppppplStack_1d8);
        }
        uVar13 = uStack_1b0;
        ppppppplVar9 = ppppppplStack_1d8;
        if (uStack_1b8._4_1_ == '\x02') {
          ppppppplVar9 = (long *******)&ppppppplStack_1d8;
        }
        if (ppppppplVar9 == (long *******)0x0 || (int)uStack_1b8 != -0x218ee70b) {
          if (lStack_1a8 == 0) {
            (*pcStack_1a0)(0,&ppppppplStack_1d8,0);
          }
          ppppppplVar9 = ppppppplStack_1d8;
          if (uStack_1b8._4_1_ == '\x02') {
            ppppppplVar9 = (long *******)&ppppppplStack_1d8;
          }
          ppppppplVar9 = (long *******)func_0x0488e200(uVar13,lStack_1a8,0xde7118f5,ppppppplVar9);
        }
        if (ppppplStack_1c0 != (long *****)0x0) {
          (*(code *)ppppplStack_1c0)(&ppppppplStack_1d8);
        }
        if ((ulong)*(uint *)(ppppppplVar9 + 2) == 0xffffffff) {
          func_0x04931450();
          goto LAB_0b6fb9c8;
        }
        ppppppplStack_1d8 = &pppppplStack_130;
        (**(code **)(&UNK_0f2d0fa8 + (ulong)*(uint *)(ppppppplVar9 + 2) * 8))
                  (&plStack_1e0,&ppppppplStack_1d8,ppppppplVar9);
        if (plStack_1e0 == (long *)0x0) {
          plVar22 = plVar22 + 2;
          iVar5 = 3;
          goto LAB_0b6fac72;
        }
        uVar17 = *(ulong *)(param_1 + 0x70);
        if (uVar17 != 0) {
          uVar14 = (long)uStack_1f0 * 0x1f1f1f1f ^ (ulong)uStack_1f8;
          uVar15 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar15 >> 0x38 < 2) {
            uVar16 = uVar17 - 1 & uVar14;
          }
          else {
            uVar16 = uVar14;
            if (uVar17 <= uVar14) {
              uVar16 = uVar14 % uVar17;
            }
          }
          plVar18 = *(long **)(*plStack_1e8 + uVar16 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if ((byte)(uVar15 >> 0x38) < 2) {
              do {
                if (plVar18[1] == uVar14) {
                  if (((long *****)plVar18[2] == uStack_1f8) &&
                     ((long *****)plVar18[3] == uStack_1f0)) goto LAB_0b6fafef;
                }
                else if ((plVar18[1] & uVar17 - 1) != uVar16) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar18[1];
                if (uVar15 == uVar14) {
                  if (((long *****)plVar18[2] == uStack_1f8) &&
                     ((long *****)plVar18[3] == uStack_1f0)) goto LAB_0b6fafef;
                }
                else {
                  if (uVar17 <= uVar15) {
                    if ((uVar15 | uVar17) >> 0x20 == 0) {
                      uVar15 = (uVar15 & 0xffffffff) % (uVar17 & 0xffffffff);
                    }
                    else {
                      uVar15 = uVar15 % uVar17;
                    }
                  }
                  if (uVar15 != uVar16) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        auStack_178 = (undefined1  [8])ppppplStack_148;
        ppppplStack_170 = ppppplStack_140;
        ppppppplStack_1d8 = (long *******)0x0;
        ppppplStack_1d0 = (long *****)0x0;
        uStack_1c8 = (long *****)0x0;
        ppppplStack_1c0 = (long *****)0x0;
        uStack_1b8 = (long *******)CONCAT44(uStack_1b8._4_4_,0x3f800000);
        func_0x05fec080(&ppppppplStack_1d8,auStack_178);
        ppppplVar10 = (long *****)((long)uStack_1f0 * 0x1f1f1f1f ^ (ulong)uStack_1f8);
        ppppplVar21 = *(long ******)(param_1 + 0x70);
        if (ppppplVar21 != (long *****)0x0) {
          uVar17 = (long)ppppplVar21 - ((ulong)ppppplVar21 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
          uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar17 >> 0x38 < 2) {
            ppppplStack_208 = (long *****)((long)ppppplVar21 - 1U & (ulong)ppppplVar10);
          }
          else {
            ppppplStack_208 = ppppplVar10;
            if (ppppplVar21 <= ppppplVar10) {
              ppppplStack_208 = (long *****)((ulong)ppppplVar10 % (ulong)ppppplVar21);
            }
          }
          plVar18 = *(long **)(*plStack_1e8 + (long)ppppplStack_208 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            ppppppplVar9 = ppppppplStack_1d8;
            ppppplVar20 = uStack_1c8;
            if ((byte)(uVar17 >> 0x38) < 2) {
              do {
                if ((long *****)plVar18[1] == ppppplVar10) {
                  if (((long *****)plVar18[2] == uStack_1f8) &&
                     ((long *****)plVar18[3] == uStack_1f0)) goto joined_r0x0b6fb66e;
                }
                else if ((long *****)((ulong)plVar18[1] & (long)ppppplVar21 - 1U) != ppppplStack_208
                        ) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                ppppplVar12 = (long *****)plVar18[1];
                if (ppppplVar12 == ppppplVar10) {
                  if (((long *****)plVar18[2] == uStack_1f8) &&
                     ((long *****)plVar18[3] == uStack_1f0)) goto joined_r0x0b6fb66e;
                }
                else {
                  if (ppppplVar21 <= ppppplVar12) {
                    if (((ulong)ppppplVar12 | (ulong)ppppplVar21) >> 0x20 == 0) {
                      ppppplVar12 = (long *****)
                                    (((ulong)ppppplVar12 & 0xffffffff) %
                                    ((ulong)ppppplVar21 & 0xffffffff));
                    }
                    else {
                      ppppplVar12 = (long *****)((ulong)ppppplVar12 % (ulong)ppppplVar21);
                    }
                  }
                  if (ppppplVar12 != ppppplStack_208) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        pppppplVar11 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (pppppplVar11 == (long ******)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        ppppplVar20 = ppppplStack_1d0;
        ppppppplVar9 = ppppppplStack_1d8;
        plStack_128 = plStack_1e8;
        uStack_120 = 1;
        *pppppplVar11 = (long *****)0x0;
        pppppplVar11[1] = ppppplVar10;
        pppppplVar11[2] = uStack_1f8;
        pppppplVar11[3] = uStack_1f0;
        ppppppplStack_1d8 = (long *******)0x0;
        pppppplVar11[4] = (long *****)ppppppplVar9;
        pppppplVar11[5] = ppppplStack_1d0;
        ppppplStack_1d0 = (long *****)0x0;
        pppppplVar11[6] = uStack_1c8;
        pppppplVar11[7] = ppppplStack_1c0;
        *(int *)(pppppplVar11 + 8) = (int)uStack_1b8;
        if (ppppplStack_1c0 != (long *****)0x0) {
          ppppplVar12 = (long *****)uStack_1c8[1];
          if (((ulong)ppppplVar20 & (long)ppppplVar20 - 1U) == 0) {
            ppppplVar12 = (long *****)((ulong)ppppplVar12 & (long)ppppplVar20 - 1U);
          }
          else if (ppppplVar20 <= ppppplVar12) {
            if (((ulong)ppppplVar12 | (ulong)ppppplVar20) >> 0x20 == 0) {
              ppppplVar12 = (long *****)
                            (((ulong)ppppplVar12 & 0xffffffff) % ((ulong)ppppplVar20 & 0xffffffff));
            }
            else {
              ppppplVar12 = (long *****)((ulong)ppppplVar12 % (ulong)ppppplVar20);
            }
          }
          ppppppplVar9[(long)ppppplVar12] = pppppplVar11 + 6;
          uStack_1c8 = (long *****)0x0;
          ppppplStack_1c0 = (long *****)0x0;
        }
        fVar24 = (float)(*(long *)(param_1 + 0x80) + 1);
        pppppplStack_150 = pppppplVar11;
        pppppplStack_130 = pppppplVar11;
        if ((long)ppppplVar21 < 0) {
          fVar26 = (float)ppppplVar21;
          fVar25 = *(float *)(param_1 + 0x88);
          if (ppppplVar21 != (long *****)0x0) goto LAB_0b6fb33f;
LAB_0b6fb34c:
          uVar17 = 1;
          if ((long *****)0x2 < ppppplVar21) {
            uVar17 = (ulong)(((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) != 0);
          }
          ppppplVar20 = (long *****)((long)ppppplVar21 * 2 | uVar17);
          fVar24 = (float)func_0x0eee3ab0(fVar24 / fVar25);
          ppppplVar21 = (long *****)
                        ((long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24);
          if (ppppplVar21 < ppppplVar20) {
            ppppplVar21 = ppppplVar20;
          }
          ppppplVar20 = (long *****)0x2;
          if ((ppppplVar21 != (long *****)0x1) &&
             (ppppplVar20 = ppppplVar21, ((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) != 0)) {
            ppppplVar20 = (long *****)func_0x0412c3f0();
          }
          ppppplVar21 = *(long ******)(param_1 + 0x70);
          if (ppppplVar21 < ppppplVar20) {
LAB_0b6fb3c9:
            if ((ulong)ppppplVar20 >> 0x3d != 0) {
LAB_0b6fb9c8:
              uVar13 = func_0x04882eb0();
              plVar22 = plStack_1e0;
              plStack_1e0 = (long *)0x0;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 8))();
              }
              if (pcStack_e8 != (code *)0x0) {
                (*pcStack_e8)(&uStack_100);
              }
              func_0x067b2660(&plStack_118);
              func_0x0eee2d70(uVar13);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            ppppplStack_208 = (long *****)((long)ppppplVar20 * 8);
            lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar7 == 0) {
              func_0x0eec74c0(ppppplStack_208,0);
            }
            lVar1 = *plStack_1e8;
            *plStack_1e8 = lVar7;
            if (lVar1 != 0) {
              func_0x0412a280(lVar1,*(long *)(param_1 + 0x70) << 3);
              lVar7 = *(long *)(param_1 + 0x68);
            }
            *(long ******)(param_1 + 0x70) = ppppplVar20;
            memset(lVar7,0,ppppplStack_208);
            plVar18 = *(long **)(param_1 + 0x78);
            if (plVar18 != (long *)0x0) {
              ppppplVar21 = (long *****)plVar18[1];
              uVar17 = (long)ppppplVar20 - 1;
              if (((ulong)ppppplVar20 & uVar17) == 0) {
                *(long **)(lVar7 + ((ulong)ppppplVar21 & uVar17) * 8) = plStack_158;
                uVar14 = (ulong)ppppplVar21 & uVar17;
                while (plVar19 = plVar18, plVar18 = (long *)*plVar19, plVar18 != (long *)0x0) {
                  uVar15 = plVar18[1] & uVar17;
                  if (uVar15 != uVar14) {
                    if (*(long *)(lVar7 + uVar15 * 8) == 0) {
                      *(long **)(lVar7 + uVar15 * 8) = plVar19;
                      uVar14 = uVar15;
                    }
                    else {
                      *plVar19 = *plVar18;
                      *plVar18 = **(undefined8 **)(lVar7 + uVar15 * 8);
                      **(long **)(lVar7 + uVar15 * 8) = (long)plVar18;
                      plVar18 = plVar19;
                    }
                  }
                }
              }
              else {
                if (ppppplVar20 <= ppppplVar21) {
                  if (((ulong)ppppplVar21 | (ulong)ppppplVar20) >> 0x20 == 0) {
                    ppppplVar21 = (long *****)
                                  (((ulong)ppppplVar21 & 0xffffffff) %
                                  ((ulong)ppppplVar20 & 0xffffffff));
                  }
                  else {
                    ppppplVar21 = (long *****)((ulong)ppppplVar21 % (ulong)ppppplVar20);
                  }
                }
                *(long **)(lVar7 + (long)ppppplVar21 * 8) = plStack_158;
                plVar19 = (long *)*plVar18;
                while (plVar19 != (long *)0x0) {
                  ppppplVar12 = (long *****)plVar19[1];
                  if (ppppplVar20 <= ppppplVar12) {
                    if (((ulong)ppppplVar12 | (ulong)ppppplVar20) >> 0x20 == 0) {
                      ppppplVar12 = (long *****)
                                    (((ulong)ppppplVar12 & 0xffffffff) %
                                    ((ulong)ppppplVar20 & 0xffffffff));
                    }
                    else {
                      ppppplVar12 = (long *****)((ulong)ppppplVar12 % (ulong)ppppplVar20);
                    }
                  }
                  if (ppppplVar12 != ppppplVar21) {
                    if (*(long *)(lVar7 + (long)ppppplVar12 * 8) == 0) {
                      *(long **)(lVar7 + (long)ppppplVar12 * 8) = plVar18;
                      ppppplVar21 = ppppplVar12;
                    }
                    else {
                      *plVar18 = *plVar19;
                      *plVar19 = **(long **)(lVar7 + (long)ppppplVar12 * 8);
                      **(undefined8 **)(lVar7 + (long)ppppplVar12 * 8) = plVar19;
                      plVar19 = plVar18;
                    }
                  }
                  plVar18 = plVar19;
                  plVar19 = (long *)*plVar18;
                }
              }
            }
          }
          else if (ppppplVar20 < ppppplVar21) {
            fVar24 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x80) /
                                            *(float *)(param_1 + 0x88));
            ppppplVar12 = (long *****)
                          ((long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24);
            if ((ppppplVar21 < (long *****)0x3) ||
               (uVar17 = (long)ppppplVar21 - ((ulong)ppppplVar21 >> 1 & 0x5555555555555555),
               uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
               1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              ppppplVar12 = (long *****)func_0x0412c3f0(ppppplVar12);
            }
            else if ((long *****)0x1 < ppppplVar12) {
              lVar7 = 0x3f;
              if ((long)ppppplVar12 - 1U != 0) {
                for (; (long)ppppplVar12 - 1U >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              ppppplVar12 = (long *****)(1L << (-((byte)lVar7 ^ 0x3f) & 0x3f));
            }
            if (ppppplVar12 < ppppplVar20) {
              ppppplVar12 = ppppplVar20;
            }
            ppppplStack_208 = ppppplVar21;
            if (ppppplVar12 < ppppplVar21) {
              ppppplVar20 = ppppplVar12;
              if (ppppplVar12 != (long *****)0x0) goto LAB_0b6fb3c9;
              lVar7 = *plStack_1e8;
              *plStack_1e8 = 0;
              if (lVar7 != 0) {
                func_0x0412a280(lVar7,*(long *)(param_1 + 0x70) << 3);
              }
              *(undefined8 *)(param_1 + 0x70) = 0;
            }
          }
          ppppplVar21 = *(long ******)(param_1 + 0x70);
          if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
            ppppplVar20 = (long *****)((ulong)ppppplVar10 & (long)ppppplVar21 - 1U);
          }
          else {
            ppppplVar20 = ppppplVar10;
            if (ppppplVar21 <= ppppplVar10) {
              ppppplVar20 = (long *****)((ulong)ppppplVar10 % (ulong)ppppplVar21);
            }
          }
        }
        else {
          fVar26 = (float)(long)ppppplVar21;
          fVar25 = *(float *)(param_1 + 0x88);
          if (ppppplVar21 == (long *****)0x0) goto LAB_0b6fb34c;
LAB_0b6fb33f:
          ppppplVar20 = ppppplStack_208;
          if (fVar26 * fVar25 < fVar24) goto LAB_0b6fb34c;
        }
        lVar7 = *plStack_1e8;
        plVar18 = *(long **)(lVar7 + (long)ppppplVar20 * 8);
        if (plVar18 == (long *)0x0) {
          *pppppplStack_150 = (long *****)*plStack_158;
          *plStack_158 = (long)pppppplStack_150;
          *(long **)(lVar7 + (long)ppppplVar20 * 8) = plStack_158;
          if (*pppppplStack_150 != (long *****)0x0) {
            ppppplVar10 = (long *****)(*pppppplStack_150)[1];
            if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
              *(long *******)(lVar7 + ((ulong)ppppplVar10 & (long)ppppplVar21 - 1U) * 8) =
                   pppppplStack_150;
            }
            else {
              if (ppppplVar21 <= ppppplVar10) {
                if (((ulong)ppppplVar10 | (ulong)ppppplVar21) >> 0x20 == 0) {
                  *(long *******)
                   (lVar7 + (((ulong)ppppplVar10 & 0xffffffff) % ((ulong)ppppplVar21 & 0xffffffff))
                            * 8) = pppppplStack_150;
                  goto LAB_0b6fb65f;
                }
                ppppplVar10 = (long *****)((ulong)ppppplVar10 % (ulong)ppppplVar21);
              }
              *(long *******)(lVar7 + (long)ppppplVar10 * 8) = pppppplStack_150;
            }
          }
        }
        else {
          *pppppplStack_150 = (long *****)*plVar18;
          *plVar18 = (long)pppppplStack_150;
        }
LAB_0b6fb65f:
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
        ppppppplVar9 = ppppppplStack_1d8;
        ppppplVar20 = uStack_1c8;
joined_r0x0b6fb66e:
        while (ppppplVar20 != (long *****)0x0) {
          ppppplVar21 = (long *****)*ppppplVar20;
          ppppppplStack_1d8 = ppppppplVar9;
          func_0x0412a280(ppppplVar20,0x20);
          ppppppplVar9 = ppppppplStack_1d8;
          ppppplVar20 = ppppplVar21;
        }
        ppppppplStack_1d8 = (long *******)0x0;
        if (ppppppplVar9 != (long *******)0x0) {
          func_0x0412a280(ppppppplVar9,(long)ppppplStack_1d0 << 3);
        }
        goto LAB_0b6fb6b3;
      }
      uStack_188 = (uint)uStack_1f0 & 0xffff;
      ppppppplStack_1d8 =
           (long *******)CONCAT44(ppppppplStack_1d8._4_4_,(int)((ulong)uStack_1f8 >> 0x20));
      uStack_1c8 = (long *****)
                   (CONCAT44(uStack_1c8._4_4_,(int)((ulong)uStack_1f8 >> 0x10)) & 0xffffffff0000ffff
                   );
      uStack_1b8 = (long *******)(CONCAT44(uStack_1b8._4_4_,(int)uStack_1f8) & 0xffffffff0000ffff);
      lStack_1a8 = CONCAT44(lStack_1a8._4_4_,(uint)(ushort)((ulong)uStack_1f0 >> 0x30));
      uStack_198 = (undefined4)((ulong)uStack_1f0 >> 0x10);
      func_0x0470d9a0(auStack_178,&UNK_01287ba2,0x28,0x122112,&ppppppplStack_1d8);
      ppppplStack_1d0 = (long *****)((ulong)auStack_178 >> 1 & 0x7f);
      ppppppplStack_1d8 = (long *******)(auStack_178 + 1);
      if (((ulong)auStack_178 & 1) != 0) {
        ppppplStack_1d0 = ppppplStack_170;
        ppppppplStack_1d8 = ppppppplStack_168;
      }
      bVar23 = (*(byte *)(lVar7 + 0x18) & 1) != 0;
      uStack_1c8 = (long *****)(lVar7 + 0x19);
      if (bVar23) {
        uStack_1c8 = *(long ******)(lVar7 + 0x28);
      }
      ppppplStack_1c0 = (long *****)(ulong)(*(byte *)(lVar7 + 0x18) >> 1);
      if (bVar23) {
        ppppplStack_1c0 = *(long ******)(lVar7 + 0x20);
      }
      func_0x0470d9a0(&pppppplStack_130,&UNK_014bcda3,0x37,0xdd,&ppppppplStack_1d8);
      if (((ulong)auStack_178 & 1) != 0) {
        func_0x0412a280(ppppppplStack_168,(ulong)auStack_178 & 0xfffffffffffffffe);
      }
      if (((ulong)pppppplStack_130 & 1) != 0) {
        func_0x0412a280(uStack_120,(ulong)pppppplStack_130 & 0xfffffffffffffffe);
      }
      plVar22 = plVar22 + 2;
      iVar5 = 3;
      goto LAB_0b6fac72;
    }
    plVar6 = (long *)0x0;
LAB_0b6facc3:
    plVar18 = *(long **)(param_1 + 0x58);
    plVar19 = plVar22;
    if (plVar22 + 2 == plVar18) {
      if (plVar22 != plVar18) {
LAB_0b6fada9:
        do {
          if (plVar18[-1] != 0) {
            func_0x0412c2d0();
          }
          plVar18 = plVar18 + -2;
        } while (plVar18 != plVar19);
      }
    }
    else {
      do {
        lVar1 = plVar19[2];
        lVar3 = plVar19[3];
        plVar19[2] = 0;
        plVar19[3] = 0;
        lVar7 = plVar19[1];
        *(int *)plVar19 = (int)lVar1;
        *(undefined4 *)((long)plVar19 + 4) = *(undefined4 *)((long)plVar19 + 0x14);
        *(int *)(plVar19 + 1) = (int)lVar3;
        *(undefined4 *)((long)plVar19 + 0xc) = *(undefined4 *)((long)plVar19 + 0x1c);
        if (lVar7 != 0) {
          func_0x0412c2d0();
        }
        plVar8 = plVar19 + 4;
        plVar19 = plVar19 + 2;
      } while (plVar8 != plVar18);
      plVar18 = *(long **)(param_1 + 0x58);
      if (plVar19 != plVar18) goto LAB_0b6fada9;
    }
    *(long **)(param_1 + 0x58) = plVar19;
    iVar5 = 3;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar18 = plVar6 + 1;
      lVar7 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      goto joined_r0x0b6fadcf;
    }
    goto LAB_0b6faaa5;
  }
LAB_0b6fb869:
  puStack_108 = &UNK_0f0108b8;
  uStack_100 = (undefined4)uStack_1f8;
  uStack_fc = uStack_1f8._4_4_;
  uStack_f8 = (undefined4)uStack_1f0;
  uStack_f4 = uStack_1f0._4_4_;
  plVar22 = *(long **)(param_1 + 0x28);
  if ((DAT_0f6b68c0 == '\0') && (iVar5 = FUN_04108328(&DAT_0f6b68c0), iVar5 != 0)) {
    _DAT_0f6b6890 = &UNK_0f2d4a38;
    _DAT_0f6b68b0 = (long *)&DAT_0f6b6890;
    __cxa_atexit(&UNK_062619b0,&DAT_0f6b6890,0xf53dab8);
    func_0x0410844d(&DAT_0f6b68c0);
  }
  uVar13 = _DAT_0f543628;
  if (_DAT_0f6b68b0 == (long *)0x0) {
    uStack_1b8 = (long *******)0x0;
  }
  else if (_DAT_0f6b68b0 == (long *)&DAT_0f6b6890) {
    uStack_1b8 = (long *******)&ppppppplStack_1d8;
    (**(code **)(_DAT_0f6b6890 + 0x18))(&DAT_0f6b6890);
  }
  else {
    uStack_1b8 = (long *******)(**(code **)(*_DAT_0f6b68b0 + 0x10))();
  }
  uVar13 = (**(code **)(*plVar22 + 0x48))(plVar22,uVar13,&ppppppplStack_1d8);
  if ((long ********)uStack_1b8 == &ppppppplStack_1d8) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (uStack_1b8 == (long *******)0x0) goto LAB_0b6fb922;
  }
  (**(code **)((long)*uStack_1b8 + lVar7))();
LAB_0b6fb922:
  (**(code **)(*plVar22 + 0x68))(auStack_c0,plVar22,&ppppplStack_148,&puStack_108,uVar13);
  if (pcStack_a0 != (code *)0x0) {
    (*pcStack_a0)(auStack_b8);
  }
  return;
LAB_0b6fafef:
  func_0x05fec080(plVar18 + 4,&ppppplStack_148);
LAB_0b6fb6b3:
  func_0x05d70870(&ppppppplStack_1d8,&uStack_1f8,plStack_1e0);
  plVar18 = *(long **)(param_1 + 0x28);
  uVar13 = func_0x0b73ec60(plVar18);
  (**(code **)(*plVar18 + 0x68))(auStack_78,plVar18,&ppppplStack_148,&ppppppplStack_1d8,uVar13);
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(auStack_70);
  }
  if (((ulong)ppppplStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,(ulong)ppppplStack_1c0 & 0xfffffffffffffffe);
  }
  plVar18 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  iVar5 = 1;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
LAB_0b6fac72:
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(&uStack_100);
  }
  LOCK();
  plVar18 = plVar6 + 1;
  lVar7 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
joined_r0x0b6fadcf:
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  if ((iVar5 != 3) && (iVar5 != 0)) {
    return;
  }
LAB_0b6faaa5:
  if (plVar22 == *(long **)(param_1 + 0x58)) goto LAB_0b6fb869;
  goto LAB_0b6faaaf;
}


