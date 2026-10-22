/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27e510 (ELF vaddr 0xd17e510)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d27e510, 0d27ec27] [0d27ec30, 0d27ed6d] [0d27ed70, 0d27edbe] [0d27edc0, 0d27f779] [0d27f780, 0d27f8e5] [0d27f8f0, 0d27f9c3] [0d27f9ec, 0d27fa0b] [0d27fcab, 0d27fd3d]]
 * Ghidra: FUN_0d27e510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d27e510(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  bool bVar28;
  float fVar29;
  short sStack_91c;
  undefined1 uStack_909;
  undefined8 uStack_908;
  ulong uStack_900;
  undefined1 *puStack_8f8;
  undefined1 auStack_8ec [4];
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  float fStack_8b8;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined *puStack_898;
  code *pcStack_890;
  undefined4 uStack_888;
  undefined1 uStack_884;
  long *plStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  long lStack_868;
  undefined8 uStack_860;
  float fStack_858;
  uint uStack_854;
  uint uStack_850;
  uint uStack_84c;
  undefined *puStack_848;
  long *plStack_840;
  long *plStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined2 uStack_7f0;
  undefined2 uStack_7ee;
  undefined4 uStack_7ec;
  undefined2 uStack_7e8;
  undefined6 uStack_7e6;
  undefined2 uStack_7e0;
  undefined6 uStack_7de;
  long lStack_7d8;
  ulong uStack_7d0;
  long *plStack_7c8;
  ulong uStack_7c0;
  undefined4 uStack_7b8;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined *puStack_798;
  code *pcStack_790;
  undefined4 uStack_788;
  undefined1 uStack_784;
  long *plStack_780;
  undefined8 uStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined **ppuStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined **ppuStack_748;
  undefined *puStack_740;
  long *plStack_730;
  long lStack_728;
  long lStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined4 uStack_708;
  ulong uStack_700;
  long lStack_6f8;
  long *plStack_6f0;
  long lStack_6e8;
  undefined *puStack_6e0;
  byte bStack_6d8;
  undefined1 uStack_6d7;
  undefined6 uStack_6d6;
  undefined8 uStack_6c8;
  undefined1 *puStack_6c0;
  ulong uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 uStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  byte bStack_690;
  undefined1 uStack_68f;
  undefined6 uStack_68e;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined1 uStack_660;
  undefined *apuStack_658 [2];
  undefined *puStack_648;
  code *pcStack_640;
  undefined4 uStack_638;
  undefined1 uStack_634;
  long lStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined *puStack_618;
  undefined2 uStack_610;
  undefined **ppuStack_608;
  undefined *puStack_600;
  undefined2 uStack_5f8;
  undefined **ppuStack_5f0;
  undefined4 *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined *puStack_5d8;
  long **pplStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined1 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [384];
  undefined2 uStack_330;
  undefined1 uStack_32e;
  undefined8 uStack_32c;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [256];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_808 = 0;
  uStack_7e8 = 0;
  uStack_7e6 = 0;
  uStack_7e0 = 0;
  uStack_7de = 0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7ee = 0;
  uStack_7ec = 0;
  uStack_818 = 0;
  uStack_810 = 0;
  lStack_828 = 0;
  lStack_820 = 0;
  plStack_838 = (long *)0x0;
  lStack_830 = 0;
  puStack_848 = (undefined *)0x0;
  plStack_840 = (long *)0x0;
  uStack_800 = 0x3f600000;
  lStack_868 = param_2;
  plStack_730 = param_4;
  func_0x048af640(&lStack_830,8);
  uStack_7e8 = 0;
  uStack_7e6 = 0;
  uStack_7e0 = 0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7ee = 0;
  uStack_7ec = 0;
  puStack_848 = &UNK_0f534768;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0ef44a60;
  plStack_840 = plVar13 + 3;
  *(undefined1 *)(plVar13 + 3) = 1;
  puStack_848 = &UNK_0ef471f0;
  plStack_838 = plVar13;
  func_0x0e4daec0(&puStack_848);
  uVar12 = (**(code **)(*param_3 + 0x18))(param_3);
  func_0x04134310(&uStack_308,uVar12);
  puStack_5e8 = (undefined4 *)0x0;
  ppuStack_5e0 = (undefined **)0x0;
  puStack_5d8 = (undefined *)0x0;
  func_0x0412f770(&puStack_5e8,0x1f);
  func_0x0412f8c0(&puStack_5e8,&UNK_013387bb,4);
  ppuVar20 = (undefined **)((ulong)uStack_308 >> 1 & 0x7f);
  lVar26 = (long)&uStack_308 + 1;
  if (((ulong)uStack_308 & 1) != 0) {
    ppuVar20 = ppuStack_300;
    lVar26 = CONCAT44(uStack_2f4,uStack_2f8);
  }
  func_0x0412f8c0(&puStack_5e8,lVar26,ppuVar20);
  func_0x0412f8c0(&puStack_5e8,&UNK_0143fd83,8);
  uStack_758 = CONCAT44(uStack_2f4,uStack_2f8);
  puStack_768 = (undefined *)uStack_308;
  ppuStack_760 = ppuStack_300;
  uStack_750 = puStack_5e8;
  ppuStack_748 = ppuStack_5e0;
  puStack_740 = puStack_5d8;
  sVar2 = (short)param_3[0x15];
  sStack_91c = *(short *)((long)param_3 + 0xaa);
  uVar3 = *(undefined2 *)((long)param_3 + 0xac);
  plStack_7c8 = (long *)0x0;
  uStack_7c0 = 0;
  lStack_7d8 = 0;
  uStack_7d0 = 0;
  uStack_7b8 = 0x3f800000;
  lStack_8c8 = 0;
  lStack_8c0 = 0;
  uStack_8d8 = 0;
  lStack_8d0 = 0;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  fStack_8b8 = 0.875;
  func_0x0d29af10(&uStack_8e8,8);
  uStack_908 = 0;
  uStack_900 = 0;
  puStack_8f8 = (undefined1 *)0x0;
  ppuVar20 = (undefined **)((ulong)uStack_750 >> 1 & 0x7f);
  puVar9 = (undefined *)((long)&uStack_750 + 1);
  if (((ulong)uStack_750 & 1) != 0) {
    ppuVar20 = ppuStack_748;
    puVar9 = puStack_740;
  }
  cVar11 = (**(code **)(*plStack_730 + 0xa8))(plStack_730,puVar9,ppuVar20,&uStack_908,0xc);
  sStack_91c = sStack_91c - sVar2;
  if (cVar11 != '\0') {
    uStack_670 = uStack_908 >> 1 & 0x7f;
    puStack_678 = (undefined1 *)((long)&uStack_908 + 1);
    if ((uStack_908 & 1) != 0) {
      uStack_670 = uStack_900;
      puStack_678 = puStack_8f8;
    }
    puStack_698 = &UNK_0f534730;
    bStack_690 = 0;
    uStack_68f = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    puStack_600 = &UNK_0f4e3460;
    ppuStack_5f0 = &puStack_698;
    uStack_5f8 = 0x10;
    ppuStack_300 = &puStack_848;
    uStack_308 = (undefined8 *)&UNK_0ef46eb0;
    uStack_2f8 = 0xffffffff;
    puStack_2f0 = auStack_2e0;
    uStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfffc;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    auStack_8ec = (undefined1  [4])0x0;
    apuStack_658[0] = &UNK_0f45d2c0;
    puStack_5d8 = &UNK_0490c9f0;
    pplStack_5d0 = (long **)0x0;
    uStack_5c8 = CONCAT35(uStack_5c8._5_3_,0x495e97e5e);
    puStack_5e8 = (undefined4 *)auStack_8ec;
    plStack_5c0 = &lStack_830;
    uStack_5b8 = 0;
    puStack_5b0 = &UNK_0490c9d0;
    plStack_780 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (plStack_780 == (long *)0x0) {
      func_0x048b0de0(&uStack_8a8,&puStack_6e0);
      _DAT_0f54fd90 = (undefined4)uStack_8a8;
      uRam000000000f54fd94 = uStack_8a8._4_4_;
      uVar12 = (undefined4)uStack_8a0;
      uVar10 = uStack_8a0._4_4_;
      uStack_8a8 = (long *)0x0;
      uStack_8a0 = (long *)0x0;
      plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar12;
      uRam000000000f54fd9c = uVar10;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar7 = plVar13 + 1;
        lVar26 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
        }
      }
      plVar13 = uStack_8a0;
      if (uStack_8a0 != (long *)0x0) {
        LOCK();
        plVar7 = uStack_8a0 + 1;
        lVar26 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*uStack_8a0 + 0x10))(uStack_8a0);
          func_0x0412c2d0(plVar13);
        }
      }
      plStack_780 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    plStack_880 = &lStack_830;
    puStack_798 = &UNK_0d294cb0;
    uStack_788 = 0xb22a4da2;
    pcStack_790 = (code *)0x0;
    uStack_784 = 3;
    uStack_778 = 0;
    puStack_770 = (undefined *)0x0;
    puStack_898 = &UNK_0d294cb0;
    pcStack_890 = (code *)0x0;
    uStack_888 = 0xb22a4da2;
    uStack_884 = 3;
    uStack_7a8 = (long *)0x0;
    uStack_8a8 = &lStack_7d8;
    uStack_878 = 0;
    puStack_870 = &UNK_0d294c90;
    cVar11 = func_0x0ed6b4a0(&uStack_308,&puStack_600,&uStack_8a8,&puStack_5e8,apuStack_658);
    if ((pcStack_890 != (code *)0x0) && ((*pcStack_890)(&uStack_8a8), pcStack_790 != (code *)0x0)) {
      (*pcStack_790)(&uStack_7a8);
    }
    if (pplStack_5d0 != (long **)0x0) {
      (*(code *)pplStack_5d0)(&puStack_5e8);
    }
    uVar21 = uStack_7c0;
    lVar15 = lStack_8c0;
    lVar16 = lStack_8c8;
    lVar26 = lStack_8d0;
    if (cVar11 != '\0') {
      if ((ulong)((lStack_8c0 - lStack_8d0 >> 3) * -0x5555555555555555) < uStack_7c0) {
        if (0xaaaaaaaaaaaaaaa < uStack_7c0) {
LAB_0d27f9ba:
          uVar19 = func_0x0d29b8b0();
          if (pplStack_5d0 != (long **)0x0) {
            (*(code *)pplStack_5d0)(&puStack_5e8);
          }
          func_0x0490a470(&uStack_308);
          puStack_698 = &UNK_0f534730;
          if ((bStack_690 & 1) != 0) {
            func_0x0412a280(uStack_680,
                            CONCAT62(uStack_68e,CONCAT11(uStack_68f,bStack_690)) &
                            0xfffffffffffffffe);
          }
          if ((uStack_908 & 1) != 0) {
            func_0x0412a280(puStack_8f8,uStack_908 & 0xfffffffffffffffe);
          }
          func_0x0d27ced0(&uStack_8e8);
          func_0x0d280be0(&lStack_7d8);
          func_0x0d27ce40(&puStack_768);
          FUN_04904f60(&puStack_848);
          func_0x0eee2d70(uVar19);
          pcVar8 = (code *)swi(3);
          puVar17 = (undefined8 *)(*pcVar8)();
          return puVar17;
        }
        lVar27 = uStack_7c0 * 0x18;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar27);
        if (lVar14 == 0) {
          FUN_0eec74c0(lVar27,0);
        }
        lVar23 = (lVar16 - lVar26) + lVar14;
        uStack_860 = lVar14 + uVar21 * 0x18;
        lVar27 = lVar26;
        if (lVar26 != lVar16) {
          lVar15 = 0;
          do {
            *(undefined8 *)(lVar14 + lVar15) = *(undefined8 *)(lVar26 + lVar15);
            *(undefined4 *)(lVar14 + 8 + lVar15) = *(undefined4 *)(lVar26 + 8 + lVar15);
            uVar19 = *(undefined8 *)(lVar26 + 0x10 + lVar15);
            *(undefined8 *)(lVar26 + 0x10 + lVar15) = 0;
            *(undefined8 *)(lVar14 + 0x10 + lVar15) = uVar19;
            lVar27 = lVar26 + lVar15;
            lVar15 = lVar15 + 0x18;
          } while (lVar27 + 0x18 != lVar16);
          do {
            lVar15 = *(long *)(lVar26 + 0x10);
            *(undefined8 *)(lVar26 + 0x10) = 0;
            if (lVar15 != 0) {
              func_0x0ca74450(lVar15);
              func_0x0412a280(lVar15,0x70);
            }
            lVar26 = lVar26 + 0x18;
            lVar15 = lStack_8c0;
            lVar27 = lStack_8d0;
          } while (lVar26 != lVar16);
        }
        lStack_8c0 = uStack_860;
        lStack_8d0 = lVar14;
        lStack_8c8 = lVar23;
        if (lVar27 != 0) {
          func_0x0412a280(lVar27,lVar15 - lVar27);
        }
      }
      fVar29 = (float)func_0x0eee3ab0((float)uVar21 / fStack_8b8);
      func_0x0d29af10(&uStack_8e8,
                      (long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29);
      puStack_718 = (undefined8 *)0x0;
      uStack_710 = 0;
      lStack_728 = 0;
      lStack_720 = 0;
      uStack_708 = 0x3f800000;
      if (plStack_7c8 != (long *)0x0) {
        fStack_858 = (float)(int)sVar2;
        uStack_700 = (long)sVar2 << 0x20;
        lStack_6f8 = (ulong)(uint)((int)sStack_91c + (int)sVar2) << 0x20;
        plVar13 = plStack_7c8;
        do {
          uVar5 = *(uint *)(plVar13 + 5);
          uVar24 = *(int *)((long)plVar13 + 0x2c) << 0x10 | uVar5 & 0xffff;
          if ((uStack_908 & 1) == 0) {
            uStack_908 = uStack_908 & 0xffffffffffff0000;
          }
          else {
            *puStack_8f8 = 0;
            uStack_900 = 0;
          }
          bVar28 = (*(byte *)(plVar13 + 2) & 1) != 0;
          lVar26 = (long)plVar13 + 0x11;
          if (bVar28) {
            lVar26 = plVar13[4];
          }
          uVar21 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
          if (bVar28) {
            uVar21 = plVar13[3];
          }
          uStack_84c = uVar24;
          cVar11 = (**(code **)(*plStack_730 + 0xa8))(plStack_730,lVar26,uVar21,&uStack_908,0xc);
          if (cVar11 != '\0') {
            bVar28 = (uStack_908 & 1) == 0;
            puStack_6c0 = puStack_8f8;
            if (bVar28) {
              puStack_6c0 = (undefined1 *)((long)&uStack_908 + 1);
            }
            puStack_6e0 = &UNK_0f534730;
            bStack_6d8 = 0;
            uStack_6d7 = 0;
            uStack_6b8 = uStack_908 >> 1 & 0x7f;
            if (!bVar28) {
              uStack_6b8 = uStack_900;
            }
            uStack_6b0 = 0;
            uStack_6a8 = 0;
            puStack_618 = &UNK_0f4e3460;
            ppuStack_608 = &puStack_6e0;
            uStack_610 = 0x10;
            ppuStack_5e0 = &puStack_848;
            puStack_5e8 = (undefined4 *)&UNK_0ef46eb0;
            puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,0xffffffff);
            pplStack_5d0 = &plStack_5c0;
            uStack_5c8 = 0x800000000;
            puStack_4c0 = auStack_4b0;
            uStack_4b8 = 0x800000000;
            uStack_330 = 0xfffc;
            uStack_32e = 1;
            uStack_32c = 0xffffffff00000000;
            uStack_320 = 0;
            uStack_318 = 0;
            puStack_6a0 = &UNK_0f45d338;
            puStack_898 = &UNK_0490c9f0;
            uStack_888 = 0x95e97e5e;
            pcStack_890 = (code *)0x0;
            uStack_884 = 4;
            uStack_8a8 = (long *)auStack_8ec;
            plStack_880 = &lStack_830;
            uStack_878 = 0;
            puStack_870 = &UNK_0490c9d0;
            lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            if (lVar26 == 0) {
              func_0x048b0de0(&uStack_7a8,&uStack_909);
              _DAT_0f54fd90 = (undefined4)uStack_7a8;
              uRam000000000f54fd94 = uStack_7a8._4_4_;
              uVar12 = (undefined4)uStack_7a0;
              uVar10 = uStack_7a0._4_4_;
              uStack_7a8 = (long *)0x0;
              uStack_7a0 = (long *)0x0;
              plVar7 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
              _DAT_0f54fd98 = uVar12;
              uRam000000000f54fd9c = uVar10;
              if (plVar7 != (long *)0x0) {
                LOCK();
                plVar1 = plVar7 + 1;
                lVar26 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar26 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  func_0x0412c2d0(plVar7);
                }
              }
              plVar7 = uStack_7a0;
              if (uStack_7a0 != (long *)0x0) {
                LOCK();
                plVar1 = uStack_7a0 + 1;
                lVar26 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar26 == 0) {
                  (**(code **)(*uStack_7a0 + 0x10))(uStack_7a0);
                  func_0x0412c2d0(plVar7);
                }
              }
              lVar26 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            }
            plStack_780 = &lStack_830;
            puStack_648 = &UNK_0d296fd0;
            uStack_638 = 0x33ebd5b1;
            pcStack_640 = (code *)0x0;
            uStack_634 = 3;
            uStack_628 = 0;
            uStack_620 = 0;
            puStack_798 = &UNK_0d296fd0;
            pcStack_790 = (code *)0x0;
            uStack_788 = 0x33ebd5b1;
            uStack_784 = 3;
            apuStack_658[0] = (undefined *)0x0;
            uStack_7a8 = &lStack_728;
            uStack_778 = 0;
            puStack_770 = &UNK_0d296fb0;
            lStack_630 = lVar26;
            cVar11 = func_0x0ed6b4a0(&puStack_5e8,&puStack_618,&uStack_7a8,&uStack_8a8,&puStack_6a0)
            ;
            if ((pcStack_790 != (code *)0x0) &&
               ((*pcStack_790)(&uStack_7a8), pcStack_640 != (code *)0x0)) {
              (*pcStack_640)(apuStack_658);
            }
            plStack_6f0 = plVar13;
            if (pcStack_890 != (code *)0x0) {
              (*pcStack_890)(&uStack_8a8);
            }
            if (cVar11 != '\0') {
              plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
              if (plVar13 == (long *)0x0) {
                FUN_0eec74c0(0x70,0);
              }
              plVar13[2] = 0;
              plVar13[3] = 0;
              *plVar13 = 0;
              plVar13[1] = 0;
              plVar13[4] = 0;
              *(undefined4 *)(plVar13 + 4) = 0x3f800000;
              plVar13[5] = 0;
              plVar13[6] = 0;
              plVar13[7] = 0;
              plVar13[8] = 0;
              plVar13[9] = 0;
              plVar13[10] = 0;
              plVar13[0xb] = 0;
              plVar13[0xc] = 0;
              plVar13[0xd] = 0;
              uStack_8a8 = plVar13;
              lVar16 = func_0x0d29b5b0(&uStack_8e8,&uStack_84c);
              lVar26 = *(long *)(lVar16 + 0x10);
              *(long **)(lVar16 + 0x10) = plVar13;
              if (lVar26 != 0) {
                func_0x0ca74450(lVar26);
                func_0x0412a280(lVar26,0x70);
                plVar13 = *(long **)(lVar16 + 0x10);
              }
              uStack_850 = (int)(short)uVar5 << 9;
              uVar24 = (int)uVar24 >> 7;
              uStack_854 = uVar24 & 0xfffffe00;
              plVar13[10] = lStack_868;
              plVar13[0xb] = uStack_850 | uStack_700;
              *(uint *)(plVar13 + 0xc) = uStack_854;
              *(ulong *)((long)plVar13 + 100) = lStack_6f8 + (ulong)uStack_850 + 0x1ff;
              *(uint *)((long)plVar13 + 0x6c) = uVar24 | 0x1ff;
              lStack_6e8 = lVar16;
              for (puVar17 = puStack_718; puVar17 != (undefined8 *)0x0;
                  puVar17 = (undefined8 *)*puVar17) {
                uVar4 = *(undefined2 *)((long)puVar17 + 0x14);
                uVar5 = *(uint *)(puVar17 + 2);
                uVar21 = (ulong)uStack_860 >> 0x20;
                uStack_860 = CONCAT44((int)uVar21,(float)(int)(uVar5 >> 0x12 & 0x1ff | uStack_854));
                uVar19 = *(undefined8 *)(lStack_6e8 + 0x10);
                iVar22 = (int)(float)(int)(uVar5 & 0x1ff | uStack_850);
                fVar29 = (float)floorf((float)(uVar5 >> 9 & 0x1ff) + fStack_858);
                iVar25 = (int)(float)uStack_860;
                lVar26 = func_0x0d280230(uVar19,CONCAT44((int)fVar29,iVar22),iVar25);
                func_0x0d27bcc0(lVar26 + 0x48,
                                (iVar25 - *(int *)(lVar26 + 0x38) & 0x1ffU) << 0x12 |
                                ((int)fVar29 - *(int *)(lVar26 + 0x34) & 0x1ffU) << 9 |
                                iVar22 - *(int *)(lVar26 + 0x30) & 0x1ffU,
                                (ulong)CONCAT12(*(undefined1 *)((long)puVar17 + 0x16),uVar4));
                uStack_8a8 = (long *)CONCAT44(uStack_8a8._4_4_,
                                              (*(uint *)(lVar26 + 0x38) & 0x1fffe00) << 7 |
                                              *(uint *)(lVar26 + 0x30) >> 9 & 0xffff);
                plVar13 = *(long **)(lVar26 + 0x20);
                if (plVar13 == (long *)0x0) {
                  func_0x04891200();
                  goto LAB_0d27f9ba;
                }
                (**(code **)(*plVar13 + 0x30))(plVar13,&uStack_8a8);
              }
            }
            func_0x0490a470(&puStack_5e8);
            puStack_6e0 = &UNK_0f534730;
            plVar13 = plStack_6f0;
            if ((bStack_6d8 & 1) != 0) {
              func_0x0412a280(uStack_6c8,
                              CONCAT62(uStack_6d6,CONCAT11(uStack_6d7,bStack_6d8)) &
                              0xfffffffffffffffe);
              plVar13 = plStack_6f0;
            }
          }
          plVar13 = (long *)*plVar13;
          lVar26 = lStack_728;
          puVar17 = puStack_718;
        } while (plVar13 != (long *)0x0);
        while (puVar17 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar17;
          lStack_728 = lVar26;
          func_0x0412a280(puVar17,0x18);
          lVar26 = lStack_728;
          puVar17 = puVar6;
        }
        lStack_728 = 0;
        if (lVar26 != 0) {
          func_0x0412a280(lVar26,lStack_720 << 3);
        }
      }
    }
    func_0x0490a470(&uStack_308);
    puStack_698 = &UNK_0f534730;
    if ((bStack_690 & 1) != 0) {
      func_0x0412a280(uStack_680,
                      CONCAT62(uStack_68e,CONCAT11(uStack_68f,bStack_690)) & 0xfffffffffffffffe);
    }
  }
  if ((uStack_908 & 1) != 0) {
    func_0x0412a280(puStack_8f8,uStack_908 & 0xfffffffffffffffe);
  }
  *param_1 = uStack_8e8;
  param_1[1] = uStack_8e0;
  param_1[2] = uStack_8d8;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  uStack_8d8 = 0;
  param_1[3] = lStack_8d0;
  param_1[4] = lStack_8c8;
  param_1[5] = lStack_8c0;
  lStack_8d0 = 0;
  lStack_8c8 = 0;
  lStack_8c0 = 0;
  *(float *)(param_1 + 6) = fStack_8b8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(short *)(param_1 + 0xc) = sVar2;
  *(short *)((long)param_1 + 0x62) = sStack_91c;
  *(undefined2 *)((long)param_1 + 100) = uVar3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = uStack_758;
  param_1[0x12] = puStack_768;
  param_1[0x13] = ppuStack_760;
  puStack_768 = (undefined *)0x0;
  ppuStack_760 = (undefined **)0x0;
  uStack_758 = 0;
  param_1[0x17] = puStack_740;
  param_1[0x15] = uStack_750;
  param_1[0x16] = ppuStack_748;
  uStack_750 = (undefined4 *)0x0;
  ppuStack_748 = (undefined **)0x0;
  puStack_740 = (undefined *)0x0;
  param_1[0x1b] = lStack_830;
  param_1[0x1c] = lStack_828;
  param_1[0x1d] = lStack_820;
  lStack_830 = 0;
  lStack_828 = 0;
  lStack_820 = 0;
  param_1[0x1e] = uStack_818;
  param_1[0x1f] = uStack_810;
  param_1[0x20] = uStack_808;
  uStack_818 = 0;
  uStack_810 = 0;
  uStack_808 = 0;
  *(undefined4 *)(param_1 + 0x21) = (undefined4)uStack_800;
  *(undefined4 *)(param_1 + 0x22) = (undefined4)uStack_7f8;
  *(undefined4 *)((long)param_1 + 0x114) = uStack_7f8._4_4_;
  *(uint *)(param_1 + 0x23) = CONCAT22(uStack_7ee,uStack_7f0);
  *(undefined4 *)((long)param_1 + 0x11c) = uStack_7ec;
  param_1[0x24] = CONCAT62(uStack_7e6,uStack_7e8);
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7ee = 0;
  uStack_7ec = 0;
  uStack_7e8 = 0;
  uStack_7e6 = 0;
  *(undefined2 *)(param_1 + 0x25) = uStack_7e0;
  param_1[0x18] = &UNK_0f534768;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar21 = uStack_7d0;
  lVar26 = lStack_7d8;
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0ef44a60;
  *(undefined1 *)(puVar17 + 3) = 1;
  param_1[0x19] = puVar17 + 3;
  param_1[0x1a] = puVar17;
  param_1[0x18] = &UNK_0ef471f0;
  lStack_7d8 = 0;
  param_1[0x26] = lVar26;
  param_1[0x27] = uStack_7d0;
  uStack_7d0 = 0;
  param_1[0x28] = plStack_7c8;
  param_1[0x29] = uStack_7c0;
  *(undefined4 *)(param_1 + 0x2a) = uStack_7b8;
  if (uStack_7c0 == 0) {
    param_1[0x2b] = lStack_868;
    plVar13 = plStack_7c8;
    if (plStack_7c8 != (long *)0x0) {
      do {
        plVar7 = (long *)*plVar13;
        if ((*(byte *)(plVar13 + 2) & 1) != 0) {
          func_0x0412a280(plVar13[4],plVar13[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(plVar13,0x30);
        lVar26 = lStack_7d8;
        plVar13 = plVar7;
      } while (plVar7 != (long *)0x0);
      lStack_7d8 = 0;
      if (lVar26 != 0) {
        func_0x0412a280(lVar26,uStack_7d0 << 3);
      }
    }
  }
  else {
    uVar18 = plStack_7c8[1];
    if ((uVar21 & uVar21 - 1) == 0) {
      uVar18 = uVar18 & uVar21 - 1;
    }
    else if (uVar21 <= uVar18) {
      if ((uVar18 | uVar21) >> 0x20 == 0) {
        uVar18 = (uVar18 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar18 = uVar18 % uVar21;
      }
    }
    *(undefined8 **)(lVar26 + uVar18 * 8) = param_1 + 0x28;
    param_1[0x2b] = lStack_868;
  }
  if (((ulong)uStack_750 & 1) != 0) {
    func_0x0412a280(puStack_740,(ulong)uStack_750 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_768 & 1) != 0) {
    func_0x0412a280(uStack_758,(ulong)puStack_768 & 0xfffffffffffffffe);
  }
  plVar13 = plStack_838;
  puStack_848 = &UNK_0f534768;
  if (plStack_838 == (long *)0x0) {
    *(undefined1 *)plStack_840 = 0;
  }
  else {
    *(undefined1 *)plStack_840 = 0;
    LOCK();
    plVar7 = plStack_838 + 1;
    lVar26 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_838 + 0x10))(plStack_838);
      func_0x0412c2d0(plVar13);
    }
  }
  lVar26 = uStack_7f8;
  if (uStack_7f8 != 0) {
    for (lVar16 = CONCAT44(uStack_7ec,CONCAT22(uStack_7ee,uStack_7f0)); lVar26 != lVar16;
        lVar16 = lVar16 + -0x38) {
      if ((*(byte *)(lVar16 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar16 + -0x28),
                        *(ulong *)(lVar16 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_7f0 = (undefined2)lVar26;
    uStack_7ee = (undefined2)((ulong)lVar26 >> 0x10);
    uStack_7ec = (undefined4)((ulong)lVar26 >> 0x20);
    func_0x0412a280(uStack_7f8,CONCAT62(uStack_7e6,uStack_7e8) - uStack_7f8);
  }
  uStack_308 = &uStack_818;
  func_0x048b0f50(&uStack_308);
  if (lStack_830 != 0) {
    lStack_828 = lStack_830;
    func_0x0412a280(lStack_830,lStack_820 - lStack_830);
  }
  return param_1;
}


