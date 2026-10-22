/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb20590 (ELF vaddr 0xca20590)
 * Label: caller-of-callee
 * Body:  [[0cb20590, 0cb23fdb] [0cb23fe0, 0cb2401a] [0cb24020, 0cb24044] [0cb24050, 0cb24082] [0cb24090, 0cb2451a] [0cb24809, 0cb24817] [0cb2484d, 0cb2485e] [0cb248ed, 0cb2492d] [0cb24aac, 0cb24b5c]]
 * Ghidra: FUN_0cb20590
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb20590(undefined4 *param_1,long *****param_2,uint *param_3,undefined4 param_4,
                 long *******param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  long ****pppplVar4;
  long ******pppppplVar5;
  long ****pppplVar6;
  code *pcVar7;
  ushort uVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  char cVar17;
  int iVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  long *****ppppplVar22;
  long ******pppppplVar23;
  long lVar24;
  long lVar25;
  long *******ppppppplVar26;
  byte *pbVar27;
  uint *puVar28;
  long *******ppppppplVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *******ppppppplVar32;
  long ***ppplVar33;
  long ***ppplVar34;
  ulong uVar35;
  int *piVar36;
  undefined4 *puVar37;
  long ****pppplVar38;
  undefined8 *******pppppppuVar39;
  byte *pbVar40;
  long *****ppppplVar41;
  long *******ppppppplVar42;
  byte *pbVar43;
  long ******pppppplVar44;
  long *****ppppplVar45;
  long ****pppplVar46;
  bool bVar47;
  long *****ppppplStack_868;
  long *****ppppplStack_860;
  long *****ppppplStack_858;
  long *******ppppppplStack_848;
  undefined4 *puStack_840;
  short sStack_838;
  short sStack_836;
  short sStack_834;
  undefined2 uStack_832;
  long *****ppppplStack_830;
  long *****ppppplStack_828;
  long ******pppppplStack_820;
  long ****pppplStack_818;
  long *****ppppplStack_810;
  long ****pppplStack_808;
  long *****ppppplStack_800;
  long ******pppppplStack_7f8;
  long ******pppppplStack_7f0;
  long ******pppppplStack_7e8;
  undefined8 uStack_7e0;
  long *******ppppppplStack_7d8;
  long *****ppppplStack_7d0;
  undefined8 *puStack_7c8;
  long *plStack_7c0;
  undefined8 uStack_7b8;
  undefined *puStack_7b0;
  code *pcStack_7a8;
  undefined4 uStack_7a0;
  undefined1 uStack_79c;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined4 uStack_750;
  undefined1 uStack_74c;
  long ****pppplStack_748;
  long *****ppppplStack_740;
  long ****pppplStack_738;
  long *****ppppplStack_730;
  long *******ppppppplStack_728;
  ulong uStack_720;
  long ******pppppplStack_718;
  long ******pppppplStack_710;
  long ******pppppplStack_708;
  undefined8 uStack_700;
  long *******ppppppplStack_6f8;
  long *****ppppplStack_6f0;
  undefined8 *puStack_6e8;
  undefined1 uStack_6e0;
  undefined7 uStack_6df;
  undefined1 uStack_6d8;
  undefined1 uStack_6d7;
  short sStack_6d6;
  short sStack_6d4;
  undefined2 uStack_6d2;
  uint uStack_6d0;
  uint uStack_6cc;
  long *****ppppplStack_6c8;
  undefined1 uStack_6c0;
  undefined1 uStack_6bc;
  undefined1 uStack_6b8;
  undefined1 uStack_6b4;
  undefined1 uStack_6b0;
  undefined1 uStack_6ac;
  undefined1 uStack_6a8;
  undefined1 uStack_6a4;
  undefined2 uStack_6a0;
  undefined1 uStack_69c;
  uint5 uStack_698;
  undefined3 uStack_693;
  undefined1 uStack_690;
  undefined1 uStack_688;
  short sStack_686;
  undefined2 uStack_684;
  undefined1 uStack_680;
  undefined1 uStack_67c;
  undefined1 uStack_678;
  undefined1 uStack_670;
  undefined1 uStack_66c;
  undefined1 uStack_660;
  undefined1 uStack_65c;
  undefined1 uStack_658;
  undefined1 uStack_654;
  undefined1 uStack_650;
  undefined1 uStack_64c;
  undefined1 uStack_648;
  undefined4 uStack_644;
  byte bStack_640;
  undefined7 uStack_63f;
  undefined8 uStack_630;
  char cStack_628;
  char cStack_608;
  undefined2 uStack_600;
  byte bStack_5fe;
  undefined1 uStack_5fd;
  uint uStack_5fc;
  undefined1 uStack_5f8;
  undefined1 uStack_5f7;
  undefined2 uStack_5f6;
  byte bStack_5f4;
  uint uStack_5e8;
  uint uStack_5e4;
  uint uStack_5e0;
  uint uStack_5dc;
  undefined8 uStack_5d8;
  long *****ppppplStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  ulong uStack_5b0;
  long *****ppppplStack_5a8;
  long *****ppppplStack_5a0;
  long *****ppppplStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined8 uStack_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined4 uStack_560;
  byte bStack_55c;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long *******ppppppplStack_548;
  long ****pppplStack_540;
  undefined8 uStack_538;
  long ****pppplStack_530;
  ulong uStack_528;
  undefined8 *******apppppppuStack_520 [3];
  code *pcStack_508;
  int iStack_500;
  char cStack_4fc;
  long *****ppppplStack_4f8;
  long *****ppppplStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  byte bStack_4ac;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined2 uStack_480;
  uint6 uStack_47e;
  ulong uStack_478;
  long *******ppppppplStack_470;
  long ******pppppplStack_468;
  long ******pppppplStack_460;
  long ******pppppplStack_458;
  int iStack_450;
  char cStack_44c;
  undefined1 auStack_448 [76];
  byte bStack_3fc;
  long ******pppppplStack_3f8;
  long ******pppppplStack_3f0;
  long ******pppppplStack_3e8;
  long ******pppppplStack_3e0;
  long *******ppppppplStack_3d8;
  long *****ppppplStack_3d0;
  undefined8 *puStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  long *****ppppplStack_3b0;
  long *****appppplStack_3a8 [6];
  undefined8 *puStack_378;
  undefined1 uStack_368;
  undefined2 uStack_366;
  undefined1 uStack_364;
  byte abStack_356 [2];
  uint uStack_354;
  undefined8 uStack_350;
  uint uStack_348;
  undefined1 auStack_340 [88];
  long *****ppppplStack_2e8;
  long *****ppppplStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  byte bStack_29c;
  uint *puStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_228 [80];
  long *****ppppplStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_188;
  undefined8 uStack_158;
  long ******pppppplStack_148;
  long ******pppppplStack_140;
  ulong uStack_138;
  long ******pppppplStack_130;
  long ******pppppplStack_128;
  long *******ppppppplStack_120;
  long *****ppppplStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pppppplStack_820 = (long ******)CONCAT44(pppppplStack_820._4_4_,param_4);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0x400;
  uStack_98 = 0;
  uStack_90 = 0;
  ppppppplStack_848 = param_5;
  puStack_298 = param_3;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar19 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  *puVar19 = 0;
  puVar19[1] = 0x10000;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[4] = 0;
  pppplStack_748 = (long ****)*param_6;
  ppppplStack_740 = (long *****)param_6[1];
  if (param_6[1] != 0) {
    LOCK();
    plVar20 = (long *)(param_6[1] + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  pppplStack_738 = (long ****)param_6[2];
  ppppplStack_800 = param_2;
  puStack_d8 = puVar19;
  puStack_d0 = puVar19;
  func_0x05d54750(&pppppplStack_718,&UNK_0f0863e8);
  ppppplStack_1d8 = (long *****)0x0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_1c0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  plStack_188 = (long *)0x0;
  uStack_158 = 0;
  pppppplStack_148 = pppppplStack_718;
  pppppplStack_140 = (long ******)0x0;
  pppppplVar44 = pppppplStack_710;
  if (((ulong)pppppplStack_710 >> 0x37 & 1) != 0) {
    uVar35 = (ulong)pppppplStack_710 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    pppppplVar44 = (long ******)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_138 = 0;
  pppppplStack_140 = pppppplVar44;
  if (((ulong)pppppplStack_708 & 0x80000000000000) == 0) {
    uStack_138 = (ulong)pppppplStack_708;
    pppppplStack_130 = (long ******)0x0;
    pppppplStack_128 = (long ******)0x0;
    ppppppplStack_120 = (long *******)0x0;
    ppppplStack_118 = (long *****)0x0;
    puStack_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    lStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    uVar35 = (ulong)pppppplStack_708 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    uStack_138 = (ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    lStack_100 = 0;
    uStack_f8 = 0;
    puStack_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    ppppppplStack_120 = (long *******)0x0;
    ppppplStack_118 = (long *****)0x0;
    pppppplStack_130 = (long ******)0x0;
    pppppplStack_128 = (long ******)0x0;
    uStack_f0 = 0;
    if (((ulong)pppppplStack_708 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppplStack_708 & 0xff00ffffffffffff) - 8);
    }
  }
  pppppplStack_708 = (long ******)0x0;
  if (((ulong)pppppplStack_710 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppplStack_710 & 0xff00ffffffffffff) - 8);
  }
  pppppplVar44 = pppppplStack_128;
  pppppplStack_130 = (long ******)0x0;
  pppppplStack_128 = (long ******)0x0;
  if (pppppplVar44 != (long ******)0x0) {
    LOCK();
    plVar20 = (long *)(pppppplVar44 + 1);
    lVar24 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)((long)*pppppplVar44 + 0x10))(pppppplVar44);
      func_0x0412c2d0(pppppplVar44);
    }
  }
  pppppplVar23 = pppppplStack_128;
  ppppppplStack_120 = (long *******)0x0;
  pppppplStack_130 = ppppppplStack_848[1];
  pppppplVar44 = ppppppplStack_848[2];
  if (pppppplVar44 != (long ******)0x0) {
    LOCK();
    pppppplVar44[1] = (long *****)((long)pppppplVar44[1] + 1);
    UNLOCK();
  }
  if (pppppplStack_128 != (long ******)0x0) {
    LOCK();
    plVar20 = (long *)(pppppplStack_128 + 1);
    lVar24 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = (long)*pppppplStack_128;
      pppppplStack_128 = pppppplVar44;
      (**(code **)(lVar24 + 0x10))(pppppplVar23);
      func_0x0412c2d0(pppppplVar23);
      pppppplVar44 = pppppplStack_128;
    }
  }
  pppppplStack_128 = pppppplVar44;
  ppppplVar41 = ppppplStack_118;
  if (pppppplStack_130 != (long ******)0x0) {
    ppppppplStack_120 = ppppppplStack_848;
  }
  pppplStack_818 = pppplStack_748;
  ppppplStack_810 = ppppplStack_740;
  if (ppppplStack_740 == (long *****)0x0) {
    uStack_498 = (long *****)0x0;
  }
  else {
    LOCK();
    ppppplStack_740[1] = (long ****)((long)ppppplStack_740[1] + 1);
    UNLOCK();
    uStack_498 = ppppplStack_740;
    LOCK();
    ppppplStack_740[1] = (long ****)((long)ppppplStack_740[1] + 1);
    UNLOCK();
  }
  uStack_4a0 = pppplStack_748;
  pppplStack_808 = pppplStack_738;
  uStack_4a8._0_4_ = CONCAT22(uStack_4a8._2_2_,(short)pppppplStack_820);
  uStack_490 = pppplStack_738;
  uStack_488 = (long ****)0x0;
  uStack_480 = 0x100;
  if (ppppplStack_118 == (long *****)0x0) {
    ppppplVar41 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (ppppplVar41 == (long *****)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    ppppplVar22 = ppppplStack_118;
    *(undefined2 *)ppppplVar41 = (undefined2)uStack_4a8;
    ppppplVar41[1] = uStack_4a0;
    ppppplVar41[2] = (long ****)uStack_498;
    uStack_4a0 = (long ****)0x0;
    uStack_498 = (long *****)0x0;
    ppppplVar41[3] = uStack_490;
    uStack_490 = (long ****)0x0;
    *(undefined2 *)(ppppplVar41 + 5) = uStack_480;
    ppppplVar41[4] = uStack_488;
    if (ppppplStack_118 != (long *****)0x0) {
      pppplVar4 = ppppplStack_118[2];
      ppppplStack_118[1] = (long ****)0x0;
      ppppplStack_118[2] = (long ****)0x0;
      ppppplStack_118 = ppppplVar41;
      if (pppplVar4 != (long ****)0x0) {
        LOCK();
        pppplVar6 = pppplVar4 + 1;
        ppplVar33 = *pppplVar6;
        *pppplVar6 = (long ***)((long)*pppplVar6 + -1);
        UNLOCK();
        if (ppplVar33 == (long ***)0x0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
          func_0x0412c2d0(pppplVar4);
        }
        pppplVar4 = ppppplVar22[2];
        ppppplVar22[3] = (long ****)0x0;
        if (pppplVar4 != (long ****)0x0) {
          LOCK();
          pppplVar6 = pppplVar4 + 1;
          ppplVar33 = *pppplVar6;
          *pppplVar6 = (long ***)((long)*pppplVar6 + -1);
          UNLOCK();
          if (ppplVar33 == (long ***)0x0) {
            (*(code *)(*pppplVar4)[2])(pppplVar4);
            func_0x0412c2d0(pppplVar4);
          }
        }
      }
      func_0x0412a280(ppppplVar22,0x30);
      ppppplVar41 = ppppplStack_118;
    }
  }
  else {
    *(short *)ppppplStack_118 = (short)pppppplStack_820;
    if (ppppplStack_118 != (long *****)&uStack_4a8) {
      pppplVar4 = ppppplStack_118[2];
      ppppplStack_118[1] = (long ****)0x0;
      ppppplStack_118[2] = (long ****)0x0;
      if (pppplVar4 != (long ****)0x0) {
        LOCK();
        pppplVar6 = pppplVar4 + 1;
        ppplVar33 = *pppplVar6;
        *pppplVar6 = (long ***)((long)*pppplVar6 + -1);
        UNLOCK();
        if (ppplVar33 == (long ***)0x0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
          func_0x0412c2d0(pppplVar4);
        }
      }
      ppppplVar41[3] = (long ****)0x0;
      uVar1 = (undefined4)uStack_4a0;
      uVar13 = uStack_4a0._4_4_;
      uVar14 = (undefined4)uStack_498;
      uVar15 = uStack_498._4_4_;
      uStack_4a0 = (long ****)0x0;
      uStack_498 = (long *****)0x0;
      pppplVar4 = ppppplVar41[2];
      *(undefined4 *)(ppppplVar41 + 1) = uVar1;
      *(undefined4 *)((long)ppppplVar41 + 0xc) = uVar13;
      *(undefined4 *)(ppppplVar41 + 2) = uVar14;
      *(undefined4 *)((long)ppppplVar41 + 0x14) = uVar15;
      if (pppplVar4 != (long ****)0x0) {
        LOCK();
        pppplVar6 = pppplVar4 + 1;
        ppplVar33 = *pppplVar6;
        *pppplVar6 = (long ***)((long)*pppplVar6 + -1);
        UNLOCK();
        if (ppplVar33 == (long ***)0x0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
          func_0x0412c2d0(pppplVar4);
        }
      }
      ppppplVar41[3] = uStack_490;
      uStack_490 = (long ****)0x0;
    }
    *(undefined2 *)(ppppplVar41 + 5) = uStack_480;
    ppppplVar41[4] = uStack_488;
    ppppplVar41 = ppppplStack_118;
  }
  ppppplStack_118 = ppppplVar41;
  ppppplVar41 = uStack_498;
  uStack_4a0 = (long ****)0x0;
  uStack_498 = (long *****)0x0;
  if (ppppplVar41 == (long *****)0x0) {
    uStack_490 = (long ****)0x0;
  }
  else {
    LOCK();
    ppppplVar22 = ppppplVar41 + 1;
    pppplVar4 = *ppppplVar22;
    *ppppplVar22 = (long ****)((long)*ppppplVar22 + -1);
    UNLOCK();
    if (pppplVar4 == (long ****)0x0) {
      (*(code *)(*ppppplVar41)[2])(ppppplVar41);
      func_0x0412c2d0(ppppplVar41);
    }
    plVar20 = (long *)uStack_498;
    uStack_490 = (long ****)0x0;
    if (uStack_498 != (long *****)0x0) {
      LOCK();
      plVar21 = (long *)(uStack_498 + 1);
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_498 + 0x10))(uStack_498);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  ppppplVar41 = ppppplStack_810;
  pppplStack_818 = (long ****)0x0;
  ppppplStack_810 = (long *****)0x0;
  if (ppppplVar41 == (long *****)0x0) {
    pppplStack_808 = (long ****)0x0;
  }
  else {
    LOCK();
    ppppplVar22 = ppppplVar41 + 1;
    pppplVar4 = *ppppplVar22;
    *ppppplVar22 = (long ****)((long)*ppppplVar22 + -1);
    UNLOCK();
    if (pppplVar4 == (long ****)0x0) {
      (*(code *)(*ppppplVar41)[2])(ppppplVar41);
      func_0x0412c2d0(ppppplVar41);
    }
    ppppplVar41 = ppppplStack_810;
    pppplStack_808 = (long ****)0x0;
    if (ppppplStack_810 != (long *****)0x0) {
      LOCK();
      plVar20 = (long *)(ppppplStack_810 + 1);
      lVar24 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*ppppplStack_810 + 0x10))(ppppplStack_810);
        func_0x0412c2d0(ppppplVar41);
      }
    }
  }
  ppppppplVar42 = ppppppplStack_120;
  pppppplVar23 = pppppplStack_128;
  pppppplVar44 = pppppplStack_130;
  ppppplStack_5c8 = (long *****)0x1003200130001;
  puStack_5c0 = &UNK_01254d89;
  uStack_5b0 = 0;
  puStack_5b8 = &UNK_01254d89;
  uStack_720 = 0;
  pppppplStack_7f8 = &ppppplStack_1d8;
  pppppplStack_7e8 = pppppplStack_130;
  uStack_7e0 = pppppplStack_128;
  if (pppppplStack_128 != (long ******)0x0) {
    LOCK();
    pppppplStack_128[1] = (long *****)((long)pppppplStack_128[1] + 1);
    UNLOCK();
  }
  ppppppplStack_7d8 = ppppppplStack_120;
  puStack_840 = param_1;
  pppppplStack_7f0 = (long ******)&pppppplStack_148;
  if ((ppppplStack_118 == (long *****)0x0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_011ff5bb),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppppplStack_7d0 = ppppplStack_118;
  if (puStack_110 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = 0;
    puStack_110 = puVar19;
  }
  pppplVar6 = pppplStack_738;
  ppppplVar41 = ppppplStack_740;
  pppplVar4 = pppplStack_748;
  plStack_7c0 = &lStack_100;
  pppppplStack_3f8 = pppppplStack_7f8;
  pppppplStack_3f0 = pppppplStack_7f0;
  pppppplStack_3e8 = pppppplVar44;
  pppppplStack_3e0 = pppppplVar23;
  pppppplStack_7e8 = (long ******)0x0;
  uStack_7e0 = (long ******)0x0;
  ppppppplStack_3d8 = ppppppplVar42;
  ppppppplStack_7d8 = (long *******)0x0;
  ppppplStack_3d0 = ppppplStack_7d0;
  uStack_3b8 = ppppplStack_5c8;
  ppppplStack_3b0 = (long *****)&UNK_01254d89;
  appppplStack_3a8[0] = (long *****)&UNK_01254d89;
  uStack_558 = (long *****)&UNK_0cb19e80;
  uStack_550 = CONCAT62(uStack_550._2_6_,(short)pppppplStack_820);
  ppppppplStack_548 = ppppppplStack_848;
  pppplStack_540 = pppplStack_748;
  uStack_538 = ppppplStack_740;
  if (ppppplStack_740 != (long *****)0x0) {
    LOCK();
    ppppplStack_740[1] = (long ****)((long)ppppplStack_740[1] + 1);
    UNLOCK();
  }
  pppplStack_530 = pppplStack_738;
  puStack_378 = (undefined8 *)0x0;
  puStack_7c8 = puStack_110;
  puStack_3c8 = puStack_110;
  plStack_3c0 = plStack_7c0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar19 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  *puVar19 = &UNK_0f3f1088;
  *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_558;
  *(undefined4 *)((long)puVar19 + 0xc) = uStack_558._4_4_;
  *(undefined4 *)(puVar19 + 2) = (undefined4)uStack_550;
  *(undefined4 *)((long)puVar19 + 0x14) = uStack_550._4_4_;
  puVar19[3] = ppppppplStack_548;
  puVar19[4] = pppplVar4;
  puVar19[5] = ppppplVar41;
  puVar19[6] = pppplVar6;
  uStack_368 = 1;
  uStack_366 = 0xfffc;
  uStack_364 = 1;
  puStack_378 = puVar19;
  func_0x05d54750(&sStack_838,&UNK_0f3f1318);
  plVar20 = plStack_3c0;
  ppppplStack_868 =
       (long *****)CONCAT26(uStack_832,CONCAT24(sStack_834,CONCAT22(sStack_836,sStack_838)));
  if (*(char *)((long)plStack_3c0 + 6) == '\0') {
    *plStack_3c0 = (long)ppppplStack_868;
    if ((plStack_3c0[1] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plStack_3c0[1] & 0xff00ffffffffffffU) - 8);
    }
    plVar20[1] = 0;
    ppppplVar41 = ppppplStack_830;
    if (((ulong)ppppplStack_830 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppplStack_830 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar21 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar21 = lVar25;
      func_0x0eee2f00(plVar21 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar21 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar20[1] = (long)ppppplVar41;
    if ((plVar20[2] & 0x80000000000000U) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar20[2] & 0xff00ffffffffffffU) - 8);
    }
    plVar20[2] = 0;
    ppppplVar41 = ppppplStack_828;
    if (((ulong)ppppplStack_828 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppplStack_828 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar21 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar21 = lVar25;
      func_0x0eee2f00(plVar21 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar21 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plVar20[2] = (long)ppppplVar41;
    ppppplStack_868 =
         (long *****)CONCAT26(uStack_832,CONCAT24(sStack_834,CONCAT22(sStack_836,sStack_838)));
  }
  ppppppplStack_848 = (long *******)pppppplStack_3f8;
  pppppplStack_820 = (long ******)CONCAT71(pppppplStack_820._1_7_,uStack_364);
  ppppplStack_860 = ppppplStack_830;
  if (((ulong)ppppplStack_830 & 0x80000000000000) != 0) {
    uVar35 = (ulong)ppppplStack_830 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    ppppplStack_860 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppppplStack_858 = (long *****)0x0;
  ppppplVar41 = ppppplStack_828;
  if (((ulong)ppppplStack_828 & 0x80000000000000) != 0) {
    uVar35 = (ulong)ppppplStack_828 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  pppppplVar44 = pppppplStack_3f0;
  uVar35 = (ulong)ppppplStack_3b0 & 0x80000000000000;
  uVar8 = (ushort)((ulong)ppppplStack_3b0 >> 0x30);
  ppppplStack_858 = ppppplVar41;
  if (uVar35 == 0) {
    if (((ulong)ppppplStack_3b0 & 0x7f000000000000) == 0) goto LAB_0cb2131d;
    uVar30 = (ulong)(uVar8 & 0x7f);
LAB_0cb212d5:
    if ((((uVar30 != 4) || (*(int *)((ulong)ppppplStack_3b0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_3b8 != 9999)) || ((uStack_3b8._2_2_ != 9999 || (uStack_3b8._4_2_ != 9999))))
    goto LAB_0cb2131d;
LAB_0cb21517:
    if (uVar35 == 0) {
      if (((ulong)ppppplStack_3b0 & 0x7f000000000000) != 0) {
        uVar30 = (ulong)(uVar8 & 0x7f);
LAB_0cb21544:
        uVar31 = 3;
        if ((((uVar30 == 4) &&
             (piVar36 = (int *)((ulong)ppppplStack_3b0 & 0xff00ffffffffffff), *piVar36 == 0x61746562
             )) && ((short)uStack_3b8 == 9999)) &&
           ((uStack_3b8._2_2_ == 9999 && (uStack_3b8._4_2_ == 9999)))) {
          ppppplStack_868 = uStack_3b8;
          if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
            piVar36 = (int *)((ulong)ppppplStack_3b0 & 0xff00ffffffffffff);
            uVar35 = (ulong)ppppplStack_3b0 & 0x80000000000000;
          }
          ppppplStack_860 = (long *****)0x0;
          ppppplVar41 = ppppplStack_3b0;
          if (uVar35 != 0) {
            lVar25 = *(long *)(piVar36 + -2);
            lVar24 = lVar25 + 9;
            plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
            if (lVar24 != 0 && plVar20 == (long *)0x0) {
              FUN_0eec74c0(lVar24,8);
            }
            *plVar20 = lVar25;
            func_0x0eee2f00(plVar20 + 1,piVar36,lVar25);
            *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
            ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000)
            ;
          }
          ppppplStack_860 = ppppplVar41;
          if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
          }
          ppppplStack_858 = (long *****)0x0;
          uVar31 = 3;
          ppppplVar41 = appppplStack_3a8[0];
          if (((ulong)appppplStack_3a8[0] & 0x80000000000000) != 0) {
            uVar35 = (ulong)appppplStack_3a8[0] & 0xff00ffffffffffff;
            lVar25 = *(long *)(uVar35 - 8);
            lVar24 = lVar25 + 9;
            plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8,3);
            if (lVar24 != 0 && plVar20 == (long *)0x0) {
              FUN_0eec74c0(lVar24,8);
            }
            *plVar20 = lVar25;
            func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
            *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
            uVar31 = 3;
            ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000)
            ;
          }
        }
        goto LAB_0cb2172b;
      }
    }
    else {
      uVar30 = *(ulong *)(((ulong)ppppplStack_3b0 & 0xff00ffffffffffff) - 8);
      if (uVar30 != 0) goto LAB_0cb21544;
    }
    uVar31 = 3;
  }
  else {
    uVar30 = *(ulong *)(((ulong)ppppplStack_3b0 & 0xff00ffffffffffff) - 8);
    if (uVar30 != 0) goto LAB_0cb212d5;
LAB_0cb2131d:
    if (((ulong)ppppplStack_830 & 0x80000000000000) != 0) {
      uVar30 = *(ulong *)(((ulong)ppppplStack_830 & 0xff00ffffffffffff) - 8);
      if (uVar30 != 0) goto LAB_0cb2134f;
      goto LAB_0cb21517;
    }
    if (((ulong)ppppplStack_830 & 0x7f000000000000) == 0) goto LAB_0cb21517;
    uVar30 = (ulong)((ushort)((ulong)ppppplStack_830 >> 0x30) & 0x7f);
LAB_0cb2134f:
    if (((uVar30 != 4) || (*(int *)((ulong)ppppplStack_830 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((sStack_838 != 9999 || ((sStack_836 != 9999 || (sStack_834 != 9999)))))) goto LAB_0cb21517;
    ppppplStack_868 = *pppppplStack_3f0;
    if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_860 = (long *****)0x0;
    ppppplVar41 = pppppplVar44[1];
    if (((ulong)ppppplVar41 & 0x80000000000000) != 0) {
      lVar25 = *(long *)(((ulong)ppppplVar41 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar41 & 0xff00ffffffffffff,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppplStack_860 = ppppplVar41;
    if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_858 = (long *****)0x0;
    ppppplVar41 = pppppplVar44[2];
    uVar31 = 1;
    if (((ulong)ppppplVar41 & 0x80000000000000) != 0) {
      lVar25 = *(long *)(((ulong)ppppplVar41 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8,1);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar41 & 0xff00ffffffffffff,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      uVar31 = 1;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
  }
LAB_0cb2172b:
  ppppplStack_858 = ppppplVar41;
  func_0x0d6b3300(&ppppplStack_288,&uStack_3b8,&ppppplStack_868,uVar31);
  if ((ppppplStack_3d0 == (long *****)0x0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011ca7a6),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pppppplStack_3e8 == (long ******)0x0) ||
     (ppppplVar41 = ppppplStack_3d0, *(char *)pppppplStack_3e8 != '\x01')) {
    cVar17 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011ca7a6);
    ppppplVar41 = ppppplStack_3d0;
    if (cVar17 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pppppplStack_3e8 == (long ******)0x0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*(char *)pppppplStack_3e8 == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  ppppppplVar42 = ppppppplStack_3d8;
  ppppplVar22 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppplVar22 == (long *****)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  ppppplStack_2e8 = uStack_3b8;
  ppppppplStack_728 = ppppppplVar42;
  ppppplStack_730 = uStack_3b8;
  ppppplVar45 = ppppplStack_3b0;
  ppppplStack_290 = ppppplVar41;
  if (((ulong)ppppplStack_3b0 & 0x80000000000000) != 0) {
    uVar35 = (ulong)ppppplStack_3b0 & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    ppppplVar45 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_2d8 = 0;
  ppppplStack_598 = appppplStack_3a8[0];
  if (((ulong)appppplStack_3a8[0] & 0x80000000000000) != 0) {
    uVar35 = (ulong)appppplStack_3a8[0] & 0xff00ffffffffffff;
    lVar25 = *(long *)(uVar35 - 8);
    lVar24 = lVar25 + 9;
    ppppplStack_2e0 = ppppplVar45;
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar20 == (long *)0x0) {
      FUN_0eec74c0(lVar24,8);
    }
    *plVar20 = lVar25;
    func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
    *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
    ppppplStack_598 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  ppppplStack_7d0 = (long *****)uStack_260;
  ppppppplStack_7d8 = (long *******)uStack_268;
  pppppplStack_7e8 = (long ******)uStack_278;
  pppppplStack_7f0 = (long ******)uStack_280;
  uVar16 = uStack_366;
  uStack_528 = CONCAT62(uStack_528._2_6_,(undefined2)uStack_258);
  ppppplStack_2e0 = (long *****)0x0;
  uStack_2d8 = 0;
  uStack_558 = ppppplStack_288;
  uStack_280 = 0;
  uStack_278 = 0;
  pppppplStack_7f8 = (long ******)ppppplStack_288;
  uStack_550 = 0;
  ppppppplStack_548 = (long *******)0x0;
  pppplStack_540 = (long ****)CONCAT44(uStack_26c,uStack_270);
  uStack_7e0 = (long ******)CONCAT44(uStack_26c,uStack_270);
  uStack_538 = (long *****)0x0;
  uStack_268 = 0;
  uStack_260 = 0;
  pppplStack_530 = (long ****)0x0;
  puStack_7c8 = (undefined8 *)CONCAT62(puStack_7c8._2_6_,(undefined2)uStack_258);
  ppppplStack_5a8 = ppppplStack_730;
  ppppplStack_5a0 = ppppplVar45;
  func_0x0d6a8a30(ppppplVar22,ppppppplStack_728,&ppppplStack_5a8,&pppppplStack_7f8);
  if (((ulong)ppppplStack_7d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppplStack_7d0 & 0xff00ffffffffffff) - 8);
  }
  ppppplStack_7d0 = (long *****)0x0;
  if (((ulong)ppppppplStack_7d8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppppplStack_7d8 & 0xff00ffffffffffff) - 8);
  }
  ppppppplStack_7d8 = (long *******)0x0;
  if (((ulong)pppppplStack_7e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppplStack_7e8 & 0xff00ffffffffffff) - 8);
  }
  pppppplStack_7e8 = (long ******)0x0;
  if (((ulong)pppppplStack_7f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppplStack_7f0 & 0xff00ffffffffffff) - 8);
  }
  pppppplStack_7f0 = (long ******)0x0;
  if (((ulong)ppppplStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppplStack_598 & 0xff00ffffffffffff) - 8);
  }
  ppppplStack_598 = (long *****)0x0;
  if (((ulong)ppppplStack_5a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppplStack_5a0 & 0xff00ffffffffffff) - 8);
  }
  *ppppplVar22 = (long ****)&UNK_0f3f1190;
  ppppplVar22[0xe] = (long ****)ppppplStack_290;
  *(undefined2 *)(ppppplVar22 + 0xf) = uVar16;
  *(undefined1 *)((long)ppppplVar22 + 0x7a) = pppppplStack_820._0_1_;
  pppppplStack_7f8 = (long ******)ppppplVar22;
  if ((uStack_260 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
  }
  uStack_260 = 0;
  if ((uStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
  }
  uStack_268 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if ((uStack_280 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_280 & 0xff00ffffffffffff) - 8);
  }
  if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
  }
  ppppplStack_858 = (long *****)0x0;
  if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
  }
  if (pppppplStack_7f8 != (long ******)0x0) {
    ppppplVar41 = (long *****)*ppppppplStack_848;
    ppppplVar22 = (long *****)ppppppplStack_848[1];
    while ((ppppplVar41 != ppppplVar22 &&
           (cVar17 = func_0x04fa7a10(*ppppplVar41 + 4,pppppplStack_7f8 + 7), cVar17 != '\0'))) {
      ppppplVar41 = ppppplVar41 + 1;
    }
    func_0x0d6af860(ppppppplStack_848,ppppplVar41,&pppppplStack_7f8);
    pppppplVar44 = pppppplStack_7f8;
    pppppplStack_7f8 = (long ******)0x0;
    if (pppppplVar44 != (long ******)0x0) {
      (*(code *)(*pppppplVar44)[1])();
    }
  }
  pppppplVar44 = pppppplStack_3f8;
  uStack_368 = 0;
  if (((ulong)ppppplStack_830 & 0x80000000000000) == 0) {
    if (((ulong)ppppplStack_830 & 0x7f000000000000) == 0) goto LAB_0cb21e38;
    uVar35 = (ulong)((ushort)((ulong)ppppplStack_830 >> 0x30) & 0x7f);
LAB_0cb21dff:
    if ((((uVar35 != 4) || (*(int *)((ulong)ppppplStack_830 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_838 != 9999)) || ((sStack_836 != 9999 || (sStack_834 != 9999)))) goto LAB_0cb21e38;
LAB_0cb220a5:
    pppppplStack_718 = pppppplStack_3f8;
    pppppplStack_710 = pppppplStack_3f0;
    pppppplStack_708 = pppppplStack_3e8;
    uStack_700 = pppppplStack_3e0;
    pppppplStack_3e8 = (long ******)0x0;
    pppppplStack_3e0 = (long ******)0x0;
    ppppppplStack_6f8 = ppppppplStack_3d8;
    ppppppplStack_3d8 = (long *******)0x0;
    ppppplStack_6f0 = ppppplStack_3d0;
    puStack_6e8 = puStack_3c8;
    uStack_6e0 = SUB81(plStack_3c0,0);
    uStack_6df = (undefined7)((ulong)plStack_3c0 >> 8);
    uStack_6d8 = (undefined1)sStack_838;
    uStack_6d7 = (undefined1)((ushort)sStack_838 >> 8);
    sStack_6d6 = sStack_836;
    sStack_6d4 = sStack_834;
    uStack_6d2 = uStack_832;
    uStack_6d0 = 0;
    uStack_6cc = 0;
    ppppplVar41 = ppppplStack_830;
    if (((ulong)ppppplStack_830 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppplStack_830 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_6d0 = (uint)ppppplVar41;
    uStack_6cc = (uint)((ulong)ppppplVar41 >> 0x20);
    ppppplStack_6c8 = (long *****)0x0;
    ppppplVar41 = ppppplStack_828;
    if (((ulong)ppppplStack_828 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppplStack_828 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppplVar44 = pppppplStack_710;
    _uStack_698 = 0;
    uStack_688 = 1;
    sStack_686 = -4;
    uStack_684 = CONCAT11(uStack_684._1_1_,1);
    pppppplStack_820 = pppppplStack_718;
    ppppplStack_868 = *pppppplStack_710;
    ppppplVar22 = pppppplStack_710[1];
    ppppplStack_6c8 = ppppplVar41;
    if (((ulong)ppppplVar22 & 0x80000000000000) != 0) {
      lVar25 = *(long *)(((ulong)ppppplVar22 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar22 & 0xff00ffffffffffff,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar22 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppplStack_858 = (long *****)0x0;
    ppppplVar41 = pppppplVar44[2];
    ppppplStack_860 = ppppplVar22;
    if (((ulong)ppppplVar41 & 0x80000000000000) != 0) {
      lVar25 = *(long *)(((ulong)ppppplVar41 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar41 & 0xff00ffffffffffff,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pppppplVar23 = pppppplStack_710;
    ppppplVar22 = (long *****)CONCAT44(uStack_6cc,uStack_6d0);
    uVar10 = uStack_6cc & 0x800000;
    uVar8 = (ushort)(uStack_6cc >> 0x10);
    ppppplStack_858 = ppppplVar41;
    if (uVar10 == 0) {
      if ((uStack_6cc & 0x7f0000) == 0) goto LAB_0cb223f4;
      uVar35 = (ulong)(uVar8 & 0x7f);
LAB_0cb223ac:
      if ((((uVar35 != 4) || (*(int *)((ulong)ppppplVar22 & 0xff00ffffffffffff) != 0x61746562)) ||
          (CONCAT11(uStack_6d7,uStack_6d8) != 9999)) ||
         ((sStack_6d6 != 9999 || (sStack_6d4 != 9999)))) goto LAB_0cb223f4;
LAB_0cb225c9:
      if (uVar10 == 0) {
        if ((uStack_6cc & 0x7f0000) != 0) {
          uVar35 = (ulong)(uVar8 & 0x7f);
LAB_0cb22600:
          if ((((uVar35 == 4) &&
               (piVar36 = (int *)((ulong)ppppplVar22 & 0xff00ffffffffffff), *piVar36 == 0x61746562))
              && (CONCAT11(uStack_6d7,uStack_6d8) == 9999)) &&
             ((sStack_6d6 == 9999 && (sStack_6d4 == 9999)))) {
            ppppplStack_868 =
                 (long *****)
                 CONCAT26(uStack_6d2,CONCAT24(9999,CONCAT22(9999,CONCAT11(uStack_6d7,uStack_6d8))));
            if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
              ppppplVar22 = (long *****)CONCAT44(uStack_6cc,uStack_6d0);
              piVar36 = (int *)((ulong)ppppplVar22 & 0xff00ffffffffffff);
              uVar10 = uStack_6cc & 0x800000;
            }
            ppppplStack_860 = (long *****)0x0;
            if (uVar10 != 0) {
              lVar25 = *(long *)(piVar36 + -2);
              lVar24 = lVar25 + 9;
              plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
              if (lVar24 != 0 && plVar20 == (long *)0x0) {
                FUN_0eec74c0(lVar24,8);
              }
              *plVar20 = lVar25;
              func_0x0eee2f00(plVar20 + 1,piVar36,lVar25);
              *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
              ppppplVar22 = (long *****)
                            ((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
            }
            ppppplStack_860 = ppppplVar22;
            if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
            }
            ppppplStack_858 = (long *****)0x0;
            ppppplVar41 = ppppplStack_6c8;
            if (((ulong)ppppplStack_6c8 & 0x80000000000000) != 0) {
              uVar35 = (ulong)ppppplStack_6c8 & 0xff00ffffffffffff;
              lVar25 = *(long *)(uVar35 - 8);
              lVar24 = lVar25 + 9;
              plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
              if (lVar24 != 0 && plVar20 == (long *)0x0) {
                FUN_0eec74c0(lVar24,8);
              }
              goto LAB_0cb2279b;
            }
          }
        }
      }
      else {
        uVar35 = *(ulong *)(((ulong)ppppplVar22 & 0xff00ffffffffffff) - 8);
        if (uVar35 != 0) goto LAB_0cb22600;
      }
    }
    else {
      uVar35 = *(ulong *)(((ulong)ppppplVar22 & 0xff00ffffffffffff) - 8);
      if (uVar35 != 0) goto LAB_0cb223ac;
LAB_0cb223f4:
      ppppplVar45 = pppppplVar44[1];
      if (((ulong)ppppplVar45 & 0x80000000000000) != 0) {
        uVar35 = *(ulong *)(((ulong)ppppplVar45 & 0xff00ffffffffffff) - 8);
        if (uVar35 != 0) goto LAB_0cb2242f;
        goto LAB_0cb225c9;
      }
      if (((ulong)ppppplVar45 & 0x7f000000000000) == 0) goto LAB_0cb225c9;
      uVar35 = (ulong)((ushort)((ulong)ppppplVar45 >> 0x30) & 0x7f);
LAB_0cb2242f:
      if (((uVar35 != 4) || (*(int *)((ulong)ppppplVar45 & 0xff00ffffffffffff) != 0x61746562)) ||
         ((*(short *)pppppplVar44 != 9999 ||
          ((*(short *)((long)pppppplVar44 + 2) != 9999 ||
           (*(short *)((long)pppppplVar44 + 4) != 9999)))))) goto LAB_0cb225c9;
      ppppplStack_868 = *pppppplStack_710;
      if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_860 = (long *****)0x0;
      ppppplVar41 = pppppplVar23[1];
      if (((ulong)ppppplVar41 & 0x80000000000000) != 0) {
        lVar25 = *(long *)(((ulong)ppppplVar41 & 0xff00ffffffffffff) - 8);
        lVar24 = lVar25 + 9;
        plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
        if (lVar24 != 0 && plVar20 == (long *)0x0) {
          FUN_0eec74c0(lVar24,8);
        }
        *plVar20 = lVar25;
        func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar41 & 0xff00ffffffffffff,lVar25);
        *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
        ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      ppppplStack_860 = ppppplVar41;
      if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_858 = (long *****)0x0;
      ppppplVar41 = pppppplVar23[2];
      if (((ulong)ppppplVar41 & 0x80000000000000) == 0) goto LAB_0cb227d1;
      uVar35 = (ulong)ppppplVar41 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
LAB_0cb2279b:
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
LAB_0cb227d1:
    ppppplStack_858 = ppppplVar41;
    func_0x0d6b3300(&ppppplStack_288,&uStack_6d8,&ppppplStack_868,1);
    if ((ppppplStack_6f0 == (long *****)0x0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_01423854),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pppppplStack_708 == (long ******)0x0) ||
       (ppppplVar41 = ppppplStack_6f0, *(char *)pppppplStack_708 != '\x01')) {
      cVar17 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_01423854);
      ppppplVar41 = ppppplStack_6f0;
      if (cVar17 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((pppppplStack_708 == (long ******)0x0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if ((*(char *)pppppplStack_708 == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppppplVar42 = ppppppplStack_6f8;
    pppppplVar44 = (long ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (pppppplVar44 == (long ******)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    ppppplVar22 = (long *****)
                  CONCAT26(uStack_6d2,
                           CONCAT24(sStack_6d4,CONCAT22(sStack_6d6,CONCAT11(uStack_6d7,uStack_6d8)))
                          );
    ppppplVar45 = (long *****)CONCAT44(uStack_6cc,uStack_6d0);
    ppppppplStack_728 = ppppppplVar42;
    ppppppplStack_848 = (long *******)pppppplVar44;
    ppppplStack_730 = ppppplVar41;
    ppppplStack_2e8 = ppppplVar22;
    if ((uStack_6cc & 0x800000) != 0) {
      lVar25 = *(long *)(((ulong)ppppplVar45 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar25 + 9;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,(ulong)ppppplVar45 & 0xff00ffffffffffff,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar45 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    uStack_2d8 = 0;
    ppppplVar41 = ppppplStack_6c8;
    if (((ulong)ppppplStack_6c8 & 0x80000000000000) != 0) {
      uVar35 = (ulong)ppppplStack_6c8 & 0xff00ffffffffffff;
      lVar25 = *(long *)(uVar35 - 8);
      lVar24 = lVar25 + 9;
      ppppplStack_2e0 = ppppplVar45;
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && plVar20 == (long *)0x0) {
        FUN_0eec74c0(lVar24,8);
      }
      *plVar20 = lVar25;
      func_0x0eee2f00(plVar20 + 1,uVar35,lVar25);
      *(undefined1 *)((long)plVar20 + lVar25 + 8) = 0;
      ppppplVar41 = (long *****)((ulong)(plVar20 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    ppppplStack_7d0 = (long *****)uStack_260;
    ppppppplStack_7d8 = (long *******)uStack_268;
    pppppplStack_7e8 = (long ******)uStack_278;
    pppppplStack_7f0 = (long ******)uStack_280;
    sVar3 = sStack_686;
    uStack_528 = CONCAT62(uStack_528._2_6_,(undefined2)uStack_258);
    ppppplStack_2e0 = (long *****)0x0;
    uStack_2d8 = 0;
    uStack_558 = ppppplStack_288;
    uStack_280 = 0;
    uStack_278 = 0;
    pppppplStack_7f8 = (long ******)ppppplStack_288;
    uStack_550 = 0;
    ppppppplStack_548 = (long *******)0x0;
    pppplStack_540 = (long ****)CONCAT44(uStack_26c,uStack_270);
    uStack_7e0 = (long ******)CONCAT44(uStack_26c,uStack_270);
    uStack_538 = (long *****)0x0;
    uStack_268 = 0;
    uStack_260 = 0;
    pppplStack_530 = (long ****)0x0;
    puStack_7c8 = (undefined8 *)CONCAT62(puStack_7c8._2_6_,(undefined2)uStack_258);
    ppppplStack_5a8 = ppppplVar22;
    ppppplStack_5a0 = ppppplVar45;
    ppppplStack_598 = ppppplVar41;
    func_0x0d6a8a30(ppppppplStack_848,ppppppplStack_728,&ppppplStack_5a8,&pppppplStack_7f8);
    pppppplVar44 = pppppplStack_820;
    if (((ulong)ppppplStack_7d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_7d0 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_7d0 = (long *****)0x0;
    if (((ulong)ppppppplStack_7d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppppplStack_7d8 & 0xff00ffffffffffff) - 8);
    }
    ppppppplStack_7d8 = (long *******)0x0;
    if (((ulong)pppppplStack_7e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppplStack_7e8 & 0xff00ffffffffffff) - 8);
    }
    pppppplStack_7e8 = (long ******)0x0;
    if (((ulong)pppppplStack_7f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppplStack_7f0 & 0xff00ffffffffffff) - 8);
    }
    pppppplStack_7f0 = (long ******)0x0;
    if (((ulong)ppppplStack_598 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_598 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_598 = (long *****)0x0;
    if (((ulong)ppppplStack_5a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_5a0 & 0xff00ffffffffffff) - 8);
    }
    ppppppplVar42 = ppppppplStack_848;
    *ppppppplStack_848 = (long ******)&UNK_0f3f1698;
    ppppppplStack_848[0xe] = (long ******)ppppplStack_730;
    *(short *)(ppppppplStack_848 + 0xf) = sVar3;
    *(undefined1 *)((long)ppppppplStack_848 + 0x7a) = 1;
    pppppplStack_7f8 = (long ******)ppppppplStack_848;
    if ((uStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
    }
    uStack_260 = 0;
    if ((uStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
    }
    uStack_268 = 0;
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    if ((uStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_280 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_858 = (long *****)0x0;
    if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
    }
    ppppplVar41 = *pppppplVar44;
    ppppplVar22 = pppppplVar44[1];
    if (ppppplVar41 != ppppplVar22) {
      do {
        cVar17 = func_0x04fa7a10(*ppppplVar41 + 4,ppppppplVar42 + 7);
        if (cVar17 == '\0') break;
        ppppplVar41 = ppppplVar41 + 1;
      } while (ppppplVar41 != ppppplVar22);
    }
    func_0x0d6af860(pppppplVar44,ppppplVar41,&pppppplStack_7f8);
    pppppplVar44 = pppppplStack_7f8;
    pppppplStack_7f8 = (long ******)0x0;
    if (pppppplVar44 != (long ******)0x0) {
      (*(code *)(*pppppplVar44)[1])();
    }
    uStack_688 = 0;
    ppppppplVar42 = &pppppplStack_718;
    func_0x0cb1a750(ppppppplVar42);
    if (((ulong)ppppplStack_828 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_828 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_828 = (long *****)0x0;
    if (((ulong)ppppplStack_830 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_830 & 0xff00ffffffffffff) - 8);
    }
    func_0x0cb1a8b0(&pppppplStack_3f8);
    if (((ulong)puStack_5b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_5b8 & 0xff00ffffffffffff) - 8);
    }
    puStack_5b8 = (undefined *)0x0;
    if (((ulong)puStack_5c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_5c0 & 0xff00ffffffffffff) - 8);
    }
    puStack_5c0 = (undefined *)0x0;
    if ((uStack_720 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_720 & 0xff00ffffffffffff) - 8);
    }
    uStack_720 = 0;
    if ((uStack_5b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5b0 & 0xff00ffffffffffff) - 8);
    }
    ppppplVar41 = ppppplStack_740;
    pppplStack_748 = (long ****)0x0;
    ppppplStack_740 = (long *****)0x0;
    if (ppppplVar41 == (long *****)0x0) {
      pppplStack_738 = (long ****)0x0;
      ppppplVar41 = (long *****)0x0;
    }
    else {
      LOCK();
      ppppplVar22 = ppppplVar41 + 1;
      pppplVar4 = *ppppplVar22;
      *ppppplVar22 = (long ****)((long)*ppppplVar22 + -1);
      UNLOCK();
      if (pppplVar4 == (long ****)0x0) {
        (*(code *)(*ppppplVar41)[2])(ppppplVar41);
        func_0x0412c2d0(ppppplVar41);
      }
      ppppplVar41 = ppppplStack_740;
      pppplStack_738 = (long ****)0x0;
      if (ppppplStack_740 != (long *****)0x0) {
        LOCK();
        ppppplVar22 = ppppplStack_740 + 1;
        pppplVar4 = *ppppplVar22;
        *ppppplVar22 = (long ****)((long)*ppppplVar22 + -1);
        UNLOCK();
        if (pppplVar4 == (long ****)0x0) {
          (*(code *)(*ppppplStack_740)[2])(ppppplStack_740);
          func_0x0412c2d0(ppppplVar41);
        }
      }
    }
    uStack_6cc = uStack_6cc & 0xffffff00;
    uVar35 = (ulong)ppppplStack_6c8 >> 0x28;
    uVar10 = (uint)ppppplStack_6c8;
    ppppplStack_6c8._0_5_ = (uint5)(uVar10 & 0xffffff00);
    ppppplStack_6c8 = (long *****)CONCAT35((int3)uVar35,(uint5)ppppplStack_6c8);
    uStack_6c0 = 0;
    uStack_6bc = 0;
    uStack_6b8 = 0;
    uStack_6b4 = 0;
    uStack_6b0 = 0;
    uStack_6ac = 0;
    uStack_6a8 = 0;
    uStack_6a4 = 0;
    uStack_6a0 = 0;
    uStack_69c = 0;
    uStack_698 = (uint5)(uint)uStack_698;
    uStack_690 = 0;
    uStack_688 = 0;
    uStack_684 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    uStack_66c = 0;
    uStack_660 = 0;
    uStack_65c = 0;
    uStack_658 = 0;
    uStack_654 = 0;
    uStack_650 = 0;
    uStack_64c = 0;
    uStack_648 = 0;
    cStack_608 = '\0';
    uStack_600 = 0;
    bStack_640 = 0;
    uStack_644 = 0;
    bStack_5fe = 0;
    uStack_5fc = uStack_5fc & 0xffffff00;
    bStack_5f4 = 0;
    pppppplStack_718 = (long ******)0x0;
    pppppplStack_710 = (long ******)0x0;
    pppppplStack_708 = (long ******)0x0;
    uStack_700 = (long ******)0x0;
    ppppppplStack_6f8 = (long *******)0x0;
    ppppplStack_6f0 = (long *****)0x0;
    puStack_6e8 = (undefined8 *)0x0;
    uStack_6e0 = 0;
    uStack_6df = 0;
    uStack_6d8 = 0;
    uStack_6d7 = 0;
    sStack_6d6 = 0;
    sStack_6d4 = 0;
    uStack_6d2 = 0;
    uStack_6d0 = uStack_6d0 & 0xffffff00;
    pppplStack_818 = (long ****)0x0;
    ppppplStack_810 = (long *****)0x0;
    pppplStack_808 = (long ****)0x0;
    if ((*puStack_298 & 1) == 0) {
      uStack_5d8 = *(undefined8 *)(puStack_298 + 4);
      uStack_5e8 = *puStack_298;
      uStack_5e4 = puStack_298[1];
      uStack_5e0 = puStack_298[2];
      uStack_5dc = puStack_298[3];
    }
    else {
      func_0x0412e5e0(&uStack_5e8,*(undefined8 *)(puStack_298 + 4),*(undefined8 *)(puStack_298 + 2))
      ;
    }
    func_0x0d686f30(&pppppplStack_3f8,&UNK_012b4b41,0x17,&pppplStack_818,&uStack_5e8);
    ppppplStack_868 = (long *****)0x0;
    ppppplStack_860 = (long *****)0x0;
    ppppplStack_858 = (long *****)0x0;
    func_0x0d6afff0(&uStack_558,&ppppplStack_1d8,&pppppplStack_3f8,&ppppplStack_868,1);
    if (((uStack_538._6_1_ == 1) && ((bStack_4ac & 1) == 0)) && (plStack_188 != (long *)0x0)) {
      lVar24 = func_0x0417cc60();
      if (plStack_188 == (long *)0x0) goto LAB_0cb24500;
      if (cStack_4fc == '\x02') {
        apppppppuStack_520[0] = apppppppuStack_520;
      }
      pppppppuVar39 = (undefined8 *******)0x0;
      if (iStack_500 == 0x11a591c9) {
        pppppppuVar39 = apppppppuStack_520[0];
      }
      (**(code **)(*plStack_188 + 0x30))(plStack_188,pppppppuVar39,&ppppplStack_4f8);
      lVar25 = func_0x0417cc60();
      ppppppplStack_548 = (long *******)((double)(lVar25 - lVar24) / _DAT_014f0138);
      pppplStack_540 =
           (long ****)
           CONCAT71(pppplStack_540._1_7_,(byte)pppplStack_540 & ~bStack_4ac & uStack_538._6_1_);
    }
    uVar12 = uStack_4b8;
    uVar11 = uStack_4d0;
    uVar31 = uStack_4e8;
    ppppplVar22 = ppppplStack_4f0;
    ppppplVar41 = ppppplStack_4f8;
    if (((~uStack_538._6_1_ | bStack_4ac) & 1) == 0) {
      func_0x05ebb920(&pppppplStack_7f8,&uStack_558);
      func_0x05ebb920(&uStack_4a8,&pppppplStack_7f8);
      func_0x05d85c50(&uStack_798);
      if (pcStack_7a8 != (code *)0x0) {
        (*pcStack_7a8)(&plStack_7c0);
      }
      if (((ulong)puStack_7c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_7c8 & 0xff00ffffffffffff) - 8);
      }
      puStack_7c8 = (undefined8 *)0x0;
      if (((ulong)ppppplStack_7d0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_7d0 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_7d0 = (long *****)0x0;
    }
    else {
      ppppplStack_4f8 = (long *****)0x0;
      ppppplStack_4f0 = (long *****)0x0;
      uStack_4e8 = 0;
      uStack_590 = (undefined4)uStack_4e0;
      uStack_58c = uStack_4e0._4_4_;
      uStack_588 = (undefined4)uStack_4d8;
      uStack_584 = uStack_4d8._4_4_;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_578 = (undefined4)uStack_4c8;
      uStack_574 = uStack_4c8._4_4_;
      uStack_570 = (undefined4)uStack_4c0;
      uStack_56c = uStack_4c0._4_4_;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      bStack_29c = bStack_4ac;
      uStack_2a0 = uStack_4b0;
      ppppplStack_5a8 = ppppplVar41;
      ppppplStack_5a0 = ppppplVar22;
      ppppplStack_598 = (long *****)uVar31;
      ppppplStack_2e8 = (long *****)0x0;
      ppppplStack_2e0 = (long *****)0x0;
      uStack_2d8 = 0;
      uStack_580 = uVar11;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_568 = uVar12;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_560 = uStack_4b0;
      bStack_55c = bStack_4ac;
      pppppplStack_7f8 = (long ******)0x0;
      pppppplStack_7f0 = (long ******)0x0;
      pppppplStack_7e8 = (long ******)0x0;
      uStack_7e0._0_1_ = 1;
      ppppppplStack_7d8 = (long *******)0x0;
      ppppplStack_7d0 = (long *****)0x0;
      puStack_7c8 = (undefined8 *)0x0;
      puStack_7b0 = &UNK_0488e0b0;
      uStack_7a0 = 0x48b5725f;
      pcStack_7a8 = (code *)0x0;
      uStack_79c = 0;
      plStack_7c0 = (long *)0x0;
      uStack_768 = 0;
      uStack_760 = 0;
      uStack_778 = 0;
      uStack_770 = 0;
      uStack_788 = 0;
      uStack_780 = 0;
      uStack_798 = 0;
      uStack_790 = 0;
      uStack_758 = 0;
      uStack_750 = 0xfefffffc;
      uStack_74c = 0;
      func_0x0c4a4310(&uStack_798,&ppppplStack_5a8);
      uStack_7e0 = (long ******)((ulong)uStack_7e0._1_7_ << 8);
      func_0x05ebb920(&ppppplStack_288,&pppppplStack_7f8);
      func_0x05d85c50(&uStack_798);
      if (pcStack_7a8 != (code *)0x0) {
        (*pcStack_7a8)(&plStack_7c0);
      }
      if (((ulong)puStack_7c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_7c8 & 0xff00ffffffffffff) - 8);
      }
      puStack_7c8 = (undefined8 *)0x0;
      if (((ulong)ppppplStack_7d0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_7d0 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_7d0 = (long *****)0x0;
      func_0x05d85c50(&ppppplStack_5a8);
      func_0x05ebb920(&pppppplStack_7f8,&ppppplStack_288);
      func_0x05ebb920(&uStack_4a8,&pppppplStack_7f8);
      func_0x05d85c50(&uStack_798);
      if (pcStack_7a8 != (code *)0x0) {
        (*pcStack_7a8)(&plStack_7c0);
      }
      if (((ulong)puStack_7c8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_7c8 & 0xff00ffffffffffff) - 8);
      }
      puStack_7c8 = (undefined8 *)0x0;
      if (((ulong)ppppplStack_7d0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_7d0 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_7d0 = (long *****)0x0;
      func_0x05d85c50(auStack_228);
      if (pcStack_238 != (code *)0x0) {
        (*pcStack_238)(auStack_250);
      }
      if ((uStack_258 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_258 & 0xff00ffffffffffff) - 8);
      }
      uStack_258 = 0;
      if ((uStack_260 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_260 & 0xff00ffffffffffff) - 8);
      }
      uStack_260 = 0;
      func_0x05d85c50(&ppppplStack_2e8);
    }
    func_0x05d85c50(&ppppplStack_4f8);
    if (pcStack_508 != (code *)0x0) {
      (*pcStack_508)(apppppppuStack_520);
    }
    if ((uStack_528 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_528 & 0xff00ffffffffffff) - 8);
    }
    uStack_528 = 0;
    if (((ulong)pppplStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_530 & 0xff00ffffffffffff) - 8);
    }
    if (((ulong)ppppplStack_858 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_858 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_858 = (long *****)0x0;
    if (((ulong)ppppplStack_860 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_860 & 0xff00ffffffffffff) - 8);
    }
    pppppplStack_7f8 = (long ******)0xffffffff;
    pppppplStack_7f0 = (long ******)0x0;
    pppppplStack_7e8 = (long ******)0x0;
    uStack_7e0 = (long ******)0x0;
    ppppppplStack_7d8 = (long *******)0x0;
    ppppplStack_7d0 = (long *****)0x0;
    puStack_7c8 = (undefined8 *)0x0;
    plStack_7c0 = (long *)0x0;
    uStack_7b8 = 0;
    puStack_7b0 = (undefined *)0x0;
    cVar17 = func_0x0d5cf650(&uStack_4a8,7,&pppppplStack_7f8);
    func_0x05f43a40(&pppppplStack_7f8);
    if (cVar17 == '\0') {
      func_0x0a0046e0(1,3,7,&UNK_011e33ca);
    }
    func_0x05d85c50(auStack_340);
    if ((ulong)uStack_348 != 0xffffffff) {
      (**(code **)(&UNK_0f3f1658 + (ulong)uStack_348 * 8))(&pppppplStack_7f8,appppplStack_3a8);
    }
    uStack_348 = 0xffffffff;
    if (((ulong)plStack_3c0 & 1) != 0) {
      func_0x0412a280(ppppplStack_3b0,(ulong)plStack_3c0 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_3c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_3c8 & 0xff00ffffffffffff) - 8);
    }
    puStack_3c8 = (undefined8 *)0x0;
    if (((ulong)ppppplStack_3d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_3d0 & 0xff00ffffffffffff) - 8);
    }
    ppppplStack_3d0 = (long *****)0x0;
    if (((ulong)pppppplStack_3e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppplStack_3e0 & 0xff00ffffffffffff) - 8);
    }
    pppppplStack_3e0 = (long ******)0x0;
    if (((ulong)pppppplStack_3e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppplStack_3e8 & 0xff00ffffffffffff) - 8);
    }
    pppppplStack_3e8 = (long ******)0x0;
    if ((uStack_5e8 & 1) != 0) {
      func_0x0412a280(uStack_5d8,CONCAT44(uStack_5e4,uStack_5e8) & 0xfffffffffffffffe);
    }
    if (((ulong)pppplStack_808 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppplStack_808 & 0xff00ffffffffffff) - 8);
    }
    pppplStack_808 = (long ****)0x0;
    if (((ulong)ppppplStack_810 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)ppppplStack_810 & 0xff00ffffffffffff) - 8);
    }
    func_0x05d86750(&pppppplStack_3f8,auStack_448);
    puVar37 = puStack_840;
    pppppplVar44 = pppppplStack_3f8;
    if ((uStack_488._6_1_ != '\x01') || ((bStack_3fc & 1) != 0)) {
      for (; (pppppplVar44 != pppppplStack_3f0 && (*(short *)pppppplVar44 == 0));
          pppppplVar44 = (long ******)((long)pppppplVar44 + 0x38)) {
      }
      if (pppppplVar44 == pppppplStack_3f0) {
LAB_0cb23bdc:
        uStack_80 = 0xffffffff;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        func_0x0d5ceda0(&pppppplStack_3f8,7,&uStack_80);
        func_0x05f43a40(&uStack_80);
      }
      else {
        sVar3 = *(short *)pppppplVar44;
        while (sVar3 != 4) {
          pppppplVar44 = pppppplVar44 + 7;
          if (pppppplVar44 == pppppplStack_3f0) goto LAB_0cb23bdc;
          sVar3 = *(short *)pppppplVar44;
        }
        func_0x04bda4a0(1,3,7,&UNK_012685e6);
      }
LAB_0cb23c3f:
      puVar37[4] = (undefined4)uStack_498;
      puVar37[5] = uStack_498._4_4_;
      puVar37[6] = (undefined4)uStack_490;
      puVar37[7] = uStack_490._4_4_;
      *puVar37 = (undefined4)uStack_4a8;
      puVar37[1] = uStack_4a8._4_4_;
      puVar37[2] = (undefined4)uStack_4a0;
      puVar37[3] = uStack_4a0._4_4_;
      func_0x05d85c50(&pppppplStack_3f8);
      func_0x05d85c50(auStack_448);
      if (pppppplStack_458 != (long ******)0x0) {
        (*(code *)pppppplStack_458)(&ppppppplStack_470);
      }
      if ((uStack_478 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_478 & 0xff00ffffffffffff) - 8);
      }
      uStack_478 = 0;
      if ((uStack_47e & 0x8000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT62(uStack_47e,uStack_480) & 0xff00ffffffffffff) - 8);
      }
      if (((cStack_608 == '\x01') && (cStack_628 == '\x01')) && ((bStack_640 & 1) != 0)) {
        func_0x0412a280(uStack_630,CONCAT71(uStack_63f,bStack_640) & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_6e8 & 1) != 0) {
        func_0x0412a280(CONCAT26(uStack_6d2,
                                 CONCAT24(sStack_6d4,
                                          CONCAT22(sStack_6d6,CONCAT11(uStack_6d7,uStack_6d8)))),
                        (ulong)puStack_6e8 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_700 & 1) != 0) {
        func_0x0412a280(ppppplStack_6f0,(ulong)uStack_700 & 0xfffffffffffffffe);
      }
      if (((ulong)pppppplStack_718 & 1) != 0) {
        func_0x0412a280(pppppplStack_708,(ulong)pppppplStack_718 & 0xfffffffffffffffe);
      }
      func_0x0cb1aa10(&ppppplStack_1d8);
      func_0x04907660(&uStack_e8);
      return;
    }
    for (; (pppppplVar44 != pppppplStack_3f0 && (*(short *)pppppplVar44 == 0));
        pppppplVar44 = pppppplVar44 + 7) {
    }
    if (pppppplVar44 != pppppplStack_3f0) {
      sVar3 = *(short *)pppppplVar44;
      while (sVar3 != 4) {
        pppppplVar44 = pppppplVar44 + 7;
        if (pppppplVar44 == pppppplStack_3f0) goto LAB_0cb23b1d;
        sVar3 = *(short *)pppppplVar44;
      }
      func_0x04bda4a0(1,3,7,&UNK_012685e6);
      puVar37 = puStack_840;
      goto LAB_0cb23c3f;
    }
LAB_0cb23b1d:
    ppppppplVar26 = (long *******)&ppppppplStack_470;
    if (cStack_44c != '\x02') {
      ppppppplVar26 = ppppppplStack_470;
    }
    ppppppplVar29 = (long *******)0x0;
    if (iStack_450 == 0x11a591c9) {
      ppppppplVar29 = ppppppplVar26;
    }
    if (ppppppplVar42 != ppppppplVar29) {
      bVar2 = *(byte *)ppppppplVar29;
      if (((ulong)pppppplStack_718 & 1) == 0) {
        if ((bVar2 & 1) == 0) {
          pppppplStack_708 = ppppppplVar29[2];
          pppppplStack_718 = *ppppppplVar29;
          pppppplStack_710 = ppppppplVar29[1];
        }
        else {
          ppppppplVar26 = &pppppplStack_468;
          ppppppplVar42 = &pppppplStack_460;
          if (cStack_44c != '\x02') {
            ppppppplVar26 = ppppppplStack_470 + 1;
            ppppppplVar42 = ppppppplStack_470 + 2;
          }
          ppppppplVar29 = (long *******)&DAT_00000010;
          if (iStack_450 == 0x11a591c9) {
            ppppppplVar29 = ppppppplVar42;
          }
          ppppppplVar42 = (long *******)0x8;
          if (iStack_450 == 0x11a591c9) {
            ppppppplVar42 = ppppppplVar26;
          }
          FUN_04885070(&pppppplStack_718,*ppppppplVar29,*ppppppplVar42);
        }
      }
      else {
        ppppppplVar29 = &pppppplStack_468;
        ppppppplVar42 = &pppppplStack_460;
        ppppppplVar26 = (long *******)&ppppppplStack_470;
        if (cStack_44c != '\x02') {
          ppppppplVar29 = ppppppplStack_470 + 1;
          ppppppplVar42 = ppppppplStack_470 + 2;
          ppppppplVar26 = ppppppplStack_470;
        }
        bVar47 = iStack_450 == 0x11a591c9;
        ppppppplVar32 = (long *******)&DAT_00000010;
        if (bVar47) {
          ppppppplVar32 = ppppppplVar42;
        }
        pppppplVar44 = (long ******)0x1;
        if (bVar47) {
          pppppplVar44 = (long ******)((long)ppppppplVar26 + 1);
        }
        ppppppplVar42 = (long *******)0x8;
        if (bVar47) {
          ppppppplVar42 = ppppppplVar29;
        }
        bVar47 = (bVar2 & 1) != 0;
        if (bVar47) {
          pppppplVar44 = *ppppppplVar32;
        }
        pppppplVar23 = (long ******)(ulong)(bVar2 >> 1);
        if (bVar47) {
          pppppplVar23 = *ppppppplVar42;
        }
        func_0x04885120(&pppppplStack_718,pppppplVar44,pppppplVar23);
      }
    }
    ppppppplVar42 = &pppppplStack_458;
    if (cStack_44c != '\x02') {
      ppppppplVar42 = ppppppplStack_470 + 3;
    }
    ppppppplVar26 = (long *******)&DAT_00000018;
    if (iStack_450 == 0x11a591c9) {
      ppppppplVar26 = ppppppplVar42;
    }
    func_0x07c366b0(&uStack_700,ppppppplVar26);
    ppppplVar41 = ppppplStack_6f0;
    ppppppplVar42 = ppppppplStack_6f8;
    pbVar40 = (byte *)((long)&uStack_350 + 4);
    puVar9 = &uStack_354;
    pbVar43 = abStack_356;
    if (cStack_44c != '\x02') {
      pbVar40 = (byte *)((long)ppppppplStack_470 + 0x124);
      puVar9 = (uint *)((long)ppppppplStack_470 + 0x11c);
      pbVar43 = (byte *)((long)ppppppplStack_470 + 0x11a);
    }
    bVar47 = iStack_450 == 0x11a591c9;
    pbVar27 = (byte *)0x11a;
    if (bVar47) {
      pbVar27 = pbVar43;
    }
    bStack_5fe = *pbVar27;
    puVar28 = (uint *)0x11c;
    if (bVar47) {
      puVar28 = puVar9;
    }
    pbVar43 = (byte *)0x124;
    if (bVar47) {
      pbVar43 = pbVar40;
    }
    if (bStack_5f4 == *pbVar43) {
      if (bStack_5f4 != 0) {
        ppppppplVar26 = (long *******)&uStack_350;
        if (cStack_44c != '\x02') {
          ppppppplVar26 = ppppppplStack_470 + 0x24;
        }
        uStack_5fc = *puVar28;
        ppppppplVar29 = (long *******)0x120;
        if (iStack_450 == 0x11a591c9) {
          ppppppplVar29 = ppppppplVar26;
        }
        uVar1 = *(undefined4 *)ppppppplVar29;
        uStack_5f8 = (undefined1)uVar1;
        uStack_5f7 = (undefined1)((uint)uVar1 >> 8);
        uStack_5f6 = (undefined2)((uint)uVar1 >> 0x10);
      }
    }
    else if (bStack_5f4 == 0) {
      uVar31 = *(undefined8 *)puVar28;
      uStack_5fc = (uint)uVar31;
      uStack_5f8 = (undefined1)((ulong)uVar31 >> 0x20);
      uStack_5f7 = (undefined1)((ulong)uVar31 >> 0x28);
      uStack_5f6 = (undefined2)((ulong)uVar31 >> 0x30);
      bStack_5f4 = 1;
    }
    else {
      bStack_5f4 = 0;
    }
    pppplVar4 = *ppppplStack_800;
    pppplVar6 = ppppplStack_800[1];
    pppplVar38 = pppplVar4;
    if (pppplVar4 != pppplVar6) {
      if (((ulong)uStack_700 & 1) == 0) {
        ppplVar33 = (long ***)((ulong)uStack_700 >> 1 & 0x7f);
        do {
          bVar2 = *(byte *)pppplVar38;
          if ((bVar2 & 1) == 0) {
            ppplVar34 = (long ***)(ulong)(bVar2 >> 1);
          }
          else {
            ppplVar34 = pppplVar38[1];
          }
          if (ppplVar34 == ppplVar33) {
            if ((bVar2 & 1) == 0) {
              ppplVar34 = (long ***)((long)pppplVar38 + 1);
            }
            else {
              ppplVar34 = pppplVar38[2];
            }
            iVar18 = func_0x0eee3000(ppplVar34,(long)&uStack_700 + 1,ppplVar33);
            if (iVar18 == 0) break;
          }
          pppplVar38 = pppplVar38 + 0x22;
        } while (pppplVar38 != pppplVar6);
      }
      else {
        do {
          bVar2 = *(byte *)pppplVar38;
          if ((bVar2 & 1) == 0) {
            ppplVar33 = (long ***)(ulong)(bVar2 >> 1);
          }
          else {
            ppplVar33 = pppplVar38[1];
          }
          if ((long *******)ppplVar33 == ppppppplVar42) {
            if ((bVar2 & 1) == 0) {
              ppplVar33 = (long ***)((long)pppplVar38 + 1);
            }
            else {
              ppplVar33 = pppplVar38[2];
            }
            iVar18 = func_0x0eee3000(ppplVar33,ppppplVar41,ppppppplVar42);
            if (iVar18 == 0) break;
          }
          pppplVar38 = pppplVar38 + 0x22;
        } while (pppplVar38 != pppplVar6);
      }
    }
    ppppplVar41 = ppppplStack_800;
    if (pppplVar38 != pppplVar6) {
      func_0x07c366b0(pppplVar38,&uStack_700);
      *(byte *)((long)pppplVar38 + 0x102) = bStack_5fe;
      bVar2 = *(byte *)((long)pppplVar38 + 0x10c);
      puVar37 = puStack_840;
      if (bVar2 == bStack_5f4) {
        if (bVar2 != 0) {
          *(ulong *)((long)pppplVar38 + 0x104) =
               CONCAT26(uStack_5f6,CONCAT15(uStack_5f7,CONCAT14(uStack_5f8,uStack_5fc)));
        }
      }
      else if (bVar2 == 0) {
        *(ulong *)((long)pppplVar38 + 0x104) =
             CONCAT26(uStack_5f6,CONCAT15(uStack_5f7,CONCAT14(uStack_5f8,uStack_5fc)));
        *(byte *)((long)pppplVar38 + 0x10c) = 1;
      }
      else {
        *(byte *)((long)pppplVar38 + 0x10c) = 0;
      }
      goto LAB_0cb23c3f;
    }
    if (pppplVar6 < ppppplStack_800[2]) {
      func_0x07c36aa0(pppplVar6,&uStack_700);
      *(uint *)((long)pppplVar6 + 0x109) = CONCAT13(bStack_5f4,CONCAT21(uStack_5f6,uStack_5f7));
      *(ulong *)((long)pppplVar6 + 0x102) =
           CONCAT17(uStack_5f7,
                    CONCAT16(uStack_5f8,CONCAT42(uStack_5fc,CONCAT11(uStack_5fd,bStack_5fe))));
      ppppplVar41[1] = pppplVar6 + 0x22;
      ppppplVar41[1] = pppplVar6 + 0x22;
      puVar37 = puStack_840;
      goto LAB_0cb23c3f;
    }
    ppppppplVar42 = (long *******)((long)pppplVar6 - (long)pppplVar4);
    uVar35 = ((long)ppppppplVar42 >> 4) * -0xf0f0f0f0f0f0f0f + 1;
    if (uVar35 < 0xf0f0f0f0f0f0f1) {
      lVar24 = (long)ppppplStack_800[2] - (long)pppplVar4 >> 4;
      uVar30 = lVar24 * -0x1e1e1e1e1e1e1e1e;
      if (uVar35 < uVar30) {
        uVar35 = uVar30;
      }
      if (0x78787878787877 < (ulong)(lVar24 * -0xf0f0f0f0f0f0f0f)) {
        uVar35 = 0xf0f0f0f0f0f0f0;
      }
      ppppppplStack_7d8 = (long *******)ppppplStack_800;
      if (uVar35 == 0) {
        ppppplVar41 = (long *****)0x0;
      }
      else {
        if (0xf0f0f0f0f0f0f0 < uVar35) goto LAB_0cb2450a;
        ppppplVar41 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35 * 0x110);
        if (ppppplVar41 == (long *****)0x0) {
          FUN_0eec74c0(uVar35 * 0x110,0);
          ppppplVar41 = (long *****)0x0;
        }
      }
      pbVar43 = (byte *)((long)ppppppplVar42 + (long)ppppplVar41);
      uStack_7e0 = (long ******)(ppppplVar41 + uVar35 * 0x22);
      pppppplStack_7f8 = (long ******)ppppplVar41;
      pppppplStack_7f0 = (long ******)pbVar43;
      pppppplStack_7e8 = (long ******)pbVar43;
      func_0x07c36aa0(pbVar43,&uStack_700);
      ppppplVar41 = ppppplStack_800;
      *(uint *)(pbVar43 + 0x109) = CONCAT13(bStack_5f4,CONCAT21(uStack_5f6,uStack_5f7));
      *(ulong *)(pbVar43 + 0x102) =
           CONCAT17(uStack_5f7,
                    CONCAT16(uStack_5f8,CONCAT42(uStack_5fc,CONCAT11(uStack_5fd,bStack_5fe))));
      pppplVar46 = (long ****)((long)pppppplStack_7e8 + 0x110);
      pppplVar38 = (long ****)
                   ((long)pppppplStack_7f0 + ((long)*ppppplStack_800 - (long)ppppplStack_800[1]));
      pppppplStack_7e8 = (long ******)pppplVar46;
      func_0x07c95fc0(ppppplStack_800,*ppppplStack_800,ppppplStack_800[1],pppplVar38);
      pppplVar4 = *ppppplVar41;
      pppplVar6 = ppppplVar41[2];
      *ppppplVar41 = pppplVar38;
      ppppplVar41[1] = pppplVar46;
      ppppplVar41[2] = (long ****)uStack_7e0;
      if (pppplVar4 != (long ****)0x0) {
        func_0x0412a280(pppplVar4,(long)pppplVar6 - (long)pppplVar4);
      }
      ppppplStack_800[1] = pppplVar46;
      puVar37 = puStack_840;
      goto LAB_0cb23c3f;
    }
  }
  else {
    uVar35 = *(ulong *)(((ulong)ppppplStack_830 & 0xff00ffffffffffff) - 8);
    if (uVar35 != 0) goto LAB_0cb21dff;
LAB_0cb21e38:
    if (((pppppplStack_3e8 == (long ******)0x0) || (*(char *)pppppplStack_3e8 == '\0')) &&
       (cVar17 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_011e33e8),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((puStack_3c8 == (undefined8 *)0x0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_011e33e8),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((pppppplStack_3e8 == (long ******)0x0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)pppppplStack_3e8 == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    ppppppplVar42 = ppppppplStack_3d8;
    ppppplVar41 = (long *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (ppppplVar41 == (long *****)0x0) {
      FUN_0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(ppppplVar41,&uStack_3b8,&sStack_838);
    ppppplVar41[8] = (long ****)0x0;
    ppppplVar41[9] = (long ****)0x0;
    ppppplVar41[10] = (long ****)0x0;
    pppppplVar23 = ppppppplVar42[1];
    pppppplVar5 = ppppppplVar42[2];
    if (pppppplVar5 == (long ******)0x0) {
      ppppplVar41[8] = (long ****)pppppplVar23;
      ppppplVar41[9] = (long ****)0x0;
    }
    else {
      LOCK();
      pppppplVar5[1] = (long *****)((long)pppppplVar5[1] + 1);
      UNLOCK();
      pppplVar4 = ppppplVar41[9];
      ppppplVar41[8] = (long ****)pppppplVar23;
      ppppplVar41[9] = (long ****)pppppplVar5;
      if (pppplVar4 != (long ****)0x0) {
        LOCK();
        pppplVar6 = pppplVar4 + 1;
        ppplVar33 = *pppplVar6;
        *pppplVar6 = (long ***)((long)*pppplVar6 + -1);
        UNLOCK();
        if (ppplVar33 == (long ***)0x0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
          func_0x0412c2d0(pppplVar4);
        }
        pppppplVar23 = (long ******)ppppplVar41[8];
      }
    }
    if ((pppppplVar23 != (long ******)0x0) &&
       (ppppplVar41[10] = (long ****)ppppppplVar42, *(char *)pppppplVar23 != '\0')) {
      ppppplVar41[0xe] = (long ****)0x0;
      ppppplVar41[0xf] = (long ****)0x0;
      ppppplVar41[0xc] = (long ****)0x0;
      ppppplVar41[0xd] = (long ****)0x0;
      *(undefined4 *)(ppppplVar41 + 0x10) = 0x3f800000;
      *(undefined1 *)(ppppplVar41 + 0x12) = 0;
      *(undefined1 *)(ppppplVar41 + 0x24) = 0;
      *ppppplVar41 = (long ****)&UNK_0f3f11d0;
      ppppplVar41[0x30] = (long ****)0x0;
      ppppplVar41[0x32] = (long ****)0x0;
      ppppplVar41[0x2a] = (long ****)(ppppplVar41 + 0x26);
      ppppplVar41[0x26] = (long ****)&UNK_0f3f1350;
      pppppplStack_7f8 = (long ******)ppppplVar41;
      func_0x0d6afb30(pppppplVar44,&pppppplStack_7f8);
      if (pppppplStack_7f8 != (long ******)0x0) {
        (*(code *)(*pppppplStack_7f8)[1])();
      }
      goto LAB_0cb220a5;
    }
    func_0x04890760();
LAB_0cb24500:
    func_0x04891200();
  }
  func_0x07c93220();
LAB_0cb2450a:
  uVar31 = func_0x04882eb0();
  ppppplVar41[1] = (long ****)ppppppplVar42;
  func_0x05d85c50(&pppppplStack_3f8);
  func_0x05ebba90(&uStack_4a8);
  func_0x0cb24b60(&pppppplStack_718);
  func_0x0cb1aa10(&ppppplStack_1d8);
  func_0x04907660(&uStack_e8);
  uVar31 = func_0x0eee2d70(uVar31);
  pppppplVar44 = pppppplStack_7f8;
  ppppppplStack_848 = (long *******)pppppplStack_7f8;
  pppppplStack_7f8 = (long ******)0x0;
  if (pppppplVar44 != (long ******)0x0) {
    (*(code *)(*pppppplVar44)[1])();
  }
  func_0x0cb1a750(&pppppplStack_718);
  func_0x0ee386e0(&ppppplStack_828);
  func_0x0ee386e0(&ppppplStack_830);
  func_0x0cb1a8b0(&pppppplStack_3f8);
  func_0x0ee386e0(&puStack_5b8);
  func_0x0ee386e0(&puStack_5c0);
  func_0x0ee386e0(&uStack_720);
  func_0x0ee386e0(&uStack_5b0);
  func_0x0cb1aa10(&ppppplStack_1d8);
  func_0x049858d0(&pppplStack_748);
  func_0x04907660(&uStack_e8);
  func_0x0eee2d70(uVar31);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


