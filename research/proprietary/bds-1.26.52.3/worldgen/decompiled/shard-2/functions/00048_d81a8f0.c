/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd91a8f0 (ELF vaddr 0xd81a8f0)
 * Label: callee2-of:0xe79e220
 * Body:  [[0d91a8f0, 0d91aac4] [0d91aad0, 0d91ab11] [0d91ab20, 0d91af61] [0d91af70, 0d91b7f4] [0d91b800, 0d91c149] [0d91c150, 0d91c192] [0d91c1a0, 0d91c5c4] [0d91c5d0, 0d91c612] [0d91c620, 0d91cd96] [0d91cda0, 0d91d688] [0d91d690, 0d91d6d2] [0d91d6e0, 0d91dac4] [0d91dad0, 0d91db12] [0d91db20, 0d91e281] [0d91e290, 0d91f288]]
 * Ghidra: FUN_0d91a8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d91a8f0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  byte *pbVar15;
  code *pcVar16;
  undefined1 auVar17 [8];
  long *plVar18;
  undefined8 uVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_4a8 [8];
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [8];
  code *pcStack_488;
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined1 auStack_428 [16];
  long *plStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [16];
  undefined8 *puStack_398;
  undefined2 uStack_390;
  undefined1 auStack_388 [16];
  ulong uStack_378;
  undefined2 uStack_36c;
  undefined1 uStack_36a;
  undefined1 auStack_368 [16];
  undefined1 uStack_358;
  long lStack_348;
  long *plStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  int iStack_320;
  undefined4 uStack_31c;
  char cStack_318;
  undefined7 uStack_317;
  long lStack_310;
  long lStack_308;
  long *plStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined2 uStack_25f;
  undefined5 uStack_25d;
  byte bStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined2 uStack_247;
  undefined5 uStack_245;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined2 uStack_22f;
  undefined5 uStack_22d;
  long *plStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  long lStack_200;
  undefined1 auStack_1f8 [16];
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f730b80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730b80), iVar11 != 0)) {
    func_0x0da4a840();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
    func_0x0410844d(&DAT_0f730b80);
  }
  lStack_310 = param_1 + 0x18;
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
  do {
    lVar27 = *plVar18;
    if (lVar27 == -1) goto LAB_0d91a970;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar27 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f730b00 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0d91a970:
    puVar14 = &DAT_0f730b00;
    if (iRam000000000f730b60 != -0x2b3da790) goto LAB_0d91a9c8;
LAB_0d91a99b:
    lVar27 = *(long *)(puVar14 + 0x68);
    if (lVar27 == 0) goto LAB_0d91a9c8;
    bVar29 = (*(byte *)(lVar27 + 8) & 1) != 0;
    puVar14 = (undefined *)(lVar27 + 9);
    if (bVar29) {
      puVar14 = *(undefined **)(lVar27 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar27 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar27 + 0x10);
    }
  }
  else {
    puVar14 = (undefined *)plVar18[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0d91a99b;
LAB_0d91a9c8:
    puVar14 = &UNK_0128440e;
    uVar24 = 0xc;
  }
  func_0x0da4acd0(&lStack_348,param_1,puVar14,uVar24);
  lVar27 = lStack_348;
  lStack_200 = param_1;
  if (cStack_318 == '\0') {
    if ((DAT_0f730b80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730b80), iVar11 != 0)) {
      func_0x0da4a840();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
      func_0x0410844d(&DAT_0f730b80);
    }
    plVar18 = (long *)(*(long *)(lVar27 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
    do {
      lVar28 = *plVar18;
      if (lVar28 == -1) goto LAB_0d91aa60;
      plVar18 = (long *)(*(long *)(lVar27 + 0x30) + lVar28 * 0x18);
    } while (*(uint *)(*(long *)(lVar27 + 0x30) + 8 + lVar28 * 0x18) != *(uint *)(_DAT_0f730b00 + 4)
            );
    if (plVar18 == *(long **)(lVar27 + 0x38)) {
LAB_0d91aa60:
      puVar14 = &DAT_0f730b00;
    }
    else {
      puVar14 = (undefined *)plVar18[2];
    }
    for (pbVar15 = *(byte **)(lStack_348 + 0x50); pbVar15 != *(byte **)(lStack_348 + 0x58);
        pbVar15 = pbVar15 + 0x38) {
      bVar2 = *pbVar15;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x18) goto LAB_0d91ab2a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x18) {
LAB_0d91ab2a:
        if ((bVar2 & 1) == 0) {
          pbVar23 = pbVar15 + 1;
        }
        else {
          pbVar23 = *(byte **)(pbVar15 + 0x10);
        }
        auVar30[0] = -(*pbVar23 == 0x43);
        auVar30[1] = -(pbVar23[1] == 0x45);
        auVar30[2] = -(pbVar23[2] == 0x52);
        auVar30[3] = -(pbVar23[3] == 0x45);
        auVar30[4] = -(pbVar23[4] == 0x41);
        auVar30[5] = -(pbVar23[5] == 0x4c);
        auVar30[6] = -(pbVar23[6] == 0x5f);
        auVar30[7] = -(pbVar23[7] == 0x45);
        auVar30[8] = -(pbVar23[8] == 0x44);
        auVar30[9] = -(pbVar23[9] == 0x49);
        auVar30[10] = -(pbVar23[10] == 0x54);
        auVar30[0xb] = -(pbVar23[0xb] == 0x4f);
        auVar30[0xc] = -(pbVar23[0xc] == 0x52);
        auVar30[0xd] = -(pbVar23[0xd] == 0x5f);
        auVar30[0xe] = -(pbVar23[0xe] == 0x53);
        auVar30[0xf] = -(pbVar23[0xf] == 0x43);
        uVar22 = *(undefined8 *)(pbVar23 + 0x10);
        auVar36[0] = -((char)uVar22 == 'H');
        auVar36[1] = -((char)((ulong)uVar22 >> 8) == 'E');
        auVar36[2] = -((char)((ulong)uVar22 >> 0x10) == 'M');
        auVar36[3] = -((char)((ulong)uVar22 >> 0x18) == 'A');
        auVar36[4] = -((char)((ulong)uVar22 >> 0x20) == '_');
        auVar36[5] = -((char)((ulong)uVar22 >> 0x28) == 'T');
        auVar36[6] = -((char)((ulong)uVar22 >> 0x30) == 'A');
        auVar36[7] = -((char)((ulong)uVar22 >> 0x38) == 'G');
        auVar36[8] = 0xff;
        auVar36[9] = 0xff;
        auVar36[10] = 0xff;
        auVar36[0xb] = 0xff;
        auVar36[0xc] = 0xff;
        auVar36[0xd] = 0xff;
        auVar36[0xe] = 0xff;
        auVar36[0xf] = 0xff;
        auVar36 = auVar36 & auVar30;
        if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == *(byte **)(lStack_348 + 0x58)) {
LAB_0d91ab58:
      uVar10 = uStack_31c;
      if (iStack_320 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0d91abdc;
        lVar27 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)func_0x048aead0(lVar27 + 0x18);
        }
        auStack_4a8 = (undefined1  [8])func_0x048b0c90(lVar27 + 0x18,puVar14,uVar10,1);
        if (auStack_4a8 == (undefined1  [8])0x0) {
          _auStack_4a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4a8);
          if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91abdc;
        }
        if ((*(int *)((long)auStack_4a8 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auStack_4a8 + 0x58) != 0)) {
          lVar27 = *(long *)((long)auStack_4a8 + 0x58) + 0x40;
        }
        else {
LAB_0d91abdc:
          lVar27 = 0;
        }
      }
      plStack_418 = (long *)&UNK_07758170;
      pcStack_410 = (code *)0x0;
      puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x2554ba3c6);
      auStack_428._0_8_ = &UNK_0128442f;
      _auStack_490 = ZEXT816(0x7758170);
      auStack_480._0_5_ = 0x2554ba3c6;
      uStack_4a0 = &UNK_0128442f;
      auStack_4a8 = (undefined1  [8])&UNK_07757da0;
      puStack_398 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_398 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar22 = _UNK_0128416f;
      auStack_3a8._8_8_ = 0x18;
      auStack_3a8._0_8_ = 0x21;
      *puStack_398 = _DAT_01284167;
      puStack_398[1] = uVar22;
      puStack_398[2] = 0x4741545f414d4548;
      *(undefined1 *)(puStack_398 + 3) = 0;
      lVar27 = FUN_048b5060(lVar27,auStack_3a8);
      *(undefined **)(lVar27 + 0x20) = &UNK_07757da0;
      if ((undefined1 *)(lVar27 + 0x20) == auStack_4a8) {
        pcVar16 = (code *)0x0;
      }
      else {
        puVar26 = (undefined8 *)(lVar27 + 0x28);
        if (*(code **)(lVar27 + 0x40) == (code *)0x0) {
LAB_0d91acef:
          (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
        }
        else {
          (**(code **)(lVar27 + 0x40))(puVar26);
          if (auStack_480[4] != '\0') {
            if (auStack_480[4] == '\x02') goto LAB_0d91acef;
            uVar22 = uStack_4a0;
            uStack_4a0 = 0;
            *puVar26 = uVar22;
          }
        }
        *(undefined1 (*) [8])(lVar27 + 0x38) = auStack_490;
        *(code **)(lVar27 + 0x40) = pcStack_488;
        *(undefined4 *)(lVar27 + 0x48) = auStack_480._0_4_;
        *(char *)(lVar27 + 0x4c) = auStack_480[4];
        pcVar16 = pcStack_488;
      }
      if ((auStack_3a8[0] & 1) != 0) {
        func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
        pcVar16 = pcStack_488;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_4a8 + 8);
      }
      if (pcStack_410 != (code *)0x0) {
        (*pcStack_410)(auStack_428);
      }
    }
    else {
      iVar11 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f5af488 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5af488), iVar13 != 0)) {
        func_0x07758020(0xf5af470);
        func_0x0410844d(&DAT_0f5af488);
      }
      if (iVar11 == _DAT_0f5af474) goto LAB_0d91ab58;
    }
    uVar10 = uStack_31c;
    iVar11 = iStack_320;
    lVar27 = lStack_348;
    plStack_298 = plStack_340;
    lStack_290 = lStack_338;
    puStack_288 = puStack_330;
    uStack_280 = uStack_328;
    uStack_278 = CONCAT71(uStack_317,cStack_318);
    uStack_1e0 = 0;
    auStack_3a8._8_8_ = 0x4247526d72;
    auStack_3a8._0_8_ = 0x6f4e726f6c6f4318;
    puStack_398 = (undefined8 *)0x0;
    uStack_390 = 0x400;
    auStack_388 = (undefined1  [16])0x0;
    auStack_1d8 = (undefined1  [16])0x0;
    uStack_378 = 0;
    if ((DAT_0f730b80 == '\0') && (iVar13 = func_0x04108328(&DAT_0f730b80), iVar13 != 0)) {
      func_0x0da4a840();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
      func_0x0410844d(&DAT_0f730b80);
    }
    plVar18 = (long *)(*(long *)(lVar27 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
    do {
      lVar28 = *plVar18;
      if (lVar28 == -1) goto LAB_0d91aea0;
      plVar18 = (long *)(*(long *)(lVar27 + 0x30) + lVar28 * 0x18);
    } while (*(uint *)(*(long *)(lVar27 + 0x30) + 8 + lVar28 * 0x18) != *(uint *)(_DAT_0f730b00 + 4)
            );
    if (plVar18 == *(long **)(lVar27 + 0x38)) {
LAB_0d91aea0:
      puVar14 = &DAT_0f730b00;
      pbVar15 = *(byte **)(lVar27 + 0x50);
      pbVar23 = *(byte **)(lVar27 + 0x58);
      if (pbVar15 != pbVar23) {
LAB_0d91af4e:
        do {
          bVar2 = *pbVar15;
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 == 0x1d) goto LAB_0d91af7a;
          }
          else if (*(long *)(pbVar15 + 8) == 0x1d) {
LAB_0d91af7a:
            if ((bVar2 & 1) == 0) {
              pbVar25 = pbVar15 + 1;
            }
            else {
              pbVar25 = *(byte **)(pbVar15 + 0x10);
            }
            auVar31[0] = -(*pbVar25 == 0x5b);
            auVar31[1] = -(pbVar25[1] == 99);
            auVar31[2] = -(pbVar25[2] == 0x65);
            auVar31[3] = -(pbVar25[3] == 0x72);
            auVar31[4] = -(pbVar25[4] == 0x65);
            auVar31[5] = -(pbVar25[5] == 0x61);
            auVar31[6] = -(pbVar25[6] == 0x6c);
            auVar31[7] = -(pbVar25[7] == 0x3a);
            auVar31[8] = -(pbVar25[8] == 0x6a);
            auVar31[9] = -(pbVar25[9] == 0x73);
            auVar31[10] = -(pbVar25[10] == 0x6f);
            auVar31[0xb] = -(pbVar25[0xb] == 0x6e);
            auVar31[0xc] = -(pbVar25[0xc] == 0x5f);
            auVar31[0xd] = -(pbVar25[0xd] == 0x73);
            auVar31[0xe] = -(pbVar25[0xe] == 99);
            auVar31[0xf] = -(pbVar25[0xf] == 0x68);
            auVar37[0] = -(pbVar25[0xd] == 0x73);
            auVar37[1] = -(pbVar25[0xe] == 99);
            auVar37[2] = -(pbVar25[0xf] == 0x68);
            auVar37[3] = -(pbVar25[0x10] == 0x65);
            auVar37[4] = -(pbVar25[0x11] == 0x6d);
            auVar37[5] = -(pbVar25[0x12] == 0x61);
            auVar37[6] = -(pbVar25[0x13] == 0x5f);
            auVar37[7] = -(pbVar25[0x14] == 0x70);
            auVar37[8] = -(pbVar25[0x15] == 0x72);
            auVar37[9] = -(pbVar25[0x16] == 0x6f);
            auVar37[10] = -(pbVar25[0x17] == 0x70);
            auVar37[0xb] = -(pbVar25[0x18] == 0x65);
            auVar37[0xc] = -(pbVar25[0x19] == 0x72);
            auVar37[0xd] = -(pbVar25[0x1a] == 0x74);
            auVar37[0xe] = -(pbVar25[0x1b] == 0x79);
            auVar37[0xf] = -(pbVar25[0x1c] == 0x5d);
            auVar37 = auVar37 & auVar31;
            if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar15 = pbVar15 + 0x38;
        } while (pbVar15 != pbVar23);
      }
    }
    else {
      puVar14 = (undefined *)plVar18[2];
      pbVar15 = *(byte **)(lVar27 + 0x50);
      pbVar23 = *(byte **)(lVar27 + 0x58);
      if (pbVar15 != pbVar23) goto LAB_0d91af4e;
    }
    if (pbVar15 == pbVar23) {
LAB_0d91afaa:
      if (iVar11 == 0) {
        if (((puVar14 == (undefined *)0x0) || (*(int *)(puVar14 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar14 + 0x68) == 0)) goto LAB_0d91b021;
        lVar28 = *(long *)(puVar14 + 0x68) + 0x38;
      }
      else {
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)func_0x048aead0(lVar27 + 0x18);
        }
        auVar17 = (undefined1  [8])func_0x048b0c90(lVar27 + 0x18,puVar14,uVar10,1);
        if (auVar17 == (undefined1  [8])0x0) {
          _auStack_4a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4a8);
          auVar17 = auStack_4a8;
          if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91b021;
        }
        if ((*(int *)((long)auVar17 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar17 + 0x58) != 0)) {
          lVar28 = *(long *)((long)auVar17 + 0x58) + 0x40;
        }
        else {
LAB_0d91b021:
          lVar28 = 0;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_428._8_8_;
      auStack_428 = auVar3 << 0x40;
      plStack_418 = (long *)&UNK_048b4ab0;
      pcStack_410 = (code *)&UNK_048b49f0;
      puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x1d33bd9c5);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      puVar26[2] = puStack_398;
      *puVar26 = auStack_3a8._0_8_;
      puVar26[1] = auStack_3a8._8_8_;
      auStack_3a8 = (undefined1  [16])0x0;
      puStack_398 = (undefined8 *)0x0;
      *(undefined2 *)(puVar26 + 3) = uStack_390;
      puVar26[4] = auStack_388._0_8_;
      puVar26[5] = auStack_388._8_8_;
      auStack_388._8_8_ = 0;
      puVar26[6] = uStack_378;
      uStack_378 = 0;
      pcStack_488 = (code *)&UNK_048b49f0;
      auStack_490 = (undefined1  [8])&UNK_048b4ab0;
      auStack_480._0_5_ = 0x1d33bd9c5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_428._8_8_;
      auStack_428 = auVar4 << 0x40;
      uStack_4a0 = puVar26;
      auStack_4a8 = (undefined1  [8])&UNK_048b46e0;
      puStack_3b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_3b8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar22 = _UNK_014d987e;
      plStack_3c8 = (long *)0x21;
      plStack_3c0 = (long *)0x1d;
      *(ulong *)((long)puStack_3b8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_3b8 + 0x15) = uVar22;
      uVar22 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_3b8 = _DAT_014d9869;
      puStack_3b8[1] = uVar22;
      *(undefined1 *)((long)puStack_3b8 + 0x1d) = 0;
      lVar28 = FUN_048b5060(lVar28,&plStack_3c8);
      *(undefined **)(lVar28 + 0x20) = &UNK_048b46e0;
      pcVar16 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar28 + 0x20) != auStack_4a8) {
        puVar26 = (undefined8 *)(lVar28 + 0x28);
        if (*(code **)(lVar28 + 0x40) == (code *)0x0) {
LAB_0d91b1f9:
          uVar22 = uStack_4a0;
          uStack_4a0 = 0;
          *puVar26 = uVar22;
        }
        else {
          (**(code **)(lVar28 + 0x40))(puVar26);
          if (auStack_480[4] != '\0') {
            if (auStack_480[4] != '\x02') goto LAB_0d91b1f9;
            (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
          }
        }
        *(undefined1 (*) [8])(lVar28 + 0x38) = auStack_490;
        *(code **)(lVar28 + 0x40) = pcStack_488;
        *(undefined4 *)(lVar28 + 0x48) = auStack_480._0_4_;
        *(char *)(lVar28 + 0x4c) = auStack_480[4];
        pcVar16 = pcStack_488;
      }
      if (((ulong)plStack_3c8 & 1) != 0) {
        func_0x0412a280(puStack_3b8,(ulong)plStack_3c8 & 0xfffffffffffffffe);
        pcVar16 = pcStack_488;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_4a8 + 8);
      }
      if (pcStack_410 != (code *)0x0) {
        (*pcStack_410)(auStack_428);
      }
    }
    else {
      iVar13 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar12 = func_0x04108328(&DAT_0f550768), iVar12 != 0)) {
        FUN_048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar13 == _DAT_0f550754) goto LAB_0d91afaa;
    }
    lStack_2d0 = lVar27;
    plStack_2c8 = plStack_298;
    lStack_2c0 = lStack_290;
    puStack_2b8 = puStack_288;
    uStack_2b0 = uStack_280;
    uStack_2a0 = uStack_278;
    uStack_2a8 = 0x1e1bc4d500000004;
    if ((DAT_0f730ba0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730ba0), iVar11 != 0)) {
      func_0x0da4a950();
      func_0x0410844d(&DAT_0f730ba0);
    }
    auStack_4a8._0_4_ = uStack_2a8._4_4_;
    uStack_4a0 = 0;
    uStack_498 = (ulong)uStack_498._4_4_ << 0x20;
    pcStack_488 = (code *)&SUB_048aead0;
    auStack_490 = (undefined1  [8])0x1;
    auStack_480._8_8_ = &UNK_0da4b960;
    auStack_480._0_8_ = &UNK_04905970;
    auStack_470._0_12_ = ZEXT812(0);
    auStack_460 = ZEXT816(0);
    func_0x049057f0(&plStack_2c8,auStack_4a8);
    FUN_048aea50(auStack_4a8);
    plStack_418 = puStack_2b8;
    pcStack_410 = (code *)uStack_2b0;
    auStack_428._8_8_ = lStack_2c0;
    auStack_428._0_8_ = plStack_2c8;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0ef44b00;
    plStack_3c0 = (long *)0x0;
    puStack_3b8 = (undefined8 *)CONCAT71(puStack_3b8._1_7_,0xff);
    plStack_3c8 = plVar18;
    func_0x0da4b7e0(auStack_4a8,auStack_428,&plStack_3c8);
    if (plStack_3c0 != (long *)0x0) {
      (**(code **)(*plStack_3c0 + 0x28))();
    }
    if (plStack_3c8 != (long *)0x0) {
      (**(code **)(*plStack_3c8 + 8))();
    }
    uVar22 = uStack_2a0;
    lVar27 = lStack_2d0;
    plStack_228 = plStack_2c8;
    lStack_220 = lStack_2c0;
    puStack_218 = puStack_2b8;
    uStack_210 = uStack_2b0;
    iVar11 = (int)uStack_2a8;
    uVar10 = uStack_2a8._4_4_;
    auStack_440 = (undefined1  [16])0x0;
    auStack_450 = (undefined1  [16])0x0;
    auStack_460 = (undefined1  [16])0x0;
    auStack_470 = (undefined1  [16])0x0;
    auStack_480 = (undefined1  [16])0x0;
    uStack_430 = 0;
    uStack_498 = 0;
    stack0xfffffffffffffb71 = SUB1615((undefined1  [16])0x0,1);
    auStack_490[0] = 0xff;
    auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
    uStack_4a0 = 0xffffffffffffffff;
    FUN_041679a0(&pcStack_488);
    uVar19 = func_0x041681f0(&pcStack_488,0xf547a30);
    auStack_480._0_8_ = uVar19;
    uVar19 = func_0x041681f0(&pcStack_488,0xf547770);
    auStack_480._8_8_ = uVar19;
    auStack_470 = (undefined1  [16])0x0;
    auStack_460 = (undefined1  [16])0x0;
    auStack_450 = (undefined1  [16])0x0;
    auStack_440 = (undefined1  [16])0x0;
    uStack_430 = 0;
    bStack_240 = 0x22;
    uStack_23f = (undefined7)_DAT_014ec880;
    uStack_238 = (undefined1)((ulong)_DAT_014ec880 >> 0x38);
    uStack_237 = (undefined7)_UNK_014ec888;
    uStack_230 = (undefined1)((ulong)_UNK_014ec888 >> 0x38);
    uStack_22f = 0x24;
    func_0x0ed60210(auStack_4a8,&bStack_240,0);
    uStack_98 = auStack_490[0];
    uStack_a8 = uStack_4a0;
    uStack_a0 = uStack_498;
    puStack_b0 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_90,&pcStack_488);
    uStack_88 = auStack_480._0_8_;
    uStack_80 = auStack_480._8_8_;
    uStack_78 = auStack_470._0_8_;
    uStack_70 = auStack_470._8_8_;
    auStack_68 = auStack_460;
    if (auStack_460._8_8_ != 0) {
      LOCK();
      *(long *)(auStack_460._8_8_ + 8) = *(long *)(auStack_460._8_8_ + 8) + 1;
      UNLOCK();
    }
    uStack_58 = auStack_450._0_8_;
    if ((auStack_450[8] & 1) == 0) {
      uStack_40 = auStack_440._8_8_;
      auStack_50._8_8_ = auStack_440._0_8_;
      auStack_50._0_8_ = auStack_450._8_8_;
    }
    else {
      func_0x0412e5e0(auStack_50,auStack_440._8_8_,auStack_440._0_8_);
    }
    uStack_38 = uStack_430;
    if (iVar11 == 4) {
      if ((DAT_0f730b80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730b80), iVar11 != 0)) {
        func_0x0da4a840();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
        func_0x0410844d(&DAT_0f730b80);
      }
      plVar18 = (long *)(*(long *)(lVar27 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
      do {
        lVar28 = *plVar18;
        if (lVar28 == -1) goto LAB_0d91b6d8;
        plVar18 = (long *)(*(long *)(lVar27 + 0x30) + lVar28 * 0x18);
      } while (*(uint *)(*(long *)(lVar27 + 0x30) + 8 + lVar28 * 0x18) !=
               *(uint *)(_DAT_0f730b00 + 4));
      if (plVar18 == *(long **)(lVar27 + 0x38)) {
LAB_0d91b6d8:
        puVar14 = &DAT_0f730b00;
      }
      else {
        puVar14 = (undefined *)plVar18[2];
      }
      lVar28 = func_0x048b1040(lVar27 + 0x18,puVar14,uVar10,1);
      if (lVar28 == 0) {
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_428);
        lVar21 = *(long *)(auStack_428._0_8_ + 0x38);
        lVar28 = auStack_428._0_8_;
        if (lVar21 == 0) goto LAB_0d91b7c4;
LAB_0d91b7eb:
        do {
          lVar28 = lVar21;
          lVar21 = *(long *)(lVar28 + 0x38);
          if (*(long *)(lVar28 + 0x38) == 0) {
            auStack_428 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_428);
            lVar21 = auStack_428._0_8_;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar28 + 0x38);
        if (*(long *)(lVar28 + 0x38) != 0) goto LAB_0d91b7eb;
LAB_0d91b7c4:
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_428);
        lVar21 = auStack_428._0_8_;
        if (auStack_428._0_8_ != 0) goto LAB_0d91b7eb;
      }
      lVar28 = *(long *)(lVar28 + 0x48);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0d91b857:
      *(undefined1 *)(puVar26 + 3) = uStack_98;
      puVar26[1] = uStack_a8;
      puVar26[2] = uStack_a0;
      *puVar26 = &UNK_0f4e3c70;
      func_0x04167a20(puVar26 + 4,auStack_90);
      puVar26[5] = uStack_88;
      puVar26[6] = uStack_80;
      puVar26[7] = uStack_78;
      puVar26[8] = uStack_70;
      puVar26[9] = auStack_68._0_8_;
      puVar26[10] = auStack_68._8_8_;
      auStack_68 = (undefined1  [16])0x0;
      puVar26[0xb] = uStack_58;
      puVar26[0xe] = uStack_40;
      puVar26[0xc] = auStack_50._0_8_;
      puVar26[0xd] = auStack_50._8_8_;
      auStack_50 = (undefined1  [16])0x0;
      uStack_40 = 0;
      puVar26[0xf] = uStack_38;
      plVar18 = *(long **)(lVar28 + 8);
      *(undefined8 **)(lVar28 + 8) = puVar26;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))();
      }
    }
    else if (iVar11 == 1) {
      if ((DAT_0f730b80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730b80), iVar11 != 0)) {
        func_0x0da4a840();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
        func_0x0410844d(&DAT_0f730b80);
      }
      plVar18 = (long *)(*(long *)(lVar27 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
      do {
        lVar28 = *plVar18;
        if (lVar28 == -1) goto LAB_0d91b658;
        plVar18 = (long *)(*(long *)(lVar27 + 0x30) + lVar28 * 0x18);
      } while (*(uint *)(*(long *)(lVar27 + 0x30) + 8 + lVar28 * 0x18) !=
               *(uint *)(_DAT_0f730b00 + 4));
      if (plVar18 == *(long **)(lVar27 + 0x38)) {
LAB_0d91b658:
        puVar14 = &DAT_0f730b00;
      }
      else {
        puVar14 = (undefined *)plVar18[2];
      }
      lVar28 = func_0x048b0c90(lVar27 + 0x18,puVar14,uVar10,1);
      if (lVar28 == 0) {
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_428);
        lVar28 = auStack_428._0_8_;
      }
      lVar28 = *(long *)(lVar28 + 0x58);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0d91b857;
    }
    lStack_308 = lVar27;
    plStack_300 = plStack_228;
    lStack_2f8 = lStack_220;
    puStack_2f0 = puStack_218;
    uStack_2e8 = uStack_210;
    uStack_2d8 = (undefined1)uVar22;
    uStack_2e0 = 0x1e1bc4d500000004;
    if ((DAT_0f730ba0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730ba0), iVar11 != 0)) {
      func_0x0da4a950();
      func_0x0410844d(&DAT_0f730ba0);
    }
    auStack_428._0_4_ = uStack_2e0._4_4_;
    auStack_428._8_8_ = 0;
    plStack_418 = (long *)((ulong)plStack_418 & 0xffffffff00000000);
    pcStack_410 = (code *)0x1;
    puStack_408 = &SUB_048aead0;
    puStack_400 = &UNK_0da4bb80;
    puStack_3f8 = &UNK_0da4bb90;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    func_0x049057f0(&plStack_300,auStack_428);
    FUN_048aea50(auStack_428);
    puStack_3b8 = puStack_2f0;
    uStack_3b0 = uStack_2e8;
    plStack_3c8 = plStack_300;
    plStack_3c0 = (long *)lStack_2f8;
    auStack_368._0_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if ((undefined8 *)auStack_368._0_8_ == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)auStack_368._0_8_ = &UNK_0f01a258;
    auStack_368._8_8_ = 0;
    uStack_358 = 0xff;
    func_0x0da4b7e0(auStack_428,&plStack_3c8,auStack_368);
    if ((long *)auStack_368._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_368._8_8_ + 0x28))();
    }
    if ((long *)auStack_368._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_368._0_8_ + 8))();
    }
    if ((DAT_0f730ba0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730ba0), iVar11 != 0)) {
      func_0x0da4a950();
      func_0x0410844d(&DAT_0f730ba0);
    }
    if (uStack_2e8._4_4_ == 2) {
      piVar20 = *(int **)(puStack_2f0[0xf] + 0x60);
      iVar11 = *piVar20;
      while (iVar11 != (int)uStack_2e8) {
        piVar20 = piVar20 + 0x16;
        iVar11 = *piVar20;
      }
      lVar27 = *(long *)(piVar20 + 0xc);
      while (lVar27 != lStack_2f8) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar27 = *(long *)(piVar20 + 0xc);
      }
LAB_0d91bb0f:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 2;
    }
    else {
      if (uStack_2e8._4_4_ == 1) {
        piVar20 = *(int **)(puStack_2f0[0xf] + 0x48);
        iVar11 = *piVar20;
        while (iVar11 != (int)uStack_2e8) {
          piVar20 = piVar20 + 0x1a;
          iVar11 = *piVar20;
        }
        goto LAB_0d91bb0f;
      }
      if (uStack_2e8._4_4_ == 0) {
        *(uint *)(puStack_2f0 + 3) = *(uint *)(puStack_2f0 + 3) | 0x20000;
      }
    }
    if ((DAT_0f730ba0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730ba0), iVar11 != 0)) {
      func_0x0da4a950();
      func_0x0410844d(&DAT_0f730ba0);
    }
    auStack_428._0_4_ = 0xbf75c8f8;
    auStack_428._8_8_ = 0;
    plStack_418 = (long *)CONCAT44(plStack_418._4_4_,1);
    pcStack_410 = (code *)0x0;
    puStack_408 = &UNK_05fc0d20;
    puStack_400 = &SUB_048b06d0;
    puStack_3f8 = &UNK_0da4bdb0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    func_0x049057f0(&plStack_300,auStack_428);
    FUN_048aea50(auStack_428);
    puStack_3b8 = puStack_2f0;
    uStack_3b0 = uStack_2e8;
    plStack_3c8 = plStack_300;
    plStack_3c0 = (long *)lStack_2f8;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar26 = &UNK_0f01a258;
    if ((DAT_0f551cb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f551cb0), iVar11 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_428._0_4_ = _DAT_0f551c9c;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(plVar18 + 1) = (undefined1  [16])0x0;
    *plVar18 = (long)&UNK_0ef46c98;
    plVar18[3] = (long)puVar26;
    *(undefined1 *)(plVar18 + 4) = 0xff;
    auStack_428._8_8_ = plVar18 + 3;
    auStack_368 = (undefined1  [16])0x0;
    plStack_418 = plVar18;
    FUN_048afd20(&plStack_3c8,auStack_428);
    plVar18 = plStack_418;
    if (plStack_418 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_418 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plStack_418 + 0x10))(plStack_418);
        FUN_0412c2d0(plVar18);
      }
    }
    uVar22 = auStack_368._8_8_;
    if ((long *)auStack_368._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_368._8_8_ + 8);
      lVar27 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*(long *)auStack_368._8_8_ + 0x10))(auStack_368._8_8_);
        FUN_0412c2d0(uVar22);
      }
    }
    lVar27 = lStack_308;
    lVar28 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (lVar28 == 0) {
      func_0x0eec74c0(0xa0,0);
    }
    func_0x0eee2f00(lVar28,&UNK_011e5220,0x9c);
    *(undefined1 *)(lVar28 + 0x9c) = 0;
    if ((DAT_0f730b80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f730b80), iVar11 != 0)) {
      func_0x0da4a840();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f730b00,0xf53dab8);
      func_0x0410844d(&DAT_0f730b80);
    }
    plVar18 = (long *)(*(long *)(lVar27 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar27 + 0x20) - *(long *)(lVar27 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f730b00 + 4)) * 8);
    do {
      lVar21 = *plVar18;
      if (lVar21 == -1) goto LAB_0d91bda0;
      plVar18 = (long *)(*(long *)(lVar27 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar27 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f730b00 + 4)
            );
    if (plVar18 == *(long **)(lVar27 + 0x38)) {
LAB_0d91bda0:
      bVar2 = *(byte *)(_DAT_0f730b68 + 0x88);
      lVar27 = _DAT_0f730b68;
    }
    else {
      bVar2 = *(byte *)(*(long *)(plVar18[2] + 0x68) + 0x88);
      lVar27 = *(long *)(plVar18[2] + 0x68);
    }
    if ((bVar2 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar27 + 0x98),*(ulong *)(lVar27 + 0x88) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar27 + 0x88) = 0xa1;
    *(undefined8 *)(lVar27 + 0x90) = 0x9c;
    *(long *)(lVar27 + 0x98) = lVar28;
    puStack_b0 = &UNK_0f4e3c70;
    if ((auStack_50[0] & 1) != 0) {
      func_0x0412a280(uStack_40,auStack_50._0_8_ & 0xfffffffffffffffe);
    }
    param_1 = lStack_200;
    uVar22 = auStack_68._8_8_;
    if ((long *)auStack_68._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_68._8_8_ + 8);
      lVar27 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*(long *)auStack_68._8_8_ + 0x10))(auStack_68._8_8_);
        FUN_0412c2d0(uVar22);
      }
    }
    FUN_04167a40(auStack_90);
    if ((bStack_240 & 1) == 0) {
      auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
      if ((auStack_450[8] & 1) != 0) goto LAB_0d91bed1;
LAB_0d91be9a:
      plVar18 = (long *)auStack_460._8_8_;
    }
    else {
      func_0x0412a280(CONCAT53(uStack_22d,CONCAT21(uStack_22f,uStack_230)),
                      CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
      auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
      if ((auStack_450[8] & 1) == 0) goto LAB_0d91be9a;
LAB_0d91bed1:
      func_0x0412a280(auStack_440._8_8_,auStack_450._8_8_ & 0xfffffffffffffffe);
      plVar18 = (long *)auStack_460._8_8_;
    }
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        FUN_0412c2d0(plVar18);
      }
    }
    FUN_04167a40(&pcStack_488);
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    if ((auStack_388._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_388._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_388._8_8_ = 0;
    if ((auStack_3a8[0] & 1) != 0) {
      func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_1d8._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_1d8._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_1d8._8_8_ = 0;
    if ((auStack_1d8._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_1d8._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auStack_1d8._8_8_;
    auStack_1d8 = auVar5 << 0x40;
  }
  lVar27 = func_0x0c34ccb0(lStack_310);
  if ((*(int *)(lVar27 + 0x60) == -0x2b3da790) && (lVar27 = *(long *)(lVar27 + 0x68), lVar27 != 0))
  {
    bVar29 = (*(byte *)(lVar27 + 8) & 1) != 0;
    lVar28 = lVar27 + 9;
    if (bVar29) {
      lVar28 = *(long *)(lVar27 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar27 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar27 + 0x10);
    }
    func_0x0da4bed0(&lStack_348,param_1,lVar28,uVar24);
    if (cStack_318 == '\0') goto LAB_0d91c0ea;
LAB_0d91c0a5:
    lVar27 = func_0x07d31180(lStack_310);
    if (*(int *)(lVar27 + 0x60) == -0x2b3da790) goto LAB_0d91d5bd;
LAB_0d91d5ff:
    func_0x0da4ce50(&lStack_348,param_1,&UNK_0126a29d,0xc);
  }
  else {
    func_0x0da4bed0(&lStack_348,param_1,&UNK_0136fdcd,0xb);
    if (cStack_318 != '\0') goto LAB_0d91c0a5;
LAB_0d91c0ea:
    lVar28 = lStack_348 + 0x18;
    lVar27 = func_0x0c34ccb0(lVar28);
    for (pbVar15 = *(byte **)(lStack_348 + 0x50); pbVar15 != *(byte **)(lStack_348 + 0x58);
        pbVar15 = pbVar15 + 0x38) {
      bVar2 = *pbVar15;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x18) goto LAB_0d91c1aa;
      }
      else if (*(long *)(pbVar15 + 8) == 0x18) {
LAB_0d91c1aa:
        if ((bVar2 & 1) == 0) {
          pbVar23 = pbVar15 + 1;
        }
        else {
          pbVar23 = *(byte **)(pbVar15 + 0x10);
        }
        auVar32[0] = -(*pbVar23 == 0x43);
        auVar32[1] = -(pbVar23[1] == 0x45);
        auVar32[2] = -(pbVar23[2] == 0x52);
        auVar32[3] = -(pbVar23[3] == 0x45);
        auVar32[4] = -(pbVar23[4] == 0x41);
        auVar32[5] = -(pbVar23[5] == 0x4c);
        auVar32[6] = -(pbVar23[6] == 0x5f);
        auVar32[7] = -(pbVar23[7] == 0x45);
        auVar32[8] = -(pbVar23[8] == 0x44);
        auVar32[9] = -(pbVar23[9] == 0x49);
        auVar32[10] = -(pbVar23[10] == 0x54);
        auVar32[0xb] = -(pbVar23[0xb] == 0x4f);
        auVar32[0xc] = -(pbVar23[0xc] == 0x52);
        auVar32[0xd] = -(pbVar23[0xd] == 0x5f);
        auVar32[0xe] = -(pbVar23[0xe] == 0x53);
        auVar32[0xf] = -(pbVar23[0xf] == 0x43);
        uVar22 = *(undefined8 *)(pbVar23 + 0x10);
        auVar38[0] = -((char)uVar22 == 'H');
        auVar38[1] = -((char)((ulong)uVar22 >> 8) == 'E');
        auVar38[2] = -((char)((ulong)uVar22 >> 0x10) == 'M');
        auVar38[3] = -((char)((ulong)uVar22 >> 0x18) == 'A');
        auVar38[4] = -((char)((ulong)uVar22 >> 0x20) == '_');
        auVar38[5] = -((char)((ulong)uVar22 >> 0x28) == 'T');
        auVar38[6] = -((char)((ulong)uVar22 >> 0x30) == 'A');
        auVar38[7] = -((char)((ulong)uVar22 >> 0x38) == 'G');
        auVar38[8] = 0xff;
        auVar38[9] = 0xff;
        auVar38[10] = 0xff;
        auVar38[0xb] = 0xff;
        auVar38[0xc] = 0xff;
        auVar38[0xd] = 0xff;
        auVar38[0xe] = 0xff;
        auVar38[0xf] = 0xff;
        auVar38 = auVar38 & auVar32;
        if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == *(byte **)(lStack_348 + 0x58)) {
LAB_0d91c1d9:
      if (iStack_320 == 0) {
        if ((*(int *)(lVar27 + 0x60) != -0x2b3da790) || (*(long *)(lVar27 + 0x68) == 0))
        goto LAB_0d91c249;
        lVar27 = *(long *)(lVar27 + 0x68) + 0x38;
      }
      else {
        auStack_4a8 = (undefined1  [8])func_0x048b0c90(lVar28,lVar27,uStack_31c,1);
        if (auStack_4a8 == (undefined1  [8])0x0) {
          _auStack_4a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4a8);
          if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91c249;
        }
        if ((*(int *)((long)auStack_4a8 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auStack_4a8 + 0x58) != 0)) {
          lVar27 = *(long *)((long)auStack_4a8 + 0x58) + 0x40;
        }
        else {
LAB_0d91c249:
          lVar27 = 0;
        }
      }
      plStack_418 = (long *)&UNK_07758170;
      pcStack_410 = (code *)0x0;
      puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x2554ba3c6);
      auStack_428._0_8_ = &UNK_0128442f;
      _auStack_490 = ZEXT816(0x7758170);
      auStack_480._0_5_ = 0x2554ba3c6;
      uStack_4a0 = &UNK_0128442f;
      auStack_4a8 = (undefined1  [8])&UNK_07757da0;
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar22 = _UNK_0128416f;
      auStack_3a8._8_8_ = 0x18;
      auStack_3a8._0_8_ = 0x21;
      *puVar26 = _DAT_01284167;
      puVar26[1] = uVar22;
      puVar26[2] = 0x4741545f414d4548;
      *(undefined1 *)(puVar26 + 3) = 0;
      puStack_398 = puVar26;
      lVar27 = FUN_048b5060(lVar27,auStack_3a8);
      *(undefined **)(lVar27 + 0x20) = &UNK_07757da0;
      if ((undefined1 *)(lVar27 + 0x20) == auStack_4a8) {
        pcVar16 = (code *)0x0;
      }
      else {
        puVar26 = (undefined8 *)(lVar27 + 0x28);
        if (*(code **)(lVar27 + 0x40) == (code *)0x0) {
LAB_0d91c36e:
          (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
        }
        else {
          (**(code **)(lVar27 + 0x40))(puVar26);
          if (auStack_480[4] != '\0') {
            if (auStack_480[4] == '\x02') goto LAB_0d91c36e;
            uVar22 = uStack_4a0;
            uStack_4a0 = 0;
            *puVar26 = uVar22;
          }
        }
        *(undefined1 (*) [8])(lVar27 + 0x38) = auStack_490;
        *(code **)(lVar27 + 0x40) = pcStack_488;
        *(undefined4 *)(lVar27 + 0x48) = auStack_480._0_4_;
        *(char *)(lVar27 + 0x4c) = auStack_480[4];
        pcVar16 = pcStack_488;
      }
      if ((auStack_3a8[0] & 1) != 0) {
        func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
        pcVar16 = pcStack_488;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_4a8 + 8);
      }
      if (pcStack_410 != (code *)0x0) {
        (*pcStack_410)(auStack_428);
      }
    }
    else {
      iVar11 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f5af488 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5af488), iVar13 != 0)) {
        func_0x07758020(0xf5af470);
        func_0x0410844d(&DAT_0f5af488);
      }
      if (iVar11 == _DAT_0f5af474) goto LAB_0d91c1d9;
    }
    uVar10 = uStack_31c;
    iVar11 = iStack_320;
    lVar28 = lStack_348;
    plStack_298 = plStack_340;
    lStack_290 = lStack_338;
    puStack_288 = puStack_330;
    uStack_280 = uStack_328;
    uStack_278 = CONCAT71(uStack_317,cStack_318);
    auStack_1f8 = (undefined1  [16])0x0;
    auStack_3a8._8_4_ = 0x42475235;
    auStack_3a8._0_8_ = 0x3532726f6c6f4316;
    auStack_3a8[0xc] = 0;
    auStack_3a8._13_2_ = uStack_36c;
    auStack_3a8[0xf] = uStack_36a;
    puStack_398 = (undefined8 *)0x0;
    uStack_36c = 0;
    uStack_36a = 0;
    uStack_390 = 0x400;
    auStack_388 = (undefined1  [16])0x0;
    uStack_378 = 0;
    uStack_1e8 = 0;
    lVar27 = lStack_348 + 0x18;
    lVar21 = func_0x0c34ccb0(lVar27);
    for (pbVar15 = *(byte **)(lVar28 + 0x50); pbVar15 != *(byte **)(lVar28 + 0x58);
        pbVar15 = pbVar15 + 0x38) {
      bVar2 = *pbVar15;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0d91c62a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1d) {
LAB_0d91c62a:
        if ((bVar2 & 1) == 0) {
          pbVar23 = pbVar15 + 1;
        }
        else {
          pbVar23 = *(byte **)(pbVar15 + 0x10);
        }
        auVar33[0] = -(*pbVar23 == 0x5b);
        auVar33[1] = -(pbVar23[1] == 99);
        auVar33[2] = -(pbVar23[2] == 0x65);
        auVar33[3] = -(pbVar23[3] == 0x72);
        auVar33[4] = -(pbVar23[4] == 0x65);
        auVar33[5] = -(pbVar23[5] == 0x61);
        auVar33[6] = -(pbVar23[6] == 0x6c);
        auVar33[7] = -(pbVar23[7] == 0x3a);
        auVar33[8] = -(pbVar23[8] == 0x6a);
        auVar33[9] = -(pbVar23[9] == 0x73);
        auVar33[10] = -(pbVar23[10] == 0x6f);
        auVar33[0xb] = -(pbVar23[0xb] == 0x6e);
        auVar33[0xc] = -(pbVar23[0xc] == 0x5f);
        auVar33[0xd] = -(pbVar23[0xd] == 0x73);
        auVar33[0xe] = -(pbVar23[0xe] == 99);
        auVar33[0xf] = -(pbVar23[0xf] == 0x68);
        auVar39[0] = -(pbVar23[0xd] == 0x73);
        auVar39[1] = -(pbVar23[0xe] == 99);
        auVar39[2] = -(pbVar23[0xf] == 0x68);
        auVar39[3] = -(pbVar23[0x10] == 0x65);
        auVar39[4] = -(pbVar23[0x11] == 0x6d);
        auVar39[5] = -(pbVar23[0x12] == 0x61);
        auVar39[6] = -(pbVar23[0x13] == 0x5f);
        auVar39[7] = -(pbVar23[0x14] == 0x70);
        auVar39[8] = -(pbVar23[0x15] == 0x72);
        auVar39[9] = -(pbVar23[0x16] == 0x6f);
        auVar39[10] = -(pbVar23[0x17] == 0x70);
        auVar39[0xb] = -(pbVar23[0x18] == 0x65);
        auVar39[0xc] = -(pbVar23[0x19] == 0x72);
        auVar39[0xd] = -(pbVar23[0x1a] == 0x74);
        auVar39[0xe] = -(pbVar23[0x1b] == 0x79);
        auVar39[0xf] = -(pbVar23[0x1c] == 0x5d);
        auVar39 = auVar39 & auVar33;
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == *(byte **)(lVar28 + 0x58)) {
LAB_0d91c659:
      if (iVar11 == 0) {
        if ((*(int *)(lVar21 + 0x60) != -0x2b3da790) || (*(long *)(lVar21 + 0x68) == 0))
        goto LAB_0d91c6bf;
        lVar27 = *(long *)(lVar21 + 0x68) + 0x38;
      }
      else {
        auVar17 = (undefined1  [8])func_0x048b0c90(lVar27,lVar21,uVar10,1);
        if (auVar17 == (undefined1  [8])0x0) {
          _auStack_4a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_4a8);
          auVar17 = auStack_4a8;
          if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91c6bf;
        }
        if ((*(int *)((long)auVar17 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar17 + 0x58) != 0)) {
          lVar27 = *(long *)((long)auVar17 + 0x58) + 0x40;
        }
        else {
LAB_0d91c6bf:
          lVar27 = 0;
        }
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auStack_428._8_8_;
      auStack_428 = auVar6 << 0x40;
      plStack_418 = (long *)&UNK_048b4ab0;
      pcStack_410 = (code *)&UNK_048b49f0;
      puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x1d33bd9c5);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      puVar26[2] = puStack_398;
      *puVar26 = auStack_3a8._0_8_;
      puVar26[1] = auStack_3a8._8_8_;
      auStack_3a8 = (undefined1  [16])0x0;
      puStack_398 = (undefined8 *)0x0;
      *(undefined2 *)(puVar26 + 3) = uStack_390;
      puVar26[4] = auStack_388._0_8_;
      puVar26[5] = auStack_388._8_8_;
      auStack_388._8_8_ = 0;
      puVar26[6] = uStack_378;
      uStack_378 = 0;
      pcStack_488 = (code *)&UNK_048b49f0;
      auStack_490 = (undefined1  [8])&UNK_048b4ab0;
      auStack_480._0_5_ = 0x1d33bd9c5;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auStack_428._8_8_;
      auStack_428 = auVar7 << 0x40;
      uStack_4a0 = puVar26;
      auStack_4a8 = (undefined1  [8])&UNK_048b46e0;
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar22 = _UNK_014d987e;
      plStack_3c8 = (long *)0x21;
      plStack_3c0 = (long *)0x1d;
      *(ulong *)((long)puVar26 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puVar26 + 0x15) = uVar22;
      uVar22 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puVar26 = _DAT_014d9869;
      puVar26[1] = uVar22;
      *(undefined1 *)((long)puVar26 + 0x1d) = 0;
      puStack_3b8 = puVar26;
      lVar27 = FUN_048b5060(lVar27,&plStack_3c8);
      *(undefined **)(lVar27 + 0x20) = &UNK_048b46e0;
      pcVar16 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar27 + 0x20) != auStack_4a8) {
        puVar26 = (undefined8 *)(lVar27 + 0x28);
        if (*(code **)(lVar27 + 0x40) == (code *)0x0) {
LAB_0d91c897:
          uVar22 = uStack_4a0;
          uStack_4a0 = 0;
          *puVar26 = uVar22;
        }
        else {
          (**(code **)(lVar27 + 0x40))(puVar26);
          if (auStack_480[4] != '\0') {
            if (auStack_480[4] != '\x02') goto LAB_0d91c897;
            (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
          }
        }
        *(undefined1 (*) [8])(lVar27 + 0x38) = auStack_490;
        *(code **)(lVar27 + 0x40) = pcStack_488;
        *(undefined4 *)(lVar27 + 0x48) = auStack_480._0_4_;
        *(char *)(lVar27 + 0x4c) = auStack_480[4];
        pcVar16 = pcStack_488;
      }
      if (((ulong)plStack_3c8 & 1) != 0) {
        func_0x0412a280(puStack_3b8,(ulong)plStack_3c8 & 0xfffffffffffffffe);
        pcVar16 = pcStack_488;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_4a8 + 8);
      }
      if (pcStack_410 != (code *)0x0) {
        (*pcStack_410)(auStack_428);
      }
    }
    else {
      iVar13 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar12 = func_0x04108328(&DAT_0f550768), iVar12 != 0)) {
        FUN_048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar13 == _DAT_0f550754) goto LAB_0d91c659;
    }
    lStack_2d0 = lVar28;
    plStack_2c8 = plStack_298;
    lStack_2c0 = lStack_290;
    puStack_2b8 = puStack_288;
    uStack_2b0 = uStack_280;
    uStack_2a0 = uStack_278;
    uStack_2a8 = 0x1e1bc4d500000004;
    if ((DAT_0f6dcb08 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6dcb08), iVar11 != 0)) {
      func_0x0c34cc40(0xf6dcaf0);
      func_0x0410844d(&DAT_0f6dcb08);
    }
    auStack_4a8._0_4_ = uStack_2a8._4_4_;
    uStack_4a0 = 0;
    uStack_498 = uStack_498 & 0xffffffff00000000;
    pcStack_488 = (code *)&SUB_048aead0;
    auStack_490 = (undefined1  [8])0x1;
    auStack_480._8_8_ = &UNK_0da4c8b0;
    auStack_480._0_8_ = &UNK_04905970;
    auStack_470._0_12_ = ZEXT812(0);
    auStack_460 = ZEXT816(0);
    func_0x049057f0(&plStack_2c8,auStack_4a8);
    FUN_048aea50(auStack_4a8);
    plStack_418 = puStack_2b8;
    pcStack_410 = (code *)uStack_2b0;
    auStack_428._8_8_ = lStack_2c0;
    auStack_428._0_8_ = plStack_2c8;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0ef44b00;
    plStack_3c0 = (long *)0x0;
    puStack_3b8 = (undefined8 *)CONCAT71(puStack_3b8._1_7_,0xff);
    plStack_3c8 = plVar18;
    func_0x0da4c730(auStack_4a8,auStack_428,&plStack_3c8);
    if (plStack_3c0 != (long *)0x0) {
      (**(code **)(*plStack_3c0 + 0x28))();
    }
    if (plStack_3c8 != (long *)0x0) {
      (**(code **)(*plStack_3c8 + 8))();
    }
    uVar22 = uStack_2a0;
    lVar27 = lStack_2d0;
    plStack_228 = plStack_2c8;
    lStack_220 = lStack_2c0;
    puStack_218 = puStack_2b8;
    uStack_210 = uStack_2b0;
    iVar11 = (int)uStack_2a8;
    uVar10 = uStack_2a8._4_4_;
    auStack_440 = (undefined1  [16])0x0;
    auStack_450 = (undefined1  [16])0x0;
    auStack_460 = (undefined1  [16])0x0;
    auStack_470 = (undefined1  [16])0x0;
    auStack_480 = (undefined1  [16])0x0;
    uStack_430 = 0;
    uStack_498 = 0;
    stack0xfffffffffffffb71 = SUB1615((undefined1  [16])0x0,1);
    auStack_490[0] = 0xff;
    auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
    uStack_4a0 = 0xffffffffffffffff;
    FUN_041679a0(&pcStack_488);
    uVar19 = func_0x041681f0(&pcStack_488,0xf547a30);
    auStack_480._0_8_ = uVar19;
    uVar19 = func_0x041681f0(&pcStack_488,0xf547770);
    auStack_480._8_8_ = uVar19;
    auStack_470 = (undefined1  [16])0x0;
    auStack_460 = (undefined1  [16])0x0;
    auStack_450 = (undefined1  [16])0x0;
    auStack_440 = (undefined1  [16])0x0;
    uStack_430 = 0;
    bStack_258 = 0x22;
    uStack_257 = (undefined7)_DAT_014ec880;
    uStack_250 = (undefined1)((ulong)_DAT_014ec880 >> 0x38);
    uStack_24f = (undefined7)_UNK_014ec888;
    uStack_248 = (undefined1)((ulong)_UNK_014ec888 >> 0x38);
    uStack_247 = 0x24;
    func_0x0ed60210(auStack_4a8,&bStack_258,0);
    uStack_118 = auStack_490[0];
    uStack_128 = uStack_4a0;
    uStack_120 = uStack_498;
    puStack_130 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_110,&pcStack_488);
    uStack_108 = auStack_480._0_8_;
    uStack_100 = auStack_480._8_8_;
    uStack_f8 = auStack_470._0_8_;
    uStack_f0 = auStack_470._8_8_;
    auStack_e8 = auStack_460;
    if (auStack_460._8_8_ != 0) {
      LOCK();
      *(long *)(auStack_460._8_8_ + 8) = *(long *)(auStack_460._8_8_ + 8) + 1;
      UNLOCK();
    }
    uStack_d8 = auStack_450._0_8_;
    if ((auStack_450[8] & 1) == 0) {
      uStack_c0 = auStack_440._8_8_;
      auStack_d0._8_8_ = auStack_440._0_8_;
      auStack_d0._0_8_ = auStack_450._8_8_;
    }
    else {
      func_0x0412e5e0(auStack_d0,auStack_440._8_8_,auStack_440._0_8_);
    }
    uStack_b8 = uStack_430;
    if (iVar11 == 4) {
      uVar19 = func_0x0c34ccb0(lVar27 + 0x18);
      lVar28 = func_0x048b1040(lVar27 + 0x18,uVar19,uVar10,1);
      if (lVar28 == 0) {
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_428);
        lVar21 = *(long *)(auStack_428._0_8_ + 0x38);
        lVar28 = auStack_428._0_8_;
        if (lVar21 == 0) goto LAB_0d91cd66;
LAB_0d91cd8d:
        do {
          lVar28 = lVar21;
          lVar21 = *(long *)(lVar28 + 0x38);
          if (*(long *)(lVar28 + 0x38) == 0) {
            auStack_428 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_428);
            lVar21 = auStack_428._0_8_;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar28 + 0x38);
        if (*(long *)(lVar28 + 0x38) != 0) goto LAB_0d91cd8d;
LAB_0d91cd66:
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_428);
        lVar21 = auStack_428._0_8_;
        if (auStack_428._0_8_ != 0) goto LAB_0d91cd8d;
      }
      lVar28 = *(long *)(lVar28 + 0x48);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0d91cdf6:
      *(undefined1 *)(puVar26 + 3) = uStack_118;
      puVar26[1] = uStack_128;
      puVar26[2] = uStack_120;
      *puVar26 = &UNK_0f4e3c70;
      func_0x04167a20(puVar26 + 4,auStack_110);
      puVar26[5] = uStack_108;
      puVar26[6] = uStack_100;
      puVar26[7] = uStack_f8;
      puVar26[8] = uStack_f0;
      puVar26[9] = auStack_e8._0_8_;
      puVar26[10] = auStack_e8._8_8_;
      auStack_e8 = (undefined1  [16])0x0;
      puVar26[0xb] = uStack_d8;
      puVar26[0xe] = uStack_c0;
      puVar26[0xc] = auStack_d0._0_8_;
      puVar26[0xd] = auStack_d0._8_8_;
      auStack_d0 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      puVar26[0xf] = uStack_b8;
      plVar18 = *(long **)(lVar28 + 8);
      *(undefined8 **)(lVar28 + 8) = puVar26;
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x28))();
      }
    }
    else if (iVar11 == 1) {
      uVar19 = func_0x0c34ccb0(lVar27 + 0x18);
      lVar28 = func_0x048b0c90(lVar27 + 0x18,uVar19,uVar10,1);
      if (lVar28 == 0) {
        auStack_428 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_428);
        lVar28 = auStack_428._0_8_;
      }
      lVar28 = *(long *)(lVar28 + 0x58);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0d91cdf6;
    }
    lStack_308 = lVar27;
    plStack_300 = plStack_228;
    lStack_2f8 = lStack_220;
    puStack_2f0 = puStack_218;
    uStack_2e8 = uStack_210;
    uStack_2d8 = (undefined1)uVar22;
    uStack_2e0 = 0x1e1bc4d500000004;
    if ((DAT_0f6dcb08 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6dcb08), iVar11 != 0)) {
      func_0x0c34cc40(0xf6dcaf0);
      func_0x0410844d(&DAT_0f6dcb08);
    }
    auStack_428._0_4_ = uStack_2e0._4_4_;
    auStack_428._8_8_ = 0;
    plStack_418 = (long *)((ulong)plStack_418 & 0xffffffff00000000);
    pcStack_410 = (code *)0x1;
    puStack_408 = &SUB_048aead0;
    puStack_400 = &UNK_0d89e990;
    puStack_3f8 = &UNK_0da4cad0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    func_0x049057f0(&plStack_300,auStack_428);
    param_1 = lStack_200;
    FUN_048aea50(auStack_428);
    puStack_3b8 = puStack_2f0;
    uStack_3b0 = uStack_2e8;
    plStack_3c8 = plStack_300;
    plStack_3c0 = (long *)lStack_2f8;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar26 = &UNK_0f01a350;
    auStack_368._8_8_ = 0;
    auStack_368._0_8_ = puVar26;
    uStack_358 = 0xff;
    func_0x0da4c730(auStack_428,&plStack_3c8,auStack_368);
    if ((long *)auStack_368._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_368._8_8_ + 0x28))();
    }
    if ((long *)auStack_368._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_368._0_8_ + 8))();
    }
    if ((DAT_0f6dcb08 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6dcb08), iVar11 != 0)) {
      func_0x0c34cc40(0xf6dcaf0);
      func_0x0410844d(&DAT_0f6dcb08);
    }
    if (uStack_2e8._4_4_ == 2) {
      piVar20 = *(int **)(puStack_2f0[0xf] + 0x60);
      iVar11 = *piVar20;
      while (iVar11 != (int)uStack_2e8) {
        piVar20 = piVar20 + 0x16;
        iVar11 = *piVar20;
      }
      lVar27 = *(long *)(piVar20 + 0xc);
      while (lVar27 != lStack_2f8) {
        piVar20 = *(int **)(piVar20 + 0xe);
        lVar27 = *(long *)(piVar20 + 0xc);
      }
LAB_0d91d0af:
      *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 2;
    }
    else {
      if (uStack_2e8._4_4_ == 1) {
        piVar20 = *(int **)(puStack_2f0[0xf] + 0x48);
        iVar11 = *piVar20;
        while (iVar11 != (int)uStack_2e8) {
          piVar20 = piVar20 + 0x1a;
          iVar11 = *piVar20;
        }
        goto LAB_0d91d0af;
      }
      if (uStack_2e8._4_4_ == 0) {
        *(uint *)(puStack_2f0 + 3) = *(uint *)(puStack_2f0 + 3) | 0x20000;
      }
    }
    if ((DAT_0f6dcb08 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6dcb08), iVar11 != 0)) {
      func_0x0c34cc40(0xf6dcaf0);
      func_0x0410844d(&DAT_0f6dcb08);
    }
    auStack_428._0_4_ = 0xbf75c8f8;
    auStack_428._8_8_ = 0;
    plStack_418 = (long *)CONCAT44(plStack_418._4_4_,1);
    pcStack_410 = (code *)0x0;
    puStack_408 = &UNK_05fb7aa0;
    puStack_400 = &SUB_048b06d0;
    puStack_3f8 = &UNK_0da4cd10;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    func_0x049057f0(&plStack_300,auStack_428);
    FUN_048aea50(auStack_428);
    puStack_3b8 = puStack_2f0;
    uStack_3b0 = uStack_2e8;
    plStack_3c8 = plStack_300;
    plStack_3c0 = (long *)lStack_2f8;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar26 = &UNK_0f01a350;
    if ((DAT_0f551cb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f551cb0), iVar11 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_428._0_4_ = _DAT_0f551c9c;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(plVar18 + 1) = (undefined1  [16])0x0;
    *plVar18 = (long)&UNK_0ef46c98;
    plVar18[3] = (long)puVar26;
    *(undefined1 *)(plVar18 + 4) = 0xff;
    auStack_428._8_8_ = plVar18 + 3;
    auStack_368 = (undefined1  [16])0x0;
    plStack_418 = plVar18;
    FUN_048afd20(&plStack_3c8,auStack_428);
    plVar18 = plStack_418;
    if (plStack_418 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_418 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plStack_418 + 0x10))(plStack_418);
        FUN_0412c2d0(plVar18);
      }
    }
    uVar22 = auStack_368._8_8_;
    if ((long *)auStack_368._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_368._8_8_ + 8);
      lVar27 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*(long *)auStack_368._8_8_ + 0x10))(auStack_368._8_8_);
        FUN_0412c2d0(uVar22);
      }
    }
    lVar27 = lStack_308;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    uVar22 = _UNK_011e5320;
    *(ulong *)((long)puVar26 + 0x5b) = CONCAT35(_UNK_011e531d,_DAT_011e5318);
    *(undefined8 *)((long)puVar26 + 99) = uVar22;
    uVar22 = CONCAT53(_DAT_011e5318,_UNK_011e5315);
    puVar26[10] = _DAT_011e530d;
    puVar26[0xb] = uVar22;
    uVar22 = _UNK_011e5305;
    puVar26[8] = _DAT_011e52fd;
    puVar26[9] = uVar22;
    uVar22 = _UNK_011e52f5;
    puVar26[6] = _DAT_011e52ed;
    puVar26[7] = uVar22;
    uVar22 = _UNK_011e52e5;
    puVar26[4] = _DAT_011e52dd;
    puVar26[5] = uVar22;
    uVar22 = _UNK_011e52d5;
    puVar26[2] = _DAT_011e52cd;
    puVar26[3] = uVar22;
    uVar22 = _UNK_011e52c5;
    *puVar26 = _DAT_011e52bd;
    puVar26[1] = uVar22;
    *(undefined1 *)((long)puVar26 + 0x6b) = 0;
    lVar27 = func_0x0c34ccb0(lVar27 + 0x18);
    lVar27 = *(long *)(lVar27 + 0x68);
    if ((*(byte *)(lVar27 + 0x88) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar27 + 0x98),*(ulong *)(lVar27 + 0x88) & 0xfffffffffffffffe)
      ;
    }
    *(undefined8 *)(lVar27 + 0x88) = 0x71;
    *(undefined8 *)(lVar27 + 0x90) = 0x6b;
    *(undefined8 **)(lVar27 + 0x98) = puVar26;
    puStack_130 = &UNK_0f4e3c70;
    if ((auStack_d0[0] & 1) != 0) {
      func_0x0412a280(uStack_c0,auStack_d0._0_8_ & 0xfffffffffffffffe);
    }
    uVar22 = auStack_e8._8_8_;
    if ((long *)auStack_e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_e8._8_8_ + 8);
      lVar27 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*(long *)auStack_e8._8_8_ + 0x10))(auStack_e8._8_8_);
        FUN_0412c2d0(uVar22);
      }
    }
    FUN_04167a40(auStack_110);
    if ((bStack_258 & 1) == 0) {
      auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
      if ((auStack_450[8] & 1) != 0) goto LAB_0d91d428;
LAB_0d91d3f1:
      plVar18 = (long *)auStack_460._8_8_;
    }
    else {
      func_0x0412a280(CONCAT53(uStack_245,CONCAT21(uStack_247,uStack_248)),
                      CONCAT71(uStack_257,bStack_258) & 0xfffffffffffffffe);
      auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
      if ((auStack_450[8] & 1) == 0) goto LAB_0d91d3f1;
LAB_0d91d428:
      func_0x0412a280(auStack_440._8_8_,auStack_450._8_8_ & 0xfffffffffffffffe);
      plVar18 = (long *)auStack_460._8_8_;
    }
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        FUN_0412c2d0(plVar18);
      }
    }
    FUN_04167a40(&pcStack_488);
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    if ((auStack_388._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_388._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_388._8_8_ = 0;
    if ((auStack_3a8[0] & 1) != 0) {
      func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
    }
    if ((uStack_1e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1e8 = 0;
    if ((auStack_1f8._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_1f8._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_1f8._8_8_ = 0;
    lVar27 = func_0x07d31180(lStack_310);
    if (*(int *)(lVar27 + 0x60) != -0x2b3da790) goto LAB_0d91d5ff;
LAB_0d91d5bd:
    lVar27 = *(long *)(lVar27 + 0x68);
    if (lVar27 == 0) goto LAB_0d91d5ff;
    bVar29 = (*(byte *)(lVar27 + 8) & 1) != 0;
    lVar28 = lVar27 + 9;
    if (bVar29) {
      lVar28 = *(long *)(lVar27 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar27 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar27 + 0x10);
    }
    func_0x0da4ce50(&lStack_348,param_1,lVar28,uVar24);
  }
  if (cStack_318 != '\0') {
    return;
  }
  lVar28 = lStack_348 + 0x18;
  lVar27 = func_0x07d31180(lVar28);
  for (pbVar15 = *(byte **)(lStack_348 + 0x50); pbVar15 != *(byte **)(lStack_348 + 0x58);
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x18) goto LAB_0d91d6ea;
    }
    else if (*(long *)(pbVar15 + 8) == 0x18) {
LAB_0d91d6ea:
      if ((bVar2 & 1) == 0) {
        pbVar23 = pbVar15 + 1;
      }
      else {
        pbVar23 = *(byte **)(pbVar15 + 0x10);
      }
      auVar34[0] = -(*pbVar23 == 0x43);
      auVar34[1] = -(pbVar23[1] == 0x45);
      auVar34[2] = -(pbVar23[2] == 0x52);
      auVar34[3] = -(pbVar23[3] == 0x45);
      auVar34[4] = -(pbVar23[4] == 0x41);
      auVar34[5] = -(pbVar23[5] == 0x4c);
      auVar34[6] = -(pbVar23[6] == 0x5f);
      auVar34[7] = -(pbVar23[7] == 0x45);
      auVar34[8] = -(pbVar23[8] == 0x44);
      auVar34[9] = -(pbVar23[9] == 0x49);
      auVar34[10] = -(pbVar23[10] == 0x54);
      auVar34[0xb] = -(pbVar23[0xb] == 0x4f);
      auVar34[0xc] = -(pbVar23[0xc] == 0x52);
      auVar34[0xd] = -(pbVar23[0xd] == 0x5f);
      auVar34[0xe] = -(pbVar23[0xe] == 0x53);
      auVar34[0xf] = -(pbVar23[0xf] == 0x43);
      uVar22 = *(undefined8 *)(pbVar23 + 0x10);
      auVar40[0] = -((char)uVar22 == 'H');
      auVar40[1] = -((char)((ulong)uVar22 >> 8) == 'E');
      auVar40[2] = -((char)((ulong)uVar22 >> 0x10) == 'M');
      auVar40[3] = -((char)((ulong)uVar22 >> 0x18) == 'A');
      auVar40[4] = -((char)((ulong)uVar22 >> 0x20) == '_');
      auVar40[5] = -((char)((ulong)uVar22 >> 0x28) == 'T');
      auVar40[6] = -((char)((ulong)uVar22 >> 0x30) == 'A');
      auVar40[7] = -((char)((ulong)uVar22 >> 0x38) == 'G');
      auVar40[8] = 0xff;
      auVar40[9] = 0xff;
      auVar40[10] = 0xff;
      auVar40[0xb] = 0xff;
      auVar40[0xc] = 0xff;
      auVar40[0xd] = 0xff;
      auVar40[0xe] = 0xff;
      auVar40[0xf] = 0xff;
      auVar40 = auVar40 & auVar34;
      if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == *(byte **)(lStack_348 + 0x58)) {
LAB_0d91d719:
    if (iStack_320 == 0) {
      if ((*(int *)(lVar27 + 0x60) != -0x2b3da790) || (*(long *)(lVar27 + 0x68) == 0))
      goto LAB_0d91d789;
      lVar27 = *(long *)(lVar27 + 0x68) + 0x38;
    }
    else {
      auStack_4a8 = (undefined1  [8])func_0x048b0c90(lVar28,lVar27,uStack_31c,1);
      if (auStack_4a8 == (undefined1  [8])0x0) {
        _auStack_4a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_4a8);
        if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91d789;
      }
      if ((*(int *)((long)auStack_4a8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_4a8 + 0x58) != 0)) {
        lVar27 = *(long *)((long)auStack_4a8 + 0x58) + 0x40;
      }
      else {
LAB_0d91d789:
        lVar27 = 0;
      }
    }
    plStack_418 = (long *)&UNK_07758170;
    pcStack_410 = (code *)0x0;
    puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x2554ba3c6);
    auStack_428._0_8_ = &UNK_0128442f;
    _auStack_490 = ZEXT816(0x7758170);
    auStack_480._0_5_ = 0x2554ba3c6;
    uStack_4a0 = &UNK_0128442f;
    auStack_4a8 = (undefined1  [8])&UNK_07757da0;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar22 = _UNK_0128416f;
    auStack_3a8._8_8_ = 0x18;
    auStack_3a8._0_8_ = 0x21;
    *puVar26 = _DAT_01284167;
    puVar26[1] = uVar22;
    puVar26[2] = 0x4741545f414d4548;
    *(undefined1 *)(puVar26 + 3) = 0;
    puStack_398 = puVar26;
    lVar27 = FUN_048b5060(lVar27,auStack_3a8);
    *(undefined **)(lVar27 + 0x20) = &UNK_07757da0;
    if ((undefined1 *)(lVar27 + 0x20) == auStack_4a8) {
      pcVar16 = (code *)0x0;
    }
    else {
      puVar26 = (undefined8 *)(lVar27 + 0x28);
      if (*(code **)(lVar27 + 0x40) == (code *)0x0) {
LAB_0d91d8a8:
        (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
      }
      else {
        (**(code **)(lVar27 + 0x40))(puVar26);
        if (auStack_480[4] != '\0') {
          if (auStack_480[4] == '\x02') goto LAB_0d91d8a8;
          uVar22 = uStack_4a0;
          uStack_4a0 = 0;
          *puVar26 = uVar22;
        }
      }
      *(undefined1 (*) [8])(lVar27 + 0x38) = auStack_490;
      *(code **)(lVar27 + 0x40) = pcStack_488;
      *(undefined4 *)(lVar27 + 0x48) = auStack_480._0_4_;
      *(char *)(lVar27 + 0x4c) = auStack_480[4];
      pcVar16 = pcStack_488;
    }
    if ((auStack_3a8[0] & 1) != 0) {
      func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
      pcVar16 = pcStack_488;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_4a8 + 8);
    }
    if (pcStack_410 != (code *)0x0) {
      (*pcStack_410)(auStack_428);
    }
  }
  else {
    iVar11 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f5af488 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5af488), iVar13 != 0)) {
      func_0x07758020(0xf5af470);
      func_0x0410844d(&DAT_0f5af488);
    }
    if (iVar11 == _DAT_0f5af474) goto LAB_0d91d719;
  }
  plStack_298 = plStack_340;
  lStack_290 = lStack_338;
  puStack_288 = puStack_330;
  uStack_280 = uStack_328;
  lStack_310 = CONCAT71(uStack_317,cStack_318);
  uStack_1c8 = 0;
  auStack_3a8._8_8_ = 0x4142475235;
  auStack_3a8._0_8_ = 0x3532726f6c6f4318;
  puStack_398 = (undefined8 *)0x0;
  uStack_390 = 0x400;
  auStack_388 = (undefined1  [16])0x0;
  auStack_1c0 = (undefined1  [16])0x0;
  uStack_378 = 0;
  lVar27 = func_0x07d31180(lStack_348 + 0x18);
  for (pbVar15 = *(byte **)(lStack_348 + 0x50); pbVar15 != *(byte **)(lStack_348 + 0x58);
      pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0d91db2a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1d) {
LAB_0d91db2a:
      if ((bVar2 & 1) == 0) {
        pbVar23 = pbVar15 + 1;
      }
      else {
        pbVar23 = *(byte **)(pbVar15 + 0x10);
      }
      auVar35[0] = -(*pbVar23 == 0x5b);
      auVar35[1] = -(pbVar23[1] == 99);
      auVar35[2] = -(pbVar23[2] == 0x65);
      auVar35[3] = -(pbVar23[3] == 0x72);
      auVar35[4] = -(pbVar23[4] == 0x65);
      auVar35[5] = -(pbVar23[5] == 0x61);
      auVar35[6] = -(pbVar23[6] == 0x6c);
      auVar35[7] = -(pbVar23[7] == 0x3a);
      auVar35[8] = -(pbVar23[8] == 0x6a);
      auVar35[9] = -(pbVar23[9] == 0x73);
      auVar35[10] = -(pbVar23[10] == 0x6f);
      auVar35[0xb] = -(pbVar23[0xb] == 0x6e);
      auVar35[0xc] = -(pbVar23[0xc] == 0x5f);
      auVar35[0xd] = -(pbVar23[0xd] == 0x73);
      auVar35[0xe] = -(pbVar23[0xe] == 99);
      auVar35[0xf] = -(pbVar23[0xf] == 0x68);
      auVar41[0] = -(pbVar23[0xd] == 0x73);
      auVar41[1] = -(pbVar23[0xe] == 99);
      auVar41[2] = -(pbVar23[0xf] == 0x68);
      auVar41[3] = -(pbVar23[0x10] == 0x65);
      auVar41[4] = -(pbVar23[0x11] == 0x6d);
      auVar41[5] = -(pbVar23[0x12] == 0x61);
      auVar41[6] = -(pbVar23[0x13] == 0x5f);
      auVar41[7] = -(pbVar23[0x14] == 0x70);
      auVar41[8] = -(pbVar23[0x15] == 0x72);
      auVar41[9] = -(pbVar23[0x16] == 0x6f);
      auVar41[10] = -(pbVar23[0x17] == 0x70);
      auVar41[0xb] = -(pbVar23[0x18] == 0x65);
      auVar41[0xc] = -(pbVar23[0x19] == 0x72);
      auVar41[0xd] = -(pbVar23[0x1a] == 0x74);
      auVar41[0xe] = -(pbVar23[0x1b] == 0x79);
      auVar41[0xf] = -(pbVar23[0x1c] == 0x5d);
      auVar41 = auVar41 & auVar35;
      if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == *(byte **)(lStack_348 + 0x58)) {
LAB_0d91db5b:
    if (iStack_320 == 0) {
      if ((*(int *)(lVar27 + 0x60) != -0x2b3da790) || (*(long *)(lVar27 + 0x68) == 0))
      goto LAB_0d91dbc0;
      lVar27 = *(long *)(lVar27 + 0x68) + 0x38;
    }
    else {
      auVar17 = (undefined1  [8])func_0x048b0c90(lStack_348 + 0x18,lVar27,uStack_31c,1);
      if (auVar17 == (undefined1  [8])0x0) {
        _auStack_4a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_4a8);
        auVar17 = auStack_4a8;
        if (auStack_4a8 == (undefined1  [8])0x0) goto LAB_0d91dbc0;
      }
      if ((*(int *)((long)auVar17 + 0x50) == -0x45dcb126) && (*(long *)((long)auVar17 + 0x58) != 0))
      {
        lVar27 = *(long *)((long)auVar17 + 0x58) + 0x40;
      }
      else {
LAB_0d91dbc0:
        lVar27 = 0;
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auStack_428._8_8_;
    auStack_428 = auVar8 << 0x40;
    plStack_418 = (long *)&UNK_048b4ab0;
    pcStack_410 = (code *)&UNK_048b49f0;
    puStack_408 = (undefined *)CONCAT35(puStack_408._5_3_,0x1d33bd9c5);
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar26[2] = puStack_398;
    *puVar26 = auStack_3a8._0_8_;
    puVar26[1] = auStack_3a8._8_8_;
    auStack_3a8 = (undefined1  [16])0x0;
    puStack_398 = (undefined8 *)0x0;
    *(undefined2 *)(puVar26 + 3) = uStack_390;
    puVar26[4] = auStack_388._0_8_;
    puVar26[5] = auStack_388._8_8_;
    auStack_388._8_8_ = 0;
    puVar26[6] = uStack_378;
    uStack_378 = 0;
    pcStack_488 = (code *)&UNK_048b49f0;
    auStack_490 = (undefined1  [8])&UNK_048b4ab0;
    auStack_480._0_5_ = 0x1d33bd9c5;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auStack_428._8_8_;
    auStack_428 = auVar9 << 0x40;
    uStack_4a0 = puVar26;
    auStack_4a8 = (undefined1  [8])&UNK_048b46e0;
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar22 = _UNK_014d987e;
    plStack_3c8 = (long *)0x21;
    plStack_3c0 = (long *)0x1d;
    *(ulong *)((long)puVar26 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)puVar26 + 0x15) = uVar22;
    uVar22 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *puVar26 = _DAT_014d9869;
    puVar26[1] = uVar22;
    *(undefined1 *)((long)puVar26 + 0x1d) = 0;
    puStack_3b8 = puVar26;
    lVar27 = FUN_048b5060(lVar27,&plStack_3c8);
    *(undefined **)(lVar27 + 0x20) = &UNK_048b46e0;
    pcVar16 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar27 + 0x20) != auStack_4a8) {
      puVar26 = (undefined8 *)(lVar27 + 0x28);
      if (*(code **)(lVar27 + 0x40) == (code *)0x0) {
LAB_0d91dd8c:
        uVar22 = uStack_4a0;
        uStack_4a0 = 0;
        *puVar26 = uVar22;
      }
      else {
        (**(code **)(lVar27 + 0x40))(puVar26);
        if (auStack_480[4] != '\0') {
          if (auStack_480[4] != '\x02') goto LAB_0d91dd8c;
          (*(code *)auStack_490)(5,auStack_4a8 + 8,puVar26);
        }
      }
      *(undefined1 (*) [8])(lVar27 + 0x38) = auStack_490;
      *(code **)(lVar27 + 0x40) = pcStack_488;
      *(undefined4 *)(lVar27 + 0x48) = auStack_480._0_4_;
      *(char *)(lVar27 + 0x4c) = auStack_480[4];
      pcVar16 = pcStack_488;
    }
    if (((ulong)plStack_3c8 & 1) != 0) {
      func_0x0412a280(puStack_3b8,(ulong)plStack_3c8 & 0xfffffffffffffffe);
      pcVar16 = pcStack_488;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_4a8 + 8);
    }
    if (pcStack_410 != (code *)0x0) {
      (*pcStack_410)(auStack_428);
    }
  }
  else {
    iVar11 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar13 = func_0x04108328(&DAT_0f550768), iVar13 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar11 == _DAT_0f550754) goto LAB_0d91db5b;
  }
  lStack_2d0 = lStack_348;
  plStack_2c8 = plStack_298;
  lStack_2c0 = lStack_290;
  puStack_2b8 = puStack_288;
  uStack_2b0 = uStack_280;
  uStack_2a0 = lStack_310;
  uStack_2a8 = 0x1e1bc4d500000004;
  if ((DAT_0f5baeb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5baeb8), iVar11 != 0)) {
    func_0x07d31110(0xf5baea0);
    func_0x0410844d(&DAT_0f5baeb8);
  }
  auStack_4a8._0_4_ = uStack_2a8._4_4_;
  uStack_4a0 = 0;
  uStack_498 = uStack_498 & 0xffffffff00000000;
  pcStack_488 = (code *)&SUB_048aead0;
  auStack_490 = (undefined1  [8])0x1;
  auStack_480._8_8_ = &UNK_0da4d830;
  auStack_480._0_8_ = &UNK_04905970;
  auStack_470._0_12_ = ZEXT812(0);
  auStack_460 = ZEXT816(0);
  func_0x049057f0(&plStack_2c8,auStack_4a8);
  FUN_048aea50(auStack_4a8);
  plStack_418 = puStack_2b8;
  pcStack_410 = (code *)uStack_2b0;
  auStack_428._8_8_ = lStack_2c0;
  auStack_428._0_8_ = plStack_2c8;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar18 = (long)&UNK_0ef44b00;
  plStack_3c0 = (long *)0x0;
  puStack_3b8 = (undefined8 *)CONCAT71(puStack_3b8._1_7_,0xff);
  plStack_3c8 = plVar18;
  func_0x0da4d6b0(auStack_4a8,auStack_428,&plStack_3c8);
  if (plStack_3c0 != (long *)0x0) {
    (**(code **)(*plStack_3c0 + 0x28))();
  }
  if (plStack_3c8 != (long *)0x0) {
    (**(code **)(*plStack_3c8 + 8))();
  }
  uVar22 = uStack_2a0;
  lVar27 = lStack_2d0;
  plStack_228 = plStack_2c8;
  lStack_220 = lStack_2c0;
  puStack_218 = puStack_2b8;
  uStack_210 = uStack_2b0;
  iVar11 = (int)uStack_2a8;
  uVar10 = uStack_2a8._4_4_;
  auStack_440 = (undefined1  [16])0x0;
  auStack_450 = (undefined1  [16])0x0;
  auStack_460 = (undefined1  [16])0x0;
  auStack_470 = (undefined1  [16])0x0;
  auStack_480 = (undefined1  [16])0x0;
  uStack_430 = 0;
  uStack_498 = 0;
  stack0xfffffffffffffb71 = SUB1615((undefined1  [16])0x0,1);
  auStack_490[0] = 0xff;
  auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
  uStack_4a0 = 0xffffffffffffffff;
  FUN_041679a0(&pcStack_488);
  uVar19 = func_0x041681f0(&pcStack_488,0xf547a30);
  auStack_480._0_8_ = uVar19;
  uVar19 = func_0x041681f0(&pcStack_488,0xf547770);
  lStack_310 = uVar22;
  auStack_470 = (undefined1  [16])0x0;
  auStack_460 = (undefined1  [16])0x0;
  auStack_450 = (undefined1  [16])0x0;
  auStack_440 = (undefined1  [16])0x0;
  uStack_430 = 0;
  bStack_270 = 0x22;
  uStack_26f = (undefined7)_DAT_014ecba0;
  uStack_268 = (undefined1)((ulong)_DAT_014ecba0 >> 0x38);
  uStack_267 = (undefined7)_UNK_014ecba8;
  uStack_260 = (undefined1)((ulong)_UNK_014ecba8 >> 0x38);
  uStack_25f = 0x24;
  auStack_480._8_8_ = uVar19;
  func_0x0ed60210(auStack_4a8,&bStack_270,0);
  uStack_198 = auStack_490[0];
  uStack_1a8 = uStack_4a0;
  uStack_1a0 = uStack_498;
  puStack_1b0 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_190,&pcStack_488);
  uStack_188 = auStack_480._0_8_;
  uStack_180 = auStack_480._8_8_;
  uStack_178 = auStack_470._0_8_;
  uStack_170 = auStack_470._8_8_;
  auStack_168 = auStack_460;
  if (auStack_460._8_8_ != 0) {
    LOCK();
    *(long *)(auStack_460._8_8_ + 8) = *(long *)(auStack_460._8_8_ + 8) + 1;
    UNLOCK();
  }
  uStack_158 = auStack_450._0_8_;
  if ((auStack_450[8] & 1) == 0) {
    uStack_140 = auStack_440._8_8_;
    auStack_150._8_8_ = auStack_440._0_8_;
    auStack_150._0_8_ = auStack_450._8_8_;
  }
  else {
    func_0x0412e5e0(auStack_150,auStack_440._8_8_,auStack_440._0_8_);
  }
  uStack_138 = uStack_430;
  if (iVar11 == 4) {
    uVar22 = func_0x07d31180(lVar27 + 0x18);
    lVar28 = func_0x048b1040(lVar27 + 0x18,uVar22,uVar10,1);
    if (lVar28 == 0) {
      auStack_428 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_428);
      lVar21 = *(long *)(auStack_428._0_8_ + 0x38);
      lVar28 = auStack_428._0_8_;
      if (lVar21 == 0) goto LAB_0d91e251;
LAB_0d91e278:
      do {
        lVar28 = lVar21;
        lVar21 = *(long *)(lVar28 + 0x38);
        if (*(long *)(lVar28 + 0x38) == 0) {
          auStack_428 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_428);
          lVar21 = auStack_428._0_8_;
        }
      } while (lVar21 != 0);
    }
    else {
      lVar21 = *(long *)(lVar28 + 0x38);
      if (*(long *)(lVar28 + 0x38) != 0) goto LAB_0d91e278;
LAB_0d91e251:
      auStack_428 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_428);
      lVar21 = auStack_428._0_8_;
      if (auStack_428._0_8_ != 0) goto LAB_0d91e278;
    }
    lVar28 = *(long *)(lVar28 + 0x48);
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
LAB_0d91e2e7:
    *(undefined1 *)(puVar26 + 3) = uStack_198;
    puVar26[1] = uStack_1a8;
    puVar26[2] = uStack_1a0;
    *puVar26 = &UNK_0f4e3c70;
    func_0x04167a20(puVar26 + 4,auStack_190);
    puVar26[5] = uStack_188;
    puVar26[6] = uStack_180;
    puVar26[7] = uStack_178;
    puVar26[8] = uStack_170;
    puVar26[9] = auStack_168._0_8_;
    puVar26[10] = auStack_168._8_8_;
    auStack_168 = (undefined1  [16])0x0;
    puVar26[0xb] = uStack_158;
    puVar26[0xe] = uStack_140;
    puVar26[0xc] = auStack_150._0_8_;
    puVar26[0xd] = auStack_150._8_8_;
    auStack_150 = (undefined1  [16])0x0;
    uStack_140 = 0;
    puVar26[0xf] = uStack_138;
    plVar18 = *(long **)(lVar28 + 8);
    *(undefined8 **)(lVar28 + 8) = puVar26;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
  }
  else if (iVar11 == 1) {
    uVar22 = func_0x07d31180(lVar27 + 0x18);
    lVar28 = func_0x048b0c90(lVar27 + 0x18,uVar22,uVar10,1);
    if (lVar28 == 0) {
      auStack_428 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_428);
      lVar28 = auStack_428._0_8_;
    }
    lVar28 = *(long *)(lVar28 + 0x58);
    puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar26 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    goto LAB_0d91e2e7;
  }
  lStack_308 = lVar27;
  plStack_300 = plStack_228;
  lStack_2f8 = lStack_220;
  puStack_2f0 = puStack_218;
  uStack_2e8 = uStack_210;
  uStack_2d8 = (undefined1)lStack_310;
  uStack_2e0 = 0x1e1bc4d500000004;
  if ((DAT_0f5baeb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5baeb8), iVar11 != 0)) {
    func_0x07d31110(0xf5baea0);
    func_0x0410844d(&DAT_0f5baeb8);
  }
  auStack_428._0_4_ = uStack_2e0._4_4_;
  auStack_428._8_8_ = 0;
  plStack_418 = (long *)((ulong)plStack_418 & 0xffffffff00000000);
  pcStack_410 = (code *)0x1;
  puStack_408 = &SUB_048aead0;
  puStack_400 = &UNK_0da4da50;
  puStack_3f8 = &UNK_0da4db10;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  func_0x049057f0(&plStack_300,auStack_428);
  FUN_048aea50(auStack_428);
  puStack_3b8 = puStack_2f0;
  uStack_3b0 = uStack_2e8;
  plStack_3c8 = plStack_300;
  plStack_3c0 = (long *)lStack_2f8;
  puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar26 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar26 = &UNK_0f48fb50;
  auStack_368._8_8_ = 0;
  auStack_368._0_8_ = puVar26;
  uStack_358 = 0xff;
  func_0x0da4d6b0(auStack_428,&plStack_3c8,auStack_368);
  if ((long *)auStack_368._8_8_ != (long *)0x0) {
    (**(code **)(*(long *)auStack_368._8_8_ + 0x28))();
  }
  if ((long *)auStack_368._0_8_ != (long *)0x0) {
    (**(code **)(*(long *)auStack_368._0_8_ + 8))();
  }
  if ((DAT_0f5baeb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5baeb8), iVar11 != 0)) {
    func_0x07d31110(0xf5baea0);
    func_0x0410844d(&DAT_0f5baeb8);
  }
  if (uStack_2e8._4_4_ == 2) {
    piVar20 = *(int **)(puStack_2f0[0xf] + 0x60);
    iVar11 = *piVar20;
    while (iVar11 != (int)uStack_2e8) {
      piVar20 = piVar20 + 0x16;
      iVar11 = *piVar20;
    }
    lVar27 = *(long *)(piVar20 + 0xc);
    while (lVar27 != lStack_2f8) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar27 = *(long *)(piVar20 + 0xc);
    }
  }
  else {
    if (uStack_2e8._4_4_ != 1) {
      if (uStack_2e8._4_4_ == 0) {
        *(uint *)(puStack_2f0 + 3) = *(uint *)(puStack_2f0 + 3) | 0x20000;
      }
      goto LAB_0d91e5b3;
    }
    piVar20 = *(int **)(puStack_2f0[0xf] + 0x48);
    iVar11 = *piVar20;
    while (iVar11 != (int)uStack_2e8) {
      piVar20 = piVar20 + 0x1a;
      iVar11 = *piVar20;
    }
  }
  *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 2;
LAB_0d91e5b3:
  if ((DAT_0f5baeb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5baeb8), iVar11 != 0)) {
    func_0x07d31110(0xf5baea0);
    func_0x0410844d(&DAT_0f5baeb8);
  }
  auStack_428._0_4_ = 0xbf75c8f8;
  auStack_428._8_8_ = 0;
  plStack_418 = (long *)CONCAT44(plStack_418._4_4_,1);
  pcStack_410 = (code *)0x0;
  puStack_408 = &UNK_0da4dd20;
  puStack_400 = &SUB_048b06d0;
  puStack_3f8 = &UNK_0da4e660;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  func_0x049057f0(&plStack_300,auStack_428);
  FUN_048aea50(auStack_428);
  puStack_3b8 = puStack_2f0;
  uStack_3b0 = uStack_2e8;
  plStack_3c8 = plStack_300;
  plStack_3c0 = (long *)lStack_2f8;
  puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar26 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar26 = &UNK_0f48fb50;
  if ((DAT_0f551cb0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f551cb0), iVar11 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_428._0_4_ = _DAT_0f551c9c;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined1 (*) [16])(plVar18 + 1) = (undefined1  [16])0x0;
  *plVar18 = (long)&UNK_0ef46c98;
  plVar18[3] = (long)puVar26;
  *(undefined1 *)(plVar18 + 4) = 0xff;
  auStack_428._8_8_ = plVar18 + 3;
  auStack_368 = (undefined1  [16])0x0;
  plStack_418 = plVar18;
  FUN_048afd20(&plStack_3c8,auStack_428);
  plVar18 = plStack_418;
  if (plStack_418 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_418 + 1;
    lVar27 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plStack_418 + 0x10))(plStack_418);
      FUN_0412c2d0(plVar18);
    }
  }
  uVar22 = auStack_368._8_8_;
  if ((long *)auStack_368._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_368._8_8_ + 8);
    lVar27 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*(long *)auStack_368._8_8_ + 0x10))(auStack_368._8_8_);
      FUN_0412c2d0(uVar22);
    }
  }
  lVar27 = lStack_308;
  puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
  if (puVar26 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x78,0);
  }
  uVar22 = _UNK_014c215b;
  puVar26[0xc] = _DAT_014c2153;
  puVar26[0xd] = uVar22;
  uVar22 = _UNK_014c214b;
  puVar26[10] = _DAT_014c2143;
  puVar26[0xb] = uVar22;
  uVar22 = _UNK_014c213b;
  puVar26[8] = _DAT_014c2133;
  puVar26[9] = uVar22;
  uVar22 = _UNK_014c212b;
  puVar26[6] = _DAT_014c2123;
  puVar26[7] = uVar22;
  uVar22 = _UNK_014c211b;
  puVar26[4] = _DAT_014c2113;
  puVar26[5] = uVar22;
  uVar22 = _UNK_014c210b;
  puVar26[2] = _DAT_014c2103;
  puVar26[3] = uVar22;
  uVar22 = _UNK_014c20fb;
  *puVar26 = _DAT_014c20f3;
  puVar26[1] = uVar22;
  *(undefined2 *)(puVar26 + 0xe) = 0x2e;
  lVar27 = func_0x07d31180(lVar27 + 0x18);
  lVar27 = *(long *)(lVar27 + 0x68);
  if ((*(byte *)(lVar27 + 0x88) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar27 + 0x98),*(ulong *)(lVar27 + 0x88) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar27 + 0x88) = 0x79;
  *(undefined8 *)(lVar27 + 0x90) = 0x71;
  *(undefined8 **)(lVar27 + 0x98) = puVar26;
  puStack_1b0 = &UNK_0f4e3c70;
  if ((auStack_150[0] & 1) != 0) {
    func_0x0412a280(uStack_140,auStack_150._0_8_ & 0xfffffffffffffffe);
  }
  uVar22 = auStack_168._8_8_;
  if ((long *)auStack_168._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_168._8_8_ + 8);
    lVar27 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
      FUN_0412c2d0(uVar22);
    }
  }
  FUN_04167a40(auStack_190);
  if ((bStack_270 & 1) == 0) {
    auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
  }
  else {
    func_0x0412a280(CONCAT53(uStack_25d,CONCAT21(uStack_25f,uStack_260)),
                    CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
    auStack_4a8 = (undefined1  [8])&UNK_0f4e3c70;
  }
  if ((auStack_450[8] & 1) == 0) {
    plVar18 = (long *)auStack_460._8_8_;
  }
  else {
    func_0x0412a280(auStack_440._8_8_,auStack_450._8_8_ & 0xfffffffffffffffe);
    plVar18 = (long *)auStack_460._8_8_;
  }
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar27 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(&pcStack_488);
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((auStack_388._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_388._8_8_ & 0xff00ffffffffffff) - 8);
  }
  auStack_388._8_8_ = 0;
  if ((auStack_3a8[0] & 1) != 0) {
    func_0x0412a280(puStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
  }
  if ((auStack_1c0._8_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1c0._8_8_ & 0xff00ffffffffffff) - 8);
  }
  auStack_1c0._8_8_ = 0;
  if ((auStack_1c0._0_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1c0._0_8_ & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11e52bd  Expected [r, g, b], with values in the 0-255 range, or a hex value with 6 characters (e.g. RGB a
 * 0x11e52cd  b], with values in the 0-255 range, or a hex value with 6 characters (e.g. RGB as #FFFFFF).
 * 0x11e52dd  in the 0-255 range, or a hex value with 6 characters (e.g. RGB as #FFFFFF).
 * 0x11e52ed  ge, or a hex value with 6 characters (e.g. RGB as #FFFFFF).
 * 0x11e52fd  ue with 6 characters (e.g. RGB as #FFFFFF).
 * 0x11e530d  ters (e.g. RGB as #FFFFFF).
 * 0x11e5318  RGB as #FFFFFF).
 * 0x1284167  CEREAL_EDITOR_SCHEMA_TAG
 * 0x14c20f3  Expected [r, g, b, a], with values in the 0-255 range, or a hex value with 8 characters (e.g. AR
 * 0x14c2103  b, a], with values in the 0-255 range, or a hex value with 8 characters (e.g. ARGB as #FFFFFFFF)
 * 0x14c2113  es in the 0-255 range, or a hex value with 8 characters (e.g. ARGB as #FFFFFFFF).
 * 0x14c2123  range, or a hex value with 8 characters (e.g. ARGB as #FFFFFFFF).
 * 0x14c2133  value with 8 characters (e.g. ARGB as #FFFFFFFF).
 * 0x14c2143  racters (e.g. ARGB as #FFFFFFFF).
 * 0x14c2153  GB as #FFFFFFFF).
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14ec880  ^#[a-fA-F0-9]{6}$
 * 0x14ecba0  ^#[a-fA-F0-9]{8}$
 */
