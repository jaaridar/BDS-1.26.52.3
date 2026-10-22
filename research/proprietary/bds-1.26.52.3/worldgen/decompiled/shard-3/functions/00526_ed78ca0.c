/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee78ca0 (ELF vaddr 0xed78ca0)
 * Label: caller-of-callee
 * Body:  [[0ee78ca0, 0ee78d78] [0ee78d80, 0ee78db9] [0ee78dc0, 0ee78f8b] [0ee78f90, 0ee78fee] [0ee78ff0, 0ee79302] [0ee79310, 0ee79345] [0ee79350, 0ee793bc] [0ee793c0, 0ee793d9] [0ee793e0, 0ee7967d] [0ee79680, 0ee7a081] [0ee7a090, 0ee7a2cc] [0ee7a33e, 0ee7a372]]
 * Ghidra: FUN_0ee78ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0ee78ca0(long param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 uVar22;
  uint uVar23;
  byte *pbVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  byte abStack_4a3 [3];
  long lStack_4a0;
  undefined1 uStack_491;
  undefined8 *puStack_490;
  ulong uStack_488;
  long *plStack_480;
  long lStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  ulong uStack_458;
  ulong uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long *plStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  ulong uStack_38;
  
  abStack_4a3[0] = 0;
  abStack_4a3[2] = 0;
  abStack_4a3[1] = 0;
  bVar25 = (*param_3 & 1) != 0;
  pbVar7 = param_3 + 1;
  if (bVar25) {
    pbVar7 = *(byte **)(param_3 + 0x10);
  }
  uVar10 = (ulong)(*param_3 >> 1);
  if (bVar25) {
    uVar10 = *(ulong *)(param_3 + 8);
  }
  lStack_4a0 = param_1;
  puStack_490 = param_2;
  if (uVar10 == 0) {
    uVar23 = 0;
    bVar25 = false;
  }
  else {
    if (uVar10 == 1) {
      bVar25 = false;
    }
    else {
      uVar11 = uVar10 & 0xfffffffffffffffe;
      bVar25 = false;
      pbVar1 = abStack_4a3 + 2;
      do {
        bVar5 = *pbVar7;
        pbVar24 = pbVar1;
        if (bVar5 < 0x72) {
          if (bVar5 == 0x2b) {
            bVar25 = true;
            goto LAB_0ee78d98;
          }
          if (bVar5 == 0x61) {
            bVar25 = true;
            pbVar24 = abStack_4a3 + 1;
            goto LAB_0ee78d98;
          }
        }
        else {
          if (bVar5 != 0x72) {
            if (bVar5 != 0x77) goto LAB_0ee78d9c;
            bVar25 = true;
            pbVar24 = abStack_4a3;
          }
LAB_0ee78d98:
          *pbVar24 = 1;
        }
LAB_0ee78d9c:
        bVar5 = pbVar7[1];
        pbVar24 = pbVar1;
        if (bVar5 < 0x72) {
          if (bVar5 == 0x2b) {
            bVar25 = true;
            goto LAB_0ee78d4e;
          }
          if (bVar5 == 0x61) {
            bVar25 = true;
            pbVar24 = abStack_4a3 + 1;
            goto LAB_0ee78d4e;
          }
        }
        else {
          if (bVar5 != 0x72) {
            if (bVar5 != 0x77) goto LAB_0ee78d52;
            bVar25 = true;
            pbVar24 = abStack_4a3;
          }
LAB_0ee78d4e:
          *pbVar24 = 1;
        }
LAB_0ee78d52:
        pbVar7 = pbVar7 + 2;
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    if ((uVar10 & 1) != 0) {
      bVar5 = *pbVar7;
      pbVar7 = abStack_4a3 + 2;
      if (bVar5 < 0x72) {
        if (bVar5 != 0x2b) {
          if (bVar5 != 0x61) goto LAB_0ee78dee;
          pbVar7 = abStack_4a3 + 1;
        }
LAB_0ee78de9:
        bVar25 = true;
      }
      else if (bVar5 != 0x72) {
        if (bVar5 == 0x77) {
          pbVar7 = abStack_4a3;
          goto LAB_0ee78de9;
        }
        goto LAB_0ee78dee;
      }
      *pbVar7 = 1;
    }
LAB_0ee78dee:
    uVar23 = (uint)abStack_4a3[2];
    if ((abStack_4a3[2] & 1) != 0) {
      if ((*(long *)(param_1 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lStack_4a0 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar8 = (**(code **)(**(long **)(lStack_4a0 + 0xd0) + 0x30))();
      if (lVar8 == 0) {
        return (long *)0x0;
      }
    }
    if (bVar25) {
      if ((*(long *)(lStack_4a0 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lStack_4a0 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar8 = (**(code **)(**(long **)(lStack_4a0 + 0xd0) + 0x38))();
      if (lVar8 == 0) {
        return (long *)0x0;
      }
    }
  }
  lVar8 = lStack_4a0;
  uStack_488 = CONCAT44(uStack_488._4_4_,uVar23);
  lStack_478 = lStack_4a0 + 0x58;
  func_0x0412d680();
  plVar9 = *(long **)(lVar8 + 0x40);
  if (plVar9 != (long *)0x0) {
    uVar10 = puStack_490[1];
    do {
      bVar26 = (*(byte *)(plVar9 + 2) & 1) != 0;
      lVar8 = (long)plVar9 + 0x11;
      if (bVar26) {
        lVar8 = plVar9[4];
      }
      uVar11 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
      if (bVar26) {
        uVar11 = plVar9[3];
      }
      func_0x0eee2dd0(&plStack_438,0,0x408);
      if (uVar11 < 0x400) {
        if (uVar11 != 0) {
          func_0x0eee2ee0(&plStack_438,lVar8,uVar11);
        }
        uStack_38 = uVar11;
        *(undefined1 *)((long)&plStack_438 + uVar11) = 0;
        if (uVar10 == uStack_38) goto LAB_0ee78f90;
      }
      else if (uVar10 == 0) {
LAB_0ee78f90:
        iVar6 = func_0x0eee3000(*puStack_490,&plStack_438,uVar10);
        lVar8 = lStack_4a0;
        if (iVar6 == 0) {
          if (bVar25 != false || (abStack_4a3[0] & 1) != 0) goto LAB_0ee79ce7;
          lVar12 = lStack_4a0 + 0x98;
          func_0x0412d680(lVar12);
          plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plVar13 == (long *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          plVar13[2] = (long)(plVar9 + 5);
          goto LAB_0ee797c9;
        }
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  uVar16 = *puStack_490;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x48,0);
  }
  plStack_468 = (long *)(lStack_4a0 + 0x30);
  uStack_428 = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plStack_438 = plVar9;
  plStack_430 = plStack_468;
  uVar10 = strlen(uVar16);
  if (0xfffffffffffffff7 < uVar10) {
    func_0x04882e30();
LAB_0ee7a2c1:
    func_0x04882eb0();
    goto LAB_0ee7a2c6;
  }
  if (uVar10 < 0x17) {
    *(char *)(plVar9 + 2) = (char)uVar10 * '\x02';
    lVar8 = (long)plVar9 + 0x11;
    if (uVar10 != 0) goto LAB_0ee790ee;
  }
  else {
    uVar11 = 0x1a;
    if ((uVar10 | 7) != 0x17) {
      uVar11 = (uVar10 | 7) + 1;
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
    if (lVar8 == 0) {
      FUN_0eec74c0(uVar11,0);
    }
    plVar9[4] = lVar8;
    plVar9[2] = uVar11 | 1;
    plVar9[3] = uVar10;
LAB_0ee790ee:
    func_0x0eee2ee0(lVar8,uVar16,uVar10);
  }
  *(undefined1 *)(lVar8 + uVar10) = 0;
  *(undefined8 *)((long)plVar9 + 0x34) = 0;
  *(undefined8 *)((long)plVar9 + 0x3c) = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  uStack_428 = CONCAT71(uStack_428._1_7_,1);
  bVar26 = (*(byte *)(plVar9 + 2) & 1) != 0;
  lVar8 = (long)plVar9 + 0x11;
  if (bVar26) {
    lVar8 = plVar9[4];
  }
  uVar10 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
  if (bVar26) {
    uVar10 = plVar9[3];
  }
  lVar8 = FUN_04883620(&uStack_491,lVar8,uVar10);
  plStack_470 = plStack_438;
  plVar9[1] = lVar8;
  plStack_480 = (long *)((long)plStack_438 + 0x11);
  bVar26 = (*(byte *)(plStack_438 + 2) & 1) == 0;
  plVar9 = (long *)plStack_438[4];
  if (bVar26) {
    plVar9 = plStack_480;
  }
  uVar10 = (ulong)(*(byte *)(plStack_438 + 2) >> 1);
  if (!bVar26) {
    uVar10 = plStack_438[3];
  }
  uVar11 = FUN_04883620(&uStack_491,plVar9,uVar10);
  plStack_460 = (long *)(lStack_4a0 + 0x40);
  plStack_470[1] = uVar11;
  uVar10 = *(ulong *)(lStack_4a0 + 0x38);
  if (uVar10 != 0) {
    uVar19 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
    uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar19 >> 0x38 < 2) {
      uVar18 = uVar10 - 1 & uVar11;
    }
    else {
      uVar18 = uVar11;
      if (uVar10 <= uVar11) {
        if ((uVar11 | uVar10) >> 0x20 == 0) {
          uVar18 = (uVar11 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar18 = uVar11 % uVar10;
        }
      }
    }
    puVar2 = *(undefined8 **)(*plStack_468 + uVar18 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar2, plVar9 != (long *)0x0)) {
      bVar5 = *(byte *)(plStack_470 + 2);
      uStack_458 = CONCAT71(uStack_458._1_7_,bVar5) & 0xffffffffffffff01;
      if ((bVar5 & 1) == 0) {
        uVar20 = (ulong)(bVar5 >> 1);
      }
      else {
        uVar20 = plStack_470[3];
        plStack_480 = (long *)plStack_470[4];
      }
      if ((byte)(uVar19 >> 0x38) < 2) {
        uVar19 = uVar10 - 1;
        uStack_450 = uVar19;
        do {
          if (plVar9[1] == uVar11) {
            bVar5 = *(byte *)(plVar9 + 2);
            if ((bVar5 & 1) == 0) {
              uVar17 = (ulong)(bVar5 >> 1);
            }
            else {
              uVar17 = plVar9[3];
            }
            if (uVar17 == uVar20) {
              if ((bVar5 & 1) == 0) {
                lVar8 = (long)plVar9 + 0x11;
              }
              else {
                lVar8 = plVar9[4];
              }
              iVar6 = func_0x0eee3000(lVar8,plStack_480,uVar20);
              uVar19 = uStack_450;
              if (iVar6 == 0) goto LAB_0ee79408;
            }
          }
          else if ((plVar9[1] & uVar19) != uVar18) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar9[1];
          if (uVar19 == uVar11) {
            bVar5 = *(byte *)(plVar9 + 2);
            if ((bVar5 & 1) == 0) {
              uVar19 = (ulong)(bVar5 >> 1);
            }
            else {
              uVar19 = plVar9[3];
            }
            if (uVar19 == uVar20) {
              if ((bVar5 & 1) == 0) {
                lVar8 = (long)plVar9 + 0x11;
              }
              else {
                lVar8 = plVar9[4];
              }
              iVar6 = func_0x0eee3000(lVar8,plStack_480,uVar20);
              if (iVar6 == 0) goto LAB_0ee79408;
            }
          }
          else {
            if (uVar10 <= uVar19) {
              if ((uVar19 | uVar10) >> 0x20 == 0) {
                uVar19 = (uVar19 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar19 = uVar19 % uVar10;
              }
            }
            if (uVar19 != uVar18) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  fVar27 = (float)(*(long *)(lStack_4a0 + 0x48) + 1);
  if ((long)uVar10 < 0) {
    fVar29 = (float)uVar10;
    fVar28 = *(float *)(lStack_4a0 + 0x50);
    if (uVar10 == 0) goto LAB_0ee7956d;
LAB_0ee794d8:
    if (fVar29 * fVar28 < fVar27) goto LAB_0ee7956d;
  }
  else {
    fVar29 = (float)(long)uVar10;
    fVar28 = *(float *)(lStack_4a0 + 0x50);
    if (uVar10 != 0) goto LAB_0ee794d8;
LAB_0ee7956d:
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 * 2;
    fVar27 = (float)func_0x0eee3ab0(fVar27 / fVar28);
    uVar19 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
    if (uVar19 < uVar11) {
      uVar19 = uVar11;
    }
    uVar11 = 2;
    if ((uVar19 == 1) || (uVar11 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
      bVar26 = uVar11 < uVar10;
      uVar19 = uVar11;
      if (uVar11 <= uVar10) goto LAB_0ee79704;
    }
    else {
      uVar11 = func_0x0412c3f0();
      uVar10 = *(ulong *)(lStack_4a0 + 0x38);
      bVar26 = uVar11 < uVar10;
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
LAB_0ee79704:
        if (bVar26) {
          fVar27 = (float)func_0x0eee3ab0((float)*(ulong *)(lStack_4a0 + 0x48) /
                                          *(float *)(lStack_4a0 + 0x50));
          uVar11 = (long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27;
          if ((uVar10 < 3) ||
             (uVar18 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
             uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
             1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar11 = func_0x0412c3f0(uVar11);
          }
          else if (1 < uVar11) {
            lVar8 = 0x3f;
            if (uVar11 - 1 != 0) {
              for (; uVar11 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar11 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
          }
          lVar8 = lStack_4a0;
          if (uVar11 < uVar19) {
            uVar11 = uVar19;
          }
          if (uVar11 < uVar10) {
            if (uVar11 != 0) goto LAB_0ee795e5;
            lVar12 = *plStack_468;
            *plStack_468 = 0;
            if (lVar12 != 0) {
              func_0x0412a280(lVar12,*(long *)(lStack_4a0 + 0x38) << 3);
            }
            *(undefined8 *)(lVar8 + 0x38) = 0;
          }
        }
        goto LAB_0ee794e5;
      }
    }
LAB_0ee795e5:
    if (uVar11 >> 0x3d != 0) goto LAB_0ee7a2c1;
    lVar8 = uVar11 * 8;
    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
    if (lVar12 == 0) {
      FUN_0eec74c0(lVar8,0);
    }
    lVar21 = lStack_4a0;
    lVar14 = *plStack_468;
    *plStack_468 = lVar12;
    if (lVar14 != 0) {
      func_0x0412a280(lVar14,*(long *)(lStack_4a0 + 0x38) << 3);
      lVar12 = *(long *)(lVar21 + 0x30);
    }
    *(ulong *)(lVar21 + 0x38) = uVar11;
    func_0x0eee2dd0(lVar12,0,lVar8);
    plVar9 = *(long **)(lVar21 + 0x40);
    if (plVar9 != (long *)0x0) {
      uVar19 = plVar9[1];
      uVar10 = uVar11 - 1;
      if ((uVar11 & uVar10) == 0) {
        *(long **)(lVar12 + (uVar19 & uVar10) * 8) = plStack_460;
        uVar11 = uVar19 & uVar10;
        while (plVar13 = plVar9, plVar9 = (long *)*plVar13, plVar9 != (long *)0x0) {
          uVar19 = plVar9[1] & uVar10;
          if (uVar19 != uVar11) {
            if (*(long *)(lVar12 + uVar19 * 8) == 0) {
              *(long **)(lVar12 + uVar19 * 8) = plVar13;
              uVar11 = uVar19;
            }
            else {
              *plVar13 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar12 + uVar19 * 8);
              **(long **)(lVar12 + uVar19 * 8) = (long)plVar9;
              plVar9 = plVar13;
            }
          }
        }
      }
      else {
        if (uVar11 <= uVar19) {
          if ((uVar19 | uVar11) >> 0x20 == 0) {
            uVar19 = (uVar19 & 0xffffffff) % (uVar11 & 0xffffffff);
          }
          else {
            uVar19 = uVar19 % uVar11;
          }
        }
        *(long **)(lVar12 + uVar19 * 8) = plStack_460;
        plVar13 = (long *)*plVar9;
        while (plVar13 != (long *)0x0) {
          uVar10 = plVar13[1];
          if (uVar11 <= uVar10) {
            if ((uVar10 | uVar11) >> 0x20 == 0) {
              uVar10 = (uVar10 & 0xffffffff) % (uVar11 & 0xffffffff);
            }
            else {
              uVar10 = uVar10 % uVar11;
            }
          }
          if (uVar10 != uVar19) {
            if (*(long *)(lVar12 + uVar10 * 8) == 0) {
              *(long **)(lVar12 + uVar10 * 8) = plVar9;
              uVar19 = uVar10;
            }
            else {
              *plVar9 = *plVar13;
              *plVar13 = **(long **)(lVar12 + uVar10 * 8);
              **(undefined8 **)(lVar12 + uVar10 * 8) = plVar13;
              plVar13 = plVar9;
            }
          }
          plVar9 = plVar13;
          plVar13 = (long *)*plVar9;
        }
      }
    }
  }
LAB_0ee794e5:
  uVar10 = *(ulong *)(lStack_4a0 + 0x38);
  uVar11 = plStack_470[1];
  uVar19 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
  uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar19 >> 0x38 < 2) {
    uVar11 = uVar11 & uVar10 - 1;
  }
  else if (uVar10 <= uVar11) {
    if ((uVar11 | uVar10) >> 0x20 == 0) {
      uVar11 = (uVar11 & 0xffffffff) % (uVar10 & 0xffffffff);
    }
    else {
      uVar11 = uVar11 % uVar10;
    }
  }
  uVar22 = (undefined1)uStack_488;
  lVar8 = *plStack_468;
  plVar9 = *(long **)(lVar8 + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    *plStack_470 = *plStack_460;
    *plStack_460 = (long)plStack_470;
    *(long **)(lVar8 + uVar11 * 8) = plStack_460;
    if (*plStack_470 != 0) {
      uVar11 = *(ulong *)(*plStack_470 + 8);
      if ((byte)(uVar19 >> 0x38) < 2) {
        *(long **)(lVar8 + (uVar11 & uVar10 - 1) * 8) = plStack_470;
      }
      else {
        if (uVar10 <= uVar11) {
          if ((uVar11 | uVar10) >> 0x20 == 0) {
            *(long **)(lVar8 + ((uVar11 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) = plStack_470;
            goto LAB_0ee7974d;
          }
          uVar11 = uVar11 % uVar10;
        }
        *(long **)(lVar8 + uVar11 * 8) = plStack_470;
      }
    }
  }
  else {
    *plStack_470 = *plVar9;
    *plVar9 = (long)plStack_470;
  }
LAB_0ee7974d:
  *(long *)(lStack_4a0 + 0x48) = *(long *)(lStack_4a0 + 0x48) + 1;
  plVar9 = plStack_470;
LAB_0ee79756:
  lVar8 = lStack_4a0;
  plStack_480 = plVar9 + 5;
  *(undefined1 *)(plVar9 + 8) = uVar22;
  *(bool *)((long)plVar9 + 0x41) = bVar25;
  *(byte *)((long)plVar9 + 0x42) = abStack_4a3[1];
  if (abStack_4a3[0] != 0) {
LAB_0ee79780:
    lVar12 = lVar8 + 0x98;
    func_0x0412d680(lVar12);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar13 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    plVar13[2] = (long)plStack_480;
LAB_0ee797c9:
    plVar9 = plVar13 + 2;
    plVar13[3] = 0;
    plVar13[1] = lVar8 + 0x80;
    lVar14 = *(long *)(lVar8 + 0x80);
    *plVar13 = lVar14;
    *(long **)(lVar14 + 8) = plVar13;
    *(long **)(lVar8 + 0x80) = plVar13;
    *(long *)(lVar8 + 0x90) = *(long *)(lVar8 + 0x90) + 1;
    func_0x0412d6b0(lVar12);
    lVar8 = lStack_478;
    goto LAB_0ee79cef;
  }
  if ((*(long *)(lStack_4a0 + 0xc0) == 0) &&
     (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(lVar8 + 0xc0) == '\0') &&
     (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar13 = (long *)(**(code **)(**(long **)(lVar8 + 0xd0) + 0x30))();
  if (plVar13 != (long *)0x0) {
    if ((*(long *)(lVar8 + 0xc0) == 0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(lVar8 + 0xc0) == '\0') &&
       (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_448 = *(undefined4 *)puStack_490;
    uStack_444 = *(undefined4 *)((long)puStack_490 + 4);
    uStack_440 = *(undefined4 *)(puStack_490 + 1);
    uStack_43c = *(undefined4 *)((long)puStack_490 + 0xc);
    plStack_438 = (long *)CONCAT44(plStack_438._4_4_,0x627204);
    puStack_490 = (undefined8 *)
                  (**(code **)(**(long **)(lVar8 + 0xd0) + 0x10))
                            (*(long **)(lVar8 + 0xd0),&uStack_448,&plStack_438);
    if (((ulong)plStack_438 & 1) != 0) {
      func_0x0412a280(uStack_428,(ulong)plStack_438 & 0xfffffffffffffffe);
    }
    if (puStack_490 != (undefined8 *)0x0) {
      if ((*(long *)(lVar8 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar8 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(lVar8 + 0xd0) + 0x20))(*(long **)(lVar8 + 0xd0),puStack_490,0,0);
      if ((*(long *)(lVar8 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar8 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(lVar8 + 0xd0) + 0x20))(*(long **)(lVar8 + 0xd0),puStack_490,0,2);
      if ((*(long *)(lVar8 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar8 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar10 = (**(code **)(**(long **)(lVar8 + 0xd0) + 0x28))(*(long **)(lVar8 + 0xd0),puStack_490)
      ;
      if ((*(long *)(lVar8 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar8 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(lVar8 + 0xd0) + 0x20))(*(long **)(lVar8 + 0xd0),puStack_490,0,0);
      lVar12 = plVar9[5];
      lVar14 = plVar9[6];
      uVar11 = lVar14 - lVar12;
      uVar19 = uVar10 - uVar11;
      uStack_488 = uVar10;
      if (uVar10 < uVar11 || uVar19 == 0) {
        if (uVar10 < uVar11) {
          plVar9[6] = lVar12 + uVar10;
        }
      }
      else if ((ulong)(plVar9[7] - lVar14) < uVar19) {
        plStack_470 = plVar13;
        if ((long)uVar10 < 0) {
LAB_0ee7a2c6:
          uVar16 = func_0x0525e090();
          func_0x0412d6b0(lStack_478);
          uVar16 = func_0x0eee2d70(uVar16);
          func_0x0eea9ff0(&plStack_438);
          func_0x0412d6b0(lStack_478);
          func_0x0eee2d70(uVar16);
          pcVar3 = (code *)swi(3);
          plVar9 = (long *)(*pcVar3)();
          return plVar9;
        }
        uStack_458 = plVar9[7] - lVar12;
        uVar18 = uStack_458 * 2;
        if (uStack_458 * 2 <= uVar10) {
          uVar18 = uVar10;
        }
        uVar20 = 0x7fffffffffffffff;
        if (uStack_458 < 0x3fffffffffffffff) {
          uVar20 = uVar18;
        }
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20);
        if (lVar14 == 0) {
          FUN_0eec74c0(uVar20,0);
        }
        uVar10 = uStack_488;
        uStack_450 = uVar20 + lVar14;
        lVar21 = lVar14 + uStack_488;
        func_0x0eee2dd0(uVar11 + lVar14,0,uVar19);
        func_0x0eee2f00(lVar14,lVar12,uVar11);
        plVar13 = plStack_470;
        lVar8 = lStack_4a0;
        plVar9[5] = lVar14;
        plVar9[6] = lVar21;
        plVar9[7] = uStack_450;
        if (lVar12 != 0) {
          func_0x0412a280(lVar12,uStack_458);
        }
      }
      else {
        func_0x0eee2dd0(lVar14,0,uVar19);
        plVar9[6] = lVar14 + uVar19;
        lVar8 = lStack_4a0;
        uVar10 = uStack_488;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13,*plStack_480,1,uVar10,puStack_490);
      if ((*(long *)(lVar8 + 0xc0) == 0) &&
         (cVar4 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar8 + 0xc0) == '\0') &&
         (cVar4 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
         cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(lVar8 + 0xd0) + 0x18))(*(long **)(lVar8 + 0xd0),puStack_490);
      plVar13 = (long *)0xf7b9008;
      if (*(long **)(lVar8 + 0x28) != (long *)0x0) {
        plVar13 = *(long **)(lVar8 + 0x28);
      }
      cVar4 = (**(code **)(*plVar13 + 0x10))(plVar13,plStack_480);
      if (cVar4 != '\0') goto LAB_0ee79780;
      uVar10 = *(ulong *)(lVar8 + 0x38);
      uVar11 = plVar9[1];
      uVar19 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
      uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar19 >> 0x38 < 2) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        if ((uVar11 | uVar10) >> 0x20 == 0) {
          uVar11 = (uVar11 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar11 = uVar11 % uVar10;
        }
      }
      lVar12 = *plStack_468;
      plVar13 = *(long **)(lVar12 + uVar11 * 8);
      do {
        plVar15 = plVar13;
        plVar13 = (long *)*plVar15;
      } while ((long *)*plVar15 != plVar9);
      bVar5 = (byte)(uVar19 >> 0x38);
      if (plVar15 == plStack_460) {
LAB_0ee7a16b:
        if (*plVar9 != 0) {
          uVar19 = *(ulong *)(*plVar9 + 8);
          if (bVar5 < 2) {
            uVar19 = uVar19 & uVar10 - 1;
          }
          else if (uVar10 <= uVar19) {
            if ((uVar19 | uVar10) >> 0x20 == 0) {
              uVar19 = (uVar19 & 0xffffffff) % (uVar10 & 0xffffffff);
            }
            else {
              uVar19 = uVar19 % uVar10;
            }
          }
          if (uVar19 == uVar11) goto LAB_0ee7a1b4;
        }
        *(undefined8 *)(lVar12 + uVar11 * 8) = 0;
      }
      else {
        uVar19 = plVar15[1];
        if (bVar5 < 2) {
          uVar19 = uVar19 & uVar10 - 1;
        }
        else if (uVar10 <= uVar19) {
          if ((uVar19 | uVar10) >> 0x20 == 0) {
            uVar19 = (uVar19 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          else {
            uVar19 = uVar19 % uVar10;
          }
        }
        if (uVar19 != uVar11) goto LAB_0ee7a16b;
      }
LAB_0ee7a1b4:
      lVar14 = *plVar9;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        uVar19 = *(ulong *)(lVar14 + 8);
        if (bVar5 < 2) {
          uVar19 = uVar19 & uVar10 - 1;
        }
        else if (uVar10 <= uVar19) {
          if ((uVar19 | uVar10) >> 0x20 == 0) {
            uVar19 = (uVar19 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          else {
            uVar19 = uVar19 % uVar10;
          }
        }
        if (uVar19 != uVar11) {
          *(long **)(lVar12 + uVar19 * 8) = plVar15;
          lVar14 = *plVar9;
        }
      }
      *plVar15 = lVar14;
      *plVar9 = 0;
      *(long *)(lVar8 + 0x48) = *(long *)(lVar8 + 0x48) + -1;
      lVar8 = plVar9[5];
      if (lVar8 != 0) {
        plVar9[6] = lVar8;
        func_0x0412a280(lVar8,plVar9[7] - lVar8);
      }
      lVar8 = lStack_478;
      if ((*(byte *)(plVar9 + 2) & 1) != 0) {
        func_0x0412a280(plVar9[4],plVar9[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar9,0x48);
      plVar9 = (long *)0x0;
      goto LAB_0ee79cef;
    }
  }
LAB_0ee79ce7:
  plVar9 = (long *)0x0;
  lVar8 = lStack_478;
LAB_0ee79cef:
  func_0x0412d6b0(lVar8);
  return plVar9;
LAB_0ee79408:
  plVar13 = plStack_470;
  uVar22 = (undefined1)uStack_488;
  if (plStack_470 != (long *)0x0) {
    lVar8 = plStack_470[5];
    bVar5 = (byte)uStack_458;
    if (lVar8 != 0) {
      plStack_470[6] = lVar8;
      func_0x0412a280(lVar8,plStack_470[7] - lVar8);
      bVar5 = *(byte *)(plVar13 + 2) & 1;
    }
    if (bVar5 != 0) {
      func_0x0412a280(plVar13[4],plVar13[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar13,0x48);
  }
  goto LAB_0ee79756;
}


