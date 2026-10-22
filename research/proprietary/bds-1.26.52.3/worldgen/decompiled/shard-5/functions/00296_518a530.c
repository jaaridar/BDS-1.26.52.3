/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x528a530 (ELF vaddr 0x518a530)
 * Label: caller-of-seed
 * Body:  [[0528a530, 0528a814] [0528a820, 0528a888] [0528a890, 0528ac36] [0528ac40, 0528ac9e] [0528aca0, 0528ace6] [0528acf0, 0528ad58] [0528ad60, 0528adb8] [0528adc0, 0528ae28] [0528ae30, 0528ae89] [0528ae90, 0528aef8] [0528af00, 0528af55] [0528af60, 0528afd7] [0528afe0, 0528b015] [0528b020, 0528b030] [0528b040, 0528b078] [0528b080, 0528b706] [0528b710, 0528b778] [0528b780, 0528b7d5] [0528b7e0, 0528b857] [0528b860, 0528b895] [0528b8a0, 0528b8b0] [0528b8c0, 0528b8f8] [0528b900, 0528b970] [0528b980, 0528b9b2] [0528b9c0, 0528b9f2] [0528ba00, 0528ba32] [0528ba40, 0528ba72] [0528ba80, 0528bab2] [0528bac0, 0528bb92] [0528bba0, 0528bc08] [0528bc10, 0528bc65] [0528bc70, 0528bce7] [0528bcf0, 0528bd25] [0528bd30, 0528bd40] [0528bd50, 0528bd88] [0528bd90, 0528bf17] [0528bf20, 0528bfdd] [0528bfe0, 0528c012] [0528c020, 0528c064] [0528c070, 0528c113] [0528c120, 0528c17e] [0528c180, 0528c1c4] [0528c1d0, 0528c241] [0528c250, 0528c285] [0528c290, 0528c2a0] [0528c2b0, 0528c2e8] [0528c2f0, 0528c31c] [0528c320, 0528c388] [0528c390, 0528c45a] [0528c460, 0528c4be] [0528c4c0, 0528c504] [0528c510, 0528c581] [0528c590, 0528c5c5] [0528c5d0, 0528c5e0] [0528c5f0, 0528c628] [0528c630, 0528c65c] [0528c660, 0528c6c8] [0528c6d0, 0528c8ae] [0528c8b0, 0528c927] [0528c930, 0528c965] [0528c970, 0528c980] [0528c990, 0528c9c8] [0528c9d0, 0528cac7] [0528cad0, 0528cb05] [0528cb10, 0528cb20] [0528cb30, 0528cb68] [0528cb70, 0528cbeb] [0528cbf0, 0528cc67] [0528cc70, 0528cca5] [0528ccb0, 0528ccc0] [0528ccd0, 0528cd08] [0528cd10, 0528cd90] [0528cda0, 0528ce17] [0528ce20, 0528ce55] [0528ce60, 0528ce70] [0528ce80, 0528ceb8] [0528cec0, 0528d042] [0528d050, 0528d082] [0528d090, 0528d0c2] [0528d0d0, 0528d102] [0528d110, 0528d142] [0528d150, 0528d182] [0528d190, 0528d791] [0528d7a0, 0528d7b3] [0528d7c0, 0528e0f7] [0528e100, 0528e32c] [0528e354, 0528e365] [0528e4c5, 0528e4ed] [0528e4f3, 0528e512]]
 * Ghidra: FUN_0528a530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0528a530(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
            undefined8 param_6,long *param_7,long param_8,undefined4 *param_9)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  short *psVar11;
  char *pcVar12;
  long *plVar13;
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_a08 [16];
  long *plStack_9f8;
  long *plStack_9e8;
  long *plStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  ulong uStack_9c8;
  long lStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  long lStack_988;
  long lStack_980;
  long lStack_978;
  long lStack_970;
  long lStack_968;
  long lStack_960;
  long lStack_958;
  long lStack_950;
  long lStack_948;
  long lStack_940;
  long lStack_938;
  long lStack_930;
  byte bStack_928;
  long lStack_920;
  long lStack_918;
  undefined1 auStack_908 [16];
  ulong uStack_8f8;
  undefined8 *puStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  ulong uStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  undefined1 auStack_858 [16];
  long lStack_848;
  long lStack_840;
  long lStack_838;
  long lStack_830;
  char cStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long *plStack_808;
  long *plStack_800;
  long lStack_7f8;
  ulong uStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  char cStack_750;
  long lStack_740;
  long lStack_738;
  long *plStack_730;
  long lStack_728;
  undefined8 uStack_720;
  long *plStack_718;
  long lStack_710;
  long lStack_708;
  ulong uStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  long alStack_6c0 [4];
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  byte bStack_660;
  long *plStack_658;
  long lStack_650;
  long *plStack_648;
  long lStack_640;
  long *plStack_638;
  long lStack_630;
  long *plStack_628;
  long lStack_620;
  long alStack_618 [2];
  long *plStack_608;
  long alStack_600 [3];
  undefined4 uStack_5e8;
  undefined8 uStack_5e4;
  undefined8 uStack_5dc;
  undefined8 uStack_5d4;
  undefined8 uStack_5cc;
  undefined8 uStack_5c4;
  undefined8 uStack_5bc;
  undefined2 uStack_5b4;
  undefined8 uStack_5b2;
  undefined8 uStack_5aa;
  undefined8 uStack_5a2;
  undefined8 uStack_59a;
  undefined8 uStack_592;
  undefined8 uStack_58a;
  undefined2 uStack_582;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined2 uStack_550;
  undefined8 uStack_54e;
  undefined8 uStack_546;
  undefined8 uStack_53e;
  undefined8 uStack_536;
  undefined8 uStack_52e;
  undefined8 uStack_526;
  undefined2 uStack_51e;
  undefined8 uStack_51c;
  undefined8 uStack_514;
  undefined8 uStack_50c;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined8 uStack_4f4;
  undefined2 uStack_4ec;
  undefined8 uStack_4ea;
  undefined8 uStack_4e2;
  undefined8 uStack_4da;
  undefined8 uStack_4d2;
  undefined8 uStack_4ca;
  undefined8 uStack_4c2;
  undefined2 uStack_4ba;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined2 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  
  puStack_8f0 = param_1;
  if (param_4 != 0) {
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *puVar8 = &UNK_0f3dc940;
    puVar8[1] = param_4;
    *puStack_8f0 = puVar8;
    return puStack_8f0;
  }
  alStack_618[0] = _DAT_0f556760;
  alStack_618[1] = uRam000000000f556768;
  plStack_608 = _DAT_0f556770;
  alStack_600[0] = _DAT_0f5567a8;
  alStack_600[1] = _DAT_016417c0;
  alStack_600[2] = _UNK_016417c8;
  uStack_5e8 = 0x28002a;
  uStack_5e4 = _DAT_016417d4;
  uStack_5dc = _UNK_016417dc;
  uStack_5d4 = _DAT_016417e4;
  uStack_5cc = _UNK_016417ec;
  uStack_5c4 = _DAT_016417f4;
  uStack_5bc = _UNK_016417fc;
  uStack_5b4 = 2;
  uStack_5b2 = _DAT_01641806;
  uStack_5aa = _UNK_0164180e;
  uStack_5a2 = _DAT_01641816;
  uStack_59a = _UNK_0164181e;
  uStack_592 = _DAT_01641826;
  uStack_58a = _UNK_0164182e;
  uStack_582 = 0xffff;
  uStack_560 = _DAT_01641858;
  uStack_558 = _UNK_01641860;
  uStack_570 = _DAT_01641848;
  uStack_568 = _UNK_01641850;
  uStack_580 = _DAT_01641838;
  uStack_578 = _UNK_01641840;
  uStack_550 = 0x26;
  uStack_52e = _DAT_0164188a;
  uStack_526 = _UNK_01641892;
  uStack_53e = _DAT_0164187a;
  uStack_536 = _UNK_01641882;
  uStack_54e = _DAT_0164186a;
  uStack_546 = _UNK_01641872;
  uStack_51e = 0x26;
  uStack_4fc = _DAT_016418bc;
  uStack_4f4 = _UNK_016418c4;
  uStack_50c = _DAT_016418ac;
  uStack_504 = _UNK_016418b4;
  uStack_51c = _DAT_0164189c;
  uStack_514 = _UNK_016418a4;
  uStack_4ec = 0xffff;
  uStack_4ca = _DAT_016418ee;
  uStack_4c2 = _UNK_016418f6;
  uStack_4da = _DAT_016418de;
  uStack_4d2 = _UNK_016418e6;
  uStack_4ea = _DAT_016418ce;
  uStack_4e2 = _UNK_016418d6;
  uStack_4ba = 0xffff;
  uStack_498 = _DAT_01641920;
  uStack_490 = _UNK_01641928;
  uStack_4a8 = _DAT_01641910;
  uStack_4a0 = _UNK_01641918;
  uStack_4b8 = _DAT_01641900;
  uStack_4b0 = _UNK_01641908;
  uStack_488 = 0xffff;
  uStack_720 = param_2;
  lStack_480 = param_5;
  uStack_478 = param_6;
  func_0x0eee2dd0(&uStack_470,0,0x438);
  auStack_a08 = (undefined1  [16])0x0;
  plStack_9f8 = (long *)0x0;
  lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x222e00);
  if (lVar9 == 0) {
    func_0x0eec74c0(0x222e00,0);
  }
  plStack_9f8 = (long *)((long)&__DT_RELA[0xbf56].r_addend + lVar9);
  auStack_a08._8_8_ = lVar9;
  auStack_a08._0_8_ = lVar9;
  func_0x05269100(alStack_618,param_3);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528a839:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0xe) goto LAB_0528a820;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0xe) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xe) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xf) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528a8c9;
        uVar15 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar15 = 0;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528a8cb;
  }
LAB_0528a8c9:
  uVar15 = 0;
LAB_0528a8cb:
  func_0x05272970(auStack_a08,&DAT_0f556740,&DAT_0f556740,0xf556898,&DAT_0f556740,&DAT_0f556740,
                  uVar15);
  func_0x05272970(auStack_a08,&DAT_0f556760,&DAT_0f556740,0xf5568b0,&DAT_0f556740,&DAT_0f556740,
                  uStack_470);
  puVar27 = &DAT_0f556760;
  func_0x05272970(auStack_a08,&DAT_0f556760,&DAT_0f556740,0xf5568c8,&DAT_0f556740,&DAT_0f556740,
                  uStack_448);
  func_0x05272970(auStack_a08,&DAT_0f556770,&DAT_0f556740,0xf5568b0,&DAT_0f556740,&DAT_0f556740,
                  uStack_468);
  func_0x05272970(auStack_a08,&DAT_0f556770,&DAT_0f556740,0xf5568c8,&DAT_0f556740,&DAT_0f556740,
                  uStack_440);
  func_0x05272970(auStack_a08,0xf556780,&DAT_0f556740,0xf5568b0,&DAT_0f556740,&DAT_0f556740,
                  uStack_460);
  func_0x05272970(auStack_a08,0xf556780,&DAT_0f556740,0xf5568c8,&DAT_0f556740,&DAT_0f556740,
                  uStack_438);
  func_0x05272970(auStack_a08,&DAT_0f556790,&DAT_0f556740,0xf5568b0,&DAT_0f556740,&DAT_0f556740,
                  uStack_458);
  func_0x05272970(auStack_a08,&DAT_0f556790,&DAT_0f556740,0xf5568c8,&DAT_0f556740,&DAT_0f556740,
                  uStack_430);
  func_0x05272970(auStack_a08,0xf5567a0,&DAT_0f556740,0xf5568b0,&DAT_0f556740,&DAT_0f556740,
                  uStack_450);
  func_0x05272970(auStack_a08,0xf5567a0,&DAT_0f556740,0xf5568c8,&DAT_0f556740,&DAT_0f556740,
                  uStack_428);
  plStack_9e8 = (long *)0xffffffffffffd8f0;
  plStack_9e0 = (long *)0xffffffffffffdb8b;
  func_0x05273030(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xffffffffffffdb8b;
  plStack_9e0 = (long *)0xffffffffffffe20e;
  func_0x05274fe0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xffffffffffffe20e;
  plStack_9e0 = (long *)0xffffffffffffe9de;
  func_0x05276c80(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xffffffffffffe9de;
  plStack_9e0 = (long *)0xfffffffffffff060;
  func_0x05274fe0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xfffffffffffff060;
  plStack_9e0 = (long *)0xfffffffffffff596;
  func_0x05273030(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xfffffffffffff596;
  plStack_9e0 = (long *)0xfffffffffffffe0c;
  func_0x052787b0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_808 = (long *)0xfffffffffffffe0c;
  plStack_800 = (long *)0x1f4;
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    puVar21 = puVar8;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528ac55:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar21 + uVar25;
      if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x19) goto LAB_0528ac40;
      if (*(ushort *)(puVar21[uVar25] + 0x168) == 0x19) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar21[uVar26] + 0x168) < 0x19) {
              puVar21 = puVar21 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        puVar22 = puVar22 + 1;
        if ((long)puVar16 - (long)puVar22 != 0) {
          uVar26 = (long)puVar16 - (long)puVar22 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar22[uVar25] + 0x168) < 0x1a) {
              puVar22 = puVar22 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar16 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528acca:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528ad09:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xb) goto LAB_0528acf0;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 0xb) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 0xb) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 0xc) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528ad99;
        uVar15 = *puVar16;
        break;
      }
      uVar15 = 0;
      puVar21 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528ad9b;
  }
LAB_0528ad99:
  uVar15 = 0;
LAB_0528ad9b:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528add9:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 7) goto LAB_0528adc0;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 7) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 7) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 8) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528ae69;
        uVar29 = *puVar16;
        break;
      }
      puVar21 = puVar22;
      uVar26 = uVar25;
      uVar29 = 0;
    } while (uVar25 != 0);
    goto LAB_0528ae6c;
  }
LAB_0528ae69:
  uVar29 = 0;
LAB_0528ae6c:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528aea9:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 6) goto LAB_0528ae90;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 6) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 6) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 7) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528af39;
        uVar19 = *puVar16;
        break;
      }
      puVar21 = puVar22;
      uVar26 = uVar25;
      uVar19 = 0;
    } while (uVar25 != 0);
    goto LAB_0528af3c;
  }
LAB_0528af39:
  uVar19 = 0;
LAB_0528af3c:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528af79:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0xbf) goto LAB_0528af60;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0xbf) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xbf) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xc0) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528b0a2;
        uVar20 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar20 = 0;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528b0a4;
  }
LAB_0528b0a2:
  uVar20 = 0;
LAB_0528b0a4:
  plStack_9e8 = _DAT_0f556820;
  plStack_9e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,alStack_618,&DAT_0f556740,&DAT_0f5568e0,&plStack_9e8,&plStack_808,
                  uVar15);
  plVar13 = alStack_618 + 2;
  plStack_9e8 = _DAT_0f556820;
  plStack_9e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,plVar13,&DAT_0f556740,&DAT_0f5568e0,&plStack_9e8,&plStack_808,uVar29);
  plStack_9e8 = _DAT_0f556820;
  plStack_9e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,alStack_618,&DAT_0f556740,&DAT_0f556910,&plStack_9e8,&plStack_808,
                  uVar15);
  plStack_9e8 = _DAT_0f556820;
  plStack_9e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,plVar13,&DAT_0f556740,&DAT_0f556910,&plStack_9e8,&plStack_808,uVar29);
  plStack_9e8 = _DAT_0f5568e0;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556840;
  plStack_8e0 = (long *)_DAT_0f556878;
  func_0x05272970(auStack_a08,alStack_618,&DAT_0f556740,&plStack_9e8,&plStack_8e8,&plStack_808,
                  uVar15);
  plStack_9e8 = _DAT_0f5568e0;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556840;
  plStack_8e0 = (long *)_DAT_0f556878;
  func_0x05272970(auStack_a08,plVar13,&DAT_0f556740,&plStack_9e8,&plStack_8e8,&plStack_808,uVar29);
  func_0x05272970(auStack_a08,alStack_618,&DAT_0f556740,&DAT_0f5568e0,0xf556880,&plStack_808,uVar15)
  ;
  func_0x05272970(auStack_a08,plVar13,&DAT_0f556740,&DAT_0f5568e0,0xf556880,&plStack_808,uVar29);
  if (((DAT_0f5a28b8 == '\0') && (*(char *)(lStack_480 + 0x18) == '\0')) &&
     (((DAT_0f5a28a6 & 1) == 0 ||
      ((*(char *)(lStack_480 + 7) != '\0' ||
       (cVar6 = func_0x04fa7a10(lStack_480,0xf5a28a0), cVar6 == '\0')))))) {
    plStack_9e8 = _DAT_0f556770;
    plStack_9e0 = (long *)_DAT_0f556788;
    plStack_8e8 = _DAT_0f5568f8;
    plStack_8e0 = (long *)_DAT_0f556948;
    func_0x05272970(auStack_a08,&plStack_9e8,&DAT_0f556740,&plStack_8e8,0xf556880,&plStack_808,
                    uVar19);
    plStack_9e8 = _DAT_0f556790;
    plStack_9e0 = (long *)_DAT_0f5567a8;
    plStack_8e8 = _DAT_0f5568f8;
    plStack_8e0 = (long *)_DAT_0f556948;
    func_0x05272970(auStack_a08,&plStack_9e8,&DAT_0f556740,&plStack_8e8,0xf556880,&plStack_808,
                    uVar20);
  }
  else {
    plStack_9e8 = _DAT_0f5568f8;
    plStack_9e0 = (long *)_DAT_0f556948;
    func_0x05272970(auStack_a08,plVar13,&DAT_0f556740,&plStack_9e8,0xf556880,&plStack_808,uVar19);
  }
  plStack_9e8 = _DAT_0f5568f8;
  plStack_9e0 = (long *)_DAT_0f556948;
  func_0x05272970(auStack_a08,alStack_618,&DAT_0f556740,&plStack_9e8,0xf556880,&plStack_808,uVar15);
  lVar9 = 0x2c0;
  do {
    lVar31 = lVar9;
    lVar9 = *(long *)((long)alStack_618 + lVar31);
    if (lVar9 == 0) {
      lVar9 = *(long *)((long)&uStack_6e0 + lVar31);
    }
    plStack_9e8 = _DAT_0f556928;
    plStack_9e0 = (long *)_DAT_0f556948;
    plStack_8e8 = _DAT_0f556820;
    plStack_8e0 = (long *)_DAT_0f556838;
    func_0x05272970(auStack_a08,puVar27,0xf5567c0,&plStack_9e8,&plStack_8e8,&plStack_808,lVar9);
    lVar9 = *(long *)((long)alStack_618 + lVar31 + 8);
    if (lVar9 == 0) {
      lVar9 = *(long *)((long)&uStack_6d8 + lVar31);
    }
    plStack_9e8 = _DAT_0f556928;
    plStack_9e0 = (long *)_DAT_0f556948;
    plStack_8e8 = _DAT_0f556820;
    plStack_8e0 = (long *)_DAT_0f556838;
    func_0x05272970(auStack_a08,puVar27,0xf5567d0,&plStack_9e8,&plStack_8e8,&plStack_808,lVar9);
    lVar9 = *(long *)((long)alStack_618 + lVar31 + 0x10);
    if (lVar9 == 0) {
      lVar9 = *(long *)((long)&uStack_6d0 + lVar31);
    }
    plStack_9e8 = _DAT_0f556928;
    plStack_9e0 = (long *)_DAT_0f556948;
    plStack_8e8 = _DAT_0f556820;
    plStack_8e0 = (long *)_DAT_0f556838;
    func_0x05272970(auStack_a08,puVar27,0xf5567e0,&plStack_9e8,&plStack_8e8,&plStack_808,lVar9);
    lVar9 = *(long *)((long)alStack_618 + lVar31 + 0x18);
    if (lVar9 == 0) {
      lVar9 = *(long *)((long)&uStack_6c8 + lVar31);
    }
    plStack_9e8 = _DAT_0f556928;
    plStack_9e0 = (long *)_DAT_0f556948;
    plStack_8e8 = _DAT_0f556820;
    plStack_8e0 = (long *)_DAT_0f556838;
    func_0x05272970(auStack_a08,puVar27,0xf5567f0,&plStack_9e8,&plStack_8e8,&plStack_808,lVar9);
    lVar9 = *(long *)((long)alStack_618 + lVar31 + 0x20);
    if (lVar9 == 0) {
      lVar9 = *(long *)((long)alStack_6c0 + lVar31);
    }
    plStack_9e8 = _DAT_0f556928;
    plStack_9e0 = (long *)_DAT_0f556948;
    plStack_8e8 = _DAT_0f556820;
    plStack_8e0 = (long *)_DAT_0f556838;
    func_0x05272970(auStack_a08,puVar27,0xf556800,&plStack_9e8,&plStack_8e8,&plStack_808,lVar9);
    puVar27 = puVar27 + 0x10;
    lVar9 = lVar31 + 0x28;
  } while (lVar31 + 0x28 != 0x360);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528b729:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 0x25) goto LAB_0528b710;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 0x25) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 0x25) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x26) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528b7b9;
        uVar15 = *puVar16;
        break;
      }
      uVar15 = 0;
      puVar21 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528b7bb;
  }
LAB_0528b7b9:
  uVar15 = 0;
LAB_0528b7bb:
  if ((long)puVar10 - (long)puVar8 == 0) {
LAB_0528b92f:
    uVar29 = 0;
  }
  else {
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
    uVar29 = 0;
    puVar16 = puVar10;
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (0xa4 < *(ushort *)(puVar8[uVar25] + 0x168)) {
        if (*(ushort *)(puVar8[uVar25] + 0x168) != 0xa5) goto joined_r0x0528b7f3;
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xa5) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xa6) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528b92f;
        uVar29 = *puVar8;
        break;
      }
      puVar8 = puVar21 + 1;
      uVar25 = ~uVar25 + uVar26;
      puVar21 = puVar16;
joined_r0x0528b7f3:
      puVar16 = puVar21;
      uVar26 = uVar25;
    } while (uVar26 != 0);
  }
  uVar19 = uVar15;
  if ((((DAT_0f5a28b8 == '\0') && (*(char *)(lStack_480 + 0x18) == '\0')) &&
      (uVar19 = uVar29, (DAT_0f5a28a6 & 1) != 0)) &&
     ((*(char *)(lStack_480 + 7) == '\0' &&
      (cVar6 = func_0x04fa7a10(lStack_480,0xf5a28a0), uVar19 = uVar15, cVar6 == '\0')))) {
    uVar19 = uVar29;
  }
  plStack_9e8 = _DAT_0f556928;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556820;
  plStack_8e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,puVar27,0xf5567c0,&plStack_9e8,&plStack_8e8,&plStack_808,uVar19);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528bbb9:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 0x25) goto LAB_0528bba0;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 0x25) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 0x25) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x26) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528bc49;
        uVar15 = *puVar16;
        break;
      }
      uVar15 = 0;
      puVar21 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528bc4b;
  }
LAB_0528bc49:
  uVar15 = 0;
LAB_0528bc4b:
  if ((long)puVar10 - (long)puVar8 == 0) {
LAB_0528bdbb:
    uVar29 = 0;
  }
  else {
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
    uVar29 = 0;
    puVar16 = puVar10;
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (0xa4 < *(ushort *)(puVar8[uVar25] + 0x168)) {
        if (*(ushort *)(puVar8[uVar25] + 0x168) != 0xa5) goto joined_r0x0528bc83;
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xa5) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xa6) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528bdbb;
        uVar29 = *puVar8;
        break;
      }
      puVar8 = puVar21 + 1;
      uVar25 = ~uVar25 + uVar26;
      puVar21 = puVar16;
joined_r0x0528bc83:
      puVar16 = puVar21;
      uVar26 = uVar25;
    } while (uVar26 != 0);
  }
  if ((DAT_0f5a28b8 == '\0') && (*(char *)(lStack_480 + 0x18) == '\0')) {
    bVar5 = 1;
    if (((DAT_0f5a28a6 & 1) != 0) && (*(char *)(lStack_480 + 7) == '\0')) {
      bVar5 = func_0x04fa7a10(lStack_480,0xf5a28a0);
      bVar5 = bVar5 ^ 1;
    }
  }
  else {
    bVar5 = 0;
  }
  if ((long)plStack_800 < 0 != (bool)bVar5) {
    uVar15 = uVar29;
  }
  plStack_9e8 = _DAT_0f556928;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556820;
  plStack_8e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,puVar27,0xf5567d0,&plStack_9e8,&plStack_8e8,&plStack_808,uVar15);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar8;
    puVar21 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528be99:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar16 + uVar25;
      if (*(ushort *)(puVar16[uVar25] + 0x168) < 0x25) goto LAB_0528be80;
      if (*(ushort *)(puVar16[uVar25] + 0x168) == 0x25) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar16[uVar26] + 0x168) < 0x25) {
              puVar16 = puVar16 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar21 - (long)(puVar22 + 1);
        if (lVar9 != 0) {
          puVar21 = puVar22 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x26) {
              puVar21 = puVar21 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar16 == puVar21) || (puVar16 == puVar10)) goto LAB_0528bf59;
        uVar15 = *puVar16;
        break;
      }
      uVar15 = 0;
      puVar21 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528bf5b;
  }
LAB_0528bf59:
  uVar15 = 0;
LAB_0528bf5b:
  if ((long)puVar10 - (long)puVar8 != 0) {
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528bf89:
    do {
      uVar25 = uVar26 >> 1;
      puVar16 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0xa5) goto LAB_0528bf70;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0xa5) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xa5) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        puVar16 = puVar16 + 1;
        if ((long)puVar10 - (long)puVar16 != 0) {
          uVar26 = (long)puVar10 - (long)puVar16 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xa6) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar10 = puVar16;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528c083:
  plStack_9e8 = _DAT_0f556928;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556820;
  plStack_8e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,puVar27,0xf5567e0,&plStack_9e8,&plStack_8e8,&plStack_808,uVar15);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    puVar21 = puVar8;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c135:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar21 + uVar25;
      if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x25) goto LAB_0528c120;
      if (*(ushort *)(puVar21[uVar25] + 0x168) == 0x25) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar21[uVar26] + 0x168) < 0x25) {
              puVar21 = puVar21 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        puVar22 = puVar22 + 1;
        if ((long)puVar16 - (long)puVar22 != 0) {
          uVar26 = (long)puVar16 - (long)puVar22 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar22[uVar25] + 0x168) < 0x26) {
              puVar22 = puVar22 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar16 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528c1aa:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    puVar21 = puVar8;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c1e9:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar21 + uVar25;
      if (*(ushort *)(puVar21[uVar25] + 0x168) < 0xa5) goto LAB_0528c1d0;
      if (*(ushort *)(puVar21[uVar25] + 0x168) == 0xa5) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar21[uVar26] + 0x168) < 0xa5) {
              puVar21 = puVar21 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        puVar22 = puVar22 + 1;
        if ((long)puVar16 - (long)puVar22 != 0) {
          uVar26 = (long)puVar16 - (long)puVar22 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar22[uVar25] + 0x168) < 0xa6) {
              puVar22 = puVar22 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar16 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528c303:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c339:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0x26) goto LAB_0528c320;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0x26) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0x26) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0x27) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528c3c8;
        uVar15 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar15 = 0;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528c3ca;
  }
LAB_0528c3c8:
  uVar15 = 0;
LAB_0528c3ca:
  plStack_9e8 = _DAT_0f556928;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556820;
  plStack_8e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,puVar27,0xf5567f0,&plStack_9e8,&plStack_8e8,&plStack_808,uVar15);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    puVar21 = puVar8;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c475:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar21 + uVar25;
      if (*(ushort *)(puVar21[uVar25] + 0x168) < 0x25) goto LAB_0528c460;
      if (*(ushort *)(puVar21[uVar25] + 0x168) == 0x25) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar21[uVar26] + 0x168) < 0x25) {
              puVar21 = puVar21 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        puVar22 = puVar22 + 1;
        if ((long)puVar16 - (long)puVar22 != 0) {
          uVar26 = (long)puVar16 - (long)puVar22 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar22[uVar25] + 0x168) < 0x26) {
              puVar22 = puVar22 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar16 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528c4ea:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    puVar21 = puVar8;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c529:
    do {
      uVar25 = uVar26 >> 1;
      puVar22 = puVar21 + uVar25;
      if (*(ushort *)(puVar21[uVar25] + 0x168) < 0xa5) goto LAB_0528c510;
      if (*(ushort *)(puVar21[uVar25] + 0x168) == 0xa5) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar21[uVar26] + 0x168) < 0xa5) {
              puVar21 = puVar21 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        puVar22 = puVar22 + 1;
        if ((long)puVar16 - (long)puVar22 != 0) {
          uVar26 = (long)puVar16 - (long)puVar22 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar22[uVar25] + 0x168) < 0xa6) {
              puVar22 = puVar22 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        break;
      }
      puVar16 = puVar22;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528c643:
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c679:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0x26) goto LAB_0528c660;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0x26) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0x26) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = ~uVar26 + uVar25;
            }
            uVar25 = uVar26;
          } while (uVar26 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0x27) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528c708;
        uVar15 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar15 = 0;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528c70a;
  }
LAB_0528c708:
  uVar15 = 0;
LAB_0528c70a:
  plStack_9e8 = _DAT_0f556928;
  plStack_9e0 = (long *)_DAT_0f556948;
  plStack_8e8 = _DAT_0f556820;
  plStack_8e0 = (long *)_DAT_0f556838;
  func_0x05272970(auStack_a08,puVar27,0xf556800,&plStack_9e8,&plStack_8e8,&plStack_808,uVar15);
  plStack_9e8 = (long *)0x1f4;
  plStack_9e0 = (long *)0xa6a;
  func_0x052787b0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xa6a;
  plStack_9e0 = (long *)0xfa0;
  func_0x05273030(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0xfa0;
  plStack_9e0 = (long *)0x1622;
  func_0x05274fe0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0x1622;
  plStack_9e0 = (long *)0x1df2;
  func_0x05276c80(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0x1df2;
  plStack_9e0 = (long *)0x2475;
  func_0x05274fe0(alStack_618,auStack_a08,&plStack_9e8,param_3);
  plStack_9e8 = (long *)0x2475;
  plStack_9e0 = (long *)0x2710;
  func_0x05273030(alStack_618,auStack_a08,&plStack_9e8,param_3);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528c8c9:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0xbc) goto LAB_0528c8b0;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0xbc) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xbc) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xbd) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528c9f2;
        uVar15 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar26 = uVar25;
      uVar15 = 0;
    } while (uVar25 != 0);
    goto LAB_0528c9f5;
  }
LAB_0528c9f2:
  uVar15 = 0;
LAB_0528c9f5:
  func_0x0527a220(auStack_a08,_DAT_0f556740,_DAT_0f556748,0xf556958,&DAT_0f556740,&DAT_0f556740,
                  uVar15);
  puVar8 = *(undefined8 **)(param_3 + 0x380);
  puVar10 = *(undefined8 **)(param_3 + 0x388);
  if ((long)puVar10 - (long)puVar8 != 0) {
    puVar16 = puVar10;
    uVar26 = (long)puVar10 - (long)puVar8 >> 3;
LAB_0528ca69:
    do {
      uVar25 = uVar26 >> 1;
      puVar21 = puVar8 + uVar25;
      if (*(ushort *)(puVar8[uVar25] + 0x168) < 0xbb) goto LAB_0528ca50;
      if (*(ushort *)(puVar8[uVar25] + 0x168) == 0xbb) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(puVar8[uVar26] + 0x168) < 0xbb) {
              puVar8 = puVar8 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)puVar16 - (long)(puVar21 + 1);
        if (lVar9 != 0) {
          puVar16 = puVar21 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(puVar16[uVar25] + 0x168) < 0xbc) {
              puVar16 = puVar16 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if ((puVar8 == puVar16) || (puVar8 == puVar10)) goto LAB_0528cb92;
        uVar15 = *puVar8;
        break;
      }
      puVar16 = puVar21;
      uVar15 = 0;
      uVar26 = uVar25;
    } while (uVar25 != 0);
    goto LAB_0528cb95;
  }
LAB_0528cb92:
  uVar15 = 0;
LAB_0528cb95:
  func_0x0527a220(auStack_a08,_DAT_0f556970,_DAT_0f556978,&DAT_0f556740,&DAT_0f556740,&DAT_0f556740,
                  uVar15);
  plVar13 = *(long **)(param_3 + 0x380);
  plVar30 = *(long **)(param_3 + 0x388);
  if ((long)plVar30 - (long)plVar13 != 0) {
    plVar17 = plVar13;
    plVar23 = plVar30;
    uVar26 = (long)plVar30 - (long)plVar13 >> 3;
LAB_0528cc09:
    do {
      uVar25 = uVar26 >> 1;
      plVar18 = plVar17 + uVar25;
      if (*(ushort *)(plVar17[uVar25] + 0x168) < 0xc2) goto LAB_0528cbf0;
      if (*(ushort *)(plVar17[uVar25] + 0x168) == 0xc2) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(plVar17[uVar26] + 0x168) < 0xc2) {
              plVar17 = plVar17 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar9 = (long)plVar23 - (long)(plVar18 + 1);
        if (lVar9 != 0) {
          plVar23 = plVar18 + 1;
          uVar26 = lVar9 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(plVar23[uVar25] + 0x168) < 0xc3) {
              plVar23 = plVar23 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if (((plVar17 != plVar23) && (plVar17 != plVar30)) && (*plVar17 != 0)) {
          func_0x0527a220(auStack_a08,_DAT_0f556740,_DAT_0f556748,0xf5569b8,0xf5569a0,0xf556988,
                          *plVar17);
          plVar13 = *(long **)(param_3 + 0x380);
          plVar30 = *(long **)(param_3 + 0x388);
        }
        break;
      }
      plVar23 = plVar18;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528cd79:
  lVar28 = _DAT_0f556838;
  plVar17 = _DAT_0f556820;
  lVar9 = _DAT_0f556748;
  plVar23 = _DAT_0f556740;
  if ((long)plVar30 - (long)plVar13 != 0) {
    plVar18 = plVar30;
    uVar26 = (long)plVar30 - (long)plVar13 >> 3;
LAB_0528cdb9:
    do {
      uVar25 = uVar26 >> 1;
      plVar1 = plVar13 + uVar25;
      if (*(ushort *)(plVar13[uVar25] + 0x168) < 0xbe) goto LAB_0528cda0;
      if (*(ushort *)(plVar13[uVar25] + 0x168) == 0xbe) {
        if (uVar26 != 1) {
          do {
            uVar26 = uVar25 >> 1;
            if (*(ushort *)(plVar13[uVar26] + 0x168) < 0xbe) {
              plVar13 = plVar13 + uVar26 + 1;
              uVar26 = uVar25 + ~uVar26;
            }
            uVar25 = uVar26;
          } while (uVar25 != 0);
        }
        lVar24 = (long)plVar18 - (long)(plVar1 + 1);
        if (lVar24 != 0) {
          plVar18 = plVar1 + 1;
          uVar26 = lVar24 >> 3;
          do {
            uVar25 = uVar26 >> 1;
            if (*(ushort *)(plVar18[uVar25] + 0x168) < 0xbf) {
              plVar18 = plVar18 + uVar25 + 1;
              uVar25 = ~uVar25 + uVar26;
            }
            uVar26 = uVar25;
          } while (uVar25 != 0);
        }
        if (((plVar13 != plVar18) && (plVar13 != plVar30)) && (lVar24 = *plVar13, lVar24 != 0)) {
          plStack_808 = _DAT_0f556740;
          plStack_800 = (long *)_DAT_0f556748;
          auStack_908._8_8_ = _DAT_0f556748;
          auStack_908._0_8_ = _DAT_0f556740;
          plStack_9e8 = _DAT_0f556740;
          plStack_9e0 = (long *)_DAT_0f556748;
          plStack_8e8 = _DAT_0f556740;
          plStack_8e0 = (long *)_DAT_0f556748;
          plStack_628 = _DAT_0f556740;
          lStack_620 = _DAT_0f556748;
          plStack_638 = _DAT_0f556740;
          lStack_630 = _DAT_0f556748;
          plStack_648 = _DAT_0f556740;
          lStack_640 = _DAT_0f556748;
          plStack_658 = _DAT_0f556740;
          lStack_650 = _DAT_0f556748;
          if ((ulong)auStack_a08._8_8_ < plStack_9f8) {
            *(long *)auStack_a08._8_8_ = lVar24;
            *(long **)(auStack_a08._8_8_ + 8) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x10) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0x18) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x20) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0x28) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x30) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0x38) = plVar17;
            *(long *)(auStack_a08._8_8_ + 0x40) = lVar28;
            *(long *)(auStack_a08._8_8_ + 0x48) = 11000;
            *(long *)(auStack_a08._8_8_ + 0x50) = 11000;
            *(long **)(auStack_a08._8_8_ + 0x58) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x60) = lVar9;
            *(long *)(auStack_a08._8_8_ + 0x68) = 0;
            *(long **)(auStack_a08._8_8_ + 0x70) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x78) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0x80) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x88) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0x90) = plVar23;
            *(long *)(auStack_a08._8_8_ + 0x98) = lVar9;
            *(long **)(auStack_a08._8_8_ + 0xa0) = plVar17;
            *(long *)(auStack_a08._8_8_ + 0xa8) = lVar28;
            *(long *)(auStack_a08._8_8_ + 0xb0) = 11000;
            *(long *)(auStack_a08._8_8_ + 0xb8) = 11000;
            *(long **)(auStack_a08._8_8_ + 0xc0) = plVar23;
            *(long *)(auStack_a08._8_8_ + 200) = lVar9;
            *(long *)(auStack_a08._8_8_ + 0xd0) = 0;
            *(long *)(auStack_a08._8_8_ + 0xd8) = 0;
            plVar13 = (long *)(auStack_a08._8_8_ + 0xe0);
            lVar31 = auStack_a08._0_8_;
          }
          else {
            lVar28 = auStack_a08._8_8_ - auStack_a08._0_8_;
            uVar26 = (lVar28 >> 5) * 0x6db6db6db6db6db7 + 1;
            if (0x124924924924924 < uVar26) {
              func_0x04a6ae80();
LAB_0528e2e8:
              uVar15 = func_0x04882eb0();
              uVar15 = func_0x04882e20(uVar15);
              uVar15 = func_0x04882e20(uVar15);
              func_0x04a6eb40(plVar23);
              lVar9 = *(long *)(lVar31 + 0x38);
              if (lVar9 != 0) {
                *(long *)(lVar31 + 0x40) = lVar9;
                FUN_0412a280(lVar9,*(long *)(lVar31 + 0x48) - lVar9);
              }
              func_0x0528e600(&plStack_9e8);
              FUN_0412a280(0x360,0xe8);
              func_0x0528e580(auStack_908);
              func_0x0528e600(&plStack_8e8);
              func_0x0528e520(&plStack_808);
              if (auStack_a08._0_8_ != 0) {
                FUN_0412a280(auStack_a08._0_8_,(long)plStack_9f8 - auStack_a08._0_8_);
              }
              func_0x0eee2d70(uVar15);
              pcVar3 = (code *)swi(3);
              puVar8 = (undefined8 *)(*pcVar3)();
              return puVar8;
            }
            plStack_730 = _DAT_0f556820;
            lStack_728 = _DAT_0f556838;
            lStack_738 = auStack_a08._0_8_;
            lStack_740 = (long)plStack_9f8 - auStack_a08._0_8_;
            uVar25 = (lStack_740 >> 5) * -0x2492492492492492;
            if (uVar26 < uVar25) {
              uVar26 = uVar25;
            }
            if (0x92492492492491 < (ulong)((lStack_740 >> 5) * 0x6db6db6db6db6db7)) {
              uVar26 = 0x124924924924924;
            }
            if (0x124924924924924 < uVar26) goto LAB_0528e2e8;
            lStack_810 = uVar26 * 0xe0;
            lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar31 == 0) {
              func_0x0eec74c0(lStack_810,0);
            }
            lVar4 = lStack_738;
            plVar30 = (long *)(lStack_810 + lVar31);
            *(long *)(lVar31 + lVar28) = lVar24;
            *(long **)(lVar31 + 8 + lVar28) = plVar23;
            *(long *)(lVar31 + 0x10 + lVar28) = lVar9;
            *(long **)(lVar31 + 0x18 + lVar28) = plVar23;
            *(long *)(lVar31 + 0x20 + lVar28) = lVar9;
            plVar13 = (long *)(lVar31 + 0x28 + lVar28);
            *plVar13 = (long)plStack_9e8;
            plVar13[1] = (long)plStack_9e0;
            *(long **)(lVar31 + 0x38 + lVar28) = plStack_730;
            *(long *)(lVar31 + 0x40 + lVar28) = lStack_728;
            *(undefined8 *)(lVar31 + 0x48 + lVar28) = 11000;
            *(undefined8 *)(lVar31 + 0x50 + lVar28) = 11000;
            plVar13 = (long *)(lVar31 + 0x58 + lVar28);
            *plVar13 = (long)plStack_8e8;
            plVar13[1] = (long)plStack_8e0;
            *(undefined8 *)(lVar31 + 0x68 + lVar28) = 0;
            *(long **)(lVar31 + 0x70 + lVar28) = plVar23;
            *(long *)(lVar31 + 0x78 + lVar28) = lVar9;
            *(long **)(lVar31 + 0x80 + lVar28) = plVar23;
            *(long *)(lVar31 + 0x88 + lVar28) = lVar9;
            plVar13 = (long *)(lVar31 + 0x90 + lVar28);
            *plVar13 = (long)plStack_808;
            plVar13[1] = (long)plStack_800;
            *(long **)(lVar31 + 0xa0 + lVar28) = plStack_730;
            *(long *)(lVar31 + 0xa8 + lVar28) = lStack_728;
            *(undefined8 *)(lVar31 + 0xb0 + lVar28) = 11000;
            *(undefined8 *)(lVar31 + 0xb8 + lVar28) = 11000;
            puVar8 = (undefined8 *)(lVar31 + 0xc0 + lVar28);
            *puVar8 = auStack_908._0_8_;
            puVar8[1] = auStack_908._8_8_;
            plVar13 = (long *)(lVar31 + 0xe0 + lVar28);
            puVar8 = (undefined8 *)(lVar31 + 0xd0 + lVar28);
            *puVar8 = 0;
            puVar8[1] = 0;
            func_0x0eee2f00(lVar31,lStack_738,lVar28);
            auStack_a08._8_8_ = plVar13;
            auStack_a08._0_8_ = lVar31;
            plStack_9f8 = plVar30;
            if (lVar4 != 0) {
              FUN_0412a280(lVar4,lStack_740);
              lVar31 = auStack_a08._0_8_;
            }
          }
          auStack_a08._0_8_ = lVar31;
          auStack_a08._8_8_ = plVar13;
        }
        break;
      }
      plVar18 = plVar1;
      uVar26 = uVar25;
    } while (uVar25 != 0);
  }
LAB_0528d399:
  func_0x04a3d050(&plStack_808,auStack_a08);
  lStack_8d0 = lStack_7f8;
  lStack_8d8 = (long)plStack_800;
  plVar13 = plStack_808;
  plStack_718 = plStack_808;
  lStack_710 = (long)plStack_800;
  lStack_708 = lStack_7f8;
  plStack_808 = (long *)0x0;
  plStack_800 = (long *)0x0;
  lStack_7f8 = 0;
  uStack_700 = uStack_700 & 0xffffffffffffff00;
  bStack_660 = 0;
  bVar32 = cStack_750 == '\x01';
  if (bVar32) {
    lStack_6a0 = lStack_790;
    lStack_698 = lStack_788;
    alStack_6c0[2] = lStack_7a0;
    alStack_6c0[3] = lStack_798;
    alStack_6c0[0] = lStack_7b0;
    alStack_6c0[1] = lStack_7a8;
    uStack_6d0 = uStack_7c0;
    uStack_6cc = uStack_7bc;
    uStack_6c8 = uStack_7b8;
    uStack_6c4 = uStack_7b4;
    uStack_6e0 = uStack_7d0;
    uStack_6dc = uStack_7cc;
    uStack_6d8 = uStack_7c8;
    uStack_6d4 = uStack_7c4;
    lStack_6f0 = lStack_7e0;
    lStack_6e8 = lStack_7d8;
    uStack_700 = uStack_7f0;
    lStack_6f8 = lStack_7e8;
    lStack_690 = 0;
    lStack_688 = 0;
    lStack_680 = 0;
    func_0x04a62b30(&lStack_690,lStack_780,lStack_778,
                    (lStack_778 - lStack_780 >> 5) * -0x3333333333333333);
    lStack_668 = lStack_758;
    lStack_678 = lStack_768;
    lStack_670 = lStack_760;
    plVar13 = plStack_718;
    lStack_8d8 = lStack_710;
    lStack_8d0 = lStack_708;
  }
  plStack_8e8 = param_7;
  plStack_718 = (long *)0x0;
  lStack_710 = 0;
  lStack_708 = 0;
  uStack_8c8 = uStack_8c8 & 0xffffffffffffff00;
  cStack_828 = 0;
  plStack_8e0 = plVar13;
  bStack_660 = bVar32;
  if (bVar32) {
    lStack_868 = lStack_6a0;
    lStack_860 = lStack_698;
    lStack_878 = alStack_6c0[2];
    lStack_870 = alStack_6c0[3];
    lStack_888 = alStack_6c0[0];
    lStack_880 = alStack_6c0[1];
    uStack_898 = uStack_6d0;
    uStack_894 = uStack_6cc;
    uStack_890 = uStack_6c8;
    uStack_88c = uStack_6c4;
    uStack_8a8 = uStack_6e0;
    uStack_8a4 = uStack_6dc;
    uStack_8a0 = uStack_6d8;
    uStack_89c = uStack_6d4;
    lStack_8b8 = lStack_6f0;
    lStack_8b0 = lStack_6e8;
    uStack_8c8 = uStack_700;
    lStack_8c0 = lStack_6f8;
    auStack_858 = (undefined1  [16])0x0;
    lStack_848 = 0;
    func_0x04a62b30(auStack_858,lStack_690,lStack_688,
                    (lStack_688 - lStack_690 >> 5) * -0x3333333333333333);
    lStack_830 = lStack_668;
    lStack_840 = lStack_678;
    lStack_838 = lStack_670;
  }
  lStack_820 = param_8;
  cStack_828 = bVar32;
  lStack_818 = param_3;
  if (((bStack_660 & 1) != 0) && (lStack_690 != 0)) {
    func_0x04a67380(&lStack_690);
    FUN_0412a280(lStack_690,lStack_680 - lStack_690);
  }
  if (plStack_718 != (long *)0x0) {
    lStack_710 = (long)plStack_718;
    FUN_0412a280(plStack_718,lStack_708 - (long)plStack_718);
  }
  auStack_908 = (undefined1  [16])0x0;
  uStack_8f8 = 0;
  plVar13 = *(long **)(param_3 + 0x380);
  plVar30 = *(long **)(param_3 + 0x388);
  if (plVar13 == plVar30) {
LAB_0528d9d3:
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf0);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xf0,0);
    }
    lStack_9d0 = lStack_8d0;
    lStack_9d8 = lStack_8d8;
    plStack_9e0 = plStack_8e0;
    plStack_9e8 = plStack_8e8;
    plStack_8e0 = (long *)0x0;
    lStack_8d8 = 0;
    lStack_8d0 = 0;
    uStack_9c8 = uStack_9c8 & 0xffffffffffffff00;
    bStack_928 = 0;
    bVar32 = cStack_828 == '\x01';
    if (bVar32) {
      lStack_968 = lStack_868;
      lStack_960 = lStack_860;
      lStack_978 = lStack_878;
      lStack_970 = lStack_870;
      lStack_988 = lStack_888;
      lStack_980 = lStack_880;
      uStack_998 = uStack_898;
      uStack_994 = uStack_894;
      uStack_990 = uStack_890;
      uStack_98c = uStack_88c;
      uStack_9a8 = uStack_8a8;
      uStack_9a4 = uStack_8a4;
      uStack_9a0 = uStack_8a0;
      uStack_99c = uStack_89c;
      lStack_9b8 = lStack_8b8;
      lStack_9b0 = lStack_8b0;
      uStack_9c8 = uStack_8c8;
      lStack_9c0 = lStack_8c0;
      lStack_958 = 0;
      lStack_950 = 0;
      lStack_948 = 0;
      func_0x04a62b30(&lStack_958,auStack_858._0_8_,auStack_858._8_8_,
                      ((long)(auStack_858._8_8_ - auStack_858._0_8_) >> 5) * -0x3333333333333333);
      lStack_930 = lStack_830;
      lStack_940 = lStack_840;
      lStack_938 = lStack_838;
    }
    lStack_920 = lStack_820;
    lStack_918 = lStack_818;
    uVar2 = *param_9;
    *puVar8 = &UNK_0ef52f68;
    puVar8[1] = plStack_9e8;
    puVar8[2] = plStack_9e0;
    puVar8[3] = lStack_9d8;
    puVar8[4] = lStack_9d0;
    plStack_9e0 = (long *)0x0;
    lStack_9d8 = 0;
    lStack_9d0 = 0;
    *(undefined1 *)(puVar8 + 5) = 0;
    *(undefined1 *)(puVar8 + 0x19) = 0;
    bStack_928 = bVar32;
    if (bVar32) {
      puVar8[0x11] = lStack_968;
      puVar8[0x12] = lStack_960;
      puVar8[0xf] = lStack_978;
      puVar8[0x10] = lStack_970;
      puVar8[0xd] = lStack_988;
      puVar8[0xe] = lStack_980;
      *(undefined4 *)(puVar8 + 0xb) = uStack_998;
      *(undefined4 *)((long)puVar8 + 0x5c) = uStack_994;
      *(undefined4 *)(puVar8 + 0xc) = uStack_990;
      *(undefined4 *)((long)puVar8 + 100) = uStack_98c;
      *(undefined4 *)(puVar8 + 9) = uStack_9a8;
      *(undefined4 *)((long)puVar8 + 0x4c) = uStack_9a4;
      *(undefined4 *)(puVar8 + 10) = uStack_9a0;
      *(undefined4 *)((long)puVar8 + 0x54) = uStack_99c;
      puVar8[7] = lStack_9b8;
      puVar8[8] = lStack_9b0;
      puVar8[5] = uStack_9c8;
      puVar8[6] = lStack_9c0;
      *(undefined1 (*) [16])(puVar8 + 0x13) = (undefined1  [16])0x0;
      puVar8[0x15] = 0;
      func_0x04a62b30(puVar8 + 0x13,lStack_958,lStack_950,
                      (lStack_950 - lStack_958 >> 5) * -0x3333333333333333);
      puVar8[0x18] = lStack_930;
      puVar8[0x16] = lStack_940;
      puVar8[0x17] = lStack_938;
      *(undefined1 *)(puVar8 + 0x19) = 1;
    }
    puVar8[0x1a] = lStack_920;
    puVar8[0x1b] = lStack_918;
    *(undefined4 *)(puVar8 + 0x1c) = uVar2;
    if (((bStack_928 & 1) != 0) && (lStack_958 != 0)) {
      func_0x04a67380(&lStack_958);
      FUN_0412a280(lStack_958,lStack_948 - lStack_958);
    }
    if (plStack_9e0 != (long *)0x0) {
      lStack_9d8 = (long)plStack_9e0;
      FUN_0412a280(plStack_9e0,lStack_9d0 - (long)plStack_9e0);
    }
    *puVar8 = &UNK_0ef9fc68;
    puVar8[0x1d] = 0;
    pauVar14 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (pauVar14 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x40,0);
    }
    pauVar14[2] = (undefined1  [16])0x0;
    pauVar14[1] = (undefined1  [16])0x0;
    *pauVar14 = (undefined1  [16])0x0;
    pauVar14[3] = (undefined1  [16])0x0;
    *(undefined4 *)pauVar14[2] = 0x3f800000;
    LOCK();
    *(undefined8 *)(pauVar14[3] + 8) = 0;
    UNLOCK();
    plVar13 = (long *)puVar8[0x1d];
    puVar8[0x1d] = pauVar14;
    if (plVar13 == (long *)0x0) goto LAB_0528e0ce;
    if (((plVar13[7] != plVar13[5]) || ((int)plVar13[6] != 0)) &&
       (cVar6 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar10 = (undefined8 *)plVar13[2];
    while (puVar10 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)*puVar10;
      FUN_0412a280(puVar10,0x28);
      puVar10 = puVar16;
    }
  }
  else {
    do {
      lVar9 = *plVar13;
      if (lVar9 != *(long *)(param_3 + 0x3b8)) {
        if ((DAT_0f553e08 == '\0') && (iVar7 = FUN_04108328(&DAT_0f553e08), iVar7 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f553e00 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f553e08);
        }
        for (psVar11 = *(short **)(lVar9 + 0x170); psVar11 != *(short **)(lVar9 + 0x178);
            psVar11 = psVar11 + 8) {
          if (*psVar11 == _DAT_0f553e00) {
            lVar9 = *(long *)(psVar11 + 4);
            if (lVar9 != 0) {
              lVar31 = *(long *)(lVar9 + 8);
              lVar9 = *(long *)(lVar9 + 0x10);
              goto LAB_0528d774;
            }
            break;
          }
        }
      }
LAB_0528d6e0:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar30);
    if (auStack_908._0_8_ == auStack_908._8_8_) goto LAB_0528d9d3;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xe8,0);
    }
    lStack_9d0 = lStack_8d0;
    lStack_9d8 = lStack_8d8;
    plStack_9e0 = plStack_8e0;
    plStack_9e8 = plStack_8e8;
    plStack_8e0 = (long *)0x0;
    lStack_8d8 = 0;
    lStack_8d0 = 0;
    uStack_9c8 = uStack_9c8 & 0xffffffffffffff00;
    bStack_928 = 0;
    bVar32 = cStack_828 == '\x01';
    if (bVar32) {
      lStack_968 = lStack_868;
      lStack_960 = lStack_860;
      lStack_978 = lStack_878;
      lStack_970 = lStack_870;
      lStack_988 = lStack_888;
      lStack_980 = lStack_880;
      uStack_998 = uStack_898;
      uStack_994 = uStack_894;
      uStack_990 = uStack_890;
      uStack_98c = uStack_88c;
      uStack_9a8 = uStack_8a8;
      uStack_9a4 = uStack_8a4;
      uStack_9a0 = uStack_8a0;
      uStack_99c = uStack_89c;
      lStack_9b8 = lStack_8b8;
      lStack_9b0 = lStack_8b0;
      uStack_9c8 = uStack_8c8;
      lStack_9c0 = lStack_8c0;
      lStack_958 = 0;
      lStack_950 = 0;
      lStack_948 = 0;
      func_0x04a62b30(&lStack_958,auStack_858._0_8_,auStack_858._8_8_,
                      ((long)(auStack_858._8_8_ - auStack_858._0_8_) >> 5) * -0x3333333333333333);
      lStack_930 = lStack_830;
      lStack_940 = lStack_840;
      lStack_938 = lStack_838;
    }
    lStack_920 = lStack_820;
    lStack_918 = lStack_818;
    uVar2 = *param_9;
    *plVar13 = (long)&UNK_0ef52f68;
    plVar13[1] = (long)plStack_9e8;
    plVar13[2] = (long)plStack_9e0;
    plVar13[3] = lStack_9d8;
    plVar13[4] = lStack_9d0;
    plStack_9e0 = (long *)0x0;
    lStack_9d8 = 0;
    lStack_9d0 = 0;
    *(undefined1 *)(plVar13 + 5) = 0;
    *(undefined1 *)(plVar13 + 0x19) = 0;
    bStack_928 = bVar32;
    if (bVar32) {
      plVar13[0x11] = lStack_968;
      plVar13[0x12] = lStack_960;
      plVar13[0xf] = lStack_978;
      plVar13[0x10] = lStack_970;
      plVar13[0xd] = lStack_988;
      plVar13[0xe] = lStack_980;
      *(undefined4 *)(plVar13 + 0xb) = uStack_998;
      *(undefined4 *)((long)plVar13 + 0x5c) = uStack_994;
      *(undefined4 *)(plVar13 + 0xc) = uStack_990;
      *(undefined4 *)((long)plVar13 + 100) = uStack_98c;
      *(undefined4 *)(plVar13 + 9) = uStack_9a8;
      *(undefined4 *)((long)plVar13 + 0x4c) = uStack_9a4;
      *(undefined4 *)(plVar13 + 10) = uStack_9a0;
      *(undefined4 *)((long)plVar13 + 0x54) = uStack_99c;
      plVar13[7] = lStack_9b8;
      plVar13[8] = lStack_9b0;
      plVar13[5] = uStack_9c8;
      plVar13[6] = lStack_9c0;
      *(undefined1 (*) [16])(plVar13 + 0x13) = (undefined1  [16])0x0;
      plVar13[0x15] = 0;
      func_0x04a62b30(plVar13 + 0x13,lStack_958,lStack_950,
                      (lStack_950 - lStack_958 >> 5) * -0x3333333333333333);
      plVar13[0x18] = lStack_930;
      plVar13[0x16] = lStack_940;
      plVar13[0x17] = lStack_938;
      *(undefined1 *)(plVar13 + 0x19) = 1;
    }
    plVar13[0x1a] = lStack_920;
    plVar13[0x1b] = lStack_918;
    *(undefined4 *)(plVar13 + 0x1c) = uVar2;
    if (((bStack_928 & 1) != 0) && (lStack_958 != 0)) {
      func_0x04a67380(&lStack_958);
      FUN_0412a280(lStack_958,lStack_948 - lStack_958);
    }
    if (plStack_9e0 != (long *)0x0) {
      lStack_9d8 = (long)plStack_9e0;
      FUN_0412a280(plStack_9e0,lStack_9d0 - (long)plStack_9e0);
    }
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x88,0);
    }
    plStack_9e8 = plVar13;
    func_0x04a3dcf0(puVar8,uStack_720,auStack_908,&plStack_9e8);
    plVar13 = plStack_9e8;
    plStack_9e8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    *puVar8 = &UNK_0ef9fbe0;
    puVar8[0x10] = 0;
    pauVar14 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (pauVar14 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x40,0);
    }
    pauVar14[2] = (undefined1  [16])0x0;
    pauVar14[1] = (undefined1  [16])0x0;
    *pauVar14 = (undefined1  [16])0x0;
    pauVar14[3] = (undefined1  [16])0x0;
    *(undefined4 *)pauVar14[2] = 0x3f800000;
    LOCK();
    *(undefined8 *)(pauVar14[3] + 8) = 0;
    UNLOCK();
    plVar13 = (long *)puVar8[0x10];
    puVar8[0x10] = pauVar14;
    if (plVar13 == (long *)0x0) goto LAB_0528e0ce;
    if (((plVar13[7] != plVar13[5]) || ((int)plVar13[6] != 0)) &&
       (cVar6 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar10 = (undefined8 *)plVar13[2];
    while (puVar10 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)*puVar10;
      FUN_0412a280(puVar10,0x28);
      puVar10 = puVar16;
    }
  }
  lVar9 = *plVar13;
  *plVar13 = 0;
  if (lVar9 != 0) {
    FUN_0412a280(lVar9,plVar13[1] << 3);
  }
  FUN_0412a280(plVar13,0x40);
LAB_0528e0ce:
  *puStack_8f0 = puVar8;
  uVar15 = auStack_908._0_8_;
  if (auStack_908._0_8_ != 0) {
    for (lVar9 = auStack_908._8_8_; uVar15 != lVar9; lVar9 = lVar9 + -0x48) {
      lVar31 = *(long *)(lVar9 + -0x28);
      if (lVar31 != 0) {
        *(long *)(lVar9 + -0x20) = lVar31;
        FUN_0412a280(lVar31,*(long *)(lVar9 + -0x18) - lVar31);
      }
      if ((*(byte *)(lVar9 + -0x40) & 1) != 0) {
        FUN_0412a280(*(undefined8 *)(lVar9 + -0x30),*(ulong *)(lVar9 + -0x40) & 0xfffffffffffffffe);
      }
    }
    auStack_908._8_8_ = uVar15;
    FUN_0412a280(auStack_908._0_8_,uStack_8f8 - auStack_908._0_8_);
  }
  if ((cStack_828 == '\x01') && (auStack_858._0_8_ != 0)) {
    func_0x04a67380(auStack_858);
    FUN_0412a280(auStack_858._0_8_,lStack_848 - auStack_858._0_8_);
  }
  puVar8 = puStack_8f0;
  if (plStack_8e0 != (long *)0x0) {
    lStack_8d8 = (long)plStack_8e0;
    FUN_0412a280(plStack_8e0,lStack_8d0 - (long)plStack_8e0);
  }
  if ((cStack_750 == '\x01') && (lStack_780 != 0)) {
    func_0x04a67380(&lStack_780);
    FUN_0412a280(lStack_780,lStack_770 - lStack_780);
  }
  if (plStack_808 != (long *)0x0) {
    plStack_800 = plStack_808;
    FUN_0412a280(plStack_808,lStack_7f8 - (long)plStack_808);
  }
  if (auStack_a08._0_8_ != 0) {
    FUN_0412a280(auStack_a08._0_8_,(long)plStack_9f8 - auStack_a08._0_8_);
  }
  return puVar8;
LAB_0528a820:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528a8cb;
  goto LAB_0528a839;
LAB_0528ac40:
  puVar21 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528acca;
  goto LAB_0528ac55;
LAB_0528acf0:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528ad9b;
  goto LAB_0528ad09;
LAB_0528adc0:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar29 = 0;
  if (uVar26 == 0) goto LAB_0528ae6c;
  goto LAB_0528add9;
LAB_0528ae90:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar19 = 0;
  if (uVar26 == 0) goto LAB_0528af3c;
  goto LAB_0528aea9;
LAB_0528af60:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar20 = 0;
  if (uVar26 == 0) goto LAB_0528b0a4;
  goto LAB_0528af79;
LAB_0528b710:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528b7bb;
  goto LAB_0528b729;
LAB_0528bba0:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528bc4b;
  goto LAB_0528bbb9;
LAB_0528be80:
  puVar16 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528bf5b;
  goto LAB_0528be99;
LAB_0528bf70:
  puVar8 = puVar16 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528c083;
  goto LAB_0528bf89;
LAB_0528c120:
  puVar21 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528c1aa;
  goto LAB_0528c135;
LAB_0528c1d0:
  puVar21 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528c303;
  goto LAB_0528c1e9;
LAB_0528c320:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528c3ca;
  goto LAB_0528c339;
LAB_0528c460:
  puVar21 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528c4ea;
  goto LAB_0528c475;
LAB_0528c510:
  puVar21 = puVar22 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528c643;
  goto LAB_0528c529;
LAB_0528c660:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528c70a;
  goto LAB_0528c679;
LAB_0528c8b0:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528c9f5;
  goto LAB_0528c8c9;
LAB_0528ca50:
  puVar8 = puVar21 + 1;
  uVar26 = ~uVar25 + uVar26;
  uVar15 = 0;
  if (uVar26 == 0) goto LAB_0528cb95;
  goto LAB_0528ca69;
LAB_0528cbf0:
  plVar17 = plVar18 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528cd79;
  goto LAB_0528cc09;
LAB_0528cda0:
  plVar13 = plVar1 + 1;
  uVar26 = ~uVar25 + uVar26;
  if (uVar26 == 0) goto LAB_0528d399;
  goto LAB_0528cdb9;
LAB_0528d774:
  if (lVar31 == lVar9) goto LAB_0528d6e0;
  bVar5 = *(byte *)(lVar31 + 8);
  if ((bVar5 & 1) == 0) {
    if (bVar5 >> 1 == 0x13) goto LAB_0528d7aa;
  }
  else if (*(long *)(lVar31 + 0x10) == 0x13) {
LAB_0528d7aa:
    if ((bVar5 & 1) == 0) {
      pcVar12 = (char *)(lVar31 + 9);
    }
    else {
      pcVar12 = *(char **)(lVar31 + 0x18);
    }
    auVar33[0] = -(*pcVar12 == DAT_014e3ca0);
    auVar33[1] = -(pcVar12[1] == UNK_014e3ca1);
    auVar33[2] = -(pcVar12[2] == UNK_014e3ca2);
    auVar33[3] = -(pcVar12[3] == UNK_014e3ca3);
    auVar33[4] = -(pcVar12[4] == UNK_014e3ca4);
    auVar33[5] = -(pcVar12[5] == UNK_014e3ca5);
    auVar33[6] = -(pcVar12[6] == UNK_014e3ca6);
    auVar33[7] = -(pcVar12[7] == UNK_014e3ca7);
    auVar33[8] = -(pcVar12[8] == UNK_014e3ca8);
    auVar33[9] = -(pcVar12[9] == UNK_014e3ca9);
    auVar33[10] = -(pcVar12[10] == UNK_014e3caa);
    auVar33[0xb] = -(pcVar12[0xb] == UNK_014e3cab);
    auVar33[0xc] = -(pcVar12[0xc] == UNK_014e3cac);
    auVar33[0xd] = -(pcVar12[0xd] == UNK_014e3cad);
    auVar33[0xe] = -(pcVar12[0xe] == UNK_014e3cae);
    auVar33[0xf] = -(pcVar12[0xf] == UNK_014e3caf);
    auVar34[0] = -(pcVar12[3] == DAT_014e91d0);
    auVar34[1] = -(pcVar12[4] == UNK_014e91d1);
    auVar34[2] = -(pcVar12[5] == UNK_014e91d2);
    auVar34[3] = -(pcVar12[6] == UNK_014e91d3);
    auVar34[4] = -(pcVar12[7] == UNK_014e91d4);
    auVar34[5] = -(pcVar12[8] == UNK_014e91d5);
    auVar34[6] = -(pcVar12[9] == UNK_014e91d6);
    auVar34[7] = -(pcVar12[10] == UNK_014e91d7);
    auVar34[8] = -(pcVar12[0xb] == UNK_014e91d8);
    auVar34[9] = -(pcVar12[0xc] == UNK_014e91d9);
    auVar34[10] = -(pcVar12[0xd] == UNK_014e91da);
    auVar34[0xb] = -(pcVar12[0xe] == UNK_014e91db);
    auVar34[0xc] = -(pcVar12[0xf] == UNK_014e91dc);
    auVar34[0xd] = -(pcVar12[0x10] == UNK_014e91dd);
    auVar34[0xe] = -(pcVar12[0x11] == UNK_014e91de);
    auVar34[0xf] = -(pcVar12[0x12] == UNK_014e91df);
    auVar34 = auVar34 & auVar33;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
      uVar15 = auStack_908._8_8_;
      if ((ulong)auStack_908._8_8_ < uStack_8f8) {
        func_0x052a26a0(auStack_908._8_8_,lVar31);
        lVar28 = uVar15 + 0x48;
      }
      else {
        lVar28 = func_0x052a2500(auStack_908,lVar31);
      }
      auStack_908._8_8_ = lVar28;
    }
  }
  lVar31 = lVar31 + 0x48;
  goto LAB_0528d774;
}



/* ---- referenced strings ----
 * 0x14e3ca0  minecraft:overwo
 * 0x14e91d0  ecraft:overworld
 */
