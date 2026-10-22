/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a1500 (ELF vaddr 0xd1a1500)
 * Label: caller-of-callee
 * Body:  [[0d2a1500, 0d2a228b] [0d2a2290, 0d2a22c2] [0d2a22d0, 0d2a25df] [0d2a26fb, 0d2a2785]]
 * Ghidra: FUN_0d2a1500
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d2a1500(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong *puVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  ulong *******pppppppuVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  ulong unaff_R12;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_5c8 [8];
  ulong ******ppppppuStack_5c0;
  ulong ******ppppppuStack_5b8;
  ulong uStack_5b0;
  long *plStack_5a8;
  ulong ******ppppppuStack_5a0;
  ulong ******ppppppuStack_598;
  ulong ******ppppppuStack_590;
  ulong ******ppppppuStack_588;
  ulong ******ppppppuStack_580;
  ulong ******ppppppuStack_578;
  ulong ******ppppppuStack_570;
  ulong ******ppppppuStack_568;
  ulong ******ppppppuStack_560;
  ulong ******ppppppuStack_558;
  undefined8 uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 uStack_528;
  ulong uStack_520;
  long lStack_518;
  char cStack_502;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong *******pppppppuStack_4f0;
  ulong ******ppppppuStack_4e8;
  ulong ******ppppppuStack_4e0;
  ulong ******ppppppuStack_4d8;
  int iStack_4d0;
  char cStack_4cc;
  ulong ******ppppppuStack_4c8;
  ulong ******ppppppuStack_4c0;
  ulong ******ppppppuStack_4b8;
  ulong ******appppppuStack_4b0 [6];
  byte bStack_47c;
  long *plStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  byte *pbStack_460;
  ulong uStack_458;
  undefined1 auStack_450 [24];
  byte *pbStack_438;
  ulong uStack_430;
  undefined1 uStack_428;
  uint7 uStack_427;
  ulong uStack_420;
  ulong uStack_410;
  ulong uStack_408;
  byte bStack_400;
  undefined7 uStack_3ff;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [96];
  uint uStack_388;
  undefined1 auStack_380 [840];
  long lStack_38;
  
  pbStack_460 = *(byte **)(param_2 + 0x10);
  uStack_458 = *(ulong *)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbStack_460 = param_2 + 1;
    uStack_458 = (ulong)(*param_2 >> 1);
  }
  lVar9 = func_0x05f72110(&pbStack_438,&pbStack_460);
  if (lStack_38 != 4) {
    return lVar9;
  }
  if ((int)pbStack_438 != 0x6e6f736a) {
    return lVar9;
  }
  pbVar3 = *(byte **)(param_1 + 8);
  if ((*pbVar3 & 1) == 0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  else {
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
  }
  func_0x0d62a0d0(*(undefined8 *)(**(long **)(param_1 + 0x20) + 0xe8),param_2,
                  *(undefined8 *)(param_1 + 8),*(undefined4 *)(**(long **)(param_1 + 0x20) + 0x108))
  ;
  bVar29 = (*param_2 & 1) != 0;
  pbStack_438 = param_2 + 1;
  if (bVar29) {
    pbStack_438 = *(byte **)(param_2 + 0x10);
  }
  uStack_430 = (ulong)(*param_2 >> 1);
  if (bVar29) {
    uStack_430 = *(ulong *)(param_2 + 8);
  }
  uStack_428 = 1;
  uStack_528 = 0;
  func_0x0eeb79f0(auStack_450,&uStack_528);
  if ((uStack_528 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_528 & 0xff00ffffffffffff) - 8);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_1 + 8);
  uStack_538 = puVar4[2];
  uStack_548 = *puVar4;
  uStack_540 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  func_0x0d686f30(&pbStack_438,&UNK_012348f1,0x11,lVar9 + 0xd8,&uStack_548);
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
  }
  ppppppuStack_598 = (ulong ******)0x0;
  ppppppuStack_590 = (ulong ******)0x0;
  ppppppuStack_588 = (ulong ******)0x0;
  func_0x0d2a0dc0(&uStack_528,*(undefined8 *)(param_1 + 0x10),&pbStack_438,&ppppppuStack_598,1);
  if (((ulong)ppppppuStack_588 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_588 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_588 = (ulong ******)0x0;
  if (((ulong)ppppppuStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_590 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_598 = (ulong ******)0xffffffff;
  ppppppuStack_590 = (ulong ******)0x0;
  ppppppuStack_588 = (ulong ******)0x0;
  ppppppuStack_580 = (ulong ******)0x0;
  ppppppuStack_578 = (ulong ******)0x0;
  ppppppuStack_570 = (ulong ******)0x0;
  ppppppuStack_568 = (ulong ******)0x0;
  ppppppuStack_560 = (ulong ******)0x0;
  ppppppuStack_558 = (ulong ******)0x0;
  uStack_550 = 0;
  cVar7 = func_0x0d5cf650(&uStack_528,6,&ppppppuStack_598);
  func_0x05f43a40(&ppppppuStack_598);
  if (cVar7 == '\0') {
    func_0x0c009550(1,3,6,&UNK_01302332);
  }
  if ((cStack_502 == '\x01') && ((bStack_47c & 1) == 0)) {
    func_0x0d6b1c60(*(undefined8 *)(param_1 + 0x28));
    pppppppuVar11 = pppppppuStack_4f0;
    if (cStack_4cc == '\x02') {
      pppppppuVar11 = (ulong *******)&pppppppuStack_4f0;
    }
    pppppppuVar19 = (ulong *******)0x0;
    if (iStack_4d0 == -0x1476fd81) {
      pppppppuVar19 = pppppppuVar11;
    }
    if (((ulong)*pppppppuVar19 & 1) == 0) {
      ppppppuStack_5b8 = pppppppuVar19[2];
      auStack_5c8 = (undefined1  [8])*pppppppuVar19;
      ppppppuStack_5c0 = pppppppuVar19[1];
    }
    else {
      pppppppuVar19 = &ppppppuStack_4e8;
      pppppppuVar11 = &ppppppuStack_4e0;
      if (cStack_4cc != '\x02') {
        pppppppuVar19 = pppppppuStack_4f0 + 1;
        pppppppuVar11 = pppppppuStack_4f0 + 2;
      }
      pppppppuVar10 = (ulong *******)&DAT_00000010;
      if (iStack_4d0 == -0x1476fd81) {
        pppppppuVar10 = pppppppuVar11;
      }
      pppppppuVar11 = (ulong *******)0x8;
      if (iStack_4d0 == -0x1476fd81) {
        pppppppuVar11 = pppppppuVar19;
      }
      func_0x0412e5e0(auStack_5c8,*pppppppuVar10,*pppppppuVar11);
    }
    lVar9 = **(long **)(**(long **)(param_1 + 0x20) + 0xe8);
    if ((*(char *)(lVar9 + 0x88) == '\0') && (*(char *)(lVar9 + 0x89) == '\0')) {
      ppppppuStack_598 = (ulong ******)(auStack_5c8 + 1);
      ppppppuVar17 = (ulong ******)(ulong)(auStack_5c8[0] >> 1);
      if (((ulong)auStack_5c8 & 1) != 0) {
        ppppppuVar17 = ppppppuStack_5c0;
        ppppppuStack_598 = ppppppuStack_5b8;
      }
      if (((ulong ******)0x9 < ppppppuVar17) &&
         (*(short *)(ppppppuStack_598 + 1) == 0x3a74 &&
          *ppppppuStack_598 == (ulong *****)0x66617263656e696d)) {
        func_0x05353bd0(1,3,6,&UNK_014a6656,&ppppppuStack_598);
        if (((ulong)auStack_5c8 & 1) != 0) {
          func_0x0412a280(ppppppuStack_5b8,(ulong)auStack_5c8 & 0xfffffffffffffffe);
        }
        func_0x05d85c50(&ppppppuStack_4c8);
        if (ppppppuStack_4d8 != (ulong ******)0x0) {
          (*(code *)ppppppuStack_4d8)(&pppppppuStack_4f0);
        }
        FUN_0ee386e0(&uStack_4f8);
        FUN_0ee386e0(&uStack_500);
        goto LAB_0d2a2332;
      }
    }
    pppppppuVar11 = pppppppuStack_4f0 + 3;
    pppppppuVar19 = pppppppuStack_4f0 + 4;
    pppppppuVar10 = pppppppuStack_4f0 + 5;
    pppppppuVar6 = pppppppuStack_4f0 + 6;
    pppppppuVar5 = pppppppuStack_4f0 + 7;
    pppppppuVar12 = pppppppuStack_4f0 + 8;
    if (cStack_4cc == '\x02') {
      pppppppuVar12 = appppppuStack_4b0;
      pppppppuVar5 = &ppppppuStack_4b8;
      pppppppuVar6 = &ppppppuStack_4c0;
      pppppppuVar10 = &ppppppuStack_4c8;
      pppppppuVar19 = (ulong *******)&iStack_4d0;
      pppppppuVar11 = &ppppppuStack_4d8;
      pppppppuStack_4f0 = (ulong *******)&pppppppuStack_4f0;
    }
    bVar29 = iStack_4d0 == -0x1476fd81;
    plVar20 = *(long **)(param_1 + 0x18);
    pppppppuVar27 = (ulong *******)0x0;
    if (bVar29) {
      pppppppuVar27 = pppppppuStack_4f0;
    }
    ppppppuStack_588 = pppppppuVar27[2];
    ppppppuStack_598 = *pppppppuVar27;
    ppppppuStack_590 = pppppppuVar27[1];
    *pppppppuVar27 = (ulong ******)0x0;
    pppppppuVar27[1] = (ulong ******)0x0;
    pppppppuVar28 = (ulong *******)&DAT_00000018;
    if (bVar29) {
      pppppppuVar28 = pppppppuVar11;
    }
    pppppppuVar27[2] = (ulong ******)0x0;
    ppppppuStack_580 = *pppppppuVar28;
    pppppppuVar11 = (ulong *******)0x20;
    if (bVar29) {
      pppppppuVar11 = pppppppuVar19;
    }
    ppppppuStack_578 = *pppppppuVar11;
    pppppppuVar11 = (ulong *******)0x28;
    if (bVar29) {
      pppppppuVar11 = pppppppuVar10;
    }
    ppppppuStack_570 = *pppppppuVar11;
    *pppppppuVar28 = (ulong ******)0x0;
    pppppppuVar28[1] = (ulong ******)0x0;
    pppppppuVar28[2] = (ulong ******)0x0;
    pppppppuVar11 = (ulong *******)&DAT_00000030;
    if (bVar29) {
      pppppppuVar11 = pppppppuVar6;
    }
    ppppppuStack_568 = *pppppppuVar11;
    pppppppuVar19 = (ulong *******)0x38;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar5;
    }
    ppppppuStack_560 = *pppppppuVar19;
    pppppppuVar19 = (ulong *******)0x40;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar12;
    }
    ppppppuStack_558 = *pppppppuVar19;
    *pppppppuVar11 = (ulong ******)0x0;
    pppppppuVar11[1] = (ulong ******)0x0;
    pppppppuVar11[2] = (ulong ******)0x0;
    ppppppuVar18 = (ulong ******)(ulong)(auStack_5c8[0] >> 1);
    ppppppuStack_5a0 = (ulong ******)(auStack_5c8 + 1);
    ppppppuVar17 = ppppppuStack_5a0;
    if (((ulong)auStack_5c8 & 1) != 0) {
      ppppppuVar18 = ppppppuStack_5c0;
      ppppppuVar17 = ppppppuStack_5b8;
    }
    uStack_5b0 = func_0x04883620(&plStack_478,ppppppuVar17,ppppppuVar18);
    uVar23 = plVar20[1];
    if (uVar23 != 0) {
      uVar21 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333);
      uVar21 = ((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar21 >> 0x38 < 2) {
        unaff_R12 = uVar23 - 1 & uStack_5b0;
      }
      else {
        unaff_R12 = uStack_5b0;
        if (uVar23 <= uStack_5b0) {
          if ((uStack_5b0 | uVar23) >> 0x20 == 0) {
            unaff_R12 = (uStack_5b0 & 0xffffffff) % (uVar23 & 0xffffffff);
          }
          else {
            unaff_R12 = uStack_5b0 % uVar23;
          }
        }
      }
      plVar13 = *(long **)(*plVar20 + unaff_R12 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (((ulong)auStack_5c8 & 1) == 0) {
          ppppppuVar17 = (ulong ******)((ulong)auStack_5c8 >> 1 & 0x7f);
        }
        else {
          ppppppuStack_5a0 = ppppppuStack_5b8;
          ppppppuVar17 = ppppppuStack_5c0;
        }
        plStack_5a8 = plVar20;
        if ((byte)(uVar21 >> 0x38) < 2) {
          do {
            if (plVar13[1] == uStack_5b0) {
              bVar1 = *(byte *)(plVar13 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar18 = (ulong ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar18 = (ulong ******)plVar13[3];
              }
              if (ppppppuVar18 == ppppppuVar17) {
                if ((bVar1 & 1) == 0) {
                  lVar9 = (long)plVar13 + 0x11;
                }
                else {
                  lVar9 = plVar13[4];
                }
                iVar8 = func_0x0eee3000(lVar9,ppppppuStack_5a0,ppppppuVar17);
                if (iVar8 == 0) goto LAB_0d2a1c46;
              }
            }
            else {
              plVar20 = plStack_5a8;
              if ((plVar13[1] & uVar23 - 1) != unaff_R12) break;
            }
            plVar13 = (long *)*plVar13;
            plVar20 = plStack_5a8;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar13[1];
            if (uVar21 == uStack_5b0) {
              bVar1 = *(byte *)(plVar13 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar18 = (ulong ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar18 = (ulong ******)plVar13[3];
              }
              if (ppppppuVar18 == ppppppuVar17) {
                if ((bVar1 & 1) == 0) {
                  lVar9 = (long)plVar13 + 0x11;
                }
                else {
                  lVar9 = plVar13[4];
                }
                iVar8 = func_0x0eee3000(lVar9,ppppppuStack_5a0,ppppppuVar17);
                if (iVar8 == 0) goto LAB_0d2a1c46;
              }
            }
            else {
              if (uVar23 <= uVar21) {
                if ((uVar21 | uVar23) >> 0x20 == 0) {
                  uVar21 = (uVar21 & 0xffffffff) % (uVar23 & 0xffffffff);
                }
                else {
                  uVar21 = uVar21 % uVar23;
                }
              }
              plVar20 = plStack_5a8;
              if (uVar21 != unaff_R12) break;
            }
            plVar13 = (long *)*plVar13;
            plVar20 = plStack_5a8;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    uStack_468 = 1;
    *plVar13 = 0;
    plVar13[1] = uStack_5b0;
    plVar13[4] = (long)ppppppuStack_5b8;
    plVar13[2] = (long)auStack_5c8;
    plVar13[3] = (long)ppppppuStack_5c0;
    auStack_5c8 = (undefined1  [8])0x0;
    ppppppuStack_5c0 = (ulong ******)0x0;
    ppppppuStack_5b8 = (ulong ******)0x0;
    plVar13[7] = (long)ppppppuStack_588;
    plVar13[5] = (long)ppppppuStack_598;
    plVar13[6] = (long)ppppppuStack_590;
    ppppppuStack_598 = (ulong ******)0x0;
    ppppppuStack_590 = (ulong ******)0x0;
    ppppppuStack_588 = (ulong ******)0x0;
    plVar13[8] = (long)ppppppuStack_580;
    plVar13[9] = (long)ppppppuStack_578;
    plVar13[10] = (long)ppppppuStack_570;
    ppppppuStack_580 = (ulong ******)0x0;
    ppppppuStack_578 = (ulong ******)0x0;
    ppppppuStack_570 = (ulong ******)0x0;
    plVar13[0xb] = (long)ppppppuStack_568;
    plVar13[0xc] = (long)ppppppuStack_560;
    plVar13[0xd] = (long)ppppppuStack_558;
    ppppppuStack_568 = (ulong ******)0x0;
    ppppppuStack_560 = (ulong ******)0x0;
    ppppppuStack_558 = (ulong ******)0x0;
    plStack_478 = plVar13;
    plStack_470 = plVar20;
    if ((long)uVar23 < 0) {
      fVar31 = (float)uVar23;
      fVar30 = *(float *)(plVar20 + 4);
      if (uVar23 != 0) goto LAB_0d2a1dad;
LAB_0d2a1dba:
      uVar21 = 1;
      if (2 < uVar23) {
        uVar21 = (ulong)((uVar23 & uVar23 - 1) != 0);
      }
      uVar21 = uVar21 | uVar23 * 2;
      fVar30 = (float)func_0x0eee3ab0((float)(plVar20[3] + 1) / fVar30);
      uVar23 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
      if (uVar23 < uVar21) {
        uVar23 = uVar21;
      }
      uVar21 = 2;
      if ((uVar23 != 1) && (uVar21 = uVar23, (uVar23 & uVar23 - 1) != 0)) {
        uVar21 = func_0x0412c3f0();
      }
      uVar23 = plVar20[1];
      if (uVar23 < uVar21) {
LAB_0d2a1e3c:
        if (uVar21 >> 0x3d != 0) {
          uVar16 = FUN_04882eb0();
          func_0x041084d6(&DAT_0f5ea4a0);
          func_0x05d59d60(&pbStack_438);
          do {
            func_0x0eeb81b0(auStack_450);
            uVar16 = func_0x0eee2d70(uVar16);
          } while ((uStack_548 & 1) == 0);
          uVar23 = uStack_548 & 0xfffffffffffffffe;
          func_0x0412a280(uStack_538);
          func_0x0eeb81b0(auStack_450);
          lVar14 = func_0x0eee2d70(uVar16);
          FUN_0ee386e0(&uStack_528);
          func_0x0eee2d70(lVar14);
          lVar9 = 0;
          if (*(undefined **)(uVar23 + 8) == &UNK_01d9c48e) {
            lVar9 = lVar14 + 8;
          }
          return lVar9;
        }
        lVar9 = uVar21 * 8;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
        if (lVar14 == 0) {
          func_0x0eec74c0(lVar9,0);
        }
        lVar25 = *plVar20;
        *plVar20 = lVar14;
        if (lVar25 != 0) {
          func_0x0412a280(lVar25,plVar20[1] << 3);
          lVar14 = *plVar20;
        }
        plVar20[1] = uVar21;
        func_0x0eee2dd0(lVar14,0,lVar9);
        plVar22 = (long *)plVar20[2];
        if (plVar22 != (long *)0x0) {
          uVar24 = plVar22[1];
          uVar23 = uVar21 - 1;
          if ((uVar21 & uVar23) == 0) {
            *(long **)(lVar14 + (uVar24 & uVar23) * 8) = plVar20 + 2;
            uVar21 = uVar24 & uVar23;
            while (plVar26 = plVar22, plVar22 = (long *)*plVar26, plVar22 != (long *)0x0) {
              uVar24 = plVar22[1] & uVar23;
              if (uVar24 != uVar21) {
                if (*(long *)(lVar14 + uVar24 * 8) == 0) {
                  *(long **)(lVar14 + uVar24 * 8) = plVar26;
                  uVar21 = uVar24;
                }
                else {
                  *plVar26 = *plVar22;
                  *plVar22 = **(undefined8 **)(lVar14 + uVar24 * 8);
                  **(long **)(lVar14 + uVar24 * 8) = (long)plVar22;
                  plVar22 = plVar26;
                }
              }
            }
          }
          else {
            if (uVar21 <= uVar24) {
              if ((uVar24 | uVar21) >> 0x20 == 0) {
                uVar24 = (uVar24 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar24 = uVar24 % uVar21;
              }
            }
            *(long **)(lVar14 + uVar24 * 8) = plVar20 + 2;
            plVar26 = (long *)*plVar22;
            while (plVar26 != (long *)0x0) {
              uVar23 = plVar26[1];
              if (uVar21 <= uVar23) {
                if ((uVar23 | uVar21) >> 0x20 == 0) {
                  uVar23 = (uVar23 & 0xffffffff) % (uVar21 & 0xffffffff);
                }
                else {
                  uVar23 = uVar23 % uVar21;
                }
              }
              if (uVar23 != uVar24) {
                if (*(long *)(lVar14 + uVar23 * 8) == 0) {
                  *(long **)(lVar14 + uVar23 * 8) = plVar22;
                  uVar24 = uVar23;
                }
                else {
                  *plVar22 = *plVar26;
                  *plVar26 = **(long **)(lVar14 + uVar23 * 8);
                  **(undefined8 **)(lVar14 + uVar23 * 8) = plVar26;
                  plVar26 = plVar22;
                }
              }
              plVar22 = plVar26;
              plVar26 = (long *)*plVar22;
            }
          }
        }
      }
      else if (uVar21 < uVar23) {
        fVar30 = (float)func_0x0eee3ab0((float)(ulong)plVar20[3] / *(float *)(plVar20 + 4));
        uVar24 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
        if ((uVar23 < 3) ||
           (uVar15 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
           1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar24 = func_0x0412c3f0(uVar24);
        }
        else if (1 < uVar24) {
          lVar9 = 0x3f;
          if (uVar24 - 1 != 0) {
            for (; uVar24 - 1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar24 = 1L << (-((byte)lVar9 ^ 0x3f) & 0x3f);
        }
        if (uVar24 < uVar21) {
          uVar24 = uVar21;
        }
        if (uVar24 < uVar23) {
          uVar21 = uVar24;
          if (uVar24 != 0) goto LAB_0d2a1e3c;
          lVar9 = *plVar20;
          *plVar20 = 0;
          if (lVar9 != 0) {
            func_0x0412a280(lVar9,plVar20[1] << 3);
          }
          plVar20[1] = 0;
        }
      }
      uVar23 = plVar20[1];
      if ((uVar23 & uVar23 - 1) == 0) {
        unaff_R12 = uStack_5b0 & uVar23 - 1;
      }
      else {
        unaff_R12 = uStack_5b0;
        if (uVar23 <= uStack_5b0) {
          if ((uStack_5b0 | uVar23) >> 0x20 == 0) {
            unaff_R12 = (uStack_5b0 & 0xffffffff) % (uVar23 & 0xffffffff);
          }
          else {
            unaff_R12 = uStack_5b0 % uVar23;
          }
        }
      }
    }
    else {
      fVar31 = (float)(long)uVar23;
      fVar30 = *(float *)(plVar20 + 4);
      if (uVar23 == 0) goto LAB_0d2a1dba;
LAB_0d2a1dad:
      if (fVar31 * fVar30 < (float)(plVar20[3] + 1)) goto LAB_0d2a1dba;
    }
    lVar9 = *plVar20;
    plVar22 = *(long **)(lVar9 + unaff_R12 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar13 = plVar20[2];
      plVar20[2] = (long)plVar13;
      *(long **)(lVar9 + unaff_R12 * 8) = plVar20 + 2;
      if (*plVar13 != 0) {
        uVar21 = *(ulong *)(*plVar13 + 8);
        if ((uVar23 & uVar23 - 1) == 0) {
          *(long **)(lVar9 + (uVar21 & uVar23 - 1) * 8) = plVar13;
        }
        else {
          if (uVar23 <= uVar21) {
            if ((uVar21 | uVar23) >> 0x20 == 0) {
              *(long **)(lVar9 + ((uVar21 & 0xffffffff) % (uVar23 & 0xffffffff)) * 8) = plVar13;
              goto LAB_0d2a2162;
            }
            uVar21 = uVar21 % uVar23;
          }
          *(long **)(lVar9 + uVar21 * 8) = plVar13;
        }
      }
    }
    else {
      *plVar13 = *plVar22;
      *plVar22 = (long)plVar13;
    }
LAB_0d2a2162:
    plVar20[3] = plVar20[3] + 1;
    goto LAB_0d2a2170;
  }
  func_0x0d6b1c60(*(undefined8 *)(param_1 + 0x28),&uStack_528);
LAB_0d2a2194:
  func_0x05d85c50(&ppppppuStack_4c8);
  if (ppppppuStack_4d8 != (ulong ******)0x0) {
    (*(code *)ppppppuStack_4d8)(&pppppppuStack_4f0);
  }
  if ((uStack_4f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4f8 & 0xff00ffffffffffff) - 8);
  }
  uStack_4f8 = 0;
  if ((uStack_500 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_500 & 0xff00ffffffffffff) - 8);
  }
  lVar9 = *(long *)(param_1 + 0x28);
  uVar16 = **(undefined8 **)(**(long **)(**(long **)(param_1 + 0x20) + 0xe8) + 8);
  if ((DAT_0f5ea4a0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5ea4a0), iVar8 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    FUN_0410844d(&DAT_0f5ea4a0);
  }
  func_0x0d5f7010(&uStack_528,uVar16,&DAT_0f5ea138);
  plVar20 = *(long **)(lVar9 + 0xa8);
  if (plVar20 != (long *)0x0) {
    bVar1 = (byte)uStack_528;
    uVar23 = (ulong)((byte)uStack_528 >> 1);
    lVar14 = (long)&uStack_528 + 1;
    if ((uStack_528 & 1) != 0) {
      uVar23 = uStack_520;
      lVar14 = lStack_518;
    }
    do {
      bVar2 = *(byte *)(plVar20 + 2);
      if ((bVar2 & 1) == 0) {
        uVar21 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar21 = plVar20[3];
      }
      if (uVar21 == uVar23) {
        if ((bVar2 & 1) == 0) {
          lVar25 = (long)plVar20 + 0x11;
        }
        else {
          lVar25 = plVar20[4];
        }
        iVar8 = func_0x0eee3000(lVar25,lVar14,uVar23);
        if (iVar8 == 0) goto LAB_0d2a230a;
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  func_0x04907e30(lVar9 + 0x98,&uStack_528);
  bVar1 = (byte)uStack_528;
LAB_0d2a230a:
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(lStack_518,uStack_528 & 0xfffffffffffffffe);
  }
LAB_0d2a2332:
  func_0x05d85c50(auStack_380);
  if ((ulong)uStack_388 != 0xffffffff) {
    (**(code **)(&UNK_0f45d970 + (ulong)uStack_388 * 8))(&uStack_528,auStack_3e8);
  }
  uStack_388 = 0xffffffff;
  if ((bStack_400 & 1) != 0) {
    func_0x0412a280(uStack_3f0,CONCAT71(uStack_3ff,bStack_400) & 0xfffffffffffffffe);
  }
  if ((uStack_408 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_408 & 0xff00ffffffffffff) - 8);
  }
  uStack_408 = 0;
  if ((uStack_410 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
  }
  uStack_410 = 0;
  if ((uStack_420 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_420 & 0xff00ffffffffffff) - 8);
  }
  uStack_420 = 0;
  if ((uStack_427 & 0x800000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(CONCAT71(uStack_427,uStack_428) & 0xff00ffffffffffff) - 8);
  }
  lVar9 = func_0x0eeb81b0(auStack_450);
  return lVar9;
LAB_0d2a1c46:
  func_0x0d29f810(plVar13 + 5,&ppppppuStack_598);
LAB_0d2a2170:
  func_0x0d29f340(&ppppppuStack_598);
  if (((ulong)auStack_5c8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_5b8,(ulong)auStack_5c8 & 0xfffffffffffffffe);
  }
  goto LAB_0d2a2194;
}


