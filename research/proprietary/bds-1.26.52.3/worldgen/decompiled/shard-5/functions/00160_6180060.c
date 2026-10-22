/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6280060 (ELF vaddr 0x6180060)
 * Label: caller-of-callee
 * Body:  [[06280060, 062801de] [062801e0, 062801fb] [06280200, 06280212] [06280220, 0628037d] [06280380, 062803b2] [062803c0, 06280896] [062808a0, 06280d9a] [06280da0, 06281050] [06281060, 062813c9] [062815e2, 06281603] [06281613, 06281646]]
 * Ghidra: FUN_06280060
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_06280060(undefined1 *param_1,long param_2,uint *param_3,int param_4,ulong param_5,int param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined1 auVar6 [8];
  undefined1 *puVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  byte bVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  bool bVar30;
  undefined1 auStack_418 [8];
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  int iStack_3f4;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  long lStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  ulong uStack_3c0;
  byte *pbStack_3b8;
  byte bStack_3b0;
  undefined7 uStack_3af;
  ulong uStack_3a8;
  undefined7 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined1 *puStack_388;
  undefined8 uStack_380;
  undefined8 **ppuStack_378;
  undefined8 **ppuStack_370;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 **ppuStack_358;
  undefined8 **ppuStack_350;
  byte bStack_348;
  undefined7 uStack_347;
  undefined8 uStack_338;
  undefined1 uStack_32c;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  byte bStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  char cStack_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined8 uStack_298;
  int iStack_290;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_1a0;
  int *piStack_198;
  int *piStack_190;
  int *piStack_188;
  undefined7 *puStack_180;
  ulong uStack_178;
  undefined8 **ppuStack_170;
  undefined1 uStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [136];
  uint uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [136];
  uint uStack_38;
  
  puStack_388 = param_1;
  iVar10 = func_0x0627ad70(param_2,param_3,param_4);
  uVar26 = (ulong)(iVar10 + 1);
  if ((param_5 >> 0x20 & 1) != 0) {
    uVar26 = param_5 & 0xffffffff;
  }
  iVar10 = (int)uVar26;
  func_0x0627c910(&uStack_280,param_2,param_3,param_4,uVar26,param_6);
  lStack_390 = CONCAT44(lStack_390._4_4_,param_6);
  if (param_6 != 1) {
    func_0x0627ba40(&bStack_3b0,param_2,param_3,param_4,uVar26 | 0x100000000);
    if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    puStack_180 = &uStack_3af;
    uStack_178 = (ulong)(bStack_3b0 >> 1);
    if ((bStack_3b0 & 1) != 0) {
      uStack_178 = uStack_3a8;
      puStack_180 = puStack_3a0;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_2f0,&DAT_0f7b8f98,&puStack_180);
    lVar28 = *(long *)(param_2 + 0x78);
    lVar23 = *(long *)(param_2 + 0x80);
    lStack_398 = param_2;
    if ((*param_3 & 1) == 0) {
      uStack_298 = *(undefined8 *)(param_3 + 4);
      uStack_2a8 = *param_3;
      uStack_2a4 = param_3[1];
      uStack_2a0 = param_3[2];
      uStack_29c = param_3[3];
    }
    else {
      func_0x0412e5e0(&uStack_2a8,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 2));
    }
    uVar19 = uStack_298;
    iStack_3f4 = param_4;
    iStack_290 = param_4;
    if (lVar28 == lVar23) {
      if ((uStack_2a8 & 1) != 0) goto LAB_06280242;
    }
    else {
      bVar20 = (byte)uStack_2a8 >> 1;
      if ((uStack_2a8 & 1) == 0) {
        do {
          bVar5 = *(byte *)(lVar28 + 0x50);
          if ((bVar5 & 1) == 0) {
            uVar26 = (ulong)(bVar5 >> 1);
          }
          else {
            uVar26 = *(ulong *)(lVar28 + 0x58);
          }
          if (uVar26 == bVar20) {
            if ((bVar5 & 1) == 0) {
              lVar15 = lVar28 + 0x51;
            }
            else {
              lVar15 = *(long *)(lVar28 + 0x60);
            }
            iVar11 = func_0x0eee3000(lVar15,(long)&uStack_2a8 + 1,(ulong)bVar20);
            if ((iVar11 == 0) && (*(int *)(lVar28 + 0x30) == iStack_3f4)) break;
          }
          lVar28 = lVar28 + 0x68;
        } while (lVar28 != lVar23);
      }
      else {
        uVar26 = CONCAT44(uStack_29c,uStack_2a0);
        do {
          bVar20 = *(byte *)(lVar28 + 0x50);
          if ((bVar20 & 1) == 0) {
            uVar25 = (ulong)(bVar20 >> 1);
          }
          else {
            uVar25 = *(ulong *)(lVar28 + 0x58);
          }
          if (uVar25 == uVar26) {
            if ((bVar20 & 1) == 0) {
              lVar15 = lVar28 + 0x51;
            }
            else {
              lVar15 = *(long *)(lVar28 + 0x60);
            }
            iVar11 = func_0x0eee3000(lVar15,uVar19,uVar26);
            if ((iVar11 == 0) && (*(int *)(lVar28 + 0x30) == iStack_3f4)) break;
          }
          lVar28 = lVar28 + 0x68;
        } while (lVar28 != lVar23);
LAB_06280242:
        func_0x0412a280(uStack_298,CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
      }
    }
    lVar23 = lStack_398;
    if (lVar28 == *(long *)(lStack_398 + 0x80)) {
      piVar13 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
      if (piVar13 == (int *)0x0) {
        func_0x0eec74c0(4,0);
      }
      *piVar13 = iVar10;
      pbVar22 = (byte *)((long)param_3 + 1);
      bVar30 = ((byte)*param_3 & 1) == 0;
      pbVar21 = *(byte **)(param_3 + 4);
      if (bVar30) {
        pbVar21 = pbVar22;
      }
      puVar18 = (undefined8 *)(ulong)(byte)((byte)*param_3 >> 1);
      if (!bVar30) {
        puVar18 = *(undefined8 **)(param_3 + 2);
      }
      puVar17 = puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        do {
          if (puVar17 == (undefined8 *)0x0) goto LAB_062803e1;
          puVar1 = (undefined8 *)((long)puVar17 + -1);
          pbVar3 = pbVar21 + -1 + (long)puVar17;
          puVar17 = puVar1;
        } while (*pbVar3 != 0x3a);
        if (puVar1 == (undefined8 *)0xffffffffffffffff) goto LAB_062803e1;
        if (puVar1 <= puVar18) {
          puVar18 = puVar1;
        }
        if (puVar18 < (undefined8 *)0xfffffffffffffff8) {
          if (puVar18 < (undefined8 *)0x17) {
            auStack_418[0] = (char)puVar18 * '\x02';
            puVar17 = (undefined8 *)(auStack_418 + 1);
            if (puVar1 != (undefined8 *)0x0) goto LAB_06281291;
            goto LAB_062803ea;
          }
          uStack_3c0 = 0x1a;
          if (((ulong)puVar18 | 7) != 0x17) {
            uStack_3c0 = ((ulong)puVar18 | 7) + 1;
          }
          pbStack_3b8 = pbVar22;
          puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (puVar17 == (undefined8 *)0x0) {
            func_0x0eec74c0(uStack_3c0,0);
          }
          auStack_418 = (undefined1  [8])(uStack_3c0 | 1);
          puStack_410 = puVar18;
          puStack_408 = puVar17;
          pbVar22 = pbStack_3b8;
LAB_06281291:
          pbStack_3b8 = pbVar22;
          func_0x0eee2ee0(puVar17,pbVar21,puVar18);
          pbVar22 = pbStack_3b8;
          goto LAB_062803ec;
        }
LAB_0628139a:
        func_0x04882e30();
LAB_0628139f:
        uVar19 = func_0x04882ef0(&UNK_01306d2f);
        func_0x041084d6(&DAT_0f7b8fb8);
        lVar28 = lStack_278;
        if ((bStack_3b0 & 1) != 0) {
          func_0x0412a280(puStack_3a0,CONCAT71(uStack_3af,bStack_3b0) & 0xfffffffffffffffe);
          lVar28 = lStack_278;
        }
        do {
          if (lVar28 != 0) {
            func_0x0412c2d0(lVar28);
          }
          uVar19 = func_0x0eee2d70(uVar19);
          func_0x06099e30(&uStack_258);
        } while( true );
      }
LAB_062803e1:
      auStack_418 = (undefined1  [8])((ulong)(uint7)auStack_418._1_7_ << 8);
LAB_062803ea:
      puVar17 = (undefined8 *)(auStack_418 + 1);
      puVar18 = (undefined8 *)0x0;
LAB_062803ec:
      *(undefined1 *)((long)puVar17 + (long)puVar18) = 0;
      bVar30 = ((byte)*param_3 & 1) != 0;
      if (bVar30) {
        pbVar22 = *(byte **)(param_3 + 4);
      }
      uVar26 = (ulong)(byte)((byte)*param_3 >> 1);
      if (bVar30) {
        uVar26 = *(ulong *)(param_3 + 2);
      }
      if (uVar26 == 0) {
        uStack_3f0 = (undefined1 *)((ulong)uStack_3f0._1_7_ << 8);
        lVar28 = (long)&uStack_3f0 + 1;
        uVar26 = 0;
      }
      else {
        uVar25 = 0;
        pbVar21 = pbVar22;
        do {
          uVar14 = uVar25;
          if (uVar26 == uVar14) goto LAB_0628044b;
          pbVar3 = pbVar21 + -1;
          uVar25 = uVar14 + 1;
          pbVar4 = pbVar21 + (uVar26 - 1);
          pbVar21 = pbVar3;
        } while (*pbVar4 != 0x3a);
        if (uVar26 + 1 != uVar25) {
          if (uVar26 <= uVar26 - uVar25) goto LAB_0628139f;
          pbVar22 = pbVar3 + uVar26 + 1;
          uVar26 = uVar14;
        }
LAB_0628044b:
        if (0xfffffffffffffff7 < uVar26) {
          func_0x04882e30();
LAB_06281390:
          func_0x04aa1da0();
          goto LAB_06281395;
        }
        if (uVar26 < 0x17) {
          uStack_3f0 = (undefined1 *)CONCAT71(uStack_3f0._1_7_,(char)uVar26 * '\x02');
          lVar28 = (long)&uStack_3f0 + 1;
          if (uVar26 == 0) {
            uVar26 = 0;
            goto LAB_06280691;
          }
        }
        else {
          uVar25 = 0x1a;
          if ((uVar26 | 7) != 0x17) {
            uVar25 = (uVar26 | 7) + 1;
          }
          lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
          if (lVar28 == 0) {
            func_0x0eec74c0(uVar25,0);
          }
          uStack_3f0 = (undefined1 *)(uVar25 | 1);
          uStack_3e8 = uVar26;
          lStack_3e0 = lVar28;
        }
        func_0x0eee2ee0(lVar28,pbVar22,uVar26);
      }
LAB_06280691:
      *(undefined1 *)(lVar28 + uVar26) = 0;
      piVar27 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
      if (piVar27 == (int *)0x0) {
        func_0x0eec74c0(4,0);
      }
      iVar10 = iStack_3f4;
      piStack_190 = piVar27 + 1;
      *piVar27 = *piVar13;
      piStack_198 = piVar27;
      piStack_188 = piStack_190;
      func_0x06288180(&uStack_360,auStack_418,&uStack_3f0,iStack_3f4,&piStack_198);
      piStack_190 = piVar27;
      func_0x0412a280(piVar27,4);
      uStack_32c = (int)lStack_390 == 2;
      uVar26 = *(ulong *)(lVar23 + 0x80);
      if (uVar26 < *(ulong *)(lVar23 + 0x88)) {
        func_0x062a8040(uVar26,&uStack_360);
        lVar28 = uVar26 + 0x68;
        *(long *)(lVar23 + 0x80) = lVar28;
      }
      else {
        lVar28 = func_0x062a8a60(lVar23 + 0x78,&uStack_360);
      }
      *(long *)(lVar23 + 0x80) = lVar28;
      cVar9 = func_0x0627b020(lVar23,iVar10);
      if (cVar9 == '\0') {
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        uVar19 = _UNK_01273718;
        puStack_270 = (undefined8 *)0x21;
        uStack_268 = 0x1d;
        *(ulong *)((long)puVar18 + 0xd) = CONCAT53(_UNK_01273713,_DAT_01273710);
        *(undefined8 *)((long)puVar18 + 0x15) = uVar19;
        uVar19 = CONCAT35(_DAT_01273710,_UNK_0127370b);
        *puVar18 = _DAT_01273703;
        puVar18[1] = uVar19;
        *(undefined1 *)((long)puVar18 + 0x1d) = 0;
        uVar19 = *(undefined8 *)(lVar23 + 0x18);
        uStack_248 = 0;
        uStack_240 = 0;
        uStack_258 = 0;
        uStack_250 = (long *)0x0;
        uStack_238 = 0;
        puStack_260 = puVar18;
        if ((DAT_0f569528 & 1) == 0) {
          uStack_240 = _DAT_0f569538;
          uStack_250 = (long *)CONCAT71(uRam000000000f569529,DAT_0f569528);
          uStack_248 = _DAT_0f569530;
        }
        else {
          func_0x04885070(&uStack_250,_DAT_0f569538,_DAT_0f569530);
        }
        uStack_258 = _DAT_0f569520;
        puStack_3d8 = (undefined8 *)0x0;
        puStack_3d0 = (undefined8 *)0x0;
        puStack_3c8 = (undefined8 *)0x0;
        uStack_168 = 0;
        ppuStack_170 = &puStack_3d8;
        puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar17 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        puStack_3c8 = puVar17 + 5;
        ppuStack_378 = &puStack_1a0;
        ppuStack_370 = &puStack_2f8;
        uStack_368 = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[4] = 0;
        puStack_3d8 = puVar17;
        uStack_380 = &puStack_3d8;
        puStack_2f8 = puVar17;
        puStack_1a0 = puVar17;
        if (puVar17 != &uStack_258) {
          if (((ulong)uStack_250 & 1) == 0) {
            puVar17[3] = uStack_240;
            *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_250;
            *(undefined4 *)((long)puVar17 + 0xc) = uStack_250._4_4_;
            *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_248;
            *(undefined4 *)((long)puVar17 + 0x14) = uStack_248._4_4_;
          }
          else {
            puStack_3d0 = puVar17;
            func_0x04885070(puVar17 + 1,uStack_240,uStack_248);
          }
        }
        *puVar17 = uStack_258;
        puStack_3d0 = puStack_2f8 + 5;
        func_0x0412e5e0(auStack_158,puVar18,0x1d);
        uStack_d0 = 0;
        func_0x060aeeb0(uVar19,0,2,&puStack_3d8,auStack_160,1);
        if ((ulong)uStack_d0 != 0xffffffff) {
          (**(code **)(&UNK_0f023e00 + (ulong)uStack_d0 * 8))(&uStack_380,auStack_158);
        }
        puVar1 = puStack_3d8;
        uStack_d0 = 0xffffffff;
        puVar17 = puStack_3d0;
        if (puStack_3d8 != (undefined8 *)0x0) {
          for (; puVar1 != puVar17; puVar17 = puVar17 + -5) {
            if ((*(byte *)(puVar17 + -4) & 1) != 0) {
              func_0x0412a280(puVar17[-2],puVar17[-4] & 0xfffffffffffffffe);
            }
          }
          puStack_3d0 = puVar1;
          func_0x0412a280(puStack_3d8,(long)puStack_3c8 - (long)puStack_3d8);
        }
        if (((ulong)uStack_250 & 1) != 0) {
          func_0x0412a280(uStack_240,(ulong)uStack_250 & 0xfffffffffffffffe);
        }
        ppuVar16 = uStack_380;
        uStack_380._7_1_ = SUB81(ppuVar16,7);
        uStack_380._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
        func_0x0d858ce0(&uStack_258,&uStack_380,&puStack_270);
        puVar24 = puStack_388;
        *puStack_388 = 1;
        func_0x05e91e00(puStack_388 + 8,&uStack_258);
        func_0x048fb670(&uStack_258);
        func_0x0412a280(puVar18,0x20);
        if ((bStack_310 & 1) != 0) {
          func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
        }
        if (lStack_328 != 0) {
          lStack_320 = lStack_328;
          func_0x0412a280(lStack_328,lStack_318 - lStack_328);
        }
        if ((bStack_348 & 1) != 0) {
          func_0x0412a280(uStack_338,CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_360 & 1) != 0) {
          func_0x0412a280(ppuStack_350,(ulong)uStack_360 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_3f0 & 1) != 0) {
          func_0x0412a280(lStack_3e0,(ulong)uStack_3f0 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_418 & 1) != 0) {
          func_0x0412a280(puStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
        }
        func_0x0412a280(piVar13,4);
        lVar28 = lStack_2c8;
joined_r0x06280f11:
        if (cStack_2b0 == '\0') {
          lStack_2c8 = lVar28;
          if (lVar28 != 0) {
            while (lVar28 != lStack_2c0) {
              func_0x048b3e80(lStack_2c0 + -0x40);
              lStack_2c0 = lStack_2c0 + -0x40;
            }
            lStack_2c0 = lVar28;
            func_0x0412a280(lStack_2c8,lStack_2b8 - lStack_2c8);
          }
          lVar23 = lStack_2e0;
          lVar28 = lStack_2d8;
          if (lStack_2e0 != 0) {
            for (; lVar23 != lVar28; lVar28 = lVar28 + -0x50) {
              if ((*(char *)(lVar28 + -8) == '\x01') && ((*(byte *)(lVar28 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar28 + -0x20),
                                *(ulong *)(lVar28 + -0x30) & 0xfffffffffffffffe);
              }
            }
            lStack_2d8 = lVar23;
            func_0x0412a280(lStack_2e0,lStack_2d0 - lStack_2e0);
          }
        }
        if ((bStack_3b0 & 1) != 0) {
          func_0x0412a280(puStack_3a0,CONCAT71(uStack_3af,bStack_3b0) & 0xfffffffffffffffe);
        }
        goto LAB_06281214;
      }
      if ((bStack_310 & 1) != 0) {
        func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
      }
      if (lStack_328 != 0) {
        lStack_320 = lStack_328;
        func_0x0412a280(lStack_328,lStack_318 - lStack_328);
      }
      if ((bStack_348 & 1) != 0) {
        func_0x0412a280(uStack_338,CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_360 & 1) != 0) {
        func_0x0412a280(ppuStack_350,(ulong)uStack_360 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_3f0 & 1) != 0) {
        func_0x0412a280(lStack_3e0,(ulong)uStack_3f0 & 0xfffffffffffffffe);
      }
      if (((ulong)auStack_418 & 1) != 0) {
        func_0x0412a280(puStack_408,(ulong)auStack_418 & 0xfffffffffffffffe);
      }
      func_0x0412a280(piVar13,4);
    }
    else {
      piVar13 = *(int **)(lVar28 + 0x38);
      piVar27 = *(int **)(lVar28 + 0x40);
      piVar12 = piVar13;
      if (piVar13 == piVar27) {
LAB_06280293:
        if (piVar12 != piVar27) {
          if (*(int **)(lVar28 + 0x48) <= piVar27) {
            lVar23 = (long)piVar27 - (long)piVar13;
            uVar26 = (lVar23 >> 2) + 1;
            if (uVar26 >> 0x3e != 0) goto LAB_06281390;
            pbStack_3b8 = (byte *)((long)*(int **)(lVar28 + 0x48) - (long)piVar13);
            uVar25 = (long)pbStack_3b8 >> 1;
            if ((ulong)((long)pbStack_3b8 >> 1) <= uVar26) {
              uVar25 = uVar26;
            }
            if ((byte *)0x7ffffffffffffffb < pbStack_3b8) {
              uVar25 = 0x3fffffffffffffff;
            }
            if (uVar25 < 0x4000000000000000) {
              uStack_3c0 = uVar25 * 4;
              lStack_390 = lVar23 >> 2;
              lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar15 == 0) {
                func_0x0eec74c0(uStack_3c0,0);
              }
              *(int *)(lVar15 + lVar23) = iVar10;
              piVar27 = (int *)(lVar15 + lVar23 + 4);
              lVar29 = lVar15 + lVar23 + lStack_390 * -4;
              func_0x0eee2f00(lVar29,piVar13,lVar23);
              *(long *)(lVar28 + 0x38) = lVar29;
              *(int **)(lVar28 + 0x40) = piVar27;
              *(ulong *)(lVar28 + 0x48) = lVar15 + uVar25 * 4;
              if (piVar13 != (int *)0x0) {
                func_0x0412a280(piVar13,pbStack_3b8);
              }
              goto LAB_0628056c;
            }
LAB_06281395:
            FUN_04882eb0();
            goto LAB_0628139a;
          }
          *piVar27 = iVar10;
          piVar27 = piVar27 + 1;
LAB_0628056c:
          lVar23 = lStack_398;
          *(int **)(lVar28 + 0x40) = piVar27;
          cVar9 = func_0x0627b020(lStack_398,iStack_3f4);
          if (cVar9 != '\0') goto LAB_06280813;
          ppuVar16 = (undefined8 **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (ppuVar16 == (undefined8 **)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          uVar19 = _UNK_01273718;
          uStack_380 = (undefined8 **)0x21;
          ppuStack_378 = (undefined8 **)0x1d;
          *(ulong *)((long)ppuVar16 + 0xd) = CONCAT53(_UNK_01273713,_DAT_01273710);
          *(undefined8 *)((long)ppuVar16 + 0x15) = uVar19;
          puVar18 = (undefined8 *)CONCAT35(_DAT_01273710,_UNK_0127370b);
          *ppuVar16 = _DAT_01273703;
          ppuVar16[1] = puVar18;
          *(undefined1 *)((long)ppuVar16 + 0x1d) = 0;
          uVar19 = *(undefined8 *)(lVar23 + 0x18);
          uStack_248 = 0;
          uStack_240 = 0;
          uStack_258 = 0;
          uStack_250 = (long *)0x0;
          uStack_238 = 0;
          ppuStack_370 = ppuVar16;
          if ((DAT_0f569528 & 1) == 0) {
            uStack_240 = _DAT_0f569538;
            uStack_250 = (long *)CONCAT71(uRam000000000f569529,DAT_0f569528);
            uStack_248 = _DAT_0f569530;
          }
          else {
            func_0x04885070(&uStack_250,_DAT_0f569538,_DAT_0f569530);
          }
          uStack_258 = _DAT_0f569520;
          auStack_418 = (undefined1  [8])0x0;
          puStack_410 = (undefined8 *)0x0;
          puStack_408 = (undefined8 *)0x0;
          uStack_3e8 = uStack_3e8 & 0xffffffffffffff00;
          uStack_3f0 = auStack_418;
          puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar18 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          puStack_408 = puVar18 + 5;
          ppuStack_358 = &puStack_3d8;
          ppuStack_350 = &puStack_270;
          bStack_348 = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[4] = 0;
          auStack_418 = (undefined1  [8])puVar18;
          puStack_3d8 = puVar18;
          uStack_360 = auStack_418;
          puStack_270 = puVar18;
          if (puVar18 != &uStack_258) {
            if (((ulong)uStack_250 & 1) == 0) {
              puVar18[3] = uStack_240;
              *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_250;
              *(undefined4 *)((long)puVar18 + 0xc) = uStack_250._4_4_;
              *(undefined4 *)(puVar18 + 2) = (undefined4)uStack_248;
              *(undefined4 *)((long)puVar18 + 0x14) = uStack_248._4_4_;
              uStack_360 = auStack_418;
            }
            else {
              puStack_410 = puVar18;
              uStack_360 = auStack_418;
              func_0x04885070(puVar18 + 1,uStack_240,uStack_248);
            }
          }
          *puVar18 = uStack_258;
          puStack_410 = puStack_270 + 5;
          func_0x0412e5e0(auStack_c0,ppuVar16,0x1d);
          uStack_38 = 0;
          func_0x060aeeb0(uVar19,0,2,auStack_418,auStack_c8,1);
          puVar24 = puStack_388;
          if ((ulong)uStack_38 != 0xffffffff) {
            (**(code **)(&UNK_0f023e00 + (ulong)uStack_38 * 8))(&uStack_360,auStack_c0);
          }
          auVar6 = auStack_418;
          uStack_38 = 0xffffffff;
          puVar18 = puStack_410;
          if (auStack_418 != (undefined1  [8])0x0) {
            for (; auVar6 != (undefined1  [8])puVar18; puVar18 = puVar18 + -5) {
              if ((*(byte *)(puVar18 + -4) & 1) != 0) {
                func_0x0412a280(puVar18[-2],puVar18[-4] & 0xfffffffffffffffe);
              }
            }
            puStack_410 = (undefined8 *)auVar6;
            func_0x0412a280(auStack_418,(long)puStack_408 - (long)auStack_418);
          }
          if (((ulong)uStack_250 & 1) != 0) {
            func_0x0412a280(uStack_240,(ulong)uStack_250 & 0xfffffffffffffffe);
          }
          puVar7 = uStack_360;
          uStack_360._7_1_ = SUB81(puVar7,7);
          uStack_360._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
          func_0x0d858ce0(&uStack_258,&uStack_360,&uStack_380);
          *puVar24 = 1;
          func_0x05e91e00(puVar24 + 8,&uStack_258);
          func_0x048fb670(&uStack_258);
          func_0x0412a280(ppuVar16,0x20);
          lVar28 = lStack_2c8;
          goto joined_r0x06280f11;
        }
      }
      else {
        do {
          if (*piVar12 == iVar10) goto LAB_06280293;
          piVar12 = piVar12 + 1;
        } while (piVar12 != piVar27);
      }
    }
LAB_06280813:
    lVar28 = lStack_2c8;
    if (cStack_2b0 == '\0') {
      if (lStack_2c8 != 0) {
        while (lVar28 != lStack_2c0) {
          func_0x048b3e80(lStack_2c0 + -0x40);
          lStack_2c0 = lStack_2c0 + -0x40;
        }
        lStack_2c0 = lVar28;
        func_0x0412a280(lStack_2c8,lStack_2b8 - lStack_2c8);
      }
      lVar23 = lStack_2e0;
      lVar28 = lStack_2d8;
      if (lStack_2e0 != 0) {
        for (; lVar23 != lVar28; lVar28 = lVar28 + -0x50) {
          if ((*(char *)(lVar28 + -8) == '\x01') && ((*(byte *)(lVar28 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar28 + -0x20),
                            *(ulong *)(lVar28 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_2d8 = lVar23;
        func_0x0412a280(lStack_2e0,lStack_2d0 - lStack_2e0);
      }
    }
    if ((bStack_3b0 & 1) != 0) {
      func_0x0412a280(puStack_3a0,CONCAT71(uStack_3af,bStack_3b0) & 0xfffffffffffffffe);
    }
  }
  uStack_258 = 0;
  uStack_250 = (long *)0x0;
  if ((lStack_278 != 0) &&
     (uStack_250 = (long *)func_0x0412c300(lStack_278), uStack_250 != (long *)0x0)) {
    uStack_258 = uStack_280;
  }
  puVar24 = puStack_388;
  func_0x062797d0(puStack_388,&uStack_258);
  plVar8 = uStack_250;
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_250 + 1;
    lVar28 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar8);
    }
  }
LAB_06281214:
  if (lStack_278 != 0) {
    func_0x0412c2d0();
  }
  return puVar24;
}



/* ---- referenced strings ----
 * 0x1273703  Failed to save group metadata
 * 0x1273710  e group metadata
 * 0x13f776f  Error
 */
