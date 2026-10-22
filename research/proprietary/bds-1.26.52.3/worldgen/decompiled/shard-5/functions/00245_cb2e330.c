/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc2e330 (ELF vaddr 0xcb2e330)
 * Label: caller-of-callee
 * Body:  [[0cc2e330, 0cc2e506] [0cc2e510, 0cc2ecc7] [0cc2ecd0, 0cc2ee17] [0cc2ee20, 0cc2f2a6] [0cc2f2b0, 0cc2f339] [0cc2f340, 0cc2f375] [0cc2f380, 0cc2f409] [0cc2f410, 0cc2f484] [0cc2f490, 0cc2f4ca] [0cc2f4d0, 0cc2f6e6] [0cc2f6f0, 0cc2f76d] [0cc2f770, 0cc2f7c9] [0cc2f7d0, 0cc2f80a] [0cc2f810, 0cc2f901] [0cc2f910, 0cc2fb09] [0cc2fb10, 0cc2fbf5] [0cc2fc00, 0cc2fc61] [0cc2fc70, 0cc2fc98] [0cc2fca0, 0cc2fe57] [0cc2fe60, 0cc2fefd] [0cc2ff00, 0cc30183] [0cc30190, 0cc3034e] [0cc30350, 0cc3040a]]
 * Ghidra: FUN_0cc2e330
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0cc2e330(long ******param_1,undefined8 param_2,byte ****param_3,byte *param_4,
                  byte ****param_5,byte **param_6,undefined1 param_7)

{
  long *plVar1;
  long *****ppppplVar2;
  byte bVar3;
  long *******ppppppplVar4;
  byte ***pppbVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long ******pppppplVar13;
  byte **ppbVar14;
  long *******ppppppplVar15;
  byte *****pppppbVar16;
  byte ****ppppbVar17;
  byte **ppbVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  ulong uVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  undefined4 *puVar24;
  long ******pppppplVar25;
  long *******ppppppplVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  byte ***pppbVar29;
  byte ****ppppbVar30;
  long lVar31;
  byte ****ppppbVar32;
  byte *pbVar33;
  ulong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  char cStack_501;
  long ******pppppplStack_500;
  byte ****ppppbStack_4f8;
  byte **ppbStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  undefined1 uStack_4de;
  undefined5 uStack_4dd;
  long *******ppppppplStack_4d8;
  byte ***pppbStack_4d0;
  undefined4 uStack_4c8;
  byte bStack_4c0;
  byte ***apppbStack_4b8 [2];
  undefined8 uStack_4a8;
  byte ****ppppbStack_4a0;
  byte *pbStack_498;
  byte bStack_490;
  undefined7 uStack_48f;
  undefined8 uStack_480;
  byte bStack_468;
  undefined1 uStack_467;
  undefined2 uStack_466;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 *puStack_458;
  long lStack_450;
  byte **ppbStack_448;
  undefined1 auStack_440 [20];
  undefined4 uStack_42c;
  byte ****ppppbStack_428;
  byte ****ppppbStack_420;
  byte *pbStack_418;
  byte *pbStack_410;
  long lStack_408;
  undefined1 auStack_400 [104];
  undefined1 auStack_398 [16];
  byte **ppbStack_388;
  char *pcStack_380;
  byte *****pppppbStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  byte *pbStack_330;
  undefined1 auStack_328 [16];
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  byte ****ppppbStack_308;
  long *****ppppplStack_300;
  byte **ppbStack_2f8;
  byte *****pppppbStack_2f0;
  byte **ppbStack_2e8;
  byte ****ppppbStack_2e0;
  long *****ppppplStack_2d8;
  byte **ppbStack_2d0;
  byte *****pppppbStack_2c8;
  long lStack_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 *puStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  pppppplStack_500 = param_1;
  ppbStack_4f0 = param_6;
  ppppbStack_4a0 = param_5;
  uVar10 = func_0x048648e0(param_2,&UNK_011ed181);
  func_0x04863480(auStack_440,uVar10);
  func_0x04863060(auStack_328,0);
  func_0x04863060(&ppppbStack_308,7);
  pbStack_330 = param_4;
  uVar10 = func_0x04864680(auStack_328,&UNK_011ed181);
  func_0x04863790(uVar10,&ppppbStack_308);
  func_0x04863610(&ppppbStack_308);
  func_0x04863060(auStack_398,0);
  func_0x04863060(&ppppbStack_308,7);
  uVar10 = func_0x04864680(auStack_398,&UNK_011ed181);
  func_0x04863790(uVar10,&ppppbStack_308);
  func_0x04863610(&ppppbStack_308);
  if ((pppppplStack_500[0x1a] == (long *****)0x0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)pppppplStack_500[0x1a] == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar11 = func_0x0ce66280(pppppplStack_500[0x1c]);
  ppppbStack_4f8 = param_3;
  if ((lVar11 != 0) && (ppbVar14 = *(byte ***)(lVar11 + 0x10), ppbVar14 != (byte **)0x0)) {
    ppbStack_448 = ppbStack_4f0 + 2;
    pppppbVar16 = &ppppbStack_428;
    do {
      uVar7 = func_0x048641f0(auStack_440);
      ppbVar18 = ppbVar14 + 2;
      func_0x048650e0(&pbStack_498,auStack_440,ppbVar18);
      uVar8 = func_0x048641f0(auStack_440);
      if (uVar8 < uVar7) {
        pbVar33 = ppbVar14[0x16];
        if (pbVar33 != (byte *)0x0) {
          ppppbStack_308 = (byte ****)CONCAT71(ppppbStack_308._1_7_,param_7);
          cVar6 = (**(code **)(*(long *)pbVar33 + 0x30))
                            (pbVar33,ppbStack_448,&pbStack_498,ppppbStack_4a0,&ppppbStack_308);
          if (cVar6 == '\0') {
            func_0x04863610(&pbStack_498);
            goto LAB_0cc300ef;
          }
        }
        ppppbStack_428 = (byte ****)((ulong)ppppbStack_428 & 0xffffffffffffff00);
        pbStack_410 = (byte *)((ulong)pbStack_410 & 0xffffffffffffff00);
        if (*(char *)(ppbVar14 + 0xd) == '\x01') {
          ppppbStack_428 = (byte ****)ppbVar14[10];
          ppppbStack_420 = (byte ****)0x0;
          ppppbVar32 = (byte ****)ppbVar14[0xb];
          if (((ulong)ppppbVar32 & 0x80000000000000) != 0) {
            lStack_450 = *(long *)(((ulong)ppppbVar32 & 0xff00ffffffffffff) - 8);
            lVar11 = lStack_450 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
            if (lVar11 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar11,8);
            }
            lVar11 = lStack_450;
            *plVar12 = lStack_450;
            func_0x0eee2f00(plVar12 + 1,(ulong)ppppbVar32 & 0xff00ffffffffffff);
            *(undefined1 *)((long)plVar12 + lVar11 + 8) = 0;
            ppppbVar32 = (byte ****)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pbStack_418 = (byte *)0x0;
          pbVar33 = ppbVar14[0xc];
          ppppbStack_420 = ppppbVar32;
          if (((ulong)pbVar33 & 0x80000000000000) != 0) {
            lStack_450 = *(long *)(((ulong)pbVar33 & 0xff00ffffffffffff) - 8);
            lVar11 = lStack_450 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
            if (lVar11 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar11,8);
            }
            lVar11 = lStack_450;
            *plVar12 = lStack_450;
            func_0x0eee2f00(plVar12 + 1,(ulong)pbVar33 & 0xff00ffffffffffff);
            *(undefined1 *)((long)plVar12 + lVar11 + 8) = 0;
            pbVar33 = (byte *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          pbStack_410 = (byte *)CONCAT71(pbStack_410._1_7_,1);
          pbStack_418 = pbVar33;
          cVar6 = func_0x04fa7a10(ppppbStack_4a0,pppppbVar16);
          if (cVar6 != '\0') goto LAB_0cc2e741;
LAB_0cc2e8b0:
          puVar27 = auStack_328;
          if (*(char *)(ppbVar14 + 0x18) != '\0') {
            puVar27 = auStack_398;
          }
          uVar10 = func_0x04864680(puVar27,&UNK_011ed181);
          uVar10 = func_0x04864970(uVar10,ppbVar18);
          bVar35 = true;
          func_0x04863740(uVar10,&pbStack_498);
        }
        else {
LAB_0cc2e741:
          ppppbVar32 = (byte ****)ppbVar14[7];
          ppppbVar17 = (byte ****)ppbVar14[8];
          auStack_4e8[0] = 0x12;
          auStack_4e8._1_7_ = 0x656e6f706d6f63;
          uStack_4e0 = 0x6e;
          uStack_4df = 0x74;
          uStack_4de = 0;
          uStack_42c = 10;
          if (ppppbVar32 == ppppbVar17) goto LAB_0cc2e8b0;
          do {
            ppppbVar30 = ppppbVar32 + 1;
            ppppbStack_308 = (byte ****)&uStack_42c;
            ppppplStack_300 = (long *****)auStack_4e8;
            ppbStack_2e8 = ppbStack_4f0;
            cStack_501 = '\x01';
            ppbStack_388 = ppbStack_4f0;
            pcStack_380 = &cStack_501;
            pppppbStack_378 = &ppppbStack_308;
            ppbStack_2f8 = ppbVar18;
            pppppbStack_2f0 = pppppbVar16;
            ppppbStack_2e0 = ppppbStack_308;
            ppppplStack_2d8 = ppppplStack_300;
            ppbStack_2d0 = ppbVar18;
            pppppbStack_2c8 = pppppbVar16;
            if ((ulong)*(uint *)((long)ppppbVar32 + 4) == 0xffffffff) {
              func_0x04931450();
              goto LAB_0cc303fa;
            }
            apppbStack_4b8[0] = &ppbStack_388;
            (**(code **)(&UNK_0f3f96b8 + (ulong)*(uint *)((long)ppppbVar32 + 4) * 8))
                      (apppbStack_4b8,ppppbVar32);
            cVar6 = cStack_501;
          } while ((cStack_501 == '\x01') && (ppppbVar32 = ppppbVar30, ppppbVar30 != ppppbVar17));
          if ((auStack_4e8[0] & 1) != 0) {
            func_0x0412a280(ppppppplStack_4d8,
                            CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]) & 0xfffffffffffffffe);
            if (cVar6 == '\0') goto LAB_0cc2e975;
            goto LAB_0cc2e8b0;
          }
          if (cStack_501 != '\0') goto LAB_0cc2e8b0;
LAB_0cc2e975:
          bVar35 = false;
        }
        if ((char)pbStack_410 == '\x01') {
          if (((ulong)pbStack_418 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pbStack_418 & 0xff00ffffffffffff) - 8);
          }
          pbStack_418 = (byte *)0x0;
          if (((ulong)ppppbStack_420 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppbStack_420 & 0xff00ffffffffffff) - 8);
          }
        }
        func_0x04863610(&pbStack_498);
        if (!bVar35) goto LAB_0cc300ef;
      }
      else {
        func_0x04863610(&pbStack_498);
      }
      ppbVar14 = (byte **)*ppbVar14;
    } while (ppbVar14 != (byte **)0x0);
  }
  ppbVar14 = ppbStack_4f0;
  if ((pppppplStack_500[0x1a] == (long *****)0x0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)pppppplStack_500[0x1a] == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppppplStack_300 = pppppplStack_500[0x1c];
  pppppbStack_378 = (byte *****)0x0;
  uStack_370 = 0;
  ppbStack_388 = (byte **)0x0;
  pcStack_380 = (char *)0x0;
  uStack_368 = 0x3f800000;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  ppbStack_2f8 = (byte **)CONCAT44(ppbStack_2f8._4_4_,0xffffffff);
  pppppbStack_2f0 = &ppppbStack_2e0;
  ppbStack_2e8 = (byte **)0x800000000;
  puStack_1e0 = auStack_1d0;
  uStack_1d8 = 0x800000000;
  uStack_50 = 0xfbf8;
  uStack_4e = 1;
  uStack_4c = 0xffffffff00000000;
  uStack_40 = 0;
  uStack_38 = 0;
  ppppbStack_308 = (byte ****)&UNK_0f4e3998;
  func_0x04867c60(&pbStack_498);
  func_0x04867c90(apppbStack_4b8,&pbStack_498,auStack_328);
  func_0x0ed62aa0(&ppppbStack_428,apppbStack_4b8);
  cVar6 = func_0x0cd2c710(&ppppbStack_308,&ppppbStack_428,&ppbStack_388,ppbVar14 + 10);
  func_0x04907660(auStack_400);
  if (pbStack_418 != (byte *)0x0) {
    pbStack_410 = pbStack_418;
    func_0x0412a280(pbStack_418,lStack_408 - (long)pbStack_418);
  }
  if (((ulong)apppbStack_4b8[0] & 1) != 0) {
    func_0x0412a280(uStack_4a8,(ulong)apppbStack_4b8[0] & 0xfffffffffffffffe);
  }
  if (cVar6 == '\0') {
    if ((*pbStack_330 & 1) == 0) {
      ppppbStack_428 = (byte ****)(pbStack_330 + 1);
    }
    else {
      ppppbStack_428 = *(byte *****)(pbStack_330 + 0x10);
    }
    func_0x09e34180(1,3,6,&UNK_0148affe,&ppppbStack_428);
    func_0x0ed6c330(&ppppbStack_428,&ppbStack_2f8);
    ppppbVar32 = ppppbStack_420;
    if (ppppbStack_428 != ppppbStack_420) {
      ppppbVar17 = ppppbStack_428;
      do {
        apppbStack_4b8[0] = (byte ***)((long)ppppbVar17 + 1);
        if (((ulong)*ppppbVar17 & 1) != 0) {
          apppbStack_4b8[0] = ppppbVar17[2];
        }
        func_0x09adffe0(1,3,6,apppbStack_4b8);
        ppppbVar17 = ppppbVar17 + 3;
      } while (ppppbVar17 != ppppbVar32);
    }
    ppppbVar17 = ppppbStack_428;
    ppppbVar32 = ppppbStack_420;
    if (ppppbStack_428 != (byte ****)0x0) {
      for (; ppppbVar17 != ppppbVar32; ppppbVar32 = ppppbVar32 + -3) {
        if (((ulong)ppppbVar32[-3] & 1) != 0) {
          func_0x0412a280(ppppbVar32[-1],(ulong)ppppbVar32[-3] & 0xfffffffffffffffe);
        }
      }
      ppppbStack_420 = ppppbVar17;
      func_0x0412a280(ppppbStack_428,(long)pbStack_418 - (long)ppppbStack_428);
    }
    auStack_4e8[0] = 0;
    bStack_4c0 = 0;
  }
  else {
    func_0x08d5d5f0(auStack_4e8,&ppbStack_388);
    bStack_4c0 = 1;
  }
  pbStack_498 = &UNK_0ef40ca0;
  if ((bStack_490 & 1) != 0) {
    func_0x0412a280(uStack_480,CONCAT71(uStack_48f,bStack_490) & 0xfffffffffffffffe);
  }
  func_0x04867c50(&pbStack_498);
  func_0x0490a470(&ppppbStack_308);
  func_0x0cc13b10(&ppbStack_388);
  ppppbVar32 = ppppbStack_4f8;
  if (bStack_4c0 != 1) {
LAB_0cc300ef:
    uVar34 = 0;
    goto LAB_0cc303ba;
  }
  func_0x08d5c720(ppppbStack_4f8);
  pppbVar5 = (byte ***)CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]);
  auStack_4e8[0] = 0;
  auStack_4e8._1_7_ = 0;
  pppbVar29 = *ppppbVar32;
  *ppppbVar32 = pppbVar5;
  if (pppbVar29 != (byte ***)0x0) {
    func_0x0412a280(pppbVar29,(long)ppppbVar32[1] << 3);
  }
  pppppplVar19 = (long ******)
                 CONCAT53(uStack_4dd,CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0)));
  ppppbVar32[1] = (byte ***)pppppplVar19;
  uStack_4e0 = 0;
  uStack_4df = 0;
  uStack_4de = 0;
  uStack_4dd = 0;
  ppppbVar32[3] = pppbStack_4d0;
  *(undefined4 *)(ppppbVar32 + 4) = uStack_4c8;
  ppppbStack_4a0 = ppppbVar32 + 2;
  ppppbVar32[2] = (byte ***)ppppppplStack_4d8;
  if (pppbStack_4d0 == (byte ***)0x0) {
    ppppppplVar26 = ppppppplStack_4d8;
    if (bStack_4c0 != 0) {
      while (ppppppplVar26 != (long *******)0x0) {
        ppppppplVar4 = (long *******)*ppppppplVar26;
        pppppplVar19 = ppppppplVar26[6];
        if (pppppplVar19 == (long ******)0x0) {
LAB_0cc2ee57:
          bVar3 = *(byte *)(ppppppplVar26 + 2);
        }
        else {
          LOCK();
          pppppplVar13 = pppppplVar19 + 1;
          ppppplVar2 = *pppppplVar13;
          *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
          UNLOCK();
          if (ppppplVar2 != (long *****)0x0) goto LAB_0cc2ee57;
          (*(code *)(*pppppplVar19)[2])(pppppplVar19);
          func_0x0412c2d0(pppppplVar19);
          bVar3 = *(byte *)(ppppppplVar26 + 2);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(ppppppplVar26[4],(ulong)ppppppplVar26[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(ppppppplVar26,0x38);
        ppppppplVar26 = ppppppplVar4;
      }
      goto LAB_0cc2eedc;
    }
  }
  else {
    pppppplVar13 = ppppppplStack_4d8[1];
    if (((ulong)pppppplVar19 & (long)pppppplVar19 - 1U) == 0) {
      pppppplVar13 = (long ******)((ulong)pppppplVar13 & (long)pppppplVar19 - 1U);
    }
    else if (pppppplVar19 <= pppppplVar13) {
      if (((ulong)pppppplVar13 | (ulong)pppppplVar19) >> 0x20 == 0) {
        pppppplVar13 = (long ******)
                       (((ulong)pppppplVar13 & 0xffffffff) % ((ulong)pppppplVar19 & 0xffffffff));
      }
      else {
        pppppplVar13 = (long ******)((ulong)pppppplVar13 % (ulong)pppppplVar19);
      }
    }
    (*ppppbStack_4f8)[(long)pppppplVar13] = (byte **)ppppbStack_4a0;
    ppppppplStack_4d8 = (long *******)0x0;
    pppbStack_4d0 = (byte ***)0x0;
    if (bStack_4c0 != 0) {
LAB_0cc2eedc:
      lVar11 = CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]);
      auStack_4e8[0] = 0;
      auStack_4e8._1_7_ = 0;
      if (lVar11 != 0) {
        func_0x0412a280(lVar11,CONCAT53(uStack_4dd,
                                        CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0))) << 3);
      }
    }
  }
  uVar10 = func_0x04864680(auStack_398,&UNK_011ed181);
  cVar6 = func_0x04864220(uVar10);
  if (cVar6 == '\0') {
    if ((pppppplStack_500[0x1a] == (long *****)0x0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)pppppplStack_500[0x1a] == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppplStack_300 = pppppplStack_500[0x1c];
    pppppbStack_378 = (byte *****)0x0;
    uStack_370 = 0;
    ppbStack_388 = (byte **)0x0;
    pcStack_380 = (char *)0x0;
    uStack_368 = 0x3f800000;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    ppbStack_2f8 = (byte **)CONCAT44(ppbStack_2f8._4_4_,0xffffffff);
    pppppbStack_2f0 = &ppppbStack_2e0;
    ppbStack_2e8 = (byte **)0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfbf8;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    ppppbStack_308 = (byte ****)&UNK_0f4e39b8;
    func_0x04867c60(&pbStack_498);
    func_0x04867c90(apppbStack_4b8,&pbStack_498,auStack_398);
    func_0x0ed684d0(&ppppbStack_428,apppbStack_4b8);
    cVar6 = func_0x0cd2c710(&ppppbStack_308,&ppppbStack_428,&ppbStack_388,ppbVar14 + 10);
    func_0x04907660(auStack_400);
    if (pbStack_418 != (byte *)0x0) {
      pbStack_410 = pbStack_418;
      func_0x0412a280(pbStack_418,lStack_408 - (long)pbStack_418);
    }
    if (((ulong)apppbStack_4b8[0] & 1) != 0) {
      func_0x0412a280(uStack_4a8,(ulong)apppbStack_4b8[0] & 0xfffffffffffffffe);
    }
    if (cVar6 == '\0') {
      if ((*pbStack_330 & 1) == 0) {
        ppppbStack_428 = (byte ****)(pbStack_330 + 1);
      }
      else {
        ppppbStack_428 = *(byte *****)(pbStack_330 + 0x10);
      }
      func_0x09e34180(1,3,6,&UNK_0148affe,&ppppbStack_428);
      func_0x0ed6c330(&ppppbStack_428,&ppbStack_2f8);
      ppppbVar32 = ppppbStack_420;
      if (ppppbStack_428 != ppppbStack_420) {
        ppppbVar17 = ppppbStack_428;
        do {
          apppbStack_4b8[0] = (byte ***)((long)ppppbVar17 + 1);
          if (((ulong)*ppppbVar17 & 1) != 0) {
            apppbStack_4b8[0] = ppppbVar17[2];
          }
          func_0x09adffe0(1,3,6,apppbStack_4b8);
          ppppbVar17 = ppppbVar17 + 3;
        } while (ppppbVar17 != ppppbVar32);
      }
      ppppbVar17 = ppppbStack_428;
      ppppbVar32 = ppppbStack_420;
      if (ppppbStack_428 != (byte ****)0x0) {
        for (; ppppbVar17 != ppppbVar32; ppppbVar32 = ppppbVar32 + -3) {
          if (((ulong)ppppbVar32[-3] & 1) != 0) {
            func_0x0412a280(ppppbVar32[-1],(ulong)ppppbVar32[-3] & 0xfffffffffffffffe);
          }
        }
        ppppbStack_420 = ppppbVar17;
        func_0x0412a280(ppppbStack_428,(long)pbStack_418 - (long)ppppbStack_428);
      }
      auStack_4e8[0] = 0;
      bStack_4c0 = 0;
    }
    else {
      func_0x08d5d5f0(auStack_4e8,&ppbStack_388);
      bStack_4c0 = 1;
    }
    pbStack_498 = &UNK_0ef40ca0;
    if ((bStack_490 & 1) != 0) {
      pbStack_498 = &UNK_0ef40ca0;
      func_0x0412a280(uStack_480,CONCAT71(uStack_48f,bStack_490) & 0xfffffffffffffffe);
    }
    func_0x04867c50(&pbStack_498);
    func_0x0490a470(&ppppbStack_308);
    func_0x0cc13b10(&ppbStack_388);
    ppppbVar32 = ppppbStack_4f8;
    ppppppplVar26 = ppppppplStack_4d8;
    if (bStack_4c0 != 1) goto LAB_0cc300ef;
    while (ppppppplVar26 != (long *******)0x0) {
LAB_0cc2f1e9:
      pppppplStack_500 = (long ******)((long)ppppppplVar26 + 0x11);
      bVar35 = (*(byte *)(ppppppplVar26 + 2) & 1) == 0;
      pppppplVar19 = ppppppplVar26[4];
      if (bVar35) {
        pppppplVar19 = pppppplStack_500;
      }
      pppppplVar13 = (long ******)(ulong)(*(byte *)(ppppppplVar26 + 2) >> 1);
      if (!bVar35) {
        pppppplVar13 = ppppppplVar26[3];
      }
      pppppplVar13 = (long ******)func_0x04883620(&ppppbStack_308,pppppplVar19,pppppplVar13);
      pppppplVar19 = (long ******)ppppbVar32[1];
      if (pppppplVar19 != (long ******)0x0) {
        uVar34 = (long)pppppplVar19 - ((ulong)pppppplVar19 >> 1 & 0x5555555555555555);
        uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
        uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar34 >> 0x38 < 2) {
          pppppplVar25 = (long ******)((long)pppppplVar19 - 1U & (ulong)pppppplVar13);
          ppbVar14 = (*ppppbStack_4f8)[(long)pppppplVar25];
        }
        else {
          pppppplVar25 = pppppplVar13;
          if (pppppplVar19 <= pppppplVar13) {
            if (((ulong)pppppplVar13 | (ulong)pppppplVar19) >> 0x20 == 0) {
              pppppplVar25 = (long ******)
                             (((ulong)pppppplVar13 & 0xffffffff) %
                             ((ulong)pppppplVar19 & 0xffffffff));
              ppbVar14 = (*ppppbStack_4f8)[(long)pppppplVar25];
              goto joined_r0x0cc2f462;
            }
            pppppplVar25 = (long ******)((ulong)pppppplVar13 % (ulong)pppppplVar19);
          }
          ppbVar14 = (*ppppbStack_4f8)[(long)pppppplVar25];
        }
joined_r0x0cc2f462:
        if ((ppbVar14 != (byte **)0x0) && (pbVar33 = *ppbVar14, pbVar33 != (byte *)0x0)) {
          if ((*(byte *)(ppppppplVar26 + 2) & 1) == 0) {
            pppppplVar22 = (long ******)(ulong)(*(byte *)(ppppppplVar26 + 2) >> 1);
          }
          else {
            pppppplVar22 = ppppppplVar26[3];
            pppppplStack_500 = ppppppplVar26[4];
          }
          if (1 < (byte)(uVar34 >> 0x38)) {
            do {
              pppppplVar20 = *(long *******)(pbVar33 + 8);
              if (pppppplVar20 == pppppplVar13) {
                bVar3 = pbVar33[0x10];
                if ((bVar3 & 1) == 0) {
                  pppppplVar20 = (long ******)(ulong)(bVar3 >> 1);
                }
                else {
                  pppppplVar20 = *(long *******)(pbVar33 + 0x18);
                }
                if (pppppplVar20 == pppppplVar22) {
                  if ((bVar3 & 1) == 0) {
                    pbVar28 = pbVar33 + 0x11;
                  }
                  else {
                    pbVar28 = *(byte **)(pbVar33 + 0x20);
                  }
                  iVar9 = func_0x0eee3000(pbVar28,pppppplStack_500,pppppplVar22);
                  if (iVar9 == 0) goto LAB_0cc2f438;
                }
              }
              else {
                if (pppppplVar19 <= pppppplVar20) {
                  if (((ulong)pppppplVar20 | (ulong)pppppplVar19) >> 0x20 == 0) {
                    pppppplVar20 = (long ******)
                                   (((ulong)pppppplVar20 & 0xffffffff) %
                                   ((ulong)pppppplVar19 & 0xffffffff));
                  }
                  else {
                    pppppplVar20 = (long ******)((ulong)pppppplVar20 % (ulong)pppppplVar19);
                  }
                }
                if (pppppplVar20 != pppppplVar25) goto LAB_0cc2f470;
              }
              pbVar33 = *(byte **)pbVar33;
              if (pbVar33 == (byte *)0x0) goto LAB_0cc2f470;
            } while( true );
          }
          ppbVar14 = (byte **)((long)pppppplVar19 - 1);
          ppbStack_448 = ppbVar14;
          do {
            if (*(long *******)(pbVar33 + 8) == pppppplVar13) {
              bVar3 = pbVar33[0x10];
              if ((bVar3 & 1) == 0) {
                pppppplVar20 = (long ******)(ulong)(bVar3 >> 1);
              }
              else {
                pppppplVar20 = *(long *******)(pbVar33 + 0x18);
              }
              if (pppppplVar20 == pppppplVar22) {
                if ((bVar3 & 1) == 0) {
                  pbVar28 = pbVar33 + 0x11;
                }
                else {
                  pbVar28 = *(byte **)(pbVar33 + 0x20);
                }
                iVar9 = func_0x0eee3000(pbVar28,pppppplStack_500,pppppplVar22);
                ppbVar14 = ppbStack_448;
                if (iVar9 == 0) goto LAB_0cc2f438;
              }
            }
            else if ((long ******)((ulong)*(long *******)(pbVar33 + 8) & (ulong)ppbVar14) !=
                     pppppplVar25) break;
            pbVar33 = *(byte **)pbVar33;
            if (pbVar33 == (byte *)0x0) break;
          } while( true );
        }
      }
LAB_0cc2f470:
      ppppbVar32 = ppppbStack_4f8;
      if (-1 < (long)pppppplVar19) {
        fVar37 = (float)(long)pppppplVar19;
        fVar36 = *(float *)(ppppbStack_4f8 + 4);
        if (pppppplVar19 == (long ******)0x0) goto LAB_0cc2f4ee;
LAB_0cc2f4e1:
        if (fVar37 * fVar36 < (float)((long)ppppbStack_4f8[3] + 1)) goto LAB_0cc2f4ee;
        goto LAB_0cc2f670;
      }
      fVar37 = (float)pppppplVar19;
      fVar36 = *(float *)(ppppbStack_4f8 + 4);
      if (pppppplVar19 != (long ******)0x0) goto LAB_0cc2f4e1;
LAB_0cc2f4ee:
      uVar34 = 1;
      if ((long ******)0x2 < pppppplVar19) {
        uVar34 = (ulong)(((ulong)pppppplVar19 & (long)pppppplVar19 - 1U) != 0);
      }
      pppppplVar22 = (long ******)((long)pppppplVar19 * 2 | uVar34);
      fVar36 = (float)func_0x0eee3ab0((float)((long)ppppbStack_4f8[3] + 1) / fVar36);
      pppppplVar25 = (long ******)
                     ((long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36);
      if (pppppplVar25 < pppppplVar22) {
        pppppplVar25 = pppppplVar22;
      }
      pppppplVar22 = (long ******)0x2;
      if ((pppppplVar25 == (long ******)0x1) ||
         (pppppplVar22 = pppppplVar25, ((ulong)pppppplVar25 & (long)pppppplVar25 - 1U) == 0)) {
        bVar35 = pppppplVar22 < pppppplVar19;
        if (pppppplVar22 <= pppppplVar19) goto LAB_0cc2f579;
LAB_0cc2f558:
        func_0x08d5d870(ppppbVar32,pppppplVar22);
      }
      else {
        pppppplVar22 = (long ******)func_0x0412c3f0();
        pppppplVar19 = (long ******)ppppbVar32[1];
        bVar35 = pppppplVar22 < pppppplVar19;
        if (pppppplVar19 < pppppplVar22) goto LAB_0cc2f558;
LAB_0cc2f579:
        if (bVar35) {
          fVar36 = (float)func_0x0eee3ab0((float)ppppbVar32[3] / *(float *)(ppppbVar32 + 4));
          pppppplVar25 = (long ******)
                         ((long)(fVar36 - _DAT_01198778) & (long)fVar36 >> 0x3f | (long)fVar36);
          if ((pppppplVar19 < (long ******)0x3) ||
             (uVar34 = (long)pppppplVar19 - ((ulong)pppppplVar19 >> 1 & 0x5555555555555555),
             uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
             1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            pppppplVar25 = (long ******)func_0x0412c3f0(pppppplVar25);
          }
          else if ((long ******)0x1 < pppppplVar25) {
            lVar11 = 0x3f;
            if ((long)pppppplVar25 - 1U != 0) {
              for (; (long)pppppplVar25 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            pppppplVar25 = (long ******)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
          }
          if (pppppplVar22 <= pppppplVar25) {
            pppppplVar22 = pppppplVar25;
          }
          if (pppppplVar22 < pppppplVar19) goto LAB_0cc2f558;
        }
      }
LAB_0cc2f670:
      ppppppplVar4 = (long *******)*ppppppplVar26;
      pppppplVar19 = ppppppplVar26[1];
      pppppplVar25 = (long ******)
                     CONCAT53(uStack_4dd,CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0)));
      uVar34 = (long)pppppplVar25 - ((ulong)pppppplVar25 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
      uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar34 >> 0x38 < 2) {
        pppppplVar19 = (long ******)((ulong)pppppplVar19 & (long)pppppplVar25 - 1U);
      }
      else if (pppppplVar25 <= pppppplVar19) {
        if (((ulong)pppppplVar19 | (ulong)pppppplVar25) >> 0x20 == 0) {
          pppppplVar19 = (long ******)
                         (((ulong)pppppplVar19 & 0xffffffff) % ((ulong)pppppplVar25 & 0xffffffff));
        }
        else {
          pppppplVar19 = (long ******)((ulong)pppppplVar19 % (ulong)pppppplVar25);
        }
      }
      lVar11 = CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]);
      ppppppplVar23 = *(long ********)(lVar11 + (long)pppppplVar19 * 8);
      do {
        ppppppplVar15 = ppppppplVar23;
        ppppppplVar23 = (long *******)*ppppppplVar15;
      } while ((long *******)*ppppppplVar15 != ppppppplVar26);
      bVar3 = (byte)(uVar34 >> 0x38);
      ppppppplVar23 = ppppppplVar4;
      if ((long ********)ppppppplVar15 == &ppppppplStack_4d8) {
LAB_0cc2f798:
        if (ppppppplVar4 == (long *******)0x0) {
LAB_0cc2f7b6:
          *(undefined8 *)(lVar11 + (long)pppppplVar19 * 8) = 0;
          ppppppplVar23 = (long *******)*ppppppplVar26;
          goto joined_r0x0cc2f7c4;
        }
        pppppplVar22 = ppppppplVar4[1];
        if (bVar3 < 2) {
          pppppplVar20 = (long ******)((long)pppppplVar25 - 1U & (ulong)pppppplVar22);
        }
        else {
          pppppplVar20 = pppppplVar22;
          if (pppppplVar25 <= pppppplVar22) {
            if (((ulong)pppppplVar22 | (ulong)pppppplVar25) >> 0x20 == 0) {
              pppppplVar20 = (long ******)
                             (((ulong)pppppplVar22 & 0xffffffff) %
                             ((ulong)pppppplVar25 & 0xffffffff));
            }
            else {
              pppppplVar20 = (long ******)((ulong)pppppplVar22 % (ulong)pppppplVar25);
            }
          }
        }
        if (pppppplVar20 != pppppplVar19) goto LAB_0cc2f7b6;
LAB_0cc2f7f8:
        if (bVar3 < 2) {
          pppppplVar22 = (long ******)((ulong)pppppplVar22 & (long)pppppplVar25 - 1U);
        }
        else if (pppppplVar25 <= pppppplVar22) {
          if (((ulong)pppppplVar22 | (ulong)pppppplVar25) >> 0x20 == 0) {
            pppppplVar22 = (long ******)
                           (((ulong)pppppplVar22 & 0xffffffff) % ((ulong)pppppplVar25 & 0xffffffff))
            ;
          }
          else {
            pppppplVar22 = (long ******)((ulong)pppppplVar22 % (ulong)pppppplVar25);
          }
        }
        if (pppppplVar22 != pppppplVar19) {
          *(long ********)(lVar11 + (long)pppppplVar22 * 8) = ppppppplVar15;
          ppppppplVar23 = (long *******)*ppppppplVar26;
        }
      }
      else {
        pppppplVar22 = ppppppplVar15[1];
        if (bVar3 < 2) {
          pppppplVar22 = (long ******)((ulong)pppppplVar22 & (long)pppppplVar25 - 1U);
        }
        else if (pppppplVar25 <= pppppplVar22) {
          if (((ulong)pppppplVar22 | (ulong)pppppplVar25) >> 0x20 == 0) {
            pppppplVar22 = (long ******)
                           (((ulong)pppppplVar22 & 0xffffffff) % ((ulong)pppppplVar25 & 0xffffffff))
            ;
          }
          else {
            pppppplVar22 = (long ******)((ulong)pppppplVar22 % (ulong)pppppplVar25);
          }
        }
        if (pppppplVar22 != pppppplVar19) goto LAB_0cc2f798;
joined_r0x0cc2f7c4:
        if (ppppppplVar23 != (long *******)0x0) {
          pppppplVar22 = ppppppplVar23[1];
          goto LAB_0cc2f7f8;
        }
        ppppppplVar23 = (long *******)0x0;
      }
      *ppppppplVar15 = (long ******)ppppppplVar23;
      *ppppppplVar26 = (long ******)0x0;
      pppbStack_4d0 = (byte ***)((long)pppbStack_4d0 + -1);
      ppppppplVar26[1] = pppppplVar13;
      pppppplVar19 = (long ******)ppppbVar32[1];
      uVar34 = (long)pppppplVar19 - ((ulong)pppppplVar19 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
      uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar34 >> 0x38 < 2) {
        pppppplVar13 = (long ******)((ulong)pppppplVar13 & (long)pppppplVar19 - 1U);
        pppbVar29 = *ppppbVar32;
        ppbVar14 = pppbVar29[(long)pppppplVar13];
        if (ppbVar14 != (byte **)0x0) goto LAB_0cc2f1d0;
LAB_0cc2f8cc:
        *ppppppplVar26 = (long ******)*ppppbStack_4a0;
        *ppppbStack_4a0 = (byte ***)ppppppplVar26;
        pppbVar29[(long)pppppplVar13] = (byte **)ppppbStack_4a0;
        if (*ppppppplVar26 != (long ******)0x0) {
          pppppplVar13 = (long ******)(*ppppppplVar26)[1];
          if ((byte)(uVar34 >> 0x38) < 2) {
            pppbVar29[(ulong)pppppplVar13 & (long)pppppplVar19 - 1U] = (byte **)ppppppplVar26;
          }
          else {
            if (pppppplVar19 <= pppppplVar13) {
              if (((ulong)pppppplVar13 | (ulong)pppppplVar19) >> 0x20 == 0) {
                pppbVar29[((ulong)pppppplVar13 & 0xffffffff) % ((ulong)pppppplVar19 & 0xffffffff)] =
                     (byte **)ppppppplVar26;
                goto LAB_0cc2f1d9;
              }
              pppppplVar13 = (long ******)((ulong)pppppplVar13 % (ulong)pppppplVar19);
            }
            pppbVar29[(long)pppppplVar13] = (byte **)ppppppplVar26;
          }
        }
      }
      else {
        if (pppppplVar13 < pppppplVar19) {
LAB_0cc2f1c0:
          pppbVar29 = *ppppbVar32;
          ppbVar14 = pppbVar29[(long)pppppplVar13];
        }
        else {
          if (((ulong)pppppplVar13 | (ulong)pppppplVar19) >> 0x20 != 0) {
            pppppplVar13 = (long ******)((ulong)pppppplVar13 % (ulong)pppppplVar19);
            goto LAB_0cc2f1c0;
          }
          pppppplVar13 = (long ******)
                         (((ulong)pppppplVar13 & 0xffffffff) % ((ulong)pppppplVar19 & 0xffffffff));
          pppbVar29 = *ppppbVar32;
          ppbVar14 = pppbVar29[(long)pppppplVar13];
        }
        if (ppbVar14 == (byte **)0x0) goto LAB_0cc2f8cc;
LAB_0cc2f1d0:
        *ppppppplVar26 = (long ******)*ppbVar14;
        *ppbVar14 = (byte *)ppppppplVar26;
      }
LAB_0cc2f1d9:
      ppppbVar32[3] = (byte ***)((long)ppppbVar32[3] + 1);
      ppppppplVar26 = ppppppplVar4;
    }
LAB_0cc2f9dc:
    ppppppplVar26 = ppppppplStack_4d8;
    if ((bStack_4c0 & 1) != 0) {
      while (ppppppplVar26 != (long *******)0x0) {
        ppppppplVar4 = (long *******)*ppppppplVar26;
        pppppplVar19 = ppppppplVar26[6];
        if (pppppplVar19 == (long ******)0x0) {
LAB_0cc2fb47:
          bVar3 = *(byte *)(ppppppplVar26 + 2);
        }
        else {
          LOCK();
          pppppplVar13 = pppppplVar19 + 1;
          ppppplVar2 = *pppppplVar13;
          *pppppplVar13 = (long *****)((long)*pppppplVar13 + -1);
          UNLOCK();
          if (ppppplVar2 != (long *****)0x0) goto LAB_0cc2fb47;
          (*(code *)(*pppppplVar19)[2])(pppppplVar19);
          func_0x0412c2d0(pppppplVar19);
          bVar3 = *(byte *)(ppppppplVar26 + 2);
        }
        if ((bVar3 & 1) != 0) {
          func_0x0412a280(ppppppplVar26[4],(ulong)ppppppplVar26[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(ppppppplVar26,0x38);
        ppppppplVar26 = ppppppplVar4;
      }
      lVar11 = CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]);
      auStack_4e8[0] = 0;
      auStack_4e8._1_7_ = 0;
      if (lVar11 != 0) {
        func_0x0412a280(lVar11,CONCAT53(uStack_4dd,
                                        CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0))) << 3);
      }
    }
  }
  ppbVar14 = ppbStack_4f0;
  ppppbStack_428 = (byte ****)&UNK_01d64f48;
  ppppbStack_308 = (byte ****)&ppppbStack_428;
  pppppbVar16 = (byte *****)
                func_0x0b0cdfd0(ppbStack_4f0 + 0x15,ppppbStack_308,&UNK_01563a4f,&ppppbStack_308,
                                &ppbStack_388);
  ppppbVar17 = pppppbVar16[3];
  if (ppppbVar17 == (byte ****)0x0) {
    ppppbVar17 = (byte ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (ppppbVar17 == (byte ****)0x0) {
LAB_0cc303fa:
      func_0x0eec74c0(0x40,0);
    }
    ppppbVar17[3] = (byte ***)0x0;
    ppppbVar17[4] = (byte ***)0x0;
    ppppbVar17[1] = (byte ***)0x0;
    ppppbVar17[2] = (byte ***)0x0;
    *(undefined4 *)(ppppbVar17 + 5) = 0x3f800000;
    *ppppbVar17 = (byte ***)&UNK_0f4082b0;
    ppppbVar17[6] = (byte ***)0x0;
    ppppbVar17[7] = (byte ***)0x0;
    func_0x0ce4b1e0(ppppbVar17,ppbVar14);
    func_0x0ce4b270(ppppbVar17);
    ppbVar14 = ppbStack_4f0;
    ppppbVar32 = pppppbVar16[3];
    pppppbVar16[3] = ppppbVar17;
    if (ppppbVar32 != (byte ****)0x0) {
      (*(code *)(*ppppbVar32)[1])();
      ppppbVar17 = pppppbVar16[3];
    }
  }
  ppbVar14 = ppbVar14 + 0x10;
  pppbVar29 = ppppbVar17[6];
  ppppbVar32 = ppppbStack_4f8;
  if (*(char *)(pppbVar29 + 9) == '\0') {
    func_0x0cd2d1e0(&ppppbStack_308,auStack_440,ppbVar14);
    ppppbVar32 = ppppbStack_4f8;
    cVar6 = (*(code *)(*pppbVar29)[7])(pppbVar29,&ppppbStack_308,0);
    if (cVar6 == '\0') {
joined_r0x0cc2fd6d:
      bVar35 = false;
    }
    else {
      bVar35 = true;
      lVar11 = (long)pppbVar29[0x18] - (long)pppbVar29[0x17];
      ppbStack_4f0 = ppbVar14;
      if (lVar11 != 0) {
        lVar11 = (lVar11 >> 3) * -0x30c30c30c30c30c3;
        ppbVar18 = pppbVar29[0x17] + 0x14;
        uVar34 = 0;
LAB_0cc2fc12:
        if ((*(byte *)ppbVar18 != 1) ||
           (((ulong)pppppbStack_2c8[uVar34 >> 6] >> (uVar34 & 0x3f) & 1) != 0)) goto LAB_0cc2fc00;
        ppppbStack_428 = (byte ****)0x0;
        ppppbStack_420 = (byte ****)0x0;
        pbStack_418 = (byte *)0x0;
        ppbStack_388 = (byte **)0x0;
        pcStack_380 = (char *)0x0;
        pppppbStack_378 = (byte *****)0x0;
        lVar31 = 0x28;
        uVar34 = 0;
        do {
          ppbVar14 = pppbVar29[0x17];
          if ((*(byte *)((long)ppbVar14 + lVar31 + -0x10) & 1) == 0) {
            pbStack_498 = (byte *)((long)ppbVar14 + lVar31 + -0xf);
          }
          else {
            pbStack_498 = *(byte **)((long)ppbVar14 + lVar31);
          }
          func_0x0470d9a0(auStack_4e8,&UNK_0141230a,3,0xc,&pbStack_498);
          bVar35 = (auStack_4e8[0] & 1) == 0;
          ppppppplVar26 = ppppppplStack_4d8;
          if (bVar35) {
            ppppppplVar26 = (long *******)(auStack_4e8 + 1);
          }
          uVar21 = (ulong)(auStack_4e8[0] >> 1);
          if (!bVar35) {
            uVar21 = CONCAT53(uStack_4dd,CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0)));
          }
          func_0x0412f8c0(&ppbStack_388,ppppppplVar26,uVar21);
          if (((ulong)pppppbStack_2c8[uVar34 >> 6] >> (uVar34 & 0x3f) & 1) == 0) {
            bVar35 = (auStack_4e8[0] & 1) == 0;
            ppppppplVar26 = ppppppplStack_4d8;
            if (bVar35) {
              ppppppplVar26 = (long *******)(auStack_4e8 + 1);
            }
            uVar21 = (ulong)(auStack_4e8[0] >> 1);
            if (!bVar35) {
              uVar21 = CONCAT53(uStack_4dd,CONCAT12(uStack_4de,CONCAT11(uStack_4df,uStack_4e0)));
            }
            func_0x0412f8c0(&ppppbStack_428,ppppppplVar26,uVar21);
          }
          if ((auStack_4e8[0] & 1) != 0) {
            func_0x0412a280(ppppppplStack_4d8,
                            CONCAT71(auStack_4e8._1_7_,auStack_4e8[0]) & 0xfffffffffffffffe);
          }
          uVar34 = uVar34 + 1;
          lVar31 = lVar31 + 0xa8;
        } while (lVar11 - uVar34 != 0);
        ppbVar14 = pppbVar29[0x18];
        ppbVar18 = pppbVar29[0x17];
        if ((long)ppbVar14 - (long)ppbVar18 != 0) {
          lVar11 = 0xa0;
          uVar34 = 0;
          do {
            if ((*(byte *)((long)pppbVar29[0x17] + lVar11) == 1) &&
               (((ulong)pppppbStack_2c8[uVar34 >> 6] >> (uVar34 & 0x3f) & 1) == 0)) {
              func_0x0b63c8a0((ulong)ppppplStack_300 & 0xffffffff,auStack_440,
                              (byte *)((long)pppbVar29[0x17] + lVar11 + -0x88),&ppppbStack_428,
                              &ppbStack_388);
            }
            uVar34 = uVar34 + 1;
            lVar11 = lVar11 + 0xa8;
          } while (((long)ppbVar14 - (long)ppbVar18 >> 3) * -0x30c30c30c30c30c3 - uVar34 != 0);
        }
        if (((ulong)ppbStack_388 & 1) != 0) {
          func_0x0412a280(pppppbStack_378,(ulong)ppbStack_388 & 0xfffffffffffffffe);
        }
        ppbVar14 = ppbStack_4f0;
        ppppbVar32 = ppppbStack_4f8;
        if (((ulong)ppppbStack_428 & 1) != 0) {
          func_0x0412a280(pbStack_418,(ulong)ppppbStack_428 & 0xfffffffffffffffe);
        }
        goto joined_r0x0cc2fd6d;
      }
    }
joined_r0x0cc2fd6d:
    if ((uStack_288 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
    }
    uStack_288 = 0;
    if ((uStack_290 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
    }
    uStack_290 = 0;
    if ((uStack_2b0 & 1) != 0) {
      func_0x0412a280(puStack_2a0,CONCAT44(uStack_2ac,uStack_2b0) & 0xfffffffffffffffe);
    }
    if (pppppbStack_2c8 != (byte *****)0x0) {
      func_0x0412a280(pppppbStack_2c8,lStack_2b8 << 3);
    }
    if (((ulong)pppppbStack_2f0 & 1) != 0) {
      func_0x0412a280(ppppbStack_2e0,(ulong)pppppbStack_2f0 & 0xfffffffffffffffe);
    }
    if (!bVar35) goto LAB_0cc300ef;
    pppbVar29 = ppppbVar17[6];
  }
  bStack_468 = 0;
  uStack_467 = 0;
  func_0x0cd2d1e0(&ppppbStack_308,auStack_440,ppbVar14);
  if ((uStack_2b0 & 1) == 0) {
    if ((bStack_468 & 1) == 0) {
      puStack_2a0 = puStack_458;
      uStack_2b0 = CONCAT22(uStack_466,CONCAT11(uStack_467,bStack_468));
      uStack_2ac = uStack_464;
      uStack_2a8 = uStack_460;
      uStack_2a4 = uStack_45c;
    }
    else {
      func_0x04885070(&uStack_2b0,puStack_458,CONCAT44(uStack_45c,uStack_460));
    }
  }
  else {
    bVar35 = (bStack_468 & 1) != 0;
    puVar27 = &uStack_467;
    if (bVar35) {
      puVar27 = puStack_458;
    }
    uVar34 = (ulong)(bStack_468 >> 1);
    if (bVar35) {
      uVar34 = CONCAT44(uStack_45c,uStack_460);
    }
    func_0x04885120(&uStack_2b0,puVar27,uVar34);
  }
  ppppbStack_308 = ppppbVar32;
  (*(code *)(*pppbVar29)[8])(pppbVar29,&ppppbStack_308);
  ppbVar14 = pppbVar29[0x18];
  ppbVar18 = pppbVar29[0x17];
  if ((long)ppbVar14 - (long)ppbVar18 != 0) {
    uVar34 = 0;
    do {
      if (((ulong)pppppbStack_2c8[uVar34 >> 6] >> (uVar34 & 0x3f) & 1) == 0) {
        lVar31 = (long)pppbVar29[0x17][uVar34 * 0x15 + 0x12];
        for (lVar11 = (long)pppbVar29[0x17][uVar34 * 0x15 + 0x11]; lVar11 != lVar31;
            lVar11 = lVar11 + 0x38) {
          (**(code **)(**(long **)(lVar11 + 0x28) + 0x30))
                    (*(long **)(lVar11 + 0x28),&ppppbStack_308);
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != ((long)ppbVar14 - (long)ppbVar18 >> 3) * -0x30c30c30c30c30c3);
  }
  ppppbVar32 = ppppbStack_4f8;
  if (pppbVar29[0x1a] != (byte **)0x0) {
    (*(code *)pppbVar29[0x1a][2])(pppbVar29 + 0x1a,&ppppbStack_308);
  }
  puVar24 = (undefined4 *)0xff00ffffffffffff;
  if ((uStack_288 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
  }
  uStack_288 = 0;
  if ((uStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
  }
  uStack_290 = 0;
  if ((uStack_2b0 & 1) != 0) {
    func_0x0412a280(puStack_2a0,CONCAT44(uStack_2ac,uStack_2b0) & 0xfffffffffffffffe);
  }
  if (pppppbStack_2c8 != (byte *****)0x0) {
    func_0x0412a280(pppppbStack_2c8,lStack_2b8 << 3);
  }
  if (((ulong)pppppbStack_2f0 & 1) == 0) {
    if ((bStack_468 & 1) != 0) goto LAB_0cc3031f;
LAB_0cc302ea:
    pppbVar29 = *ppppbStack_4a0;
  }
  else {
    func_0x0412a280(ppppbStack_2e0,(ulong)pppppbStack_2f0 & 0xfffffffffffffffe);
    if ((bStack_468 & 1) == 0) goto LAB_0cc302ea;
LAB_0cc3031f:
    func_0x0412a280(puStack_458,
                    CONCAT44(uStack_464,CONCAT22(uStack_466,CONCAT11(uStack_467,bStack_468))) &
                    0xfffffffffffffffe);
    pppbVar29 = *ppppbStack_4a0;
  }
  if (pppbVar29 != (byte ***)0x0) {
    puVar24 = &uStack_318;
    do {
      uStack_318 = *(undefined4 *)(pppbVar29 + 5);
      uStack_314 = *(undefined4 *)((long)pppbVar29 + 0x2c);
      uStack_310 = *(undefined4 *)(pppbVar29 + 6);
      uStack_30c = *(undefined4 *)((long)pppbVar29 + 0x34);
      if (pppbVar29[6] != (byte **)0x0) {
        LOCK();
        ppbVar14 = pppbVar29[6] + 1;
        *ppbVar14 = *ppbVar14 + 1;
        UNLOCK();
      }
      func_0x0cbeb690(ppppbVar32,puVar24);
      plVar12 = (long *)CONCAT44(uStack_30c,uStack_310);
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          func_0x0412c2d0(plVar12);
        }
      }
      pppbVar29 = (byte ***)*pppbVar29;
    } while (pppbVar29 != (byte ***)0x0);
  }
  func_0x08d5c720(ppppbVar32);
  uVar34 = CONCAT71((int7)((ulong)puVar24 >> 8),1);
LAB_0cc303ba:
  func_0x04863610(auStack_398);
  func_0x04863610(auStack_328);
  func_0x04863610(auStack_440);
  return uVar34 & 0xffffffff;
LAB_0cc2f438:
  ppppppplVar26 = (long *******)*ppppppplVar26;
  ppppbVar32 = ppppbStack_4f8;
  if (ppppppplVar26 == (long *******)0x0) goto LAB_0cc2f9dc;
  goto LAB_0cc2f1e9;
LAB_0cc2fc00:
  uVar34 = uVar34 + 1;
  ppbVar18 = ppbVar18 + 0x15;
  if (lVar11 - uVar34 == 0) goto joined_r0x0cc2fd6d;
  goto LAB_0cc2fc12;
}


