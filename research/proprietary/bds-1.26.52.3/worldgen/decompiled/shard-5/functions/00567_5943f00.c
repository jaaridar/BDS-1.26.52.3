/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5a43f00 (ELF vaddr 0x5943f00)
 * Label: caller-of-callee
 * Body:  [[05a43f00, 05a4509b] [05a450a0, 05a45665] [05a45670, 05a456ac] [05a456b0, 05a4707b] [05a4771a, 05a477d8] [05a477dd, 05a47898] [05a47aab, 05a47abd]]
 * Ghidra: FUN_05a43f00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05a43f00(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  long *plVar22;
  long *plVar23;
  byte *pbVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  byte **ppbVar31;
  long *plVar32;
  byte *pbVar33;
  long lVar34;
  byte *pbVar35;
  ulong uVar36;
  byte *pbVar37;
  bool bVar38;
  byte *pbStack_658;
  byte *pbStack_650;
  byte *pbStack_648;
  byte *pbStack_640;
  byte *pbStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5b9;
  byte *pbStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  byte *pbStack_5a0;
  undefined8 uStack_598;
  byte *pbStack_578;
  byte bStack_570;
  undefined5 uStack_56f;
  undefined2 uStack_56a;
  undefined1 uStack_568;
  undefined5 uStack_567;
  undefined2 uStack_562;
  undefined8 uStack_560;
  undefined8 uStack_558;
  byte *pbStack_530;
  byte bStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined2 uStack_51f;
  undefined1 uStack_51d;
  undefined8 uStack_518;
  byte bStack_510;
  undefined4 uStack_50f;
  undefined4 uStack_50b;
  undefined4 uStack_507;
  undefined1 uStack_503;
  undefined2 uStack_502;
  undefined1 uStack_500;
  undefined5 uStack_4ff;
  undefined1 uStack_4fa;
  undefined1 uStack_4f9;
  byte bStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined1 uStack_4ef;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 *puStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 *puStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined4 *puStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined4 *puStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  uint *puStack_390;
  byte *pbStack_388;
  byte bStack_380;
  undefined1 uStack_37f;
  undefined1 uStack_37e;
  undefined5 uStack_37d;
  undefined8 uStack_370;
  byte bStack_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined5 uStack_365;
  undefined8 uStack_358;
  byte bStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined5 uStack_34d;
  undefined8 uStack_340;
  byte bStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined5 uStack_335;
  undefined8 uStack_328;
  byte bStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined5 uStack_31d;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  byte *pbStack_2f0;
  undefined8 uStack_2e8;
  byte *pbStack_2c8;
  long *plStack_2c0;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined8 uStack_290;
  byte bStack_288;
  undefined7 uStack_287;
  undefined8 uStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined8 uStack_260;
  uint uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  byte *pbStack_248;
  byte bStack_240;
  undefined1 uStack_23f;
  undefined6 uStack_23e;
  undefined8 uStack_230;
  byte bStack_228;
  undefined1 uStack_227;
  undefined6 uStack_226;
  undefined8 uStack_218;
  byte bStack_210;
  undefined1 uStack_20f;
  undefined6 uStack_20e;
  undefined8 uStack_200;
  byte bStack_1f8;
  undefined1 uStack_1f7;
  undefined6 uStack_1f6;
  undefined8 uStack_1e8;
  byte *pbStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [16];
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined8 uStack_178;
  byte bStack_170;
  undefined7 uStack_16f;
  undefined8 uStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  byte *pbStack_148;
  undefined1 auStack_140 [16];
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  byte bStack_118;
  undefined7 uStack_117;
  undefined8 uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  undefined8 uStack_38;
  
  puStack_470 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_470 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar28 = _UNK_01325d30;
  uStack_480 = 0x31;
  uStack_478 = 0x29;
  *(ulong *)((long)puStack_470 + 0x19) = CONCAT17(UNK_01325d2f,_DAT_01325d28);
  *(undefined8 *)((long)puStack_470 + 0x21) = uVar28;
  uVar28 = CONCAT71(_DAT_01325d28,UNK_01325d27);
  *(undefined8 *)(puStack_470 + 4) = _DAT_01325d1f;
  *(undefined8 *)(puStack_470 + 6) = uVar28;
  uVar12 = _UNK_01325d1b;
  uVar11 = _UNK_01325d17;
  uVar10 = _UNK_01325d13;
  *puStack_470 = _DAT_01325d0f;
  puStack_470[1] = uVar10;
  puStack_470[2] = uVar11;
  puStack_470[3] = uVar12;
  *(undefined1 *)((long)puStack_470 + 0x29) = 0;
  bStack_4f8 = 0x10;
  uStack_4f7 = 0x7469726f697270;
  uStack_4f0 = 0x79;
  uStack_4ef = 0;
  bStack_320 = 2;
  uStack_31f = 0x30;
  uStack_31e = 0;
  bStack_338 = 2;
  uStack_337 = 0x30;
  uStack_336 = 0;
  bStack_1f8 = 0;
  uStack_1f7 = 0;
  func_0x0564aad0(&pbStack_2c8,&uStack_480,&bStack_4f8,0,&bStack_320,0,&bStack_338,&bStack_1f8);
  uVar28 = *param_1;
  pbStack_5b8 = (byte *)0x0;
  if ((uStack_258 & 1) == 0) {
    pbStack_5a0 = pbStack_248;
    uStack_5b0 = (undefined8 *)CONCAT44(uStack_254,uStack_258);
    uStack_5a8 = uStack_250;
    uStack_5a4 = uStack_24c;
  }
  else {
    func_0x0412e5e0(&uStack_5b0,pbStack_248,CONCAT44(uStack_24c,uStack_250));
  }
  uStack_598 = 0;
  if (((ulong)uStack_5b0 & 1) == 0) {
    if ((byte)uStack_5b0 >> 1 != 0) goto LAB_05a44091;
LAB_05a44186:
    pbVar35 = (byte *)0x0;
  }
  else {
    if (CONCAT44(uStack_5a4,uStack_5a8) == 0) goto LAB_05a44186;
LAB_05a44091:
    if (((ulong)uStack_5b0 & 1) == 0) {
      pbVar20 = (byte *)((long)&uStack_5b0 + 1);
      if (pbVar20 != (byte *)0x0) goto LAB_05a440b8;
      goto LAB_05a44186;
    }
    pbVar20 = pbStack_5a0;
    if (pbStack_5a0 == (byte *)0x0) goto LAB_05a44186;
LAB_05a440b8:
    if (*pbVar20 == 0) goto LAB_05a44186;
    pbVar35 = (byte *)0xcbf29ce484222325;
    uVar25 = func_0x0eee2e90(pbVar20);
    if (uVar25 != 0) {
      uVar36 = (ulong)((uint)uVar25 & 7);
      if (7 < uVar25) {
        uVar25 = uVar25 & 0xfffffffffffffff8;
        do {
          pbVar35 = (byte *)(((((((((long)pbVar35 * 0x100000001b3 ^ (ulong)*pbVar20) * 0x100000001b3
                                  ^ (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) *
                                 0x100000001b3 ^ (ulong)pbVar20[3]) * 0x100000001b3 ^
                               (ulong)pbVar20[4]) * 0x100000001b3 ^ (ulong)pbVar20[5]) *
                              0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^ (ulong)pbVar20[7]
                            );
          pbVar20 = pbVar20 + 8;
          uVar25 = uVar25 - 8;
        } while (uVar25 != 0);
      }
      if (uVar36 != 0) {
        uVar25 = 0;
        do {
          pbVar35 = (byte *)((long)pbVar35 * 0x100000001b3 ^ (ulong)pbVar20[uVar25]);
          uVar25 = uVar25 + 1;
        } while (uVar36 != uVar25);
      }
    }
  }
  pbStack_658 = (byte *)0x0;
  pbStack_5b8 = pbVar35;
  func_0x0564b850(&pbStack_650,&pbStack_2c8);
  bStack_570 = 0;
  uStack_56f = 0;
  uStack_56a = 0;
  pbStack_578 = &UNK_0efff768;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar17 = pbStack_658;
  puVar17[1] = pbStack_650;
  puVar17[5] = uStack_630;
  puVar17[3] = pbStack_640;
  puVar17[4] = pbStack_638;
  pbStack_640 = (byte *)0x0;
  pbStack_638 = (byte *)0x0;
  uStack_630 = 0;
  puVar17[8] = uStack_618;
  puVar17[6] = uStack_628;
  puVar17[7] = uStack_620;
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  puVar17[0xb] = uStack_600;
  puVar17[9] = uStack_610;
  puVar17[10] = uStack_608;
  uStack_610 = 0;
  uStack_608 = 0;
  uStack_600 = 0;
  puVar17[0xe] = uStack_5e8;
  puVar17[0xc] = uStack_5f8;
  puVar17[0xd] = uStack_5f0;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  puVar17[0x11] = uStack_5d0;
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)uStack_5e0;
  *(undefined4 *)((long)puVar17 + 0x7c) = uStack_5e0._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_5d8;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_5d8._4_4_;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  bStack_570 = (byte)puVar17;
  uStack_56f = (undefined5)((ulong)puVar17 >> 8);
  uStack_56a = (undefined2)((ulong)puVar17 >> 0x30);
  lVar18 = func_0x05a578e0(uVar28,&pbStack_5b8,&pbStack_578);
  if (pbStack_578 != (byte *)0x0) {
    (**(code **)(pbStack_578 + 8))(&pbStack_578);
  }
  if ((uStack_5e0 & 1) != 0) {
    func_0x0412a280(uStack_5d0,uStack_5e0 & 0xfffffffffffffffe);
  }
  if ((uStack_5f8 & 1) != 0) {
    func_0x0412a280(uStack_5e8,uStack_5f8 & 0xfffffffffffffffe);
  }
  if ((uStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,uStack_610 & 0xfffffffffffffffe);
  }
  if ((uStack_628 & 1) != 0) {
    func_0x0412a280(uStack_618,uStack_628 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_640 & 1) != 0) {
    func_0x0412a280(uStack_630,(ulong)pbStack_640 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_5b0 & 1) != 0) {
    func_0x0412a280(pbStack_5a0,(ulong)uStack_5b0 & 0xfffffffffffffffe);
  }
  pbStack_658 = (byte *)0x0;
  pbStack_650 = (byte *)((ulong)pbStack_650 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_648,&pbStack_2c8);
  uStack_5b0 = (undefined8 *)0x0;
  pbStack_5b8 = &UNK_0efff780;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 *)(puVar17 + 1) = pbStack_650._0_1_;
  *puVar17 = pbStack_658;
  puVar17[2] = pbStack_648;
  puVar17[6] = uStack_628;
  puVar17[4] = pbStack_638;
  puVar17[5] = uStack_630;
  pbStack_638 = (byte *)0x0;
  uStack_630 = 0;
  uStack_628 = 0;
  puVar17[9] = uStack_610;
  puVar17[7] = uStack_620;
  puVar17[8] = uStack_618;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  puVar17[0xc] = uStack_5f8;
  puVar17[10] = uStack_608;
  puVar17[0xb] = uStack_600;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  puVar17[0xf] = uStack_5e0;
  puVar17[0xd] = uStack_5f0;
  puVar17[0xe] = uStack_5e8;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5e0 = 0;
  puVar17[0x12] = uStack_5c8;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_5d8;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_5d8._4_4_;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_5d0;
  *(undefined4 *)((long)puVar17 + 0x8c) = uStack_5d0._4_4_;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  ppbVar31 = (byte **)(lVar18 + 0x110);
  uStack_5b0 = puVar17;
  if (ppbVar31 == &pbStack_5b8) {
    func_0x0564b7b0(puVar17 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar17);
  }
  else {
    pbVar20 = &UNK_0efff780;
    if ((*ppbVar31 == (byte *)0x0) ||
       ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbVar20 = pbStack_5b8, pbStack_5b8 != (byte *)0x0))
    {
      (**(code **)pbVar20)(&pbStack_5b8,ppbVar31);
      pbVar20 = pbStack_5b8;
      pbStack_5b8 = (byte *)0x0;
      *ppbVar31 = pbVar20;
    }
    else {
      pbStack_5b8 = (byte *)0x0;
      *ppbVar31 = (byte *)0x0;
    }
  }
  if ((uStack_5d8 & 1) != 0) {
    func_0x0412a280(uStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
  }
  if ((uStack_5f0 & 1) != 0) {
    func_0x0412a280(uStack_5e0,uStack_5f0 & 0xfffffffffffffffe);
  }
  if ((uStack_608 & 1) != 0) {
    func_0x0412a280(uStack_5f8,uStack_608 & 0xfffffffffffffffe);
  }
  if ((uStack_620 & 1) != 0) {
    func_0x0412a280(uStack_610,uStack_620 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_638 & 1) != 0) {
    func_0x0412a280(uStack_628,(ulong)pbStack_638 & 0xfffffffffffffffe);
  }
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(pbStack_248,CONCAT44(uStack_254,uStack_258) & 0xfffffffffffffffe);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  if ((bStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,CONCAT71(uStack_287,bStack_288) & 0xfffffffffffffffe);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(uStack_290,CONCAT71(uStack_29f,bStack_2a0) & 0xfffffffffffffffe);
  }
  if ((bStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
  }
  if ((bStack_1f8 & 1) != 0) {
    func_0x0412a280(uStack_1e8,
                    CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,bStack_1f8)) & 0xfffffffffffffffe);
  }
  if ((bStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,
                    CONCAT53(uStack_335,CONCAT12(uStack_336,CONCAT11(uStack_337,bStack_338))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,
                    CONCAT53(uStack_31d,CONCAT12(uStack_31e,CONCAT11(uStack_31f,bStack_320))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,CONCAT71(uStack_4f7,bStack_4f8) & 0xfffffffffffffffe);
  }
  uVar28 = *param_1;
  uStack_562 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  bStack_570 = 0x1a;
  uStack_56f = 0x72746e6f63;
  uStack_56a = 0x6c6f;
  uStack_568 = 0x5f;
  uStack_567 = 0x7367616c66;
  pbStack_578 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_5b0 = (undefined8 *)0x0;
  pbStack_5b8 = &UNK_0efff990;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efff7a8;
  pbStack_658 = (byte *)0x0;
  pbStack_650 = (byte *)0x0;
  if (pbStack_5b8 == (byte *)0x0) {
    pbStack_658 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_5b8)(&pbStack_5b8,&pbStack_658);
    pbStack_658 = pbStack_5b8;
  }
  pbStack_5b8 = (byte *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  puStack_1d0 = param_1;
  func_0x04aa75f0(plVar19 + 0xe,&uStack_308,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar23 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0efff7f8;
  ppbVar31 = (byte **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (ppbVar31 != &pbStack_658) {
    if (pbStack_658 == (byte *)0x0) {
      pbVar20 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_658)(&pbStack_658,ppbVar31);
      pbVar20 = pbStack_658;
    }
    pbStack_658 = (byte *)0x0;
    *ppbVar31 = pbVar20;
  }
  puVar3 = (uint *)(plVar19 + 0x12);
  if (plVar23 != (long *)&DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar38 = (_DAT_0f551f60 & 1) != 0;
      lVar18 = 0xf551f61;
      if (bVar38) {
        lVar18 = _DAT_0f551f70;
      }
      uVar25 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar38) {
        uVar25 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar3,lVar18,uVar25);
    }
  }
  plVar32 = plVar19 + 1;
  plVar19[0x11] = _DAT_0f551f58;
  plVar19[0x15] = 0;
  if (pbStack_658 != (byte *)0x0) {
    (**(code **)(pbStack_658 + 8))(&pbStack_658);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar20[8] = 0;
  pbVar20[9] = 0;
  pbVar20[10] = 0;
  pbVar20[0xb] = 0;
  pbVar20[0xc] = 0;
  pbVar20[0xd] = 0;
  pbVar20[0xe] = 0;
  pbVar20[0xf] = 0;
  pbVar20[0x10] = 0;
  pbVar20[0x11] = 0;
  pbVar20[0x12] = 0;
  pbVar20[0x13] = 0;
  pbVar20[0x14] = 0;
  pbVar20[0x15] = 0;
  pbVar20[0x16] = 0;
  pbVar20[0x17] = 0;
  *(undefined **)pbVar20 = &UNK_0efff8f0;
  pbVar20[0x30] = 0;
  pbVar20[0x31] = 0;
  pbVar20[0x32] = 0;
  pbVar20[0x33] = 0;
  pbVar20[0x34] = 0;
  pbVar20[0x35] = 0;
  pbVar20[0x36] = 0;
  pbVar20[0x37] = 0;
  pbVar20[0x38] = 0;
  pbVar20[0x39] = 0;
  pbVar20[0x3a] = 0;
  pbVar20[0x3b] = 0;
  pbVar20[0x3c] = 0;
  pbVar20[0x3d] = 0;
  pbVar20[0x3e] = 0;
  pbVar20[0x3f] = 0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0efff940;
  *(long **)(pbVar20 + 0x70) = plVar19 + 4;
  *(long **)(pbVar20 + 0x78) = plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  pbStack_658 = pbVar20 + 0x20;
  pbStack_650 = pbVar20;
  puVar21 = (undefined4 *)func_0x05a57e60(uVar28,&pbStack_578);
  plVar22 = *(long **)(puVar21 + 0x24);
  if (plVar22 < *(long **)(puVar21 + 0x26)) {
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 != plVar23) {
      if ((*puVar3 & 1) == 0) {
        plVar22[3] = plVar19[0x14];
        lVar18 = plVar19[0x13];
        plVar22[1] = *(long *)puVar3;
        plVar22[2] = lVar18;
      }
      else {
        func_0x04885070(plVar22 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar22 = *plVar23;
    plVar22[5] = (long)(pbVar20 + 0x20);
    plVar22[6] = (long)pbVar20;
    LOCK();
    *(long *)(pbVar20 + 8) = *(long *)(pbVar20 + 8) + 1;
    UNLOCK();
    plVar22 = plVar22 + 7;
    *(long **)(puVar21 + 0x24) = plVar22;
  }
  else {
    plVar22 = (long *)func_0x05a59cb0(puVar21 + 0x22,plVar23,&pbStack_658);
  }
  *(long **)(puVar21 + 0x24) = plVar22;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar22 = plVar23 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  pbVar20 = pbStack_650;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (pbStack_650 != (byte *)0x0) {
    LOCK();
    pbVar35 = pbStack_650 + 8;
    lVar18 = *(long *)pbVar35;
    *(long *)pbVar35 = *(long *)pbVar35 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)pbStack_650 + 0x10))(pbStack_650);
      func_0x0412c2d0(pbVar20);
    }
  }
  LOCK();
  lVar18 = *plVar32;
  *plVar32 = *plVar32 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar18 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar18 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (pbStack_5b8 != (byte *)0x0) {
    (**(code **)(pbStack_5b8 + 8))(&pbStack_5b8);
  }
  if ((bStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,
                    CONCAT26(uStack_56a,CONCAT51(uStack_56f,bStack_570)) & 0xfffffffffffffffe);
  }
  uStack_300 = 0;
  bStack_570 = 0;
  uStack_56f = 0;
  uStack_56a = 0;
  uStack_308 = 0;
  pbStack_578 = &UNK_0efffbe0;
  plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar23 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_658 = pbStack_578;
  plVar23[1] = 0;
  plVar23[2] = 0;
  *plVar23 = (long)&UNK_0efff9b8;
  pbStack_650 = (byte *)0x0;
  pbStack_578 = (byte *)0x0;
  plVar23[4] = (long)&UNK_0f2ccd78;
  plVar23[5] = 0;
  plVar23[6] = 0;
  plVar23[7] = 0;
  plVar23[8] = 0;
  plVar23[9] = 0;
  plVar23[10] = 0;
  plVar23[0xb] = 0;
  plVar23[0xc] = 0;
  *(undefined1 *)(plVar23 + 0xd) = 0;
  func_0x04aa75f0(plVar23 + 0xe,&uStack_5b9,&UNK_01254d89);
  *(undefined1 *)(plVar23 + 0x10) = 0;
  pbVar20 = (byte *)(plVar23 + 0x11);
  plVar23[0x11] = 0;
  plVar23[0x12] = 0;
  plVar23[0x13] = 0;
  plVar23[0x14] = 0;
  plVar23[0x15] = 0;
  plVar23[0x16] = 0;
  plVar23[0x17] = 0xffffffff;
  plVar23[0x26] = 0;
  plVar23[0x27] = 0;
  plVar23[0x18] = 0;
  plVar23[0x19] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x1c] = 0;
  plVar23[0x1d] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1f] = 0;
  plVar23[4] = (long)&UNK_0efffa08;
  plVar23[0x2e] = 0;
  plVar23[0x2f] = 0;
  plVar23[0x30] = 0;
  plVar23[0x31] = 0;
  plVar23[0x32] = 0;
  plVar23[0x33] = 0;
  plVar23[0x34] = 0;
  *(undefined4 *)(plVar23 + 0x35) = 0x3f800000;
  pbVar35 = (byte *)(plVar23 + 0x36);
  plVar23[0x36] = 0;
  plVar23[0x37] = 0;
  if (pbStack_658 == (byte *)0x0) {
    pbVar24 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_658)(&pbStack_658,pbVar35);
    pbVar24 = pbStack_658;
  }
  pbStack_658 = (byte *)0x0;
  plVar23[0x36] = (long)pbVar24;
  *(undefined1 *)(plVar23 + 0x3e) = 0;
  puStack_390 = (uint *)(plVar23 + 0x12);
  if (pbVar20 != &DAT_0f552138) {
    if ((*puStack_390 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar23[0x14] = _DAT_0f552150;
        uVar12 = uRam000000000f55214c;
        uVar11 = _DAT_0f552148;
        uVar10 = uRam000000000f552144;
        *puStack_390 = _DAT_0f552140;
        *(undefined4 *)((long)plVar23 + 0x94) = uVar10;
        *(undefined4 *)(plVar23 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar23 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_390,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar38 = (_DAT_0f552140 & 1) != 0;
      lVar18 = 0xf552141;
      if (bVar38) {
        lVar18 = _DAT_0f552150;
      }
      uVar25 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar38) {
        uVar25 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_390,lVar18,uVar25);
    }
  }
  plVar23[0x11] = _DAT_0f552138;
  plVar23[0x15] = 0;
  if (pbStack_658 != (byte *)0x0) {
    (**(code **)(pbStack_658 + 8))(&pbStack_658);
  }
  plVar32 = plVar23 + 1;
  if (pbStack_578 != (byte *)0x0) {
    (**(code **)(pbStack_578 + 8))(&pbStack_578);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  plStack_1d8 = plVar32;
  pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar24 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar24[8] = 0;
  pbVar24[9] = 0;
  pbVar24[10] = 0;
  pbVar24[0xb] = 0;
  pbVar24[0xc] = 0;
  pbVar24[0xd] = 0;
  pbVar24[0xe] = 0;
  pbVar24[0xf] = 0;
  pbVar24[0x10] = 0;
  pbVar24[0x11] = 0;
  pbVar24[0x12] = 0;
  pbVar24[0x13] = 0;
  pbVar24[0x14] = 0;
  pbVar24[0x15] = 0;
  pbVar24[0x16] = 0;
  pbVar24[0x17] = 0;
  *(undefined **)pbVar24 = &UNK_0efffae8;
  pbVar24[0x30] = 0;
  pbVar24[0x31] = 0;
  pbVar24[0x32] = 0;
  pbVar24[0x33] = 0;
  pbVar24[0x34] = 0;
  pbVar24[0x35] = 0;
  pbVar24[0x36] = 0;
  pbVar24[0x37] = 0;
  pbVar24[0x38] = 0;
  pbVar24[0x39] = 0;
  pbVar24[0x3a] = 0;
  pbVar24[0x3b] = 0;
  pbVar24[0x3c] = 0;
  pbVar24[0x3d] = 0;
  pbVar24[0x3e] = 0;
  pbVar24[0x3f] = 0;
  *(undefined **)(pbVar24 + 0x20) = &UNK_0efffb38;
  *(long **)(pbVar24 + 0x70) = plVar23 + 4;
  *(long **)(pbVar24 + 0x78) = plVar23;
  LOCK();
  plVar23[1] = plVar23[1] + 1;
  UNLOCK();
  pbStack_388 = pbVar24 + 8;
  puVar6 = (undefined4 *)plVar19[0x1c];
  puVar5 = (undefined4 *)plVar19[0x1b];
  for (puVar21 = puVar5; puVar21 != puVar6; puVar21 = puVar21 + 0x2a) {
    if ((*(long *)(puVar21 + 0x1e) == 0) && (*(long *)(puVar21 + 0x20) == -1)) goto LAB_05a453d5;
  }
  if ((undefined4 *)plVar19[0x1d] <= puVar6) {
    pbVar37 = (byte *)((long)puVar6 - (long)puVar5);
    uVar25 = ((long)pbVar37 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar25) goto LAB_05a47051;
    lVar18 = plVar19[0x1d] - (long)puVar5 >> 3;
    uVar36 = lVar18 * -0x6186186186186186;
    if (uVar25 < uVar36) {
      uVar25 = uVar36;
    }
    pbVar33 = (byte *)(plVar19 + 0x1b);
    if (0xc30c30c30c30c2 < (ulong)(lVar18 * -0x30c30c30c30c30c3)) {
      uVar25 = 0x186186186186186;
    }
    pbStack_638 = pbVar33;
    if (uVar25 == 0) {
      pbVar35 = (byte *)0x0;
LAB_05a4518b:
      pbStack_650 = pbVar37 + (long)pbVar35;
      pbStack_640 = pbVar35 + uVar25 * 0xa8;
      pbStack_658 = pbVar35;
      pbStack_648 = pbStack_650;
      pbStack_530 = pbVar33;
      func_0x05a77530(pbStack_650);
      pbVar37 = pbStack_648 + 0xa8;
      lVar18 = plVar19[0x1b];
      lVar7 = plVar19[0x1c];
      pbVar35 = pbStack_650 + (lVar18 - lVar7);
      if (lVar18 != lVar7) {
        lVar34 = 0;
        do {
          uVar28 = ((undefined8 *)(lVar18 + lVar34))[1];
          *(undefined8 *)(pbVar35 + lVar34) = *(undefined8 *)(lVar18 + lVar34);
          *(undefined8 *)(pbVar35 + lVar34 + 8) = uVar28;
          *(undefined8 *)(lVar18 + lVar34) = 0;
          ((undefined8 *)(lVar18 + lVar34))[1] = 0;
          pbVar33 = pbVar35 + lVar34 + 0x20;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          pbVar33[8] = 0;
          pbVar33[9] = 0;
          pbVar33[10] = 0;
          pbVar33[0xb] = 0;
          pbVar33[0xc] = 0;
          pbVar33[0xd] = 0;
          pbVar33[0xe] = 0;
          pbVar33[0xf] = 0;
          pbVar33 = pbVar35 + lVar34 + 0x10;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          pbVar33[8] = 0;
          pbVar33[9] = 0;
          pbVar33[10] = 0;
          pbVar33[0xb] = 0;
          pbVar33[0xc] = 0;
          pbVar33[0xd] = 0;
          pbVar33[0xe] = 0;
          pbVar33[0xf] = 0;
          pbVar33 = pbVar35 + lVar34 + 0x30;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          *(undefined8 *)(pbVar35 + lVar34 + 0x28) = *(undefined8 *)(lVar18 + 0x28 + lVar34);
          puVar21 = (undefined4 *)(lVar18 + 0x18 + lVar34);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar33 = pbVar35 + lVar34 + 0x18;
          *(undefined4 *)pbVar33 = *puVar21;
          *(undefined4 *)(pbVar33 + 4) = uVar10;
          *(undefined4 *)(pbVar33 + 8) = uVar11;
          *(undefined4 *)(pbVar33 + 0xc) = uVar12;
          *(undefined2 *)(lVar18 + 0x18 + lVar34) = 0;
          *(undefined8 *)(pbVar35 + lVar34 + 0x10) = *(undefined8 *)(lVar18 + 0x10 + lVar34);
          func_0x04167a20(pbVar35 + lVar34 + 0x38,lVar18 + lVar34 + 0x38);
          puVar17 = (undefined8 *)(lVar18 + 0x40 + lVar34);
          uVar28 = puVar17[1];
          *(undefined8 *)(pbVar35 + lVar34 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar35 + lVar34 + 0x40 + 8) = uVar28;
          puVar17 = (undefined8 *)(lVar18 + 0x50 + lVar34);
          uVar28 = puVar17[1];
          *(undefined8 *)(pbVar35 + lVar34 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar35 + lVar34 + 0x50 + 8) = uVar28;
          puVar17 = (undefined8 *)(lVar18 + 0x60 + lVar34);
          uVar28 = puVar17[1];
          *(undefined8 *)(pbVar35 + lVar34 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar35 + lVar34 + 0x60 + 8) = uVar28;
          puVar17 = (undefined8 *)(lVar18 + 0x60 + lVar34);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar35 + lVar34 + 0x70) = *(undefined8 *)(lVar18 + 0x70 + lVar34);
          puVar17 = (undefined8 *)(lVar18 + 0x78 + lVar34);
          uVar28 = puVar17[1];
          *(undefined8 *)(pbVar35 + lVar34 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar35 + lVar34 + 0x78 + 8) = uVar28;
          pbVar33 = pbVar35 + lVar34 + 0x88;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          pbVar33[8] = 0;
          pbVar33[9] = 0;
          pbVar33[10] = 0;
          pbVar33[0xb] = 0;
          pbVar33[0xc] = 0;
          pbVar33[0xd] = 0;
          pbVar33[0xe] = 0;
          pbVar33[0xf] = 0;
          pbVar33 = pbVar35 + lVar34 + 0x98;
          pbVar33[0] = 0;
          pbVar33[1] = 0;
          pbVar33[2] = 0;
          pbVar33[3] = 0;
          pbVar33[4] = 0;
          pbVar33[5] = 0;
          pbVar33[6] = 0;
          pbVar33[7] = 0;
          puVar21 = (undefined4 *)(lVar18 + 0x88 + lVar34);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          pbVar33 = pbVar35 + lVar34 + 0x88;
          *(undefined4 *)pbVar33 = *puVar21;
          *(undefined4 *)(pbVar33 + 4) = uVar10;
          *(undefined4 *)(pbVar33 + 8) = uVar11;
          *(undefined4 *)(pbVar33 + 0xc) = uVar12;
          *(undefined8 *)(pbVar35 + lVar34 + 0x98) = *(undefined8 *)(lVar18 + 0x98 + lVar34);
          puVar17 = (undefined8 *)(lVar18 + 0x88 + lVar34);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar18 + 0x98 + lVar34) = 0;
          *(undefined2 *)(pbVar35 + lVar34 + 0xa0) = *(undefined2 *)(lVar18 + 0xa0 + lVar34);
          lVar1 = lVar18 + lVar34;
          lVar34 = lVar34 + 0xa8;
        } while (lVar1 + 0xa8 != lVar7);
        do {
          func_0x05a73e30(lVar18);
          lVar18 = lVar18 + 0xa8;
        } while (lVar18 != lVar7);
        lVar18 = *(long *)pbStack_530;
      }
      plVar19[0x1b] = (long)pbVar35;
      plVar19[0x1c] = (long)pbVar37;
      lVar7 = plVar19[0x1d];
      plVar19[0x1d] = (long)pbStack_640;
      if (lVar18 != 0) {
        func_0x0412a280(lVar18,lVar7 - lVar18);
      }
      goto LAB_05a45369;
    }
    if (uVar25 < 0x186186186186187) {
      pbVar35 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25 * 0xa8);
      if (pbVar35 == (byte *)0x0) {
        func_0x0eec74c0(uVar25 * 0xa8,0);
        pbVar35 = (byte *)0x0;
      }
      goto LAB_05a4518b;
    }
LAB_05a47047:
    FUN_04882eb0();
LAB_05a4704c:
    func_0x05a77770();
    pbVar24 = pbVar33;
LAB_05a47051:
    uVar28 = func_0x05a776a0();
    if ((*pbVar24 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar37 + 0x18),*(ulong *)(pbVar37 + 8) & 0xfffffffffffffffe);
    }
    plVar23[0x12] = (long)pbVar37;
    plVar23 = plVar19 + 1;
    LOCK();
    lVar18 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    LOCK();
    lVar18 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)pbVar35 + 0x10))(pbVar35);
      func_0x0412c2d0(pbVar35);
    }
    LOCK();
    lVar18 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)pbVar35 + 0x10))(pbVar35);
      func_0x0412c2d0(pbVar35);
    }
    if (pbStack_5b8 != (byte *)0x0) {
      (**(code **)(pbStack_5b8 + 8))(&pbStack_5b8);
    }
    func_0x05610960(&pbStack_650);
    if ((uStack_300 & 1) != 0) {
      func_0x0412a280(pbStack_2f0,uStack_300 & 0xfffffffffffffffe);
    }
    func_0x05610960(auStack_1c8);
    if ((bStack_240 & 1) != 0) {
      func_0x0412a280(uStack_230,
                      CONCAT62(uStack_23e,CONCAT11(uStack_23f,bStack_240)) & 0xfffffffffffffffe);
    }
    if ((bStack_380 & 1) != 0) {
      func_0x0412a280(uStack_370,
                      CONCAT53(uStack_37d,CONCAT12(uStack_37e,CONCAT11(uStack_37f,bStack_380))) &
                      0xfffffffffffffffe);
    }
    if ((uStack_4e0 & 1) != 0) {
      func_0x0412a280(puStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
    }
    if ((uStack_4c8 & 1) != 0) {
      func_0x0412a280(puStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar28);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x05a77530(puVar6);
  pbVar37 = (byte *)(puVar6 + 0x2a);
  plVar19[0x1c] = (long)pbVar37;
LAB_05a45369:
  plVar19[0x1c] = (long)pbVar37;
  pbVar35 = *(byte **)(pbVar37 + -0xa8);
  if ((*pbVar35 & 1) == 0) {
    *pbVar35 = 0x26;
    pbVar35 = pbVar35 + 1;
  }
  else {
    pbVar35[8] = 0x13;
    pbVar35[9] = 0;
    pbVar35[10] = 0;
    pbVar35[0xb] = 0;
    pbVar35[0xc] = 0;
    pbVar35[0xd] = 0;
    pbVar35[0xe] = 0;
    pbVar35[0xf] = 0;
    pbVar35 = *(byte **)(pbVar35 + 0x10);
  }
  uVar12 = _UNK_01494d69;
  uVar11 = _UNK_01494d65;
  uVar10 = _UNK_01494d61;
  *(undefined4 *)pbVar35 = _DAT_01494d5d;
  *(undefined4 *)(pbVar35 + 4) = uVar10;
  *(undefined4 *)(pbVar35 + 8) = uVar11;
  *(undefined4 *)(pbVar35 + 0xc) = uVar12;
  pbVar35[0xf] = 0x65;
  pbVar35[0x10] = 0x6e;
  pbVar35[0x11] = 0x74;
  pbVar35[0x12] = 0x3e;
  pbVar35[0x13] = 0;
  lVar18 = plVar19[0x1c];
  puVar21 = (undefined4 *)(lVar18 - 0xa8);
  *(char *)(lVar18 + -7) = (char)plVar19[0x10];
  *(undefined8 *)(lVar18 + -0x30) = 0;
  *(undefined8 *)(lVar18 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar18 + -8) = 0;
LAB_05a453d5:
  pbVar37 = pbVar24 + 0x20;
  pbVar35 = *(byte **)(puVar21 + 0x24);
  if (pbVar35 < *(byte **)(puVar21 + 0x26)) {
    pbVar35[0x10] = 0;
    pbVar35[0x11] = 0;
    pbVar35[0x12] = 0;
    pbVar35[0x13] = 0;
    pbVar35[0x14] = 0;
    pbVar35[0x15] = 0;
    pbVar35[0x16] = 0;
    pbVar35[0x17] = 0;
    pbVar35[0x18] = 0;
    pbVar35[0x19] = 0;
    pbVar35[0x1a] = 0;
    pbVar35[0x1b] = 0;
    pbVar35[0x1c] = 0;
    pbVar35[0x1d] = 0;
    pbVar35[0x1e] = 0;
    pbVar35[0x1f] = 0;
    pbVar35[0] = 0;
    pbVar35[1] = 0;
    pbVar35[2] = 0;
    pbVar35[3] = 0;
    pbVar35[4] = 0;
    pbVar35[5] = 0;
    pbVar35[6] = 0;
    pbVar35[7] = 0;
    pbVar35[8] = 0;
    pbVar35[9] = 0;
    pbVar35[10] = 0;
    pbVar35[0xb] = 0;
    pbVar35[0xc] = 0;
    pbVar35[0xd] = 0;
    pbVar35[0xe] = 0;
    pbVar35[0xf] = 0;
    pbVar35[0x20] = 0;
    pbVar35[0x21] = 0;
    pbVar35[0x22] = 0;
    pbVar35[0x23] = 0;
    pbVar35[0x24] = 0;
    pbVar35[0x25] = 0;
    pbVar35[0x26] = 0;
    pbVar35[0x27] = 0;
    if (pbVar35 != pbVar20) {
      if ((*puStack_390 & 1) == 0) {
        *(undefined8 *)(pbVar35 + 0x18) = *(undefined8 *)(puStack_390 + 4);
        uVar28 = *(undefined8 *)(puStack_390 + 2);
        *(undefined8 *)(pbVar35 + 8) = *(undefined8 *)puStack_390;
        *(undefined8 *)(pbVar35 + 0x10) = uVar28;
      }
      else {
        func_0x04885070(pbVar35 + 8,plVar23[0x14],plVar23[0x13]);
      }
    }
    *(undefined8 *)pbVar35 = *(undefined8 *)pbVar20;
    *(byte **)(pbVar35 + 0x28) = pbVar37;
    *(byte **)(pbVar35 + 0x30) = pbVar24;
    LOCK();
    *(long *)(pbVar24 + 8) = *(long *)(pbVar24 + 8) + 1;
    UNLOCK();
    pbVar35 = pbVar35 + 0x38;
    *(byte **)(puVar21 + 0x24) = pbVar35;
  }
  else {
    pbVar35 = pbVar35 + -*(long *)(puVar21 + 0x22);
    pbVar33 = (byte *)(((long)pbVar35 >> 3) * 0x6db6db6db6db6db7 + 1);
    if ((byte *)0x492492492492492 < pbVar33) goto LAB_05a4704c;
    lVar18 = (long)*(byte **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
    pbVar2 = (byte *)(lVar18 * -0x2492492492492492);
    if (pbVar33 < pbVar2) {
      pbVar33 = pbVar2;
    }
    pbStack_638 = (byte *)(puVar21 + 0x22);
    if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
      pbVar33 = (byte *)0x492492492492492;
    }
    pbStack_530 = pbVar37;
    pbStack_1e0 = pbStack_638;
    if (pbVar33 == (byte *)0x0) {
      pbVar37 = (byte *)0x0;
    }
    else {
      if ((byte *)0x492492492492492 < pbVar33) goto LAB_05a47047;
      pbVar37 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar33 * 0x38);
      if (pbVar37 == (byte *)0x0) {
        func_0x0eec74c0((long)pbVar33 * 0x38,0);
        pbVar37 = (byte *)0x0;
      }
    }
    pbVar2 = pbVar37 + (long)pbVar35;
    pbStack_640 = pbVar37 + (long)pbVar33 * 0x38;
    pbVar33 = pbVar37 + 0x10 + (long)pbVar35;
    pbVar33[0] = 0;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    pbVar33[8] = 0;
    pbVar33[9] = 0;
    pbVar33[10] = 0;
    pbVar33[0xb] = 0;
    pbVar33[0xc] = 0;
    pbVar33[0xd] = 0;
    pbVar33[0xe] = 0;
    pbVar33[0xf] = 0;
    pbVar33 = pbVar37 + (long)pbVar35;
    pbVar33[0] = 0;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    pbVar33[8] = 0;
    pbVar33[9] = 0;
    pbVar33[10] = 0;
    pbVar33[0xb] = 0;
    pbVar33[0xc] = 0;
    pbVar33[0xd] = 0;
    pbVar33[0xe] = 0;
    pbVar33[0xf] = 0;
    pbVar33 = pbVar37 + 0x20 + (long)pbVar35;
    pbVar33[0] = 0;
    pbVar33[1] = 0;
    pbVar33[2] = 0;
    pbVar33[3] = 0;
    pbVar33[4] = 0;
    pbVar33[5] = 0;
    pbVar33[6] = 0;
    pbVar33[7] = 0;
    pbStack_648 = pbVar2;
    pbStack_658 = pbVar37;
    pbStack_650 = pbVar2;
    if (pbVar2 != pbVar20) {
      if ((*puStack_390 & 1) == 0) {
        *(undefined8 *)(pbVar35 + (long)(pbVar37 + 0x18)) = *(undefined8 *)(puStack_390 + 4);
        uVar14 = puStack_390[1];
        uVar15 = puStack_390[2];
        uVar16 = puStack_390[3];
        *(uint *)(pbVar35 + (long)(pbVar37 + 8)) = *puStack_390;
        *(uint *)(pbVar35 + (long)(pbVar37 + 0xc)) = uVar14;
        *(uint *)(pbVar35 + (long)(pbVar37 + 0x10)) = uVar15;
        *(uint *)(pbVar35 + (long)(pbVar37 + 0x14)) = uVar16;
      }
      else {
        func_0x04885070(pbVar35 + (long)(pbVar37 + 8),plVar23[0x14],plVar23[0x13]);
      }
    }
    *(undefined8 *)pbVar2 = *(undefined8 *)pbVar20;
    *(byte **)(pbVar2 + 0x28) = pbStack_530;
    *(byte **)(pbVar2 + 0x30) = pbVar24;
    LOCK();
    *(long *)(pbVar24 + 8) = *(long *)(pbVar24 + 8) + 1;
    UNLOCK();
    pbStack_648 = pbStack_648 + 0x38;
    puVar17 = *(undefined8 **)(puVar21 + 0x22);
    puVar8 = *(undefined8 **)(puVar21 + 0x24);
    pbVar20 = pbStack_650 + ((long)puVar17 - (long)puVar8);
    pbVar35 = pbVar20;
    puVar29 = puVar17;
    if ((long)puVar17 - (long)puVar8 != 0) {
      do {
        pbVar35[0x10] = 0;
        pbVar35[0x11] = 0;
        pbVar35[0x12] = 0;
        pbVar35[0x13] = 0;
        pbVar35[0x14] = 0;
        pbVar35[0x15] = 0;
        pbVar35[0x16] = 0;
        pbVar35[0x17] = 0;
        pbVar35[0x18] = 0;
        pbVar35[0x19] = 0;
        pbVar35[0x1a] = 0;
        pbVar35[0x1b] = 0;
        pbVar35[0x1c] = 0;
        pbVar35[0x1d] = 0;
        pbVar35[0x1e] = 0;
        pbVar35[0x1f] = 0;
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        pbVar35[8] = 0;
        pbVar35[9] = 0;
        pbVar35[10] = 0;
        pbVar35[0xb] = 0;
        pbVar35[0xc] = 0;
        pbVar35[0xd] = 0;
        pbVar35[0xe] = 0;
        pbVar35[0xf] = 0;
        pbVar35[0x20] = 0;
        pbVar35[0x21] = 0;
        pbVar35[0x22] = 0;
        pbVar35[0x23] = 0;
        pbVar35[0x24] = 0;
        pbVar35[0x25] = 0;
        pbVar35[0x26] = 0;
        pbVar35[0x27] = 0;
        *(undefined8 *)(pbVar35 + 0x18) = puVar29[3];
        uVar28 = puVar29[2];
        *(undefined8 *)(pbVar35 + 8) = puVar29[1];
        *(undefined8 *)(pbVar35 + 0x10) = uVar28;
        *(undefined2 *)(puVar29 + 1) = 0;
        *(undefined8 *)pbVar35 = *puVar29;
        uVar10 = *(undefined4 *)((long)puVar29 + 0x2c);
        uVar11 = *(undefined4 *)(puVar29 + 6);
        uVar12 = *(undefined4 *)((long)puVar29 + 0x34);
        *(undefined4 *)(pbVar35 + 0x28) = *(undefined4 *)(puVar29 + 5);
        *(undefined4 *)(pbVar35 + 0x2c) = uVar10;
        *(undefined4 *)(pbVar35 + 0x30) = uVar11;
        *(undefined4 *)(pbVar35 + 0x34) = uVar12;
        puVar29[5] = 0;
        puVar29[6] = 0;
        puVar29 = puVar29 + 7;
        pbVar35 = pbVar35 + 0x38;
      } while (puVar29 != puVar8);
      do {
        plVar32 = (long *)puVar17[6];
        if (plVar32 == (long *)0x0) {
LAB_05a45694:
          bVar4 = *(byte *)(puVar17 + 1);
        }
        else {
          LOCK();
          plVar22 = plVar32 + 1;
          lVar18 = *plVar22;
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (lVar18 != 0) goto LAB_05a45694;
          (**(code **)(*plVar32 + 0x10))(plVar32);
          func_0x0412c2d0(plVar32);
          bVar4 = *(byte *)(puVar17 + 1);
        }
        if ((bVar4 & 1) != 0) {
          func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
        }
        puVar17 = puVar17 + 7;
      } while (puVar17 != puVar8);
      puVar17 = *(undefined8 **)pbStack_1e0;
    }
    pbVar35 = pbStack_648;
    *(byte **)(puVar21 + 0x22) = pbVar20;
    *(byte **)(puVar21 + 0x24) = pbStack_648;
    lVar18 = *(long *)(puVar21 + 0x26);
    *(byte **)(puVar21 + 0x26) = pbStack_640;
    if (puVar17 != (undefined8 *)0x0) {
      func_0x0412a280(puVar17,lVar18 - (long)puVar17);
    }
  }
  *(byte **)(puVar21 + 0x24) = pbVar35;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar32 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar32 = *plVar32 + 1;
    UNLOCK();
  }
  plVar32 = (long *)plVar23[0xf];
  *(undefined4 *)(plVar23 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar23 + 0x74) = uVar11;
  *(undefined4 *)(plVar23 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar23 + 0x7c) = uVar13;
  if (plVar32 != (long *)0x0) {
    LOCK();
    plVar22 = plVar32 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
      func_0x0412c2d0(plVar32);
    }
  }
  *(undefined1 *)(plVar23 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  LOCK();
  lVar18 = *(long *)pbStack_388;
  *(long *)pbStack_388 = *(long *)pbStack_388 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*(long *)pbVar24 + 0x10))(pbVar24);
    func_0x0412c2d0(pbVar24);
  }
  puVar17 = puStack_1d0;
  plVar32 = plStack_1d8;
  LOCK();
  lVar18 = *plStack_1d8;
  *plStack_1d8 = *plStack_1d8 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
    LOCK();
    lVar18 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar18 = *plStack_1d8;
    *plStack_1d8 = *plStack_1d8 + -1;
    UNLOCK();
  }
  if (lVar18 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    func_0x0412c2d0(plVar23);
  }
  if (uStack_308 != 0) {
    (**(code **)(uStack_308 + 8))(&uStack_308);
  }
  ppbVar31 = (byte **)(plVar19 + 0x26);
  pbStack_650 = (byte *)0x0;
  pbStack_658 = &UNK_0efffbf8;
  if (ppbVar31 != &pbStack_658) {
    if ((*ppbVar31 == (byte *)0x0) ||
       ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbStack_658 != (byte *)0x0)) {
      (**(code **)pbStack_658)(&pbStack_658,ppbVar31);
      pbVar20 = pbStack_658;
    }
    else {
      pbVar20 = (byte *)0x0;
    }
    *ppbVar31 = pbVar20;
  }
  if ((uStack_480 & 1) != 0) {
    func_0x0412a280(puStack_470,uStack_480 & 0xfffffffffffffffe);
  }
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  (**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,&uStack_3a8);
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  bStack_510 = 0x2a;
  uStack_50f = _DAT_014c9e98;
  uStack_50b = _UNK_014c9e9c;
  uStack_507 = _UNK_014c9ea0;
  uStack_503 = (undefined1)_UNK_014c9ea4;
  uStack_502 = 0x656d;
  uStack_500 = 0x5f;
  uStack_4ff = 0x65676e6172;
  uStack_4fa = 0;
  puStack_488 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_488 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar28 = _UNK_013c589d;
  uStack_498 = 0x31;
  uStack_490 = 0x29;
  *(ulong *)((long)puStack_488 + 0x19) = CONCAT17(UNK_013c589c,_DAT_013c5895);
  *(undefined8 *)((long)puStack_488 + 0x21) = uVar28;
  uVar28 = CONCAT71(_DAT_013c5895,UNK_013c5894);
  *(undefined8 *)(puStack_488 + 4) = _DAT_013c588c;
  *(undefined8 *)(puStack_488 + 6) = uVar28;
  uVar12 = _UNK_013c5888;
  uVar11 = _UNK_013c5884;
  uVar10 = _UNK_013c5880;
  *puStack_488 = _DAT_013c587c;
  puStack_488[1] = uVar10;
  puStack_488[2] = uVar11;
  puStack_488[3] = uVar12;
  *(undefined1 *)((long)puStack_488 + 0x29) = 0;
  bStack_350 = 2;
  uStack_34f = 0x30;
  uStack_34e = 0;
  bStack_210 = 0;
  uStack_20f = 0;
  func_0x0576f7a0(auStack_b8,param_2,&bStack_510,3,&uStack_498,0,&bStack_350,&bStack_210);
  plVar19 = (long *)func_0x05a47ac0(*puVar17,8,auStack_b8);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_3c8,&uStack_3e8);
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(uStack_38,CONCAT71(uStack_47,bStack_48) & 0xfffffffffffffffe);
  }
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
  }
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
  }
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
  }
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT62(uStack_20e,CONCAT11(uStack_20f,bStack_210)) & 0xfffffffffffffffe);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(uStack_340,
                    CONCAT53(uStack_34d,CONCAT12(uStack_34e,CONCAT11(uStack_34f,bStack_350))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(puStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if ((bStack_510 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_4f9,CONCAT16(uStack_4fa,CONCAT51(uStack_4ff,uStack_500))),
                    CONCAT35((undefined3)uStack_50b,CONCAT41(uStack_50f,bStack_510)) &
                    0xfffffffffffffffe);
  }
  bStack_528 = 0x14;
  uStack_527 = 0x61725f6e727574;
  uStack_520 = 0x6e;
  uStack_51f = 0x6567;
  uStack_51d = 0;
  puStack_4a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_4a0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar28 = _UNK_01448308;
  uStack_4b0 = 0x21;
  uStack_4a8 = 0x1e;
  *(ulong *)((long)puStack_4a0 + 0xe) = CONCAT62(_UNK_01448302,_DAT_01448300);
  *(undefined8 *)((long)puStack_4a0 + 0x16) = uVar28;
  uVar12 = _UNK_014482fa;
  uVar11 = _UNK_014482f6;
  uVar10 = CONCAT22(_DAT_01448300,_UNK_014482fe);
  *puStack_4a0 = _DAT_014482f2;
  puStack_4a0[1] = uVar11;
  puStack_4a0[2] = uVar12;
  puStack_4a0[3] = uVar10;
  *(undefined1 *)((long)puStack_4a0 + 0x1e) = 0;
  bStack_368 = 2;
  uStack_367 = 0x30;
  uStack_366 = 0;
  bStack_228 = 0;
  uStack_227 = 0;
  func_0x0576f7a0(auStack_140,param_2,&bStack_528,0x168,&uStack_4b0,0,&bStack_368,&bStack_228);
  plVar19 = (long *)func_0x05a47ac0(*puVar17,0xc,auStack_140);
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  (**(code **)(*plVar19 + 0x18))(plVar19,&uStack_408,&uStack_428);
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if ((bStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT71(uStack_cf,bStack_d0) & 0xfffffffffffffffe);
  }
  if ((bStack_e8 & 1) != 0) {
    func_0x0412a280(uStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
  }
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
  }
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
  }
  if ((bStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,
                    CONCAT62(uStack_226,CONCAT11(uStack_227,bStack_228)) & 0xfffffffffffffffe);
  }
  if ((bStack_368 & 1) != 0) {
    func_0x0412a280(uStack_358,
                    CONCAT53(uStack_365,CONCAT12(uStack_366,CONCAT11(uStack_367,bStack_368))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_4b0 & 1) != 0) {
    func_0x0412a280(puStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
  }
  if ((bStack_528 & 1) != 0) {
    func_0x0412a280(uStack_518,CONCAT71(uStack_527,bStack_528) & 0xfffffffffffffffe);
  }
  puStack_4b8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_4b8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar28 = _UNK_013fa06b;
  uStack_4c8 = 0x21;
  uStack_4c0 = 0x19;
  *(ulong *)((long)puStack_4b8 + 9) = CONCAT17(UNK_013fa06a,CONCAT43(_UNK_013fa066,_DAT_013fa063));
  *(undefined8 *)((long)puStack_4b8 + 0x11) = uVar28;
  uVar12 = _UNK_013fa066;
  uVar11 = _UNK_013fa062;
  uVar10 = _UNK_013fa05e;
  *puStack_4b8 = _DAT_013fa05a;
  puStack_4b8[1] = uVar10;
  puStack_4b8[2] = uVar11;
  puStack_4b8[3] = uVar12;
  *(undefined1 *)((long)puStack_4b8 + 0x19) = 0;
  puStack_4d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_4d0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar28 = _UNK_011b92c1;
  uStack_4e0 = 0x31;
  uStack_4d8 = 0x2d;
  *(ulong *)((long)puStack_4d0 + 0x1d) = CONCAT53(_UNK_011b92bc,_DAT_011b92b9);
  *(undefined8 *)((long)puStack_4d0 + 0x25) = uVar28;
  uVar28 = CONCAT35(_DAT_011b92b9,_UNK_011b92b4);
  puStack_4d0[2] = _DAT_011b92ac;
  puStack_4d0[3] = uVar28;
  uVar28 = _UNK_011b92a4;
  *puStack_4d0 = _DAT_011b929c;
  puStack_4d0[1] = uVar28;
  *(undefined1 *)((long)puStack_4d0 + 0x2d) = 0;
  bStack_380 = 2;
  uStack_37f = 0x30;
  uStack_37e = 0;
  bStack_240 = 0;
  uStack_23f = 0;
  func_0x0560fc60(_DAT_01198724,0,auStack_1c8,param_2,&uStack_4c8,&uStack_4e0,&bStack_380,
                  &bStack_240);
  uVar28 = *puVar17;
  uStack_308 = 0;
  if ((uStack_158 & 1) == 0) {
    pbStack_2f0 = pbStack_148;
    uStack_300 = CONCAT44(uStack_154,uStack_158);
    uStack_2f8 = uStack_150;
    uStack_2f4 = uStack_14c;
  }
  else {
    func_0x0412e5e0(&uStack_300,pbStack_148,CONCAT44(uStack_14c,uStack_150));
  }
  uStack_2e8 = 0;
  if ((uStack_300 & 1) == 0) {
    if ((byte)uStack_300 >> 1 != 0) goto LAB_05a461d8;
  }
  else if (CONCAT44(uStack_2f4,uStack_2f8) != 0) {
LAB_05a461d8:
    pbVar20 = pbStack_2f0;
    if ((uStack_300 & 1) == 0) {
      pbVar20 = (byte *)((long)&uStack_300 + 1);
    }
    if ((pbVar20 != (byte *)0x0) && (*pbVar20 != 0)) {
      uVar36 = 0xcbf29ce484222325;
      uVar25 = func_0x0eee2e90(pbVar20);
      if (uVar25 != 0) {
        uVar30 = (ulong)((uint)uVar25 & 7);
        if (7 < uVar25) {
          uVar25 = uVar25 & 0xfffffffffffffff8;
          do {
            uVar36 = (((((((uVar36 * 0x100000001b3 ^ (ulong)*pbVar20) * 0x100000001b3 ^
                          (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) * 0x100000001b3 ^
                        (ulong)pbVar20[3]) * 0x100000001b3 ^ (ulong)pbVar20[4]) * 0x100000001b3 ^
                      (ulong)pbVar20[5]) * 0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^
                     (ulong)pbVar20[7];
            pbVar20 = pbVar20 + 8;
            uVar25 = uVar25 - 8;
          } while (uVar25 != 0);
        }
        if (uVar30 != 0) {
          uVar25 = 0;
          do {
            uVar36 = uVar36 * 0x100000001b3 ^ (ulong)pbVar20[uVar25];
            uVar25 = uVar25 + 1;
          } while (uVar30 != uVar25);
        }
      }
      goto LAB_05a462c8;
    }
  }
  uVar36 = 0;
LAB_05a462c8:
  pbStack_658 = (byte *)0x10;
  uStack_308 = uVar36;
  func_0x0563e3d0(&pbStack_650,auStack_1c8);
  uStack_5b0 = (undefined8 *)0x0;
  pbStack_5b8 = &UNK_0effdc90;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar17 = pbStack_658;
  puVar17[1] = pbStack_650;
  puVar17[5] = uStack_630;
  puVar17[3] = pbStack_640;
  puVar17[4] = pbStack_638;
  pbStack_640 = (byte *)0x0;
  pbStack_638 = (byte *)0x0;
  uStack_630 = 0;
  puVar17[8] = uStack_618;
  puVar17[6] = uStack_628;
  puVar17[7] = uStack_620;
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  puVar17[0xb] = uStack_600;
  puVar17[9] = uStack_610;
  puVar17[10] = uStack_608;
  uStack_610 = 0;
  uStack_608 = 0;
  uStack_600 = 0;
  puVar17[0xe] = uStack_5e8;
  puVar17[0xc] = uStack_5f8;
  puVar17[0xd] = uStack_5f0;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  puVar17[0x11] = uStack_5d0;
  *(undefined4 *)(puVar17 + 0xf) = (undefined4)uStack_5e0;
  *(undefined4 *)((long)puVar17 + 0x7c) = uStack_5e0._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_5d8;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_5d8._4_4_;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  pbStack_578 = (byte *)0x0;
  bStack_570 = 0;
  uStack_56f = 0;
  uStack_56a = 0;
  uStack_5b0 = puVar17;
  if (pbStack_5b8 == (byte *)0x0) {
    pbVar20 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_5b8)(&pbStack_5b8,&pbStack_578);
    pbVar20 = pbStack_5b8;
  }
  pbStack_5b8 = (byte *)0x0;
  pbStack_578 = pbVar20;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0effdac0;
  pbStack_2c8 = (byte *)0x0;
  plStack_2c0 = (long *)0x0;
  if (pbVar20 == (byte *)0x0) {
    pbStack_2c8 = (byte *)0x0;
  }
  else {
    (**(code **)pbVar20)(&pbStack_578,&pbStack_2c8);
    pbStack_2c8 = pbStack_578;
  }
  pbStack_578 = (byte *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&bStack_4f8,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar23 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0effdb10;
  plVar19[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar19 + 0x2f) = 1;
  plVar19[0x30] = 0;
  plVar19[0x31] = 0;
  if (pbStack_2c8 == (byte *)0x0) {
    pbVar20 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_2c8)(&pbStack_2c8,plVar19 + 0x30);
    pbVar20 = pbStack_2c8;
  }
  plVar32 = plVar19 + 4;
  pbStack_2c8 = (byte *)0x0;
  plVar19[0x30] = (long)pbVar20;
  puVar3 = (uint *)(plVar19 + 0x12);
  if (plVar23 == (long *)&DAT_0f552018) {
    plVar19[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar19[0x14] = _DAT_0f552030;
        uVar12 = uRam000000000f55202c;
        uVar11 = _DAT_0f552028;
        uVar10 = uRam000000000f552024;
        *puVar3 = _DAT_0f552020;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar10;
        *(undefined4 *)(plVar19 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar38 = (_DAT_0f552020 & 1) != 0;
      lVar18 = 0xf552021;
      if (bVar38) {
        lVar18 = _DAT_0f552030;
      }
      uVar25 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar38) {
        uVar25 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar3,lVar18,uVar25);
    }
    plVar19[0x11] = _DAT_0f552018;
    plVar19[0x15] = 0;
    if (pbStack_2c8 != (byte *)0x0) {
      (**(code **)(pbStack_2c8 + 8))(&pbStack_2c8);
    }
  }
  plVar22 = plVar19 + 1;
  if (pbStack_578 != (byte *)0x0) {
    (**(code **)(pbStack_578 + 8))(&pbStack_578);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar26 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar26[1] = 0;
  plVar26[2] = 0;
  *plVar26 = (long)&UNK_0effdbf0;
  plVar26[6] = 0;
  plVar26[7] = 0;
  plVar26[4] = (long)&UNK_0effdc40;
  plVar26[0xe] = (long)plVar32;
  plVar26[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  pbStack_2c8 = (byte *)(plVar26 + 4);
  plStack_2c0 = plVar26;
  puVar21 = (undefined4 *)func_0x05a57e60(uVar28,&uStack_308);
  plVar27 = *(long **)(puVar21 + 0x24);
  if (plVar27 < *(long **)(puVar21 + 0x26)) {
    plVar27[2] = 0;
    plVar27[3] = 0;
    *plVar27 = 0;
    plVar27[1] = 0;
    plVar27[4] = 0;
    if (plVar27 != plVar23) {
      if ((*puVar3 & 1) == 0) {
        plVar27[3] = plVar19[0x14];
        lVar18 = plVar19[0x13];
        plVar27[1] = *(long *)puVar3;
        plVar27[2] = lVar18;
      }
      else {
        func_0x04885070(plVar27 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar27 = *plVar23;
    plVar27[5] = (long)(plVar26 + 4);
    plVar27[6] = (long)plVar26;
    LOCK();
    plVar26[1] = plVar26[1] + 1;
    UNLOCK();
    plVar27 = plVar27 + 7;
    *(long **)(puVar21 + 0x24) = plVar27;
  }
  else {
    plVar27 = (long *)func_0x05a59cb0(puVar21 + 0x22,plVar23,&pbStack_2c8);
  }
  *(long **)(puVar21 + 0x24) = plVar27;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar11;
  *(undefined4 *)(plVar19 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar13;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar26 = plVar23 + 1;
    lVar18 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  plVar23 = plStack_2c0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_2c0 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_2c0 + 1;
    lVar18 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
      func_0x0412c2d0(plVar23);
    }
  }
  LOCK();
  lVar18 = *plVar22;
  *plVar22 = *plVar22 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
  }
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
  }
  if (pbStack_5b8 != (byte *)0x0) {
    (**(code **)(pbStack_5b8 + 8))(&pbStack_5b8);
  }
  if ((uStack_5e0 & 1) != 0) {
    func_0x0412a280(uStack_5d0,uStack_5e0 & 0xfffffffffffffffe);
  }
  if ((uStack_5f8 & 1) != 0) {
    func_0x0412a280(uStack_5e8,uStack_5f8 & 0xfffffffffffffffe);
  }
  if ((uStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,uStack_610 & 0xfffffffffffffffe);
  }
  if ((uStack_628 & 1) != 0) {
    func_0x0412a280(uStack_618,uStack_628 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_640 & 1) != 0) {
    func_0x0412a280(uStack_630,(ulong)pbStack_640 & 0xfffffffffffffffe);
  }
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(pbStack_2f0,uStack_300 & 0xfffffffffffffffe);
  }
  pbStack_658 = (byte *)0x10;
  pbStack_650 = (byte *)((ulong)pbStack_650 & 0xffffffffffffff00);
  func_0x0563e3d0(&pbStack_648,auStack_1c8);
  plStack_2c0 = (long *)0x0;
  pbStack_2c8 = &UNK_0effdca8;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  ppbVar31 = (byte **)(plVar19 + 0x26);
  *(undefined1 *)(puVar17 + 1) = pbStack_650._0_1_;
  *puVar17 = pbStack_658;
  puVar17[2] = pbStack_648;
  puVar17[6] = uStack_628;
  puVar17[4] = pbStack_638;
  puVar17[5] = uStack_630;
  pbStack_638 = (byte *)0x0;
  uStack_630 = 0;
  uStack_628 = 0;
  puVar17[9] = uStack_610;
  puVar17[7] = uStack_620;
  puVar17[8] = uStack_618;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  puVar17[0xc] = uStack_5f8;
  puVar17[10] = uStack_608;
  puVar17[0xb] = uStack_600;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  puVar17[0xf] = uStack_5e0;
  puVar17[0xd] = uStack_5f0;
  puVar17[0xe] = uStack_5e8;
  uStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5e0 = 0;
  puVar17[0x12] = uStack_5c8;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_5d8;
  *(undefined4 *)((long)puVar17 + 0x84) = uStack_5d8._4_4_;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_5d0;
  *(undefined4 *)((long)puVar17 + 0x8c) = uStack_5d0._4_4_;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  plStack_2c0 = puVar17;
  if (ppbVar31 == &pbStack_2c8) {
    func_0x05610960(puVar17 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar17);
  }
  else {
    pbVar20 = &UNK_0effdca8;
    if ((*ppbVar31 == (byte *)0x0) ||
       ((**(code **)(*ppbVar31 + 8))(ppbVar31), pbVar20 = pbStack_2c8, pbStack_2c8 != (byte *)0x0))
    {
      (**(code **)pbVar20)(&pbStack_2c8,ppbVar31);
      pbVar20 = pbStack_2c8;
    }
    else {
      pbVar20 = (byte *)0x0;
    }
    pbStack_2c8 = (byte *)0x0;
    *ppbVar31 = pbVar20;
  }
  if ((uStack_5d8 & 1) != 0) {
    func_0x0412a280(uStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
  }
  if ((uStack_5f0 & 1) != 0) {
    func_0x0412a280(uStack_5e0,uStack_5f0 & 0xfffffffffffffffe);
  }
  if ((uStack_608 & 1) != 0) {
    func_0x0412a280(uStack_5f8,uStack_608 & 0xfffffffffffffffe);
  }
  if ((uStack_620 & 1) != 0) {
    func_0x0412a280(uStack_610,uStack_620 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_638 & 1) != 0) {
    func_0x0412a280(uStack_628,(ulong)pbStack_638 & 0xfffffffffffffffe);
  }
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  (**(code **)(*plVar32 + 0x18))(plVar32,&uStack_448,&uStack_468);
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if ((uStack_158 & 1) != 0) {
    func_0x0412a280(pbStack_148,CONCAT44(uStack_154,uStack_158) & 0xfffffffffffffffe);
  }
  if ((bStack_170 & 1) != 0) {
    func_0x0412a280(uStack_160,CONCAT71(uStack_16f,bStack_170) & 0xfffffffffffffffe);
  }
  if ((bStack_188 & 1) != 0) {
    func_0x0412a280(uStack_178,CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
  }
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
  }
  if ((bStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
  }
  if ((bStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,
                    CONCAT62(uStack_23e,CONCAT11(uStack_23f,bStack_240)) & 0xfffffffffffffffe);
  }
  if ((bStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,
                    CONCAT53(uStack_37d,CONCAT12(uStack_37e,CONCAT11(uStack_37f,bStack_380))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(puStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
  }
  if ((uStack_4c8 & 1) != 0) {
    func_0x0412a280(puStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11b929c  Definition::DEFAULT_MIN_CHANGE_DIRECTION_TIME
 * 0x11b92ac  ULT_MIN_CHANGE_DIRECTION_TIME
 * 0x11b92b9  E_DIRECTION_TIME
 * 0x1325d0f  minecraft:behavior.slime_random_direction
 * 0x1325d1f  or.slime_random_direction
 * 0x1325d28  random_direction
 * 0x13c587c  Definition::DEFAULT_ADD_RANDOM_TIME_RANGE
 * 0x13c588c  ULT_ADD_RANDOM_TIME_RANGE
 * 0x13c5895  ANDOM_TIME_RANGE
 * 0x13fa05a  min_change_direction_time
 * 0x13fa063  e_direction_time
 * 0x14482f2  Definition::DEFAULT_TURN_RANGE
 * 0x1448300  FAULT_TURN_RANGE
 * 0x1494d5d  <any array element>
 * 0x14c9e98  add_random_time_range
 */
