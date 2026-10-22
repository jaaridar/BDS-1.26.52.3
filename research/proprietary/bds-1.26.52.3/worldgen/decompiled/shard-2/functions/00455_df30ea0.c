/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe030ea0 (ELF vaddr 0xdf30ea0)
 * Label: caller-of-callee
 * Body:  [[0e030ea0, 0e0315b6] [0e0315c0, 0e031742] [0e031750, 0e031785] [0e031790, 0e031884] [0e031890, 0e031a31] [0e031a40, 0e031b48] [0e031b50, 0e031ba8] [0e031bb0, 0e031bc6] [0e031bd0, 0e031c16] [0e031c20, 0e031e56] [0e031e60, 0e03283e] [0e032840, 0e032a31] [0e032a40, 0e032ca3] [0e032cb0, 0e032f9c] [0e032fa0, 0e033292] [0e0332a0, 0e033435] [0e033441, 0e033452] [0e033679, 0e0336ab] [0e0336eb, 0e033719]]
 * Ghidra: FUN_0e030ea0
 */


/* WARNING: Removing unreachable block (ram,0x0e0322ba) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e030ea0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,ulong *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  uint *puVar30;
  byte *pbVar31;
  uint uVar32;
  long *plVar33;
  long *plVar34;
  undefined8 *puVar35;
  uint *puVar36;
  ulong unaff_R15;
  long *plVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  long *plStack_448;
  undefined8 uStack_438;
  undefined1 auStack_430 [4];
  undefined4 uStack_42c;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  uint *puStack_408;
  ulong uStack_400;
  ulong *puStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  byte *pbStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  code *pcStack_3a0;
  int iStack_398;
  undefined1 uStack_394;
  long lStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  long lStack_330;
  uint uStack_328;
  ulong uStack_320;
  undefined1 auStack_318 [16];
  undefined *puStack_308;
  undefined *puStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 *puStack_2e8;
  undefined4 uStack_2e0;
  byte bStack_2dc;
  undefined1 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  byte bStack_2b4;
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  code *pcStack_290;
  undefined4 uStack_288;
  char cStack_284;
  long lStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  undefined1 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar10 = (code *)param_3[7];
  plStack_3f0 = param_2;
  uStack_340 = param_4;
  if (pcVar10 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar38 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar38 = (undefined *)param_3[7] == &UNK_0e034db0;
    }
    param_3[2] = (long)&UNK_0e034f50;
    *(undefined4 *)(param_3 + 4) = 0x808c6b19;
    param_3[3] = (long)&UNK_0e0351e0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x28);
      param_2 = plStack_3f0;
    }
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    *(undefined4 *)(plVar15 + 4) = 0x3f800000;
    *param_3 = (long)plVar15;
    pcVar10 = (code *)&UNK_0e034db0;
    param_3[7] = (long)&UNK_0e034db0;
    if (bVar38) {
      lVar18 = param_3[6];
    }
    else {
      lVar18 = 0;
    }
    param_3[6] = lVar18;
    cVar8 = '\x01';
    plStack_448 = plVar15;
LAB_0e030fcc:
    puStack_300 = &UNK_0f012348;
    if (plStack_448 == (long *)0x0) goto LAB_0e030fd3;
  }
  else {
    cVar8 = *(char *)((long)param_3 + 0x24);
    plVar15 = (long *)*param_3;
    plStack_448 = plVar15;
    if (cVar8 == '\x02') {
      plStack_448 = param_3;
    }
    if ((int)param_3[4] == -0x7f7394e7) goto LAB_0e030fcc;
LAB_0e030fd3:
    puStack_300 = &UNK_0f012348;
    lVar18 = param_3[5];
    lVar13 = param_3[6];
    if (lVar13 == 0) {
      (*pcVar10)(0,param_3,0);
      lVar13 = param_3[6];
      cVar8 = *(char *)((long)param_3 + 0x24);
      plVar15 = (long *)*param_3;
    }
    if (cVar8 == '\x02') {
      plVar15 = param_3;
    }
    plStack_448 = (long *)func_0x0488e200(lVar18,lVar13,0x808c6b19,plVar15);
  }
  uStack_2d0 = *param_5;
  uStack_2c8 = param_5[1];
  plVar15 = (long *)param_5[2];
  uStack_2f8 = uStack_2d0;
  uStack_2f0 = uStack_2c8;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
    puStack_2e8 = (undefined8 *)0x0;
  }
  else {
    puStack_2e8 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0);
    uStack_2d0 = *param_5;
    uStack_2c8 = param_5[1];
    plVar15 = (long *)param_5[2];
  }
  uStack_2e0 = (undefined4)param_5[3];
  bStack_2dc = *(byte *)((long)param_5 + 0x1c);
  uStack_2d8 = 1;
  puStack_308 = &UNK_0f4a9d48;
  if (plVar15 == (long *)0x0) {
    uStack_2c0 = 0;
  }
  else {
    uStack_2c0 = (**(code **)(*plVar15 + 0x30))(plVar15,1);
  }
  uStack_2b8 = (undefined4)param_5[3];
  bStack_2b4 = *(byte *)((long)param_5 + 0x1c);
  uStack_2b0 = 1;
  bVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_3f8 = param_5;
  if (bVar7 == 1) {
    uVar11 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar12 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar12 < uVar11)) {
      uStack_320 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_320);
      if ((uStack_320 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_320 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_330,*param_5);
    if (uVar11 == 0) {
      return;
    }
    plStack_348 = plStack_448 + 2;
    uStack_370 = 0;
    plStack_3d8 = param_3;
    uStack_378 = uVar11;
LAB_0e0312a8:
    uVar32 = uStack_328;
    lVar18 = lStack_330;
    if (uStack_328 <= *(uint *)(lStack_330 + 0x2b0) && *(uint *)(lStack_330 + 0x2b0) != 0xffffffff)
    {
      return;
    }
    auVar41 = (**(code **)(*plStack_3f0 + 0xc0))();
    puVar35 = puStack_2e8;
    auStack_318 = auVar41;
    if (puStack_2e8 != (undefined8 *)0x0) {
      lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar18 == 0) {
        func_0x048b0de0(&uStack_3b8,&uStack_438);
        _DAT_0f54fd90 = (undefined4)uStack_3b8;
        uRam000000000f54fd94 = uStack_3b8._4_4_;
        uVar3 = (undefined4)uStack_3b0;
        uVar4 = uStack_3b0._4_4_;
        uStack_3b8 = (long *)0x0;
        uStack_3b0 = (long *)0x0;
        plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar3;
        uRam000000000f54fd9c = uVar4;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar17 = plVar15 + 1;
          lVar18 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN_0412c2d0(plVar15);
          }
        }
        plVar15 = uStack_3b0;
        if (uStack_3b0 != (long *)0x0) {
          LOCK();
          plVar17 = uStack_3b0 + 1;
          lVar18 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*uStack_3b0 + 0x10))(uStack_3b0);
            FUN_0412c2d0(plVar15);
          }
        }
        lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar11 = uStack_378;
      }
      puStack_298 = (undefined8 *)&UNK_05ea5bd0;
      uStack_288 = 0x989eedf9;
      pcStack_290 = (code *)0x0;
      cStack_284 = '\x04';
      auStack_2a8 = (undefined1  [8])auStack_318;
      uStack_278 = 0;
      puStack_270 = &UNK_05ea5bb0;
      lStack_280 = lVar18;
      (**(code **)*puVar35)(puVar35,auStack_2a8,uStack_2f8);
      lVar18 = lStack_330;
      uVar32 = uStack_328;
      if (pcStack_290 != (code *)0x0) {
        (*pcStack_290)(auStack_2a8);
        lVar18 = lStack_330;
        uVar32 = uStack_328;
      }
    }
    uVar5 = auStack_318._8_8_;
    uVar19 = auStack_318._0_8_;
    if ((*(uint *)(lVar18 + 0x2b0) != 0xffffffff) && (uVar32 <= *(uint *)(lVar18 + 0x2b0)))
    goto LAB_0e03129c;
    uVar11 = *param_5;
    uStack_3c0 = 0;
    if (auStack_318._0_8_ == 0) {
      uVar12 = (auStack_318._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar18 = auStack_318._8_8_ + 9;
      param_5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && param_5 == (ulong *)0x0) {
        func_0x0eec74c0(lVar18,8);
      }
      *param_5 = uVar5;
      func_0x0eee2f00(param_5 + 1,uVar19,uVar5);
      *(byte *)((long)param_5 + uVar5 + 8) = 0;
      uVar12 = (ulong)(param_5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_3c0 = uVar12;
    puVar14 = (uint *)func_0x0ed6d180(uVar11,&uStack_3c0,0);
    if ((uStack_3c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3c0 & 0xff00ffffffffffff) - 8);
    }
    uVar11 = auStack_318._8_8_;
    uVar19 = auStack_318._0_8_;
    uStack_3c0 = 0;
    puStack_408 = puVar14;
    if ((ulong)auStack_318._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_318._8_8_ < 0x17) {
        uStack_438 = (uint *)CONCAT71(uStack_438._1_7_,auStack_318[8] * '\x02');
        uVar25 = (long)&uStack_438 + 1;
        if (auStack_318._8_8_ != 0) goto LAB_0e031607;
      }
      else {
        uVar12 = (auStack_318._8_8_ | 7) + 1;
        if ((auStack_318._8_8_ | 7) == 0x17) {
          uVar12 = 0x1a;
        }
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (uVar25 == 0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_438 = (uint *)(uVar12 | 1);
        _auStack_430 = uVar11;
        uStack_428 = uVar25;
LAB_0e031607:
        func_0x0eee2ee0(uVar25,uVar19,uVar11);
      }
      *(undefined1 *)(uVar25 + uVar11) = 0;
      puStack_298 = (undefined8 *)0x0;
      pcStack_290 = (code *)0x0;
      auStack_2a8 = (undefined1  [8])0x0;
      uStack_2a0 = 0;
      uStack_288 = 0x3f800000;
      uStack_1f0 = 2;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_110 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_e8 = 0x3f800000;
      uStack_50 = 2;
      uStack_40 = 0;
      uStack_48 = 0;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2a8);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(0x2a8,0);
      }
      uStack_3b0 = plStack_448;
      puStack_3a8 = (undefined *)0x0;
      pbVar31 = (byte *)(plVar15 + 3);
      *plVar15 = 0;
      plVar15[1] = 0;
      plVar15[2] = 0;
      uVar2 = (undefined1)uStack_438;
      uStack_3b8 = plVar15;
      if (((ulong)uStack_438 & 1) == 0) {
        plVar15[5] = uStack_428;
        *(undefined4 *)pbVar31 = (undefined4)uStack_438;
        *(undefined4 *)((long)plVar15 + 0x1c) = uStack_438._4_4_;
        *(undefined1 (*) [4])(plVar15 + 4) = auStack_430;
        *(undefined4 *)((long)plVar15 + 0x24) = uStack_42c;
      }
      else {
        func_0x0412e5e0(pbVar31,uStack_428,_auStack_430);
      }
      plVar15[6] = 0;
      bVar7 = *(byte *)(plVar15 + 3);
      pbStack_3e0 = pbVar31;
      if ((bVar7 & 1) == 0) {
        if (bVar7 >> 1 != 0) goto LAB_0e0317a2;
LAB_0e031890:
        uVar11 = 0;
      }
      else {
        if (plVar15[4] == 0) goto LAB_0e031890;
LAB_0e0317a2:
        if ((bVar7 & 1) == 0) {
          pbVar31 = (byte *)((long)plVar15 + 0x19);
          if (pbVar31 != (byte *)0x0) goto LAB_0e0317c1;
          goto LAB_0e031890;
        }
        pbVar31 = (byte *)plVar15[5];
        if (pbVar31 == (byte *)0x0) goto LAB_0e031890;
LAB_0e0317c1:
        if (*pbVar31 == 0) goto LAB_0e031890;
        uVar12 = func_0x0eee2e90(pbVar31);
        uVar11 = 0xcbf29ce484222325;
        if (uVar12 != 0) {
          if (7 < uVar12) {
            uVar25 = uVar12 & 0xfffffffffffffff8;
            do {
              uVar11 = (((((((uVar11 * 0x100000001b3 ^ (ulong)*pbVar31) * 0x100000001b3 ^
                            (ulong)pbVar31[1]) * 0x100000001b3 ^ (ulong)pbVar31[2]) * 0x100000001b3
                          ^ (ulong)pbVar31[3]) * 0x100000001b3 ^ (ulong)pbVar31[4]) * 0x100000001b3
                        ^ (ulong)pbVar31[5]) * 0x100000001b3 ^ (ulong)pbVar31[6]) * 0x100000001b3 ^
                       (ulong)pbVar31[7];
              pbVar31 = pbVar31 + 8;
              uVar25 = uVar25 - 8;
            } while (uVar25 != 0);
          }
          if ((uVar12 & 7) != 0) {
            uVar25 = 0;
            do {
              uVar11 = uVar11 * 0x100000001b3 ^ (ulong)pbVar31[uVar25];
              uVar25 = uVar25 + 1;
            } while (((uint)uVar12 & 7) != uVar25);
          }
        }
      }
      uStack_400 = CONCAT71(uStack_400._1_7_,uVar2) & 0xffffffffffffff01;
      plVar15[2] = uVar11;
      plVar17 = plVar15 + 7;
      func_0x0e034a70(plVar17,auStack_2a8);
      puStack_3a8 = (undefined *)CONCAT71(puStack_3a8._1_7_,1);
      uVar11 = plVar15[2];
      plVar15[1] = uVar11;
      uVar12 = plStack_448[1];
      if (uVar12 != 0) {
        uVar25 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
        uVar25 = ((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar25 >> 0x38 < 2) {
          uVar26 = uVar12 - 1 & uVar11;
        }
        else {
          uVar26 = uVar11;
          if (uVar12 <= uVar11) {
            if ((uVar11 | uVar12) >> 0x20 == 0) {
              uVar26 = (uVar11 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar26 = uVar11 % uVar12;
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_448 + uVar26 * 8);
        if ((puVar35 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar35, plVar34 != (long *)0x0))
        {
          plVar33 = plVar15 + 2;
          plStack_3d0 = (long *)((long)plVar15 + 0x19);
          plStack_3e8 = plVar33;
          if ((byte)(uVar25 >> 0x38) < 2) {
            uVar25 = uVar12 - 1;
            uStack_350 = uVar25;
            do {
              if (plVar34[1] == uVar11) {
                if (plVar34[2] == uVar11) {
                  plVar37 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar33) && ((long *)plVar15[6] == plVar37))
                  goto LAB_0e032070;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar29 = (ulong)(bVar7 >> 1);
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0e031b68;
LAB_0e031b3e:
                    if (uVar29 != uVar23 >> 1) goto LAB_0e031ae8;
                  }
                  else {
                    uVar29 = plVar34[4];
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0e031b3e;
LAB_0e031b68:
                    if (uVar29 != plVar15[4]) goto LAB_0e031ae8;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_3d0;
                  if ((uVar23 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  uVar25 = uStack_350;
                  plVar33 = plStack_3e8;
                  if (iVar9 == 0) goto LAB_0e0320de;
                }
LAB_0e031ae8:
                plVar34[6] = 0;
              }
              else if ((plVar34[1] & uVar25) != uVar26) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar25 = plVar34[1];
              if (uVar25 == uVar11) {
                if (plVar34[2] == uVar11) {
                  plVar37 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar33) && ((long *)plVar15[6] == plVar37))
                  goto LAB_0e032070;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar25 = (ulong)(bVar7 >> 1);
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0e031a75;
LAB_0e031a27:
                    if (uVar25 != uVar29 >> 1) goto LAB_0e0319d1;
                  }
                  else {
                    uVar25 = plVar34[4];
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0e031a27;
LAB_0e031a75:
                    if (uVar25 != plVar15[4]) goto LAB_0e0319d1;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_3d0;
                  if ((uVar29 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  plVar33 = plStack_3e8;
                  if (iVar9 == 0) goto LAB_0e0320de;
                }
LAB_0e0319d1:
                plVar34[6] = 0;
              }
              else {
                if (uVar12 <= uVar25) {
                  if ((uVar25 | uVar12) >> 0x20 == 0) {
                    if ((uVar25 & 0xffffffff) % (uVar12 & 0xffffffff) == uVar26) goto LAB_0e0319da;
                    break;
                  }
                  uVar25 = uVar25 % uVar12;
                }
                if (uVar25 != uVar26) break;
              }
LAB_0e0319da:
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
      }
      plVar17 = plStack_3d8;
      param_5 = puStack_3f8;
      if ((long)uVar12 < 0) {
        fVar40 = (float)uVar12;
        fVar39 = *(float *)(plStack_448 + 4);
        if (uVar12 == 0) goto LAB_0e031c41;
LAB_0e031c34:
        if (fVar40 * fVar39 < (float)(plStack_448[3] + 1)) goto LAB_0e031c41;
        goto LAB_0e031de0;
      }
      fVar40 = (float)(long)uVar12;
      fVar39 = *(float *)(plStack_448 + 4);
      if (uVar12 != 0) goto LAB_0e031c34;
LAB_0e031c41:
      uVar11 = 1;
      if (2 < uVar12) {
        uVar11 = (ulong)((uVar12 & uVar12 - 1) != 0);
      }
      uVar11 = uVar12 * 2 | uVar11;
      fVar39 = (float)func_0x0eee3ab0((float)(plStack_448[3] + 1) / fVar39);
      uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
      if (uVar25 < uVar11) {
        uVar25 = uVar11;
      }
      uVar11 = 2;
      if ((uVar25 == 1) || (uVar11 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
        bVar38 = uVar11 < uVar12;
        if (uVar11 <= uVar12) goto LAB_0e031cd4;
LAB_0e031cae:
        func_0x0e02f680(plStack_448,uVar11);
      }
      else {
        uVar11 = func_0x0412c3f0();
        uVar12 = plStack_448[1];
        bVar38 = uVar11 < uVar12;
        if (uVar12 < uVar11) goto LAB_0e031cae;
LAB_0e031cd4:
        if (bVar38) {
          fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_448[3] / *(float *)(plStack_448 + 4)
                                         );
          uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
          if ((uVar12 < 3) ||
             (uVar26 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
             uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333),
             1 < (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar25 = func_0x0412c3f0(uVar25);
          }
          else if (1 < uVar25) {
            lVar18 = 0x3f;
            if (uVar25 - 1 != 0) {
              for (; uVar25 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar25 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
          }
          if (uVar11 <= uVar25) {
            uVar11 = uVar25;
          }
          if (uVar11 < uVar12) goto LAB_0e031cae;
        }
      }
LAB_0e031de0:
      uVar11 = plStack_448[1];
      uVar12 = plVar15[1];
      uVar25 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
      uVar25 = ((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar25 >> 0x38 < 2) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        if ((uVar12 | uVar11) >> 0x20 == 0) {
          uVar12 = (uVar12 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar12 = uVar12 % uVar11;
        }
      }
      lVar18 = *plStack_448;
      plVar34 = *(long **)(lVar18 + uVar12 * 8);
      if (plVar34 == (long *)0x0) {
        *plVar15 = *plStack_348;
        *plStack_348 = (long)plVar15;
        *(long **)(lVar18 + uVar12 * 8) = plStack_348;
        if (*plVar15 != 0) {
          uVar12 = *(ulong *)(*plVar15 + 8);
          if ((byte)(uVar25 >> 0x38) < 2) {
            *(long **)(lVar18 + (uVar12 & uVar11 - 1) * 8) = plVar15;
          }
          else {
            if (uVar11 <= uVar12) {
              if ((uVar12 | uVar11) >> 0x20 == 0) {
                *(long **)(lVar18 + ((uVar12 & 0xffffffff) % (uVar11 & 0xffffffff)) * 8) = plVar15;
                goto LAB_0e031ead;
              }
              uVar12 = uVar12 % uVar11;
            }
            *(long **)(lVar18 + uVar12 * 8) = plVar15;
          }
        }
      }
      else {
        *plVar15 = *plVar34;
        *plVar34 = (long)plVar15;
      }
LAB_0e031ead:
      plStack_448[3] = plStack_448[3] + 1;
      uVar11 = (ulong)uStack_438 & 1;
      func_0x0dec9d00(auStack_2a8);
      plVar34 = plVar15;
      if (uVar11 != 0) goto LAB_0e031ed0;
      goto LAB_0e031ee3;
    }
    FUN_04882e30();
    goto LAB_0e0333e4;
  }
  if ((bVar7 & 2) == 0) {
    lVar18 = param_3[5];
    lVar13 = func_0x048b2190(lVar18);
    plVar15 = *(long **)(lVar13 + 0x78);
    if (plVar15 == (long *)0x0) {
LAB_0e031204:
      if (*(code **)(lVar13 + 0x30) == (code *)0x0) {
        puStack_3a8 = &UNK_0488e0b0;
        iStack_398 = 0x48b5725f;
        pcStack_3a0 = (code *)0x0;
        uStack_394 = 0;
        uStack_3b8 = (long *)0x0;
        uStack_388 = 0;
        puStack_380 = (undefined *)0x0;
        lStack_390 = lVar18;
        goto LAB_0e032319;
      }
      (**(code **)(lVar13 + 0x30))(&uStack_3b8,lVar18);
      if (iStack_398 != -0x3677df2f) goto LAB_0e032319;
LAB_0e03237e:
      plVar15 = (long *)&UNK_0133e465;
      uVar11 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar24 = *plVar15;
      if (lVar24 == 0 || lVar24 == plVar15[1]) goto LAB_0e031204;
      lVar21 = 0;
      bVar38 = false;
      do {
        lVar22 = lVar24;
        if (lVar21 != 0) {
          lVar22 = lVar21;
        }
        bVar1 = lVar21 != 0;
        if (*(long *)(lVar24 + 8) != 0) {
          lVar22 = lVar21;
          bVar1 = bVar38;
        }
        lVar24 = lVar24 + 0x20;
        lVar21 = lVar22;
        bVar38 = bVar1;
      } while (lVar24 != plVar15[1]);
      if (bVar1 || lVar22 == 0) goto LAB_0e031204;
      (**(code **)(lVar22 + 0x18))(&uStack_3b8,lVar18,0);
      if (iStack_398 == -0x3677df2f) goto LAB_0e03237e;
LAB_0e032319:
      func_0x05ea6440(auStack_2a8,&uStack_3b8);
      puVar6 = puStack_270;
      if ((puStack_270 != (undefined *)0x0) && ((byte)(cStack_284 - 1U) < 2)) {
        func_0x048b0900(&uStack_3b8,auStack_2a8);
      }
      if (pcStack_290 != (code *)0x0) {
        (*pcStack_290)(auStack_2a8);
      }
      if (puVar6 != (undefined *)0x0) goto LAB_0e03237e;
      plVar15 = (long *)&UNK_01411d3a;
      uVar11 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_438._1_7_ = (undefined7)((ulong)uStack_438 >> 8);
        uStack_438 = (uint *)CONCAT71(uStack_438._1_7_,(char)uVar11 * '\x02');
        uVar25 = (long)&uStack_438 + 1;
        if (uVar11 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_438._1_1_ = 0;
          goto joined_r0x0e032430;
        }
      }
      else {
        uVar12 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar12 = (uVar11 | 7) + 1;
        }
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (uVar25 == 0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_438 = (uint *)(uVar12 | 1);
        _auStack_430 = uVar11;
        uStack_428 = uVar25;
      }
      func_0x0eee2f00(uVar25,plVar15,uVar11);
      *(undefined1 *)(uVar25 + uVar11) = 0;
joined_r0x0e032430:
      if (pcStack_3a0 != (code *)0x0) {
        (*pcStack_3a0)(&uStack_3b8);
      }
      puVar14 = uStack_438;
      uVar12 = (ulong)uStack_438 & 0xff;
      uVar25 = _auStack_430;
      if (((ulong)uStack_438 & 1) == 0) {
        uVar25 = (ulong)uStack_438 >> 1 & 0x7f;
      }
      uVar11 = uVar25 + 0xc;
      if (uVar11 < 0xfffffffffffffff8) {
        uVar12 = *param_5;
        if (uVar11 < 0x17) {
          uStack_2a0 = 0;
          puStack_298 = (undefined8 *)0x0;
          auStack_2a8._1_7_ = 0;
          auStack_2a8[0] = (char)uVar11 * '\x02';
        }
        else {
          uVar26 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar26 = (uVar11 | 7) + 1;
          }
          puStack_298 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
          if (puStack_298 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar26,0);
          }
          auStack_2a8 = (undefined1  [8])(uVar26 | 1);
          uStack_2a0 = uVar11;
        }
        lVar18 = (long)puStack_298 + 0xc;
        bVar38 = ((ulong)auStack_2a8 & 1) == 0;
        puVar35 = puStack_298;
        if (bVar38) {
          puVar35 = (undefined8 *)(auStack_2a8 + 1);
        }
        *puVar35 = 0x6465746365707865;
        *(undefined4 *)(puVar35 + 1) = 0x206e6120;
        lVar13 = (long)&uStack_2a0 + 5;
        if (!bVar38) {
          lVar13 = lVar18;
        }
        if (uVar25 != 0) {
          uVar11 = uStack_428;
          if (((ulong)puVar14 & 1) == 0) {
            uVar11 = (long)&uStack_438 + 1;
          }
          func_0x0eee2ee0(lVar13,uVar11,uVar25);
        }
        *(undefined1 *)(lVar13 + uVar25) = 0;
        uVar11 = (ulong)auStack_2a8 >> 1 & 0x7f;
        puVar35 = (undefined8 *)(auStack_2a8 + 1);
        if (((ulong)auStack_2a8 & 1) != 0) {
          uVar11 = uStack_2a0;
          puVar35 = puStack_298;
        }
        uStack_3c8 = 0;
        if (puVar35 == (undefined8 *)0x0) {
          uStack_3c8 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
        }
        else {
          lVar18 = uVar11 + 9;
          puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && puVar16 == (ulong *)0x0) {
            func_0x0eec74c0(lVar18,8);
          }
          *puVar16 = uVar11;
          func_0x0eee2f00(puVar16 + 1,puVar35,uVar11);
          *(undefined1 *)((long)puVar16 + uVar11 + 8) = 0;
          uStack_3c8 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar12,8,&uStack_3c8);
        if ((uStack_3c8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3c8 & 0xff00ffffffffffff) - 8);
        }
        uStack_3c8 = 0;
        if (((ulong)auStack_2a8 & 1) != 0) {
          func_0x0412a280(puStack_298,(ulong)auStack_2a8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0412a280(uStack_428,(ulong)uStack_438 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0e0333e4:
      uVar19 = FUN_04882e30();
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x0ee386e0(&uStack_338);
      uVar19 = func_0x0eee2d70(uVar19);
      if ((*param_5 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar11 + 0x28),
                        *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0e02e980(&uStack_3b8);
      if (pcStack_290 != (code *)0x0) {
        (*pcStack_290)(auStack_2a8);
      }
      if ((_auStack_430 & 1) != 0) {
        func_0x0412a280(plStack_420,_auStack_430 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_3f0 + 0xd0))();
      func_0x0ed6d560(uVar12);
      uVar19 = func_0x0eee2d70(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x04882e20(uVar19);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar11 = FUN_04882e30();
LAB_0e0326bd:
    fVar39 = (float)uVar11;
LAB_0e0326d5:
    fVar39 = (float)func_0x0eee3ab0(fVar39 / *(float *)(plStack_448 + 4));
    plVar17 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    if ((param_2 < (long *)0x3) ||
       (uVar11 = (long)param_2 - ((ulong)param_2 >> 1 & 0x5555555555555555),
       uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
       1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar17 = (long *)func_0x0412c3f0(plVar17);
    }
    else if ((long *)0x1 < plVar17) {
      lVar18 = 0x3f;
      if ((undefined *)((long)plVar17 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar17 + -1) >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      plVar17 = (long *)(1L << (-((byte)lVar18 ^ 0x3f) & 0x3f));
    }
    if (plVar15 <= plVar17) {
      plVar15 = plVar17;
    }
    if (param_2 <= plVar15) goto LAB_0e03279d;
  }
  else {
    unaff_R15 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < unaff_R15)) {
      uStack_338 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_338);
      if ((uStack_338 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_338 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar39 = (float)func_0x0eee3ab0((float)unaff_R15 / *(float *)(plStack_448 + 4));
    plVar17 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    plVar15 = (long *)0x2;
    if ((plVar17 == (long *)0x1) ||
       (plVar15 = plVar17, ((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0)) {
      param_2 = (long *)plStack_448[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) goto LAB_0e0322d8;
    }
    else {
      plVar15 = (long *)func_0x0412c3f0();
      param_2 = (long *)plStack_448[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) {
LAB_0e0322d8:
        if (!bVar38) goto LAB_0e03279d;
        uVar11 = plStack_448[3];
        if ((long)uVar11 < 0) goto LAB_0e0326bd;
        fVar39 = (float)(long)uVar11;
        goto LAB_0e0326d5;
      }
    }
  }
  func_0x0e02f680(plStack_448,plVar15);
LAB_0e03279d:
  plStack_3d8 = param_3;
  func_0x0ed6d600(&lStack_330,*param_5);
  if (unaff_R15 == 0) {
    return;
  }
  uStack_378 = 0x1b0000014af0d9;
  uStack_370 = 0x38000001448967;
  pbStack_3e0 = (byte *)0x3a000001208ef5;
  plStack_348 = plStack_448 + 2;
  uVar11 = 0;
  plVar15 = plStack_3f0;
LAB_0e032858:
  if ((*(uint *)(lStack_330 + 0x2b0) != 0xffffffff) && (uStack_328 <= *(uint *)(lStack_330 + 0x2b0))
     ) {
    return;
  }
  puVar14 = (uint *)*param_5;
  func_0x0ed6d4a0(puVar14,uVar11);
  (**(code **)(*plVar15 + 200))(plVar15,uVar11);
  cVar8 = (**(code **)(*plVar15 + 0x18))(plVar15);
  if ((cVar8 != '\x01') || (lVar18 = (**(code **)(*plVar15 + 0xa8))(plVar15), lVar18 == 2)) {
    cVar8 = (**(code **)(*plVar15 + 0xb8))(plVar15,&UNK_013aac9a,3);
    if (cVar8 == '\0') {
      uStack_360 = uStack_370;
      func_0x0ed5ffe0(*param_5,8,&uStack_360);
      if ((uStack_360 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_360 & 0xff00ffffffffffff) - 8);
      }
      uStack_360 = 0;
      goto LAB_0e033240;
    }
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    uStack_438 = (uint *)0x0;
    _auStack_430 = 0;
    plStack_418 = (long *)0x0;
    lStack_280 = plStack_3d8[5];
    puStack_298 = (undefined8 *)&UNK_05e9f930;
    uStack_288 = 0xc98820d1;
    pcStack_290 = (code *)0x0;
    cStack_284 = '\x03';
    auStack_2a8 = (undefined1  [8])&uStack_438;
    uStack_278 = 0;
    puStack_270 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_300,plVar15,auStack_2a8,uStack_340,&uStack_2f8);
    (**(code **)(*plVar15 + 0xd0))(plVar15);
    cVar8 = (**(code **)(*plVar15 + 0xb8))(plVar15,&UNK_0138e8dd,5);
    puVar30 = uStack_438;
    if (cVar8 != '\0') {
      puVar36 = (uint *)plStack_448[1];
      if (puVar36 != (uint *)0x0) {
        uVar12 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          puVar27 = (uint *)((long)puVar36 - 1U & (ulong)uStack_438);
        }
        else {
          puVar27 = uStack_438;
          if (puVar36 <= uStack_438) {
            if (((ulong)uStack_438 | (ulong)puVar36) >> 0x20 == 0) {
              puVar27 = (uint *)(((ulong)uStack_438 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff));
            }
            else {
              puVar27 = (uint *)((ulong)uStack_438 % (ulong)puVar36);
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_448 + (long)puVar27 * 8);
        puStack_408 = puVar27;
        if ((puVar35 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar35, plVar17 != (long *)0x0))
        {
          plStack_3e8 = plStack_420;
          uVar25 = uStack_428;
          if ((_auStack_430 & 1) == 0) {
            plStack_3e8 = (long *)(auStack_430 + 1);
            uVar25 = _auStack_430 >> 1 & 0x7f;
          }
          plStack_3d0 = plStack_418;
          plVar15 = plStack_418;
          uStack_400 = uVar25;
          if ((byte)(uVar12 >> 0x38) < 2) {
            uVar12 = (long)puVar36 - 1;
            uStack_350 = uVar12;
            do {
              if ((uint *)plVar17[1] == puVar30) {
                if ((uint *)plVar17[2] == puVar30) {
                  plVar34 = plVar17 + 2;
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_438)
                  goto LAB_0e033146;
                  bVar7 = *(byte *)(plVar17 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar26 = (ulong)(bVar7 >> 1);
                  }
                  else {
                    uVar26 = plVar17[4];
                  }
                  if (uVar26 == uVar25) {
                    if ((bVar7 & 1) == 0) {
                      lVar18 = (long)plVar17 + 0x19;
                    }
                    else {
                      lVar18 = plVar17[5];
                    }
                    iVar9 = func_0x0eee3000(lVar18,plStack_3e8,uVar25);
                    uVar12 = uStack_350;
                    puVar27 = puStack_408;
                    plVar15 = plStack_3d0;
                    uVar25 = uStack_400;
                    if (iVar9 == 0) goto LAB_0e033358;
                  }
                }
                plVar17[6] = 0;
              }
              else if ((uint *)((ulong)plVar17[1] & uVar12) != puVar27) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              puVar28 = (uint *)plVar17[1];
              if (puVar28 == puVar30) {
                if ((uint *)plVar17[2] == puVar30) {
                  plVar34 = plVar17 + 2;
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_438)
                  goto LAB_0e033146;
                  bVar7 = *(byte *)(plVar17 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar12 = (ulong)(bVar7 >> 1);
                  }
                  else {
                    uVar12 = plVar17[4];
                  }
                  if (uVar12 == uVar25) {
                    if ((bVar7 & 1) == 0) {
                      lVar18 = (long)plVar17 + 0x19;
                    }
                    else {
                      lVar18 = plVar17[5];
                    }
                    iVar9 = func_0x0eee3000(lVar18,plStack_3e8,uVar25);
                    puVar27 = puStack_408;
                    plVar15 = plStack_3d0;
                    uVar25 = uStack_400;
                    if (iVar9 == 0) goto LAB_0e033358;
                  }
                }
                plVar17[6] = 0;
              }
              else {
                if (puVar36 <= puVar28) {
                  if (((ulong)puVar28 | (ulong)puVar36) >> 0x20 == 0) {
                    if ((uint *)(((ulong)puVar28 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff)) ==
                        puVar27) goto LAB_0e032c57;
                    break;
                  }
                  puVar28 = (uint *)((ulong)puVar28 % (ulong)puVar36);
                }
                if (puVar28 != puVar27) break;
              }
LAB_0e032c57:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2a8);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x2a8,0);
      }
      uStack_3b0 = plStack_448;
      puStack_3a8 = (undefined *)0x0;
      *plVar17 = 0;
      plVar17[1] = (long)puVar30;
      plVar17[2] = 0;
      plVar17[3] = 0;
      plVar17[4] = 0;
      plVar17[5] = 0;
      plVar17[6] = 0;
      uStack_3b8 = plVar17;
      if (plVar17 + 2 != &uStack_438) {
        if ((_auStack_430 & 1) == 0) {
          plVar17[5] = (long)plStack_420;
          *(undefined1 (*) [4])(plVar17 + 3) = auStack_430;
          *(undefined4 *)((long)plVar17 + 0x1c) = uStack_42c;
          *(undefined4 *)(plVar17 + 4) = (undefined4)uStack_428;
          *(undefined4 *)((long)plVar17 + 0x24) = uStack_428._4_4_;
        }
        else {
          func_0x04885070(plVar17 + 3,plStack_420,uStack_428);
        }
      }
      plVar17[2] = (long)uStack_438;
      func_0x0eee2dd0(plVar17 + 7,0,0x270);
      *(undefined4 *)(plVar17 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar17 + 0x1e) = 2;
      plVar17[0x3b] = 0;
      plVar17[0x3c] = 0;
      plVar17[0x3d] = 0;
      plVar17[0x3e] = 0;
      plVar17[0x20] = 0;
      plVar17[0x21] = 0;
      plVar17[0x22] = 0;
      plVar17[0x23] = 0;
      *(undefined8 *)((long)plVar17 + 0x119) = 0;
      *(undefined8 *)((long)plVar17 + 0x121) = 0;
      *(undefined4 *)(plVar17 + 0x3f) = 0x3f800000;
      *(undefined4 *)(plVar17 + 0x52) = 2;
      puStack_3a8 = (undefined *)CONCAT71(puStack_3a8._1_7_,1);
      if ((long)puVar36 < 0) {
        fVar40 = (float)puVar36;
        fVar39 = *(float *)(plStack_448 + 4);
        if (puVar36 != (uint *)0x0) goto LAB_0e032e7d;
LAB_0e032e8e:
        uVar12 = 1;
        if ((uint *)0x2 < puVar36) {
          uVar12 = (ulong)(((ulong)puVar36 & (long)puVar36 - 1U) != 0);
        }
        uVar12 = (long)puVar36 * 2 | uVar12;
        fVar39 = (float)func_0x0eee3ab0((float)(plStack_448[3] + 1) / fVar39);
        uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if (uVar25 < uVar12) {
          uVar25 = uVar12;
        }
        uVar12 = 2;
        if ((uVar25 == 1) || (uVar12 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
          uVar25 = plStack_448[1];
          bVar38 = uVar12 < uVar25;
          if (uVar12 <= uVar25) goto LAB_0e032fe0;
LAB_0e032f07:
          func_0x0e02f680(plStack_448,uVar12);
        }
        else {
          uVar12 = func_0x0412c3f0();
          uVar25 = plStack_448[1];
          bVar38 = uVar12 < uVar25;
          if (uVar25 < uVar12) goto LAB_0e032f07;
LAB_0e032fe0:
          if (bVar38) {
            fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_448[3] /
                                            *(float *)(plStack_448 + 4));
            uVar26 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
            if ((uVar25 < 3) ||
               (uVar29 = uVar25 - (uVar25 >> 1 & 0x5555555555555555),
               uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333),
               1 < (byte)(((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar26 = func_0x0412c3f0(uVar26);
            }
            else if (1 < uVar26) {
              lVar18 = 0x3f;
              if (uVar26 - 1 != 0) {
                for (; uVar26 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar26 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
            }
            if (uVar12 <= uVar26) {
              uVar12 = uVar26;
            }
            if (uVar12 < uVar25) goto LAB_0e032f07;
          }
        }
        puVar36 = (uint *)plStack_448[1];
        if (((ulong)puVar36 & (long)puVar36 - 1U) == 0) {
          puVar27 = (uint *)((ulong)puVar30 & (long)puVar36 - 1U);
        }
        else {
          puVar27 = puVar30;
          if (puVar36 <= puVar30) {
            if (((ulong)puVar30 | (ulong)puVar36) >> 0x20 == 0) {
              puVar27 = (uint *)(((ulong)puVar30 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff));
            }
            else {
              puVar27 = (uint *)((ulong)puVar30 % (ulong)puVar36);
            }
          }
        }
      }
      else {
        fVar40 = (float)(long)puVar36;
        fVar39 = *(float *)(plStack_448 + 4);
        if (puVar36 == (uint *)0x0) goto LAB_0e032e8e;
LAB_0e032e7d:
        puVar27 = puStack_408;
        if (fVar40 * fVar39 < (float)(plStack_448[3] + 1)) goto LAB_0e032e8e;
      }
      lVar18 = *plStack_448;
      plVar15 = *(long **)(lVar18 + (long)puVar27 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar17 = *plStack_348;
        *plStack_348 = (long)plVar17;
        *(long **)(lVar18 + (long)puVar27 * 8) = plStack_348;
        if (*plVar17 != 0) {
          puVar30 = *(uint **)(*plVar17 + 8);
          if (((ulong)puVar36 & (long)puVar36 - 1U) == 0) {
            *(long **)(lVar18 + ((ulong)puVar30 & (long)puVar36 - 1U) * 8) = plVar17;
          }
          else {
            if (puVar36 <= puVar30) {
              if (((ulong)puVar30 | (ulong)puVar36) >> 0x20 == 0) {
                *(long **)(lVar18 + (((ulong)puVar30 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff))
                                    * 8) = plVar17;
                goto LAB_0e03313e;
              }
              puVar30 = (uint *)((ulong)puVar30 % (ulong)puVar36);
            }
            *(long **)(lVar18 + (long)puVar30 * 8) = plVar17;
          }
        }
      }
      else {
        *plVar17 = *plVar15;
        *plVar15 = (long)plVar17;
      }
LAB_0e03313e:
      plStack_448[3] = plStack_448[3] + 1;
      goto LAB_0e033146;
    }
    uStack_368 = (ulong)pbStack_3e0;
    func_0x0ed5ffe0(*param_5,8,&uStack_368);
    if ((uStack_368 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
    }
    uStack_368 = 0;
    goto LAB_0e033201;
  }
  uStack_358 = uStack_378;
  func_0x0ed5ffe0(*param_5,8,&uStack_358);
  if ((uStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_358 & 0xff00ffffffffffff) - 8);
  }
  uStack_358 = 0;
  goto LAB_0e033240;
LAB_0e032070:
  pbVar31 = pbStack_3e0;
  param_5 = puStack_3f8;
  cVar8 = (char)uStack_400;
  func_0x0dec9d00(plVar17);
  bVar7 = *pbVar31;
  goto joined_r0x0e03208c;
LAB_0e0320de:
  pbVar31 = pbStack_3e0;
  param_5 = puStack_3f8;
  cVar8 = (char)uStack_400;
  plVar34[6] = (long)plStack_3e8;
  plVar15[6] = (long)plVar37;
  func_0x0dec9d00(plVar17);
  bVar7 = *pbVar31;
joined_r0x0e03208c:
  if ((bVar7 & 1) != 0) {
    func_0x0412a280(plVar15[5],plVar15[3] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar15,0x2a8);
  plVar17 = plStack_3d8;
  func_0x0dec9d00(auStack_2a8);
  if (cVar8 != '\0') {
LAB_0e031ed0:
    func_0x0412a280(uStack_428,(ulong)uStack_438 & 0xfffffffffffffffe);
  }
LAB_0e031ee3:
  plVar15 = plStack_3f0;
  auStack_2a8 = (undefined1  [8])(plVar34 + 7);
  lStack_280 = plVar17[5];
  puStack_298 = (undefined8 *)&UNK_0dec8580;
  uStack_288 = 0xb920e31d;
  pcStack_290 = (code *)0x0;
  cStack_284 = '\x03';
  uStack_278 = 0;
  puStack_270 = &UNK_0dec8560;
  func_0x0ed75bc0(&puStack_308,plStack_3f0,auStack_2a8,uStack_340,&uStack_2d0);
  uVar11 = uStack_378;
  if (pcStack_290 != (code *)0x0) {
    (*pcStack_290)(auStack_2a8);
  }
  lVar18 = *(long *)(puStack_408 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puStack_408 * 0x20);
  *puStack_408 = uVar32;
  if (puStack_408[0x48] == 0) {
    uVar20 = puStack_408[4];
  }
  else if ((*(uint *)(*(long *)(puStack_408 + 0x46) + 0x18 + (ulong)(puStack_408[0x48] - 1) * 0x30)
            == uVar32) || (uVar20 = puStack_408[4], uVar32 != uVar20 - 1)) goto LAB_0e031288;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_2a8,lVar13 + -0x18);
    uVar20 = puStack_408[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puStack_408[4] = uVar20 - 1;
LAB_0e031288:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
LAB_0e03129c:
  uStack_370 = uStack_370 + 1;
  if (uStack_370 == uVar11) {
    return;
  }
  goto LAB_0e0312a8;
LAB_0e033358:
  plVar17[6] = (long)&uStack_438;
  plStack_418 = plVar34;
LAB_0e033146:
  plVar15 = plStack_3f0;
  uStack_3b8 = plVar17 + 7;
  lStack_390 = plStack_3d8[5];
  puStack_3a8 = &UNK_0dec8580;
  iStack_398 = -0x46df1ce3;
  pcStack_3a0 = (code *)0x0;
  uStack_394 = 3;
  uStack_388 = 0;
  puStack_380 = &UNK_0dec8560;
  func_0x0ed75bc0(&puStack_308,plStack_3f0,&uStack_3b8,uStack_340,&uStack_2d0);
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  param_5 = puStack_3f8;
  if (pcStack_3a0 != (code *)0x0) {
    (*pcStack_3a0)(&uStack_3b8);
  }
LAB_0e033201:
  if (pcStack_290 != (code *)0x0) {
    (*pcStack_290)(auStack_2a8);
  }
  if ((_auStack_430 & 1) != 0) {
    func_0x0412a280(plStack_420,_auStack_430 & 0xfffffffffffffffe);
  }
LAB_0e033240:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  lVar18 = *(long *)(puVar14 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puVar14 * 0x20);
  *puVar14 = uVar32;
  if (puVar14[0x48] == 0) {
    uVar20 = puVar14[4];
  }
  else if ((*(uint *)(*(long *)(puVar14 + 0x46) + 0x18 + (ulong)(puVar14[0x48] - 1) * 0x30) ==
            uVar32) || (uVar20 = puVar14[4], uVar32 != uVar20 - 1)) goto LAB_0e03284c;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_2a8,lVar13 + -0x18);
    uVar20 = puVar14[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puVar14[4] = uVar20 - 1;
LAB_0e03284c:
  uVar11 = (ulong)((int)uVar11 + 1);
  if (unaff_R15 <= uVar11) {
    return;
  }
  goto LAB_0e032858;
}


