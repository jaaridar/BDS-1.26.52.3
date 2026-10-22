/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe046470 (ELF vaddr 0xdf46470)
 * Label: caller-of-callee
 * Body:  [[0e046470, 0e046b60] [0e046b70, 0e046c95] [0e046ca0, 0e046ccc] [0e046cd0, 0e046db4] [0e046dc0, 0e047046] [0e047050, 0e047159] [0e047160, 0e0471bd] [0e0471c0, 0e0471d6] [0e0471e0, 0e04722c] [0e047230, 0e047466] [0e047470, 0e047e61] [0e047e70, 0e048068] [0e048070, 0e0480e3] [0e0480f0, 0e0482f7] [0e048300, 0e0485c3] [0e0485d0, 0e0488b2] [0e0488c0, 0e048a3e] [0e048a4a, 0e048a58] [0e048c80, 0e048cb2] [0e048cf2, 0e04905a] [0e049060, 0e0491cc]]
 * Ghidra: FUN_0e046470
 */


/* WARNING: Removing unreachable block (ram,0x0e0478f2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e046470(undefined8 param_1,long *param_2,ulong *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined8 *extraout_RDX;
  byte *pbVar27;
  long *plVar28;
  undefined *puVar29;
  uint uVar30;
  long *plVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  long lVar36;
  ulong *unaff_R13;
  bool bVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  uint uStack_3b8;
  ulong uStack_3b0;
  undefined8 *apuStack_3a8 [2];
  undefined *puStack_398;
  code *pcStack_390;
  undefined4 uStack_388;
  undefined1 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 *apuStack_368 [2];
  undefined *puStack_358;
  code *pcStack_350;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  long *plStack_2f0;
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong *puStack_2c8;
  ulong uStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  undefined8 *puStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  code *pcStack_270;
  int iStack_268;
  undefined1 uStack_264;
  long *plStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  uint uStack_1f0;
  ulong uStack_1e8;
  undefined1 auStack_1e0 [16];
  ulong *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  code *pcStack_1a0;
  undefined4 uStack_198;
  char cStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  uint uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  byte bStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  ulong uStack_e0;
  ulong uStack_d8;
  char cStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  byte *pbStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  ulong *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  
  pcVar8 = (code *)param_3[7];
  plStack_2f0 = param_2;
  uStack_208 = param_4;
  if (pcVar8 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar37 = false;
    }
    else {
      puStack_300 = (ulong *)0xe0464f1;
      (*(code *)param_3[3])(param_3);
      bVar37 = (undefined *)param_3[7] == &UNK_0e04a190;
    }
    param_3[2] = (ulong)&UNK_0e04a330;
    *(uint *)(param_3 + 4) = 0x97104e8c;
    param_3[3] = (ulong)&UNK_0e04a570;
    *(byte *)((long)param_3 + 0x24) = 1;
    puStack_300 = (ulong *)0xe046541;
    puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    if (puVar13 == (ulong *)0x0) {
      puStack_300 = (ulong *)0xe0489ab;
      func_0x0eec74c0(0x28);
      param_2 = plStack_2f0;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    *(uint *)(puVar13 + 4) = 0x3f800000;
    *param_3 = (ulong)puVar13;
    pcVar8 = (code *)&UNK_0e04a190;
    param_3[7] = (ulong)&UNK_0e04a190;
    if (bVar37) {
      uVar9 = param_3[6];
    }
    else {
      uVar9 = 0;
    }
    param_3[6] = uVar9;
    bVar5 = 1;
    puStack_2f8 = puVar13;
LAB_0e04659c:
    puStack_1c0 = &UNK_0f012348;
    if (puStack_2f8 == (ulong *)0x0) goto LAB_0e0465a3;
  }
  else {
    bVar5 = *(byte *)((long)param_3 + 0x24);
    puVar13 = (ulong *)*param_3;
    puStack_2f8 = puVar13;
    if (bVar5 == 2) {
      puStack_2f8 = param_3;
    }
    if ((uint)param_3[4] == 0x97104e8c) goto LAB_0e04659c;
LAB_0e0465a3:
    puStack_1c0 = &UNK_0f012348;
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    if (uVar10 == 0) {
      puStack_300 = (ulong *)0xe0465bb;
      (*pcVar8)(0,param_3,0);
      uVar10 = param_3[6];
      bVar5 = *(byte *)((long)param_3 + 0x24);
      puVar13 = (ulong *)*param_3;
    }
    if (bVar5 == 2) {
      puVar13 = param_3;
    }
    puStack_300 = (ulong *)0xe0465de;
    puStack_2f8 = (ulong *)FUN_0488e200(uVar9,uVar10,0x97104e8c,puVar13);
  }
  puVar13 = (ulong *)*param_5;
  uStack_50 = param_5[1];
  puStack_80 = puVar13;
  uStack_78 = uStack_50;
  if ((long *)param_5[2] == (long *)0x0) {
    plVar31 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    puStack_300 = (ulong *)0xe04660a;
    puStack_70 = (undefined8 *)(**(code **)(*(long *)param_5[2] + 0x30))();
    puVar13 = (ulong *)*param_5;
    uStack_50 = param_5[1];
    plVar31 = (long *)param_5[2];
  }
  uStack_68 = *(undefined4 *)(param_5 + 3);
  uStack_64 = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_60 = 1;
  puStack_1c8 = &UNK_0f4aa168;
  puStack_58 = puVar13;
  if (plVar31 == (long *)0x0) {
    uStack_48 = 0;
  }
  else {
    puStack_300 = (ulong *)0xe046675;
    uStack_48 = (**(code **)(*plVar31 + 0x30))();
  }
  uStack_40 = *(undefined4 *)(param_5 + 3);
  uStack_3c = *(undefined1 *)((long)param_5 + 0x1c);
  uStack_38 = 1;
  puStack_300 = (ulong *)0xe0466a6;
  bVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  puStack_2a8 = param_5;
  if (bVar5 == 1) {
    puStack_300 = (ulong *)0xe0466bf;
    uVar9 = (**(code **)(*param_2 + 0xa8))(param_2);
    if ((long *)param_5[2] != (long *)0x0) {
      puStack_300 = (ulong *)0xe0466d5;
      uVar10 = (**(code **)(*(long *)param_5[2] + 0x10))();
      if (uVar10 < uVar9) {
        uStack_1e8 = 0x34000001208ec0;
        puStack_300 = (ulong *)0xe04671c;
        func_0x0ed5ffe0(*param_5,0x40,&uStack_1e8);
        if ((uStack_1e8 >> 0x37 & 1) != 0) {
          puStack_300 = (ulong *)0xe046747;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
          return;
        }
        return;
      }
    }
    puStack_300 = (ulong *)0xe046811;
    func_0x0ed6d600(&lStack_1f8,*param_5);
    if (uVar9 == 0) {
      return;
    }
    puStack_240 = puStack_2f8 + 2;
    uStack_228 = 0;
    uStack_2c0 = uVar9;
    puStack_2b0 = param_3;
LAB_0e04686c:
    uVar30 = uStack_1f0;
    lVar11 = lStack_1f8;
    uVar19 = *(uint *)(lStack_1f8 + 0x2b0);
    puVar13 = (ulong *)CONCAT71((int7)((ulong)puVar13 >> 8),uVar19 != 0xffffffff);
    if (uStack_1f0 <= uVar19 && uVar19 != 0xffffffff) {
      return;
    }
    puStack_300 = (ulong *)0xe0468ad;
    auVar40 = (**(code **)(*plStack_2f0 + 0xc0))();
    puVar22 = puStack_70;
    auStack_1e0 = auVar40;
    if (puStack_70 != (undefined8 *)0x0) {
      uVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (uVar10 == 0) {
        puStack_300 = (ulong *)0xe0468ed;
        func_0x048b0de0(&uStack_288,auStack_2e8);
        _DAT_0f54fd90 = (undefined4)uStack_288;
        uRam000000000f54fd94 = uStack_288._4_4_;
        uVar3 = (undefined4)uStack_280;
        uVar4 = uStack_280._4_4_;
        uStack_288 = (ulong *)0x0;
        uStack_280 = (ulong *)0x0;
        plVar31 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar3;
        uRam000000000f54fd9c = uVar4;
        if (plVar31 != (long *)0x0) {
          LOCK();
          plVar28 = plVar31 + 1;
          lVar11 = *plVar28;
          *plVar28 = *plVar28 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            puStack_300 = (ulong *)0xe046928;
            (**(code **)(*plVar31 + 0x10))(plVar31);
            puStack_300 = (ulong *)0xe046930;
            func_0x0412c2d0(plVar31);
          }
        }
        puVar13 = uStack_280;
        if (uStack_280 != (ulong *)0x0) {
          LOCK();
          puVar12 = uStack_280 + 1;
          uVar9 = *puVar12;
          *puVar12 = *puVar12 - 1;
          UNLOCK();
          if (uVar9 == 0) {
            puStack_300 = (ulong *)0xe046955;
            (**(code **)(*uStack_280 + 0x10))(uStack_280);
            puStack_300 = (ulong *)0xe04695d;
            func_0x0412c2d0(puVar13);
          }
        }
        uVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar9 = uStack_2c0;
      }
      puStack_1a8 = (undefined8 *)&UNK_05ea5bd0;
      uStack_198 = 0x989eedf9;
      pcStack_1a0 = (code *)0x0;
      cStack_194 = '\x04';
      puVar13 = (ulong *)auStack_1e0;
      uStack_188 = 0;
      puStack_180 = &UNK_05ea5bb0;
      puStack_300 = (ulong *)0xe0469e2;
      auStack_1b8 = (undefined1  [8])puVar13;
      uStack_190 = uVar10;
      (**(code **)*puVar22)(puVar22,auStack_1b8,puStack_80);
      lVar11 = lStack_1f8;
      uVar30 = uStack_1f0;
      if (pcStack_1a0 != (code *)0x0) {
        puStack_300 = (ulong *)0xe0469f9;
        (*pcStack_1a0)(auStack_1b8);
        lVar11 = lStack_1f8;
        uVar30 = uStack_1f0;
      }
    }
    uVar16 = auStack_1e0._8_8_;
    param_3 = (ulong *)auStack_1e0._0_8_;
    if ((*(uint *)(lVar11 + 0x2b0) != 0xffffffff) && (uVar30 <= *(uint *)(lVar11 + 0x2b0)))
    goto LAB_0e046860;
    uVar17 = *puStack_2a8;
    plStack_290 = (long *)0x0;
    if ((ulong *)auStack_1e0._0_8_ == (ulong *)0x0) {
      plStack_290 = (long *)((auStack_1e0._8_8_ & 0x7f) << 0x30);
    }
    else {
      lVar11 = auStack_1e0._8_8_ + 9;
      puStack_300 = (ulong *)0xe046a6a;
      unaff_R13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      puVar13 = (ulong *)CONCAT71((int7)((ulong)puVar13 >> 8),
                                  lVar11 == 0 || unaff_R13 != (ulong *)0x0);
      if (lVar11 != 0 && unaff_R13 == (ulong *)0x0) {
        puStack_300 = (ulong *)0xe047761;
        func_0x0eec74c0(lVar11,8);
      }
      *unaff_R13 = uVar16;
      puStack_300 = (ulong *)0xe046a9a;
      memcpy(unaff_R13 + 1,param_3,uVar16);
      *(byte *)((long)unaff_R13 + uVar16 + 8) = 0;
      plStack_290 = (long *)((ulong)(unaff_R13 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    puVar14 = &DAT_0f5463b0;
    puStack_300 = (ulong *)0xe046aeb;
    puVar12 = (ulong *)func_0x0ed6d180(uVar17,&plStack_290,0);
    plVar31 = plStack_290;
    if (((ulong)plStack_290 & 0x80000000000000) != 0) {
      plVar31 = (long *)(((ulong)plStack_290 & 0xff00ffffffffffff) - 8);
      puStack_300 = (ulong *)0xe046b20;
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
    }
    puVar29 = (undefined *)auStack_1e0._8_8_;
    uVar16 = auStack_1e0._0_8_;
    plStack_290 = (long *)0x0;
    puStack_2b8 = puVar12;
    if ((ulong)auStack_1e0._8_8_ < (undefined *)0xfffffffffffffff8) {
      if ((ulong)auStack_1e0._8_8_ < (undefined *)0x17) {
        _auStack_2e8 = (ulong *)CONCAT71(stack0xfffffffffffffd19,auStack_1e0[8] * '\x02');
        puVar13 = (ulong *)(auStack_2e8 + 1);
        if ((undefined *)auStack_1e0._8_8_ != (undefined *)0x0) goto LAB_0e046bb7;
      }
      else {
        uVar9 = (auStack_1e0._8_8_ | 7) + 1;
        if ((auStack_1e0._8_8_ | 7) == 0x17) {
          uVar9 = 0x1a;
        }
        puStack_300 = (ulong *)0xe046b98;
        puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
        if (puVar13 == (ulong *)0x0) {
          puStack_300 = (ulong *)0xe047770;
          func_0x0eec74c0(uVar9,0);
        }
        _auStack_2e8 = (ulong *)(uVar9 | 1);
        uStack_2e0 = puVar29;
        uStack_2d8 = puVar13;
LAB_0e046bb7:
        puStack_300 = (ulong *)0xe046bc5;
        func_0x0eee2ee0(puVar13,uVar16,puVar29);
      }
      *(byte *)((long)puVar13 + (long)puVar29) = 0;
      puStack_1a8 = (undefined8 *)0x0;
      pcStack_1a0 = (code *)0x0;
      auStack_1b8 = (undefined1  [8])0x0;
      uStack_1b0 = (undefined *)0x0;
      uStack_198 = 0x3f800000;
      uStack_100 = 2;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      cStack_c8 = '\0';
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      puStack_300 = (ulong *)0xe046c39;
      puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
      if (puVar13 == (ulong *)0x0) {
        puStack_300 = (ulong *)0xe04774f;
        func_0x0eec74c0(0x150,0);
      }
      uStack_280 = puStack_2f8;
      puStack_278 = (undefined *)0x0;
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      uStack_288 = puVar13;
      if (((ulong)_auStack_2e8 & 1) == 0) {
        puVar13[5] = (ulong)uStack_2d8;
        *(undefined1 (*) [4])(puVar13 + 3) = auStack_2e8;
        *(undefined4 *)((long)puVar13 + 0x1c) = uStack_2e4;
        *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_2e0;
        *(undefined4 *)((long)puVar13 + 0x24) = uStack_2e0._4_4_;
      }
      else {
        puStack_300 = (ulong *)0xe046caf;
        func_0x0412e5e0(puVar13 + 3,uStack_2d8,uStack_2e0);
      }
      puVar13[6] = 0;
      bVar5 = (byte)puVar13[3];
      if ((bVar5 & 1) == 0) {
        if (bVar5 >> 1 != 0) goto LAB_0e046cdd;
LAB_0e046dc0:
        uVar9 = 0;
      }
      else {
        if (puVar13[4] == 0) goto LAB_0e046dc0;
LAB_0e046cdd:
        if ((bVar5 & 1) == 0) {
          pbVar27 = (byte *)((long)puVar13 + 0x19);
          if (pbVar27 != (byte *)0x0) goto LAB_0e046cfc;
          goto LAB_0e046dc0;
        }
        pbVar27 = (byte *)puVar13[5];
        if (pbVar27 == (byte *)0x0) goto LAB_0e046dc0;
LAB_0e046cfc:
        if (*pbVar27 == 0) goto LAB_0e046dc0;
        puStack_300 = (ulong *)0xe046d0d;
        uVar10 = func_0x0eee2e90(pbVar27);
        uVar9 = 0xcbf29ce484222325;
        if (uVar10 != 0) {
          if (7 < uVar10) {
            uVar23 = uVar10 & 0xfffffffffffffff8;
            do {
              uVar9 = (((((((uVar9 * 0x100000001b3 ^ (ulong)*pbVar27) * 0x100000001b3 ^
                           (ulong)pbVar27[1]) * 0x100000001b3 ^ (ulong)pbVar27[2]) * 0x100000001b3 ^
                         (ulong)pbVar27[3]) * 0x100000001b3 ^ (ulong)pbVar27[4]) * 0x100000001b3 ^
                       (ulong)pbVar27[5]) * 0x100000001b3 ^ (ulong)pbVar27[6]) * 0x100000001b3 ^
                      (ulong)pbVar27[7];
              pbVar27 = pbVar27 + 8;
              uVar23 = uVar23 - 8;
            } while (uVar23 != 0);
          }
          if ((uVar10 & 7) != 0) {
            uVar23 = 0;
            do {
              uVar9 = uVar9 * 0x100000001b3 ^ (ulong)pbVar27[uVar23];
              uVar23 = uVar23 + 1;
            } while (((uint)uVar10 & 7) != uVar23);
          }
        }
      }
      uVar19 = uStack_100;
      puVar13[2] = uVar9;
      *(undefined1 *)(puVar13 + 7) = 0;
      *(undefined4 *)(puVar13 + 0x1e) = 0xffffffff;
      if ((ulong)uStack_100 != 0xffffffff) {
        puStack_88 = puVar13 + 7;
        puStack_300 = (ulong *)0xe046e0b;
        (**(code **)(&UNK_0f4a9bc0 + (ulong)uStack_100 * 8))(&puStack_88,auStack_1b8);
        *(uint *)(puVar13 + 0x1e) = uVar19;
      }
      *(undefined4 *)(puVar13 + 0x1f) = uStack_f8;
      *(undefined1 *)((long)puVar13 + 0xfc) = uStack_f4;
      *(undefined1 *)(puVar13 + 0x20) = 0;
      *(undefined1 *)(puVar13 + 0x25) = 0;
      if (cStack_c8 == '\x01') {
        puVar13[0x24] = 0;
        puVar13[0x23] = uStack_d8;
        puVar13[0x21] = CONCAT62(uStack_e6,CONCAT11(uStack_e7,bStack_e8));
        puVar13[0x22] = uStack_e0;
        bStack_e8 = 0;
        uStack_e7 = 0;
        puVar13[0x20] = CONCAT71(uStack_ef,uStack_f0);
        *(undefined1 *)(puVar13 + 0x25) = 1;
      }
      puVar13[0x28] = CONCAT44(uStack_ac,uStack_b0);
      puVar13[0x26] = uStack_c0;
      puVar13[0x27] = CONCAT44(uStack_b4,uStack_b8);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      *(undefined4 *)(puVar13 + 0x29) = uStack_a8;
      puStack_278 = (undefined *)CONCAT71(puStack_278._1_7_,1);
      uVar9 = puVar13[2];
      puVar13[1] = uVar9;
      uVar10 = puStack_2f8[1];
      if (uVar10 != 0) {
        uVar23 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
        uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar23 >> 0x38 < 2) {
          uVar33 = uVar10 - 1 & uVar9;
        }
        else {
          uVar33 = uVar9;
          if (uVar10 <= uVar9) {
            if ((uVar9 | uVar10) >> 0x20 == 0) {
              uVar33 = (uVar9 & 0xffffffff) % (uVar10 & 0xffffffff);
            }
            else {
              uVar33 = uVar9 % uVar10;
            }
          }
        }
        puVar22 = *(undefined8 **)(*puStack_2f8 + uVar33 * 8);
        if ((puVar22 != (undefined8 *)0x0) && (puVar12 = (ulong *)*puVar22, puVar12 != (ulong *)0x0)
           ) {
          puVar32 = puVar13 + 2;
          puStack_238 = (ulong *)((long)puVar13 + 0x19);
          puStack_230 = puVar32;
          if ((byte)(uVar23 >> 0x38) < 2) {
            uVar23 = uVar10 - 1;
            uStack_2a0 = uVar23;
            do {
              if (puVar12[1] == uVar9) {
                if (puVar12[2] == uVar9) {
                  puVar25 = puVar12 + 2;
                  if (((ulong *)puVar12[6] == puVar32) && ((ulong *)puVar13[6] == puVar25))
                  goto LAB_0e047716;
                  bVar5 = (byte)puVar12[3];
                  if ((bVar5 & 1) == 0) {
                    uVar24 = (ulong)(bVar5 >> 1);
                    uVar20 = (ulong)(byte)puVar13[3];
                    if (((byte)puVar13[3] & 1) == 0) goto LAB_0e04714f;
LAB_0e047177:
                    if (uVar24 != puVar13[4]) goto LAB_0e0470fa;
                  }
                  else {
                    uVar24 = puVar12[4];
                    uVar20 = (ulong)(byte)puVar13[3];
                    if (((byte)puVar13[3] & 1) != 0) goto LAB_0e047177;
LAB_0e04714f:
                    if (uVar24 != uVar20 >> 1) goto LAB_0e0470fa;
                  }
                  if ((bVar5 & 1) == 0) {
                    uVar23 = (long)puVar12 + 0x19;
                  }
                  else {
                    uVar23 = puVar12[5];
                  }
                  puVar32 = puStack_238;
                  if ((uVar20 & 1) != 0) {
                    puVar32 = (ulong *)puVar13[5];
                  }
                  puStack_300 = (ulong *)0xe0470e5;
                  iVar7 = func_0x0eee3000(uVar23,puVar32);
                  puVar32 = puStack_230;
                  uVar23 = uStack_2a0;
                  if (iVar7 == 0) goto LAB_0e047703;
                }
LAB_0e0470fa:
                puVar12[6] = 0;
              }
              else if ((puVar12[1] & uVar23) != uVar33) break;
              puVar12 = (ulong *)*puVar12;
            } while (puVar12 != (ulong *)0x0);
          }
          else {
            do {
              uVar23 = puVar12[1];
              if (uVar23 == uVar9) {
                if (puVar12[2] == uVar9) {
                  puVar25 = puVar12 + 2;
                  if (((ulong *)puVar12[6] == puVar32) && ((ulong *)puVar13[6] == puVar25))
                  goto LAB_0e047716;
                  bVar5 = (byte)puVar12[3];
                  if ((bVar5 & 1) == 0) {
                    uVar23 = (ulong)(bVar5 >> 1);
                    uVar24 = (ulong)(byte)puVar13[3];
                    if (((byte)puVar13[3] & 1) == 0) goto LAB_0e04703c;
LAB_0e047080:
                    if (uVar23 != puVar13[4]) goto LAB_0e046fe7;
                  }
                  else {
                    uVar23 = puVar12[4];
                    uVar24 = (ulong)(byte)puVar13[3];
                    if (((byte)puVar13[3] & 1) != 0) goto LAB_0e047080;
LAB_0e04703c:
                    if (uVar23 != uVar24 >> 1) goto LAB_0e046fe7;
                  }
                  if ((bVar5 & 1) == 0) {
                    uVar23 = (long)puVar12 + 0x19;
                  }
                  else {
                    uVar23 = puVar12[5];
                  }
                  puVar32 = puStack_238;
                  if ((uVar24 & 1) != 0) {
                    puVar32 = (ulong *)puVar13[5];
                  }
                  puStack_300 = (ulong *)0xe046fd7;
                  iVar7 = func_0x0eee3000(uVar23,puVar32);
                  puVar32 = puStack_230;
                  if (iVar7 == 0) goto LAB_0e047703;
                }
LAB_0e046fe7:
                puVar12[6] = 0;
              }
              else {
                if (uVar10 <= uVar23) {
                  if ((uVar23 | uVar10) >> 0x20 == 0) {
                    if ((uVar23 & 0xffffffff) % (uVar10 & 0xffffffff) == uVar33) goto LAB_0e046ff0;
                    break;
                  }
                  uVar23 = uVar23 % uVar10;
                }
                if (uVar23 != uVar33) break;
              }
LAB_0e046ff0:
              puVar12 = (ulong *)*puVar12;
            } while (puVar12 != (ulong *)0x0);
          }
        }
      }
      puVar12 = puStack_2b0;
      uVar9 = uStack_2c0;
      plVar31 = plStack_2f0;
      if (-1 < (long)uVar10) {
        fVar39 = (float)(long)uVar10;
        fVar38 = *(float *)(puStack_2f8 + 4);
        if (uVar10 == 0) goto LAB_0e047256;
LAB_0e047249:
        if (fVar39 * fVar38 < (float)(puStack_2f8[3] + 1)) goto LAB_0e047256;
        goto LAB_0e0473f0;
      }
      fVar39 = (float)uVar10;
      fVar38 = *(float *)(puStack_2f8 + 4);
      if (uVar10 != 0) goto LAB_0e047249;
LAB_0e047256:
      uVar23 = 1;
      if (2 < uVar10) {
        uVar23 = (ulong)((uVar10 & uVar10 - 1) != 0);
      }
      uVar23 = uVar10 * 2 | uVar23;
      puStack_300 = (ulong *)0xe047281;
      fVar38 = (float)func_0x0eee3ab0((float)(puStack_2f8[3] + 1) / fVar38);
      uVar33 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
      if (uVar33 < uVar23) {
        uVar33 = uVar23;
      }
      uVar23 = 2;
      if ((uVar33 == 1) || (uVar23 = uVar33, (uVar33 & uVar33 - 1) == 0)) {
        bVar37 = uVar23 < uVar10;
        if (uVar23 <= uVar10) goto LAB_0e0472e9;
LAB_0e0472c3:
        puStack_300 = (ulong *)0xe0472cf;
        func_0x0e044c20(puStack_2f8,uVar23);
      }
      else {
        puStack_300 = (ulong *)0xe0472d9;
        uVar23 = FUN_0412c3f0();
        uVar10 = puStack_2f8[1];
        bVar37 = uVar23 < uVar10;
        if (uVar10 < uVar23) goto LAB_0e0472c3;
LAB_0e0472e9:
        if (bVar37) {
          puStack_300 = (ulong *)0xe04732c;
          fVar38 = (float)func_0x0eee3ab0((float)puStack_2f8[3] / *(float *)(puStack_2f8 + 4));
          uVar33 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
          if ((uVar10 < 3) ||
             (uVar24 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
             uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333),
             1 < (byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            puStack_300 = (ulong *)0xe0473d6;
            uVar33 = FUN_0412c3f0(uVar33);
          }
          else if (1 < uVar33) {
            lVar11 = 0x3f;
            if (uVar33 - 1 != 0) {
              for (; uVar33 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar33 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
          }
          if (uVar23 <= uVar33) {
            uVar23 = uVar33;
          }
          if (uVar23 < uVar10) goto LAB_0e0472c3;
        }
      }
LAB_0e0473f0:
      uVar10 = puStack_2f8[1];
      uVar23 = puVar13[1];
      uVar33 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
      uVar33 = ((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar33 >> 0x38 < 2) {
        uVar23 = uVar23 & uVar10 - 1;
      }
      else if (uVar10 <= uVar23) {
        if ((uVar23 | uVar10) >> 0x20 == 0) {
          uVar23 = (uVar23 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar23 = uVar23 % uVar10;
        }
      }
      uVar24 = *puStack_2f8;
      puVar32 = *(ulong **)(uVar24 + uVar23 * 8);
      if (puVar32 == (ulong *)0x0) {
        *puVar13 = *puStack_240;
        *puStack_240 = (ulong)puVar13;
        *(ulong **)(uVar24 + uVar23 * 8) = puStack_240;
        if (*puVar13 != 0) {
          uVar23 = *(ulong *)(*puVar13 + 8);
          if ((byte)(uVar33 >> 0x38) < 2) {
            *(ulong **)(uVar24 + (uVar23 & uVar10 - 1) * 8) = puVar13;
          }
          else {
            if (uVar10 <= uVar23) {
              if ((uVar23 | uVar10) >> 0x20 == 0) {
                *(ulong **)(uVar24 + ((uVar23 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) = puVar13;
                goto LAB_0e0474be;
              }
              uVar23 = uVar23 % uVar10;
            }
            *(ulong **)(uVar24 + uVar23 * 8) = puVar13;
          }
        }
      }
      else {
        *puVar13 = *puVar32;
        *puVar32 = (ulong)puVar13;
      }
LAB_0e0474be:
      puStack_2f8[3] = puStack_2f8[3] + 1;
      goto joined_r0x0e047738;
    }
    puStack_300 = (ulong *)0xe0489ed;
    func_0x04882e30();
    goto LAB_0e0489ed;
  }
  if ((bVar5 & 2) == 0) {
    plVar31 = (long *)param_3[5];
    puStack_300 = (ulong *)0xe046761;
    lVar11 = func_0x048b2190(plVar31);
    puVar22 = *(undefined8 **)(lVar11 + 0x78);
    puVar13 = (ulong *)0x0;
    if (puVar22 == (undefined8 *)0x0) {
LAB_0e0467d4:
      if (*(code **)(lVar11 + 0x30) == (code *)0x0) {
        puStack_278 = &UNK_0488e0b0;
        iStack_268 = 0x48b5725f;
        pcStack_270 = (code *)0x0;
        uStack_264 = 0;
        uStack_288 = (ulong *)0x0;
        uStack_258 = 0;
        puStack_250 = (undefined *)0x0;
        plStack_260 = plVar31;
        goto LAB_0e04794e;
      }
      puStack_300 = (ulong *)0xe0467eb;
      (**(code **)(lVar11 + 0x30))(&uStack_288);
      if (iStack_268 != -0x3677df2f) goto LAB_0e04794e;
LAB_0e0479ad:
      plVar28 = (long *)&UNK_0133e465;
      puStack_300 = (ulong *)0xe0479bc;
      puVar14 = (undefined *)func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      puVar12 = (ulong *)*puVar22;
      puVar32 = (ulong *)puVar22[1];
      puVar13 = (ulong *)CONCAT71((int7)((ulong)puVar22 >> 8),puVar12 == puVar32);
      if (puVar12 == (ulong *)0x0 || puVar12 == puVar32) goto LAB_0e0467d4;
      puVar25 = (ulong *)0x0;
      bVar37 = false;
      do {
        puVar13 = puVar12;
        if (puVar25 != (ulong *)0x0) {
          puVar13 = puVar25;
        }
        bVar2 = puVar25 != (ulong *)0x0;
        if (puVar12[1] != 0) {
          puVar13 = puVar25;
          bVar2 = bVar37;
        }
        puVar12 = puVar12 + 4;
        puVar25 = puVar13;
        bVar37 = bVar2;
      } while (puVar12 != puVar32);
      if (bVar2 || puVar13 == (ulong *)0x0) goto LAB_0e0467d4;
      puStack_300 = (ulong *)0xe047941;
      (*(code *)puVar13[3])(&uStack_288,plVar31,0);
      if (iStack_268 == -0x3677df2f) goto LAB_0e0479ad;
LAB_0e04794e:
      plVar31 = &uStack_288;
      puStack_300 = (ulong *)0xe047960;
      func_0x05ea6440(auStack_1b8);
      puVar14 = puStack_180;
      if ((puStack_180 != (undefined *)0x0) && ((byte)(cStack_194 - 1U) < 2)) {
        plVar31 = (long *)auStack_1b8;
        puStack_300 = (ulong *)0xe04798d;
        func_0x048b0900(&uStack_288);
      }
      if (pcStack_1a0 != (code *)0x0) {
        puStack_300 = (ulong *)0xe0479a4;
        (*pcStack_1a0)(auStack_1b8);
      }
      if (puVar14 != (undefined *)0x0) goto LAB_0e0479ad;
      plVar28 = (long *)&UNK_01411d3a;
      puStack_300 = (ulong *)0xe047ccf;
      puVar14 = (undefined *)func_0x0eee2e90(&UNK_01411d3a);
    }
    if (puVar14 < (undefined *)0xfffffffffffffff8) {
      if (puVar14 < (undefined *)0x17) {
        stack0xfffffffffffffd19 = (undefined7)((ulong)_auStack_2e8 >> 8);
        _auStack_2e8 = (ulong *)CONCAT71(stack0xfffffffffffffd19,(char)puVar14 * '\x02');
        puVar12 = (ulong *)(auStack_2e8 + 1);
        if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          auStack_2e8[1] = 0;
          goto joined_r0x0e047a5f;
        }
      }
      else {
        puVar13 = (ulong *)(((ulong)puVar14 | 7) + 1);
        param_3 = (ulong *)0x1a;
        if (((ulong)puVar14 | 7) != 0x17) {
          param_3 = puVar13;
        }
        puStack_300 = (ulong *)0xe047a22;
        puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_3);
        if (puVar12 == (ulong *)0x0) {
          puStack_300 = (ulong *)0xe0489d4;
          func_0x0eec74c0(param_3,0);
        }
        param_3 = (ulong *)((ulong)param_3 | 1);
        _auStack_2e8 = param_3;
        uStack_2e0 = puVar14;
        uStack_2d8 = puVar12;
      }
      puStack_300 = (ulong *)0xe047a4f;
      memcpy(puVar12,plVar28,puVar14);
      *(byte *)((long)puVar12 + (long)puVar14) = 0;
      plVar31 = plVar28;
joined_r0x0e047a5f:
      if (pcStack_270 != (code *)0x0) {
        puStack_300 = (ulong *)0xe047a68;
        (*pcStack_270)(&uStack_288);
      }
      puVar32 = _auStack_2e8;
      puVar12 = (ulong *)((ulong)_auStack_2e8 & 0xff);
      puVar14 = uStack_2e0;
      if (((ulong)_auStack_2e8 & 1) == 0) {
        puVar14 = (undefined *)((ulong)_auStack_2e8 >> 1 & 0x7f);
      }
      puVar29 = puVar14 + 0xc;
      if (puVar29 < (undefined *)0xfffffffffffffff8) {
        uVar16 = *puStack_2a8;
        if (puVar29 < (undefined *)0x17) {
          uStack_1b0 = (undefined *)0x0;
          puStack_1a8 = (undefined8 *)0x0;
          auStack_1b8._1_7_ = 0;
          auStack_1b8[0] = (char)puVar29 * '\x02';
        }
        else {
          uVar9 = 0x1a;
          if (((ulong)puVar29 | 7) != 0x17) {
            uVar9 = ((ulong)puVar29 | 7) + 1;
          }
          puStack_300 = (ulong *)0xe047af1;
          puStack_1a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
          if (puStack_1a8 == (undefined8 *)0x0) {
            puStack_300 = (ulong *)0xe0489e3;
            func_0x0eec74c0(uVar9,0);
          }
          auStack_1b8 = (undefined1  [8])(uVar9 | 1);
          uStack_1b0 = puVar29;
        }
        lVar11 = (long)puStack_1a8 + 0xc;
        bVar37 = ((ulong)auStack_1b8 & 1) == 0;
        puVar22 = puStack_1a8;
        if (bVar37) {
          puVar22 = (undefined8 *)(auStack_1b8 + 1);
        }
        *puVar22 = 0x6465746365707865;
        *(undefined4 *)(puVar22 + 1) = 0x206e6120;
        lVar36 = (long)&uStack_1b0 + 5;
        if (!bVar37) {
          lVar36 = lVar11;
        }
        if (puVar14 != (undefined *)0x0) {
          puVar13 = uStack_2d8;
          if (((ulong)puVar32 & 1) == 0) {
            puVar13 = (ulong *)(auStack_2e8 + 1);
          }
          puStack_300 = (ulong *)0xe047b73;
          func_0x0eee2ee0(lVar36,puVar13,puVar14);
        }
        puVar14[lVar36] = 0;
        puVar14 = (undefined *)((ulong)auStack_1b8 >> 1 & 0x7f);
        puVar22 = (undefined8 *)(auStack_1b8 + 1);
        if (((ulong)auStack_1b8 & 1) != 0) {
          puVar14 = uStack_1b0;
          puVar22 = puStack_1a8;
        }
        uStack_298 = 0;
        if (puVar22 == (undefined8 *)0x0) {
          uStack_298 = (ulong)((uint)puVar14 & 0x7f) << 0x30;
        }
        else {
          puVar29 = puVar14 + 9;
          puStack_300 = (ulong *)0xe047bd2;
          puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar29,8);
          if (puVar29 != (undefined *)0x0 && puVar18 == (undefined8 *)0x0) {
            puStack_300 = (ulong *)0xe0489c5;
            func_0x0eec74c0(puVar29,8);
          }
          *puVar18 = puVar14;
          puStack_300 = (ulong *)0xe047c02;
          memcpy(puVar18 + 1,puVar22,puVar14);
          *(undefined1 *)((long)puVar18 + (long)(puVar14 + 8)) = 0;
          uStack_298 = (ulong)(puVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        puStack_300 = (ulong *)0xe047c50;
        func_0x0ed5ffe0(uVar16,8,&uStack_298);
        if ((uStack_298 & 0x80000000000000) != 0) {
          puStack_300 = (ulong *)0xe047c72;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_298 & 0xff00ffffffffffff) - 8);
        }
        uStack_298 = 0;
        if (((ulong)auStack_1b8 & 1) != 0) {
          puStack_300 = (ulong *)0xe047c9e;
          func_0x0412a280(puStack_1a8,(ulong)auStack_1b8 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar32 & 1) != 0) {
          puStack_300 = (ulong *)0xe047cbb;
          func_0x0412a280(uStack_2d8,(ulong)_auStack_2e8 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0e0489ed:
      puStack_300 = (ulong *)0xe0489f2;
      uVar16 = func_0x04882e30();
      puStack_300 = (ulong *)0xe0489fa;
      uVar16 = func_0x04882e20(uVar16);
      puStack_300 = (ulong *)0xe048a02;
      uVar16 = func_0x04882e20(uVar16);
      puStack_300 = (ulong *)0xe048a0a;
      uVar16 = func_0x04882e20(uVar16);
      puStack_300 = (ulong *)0xe048a1a;
      func_0x0ee386e0(&uStack_200);
      puStack_300 = (ulong *)0xe048a22;
      uVar16 = _Unwind_Resume(uVar16);
      if ((*unaff_R13 & 1) != 0) {
        plVar31 = (long *)(*(ulong *)(puVar29 + 0x18) & 0xfffffffffffffffe);
        puStack_300 = (ulong *)0xe048a3d;
        func_0x0412a280(*(undefined8 *)(puVar29 + 0x28));
      }
      puStack_300 = (ulong *)0xe048a54;
      func_0x0e043f60(&uStack_288);
      if (pcStack_1a0 != (code *)0x0) {
        puStack_300 = (ulong *)0xe048c97;
        (*pcStack_1a0)(auStack_1b8);
      }
      if (((ulong)uStack_2e0 & 1) != 0) {
        plVar31 = (long *)((ulong)uStack_2e0 & 0xfffffffffffffffe);
        puStack_300 = (ulong *)0xe048cb1;
        func_0x0412a280(uStack_2d0);
      }
      puStack_300 = (ulong *)0xe048d00;
      (**(code **)(*plStack_2f0 + 0xd0))();
      puStack_300 = (ulong *)0xe048d08;
      func_0x0ed6d560(puVar12);
      puStack_300 = (ulong *)0xe048d10;
      uVar17 = _Unwind_Resume(uVar16);
      puStack_300 = (ulong *)0xe048d18;
      uVar17 = func_0x04882e20(uVar17);
      puStack_300 = (ulong *)0xe048d20;
      func_0x04882e20(uVar17);
      puStack_3c8 = &UNK_0f012348;
      cVar6 = *(char *)((long)extraout_RDX + 0x24);
      puVar22 = (undefined8 *)*extraout_RDX;
      puVar18 = puVar22;
      if (cVar6 == '\x02') {
        puVar18 = extraout_RDX;
      }
      puStack_328 = puVar29;
      puStack_320 = param_3;
      puStack_318 = unaff_R13;
      puStack_310 = puVar14;
      uStack_308 = uVar16;
      puStack_300 = puVar12;
      if (puVar18 == (undefined8 *)0x0 || *(int *)(extraout_RDX + 4) != -0x68efb174) {
        uVar16 = extraout_RDX[5];
        lVar11 = extraout_RDX[6];
        if (lVar11 == 0) {
          (*(code *)extraout_RDX[7])(0,extraout_RDX,0);
          lVar11 = extraout_RDX[6];
          cVar6 = *(char *)((long)extraout_RDX + 0x24);
          puVar22 = (undefined8 *)*extraout_RDX;
        }
        if (cVar6 == '\x02') {
          puVar22 = extraout_RDX;
        }
        puVar18 = (undefined8 *)FUN_0488e200(uVar16,lVar11,0x97104e8c,puVar22);
      }
      puStack_3d0 = &UNK_0f4aa168;
      cVar6 = (**(code **)(*plVar31 + 0xb0))(plVar31,1,puVar18[3]);
      if (cVar6 == '\x02') {
        func_0x0ed6d600(&lStack_3c0,*puVar13);
        puVar18 = puVar18 + 2;
        uStack_3b0 = 0x1b000001208f30;
        do {
          puVar18 = (undefined8 *)*puVar18;
          if (puVar18 == (undefined8 *)0x0) break;
          cVar6 = (**(code **)(*plVar31 + 0xa8))(plVar31);
          if (cVar6 == '\0') {
            uStack_3e0 = 0x15000001391736;
            func_0x0ed5ffe0(*puVar13,8,&uStack_3e0);
            if ((uStack_3e0 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_3e0 & 0xff00ffffffffffff) - 8);
            }
            uStack_3e0 = 0;
            uVar19 = *(uint *)(lStack_3c0 + 0x2b0);
          }
          else {
            cVar6 = (**(code **)(*plVar31 + 0x98))(plVar31,&UNK_013aac9a,3);
            if (cVar6 == '\0') {
              uStack_3f0 = 0x190000011b97a8;
              func_0x0ed5ffe0(*puVar13,8,&uStack_3f0);
              if ((uStack_3f0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_3f0 & 0xff00ffffffffffff) - 8);
              }
              uStack_3f0 = 0;
            }
            else {
              apuStack_368[0] = puVar18 + 2;
              uStack_340 = extraout_RDX[5];
              puStack_358 = &UNK_05e9f930;
              uStack_348 = 0xc98820d1;
              pcStack_350 = (code *)0x0;
              uStack_344 = 4;
              uStack_338 = 0;
              puStack_330 = &UNK_05e9f910;
              (**(code **)(puStack_3c8 + 0x38))(&puStack_3c8,plVar31,apuStack_368,puVar13);
              (**(code **)(*plVar31 + 0xa0))(plVar31);
              if ((*(uint *)(lStack_3c0 + 0x2b0) == 0xffffffff) ||
                 (*(uint *)(lStack_3c0 + 0x2b0) < uStack_3b8)) {
                cVar6 = (**(code **)(*plVar31 + 0x98))(plVar31,&UNK_0138e8dd,5);
                if (cVar6 == '\0') {
                  uStack_3e8 = uStack_3b0;
                  func_0x0ed5ffe0(*puVar13,8,&uStack_3e8);
                  if ((uStack_3e8 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uStack_3e8 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_3e8 = 0;
                }
                else {
                  uStack_380 = extraout_RDX[5];
                  apuStack_3a8[0] = puVar18 + 7;
                  puStack_398 = &UNK_0decf7d0;
                  uStack_388 = 0x59cd93fa;
                  pcStack_390 = (code *)0x0;
                  uStack_384 = 4;
                  uStack_378 = 0;
                  puStack_370 = &UNK_0decf7b0;
                  (**(code **)(puStack_3d0 + 0x38))(&puStack_3d0,plVar31,apuStack_3a8,puVar13);
                  (**(code **)(*plVar31 + 0xa0))(plVar31);
                  if (pcStack_390 != (code *)0x0) {
                    (*pcStack_390)(apuStack_3a8);
                  }
                }
              }
              if (pcStack_350 != (code *)0x0) {
                (*pcStack_350)(apuStack_368);
              }
            }
            (**(code **)(*plVar31 + 0xb8))(plVar31);
            uVar19 = *(uint *)(lStack_3c0 + 0x2b0);
          }
        } while ((uVar19 == 0xffffffff) || (uVar19 < uStack_3b8));
        (**(code **)(*plVar31 + 0xb8))(plVar31);
      }
      else {
        uStack_3d8 = 0x170000014ad768;
        func_0x0ed5ffe0(*puVar13,8,&uStack_3d8);
        if ((uStack_3d8 >> 0x37 & 1) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3d8 & 0xff00ffffffffffff) - 8);
        }
      }
      return;
    }
    puStack_300 = (ulong *)0xe047cde;
    uVar9 = func_0x04882e30();
LAB_0e047cde:
    fVar38 = (float)uVar9;
LAB_0e047cf6:
    puStack_300 = (ulong *)0xe047d04;
    fVar38 = (float)func_0x0eee3ab0(fVar38 / *(float *)(puStack_2f8 + 4));
    plVar31 = (long *)((long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38);
    if ((param_2 < (long *)0x3) ||
       (uVar9 = (long)param_2 - ((ulong)param_2 >> 1 & 0x5555555555555555),
       uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
       1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      puStack_300 = (ulong *)0xe047dae;
      plVar31 = (long *)FUN_0412c3f0(plVar31);
    }
    else if ((long *)0x1 < plVar31) {
      lVar11 = 0x3f;
      if ((undefined *)((long)plVar31 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar31 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      plVar31 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
    }
    if (plVar28 <= plVar31) {
      plVar28 = plVar31;
    }
    if (param_2 <= plVar28) goto LAB_0e047dbe;
  }
  else {
    puStack_300 = (ulong *)0xe047788;
    unaff_R13 = (ulong *)(**(code **)(*param_2 + 0xb0))(param_2,0xffffffffffffffff);
    if ((long *)param_5[2] != (long *)0x0) {
      puStack_300 = (ulong *)0xe04779a;
      puVar13 = (ulong *)(**(code **)(*(long *)param_5[2] + 0x10))();
      if (puVar13 < unaff_R13) {
        uStack_200 = 0x34000001208ec0;
        puStack_300 = (ulong *)0xe0477dd;
        func_0x0ed5ffe0(*param_5,0x40,&uStack_200);
        if ((uStack_200 >> 0x37 & 1) != 0) {
          puStack_300 = (ulong *)0xe047808;
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
          return;
        }
        return;
      }
    }
    puStack_300 = (ulong *)0xe04783f;
    fVar38 = (float)func_0x0eee3ab0((float)unaff_R13 / *(float *)(puStack_2f8 + 4));
    plVar31 = (long *)((long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38);
    plVar28 = (long *)0x2;
    if ((plVar31 == (long *)0x1) ||
       (plVar28 = plVar31, ((ulong)plVar31 & (ulong)((long)plVar31 + -1)) == 0)) {
      param_2 = (long *)puStack_2f8[1];
      bVar37 = plVar28 < param_2;
      if (plVar28 <= param_2) goto LAB_0e047910;
    }
    else {
      puStack_300 = (ulong *)0xe0478fc;
      plVar28 = (long *)FUN_0412c3f0();
      param_2 = (long *)puStack_2f8[1];
      bVar37 = plVar28 < param_2;
      if (plVar28 <= param_2) {
LAB_0e047910:
        if (!bVar37) goto LAB_0e047dbe;
        uVar9 = puStack_2f8[3];
        if ((long)uVar9 < 0) goto LAB_0e047cde;
        fVar38 = (float)(long)uVar9;
        goto LAB_0e047cf6;
      }
    }
  }
  puStack_300 = (ulong *)0xe047896;
  func_0x0e044c20(puStack_2f8,plVar28);
LAB_0e047dbe:
  puStack_300 = (ulong *)0xe047dd3;
  puStack_2b0 = param_3;
  func_0x0ed6d600(&lStack_1f8,*param_5);
  if (unaff_R13 == (ulong *)0x0) {
    return;
  }
  uStack_2c0 = 0x1b0000014af0d9;
  uStack_228 = 0x38000001448967;
  puStack_230 = (ulong *)0x3a000001208ef5;
  puStack_90 = puStack_2f8 + 2;
  puVar13 = (ulong *)0x0;
  plVar31 = plStack_2f0;
  puStack_238 = unaff_R13;
LAB_0e047e90:
  if ((*(uint *)(lStack_1f8 + 0x2b0) != 0xffffffff) && (uStack_1f0 <= *(uint *)(lStack_1f8 + 0x2b0))
     ) {
    return;
  }
  puVar1 = (uint *)*param_5;
  puStack_300 = (ulong *)0xe047ebe;
  func_0x0ed6d4a0(puVar1,puVar13);
  puStack_300 = (ulong *)0xe047ecd;
  (**(code **)(*plVar31 + 200))(plVar31,puVar13);
  puStack_300 = (ulong *)0xe047ed6;
  cVar6 = (**(code **)(*plVar31 + 0x18))(plVar31);
  if (cVar6 != '\x01') {
LAB_0e047ef0:
    puStack_300 = (ulong *)0xe047f08;
    cVar6 = (**(code **)(*plVar31 + 0xb8))(plVar31,&UNK_013aac9a,3);
    if (cVar6 == '\0') {
      uStack_218 = uStack_228;
      puStack_300 = (ulong *)0xe04809a;
      func_0x0ed5ffe0(*puStack_2a8,8,&uStack_218);
      if ((uStack_218 & 0x80000000000000) != 0) {
        puStack_300 = (ulong *)0xe0480d3;
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
      }
      uStack_218 = 0;
      goto LAB_0e048860;
    }
    uStack_2d8 = (ulong *)0x0;
    uStack_2d0 = 0;
    _auStack_2e8 = (ulong *)0x0;
    uStack_2e0 = (undefined *)0x0;
    puStack_2c8 = (ulong *)0x0;
    uStack_190 = puStack_2b0[5];
    puStack_1a8 = (undefined8 *)&UNK_05e9f930;
    uStack_198 = 0xc98820d1;
    pcStack_1a0 = (code *)0x0;
    cStack_194 = '\x03';
    auStack_1b8 = (undefined1  [8])auStack_2e8;
    uStack_188 = 0;
    puStack_180 = &UNK_05e9f910;
    puStack_300 = (ulong *)0xe047fb5;
    func_0x0ed75bc0(&puStack_1c0,plVar31,auStack_1b8,uStack_208,&puStack_80);
    puStack_300 = (ulong *)0xe047fc1;
    (**(code **)(*plVar31 + 0xd0))(plVar31);
    puStack_300 = (ulong *)0xe047fd9;
    cVar6 = (**(code **)(*plVar31 + 0xb8))(plVar31,&UNK_0138e8dd,5);
    puVar12 = _auStack_2e8;
    if (cVar6 != '\0') {
      puVar32 = (ulong *)puStack_2f8[1];
      if (puVar32 != (ulong *)0x0) {
        uVar9 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
        uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar9 >> 0x38 < 2) {
          puVar25 = (ulong *)((ulong)((long)puVar32 - 1U) & (ulong)_auStack_2e8);
        }
        else {
          puVar25 = _auStack_2e8;
          if (puVar32 <= _auStack_2e8) {
            if (((ulong)_auStack_2e8 | (ulong)puVar32) >> 0x20 == 0) {
              puVar25 = (ulong *)(((ulong)_auStack_2e8 & 0xffffffff) % ((ulong)puVar32 & 0xffffffff)
                                 );
            }
            else {
              puVar25 = (ulong *)((ulong)_auStack_2e8 % (ulong)puVar32);
            }
          }
        }
        puVar22 = *(undefined8 **)(*puStack_2f8 + (long)puVar25 * 8);
        puStack_2b8 = puVar25;
        if ((puVar22 != (undefined8 *)0x0) && (puVar15 = (ulong *)*puVar22, puVar15 != (ulong *)0x0)
           ) {
          uStack_2a0 = uStack_2d0;
          puVar35 = uStack_2d8;
          if (((ulong)uStack_2e0 & 1) == 0) {
            uStack_2a0 = (long)&uStack_2e0 + 1;
            puVar35 = (ulong *)((ulong)uStack_2e0 >> 1 & 0x7f);
          }
          puStack_1d0 = puStack_2c8;
          puVar34 = puStack_2c8;
          puStack_240 = puVar35;
          if ((byte)(uVar9 >> 0x38) < 2) {
            pbVar27 = (byte *)((long)puVar32 + -1);
            pbStack_98 = pbVar27;
            do {
              if ((ulong *)puVar15[1] == puVar12) {
                if ((ulong *)puVar15[2] == puVar12) {
                  puVar26 = puVar15 + 2;
                  if (puVar34 == puVar26 && (undefined1 *)puVar15[6] == auStack_2e8)
                  goto LAB_0e048771;
                  bVar5 = (byte)puVar15[3];
                  if ((bVar5 & 1) == 0) {
                    puVar21 = (ulong *)(ulong)(bVar5 >> 1);
                  }
                  else {
                    puVar21 = (ulong *)puVar15[4];
                  }
                  if (puVar21 == puVar35) {
                    if ((bVar5 & 1) == 0) {
                      uVar9 = (long)puVar15 + 0x19;
                    }
                    else {
                      uVar9 = puVar15[5];
                    }
                    puStack_300 = (ulong *)0xe04854a;
                    iVar7 = func_0x0eee3000(uVar9,uStack_2a0,puVar35);
                    pbVar27 = pbStack_98;
                    puVar25 = puStack_2b8;
                    puVar34 = puStack_1d0;
                    puVar35 = puStack_240;
                    if (iVar7 == 0) goto LAB_0e048966;
                  }
                }
                puVar15[6] = 0;
              }
              else if ((ulong *)(puVar15[1] & (ulong)pbVar27) != puVar25) break;
              puVar15 = (ulong *)*puVar15;
            } while (puVar15 != (ulong *)0x0);
          }
          else {
            do {
              puVar26 = (ulong *)puVar15[1];
              if (puVar26 == puVar12) {
                if ((ulong *)puVar15[2] == puVar12) {
                  puVar26 = puVar15 + 2;
                  if (puVar34 == puVar26 && (undefined1 *)puVar15[6] == auStack_2e8)
                  goto LAB_0e048771;
                  bVar5 = (byte)puVar15[3];
                  if ((bVar5 & 1) == 0) {
                    puVar21 = (ulong *)(ulong)(bVar5 >> 1);
                  }
                  else {
                    puVar21 = (ulong *)puVar15[4];
                  }
                  if (puVar21 == puVar35) {
                    if ((bVar5 & 1) == 0) {
                      uVar9 = (long)puVar15 + 0x19;
                    }
                    else {
                      uVar9 = puVar15[5];
                    }
                    puStack_300 = (ulong *)0xe048286;
                    iVar7 = func_0x0eee3000(uVar9,uStack_2a0,puVar35);
                    puVar25 = puStack_2b8;
                    puVar34 = puStack_1d0;
                    puVar35 = puStack_240;
                    if (iVar7 == 0) goto LAB_0e048966;
                  }
                }
                puVar15[6] = 0;
              }
              else {
                if (puVar32 <= puVar26) {
                  if (((ulong)puVar26 | (ulong)puVar32) >> 0x20 == 0) {
                    if ((ulong *)(((ulong)puVar26 & 0xffffffff) % ((ulong)puVar32 & 0xffffffff)) ==
                        puVar25) goto LAB_0e0482ab;
                    break;
                  }
                  puVar26 = (ulong *)((ulong)puVar26 % (ulong)puVar32);
                }
                if (puVar26 != puVar25) break;
              }
LAB_0e0482ab:
              puVar15 = (ulong *)*puVar15;
            } while (puVar15 != (ulong *)0x0);
          }
        }
      }
      puStack_300 = (ulong *)0xe048364;
      puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
      if (puVar15 == (ulong *)0x0) {
        puStack_300 = (ulong *)0xe048985;
        func_0x0eec74c0(0x150,0);
      }
      uStack_280 = puStack_2f8;
      puStack_278 = (undefined *)0x0;
      *puVar15 = 0;
      puVar15[1] = (ulong)puVar12;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      uStack_288 = puVar15;
      if (puVar15 + 2 != (ulong *)auStack_2e8) {
        if (((ulong)uStack_2e0 & 1) == 0) {
          puVar15[5] = uStack_2d0;
          *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_2e0;
          *(undefined4 *)((long)puVar15 + 0x1c) = uStack_2e0._4_4_;
          *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_2d8;
          *(undefined4 *)((long)puVar15 + 0x24) = uStack_2d8._4_4_;
        }
        else {
          puStack_300 = (ulong *)0xe0483ea;
          func_0x04885070(puVar15 + 3,uStack_2d0,uStack_2d8);
        }
      }
      puVar15[2] = (ulong)_auStack_2e8;
      puStack_300 = (ulong *)0xe048406;
      func_0x0eee2dd0(puVar15 + 7,0,0x118);
      *(undefined4 *)(puVar15 + 0xb) = 0x3f800000;
      *(undefined4 *)(puVar15 + 0x1e) = 2;
      puVar15[0x26] = 0;
      puVar15[0x27] = 0;
      *(undefined8 *)((long)puVar15 + 0x13c) = 0;
      *(undefined8 *)((long)puVar15 + 0x144) = 0;
      puStack_278 = (undefined *)CONCAT71(puStack_278._1_7_,1);
      if ((long)puVar32 < 0) {
        fVar39 = (float)puVar32;
        fVar38 = *(float *)(puStack_2f8 + 4);
        if (puVar32 != (ulong *)0x0) goto LAB_0e04849e;
LAB_0e0484af:
        uVar9 = 1;
        if ((ulong *)0x2 < puVar32) {
          uVar9 = (ulong)(((ulong)puVar32 & (ulong)((long)puVar32 - 1U)) != 0);
        }
        uVar9 = (long)puVar32 * 2 | uVar9;
        puStack_300 = (ulong *)0xe0484d5;
        fVar38 = (float)func_0x0eee3ab0((float)(puStack_2f8[3] + 1) / fVar38);
        uVar10 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        uVar9 = 2;
        if ((uVar10 == 1) || (uVar9 = uVar10, (uVar10 & uVar10 - 1) == 0)) {
          uVar10 = puStack_2f8[1];
          bVar37 = uVar9 < uVar10;
          if (uVar9 <= uVar10) goto LAB_0e048610;
LAB_0e048528:
          puStack_300 = (ulong *)0xe048534;
          func_0x0e044c20(puStack_2f8,uVar9);
        }
        else {
          puStack_300 = (ulong *)0xe0485fc;
          uVar9 = FUN_0412c3f0();
          uVar10 = puStack_2f8[1];
          bVar37 = uVar9 < uVar10;
          if (uVar10 < uVar9) goto LAB_0e048528;
LAB_0e048610:
          if (bVar37) {
            puStack_300 = (ulong *)0xe048653;
            fVar38 = (float)func_0x0eee3ab0((float)puStack_2f8[3] / *(float *)(puStack_2f8 + 4));
            uVar23 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
            if ((uVar10 < 3) ||
               (uVar33 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
               uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333),
               1 < (byte)(((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              puStack_300 = (ulong *)0xe0486fd;
              uVar23 = FUN_0412c3f0(uVar23);
            }
            else if (1 < uVar23) {
              lVar11 = 0x3f;
              if (uVar23 - 1 != 0) {
                for (; uVar23 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uVar23 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
            }
            if (uVar9 <= uVar23) {
              uVar9 = uVar23;
            }
            if (uVar9 < uVar10) goto LAB_0e048528;
          }
        }
        puVar32 = (ulong *)puStack_2f8[1];
        if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
          puVar25 = (ulong *)((ulong)puVar12 & (ulong)((long)puVar32 - 1U));
        }
        else {
          puVar25 = puVar12;
          if (puVar32 <= puVar12) {
            if (((ulong)puVar12 | (ulong)puVar32) >> 0x20 == 0) {
              puVar25 = (ulong *)(((ulong)puVar12 & 0xffffffff) % ((ulong)puVar32 & 0xffffffff));
            }
            else {
              puVar25 = (ulong *)((ulong)puVar12 % (ulong)puVar32);
            }
          }
        }
      }
      else {
        fVar39 = (float)(long)puVar32;
        fVar38 = *(float *)(puStack_2f8 + 4);
        if (puVar32 == (ulong *)0x0) goto LAB_0e0484af;
LAB_0e04849e:
        puVar25 = puStack_2b8;
        if (fVar39 * fVar38 < (float)(puStack_2f8[3] + 1)) goto LAB_0e0484af;
      }
      uVar9 = *puStack_2f8;
      puVar12 = *(ulong **)(uVar9 + (long)puVar25 * 8);
      if (puVar12 == (ulong *)0x0) {
        *puVar15 = *puStack_90;
        *puStack_90 = (ulong)puVar15;
        *(ulong **)(uVar9 + (long)puVar25 * 8) = puStack_90;
        if (*puVar15 != 0) {
          puVar12 = *(ulong **)(*puVar15 + 8);
          if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
            *(ulong **)(uVar9 + ((ulong)puVar12 & (ulong)((long)puVar32 - 1U)) * 8) = puVar15;
          }
          else {
            if (puVar32 <= puVar12) {
              if (((ulong)puVar12 | (ulong)puVar32) >> 0x20 == 0) {
                *(ulong **)
                 (uVar9 + (((ulong)puVar12 & 0xffffffff) % ((ulong)puVar32 & 0xffffffff)) * 8) =
                     puVar15;
                goto LAB_0e048769;
              }
              puVar12 = (ulong *)((ulong)puVar12 % (ulong)puVar32);
            }
            *(ulong **)(uVar9 + (long)puVar12 * 8) = puVar15;
          }
        }
      }
      else {
        *puVar15 = *puVar12;
        *puVar12 = (ulong)puVar15;
      }
LAB_0e048769:
      puStack_2f8[3] = puStack_2f8[3] + 1;
      goto LAB_0e048771;
    }
    uStack_220 = (ulong)puStack_230;
    puStack_300 = (ulong *)0xe04818b;
    func_0x0ed5ffe0(*puStack_2a8,8,&uStack_220);
    if ((uStack_220 & 0x80000000000000) != 0) {
      puStack_300 = (ulong *)0xe0481c4;
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
    }
    uStack_220 = 0;
    goto LAB_0e048826;
  }
  puStack_300 = (ulong *)0xe047ee6;
  lVar11 = (**(code **)(*plVar31 + 0xa8))(plVar31);
  if (lVar11 == 2) goto LAB_0e047ef0;
  uStack_210 = uStack_2c0;
  puStack_300 = (ulong *)0xe048117;
  func_0x0ed5ffe0(*puStack_2a8,8,&uStack_210);
  if ((uStack_210 & 0x80000000000000) != 0) {
    puStack_300 = (ulong *)0xe048150;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
  }
  uStack_210 = 0;
  goto LAB_0e048860;
LAB_0e047703:
  puVar12[6] = (ulong)puStack_230;
  puVar13[6] = (ulong)puVar25;
LAB_0e047716:
  uVar9 = uStack_2c0;
  plVar31 = plStack_2f0;
  puStack_300 = (ulong *)0xe04771b;
  func_0x0e042f20();
  puStack_300 = (ulong *)0xe047728;
  func_0x0412a280(puVar13,0x150);
  puVar13 = puVar12;
  puVar12 = puStack_2b0;
joined_r0x0e047738:
  if ((uStack_c0 & 1) != 0) {
    puStack_300 = (ulong *)0xe0474e9;
    func_0x0412a280(CONCAT44(uStack_ac,uStack_b0),uStack_c0 & 0xfffffffffffffffe);
  }
  if ((cStack_c8 == '\x01') && ((bStack_e8 & 1) != 0)) {
    puStack_300 = (ulong *)0xe047516;
    func_0x0412a280(uStack_d8,CONCAT62(uStack_e6,CONCAT11(uStack_e7,bStack_e8)) & 0xfffffffffffffffe
                   );
  }
  if ((ulong)uStack_100 != 0xffffffff) {
    puStack_300 = (ulong *)0xe04753e;
    (**(code **)(&UNK_0f4a9980 + (ulong)uStack_100 * 8))(&uStack_288,auStack_1b8);
  }
  if (((ulong)_auStack_2e8 & 1) != 0) {
    puStack_300 = (ulong *)0xe047558;
    func_0x0412a280(uStack_2d8,(ulong)_auStack_2e8 & 0xfffffffffffffffe);
  }
  auStack_1b8 = (undefined1  [8])(puVar13 + 7);
  uStack_190 = puVar12[5];
  puStack_1a8 = (undefined8 *)&UNK_0decf7d0;
  uStack_198 = 0x59cd93fa;
  pcStack_1a0 = (code *)0x0;
  cStack_194 = '\x03';
  uStack_188 = 0;
  puStack_180 = &UNK_0decf7b0;
  puStack_300 = (ulong *)0xe0475e2;
  func_0x0ed75bc0(&puStack_1c8,plVar31,auStack_1b8,uStack_208,&puStack_58);
  unaff_R13 = puStack_2b8;
  if (pcStack_1a0 != (code *)0x0) {
    puStack_300 = (ulong *)0xe0475fe;
    (*pcStack_1a0)(auStack_1b8);
  }
  uVar10 = unaff_R13[1];
  uVar19 = *(uint *)(uVar10 + 0x1c + (ulong)(uint)*unaff_R13 * 0x20);
  *(uint *)unaff_R13 = uVar19;
  if ((uint)unaff_R13[0x24] == 0) {
    puVar13 = (ulong *)(ulong)(uint)unaff_R13[2];
  }
  else {
    puVar13 = (ulong *)((ulong)((uint)unaff_R13[0x24] - 1) * 0x30);
    if ((*(uint *)(unaff_R13[0x23] + 0x18 + (long)puVar13) == uVar19) ||
       (puVar13 = (ulong *)(ulong)(uint)unaff_R13[2], uVar19 != (uint)unaff_R13[2] - 1))
    goto LAB_0e04684c;
  }
  uVar19 = (uint)puVar13;
  lVar11 = uVar10 + (long)puVar13 * 0x20;
  uVar10 = (ulong)*(uint *)((uVar10 - 0x10) + (long)puVar13 * 0x20);
  if (uVar10 != 0xffffffff) {
    puStack_300 = (ulong *)0xe04767f;
    (**(code **)(&UNK_0f4e40d0 + uVar10 * 8))(auStack_1b8,lVar11 + -0x18);
    uVar19 = (uint)unaff_R13[2];
  }
  *(undefined4 *)(lVar11 + -0x10) = 0xffffffff;
  puVar13 = (ulong *)(ulong)(uVar19 - 1);
  *(uint *)(unaff_R13 + 2) = uVar19 - 1;
LAB_0e04684c:
  puStack_300 = (ulong *)0xe046858;
  (**(code **)(*plVar31 + 0xd0))(plVar31);
LAB_0e046860:
  uStack_228 = uStack_228 + 1;
  if (uStack_228 == uVar9) {
    return;
  }
  goto LAB_0e04686c;
LAB_0e048966:
  puVar15[6] = (ulong)auStack_2e8;
  puStack_2c8 = puVar26;
LAB_0e048771:
  plVar31 = plStack_2f0;
  uStack_288 = puVar15 + 7;
  plStack_260 = (long *)puStack_2b0[5];
  puStack_278 = &UNK_0decf7d0;
  iStack_268 = 0x59cd93fa;
  pcStack_270 = (code *)0x0;
  uStack_264 = 3;
  uStack_258 = 0;
  puStack_250 = &UNK_0decf7b0;
  puStack_300 = (ulong *)0xe0487fe;
  func_0x0ed75bc0(&puStack_1c8,plStack_2f0,&uStack_288,uStack_208,&puStack_58);
  puStack_300 = (ulong *)0xe04880a;
  (**(code **)(*plVar31 + 0xd0))(plVar31);
  unaff_R13 = puStack_238;
  if (pcStack_270 != (code *)0x0) {
    puStack_300 = (ulong *)0xe048826;
    (*pcStack_270)(&uStack_288);
  }
LAB_0e048826:
  if (pcStack_1a0 != (code *)0x0) {
    puStack_300 = (ulong *)0xe04883d;
    (*pcStack_1a0)(auStack_1b8);
  }
  if (((ulong)uStack_2e0 & 1) != 0) {
    puStack_300 = (ulong *)0xe048857;
    func_0x0412a280(uStack_2d0,(ulong)uStack_2e0 & 0xfffffffffffffffe);
  }
LAB_0e048860:
  puStack_300 = (ulong *)0xe04886c;
  (**(code **)(*plVar31 + 0xd0))(plVar31);
  lVar11 = *(long *)(puVar1 + 2);
  uVar19 = *(uint *)(lVar11 + 0x1c + (ulong)*puVar1 * 0x20);
  *puVar1 = uVar19;
  if (puVar1[0x48] == 0) {
    uVar30 = puVar1[4];
  }
  else if ((*(uint *)(*(long *)(puVar1 + 0x46) + 0x18 + (ulong)(puVar1[0x48] - 1) * 0x30) == uVar19)
          || (uVar30 = puVar1[4], uVar19 != uVar30 - 1)) goto LAB_0e047e7f;
  lVar36 = lVar11 + (ulong)uVar30 * 0x20;
  uVar9 = (ulong)*(uint *)(lVar11 + -0x10 + (ulong)uVar30 * 0x20);
  if (uVar9 != 0xffffffff) {
    puStack_300 = (ulong *)0xe0488f5;
    (**(code **)(&UNK_0f4e40d0 + uVar9 * 8))(auStack_1b8,lVar36 + -0x18);
    uVar30 = puVar1[4];
  }
  *(undefined4 *)(lVar36 + -0x10) = 0xffffffff;
  puVar1[4] = uVar30 - 1;
LAB_0e047e7f:
  puVar13 = (ulong *)(ulong)((int)puVar13 + 1);
  param_5 = puStack_2a8;
  if (unaff_R13 <= puVar13) {
    return;
  }
  goto LAB_0e047e90;
}


