/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb036930 (ELF vaddr 0xaf36930)
 * Label: caller-of-callee
 * Body:  [[0b036930, 0b0391bb] [0b039204, 0b039215] [0b039625, 0b03965a] [0b039686, 0b0396dc]]
 * Ghidra: FUN_0b036930
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b036930(undefined4 *param_1,undefined8 *******param_2,long *param_3,double param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  int *****pppppiVar2;
  int ****ppppiVar3;
  undefined2 uVar4;
  int *****pppppiVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auVar16 [8];
  uint uVar17;
  undefined1 auVar18 [8];
  char cVar19;
  int iVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  int ******ppppppiVar25;
  long *plVar26;
  int *******pppppppiVar27;
  undefined8 *******pppppppuVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long lVar32;
  int *******pppppppiVar33;
  int *******pppppppiVar34;
  undefined8 *******pppppppuVar35;
  undefined4 *puVar36;
  short *psVar37;
  short *psVar38;
  char *pcVar39;
  char *pcVar40;
  undefined1 *puVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 uStack_659;
  undefined1 auStack_658 [8];
  undefined1 *puStack_650;
  int *******pppppppiStack_648;
  undefined4 *puStack_638;
  uint *puStack_630;
  int ******ppppppiStack_628;
  ulong uStack_620;
  ulong auStack_618 [2];
  undefined1 auStack_608 [6];
  undefined2 uStack_602;
  undefined1 *puStack_600;
  int *******pppppppiStack_5f8;
  undefined1 *puStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  uint uStack_558;
  int ******ppppppiStack_550;
  int *******pppppppiStack_548;
  int *******pppppppiStack_540;
  double dStack_538;
  undefined1 *puStack_530;
  undefined8 uStack_528;
  int *******pppppppiStack_520;
  undefined8 uStack_518;
  undefined8 *******pppppppuStack_510;
  long lStack_508;
  code *pcStack_4f8;
  int iStack_4f0;
  char cStack_4ec;
  int *******pppppppiStack_4e8;
  undefined8 uStack_4e0;
  int *******pppppppiStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  byte bStack_49c;
  int *******pppppppiStack_490;
  double dStack_488;
  long *plStack_480;
  int *******pppppppiStack_478;
  undefined1 *puStack_470;
  int *******pppppppiStack_468;
  undefined1 *puStack_460;
  ulong uStack_458;
  ulong uStack_450;
  undefined4 uStack_448;
  undefined2 uStack_444;
  undefined1 uStack_440;
  undefined1 auStack_438 [8];
  undefined1 *puStack_430;
  int *******pppppppiStack_428;
  uint uStack_388;
  undefined8 *******pppppppuStack_378;
  byte bStack_370;
  undefined1 auStack_36f [15];
  long *plStack_360;
  byte bStack_358;
  char cStack_357;
  undefined6 uStack_356;
  long lStack_350;
  char *pcStack_348;
  byte bStack_340;
  undefined7 uStack_33f;
  undefined8 uStack_330;
  byte bStack_328;
  undefined7 uStack_327;
  undefined8 uStack_318;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  int ******ppppppiStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined1 auStack_2b0 [24];
  code *pcStack_298;
  undefined1 auStack_288 [80];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  int *******pppppppiStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  byte bStack_1dc;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [80];
  ulong uStack_178;
  undefined2 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [176];
  uint uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  ppppppiStack_628 = (int ******)0x0;
  uStack_620 = 0;
  auStack_618[0] = 0;
  dStack_488 = param_4;
  plStack_480 = param_3;
  pppppppuStack_378 = param_2;
  uVar21 = func_0x04864680(param_6,&UNK_013771cd);
  cVar19 = func_0x04864260(uVar21);
  if (cVar19 == '\0') {
    uVar21 = func_0x04864680(param_6,&UNK_013771cd);
    func_0x0b633750(&ppppppiStack_628,uVar21);
  }
  else {
    uVar21 = func_0x04864680(param_6,&UNK_0146768a);
    uVar21 = func_0x04864680(uVar21,&UNK_013771cd);
    func_0x0b633750(&ppppppiStack_628,uVar21);
    uVar21 = func_0x04864680(param_6,&UNK_0146768a);
    func_0x04864f30(auStack_608,uVar21,&UNK_013771cd);
    func_0x04863610(auStack_608);
  }
  auStack_658 = (undefined1  [8])0x0;
  puStack_650 = (undefined1 *)0x0;
  pppppppiStack_648 = (int *******)0x0;
  uStack_178 = param_5;
  cVar19 = func_0x0551ca70(&ppppppiStack_628,&UNK_0f280320);
  uVar21 = func_0x048648e0(param_6,&UNK_0146768a);
  if (cVar19 == '\0') {
    uVar21 = func_0x048648e0(uVar21,&UNK_011ea907);
    uVar21 = func_0x048648e0(uVar21,&UNK_013762e9);
    cVar19 = func_0x04864260(uVar21);
    if ((cVar19 == '\0') && (cVar19 = func_0x04865490(uVar21), cVar19 != '\0')) {
      auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffff0000);
      func_0x04863cb0(auStack_608,uVar21,auStack_438);
      if (((ulong)auStack_658 & 1) != 0) {
        func_0x0412a280(pppppppiStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
      }
      auVar18 = (undefined1  [8])_auStack_608;
      _auStack_608 = (int *******)((ulong)_auStack_608 & 0xffffffffffff0000);
      pppppppiVar27 = pppppppiStack_5f8;
      auVar16 = auStack_438;
      pppppppiVar34 = pppppppiStack_428;
      puVar31 = puStack_600;
      goto joined_r0x0b036bc7;
    }
  }
  else {
    uVar21 = func_0x048648e0(uVar21,&UNK_011ed181);
    uVar21 = func_0x048648e0(uVar21,&DAT_0143b74f);
    uVar21 = func_0x048648e0(uVar21,&UNK_0133e2b9);
    cVar19 = func_0x04864260(uVar21);
    if ((cVar19 == '\0') && (cVar19 = func_0x04865490(uVar21), cVar19 != '\0')) {
      auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffff0000);
      func_0x04863cb0(auStack_608,uVar21,auStack_438);
      if (((ulong)auStack_438 & 1) != 0) {
        func_0x0412a280(pppppppiStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
      }
      auVar18 = auStack_658;
      pppppppiVar27 = pppppppiStack_648;
      pppppppiVar34 = pppppppiStack_5f8;
      puVar31 = puStack_650;
      if (((ulong)_auStack_608 & 1) == 0) {
        auVar16 = (undefined1  [8])(int ******)_auStack_608;
        if (auStack_608[0] >> 1 != 0) goto LAB_0b036bed;
      }
      else {
        auVar16 = (undefined1  [8])(int ******)_auStack_608;
        if (puStack_600 != (undefined1 *)0x0) {
LAB_0b036bed:
          iVar20 = func_0x0bf49880(auStack_608);
          pppppppiVar27 = pppppppiStack_648;
          auVar16 = (undefined1  [8])(int ******)_auStack_608;
          pppppppiVar34 = pppppppiStack_5f8;
          auVar18 = auStack_658;
          puVar31 = puStack_650;
          if (iVar20 != 1) {
            func_0x0bf48ed0(auStack_438,iVar20,1);
            if (((ulong)_auStack_608 & 1) != 0) {
              func_0x0412a280(pppppppiStack_5f8,(ulong)_auStack_608 & 0xfffffffffffffffe);
            }
            pppppppiStack_5f8 = pppppppiStack_428;
            _auStack_608 = (int *******)auStack_438;
            puStack_600 = puStack_430;
            puVar31 = (undefined1 *)((ulong)auStack_438 >> 1 & 0x7f);
            if (((ulong)auStack_438 & 1) != 0) {
              puVar31 = puStack_430;
            }
            auVar16 = auStack_438;
            pppppppiVar34 = pppppppiStack_5f8;
            if (puVar31 == (undefined1 *)0x7) {
              pppppppiVar33 = pppppppiStack_428;
              if (((ulong)auStack_438 & 1) == 0) {
                pppppppiVar33 = (int *******)(auStack_608 + 1);
              }
              pppppppiVar27 = pppppppiStack_648;
              auVar18 = auStack_658;
              puVar31 = puStack_650;
              if (*(int *)((long)pppppppiVar33 + 3) == 0x6e776f6e &&
                  *(int *)pppppppiVar33 == 0x6e6b6e75) goto joined_r0x0b036bc7;
            }
            if (((ulong)auStack_658 & 1) == 0) {
              pppppppiVar27 = pppppppiStack_428;
              auVar18 = auStack_438;
              puVar31 = puStack_430;
              if (((ulong)auStack_438 & 1) != 0) {
                func_0x04885070(auStack_658,pppppppiStack_428,puStack_430);
                pppppppiVar27 = pppppppiStack_648;
                auVar16 = (undefined1  [8])(int ******)_auStack_608;
                pppppppiVar34 = pppppppiStack_5f8;
                auVar18 = auStack_658;
                puVar31 = puStack_650;
              }
            }
            else {
              pppppppiVar34 = pppppppiStack_428;
              if (((ulong)auStack_438 & 1) == 0) {
                pppppppiVar34 = (int *******)(auStack_608 + 1);
              }
              func_0x04885120(auStack_658,pppppppiVar34);
              pppppppiVar27 = pppppppiStack_648;
              auVar16 = (undefined1  [8])(int ******)_auStack_608;
              pppppppiVar34 = pppppppiStack_5f8;
              auVar18 = auStack_658;
              puVar31 = puStack_650;
            }
          }
        }
      }
joined_r0x0b036bc7:
      puStack_650 = puVar31;
      auStack_658 = auVar18;
      pppppppiStack_648 = pppppppiVar27;
      if (((ulong)auVar16 & 1) != 0) {
        func_0x0412a280(pppppppiVar34,(ulong)auVar16 & 0xfffffffffffffffe);
      }
    }
  }
  if (((ulong)auStack_658 & 1) == 0) {
    if (auStack_658[0] >> 1 == 0) goto LAB_0b036d6b;
  }
  else if (puStack_650 == (undefined1 *)0x0) {
LAB_0b036d6b:
    *param_1 = 1;
    if (((ulong)auStack_658 & 1) != 0) {
      func_0x0412a280(pppppppiStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
    }
    if ((auStack_618[0] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_618[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_618[0] = 0;
    if ((uStack_620 & 0x80000000000000) == 0) {
      return;
    }
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_620 & 0xff00ffffffffffff) - 8);
    return;
  }
  func_0x0b04cfb0(&bStack_370,auStack_658);
  if ((bStack_370 & 1) == 0) {
    if (bStack_370 >> 1 == 9) goto LAB_0b036e13;
  }
  else if (auStack_36f._7_8_ == 9) {
LAB_0b036e13:
    plVar22 = plStack_360;
    if ((bStack_370 & 1) == 0) {
      plVar22 = (long *)auStack_36f;
    }
    if ((char)plVar22[1] == DAT_017f3c71 && *plVar22 == _DAT_017f3c69) {
      iVar20 = func_0x0bf49880(&bStack_358);
      if (iVar20 == 1) {
        _auStack_608 = (int *******)(auStack_658 + 1);
        if (((ulong)auStack_658 & 1) != 0) {
          _auStack_608 = pppppppiStack_648;
        }
        func_0x0b039dd0(1,3,0,&UNK_01230219,auStack_608);
        *param_1 = 2;
        goto joined_r0x0b036fb7;
      }
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  pppppppiVar34 = (int *******)(auStack_658 + 1);
  cVar19 = func_0x0b039f60(&ppppppiStack_628,&UNK_0f280368);
  if (cVar19 != '\0') {
    if ((bStack_358 & 1) == 0) {
      if (bStack_358 >> 1 != 0) goto LAB_0b036ee6;
    }
    else if (lStack_350 != 0) {
LAB_0b036ee6:
      cVar19 = cStack_357;
      if ((bStack_358 & 1) != 0) {
        cVar19 = *pcStack_348;
      }
      if (9 < (byte)(cVar19 - 0x30U)) goto LAB_0b036efb;
    }
    _auStack_608 = pppppppiVar34;
    if (((ulong)auStack_658 & 1) != 0) {
      _auStack_608 = pppppppiStack_648;
    }
    func_0x0b03a060(1,3,0,&UNK_01298369,auStack_608);
    *param_1 = 5;
joined_r0x0b036fb7:
    if ((uStack_308 & 1) != 0) {
      func_0x0412a280(lStack_2f8,CONCAT44(uStack_304,uStack_308) & 0xfffffffffffffffe);
    }
    if ((bStack_328 & 1) != 0) {
      func_0x0412a280(uStack_318,CONCAT71(uStack_327,bStack_328) & 0xfffffffffffffffe);
    }
    if ((bStack_340 & 1) != 0) {
      func_0x0412a280(uStack_330,CONCAT71(uStack_33f,bStack_340) & 0xfffffffffffffffe);
    }
    if ((bStack_358 & 1) != 0) {
      func_0x0412a280(pcStack_348,
                      CONCAT62(uStack_356,CONCAT11(cStack_357,bStack_358)) & 0xfffffffffffffffe);
    }
    if ((bStack_370 & 1) != 0) {
      func_0x0412a280(plStack_360,CONCAT71(auStack_36f._0_7_,bStack_370) & 0xfffffffffffffffe);
    }
    if (((ulong)auStack_658 & 1) != 0) {
      func_0x0412a280(pppppppiStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
    }
    if ((auStack_618[0] >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_618[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_618[0] = 0;
    if ((uStack_620 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_620 & 0xff00ffffffffffff) - 8);
    }
    return;
  }
LAB_0b036efb:
  if (puVar1 != &uStack_308) {
    if ((*puVar1 & 1) == 0) {
      if ((uStack_308 & 1) == 0) {
        *(long *)(param_1 + 6) = lStack_2f8;
        *puVar1 = uStack_308;
        param_1[3] = uStack_304;
        param_1[4] = uStack_300;
        param_1[5] = uStack_2fc;
      }
      else {
        func_0x04885070(puVar1,lStack_2f8,CONCAT44(uStack_2fc,uStack_300));
      }
    }
    else {
      bVar42 = (uStack_308 & 1) != 0;
      lVar24 = (long)&uStack_308 + 1;
      if (bVar42) {
        lVar24 = lStack_2f8;
      }
      uVar30 = (ulong)((byte)uStack_308 >> 1);
      if (bVar42) {
        uVar30 = CONCAT44(uStack_2fc,uStack_300);
      }
      func_0x04885120(puVar1,lVar24,uVar30);
    }
  }
  pppppppiVar27 = pppppppiStack_648;
  puVar31 = puStack_650;
  if (((ulong)auStack_658 & 1) == 0) {
    pppppppiVar27 = pppppppiVar34;
    puVar31 = (undefined1 *)((ulong)auStack_658 >> 1 & 0x7f);
  }
  auStack_438 = (undefined1  [8])0x0;
  puStack_638 = param_1;
  puStack_630 = puVar1;
  pppppppiStack_490 = pppppppiVar34;
  if (pppppppiVar27 == (int *******)0x0) {
    auStack_438 = (undefined1  [8])((ulong)((uint)puVar31 & 0x7f) << 0x30);
  }
  else {
    puVar41 = puVar31 + 9;
    puVar23 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar41,8);
    if (puVar41 != (undefined1 *)0x0 && puVar23 == (ulong *)0x0) {
      func_0x0eec74c0(puVar41,8);
    }
    *puVar23 = (ulong)puVar31;
    func_0x0eee2f00(puVar23 + 1,pppppppiVar27,puVar31);
    *(undefined1 *)((long)(puVar23 + 1) + (long)puVar31) = 0;
    auStack_438 = (undefined1  [8])((ulong)(puVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar36 = puStack_638;
  _auStack_608 = (int *******)((ulong)_auStack_608 & 0xffffffffffffff00);
  pppppppiStack_5f8 = (int *******)((ulong)pppppppiStack_5f8 & 0xffffffffffffff00);
  func_0x0eeb79f0(auStack_48,auStack_438);
  if (((ulong)auStack_438 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)auStack_438 & 0xff00ffffffffffff) - 8)
    ;
  }
  lVar24 = func_0x049216f0(param_7,auStack_658);
  if (lVar24 != 0) {
    *puVar36 = 3;
    bVar15 = true;
    bVar42 = false;
    func_0x0eeb81b0(auStack_48);
    goto joined_r0x0b039008;
  }
  (**(code **)(*plStack_480 + 0x908))();
  if ((uStack_620 & 0x80000000000000) == 0) {
    pppppppiStack_5f8 = (int *******)(ulong)((ushort)(uStack_620 >> 0x30) & 0x7f);
  }
  else {
    pppppppiStack_5f8 = *(int ********)((uStack_620 & 0xff00ffffffffffff) - 8);
  }
  if ((auStack_618[0] & 0x80000000000000) == 0) {
    uStack_5e8 = (ulong)((ushort)(auStack_618[0] >> 0x30) & 0x7f);
  }
  else {
    uStack_5e8 = *(ulong *)((auStack_618[0] & 0xff00ffffffffffff) - 8);
  }
  puStack_5f0 = (undefined1 *)(auStack_618[0] & 0xff00ffffffffffff);
  puStack_600 = (undefined1 *)(uStack_620 & 0xff00ffffffffffff);
  _auStack_608 = (int *******)CONCAT26(1,(int6)ppppppiStack_628);
  func_0x0b03ab90(param_6,auStack_608,auStack_658);
  auStack_438 = (undefined1  [8])0x1000000146768a;
  _auStack_608 = (int *******)((ulong)_auStack_608 & 0xffffffffffffff00);
  pppppppiStack_5f8 = (int *******)((ulong)pppppppiStack_5f8 & 0xffffffffffffff00);
  func_0x0eeb79f0(auStack_60,auStack_438);
  if (((ulong)auStack_438 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)auStack_438 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x04864f30(auStack_238,param_6,&UNK_0146768a);
  cVar19 = func_0x04865100(auStack_238,&UNK_011c497f);
  if (cVar19 != '\0') {
    func_0x0b039c00(1,2,0,&UNK_014206cf);
  }
  func_0x048635d0(auStack_70,auStack_238);
  puStack_140 = &UNK_0f2800e8;
  func_0x048635d0(auStack_138,auStack_70);
  ppppppiVar25 = (int ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xee8);
  if (ppppppiVar25 == (int ******)0x0) {
    func_0x0eec74c0(0xee8,0);
  }
  func_0x0b431fb0(ppppppiVar25,auStack_658);
  ppppppiStack_550 = ppppppiVar25;
  cVar19 = func_0x0551ca70(&ppppppiStack_628,&UNK_0f280320);
  if (cVar19 != '\0') {
    puVar31 = (undefined1 *)((ulong)auStack_658 >> 1 & 0x7f);
    pppppppiVar34 = (int *******)(auStack_658 + 1);
    if (((ulong)auStack_658 & 1) != 0) {
      puVar31 = puStack_650;
      pppppppiVar34 = pppppppiStack_648;
    }
    if (8 < (long)puVar31) {
      plVar22 = (long *)((long)pppppppiVar34 + (long)puVar31);
      pppppppiVar27 = pppppppiVar34;
      while( true ) {
        plVar26 = (long *)memchr(pppppppiVar27,0x6d,puVar31 + -8);
        if (plVar26 == (long *)0x0) break;
        if ((char)plVar26[1] == DAT_017f3c71 && *plVar26 == _DAT_017f3c69) {
          if ((long)plVar26 - (long)pppppppiVar34 != -1 && plVar26 != plVar22) {
            *(undefined1 *)(ppppppiVar25 + 0x7a) = 1;
          }
          break;
        }
        pppppppiVar27 = (int *******)((long)plVar26 + 1);
        puVar31 = (undefined1 *)((long)plVar22 - (long)pppppppiVar27);
        if ((long)puVar31 < 9) break;
      }
    }
  }
  lVar24 = func_0x0b0d1960(pppppppuStack_378 + 8,auStack_658);
  if (lVar24 != 0) {
    lVar32 = *(long *)(lVar24 + 0x28);
    *(undefined1 *)(ppppppiVar25 + 0x78) = *(undefined1 *)(lVar32 + 0x3c0);
    *(undefined2 *)(ppppppiVar25 + 0x7a) = *(undefined2 *)(lVar32 + 0x3d0);
    lVar32 = *(long *)(lVar24 + 0x28);
    uVar8 = *(undefined4 *)(lVar32 + 0x430);
    uVar9 = *(undefined4 *)(lVar32 + 0x434);
    uVar10 = *(undefined4 *)(lVar32 + 0x438);
    uVar11 = *(undefined4 *)(lVar32 + 0x43c);
    if (*(long *)(lVar32 + 0x438) != 0) {
      LOCK();
      plVar22 = (long *)(*(long *)(lVar32 + 0x438) + 8);
      *plVar22 = *plVar22 + 1;
      UNLOCK();
    }
    pppppiVar5 = ppppppiVar25[0x87];
    *(undefined4 *)(ppppppiVar25 + 0x86) = uVar8;
    *(undefined4 *)((long)ppppppiVar25 + 0x434) = uVar9;
    *(undefined4 *)(ppppppiVar25 + 0x87) = uVar10;
    *(undefined4 *)((long)ppppppiVar25 + 0x43c) = uVar11;
    if (pppppiVar5 != (int *****)0x0) {
      LOCK();
      pppppiVar2 = pppppiVar5 + 1;
      ppppiVar3 = *pppppiVar2;
      *pppppiVar2 = (int ****)((long)*pppppiVar2 + -1);
      UNLOCK();
      if (ppppiVar3 == (int ****)0x0) {
        (*(code *)(*pppppiVar5)[2])(pppppiVar5);
        func_0x0412c2d0(pppppiVar5);
      }
    }
    ppppppiVar25 = *(int *******)(lVar24 + 0x28);
    if (ppppppiStack_550 != ppppppiVar25) {
      func_0x0b09ab60(ppppppiStack_550 + 0x89,ppppppiVar25[0x89],ppppppiVar25[0x8a],
                      ((long)ppppppiVar25[0x8a] - (long)ppppppiVar25[0x89] >> 4) *
                      -0x3333333333333333);
    }
  }
  lVar24 = (**(code **)(*plStack_480 + 0x908))();
  lVar24 = *(long *)(lVar24 + 0xb0);
  uVar4 = *(undefined2 *)((long)dStack_488 + 0x50);
  uVar21 = *(undefined8 *)((long)dStack_488 + 0x58);
  plVar22 = *(long **)((long)dStack_488 + 0x60);
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
  }
  uVar6 = *(undefined8 *)((long)dStack_488 + 0x68);
  uStack_150 = *(undefined8 *)((long)dStack_488 + 0x70);
  uStack_148 = *(undefined2 *)((long)dStack_488 + 0x78);
  uStack_170 = uVar4;
  uStack_168 = uVar21;
  plStack_160 = plVar22;
  uStack_158 = uVar6;
  func_0x0b0398a0(&pppppppiStack_478,&ppppppiStack_628,(long)dStack_488 + 0x80,
                  *(undefined1 *)((long)dStack_488 + 0x49));
  ppppppiStack_2e8 = (int ******)CONCAT62(ppppppiStack_2e8._2_6_,uVar4);
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  uStack_158 = 0;
  uStack_2c0 = CONCAT62(uStack_2c0._2_6_,uStack_148);
  uStack_2c8 = uStack_150;
  _auStack_608 = (int *******)CONCAT62(stack0xfffffffffffff9fa,uVar4);
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  uStack_2d0 = 0;
  uStack_5e8 = uStack_150;
  uStack_5e0 = CONCAT62(uStack_5e0._2_6_,uStack_148);
  puStack_600 = (undefined1 *)uVar21;
  pppppppiStack_5f8 = (int *******)plVar22;
  puStack_5f0 = (undefined1 *)uVar6;
  func_0x0b0da070(*(undefined8 *)(lVar24 + 0x1d0),auStack_608);
  pppppppiVar34 = pppppppiStack_5f8;
  puVar36 = puStack_638;
  puStack_600 = (undefined1 *)0x0;
  pppppppiStack_5f8 = (int *******)0x0;
  if (pppppppiVar34 != (int *******)0x0) {
    LOCK();
    plVar22 = (long *)(pppppppiVar34 + 1);
    lVar32 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)((long)*pppppppiVar34 + 0x10))(pppppppiVar34);
      func_0x0412c2d0(pppppppiVar34);
    }
    pppppppiVar34 = pppppppiStack_5f8;
    puStack_5f0 = (undefined1 *)0x0;
    if (pppppppiStack_5f8 != (int *******)0x0) {
      LOCK();
      plVar22 = (long *)(pppppppiStack_5f8 + 1);
      lVar32 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)((long)*pppppppiStack_5f8 + 0x10))(pppppppiStack_5f8);
        func_0x0412c2d0(pppppppiVar34);
      }
    }
  }
  plVar22 = plStack_2d8;
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    uStack_2d0 = 0;
  }
  else {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar32 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_2d8;
    uStack_2d0 = 0;
    if (plStack_2d8 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_2d8 + 1;
      lVar32 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  uStack_5e0 = uStack_450;
  uStack_5e8 = uStack_458;
  pppppppiStack_5f8 = pppppppiStack_468;
  puStack_600 = puStack_470;
  uStack_518 = CONCAT44(CONCAT22(uStack_518._6_2_,uStack_444),uStack_448);
  pppppppuStack_510 = (undefined8 *******)CONCAT71(pppppppuStack_510._1_7_,uStack_440);
  pppppppiStack_548 = pppppppiStack_478;
  puStack_470 = (undefined1 *)0x0;
  _auStack_608 = pppppppiStack_478;
  pppppppiStack_540 = (int *******)0x0;
  dStack_538 = 0.0;
  pppppppiStack_468 = (int *******)0x0;
  puStack_530 = puStack_460;
  puStack_5f0 = puStack_460;
  uStack_528 = (long *)0x0;
  uStack_458 = 0;
  uStack_450 = 0;
  pppppppiStack_520 = (int *******)0x0;
  uStack_5d8 = CONCAT44(CONCAT22(uStack_5d8._6_2_,uStack_444),uStack_448);
  uStack_5d0 = CONCAT71(uStack_5d0._1_7_,uStack_440);
  lStack_5c8 = lVar24;
  lStack_508 = lVar24;
  func_0x0b0da250(*(undefined8 *)(lVar24 + 0x1d0),auStack_608);
  if ((uStack_5e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5e0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_5e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5e8 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)pppppppiStack_5f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppiStack_5f8 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)puStack_600 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_600 & 0xff00ffffffffffff) - 8)
    ;
  }
  if ((uStack_450 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_450 & 0xff00ffffffffffff) - 8);
  }
  uStack_450 = 0;
  if ((uStack_458 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_458 & 0xff00ffffffffffff) - 8);
  }
  uStack_458 = 0;
  if (((ulong)pppppppiStack_468 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppppiStack_468 & 0xff00ffffffffffff) - 8);
  }
  pppppppiStack_468 = (int *******)0x0;
  if (((ulong)puStack_470 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_470 & 0xff00ffffffffffff) - 8)
    ;
  }
  plVar22 = plStack_160;
  puStack_470 = (undefined1 *)0x0;
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar32 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar32 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_160;
    uStack_158 = 0;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_160 + 1;
      lVar32 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  lVar24 = *(long *)(lVar24 + 0x1d0);
  func_0x0d6afff0(&pppppppiStack_548,lVar24,&puStack_140,&ppppppiStack_628,1);
  if (((ulong)pppppppiStack_520 & 0x80000000000000) == 0) {
    if (((ulong)pppppppiStack_520 & 0x7f000000000000) == 0) goto LAB_0b037dbf;
    uVar30 = (ulong)((ushort)((ulong)pppppppiStack_520 >> 0x30) & 0x7f);
LAB_0b037d78:
    if ((((uVar30 != 4) || (*(int *)((ulong)pppppppiStack_520 & 0xff00ffffffffffff) != 0x61746562))
        || ((short)uStack_528 != 9999)) ||
       ((uStack_528._2_2_ != 9999 || (uStack_528._4_2_ != 9999)))) goto LAB_0b037dbf;
    bVar42 = true;
    lVar32 = 0x80;
  }
  else {
    uVar30 = *(ulong *)(((ulong)pppppppiStack_520 & 0xff00ffffffffffff) - 8);
    if (uVar30 != 0) goto LAB_0b037d78;
LAB_0b037dbf:
    lVar32 = 0x50;
    bVar42 = false;
  }
  if (*(long *)(lVar24 + lVar32) == 0 || ((bStack_49c ^ 1) & uStack_528._6_1_) != 1) {
LAB_0b037eb0:
    if (((~uStack_528._6_1_ | bStack_49c) & 1) == 0) {
      if (bVar42) {
        func_0x05ebb920(auStack_228,&pppppppiStack_548);
        func_0x05ebb920(&ppppppiStack_2e8,auStack_228);
        func_0x05ebb920(auStack_608,&ppppppiStack_2e8);
        uStack_558 = 1;
        auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffffff00);
        uStack_388 = 0xffffffff;
        func_0x05ebb920(auStack_438,auStack_608);
        uStack_388 = 1;
        if ((ulong)uStack_558 != 0xffffffff) {
          (**(code **)(&UNK_0f280348 + (ulong)uStack_558 * 8))(&uStack_659,auStack_608);
        }
        uStack_558 = 0xffffffff;
        func_0x05d85c50(auStack_288);
        if (pcStack_298 != (code *)0x0) {
          (*pcStack_298)(auStack_2b0);
        }
        if ((uStack_2b8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b8 & 0xff00ffffffffffff) - 8);
        }
        uStack_2b8 = 0;
        if ((uStack_2c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
        }
        uStack_2c0 = 0;
        func_0x05d85c50(auStack_1c8);
        if (pcStack_1d8 != (code *)0x0) {
          (*pcStack_1d8)(&uStack_1f0);
        }
        if ((uStack_1f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1f8 = 0;
        if ((uStack_200 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
        }
      }
      else {
        func_0x05ebb920(auStack_228,&pppppppiStack_548);
        func_0x05ebb920(&ppppppiStack_2e8,auStack_228);
        func_0x05ebb920(auStack_608,&ppppppiStack_2e8);
        uStack_558 = 0;
        auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffffff00);
        uStack_388 = 0xffffffff;
        func_0x05ebb920(auStack_438,auStack_608);
        uStack_388 = 0;
        if ((ulong)uStack_558 != 0xffffffff) {
          (**(code **)(&UNK_0f280348 + (ulong)uStack_558 * 8))(&uStack_659,auStack_608);
        }
        uStack_558 = 0xffffffff;
        func_0x05d85c50(auStack_288);
        if (pcStack_298 != (code *)0x0) {
          (*pcStack_298)(auStack_2b0);
        }
        if ((uStack_2b8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b8 & 0xff00ffffffffffff) - 8);
        }
        uStack_2b8 = 0;
        if ((uStack_2c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
        }
        uStack_2c0 = 0;
        func_0x05d85c50(auStack_1c8);
        if (pcStack_1d8 != (code *)0x0) {
          (*pcStack_1d8)(&uStack_1f0);
        }
        if ((uStack_1f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
        }
        uStack_1f8 = 0;
        if ((uStack_200 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
        }
      }
      uStack_200 = 0;
    }
    else {
      if (bVar42) {
        auStack_228 = (undefined1  [8])pppppppiStack_4e8;
        uStack_220 = uStack_4e0;
        pppppppiStack_218 = pppppppiStack_4d8;
        pppppppiStack_4e8 = (int *******)0x0;
        uStack_4e0 = 0;
        pppppppiStack_4d8 = (int *******)0x0;
        uStack_210 = uStack_4d0;
        uStack_208 = uStack_4c8;
        uStack_200 = uStack_4c0;
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
        uStack_1f8 = uStack_4b8;
        uStack_1f0 = (undefined4)uStack_4b0;
        uStack_1ec = uStack_4b0._4_4_;
        uStack_1e8 = uStack_4a8;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        uStack_1e0 = uStack_4a0;
        bStack_1dc = bStack_49c;
        func_0x0b0d21c0(&ppppppiStack_2e8,auStack_228);
        func_0x05ebb920(auStack_608,&ppppppiStack_2e8);
        uStack_558 = 1;
        auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffffff00);
        uStack_388 = 0xffffffff;
        func_0x05ebb920(auStack_438,auStack_608);
        uStack_388 = 1;
        if ((ulong)uStack_558 != 0xffffffff) {
          (**(code **)(&UNK_0f280348 + (ulong)uStack_558 * 8))(&uStack_659,auStack_608);
        }
        uStack_558 = 0xffffffff;
        func_0x05d85c50(auStack_288);
        if (pcStack_298 != (code *)0x0) {
          (*pcStack_298)(auStack_2b0);
        }
        if ((uStack_2b8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b8 & 0xff00ffffffffffff) - 8);
        }
        uStack_2b8 = 0;
        if ((uStack_2c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
        }
      }
      else {
        auStack_228 = (undefined1  [8])pppppppiStack_4e8;
        uStack_220 = uStack_4e0;
        pppppppiStack_218 = pppppppiStack_4d8;
        pppppppiStack_4e8 = (int *******)0x0;
        uStack_4e0 = 0;
        pppppppiStack_4d8 = (int *******)0x0;
        uStack_210 = uStack_4d0;
        uStack_208 = uStack_4c8;
        uStack_200 = uStack_4c0;
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
        uStack_1f8 = uStack_4b8;
        uStack_1f0 = (undefined4)uStack_4b0;
        uStack_1ec = uStack_4b0._4_4_;
        uStack_1e8 = uStack_4a8;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        uStack_1e0 = uStack_4a0;
        bStack_1dc = bStack_49c;
        func_0x0b0d1f80(&ppppppiStack_2e8,auStack_228);
        func_0x05ebb920(auStack_608,&ppppppiStack_2e8);
        uStack_558 = 0;
        auStack_438 = (undefined1  [8])((ulong)auStack_438 & 0xffffffffffffff00);
        uStack_388 = 0xffffffff;
        func_0x05ebb920(auStack_438,auStack_608);
        uStack_388 = 0;
        if ((ulong)uStack_558 != 0xffffffff) {
          (**(code **)(&UNK_0f280348 + (ulong)uStack_558 * 8))(&uStack_659,auStack_608);
        }
        uStack_558 = 0xffffffff;
        func_0x05d85c50(auStack_288);
        if (pcStack_298 != (code *)0x0) {
          (*pcStack_298)(auStack_2b0);
        }
        if ((uStack_2b8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b8 & 0xff00ffffffffffff) - 8);
        }
        uStack_2b8 = 0;
        if ((uStack_2c0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c0 & 0xff00ffffffffffff) - 8);
        }
      }
      uStack_2c0 = 0;
      func_0x05d85c50(auStack_228);
    }
    func_0x05d85c50(&pppppppiStack_4e8);
    if (pcStack_4f8 != (code *)0x0) {
      (*pcStack_4f8)(&pppppppuStack_510);
    }
    if ((uStack_518 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
    }
    uStack_518 = 0;
    if (((ulong)pppppppiStack_520 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppiStack_520 & 0xff00ffffffffffff) - 8);
    }
    if ((ulong)uStack_388 == 0xffffffff) {
LAB_0b039185:
      func_0x04931450();
LAB_0b03918a:
      func_0x04931450();
LAB_0b03918f:
      func_0x04931450();
LAB_0b039194:
      func_0x04931450();
LAB_0b039199:
      func_0x04931450();
      goto LAB_0b03919e;
    }
    _auStack_608 = (int *******)&pppppppiStack_548;
    uVar21 = (**(code **)(&UNK_0f281140 + (ulong)uStack_388 * 8))(auStack_608,auStack_438);
    _auStack_608 = (int *******)0xffffffff;
    puStack_600 = (undefined1 *)0x0;
    pppppppiStack_5f8 = (int *******)0x0;
    puStack_5f0 = (undefined1 *)0x0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    lStack_5c8 = 0;
    uStack_5c0 = 0;
    cVar19 = func_0x0d5cf650(uVar21,0x15,auStack_608);
    func_0x05f43a40(auStack_608);
    uVar17 = uStack_388;
    if (cVar19 != '\0') {
      if ((ulong)uStack_388 != 0xffffffff) {
        pppppppiStack_548 = &ppppppiStack_2e8;
        auVar43 = (**(code **)(&UNK_0f281150 + (ulong)uStack_388 * 8))
                            (&pppppppiStack_548,auStack_438);
        ppppppiStack_2e8 = auVar43._0_8_;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,auVar43._8_4_);
        pppppppiStack_478 = (int *******)((ulong)pppppppiStack_478 & 0xffffffff00000000);
        pppppppiStack_548 = &ppppppiStack_550;
        pppppppiStack_540 = &ppppppiStack_628;
        dStack_538 = dStack_488;
        puStack_530 = auStack_658;
        uStack_528 = plStack_480;
        pppppppiStack_520 = (int *******)&pppppppiStack_478;
        uStack_518 = uStack_178;
        pppppppuStack_510 = pppppppuStack_378;
        if (auVar43._8_4_ != -1) {
          auStack_228 = (undefined1  [8])&pppppppiStack_548;
          cVar19 = (**(code **)(&UNK_0f2810c0 + (auVar43._8_8_ & 0xffffffff) * 8))
                             (auStack_228,&ppppppiStack_2e8);
          uVar17 = uStack_388;
          if (cVar19 == '\0') {
            if ((ulong)uStack_388 == 0xffffffff) goto LAB_0b039185;
            pppppppiStack_548 = &ppppppiStack_2e8;
            (**(code **)(&UNK_0f281160 + (ulong)uStack_388 * 8))
                      (auStack_128,&pppppppiStack_548,auStack_438);
          }
          else {
            auStack_128[0] = 0;
            uStack_78 = 0xffffffff;
            if ((ulong)uStack_388 == 0xffffffff) goto LAB_0b038932;
            pppppppiStack_548 = (int *******)auStack_128;
            (**(code **)(&UNK_0f280358 + (ulong)uStack_388 * 8))(&pppppppiStack_548,auStack_438);
            uStack_78 = uVar17;
          }
LAB_0b038907:
          if ((ulong)uStack_388 != 0xffffffff) {
            (**(code **)(&UNK_0f280348 + (ulong)uStack_388 * 8))(&pppppppiStack_548,auStack_438);
          }
          goto LAB_0b038932;
        }
      }
      goto LAB_0b039185;
    }
    auStack_128[0] = 0;
    uStack_78 = 0xffffffff;
    if ((ulong)uStack_388 != 0xffffffff) {
      pppppppiStack_548 = (int *******)auStack_128;
      (**(code **)(&UNK_0f280358 + (ulong)uStack_388 * 8))(&pppppppiStack_548,auStack_438);
      uStack_78 = uVar17;
      goto LAB_0b038907;
    }
LAB_0b038932:
    ppppppiVar25 = ppppppiStack_550;
    ppppppiStack_550 = (int ******)0x0;
    if (ppppppiVar25 != (int ******)0x0) {
      func_0x0b0c1710(ppppppiVar25);
      func_0x0412a280(ppppppiVar25,0xee8);
    }
    puStack_140 = &UNK_0f2800e8;
    func_0x04863610(auStack_138);
    func_0x04863610(auStack_70);
    func_0x04863610(auStack_238);
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b03918f;
    _auStack_608 = (int *******)auStack_438;
    puVar29 = (undefined4 *)
              (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    uVar8 = *puVar29;
    uVar9 = puVar29[1];
    uVar10 = puVar29[2];
    uVar11 = puVar29[3];
    uVar12 = *(undefined4 *)((long)puVar29 + 0xd);
    uVar13 = *(undefined4 *)((long)puVar29 + 0x11);
    uVar14 = *(undefined4 *)((long)puVar29 + 0x15);
    *(undefined4 *)((long)puVar36 + 0x31) = *(undefined4 *)((long)puVar29 + 9);
    *(undefined4 *)((long)puVar36 + 0x35) = uVar12;
    *(undefined4 *)((long)puVar36 + 0x39) = uVar13;
    *(undefined4 *)((long)puVar36 + 0x3d) = uVar14;
    puVar36[10] = uVar8;
    puVar36[0xb] = uVar9;
    puVar36[0xc] = uVar10;
    puVar36[0xd] = uVar11;
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b03918a;
    _auStack_608 = (int *******)auStack_438;
    lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    if (*(char *)(lVar24 + 0x26) == '\x01') {
      if ((ulong)uStack_78 != 0xffffffff) {
        _auStack_608 = (int *******)auStack_438;
        lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
        if (*(char *)(lVar24 + 0xac) == '\x01') goto LAB_0b038a48;
        bVar42 = true;
        func_0x04907e30(param_7,auStack_658);
LAB_0b038fae:
        if ((ulong)uStack_78 != 0xffffffff) {
          (**(code **)(&UNK_0f280348 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
        }
        bVar15 = (bool)(bVar42 ^ 1);
        func_0x0eeb81b0(auStack_60);
        func_0x0eeb81b0(auStack_48);
joined_r0x0b039008:
        if ((uStack_308 & 1) != 0) {
          func_0x0412a280(lStack_2f8,CONCAT44(uStack_304,uStack_308) & 0xfffffffffffffffe);
        }
        if ((bStack_328 & 1) != 0) {
          func_0x0412a280(uStack_318,CONCAT71(uStack_327,bStack_328) & 0xfffffffffffffffe);
        }
        if ((bStack_340 & 1) != 0) {
          func_0x0412a280(uStack_330,CONCAT71(uStack_33f,bStack_340) & 0xfffffffffffffffe);
        }
        if ((bStack_358 & 1) != 0) {
          func_0x0412a280(pcStack_348,
                          CONCAT62(uStack_356,CONCAT11(cStack_357,bStack_358)) & 0xfffffffffffffffe)
          ;
        }
        if ((bStack_370 & 1) != 0) {
          func_0x0412a280(plStack_360,CONCAT71(auStack_36f._0_7_,bStack_370) & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_658 & 1) != 0) {
          func_0x0412a280(pppppppiStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
        }
        if ((auStack_618[0] & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(auStack_618[0] & 0xff00ffffffffffff) - 8);
        }
        auStack_618[0] = 0;
        if ((uStack_620 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_620 & 0xff00ffffffffffff) - 8);
        }
        if (bVar42 || bVar15) {
          return;
        }
        if ((*puStack_630 & 1) == 0) {
          return;
        }
        func_0x0412a280(*(undefined8 *)(puVar36 + 6),*(ulong *)(puVar36 + 2) & 0xfffffffffffffffe);
        return;
      }
      goto LAB_0b03918a;
    }
LAB_0b038a48:
    puVar31 = (undefined1 *)((ulong)auStack_658 >> 1 & 0x7f);
    if (((ulong)auStack_658 & 1) != 0) {
      puVar31 = puStack_650;
      pppppppiStack_490 = pppppppiStack_648;
    }
    auStack_438 = (undefined1  [8])0x0;
    puStack_430 = (undefined1 *)0x0;
    pppppppiStack_428 = (int *******)0x0;
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b039194;
    _auStack_608 = (int *******)&pppppppiStack_548;
    lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    psVar37 = *(short **)(lVar24 + 0x60);
    psVar38 = psVar37;
    for (; (psVar37 != *(short **)(lVar24 + 0x68) && (psVar38 = psVar37, *psVar37 == 0));
        psVar37 = psVar37 + 0x1c) {
      psVar38 = *(short **)(lVar24 + 0x68);
    }
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b039199;
    _auStack_608 = (int *******)&pppppppiStack_548;
    lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    if (psVar38 != *(short **)(lVar24 + 0x68)) {
      if ((ulong)uStack_78 != 0xffffffff) {
        _auStack_608 = (int *******)&pppppppiStack_548;
        lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
        for (psVar37 = *(short **)(lVar24 + 0x60);
            (psVar37 != *(short **)(lVar24 + 0x68) && (*psVar37 == 0)); psVar37 = psVar37 + 0x1c) {
        }
        if ((*(byte *)(psVar37 + 0x10) & 1) == 0) {
          dStack_538 = *(double *)(psVar37 + 0x18);
          pppppppiStack_548 = *(int ********)(psVar37 + 0x10);
          pppppppiStack_540 = *(int ********)(psVar37 + 0x14);
        }
        else {
          func_0x0412e5e0(&pppppppiStack_548,*(undefined8 *)(psVar37 + 0x18),
                          *(undefined8 *)(psVar37 + 0x14));
        }
        func_0x0d5cf3f0(auStack_608,psVar37 + 4,&pppppppiStack_548);
        puVar23 = (ulong *)func_0x0412f0e0(auStack_608,0,&UNK_014549b8,0x17);
LAB_0b038e4d:
        ppppppiVar25 = (int ******)*puVar23;
        puVar41 = (undefined1 *)puVar23[1];
        pppppppiVar34 = (int *******)puVar23[2];
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        auStack_438 = (undefined1  [8])ppppppiVar25;
        puStack_430 = puVar41;
        pppppppiStack_428 = pppppppiVar34;
        if (((ulong)_auStack_608 & 1) != 0) {
          func_0x0412a280(pppppppiStack_5f8,(ulong)_auStack_608 & 0xfffffffffffffffe);
        }
        if (((ulong)pppppppiStack_548 & 1) != 0) {
          func_0x0412a280(dStack_538,(ulong)pppppppiStack_548 & 0xfffffffffffffffe);
        }
LAB_0b038ec0:
        _auStack_608 = pppppppiStack_490;
        bVar42 = ((ulong)ppppppiVar25 & 1) != 0;
        pppppppiStack_5f8 = (int *******)(auStack_438 + 1);
        if (bVar42) {
          pppppppiStack_5f8 = pppppppiVar34;
        }
        puStack_5f0 = (undefined1 *)(ulong)((byte)(((ulong)ppppppiVar25 & 0xffffffff) >> 1) & 0x7f);
        if (bVar42) {
          puStack_5f0 = puVar41;
        }
        puStack_600 = puVar31;
        func_0x0470d9a0(auStack_228,&UNK_01383a5c,0x2f,0xdd,auStack_608);
        pppppppiStack_478 = pppppppiStack_218;
        if (((ulong)auStack_228 & 1) == 0) {
          pppppppiStack_478 = (int *******)(auStack_228 + 1);
        }
        func_0x09adffe0(1,3,0,&pppppppiStack_478);
        if (((ulong)auStack_228 & 1) != 0) {
          func_0x0412a280(pppppppiStack_218,(ulong)auStack_228 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_438 & 1) != 0) {
          func_0x0412a280(pppppppiStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
        }
        *puVar36 = 4;
        bVar42 = false;
        goto LAB_0b038fae;
      }
      goto LAB_0b03918a;
    }
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b0391a3;
    _auStack_608 = (int *******)&pppppppiStack_548;
    lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    pcVar39 = *(char **)(lVar24 + 0x78);
    pcVar40 = pcVar39;
    for (; (pcVar39 != *(char **)(lVar24 + 0x80) && (pcVar40 = pcVar39, *pcVar39 == '\0'));
        pcVar39 = pcVar39 + 0x50) {
      pcVar40 = *(char **)(lVar24 + 0x80);
    }
    if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b0391a8;
    _auStack_608 = (int *******)&pppppppiStack_548;
    lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
    if (pcVar40 != *(char **)(lVar24 + 0x80)) {
      if ((ulong)uStack_78 != 0xffffffff) {
        _auStack_608 = (int *******)&pppppppiStack_548;
        lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
        for (pcVar39 = *(char **)(lVar24 + 0x78);
            (pcVar39 != *(char **)(lVar24 + 0x80) && (*pcVar39 == '\0')); pcVar39 = pcVar39 + 0x50)
        {
        }
        if ((pcVar39[0x38] & 1U) == 0) {
          dStack_538 = *(double *)(pcVar39 + 0x48);
          pppppppiStack_548 = *(int ********)(pcVar39 + 0x38);
          pppppppiStack_540 = *(int ********)(pcVar39 + 0x40);
        }
        else {
          func_0x0412e5e0(&pppppppiStack_548,*(undefined8 *)(pcVar39 + 0x48),
                          *(undefined8 *)(pcVar39 + 0x40));
        }
        func_0x0d5cf3f0(auStack_608,pcVar39 + 8,&pppppppiStack_548);
        puVar23 = (ulong *)func_0x0412f0e0(auStack_608,0,&UNK_012159e8,0x19);
        goto LAB_0b038e4d;
      }
      goto LAB_0b03918a;
    }
    if ((ulong)uStack_78 != 0xffffffff) {
      _auStack_608 = (int *******)&pppppppiStack_548;
      lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
      pcVar39 = *(char **)(lVar24 + 0x90);
      pcVar40 = pcVar39;
      for (; (pcVar39 != *(char **)(lVar24 + 0x98) && (pcVar40 = pcVar39, *pcVar39 == '\0'));
          pcVar39 = pcVar39 + 0x20) {
        pcVar40 = *(char **)(lVar24 + 0x98);
      }
      if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b0391b2;
      _auStack_608 = (int *******)&pppppppiStack_548;
      lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
      if (pcVar40 == *(char **)(lVar24 + 0x98)) {
        puVar41 = (undefined1 *)0x0;
        pppppppiVar34 = (int *******)0x0;
        ppppppiVar25 = (int ******)0x0;
      }
      else {
        if ((ulong)uStack_78 == 0xffffffff) goto LAB_0b03918a;
        _auStack_608 = (int *******)&pppppppiStack_548;
        lVar24 = (**(code **)(&UNK_0f280390 + (ulong)uStack_78 * 8))(auStack_608,auStack_128);
        for (pcVar39 = *(char **)(lVar24 + 0x90);
            (pcVar39 != *(char **)(lVar24 + 0x98) && (*pcVar39 == '\0')); pcVar39 = pcVar39 + 0x20)
        {
        }
        pppppppiStack_548 = (int *******)0x0;
        pppppppiStack_540 = (int *******)0x0;
        dStack_538 = 0.0;
        if ((pcVar39[8] & 1U) == 0) {
          plStack_2d8 = *(long **)(pcVar39 + 0x18);
          ppppppiStack_2e8 = *(int *******)(pcVar39 + 8);
          uStack_2e0 = *(undefined8 *)(pcVar39 + 0x10);
        }
        else {
          func_0x0412e5e0(&ppppppiStack_2e8,*(undefined8 *)(pcVar39 + 0x18),
                          *(undefined8 *)(pcVar39 + 0x10));
        }
        func_0x0d5cf3f0(auStack_608,&pppppppiStack_548,&ppppppiStack_2e8);
        puVar23 = (ulong *)func_0x0412f0e0(auStack_608,0,&UNK_012e52c1,0x1a);
        ppppppiVar25 = (int ******)*puVar23;
        puVar41 = (undefined1 *)puVar23[1];
        pppppppiVar34 = (int *******)puVar23[2];
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        auStack_438 = (undefined1  [8])ppppppiVar25;
        puStack_430 = puVar41;
        pppppppiStack_428 = pppppppiVar34;
        if (((ulong)_auStack_608 & 1) != 0) {
          func_0x0412a280(pppppppiStack_5f8,(ulong)_auStack_608 & 0xfffffffffffffffe);
        }
        puVar36 = puStack_638;
        pppppppiVar27 = pppppppiStack_548;
        if (((ulong)ppppppiStack_2e8 & 1) != 0) {
          func_0x0412a280(plStack_2d8,(ulong)ppppppiStack_2e8 & 0xfffffffffffffffe);
          puVar36 = puStack_638;
          pppppppiVar27 = pppppppiStack_548;
        }
        puStack_638 = puVar36;
        pppppppiStack_548 = pppppppiVar27;
        pppppppiVar33 = pppppppiStack_540;
        if (pppppppiVar27 != (int *******)0x0) {
          for (; pppppppiVar27 != pppppppiVar33; pppppppiVar33 = pppppppiVar33 + -4) {
            if (((ulong)pppppppiVar33[-3] & 1) != 0) {
              func_0x0412a280(pppppppiVar33[-1],(ulong)pppppppiVar33[-3] & 0xfffffffffffffffe);
            }
          }
          pppppppiStack_540 = pppppppiVar27;
          func_0x0412a280(pppppppiStack_548,(long)dStack_538 - (long)pppppppiStack_548);
          puVar36 = puStack_638;
        }
      }
      goto LAB_0b038ec0;
    }
  }
  else {
    lVar32 = func_0x0417cc60();
    if (cStack_4ec == '\x02') {
      pppppppuVar28 = &pppppppuStack_510;
      if (bVar42) goto LAB_0b037e40;
LAB_0b037e1b:
      pppppppuVar35 = (undefined8 *******)0x0;
      if (iStack_4f0 == 0x5fa7d015) {
        pppppppuVar35 = pppppppuVar28;
      }
      plVar22 = *(long **)(lVar24 + 0x50);
    }
    else {
      pppppppuVar28 = pppppppuStack_510;
      if (!bVar42) goto LAB_0b037e1b;
LAB_0b037e40:
      pppppppuVar35 = (undefined8 *******)0x0;
      if (iStack_4f0 == 0xde1ff0d) {
        pppppppuVar35 = pppppppuVar28;
      }
      plVar22 = *(long **)(lVar24 + 0x80);
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x30))(plVar22,pppppppuVar35,&pppppppiStack_4e8);
      lVar24 = func_0x0417cc60();
      dStack_538 = (double)(lVar24 - lVar32) / _DAT_014f0138;
      puStack_530 = (undefined1 *)
                    CONCAT71(puStack_530._1_7_,(byte)puStack_530 & ~bStack_49c & uStack_528._6_1_);
      goto LAB_0b037eb0;
    }
LAB_0b03919e:
    func_0x04891200();
LAB_0b0391a3:
    func_0x04931450();
LAB_0b0391a8:
    func_0x04931450();
  }
  func_0x04931450();
LAB_0b0391b2:
  uVar21 = func_0x04931450();
  func_0x05d546e0(&pppppppiStack_548);
  func_0x0b0d2170(auStack_128);
  func_0x0eeb81b0(auStack_60);
  func_0x0eeb81b0(auStack_48);
  func_0x04a3a0b0(&bStack_370);
  if (((ulong)auStack_658 & 1) != 0) {
    func_0x0412a280(pppppppiStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
  }
  FUN_0ee386e0(auStack_618);
  FUN_0ee386e0(&uStack_620);
  if ((*puStack_630 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(puStack_638 + 6),
                    *(ulong *)(puStack_638 + 2) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar21);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x17f3c69  minecraft
 */
