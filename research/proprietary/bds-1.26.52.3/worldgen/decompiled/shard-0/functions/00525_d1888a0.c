/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2888a0 (ELF vaddr 0xd1888a0)
 * Label: caller-of-callee
 * Body:  [[04908910, 04908b54] [04908b60, 04908bab] [0d2888a0, 0d288b06] [0d288b10, 0d288b5c] [0d288b60, 0d288dbb] [0d288dc0, 0d288e2d] [0d288e30, 0d288e69] [0d288e70, 0d288eab] [0d288eb0, 0d288f06] [0d288f10, 0d289015] [0d289020, 0d289205] [0d289210, 0d289263] [0d289270, 0d2893a4] [0d2893b0, 0d28941d] [0d289420, 0d28953d] [0d289540, 0d289588] [0d289590, 0d289605] [0d289610, 0d28964d] [0d289650, 0d289677] [0d289680, 0d2898da] [0d2898e0, 0d289911] [0d289920, 0d28995b] [0d289960, 0d2899b6] [0d2899c0, 0d289b0b] [0d289b10, 0d289b35] [0d289b40, 0d289d69] [0d289d70, 0d289e95] [0d289ea0, 0d28a5de] [0d28a5e0, 0d28ac54] [0d28ac60, 0d28acc7] [0d28acd0, 0d28adc1] [0d28aee4, 0d28af28] [0d28b01e, 0d28b074]]
 * Ghidra: FUN_0d2888a0
 */


/* WARNING: Possible PIC construction at 0x0d28abfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d28b026: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d28ac01) */
/* WARNING: Removing unreachable block (ram,0x0d28ac9e) */
/* WARNING: Removing unreachable block (ram,0x0d28ac21) */
/* WARNING: Removing unreachable block (ram,0x0d28ac42) */
/* WARNING: Removing unreachable block (ram,0x0d28aca9) */
/* WARNING: Removing unreachable block (ram,0x0d28acb6) */
/* WARNING: Removing unreachable block (ram,0x0d28acd9) */
/* WARNING: Removing unreachable block (ram,0x0d28ace0) */
/* WARNING: Removing unreachable block (ram,0x0d28acd0) */
/* WARNING: Removing unreachable block (ram,0x0d28acf3) */
/* WARNING: Removing unreachable block (ram,0x0d28acc6) */
/* WARNING: Removing unreachable block (ram,0x0d28acfb) */
/* WARNING: Removing unreachable block (ram,0x0d28ad13) */
/* WARNING: Removing unreachable block (ram,0x0d28ad3d) */
/* WARNING: Removing unreachable block (ram,0x0d28ad55) */
/* WARNING: Removing unreachable block (ram,0x0d28b02b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2888a0(long param_1,ulong param_2,undefined8 param_3,long param_4,byte **param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  byte **ppbVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  byte **ppbVar17;
  long *plVar18;
  ulong *puVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  byte **ppbVar24;
  long lVar25;
  uint uVar26;
  byte *pbVar27;
  byte **ppbVar28;
  byte **ppbVar29;
  ulong uVar30;
  undefined4 *puVar31;
  ulong uVar32;
  long *plVar33;
  bool bVar34;
  float fVar35;
  undefined8 uStack_828;
  byte *pbStack_820;
  byte *pbStack_818;
  ulong *puStack_810;
  ulong uStack_808;
  byte **ppbStack_800;
  byte *pbStack_7f8;
  byte **ppbStack_7f0;
  long *plStack_7e8;
  ulong uStack_7e0;
  undefined8 uStack_7d8;
  ulong uStack_7c8;
  byte **ppbStack_7c0;
  long *plStack_7b8;
  ulong uStack_7b0;
  float fStack_7a8;
  byte **ppbStack_7a0;
  byte *pbStack_798;
  byte **ppbStack_790;
  long *plStack_788;
  ulong uStack_780;
  float fStack_778;
  long *plStack_768;
  ulong uStack_760;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  byte *pbStack_748;
  undefined8 uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  undefined *puStack_728;
  byte **ppbStack_720;
  byte **ppbStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined2 uStack_6d0;
  undefined6 uStack_6ce;
  undefined2 uStack_6c8;
  undefined6 uStack_6c6;
  undefined2 uStack_6c0;
  undefined6 uStack_6be;
  long lStack_6b8;
  long lStack_6b0;
  long *plStack_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long *plStack_668;
  undefined8 uStack_660;
  undefined1 auStack_658 [4];
  undefined4 uStack_654;
  undefined8 uStack_650;
  byte **ppbStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  int iStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_548;
  undefined8 uStack_540;
  byte *pbStack_538;
  byte *pbStack_530;
  byte **ppbStack_528;
  long *plStack_520;
  ulong uStack_518;
  undefined4 uStack_510;
  ulong uStack_508;
  undefined4 uStack_500;
  byte *pbStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  long alStack_108 [4];
  long *plStack_e8;
  long alStack_d8 [4];
  long *plStack_b8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  uStack_6e8 = 0;
  uStack_6c8 = 0;
  uStack_6c6 = 0;
  uStack_6c0 = 0;
  uStack_6be = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  uStack_6ce = 0;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  uStack_708 = 0;
  uStack_700 = 0;
  ppbStack_718 = (byte **)0x0;
  uStack_710 = 0;
  puStack_728 = (undefined *)0x0;
  ppbStack_720 = (byte **)0x0;
  uStack_6e0 = 0x3f600000;
  uStack_738 = param_2;
  uStack_660 = param_3;
  func_0x048af640(&uStack_710,8);
  uStack_6c8 = 0;
  uStack_6c6 = 0;
  uStack_6c0 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  uStack_6ce = 0;
  puStack_728 = &UNK_0f534768;
  ppbVar10 = (byte **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (ppbVar10 == (byte **)0x0) goto LAB_0d28ad6c;
  do {
    ppbVar10[1] = (byte *)0x0;
    ppbVar10[2] = (byte *)0x0;
    *ppbVar10 = &UNK_0ef44a60;
    ppbStack_720 = ppbVar10 + 3;
    *(byte *)(ppbVar10 + 3) = 1;
    puStack_728 = &UNK_0ef471f0;
    ppbStack_718 = ppbVar10;
    func_0x0d2a37b0(&lStack_138,&puStack_728,0,0);
    FUN_0da5ff70(&puStack_728);
    puVar19 = *(ulong **)(param_4 + 0x98);
    func_0x0eee2dd0((long)&uStack_540 + 2,0,0x3f6);
    uStack_548 = 0x636f6c622f696f70;
    uStack_540 = (byte *)CONCAT62(uStack_540._2_6_,0x736b);
    pbStack_148 = (byte *)0xa;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    _auStack_658 = (byte **)0x0;
    uStack_650 = (byte **)0x0;
    ppbStack_648 = (byte **)0x0;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    uStack_630 = 0;
    uStack_628 = 0;
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    iStack_5c8 = 0;
    uStack_5a0 = 0x3f800000;
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_7c8 = 0;
    ppbStack_7c0 = (byte **)0x0;
    plStack_7b8 = (long *)0x0;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    plStack_6a8 = (long *)0x0;
    uStack_6a0 = 0;
    uStack_698 = 0x3f800000;
    uVar32 = puVar19[1];
    ppbVar29 = param_5;
    puStack_810 = puVar19;
    uStack_808 = uVar32;
    if (uVar32 != puVar19[2]) {
      ppbVar29 = &pbStack_7f8;
      do {
        pbVar15 = pbStack_148;
        uStack_808 = uVar32;
        if ((byte *)0xfffffffffffffff7 < pbStack_148) goto LAB_0d28ad91;
        if (pbStack_148 < (byte *)0x17) {
          uStack_828 = CONCAT71(uStack_828._1_7_,(char)pbStack_148 * '\x02');
          pbVar11 = (byte *)((long)&uStack_828 + 1);
          if (pbStack_148 != (byte *)0x0) goto LAB_0d288ba7;
        }
        else {
          uVar22 = ((ulong)pbStack_148 | 7) + 1;
          if (((ulong)pbStack_148 | 7) == 0x17) {
            uVar22 = 0x1a;
          }
          pbVar11 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
          if (pbVar11 == (byte *)0x0) {
            func_0x0eec74c0(uVar22,0);
          }
          uStack_828 = uVar22 | 1;
          pbStack_820 = pbVar15;
          pbStack_818 = pbVar11;
LAB_0d288ba7:
          func_0x0eee2f00(pbVar11,&uStack_548,pbVar15);
        }
        pbVar11[(long)pbVar15] = 0;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *plVar12 = (long)&UNK_0f45d9a8;
        plVar12[1] = (long)&uStack_7c8;
        plVar12[2] = (long)&lStack_138;
        plVar12[3] = (long)&lStack_6b8;
        plVar12[4] = (long)&uStack_808;
        plVar12[5] = (long)auStack_658;
        uVar9 = *(undefined8 *)(uVar32 + 0xe8);
        ppbVar10 = (byte **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (ppbVar10 == (byte **)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        *ppbVar10 = &UNK_0f45d9a8;
        uVar4 = *(undefined4 *)((long)plVar12 + 0xc);
        lVar13 = plVar12[2];
        uVar5 = *(undefined4 *)((long)plVar12 + 0x14);
        lVar16 = plVar12[3];
        uVar6 = *(undefined4 *)((long)plVar12 + 0x1c);
        lVar23 = plVar12[4];
        uVar7 = *(undefined4 *)((long)plVar12 + 0x24);
        *(int *)(ppbVar10 + 1) = (int)plVar12[1];
        *(undefined4 *)((long)ppbVar10 + 0xc) = uVar4;
        *(int *)(ppbVar10 + 2) = (int)lVar13;
        *(undefined4 *)((long)ppbVar10 + 0x14) = uVar5;
        *(int *)(ppbVar10 + 3) = (int)lVar16;
        *(undefined4 *)((long)ppbVar10 + 0x1c) = uVar6;
        *(int *)(ppbVar10 + 4) = (int)lVar23;
        *(undefined4 *)((long)ppbVar10 + 0x24) = uVar7;
        ppbVar10[5] = (byte *)plVar12[5];
        uStack_7d8 = ppbVar10;
        func_0x0d62a6f0(uVar9,&uStack_828,ppbVar29,*(undefined4 *)(uVar32 + 0x108),0);
        if (uStack_7d8 == ppbVar29) {
          lVar13 = 0x20;
LAB_0d288ca5:
          (**(code **)(*uStack_7d8 + lVar13))();
        }
        else {
          lVar13 = 0x28;
          if (uStack_7d8 != (byte **)0x0) goto LAB_0d288ca5;
        }
        (**(code **)(*plVar12 + 0x28))(plVar12);
        if ((uStack_828 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_818,uStack_828 & 0xfffffffffffffffe);
        }
        uVar32 = uStack_808 + 0x110;
      } while (uVar32 != puStack_810[2]);
      uStack_808 = uVar32;
      if (0 < iStack_5c8) {
        pbStack_7f8 = (byte *)0x65707954696f500e;
        ppbStack_7f0 = (byte **)((ulong)ppbStack_7f0 & 0xffffffffffffff00);
        (**(code **)(param_5[8] + 0x10))(param_5 + 8,&pbStack_7f8,auStack_658);
        if (((ulong)pbStack_7f8 & 1) != 0) {
          thunk_FUN_0ee326a0(plStack_7e8,(ulong)pbStack_7f8 & 0xfffffffffffffffe);
        }
      }
    }
    if ((uStack_7c8 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_7b8,uStack_7c8 & 0xfffffffffffffffe);
    }
    func_0x05f43b50(auStack_658);
    if (plStack_6a8 == (long *)0x0) goto LAB_0d28aba7;
    plStack_768 = (long *)(param_1 + 0x70);
    lStack_690 = param_1 + 0x38;
    plVar12 = plStack_6a8;
LAB_0d288dcc:
    plStack_7b8 = (long *)0x0;
    uStack_7b0 = 0;
    uStack_7c8 = 0;
    ppbStack_7c0 = (byte **)0x0;
    fStack_7a8 = 1.0;
    ppbVar10 = (byte **)plVar12[9];
    ppbStack_7a0 = (byte **)plVar12[10];
    if (ppbVar10 != ppbStack_7a0) {
      do {
        uStack_548 = 0;
        if (((ulong)*ppbVar10 & 1) == 0) {
          pbStack_530 = ppbVar10[2];
          uStack_540 = *ppbVar10;
          pbStack_538 = ppbVar10[1];
        }
        else {
          FUN_0412e5e0(&uStack_540,ppbVar10[2],ppbVar10[1]);
        }
        ppbStack_528 = (byte **)0x0;
        ppbStack_800 = ppbVar10;
        if (((ulong)uStack_540 & 1) == 0) {
          if ((byte)uStack_540 >> 1 != 0) goto LAB_0d2892d2;
LAB_0d2893b0:
          uStack_548 = 0;
        }
        else {
          if (pbStack_538 == (byte *)0x0) goto LAB_0d2893b0;
LAB_0d2892d2:
          pbVar15 = (byte *)((long)&uStack_540 + 1);
          if (((ulong)uStack_540 & 1) != 0) {
            pbVar15 = pbStack_530;
          }
          if ((pbVar15 == (byte *)0x0) || (*pbVar15 == 0)) goto LAB_0d2893b0;
          uVar32 = func_0x0eee2e90(pbVar15);
          uStack_548 = 0xcbf29ce484222325;
          if (uVar32 != 0) {
            if (7 < uVar32) {
              uVar22 = uVar32 & 0xfffffffffffffff8;
              do {
                uStack_548 = (((((((uStack_548 * 0x100000001b3 ^ (ulong)*pbVar15) * 0x100000001b3 ^
                                  (ulong)pbVar15[1]) * 0x100000001b3 ^ (ulong)pbVar15[2]) *
                                 0x100000001b3 ^ (ulong)pbVar15[3]) * 0x100000001b3 ^
                               (ulong)pbVar15[4]) * 0x100000001b3 ^ (ulong)pbVar15[5]) *
                              0x100000001b3 ^ (ulong)pbVar15[6]) * 0x100000001b3 ^ (ulong)pbVar15[7]
                ;
                pbVar15 = pbVar15 + 8;
                uVar22 = uVar22 - 8;
              } while (uVar22 != 0);
            }
            if ((uVar32 & 7) != 0) {
              uVar22 = 0;
              do {
                uStack_548 = uStack_548 * 0x100000001b3 ^ (ulong)pbVar15[uVar22];
                uVar22 = uVar22 + 1;
              } while (((uint)uVar32 & 7) != uVar22);
            }
          }
        }
        lVar13 = func_0x0cc422f0(0xf6ff9e0,&uStack_548,0,0);
        if (lVar13 != 0) {
          puVar19 = *(ulong **)(lVar13 + 0x1e8);
          puStack_810 = *(ulong **)(lVar13 + 0x1f0);
          if (puVar19 != puStack_810) {
            do {
              ppbVar10 = ppbStack_7c0;
              uVar32 = *puVar19;
              if (uVar32 != 0) {
                uVar22 = (((ulong)((int)uVar32 * 8 & 0xffffffc0) | 8) ^ uVar32 >> 0x20) *
                         -0x622015f714c7d297;
                uVar22 = (uVar22 >> 0x2f ^ uVar32 >> 0x20 ^ uVar22) * -0x622015f714c7d297;
                ppbVar28 = (byte **)((uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297);
                ppbVar17 = ppbVar29;
                if (ppbStack_7c0 != (byte **)0x0) {
                  uVar22 = (long)ppbStack_7c0 - ((ulong)ppbStack_7c0 >> 1 & 0x5555555555555555);
                  uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
                  uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                  if (uVar22 >> 0x38 < 2) {
                    ppbVar29 = (byte **)((ulong)((long)ppbStack_7c0 - 1U) & (ulong)ppbVar28);
                  }
                  else {
                    ppbVar29 = ppbVar28;
                    if (ppbStack_7c0 <= ppbVar28) {
                      ppbVar29 = (byte **)((ulong)ppbVar28 % (ulong)ppbStack_7c0);
                    }
                  }
                  plVar14 = *(long **)(uStack_7c8 + (long)ppbVar29 * 8);
                  ppbVar17 = ppbVar29;
                  if ((plVar14 != (long *)0x0) &&
                     (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
                    if ((byte)(uVar22 >> 0x38) < 2) {
                      do {
                        if ((byte **)plVar14[1] == ppbVar28) {
                          if (plVar14[2] == uVar32) goto LAB_0d289432;
                        }
                        else if ((byte **)((ulong)plVar14[1] & (ulong)((long)ppbStack_7c0 - 1U)) !=
                                 ppbVar29) break;
                        plVar14 = (long *)*plVar14;
                      } while (plVar14 != (long *)0x0);
                    }
                    else {
                      do {
                        ppbVar24 = (byte **)plVar14[1];
                        if (ppbVar24 == ppbVar28) {
                          if (plVar14[2] == uVar32) goto LAB_0d289432;
                        }
                        else {
                          if (ppbStack_7c0 <= ppbVar24) {
                            if (((ulong)ppbVar24 | (ulong)ppbStack_7c0) >> 0x20 == 0) {
                              if ((byte **)(((ulong)ppbVar24 & 0xffffffff) %
                                           ((ulong)ppbStack_7c0 & 0xffffffff)) == ppbVar29)
                              goto LAB_0d28954a;
                              break;
                            }
                            ppbVar24 = (byte **)((ulong)ppbVar24 % (ulong)ppbStack_7c0);
                          }
                          if (ppbVar24 != ppbVar29) break;
                        }
LAB_0d28954a:
                        plVar14 = (long *)*plVar14;
                      } while (plVar14 != (long *)0x0);
                    }
                  }
                }
                plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                if (plVar14 == (long *)0x0) {
                  func_0x0eec74c0(0x18,0);
                }
                *plVar14 = 0;
                plVar14[1] = (long)ppbVar28;
                plVar14[2] = uVar32;
                if ((long)ppbVar10 < 0) {
                  fVar35 = (float)ppbVar10;
                  if (ppbVar10 != (byte **)0x0) goto LAB_0d289667;
LAB_0d289680:
                  uVar32 = 1;
                  if ((byte **)0x2 < ppbVar10) {
                    uVar32 = (ulong)(((ulong)ppbVar10 & (ulong)((long)ppbVar10 - 1U)) != 0);
                  }
                  ppbVar29 = (byte **)((long)ppbVar10 * 2 | uVar32);
                  fVar35 = (float)ceilf((float)(uStack_7b0 + 1) / fStack_7a8);
                  ppbVar17 = (byte **)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f |
                                      (long)fVar35);
                  if (ppbVar17 < ppbVar29) {
                    ppbVar17 = ppbVar29;
                  }
                  ppbVar29 = (byte **)0x2;
                  if ((ppbVar17 == (byte **)0x1) ||
                     (ppbVar29 = ppbVar17, ((ulong)ppbVar17 & (ulong)((long)ppbVar17 - 1U)) == 0)) {
                    bVar34 = ppbVar29 < ppbVar10;
                    if (ppbVar29 <= ppbVar10) goto LAB_0d28970e;
LAB_0d2896ea:
                    func_0x0d263a90(&uStack_7c8,ppbVar29);
                  }
                  else {
                    ppbVar29 = (byte **)func_0x0412c3f0();
                    bVar34 = ppbVar29 < ppbStack_7c0;
                    ppbVar10 = ppbStack_7c0;
                    if (ppbStack_7c0 < ppbVar29) goto LAB_0d2896ea;
LAB_0d28970e:
                    if (bVar34) {
                      fVar35 = (float)ceilf((float)uStack_7b0 / fStack_7a8);
                      ppbVar17 = (byte **)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f |
                                          (long)fVar35);
                      if ((ppbVar10 < (byte **)0x3) ||
                         (uVar32 = (long)ppbVar10 - ((ulong)ppbVar10 >> 1 & 0x5555555555555555),
                         uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333)
                         , 1 < (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) *
                                      0x101010101010101 >> 0x38))) {
                        ppbVar17 = (byte **)func_0x0412c3f0(ppbVar17);
                      }
                      else if ((byte **)0x1 < ppbVar17) {
                        lVar13 = 0x3f;
                        if ((byte *)((long)ppbVar17 + -1) != (byte *)0x0) {
                          for (; (ulong)((long)ppbVar17 + -1) >> lVar13 == 0; lVar13 = lVar13 + -1)
                          {
                          }
                        }
                        ppbVar17 = (byte **)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
                      }
                      if (ppbVar29 <= ppbVar17) {
                        ppbVar29 = ppbVar17;
                      }
                      if (ppbVar29 < ppbVar10) goto LAB_0d2896ea;
                    }
                  }
                  ppbVar10 = ppbStack_7c0;
                  if (((ulong)ppbStack_7c0 & (long)ppbStack_7c0 - 1U) == 0) {
                    ppbVar17 = (byte **)((ulong)ppbVar28 & (ulong)((long)ppbStack_7c0 - 1U));
                  }
                  else {
                    ppbVar17 = ppbVar28;
                    if (ppbStack_7c0 <= ppbVar28) {
                      ppbVar17 = (byte **)((ulong)ppbVar28 % (ulong)ppbStack_7c0);
                    }
                  }
                }
                else {
                  fVar35 = (float)(long)ppbVar10;
                  if (ppbVar10 == (byte **)0x0) goto LAB_0d289680;
LAB_0d289667:
                  ppbVar29 = ppbVar17;
                  if (fVar35 * fStack_7a8 < (float)(uStack_7b0 + 1)) goto LAB_0d289680;
                }
                plVar18 = *(long **)(uStack_7c8 + (long)ppbVar17 * 8);
                if (plVar18 == (long *)0x0) {
                  *plVar14 = (long)plStack_7b8;
                  *(long ***)(uStack_7c8 + (long)ppbVar17 * 8) = &plStack_7b8;
                  plStack_7b8 = plVar14;
                  if (*plVar14 != 0) {
                    ppbVar17 = *(byte ***)(*plVar14 + 8);
                    if (((ulong)ppbVar10 & (long)ppbVar10 - 1U) == 0) {
                      *(long **)(uStack_7c8 + ((ulong)ppbVar17 & (ulong)((long)ppbVar10 - 1U)) * 8)
                           = plVar14;
                    }
                    else {
                      if (ppbVar10 <= ppbVar17) {
                        if (((ulong)ppbVar17 | (ulong)ppbVar10) >> 0x20 == 0) {
                          *(long **)(uStack_7c8 +
                                    (((ulong)ppbVar17 & 0xffffffff) % ((ulong)ppbVar10 & 0xffffffff)
                                    ) * 8) = plVar14;
                          goto LAB_0d28942a;
                        }
                        ppbVar17 = (byte **)((ulong)ppbVar17 % (ulong)ppbVar10);
                      }
                      *(long **)(uStack_7c8 + (long)ppbVar17 * 8) = plVar14;
                    }
                  }
                }
                else {
                  *plVar14 = *plVar18;
                  *plVar18 = (long)plVar14;
                }
LAB_0d28942a:
                uStack_7b0 = uStack_7b0 + 1;
              }
LAB_0d289432:
              puVar19 = puVar19 + 1;
            } while (puVar19 != puStack_810);
          }
        }
        if (((ulong)uStack_540 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_530,(ulong)uStack_540 & 0xfffffffffffffffe);
        }
        ppbVar10 = ppbStack_800 + 3;
      } while (ppbVar10 != ppbStack_7a0);
    }
    puVar19 = (ulong *)plVar12[0xc];
    puStack_810 = (ulong *)plVar12[0xd];
    if (puVar19 == puStack_810) {
LAB_0d2898e0:
      uStack_760 = 0;
      if ((*(uint *)(plVar12 + 2) & 1) == 0) {
        pbStack_748 = (byte *)plVar12[4];
        uStack_758 = *(uint *)(plVar12 + 2);
        uStack_754 = *(undefined4 *)((long)plVar12 + 0x14);
        uStack_750 = (int)plVar12[3];
        uStack_74c = *(undefined4 *)((long)plVar12 + 0x1c);
      }
      else {
        FUN_0412e5e0(&uStack_758,plVar12[4],plVar12[3]);
      }
      uStack_740 = 0;
      if ((uStack_758 & 1) == 0) {
        if ((byte)uStack_758 >> 1 != 0) goto LAB_0d289969;
LAB_0d2899c0:
        uStack_760 = 0;
      }
      else {
        if (CONCAT44(uStack_74c,uStack_750) == 0) goto LAB_0d2899c0;
LAB_0d289969:
        pbVar15 = (byte *)((long)&uStack_758 + 1);
        if ((uStack_758 & 1) != 0) {
          pbVar15 = pbStack_748;
        }
        if ((pbVar15 == (byte *)0x0) || (*pbVar15 == 0)) goto LAB_0d2899c0;
        uVar32 = func_0x0eee2e90(pbVar15);
        uStack_760 = 0xcbf29ce484222325;
        if (uVar32 != 0) {
          if (7 < uVar32) {
            uVar22 = uVar32 & 0xfffffffffffffff8;
            do {
              uStack_760 = (((((((uStack_760 * 0x100000001b3 ^ (ulong)*pbVar15) * 0x100000001b3 ^
                                (ulong)pbVar15[1]) * 0x100000001b3 ^ (ulong)pbVar15[2]) *
                               0x100000001b3 ^ (ulong)pbVar15[3]) * 0x100000001b3 ^
                             (ulong)pbVar15[4]) * 0x100000001b3 ^ (ulong)pbVar15[5]) * 0x100000001b3
                           ^ (ulong)pbVar15[6]) * 0x100000001b3 ^ (ulong)pbVar15[7];
              pbVar15 = pbVar15 + 8;
              uVar22 = uVar22 - 8;
            } while (uVar22 != 0);
          }
          if ((uVar32 & 7) != 0) {
            uVar22 = 0;
            do {
              uStack_760 = uStack_760 * 0x100000001b3 ^ (ulong)pbVar15[uVar22];
              uVar22 = uVar22 + 1;
            } while (((uint)uVar32 & 7) != uVar22);
          }
        }
      }
      pbStack_798 = (byte *)0x0;
      ppbStack_790 = (byte **)0x0;
      plStack_788 = (long *)0x0;
      uStack_780 = 0;
      fStack_778 = fStack_7a8;
      ppbVar10 = (byte **)0x2;
      if (ppbStack_7c0 == (byte **)0x1) {
LAB_0d289a1b:
        func_0x0d263a90(&pbStack_798,ppbVar10);
        plVar14 = plStack_7b8;
        pbVar15 = pbStack_798;
        ppbVar29 = ppbStack_790;
        plVar18 = plStack_788;
        uVar32 = uStack_780;
      }
      else {
        if (((ulong)ppbStack_7c0 & (ulong)((long)ppbStack_7c0 - 1U)) != 0) {
          ppbVar10 = (byte **)func_0x0412c3f0(ppbStack_7c0,2);
          bVar34 = ppbVar10 < ppbStack_790;
          if (ppbVar10 <= ppbStack_790) goto LAB_0d289b5c;
          goto LAB_0d289a1b;
        }
        bVar34 = false;
        ppbVar10 = ppbStack_7c0;
        if (ppbStack_7c0 != (byte **)0x0) goto LAB_0d289a1b;
LAB_0d289b5c:
        ppbVar17 = ppbStack_790;
        plVar14 = plStack_7b8;
        pbVar15 = pbStack_798;
        ppbVar29 = ppbStack_790;
        plVar18 = plStack_788;
        uVar32 = uStack_780;
        if (bVar34) {
          fVar35 = (float)ceilf((float)uStack_780 / fStack_778);
          ppbVar28 = (byte **)((long)(fVar35 - _DAT_01198778) & (long)fVar35 >> 0x3f | (long)fVar35)
          ;
          if ((ppbVar17 < (byte **)0x3) ||
             (uVar32 = (long)ppbVar17 - ((ulong)ppbVar17 >> 1 & 0x5555555555555555),
             uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333),
             1 < (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            ppbVar28 = (byte **)func_0x0412c3f0(ppbVar28);
            if (ppbVar28 < ppbVar10) {
              ppbVar28 = ppbVar10;
            }
          }
          else {
            if ((byte **)0x1 < ppbVar28) {
              lVar13 = 0x3f;
              if ((byte *)((long)ppbVar28 + -1) != (byte *)0x0) {
                for (; (ulong)((long)ppbVar28 + -1) >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              ppbVar28 = (byte **)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
            }
            if (ppbVar28 < ppbVar10) {
              ppbVar28 = ppbVar10;
            }
          }
          ppbVar10 = ppbVar28;
          plVar14 = plStack_7b8;
          pbVar15 = pbStack_798;
          ppbVar29 = ppbStack_790;
          plVar18 = plStack_788;
          uVar32 = uStack_780;
          if (ppbVar28 < ppbVar17) goto LAB_0d289a1b;
        }
      }
      for (; plStack_788 = plVar18, uStack_780 = uVar32, plVar14 != (long *)0x0;
          plVar14 = (long *)*plVar14) {
        pbStack_798 = pbVar15;
        ppbStack_790 = ppbVar29;
        func_0x0d263610(&pbStack_798,plVar14 + 2);
        pbVar15 = pbStack_798;
        ppbVar29 = ppbStack_790;
        plVar18 = plStack_788;
        uVar32 = uStack_780;
      }
      lVar13 = plVar12[8];
      uVar1 = *(undefined1 *)((long)plVar12 + 0x41);
      bVar34 = (uStack_758 & 1) == 0;
      pbVar11 = pbStack_748;
      if (bVar34) {
        pbVar11 = (byte *)((long)&uStack_758 + 1);
      }
      pbVar27 = (byte *)(ulong)((byte)uStack_758 >> 1);
      if (!bVar34) {
        pbVar27 = (byte *)CONCAT44(uStack_74c,uStack_750);
      }
      pbStack_798 = (byte *)0x0;
      ppbStack_790 = (byte **)0x0;
      uVar22 = (ulong)uStack_7d8 >> 0x20;
      uStack_7d8 = (byte **)CONCAT44((int)uVar22,fStack_778);
      if (uVar32 != 0) {
        ppbVar10 = (byte **)plVar18[1];
        if (((ulong)ppbVar29 & (long)ppbVar29 - 1U) == 0) {
          ppbVar10 = (byte **)((ulong)ppbVar10 & (ulong)((long)ppbVar29 - 1U));
        }
        else if (ppbVar29 <= ppbVar10) {
          if (((ulong)ppbVar10 | (ulong)ppbVar29) >> 0x20 == 0) {
            ppbVar10 = (byte **)(((ulong)ppbVar10 & 0xffffffff) % ((ulong)ppbVar29 & 0xffffffff));
          }
          else {
            ppbVar10 = (byte **)((ulong)ppbVar10 % (ulong)ppbVar29);
          }
        }
        *(long ***)(pbVar15 + (long)ppbVar10 * 8) = &plStack_7e8;
        plStack_788 = (long *)0x0;
        uStack_780 = 0;
      }
      pbStack_7f8 = pbVar15;
      ppbStack_7f0 = ppbVar29;
      plStack_7e8 = plVar18;
      uStack_7e0 = uVar32;
      if ((byte *)0xfffffffffffffff7 < pbVar27) goto LAB_0d28ad96;
      if (pbVar27 < (byte *)0x17) {
        uStack_828._1_7_ = (undefined7)(uStack_828 >> 8);
        uStack_828 = CONCAT71(uStack_828._1_7_,(char)pbVar27 * '\x02');
        pbVar15 = (byte *)((long)&uStack_828 + 1);
        if (pbVar27 != (byte *)0x0) goto LAB_0d289dbb;
      }
      else {
        uVar32 = ((ulong)pbVar27 | 7) + 1;
        if (((ulong)pbVar27 | 7) == 0x17) {
          uVar32 = 0x1a;
        }
        pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
        if (pbVar15 == (byte *)0x0) {
          func_0x0eec74c0(uVar32,0);
        }
        uStack_828 = uVar32 | 1;
        pbStack_820 = pbVar27;
        pbStack_818 = pbVar15;
LAB_0d289dbb:
        func_0x0eee2f00(pbVar15,pbVar11,pbVar27);
      }
      pbVar15[(long)pbVar27] = 0;
      lVar16 = func_0x09d796f0(param_1,&uStack_828);
      ppbVar10 = ppbStack_7f0;
      pbVar15 = pbStack_7f8;
      if (lVar16 == *(long *)(param_1 + 0x20)) {
        ppbVar29 = (byte **)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) *
                            -0x3333333333333333);
        uStack_808 = CONCAT62(uStack_808._2_6_,(short)ppbVar29);
        func_0x0d29b0b0(param_1,&uStack_828,&uStack_808);
        uVar22 = uStack_7e0;
        plVar14 = plStack_7e8;
        ppbStack_528 = ppbStack_7f0;
        pbVar27 = pbStack_7f8;
        pbVar11 = pbStack_818;
        pbVar15 = pbStack_820;
        uVar32 = uStack_828;
        pbStack_538 = pbStack_818;
        uStack_548 = uStack_828;
        uStack_540 = pbStack_820;
        uStack_828 = 0;
        pbStack_820 = (byte *)0x0;
        pbStack_818 = (byte *)0x0;
        pbStack_7f8 = (byte *)0x0;
        ppbStack_7f0 = (byte **)0x0;
        pbStack_530 = pbVar27;
        plStack_520 = plStack_7e8;
        uStack_518 = uStack_7e0;
        uStack_510 = (undefined4)uStack_7d8;
        if (uStack_7e0 != 0) {
          ppbVar10 = (byte **)plStack_7e8[1];
          if (((ulong)ppbStack_528 & (long)ppbStack_528 - 1U) == 0) {
            ppbVar10 = (byte **)((ulong)ppbVar10 & (ulong)((long)ppbStack_528 - 1U));
          }
          else if (ppbStack_528 <= ppbVar10) {
            if (((ulong)ppbVar10 | (ulong)ppbStack_528) >> 0x20 == 0) {
              ppbVar10 = (byte **)(((ulong)ppbVar10 & 0xffffffff) %
                                  ((ulong)ppbStack_528 & 0xffffffff));
            }
            else {
              ppbVar10 = (byte **)((ulong)ppbVar10 % (ulong)ppbStack_528);
            }
          }
          *(long ***)(pbVar27 + (long)ppbVar10 * 8) = &plStack_520;
          plStack_7e8 = (long *)0x0;
          uStack_7e0 = 0;
        }
        uStack_508 = uStack_738;
        uStack_500._0_3_ = CONCAT12((char)lVar13,(short)ppbVar29);
        uStack_500 = CONCAT13(uVar1,(undefined3)uStack_500);
        puVar19 = *(ulong **)(param_1 + 0x78);
        if (puVar19 < *(ulong **)(param_1 + 0x80)) {
          puVar19[2] = (ulong)pbVar11;
          *puVar19 = uVar32;
          puVar19[1] = (ulong)pbVar15;
          uStack_548 = 0;
          uStack_540 = (byte *)0x0;
          pbStack_538 = (byte *)0x0;
          pbStack_530 = (byte *)0x0;
          puVar19[3] = (ulong)pbVar27;
          puVar19[4] = (ulong)ppbStack_528;
          ppbStack_528 = (byte **)0x0;
          puVar19[5] = (ulong)plVar14;
          puVar19[6] = uVar22;
          *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_7d8;
          if (uVar22 != 0) {
            uVar32 = plVar14[1];
            uVar22 = puVar19[4];
            if ((uVar22 & uVar22 - 1) == 0) {
              uVar32 = uVar32 & uVar22 - 1;
            }
            else if (uVar22 <= uVar32) {
              if ((uVar32 | uVar22) >> 0x20 == 0) {
                uVar32 = (uVar32 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar32 = uVar32 % uVar22;
              }
            }
            *(ulong **)(pbVar27 + uVar32 * 8) = puVar19 + 5;
            plStack_520 = (long *)0x0;
            uStack_518 = 0;
          }
          *(undefined4 *)(puVar19 + 9) = uStack_500;
          puVar19[8] = uStack_738;
          *(ulong **)(param_1 + 0x78) = puVar19 + 10;
          pbVar15 = pbStack_530;
          plVar14 = plStack_520;
        }
        else {
          lVar13 = (long)puVar19 - *plStack_768;
          uVar32 = (lVar13 >> 4) * -0x3333333333333333 + 1;
          if (0x333333333333333 < uVar32) goto LAB_0d28ad9b;
          lVar16 = (long)*(ulong **)(param_1 + 0x80) - *plStack_768 >> 4;
          uVar22 = lVar16 * -0x6666666666666666;
          if (uVar32 < uVar22) {
            uVar32 = uVar22;
          }
          if (0x199999999999998 < (ulong)(lVar16 * -0x3333333333333333)) {
            uVar32 = 0x333333333333333;
          }
          plStack_638 = plStack_768;
          if (uVar32 == 0) {
            lVar16 = 0;
          }
          else {
            if (0x333333333333333 < uVar32) goto LAB_0d28ada0;
            lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0x50);
            if (lVar16 == 0) {
              func_0x0eec74c0(uVar32 * 0x50,0);
              lVar16 = 0;
            }
          }
          ppbVar10 = ppbStack_528;
          pbVar15 = pbStack_530;
          *(byte **)(lVar16 + 0x10 + lVar13) = pbStack_538;
          *(ulong *)(lVar16 + lVar13) = uStack_548;
          ((ulong *)(lVar16 + lVar13))[1] = (ulong)uStack_540;
          uStack_548 = 0;
          uStack_540 = (byte *)0x0;
          pbStack_538 = (byte *)0x0;
          pbStack_530 = (byte *)0x0;
          *(byte **)(lVar16 + 0x18 + lVar13) = pbVar15;
          *(byte ***)(lVar16 + 0x20 + lVar13) = ppbStack_528;
          ppbStack_528 = (byte **)0x0;
          *(long **)(lVar16 + 0x28 + lVar13) = plStack_520;
          *(ulong *)(lVar16 + 0x30 + lVar13) = uStack_518;
          *(undefined4 *)(lVar16 + 0x38 + lVar13) = uStack_510;
          if (uStack_518 != 0) {
            ppbVar17 = (byte **)plStack_520[1];
            if (((ulong)ppbVar10 & (long)ppbVar10 - 1U) == 0) {
              ppbVar17 = (byte **)((ulong)ppbVar17 & (ulong)((long)ppbVar10 - 1U));
            }
            else if (ppbVar10 <= ppbVar17) {
              if (((ulong)ppbVar17 | (ulong)ppbVar10) >> 0x20 == 0) {
                ppbVar17 = (byte **)(((ulong)ppbVar17 & 0xffffffff) % ((ulong)ppbVar10 & 0xffffffff)
                                    );
              }
              else {
                ppbVar17 = (byte **)((ulong)ppbVar17 % (ulong)ppbVar10);
              }
            }
            *(long *)(pbVar15 + (long)ppbVar17 * 8) = lVar16 + lVar13 + 0x28;
            plStack_520 = (long *)0x0;
            uStack_518 = 0;
          }
          lVar13 = lVar13 + lVar16;
          *(undefined4 *)(lVar13 + 0x48) = uStack_500;
          *(ulong *)(lVar13 + 0x40) = uStack_508;
          lVar23 = (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x78)) + lVar13;
          func_0x0d294580(*(long *)(param_1 + 0x70),*(long *)(param_1 + 0x78),lVar23);
          _auStack_658 = *(byte ***)(param_1 + 0x70);
          *(long *)(param_1 + 0x70) = lVar23;
          *(long *)(param_1 + 0x78) = lVar13 + 0x50;
          uStack_640 = *(undefined8 *)(param_1 + 0x80);
          *(ulong *)(param_1 + 0x80) = uVar32 * 0x50 + lVar16;
          uStack_650 = _auStack_658;
          ppbStack_648 = _auStack_658;
          func_0x0d2944b0(auStack_658);
          *(long *)(param_1 + 0x78) = lVar13 + 0x50;
          pbVar15 = pbStack_530;
          plVar14 = plStack_520;
        }
        while (plVar14 != (long *)0x0) {
          plVar18 = (long *)*plVar14;
          pbStack_530 = pbVar15;
          thunk_FUN_0ee326a0(plVar14,0x18);
          pbVar15 = pbStack_530;
          plVar14 = plVar18;
        }
        pbStack_530 = (byte *)0x0;
        if (pbVar15 != (byte *)0x0) {
          thunk_FUN_0ee326a0(pbVar15,(long)ppbStack_528 << 3);
        }
        if ((uStack_548 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_538,uStack_548 & 0xfffffffffffffffe);
        }
        uVar26 = (uint)ppbVar29 & 0xffff;
      }
      else {
        uVar2 = *(ushort *)(lVar16 + 0x20);
        ppbVar29 = (byte **)(ulong)uVar2;
        uVar26 = (uint)uVar2;
        uStack_808 = CONCAT62(uStack_808._2_6_,uVar2);
        pbStack_538 = pbStack_818;
        uStack_548 = uStack_828;
        uStack_540 = pbStack_820;
        uStack_828 = 0;
        pbStack_820 = (byte *)0x0;
        pbStack_818 = (byte *)0x0;
        pbStack_7f8 = (byte *)0x0;
        pbStack_530 = pbVar15;
        ppbStack_528 = ppbStack_7f0;
        ppbStack_7f0 = (byte **)0x0;
        plStack_520 = plStack_7e8;
        uStack_518 = uStack_7e0;
        uStack_510 = (undefined4)uStack_7d8;
        if (uStack_7e0 != 0) {
          ppbVar17 = (byte **)plStack_7e8[1];
          if (((ulong)ppbVar10 & (long)ppbVar10 - 1U) == 0) {
            ppbVar17 = (byte **)((ulong)ppbVar17 & (ulong)((long)ppbVar10 - 1U));
          }
          else if (ppbVar10 <= ppbVar17) {
            if (((ulong)ppbVar17 | (ulong)ppbVar10) >> 0x20 == 0) {
              ppbVar17 = (byte **)(((ulong)ppbVar17 & 0xffffffff) % ((ulong)ppbVar10 & 0xffffffff));
            }
            else {
              ppbVar17 = (byte **)((ulong)ppbVar17 % (ulong)ppbVar10);
            }
          }
          *(long ***)(pbVar15 + (long)ppbVar17 * 8) = &plStack_520;
          plStack_7e8 = (long *)0x0;
          uStack_7e0 = 0;
        }
        uStack_508 = uStack_738;
        uStack_500._0_3_ = CONCAT12((char)lVar13,uVar2);
        uStack_500 = CONCAT13(uVar1,(undefined3)uStack_500);
        func_0x0d29b0b0(param_1,&uStack_548,&uStack_808);
        uVar32 = (ulong)(((uint)uVar2 + (uint)uVar2 * 4) * 0x10);
        puVar19 = (ulong *)(*plStack_768 + uVar32);
        if ((*(byte *)(*plStack_768 + uVar32) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar19[2],*puVar19 & 0xfffffffffffffffe);
        }
        puVar19[2] = (ulong)pbStack_538;
        *(undefined4 *)puVar19 = (undefined4)uStack_548;
        *(undefined4 *)((long)puVar19 + 4) = uStack_548._4_4_;
        *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_540;
        *(undefined4 *)((long)puVar19 + 0xc) = uStack_540._4_4_;
        uStack_548 = uStack_548 & 0xffffffffffff0000;
        func_0x0d2943b0(puVar19 + 3,&pbStack_530);
        *(undefined4 *)(puVar19 + 9) = uStack_500;
        puVar19[8] = uStack_508;
        pbVar15 = pbStack_530;
        plVar14 = plStack_520;
        while (plVar14 != (long *)0x0) {
          plVar18 = (long *)*plVar14;
          pbStack_530 = pbVar15;
          thunk_FUN_0ee326a0(plVar14,0x18);
          pbVar15 = pbStack_530;
          plVar14 = plVar18;
        }
        pbStack_530 = (byte *)0x0;
        if (pbVar15 != (byte *)0x0) {
          thunk_FUN_0ee326a0(pbVar15,(long)ppbStack_528 << 3);
        }
        if ((uStack_548 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_538,uStack_548 & 0xfffffffffffffffe);
        }
      }
      puVar8 = *(ulong **)(*plStack_768 + 0x28 + (ulong)(uVar26 * 0x50));
      ppbStack_7a0 = ppbVar29;
      puVar19 = puStack_810;
      uVar32 = uStack_730;
      lVar13 = lStack_680;
      lVar16 = lStack_678;
      plVar14 = plStack_668;
      while (puStack_810 = puVar8, uStack_730 = uVar32, lStack_680 = lVar13, lStack_678 = lVar16,
            plStack_668 = plVar14, puStack_810 != (ulong *)0x0) {
        uVar22 = puStack_810[2];
        uVar20 = ((ulong)(uint)((int)uVar22 * 8) + 8 ^ uVar22 >> 0x20) * -0x622015f714c7d297;
        uVar20 = (uVar20 >> 0x2f ^ uVar22 >> 0x20 ^ uVar20) * -0x622015f714c7d297;
        lStack_680 = *(long *)(param_1 + 0x38);
        lStack_678 = *(long *)(param_1 + 0x40) - lStack_680;
        uVar30 = lStack_678 >> 3;
        uStack_730 = uVar30 - 1 & (uVar20 >> 0x2f ^ uVar20) * -0x622015f714c7d297;
        plStack_668 = (long *)(lStack_680 + uStack_730 * 8);
        plVar3 = *(long **)(param_1 + 0x50);
        plVar18 = plStack_668;
        do {
          lVar23 = *plVar18;
          if (lVar23 == -1) {
            plVar33 = *(long **)(param_1 + 0x58);
            goto LAB_0d28a6bd;
          }
          plVar18 = plVar3 + lVar23 * 3;
        } while (plVar3[lVar23 * 3 + 1] != uVar22);
        plVar33 = *(long **)(param_1 + 0x58);
        if (plVar18 == plVar33) {
LAB_0d28a6bd:
          if (plVar33 < *(long **)(param_1 + 0x60)) {
            *plVar33 = *plStack_668;
            plVar33[1] = uVar22;
            *(short *)(plVar33 + 2) = (short)ppbVar29;
            pbVar15 = (byte *)(plVar33 + 3);
            plVar18 = plVar3;
            uVar22 = uStack_730;
            lVar23 = lStack_678;
            lVar25 = lStack_680;
            uStack_730 = uVar32;
            lStack_680 = lVar13;
            lStack_678 = lVar16;
            plStack_668 = plVar14;
          }
          else {
            ppbStack_800 = (byte **)((long)plVar33 - (long)plVar3);
            uVar20 = ((long)ppbStack_800 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar20) goto LAB_0d28ad8c;
            lStack_670 = (long)*(long **)(param_1 + 0x60) - (long)plVar3;
            uVar32 = (lStack_670 >> 3) * 0x5555555555555556;
            if (uVar20 < uVar32) {
              uVar20 = uVar32;
            }
            if (0x555555555555554 < (ulong)((lStack_670 >> 3) * -0x5555555555555555)) {
              uVar20 = 0xaaaaaaaaaaaaaaa;
            }
            if (0xaaaaaaaaaaaaaaa < uVar20) goto LAB_0d28ad87;
            lStack_688 = uVar20 * 0x18;
            plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (plVar18 == (long *)0x0) {
              func_0x0eec74c0(lStack_688,0);
            }
            *(long *)((long)plVar18 + (long)ppbStack_800) = *plStack_668;
            *(ulong *)((long)(plVar18 + 1) + (long)ppbStack_800) = uVar22;
            *(short *)((long)(plVar18 + 2) + (long)ppbStack_800) = (short)ppbStack_7a0;
            plVar21 = plVar18;
            for (plVar14 = plVar3; plVar14 != plVar33; plVar14 = plVar14 + 3) {
              plVar21[2] = plVar14[2];
              uVar4 = *(undefined4 *)((long)plVar14 + 4);
              lVar13 = plVar14[1];
              uVar5 = *(undefined4 *)((long)plVar14 + 0xc);
              *(int *)plVar21 = (int)*plVar14;
              *(undefined4 *)((long)plVar21 + 4) = uVar4;
              *(int *)(plVar21 + 1) = (int)lVar13;
              *(undefined4 *)((long)plVar21 + 0xc) = uVar5;
              plVar21 = plVar21 + 3;
            }
            pbVar15 = (byte *)((long)(plVar18 + 3) + (long)ppbStack_800);
            *(long **)(param_1 + 0x50) = plVar18;
            *(byte **)(param_1 + 0x58) = pbVar15;
            *(long **)(param_1 + 0x60) = plVar18 + uVar20 * 3;
            uVar22 = uStack_730;
            lVar23 = lStack_678;
            lVar25 = lStack_680;
            ppbVar29 = ppbStack_7a0;
            if (plVar3 != (long *)0x0) {
              thunk_FUN_0ee326a0(plVar3,lStack_670);
              plVar18 = *(long **)(param_1 + 0x50);
              lVar23 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
              uVar30 = lVar23 >> 3;
              uVar22 = uStack_730;
              lVar25 = *(long *)(param_1 + 0x38);
              ppbVar29 = ppbStack_7a0;
            }
          }
          *(byte **)(param_1 + 0x58) = pbVar15;
          uVar32 = ((long)pbVar15 - (long)plVar18 >> 3) * -0x5555555555555555;
          *(ulong *)(lVar25 + uVar22 * 8) = uVar32 - 1;
          fVar35 = (float)uVar30 * *(float *)(param_1 + 0x68);
          uVar22 = (ulong)fVar35;
          uVar22 = (long)(fVar35 - _DAT_01198778) & (long)uVar22 >> 0x3f | uVar22;
          if (uVar22 <= uVar32 && uVar32 - uVar22 != 0) {
            fVar35 = (float)(ulong)(((long)pbVar15 - *(long *)(param_1 + 0x50) >> 3) *
                                   -0x5555555555555555) / *(float *)(param_1 + 0x68);
            uVar32 = (ulong)fVar35;
            uVar32 = (long)(fVar35 - _DAT_01198778) & (long)uVar32 >> 0x3f | uVar32;
            if (uVar32 < (ulong)(lVar23 >> 2)) {
              uVar32 = lVar23 >> 2;
            }
            if (uVar32 < 9) {
              uVar32 = 8;
            }
            lVar13 = 0x3f;
            if (uVar32 - 1 != 0) {
              for (; uVar32 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar32 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
            lVar13 = *(long *)(param_1 + 0x38);
            uVar22 = *(long *)(param_1 + 0x40) - lVar13 >> 3;
            if (uVar32 != uVar22) {
              if (uVar32 < uVar22) {
                lVar16 = lVar13 + uVar32 * 8;
                *(long *)(param_1 + 0x40) = lVar16;
              }
              else {
                func_0x048af7e0(lStack_690);
                lVar13 = *(long *)(param_1 + 0x38);
                lVar16 = *(long *)(param_1 + 0x40);
              }
              if (lVar13 != lVar16) {
                func_0x0eee2dd0(lVar13,0xff,lVar16 - lVar13 & 0xfffffffffffffff8);
              }
              lVar23 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
              if (lVar23 != 0) {
                lVar23 = (lVar23 >> 3) * -0x5555555555555555;
                puVar19 = (ulong *)(*(long *)(param_1 + 0x50) + 8);
                lVar25 = 0;
                do {
                  uVar22 = *puVar19 >> 0x20;
                  uVar32 = ((ulong)(uint)((int)*puVar19 << 3) + 8 ^ uVar22) * -0x622015f714c7d297;
                  uVar32 = (uVar32 >> 0x2f ^ uVar22 ^ uVar32) * -0x622015f714c7d297;
                  uVar22 = (uVar32 >> 0x2f ^ uVar32) * -0x622015f714c7d297 &
                           (lVar16 - lVar13 >> 3) - 1U;
                  uVar32 = *(ulong *)(lVar13 + uVar22 * 8);
                  *(long *)(lVar13 + uVar22 * 8) = lVar25;
                  puVar19[-1] = uVar32;
                  lVar25 = lVar25 + 1;
                  puVar19 = puVar19 + 3;
                } while (lVar23 + (ulong)(lVar23 == 0) != lVar25);
              }
            }
          }
        }
        else {
          *(short *)(plVar18 + 2) = (short)ppbVar29;
          uStack_730 = uVar32;
          lStack_680 = lVar13;
          lStack_678 = lVar16;
          plStack_668 = plVar14;
        }
        puVar19 = puStack_810;
        uVar32 = uStack_730;
        lVar13 = lStack_680;
        lVar16 = lStack_678;
        plVar14 = plStack_668;
        puVar8 = (ulong *)*puStack_810;
      }
      puStack_810 = puVar19;
      pbVar15 = pbStack_7f8;
      plVar14 = plStack_7e8;
      if ((uStack_828 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_818,uStack_828 & 0xfffffffffffffffe);
        pbVar15 = pbStack_7f8;
        plVar14 = plStack_7e8;
      }
      while (plVar14 != (long *)0x0) {
        plVar18 = (long *)*plVar14;
        pbStack_7f8 = pbVar15;
        thunk_FUN_0ee326a0(plVar14,0x18);
        pbVar15 = pbStack_7f8;
        plVar14 = plVar18;
      }
      pbStack_7f8 = (byte *)0x0;
      pbVar11 = pbStack_798;
      plVar14 = plStack_788;
      if (pbVar15 != (byte *)0x0) {
        thunk_FUN_0ee326a0(pbVar15,(long)ppbStack_7f0 << 3);
        pbVar11 = pbStack_798;
        plVar14 = plStack_788;
      }
      while (plVar14 != (long *)0x0) {
        plVar18 = (long *)*plVar14;
        pbStack_798 = pbVar11;
        thunk_FUN_0ee326a0(plVar14,0x18);
        pbVar11 = pbStack_798;
        plVar14 = plVar18;
      }
      pbStack_798 = (byte *)0x0;
      if (pbVar11 != (byte *)0x0) {
        thunk_FUN_0ee326a0(pbVar11,(long)ppbStack_790 << 3);
      }
      uVar32 = uStack_7c8;
      plVar14 = plStack_7b8;
      if ((uStack_758 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_748,CONCAT44(uStack_754,uStack_758) & 0xfffffffffffffffe);
        uVar32 = uStack_7c8;
        plVar14 = plStack_7b8;
      }
      while (plVar14 != (long *)0x0) {
        plVar18 = (long *)*plVar14;
        uStack_7c8 = uVar32;
        thunk_FUN_0ee326a0(plVar14,0x18);
        uVar32 = uStack_7c8;
        plVar14 = plVar18;
      }
      uStack_7c8 = 0;
      if (uVar32 != 0) {
        thunk_FUN_0ee326a0(uVar32,(long)ppbStack_7c0 << 3);
      }
      plVar12 = (long *)*plVar12;
      plVar14 = plStack_6a8;
      if (plVar12 == (long *)0x0) goto joined_r0x0d28aba1;
      goto LAB_0d288dcc;
    }
    ppbStack_800 = (byte **)((long)plVar12 + 0x11);
LAB_0d288e3f:
    uStack_548 = 0;
    if ((*puVar19 & 1) == 0) {
      pbStack_530 = (byte *)puVar19[2];
      uStack_540 = (byte *)*puVar19;
      pbStack_538 = (byte *)puVar19[1];
    }
    else {
      FUN_0412e5e0(&uStack_540,puVar19[2],puVar19[1]);
    }
    ppbStack_528 = (byte **)0x0;
    if (((ulong)uStack_540 & 1) == 0) {
      if ((byte)uStack_540 >> 1 != 0) goto LAB_0d288eb9;
LAB_0d288f10:
      uStack_548 = 0;
    }
    else {
      if (pbStack_538 == (byte *)0x0) goto LAB_0d288f10;
LAB_0d288eb9:
      pbVar15 = (byte *)((long)&uStack_540 + 1);
      if (((ulong)uStack_540 & 1) != 0) {
        pbVar15 = pbStack_530;
      }
      if ((pbVar15 == (byte *)0x0) || (*pbVar15 == 0)) goto LAB_0d288f10;
      uVar32 = func_0x0eee2e90(pbVar15);
      uStack_548 = 0xcbf29ce484222325;
      if (uVar32 != 0) {
        if (7 < uVar32) {
          uVar22 = uVar32 & 0xfffffffffffffff8;
          do {
            uStack_548 = (((((((uStack_548 * 0x100000001b3 ^ (ulong)*pbVar15) * 0x100000001b3 ^
                              (ulong)pbVar15[1]) * 0x100000001b3 ^ (ulong)pbVar15[2]) *
                             0x100000001b3 ^ (ulong)pbVar15[3]) * 0x100000001b3 ^ (ulong)pbVar15[4])
                           * 0x100000001b3 ^ (ulong)pbVar15[5]) * 0x100000001b3 ^ (ulong)pbVar15[6])
                         * 0x100000001b3 ^ (ulong)pbVar15[7];
            pbVar15 = pbVar15 + 8;
            uVar22 = uVar22 - 8;
          } while (uVar22 != 0);
        }
        if ((uVar32 & 7) != 0) {
          uVar22 = 0;
          do {
            uStack_548 = uStack_548 * 0x100000001b3 ^ (ulong)pbVar15[uVar22];
            uVar22 = uVar22 + 1;
          } while (((uint)uVar32 & 7) != uVar22);
        }
      }
    }
    param_4 = func_0x0d284690(uStack_660,&uStack_548);
    bVar34 = (*(byte *)(plVar12 + 2) & 1) == 0;
    ppbVar29 = (byte **)plVar12[4];
    if (bVar34) {
      ppbVar29 = ppbStack_800;
    }
    param_5 = (byte **)(ulong)(*(byte *)(plVar12 + 2) >> 1);
    if (!bVar34) {
      param_5 = (byte **)plVar12[3];
    }
    if (param_5 < (byte **)0xfffffffffffffff8) {
      if (param_5 < (byte **)0x17) {
        _auStack_658 = (byte **)CONCAT71(stack0xfffffffffffff9a9,(char)param_5 * '\x02');
        ppbVar10 = (byte **)(auStack_658 + 1);
        if (param_5 != (byte **)0x0) goto LAB_0d288fd4;
      }
      else {
        uVar32 = ((ulong)param_5 | 7) + 1;
        if (((ulong)param_5 | 7) == 0x17) {
          uVar32 = 0x1a;
        }
        ppbVar10 = (byte **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
        if (ppbVar10 == (byte **)0x0) {
          func_0x0eec74c0(uVar32,0);
        }
        _auStack_658 = (byte **)(uVar32 | 1);
        uStack_650 = param_5;
        ppbStack_648 = ppbVar10;
LAB_0d288fd4:
        func_0x0eee2f00(ppbVar10,ppbVar29,param_5);
      }
      *(byte *)((long)ppbVar10 + (long)param_5) = 0;
      puVar31 = *(undefined4 **)(param_4 + 0x48);
      if (*(undefined4 **)(param_4 + 0x50) <= puVar31) {
        lVar13 = (long)puVar31 - *(long *)(param_4 + 0x40);
        uVar32 = (lVar13 >> 3) * -0x5555555555555555 + 1;
        if (uVar32 < 0xaaaaaaaaaaaaaab) {
          lVar16 = (long)*(undefined4 **)(param_4 + 0x50) - *(long *)(param_4 + 0x40) >> 3;
          uVar22 = lVar16 * 0x5555555555555556;
          if (uVar32 < uVar22) {
            uVar32 = uVar22;
          }
          if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
            uVar32 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar32 < 0xaaaaaaaaaaaaaab) {
            lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0x18);
            if (lVar16 == 0) {
              func_0x0eec74c0(uVar32 * 0x18,0);
            }
            *(byte ***)(lVar16 + 0x10 + lVar13) = ppbStack_648;
            puVar31 = (undefined4 *)(lVar16 + lVar13);
            *puVar31 = auStack_658;
            puVar31[1] = uStack_654;
            puVar31[2] = (undefined4)uStack_650;
            puVar31[3] = uStack_650._4_4_;
            puVar31 = (undefined4 *)(lVar13 + lVar16 + 0x18);
            lVar23 = *(long *)(param_4 + 0x40);
            ppbVar10 = (byte **)((lVar16 + lVar13) - (*(long *)(param_4 + 0x48) - lVar23));
            func_0x0eee2f00(ppbVar10,lVar23);
            *(byte ***)(param_4 + 0x40) = ppbVar10;
            *(undefined4 **)(param_4 + 0x48) = puVar31;
            lVar13 = *(long *)(param_4 + 0x50);
            *(ulong *)(param_4 + 0x50) = lVar16 + uVar32 * 0x18;
            if (lVar23 != 0) {
              thunk_FUN_0ee326a0(lVar23,lVar13 - lVar23);
            }
            goto LAB_0d28911b;
          }
        }
        else {
          func_0x0488efe0();
        }
        func_0x04882eb0();
        break;
      }
      *(byte ***)(puVar31 + 4) = ppbStack_648;
      *puVar31 = auStack_658;
      puVar31[1] = uStack_654;
      puVar31[2] = (undefined4)uStack_650;
      puVar31[3] = uStack_650._4_4_;
      puVar31 = puVar31 + 6;
LAB_0d28911b:
      *(undefined4 **)(param_4 + 0x48) = puVar31;
      if (((ulong)uStack_540 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_530,(ulong)uStack_540 & 0xfffffffffffffffe);
      }
      puVar19 = puVar19 + 3;
      if (puVar19 == puStack_810) goto LAB_0d2898e0;
      goto LAB_0d288e3f;
    }
    func_0x04882e30();
LAB_0d28ad6c:
    func_0x0eec74c0(0x20,0);
  } while( true );
LAB_0d28ad87:
  func_0x04882eb0();
  uVar32 = uStack_730;
  lVar13 = lStack_680;
  lVar16 = lStack_678;
  plVar14 = plStack_668;
LAB_0d28ad8c:
  plStack_668 = plVar14;
  lStack_678 = lVar16;
  lStack_680 = lVar13;
  uStack_730 = uVar32;
  func_0x0d29b5a0();
LAB_0d28ad91:
  func_0x04882e30();
LAB_0d28ad96:
  func_0x04882e30();
LAB_0d28ad9b:
  func_0x0d294570();
LAB_0d28ada0:
  func_0x04882eb0();
  if (((ulong)pbStack_7f8 & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_7e8,(ulong)pbStack_7f8 & 0xfffffffffffffffe);
  }
  func_0x0d2855a0(&lStack_6b8);
  if ((uStack_7c8 & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_7b8,uStack_7c8 & 0xfffffffffffffffe);
  }
  func_0x05f43b50(auStack_658);
  lVar13 = lStack_48;
  lStack_48 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,1);
  }
  goto SUB_04908910;
joined_r0x0d28aba1:
  while (plVar14 != (long *)0x0) {
    plVar12 = (long *)*plVar14;
    func_0x0d2a6760(plVar14 + 5);
    if ((*(byte *)(plVar14 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(plVar14[4],plVar14[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(plVar14,0x78);
    plVar14 = plVar12;
  }
LAB_0d28aba7:
  lVar13 = lStack_6b8;
  lStack_6b8 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,lStack_6b0 << 3);
  }
  lVar13 = lStack_48;
  lStack_48 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,1);
  }
SUB_04908910:
  if ((uStack_50 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uStack_50 = 0;
  if ((uStack_58 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_58 & 0xff00ffffffffffff) - 8);
  }
  lVar13 = lStack_68;
  uStack_58 = 0;
  lStack_68 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,8);
  }
  lVar13 = lStack_70;
  lStack_70 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,8);
  }
  lVar13 = lStack_78;
  lStack_78 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,8);
  }
  plVar12 = plStack_88;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  if (plVar12 == (long *)0x0) {
    uStack_80 = 0;
  }
  else {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
    plVar12 = plStack_88;
    uStack_80 = 0;
    if (plStack_88 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_88 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        func_0x0412c2d0(plVar12);
      }
    }
  }
  if ((uStack_98 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_98 & 0xff00ffffffffffff) - 8);
  }
  uStack_98 = 0;
  if ((uStack_a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_a0 = 0;
  if (plStack_b8 == alStack_d8) {
    lVar13 = 0x20;
LAB_04908b14:
    (**(code **)(*plStack_b8 + lVar13))();
    if (plStack_e8 != alStack_108) goto LAB_04908b03;
LAB_04908b27:
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (plStack_b8 != (long *)0x0) goto LAB_04908b14;
    if (plStack_e8 == alStack_108) goto LAB_04908b27;
LAB_04908b03:
    lVar13 = 0x28;
    if (plStack_e8 == (long *)0x0) goto LAB_04908b32;
  }
  (**(code **)(*plStack_e8 + lVar13))();
LAB_04908b32:
  uVar9 = func_0x04908570(auStack_120,uStack_118);
  lVar13 = lStack_138;
  if (lStack_138 != 0) {
    for (; lVar13 != lStack_130; lStack_130 = lStack_130 + -8) {
      plVar12 = *(long **)(lStack_130 + -8);
      *(undefined8 *)(lStack_130 + -8) = 0;
      if (plVar12 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar12 + 8))();
      }
    }
    lStack_130 = lVar13;
    if (lStack_138 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lStack_138);
    }
    return uVar9;
  }
  return uVar9;
}


