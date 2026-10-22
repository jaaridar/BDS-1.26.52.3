/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a8960 (ELF vaddr 0xd1a8960)
 * Label: caller-of-callee
 * Body:  [[0d2a8960, 0d2a972d] [0d2a9730, 0d2a9762] [0d2a9770, 0d2a9a7f] [0d2a9b9b, 0d2a9c25]]
 * Ghidra: FUN_0d2a8960
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d2a8960(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong *puVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong ******ppppppuVar18;
  ulong *******pppppppuVar19;
  ulong ******ppppppuVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  ulong *******pppppppuVar28;
  ulong unaff_R12;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_5d8 [8];
  ulong ******ppppppuStack_5d0;
  ulong ******ppppppuStack_5c8;
  ulong uStack_5b8;
  long *plStack_5b0;
  ulong ******ppppppuStack_5a8;
  ulong ******ppppppuStack_5a0;
  ulong ******ppppppuStack_598;
  undefined8 uStack_590;
  ulong ******ppppppuStack_588;
  ulong ******ppppppuStack_580;
  ulong ******ppppppuStack_578;
  ulong ******ppppppuStack_570;
  ulong ******ppppppuStack_568;
  ulong ******ppppppuStack_560;
  ulong ******ppppppuStack_550;
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
  ulong ******ppppppuStack_4b0;
  ulong ******appppppuStack_4a8 [5];
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
  lVar10 = func_0x05f72110(&pbStack_438,&pbStack_460);
  if (lStack_38 != 4) {
    return lVar10;
  }
  if ((int)pbStack_438 != 0x6e6f736a) {
    return lVar10;
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
  lVar10 = *(long *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_1 + 8);
  uStack_538 = puVar4[2];
  uStack_548 = *puVar4;
  uStack_540 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  func_0x0d686f30(&pbStack_438,&UNK_014dbf5d,0x13,lVar10 + 0xd8,&uStack_548);
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
  }
  ppppppuStack_5a8 = (ulong ******)0x0;
  ppppppuStack_5a0 = (ulong ******)0x0;
  ppppppuStack_598 = (ulong ******)0x0;
  func_0x0d2a8220(&uStack_528,*(undefined8 *)(param_1 + 0x10),&pbStack_438,&ppppppuStack_5a8,1);
  if (((ulong)ppppppuStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_598 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_598 = (ulong ******)0x0;
  if (((ulong)ppppppuStack_5a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppuStack_5a0 & 0xff00ffffffffffff) - 8);
  }
  ppppppuStack_5a8 = (ulong ******)0xffffffff;
  ppppppuStack_5a0 = (ulong ******)0x0;
  ppppppuStack_598 = (ulong ******)0x0;
  uStack_590 = 0;
  ppppppuStack_588 = (ulong ******)0x0;
  ppppppuStack_580 = (ulong ******)0x0;
  ppppppuStack_578 = (ulong ******)0x0;
  ppppppuStack_570 = (ulong ******)0x0;
  ppppppuStack_568 = (ulong ******)0x0;
  ppppppuStack_560 = (ulong ******)0x0;
  cVar8 = func_0x0d5cf650(&uStack_528,6,&ppppppuStack_5a8);
  func_0x05f43a40(&ppppppuStack_5a8);
  if (cVar8 == '\0') {
    func_0x0c009550(1,3,6,&UNK_01302332);
  }
  if ((cStack_502 == '\x01') && ((bStack_47c & 1) == 0)) {
    func_0x0d6b1c60(*(undefined8 *)(param_1 + 0x28));
    pppppppuVar12 = pppppppuStack_4f0;
    if (cStack_4cc == '\x02') {
      pppppppuVar12 = (ulong *******)&pppppppuStack_4f0;
    }
    pppppppuVar19 = (ulong *******)0x0;
    if (iStack_4d0 == -0x3748a6f9) {
      pppppppuVar19 = pppppppuVar12;
    }
    if (((ulong)*pppppppuVar19 & 1) == 0) {
      ppppppuStack_5c8 = pppppppuVar19[2];
      auStack_5d8 = (undefined1  [8])*pppppppuVar19;
      ppppppuStack_5d0 = pppppppuVar19[1];
    }
    else {
      pppppppuVar19 = &ppppppuStack_4e8;
      pppppppuVar12 = &ppppppuStack_4e0;
      if (cStack_4cc != '\x02') {
        pppppppuVar19 = pppppppuStack_4f0 + 1;
        pppppppuVar12 = pppppppuStack_4f0 + 2;
      }
      pppppppuVar11 = (ulong *******)0x10;
      if (iStack_4d0 == -0x3748a6f9) {
        pppppppuVar11 = pppppppuVar12;
      }
      pppppppuVar12 = (ulong *******)0x8;
      if (iStack_4d0 == -0x3748a6f9) {
        pppppppuVar12 = pppppppuVar19;
      }
      func_0x0412e5e0(auStack_5d8,*pppppppuVar11,*pppppppuVar12);
    }
    lVar10 = **(long **)(**(long **)(param_1 + 0x20) + 0xe8);
    if ((*(char *)(lVar10 + 0x88) == '\0') && (*(char *)(lVar10 + 0x89) == '\0')) {
      ppppppuStack_5a8 = (ulong ******)(auStack_5d8 + 1);
      ppppppuVar18 = (ulong ******)(ulong)(auStack_5d8[0] >> 1);
      if (((ulong)auStack_5d8 & 1) != 0) {
        ppppppuVar18 = ppppppuStack_5d0;
        ppppppuStack_5a8 = ppppppuStack_5c8;
      }
      if (((ulong ******)0x9 < ppppppuVar18) &&
         (*(short *)(ppppppuStack_5a8 + 1) == 0x3a74 &&
          *ppppppuStack_5a8 == (ulong *****)0x66617263656e696d)) {
        func_0x05353bd0(1,3,6,&UNK_014a6656,&ppppppuStack_5a8);
        if (((ulong)auStack_5d8 & 1) != 0) {
          func_0x0412a280(ppppppuStack_5c8,(ulong)auStack_5d8 & 0xfffffffffffffffe);
        }
        func_0x05d85c50(&ppppppuStack_4c8);
        if (ppppppuStack_4d8 != (ulong ******)0x0) {
          (*(code *)ppppppuStack_4d8)(&pppppppuStack_4f0);
        }
        func_0x0ee386e0(&uStack_4f8);
        func_0x0ee386e0(&uStack_500);
        goto LAB_0d2a97d2;
      }
    }
    pppppppuVar12 = pppppppuStack_4f0 + 3;
    pppppppuVar19 = pppppppuStack_4f0 + 4;
    pppppppuVar11 = pppppppuStack_4f0 + 5;
    pppppppuVar7 = pppppppuStack_4f0 + 6;
    pppppppuVar6 = pppppppuStack_4f0 + 7;
    pppppppuVar5 = pppppppuStack_4f0 + 8;
    pppppppuVar13 = pppppppuStack_4f0 + 9;
    if (cStack_4cc == '\x02') {
      pppppppuVar13 = appppppuStack_4a8;
      pppppppuVar5 = &ppppppuStack_4b0;
      pppppppuVar6 = &ppppppuStack_4b8;
      pppppppuVar7 = &ppppppuStack_4c0;
      pppppppuVar11 = &ppppppuStack_4c8;
      pppppppuVar19 = (ulong *******)&iStack_4d0;
      pppppppuVar12 = &ppppppuStack_4d8;
      pppppppuStack_4f0 = (ulong *******)&pppppppuStack_4f0;
    }
    plVar21 = *(long **)(param_1 + 0x18);
    bVar29 = iStack_4d0 == -0x3748a6f9;
    pppppppuVar28 = (ulong *******)0x0;
    if (bVar29) {
      pppppppuVar28 = pppppppuStack_4f0;
    }
    ppppppuStack_598 = pppppppuVar28[2];
    ppppppuStack_5a8 = *pppppppuVar28;
    ppppppuStack_5a0 = pppppppuVar28[1];
    *pppppppuVar28 = (ulong ******)0x0;
    pppppppuVar28[1] = (ulong ******)0x0;
    pppppppuVar28[2] = (ulong ******)0x0;
    pppppppuVar28 = (ulong *******)0x18;
    if (bVar29) {
      pppppppuVar28 = pppppppuVar12;
    }
    pppppppuVar12 = (ulong *******)0x20;
    if (bVar29) {
      pppppppuVar12 = pppppppuVar19;
    }
    uStack_590 = CONCAT62(uStack_590._2_6_,*(undefined2 *)pppppppuVar28);
    ppppppuStack_588 = *pppppppuVar12;
    pppppppuVar19 = (ulong *******)0x28;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar11;
    }
    ppppppuStack_580 = *pppppppuVar19;
    pppppppuVar19 = (ulong *******)0x30;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar7;
    }
    ppppppuStack_578 = *pppppppuVar19;
    *pppppppuVar12 = (ulong ******)0x0;
    pppppppuVar12[1] = (ulong ******)0x0;
    pppppppuVar12[2] = (ulong ******)0x0;
    pppppppuVar12 = (ulong *******)0x38;
    if (bVar29) {
      pppppppuVar12 = pppppppuVar6;
    }
    ppppppuStack_570 = *pppppppuVar12;
    pppppppuVar19 = (ulong *******)0x40;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar5;
    }
    ppppppuStack_568 = *pppppppuVar19;
    pppppppuVar19 = (ulong *******)0x48;
    if (bVar29) {
      pppppppuVar19 = pppppppuVar13;
    }
    ppppppuStack_560 = *pppppppuVar19;
    *pppppppuVar12 = (ulong ******)0x0;
    pppppppuVar12[1] = (ulong ******)0x0;
    pppppppuVar12[2] = (ulong ******)0x0;
    ppppppuVar20 = (ulong ******)(ulong)(auStack_5d8[0] >> 1);
    ppppppuStack_550 = (ulong ******)(auStack_5d8 + 1);
    ppppppuVar18 = ppppppuStack_550;
    if (((ulong)auStack_5d8 & 1) != 0) {
      ppppppuVar20 = ppppppuStack_5d0;
      ppppppuVar18 = ppppppuStack_5c8;
    }
    uStack_5b8 = func_0x04883620(&plStack_478,ppppppuVar18,ppppppuVar20);
    uVar24 = plVar21[1];
    if (uVar24 != 0) {
      uVar22 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
      uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar22 >> 0x38 < 2) {
        unaff_R12 = uVar24 - 1 & uStack_5b8;
      }
      else {
        unaff_R12 = uStack_5b8;
        if (uVar24 <= uStack_5b8) {
          if ((uStack_5b8 | uVar24) >> 0x20 == 0) {
            unaff_R12 = (uStack_5b8 & 0xffffffff) % (uVar24 & 0xffffffff);
          }
          else {
            unaff_R12 = uStack_5b8 % uVar24;
          }
        }
      }
      plVar14 = *(long **)(*plVar21 + unaff_R12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (((ulong)auStack_5d8 & 1) == 0) {
          ppppppuVar18 = (ulong ******)((ulong)auStack_5d8 >> 1 & 0x7f);
        }
        else {
          ppppppuStack_550 = ppppppuStack_5c8;
          ppppppuVar18 = ppppppuStack_5d0;
        }
        plStack_5b0 = plVar21;
        if ((byte)(uVar22 >> 0x38) < 2) {
          do {
            if (plVar14[1] == uStack_5b8) {
              bVar1 = *(byte *)(plVar14 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar20 = (ulong ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar20 = (ulong ******)plVar14[3];
              }
              if (ppppppuVar20 == ppppppuVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar10 = (long)plVar14 + 0x11;
                }
                else {
                  lVar10 = plVar14[4];
                }
                iVar9 = bcmp(lVar10,ppppppuStack_550,ppppppuVar18);
                if (iVar9 == 0) goto LAB_0d2a90db;
              }
            }
            else {
              plVar21 = plStack_5b0;
              if ((plVar14[1] & uVar24 - 1) != unaff_R12) break;
            }
            plVar14 = (long *)*plVar14;
            plVar21 = plStack_5b0;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar14[1];
            if (uVar22 == uStack_5b8) {
              bVar1 = *(byte *)(plVar14 + 2);
              if ((bVar1 & 1) == 0) {
                ppppppuVar20 = (ulong ******)(ulong)(bVar1 >> 1);
              }
              else {
                ppppppuVar20 = (ulong ******)plVar14[3];
              }
              if (ppppppuVar20 == ppppppuVar18) {
                if ((bVar1 & 1) == 0) {
                  lVar10 = (long)plVar14 + 0x11;
                }
                else {
                  lVar10 = plVar14[4];
                }
                iVar9 = bcmp(lVar10,ppppppuStack_550,ppppppuVar18);
                if (iVar9 == 0) goto LAB_0d2a90db;
              }
            }
            else {
              if (uVar24 <= uVar22) {
                if ((uVar22 | uVar24) >> 0x20 == 0) {
                  uVar22 = (uVar22 & 0xffffffff) % (uVar24 & 0xffffffff);
                }
                else {
                  uVar22 = uVar22 % uVar24;
                }
              }
              plVar21 = plStack_5b0;
              if (uVar22 != unaff_R12) break;
            }
            plVar14 = (long *)*plVar14;
            plVar21 = plStack_5b0;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x78,0);
    }
    uStack_468 = 1;
    *plVar14 = 0;
    plVar14[1] = uStack_5b8;
    plVar14[4] = (long)ppppppuStack_5c8;
    plVar14[2] = (long)auStack_5d8;
    plVar14[3] = (long)ppppppuStack_5d0;
    auStack_5d8 = (undefined1  [8])0x0;
    ppppppuStack_5d0 = (ulong ******)0x0;
    ppppppuStack_5c8 = (ulong ******)0x0;
    plVar14[7] = (long)ppppppuStack_598;
    plVar14[5] = (long)ppppppuStack_5a8;
    plVar14[6] = (long)ppppppuStack_5a0;
    ppppppuStack_5a8 = (ulong ******)0x0;
    ppppppuStack_5a0 = (ulong ******)0x0;
    ppppppuStack_598 = (ulong ******)0x0;
    *(undefined2 *)(plVar14 + 8) = (undefined2)uStack_590;
    plVar14[9] = (long)ppppppuStack_588;
    plVar14[10] = (long)ppppppuStack_580;
    plVar14[0xb] = (long)ppppppuStack_578;
    ppppppuStack_588 = (ulong ******)0x0;
    ppppppuStack_580 = (ulong ******)0x0;
    ppppppuStack_578 = (ulong ******)0x0;
    plVar14[0xc] = (long)ppppppuStack_570;
    plVar14[0xd] = (long)ppppppuStack_568;
    plVar14[0xe] = (long)ppppppuStack_560;
    ppppppuStack_570 = (ulong ******)0x0;
    ppppppuStack_568 = (ulong ******)0x0;
    ppppppuStack_560 = (ulong ******)0x0;
    plStack_478 = plVar14;
    plStack_470 = plVar21;
    if ((long)uVar24 < 0) {
      fVar31 = (float)uVar24;
      fVar30 = *(float *)(plVar21 + 4);
      if (uVar24 != 0) goto LAB_0d2a924f;
LAB_0d2a925c:
      uVar22 = 1;
      if (2 < uVar24) {
        uVar22 = (ulong)((uVar24 & uVar24 - 1) != 0);
      }
      uVar22 = uVar22 | uVar24 * 2;
      fVar30 = (float)func_0x0eee3ab0((float)(plVar21[3] + 1) / fVar30);
      uVar24 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
      if (uVar24 < uVar22) {
        uVar24 = uVar22;
      }
      uVar22 = 2;
      if ((uVar24 != 1) && (uVar22 = uVar24, (uVar24 & uVar24 - 1) != 0)) {
        uVar22 = func_0x0412c3f0();
      }
      uVar24 = plVar21[1];
      if (uVar24 < uVar22) {
LAB_0d2a92de:
        if (uVar22 >> 0x3d != 0) {
          uVar17 = func_0x04882eb0();
          func_0x041084d6(&DAT_0f5ea4a0);
          func_0x05d59d60(&pbStack_438);
          do {
            func_0x0eeb81b0(auStack_450);
            uVar17 = func_0x0eee2d70(uVar17);
          } while ((uStack_548 & 1) == 0);
          uVar24 = uStack_548 & 0xfffffffffffffffe;
          func_0x0412a280(uStack_538);
          func_0x0eeb81b0(auStack_450);
          lVar15 = func_0x0eee2d70(uVar17);
          func_0x0ee386e0(&uStack_528);
          func_0x0eee2d70(lVar15);
          lVar10 = 0;
          if (*(undefined **)(uVar24 + 8) == &UNK_01d9c576) {
            lVar10 = lVar15 + 8;
          }
          return lVar10;
        }
        lVar10 = uVar22 * 8;
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
        if (lVar15 == 0) {
          func_0x0eec74c0(lVar10,0);
        }
        lVar26 = *plVar21;
        *plVar21 = lVar15;
        if (lVar26 != 0) {
          func_0x0412a280(lVar26,plVar21[1] << 3);
          lVar15 = *plVar21;
        }
        plVar21[1] = uVar22;
        memset(lVar15,0,lVar10);
        plVar23 = (long *)plVar21[2];
        if (plVar23 != (long *)0x0) {
          uVar25 = plVar23[1];
          uVar24 = uVar22 - 1;
          if ((uVar22 & uVar24) == 0) {
            *(long **)(lVar15 + (uVar25 & uVar24) * 8) = plVar21 + 2;
            uVar22 = uVar25 & uVar24;
            while (plVar27 = plVar23, plVar23 = (long *)*plVar27, plVar23 != (long *)0x0) {
              uVar25 = plVar23[1] & uVar24;
              if (uVar25 != uVar22) {
                if (*(long *)(lVar15 + uVar25 * 8) == 0) {
                  *(long **)(lVar15 + uVar25 * 8) = plVar27;
                  uVar22 = uVar25;
                }
                else {
                  *plVar27 = *plVar23;
                  *plVar23 = **(undefined8 **)(lVar15 + uVar25 * 8);
                  **(long **)(lVar15 + uVar25 * 8) = (long)plVar23;
                  plVar23 = plVar27;
                }
              }
            }
          }
          else {
            if (uVar22 <= uVar25) {
              if ((uVar25 | uVar22) >> 0x20 == 0) {
                uVar25 = (uVar25 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar25 = uVar25 % uVar22;
              }
            }
            *(long **)(lVar15 + uVar25 * 8) = plVar21 + 2;
            plVar27 = (long *)*plVar23;
            while (plVar27 != (long *)0x0) {
              uVar24 = plVar27[1];
              if (uVar22 <= uVar24) {
                if ((uVar24 | uVar22) >> 0x20 == 0) {
                  uVar24 = (uVar24 & 0xffffffff) % (uVar22 & 0xffffffff);
                }
                else {
                  uVar24 = uVar24 % uVar22;
                }
              }
              if (uVar24 != uVar25) {
                if (*(long *)(lVar15 + uVar24 * 8) == 0) {
                  *(long **)(lVar15 + uVar24 * 8) = plVar23;
                  uVar25 = uVar24;
                }
                else {
                  *plVar23 = *plVar27;
                  *plVar27 = **(long **)(lVar15 + uVar24 * 8);
                  **(undefined8 **)(lVar15 + uVar24 * 8) = plVar27;
                  plVar27 = plVar23;
                }
              }
              plVar23 = plVar27;
              plVar27 = (long *)*plVar23;
            }
          }
        }
      }
      else if (uVar22 < uVar24) {
        fVar30 = (float)func_0x0eee3ab0((float)(ulong)plVar21[3] / *(float *)(plVar21 + 4));
        uVar25 = (long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30;
        if ((uVar24 < 3) ||
           (uVar16 = uVar24 - (uVar24 >> 1 & 0x5555555555555555),
           uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
           1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar25 = func_0x0412c3f0(uVar25);
        }
        else if (1 < uVar25) {
          lVar10 = 0x3f;
          if (uVar25 - 1 != 0) {
            for (; uVar25 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar25 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
        }
        if (uVar25 < uVar22) {
          uVar25 = uVar22;
        }
        if (uVar25 < uVar24) {
          uVar22 = uVar25;
          if (uVar25 != 0) goto LAB_0d2a92de;
          lVar10 = *plVar21;
          *plVar21 = 0;
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,plVar21[1] << 3);
          }
          plVar21[1] = 0;
        }
      }
      uVar24 = plVar21[1];
      if ((uVar24 & uVar24 - 1) == 0) {
        unaff_R12 = uStack_5b8 & uVar24 - 1;
      }
      else {
        unaff_R12 = uStack_5b8;
        if (uVar24 <= uStack_5b8) {
          if ((uStack_5b8 | uVar24) >> 0x20 == 0) {
            unaff_R12 = (uStack_5b8 & 0xffffffff) % (uVar24 & 0xffffffff);
          }
          else {
            unaff_R12 = uStack_5b8 % uVar24;
          }
        }
      }
    }
    else {
      fVar31 = (float)(long)uVar24;
      fVar30 = *(float *)(plVar21 + 4);
      if (uVar24 == 0) goto LAB_0d2a925c;
LAB_0d2a924f:
      if (fVar31 * fVar30 < (float)(plVar21[3] + 1)) goto LAB_0d2a925c;
    }
    lVar10 = *plVar21;
    plVar23 = *(long **)(lVar10 + unaff_R12 * 8);
    if (plVar23 == (long *)0x0) {
      *plVar14 = plVar21[2];
      plVar21[2] = (long)plVar14;
      *(long **)(lVar10 + unaff_R12 * 8) = plVar21 + 2;
      if (*plVar14 != 0) {
        uVar22 = *(ulong *)(*plVar14 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          *(long **)(lVar10 + (uVar22 & uVar24 - 1) * 8) = plVar14;
        }
        else {
          if (uVar24 <= uVar22) {
            if ((uVar22 | uVar24) >> 0x20 == 0) {
              *(long **)(lVar10 + ((uVar22 & 0xffffffff) % (uVar24 & 0xffffffff)) * 8) = plVar14;
              goto LAB_0d2a9604;
            }
            uVar22 = uVar22 % uVar24;
          }
          *(long **)(lVar10 + uVar22 * 8) = plVar14;
        }
      }
    }
    else {
      *plVar14 = *plVar23;
      *plVar23 = (long)plVar14;
    }
LAB_0d2a9604:
    plVar21[3] = plVar21[3] + 1;
    goto LAB_0d2a9612;
  }
  func_0x0d6b1c60(*(undefined8 *)(param_1 + 0x28),&uStack_528);
LAB_0d2a9636:
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
  lVar10 = *(long *)(param_1 + 0x28);
  uVar17 = **(undefined8 **)(**(long **)(**(long **)(param_1 + 0x20) + 0xe8) + 8);
  if ((DAT_0f5ea4a0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5ea4a0), iVar9 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
  func_0x0d5f7010(&uStack_528,uVar17,&DAT_0f5ea138);
  plVar21 = *(long **)(lVar10 + 0xa8);
  if (plVar21 != (long *)0x0) {
    bVar1 = (byte)uStack_528;
    uVar24 = (ulong)((byte)uStack_528 >> 1);
    lVar15 = (long)&uStack_528 + 1;
    if ((uStack_528 & 1) != 0) {
      uVar24 = uStack_520;
      lVar15 = lStack_518;
    }
    do {
      bVar2 = *(byte *)(plVar21 + 2);
      if ((bVar2 & 1) == 0) {
        uVar22 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar22 = plVar21[3];
      }
      if (uVar22 == uVar24) {
        if ((bVar2 & 1) == 0) {
          lVar26 = (long)plVar21 + 0x11;
        }
        else {
          lVar26 = plVar21[4];
        }
        iVar9 = bcmp(lVar26,lVar15,uVar24);
        if (iVar9 == 0) goto LAB_0d2a97aa;
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  func_0x04907e30(lVar10 + 0x98,&uStack_528);
  bVar1 = (byte)uStack_528;
LAB_0d2a97aa:
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(lStack_518,uStack_528 & 0xfffffffffffffffe);
  }
LAB_0d2a97d2:
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
  lVar10 = func_0x0eeb81b0(auStack_450);
  return lVar10;
LAB_0d2a90db:
  func_0x0d2a6cc0(plVar14 + 5,&ppppppuStack_5a8);
LAB_0d2a9612:
  func_0x0d2a6760(&ppppppuStack_5a8);
  if (((ulong)auStack_5d8 & 1) != 0) {
    func_0x0412a280(ppppppuStack_5c8,(ulong)auStack_5d8 & 0xfffffffffffffffe);
  }
  goto LAB_0d2a9636;
}


