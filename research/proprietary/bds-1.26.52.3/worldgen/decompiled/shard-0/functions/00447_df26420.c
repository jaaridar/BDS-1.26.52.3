/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe026420 (ELF vaddr 0xdf26420)
 * Label: caller-of-callee
 * Body:  [[0e026420, 0e0267ea] [0e0267f0, 0e026b11] [0e026b20, 0e026c83] [0e026c90, 0e026cbc] [0e026cc0, 0e026da4] [0e026db0, 0e026f46] [0e026f50, 0e027059] [0e027060, 0e0270bd] [0e0270c0, 0e0270d6] [0e0270e0, 0e02712c] [0e027130, 0e027366] [0e027370, 0e027d5e] [0e027d60, 0e027f55] [0e027f60, 0e027fd3] [0e027fe0, 0e0281e7] [0e0281f0, 0e0284d4] [0e0284e0, 0e0287c2] [0e0287d0, 0e028951] [0e02895d, 0e02896b] [0e028b8b, 0e028bbd] [0e028bfd, 0e028c2b]]
 * Ghidra: FUN_0e026420
 */


/* WARNING: Removing unreachable block (ram,0x0e0277ef) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e026420(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  byte *pbVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong *unaff_R13;
  long *plVar36;
  ulong *puVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  long *plStack_3d8;
  undefined1 auStack_3c8 [4];
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  long *plStack_3a8;
  ulong uStack_3a0;
  ulong *puStack_398;
  long *plStack_390;
  undefined8 *puStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  code *pcStack_350;
  int iStack_348;
  undefined1 uStack_344;
  long lStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  long *plStack_320;
  ulong *puStack_318;
  long *plStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  uint uStack_2d0;
  ulong uStack_2c8;
  undefined1 auStack_2c0 [16];
  long *plStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  byte *pbStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined1 uStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined8 *puStack_228;
  code *pcStack_220;
  undefined4 uStack_218;
  char cStack_214;
  long lStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  uint uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined1 uStack_110;
  undefined1 auStack_108 [56];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined1 uStack_90;
  undefined1 auStack_88 [56];
  undefined1 uStack_50;
  long lStack_48;
  undefined4 uStack_40;
  
  pcVar11 = (code *)param_3[7];
  uStack_2e8 = param_4;
  if (pcVar11 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar38 = false;
    }
    else {
      (*(code *)param_3[3])(param_3);
      bVar38 = (undefined *)param_3[7] == &UNK_0e02a360;
    }
    param_3[2] = (long)&UNK_0e02a500;
    *(undefined4 *)(param_3 + 4) = 0xea73093f;
    param_3[3] = (long)&UNK_0e02a740;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x28);
    }
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    *(undefined4 *)(plVar16 + 4) = 0x3f800000;
    *param_3 = (long)plVar16;
    pcVar11 = (code *)&UNK_0e02a360;
    param_3[7] = (long)&UNK_0e02a360;
    if (bVar38) {
      lVar19 = param_3[6];
    }
    else {
      lVar19 = 0;
    }
    param_3[6] = lVar19;
    cVar9 = '\x01';
    plStack_3d8 = plVar16;
LAB_0e02654c:
    puStack_2a0 = &UNK_0f012348;
    if (plStack_3d8 == (long *)0x0) goto LAB_0e026553;
  }
  else {
    cVar9 = *(char *)((long)param_3 + 0x24);
    plVar16 = (long *)*param_3;
    plStack_3d8 = plVar16;
    if (cVar9 == '\x02') {
      plStack_3d8 = param_3;
    }
    if ((int)param_3[4] == -0x158cf6c1) goto LAB_0e02654c;
LAB_0e026553:
    puStack_2a0 = &UNK_0f012348;
    lVar19 = param_3[5];
    lVar14 = param_3[6];
    if (lVar14 == 0) {
      (*pcVar11)(0,param_3,0);
      lVar14 = param_3[6];
      cVar9 = *(char *)((long)param_3 + 0x24);
      plVar16 = (long *)*param_3;
    }
    if (cVar9 == '\x02') {
      plVar16 = param_3;
    }
    plStack_3d8 = (long *)func_0x0488e200(lVar19,lVar14,0xea73093f,plVar16);
  }
  uStack_260 = *param_5;
  uStack_258 = param_5[1];
  plVar16 = (long *)param_5[2];
  uStack_288 = uStack_260;
  uStack_280 = uStack_258;
  if (plVar16 == (long *)0x0) {
    plVar16 = (long *)0x0;
    puStack_278 = (undefined8 *)0x0;
  }
  else {
    puStack_278 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0);
    uStack_260 = *param_5;
    uStack_258 = param_5[1];
    plVar16 = (long *)param_5[2];
  }
  uStack_270 = *(undefined4 *)(param_5 + 3);
  uStack_26c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_268 = 1;
  puStack_2a8 = &UNK_0f4a9ad0;
  if (plVar16 == (long *)0x0) {
    uStack_250 = 0;
  }
  else {
    uStack_250 = (**(code **)(*plVar16 + 0x30))(plVar16,1);
  }
  uStack_248 = *(undefined4 *)(param_5 + 3);
  uStack_244 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_240 = 1;
  bVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_388 = param_5;
  if (bVar8 == 1) {
    uVar12 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (((long *)param_5[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)param_5[2] + 0x10))(), uVar13 < uVar12)) {
      uStack_2c8 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_2c8);
      if ((uStack_2c8 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2c8 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&lStack_2d8,*param_5);
    if (uVar12 == 0) {
      return;
    }
    plStack_320 = plStack_3d8 + 2;
    uStack_308 = 0;
    uStack_3a0 = uVar12;
    plStack_390 = param_3;
LAB_0e02681d:
    uVar33 = uStack_2d0;
    lVar19 = lStack_2d8;
    if (uStack_2d0 <= *(uint *)(lStack_2d8 + 0x2b0) && *(uint *)(lStack_2d8 + 0x2b0) != 0xffffffff)
    {
      return;
    }
    auVar41 = (**(code **)(*param_2 + 0xc0))();
    puVar35 = puStack_278;
    auStack_2c0 = auVar41;
    if (puStack_278 != (undefined8 *)0x0) {
      lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar19 == 0) {
        func_0x048b0de0(&uStack_368,auStack_3c8);
        _DAT_0f54fd90 = (undefined4)uStack_368;
        uRam000000000f54fd94 = uStack_368._4_4_;
        uVar4 = (undefined4)uStack_360;
        uVar5 = uStack_360._4_4_;
        uStack_368 = (long *)0x0;
        uStack_360 = (long *)0x0;
        plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar4;
        uRam000000000f54fd9c = uVar5;
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar17 = plVar16 + 1;
          lVar19 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            func_0x0412c2d0(plVar16);
          }
        }
        plVar16 = uStack_360;
        if (uStack_360 != (long *)0x0) {
          LOCK();
          plVar17 = uStack_360 + 1;
          lVar19 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*uStack_360 + 0x10))(uStack_360);
            func_0x0412c2d0(plVar16);
          }
        }
        lVar19 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar12 = uStack_3a0;
      }
      puStack_228 = (undefined8 *)&UNK_05ea5bd0;
      uStack_218 = 0x989eedf9;
      pcStack_220 = (code *)0x0;
      cStack_214 = '\x04';
      auStack_238 = (undefined1  [8])auStack_2c0;
      uStack_208 = 0;
      puStack_200 = &UNK_05ea5bb0;
      lStack_210 = lVar19;
      (**(code **)*puVar35)(puVar35,auStack_238,uStack_288);
      lVar19 = lStack_2d8;
      uVar33 = uStack_2d0;
      if (pcStack_220 != (code *)0x0) {
        (*pcStack_220)(auStack_238);
        lVar19 = lStack_2d8;
        uVar33 = uStack_2d0;
      }
    }
    uVar6 = auStack_2c0._8_8_;
    uVar20 = auStack_2c0._0_8_;
    if ((*(uint *)(lVar19 + 0x2b0) != 0xffffffff) && (uVar33 <= *(uint *)(lVar19 + 0x2b0)))
    goto LAB_0e026811;
    uVar1 = *puStack_388;
    uStack_370 = 0;
    if (auStack_2c0._0_8_ == 0) {
      uStack_370 = (auStack_2c0._8_8_ & 0x7f) << 0x30;
    }
    else {
      lVar19 = auStack_2c0._8_8_ + 9;
      unaff_R13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
      if (lVar19 != 0 && unaff_R13 == (ulong *)0x0) {
        func_0x0eec74c0(lVar19,8);
      }
      *unaff_R13 = uVar6;
      func_0x0eee2f00(unaff_R13 + 1,uVar20,uVar6);
      *(byte *)((long)unaff_R13 + uVar6 + 8) = 0;
      uStack_370 = (ulong)(unaff_R13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar15 = (ulong *)func_0x0ed6d180(uVar1,&uStack_370,0);
    if ((uStack_370 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
    }
    uVar12 = auStack_2c0._8_8_;
    uVar20 = auStack_2c0._0_8_;
    uStack_370 = 0;
    puStack_398 = puVar15;
    if ((ulong)auStack_2c0._8_8_ < 0xfffffffffffffff8) {
      if ((ulong)auStack_2c0._8_8_ < 0x17) {
        _auStack_3c8 = (ulong *)CONCAT71(stack0xfffffffffffffc39,auStack_2c0[8] * '\x02');
        plVar16 = (long *)(auStack_3c8 + 1);
        if (auStack_2c0._8_8_ != 0) goto LAB_0e026b67;
      }
      else {
        uVar13 = (auStack_2c0._8_8_ | 7) + 1;
        if ((auStack_2c0._8_8_ | 7) == 0x17) {
          uVar13 = 0x1a;
        }
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (plVar16 == (long *)0x0) {
          func_0x0eec74c0(uVar13,0);
        }
        _auStack_3c8 = (ulong *)(uVar13 | 1);
        uStack_3c0 = uVar12;
        uStack_3b8 = plVar16;
LAB_0e026b67:
        func_0x0eee2ee0(plVar16,uVar20,uVar12);
      }
      *(undefined1 *)((long)plVar16 + uVar12) = 0;
      puStack_228 = (undefined8 *)0x0;
      pcStack_220 = (code *)0x0;
      auStack_238 = (undefined1  [8])0x0;
      uStack_230 = 0;
      uStack_218 = 0x3f800000;
      uStack_180 = 2;
      uStack_178 = 0;
      uStack_110 = 0;
      auStack_108[0] = 0;
      uStack_d0 = 0;
      auStack_c8[0] = 0;
      uStack_90 = 0;
      auStack_88[0] = 0;
      uStack_50 = 0;
      uStack_150 = 0;
      uStack_14f = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_157 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      lStack_48 = _DAT_014e2df0;
      uStack_40 = 0x40a00000;
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x238);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x238,0);
      }
      uStack_360 = plStack_3d8;
      puStack_358 = (undefined *)0x0;
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      uStack_368 = plVar16;
      if (((ulong)_auStack_3c8 & 1) == 0) {
        plVar16[5] = (long)uStack_3b8;
        *(undefined1 (*) [4])(plVar16 + 3) = auStack_3c8;
        *(undefined4 *)((long)plVar16 + 0x1c) = uStack_3c4;
        *(undefined4 *)(plVar16 + 4) = (undefined4)uStack_3c0;
        *(undefined4 *)((long)plVar16 + 0x24) = uStack_3c0._4_4_;
      }
      else {
        FUN_0412e5e0(plVar16 + 3,uStack_3b8,uStack_3c0);
      }
      plVar16[6] = 0;
      bVar8 = *(byte *)(plVar16 + 3);
      if ((bVar8 & 1) == 0) {
        if (bVar8 >> 1 != 0) goto LAB_0e026ccd;
LAB_0e026db0:
        uVar12 = 0;
      }
      else {
        if (plVar16[4] == 0) goto LAB_0e026db0;
LAB_0e026ccd:
        if ((bVar8 & 1) == 0) {
          pbVar32 = (byte *)((long)plVar16 + 0x19);
          if (pbVar32 != (byte *)0x0) goto LAB_0e026cec;
          goto LAB_0e026db0;
        }
        pbVar32 = (byte *)plVar16[5];
        if (pbVar32 == (byte *)0x0) goto LAB_0e026db0;
LAB_0e026cec:
        if (*pbVar32 == 0) goto LAB_0e026db0;
        uVar13 = func_0x0eee2e90(pbVar32);
        uVar12 = 0xcbf29ce484222325;
        if (uVar13 != 0) {
          if (7 < uVar13) {
            uVar27 = uVar13 & 0xfffffffffffffff8;
            do {
              uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)*pbVar32) * 0x100000001b3 ^
                            (ulong)pbVar32[1]) * 0x100000001b3 ^ (ulong)pbVar32[2]) * 0x100000001b3
                          ^ (ulong)pbVar32[3]) * 0x100000001b3 ^ (ulong)pbVar32[4]) * 0x100000001b3
                        ^ (ulong)pbVar32[5]) * 0x100000001b3 ^ (ulong)pbVar32[6]) * 0x100000001b3 ^
                       (ulong)pbVar32[7];
              pbVar32 = pbVar32 + 8;
              uVar27 = uVar27 - 8;
            } while (uVar27 != 0);
          }
          if ((uVar13 & 7) != 0) {
            uVar27 = 0;
            do {
              uVar12 = uVar12 * 0x100000001b3 ^ (ulong)pbVar32[uVar27];
              uVar27 = uVar27 + 1;
            } while (((uint)uVar13 & 7) != uVar27);
          }
        }
      }
      plVar16[2] = uVar12;
      func_0x0e029f80(plVar16 + 7,auStack_238);
      puStack_358 = (undefined *)CONCAT71(puStack_358._1_7_,1);
      uVar12 = plVar16[2];
      plVar16[1] = uVar12;
      uVar13 = plStack_3d8[1];
      if (uVar13 != 0) {
        uVar27 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
        uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar27 >> 0x38 < 2) {
          uVar34 = uVar13 - 1 & uVar12;
        }
        else {
          uVar34 = uVar12;
          if (uVar13 <= uVar12) {
            if ((uVar12 | uVar13) >> 0x20 == 0) {
              uVar34 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar34 = uVar12 % uVar13;
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_3d8 + uVar34 * 8);
        if ((puVar35 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar35, plVar17 != (long *)0x0))
        {
          plVar18 = plVar16 + 2;
          puStack_318 = (ulong *)((long)plVar16 + 0x19);
          plStack_310 = plVar18;
          if ((byte)(uVar27 >> 0x38) < 2) {
            uVar27 = uVar13 - 1;
            uStack_380 = uVar27;
            do {
              if (plVar17[1] == uVar12) {
                if (plVar17[2] == uVar12) {
                  plVar36 = plVar17 + 2;
                  if (((long *)plVar17[6] == plVar18) && ((long *)plVar16[6] == plVar36))
                  goto LAB_0e027621;
                  bVar8 = *(byte *)(plVar17 + 3);
                  if ((bVar8 & 1) == 0) {
                    uVar28 = (ulong)(bVar8 >> 1);
                    uVar24 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) != 0) goto LAB_0e027077;
LAB_0e02704f:
                    if (uVar28 != uVar24 >> 1) goto LAB_0e026ffa;
                  }
                  else {
                    uVar28 = plVar17[4];
                    uVar24 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) == 0) goto LAB_0e02704f;
LAB_0e027077:
                    if (uVar28 != plVar16[4]) goto LAB_0e026ffa;
                  }
                  if ((bVar8 & 1) == 0) {
                    lVar19 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar19 = plVar17[5];
                  }
                  puVar15 = puStack_318;
                  if ((uVar24 & 1) != 0) {
                    puVar15 = (ulong *)plVar16[5];
                  }
                  iVar10 = func_0x0eee3000(lVar19,puVar15);
                  plVar18 = plStack_310;
                  uVar27 = uStack_380;
                  if (iVar10 == 0) goto LAB_0e02760e;
                }
LAB_0e026ffa:
                plVar17[6] = 0;
              }
              else if ((plVar17[1] & uVar27) != uVar34) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar27 = plVar17[1];
              if (uVar27 == uVar12) {
                if (plVar17[2] == uVar12) {
                  plVar36 = plVar17 + 2;
                  if (((long *)plVar17[6] == plVar18) && ((long *)plVar16[6] == plVar36))
                  goto LAB_0e027621;
                  bVar8 = *(byte *)(plVar17 + 3);
                  if ((bVar8 & 1) == 0) {
                    uVar27 = (ulong)(bVar8 >> 1);
                    uVar28 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) != 0) goto LAB_0e026f80;
LAB_0e026f3c:
                    if (uVar27 != uVar28 >> 1) goto LAB_0e026ee7;
                  }
                  else {
                    uVar27 = plVar17[4];
                    uVar28 = (ulong)*(byte *)(plVar16 + 3);
                    if ((*(byte *)(plVar16 + 3) & 1) == 0) goto LAB_0e026f3c;
LAB_0e026f80:
                    if (uVar27 != plVar16[4]) goto LAB_0e026ee7;
                  }
                  if ((bVar8 & 1) == 0) {
                    lVar19 = (long)plVar17 + 0x19;
                  }
                  else {
                    lVar19 = plVar17[5];
                  }
                  puVar15 = puStack_318;
                  if ((uVar28 & 1) != 0) {
                    puVar15 = (ulong *)plVar16[5];
                  }
                  iVar10 = func_0x0eee3000(lVar19,puVar15);
                  plVar18 = plStack_310;
                  if (iVar10 == 0) goto LAB_0e02760e;
                }
LAB_0e026ee7:
                plVar17[6] = 0;
              }
              else {
                if (uVar13 <= uVar27) {
                  if ((uVar27 | uVar13) >> 0x20 == 0) {
                    if ((uVar27 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar34) goto LAB_0e026ef0;
                    break;
                  }
                  uVar27 = uVar27 % uVar13;
                }
                if (uVar27 != uVar34) break;
              }
LAB_0e026ef0:
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      plVar18 = plStack_390;
      uVar12 = uStack_3a0;
      if ((long)uVar13 < 0) {
        fVar40 = (float)uVar13;
        fVar39 = *(float *)(plStack_3d8 + 4);
        if (uVar13 == 0) goto LAB_0e027156;
LAB_0e027149:
        if (fVar40 * fVar39 < (float)(plStack_3d8[3] + 1)) goto LAB_0e027156;
        goto LAB_0e0272f0;
      }
      fVar40 = (float)(long)uVar13;
      fVar39 = *(float *)(plStack_3d8 + 4);
      if (uVar13 != 0) goto LAB_0e027149;
LAB_0e027156:
      uVar27 = 1;
      if (2 < uVar13) {
        uVar27 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar27 = uVar13 * 2 | uVar27;
      fVar39 = (float)ceilf((float)(plStack_3d8[3] + 1) / fVar39);
      uVar34 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
      if (uVar34 < uVar27) {
        uVar34 = uVar27;
      }
      uVar27 = 2;
      if ((uVar34 == 1) || (uVar27 = uVar34, (uVar34 & uVar34 - 1) == 0)) {
        bVar38 = uVar27 < uVar13;
        if (uVar27 <= uVar13) goto LAB_0e0271e9;
LAB_0e0271c3:
        func_0x0e024bb0(plStack_3d8,uVar27);
      }
      else {
        uVar27 = func_0x0412c3f0();
        uVar13 = plStack_3d8[1];
        bVar38 = uVar27 < uVar13;
        if (uVar13 < uVar27) goto LAB_0e0271c3;
LAB_0e0271e9:
        if (bVar38) {
          fVar39 = (float)ceilf((float)(ulong)plStack_3d8[3] / *(float *)(plStack_3d8 + 4));
          uVar34 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
          if ((uVar13 < 3) ||
             (uVar28 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
             1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar34 = func_0x0412c3f0(uVar34);
          }
          else if (1 < uVar34) {
            lVar19 = 0x3f;
            if (uVar34 - 1 != 0) {
              for (; uVar34 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar34 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
          }
          if (uVar27 <= uVar34) {
            uVar27 = uVar34;
          }
          if (uVar27 < uVar13) goto LAB_0e0271c3;
        }
      }
LAB_0e0272f0:
      uVar13 = plStack_3d8[1];
      uVar27 = plVar16[1];
      uVar34 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
      uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar34 >> 0x38 < 2) {
        uVar27 = uVar27 & uVar13 - 1;
      }
      else if (uVar13 <= uVar27) {
        if ((uVar27 | uVar13) >> 0x20 == 0) {
          uVar27 = (uVar27 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar27 = uVar27 % uVar13;
        }
      }
      lVar19 = *plStack_3d8;
      plVar17 = *(long **)(lVar19 + uVar27 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar16 = *plStack_320;
        *plStack_320 = (long)plVar16;
        *(long **)(lVar19 + uVar27 * 8) = plStack_320;
        if (*plVar16 != 0) {
          uVar27 = *(ulong *)(*plVar16 + 8);
          if ((byte)(uVar34 >> 0x38) < 2) {
            *(long **)(lVar19 + (uVar27 & uVar13 - 1) * 8) = plVar16;
          }
          else {
            if (uVar13 <= uVar27) {
              if ((uVar27 | uVar13) >> 0x20 == 0) {
                *(long **)(lVar19 + ((uVar27 & 0xffffffff) % (uVar13 & 0xffffffff)) * 8) = plVar16;
                goto LAB_0e0273be;
              }
              uVar27 = uVar27 % uVar13;
            }
            *(long **)(lVar19 + uVar27 * 8) = plVar16;
          }
        }
      }
      else {
        *plVar16 = *plVar17;
        *plVar17 = (long)plVar16;
      }
LAB_0e0273be:
      plStack_3d8[3] = plStack_3d8[3] + 1;
      plVar17 = plVar16;
      goto LAB_0e0273c6;
    }
    func_0x04882e30();
    goto LAB_0e028900;
  }
  if ((bVar8 & 2) == 0) {
    lVar19 = param_3[5];
    lVar14 = func_0x048b2190(lVar19);
    plVar16 = *(long **)(lVar14 + 0x78);
    if (plVar16 == (long *)0x0) {
LAB_0e026784:
      if (*(code **)(lVar14 + 0x30) == (code *)0x0) {
        puStack_358 = &UNK_0488e0b0;
        iStack_348 = 0x48b5725f;
        pcStack_350 = (code *)0x0;
        uStack_344 = 0;
        uStack_368 = (long *)0x0;
        uStack_338 = 0;
        puStack_330 = (undefined *)0x0;
        lStack_340 = lVar19;
        goto LAB_0e02784b;
      }
      (**(code **)(lVar14 + 0x30))(&uStack_368,lVar19);
      if (iStack_348 != -0x3677df2f) goto LAB_0e02784b;
LAB_0e0278aa:
      plVar16 = (long *)&UNK_0133e465;
      uVar12 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar26 = *plVar16;
      if (lVar26 == 0 || lVar26 == plVar16[1]) goto LAB_0e026784;
      lVar22 = 0;
      bVar38 = false;
      do {
        lVar23 = lVar26;
        if (lVar22 != 0) {
          lVar23 = lVar22;
        }
        bVar3 = lVar22 != 0;
        if (*(long *)(lVar26 + 8) != 0) {
          lVar23 = lVar22;
          bVar3 = bVar38;
        }
        lVar26 = lVar26 + 0x20;
        lVar22 = lVar23;
        bVar38 = bVar3;
      } while (lVar26 != plVar16[1]);
      if (bVar3 || lVar23 == 0) goto LAB_0e026784;
      (**(code **)(lVar23 + 0x18))(&uStack_368,lVar19,0);
      if (iStack_348 == -0x3677df2f) goto LAB_0e0278aa;
LAB_0e02784b:
      func_0x05ea6440(auStack_238,&uStack_368);
      puVar7 = puStack_200;
      if ((puStack_200 != (undefined *)0x0) && ((byte)(cStack_214 - 1U) < 2)) {
        func_0x048b0900(&uStack_368,auStack_238);
      }
      if (pcStack_220 != (code *)0x0) {
        (*pcStack_220)(auStack_238);
      }
      if (puVar7 != (undefined *)0x0) goto LAB_0e0278aa;
      plVar16 = (long *)&UNK_01411d3a;
      uVar12 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar12 < 0xfffffffffffffff8) {
      if (uVar12 < 0x17) {
        stack0xfffffffffffffc39 = (undefined7)((ulong)_auStack_3c8 >> 8);
        _auStack_3c8 = (ulong *)CONCAT71(stack0xfffffffffffffc39,(char)uVar12 * '\x02');
        plVar17 = (long *)(auStack_3c8 + 1);
        if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          auStack_3c8[1] = 0;
          goto joined_r0x0e02795c;
        }
      }
      else {
        uVar13 = 0x1a;
        if ((uVar12 | 7) != 0x17) {
          uVar13 = (uVar12 | 7) + 1;
        }
        plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (plVar17 == (long *)0x0) {
          func_0x0eec74c0(uVar13,0);
        }
        _auStack_3c8 = (ulong *)(uVar13 | 1);
        uStack_3c0 = uVar12;
        uStack_3b8 = plVar17;
      }
      func_0x0eee2f00(plVar17,plVar16,uVar12);
      *(undefined1 *)((long)plVar17 + uVar12) = 0;
joined_r0x0e02795c:
      if (pcStack_350 != (code *)0x0) {
        (*pcStack_350)(&uStack_368);
      }
      puVar31 = _auStack_3c8;
      puVar15 = (ulong *)((ulong)_auStack_3c8 & 0xff);
      uVar13 = uStack_3c0;
      if (((ulong)_auStack_3c8 & 1) == 0) {
        uVar13 = (ulong)_auStack_3c8 >> 1 & 0x7f;
      }
      uVar12 = uVar13 + 0xc;
      if (uVar12 < 0xfffffffffffffff8) {
        uVar20 = *puStack_388;
        if (uVar12 < 0x17) {
          uStack_230 = 0;
          puStack_228 = (undefined8 *)0x0;
          auStack_238._1_7_ = 0;
          auStack_238[0] = (char)uVar12 * '\x02';
        }
        else {
          uVar27 = 0x1a;
          if ((uVar12 | 7) != 0x17) {
            uVar27 = (uVar12 | 7) + 1;
          }
          puStack_228 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
          if (puStack_228 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar27,0);
          }
          auStack_238 = (undefined1  [8])(uVar27 | 1);
          uStack_230 = uVar12;
        }
        lVar19 = (long)puStack_228 + 0xc;
        bVar38 = ((ulong)auStack_238 & 1) == 0;
        puVar35 = puStack_228;
        if (bVar38) {
          puVar35 = (undefined8 *)(auStack_238 + 1);
        }
        *puVar35 = 0x6465746365707865;
        *(undefined4 *)(puVar35 + 1) = 0x206e6120;
        lVar14 = (long)&uStack_230 + 5;
        if (!bVar38) {
          lVar14 = lVar19;
        }
        if (uVar13 != 0) {
          plVar16 = uStack_3b8;
          if (((ulong)puVar31 & 1) == 0) {
            plVar16 = (long *)(auStack_3c8 + 1);
          }
          func_0x0eee2ee0(lVar14,plVar16,uVar13);
        }
        *(undefined1 *)(lVar14 + uVar13) = 0;
        uVar12 = (ulong)auStack_238 >> 1 & 0x7f;
        puVar35 = (undefined8 *)(auStack_238 + 1);
        if (((ulong)auStack_238 & 1) != 0) {
          uVar12 = uStack_230;
          puVar35 = puStack_228;
        }
        uStack_378 = 0;
        if (puVar35 == (undefined8 *)0x0) {
          uStack_378 = (ulong)((uint)uVar12 & 0x7f) << 0x30;
        }
        else {
          lVar19 = uVar12 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
          if (lVar19 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar19,8);
          }
          *puVar15 = uVar12;
          func_0x0eee2f00(puVar15 + 1,puVar35,uVar12);
          *(undefined1 *)((long)puVar15 + uVar12 + 8) = 0;
          uStack_378 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar20,8,&uStack_378);
        if ((uStack_378 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
        }
        uStack_378 = 0;
        if (((ulong)auStack_238 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_228,(ulong)auStack_238 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar31 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0e028900:
      uVar20 = func_0x04882e30();
      uVar20 = FUN_04882e20(uVar20);
      uVar20 = FUN_04882e20(uVar20);
      uVar20 = FUN_04882e20(uVar20);
      func_0x0ee386e0(&uStack_2e0);
      uVar20 = func_0x0eee2d70(uVar20);
      if ((*unaff_R13 & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(uVar12 + 0x28),
                           *(ulong *)(uVar12 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0e023ef0(&uStack_368);
      if (pcStack_220 != (code *)0x0) {
        (*pcStack_220)(auStack_238);
      }
      if ((uStack_3c0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
      }
      (**(code **)(*param_2 + 0xd0))();
      func_0x0ed6d560(puVar15);
      uVar20 = func_0x0eee2d70(uVar20);
      uVar20 = FUN_04882e20(uVar20);
      FUN_04882e20(uVar20);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar12 = func_0x04882e30();
    plVar17 = param_2;
LAB_0e027bdb:
    fVar39 = (float)uVar12;
LAB_0e027bf3:
    fVar39 = (float)ceilf(fVar39 / *(float *)(plStack_3d8 + 4));
    plVar18 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    if ((plVar17 < (long *)0x3) ||
       (uVar12 = (long)plVar17 - ((ulong)plVar17 >> 1 & 0x5555555555555555),
       uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
       1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar18 = (long *)func_0x0412c3f0(plVar18);
    }
    else if ((long *)0x1 < plVar18) {
      lVar19 = 0x3f;
      if ((undefined *)((long)plVar18 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar18 + -1) >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      plVar18 = (long *)(1L << (-((byte)lVar19 ^ 0x3f) & 0x3f));
    }
    if (plVar16 <= plVar18) {
      plVar16 = plVar18;
    }
    if (plVar17 <= plVar16) goto LAB_0e027cbb;
  }
  else {
    unaff_R13 = (ulong *)(**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if (((long *)param_5[2] != (long *)0x0) &&
       (puVar15 = (ulong *)(**(code **)(*(long *)param_5[2] + 0x10))(), puVar15 < unaff_R13)) {
      uStack_2e0 = 0x34000001208ec0;
      func_0x0ed5ffe0(*param_5,0x40,&uStack_2e0);
      if ((uStack_2e0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar39 = (float)ceilf((float)unaff_R13 / *(float *)(plStack_3d8 + 4));
    plVar17 = (long *)((long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39);
    plVar16 = (long *)0x2;
    if ((plVar17 == (long *)0x1) ||
       (plVar16 = plVar17, ((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0)) {
      plVar17 = (long *)plStack_3d8[1];
      bVar38 = plVar16 < plVar17;
      if (plVar16 <= plVar17) goto LAB_0e02780d;
    }
    else {
      plVar16 = (long *)func_0x0412c3f0();
      plVar17 = (long *)plStack_3d8[1];
      bVar38 = plVar16 < plVar17;
      if (plVar16 <= plVar17) {
LAB_0e02780d:
        if (!bVar38) goto LAB_0e027cbb;
        uVar12 = plStack_3d8[3];
        if ((long)uVar12 < 0) goto LAB_0e027bdb;
        fVar39 = (float)(long)uVar12;
        goto LAB_0e027bf3;
      }
    }
  }
  func_0x0e024bb0(plStack_3d8,plVar16);
LAB_0e027cbb:
  plStack_390 = param_3;
  func_0x0ed6d600(&lStack_2d8,*param_5);
  if (unaff_R13 == (ulong *)0x0) {
    return;
  }
  uStack_3a0 = 0x1b0000014af0d9;
  uStack_308 = 0x38000001448967;
  plStack_310 = (long *)0x3a000001208ef5;
  plStack_290 = plStack_3d8 + 2;
  puVar15 = (ulong *)0x0;
  puStack_318 = unaff_R13;
LAB_0e027d7d:
  if ((*(uint *)(lStack_2d8 + 0x2b0) != 0xffffffff) && (uStack_2d0 <= *(uint *)(lStack_2d8 + 0x2b0))
     ) {
    return;
  }
  puVar2 = (uint *)*param_5;
  func_0x0ed6d4a0(puVar2,puVar15);
  (**(code **)(*param_2 + 200))(param_2,puVar15);
  cVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((cVar9 != '\x01') || (lVar19 = (**(code **)(*param_2 + 0xa8))(param_2), lVar19 == 2)) {
    cVar9 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_013aac9a,3);
    if (cVar9 == '\0') {
      uStack_2f8 = uStack_308;
      func_0x0ed5ffe0(*puStack_388,8,&uStack_2f8);
      if ((uStack_2f8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
      }
      uStack_2f8 = 0;
      goto LAB_0e028770;
    }
    uStack_3b8 = (long *)0x0;
    uStack_3b0 = 0;
    _auStack_3c8 = (ulong *)0x0;
    uStack_3c0 = 0;
    plStack_3a8 = (long *)0x0;
    lStack_210 = plStack_390[5];
    puStack_228 = (undefined8 *)&UNK_05e9f930;
    uStack_218 = 0xc98820d1;
    pcStack_220 = (code *)0x0;
    cStack_214 = '\x03';
    auStack_238 = (undefined1  [8])auStack_3c8;
    uStack_208 = 0;
    puStack_200 = &UNK_05e9f910;
    func_0x0ed75bc0(&puStack_2a0,param_2,auStack_238,uStack_2e8,&uStack_288);
    (**(code **)(*param_2 + 0xd0))(param_2);
    cVar9 = (**(code **)(*param_2 + 0xb8))(param_2,&UNK_0138e8dd,5);
    puVar31 = _auStack_3c8;
    if (cVar9 != '\0') {
      puVar37 = (ulong *)plStack_3d8[1];
      if (puVar37 != (ulong *)0x0) {
        uVar12 = (long)puVar37 - ((ulong)puVar37 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          puVar29 = (ulong *)((ulong)((long)puVar37 - 1U) & (ulong)_auStack_3c8);
        }
        else {
          puVar29 = _auStack_3c8;
          if (puVar37 <= _auStack_3c8) {
            if (((ulong)_auStack_3c8 | (ulong)puVar37) >> 0x20 == 0) {
              puVar29 = (ulong *)(((ulong)_auStack_3c8 & 0xffffffff) % ((ulong)puVar37 & 0xffffffff)
                                 );
            }
            else {
              puVar29 = (ulong *)((ulong)_auStack_3c8 % (ulong)puVar37);
            }
          }
        }
        puVar35 = *(undefined8 **)(*plStack_3d8 + (long)puVar29 * 8);
        puStack_398 = puVar29;
        if ((puVar35 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar35, plVar16 != (long *)0x0))
        {
          uStack_380 = uStack_3b0;
          plVar17 = uStack_3b8;
          if ((uStack_3c0 & 1) == 0) {
            uStack_380 = (long)&uStack_3c0 + 1;
            plVar17 = (long *)(uStack_3c0 >> 1 & 0x7f);
          }
          plStack_2b0 = plStack_3a8;
          plVar18 = plStack_3a8;
          plStack_320 = plVar17;
          if ((byte)(uVar12 >> 0x38) < 2) {
            pbVar32 = (byte *)((long)puVar37 + -1);
            pbStack_298 = pbVar32;
            do {
              if ((ulong *)plVar16[1] == puVar31) {
                if ((ulong *)plVar16[2] == puVar31) {
                  plVar36 = plVar16 + 2;
                  if (plVar18 == plVar36 && (undefined1 *)plVar16[6] == auStack_3c8)
                  goto LAB_0e028681;
                  bVar8 = *(byte *)(plVar16 + 3);
                  if ((bVar8 & 1) == 0) {
                    plVar25 = (long *)(ulong)(bVar8 >> 1);
                  }
                  else {
                    plVar25 = (long *)plVar16[4];
                  }
                  if (plVar25 == plVar17) {
                    if ((bVar8 & 1) == 0) {
                      lVar19 = (long)plVar16 + 0x19;
                    }
                    else {
                      lVar19 = plVar16[5];
                    }
                    iVar10 = func_0x0eee3000(lVar19,uStack_380,plVar17);
                    pbVar32 = pbStack_298;
                    puVar29 = puStack_398;
                    plVar18 = plStack_2b0;
                    plVar17 = plStack_320;
                    if (iVar10 == 0) goto LAB_0e028879;
                  }
                }
                plVar16[6] = 0;
              }
              else if ((ulong *)((ulong)plVar16[1] & (ulong)pbVar32) != puVar29) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              puVar30 = (ulong *)plVar16[1];
              if (puVar30 == puVar31) {
                if ((ulong *)plVar16[2] == puVar31) {
                  plVar36 = plVar16 + 2;
                  if (plVar18 == plVar36 && (undefined1 *)plVar16[6] == auStack_3c8)
                  goto LAB_0e028681;
                  bVar8 = *(byte *)(plVar16 + 3);
                  if ((bVar8 & 1) == 0) {
                    plVar25 = (long *)(ulong)(bVar8 >> 1);
                  }
                  else {
                    plVar25 = (long *)plVar16[4];
                  }
                  if (plVar25 == plVar17) {
                    if ((bVar8 & 1) == 0) {
                      lVar19 = (long)plVar16 + 0x19;
                    }
                    else {
                      lVar19 = plVar16[5];
                    }
                    iVar10 = func_0x0eee3000(lVar19,uStack_380,plVar17);
                    puVar29 = puStack_398;
                    plVar18 = plStack_2b0;
                    plVar17 = plStack_320;
                    if (iVar10 == 0) goto LAB_0e028879;
                  }
                }
                plVar16[6] = 0;
              }
              else {
                if (puVar37 <= puVar30) {
                  if (((ulong)puVar30 | (ulong)puVar37) >> 0x20 == 0) {
                    if ((ulong *)(((ulong)puVar30 & 0xffffffff) % ((ulong)puVar37 & 0xffffffff)) ==
                        puVar29) goto LAB_0e02819b;
                    break;
                  }
                  puVar30 = (ulong *)((ulong)puVar30 % (ulong)puVar37);
                }
                if (puVar30 != puVar29) break;
              }
LAB_0e02819b:
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x238);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x238,0);
      }
      uStack_360 = plStack_3d8;
      puStack_358 = (undefined *)0x0;
      *plVar16 = 0;
      plVar16[1] = (long)puVar31;
      plVar16[2] = 0;
      plVar16[3] = 0;
      plVar16[4] = 0;
      plVar16[5] = 0;
      plVar16[6] = 0;
      uStack_368 = plVar16;
      if (plVar16 + 2 != (long *)auStack_3c8) {
        if ((uStack_3c0 & 1) == 0) {
          plVar16[5] = uStack_3b0;
          *(undefined4 *)(plVar16 + 3) = (undefined4)uStack_3c0;
          *(undefined4 *)((long)plVar16 + 0x1c) = uStack_3c0._4_4_;
          *(undefined4 *)(plVar16 + 4) = (undefined4)uStack_3b8;
          *(undefined4 *)((long)plVar16 + 0x24) = uStack_3b8._4_4_;
        }
        else {
          func_0x04885070(plVar16 + 3,uStack_3b0,uStack_3b8);
        }
      }
      plVar16[2] = (long)_auStack_3c8;
      func_0x0eee2dd0(plVar16 + 7,0,0x200);
      *(undefined4 *)(plVar16 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar16 + 0x1e) = 2;
      plVar16[0x20] = 0;
      plVar16[0x21] = 0;
      plVar16[0x22] = 0;
      plVar16[0x23] = 0;
      *(undefined8 *)((long)plVar16 + 0x119) = 0;
      *(undefined8 *)((long)plVar16 + 0x121) = 0;
      plVar16[0x45] = _DAT_014e2df0;
      *(undefined4 *)(plVar16 + 0x46) = 0x40a00000;
      puStack_358 = (undefined *)CONCAT71(puStack_358._1_7_,1);
      if ((long)puVar37 < 0) {
        fVar40 = (float)puVar37;
        fVar39 = *(float *)(plStack_3d8 + 4);
        if (puVar37 != (ulong *)0x0) goto LAB_0e0283af;
LAB_0e0283c0:
        uVar12 = 1;
        if ((ulong *)0x2 < puVar37) {
          uVar12 = (ulong)(((ulong)puVar37 & (ulong)((long)puVar37 - 1U)) != 0);
        }
        uVar12 = (long)puVar37 * 2 | uVar12;
        fVar39 = (float)ceilf((float)(plStack_3d8[3] + 1) / fVar39);
        uVar13 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if (uVar13 < uVar12) {
          uVar13 = uVar12;
        }
        uVar12 = 2;
        if ((uVar13 == 1) || (uVar12 = uVar13, (uVar13 & uVar13 - 1) == 0)) {
          uVar13 = plStack_3d8[1];
          bVar38 = uVar12 < uVar13;
          if (uVar12 <= uVar13) goto LAB_0e028520;
LAB_0e028439:
          func_0x0e024bb0(plStack_3d8,uVar12);
        }
        else {
          uVar12 = func_0x0412c3f0();
          uVar13 = plStack_3d8[1];
          bVar38 = uVar12 < uVar13;
          if (uVar13 < uVar12) goto LAB_0e028439;
LAB_0e028520:
          if (bVar38) {
            fVar39 = (float)ceilf((float)(ulong)plStack_3d8[3] / *(float *)(plStack_3d8 + 4));
            uVar27 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
            if ((uVar13 < 3) ||
               (uVar34 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
               uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
               1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar27 = func_0x0412c3f0(uVar27);
            }
            else if (1 < uVar27) {
              lVar19 = 0x3f;
              if (uVar27 - 1 != 0) {
                for (; uVar27 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uVar27 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
            }
            if (uVar12 <= uVar27) {
              uVar12 = uVar27;
            }
            if (uVar12 < uVar13) goto LAB_0e028439;
          }
        }
        puVar37 = (ulong *)plStack_3d8[1];
        if (((ulong)puVar37 & (long)puVar37 - 1U) == 0) {
          puVar29 = (ulong *)((ulong)puVar31 & (ulong)((long)puVar37 - 1U));
        }
        else {
          puVar29 = puVar31;
          if (puVar37 <= puVar31) {
            if (((ulong)puVar31 | (ulong)puVar37) >> 0x20 == 0) {
              puVar29 = (ulong *)(((ulong)puVar31 & 0xffffffff) % ((ulong)puVar37 & 0xffffffff));
            }
            else {
              puVar29 = (ulong *)((ulong)puVar31 % (ulong)puVar37);
            }
          }
        }
      }
      else {
        fVar40 = (float)(long)puVar37;
        fVar39 = *(float *)(plStack_3d8 + 4);
        if (puVar37 == (ulong *)0x0) goto LAB_0e0283c0;
LAB_0e0283af:
        puVar29 = puStack_398;
        if (fVar40 * fVar39 < (float)(plStack_3d8[3] + 1)) goto LAB_0e0283c0;
      }
      lVar19 = *plStack_3d8;
      plVar17 = *(long **)(lVar19 + (long)puVar29 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar16 = *plStack_290;
        *plStack_290 = (long)plVar16;
        *(long **)(lVar19 + (long)puVar29 * 8) = plStack_290;
        if (*plVar16 != 0) {
          puVar31 = *(ulong **)(*plVar16 + 8);
          if (((ulong)puVar37 & (long)puVar37 - 1U) == 0) {
            *(long **)(lVar19 + ((ulong)puVar31 & (ulong)((long)puVar37 - 1U)) * 8) = plVar16;
          }
          else {
            if (puVar37 <= puVar31) {
              if (((ulong)puVar31 | (ulong)puVar37) >> 0x20 == 0) {
                *(long **)(lVar19 + (((ulong)puVar31 & 0xffffffff) % ((ulong)puVar37 & 0xffffffff))
                                    * 8) = plVar16;
                goto LAB_0e028679;
              }
              puVar31 = (ulong *)((ulong)puVar31 % (ulong)puVar37);
            }
            *(long **)(lVar19 + (long)puVar31 * 8) = plVar16;
          }
        }
      }
      else {
        *plVar16 = *plVar17;
        *plVar17 = (long)plVar16;
      }
LAB_0e028679:
      plStack_3d8[3] = plStack_3d8[3] + 1;
      goto LAB_0e028681;
    }
    uStack_300 = (ulong)plStack_310;
    func_0x0ed5ffe0(*puStack_388,8,&uStack_300);
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
    uStack_300 = 0;
    goto LAB_0e028736;
  }
  uStack_2f0 = uStack_3a0;
  func_0x0ed5ffe0(*puStack_388,8,&uStack_2f0);
  if ((uStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2f0 = 0;
  goto LAB_0e028770;
LAB_0e02760e:
  plVar17[6] = (long)plStack_310;
  plVar16[6] = (long)plVar36;
LAB_0e027621:
  uVar12 = uStack_3a0;
  func_0x0e022ea0();
  thunk_FUN_0ee326a0(plVar16,0x238);
  plVar18 = plStack_390;
LAB_0e0273c6:
  func_0x0dec9bd0(auStack_88);
  func_0x0dec9bd0(auStack_c8);
  func_0x0dec9bd0(auStack_108);
  func_0x0dec9bd0((long)&uStack_14f + 7);
  if ((uStack_168 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_157,uStack_158),uStack_168 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_180 != 0xffffffff) {
    (**(code **)(&UNK_0f4a9980 + (ulong)uStack_180 * 8))(&uStack_368,auStack_238);
  }
  if (((ulong)_auStack_3c8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3b8,(ulong)_auStack_3c8 & 0xfffffffffffffffe);
  }
  auStack_238 = (undefined1  [8])(plVar17 + 7);
  lStack_210 = plVar18[5];
  puStack_228 = (undefined8 *)&UNK_0dee27b0;
  uStack_218 = 0xbb0ea41b;
  pcStack_220 = (code *)0x0;
  cStack_214 = '\x03';
  uStack_208 = 0;
  puStack_200 = &UNK_0dee2790;
  func_0x0ed75bc0(&puStack_2a8,param_2,auStack_238,uStack_2e8,&uStack_260);
  unaff_R13 = puStack_398;
  if (pcStack_220 != (code *)0x0) {
    (*pcStack_220)(auStack_238);
  }
  uVar13 = unaff_R13[1];
  uVar33 = *(uint *)(uVar13 + 0x1c + (ulong)(uint)*unaff_R13 * 0x20);
  *(uint *)unaff_R13 = uVar33;
  if ((uint)unaff_R13[0x24] == 0) {
    uVar21 = (uint)unaff_R13[2];
  }
  else if ((*(uint *)(unaff_R13[0x23] + 0x18 + (ulong)((uint)unaff_R13[0x24] - 1) * 0x30) == uVar33)
          || (uVar21 = (uint)unaff_R13[2], uVar33 != uVar21 - 1)) goto LAB_0e0267fd;
  lVar19 = uVar13 + (ulong)uVar21 * 0x20;
  uVar13 = (ulong)*(uint *)((uVar13 - 0x10) + (ulong)uVar21 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(auStack_238,lVar19 + -0x18);
    uVar21 = (uint)unaff_R13[2];
  }
  *(undefined4 *)(lVar19 + -0x10) = 0xffffffff;
  *(uint *)(unaff_R13 + 2) = uVar21 - 1;
LAB_0e0267fd:
  (**(code **)(*param_2 + 0xd0))(param_2);
LAB_0e026811:
  uStack_308 = uStack_308 + 1;
  if (uStack_308 == uVar12) {
    return;
  }
  goto LAB_0e02681d;
LAB_0e028879:
  plVar16[6] = (long)auStack_3c8;
  plStack_3a8 = plVar36;
LAB_0e028681:
  uStack_368 = plVar16 + 7;
  lStack_340 = plStack_390[5];
  puStack_358 = &UNK_0dee27b0;
  iStack_348 = -0x44f15be5;
  pcStack_350 = (code *)0x0;
  uStack_344 = 3;
  uStack_338 = 0;
  puStack_330 = &UNK_0dee2790;
  func_0x0ed75bc0(&puStack_2a8,param_2,&uStack_368,uStack_2e8,&uStack_260);
  (**(code **)(*param_2 + 0xd0))(param_2);
  unaff_R13 = puStack_318;
  if (pcStack_350 != (code *)0x0) {
    (*pcStack_350)(&uStack_368);
  }
LAB_0e028736:
  if (pcStack_220 != (code *)0x0) {
    (*pcStack_220)(auStack_238);
  }
  if ((uStack_3c0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
  }
LAB_0e028770:
  (**(code **)(*param_2 + 0xd0))(param_2);
  lVar19 = *(long *)(puVar2 + 2);
  uVar33 = *(uint *)(lVar19 + 0x1c + (ulong)*puVar2 * 0x20);
  *puVar2 = uVar33;
  if (puVar2[0x48] == 0) {
    uVar21 = puVar2[4];
  }
  else if ((*(uint *)(*(long *)(puVar2 + 0x46) + 0x18 + (ulong)(puVar2[0x48] - 1) * 0x30) == uVar33)
          || (uVar21 = puVar2[4], uVar33 != uVar21 - 1)) goto LAB_0e027d6c;
  lVar14 = lVar19 + (ulong)uVar21 * 0x20;
  uVar12 = (ulong)*(uint *)(lVar19 + -0x10 + (ulong)uVar21 * 0x20);
  if (uVar12 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar12 * 8))(auStack_238,lVar14 + -0x18);
    uVar21 = puVar2[4];
  }
  *(undefined4 *)(lVar14 + -0x10) = 0xffffffff;
  puVar2[4] = uVar21 - 1;
LAB_0e027d6c:
  puVar15 = (ulong *)(ulong)((int)puVar15 + 1);
  param_5 = puStack_388;
  if (unaff_R13 <= puVar15) {
    return;
  }
  goto LAB_0e027d7d;
}


