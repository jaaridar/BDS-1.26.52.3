/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd39cfc0 (ELF vaddr 0xd29cfc0)
 * Label: caller-of-callee
 * Body:  [[0d39cfc0, 0d39d22c] [0d39d230, 0d39d2ae] [0d39d2b0, 0d39dacc] [0d39dad0, 0d39db3b] [0d39db40, 0d39ddd1] [0d39dde0, 0d39de14] [0d39de20, 0d39de91] [0d39dea0, 0d39deba] [0d39dec0, 0d39f2ff] [0d39f34a, 0d39f375] [0d39f415, 0d39f426] [0d39f4ed, 0d39f50b] [0d39f6b3, 0d39f733]]
 * Ghidra: FUN_0d39cfc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d39cfc0(long param_1,long *param_2,undefined4 param_3,undefined8 param_4,byte *param_5,
                  undefined8 param_6,undefined8 *param_7,byte param_8)

{
  long lVar1;
  byte ******ppppppbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  long *plVar24;
  undefined8 *******pppppppuVar25;
  long *plVar26;
  byte *******pppppppbVar27;
  ulong uVar28;
  undefined1 *puVar29;
  byte ******ppppppbVar30;
  undefined8 *puVar31;
  ulong uVar32;
  byte ******ppppppbVar33;
  byte ******ppppppbVar34;
  byte *****pppppbVar35;
  byte ******unaff_R15;
  bool bVar36;
  byte ******ppppppbStack_498;
  undefined1 auStack_488 [8];
  byte ******ppppppbStack_480;
  byte ******ppppppbStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [8];
  byte ******ppppppbStack_460;
  byte ******ppppppbStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  undefined8 auStack_430 [2];
  undefined *puStack_420;
  code *pcStack_418;
  undefined4 uStack_410;
  undefined1 uStack_40c;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined1 uStack_3bc;
  byte ******ppppppbStack_3b8;
  byte *pbStack_3b0;
  undefined4 uStack_3a4;
  undefined8 *puStack_3a0;
  undefined1 auStack_398 [8];
  byte ******ppppppbStack_390;
  long *plStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 *******apppppppuStack_360 [3];
  code *pcStack_348;
  int iStack_340;
  char cStack_33c;
  byte ******ppppppbStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  byte bStack_2ec;
  byte ******ppppppbStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long *plStack_268;
  long lStack_260;
  undefined8 uStack_258;
  ulong uStack_240;
  ulong uStack_238;
  undefined1 auStack_230 [24];
  code *pcStack_218;
  undefined1 auStack_208 [80];
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  char cStack_192;
  ulong uStack_190;
  ulong uStack_188;
  byte *******pppppppbStack_180;
  byte ******ppppppbStack_178;
  byte ******ppppppbStack_170;
  byte ******ppppppbStack_168;
  int iStack_160;
  char cStack_15c;
  undefined1 auStack_158 [76];
  byte bStack_10c;
  byte ******ppppppbStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  byte bStack_bc;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  byte bStack_3c;
  
  ppppppbStack_3b8 = (byte ******)(param_5 + 1);
  bVar36 = (*param_5 & 1) == 0;
  auStack_468 = (undefined1  [8])*(byte *******)(param_5 + 0x10);
  if (bVar36) {
    auStack_468 = (undefined1  [8])ppppppbStack_3b8;
  }
  ppppppbStack_460 = (byte ******)(ulong)(*param_5 >> 1);
  if (!bVar36) {
    ppppppbStack_460 = *(byte *******)(param_5 + 8);
  }
  ppppppbStack_458 = (byte ******)CONCAT71(ppppppbStack_458._1_7_,1);
  auStack_398 = (undefined1  [8])0x0;
  uStack_470 = param_6;
  pbStack_3b0 = param_5;
  uStack_3a4 = param_3;
  lStack_2c0 = param_1;
  func_0x0eeb79f0(auStack_b0,auStack_398);
  if (((ulong)auStack_398 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)auStack_398 & 0xff00ffffffffffff) - 8)
    ;
  }
  lVar13 = (**(code **)(*param_2 + 0x48))(param_2);
  ppppppbVar30 = (byte ******)0x80000000000000;
  if (*(long *)(lVar13 + 0x78) == 0) {
    puStack_3a0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_3a0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *puStack_3a0 = param_2;
    puStack_3a0[1] = param_4;
    puStack_3a0[2] = 0;
    puStack_3a0[3] = 0;
    puStack_3a0[4] = 0;
    *(undefined4 *)(puStack_3a0 + 5) = 0x34;
    *(undefined2 *)((long)puStack_3a0 + 0x2c) = 0xffff;
    lVar21 = *(long *)(lVar13 + 0x80);
    *(undefined8 **)(lVar13 + 0x80) = puStack_3a0;
    if (lVar21 != 0) {
      if ((*(ulong *)(lVar21 + 0x20) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lVar21 + 0x20) & 0xff00ffffffffffff) - 8);
      }
      *(undefined8 *)(lVar21 + 0x20) = 0;
      if ((*(ulong *)(lVar21 + 0x18) & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(lVar21 + 0x18) & 0xff00ffffffffffff) - 8);
      }
      func_0x0412a280(lVar21,0x30);
      puStack_3a0 = *(undefined8 **)(lVar13 + 0x80);
    }
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x90,0);
    }
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[3] = puVar14 + 4;
    puVar14[10] = 0;
    puVar14[0x10] = 0;
    puVar31 = *(undefined8 **)(lVar13 + 8);
    puStack_2a0 = *(undefined8 **)(lVar13 + 0x10);
    if (puVar31 != puStack_2a0) {
      do {
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
        if (plVar15 == (long *)0x0) {
          func_0x0eec74c0(0x68,0);
        }
        auStack_398 = (undefined1  [8])*puVar31;
        ppppppbStack_390 = (byte ******)0x0;
        ppppppbVar30 = (byte ******)puVar31[1];
        if (((ulong)ppppppbVar30 & 0x80000000000000) != 0) {
          lVar1 = *(long *)(((ulong)ppppppbVar30 & 0xff00ffffffffffff) - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,(ulong)ppppppbVar30 & 0xff00ffffffffffff,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          ppppppbVar30 = (byte ******)((ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000)
          ;
        }
        plStack_388 = (long *)0x0;
        uVar28 = puVar31[2];
        ppppppbStack_390 = ppppppbVar30;
        if ((uVar28 & 0x80000000000000) != 0) {
          lVar1 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28 & 0xff00ffffffffffff,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          uVar28 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_380 = puVar31[3];
        uStack_378 = 0;
        uVar18 = puVar31[4];
        plStack_388 = (long *)uVar28;
        if ((uVar18 & 0x80000000000000) != 0) {
          lVar1 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar18 & 0xff00ffffffffffff,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          uVar18 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_370 = 0;
        uVar28 = puVar31[5];
        uStack_378 = uVar18;
        if ((uVar28 & 0x80000000000000) != 0) {
          lVar1 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28 & 0xff00ffffffffffff,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          uVar28 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_368 = CONCAT62(uStack_368._2_6_,*(undefined2 *)(puVar31 + 6));
        auStack_468 = auStack_398;
        ppppppbVar30 = ppppppbStack_390;
        uStack_370 = uVar28;
        if (((ulong)ppppppbStack_390 & 0x80000000000000) != 0) {
          uVar28 = (ulong)ppppppbStack_390 & 0xff00ffffffffffff;
          lVar1 = *(long *)(uVar28 - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          ppppppbVar30 = (byte ******)((ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000)
          ;
        }
        ppppppbStack_458 = (byte ******)0x0;
        plVar24 = plStack_388;
        ppppppbStack_460 = ppppppbVar30;
        if (((ulong)plStack_388 & 0x80000000000000) != 0) {
          uVar28 = (ulong)plStack_388 & 0xff00ffffffffffff;
          lVar1 = *(long *)(uVar28 - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          plVar24 = (long *)((ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        uStack_450 = uStack_380;
        uStack_448 = 0;
        uVar28 = uStack_378;
        ppppppbStack_458 = (byte ******)plVar24;
        if ((uStack_378 & 0x80000000000000) != 0) {
          uVar28 = uStack_378 & 0xff00ffffffffffff;
          lVar1 = *(long *)(uVar28 - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          uVar28 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_440 = 0;
        uVar18 = uStack_370;
        uStack_448 = uVar28;
        if ((uStack_370 & 0x80000000000000) != 0) {
          uVar28 = uStack_370 & 0xff00ffffffffffff;
          lVar1 = *(long *)(uVar28 - 8);
          lVar21 = lVar1 + 9;
          plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
          if (lVar21 != 0 && plVar24 == (long *)0x0) {
            func_0x0eec74c0(lVar21,8);
          }
          *plVar24 = lVar1;
          func_0x0eee2f00(plVar24 + 1,uVar28,lVar1);
          *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
          uVar18 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_438 = CONCAT62(uStack_438._2_6_,(undefined2)uStack_368);
        uStack_440 = uVar18;
        func_0x0d6a8c00(plVar15,auStack_398,auStack_468);
        if ((uStack_440 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_440 & 0xff00ffffffffffff) - 8);
        }
        uStack_440 = 0;
        if ((uStack_448 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_448 & 0xff00ffffffffffff) - 8);
        }
        uStack_448 = 0;
        if (((ulong)ppppppbStack_458 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppbStack_458 & 0xff00ffffffffffff) - 8);
        }
        ppppppbStack_458 = (byte ******)0x0;
        if (((ulong)ppppppbStack_460 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppbStack_460 & 0xff00ffffffffffff) - 8);
        }
        *plVar15 = (long)&UNK_0f462300;
        plVar15[0xb] = (long)puStack_3a0;
        plVar15[0xc] = (long)(puVar31 + 7);
        if ((uStack_370 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
        }
        uStack_370 = 0;
        if ((uStack_378 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
        }
        uStack_378 = 0;
        if (((ulong)plStack_388 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)plStack_388 & 0xff00ffffffffffff) - 8);
        }
        plStack_388 = (long *)0x0;
        if (((ulong)ppppppbStack_390 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)ppppppbStack_390 & 0xff00ffffffffffff) - 8);
        }
        plVar24 = (long *)*puVar14;
        plVar26 = (long *)puVar14[1];
        plStack_268 = plVar15;
        while ((plVar24 != plVar26 &&
               (cVar10 = func_0x04fa7a10(*plVar24 + 0x20,plStack_268 + 7), cVar10 != '\0'))) {
          plVar24 = plVar24 + 1;
        }
        func_0x0d6af860(puVar14,plVar24,&plStack_268);
        plVar15 = plStack_268;
        plStack_268 = (long *)0x0;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 8))();
        }
        puVar31 = puVar31 + 9;
      } while (puVar31 != puStack_2a0);
    }
    ppppppbVar30 = (byte ******)0x80000000000000;
    unaff_R15 = *(byte *******)(lVar13 + 0x20);
    ppppppbVar16 = *(byte *******)(lVar13 + 0x28);
    if (unaff_R15 != ppppppbVar16) {
      do {
        ppppppbVar30 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (ppppppbVar30 == (byte ******)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        func_0x0d6b23d0(ppppppbVar30,unaff_R15,unaff_R15 + 3);
        *ppppppbVar30 = (byte *****)&UNK_0f462328;
        auStack_468 = (undefined1  [8])ppppppbVar30;
        func_0x0d6afb30(puVar14,auStack_468);
        auVar7 = auStack_468;
        auStack_468 = (undefined1  [8])0x0;
        if (auVar7 != (undefined1  [8])0x0) {
          (*(code *)(*(byte ******)auVar7)[1])();
        }
        unaff_R15 = unaff_R15 + 6;
      } while (unaff_R15 != ppppppbVar16);
    }
    lVar21 = *(long *)(lVar13 + 0x78);
    *(undefined8 **)(lVar13 + 0x78) = puVar14;
    if (lVar21 != 0) {
      func_0x0d3ca3d0();
    }
  }
  auStack_488 = (undefined1  [8])0x0;
  ppppppbStack_480 = (byte ******)0x0;
  ppppppbStack_478 = (byte ******)0x0;
  func_0x04865530(auStack_398,uStack_470);
  ppppppbStack_498 = (byte ******)(auStack_468 + 1);
  pppppbVar35 = (byte *****)auStack_468;
  puVar29 = auStack_398;
  while( true ) {
    func_0x048655b0(pppppbVar35,uStack_470);
    uVar11 = func_0x04862c80(puVar29,pppppbVar35);
    uVar28 = (ulong)uVar11;
    func_0x04862b40(pppppbVar35);
    if ((char)uVar11 != '\0') break;
    plVar15 = (long *)func_0x04862ca0(puVar29);
    ppppppbVar16 = (byte ******)func_0x0eee2e90(plVar15);
    if ((byte ******)0xfffffffffffffff7 < ppppppbVar16) {
      func_0x04882e30();
      goto LAB_0d39f281;
    }
    if (ppppppbVar16 < (byte ******)0x17) {
      auStack_468[0] = (char)ppppppbVar16 * '\x02';
      ppppppbVar17 = (byte ******)(auStack_468 + 1);
      if (ppppppbVar16 != (byte ******)0x0) goto LAB_0d39db8b;
    }
    else {
      uVar28 = ((ulong)ppppppbVar16 | 7) + 1;
      if (((ulong)ppppppbVar16 | 7) == 0x17) {
        uVar28 = 0x1a;
      }
      ppppppbVar17 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
      if (ppppppbVar17 == (byte ******)0x0) {
        func_0x0eec74c0(uVar28,0);
      }
      ppppppbVar30 = (byte ******)(uVar28 | 1);
      auStack_468 = (undefined1  [8])ppppppbVar30;
      ppppppbStack_460 = ppppppbVar16;
      ppppppbStack_458 = ppppppbVar17;
LAB_0d39db8b:
      func_0x0eee2ee0(ppppppbVar17,plVar15,ppppppbVar16);
    }
    *(byte *)((long)ppppppbVar17 + (long)ppppppbVar16) = 0;
    ppppppbVar17 = (byte ******)((ulong)auStack_468 >> 1 & 0x7f);
    if (((ulong)auStack_468 & 1) != 0) {
      ppppppbVar17 = ppppppbStack_460;
    }
    if (ppppppbVar17 != (byte ******)0xe) {
LAB_0d39dc21:
      if (((ulong)auStack_488 & 1) == 0) {
        if (((ulong)auStack_468 & 1) == 0) {
          ppppppbStack_478 = ppppppbStack_458;
          auStack_488 = auStack_468;
          ppppppbStack_480 = ppppppbStack_460;
        }
        else {
          func_0x04885070(auStack_488,ppppppbStack_458,ppppppbStack_460);
        }
      }
      else {
        if (((ulong)auStack_468 & 1) != 0) {
          ppppppbStack_498 = ppppppbStack_458;
        }
        func_0x04885120(auStack_488,ppppppbStack_498);
      }
      if (((ulong)auStack_468 & 1) != 0) {
        func_0x0412a280(ppppppbStack_458,(ulong)auStack_468 & 0xfffffffffffffffe);
      }
      break;
    }
    ppppppbVar17 = ppppppbStack_458;
    if (((ulong)auStack_468 & 1) == 0) {
      ppppppbVar17 = (byte ******)(auStack_468 + 1);
    }
    if (*(long *)((long)ppppppbVar17 + 6) != 0x6e6f69737265765f ||
        *ppppppbVar17 != (byte *****)0x765f74616d726f66) goto LAB_0d39dc21;
    if (((ulong)auStack_468 & 1) != 0) {
      func_0x0412a280(ppppppbStack_458,(ulong)auStack_468 & 0xfffffffffffffffe);
    }
    func_0x04862ba0(puVar29);
    unaff_R15 = ppppppbVar16;
  }
  func_0x04862b40(auStack_398);
  ppppppbVar17 = (byte ******)((ulong)auStack_488 >> 1 & 0x7f);
  ppppppbVar30 = (byte ******)(auStack_488 + 1);
  ppppppbVar16 = ppppppbVar30;
  if (((ulong)auStack_488 & 1) != 0) {
    ppppppbVar17 = ppppppbStack_480;
    ppppppbVar16 = ppppppbStack_478;
  }
  uVar18 = func_0x04883620(auStack_468,ppppppbVar16,ppppppbVar17);
  uVar28 = *(ulong *)(lVar13 + 0x58);
  if (uVar28 != 0) {
    uVar19 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
    uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar19 >> 0x38 < 2) {
      uVar32 = uVar28 - 1 & uVar18;
    }
    else {
      uVar32 = uVar18;
      if (uVar28 <= uVar18) {
        if ((uVar18 | uVar28) >> 0x20 == 0) {
          uVar32 = (uVar18 & 0xffffffff) % (uVar28 & 0xffffffff);
        }
        else {
          uVar32 = uVar18 % uVar28;
        }
      }
    }
    plVar15 = *(long **)(*(long *)(lVar13 + 0x50) + uVar32 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      ppppppbVar16 = ppppppbStack_478;
      ppppppbVar17 = ppppppbStack_480;
      if (((ulong)auStack_488 & 1) == 0) {
        ppppppbVar16 = ppppppbVar30;
        ppppppbVar17 = (byte ******)((ulong)auStack_488 >> 1 & 0x7f);
      }
      if ((byte)(uVar19 >> 0x38) < 2) {
        do {
          if (uVar18 == plVar15[1]) {
            bVar4 = *(byte *)(plVar15 + 2);
            if ((bVar4 & 1) == 0) {
              ppppppbVar34 = (byte ******)(ulong)(bVar4 >> 1);
            }
            else {
              ppppppbVar34 = (byte ******)plVar15[3];
            }
            if (ppppppbVar34 == ppppppbVar17) {
              if ((bVar4 & 1) == 0) {
                lVar21 = (long)plVar15 + 0x11;
              }
              else {
                lVar21 = plVar15[4];
              }
              iVar12 = func_0x0eee3000(lVar21,ppppppbVar16,ppppppbVar17);
              if (iVar12 == 0) goto LAB_0d39dee8;
            }
          }
          else if ((plVar15[1] & uVar28 - 1) != uVar32) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar15[1];
          if (uVar18 == uVar19) {
            bVar4 = *(byte *)(plVar15 + 2);
            if ((bVar4 & 1) == 0) {
              ppppppbVar34 = (byte ******)(ulong)(bVar4 >> 1);
            }
            else {
              ppppppbVar34 = (byte ******)plVar15[3];
            }
            if (ppppppbVar34 == ppppppbVar17) {
              if ((bVar4 & 1) == 0) {
                lVar21 = (long)plVar15 + 0x11;
              }
              else {
                lVar21 = plVar15[4];
              }
              iVar12 = func_0x0eee3000(lVar21,ppppppbVar16,ppppppbVar17);
              if (iVar12 == 0) goto LAB_0d39dee8;
            }
          }
          else {
            if (uVar28 <= uVar19) {
              if ((uVar19 | uVar28) >> 0x20 == 0) {
                uVar19 = (uVar19 & 0xffffffff) % (uVar28 & 0xffffffff);
              }
              else {
                uVar19 = uVar19 % uVar28;
              }
            }
            if (uVar19 != uVar32) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  uStack_2d8 = 0;
  ppppppbStack_2e8 = (byte ******)0x0;
  uStack_2e0 = 0;
  uStack_2d0 = 1;
LAB_0d39df54:
  uVar28 = uStack_2d8;
  auStack_468 = (undefined1  [8])ppppppbVar30;
  if (((ulong)auStack_488 & 1) != 0) {
    auStack_468 = (undefined1  [8])ppppppbStack_478;
  }
  func_0x0b650920(1,3,0xe,&UNK_0148c39f,auStack_468);
  uVar11 = 0;
joined_r0x0d39f24f:
  if ((uVar28 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar28 & 0xff00ffffffffffff) - 8);
  }
  uStack_2d8 = 0;
  if ((uStack_2e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e0 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)auStack_488 & 1) != 0) {
    func_0x0412a280(ppppppbStack_478,(ulong)auStack_488 & 0xfffffffffffffffe);
  }
  if ((param_8 & (byte)uVar11) != 0) {
    plStack_268 = (long *)0x0;
    lStack_260 = 0;
    uStack_258 = 0;
    func_0x04865530(auStack_468,uStack_470);
    while( true ) {
      func_0x048655b0(auStack_398,uStack_470);
      cVar10 = func_0x04862c80(auStack_468,auStack_398);
      func_0x04862b40(auStack_398);
      if (cVar10 != '\0') break;
      uVar20 = func_0x04862ca0(auStack_468);
      iVar12 = func_0x0eee2f20(uVar20,&UNK_013771cd);
      if (iVar12 != 0) {
        uVar20 = func_0x04862ca0(auStack_468);
        func_0x04130630(&plStack_268,uVar20);
        break;
      }
      func_0x04862ba0(auStack_468);
    }
    func_0x04862b40(auStack_468);
    if (((((ulong)plStack_268 & 1) == 0) || (lStack_260 != 0x24)) ||
       (iVar12 = func_0x0eee3000(uStack_258,&DAT_011ec59d,0x24), iVar12 != 0)) {
      func_0x04867c60(auStack_398);
      func_0x04867c90(&uStack_1b8,auStack_398,uStack_470);
      if ((*pbStack_3b0 & 1) == 0) {
        ppppppbStack_458 = *(byte *******)(pbStack_3b0 + 0x10);
        auStack_468 = *(undefined1 (*) [8])pbStack_3b0;
        ppppppbStack_460 = *(byte *******)(pbStack_3b0 + 8);
      }
      else {
        func_0x0412e5e0(auStack_468,*(undefined8 *)(pbStack_3b0 + 0x10),
                        *(undefined8 *)(pbStack_3b0 + 8));
      }
      uVar18 = uStack_1a8;
      uVar20 = uStack_1b0;
      uVar28 = uStack_1b8;
      lVar13 = lStack_2c0;
      uStack_440 = uStack_1a8;
      uStack_450 = uStack_1b8;
      uStack_448 = uStack_1b0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      puVar14 = *(undefined8 **)(lStack_2c0 + 0x78);
      if (puVar14 < *(undefined8 **)(lStack_2c0 + 0x80)) {
        puVar14[2] = ppppppbStack_458;
        *puVar14 = auStack_468;
        puVar14[1] = ppppppbStack_460;
        auStack_468 = (undefined1  [8])0x0;
        ppppppbStack_460 = (byte ******)0x0;
        ppppppbStack_458 = (byte ******)0x0;
        puVar14[5] = uVar18;
        puVar14[3] = uVar28;
        puVar14[4] = uVar20;
        uStack_450 = 0;
        uStack_448 = 0;
        uStack_440 = 0;
        *(undefined8 **)(lStack_2c0 + 0x78) = puVar14 + 6;
      }
      else {
        uVar20 = func_0x086280e0(lStack_2c0 + 0x70,auStack_468);
        *(undefined8 *)(lVar13 + 0x78) = uVar20;
        if ((uStack_450 & 1) != 0) {
          func_0x0412a280(uStack_440,uStack_450 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_468 & 1) != 0) {
          func_0x0412a280(ppppppbStack_458,(ulong)auStack_468 & 0xfffffffffffffffe);
        }
      }
      if ((uStack_1b8 & 1) != 0) {
        func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
      }
      auStack_398 = (undefined1  [8])&UNK_0ef40ca0;
      if (((ulong)ppppppbStack_390 & 1) != 0) {
        func_0x0412a280(uStack_380,(ulong)ppppppbStack_390 & 0xfffffffffffffffe);
      }
      func_0x04867c50(auStack_398);
      if (((ulong)plStack_268 & 1) == 0) goto LAB_0d39e2bd;
    }
    func_0x0412a280(uStack_258,(ulong)plStack_268 & 0xfffffffffffffffe);
  }
LAB_0d39e2bd:
  func_0x0eeb81b0(auStack_b0);
  return (ulong)uVar11;
LAB_0d39dee8:
  ppppppbStack_498 = (byte ******)plVar15[5];
  uStack_2e0 = plVar15[6];
  ppppppbStack_2e8 = ppppppbStack_498;
  if ((uStack_2e0 & 0x80000000000000) != 0) {
    uVar28 = uStack_2e0 & 0xff00ffffffffffff;
    pppppbVar35 = *(byte ******)(uVar28 - 8);
    puVar29 = (undefined1 *)((long)pppppbVar35 + 9);
    unaff_R15 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,puVar29,8);
    if (puVar29 != (undefined1 *)0x0 && unaff_R15 == (byte ******)0x0) {
LAB_0d39f281:
      func_0x0eec74c0(puVar29,8);
    }
    *unaff_R15 = pppppbVar35;
    func_0x0eee2f00(unaff_R15 + 1,uVar28,pppppbVar35);
    *(undefined1 *)((long)(unaff_R15 + 1) + (long)pppppbVar35) = 0;
    uStack_2e0 = (ulong)(unaff_R15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_2d8 = 0;
  uVar28 = plVar15[7];
  if ((uVar28 & 0x80000000000000) != 0) {
    lVar1 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
    lVar21 = lVar1 + 9;
    plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
    if (lVar21 != 0 && plVar24 == (long *)0x0) {
      func_0x0eec74c0(lVar21,8);
    }
    *plVar24 = lVar1;
    func_0x0eee2f00(plVar24 + 1,uVar28 & 0xff00ffffffffffff,lVar1);
    *(undefined1 *)((long)plVar24 + lVar1 + 8) = 0;
    uVar28 = (ulong)(plVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  cVar10 = (char)plVar15[8];
  uStack_2d0 = CONCAT71(uStack_2d0._1_7_,cVar10);
  uStack_2d8 = uVar28;
  if (((char)uStack_3a4 == '\0') && (((ulong)ppppppbStack_498 & 0x1000000000000) != 0)) {
    if (cVar10 == '\0') goto LAB_0d39e471;
    goto LAB_0d39df54;
  }
  if (((ulong)ppppppbStack_498 >> 0x30 & 1) == 0) goto LAB_0d39df54;
LAB_0d39e471:
  lVar21 = *(long *)(lVar13 + 0x80);
  *(undefined8 *)(lVar21 + 0x10) = *param_7;
  if ((*(ulong *)(lVar21 + 0x18) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(lVar21 + 0x18) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(lVar21 + 0x18) = 0;
  uVar28 = param_7[1];
  if ((uVar28 & 0x80000000000000) != 0) {
    lVar5 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar5 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar15 = lVar5;
    func_0x0eee2f00(plVar15 + 1,uVar28 & 0xff00ffffffffffff,lVar5);
    *(undefined1 *)((long)plVar15 + lVar5 + 8) = 0;
    uVar28 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *(ulong *)(lVar21 + 0x18) = uVar28;
  if ((*(ulong *)(lVar21 + 0x20) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(lVar21 + 0x20) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(lVar21 + 0x20) = 0;
  uVar28 = param_7[2];
  if ((uVar28 & 0x80000000000000) != 0) {
    lVar5 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar5 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar15 = lVar5;
    func_0x0eee2f00(plVar15 + 1,uVar28 & 0xff00ffffffffffff,lVar5);
    *(undefined1 *)((long)plVar15 + lVar5 + 8) = 0;
    uVar28 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *(ulong *)(lVar21 + 0x20) = uVar28;
  *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)(param_7 + 3);
  *(undefined2 *)(lVar21 + 0x2c) = *(undefined2 *)((long)param_7 + 0x1c);
  func_0x04863480(auStack_98,uStack_470);
  puStack_298 = &UNK_0f47dea0;
  func_0x048635d0(auStack_290,auStack_98);
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  func_0x04863610(auStack_98);
  lVar13 = *(long *)(lVar13 + 0x78);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  func_0x0d6afff0(auStack_398,lVar13,&puStack_298,&uStack_2b8,1);
  if ((((~uStack_378._6_1_ | bStack_2ec) & 1) == 0) && (*(long *)(lVar13 + 0x50) != 0)) {
    lVar21 = func_0x0417cc60();
    plVar15 = *(long **)(lVar13 + 0x50);
    if (plVar15 != (long *)0x0) {
      if (cStack_33c == '\x02') {
        apppppppuStack_360[0] = apppppppuStack_360;
      }
      pppppppuVar25 = (undefined8 *******)0x0;
      if (iStack_340 == -0x4f678fd4) {
        pppppppuVar25 = apppppppuStack_360[0];
      }
      (**(code **)(*plVar15 + 0x30))(plVar15,pppppppuVar25,&ppppppbStack_338);
      lVar13 = func_0x0417cc60();
      plStack_388 = (long *)((double)(lVar13 - lVar21) / _DAT_014f0138);
      uStack_380 = CONCAT71(uStack_380._1_7_,(byte)uStack_380 & ~bStack_2ec & uStack_378._6_1_);
      goto LAB_0d39e7bf;
    }
    func_0x04891200();
LAB_0d39f2ce:
    func_0x04882ee0();
LAB_0d39f2d3:
    uVar20 = func_0x04882e30();
    if (((ulong)auStack_398 & 1) != 0) {
      func_0x0412a280(plStack_388,(ulong)auStack_398 & 0xfffffffffffffffe);
    }
    if (((ulong)auStack_468 & 1) != 0) {
      func_0x0412a280(ppppppbStack_458,(ulong)auStack_468 & 0xfffffffffffffffe);
    }
    func_0x05ebba90(&uStack_1b8);
    func_0x0c1d0030(&puStack_298);
    FUN_0ee386e0(&uStack_2d8);
    FUN_0ee386e0(&uStack_2e0);
    if (((ulong)auStack_488 & 1) != 0) {
      func_0x0412a280(ppppppbStack_478,(ulong)auStack_488 & 0xfffffffffffffffe);
      func_0x0eeb81b0(auStack_b0);
      uVar20 = func_0x0eee2d70(uVar20);
      plVar15 = plStack_268;
      plStack_268 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      func_0x0d39ad10(ppppppbStack_498);
      func_0x0412a280(ppppppbStack_498,0x90);
    }
    func_0x0eeb81b0(auStack_b0);
    func_0x0eee2d70(uVar20);
    pcVar6 = (code *)swi(3);
    uVar28 = (*pcVar6)();
    return uVar28;
  }
LAB_0d39e7bf:
  uVar9 = uStack_2f8;
  uVar8 = uStack_310;
  uVar20 = uStack_328;
  ppppppbVar30 = ppppppbStack_338;
  if (((~uStack_378._6_1_ | bStack_2ec) & 1) == 0) {
    func_0x05ebb920(auStack_468,auStack_398);
    func_0x05ebb920(&uStack_1b8,auStack_468);
    func_0x05d85c50(&uStack_408);
    if (pcStack_418 != (code *)0x0) {
      (*pcStack_418)(auStack_430);
    }
    if ((uStack_438 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_438 & 0xff00ffffffffffff) - 8);
    }
    uStack_438 = 0;
    if ((uStack_440 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_440 & 0xff00ffffffffffff) - 8);
    }
    uStack_440 = 0;
  }
  else {
    uStack_100 = (undefined4)uStack_330;
    uStack_fc = uStack_330._4_4_;
    ppppppbStack_338 = (byte ******)0x0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_f0 = (undefined4)uStack_320;
    uStack_ec = uStack_320._4_4_;
    uStack_e8 = (undefined4)uStack_318;
    uStack_e4 = uStack_318._4_4_;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_d8 = (undefined4)uStack_308;
    uStack_d4 = uStack_308._4_4_;
    uStack_d0 = (undefined4)uStack_300;
    uStack_cc = uStack_300._4_4_;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    bStack_3c = bStack_2ec;
    uStack_40 = uStack_2f0;
    ppppppbStack_108 = ppppppbVar30;
    uStack_f8 = uVar20;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_e0 = uVar8;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_c8 = uVar9;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_c0 = uStack_2f0;
    bStack_bc = bStack_2ec;
    auStack_468 = (undefined1  [8])0x0;
    ppppppbStack_460 = (byte ******)0x0;
    ppppppbStack_458 = (byte ******)0x0;
    uStack_450._0_1_ = 1;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_438 = 0;
    puStack_420 = &UNK_0488e0b0;
    uStack_410 = 0x48b5725f;
    pcStack_418 = (code *)0x0;
    uStack_40c = 0;
    auStack_430[0] = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0xfefffffc;
    uStack_3bc = 0;
    func_0x0c4a4310(&uStack_408,&ppppppbStack_108);
    uStack_450 = (ulong)uStack_450._1_7_ << 8;
    func_0x05ebb920(&plStack_268,auStack_468);
    func_0x05d85c50(&uStack_408);
    if (pcStack_418 != (code *)0x0) {
      (*pcStack_418)(auStack_430);
    }
    if ((uStack_438 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_438 & 0xff00ffffffffffff) - 8);
    }
    uStack_438 = 0;
    if ((uStack_440 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_440 & 0xff00ffffffffffff) - 8);
    }
    uStack_440 = 0;
    func_0x05d85c50(&ppppppbStack_108);
    func_0x05ebb920(auStack_468,&plStack_268);
    func_0x05ebb920(&uStack_1b8,auStack_468);
    func_0x05d85c50(&uStack_408);
    if (pcStack_418 != (code *)0x0) {
      (*pcStack_418)(auStack_430);
    }
    if ((uStack_438 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_438 & 0xff00ffffffffffff) - 8);
    }
    uStack_438 = 0;
    if ((uStack_440 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_440 & 0xff00ffffffffffff) - 8);
    }
    uStack_440 = 0;
    func_0x05d85c50(auStack_208);
    if (pcStack_218 != (code *)0x0) {
      (*pcStack_218)(auStack_230);
    }
    if ((uStack_238 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_238 & 0xff00ffffffffffff) - 8);
    }
    uStack_238 = 0;
    if ((uStack_240 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_240 & 0xff00ffffffffffff) - 8);
    }
    uStack_240 = 0;
    func_0x05d85c50(&uStack_88);
  }
  func_0x05d85c50(&ppppppbStack_338);
  if (pcStack_348 != (code *)0x0) {
    (*pcStack_348)(apppppppuStack_360);
  }
  if ((uStack_368 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
  }
  uStack_368 = 0;
  if ((uStack_370 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_370 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a8 = 0;
  if ((uStack_2b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2b0 & 0xff00ffffffffffff) - 8);
  }
  uVar11 = 0;
  if ((cStack_192 == '\x01') && ((bStack_10c & 1) == 0)) {
    pppppppbVar27 = &ppppppbStack_168;
    pppppppbVar23 = (byte *******)&pppppppbStack_180;
    if (cStack_15c != '\x02') {
      pppppppbVar27 = pppppppbStack_180 + 3;
      pppppppbVar23 = pppppppbStack_180;
    }
    pppppppbVar22 = (byte *******)0x0;
    if (iStack_160 == -0x4f678fd4) {
      pppppppbVar22 = pppppppbVar23;
    }
    pppppppbVar23 = (byte *******)&DAT_00000018;
    if (iStack_160 == -0x4f678fd4) {
      pppppppbVar23 = pppppppbVar27;
    }
    ppppppbVar30 = *pppppppbVar23;
    *(char *)((long)ppppppbVar30 + 9) = (char)uStack_3a4;
    *(char *)(ppppppbVar30 + 1) = cVar10;
    if (((ulong)*pppppppbVar22 & 1) == 0) {
      ppppppbStack_458 = pppppppbVar22[2];
      auStack_468 = (undefined1  [8])*pppppppbVar22;
      ppppppbStack_460 = pppppppbVar22[1];
    }
    else {
      pppppppbVar27 = &ppppppbStack_178;
      pppppppbVar23 = &ppppppbStack_170;
      if (cStack_15c != '\x02') {
        pppppppbVar27 = pppppppbStack_180 + 1;
        pppppppbVar23 = pppppppbStack_180 + 2;
      }
      pppppppbVar22 = (byte *******)&DAT_00000010;
      if (iStack_160 == -0x4f678fd4) {
        pppppppbVar22 = pppppppbVar23;
      }
      pppppppbVar23 = (byte *******)0x8;
      if (iStack_160 == -0x4f678fd4) {
        pppppppbVar23 = pppppppbVar27;
      }
      func_0x0412e5e0(auStack_468,*pppppppbVar22,*pppppppbVar23);
    }
    ppppppbVar30 = ppppppbStack_458;
    auVar7 = auStack_468;
    ppppppbVar16 = ppppppbStack_460;
    if (((ulong)auStack_468 & 1) == 0) {
      ppppppbVar16 = (byte ******)((ulong)auStack_468 >> 1 & 0x7f);
    }
    bVar4 = *pbStack_3b0;
    if ((bVar4 & 1) == 0) {
      ppppppbVar17 = (byte ******)(ulong)(bVar4 >> 1);
    }
    else {
      ppppppbVar17 = *(byte *******)(pbStack_3b0 + 8);
    }
    if (ppppppbVar16 == ppppppbVar17) {
      ppppppbVar17 = (byte ******)(auStack_468 + 1);
      if (((ulong)auStack_468 & 1) != 0) {
        ppppppbVar17 = ppppppbStack_458;
      }
      ppppppbVar34 = ppppppbStack_3b8;
      if ((bVar4 & 1) != 0) {
        ppppppbVar34 = *(byte *******)(pbStack_3b0 + 0x10);
      }
      iVar12 = func_0x0eee3000(ppppppbVar17,ppppppbVar34,ppppppbVar16);
      if (iVar12 != 0) goto LAB_0d39eec3;
      uVar11 = (uint)CONCAT71((int7)((ulong)ppppppbVar30 >> 8),1);
    }
    else {
LAB_0d39eec3:
      if (((ulong)auVar7 & 1) == 0) {
        ppppppbVar30 = (byte ******)(auStack_468 + 1);
      }
      ppppppbVar17 = (byte ******)((long)ppppppbVar16 + 1);
      ppppppbVar34 = (byte ******)0x1;
      do {
        ppppppbVar33 = ppppppbVar34;
        if ((long)ppppppbVar33 - (long)ppppppbVar16 == 1) goto LAB_0d39ef02;
        ppppppbVar34 = (byte ******)((long)ppppppbVar33 + 1);
        ppppppbVar2 = (byte ******)((long)ppppppbVar17 - 1);
        pbVar3 = (byte *)((long)ppppppbVar30 + -2) + (long)ppppppbVar17;
        ppppppbVar17 = ppppppbVar2;
      } while (*pbVar3 != 0x3a);
      if (ppppppbVar2 < (byte ******)0x2) {
LAB_0d39ef02:
        auStack_398 = (undefined1  [8])ppppppbVar30;
        func_0x0b64c7b0(1,3,0xe,&UNK_011cbb00,auStack_398);
        uVar11 = 0;
      }
      else {
        if (ppppppbVar16 < ppppppbVar2) goto LAB_0d39f2ce;
        if ((byte ******)((long)ppppppbVar33 - 1U) < ppppppbVar34) {
          ppppppbVar34 = (byte ******)((long)ppppppbVar33 - 1U);
        }
        if ((byte ******)0xfffffffffffffff7 < ppppppbVar34) goto LAB_0d39f2d3;
        plVar15 = (long *)(auStack_398 + 1);
        if (ppppppbVar34 < (byte ******)0x17) {
          auStack_398[0] = (char)ppppppbVar34 * '\x02';
          plVar24 = plVar15;
          if (ppppppbVar34 != (byte ******)0x0) goto LAB_0d39efe7;
        }
        else {
          uVar28 = 0x1a;
          if (((ulong)ppppppbVar34 | 7) != 0x17) {
            uVar28 = ((ulong)ppppppbVar34 | 7) + 1;
          }
          plVar24 = (long *)FUN_0ee32660(uVar28);
          auStack_398 = (undefined1  [8])(uVar28 | 1);
          ppppppbStack_390 = ppppppbVar34;
          plStack_388 = plVar24;
LAB_0d39efe7:
          func_0x0eee2ee0(plVar24,(byte *)((long)ppppppbVar30 + (long)ppppppbVar2),ppppppbVar34);
        }
        auVar7 = auStack_398;
        *(undefined1 *)((long)plVar24 + (long)ppppppbVar34) = 0;
        plVar24 = plStack_388;
        bVar4 = *pbStack_3b0;
        if ((bVar4 & 1) == 0) {
          ppppppbVar30 = (byte ******)(ulong)(bVar4 >> 1);
        }
        else {
          ppppppbVar30 = *(byte *******)(pbStack_3b0 + 8);
        }
        ppppppbVar16 = ppppppbStack_390;
        if (((ulong)auStack_398 & 1) == 0) {
          ppppppbVar16 = (byte ******)((ulong)auStack_398 >> 1 & 0x7f);
        }
        if (ppppppbVar30 == ppppppbVar16) {
          if ((bVar4 & 1) != 0) {
            ppppppbStack_3b8 = *(byte *******)(pbStack_3b0 + 0x10);
          }
          plVar26 = plStack_388;
          if (((ulong)auStack_398 & 1) == 0) {
            plVar26 = plVar15;
          }
          iVar12 = func_0x0eee3000(ppppppbStack_3b8,plVar26);
          if (iVar12 == 0) {
            if (((ulong)auVar7 & 1) != 0) {
              func_0x0412a280(plVar24,(ulong)auStack_398 & 0xfffffffffffffffe);
            }
            uVar11 = (uint)CONCAT71((int7)((ulong)plVar24 >> 8),1);
            goto LAB_0d39f11b;
          }
        }
        else if ((bVar4 & 1) != 0) {
          ppppppbStack_3b8 = *(byte *******)(pbStack_3b0 + 0x10);
        }
        plStack_268 = plVar24;
        if (((ulong)auVar7 & 1) == 0) {
          plStack_268 = plVar15;
        }
        ppppppbStack_108 = ppppppbStack_3b8;
        func_0x0c4048c0(1,3,0xe,&UNK_01471281,&plStack_268,&ppppppbStack_108);
        if (((ulong)auStack_398 & 1) != 0) {
          func_0x0412a280(plStack_388,(ulong)auStack_398 & 0xfffffffffffffffe);
        }
        uVar11 = 0;
      }
    }
LAB_0d39f11b:
    if (((ulong)auStack_468 & 1) != 0) {
      func_0x0412a280(ppppppbStack_458,(ulong)auStack_468 & 0xfffffffffffffffe);
    }
  }
  func_0x05d85c50(auStack_158);
  if (ppppppbStack_168 != (byte ******)0x0) {
    (*(code *)ppppppbStack_168)(&pppppppbStack_180);
  }
  if ((uStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
  }
  uStack_188 = 0;
  if ((uStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_190 & 0xff00ffffffffffff) - 8);
  }
  puStack_298 = &UNK_0f47dea0;
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  func_0x04863610(auStack_290);
  uVar28 = uStack_2d8;
  goto joined_r0x0d39f24f;
}


