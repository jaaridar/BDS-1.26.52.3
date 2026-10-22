/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x627c910 (ELF vaddr 0x617c910)
 * Label: caller-of-callee
 * Body:  [[0627c910, 0627ce2b] [0627ce30, 0627ce90] [0627cea0, 0627cf6b] [0627cf70, 0627cfa9] [0627cfb0, 0627d130] [0627d140, 0627d3d0] [0627d3e0, 0627d597] [0627d5a0, 0627d7de] [0627d925, 0627daa8]]
 * Ghidra: FUN_0627c910
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0627c910(undefined4 *param_1,long param_2,byte *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  char cVar24;
  char cVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  bool bVar29;
  byte *pbStack_5a8;
  byte *pbStack_598;
  undefined8 uStack_588;
  long *plStack_580;
  long lStack_578;
  undefined4 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_540;
  undefined *puStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long *plStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  byte bStack_4e0;
  byte *pbStack_4d8;
  byte *pbStack_4d0;
  long lStack_4c8;
  byte bStack_4c0;
  undefined7 uStack_4bf;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  byte *pbStack_4a8;
  byte *pbStack_4a0;
  byte *pbStack_498;
  ulong uStack_490;
  long lStack_488;
  byte *pbStack_480;
  byte *pbStack_478;
  undefined4 *puStack_470;
  byte *pbStack_468;
  ulong uStack_460;
  byte *pbStack_458;
  ulong uStack_450;
  undefined **ppuStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  byte *pbStack_420;
  undefined **ppuStack_418;
  undefined8 uStack_38;
  
  pbStack_5a8 = (byte *)CONCAT44(pbStack_5a8._4_4_,param_5);
  bVar29 = (*param_3 & 1) == 0;
  pbVar28 = *(byte **)(param_3 + 0x10);
  if (bVar29) {
    pbVar28 = param_3 + 1;
  }
  uVar18 = (ulong)(*param_3 >> 1);
  if (!bVar29) {
    uVar18 = *(ulong *)(param_3 + 8);
  }
  uVar8 = uVar18;
  puStack_470 = param_1;
  if (uVar18 == 0) {
LAB_0627c9b4:
    uStack_550 = (ulong)uStack_550._1_7_ << 8;
LAB_0627c9be:
    lVar9 = (long)&uStack_550 + 1;
    uVar18 = 0;
LAB_0627c9c1:
    *(undefined1 *)(lVar9 + uVar18) = 0;
    bVar29 = (*param_3 & 1) != 0;
    pbVar28 = param_3 + 1;
    if (bVar29) {
      pbVar28 = *(byte **)(param_3 + 0x10);
    }
    uVar18 = (ulong)(*param_3 >> 1);
    if (bVar29) {
      uVar18 = *(ulong *)(param_3 + 8);
    }
    if (uVar18 == 0) {
      uStack_568 = (ulong)uStack_568._1_7_ << 8;
      lVar9 = (long)&uStack_568 + 1;
      uVar18 = 0;
    }
    else {
      uVar8 = 0;
      pbVar11 = pbVar28;
      do {
        uVar13 = uVar8;
        if (uVar18 == uVar13) goto LAB_0627ca2c;
        pbVar20 = pbVar11 + -1;
        uVar8 = uVar13 + 1;
        pbVar1 = pbVar11 + (uVar18 - 1);
        pbVar11 = pbVar20;
      } while (*pbVar1 != 0x3a);
      if (uVar18 + 1 != uVar8) {
        if (uVar18 <= uVar18 - uVar8) goto LAB_0627d7bf;
        pbVar28 = pbVar20 + uVar18 + 1;
        uVar18 = uVar13;
      }
LAB_0627ca2c:
      if (0xfffffffffffffff7 < uVar18) goto LAB_0627d75c;
      if (uVar18 < 0x17) {
        uStack_568 = CONCAT71(uStack_568._1_7_,(char)uVar18 * '\x02');
        lVar9 = (long)&uStack_568 + 1;
        if (uVar18 == 0) {
          uVar18 = 0;
          goto LAB_0627caee;
        }
      }
      else {
        uVar8 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          uVar8 = (uVar18 | 7) + 1;
        }
        lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
        if (lVar9 == 0) {
          func_0x0eec74c0(uVar8,0);
        }
        uStack_568 = uVar8 | 1;
        uStack_560 = uVar18;
        lStack_558 = lVar9;
      }
      func_0x0eee2ee0(lVar9,pbVar28,uVar18);
    }
LAB_0627caee:
    *(undefined1 *)(lVar9 + uVar18) = 0;
    func_0x0627ba40(&bStack_4c0,param_2,param_3,param_4);
    uVar16 = *(undefined8 *)(param_2 + 0x50);
    pbVar28 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x100);
    if (pbVar28 == (byte *)0x0) {
      func_0x0eec74c0(0x100,0);
    }
    pbVar28[8] = 0;
    pbVar28[9] = 0;
    pbVar28[10] = 0;
    pbVar28[0xb] = 0;
    pbVar28[0xc] = 0;
    pbVar28[0xd] = 0;
    pbVar28[0xe] = 0;
    pbVar28[0xf] = 0;
    pbVar28[0x10] = 0;
    pbVar28[0x11] = 0;
    pbVar28[0x12] = 0;
    pbVar28[0x13] = 0;
    pbVar28[0x14] = 0;
    pbVar28[0x15] = 0;
    pbVar28[0x16] = 0;
    pbVar28[0x17] = 0;
    *(undefined **)pbVar28 = &UNK_0f02d2f8;
    pbVar28[0x18] = 0;
    pbVar28[0x19] = 0;
    pbVar28[0x1a] = 0;
    pbVar28[0x1b] = 0;
    pbVar28[0x1c] = 0;
    pbVar28[0x1d] = 0;
    pbVar28[0x1e] = 0;
    pbVar28[0x1f] = 0;
    pbVar28[0x20] = 0;
    pbVar28[0x21] = 0;
    pbVar28[0x22] = 0;
    pbVar28[0x23] = 0;
    pbVar28[0x24] = 0;
    pbVar28[0x25] = 0;
    pbVar28[0x26] = 0;
    pbVar28[0x27] = 0;
    *(undefined4 *)(pbVar28 + 0x28) = param_5;
    *(undefined4 *)(pbVar28 + 0x2c) = param_4;
    pbStack_478 = pbVar28 + 0x30;
    if ((uStack_550 & 1) == 0) {
      *(long *)(pbVar28 + 0x40) = lStack_540;
      *(undefined4 *)pbStack_478 = (undefined4)uStack_550;
      *(undefined4 *)(pbVar28 + 0x34) = uStack_550._4_4_;
      *(undefined4 *)(pbVar28 + 0x38) = (undefined4)uStack_548;
      *(undefined4 *)(pbVar28 + 0x3c) = uStack_548._4_4_;
    }
    else {
      func_0x0412e5e0(pbStack_478,lStack_540,uStack_548);
    }
    pbStack_480 = pbVar28 + 0x48;
    if ((uStack_568 & 1) == 0) {
      *(long *)(pbVar28 + 0x58) = lStack_558;
      *(undefined4 *)pbStack_480 = (undefined4)uStack_568;
      *(undefined4 *)(pbVar28 + 0x4c) = uStack_568._4_4_;
      *(undefined4 *)(pbVar28 + 0x50) = (undefined4)uStack_560;
      *(undefined4 *)(pbVar28 + 0x54) = uStack_560._4_4_;
    }
    else {
      func_0x0412e5e0(pbStack_480,lStack_558,uStack_560);
    }
    pbStack_498 = pbVar28 + 0x60;
    if ((bStack_4c0 & 1) == 0) {
      *(undefined8 *)(pbVar28 + 0x70) = uStack_4b0;
      *(ulong *)pbStack_498 = CONCAT71(uStack_4bf,bStack_4c0);
      *(undefined8 *)(pbVar28 + 0x68) = uStack_4b8;
    }
    else {
      func_0x0412e5e0(pbStack_498,uStack_4b0,uStack_4b8);
    }
    pbStack_598 = pbVar28 + 0x18;
    *(int *)(pbVar28 + 0x78) = param_6;
    pbVar28[0x80] = 0;
    pbVar28[0x81] = 0;
    pbVar28[0x82] = 0;
    pbVar28[0x83] = 0;
    pbVar28[0x84] = 0;
    pbVar28[0x85] = 0;
    pbVar28[0x86] = 0;
    pbVar28[0x87] = 0;
    pbVar28[0x88] = 0;
    pbVar28[0x89] = 0;
    pbVar28[0x8a] = 0;
    pbVar28[0x8b] = 0;
    pbVar28[0x8c] = 0;
    pbVar28[0x8d] = 0;
    pbVar28[0x8e] = 0;
    pbVar28[0x8f] = 0;
    pbVar28[0x90] = 0;
    pbVar28[0x91] = 0;
    pbVar28[0x92] = 0;
    pbVar28[0x93] = 0;
    pbVar28[0x94] = 0;
    pbVar28[0x95] = 0;
    pbVar28[0x96] = 0;
    pbVar28[0x97] = 0;
    pbVar28[0x98] = 0;
    pbVar28[0x99] = 0;
    pbVar28[0x9a] = 0;
    pbVar28[0x9b] = 0;
    pbVar28[0x9c] = 0;
    pbVar28[0x9d] = 0;
    pbVar28[0x9e] = 0;
    pbVar28[0x9f] = 0;
    pbVar28[0xa0] = 0;
    pbVar28[0xa1] = 0;
    pbVar28[0xa2] = 0x80;
    pbVar28[0xa3] = 0x3f;
    pbVar28[0xa8] = 0;
    pbVar28[0xa9] = 0;
    pbVar28[0xaa] = 0;
    pbVar28[0xab] = 0;
    pbVar28[0xac] = 0;
    pbVar28[0xad] = 0;
    pbVar28[0xae] = 0;
    pbVar28[0xaf] = 0;
    pbVar28[0xb0] = 0;
    pbVar28[0xb1] = 0;
    pbVar28[0xb2] = 0;
    pbVar28[0xb3] = 0;
    pbVar28[0xb4] = 0;
    pbVar28[0xb5] = 0;
    pbVar28[0xb6] = 0;
    pbVar28[0xb7] = 0;
    pbVar28[0xb8] = 0;
    pbVar28[0xb9] = 0;
    pbVar28[0xba] = 0;
    pbVar28[0xbb] = 0;
    pbVar28[0xbc] = 0;
    pbVar28[0xbd] = 0;
    pbVar28[0xbe] = 0;
    pbVar28[0xbf] = 0;
    pbVar28[0xc0] = 0;
    pbVar28[0xc1] = 0;
    pbVar28[0xc2] = 0;
    pbVar28[0xc3] = 0;
    pbVar28[0xc4] = 0;
    pbVar28[0xc5] = 0;
    pbVar28[0xc6] = 0;
    pbVar28[199] = 0;
    pbVar28[200] = 0;
    pbVar28[0xc9] = 0;
    pbVar28[0xca] = 0x80;
    pbVar28[0xcb] = 0x3f;
    *(undefined8 *)(pbVar28 + 0xd0) = uVar16;
    *(byte **)(pbVar28 + 0xe0) = pbVar28 + 0xe0;
    *(byte **)(pbVar28 + 0xe8) = pbVar28 + 0xe0;
    pbVar28[0xf0] = 0;
    pbVar28[0xf1] = 0;
    pbVar28[0xf2] = 0;
    pbVar28[0xf3] = 0;
    *(undefined **)(pbVar28 + 0xd8) = &UNK_0f024398;
    *(undefined **)(pbVar28 + 0xf8) = &UNK_0f0243c8;
    pbStack_5a8 = pbVar28;
    if (param_6 != 1) {
      pbStack_4a8 = pbVar28 + 0x80;
      pbStack_4a0 = pbVar28 + 0xa8;
      pbStack_4d8 = (byte *)0x0;
      pbStack_4d0 = (byte *)0x0;
      lStack_4c8 = 0;
      if (DAT_0f7b8fb8 == '\0') goto LAB_0627d761;
LAB_0627cce4:
      bVar29 = (pbVar28[0x60] & 1) != 0;
      uStack_588 = pbVar28 + 0x61;
      if (bVar29) {
        uStack_588 = *(byte **)(pbVar28 + 0x70);
      }
      plStack_580 = (long *)(ulong)(pbVar28[0x60] >> 1);
      if (bVar29) {
        plStack_580 = (long *)*(ulong *)(pbVar28 + 0x68);
      }
      func_0x049151c0(&puStack_438,&uStack_588,1,0x2f);
      uStack_440 = uStack_38;
      ppuStack_448 = &puStack_438;
      (**(code **)(_DAT_0f7b8f98 + 0xb8))(&uStack_520,&DAT_0f7b8f98,&pbStack_4d8,&ppuStack_448);
      uStack_588 = (byte *)0x9bdd11e501ecf1bd;
      plStack_580 = (long *)&UNK_0140f690;
      lStack_578 = 1;
      uStack_570 = 199;
      if (bStack_4e0 == 0) {
        puStack_538 = (undefined *)0x0;
        plStack_530 = (long *)0x0;
        uStack_528 = 0;
        FUN_0eedeb80(2,0x2d,&uStack_520,&puStack_538);
        if (((ulong)puStack_538 & 1) != 0) {
          func_0x0412a280(uStack_528,(ulong)puStack_538 & 0xfffffffffffffffe);
        }
      }
      pbVar11 = pbStack_4d0;
      lVar9 = lStack_4f8;
      if ((bStack_4e0 & 1) == 0) {
        if (lStack_4f8 != 0) {
          while (lVar9 != lStack_4f0) {
            func_0x048b3e80(lStack_4f0 + -0x40);
            lStack_4f0 = lStack_4f0 + -0x40;
          }
          lStack_4f0 = lVar9;
          func_0x0412a280(lStack_4f8,lStack_4e8 - lStack_4f8);
        }
        lVar14 = lStack_510;
        lVar9 = lStack_508;
        if (lStack_510 != 0) {
          for (; lVar14 != lVar9; lVar9 = lVar9 + -0x50) {
            if ((*(char *)(lVar9 + -8) == '\x01') && ((*(byte *)(lVar9 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar9 + -0x20),
                              *(ulong *)(lVar9 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_508 = lVar14;
          func_0x0412a280(lStack_510,lStack_500 - lStack_510);
        }
      }
      else {
        pbVar20 = pbStack_4d8;
        if (pbStack_4d8 != pbStack_4d0) {
          do {
            pbStack_458 = *(byte **)(pbVar20 + 0x10);
            uStack_450 = *(ulong *)(pbVar20 + 8);
            if ((*pbVar20 & 1) == 0) {
              pbStack_458 = pbVar20 + 1;
              uStack_450 = (ulong)(*pbVar20 >> 1);
            }
            func_0x06285930(&uStack_520,&pbStack_458);
            lVar9 = lStack_510;
            uVar18 = uStack_520;
            plVar10 = plStack_518;
            if ((uStack_520 & 1) == 0) {
              plVar10 = (long *)(uStack_520 >> 1 & 0x7f);
            }
            puStack_538 = &UNK_0128cba6;
            plStack_530 = (long *)0x4;
            func_0x048ad670(&uStack_588,&puStack_538,1,0x2f);
            if ((uVar18 & 1) == 0) {
              lVar9 = (long)&uStack_520 + 1;
            }
            plVar17 = (long *)((ulong)uStack_588 >> 1 & 0x7f);
            lVar14 = (long)&uStack_588 + 1;
            if (((ulong)uStack_588 & 1) != 0) {
              plVar17 = plStack_580;
              lVar14 = lStack_578;
            }
            plVar22 = plVar10;
            if (plVar17 < plVar10) {
              plVar22 = plVar17;
            }
            plVar23 = (long *)0x0;
            do {
              if (plVar22 == plVar23) {
                bVar29 = plVar10 == plVar17;
                goto joined_r0x0627cf7d;
              }
              cVar2 = *(char *)(lVar9 + (long)plVar23);
              cVar24 = cVar2 + ' ';
              if (0x19 < (byte)(cVar2 + 0xbfU)) {
                cVar24 = cVar2;
              }
              cVar2 = *(char *)(lVar14 + (long)plVar23);
              cVar25 = cVar2 + ' ';
              if (0x19 < (byte)(cVar2 + 0xbfU)) {
                cVar25 = cVar2;
              }
              plVar23 = (long *)((long)plVar23 + 1);
            } while (cVar24 == cVar25);
            bVar29 = false;
joined_r0x0627cf7d:
            if (((ulong)uStack_588 & 1) != 0) {
              func_0x0412a280(lStack_578,(ulong)uStack_588 & 0xfffffffffffffffe);
            }
            if ((uStack_520 & 1) != 0) {
              func_0x0412a280(lStack_510,uStack_520 & 0xfffffffffffffffe);
            }
            if (bVar29) {
              bVar29 = (*pbVar20 & 1) != 0;
              pbStack_468 = pbVar20 + 1;
              if (bVar29) {
                pbStack_468 = *(byte **)(pbVar20 + 0x10);
              }
              uStack_460 = (ulong)(*pbVar20 >> 1);
              if (bVar29) {
                uStack_460 = *(ulong *)(pbVar20 + 8);
              }
              func_0x05ff17b0(&uStack_588,&pbStack_468);
              plVar10 = (long *)(ulong)((byte)uStack_588 >> 1);
              pbVar28 = (byte *)(ulong)((byte)uStack_588 & 1);
              lVar9 = (long)&uStack_588 + 1;
              if (((ulong)uStack_588 & 1) != 0) {
                plVar10 = plStack_580;
                lVar9 = lStack_578;
              }
              if ((long *)0xfffffffffffffff7 < plVar10) goto LAB_0627d757;
              if (plVar10 < (long *)0x17) {
                uStack_520 = CONCAT71(uStack_520._1_7_,(char)plVar10 * '\x02');
                lVar14 = (long)&uStack_520 + 1;
                if (plVar10 != (long *)0x0) goto LAB_0627d19c;
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_520._1_1_ = 0;
              }
              else {
                uVar18 = ((ulong)plVar10 | 7) + 1;
                if (((ulong)plVar10 | 7) == 0x17) {
                  uVar18 = 0x1a;
                }
                lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
                if (lVar14 == 0) {
                  func_0x0eec74c0(uVar18,0);
                }
                uStack_520 = uVar18 | 1;
                plStack_518 = plVar10;
                lStack_510 = lVar14;
LAB_0627d19c:
                func_0x0eee2ee0(lVar14,lVar9,plVar10);
                *(undefined1 *)(lVar14 + (long)plVar10) = 0;
              }
              if (((ulong)uStack_588 & 1) != 0) {
                func_0x0412a280(lStack_578,(ulong)uStack_588 & 0xfffffffffffffffe);
              }
              func_0x063be010(&puStack_538,&uStack_520,pbStack_498,0);
              puStack_438 = &UNK_0f02d398;
              puStack_430 = &UNK_06284a80;
              uStack_428 = 0;
              pbStack_420 = pbStack_598;
              ppuStack_418 = &puStack_438;
              func_0x06284970(&uStack_490,puStack_538,&puStack_438);
              if (ppuStack_418 == &puStack_438) {
                lVar9 = 0x20;
LAB_0627d1c4:
                (**(code **)(*ppuStack_418 + lVar9))();
              }
              else {
                lVar9 = 0x28;
                if (ppuStack_418 != (undefined **)0x0) goto LAB_0627d1c4;
              }
              func_0x063bc120(pbStack_4a0,&uStack_520,&uStack_520,&uStack_490);
              func_0x063bca00(pbStack_4a8,&uStack_520,&uStack_520,&puStack_538);
              if (lStack_488 != 0) {
                plVar10 = (long *)func_0x0412c300();
                plStack_580 = plVar10;
                if (plVar10 != (long *)0x0) {
                  uStack_588 = (byte *)uStack_490;
                  if (uStack_490 != 0) {
                    (**(code **)(**(long **)(uStack_490 + 0x28) + 0x10))();
                  }
                  LOCK();
                  plVar17 = plVar10 + 1;
                  lVar9 = *plVar17;
                  *plVar17 = *plVar17 + -1;
                  UNLOCK();
                  if (lVar9 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    func_0x0412c2d0(plVar10);
                  }
                }
                if (lStack_488 != 0) {
                  func_0x0412c2d0();
                }
              }
              plVar10 = plStack_530;
              if (plStack_530 != (long *)0x0) {
                LOCK();
                plVar17 = plStack_530 + 1;
                lVar9 = *plVar17;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (lVar9 == 0) {
                  (**(code **)(*plStack_530 + 0x10))(plStack_530);
                  func_0x0412c2d0(plVar10);
                }
              }
              if ((uStack_520 & 1) != 0) {
                func_0x0412a280(lStack_510,uStack_520 & 0xfffffffffffffffe);
              }
            }
            pbVar20 = pbVar20 + 0x18;
            pbVar28 = pbStack_5a8;
            if (pbVar20 == pbVar11) break;
          } while( true );
        }
      }
      pbVar20 = pbStack_4d8;
      pbVar11 = pbStack_4d0;
      if (pbStack_4d8 != (byte *)0x0) {
        for (; pbVar20 != pbVar11; pbVar11 = pbVar11 + -0x18) {
          if ((pbVar11[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar11 + -8),
                            *(ulong *)(pbVar11 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_4d0 = pbVar20;
        func_0x0412a280(pbStack_4d8,lStack_4c8 - (long)pbStack_4d8);
      }
    }
    if (*(long *)(pbVar28 + 0x20) == 0) {
      LOCK();
      *(long *)(pbVar28 + 8) = *(long *)(pbVar28 + 8) + 1;
      UNLOCK();
      LOCK();
      *(long *)(pbVar28 + 0x10) = *(long *)(pbVar28 + 0x10) + 1;
      UNLOCK();
      *(byte **)(pbVar28 + 0x18) = pbStack_598;
      *(byte **)(pbVar28 + 0x20) = pbVar28;
LAB_0627d470:
      pbVar11 = pbVar28 + 8;
      LOCK();
      lVar9 = *(long *)pbVar11;
      *(long *)pbVar11 = *(long *)pbVar11 + -1;
      UNLOCK();
      if (lVar9 != 0) goto LAB_0627d488;
      (**(code **)(*(long *)pbVar28 + 0x10))(pbVar28);
      func_0x0412c2d0(pbVar28);
      puVar26 = *(undefined8 **)(param_2 + 0x68);
      puVar12 = *(undefined8 **)(param_2 + 0x70);
      if (puVar26 < puVar12) goto LAB_0627d495;
    }
    else {
      if (*(long *)(*(long *)(pbVar28 + 0x20) + 8) == -1) {
        LOCK();
        *(long *)(pbVar28 + 8) = *(long *)(pbVar28 + 8) + 1;
        UNLOCK();
        LOCK();
        *(long *)(pbVar28 + 0x10) = *(long *)(pbVar28 + 0x10) + 1;
        UNLOCK();
        *(byte **)(pbVar28 + 0x18) = pbStack_598;
        *(byte **)(pbVar28 + 0x20) = pbVar28;
        func_0x0412c2d0();
        goto LAB_0627d470;
      }
LAB_0627d488:
      puVar26 = *(undefined8 **)(param_2 + 0x68);
      puVar12 = *(undefined8 **)(param_2 + 0x70);
      if (puVar26 < puVar12) {
LAB_0627d495:
        *puVar26 = pbStack_598;
        puVar26[1] = pbVar28;
        puVar26 = puVar26 + 2;
        goto LAB_0627d60c;
      }
    }
    lVar9 = (long)puVar26 - *(long *)(param_2 + 0x60);
    uVar18 = (lVar9 >> 4) + 1;
    if (uVar18 >> 0x3c == 0) {
      uVar13 = (long)puVar12 - *(long *)(param_2 + 0x60);
      uVar8 = (long)uVar13 >> 3;
      if (uVar8 <= uVar18) {
        uVar8 = uVar18;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar8 = 0xfffffffffffffff;
      }
      if (uVar8 < 0x1000000000000000) {
        lVar21 = uVar8 * 0x10;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
        if (lVar14 == 0) {
          func_0x0eec74c0(lVar21,0);
        }
        *(byte **)(lVar14 + lVar9) = pbStack_598;
        *(byte **)(lVar14 + 8 + lVar9) = pbVar28;
        puVar26 = (undefined8 *)(lVar9 + lVar14 + 0x10);
        puVar27 = *(undefined8 **)(param_2 + 0x60);
        puVar3 = *(undefined8 **)(param_2 + 0x68);
        puVar12 = (undefined8 *)(((long)puVar27 - (long)puVar3) + lVar14 + lVar9);
        puVar15 = puVar27;
        puVar19 = puVar12;
        if ((long)puVar27 - (long)puVar3 != 0) {
          do {
            uVar16 = puVar15[1];
            *puVar19 = *puVar15;
            puVar19[1] = uVar16;
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = puVar15 + 2;
            puVar19 = puVar19 + 2;
          } while (puVar15 != puVar3);
          do {
            plVar10 = (long *)puVar27[1];
            if (plVar10 != (long *)0x0) {
              LOCK();
              plVar17 = plVar10 + 1;
              lVar9 = *plVar17;
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (lVar9 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                func_0x0412c2d0(plVar10);
              }
            }
            puVar27 = puVar27 + 2;
          } while (puVar27 != puVar3);
          puVar27 = *(undefined8 **)(param_2 + 0x60);
        }
        *(undefined8 **)(param_2 + 0x60) = puVar12;
        *(undefined8 **)(param_2 + 0x68) = puVar26;
        lVar9 = *(long *)(param_2 + 0x70);
        *(long *)(param_2 + 0x70) = lVar21 + lVar14;
        if (puVar27 != (undefined8 *)0x0) {
          func_0x0412a280(puVar27,lVar9 - (long)puVar27);
        }
LAB_0627d60c:
        *(undefined8 **)(param_2 + 0x68) = puVar26;
        lVar9 = puVar26[-1];
        uVar4 = *(undefined4 *)((long)puVar26 + -0xc);
        uVar5 = *(undefined4 *)(puVar26 + -1);
        uVar6 = *(undefined4 *)((long)puVar26 + -4);
        *puStack_470 = *(undefined4 *)(puVar26 + -2);
        puStack_470[1] = uVar4;
        puStack_470[2] = uVar5;
        puStack_470[3] = uVar6;
        if (lVar9 != 0) {
          LOCK();
          plVar10 = (long *)(lVar9 + 0x10);
          *plVar10 = *plVar10 + 1;
          UNLOCK();
        }
        if ((bStack_4c0 & 1) != 0) {
          func_0x0412a280(uStack_4b0,CONCAT71(uStack_4bf,bStack_4c0) & 0xfffffffffffffffe);
        }
        if ((uStack_568 & 1) != 0) {
          func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
        }
        if ((uStack_550 & 1) != 0) {
          func_0x0412a280(lStack_540,uStack_550 & 0xfffffffffffffffe);
        }
        return;
      }
    }
    else {
      func_0x062a8d20();
    }
    func_0x04882eb0();
  }
  else {
    do {
      if (uVar8 == 0) goto LAB_0627c9b4;
      uVar13 = uVar8 - 1;
      lVar9 = uVar8 - 1;
      uVar8 = uVar13;
    } while (pbVar28[lVar9] != 0x3a);
    if (uVar13 == 0xffffffffffffffff) goto LAB_0627c9b4;
    if (uVar13 <= uVar18) {
      uVar18 = uVar13;
    }
    if (uVar18 < 0xfffffffffffffff8) {
      if (uVar18 < 0x17) {
        uStack_550 = CONCAT71(uStack_550._1_7_,(char)uVar18 * '\x02');
        lVar9 = (long)&uStack_550 + 1;
        if (uVar13 != 0) goto LAB_0627d704;
        goto LAB_0627c9be;
      }
      uVar8 = 0x1a;
      if ((uVar18 | 7) != 0x17) {
        uVar8 = (uVar18 | 7) + 1;
      }
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
      if (lVar9 == 0) {
        func_0x0eec74c0(uVar8,0);
      }
      uStack_550 = uVar8 | 1;
      uStack_548 = uVar18;
      lStack_540 = lVar9;
LAB_0627d704:
      func_0x0eee2ee0(lVar9,pbVar28,uVar18);
      pbStack_598 = param_3;
      goto LAB_0627c9c1;
    }
  }
  func_0x04882e30();
LAB_0627d7bf:
  uVar16 = func_0x04882ef0(&UNK_01306d2f);
  FUN_041084d6(&DAT_0f7b8fb8);
  func_0x048e6e10(&pbStack_4d8);
  func_0x0edf9c90(pbStack_5a8 + 0xd8);
  func_0x063bbd70(pbStack_4a0);
  func_0x063bbcb0(pbStack_4a8);
  if ((*pbStack_498 & 1) != 0) goto LAB_0627da32;
  if ((*pbStack_480 & 1) != 0) goto LAB_0627da58;
LAB_0627d981:
  if ((*pbStack_478 & 1) != 0) goto LAB_0627da7e;
LAB_0627d992:
  lVar9 = *(long *)(pbStack_5a8 + 0x20);
  do {
    if (lVar9 != 0) {
      func_0x0412c2d0();
    }
    func_0x0412c1f0(pbStack_5a8);
    func_0x0412a280(pbStack_5a8,0x100);
    if ((bStack_4c0 & 1) != 0) goto LAB_0627d9dd;
    if ((uStack_568 & 1) != 0) goto LAB_0627d9fd;
    while ((uStack_550 & 1) == 0) {
      while( true ) {
        _Unwind_Resume(uVar16);
LAB_0627d9dd:
        func_0x0412a280(uStack_4b0,CONCAT71(uStack_4bf,bStack_4c0) & 0xfffffffffffffffe);
        if ((uStack_568 & 1) == 0) break;
LAB_0627d9fd:
        func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
        if ((uStack_550 & 1) != 0) goto LAB_0627da17;
      }
    }
LAB_0627da17:
    func_0x0412a280(lStack_540,uStack_550 & 0xfffffffffffffffe);
    _Unwind_Resume(uVar16);
LAB_0627da32:
    func_0x0412a280(*(undefined8 *)(pbStack_5a8 + 0x70),
                    *(ulong *)(pbStack_5a8 + 0x60) & 0xfffffffffffffffe);
    if ((*pbStack_480 & 1) == 0) goto LAB_0627d981;
LAB_0627da58:
    func_0x0412a280(*(undefined8 *)(pbStack_5a8 + 0x58),
                    *(ulong *)(pbStack_5a8 + 0x48) & 0xfffffffffffffffe);
    if ((*pbStack_478 & 1) == 0) goto LAB_0627d992;
LAB_0627da7e:
    func_0x0412a280(*(undefined8 *)(pbStack_5a8 + 0x40),
                    *(ulong *)(pbStack_5a8 + 0x30) & 0xfffffffffffffffe);
    lVar9 = *(long *)(pbStack_5a8 + 0x20);
  } while( true );
LAB_0627d757:
  func_0x04882e30();
LAB_0627d75c:
  func_0x04882e30();
LAB_0627d761:
  iVar7 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar7 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar28 = pbStack_5a8;
  }
  goto LAB_0627cce4;
}


