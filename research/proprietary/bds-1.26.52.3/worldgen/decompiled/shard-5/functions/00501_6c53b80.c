/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d53b80 (ELF vaddr 0x6c53b80)
 * Label: caller-of-callee
 * Body:  [[06d53b80, 06d53eb2] [06d53ec0, 06d53f07] [06d53f10, 06d54112] [06d54120, 06d54154] [06d54160, 06d5419d] [06d541a0, 06d541fd] [06d54200, 06d542bc] [06d542c0, 06d543ab] [06d543b0, 06d5441c] [06d54420, 06d54f36] [06d55078, 06d5508c] [06d5511e, 06d5514f]]
 * Ghidra: FUN_06d53b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d53b80(long *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [8];
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  long lVar16;
  undefined8 *****pppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 *****pppppuVar25;
  bool bVar26;
  undefined1 auStack_420 [8];
  ulong uStack_418;
  undefined8 ****ppppuStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  long lStack_3f8;
  long *plStack_3e8;
  undefined8 ****ppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  uint uStack_39c;
  byte bStack_398;
  undefined4 uStack_397;
  undefined4 uStack_393;
  undefined4 uStack_38f;
  undefined2 uStack_38b;
  undefined1 uStack_389;
  undefined1 uStack_388;
  undefined2 uStack_387;
  undefined5 uStack_385;
  long lStack_380;
  undefined4 uStack_374;
  long *plStack_370;
  undefined1 auStack_368 [4];
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined1 uStack_35c;
  undefined2 uStack_35b;
  undefined1 uStack_359;
  undefined8 uStack_358;
  undefined *puStack_350;
  uint auStack_348 [2];
  undefined1 uStack_340;
  undefined7 uStack_33f;
  uint uStack_338;
  long lStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  ulong uStack_320;
  uint uStack_318;
  byte bStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_300;
  ulong uStack_2f8;
  uint uStack_2f0;
  undefined1 auStack_2e8 [152];
  undefined8 *puStack_250;
  undefined1 auStack_248 [8];
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  long lStack_220;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  uint uStack_1d0;
  undefined1 auStack_1c8 [152];
  byte *apbStack_130 [4];
  undefined4 uStack_110;
  
  plStack_370 = param_1;
  lVar10 = (**(code **)(*param_1 + 0x70))();
  ppppuStack_3e0 = &ppppuStack_3d8;
  ppppuStack_3d8 = (undefined8 *****)0x0;
  uStack_3d0 = 0;
  plStack_3e8 = param_2;
  if ((*param_2 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*plStack_3e8 == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar11 = (**(code **)(*(long *)plStack_3e8[2] + 0xa00))();
  lStack_380 = lVar10;
  for (puVar19 = *(undefined8 **)(lVar11 + 0x10); puVar19 != (undefined8 *)0x0;
      puVar19 = (undefined8 *)*puVar19) {
    if (*(char *)((long)puVar19 + 0xaa) == '\0') {
      uStack_374 = *(undefined4 *)(puVar19 + 0x10);
      uVar13 = puVar19[5];
      uVar3 = puVar19[6];
      auStack_348[0] = (uint)uVar13 & 0xffff;
      uStack_318 = (uint)uVar3 & 0xffff;
      auStack_368 = SUB84((ulong)uVar13 >> 0x20,0);
      uStack_358._4_4_ = (undefined4)((ulong)uStack_358 >> 0x20);
      uStack_358 = (undefined8 ****)
                   (CONCAT44(uStack_358._4_4_,(int)((ulong)uVar13 >> 0x10)) & 0xffffffff0000ffff);
      uStack_338 = (uint)(ushort)((ulong)uVar3 >> 0x30);
      uStack_328 = (undefined4)((ulong)uVar3 >> 0x10);
      func_0x0470d9a0(auStack_248,&UNK_01287ba2,0x28,0x122112,auStack_368);
      pppppuVar15 = &ppppuStack_3d8;
      pppppuVar14 = pppppuVar15;
      puStack_250 = puVar19;
      if ((undefined8 *****)ppppuStack_3d8 != (undefined8 *****)0x0) {
        ppppuVar18 = (undefined8 ****)(ulong)(auStack_248[0] >> 1);
        uStack_39c = (uint)(auStack_248[0] & 1);
        ppppuVar12 = (undefined8 ****)(auStack_248 + 1);
        pppppuVar25 = (undefined8 *****)ppppuStack_3d8;
        if (((ulong)auStack_248 & 1) != 0) {
          ppppuVar12 = (undefined8 ****)pppuStack_238;
          ppppuVar18 = (undefined8 ****)pppuStack_240;
        }
        do {
          while( true ) {
            pppppuVar15 = pppppuVar25;
            bVar26 = (*(byte *)(pppppuVar15 + 4) & 1) != 0;
            ppppuVar24 = (undefined8 ****)((long)pppppuVar15 + 0x21);
            if (bVar26) {
              ppppuVar24 = pppppuVar15[6];
            }
            ppppuVar23 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar15 + 4) >> 1);
            if (bVar26) {
              ppppuVar23 = pppppuVar15[5];
            }
            ppppuVar20 = ppppuVar18;
            if (ppppuVar23 < ppppuVar18) {
              ppppuVar20 = ppppuVar23;
            }
            iVar7 = func_0x0eee2ff0(ppppuVar12,ppppuVar24,ppppuVar20);
            if (iVar7 != 0) break;
            if (ppppuVar23 <= ppppuVar18) goto LAB_06d53f15;
LAB_06d53ec0:
            pppppuVar25 = (undefined8 *****)*pppppuVar15;
            pppppuVar14 = pppppuVar15;
            if ((undefined8 *****)*pppppuVar15 == (undefined8 *****)0x0) goto LAB_06d53f44;
          }
          if (iVar7 < 0) goto LAB_06d53ec0;
LAB_06d53f15:
          iVar7 = func_0x0eee2ff0(ppppuVar24,ppppuVar12,ppppuVar20);
          if (iVar7 == 0) {
            if (ppppuVar18 <= ppppuVar23) goto LAB_06d53d87;
          }
          else if (-1 < iVar7) {
LAB_06d53d87:
            *(undefined4 *)(pppppuVar15 + 7) = uStack_374;
            puVar19 = puStack_250;
            lVar10 = lStack_380;
            if ((char)uStack_39c == '\0') goto LAB_06d53dc8;
            goto LAB_06d53da7;
          }
          pppppuVar25 = (undefined8 *****)pppppuVar15[1];
        } while ((undefined8 *****)pppppuVar15[1] != (undefined8 *****)0x0);
        pppppuVar14 = pppppuVar15 + 1;
      }
LAB_06d53f44:
      ppppuVar12 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (ppppuVar12 == (undefined8 ****)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      ppppuVar12[6] = pppuStack_238;
      ppppuVar12[4] = (undefined8 ***)auStack_248;
      ppppuVar12[5] = pppuStack_240;
      auStack_248 = (undefined1  [8])0x0;
      pppuStack_240 = (undefined8 ****)0x0;
      pppuStack_238 = (undefined8 ****)0x0;
      *(undefined4 *)(ppppuVar12 + 7) = 0;
      *ppppuVar12 = (undefined8 ***)0x0;
      ppppuVar12[1] = (undefined8 ***)0x0;
      ppppuVar12[2] = pppppuVar15;
      *pppppuVar14 = ppppuVar12;
      if ((undefined8 *****)*ppppuStack_3e0 != (undefined8 *****)0x0) {
        ppppuStack_3e0 = (undefined8 ****)*ppppuStack_3e0;
      }
      func_0x048bed00(ppppuStack_3d8,ppppuVar12);
      uStack_3d0 = uStack_3d0 + 1;
      *(undefined4 *)(ppppuVar12 + 7) = uStack_374;
      puVar19 = puStack_250;
      lVar10 = lStack_380;
      if (((ulong)auStack_248 & 1) != 0) {
LAB_06d53da7:
        lVar10 = lStack_380;
        func_0x0412a280(pppuStack_238,(ulong)auStack_248 & 0xfffffffffffffffe);
        puVar19 = puStack_250;
      }
    }
LAB_06d53dc8:
  }
  bStack_398 = 0x22;
  uStack_38b = (undefined2)_UNK_01240862;
  uStack_389 = (undefined1)((uint)_UNK_01240862 >> 0x10);
  uStack_388 = (undefined1)((uint)_UNK_01240862 >> 0x18);
  uStack_387 = 0x73;
  uStack_358 = (undefined8 ****)CONCAT53(uStack_385,CONCAT21(0x73,uStack_388));
  auStack_368._1_3_ = (undefined3)_DAT_01240856;
  auStack_368[0] = 0x22;
  uStack_364 = (undefined4)(CONCAT44(_UNK_0124085a,_DAT_01240856) >> 0x18);
  uStack_360._1_3_ = (undefined3)_UNK_0124085e;
  uStack_360 = CONCAT31(uStack_360._1_3_,(char)((uint)_UNK_0124085a >> 0x18));
  uStack_35c = (undefined1)((uint)_UNK_0124085e >> 0x18);
  uStack_35b = uStack_38b;
  uStack_359 = uStack_389;
  uStack_397 = _DAT_01240856;
  uStack_393 = _UNK_0124085a;
  uStack_38f = _UNK_0124085e;
  func_0x048630d0(&puStack_350,uStack_3d0 & 0xffffffff);
  uStack_340 = 0xb;
  auStack_248 = (undefined1  [8])(lVar10 + 0x188);
  pppuStack_240 = (undefined8 ***)CONCAT71(pppuStack_240._1_7_,1);
  func_0x0412d450();
  apbStack_130[0] = &bStack_398;
  lVar11 = func_0x06d807c0(lVar10 + 0x58,apbStack_130[0],apbStack_130);
  puVar1 = (uint *)(lVar11 + 0x28);
  if (puVar1 != (uint *)auStack_368) {
    if ((*(byte *)puVar1 & 1) == 0) {
      if (((uint)auStack_368 & 1) == 0) {
        *(undefined8 *****)(lVar11 + 0x38) = uStack_358;
        *puVar1 = (uint)auStack_368;
        *(undefined4 *)(lVar11 + 0x2c) = uStack_364;
        *(undefined4 *)(lVar11 + 0x30) = uStack_360;
        *(uint *)(lVar11 + 0x34) = CONCAT13(uStack_359,CONCAT21(uStack_35b,uStack_35c));
      }
      else {
        func_0x04885070(puVar1,uStack_358,
                        CONCAT17(uStack_359,CONCAT25(uStack_35b,CONCAT14(uStack_35c,uStack_360))));
      }
    }
    else {
      bVar26 = ((uint)auStack_368 & 1) != 0;
      ppppuVar12 = (undefined8 ****)(auStack_368 + 1);
      if (bVar26) {
        ppppuVar12 = uStack_358;
      }
      uVar21 = (ulong)(auStack_368[0] >> 1);
      if (bVar26) {
        uVar21 = CONCAT17(uStack_359,CONCAT25(uStack_35b,CONCAT14(uStack_35c,uStack_360)));
      }
      func_0x04885120(puVar1,ppppuVar12,uVar21);
    }
  }
  func_0x04863740(lVar11 + 0x40,&puStack_350);
  *(undefined1 *)(lVar11 + 0x50) = uStack_340;
  if ((char)pppuStack_240 == '\x01') {
    func_0x0412d520(auStack_248);
  }
  func_0x04863610(&puStack_350);
  if (((uint)auStack_368 & 1) == 0) {
    if ((bStack_398 & 1) != 0) goto LAB_06d540c4;
LAB_06d5408e:
    if (uStack_3d0 != _DAT_0f5a31f0) goto LAB_06d54309;
  }
  else {
    func_0x0412a280(uStack_358,CONCAT44(uStack_364,auStack_368) & 0xfffffffffffffffe);
    if ((bStack_398 & 1) == 0) goto LAB_06d5408e;
LAB_06d540c4:
    func_0x0412a280(CONCAT53(uStack_385,CONCAT21(uStack_387,uStack_388)),
                    CONCAT35((undefined3)uStack_393,CONCAT41(uStack_397,bStack_398)) &
                    0xfffffffffffffffe);
    if (uStack_3d0 != _DAT_0f5a31f0) {
LAB_06d54309:
      func_0x06cf3820(&DAT_0f5a31e0,_DAT_0f5a31e8);
      _DAT_0f5a31e0 = (undefined8 *****)ppppuStack_3e0;
      _DAT_0f5a31e8 = (undefined8 *****)ppppuStack_3d8;
      _DAT_0f5a31f0 = uStack_3d0;
      if (uStack_3d0 == 0) {
        _DAT_0f5a31e0 = (undefined8 *****)&DAT_0f5a31e8;
      }
      else {
        ppppuStack_3d8[2] = (undefined8 ***)&DAT_0f5a31e8;
        ppppuStack_3e0 = &ppppuStack_3d8;
        ppppuStack_3d8 = (undefined8 *****)0x0;
        uStack_3d0 = 0;
      }
      func_0x04886140(auStack_368);
      func_0x04886140(auStack_248);
      pppppuVar15 = _DAT_0f5a31e0;
      if (_DAT_0f5a31e0 != (undefined8 *****)&DAT_0f5a31e8) {
        do {
          bVar26 = (*(byte *)(pppppuVar15 + 4) & 1) != 0;
          ppppuVar12 = (undefined8 ****)((long)pppppuVar15 + 0x21);
          if (bVar26) {
            ppppuVar12 = pppppuVar15[6];
          }
          ppppuVar18 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar15 + 4) >> 1);
          if (bVar26) {
            ppppuVar18 = pppppuVar15[5];
          }
          uVar13 = func_0x04885260(&uStack_358,ppppuVar12,ppppuVar18);
          func_0x04885260(uVar13,&UNK_012d4174,1);
          uVar13 = func_0x0413b570(&pppuStack_238,*(undefined4 *)(pppppuVar15 + 7));
          func_0x04885260(uVar13,&UNK_012d4174,1);
          pppppuVar14 = (undefined8 *****)pppppuVar15[1];
          pppppuVar25 = pppppuVar15;
          if ((undefined8 *****)pppppuVar15[1] == (undefined8 *****)0x0) {
            do {
              pppppuVar15 = (undefined8 *****)pppppuVar25[2];
              bVar26 = pppppuVar25 != (undefined8 *****)*pppppuVar15;
              pppppuVar25 = pppppuVar15;
            } while (bVar26);
          }
          else {
            do {
              pppppuVar15 = pppppuVar14;
              pppppuVar14 = (undefined8 *****)*pppppuVar15;
            } while ((undefined8 *****)*pppppuVar15 != (undefined8 *****)0x0);
          }
        } while (pppppuVar15 != (undefined8 *****)&DAT_0f5a31e8);
      }
      uVar8 = (**(code **)(*plStack_370 + 0x60))();
      uVar21 = (ulong)uVar8;
      pppppuVar14 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pppppuVar14 == (undefined8 *****)0x0) goto LAB_06d54eb5;
      do {
        auStack_420 = (undefined1  [8])0x21;
        uStack_418 = 0x18;
        ppppuStack_410 = pppppuVar14;
        *(undefined4 *)pppppuVar14 = _DAT_01462f61;
        *(undefined4 *)((long)pppppuVar14 + 4) = _UNK_01462f65;
        *(undefined4 *)(pppppuVar14 + 1) = _UNK_01462f69;
        *(undefined4 *)((long)pppppuVar14 + 0xc) = _UNK_01462f6d;
        pppppuVar14[2] = (undefined8 ****)0x6574616470556e6f;
        *(undefined1 *)(pppppuVar14 + 3) = 0;
        uVar9 = (**(code **)(*plStack_370 + 0x60))();
        uStack_408 = 0;
        uStack_400 = 0;
        lStack_3f8 = 0;
        uStack_3c8 = 0;
        uStack_3c0 = 0;
        lStack_3b8 = 0;
        uStack_3b0 = 0;
        uStack_3a8 = 0x3f800000;
        func_0x06d11ff0(lVar10,&uStack_3c8,uVar9,&uStack_408);
        func_0x06d0cfa0(apbStack_130,uVar21 & 0xffffffff,auStack_420,&uStack_3c8,0);
        func_0x06d72260(&uStack_3c8);
        func_0x0412a280(pppppuVar14,0x20);
        uStack_110 = 1;
        if ((uStack_2f0 & 0x10) == 0) {
          if ((uStack_2f0 & 8) == 0) {
            auStack_420 = (undefined1  [8])((ulong)(uint7)auStack_420._1_7_ << 8);
LAB_06d54594:
            pppppuVar15 = (undefined8 *****)(auStack_420 + 1);
            auStack_420[1] = 0;
            if ((uStack_2f0 & 0x10) == 0) goto LAB_06d54674;
LAB_06d545aa:
            if (uStack_2f8 < uStack_320) {
              uStack_2f8 = uStack_320;
            }
            lVar11 = CONCAT44(uStack_324,uStack_328);
            uVar21 = uStack_2f8 - lVar11;
            if (0xfffffffffffffff7 < uVar21) goto LAB_06d54e66;
LAB_06d545e2:
            if (uVar21 < 0x17) {
              uStack_408 = CONCAT71(uStack_408._1_7_,(char)uVar21 * '\x02');
              lVar16 = (long)&uStack_408 + 1;
              if (uVar21 == 0) goto LAB_06d54686;
            }
            else {
              uVar22 = 0x1a;
              if ((uVar21 | 7) != 0x17) {
                uVar22 = (uVar21 | 7) + 1;
              }
              lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
              if (lVar16 == 0) {
                func_0x0eec74c0(uVar22,0);
              }
              uStack_408 = uVar22 | 1;
              uStack_400 = uVar21;
              lStack_3f8 = lVar16;
            }
            func_0x0eee2ee0(lVar16,lVar11,uVar21);
            *(undefined1 *)(lVar16 + uVar21) = 0;
            uVar21 = uStack_400;
            bVar2 = (byte)uStack_408;
            if ((uStack_408 & 1) == 0) goto LAB_06d54696;
            goto LAB_06d54707;
          }
          lVar11 = CONCAT71(uStack_33f,uStack_340);
          uVar21 = lStack_330 - lVar11;
          if (uVar21 < 0xfffffffffffffff8) goto LAB_06d54575;
LAB_06d54e41:
          func_0x04882e30();
LAB_06d54e46:
          lVar11 = CONCAT71(uStack_33f,uStack_340);
          uVar21 = lStack_330 - lVar11;
          if (uVar21 < 0xfffffffffffffff8) goto LAB_06d545e2;
LAB_06d54e66:
          func_0x04882e30();
LAB_06d54e6b:
          uVar21 = lStack_210 - lStack_220;
          lVar11 = lStack_220;
          if (uVar21 < 0xfffffffffffffff8) {
LAB_06d54888:
            if (uVar21 < 0x17) {
              auStack_420[0] = (char)uVar21 * '\x02';
              if (uVar21 == 0) goto LAB_06d548a2;
            }
            else {
              uVar22 = 0x1a;
              if ((uVar21 | 7) != 0x17) {
                uVar22 = (uVar21 | 7) + 1;
              }
              pppppuVar15 = (undefined8 *****)
                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
              if (pppppuVar15 == (undefined8 *****)0x0) {
                func_0x0eec74c0(uVar22,0);
              }
              pppppuVar14 = (undefined8 *****)(uVar22 | 1);
              auStack_420 = (undefined1  [8])pppppuVar14;
              uStack_418 = uVar21;
              ppppuStack_410 = pppppuVar15;
            }
            func_0x0eee2ee0(pppppuVar15,lVar11,uVar21);
            *(undefined1 *)((long)pppppuVar15 + uVar21) = 0;
            if ((uStack_1d0 & 0x10) != 0) goto LAB_06d548b8;
            goto LAB_06d54982;
          }
LAB_06d54e8b:
          func_0x04882e30();
LAB_06d54e90:
          uVar21 = lStack_210 - lStack_220;
          lVar11 = lStack_220;
        }
        else {
          if (uStack_2f8 < uStack_320) {
            uStack_2f8 = uStack_320;
          }
          lVar11 = CONCAT44(uStack_324,uStack_328);
          uVar21 = uStack_2f8 - lVar11;
          if (0xfffffffffffffff7 < uVar21) goto LAB_06d54e41;
LAB_06d54575:
          if (uVar21 < 0x17) {
            auStack_420[0] = (char)uVar21 * '\x02';
            pppppuVar15 = (undefined8 *****)(auStack_420 + 1);
            if (uVar21 == 0) goto LAB_06d54594;
          }
          else {
            uVar22 = 0x1a;
            if ((uVar21 | 7) != 0x17) {
              uVar22 = (uVar21 | 7) + 1;
            }
            pppppuVar15 = (undefined8 *****)
                          (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
            if (pppppuVar15 == (undefined8 *****)0x0) {
              func_0x0eec74c0(uVar22,0);
            }
            pppppuVar14 = (undefined8 *****)(uVar22 | 1);
            auStack_420 = (undefined1  [8])pppppuVar14;
            uStack_418 = uVar21;
            ppppuStack_410 = pppppuVar15;
          }
          func_0x0eee2ee0(pppppuVar15,lVar11,uVar21);
          *(undefined1 *)((long)pppppuVar15 + uVar21) = 0;
          if ((uStack_2f0 & 0x10) != 0) goto LAB_06d545aa;
LAB_06d54674:
          if ((uStack_2f0 & 8) != 0) goto LAB_06d54e46;
          uStack_408 = uStack_408 & 0xffffffffffffff00;
LAB_06d54686:
          bVar2 = (byte)uStack_408;
          uStack_408._0_2_ = (ushort)(byte)uStack_408;
LAB_06d54696:
          uVar21 = (ulong)(bVar2 >> 1);
LAB_06d54707:
          pppppuVar14 = (undefined8 *****)ppppuStack_410;
          uVar22 = uStack_418;
          if (((ulong)auStack_420 & 1) == 0) {
            pppppuVar14 = (undefined8 *****)(auStack_420 + 1);
            uVar22 = (ulong)auStack_420 >> 1 & 0x7f;
          }
          pppppuVar15 = (undefined8 *****)(auStack_420 + 1);
          if (uVar21 - 1 <= uVar22) {
            uVar22 = uVar21 - 1;
          }
          if (0xfffffffffffffff7 < uVar22) {
            func_0x04882e30();
            goto LAB_06d54f25;
          }
          if (uVar22 < 0x17) {
            uStack_3c8 = CONCAT71(uStack_3c8._1_7_,(char)uVar22 * '\x02');
            lVar11 = (long)&uStack_3c8 + 1;
            if (uVar22 != 0) goto LAB_06d547a0;
          }
          else {
            uVar21 = 0x1a;
            if ((uVar22 | 7) != 0x17) {
              uVar21 = (uVar22 | 7) + 1;
            }
            lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
            if (lVar11 == 0) {
              func_0x0eec74c0(uVar21,0);
            }
            uStack_3c8 = uVar21 | 1;
            uStack_3c0 = uVar22;
            lStack_3b8 = lVar11;
LAB_06d547a0:
            func_0x0eee2ee0(lVar11,pppppuVar14,uVar22);
          }
          *(undefined1 *)(lVar11 + uVar22) = 0;
          func_0x06d55150(apbStack_130,&UNK_01498e43,&uStack_3c8);
          if ((uStack_3c8 & 1) != 0) {
            func_0x0412a280(lStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
            if ((uStack_408 & 1) == 0) goto LAB_06d547da;
LAB_06d54818:
            func_0x0412a280(lStack_3f8,uStack_408 & 0xfffffffffffffffe);
            if (((ulong)auStack_420 & 1) == 0) goto LAB_06d547e1;
LAB_06d54832:
            func_0x0412a280(ppppuStack_410,(ulong)auStack_420 & 0xfffffffffffffffe);
            if ((uStack_1d0 & 0x10) == 0) goto LAB_06d547ec;
LAB_06d54850:
            if (uStack_1d8 < uStack_200) {
              uStack_1d8 = uStack_200;
            }
            uVar21 = uStack_1d8 - lStack_208;
            lVar11 = lStack_208;
            if (0xfffffffffffffff7 < uVar21) goto LAB_06d54e8b;
            goto LAB_06d54888;
          }
          if ((uStack_408 & 1) != 0) goto LAB_06d54818;
LAB_06d547da:
          if (((ulong)auStack_420 & 1) != 0) goto LAB_06d54832;
LAB_06d547e1:
          if ((uStack_1d0 & 0x10) != 0) goto LAB_06d54850;
LAB_06d547ec:
          if ((uStack_1d0 & 8) != 0) goto LAB_06d54e6b;
          auStack_420 = (undefined1  [8])((ulong)auStack_420 & 0xffffffffffffff00);
LAB_06d548a2:
          *(undefined1 *)pppppuVar15 = 0;
          if ((uStack_1d0 & 0x10) == 0) {
LAB_06d54982:
            if ((uStack_1d0 & 8) != 0) goto LAB_06d54e90;
            uStack_408 = uStack_408 & 0xffffffffffffff00;
            goto LAB_06d54994;
          }
LAB_06d548b8:
          if (uStack_1d8 < uStack_200) {
            uStack_1d8 = uStack_200;
          }
          uVar21 = uStack_1d8 - lStack_208;
          lVar11 = lStack_208;
        }
        if (uVar21 < 0xfffffffffffffff8) goto LAB_06d548f0;
        func_0x04882e30();
LAB_06d54eb5:
        func_0x0eec74c0(0x20,0);
      } while( true );
    }
  }
  if ((undefined8 *****)ppppuStack_3e0 != &ppppuStack_3d8) {
    pppppuVar14 = _DAT_0f5a31e0;
    pppppuVar15 = (undefined8 *****)ppppuStack_3e0;
    do {
      if (((ulong)pppppuVar15[4] & 1) == 0) {
        uStack_358 = pppppuVar15[6];
        auStack_368 = *(undefined1 (*) [4])(pppppuVar15 + 4);
        uStack_364 = *(undefined4 *)((long)pppppuVar15 + 0x24);
        uStack_360 = *(undefined4 *)(pppppuVar15 + 5);
        uVar9 = *(undefined4 *)((long)pppppuVar15 + 0x2c);
        uStack_35c = (undefined1)uVar9;
        uStack_35b = (undefined2)((uint)uVar9 >> 8);
        uStack_359 = (undefined1)((uint)uVar9 >> 0x18);
      }
      else {
        func_0x0412e5e0(auStack_368,pppppuVar15[6],pppppuVar15[5]);
      }
      puStack_350 = (undefined *)CONCAT44(puStack_350._4_4_,*(undefined4 *)(pppppuVar15 + 7));
      if (((ulong)pppppuVar14[4] & 1) == 0) {
        pppuStack_238 = pppppuVar14[6];
        auStack_248 = (undefined1  [8])pppppuVar14[4];
        pppuStack_240 = pppppuVar14[5];
      }
      else {
        func_0x0412e5e0(auStack_248,pppppuVar14[6],pppppuVar14[5]);
      }
      auVar5 = auStack_248;
      puStack_230 = (undefined *)CONCAT44(puStack_230._4_4_,*(undefined4 *)(pppppuVar14 + 7));
      bVar2 = auStack_368[0];
      if (((uint)auStack_368 & 1) == 0) {
        ppppuVar12 = (undefined8 ****)(ulong)(auStack_368[0] >> 1);
        if (((ulong)auStack_248 & 1) == 0) goto LAB_06d541e7;
LAB_06d54211:
        if (ppppuVar12 != (undefined8 ****)pppuStack_240) goto LAB_06d541f1;
LAB_06d5421e:
        ppppuVar12 = (undefined8 ****)(auStack_368 + 1);
        if (((uint)auStack_368 & 1) != 0) {
          ppppuVar12 = uStack_358;
        }
        ppppuVar18 = (undefined8 ****)(auStack_248 + 1);
        if (((ulong)auStack_248 & 1) != 0) {
          ppppuVar18 = (undefined8 ****)pppuStack_238;
        }
        iVar7 = func_0x0eee3000(ppppuVar12,ppppuVar18);
        bVar26 = iVar7 == 0;
      }
      else {
        ppppuVar12 = (undefined8 ****)
                     CONCAT17(uStack_359,CONCAT25(uStack_35b,CONCAT14(uStack_35c,uStack_360)));
        if (((ulong)auStack_248 & 1) != 0) goto LAB_06d54211;
LAB_06d541e7:
        if (ppppuVar12 == (undefined8 ****)(((ulong)auStack_248 & 0xff) >> 1)) goto LAB_06d5421e;
LAB_06d541f1:
        bVar26 = false;
      }
      if (((ulong)auVar5 & 1) != 0) {
        func_0x0412a280(pppuStack_238,(ulong)auStack_248 & 0xfffffffffffffffe);
        bVar2 = auStack_368[0];
      }
      if ((bVar2 & 1) != 0) {
        func_0x0412a280(uStack_358,CONCAT44(uStack_364,auStack_368) & 0xfffffffffffffffe);
      }
      lVar10 = lStack_380;
      if (!bVar26) goto LAB_06d54309;
      pppppuVar25 = (undefined8 *****)pppppuVar15[1];
      pppppuVar17 = pppppuVar15;
      if ((undefined8 *****)pppppuVar15[1] == (undefined8 *****)0x0) {
        do {
          pppppuVar15 = (undefined8 *****)pppppuVar17[2];
          bVar26 = pppppuVar17 != (undefined8 *****)*pppppuVar15;
          pppppuVar17 = pppppuVar15;
        } while (bVar26);
      }
      else {
        do {
          pppppuVar15 = pppppuVar25;
          pppppuVar25 = (undefined8 *****)*pppppuVar15;
        } while ((undefined8 *****)*pppppuVar15 != (undefined8 *****)0x0);
      }
      pppppuVar25 = (undefined8 *****)pppppuVar14[1];
      pppppuVar17 = pppppuVar14;
      if ((undefined8 *****)pppppuVar14[1] == (undefined8 *****)0x0) {
        do {
          pppppuVar14 = (undefined8 *****)pppppuVar17[2];
          bVar26 = pppppuVar17 != (undefined8 *****)*pppppuVar14;
          pppppuVar17 = pppppuVar14;
        } while (bVar26);
      }
      else {
        do {
          pppppuVar14 = pppppuVar25;
          pppppuVar25 = (undefined8 *****)*pppppuVar14;
        } while ((undefined8 *****)*pppppuVar14 != (undefined8 *****)0x0);
      }
    } while (pppppuVar15 != &ppppuStack_3d8);
  }
  goto LAB_06d54e00;
LAB_06d548f0:
  if (uVar21 < 0x17) {
    uStack_408._1_7_ = (undefined7)(uStack_408 >> 8);
    uStack_408 = CONCAT71(uStack_408._1_7_,(char)uVar21 * '\x02');
    lVar16 = (long)&uStack_408 + 1;
    if (uVar21 != 0) goto LAB_06d549f4;
LAB_06d54994:
    bVar2 = (byte)uStack_408;
    uStack_408._0_2_ = (ushort)(byte)uStack_408;
LAB_06d549a4:
    uVar21 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar22 = 0x1a;
    if ((uVar21 | 7) != 0x17) {
      uVar22 = (uVar21 | 7) + 1;
    }
    lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
    if (lVar16 == 0) {
      func_0x0eec74c0(uVar22,0);
    }
    uStack_408 = uVar22 | 1;
    uStack_400 = uVar21;
    lStack_3f8 = lVar16;
LAB_06d549f4:
    func_0x0eee2ee0(lVar16,lVar11,uVar21);
    *(undefined1 *)(lVar16 + uVar21) = 0;
    uVar21 = uStack_400;
    bVar2 = (byte)uStack_408;
    if ((uStack_408 & 1) == 0) goto LAB_06d549a4;
  }
  pppppuVar15 = (undefined8 *****)(auStack_420 + 1);
  uVar22 = (ulong)auStack_420 >> 1 & 0x7f;
  if (((ulong)auStack_420 & 1) != 0) {
    pppppuVar15 = (undefined8 *****)ppppuStack_410;
    uVar22 = uStack_418;
  }
  if (uVar21 - 1 <= uVar22) {
    uVar22 = uVar21 - 1;
  }
  if (0xfffffffffffffff7 < uVar22) {
LAB_06d54f25:
    uVar13 = func_0x04882e30();
    uVar13 = func_0x04882e20(uVar13);
    func_0x06d0d580(apbStack_130);
    func_0x04143680(auStack_248);
    func_0x04143680(auStack_368);
    func_0x06cf3820(&ppppuStack_3e0,ppppuStack_3d8);
    func_0x0eee2d70(uVar13);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar22 < 0x17) {
    uStack_3c8 = CONCAT71(uStack_3c8._1_7_,(char)uVar22 * '\x02');
    lVar11 = (long)&uStack_3c8 + 1;
    if (uVar22 != 0) goto LAB_06d54aab;
  }
  else {
    uVar21 = 0x1a;
    if ((uVar22 | 7) != 0x17) {
      uVar21 = (uVar22 | 7) + 1;
    }
    lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
    if (lVar11 == 0) {
      func_0x0eec74c0(uVar21,0);
    }
    uStack_3c8 = uVar21 | 1;
    uStack_3c0 = uVar22;
    lStack_3b8 = lVar11;
LAB_06d54aab:
    func_0x0eee2ee0(lVar11,pppppuVar15,uVar22);
  }
  *(undefined1 *)(lVar11 + uVar22) = 0;
  func_0x06d55150(apbStack_130,&UNK_011f112b,&uStack_3c8);
  if ((uStack_3c8 & 1) == 0) {
    if ((uStack_408 & 1) != 0) goto LAB_06d54b17;
LAB_06d54ae5:
    if (((ulong)auStack_420 & 1) != 0) goto LAB_06d54b31;
LAB_06d54aec:
    lVar11 = *plStack_3e8;
  }
  else {
    func_0x0412a280(lStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
    if ((uStack_408 & 1) == 0) goto LAB_06d54ae5;
LAB_06d54b17:
    func_0x0412a280(lStack_3f8,uStack_408 & 0xfffffffffffffffe);
    if (((ulong)auStack_420 & 1) == 0) goto LAB_06d54aec;
LAB_06d54b31:
    func_0x0412a280(ppppuStack_410,(ulong)auStack_420 & 0xfffffffffffffffe);
    lVar11 = *plStack_3e8;
  }
  if ((lVar11 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*plStack_3e8 == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar9 = (**(code **)(*(long *)plStack_3e8[2] + 0x6e8))();
  func_0x06d08510(apbStack_130,&UNK_013fcad7,5,uVar9);
  if ((*plStack_3e8 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*plStack_3e8 == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar9 = (**(code **)(*(long *)plStack_3e8[2] + 0x6f0))();
  func_0x06d08510(apbStack_130,&UNK_01498e56,5,uVar9);
  func_0x06d06720(apbStack_130,&UNK_01379ee7,0,1);
  func_0x06d06910(lVar10,apbStack_130);
  func_0x06d0d580(apbStack_130);
  ppppuVar18 = _UNK_0eeed520;
  uVar13 = _UNK_0eeed518;
  ppppuVar12 = _UNK_0eeed4d8;
  auStack_248 = (undefined1  [8])_UNK_0eeed4d8;
  *(undefined8 *)(auStack_248 + (long)_UNK_0eeed4d8[-3]) = _UNK_0eeed518;
  pppuStack_238 = _UNK_0eeed520;
  puStack_230 = &UNK_0eeed150;
  if ((bStack_1f0 & 1) != 0) {
    func_0x0412a280(uStack_1e0,CONCAT71(uStack_1ef,bStack_1f0) & 0xfffffffffffffffe);
  }
  puStack_230 = &UNK_0eeece20;
  func_0x04167a40(auStack_228);
  func_0x0413c8a0(auStack_248,&UNK_0eeed4e0);
  func_0x04138180(auStack_1c8);
  auStack_368 = SUB84(ppppuVar12,0);
  uStack_364 = (undefined4)((ulong)ppppuVar12 >> 0x20);
  *(undefined8 *)(auStack_368 + (long)ppppuVar12[-3]) = uVar13;
  uStack_358 = ppppuVar18;
  puStack_350 = &UNK_0eeed150;
  if ((bStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
  }
  puStack_350 = &UNK_0eeece20;
  func_0x04167a40(auStack_348);
  func_0x0413c8a0(auStack_368,&UNK_0eeed4e0);
  func_0x04138180(auStack_2e8);
LAB_06d54e00:
  func_0x06cf3820(&ppppuStack_3e0,ppppuStack_3d8);
  return;
}



/* ---- referenced strings ----
 * 0x1240856  CurrentNumDevices
 * 0x1462f61  MultiplayerSessionUpdate
 */
