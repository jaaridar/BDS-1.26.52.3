/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6338a50 (ELF vaddr 0x6238a50)
 * Label: caller-of-callee
 * Body:  [[06338a50, 06338e4d] [06338e50, 06338f0c] [06338f10, 063390dc] [063390e0, 06339147] [06339150, 063391b3] [063391c0, 06339260] [06339270, 063392f0] [06339300, 0633936d] [06339370, 0633939c] [063393a0, 0633969b] [063396a0, 063397bc]]
 * Ghidra: FUN_06338a50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06338a50(long param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  ulong uVar21;
  bool bVar22;
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
  bVar22 = (*(byte *)(plVar14 + 0x4c) & 1) == 0;
  pppppppuStack_540 = (undefined8 *******)plVar14[0x4e];
  if (bVar22) {
    pppppppuStack_540 = (undefined8 *******)((long)plVar14 + 0x261);
  }
  pppppppuStack_538 = (undefined8 *******)(ulong)(*(byte *)(plVar14 + 0x4c) >> 1);
  if (!bVar22) {
    pppppppuStack_538 = (undefined8 *******)plVar14[0x4d];
  }
  cVar3 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pppppppuStack_540);
  if (cVar3 != '\0') {
    bVar22 = (*(byte *)(plVar14 + 0x4c) & 1) != 0;
    uStack_520 = (undefined8 *******)((long)plVar14 + 0x261);
    if (bVar22) {
      uStack_520 = (undefined8 *******)plVar14[0x4e];
    }
    uStack_518 = (ulong)(*(byte *)(plVar14 + 0x4c) >> 1);
    if (bVar22) {
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
    lVar7 = lStack_410;
    if ((bStack_3f8 & 1) == 0) {
      lVar12 = lStack_408;
      if (lStack_410 != 0) {
        while (lVar7 != lVar12) {
          func_0x048b3e80(lVar12 + -0x40);
          lVar12 = lVar12 + -0x40;
        }
        lStack_408 = lVar7;
        func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      }
      lVar12 = lStack_428;
      lVar7 = lStack_420;
      if (lStack_428 != 0) {
        for (; lVar12 != lVar7; lVar7 = lVar7 + -0x50) {
          if ((*(char *)(lVar7 + -8) == '\x01') && ((*(byte *)(lVar7 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar7 + -0x20),
                            *(ulong *)(lVar7 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_420 = lVar12;
        func_0x0412a280(lStack_428,lStack_418 - lStack_428);
      }
    }
  }
  plVar6 = (long *)func_0x05f95d30(plVar14[3]);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x8d8))(plVar6);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x98);
    lStack_528 = *(long *)(lVar7 + 8);
    plStack_458 = plVar6;
    if (lStack_528 != *(long *)(lVar7 + 0x10)) {
      plVar18 = plVar14 + 0x44;
      plStack_440 = plVar14 + 0x45;
      plStack_450 = plVar18;
      lStack_448 = lVar7;
LAB_06338d7c:
      if (*(char *)(**(long **)(lStack_528 + 0xe8) + 0x88) == '\0') {
        uVar8 = (**(code **)(**(long **)(*(long *)(**(long **)(lStack_528 + 0xe8) + 8) + 8) + 0x20))
                          ();
        plVar6 = (long *)func_0x06339bd0(plVar18,uVar8);
        if (plVar6 == plStack_440) {
          cStack_541 = '\0';
          pppppppuStack_540 = &pppppppuStack_538;
          pppppppuStack_538 = (undefined8 *******)0x0;
          lStack_530 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          lStack_428 = 0;
          pppppppuVar9 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40)
          ;
          if (pppppppuVar9 == (undefined8 *******)0x0) {
            FUN_0eec74c0(0x40,0);
          }
          *(undefined1 *)(pppppppuVar9 + 4) = 0;
          pppppppuVar9[5] = (undefined8 ******)0x0;
          pppppppuVar9[6] = (undefined8 ******)0x0;
          pppppppuVar9[7] = (undefined8 ******)0x0;
          *pppppppuVar9 = (undefined8 ******)0x0;
          pppppppuVar9[1] = (undefined8 ******)0x0;
          pppppppuVar9[2] = &pppppppuStack_538;
          *(undefined1 *)(pppppppuVar9 + 3) = 1;
          lStack_530 = lStack_530 + 1;
          uStack_438 = 0;
          uStack_430 = 0;
          lStack_428 = 0;
          bVar4 = 0;
          pppppppuVar16 = pppppppuVar9;
          do {
            pppppppuStack_540 = pppppppuVar9;
            pppppppuStack_538 = pppppppuVar9;
            if (bVar4 < 2) {
              if (bVar4 != 0) goto LAB_06338ee4;
              pppppppuVar15 = (undefined8 *******)pppppppuVar16[1];
              if (pppppppuVar15 == (undefined8 *******)0x0) goto code_r0x06338e70;
            }
            else {
              pppppppuVar15 = (undefined8 *******)*pppppppuVar16;
              pppppppuVar20 = pppppppuVar16;
              if (pppppppuVar15 == (undefined8 *******)0x0) goto LAB_06338e79;
            }
            bVar4 = *(byte *)(pppppppuVar15 + 4);
            pppppppuVar16 = pppppppuVar15;
          } while( true );
        }
      }
      goto LAB_06338d60;
    }
  }
LAB_0633946d:
  uVar8 = (**(code **)(*plVar6 + 0xc60))(plVar6);
  uStack_500 = (long *)&UNK_0f534768;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
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
  func_0x06242cd0(&uStack_438,uVar8,&plStack_488);
  plVar6 = plStack_508;
  plStack_488 = (long *)0x0;
  plStack_480 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    puStack_478 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    plVar18 = plVar14 + 1;
    lVar7 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = plStack_480;
    puStack_478 = (undefined8 *)0x0;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_480 + 1;
      lVar7 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  func_0x0d2f8f10(&pppppppuStack_540,&uStack_438,uVar8);
  func_0x06336d60(plVar6 + 0x4f,plVar6[0x50]);
  plVar6[0x4f] = (long)pppppppuStack_540;
  plVar6[0x50] = (long)pppppppuStack_538;
  plVar6[0x51] = lStack_530;
  if (lStack_530 == 0) {
    plVar6[0x4f] = (long)(plVar6 + 0x50);
  }
  else {
    pppppppuStack_540 = &pppppppuStack_538;
    pppppppuStack_538[2] = (undefined8 ******)(plVar6 + 0x50);
    pppppppuStack_538 = (undefined8 *******)0x0;
    lStack_530 = 0;
  }
  func_0x06336d60(&pppppppuStack_540,pppppppuStack_538);
  func_0x0d3086c0(&uStack_438);
  lVar12 = lStack_4c0;
  uStack_500 = (long *)&UNK_0f02ea88;
  lVar7 = lStack_4b8;
  if (lStack_4c0 != 0) {
    for (; lVar12 != lVar7; lVar7 = lVar7 + -0x10) {
      plVar14 = *(long **)(lVar7 + -8);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar6 = plVar14 + 1;
        lVar1 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
      }
    }
    lStack_4b8 = lVar12;
    func_0x0412a280(lStack_4c0,lStack_4b0 - lStack_4c0);
  }
  plVar14 = plStack_4f0;
  uStack_500 = (long *)&UNK_0f534768;
  if (plStack_4f0 != (long *)0x0) {
    *(undefined1 *)uStack_4f8 = 0;
    LOCK();
    plVar6 = plStack_4f0 + 1;
    lVar7 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar7 != 0) {
      return;
    }
    (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
    func_0x0412c2d0(plVar14);
    return;
  }
  *(undefined1 *)uStack_4f8 = 0;
  return;
code_r0x06338e70:
  pppppppuVar20 = pppppppuVar16 + 1;
LAB_06338e79:
  ppppppuVar10 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar10 == (undefined8 ******)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar10 + 4) = 1;
  ppppppuVar10[5] = (undefined8 *****)0x0;
  ppppppuVar10[6] = (undefined8 *****)0x0;
  ppppppuVar10[7] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = pppppppuVar16;
  *pppppppuVar20 = ppppppuVar10;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar10);
  lStack_530 = lStack_530 + 1;
LAB_06338ee4:
  uStack_438 = 0;
  uStack_430 = 0;
  lStack_428 = 0;
  pppppppuVar9 = &pppppppuStack_538;
  pppppppuVar16 = pppppppuStack_538;
  while (pppppppuVar15 = pppppppuVar9, pppppppuVar16 != (undefined8 *******)0x0) {
    while (pppppppuVar9 = pppppppuVar16, *(byte *)(pppppppuVar9 + 4) < 3) {
      if (*(byte *)(pppppppuVar9 + 4) == 2) goto LAB_06338fa2;
      pppppppuVar16 = (undefined8 *******)pppppppuVar9[1];
      if ((undefined8 *******)pppppppuVar9[1] == (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuVar9 + 1;
        goto LAB_06338f37;
      }
    }
    pppppppuVar16 = (undefined8 *******)*pppppppuVar9;
  }
LAB_06338f37:
  ppppppuVar10 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar10 == (undefined8 ******)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar10 + 4) = 2;
  ppppppuVar10[5] = (undefined8 *****)0x0;
  ppppppuVar10[6] = (undefined8 *****)0x0;
  ppppppuVar10[7] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = pppppppuVar9;
  *pppppppuVar15 = ppppppuVar10;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar10);
  lStack_530 = lStack_530 + 1;
LAB_06338fa2:
  uStack_438 = 0;
  uStack_430 = 0;
  lStack_428 = 0;
  pppppppuVar9 = &pppppppuStack_538;
  pppppppuVar16 = pppppppuStack_538;
  while (pppppppuVar15 = pppppppuVar9, pppppppuVar16 != (undefined8 *******)0x0) {
    while (pppppppuVar9 = pppppppuVar16, *(byte *)(pppppppuVar9 + 4) < 4) {
      if (*(byte *)(pppppppuVar9 + 4) == 3) goto LAB_0633904e;
      pppppppuVar16 = (undefined8 *******)pppppppuVar9[1];
      if ((undefined8 *******)pppppppuVar9[1] == (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuVar9 + 1;
        goto LAB_06338fe8;
      }
    }
    pppppppuVar16 = (undefined8 *******)*pppppppuVar9;
  }
LAB_06338fe8:
  ppppppuVar10 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (ppppppuVar10 == (undefined8 ******)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  *(undefined1 *)(ppppppuVar10 + 4) = 3;
  ppppppuVar10[5] = (undefined8 *****)0x0;
  ppppppuVar10[6] = (undefined8 *****)0x0;
  ppppppuVar10[7] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = pppppppuVar9;
  *pppppppuVar15 = ppppppuVar10;
  if ((undefined8 *******)*pppppppuStack_540 != (undefined8 *******)0x0) {
    pppppppuStack_540 = (undefined8 *******)*pppppppuStack_540;
  }
  func_0x048bed00(pppppppuStack_538,ppppppuVar10);
  lStack_530 = lStack_530 + 1;
LAB_0633904e:
  puVar17 = _DAT_0f56adc0;
  if (_DAT_0f56adc0 != (undefined8 *)&DAT_0f56adc8) {
LAB_063390f3:
    bVar22 = (*(byte *)(puVar17 + 5) & 1) != 0;
    puVar13 = (undefined *)((long)puVar17 + 0x29);
    if (bVar22) {
      puVar13 = (undefined *)puVar17[7];
    }
    uVar19 = (ulong)(*(byte *)(puVar17 + 5) >> 1);
    if (bVar22) {
      uVar19 = puVar17[6];
    }
    func_0x0eee2dd0(&uStack_438,0,0x408);
    if (uVar19 < 0x400) {
      if (uVar19 != 0) {
        func_0x0eee2ee0(&uStack_438,puVar13,uVar19);
      }
      lVar7 = lStack_528;
      uStack_38 = uVar19;
      *(undefined1 *)((long)&uStack_438 + uVar19) = 0;
      uVar19 = uStack_38;
      if (0xfffffffffffffff7 < uStack_38) goto LAB_06339768;
      if (uStack_38 < 0x17) {
        uStack_520 = (undefined8 *******)CONCAT71(uStack_520._1_7_,(char)uStack_38 * '\x02');
        lVar12 = (long)&uStack_520 + 1;
        if (uStack_38 == 0) {
          uVar19 = 0;
          goto LAB_06339225;
        }
      }
      else {
        uVar21 = (uStack_38 | 7) + 1;
        if ((uStack_38 | 7) == 0x17) {
          uVar21 = 0x1a;
        }
        lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (lVar12 == 0) {
          FUN_0eec74c0(uVar21,0);
        }
        uStack_520 = (undefined8 *******)(uVar21 | 1);
        uStack_518 = uVar19;
        lStack_510 = lVar12;
      }
      func_0x0eee2f00(lVar12,&uStack_438,uVar19);
    }
    else {
      uStack_520 = (undefined8 *******)((ulong)uStack_520 & 0xffffffffffffff00);
      uVar19 = 0;
      lVar12 = (long)&uStack_520 + 1;
      lVar7 = lStack_528;
    }
LAB_06339225:
    *(undefined1 *)(lVar12 + uVar19) = 0;
    plVar14 = plStack_508;
    uStack_500 = plStack_508;
    uStack_4f8 = &lStack_528;
    plStack_4f0 = (long *)CONCAT71(plStack_4f0._1_7_,*(undefined1 *)(puVar17 + 4));
    if ((*(byte *)(puVar17 + 5) & 1) == 0) {
      lStack_4d8 = puVar17[7];
      uStack_4e8 = puVar17[5];
      lStack_4e0 = puVar17[6];
    }
    else {
      func_0x0412e5e0(&uStack_4e8,puVar17[7],puVar17[6]);
    }
    uStack_4d0 = &pppppppuStack_540;
    uStack_4c8 = &cStack_541;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0x48,0);
    }
    *plVar6 = (long)&UNK_0f0297d8;
    *(undefined4 *)(plVar6 + 1) = (undefined4)uStack_500;
    *(undefined4 *)((long)plVar6 + 0xc) = uStack_500._4_4_;
    *(undefined4 *)(plVar6 + 2) = (undefined4)uStack_4f8;
    *(undefined4 *)((long)plVar6 + 0x14) = uStack_4f8._4_4_;
    *(undefined1 *)(plVar6 + 3) = plStack_4f0._0_1_;
    if ((uStack_4e8 & 1) == 0) {
      plVar6[6] = lStack_4d8;
      plVar6[4] = uStack_4e8;
      plVar6[5] = lStack_4e0;
      puVar13 = &UNK_0f0297d8;
    }
    else {
      func_0x0412e5e0(plVar6 + 4,lStack_4d8,lStack_4e0);
      puVar13 = (undefined *)*plVar6;
    }
    *(undefined4 *)(plVar6 + 7) = (undefined4)uStack_4d0;
    *(undefined4 *)((long)plVar6 + 0x3c) = uStack_4d0._4_4_;
    *(undefined4 *)(plVar6 + 8) = (undefined4)uStack_4c8;
    *(undefined4 *)((long)plVar6 + 0x44) = uStack_4c8._4_4_;
    uVar8 = *(undefined8 *)(lVar7 + 0xe8);
    pplStack_468 = (long **)(**(code **)(puVar13 + 0x10))(plVar6);
    func_0x0d62a6f0(uVar8,&uStack_520,&plStack_488,*(undefined4 *)(lVar7 + 0x108),1);
    if (pplStack_468 == &plStack_488) {
      lVar7 = 0x20;
LAB_06339375:
      (**(code **)((long)*pplStack_468 + lVar7))();
    }
    else {
      lVar7 = 0x28;
      if (pplStack_468 != (long **)0x0) goto LAB_06339375;
    }
    (**(code **)(*plVar6 + 0x28))(plVar6);
    if ((uStack_4e8 & 1) == 0) {
      if (((ulong)uStack_520 & 1) != 0) goto LAB_063393ba;
LAB_06339392:
      puVar2 = (undefined8 *)puVar17[1];
      if ((undefined8 *)puVar17[1] != (undefined8 *)0x0) goto LAB_063393e0;
LAB_063393f0:
      do {
        puVar11 = (undefined8 *)puVar17[2];
        bVar22 = puVar17 != (undefined8 *)*puVar11;
        puVar17 = puVar11;
      } while (bVar22);
    }
    else {
      func_0x0412a280(lStack_4d8);
      if (((ulong)uStack_520 & 1) == 0) goto LAB_06339392;
LAB_063393ba:
      func_0x0412a280(lStack_510);
      puVar2 = (undefined8 *)puVar17[1];
      if ((undefined8 *)puVar17[1] == (undefined8 *)0x0) goto LAB_063393f0;
LAB_063393e0:
      do {
        puVar11 = puVar2;
        puVar2 = (undefined8 *)*puVar11;
      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
    }
    puVar17 = puVar11;
    if (puVar11 == (undefined8 *)&DAT_0f56adc8) goto LAB_06339065;
    goto LAB_063390f3;
  }
LAB_06339065:
  if (cStack_541 != '\0') {
    uVar8 = (**(code **)(**(long **)(*(long *)(**(long **)(lStack_528 + 0xe8) + 8) + 8) + 0x20))();
    pplStack_4a0 = &plStack_498;
    plStack_498 = (long *)0x0;
    uStack_490 = 0;
    func_0x0633a090(&pplStack_4a0,pppppppuStack_540,&pppppppuStack_538);
    (**(code **)(*plVar14 + 0x80))(plVar14,uVar8,&pplStack_4a0,1);
    func_0x0629d8f0(&pplStack_4a0,plStack_498);
  }
  func_0x0629d8f0(&pppppppuStack_540,pppppppuStack_538);
  lVar7 = lStack_448;
  plVar18 = plStack_450;
LAB_06338d60:
  lStack_528 = lStack_528 + 0x110;
  plVar6 = plStack_458;
  if (lStack_528 == *(long *)(lVar7 + 0x10)) goto LAB_0633946d;
  goto LAB_06338d7c;
LAB_06339768:
  func_0x04882e30();
LAB_0633976d:
  iVar5 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar5 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    plVar14 = plStack_508;
  }
  goto LAB_06338a82;
}


