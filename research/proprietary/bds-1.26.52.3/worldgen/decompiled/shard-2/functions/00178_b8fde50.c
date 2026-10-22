/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9fde50 (ELF vaddr 0xb8fde50)
 * Label: caller-of-callee
 * Body:  [[0b9fde50, 0ba019d3] [0ba019e0, 0ba02260] [0ba02270, 0ba026a6] [0ba026b0, 0ba02aca] [0ba02ad0, 0ba02e3b] [0ba02e40, 0ba03450] [0ba03460, 0ba034c4] [0ba034d0, 0ba03549] [0ba03550, 0ba03707] [0ba03710, 0ba0374c] [0ba03750, 0ba037bb] [0ba037c0, 0ba04320] [0ba04330, 0ba0446c] [0ba04470, 0ba04aad] [0ba04ab0, 0ba04b07] [0ba04b10, 0ba0556d]]
 * Ghidra: FUN_0b9fde50
 */


/* WARNING: Removing unreachable block (ram,0x0b9fe06b) */
/* WARNING: Removing unreachable block (ram,0x0b9fdfea) */
/* WARNING: Removing unreachable block (ram,0x0b9fdf93) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0b9fde50(undefined1 *param_1,undefined **param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long *plVar18;
  undefined **ppuVar19;
  code *pcVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined4 *puVar25;
  undefined **ppuVar26;
  code *pcVar27;
  ulong uVar28;
  undefined **ppuVar29;
  long lVar30;
  undefined **ppuVar31;
  long lVar32;
  undefined **ppuVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  undefined1 *puStack_6f0;
  undefined **ppuStack_6e8;
  long *plStack_6e0;
  undefined8 uStack_6d8;
  uint uStack_6c8;
  undefined1 uStack_6c4;
  undefined1 uStack_6c3;
  undefined1 uStack_6c2;
  undefined1 uStack_6c1;
  uint uStack_6c0;
  undefined4 uStack_6bc;
  undefined1 uStack_6b8;
  undefined4 uStack_6b7;
  undefined1 uStack_6b3;
  undefined2 uStack_6b2;
  ulong uStack_6b0;
  uint *puStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  undefined8 *puStack_680;
  long *plStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  ulong auStack_650 [2];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined4 *puStack_628;
  code *pcStack_620;
  code *pcStack_618;
  undefined **ppuStack_610;
  undefined *puStack_608;
  undefined **ppuStack_600;
  ulong uStack_5f8;
  code *pcStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  ulong *puStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined8 uStack_550;
  undefined1 auStack_538 [24];
  code *pcStack_520;
  undefined8 uStack_4f8;
  uint uStack_4f0;
  undefined2 uStack_4ec;
  undefined2 uStack_4ea;
  undefined1 uStack_4e8;
  undefined5 uStack_4e7;
  undefined1 uStack_4e2;
  undefined1 uStack_4e1;
  code *pcStack_4e0;
  long *plStack_4d8;
  undefined1 auStack_4c0 [24];
  code *pcStack_4a8;
  undefined1 auStack_480 [24];
  code *pcStack_468;
  undefined1 auStack_440 [24];
  code *pcStack_428;
  undefined1 auStack_3f8 [24];
  code *pcStack_3e0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined5 uStack_39f;
  undefined2 uStack_39a;
  undefined1 uStack_398;
  undefined5 uStack_397;
  undefined1 uStack_392;
  undefined1 uStack_391;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  ulong uStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong *puStack_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  code *pcStack_220;
  undefined1 auStack_110 [8];
  undefined8 auStack_108 [2];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  char cStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_78;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_48;
  
  iVar9 = *(int *)(param_2 + 0x1e);
  puStack_6f0 = param_1;
  if (iVar9 != 1) {
    *(undefined4 *)(param_2 + 0x1e) = 1;
    uStack_4f8._0_4_ = iVar9;
    func_0x05f97ac0(param_2 + 0x16,&uStack_4f8,param_2 + 0x1e);
  }
  func_0x05f94900(auStack_110,param_2);
  uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar11 = &UNK_0f534768;
  ppuStack_260 = param_2 + 0x1e;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef44a60;
  *(undefined1 *)(puVar12 + 3) = 1;
  puVar11[1] = puVar12 + 3;
  puVar11[2] = puVar12;
  puVar11[3] = uVar10;
  *(undefined1 *)(puVar11 + 4) = 1;
  *(undefined4 *)((long)puVar11 + 0x24) = 0;
  *puVar11 = &UNK_0f2f43f8;
  uStack_4f8._0_4_ = 0;
  uStack_4f8._4_4_ = 0;
  ppuStack_738 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (ppuStack_738 == (undefined **)0x0) {
    func_0x0eec74c0(8,0);
  }
  ppuStack_728 = ppuStack_738 + 1;
  *ppuStack_738 = (undefined *)puVar11;
  ppuStack_730 = ppuStack_738 + 1;
  func_0x0eee2f00(ppuStack_738,0,0);
  ppuVar16 = (undefined **)0x1fffffffffffffff;
  plVar13 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
  ppuVar26 = param_2;
  if (DAT_0f774768 == '\0') goto LAB_0ba05258;
LAB_0b9fe0a8:
  ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (ppuVar14 == (undefined **)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  func_0x06411390(ppuVar14,plVar13,0xf7746f8);
  *ppuVar14 = &UNK_0f2cf028;
  ppuVar14[9] = &UNK_0f2cf0d8;
  if (ppuStack_730 < ppuStack_728) {
    *ppuStack_730 = (undefined *)ppuVar14;
LAB_0b9fe1f5:
    ppuStack_730 = ppuStack_730 + 1;
    uVar10 = (**(code **)(*ppuVar26 + 0x30))(ppuVar26);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xf8,0);
    }
    func_0x06274c70(puVar11,uVar10);
    *puVar11 = &UNK_0f2e8ad8;
    puVar11[9] = &UNK_0f2e8b88;
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    *(undefined4 *)(puVar11 + 0x1b) = 0x3f800000;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1e] = 0;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      ppuVar26 = (undefined **)((long)ppuVar19 + 1);
      if (ppuVar16 < ppuVar26) goto LAB_0ba05302;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      ppuVar29 = (undefined **)((long)uVar22 >> 2);
      if ((undefined **)((long)uVar22 >> 2) <= ppuVar26) {
        ppuVar29 = ppuVar26;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        ppuVar29 = ppuVar16;
      }
      if (ppuVar29 <= ppuVar16) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppuVar29 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)ppuVar29 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)ppuVar29 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar29 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        ppuVar16 = (undefined **)0x1fffffffffffffff;
        ppuVar26 = param_2;
        ppuStack_738 = ppuVar14;
        goto LAB_0b9fe37a;
      }
      goto LAB_0ba05307;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar29 = ppuStack_730;
LAB_0b9fe37a:
    ppuStack_730 = ppuVar29 + 1;
    uVar10 = (**(code **)(*ppuVar26 + 0x30))(ppuVar26);
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x210);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x210,0);
    }
    func_0x0b6e9ca0(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar26 = (undefined **)((lVar17 >> 3) + 1);
      ppuVar19 = ppuStack_728;
      if (ppuVar16 < ppuVar26) goto LAB_0ba0530c;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      ppuVar29 = (undefined **)((long)ppuVar19 >> 2);
      if ((undefined **)((long)ppuVar19 >> 2) <= ppuVar26) {
        ppuVar29 = ppuVar26;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        ppuVar29 = ppuVar16;
      }
      if (ppuVar29 <= ppuVar16) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppuVar29 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)ppuVar29 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)ppuVar29 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9fe4ad;
      }
      goto LAB_0ba05311;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar29 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9fe4ad:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xc0,0);
    }
    func_0x0622d740(puVar11,uVar10);
    *puVar11 = &UNK_0f2e8308;
    puVar11[5] = &UNK_0f2e83b8;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    *(undefined8 *)((long)puVar11 + 0xaa) = 0;
    *(undefined8 *)((long)puVar11 + 0xb2) = 0;
    uStack_4f8._0_4_ = 0;
    uStack_4f8._4_4_ = 0;
    puVar12 = (undefined8 *)0x0;
    uStack_4f8 = (undefined8 *)0x0;
    ppuVar16 = param_2;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba05316;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9fe624;
      }
      goto LAB_0ba0531b;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9fe624:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
    if (ppuVar16 == (undefined **)0x0) {
      func_0x0eec74c0(0x120,0);
    }
    func_0x0b92cf60(ppuVar16,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05320;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar16;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9fe760;
      }
      goto LAB_0ba05325;
    }
    *ppuStack_730 = (undefined *)ppuVar16;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9fe760:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *puVar11 = &UNK_0f534768;
    ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (ppuVar16 == (undefined **)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    ppuVar16[1] = (undefined *)0x0;
    ppuVar16[2] = (undefined *)0x0;
    *ppuVar16 = &UNK_0ef44a60;
    *(code *)(ppuVar16 + 3) = (code)0x1;
    puVar11[1] = ppuVar16 + 3;
    puVar11[2] = ppuVar16;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    *puVar11 = &UNK_0f02f058;
    puVar11[5] = &UNK_0f02f0c8;
    func_0x06415cd0(uVar10,puVar11 + 5);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba0532a;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9fe920;
      }
      goto LAB_0ba0532f;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar26 = ppuStack_738;
LAB_0b9fe920:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    *puVar11 = &UNK_0f534768;
    ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (ppuVar16 == (undefined **)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    ppuVar16[1] = (undefined *)0x0;
    ppuVar16[2] = (undefined *)0x0;
    *ppuVar16 = &UNK_0ef44a60;
    *(code *)(ppuVar16 + 3) = (code)0x1;
    puVar11[1] = ppuVar16 + 3;
    puVar11[2] = ppuVar16;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    *puVar11 = &UNK_0f02ecf8;
    puVar11[5] = &UNK_0f02ed88;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    *(undefined4 *)(puVar11 + 0xd) = 0x3f800000;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba05334;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9feaeb;
      }
      goto LAB_0ba05339;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar26 = ppuStack_738;
LAB_0b9feaeb:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x1b0,0);
    }
    func_0x0b924ed0(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba0533e;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9fec32;
      }
      goto LAB_0ba05343;
    }
    *ppuStack_730 = puVar15;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9fec32:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x160);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x160,0);
    }
    func_0x0b6fcb20(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05348;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9fed66;
      }
      goto LAB_0ba0534d;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9fed66:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *puVar11 = &UNK_0f534768;
    ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (ppuVar16 == (undefined **)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    ppuVar16[1] = (undefined *)0x0;
    ppuVar16[2] = (undefined *)0x0;
    *ppuVar16 = &UNK_0ef44a60;
    *(code *)(ppuVar16 + 3) = (code)0x1;
    puVar11[1] = ppuVar16 + 3;
    puVar11[2] = ppuVar16;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    *puVar11 = &UNK_0f2e7cd0;
    puVar11[5] = &UNK_0f2e7d48;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba05352;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar26 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar26,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9fef17;
      }
      goto LAB_0ba05357;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar26 = ppuStack_738;
LAB_0b9fef17:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (ppuVar14 == (undefined **)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    func_0x06422980(ppuVar14,uVar10);
    *ppuVar14 = &UNK_0f2cfb18;
    ppuVar14[5] = &UNK_0f2cfba8;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba0535c;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9ff06f;
      }
      goto LAB_0ba05361;
    }
    *ppuStack_730 = (undefined *)ppuVar14;
    ppuVar26 = ppuStack_738;
LAB_0b9ff06f:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    *puVar11 = &UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar11[1] = puVar12 + 3;
    puVar11[2] = puVar12;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    *puVar11 = &UNK_0f02f578;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    uVar10 = func_0x05f9fd40(uVar10);
    puVar11[9] = uVar10;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    *puVar11 = &UNK_0f2cfbe0;
    *(undefined2 *)(puVar11 + 0xd) = 0x100;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    *(undefined1 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)((long)puVar11 + 0x84) = _DAT_014eb060;
    *(undefined1 *)((long)puVar11 + 0x8c) = 0;
    *(undefined1 *)(puVar11 + 0x13) = 0;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba05366;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar16 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar16,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9ff27f;
      }
      goto LAB_0ba0536b;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9ff27f:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
    if (ppuVar14 == (undefined **)0x0) {
      func_0x0eec74c0(0xa8,0);
    }
    func_0x0b93bda0(ppuVar14,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05370;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9ff3b2;
      }
      goto LAB_0ba05375;
    }
    *ppuStack_730 = (undefined *)ppuVar14;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9ff3b2:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plStack_4d8 = (long *)0x0;
    func_0x067a8990(puVar11,uVar10,&uStack_4f8);
    *puVar11 = &UNK_0f2e8e50;
    if (plStack_4d8 == &uStack_4f8) {
      lVar17 = 0x20;
LAB_0b9ff462:
      (**(code **)(*plStack_4d8 + lVar17))();
      if (ppuStack_730 < ppuStack_728) goto LAB_0b9ff443;
LAB_0b9ff477:
      ppuVar16 = (undefined **)0x1fffffffffffffff;
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba0537a;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar16 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar16,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9ff556;
      }
      goto LAB_0ba0537f;
    }
    lVar17 = 0x28;
    if (plStack_4d8 != (long *)0x0) goto LAB_0b9ff462;
    if (ppuStack_728 <= ppuStack_730) goto LAB_0b9ff477;
LAB_0b9ff443:
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9ff556:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (ppuVar14 == (undefined **)0x0) {
      func_0x0eec74c0(0x98,0);
    }
    func_0x067b1b40(ppuVar14,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05384;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9ff68a;
      }
      goto LAB_0ba05389;
    }
    *ppuStack_730 = (undefined *)ppuVar14;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9ff68a:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    *puVar11 = &UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar11[1] = puVar12 + 3;
    puVar11[2] = puVar12;
    *puVar11 = &UNK_0f01a918;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    uVar10 = func_0x05f9fd40(uVar10);
    puVar11[5] = uVar10;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    *puVar11 = &UNK_0f2f4198;
    puVar11[9] = &UNK_0f2f4288;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0xc0;
    *(undefined1 *)((long)puVar11 + 0x9c) = 0;
    *(undefined1 *)(puVar11 + 0x1b) = 0;
    *(undefined1 *)(puVar11 + 0x24) = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = 0;
    *(undefined8 *)((long)puVar11 + 0xe9) = 0;
    *(undefined8 *)((long)puVar11 + 0xf1) = 0;
    puVar11[0x26] = puVar11 + 0x26;
    puVar11[0x27] = puVar11 + 0x26;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    puVar11[0x25] = &UNK_0f2f56b0;
    puVar11[0x29] = &UNK_0f2f56e0;
    puVar11[0x2b] = puVar11 + 0x2b;
    puVar11[0x2c] = puVar11 + 0x2b;
    *(undefined4 *)(puVar11 + 0x2d) = 0;
    puVar11[0x2a] = &UNK_0f2f57f0;
    puVar11[0x2e] = &UNK_0f2f5820;
    puVar11[0x30] = puVar11 + 0x30;
    puVar11[0x31] = puVar11 + 0x30;
    *(undefined4 *)(puVar11 + 0x32) = 0;
    puVar11[0x2f] = &UNK_0f2f5930;
    puVar11[0x33] = &UNK_0f2f5960;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba0538e;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar16 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar16,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9ff976;
      }
      goto LAB_0ba05393;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9ff976:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (ppuVar14 == (undefined **)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    func_0x0b939750(ppuVar14,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05398;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9ffaa9;
      }
      goto LAB_0ba0539d;
    }
    *ppuStack_730 = (undefined *)ppuVar14;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9ffaa9:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,400);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(400,0);
    }
    *puVar11 = &UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar11[1] = puVar12 + 3;
    puVar11[2] = puVar12;
    *puVar11 = &UNK_0f01a918;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    puVar11[5] = &UNK_0f2f5528;
    uVar10 = func_0x05f9fd40(uVar10);
    puVar11[6] = uVar10;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    *puVar11 = &UNK_0f2f3e98;
    puVar11[5] = &UNK_0f2f4008;
    puVar11[0xb] = &UNK_0f011d00;
    uVar10 = _UNK_014e0ea8;
    puVar11[0xc] = _DAT_014e0ea0;
    puVar11[0xd] = uVar10;
    puVar11[0xe] = 0x8000000080000000;
    *(undefined1 *)(puVar11 + 0x15) = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    *(undefined8 *)((long)puVar11 + 0x95) = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    *(undefined1 *)(puVar11 + 0x18) = 0;
    puVar11[0x1e] = 0;
    *(undefined8 *)((long)puVar11 + 0x109) = 0;
    *(undefined8 *)((long)puVar11 + 0x111) = 0;
    puVar11[0x20] = 0;
    puVar11[0x21] = 0;
    uVar3 = _UNK_014eb08c;
    uVar2 = _UNK_014eb088;
    uVar8 = _UNK_014eb084;
    *(undefined4 *)((long)puVar11 + 0x11c) = _DAT_014eb080;
    *(undefined4 *)(puVar11 + 0x24) = uVar8;
    *(undefined4 *)((long)puVar11 + 0x124) = uVar2;
    *(undefined4 *)(puVar11 + 0x25) = uVar3;
    *(undefined1 *)((long)puVar11 + 300) = 0;
    *(undefined4 *)(puVar11 + 0x26) = 1;
    *(undefined1 *)((long)puVar11 + 0x134) = 0;
    puVar11[0x30] = 0;
    puVar11[0x31] = 0;
    puVar11[0x2d] = 0;
    puVar11[0x2e] = 0;
    puVar11[0x2b] = 0;
    puVar11[0x2c] = 0;
    puVar11[0x29] = 0;
    puVar11[0x2a] = 0;
    puVar11[0x27] = 0;
    puVar11[0x28] = 0;
    *(undefined1 *)(puVar11 + 0x2f) = 0;
    func_0x05d64720(puVar11 + 0xb);
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba053a2;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar26 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar26,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9ffd68;
      }
      goto LAB_0ba053a7;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar26 = ppuStack_738;
LAB_0b9ffd68:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar14 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x390);
    if (ppuVar14 == (undefined **)0x0) {
      func_0x0eec74c0(0x390,0);
    }
    func_0x067a9320(ppuVar14,uVar10);
    *ppuVar14 = &UNK_0f2e7e50;
    ppuVar14[5] = &UNK_0f2e7f58;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba053ac;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0b9ffec0;
      }
      goto LAB_0ba053b1;
    }
    *ppuStack_730 = (undefined *)ppuVar14;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0b9ffec0:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x170);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x170,0);
    }
    func_0x0621c200(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053b6;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0b9ffff3;
      }
      goto LAB_0ba053bb;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0b9ffff3:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    *puVar11 = &UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar11[1] = puVar12 + 3;
    puVar11[2] = puVar12;
    *puVar11 = &UNK_0f01a918;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    uVar10 = func_0x05f9fd40(uVar10);
    puVar11[5] = uVar10;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    *puVar11 = &UNK_0f2e8a40;
    puVar11[9] = &UNK_0f2e8ab0;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar19 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar19 + 1);
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba053c0;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar16 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar16,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0ba001d4;
      }
      goto LAB_0ba053c5;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0ba001d4:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    lVar17 = (**(code **)(*param_2 + 0x70))(param_2);
    ppuVar14 = (undefined **)(ulong)*(byte *)(lVar17 + 0xbc2);
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x220);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x220,0);
    }
    func_0x06427a80(puVar15,uVar10,ppuVar14);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053ca;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0ba0031c;
      }
      goto LAB_0ba053cf;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar26 = ppuStack_738;
LAB_0ba0031c:
    ppuStack_738 = ppuVar26;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    func_0x05f9fbe0(puVar11,uVar10);
    ppuVar26 = (undefined **)(puVar11 + 0xc);
    *puVar11 = &UNK_0f2f3c78;
    puVar11[9] = &UNK_0f2f3da8;
    puVar11[0xc] = &UNK_0f2f3e68;
    plVar13 = (long *)puVar11[3];
    uStack_708 = ppuVar26;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&UNK_0f2fd978;
    plVar18[3] = (long)ppuVar26;
    ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    ppuVar19 = ppuVar26;
    if (ppuVar16 == (undefined **)0x0) {
      uStack_700 = plVar18;
      func_0x048b0de0(&uStack_4f8,&uStack_258);
      uVar7 = uStack_4f0;
      uRam000000000f54fd94 = uStack_4f8._4_4_;
      _DAT_0f54fd90 = (uint)uStack_4f8;
      uVar8 = CONCAT22(uStack_4ea,uStack_4ec);
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4ea = 0;
      plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar8;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar17 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          FUN_0412c2d0(plVar18);
        }
      }
      plVar18 = (long *)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar17 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          FUN_0412c2d0(plVar18);
        }
      }
      ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      ppuVar19 = uStack_708;
      plVar18 = uStack_700;
    }
    puStack_628 = (undefined4 *)&UNK_0bb04700;
    pcStack_620 = (code *)0x0;
    pcStack_618 = (code *)CONCAT35(pcStack_618._5_3_,0x2897d71aa);
    puStack_608 = (undefined *)0x0;
    ppuStack_600 = (undefined **)&UNK_0bb045a0;
    uStack_3a8._0_1_ = 200;
    uStack_3a8._1_4_ = 0xf2fd9;
    uStack_3a8._5_1_ = 0;
    uStack_3a8._6_1_ = 0;
    uStack_3a8._7_1_ = 0;
    ppuStack_388 = (undefined **)&uStack_3a8;
    uStack_708 = (undefined **)0x0;
    uStack_700 = (long *)0x0;
    ppuStack_6e8 = ppuVar19;
    plStack_6e0 = plVar18;
    uStack_638 = ppuVar26;
    ppuStack_610 = ppuVar16;
    auVar35 = func_0x0607c9f0();
    ppuVar29 = auVar35._8_8_;
    ppuVar19 = auVar35._0_8_;
    uStack_4f8._0_4_ = 0;
    uStack_4f8._4_4_ = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4ea = 0;
    ppuVar26 = (undefined **)&uStack_4f8;
    func_0x048b1dc0(ppuVar26);
    if (ppuVar29 != (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0))) {
LAB_0ba0058e:
      ppuVar16 = ppuStack_610;
      ppuVar31 = &puStack_608;
      if (ppuStack_600 == (undefined **)0x0) {
        uStack_4f8._0_4_ = 0;
        uStack_4f8._4_4_ = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4ea = 0;
        ppuVar31 = (undefined **)&uStack_4f8;
        func_0x048b1dc0(ppuVar31);
        ppuVar16 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
        puVar15 = (undefined *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        ppuVar14 = ppuVar31;
        ppuVar33 = ppuVar16;
        if (puVar15 == (undefined *)0x0) goto LAB_0ba0064c;
LAB_0ba005d2:
        bVar1 = puVar15[0x19];
        ppuVar16 = ppuVar33;
        ppuVar31 = ppuStack_610;
        puVar15 = puStack_608;
      }
      else {
        puVar15 = puStack_608;
        ppuVar33 = ppuVar19;
        if ((puStack_608 != (undefined *)0x0) ||
           ((*(code *)ppuStack_600)(0,&uStack_638,0), puVar15 = puStack_608, ppuVar14 = ppuVar31,
           ppuVar33 = ppuVar16, puStack_608 != (undefined *)0x0)) goto LAB_0ba005d2;
LAB_0ba0064c:
        lVar17 = func_0x048aead0(ppuVar16);
        bVar1 = *(byte *)(lVar17 + 0x19);
        ppuVar14 = ppuVar31;
        ppuVar31 = ppuStack_610;
        puVar15 = puStack_608;
      }
      ppuStack_610 = ppuVar31;
      puStack_608 = puVar15;
      if ((bVar1 & 1) == 0) {
        if (ppuStack_600 == (undefined **)0x0) {
          uStack_4f8._0_4_ = 0;
          uStack_4f8._4_4_ = 0;
          uStack_4f0 = 0;
          uStack_4ec = 0;
          uStack_4ea = 0;
          func_0x048b1dc0(ppuVar26);
          puVar15 = (undefined *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
          ppuVar16 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
joined_r0x0ba00681:
          if (puVar15 != (undefined *)0x0) goto LAB_0ba00615;
          lVar17 = func_0x048aead0(ppuVar16);
          bVar1 = *(byte *)(lVar17 + 0x19);
        }
        else {
          if (puVar15 == (undefined *)0x0) {
            (*(code *)ppuStack_600)(0,&uStack_638,0);
            puVar15 = puStack_608;
            ppuVar16 = ppuVar31;
            goto joined_r0x0ba00681;
          }
LAB_0ba00615:
          bVar1 = puVar15[0x19];
        }
        if ((bVar1 & 2) == 0) goto LAB_0ba007ec;
      }
      if (ppuStack_388 == (undefined **)0x0) {
LAB_0ba006f6:
        puStack_248 = &UNK_0488e0b0;
        pcStack_240 = (code *)0x0;
        ppuStack_238 = (undefined **)CONCAT35(ppuStack_238._5_3_,0x48b5725f);
        uStack_258 = (long *)0x0;
        ppuStack_230 = ppuStack_610;
        lStack_228 = 0;
        pcStack_220 = (code *)0x0;
        if ((ppuStack_600 == (undefined **)0x0) ||
           ((*(code *)ppuStack_600)(0x100,&uStack_638,&uStack_258), ppuVar26 = ppuStack_230,
           pcStack_220 == (code *)0x0)) {
          uStack_6c8 = 0;
          uStack_6c4 = 0;
          uStack_6c3 = 0;
          uStack_6c2 = 0;
          uStack_6c1 = 0;
          uStack_6c0 = 0;
          uStack_6bc = 0;
          func_0x048b1dc0(&uStack_6c8);
          ppuVar26 = (undefined **)CONCAT44(uStack_6bc,uStack_6c0);
          lVar17 = CONCAT17(uStack_6c1,
                            CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))
                                    ));
        }
        else {
          lVar17 = lStack_228;
          if (lStack_228 == 0) {
            (*pcStack_220)(0,&uStack_258,0);
            lVar17 = lStack_228;
          }
        }
        if (pcStack_240 != (code *)0x0) {
          (*pcStack_240)(&uStack_258);
        }
        if (ppuVar26 != ppuVar29) goto LAB_0ba007ec;
        if (lVar17 == 0) {
          lVar17 = func_0x048aead0(ppuVar26);
          ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
          if (ppuVar19 != (undefined **)0x0) goto LAB_0ba01506;
LAB_0ba0206c:
          lVar17 = func_0x048aead0(ppuVar29);
          if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba007ec;
          ppuVar19 = (undefined **)func_0x048aead0(ppuVar29);
        }
        else {
          ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
          if (ppuVar19 == (undefined **)0x0) goto LAB_0ba0206c;
LAB_0ba01506:
          if ((int)ppuVar14 != *(int *)(ppuVar19 + 1)) goto LAB_0ba007ec;
        }
        uVar7 = *(uint *)(*ppuVar19 + 4);
        ppuVar14 = (undefined **)(ulong)uVar7;
        plVar18 = plVar13 + 1;
        plVar24 = (long *)plVar13[1];
        plVar21 = plVar18;
        if (plVar24 != (long *)0x0) {
          do {
            if (*(uint *)(plVar24 + 4) >= uVar7) {
              plVar21 = plVar24;
            }
            plVar24 = (long *)plVar24[*(uint *)(plVar24 + 4) < uVar7];
          } while (plVar24 != (long *)0x0);
          if ((plVar21 != plVar18) && (*(uint *)(plVar21 + 4) <= uVar7)) goto LAB_0ba007ec;
        }
        uVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (uVar22 == 0) {
          func_0x0eec74c0(0x80,0);
        }
        if (ppuStack_388 == (undefined **)0x0) {
          ppuStack_238 = (undefined **)0x0;
        }
        else if (ppuStack_388 == (undefined **)&uStack_3a8) {
          ppuStack_238 = (undefined **)&uStack_258;
          (**(code **)(*ppuStack_388 + 0x18))();
        }
        else {
          ppuStack_238 = ppuStack_388;
          ppuStack_388 = (undefined **)0x0;
        }
        uStack_6c8 = (uint)ppuStack_6e8;
        uStack_6c4 = (undefined1)((ulong)ppuStack_6e8 >> 0x20);
        uStack_6c3 = (undefined1)((ulong)ppuStack_6e8 >> 0x28);
        uStack_6c2 = (undefined1)((ulong)ppuStack_6e8 >> 0x30);
        uStack_6c1 = (undefined1)((ulong)ppuStack_6e8 >> 0x38);
        uStack_6c0 = (uint)plStack_6e0;
        uStack_6bc = (undefined4)((ulong)plStack_6e0 >> 0x20);
        ppuStack_6e8 = (undefined **)0x0;
        plStack_6e0 = (long *)0x0;
        func_0x049e8ab0(uVar22,&uStack_638,&uStack_258,&uStack_6c8);
        plVar24 = (long *)CONCAT44(uStack_6bc,uStack_6c0);
        auStack_650[0] = uVar22;
        if (plVar24 != (long *)0x0) {
          LOCK();
          plVar21 = plVar24 + 1;
          lVar17 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            FUN_0412c2d0(plVar24);
          }
        }
        if (ppuStack_238 == (undefined **)&uStack_258) {
          lVar17 = 0x20;
LAB_0ba04312:
          (**(code **)(*ppuStack_238 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (ppuStack_238 != (undefined **)0x0) goto LAB_0ba04312;
        }
        plVar24 = (long *)*plVar18;
        while (plVar21 = plVar18, plVar24 != (long *)0x0) {
          while (plVar18 = plVar24, *(uint *)(plVar18 + 4) <= uVar7) {
            if (uVar7 <= *(uint *)(plVar18 + 4)) goto LAB_0ba044fd;
            plVar24 = (long *)plVar18[1];
            if ((long *)plVar18[1] == (long *)0x0) {
              plVar21 = plVar18 + 1;
              goto LAB_0ba04358;
            }
          }
          plVar24 = (long *)*plVar18;
        }
LAB_0ba04358:
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *(uint *)(plVar24 + 4) = uVar7;
        plVar24[5] = 0;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[2] = (long)plVar18;
        *plVar21 = (long)plVar24;
        if (*(long *)*plVar13 != 0) {
          *plVar13 = *(long *)*plVar13;
        }
        func_0x048bed00(plVar13[1],plVar24);
        plVar13[2] = plVar13[2] + 1;
        plVar18 = plVar24;
LAB_0ba044fd:
        uVar22 = auStack_650[0];
        auStack_650[0] = 0;
        lVar17 = plVar18[5];
        plVar18[5] = uVar22;
        if (lVar17 == 0) goto LAB_0ba007ec;
        plVar13 = *(long **)(lVar17 + 0x78);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar23 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        plVar13 = *(long **)(lVar17 + 0x60);
        if (plVar13 == (long *)(lVar17 + 0x40)) {
          lVar23 = 0x20;
LAB_0ba0456c:
          (**(code **)(*plVar13 + lVar23))();
        }
        else {
          lVar23 = 0x28;
          if (plVar13 != (long *)0x0) goto LAB_0ba0456c;
        }
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        func_0x0412a280(lVar17,0x80);
        uVar22 = auStack_650[0];
        auStack_650[0] = 0;
        if (uVar22 == 0) goto LAB_0ba007ec;
        plVar13 = *(long **)(uVar22 + 0x78);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar17 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        plVar13 = *(long **)(uVar22 + 0x60);
        if (plVar13 == (long *)(uVar22 + 0x40)) {
          lVar17 = 0x20;
LAB_0ba04705:
          (**(code **)(*plVar13 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (plVar13 != (long *)0x0) goto LAB_0ba04705;
        }
        if (*(code **)(uVar22 + 0x18) != (code *)0x0) {
          (**(code **)(uVar22 + 0x18))(uVar22);
        }
        func_0x0412a280(uVar22,0x80);
        goto LAB_0ba007ec;
      }
      func_0x049e8590(&uStack_4f8,&uStack_638);
      if (ppuStack_388 != (undefined **)0x0) {
        uVar7 = (**(code **)(*ppuStack_388 + 0x30))(ppuStack_388,&uStack_4f8);
        ppuVar14 = (undefined **)(ulong)uVar7;
        if (pcStack_4e0 != (code *)0x0) {
          (*pcStack_4e0)(&uStack_4f8);
        }
        if ((char)uVar7 == '\0') goto LAB_0ba007ec;
        goto LAB_0ba006f6;
      }
      goto LAB_0ba05424;
    }
    if (ppuVar19 == (undefined **)0x0) {
      lVar17 = func_0x048aead0(ppuVar29);
      ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
      lVar17 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      if (lVar17 != 0) goto LAB_0ba00556;
LAB_0ba00578:
      lVar17 = func_0x048aead0(CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0)));
      if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba0058e;
    }
    else {
      ppuVar14 = (undefined **)(ulong)*(uint *)(ppuVar19 + 1);
      lVar17 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      if (lVar17 == 0) goto LAB_0ba00578;
LAB_0ba00556:
      if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba0058e;
    }
LAB_0ba007ec:
    plVar13 = plStack_6e0;
    if (plStack_6e0 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_6e0 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_6e0 + 0x10))(plStack_6e0);
        FUN_0412c2d0(plVar13);
      }
    }
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_388 == (undefined **)&uStack_3a8) {
      lVar17 = 0x20;
LAB_0ba00856:
      (**(code **)(*ppuStack_388 + lVar17))();
    }
    else {
      lVar17 = 0x28;
      if (ppuStack_388 != (undefined **)0x0) goto LAB_0ba00856;
    }
    if (pcStack_620 != (code *)0x0) {
      (*pcStack_620)(&uStack_638);
    }
    plVar13 = uStack_700;
    if (uStack_700 == (long *)0x0) {
LAB_0ba0088f:
      if (ppuStack_730 < ppuStack_728) goto LAB_0ba0089e;
LAB_0ba008ce:
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar19 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053d4;
      ppuVar19 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar19 >> 2;
      if ((ulong)((long)ppuVar19 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar19) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar26 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar19);
        }
        goto LAB_0ba009ad;
      }
      goto LAB_0ba053d9;
    }
    LOCK();
    plVar18 = uStack_700 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_0ba0088f;
    (**(code **)(*uStack_700 + 0x10))(uStack_700);
    FUN_0412c2d0(plVar13);
    if (ppuStack_728 <= ppuStack_730) goto LAB_0ba008ce;
LAB_0ba0089e:
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar16 = ppuStack_738;
    ppuVar26 = ppuStack_730;
LAB_0ba009ad:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar26 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    func_0x0b6e7b30(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar26 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053de;
      ppuVar26 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar26 >> 2;
      if ((ulong)((long)ppuVar26 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar26) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar26);
        }
        goto LAB_0ba00ae1;
      }
      goto LAB_0ba053e3;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar26 + 2;
    ppuVar16 = ppuStack_738;
LAB_0ba00ae1:
    ppuStack_738 = ppuVar16;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar19 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
    if (ppuVar19 == (undefined **)0x0) {
      func_0x0eec74c0(0x150,0);
    }
    func_0x0640f330(ppuVar19,uVar10);
    *ppuVar19 = &UNK_0f2ceeb0;
    ppuVar19[9] = &UNK_0f2cef90;
    puVar15 = (undefined *)func_0x06b5b5f0(uVar10);
    if (puVar15 == (undefined *)0x0) {
      cVar6 = FUN_0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_012cbd6e);
      if (cVar6 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x04109e60();
      func_0x05fe8060();
      func_0x04882eb0();
      ppuVar16 = param_2;
      goto LAB_0ba052f8;
    }
    ppuVar19[0x22] = puVar15;
    ppuVar19[0x28] = (undefined *)0x0;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar26 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar26 + 1);
      ppuVar16 = param_2;
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba053e8;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar19;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar26 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0ba00c60;
      }
      goto LAB_0ba053ed;
    }
    *ppuStack_730 = (undefined *)ppuVar19;
    ppuVar26 = ppuStack_738;
LAB_0ba00c60:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuStack_730 + 1;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x498);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x498,0);
    }
    func_0x064323a0(puVar15,uVar10);
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar26 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053f2;
      ppuVar26 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar26 >> 2;
      if ((ulong)((long)ppuVar26 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar26) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuVar19 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar26);
        }
        goto LAB_0ba00da6;
      }
      goto LAB_0ba053f7;
    }
    *ppuStack_730 = puVar15;
    ppuVar16 = ppuStack_738;
    ppuVar19 = ppuStack_730;
LAB_0ba00da6:
    ppuStack_738 = ppuVar16;
    ppuStack_730 = ppuVar19 + 1;
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar15 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
    if (puVar15 == (undefined *)0x0) {
      func_0x0eec74c0(0x120,0);
    }
    func_0x0b6dd630(puVar15,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar26 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba053fc;
      ppuVar26 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar26 >> 2;
      if ((ulong)((long)ppuVar26 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar26) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined **)(lVar23 + lVar17) = puVar15;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar26);
        }
        goto LAB_0ba00eda;
      }
      goto LAB_0ba05401;
    }
    *ppuStack_730 = puVar15;
    ppuStack_730 = ppuVar19 + 2;
    ppuVar16 = ppuStack_738;
LAB_0ba00eda:
    ppuStack_738 = ppuVar16;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x128,0);
    }
    func_0x06257900(puVar11,uVar10);
    *puVar11 = &UNK_0f2e8798;
    puVar11[9] = &UNK_0f2e8910;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    *(undefined4 *)(puVar11 + 0xe) = 0x3f800000;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    *(undefined4 *)(puVar11 + 0x13) = 0x3f800000;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    *(undefined4 *)(puVar11 + 0x18) = 0x3f800000;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    *(undefined4 *)(puVar11 + 0x1d) = 0x3f800000;
    puVar11[0x1e] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x20] = 0;
    puVar11[0x21] = 0;
    *(undefined4 *)(puVar11 + 0x22) = 0x3f800000;
    puVar11[0x23] = 0;
    puVar11[0x24] = 0;
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      ppuVar26 = (undefined **)(lVar17 >> 3);
      pcVar20 = (code *)((long)ppuVar26 + 1);
      ppuVar16 = param_2;
      if ((code *)0x1fffffffffffffff < pcVar20) goto LAB_0ba05406;
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      pcVar27 = (code *)((long)uVar22 >> 2);
      if ((code *)((long)uVar22 >> 2) <= pcVar20) {
        pcVar27 = pcVar20;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        pcVar27 = (code *)0x1fffffffffffffff;
      }
      if (pcVar27 < (code *)0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pcVar27 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)pcVar27 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)pcVar27 * 8);
        *(undefined8 **)(lVar23 + lVar17) = puVar11;
        ppuVar19 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar26 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar26 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        goto LAB_0ba010b8;
      }
      goto LAB_0ba0540b;
    }
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar26 = ppuStack_738;
    ppuVar19 = ppuStack_730;
LAB_0ba010b8:
    ppuStack_738 = ppuVar26;
    ppuStack_730 = ppuVar19 + 1;
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x210);
    if (ppuVar16 == (undefined **)0x0) {
      func_0x0eec74c0(0x210,0);
    }
    func_0x0b941450(ppuVar16,uVar10);
    if (ppuStack_728 <= ppuStack_730) {
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar26 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba05410;
      ppuVar26 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar26 >> 2;
      if ((ulong)((long)ppuVar26 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar26) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + uVar28 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar16;
        ppuStack_730 = (undefined **)(lVar23 + lVar17 + 8);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (lVar17 >> 3) * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        ppuVar16 = ppuVar14;
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar26);
        }
        goto LAB_0ba011f4;
      }
      goto LAB_0ba05415;
    }
    *ppuStack_730 = (undefined *)ppuVar16;
    ppuStack_730 = ppuVar19 + 2;
    ppuVar16 = ppuStack_738;
LAB_0ba011f4:
    ppuStack_738 = ppuVar16;
    uVar10 = (**(code **)(*param_2 + 0x30))();
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,200);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(200,0);
    }
    *puVar11 = &UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar11[1] = puVar12 + 3;
    puVar11[2] = puVar12;
    *puVar11 = &UNK_0f01a918;
    puVar11[3] = uVar10;
    *(undefined1 *)(puVar11 + 4) = 1;
    *(undefined4 *)((long)puVar11 + 0x24) = 0;
    uVar10 = func_0x05f9fd40(uVar10);
    puVar11[5] = uVar10;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    ppuVar26 = (undefined **)(puVar11 + 9);
    *puVar11 = &UNK_0f2f3ba0;
    puVar11[9] = &UNK_0f2f3c30;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    *(undefined4 *)(puVar11 + 0xe) = 0x3f800000;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    *(undefined1 *)(puVar11 + 0x15) = 0;
    plVar13 = (long *)puVar11[3];
    uStack_708 = ppuVar26;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&UNK_0f2f9a38;
    plVar18[3] = (long)ppuVar26;
    ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    ppuVar19 = ppuVar26;
    if (ppuVar16 == (undefined **)0x0) {
      uStack_700 = plVar18;
      func_0x048b0de0(&uStack_4f8,&uStack_258);
      uVar7 = uStack_4f0;
      uRam000000000f54fd94 = uStack_4f8._4_4_;
      _DAT_0f54fd90 = (uint)uStack_4f8;
      uVar8 = CONCAT22(uStack_4ea,uStack_4ec);
      uStack_4f8._0_4_ = 0;
      uStack_4f8._4_4_ = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4ea = 0;
      plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar7;
      uRam000000000f54fd9c = uVar8;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar17 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          FUN_0412c2d0(plVar18);
        }
      }
      plVar18 = (long *)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar24 = plVar18 + 1;
        lVar17 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          FUN_0412c2d0(plVar18);
        }
      }
      ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      ppuVar19 = uStack_708;
      plVar18 = uStack_700;
    }
    puStack_628 = (undefined4 *)&UNK_0baa9de0;
    pcStack_620 = (code *)0x0;
    pcStack_618 = (code *)CONCAT35(pcStack_618._5_3_,0x2b70d4f37);
    puStack_608 = (undefined *)0x0;
    ppuStack_600 = (undefined **)&UNK_0baa9c80;
    uStack_3a8._0_1_ = 0x88;
    uStack_3a8._1_4_ = 0xf2f9a;
    uStack_3a8._5_1_ = 0;
    uStack_3a8._6_1_ = 0;
    uStack_3a8._7_1_ = 0;
    ppuStack_388 = (undefined **)&uStack_3a8;
    uStack_708 = (undefined **)0x0;
    uStack_700 = (long *)0x0;
    ppuStack_6e8 = ppuVar19;
    plStack_6e0 = plVar18;
    uStack_638 = ppuVar26;
    ppuStack_610 = ppuVar16;
    auVar35 = func_0x0baa96d0();
    ppuVar29 = auVar35._8_8_;
    ppuVar19 = auVar35._0_8_;
    uStack_4f8._0_4_ = 0;
    uStack_4f8._4_4_ = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    uStack_4ea = 0;
    ppuVar26 = (undefined **)&uStack_4f8;
    func_0x048b1dc0(ppuVar26);
    if (ppuVar29 != (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0))) {
LAB_0ba01545:
      ppuVar33 = ppuStack_610;
      ppuVar31 = &puStack_608;
      if (ppuStack_600 == (undefined **)0x0) {
        uStack_4f8._0_4_ = 0;
        uStack_4f8._4_4_ = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4ea = 0;
        ppuVar31 = (undefined **)&uStack_4f8;
        func_0x048b1dc0(ppuVar31);
        ppuVar33 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
        puVar15 = (undefined *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        ppuVar14 = ppuVar31;
        ppuVar16 = ppuVar33;
        if (puVar15 == (undefined *)0x0) goto LAB_0ba01603;
LAB_0ba01589:
        bVar1 = puVar15[0x19];
        ppuVar31 = ppuStack_610;
        puVar15 = puStack_608;
      }
      else {
        puVar15 = puStack_608;
        ppuVar16 = ppuVar19;
        if ((puStack_608 != (undefined *)0x0) ||
           ((*(code *)ppuStack_600)(0,&uStack_638,0), puVar15 = puStack_608, ppuVar14 = ppuVar31,
           ppuVar16 = ppuVar33, puStack_608 != (undefined *)0x0)) goto LAB_0ba01589;
LAB_0ba01603:
        lVar17 = func_0x048aead0(ppuVar33);
        bVar1 = *(byte *)(lVar17 + 0x19);
        ppuVar14 = ppuVar31;
        ppuVar16 = ppuVar33;
        ppuVar31 = ppuStack_610;
        puVar15 = puStack_608;
      }
      ppuStack_610 = ppuVar31;
      puStack_608 = puVar15;
      if ((bVar1 & 1) == 0) {
        if (ppuStack_600 == (undefined **)0x0) {
          uStack_4f8._0_4_ = 0;
          uStack_4f8._4_4_ = 0;
          uStack_4f0 = 0;
          uStack_4ec = 0;
          uStack_4ea = 0;
          func_0x048b1dc0(ppuVar26);
          puVar15 = (undefined *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
          ppuVar16 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
joined_r0x0ba01638:
          if (puVar15 != (undefined *)0x0) goto LAB_0ba015cc;
          lVar17 = func_0x048aead0(ppuVar16);
          bVar1 = *(byte *)(lVar17 + 0x19);
        }
        else {
          if (puVar15 == (undefined *)0x0) {
            (*(code *)ppuStack_600)(0,&uStack_638,0);
            puVar15 = puStack_608;
            ppuVar16 = ppuVar31;
            goto joined_r0x0ba01638;
          }
LAB_0ba015cc:
          bVar1 = puVar15[0x19];
        }
        if ((bVar1 & 2) == 0) goto LAB_0ba017a3;
      }
      if (ppuStack_388 == (undefined **)0x0) {
LAB_0ba016ad:
        puStack_248 = &UNK_0488e0b0;
        pcStack_240 = (code *)0x0;
        ppuStack_238 = (undefined **)CONCAT35(ppuStack_238._5_3_,0x48b5725f);
        uStack_258 = (long *)0x0;
        ppuStack_230 = ppuStack_610;
        lStack_228 = 0;
        pcStack_220 = (code *)0x0;
        if ((ppuStack_600 == (undefined **)0x0) ||
           ((*(code *)ppuStack_600)(0x100,&uStack_638,&uStack_258), ppuVar26 = ppuStack_230,
           pcStack_220 == (code *)0x0)) {
          uStack_6c8 = 0;
          uStack_6c4 = 0;
          uStack_6c3 = 0;
          uStack_6c2 = 0;
          uStack_6c1 = 0;
          uStack_6c0 = 0;
          uStack_6bc = 0;
          func_0x048b1dc0(&uStack_6c8);
          ppuVar26 = (undefined **)CONCAT44(uStack_6bc,uStack_6c0);
          lVar17 = CONCAT17(uStack_6c1,
                            CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))
                                    ));
        }
        else {
          lVar17 = lStack_228;
          if (lStack_228 == 0) {
            (*pcStack_220)(0,&uStack_258,0);
            lVar17 = lStack_228;
          }
        }
        if (pcStack_240 != (code *)0x0) {
          (*pcStack_240)(&uStack_258);
        }
        if (ppuVar26 != ppuVar29) goto LAB_0ba017a3;
        if (lVar17 == 0) {
          lVar17 = func_0x048aead0(ppuVar26);
          ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
          if (ppuVar19 != (undefined **)0x0) goto LAB_0ba01cfc;
LAB_0ba0214e:
          lVar17 = func_0x048aead0(ppuVar29);
          if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba017a3;
          ppuVar19 = (undefined **)func_0x048aead0(ppuVar29);
        }
        else {
          ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
          if (ppuVar19 == (undefined **)0x0) goto LAB_0ba0214e;
LAB_0ba01cfc:
          if ((int)ppuVar14 != *(int *)(ppuVar19 + 1)) goto LAB_0ba017a3;
        }
        uVar7 = *(uint *)(*ppuVar19 + 4);
        ppuVar14 = (undefined **)(ulong)uVar7;
        plVar18 = plVar13 + 1;
        plVar24 = (long *)plVar13[1];
        plVar21 = plVar18;
        if (plVar24 != (long *)0x0) {
          do {
            if (*(uint *)(plVar24 + 4) >= uVar7) {
              plVar21 = plVar24;
            }
            plVar24 = (long *)plVar24[*(uint *)(plVar24 + 4) < uVar7];
          } while (plVar24 != (long *)0x0);
          if ((plVar21 != plVar18) && (*(uint *)(plVar21 + 4) <= uVar7)) goto LAB_0ba017a3;
        }
        uVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
        if (uVar22 == 0) {
          func_0x0eec74c0(0x80,0);
        }
        if (ppuStack_388 == (undefined **)0x0) {
          ppuStack_238 = (undefined **)0x0;
        }
        else if (ppuStack_388 == (undefined **)&uStack_3a8) {
          ppuStack_238 = (undefined **)&uStack_258;
          (**(code **)(*ppuStack_388 + 0x18))();
        }
        else {
          ppuStack_238 = ppuStack_388;
          ppuStack_388 = (undefined **)0x0;
        }
        uStack_6c8 = (uint)ppuStack_6e8;
        uStack_6c4 = (undefined1)((ulong)ppuStack_6e8 >> 0x20);
        uStack_6c3 = (undefined1)((ulong)ppuStack_6e8 >> 0x28);
        uStack_6c2 = (undefined1)((ulong)ppuStack_6e8 >> 0x30);
        uStack_6c1 = (undefined1)((ulong)ppuStack_6e8 >> 0x38);
        uStack_6c0 = (uint)plStack_6e0;
        uStack_6bc = (undefined4)((ulong)plStack_6e0 >> 0x20);
        ppuStack_6e8 = (undefined **)0x0;
        plStack_6e0 = (long *)0x0;
        func_0x049e8ab0(uVar22,&uStack_638,&uStack_258,&uStack_6c8);
        plVar24 = (long *)CONCAT44(uStack_6bc,uStack_6c0);
        auStack_650[0] = uVar22;
        if (plVar24 != (long *)0x0) {
          LOCK();
          plVar21 = plVar24 + 1;
          lVar17 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            FUN_0412c2d0(plVar24);
          }
        }
        if (ppuStack_238 == (undefined **)&uStack_258) {
          lVar17 = 0x20;
LAB_0ba0445e:
          (**(code **)(*ppuStack_238 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (ppuStack_238 != (undefined **)0x0) goto LAB_0ba0445e;
        }
        plVar24 = (long *)*plVar18;
        while (plVar21 = plVar18, plVar24 != (long *)0x0) {
          while (plVar18 = plVar24, *(uint *)(plVar18 + 4) <= uVar7) {
            if (uVar7 <= *(uint *)(plVar18 + 4)) goto LAB_0ba045fd;
            plVar24 = (long *)plVar18[1];
            if ((long *)plVar18[1] == (long *)0x0) {
              plVar21 = plVar18 + 1;
              goto LAB_0ba04498;
            }
          }
          plVar24 = (long *)*plVar18;
        }
LAB_0ba04498:
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *(uint *)(plVar24 + 4) = uVar7;
        plVar24[5] = 0;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[2] = (long)plVar18;
        *plVar21 = (long)plVar24;
        if (*(long *)*plVar13 != 0) {
          *plVar13 = *(long *)*plVar13;
        }
        func_0x048bed00(plVar13[1],plVar24);
        plVar13[2] = plVar13[2] + 1;
        plVar18 = plVar24;
LAB_0ba045fd:
        uVar22 = auStack_650[0];
        auStack_650[0] = 0;
        lVar17 = plVar18[5];
        plVar18[5] = uVar22;
        if (lVar17 == 0) goto LAB_0ba017a3;
        plVar13 = *(long **)(lVar17 + 0x78);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar23 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        plVar13 = *(long **)(lVar17 + 0x60);
        if (plVar13 == (long *)(lVar17 + 0x40)) {
          lVar23 = 0x20;
LAB_0ba0466c:
          (**(code **)(*plVar13 + lVar23))();
        }
        else {
          lVar23 = 0x28;
          if (plVar13 != (long *)0x0) goto LAB_0ba0466c;
        }
        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
          (**(code **)(lVar17 + 0x18))(lVar17);
        }
        func_0x0412a280(lVar17,0x80);
        uVar22 = auStack_650[0];
        auStack_650[0] = 0;
        if (uVar22 == 0) goto LAB_0ba017a3;
        plVar13 = *(long **)(uVar22 + 0x78);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar17 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        plVar13 = *(long **)(uVar22 + 0x60);
        if (plVar13 == (long *)(uVar22 + 0x40)) {
          lVar17 = 0x20;
LAB_0ba04730:
          (**(code **)(*plVar13 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (plVar13 != (long *)0x0) goto LAB_0ba04730;
        }
        if (*(code **)(uVar22 + 0x18) != (code *)0x0) {
          (**(code **)(uVar22 + 0x18))(uVar22);
        }
        func_0x0412a280(uVar22,0x80);
        goto LAB_0ba017a3;
      }
      func_0x049e8590(&uStack_4f8,&uStack_638);
      if (ppuStack_388 != (undefined **)0x0) {
        uVar7 = (**(code **)(*ppuStack_388 + 0x30))(ppuStack_388,&uStack_4f8);
        ppuVar14 = (undefined **)(ulong)uVar7;
        if (pcStack_4e0 != (code *)0x0) {
          (*pcStack_4e0)(&uStack_4f8);
        }
        if ((char)uVar7 == '\0') goto LAB_0ba017a3;
        goto LAB_0ba016ad;
      }
      goto LAB_0ba05429;
    }
    if (ppuVar19 == (undefined **)0x0) {
      lVar17 = func_0x048aead0(ppuVar29);
      ppuVar14 = (undefined **)(ulong)*(uint *)(lVar17 + 8);
      lVar17 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      if (lVar17 != 0) goto LAB_0ba014e0;
LAB_0ba0152f:
      lVar17 = func_0x048aead0(CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0)));
      if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba01545;
    }
    else {
      ppuVar14 = (undefined **)(ulong)*(uint *)(ppuVar19 + 1);
      lVar17 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
      if (lVar17 == 0) goto LAB_0ba0152f;
LAB_0ba014e0:
      if ((int)ppuVar14 != *(int *)(lVar17 + 8)) goto LAB_0ba01545;
    }
LAB_0ba017a3:
    plVar13 = plStack_6e0;
    if (plStack_6e0 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_6e0 + 1;
      lVar17 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_6e0 + 0x10))(plStack_6e0);
        FUN_0412c2d0(plVar13);
      }
    }
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    if (ppuStack_388 == (undefined **)&uStack_3a8) {
      lVar17 = 0x20;
LAB_0ba0180d:
      (**(code **)(*ppuStack_388 + lVar17))();
    }
    else {
      lVar17 = 0x28;
      if (ppuStack_388 != (undefined **)0x0) goto LAB_0ba0180d;
    }
    if (pcStack_620 != (code *)0x0) {
      (*pcStack_620)(&uStack_638);
    }
    plVar13 = uStack_700;
    if (uStack_700 == (long *)0x0) {
LAB_0ba01846:
      if (ppuStack_730 < ppuStack_728) goto LAB_0ba01855;
LAB_0ba01885:
      lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
      uVar22 = (lVar17 >> 3) + 1;
      ppuVar26 = ppuStack_728;
      if (0x1fffffffffffffff < uVar22) goto LAB_0ba0541a;
      ppuVar26 = (undefined **)((long)ppuStack_728 - (long)ppuStack_738);
      uVar28 = (long)ppuVar26 >> 2;
      if ((ulong)((long)ppuVar26 >> 2) <= uVar22) {
        uVar28 = uVar22;
      }
      if ((undefined **)0x7ffffffffffffff7 < ppuVar26) {
        uVar28 = 0x1fffffffffffffff;
      }
      if (uVar28 < 0x2000000000000000) {
        ppuVar16 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
        if (ppuVar16 == (undefined **)0x0) {
          func_0x0eec74c0(uVar28 * 8,0);
        }
        ppuVar14 = ppuVar16 + uVar28;
        *(undefined8 **)((long)ppuVar16 + lVar17) = puVar11;
        ppuVar29 = (undefined **)((long)ppuVar16 + lVar17 + 8);
        ppuVar19 = (undefined **)((long)ppuVar16 + (lVar17 >> 3) * -8 + lVar17);
        func_0x0eee2f00(ppuVar19,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,ppuVar26);
        }
        goto LAB_0ba01964;
      }
      goto LAB_0ba0541f;
    }
    LOCK();
    plVar18 = uStack_700 + 1;
    lVar17 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar17 != 0) goto LAB_0ba01846;
    (**(code **)(*uStack_700 + 0x10))(uStack_700);
    FUN_0412c2d0(plVar13);
    if (ppuStack_728 <= ppuStack_730) goto LAB_0ba01885;
LAB_0ba01855:
    *ppuStack_730 = (undefined *)puVar11;
    ppuVar29 = ppuStack_730 + 1;
    ppuVar14 = ppuStack_728;
    ppuVar19 = ppuStack_738;
LAB_0ba01964:
    ppuStack_738 = ppuVar19;
    ppuStack_278 = ppuStack_738;
    ppuStack_738 = (undefined **)0x0;
    ppuStack_730 = (undefined **)0x0;
    ppuStack_728 = (undefined **)0x0;
    ppuStack_270 = ppuVar29;
    ppuStack_268 = ppuVar14;
    func_0x067a55b0(&uStack_258,param_2 + 4,&ppuStack_278);
    ppuVar14 = ppuStack_278;
    ppuVar26 = ppuStack_270;
    if (ppuStack_278 != (undefined **)0x0) {
      for (; ppuVar14 != ppuVar26; ppuVar26 = ppuVar26 + -1) {
        plVar13 = (long *)ppuVar26[-1];
        ppuVar26[-1] = (undefined *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      ppuStack_270 = ppuVar14;
      func_0x0412a280(ppuStack_278,(long)ppuStack_268 - (long)ppuStack_278);
    }
    lVar17 = func_0x05f929d0(&uStack_258);
    if (lVar17 != 0) {
      func_0x0d859380(&uStack_4f8,lVar17);
      bVar34 = ((uint)uStack_4f8 & 1) != 0;
      uStack_638 = (undefined **)((long)&uStack_4f8 + 1);
      if (bVar34) {
        uStack_638 = (undefined **)
                     CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8)));
      }
      uStack_630 = (undefined **)(ulong)((byte)uStack_4f8 >> 1);
      if (bVar34) {
        uStack_630 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
      }
      func_0x0470d9a0(&uStack_3a8,&UNK_014a3c06,0x45,0xd,&uStack_638);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
      }
      lVar17 = (long)uStack_638;
      uStack_638._0_5_ = CONCAT41(_DAT_013f776f,10);
      uStack_638._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_638);
      uStack_638._7_1_ = SUB81(lVar17,7);
      uStack_638._0_7_ = (uint7)(uint6)uStack_638;
      func_0x0d858ce0(&uStack_4f8,&uStack_638,&uStack_3a8);
      *puStack_6f0 = 1;
      func_0x05e91e00(puStack_6f0 + 8,&uStack_4f8);
      func_0x048fb670(&uStack_4f8);
      if (((byte)uStack_3a8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_391,CONCAT16(uStack_392,CONCAT51(uStack_397,uStack_398))),
                        CONCAT17(uStack_3a8._7_1_,
                                 CONCAT16(uStack_3a8._6_1_,
                                          CONCAT15(uStack_3a8._5_1_,
                                                   CONCAT41(uStack_3a8._1_4_,(byte)uStack_3a8)))) &
                        0xfffffffffffffffe);
      }
      if (ppuStack_238 != (undefined **)0x0) {
        (*(code *)ppuStack_238)(&ppuStack_250);
      }
      goto LAB_0ba04aef;
    }
    if (ppuStack_238 != (undefined **)0x0) {
      (*(code *)ppuStack_238)(&ppuStack_250);
    }
    uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    plVar13 = (long *)func_0x064db620(uVar10);
    ppuVar26 = param_2;
    if (plVar13 != (long *)0x0) {
      ppuVar14 = (undefined **)(**(code **)(*plVar13 + 0x10))(plVar13);
      uStack_3a8._0_1_ = 0x2a;
      uStack_3a8._1_4_ = (undefined4)_DAT_01319ebb;
      uStack_3a8._5_1_ = (undefined1)((ulong)_DAT_01319ebb >> 0x20);
      uStack_3a8._6_1_ = (undefined1)((ulong)_DAT_01319ebb >> 0x28);
      uStack_3a8._7_1_ = (undefined1)((ulong)_DAT_01319ebb >> 0x30);
      uStack_3a0 = (undefined1)((ulong)_DAT_01319ebb >> 0x38);
      uStack_39f = (undefined5)_UNK_01319ec3;
      uStack_39a = 0x4563;
      uStack_398 = 0x78;
      uStack_397 = 0x656c706d61;
      uStack_392 = 0;
      uStack_4f8._1_3_ = (undefined3)_DAT_01319ebb;
      uStack_4f8._0_4_ = CONCAT31(uStack_4f8._1_3_,0x2a);
      uStack_4f8._4_4_ = (undefined4)((ulong)_DAT_01319ebb >> 0x18);
      uStack_4f0 = CONCAT31((int3)_UNK_01319ec3,uStack_3a0);
      uStack_4ec = (undefined2)((ulong)_UNK_01319ec3 >> 0x18);
      uStack_4ea = 0x4563;
      uStack_4e8 = 0x78;
      uStack_4e7 = 0x656c706d61;
      uStack_4e2 = 0;
      ppuStack_388 = (undefined **)0x0;
      ppuStack_380 = (undefined **)0x0;
      lStack_378 = 0;
      lStack_370 = 0;
      lStack_368 = 0;
      lStack_360 = 0;
      uStack_358 = (code *)0x0;
      uStack_350 = (code *)0x0;
      ppuStack_348 = (undefined **)0x0;
      ppuStack_390 = ppuVar14;
      func_0x048b1dc0(&puStack_340);
      func_0x048b1dc0(&uStack_330);
      uStack_290 = 0;
      uStack_288 = 0;
      pcStack_2a0 = (code *)0x0;
      uStack_298 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      pcStack_2e0 = (code *)0x0;
      uStack_2d8 = 0;
      uStack_2f0 = (ulong *)0x0;
      puStack_2e8 = (ulong *)0x0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      puStack_320 = (undefined8 *)0x0;
      uStack_318 = 0;
      if (((ulong)uStack_358 & 1) == 0) {
        ppuStack_348 = (undefined **)
                       CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8)));
        uStack_358 = (code *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
        uStack_350 = (code *)CONCAT44(CONCAT22(uStack_4ea,uStack_4ec),uStack_4f0);
      }
      else {
        func_0x04885120(&uStack_358,(long)&uStack_4f8 + 1,0x15);
        if (((uint)uStack_4f8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                          CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
        }
      }
      uStack_708 = (undefined **)CONCAT26(uStack_708._6_2_,0x656d616e08);
      func_0x064f17b0(&uStack_4f8,&uStack_708);
      func_0x0ba52e30(ppuStack_390);
      func_0x0ba52e30(ppuStack_390);
      ppuVar26 = ppuStack_390;
      func_0x065cb3c0(&uStack_6c8,&uStack_4f8);
      puStack_628 = (undefined4 *)0x0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      pcStack_5e8 = (code *)0x0;
      uStack_5e0 = 0;
      uStack_5f8 = 0;
      pcStack_5f0 = (code *)0x0;
      puStack_608 = (undefined *)0x0;
      ppuStack_600 = (undefined **)0x0;
      pcStack_618 = (code *)0x0;
      ppuStack_610 = (undefined **)0x0;
      uStack_638 = (undefined **)0x0;
      uStack_630 = (undefined **)0x0;
      pcStack_620 = (code *)0x74656572670a;
      pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (pcVar20 == (code *)0x0) {
        func_0x0eec74c0(0x70,0);
      }
      *(undefined8 *)(pcVar20 + 8) = 0;
      *(undefined8 *)(pcVar20 + 0x10) = 0;
      *(undefined **)pcVar20 = &UNK_0f2f4948;
      uVar8 = func_0x0d858500(&uStack_6c8);
      pcVar27 = pcVar20 + 0x18;
      pcVar20[0x20] = (code)0x0;
      *(undefined4 *)(pcVar20 + 0x24) = uVar8;
      *(undefined4 *)(pcVar20 + 0x28) = 0;
      *(undefined8 *)(pcVar20 + 0x30) = 0;
      *(undefined8 *)(pcVar20 + 0x38) = 0;
      *(undefined8 *)(pcVar20 + 0x40) = 0;
      *(undefined **)(pcVar20 + 0x18) = &UNK_0f2f4998;
      *(undefined ***)(pcVar20 + 0x50) = ppuVar26;
      *(uint *)(pcVar20 + 0x58) = uStack_6c8;
      *(uint *)(pcVar20 + 0x5c) =
           CONCAT13(uStack_6c1,CONCAT12(uStack_6c2,CONCAT11(uStack_6c3,uStack_6c4)));
      *(uint *)(pcVar20 + 0x60) = uStack_6c0;
      *(undefined4 *)(pcVar20 + 100) = uStack_6bc;
      *(ulong *)(pcVar20 + 0x68) =
           CONCAT26(uStack_6b2,CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8)));
      uStack_6c8 = 0;
      uStack_6c4 = 0;
      uStack_6c3 = 0;
      uStack_6c2 = 0;
      uStack_6c1 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      uStack_6b8 = 0;
      uStack_6b7 = 0;
      uStack_6b3 = 0;
      uStack_6b2 = 0;
      uVar8 = func_0x0d858620(pcVar27);
      pcVar5 = pcStack_5e8;
      *(undefined4 *)(pcVar20 + 0x28) = uVar8;
      pcStack_5f0 = pcVar27;
      if (pcStack_5e8 != (code *)0x0) {
        LOCK();
        plVar13 = (long *)((long)pcStack_5e8 + 8);
        lVar17 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          lVar17 = *(long *)pcStack_5e8;
          pcStack_5e8 = pcVar20;
          (**(code **)(lVar17 + 0x10))(pcVar5);
          FUN_0412c2d0(pcVar5);
          pcVar20 = pcStack_5e8;
        }
      }
      pcStack_5e8 = pcVar20;
      cVar6 = func_0x065cb540(&uStack_638,&uStack_4f8);
      if (cVar6 != '\0') {
        if (uStack_2f0 < puStack_2e8) {
          *uStack_2f0 = 0;
          uStack_2f0[1] = 0;
          uStack_2f0[2] = 0;
          *uStack_2f0 = (ulong)uStack_638;
          uStack_2f0[1] = (ulong)uStack_630;
          uStack_2f0[2] = (ulong)puStack_628;
          uStack_638 = (undefined **)0x0;
          uStack_630 = (undefined **)0x0;
          puStack_628 = (undefined4 *)0x0;
          uStack_2f0[5] = (ulong)ppuStack_610;
          uStack_2f0[3] = (ulong)pcStack_620;
          uStack_2f0[4] = (ulong)pcStack_618;
          pcStack_620 = (code *)0x0;
          pcStack_618 = (code *)0x0;
          ppuStack_610 = (undefined **)0x0;
          uStack_2f0[6] = 0;
          uStack_2f0[7] = 0;
          uStack_2f0[8] = 0;
          uStack_2f0[6] = (ulong)puStack_608;
          uStack_2f0[7] = (ulong)ppuStack_600;
          uStack_2f0[8] = uStack_5f8;
          puStack_608 = (undefined *)0x0;
          ppuStack_600 = (undefined **)0x0;
          uStack_5f8 = 0;
          uStack_2f0[9] = (ulong)pcStack_5f0;
          uStack_2f0[10] = (ulong)pcStack_5e8;
          pcStack_5f0 = (code *)0x0;
          pcStack_5e8 = (code *)0x0;
          uStack_2f0[0xb] = 0;
          uStack_2f0[0xc] = 0;
          uStack_2f0[0xd] = 0;
          *(undefined4 *)(uStack_2f0 + 0xb) = (undefined4)uStack_5e0;
          *(undefined4 *)((long)uStack_2f0 + 0x5c) = uStack_5e0._4_4_;
          *(undefined4 *)(uStack_2f0 + 0xc) = (undefined4)uStack_5d8;
          *(undefined4 *)((long)uStack_2f0 + 100) = uStack_5d8._4_4_;
          uStack_2f0[0xd] = uStack_5d0;
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          uStack_2f0 = uStack_2f0 + 0xe;
        }
        else {
          uStack_2f0 = (ulong *)func_0x0652ac80(&uStack_2f8,&uStack_638);
        }
      }
      func_0x05f93280(&uStack_638);
      uVar7 = uStack_6c8;
      lVar17 = CONCAT17(uStack_6c1,
                        CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))));
      if (lVar17 != 0) {
        lVar23 = lVar17;
        if (lVar17 != CONCAT44(uStack_6bc,uStack_6c0)) {
          lVar23 = CONCAT44(uStack_6bc,uStack_6c0) + -0x40;
          do {
            if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
              (**(code **)(lVar23 + 0x18))(lVar23);
            }
            if (*(code **)(lVar23 + -0x30) != (code *)0x0) {
              (**(code **)(lVar23 + -0x30))(lVar23 + -0x48);
            }
            if (*(code **)(lVar23 + -0x70) != (code *)0x0) {
              (**(code **)(lVar23 + -0x70))(lVar23 + -0x88);
            }
            if (*(code **)(lVar23 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar23 + -0xb0))(lVar23 + -200);
            }
            lVar30 = lVar23 + -0xd8;
            lVar23 = lVar23 + -0x118;
          } while (lVar30 != lVar17);
          lVar23 = CONCAT17(uStack_6c1,
                            CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))
                                    ));
        }
        uStack_6c0 = uVar7;
        uStack_6bc = (undefined4)((ulong)lVar17 >> 0x20);
        func_0x0412a280(lVar23,CONCAT26(uStack_6b2,
                                        CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8))) -
                               lVar23);
      }
      if (pcStack_3e0 != (code *)0x0) {
        (*pcStack_3e0)(auStack_3f8);
      }
      if (pcStack_428 != (code *)0x0) {
        (*pcStack_428)(auStack_440);
      }
      if (pcStack_468 != (code *)0x0) {
        (*pcStack_468)(auStack_480);
      }
      if (pcStack_4a8 != (code *)0x0) {
        (*pcStack_4a8)(auStack_4c0);
      }
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_708 & 1) != 0) {
        func_0x0412a280(lStack_6f8,(ulong)uStack_708 & 0xfffffffffffffffe);
      }
      ppuStack_6e8 = (undefined **)CONCAT53(ppuStack_6e8._3_5_,0x6102);
      func_0x065f98b0(&uStack_4f8,&ppuStack_6e8);
      auStack_650[0] = CONCAT53(auStack_650[0]._3_5_,0x6202);
      func_0x065f98b0(&uStack_638,auStack_650);
      func_0x0ba54470(ppuStack_390);
      func_0x0ba54470(ppuStack_390);
      func_0x0ba54470(ppuStack_390);
      ppuVar26 = ppuStack_390;
      func_0x06c58ce0(&uStack_708,&uStack_4f8,&uStack_638);
      uStack_6b8 = 0;
      uStack_6b7 = 0;
      uStack_6b3 = 0;
      uStack_6b2 = 0;
      uStack_668 = 0;
      uStack_660 = 0;
      plStack_678 = (long *)0x0;
      uStack_670 = 0;
      uStack_688 = 0;
      puStack_680 = (undefined8 *)0x0;
      uStack_698 = 0;
      uStack_690 = 0;
      puStack_6a8 = (uint *)0x0;
      uStack_6a0 = 0;
      uStack_6c8 = 0;
      uStack_6c4 = 0;
      uStack_6c3 = 0;
      uStack_6c2 = 0;
      uStack_6c1 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      uStack_6b0 = 0x64646106;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (plVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x70,0);
      }
      plVar13[1] = 0;
      plVar13[2] = 0;
      *plVar13 = (long)&UNK_0f2f4b28;
      uVar8 = func_0x0d858500(&uStack_708);
      puVar11 = plVar13 + 3;
      *(undefined1 *)(plVar13 + 4) = 0;
      *(undefined4 *)((long)plVar13 + 0x24) = uVar8;
      *(undefined4 *)(plVar13 + 5) = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[8] = 0;
      plVar13[3] = (long)&UNK_0f2f4b78;
      plVar13[10] = (long)ppuVar26;
      *(undefined4 *)(plVar13 + 0xb) = (undefined4)uStack_708;
      *(undefined4 *)((long)plVar13 + 0x5c) = uStack_708._4_4_;
      *(undefined4 *)(plVar13 + 0xc) = (undefined4)uStack_700;
      *(undefined4 *)((long)plVar13 + 100) = uStack_700._4_4_;
      plVar13[0xd] = lStack_6f8;
      uStack_708 = (undefined **)0x0;
      uStack_700 = (long *)0x0;
      lStack_6f8 = 0;
      uVar8 = func_0x0d858620(puVar11);
      plVar18 = plStack_678;
      *(undefined4 *)(plVar13 + 5) = uVar8;
      puStack_680 = puVar11;
      if (plStack_678 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_678 + 1;
        lVar17 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          lVar17 = *plStack_678;
          plStack_678 = plVar13;
          (**(code **)(lVar17 + 0x10))(plVar18);
          FUN_0412c2d0(plVar18);
          plVar13 = plStack_678;
        }
      }
      plStack_678 = plVar13;
      cVar6 = func_0x06c58f10(&uStack_6c8,&uStack_4f8,&uStack_638);
      if (cVar6 != '\0') {
        if (uStack_2f0 < puStack_2e8) {
          *uStack_2f0 = 0;
          uStack_2f0[1] = 0;
          uStack_2f0[2] = 0;
          *uStack_2f0 = CONCAT17(uStack_6c1,
                                 CONCAT16(uStack_6c2,
                                          CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))));
          uStack_2f0[1] = CONCAT44(uStack_6bc,uStack_6c0);
          uStack_2f0[2] = CONCAT26(uStack_6b2,CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8)));
          uStack_6c8 = 0;
          uStack_6c4 = 0;
          uStack_6c3 = 0;
          uStack_6c2 = 0;
          uStack_6c1 = 0;
          uStack_6c0 = 0;
          uStack_6bc = 0;
          uStack_6b8 = 0;
          uStack_6b7 = 0;
          uStack_6b3 = 0;
          uStack_6b2 = 0;
          uStack_2f0[5] = uStack_6a0;
          uStack_2f0[3] = uStack_6b0;
          uStack_2f0[4] = (ulong)puStack_6a8;
          uStack_6b0 = 0;
          puStack_6a8 = (uint *)0x0;
          uStack_6a0 = 0;
          uStack_2f0[6] = 0;
          uStack_2f0[7] = 0;
          uStack_2f0[8] = 0;
          uStack_2f0[6] = uStack_698;
          uStack_2f0[7] = uStack_690;
          uStack_2f0[8] = uStack_688;
          uStack_698 = 0;
          uStack_690 = 0;
          uStack_688 = 0;
          uStack_2f0[9] = (ulong)puStack_680;
          uStack_2f0[10] = (ulong)plStack_678;
          puStack_680 = (undefined8 *)0x0;
          plStack_678 = (undefined8 *)0x0;
          uStack_2f0[0xb] = 0;
          uStack_2f0[0xc] = 0;
          uStack_2f0[0xd] = 0;
          *(undefined4 *)(uStack_2f0 + 0xb) = (undefined4)uStack_670;
          *(undefined4 *)((long)uStack_2f0 + 0x5c) = uStack_670._4_4_;
          *(undefined4 *)(uStack_2f0 + 0xc) = (undefined4)uStack_668;
          *(undefined4 *)((long)uStack_2f0 + 100) = uStack_668._4_4_;
          uStack_2f0[0xd] = uStack_660;
          uStack_670 = 0;
          uStack_668 = 0;
          uStack_660 = 0;
          uStack_2f0 = uStack_2f0 + 0xe;
        }
        else {
          uStack_2f0 = (ulong *)func_0x0652ac80(&uStack_2f8,&uStack_6c8);
        }
      }
      func_0x05f93280(&uStack_6c8);
      plVar13 = (long *)uStack_708;
      if (uStack_708 != (undefined **)0x0) {
        if (uStack_708 != (undefined **)uStack_700) {
          plVar18 = uStack_700 + -8;
          do {
            if ((code *)plVar18[3] != (code *)0x0) {
              (*(code *)plVar18[3])(plVar18);
            }
            if ((code *)plVar18[-6] != (code *)0x0) {
              (*(code *)plVar18[-6])(plVar18 + -9);
            }
            if ((code *)plVar18[-0xe] != (code *)0x0) {
              (*(code *)plVar18[-0xe])(plVar18 + -0x11);
            }
            if ((code *)plVar18[-0x16] != (code *)0x0) {
              (*(code *)plVar18[-0x16])(plVar18 + -0x19);
            }
            plVar24 = plVar18 + -0x1b;
            plVar18 = plVar18 + -0x23;
          } while (plVar24 != plVar13);
        }
        uStack_700 = plVar13;
        func_0x0412a280(uStack_708,lStack_6f8 - (long)uStack_708);
      }
      if (pcStack_520 != (code *)0x0) {
        (*pcStack_520)(auStack_538);
      }
      if (pcStack_568 != (code *)0x0) {
        (*pcStack_568)(&uStack_580);
      }
      if (pcStack_5a8 != (code *)0x0) {
        (*pcStack_5a8)(&uStack_5c0);
      }
      if (pcStack_5e8 != (code *)0x0) {
        (*pcStack_5e8)(&ppuStack_600);
      }
      if (((ulong)uStack_638 & 1) != 0) {
        func_0x0412a280(puStack_628,(ulong)uStack_638 & 0xfffffffffffffffe);
      }
      if ((auStack_650[0] & 1) != 0) {
        func_0x0412a280(uStack_640,auStack_650[0] & 0xfffffffffffffffe);
      }
      if (pcStack_3e0 != (code *)0x0) {
        (*pcStack_3e0)(auStack_3f8);
      }
      if (pcStack_428 != (code *)0x0) {
        (*pcStack_428)(auStack_440);
      }
      if (pcStack_468 != (code *)0x0) {
        (*pcStack_468)(auStack_480);
      }
      if (pcStack_4a8 != (code *)0x0) {
        (*pcStack_4a8)(auStack_4c0);
      }
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
      }
      if (((ulong)ppuStack_6e8 & 1) != 0) {
        func_0x0412a280(uStack_6d8,(ulong)ppuStack_6e8 & 0xfffffffffffffffe);
      }
      uStack_708 = (undefined **)CONCAT26(uStack_708._6_2_,0x656d616e08);
      func_0x064f17b0(&uStack_4f8,&uStack_708);
      ppuVar26 = ppuStack_390;
      auVar35 = func_0x0ba55870();
      uVar10 = auVar35._8_8_;
      lVar23 = auVar35._0_8_;
      lVar17 = lVar23;
      if (lVar23 == 0) {
        lVar17 = func_0x048aead0(uVar10);
      }
      uStack_6c8 = *(uint *)(lVar17 + 8);
      uStack_638 = (undefined **)&uStack_6c8;
      lVar17 = func_0x06520320(ppuVar26 + 0xf,uStack_638,&UNK_01563a4f,&uStack_638,&ppuStack_6e8);
      uStack_638 = (undefined **)&UNK_0f2f4c20;
      pcStack_618 = (code *)&uStack_638;
      func_0x06521a20(&uStack_638,lVar17 + 0x20);
      if (pcStack_618 == (code *)&uStack_638) {
        lVar17 = 0x20;
LAB_0ba029d7:
        (**(code **)(*(long *)pcStack_618 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (pcStack_618 != (code *)0x0) goto LAB_0ba029d7;
      }
      lVar17 = lVar23;
      if (lVar23 == 0) {
        lVar17 = func_0x048aead0(uVar10);
      }
      uStack_6c8 = *(uint *)(lVar17 + 8);
      uStack_638 = (undefined **)&uStack_6c8;
      lVar17 = func_0x06521b10(ppuVar26 + 0x14,uStack_638,&UNK_01563a4f,&uStack_638,&ppuStack_6e8);
      uStack_638 = (undefined **)&UNK_0f2f4d18;
      pcStack_618 = (code *)&uStack_638;
      func_0x065224e0(&uStack_638,lVar17 + 0x20);
      if (pcStack_618 == (code *)&uStack_638) {
        lVar17 = 0x20;
LAB_0ba02a03:
        (**(code **)(*(long *)pcStack_618 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (pcStack_618 != (code *)0x0) goto LAB_0ba02a03;
      }
      uStack_638 = (undefined **)0x0;
      uStack_630 = (undefined **)0x0;
      puStack_628 = (undefined4 *)0x0;
      uStack_6c8 = _DAT_0f2f4c00;
      uStack_6c4 = (undefined1)_UNK_0f2f4c04;
      uStack_6c3 = (undefined1)((uint)_UNK_0f2f4c04 >> 8);
      uStack_6c2 = (undefined1)((uint)_UNK_0f2f4c04 >> 0x10);
      uStack_6c1 = (undefined1)((uint)_UNK_0f2f4c04 >> 0x18);
      uStack_6c0 = _UNK_0f2f4c08;
      uStack_6bc = _UNK_0f2f4c0c;
      lVar17 = func_0x0651ddc0(&uStack_638,&uStack_6c8);
      uStack_630 = (undefined **)lVar17;
      if (uStack_638 == (undefined **)lVar17) {
        if (lVar17 != 0) {
          uStack_630 = uStack_638;
          func_0x0412a280(uStack_638,(long)puStack_628 - lVar17);
        }
      }
      else {
        if (lVar23 == 0) {
          lVar23 = func_0x048aead0(uVar10);
        }
        ppuStack_6e8 = (undefined **)CONCAT44(ppuStack_6e8._4_4_,*(undefined4 *)(lVar23 + 8));
        uStack_6c8 = (uint)&ppuStack_6e8;
        uStack_6c4 = (undefined1)((ulong)&ppuStack_6e8 >> 0x20);
        uStack_6c3 = (undefined1)((ulong)&ppuStack_6e8 >> 0x28);
        uStack_6c2 = (undefined1)((ulong)&ppuStack_6e8 >> 0x30);
        uStack_6c1 = (undefined1)((ulong)&ppuStack_6e8 >> 0x38);
        lVar23 = func_0x065225d0(ppuVar26 + 0x19,&ppuStack_6e8,&UNK_01563a4f,&uStack_6c8,auStack_650
                                );
        lVar17 = *(long *)(lVar23 + 0x18);
        if (lVar17 != 0) {
          lVar30 = *(long *)(lVar23 + 0x20);
          lVar32 = lVar17;
          if (lVar17 != lVar30) {
            do {
              if ((*(byte *)(lVar30 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar30 + -8),
                                *(ulong *)(lVar30 + -0x18) & 0xfffffffffffffffe);
              }
              lVar30 = lVar30 + -0x18;
            } while (lVar30 != lVar17);
            lVar32 = *(long *)(lVar23 + 0x18);
          }
          *(long *)(lVar23 + 0x20) = lVar17;
          func_0x0412a280(lVar32,*(long *)(lVar23 + 0x28) - lVar32);
          *(long *)(lVar23 + 0x18) = 0;
          *(undefined8 *)(lVar23 + 0x20) = 0;
          *(undefined8 *)(lVar23 + 0x28) = 0;
        }
        *(undefined4 *)(lVar23 + 0x18) = (undefined4)uStack_638;
        *(undefined4 *)(lVar23 + 0x1c) = uStack_638._4_4_;
        *(undefined4 *)(lVar23 + 0x20) = (undefined4)uStack_630;
        *(undefined4 *)(lVar23 + 0x24) = uStack_630._4_4_;
        *(undefined4 **)(lVar23 + 0x28) = puStack_628;
      }
      func_0x0ba52e30(ppuStack_390);
      ppuVar26 = ppuStack_390;
      func_0x065cb3c0(&uStack_6c8,&uStack_4f8);
      puStack_628 = (undefined4 *)0x0;
      ppuStack_610 = (undefined **)0x0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      pcStack_5e8 = (code *)0x0;
      uStack_5e0 = 0;
      uStack_5f8 = 0;
      pcStack_5f0 = (code *)0x0;
      puStack_608 = (undefined *)0x0;
      ppuStack_600 = (undefined **)0x0;
      uStack_638 = (undefined **)0x0;
      uStack_630 = (undefined **)0x0;
      pcStack_620 = (code *)0x654474656572671a;
      pcStack_618 = (code *)0x64656c696174;
      pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (pcVar20 == (code *)0x0) {
        func_0x0eec74c0(0x70,0);
      }
      *(undefined8 *)((long)pcVar20 + 8) = 0;
      *(undefined8 *)((long)pcVar20 + 0x10) = 0;
      *(undefined **)pcVar20 = &UNK_0f2f4d98;
      uVar8 = func_0x0d858500(&uStack_6c8);
      puVar11 = (undefined8 *)((long)pcVar20 + 0x18);
      *(undefined1 *)((long)pcVar20 + 0x20) = 0;
      *(undefined4 *)((long)pcVar20 + 0x24) = uVar8;
      *(undefined4 *)((long)pcVar20 + 0x28) = 0;
      *(undefined8 *)((long)pcVar20 + 0x30) = 0;
      *(undefined8 *)((long)pcVar20 + 0x38) = 0;
      *(undefined8 *)((long)pcVar20 + 0x40) = 0;
      *(undefined **)((long)pcVar20 + 0x18) = &UNK_0f2f4de8;
      *(undefined ***)((long)pcVar20 + 0x50) = ppuVar26;
      *(uint *)((long)pcVar20 + 0x58) = uStack_6c8;
      *(uint *)((long)pcVar20 + 0x5c) =
           CONCAT13(uStack_6c1,CONCAT12(uStack_6c2,CONCAT11(uStack_6c3,uStack_6c4)));
      *(uint *)((long)pcVar20 + 0x60) = uStack_6c0;
      *(undefined4 *)((long)pcVar20 + 100) = uStack_6bc;
      *(ulong *)((long)pcVar20 + 0x68) =
           CONCAT26(uStack_6b2,CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8)));
      uStack_6c8 = 0;
      uStack_6c4 = 0;
      uStack_6c3 = 0;
      uStack_6c2 = 0;
      uStack_6c1 = 0;
      uStack_6c0 = 0;
      uStack_6bc = 0;
      uStack_6b8 = 0;
      uStack_6b7 = 0;
      uStack_6b3 = 0;
      uStack_6b2 = 0;
      uVar8 = func_0x0d858620(puVar11);
      pcVar27 = pcStack_5e8;
      *(undefined4 *)((long)pcVar20 + 0x28) = uVar8;
      pcStack_5f0 = (code *)puVar11;
      if (pcStack_5e8 != (code *)0x0) {
        LOCK();
        plVar13 = (long *)((long)pcStack_5e8 + 8);
        lVar17 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          lVar17 = *(long *)pcStack_5e8;
          pcStack_5e8 = pcVar20;
          (**(code **)(lVar17 + 0x10))(pcVar27);
          FUN_0412c2d0(pcVar27);
          pcVar20 = pcStack_5e8;
        }
      }
      pcStack_5e8 = pcVar20;
      cVar6 = func_0x065cb540(&uStack_638,&uStack_4f8);
      if (cVar6 != '\0') {
        if (uStack_2f0 < puStack_2e8) {
          *uStack_2f0 = 0;
          uStack_2f0[1] = 0;
          uStack_2f0[2] = 0;
          *uStack_2f0 = (ulong)uStack_638;
          uStack_2f0[1] = (ulong)uStack_630;
          uStack_2f0[2] = (ulong)puStack_628;
          uStack_638 = (undefined **)0x0;
          uStack_630 = (undefined **)0x0;
          puStack_628 = (undefined4 *)0x0;
          uStack_2f0[5] = (ulong)ppuStack_610;
          uStack_2f0[3] = (ulong)pcStack_620;
          uStack_2f0[4] = (ulong)pcStack_618;
          pcStack_620 = (code *)0x0;
          pcStack_618 = (code *)0x0;
          ppuStack_610 = (undefined **)0x0;
          uStack_2f0[6] = 0;
          uStack_2f0[7] = 0;
          uStack_2f0[8] = 0;
          uStack_2f0[6] = (ulong)puStack_608;
          uStack_2f0[7] = (ulong)ppuStack_600;
          uStack_2f0[8] = uStack_5f8;
          puStack_608 = (undefined *)0x0;
          ppuStack_600 = (undefined **)0x0;
          uStack_5f8 = 0;
          uStack_2f0[9] = (ulong)pcStack_5f0;
          uStack_2f0[10] = (ulong)pcStack_5e8;
          pcStack_5f0 = (code *)0x0;
          pcStack_5e8 = (code *)0x0;
          uStack_2f0[0xb] = 0;
          uStack_2f0[0xc] = 0;
          uStack_2f0[0xd] = 0;
          *(undefined4 *)(uStack_2f0 + 0xb) = (undefined4)uStack_5e0;
          *(undefined4 *)((long)uStack_2f0 + 0x5c) = uStack_5e0._4_4_;
          *(undefined4 *)(uStack_2f0 + 0xc) = (undefined4)uStack_5d8;
          *(undefined4 *)((long)uStack_2f0 + 100) = uStack_5d8._4_4_;
          uStack_2f0[0xd] = uStack_5d0;
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5d0 = 0;
          uStack_2f0 = uStack_2f0 + 0xe;
        }
        else {
          uStack_2f0 = (ulong *)func_0x0652ac80(&uStack_2f8,&uStack_638);
        }
      }
      func_0x05f93280(&uStack_638);
      uVar7 = uStack_6c8;
      lVar17 = CONCAT17(uStack_6c1,
                        CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))));
      if (lVar17 != 0) {
        lVar23 = lVar17;
        if (lVar17 != CONCAT44(uStack_6bc,uStack_6c0)) {
          lVar23 = CONCAT44(uStack_6bc,uStack_6c0) + -0x40;
          do {
            if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
              (**(code **)(lVar23 + 0x18))(lVar23);
            }
            if (*(code **)(lVar23 + -0x30) != (code *)0x0) {
              (**(code **)(lVar23 + -0x30))(lVar23 + -0x48);
            }
            if (*(code **)(lVar23 + -0x70) != (code *)0x0) {
              (**(code **)(lVar23 + -0x70))(lVar23 + -0x88);
            }
            if (*(code **)(lVar23 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar23 + -0xb0))(lVar23 + -200);
            }
            lVar30 = lVar23 + -0xd8;
            lVar23 = lVar23 + -0x118;
          } while (lVar30 != lVar17);
          lVar23 = CONCAT17(uStack_6c1,
                            CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))
                                    ));
        }
        uStack_6c0 = uVar7;
        uStack_6bc = (undefined4)((ulong)lVar17 >> 0x20);
        func_0x0412a280(lVar23,CONCAT26(uStack_6b2,
                                        CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8))) -
                               lVar23);
      }
      if (pcStack_3e0 != (code *)0x0) {
        (*pcStack_3e0)(auStack_3f8);
      }
      if (pcStack_428 != (code *)0x0) {
        (*pcStack_428)(auStack_440);
      }
      if (pcStack_468 != (code *)0x0) {
        (*pcStack_468)(auStack_480);
      }
      if (pcStack_4a8 != (code *)0x0) {
        (*pcStack_4a8)(auStack_4c0);
      }
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_708 & 1) != 0) {
        func_0x0412a280(lStack_6f8,(ulong)uStack_708 & 0xfffffffffffffffe);
      }
      uStack_6c8._1_3_ = (undefined3)_DAT_01319ed1;
      uStack_6c8 = CONCAT31(uStack_6c8._1_3_,0x28);
      uStack_6c4 = (undefined1)((ulong)_DAT_01319ed1 >> 0x18);
      uStack_6c3 = (undefined1)((ulong)_DAT_01319ed1 >> 0x20);
      uStack_6c2 = (undefined1)((ulong)_DAT_01319ed1 >> 0x28);
      uStack_6c1 = (undefined1)((ulong)_DAT_01319ed1 >> 0x30);
      uStack_6c0._0_1_ = (undefined1)((ulong)_DAT_01319ed1 >> 0x38);
      uStack_6c0._1_3_ = (undefined3)_UNK_01319ed9;
      uStack_6bc = (undefined4)((ulong)_UNK_01319ed9 >> 0x18);
      uStack_6b8 = (undefined1)((ulong)_UNK_01319ed9 >> 0x38);
      uStack_6b7 = 0x656c7564;
      uStack_6b3 = 0;
      uStack_638 = (undefined **)CONCAT26(uStack_638._6_2_,1);
      uStack_630 = (undefined **)0x0;
      puStack_628 = (undefined4 *)0x0;
      pcStack_620 = (code *)0x0;
      func_0x0d84f800(&uStack_4f8,0x2b37621304227b88,0x771db33bfc406f1c,&uStack_6c8,&uStack_638,0);
      if (((ulong)uStack_630 & 1) != 0) {
        func_0x0412a280(pcStack_620,(ulong)uStack_630 & 0xfffffffffffffffe);
        if ((uStack_6c8 & 1) == 0) goto LAB_0ba02ff3;
LAB_0ba03036:
        func_0x0412a280(CONCAT26(uStack_6b2,CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8))),
                        CONCAT17(uStack_6c1,
                                 CONCAT16(uStack_6c2,
                                          CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8)))) &
                        0xfffffffffffffffe);
        ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        if (ppuVar16 != (undefined **)0x0) goto LAB_0ba02fff;
LAB_0ba0305b:
        func_0x048b0de0(&uStack_6c8,&uStack_708);
        uVar8 = uStack_6bc;
        uVar7 = uStack_6c0;
        _DAT_0f54fd90 = uStack_6c8;
        uRam000000000f54fd94 =
             CONCAT13(uStack_6c1,CONCAT12(uStack_6c2,CONCAT11(uStack_6c3,uStack_6c4)));
        uStack_6c8 = 0;
        uStack_6c4 = 0;
        uStack_6c3 = 0;
        uStack_6c2 = 0;
        uStack_6c1 = 0;
        uStack_6c0 = 0;
        uStack_6bc = 0;
        plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar7;
        uRam000000000f54fd9c = uVar8;
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar17 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        plVar13 = (long *)CONCAT44(uStack_6bc,uStack_6c0);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar18 = plVar13 + 1;
          lVar17 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
          }
        }
        ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        ppuVar26 = param_2;
        if (DAT_0f6c4c00 != '\0') goto LAB_0ba030fc;
        goto LAB_0ba0542e;
      }
      if ((uStack_6c8 & 1) != 0) goto LAB_0ba03036;
LAB_0ba02ff3:
      ppuVar16 = (undefined **)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (ppuVar16 == (undefined **)0x0) goto LAB_0ba0305b;
LAB_0ba02fff:
      ppuVar26 = param_2;
      if (DAT_0f6c4c00 == '\0') goto LAB_0ba0542e;
      goto LAB_0ba030fc;
    }
  }
  else {
    lVar17 = (long)ppuStack_730 - (long)ppuStack_738;
    ppuVar19 = (undefined **)(lVar17 >> 3);
    ppuVar26 = (undefined **)((long)ppuVar19 + 1);
    if (ppuVar16 < ppuVar26) {
LAB_0ba052f8:
      func_0x05fe8060();
    }
    else {
      uVar22 = (long)ppuStack_728 - (long)ppuStack_738;
      ppuVar29 = (undefined **)((long)uVar22 >> 2);
      if ((undefined **)((long)uVar22 >> 2) <= ppuVar26) {
        ppuVar29 = ppuVar26;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        ppuVar29 = ppuVar16;
      }
      if (ppuVar29 <= ppuVar16) {
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppuVar29 * 8);
        if (lVar23 == 0) {
          func_0x0eec74c0((long)ppuVar29 * 8,0);
        }
        ppuStack_728 = (undefined **)(lVar23 + (long)ppuVar29 * 8);
        *(undefined ***)(lVar23 + lVar17) = ppuVar14;
        ppuStack_730 = (undefined **)(lVar23 + lVar17);
        ppuVar14 = (undefined **)(lVar23 + lVar17 + (long)ppuVar19 * -8);
        func_0x0eee2f00(ppuVar14,ppuStack_738,lVar17);
        if (ppuStack_738 != (undefined **)0x0) {
          func_0x0412a280(ppuStack_738,uVar22);
        }
        ppuVar16 = (undefined **)0x1fffffffffffffff;
        ppuVar26 = param_2;
        ppuStack_738 = ppuVar14;
        goto LAB_0b9fe1f5;
      }
    }
    func_0x04882eb0();
LAB_0ba05302:
    func_0x05fe8060();
LAB_0ba05307:
    func_0x04882eb0();
LAB_0ba0530c:
    func_0x05fe8060();
LAB_0ba05311:
    func_0x04882eb0();
LAB_0ba05316:
    func_0x05fe8060();
    puVar12 = uStack_4f8;
LAB_0ba0531b:
    uStack_4f8 = puVar12;
    func_0x04882eb0();
LAB_0ba05320:
    func_0x05fe8060();
LAB_0ba05325:
    func_0x04882eb0();
LAB_0ba0532a:
    func_0x05fe8060();
LAB_0ba0532f:
    func_0x04882eb0();
LAB_0ba05334:
    func_0x05fe8060();
LAB_0ba05339:
    func_0x04882eb0();
LAB_0ba0533e:
    func_0x05fe8060();
LAB_0ba05343:
    func_0x04882eb0();
LAB_0ba05348:
    func_0x05fe8060();
LAB_0ba0534d:
    func_0x04882eb0();
LAB_0ba05352:
    func_0x05fe8060();
LAB_0ba05357:
    func_0x04882eb0();
LAB_0ba0535c:
    func_0x05fe8060();
LAB_0ba05361:
    func_0x04882eb0();
LAB_0ba05366:
    func_0x05fe8060();
LAB_0ba0536b:
    func_0x04882eb0();
LAB_0ba05370:
    func_0x05fe8060();
LAB_0ba05375:
    func_0x04882eb0();
LAB_0ba0537a:
    func_0x05fe8060();
LAB_0ba0537f:
    func_0x04882eb0();
LAB_0ba05384:
    func_0x05fe8060();
LAB_0ba05389:
    func_0x04882eb0();
LAB_0ba0538e:
    func_0x05fe8060();
LAB_0ba05393:
    func_0x04882eb0();
LAB_0ba05398:
    func_0x05fe8060();
LAB_0ba0539d:
    func_0x04882eb0();
LAB_0ba053a2:
    func_0x05fe8060();
LAB_0ba053a7:
    func_0x04882eb0();
LAB_0ba053ac:
    func_0x05fe8060();
LAB_0ba053b1:
    func_0x04882eb0();
LAB_0ba053b6:
    func_0x05fe8060();
LAB_0ba053bb:
    func_0x04882eb0();
LAB_0ba053c0:
    func_0x05fe8060();
LAB_0ba053c5:
    func_0x04882eb0();
LAB_0ba053ca:
    func_0x05fe8060();
LAB_0ba053cf:
    func_0x04882eb0();
LAB_0ba053d4:
    func_0x05fe8060();
LAB_0ba053d9:
    func_0x04882eb0();
    ppuVar26 = ppuVar19;
LAB_0ba053de:
    func_0x05fe8060();
LAB_0ba053e3:
    func_0x04882eb0();
LAB_0ba053e8:
    func_0x05fe8060();
LAB_0ba053ed:
    func_0x04882eb0();
LAB_0ba053f2:
    func_0x05fe8060();
LAB_0ba053f7:
    func_0x04882eb0();
LAB_0ba053fc:
    func_0x05fe8060();
LAB_0ba05401:
    func_0x04882eb0();
LAB_0ba05406:
    func_0x05fe8060();
LAB_0ba0540b:
    func_0x04882eb0();
LAB_0ba05410:
    func_0x05fe8060();
LAB_0ba05415:
    func_0x04882eb0();
LAB_0ba0541a:
    func_0x05fe8060();
LAB_0ba0541f:
    func_0x04882eb0();
LAB_0ba05424:
    func_0x04891200();
LAB_0ba05429:
    func_0x04891200();
LAB_0ba0542e:
    iVar9 = func_0x04108328(&DAT_0f6c4c00);
    if (iVar9 != 0) {
      func_0x0ba54080();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6c4b80,0xf53dab8);
      func_0x0410844d(&DAT_0f6c4c00);
    }
LAB_0ba030fc:
    lVar17 = lStack_370;
    plVar13 = (long *)(*ppuVar16 +
                      (ulong)((int)((ulong)((long)ppuVar16[1] - (long)*ppuVar16) >> 3) - 1U &
                             *(uint *)(_DAT_0f6c4b80 + 4)) * 8);
    do {
      lVar23 = *plVar13;
      if (lVar23 == -1) goto LAB_0ba03150;
      plVar13 = (long *)(ppuVar16[3] + lVar23 * 0x18);
    } while (*(uint *)(ppuVar16[3] + lVar23 * 0x18 + 8) != *(uint *)(_DAT_0f6c4b80 + 4));
    if (plVar13 == (long *)ppuVar16[4]) {
LAB_0ba03150:
      puStack_340 = &DAT_0f6c4b80;
    }
    else {
      puStack_340 = (undefined *)plVar13[2];
    }
    ppuStack_338 = ppuVar16;
    lVar23 = lStack_368;
    if (lStack_370 != 0) {
      for (; lVar17 != lVar23; lVar23 = lVar23 + -0x30) {
        if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                          *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
        }
      }
      lStack_368 = lVar17;
      func_0x0412a280(lStack_370,lStack_360 - lStack_370);
    }
    puStack_628 = (undefined4 *)lStack_378;
    uStack_630 = ppuStack_380;
    uStack_638 = ppuStack_388;
    ppuStack_388 = (undefined **)0x0;
    ppuStack_380 = (undefined **)0x0;
    lStack_378 = 0;
    lStack_370 = 0;
    lStack_368 = 0;
    lStack_360 = 0;
    ppuStack_610 = ppuStack_348;
    pcStack_620 = uStack_358;
    pcStack_618 = uStack_350;
    uStack_358 = (code *)0x0;
    uStack_350 = (code *)0x0;
    ppuStack_348 = (undefined **)0x0;
    uStack_5f8 = uStack_330;
    pcStack_5f0 = (code *)puStack_328;
    puStack_608 = puStack_340;
    ppuStack_600 = ppuStack_338;
    pcStack_5e8 = (code *)puStack_320;
    uStack_5e0 = uStack_318;
    uStack_5d8 = uStack_310;
    puStack_320 = (undefined8 *)0x0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_5d0 = uStack_308;
    uStack_5c8 = uStack_300;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_5c0 = (undefined4)uStack_2f8;
    uStack_5bc = uStack_2f8._4_4_;
    uStack_5b8 = (undefined4)uStack_2f0;
    uStack_5b4 = uStack_2f0._4_4_;
    puStack_5b0 = puStack_2e8;
    uStack_2f8 = 0;
    uStack_2f0 = (ulong *)0x0;
    puStack_2e8 = (ulong *)0x0;
    pcStack_5a8 = pcStack_2e0;
    uStack_5a0 = uStack_2d8;
    uStack_598 = uStack_2d0;
    pcStack_2e0 = (code *)0x0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_590 = uStack_2c8;
    uStack_588 = uStack_2c0;
    uStack_580 = uStack_2b8;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_578 = uStack_2b0;
    uStack_570 = uStack_2a8;
    pcStack_568 = pcStack_2a0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    pcStack_2a0 = (code *)0x0;
    uStack_560 = (undefined4)uStack_298;
    uStack_55c = uStack_298._4_4_;
    uStack_558 = (undefined4)uStack_290;
    uStack_554 = uStack_290._4_4_;
    uStack_550 = uStack_288;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x0d84fd50(&uStack_4f8,&uStack_638);
    func_0x0651ffe0(&uStack_638);
    uStack_638 = (undefined **)0x0;
    uStack_630 = (undefined **)0x0;
    puStack_628 = (undefined4 *)0x0;
    uStack_6c8 = 0;
    uStack_6c4 = 0;
    uStack_6c3 = 0;
    uStack_6c2 = 0;
    uStack_6c1 = 0;
    uStack_6c0 = 0;
    uStack_6bc = 0;
    uStack_6b8 = 0;
    uStack_6b7 = 0;
    uStack_6b3 = 0;
    uStack_6b2 = 0;
    func_0x0d841110(&uStack_258,&uStack_4f8,1,&uStack_638,&uStack_6c8);
    uVar7 = uStack_6c8;
    lVar17 = CONCAT17(uStack_6c1,
                      CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))));
    if (lVar17 != 0) {
      lVar23 = CONCAT44(uStack_6bc,uStack_6c0);
      lVar30 = lVar17;
      if (lVar17 != lVar23) {
        do {
          if ((*(byte *)(lVar23 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar23 + -8),
                            *(ulong *)(lVar23 + -0x18) & 0xfffffffffffffffe);
          }
          lVar23 = lVar23 + -0x18;
        } while (lVar23 != lVar17);
        lVar30 = CONCAT17(uStack_6c1,
                          CONCAT16(uStack_6c2,CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8))))
        ;
      }
      uStack_6c0 = uVar7;
      uStack_6bc = (undefined4)((ulong)lVar17 >> 0x20);
      func_0x0412a280(lVar30,CONCAT26(uStack_6b2,
                                      CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8))) - lVar30
                     );
    }
    ppuVar16 = uStack_638;
    ppuVar19 = uStack_630;
    if (uStack_638 != (undefined **)0x0) {
      for (; ppuVar16 != ppuVar19; ppuVar19 = ppuVar19 + -3) {
        if (((ulong)ppuVar19[-3] & 1) != 0) {
          func_0x0412a280(ppuVar19[-1],(ulong)ppuVar19[-3] & 0xfffffffffffffffe);
        }
      }
      uStack_630 = ppuVar16;
      func_0x0412a280(uStack_638,(long)puStack_628 - (long)uStack_638);
    }
    func_0x0d84fa30(&uStack_4f8);
    func_0x0651ffe0(&lStack_370);
    ppuVar19 = ppuStack_388;
    ppuVar29 = ppuStack_380;
    if (ppuStack_388 != (undefined **)0x0) {
      while (ppuVar16 = ppuVar29, ppuVar19 != ppuVar16) {
        if (((ulong)ppuVar16[-4] & 1) != 0) {
          func_0x0412a280(ppuVar16[-2],(ulong)ppuVar16[-4] & 0xfffffffffffffffe);
        }
        ppuVar29 = ppuVar16 + -6;
      }
      ppuStack_380 = ppuVar19;
      func_0x0412a280(ppuStack_388,lStack_378 - (long)ppuStack_388);
    }
    if (((byte)uStack_3a8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_391,CONCAT16(uStack_392,CONCAT51(uStack_397,uStack_398))),
                      CONCAT17(uStack_3a8._7_1_,
                               CONCAT16(uStack_3a8._6_1_,
                                        CONCAT15(uStack_3a8._5_1_,
                                                 CONCAT41(uStack_3a8._1_4_,(byte)uStack_3a8)))) &
                      0xfffffffffffffffe);
    }
    uStack_4f8 = &uStack_258;
    lVar17 = func_0x04921970(ppuVar14 + 9,&uStack_258,&UNK_01563a4f,&uStack_4f8,&uStack_638);
    if ((*(byte *)(lVar17 + 0x28) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar17 + 0x38),*(ulong *)(lVar17 + 0x28) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar17 + 0x28) = 0x726f746964650c;
    puVar15 = ppuVar14[2];
    if (puVar15 < ppuVar14[3]) {
      func_0x0652ec20(puVar15,&uStack_258);
      puVar15 = puVar15 + 0x148;
    }
    else {
      puVar15 = (undefined *)func_0x0652eaa0(ppuVar14 + 1,&uStack_258);
    }
    ppuVar14[2] = puVar15;
    func_0x064dfee0(&uStack_258);
  }
  plVar13 = (long *)(**(code **)(*ppuVar26 + 0x30))(ppuVar26);
  uStack_708 = (undefined **)0x0;
  uStack_700 = (long *)0x0;
  lStack_6f8 = 0;
  plVar18 = (long *)*plVar13;
  plVar13 = plVar13 + 1;
  if (plVar18 != plVar13) {
    do {
      lVar17 = plVar18[5];
      if (*(code **)(lVar17 + 0x38) == (code *)0x0) {
        uStack_258 = (long *)0x0;
        ppuStack_250 = (undefined **)0x0;
        func_0x048b1dc0(&uStack_258);
        plVar24 = uStack_258;
        ppuVar16 = ppuStack_250;
joined_r0x0ba03779:
        puVar11 = uStack_4f8;
        if (plVar24 == (long *)0x0) {
          plVar24 = (long *)func_0x048aead0(ppuVar16);
          puVar11 = uStack_4f8;
        }
      }
      else {
        plVar24 = *(long **)(lVar17 + 0x30);
        puVar11 = uStack_4f8;
        if (plVar24 == (long *)0x0) {
          ppuVar16 = *(undefined ***)(lVar17 + 0x28);
          (**(code **)(lVar17 + 0x38))(0,lVar17,0);
          plVar24 = *(long **)(lVar17 + 0x30);
          goto joined_r0x0ba03779;
        }
      }
      uStack_4f8._4_4_ = (undefined4)((ulong)puVar11 >> 0x20);
      ppuVar26 = *(undefined ***)(*plVar24 + 0x10);
      uStack_4f8 = puVar11;
      if ((undefined **)0xfffffffffffffff7 < ppuVar26) goto LAB_0ba05253;
      ppuVar16 = *(undefined ***)(*plVar24 + 8);
      if (ppuVar26 < (undefined **)0x17) {
        uStack_4f8._1_3_ = (undefined3)((ulong)puVar11 >> 8);
        uStack_4f8._0_4_ = CONCAT31(uStack_4f8._1_3_,(char)ppuVar26 * '\x02');
        lVar23 = (long)&uStack_4f8 + 1;
        if (ppuVar26 != (undefined **)0x0) goto LAB_0ba03814;
      }
      else {
        lVar17 = ((ulong)ppuVar26 | 7) + 1;
        if (((ulong)ppuVar26 | 7) == 0x17) {
          lVar17 = 0x1a;
        }
        lVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
        if (lVar23 == 0) {
          func_0x0eec74c0(lVar17,0);
        }
        uStack_4e8 = (undefined1)lVar23;
        uStack_4e7 = (undefined5)((ulong)lVar23 >> 8);
        uStack_4e2 = (undefined1)((ulong)lVar23 >> 0x30);
        uStack_4e1 = (undefined1)((ulong)lVar23 >> 0x38);
        uStack_4f8._0_4_ = (uint)lVar17 | 1;
        uStack_4f8._4_4_ = (undefined4)((ulong)lVar17 >> 0x20);
        uStack_4f0 = (uint)ppuVar26;
        uStack_4ec = (undefined2)((ulong)ppuVar26 >> 0x20);
        uStack_4ea = (undefined2)((ulong)ppuVar26 >> 0x30);
LAB_0ba03814:
        func_0x0eee2ee0(lVar23,ppuVar16,ppuVar26);
      }
      *(code *)((long)ppuVar26 + lVar23) = (code)0x0;
      func_0x057d8ed0(&uStack_708,&uStack_4f8);
      if (((uint)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8) & 0xfffffffffffffffe);
      }
      plVar24 = (long *)plVar18[1];
      plVar21 = plVar18;
      if ((long *)plVar18[1] == (long *)0x0) {
        do {
          plVar18 = (long *)plVar21[2];
          bVar34 = plVar21 != (long *)*plVar18;
          plVar21 = plVar18;
        } while (bVar34);
      }
      else {
        do {
          plVar18 = plVar24;
          plVar24 = (long *)*plVar18;
        } while ((long *)*plVar18 != (long *)0x0);
      }
      ppuVar26 = param_2;
      if (plVar18 == plVar13) break;
    } while( true );
  }
  uVar10 = (**(code **)(*ppuVar26 + 0x30))(ppuVar26);
  plVar13 = (long *)func_0x05f9fd40(uVar10);
  if (plVar13 == (long *)0x0) {
    puVar25 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (puVar25 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    plVar13 = uStack_258;
    uVar10 = _UNK_012b2576;
    uStack_638 = (undefined **)0x59;
    uStack_630 = (undefined **)0x53;
    *(undefined8 *)(puVar25 + 0x10) = _DAT_012b256e;
    *(undefined8 *)(puVar25 + 0x12) = uVar10;
    uVar10 = _UNK_012b2566;
    *(undefined8 *)(puVar25 + 0xc) = _DAT_012b255e;
    *(undefined8 *)(puVar25 + 0xe) = uVar10;
    uVar10 = _UNK_012b2556;
    *(undefined8 *)(puVar25 + 8) = _DAT_012b254e;
    *(undefined8 *)(puVar25 + 10) = uVar10;
    uVar10 = _UNK_012b2546;
    *(undefined8 *)(puVar25 + 4) = _DAT_012b253e;
    *(undefined8 *)(puVar25 + 6) = uVar10;
    uVar3 = _UNK_012b253a;
    uVar2 = _UNK_012b2536;
    uVar8 = _UNK_012b2532;
    *puVar25 = _DAT_012b252e;
    puVar25[1] = uVar8;
    puVar25[2] = uVar2;
    puVar25[3] = uVar3;
    *(undefined4 *)((long)puVar25 + 0x4f) = 0x2e5d7265;
    *(undefined1 *)((long)puVar25 + 0x53) = 0;
    uStack_258._7_1_ = SUB81(plVar13,7);
    uStack_258._0_7_ = (uint7)CONCAT15(DAT_013f7773,CONCAT41(_DAT_013f776f,10));
    puStack_628 = puVar25;
    func_0x0d858ce0(&uStack_4f8,&uStack_258,&uStack_638);
    *puStack_6f0 = 1;
    func_0x05e91e00(puStack_6f0 + 8,&uStack_4f8);
    func_0x048fb670(&uStack_4f8);
    func_0x0412a280(puVar25,0x58);
    plVar13 = (long *)uStack_708;
  }
  else {
    puStack_68 = &UNK_0f2f6a20;
    ppuStack_60 = ppuVar26;
    ppuStack_48 = &puStack_68;
    if (DAT_0f6c5ae0 == '\0') {
      iVar9 = func_0x04108328(&DAT_0f6c5ae0);
      if (iVar9 != 0) {
        _DAT_0f6c5ab0 = &UNK_0f2f68d0;
        _DAT_0f6c5ad0 = (long *)&DAT_0f6c5ab0;
        func_0x0eee2f40(&UNK_062619b0,&DAT_0f6c5ab0,0xf53dab8);
        func_0x0410844d(&DAT_0f6c5ae0);
      }
    }
    uVar10 = _DAT_0f543728;
    if (_DAT_0f6c5ad0 == (long *)0x0) {
      plStack_4d8 = (long *)0x0;
    }
    else if (_DAT_0f6c5ad0 == (long *)&DAT_0f6c5ab0) {
      plStack_4d8 = &uStack_4f8;
      (**(code **)(_DAT_0f6c5ab0 + 0x18))(&DAT_0f6c5ab0);
    }
    else {
      plStack_4d8 = (long *)(**(code **)(*_DAT_0f6c5ad0 + 0x10))();
    }
    (**(code **)(*plVar13 + 0x48))(plVar13,uVar10,&uStack_4f8);
    if (plStack_4d8 == &uStack_4f8) {
      lVar17 = 0x20;
LAB_0ba03a2b:
      (**(code **)(*plStack_4d8 + lVar17))();
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0ba03a19;
LAB_0ba03a45:
      pcStack_618 = (code *)0x0;
      uVar10 = _DAT_0f543728;
    }
    else {
      lVar17 = 0x28;
      if (plStack_4d8 != (long *)0x0) goto LAB_0ba03a2b;
      if (ppuStack_48 == (undefined **)0x0) goto LAB_0ba03a45;
LAB_0ba03a19:
      uVar10 = _DAT_0f543728;
      if (ppuStack_48 == &puStack_68) {
        pcStack_618 = (code *)&uStack_638;
        (**(code **)(*ppuStack_48 + 0x18))();
      }
      else {
        pcStack_618 = (code *)(**(code **)(*ppuStack_48 + 0x10))();
      }
    }
    plStack_4d8 = (long *)0x0;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    *plVar18 = (long)&UNK_0f2f69a0;
    if (pcStack_618 == (code *)0x0) {
      plVar18[6] = 0;
    }
    else if (pcStack_618 == (code *)&uStack_638) {
      plVar18[6] = (long)(plVar18 + 2);
      (**(code **)(*(long *)pcStack_618 + 0x18))();
    }
    else {
      plVar18[6] = (long)pcStack_618;
      pcStack_618 = (code *)0x0;
    }
    plStack_4d8 = plVar18;
    (**(code **)(*plVar13 + 0x88))(&uStack_258,plVar13,uVar10,&uStack_4f8);
    if (plStack_4d8 == &uStack_4f8) {
      lVar17 = 0x20;
LAB_0ba03b64:
      (**(code **)(*plStack_4d8 + lVar17))();
      if (pcStack_618 != (code *)&uStack_638) goto LAB_0ba03b3c;
LAB_0ba03b7f:
      lVar17 = 0x20;
LAB_0ba03b84:
      (**(code **)(*(long *)pcStack_618 + lVar17))();
      if (ppuStack_48 != &puStack_68) goto LAB_0ba03b53;
LAB_0ba03b97:
      lVar17 = 0x20;
LAB_0ba03b9c:
      (**(code **)(*ppuStack_48 + lVar17))();
    }
    else {
      lVar17 = 0x28;
      if (plStack_4d8 != (long *)0x0) goto LAB_0ba03b64;
      if (pcStack_618 == (code *)&uStack_638) goto LAB_0ba03b7f;
LAB_0ba03b3c:
      lVar17 = 0x28;
      if (pcStack_618 != (code *)0x0) goto LAB_0ba03b84;
      if (ppuStack_48 == &puStack_68) goto LAB_0ba03b97;
LAB_0ba03b53:
      lVar17 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto LAB_0ba03b9c;
    }
    lVar17 = func_0x05f929d0(&uStack_258);
    if (lVar17 == 0) {
      ppuVar26 = (undefined **)func_0x0620fb90(&uStack_258);
      if (ppuVar26 != param_2 + 0x20) {
        if (param_2[0x21] != (undefined *)0x0) {
          plVar18 = (long *)func_0x0412c300();
          uStack_4f0 = (uint)plVar18;
          uStack_4ec = (undefined2)((ulong)plVar18 >> 0x20);
          uStack_4ea = (undefined2)((ulong)plVar18 >> 0x30);
          if (plVar18 != (long *)0x0) {
            puVar15 = param_2[0x20];
            uStack_4f8._0_4_ = (uint)puVar15;
            uStack_4f8._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
            if (puVar15 != (undefined *)0x0) {
              (**(code **)(**(long **)(puVar15 + 0x28) + 0x10))();
            }
            LOCK();
            plVar24 = plVar18 + 1;
            lVar17 = *plVar24;
            *plVar24 = *plVar24 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              FUN_0412c2d0(plVar18);
            }
          }
        }
        uVar8 = *(undefined4 *)ppuVar26;
        uVar2 = *(undefined4 *)((long)ppuVar26 + 4);
        uVar3 = *(undefined4 *)(ppuVar26 + 1);
        uVar4 = *(undefined4 *)((long)ppuVar26 + 0xc);
        *ppuVar26 = (undefined *)0x0;
        ppuVar26[1] = (undefined *)0x0;
        puVar15 = param_2[0x21];
        *(undefined4 *)(param_2 + 0x20) = uVar8;
        *(undefined4 *)((long)param_2 + 0x104) = uVar2;
        *(undefined4 *)(param_2 + 0x21) = uVar3;
        *(undefined4 *)((long)param_2 + 0x10c) = uVar4;
        if (puVar15 != (undefined *)0x0) {
          FUN_0412c2d0();
        }
      }
      puStack_98 = &UNK_0f2f6c00;
      ppuStack_90 = param_2;
      ppuStack_78 = &puStack_98;
      if (DAT_0f6c5b20 == '\0') {
        iVar9 = func_0x04108328(&DAT_0f6c5b20);
        if (iVar9 != 0) {
          _DAT_0f6c5af0 = &UNK_0f2f6ab0;
          _DAT_0f6c5b10 = (long *)&DAT_0f6c5af0;
          func_0x0eee2f40(&UNK_062619b0,&DAT_0f6c5af0,0xf53dab8);
          func_0x0410844d(&DAT_0f6c5b20);
        }
      }
      uVar10 = _DAT_0f543748;
      if (_DAT_0f6c5b10 == (long *)0x0) {
        plStack_4d8 = (long *)0x0;
      }
      else if (_DAT_0f6c5b10 == (long *)&DAT_0f6c5af0) {
        plStack_4d8 = &uStack_4f8;
        (**(code **)(_DAT_0f6c5af0 + 0x18))(&DAT_0f6c5af0,&uStack_4f8);
      }
      else {
        plStack_4d8 = (long *)(**(code **)(*_DAT_0f6c5b10 + 0x10))();
      }
      (**(code **)(*plVar13 + 0x48))(plVar13,uVar10,&uStack_4f8);
      if (plStack_4d8 == &uStack_4f8) {
        lVar17 = 0x20;
LAB_0ba03e81:
        (**(code **)(*plStack_4d8 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (plStack_4d8 != (long *)0x0) goto LAB_0ba03e81;
      }
      uVar10 = _DAT_0f543748;
      if (ppuStack_78 == (undefined **)0x0) {
        ppuStack_388 = (undefined **)0x0;
      }
      else if (ppuStack_78 == &puStack_98) {
        ppuStack_388 = (undefined **)&uStack_3a8;
        (**(code **)(*ppuStack_78 + 0x18))();
      }
      else {
        ppuStack_388 = (undefined **)(**(code **)(*ppuStack_78 + 0x10))();
      }
      plStack_4d8 = (long *)0x0;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      *plVar18 = (long)&UNK_0f2f6b80;
      if (ppuStack_388 == (undefined **)0x0) {
        plVar18[6] = 0;
      }
      else if (ppuStack_388 == (undefined **)&uStack_3a8) {
        plVar18[6] = (long)(plVar18 + 2);
        (**(code **)(*ppuStack_388 + 0x18))();
      }
      else {
        plVar18[6] = (long)ppuStack_388;
        ppuStack_388 = (undefined **)0x0;
      }
      plStack_4d8 = plVar18;
      (**(code **)(*plVar13 + 0x88))(&uStack_638,plVar13,uVar10,&uStack_4f8);
      if (plStack_4d8 == &uStack_4f8) {
        lVar17 = 0x20;
LAB_0ba03f91:
        (**(code **)(*plStack_4d8 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (plStack_4d8 != (long *)0x0) goto LAB_0ba03f91;
      }
      if (ppuStack_388 == (undefined **)&uStack_3a8) {
        lVar17 = 0x20;
LAB_0ba03fbd:
        (**(code **)(*ppuStack_388 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (ppuStack_388 != (undefined **)0x0) goto LAB_0ba03fbd;
      }
      if (ppuStack_78 == &puStack_98) {
        lVar17 = 0x20;
LAB_0ba03fe1:
        (**(code **)(*ppuStack_78 + lVar17))();
      }
      else {
        lVar17 = 0x28;
        if (ppuStack_78 != (undefined **)0x0) goto LAB_0ba03fe1;
      }
      lVar17 = func_0x05f929d0(&uStack_638);
      if (lVar17 == 0) {
        ppuVar26 = (undefined **)func_0x0620fb90(&uStack_638);
        if (ppuVar26 != param_2 + 0x22) {
          if (param_2[0x23] != (undefined *)0x0) {
            plVar18 = (long *)func_0x0412c300();
            uStack_4f0 = (uint)plVar18;
            uStack_4ec = (undefined2)((ulong)plVar18 >> 0x20);
            uStack_4ea = (undefined2)((ulong)plVar18 >> 0x30);
            if (plVar18 != (long *)0x0) {
              puVar15 = param_2[0x22];
              uStack_4f8._0_4_ = (uint)puVar15;
              uStack_4f8._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
              if (puVar15 != (undefined *)0x0) {
                (**(code **)(**(long **)(puVar15 + 0x28) + 0x10))();
              }
              LOCK();
              plVar24 = plVar18 + 1;
              lVar17 = *plVar24;
              *plVar24 = *plVar24 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                FUN_0412c2d0(plVar18);
              }
            }
          }
          uVar8 = *(undefined4 *)ppuVar26;
          uVar2 = *(undefined4 *)((long)ppuVar26 + 4);
          uVar3 = *(undefined4 *)(ppuVar26 + 1);
          uVar4 = *(undefined4 *)((long)ppuVar26 + 0xc);
          *ppuVar26 = (undefined *)0x0;
          ppuVar26[1] = (undefined *)0x0;
          puVar15 = param_2[0x23];
          *(undefined4 *)(param_2 + 0x22) = uVar8;
          *(undefined4 *)((long)param_2 + 0x114) = uVar2;
          *(undefined4 *)(param_2 + 0x23) = uVar3;
          *(undefined4 *)((long)param_2 + 0x11c) = uVar4;
          if (puVar15 != (undefined *)0x0) {
            FUN_0412c2d0();
          }
        }
        puStack_c8 = &UNK_0f2f6de0;
        ppuStack_c0 = param_2;
        ppuStack_a8 = &puStack_c8;
        if (DAT_0f6c5b60 == '\0') {
          iVar9 = func_0x04108328(&DAT_0f6c5b60);
          if (iVar9 != 0) {
            _DAT_0f6c5b30 = &UNK_0f2f6c90;
            _DAT_0f6c5b50 = (long *)&DAT_0f6c5b30;
            func_0x0eee2f40(&UNK_062619b0,&DAT_0f6c5b30,0xf53dab8);
            func_0x0410844d(&DAT_0f6c5b60);
          }
        }
        uVar10 = _DAT_0f543758;
        if (_DAT_0f6c5b50 == (long *)0x0) {
          plStack_4d8 = (long *)0x0;
        }
        else if (_DAT_0f6c5b50 == (long *)&DAT_0f6c5b30) {
          plStack_4d8 = &uStack_4f8;
          (**(code **)(_DAT_0f6c5b30 + 0x18))(&DAT_0f6c5b30,&uStack_4f8);
        }
        else {
          plStack_4d8 = (long *)(**(code **)(*_DAT_0f6c5b50 + 0x10))();
        }
        (**(code **)(*plVar13 + 0x48))(plVar13,uVar10,&uStack_4f8);
        if (plStack_4d8 == &uStack_4f8) {
          lVar17 = 0x20;
LAB_0ba047ac:
          (**(code **)(*plStack_4d8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (plStack_4d8 != (long *)0x0) goto LAB_0ba047ac;
        }
        uVar10 = _DAT_0f543758;
        if (ppuStack_a8 == (undefined **)0x0) {
          puStack_6a8 = (uint *)0x0;
        }
        else if (ppuStack_a8 == &puStack_c8) {
          puStack_6a8 = &uStack_6c8;
          (**(code **)(*ppuStack_a8 + 0x18))();
        }
        else {
          puStack_6a8 = (uint *)(**(code **)(*ppuStack_a8 + 0x10))();
        }
        plStack_4d8 = (long *)0x0;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (plVar18 == (long *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        *plVar18 = (long)&UNK_0f2f6d60;
        if (puStack_6a8 == (uint *)0x0) {
          plVar18[6] = 0;
        }
        else if (puStack_6a8 == &uStack_6c8) {
          plVar18[6] = (long)(plVar18 + 2);
          (**(code **)(*(long *)puStack_6a8 + 0x18))();
        }
        else {
          plVar18[6] = (long)puStack_6a8;
          puStack_6a8 = (uint *)0x0;
        }
        plStack_4d8 = plVar18;
        (**(code **)(*plVar13 + 0x88))(&uStack_3a8,plVar13,uVar10,&uStack_4f8);
        if (plStack_4d8 == &uStack_4f8) {
          lVar17 = 0x20;
LAB_0ba048bc:
          (**(code **)(*plStack_4d8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (plStack_4d8 != (long *)0x0) goto LAB_0ba048bc;
        }
        if (puStack_6a8 == &uStack_6c8) {
          lVar17 = 0x20;
LAB_0ba048e8:
          (**(code **)(*(long *)puStack_6a8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (puStack_6a8 != (uint *)0x0) goto LAB_0ba048e8;
        }
        ppuVar26 = ppuStack_260;
        if (ppuStack_a8 == &puStack_c8) {
          lVar17 = 0x20;
LAB_0ba0491c:
          (**(code **)(*ppuStack_a8 + lVar17))();
        }
        else {
          lVar17 = 0x28;
          if (ppuStack_a8 != (undefined **)0x0) goto LAB_0ba0491c;
        }
        lVar17 = func_0x05f929d0(&uStack_3a8);
        if (lVar17 == 0) {
          ppuVar16 = (undefined **)func_0x0620fb90(&uStack_3a8);
          if (ppuVar16 != param_2 + 0x24) {
            func_0x0edfa340();
            uVar8 = *(undefined4 *)ppuVar16;
            uVar2 = *(undefined4 *)((long)ppuVar16 + 4);
            uVar3 = *(undefined4 *)(ppuVar16 + 1);
            uVar4 = *(undefined4 *)((long)ppuVar16 + 0xc);
            *ppuVar16 = (undefined *)0x0;
            ppuVar16[1] = (undefined *)0x0;
            puVar15 = param_2[0x25];
            *(undefined4 *)(param_2 + 0x24) = uVar8;
            *(undefined4 *)((long)param_2 + 0x124) = uVar2;
            *(undefined4 *)(param_2 + 0x25) = uVar3;
            *(undefined4 *)((long)param_2 + 300) = uVar4;
            if (puVar15 != (undefined *)0x0) {
              FUN_0412c2d0();
            }
          }
          if (ppuStack_388 != (undefined **)0x0) {
            (*(code *)ppuStack_388)(&uStack_3a0);
          }
          if (pcStack_618 != (code *)0x0) {
            (*pcStack_618)(&uStack_630);
          }
          puVar11 = uStack_4f8;
          if (ppuStack_238 != (undefined **)0x0) {
            (*(code *)ppuStack_238)(&ppuStack_250);
            puVar11 = uStack_4f8;
          }
          uStack_4f8._4_4_ = (undefined4)((ulong)puVar11 >> 0x20);
          uStack_4f8._0_4_ = *(uint *)ppuVar26;
          if ((uint)uStack_4f8 != 2) {
            *(undefined4 *)(param_2 + 0x1e) = 2;
            func_0x05f97ac0(param_2 + 0x16,&uStack_4f8,ppuVar26);
            puVar11 = (undefined8 *)CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8);
          }
          uVar10 = auStack_108[0];
          *puStack_6f0 = auStack_110[0];
          *(undefined8 *)(puStack_6f0 + 8) = 0;
          *(undefined4 *)(puStack_6f0 + 0x18) = uStack_f8;
          *(undefined4 *)(puStack_6f0 + 0x1c) = uStack_f4;
          *(undefined4 *)(puStack_6f0 + 0x20) = uStack_f0;
          *(undefined4 *)(puStack_6f0 + 0x24) = uStack_ec;
          *(undefined4 *)(puStack_6f0 + 0x28) = uStack_e8;
          puStack_6f0[0x2c] = cStack_e4;
          if (cStack_e4 != '\0') {
            if (cStack_e4 == '\x02') {
              uStack_4f8 = puVar11;
              (*(code *)CONCAT44(uStack_f4,uStack_f8))(5,auStack_108);
              puVar11 = uStack_4f8;
            }
            else {
              auStack_108[0] = 0;
              *(undefined8 *)(puStack_6f0 + 8) = uVar10;
            }
          }
          uVar10 = uStack_d0;
          uVar8 = (undefined4)uStack_d8;
          uVar2 = uStack_d8._4_4_;
          uStack_d8 = 0;
          *(undefined4 *)(puStack_6f0 + 0x30) = uStack_e0;
          *(undefined4 *)(puStack_6f0 + 0x34) = uStack_dc;
          *(undefined4 *)(puStack_6f0 + 0x38) = uVar8;
          *(undefined4 *)(puStack_6f0 + 0x3c) = uVar2;
          uStack_d0 = 0;
          *(undefined8 *)(puStack_6f0 + 0x40) = uVar10;
          plVar13 = (long *)uStack_708;
          uStack_4f8 = puVar11;
        }
        else {
          func_0x0d859380(&uStack_4f8,lVar17);
          bVar34 = ((ulong)uStack_4f8 & 1) != 0;
          lVar17 = (long)&uStack_4f8 + 1;
          if (bVar34) {
            lVar17 = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8)));
          }
          uVar22 = (ulong)uStack_4f8 >> 1 & 0x7f;
          if (bVar34) {
            uVar22 = CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
          }
          uStack_6c8 = (uint)lVar17;
          uStack_6c4 = (undefined1)((ulong)lVar17 >> 0x20);
          uStack_6c3 = (undefined1)((ulong)lVar17 >> 0x28);
          uStack_6c2 = (undefined1)((ulong)lVar17 >> 0x30);
          uStack_6c1 = (undefined1)((ulong)lVar17 >> 0x38);
          uStack_6c0 = (uint)uVar22;
          uStack_6bc = (undefined4)(uVar22 >> 0x20);
          func_0x0470d9a0(&ppuStack_6e8,&UNK_01334ef7,0x35,0xd,&uStack_6c8);
          if (((ulong)uStack_4f8 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))
                                    ),(ulong)uStack_4f8 & 0xfffffffffffffffe);
          }
          uStack_6c8._1_3_ = (undefined3)_DAT_013f776f;
          uStack_6c8 = CONCAT31(uStack_6c8._1_3_,10);
          uStack_6c4 = (undefined1)((uint)_DAT_013f776f >> 0x18);
          uStack_6c3 = DAT_013f7773;
          uStack_6c2 = 0;
          func_0x0d858ce0(&uStack_4f8,&uStack_6c8,&ppuStack_6e8);
          *puStack_6f0 = 1;
          func_0x05e91e00(puStack_6f0 + 8,&uStack_4f8);
          func_0x048fb670(&uStack_4f8);
          if (((ulong)ppuStack_6e8 & 1) != 0) {
            func_0x0412a280(uStack_6d8,(ulong)ppuStack_6e8 & 0xfffffffffffffffe);
          }
          if (ppuStack_388 != (undefined **)0x0) {
            (*(code *)ppuStack_388)(&uStack_3a0);
          }
          if (pcStack_618 != (code *)0x0) {
            (*pcStack_618)(&uStack_630);
          }
          plVar13 = (long *)uStack_708;
          if (ppuStack_238 != (undefined **)0x0) {
            (*(code *)ppuStack_238)(&ppuStack_250);
            plVar13 = (long *)uStack_708;
          }
        }
      }
      else {
        func_0x0d859380(&uStack_4f8,lVar17);
        bVar34 = ((ulong)uStack_4f8 & 1) != 0;
        lVar17 = (long)&uStack_4f8 + 1;
        if (bVar34) {
          lVar17 = CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8)));
        }
        uVar22 = (ulong)uStack_4f8 >> 1 & 0x7f;
        if (bVar34) {
          uVar22 = CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
        }
        uStack_3a8._0_1_ = (byte)lVar17;
        uStack_3a8._1_4_ = (undefined4)((ulong)lVar17 >> 8);
        uStack_3a8._5_1_ = (undefined1)((ulong)lVar17 >> 0x28);
        uStack_3a8._6_1_ = (undefined1)((ulong)lVar17 >> 0x30);
        uStack_3a8._7_1_ = (undefined1)((ulong)lVar17 >> 0x38);
        uStack_3a0 = (undefined1)uVar22;
        uStack_39f = (undefined5)(uVar22 >> 8);
        uStack_39a = (undefined2)(uVar22 >> 0x30);
        func_0x0470d9a0(&uStack_6c8,&UNK_013a0625,0x44,0xd,&uStack_3a8);
        if (((ulong)uStack_4f8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                          (ulong)uStack_4f8 & 0xfffffffffffffffe);
        }
        uStack_3a8._0_1_ = 10;
        uStack_3a8._1_4_ = _DAT_013f776f;
        uStack_3a8._5_1_ = DAT_013f7773;
        uStack_3a8._6_1_ = 0;
        func_0x0d858ce0(&uStack_4f8,&uStack_3a8,&uStack_6c8);
        *puStack_6f0 = 1;
        func_0x05e91e00(puStack_6f0 + 8,&uStack_4f8);
        func_0x048fb670(&uStack_4f8);
        if ((uStack_6c8 & 1) != 0) {
          func_0x0412a280(CONCAT26(uStack_6b2,CONCAT15(uStack_6b3,CONCAT41(uStack_6b7,uStack_6b8))),
                          CONCAT17(uStack_6c1,
                                   CONCAT16(uStack_6c2,
                                            CONCAT15(uStack_6c3,CONCAT14(uStack_6c4,uStack_6c8)))) &
                          0xfffffffffffffffe);
        }
        if (pcStack_618 != (code *)0x0) {
          (*pcStack_618)(&uStack_630);
        }
        plVar13 = (long *)uStack_708;
        if (ppuStack_238 != (undefined **)0x0) {
          (*(code *)ppuStack_238)(&ppuStack_250);
          plVar13 = (long *)uStack_708;
        }
      }
    }
    else {
      func_0x0d859380(&uStack_4f8,lVar17);
      bVar34 = ((ulong)uStack_4f8 & 1) != 0;
      uStack_638 = (undefined **)((long)&uStack_4f8 + 1);
      if (bVar34) {
        uStack_638 = (undefined **)
                     CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8)));
      }
      uStack_630 = (undefined **)((ulong)uStack_4f8 >> 1 & 0x7f);
      if (bVar34) {
        uStack_630 = (undefined **)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,uStack_4f0));
      }
      func_0x0470d9a0(&uStack_3a8,&UNK_0140795f,0x31,0xd,&uStack_638);
      if (((ulong)uStack_4f8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_4e1,CONCAT16(uStack_4e2,CONCAT51(uStack_4e7,uStack_4e8))),
                        (ulong)uStack_4f8 & 0xfffffffffffffffe);
      }
      lVar17 = (long)uStack_638;
      uStack_638._0_5_ = CONCAT41(_DAT_013f776f,10);
      uStack_638._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_638);
      uStack_638._7_1_ = SUB81(lVar17,7);
      uStack_638._0_7_ = (uint7)(uint6)uStack_638;
      func_0x0d858ce0(&uStack_4f8,&uStack_638,&uStack_3a8);
      *puStack_6f0 = 1;
      func_0x05e91e00(puStack_6f0 + 8,&uStack_4f8);
      func_0x048fb670(&uStack_4f8);
      if (((byte)uStack_3a8 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_391,CONCAT16(uStack_392,CONCAT51(uStack_397,uStack_398))),
                        CONCAT17(uStack_3a8._7_1_,
                                 CONCAT16(uStack_3a8._6_1_,
                                          CONCAT15(uStack_3a8._5_1_,
                                                   CONCAT41(uStack_3a8._1_4_,(byte)uStack_3a8)))) &
                        0xfffffffffffffffe);
      }
      plVar13 = (long *)uStack_708;
      if (ppuStack_238 != (undefined **)0x0) {
        (*(code *)ppuStack_238)(&ppuStack_250);
        plVar13 = (long *)uStack_708;
      }
    }
  }
  uStack_708 = (undefined **)plVar13;
  plVar18 = uStack_700;
  if (plVar13 != (long *)0x0) {
    for (; plVar13 != plVar18; plVar18 = plVar18 + -3) {
      if ((*(byte *)(plVar18 + -3) & 1) != 0) {
        func_0x0412a280(plVar18[-1],plVar18[-3] & 0xfffffffffffffffe);
      }
    }
    uStack_700 = plVar13;
    func_0x0412a280(uStack_708,lStack_6f8 - (long)uStack_708);
  }
LAB_0ba04aef:
  if (ppuStack_738 != (undefined **)0x0) {
    for (; ppuStack_738 != ppuStack_730; ppuStack_730 = ppuStack_730 + -1) {
      plVar13 = (long *)ppuStack_730[-1];
      ppuStack_730[-1] = (undefined *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    func_0x0412a280(ppuStack_738,(long)ppuStack_728 - (long)ppuStack_738);
  }
  if ((code *)CONCAT44(uStack_ec,uStack_f0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_ec,uStack_f0))(auStack_108);
  }
  return puStack_6f0;
LAB_0ba05253:
  FUN_04882e30();
LAB_0ba05258:
  iVar9 = func_0x04108328(&DAT_0f774768);
  if (iVar9 != 0) {
    func_0x0ed58ba0(0xf7746f8);
    func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
    func_0x0410844d(&DAT_0f774768);
    ppuVar16 = (undefined **)0x1fffffffffffffff;
    ppuVar26 = param_2;
  }
  goto LAB_0b9fe0a8;
}



/* ---- referenced strings ----
 * 0x12b252e  Failed to register for mode changed network payloads [No Payload Service Provider].
 * 0x12b253e  er for mode changed network payloads [No Payload Service Provider].
 * 0x12b254e  ged network payloads [No Payload Service Provider].
 * 0x12b255e  oads [No Payload Service Provider].
 * 0x12b256e   Service Provider].
 * 0x1319ebb  ServerHelloRpcExample
 * 0x1319ed1  ServerHelloRpcModule
 * 0x13f776f  Error
 */
