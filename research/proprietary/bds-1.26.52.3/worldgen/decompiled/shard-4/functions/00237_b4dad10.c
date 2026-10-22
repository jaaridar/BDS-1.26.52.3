/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb5dad10 (ELF vaddr 0xb4dad10)
 * Label: callee-of:0xc7b6470
 * Body:  [[0b5dad10, 0b5db3e4] [0b5db3f0, 0b5db48a] [0b5db490, 0b5db4be] [0b5db4c0, 0b5db759] [0b5db760, 0b5db81e] [0b5db820, 0b5db853] [0b5db860, 0b5dc029] [0b5dc10c, 0b5dc161]]
 * Ghidra: FUN_0b5dad10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b5dad10(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                   ulong param_5,long param_6,undefined8 param_7,long param_8,long param_9,
                   undefined8 *param_10)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  byte bVar24;
  long *plVar25;
  long *plVar26;
  bool bVar27;
  float fVar28;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long **pplStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  if ((DAT_0f6b44a8 == '\0') && (iVar4 = FUN_04108328(&DAT_0f6b44a8), iVar4 != 0)) {
    func_0x0412d6c0(0xf6b4480);
    __cxa_atexit(&UNK_0412d760,0xf6b4480,0xf53dab8);
    func_0x0410844d(&DAT_0f6b44a8);
  }
  func_0x0412d770(0xf6b4480);
  lVar5 = func_0x0b608140(param_7,param_7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar13 = (long *)(lVar5 + 0x38);
  uStack_d8 = 0;
  *plVar6 = 0;
  plVar6[1] = 0;
  plStack_e8 = plVar6;
  plStack_e0 = plVar13;
  func_0x0ee252c0(plVar6 + 2,param_1,param_2);
  uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
  plVar6[1] = plVar6[2];
  lVar7 = func_0x060d7b70(plVar13,plVar6[2],plVar6 + 2);
  plVar26 = plStack_e8;
  if (lVar7 == 0) {
    uVar9 = *(ulong *)(lVar5 + 0x40);
    uVar14 = plVar6[1];
    uVar17 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
    uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar17 >> 0x38 < 2) {
      uVar14 = uVar14 & uVar9 - 1;
      lVar7 = *plVar13;
      plVar13 = *(long **)(lVar7 + uVar14 * 8);
      if (plVar13 == (long *)0x0) goto LAB_0b5daef4;
LAB_0b5daf99:
      *plVar6 = *plVar13;
      *plVar13 = (long)plVar6;
    }
    else {
      if (uVar14 < uVar9) {
LAB_0b5daf89:
        lVar7 = *plVar13;
        plVar13 = *(long **)(lVar7 + uVar14 * 8);
      }
      else {
        if ((uVar14 | uVar9) >> 0x20 != 0) {
          uVar14 = uVar14 % uVar9;
          goto LAB_0b5daf89;
        }
        uVar14 = (uVar14 & 0xffffffff) % (uVar9 & 0xffffffff);
        lVar7 = *plVar13;
        plVar13 = *(long **)(lVar7 + uVar14 * 8);
      }
      if (plVar13 != (long *)0x0) goto LAB_0b5daf99;
LAB_0b5daef4:
      *plVar6 = *(long *)(lVar5 + 0x48);
      *(long **)(lVar5 + 0x48) = plVar6;
      *(long *)(lVar7 + uVar14 * 8) = lVar5 + 0x48;
      if (*plVar6 != 0) {
        uVar14 = *(ulong *)(*plVar6 + 8);
        if ((byte)(uVar17 >> 0x38) < 2) {
          *(long **)(lVar7 + (uVar14 & uVar9 - 1) * 8) = plVar6;
        }
        else {
          if (uVar9 <= uVar14) {
            if ((uVar14 | uVar9) >> 0x20 == 0) {
              *(long **)(lVar7 + ((uVar14 & 0xffffffff) % (uVar9 & 0xffffffff)) * 8) = plVar6;
              goto LAB_0b5dafa3;
            }
            uVar14 = uVar14 % uVar9;
          }
          *(long **)(lVar7 + uVar14 * 8) = plVar6;
        }
      }
    }
LAB_0b5dafa3:
    *(long *)(lVar5 + 0x50) = *(long *)(lVar5 + 0x50) + 1;
    plVar6 = (long *)param_3[4];
    if (plVar6 == (long *)0x0) goto LAB_0b5dafb4;
LAB_0b5dae57:
    if (plVar6 == param_3) {
      plStack_48 = alStack_68;
      (**(code **)(*plVar6 + 0x18))();
    }
    else {
      plStack_48 = (long *)(**(code **)(*plVar6 + 0x10))();
    }
    if (plStack_48 == (long *)0x0) goto LAB_0b5dafc7;
    if (plStack_48 == alStack_68) {
      pplStack_c8 = &plStack_e8;
      (**(code **)(*plStack_48 + 0x18))();
    }
    else {
      pplStack_c8 = (long **)(**(code **)(*plStack_48 + 0x10))();
    }
  }
  else {
    if (plStack_e8 != (long *)0x0) {
      if (((char)uStack_d8 == '\x01') && ((*(byte *)(plStack_e8 + 3) & 1) != 0)) {
        func_0x0412a280(plStack_e8[5],plStack_e8[3] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar26,0x38);
    }
    plVar6 = (long *)param_3[4];
    if (plVar6 != (long *)0x0) goto LAB_0b5dae57;
LAB_0b5dafb4:
    plStack_48 = (long *)0x0;
LAB_0b5dafc7:
    pplStack_c8 = (long **)0x0;
  }
  if (0xfffffffffffffff7 < param_5) {
    func_0x04882e30();
LAB_0b5dbff9:
    func_0x04aa1da0();
    goto LAB_0b5dbffe;
  }
  if (param_5 < 0x17) {
    uStack_b8 = CONCAT71(uStack_b8._1_7_,(char)param_5 * '\x02');
    lVar5 = (long)&uStack_b8 + 1;
    if (param_5 != 0) goto LAB_0b5db04d;
  }
  else {
    uVar9 = 0x1a;
    if ((param_5 | 7) != 0x17) {
      uVar9 = (param_5 | 7) + 1;
    }
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
    if (lVar5 == 0) {
      func_0x0eec74c0(uVar9,0);
    }
    uStack_b8 = uVar9 | 1;
    uStack_b0 = param_5;
    lStack_a8 = lVar5;
LAB_0b5db04d:
    memmove(lVar5,param_4,param_5);
  }
  *(undefined1 *)(lVar5 + param_5) = 0;
  lStack_a0 = param_8;
  lStack_98 = param_9;
  uVar10 = *param_10;
  uVar9 = param_10[1];
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  if (uVar9 != 0) {
    if (uVar9 >> 0x3e != 0) goto LAB_0b5dbff9;
    lVar5 = uVar9 * 4;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
    if (lVar7 == 0) {
      func_0x0eec74c0(lVar5,0);
    }
    lStack_80 = lVar7 + uVar9 * 4;
    lStack_90 = lVar7;
    func_0x0eee2f00(lVar7,uVar10,lVar5);
    lStack_88 = lVar7 + lVar5;
  }
  uStack_70 = 0xd0000;
  lStack_78 = param_6;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xc0,0);
  }
  plVar13 = plVar6 + 2;
  *plVar6 = 0;
  plVar6[1] = 0;
  func_0x0ee252c0(plVar13,param_1,param_2);
  if (pplStack_c8 == (long **)0x0) {
    plVar6[0xc] = 0;
  }
  else if (pplStack_c8 == &plStack_e8) {
    plVar6[0xc] = (long)(plVar6 + 8);
    (*(code *)(*pplStack_c8)[3])();
  }
  else {
    plVar6[0xc] = (long)pplStack_c8;
    pplStack_c8 = (long **)0x0;
  }
  plVar6[0x10] = lStack_a8;
  plVar6[0xe] = uStack_b8;
  plVar6[0xf] = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  plVar6[0x11] = lStack_a0;
  plVar6[0x12] = lStack_98;
  plVar6[0x13] = lStack_90;
  plVar6[0x14] = lStack_88;
  plVar6[0x15] = lStack_80;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  *(undefined4 *)(plVar6 + 0x17) = uStack_70;
  plVar6[0x16] = lStack_78;
  uVar9 = plVar6[2];
  plVar6[1] = uVar9;
  uVar14 = _DAT_0f6b4c28;
  if ((long)_DAT_0f6b4c28 < 0) {
    fVar28 = (float)_DAT_0f6b4c28;
    if (_DAT_0f6b4c28 != 0) goto LAB_0b5db29e;
LAB_0b5db2ab:
    uVar17 = 1;
    if (2 < _DAT_0f6b4c28) {
      uVar17 = (ulong)((_DAT_0f6b4c28 & _DAT_0f6b4c28 - 1) != 0);
    }
    uVar17 = uVar17 | _DAT_0f6b4c28 * 2;
    fVar28 = (float)func_0x0eee3ab0((float)(_DAT_0f6b4c38 + 1) / _DAT_0f6b4c40);
    uVar22 = (long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28;
    if (uVar22 < uVar17) {
      uVar22 = uVar17;
    }
    uVar17 = 2;
    if ((uVar22 == 1) || (uVar17 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
      bVar27 = uVar17 < uVar14;
      if (uVar17 <= uVar14) goto LAB_0b5db571;
    }
    else {
      uVar17 = func_0x0412c3f0();
      bVar27 = uVar17 < _DAT_0f6b4c28;
      uVar14 = _DAT_0f6b4c28;
      if (uVar17 <= _DAT_0f6b4c28) {
LAB_0b5db571:
        if (bVar27) {
          fVar28 = (float)func_0x0eee3ab0((float)_DAT_0f6b4c38 / _DAT_0f6b4c40);
          uVar22 = (long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28;
          if ((uVar14 < 3) ||
             (uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
             uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
             1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar22 = func_0x0412c3f0(uVar22);
            lVar5 = _DAT_0f6b4c20;
            if (uVar22 < uVar17) {
              uVar22 = uVar17;
            }
          }
          else {
            if (1 < uVar22) {
              lVar5 = 0x3f;
              if (uVar22 - 1 != 0) {
                for (; uVar22 - 1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              uVar22 = 1L << (-((byte)lVar5 ^ 0x3f) & 0x3f);
            }
            lVar5 = _DAT_0f6b4c20;
            if (uVar22 < uVar17) {
              uVar22 = uVar17;
            }
          }
          uVar17 = uVar22;
          _DAT_0f6b4c20 = lVar5;
          if (uVar17 < uVar14) {
            if (uVar17 != 0) goto LAB_0b5db324;
            _DAT_0f6b4c20 = 0;
            if (lVar5 != 0) {
              func_0x0412a280(lVar5,_DAT_0f6b4c28 << 3);
            }
            _DAT_0f6b4c28 = 0;
          }
        }
        goto LAB_0b5db936;
      }
    }
LAB_0b5db324:
    if (uVar17 >> 0x3d != 0) {
LAB_0b5dbffe:
      uVar10 = func_0x04882eb0();
      func_0x041084d6(&DAT_0f6b44a8);
      uVar10 = func_0x0eee2d70(uVar10);
      uVar10 = func_0x04882e20(uVar10);
      lVar5 = 0x20;
      if ((plStack_48 == alStack_68) || (lVar5 = 0x28, plStack_48 != (long *)0x0)) {
        (**(code **)(*plStack_48 + lVar5))();
        func_0x0412d790(0xf6b4480);
        uVar10 = func_0x0eee2d70(uVar10);
      }
      func_0x0412d790(0xf6b4480);
      func_0x0eee2d70(uVar10);
      pcVar3 = (code *)swi(3);
      plVar6 = (long *)(*pcVar3)();
      return plVar6;
    }
    lVar5 = uVar17 * 8;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
    if (lVar7 == 0) {
      func_0x0eec74c0(lVar5,0);
    }
    lVar23 = _DAT_0f6b4c20;
    bVar27 = _DAT_0f6b4c20 != 0;
    _DAT_0f6b4c20 = lVar7;
    if (bVar27) {
      func_0x0412a280(lVar23,_DAT_0f6b4c28 << 3);
    }
    lVar7 = _DAT_0f6b4c20;
    _DAT_0f6b4c28 = uVar17;
    memset(_DAT_0f6b4c20,0,lVar5);
    plVar26 = _DAT_0f6b4c30;
    if (_DAT_0f6b4c30 != (long *)0x0) {
      uVar22 = _DAT_0f6b4c30[1];
      uVar14 = uVar17 - 1;
      if ((uVar17 & uVar14) == 0) {
        uVar22 = uVar22 & uVar14;
        *(undefined **)(lVar7 + uVar22 * 8) = &DAT_0f6b4c30;
        lVar5 = _DAT_0f6b4c20;
        plVar8 = (long *)*plVar26;
        while (plVar12 = plVar8, plVar12 != (long *)0x0) {
          uVar17 = plVar12[1] & uVar14;
          if (uVar17 != uVar22) {
            if (*(long *)(lVar7 + uVar17 * 8) == 0) {
              *(long **)(lVar7 + uVar17 * 8) = plVar26;
              uVar22 = uVar17;
            }
            else {
              plVar8 = (long *)*plVar12;
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)0x0;
                plVar25 = plVar12;
              }
              else {
                lVar23 = plVar12[2];
                plVar18 = plVar12;
                lVar7 = lVar5;
                if (lVar23 == plVar8[2]) {
                  do {
                    plVar25 = plVar8;
                    if (((long *)plVar12[6] != plVar25 + 2) || ((long *)plVar25[6] != plVar12 + 2))
                    {
                      bVar1 = *(byte *)(plVar12 + 3);
                      if ((bVar1 & 1) == 0) {
                        uVar15 = (ulong)(bVar1 >> 1);
                        uVar11 = (ulong)*(byte *)(plVar25 + 3);
                        if ((*(byte *)(plVar25 + 3) & 1) != 0) goto LAB_0b5db49e;
LAB_0b5db485:
                        uVar19 = uVar11 >> 1;
                      }
                      else {
                        uVar15 = plVar12[4];
                        uVar11 = (ulong)*(byte *)(plVar25 + 3);
                        if ((*(byte *)(plVar25 + 3) & 1) == 0) goto LAB_0b5db485;
LAB_0b5db49e:
                        uVar19 = plVar25[4];
                      }
                      plVar8 = plVar25;
                      if (uVar15 != uVar19) break;
                      lVar21 = (long)plVar12 + 0x19;
                      if ((bVar1 & 1) != 0) {
                        lVar21 = plVar12[5];
                      }
                      if ((uVar11 & 1) == 0) {
                        lVar20 = (long)plVar25 + 0x19;
                      }
                      else {
                        lVar20 = plVar25[5];
                      }
                      iVar4 = bcmp(lVar21,lVar20);
                      if (iVar4 != 0) break;
                      plVar12[6] = (long)(plVar25 + 2);
                      plVar25[6] = (long)(plVar12 + 2);
                    }
                    plVar8 = (long *)*plVar25;
                    if (plVar8 == (long *)0x0) {
                      plVar8 = (long *)0x0;
                      goto LAB_0b5db532;
                    }
                    plVar18 = plVar25;
                  } while (lVar23 == plVar8[2]);
                }
                plVar12[6] = 0;
                plVar25 = plVar18;
              }
LAB_0b5db532:
              *plVar26 = (long)plVar8;
              *plVar25 = **(long **)(lVar7 + uVar17 * 8);
              **(undefined8 **)(lVar7 + uVar17 * 8) = plVar12;
              plVar12 = plVar26;
            }
          }
          plVar26 = plVar12;
          plVar8 = (long *)*plVar12;
        }
      }
      else {
        if (uVar17 <= uVar22) {
          if ((uVar22 | uVar17) >> 0x20 == 0) {
            uVar22 = (uVar22 & 0xffffffff) % (uVar17 & 0xffffffff);
          }
          else {
            uVar22 = uVar22 % uVar17;
          }
        }
        *(undefined **)(lVar7 + uVar22 * 8) = &DAT_0f6b4c30;
        lVar5 = _DAT_0f6b4c20;
        plVar8 = (long *)*plVar26;
        while (plVar12 = plVar8, plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if (uVar17 <= uVar14) {
            if ((uVar14 | uVar17) >> 0x20 == 0) {
              uVar14 = (uVar14 & 0xffffffff) % (uVar17 & 0xffffffff);
            }
            else {
              uVar14 = uVar14 % uVar17;
            }
          }
          if (uVar14 != uVar22) {
            if (*(long *)(lVar7 + uVar14 * 8) == 0) {
              *(long **)(lVar7 + uVar14 * 8) = plVar26;
              uVar22 = uVar14;
            }
            else {
              plVar8 = (long *)*plVar12;
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)0x0;
                plVar25 = plVar12;
              }
              else {
                lVar23 = plVar12[2];
                plVar18 = plVar12;
                lVar7 = lVar5;
                if (lVar23 == plVar8[2]) {
                  do {
                    plVar25 = plVar8;
                    if (((long *)plVar12[6] != plVar25 + 2) || ((long *)plVar25[6] != plVar12 + 2))
                    {
                      bVar1 = *(byte *)(plVar12 + 3);
                      if ((bVar1 & 1) == 0) {
                        uVar15 = (ulong)(bVar1 >> 1);
                        uVar11 = (ulong)*(byte *)(plVar25 + 3);
                        if ((*(byte *)(plVar25 + 3) & 1) != 0) goto LAB_0b5db82e;
LAB_0b5db819:
                        uVar19 = uVar11 >> 1;
                      }
                      else {
                        uVar15 = plVar12[4];
                        uVar11 = (ulong)*(byte *)(plVar25 + 3);
                        if ((*(byte *)(plVar25 + 3) & 1) == 0) goto LAB_0b5db819;
LAB_0b5db82e:
                        uVar19 = plVar25[4];
                      }
                      plVar8 = plVar25;
                      if (uVar15 != uVar19) break;
                      lVar21 = (long)plVar12 + 0x19;
                      if ((bVar1 & 1) != 0) {
                        lVar21 = plVar12[5];
                      }
                      if ((uVar11 & 1) == 0) {
                        lVar20 = (long)plVar25 + 0x19;
                      }
                      else {
                        lVar20 = plVar25[5];
                      }
                      iVar4 = bcmp(lVar21,lVar20);
                      if (iVar4 != 0) break;
                      plVar12[6] = (long)(plVar25 + 2);
                      plVar25[6] = (long)(plVar12 + 2);
                    }
                    plVar8 = (long *)*plVar25;
                    if (plVar8 == (long *)0x0) {
                      plVar8 = (long *)0x0;
                      goto LAB_0b5db8f0;
                    }
                    plVar18 = plVar25;
                  } while (lVar23 == plVar8[2]);
                }
                plVar12[6] = 0;
                plVar25 = plVar18;
              }
LAB_0b5db8f0:
              *plVar26 = (long)plVar8;
              *plVar25 = **(long **)(lVar7 + uVar14 * 8);
              **(undefined8 **)(lVar7 + uVar14 * 8) = plVar12;
              plVar12 = plVar26;
            }
          }
          plVar26 = plVar12;
          plVar8 = (long *)*plVar12;
        }
      }
    }
  }
  else {
    fVar28 = (float)(long)_DAT_0f6b4c28;
    if (_DAT_0f6b4c28 == 0) goto LAB_0b5db2ab;
LAB_0b5db29e:
    if (fVar28 * _DAT_0f6b4c40 < (float)(_DAT_0f6b4c38 + 1)) goto LAB_0b5db2ab;
  }
LAB_0b5db936:
  uVar14 = _DAT_0f6b4c28;
  lVar5 = _DAT_0f6b4c20;
  uVar17 = _DAT_0f6b4c28 - (_DAT_0f6b4c28 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
  uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  bVar1 = (byte)(uVar17 >> 0x38);
  if (uVar17 >> 0x38 < 2) {
    uVar17 = _DAT_0f6b4c28 - 1 & uVar9;
    plVar26 = *(long **)(_DAT_0f6b4c20 + uVar17 * 8);
    if (plVar26 == (long *)0x0) goto LAB_0b5db99b;
LAB_0b5db9d6:
    plVar8 = (long *)*plVar26;
    if (plVar8 == (long *)0x0) goto LAB_0b5dbcfe;
    lVar7 = plVar6[2];
    if (1 < bVar1) {
      bVar24 = 0;
      do {
        plVar12 = plVar8;
        uVar22 = plVar12[1];
        uVar15 = uVar22;
        if (uVar14 <= uVar22) {
          if ((uVar22 | uVar14) >> 0x20 == 0) {
            uVar15 = (uVar22 & 0xffffffff) % (uVar14 & 0xffffffff);
          }
          else {
            uVar15 = uVar22 % uVar14;
          }
        }
        if (uVar15 != uVar17) break;
        bVar16 = 0;
        if (uVar22 == uVar9) {
          if (plVar12[2] == lVar7) {
            if (((long *)plVar12[6] == plVar13) && ((long *)plVar6[6] == plVar12 + 2)) {
              bVar16 = 1;
              goto LAB_0b5dbcb9;
            }
            bVar2 = *(byte *)(plVar12 + 3);
            if ((bVar2 & 1) == 0) {
              uVar22 = (ulong)(bVar2 >> 1);
              uVar15 = (ulong)*(byte *)(plVar6 + 3);
              if ((*(byte *)(plVar6 + 3) & 1) != 0) goto LAB_0b5dbc49;
LAB_0b5dbc2d:
              if (uVar22 != uVar15 >> 1) goto LAB_0b5dbcb0;
            }
            else {
              uVar22 = plVar12[4];
              uVar15 = (ulong)*(byte *)(plVar6 + 3);
              if ((*(byte *)(plVar6 + 3) & 1) == 0) goto LAB_0b5dbc2d;
LAB_0b5dbc49:
              if (uVar22 != plVar6[4]) goto LAB_0b5dbcb0;
            }
            if ((bVar2 & 1) == 0) {
              lVar23 = (long)plVar12 + 0x19;
            }
            else {
              lVar23 = plVar12[5];
            }
            lVar21 = (long)plVar6 + 0x19;
            if ((uVar15 & 1) != 0) {
              lVar21 = plVar6[5];
            }
            iVar4 = bcmp(lVar23,lVar21);
            if (iVar4 == 0) {
              plVar12[6] = (long)plVar13;
              plVar6[6] = (long)(plVar12 + 2);
              bVar16 = 1;
              goto LAB_0b5dbcb9;
            }
          }
LAB_0b5dbcb0:
          plVar12[6] = 0;
        }
LAB_0b5dbcb9:
        if ((bVar16 != bVar24 & bVar24) != 0) break;
        if (bVar16 != bVar24) {
          bVar24 = 1;
        }
        plVar8 = (long *)*plVar12;
        plVar26 = plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
      goto LAB_0b5dbcfe;
    }
    uVar22 = _DAT_0f6b4c28 - 1;
    uVar15 = plVar8[1];
    if ((uVar15 & uVar22) == uVar17) {
      bVar24 = 0;
      do {
        plVar12 = plVar8;
        bVar16 = 0;
        if (uVar15 == uVar9) {
          if (plVar12[2] == lVar7) {
            bVar16 = 1;
            if (((long *)plVar12[6] == plVar13) && ((long *)plVar6[6] == plVar12 + 2))
            goto LAB_0b5dbb1a;
            bVar2 = *(byte *)(plVar12 + 3);
            if ((bVar2 & 1) == 0) {
              uVar15 = (ulong)(bVar2 >> 1);
              uVar11 = (ulong)*(byte *)(plVar6 + 3);
              if ((*(byte *)(plVar6 + 3) & 1) != 0) goto LAB_0b5dbaa2;
LAB_0b5dba7e:
              if (uVar15 != uVar11 >> 1) goto LAB_0b5dbb10;
            }
            else {
              uVar15 = plVar12[4];
              uVar11 = (ulong)*(byte *)(plVar6 + 3);
              if ((*(byte *)(plVar6 + 3) & 1) == 0) goto LAB_0b5dba7e;
LAB_0b5dbaa2:
              if (uVar15 != plVar6[4]) goto LAB_0b5dbb10;
            }
            if ((bVar2 & 1) == 0) {
              lVar23 = (long)plVar12 + 0x19;
            }
            else {
              lVar23 = plVar12[5];
            }
            lVar21 = (long)plVar6 + 0x19;
            if ((uVar11 & 1) != 0) {
              lVar21 = plVar6[5];
            }
            iVar4 = bcmp(lVar23,lVar21);
            if (iVar4 == 0) {
              plVar12[6] = (long)plVar13;
              plVar6[6] = (long)(plVar12 + 2);
              goto LAB_0b5dbb1a;
            }
          }
LAB_0b5dbb10:
          plVar12[6] = 0;
          bVar16 = 0;
        }
LAB_0b5dbb1a:
        if ((bVar16 != bVar24 & bVar24) != 0) break;
        plVar8 = (long *)*plVar12;
        plVar26 = plVar12;
        if (plVar8 == (long *)0x0) {
          uVar22 = plVar6[1];
          goto joined_r0x0b5dbdbe;
        }
        if (bVar16 != bVar24) {
          bVar24 = 1;
        }
        uVar15 = plVar8[1];
      } while ((uVar15 & uVar22) == uVar17);
      goto LAB_0b5dbcfe;
    }
    uVar22 = uVar22 & plVar6[1];
joined_r0x0b5dbd88:
    if (plVar26 == (long *)0x0) goto LAB_0b5dbd1f;
LAB_0b5dbded:
    *plVar6 = *plVar26;
    *plVar26 = (long)plVar6;
    if (*plVar6 != 0) {
      uVar9 = *(ulong *)(*plVar6 + 8);
      if (bVar1 < 2) {
        uVar9 = uVar9 & uVar14 - 1;
      }
      else if (uVar14 <= uVar9) {
        if ((uVar9 | uVar14) >> 0x20 == 0) {
          uVar9 = (uVar9 & 0xffffffff) % (uVar14 & 0xffffffff);
        }
        else {
          uVar9 = uVar9 % uVar14;
        }
      }
      if (uVar9 == uVar22) goto LAB_0b5dbe3a;
      goto LAB_0b5dbe36;
    }
  }
  else {
    uVar17 = uVar9;
    if (uVar9 < _DAT_0f6b4c28) {
LAB_0b5db9c6:
      plVar26 = *(long **)(_DAT_0f6b4c20 + uVar17 * 8);
    }
    else {
      if ((uVar9 | _DAT_0f6b4c28) >> 0x20 != 0) {
        uVar17 = uVar9 % _DAT_0f6b4c28;
        goto LAB_0b5db9c6;
      }
      uVar17 = (uVar9 & 0xffffffff) % (_DAT_0f6b4c28 & 0xffffffff);
      plVar26 = *(long **)(_DAT_0f6b4c20 + uVar17 * 8);
    }
    if (plVar26 != (long *)0x0) goto LAB_0b5db9d6;
LAB_0b5db99b:
    plVar26 = (long *)0x0;
LAB_0b5dbcfe:
    uVar22 = plVar6[1];
joined_r0x0b5dbdbe:
    if (1 < bVar1) {
      if (uVar14 <= uVar22) {
        if ((uVar22 | uVar14) >> 0x20 == 0) {
          uVar22 = (uVar22 & 0xffffffff) % (uVar14 & 0xffffffff);
          goto joined_r0x0b5dbf1f;
        }
        uVar22 = uVar22 % uVar14;
      }
      goto joined_r0x0b5dbd88;
    }
    uVar22 = uVar22 & uVar14 - 1;
joined_r0x0b5dbf1f:
    if (plVar26 != (long *)0x0) goto LAB_0b5dbded;
LAB_0b5dbd1f:
    *plVar6 = (long)_DAT_0f6b4c30;
    _DAT_0f6b4c30 = plVar6;
    *(undefined **)(lVar5 + uVar22 * 8) = &DAT_0f6b4c30;
    if (*plVar6 != 0) {
      uVar9 = *(ulong *)(*plVar6 + 8);
      if (bVar1 < 2) {
        uVar9 = uVar9 & uVar14 - 1;
      }
      else if (uVar14 <= uVar9) {
        if ((uVar9 | uVar14) >> 0x20 == 0) {
          uVar9 = (uVar9 & 0xffffffff) % (uVar14 & 0xffffffff);
        }
        else {
          uVar9 = uVar9 % uVar14;
        }
      }
LAB_0b5dbe36:
      *(long **)(lVar5 + uVar9 * 8) = plVar6;
    }
  }
LAB_0b5dbe3a:
  _DAT_0f6b4c38 = _DAT_0f6b4c38 + 1;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    func_0x0412a280(lStack_90,lStack_80 - lStack_90);
  }
  if ((uStack_b8 & 1) != 0) {
    func_0x0412a280(lStack_a8,uStack_b8 & 0xfffffffffffffffe);
  }
  if (pplStack_c8 == &plStack_e8) {
    lVar5 = 0x20;
LAB_0b5dbec8:
    (**(code **)((long)*pplStack_c8 + lVar5))();
    if (plStack_48 != alStack_68) goto LAB_0b5dbeb7;
LAB_0b5dbee3:
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (pplStack_c8 != (long **)0x0) goto LAB_0b5dbec8;
    if (plStack_48 == alStack_68) goto LAB_0b5dbee3;
LAB_0b5dbeb7:
    lVar5 = 0x28;
    if (plStack_48 == (long *)0x0) goto LAB_0b5dbeee;
  }
  (**(code **)(*plStack_48 + lVar5))();
LAB_0b5dbeee:
  func_0x0412d790(0xf6b4480);
  return plVar6 + 8;
}


