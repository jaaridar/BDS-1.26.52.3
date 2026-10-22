/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b00b60 (ELF vaddr 0x8a00b60)
 * Label: caller-of-callee
 * Body:  [[08b00b60, 08b00c77] [08b00c80, 08b00d27] [08b00d30, 08b00f4b] [08b00f50, 08b0115a] [08b01160, 08b0125b] [08b01260, 08b013b0] [08b013c0, 08b013d3] [08b013e0, 08b013ff] [08b01410, 08b01448] [08b01500, 08b0153f] [08b015e4, 08b01dd5] [08b01de0, 08b01e2e] [08b01e30, 08b02043] [08b02080, 08b025e9] [08b02600, 08b0262e] [08b026d0, 08b02707] [08b02710, 08b02752] [08b02760, 08b0277b] [08b02780, 08b027b4] [08b027c0, 08b028a4] [08b029c4, 08b029d7] [08b02a24, 08b02a2a] [08b02a2e, 08b02a3c] [08b02a44, 08b02a7c] [08b02a85, 08b02afd]]
 * Ghidra: FUN_08b00b60
 */


/* WARNING: Removing unreachable block (ram,0x08b0210b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_08b00b60(long *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  long *plVar24;
  ulong uVar25;
  ulong *puVar26;
  long *plVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uStack_4b8;
  byte bStack_499;
  byte bStack_498;
  undefined1 uStack_497;
  undefined2 uStack_496;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  long *plStack_478;
  undefined1 auStack_470 [16];
  undefined8 uStack_460;
  byte bStack_458;
  int iStack_444;
  ulong uStack_440;
  ulong uStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [16];
  long *plStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  byte bStack_3b8;
  undefined1 auStack_3a8 [8];
  long *plStack_3a0;
  undefined1 auStack_398 [16];
  long *plStack_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  byte bStack_368;
  int iStack_300;
  byte bStack_2f8;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  long *plStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  byte bStack_2a8;
  long lStack_298;
  long *plStack_290;
  long lStack_288;
  ulong uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined *puStack_268;
  byte bStack_260;
  undefined1 uStack_25f;
  undefined6 uStack_25e;
  undefined8 uStack_250;
  long lStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined1 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [16];
  undefined1 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [176];
  
  plVar3 = (long *)*param_1;
  plStack_290 = plVar3 + 10;
  func_0x0412d770();
  auStack_1c0[0] = 0;
  auStack_1b8 = (undefined1  [16])0x0;
  if ((char)param_1[1] == '\0') {
    lStack_288 = func_0x0417cc60();
    lStack_288 = lStack_288 + 1000000;
    lVar31 = param_1[3];
    if ((lVar31 != 0) && (*(long *)(lVar31 + 8) != -1)) {
      lStack_1a8 = param_1[2];
      LOCK();
      *(long *)(lVar31 + 0x10) = *(long *)(lVar31 + 0x10) + 1;
      UNLOCK();
      lStack_1a0 = lVar31;
      func_0x0ca11350(auStack_1c0,&lStack_1a8);
      func_0x0412c2d0();
    }
  }
  else {
    lStack_288 = 0x7fffffffffffffff;
  }
  uVar12 = DAT_0f778530;
  if (plVar3[0x10] - plVar3[0xf] != 0) {
    lStack_1d8 = plVar3[0x10] - plVar3[0xf] >> 3;
    plStack_1c8 = plVar3 + 0x20;
    lStack_1d0 = (long)plVar3 + 0x101;
    uStack_4b8 = 0;
    uVar22 = 0;
    uStack_440 = 0;
    lVar31 = 0;
LAB_08b00cbc:
    uVar15 = plVar3[0x18] + 1;
    lVar20 = plVar3[0xf];
    uVar25 = plVar3[0x10] - lVar20 >> 3;
    uVar29 = uStack_4b8;
    if ((uVar15 | uVar25) >> 0x20 == 0) {
      uVar15 = (uVar15 & 0xffffffff) % (uVar25 & 0xffffffff);
      plVar3[0x18] = uVar15;
      lVar20 = *(long *)(lVar20 + uVar15 * 8);
      if (*(char *)(lVar20 + 0x1a0) == '\x01') goto LAB_08b00cfe;
LAB_08b00d49:
      uStack_198 = 0xb;
      puStack_190 = &UNK_0f2be708;
      auStack_188 = (undefined1  [16])0x0;
      uStack_438 = uVar22;
      lStack_418 = lVar31;
      uStack_170 = func_0x0417cc60();
      uStack_178 = 1;
      plVar27 = *(long **)(lVar20 + 0x1a8);
      plVar30 = *(long **)(lVar20 + 0x1b0);
      if (plVar30 != (long *)0x0) {
        LOCK();
        plVar30[1] = plVar30[1] + 1;
        UNLOCK();
        if (plVar27 != (long *)0x0) {
          LOCK();
          plVar30[1] = plVar30[1] + 1;
          UNLOCK();
          LOCK();
          plVar24 = plVar30 + 1;
          lVar31 = *plVar24;
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          plStack_400 = plVar30;
          if (lVar31 == 0) {
            plStack_408 = plVar27;
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
            cVar13 = *(char *)(lVar20 + 0x1a1);
          }
          else {
            cVar13 = *(char *)(lVar20 + 0x1a1);
            plStack_408 = plVar27;
          }
          goto joined_r0x08b010fa;
        }
LAB_08b02865:
        func_0x04890760();
LAB_08b0286a:
        func_0x04890760();
LAB_08b0286f:
        func_0x04882eb0();
        goto LAB_08b02874;
      }
      if (plVar27 == (long *)0x0) goto LAB_08b02865;
      plStack_400 = (long *)0x0;
      cVar13 = *(char *)(lVar20 + 0x1a1);
      plStack_408 = plVar27;
joined_r0x08b010fa:
      if (cVar13 != '\x01') {
        plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar27 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *(undefined1 (*) [16])(plVar27 + 1) = (undefined1  [16])0x0;
        *plVar27 = (long)&UNK_0f13e7a8;
        plStack_278 = plVar27 + 3;
        plVar27[3] = 0;
        bVar9 = true;
        plStack_270 = plVar27;
LAB_08b01169:
        iVar14 = func_0x08b52550(lVar20,plStack_1c8,&plStack_278);
        if (iVar14 != 0) goto LAB_08b023f0;
        lStack_248 = plVar3[0x22];
        uVar22 = plVar3[0x21];
        if ((*(byte *)(plVar3 + 0x20) & 1) == 0) {
          lStack_248 = lStack_1d0;
          uVar22 = (ulong)(*(byte *)(plVar3 + 0x20) >> 1);
        }
        puStack_268 = &UNK_0f534730;
        bStack_260 = 0;
        uStack_25f = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_240 = uVar22;
        func_0x0ee09820(auStack_3a8,&puStack_268);
        bStack_498 = 100;
        uStack_497 = 0x1f;
        uStack_496 = 0x94a4;
        uStack_494 = 0xed1afa7a;
        uStack_490 = 0x140f690;
        uStack_48c = 0;
        uStack_488 = 1;
        uStack_481 = 0;
        uStack_480 = 0x148;
        if (bStack_368 == 0) {
          auStack_2e8 = (undefined1  [16])0x0;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = auStack_2d8._8_8_;
          auStack_2d8 = auVar1 << 0x40;
          func_0x0eedeb80(8,6,auStack_3a8,auStack_2e8,&bStack_498);
          if ((auStack_2e8[0] & 1) != 0) {
            func_0x0412a280(auStack_2d8._0_8_,auStack_2e8._0_8_ & 0xfffffffffffffffe);
          }
          if ((bStack_368 & 1) != 0) goto LAB_08b01246;
LAB_08b012d3:
          uVar28 = 0;
          func_0x048e6d60(auStack_3a8);
        }
        else {
          if ((bStack_368 & 1) == 0) goto LAB_08b012d3;
LAB_08b01246:
          uVar28 = auStack_3a8._0_4_;
        }
        uVar15 = (ulong)(uVar28 >> 0xc & 0xff);
        bVar23 = (byte)(uVar28 >> 0xc) & 3;
        plVar27 = *(long **)((long)plVar3 + (ulong)(uVar28 >> 7 & 0x18) + 0x178);
        bStack_499 = bVar23;
        if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0)) {
          if ((uVar28 >> 10 & 3) != 0) {
            bVar33 = false;
            goto LAB_08b02082;
          }
          lVar31 = plVar3[0xf];
          lVar21 = plVar3[0x10];
          if (lVar21 != lVar31) {
            uVar22 = 0;
            do {
              lVar19 = *(long *)(lVar31 + uVar22 * 8);
              if (*(int *)(lVar19 + 0xa8) == *(int *)(lVar20 + 0xa8)) {
                switch(*(int *)(lVar20 + 0xa8)) {
                case 0:
                  if (*(long *)(lVar19 + 0x18) == *(long *)(lVar20 + 0x18)) goto code_r0x08b02051;
                  break;
                case 1:
                  if ((*(short *)(lVar19 + 0x2a) == *(short *)(lVar20 + 0x2a)) &&
                     (*(int *)(lVar19 + 0x2c) == *(int *)(lVar20 + 0x2c))) goto code_r0x08b02051;
                  break;
                case 2:
                  if (*(short *)(lVar19 + 0x2a) == *(short *)(lVar20 + 0x2a)) {
                    auVar1 = *(undefined1 (*) [16])(lVar19 + 0x30);
                    auVar34[0] = -(*(char *)(lVar20 + 0x30) == auVar1[0]);
                    auVar34[1] = -(*(char *)(lVar20 + 0x31) == auVar1[1]);
                    auVar34[2] = -(*(char *)(lVar20 + 0x32) == auVar1[2]);
                    auVar34[3] = -(*(char *)(lVar20 + 0x33) == auVar1[3]);
                    auVar34[4] = -(*(char *)(lVar20 + 0x34) == auVar1[4]);
                    auVar34[5] = -(*(char *)(lVar20 + 0x35) == auVar1[5]);
                    auVar34[6] = -(*(char *)(lVar20 + 0x36) == auVar1[6]);
                    auVar34[7] = -(*(char *)(lVar20 + 0x37) == auVar1[7]);
                    auVar34[8] = -(*(char *)(lVar20 + 0x38) == auVar1[8]);
                    auVar34[9] = -(*(char *)(lVar20 + 0x39) == auVar1[9]);
                    auVar34[10] = -(*(char *)(lVar20 + 0x3a) == auVar1[10]);
                    auVar34[0xb] = -(*(char *)(lVar20 + 0x3b) == auVar1[0xb]);
                    auVar34[0xc] = -(*(char *)(lVar20 + 0x3c) == auVar1[0xc]);
                    auVar34[0xd] = -(*(char *)(lVar20 + 0x3d) == auVar1[0xd]);
                    auVar34[0xe] = -(*(char *)(lVar20 + 0x3e) == auVar1[0xe]);
                    auVar34[0xf] = -(*(char *)(lVar20 + 0x3f) == auVar1[0xf]);
                    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                                (ushort)(auVar34[0xf] >> 7) << 0xf) == 0xffff)
                    goto code_r0x08b02051;
                  }
                  break;
                case 3:
                  uVar28 = *(uint *)(lVar19 + 0x10);
                  if (((ulong)uVar28 == 0xffffffff) || (*(uint *)(lVar20 + 0x10) != uVar28)) {
                    if (*(uint *)(lVar20 + 0x10) == uVar28) goto code_r0x08b02051;
                  }
                  else {
                    auStack_3a8 = (undefined1  [8])&bStack_498;
                    cVar13 = (**(code **)(&UNK_0f1475c8 + (ulong)uVar28 * 8))
                                       (auStack_3a8,lVar19,lVar20);
                    if (cVar13 != '\0') goto code_r0x08b02044;
                    lVar31 = plVar3[0xf];
                    lVar21 = plVar3[0x10];
                  }
                  break;
                case 4:
                  goto code_r0x08b02051;
                }
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < (ulong)(lVar21 - lVar31 >> 3));
          }
          goto LAB_08b02080;
        }
        uStack_410 = CONCAT44(uStack_410._4_4_,
                              CONCAT31((uint3)(uVar28 >> 0x12),(char)(uVar28 >> 10))) &
                     0xffffffffffffff03;
        uVar28 = uVar28 & 0x3ff;
        func_0x0eee2f00(auStack_3a8,lVar20,0xac);
        plStack_430 = plVar27;
        bStack_2f8 = bVar23;
        iVar14 = (**(code **)(*plVar27 + 0x50))(plVar27,auStack_3a8,uVar28,uVar22);
        uVar25 = uStack_238;
        if (iVar14 == 0) {
          func_0x08afb260(&plStack_428,uVar28);
          if (plStack_428 == (long *)0x0) {
            bVar33 = true;
            plVar27 = plStack_420;
          }
          else {
            uVar18 = func_0x0417cc60();
            *(undefined8 *)(lVar20 + 0x128) = uVar18;
            plStack_428[3] = *plStack_278;
            uVar16 = (**(code **)(*(long *)plVar3[0x3a] + 0x10))((long *)plVar3[0x3a],uVar28);
            if ((uVar16 >> 0x20 & 1) != 0) {
              (**(code **)(*plStack_428 + 0x70))(plStack_428,uVar16 & 0xffffffff);
            }
            plVar27 = plStack_428;
            uVar12 = func_0x08b04ef0(plVar3);
            (**(code **)(*plVar27 + 0x28))(&bStack_498,plVar27,uVar22,uVar12);
            bStack_368 = bStack_458;
            if (bStack_458 == 0) {
              auStack_3a8[1] = uStack_497;
              auStack_3a8[0] = bStack_498;
              auStack_3a8._2_2_ = uStack_496;
              auStack_3a8._4_4_ = uStack_494;
              plStack_3a0._4_4_ = uStack_48c;
              plStack_3a0._0_4_ = uStack_490;
              auStack_398[7] = uStack_481;
              auStack_398._0_7_ = uStack_488;
              auStack_398._12_4_ = uStack_47c;
              auStack_398._8_4_ = uStack_480;
              plStack_388 = plStack_478;
              uStack_488 = 0;
              uStack_481 = 0;
              uStack_480 = 0;
              uStack_47c = 0;
              plStack_478 = (long *)0x0;
              auStack_380 = auStack_470;
              uStack_370 = uStack_460;
              auStack_470 = (undefined1  [16])0x0;
              uStack_460 = 0;
              func_0x048e6d60(&bStack_498);
            }
            if ((bStack_368 & 1) == 0) {
              func_0x08b31200(auStack_3a8);
              uStack_3c0 = uStack_370;
              auStack_3d0 = auStack_380;
              plStack_3d8 = plStack_388;
              auStack_3e8 = auStack_398;
              uStack_128 = (ulong)auStack_3a8;
              uStack_120 = (ulong)plStack_3a0;
              auStack_398 = ZEXT816(0);
              plStack_388 = (long *)0x0;
              auStack_380 = ZEXT816(0);
              uStack_370 = 0;
              bStack_498 = auStack_3a8[0];
              uStack_497 = auStack_3a8[1];
              uStack_496 = auStack_3a8._2_2_;
              uStack_494 = auStack_3a8._4_4_;
              uStack_490 = auStack_3a8._8_4_;
              uStack_48c = auStack_3a8._12_4_;
              uStack_f8 = 0;
              uStack_f0 = 0;
              uStack_108 = 0;
              uStack_100 = 0;
              uStack_118 = 0;
              uStack_110 = 0;
              bStack_3b8 = 0;
              uStack_488 = 0;
              uStack_481 = 0;
              uStack_480 = 0;
              uStack_47c = 0;
              plStack_478 = (long *)0x0;
              auStack_470 = ZEXT816(0);
              uStack_460 = 0;
              uStack_3f8 = auStack_3a8;
              uStack_3f0 = plStack_3a0;
              func_0x048e6d60(&bStack_498);
              puVar26 = &uStack_128;
LAB_08b017ef:
              func_0x048e6d60(puVar26);
            }
            else {
              func_0x08b13df0(auStack_2e8,plStack_428,&puStack_268,plVar3[0x39],&bStack_499);
              bStack_458 = bStack_2a8;
              if (bStack_2a8 == 0) {
                bStack_498 = auStack_2e8[0];
                uStack_497 = auStack_2e8[1];
                uStack_496 = auStack_2e8._2_2_;
                uStack_494 = auStack_2e8._4_4_;
                uStack_490 = auStack_2e8._8_4_;
                uStack_48c = auStack_2e8._12_4_;
                uStack_488 = auStack_2d8._0_7_;
                uStack_481 = auStack_2d8[7];
                uStack_480 = auStack_2d8._8_4_;
                uStack_47c = auStack_2d8._12_4_;
                plStack_478 = plStack_2c8;
                auStack_2d8 = (undefined1  [16])0x0;
                plStack_2c8 = (long *)0x0;
                auStack_470 = auStack_2c0;
                uStack_460 = uStack_2b0;
                auStack_2c0 = (undefined1  [16])0x0;
                uStack_2b0 = 0;
                func_0x048e6d60(auStack_2e8);
              }
              bVar23 = bStack_458;
              if ((bStack_458 & 1) == 0) {
                func_0x08b312c0(&bStack_498,uVar28);
                uStack_3c0 = uStack_460;
                auStack_3d0 = auStack_470;
                plStack_3d8 = plStack_478;
                uStack_168 = CONCAT44(uStack_494,
                                      CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)));
                uStack_160 = CONCAT44(uStack_48c,uStack_490);
                auStack_3e8[7] = uStack_481;
                auStack_3e8._0_7_ = uStack_488;
                auStack_3e8._12_4_ = uStack_47c;
                auStack_3e8._8_4_ = uStack_480;
                uStack_488 = 0;
                uStack_481 = 0;
                uStack_480 = 0;
                uStack_47c = 0;
                plStack_478 = (long *)0x0;
                auStack_470 = ZEXT816(0);
                uStack_460 = 0;
                auStack_2e8[1] = uStack_497;
                auStack_2e8[0] = bStack_498;
                auStack_2e8._2_2_ = uStack_496;
                auStack_2e8._4_4_ = uStack_494;
                auStack_2e8._12_4_ = uStack_48c;
                auStack_2e8._8_4_ = uStack_490;
                uStack_138 = 0;
                uStack_130 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                uStack_158 = 0;
                uStack_150 = 0;
                bStack_3b8 = 0;
                uStack_3f8 = (undefined1  [8])
                             CONCAT44(uStack_494,
                                      CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)));
                uStack_3f0 = (long *)CONCAT44(uStack_48c,uStack_490);
                auStack_2d8 = ZEXT816(0);
                plStack_2c8 = (long *)0x0;
                auStack_2c0 = ZEXT816(0);
                uStack_2b0 = 0;
                func_0x048e6d60(auStack_2e8);
                func_0x048e6d60(&uStack_168);
                bVar23 = bStack_3b8;
              }
              bStack_3b8 = bVar23;
              if ((bStack_458 & 1) == 0) {
                puVar26 = (ulong *)&bStack_498;
                goto LAB_08b017ef;
              }
            }
            if (bStack_368 == 0) {
              func_0x048e6d60(auStack_3a8);
            }
            plStack_3a0 = (long *)&UNK_0140f690;
            auStack_3a8 = (undefined1  [8])0xed1afa7a94a41f64;
            auStack_398._8_4_ = 0x189;
            auStack_398._0_8_ = 1;
            plVar30 = plStack_3d8;
            uVar4 = uStack_3c0;
            plVar27 = plStack_208;
            uVar18 = uStack_1f0;
            if (bStack_3b8 == 0) {
              bStack_498 = 0;
              uStack_497 = 0;
              uStack_496 = 0;
              uStack_494 = 0;
              uStack_490 = 0;
              uStack_48c = 0;
              uStack_488 = 0;
              uStack_481 = 0;
              func_0x0eedeb80(8,6,&uStack_3f8,&bStack_498,auStack_3a8);
              plVar30 = plStack_3d8;
              uVar4 = uStack_3c0;
              plVar27 = plStack_208;
              uVar18 = uStack_1f0;
              if ((bStack_498 & 1) != 0) {
                func_0x0412a280(CONCAT17(uStack_481,uStack_488),
                                CONCAT44(uStack_494,
                                         CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498))) &
                                0xfffffffffffffffe);
                plVar30 = plStack_3d8;
                uVar4 = uStack_3c0;
                plVar27 = plStack_208;
                uVar18 = uStack_1f0;
              }
            }
            uStack_1f0 = uVar4;
            plStack_208 = plVar30;
            plVar30 = plStack_420;
            plStack_3d8 = plStack_208;
            uStack_3c0 = uStack_1f0;
            bStack_1e8 = bStack_3b8;
            if ((bStack_3b8 & 1) == 0) {
              uStack_218 = auStack_3e8._0_8_;
              uStack_210 = auStack_3e8._8_8_;
              auStack_3e8 = (undefined1  [16])0x0;
              plStack_3d8 = (long *)0x0;
              uStack_200 = auStack_3d0._0_8_;
              uStack_1f8 = auStack_3d0._8_8_;
              auStack_3d0 = (undefined1  [16])0x0;
              uStack_3c0 = 0;
              uStack_228 = (ulong)uStack_3f8;
              uStack_220 = (ulong)uStack_3f0;
              func_0x048e6d60(&uStack_3f8);
              plVar30 = plStack_420;
              plVar27 = plStack_208;
              uVar18 = uStack_1f0;
            }
            uStack_1f0 = uVar18;
            plStack_208 = plVar27;
            plStack_420 = plVar30;
            if ((uVar28 == 0x9c) && (plVar30 != (long *)0x0)) {
              LOCK();
              plVar30[1] = plVar30[1] + 1;
              UNLOCK();
              LOCK();
              plVar27 = plVar30 + 1;
              lVar31 = *plVar27;
              *plVar27 = *plVar27 + -1;
              UNLOCK();
              if (lVar31 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
                func_0x0412c2d0(plVar30);
              }
            }
            uStack_168 = uStack_168 & 0xffffffffffffff00;
            uVar16 = uStack_410 & 0xff;
            if ((plStack_408 == (long *)0x0) ||
               (uStack_410 = uVar16,
               iVar14 = (**(code **)(*plStack_408 + 0x10))
                                  (plStack_408,uVar28,uVar16,&uStack_228,&uStack_168),
               uVar16 = uStack_410, iVar14 == 0)) {
              (**(code **)(*plStack_430 + 0x38))(plStack_430,lVar20,uVar28,uVar15 & 3,uVar16);
              plVar27 = (long *)plStack_428[4];
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x10))(plVar27,lVar20,plStack_430,&plStack_428);
              }
              if (((char *)plVar3[0x1c] != (char *)0x0) && (*(char *)plVar3[0x1c] == '\x01')) {
                uStack_238 = uStack_240;
                if (uVar25 < uStack_240) {
                  uStack_238 = uVar25;
                }
                (**(code **)(*(long *)plVar3[0x1e] + 0x18))
                          ((long *)plVar3[0x1e],lVar20,plStack_428,uVar22 & 0xffffffff);
              }
              FUN_0412d550(0xf5a3710);
              LOCK();
              _DAT_0f5a37e0 = _DAT_0f5a37e0 + 1;
              UNLOCK();
              func_0x0412d610(0xf5a3710);
              plVar27 = _DAT_0f5a37f8;
              pbVar10 = _DAT_0f5a37f0;
              if ((_DAT_0f5a37f0 == (byte *)0x0) || (*_DAT_0f5a37f0 != 1)) {
                _auStack_3a8 = (unkuint9)0;
                func_0x0eee02f0(0xf5a3710);
              }
              else {
                bVar23 = 1;
                if (_DAT_0f5a37f8 != (long *)0x0) {
                  LOCK();
                  _DAT_0f5a37f8[1] = _DAT_0f5a37f8[1] + 1;
                  UNLOCK();
                  bVar23 = *pbVar10;
                }
                plStack_3a0._0_1_ = 1;
                auStack_3a8 = (undefined1  [8])0xf5a3710;
                auStack_398._8_8_ = plVar27;
                auStack_398._0_8_ = pbVar10;
                plStack_388 = _DAT_0f5a3800;
                if ((bVar23 & 1) != 0) {
                  (**(code **)(*_DAT_0f5a3800 + 0x18))
                            (_DAT_0f5a3800,lVar20,plStack_428,uVar22 & 0xffffffff);
                }
                auStack_398 = (undefined1  [16])0x0;
                if (plVar27 != (long *)0x0) {
                  LOCK();
                  plVar30 = plVar27 + 1;
                  lVar31 = *plVar30;
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (lVar31 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                    func_0x0412c2d0(plVar27);
                  }
                  uVar18 = auStack_398._8_8_;
                  plStack_388 = (long *)0x0;
                  if ((long *)auStack_398._8_8_ != (long *)0x0) {
                    LOCK();
                    plVar27 = (long *)(auStack_398._8_8_ + 8);
                    lVar31 = *plVar27;
                    *plVar27 = *plVar27 + -1;
                    UNLOCK();
                    if (lVar31 == 0) {
                      (**(code **)(*(long *)auStack_398._8_8_ + 0x10))(auStack_398._8_8_);
                      func_0x0412c2d0(uVar18);
                    }
                  }
                }
              }
              if ((char)plStack_3a0 == '\x01') {
                func_0x0eee02f0(auStack_3a8);
              }
              cVar13 = '\x03';
              if (*(char *)(lVar20 + 0x1a1) == '\0') goto LAB_08b01c54;
            }
            else {
              uStack_280 = uVar15 & 3;
              iStack_444 = iVar14;
              if (bStack_1e8 == 0) {
                plStack_3a0 = (long *)uStack_220;
                auStack_3a8 = (undefined1  [8])uStack_228;
                auStack_398 = (undefined1  [16])0x0;
                plStack_388 = (long *)0x0;
                func_0x0489ad20();
                auStack_380 = (undefined1  [16])0x0;
                uStack_370 = 0;
                func_0x05d8b660();
              }
              else {
                (**(code **)(*plStack_408 + 0x20))(auStack_3a8);
              }
              uVar18 = auStack_398._8_8_;
              bStack_498 = 0;
              uStack_497 = 0;
              uStack_496 = 0;
              uStack_494 = 0;
              uStack_490 = 0;
              uStack_48c = 0;
              uStack_488 = 0;
              uStack_481 = 0;
              puVar17 = (undefined8 *)0x0;
              lVar31 = auStack_398._0_8_;
              if (auStack_398._0_8_ == auStack_398._8_8_) {
                uVar18 = 0;
              }
              else {
                do {
                  if (*(char *)(lVar31 + 0x48) == '\x01') {
                    if (puVar17 < (undefined8 *)CONCAT17(uStack_481,uStack_488)) {
                      if ((*(byte *)(lVar31 + 0x20) & 1) == 0) {
                        puVar17[2] = *(undefined8 *)(lVar31 + 0x30);
                        uVar4 = *(undefined8 *)(lVar31 + 0x28);
                        *puVar17 = *(undefined8 *)(lVar31 + 0x20);
                        puVar17[1] = uVar4;
                      }
                      else {
                        func_0x0412e5e0(puVar17,*(undefined8 *)(lVar31 + 0x30),
                                        *(undefined8 *)(lVar31 + 0x28));
                      }
                      puVar17 = puVar17 + 3;
                    }
                    else {
                      puVar17 = (undefined8 *)func_0x04909a40(&bStack_498);
                    }
                    uStack_490 = SUB84(puVar17,0);
                    uStack_48c = (undefined4)((ulong)puVar17 >> 0x20);
                  }
                  lVar31 = lVar31 + 0x50;
                } while (lVar31 != uVar18);
                uVar18 = CONCAT44(uStack_494,CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)));
              }
              func_0x04a782c0(auStack_2e8,uVar18,puVar17,&UNK_013a8ff4,1);
              uVar11 = uStack_494;
              uVar2 = CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498));
              lVar31 = CONCAT44(uStack_494,uVar2);
              if (lVar31 != 0) {
                lVar21 = CONCAT44(uStack_48c,uStack_490);
                if (lVar31 != lVar21) {
                  do {
                    if ((*(byte *)(lVar21 + -0x18) & 1) != 0) {
                      func_0x0412a280(*(undefined8 *)(lVar21 + -8),
                                      *(ulong *)(lVar21 + -0x18) & 0xfffffffffffffffe);
                    }
                    lVar21 = lVar21 + -0x18;
                  } while (lVar21 != lVar31);
                  lVar31 = CONCAT44(uStack_494,CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                  ;
                }
                uStack_48c = uVar11;
                uStack_490 = uVar2;
                func_0x0412a280(lVar31,CONCAT17(uStack_481,uStack_488) - lVar31);
              }
              (**(code **)(*plStack_430 + 0x70))
                        (plStack_430,auStack_3a8,iStack_444,uVar28,auStack_2e8,lVar20,uStack_280);
              if ((char)uStack_168 == '\x01') {
                if (bStack_1e8 == 1) {
                  if (*(int *)(lVar20 + 0xa8) == 0) {
                    if (*(long *)(lVar20 + 0x18) == _DAT_0f722bd8) {
                      uStack_488 = _UNK_0147162a;
                      bStack_498 = (byte)_DAT_0147161a;
                      uStack_497 = (undefined1)((ulong)_DAT_0147161a >> 8);
                      uStack_496 = (undefined2)((ulong)_DAT_0147161a >> 0x10);
                      uStack_494 = (undefined4)((ulong)_DAT_0147161a >> 0x20);
                      uStack_490 = (undefined4)_UNK_01471622;
                      uStack_48c = (undefined4)(CONCAT17(DAT_01471629,_UNK_01471622) >> 0x20);
                    }
                    else {
                      func_0x0eee3930(&bStack_498,&UNK_0135842f);
                    }
                    uVar15 = func_0x0eee2e90(&bStack_498);
                    if (0xfffffffffffffff7 < uVar15) goto LAB_08b02883;
                    if (uVar15 < 0x17) {
                      uStack_3f8 = (undefined1  [8])CONCAT71(uStack_3f8._1_7_,(char)uVar15 * '\x02')
                      ;
                      lVar31 = (long)&uStack_3f8 + 1;
                      if (uVar15 != 0) goto LAB_08b021c4;
                    }
                    else {
                      uVar25 = (uVar15 | 7) + 1;
                      if ((uVar15 | 7) == 0x17) {
                        uVar25 = 0x1a;
                      }
                      lStack_298 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
                      if (lStack_298 == 0) {
                        func_0x0eec74c0(uVar25,0);
                      }
                      auStack_3e8._0_8_ = lStack_298;
                      uStack_3f8 = (undefined1  [8])(uVar25 | 1);
                      lVar31 = lStack_298;
                      uStack_3f0 = (long *)uVar15;
LAB_08b021c4:
                      func_0x0eee2f00(lVar31,&bStack_498,uVar15);
                    }
                    *(undefined1 *)(lVar31 + uVar15) = 0;
joined_r0x08b021e9:
                    lVar31 = (long)&uStack_3f8 + 1;
                    if (((ulong)uStack_3f8 & 1) != 0) {
                      lVar31 = auStack_3e8._0_8_;
                    }
                  }
                  else {
                    if (*(int *)(lVar20 + 0xa8) == 3) {
                      if ((ulong)*(uint *)(lVar20 + 0x10) != 0xffffffff) {
                        bStack_498 = (byte)&uStack_128;
                        uStack_497 = (undefined1)((ulong)&uStack_128 >> 8);
                        uStack_496 = (undefined2)((ulong)&uStack_128 >> 0x10);
                        uStack_494 = (undefined4)((ulong)&uStack_128 >> 0x20);
                        (**(code **)(&UNK_0f478138 + (ulong)*(uint *)(lVar20 + 0x10) * 8))
                                  (&uStack_3f8,&bStack_498,lVar20);
                        goto joined_r0x08b021e9;
                      }
                      goto LAB_08b0287e;
                    }
                    uStack_3f8 = (undefined1  [8])((ulong)uStack_3f8 & 0xffffffffffff0000);
                    lVar31 = (long)&uStack_3f8 + 1;
                  }
                  func_0x0eede920(0,1,0,6,8,&UNK_012ab1a5,0x1e6,&UNK_013e63fe,uVar28,lVar31);
                  if (((ulong)uStack_3f8 & 1) != 0) {
                    func_0x0412a280(auStack_3e8._0_8_,(ulong)uStack_3f8 & 0xfffffffffffffffe);
                  }
                }
                (**(code **)(*plStack_430 + 0x68))
                          (plStack_430,&plStack_408,auStack_3a8,iStack_444,uVar28,auStack_2e8,lVar20
                           ,uStack_280,uStack_410,uVar22);
                if (iStack_444 != 3) goto LAB_08b02001;
                cVar13 = '\x03';
                bVar7 = false;
                bVar33 = false;
              }
              else {
LAB_08b02001:
                cVar13 = '\0';
                bVar7 = true;
                bVar33 = true;
              }
              if ((auStack_2e8[0] & 1) != 0) {
                func_0x0412a280(auStack_2d8._0_8_,auStack_2e8._0_8_ & 0xfffffffffffffffe);
                bVar33 = bVar7;
              }
              func_0x048e6d60(auStack_3a8);
              if (bVar33) {
LAB_08b01c54:
                lVar31 = func_0x0417cc60();
                cVar13 = (lStack_288 < lVar31) * '\x03';
                bVar9 = (bool)(bVar9 & lVar31 <= lStack_288);
              }
            }
            if (bStack_1e8 == 0) {
              func_0x048e6d60(&uStack_228);
            }
            bVar33 = cVar13 == '\0';
            plVar27 = plStack_420;
          }
          plStack_420 = plVar27;
          if (plVar27 != (long *)0x0) {
            LOCK();
            plVar30 = plVar27 + 1;
            lVar31 = *plVar30;
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              func_0x0412c2d0(plVar27);
            }
          }
          goto LAB_08b02082;
        }
        if (iVar14 == 2) {
          lVar31 = plVar3[0xf];
          lVar21 = plVar3[0x10];
          if (lVar21 != lVar31) {
            uVar22 = 0;
            do {
              lVar19 = *(long *)(lVar31 + uVar22 * 8);
              if (*(int *)(lVar19 + 0xa8) == *(int *)(lVar20 + 0xa8)) {
                switch(*(int *)(lVar20 + 0xa8)) {
                case 0:
                  if (*(long *)(lVar19 + 0x18) == *(long *)(lVar20 + 0x18)) goto code_r0x08b02051;
                  break;
                case 1:
                  if ((*(short *)(lVar19 + 0x2a) == *(short *)(lVar20 + 0x2a)) &&
                     (*(int *)(lVar19 + 0x2c) == *(int *)(lVar20 + 0x2c))) goto code_r0x08b02051;
                  break;
                case 2:
                  if (*(short *)(lVar19 + 0x2a) == *(short *)(lVar20 + 0x2a)) {
                    auVar1 = *(undefined1 (*) [16])(lVar19 + 0x30);
                    auVar35[0] = -(*(char *)(lVar20 + 0x30) == auVar1[0]);
                    auVar35[1] = -(*(char *)(lVar20 + 0x31) == auVar1[1]);
                    auVar35[2] = -(*(char *)(lVar20 + 0x32) == auVar1[2]);
                    auVar35[3] = -(*(char *)(lVar20 + 0x33) == auVar1[3]);
                    auVar35[4] = -(*(char *)(lVar20 + 0x34) == auVar1[4]);
                    auVar35[5] = -(*(char *)(lVar20 + 0x35) == auVar1[5]);
                    auVar35[6] = -(*(char *)(lVar20 + 0x36) == auVar1[6]);
                    auVar35[7] = -(*(char *)(lVar20 + 0x37) == auVar1[7]);
                    auVar35[8] = -(*(char *)(lVar20 + 0x38) == auVar1[8]);
                    auVar35[9] = -(*(char *)(lVar20 + 0x39) == auVar1[9]);
                    auVar35[10] = -(*(char *)(lVar20 + 0x3a) == auVar1[10]);
                    auVar35[0xb] = -(*(char *)(lVar20 + 0x3b) == auVar1[0xb]);
                    auVar35[0xc] = -(*(char *)(lVar20 + 0x3c) == auVar1[0xc]);
                    auVar35[0xd] = -(*(char *)(lVar20 + 0x3d) == auVar1[0xd]);
                    auVar35[0xe] = -(*(char *)(lVar20 + 0x3e) == auVar1[0xe]);
                    auVar35[0xf] = -(*(char *)(lVar20 + 0x3f) == auVar1[0xf]);
                    if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar35[0xf] >> 7) << 0xf) == 0xffff)
                    goto code_r0x08b02051;
                  }
                  break;
                case 3:
                  uVar28 = *(uint *)(lVar19 + 0x10);
                  if (((ulong)uVar28 == 0xffffffff) || (*(uint *)(lVar20 + 0x10) != uVar28)) {
                    if (*(uint *)(lVar20 + 0x10) == uVar28) goto code_r0x08b02051;
                  }
                  else {
                    auStack_3a8 = (undefined1  [8])&bStack_498;
                    cVar13 = (**(code **)(&UNK_0f1475c8 + (ulong)uVar28 * 8))
                                       (auStack_3a8,lVar19,lVar20);
                    if (cVar13 != '\0') goto code_r0x08b02044;
                    lVar31 = plVar3[0xf];
                    lVar21 = plVar3[0x10];
                  }
                  break;
                case 4:
                  goto code_r0x08b02051;
                }
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < (ulong)(lVar21 - lVar31 >> 3));
          }
          goto LAB_08b02080;
        }
        bVar33 = false;
        goto LAB_08b02082;
      }
      lVar31 = func_0x0417cc60();
      bVar9 = true;
      if (*(long *)(lVar20 + 0x130) + 500000000 < lVar31) {
        uVar2 = *(undefined4 *)(lVar20 + 0x1a4);
        bStack_498 = 0;
        uStack_497 = 0;
        auVar5._14_2_ = 0;
        auVar5._0_14_ = stack0xfffffffffffffc5a;
        _auStack_3a8 = auVar5 << 0x10;
        func_0x04863060(auStack_2e8,0);
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar20,uVar2,&bStack_498,auStack_3a8,0,auStack_2e8);
        func_0x04863610(auStack_2e8);
        if ((auStack_3a8[0] & 1) != 0) {
          func_0x0412a280(auStack_398._0_8_,(ulong)auStack_3a8 & 0xfffffffffffffffe);
        }
        plVar27 = (long *)plVar3[0x16];
        if (plVar27 == (long *)0x0) goto LAB_08b0286a;
        plStack_3a0 = (long *)0x0;
        auStack_3a8 = (undefined1  [8])plVar27[8];
        plVar30 = (long *)plVar27[9];
        if (plVar30 != (long *)0x0) {
          LOCK();
          plVar30[1] = plVar30[1] + 1;
          UNLOCK();
          plStack_3a0 = plVar30;
        }
        if (auStack_3a8 == (undefined1  [8])0x0) goto LAB_08b02879;
        auStack_398._0_8_ = plVar27;
        if (*(char *)auStack_3a8 == '\0') goto LAB_08b02879;
        (**(code **)(*plVar27 + 0x88))(plVar27,lVar20);
        _auStack_3a8 = (undefined1  [16])0x0;
        if (plVar30 != (long *)0x0) {
          LOCK();
          plVar27 = plVar30 + 1;
          lVar31 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
            plVar27 = plStack_3a0;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = auStack_398._8_8_;
            auStack_398 = auVar8 << 0x40;
            if (plStack_3a0 != (long *)0x0) {
              LOCK();
              plVar30 = plStack_3a0 + 1;
              lVar31 = *plVar30;
              *plVar30 = *plVar30 + -1;
              UNLOCK();
              if (lVar31 == 0) {
                (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
                func_0x0412c2d0(plVar27);
              }
            }
          }
          else {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = auStack_398._8_8_;
            auStack_398 = auVar6 << 0x40;
          }
        }
        if ((bStack_498 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_481,uStack_488),
                          CONCAT44(uStack_494,CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                          & 0xfffffffffffffffe);
        }
      }
      goto LAB_08b024b0;
    }
    plVar3[0x18] = uVar15 % uVar25;
    lVar20 = *(long *)(lVar20 + (uVar15 % uVar25) * 8);
    if (*(char *)(lVar20 + 0x1a0) != '\x01') goto LAB_08b00d49;
LAB_08b00cfe:
    if (uVar22 < uStack_440) {
      func_0x0eee2f00(uVar22,lVar20,0xb0);
      uVar22 = uVar22 + 0xb0;
      uVar15 = uStack_440;
    }
    else {
      lVar21 = uVar22 - uStack_4b8;
      uVar29 = (lVar21 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
      uStack_438 = uVar22;
      if (0x1745d1745d1745d < uVar29) {
LAB_08b02874:
        func_0x08b30e50();
LAB_08b02879:
        func_0x04890760();
LAB_08b0287e:
        func_0x04931450();
LAB_08b02883:
        uVar18 = func_0x04882e30();
        if (bStack_458 == 0) {
          func_0x048e6d60(&bStack_498);
        }
        if (bStack_368 == 0) {
          func_0x048e6d60(auStack_3a8);
        }
        func_0x08afbe40(&plStack_428);
        puStack_268 = &UNK_0f534730;
        if ((bStack_260 & 1) != 0) {
          func_0x0412a280(uStack_250,
                          CONCAT62(uStack_25e,CONCAT11(uStack_25f,bStack_260)) & 0xfffffffffffffffe)
          ;
        }
        func_0x08b02e00(plStack_270);
        func_0x08b02e30(&plStack_408);
        func_0x0b5fb220(&uStack_198);
        if (uStack_4b8 != 0) {
          func_0x0412a280(uStack_4b8,uStack_440 - uStack_4b8);
        }
        func_0x0ca115f0(auStack_1c0);
        func_0x0412d790(plStack_290);
        func_0x04108700(uVar18);
        uVar12 = DAT_0f778530;
        func_0x04108910();
        return uVar12;
      }
      lVar32 = uStack_440 - uStack_4b8;
      lVar19 = lVar32 >> 4;
      uVar15 = lVar19 * 0x5d1745d1745d1746;
      if (uVar29 < uVar15) {
        uVar29 = uVar15;
      }
      if (0xba2e8ba2e8ba2d < (ulong)(lVar19 * 0x2e8ba2e8ba2e8ba3)) {
        uVar29 = 0x1745d1745d1745d;
      }
      lStack_418 = lVar31;
      if (0x1745d1745d1745d < uVar29) goto LAB_08b0286f;
      plVar27 = (long *)(uVar29 * 0xb0);
      lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,plVar27);
      if (lVar31 == 0) {
        func_0x0eec74c0(plVar27,0);
      }
      plStack_430 = plVar27;
      func_0x0eee2f00(lVar21 + lVar31,lVar20,0xb0);
      uVar25 = uStack_438;
      lVar20 = SUB168(SEXT816(lVar21) * SEXT816(-0x2e8ba2e8ba2e8ba3),8);
      uVar29 = ((lVar20 >> 5) - (lVar20 >> 0x3f)) * 0xb0 + lVar21 + lVar31;
      uVar22 = uVar29;
      for (uVar15 = uStack_4b8; uVar15 != uVar25; uVar15 = uVar15 + 0xb0) {
        func_0x0eee2f00(uVar22,uVar15,0xb0);
        uVar22 = uVar22 + 0xb0;
      }
      uVar15 = (long)plStack_430 + lVar31;
      uVar22 = lVar21 + lVar31 + 0xb0;
      lVar31 = lStack_418;
      if (uStack_4b8 != 0) {
        func_0x0412a280(uStack_4b8,lVar32);
        lVar31 = lStack_418;
      }
    }
    goto LAB_08b00ca8;
  }
  goto LAB_08b02808;
code_r0x08b02044:
  lVar19 = *(long *)(plVar3[0xf] + uVar22 * 8);
  if (lVar19 != 0) {
code_r0x08b02051:
    *(undefined1 *)(lVar19 + 0x1a1) = 1;
    *(undefined4 *)(lVar19 + 0x1a4) = 0x29;
    uVar18 = func_0x0417cc60();
    *(undefined8 *)(lVar19 + 0x130) = uVar18;
  }
LAB_08b02080:
  bVar33 = false;
LAB_08b02082:
  puStack_268 = &UNK_0f534730;
  if ((bStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,
                    CONCAT62(uStack_25e,CONCAT11(uStack_25f,bStack_260)) & 0xfffffffffffffffe);
  }
  if (!bVar33) goto LAB_08b023f0;
  goto LAB_08b01169;
LAB_08b023f0:
  plVar27 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar30 = plStack_270 + 1;
    lVar31 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar27);
    }
  }
LAB_08b024b0:
  plVar27 = plStack_400;
  if (plStack_400 != (long *)0x0) {
    LOCK();
    plVar30 = plStack_400 + 1;
    lVar31 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plStack_400 + 0x10))(plStack_400);
      func_0x0412c2d0(plVar27);
    }
  }
  func_0x0b5fb220(&uStack_198);
  uVar22 = uStack_438;
  lVar31 = lStack_418;
  uVar15 = uStack_440;
  uVar12 = uRam000000000f778540;
  if (!bVar9) goto joined_r0x08b02861;
LAB_08b00ca8:
  uStack_440 = uVar15;
  uStack_4b8 = uVar29;
  lVar31 = lVar31 + 1;
  if (lVar31 == lStack_1d8) goto LAB_08b02527;
  goto LAB_08b00cbc;
LAB_08b02527:
  uVar12 = DAT_0f778530;
  if (uVar22 - uStack_4b8 != 0) {
    lVar31 = ((long)(uVar22 - uStack_4b8) >> 4) * 0x2e8ba2e8ba2e8ba3;
    uVar22 = lVar31 + (ulong)(lVar31 == 0);
    plVar27 = (long *)plVar3[0x10];
    uVar29 = 0;
    uStack_438 = uVar22;
    do {
      plVar30 = (long *)plVar3[0xf];
      func_0x0eee2f00(auStack_e0,uVar29 * 0xb0 + uStack_4b8,0xac);
      func_0x0eee2f00(auStack_3a8,auStack_e0,0xb0);
      if (plVar30 != plVar27) {
        do {
          lVar31 = *plVar30;
          if (*(int *)(lVar31 + 0xa8) == iStack_300) {
            plVar24 = plVar30;
            switch(iStack_300) {
            case 0:
              if (*(long *)(lVar31 + 0x18) == auStack_398._8_8_) goto code_r0x08b026d3;
              break;
            case 1:
              if ((*(short *)(lVar31 + 0x2a) == auStack_380._2_2_) &&
                 (*(int *)(lVar31 + 0x2c) == auStack_380._4_4_)) goto code_r0x08b026d3;
              break;
            case 2:
              if (*(short *)(lVar31 + 0x2a) == auStack_380._2_2_) {
                auVar1 = *(undefined1 (*) [16])(lVar31 + 0x30);
                auVar36[0] = -(auStack_380[8] == auVar1[0]);
                auVar36[1] = -(auStack_380[9] == auVar1[1]);
                auVar36[2] = -(auStack_380[10] == auVar1[2]);
                auVar36[3] = -(auStack_380[0xb] == auVar1[3]);
                auVar36[4] = -(auStack_380[0xc] == auVar1[4]);
                auVar36[5] = -(auStack_380[0xd] == auVar1[5]);
                auVar36[6] = -(auStack_380[0xe] == auVar1[6]);
                auVar36[7] = -(auStack_380[0xf] == auVar1[7]);
                auVar36[8] = -((char)uStack_370 == auVar1[8]);
                auVar36[9] = -(uStack_370._1_1_ == auVar1[9]);
                auVar36[10] = -(uStack_370._2_1_ == auVar1[10]);
                auVar36[0xb] = -(uStack_370._3_1_ == auVar1[0xb]);
                auVar36[0xc] = -(uStack_370._4_1_ == auVar1[0xc]);
                auVar36[0xd] = -(uStack_370._5_1_ == auVar1[0xd]);
                auVar36[0xe] = -(uStack_370._6_1_ == auVar1[0xe]);
                auVar36[0xf] = -(uStack_370._7_1_ == auVar1[0xf]);
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
                            (ushort)(auVar36[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x08b026d3;
              }
              break;
            case 3:
              uVar28 = *(uint *)(lVar31 + 0x10);
              if (auStack_398._0_4_ == uVar28 && uVar28 != 0xffffffff) {
                bStack_498 = (byte)auStack_2e8;
                uStack_497 = (undefined1)((ulong)auStack_2e8 >> 8);
                uStack_496 = (undefined2)((ulong)auStack_2e8 >> 0x10);
                uStack_494 = (undefined4)((ulong)auStack_2e8 >> 0x20);
                cVar13 = (**(code **)(&UNK_0f1475c8 + (ulong)uVar28 * 8))
                                   (&bStack_498,lVar31,auStack_3a8);
                if (cVar13 != '\0') goto code_r0x08b026d3;
              }
              else if (auStack_398._0_4_ == uVar28) goto code_r0x08b026d3;
              break;
            case 4:
              goto code_r0x08b026d3;
            }
          }
          plVar30 = plVar30 + 1;
          plVar24 = plVar27;
        } while (plVar30 != plVar27);
code_r0x08b026d3:
        plVar27 = (long *)plVar3[0x10];
        uVar22 = uStack_438;
        if (plVar24 != plVar27) {
          if (plVar24 + 1 == plVar27) {
            if (plVar24 != plVar27) {
LAB_08b0278d:
              do {
                lVar31 = plVar27[-1];
                plVar27[-1] = 0;
                if (lVar31 != 0) {
                  func_0x08b30e60(lVar31);
                  func_0x0412a280(lVar31,0x1b8);
                }
                plVar27 = plVar27 + -1;
              } while (plVar27 != plVar24);
            }
          }
          else {
            do {
              lVar31 = *plVar24;
              lVar20 = plVar24[1];
              plVar24[1] = 0;
              *plVar24 = lVar20;
              if (lVar31 != 0) {
                func_0x08b30e60(lVar31);
                func_0x0412a280(lVar31,0x1b8);
              }
              plVar30 = plVar24 + 2;
              plVar24 = plVar24 + 1;
            } while (plVar30 != plVar27);
            plVar27 = (long *)plVar3[0x10];
            if (plVar24 != plVar27) goto LAB_08b0278d;
          }
          plVar3[0x10] = (long)plVar24;
          uVar22 = uStack_438;
          plVar27 = plVar24;
        }
      }
      uVar29 = uVar29 + 1;
      uVar12 = DAT_0f778530;
    } while (uVar29 != uVar22);
  }
joined_r0x08b02861:
  if (uStack_4b8 != 0) {
    func_0x0412a280(uStack_4b8,uStack_440 - uStack_4b8);
  }
LAB_08b02808:
  func_0x0ca11610(auStack_1c0);
  if (auStack_1b8._8_8_ != 0) {
    func_0x0412c2d0();
  }
  func_0x0412d790(plStack_290);
  return uVar12;
}



/* ---- referenced strings ----
 * 0x147161a  UNASSIGNED_RAKNET_GUID
 * 0x1471629  ET_GUID
 */
