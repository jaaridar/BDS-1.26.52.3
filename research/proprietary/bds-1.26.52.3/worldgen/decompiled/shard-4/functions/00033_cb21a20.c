/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc21a20 (ELF vaddr 0xcb21a20)
 * Label: caller-of-callee
 * Body:  [[0cc21a20, 0cc21bd2] [0cc21be0, 0cc21c29] [0cc21c30, 0cc2231b] [0cc22320, 0cc223e6] [0cc223f0, 0cc223fd] [0cc22400, 0cc224ab] [0cc224b0, 0cc225ee] [0cc225f0, 0cc2266a] [0cc22670, 0cc22761] [0cc22770, 0cc227fe] [0cc22800, 0cc2281e] [0cc22820, 0cc228ca] [0cc228d0, 0cc229e9] [0cc229f0, 0cc22dc4] [0cc22dd0, 0cc22f32] [0cc22f40, 0cc23101] [0cc23110, 0cc231a9] [0cc231b0, 0cc2377a] [0cc23780, 0cc23833] [0cc23840, 0cc238e2] [0cc238f0, 0cc23af6] [0cc23b00, 0cc23b23] [0cc23b30, 0cc23d90] [0cc23da0, 0cc24040] [0cc24050, 0cc242a6] [0cc242b0, 0cc245fa] [0cc24600, 0cc246fb] [0cc24700, 0cc2480e] [0cc24810, 0cc2499d] [0cc249a0, 0cc24d81] [0cc24d90, 0cc24f44] [0cc24f50, 0cc2508d] [0cc25090, 0cc250b2] [0cc250c0, 0cc250fe] [0cc25100, 0cc25122] [0cc25130, 0cc2516e] [0cc25170, 0cc25192] [0cc251a0, 0cc25b7d] [0cc25b80, 0cc25bd0] [0cc25be0, 0cc25c1b] [0cc25c20, 0cc25f54] [0cc25f60, 0cc25fbb] [0cc25fc0, 0cc2611b] [0cc26120, 0cc26187] [0cc26190, 0cc266db] [0cc266e0, 0cc26730] [0cc26740, 0cc2677b] [0cc26780, 0cc26798] [0cc267a0, 0cc267a4] [0cc267b0, 0cc267f4] [0cc26800, 0cc26873] [0cc26880, 0cc268c4] [0cc268d0, 0cc268dc] [0cc268e0, 0cc26943] [0cc26950, 0cc26963] [0cc26970, 0cc269c7] [0cc269d0, 0cc26cdc] [0cc26ce0, 0cc26e16] [0cc26e20, 0cc26eae] [0cc26eb0, 0cc275f7] [0cc27600, 0cc27622] [0cc27630, 0cc27675] [0cc27680, 0cc276f5] [0cc27700, 0cc27731] [0cc27740, 0cc27769] [0cc27770, 0cc277b5] [0cc277c0, 0cc2780b] [0cc27810, 0cc27835] [0cc27840, 0cc27913] [0cc27920, 0cc27942] [0cc27950, 0cc27995] [0cc279a0, 0cc27a15] [0cc27a20, 0cc27a51] [0cc27a60, 0cc27a89] [0cc27a90, 0cc27ad5] [0cc27ae0, 0cc27b2b] [0cc27b30, 0cc27b55] [0cc27b60, 0cc28550] [0cc28560, 0cc285ad] [0cc285b0, 0cc285d6] [0cc285e0, 0cc28917] [0cc295d3, 0cc2966c]]
 * Ghidra: FUN_0cc21a20
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc21a20(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  ushort uVar7;
  long **pplVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  byte bVar21;
  undefined8 uVar22;
  byte bVar23;
  char cVar24;
  int iVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  undefined2 *puVar30;
  undefined1 **ppuVar31;
  long *plVar32;
  long *plVar33;
  byte *pbVar34;
  undefined1 *puVar35;
  undefined8 *puVar36;
  ulong *puVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined2 uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  undefined *puVar46;
  long lVar47;
  undefined8 *******pppppppuVar48;
  undefined8 uVar49;
  long lVar50;
  long lVar51;
  undefined *puVar52;
  ulong uVar53;
  long *plVar54;
  undefined *puVar55;
  int *piVar56;
  long lVar57;
  undefined *puVar58;
  long *in_FS_OFFSET;
  bool bVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  uint uVar69;
  uint uStack_b24;
  undefined8 uStack_b20;
  long lStack_b10;
  undefined1 auStack_b08 [16];
  undefined *puStack_af8;
  undefined8 uStack_ae8;
  undefined *puStack_ae0;
  undefined *puStack_ad8;
  undefined8 uStack_ad0;
  ulong uStack_ac8;
  long lStack_ac0;
  undefined1 auStack_ab8 [8];
  long *plStack_ab0;
  undefined1 auStack_aa8 [16];
  byte *pbStack_a98;
  long lStack_a80;
  long lStack_a78;
  long *plStack_a70;
  long *plStack_a68;
  long *plStack_a60;
  undefined1 auStack_a58 [16];
  undefined8 uStack_a48;
  undefined1 auStack_a38 [16];
  undefined1 auStack_a28 [16];
  undefined1 auStack_a18 [16];
  undefined8 *puStack_a00;
  undefined1 auStack_9f8 [16];
  undefined1 auStack_9e8 [16];
  long *plStack_9d8;
  ulong uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 uStack_9b8;
  undefined *puStack_9b0;
  undefined1 auStack_9a8 [16];
  undefined1 *puStack_998;
  uint uStack_990;
  byte bStack_98c;
  undefined1 auStack_988 [16];
  undefined1 **ppuStack_978;
  undefined1 auStack_970 [16];
  ulong uStack_960;
  undefined7 uStack_958;
  undefined4 uStack_951;
  undefined1 auStack_948 [16];
  ulong uStack_938;
  undefined1 auStack_930 [16];
  ulong uStack_920;
  undefined2 uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  undefined1 auStack_900 [16];
  undefined4 uStack_8f0;
  undefined1 uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  undefined1 auStack_8d0 [16];
  undefined4 uStack_8c0;
  undefined1 auStack_8b8 [16];
  ulong uStack_8a8;
  undefined1 auStack_8a0 [16];
  undefined8 *puStack_890;
  undefined1 auStack_888 [16];
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  undefined1 auStack_860 [16];
  undefined4 uStack_850;
  undefined8 uStack_848;
  undefined *puStack_840;
  long lStack_838;
  undefined *puStack_830;
  ulong *puStack_828;
  undefined8 uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  byte bStack_7f8;
  byte bStack_7f7;
  byte bStack_7f6;
  byte bStack_7f5;
  byte bStack_7f4;
  byte bStack_7f3;
  byte bStack_7f2;
  byte bStack_7f1;
  byte bStack_7f0;
  byte bStack_7ef;
  byte bStack_7ee;
  byte bStack_7ed;
  byte bStack_7ec;
  byte bStack_7eb;
  byte bStack_7ea;
  byte bStack_7e9;
  byte bStack_7e8;
  byte bStack_7e7;
  byte bStack_7e6;
  byte bStack_7e5;
  undefined4 uStack_7e4;
  byte bStack_7e0;
  undefined7 uStack_7df;
  byte *pbStack_7d8;
  ulong uStack_7d0;
  undefined1 (*pauStack_7c8) [16];
  undefined1 auStack_7c0 [16];
  undefined *puStack_7b0;
  undefined *puStack_7a8;
  long alStack_798 [4];
  long *plStack_778;
  undefined1 uStack_768;
  undefined2 uStack_766;
  undefined1 uStack_764;
  long *plStack_5e8;
  long *plStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  undefined4 uStack_5c8;
  uint uStack_5c4;
  undefined4 uStack_5c0;
  uint uStack_5bc;
  undefined2 uStack_5b8;
  uint6 uStack_5b6;
  undefined1 auStack_5b0 [16];
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [16];
  uint uStack_538;
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [16];
  long lStack_4f0;
  undefined4 uStack_4e8;
  undefined1 uStack_4e4;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined2 auStack_4a8 [4];
  undefined1 auStack_4a0 [16];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_47f;
  uint6 uStack_47e;
  ulong uStack_478;
  undefined8 *******apppppppuStack_470 [3];
  code *pcStack_458;
  int iStack_450;
  char cStack_44c;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  byte bStack_3fc;
  undefined1 auStack_3f8 [16];
  ulong uStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [16];
  long alStack_378 [4];
  long *plStack_358;
  undefined8 uStack_328;
  ulong uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  byte bStack_2a8;
  char acStack_298 [8];
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined1 (*pauStack_270) [16];
  long lStack_268;
  undefined1 (*pauStack_260) [16];
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  int iStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined4 uStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [16];
  byte *pbStack_f0;
  undefined8 uStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  
  auStack_9f8._0_8_ = 0x11000001423bf6;
  bStack_7f8 = 0;
  bStack_7e8 = 0;
  puStack_a00 = param_4;
  uStack_278 = param_3;
  func_0x0eeb79f0(auStack_118,auStack_9f8);
  if (((ulong)auStack_9f8._0_8_ >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_9f8._0_8_ & 0xff00ffffffffffff) - 8);
  }
  auStack_398 = (undefined1  [16])0x0;
  auStack_3a8 = (undefined1  [16])0x0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auStack_388._8_8_;
  auStack_388 = auVar2 << 0x40;
  func_0x0412f5e0(auStack_3a8 + 8,&UNK_012e8b10,0x17);
  auStack_3a8._0_8_ = 0xc255648c323c40d2;
  func_0x05d54750(auStack_238,&UNK_0f3f5f38);
  auStack_9f8._8_8_ = param_1;
  auStack_9f8._0_8_ = &UNK_0f3f8e78;
  plStack_9d8 = (long *)auStack_9f8;
  func_0x0412d680(0xf6b4d60);
  uStack_b20 = param_2;
  if (DAT_0f6b4d58 == '\0') goto LAB_0cc287fb;
  do {
    if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0cc21cb3:
      puVar52 = &DAT_0f6b4d48;
    }
    else {
      uVar39 = auStack_3a8._0_8_;
      bVar59 = (auStack_3a8[8] & 1) != 0;
      puVar35 = auStack_3a8 + 9;
      if (bVar59) {
        puVar35 = (undefined1 *)auStack_398._8_8_;
      }
      uVar41 = (ulong)(auStack_3a8[8] >> 1);
      if (bVar59) {
        uVar41 = auStack_398._0_8_;
      }
      puVar52 = &DAT_0f6b4d48;
      puVar55 = _DAT_0f6b4d48;
      do {
        uVar43 = *(ulong *)(puVar55 + 0x20);
        bVar23 = (uVar43 >= (ulong)uVar39 && uVar43 != uVar39) - (uVar43 < (ulong)uVar39);
        if (uVar43 == uVar39) {
          if ((puVar55[0x28] & 1) == 0) {
            uVar43 = (ulong)((byte)puVar55[0x28] >> 1);
            puVar46 = puVar55 + 0x29;
          }
          else {
            uVar43 = *(ulong *)(puVar55 + 0x30);
            puVar46 = *(undefined **)(puVar55 + 0x38);
          }
          uVar53 = uVar43;
          if (uVar41 < uVar43) {
            uVar53 = uVar41;
          }
          iVar25 = memcmp(puVar46,puVar35,uVar53);
          if (iVar25 == 0) {
            iVar25 = (int)(char)((uVar41 < uVar43) - (uVar43 < uVar41));
          }
          bVar23 = (0 < iVar25) - (iVar25 < 0);
        }
        if (-1 < (char)bVar23) {
          puVar52 = puVar55;
        }
        puVar55 = *(undefined **)(puVar55 + (bVar23 >> 4 & 8));
      } while (puVar55 != (undefined *)0x0);
      if (puVar52 == &DAT_0f6b4d48) goto LAB_0cc21cb3;
      if (uVar39 == *(ulong *)(puVar52 + 0x20)) {
        bVar59 = (puVar52[0x28] & 1) != 0;
        puVar55 = puVar52 + 0x29;
        if (bVar59) {
          puVar55 = *(undefined **)(puVar52 + 0x38);
        }
        uVar43 = (ulong)((byte)puVar52[0x28] >> 1);
        if (bVar59) {
          uVar43 = *(ulong *)(puVar52 + 0x30);
        }
        uVar53 = uVar41;
        if (uVar43 < uVar41) {
          uVar53 = uVar43;
        }
        iVar25 = memcmp(puVar35,puVar55,uVar53);
        bVar59 = uVar41 < uVar43;
        if (iVar25 != 0) {
          bVar59 = iVar25 < 0;
        }
        if (bVar59) goto LAB_0cc21cb3;
      }
      else if ((ulong)uVar39 < *(ulong *)(puVar52 + 0x20)) goto LAB_0cc21cb3;
    }
    if ((DAT_0f6b4d58 == '\0') && (iVar25 = FUN_04108328(&DAT_0f6b4d58), iVar25 != 0)) {
      _DAT_0f6b4d48 = (undefined1  [16])0x0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      __cxa_atexit(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    puVar55 = &DAT_0f6b4d48;
    if ((puVar52 != &DAT_0f6b4d48) &&
       (puVar46 = *(undefined **)(puVar52 + 0x50), puVar46 != (undefined *)0x0)) {
      puVar58 = puVar52 + 0x50;
      do {
        bVar23 = func_0x04fa7a10(puVar46 + 0x20,auStack_238);
        if (bVar23 == 0) {
          puVar58 = puVar46;
        }
        puVar46 = *(undefined **)(puVar46 + (ulong)bVar23 * 8);
      } while (puVar46 != (undefined *)0x0);
      if ((puVar58 != puVar52 + 0x50) &&
         (cVar24 = func_0x04fa7a10(auStack_238,puVar58 + 0x20), cVar24 == '\0')) {
        plStack_5e8 = *(long **)(puVar58 + 0x38);
        plStack_5e0 = *(long **)(puVar58 + 0x40);
        if (*(long *)(puVar58 + 0x40) == 0) goto LAB_0cc22015;
        LOCK();
        plVar32 = (long *)(*(long *)(puVar58 + 0x40) + 8);
        *plVar32 = *plVar32 + 1;
        UNLOCK();
        goto LAB_0cc22015;
      }
    }
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (puVar26 == (undefined8 *)0x0) goto LAB_0cc287cc;
LAB_0cc21d4f:
    *(undefined1 (*) [16])(puVar26 + 1) = (undefined1  [16])0x0;
    *puVar26 = &UNK_0f3f8d30;
    bStack_7f8 = 0;
    bStack_7f7 = 0;
    bStack_7f6 = 0;
    bStack_7f5 = 0;
    bStack_7f4 = 0;
    bStack_7f3 = 0;
    bStack_7f2 = 0;
    bStack_7f1 = 0;
    bStack_7f0 = 0;
    bStack_7ef = 0;
    bStack_7ee = 0;
    bStack_7ed = 0;
    bStack_7ec = 0;
    bStack_7eb = 0;
    bStack_7ea = 0;
    bStack_7e9 = 0;
    puVar26[4] = &UNK_0f2ccd78;
    *(undefined1 (*) [16])(puVar26 + 5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 7) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 9) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0xb) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar26 + 0xd) = 0;
    func_0x04aa75f0(puVar26 + 0xe,auStack_100,&UNK_01254d89);
    *(undefined1 *)(puVar26 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar26 + 0x11) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x15) = (undefined1  [16])0x0;
    puVar26[0x17] = 0xffffffff;
    *(undefined1 (*) [16])(puVar26 + 0x26) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x1c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar26 + 0x1e) = (undefined1  [16])0x0;
    puVar26[4] = &UNK_0f3f8d80;
    pbVar34 = (byte *)(puVar26 + 0x2e);
    *(undefined1 (*) [16])(puVar26 + 0x2e) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar26 + 0x36) = 0;
    if (pbVar34 != &bStack_7f8) {
      puVar36 = (undefined8 *)
                CONCAT17(bStack_7f1,
                         CONCAT16(bStack_7f2,
                                  CONCAT15(bStack_7f3,
                                           CONCAT14(bStack_7f4,
                                                    CONCAT13(bStack_7f5,
                                                             CONCAT12(bStack_7f6,
                                                                      CONCAT11(bStack_7f7,bStack_7f8
                                                                              )))))));
      if (puVar36 == (undefined8 *)0x0) {
        uVar39 = 0;
      }
      else {
        (*(code *)*puVar36)(&bStack_7f8,pbVar34);
        uVar39 = CONCAT17(bStack_7f1,
                          CONCAT16(bStack_7f2,
                                   CONCAT15(bStack_7f3,
                                            CONCAT14(bStack_7f4,
                                                     CONCAT13(bStack_7f5,
                                                              CONCAT12(bStack_7f6,
                                                                       CONCAT11(bStack_7f7,
                                                                                bStack_7f8)))))));
      }
      bStack_7f8 = 0;
      bStack_7f7 = 0;
      bStack_7f6 = 0;
      bStack_7f5 = 0;
      bStack_7f4 = 0;
      bStack_7f3 = 0;
      bStack_7f2 = 0;
      bStack_7f1 = 0;
      *(undefined8 *)pbVar34 = uVar39;
    }
    if (puVar26 != (undefined8 *)&DAT_0f552080) {
      pbVar34 = (byte *)(puVar26 + 0x12);
      if ((*pbVar34 & 1) == 0) {
        if ((DAT_0f552110 & 1) == 0) {
          puVar26[0x14] = _DAT_0f552120;
          uVar41 = _DAT_0f552118;
          *(ulong *)pbVar34 = CONCAT71(uRam000000000f552111,DAT_0f552110);
          puVar26[0x13] = uVar41;
        }
        else {
          func_0x04885070(pbVar34,_DAT_0f552120,_DAT_0f552118);
        }
      }
      else {
        uVar41 = (ulong)(DAT_0f552110 >> 1);
        uVar39 = 0xf552111;
        if ((DAT_0f552110 & 1) != 0) {
          uVar41 = _DAT_0f552118;
          uVar39 = _DAT_0f552120;
        }
        FUN_04885120(pbVar34,uVar39,uVar41);
      }
    }
    puVar26[0x11] = _DAT_0f552108;
    puVar26[0x15] = 0;
    lVar27 = CONCAT17(bStack_7f1,
                      CONCAT16(bStack_7f2,
                               CONCAT15(bStack_7f3,
                                        CONCAT14(bStack_7f4,
                                                 CONCAT13(bStack_7f5,
                                                          CONCAT12(bStack_7f6,
                                                                   CONCAT11(bStack_7f7,bStack_7f8)))
                                                ))));
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 8))(&bStack_7f8);
    }
    plStack_5e8 = puVar26 + 4;
    plStack_5e0 = puVar26;
    if ((DAT_0f6b4d58 == '\0') && (iVar25 = FUN_04108328(&DAT_0f6b4d58), iVar25 != 0)) {
      _DAT_0f6b4d48 = (undefined1  [16])0x0;
      _DAT_0f6b4d40 = puVar55;
      __cxa_atexit(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    bStack_7f8 = (byte)auStack_3a8;
    bStack_7f7 = (byte)((ulong)auStack_3a8 >> 8);
    bStack_7f6 = (byte)((ulong)auStack_3a8 >> 0x10);
    bStack_7f5 = (byte)((ulong)auStack_3a8 >> 0x18);
    bStack_7f4 = (byte)((ulong)auStack_3a8 >> 0x20);
    bStack_7f3 = (byte)((ulong)auStack_3a8 >> 0x28);
    bStack_7f2 = (byte)((ulong)auStack_3a8 >> 0x30);
    bStack_7f1 = (byte)((ulong)auStack_3a8 >> 0x38);
    lVar27 = func_0x0b5d53e0(&DAT_0f6b4d40,auStack_3a8,&UNK_01563a4f,&bStack_7f8,auStack_100);
    bStack_7f8 = (byte)auStack_238;
    bStack_7f7 = (byte)((ulong)auStack_238 >> 8);
    bStack_7f6 = (byte)((ulong)auStack_238 >> 0x10);
    bStack_7f5 = (byte)((ulong)auStack_238 >> 0x18);
    bStack_7f4 = (byte)((ulong)auStack_238 >> 0x20);
    bStack_7f3 = (byte)((ulong)auStack_238 >> 0x28);
    bStack_7f2 = (byte)((ulong)auStack_238 >> 0x30);
    bStack_7f1 = (byte)((ulong)auStack_238 >> 0x38);
    lVar27 = func_0x0b5d5780(lVar27 + 0x48,auStack_238,&UNK_01563a4f,&bStack_7f8,auStack_100);
    if (plStack_5e0 != (undefined8 *)0x0) {
      LOCK();
      plStack_5e0[1] = plStack_5e0[1] + 1;
      UNLOCK();
    }
    plVar32 = *(long **)(lVar27 + 0x40);
    *(long **)(lVar27 + 0x38) = plStack_5e8;
    *(long **)(lVar27 + 0x40) = plStack_5e0;
    if (plVar32 != (long *)0x0) {
      LOCK();
      plVar33 = plVar32 + 1;
      lVar27 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
      }
    }
    if (plStack_9d8 == (long *)0x0) {
      uVar39 = func_0x04891200();
      func_0x041084d6(&DAT_0f5ea4a0);
      func_0x0eeb81b0(auStack_130);
      if ((uStack_ad0 & 1) != 0) {
        func_0x0412a280(lStack_ac0,uStack_ad0 & 0xfffffffffffffffe);
      }
      func_0x0b0396e0(auStack_100);
      func_0x05f43b50(auStack_238);
      func_0x0eeb81b0(auStack_118);
      uVar39 = func_0x0eee2d70(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      uVar39 = func_0x04882e20(uVar39);
      func_0x04882e20(uVar39);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*plStack_9d8 + 0x30))(plStack_9d8,&plStack_5e8);
LAB_0cc22015:
    func_0x0412d6b0(0xf6b4d60);
    plVar4 = plStack_5e0;
    plVar33 = plStack_5e8;
    plStack_5e8 = (long *)0x0;
    plStack_5e0 = (long *)0x0;
    plVar32 = *(long **)(param_1 + 0x58);
    *(long **)(param_1 + 0x50) = plVar33;
    *(long **)(param_1 + 0x58) = plVar4;
    if (plVar32 == (long *)0x0) {
LAB_0cc2207b:
      if (plStack_9d8 != (long *)auStack_9f8) goto LAB_0cc22090;
LAB_0cc220fc:
      lVar27 = 0x20;
LAB_0cc22101:
      (**(code **)(*plStack_9d8 + lVar27))();
    }
    else {
      LOCK();
      plVar33 = plVar32 + 1;
      lVar27 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar27 != 0) goto LAB_0cc2207b;
      (**(code **)(*plVar32 + 0x10))(plVar32);
      func_0x0412c2d0(plVar32);
      plVar32 = plStack_5e0;
      if (plStack_5e0 == (long *)0x0) goto LAB_0cc2207b;
      LOCK();
      plVar33 = plStack_5e0 + 1;
      lVar27 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar27 != 0) goto LAB_0cc2207b;
      (**(code **)(*plStack_5e0 + 0x10))(plStack_5e0);
      func_0x0412c2d0(plVar32);
      if (plStack_9d8 == (long *)auStack_9f8) goto LAB_0cc220fc;
LAB_0cc22090:
      lVar27 = 0x28;
      if (plStack_9d8 != (long *)0x0) goto LAB_0cc22101;
    }
    if ((auStack_228._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_228._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auStack_228._8_8_;
    auStack_228 = auVar1 << 0x40;
    if ((auStack_238._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_238._8_8_ & 0xff00ffffffffffff) - 8);
    }
    if ((auStack_3a8[8] & 1) != 0) {
      func_0x0412a280(auStack_398._8_8_,auStack_3a8._8_8_ & 0xfffffffffffffffe);
    }
    auStack_190 = (undefined1  [16])0x0;
    auStack_1a0 = (undefined1  [16])0x0;
    auStack_238 = (undefined1  [16])0x0;
    auStack_228 = (undefined1  [16])0x0;
    auStack_218 = (undefined1  [16])0x0;
    auStack_208 = (undefined1  [16])0x0;
    auStack_1f8 = (undefined1  [16])0x0;
    auStack_1e8 = (undefined1  [16])0x0;
    auStack_1d8 = (undefined1  [16])0x0;
    auStack_1c8 = (undefined1  [16])0x0;
    auStack_1b8 = (undefined1  [16])0x0;
    iStack_1a8 = 0;
    uStack_180 = 0x3f800000;
    auStack_178 = (undefined1  [16])0x0;
    auStack_168 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
    auStack_148 = (undefined1  [16])0x0;
    uStack_138 = 0;
    lStack_b10 = *(long *)(*(long *)(uStack_b20 + 0x98) + 8);
    lStack_280 = *(long *)(*(long *)(uStack_b20 + 0x98) + 0x10);
    if (lStack_b10 == lStack_280) {
LAB_0cc28761:
      func_0x05f43b50(auStack_238);
      func_0x0eeb81b0(auStack_118);
      return;
    }
    puStack_830 = &UNK_01254d89;
    lStack_258 = param_1 + 0x28;
    lStack_a80 = *in_FS_OFFSET;
    plStack_4b8 = (long *)(lStack_a80 + -0xa68);
    lStack_268 = lStack_a80 + -0x28;
    plStack_4b0 = (long *)(lStack_a80 + -0x20);
    puStack_240 = &uStack_848;
    lStack_248 = param_1;
LAB_0cc2234b:
    uStack_4d8 = *puStack_a00;
    plStack_4d0 = (long *)puStack_a00[1];
    if (puStack_a00[1] != 0) {
      LOCK();
      plVar32 = (long *)(puStack_a00[1] + 8);
      *plVar32 = *plVar32 + 1;
      UNLOCK();
    }
    uStack_4c8 = puStack_a00[2];
    func_0x09b49860(auStack_100,lStack_b10,uStack_278,&uStack_4d8);
    plVar32 = plStack_4d0;
    uStack_4d8 = 0;
    plStack_4d0 = (long *)0x0;
    if (plVar32 == (long *)0x0) {
      uStack_4c8 = 0;
    }
    else {
      LOCK();
      plVar33 = plVar32 + 1;
      lVar27 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
        plVar32 = plStack_4d0;
        uStack_4c8 = 0;
        if (plStack_4d0 != (long *)0x0) {
          uStack_4c8 = 0;
          LOCK();
          plVar33 = plStack_4d0 + 1;
          lVar27 = *plVar33;
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (lVar27 == 0) {
            (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
            func_0x0412c2d0(plVar32);
          }
        }
      }
      else {
        uStack_4c8 = 0;
      }
    }
    lVar28 = (**(code **)(**(long **)(*(long *)(**(long **)(lStack_b10 + 0xe8) + 8) + 8) + 0x18))();
    bVar59 = (*(byte *)(lVar28 + 8) & 1) != 0;
    lVar27 = lVar28 + 9;
    if (bVar59) {
      lVar27 = *(long *)(lVar28 + 0x18);
    }
    uVar41 = (ulong)(*(byte *)(lVar28 + 8) >> 1);
    if (bVar59) {
      uVar41 = *(ulong *)(lVar28 + 0x10);
    }
    if (uVar41 < 0xfffffffffffffff8) {
      if (uVar41 < 0x17) {
        uStack_ad0 = CONCAT71(uStack_ad0._1_7_,(char)uVar41 * '\x02');
        lVar28 = (long)&uStack_ad0 + 1;
        if (uVar41 != 0) goto LAB_0cc22501;
      }
      else {
        uVar43 = (uVar41 | 7) + 1;
        if ((uVar41 | 7) == 0x17) {
          uVar43 = 0x1a;
        }
        lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar43);
        if (lVar28 == 0) {
          func_0x0eec74c0(uVar43,0);
        }
        uStack_ad0 = uVar43 | 1;
        uStack_ac8 = uVar41;
        lStack_ac0 = lVar28;
LAB_0cc22501:
        memmove(lVar28,lVar27,uVar41);
      }
      *(undefined1 *)(lVar28 + uVar41) = 0;
      uVar41 = uStack_ad0 >> 1 & 0x7f;
      lVar27 = (long)&uStack_ad0 + 1;
      if ((uStack_ad0 & 1) != 0) {
        uVar41 = uStack_ac8;
        lVar27 = lStack_ac0;
      }
      bStack_7f8 = (byte)lVar27;
      bStack_7f7 = (byte)((ulong)lVar27 >> 8);
      bStack_7f6 = (byte)((ulong)lVar27 >> 0x10);
      bStack_7f5 = (byte)((ulong)lVar27 >> 0x18);
      bStack_7f4 = (byte)((ulong)lVar27 >> 0x20);
      bStack_7f3 = (byte)((ulong)lVar27 >> 0x28);
      bStack_7f2 = (byte)((ulong)lVar27 >> 0x30);
      bStack_7f1 = (byte)((ulong)lVar27 >> 0x38);
      bStack_7f0 = (byte)uVar41;
      bStack_7ef = (byte)(uVar41 >> 8);
      bStack_7ee = (byte)(uVar41 >> 0x10);
      bStack_7ed = (byte)(uVar41 >> 0x18);
      bStack_7ec = (byte)(uVar41 >> 0x20);
      bStack_7eb = (byte)(uVar41 >> 0x28);
      bStack_7ea = (byte)(uVar41 >> 0x30);
      bStack_7e9 = (byte)(uVar41 >> 0x38);
      bStack_7e8 = 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auStack_9f8._8_8_;
      auStack_9f8 = auVar9 << 0x40;
      uVar39 = CONCAT44(uStack_7e4,CONCAT13(bStack_7e5,CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,1))))
      ;
      func_0x0eeb79f0(auStack_130,auStack_9f8);
      if ((auStack_9f8._0_8_ & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(auStack_9f8._0_8_ & 0xff00ffffffffffff) - 8);
      }
      pauVar29 = *(undefined1 (**) [16])(param_1 + 0xb8);
      pauStack_270 = *(undefined1 (**) [16])(param_1 + 0xc0);
      if (pauVar29 == pauStack_270) goto LAB_0cc28660;
      puVar26 = (undefined8 *)0x0;
      while( true ) {
        auStack_a18 = (undefined1  [16])0x0;
        auStack_a28 = (undefined1  [16])0x0;
        auStack_a38 = (undefined1  [16])0x0;
        if (((*pauVar29)[0] & 1) == 0) {
          auStack_9e8._0_8_ = *(undefined8 *)pauVar29[1];
          auStack_9f8 = *pauVar29;
        }
        else {
          func_0x0412e5e0(auStack_9f8,*(undefined8 *)pauVar29[1],*(undefined8 *)(*pauVar29 + 8));
        }
        func_0x0d62a930(&bStack_7f8,*(undefined8 *)(lStack_b10 + 0xe8),auStack_9f8,
                        *(undefined4 *)(lStack_b10 + 0x108),0,param_6,lVar27,uVar41,uVar39);
        auVar2 = auStack_a28;
        auStack_a18[9] = bStack_7e7;
        auStack_a18[8] = bStack_7e8;
        auStack_a18[10] = bStack_7e6;
        auStack_a18[0xb] = bStack_7e5;
        auStack_a18._12_4_ = uStack_7e4;
        auStack_a28[9] = bStack_7f7;
        auStack_a28[8] = bStack_7f8;
        auStack_a28[10] = bStack_7f6;
        auStack_a28[0xb] = bStack_7f5;
        auStack_a28[0xc] = bStack_7f4;
        auStack_a28[0xd] = bStack_7f3;
        auStack_a28[0xe] = bStack_7f2;
        auStack_a28[0xf] = bStack_7f1;
        auStack_a18[1] = bStack_7ef;
        auStack_a18[0] = bStack_7f0;
        auStack_a18[2] = bStack_7ee;
        auStack_a18[3] = bStack_7ed;
        auStack_a18[4] = bStack_7ec;
        auStack_a18[5] = bStack_7eb;
        auStack_a18[6] = bStack_7ea;
        auStack_a18[7] = bStack_7e9;
        auStack_a28._0_8_ = auVar2._0_8_;
        bStack_7f8 = 0;
        bStack_7f7 = 0;
        bStack_7f6 = 0;
        bStack_7f5 = 0;
        bStack_7f4 = 0;
        bStack_7f3 = 0;
        bStack_7f2 = 0;
        bStack_7f1 = 0;
        bStack_7f0 = 0;
        bStack_7ef = 0;
        bStack_7ee = 0;
        bStack_7ed = 0;
        bStack_7ec = 0;
        bStack_7eb = 0;
        bStack_7ea = 0;
        bStack_7e9 = 0;
        bStack_7e8 = 0;
        bStack_7e7 = 0;
        bStack_7e6 = 0;
        bStack_7e5 = 0;
        uStack_7e4 = 0;
        if ((auStack_9f8[0] & 1) != 0) {
          func_0x0412a280(auStack_9e8._0_8_,auStack_9f8._0_8_ & 0xfffffffffffffffe);
        }
        func_0x09ae0df0();
        lVar28 = auStack_a38._8_8_;
        pauStack_260 = pauVar29;
        if (auStack_a38._8_8_ != auStack_a38._0_8_) break;
LAB_0cc2273c:
        uVar49 = auStack_a28._8_8_;
        lVar28 = auStack_a38._0_8_;
        if (auStack_a28._8_8_ != 0) {
          lVar28 = auStack_a18._0_8_;
          if (auStack_a28._8_8_ != auStack_a18._0_8_) {
            do {
              lVar47 = *(long *)(lVar28 + -0x18);
              if (lVar47 != 0) {
                lVar57 = *(long *)(lVar28 + -0x10);
                lVar51 = lVar47;
                if (lVar47 != lVar57) {
                  do {
                    lVar57 = lVar57 + -0x40;
                    func_0x0d697f30(lVar57);
                  } while (lVar57 != lVar47);
                  lVar51 = *(long *)(lVar28 + -0x18);
                }
                *(long *)(lVar28 + -0x10) = lVar47;
                func_0x0412a280(lVar51,*(long *)(lVar28 + -8) - lVar51);
              }
              plVar32 = *(long **)(lVar28 + -0x20);
              if (plVar32 == (long *)0x0) {
LAB_0cc227e0:
                bVar23 = *(byte *)(lVar28 + -0x40);
              }
              else {
                LOCK();
                plVar33 = plVar32 + 1;
                lVar47 = *plVar33;
                *plVar33 = *plVar33 + -1;
                UNLOCK();
                if (lVar47 != 0) goto LAB_0cc227e0;
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
                bVar23 = *(byte *)(lVar28 + -0x40);
              }
              if ((bVar23 & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar28 + -0x30),
                                *(ulong *)(lVar28 + -0x40) & 0xfffffffffffffffe);
              }
              lVar28 = lVar28 + -0x40;
            } while (uVar49 != lVar28);
          }
          auStack_a18._0_8_ = uVar49;
          func_0x0412a280(auStack_a28._8_8_,auStack_a18._8_8_ - auStack_a28._8_8_);
          lVar28 = auStack_a38._0_8_;
        }
        pauVar29 = pauStack_260;
        if (lVar28 != 0) {
          lVar47 = lVar28;
          for (lVar57 = auStack_a38._8_8_; lVar28 != lVar57; lVar57 = lVar57 + -0x18) {
            if ((*(byte *)(lVar57 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar57 + -8),
                              *(ulong *)(lVar57 + -0x18) & 0xfffffffffffffffe);
            }
            lVar47 = auStack_a38._0_8_;
          }
          auStack_a38._8_8_ = lVar28;
          func_0x0412a280(lVar47,auStack_a28._0_8_ - lVar47);
        }
        pauVar29 = (undefined1 (*) [16])(pauVar29[1] + 8);
        if (pauVar29 == pauStack_270) goto LAB_0cc285e0;
      }
LAB_0cc22867:
      lStack_250 = lVar28 + -0x18;
      auStack_a58 = (undefined1  [16])0x0;
      uStack_a48 = 0;
      func_0x0d62a0d0(*(undefined8 *)(lStack_b10 + 0xe8),lStack_250,auStack_a58,
                      *(undefined4 *)(lStack_b10 + 0x108));
      bVar23 = auStack_a58[0] & 1;
      uStack_b24 = (uint)puVar26;
      if (bVar23 == 0) {
        if (auStack_a58[0] >> 1 != 0) goto LAB_0cc228db;
      }
      else if (auStack_a58._8_8_ != 0) {
LAB_0cc228db:
        bVar59 = (*(byte *)(lVar28 + -0x18) & 1) == 0;
        lVar27 = *(long *)(lVar28 + -8);
        if (bVar59) {
          lVar27 = lVar28 + -0x17;
        }
        uVar41 = (ulong)(*(byte *)(lVar28 + -0x18) >> 1);
        if (!bVar59) {
          uVar41 = *(ulong *)(lVar28 + -0x10);
        }
        bStack_7f8 = (byte)lVar27;
        bStack_7f7 = (byte)((ulong)lVar27 >> 8);
        bStack_7f6 = (byte)((ulong)lVar27 >> 0x10);
        bStack_7f5 = (byte)((ulong)lVar27 >> 0x18);
        bStack_7f4 = (byte)((ulong)lVar27 >> 0x20);
        bStack_7f3 = (byte)((ulong)lVar27 >> 0x28);
        bStack_7f2 = (byte)((ulong)lVar27 >> 0x30);
        bStack_7f1 = (byte)((ulong)lVar27 >> 0x38);
        bStack_7f0 = (byte)uVar41;
        bStack_7ef = (byte)(uVar41 >> 8);
        bStack_7ee = (byte)(uVar41 >> 0x10);
        bStack_7ed = (byte)(uVar41 >> 0x18);
        bStack_7ec = (byte)(uVar41 >> 0x20);
        bStack_7eb = (byte)(uVar41 >> 0x28);
        bStack_7ea = (byte)(uVar41 >> 0x30);
        bStack_7e9 = (byte)(uVar41 >> 0x38);
        bStack_7e8 = 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = auStack_9f8._8_8_;
        auStack_9f8 = auVar10 << 0x40;
        uVar39 = CONCAT44(uStack_7e4,
                          CONCAT13(bStack_7e5,CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,1))));
        func_0x0eeb79f0(acStack_298,auStack_9f8);
        if ((auStack_9f8._0_8_ & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(auStack_9f8._0_8_ & 0xff00ffffffffffff) - 8);
        }
        bVar59 = (*(byte *)(lVar28 + -0x18) & 1) != 0;
        lVar47 = lVar28 + -0x17;
        if (bVar59) {
          lVar47 = *(long *)(lVar28 + -8);
        }
        puVar55 = (undefined *)(ulong)(*(byte *)(lVar28 + -0x18) >> 1);
        if (bVar59) {
          puVar55 = *(undefined **)(lVar28 + -0x10);
        }
        if ((undefined *)0xfffffffffffffff7 < puVar55) break;
        if (puVar55 < (undefined *)0x17) {
          uStack_848 = CONCAT71(uStack_848._1_7_,(char)puVar55 * '\x02');
          lVar28 = (long)&uStack_848 + 1;
          if (puVar55 != (undefined *)0x0) goto LAB_0cc22a44;
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_848._1_1_ = 0;
          lVar28 = *(long *)(param_1 + 0xd0);
        }
        else {
          uVar43 = ((ulong)puVar55 | 7) + 1;
          if (((ulong)puVar55 | 7) == 0x17) {
            uVar43 = 0x1a;
          }
          lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar43);
          if (lVar28 == 0) {
            func_0x0eec74c0(uVar43,0);
          }
          uStack_848 = uVar43 | 1;
          puStack_840 = puVar55;
          lStack_838 = lVar28;
LAB_0cc22a44:
          memmove(lVar28,lVar47,puVar55);
          puVar55[lVar28] = 0;
          lVar28 = *(long *)(param_1 + 0xd0);
        }
        if ((lVar28 == 0) &&
           (cVar24 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
           cVar24 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((**(char **)(param_1 + 0xd0) == '\0') &&
           (cVar24 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
           cVar24 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        lVar28 = *(long *)(param_1 + 0xe0);
        uStack_808 = 0;
        uStack_800 = 0;
        bVar23 = func_0x05f6fe50(&UNK_0f3fc6d0,&UNK_0f3f6938);
        uStack_318 = (ulong)bVar23 << 0x25 | 0x10014001a0001;
        auStack_3a8 = (undefined1  [16])0x0;
        auStack_388 = (undefined1  [16])0x0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auStack_388;
        auStack_398 = auVar19 << 0x40;
        plStack_358 = (long *)0x0;
        uStack_328 = 0;
        puStack_310 = puStack_830;
        puStack_308 = puStack_830;
        auStack_2d0 = (undefined1  [16])0x0;
        auStack_2e0 = (undefined1  [16])0x0;
        auStack_2f0 = (undefined1  [16])0x0;
        auStack_300 = (undefined1  [16])0x0;
        uStack_2c0 = 0;
        pauVar29 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pauVar29 == (undefined1 (*) [16])0x0) {
          func_0x0eec74c0(0x30,0);
        }
        pauVar29[2] = (undefined1  [16])0x0;
        pauVar29[1] = (undefined1  [16])0x0;
        *pauVar29 = (undefined1  [16])0x0;
        uVar49 = auStack_300._8_8_;
        auStack_300 = (undefined1  [16])0x0;
        pauStack_2b8 = pauVar29;
        if ((long *)uVar49 != (long *)0x0) {
          LOCK();
          plVar32 = (long *)(uVar49 + 8);
          lVar47 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar47 == 0) {
            (**(code **)(*(long *)uVar49 + 0x10))(uVar49);
            func_0x0412c2d0(uVar49);
          }
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = auStack_2f0._8_8_;
        auStack_2f0 = auVar11 << 0x40;
        lVar47 = *(long *)*(undefined1 (*) [16])(lVar28 + 8);
        auVar2 = *(undefined1 (*) [16])(lVar28 + 8);
        if (*(long *)(lVar28 + 0x10) != 0) {
          LOCK();
          plVar32 = (long *)(*(long *)(lVar28 + 0x10) + 8);
          *plVar32 = *plVar32 + 1;
          UNLOCK();
        }
        uVar49 = auStack_300._8_8_;
        if ((long *)auStack_300._8_8_ != (long *)0x0) {
          LOCK();
          plVar32 = (long *)(auStack_300._8_8_ + 8);
          lVar47 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar47 == 0) {
            lVar47 = *(long *)auStack_300._8_8_;
            auStack_300 = auVar2;
            (**(code **)(lVar47 + 0x10))(uVar49);
            func_0x0412c2d0(uVar49);
            auVar2 = auStack_300;
          }
          auStack_300 = auVar2;
          lVar47 = auStack_300._0_8_;
          auVar2 = auStack_300;
        }
        auStack_300 = auVar2;
        if (lVar47 != 0) {
          auStack_2f0._0_8_ = lVar28;
        }
        auStack_4a8[0] = 0xd;
        auStack_4a0 = (undefined1  [16])0x0;
        uStack_490 = 0;
        uStack_480 = uStack_800;
        uStack_488 = uStack_808;
        uStack_47f = 1;
        uVar49 = auStack_2f0._8_8_;
        if ((undefined2 *)auStack_2f0._8_8_ == (undefined2 *)0x0) {
          puVar30 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (puVar30 == (undefined2 *)0x0) {
            func_0x0eec74c0(0x30,0);
          }
          *puVar30 = auStack_4a8[0];
          *(undefined8 *)(puVar30 + 4) = auStack_4a0._0_8_;
          *(undefined8 *)(puVar30 + 8) = auStack_4a0._8_8_;
          auStack_4a0 = (undefined1  [16])0x0;
          *(undefined8 *)(puVar30 + 0xc) = uStack_490;
          uStack_490 = 0;
          puVar30[0x14] = CONCAT11(uStack_47f,uStack_480);
          *(undefined8 *)(puVar30 + 0x10) = uStack_488;
          uVar49 = auStack_2f0._8_8_;
          auStack_2f0._8_8_ = puVar30;
          if (uVar49 != 0) {
            plVar32 = *(long **)(uVar49 + 0x10);
            *(undefined1 (*) [16])(uVar49 + 8) = (undefined1  [16])0x0;
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar33 = plVar32 + 1;
              lVar28 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
                plVar32 = *(long **)(uVar49 + 0x10);
                *(undefined8 *)(uVar49 + 0x18) = 0;
              }
              else {
                plVar32 = *(long **)(uVar49 + 0x10);
                *(undefined8 *)(uVar49 + 0x18) = 0;
              }
              if (plVar32 != (long *)0x0) {
                LOCK();
                plVar33 = plVar32 + 1;
                lVar28 = *plVar33;
                *plVar33 = *plVar33 + -1;
                UNLOCK();
                if (lVar28 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  func_0x0412c2d0(plVar32);
                }
              }
            }
            func_0x0412a280(uVar49,0x30);
          }
        }
        else {
          *(undefined2 *)auStack_2f0._8_8_ = 0xd;
          if ((undefined2 *)auStack_2f0._8_8_ != auStack_4a8) {
            plVar32 = *(long **)(auStack_2f0._8_8_ + 0x10);
            *(undefined1 (*) [16])(auStack_2f0._8_8_ + 8) = (undefined1  [16])0x0;
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar33 = plVar32 + 1;
              lVar28 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
            }
            *(undefined8 *)(uVar49 + 0x18) = 0;
            uVar44 = auStack_4a0._0_8_;
            uVar22 = auStack_4a0._8_8_;
            auStack_4a0 = (undefined1  [16])0x0;
            plVar32 = *(long **)(uVar49 + 0x10);
            *(undefined8 *)(uVar49 + 8) = uVar44;
            *(undefined8 *)(uVar49 + 0x10) = uVar22;
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar33 = plVar32 + 1;
              lVar28 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
            }
            *(undefined8 *)(uVar49 + 0x18) = uStack_490;
          }
          uStack_490 = 0;
          *(ushort *)(uVar49 + 0x28) = CONCAT11(uStack_47f,uStack_480);
          *(undefined8 *)(uVar49 + 0x20) = uStack_488;
        }
        uVar49 = auStack_4a0._8_8_;
        auStack_4a0 = (undefined1  [16])0x0;
        if ((long *)uVar49 == (long *)0x0) {
          uStack_490 = 0;
          puVar26 = (undefined8 *)auStack_2e0._0_8_;
joined_r0x0cc22f57:
          if (puVar26 == (undefined8 *)0x0) goto LAB_0cc22f5d;
LAB_0cc22fdd:
          *puVar26 = 0;
        }
        else {
          LOCK();
          plVar32 = (long *)(uVar49 + 8);
          lVar28 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar28 == 0) {
            (**(code **)(*(long *)uVar49 + 0x10))(uVar49);
            func_0x0412c2d0(uVar49);
            uVar49 = auStack_4a0._8_8_;
            if ((long *)auStack_4a0._8_8_ != (long *)0x0) {
              uStack_490 = 0;
              LOCK();
              plVar32 = (long *)(auStack_4a0._8_8_ + 8);
              lVar28 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*(long *)auStack_4a0._8_8_ + 0x10))(auStack_4a0._8_8_);
                func_0x0412c2d0(uVar49);
                puVar26 = (undefined8 *)auStack_2e0._0_8_;
                goto joined_r0x0cc22f57;
              }
            }
          }
          uStack_490 = 0;
          puVar26 = (undefined8 *)auStack_2e0._0_8_;
          if ((undefined8 *)auStack_2e0._0_8_ != (undefined8 *)0x0) goto LAB_0cc22fdd;
LAB_0cc22f5d:
          puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (puVar26 == (undefined8 *)0x0) {
            func_0x0eec74c0(8,0);
          }
          *puVar26 = 0;
          auStack_2e0._0_8_ = puVar26;
        }
        puVar55 = &UNK_0f3f6a00;
        plStack_ab0 = (long *)&UNK_0cc36200;
        auStack_ab8 = (undefined1  [8])&UNK_0f3f6a00;
        pbStack_a98 = auStack_ab8;
        pauVar29 = (undefined1 (*) [16])auStack_2e0._8_8_;
        if ((undefined1 (*) [16])auStack_2e0._8_8_ == (undefined1 (*) [16])0x0) {
          pauVar29 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pauVar29 == (undefined1 (*) [16])0x0) {
            func_0x0eec74c0(0x20,0);
          }
          pauVar29[1] = (undefined1  [16])0x0;
          *pauVar29 = (undefined1  [16])0x0;
          auStack_2e0._8_8_ = pauVar29;
          pbStack_7d8 = pbStack_a98;
          if (pbStack_a98 == (byte *)0x0) {
            pbStack_7d8 = (byte *)0x0;
          }
          else {
            if (pbStack_a98 == auStack_ab8) {
              puVar55 = *(undefined **)pbStack_a98;
              goto LAB_0cc2301f;
            }
            pbStack_a98 = (byte *)0x0;
          }
        }
        else {
LAB_0cc2301f:
          pbStack_7d8 = &bStack_7f8;
          (**(code **)(puVar55 + 0x18))(pbStack_a98,&bStack_7f8);
        }
        pauStack_7c8 = pauVar29;
        puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (puVar26 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        *puVar26 = &UNK_0f3f6970;
        if (pbStack_7d8 == (byte *)0x0) {
          puVar26[6] = 0;
        }
        else if (pbStack_7d8 == &bStack_7f8) {
          puVar26[6] = puVar26 + 2;
          (**(code **)(*(long *)pbStack_7d8 + 0x18))();
          pauVar29 = pauStack_7c8;
        }
        else {
          puVar26[6] = pbStack_7d8;
          pbStack_7d8 = (byte *)0x0;
        }
        plVar32 = plStack_358;
        puVar26[8] = pauVar29;
        puVar26[9] = 0;
        plStack_358 = (long *)0x0;
        if (plVar32 == alStack_378) {
          lVar28 = 0x20;
LAB_0cc231b5:
          (**(code **)(*plVar32 + lVar28))();
          if (pbStack_7d8 != &bStack_7f8) goto LAB_0cc2317f;
LAB_0cc231d0:
          lVar28 = 0x20;
LAB_0cc231d5:
          plStack_358 = puVar26;
          (**(code **)(*(long *)pbStack_7d8 + lVar28))();
          if (pbStack_a98 != auStack_ab8) goto LAB_0cc2319e;
LAB_0cc231f0:
          lVar28 = 0x20;
LAB_0cc231f5:
          (**(code **)(*(long *)pbStack_a98 + lVar28))();
        }
        else {
          lVar28 = 0x28;
          if (plVar32 != (long *)0x0) goto LAB_0cc231b5;
          if (pbStack_7d8 == &bStack_7f8) goto LAB_0cc231d0;
LAB_0cc2317f:
          lVar28 = 0x28;
          if (pbStack_7d8 != (byte *)0x0) goto LAB_0cc231d5;
          plStack_358 = puVar26;
          if (pbStack_a98 == auStack_ab8) goto LAB_0cc231f0;
LAB_0cc2319e:
          lVar28 = 0x28;
          if (pbStack_a98 != (byte *)0x0) goto LAB_0cc231f5;
        }
        pauVar29 = pauStack_2b8;
        bStack_7f8 = (byte)auStack_3a8;
        bStack_7f7 = (byte)((ulong)auStack_3a8 >> 8);
        bStack_7f6 = (byte)((ulong)auStack_3a8 >> 0x10);
        bStack_7f5 = (byte)((ulong)auStack_3a8 >> 0x18);
        bStack_7f4 = (byte)((ulong)auStack_3a8 >> 0x20);
        bStack_7f3 = (byte)((ulong)auStack_3a8 >> 0x28);
        bStack_7f2 = (byte)((ulong)auStack_3a8 >> 0x30);
        bStack_7f1 = (byte)((ulong)auStack_3a8 >> 0x38);
        bStack_7f0 = (byte)&uStack_318;
        bStack_7ef = (byte)((ulong)&uStack_318 >> 8);
        bStack_7ee = (byte)((ulong)&uStack_318 >> 0x10);
        bStack_7ed = (byte)((ulong)&uStack_318 >> 0x18);
        bStack_7ec = (byte)((ulong)&uStack_318 >> 0x20);
        bStack_7eb = (byte)((ulong)&uStack_318 >> 0x28);
        bStack_7ea = (byte)((ulong)&uStack_318 >> 0x30);
        bStack_7e9 = (byte)((ulong)&uStack_318 >> 0x38);
        bStack_7e8 = auStack_300[0];
        bStack_7e7 = auStack_300[1];
        bStack_7e6 = auStack_300[2];
        bStack_7e5 = auStack_300[3];
        uStack_7e4 = auStack_300._4_4_;
        bStack_7e0 = auStack_300[8];
        uStack_7df = auStack_300._9_7_;
        if (auStack_300._8_8_ != 0) {
          LOCK();
          *(long *)(auStack_300._8_8_ + 8) = *(long *)(auStack_300._8_8_ + 8) + 1;
          UNLOCK();
        }
        pbStack_7d8 = (byte *)auStack_2f0._0_8_;
        if ((auStack_2f0._8_8_ == 0) &&
           (cVar24 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_012ce26b),
           cVar24 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uStack_7d0 = auStack_2f0._8_8_;
        puVar26 = (undefined8 *)auStack_2e0._0_8_;
        if ((undefined8 *)auStack_2e0._0_8_ == (undefined8 *)0x0) {
          puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (puVar26 == (undefined8 *)0x0) {
            func_0x0eec74c0(8,0);
          }
          *puVar26 = 0;
          auStack_2e0._0_8_ = puVar26;
        }
        puStack_9c0 = (undefined8 *)auStack_2d0;
        auStack_7c0._0_8_ = puStack_9c0;
        auStack_9f8[1] = bStack_7f7;
        auStack_9f8[0] = bStack_7f8;
        auStack_9f8[2] = bStack_7f6;
        auStack_9f8[3] = bStack_7f5;
        auStack_9f8[4] = bStack_7f4;
        auStack_9f8[5] = bStack_7f3;
        auStack_9f8[6] = bStack_7f2;
        auStack_9f8[7] = bStack_7f1;
        auStack_9f8[9] = bStack_7ef;
        auStack_9f8[8] = bStack_7f0;
        auStack_9f8[10] = bStack_7ee;
        auStack_9f8[0xb] = bStack_7ed;
        auStack_9f8[0xc] = bStack_7ec;
        auStack_9f8[0xd] = bStack_7eb;
        auStack_9f8[0xe] = bStack_7ea;
        auStack_9f8[0xf] = bStack_7e9;
        auStack_9e8[1] = bStack_7e7;
        auStack_9e8[0] = bStack_7e8;
        auStack_9e8[2] = bStack_7e6;
        auStack_9e8[3] = bStack_7e5;
        auStack_9e8._4_4_ = uStack_7e4;
        auStack_9e8._9_7_ = uStack_7df;
        auStack_9e8[8] = bStack_7e0;
        bStack_7e8 = 0;
        bStack_7e7 = 0;
        bStack_7e6 = 0;
        bStack_7e5 = 0;
        uStack_7e4 = 0;
        bStack_7e0 = 0;
        uStack_7df = 0;
        plStack_9d8 = (long *)pbStack_7d8;
        pbStack_7d8 = (byte *)0x0;
        uStack_9d0 = uStack_7d0;
        uStack_9b8 = 0x1000000000000;
        puStack_9b0 = puStack_830;
        auStack_9a8._0_8_ = puStack_830;
        ppuStack_978 = (undefined1 **)0x0;
        uStack_9c8 = puVar26;
        pauStack_7c8 = (undefined1 (*) [16])puVar26;
        ppuVar31 = (undefined1 **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (ppuVar31 == (undefined1 **)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        auVar2 = auStack_970;
        *ppuVar31 = &UNK_0f3f6bf0;
        ppuVar31[1] = &UNK_0cc33340;
        ppuVar31[2] = *pauVar29;
        ppuVar31[3] = *pauVar29 + 8;
        ppuVar31[4] = pauVar29[1];
        ppuVar31[5] = pauVar29[2] + 8;
        auStack_970[8] = 1;
        auStack_970._10_2_ = 0xfffc;
        auStack_970._13_3_ = auVar2._13_3_;
        auStack_970[0xc] = 1;
        plVar32 = (long *)CONCAT71(uStack_7df,bStack_7e0);
        bStack_7e8 = 0;
        bStack_7e7 = 0;
        bStack_7e6 = 0;
        bStack_7e5 = 0;
        uStack_7e4 = 0;
        bStack_7e0 = 0;
        uStack_7df = 0;
        ppuStack_978 = ppuVar31;
        if (plVar32 != (long *)0x0) {
          LOCK();
          plVar33 = plVar32 + 1;
          lVar28 = *plVar33;
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (lVar28 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
            plVar32 = (long *)CONCAT71(uStack_7df,bStack_7e0);
            pbStack_7d8 = (byte *)0x0;
            if (plVar32 != (long *)0x0) {
              pbStack_7d8 = (byte *)0x0;
              LOCK();
              plVar33 = plVar32 + 1;
              lVar28 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
            }
          }
          else {
            pbStack_7d8 = (byte *)0x0;
          }
        }
        puVar26 = puStack_9c0;
        uStack_ae8 = 0x10014001a0001;
        puStack_ae0 = puStack_830;
        puStack_ad8 = puStack_830;
        if (*(char *)((long)puStack_9c0 + 6) == '\0') {
          *puStack_9c0 = 0x10014001a0001;
          if ((puStack_9c0[1] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(puStack_9c0[1] & 0xff00ffffffffffff) - 8);
          }
          puVar26[1] = 0;
          puVar55 = puStack_ae0;
          if (((ulong)puStack_ae0 & 0x80000000000000) != 0) {
            uVar43 = (ulong)puStack_ae0 & 0xff00ffffffffffff;
            lVar47 = *(long *)(uVar43 - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          puVar26[1] = puVar55;
          if ((puVar26[2] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar26[2] & 0xff00ffffffffffff) - 8)
            ;
          }
          puVar26[2] = 0;
          puVar55 = puStack_ad8;
          if (((ulong)puStack_ad8 & 0x80000000000000) != 0) {
            uVar43 = (ulong)puStack_ad8 & 0xff00ffffffffffff;
            lVar47 = *(long *)(uVar43 - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          puVar26[2] = puVar55;
        }
        auVar2 = auStack_9f8;
        uVar49 = auStack_9f8._0_8_;
        auStack_b08._0_8_ = uStack_ae8;
        puVar55 = puStack_ae0;
        uVar44 = uStack_ae8;
        if (((ulong)puStack_ae0 & 0x80000000000000) != 0) {
          uVar43 = (ulong)puStack_ae0 & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          uVar44 = auStack_b08._0_8_;
        }
        auStack_b08._0_8_ = uVar44;
        auStack_b08._8_8_ = puVar55;
        puStack_af8 = (undefined *)0x0;
        puVar55 = puStack_ad8;
        if (((ulong)puStack_ad8 & 0x80000000000000) != 0) {
          uVar43 = (ulong)puStack_ad8 & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        uVar43 = (ulong)puStack_9b0 & 0x80000000000000;
        uVar7 = (ushort)((ulong)puStack_9b0 >> 0x30);
        puStack_af8 = puVar55;
        if (uVar43 == 0) {
          if (((ulong)puStack_9b0 & 0x7f000000000000) == 0) goto LAB_0cc238b0;
          uVar53 = (ulong)(uVar7 & 0x7f);
LAB_0cc23859:
          if ((((uVar53 != 4) || (*(int *)((ulong)puStack_9b0 & 0xff00ffffffffffff) != 0x61746562))
              || ((short)uStack_9b8 != 9999)) ||
             ((uStack_9b8._2_2_ != 9999 || (uStack_9b8._4_2_ != 9999)))) goto LAB_0cc238b0;
LAB_0cc23b00:
          if (uVar43 == 0) {
            if (((ulong)puStack_9b0 & 0x7f000000000000) != 0) {
              uVar53 = (ulong)(uVar7 & 0x7f);
LAB_0cc23b4d:
              uVar44 = 3;
              if ((((uVar53 == 4) &&
                   (piVar56 = (int *)((ulong)puStack_9b0 & 0xff00ffffffffffff),
                   *piVar56 == 0x61746562)) && ((short)uStack_9b8 == 9999)) &&
                 ((uStack_9b8._2_2_ == 9999 && (uStack_9b8._4_2_ == 9999)))) {
                auStack_b08._0_8_ = uStack_9b8;
                auVar1 = auStack_b08;
                if ((auStack_b08._8_8_ & 0x80000000000000) != 0) {
                  auStack_b08 = auVar1;
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,(auStack_b08._8_8_ & 0xff00ffffffffffff) - 8);
                  piVar56 = (int *)((ulong)puStack_9b0 & 0xff00ffffffffffff);
                  uVar43 = (ulong)puStack_9b0 & 0x80000000000000;
                }
                auStack_b08._8_8_ = 0;
                puVar55 = puStack_9b0;
                if (uVar43 != 0) {
                  lVar47 = *(long *)(piVar56 + -2);
                  lVar28 = lVar47 + 9;
                  plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
                  if (lVar28 != 0 && plVar32 == (long *)0x0) {
                    func_0x0eec74c0(lVar28,8);
                  }
                  *plVar32 = lVar47;
                  func_0x0eee2f00(plVar32 + 1,piVar56,lVar47);
                  *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
                  puVar55 = (undefined *)
                            ((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                }
                auStack_b08._8_8_ = puVar55;
                if (((ulong)puStack_af8 & 0x80000000000000) != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)puStack_af8 & 0xff00ffffffffffff) - 8);
                }
                puStack_af8 = (undefined *)0x0;
                uVar44 = 3;
                puVar55 = (undefined *)auStack_9a8._0_8_;
                if ((auStack_9a8._0_8_ & 0x80000000000000) != 0) {
                  uVar43 = auStack_9a8._0_8_ & 0xff00ffffffffffff;
                  lVar47 = *(long *)(uVar43 - 8);
                  lVar28 = lVar47 + 9;
                  plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
                  if (lVar28 != 0 && plVar32 == (long *)0x0) {
                    func_0x0eec74c0(lVar28,8);
                  }
LAB_0cc23d47:
                  *plVar32 = lVar47;
                  func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
                  *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
                  puVar55 = (undefined *)
                            ((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
                }
              }
              goto LAB_0cc23da5;
            }
          }
          else {
            uVar53 = *(ulong *)(((ulong)puStack_9b0 & 0xff00ffffffffffff) - 8);
            if (uVar53 != 0) goto LAB_0cc23b4d;
          }
          uVar44 = 3;
        }
        else {
          uVar53 = *(ulong *)(((ulong)puStack_9b0 & 0xff00ffffffffffff) - 8);
          if (uVar53 != 0) goto LAB_0cc23859;
LAB_0cc238b0:
          if (((ulong)puStack_ae0 & 0x80000000000000) != 0) {
            uVar53 = *(ulong *)(((ulong)puStack_ae0 & 0xff00ffffffffffff) - 8);
            if (uVar53 != 0) goto LAB_0cc2390d;
            goto LAB_0cc23b00;
          }
          if (((ulong)puStack_ae0 & 0x7f000000000000) == 0) goto LAB_0cc23b00;
          uVar53 = (ulong)((ushort)((ulong)puStack_ae0 >> 0x30) & 0x7f);
LAB_0cc2390d:
          if (((uVar53 != 4) || (*(int *)((ulong)puStack_ae0 & 0xff00ffffffffffff) != 0x61746562))
             || (((short)uStack_ae8 != 9999 ||
                 ((uStack_ae8._2_2_ != 9999 || (uStack_ae8._4_2_ != 9999)))))) goto LAB_0cc23b00;
          uVar44 = auStack_9f8._8_8_;
          auStack_b08._0_8_ = *(undefined8 *)auStack_9f8._8_8_;
          if ((auStack_b08._8_8_ & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_b08._8_8_ & 0xff00ffffffffffff) - 8);
          }
          auStack_b08._8_8_ = 0;
          uVar43 = *(ulong *)(uVar44 + 8);
          if ((uVar43 & 0x80000000000000) != 0) {
            lVar47 = *(long *)((uVar43 & 0xff00ffffffffffff) - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43 & 0xff00ffffffffffff,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            uVar43 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          auStack_b08._8_8_ = uVar43;
          if (((ulong)puStack_af8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)puStack_af8 & 0xff00ffffffffffff) - 8);
          }
          puStack_af8 = (undefined *)0x0;
          puVar55 = *(undefined **)(uVar44 + 0x10);
          uVar44 = 1;
          if (((ulong)puVar55 & 0x80000000000000) != 0) {
            uVar43 = (ulong)puVar55 & 0xff00ffffffffffff;
            lVar47 = *(long *)(uVar43 - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            goto LAB_0cc23d47;
          }
        }
LAB_0cc23da5:
        puStack_af8 = puVar55;
        func_0x0d6b3300(&plStack_5e8,&uStack_9b8,auStack_b08,uVar44);
        plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
        if (plVar32 == (long *)0x0) {
          func_0x0eec74c0(0x90,0);
        }
        uStack_3bc = uStack_5bc;
        uStack_3c0 = uStack_5c0;
        uVar69 = uStack_5c4;
        uVar68 = uStack_5c8;
        plStack_a60 = plStack_5e0;
        auStack_3b8._8_8_ = uStack_5d0;
        auStack_3b8._0_8_ = uStack_5d8;
        plStack_5e0 = (long *)0x0;
        uStack_5d8 = 0;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        *plVar32 = (long)&UNK_0f0125c8;
        plVar32[1] = uStack_9b8;
        plVar32[2] = 0;
        plStack_a68 = plStack_5e8;
        uStack_3c8 = CONCAT44(uVar69,uVar68);
        lStack_a78 = CONCAT62(lStack_a78._2_6_,uStack_5b8);
        puVar55 = puStack_9b0;
        uVar40 = uStack_5b8;
        if (((ulong)puStack_9b0 & 0x80000000000000) != 0) {
          uVar43 = (ulong)puStack_9b0 & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar33 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar33 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar33 = lVar47;
          func_0x0eee2f00(plVar33 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar33 + lVar47 + 8) = 0;
          puVar55 = (undefined *)((ulong)(plVar33 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          uVar68 = (undefined4)uStack_3c8;
          uVar69 = uStack_3c8._4_4_;
          uVar40 = (undefined2)lStack_a78;
        }
        plVar32[2] = (long)puVar55;
        plVar32[3] = 0;
        uVar43 = auStack_9a8._0_8_;
        if ((auStack_9a8._0_8_ & 0x80000000000000) != 0) {
          uVar43 = auStack_9a8._0_8_ & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar33 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar33 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar33 = lVar47;
          func_0x0eee2f00(plVar33 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar33 + lVar47 + 8) = 0;
          uVar43 = (ulong)(plVar33 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          uVar68 = (undefined4)uStack_3c8;
          uVar69 = uStack_3c8._4_4_;
          uVar40 = (undefined2)lStack_a78;
        }
        plVar32[3] = uVar43;
        plVar32[4] = (long)plStack_a68;
        plVar32[5] = (long)plStack_a60;
        *(undefined1 (*) [16])(plVar32 + 6) = auStack_3b8;
        *(undefined4 *)(plVar32 + 8) = uVar68;
        *(uint *)((long)plVar32 + 0x44) = uVar69;
        *(undefined4 *)(plVar32 + 9) = uStack_3c0;
        *(uint *)((long)plVar32 + 0x4c) = uStack_3bc;
        *(undefined2 *)(plVar32 + 10) = uVar40;
        *plVar32 = (long)&UNK_0f3f6ac0;
        if (ppuStack_978 == (undefined1 **)0x0) {
          plVar32[0x10] = 0;
        }
        else if (ppuStack_978 == &puStack_998) {
          plVar32[0x10] = (long)(plVar32 + 0xc);
          (**(code **)(*ppuStack_978 + 0x18))();
        }
        else {
          plVar32[0x10] = (long)ppuStack_978;
          ppuStack_978 = (undefined1 **)0x0;
        }
        plStack_a70 = plVar32;
        if ((uStack_5bc & 0x800000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(CONCAT44(uStack_5bc,uStack_5c0) & 0xff00ffffffffffff) - 8);
        }
        uStack_5c0 = 0;
        uStack_5bc = 0;
        if ((uStack_5c4 & 0x800000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(CONCAT44(uStack_5c4,uStack_5c8) & 0xff00ffffffffffff) - 8);
        }
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        if ((uStack_5d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5d8 & 0xff00ffffffffffff) - 8);
        }
        uStack_5d8 = 0;
        if (((ulong)plStack_5e0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)plStack_5e0 & 0xff00ffffffffffff) - 8);
        }
        if (((ulong)puStack_af8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_af8 & 0xff00ffffffffffff) - 8);
        }
        puStack_af8 = (undefined *)0x0;
        if ((auStack_b08._8_8_ & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(auStack_b08._8_8_ & 0xff00ffffffffffff) - 8);
        }
        plVar33 = *(long **)uVar49;
        plVar4 = *(long **)(uVar49 + 8);
        if (plVar33 != plVar4) {
          do {
            cVar24 = func_0x04fa7a10(*plVar33 + 0x20,plVar32 + 7);
            if (cVar24 == '\0') break;
            plVar33 = plVar33 + 1;
          } while (plVar33 != plVar4);
        }
        func_0x0d6af860(uVar49,plVar33,&plStack_a70);
        plVar32 = plStack_a70;
        plStack_a70 = (long *)0x0;
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 8))();
        }
        auStack_970[8] = 0;
        if (((ulong)puStack_ae0 & 0x80000000000000) == 0) {
          if (((ulong)puStack_ae0 & 0x7f000000000000) == 0) goto LAB_0cc24310;
          uVar43 = (ulong)((ushort)((ulong)puStack_ae0 >> 0x30) & 0x7f);
LAB_0cc242c9:
          if (((uVar43 != 4) || (*(int *)((ulong)puStack_ae0 & 0xff00ffffffffffff) != 0x61746562))
             || (((short)uStack_ae8 != 9999 ||
                 ((uStack_ae8._2_2_ != 9999 || (uStack_ae8._4_2_ != 9999)))))) goto LAB_0cc24310;
        }
        else {
          uVar43 = *(ulong *)(((ulong)puStack_ae0 & 0xff00ffffffffffff) - 8);
          if (uVar43 != 0) goto LAB_0cc242c9;
LAB_0cc24310:
          uVar49 = auStack_9f8._0_8_;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
          if (plVar32 == (long *)0x0) {
            func_0x0eec74c0(0x70,0);
          }
          func_0x0d6b23d0(plVar32,&uStack_9b8,&uStack_ae8);
          *plVar32 = (long)&UNK_0f3f6b00;
          plVar32[8] = (long)&UNK_0f3f6b40;
          plVar32[9] = (long)&UNK_0cc33cb0;
          plVar32[0xc] = (long)(plVar32 + 8);
          plStack_5e8 = plVar32;
          func_0x0d6afb30(uVar49,&plStack_5e8);
          if (plStack_5e8 != (long *)0x0) {
            (**(code **)(*plStack_5e8 + 8))();
          }
        }
        bStack_7f8 = auStack_9f8[0];
        bStack_7f7 = auStack_9f8[1];
        bStack_7f6 = auStack_9f8[2];
        bStack_7f5 = auStack_9f8[3];
        bStack_7f4 = auStack_9f8[4];
        bStack_7f3 = auStack_9f8[5];
        bStack_7f2 = auStack_9f8[6];
        bStack_7f1 = auStack_9f8[7];
        bStack_7f0 = auStack_9f8[8];
        bStack_7ef = auStack_9f8[9];
        bStack_7ee = auStack_9f8[10];
        bStack_7ed = auStack_9f8[0xb];
        bStack_7ec = auStack_9f8[0xc];
        bStack_7eb = auStack_9f8[0xd];
        bStack_7ea = auStack_9f8[0xe];
        bStack_7e9 = auStack_9f8[0xf];
        bStack_7e8 = auStack_9e8[0];
        bStack_7e7 = auStack_9e8[1];
        bStack_7e6 = auStack_9e8[2];
        bStack_7e5 = auStack_9e8[3];
        uStack_7e4 = auStack_9e8._4_4_;
        bStack_7e0 = auStack_9e8[8];
        uStack_7df = auStack_9e8._9_7_;
        auStack_9e8 = ZEXT816(0);
        pbStack_7d8 = (byte *)plStack_9d8;
        plStack_9d8 = (long *)0x0;
        uStack_7d0 = uStack_9d0;
        pauStack_7c8 = (undefined1 (*) [16])uStack_9c8;
        auStack_7c0._8_8_ = uStack_ae8;
        auStack_7c0._0_8_ = puStack_9c0;
        puStack_7b0 = (undefined *)0x0;
        puVar55 = puStack_ae0;
        if (((ulong)puStack_ae0 & 0x80000000000000) != 0) {
          uVar43 = (ulong)puStack_ae0 & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        puStack_7a8 = (undefined *)0x0;
        puVar52 = puStack_ad8;
        puStack_7b0 = puVar55;
        if (((ulong)puStack_ad8 & 0x80000000000000) != 0) {
          uVar43 = (ulong)puStack_ad8 & 0xff00ffffffffffff;
          lVar47 = *(long *)(uVar43 - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          puVar52 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        plStack_778 = (long *)0x0;
        uStack_768 = 1;
        uStack_766 = 0xfffc;
        uStack_764 = 1;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        puStack_7a8 = puVar52;
        func_0x0cc94680(&bStack_7f8,&plStack_5e8);
        pplVar8 = (long **)CONCAT44(uStack_5c4,uStack_5c8);
        if (pplVar8 == &plStack_5e8) {
          lVar28 = 0x20;
LAB_0cc24605:
          (**(code **)((long)*pplVar8 + lVar28))();
          if (plStack_778 != alStack_798) goto LAB_0cc245d8;
LAB_0cc24620:
          lVar28 = 0x20;
LAB_0cc24625:
          (**(code **)(*plStack_778 + lVar28))();
        }
        else {
          lVar28 = 0x28;
          if (pplVar8 != (long **)0x0) goto LAB_0cc24605;
          if (plStack_778 == alStack_798) goto LAB_0cc24620;
LAB_0cc245d8:
          lVar28 = 0x28;
          if (plStack_778 != (long *)0x0) goto LAB_0cc24625;
        }
        if (((ulong)puStack_7a8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_7a8 & 0xff00ffffffffffff) - 8);
        }
        puStack_7a8 = (undefined *)0x0;
        if (((ulong)puStack_7b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_7b0 & 0xff00ffffffffffff) - 8);
        }
        puStack_7b0 = (undefined *)0x0;
        plVar32 = (long *)CONCAT71(uStack_7df,bStack_7e0);
        bStack_7e8 = 0;
        bStack_7e7 = 0;
        bStack_7e6 = 0;
        bStack_7e5 = 0;
        uStack_7e4 = 0;
        bStack_7e0 = 0;
        uStack_7df = 0;
        if (plVar32 == (long *)0x0) {
joined_r0x0cc2471e:
          pbStack_7d8 = (byte *)0x0;
        }
        else {
          LOCK();
          plVar33 = plVar32 + 1;
          lVar28 = *plVar33;
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (lVar28 != 0) goto joined_r0x0cc2471e;
          (**(code **)(*plVar32 + 0x10))(plVar32);
          func_0x0412c2d0(plVar32);
          plVar32 = (long *)CONCAT71(uStack_7df,bStack_7e0);
          if (plVar32 == (long *)0x0) goto joined_r0x0cc2471e;
          pbStack_7d8 = (byte *)0x0;
          LOCK();
          plVar33 = plVar32 + 1;
          lVar28 = *plVar33;
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (lVar28 != 0) goto joined_r0x0cc2471e;
          (**(code **)(*plVar32 + 0x10))(plVar32);
          func_0x0412c2d0(plVar32);
        }
        if (((ulong)puStack_ad8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_ad8 & 0xff00ffffffffffff) - 8);
        }
        puStack_ad8 = (undefined *)0x0;
        if (((ulong)puStack_ae0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_ae0 & 0xff00ffffffffffff) - 8);
        }
        if (ppuStack_978 == &puStack_998) {
          lVar28 = 0x20;
LAB_0cc24815:
          (**(code **)(*ppuStack_978 + lVar28))();
        }
        else {
          lVar28 = 0x28;
          if (ppuStack_978 != (undefined1 **)0x0) goto LAB_0cc24815;
        }
        if ((auStack_9a8._0_8_ & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(auStack_9a8._0_8_ & 0xff00ffffffffffff) - 8);
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = auStack_9a8._8_8_;
        auStack_9a8 = auVar12 << 0x40;
        if (((ulong)puStack_9b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_9b0 & 0xff00ffffffffffff) - 8);
        }
        puStack_9b0 = (undefined *)0x0;
        uVar49 = auStack_9e8._8_8_;
        auStack_9e8 = (undefined1  [16])0x0;
        if ((long *)uVar49 != (long *)0x0) {
          LOCK();
          plVar32 = (long *)(uVar49 + 8);
          lVar28 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar28 == 0) {
            (**(code **)(*(long *)uVar49 + 0x10))(uVar49);
            func_0x0412c2d0(uVar49);
            uVar49 = auStack_9e8._8_8_;
            plStack_9d8 = (long *)0x0;
            if ((long *)auStack_9e8._8_8_ != (long *)0x0) {
              plStack_9d8 = (long *)0x0;
              LOCK();
              plVar32 = (long *)(auStack_9e8._8_8_ + 8);
              lVar28 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*(long *)auStack_9e8._8_8_ + 0x10))(auStack_9e8._8_8_);
                func_0x0412c2d0(uVar49);
              }
            }
          }
          else {
            plStack_9d8 = (long *)0x0;
          }
        }
        bStack_2a8 = *pbStack_f0 & 1;
        auStack_3f8._8_8_ = &uStack_848;
        auStack_3f8._0_8_ = param_1;
        if ((uStack_ad0 & 1) == 0) {
          lStack_3d8 = lStack_ac0;
          uStack_3e8 = uStack_ad0;
          uStack_3e0 = uStack_ac8;
          lVar28 = lStack_248;
          puVar26 = puStack_240;
        }
        else {
          func_0x0412e5e0(&uStack_3e8,lStack_ac0,uStack_ac8);
          lVar28 = auStack_3f8._0_8_;
          puVar26 = (undefined8 *)auStack_3f8._8_8_;
        }
        pauVar29 = pauStack_2b8;
        puStack_3d0 = auStack_100;
        *(long *)*pauStack_2b8 = lVar28;
        *(undefined8 **)(*pauStack_2b8 + 8) = puVar26;
        if ((pauStack_2b8[1][0] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)pauStack_2b8[2],
                          *(ulong *)pauStack_2b8[1] & 0xfffffffffffffffe);
        }
        uVar49 = uStack_a48;
        auVar1 = auStack_a58;
        *(long *)pauVar29[2] = lStack_3d8;
        *(ulong *)pauVar29[1] = uStack_3e8;
        *(ulong *)(pauVar29[1] + 8) = uStack_3e0;
        *(undefined1 **)(pauVar29[2] + 8) = puStack_3d0;
        auStack_a58 = (undefined1  [16])0x0;
        uStack_a48 = 0;
        plStack_5e8 = (long *)&UNK_0f47d3f0;
        uStack_538 = 0;
        auStack_590 = (undefined1  [16])0x0;
        auStack_5a0 = (undefined1  [16])0x0;
        auStack_5b0 = (undefined1  [16])0x0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        uStack_5b8 = 0;
        uStack_5b6 = 0;
        uStack_5d0 = 0;
        uStack_5c8 = 0;
        uStack_5c4 = 0;
        plStack_5e0 = (long *)0x0;
        uStack_5d8 = 0;
        auStack_500 = (undefined1  [16])0x0;
        auStack_510 = (undefined1  [16])0x0;
        auStack_520 = (undefined1  [16])0x0;
        auStack_530 = (undefined1  [16])0x0;
        lStack_4f0 = 0;
        uStack_4e8 = 0xfefffffc;
        uStack_4e4 = 0;
        bStack_7f8 = auVar1[0];
        bStack_7f7 = auVar1[1];
        bStack_7f6 = auVar1[2];
        bStack_7f5 = auVar1[3];
        bStack_7f4 = auVar1[4];
        bStack_7f3 = auVar1[5];
        bStack_7f2 = auVar1[6];
        bStack_7f1 = auVar1[7];
        bStack_7f0 = auVar1[8];
        bStack_7ef = auVar1[9];
        bStack_7ee = auVar1[10];
        bStack_7ed = auVar1[0xb];
        bStack_7ec = auVar1[0xc];
        bStack_7eb = auVar1[0xd];
        bStack_7ea = auVar1[0xe];
        bStack_7e9 = auVar1[0xf];
        bStack_7e8 = (byte)uVar49;
        bStack_7e7 = (byte)((ulong)uVar49 >> 8);
        bStack_7e6 = (byte)((ulong)uVar49 >> 0x10);
        bStack_7e5 = (byte)((ulong)uVar49 >> 0x18);
        uStack_7e4 = (undefined4)((ulong)uVar49 >> 0x20);
        func_0x0d687070(&plStack_5e8,&UNK_014873f2,0xf,auStack_2d0,&bStack_7f8);
        if ((bStack_7f8 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_7e4,
                                   CONCAT13(bStack_7e5,
                                            CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8)))),
                          CONCAT17(bStack_7f1,
                                   CONCAT16(bStack_7f2,
                                            CONCAT15(bStack_7f3,
                                                     CONCAT14(bStack_7f4,
                                                              CONCAT13(bStack_7f5,
                                                                       CONCAT12(bStack_7f6,
                                                                                CONCAT11(bStack_7f7,
                                                                                         bStack_7f8)
                                                                               )))))) &
                          0xfffffffffffffffe);
        }
        bVar23 = bStack_2a8;
        cVar24 = *(char *)(**(long **)(lStack_b10 + 0xe8) + 0x88);
        uStack_b20 = CONCAT71(auVar2._1_7_,cVar24);
        auStack_ab8[0] = bStack_2a8;
        uVar49 = CONCAT44(uStack_5c4,uStack_5c8);
        uVar43 = CONCAT44(uStack_5bc,uStack_5c0);
        plStack_ab0 = (long *)uVar49;
        if ((uStack_5bc & 0x800000) != 0) {
          lVar47 = *(long *)((uVar43 & 0xff00ffffffffffff) - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar43 & 0xff00ffffffffffff,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          uVar43 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        auStack_aa8._8_8_ = 0;
        auStack_aa8._0_8_ = uVar43;
        uVar53 = CONCAT62(uStack_5b6,uStack_5b8);
        if ((uStack_5b6 & 0x8000000000) != 0) {
          plStack_a68 = (long *)CONCAT71(plStack_a68._1_7_,bVar23);
          lVar47 = *(long *)((uVar53 & 0xff00ffffffffffff) - 8);
          lVar28 = lVar47 + 9;
          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
          if (lVar28 != 0 && plVar32 == (long *)0x0) {
            func_0x0eec74c0(lVar28,8);
          }
          *plVar32 = lVar47;
          func_0x0eee2f00(plVar32 + 1,uVar53 & 0xff00ffffffffffff,lVar47);
          *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
          uVar53 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          bVar23 = (byte)plStack_a68;
        }
        auStack_9f8[0] = bVar23;
        auStack_9f8._8_8_ = uVar49;
        auStack_aa8 = (undefined1  [16])0x0;
        auStack_9e8._8_8_ = uVar53;
        auStack_9e8._0_8_ = uVar43;
        if ((byte *)auStack_2e0._8_8_ == (byte *)0x0) {
          pbVar34 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pbVar34 == (byte *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *pbVar34 = bVar23;
          *(undefined8 *)(pbVar34 + 8) = uVar49;
          *(ulong *)(pbVar34 + 0x10) = uVar43;
          *(ulong *)(pbVar34 + 0x18) = uVar53;
          uVar49 = auStack_2e0._8_8_;
          auStack_2e0._8_8_ = pbVar34;
          if (uVar49 != 0) {
            if ((*(ulong *)(uVar49 + 0x18) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(uVar49 + 0x18) & 0xff00ffffffffffff) - 8);
            }
            *(undefined8 *)(uVar49 + 0x18) = 0;
            if ((*(ulong *)(uVar49 + 0x10) & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(*(ulong *)(uVar49 + 0x10) & 0xff00ffffffffffff) - 8);
            }
            func_0x0412a280(uVar49,0x20);
          }
        }
        else {
          *(byte *)auStack_2e0._8_8_ = bVar23;
          *(undefined8 *)(auStack_2e0._8_8_ + 8) = uVar49;
          uVar42 = *(ulong *)(auStack_2e0._8_8_ + 0x10);
          uVar38 = *(ulong *)(auStack_2e0._8_8_ + 0x18);
          *(ulong *)(auStack_2e0._8_8_ + 0x10) = uVar43;
          *(ulong *)(auStack_2e0._8_8_ + 0x18) = uVar53;
          if ((uVar38 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar38 & 0xff00ffffffffffff) - 8);
          }
          if ((uVar42 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar42 & 0xff00ffffffffffff) - 8);
          }
        }
        auStack_aa8 = (undefined1  [16])0x0;
        if (cVar24 == '\0') {
          auStack_9f8 = (undefined1  [16])0x0;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auStack_9e8._8_8_;
          auStack_9e8 = auVar15 << 0x40;
          func_0x0cd2f000(auStack_4a8,auStack_3a8,&plStack_5e8,auStack_9f8);
          if ((auStack_9e8._0_8_ & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_9e8._0_8_ & 0xff00ffffffffffff) - 8);
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = auStack_9e8._8_8_;
          auStack_9e8 = auVar16 << 0x40;
          if ((auStack_9f8._8_8_ & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_9f8._8_8_ & 0xff00ffffffffffff) - 8);
          }
        }
        else {
          auStack_9f8 = (undefined1  [16])0x0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = auStack_9e8._8_8_;
          auStack_9e8 = auVar13 << 0x40;
          func_0x0cd2f000(auStack_4a8,auStack_3a8,&plStack_5e8,auStack_9f8);
          if ((auStack_9e8._0_8_ & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_9e8._0_8_ & 0xff00ffffffffffff) - 8);
          }
          auVar14._8_8_ = 0;
          auVar14._0_8_ = auStack_9e8._8_8_;
          auStack_9e8 = auVar14 << 0x40;
          if ((auStack_9f8._8_8_ & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_9f8._8_8_ & 0xff00ffffffffffff) - 8);
          }
        }
        if (((uStack_488._6_1_ == '\x01') && ((bStack_3fc & 1) == 0)) && (uStack_488._7_1_ == '\0'))
        {
          if ((uStack_47e & 0x8000000000) != 0) {
            if (*(long *)((CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)) & 0xff00ffffffffffff
                          ) - 8) == 0) goto LAB_0cc25a97;
            goto LAB_0cc25026;
          }
          if ((uStack_47e & 0x7f00000000) != 0) goto LAB_0cc25026;
LAB_0cc25a97:
          if ((((short)uStack_488 != 1) || (uStack_488._2_2_ != 0x1a)) || (uStack_488._4_2_ != 0x14)
             ) goto LAB_0cc25026;
        }
        else {
LAB_0cc25026:
          bStack_7f8 = 0xff;
          bStack_7f7 = 0xff;
          bStack_7f6 = 0xff;
          bStack_7f5 = 0xff;
          bStack_7f4 = 0;
          bStack_7f3 = 0;
          bStack_7f2 = 0;
          bStack_7f1 = 0;
          auStack_7c0 = (undefined1  [16])0x0;
          uStack_7d0 = 0;
          pauStack_7c8 = (undefined1 (*) [16])0x0;
          bStack_7e0 = 0;
          uStack_7df = 0;
          pbStack_7d8 = (byte *)0x0;
          bStack_7f0 = 0;
          bStack_7ef = 0;
          bStack_7ee = 0;
          bStack_7ed = 0;
          bStack_7ec = 0;
          bStack_7eb = 0;
          bStack_7ea = 0;
          bStack_7e9 = 0;
          bStack_7e8 = 0;
          bStack_7e7 = 0;
          bStack_7e6 = 0;
          bStack_7e5 = 0;
          uStack_7e4 = 0;
          puStack_7b0 = (undefined *)0x0;
          func_0x0d5ceda0(&lStack_448,6,&bStack_7f8);
          uVar49 = auStack_7c0._0_8_;
          if (auStack_7c0._0_8_ != 0) {
            for (lVar28 = auStack_7c0._8_8_; uVar49 != lVar28; lVar28 = lVar28 + -0x20) {
              if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                                *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
              }
            }
            auStack_7c0._8_8_ = uVar49;
            func_0x0412a280(auStack_7c0._0_8_,(long)puStack_7b0 - auStack_7c0._0_8_);
          }
          pbVar34 = pbStack_7d8;
          uVar43 = uStack_7d0;
          if (pbStack_7d8 != (byte *)0x0) {
            for (; pbVar34 != (byte *)uVar43; uVar43 = uVar43 - 0x20) {
              if ((*(byte *)(uVar43 - 0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(uVar43 - 8),
                                *(ulong *)(uVar43 - 0x18) & 0xfffffffffffffffe);
              }
            }
            uStack_7d0 = (ulong)pbVar34;
            func_0x0412a280(pbStack_7d8,(long)pauStack_7c8 - (long)pbStack_7d8);
          }
          bVar21 = bStack_7ed;
          bVar20 = bStack_7ee;
          bVar3 = bStack_7ef;
          bVar23 = bStack_7f0;
          lVar28 = CONCAT17(bStack_7e9,
                            CONCAT16(bStack_7ea,
                                     CONCAT15(bStack_7eb,
                                              CONCAT14(bStack_7ec,
                                                       CONCAT13(bStack_7ed,
                                                                CONCAT12(bStack_7ee,
                                                                         CONCAT11(bStack_7ef,
                                                                                  bStack_7f0)))))));
          if (lVar28 != 0) {
            lVar47 = CONCAT44(uStack_7e4,
                              CONCAT13(bStack_7e5,
                                       CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8))));
            lVar57 = lVar28;
            if (lVar28 != lVar47) {
              do {
                if ((*(byte *)(lVar47 + -0x18) & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar47 + -8),
                                  *(ulong *)(lVar47 + -0x18) & 0xfffffffffffffffe);
                }
                lVar47 = lVar47 + -0x20;
              } while (lVar47 != lVar28);
              lVar57 = CONCAT17(bStack_7e9,
                                CONCAT16(bStack_7ea,
                                         CONCAT15(bStack_7eb,
                                                  CONCAT14(bStack_7ec,
                                                           CONCAT13(bStack_7ed,
                                                                    CONCAT12(bStack_7ee,
                                                                             CONCAT11(bStack_7ef,
                                                                                      bStack_7f0))))
                                                 )));
            }
            bStack_7e8 = bVar23;
            bStack_7e7 = bVar3;
            bStack_7e6 = bVar20;
            bStack_7e5 = bVar21;
            uStack_7e4 = (undefined4)((ulong)lVar28 >> 0x20);
            func_0x0412a280(lVar57,CONCAT71(uStack_7df,bStack_7e0) - lVar57);
          }
        }
        func_0x0d6b1c60(auStack_238,auStack_4a8);
        puVar26 = (undefined8 *)0x1;
        if ((uStack_488._6_1_ == '\x01') && ((bStack_3fc & 1) == 0)) {
          if ((*(long *)(param_1 + 0xd0) == 0) &&
             (cVar24 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41),
             cVar24 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0xd0) == '\0') &&
             (cVar24 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
             cVar24 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar49 = *(undefined8 *)(param_1 + 0xe0);
          pppppppuVar48 = apppppppuStack_470;
          if (cStack_44c != '\x02') {
            pppppppuVar48 = apppppppuStack_470[0];
          }
          if (iStack_450 != 0x2c0c041) {
            pppppppuVar48 = (undefined8 *******)0x0;
          }
          func_0x0cca0f30(&bStack_7f8,pppppppuVar48);
          uStack_820 = CONCAT44(uStack_5c4,uStack_5c8);
          uVar43 = CONCAT44(uStack_5bc,uStack_5c0);
          if ((uStack_5bc & 0x800000) != 0) {
            lVar47 = *(long *)((uVar43 & 0xff00ffffffffffff) - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43 & 0xff00ffffffffffff,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            uVar43 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_810 = 0;
          uVar53 = CONCAT62(uStack_5b6,uStack_5b8);
          uStack_818 = uVar43;
          if ((uStack_5b6 & 0x8000000000) != 0) {
            lVar47 = *(long *)((uVar53 & 0xff00ffffffffffff) - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar53 & 0xff00ffffffffffff,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            uVar53 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_810 = uVar53;
          func_0x0cc29670(auStack_9f8,uVar49,&bStack_7f8,&uStack_820);
          if ((uStack_810 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_810 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_810 = 0;
          if ((uStack_818 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_818 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_818 = 0;
          func_0x0cc2d800(&bStack_7f8);
          auStack_9e8._8_8_ = uStack_80;
          if (((ulong)plStack_9d8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)plStack_9d8 & 0xff00ffffffffffff) - 8);
          }
          plStack_9d8 = (long *)0x0;
          plVar32 = plStack_78;
          if (((ulong)plStack_78 & 0x80000000000000) != 0) {
            uVar43 = (ulong)plStack_78 & 0xff00ffffffffffff;
            lVar47 = *(long *)(uVar43 - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            plVar32 = (long *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          plStack_9d8 = plVar32;
          if ((uStack_9d0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9d0 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_9d0 = 0;
          uVar43 = uStack_70;
          if ((uStack_70 & 0x80000000000000) != 0) {
            uVar43 = uStack_70 & 0xff00ffffffffffff;
            lVar47 = *(long *)(uVar43 - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar43,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            uVar43 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_9c8 = (undefined8 *)CONCAT44(CONCAT22(uStack_9c8._6_2_,uStack_64),uStack_68);
          puVar26 = (undefined8 *)CONCAT44(uStack_5c4,uStack_5c8);
          uVar53 = CONCAT44(uStack_5bc,uStack_5c0);
          bStack_7f8 = (byte)uStack_5c8;
          bStack_7f7 = (byte)((uint)uStack_5c8 >> 8);
          bStack_7f6 = (byte)((uint)uStack_5c8 >> 0x10);
          bStack_7f5 = (byte)((uint)uStack_5c8 >> 0x18);
          bStack_7f4 = (byte)uStack_5c4;
          bStack_7f3 = (byte)(uStack_5c4 >> 8);
          bStack_7f2 = (byte)(uStack_5c4 >> 0x10);
          bStack_7f1 = (byte)(uStack_5c4 >> 0x18);
          uStack_9d0 = uVar43;
          if ((uStack_5bc & 0x800000) != 0) {
            lVar47 = *(long *)((uVar53 & 0xff00ffffffffffff) - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,uVar53 & 0xff00ffffffffffff,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            uVar53 = (ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          bStack_7f0 = (byte)uVar53;
          bStack_7ef = (byte)(uVar53 >> 8);
          bStack_7ee = (byte)(uVar53 >> 0x10);
          bStack_7ed = (byte)(uVar53 >> 0x18);
          bStack_7ec = (byte)(uVar53 >> 0x20);
          bStack_7eb = (byte)(uVar53 >> 0x28);
          bStack_7ea = (byte)(uVar53 >> 0x30);
          bStack_7e9 = (byte)(uVar53 >> 0x38);
          bStack_7e8 = 0;
          bStack_7e7 = 0;
          bStack_7e6 = 0;
          bStack_7e5 = 0;
          uStack_7e4 = 0;
          puVar55 = (undefined *)CONCAT62(uStack_5b6,uStack_5b8);
          if ((uStack_5b6 & 0x8000000000) != 0) {
            lVar47 = *(long *)(((ulong)puVar55 & 0xff00ffffffffffff) - 8);
            lVar28 = lVar47 + 9;
            plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar28,8);
            if (lVar28 != 0 && plVar32 == (long *)0x0) {
              func_0x0eec74c0(lVar28,8);
            }
            *plVar32 = lVar47;
            func_0x0eee2f00(plVar32 + 1,(ulong)puVar55 & 0xff00ffffffffffff,lVar47);
            *(undefined1 *)((long)plVar32 + lVar47 + 8) = 0;
            puVar55 = (undefined *)((ulong)(plVar32 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          uVar43 = uStack_9b8;
          bStack_7f0 = (byte)uStack_9b8;
          bStack_7ef = (byte)(uStack_9b8 >> 8);
          bStack_7ee = (byte)(uStack_9b8 >> 0x10);
          bStack_7ed = (byte)(uStack_9b8 >> 0x18);
          bStack_7ec = (byte)(uStack_9b8 >> 0x20);
          bStack_7eb = (byte)(uStack_9b8 >> 0x28);
          bStack_7ea = (byte)(uStack_9b8 >> 0x30);
          bStack_7e9 = (byte)(uStack_9b8 >> 0x38);
          bStack_7e8 = (byte)puStack_9b0;
          bStack_7e7 = (byte)((ulong)puStack_9b0 >> 8);
          bStack_7e6 = (byte)((ulong)puStack_9b0 >> 0x10);
          bStack_7e5 = (byte)((ulong)puStack_9b0 >> 0x18);
          uStack_7e4 = (undefined4)((ulong)puStack_9b0 >> 0x20);
          puStack_9c0 = puVar26;
          uStack_9b8 = uVar53;
          if (((ulong)puStack_9b0 & 0x80000000000000) != 0) {
            uVar53 = (ulong)puStack_9b0 & 0xff00ffffffffffff;
            puStack_9b0 = puVar55;
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,uVar53 - 8);
            puVar55 = puStack_9b0;
          }
          puStack_9b0 = puVar55;
          bStack_7e8 = 0;
          bStack_7e7 = 0;
          bStack_7e6 = 0;
          bStack_7e5 = 0;
          uStack_7e4 = 0;
          if ((uVar43 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar43 & 0xff00ffffffffffff) - 8);
          }
          if (*(char *)(**(long **)(lStack_b10 + 0xe8) + 0x88) == '\x01') {
            pbStack_7d8 = (byte *)0x0;
            uStack_7d0 = 0;
            bStack_7e8 = 0;
            bStack_7e7 = 0;
            bStack_7e6 = 0;
            bStack_7e5 = 0;
            uStack_7e4 = 0;
            bStack_7e0 = 0;
            uStack_7df = 0;
            bStack_7f8 = 0;
            bStack_7f7 = 0;
            bStack_7f6 = 0;
            bStack_7f5 = 0;
            bStack_7f4 = 0;
            bStack_7f3 = 0;
            bStack_7f2 = 0;
            bStack_7f1 = 0;
            bStack_7f0 = 0;
            bStack_7ef = 0;
            bStack_7ee = 0;
            bStack_7ed = 0;
            bStack_7ec = 0;
            bStack_7eb = 0;
            bStack_7ea = 0;
            bStack_7e9 = 0;
            cVar24 = func_0x0b5f94a0(auStack_9a8,0x28,1,&bStack_7f8);
            if (cVar24 == '\0') {
LAB_0cc25995:
              bVar59 = false;
            }
            else {
              if ((bStack_7f8 & 1) == 0) {
                if (bStack_7f8 >> 1 != 9) goto LAB_0cc25995;
              }
              else if (CONCAT17(bStack_7e9,
                                CONCAT16(bStack_7ea,
                                         CONCAT15(bStack_7eb,
                                                  CONCAT14(bStack_7ec,
                                                           CONCAT13(bStack_7ed,
                                                                    CONCAT12(bStack_7ee,
                                                                             CONCAT11(bStack_7ef,
                                                                                      bStack_7f0))))
                                                 ))) != 9) goto LAB_0cc25995;
              pbVar34 = &bStack_7f7;
              if ((bStack_7f8 & 1) != 0) {
                pbVar34 = (byte *)CONCAT44(uStack_7e4,
                                           CONCAT13(bStack_7e5,
                                                    CONCAT12(bStack_7e6,
                                                             CONCAT11(bStack_7e7,bStack_7e8))));
              }
              bVar59 = pbVar34[8] == DAT_013abf54 && *(long *)pbVar34 == _DAT_013abf4c;
            }
            if ((bStack_7e0 & 1) != 0) {
              func_0x0412a280(uStack_7d0,CONCAT71(uStack_7df,bStack_7e0) & 0xfffffffffffffffe);
            }
            if ((bStack_7f8 & 1) != 0) {
              func_0x0412a280(CONCAT44(uStack_7e4,
                                       CONCAT13(bStack_7e5,
                                                CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8))
                                               )),
                              CONCAT17(bStack_7f1,
                                       CONCAT16(bStack_7f2,
                                                CONCAT15(bStack_7f3,
                                                         CONCAT14(bStack_7f4,
                                                                  CONCAT13(bStack_7f5,
                                                                           CONCAT12(bStack_7f6,
                                                                                    CONCAT11(
                                                  bStack_7f7,bStack_7f8))))))) & 0xfffffffffffffffe)
              ;
              if (bVar59) goto LAB_0cc259d0;
              goto LAB_0cc25af0;
            }
            if (!bVar59) goto LAB_0cc25af0;
LAB_0cc259d0:
            uStack_8e8 = 1;
            bStack_7f8 = 0;
            bStack_7f7 = 0;
            bStack_7f6 = 0;
            bStack_7f5 = 0;
            bStack_7f4 = 0;
            bStack_7f3 = 0;
            bStack_7f2 = 0;
            bStack_7f1 = 0;
            if ((auStack_9a8[0] & 1) == 0) {
              bStack_7e0 = (byte)puStack_998;
              uStack_7df = (undefined7)((ulong)puStack_998 >> 8);
              bStack_7ef = auStack_9a8[1];
              bStack_7ee = auStack_9a8[2];
              bStack_7ed = auStack_9a8[3];
              bStack_7ec = auStack_9a8[4];
              bStack_7eb = auStack_9a8[5];
              bStack_7ea = auStack_9a8[6];
              bStack_7e9 = auStack_9a8[7];
              bStack_7e8 = auStack_9a8[8];
              bStack_7e7 = auStack_9a8[9];
              bStack_7e6 = auStack_9a8[10];
              bStack_7e5 = auStack_9a8[0xb];
              uStack_7e4 = auStack_9a8._12_4_;
              bStack_7f0 = auStack_9a8[0];
            }
            else {
              func_0x0412e5e0(&bStack_7f0,puStack_998,auStack_9a8._8_8_);
            }
            pbStack_7d8 = (byte *)0x0;
            if ((bStack_7f0 & 1) == 0) {
              if (bStack_7f0 >> 1 != 0) goto LAB_0cc25cf2;
LAB_0cc25dc5:
              uVar43 = 0;
            }
            else {
              if (CONCAT44(uStack_7e4,
                           CONCAT13(bStack_7e5,CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8)))
                          ) == 0) goto LAB_0cc25dc5;
LAB_0cc25cf2:
              pbVar34 = &bStack_7ef;
              if ((bStack_7f0 & 1) != 0) {
                pbVar34 = (byte *)CONCAT71(uStack_7df,bStack_7e0);
              }
              if ((pbVar34 == (byte *)0x0) || (*pbVar34 == 0)) goto LAB_0cc25dc5;
              uVar53 = func_0x0eee2e90(pbVar34);
              uVar43 = 0xcbf29ce484222325;
              if (uVar53 != 0) {
                if (7 < uVar53) {
                  uVar42 = uVar53 & 0xfffffffffffffff8;
                  do {
                    uVar43 = (((((((uVar43 * 0x100000001b3 ^ (ulong)*pbVar34) * 0x100000001b3 ^
                                  (ulong)pbVar34[1]) * 0x100000001b3 ^ (ulong)pbVar34[2]) *
                                 0x100000001b3 ^ (ulong)pbVar34[3]) * 0x100000001b3 ^
                               (ulong)pbVar34[4]) * 0x100000001b3 ^ (ulong)pbVar34[5]) *
                              0x100000001b3 ^ (ulong)pbVar34[6]) * 0x100000001b3 ^ (ulong)pbVar34[7]
                    ;
                    pbVar34 = pbVar34 + 8;
                    uVar42 = uVar42 - 8;
                  } while (uVar42 != 0);
                }
                if ((uVar53 & 7) != 0) {
                  uVar42 = 0;
                  do {
                    uVar43 = uVar43 * 0x100000001b3 ^ (ulong)pbVar34[uVar42];
                    uVar42 = uVar42 + 1;
                  } while (((uint)uVar53 & 7) != uVar42);
                }
              }
            }
            bStack_7f8 = (byte)uVar43;
            bStack_7f7 = (byte)(uVar43 >> 8);
            bStack_7f6 = (byte)(uVar43 >> 0x10);
            bStack_7f5 = (byte)(uVar43 >> 0x18);
            bStack_7f4 = (byte)(uVar43 >> 0x20);
            bStack_7f3 = (byte)(uVar43 >> 0x28);
            bStack_7f2 = (byte)(uVar43 >> 0x30);
            bStack_7f1 = (byte)(uVar43 >> 0x38);
            lVar28 = func_0x0cc422f0(0xf6ff9e0,&bStack_7f8,0);
            if ((bStack_7f0 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_7df,bStack_7e0),
                              CONCAT17(bStack_7e9,
                                       CONCAT16(bStack_7ea,
                                                CONCAT15(bStack_7eb,
                                                         CONCAT14(bStack_7ec,
                                                                  CONCAT13(bStack_7ed,
                                                                           CONCAT12(bStack_7ee,
                                                                                    CONCAT11(
                                                  bStack_7ef,bStack_7f0))))))) & 0xfffffffffffffffe)
              ;
            }
            if (lVar28 != 0) {
              uVar69 = (uint)*(ushort *)(lVar28 + 0x14e);
              if ((-1 < (int)uStack_990) &&
                 (uVar69 = uStack_990, uStack_990 != *(ushort *)(lVar28 + 0x14e))) {
                puVar35 = auStack_9a8 + 1;
                if ((auStack_9a8[0] & 1) != 0) {
                  puVar35 = puStack_998;
                }
                bStack_7f8 = (byte)puVar35;
                bStack_7f7 = (byte)((ulong)puVar35 >> 8);
                bStack_7f6 = (byte)((ulong)puVar35 >> 0x10);
                bStack_7f5 = (byte)((ulong)puVar35 >> 0x18);
                bStack_7f4 = (byte)((ulong)puVar35 >> 0x20);
                bStack_7f3 = (byte)((ulong)puVar35 >> 0x28);
                bStack_7f2 = (byte)((ulong)puVar35 >> 0x30);
                bStack_7f1 = (byte)((ulong)puVar35 >> 0x38);
                func_0x0b64b060(1,3,6,&UNK_011ae94c,&bStack_7f8);
                goto LAB_0cc265a9;
              }
              uStack_990 = uVar69;
              bVar23 = **(byte **)(lVar28 + 0x20);
              if (bStack_98c != bVar23) {
                puVar35 = auStack_9a8 + 1;
                if ((auStack_9a8[0] & 1) != 0) {
                  puVar35 = puStack_998;
                }
                func_0x0cc2dab0(puVar35,*(undefined8 *)(&UNK_0efe56c8 + (ulong)bVar23 * 8),
                                *(undefined8 *)(&UNK_0efe56c8 + (ulong)bStack_98c * 8));
                bStack_98c = bVar23;
              }
              goto LAB_0cc25b0b;
            }
            if (-1 < (int)uStack_990) goto LAB_0cc25b0b;
            puVar35 = auStack_9a8 + 1;
            if ((auStack_9a8[0] & 1) != 0) {
              puVar35 = puStack_998;
            }
            func_0x0cc2dc50(puVar35);
LAB_0cc265a9:
            puVar35 = auStack_9a8 + 1;
            if ((auStack_9a8[0] & 1) != 0) {
              puVar35 = puStack_998;
            }
            bStack_7f8 = (byte)puVar35;
            bStack_7f7 = (byte)((ulong)puVar35 >> 8);
            bStack_7f6 = (byte)((ulong)puVar35 >> 0x10);
            bStack_7f5 = (byte)((ulong)puVar35 >> 0x18);
            bStack_7f4 = (byte)((ulong)puVar35 >> 0x20);
            bStack_7f3 = (byte)((ulong)puVar35 >> 0x28);
            bStack_7f2 = (byte)((ulong)puVar35 >> 0x30);
            bStack_7f1 = (byte)((ulong)puVar35 >> 0x38);
            func_0x0b5b89e0(1,3,6,&UNK_0129c095);
LAB_0cc275cb:
            func_0x0cc13c30(auStack_9f8);
            puVar26 = (undefined8 *)(ulong)uStack_b24;
            goto LAB_0cc275d9;
          }
LAB_0cc25af0:
          uStack_990 = *(uint *)(param_1 + 0xb0);
          *(uint *)(param_1 + 0xb0) = uStack_990 + 1;
LAB_0cc25b0b:
          if (((char *)*puStack_a00 != (char *)0x0) && (*(char *)*puStack_a00 == '\x01')) {
            auVar17._12_4_ = 0;
            auVar17._0_12_ = stack0xfffffffffffff54c;
            _auStack_ab8 = auVar17 << 0x20;
            if (*(char *)(puStack_a00[2] + 0x58) == '\0') {
              func_0x0ee1ccb0();
              if (*(char *)(lStack_a80 + -0xa58) == '\0') {
                *(undefined1 *)(lStack_a80 + -0xa58) = 1;
                func_0x0417d010(&UNK_0ee1c840,lStack_a80 + -0xa68,0xf53dab8);
                lVar28 = plStack_4b8[1];
              }
              else {
                lVar28 = plStack_4b8[1];
              }
              if (lVar28 != 0) {
                plVar32 = (long *)func_0x0412c300();
                bStack_7f0 = (byte)plVar32;
                bStack_7ef = (byte)((ulong)plVar32 >> 8);
                bStack_7ee = (byte)((ulong)plVar32 >> 0x10);
                bStack_7ed = (byte)((ulong)plVar32 >> 0x18);
                bStack_7ec = (byte)((ulong)plVar32 >> 0x20);
                bStack_7eb = (byte)((ulong)plVar32 >> 0x28);
                bStack_7ea = (byte)((ulong)plVar32 >> 0x30);
                bStack_7e9 = (byte)((ulong)plVar32 >> 0x38);
                if (plVar32 != (long *)0x0) {
                  lVar28 = *plStack_4b8;
                  bStack_7f8 = (byte)lVar28;
                  bStack_7f7 = (byte)((ulong)lVar28 >> 8);
                  bStack_7f6 = (byte)((ulong)lVar28 >> 0x10);
                  bStack_7f5 = (byte)((ulong)lVar28 >> 0x18);
                  bStack_7f4 = (byte)((ulong)lVar28 >> 0x20);
                  bStack_7f3 = (byte)((ulong)lVar28 >> 0x28);
                  bStack_7f2 = (byte)((ulong)lVar28 >> 0x30);
                  bStack_7f1 = (byte)((ulong)lVar28 >> 0x38);
                  if (lVar28 != 0) {
                    func_0x0ee23f20(lVar28 + 0x38,auStack_ab8,auStack_9a8);
                  }
                  LOCK();
                  plVar33 = plVar32 + 1;
                  lVar28 = *plVar33;
                  *plVar33 = *plVar33 + -1;
                  UNLOCK();
                  if (lVar28 == 0) {
                    (**(code **)(*plVar32 + 0x10))(plVar32);
                    func_0x0412c2d0(plVar32);
                  }
                }
              }
            }
          }
          cVar24 = func_0x0551ca70(&puStack_9c0,&UNK_0f3f6830);
          if (cVar24 == '\0') {
LAB_0cc26eb0:
            lVar28 = func_0x0cba57f0(&uStack_910,&DAT_01d4a638);
            if (lVar28 != 0) {
              lVar47 = *(long *)(lVar28 + 0x28);
              bStack_7f8 = (byte)lVar47;
              bStack_7f7 = (byte)((ulong)lVar47 >> 8);
              bStack_7f6 = (byte)((ulong)lVar47 >> 0x10);
              bStack_7f5 = (byte)((ulong)lVar47 >> 0x18);
              bStack_7f4 = (byte)((ulong)lVar47 >> 0x20);
              bStack_7f3 = (byte)((ulong)lVar47 >> 0x28);
              bStack_7f2 = (byte)((ulong)lVar47 >> 0x30);
              bStack_7f1 = (byte)((ulong)lVar47 >> 0x38);
              plVar32 = *(long **)(lVar28 + 0x30);
              bStack_7f0 = (byte)plVar32;
              bStack_7ef = (byte)((ulong)plVar32 >> 8);
              bStack_7ee = (byte)((ulong)plVar32 >> 0x10);
              bStack_7ed = (byte)((ulong)plVar32 >> 0x18);
              bStack_7ec = (byte)((ulong)plVar32 >> 0x20);
              bStack_7eb = (byte)((ulong)plVar32 >> 0x28);
              bStack_7ea = (byte)((ulong)plVar32 >> 0x30);
              bStack_7e9 = (byte)((ulong)plVar32 >> 0x38);
              if (plVar32 != (long *)0x0) {
                LOCK();
                plVar32[1] = plVar32[1] + 1;
                UNLOCK();
              }
              if (lVar47 != 0) {
                if ((DAT_0f6fdbd8 == '\0') && (iVar25 = FUN_04108328(&DAT_0f6fdbd8), iVar25 != 0)) {
                  func_0x04160690(&DAT_0f6fdbc0,&UNK_0148ae9b);
                  __cxa_atexit(&SUB_0412ed50,&DAT_0f6fdbc0,0xf53dab8);
                  func_0x0410844d(&DAT_0f6fdbd8);
                }
                lVar28 = func_0x0cba57f0(&uStack_910,&DAT_0f6fdbc0);
                if (lVar28 != 0) {
                  lVar57 = *(long *)(lVar28 + 0x28);
                  plVar32 = *(long **)(lVar28 + 0x30);
                  if (plVar32 != (long *)0x0) {
                    LOCK();
                    plVar32[1] = plVar32[1] + 1;
                    UNLOCK();
                  }
                  if ((lVar57 != 0) && (*(char *)(lVar57 + 8) == '\x01')) {
                    *(undefined1 *)(lVar47 + 0xb) = 1;
                  }
                  if (plVar32 != (long *)0x0) {
                    LOCK();
                    plVar33 = plVar32 + 1;
                    lVar28 = *plVar33;
                    *plVar33 = *plVar33 + -1;
                    UNLOCK();
                    if (lVar28 == 0) {
                      (**(code **)(*plVar32 + 0x10))(plVar32);
                      func_0x0412c2d0(plVar32);
                    }
                  }
                }
                plVar32 = (long *)CONCAT17(bStack_7e9,
                                           CONCAT16(bStack_7ea,
                                                    CONCAT15(bStack_7eb,
                                                             CONCAT14(bStack_7ec,
                                                                      CONCAT13(bStack_7ed,
                                                                               CONCAT12(bStack_7ee,
                                                                                        CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
              }
              if (plVar32 != (long *)0x0) {
                LOCK();
                plVar33 = plVar32 + 1;
                lVar28 = *plVar33;
                *plVar33 = *plVar33 + -1;
                UNLOCK();
                if (lVar28 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  func_0x0412c2d0(plVar32);
                }
              }
            }
            puVar37 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
            if (puVar37 == (ulong *)0x0) {
              func_0x0eec74c0(0x1b0,0);
            }
            uVar42 = uStack_870;
            uVar53 = uStack_8e0;
            uVar43 = uStack_910;
            *puVar37 = auStack_9f8._0_8_;
            puVar37[1] = 0;
            puVar37[1] = auStack_9f8._8_8_;
            auStack_9f8._8_8_ = 0;
            puVar37[2] = 0;
            puVar37[2] = auStack_9e8._0_8_;
            uVar49 = auStack_9e8._8_8_;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = auStack_9e8._8_8_;
            auStack_9e8 = auVar18 << 0x40;
            puVar37[3] = uVar49;
            puVar37[4] = 0;
            puVar37[4] = (ulong)plStack_9d8;
            plStack_9d8 = (long *)0x0;
            puVar37[5] = 0;
            puVar37[5] = uStack_9d0;
            uStack_9d0 = 0;
            *(undefined2 *)((long)puVar37 + 0x34) = uStack_9c8._4_2_;
            *(undefined4 *)(puVar37 + 6) = (undefined4)uStack_9c8;
            puVar37[7] = (ulong)puStack_9c0;
            puVar37[8] = 0;
            puVar37[8] = uStack_9b8;
            uStack_9b8 = 0;
            puVar37[9] = 0;
            puVar37[9] = (ulong)puStack_9b0;
            puStack_9b0 = (undefined *)0x0;
            puVar37[0xc] = (ulong)puStack_998;
            puVar37[10] = auStack_9a8._0_8_;
            puVar37[0xb] = auStack_9a8._8_8_;
            auStack_9a8 = (undefined1  [16])0x0;
            puStack_998 = (undefined1 *)0x0;
            *(byte *)((long)puVar37 + 0x6c) = bStack_98c;
            *(uint *)(puVar37 + 0xd) = uStack_990;
            *(undefined1 (*) [16])(puVar37 + 0xe) = (undefined1  [16])0x0;
            puVar37[0x10] = 0;
            puVar37[0xe] = auStack_988._0_8_;
            puVar37[0xf] = auStack_988._8_8_;
            puVar37[0x10] = (ulong)ppuStack_978;
            auStack_988 = (undefined1  [16])0x0;
            ppuStack_978 = (undefined1 **)0x0;
            *(undefined1 (*) [16])(puVar37 + 0x11) = (undefined1  [16])0x0;
            puVar37[0x13] = 0;
            puVar37[0x11] = auStack_970._0_8_;
            puVar37[0x12] = auStack_970._8_8_;
            puVar37[0x13] = uStack_960;
            auStack_970 = (undefined1  [16])0x0;
            uStack_960 = 0;
            *(undefined4 *)((long)puVar37 + 0xa7) = uStack_951;
            puVar37[0x14] = CONCAT17((undefined1)uStack_951,uStack_958);
            *(undefined1 (*) [16])(puVar37 + 0x16) = (undefined1  [16])0x0;
            puVar37[0x18] = 0;
            puVar37[0x16] = auStack_948._0_8_;
            puVar37[0x17] = auStack_948._8_8_;
            puVar37[0x18] = uStack_938;
            auStack_948 = (undefined1  [16])0x0;
            uStack_938 = 0;
            puVar37[0x1b] = uStack_920;
            puVar37[0x19] = auStack_930._0_8_;
            puVar37[0x1a] = auStack_930._8_8_;
            auStack_930 = (undefined1  [16])0x0;
            uStack_920 = 0;
            *(undefined2 *)(puVar37 + 0x1c) = uStack_918;
            uStack_910 = 0;
            puVar37[0x1d] = uVar43;
            puVar37[0x1e] = uStack_908;
            puVar37[0x1f] = auStack_900._0_8_;
            uStack_908 = 0;
            puVar37[0x20] = auStack_900._8_8_;
            *(undefined4 *)(puVar37 + 0x21) = uStack_8f0;
            if (auStack_900._8_8_ != 0) {
              uVar38 = *(ulong *)(auStack_900._0_8_ + 8);
              uVar5 = puVar37[0x1e];
              if ((uVar5 & uVar5 - 1) == 0) {
                uVar38 = uVar38 & uVar5 - 1;
              }
              else if (uVar5 <= uVar38) {
                if ((uVar38 | uVar5) >> 0x20 == 0) {
                  uVar38 = (uVar38 & 0xffffffff) % (uVar5 & 0xffffffff);
                }
                else {
                  uVar38 = uVar38 % uVar5;
                }
              }
              *(ulong **)(uVar43 + uVar38 * 8) = puVar37 + 0x1f;
              auStack_900 = (undefined1  [16])0x0;
            }
            *(undefined1 *)(puVar37 + 0x22) = uStack_8e8;
            uStack_8e0 = 0;
            puVar37[0x23] = uVar53;
            puVar37[0x24] = uStack_8d8;
            puVar37[0x25] = auStack_8d0._0_8_;
            uStack_8d8 = 0;
            puVar37[0x26] = auStack_8d0._8_8_;
            *(undefined4 *)(puVar37 + 0x27) = uStack_8c0;
            if (auStack_8d0._8_8_ != 0) {
              uVar43 = *(ulong *)(auStack_8d0._0_8_ + 8);
              uVar38 = puVar37[0x24];
              if ((uVar38 & uVar38 - 1) == 0) {
                uVar43 = uVar43 & uVar38 - 1;
              }
              else if (uVar38 <= uVar43) {
                if ((uVar43 | uVar38) >> 0x20 == 0) {
                  uVar43 = (uVar43 & 0xffffffff) % (uVar38 & 0xffffffff);
                }
                else {
                  uVar43 = uVar43 % uVar38;
                }
              }
              *(ulong **)(uVar53 + uVar43 * 8) = puVar37 + 0x25;
              auStack_8d0 = (undefined1  [16])0x0;
            }
            *(undefined1 (*) [16])(puVar37 + 0x28) = (undefined1  [16])0x0;
            puVar37[0x2a] = 0;
            puVar37[0x28] = auStack_8b8._0_8_;
            puVar37[0x29] = auStack_8b8._8_8_;
            puVar37[0x2a] = uStack_8a8;
            auStack_8b8 = (undefined1  [16])0x0;
            uStack_8a8 = 0;
            *(undefined1 (*) [16])(puVar37 + 0x2b) = (undefined1  [16])0x0;
            puVar37[0x2d] = 0;
            puVar37[0x2b] = auStack_8a0._0_8_;
            puVar37[0x2c] = auStack_8a0._8_8_;
            puVar37[0x2d] = (ulong)puStack_890;
            auStack_8a0 = (undefined1  [16])0x0;
            puStack_890 = (undefined8 *)0x0;
            *(undefined1 (*) [16])(puVar37 + 0x2e) = (undefined1  [16])0x0;
            puVar37[0x30] = 0;
            puVar37[0x2e] = auStack_888._0_8_;
            puVar37[0x2f] = auStack_888._8_8_;
            puVar37[0x30] = uStack_878;
            auStack_888 = (undefined1  [16])0x0;
            uStack_878 = 0;
            uStack_870 = 0;
            puVar37[0x31] = uVar42;
            puVar37[0x32] = uStack_868;
            puVar37[0x33] = auStack_860._0_8_;
            uStack_868 = 0;
            puVar37[0x34] = auStack_860._8_8_;
            *(undefined4 *)(puVar37 + 0x35) = uStack_850;
            if (auStack_860._8_8_ != 0) {
              uVar43 = *(ulong *)(auStack_860._0_8_ + 8);
              uVar53 = puVar37[0x32];
              if ((uVar53 & uVar53 - 1) == 0) {
                uVar43 = uVar43 & uVar53 - 1;
              }
              else if (uVar53 <= uVar43) {
                if ((uVar43 | uVar53) >> 0x20 == 0) {
                  uVar43 = (uVar43 & 0xffffffff) % (uVar53 & 0xffffffff);
                }
                else {
                  uVar43 = uVar43 % uVar53;
                }
              }
              *(ulong **)(uVar42 + uVar43 * 8) = puVar37 + 0x33;
              auStack_860 = (undefined1  [16])0x0;
            }
            puStack_828 = puVar37;
            lVar47 = func_0x0cd2bbe0(lStack_258,puVar37 + 10);
            puStack_828 = (ulong *)0x0;
            lVar28 = *(long *)(lVar47 + 0x28);
            *(ulong **)(lVar47 + 0x28) = puVar37;
            uStack_b24 = (uint)CONCAT71((int7)((ulong)lVar47 >> 8),1);
            if (lVar28 != 0) {
              func_0x0cc13c30(lVar28);
              func_0x0412a280(lVar28,0x1b0);
              puStack_828 = (ulong *)0x0;
            }
            goto LAB_0cc275cb;
          }
          uVar49 = auStack_8a0._8_8_;
          for (plVar32 = (long *)auStack_8a0._0_8_; plVar32 != (long *)uVar49; plVar32 = plVar32 + 2
              ) {
            pbVar34 = (byte *)(**(code **)(*(long *)*plVar32 + 0x10))();
            bVar23 = *pbVar34;
            if ((bVar23 & 1) == 0) {
              uVar43 = (ulong)(bVar23 >> 1);
              if ((DAT_0f706ea8 & 1) != 0) goto LAB_0cc25bf1;
LAB_0cc25bc6:
              if (uVar43 == DAT_0f706ea8 >> 1) {
LAB_0cc25bfd:
                if ((bVar23 & 1) == 0) {
                  pbVar34 = pbVar34 + 1;
                }
                else {
                  pbVar34 = *(byte **)(pbVar34 + 0x10);
                }
                uVar44 = 0xf706ea9;
                if ((DAT_0f706ea8 & 1) != 0) {
                  uVar44 = _DAT_0f706eb8;
                }
                iVar25 = bcmp(pbVar34,uVar44);
                if (iVar25 == 0) {
                  lVar28 = *plVar32;
                  goto LAB_0cc25f1f;
                }
              }
            }
            else {
              uVar43 = *(ulong *)(pbVar34 + 8);
              if ((DAT_0f706ea8 & 1) == 0) goto LAB_0cc25bc6;
LAB_0cc25bf1:
              if (uVar43 == _DAT_0f706eb0) goto LAB_0cc25bfd;
            }
          }
          lVar28 = 0;
LAB_0cc25f1f:
          bStack_7f8 = 0x26;
          bStack_7f7 = DAT_0131c4c6;
          bStack_7f6 = DAT_0131c4c6._1_1_;
          bStack_7f5 = DAT_0131c4c6._2_1_;
          bStack_7f4 = DAT_0131c4c6._3_1_;
          bStack_7f3 = DAT_0131c4c6._4_1_;
          bStack_7f2 = DAT_0131c4c6._5_1_;
          bStack_7f1 = DAT_0131c4c6._6_1_;
          bStack_7f0 = DAT_0131c4c6._7_1_;
          bStack_7ef = DAT_0131c4c6._8_1_;
          bStack_7ee = DAT_0131c4c6._9_1_;
          bStack_7ed = DAT_0131c4c6._10_1_;
          bStack_7ec = DAT_0131c4c6._11_1_;
          bStack_7eb = DAT_0131c4c6._12_1_;
          bStack_7ea = DAT_0131c4c6._13_1_;
          bStack_7e9 = DAT_0131c4c6._14_1_;
          bStack_7e8 = 99;
          bStack_7e7 = 0x75;
          bStack_7e6 = 0x62;
          bStack_7e5 = 0x65;
          uVar49 = auStack_8a0._8_8_;
          for (plVar32 = (long *)auStack_8a0._0_8_; uStack_b20._4_4_ = auVar2._4_4_,
              plVar32 != (long *)uVar49; plVar32 = plVar32 + 2) {
            pbVar34 = (byte *)(**(code **)(*(long *)*plVar32 + 0x10))();
            bVar23 = *pbVar34;
            if ((bVar23 & 1) == 0) {
              if (bVar23 >> 1 == 0x13) goto LAB_0cc25fca;
            }
            else if (*(long *)(pbVar34 + 8) == 0x13) {
LAB_0cc25fca:
              if ((bVar23 & 1) == 0) {
                pbVar34 = pbVar34 + 1;
              }
              else {
                pbVar34 = *(byte **)(pbVar34 + 0x10);
              }
              auVar1 = *(undefined1 (*) [16])(pbVar34 + 3);
              auVar64[0] = -(bStack_7f7 == *pbVar34);
              auVar64[1] = -(bStack_7f6 == pbVar34[1]);
              auVar64[2] = -(bStack_7f5 == pbVar34[2]);
              auVar64[3] = -(bStack_7f4 == pbVar34[3]);
              auVar64[4] = -(bStack_7f3 == pbVar34[4]);
              auVar64[5] = -(bStack_7f2 == pbVar34[5]);
              auVar64[6] = -(bStack_7f1 == pbVar34[6]);
              auVar64[7] = -(bStack_7f0 == pbVar34[7]);
              auVar64[8] = -(bStack_7ef == pbVar34[8]);
              auVar64[9] = -(bStack_7ee == pbVar34[9]);
              auVar64[10] = -(bStack_7ed == pbVar34[10]);
              auVar64[0xb] = -(bStack_7ec == pbVar34[0xb]);
              auVar64[0xc] = -(bStack_7eb == pbVar34[0xc]);
              auVar64[0xd] = -(bStack_7ea == pbVar34[0xd]);
              auVar64[0xe] = -(bStack_7e9 == pbVar34[0xe]);
              auVar64[0xf] = -(bStack_7e8 == pbVar34[0xf]);
              auVar60[0] = -(bStack_7f4 == auVar1[0]);
              auVar60[1] = -(bStack_7f3 == auVar1[1]);
              auVar60[2] = -(bStack_7f2 == auVar1[2]);
              auVar60[3] = -(bStack_7f1 == auVar1[3]);
              auVar60[4] = -(bStack_7f0 == auVar1[4]);
              auVar60[5] = -(bStack_7ef == auVar1[5]);
              auVar60[6] = -(bStack_7ee == auVar1[6]);
              auVar60[7] = -(bStack_7ed == auVar1[7]);
              auVar60[8] = -(bStack_7ec == auVar1[8]);
              auVar60[9] = -(bStack_7eb == auVar1[9]);
              auVar60[10] = -(bStack_7ea == auVar1[10]);
              auVar60[0xb] = -(bStack_7e9 == auVar1[0xb]);
              auVar60[0xc] = -(bStack_7e8 == auVar1[0xc]);
              auVar60[0xd] = -(bStack_7e7 == auVar1[0xd]);
              auVar60[0xe] = -(bStack_7e6 == auVar1[0xe]);
              auVar60[0xf] = -(bStack_7e5 == auVar1[0xf]);
              auVar60 = auVar60 & auVar64;
              if ((ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) == 0xffff) {
                uStack_b20 = CONCAT44(uStack_b20._4_4_,(uint)CONCAT11(0xff,*plVar32 != 0));
                goto joined_r0x0cc25ff7;
              }
            }
          }
          uStack_b20 = (ulong)uStack_b20._4_4_ << 0x20;
joined_r0x0cc25ff7:
          bVar23 = 1;
          if (lVar28 != 0) {
            bVar23 = 1;
            plVar32 = *(long **)(lVar28 + 0x20);
            if (plVar32 != (long *)0x0) {
              bVar23 = 1;
              do {
                bVar23 = *(byte *)((long)plVar32 + 0x54) < 0x12 & bVar23 &
                         (byte)(0x20220 >> (*(byte *)((long)plVar32 + 0x54) & 0x1f));
                plVar32 = (long *)*plVar32;
              } while (plVar32 != (long *)0x0);
            }
          }
          uVar49 = auStack_8a0._8_8_;
          auStack_3b8[0] = bVar23;
          for (puVar26 = (undefined8 *)auStack_8a0._0_8_; puVar26 != (undefined8 *)uVar49;
              puVar26 = puVar26 + 2) {
            pbVar34 = (byte *)(**(code **)(*(long *)*puVar26 + 0x10))();
            bVar3 = *pbVar34;
            if ((bVar3 & 1) == 0) {
              if (bVar3 >> 1 == 0x12) goto LAB_0cc2619a;
            }
            else if (*(long *)(pbVar34 + 8) == 0x12) {
LAB_0cc2619a:
              if ((bVar3 & 1) == 0) {
                pbVar34 = pbVar34 + 1;
              }
              else {
                pbVar34 = *(byte **)(pbVar34 + 0x10);
              }
              auVar62[0] = -(DAT_01d64281 == *pbVar34);
              auVar62[1] = -(UNK_01d64282 == pbVar34[1]);
              auVar62[2] = -(UNK_01d64283 == pbVar34[2]);
              auVar62[3] = -(UNK_01d64284 == pbVar34[3]);
              auVar62[4] = -(UNK_01d64285 == pbVar34[4]);
              auVar62[5] = -(UNK_01d64286 == pbVar34[5]);
              auVar62[6] = -(UNK_01d64287 == pbVar34[6]);
              auVar62[7] = -(UNK_01d64288 == pbVar34[7]);
              auVar62[8] = -(UNK_01d64289 == pbVar34[8]);
              auVar62[9] = -(UNK_01d6428a == pbVar34[9]);
              auVar62[10] = -(UNK_01d6428b == pbVar34[10]);
              auVar62[0xb] = -(UNK_01d6428c == pbVar34[0xb]);
              auVar62[0xc] = -(UNK_01d6428d == pbVar34[0xc]);
              auVar62[0xd] = -(UNK_01d6428e == pbVar34[0xd]);
              auVar62[0xe] = -(UNK_01d6428f == pbVar34[0xe]);
              auVar62[0xf] = -(UNK_01d64290 == pbVar34[0xf]);
              auVar65[0] = -((char)_DAT_01d64291 == (char)*(undefined2 *)(pbVar34 + 0x10));
              auVar65[1] = -((char)((ushort)_DAT_01d64291 >> 8) ==
                            (char)((ushort)*(undefined2 *)(pbVar34 + 0x10) >> 8));
              auVar65[2] = 0xff;
              auVar65[3] = 0xff;
              auVar65[4] = 0xff;
              auVar65[5] = 0xff;
              auVar65[6] = 0xff;
              auVar65[7] = 0xff;
              auVar65[8] = 0xff;
              auVar65[9] = 0xff;
              auVar65[10] = 0xff;
              auVar65[0xb] = 0xff;
              auVar65[0xc] = 0xff;
              auVar65[0xd] = 0xff;
              auVar65[0xe] = 0xff;
              auVar65[0xf] = 0xff;
              auVar65 = auVar65 & auVar62;
              if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar65[0xf] >> 7) << 0xf) == 0xffff) {
                plVar32 = (long *)*puVar26;
                if (plVar32 != (long *)0x0) {
                  plVar33 = plVar32 + 2;
                  lVar47 = plVar32[2];
                  if (lVar47 != _DAT_0f706810) {
LAB_0cc27e69:
                    plVar32[6] = 0;
                    plStack_a68 = plVar32;
                    if (lVar47 == _DAT_0f706838) {
                      bVar3 = *(byte *)(plVar32 + 3);
                      if ((bVar3 & 1) == 0) {
                        uVar43 = (ulong)(bVar3 >> 1);
                        if ((DAT_0f706840 & 1) != 0) goto LAB_0cc27eb9;
LAB_0cc27e9e:
                        if (uVar43 != DAT_0f706840 >> 1) goto LAB_0cc27f0b;
                      }
                      else {
                        uVar43 = plVar32[4];
                        if ((DAT_0f706840 & 1) == 0) goto LAB_0cc27e9e;
LAB_0cc27eb9:
                        if (uVar43 != _DAT_0f706848) goto LAB_0cc27f0b;
                      }
                      if ((bVar3 & 1) == 0) {
                        lVar47 = (long)plVar32 + 0x19;
                      }
                      else {
                        lVar47 = plVar32[5];
                      }
                      uVar49 = 0xf706841;
                      if ((DAT_0f706840 & 1) != 0) {
                        uVar49 = _DAT_0f706850;
                      }
                      iVar25 = bcmp(lVar47,uVar49);
                      if (iVar25 == 0) {
                        plStack_a68[6] = (long)&DAT_0f706838;
                        plVar32 = plStack_a68;
                        _DAT_0f706858 = plVar33;
                        goto LAB_0cc27f49;
                      }
                    }
LAB_0cc27f0b:
                    uStack_b24._0_1_ = 0;
                    goto LAB_0cc261a8;
                  }
                  if (((undefined *)plVar32[6] != &DAT_0f706810) || (_DAT_0f706830 != plVar33)) {
                    bVar3 = *(byte *)(plVar32 + 3);
                    if ((bVar3 & 1) == 0) {
                      uVar43 = (ulong)(bVar3 >> 1);
                      if ((DAT_0f706818 & 1) != 0) goto LAB_0cc27e1d;
LAB_0cc2656a:
                      if (uVar43 != DAT_0f706818 >> 1) goto LAB_0cc27e69;
                    }
                    else {
                      uVar43 = plVar32[4];
                      if ((DAT_0f706818 & 1) == 0) goto LAB_0cc2656a;
LAB_0cc27e1d:
                      if (uVar43 != _DAT_0f706820) goto LAB_0cc27e69;
                    }
                    if ((bVar3 & 1) == 0) {
                      lVar57 = (long)plVar32 + 0x19;
                    }
                    else {
                      lVar57 = plVar32[5];
                    }
                    uVar49 = 0xf706819;
                    if ((DAT_0f706818 & 1) != 0) {
                      uVar49 = _DAT_0f706828;
                    }
                    iVar25 = bcmp(lVar57,uVar49);
                    if (iVar25 != 0) goto LAB_0cc27e69;
                    plVar32[6] = (long)&DAT_0f706810;
                    _DAT_0f706830 = plVar33;
                  }
LAB_0cc27f49:
                  uStack_b24._0_1_ = 1;
                  goto LAB_0cc2605b;
                }
                break;
              }
            }
          }
          plVar32 = (long *)0x0;
          uStack_b24._0_1_ = (byte)uStack_b20;
LAB_0cc2605b:
          plStack_a68 = plVar32;
          if ((bVar23 & (byte)uStack_b24) == 1) {
            puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (puVar26 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x28,0);
            }
            *(undefined1 (*) [16])(puVar26 + 1) = (undefined1  [16])0x0;
            *puVar26 = &UNK_0f3f7798;
            puVar36 = puVar26 + 3;
            *(undefined2 *)(puVar26 + 4) = 1;
            puVar26[3] = &UNK_0f40dc30;
            bStack_7f8 = (byte)puVar36;
            bStack_7f7 = (byte)((ulong)puVar36 >> 8);
            bStack_7f6 = (byte)((ulong)puVar36 >> 0x10);
            bStack_7f5 = (byte)((ulong)puVar36 >> 0x18);
            bStack_7f4 = (byte)((ulong)puVar36 >> 0x20);
            bStack_7f3 = (byte)((ulong)puVar36 >> 0x28);
            bStack_7f2 = (byte)((ulong)puVar36 >> 0x30);
            bStack_7f1 = (byte)((ulong)puVar36 >> 0x38);
            bStack_7f0 = (byte)puVar26;
            bStack_7ef = (byte)((ulong)puVar26 >> 8);
            bStack_7ee = (byte)((ulong)puVar26 >> 0x10);
            bStack_7ed = (byte)((ulong)puVar26 >> 0x18);
            bStack_7ec = (byte)((ulong)puVar26 >> 0x20);
            bStack_7eb = (byte)((ulong)puVar26 >> 0x28);
            bStack_7ea = (byte)((ulong)puVar26 >> 0x30);
            bStack_7e9 = (byte)((ulong)puVar26 >> 0x38);
            plStack_ab0 = puVar26;
            auStack_ab8 = (undefined1  [8])puVar36;
            LOCK();
            puVar26[1] = puVar26[1] + 1;
            UNLOCK();
            if (puStack_890 <= (ulong)auStack_8a0._8_8_) {
              lVar47 = auStack_8a0._8_8_ - auStack_8a0._0_8_;
              uVar43 = (lVar47 >> 4) + 1;
              if (uVar43 < 0x1000000000000000) {
                uVar53 = (long)puStack_890 - auStack_8a0._0_8_ >> 3;
                if (uVar53 <= uVar43) {
                  uVar53 = uVar43;
                }
                if (0x7fffffffffffffef < (ulong)((long)puStack_890 - auStack_8a0._0_8_)) {
                  uVar53 = 0xfffffffffffffff;
                }
                if (uVar53 < 0x1000000000000000) {
                  lVar51 = uVar53 * 0x10;
                  lVar57 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
                  if (lVar57 == 0) {
                    func_0x0eec74c0(lVar51,0);
                  }
                  *(undefined8 **)(lVar57 + lVar47) = puVar36;
                  *(long **)(lVar57 + 8 + lVar47) = plStack_ab0;
                  _auStack_ab8 = (undefined1  [16])0x0;
                  puVar36 = (undefined8 *)(lVar47 + lVar57 + 0x10);
                  uVar49 = auStack_8a0._0_8_;
                  lVar47 = (lVar57 + lVar47) - (auStack_8a0._8_8_ - auStack_8a0._0_8_);
                  func_0x0eee2f00(lVar47,auStack_8a0._0_8_);
                  auStack_8a0._8_8_ = puVar36;
                  auStack_8a0._0_8_ = lVar47;
                  puVar26 = (undefined8 *)(lVar51 + lVar57);
                  if (uVar49 != 0) {
                    lVar47 = (long)puStack_890 - uVar49;
                    puStack_890 = (undefined8 *)(lVar51 + lVar57);
                    func_0x0412a280(uVar49,lVar47);
                    puVar26 = puStack_890;
                    lVar47 = auStack_8a0._0_8_;
                  }
                  goto LAB_0cc264a1;
                }
                goto LAB_0cc287e7;
              }
              goto LAB_0cc287ec;
            }
            *(undefined8 **)auStack_8a0._8_8_ = puVar36;
            *(undefined8 **)(auStack_8a0._8_8_ + 8) = puVar26;
            _auStack_ab8 = (undefined1  [16])0x0;
            puVar36 = (undefined8 *)(auStack_8a0._8_8_ + 0x10);
            puVar26 = puStack_890;
            lVar47 = auStack_8a0._0_8_;
LAB_0cc264a1:
            auStack_8a0._0_8_ = lVar47;
            puStack_890 = puVar26;
            auStack_8a0._8_8_ = puVar36;
            plVar32 = plStack_ab0;
            if (plStack_ab0 == (long *)0x0) {
LAB_0cc264cc:
              plVar32 = (long *)CONCAT17(bStack_7e9,
                                         CONCAT16(bStack_7ea,
                                                  CONCAT15(bStack_7eb,
                                                           CONCAT14(bStack_7ec,
                                                                    CONCAT13(bStack_7ed,
                                                                             CONCAT12(bStack_7ee,
                                                                                      CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
            }
            else {
              LOCK();
              plVar33 = plStack_ab0 + 1;
              lVar47 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar47 != 0) goto LAB_0cc264cc;
              (**(code **)(*plStack_ab0 + 0x10))(plStack_ab0);
              func_0x0412c2d0(plVar32);
              plVar32 = (long *)CONCAT17(bStack_7e9,
                                         CONCAT16(bStack_7ea,
                                                  CONCAT15(bStack_7eb,
                                                           CONCAT14(bStack_7ec,
                                                                    CONCAT13(bStack_7ed,
                                                                             CONCAT12(bStack_7ee,
                                                                                      CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
            }
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar33 = plVar32 + 1;
              lVar47 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar47 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
            }
            uStack_b24._0_1_ = 1;
LAB_0cc26695:
            uStack_3c8 = auStack_888._8_8_;
            lVar47 = auStack_888._0_8_;
            lVar57 = lVar28;
            if (auStack_888._0_8_ != auStack_888._8_8_) {
              do {
                lStack_a78 = lVar57;
                plVar33 = *(long **)(lVar47 + 0x58);
                for (plVar32 = *(long **)(lVar47 + 0x50); plVar32 != plVar33; plVar32 = plVar32 + 2)
                {
                  pbVar34 = (byte *)(**(code **)(*(long *)*plVar32 + 0x10))();
                  bVar23 = *pbVar34;
                  if ((bVar23 & 1) == 0) {
                    uVar43 = (ulong)(bVar23 >> 1);
                    if ((DAT_0f706ea8 & 1) != 0) goto LAB_0cc26751;
LAB_0cc26726:
                    if (uVar43 == DAT_0f706ea8 >> 1) {
LAB_0cc2675d:
                      if ((bVar23 & 1) == 0) {
                        pbVar34 = pbVar34 + 1;
                      }
                      else {
                        pbVar34 = *(byte **)(pbVar34 + 0x10);
                      }
                      uVar49 = 0xf706ea9;
                      if ((DAT_0f706ea8 & 1) != 0) {
                        uVar49 = _DAT_0f706eb8;
                      }
                      iVar25 = bcmp(pbVar34,uVar49);
                      if (iVar25 == 0) {
                        lVar57 = *plVar32;
                        goto LAB_0cc267b3;
                      }
                    }
                  }
                  else {
                    uVar43 = *(ulong *)(pbVar34 + 8);
                    if ((DAT_0f706ea8 & 1) == 0) goto LAB_0cc26726;
LAB_0cc26751:
                    if (uVar43 == _DAT_0f706eb0) goto LAB_0cc2675d;
                  }
                }
                lVar57 = 0;
LAB_0cc267b3:
                if (lVar57 == 0) {
                  lVar57 = lVar28;
                }
                bVar59 = true;
                if ((byte)uStack_b20 == 0) {
                  bStack_7f8 = 0x26;
                  bStack_7f7 = DAT_0131c4c6;
                  bStack_7f6 = DAT_0131c4c6._1_1_;
                  bStack_7f5 = DAT_0131c4c6._2_1_;
                  bStack_7f4 = DAT_0131c4c6._3_1_;
                  bStack_7f3 = DAT_0131c4c6._4_1_;
                  bStack_7f2 = DAT_0131c4c6._5_1_;
                  bStack_7f1 = DAT_0131c4c6._6_1_;
                  bStack_7f0 = DAT_0131c4c6._7_1_;
                  bStack_7ef = DAT_0131c4c6._8_1_;
                  bStack_7ee = DAT_0131c4c6._9_1_;
                  bStack_7ed = DAT_0131c4c6._10_1_;
                  bStack_7ec = DAT_0131c4c6._11_1_;
                  bStack_7eb = DAT_0131c4c6._12_1_;
                  bStack_7ea = DAT_0131c4c6._13_1_;
                  bStack_7e9 = DAT_0131c4c6._14_1_;
                  bStack_7e8 = 99;
                  bStack_7e7 = 0x75;
                  bStack_7e6 = 0x62;
                  bStack_7e5 = 0x65;
                  plVar33 = *(long **)(lVar47 + 0x58);
                  for (plVar32 = *(long **)(lVar47 + 0x50); plVar32 != plVar33;
                      plVar32 = plVar32 + 2) {
                    pbVar34 = (byte *)(**(code **)(*(long *)*plVar32 + 0x10))();
                    bVar23 = *pbVar34;
                    if ((bVar23 & 1) == 0) {
                      if (bVar23 >> 1 == 0x13) goto LAB_0cc2686a;
                    }
                    else if (*(long *)(pbVar34 + 8) == 0x13) {
LAB_0cc2686a:
                      if ((bVar23 & 1) == 0) {
                        pbVar34 = pbVar34 + 1;
                      }
                      else {
                        pbVar34 = *(byte **)(pbVar34 + 0x10);
                      }
                      auVar2 = *(undefined1 (*) [16])(pbVar34 + 3);
                      auVar66[0] = -(bStack_7f7 == *pbVar34);
                      auVar66[1] = -(bStack_7f6 == pbVar34[1]);
                      auVar66[2] = -(bStack_7f5 == pbVar34[2]);
                      auVar66[3] = -(bStack_7f4 == pbVar34[3]);
                      auVar66[4] = -(bStack_7f3 == pbVar34[4]);
                      auVar66[5] = -(bStack_7f2 == pbVar34[5]);
                      auVar66[6] = -(bStack_7f1 == pbVar34[6]);
                      auVar66[7] = -(bStack_7f0 == pbVar34[7]);
                      auVar66[8] = -(bStack_7ef == pbVar34[8]);
                      auVar66[9] = -(bStack_7ee == pbVar34[9]);
                      auVar66[10] = -(bStack_7ed == pbVar34[10]);
                      auVar66[0xb] = -(bStack_7ec == pbVar34[0xb]);
                      auVar66[0xc] = -(bStack_7eb == pbVar34[0xc]);
                      auVar66[0xd] = -(bStack_7ea == pbVar34[0xd]);
                      auVar66[0xe] = -(bStack_7e9 == pbVar34[0xe]);
                      auVar66[0xf] = -(bStack_7e8 == pbVar34[0xf]);
                      auVar61[0] = -(bStack_7f4 == auVar2[0]);
                      auVar61[1] = -(bStack_7f3 == auVar2[1]);
                      auVar61[2] = -(bStack_7f2 == auVar2[2]);
                      auVar61[3] = -(bStack_7f1 == auVar2[3]);
                      auVar61[4] = -(bStack_7f0 == auVar2[4]);
                      auVar61[5] = -(bStack_7ef == auVar2[5]);
                      auVar61[6] = -(bStack_7ee == auVar2[6]);
                      auVar61[7] = -(bStack_7ed == auVar2[7]);
                      auVar61[8] = -(bStack_7ec == auVar2[8]);
                      auVar61[9] = -(bStack_7eb == auVar2[9]);
                      auVar61[10] = -(bStack_7ea == auVar2[10]);
                      auVar61[0xb] = -(bStack_7e9 == auVar2[0xb]);
                      auVar61[0xc] = -(bStack_7e8 == auVar2[0xc]);
                      auVar61[0xd] = -(bStack_7e7 == auVar2[0xd]);
                      auVar61[0xe] = -(bStack_7e6 == auVar2[0xe]);
                      auVar61[0xf] = -(bStack_7e5 == auVar2[0xf]);
                      auVar61 = auVar61 & auVar66;
                      if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
                        bVar59 = *plVar32 != 0;
                        goto joined_r0x0cc26bce;
                      }
                    }
                  }
                  bVar59 = false;
                }
joined_r0x0cc26bce:
                puVar55 = (undefined *)(ulong)auStack_3b8[0];
                if (lVar57 != 0) {
                  plVar32 = *(long **)(lVar57 + 0x20);
                  if (plVar32 == (long *)0x0) {
                    puVar55 = (undefined *)0x1;
                  }
                  else {
                    puVar55 = (undefined *)0x1;
                    do {
                      puVar55 = (undefined *)
                                (ulong)(byte)(*(byte *)((long)plVar32 + 0x54) < 0x12 & (byte)puVar55
                                             & (byte)(0x20220 >>
                                                     (*(byte *)((long)plVar32 + 0x54) & 0x1f)));
                      plVar32 = (long *)*plVar32;
                    } while (plVar32 != (long *)0x0);
                  }
                }
                puVar36 = *(undefined8 **)(lVar47 + 0x58);
                for (puVar26 = *(undefined8 **)(lVar47 + 0x50); bVar23 = (byte)puVar55,
                    plVar32 = plStack_a68, puVar26 != puVar36; puVar26 = puVar26 + 2) {
                  pbVar34 = (byte *)(**(code **)(*(long *)*puVar26 + 0x10))();
                  bVar3 = *pbVar34;
                  if ((bVar3 & 1) == 0) {
                    if (bVar3 >> 1 == 0x12) goto LAB_0cc2695a;
                  }
                  else if (*(long *)(pbVar34 + 8) == 0x12) {
LAB_0cc2695a:
                    if ((bVar3 & 1) == 0) {
                      pbVar34 = pbVar34 + 1;
                    }
                    else {
                      pbVar34 = *(byte **)(pbVar34 + 0x10);
                    }
                    auVar63[0] = -(DAT_01d64281 == *pbVar34);
                    auVar63[1] = -(UNK_01d64282 == pbVar34[1]);
                    auVar63[2] = -(UNK_01d64283 == pbVar34[2]);
                    auVar63[3] = -(UNK_01d64284 == pbVar34[3]);
                    auVar63[4] = -(UNK_01d64285 == pbVar34[4]);
                    auVar63[5] = -(UNK_01d64286 == pbVar34[5]);
                    auVar63[6] = -(UNK_01d64287 == pbVar34[6]);
                    auVar63[7] = -(UNK_01d64288 == pbVar34[7]);
                    auVar63[8] = -(UNK_01d64289 == pbVar34[8]);
                    auVar63[9] = -(UNK_01d6428a == pbVar34[9]);
                    auVar63[10] = -(UNK_01d6428b == pbVar34[10]);
                    auVar63[0xb] = -(UNK_01d6428c == pbVar34[0xb]);
                    auVar63[0xc] = -(UNK_01d6428d == pbVar34[0xc]);
                    auVar63[0xd] = -(UNK_01d6428e == pbVar34[0xd]);
                    auVar63[0xe] = -(UNK_01d6428f == pbVar34[0xe]);
                    auVar63[0xf] = -(UNK_01d64290 == pbVar34[0xf]);
                    auVar67[0] = -((char)_DAT_01d64291 == (char)*(undefined2 *)(pbVar34 + 0x10));
                    auVar67[1] = -((char)((ushort)_DAT_01d64291 >> 8) ==
                                  (char)((ushort)*(undefined2 *)(pbVar34 + 0x10) >> 8));
                    auVar67[2] = 0xff;
                    auVar67[3] = 0xff;
                    auVar67[4] = 0xff;
                    auVar67[5] = 0xff;
                    auVar67[6] = 0xff;
                    auVar67[7] = 0xff;
                    auVar67[8] = 0xff;
                    auVar67[9] = 0xff;
                    auVar67[10] = 0xff;
                    auVar67[0xb] = 0xff;
                    auVar67[0xc] = 0xff;
                    auVar67[0xd] = 0xff;
                    auVar67[0xe] = 0xff;
                    auVar67[0xf] = 0xff;
                    auVar67 = auVar67 & auVar63;
                    if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
                      plVar32 = (long *)*puVar26;
                      if ((long *)*puVar26 == (long *)0x0) {
                        plVar32 = plStack_a68;
                      }
                      break;
                    }
                  }
                }
                if (plVar32 == (long *)0x0) {
                  bVar23 = bVar23 & (bVar59 | (byte)uStack_b24);
                  puVar55 = (undefined *)(ulong)bVar23;
joined_r0x0cc26e64:
                  if (bVar23 != 1) goto LAB_0cc26c48;
                  puVar36 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                  if (puVar36 == (undefined8 *)0x0) {
                    func_0x0eec74c0(0x28,0);
                  }
                  *(undefined1 (*) [16])(puVar36 + 1) = (undefined1  [16])0x0;
                  *puVar36 = &UNK_0f3f7798;
                  puVar45 = puVar36 + 3;
                  *(undefined2 *)(puVar36 + 4) = 1;
                  puVar36[3] = &UNK_0f40dc30;
                  bStack_7f8 = (byte)puVar45;
                  bStack_7f7 = (byte)((ulong)puVar45 >> 8);
                  bStack_7f6 = (byte)((ulong)puVar45 >> 0x10);
                  bStack_7f5 = (byte)((ulong)puVar45 >> 0x18);
                  bStack_7f4 = (byte)((ulong)puVar45 >> 0x20);
                  bStack_7f3 = (byte)((ulong)puVar45 >> 0x28);
                  bStack_7f2 = (byte)((ulong)puVar45 >> 0x30);
                  bStack_7f1 = (byte)((ulong)puVar45 >> 0x38);
                  bStack_7f0 = (byte)puVar36;
                  bStack_7ef = (byte)((ulong)puVar36 >> 8);
                  bStack_7ee = (byte)((ulong)puVar36 >> 0x10);
                  bStack_7ed = (byte)((ulong)puVar36 >> 0x18);
                  bStack_7ec = (byte)((ulong)puVar36 >> 0x20);
                  bStack_7eb = (byte)((ulong)puVar36 >> 0x28);
                  bStack_7ea = (byte)((ulong)puVar36 >> 0x30);
                  bStack_7e9 = (byte)((ulong)puVar36 >> 0x38);
                  auStack_3f8._8_8_ = puVar36;
                  auStack_3f8._0_8_ = puVar45;
                  LOCK();
                  puVar36[1] = puVar36[1] + 1;
                  UNLOCK();
                  puVar26 = *(undefined8 **)(lVar47 + 0x58);
                  if (puVar26 < *(undefined8 **)(lVar47 + 0x60)) {
                    *puVar26 = puVar45;
                    puVar26[1] = puVar36;
                    auStack_3f8 = (undefined1  [16])0x0;
                    puVar36 = puVar26 + 2;
                  }
                  else {
                    puVar26 = (undefined8 *)((long)puVar26 - *(long *)(lVar47 + 0x50));
                    puVar52 = (undefined *)(((long)puVar26 >> 4) + 1);
                    if ((undefined *)0xfffffffffffffff < puVar52) goto LAB_0cc287c2;
                    uVar43 = (long)*(undefined8 **)(lVar47 + 0x60) - *(long *)(lVar47 + 0x50);
                    puVar55 = (undefined *)((long)uVar43 >> 3);
                    if (puVar55 <= puVar52) {
                      puVar55 = puVar52;
                    }
                    if (0x7fffffffffffffef < uVar43) {
                      puVar55 = (undefined *)0xfffffffffffffff;
                    }
                    if ((undefined *)0xfffffffffffffff < puVar55) goto LAB_0cc287c7;
                    lVar57 = (long)puVar55 * 0x10;
                    lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar57);
                    if (lVar28 == 0) {
                      func_0x0eec74c0(lVar57,0);
                    }
                    *(undefined8 **)(lVar28 + (long)puVar26) = puVar45;
                    *(undefined8 *)(lVar28 + 8 + (long)puVar26) = auStack_3f8._8_8_;
                    auStack_3f8 = (undefined1  [16])0x0;
                    puVar36 = (undefined8 *)((long)puVar26 + lVar28 + 0x10);
                    lVar51 = *(long *)(lVar47 + 0x50);
                    lVar50 = (long)puVar26 + (lVar28 - (*(long *)(lVar47 + 0x58) - lVar51));
                    func_0x0eee2f00(lVar50,lVar51);
                    *(long *)(lVar47 + 0x50) = lVar50;
                    *(undefined8 **)(lVar47 + 0x58) = puVar36;
                    lVar50 = *(long *)(lVar47 + 0x60);
                    *(long *)(lVar47 + 0x60) = lVar57 + lVar28;
                    if (lVar51 != 0) {
                      func_0x0412a280(lVar51,lVar50 - lVar51);
                    }
                  }
                  *(undefined8 **)(lVar47 + 0x58) = puVar36;
                  plVar32 = (long *)auStack_3f8._8_8_;
                }
                else {
                  if (plVar32[2] == _DAT_0f706810) {
                    if (((undefined *)plVar32[6] == &DAT_0f706810) && (_DAT_0f706830 == plVar32 + 2)
                       ) {
                      bVar23 = bVar23 & 1;
                      puVar55 = (undefined *)((ulong)puVar55 & 0xffffffffffffff01);
                      goto joined_r0x0cc26e64;
                    }
                    bVar3 = *(byte *)(plVar32 + 3);
                    if ((bVar3 & 1) == 0) {
                      uVar43 = (ulong)(bVar3 >> 1);
                      if ((DAT_0f706818 & 1) != 0) goto LAB_0cc26bed;
LAB_0cc26ab7:
                      if (uVar43 != DAT_0f706818 >> 1) goto LAB_0cc26c40;
                    }
                    else {
                      uVar43 = plVar32[4];
                      if ((DAT_0f706818 & 1) == 0) goto LAB_0cc26ab7;
LAB_0cc26bed:
                      if (uVar43 != _DAT_0f706820) goto LAB_0cc26c40;
                    }
                    if ((bVar3 & 1) == 0) {
                      lVar28 = (long)plVar32 + 0x19;
                    }
                    else {
                      lVar28 = plVar32[5];
                    }
                    uVar49 = 0xf706819;
                    if ((DAT_0f706818 & 1) != 0) {
                      uVar49 = _DAT_0f706828;
                    }
                    iVar25 = bcmp(lVar28,uVar49);
                    if (iVar25 == 0) {
                      plVar32[6] = (long)&DAT_0f706810;
                      bVar23 = bVar23 & 1;
                      puVar55 = (undefined *)((ulong)puVar55 & 0xffffffffffffff01);
                      _DAT_0f706830 = plVar32 + 2;
                      goto joined_r0x0cc26e64;
                    }
                  }
LAB_0cc26c40:
                  plVar32[6] = 0;
LAB_0cc26c48:
                  puVar36 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                  if (puVar36 == (undefined8 *)0x0) {
                    func_0x0eec74c0(0x28,0);
                  }
                  *(undefined1 (*) [16])(puVar36 + 1) = (undefined1  [16])0x0;
                  *puVar36 = &UNK_0f3f7798;
                  puVar45 = puVar36 + 3;
                  *(undefined2 *)(puVar36 + 4) = 0x101;
                  puVar36[3] = &UNK_0f40dc30;
                  bStack_7f8 = (byte)puVar45;
                  bStack_7f7 = (byte)((ulong)puVar45 >> 8);
                  bStack_7f6 = (byte)((ulong)puVar45 >> 0x10);
                  bStack_7f5 = (byte)((ulong)puVar45 >> 0x18);
                  bStack_7f4 = (byte)((ulong)puVar45 >> 0x20);
                  bStack_7f3 = (byte)((ulong)puVar45 >> 0x28);
                  bStack_7f2 = (byte)((ulong)puVar45 >> 0x30);
                  bStack_7f1 = (byte)((ulong)puVar45 >> 0x38);
                  bStack_7f0 = (byte)puVar36;
                  bStack_7ef = (byte)((ulong)puVar36 >> 8);
                  bStack_7ee = (byte)((ulong)puVar36 >> 0x10);
                  bStack_7ed = (byte)((ulong)puVar36 >> 0x18);
                  bStack_7ec = (byte)((ulong)puVar36 >> 0x20);
                  bStack_7eb = (byte)((ulong)puVar36 >> 0x28);
                  bStack_7ea = (byte)((ulong)puVar36 >> 0x30);
                  bStack_7e9 = (byte)((ulong)puVar36 >> 0x38);
                  auStack_b08._8_8_ = puVar36;
                  auStack_b08._0_8_ = puVar45;
                  LOCK();
                  puVar36[1] = puVar36[1] + 1;
                  UNLOCK();
                  puVar26 = *(undefined8 **)(lVar47 + 0x58);
                  if (*(undefined8 **)(lVar47 + 0x60) <= puVar26) {
                    puVar26 = (undefined8 *)((long)puVar26 - *(long *)(lVar47 + 0x50));
                    puVar52 = (undefined *)(((long)puVar26 >> 4) + 1);
                    if (puVar52 < (undefined *)0x1000000000000000) {
                      uVar43 = (long)*(undefined8 **)(lVar47 + 0x60) - *(long *)(lVar47 + 0x50);
                      puVar55 = (undefined *)((long)uVar43 >> 3);
                      if (puVar55 <= puVar52) {
                        puVar55 = puVar52;
                      }
                      if (0x7fffffffffffffef < uVar43) {
                        puVar55 = (undefined *)0xfffffffffffffff;
                      }
                      if (puVar55 < (undefined *)0x1000000000000000) {
                        lVar57 = (long)puVar55 * 0x10;
                        lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar57);
                        if (lVar28 == 0) {
                          func_0x0eec74c0(lVar57,0);
                        }
                        *(undefined8 **)(lVar28 + (long)puVar26) = puVar45;
                        *(undefined8 *)(lVar28 + 8 + (long)puVar26) = auStack_b08._8_8_;
                        auStack_b08 = (undefined1  [16])0x0;
                        puVar36 = (undefined8 *)((long)puVar26 + lVar28 + 0x10);
                        lVar51 = *(long *)(lVar47 + 0x50);
                        lVar50 = (long)puVar26 + (lVar28 - (*(long *)(lVar47 + 0x58) - lVar51));
                        func_0x0eee2f00(lVar50,lVar51);
                        *(long *)(lVar47 + 0x50) = lVar50;
                        *(undefined8 **)(lVar47 + 0x58) = puVar36;
                        lVar50 = *(long *)(lVar47 + 0x60);
                        *(long *)(lVar47 + 0x60) = lVar57 + lVar28;
                        if (lVar51 != 0) {
                          func_0x0412a280(lVar51,lVar50 - lVar51);
                        }
                        goto LAB_0cc26db2;
                      }
                      func_0x04882eb0();
                    }
                    func_0x0cc80890();
                    goto LAB_0cc287bd;
                  }
                  *puVar26 = puVar45;
                  puVar26[1] = puVar36;
                  auStack_b08 = (undefined1  [16])0x0;
                  puVar36 = puVar26 + 2;
LAB_0cc26db2:
                  *(undefined8 **)(lVar47 + 0x58) = puVar36;
                  plVar32 = (long *)auStack_b08._8_8_;
                }
                if (plVar32 == (long *)0x0) {
LAB_0cc26dd2:
                  plVar32 = (long *)CONCAT17(bStack_7e9,
                                             CONCAT16(bStack_7ea,
                                                      CONCAT15(bStack_7eb,
                                                               CONCAT14(bStack_7ec,
                                                                        CONCAT13(bStack_7ed,
                                                                                 CONCAT12(bStack_7ee
                                                                                          ,CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
                  lVar28 = lStack_a78;
                }
                else {
                  LOCK();
                  plVar33 = plVar32 + 1;
                  lVar28 = *plVar33;
                  *plVar33 = *plVar33 + -1;
                  UNLOCK();
                  if (lVar28 != 0) goto LAB_0cc26dd2;
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  func_0x0412c2d0(plVar32);
                  plVar32 = (long *)CONCAT17(bStack_7e9,
                                             CONCAT16(bStack_7ea,
                                                      CONCAT15(bStack_7eb,
                                                               CONCAT14(bStack_7ec,
                                                                        CONCAT13(bStack_7ed,
                                                                                 CONCAT12(bStack_7ee
                                                                                          ,CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
                  lVar28 = lStack_a78;
                }
                lStack_a78 = lVar28;
                if (plVar32 != (long *)0x0) {
                  LOCK();
                  plVar33 = plVar32 + 1;
                  lVar57 = *plVar33;
                  *plVar33 = *plVar33 + -1;
                  UNLOCK();
                  if (lVar57 == 0) {
                    (**(code **)(*plVar32 + 0x10))(plVar32);
                    func_0x0412c2d0(plVar32);
                  }
                }
                lVar47 = lVar47 + 0x68;
                lVar57 = lStack_a78;
              } while (lVar47 != uStack_3c8);
            }
            goto LAB_0cc26eb0;
          }
LAB_0cc261a8:
          puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
          if (puVar26 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x28,0);
          }
          *(undefined1 (*) [16])(puVar26 + 1) = (undefined1  [16])0x0;
          *puVar26 = &UNK_0f3f7798;
          puVar36 = puVar26 + 3;
          *(undefined2 *)(puVar26 + 4) = 0x101;
          puVar26[3] = &UNK_0f40dc30;
          bStack_7f8 = (byte)puVar36;
          bStack_7f7 = (byte)((ulong)puVar36 >> 8);
          bStack_7f6 = (byte)((ulong)puVar36 >> 0x10);
          bStack_7f5 = (byte)((ulong)puVar36 >> 0x18);
          bStack_7f4 = (byte)((ulong)puVar36 >> 0x20);
          bStack_7f3 = (byte)((ulong)puVar36 >> 0x28);
          bStack_7f2 = (byte)((ulong)puVar36 >> 0x30);
          bStack_7f1 = (byte)((ulong)puVar36 >> 0x38);
          bStack_7f0 = (byte)puVar26;
          bStack_7ef = (byte)((ulong)puVar26 >> 8);
          bStack_7ee = (byte)((ulong)puVar26 >> 0x10);
          bStack_7ed = (byte)((ulong)puVar26 >> 0x18);
          bStack_7ec = (byte)((ulong)puVar26 >> 0x20);
          bStack_7eb = (byte)((ulong)puVar26 >> 0x28);
          bStack_7ea = (byte)((ulong)puVar26 >> 0x30);
          bStack_7e9 = (byte)((ulong)puVar26 >> 0x38);
          plStack_ab0 = puVar26;
          auStack_ab8 = (undefined1  [8])puVar36;
          LOCK();
          puVar26[1] = puVar26[1] + 1;
          UNLOCK();
          if ((ulong)auStack_8a0._8_8_ < puStack_890) {
            *(undefined8 **)auStack_8a0._8_8_ = puVar36;
            *(undefined8 **)(auStack_8a0._8_8_ + 8) = puVar26;
            _auStack_ab8 = (undefined1  [16])0x0;
            puVar36 = (undefined8 *)(auStack_8a0._8_8_ + 0x10);
            puVar26 = puStack_890;
            lVar47 = auStack_8a0._0_8_;
LAB_0cc26345:
            auStack_8a0._0_8_ = lVar47;
            puStack_890 = puVar26;
            auStack_8a0._8_8_ = puVar36;
            plVar32 = plStack_ab0;
            if (plStack_ab0 == (long *)0x0) {
LAB_0cc26370:
              plVar32 = (long *)CONCAT17(bStack_7e9,
                                         CONCAT16(bStack_7ea,
                                                  CONCAT15(bStack_7eb,
                                                           CONCAT14(bStack_7ec,
                                                                    CONCAT13(bStack_7ed,
                                                                             CONCAT12(bStack_7ee,
                                                                                      CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
            }
            else {
              LOCK();
              plVar33 = plStack_ab0 + 1;
              lVar47 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar47 != 0) goto LAB_0cc26370;
              (**(code **)(*plStack_ab0 + 0x10))(plStack_ab0);
              func_0x0412c2d0(plVar32);
              plVar32 = (long *)CONCAT17(bStack_7e9,
                                         CONCAT16(bStack_7ea,
                                                  CONCAT15(bStack_7eb,
                                                           CONCAT14(bStack_7ec,
                                                                    CONCAT13(bStack_7ed,
                                                                             CONCAT12(bStack_7ee,
                                                                                      CONCAT11(
                                                  bStack_7ef,bStack_7f0)))))));
            }
            if (plVar32 != (long *)0x0) {
              LOCK();
              plVar33 = plVar32 + 1;
              lVar47 = *plVar33;
              *plVar33 = *plVar33 + -1;
              UNLOCK();
              if (lVar47 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
                func_0x0412c2d0(plVar32);
              }
            }
            goto LAB_0cc26695;
          }
          lVar47 = auStack_8a0._8_8_ - auStack_8a0._0_8_;
          uVar43 = (lVar47 >> 4) + 1;
          if (uVar43 < 0x1000000000000000) {
            uVar53 = (long)puStack_890 - auStack_8a0._0_8_ >> 3;
            if (uVar53 <= uVar43) {
              uVar53 = uVar43;
            }
            if (0x7fffffffffffffef < (ulong)((long)puStack_890 - auStack_8a0._0_8_)) {
              uVar53 = 0xfffffffffffffff;
            }
            if (uVar53 < 0x1000000000000000) {
              lVar51 = uVar53 * 0x10;
              lVar57 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar51);
              if (lVar57 == 0) {
                func_0x0eec74c0(lVar51,0);
              }
              *(undefined8 **)(lVar57 + lVar47) = puVar36;
              *(long **)(lVar57 + 8 + lVar47) = plStack_ab0;
              _auStack_ab8 = (undefined1  [16])0x0;
              puVar36 = (undefined8 *)(lVar47 + lVar57 + 0x10);
              uVar49 = auStack_8a0._0_8_;
              lVar47 = (lVar57 + lVar47) - (auStack_8a0._8_8_ - auStack_8a0._0_8_);
              func_0x0eee2f00(lVar47,auStack_8a0._0_8_);
              auStack_8a0._8_8_ = puVar36;
              auStack_8a0._0_8_ = lVar47;
              puVar26 = (undefined8 *)(lVar51 + lVar57);
              if (uVar49 != 0) {
                lVar47 = (long)puStack_890 - uVar49;
                puStack_890 = (undefined8 *)(lVar51 + lVar57);
                func_0x0412a280(uVar49,lVar47);
                puVar26 = puStack_890;
                lVar47 = auStack_8a0._0_8_;
              }
              goto LAB_0cc26345;
            }
            func_0x04882eb0();
          }
          func_0x0cc80890();
LAB_0cc287e7:
          func_0x04882eb0();
LAB_0cc287ec:
          func_0x0cc80890();
LAB_0cc287f1:
          func_0x04891200();
          goto LAB_0cc287f6;
        }
LAB_0cc275d9:
        lVar47 = lStack_418;
        uStack_b24 = (uint)puVar26;
        lVar28 = lStack_410;
        if (lStack_418 != 0) {
          for (; lVar47 != lVar28; lVar28 = lVar28 + -0x20) {
            if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                              *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
            }
          }
          lStack_410 = lVar47;
          func_0x0412a280(lStack_418,lStack_408 - lStack_418);
        }
        lVar47 = lStack_430;
        lVar28 = lStack_428;
        if (lStack_430 != 0) {
          for (; lVar47 != lVar28; lVar28 = lVar28 + -0x50) {
            if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                              *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
            }
            lVar57 = *(long *)(lVar28 + -0x30);
            if (lVar57 != 0) {
              lVar51 = *(long *)(lVar28 + -0x28);
              lVar50 = lVar57;
              if (lVar57 != lVar51) {
                do {
                  if ((*(byte *)(lVar51 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar51 + -8),
                                    *(ulong *)(lVar51 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar51 = lVar51 + -0x20;
                } while (lVar51 != lVar57);
                lVar50 = *(long *)(lVar28 + -0x30);
              }
              *(long *)(lVar28 + -0x28) = lVar57;
              func_0x0412a280(lVar50,*(long *)(lVar28 + -0x20) - lVar50);
            }
            lVar57 = *(long *)(lVar28 + -0x48);
            if (lVar57 != 0) {
              lVar51 = *(long *)(lVar28 + -0x40);
              lVar50 = lVar57;
              if (lVar57 != lVar51) {
                do {
                  if ((*(byte *)(lVar51 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar51 + -8),
                                    *(ulong *)(lVar51 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar51 = lVar51 + -0x20;
                } while (lVar51 != lVar57);
                lVar50 = *(long *)(lVar28 + -0x48);
              }
              *(long *)(lVar28 + -0x40) = lVar57;
              func_0x0412a280(lVar50,*(long *)(lVar28 + -0x38) - lVar50);
            }
          }
          lStack_428 = lVar47;
          func_0x0412a280(lStack_430,lStack_420 - lStack_430);
        }
        lVar47 = lStack_448;
        lVar28 = lStack_440;
        if (lStack_448 != 0) {
          for (; lVar47 != lVar28; lVar28 = lVar28 + -0x38) {
            if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                              *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
            }
            lVar57 = *(long *)(lVar28 + -0x30);
            if (lVar57 != 0) {
              lVar51 = *(long *)(lVar28 + -0x28);
              lVar50 = lVar57;
              if (lVar57 != lVar51) {
                do {
                  if ((*(byte *)(lVar51 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar51 + -8),
                                    *(ulong *)(lVar51 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar51 = lVar51 + -0x20;
                } while (lVar51 != lVar57);
                lVar50 = *(long *)(lVar28 + -0x30);
              }
              *(long *)(lVar28 + -0x28) = lVar57;
              func_0x0412a280(lVar50,*(long *)(lVar28 + -0x20) - lVar50);
            }
          }
          lStack_440 = lVar47;
          func_0x0412a280(lStack_448,lStack_438 - lStack_448);
        }
        if (pcStack_458 != (code *)0x0) {
          (*pcStack_458)(apppppppuStack_470);
        }
        if ((uStack_478 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_478 & 0xff00ffffffffffff) - 8);
        }
        uStack_478 = 0;
        if ((uStack_47e & 0x8000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,
                     (CONCAT62(uStack_47e,CONCAT11(uStack_47f,uStack_480)) & 0xff00ffffffffffff) - 8
                    );
        }
        uVar49 = auStack_500._0_8_;
        if (auStack_500._0_8_ != 0) {
          for (lVar28 = auStack_500._8_8_; uVar49 != lVar28; lVar28 = lVar28 + -0x20) {
            if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                              *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
            }
          }
          auStack_500._8_8_ = uVar49;
          func_0x0412a280(auStack_500._0_8_,lStack_4f0 - auStack_500._0_8_);
        }
        uVar49 = auStack_520._8_8_;
        if (auStack_520._8_8_ != 0) {
          lVar28 = auStack_510._0_8_;
          if (auStack_520._8_8_ != auStack_510._0_8_) {
            do {
              if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                                *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
              }
              lVar47 = *(long *)(lVar28 + -0x30);
              if (lVar47 != 0) {
                lVar57 = *(long *)(lVar28 + -0x28);
                lVar51 = lVar47;
                if (lVar47 != lVar57) {
                  do {
                    if ((*(byte *)(lVar57 + -0x18) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar57 + -8),
                                      *(ulong *)(lVar57 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar57 = lVar57 + -0x20;
                  } while (lVar57 != lVar47);
                  lVar51 = *(long *)(lVar28 + -0x30);
                }
                *(long *)(lVar28 + -0x28) = lVar47;
                func_0x0412a280(lVar51,*(long *)(lVar28 + -0x20) - lVar51);
              }
              lVar47 = *(long *)(lVar28 + -0x48);
              if (lVar47 != 0) {
                lVar57 = *(long *)(lVar28 + -0x40);
                lVar51 = lVar47;
                if (lVar47 != lVar57) {
                  do {
                    if ((*(byte *)(lVar57 + -0x18) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar57 + -8),
                                      *(ulong *)(lVar57 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar57 = lVar57 + -0x20;
                  } while (lVar57 != lVar47);
                  lVar51 = *(long *)(lVar28 + -0x48);
                }
                *(long *)(lVar28 + -0x40) = lVar47;
                func_0x0412a280(lVar51,*(long *)(lVar28 + -0x38) - lVar51);
              }
              lVar28 = lVar28 + -0x50;
            } while (uVar49 != lVar28);
          }
          auStack_510._0_8_ = uVar49;
          func_0x0412a280(auStack_520._8_8_,auStack_510._8_8_ - auStack_520._8_8_);
        }
        uVar49 = auStack_530._0_8_;
        if (auStack_530._0_8_ != 0) {
          for (lVar28 = auStack_530._8_8_; uVar49 != lVar28; lVar28 = lVar28 + -0x38) {
            if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                              *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
            }
            lVar47 = *(long *)(lVar28 + -0x30);
            if (lVar47 != 0) {
              lVar57 = *(long *)(lVar28 + -0x28);
              lVar51 = lVar47;
              if (lVar47 != lVar57) {
                do {
                  if ((*(byte *)(lVar57 + -0x18) & 1) != 0) {
                    func_0x0412a280(*(undefined8 *)(lVar57 + -8),
                                    *(ulong *)(lVar57 + -0x18) & 0xfffffffffffffffe);
                  }
                  lVar57 = lVar57 + -0x20;
                } while (lVar57 != lVar47);
                lVar51 = *(long *)(lVar28 + -0x30);
              }
              *(long *)(lVar28 + -0x28) = lVar47;
              func_0x0412a280(lVar51,*(long *)(lVar28 + -0x20) - lVar51);
            }
          }
          auStack_530._8_8_ = uVar49;
          func_0x0412a280(auStack_530._0_8_,auStack_520._0_8_ - auStack_530._0_8_);
        }
        if ((ulong)uStack_538 != 0xffffffff) {
          (**(code **)(&UNK_0f3f67a0 + (ulong)uStack_538 * 8))(&bStack_7f8,auStack_5a0 + 8);
        }
        uStack_538 = 0xffffffff;
        if ((auStack_5b0[0] & 1) != 0) {
          func_0x0412a280(auStack_5a0._0_8_,auStack_5b0._0_8_ & 0xfffffffffffffffe);
        }
        if ((uStack_5b6 & 0x8000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(CONCAT62(uStack_5b6,uStack_5b8) & 0xff00ffffffffffff) - 8);
        }
        uStack_5b8 = 0;
        uStack_5b6 = 0;
        if ((uStack_5bc & 0x800000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(CONCAT44(uStack_5bc,uStack_5c0) & 0xff00ffffffffffff) - 8);
        }
        uStack_5c0 = 0;
        uStack_5bc = 0;
        if ((uStack_5d0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5d0 & 0xff00ffffffffffff) - 8);
        }
        uStack_5d0 = 0;
        if ((uStack_5d8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5d8 & 0xff00ffffffffffff) - 8);
        }
        pauVar29 = pauStack_2b8;
        pauStack_2b8 = (undefined1 (*) [16])0x0;
        if (pauVar29 != (undefined1 (*) [16])0x0) {
          if ((pauVar29[1][0] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)pauVar29[2],*(ulong *)pauVar29[1] & 0xfffffffffffffffe);
          }
          func_0x0412a280(pauVar29,0x30);
        }
        func_0x0cc93ba0(auStack_3a8);
        if ((uStack_848 & 1) != 0) {
          func_0x0412a280(lStack_838,uStack_848 & 0xfffffffffffffffe);
        }
        if (acStack_298[0] == '\x01') {
          if (lStack_288 != 0) {
            plVar33 = (long *)func_0x0412c300();
            lVar28 = lStack_290;
            plVar32 = plStack_4b0;
            if (plVar33 == (long *)0x0) goto LAB_0cc28290;
            if (lStack_290 == 0) {
LAB_0cc28279:
              LOCK();
              plVar32 = plVar33 + 1;
              lVar28 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
            }
            else {
              if ((DAT_0f7ba228 == '\0') && (iVar25 = FUN_04108328(&DAT_0f7ba228), iVar25 != 0)) {
                _DAT_0f7ba200 = (undefined1  [16])0x0;
                _DAT_0f7ba1f0 = (undefined1  [16])0x0;
                _DAT_0f7ba1e0 = (undefined1  [16])0x0;
                _DAT_0f7ba1d0 = (undefined1  [16])0x0;
                pauVar29 = (undefined1 (*) [16])
                           (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                if (pauVar29 == (undefined1 (*) [16])0x0) {
                  func_0x0eec74c0(0x80,0);
                }
                _DAT_0f7ba1f8 = pauVar29;
                _DAT_0f7ba208 = pauVar29 + 8;
                pauVar29[7] = (undefined1  [16])0x0;
                pauVar29[6] = (undefined1  [16])0x0;
                pauVar29[5] = (undefined1  [16])0x0;
                pauVar29[4] = (undefined1  [16])0x0;
                pauVar29[3] = (undefined1  [16])0x0;
                pauVar29[2] = (undefined1  [16])0x0;
                pauVar29[1] = (undefined1  [16])0x0;
                *pauVar29 = (undefined1  [16])0x0;
                _DAT_0f7ba200 = pauVar29 + 8;
                _DAT_0f7ba210 = (undefined1  [16])0x0;
                _DAT_0f7ba220 = 0;
                _DAT_0f7ba230 = &DAT_0f7ba1d0;
                __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
                func_0x0410844d(&DAT_0f7ba228);
              }
              uVar69 = *(uint *)(lVar28 + 0x78);
              uVar43 = (ulong)uVar69;
              if (*(char *)(lStack_a80 + -8) == '\0') {
                func_0x0eee07b0(lStack_a80 + -0x28,&DAT_0f7ba230);
                lVar47 = lStack_a80;
                func_0x0417d010(&UNK_0eee0b40,lStack_a80 + -0x28,0xf53dab8);
                *(undefined1 *)(lVar47 + -8) = 1;
                plVar32 = plStack_4b0;
              }
              if (uVar43 < (ulong)(*(long *)(lStack_268 + 0x10) - *(long *)(lStack_268 + 8) >> 3)) {
                lVar47 = *(long *)(*(long *)(lStack_268 + 8) + uVar43 * 8);
                if (lVar47 != 0) goto LAB_0cc27def;
LAB_0cc281c3:
                plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
                if (plVar32 == (long *)0x0) {
                  func_0x0eec74c0(0x40,0);
                }
                *plVar32 = (long)plVar32;
                plVar32[1] = (long)plVar32;
                plVar54 = plVar32 + 2;
                *(undefined1 (*) [16])(plVar32 + 2) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar32 + 4) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(plVar32 + 6) = (undefined1  [16])0x0;
                bStack_7f8 = (byte)plVar54;
                bStack_7f7 = (byte)((ulong)plVar54 >> 8);
                bStack_7f6 = (byte)((ulong)plVar54 >> 0x10);
                bStack_7f5 = (byte)((ulong)plVar54 >> 0x18);
                bStack_7f4 = (byte)((ulong)plVar54 >> 0x20);
                bStack_7f3 = (byte)((ulong)plVar54 >> 0x28);
                bStack_7f2 = (byte)((ulong)plVar54 >> 0x30);
                bStack_7f1 = (byte)((ulong)plVar54 >> 0x38);
                plVar4 = *(long **)(lVar28 + 0x30);
                if (plVar4 == (long *)0x0) goto LAB_0cc287f1;
                (**(code **)(*plVar4 + 0x30))(plVar4,&bStack_7f8);
                func_0x0eee1580((uint *)(lVar28 + 0x78),plVar32);
                func_0x0412d680(lVar28 + 0x50);
                puVar36 = *(undefined8 **)(lVar28 + 0x48);
                plVar32[1] = (long)puVar36;
                *plVar32 = lVar28 + 0x40;
                *puVar36 = plVar32;
                *(long **)(lVar28 + 0x48) = plVar32;
                func_0x0412d6b0(lVar28 + 0x50);
                lVar28 = plVar32[3];
                if (*plVar54 == lVar28) goto LAB_0cc28279;
              }
              else {
                func_0x0412d680(&DAT_0f7ba1d0);
                func_0x0eee1060(plVar32,uVar69 + 1);
                func_0x0412d6b0(&DAT_0f7ba1d0);
                lVar47 = *(long *)(*plVar32 + uVar43 * 8);
                if (lVar47 == 0) goto LAB_0cc281c3;
LAB_0cc27def:
                plVar54 = (long *)(lVar47 + 0x10);
                lVar28 = *(long *)(lVar47 + 0x18);
                if (*plVar54 == lVar28) goto LAB_0cc28279;
              }
              if (*(char **)(lVar28 + -8) != acStack_298) goto LAB_0cc28279;
              if ((*(ulong *)(lVar28 + -0x10) & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(*(ulong *)(lVar28 + -0x10) & 0xff00ffffffffffff) - 8);
              }
              *(undefined8 *)(lVar28 + -0x10) = 0;
              plVar54[1] = lVar28 + -0x28;
              LOCK();
              plVar32 = plVar33 + 1;
              lVar28 = *plVar32;
              *plVar32 = *plVar32 + -1;
              UNLOCK();
            }
            if (lVar28 != 0) goto LAB_0cc28290;
            (**(code **)(*plVar33 + 0x10))(plVar33);
            func_0x0412c2d0(plVar33);
            if (lStack_288 == 0) goto LAB_0cc282a2;
            goto LAB_0cc2829d;
          }
        }
        else {
LAB_0cc28290:
          if (lStack_288 != 0) {
LAB_0cc2829d:
            func_0x0412c2d0();
          }
        }
LAB_0cc282a2:
        bVar23 = auStack_a58[0] & 1;
      }
      if (bVar23 != 0) {
        uStack_b24 = (uint)puVar26;
        func_0x0412a280(uStack_a48,auStack_a58._0_8_ & 0xfffffffffffffffe);
      }
      puVar26 = (undefined8 *)(ulong)uStack_b24;
      lVar28 = lStack_250;
      if (lStack_250 == auStack_a38._0_8_) goto LAB_0cc2273c;
      goto LAB_0cc22867;
    }
LAB_0cc287f6:
    func_0x04882e30();
LAB_0cc287fb:
    iVar25 = FUN_04108328(&DAT_0f6b4d58);
    if (iVar25 != 0) {
      _DAT_0f6b4d48 = (undefined1  [16])0x0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      __cxa_atexit(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
  } while( true );
LAB_0cc287bd:
  func_0x04882e30();
LAB_0cc287c2:
  func_0x0cc80890();
LAB_0cc287c7:
  func_0x04882eb0();
LAB_0cc287cc:
  func_0x0eec74c0(0x1c0,0);
  goto LAB_0cc21d4f;
LAB_0cc285e0:
  if (((ulong)puVar26 & 1) != 0) {
    uVar39 = **(undefined8 **)(**(long **)(lStack_b10 + 0xe8) + 8);
    if ((DAT_0f5ea4a0 == '\0') && (iVar25 = FUN_04108328(&DAT_0f5ea4a0), iVar25 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    func_0x0d5f7010(&bStack_7f8,uVar39,&DAT_0f5ea138);
    func_0x0646d5a0(auStack_1a0,&bStack_7f8,&bStack_7f8);
    if ((bStack_7f8 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_7e4,
                               CONCAT13(bStack_7e5,
                                        CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8)))),
                      CONCAT17(bStack_7f1,
                               CONCAT16(bStack_7f2,
                                        CONCAT15(bStack_7f3,
                                                 CONCAT14(bStack_7f4,
                                                          CONCAT13(bStack_7f5,
                                                                   CONCAT12(bStack_7f6,
                                                                            CONCAT11(bStack_7f7,
                                                                                     bStack_7f8)))))
                                       )) & 0xfffffffffffffffe);
    }
  }
LAB_0cc28660:
  func_0x0eeb81b0(auStack_130);
  if ((uStack_ad0 & 1) != 0) {
    func_0x0412a280(lStack_ac0,uStack_ad0 & 0xfffffffffffffffe);
  }
  func_0x0b0396e0(auStack_100);
  lStack_b10 = lStack_b10 + 0x110;
  if (lStack_b10 == lStack_280) {
    if (0 < iStack_1a8) {
      bStack_7f8 = 10;
      bStack_7f7 = 0x42;
      bStack_7f6 = 0x6c;
      bStack_7f5 = 0x6f;
      bStack_7f4 = 99;
      bStack_7f3 = 0x6b;
      bStack_7f2 = 0;
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
                (*(long **)(param_1 + 0xe8),&bStack_7f8,auStack_238);
      if ((bStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,
                                 CONCAT13(bStack_7e5,
                                          CONCAT12(bStack_7e6,CONCAT11(bStack_7e7,bStack_7e8)))),
                        CONCAT17(bStack_7f1,
                                 CONCAT16(bStack_7f2,
                                          CONCAT15(bStack_7f3,
                                                   CONCAT14(bStack_7f4,
                                                            CONCAT13(bStack_7f5,
                                                                     CONCAT12(bStack_7f6,
                                                                              CONCAT11(bStack_7f7,
                                                                                       bStack_7f8)))
                                                           )))) & 0xfffffffffffffffe);
      }
    }
    goto LAB_0cc28761;
  }
  goto LAB_0cc2234b;
}



/* ---- referenced strings ----
 * 0x131c4c6  minecraft:unit_cube
 * 0x13abf4c  minecraft
 * 0x1d64281  minecraft:geometry
 */
