/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdd69e60 (ELF vaddr 0xdc69e60)
 * Label: caller-of-callee
 * Body:  [[0dd69e60, 0dd6a576] [0dd6a580, 0dd6a6cd] [0dd6a6d0, 0dd6a705] [0dd6a710, 0dd6a804] [0dd6a810, 0dd6a9b1] [0dd6a9c0, 0dd6aac8] [0dd6aad0, 0dd6ab28] [0dd6ab30, 0dd6ab46] [0dd6ab50, 0dd6ab96] [0dd6aba0, 0dd6add6] [0dd6ade0, 0dd6b7be] [0dd6b7c0, 0dd6b9b1] [0dd6b9c0, 0dd6bc23] [0dd6bc30, 0dd6bef3] [0dd6bf00, 0dd6c1f2] [0dd6c200, 0dd6c395] [0dd6c3a1, 0dd6c3b2] [0dd6c5d9, 0dd6c60b] [0dd6c64b, 0dd6c679]]
 * Ghidra: FUN_0dd69e60
 */


/* WARNING: Removing unreachable block (ram,0x0dd6b23a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dd69e60(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,ulong *param_5)

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
  long *plStack_378;
  undefined8 uStack_368;
  undefined1 auStack_360 [4];
  undefined4 uStack_35c;
  undefined8 uStack_358;
  long *plStack_350;
  long *plStack_348;
  uint *puStack_338;
  ulong uStack_330;
  ulong *puStack_328;
  long *plStack_320;
  long *plStack_318;
  byte *pbStack_310;
  long *plStack_308;
  long *plStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  code *pcStack_2d0;
  int iStack_2c8;
  undefined1 uStack_2c4;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  long lStack_260;
  uint uStack_258;
  ulong uStack_250;
  undefined1 auStack_248 [16];
  undefined *puStack_238;
  undefined *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined4 uStack_210;
  byte bStack_20c;
  undefined1 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  byte bStack_1e4;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  code *pcStack_1c0;
  undefined4 uStack_1b8;
  char cStack_1b4;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_40;
  
  pcVar10 = (code *)param_3[7];
  plStack_320 = param_2;
  uStack_270 = param_4;
  if (pcVar10 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar38 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar38 = (undefined *)param_3[7] == &UNK_0dd6dc80;
    }
    param_3[2] = (long)&UNK_0dd6de20;
    *(undefined4 *)(param_3 + 4) = 0xf2aa7d4;
    param_3[3] = (long)&UNK_0dd6e060;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(0x28);
      param_2 = plStack_320;
    }
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    *(undefined4 *)(plVar15 + 4) = 0x3f800000;
    *param_3 = (long)plVar15;
    pcVar10 = (code *)&UNK_0dd6dc80;
    param_3[7] = (long)&UNK_0dd6dc80;
    if (bVar38) {
      lVar18 = param_3[6];
    }
    else {
      lVar18 = 0;
    }
    param_3[6] = lVar18;
    cVar8 = '\x01';
    plStack_378 = plVar15;
LAB_0dd69f8c:
    puStack_230 = &UNK_0f012348;
    if (plStack_378 == (long *)0x0) goto LAB_0dd69f93;
  }
  else {
    cVar8 = *(char *)((long)param_3 + 0x24);
    plVar15 = (long *)*param_3;
    plStack_378 = plVar15;
    if (cVar8 == '\x02') {
      plStack_378 = param_3;
    }
    if ((int)param_3[4] == 0xf2aa7d4) goto LAB_0dd69f8c;
LAB_0dd69f93:
    puStack_230 = &UNK_0f012348;
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
    plStack_378 = (long *)func_0x0488e200(lVar18,lVar13,&UNK_0f2aa7d4,plVar15);
  }
  uStack_200 = *param_5;
  uStack_1f8 = param_5[1];
  plVar15 = (long *)param_5[2];
  uStack_228 = uStack_200;
  uStack_220 = uStack_1f8;
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
    puStack_218 = (undefined8 *)0x0;
  }
  else {
    puStack_218 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0);
    uStack_200 = *param_5;
    uStack_1f8 = param_5[1];
    plVar15 = (long *)param_5[2];
  }
  uStack_210 = (undefined4)param_5[3];
  bStack_20c = *(byte *)((long)param_5 + 0x1c);
  uStack_208 = 1;
  puStack_238 = &UNK_0f49d2f0;
  if (plVar15 == (long *)0x0) {
    uStack_1f0 = 0;
  }
  else {
    uStack_1f0 = (**(code **)(*plVar15 + 0x30))(plVar15,1);
  }
  uStack_1e8 = (undefined4)param_5[3];
  bStack_1e4 = *(byte *)((long)param_5 + 0x1c);
  uStack_1e0 = 1;
  bVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_328 = param_5;
  if (bVar7 == 1) {
    uVar11 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar12 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar12 < uVar11)) {
      uStack_250 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_250);
      if ((uStack_250 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_260,*param_5);
    if (uVar11 == 0) {
      return;
    }
    plStack_278 = plStack_378 + 2;
    uStack_2a0 = 0;
    plStack_308 = param_3;
    uStack_2a8 = uVar11;
LAB_0dd6a268:
    uVar32 = uStack_258;
    lVar18 = lStack_260;
    if (uStack_258 <= *(uint *)(lStack_260 + 0x2b0) && *(uint *)(lStack_260 + 0x2b0) != 0xffffffff)
    {
      return;
    }
    auVar41 = (**(code **)(*plStack_320 + 0xc0))();
    puVar35 = puStack_218;
    auStack_248 = auVar41;
    if (puStack_218 != (undefined8 *)0x0) {
      lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar18 == 0) {
        func_0x048b0de0(&uStack_2e8,&uStack_368);
        _DAT_0f54fd90 = (undefined4)uStack_2e8;
        uRam000000000f54fd94 = uStack_2e8._4_4_;
        uVar3 = (undefined4)uStack_2e0;
        uVar4 = uStack_2e0._4_4_;
        uStack_2e8 = (long *)0x0;
        uStack_2e0 = (long *)0x0;
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
        plVar15 = uStack_2e0;
        if (uStack_2e0 != (long *)0x0) {
          LOCK();
          plVar17 = uStack_2e0 + 1;
          lVar18 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*uStack_2e0 + 0x10))(uStack_2e0);
            func_0x0412c2d0(plVar15);
          }
        }
        lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar11 = uStack_2a8;
      }
      puStack_1c8 = (undefined8 *)&UNK_05ea5bd0;
      uStack_1b8 = 0x989eedf9;
      pcStack_1c0 = (code *)0x0;
      cStack_1b4 = '\x04';
      auStack_1d8 = (undefined1  [8])auStack_248;
      uStack_1a8 = 0;
      puStack_1a0 = &UNK_05ea5bb0;
      lStack_1b0 = lVar18;
      (**(code **)*puVar35)(puVar35,auStack_1d8,uStack_228);
      lVar18 = lStack_260;
      uVar32 = uStack_258;
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
        lVar18 = lStack_260;
        uVar32 = uStack_258;
      }
    }
    uVar5 = auStack_248._8_8_;
    uVar19 = auStack_248._0_8_;
    if ((*(uint *)(lVar18 + 0x2b0) != 0xffffffff) && (uVar32 <= *(uint *)(lVar18 + 0x2b0)))
    goto LAB_0dd6a25c;
    uVar11 = *param_5;
    uStack_2f0 = 0;
    if (auStack_248._0_8_ == 0) {
      uVar12 = (auStack_248._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar18 = auStack_248._8_8_ + 9;
      param_5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && param_5 == (ulong *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *param_5 = uVar5;
      func_0x0eee2f00(param_5 + 1,uVar19,uVar5);
      *(byte *)((long)param_5 + uVar5 + 8) = 0;
      uVar12 = (ulong)(param_5 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_2f0 = uVar12;
    puVar14 = (uint *)func_0x0ed6d180(uVar11,&uStack_2f0,0);
    if ((uStack_2f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
    }
    uVar11 = auStack_248._8_8_;
    uVar19 = auStack_248._0_8_;
    uStack_2f0 = 0;
    puStack_338 = puVar14;
    if ((ulong)auStack_248._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_248._8_8_ < 0x17) {
        uStack_368 = (uint *)CONCAT71(uStack_368._1_7_,auStack_248[8] * '\x02');
        uVar25 = (long)&uStack_368 + 1;
        if (auStack_248._8_8_ != 0) goto LAB_0dd6a5c7;
      }
      else {
        uVar12 = (auStack_248._8_8_ | 7) + 1;
        if ((auStack_248._8_8_ | 7) == 0x17) {
          uVar12 = 0x1a;
        }
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (uVar25 == 0) {
          FUN_0eec74c0(uVar12,0);
        }
        uStack_368 = (uint *)(uVar12 | 1);
        _auStack_360 = uVar11;
        uStack_358 = uVar25;
LAB_0dd6a5c7:
        func_0x0eee2ee0(uVar25,uVar19,uVar11);
      }
      *(undefined1 *)(uVar25 + uVar11) = 0;
      puStack_1c8 = (undefined8 *)0x0;
      pcStack_1c0 = (code *)0x0;
      auStack_1d8 = (undefined1  [8])0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0x3f800000;
      uStack_120 = 2;
      uStack_118 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_40 = 0;
      uStack_100 = 0;
      uStack_ff = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_107 = 0;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d8);
      if (plVar15 == (long *)0x0) {
        FUN_0eec74c0(0x1d8,0);
      }
      uStack_2e0 = plStack_378;
      puStack_2d8 = (undefined *)0x0;
      pbVar31 = (byte *)(plVar15 + 3);
      *plVar15 = 0;
      plVar15[1] = 0;
      plVar15[2] = 0;
      uVar2 = (undefined1)uStack_368;
      uStack_2e8 = plVar15;
      if (((ulong)uStack_368 & 1) == 0) {
        plVar15[5] = uStack_358;
        *(undefined4 *)pbVar31 = (undefined4)uStack_368;
        *(undefined4 *)((long)plVar15 + 0x1c) = uStack_368._4_4_;
        *(undefined1 (*) [4])(plVar15 + 4) = auStack_360;
        *(undefined4 *)((long)plVar15 + 0x24) = uStack_35c;
      }
      else {
        func_0x0412e5e0(pbVar31,uStack_358,_auStack_360);
      }
      plVar15[6] = 0;
      bVar7 = *(byte *)(plVar15 + 3);
      pbStack_310 = pbVar31;
      if ((bVar7 & 1) == 0) {
        if (bVar7 >> 1 != 0) goto LAB_0dd6a722;
LAB_0dd6a810:
        uVar11 = 0;
      }
      else {
        if (plVar15[4] == 0) goto LAB_0dd6a810;
LAB_0dd6a722:
        if ((bVar7 & 1) == 0) {
          pbVar31 = (byte *)((long)plVar15 + 0x19);
          if (pbVar31 != (byte *)0x0) goto LAB_0dd6a741;
          goto LAB_0dd6a810;
        }
        pbVar31 = (byte *)plVar15[5];
        if (pbVar31 == (byte *)0x0) goto LAB_0dd6a810;
LAB_0dd6a741:
        if (*pbVar31 == 0) goto LAB_0dd6a810;
        uVar12 = strlen(pbVar31);
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
      uStack_330 = CONCAT71(uStack_330._1_7_,uVar2) & 0xffffffffffffff01;
      plVar15[2] = uVar11;
      plVar17 = plVar15 + 7;
      func_0x0dd6d9b0(plVar17,auStack_1d8);
      puStack_2d8 = (undefined *)CONCAT71(puStack_2d8._1_7_,1);
      uVar11 = plVar15[2];
      plVar15[1] = uVar11;
      uVar12 = plStack_378[1];
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
        puVar35 = *(undefined8 **)(*plStack_378 + uVar26 * 8);
        if ((puVar35 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar35, plVar34 != (long *)0x0))
        {
          plVar33 = plVar15 + 2;
          plStack_300 = (long *)((long)plVar15 + 0x19);
          plStack_318 = plVar33;
          if ((byte)(uVar25 >> 0x38) < 2) {
            uVar25 = uVar12 - 1;
            uStack_280 = uVar25;
            do {
              if (plVar34[1] == uVar11) {
                if (plVar34[2] == uVar11) {
                  plVar37 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar33) && ((long *)plVar15[6] == plVar37))
                  goto LAB_0dd6aff0;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar29 = (ulong)(bVar7 >> 1);
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0dd6aae8;
LAB_0dd6aabe:
                    if (uVar29 != uVar23 >> 1) goto LAB_0dd6aa68;
                  }
                  else {
                    uVar29 = plVar34[4];
                    uVar23 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0dd6aabe;
LAB_0dd6aae8:
                    if (uVar29 != plVar15[4]) goto LAB_0dd6aa68;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_300;
                  if ((uVar23 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  uVar25 = uStack_280;
                  plVar33 = plStack_318;
                  if (iVar9 == 0) goto LAB_0dd6b05e;
                }
LAB_0dd6aa68:
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
                  goto LAB_0dd6aff0;
                  bVar7 = *(byte *)(plVar34 + 3);
                  if ((bVar7 & 1) == 0) {
                    uVar25 = (ulong)(bVar7 >> 1);
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) != 0) goto LAB_0dd6a9f5;
LAB_0dd6a9a7:
                    if (uVar25 != uVar29 >> 1) goto LAB_0dd6a951;
                  }
                  else {
                    uVar25 = plVar34[4];
                    uVar29 = (ulong)*(byte *)(plVar15 + 3);
                    if ((*(byte *)(plVar15 + 3) & 1) == 0) goto LAB_0dd6a9a7;
LAB_0dd6a9f5:
                    if (uVar25 != plVar15[4]) goto LAB_0dd6a951;
                  }
                  if ((bVar7 & 1) == 0) {
                    lVar18 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar18 = plVar34[5];
                  }
                  plVar33 = plStack_300;
                  if ((uVar29 & 1) != 0) {
                    plVar33 = (long *)plVar15[5];
                  }
                  iVar9 = func_0x0eee3000(lVar18,plVar33);
                  plVar33 = plStack_318;
                  if (iVar9 == 0) goto LAB_0dd6b05e;
                }
LAB_0dd6a951:
                plVar34[6] = 0;
              }
              else {
                if (uVar12 <= uVar25) {
                  if ((uVar25 | uVar12) >> 0x20 == 0) {
                    if ((uVar25 & 0xffffffff) % (uVar12 & 0xffffffff) == uVar26) goto LAB_0dd6a95a;
                    break;
                  }
                  uVar25 = uVar25 % uVar12;
                }
                if (uVar25 != uVar26) break;
              }
LAB_0dd6a95a:
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
      }
      plVar17 = plStack_308;
      param_5 = puStack_328;
      if ((long)uVar12 < 0) {
        fVar40 = (float)uVar12;
        fVar39 = *(float *)(plStack_378 + 4);
        if (uVar12 == 0) goto LAB_0dd6abc1;
LAB_0dd6abb4:
        if (fVar40 * fVar39 < (float)(plStack_378[3] + 1)) goto LAB_0dd6abc1;
        goto LAB_0dd6ad60;
      }
      fVar40 = (float)(long)uVar12;
      fVar39 = *(float *)(plStack_378 + 4);
      if (uVar12 != 0) goto LAB_0dd6abb4;
LAB_0dd6abc1:
      uVar11 = 1;
      if (2 < uVar12) {
        uVar11 = (ulong)((uVar12 & uVar12 - 1) != 0);
      }
      uVar11 = uVar12 * 2 | uVar11;
      fVar39 = (float)func_0x0eee3ab0((float)(plStack_378[3] + 1) / fVar39);
      uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
      if (uVar25 < uVar11) {
        uVar25 = uVar11;
      }
      uVar11 = 2;
      if ((uVar25 == 1) || (uVar11 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
        bVar38 = uVar11 < uVar12;
        if (uVar11 <= uVar12) goto LAB_0dd6ac54;
LAB_0dd6ac2e:
        func_0x0dd68670(plStack_378,uVar11);
      }
      else {
        uVar11 = func_0x0412c3f0();
        uVar12 = plStack_378[1];
        bVar38 = uVar11 < uVar12;
        if (uVar12 < uVar11) goto LAB_0dd6ac2e;
LAB_0dd6ac54:
        if (bVar38) {
          fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_378[3] / *(float *)(plStack_378 + 4)
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
          if (uVar11 < uVar12) goto LAB_0dd6ac2e;
        }
      }
LAB_0dd6ad60:
      uVar11 = plStack_378[1];
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
      lVar18 = *plStack_378;
      plVar34 = *(long **)(lVar18 + uVar12 * 8);
      if (plVar34 == (long *)0x0) {
        *plVar15 = *plStack_278;
        *plStack_278 = (long)plVar15;
        *(long **)(lVar18 + uVar12 * 8) = plStack_278;
        if (*plVar15 != 0) {
          uVar12 = *(ulong *)(*plVar15 + 8);
          if ((byte)(uVar25 >> 0x38) < 2) {
            *(long **)(lVar18 + (uVar12 & uVar11 - 1) * 8) = plVar15;
          }
          else {
            if (uVar11 <= uVar12) {
              if ((uVar12 | uVar11) >> 0x20 == 0) {
                *(long **)(lVar18 + ((uVar12 & 0xffffffff) % (uVar11 & 0xffffffff)) * 8) = plVar15;
                goto LAB_0dd6ae2d;
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
LAB_0dd6ae2d:
      plStack_378[3] = plStack_378[3] + 1;
      uVar11 = (ulong)uStack_368 & 1;
      func_0x0dc7b7a0(auStack_1d8);
      plVar34 = plVar15;
      if (uVar11 != 0) goto LAB_0dd6ae50;
      goto LAB_0dd6ae63;
    }
    func_0x04882e30();
    goto LAB_0dd6c344;
  }
  if ((bVar7 & 2) == 0) {
    lVar18 = param_3[5];
    lVar13 = func_0x048b2190(lVar18);
    plVar15 = *(long **)(lVar13 + 0x78);
    if (plVar15 == (long *)0x0) {
LAB_0dd6a1c4:
      if (*(code **)(lVar13 + 0x30) == (code *)0x0) {
        puStack_2d8 = &UNK_0488e0b0;
        iStack_2c8 = 0x48b5725f;
        pcStack_2d0 = (code *)0x0;
        uStack_2c4 = 0;
        uStack_2e8 = (long *)0x0;
        uStack_2b8 = 0;
        puStack_2b0 = (undefined *)0x0;
        lStack_2c0 = lVar18;
        goto LAB_0dd6b299;
      }
      (**(code **)(lVar13 + 0x30))(&uStack_2e8,lVar18);
      if (iStack_2c8 != -0x3677df2f) goto LAB_0dd6b299;
LAB_0dd6b2fe:
      plVar15 = (long *)&UNK_0133e465;
      uVar11 = strlen(&UNK_0133e465);
    }
    else {
      lVar24 = *plVar15;
      if (lVar24 == 0 || lVar24 == plVar15[1]) goto LAB_0dd6a1c4;
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
      if (bVar1 || lVar22 == 0) goto LAB_0dd6a1c4;
      (**(code **)(lVar22 + 0x18))(&uStack_2e8,lVar18,0);
      if (iStack_2c8 == -0x3677df2f) goto LAB_0dd6b2fe;
LAB_0dd6b299:
      func_0x05ea6440(auStack_1d8,&uStack_2e8);
      puVar6 = puStack_1a0;
      if ((puStack_1a0 != (undefined *)0x0) && ((byte)(cStack_1b4 - 1U) < 2)) {
        func_0x048b0900(&uStack_2e8,auStack_1d8);
      }
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
      }
      if (puVar6 != (undefined *)0x0) goto LAB_0dd6b2fe;
      plVar15 = (long *)&UNK_01411d3a;
      uVar11 = strlen(&UNK_01411d3a);
    }
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_368._1_7_ = (undefined7)((ulong)uStack_368 >> 8);
        uStack_368 = (uint *)CONCAT71(uStack_368._1_7_,(char)uVar11 * '\x02');
        uVar25 = (long)&uStack_368 + 1;
        if (uVar11 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_368._1_1_ = 0;
          goto joined_r0x0dd6b3b0;
        }
      }
      else {
        uVar12 = 0x1a;
        if ((uVar11 | 7) != 0x17) {
          uVar12 = (uVar11 | 7) + 1;
        }
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
        if (uVar25 == 0) {
          FUN_0eec74c0(uVar12,0);
        }
        uStack_368 = (uint *)(uVar12 | 1);
        _auStack_360 = uVar11;
        uStack_358 = uVar25;
      }
      func_0x0eee2f00(uVar25,plVar15,uVar11);
      *(undefined1 *)(uVar25 + uVar11) = 0;
joined_r0x0dd6b3b0:
      if (pcStack_2d0 != (code *)0x0) {
        (*pcStack_2d0)(&uStack_2e8);
      }
      puVar14 = uStack_368;
      uVar12 = (ulong)uStack_368 & 0xff;
      uVar25 = _auStack_360;
      if (((ulong)uStack_368 & 1) == 0) {
        uVar25 = (ulong)uStack_368 >> 1 & 0x7f;
      }
      uVar11 = uVar25 + 0xc;
      if (uVar11 < 0xfffffffffffffff8) {
        uVar12 = *param_5;
        if (uVar11 < 0x17) {
          uStack_1d0 = 0;
          puStack_1c8 = (undefined8 *)0x0;
          auStack_1d8._1_7_ = 0;
          auStack_1d8[0] = (char)uVar11 * '\x02';
        }
        else {
          uVar26 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar26 = (uVar11 | 7) + 1;
          }
          puStack_1c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
          if (puStack_1c8 == (undefined8 *)0x0) {
            FUN_0eec74c0(uVar26,0);
          }
          auStack_1d8 = (undefined1  [8])(uVar26 | 1);
          uStack_1d0 = uVar11;
        }
        lVar18 = (long)puStack_1c8 + 0xc;
        bVar38 = ((ulong)auStack_1d8 & 1) == 0;
        puVar35 = puStack_1c8;
        if (bVar38) {
          puVar35 = (undefined8 *)(auStack_1d8 + 1);
        }
        *puVar35 = 0x6465746365707865;
        *(undefined4 *)(puVar35 + 1) = 0x206e6120;
        lVar13 = (long)&uStack_1d0 + 5;
        if (!bVar38) {
          lVar13 = lVar18;
        }
        if (uVar25 != 0) {
          uVar11 = uStack_358;
          if (((ulong)puVar14 & 1) == 0) {
            uVar11 = (long)&uStack_368 + 1;
          }
          func_0x0eee2ee0(lVar13,uVar11,uVar25);
        }
        *(undefined1 *)(lVar13 + uVar25) = 0;
        uVar11 = (ulong)auStack_1d8 >> 1 & 0x7f;
        puVar35 = (undefined8 *)(auStack_1d8 + 1);
        if (((ulong)auStack_1d8 & 1) != 0) {
          uVar11 = uStack_1d0;
          puVar35 = puStack_1c8;
        }
        uStack_2f8 = 0;
        if (puVar35 == (undefined8 *)0x0) {
          uStack_2f8 = (ulong)((uint)uVar11 & 0x7f) << 0x30;
        }
        else {
          lVar18 = uVar11 + 9;
          puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
          if (lVar18 != 0 && puVar16 == (ulong *)0x0) {
            FUN_0eec74c0(lVar18,8);
          }
          *puVar16 = uVar11;
          func_0x0eee2f00(puVar16 + 1,puVar35,uVar11);
          *(undefined1 *)((long)puVar16 + uVar11 + 8) = 0;
          uStack_2f8 = (ulong)(puVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar12,8,&uStack_2f8);
        if ((uStack_2f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
        }
        uStack_2f8 = 0;
        if (((ulong)auStack_1d8 & 1) != 0) {
          func_0x0412a280(puStack_1c8,(ulong)auStack_1d8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0412a280(uStack_358,(ulong)uStack_368 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0dd6c344:
      uVar19 = func_0x04882e30();
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x0ee386e0(&uStack_268);
      uVar19 = func_0x0eee2d70(uVar19);
      if ((*param_5 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar11 + 0x28),
                        *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0dd67970(&uStack_2e8);
      if (pcStack_1c0 != (code *)0x0) {
        (*pcStack_1c0)(auStack_1d8);
      }
      if ((_auStack_360 & 1) != 0) {
        func_0x0412a280(plStack_350,_auStack_360 & 0xfffffffffffffffe);
      }
      (**(code **)(*plStack_320 + 0xd0))();
      func_0x0ed6d560(uVar12);
      uVar19 = func_0x0eee2d70(uVar19);
      uVar19 = func_0x04882e20(uVar19);
      func_0x04882e20(uVar19);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar11 = func_0x04882e30();
LAB_0dd6b63d:
    fVar39 = (float)uVar11;
LAB_0dd6b655:
    fVar39 = (float)func_0x0eee3ab0(fVar39 / *(float *)(plStack_378 + 4));
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
    if (param_2 <= plVar15) goto LAB_0dd6b71d;
  }
  else {
    unaff_R15 = (**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar11 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar11 < unaff_R15)) {
      uStack_268 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_268);
      if ((uStack_268 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar39 = (float)func_0x0eee3ab0((float)unaff_R15 / *(float *)(plStack_378 + 4));
    plVar17 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    plVar15 = (long *)0x2;
    if ((plVar17 == (long *)0x1) ||
       (plVar15 = plVar17, ((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0)) {
      param_2 = (long *)plStack_378[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) goto LAB_0dd6b258;
    }
    else {
      plVar15 = (long *)func_0x0412c3f0();
      param_2 = (long *)plStack_378[1];
      bVar38 = plVar15 < param_2;
      if (plVar15 <= param_2) {
LAB_0dd6b258:
        if (!bVar38) goto LAB_0dd6b71d;
        uVar11 = plStack_378[3];
        if ((long)uVar11 < 0) goto LAB_0dd6b63d;
        fVar39 = (float)(long)uVar11;
        goto LAB_0dd6b655;
      }
    }
  }
  func_0x0dd68670(plStack_378,plVar15);
LAB_0dd6b71d:
  plStack_308 = param_3;
  func_0x0ed6d600(&lStack_260,*param_5);
  if (unaff_R15 == 0) {
    return;
  }
  uStack_2a8 = 0x1b0000014af0d9;
  uStack_2a0 = 0x38000001448967;
  pbStack_310 = (byte *)0x3a000001208ef5;
  plStack_278 = plStack_378 + 2;
  uVar11 = 0;
  plVar15 = plStack_320;
LAB_0dd6b7d8:
  if ((*(uint *)(lStack_260 + 0x2b0) != 0xffffffff) && (uStack_258 <= *(uint *)(lStack_260 + 0x2b0))
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
      uStack_290 = uStack_2a0;
      func_0x0ed5ffe0(*param_5,8,&uStack_290);
      if ((uStack_290 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
      }
      uStack_290 = 0;
      goto LAB_0dd6c1a0;
    }
    uStack_358 = 0;
    plStack_350 = (long *)0x0;
    uStack_368 = (uint *)0x0;
    _auStack_360 = 0;
    plStack_348 = (long *)0x0;
    lStack_1b0 = plStack_308[5];
    puStack_1c8 = (undefined8 *)&UNK_05e9f930;
    uStack_1b8 = 0xc98820d1;
    pcStack_1c0 = (code *)0x0;
    cStack_1b4 = '\x03';
    auStack_1d8 = (undefined1  [8])&uStack_368;
    uStack_1a8 = 0;
    puStack_1a0 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_230,plVar15,auStack_1d8,uStack_270,&uStack_228);
    (**(code **)(*plVar15 + 0xd0))(plVar15);
    cVar8 = (**(code **)(*plVar15 + 0xb8))(plVar15,&UNK_0138e8dd,5);
    puVar30 = uStack_368;
    if (cVar8 != '\0') {
      puVar36 = (uint *)plStack_378[1];
      if (puVar36 != (uint *)0x0) {
        uVar12 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          puVar27 = (uint *)((long)puVar36 - 1U & (ulong)uStack_368);
        }
        else {
          puVar27 = uStack_368;
          if (puVar36 <= uStack_368) {
            if (((ulong)uStack_368 | (ulong)puVar36) >> 0x20 == 0) {
              puVar27 = (uint *)(((ulong)uStack_368 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff));
            }
            else {
              puVar27 = (uint *)((ulong)uStack_368 % (ulong)puVar36);
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_378 + (long)puVar27 * 8);
        puStack_338 = puVar27;
        if ((puVar35 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar35, plVar17 != (long *)0x0))
        {
          plStack_318 = plStack_350;
          uVar25 = uStack_358;
          if ((_auStack_360 & 1) == 0) {
            plStack_318 = (long *)(auStack_360 + 1);
            uVar25 = _auStack_360 >> 1 & 0x7f;
          }
          plStack_300 = plStack_348;
          plVar15 = plStack_348;
          uStack_330 = uVar25;
          if ((byte)(uVar12 >> 0x38) < 2) {
            uVar12 = (long)puVar36 - 1;
            uStack_280 = uVar12;
            do {
              if ((uint *)plVar17[1] == puVar30) {
                if ((uint *)plVar17[2] == puVar30) {
                  plVar34 = plVar17 + 2;
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_368)
                  goto LAB_0dd6c0a6;
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
                    iVar9 = func_0x0eee3000(lVar18,plStack_318,uVar25);
                    uVar12 = uStack_280;
                    puVar27 = puStack_338;
                    plVar15 = plStack_300;
                    uVar25 = uStack_330;
                    if (iVar9 == 0) goto LAB_0dd6c2b8;
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
                  if (plVar15 == plVar34 && (undefined8 *)plVar17[6] == &uStack_368)
                  goto LAB_0dd6c0a6;
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
                    iVar9 = func_0x0eee3000(lVar18,plStack_318,uVar25);
                    puVar27 = puStack_338;
                    plVar15 = plStack_300;
                    uVar25 = uStack_330;
                    if (iVar9 == 0) goto LAB_0dd6c2b8;
                  }
                }
                plVar17[6] = 0;
              }
              else {
                if (puVar36 <= puVar28) {
                  if (((ulong)puVar28 | (ulong)puVar36) >> 0x20 == 0) {
                    if ((uint *)(((ulong)puVar28 & 0xffffffff) % ((ulong)puVar36 & 0xffffffff)) ==
                        puVar27) goto LAB_0dd6bbd7;
                    break;
                  }
                  puVar28 = (uint *)((ulong)puVar28 % (ulong)puVar36);
                }
                if (puVar28 != puVar27) break;
              }
LAB_0dd6bbd7:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d8);
      if (plVar17 == (long *)0x0) {
        FUN_0eec74c0(0x1d8,0);
      }
      uStack_2e0 = plStack_378;
      puStack_2d8 = (undefined *)0x0;
      *plVar17 = 0;
      plVar17[1] = (long)puVar30;
      plVar17[2] = 0;
      plVar17[3] = 0;
      plVar17[4] = 0;
      plVar17[5] = 0;
      plVar17[6] = 0;
      uStack_2e8 = plVar17;
      if (plVar17 + 2 != &uStack_368) {
        if ((_auStack_360 & 1) == 0) {
          plVar17[5] = (long)plStack_350;
          *(undefined1 (*) [4])(plVar17 + 3) = auStack_360;
          *(undefined4 *)((long)plVar17 + 0x1c) = uStack_35c;
          *(undefined4 *)(plVar17 + 4) = (undefined4)uStack_358;
          *(undefined4 *)((long)plVar17 + 0x24) = uStack_358._4_4_;
        }
        else {
          FUN_04885070(plVar17 + 3,plStack_350,uStack_358);
        }
      }
      plVar17[2] = (long)uStack_368;
      func_0x0eee2dd0(plVar17 + 7,0,0x1a0);
      *(undefined4 *)(plVar17 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar17 + 0x1e) = 2;
      plVar17[0x20] = 0;
      plVar17[0x21] = 0;
      *(undefined8 *)((long)plVar17 + 0x109) = 0;
      *(undefined8 *)((long)plVar17 + 0x111) = 0;
      puStack_2d8 = (undefined *)CONCAT71(puStack_2d8._1_7_,1);
      if ((long)puVar36 < 0) {
        fVar40 = (float)puVar36;
        fVar39 = *(float *)(plStack_378 + 4);
        if (puVar36 != (uint *)0x0) goto LAB_0dd6bdd4;
LAB_0dd6bde5:
        uVar12 = 1;
        if ((uint *)0x2 < puVar36) {
          uVar12 = (ulong)(((ulong)puVar36 & (long)puVar36 - 1U) != 0);
        }
        uVar12 = (long)puVar36 * 2 | uVar12;
        fVar39 = (float)func_0x0eee3ab0((float)(plStack_378[3] + 1) / fVar39);
        uVar25 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if (uVar25 < uVar12) {
          uVar25 = uVar12;
        }
        uVar12 = 2;
        if ((uVar25 == 1) || (uVar12 = uVar25, (uVar25 & uVar25 - 1) == 0)) {
          uVar25 = plStack_378[1];
          bVar38 = uVar12 < uVar25;
          if (uVar12 <= uVar25) goto LAB_0dd6bf40;
LAB_0dd6be5e:
          func_0x0dd68670(plStack_378,uVar12);
        }
        else {
          uVar12 = func_0x0412c3f0();
          uVar25 = plStack_378[1];
          bVar38 = uVar12 < uVar25;
          if (uVar25 < uVar12) goto LAB_0dd6be5e;
LAB_0dd6bf40:
          if (bVar38) {
            fVar39 = (float)func_0x0eee3ab0((float)(ulong)plStack_378[3] /
                                            *(float *)(plStack_378 + 4));
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
            if (uVar12 < uVar25) goto LAB_0dd6be5e;
          }
        }
        puVar36 = (uint *)plStack_378[1];
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
        fVar39 = *(float *)(plStack_378 + 4);
        if (puVar36 == (uint *)0x0) goto LAB_0dd6bde5;
LAB_0dd6bdd4:
        puVar27 = puStack_338;
        if (fVar40 * fVar39 < (float)(plStack_378[3] + 1)) goto LAB_0dd6bde5;
      }
      lVar18 = *plStack_378;
      plVar15 = *(long **)(lVar18 + (long)puVar27 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar17 = *plStack_278;
        *plStack_278 = (long)plVar17;
        *(long **)(lVar18 + (long)puVar27 * 8) = plStack_278;
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
                goto LAB_0dd6c09e;
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
LAB_0dd6c09e:
      plStack_378[3] = plStack_378[3] + 1;
      goto LAB_0dd6c0a6;
    }
    uStack_298 = (ulong)pbStack_310;
    func_0x0ed5ffe0(*param_5,8,&uStack_298);
    if ((uStack_298 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_298 & 0xff00ffffffffffff) - 8);
    }
    uStack_298 = 0;
    goto LAB_0dd6c161;
  }
  uStack_288 = uStack_2a8;
  func_0x0ed5ffe0(*param_5,8,&uStack_288);
  if ((uStack_288 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
  }
  uStack_288 = 0;
  goto LAB_0dd6c1a0;
LAB_0dd6aff0:
  pbVar31 = pbStack_310;
  param_5 = puStack_328;
  cVar8 = (char)uStack_330;
  func_0x0dc7b7a0(plVar17);
  bVar7 = *pbVar31;
  goto joined_r0x0dd6b00c;
LAB_0dd6b05e:
  pbVar31 = pbStack_310;
  param_5 = puStack_328;
  cVar8 = (char)uStack_330;
  plVar34[6] = (long)plStack_318;
  plVar15[6] = (long)plVar37;
  func_0x0dc7b7a0(plVar17);
  bVar7 = *pbVar31;
joined_r0x0dd6b00c:
  if ((bVar7 & 1) != 0) {
    func_0x0412a280(plVar15[5],plVar15[3] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar15,0x1d8);
  plVar17 = plStack_308;
  func_0x0dc7b7a0(auStack_1d8);
  if (cVar8 != '\0') {
LAB_0dd6ae50:
    func_0x0412a280(uStack_358,(ulong)uStack_368 & 0xfffffffffffffffe);
  }
LAB_0dd6ae63:
  plVar15 = plStack_320;
  auStack_1d8 = (undefined1  [8])(plVar34 + 7);
  lStack_1b0 = plVar17[5];
  puStack_1c8 = (undefined8 *)&UNK_0dc7a1a0;
  uStack_1b8 = 0x21c72262;
  pcStack_1c0 = (code *)0x0;
  cStack_1b4 = '\x03';
  uStack_1a8 = 0;
  puStack_1a0 = &UNK_0dc7a180;
  func_0x0ed75bc0(&puStack_238,plStack_320,auStack_1d8,uStack_270,&uStack_200);
  uVar11 = uStack_2a8;
  if (pcStack_1c0 != (code *)0x0) {
    (*pcStack_1c0)(auStack_1d8);
  }
  lVar18 = *(long *)(puStack_338 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puStack_338 * 0x20);
  *puStack_338 = uVar32;
  if (puStack_338[0x48] == 0) {
    uVar20 = puStack_338[4];
  }
  else if ((*(uint *)(*(long *)(puStack_338 + 0x46) + 0x18 + (ulong)(puStack_338[0x48] - 1) * 0x30)
            == uVar32) || (uVar20 = puStack_338[4], uVar32 != uVar20 - 1)) goto LAB_0dd6a248;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_1d8,lVar13 + -0x18);
    uVar20 = puStack_338[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puStack_338[4] = uVar20 - 1;
LAB_0dd6a248:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
LAB_0dd6a25c:
  uStack_2a0 = uStack_2a0 + 1;
  if (uStack_2a0 == uVar11) {
    return;
  }
  goto LAB_0dd6a268;
LAB_0dd6c2b8:
  plVar17[6] = (long)&uStack_368;
  plStack_348 = plVar34;
LAB_0dd6c0a6:
  plVar15 = plStack_320;
  uStack_2e8 = plVar17 + 7;
  lStack_2c0 = plStack_308[5];
  puStack_2d8 = &UNK_0dc7a1a0;
  iStack_2c8 = 0x21c72262;
  pcStack_2d0 = (code *)0x0;
  uStack_2c4 = 3;
  uStack_2b8 = 0;
  puStack_2b0 = &UNK_0dc7a180;
  func_0x0ed75bc0(&puStack_238,plStack_320,&uStack_2e8,uStack_270,&uStack_200);
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  param_5 = puStack_328;
  if (pcStack_2d0 != (code *)0x0) {
    (*pcStack_2d0)(&uStack_2e8);
  }
LAB_0dd6c161:
  if (pcStack_1c0 != (code *)0x0) {
    (*pcStack_1c0)(auStack_1d8);
  }
  if ((_auStack_360 & 1) != 0) {
    func_0x0412a280(plStack_350,_auStack_360 & 0xfffffffffffffffe);
  }
LAB_0dd6c1a0:
  (**(code **)(*plVar15 + 0xd0))(plVar15);
  lVar18 = *(long *)(puVar14 + 2);
  uVar32 = *(uint *)(lVar18 + 0x1c + (ulong)*puVar14 * 0x20);
  *puVar14 = uVar32;
  if (puVar14[0x48] == 0) {
    uVar20 = puVar14[4];
  }
  else if ((*(uint *)(*(long *)(puVar14 + 0x46) + 0x18 + (ulong)(puVar14[0x48] - 1) * 0x30) ==
            uVar32) || (uVar20 = puVar14[4], uVar32 != uVar20 - 1)) goto LAB_0dd6b7cc;
  lVar13 = lVar18 + (ulong)uVar20 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar18 + -0x10 + (ulong)uVar20 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_1d8,lVar13 + -0x18);
    uVar20 = puVar14[4];
  }
  *(undefined4 *)(lVar13 + -0x10) = 0xffffffff;
  puVar14[4] = uVar20 - 1;
LAB_0dd6b7cc:
  uVar11 = (ulong)((int)uVar11 + 1);
  if (unaff_R15 <= uVar11) {
    return;
  }
  goto LAB_0dd6b7d8;
}


