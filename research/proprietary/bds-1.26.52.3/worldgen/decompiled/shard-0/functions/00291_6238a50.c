/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6338a50 (ELF vaddr 0x6238a50)
 * Label: caller-of-seed
 * Body:  [[06338a50, 06338e4d] [06338e50, 06338f0c] [06338f10, 063390dc] [063390e0, 06339147] [06339150, 063391b3] [063391c0, 06339260] [06339270, 063392f0] [06339300, 0633936d] [06339370, 0633939c] [063393a0, 0633969b] [063396a0, 063397bc]]
 * Ghidra: FUN_06338a50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06338a50(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ******ppppppuVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  ulong uVar19;
  bool bVar20;
  char cStack_541;
  undefined8 *******pppppppuStack_540;
  undefined8 *******pppppppuStack_538;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  long lStack_510;
  long *plStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  ulong uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined2 uStack_4a8;
  long **pplStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined8 *puStack_478;
  long **pplStack_468;
  long *plStack_458;
  long *plStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  ulong uStack_38;
  
  if (*param_2 != '\x01') {
    return;
  }
  plVar14 = *(long **)(param_1 + 8);
  plStack_508 = plVar14;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0633976d;
LAB_06338a82:
  bVar20 = (*(byte *)(plVar14 + 0x4c) & 1) == 0;
  pppppppuStack_540 = (undefined8 *******)plVar14[0x4e];
  if (bVar20) {
    pppppppuStack_540 = (undefined8 *******)((long)plVar14 + 0x261);
  }
  pppppppuStack_538 = (undefined8 *******)(ulong)(*(byte *)(plVar14 + 0x4c) >> 1);
  if (!bVar20) {
    pppppppuStack_538 = (undefined8 *******)plVar14[0x4d];
  }
  cVar2 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pppppppuStack_540);
  if (cVar2 != '\0') {
    bVar20 = (*(byte *)(plVar14 + 0x4c) & 1) != 0;
    uStack_520 = (undefined8 *******)((long)plVar14 + 0x261);
    if (bVar20) {
      uStack_520 = (undefined8 *******)plVar14[0x4e];
    }
    uStack_518 = (ulong)(*(byte *)(plVar14 + 0x4c) >> 1);
    if (bVar20) {
      uStack_518 = plVar14[0x4d];
    }
    pplStack_4a0 = (long **)&DAT_0f7b8f98;
    plStack_498 = plVar14;
    (**(code **)(_DAT_0f7b8f98 + 0xb0))
              (&uStack_438,&DAT_0f7b8f98,&uStack_520,0x116,&UNK_0629f2b0,&pplStack_4a0);
    uStack_500 = (long *)0x85eaac5f456d7e;
    uStack_4f8 = (long *)&UNK_0140f690;
    plStack_4f0 = (long *)0x1;
    uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0x34c);
    if (bStack_3f8 == 0) {
      plStack_488 = (long *)0x0;
      plStack_480 = (long *)0x0;
      puStack_478 = (undefined8 *)0x0;
      func_0x0eedeb80(2,0x2d,&uStack_438,&plStack_488,&uStack_500);
      if (((ulong)plStack_488 & 1) != 0) {
        func_0x0412a280(puStack_478,(ulong)plStack_488 & 0xfffffffffffffffe);
      }
    }
    lVar6 = lStack_410;
    if ((bStack_3f8 & 1) == 0) {
      lVar11 = lStack_408;
      if (lStack_410 != 0) {
        while (lVar6 != lVar11) {
          func_0x048b3e80(lVar11 + -0x40);
          lVar11 = lVar11 + -0x40;
        }
        lStack_408 = lVar6;
        func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      }
      lVar11 = lStack_428;
      lVar6 = lStack_420;
      if (lStack_428 != 0) {
        for (; lVar11 != lVar6; lVar6 = lVar6 + -0x50) {
          if ((*(char *)(lVar6 + -8) == '\x01') && ((*(byte *)(lVar6 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar6 + -0x20),
                            *(ulong *)(lVar6 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_420 = lVar11;
        func_0x0412a280(lStack_428,lStack_418 - lStack_428);
      }
    }
  }
  plVar5 = (long *)func_0x05f95d30(plVar14[3]);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*plVar5 + 0x8d8))(plVar5);
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x98);
    lStack_528 = *(long *)(lVar6 + 8);
    plStack_458 = plVar5;
    if (lStack_528 != *(long *)(lVar6 + 0x10)) {
      plVar12 = plVar14 + 0x44;
      plStack_440 = plVar14 + 0x45;
      plStack_450 = plVar12;
      lStack_448 = lVar6;
LAB_06338d7c:
      if (*(char *)(**(long **)(lStack_528 + 0xe8) + 0x88) == '\0') {
        uVar7 = (**(code **)(**(long **)(*(long *)(**(long **)(lStack_528 + 0xe8) + 8) + 8) + 0x20))
                          ();
        plVar5 = (long *)func_0x06339bd0(plVar12,uVar7);
        if (plVar5 == plStack_440) {
          cStack_541 = '\0';
          pppppppuStack_540 = &pppppppuStack_538;
          pppppppuStack_538 = (undefined8 *******)0x0;
          lStack_530 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          lStack_428 = 0;
          pppppppuVar8 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40)
          ;
          if (pppppppuVar8 == (undefined8 *******)0x0) {
            func_0x0eec74c0(0x40,0);
          }
          *(undefined1 *)(pppppppuVar8 + 4) = 0;
          pppppppuVar8[5] = (undefined8 ******)0x0;
          pppppppuVar8[6] = (undefined8 ******)0x0;
          pppppppuVar8[7] = (undefined8 ******)0x0;
          *pppppppuVar8 = (undefined8 ******)0x0;
          pppppppuVar8[1] = (undefined8 ******)0x0;
          pppppppuVar8[2] = &pppppppuStack_538;
          *(undefined1 *)(pppppppuVar8 + 3) = 1;
          lStack_530 = lStack_530 + 1;
          uStack_438 = 0;
          uStack_430 = 0;
          lStack_428 = 0;
          bVar3 = 0;
          pppppppuVar16 = pppppppuVar8;
          do {
            pppppppuStack_540 = pppppppuVar8;
            pppppppuStack_538 = pppppppuVar8;
            if (bVar3 < 2) {
              if (bVar3 != 0) goto LAB_06338ee4;
              pppppppuVar15 = (undefined8 *******)pppppppuVar16[1];
              if (pppppppuVar15 == (undefined8 *******)0x0) goto code_r0x06338e70;
            }
            else {
              pppppppuVar15 = (undefined8 *******)*pppppppuVar16;
              pppppppuVar18 = pppppppuVar16;
              if (pppppppuVar15 == (undefined8 *******)0x0) goto LAB_06338e79;
            }
            bVar3 = *(byte *)(pppppppuVar15 + 4);
            pppppppuVar16 = pppppppuVar15;
          } while( true );
        }
      }
      goto LAB_06338d60;
    }
  }
LAB_0633946d:
  uVar7 = (**(code **)(*plVar5 + 0xc60))(plVar5);
  uStack_500 = (long *)&UNK_0f534768;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0ef44a60;
  uStack_4f8 = plVar14 + 3;
  *(undefined1 *)(plVar14 + 3) = 1;
  uStack_500 = (long *)&UNK_0f02ea88;
  uStack_4e8 = 0;
  lStack_4e0 = 0;
  lStack_4d8 = 0;
  uStack_4d0 = (undefined8 *******)0x0;
  uStack_4c8 = (char *)0x0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  lStack_4b0 = 0;
  uStack_4a8 = 0;
  plStack_4f0 = plVar14;
  func_0x0ee1c910(&uStack_500);
  plVar14 = plStack_4f0;
  plStack_480 = (long *)0x0;
  puStack_478 = (undefined8 *)0x0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plStack_4f0[1] = plStack_4f0[1] + 1;
    UNLOCK();
    plStack_480 = plStack_4f0;
  }
  plStack_488 = uStack_4f8;
  if (uStack_4f8 != (long *)0x0) {
    puStack_478 = &uStack_500;
  }
  func_0x06242cd0(&uStack_438,uVar7,&plStack_488);
  plVar5 = plStack_508;
  plStack_488 = (long *)0x0;
  plStack_480 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    puStack_478 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    plVar12 = plVar14 + 1;
    lVar6 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = plStack_480;
    puStack_478 = (undefined8 *)0x0;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_480 + 1;
      lVar6 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  func_0x0d2f8f10(&pppppppuStack_540,&uStack_438,uVar7);
  func_0x06336d60(plVar5 + 0x4f,plVar5[0x50]);
  plVar5[0x4f] = (long)pppppppuStack_540;
  plVar5[0x50] = (long)pppppppuStack_538;
  plVar5[0x51] = lStack_530;
  if (lStack_530 == 0) {
    plVar5[0x4f] = (long)(plVar5 + 0x50);
  }
  else {
    pppppppuStack_540 = &pppppppuStack_538;
    pppppppuStack_538[2] = (undefined8 ******)(plVar5 + 0x50);
    pppppppuStack_538 = (undefined8 *******)0x0;
    lStack_530 = 0;
  }
  func_0x06336d60(&pppppppuStack_540,pppppppuStack_538);
  func_0x0d3086c0(&uStack_438);
  lVar11 = lStack_4c0;
  uStack_500 = (long *)&UNK_0f02ea88;
  lVar6 = lStack_4b8;
  if (lStack_4c0 != 0) {
    for (; lVar11 != lVar6; lVar6 = lVar6 + -0x10) {
      plVar14 = *(long **)(lVar6 + -8);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar5 = plVar14 + 1;
        lVar1 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
    }
    lStack_4b8 = lVar11;
    func_0x0412a280(lStack_4c0,lStack_4b0 - lStack_4c0);
  }
  plVar14 = plStack_4f0;
  uStack_500 = (long *)&UNK_0f534768;
  if (plStack_4f0 != (long *)0x0) {
    *(undefined1 *)uStack_4f8 = 0;
    LOCK();
    plVar5 = plStack_4f0 + 1;
    lVar6 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar6 != 0) {
      return;
    }
    (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
    func_0x0412c2d0(plVar14);
    return;
  }
  *(undefined1 *)uStack_4f8 = 0;
  return;
code_r0x06338e70:
  pppppppuVar18 = pppppppuVar16 + 1;
LAB_06338e79:
  ppppppuVar9 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar9 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar9 + 4) = 1;
  ppppppuVar9[5] = (undefined8 *****)0x0;
  ppppppuVar9[6] = (undefined8 *****)0x0;
  ppppppuVar9[7] = (undefined8 *****)0x0;
  *ppppppuVar9 = (undefined8 *****)0x0;
  ppppppuVar9[1] = (undefined8 *****)0x0;
  ppppppuVar9[2] = pppppppuVar16;
  *pppppppuVar18 = ppppppuVar9;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar9);
  lStack_530 = lStack_530 + 1;
LAB_06338ee4:
  uStack_438 = 0;
  uStack_430 = 0;
  lStack_428 = 0;
  pppppppuVar8 = &pppppppuStack_538;
  pppppppuVar16 = pppppppuStack_538;
  while (pppppppuVar15 = pppppppuVar8, pppppppuVar16 != (undefined8 *******)0x0) {
    while (pppppppuVar8 = pppppppuVar16, *(byte *)(pppppppuVar8 + 4) < 3) {
      if (*(byte *)(pppppppuVar8 + 4) == 2) goto LAB_06338fa2;
      pppppppuVar16 = (undefined8 *******)pppppppuVar8[1];
      if ((undefined8 *******)pppppppuVar8[1] == (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuVar8 + 1;
        goto LAB_06338f37;
      }
    }
    pppppppuVar16 = (undefined8 *******)*pppppppuVar8;
  }
LAB_06338f37:
  ppppppuVar9 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar9 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar9 + 4) = 2;
  ppppppuVar9[5] = (undefined8 *****)0x0;
  ppppppuVar9[6] = (undefined8 *****)0x0;
  ppppppuVar9[7] = (undefined8 *****)0x0;
  *ppppppuVar9 = (undefined8 *****)0x0;
  ppppppuVar9[1] = (undefined8 *****)0x0;
  ppppppuVar9[2] = pppppppuVar8;
  *pppppppuVar15 = ppppppuVar9;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar9);
  lStack_530 = lStack_530 + 1;
LAB_06338fa2:
  uStack_438 = 0;
  uStack_430 = 0;
  lStack_428 = 0;
  pppppppuVar8 = &pppppppuStack_538;
  pppppppuVar16 = pppppppuStack_538;
  while (pppppppuVar15 = pppppppuVar8, pppppppuVar16 != (undefined8 *******)0x0) {
    while (pppppppuVar8 = pppppppuVar16, *(byte *)(pppppppuVar8 + 4) < 4) {
      if (*(byte *)(pppppppuVar8 + 4) == 3) goto LAB_0633904e;
      pppppppuVar16 = (undefined8 *******)pppppppuVar8[1];
      if ((undefined8 *******)pppppppuVar8[1] == (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuVar8 + 1;
        goto LAB_06338fe8;
      }
    }
    pppppppuVar16 = (undefined8 *******)*pppppppuVar8;
  }
LAB_06338fe8:
  ppppppuVar9 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar9 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar9 + 4) = 3;
  ppppppuVar9[5] = (undefined8 *****)0x0;
  ppppppuVar9[6] = (undefined8 *****)0x0;
  ppppppuVar9[7] = (undefined8 *****)0x0;
  *ppppppuVar9 = (undefined8 *****)0x0;
  ppppppuVar9[1] = (undefined8 *****)0x0;
  ppppppuVar9[2] = pppppppuVar8;
  *pppppppuVar15 = ppppppuVar9;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar9);
  lStack_530 = lStack_530 + 1;
LAB_0633904e:
  plVar5 = _DAT_0f56adc0;
  if (_DAT_0f56adc0 != (long *)0xf56adc8) {
LAB_063390f3:
    bVar20 = (*(byte *)(plVar5 + 5) & 1) != 0;
    lVar6 = (long)plVar5 + 0x29;
    if (bVar20) {
      lVar6 = plVar5[7];
    }
    uVar17 = (ulong)(*(byte *)(plVar5 + 5) >> 1);
    if (bVar20) {
      uVar17 = plVar5[6];
    }
    func_0x0eee2dd0(&uStack_438,0,0x408);
    if (uVar17 < 0x400) {
      if (uVar17 != 0) {
        func_0x0eee2ee0(&uStack_438,lVar6,uVar17);
      }
      lVar6 = lStack_528;
      uStack_38 = uVar17;
      *(undefined1 *)((long)&uStack_438 + uVar17) = 0;
      uVar17 = uStack_38;
      if (0xfffffffffffffff7 < uStack_38) goto LAB_06339768;
      if (uStack_38 < 0x17) {
        uStack_520 = (undefined8 *******)CONCAT71(uStack_520._1_7_,(char)uStack_38 * '\x02');
        lVar11 = (long)&uStack_520 + 1;
        if (uStack_38 == 0) {
          uVar17 = 0;
          goto LAB_06339225;
        }
      }
      else {
        uVar19 = (uStack_38 | 7) + 1;
        if ((uStack_38 | 7) == 0x17) {
          uVar19 = 0x1a;
        }
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
        if (lVar11 == 0) {
          func_0x0eec74c0(uVar19,0);
        }
        uStack_520 = (undefined8 *******)(uVar19 | 1);
        uStack_518 = uVar17;
        lStack_510 = lVar11;
      }
      func_0x0eee2f00(lVar11,&uStack_438,uVar17);
    }
    else {
      uStack_520 = (undefined8 *******)((ulong)uStack_520 & 0xffffffffffffff00);
      uVar17 = 0;
      lVar11 = (long)&uStack_520 + 1;
      lVar6 = lStack_528;
    }
LAB_06339225:
    *(undefined1 *)(lVar11 + uVar17) = 0;
    plVar14 = plStack_508;
    uStack_500 = plStack_508;
    uStack_4f8 = &lStack_528;
    plStack_4f0 = (long *)CONCAT71(plStack_4f0._1_7_,(char)plVar5[4]);
    if ((*(byte *)(plVar5 + 5) & 1) == 0) {
      lStack_4d8 = plVar5[7];
      uStack_4e8 = plVar5[5];
      lStack_4e0 = plVar5[6];
    }
    else {
      FUN_0412e5e0(&uStack_4e8,plVar5[7],plVar5[6]);
    }
    uStack_4d0 = &pppppppuStack_540;
    uStack_4c8 = &cStack_541;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    *plVar12 = (long)&UNK_0f0297d8;
    *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_500;
    *(undefined4 *)((long)plVar12 + 0xc) = uStack_500._4_4_;
    *(undefined4 *)(plVar12 + 2) = (undefined4)uStack_4f8;
    *(undefined4 *)((long)plVar12 + 0x14) = uStack_4f8._4_4_;
    *(undefined1 *)(plVar12 + 3) = plStack_4f0._0_1_;
    if ((uStack_4e8 & 1) == 0) {
      plVar12[6] = lStack_4d8;
      plVar12[4] = uStack_4e8;
      plVar12[5] = lStack_4e0;
      puVar13 = &UNK_0f0297d8;
    }
    else {
      FUN_0412e5e0(plVar12 + 4,lStack_4d8,lStack_4e0);
      puVar13 = (undefined *)*plVar12;
    }
    *(undefined4 *)(plVar12 + 7) = (undefined4)uStack_4d0;
    *(undefined4 *)((long)plVar12 + 0x3c) = uStack_4d0._4_4_;
    *(undefined4 *)(plVar12 + 8) = (undefined4)uStack_4c8;
    *(undefined4 *)((long)plVar12 + 0x44) = uStack_4c8._4_4_;
    uVar7 = *(undefined8 *)(lVar6 + 0xe8);
    pplStack_468 = (long **)(**(code **)(puVar13 + 0x10))(plVar12);
    func_0x0d62a6f0(uVar7,&uStack_520,&plStack_488,*(undefined4 *)(lVar6 + 0x108),1);
    if (pplStack_468 == &plStack_488) {
      lVar6 = 0x20;
LAB_06339375:
      (**(code **)((long)*pplStack_468 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (pplStack_468 != (long **)0x0) goto LAB_06339375;
    }
    (**(code **)(*plVar12 + 0x28))(plVar12);
    if ((uStack_4e8 & 1) == 0) {
      if (((ulong)uStack_520 & 1) != 0) goto LAB_063393ba;
LAB_06339392:
      plVar12 = (long *)plVar5[1];
      if ((long *)plVar5[1] != (long *)0x0) goto LAB_063393e0;
LAB_063393f0:
      do {
        plVar10 = (long *)plVar5[2];
        bVar20 = plVar5 != (long *)*plVar10;
        plVar5 = plVar10;
      } while (bVar20);
    }
    else {
      func_0x0412a280(lStack_4d8);
      if (((ulong)uStack_520 & 1) == 0) goto LAB_06339392;
LAB_063393ba:
      func_0x0412a280(lStack_510);
      plVar12 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) goto LAB_063393f0;
LAB_063393e0:
      do {
        plVar10 = plVar12;
        plVar12 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    plVar5 = plVar10;
    if (plVar10 == (long *)0xf56adc8) goto LAB_06339065;
    goto LAB_063390f3;
  }
LAB_06339065:
  if (cStack_541 != '\0') {
    uVar7 = (**(code **)(**(long **)(*(long *)(**(long **)(lStack_528 + 0xe8) + 8) + 8) + 0x20))();
    pplStack_4a0 = &plStack_498;
    plStack_498 = (long *)0x0;
    uStack_490 = 0;
    func_0x0633a090(&pplStack_4a0,pppppppuStack_540,&pppppppuStack_538);
    (**(code **)(*plVar14 + 0x80))(plVar14,uVar7,&pplStack_4a0,1);
    func_0x0629d8f0(&pplStack_4a0,plStack_498);
  }
  func_0x0629d8f0(&pppppppuStack_540,pppppppuStack_538);
  lVar6 = lStack_448;
  plVar12 = plStack_450;
LAB_06338d60:
  lStack_528 = lStack_528 + 0x110;
  plVar5 = plStack_458;
  if (lStack_528 == *(long *)(lVar6 + 0x10)) goto LAB_0633946d;
  goto LAB_06338d7c;
LAB_06339768:
  func_0x04882e30();
LAB_0633976d:
  iVar4 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar4 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
    plVar14 = plStack_508;
  }
  goto LAB_06338a82;
}


