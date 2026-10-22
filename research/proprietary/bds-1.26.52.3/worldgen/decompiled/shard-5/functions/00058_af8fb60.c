/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb08fb60 (ELF vaddr 0xaf8fb60)
 * Label: caller-of-callee
 * Body:  [[0b08fb60, 0b08fdf5] [0b08fe00, 0b08ff44] [0b08ff50, 0b08ffe3] [0b08fff0, 0b0900c8] [0b0900d0, 0b09030c] [0b090310, 0b0903be] [0b0903c0, 0b09052e] [0b090530, 0b090696] [0b0906a0, 0b090894] [0b0908a0, 0b09118b] [0b091190, 0b091243] [0b091250, 0b092551] [0b092560, 0b0926c1] [0b0926d0, 0b092b62] [0b092b70, 0b092bae] [0b092bb0, 0b092bd2] [0b092be0, 0b092c18] [0b092c20, 0b092c42] [0b092c50, 0b092d13] [0b092d20, 0b09312c] [0b09325a, 0b0933f6] [0b093400, 0b093468] [0b093470, 0b0934a6] [0b0934b0, 0b0934f5] [0b093500, 0b09374a] [0b093750, 0b0937bd] [0b0937c0, 0b0937f6] [0b093800, 0b09384a] [0b093850, 0b0939e8] [0b0939f0, 0b093a65] [0b093a70, 0b093aa1] [0b093ab0, 0b093ad9] [0b093ae0, 0b093b25] [0b093b30, 0b093b7b] [0b093b80, 0b093ba5] [0b093bb0, 0b093c67] [0b093c70, 0b093c92] [0b093ca0, 0b093ce5] [0b093cf0, 0b093d65] [0b093d70, 0b093da1] [0b093db0, 0b093dd9] [0b093de0, 0b093e25] [0b093e30, 0b093e7b] [0b093e80, 0b093ea5] [0b093eb0, 0b094045] [0b094050, 0b0940ae] [0b0940b0, 0b0940d1] [0b0940e0, 0b094163] [0b094170, 0b094192] [0b0941a0, 0b0941e5] [0b0941f0, 0b094265] [0b094270, 0b0942a1] [0b0942b0, 0b0942d9] [0b0942e0, 0b094325] [0b094330, 0b09437b] [0b094380, 0b0943a5] [0b0943b0, 0b094480] [0b0944b7, 0b094714] [0b094720, 0b0947ae] [0b0947b0, 0b0947ce] [0b0947d0, 0b094815] [0b094820, 0b09494e] [0b094950, 0b094a0c] [0b094a10, 0b094abc] [0b094ac0, 0b094afd] [0b094b00, 0b094b77] [0b094b80, 0b094c42] [0b094c50, 0b094cdd] [0b094ce0, 0b094d30] [0b094d40, 0b094edb] [0b094ee0, 0b094f1b] [0b094f20, 0b094fc0] [0b094fd0, 0b09501d] [0b095020, 0b0950aa] [0b095afb, 0b095b44]]
 * Ghidra: FUN_0b08fb60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b08fb60(undefined8 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  short *psVar4;
  short *psVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long **pplVar30;
  char cVar31;
  uint uVar32;
  int iVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  undefined1 *puVar39;
  ulong *puVar40;
  ulong uVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong uVar45;
  undefined8 *puVar46;
  undefined8 *******pppppppuVar47;
  long lVar48;
  long lVar49;
  uint *puVar50;
  short *psVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  bool bVar59;
  short sVar61;
  undefined1 auVar60 [16];
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar73;
  byte bVar75;
  byte bVar77;
  undefined1 auVar63 [16];
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  undefined1 auVar102 [16];
  long *plStack_990;
  long *plStack_988;
  ulong uStack_980;
  undefined8 uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  undefined8 *******pppppppuStack_960;
  undefined1 auStack_958 [16];
  undefined8 uStack_948;
  undefined1 auStack_940 [16];
  undefined1 auStack_930 [16];
  long lStack_920;
  long *plStack_918;
  long *plStack_910;
  ulong uStack_908;
  ulong uStack_900;
  long *plStack_8f8;
  long *plStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  ulong uStack_8d0;
  undefined1 auStack_8c8 [8];
  undefined1 auStack_8c0 [16];
  undefined1 auStack_8b0 [16];
  undefined1 auStack_8a0 [16];
  undefined1 auStack_890 [16];
  undefined8 uStack_880;
  long *plStack_878;
  long *plStack_870;
  ulong uStack_868;
  undefined8 *******pppppppuStack_860;
  undefined8 uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  undefined8 *******apppppppuStack_840 [2];
  code *pcStack_830;
  code *pcStack_828;
  int iStack_820;
  char cStack_81c;
  undefined1 auStack_818 [16];
  long lStack_808;
  undefined1 auStack_800 [16];
  long lStack_7f0;
  undefined1 auStack_7e8 [16];
  long lStack_7d8;
  undefined4 uStack_7d0;
  byte bStack_7cc;
  undefined8 uStack_7c0;
  long *plStack_7b8;
  ulong uStack_7b0;
  undefined8 *******pppppppuStack_7a8;
  undefined8 uStack_7a0;
  long *plStack_798;
  ulong uStack_790;
  undefined8 uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  long *plStack_770;
  ulong uStack_768;
  ulong uStack_760;
  undefined8 uStack_758;
  undefined1 auStack_748 [16];
  undefined8 uStack_738;
  long *plStack_728;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [16];
  undefined1 auStack_700 [16];
  undefined1 auStack_6f0 [16];
  undefined1 auStack_6e0 [16];
  undefined1 auStack_6d0 [16];
  long *plStack_6a8;
  uint uStack_678;
  undefined1 auStack_670 [16];
  undefined1 auStack_660 [16];
  undefined1 auStack_650 [16];
  undefined1 auStack_640 [16];
  long lStack_630;
  undefined4 uStack_628;
  undefined1 uStack_624;
  long lStack_618;
  long *plStack_610;
  long lStack_608;
  undefined *puStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  ulong uStack_5e8;
  long *plStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long *plStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *******pppppppuStack_540;
  long **pplStack_538;
  ulong uStack_530;
  ulong uStack_528;
  undefined8 *******apppppppuStack_520 [2];
  code *pcStack_510;
  code *pcStack_508;
  int iStack_500;
  char cStack_4fc;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined4 uStack_4b0;
  byte bStack_4ac;
  undefined8 uStack_4a8;
  byte bStack_4a0;
  undefined6 uStack_49f;
  undefined1 uStack_499;
  long **pplStack_498;
  ulong *puStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long **pplStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3c8;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long lStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  int iStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [128];
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  short sVar72;
  char cVar74;
  char cVar76;
  
  *param_1 = &UNK_0f280120;
  puStack_5a8 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  puStack_5b0 = param_1 + 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = param_8;
  lStack_5a0 = param_2;
  uVar34 = (**(code **)(*param_3 + 0x18))(param_3);
  lStack_2a0 = (**(code **)(*param_3 + 0xb0))(param_3);
  if (lStack_2a0 != 0) {
    uStack_2e8 = param_7;
    puStack_2c8 = puStack_5a8;
    puStack_2c0 = puStack_5b0;
    ppuStack_298 = &puStack_2b8;
    puStack_2b8 = &UNK_0f2997c0;
    ppuStack_268 = &puStack_288;
    puStack_288 = &UNK_0f2998a0;
    uStack_258 = 0;
    uStack_250 = 0;
    plStack_248 = (long *)0x0;
    uStack_240 = 0;
    uStack_238 = 0x3f800000;
    puStack_220 = (undefined8 *)0x0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_210 = 0x3f800000;
    lStack_320 = param_1[0xb];
    lStack_318 = *(long *)(lStack_5a0 + 0x98);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    puStack_208 = (undefined8 *)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    iStack_178 = 0;
    uStack_150 = 0x3f800000;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_2e0 = param_4;
    uStack_2d8 = param_5;
    lStack_2d0 = param_6;
    uStack_2b0 = uVar34;
    plStack_2a8 = param_3;
    uStack_280 = uVar34;
    plStack_278 = param_3;
    lStack_270 = lStack_2a0;
    if (*(long *)(lStack_318 + 0x10) != *(long *)(lStack_318 + 8)) {
      puStack_600 = &UNK_01254d89;
      lStack_598 = *(long *)(lStack_318 + 0x10);
      do {
        lVar44 = lStack_598 + -0x110;
        lStack_590 = lStack_598;
        lStack_598 = lVar44;
        func_0x09ae0ca0(&lStack_588,lStack_5a0,lVar44,&UNK_01b6e438);
        if (lStack_580 != lStack_588) {
          uVar34 = **(undefined8 **)(**(long **)(lStack_590 + -0x28) + 8);
          if ((DAT_0f5ea4a0 == '\0') && (iVar33 = func_0x04108328(&DAT_0f5ea4a0), iVar33 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            func_0x0410844d(&DAT_0f5ea4a0);
          }
          func_0x0d5f7010(&uStack_4a8,uVar34,&DAT_0f5ea138);
          func_0x0646d5a0(&uStack_170,&uStack_4a8,&uStack_4a8);
          if (((uint)uStack_4a8 & 1) != 0) {
            func_0x0412a280(pplStack_498,
                            CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8) & 0xfffffffffffffffe);
          }
        }
        lStack_310 = lStack_580;
        lVar44 = lStack_588;
        if (lStack_588 != lStack_580) {
          do {
            uStack_768 = 0;
            uStack_760 = 0;
            uStack_758 = 0;
            func_0x0d62a0d0(*(undefined8 *)(lStack_590 + -0x28),lVar44,&uStack_768,
                            *(undefined4 *)(lStack_590 + -8));
            uVar56 = (ulong)((byte)uStack_768 >> 1);
            if ((uStack_768 & 1) != 0) {
              uVar56 = uStack_760;
            }
            if (uVar56 != 0) {
              if ((uStack_768 & 1) == 0) {
                uStack_738 = uStack_758;
                auStack_748._8_8_ = uStack_760;
                auStack_748._0_8_ = uStack_768;
              }
              else {
                func_0x0412e5e0(auStack_748,uStack_758);
              }
              plStack_610 = (long *)0x0;
              lStack_608 = 0;
              lStack_618 = *(long *)(lStack_2d0 + 8);
              plVar38 = *(long **)(lStack_2d0 + 0x10);
              if (plVar38 != (long *)0x0) {
                LOCK();
                plVar38[1] = plVar38[1] + 1;
                UNLOCK();
                plStack_610 = plVar38;
              }
              if (lStack_618 != 0) {
                lStack_608 = lStack_2d0;
              }
              func_0x09b49860(auStack_100,lStack_598,uStack_2e8,&lStack_618);
              plVar38 = plStack_610;
              lStack_618 = 0;
              plStack_610 = (long *)0x0;
              lStack_308 = lVar44;
              if (plVar38 == (long *)0x0) {
                lStack_608 = 0;
              }
              else {
                LOCK();
                plVar35 = plVar38 + 1;
                lVar44 = *plVar35;
                *plVar35 = *plVar35 + -1;
                UNLOCK();
                if (lVar44 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                  func_0x0412c2d0(plVar38);
                  plVar38 = plStack_610;
                  lStack_608 = 0;
                  if (plStack_610 != (long *)0x0) {
                    lStack_608 = 0;
                    LOCK();
                    plVar35 = plStack_610 + 1;
                    lVar44 = *plVar35;
                    *plVar35 = *plVar35 + -1;
                    UNLOCK();
                    if (lVar44 == 0) {
                      (**(code **)(*plStack_610 + 0x10))(plStack_610);
                      func_0x0412c2d0(plVar38);
                    }
                  }
                }
                else {
                  lStack_608 = 0;
                }
              }
              plVar38 = _DAT_0f76ded8;
              plStack_8f0 = (long *)uStack_2d8;
              uStack_4a8._0_4_ = 0;
              uStack_4a8._4_4_ = 0;
              bStack_4a0 = 0;
              uStack_49f = 0;
              uStack_499 = 0;
              pplStack_498 = (long **)0x0;
              uStack_488 = 0;
              uStack_480 = 0;
              plStack_478 = (long *)0x0;
              uStack_470 = 0;
              uStack_468 = 0;
              uStack_460 = 0;
              pplStack_458 = (long **)0x0;
              uStack_450 = 0;
              lStack_448 = 0;
              uStack_440 = 0;
              uStack_438 = 0;
              uStack_430 = 0;
              plStack_428 = (long *)0x0;
              uStack_420 = 0;
              puStack_490 = &uStack_488;
              uStack_418 = 0;
              uStack_410 = 0;
              uStack_408 = 0;
              puStack_400 = &uStack_3f8;
              uStack_3f8 = 0;
              uStack_3f0 = 0;
              uStack_3c8 = 0;
              uStack_398 = 0;
              uStack_388 = 0x10034001a0001;
              puStack_380 = puStack_600;
              puStack_378 = puStack_600;
              uStack_340 = 0;
              uStack_338 = 0;
              uStack_350 = 0;
              uStack_348 = 0;
              uStack_360 = 0;
              uStack_358 = 0;
              uStack_370 = 0;
              uStack_368 = 0;
              uStack_330 = 0;
              plStack_5e0 = _DAT_0f76ded8;
              lStack_300 = lStack_2e0;
              uVar56 = _DAT_0f76dee0;
              if ((_DAT_0f76dee0 & 0x80000000000000) != 0) {
                uVar56 = _DAT_0f76dee0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar56 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar56,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar56 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_5d0 = 0;
              uVar53 = _DAT_0f76dee8;
              uStack_5d8 = uVar56;
              if ((_DAT_0f76dee8 & 0x80000000000000) != 0) {
                uVar53 = _DAT_0f76dee8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_788 = _DAT_0f76ded8;
              uStack_780 = 0;
              uVar52 = _DAT_0f76dee0;
              uStack_5d0 = uVar53;
              if ((_DAT_0f76dee0 & 0x80000000000000) != 0) {
                uVar52 = _DAT_0f76dee0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_778 = 0;
              uVar41 = _DAT_0f76dee8;
              uStack_780 = uVar52;
              if ((_DAT_0f76dee8 & 0x80000000000000) != 0) {
                uVar52 = _DAT_0f76dee8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar41 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_7c0 = _DAT_0f74c4a8;
              plStack_7b8 = (long *)0x0;
              plVar35 = _DAT_0f74c4b0;
              uStack_778 = uVar41;
              if (((ulong)_DAT_0f74c4b0 & 0x80000000000000) != 0) {
                uVar52 = (ulong)_DAT_0f74c4b0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                plVar35 = (long *)((ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_7b0 = 0;
              uVar52 = _DAT_0f74c4b8;
              plStack_7b8 = plVar35;
              if ((_DAT_0f74c4b8 & 0x80000000000000) != 0) {
                uVar52 = _DAT_0f74c4b8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_7b0 = uVar52;
              if (((uStack_788._7_1_ | uStack_7c0._7_1_) & 1) == 0) {
                if ((uStack_780 & 0x80000000000000) == 0) {
                  uVar52 = (ulong)((ushort)(uStack_780 >> 0x30) & 0x7f);
                }
                else {
                  uVar52 = *(ulong *)((uStack_780 & 0xff00ffffffffffff) - 8);
                }
                if (((ulong)plStack_7b8 & 0x80000000000000) == 0) {
                  uVar41 = (ulong)((ushort)((ulong)plStack_7b8 >> 0x30) & 0x7f);
                }
                else {
                  uVar41 = *(ulong *)(((ulong)plStack_7b8 & 0xff00ffffffffffff) - 8);
                }
                uVar34 = 3;
                if (uVar52 == uVar41) {
                  uVar34 = 3;
                  auVar102._8_8_ = 0;
                  auVar102._0_8_ = uStack_788;
                  auVar63._0_2_ = -(ushort)((short)uStack_7c0 == (short)uStack_788);
                  auVar63._2_2_ =
                       -(ushort)((short)((ulong)uStack_7c0 >> 0x10) ==
                                (short)((ulong)uStack_788 >> 0x10));
                  sVar61 = (short)((ulong)uStack_788 >> 0x20);
                  sVar72 = (short)((ulong)uStack_7c0 >> 0x20);
                  auVar63._4_2_ = -(ushort)(sVar72 == sVar61);
                  auVar63._6_2_ =
                       -(ushort)((short)((ulong)uStack_7c0 >> 0x30) ==
                                (short)((ulong)uStack_788 >> 0x30));
                  auVar63._8_2_ = 0xffff;
                  auVar63._10_2_ = 0xffff;
                  auVar63._12_2_ = 0xffff;
                  auVar63._14_2_ = 0xffff;
                  auVar102 = pshuflw(auVar102,auVar63,0x50);
                  auVar60._0_4_ = auVar102._0_4_;
                  auVar60._4_4_ = auVar60._0_4_;
                  auVar60._8_4_ = auVar102._4_4_;
                  auVar60._12_4_ = auVar102._4_4_;
                  uVar32 = movmskpd((int)uVar41,auVar60);
                  if ((((uVar32 & 1) != 0) && ((byte)((byte)uVar32 >> 1) != 0)) &&
                     (sVar61 == sVar72)) {
                    iVar33 = func_0x0eee3000(uStack_780 & 0xff00ffffffffffff,
                                             (ulong)plStack_7b8 & 0xff00ffffffffffff,uVar52,3);
                    uVar34 = 3;
                    if (iVar33 == 0) goto LAB_0b09078a;
                  }
                }
              }
              else {
                uVar34 = 3;
                if ((uStack_788._7_1_ & uStack_7c0._7_1_) == 1) {
LAB_0b09078a:
                  uVar34 = 1;
                }
              }
              func_0x0d6b3300(&uStack_978,&uStack_788,&uStack_7c0,uVar34);
              plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
              if (plVar35 == (long *)0x0) {
                func_0x0eec74c0(0x80,0);
              }
              plStack_990 = plVar38;
              if ((uVar56 & 0x80000000000000) != 0) {
                lVar55 = *(long *)((uVar56 & 0xff00ffffffffffff) - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar56 & 0xff00ffffffffffff,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar56 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_980 = 0;
              plStack_988 = (long *)uVar56;
              if ((uVar53 & 0x80000000000000) != 0) {
                lVar55 = *(long *)((uVar53 & 0xff00ffffffffffff) - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar53 & 0xff00ffffffffffff,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              plStack_8f8 = (long *)CONCAT44(uStack_978._4_4_,(undefined4)uStack_978);
              plStack_870 = (long *)0x0;
              uVar52 = uStack_970;
              uStack_980 = uVar53;
              plStack_878 = plStack_8f8;
              if ((uStack_970 & 0x80000000000000) != 0) {
                uVar52 = uStack_970 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_868 = 0;
              uVar41 = uStack_968;
              plStack_918 = (long *)uVar52;
              plStack_870 = (long *)uVar52;
              if ((uStack_968 & 0x80000000000000) != 0) {
                uVar52 = uStack_968 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar41 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              plVar36 = plStack_918;
              pppppppuStack_860 = pppppppuStack_960;
              uStack_858 = (long **)0x0;
              pppppppuStack_7a8 = pppppppuStack_960;
              uVar52 = auStack_958._0_8_;
              uStack_868 = uVar41;
              if ((auStack_958._0_8_ & 0x80000000000000) != 0) {
                uVar52 = auStack_958._0_8_ & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_850 = 0;
              uVar57 = auStack_958._8_8_;
              if ((auStack_958._8_8_ & 0x80000000000000) != 0) {
                uVar57 = auStack_958._8_8_ & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar57 - 8);
                lVar44 = lVar55 + 9;
                uStack_858 = (long **)uVar52;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar57,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar57 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                plVar36 = plStack_918;
              }
              uStack_848 = CONCAT62(uStack_848._2_6_,(undefined2)uStack_948);
              auStack_8c8 = (undefined1  [8])plVar38;
              plStack_988 = (long *)0x0;
              uStack_980 = 0;
              auStack_8c0._8_8_ = uVar53;
              auStack_8c0._0_8_ = uVar56;
              plStack_728 = plStack_8f8;
              plStack_870 = (long *)0x0;
              uStack_868 = 0;
              auStack_720._8_8_ = uVar41;
              auStack_720._0_8_ = plVar36;
              auStack_710._8_8_ = uVar52;
              auStack_710._0_8_ = pppppppuStack_7a8;
              uStack_858 = (long **)0x0;
              uStack_850 = 0;
              auStack_700._8_2_ = (undefined2)uStack_948;
              auStack_700._0_8_ = uVar57;
              func_0x0d6a8a30(plVar35,plStack_8f0,auStack_8c8,&plStack_728);
              if ((auStack_700._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_700._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar16._8_8_ = 0;
              auVar16._0_8_ = auStack_700._8_8_;
              auStack_700 = auVar16 << 0x40;
              if ((auStack_710._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_710._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_710._8_8_ = 0;
              if ((auStack_720._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_720._8_8_ = 0;
              if ((auStack_720._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar17._8_8_ = 0;
              auVar17._0_8_ = auStack_720._8_8_;
              auStack_720 = auVar17 << 0x40;
              if ((auStack_8c0._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_8c0._8_8_ = 0;
              if ((auStack_8c0._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._0_8_ & 0xff00ffffffffffff) - 8);
              }
              *plVar35 = (long)&UNK_0f2994f0;
              plVar35[0xe] = (long)auStack_b0;
              *(undefined2 *)(plVar35 + 0xf) = 0xfbf8;
              *(undefined1 *)((long)plVar35 + 0x7a) = 1;
              plStack_8e8 = plVar35;
              if ((auStack_958._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_958._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_958._8_8_ = 0;
              if ((auStack_958._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_958._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar18._8_8_ = 0;
              auVar18._0_8_ = auStack_958._8_8_;
              auStack_958 = auVar18 << 0x40;
              if ((uStack_968 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_968 & 0xff00ffffffffffff) - 8);
              }
              uStack_968 = 0;
              if ((uStack_970 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_970 & 0xff00ffffffffffff) - 8);
              }
              if (plStack_8e8 != (long *)0x0) {
                plVar38 = (long *)CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8);
                plVar35 = (long *)CONCAT17(uStack_499,CONCAT61(uStack_49f,bStack_4a0));
                while ((plVar38 != plVar35 &&
                       (cVar31 = func_0x04fa7a10(*plVar38 + 0x20,plStack_8e8 + 7), cVar31 != '\0')))
                {
                  plVar38 = plVar38 + 1;
                }
                func_0x0d6af860(&uStack_4a8,plVar38,&plStack_8e8);
                plVar38 = plStack_8e8;
                plStack_8e8 = (long *)0x0;
                if (plVar38 != (long *)0x0) {
                  (**(code **)(*plVar38 + 8))();
                }
              }
              if ((uStack_7b0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_7b0 & 0xff00ffffffffffff) - 8);
              }
              uStack_7b0 = 0;
              if (((ulong)plStack_7b8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)plStack_7b8 & 0xff00ffffffffffff) - 8);
              }
              plStack_7b8 = (long *)0x0;
              if ((uStack_778 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_778 & 0xff00ffffffffffff) - 8);
              }
              uStack_778 = 0;
              if ((uStack_780 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_780 & 0xff00ffffffffffff) - 8);
              }
              uStack_780 = 0;
              if ((uStack_5d0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_5d0 & 0xff00ffffffffffff) - 8);
              }
              uStack_5d0 = 0;
              if ((uStack_5d8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_5d8 & 0xff00ffffffffffff) - 8);
              }
              plVar38 = _DAT_0f74c4a8;
              uStack_5d8 = 0;
              plStack_5f8 = _DAT_0f74c4a8;
              plVar35 = _DAT_0f74c4b0;
              if (((ulong)_DAT_0f74c4b0 & 0x80000000000000) != 0) {
                uVar56 = (ulong)_DAT_0f74c4b0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar56 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar56,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                plVar35 = (long *)((ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_5e8 = 0;
              uVar56 = _DAT_0f74c4b8;
              plStack_5f0 = plVar35;
              if ((_DAT_0f74c4b8 & 0x80000000000000) != 0) {
                uVar56 = _DAT_0f74c4b8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar56 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar56,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar56 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_7a0 = _DAT_0f74c4a8;
              plStack_798 = (long *)0x0;
              plVar36 = _DAT_0f74c4b0;
              uStack_5e8 = uVar56;
              if (((ulong)_DAT_0f74c4b0 & 0x80000000000000) != 0) {
                uVar53 = (ulong)_DAT_0f74c4b0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                plVar36 = (long *)((ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_790 = 0;
              uVar53 = _DAT_0f74c4b8;
              plStack_798 = plVar36;
              if ((_DAT_0f74c4b8 & 0x80000000000000) != 0) {
                uVar53 = _DAT_0f74c4b8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_5c8 = 0x10034001a0001;
              puStack_5c0 = puStack_600;
              puStack_5b8 = puStack_600;
              cVar31 = '\x03';
              if (uStack_7a0._7_1_ == '\0') {
                if (((ulong)plStack_798 & 0x80000000000000) == 0) {
                  uVar52 = (ulong)((ushort)((ulong)plStack_798 >> 0x30) & 0x7f);
                }
                else {
                  uVar52 = *(ulong *)(((ulong)plStack_798 & 0xff00ffffffffffff) - 8);
                }
                cVar31 = (uVar52 != 0) * '\x02' + '\x01';
                if (uStack_7a0._4_2_ != 0x34 || (uStack_7a0._2_2_ != 0x1a || (short)uStack_7a0 != 1)
                   ) {
                  cVar31 = '\x03';
                }
              }
              uStack_790 = uVar53;
              func_0x0d6b3300(&uStack_978,&uStack_7a0,&uStack_5c8,cVar31);
              plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
              if (plVar36 == (long *)0x0) {
                func_0x0eec74c0(0x80,0);
              }
              plStack_990 = plVar38;
              if (((ulong)plVar35 & 0x80000000000000) != 0) {
                lVar55 = *(long *)(((ulong)plVar35 & 0xff00ffffffffffff) - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,(ulong)plVar35 & 0xff00ffffffffffff,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                plVar35 = (long *)((ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_980 = 0;
              plStack_988 = plVar35;
              if ((uVar56 & 0x80000000000000) != 0) {
                lVar55 = *(long *)((uVar56 & 0xff00ffffffffffff) - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar56 & 0xff00ffffffffffff,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar56 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              plStack_918 = (long *)CONCAT44(uStack_978._4_4_,(undefined4)uStack_978);
              plStack_870 = (long *)0x0;
              uVar53 = uStack_970;
              uStack_980 = uVar56;
              plStack_878 = plStack_918;
              if ((uStack_970 & 0x80000000000000) != 0) {
                uVar53 = uStack_970 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_868 = 0;
              uVar52 = uStack_968;
              plStack_8f8 = (long *)uVar53;
              plStack_870 = (long *)uVar53;
              if ((uStack_968 & 0x80000000000000) != 0) {
                uVar53 = uStack_968 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              pppppppuStack_860 = pppppppuStack_960;
              uStack_858 = (long **)0x0;
              pppppppuStack_7a8 = pppppppuStack_960;
              uVar53 = auStack_958._0_8_;
              uStack_868 = uVar52;
              if ((auStack_958._0_8_ & 0x80000000000000) != 0) {
                uVar53 = auStack_958._0_8_ & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_850 = 0;
              uVar41 = auStack_958._8_8_;
              if ((auStack_958._8_8_ & 0x80000000000000) != 0) {
                uVar41 = auStack_958._8_8_ & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar41 - 8);
                lVar44 = lVar55 + 9;
                uStack_858 = (long **)uVar53;
                plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar37 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar37 = lVar55;
                func_0x0eee2f00(plVar37 + 1,uVar41,lVar55);
                *(undefined1 *)((long)plVar37 + lVar55 + 8) = 0;
                uVar41 = (ulong)(plVar37 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_848 = CONCAT62(uStack_848._2_6_,(undefined2)uStack_948);
              auStack_8c8 = (undefined1  [8])plVar38;
              plStack_988 = (long *)0x0;
              uStack_980 = 0;
              auStack_8c0._8_8_ = uVar56;
              auStack_8c0._0_8_ = plVar35;
              plStack_728 = plStack_918;
              plStack_870 = (long *)0x0;
              uStack_868 = 0;
              auStack_720._8_8_ = uVar52;
              auStack_720._0_8_ = plStack_8f8;
              auStack_710._8_8_ = uVar53;
              auStack_710._0_8_ = pppppppuStack_7a8;
              uStack_858 = (long **)0x0;
              uStack_850 = 0;
              auStack_700._8_2_ = (undefined2)uStack_948;
              auStack_700._0_8_ = uVar41;
              func_0x0d6a8a30(plVar36,plStack_8f0,auStack_8c8,&plStack_728);
              if ((auStack_700._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_700._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar19._8_8_ = 0;
              auVar19._0_8_ = auStack_700._8_8_;
              auStack_700 = auVar19 << 0x40;
              if ((auStack_710._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_710._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_710._8_8_ = 0;
              if ((auStack_720._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_720._8_8_ = 0;
              if ((auStack_720._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar20._8_8_ = 0;
              auVar20._0_8_ = auStack_720._8_8_;
              auStack_720 = auVar20 << 0x40;
              if ((auStack_8c0._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_8c0._8_8_ = 0;
              if ((auStack_8c0._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._0_8_ & 0xff00ffffffffffff) - 8);
              }
              *plVar36 = (long)&UNK_0f299638;
              plVar36[0xe] = (long)auStack_b0;
              *(undefined2 *)(plVar36 + 0xf) = 0xfbf8;
              *(undefined1 *)((long)plVar36 + 0x7a) = 1;
              plStack_990 = plVar36;
              if ((auStack_958._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_958._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_958._8_8_ = 0;
              if ((auStack_958._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_958._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar21._8_8_ = 0;
              auVar21._0_8_ = auStack_958._8_8_;
              auStack_958 = auVar21 << 0x40;
              if ((uStack_968 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_968 & 0xff00ffffffffffff) - 8);
              }
              uStack_968 = 0;
              if ((uStack_970 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_970 & 0xff00ffffffffffff) - 8);
              }
              if (plStack_990 != (long *)0x0) {
                plVar38 = (long *)CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8);
                plVar35 = (long *)CONCAT17(uStack_499,CONCAT61(uStack_49f,bStack_4a0));
                while ((plVar38 != plVar35 &&
                       (cVar31 = func_0x04fa7a10(*plVar38 + 0x20,plStack_990 + 7), cVar31 != '\0')))
                {
                  plVar38 = plVar38 + 1;
                }
                func_0x0d6af860(&uStack_4a8,plVar38,&plStack_990);
                plVar38 = plStack_990;
                plStack_990 = (long *)0x0;
                if (plVar38 != (long *)0x0) {
                  (**(code **)(*plVar38 + 8))();
                }
              }
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
              if ((uStack_790 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_790 & 0xff00ffffffffffff) - 8);
              }
              uStack_790 = 0;
              if (((ulong)plStack_798 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)plStack_798 & 0xff00ffffffffffff) - 8);
              }
              plStack_798 = (long *)0x0;
              if ((uStack_5e8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_5e8 & 0xff00ffffffffffff) - 8);
              }
              uStack_5e8 = 0;
              if (((ulong)plStack_5f0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)plStack_5f0 & 0xff00ffffffffffff) - 8);
              }
              plVar38 = _DAT_0f76ded8;
              plStack_5f0 = (long *)0x0;
              plStack_910 = _DAT_0f76ded8;
              uVar56 = _DAT_0f76dee0;
              if ((_DAT_0f76dee0 & 0x80000000000000) != 0) {
                uVar56 = _DAT_0f76dee0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar56 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar56,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar56 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_900 = 0;
              uVar53 = _DAT_0f76dee8;
              uStack_908 = uVar56;
              if ((_DAT_0f76dee8 & 0x80000000000000) != 0) {
                uVar53 = _DAT_0f76dee8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar53 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar53,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                uVar53 = (ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              plStack_8f0 = _DAT_0f74c4a8;
              plStack_8e0 = _DAT_0f74c4a8;
              plVar35 = _DAT_0f74c4b0;
              uStack_900 = uVar53;
              if (((ulong)_DAT_0f74c4b0 & 0x80000000000000) != 0) {
                uVar52 = (ulong)_DAT_0f74c4b0 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar35 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar35 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar35 = lVar55;
                func_0x0eee2f00(plVar35 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar35 + lVar55 + 8) = 0;
                plVar35 = (long *)((ulong)(plVar35 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_8d0 = 0;
              uVar52 = _DAT_0f74c4b8;
              plStack_8d8 = plVar35;
              if ((_DAT_0f74c4b8 & 0x80000000000000) != 0) {
                uVar52 = _DAT_0f74c4b8 & 0xff00ffffffffffff;
                lVar55 = *(long *)(uVar52 - 8);
                lVar44 = lVar55 + 9;
                plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar36 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar36 = lVar55;
                func_0x0eee2f00(plVar36 + 1,uVar52,lVar55);
                *(undefined1 *)((long)plVar36 + lVar55 + 8) = 0;
                uVar52 = (ulong)(plVar36 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              uStack_8d0 = uVar52;
              plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
              if (plVar36 == (long *)0x0) {
                func_0x0eec74c0(0x48,0);
              }
              auVar22._8_8_ = 0;
              auVar22._0_8_ = auStack_720._8_8_;
              auStack_720 = auVar22 << 0x40;
              uVar57 = uVar56 & 0xff00ffffffffffff;
              uVar41 = uVar56;
              plStack_728 = plVar38;
              if ((uVar56 & 0x80000000000000) != 0) {
                lVar55 = *(long *)(uVar57 - 8);
                lVar44 = lVar55 + 9;
                plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar38 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar38 = lVar55;
                func_0x0eee2f00(plVar38 + 1,uVar57,lVar55);
                *(undefined1 *)((long)plVar38 + lVar55 + 8) = 0;
                uVar41 = (ulong)(plVar38 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              auStack_720._8_8_ = 0;
              auStack_720._0_8_ = uVar41;
              uVar45 = uVar53 & 0xff00ffffffffffff;
              uVar54 = uVar53;
              if ((uVar53 & 0x80000000000000) != 0) {
                lVar55 = *(long *)(uVar45 - 8);
                lVar44 = lVar55 + 9;
                plStack_918 = plVar35;
                plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar38 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar38 = lVar55;
                func_0x0eee2f00(plVar38 + 1,uVar45,lVar55);
                *(undefined1 *)((long)plVar38 + lVar55 + 8) = 0;
                uVar54 = (ulong)(plVar38 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                plVar35 = plStack_918;
                uVar41 = auStack_720._0_8_;
              }
              auStack_720._0_8_ = uVar41;
              auStack_720._8_8_ = uVar54;
              plStack_878 = plStack_8f0;
              plStack_870 = (long *)0x0;
              plStack_8f0 = (long *)((ulong)plVar35 & 0xff00ffffffffffff);
              plVar38 = plVar35;
              plStack_8f8 = (long *)uVar45;
              if (((ulong)plVar35 & 0x80000000000000) != 0) {
                lVar55 = *(long *)((long)plStack_8f0 - 8);
                lVar44 = lVar55 + 9;
                plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar38 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar38 = lVar55;
                func_0x0eee2f00(plVar38 + 1,plStack_8f0,lVar55);
                *(undefined1 *)((long)plVar38 + lVar55 + 8) = 0;
                plVar38 = (long *)((ulong)(plVar38 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              uStack_868 = 0;
              uVar54 = uVar52 & 0xff00ffffffffffff;
              uVar41 = uVar52;
              plStack_870 = plVar38;
              if ((uVar52 & 0x80000000000000) != 0) {
                lVar55 = *(long *)(uVar54 - 8);
                lVar44 = lVar55 + 9;
                plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar44,8);
                if (lVar44 != 0 && plVar38 == (long *)0x0) {
                  func_0x0eec74c0(lVar44,8);
                }
                *plVar38 = lVar55;
                func_0x0eee2f00(plVar38 + 1,uVar54,lVar55);
                *(undefined1 *)((long)plVar38 + lVar55 + 8) = 0;
                uVar41 = (ulong)(plVar38 + 1) & 0xff00ffffffffffff | 0x80000000000000;
              }
              puVar39 = auStack_8c8 + 1;
              plStack_918 = (long *)uVar54;
              uStack_868 = uVar41;
              func_0x0d6b23d0(plVar36,&plStack_728,&plStack_878);
              lVar44 = lStack_300;
              *plVar36 = (long)&UNK_0f2996f0;
              plVar36[7] = (long)&UNK_0b08b090;
              plVar36[8] = lStack_300;
              if ((uStack_868 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_868 & 0xff00ffffffffffff) - 8);
              }
              uStack_868 = 0;
              if (((ulong)plStack_870 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)plStack_870 & 0xff00ffffffffffff) - 8);
              }
              plStack_870 = (long *)0x0;
              if ((auStack_720._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_720._8_8_ = 0;
              if ((auStack_720._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._0_8_ & 0xff00ffffffffffff) - 8);
              }
              plStack_770 = plVar36;
              func_0x0d6afb30(&uStack_4a8,&plStack_770);
              plVar38 = plStack_770;
              plStack_770 = (long *)0x0;
              if (plVar38 != (long *)0x0) {
                (**(code **)(*plVar38 + 8))();
              }
              if ((uVar52 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_918 - 8);
              }
              uStack_8d0 = 0;
              if (((ulong)plVar35 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_8f0 - 8);
              }
              plStack_8d8 = (long *)0x0;
              if ((uVar53 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(long)plStack_8f8 - 8);
              }
              uStack_900 = 0;
              if ((uVar56 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar57 - 8);
              }
              pplVar30 = pplStack_458;
              uStack_908 = 0;
              plVar38 = (long *)&UNK_0f299730;
              plStack_878 = (long *)&UNK_0f299730;
              plStack_870 = (long *)lVar44;
              uStack_858 = &plStack_878;
              pplStack_458 = (long **)0x0;
              if (pplVar30 == &plStack_478) {
                lVar44 = 0x20;
LAB_0b092565:
                (**(code **)((long)*pplVar30 + lVar44))(pplVar30);
                if (uStack_858 == (long **)0x0) {
                  pplStack_458 = (long **)0x0;
                }
                else {
                  if (uStack_858 == &plStack_878) {
                    plVar38 = *uStack_858;
                    goto LAB_0b0925af;
                  }
                  pplStack_458 = uStack_858;
                  uStack_858 = (long **)0x0;
                }
              }
              else {
                lVar44 = 0x28;
                if (pplVar30 != (long **)0x0) goto LAB_0b092565;
LAB_0b0925af:
                pplStack_458 = &plStack_478;
                (*(code *)plVar38[3])();
                if (uStack_858 == &plStack_878) {
                  lVar44 = 0x20;
                }
                else {
                  lVar44 = 0x28;
                  if (uStack_858 == (long **)0x0) goto LAB_0b0925ee;
                }
                (**(code **)((long)*uStack_858 + lVar44))();
              }
LAB_0b0925ee:
              auStack_8c8 = (undefined1  [8])0x1000000080001;
              uStack_2f0 = 0;
              auStack_8c0._8_8_ = puStack_600;
              auStack_8c0._0_8_ = puStack_600;
              uStack_2f8 = 0;
              func_0x0b08e440(&plStack_728,&uStack_418,auStack_8c8,&UNK_0b08e810);
              auVar23._8_8_ = 0;
              auVar23._0_8_ = auStack_958._8_8_;
              auStack_958 = auVar23 << 0x40;
              func_0x0b08f4c0(&plStack_728,&uStack_978);
              if ((undefined8 *)auStack_958._0_8_ == &uStack_978) {
                lVar44 = 0x20;
LAB_0b0926d5:
                (**(code **)(*(long *)auStack_958._0_8_ + lVar44))();
                if (plStack_6a8 != (long *)(auStack_6d0 + 8)) goto LAB_0b09269f;
LAB_0b0926f0:
                lVar44 = 0x20;
LAB_0b0926f5:
                (**(code **)(*plStack_6a8 + lVar44))();
              }
              else {
                lVar44 = 0x28;
                if ((long *)auStack_958._0_8_ != (long *)0x0) goto LAB_0b0926d5;
                if (plStack_6a8 == (long *)(auStack_6d0 + 8)) goto LAB_0b0926f0;
LAB_0b09269f:
                lVar44 = 0x28;
                if (plStack_6a8 != (long *)0x0) goto LAB_0b0926f5;
              }
              if ((auStack_6e0._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_6e0._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_6e0._8_8_ = 0;
              if ((auStack_6e0._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_6e0._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar24._8_8_ = 0;
              auVar24._0_8_ = auStack_6e0._8_8_;
              auStack_6e0 = auVar24 << 0x40;
              uVar34 = auStack_710._0_8_;
              auStack_720._8_8_ = 0;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = auStack_710._8_8_;
              auStack_710 = auVar25 << 0x40;
              if ((long *)uVar34 == (long *)0x0) {
                auStack_710 = ZEXT816(0);
              }
              else {
                LOCK();
                plVar38 = (long *)(uVar34 + 8);
                lVar44 = *plVar38;
                *plVar38 = *plVar38 + -1;
                UNLOCK();
                if (lVar44 == 0) {
                  (**(code **)(*(long *)uVar34 + 0x10))(uVar34);
                  func_0x0412c2d0(uVar34);
                  uVar34 = auStack_710._0_8_;
                  auStack_710._8_8_ = 0;
                  if ((long *)auStack_710._0_8_ != (long *)0x0) {
                    LOCK();
                    plVar38 = (long *)(auStack_710._0_8_ + 8);
                    lVar44 = *plVar38;
                    *plVar38 = *plVar38 + -1;
                    UNLOCK();
                    if (lVar44 == 0) {
                      (**(code **)(*(long *)auStack_710._0_8_ + 0x10))(auStack_710._0_8_);
                      func_0x0412c2d0(uVar34);
                      goto joined_r0x0b092fcc;
                    }
                  }
                }
                else {
                  auStack_710 = ZEXT816(0);
                }
              }
joined_r0x0b092fcc:
              if ((auStack_8c0._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_8c0._8_8_ = 0;
              if ((auStack_8c0._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_8c0._0_8_ & 0xff00ffffffffffff) - 8);
              }
              uStack_868 = uStack_738;
              uStack_978._0_4_ = 0;
              uStack_978._4_4_ = 0;
              uStack_970 = 0;
              uStack_968 = 0;
              plStack_878 = (long *)auStack_748._0_8_;
              plStack_870 = (long *)auStack_748._8_8_;
              auStack_748 = (undefined1  [16])0x0;
              uStack_738 = 0;
              plStack_728 = (long *)&UNK_0f47d3f0;
              uStack_678 = 0;
              auStack_6d0 = (undefined1  [16])0x0;
              auStack_6e0 = (undefined1  [16])0x0;
              auStack_6f0 = (undefined1  [16])0x0;
              auStack_700 = (undefined1  [16])0x0;
              auStack_710 = (undefined1  [16])0x0;
              auStack_720 = (undefined1  [16])0x0;
              auStack_640 = (undefined1  [16])0x0;
              auStack_650 = (undefined1  [16])0x0;
              auStack_660 = (undefined1  [16])0x0;
              auStack_670 = (undefined1  [16])0x0;
              lStack_630 = 0;
              uStack_628 = 0xfefffffc;
              uStack_624 = 0;
              func_0x0d687070(&plStack_728,&UNK_0136adc9,0x15,&uStack_978,&plStack_878);
              if (((ulong)plStack_878 & 1) != 0) {
                func_0x0412a280(uStack_868,(ulong)plStack_878 & 0xfffffffffffffffe);
              }
              if ((uStack_968 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_968 & 0xff00ffffffffffff) - 8);
              }
              uStack_968 = 0;
              if ((uStack_970 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_970 & 0xff00ffffffffffff) - 8);
              }
              uStack_978._0_4_ = 0;
              uStack_978._4_4_ = 0;
              uStack_970 = 0;
              uStack_968 = 0;
              func_0x0b2acb70(&plStack_878,&uStack_418,&plStack_728,&uStack_978,1);
              if ((uStack_968 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_968 & 0xff00ffffffffffff) - 8);
              }
              uStack_968 = 0;
              if ((uStack_970 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_970 & 0xff00ffffffffffff) - 8);
              }
              auStack_8c8 = (undefined1  [8])0xffffffff;
              auStack_890 = (undefined1  [16])0x0;
              auStack_8a0 = (undefined1  [16])0x0;
              auStack_8b0 = (undefined1  [16])0x0;
              auStack_8c0 = (undefined1  [16])0x0;
              uStack_880 = 0;
              uStack_978._0_4_ = 0xffffffff;
              uStack_970 = 0;
              uStack_968 = 0;
              pppppppuStack_960 = (undefined8 *******)0x0;
              func_0x0ca32940(&uStack_970,0,0,0);
              auStack_958 = (undefined1  [16])0x0;
              uStack_948 = 0;
              func_0x0ca32b80(auStack_958,0,0,0);
              auStack_940 = (undefined1  [16])0x0;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = auStack_930._8_8_;
              auStack_930 = auVar26 << 0x40;
              func_0x0ca32dc0(auStack_940,0,0,0);
              func_0x0d5ceda0(auStack_818,0xd,&uStack_978);
              uVar34 = auStack_940._0_8_;
              if (auStack_940._0_8_ != 0) {
                for (lVar44 = auStack_940._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x20) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                auStack_940._8_8_ = uVar34;
                func_0x0412a280(auStack_940._0_8_,auStack_930._0_8_ - auStack_940._0_8_);
              }
              uVar34 = auStack_958._0_8_;
              if (auStack_958._0_8_ != 0) {
                for (lVar44 = auStack_958._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x20) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                auStack_958._8_8_ = uVar34;
                func_0x0412a280(auStack_958._0_8_,uStack_948 - auStack_958._0_8_);
              }
              uVar53 = uStack_970;
              uVar56 = uStack_968;
              if (uStack_970 != 0) {
                for (; uVar53 != uVar56; uVar56 = uVar56 - 0x20) {
                  if ((*(byte *)(uVar56 - 0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(uVar56 - 8),
                                    *(ulong *)(uVar56 - 0x18) & 0xfffffffffffffffe);
                  }
                }
                uStack_968 = uVar53;
                func_0x0412a280(uStack_970,(long)pppppppuStack_960 - uStack_970);
              }
              if (((~uStack_858._6_1_ | bStack_7cc) & 1) != 0) {
                func_0x056b3490(1,3,0xd,&UNK_014a2009);
              }
              pppppppuVar47 = apppppppuStack_840[0];
              uVar56 = uStack_848;
              if (((uStack_858._6_1_ & 1) == 0) || ((bStack_7cc & 1) != 0)) {
                uStack_548 = uStack_868;
                pppppppuStack_540 = pppppppuStack_860;
                plStack_558 = plStack_878;
                uStack_550 = plStack_870;
                pplStack_538 = uStack_858;
                uStack_530 = uStack_850;
                uStack_850 = 0;
                uStack_848 = 0;
                uStack_528 = uVar56;
                apppppppuStack_520[0] = (undefined8 *******)0x0;
                pcStack_510 = pcStack_830;
                pcStack_508 = pcStack_828;
                iStack_500 = iStack_820;
                cStack_4fc = cStack_81c;
                if (cStack_81c != '\0') {
                  if (cStack_81c == '\x02') {
                    (*pcStack_830)(5,apppppppuStack_840,apppppppuStack_520);
                  }
                  else {
                    apppppppuStack_840[0] = (undefined8 *******)0x0;
                    apppppppuStack_520[0] = pppppppuVar47;
                  }
                }
                lStack_4f8 = auStack_818._0_8_;
                lStack_4f0 = auStack_818._8_8_;
                lStack_4e8 = lStack_808;
                auStack_818 = (undefined1  [16])0x0;
                lStack_808 = 0;
                lStack_4e0 = auStack_800._0_8_;
                lStack_4d8 = auStack_800._8_8_;
                lStack_4d0 = lStack_7f0;
                auStack_800 = (undefined1  [16])0x0;
                lStack_7f0 = 0;
                lStack_4c8 = auStack_7e8._0_8_;
                lStack_4c0 = auStack_7e8._8_8_;
                lStack_4b8 = lStack_7d8;
                auStack_7e8 = (undefined1  [16])0x0;
                lStack_7d8 = 0;
                bStack_4ac = bStack_7cc;
                uStack_4b0 = uStack_7d0;
              }
              else {
                pppppppuVar47 = apppppppuStack_840;
                if (cStack_81c != '\x02') {
                  pppppppuVar47 = apppppppuStack_840[0];
                }
                if (iStack_820 != -0x2f3c0021) {
                  pppppppuVar47 = (undefined8 *******)0x0;
                }
                func_0x0b0bd250(&uStack_978,pppppppuVar47);
                if ((uStack_948 & 1) == 0) {
                  uVar56 = uStack_948 >> 1 & 0x7f;
                }
                else {
                  uVar56 = auStack_940._0_8_;
                }
                if (uVar56 != 0) {
                  lVar44 = (long)&uStack_948 + 1;
                  if ((uStack_948 & 1) != 0) {
                    lVar44 = auStack_940._8_8_;
                  }
                  if (0xfffffffffffffff7 < uVar56) goto LAB_0b095092;
                  if (uVar56 < 0x17) {
                    auStack_8c8[0] = (char)uVar56 * '\x02';
                  }
                  else {
                    uVar53 = (uVar56 | 7) + 1;
                    if ((uVar56 | 7) == 0x17) {
                      uVar53 = 0x1a;
                    }
                    puVar39 = (undefined1 *)
                              (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar53);
                    if (puVar39 == (undefined1 *)0x0) {
                      func_0x0eec74c0(uVar53,0);
                    }
                    auStack_8c8 = (undefined1  [8])(uVar53 | 1);
                    auStack_8c0._8_8_ = puVar39;
                    auStack_8c0._0_8_ = uVar56;
                  }
                  plVar38 = (long *)(auStack_8c8 + 1);
                  func_0x0eee2f00(puVar39,lVar44,uVar56);
                  puVar39[uVar56] = 0;
                  bVar59 = ((ulong)auStack_8c8 & 1) == 0;
                  plVar35 = (long *)auStack_8c0._8_8_;
                  if (bVar59) {
                    plVar35 = plVar38;
                  }
                  uVar56 = (ulong)(auStack_8c8[0] >> 1);
                  if (!bVar59) {
                    uVar56 = auStack_8c0._0_8_;
                  }
                  if (uVar56 != 0) {
                    plVar36 = plVar35;
                    if (uVar56 < 8) {
LAB_0b0930cc:
                      do {
                        cVar31 = (char)*plVar36;
                        cVar65 = cVar31 + ' ';
                        if (0x19 < (byte)(cVar31 + 0xbfU)) {
                          cVar65 = cVar31;
                        }
                        *(char *)plVar36 = cVar65;
                        plVar36 = (long *)((long)plVar36 + 1);
                      } while (plVar36 != (long *)((long)plVar35 + uVar56));
                    }
                    else if (uVar56 < 0x20) {
                      uVar53 = 0;
LAB_0b093065:
                      uVar52 = uVar56 & 0xfffffffffffffff8;
                      plVar36 = (long *)((long)plVar35 + uVar52);
                      do {
                        uVar34 = *(undefined8 *)((long)plVar35 + uVar53);
                        bVar62 = (char)uVar34 + DAT_014e9110;
                        cVar65 = (char)((ulong)uVar34 >> 8);
                        bVar64 = cVar65 + UNK_014e9111;
                        cVar67 = (char)((ulong)uVar34 >> 0x10);
                        bVar66 = cVar67 + UNK_014e9112;
                        cVar69 = (char)((ulong)uVar34 >> 0x18);
                        bVar68 = cVar69 + UNK_014e9113;
                        cVar71 = (char)((ulong)uVar34 >> 0x20);
                        bVar70 = cVar71 + UNK_014e9114;
                        cVar74 = (char)((ulong)uVar34 >> 0x28);
                        bVar73 = cVar74 + UNK_014e9115;
                        cVar76 = (char)((ulong)uVar34 >> 0x30);
                        cVar31 = (char)((ulong)uVar34 >> 0x38);
                        bVar75 = cVar76 + UNK_014e9116;
                        bVar77 = cVar31 + UNK_014e9117;
                        *(ulong *)((long)plVar35 + uVar53) =
                             CONCAT17((~-((byte)((bVar77 < UNK_014e8cb7) * UNK_014e8cb7 |
                                                (bVar77 >= UNK_014e8cb7) * bVar77) == bVar77) &
                                      UNK_014ea367) + cVar31,
                                      CONCAT16((~-((byte)((bVar75 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                         (bVar75 >= UNK_014e8cb6) * bVar75) ==
                                                  bVar75) & UNK_014ea366) + cVar76,
                                               CONCAT15((~-((byte)((bVar73 < UNK_014e8cb5) *
                                                                   UNK_014e8cb5 |
                                                                  (bVar73 >= UNK_014e8cb5) * bVar73)
                                                           == bVar73) & UNK_014ea365) + cVar74,
                                                        CONCAT14((~-((byte)((bVar70 < UNK_014e8cb4)
                                                                            * UNK_014e8cb4 |
                                                                           (bVar70 >= UNK_014e8cb4)
                                                                           * bVar70) == bVar70) &
                                                                 UNK_014ea364) + cVar71,
                                                                 CONCAT13((~-((byte)((bVar68 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar68 >= UNK_014e8cb3) * bVar68) == bVar68) &
                                                  UNK_014ea363) + cVar69,
                                                  CONCAT12((~-((byte)((bVar66 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar66 >= UNK_014e8cb2) *
                                                                     bVar66) == bVar66) &
                                                           UNK_014ea362) + cVar67,
                                                           CONCAT11((~-((byte)((bVar64 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar64 >= UNK_014e8cb1) * bVar64) == bVar64) &
                                                  UNK_014ea361) + cVar65,
                                                  (~-((byte)((bVar62 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar62 >= DAT_014e8cb0) * bVar62) ==
                                                     bVar62) & DAT_014ea360) + (char)uVar34)))))));
                        uVar53 = uVar53 + 8;
                      } while (uVar52 != uVar53);
                      if (uVar56 != uVar52) goto LAB_0b0930cc;
                    }
                    else {
                      uVar53 = uVar56 & 0xffffffffffffffe0;
                      uVar52 = 0;
                      do {
                        auVar102 = *(undefined1 (*) [16])((long)plVar35 + uVar52);
                        pcVar1 = (char *)((long)plVar35 + uVar52 + 0x10);
                        cVar31 = *pcVar1;
                        cVar65 = pcVar1[1];
                        cVar67 = pcVar1[2];
                        cVar69 = pcVar1[3];
                        cVar71 = pcVar1[4];
                        cVar74 = pcVar1[5];
                        cVar76 = pcVar1[6];
                        cVar7 = pcVar1[7];
                        cVar8 = pcVar1[8];
                        cVar9 = pcVar1[9];
                        cVar10 = pcVar1[10];
                        cVar11 = pcVar1[0xb];
                        cVar12 = pcVar1[0xc];
                        cVar13 = pcVar1[0xd];
                        cVar14 = pcVar1[0xe];
                        cVar15 = pcVar1[0xf];
                        bVar62 = auVar102[0] + DAT_014e86b0;
                        bVar64 = auVar102[1] + UNK_014e86b1;
                        bVar66 = auVar102[2] + UNK_014e86b2;
                        bVar68 = auVar102[3] + UNK_014e86b3;
                        bVar70 = auVar102[4] + UNK_014e86b4;
                        bVar73 = auVar102[5] + UNK_014e86b5;
                        bVar75 = auVar102[6] + UNK_014e86b6;
                        bVar77 = auVar102[7] + UNK_014e86b7;
                        bVar78 = auVar102[8] + UNK_014e86b8;
                        bVar79 = auVar102[9] + UNK_014e86b9;
                        bVar80 = auVar102[10] + UNK_014e86ba;
                        bVar81 = auVar102[0xb] + UNK_014e86bb;
                        bVar82 = auVar102[0xc] + UNK_014e86bc;
                        bVar83 = auVar102[0xd] + UNK_014e86bd;
                        bVar84 = auVar102[0xe] + UNK_014e86be;
                        bVar85 = auVar102[0xf] + UNK_014e86bf;
                        bVar86 = cVar31 + DAT_014e86b0;
                        bVar87 = cVar65 + UNK_014e86b1;
                        bVar88 = cVar67 + UNK_014e86b2;
                        bVar89 = cVar69 + UNK_014e86b3;
                        bVar90 = cVar71 + UNK_014e86b4;
                        bVar91 = cVar74 + UNK_014e86b5;
                        bVar92 = cVar76 + UNK_014e86b6;
                        bVar93 = cVar7 + UNK_014e86b7;
                        bVar94 = cVar8 + UNK_014e86b8;
                        bVar95 = cVar9 + UNK_014e86b9;
                        bVar96 = cVar10 + UNK_014e86ba;
                        bVar97 = cVar11 + UNK_014e86bb;
                        bVar98 = cVar12 + UNK_014e86bc;
                        bVar99 = cVar13 + UNK_014e86bd;
                        bVar100 = cVar14 + UNK_014e86be;
                        bVar101 = cVar15 + UNK_014e86bf;
                        pcVar1 = (char *)((long)plVar35 + uVar52);
                        *pcVar1 = (-((byte)((DAT_014e4170 < bVar62) * DAT_014e4170 |
                                           (DAT_014e4170 >= bVar62) * bVar62) == bVar62) &
                                  DAT_014ead50) + auVar102[0];
                        pcVar1[1] = (-((byte)((UNK_014e4171 < bVar64) * UNK_014e4171 |
                                             (UNK_014e4171 >= bVar64) * bVar64) == bVar64) &
                                    UNK_014ead51) + auVar102[1];
                        pcVar1[2] = (-((byte)((UNK_014e4172 < bVar66) * UNK_014e4172 |
                                             (UNK_014e4172 >= bVar66) * bVar66) == bVar66) &
                                    UNK_014ead52) + auVar102[2];
                        pcVar1[3] = (-((byte)((UNK_014e4173 < bVar68) * UNK_014e4173 |
                                             (UNK_014e4173 >= bVar68) * bVar68) == bVar68) &
                                    UNK_014ead53) + auVar102[3];
                        pcVar1[4] = (-((byte)((UNK_014e4174 < bVar70) * UNK_014e4174 |
                                             (UNK_014e4174 >= bVar70) * bVar70) == bVar70) &
                                    UNK_014ead54) + auVar102[4];
                        pcVar1[5] = (-((byte)((UNK_014e4175 < bVar73) * UNK_014e4175 |
                                             (UNK_014e4175 >= bVar73) * bVar73) == bVar73) &
                                    UNK_014ead55) + auVar102[5];
                        pcVar1[6] = (-((byte)((UNK_014e4176 < bVar75) * UNK_014e4176 |
                                             (UNK_014e4176 >= bVar75) * bVar75) == bVar75) &
                                    UNK_014ead56) + auVar102[6];
                        pcVar1[7] = (-((byte)((UNK_014e4177 < bVar77) * UNK_014e4177 |
                                             (UNK_014e4177 >= bVar77) * bVar77) == bVar77) &
                                    UNK_014ead57) + auVar102[7];
                        pcVar1[8] = (-((byte)((UNK_014e4178 < bVar78) * UNK_014e4178 |
                                             (UNK_014e4178 >= bVar78) * bVar78) == bVar78) &
                                    UNK_014ead58) + auVar102[8];
                        pcVar1[9] = (-((byte)((UNK_014e4179 < bVar79) * UNK_014e4179 |
                                             (UNK_014e4179 >= bVar79) * bVar79) == bVar79) &
                                    UNK_014ead59) + auVar102[9];
                        pcVar1[10] = (-((byte)((UNK_014e417a < bVar80) * UNK_014e417a |
                                              (UNK_014e417a >= bVar80) * bVar80) == bVar80) &
                                     UNK_014ead5a) + auVar102[10];
                        pcVar1[0xb] = (-((byte)((UNK_014e417b < bVar81) * UNK_014e417b |
                                               (UNK_014e417b >= bVar81) * bVar81) == bVar81) &
                                      UNK_014ead5b) + auVar102[0xb];
                        pcVar1[0xc] = (-((byte)((UNK_014e417c < bVar82) * UNK_014e417c |
                                               (UNK_014e417c >= bVar82) * bVar82) == bVar82) &
                                      UNK_014ead5c) + auVar102[0xc];
                        pcVar1[0xd] = (-((byte)((UNK_014e417d < bVar83) * UNK_014e417d |
                                               (UNK_014e417d >= bVar83) * bVar83) == bVar83) &
                                      UNK_014ead5d) + auVar102[0xd];
                        pcVar1[0xe] = (-((byte)((UNK_014e417e < bVar84) * UNK_014e417e |
                                               (UNK_014e417e >= bVar84) * bVar84) == bVar84) &
                                      UNK_014ead5e) + auVar102[0xe];
                        pcVar1[0xf] = (-((byte)((UNK_014e417f < bVar85) * UNK_014e417f |
                                               (UNK_014e417f >= bVar85) * bVar85) == bVar85) &
                                      UNK_014ead5f) + auVar102[0xf];
                        pcVar1 = (char *)((long)plVar35 + uVar52 + 0x10);
                        *pcVar1 = (-((byte)((DAT_014e4170 < bVar86) * DAT_014e4170 |
                                           (DAT_014e4170 >= bVar86) * bVar86) == bVar86) &
                                  DAT_014ead50) + cVar31;
                        pcVar1[1] = (-((byte)((UNK_014e4171 < bVar87) * UNK_014e4171 |
                                             (UNK_014e4171 >= bVar87) * bVar87) == bVar87) &
                                    UNK_014ead51) + cVar65;
                        pcVar1[2] = (-((byte)((UNK_014e4172 < bVar88) * UNK_014e4172 |
                                             (UNK_014e4172 >= bVar88) * bVar88) == bVar88) &
                                    UNK_014ead52) + cVar67;
                        pcVar1[3] = (-((byte)((UNK_014e4173 < bVar89) * UNK_014e4173 |
                                             (UNK_014e4173 >= bVar89) * bVar89) == bVar89) &
                                    UNK_014ead53) + cVar69;
                        pcVar1[4] = (-((byte)((UNK_014e4174 < bVar90) * UNK_014e4174 |
                                             (UNK_014e4174 >= bVar90) * bVar90) == bVar90) &
                                    UNK_014ead54) + cVar71;
                        pcVar1[5] = (-((byte)((UNK_014e4175 < bVar91) * UNK_014e4175 |
                                             (UNK_014e4175 >= bVar91) * bVar91) == bVar91) &
                                    UNK_014ead55) + cVar74;
                        pcVar1[6] = (-((byte)((UNK_014e4176 < bVar92) * UNK_014e4176 |
                                             (UNK_014e4176 >= bVar92) * bVar92) == bVar92) &
                                    UNK_014ead56) + cVar76;
                        pcVar1[7] = (-((byte)((UNK_014e4177 < bVar93) * UNK_014e4177 |
                                             (UNK_014e4177 >= bVar93) * bVar93) == bVar93) &
                                    UNK_014ead57) + cVar7;
                        pcVar1[8] = (-((byte)((UNK_014e4178 < bVar94) * UNK_014e4178 |
                                             (UNK_014e4178 >= bVar94) * bVar94) == bVar94) &
                                    UNK_014ead58) + cVar8;
                        pcVar1[9] = (-((byte)((UNK_014e4179 < bVar95) * UNK_014e4179 |
                                             (UNK_014e4179 >= bVar95) * bVar95) == bVar95) &
                                    UNK_014ead59) + cVar9;
                        pcVar1[10] = (-((byte)((UNK_014e417a < bVar96) * UNK_014e417a |
                                              (UNK_014e417a >= bVar96) * bVar96) == bVar96) &
                                     UNK_014ead5a) + cVar10;
                        pcVar1[0xb] = (-((byte)((UNK_014e417b < bVar97) * UNK_014e417b |
                                               (UNK_014e417b >= bVar97) * bVar97) == bVar97) &
                                      UNK_014ead5b) + cVar11;
                        pcVar1[0xc] = (-((byte)((UNK_014e417c < bVar98) * UNK_014e417c |
                                               (UNK_014e417c >= bVar98) * bVar98) == bVar98) &
                                      UNK_014ead5c) + cVar12;
                        pcVar1[0xd] = (-((byte)((UNK_014e417d < bVar99) * UNK_014e417d |
                                               (UNK_014e417d >= bVar99) * bVar99) == bVar99) &
                                      UNK_014ead5d) + cVar13;
                        pcVar1[0xe] = (-((byte)((UNK_014e417e < bVar100) * UNK_014e417e |
                                               (UNK_014e417e >= bVar100) * bVar100) == bVar100) &
                                      UNK_014ead5e) + cVar14;
                        pcVar1[0xf] = (-((byte)((UNK_014e417f < bVar101) * UNK_014e417f |
                                               (UNK_014e417f >= bVar101) * bVar101) == bVar101) &
                                      UNK_014ead5f) + cVar15;
                        uVar52 = uVar52 + 0x20;
                      } while (uVar53 != uVar52);
                      if (uVar56 != uVar53) {
                        if ((uVar56 & 0x18) == 0) {
                          plVar36 = (long *)(uVar53 + (long)plVar35);
                          goto LAB_0b0930cc;
                        }
                        goto LAB_0b093065;
                      }
                    }
                  }
                  uVar56 = (ulong)(auStack_8c8[0] >> 1);
                  if (((ulong)auStack_8c8 & 1) != 0) {
                    uVar56 = auStack_8c0._0_8_;
                  }
                  uVar32 = 0xffffffff;
                  switch(uVar56) {
                  case 3:
                    if (((ulong)auStack_8c8 & 1) != 0) {
                      plVar38 = (long *)auStack_8c0._8_8_;
                    }
                    if (*(char *)((long)plVar38 + 2) != 't' || (short)*plVar38 != 0x6163)
                    goto LAB_0b09325a;
                    uVar32 = 5;
                    break;
                  default:
LAB_0b09325a:
                    break;
                  case 6:
                    if (((ulong)auStack_8c8 & 1) != 0) {
                      plVar38 = (long *)auStack_8c0._8_8_;
                    }
                    if (*(short *)((long)plVar38 + 4) != 0x6c61 || (int)*plVar38 != 0x6d696e61)
                    goto LAB_0b09325a;
                    uVar32 = 0;
                    break;
                  case 7:
                    if (((ulong)auStack_8c8 & 1) != 0) {
                      plVar38 = (long *)auStack_8c0._8_8_;
                    }
                    if (*(int *)((long)plVar38 + 3) == 0x72657473 && (int)*plVar38 == 0x736e6f6d) {
                      uVar32 = 1;
                    }
                    else {
                      if (*(int *)((long)plVar38 + 3) != 0x746e6569 || (int)*plVar38 != 0x69626d61)
                      goto LAB_0b09325a;
                      uVar32 = 4;
                    }
                    break;
                  case 8:
                    if (((ulong)auStack_8c8 & 1) != 0) {
                      plVar38 = (long *)auStack_8c0._8_8_;
                    }
                    if (*plVar38 == 0x726567616c6c6976) {
                      uVar32 = 3;
                    }
                    else {
                      uVar32 = -(uint)(*plVar38 != 0x726567616c6c6970) | 6;
                    }
                    break;
                  case 0xc:
                    if (((ulong)auStack_8c8 & 1) != 0) {
                      plVar38 = (long *)auStack_8c0._8_8_;
                    }
                    if ((int)plVar38[1] != 0x6c616d69 || *plVar38 != 0x6e615f7265746177)
                    goto LAB_0b09325a;
                    uVar32 = 2;
                  }
                  if (((ulong)auStack_8c8 & 1) != 0) {
                    func_0x0412a280(auStack_8c0._8_8_,(ulong)auStack_8c8 & 0xfffffffffffffffe);
                  }
                  if (-1 < (int)uVar32) {
                    auStack_8c8 = (undefined1  [8])&pppppppuStack_960;
                    lVar44 = func_0x0b0be840(puStack_2c8,auStack_8c8,&UNK_01563a4f,auStack_8c8,
                                             &plStack_990);
                    *(uint *)(lVar44 + 0x28) = uVar32;
                    iVar33 = func_0x0bf49880(&pppppppuStack_960);
                    if (iVar33 != 1) {
                      func_0x0bf48ed0(auStack_8c8,iVar33,1);
                      if (((ulong)pppppppuStack_960 & 1) != 0) {
                        func_0x0412a280(auStack_958._8_8_,
                                        (ulong)pppppppuStack_960 & 0xfffffffffffffffe);
                      }
                      pppppppuStack_960 = (undefined8 *******)auStack_8c8;
                      auStack_958 = auStack_8c0;
                    }
                    auStack_8c8 = (undefined1  [8])&pppppppuStack_960;
                    lVar44 = func_0x0b0bee70(&uStack_258,auStack_8c8,&UNK_01563a4f,auStack_8c8,
                                             &plStack_990);
                    uVar56 = *(ulong *)(lVar44 + 0x30);
                    uVar53 = *(ulong *)(lVar44 + 0x38);
                    *(ulong *)(lVar44 + 0x28) = CONCAT44(uStack_978._4_4_,(undefined4)uStack_978);
                    *(ulong *)(lVar44 + 0x30) = uStack_970;
                    *(ulong *)(lVar44 + 0x38) = uStack_968;
                    uStack_970 = uVar56;
                    uStack_968 = uVar53;
                    if ((*(byte *)(lVar44 + 0x40) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + 0x50),
                                      *(ulong *)(lVar44 + 0x40) & 0xfffffffffffffffe);
                    }
                    *(undefined8 *)(lVar44 + 0x50) = auStack_958._8_8_;
                    *(undefined8 ********)(lVar44 + 0x40) = pppppppuStack_960;
                    *(undefined8 *)(lVar44 + 0x48) = auStack_958._0_8_;
                    pppppppuStack_960 =
                         (undefined8 *******)((ulong)pppppppuStack_960 & 0xffffffffffff0000);
                    if ((*(byte *)(lVar44 + 0x58) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + 0x68),
                                      *(ulong *)(lVar44 + 0x58) & 0xfffffffffffffffe);
                    }
                    *(undefined8 *)(lVar44 + 0x68) = auStack_940._8_8_;
                    *(ulong *)(lVar44 + 0x58) = uStack_948;
                    *(undefined8 *)(lVar44 + 0x60) = auStack_940._0_8_;
                    uStack_948 = uStack_948 & 0xffffffffffff0000;
                    lVar55 = *(long *)(lVar44 + 0x70);
                    if (lVar55 != 0) {
                      lVar49 = *(long *)(lVar44 + 0x78);
                      lVar42 = lVar55;
                      if (lVar55 != lVar49) {
                        do {
                          func_0x0b0c04b0(lVar49 + -0x170);
                          *(undefined **)(lVar49 + -0x1b8) = &UNK_0f395808;
                          lVar42 = *(long *)(lVar49 + -400);
                          if (lVar42 != 0) {
                            lVar58 = *(long *)(lVar49 + -0x188);
                            lVar48 = lVar42;
                            if (lVar42 != lVar58) {
                              do {
                                plVar38 = *(long **)(lVar58 + -8);
                                if (plVar38 != (long *)0x0) {
                                  LOCK();
                                  plVar35 = plVar38 + 1;
                                  lVar48 = *plVar35;
                                  *plVar35 = *plVar35 + -1;
                                  UNLOCK();
                                  if (lVar48 == 0) {
                                    (**(code **)(*plVar38 + 0x10))(plVar38);
                                    func_0x0412c2d0(plVar38);
                                  }
                                }
                                lVar58 = lVar58 + -0x10;
                              } while (lVar58 != lVar42);
                              lVar48 = *(long *)(lVar49 + -400);
                            }
                            *(long *)(lVar49 + -0x188) = lVar42;
                            func_0x0412a280(lVar48,*(long *)(lVar49 + -0x180) - lVar48);
                          }
                          lVar42 = *(long *)(lVar49 + -0x1a8);
                          if (lVar42 != 0) {
                            lVar58 = *(long *)(lVar49 + -0x1a0);
                            lVar48 = lVar42;
                            if (lVar42 != lVar58) {
                              do {
                                plVar38 = *(long **)(lVar58 + -8);
                                if (plVar38 != (long *)0x0) {
                                  LOCK();
                                  plVar35 = plVar38 + 1;
                                  lVar48 = *plVar35;
                                  *plVar35 = *plVar35 + -1;
                                  UNLOCK();
                                  if (lVar48 == 0) {
                                    (**(code **)(*plVar38 + 0x10))(plVar38);
                                    func_0x0412c2d0(plVar38);
                                  }
                                }
                                lVar58 = lVar58 + -0x10;
                              } while (lVar58 != lVar42);
                              lVar48 = *(long *)(lVar49 + -0x1a8);
                            }
                            *(long *)(lVar49 + -0x1a0) = lVar42;
                            func_0x0412a280(lVar48,*(long *)(lVar49 + -0x198) - lVar48);
                          }
                          lVar49 = lVar49 + -0x1c0;
                        } while (lVar55 != lVar49);
                        lVar42 = *(long *)(lVar44 + 0x70);
                      }
                      *(long *)(lVar44 + 0x78) = lVar55;
                      func_0x0412a280(lVar42,*(long *)(lVar44 + 0x80) - lVar42);
                      *(long *)(lVar44 + 0x70) = 0;
                      *(undefined8 *)(lVar44 + 0x78) = 0;
                      *(undefined8 *)(lVar44 + 0x80) = 0;
                    }
                    *(undefined8 *)(lVar44 + 0x70) = auStack_930._0_8_;
                    *(undefined8 *)(lVar44 + 0x78) = auStack_930._8_8_;
                    *(long *)(lVar44 + 0x80) = lStack_920;
                    auStack_930 = (undefined1  [16])0x0;
                    lStack_920 = 0;
                  }
                }
                pppppppuVar47 = apppppppuStack_840[0];
                uStack_528 = uStack_848;
                uStack_548 = uStack_868;
                pppppppuStack_540 = pppppppuStack_860;
                plStack_558 = plStack_878;
                uStack_550 = plStack_870;
                pplStack_538 = uStack_858;
                uStack_530 = uStack_850;
                uStack_850 = 0;
                uStack_848 = 0;
                apppppppuStack_520[0] = (undefined8 *******)0x0;
                pcStack_510 = pcStack_830;
                pcStack_508 = pcStack_828;
                iStack_500 = iStack_820;
                cStack_4fc = cStack_81c;
                if (cStack_81c != '\0') {
                  if (cStack_81c == '\x02') {
                    (*pcStack_830)(5,apppppppuStack_840,apppppppuStack_520);
                  }
                  else {
                    apppppppuStack_840[0] = (undefined8 *******)0x0;
                    apppppppuStack_520[0] = pppppppuVar47;
                  }
                }
                lStack_4b8 = lStack_7d8;
                lStack_4d0 = lStack_7f0;
                lStack_4e8 = lStack_808;
                lStack_4f8 = auStack_818._0_8_;
                lStack_4f0 = auStack_818._8_8_;
                auStack_818 = (undefined1  [16])0x0;
                lStack_808 = 0;
                lStack_4e0 = auStack_800._0_8_;
                lStack_4d8 = auStack_800._8_8_;
                auStack_800 = (undefined1  [16])0x0;
                lStack_7f0 = 0;
                lStack_4c8 = auStack_7e8._0_8_;
                lStack_4c0 = auStack_7e8._8_8_;
                auStack_7e8 = (undefined1  [16])0x0;
                lStack_7d8 = 0;
                bStack_4ac = bStack_7cc;
                uStack_4b0 = uStack_7d0;
                uVar34 = auStack_930._0_8_;
                if (auStack_930._0_8_ != 0) {
                  for (lVar44 = auStack_930._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x1c0) {
                    func_0x0b0c04b0(lVar44 + -0x170);
                    *(undefined **)(lVar44 + -0x1b8) = &UNK_0f395808;
                    lVar55 = *(long *)(lVar44 + -400);
                    if (lVar55 != 0) {
                      lVar49 = *(long *)(lVar44 + -0x188);
                      lVar42 = lVar55;
                      if (lVar55 != lVar49) {
                        do {
                          plVar38 = *(long **)(lVar49 + -8);
                          if (plVar38 != (long *)0x0) {
                            LOCK();
                            plVar35 = plVar38 + 1;
                            lVar42 = *plVar35;
                            *plVar35 = *plVar35 + -1;
                            UNLOCK();
                            if (lVar42 == 0) {
                              (**(code **)(*plVar38 + 0x10))(plVar38);
                              func_0x0412c2d0(plVar38);
                            }
                          }
                          lVar49 = lVar49 + -0x10;
                        } while (lVar49 != lVar55);
                        lVar42 = *(long *)(lVar44 + -400);
                      }
                      *(long *)(lVar44 + -0x188) = lVar55;
                      func_0x0412a280(lVar42,*(long *)(lVar44 + -0x180) - lVar42);
                    }
                    lVar55 = *(long *)(lVar44 + -0x1a8);
                    if (lVar55 != 0) {
                      lVar49 = *(long *)(lVar44 + -0x1a0);
                      lVar42 = lVar55;
                      if (lVar55 != lVar49) {
                        do {
                          plVar38 = *(long **)(lVar49 + -8);
                          if (plVar38 != (long *)0x0) {
                            LOCK();
                            plVar35 = plVar38 + 1;
                            lVar42 = *plVar35;
                            *plVar35 = *plVar35 + -1;
                            UNLOCK();
                            if (lVar42 == 0) {
                              (**(code **)(*plVar38 + 0x10))(plVar38);
                              func_0x0412c2d0(plVar38);
                            }
                          }
                          lVar49 = lVar49 + -0x10;
                        } while (lVar49 != lVar55);
                        lVar42 = *(long *)(lVar44 + -0x1a8);
                      }
                      *(long *)(lVar44 + -0x1a0) = lVar55;
                      func_0x0412a280(lVar42,*(long *)(lVar44 + -0x198) - lVar42);
                    }
                  }
                  auStack_930._8_8_ = uVar34;
                  func_0x0412a280(auStack_930._0_8_,lStack_920 - auStack_930._0_8_);
                }
                if ((uStack_948 & 1) != 0) {
                  func_0x0412a280(auStack_940._8_8_,uStack_948 & 0xfffffffffffffffe);
                }
                if (((ulong)pppppppuStack_960 & 1) != 0) {
                  func_0x0412a280(auStack_958._8_8_,(ulong)pppppppuStack_960 & 0xfffffffffffffffe);
                }
                if ((uStack_968 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_968 & 0xff00ffffffffffff) - 8);
                }
                uStack_968 = 0;
                if ((uStack_970 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(uStack_970 & 0xff00ffffffffffff) - 8);
                }
                uVar34 = auStack_7e8._0_8_;
                if (auStack_7e8._0_8_ != 0) {
                  for (lVar44 = auStack_7e8._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x20) {
                    if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                      *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                    }
                  }
                  auStack_7e8._8_8_ = uVar34;
                  func_0x0412a280(auStack_7e8._0_8_,lStack_7d8 - auStack_7e8._0_8_);
                }
              }
              uVar34 = auStack_800._0_8_;
              if (auStack_800._0_8_ != 0) {
                for (lVar44 = auStack_800._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x50) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar55 = *(long *)(lVar44 + -0x30);
                  if (lVar55 != 0) {
                    lVar49 = *(long *)(lVar44 + -0x28);
                    lVar42 = lVar55;
                    if (lVar55 != lVar49) {
                      do {
                        if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                          *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar49 = lVar49 + -0x20;
                      } while (lVar49 != lVar55);
                      lVar42 = *(long *)(lVar44 + -0x30);
                    }
                    *(long *)(lVar44 + -0x28) = lVar55;
                    func_0x0412a280(lVar42,*(long *)(lVar44 + -0x20) - lVar42);
                  }
                  lVar55 = *(long *)(lVar44 + -0x48);
                  if (lVar55 != 0) {
                    lVar49 = *(long *)(lVar44 + -0x40);
                    lVar42 = lVar55;
                    if (lVar55 != lVar49) {
                      do {
                        if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                          *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar49 = lVar49 + -0x20;
                      } while (lVar49 != lVar55);
                      lVar42 = *(long *)(lVar44 + -0x48);
                    }
                    *(long *)(lVar44 + -0x40) = lVar55;
                    func_0x0412a280(lVar42,*(long *)(lVar44 + -0x38) - lVar42);
                  }
                }
                auStack_800._8_8_ = uVar34;
                func_0x0412a280(auStack_800._0_8_,lStack_7f0 - auStack_800._0_8_);
              }
              uVar34 = auStack_818._0_8_;
              if (auStack_818._0_8_ != 0) {
                for (lVar44 = auStack_818._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x38) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar55 = *(long *)(lVar44 + -0x30);
                  if (lVar55 != 0) {
                    lVar49 = *(long *)(lVar44 + -0x28);
                    lVar42 = lVar55;
                    if (lVar55 != lVar49) {
                      do {
                        if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                          *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar49 = lVar49 + -0x20;
                      } while (lVar49 != lVar55);
                      lVar42 = *(long *)(lVar44 + -0x30);
                    }
                    *(long *)(lVar44 + -0x28) = lVar55;
                    func_0x0412a280(lVar42,*(long *)(lVar44 + -0x20) - lVar42);
                  }
                }
                auStack_818._8_8_ = uVar34;
                func_0x0412a280(auStack_818._0_8_,lStack_808 - auStack_818._0_8_);
              }
              if (pcStack_828 != (code *)0x0) {
                (*pcStack_828)(apppppppuStack_840);
              }
              if ((uStack_848 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_848 & 0xff00ffffffffffff) - 8);
              }
              uStack_848 = 0;
              if ((uStack_850 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_850 & 0xff00ffffffffffff) - 8);
              }
              uVar34 = auStack_640._0_8_;
              if (auStack_640._0_8_ != 0) {
                for (lVar44 = auStack_640._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x20) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                auStack_640._8_8_ = uVar34;
                func_0x0412a280(auStack_640._0_8_,lStack_630 - auStack_640._0_8_);
              }
              uVar34 = auStack_660._8_8_;
              if (auStack_660._8_8_ != 0) {
                lVar44 = auStack_650._0_8_;
                if (auStack_660._8_8_ != auStack_650._0_8_) {
                  do {
                    if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                      *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar55 = *(long *)(lVar44 + -0x30);
                    if (lVar55 != 0) {
                      lVar49 = *(long *)(lVar44 + -0x28);
                      lVar42 = lVar55;
                      if (lVar55 != lVar49) {
                        do {
                          if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                            *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                          }
                          lVar49 = lVar49 + -0x20;
                        } while (lVar49 != lVar55);
                        lVar42 = *(long *)(lVar44 + -0x30);
                      }
                      *(long *)(lVar44 + -0x28) = lVar55;
                      func_0x0412a280(lVar42,*(long *)(lVar44 + -0x20) - lVar42);
                    }
                    lVar55 = *(long *)(lVar44 + -0x48);
                    if (lVar55 != 0) {
                      lVar49 = *(long *)(lVar44 + -0x40);
                      lVar42 = lVar55;
                      if (lVar55 != lVar49) {
                        do {
                          if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                            *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                          }
                          lVar49 = lVar49 + -0x20;
                        } while (lVar49 != lVar55);
                        lVar42 = *(long *)(lVar44 + -0x48);
                      }
                      *(long *)(lVar44 + -0x40) = lVar55;
                      func_0x0412a280(lVar42,*(long *)(lVar44 + -0x38) - lVar42);
                    }
                    lVar44 = lVar44 + -0x50;
                  } while (uVar34 != lVar44);
                }
                auStack_650._0_8_ = uVar34;
                func_0x0412a280(auStack_660._8_8_,auStack_650._8_8_ - auStack_660._8_8_);
              }
              uVar34 = auStack_670._0_8_;
              if (auStack_670._0_8_ != 0) {
                for (lVar44 = auStack_670._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x38) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar55 = *(long *)(lVar44 + -0x30);
                  if (lVar55 != 0) {
                    lVar49 = *(long *)(lVar44 + -0x28);
                    lVar42 = lVar55;
                    if (lVar55 != lVar49) {
                      do {
                        if ((*(byte *)(lVar49 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar49 + -8),
                                          *(ulong *)(lVar49 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar49 = lVar49 + -0x20;
                      } while (lVar49 != lVar55);
                      lVar42 = *(long *)(lVar44 + -0x30);
                    }
                    *(long *)(lVar44 + -0x28) = lVar55;
                    func_0x0412a280(lVar42,*(long *)(lVar44 + -0x20) - lVar42);
                  }
                }
                auStack_670._8_8_ = uVar34;
                func_0x0412a280(auStack_670._0_8_,auStack_660._0_8_ - auStack_670._0_8_);
              }
              if ((ulong)uStack_678 != 0xffffffff) {
                (**(code **)(&UNK_0f280f18 + (ulong)uStack_678 * 8))(&plStack_878,auStack_6e0 + 8);
              }
              uStack_678 = 0xffffffff;
              if ((auStack_6f0[0] & 1) != 0) {
                func_0x0412a280(auStack_6e0._0_8_,auStack_6f0._0_8_ & 0xfffffffffffffffe);
              }
              if ((auStack_700._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_700._8_8_ & 0xff00ffffffffffff) - 8);
              }
              auStack_700._8_8_ = 0;
              if ((auStack_700._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_700._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar27._8_8_ = 0;
              auVar27._0_8_ = auStack_700._8_8_;
              auStack_700 = auVar27 << 0x40;
              if ((auStack_710._0_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_710._0_8_ & 0xff00ffffffffffff) - 8);
              }
              auVar28._8_8_ = 0;
              auVar28._0_8_ = auStack_710._8_8_;
              auStack_710 = auVar28 << 0x40;
              if ((auStack_720._8_8_ & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(auStack_720._8_8_ & 0xff00ffffffffffff) - 8);
              }
              func_0x0b08f7d0(&uStack_418);
              if (plStack_428 == &lStack_448) {
                lVar44 = 0x20;
LAB_0b094055:
                (**(code **)(*plStack_428 + lVar44))();
                if (pplStack_458 != &plStack_478) goto LAB_0b09403a;
LAB_0b094070:
                lVar44 = 0x20;
LAB_0b094075:
                (**(code **)((long)*pplStack_458 + lVar44))();
              }
              else {
                lVar44 = 0x28;
                if (plStack_428 != (long *)0x0) goto LAB_0b094055;
                if (pplStack_458 == &plStack_478) goto LAB_0b094070;
LAB_0b09403a:
                lVar44 = 0x28;
                if (pplStack_458 != (long **)0x0) goto LAB_0b094075;
              }
              func_0x04908570(&puStack_490,uStack_488);
              uVar2 = uStack_4a8._4_4_;
              uVar32 = (uint)uStack_4a8;
              lVar44 = CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8);
              if (lVar44 != 0) {
                lVar55 = CONCAT17(uStack_499,CONCAT61(uStack_49f,bStack_4a0));
                lVar49 = lVar44;
                if (lVar44 != lVar55) {
                  do {
                    plVar38 = *(long **)(lVar55 + -8);
                    *(undefined8 *)(lVar55 + -8) = 0;
                    if (plVar38 != (long *)0x0) {
                      (**(code **)(*plVar38 + 8))();
                    }
                    lVar55 = lVar55 + -8;
                  } while (lVar55 != lVar44);
                  lVar49 = CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8);
                }
                bStack_4a0 = (byte)uVar32;
                uStack_49f = (undefined6)((ulong)lVar44 >> 8);
                uStack_499 = (undefined1)((uint)uVar2 >> 0x18);
                func_0x0412a280(lVar49,(long)pplStack_498 - lVar49);
              }
              func_0x0b0396e0(auStack_100);
              if ((auStack_748[0] & 1) != 0) {
                func_0x0412a280(uStack_738,auStack_748._0_8_ & 0xfffffffffffffffe);
              }
              func_0x0d6b1c60(&puStack_208,&plStack_558);
              lVar55 = lStack_4c8;
              lVar44 = lStack_4c0;
              if (lStack_4c8 != 0) {
                for (; lVar55 != lVar44; lVar44 = lVar44 + -0x20) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                lStack_4c0 = lVar55;
                func_0x0412a280(lStack_4c8,lStack_4b8 - lStack_4c8);
              }
              lVar55 = lStack_4e0;
              lVar44 = lStack_4d8;
              if (lStack_4e0 != 0) {
                for (; lVar55 != lVar44; lVar44 = lVar44 + -0x50) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar49 = *(long *)(lVar44 + -0x30);
                  if (lVar49 != 0) {
                    lVar42 = *(long *)(lVar44 + -0x28);
                    lVar58 = lVar49;
                    if (lVar49 != lVar42) {
                      do {
                        if ((*(byte *)(lVar42 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar42 + -8),
                                          *(ulong *)(lVar42 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar42 = lVar42 + -0x20;
                      } while (lVar42 != lVar49);
                      lVar58 = *(long *)(lVar44 + -0x30);
                    }
                    *(long *)(lVar44 + -0x28) = lVar49;
                    func_0x0412a280(lVar58,*(long *)(lVar44 + -0x20) - lVar58);
                  }
                  lVar49 = *(long *)(lVar44 + -0x48);
                  if (lVar49 != 0) {
                    lVar42 = *(long *)(lVar44 + -0x40);
                    lVar58 = lVar49;
                    if (lVar49 != lVar42) {
                      do {
                        if ((*(byte *)(lVar42 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar42 + -8),
                                          *(ulong *)(lVar42 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar42 = lVar42 + -0x20;
                      } while (lVar42 != lVar49);
                      lVar58 = *(long *)(lVar44 + -0x48);
                    }
                    *(long *)(lVar44 + -0x40) = lVar49;
                    func_0x0412a280(lVar58,*(long *)(lVar44 + -0x38) - lVar58);
                  }
                }
                lStack_4d8 = lVar55;
                func_0x0412a280(lStack_4e0,lStack_4d0 - lStack_4e0);
              }
              lVar55 = lStack_4f8;
              lVar44 = lStack_4f0;
              if (lStack_4f8 != 0) {
                for (; lVar55 != lVar44; lVar44 = lVar44 + -0x38) {
                  if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                                    *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar49 = *(long *)(lVar44 + -0x30);
                  if (lVar49 != 0) {
                    lVar42 = *(long *)(lVar44 + -0x28);
                    lVar58 = lVar49;
                    if (lVar49 != lVar42) {
                      do {
                        if ((*(byte *)(lVar42 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar42 + -8),
                                          *(ulong *)(lVar42 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar42 = lVar42 + -0x20;
                      } while (lVar42 != lVar49);
                      lVar58 = *(long *)(lVar44 + -0x30);
                    }
                    *(long *)(lVar44 + -0x28) = lVar49;
                    func_0x0412a280(lVar58,*(long *)(lVar44 + -0x20) - lVar58);
                  }
                }
                lStack_4f0 = lVar55;
                func_0x0412a280(lStack_4f8,lStack_4e8 - lStack_4f8);
              }
              if (pcStack_508 != (code *)0x0) {
                (*pcStack_508)(apppppppuStack_520);
              }
              lVar44 = lStack_308;
              if ((uStack_528 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_528 & 0xff00ffffffffffff) - 8);
              }
              uStack_528 = 0;
              if ((uStack_530 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_530 & 0xff00ffffffffffff) - 8);
              }
            }
            if (((byte)uStack_768 & 1) != 0) {
              func_0x0412a280(uStack_758,uStack_768 & 0xfffffffffffffffe);
            }
            lVar44 = lVar44 + 0x18;
          } while (lVar44 != lStack_310);
        }
        lVar55 = lStack_570;
        lVar44 = lStack_568;
        if (lStack_570 != 0) {
          for (; lVar55 != lVar44; lVar44 = lVar44 + -0x40) {
            lVar49 = *(long *)(lVar44 + -0x18);
            if (lVar49 != 0) {
              lVar42 = *(long *)(lVar44 + -0x10);
              lVar58 = lVar49;
              if (lVar49 != lVar42) {
                do {
                  lVar42 = lVar42 + -0x40;
                  func_0x0d697f30(lVar42);
                } while (lVar42 != lVar49);
                lVar58 = *(long *)(lVar44 + -0x18);
              }
              *(long *)(lVar44 + -0x10) = lVar49;
              func_0x0412a280(lVar58,*(long *)(lVar44 + -8) - lVar58);
            }
            plVar38 = *(long **)(lVar44 + -0x20);
            if (plVar38 == (long *)0x0) {
LAB_0b094790:
              bVar62 = *(byte *)(lVar44 + -0x40);
            }
            else {
              LOCK();
              plVar35 = plVar38 + 1;
              lVar49 = *plVar35;
              *plVar35 = *plVar35 + -1;
              UNLOCK();
              if (lVar49 != 0) goto LAB_0b094790;
              (**(code **)(*plVar38 + 0x10))(plVar38);
              func_0x0412c2d0(plVar38);
              bVar62 = *(byte *)(lVar44 + -0x40);
            }
            if ((bVar62 & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar44 + -0x30),
                              *(ulong *)(lVar44 + -0x40) & 0xfffffffffffffffe);
            }
          }
          lStack_568 = lVar55;
          func_0x0412a280(lStack_570,lStack_560 - lStack_570);
        }
        lVar55 = lStack_588;
        lVar44 = lStack_580;
        if (lStack_588 != 0) {
          for (; lVar55 != lVar44; lVar44 = lVar44 + -0x18) {
            if ((*(byte *)(lVar44 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar44 + -8),
                              *(ulong *)(lVar44 + -0x18) & 0xfffffffffffffffe);
            }
          }
          lStack_580 = lVar55;
          func_0x0412a280(lStack_588,lStack_578 - lStack_588);
        }
      } while (lStack_598 != *(long *)(lStack_318 + 8));
      if (0 < iStack_178) {
        uStack_4a8._0_4_ = 0x7463411c;
        uStack_4a8._4_4_ = 0x7053726f;
        bStack_4a0 = 0x61;
        uStack_49f = 0x656c75526e77;
        uStack_499 = 0;
        (**(code **)(*(long *)(lStack_320 + 0x40) + 0x10))
                  (lStack_320 + 0x40,&uStack_4a8,&puStack_208);
        if (((uint)uStack_4a8 & 1) != 0) {
          func_0x0412a280(pplStack_498,
                          CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8) & 0xfffffffffffffffe);
        }
      }
    }
    func_0x05f43b50(&puStack_208);
    if (plStack_248 != (long *)0x0) {
      plVar38 = plStack_248;
      do {
        bVar59 = (*(byte *)(plVar38 + 2) & 1) != 0;
        lVar44 = (long)plVar38 + 0x11;
        if (bVar59) {
          lVar44 = plVar38[4];
        }
        uVar56 = (ulong)(*(byte *)(plVar38 + 2) >> 1);
        if (bVar59) {
          uVar56 = plVar38[3];
        }
        plStack_728 = (long *)0x0;
        if (lVar44 == 0) {
          plStack_728 = (long *)((ulong)((uint)uVar56 & 0x7f) << 0x30);
        }
        else {
          lVar55 = uVar56 + 9;
          puVar40 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar55,8);
          if (lVar55 != 0 && puVar40 == (ulong *)0x0) {
            func_0x0eec74c0(lVar55,8);
          }
          *puVar40 = uVar56;
          func_0x0eee2f00(puVar40 + 1,lVar44,uVar56);
          *(undefined1 *)((long)puVar40 + uVar56 + 8) = 0;
          plStack_728 = (long *)((ulong)(puVar40 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        uStack_4a8._0_4_ = (uint)uStack_4a8 & 0xffffff00;
        pplStack_498 = (long **)((ulong)pplStack_498 & 0xffffffffffffff00);
        func_0x0eeb79f0(&puStack_208,&plStack_728);
        if (((ulong)plStack_728 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)plStack_728 & 0xff00ffffffffffff) - 8);
        }
        puVar50 = (uint *)plVar38[0xe];
        puVar3 = (uint *)plVar38[0xf];
        if (puVar50 != puVar3) {
          do {
            if ((puVar50[0x66] & 1) == 0) {
              plStack_728 = *(long **)(puVar50 + 0x66);
              auStack_720 = *(undefined1 (*) [16])(puVar50 + 0x68);
            }
            else {
              func_0x0412e5e0(&plStack_728,*(undefined8 *)(puVar50 + 0x6a),
                              *(undefined8 *)(puVar50 + 0x68));
            }
            puVar43 = puStack_2c0;
            uVar56 = (ulong)plStack_728 >> 1 & 0x7f;
            if (((ulong)plStack_728 & 1) != 0) {
              uVar56 = auStack_720._0_8_;
            }
            if (uVar56 != 0) {
              uVar32 = puVar50[0x38];
              if (((ulong)plStack_728 & 1) == 0) {
                pplStack_498 = (long **)auStack_720._8_8_;
                uStack_4a8._0_4_ = (uint)plStack_728;
                uStack_4a8._4_4_ = (undefined4)((ulong)plStack_728 >> 0x20);
                bStack_4a0 = auStack_720[0];
                uStack_49f = auStack_720._1_6_;
                uStack_499 = auStack_720[7];
              }
              else {
                func_0x0412e5e0(&uStack_4a8,auStack_720._8_8_);
              }
              puStack_490 = (ulong *)CONCAT44(puStack_490._4_4_,uVar32);
              func_0x0607c210(puVar43,&uStack_4a8,&uStack_4a8);
              if (((uint)uStack_4a8 & 1) != 0) {
                func_0x0412a280(pplStack_498,
                                CONCAT44(uStack_4a8._4_4_,(uint)uStack_4a8) & 0xfffffffffffffffe);
              }
            }
            uStack_4a8._0_4_ = *puVar50;
            if (ppuStack_298 == (undefined **)0x0) {
              func_0x04891200();
              goto LAB_0b095080;
            }
            (**(code **)(*ppuStack_298 + 0x30))
                      (ppuStack_298,plVar38 + 8,&uStack_4a8,puVar50 + 2,puVar50 + 0x14);
            if (((ulong)plStack_728 & 1) != 0) {
              func_0x0412a280(auStack_720._8_8_,(ulong)plStack_728 & 0xfffffffffffffffe);
            }
            puVar50 = puVar50 + 0x70;
          } while (puVar50 != puVar3);
        }
        func_0x0eeb81b0(&puStack_208);
        plVar38 = (long *)*plVar38;
      } while (plVar38 != (long *)0x0);
    }
    for (puVar43 = puStack_220; puVar43 != (undefined8 *)0x0; puVar43 = (undefined8 *)*puVar43) {
      bVar59 = (*(byte *)(puVar43 + 2) & 1) != 0;
      puVar46 = (undefined8 *)((long)puVar43 + 0x11);
      if (bVar59) {
        puVar46 = (undefined8 *)puVar43[4];
      }
      uVar56 = (ulong)(*(byte *)(puVar43 + 2) >> 1);
      if (bVar59) {
        uVar56 = puVar43[3];
      }
      uVar2 = *(undefined4 *)((long)puVar43 + 0x2e);
      auVar102 = func_0x0d232ed0(lStack_2e0,puVar46,uVar56,*(undefined2 *)((long)puVar43 + 0x2a),
                                 *(undefined1 *)(puVar43 + 5),*(undefined2 *)((long)puVar43 + 0x2c))
      ;
      *(undefined4 *)(*auVar102._0_8_ + 0x1e + auVar102._8_8_ * 0x28) = uVar2;
      psVar4 = (short *)puVar43[8];
      for (psVar51 = (short *)puVar43[7]; psVar51 != psVar4; psVar51 = psVar51 + 0x88) {
        psVar5 = *(short **)(psVar51 + 4);
        if (psVar5 == *(short **)(psVar51 + 8)) {
          sVar72 = 1;
          sVar61 = 1;
        }
        else {
          sVar61 = *psVar5;
          sVar72 = psVar5[2];
        }
        auStack_720._0_8_ = auStack_720._4_8_ << 0x20;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = auStack_6f0._8_8_;
        auStack_6f0 = auVar29 << 0x40;
        auStack_700 = ZEXT816(0);
        auStack_720._8_8_ = 0;
        auStack_710 = ZEXT816(0);
        plStack_728 = (long *)&UNK_0ef516f8;
        puStack_490 = (ulong *)(psVar51 + 0x1c);
        pplStack_498 = &plStack_728;
        bStack_4a0 = (byte)pplStack_498;
        uStack_49f = (undefined6)((ulong)pplStack_498 >> 8);
        uStack_499 = (undefined1)((ulong)pplStack_498 >> 0x38);
        uStack_4a8 = pplStack_498;
        if ((ulong)*(uint *)(psVar51 + 0x78) == 0xffffffff) goto LAB_0b09508d;
        puStack_208 = &uStack_4a8;
        cVar31 = (**(code **)(&UNK_0f3957b0 + (ulong)*(uint *)(psVar51 + 0x78) * 8))(&puStack_208);
        if (cVar31 == '\0') {
          func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
        }
        func_0x0d2d1d40(&uStack_4a8,puVar46,uVar56,(int)*psVar51,(int)sVar61,(int)sVar72);
        puStack_208 = puVar46;
        uStack_200 = uVar56;
        if (ppuStack_268 == (undefined **)0x0) goto LAB_0b095080;
        (**(code **)(*ppuStack_268 + 0x30))(ppuStack_268,&puStack_208,&plStack_728,&uStack_4a8);
        if ((uStack_438 & 1) != 0) {
          func_0x0412a280(plStack_428,uStack_438 & 0xfffffffffffffffe);
        }
        if (((ulong)pplStack_458 & 1) != 0) {
          func_0x0412a280(lStack_448,(ulong)pplStack_458 & 0xfffffffffffffffe);
        }
        if ((uStack_470 & 1) != 0) {
          func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
        }
        if ((uStack_488 & 1) != 0) {
          func_0x0412a280(plStack_478,uStack_488 & 0xfffffffffffffffe);
        }
        if ((bStack_4a0 & 1) != 0) {
          func_0x0412a280(puStack_490,
                          CONCAT17(uStack_499,CONCAT61(uStack_49f,bStack_4a0)) & 0xfffffffffffffffe)
          ;
        }
        plStack_728 = (long *)&UNK_0f395808;
        uVar34 = auStack_700._0_8_;
        if (auStack_700._0_8_ != 0) {
          for (lVar44 = auStack_700._8_8_; uVar34 != lVar44; lVar44 = lVar44 + -0x10) {
            plVar38 = *(long **)(lVar44 + -8);
            if (plVar38 != (long *)0x0) {
              LOCK();
              plVar35 = plVar38 + 1;
              lVar55 = *plVar35;
              *plVar35 = *plVar35 + -1;
              UNLOCK();
              if (lVar55 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                func_0x0412c2d0(plVar38);
              }
            }
          }
          auStack_700._8_8_ = uVar34;
          func_0x0412a280(auStack_700._0_8_,auStack_6f0._0_8_ - auStack_700._0_8_);
        }
        uVar34 = auStack_720._8_8_;
        if (auStack_720._8_8_ != 0) {
          lVar44 = auStack_710._0_8_;
          if (auStack_720._8_8_ != auStack_710._0_8_) {
            do {
              plVar38 = *(long **)(lVar44 + -8);
              if (plVar38 != (long *)0x0) {
                LOCK();
                plVar35 = plVar38 + 1;
                lVar55 = *plVar35;
                *plVar35 = *plVar35 + -1;
                UNLOCK();
                if (lVar55 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                  func_0x0412c2d0(plVar38);
                }
              }
              lVar44 = lVar44 + -0x10;
            } while (lVar44 != uVar34);
          }
          auStack_710._0_8_ = uVar34;
          func_0x0412a280(auStack_720._8_8_,auStack_710._8_8_ - auStack_720._8_8_);
        }
      }
    }
    func_0x0b095b50(&uStack_2e8);
  }
  return;
LAB_0b095080:
  func_0x04891200();
LAB_0b09508d:
  func_0x04931450();
LAB_0b095092:
  uVar34 = func_0x04882e30();
  func_0x041084d6(&DAT_0f5ea4a0);
  func_0x0d624dd0(&lStack_588);
  func_0x05f43b50(&puStack_208);
  func_0x0b095b50(&uStack_2e8);
  func_0x05fa3960(puStack_5b0);
  func_0x05fa3960(puStack_5a8);
  func_0x0eee2d70(uVar34);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
