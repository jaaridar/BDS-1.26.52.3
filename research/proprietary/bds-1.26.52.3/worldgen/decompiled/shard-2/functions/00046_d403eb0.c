/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd503eb0 (ELF vaddr 0xd403eb0)
 * Label: caller-of-callee
 * Body:  [[0d503eb0, 0d504065] [0d504070, 0d50411a] [0d504120, 0d504174] [0d504180, 0d5041d1] [0d5041e0, 0d504255] [0d504260, 0d5042a6] [0d5042b0, 0d5043dc] [0d5043e0, 0d504402] [0d504410, 0d504455] [0d504460, 0d5044d1] [0d5044e0, 0d504511] [0d504520, 0d504545] [0d504550, 0d50459a] [0d5045a0, 0d5045eb] [0d5045f0, 0d504611] [0d504620, 0d504724] [0d504730, 0d5047d5] [0d5047e0, 0d504873] [0d504880, 0d5048a3] [0d5048b0, 0d5048f5] [0d504900, 0d504da6] [0d504db0, 0d504eb0] [0d504ec0, 0d505098] [0d5050a0, 0d505391] [0d5053a0, 0d5055de] [0d5055e0, 0d5056b3] [0d5056c0, 0d505755] [0d505760, 0d505976] [0d505980, 0d505a2b] [0d505a30, 0d505b18] [0d505b20, 0d505c30] [0d505c40, 0d505c9c] [0d505ca0, 0d505d19] [0d505d20, 0d505dc7] [0d505dd0, 0d505e2d] [0d505e30, 0d505e76] [0d505e80, 0d505ec0] [0d505ed0, 0d505ef2] [0d505f00, 0d50600c] [0d506010, 0d5061f7] [0d506200, 0d506260] [0d506270, 0d5062e5] [0d5062f0, 0d50645a]]
 * Ghidra: FUN_0d503eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d503eb0(byte *param_1,long param_2,long *param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  short sVar12;
  undefined *puVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  long *plVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  code *pcVar21;
  undefined8 *puVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  byte *pbVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  long *plStack_6c0;
  byte *pbStack_6b8;
  undefined8 uStack_688;
  byte *pbStack_680;
  byte *pbStack_678;
  undefined4 uStack_670;
  code *pcStack_668;
  long lStack_660;
  undefined1 auStack_658 [8];
  byte *pbStack_650;
  long *plStack_648;
  long *plStack_640;
  long lStack_638;
  byte *pbStack_630;
  undefined8 uStack_628;
  char cStack_620;
  char *pcStack_618;
  long *plStack_610;
  long *plStack_608;
  byte *pbStack_600;
  byte *pbStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  byte bStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  code *pcStack_578;
  byte *pbStack_570;
  byte *pbStack_568;
  byte bStack_560;
  undefined7 uStack_55f;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  int iStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  byte bStack_438;
  undefined4 uStack_437;
  undefined1 uStack_433;
  undefined2 uStack_432;
  undefined1 uStack_430;
  undefined4 uStack_42f;
  undefined1 uStack_42b;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  undefined1 uStack_428;
  undefined5 uStack_427;
  undefined1 uStack_422;
  undefined1 uStack_421;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  long *plStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_38;
  
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plStack_610 = _DAT_0f5523a0;
  pcStack_618 = _DAT_0f552398;
  if ((_DAT_0f552398 == (char *)0x0) || (*_DAT_0f552398 != '\x01')) {
    uStack_628 = 0;
    cStack_620 = '\0';
    pcStack_618 = (char *)0x0;
    plStack_610 = (long *)0x0;
    plStack_608 = (long *)0x0;
    func_0x0eee02f0(0xf5522b8);
  }
  else {
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
    }
    uStack_628 = 0xf5522b8;
    cStack_620 = '\x01';
    plStack_608 = _DAT_0f5523a8;
  }
  lStack_5b8 = 0;
  lStack_5b0 = 0;
  pcStack_5a8 = (code *)0x0;
  uStack_5a0 = 0;
  uStack_598 = 0x3f800000;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  iStack_4b8 = 0;
  uStack_490 = 0x3f800000;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  lVar31 = *(long *)(param_2 + 0x98);
  lVar34 = *(long *)(lVar31 + 8);
  pbStack_6b8 = param_1;
  plStack_6c0 = param_3;
  if (lVar34 != *(long *)(lVar31 + 0x10)) {
    do {
      bStack_438 = 0x1a;
      uStack_42f = 0x656c7572;
      uStack_42b = 0x73;
      uStack_437 = 0x74616566;
      uStack_433 = 0x75;
      uStack_432 = 0x6572;
      uStack_430 = 0x5f;
      uStack_42a = 0;
      func_0x09ae0ca0(&pbStack_600,param_2,lVar34,&bStack_438);
      pbVar6 = pbStack_5f8;
      if (pbStack_600 != pbStack_5f8) {
        bVar39 = false;
        pbVar37 = pbStack_600;
        do {
          uStack_688 = 0;
          pbStack_680 = (byte *)0x0;
          pbStack_678 = (byte *)0x0;
          func_0x0d62a0d0(*(undefined8 *)(lVar34 + 0xe8),pbVar37,&uStack_688,
                          *(undefined4 *)(lVar34 + 0x108));
          bVar14 = (byte)uStack_688 & 1;
          if ((uStack_688 & 1) == 0) {
            if ((byte)uStack_688 >> 1 != 0) goto LAB_0d50418b;
          }
          else if (pbStack_680 != (byte *)0x0) {
LAB_0d50418b:
            bVar39 = (*pbVar37 & 1) != 0;
            pbVar36 = pbVar37 + 1;
            if (bVar39) {
              pbVar36 = *(byte **)(pbVar37 + 0x10);
            }
            pbVar28 = (byte *)(ulong)(*pbVar37 >> 1);
            if (bVar39) {
              pbVar28 = *(byte **)(pbVar37 + 8);
            }
            pbVar24 = pbVar28 + 1;
            while (pbVar24 != (byte *)0x1) {
              pbVar38 = pbVar36 + -2 + (long)pbVar24;
              pbVar24 = pbVar24 + -1;
              if ((*pbVar38 == 0x5c) || (*pbVar38 == 0x2f)) goto joined_r0x0d5041e5;
            }
            pbVar24 = (byte *)0x0;
joined_r0x0d5041e5:
            pbVar38 = pbVar28;
            if (pbVar28 == (byte *)0x0) {
LAB_0d504260:
              pbVar38 = pbVar28 + -(long)pbVar24;
              if (pbVar28 < pbVar24) goto LAB_0d5063eb;
              func_0x0eee2dd0(&bStack_438,0,0x408);
              if ((byte *)0x3ff < pbVar38) goto LAB_0d504289;
              if (pbVar28 == pbVar24) {
LAB_0d5042b5:
                pbVar38 = (byte *)0x0;
              }
              else {
LAB_0d50423e:
                func_0x0eee2f00(&bStack_438,pbVar36 + (long)pbVar24,pbVar38);
              }
              pbStack_38 = pbVar38;
              (&bStack_438)[(long)pbVar38] = 0;
              pbVar36 = pbStack_38;
              if ((byte *)0xfffffffffffffff7 < pbStack_38) goto LAB_0d5063f7;
              if (pbStack_38 < (byte *)0x17) {
                auStack_658[0] = (char)pbStack_38 * '\x02';
                plVar17 = (long *)(auStack_658 + 1);
                if (pbStack_38 != (byte *)0x0) goto LAB_0d504349;
                goto LAB_0d50429a;
              }
              uVar23 = ((ulong)pbStack_38 | 7) + 1;
              if (((ulong)pbStack_38 | 7) == 0x17) {
                uVar23 = 0x1a;
              }
              plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
              if (plVar17 == (long *)0x0) {
                func_0x0eec74c0(uVar23,0);
              }
              auStack_658 = (undefined1  [8])(uVar23 | 1);
              pbStack_650 = pbVar36;
              plStack_648 = plVar17;
LAB_0d504349:
              func_0x0eee2f00(plVar17,&bStack_438,pbVar36);
            }
            else {
              do {
                if (pbVar38 == (byte *)0x0) goto LAB_0d504260;
                pbVar1 = pbVar38 + -1;
                pbVar2 = pbVar36 + -1 + (long)pbVar38;
                pbVar38 = pbVar1;
              } while (*pbVar2 != 0x2e);
              if (pbVar1 == (byte *)0xffffffffffffffff) goto LAB_0d504260;
              bVar39 = pbVar28 < pbVar24;
              pbVar28 = pbVar28 + -(long)pbVar24;
              if (bVar39) goto LAB_0d5063eb;
              pbVar38 = pbVar1 + -(long)pbVar24;
              if (pbVar28 < pbVar1 + -(long)pbVar24) {
                pbVar38 = pbVar28;
              }
              func_0x0eee2dd0(&bStack_438,0,0x408);
              if (pbVar38 < (byte *)0x400) {
                if (pbVar38 != (byte *)0x0) goto LAB_0d50423e;
                goto LAB_0d5042b5;
              }
LAB_0d504289:
              auStack_658 = (undefined1  [8])((ulong)auStack_658 & 0xffffffffffffff00);
LAB_0d50429a:
              plVar17 = (long *)(auStack_658 + 1);
              pbVar36 = (byte *)0x0;
            }
            *(byte *)((long)plVar17 + (long)pbVar36) = 0;
            func_0x0d500ec0(&bStack_438,param_1,auStack_658,&uStack_688,
                            **(long **)(**(long **)(lVar34 + 0xe8) + 8) + 0x180,param_3,&lStack_5b8,
                            *(undefined1 *)(**(long **)(lVar34 + 0xe8) + 0x88));
            func_0x0d6b1c60(&uStack_548,&bStack_438);
            uVar29 = uStack_3a8;
            uVar23 = uStack_3a0;
            if (uStack_3a8 != 0) {
              for (; uVar29 != uVar23; uVar23 = uVar23 - 0x20) {
                if ((*(byte *)(uVar23 - 0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(uVar23 - 8),
                                  *(ulong *)(uVar23 - 0x18) & 0xfffffffffffffffe);
                }
              }
              uStack_3a0 = uVar29;
              func_0x0412a280(uStack_3a8,lStack_398 - uStack_3a8);
            }
            lVar32 = lStack_3c0;
            lVar35 = lStack_3b8;
            if (lStack_3c0 != 0) {
              for (; lVar32 != lVar35; lVar35 = lVar35 + -0x50) {
                if ((*(byte *)(lVar35 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar35 + -8),
                                  *(ulong *)(lVar35 + -0x18) & 0xfffffffffffffffe);
                }
                lVar20 = *(long *)(lVar35 + -0x30);
                if (lVar20 != 0) {
                  lVar25 = *(long *)(lVar35 + -0x28);
                  lVar27 = lVar20;
                  if (lVar20 != lVar25) {
                    do {
                      if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(lVar25 + -8),
                                        *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != lVar20);
                    lVar27 = *(long *)(lVar35 + -0x30);
                  }
                  *(long *)(lVar35 + -0x28) = lVar20;
                  func_0x0412a280(lVar27,*(long *)(lVar35 + -0x20) - lVar27);
                }
                lVar20 = *(long *)(lVar35 + -0x48);
                if (lVar20 != 0) {
                  lVar25 = *(long *)(lVar35 + -0x40);
                  lVar27 = lVar20;
                  if (lVar20 != lVar25) {
                    do {
                      if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(lVar25 + -8),
                                        *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != lVar20);
                    lVar27 = *(long *)(lVar35 + -0x48);
                  }
                  *(long *)(lVar35 + -0x40) = lVar20;
                  func_0x0412a280(lVar27,*(long *)(lVar35 + -0x38) - lVar27);
                }
              }
              lStack_3b8 = lVar32;
              func_0x0412a280(lStack_3c0,lStack_3b0 - lStack_3c0);
            }
            lVar32 = lStack_3d8;
            lVar35 = lStack_3d0;
            if (lStack_3d8 != 0) {
              for (; lVar32 != lVar35; lVar35 = lVar35 + -0x38) {
                if ((*(byte *)(lVar35 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar35 + -8),
                                  *(ulong *)(lVar35 + -0x18) & 0xfffffffffffffffe);
                }
                lVar20 = *(long *)(lVar35 + -0x30);
                if (lVar20 != 0) {
                  lVar25 = *(long *)(lVar35 + -0x28);
                  lVar27 = lVar20;
                  if (lVar20 != lVar25) {
                    do {
                      if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(lVar25 + -8),
                                        *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
                      }
                      lVar25 = lVar25 + -0x20;
                    } while (lVar25 != lVar20);
                    lVar27 = *(long *)(lVar35 + -0x30);
                  }
                  *(long *)(lVar35 + -0x28) = lVar20;
                  func_0x0412a280(lVar27,*(long *)(lVar35 + -0x20) - lVar27);
                }
              }
              lStack_3d0 = lVar32;
              func_0x0412a280(lStack_3d8,lStack_3c8 - lStack_3d8);
            }
            if (pcStack_3e8 != (code *)0x0) {
              (*pcStack_3e8)(&uStack_400);
            }
            if (((ulong)plStack_408 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)plStack_408 & 0xff00ffffffffffff) - 8);
            }
            plStack_408 = (long *)0x0;
            if ((uStack_410 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
            }
            if (((ulong)auStack_658 & 1) != 0) {
              func_0x0412a280(plStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
            }
            bVar14 = (byte)uStack_688 & 1;
            bVar39 = true;
          }
          if (bVar14 != 0) {
            func_0x0412a280(pbStack_678,uStack_688 & 0xfffffffffffffffe);
          }
          pbVar37 = pbVar37 + 0x18;
        } while (pbVar37 != pbVar6);
        if (bVar39) {
          uVar5 = **(undefined8 **)(**(long **)(lVar34 + 0xe8) + 8);
          if ((DAT_0f5ea4a0 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5ea4a0), iVar16 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            func_0x0410844d(&DAT_0f5ea4a0);
          }
          func_0x0d5f7010(&bStack_438,uVar5,&DAT_0f5ea138);
          func_0x0646d5a0(&uStack_4b0,&bStack_438,&bStack_438);
          if ((bStack_438 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_421,CONCAT16(uStack_422,CONCAT51(uStack_427,uStack_428))
                                    ),
                            CONCAT26(uStack_432,CONCAT15(uStack_433,CONCAT41(uStack_437,bStack_438))
                                    ) & 0xfffffffffffffffe);
          }
        }
      }
      puVar13 = puStack_5e8;
      puVar11 = puStack_5e0;
      if (puStack_5e8 != (undefined *)0x0) {
        for (; puVar13 != puVar11; puVar11 = puVar11 + -0x40) {
          lVar35 = *(long *)(puVar11 + -0x18);
          if (lVar35 != 0) {
            lVar32 = *(long *)(puVar11 + -0x10);
            lVar20 = lVar35;
            if (lVar35 != lVar32) {
              do {
                lVar32 = lVar32 + -0x40;
                func_0x0d697f30(lVar32);
              } while (lVar32 != lVar35);
              lVar20 = *(long *)(puVar11 + -0x18);
            }
            *(long *)(puVar11 + -0x10) = lVar35;
            func_0x0412a280(lVar20,*(long *)(puVar11 + -8) - lVar20);
          }
          plVar17 = *(long **)(puVar11 + -0x20);
          if (plVar17 == (long *)0x0) {
LAB_0d504850:
            bVar14 = puVar11[-0x40];
          }
          else {
            LOCK();
            plVar26 = plVar17 + 1;
            lVar35 = *plVar26;
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (lVar35 != 0) goto LAB_0d504850;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            FUN_0412c2d0(plVar17);
            bVar14 = puVar11[-0x40];
          }
          if ((bVar14 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar11 + -0x30),
                            *(ulong *)(puVar11 + -0x40) & 0xfffffffffffffffe);
          }
        }
        puStack_5e0 = puVar13;
        func_0x0412a280(puStack_5e8,lStack_5d8 - (long)puStack_5e8);
      }
      pbVar37 = pbStack_600;
      pbVar6 = pbStack_5f8;
      if (pbStack_600 != (byte *)0x0) {
        for (; pbVar37 != pbVar6; pbVar6 = pbVar6 + -0x18) {
          if ((pbVar6[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar6 + -8),
                            *(ulong *)(pbVar6 + -0x18) & 0xfffffffffffffffe);
          }
        }
        pbStack_5f8 = pbVar37;
        func_0x0412a280(pbStack_600,(long)puStack_5f0 - (long)pbStack_600);
      }
      lVar34 = lVar34 + 0x110;
    } while (lVar34 != *(long *)(lVar31 + 0x10));
    if (0 < iStack_4b8) {
      bStack_438 = 0x2a;
      uStack_437 = _DAT_011b0484;
      uStack_433 = (undefined1)_UNK_011b0488;
      uStack_432 = (undefined2)((uint)_UNK_011b0488 >> 8);
      uStack_430 = (undefined1)((uint)_UNK_011b0488 >> 0x18);
      uStack_42f = _UNK_011b048c;
      uStack_42b = (undefined1)_UNK_011b0490;
      uStack_42a = 0x75;
      uStack_429 = 0x72;
      uStack_428 = 0x65;
      uStack_427 = 0x73656c7552;
      uStack_422 = 0;
      (**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x40) + 0x10))
                (*(long *)(param_1 + 0xf0) + 0x40,&bStack_438,&uStack_548);
      if ((bStack_438 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_421,CONCAT16(uStack_422,CONCAT51(uStack_427,uStack_428))),
                        CONCAT26(uStack_432,CONCAT15(uStack_433,CONCAT41(uStack_437,bStack_438))) &
                        0xfffffffffffffffe);
      }
    }
  }
  if (((pcStack_618 != (char *)0x0) && (*pcStack_618 == '\0')) &&
     (cVar15 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plStack_608 + 0x110))(&uStack_688);
  pbStack_600 = (byte *)((long)&uStack_688 + 1);
  pbStack_5f8 = (byte *)(uStack_688 >> 1 & 0x7f);
  if ((uStack_688 & 1) != 0) {
    pbStack_5f8 = pbStack_680;
    pbStack_600 = pbStack_678;
  }
  puStack_5f0 = &UNK_014dc253;
  puStack_5e8 = (undefined *)0x19;
  pbVar36 = &bStack_438;
  func_0x049151c0(pbVar36,&pbStack_600,2,0x2f);
  if ((uStack_688 & 1) != 0) {
    func_0x0412a280(pbStack_678,uStack_688 & 0xfffffffffffffffe);
  }
  pbVar28 = param_4;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0d50640b;
LAB_0d504aed:
  pbStack_568 = pbStack_38;
  auStack_658 = (undefined1  [8])&uStack_628;
  pbStack_650 = pbStack_6b8;
  plStack_648 = plStack_6c0;
  plStack_640 = &lStack_5b8;
  pbStack_570 = pbVar36;
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (&pbStack_600,&DAT_0f7b8f98,&pbStack_570,0x182,&UNK_0d5107a0,auStack_658);
  uStack_688 = 0xc30e2c81b1a87f39;
  pbStack_680 = &UNK_0140f690;
  pbStack_678 = (byte *)0x1;
  uStack_670 = 0x72;
  if (bStack_5c0 == 0) {
    func_0x0eedea30(&bStack_560);
    func_0x0eedeb80(2,0x2d,&pbStack_600,&bStack_560,&uStack_688);
    if ((bStack_560 & 1) != 0) {
      func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
    }
  }
  lVar31 = lStack_5d8;
  if ((bStack_5c0 & 1) == 0) {
    lVar34 = lStack_5d0;
    if (lStack_5d8 != 0) {
      while (lVar31 != lVar34) {
        func_0x048b3e80(lVar34 + -0x40);
        lVar34 = lVar34 + -0x40;
      }
      lStack_5d0 = lVar31;
      func_0x0412a280(lStack_5d8,lStack_5c8 - lStack_5d8);
    }
    puVar13 = puStack_5f0;
    puVar11 = puStack_5e8;
    if (puStack_5f0 != (undefined *)0x0) {
      for (; puVar13 != puVar11; puVar11 = puVar11 + -0x50) {
        if ((puVar11[-8] == '\x01') && ((puVar11[-0x30] & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(puVar11 + -0x20),
                          *(ulong *)(puVar11 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_5e8 = puVar13;
      func_0x0412a280(puStack_5f0,(long)puStack_5e0 - (long)puStack_5f0);
    }
  }
  func_0x05f43b50(&uStack_548);
  plVar17 = plStack_610;
  pcStack_618 = (char *)0x0;
  plStack_610 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    plStack_608 = (long *)0x0;
  }
  else {
    LOCK();
    plVar26 = plVar17 + 1;
    lVar31 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
    }
    plVar17 = plStack_610;
    plStack_608 = (long *)0x0;
    if (plStack_610 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_610 + 1;
      lVar31 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plStack_610 + 0x10))(plStack_610);
        FUN_0412c2d0(plVar17);
      }
    }
  }
  if (cStack_620 == '\x01') {
    func_0x0eee02f0(uStack_628);
  }
  pcVar18 = (code *)(**(code **)(*plStack_6c0 + 0x18))();
  puVar19 = *(undefined8 **)(pcVar18 + 0x380);
  puStack_588 = *(undefined8 **)(pcVar18 + 0x388);
  pcVar21 = pcVar18;
  if (puVar19 != puStack_588) {
    do {
      pcStack_668 = pcVar21;
      plStack_6c0 = (long *)*puVar19;
      puStack_580 = puVar19;
      if (plStack_6c0 != *(long **)(pcVar18 + 0x3b8)) {
        if ((DAT_0f6eaef0 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6eaef0), iVar16 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f6eaee8 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f6eaef0);
        }
        sVar12 = _DAT_0f6eaee8;
        puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar19 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *puVar19 = &UNK_0f472a90;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        pbVar36 = (byte *)plStack_6c0[0x2e];
        pbVar6 = (byte *)plStack_6c0[0x2f];
        if (pbVar36 != pbVar6) {
          puVar22 = puVar19 + 1;
          pbVar37 = pbVar36;
LAB_0d504e60:
          if (*(short *)pbVar37 != sVar12) goto code_r0x0d504e69;
          puVar7 = *(undefined8 **)(pbVar37 + 8);
          if (puVar7 == (undefined8 *)0x0) {
            func_0x04890760();
            pbVar36 = (byte *)0x0;
LAB_0d5063e1:
            func_0x0535c240();
LAB_0d5063e6:
            func_0x04882eb0();
LAB_0d5063eb:
            func_0x04882ef0(&UNK_01306d2f);
LAB_0d5063f7:
            FUN_04882e30();
            goto LAB_0d5063fc;
          }
          *puVar19 = &UNK_0f472a90;
          bStack_438 = (byte)puVar22;
          uStack_437 = (undefined4)((ulong)puVar22 >> 8);
          uStack_433 = (undefined1)((ulong)puVar22 >> 0x28);
          uStack_432 = (undefined2)((ulong)puVar22 >> 0x30);
          func_0x0535e9c0(&bStack_438);
          func_0x0412a280(puVar19,0x20);
          puVar19 = puVar7;
          pcVar21 = pcStack_5a8;
          goto joined_r0x0d50500f;
        }
LAB_0d504e72:
        puVar7 = puVar19;
        if (pbVar6 < (byte *)plStack_6c0[0x30]) {
          *(short *)pbVar6 = sVar12;
          *(undefined8 **)(pbVar6 + 8) = puVar19;
          plStack_6c0[0x2f] = (long)(pbVar6 + 0x10);
          pcVar21 = pcStack_5a8;
        }
        else {
          lVar31 = (long)pbVar6 - (long)pbVar36;
          pbVar28 = (byte *)(lVar31 >> 4);
          pbVar37 = pbVar28 + 1;
          if ((byte *)0xfffffffffffffff < pbVar37) goto LAB_0d506406;
          uVar23 = plStack_6c0[0x30] - (long)pbVar36;
          pbVar24 = (byte *)((long)uVar23 >> 3);
          if (pbVar24 <= pbVar37) {
            pbVar24 = pbVar37;
          }
          if (0x7fffffffffffffef < uVar23) {
            pbVar24 = (byte *)0xfffffffffffffff;
          }
          if ((byte *)0xfffffffffffffff < pbVar24) goto LAB_0d506401;
          lVar35 = (long)pbVar24 * 0x10;
          lVar34 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar35);
          if (lVar34 == 0) {
            func_0x0eec74c0(lVar35,0);
          }
          lVar32 = lVar34 + lVar31 + (long)pbVar28 * -0x10;
          *(short *)(lVar34 + lVar31) = sVar12;
          *(undefined8 **)(lVar34 + 8 + lVar31) = puVar19;
          if (pbVar36 != pbVar6) {
            lVar20 = 0;
            do {
              *(undefined2 *)(lVar32 + lVar20) = *(undefined2 *)(pbVar36 + lVar20);
              uVar5 = *(undefined8 *)(pbVar36 + lVar20 + 8);
              pbVar37 = pbVar36 + lVar20 + 8;
              pbVar37[0] = 0;
              pbVar37[1] = 0;
              pbVar37[2] = 0;
              pbVar37[3] = 0;
              pbVar37[4] = 0;
              pbVar37[5] = 0;
              pbVar37[6] = 0;
              pbVar37[7] = 0;
              *(undefined8 *)(lVar32 + 8 + lVar20) = uVar5;
              lVar25 = lVar20 + 0x10;
              lVar20 = lVar20 + 0x10;
            } while (pbVar36 + lVar25 != pbVar6);
            do {
              plVar17 = *(long **)(pbVar36 + 8);
              pbVar36[8] = 0;
              pbVar36[9] = 0;
              pbVar36[10] = 0;
              pbVar36[0xb] = 0;
              pbVar36[0xc] = 0;
              pbVar36[0xd] = 0;
              pbVar36[0xe] = 0;
              pbVar36[0xf] = 0;
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 8))();
              }
              pbVar36 = pbVar36 + 0x10;
            } while (pbVar36 != pbVar6);
            pbVar36 = (byte *)plStack_6c0[0x2e];
          }
          lVar20 = lVar31 + lVar34 + 0x10;
          plStack_6c0[0x2e] = lVar32;
          plStack_6c0[0x2f] = lVar20;
          lVar31 = plStack_6c0[0x30];
          plStack_6c0[0x30] = lVar35 + lVar34;
          if (pbVar36 != (byte *)0x0) {
            func_0x0412a280(pbVar36,lVar31 - (long)pbVar36);
          }
          plStack_6c0[0x2f] = lVar20;
          pbVar28 = param_4;
          pcVar18 = pcStack_668;
          pcVar21 = pcStack_5a8;
        }
joined_r0x0d50500f:
        while (pcVar21 != (code *)0x0) {
          pcStack_578 = pcVar21;
          for (puVar22 = *(undefined8 **)(pcVar21 + 0x38); puVar22 != (undefined8 *)0x0;
              puVar22 = (undefined8 *)*puVar22) {
            uStack_400 = 0;
            uStack_418 = 0;
            uStack_410 = 0;
            uStack_428 = 0;
            uStack_427 = 0;
            uStack_422 = 0;
            uStack_421 = 0;
            uStack_420 = 0;
            bStack_438 = 0;
            uStack_437 = 0;
            uStack_433 = 0;
            uStack_432 = 0;
            uStack_430 = 0;
            uStack_42f = 0;
            uStack_42b = 0;
            uStack_42a = 0;
            uStack_429 = 0;
            uStack_3f8 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            lStack_3b0 = 0;
            uStack_3a8 = 0;
            lStack_3c0 = 0;
            lStack_3b8 = 0;
            lStack_3d0 = 0;
            lStack_3c8 = 0;
            uStack_3e0 = 0;
            lStack_3d8 = 0;
            uStack_3f0 = 0;
            uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
            uStack_358 = 0;
            uStack_350 = 0;
            uStack_368 = 0;
            uStack_360 = 0;
            uStack_378 = 0;
            uStack_370 = 0;
            uStack_388 = 0;
            uStack_380 = 0;
            lStack_398 = 0;
            uStack_390 = 0;
            uStack_348 = 0;
            uStack_300 = 0;
            uStack_2f8 = 0;
            uStack_310 = 0;
            uStack_308 = 0;
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_330 = 0;
            uStack_328 = 0;
            uStack_340 = 0;
            uStack_338 = 0;
            uStack_2f0 = 0;
            uStack_2a8 = 0;
            uStack_2a0 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            uStack_2d8 = 0;
            uStack_2d0 = 0;
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_298 = 0;
            uStack_250 = 0;
            uStack_248 = 0;
            uStack_260 = 0;
            uStack_258 = 0;
            uStack_270 = 0;
            uStack_268 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            uStack_290 = 0;
            uStack_288 = 0;
            uStack_240 = 0;
            uStack_1f8 = 0;
            uStack_1f0 = 0;
            uStack_208 = 0;
            uStack_200 = 0;
            uStack_218 = 0;
            uStack_210 = 0;
            uStack_228 = 0;
            uStack_220 = 0;
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_1e8 = 0;
            uStack_1a0 = 0;
            uStack_198 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1c0 = 0;
            uStack_1b8 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            uStack_190 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_178 = 0;
            uStack_170 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_138 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_e0 = 0;
            plStack_408 = plStack_6c0;
            pcStack_3e8 = pcVar18;
            cVar15 = func_0x0c5c3630(puVar22 + 0x2e,&bStack_438);
            if (cVar15 != '\0') {
              pbVar36 = (byte *)puVar19[2];
              if (pbVar36 < (byte *)puVar19[3]) {
                func_0x0535c580(pbVar36,puVar22 + 7);
                *(undefined8 *)(pbVar36 + 0xe8) = puVar22[0x24];
                uVar5 = puVar22[0x23];
                *(undefined8 *)(pbVar36 + 0xd8) = puVar22[0x22];
                *(undefined8 *)(pbVar36 + 0xe0) = uVar5;
                pbVar36[0xf0] = 0;
                pbVar36[0xf1] = 0;
                pbVar36[0xf2] = 0;
                pbVar36[0xf3] = 0;
                pbVar36[0xf4] = 0;
                pbVar36[0xf5] = 0;
                pbVar36[0xf6] = 0;
                pbVar36[0xf7] = 0;
                pbVar36[0xf8] = 0;
                pbVar36[0xf9] = 0;
                pbVar36[0xfa] = 0;
                pbVar36[0xfb] = 0;
                pbVar36[0xfc] = 0;
                pbVar36[0xfd] = 0;
                pbVar36[0xfe] = 0;
                pbVar36[0xff] = 0;
                pbVar36[0x100] = 0;
                pbVar36[0x101] = 0;
                pbVar36[0x102] = 0;
                pbVar36[0x103] = 0;
                pbVar36[0x104] = 0;
                pbVar36[0x105] = 0;
                pbVar36[0x106] = 0;
                pbVar36[0x107] = 0;
                pbVar36[0x108] = 0;
                pbVar36[0x109] = 0;
                pbVar36[0x10a] = 0;
                pbVar36[0x10b] = 0;
                pbVar36[0x10c] = 0;
                pbVar36[0x10d] = 0;
                pbVar36[0x10e] = 0;
                pbVar36[0x10f] = 0;
                pbVar36[0x110] = 0;
                pbVar36[0x111] = 0;
                pbVar36[0x112] = 0;
                pbVar36[0x113] = 0;
                pbVar36[0x114] = 0;
                pbVar36[0x115] = 0;
                pbVar36[0x116] = 0;
                pbVar36[0x117] = 0;
                if (pbVar36 + 0xf0 != (byte *)(puVar22 + 0x25)) {
                  if ((*(byte *)(puVar22 + 0x26) & 1) == 0) {
                    *(undefined8 *)(pbVar36 + 0x108) = puVar22[0x28];
                    uVar8 = *(undefined4 *)((long)puVar22 + 0x134);
                    uVar9 = *(undefined4 *)(puVar22 + 0x27);
                    uVar10 = *(undefined4 *)((long)puVar22 + 0x13c);
                    *(undefined4 *)(pbVar36 + 0xf8) = *(undefined4 *)(puVar22 + 0x26);
                    *(undefined4 *)(pbVar36 + 0xfc) = uVar8;
                    *(undefined4 *)(pbVar36 + 0x100) = uVar9;
                    *(undefined4 *)(pbVar36 + 0x104) = uVar10;
                  }
                  else {
                    func_0x04885070(pbVar36 + 0xf8,puVar22[0x28],puVar22[0x27]);
                  }
                }
                *(undefined8 *)(pbVar36 + 0xf0) = puVar22[0x25];
                if ((*(byte *)(puVar22 + 0x2a) & 1) == 0) {
                  *(undefined8 *)(pbVar36 + 0x128) = puVar22[0x2c];
                  uVar8 = *(undefined4 *)((long)puVar22 + 0x154);
                  uVar9 = *(undefined4 *)(puVar22 + 0x2b);
                  uVar10 = *(undefined4 *)((long)puVar22 + 0x15c);
                  *(undefined4 *)(pbVar36 + 0x118) = *(undefined4 *)(puVar22 + 0x2a);
                  *(undefined4 *)(pbVar36 + 0x11c) = uVar8;
                  *(undefined4 *)(pbVar36 + 0x120) = uVar9;
                  *(undefined4 *)(pbVar36 + 0x124) = uVar10;
                }
                else {
                  func_0x0412e5e0(pbVar36 + 0x118,puVar22[0x2c],puVar22[0x2b]);
                }
                pbVar36[0x130] = *(byte *)(puVar22 + 0x2d);
                pbVar36 = pbVar36 + 0x138;
                puVar19[2] = pbVar36;
              }
              else {
                lVar31 = puVar19[1];
                uVar23 = ((long)pbVar36 - lVar31 >> 3) * 0x6f96f96f96f96f97 + 1;
                pbStack_630 = pbVar36;
                if (0xd20d20d20d20d2 < uVar23) goto LAB_0d5063e1;
                lVar34 = (long)puVar19[3] - lVar31 >> 3;
                uVar29 = lVar34 * -0x20d20d20d20d20d2;
                if (uVar23 < uVar29) {
                  uVar23 = uVar29;
                }
                if (0x69069069069068 < (ulong)(lVar34 * 0x6f96f96f96f96f97)) {
                  uVar23 = 0xd20d20d20d20d2;
                }
                lStack_638 = lVar31;
                if (uVar23 == 0) {
                  pbStack_6b8 = (byte *)0x0;
                }
                else {
                  if (0xd20d20d20d20d2 < uVar23) goto LAB_0d5063e6;
                  pbStack_6b8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                  (&DAT_0f5463b0,uVar23 * 0x138);
                  if (pbStack_6b8 == (byte *)0x0) {
                    func_0x0eec74c0(uVar23 * 0x138,0);
                    pbStack_6b8 = (byte *)0x0;
                  }
                }
                pbVar36 = pbStack_6b8 + ((long)pbVar36 - lVar31);
                func_0x0535c580(pbVar36,puVar22 + 7);
                *(undefined8 *)(pbVar36 + 0xe8) = puVar22[0x24];
                uVar5 = puVar22[0x23];
                *(undefined8 *)(pbVar36 + 0xd8) = puVar22[0x22];
                *(undefined8 *)(pbVar36 + 0xe0) = uVar5;
                pbVar36[0xf0] = 0;
                pbVar36[0xf1] = 0;
                pbVar36[0xf2] = 0;
                pbVar36[0xf3] = 0;
                pbVar36[0xf4] = 0;
                pbVar36[0xf5] = 0;
                pbVar36[0xf6] = 0;
                pbVar36[0xf7] = 0;
                pbVar36[0xf8] = 0;
                pbVar36[0xf9] = 0;
                pbVar36[0xfa] = 0;
                pbVar36[0xfb] = 0;
                pbVar36[0xfc] = 0;
                pbVar36[0xfd] = 0;
                pbVar36[0xfe] = 0;
                pbVar36[0xff] = 0;
                pbVar36[0x100] = 0;
                pbVar36[0x101] = 0;
                pbVar36[0x102] = 0;
                pbVar36[0x103] = 0;
                pbVar36[0x104] = 0;
                pbVar36[0x105] = 0;
                pbVar36[0x106] = 0;
                pbVar36[0x107] = 0;
                pbVar36[0x108] = 0;
                pbVar36[0x109] = 0;
                pbVar36[0x10a] = 0;
                pbVar36[0x10b] = 0;
                pbVar36[0x10c] = 0;
                pbVar36[0x10d] = 0;
                pbVar36[0x10e] = 0;
                pbVar36[0x10f] = 0;
                pbVar36[0x110] = 0;
                pbVar36[0x111] = 0;
                pbVar36[0x112] = 0;
                pbVar36[0x113] = 0;
                pbVar36[0x114] = 0;
                pbVar36[0x115] = 0;
                pbVar36[0x116] = 0;
                pbVar36[0x117] = 0;
                if (pbVar36 + 0xf0 != (byte *)(puVar22 + 0x25)) {
                  if ((*(byte *)(puVar22 + 0x26) & 1) == 0) {
                    *(undefined8 *)(pbVar36 + 0x108) = puVar22[0x28];
                    uVar8 = *(undefined4 *)((long)puVar22 + 0x134);
                    uVar9 = *(undefined4 *)(puVar22 + 0x27);
                    uVar10 = *(undefined4 *)((long)puVar22 + 0x13c);
                    *(undefined4 *)(pbVar36 + 0xf8) = *(undefined4 *)(puVar22 + 0x26);
                    *(undefined4 *)(pbVar36 + 0xfc) = uVar8;
                    *(undefined4 *)(pbVar36 + 0x100) = uVar9;
                    *(undefined4 *)(pbVar36 + 0x104) = uVar10;
                  }
                  else {
                    func_0x04885070(pbVar36 + 0xf8,puVar22[0x28],puVar22[0x27]);
                  }
                }
                *(undefined8 *)(pbVar36 + 0xf0) = puVar22[0x25];
                if ((*(byte *)(puVar22 + 0x2a) & 1) == 0) {
                  *(undefined8 *)(pbVar36 + 0x128) = puVar22[0x2c];
                  uVar8 = *(undefined4 *)((long)puVar22 + 0x154);
                  uVar9 = *(undefined4 *)(puVar22 + 0x2b);
                  uVar10 = *(undefined4 *)((long)puVar22 + 0x15c);
                  *(undefined4 *)(pbVar36 + 0x118) = *(undefined4 *)(puVar22 + 0x2a);
                  *(undefined4 *)(pbVar36 + 0x11c) = uVar8;
                  *(undefined4 *)(pbVar36 + 0x120) = uVar9;
                  *(undefined4 *)(pbVar36 + 0x124) = uVar10;
                }
                else {
                  func_0x0412e5e0(pbVar36 + 0x118,puVar22[0x2c],puVar22[0x2b]);
                }
                pbVar36[0x130] = *(byte *)(puVar22 + 0x2d);
                lVar34 = puVar19[1];
                lVar31 = puVar19[2];
                lVar35 = (long)pbVar36 - (lVar31 - lVar34);
                if (lVar31 != lVar34) {
                  lStack_660 = (lVar31 - lVar34 >> 3) * -0x6f96f96f96f96f97;
                  lVar32 = 0;
                  do {
                    func_0x0535c580(lVar32 + lVar35,lVar32 + lVar34);
                    *(undefined8 *)(lVar35 + 0xe8 + lVar32) =
                         *(undefined8 *)(lVar34 + 0xe8 + lVar32);
                    puVar19 = (undefined8 *)(lVar34 + 0xd8 + lVar32);
                    uVar5 = puVar19[1];
                    puVar3 = (undefined8 *)(lVar35 + 0xd8 + lVar32);
                    *puVar3 = *puVar19;
                    puVar3[1] = uVar5;
                    puVar19 = (undefined8 *)(lVar35 + 0xf0 + lVar32);
                    *puVar19 = 0;
                    puVar19[1] = 0;
                    puVar19 = (undefined8 *)(lVar35 + 0x100 + lVar32);
                    *puVar19 = 0;
                    puVar19[1] = 0;
                    *(undefined8 *)(lVar35 + 0x110 + lVar32) = 0;
                    if (lVar32 + lVar34 != lVar32 + lVar35) {
                      lVar20 = lVar32 + lVar35;
                      lVar25 = lVar32 + lVar34;
                      if ((*(byte *)(lVar25 + 0xf8) & 1) == 0) {
                        *(undefined8 *)(lVar20 + 0x108) = *(undefined8 *)(lVar25 + 0x108);
                        uVar8 = *(undefined4 *)(lVar25 + 0xfc);
                        uVar9 = *(undefined4 *)(lVar25 + 0x100);
                        uVar10 = *(undefined4 *)(lVar25 + 0x104);
                        *(undefined4 *)(lVar20 + 0xf8) = *(undefined4 *)(lVar25 + 0xf8);
                        *(undefined4 *)(lVar20 + 0xfc) = uVar8;
                        *(undefined4 *)(lVar20 + 0x100) = uVar9;
                        *(undefined4 *)(lVar20 + 0x104) = uVar10;
                      }
                      else {
                        func_0x04885070((undefined4 *)(lVar20 + 0xf8),
                                        *(undefined8 *)(lVar34 + 0x108 + lVar32),
                                        *(undefined8 *)(lVar34 + 0x100 + lVar32));
                      }
                    }
                    *(undefined8 *)(lVar35 + 0xf0 + lVar32) =
                         *(undefined8 *)(lVar34 + 0xf0 + lVar32);
                    lVar20 = lVar32 + lVar35;
                    if ((*(byte *)(lVar34 + 0x118 + lVar32) & 1) == 0) {
                      lVar25 = lVar32 + lVar34;
                      *(undefined8 *)(lVar20 + 0x128) = *(undefined8 *)(lVar25 + 0x128);
                      uVar8 = *(undefined4 *)(lVar25 + 0x11c);
                      uVar9 = *(undefined4 *)(lVar25 + 0x120);
                      uVar10 = *(undefined4 *)(lVar25 + 0x124);
                      *(undefined4 *)(lVar20 + 0x118) = *(undefined4 *)(lVar25 + 0x118);
                      *(undefined4 *)(lVar20 + 0x11c) = uVar8;
                      *(undefined4 *)(lVar20 + 0x120) = uVar9;
                      *(undefined4 *)(lVar20 + 0x124) = uVar10;
                    }
                    else {
                      func_0x0412e5e0((undefined4 *)(lVar20 + 0x118),
                                      *(undefined8 *)(lVar34 + 0x128 + lVar32),
                                      *(undefined8 *)(lVar34 + 0x120 + lVar32));
                    }
                    *(undefined1 *)(lVar35 + 0x130 + lVar32) =
                         *(undefined1 *)(lVar34 + 0x130 + lVar32);
                    lVar20 = lVar32 + lVar34;
                    lVar32 = lVar32 + 0x138;
                  } while (lVar20 + 0x138 != lVar31);
                  do {
                    if ((*(byte *)(lVar34 + 0x118) & 1) == 0) {
                      if ((*(byte *)(lVar34 + 0xf8) & 1) == 0) goto LAB_0d505749;
LAB_0d505780:
                      func_0x0412a280(*(undefined8 *)(lVar34 + 0x108),
                                      *(ulong *)(lVar34 + 0xf8) & 0xfffffffffffffffe);
                      uVar4 = *(uint *)(lVar34 + 0xd0);
                    }
                    else {
                      func_0x0412a280(*(undefined8 *)(lVar34 + 0x128),
                                      *(ulong *)(lVar34 + 0x118) & 0xfffffffffffffffe);
                      if ((*(byte *)(lVar34 + 0xf8) & 1) != 0) goto LAB_0d505780;
LAB_0d505749:
                      uVar4 = *(uint *)(lVar34 + 0xd0);
                    }
                    if ((ulong)uVar4 != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)uVar4 * 8))(&uStack_548,lVar34 + 200);
                    }
                    *(undefined4 *)(lVar34 + 0xd0) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0xb8) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0xb8) * 8))
                                (&uStack_548,lVar34 + 0xb0);
                    }
                    *(undefined4 *)(lVar34 + 0xb8) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0x88) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0x88) * 8))
                                (&uStack_548,lVar34 + 0x80);
                    }
                    *(undefined4 *)(lVar34 + 0x88) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0x78) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0x78) * 8))
                                (&uStack_548,lVar34 + 0x70);
                    }
                    *(undefined4 *)(lVar34 + 0x78) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0x50) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0x50) * 8))
                                (&uStack_548,lVar34 + 0x48);
                    }
                    *(undefined4 *)(lVar34 + 0x50) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0x40) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0x40) * 8))
                                (&uStack_548,lVar34 + 0x38);
                    }
                    *(undefined4 *)(lVar34 + 0x40) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 0x18) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 0x18) * 8))
                                (&uStack_548,lVar34 + 0x10);
                    }
                    *(undefined4 *)(lVar34 + 0x18) = 0xffffffff;
                    if ((ulong)*(uint *)(lVar34 + 8) != 0xffffffff) {
                      (**(code **)(&UNK_0f472ab8 + (ulong)*(uint *)(lVar34 + 8) * 8))
                                (&uStack_548,lVar34);
                    }
                    *(undefined4 *)(lVar34 + 8) = 0xffffffff;
                    lVar34 = lVar34 + 0x138;
                  } while (lVar34 != lVar31);
                  lVar34 = puVar7[1];
                  pbVar28 = param_4;
                }
                pbVar36 = pbVar36 + 0x138;
                puVar7[1] = lVar35;
                puVar7[2] = pbVar36;
                lVar31 = puVar7[3];
                puVar7[3] = pbStack_6b8 + uVar23 * 0x138;
                puVar19 = puVar7;
                pcVar18 = pcStack_668;
                if (lVar34 != 0) {
                  func_0x0412a280(lVar34,lVar31 - lVar34);
                  pcVar18 = pcStack_668;
                }
              }
              puVar19[2] = pbVar36;
            }
          }
          pcVar21 = *(code **)pcStack_578;
        }
      }
      puVar19 = puStack_580 + 1;
      pcVar21 = pcStack_668;
    } while (puVar19 != puStack_588);
  }
  if (pcStack_5a8 == (code *)0x0) {
    pcVar18 = (code *)0x0;
  }
  else {
    pbVar6 = pbVar28 + 0x10;
    pcVar21 = pcStack_5a8;
    do {
      plVar17 = *(long **)(pcVar21 + 0x38);
      pcStack_668 = pcVar21;
      if (plVar17 != (long *)0x0) {
LAB_0d5059a0:
        plVar26 = plVar17 + 0x25;
        pbVar37 = (byte *)plVar17[0x25];
        pbVar36 = *(byte **)(pbVar28 + 8);
        if (pbVar36 != (byte *)0x0) {
          uVar23 = (long)pbVar36 - ((ulong)pbVar36 >> 1 & 0x5555555555555555);
          uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
          uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar23 >> 0x38 < 2) {
            pbStack_6b8 = (byte *)((ulong)(pbVar36 + -1) & (ulong)pbVar37);
          }
          else {
            pbStack_6b8 = pbVar37;
            if (pbVar36 <= pbVar37) {
              if (((ulong)pbVar37 | (ulong)pbVar36) >> 0x20 == 0) {
                pbStack_6b8 = (byte *)(((ulong)pbVar37 & 0xffffffff) % ((ulong)pbVar36 & 0xffffffff)
                                      );
              }
              else {
                pbStack_6b8 = (byte *)((ulong)pbVar37 % (ulong)pbVar36);
              }
            }
          }
          plVar30 = *(long **)(*(long *)pbVar28 + (long)pbStack_6b8 * 8);
          if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
            if ((byte)(uVar23 >> 0x38) < 2) {
              do {
                if ((byte *)plVar30[1] == pbVar37) {
                  if ((byte *)plVar30[2] == pbVar37) {
                    plVar33 = plVar30 + 2;
                    if (((long *)plVar30[6] == plVar26) && ((long *)plVar17[0x29] == plVar33))
                    goto LAB_0d50624b;
                    bVar14 = *(byte *)(plVar30 + 3);
                    if ((bVar14 & 1) == 0) {
                      uVar23 = (ulong)(bVar14 >> 1);
                      uVar29 = (ulong)*(byte *)(plVar17 + 0x26);
                      if ((*(byte *)(plVar17 + 0x26) & 1) != 0) goto LAB_0d505c5b;
LAB_0d505c26:
                      if (uVar23 != uVar29 >> 1) goto LAB_0d505bcd;
                    }
                    else {
                      uVar23 = plVar30[4];
                      uVar29 = (ulong)*(byte *)(plVar17 + 0x26);
                      if ((*(byte *)(plVar17 + 0x26) & 1) == 0) goto LAB_0d505c26;
LAB_0d505c5b:
                      if (uVar23 != plVar17[0x27]) goto LAB_0d505bcd;
                    }
                    if ((bVar14 & 1) == 0) {
                      lVar31 = (long)plVar30 + 0x19;
                    }
                    else {
                      lVar31 = plVar30[5];
                    }
                    lVar34 = (long)plVar17 + 0x131;
                    if ((uVar29 & 1) != 0) {
                      lVar34 = plVar17[0x28];
                    }
                    iVar16 = func_0x0eee3000(lVar31,lVar34);
                    if (iVar16 == 0) goto LAB_0d50635f;
                  }
LAB_0d505bcd:
                  plVar30[6] = 0;
                }
                else if ((byte *)((ulong)plVar30[1] & (ulong)(pbVar36 + -1)) != pbStack_6b8) break;
                plVar30 = (long *)*plVar30;
              } while (plVar30 != (long *)0x0);
            }
            else {
              do {
                pbVar28 = (byte *)plVar30[1];
                if (pbVar28 == pbVar37) {
                  if ((byte *)plVar30[2] == pbVar37) {
                    plVar33 = plVar30 + 2;
                    if (((long *)plVar30[6] == plVar26) && ((long *)plVar17[0x29] == plVar33))
                    goto LAB_0d50624b;
                    bVar14 = *(byte *)(plVar30 + 3);
                    if ((bVar14 & 1) == 0) {
                      uVar23 = (ulong)(bVar14 >> 1);
                      uVar29 = (ulong)*(byte *)(plVar17 + 0x26);
                      if ((*(byte *)(plVar17 + 0x26) & 1) != 0) goto LAB_0d505b5d;
LAB_0d505b0e:
                      if (uVar23 != uVar29 >> 1) goto LAB_0d505ab5;
                    }
                    else {
                      uVar23 = plVar30[4];
                      uVar29 = (ulong)*(byte *)(plVar17 + 0x26);
                      if ((*(byte *)(plVar17 + 0x26) & 1) == 0) goto LAB_0d505b0e;
LAB_0d505b5d:
                      if (uVar23 != plVar17[0x27]) goto LAB_0d505ab5;
                    }
                    if ((bVar14 & 1) == 0) {
                      lVar31 = (long)plVar30 + 0x19;
                    }
                    else {
                      lVar31 = plVar30[5];
                    }
                    lVar34 = (long)plVar17 + 0x131;
                    if ((uVar29 & 1) != 0) {
                      lVar34 = plVar17[0x28];
                    }
                    iVar16 = func_0x0eee3000(lVar31,lVar34);
                    if (iVar16 == 0) goto LAB_0d50635f;
                  }
LAB_0d505ab5:
                  plVar30[6] = 0;
                }
                else {
                  if (pbVar36 <= pbVar28) {
                    if (((ulong)pbVar28 | (ulong)pbVar36) >> 0x20 == 0) {
                      if ((byte *)(((ulong)pbVar28 & 0xffffffff) % ((ulong)pbVar36 & 0xffffffff)) ==
                          pbStack_6b8) goto LAB_0d505abd;
                      break;
                    }
                    pbVar28 = (byte *)((ulong)pbVar28 % (ulong)pbVar36);
                  }
                  if (pbVar28 != pbStack_6b8) break;
                }
LAB_0d505abd:
                plVar30 = (long *)*plVar30;
              } while (plVar30 != (long *)0x0);
            }
          }
        }
        plStack_6c0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x170);
        if (plStack_6c0 == (long *)0x0) {
          func_0x0eec74c0(0x170,0);
        }
        *plStack_6c0 = 0;
        plStack_6c0[1] = (long)pbVar37;
        pbVar28 = (byte *)(plVar17 + 0x26);
        plStack_6c0[2] = 0;
        plStack_6c0[3] = 0;
        plStack_6c0[4] = 0;
        plStack_6c0[5] = 0;
        plStack_6c0[6] = 0;
        if (plStack_6c0 + 2 != plVar26) {
          if ((*pbVar28 & 1) == 0) {
            plStack_6c0[5] = plVar17[0x28];
            uVar8 = *(undefined4 *)((long)plVar17 + 0x134);
            lVar31 = plVar17[0x27];
            uVar9 = *(undefined4 *)((long)plVar17 + 0x13c);
            *(undefined4 *)(plStack_6c0 + 3) = *(undefined4 *)pbVar28;
            *(undefined4 *)((long)plStack_6c0 + 0x1c) = uVar8;
            *(int *)(plStack_6c0 + 4) = (int)lVar31;
            *(undefined4 *)((long)plStack_6c0 + 0x24) = uVar9;
          }
          else {
            func_0x04885070(plStack_6c0 + 3,plVar17[0x28],plVar17[0x27]);
          }
        }
        plStack_6c0[2] = *plVar26;
        func_0x0535c580(plStack_6c0 + 7,plVar17 + 7);
        plStack_6c0[0x24] = plVar17[0x24];
        lVar31 = plVar17[0x23];
        plStack_6c0[0x22] = plVar17[0x22];
        plStack_6c0[0x23] = lVar31;
        plStack_6c0[0x25] = 0;
        plStack_6c0[0x26] = 0;
        plStack_6c0[0x27] = 0;
        plStack_6c0[0x28] = 0;
        plStack_6c0[0x29] = 0;
        if (plStack_6c0 != plVar17) {
          if ((*pbVar28 & 1) == 0) {
            plStack_6c0[0x28] = plVar17[0x28];
            uVar8 = *(undefined4 *)((long)plVar17 + 0x134);
            lVar31 = plVar17[0x27];
            uVar9 = *(undefined4 *)((long)plVar17 + 0x13c);
            *(undefined4 *)(plStack_6c0 + 0x26) = *(undefined4 *)pbVar28;
            *(undefined4 *)((long)plStack_6c0 + 0x134) = uVar8;
            *(int *)(plStack_6c0 + 0x27) = (int)lVar31;
            *(undefined4 *)((long)plStack_6c0 + 0x13c) = uVar9;
          }
          else {
            func_0x04885070(plStack_6c0 + 0x26,plVar17[0x28],plVar17[0x27]);
          }
        }
        plStack_6c0[0x25] = plVar17[0x25];
        if ((*(byte *)(plVar17 + 0x2a) & 1) == 0) {
          plStack_6c0[0x2c] = plVar17[0x2c];
          lVar31 = plVar17[0x2b];
          plStack_6c0[0x2a] = plVar17[0x2a];
          plStack_6c0[0x2b] = lVar31;
        }
        else {
          func_0x0412e5e0(plStack_6c0 + 0x2a,plVar17[0x2c],plVar17[0x2b]);
        }
        *(char *)(plStack_6c0 + 0x2d) = (char)plVar17[0x2d];
        if ((long)pbVar36 < 0) {
          fVar41 = (float)pbVar36;
          fVar40 = *(float *)(param_4 + 0x20);
          if (pbVar36 != (byte *)0x0) goto LAB_0d505ee2;
LAB_0d505f00:
          uVar23 = 1;
          if ((byte *)0x2 < pbVar36) {
            uVar23 = (ulong)(((ulong)pbVar36 & (ulong)(pbVar36 + -1)) != 0);
          }
          pbVar36 = (byte *)((long)pbVar36 * 2 | uVar23);
          fVar40 = (float)func_0x0eee3ab0((float)(*(long *)(param_4 + 0x18) + 1) / fVar40);
          pbVar28 = (byte *)((long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40);
          if (pbVar28 < pbVar36) {
            pbVar28 = pbVar36;
          }
          pbVar36 = (byte *)0x2;
          if ((pbVar28 == (byte *)0x1) ||
             (pbVar36 = pbVar28, ((ulong)pbVar28 & (ulong)(pbVar28 + -1)) == 0)) {
            pbVar28 = *(byte **)(param_4 + 8);
            bVar39 = pbVar36 < pbVar28;
            if (pbVar36 <= pbVar28) goto LAB_0d506071;
LAB_0d505f79:
            pbVar28 = param_4;
            if ((ulong)pbVar36 >> 0x3d != 0) goto LAB_0d5063fc;
            lVar31 = (long)pbVar36 * 8;
            lVar34 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
            if (lVar34 == 0) {
              func_0x0eec74c0(lVar31,0);
            }
            lVar35 = *(long *)param_4;
            *(long *)param_4 = lVar34;
            if (lVar35 != 0) {
              func_0x0412a280(lVar35,*(long *)(param_4 + 8) << 3);
              lVar34 = *(long *)param_4;
            }
            *(byte **)(param_4 + 8) = pbVar36;
            func_0x0eee2dd0(lVar34,0,lVar31);
            plVar26 = *(long **)(param_4 + 0x10);
            if (plVar26 != (long *)0x0) {
              pbVar24 = (byte *)plVar26[1];
              pbVar28 = pbVar36 + -1;
              if (((ulong)pbVar36 & (ulong)pbVar28) == 0) {
                *(byte **)(lVar34 + ((ulong)pbVar24 & (ulong)pbVar28) * 8) = pbVar6;
                uVar23 = (ulong)pbVar24 & (ulong)pbVar28;
                while (plVar30 = plVar26, plVar26 = (long *)*plVar30, plVar26 != (long *)0x0) {
                  uVar29 = plVar26[1] & (ulong)pbVar28;
                  if (uVar29 != uVar23) {
                    if (*(long *)(lVar34 + uVar29 * 8) == 0) {
                      *(long **)(lVar34 + uVar29 * 8) = plVar30;
                      uVar23 = uVar29;
                    }
                    else {
                      *plVar30 = *plVar26;
                      *plVar26 = **(undefined8 **)(lVar34 + uVar29 * 8);
                      **(long **)(lVar34 + uVar29 * 8) = (long)plVar26;
                      plVar26 = plVar30;
                    }
                  }
                }
              }
              else {
                if (pbVar36 <= pbVar24) {
                  if (((ulong)pbVar24 | (ulong)pbVar36) >> 0x20 == 0) {
                    pbVar24 = (byte *)(((ulong)pbVar24 & 0xffffffff) % ((ulong)pbVar36 & 0xffffffff)
                                      );
                  }
                  else {
                    pbVar24 = (byte *)((ulong)pbVar24 % (ulong)pbVar36);
                  }
                }
                *(byte **)(lVar34 + (long)pbVar24 * 8) = pbVar6;
                plVar30 = (long *)*plVar26;
                while (plVar30 != (long *)0x0) {
                  pbVar28 = (byte *)plVar30[1];
                  if (pbVar36 <= pbVar28) {
                    if (((ulong)pbVar28 | (ulong)pbVar36) >> 0x20 == 0) {
                      pbVar28 = (byte *)(((ulong)pbVar28 & 0xffffffff) %
                                        ((ulong)pbVar36 & 0xffffffff));
                    }
                    else {
                      pbVar28 = (byte *)((ulong)pbVar28 % (ulong)pbVar36);
                    }
                  }
                  if (pbVar28 != pbVar24) {
                    if (*(long *)(lVar34 + (long)pbVar28 * 8) == 0) {
                      *(long **)(lVar34 + (long)pbVar28 * 8) = plVar26;
                      pbVar24 = pbVar28;
                    }
                    else {
                      *plVar26 = *plVar30;
                      *plVar30 = **(long **)(lVar34 + (long)pbVar28 * 8);
                      **(undefined8 **)(lVar34 + (long)pbVar28 * 8) = plVar30;
                      plVar30 = plVar26;
                    }
                  }
                  plVar26 = plVar30;
                  plVar30 = (long *)*plVar26;
                }
              }
            }
          }
          else {
            pbVar36 = (byte *)func_0x0412c3f0();
            pbVar28 = *(byte **)(param_4 + 8);
            bVar39 = pbVar36 < pbVar28;
            if (pbVar28 < pbVar36) goto LAB_0d505f79;
LAB_0d506071:
            if (bVar39) {
              fVar40 = (float)func_0x0eee3ab0((float)*(ulong *)(param_4 + 0x18) /
                                              *(float *)(param_4 + 0x20));
              pbVar24 = (byte *)((long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f |
                                (long)fVar40);
              if ((pbVar28 < (byte *)0x3) ||
                 (uVar23 = (long)pbVar28 - ((ulong)pbVar28 >> 1 & 0x5555555555555555),
                 uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333),
                 1 < (byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                pbVar24 = (byte *)func_0x0412c3f0(pbVar24);
                if (pbVar24 < pbVar36) {
                  pbVar24 = pbVar36;
                }
              }
              else {
                if ((byte *)0x1 < pbVar24) {
                  lVar31 = 0x3f;
                  if (pbVar24 + -1 != (byte *)0x0) {
                    for (; (ulong)(pbVar24 + -1) >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  pbVar24 = (byte *)(1L << (-((byte)lVar31 ^ 0x3f) & 0x3f));
                }
                if (pbVar24 < pbVar36) {
                  pbVar24 = pbVar36;
                }
              }
              pbVar36 = pbVar24;
              if (pbVar36 < pbVar28) {
                if (pbVar36 != (byte *)0x0) goto LAB_0d505f79;
                param_4[0] = 0;
                param_4[1] = 0;
                param_4[2] = 0;
                param_4[3] = 0;
                param_4[4] = 0;
                param_4[5] = 0;
                param_4[6] = 0;
                param_4[7] = 0;
                if (*(long *)param_4 != 0) {
                  func_0x0412a280(*(long *)param_4,*(long *)(param_4 + 8) << 3);
                }
                param_4[8] = 0;
                param_4[9] = 0;
                param_4[10] = 0;
                param_4[0xb] = 0;
                param_4[0xc] = 0;
                param_4[0xd] = 0;
                param_4[0xe] = 0;
                param_4[0xf] = 0;
              }
            }
          }
          pbVar36 = *(byte **)(param_4 + 8);
          if (((ulong)pbVar36 & (ulong)(pbVar36 + -1)) == 0) {
            pbVar28 = (byte *)((ulong)pbVar37 & (ulong)(pbVar36 + -1));
          }
          else {
            pbVar28 = pbVar37;
            if (pbVar36 <= pbVar37) {
              if (((ulong)pbVar37 | (ulong)pbVar36) >> 0x20 == 0) {
                pbVar28 = (byte *)(((ulong)pbVar37 & 0xffffffff) % ((ulong)pbVar36 & 0xffffffff));
              }
              else {
                pbVar28 = (byte *)((ulong)pbVar37 % (ulong)pbVar36);
              }
            }
          }
        }
        else {
          fVar41 = (float)(long)pbVar36;
          fVar40 = *(float *)(param_4 + 0x20);
          if (pbVar36 == (byte *)0x0) goto LAB_0d505f00;
LAB_0d505ee2:
          pbVar28 = pbStack_6b8;
          if (fVar41 * fVar40 < (float)(*(long *)(param_4 + 0x18) + 1)) goto LAB_0d505f00;
        }
        lVar31 = *(long *)param_4;
        plVar26 = *(long **)(lVar31 + (long)pbVar28 * 8);
        if (plVar26 == (long *)0x0) {
          *plStack_6c0 = *(long *)pbVar6;
          *(long **)pbVar6 = plStack_6c0;
          *(byte **)(lVar31 + (long)pbVar28 * 8) = pbVar6;
          if (*plStack_6c0 != 0) {
            pbVar37 = *(byte **)(*plStack_6c0 + 8);
            if (((ulong)pbVar36 & (ulong)(pbVar36 + -1)) == 0) {
              *(long **)(lVar31 + ((ulong)pbVar37 & (ulong)(pbVar36 + -1)) * 8) = plStack_6c0;
            }
            else {
              if (pbVar36 <= pbVar37) {
                if (((ulong)pbVar37 | (ulong)pbVar36) >> 0x20 == 0) {
                  *(long **)(lVar31 + (((ulong)pbVar37 & 0xffffffff) % ((ulong)pbVar36 & 0xffffffff)
                                      ) * 8) = plStack_6c0;
                  goto LAB_0d506246;
                }
                pbVar37 = (byte *)((ulong)pbVar37 % (ulong)pbVar36);
              }
              *(long **)(lVar31 + (long)pbVar37 * 8) = plStack_6c0;
            }
          }
        }
        else {
          *plStack_6c0 = *plVar26;
          *plVar26 = (long)plStack_6c0;
        }
LAB_0d506246:
        *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 1;
        goto LAB_0d50624b;
      }
LAB_0d505980:
      pcVar21 = *(code **)pcStack_668;
      pcVar18 = pcStack_5a8;
    } while (pcVar21 != (code *)0x0);
  }
  func_0x0d52aea0(pcVar18);
  lVar31 = lStack_5b8;
  lStack_5b8 = 0;
  if (lVar31 != 0) {
    func_0x0412a280(lVar31,lStack_5b0 << 3);
  }
  return;
code_r0x0d504e69:
  pbVar37 = pbVar37 + 0x10;
  if (pbVar37 == pbVar6) goto LAB_0d504e72;
  goto LAB_0d504e60;
LAB_0d50635f:
  plVar30[6] = (long)plVar26;
  plVar17[0x29] = (long)plVar33;
LAB_0d50624b:
  plVar17 = (long *)*plVar17;
  pbVar28 = param_4;
  if (plVar17 == (long *)0x0) goto LAB_0d505980;
  goto LAB_0d5059a0;
LAB_0d5063fc:
  func_0x04882eb0();
LAB_0d506401:
  func_0x04882eb0();
LAB_0d506406:
  func_0x049cff50();
LAB_0d50640b:
  iVar16 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar16 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    pbVar28 = param_4;
  }
  goto LAB_0d504aed;
}



/* ---- referenced strings ----
 * 0x11b0484  AutomaticFeatureRules
 */
