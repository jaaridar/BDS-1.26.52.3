/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe03ba00 (ELF vaddr 0xdf3ba00)
 * Label: caller-of-callee
 * Body:  [[0e03ba00, 0e03c116] [0e03c120, 0e03c28e] [0e03c290, 0e03c2c5] [0e03c2d0, 0e03c3c4] [0e03c3d0, 0e03c571] [0e03c580, 0e03c688] [0e03c690, 0e03c6e8] [0e03c6f0, 0e03c706] [0e03c710, 0e03c756] [0e03c760, 0e03c996] [0e03c9a0, 0e03d37e] [0e03d380, 0e03d571] [0e03d580, 0e03d7e3] [0e03d7f0, 0e03dad1] [0e03dae0, 0e03ddd2] [0e03dde0, 0e03df75] [0e03df81, 0e03df92] [0e03e1b9, 0e03e1eb] [0e03e22b, 0e03e259]]
 * Ghidra: FUN_0e03ba00
 */


/* WARNING: Removing unreachable block (ram,0x0e03cdfa) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e03ba00(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,ulong *param_5)

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
  long *plStack_408;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [4];
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  uint *puStack_3c8;
  ulong uStack_3c0;
  ulong *puStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  byte *pbStack_3a0;
  long *plStack_398;
  long *plStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  code *pcStack_360;
  int iStack_358;
  undefined1 uStack_354;
  long lStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  uint uStack_2e8;
  ulong uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined4 uStack_2a0;
  byte bStack_29c;
  undefined1 uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  byte bStack_274;
  undefined1 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 *puStack_258;
  code *pcStack_250;
  undefined4 uStack_248;
  char cStack_244;
  long lStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_40;
  
  pcVar10 = (code *)param_3[7];
  plStack_3b0 = param_2;
  uStack_300 = param_4;
  if (pcVar10 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar38 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar38 = (undefined *)param_3[7] == &UNK_0e03f820;
    }
    param_3[2] = (long)&UNK_0e03f9c0;
    *(undefined4 *)(param_3 + 4) = 0xef600143;
    param_3[3] = (long)&UNK_0e03fc00;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x28);
      param_2 = plStack_3b0;
    }
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    *(undefined4 *)(plVar15 + 4) = 0x3f800000;
    *param_3 = (long)plVar15;
    pcVar10 = (code *)&UNK_0e03f820;
    param_3[7] = (long)&UNK_0e03f820;
    if (bVar38) {
      lVar18 = param_3[6];
    }
    else {
      lVar18 = 0;
    }
    param_3[6] = lVar18;
    cVar8 = '\x01';
    plStack_408 = plVar15;
LAB_0e03bb2c:
    puStack_2c0 = &UNK_0f012348;
    if (plStack_408 == (long *)0x0) goto LAB_0e03bb33;
  }
  else {
    cVar8 = *(char *)((long)param_3 + 0x24);
    plVar15 = (long *)*param_3;
    plStack_408 = plVar15;
    if (cVar8 == '\x02') {
      plStack_408 = param_3;
    }
    if ((int)param_3[4] == -0x109ffebd) goto LAB_0e03bb2c;
LAB_0e03bb33:
    puStack_2c0 = &UNK_0f012348;
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
    plStack_408 = (long *)func_0x0488e200(lVar18,lVar13,0xef600143,plVar15);
  }
  uStack_290 = *param_5;
  uStack_288 = param_5[1];
  plVar15 = (long *)param_5[2];
  uStack_2b8 = uStack_290;
  uStack_2b0 = uStack_288;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
    puStack_2a8 = (undefined8 *)0x0;
  }
  else {
    puStack_2a8 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0);
    uStack_290 = *param_5;
    uStack_288 = param_5[1];
    plVar15 = (long *)param_5[2];
  }
  uStack_2a0 = (undefined4)param_5[3];
  bStack_29c = *(byte *)((long)param_5 + 0x1c);
  uStack_298 = 1;
  puStack_2c8 = &UNK_0f4a9f58;
  if (plVar15 == (long *)0x0) {
    uStack_280 = 0;
  }
  else {
    uStack_280 = (**(code **)(*plVar15 + 0x30))(plVar15,1);
  }
  uStack_278 = (undefined4)param_5[3];
  bStack_274 = *(byte *)((long)param_5 + 0x1c);
  uStack_270 = 1;
  bVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_3b8 = param_5;
  if (bVar7 == 1) {
    uVar11 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar12 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar12 < uVar11)) {
      uStack_2e0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_2e0);
      if ((uStack_2e0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_2f0,*param_5);
    if (uVar11 == 0) {
      return;
    }
    plStack_308 = plStack_408 + 2;
    uStack_330 = 0;
    plStack_398 = param_3;
    uStack_338 = uVar11;
LAB_0e03be08:
    uVar32 = uStack_2e8;
    lVar18 = lStack_2f0;
    if (uStack_2e8 <= *(uint *)(lStack_2f0 + 0x2b0) && *(uint *)(lStack_2f0 + 0x2b0) != 0xffffffff)
    {
      return;
    }
    auVar41 = (**(code **)(*plStack_3b0 + 0xc0))();
    puVar35 = puStack_2a8;
    auStack_2d8 = auVar41;
    if (puStack_2a8 != (undefined8 *)0x0) {
      lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar18 == 0) {
        func_0x048b0de0(&uStack_378,&uStack_3f8);
        _DAT_0f54fd90 = (undefined4)uStack_378;
        uRam000000000f54fd94 = uStack_378._4_4_;
        uVar3 = (undefined4)uStack_370;
        uVar4 = uStack_370._4_4_;
        uStack_378 = (long *)0x0;
        uStack_370 = (long *)0x0;
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
            func_0x0412c2d0(plVar15);
          }
        }
        plVar15 = uStack_370;
        if (uStack_370 != (long *)0x0) {
          LOCK();
          plVar17 = uStack_370 + 1;
          lVar18 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*uStack_370 + 0x10))(uStack_370);
            func_0x0412c2d0(plVar15);
          }
        }
        lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar11 = uStack_338;
      }
      puStack_258 = (undefined8 *)&UNK_05ea5bd0;
      uStack_248 = 0x989eedf9;
      pcStack_250 = (code *)0x0;
      cStack_244 = '\x04';
      auStack_268 = (undefined1  [8])auStack_2d8;
      uStack_238 = 0;
      puStack_230 = &UNK_05ea5bb0;
      lStack_240 = lVar18;
      (**(code **)*puVar35)(puVar35,auStack_268,uStack_2b8);
      lVar18 = lStack_2f0;
      uVar32 = uStack_2e8;
      if (pcStack_250 != (code *)0x0) {
        (*pcStack_250)(auStack_268);
        lVar18 = lStack_2f0;
        uVar32 = uStack_2e8;
      }
    }
    uVar5 = auStack_2d8._8_8_;
    uVar19 = auStack_2d8._0_8_;
    if ((*(uint *)(lVar18 + 0x2b0) != 0xffffffff) && (uVar32 <= *(uint *)(lVar18 + 0x2b0)))
    goto LAB_0e03bdfc;
    uVar11 = *param_5;
    uStack_380 = 0;
    if (auStack_2d8._0_8_ == 0) {
      uVar12 = (auStack_2d8._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar18 = auStack_2d8._8_8_ + 9;
      param_5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && param_5 == (ulong *)0x0) {
        func_0x0eec74c0(lVar18,8);
      }
      *param_5 = uVar5;
      func_0x0eee2f00(param_5 + 1,uVar19,uVar5);
      *(byte *)((long)param_5 + uVar5 + 8) = 0;
      uVar12 = (ulong)(param_5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar12;
    puVar14 = (uint *)func_0x0ed6d180(uVar11,&uStack_380,0);
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uVar11 = auStack_2d8._8_8_;
    uVar19 = auStack_2d8._0_8_;
    uStack_380 = 0;
    puStack_3c8 = puVar14;
    if ((ulong)auStack_2d8._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_2d8._8_8_ < 0x17) {
        uStack_3f8 = (uint *)CONCAT71(uStack_3f8._1_7_,auStack_2d8[8] * '\x02');
        uVar25 = (long)&uStack_3f8 + 1;
        if (auStack_2d8._8_8_ != 0) goto LAB_0e03c167;
      }
      else {
        uVar12 = (auStack_2d8._8_8_ | 7) + 1;
        if ((auStack_2d8._8_8_ | 7) == 0x17) {
          uVar12 = 0x1a;
        }
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (uVar25 == 0) {
          func_0x0eec74c0(uVar12,0);
        }
        uStack_3f8 = (uint *)(uVar12 | 1);
        _auStack_3f0 = uVar11;
        uStack_3e8 = uVar25;
LAB_0e03c167:
        func_0x0eee2ee0(uVar25,uVar19,uVar11);
      }
      *(undefined1 *)(uVar25 + uVar11) = 0;
      puStack_258 = (undefined8 *)0x0;
      pcStack_250 = (code *)0x0;
      auStack_268 = (undefined1  [8])0x0;
      uStack_260 = 0;
      uStack_248 = 0x3f800000;
      uStack_1b0 = 2;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_120 = 0x3f800000;
      uStack_88 = 2;
      uStack_80 = 0x10;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_40 = 0;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x268);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(0x268,0);
      }
      uStack_370 = plStack_408;
      puStack_368 = (undefined *)0x0;
      pbVar31 = (byte *)(plVar15 + 3);
      *plVar15 = 0;
      plVar15[1] = 0;
      plVar15[2] = 0;
      uVar2 = (undefined1)uStack_3f8;
      uStack_378 = plVar15;
      if (((ulong)uStack_3f8 & 1) == 0) {
        plVar15[5] = uStack_3e8;
        *(undefined4 *)pbVar31 = (undefined4)uStack_3f8;
        *(undefined4 *)((long)plVar15 + 0x1c) = uStack_3f8._4_4_;
        *(undefined1 (*) [4])(plVar15 + 4) = auStack_3f0;
        *(undefined4 *)((long)plVar15 + 0x24) = uStack_3ec;
      }
      else {
        func_0x0412e5e0(pbVar31,uStack_3e8,_auStack_3f0);
      }
      plVar15[6] = 0;
      bVar7 = *(byte *)(plVar15 + 3);
      pbStack_3a0 = pbVar31;
      if ((bVar7 & 1) == 0) {
        if (bVar7 >> 1 != 0) goto LAB_0e03c2e2;
LAB_0e03c3d0:
        uVar11 = 0;
      }
      else {
        if (plVar15[4] == 0) goto LAB_0e03c3d0;
LAB_0e03c2e2:
        if ((bVar7 & 1) == 0) {
          pbVar31 = (byte *)((long)plVar15 + 0x19);
          if (pbVar31 != (byte *)0x0) goto LAB_0e03c301;
          goto LAB_0e03c3d0;
        }
        pbVar31 = (byte *)plVar15[5];
        if (pbVar31 == (byte *)0x0) goto LAB_0e03c3d0;
LAB_0e03c301:
        if (*pbVar31 == 0) goto LAB_0e03c3d0;
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
      uStack_3c0 = CONCAT71(uStack_3c0._1_7_,uVar2) & 0xffffffffffffff01;
      plVar15[2] = uVar11;
      plVar17 = plVar15 + 7;
      func_0x0e03f5b0(plVar17,auStack_268);
      puStack_368 = (undefined *)CONCAT71(puStack_368._1_7_,1);
      uVar11 = plVar15[2];
      plVar15[1] = uVar11;
      uVar12 = plStack_408[1];
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
        puVar35 = *(undefined8 **)(*plStack_408 + uVar26 * 8);
        if ((puVar35 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar35, plVar34 != (long *)0x0))
        {
          plVar33 = plVar15 + 2;
          plStack_390 = (long *)((long)plVar15 + 0x19);
          plStack_3a8 = plVar33;
          if ((byte)(uVar25 >> 0x38) < 2) {
            uVar25 = uVar12 - 1;
            uStack_310 = uVar25;
            do {
              if (plVar34[1] == uVar11) {
                if (plVar34[2] == uVar11) {
                  plVar37 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar33) && ((long *)plVar15[6] == plVar37))
                  goto LAB_0e03cbb0;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar29 = (ulong)(bVar7 >> 1);
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0e03c6a8;
LAB_0e03c67e:
                    if (uVar29 != uVar23 >> 1) goto LAB_0e03c628;
                  }
                  else {
                    uVar29 = plVar34[4];
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0e03c67e;
LAB_0e03c6a8:
                    if (uVar29 != plVar15[4]) goto LAB_0e03c628;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_390;
                  if ((uVar23 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  uVar25 = uStack_310;
                  plVar33 = plStack_3a8;
                  if (iVar9 == 0) goto LAB_0e03cc1e;
                }
LAB_0e03c628:
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
                  goto LAB_0e03cbb0;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar25 = (ulong)(bVar7 >> 1);
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0e03c5b5;
LAB_0e03c567:
                    if (uVar25 != uVar29 >> 1) goto LAB_0e03c511;
                  }
                  else {
                    uVar25 = plVar34[4];
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0e03c567;
LAB_0e03c5b5:
                    if (uVar25 != plVar15[4]) goto LAB_0e03c511;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_390;
                  if ((uVar29 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  plVar33 = plStack_3a8;
                  if (iVar9 == 0) goto LAB_0e03cc1e;
                }
LAB_0e03c511:
                plVar34[6] = 0;
              }
              else {
                if (uVar12 <= uVar25) {
                  if ((uVar25 | uVar12) >> 0x20 == 0) {
                    if ((uVar25 & 0xffffffff) % (uVar12 & 0xffffffff) == uVar26) goto LAB_0e03c51a;
                    break;
                  }
                  uVar25 = uVar25 % uVar12;
                }
                if (uVar25 != uVar26) break;
              }
LAB_0e03c51a:
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
      }
      plVar17 = plStack_398;
      param_5 = puStack_3b8;
      if ((long)uVar12 < 0) {
        fVar40 = (float)uVar12;
        fVar39 = *(float *)(plStack_408 + 4);
        if (uVar12 == 0) goto LAB_0e03c781;
LAB_0e03c774:
        if (fVar40 * fVar39 < (float)(plStack_408[3] + 1)) goto LAB_0e03c781;
        goto LAB_0e03c920;
      }
      fVar40 = (float)(long)uVar12;
      fVar39 = *(float *)(plStack_408 + 4);
      if (uVar12 != 0) goto LAB_0e03c774;
LAB_0e03c781:
      uVar11 = 1;
      if (2 < uVar12) {
        uVar11 = (ulong)((uVar12 & uVar12 - 1) != 0);
      }
      uVar11 = uVar12 * 2 | uVar11;
      fVar39 = (float)func_0x0eee3ab0((float)(plStack_408[3] + 1) / fVar39);
      uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
      if (uVar25 < uVar11) {
        uVar25 = uVar11;
      }
      uVar11 = 2;
      if ((uVar25 == 1) || (uVar11 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
        bVar38 = uVar11 < uVar12;
        if (uVar11 <= uVar12) goto LAB_0e03c814;
LAB_0e03c7ee:
        func_0x0e03a1f0(plStack_408,uVar11);
      }
      else {
        uVar11 = func_0x0412c3f0();
        uVar12 = plStack_408[1];
        bVar38 = uVar11 < uVar12;
        if (uVar12 < uVar11) goto LAB_0e03c7ee;
LAB_0e03c814:
        if (bVar38) {
          fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_408[3] / *(float *)(plStack_408 + 4)
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
          if (uVar11 < uVar12) goto LAB_0e03c7ee;
        }
      }
LAB_0e03c920:
      uVar11 = plStack_408[1];
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
      lVar18 = *plStack_408;
      plVar34 = *(long **)(lVar18 + uVar12 * 8);
      if (plVar34 == (long *)0x0) {
        *plVar15 = *plStack_308;
        *plStack_308 = (long)plVar15;
        *(long **)(lVar18 + uVar12 * 8) = plStack_308;
        if (*plVar15 != 0) {
          uVar12 = *(ulong *)(*plVar15 + 8);
          if ((byte)(uVar25 >> 0x38) < 2) {
            *(long **)(lVar18 + (uVar12 & uVar11 - 1) * 8) = plVar15;
          }
          else {
            if (uVar11 <= uVar12) {
              if ((uVar12 | uVar11) >> 0x20 == 0) {
                *(long **)(lVar18 + ((uVar12 & 0xffffffff) % (uVar11 & 0xffffffff)) * 8) = plVar15;
                goto LAB_0e03c9ed;
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
LAB_0e03c9ed:
      plStack_408[3] = plStack_408[3] + 1;
      uVar11 = (ulong)uStack_3f8 & 1;
      func_0x0dede8a0(auStack_268);
      plVar34 = plVar15;
      if (uVar11 != 0) goto LAB_0e03ca10;
      goto LAB_0e03ca23;
    }
    func_0x04882e30();
    goto LAB_0e03df24;
  }
  if ((bVar7 & 2) == 0) {
    lVar18 = param_3[5];
    lVar13 = func_0x048b2190(lVar18);
    plVar15 = *(long **)(lVar13 + 0x78);
    if (plVar15 == (long *)0x0) {
LAB_0e03bd64:
      if (*(code **)(lVar13 + 0x30) == (code *)0x0) {
        puStack_368 = &UNK_0488e0b0;
        iStack_358 = 0x48b5725f;
        pcStack_360 = (code *)0x0;
        uStack_354 = 0;
        uStack_378 = (long *)0x0;
        uStack_348 = 0;
        puStack_340 = (undefined *)0x0;
        lStack_350 = lVar18;
        goto LAB_0e03ce59;
      }
      (**(code **)(lVar13 + 0x30))(&uStack_378,lVar18);
      if (iStack_358 != -0x3677df2f) goto LAB_0e03ce59;
LAB_0e03cebe:
      plVar15 = (long *)&UNK_0133e465;
      uVar11 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar24 = *plVar15;
      if (lVar24 == 0 || lVar24 == plVar15[1]) goto LAB_0e03bd64;
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
      if (bVar1 || lVar22 == 0) goto LAB_0e03bd64;
      (**(code **)(lVar22 + 0x18))(&uStack_378,lVar18,0);
      if (iStack_358 == -0x3677df2f) goto LAB_0e03cebe;
LAB_0e03ce59:
      func_0x05ea6440(auStack_268,&uStack_378);
      puVar6 = puStack_230;
      if ((puStack_230 != (undefined *)0x0) && ((byte)(cStack_244 - 1U) < 2)) {
        func_0x048b0900(&uStack_378,auStack_268);
      }
      if (pcStack_250 != (code *)0x0) {
        (*pcStack_250)(auStack_268);
      }
      if (puVar6 != (undefined *)0x0) goto LAB_0e03cebe;
      plVar15 = (long *)&UNK_01411d3a;
      uVar11 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_3f8._1_7_ = (undefined7)((ulong)uStack_3f8 >> 8);
        uStack_3f8 = (uint *)CONCAT71(uStack_3f8._1_7_,(char)uVar11 * '\x02');
        uVar25 = (long)&uStack_3f8 + 1;
        if (uVar11 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_3f8._1_1_ = 0;
          goto joined_r0x0e03cf70;
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
        uStack_3f8 = (uint *)(uVar12 | 1);
        _auStack_3f0 = uVar11;
        uStack_3e8 = uVar25;
      }
      func_0x0eee2f00(uVar25,plVar15,uVar11);
      *(undefined1 *)(uVar25 + uVar11) = 0;
joined_r0x0e03cf70:
      if (pcStack_360 != (code *)0x0) {
        (*pcStack_360)(&uStack_378);
      }
      puVar14 = uStack_3f8;
      uVar12 = (ulong)uStack_3f8 & 0xff;
      uVar25 = _auStack_3f0;
      if (((ulong)uStack_3f8 & 1) == 0) {
        uVar25 = (ulong)uStack_3f8 >> 1 & 0x7f;
      }
      uVar11 = uVar25 + 0xc;
      if (uVar11 < 0xfffffffffffffff8) {
        uVar12 = *param_5;
        if (uVar11 < 0x17) {
          uStack_260 = 0;
          puStack_258 = (undefined8 *)0x0;
          auStack_268._1_7_ = 0;
          auStack_268[0] = (char)uVar11 * '\x02';
        }
        else {
          uVar26 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar26 = (uVar11 | 7) + 1;
          }
          puStack_258 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
          if (puStack_258 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar26,0);
          }
          auStack_268 = (undefined1  [8])(uVar26 | 1);
          uStack_260 = uVar11;
        }
        lVar18 = (long)puStack_258 + 0xc;
        bVar38 = ((ulong)auStack_268 & 1) == 0;
        puVar35 = puStack_258;
        if (bVar38) {
          puVar35 = (undefined8 *)(auStack_268 + 1);
        }
        *puVar35 = 0x6465746365707865;
        *(undefined4 *)(puVar35 + 1) = 0x206e6120;
        lVar13 = (long)&uStack_260 + 5;
        if (!bVar38) {
          lVar13 = lVar18;
        }
        if (uVar25 != 0) {
          uVar11 = uStack_3e8;
          if (((ulong)puVar14 & 1) == 0) {
            uVar11 = (long)&uStack_3f8 + 1;
          }
          func_0x0eee2ee0(lVar13,uVar11,uVar25);
        }
        *(undefined1 *)(lVar13 + uVar25) = 0;
        uVar11 = (ulong)auStack_268 >> 1 & 0x7f;
        puVar35 = (undefined8 *)(auStack_268 + 1);
        if (((ulong)auStack_268 & 1) != 0) {
          uVar11 = uStack_260;
          puVar35 = puStack_258;
        }
        uStack_388 = 0;
        if (puVar35 == (undefined8 *)0x0) {
          uStack_388 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
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
          uStack_388 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar12,8,&uStack_388);
        if ((uStack_388 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_388 & 0xff00ffffffffffff) - 8);
        }
        uStack_388 = 0;
        if (((ulong)auStack_268 & 1) != 0) {
          func_0x0412a280(puStack_258,(ulong)auStack_268 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0412a280(uStack_3e8,(ulong)uStack_3f8 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0e03df24:
      uVar19 = func_0x04882e30();
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      FUN_0ee386e0(&uStack_2f8);
      uVar19 = func_0x0eee2d70(uVar19);
      if ((*param_5 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar11 + 0x28),
                        *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0e0394f0(&uStack_378);
      if (pcStack_250 != (code *)0x0) {
        (*pcStack_250)(auStack_268);
      }
      if ((_auStack_3f0 & 1) != 0) {
        func_0x0412a280(plStack_3e0,_auStack_3f0 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_3b0 + 0xd0))();
      func_0x0ed6d560(uVar12);
      uVar19 = func_0x0eee2d70(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x04882e20(uVar19);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar11 = func_0x04882e30();
LAB_0e03d1fd:
    fVar39 = (float)uVar11;
LAB_0e03d215:
    fVar39 = (float)func_0x0eee3ab0(fVar39 / *(float *)(plStack_408 + 4));
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
    if (param_2 <= plVar15) goto LAB_0e03d2dd;
  }
  else {
    unaff_R15 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < unaff_R15)) {
      uStack_2f8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_2f8);
      if ((uStack_2f8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar39 = (float)func_0x0eee3ab0((float)unaff_R15 / *(float *)(plStack_408 + 4));
    plVar17 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    plVar15 = (long *)0x2;
    if ((plVar17 == (long *)0x1) ||
       (plVar15 = plVar17, ((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0)) {
      param_2 = (long *)plStack_408[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) goto LAB_0e03ce18;
    }
    else {
      plVar15 = (long *)func_0x0412c3f0();
      param_2 = (long *)plStack_408[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) {
LAB_0e03ce18:
        if (!bVar38) goto LAB_0e03d2dd;
        uVar11 = plStack_408[3];
        if ((long)uVar11 < 0) goto LAB_0e03d1fd;
        fVar39 = (float)(long)uVar11;
        goto LAB_0e03d215;
      }
    }
  }
  func_0x0e03a1f0(plStack_408,plVar15);
LAB_0e03d2dd:
  plStack_398 = param_3;
  func_0x0ed6d600(&lStack_2f0,*param_5);
  if (unaff_R15 == 0) {
    return;
  }
  uStack_338 = 0x1b0000014af0d9;
  uStack_330 = 0x38000001448967;
  pbStack_3a0 = (byte *)0x3a000001208ef5;
  plStack_308 = plStack_408 + 2;
  uVar11 = 0;
  plVar15 = plStack_3b0;
LAB_0e03d398:
  if ((*(uint *)(lStack_2f0 + 0x2b0) != 0xffffffff) && (uStack_2e8 <= *(uint *)(lStack_2f0 + 0x2b0))
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
      uStack_320 = uStack_330;
      func_0x0ed5ffe0(*param_5,8,&uStack_320);
      if ((uStack_320 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_320 & 0xff00ffffffffffff) - 8);
      }
      uStack_320 = 0;
      goto LAB_0e03dd80;
    }
    uStack_3e8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3f8 = (uint *)0x0;
    _auStack_3f0 = 0;
    plStack_3d8 = (long *)0x0;
    lStack_240 = plStack_398[5];
    puStack_258 = (undefined8 *)&UNK_05e9f930;
    uStack_248 = 0xc98820d1;
    pcStack_250 = (code *)0x0;
    cStack_244 = '\x03';
    auStack_268 = (undefined1  [8])&uStack_3f8;
    uStack_238 = 0;
    puStack_230 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_2c0,plVar15,auStack_268,uStack_300,&uStack_2b8);
    (**(code **)(*plVar15 + 0xd0))(plVar15);
    cVar8 = (**(code **)(*plVar15 + 0xb8))(plVar15,&UNK_0138e8dd,5);
    puVar30 = uStack_3f8;
    if (cVar8 != '\0') {
      puVar36 = (uint *)plStack_408[1];
      if (puVar36 != (uint *)0x0) {
        uVar12 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          puVar27 = (uint *)((long)puVar36 - 1U & (ulong)uStack_3f8);
        }
        else {
          puVar27 = uStack_3f8;
          if (puVar36 <= uStack_3f8) {
            if (((ulong)uStack_3f8 | (ulong)puVar36) >> 0x20 == 0) {
              puVar27 = (uint *)(((ulong)uStack_3f8 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff));
            }
            else {
              puVar27 = (uint *)((ulong)uStack_3f8 % (ulong)puVar36);
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_408 + (long)puVar27 * 8);
        puStack_3c8 = puVar27;
        if ((puVar35 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar35, plVar17 != (long *)0x0))
        {
          plStack_3a8 = plStack_3e0;
          uVar25 = uStack_3e8;
          if ((_auStack_3f0 & 1) == 0) {
            plStack_3a8 = (long *)(auStack_3f0 + 1);
            uVar25 = _auStack_3f0 >> 1 & 0x7f;
          }
          plStack_390 = plStack_3d8;
          plVar15 = plStack_3d8;
          uStack_3c0 = uVar25;
          if ((byte)(uVar12 >> 0x38) < 2) {
            uVar12 = (long)puVar36 - 1;
            uStack_310 = uVar12;
            do {
              if ((uint *)plVar17[1] == puVar30) {
                if ((uint *)plVar17[2] == puVar30) {
                  plVar34 = plVar17 + 2;
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_3f8)
                  goto LAB_0e03dc86;
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
                    iVar9 = func_0x0eee3000(lVar18,plStack_3a8,uVar25);
                    uVar12 = uStack_310;
                    puVar27 = puStack_3c8;
                    plVar15 = plStack_390;
                    uVar25 = uStack_3c0;
                    if (iVar9 == 0) goto LAB_0e03de98;
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
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_3f8)
                  goto LAB_0e03dc86;
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
                    iVar9 = func_0x0eee3000(lVar18,plStack_3a8,uVar25);
                    puVar27 = puStack_3c8;
                    plVar15 = plStack_390;
                    uVar25 = uStack_3c0;
                    if (iVar9 == 0) goto LAB_0e03de98;
                  }
                }
                plVar17[6] = 0;
              }
              else {
                if (puVar36 <= puVar28) {
                  if (((ulong)puVar28 | (ulong)puVar36) >> 0x20 == 0) {
                    if ((uint *)(((ulong)puVar28 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff)) ==
                        puVar27) goto LAB_0e03d797;
                    break;
                  }
                  puVar28 = (uint *)((ulong)puVar28 % (ulong)puVar36);
                }
                if (puVar28 != puVar27) break;
              }
LAB_0e03d797:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x268);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x268,0);
      }
      uStack_370 = plStack_408;
      puStack_368 = (undefined *)0x0;
      *plVar17 = 0;
      plVar17[1] = (long)puVar30;
      plVar17[2] = 0;
      plVar17[3] = 0;
      plVar17[4] = 0;
      plVar17[5] = 0;
      plVar17[6] = 0;
      uStack_378 = plVar17;
      if (plVar17 + 2 != &uStack_3f8) {
        if ((_auStack_3f0 & 1) == 0) {
          plVar17[5] = (long)plStack_3e0;
          *(undefined1 (*) [4])(plVar17 + 3) = auStack_3f0;
          *(undefined4 *)((long)plVar17 + 0x1c) = uStack_3ec;
          *(undefined4 *)(plVar17 + 4) = (undefined4)uStack_3e8;
          *(undefined4 *)((long)plVar17 + 0x24) = uStack_3e8._4_4_;
        }
        else {
          func_0x04885070(plVar17 + 3,plStack_3e0,uStack_3e8);
        }
      }
      plVar17[2] = (long)uStack_3f8;
      func_0x0eee2dd0(plVar17 + 7,0,0x230);
      *(undefined4 *)(plVar17 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar17 + 0x1e) = 2;
      plVar17[0x2c] = 0;
      plVar17[0x2d] = 0;
      plVar17[0x2e] = 0;
      plVar17[0x2f] = 0;
      *(undefined4 *)(plVar17 + 0x30) = 0x3f800000;
      *(undefined4 *)(plVar17 + 0x43) = 2;
      *(undefined4 *)(plVar17 + 0x44) = 0x10;
      puStack_368 = (undefined *)CONCAT71(puStack_368._1_7_,1);
      if ((long)puVar36 < 0) {
        fVar40 = (float)puVar36;
        fVar39 = *(float *)(plStack_408 + 4);
        if (puVar36 != (uint *)0x0) goto LAB_0e03d9b2;
LAB_0e03d9c3:
        uVar12 = 1;
        if ((uint *)0x2 < puVar36) {
          uVar12 = (ulong)(((ulong)puVar36 & (long)puVar36 - 1U) != 0);
        }
        uVar12 = (long)puVar36 * 2 | uVar12;
        fVar39 = (float)func_0x0eee3ab0((float)(plStack_408[3] + 1) / fVar39);
        uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if (uVar25 < uVar12) {
          uVar25 = uVar12;
        }
        uVar12 = 2;
        if ((uVar25 == 1) || (uVar12 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
          uVar25 = plStack_408[1];
          bVar38 = uVar12 < uVar25;
          if (uVar12 <= uVar25) goto LAB_0e03db20;
LAB_0e03da3c:
          func_0x0e03a1f0(plStack_408,uVar12);
        }
        else {
          uVar12 = func_0x0412c3f0();
          uVar25 = plStack_408[1];
          bVar38 = uVar12 < uVar25;
          if (uVar25 < uVar12) goto LAB_0e03da3c;
LAB_0e03db20:
          if (bVar38) {
            fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_408[3] /
                                            *(float *)(plStack_408 + 4));
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
            if (uVar12 < uVar25) goto LAB_0e03da3c;
          }
        }
        puVar36 = (uint *)plStack_408[1];
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
        fVar39 = *(float *)(plStack_408 + 4);
        if (puVar36 == (uint *)0x0) goto LAB_0e03d9c3;
LAB_0e03d9b2:
        puVar27 = puStack_3c8;
        if (fVar40 * fVar39 < (float)(plStack_408[3] + 1)) goto LAB_0e03d9c3;
      }
      lVar18 = *plStack_408;
      plVar15 = *(long **)(lVar18 + (long)puVar27 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar17 = *plStack_308;
        *plStack_308 = (long)plVar17;
        *(long **)(lVar18 + (long)puVar27 * 8) = plStack_308;
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
                goto LAB_0e03dc7e;
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
LAB_0e03dc7e:
      plStack_408[3] = plStack_408[3] + 1;
      goto LAB_0e03dc86;
    }
    uStack_328 = (ulong)pbStack_3a0;
    func_0x0ed5ffe0(*param_5,8,&uStack_328);
    if ((uStack_328 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_328 & 0xff00ffffffffffff) - 8);
    }
    uStack_328 = 0;
    goto LAB_0e03dd41;
  }
  uStack_318 = uStack_338;
  func_0x0ed5ffe0(*param_5,8,&uStack_318);
  if ((uStack_318 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_318 & 0xff00ffffffffffff) - 8);
  }
  uStack_318 = 0;
  goto LAB_0e03dd80;
LAB_0e03cbb0:
  pbVar31 = pbStack_3a0;
  param_5 = puStack_3b8;
  cVar8 = (char)uStack_3c0;
  func_0x0dede8a0(plVar17);
  bVar7 = *pbVar31;
  goto joined_r0x0e03cbcc;
LAB_0e03cc1e:
  pbVar31 = pbStack_3a0;
  param_5 = puStack_3b8;
  cVar8 = (char)uStack_3c0;
  plVar34[6] = (long)plStack_3a8;
  plVar15[6] = (long)plVar37;
  func_0x0dede8a0(plVar17);
  bVar7 = *pbVar31;
joined_r0x0e03cbcc:
  if ((bVar7 & 1) != 0) {
    func_0x0412a280(plVar15[5],plVar15[3] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar15,0x268);
  plVar17 = plStack_398;
  func_0x0dede8a0(auStack_268);
  if (cVar8 != '\0') {
LAB_0e03ca10:
    func_0x0412a280(uStack_3e8,(ulong)uStack_3f8 & 0xfffffffffffffffe);
  }
LAB_0e03ca23:
  plVar15 = plStack_3b0;
  auStack_268 = (undefined1  [8])(plVar34 + 7);
  lStack_240 = plVar17[5];
  puStack_258 = (undefined8 *)&UNK_0dedd930;
  uStack_248 = 0x82e16af;
  pcStack_250 = (code *)0x0;
  cStack_244 = '\x03';
  uStack_238 = 0;
  puStack_230 = &UNK_0dedd910;
  func_0x0ed75bc0(&puStack_2c8,plStack_3b0,auStack_268,uStack_300,&uStack_290);
  uVar11 = uStack_338;
  if (pcStack_250 != (code *)0x0) {
    (*pcStack_250)(auStack_268);
  }
  lVar18 = *(long *)(puStack_3c8 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puStack_3c8 * 0x20);
  *puStack_3c8 = uVar32;
  if (puStack_3c8[0x48] == 0) {
    uVar20 = puStack_3c8[4];
  }
  else if ((*(uint *)(*(long *)(puStack_3c8 + 0x46) + 0x18 + (ulong)(puStack_3c8[0x48] - 1) * 0x30)
            == uVar32) || (uVar20 = puStack_3c8[4], uVar32 != uVar20 - 1)) goto LAB_0e03bde8;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_268,lVar13 + -0x18);
    uVar20 = puStack_3c8[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puStack_3c8[4] = uVar20 - 1;
LAB_0e03bde8:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
LAB_0e03bdfc:
  uStack_330 = uStack_330 + 1;
  if (uStack_330 == uVar11) {
    return;
  }
  goto LAB_0e03be08;
LAB_0e03de98:
  plVar17[6] = (long)&uStack_3f8;
  plStack_3d8 = plVar34;
LAB_0e03dc86:
  plVar15 = plStack_3b0;
  uStack_378 = plVar17 + 7;
  lStack_350 = plStack_398[5];
  puStack_368 = &UNK_0dedd930;
  iStack_358 = 0x82e16af;
  pcStack_360 = (code *)0x0;
  uStack_354 = 3;
  uStack_348 = 0;
  puStack_340 = &UNK_0dedd910;
  func_0x0ed75bc0(&puStack_2c8,plStack_3b0,&uStack_378,uStack_300,&uStack_290);
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  param_5 = puStack_3b8;
  if (pcStack_360 != (code *)0x0) {
    (*pcStack_360)(&uStack_378);
  }
LAB_0e03dd41:
  if (pcStack_250 != (code *)0x0) {
    (*pcStack_250)(auStack_268);
  }
  if ((_auStack_3f0 & 1) != 0) {
    func_0x0412a280(plStack_3e0,_auStack_3f0 & 0xfffffffffffffffe);
  }
LAB_0e03dd80:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  lVar18 = *(long *)(puVar14 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puVar14 * 0x20);
  *puVar14 = uVar32;
  if (puVar14[0x48] == 0) {
    uVar20 = puVar14[4];
  }
  else if ((*(uint *)(*(long *)(puVar14 + 0x46) + 0x18 + (ulong)(puVar14[0x48] - 1) * 0x30) ==
            uVar32) || (uVar20 = puVar14[4], uVar32 != uVar20 - 1)) goto LAB_0e03d38c;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_268,lVar13 + -0x18);
    uVar20 = puVar14[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puVar14[4] = uVar20 - 1;
LAB_0e03d38c:
  uVar11 = (ulong)((int)uVar11 + 1);
  if (unaff_R15 <= uVar11) {
    return;
  }
  goto LAB_0e03d398;
}


