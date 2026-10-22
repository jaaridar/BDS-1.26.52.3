/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca01e00 (ELF vaddr 0xc901e00)
 * Label: caller-of-callee
 * Body:  [[0ca01e00, 0ca057cd] [0ca057df, 0ca05806] [0ca0580a, 0ca0582c] [0ca05c79, 0ca05c86] [0ca05db6, 0ca05dd1] [0ca05e2e, 0ca05e5b] [0ca05e5f, 0ca05e70] [0ca05f38, 0ca05f6b]]
 * Ghidra: FUN_0ca01e00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca01e00(undefined1 (*param_1) [16],byte *param_2,long *param_3,int *param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined7 *puVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  int *piVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  uint7 *puVar28;
  uint7 *puVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long *plVar32;
  byte *pbVar33;
  int *piVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  char cStack_5d1;
  byte *pbStack_5d0;
  long *plStack_5c8;
  ulong uStack_5c0;
  byte bStack_5b8;
  undefined1 uStack_5b7;
  short sStack_5b6;
  short sStack_5b4;
  undefined2 uStack_5b2;
  byte bStack_5b0;
  uint7 uStack_5af;
  char cStack_5a8;
  uint7 uStack_5a7;
  undefined1 uStack_5a0;
  undefined7 uStack_59f;
  long *plStack_598;
  int *piStack_590;
  ulong uStack_588;
  undefined1 auStack_580 [16];
  long *plStack_570;
  code *pcStack_568;
  undefined4 uStack_560;
  undefined1 uStack_55c;
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [16];
  undefined1 auStack_538 [16];
  undefined1 auStack_528 [16];
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined1 uStack_50c;
  uint uStack_508;
  uint7 *puStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  int *piStack_4e8;
  long lStack_4e0;
  undefined1 (*pauStack_4d8) [16];
  int *piStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  byte *pbStack_4b0;
  undefined8 uStack_4a8;
  uint uStack_418;
  byte *pbStack_408;
  undefined1 auStack_400 [16];
  long *plStack_3f0;
  undefined1 auStack_3e8 [16];
  ulong uStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  int iStack_3b0;
  char cStack_3ac;
  undefined1 auStack_3a8 [16];
  ulong uStack_398;
  undefined1 auStack_390 [16];
  ulong uStack_380;
  undefined1 auStack_378 [16];
  undefined8 uStack_368;
  undefined4 uStack_360;
  byte bStack_35c;
  byte bStack_350;
  uint7 uStack_34f;
  byte *pbStack_348;
  uint7 *puStack_340;
  byte bStack_338;
  uint7 uStack_337;
  ulong uStack_330;
  uint7 *puStack_328;
  byte bStack_320;
  undefined7 uStack_31f;
  ulong uStack_318;
  undefined7 *puStack_310;
  undefined4 uStack_308;
  long *plStack_300;
  ulong uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined2 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined4 uStack_280;
  byte bStack_27c;
  undefined8 uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  byte bStack_22c;
  code *pcStack_228;
  undefined1 auStack_218 [80];
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  long *plStack_198;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 auStack_170 [24];
  code *pcStack_158;
  undefined1 auStack_148 [80];
  long *plStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 auStack_c8 [8];
  byte bStack_c0;
  undefined7 uStack_bf;
  ulong uStack_b0;
  long lStack_a0;
  undefined1 auStack_98 [16];
  ulong uStack_88;
  long lStack_78;
  char *pcStack_70;
  ulong *puStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  
  pbStack_5d0 = param_2;
  pauStack_4d8 = param_1;
  if ((param_3[0x2c] == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_01233890,&UNK_0124f5b1,0x363,&UNK_012e8782,&UNK_012e87ce),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x0d6892a0(auStack_1c8,param_3);
  func_0x0ca05f70(&bStack_350,*(undefined8 *)(pbStack_5d0 + 0x10),param_3);
  pbVar33 = pbStack_348;
  if ((bStack_350 & 1) == 0) {
    pbVar33 = (byte *)(ulong)(bStack_350 >> 1);
  }
  plStack_4f0 = param_3;
  piStack_4d0 = param_4;
  if (pbVar33 != (byte *)0x0) {
    puVar29 = &uStack_34f;
    if ((bStack_350 & 1) != 0) {
      puVar29 = puStack_340;
    }
    cVar11 = func_0x0551ca70(auStack_1c8,&UNK_0f361180);
    piVar9 = piStack_4d0;
    cVar10 = (char)plStack_4f0[0x21];
    if (cVar11 == '\0' && cVar10 == '\x06') {
      uStack_4c8 = puVar29;
      uStack_4c0 = pbVar33;
      func_0x0470d9a0(&bStack_5b8,&UNK_013f045b,0x57,0xd,&uStack_4c8);
      if ((bStack_5b8 & 1) == 0) {
        pbStack_408 = &uStack_5b7;
      }
      else {
        pbStack_408 = (byte *)CONCAT71(uStack_5a7,cStack_5a8);
      }
      func_0x09adffe0(1,3,0x10,&pbStack_408);
      if ((bStack_5b8 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_5a7,cStack_5a8),
                        CONCAT26(uStack_5b2,
                                 CONCAT24(sStack_5b4,
                                          CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8)))) &
                        0xfffffffffffffffe);
      }
    }
    else if ((pbStack_5d0[0x2c0] != 0) || ((bool)(char)plStack_4f0[0x31] == (*piStack_4d0 == 1))) {
      pbVar33 = (byte *)(ulong)(bStack_350 >> 1);
      puVar29 = &uStack_34f;
      if ((bStack_350 & 1) != 0) {
        pbVar33 = pbStack_348;
        puVar29 = puStack_340;
      }
      if (pbVar33 == (byte *)0x14) {
        uVar1 = (undefined4)puVar29[2];
        auVar38[0] = -((char)uVar1 == DAT_014e8500);
        auVar38[1] = -((char)((uint)uVar1 >> 8) == UNK_014e8501);
        auVar38[2] = -((char)((uint)uVar1 >> 0x10) == UNK_014e8502);
        auVar38[3] = -((char)((uint)uVar1 >> 0x18) == UNK_014e8503);
        auVar38[4] = -(UNK_014e8504 == '\0');
        auVar38[5] = -(UNK_014e8505 == '\0');
        auVar38[6] = -(UNK_014e8506 == '\0');
        auVar38[7] = -(UNK_014e8507 == '\0');
        auVar38[8] = -(UNK_014e8508 == '\0');
        auVar38[9] = -(UNK_014e8509 == '\0');
        auVar38[10] = -(UNK_014e850a == '\0');
        auVar38[0xb] = -(UNK_014e850b == '\0');
        auVar38[0xc] = -(UNK_014e850c == '\0');
        auVar38[0xd] = -(UNK_014e850d == '\0');
        auVar38[0xe] = -(UNK_014e850e == '\0');
        auVar38[0xf] = -(UNK_014e850f == '\0');
        auVar39[0] = -((char)*puVar29 == DAT_014e15e0);
        auVar39[1] = -(*(char *)((long)puVar29 + 1) == UNK_014e15e1);
        auVar39[2] = -(*(char *)((long)puVar29 + 2) == UNK_014e15e2);
        auVar39[3] = -(*(char *)((long)puVar29 + 3) == UNK_014e15e3);
        auVar39[4] = -(*(char *)((long)puVar29 + 4) == UNK_014e15e4);
        auVar39[5] = -(*(char *)((long)puVar29 + 5) == UNK_014e15e5);
        auVar39[6] = -(*(char *)((long)puVar29 + 6) == UNK_014e15e6);
        auVar39[7] = -(*(char *)((long)puVar29 + 7) == UNK_014e15e7);
        auVar39[8] = -((char)puVar29[1] == UNK_014e15e8);
        auVar39[9] = -(*(char *)((long)puVar29 + 9) == UNK_014e15e9);
        auVar39[10] = -(*(char *)((long)puVar29 + 10) == UNK_014e15ea);
        auVar39[0xb] = -(*(char *)((long)puVar29 + 0xb) == UNK_014e15eb);
        auVar39[0xc] = -(*(char *)((long)puVar29 + 0xc) == UNK_014e15ec);
        auVar39[0xd] = -(*(char *)((long)puVar29 + 0xd) == UNK_014e15ed);
        auVar39[0xe] = -(*(char *)((long)puVar29 + 0xe) == UNK_014e15ee);
        auVar39[0xf] = -(*(char *)((long)puVar29 + 0xf) == UNK_014e15ef);
        auVar39 = auVar39 & auVar38;
        uVar2 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar39[0xf] >> 7) << 0xf;
joined_r0x0ca020dc:
        if (uVar2 != 0xffff) {
LAB_0ca020e2:
          plStack_300 = plStack_4f0 + 0x22;
          piStack_4e8 = piStack_4d0 + 4;
          uStack_5c0 = CONCAT44(uStack_5c0._4_4_,(uint)*(byte *)(plStack_4f0 + 0x31));
          lStack_4e0 = *(long *)(pbStack_5d0 + 0x10);
          uStack_4f8 = CONCAT71(uStack_4f8._1_7_,*(undefined1 *)((long)plStack_4f0 + 0x159));
          if (pbStack_5d0[0x2c0] != 0) {
            bStack_5b8 = 0;
            uStack_5b7 = 0;
            sStack_5b6 = 0;
            sStack_5b4 = 0;
            uStack_5b2 = 0;
            if ((bStack_350 & 1) == 0) {
              uStack_5a0 = SUB81(puStack_340,0);
              uStack_59f = (undefined7)((ulong)puStack_340 >> 8);
              bStack_5b0 = bStack_350;
              uStack_5af = uStack_34f;
              cStack_5a8 = (char)pbStack_348;
              uStack_5a7 = (uint7)((ulong)pbStack_348 >> 8);
            }
            else {
              func_0x0412e5e0();
            }
            bVar12 = bStack_5b0;
            plStack_598 = (long *)0x0;
            if ((bStack_5b0 & 1) == 0) {
              uVar19 = (ulong)(bStack_5b0 >> 1);
              if (uVar19 != 0) goto LAB_0ca022c2;
LAB_0ca02333:
              uVar26 = 0;
              puVar28 = (uint7 *)CONCAT71(uStack_59f,uStack_5a0);
            }
            else {
              uVar19 = CONCAT71(uStack_5a7,cStack_5a8);
              if (uVar19 == 0) goto LAB_0ca02333;
LAB_0ca022c2:
              puVar29 = &uStack_5af;
              if ((bStack_5b0 & 1) != 0) {
                puVar29 = (uint7 *)CONCAT71(uStack_59f,uStack_5a0);
              }
              if ((puVar29 == (uint7 *)0x0) || ((byte)*puVar29 == 0)) goto LAB_0ca02333;
              uVar26 = 0xcbf29ce484222325;
              puStack_500 = (uint7 *)CONCAT71(uStack_59f,uStack_5a0);
              uVar17 = func_0x0eee2e90(puVar29);
              puVar28 = puStack_500;
              if (uVar17 != 0) {
                uVar30 = (ulong)((uint)uVar17 & 7);
                if (7 < uVar17) {
                  uVar17 = uVar17 & 0xfffffffffffffff8;
                  do {
                    uVar26 = (((((((uVar26 * 0x100000001b3 ^ (ulong)(byte)*puVar29) * 0x100000001b3
                                  ^ (ulong)*(byte *)((long)puVar29 + 1)) * 0x100000001b3 ^
                                 (ulong)*(byte *)((long)puVar29 + 2)) * 0x100000001b3 ^
                                (ulong)*(byte *)((long)puVar29 + 3)) * 0x100000001b3 ^
                               (ulong)*(byte *)((long)puVar29 + 4)) * 0x100000001b3 ^
                              (ulong)*(byte *)((long)puVar29 + 5)) * 0x100000001b3 ^
                             (ulong)*(byte *)((long)puVar29 + 6)) * 0x100000001b3 ^
                             (ulong)*(byte *)((long)puVar29 + 7);
                    puVar29 = puVar29 + 1;
                    uVar17 = uVar17 - 8;
                  } while (uVar17 != 0);
                }
                if (uVar30 != 0) {
                  uVar17 = 0;
                  do {
                    uVar26 = uVar26 * 0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + uVar17);
                    uVar17 = uVar17 + 1;
                  } while (uVar30 != uVar17);
                }
              }
            }
            bStack_5b8 = (byte)uVar26;
            uStack_5b7 = (byte)(uVar26 >> 8);
            sStack_5b6 = (short)(uVar26 >> 0x10);
            sStack_5b4 = (short)(uVar26 >> 0x20);
            uStack_5b2 = (undefined2)(uVar26 >> 0x30);
            uStack_4c8 = (uint7 *)((ulong)uStack_4c8._4_4_ << 0x20);
            puVar29 = &uStack_5af;
            if ((bVar12 & 1) == 0) {
              puVar28 = puVar29;
            }
            func_0x0ca0c260(&plStack_f8,pbStack_5d0,&uStack_4c8,puVar28,uVar19);
            if ((bStack_5b0 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                              CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
            }
            uVar19 = (ulong)(bStack_338 >> 1);
            puVar28 = &uStack_337;
            if ((bStack_338 & 1) != 0) {
              uVar19 = uStack_330;
              puVar28 = puStack_328;
            }
            uVar26 = (ulong)(bStack_320 >> 1);
            puVar5 = &uStack_31f;
            if ((bStack_320 & 1) != 0) {
              uVar26 = uStack_318;
              puVar5 = puStack_310;
            }
            bStack_5b8 = (byte)puVar28;
            uStack_5b7 = (byte)((ulong)puVar28 >> 8);
            sStack_5b6 = (short)((ulong)puVar28 >> 0x10);
            sStack_5b4 = (short)((ulong)puVar28 >> 0x20);
            uStack_5b2 = (undefined2)((ulong)puVar28 >> 0x30);
            bStack_5b0 = (byte)uVar19;
            uStack_5af = (uint7)(uVar19 >> 8);
            cStack_5a8 = (char)puVar5;
            uStack_5a7 = (uint7)((ulong)puVar5 >> 8);
            uStack_5a0 = (undefined1)uVar26;
            uStack_59f = (undefined7)(uVar26 >> 8);
            func_0x0470d9a0(&pbStack_408,&UNK_011ed16e,5,0xdd,&bStack_5b8);
            uStack_4c8 = (uint7 *)0x0;
            if (((ulong)pbStack_408 & 1) == 0) {
              pbStack_4b0 = (byte *)auStack_400._8_8_;
              uStack_4c0 = pbStack_408;
              uStack_4b8 = auStack_400._0_8_;
            }
            else {
              func_0x0412e5e0(&uStack_4c0,auStack_400._8_8_,auStack_400._0_8_);
            }
            uStack_4a8 = 0;
            puStack_500 = &uStack_337;
            if (((ulong)uStack_4c0 & 1) == 0) {
              if ((byte)uStack_4c0 >> 1 != 0) goto LAB_0ca024a7;
LAB_0ca02596:
              puVar28 = (uint7 *)0x0;
            }
            else {
              if (uStack_4b8 == 0) goto LAB_0ca02596;
LAB_0ca024a7:
              if (((ulong)uStack_4c0 & 1) == 0) {
                pbVar33 = (byte *)((long)&uStack_4c0 + 1);
                if (pbVar33 != (byte *)0x0) goto LAB_0ca024ce;
                goto LAB_0ca02596;
              }
              pbVar33 = pbStack_4b0;
              if (pbStack_4b0 == (byte *)0x0) goto LAB_0ca02596;
LAB_0ca024ce:
              if (*pbVar33 == 0) goto LAB_0ca02596;
              puVar28 = (uint7 *)0xcbf29ce484222325;
              uVar19 = func_0x0eee2e90(pbVar33);
              if (uVar19 != 0) {
                uVar26 = (ulong)((uint)uVar19 & 7);
                if (7 < uVar19) {
                  uVar19 = uVar19 & 0xfffffffffffffff8;
                  do {
                    puVar28 = (uint7 *)(((((((((long)puVar28 * 0x100000001b3 ^ (ulong)*pbVar33) *
                                              0x100000001b3 ^ (ulong)pbVar33[1]) * 0x100000001b3 ^
                                            (ulong)pbVar33[2]) * 0x100000001b3 ^ (ulong)pbVar33[3])
                                           * 0x100000001b3 ^ (ulong)pbVar33[4]) * 0x100000001b3 ^
                                         (ulong)pbVar33[5]) * 0x100000001b3 ^ (ulong)pbVar33[6]) *
                                        0x100000001b3 ^ (ulong)pbVar33[7]);
                    pbVar33 = pbVar33 + 8;
                    uVar19 = uVar19 - 8;
                  } while (uVar19 != 0);
                }
                if (uVar26 != 0) {
                  uVar19 = 0;
                  do {
                    puVar28 = (uint7 *)((long)puVar28 * 0x100000001b3 ^ (ulong)pbVar33[uVar19]);
                    uVar19 = uVar19 + 1;
                  } while (uVar26 != uVar19);
                }
              }
            }
            uStack_4c8 = puVar28;
            func_0x0ca011b0(&bStack_5b8,pbStack_5d0,&uStack_4c8,uStack_308);
            if ((bStack_5b0 & 1) == 0) {
              plStack_198 = (long *)CONCAT71(uStack_59f,uStack_5a0);
              auStack_1a8 = (undefined1  [8])CONCAT71(uStack_5af,bStack_5b0);
              uStack_1a0 = CONCAT71(uStack_5a7,cStack_5a8);
joined_r0x0ca02895:
              if (((ulong)uStack_4c0 & 1) != 0) goto LAB_0ca025f7;
LAB_0ca0264e:
              plVar27 = plStack_f8;
              if (plStack_f8 != (long *)0x0) goto LAB_0ca0265f;
LAB_0ca028ee:
              if (cVar10 != '\x06') {
                if ((int)uStack_5c0 != 0) {
                  func_0x0c403130(&uStack_4c8,lStack_4e0);
                  cVar10 = func_0x0d678aa0(plStack_300);
                  if (cVar10 == '\0') {
                    if ((byte)pbStack_4b0 != 1) {
LAB_0ca02b59:
                      bVar12 = (byte)pbStack_4b0;
                      if (((byte)pbStack_4b0 & 1) != 0) {
                        func_0x0ee34300(auStack_2c8,&uStack_4c8);
                        pbVar33 = (byte *)(ulong)(bStack_350 >> 1);
                        puVar29 = &uStack_34f;
                        if ((bStack_350 & 1) != 0) {
                          pbVar33 = pbStack_348;
                          puVar29 = puStack_340;
                        }
                        bVar35 = (auStack_2c8[0] & 1) != 0;
                        puVar18 = auStack_2c8 + 1;
                        if (bVar35) {
                          puVar18 = puStack_2b8;
                        }
                        uVar19 = (ulong)(auStack_2c8[0] >> 1);
                        if (bVar35) {
                          uVar19 = auStack_2c8._8_8_;
                        }
                        bStack_5b8 = (byte)puVar29;
                        uStack_5b7 = (byte)((ulong)puVar29 >> 8);
                        sStack_5b6 = (short)((ulong)puVar29 >> 0x10);
                        sStack_5b4 = (short)((ulong)puVar29 >> 0x20);
                        uStack_5b2 = (undefined2)((ulong)puVar29 >> 0x30);
                        bStack_5b0 = (byte)pbVar33;
                        uStack_5af = (uint7)((ulong)pbVar33 >> 8);
                        cStack_5a8 = (char)puVar18;
                        uStack_5a7 = (uint7)((ulong)puVar18 >> 8);
                        uStack_5a0 = (undefined1)uVar19;
                        uStack_59f = (undefined7)(uVar19 >> 8);
                        func_0x0470d9a0(&uStack_278,&UNK_014a5404,0x36,0xdd,&bStack_5b8);
                        uStack_2f8 = uStack_268;
                        if (((ulong)uStack_278 & 1) == 0) {
                          uStack_2f8 = (long)&uStack_278 + 1;
                        }
                        func_0x09adffe0(1,3,0x10,&uStack_2f8);
                        if (((ulong)uStack_278 & 1) != 0) {
                          func_0x0412a280(uStack_268,(ulong)uStack_278 & 0xfffffffffffffffe);
                        }
                        if ((auStack_2c8[0] & 1) != 0) {
                          func_0x0412a280(puStack_2b8,auStack_2c8._0_8_ & 0xfffffffffffffffe);
                        }
                        bVar12 = (byte)pbStack_4b0;
                      }
                      plStack_5c8 = (long *)0x0;
                      if ((bVar12 & 1) == 0) goto joined_r0x0ca0376d;
                      FUN_0ee386e0(&uStack_4b8);
                      FUN_0ee386e0(&uStack_4c0);
                      goto joined_r0x0ca0375e;
                    }
                    cVar10 = func_0x04fa7a10(auStack_1c8,&uStack_4c8);
                    if (cVar10 != '\0') {
                      goto LAB_0ca02b59;
                    }
                  }
                  if ((byte)pbStack_4b0 == '\x01') {
                    if ((uStack_4b8 & 0x80000000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,(uStack_4b8 & 0xff00ffffffffffff) - 8);
                    }
                    uStack_4b8 = 0;
                    if (((ulong)uStack_4c0 & 0x80000000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,((ulong)uStack_4c0 & 0xff00ffffffffffff) - 8);
                    }
                  }
                }
                if ((char)uStack_4f8 == '\0') {
                  if ((bStack_338 & 1) == 0) {
                    uStack_330 = (ulong)(bStack_338 >> 1);
                  }
                  if (uStack_330 == 9) {
                    if ((bStack_338 & 1) != 0) {
                      puStack_500 = puStack_328;
                    }
                    if ((byte)puStack_500[1] == 0x74 && *(long *)puStack_500 == 0x66617263656e696d)
                    {
                      func_0x0ee25150(&bStack_5b8,auStack_1a8);
                      lVar22 = func_0x0ca3e6d0(*(undefined8 *)(piStack_4d0 + 0x18),
                                               *(undefined8 *)(piStack_4d0 + 0x1a),&bStack_5b8);
                      if (lVar22 == 0) {
                        uVar19 = 0;
                      }
                      else {
                        uVar19 = (ulong)*(uint *)(lVar22 + 0x38) | 0x100000000;
                      }
                      if ((bStack_5b0 & 1) != 0) {
                        func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                                        CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
                      }
                      if ((uVar19 & 0x100000000) == 0) {
                        if ((int)uStack_5c0 == 0) {
                          uStack_4f8 = (ulong)uStack_4f8._4_4_ << 0x20;
                          goto LAB_0ca054f7;
                        }
LAB_0ca0388d:
                        func_0x0ee34300(&uStack_278,auStack_1c8);
                        pbVar33 = (byte *)(ulong)(bStack_350 >> 1);
                        puVar29 = &uStack_34f;
                        if ((bStack_350 & 1) != 0) {
                          pbVar33 = pbStack_348;
                          puVar29 = puStack_340;
                        }
                        uVar26 = (ulong)uStack_278 >> 1 & 0x7f;
                        uVar19 = (long)&uStack_278 + 1;
                        if (((ulong)uStack_278 & 1) != 0) {
                          uVar26 = uStack_270;
                          uVar19 = uStack_268;
                        }
                        bStack_5b8 = (byte)puVar29;
                        uStack_5b7 = (byte)((ulong)puVar29 >> 8);
                        sStack_5b6 = (short)((ulong)puVar29 >> 0x10);
                        sStack_5b4 = (short)((ulong)puVar29 >> 0x20);
                        uStack_5b2 = (undefined2)((ulong)puVar29 >> 0x30);
                        bStack_5b0 = (byte)pbVar33;
                        uStack_5af = (uint7)((ulong)pbVar33 >> 8);
                        cStack_5a8 = (char)uVar19;
                        uStack_5a7 = (uint7)(uVar19 >> 8);
                        uStack_5a0 = (undefined1)uVar26;
                        uStack_59f = (undefined7)(uVar26 >> 8);
                        func_0x0470d9a0(&uStack_4c8,&UNK_011ff2a2,0x67,0xdd,&bStack_5b8);
                        uVar19 = uStack_4b8;
                        if (((ulong)uStack_4c8 & 1) == 0) {
                          uVar19 = (long)&uStack_4c8 + 1;
                        }
                        auStack_2c8._0_8_ = uVar19;
                        func_0x09adffe0(1,3,0x10,auStack_2c8);
LAB_0ca0571d:
                        if (((ulong)uStack_4c8 & 1) != 0) {
                          func_0x0412a280(uStack_4b8,(ulong)uStack_4c8 & 0xfffffffffffffffe);
                        }
                        puVar29 = uStack_278;
                        uVar19 = uStack_268;
                        if (((ulong)uStack_278 & 1) == 0) goto joined_r0x0ca0376d;
                        goto LAB_0ca030b6;
                      }
                      uStack_4f8 = CONCAT44(uStack_4f8._4_4_,
                                            (int)CONCAT71(0x1000000,(int)uVar19 != 0));
                      if ((int)uStack_5c0 == 0) {
LAB_0ca054f7:
                        func_0x0ee25150(&bStack_5b8,auStack_1a8);
                        lVar22 = func_0x0ca40030(*(undefined8 *)(pbStack_5d0 + 0x298),
                                                 *(undefined8 *)(pbStack_5d0 + 0x2a0),&bStack_5b8);
                        if ((bStack_5b0 & 1) != 0) {
                          func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                                          CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
                        }
                        if ((uVar19 & 0x100000000) == 0 && lVar22 == 0) {
                          uStack_4c0 = (byte *)(ulong)(bStack_350 >> 1);
                          uStack_4c8 = &uStack_34f;
                          if ((bStack_350 & 1) != 0) {
                            uStack_4c0 = pbStack_348;
                            uStack_4c8 = puStack_340;
                          }
                          func_0x0470d9a0(&bStack_5b8,&UNK_013a2479,0x44,0xd,&uStack_4c8);
                          if ((bStack_5b8 & 1) == 0) {
                            uStack_278 = (uint7 *)&uStack_5b7;
                          }
                          else {
                            uStack_278 = (uint7 *)CONCAT71(uStack_5a7,cStack_5a8);
                          }
                          func_0x09adffe0(1,3,0x10,&uStack_278);
                          goto LAB_0ca030a5;
                        }
                        if ((lVar22 == 0) && ((char)uStack_4f8 == '\x01')) {
                          func_0x0ee34300(&uStack_278,auStack_1c8);
                          pbVar33 = (byte *)(ulong)(bStack_350 >> 1);
                          puVar29 = &uStack_34f;
                          if ((bStack_350 & 1) != 0) {
                            pbVar33 = pbStack_348;
                            puVar29 = puStack_340;
                          }
                          uVar26 = (ulong)uStack_278 >> 1 & 0x7f;
                          uVar19 = (long)&uStack_278 + 1;
                          if (((ulong)uStack_278 & 1) != 0) {
                            uVar26 = uStack_270;
                            uVar19 = uStack_268;
                          }
                          bStack_5b8 = (byte)puVar29;
                          uStack_5b7 = (byte)((ulong)puVar29 >> 8);
                          sStack_5b6 = (short)((ulong)puVar29 >> 0x10);
                          sStack_5b4 = (short)((ulong)puVar29 >> 0x20);
                          uStack_5b2 = (undefined2)((ulong)puVar29 >> 0x30);
                          bStack_5b0 = (byte)pbVar33;
                          uStack_5af = (uint7)((ulong)pbVar33 >> 8);
                          cStack_5a8 = (char)uVar19;
                          uStack_5a7 = (uint7)(uVar19 >> 8);
                          uStack_5a0 = (undefined1)uVar26;
                          uStack_59f = (undefined7)(uVar26 >> 8);
                          func_0x0470d9a0(&uStack_4c8,&UNK_0124f539,0x77,0xdd,&bStack_5b8);
                          uVar19 = uStack_4b8;
                          if (((ulong)uStack_4c8 & 1) == 0) {
                            uVar19 = (long)&uStack_4c8 + 1;
                          }
                          auStack_2c8._0_8_ = uVar19;
                          func_0x09adffe0(1,3,0x10,auStack_2c8);
                          goto LAB_0ca0571d;
                        }
                      }
                      else if ((int)uVar19 == 0) goto LAB_0ca0388d;
                    }
                  }
                }
                if ((plVar27 != (long *)0x0) && (*plVar27 != 0)) goto LAB_0ca03aef;
                bStack_5b8 = 0;
                uStack_5b7 = 0;
                sStack_5b6 = 0;
                sStack_5b4 = 0;
                uStack_5b2 = 0;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  uStack_5a0 = SUB81(plStack_198,0);
                  uStack_59f = (undefined7)((ulong)plStack_198 >> 8);
                  bStack_5b0 = auStack_1a8[0];
                  uStack_5af = auStack_1a8._1_7_;
                  cStack_5a8 = (char)uStack_1a0;
                  uStack_5a7 = (uint7)((ulong)uStack_1a0 >> 8);
                }
                else {
                  func_0x0412e5e0(&bStack_5b0,plStack_198,uStack_1a0);
                }
                plStack_598 = (long *)0x0;
                if ((bStack_5b0 & 1) == 0) {
                  uVar19 = (ulong)(bStack_5b0 >> 1);
                }
                else {
                  uVar19 = CONCAT71(uStack_5a7,cStack_5a8);
                }
                if (uVar19 != 0) {
                  if ((bStack_5b0 & 1) != 0) {
                    puVar29 = (uint7 *)CONCAT71(uStack_59f,uStack_5a0);
                  }
                  if ((puVar29 != (uint7 *)0x0) && ((byte)*puVar29 != 0)) {
                    uVar26 = 0xcbf29ce484222325;
                    uVar19 = func_0x0eee2e90(puVar29);
                    if (uVar19 != 0) {
                      uVar17 = (ulong)((uint)uVar19 & 7);
                      if (7 < uVar19) {
                        uVar19 = uVar19 & 0xfffffffffffffff8;
                        do {
                          uVar26 = (((((((uVar26 * 0x100000001b3 ^ (ulong)(byte)*puVar29) *
                                         0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 1)) *
                                        0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 2)) *
                                       0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 3)) *
                                      0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 4)) *
                                     0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 5)) *
                                    0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 6)) *
                                   0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + 7);
                          puVar29 = puVar29 + 1;
                          uVar19 = uVar19 - 8;
                        } while (uVar19 != 0);
                      }
                      if (uVar17 != 0) {
                        uVar19 = 0;
                        do {
                          uVar26 = uVar26 * 0x100000001b3 ^ (ulong)*(byte *)((long)puVar29 + uVar19)
                          ;
                          uVar19 = uVar19 + 1;
                        } while (uVar17 != uVar19);
                      }
                    }
                    goto LAB_0ca02e61;
                  }
                }
                uVar26 = 0;
LAB_0ca02e61:
                bStack_5b8 = (byte)uVar26;
                uStack_5b7 = (byte)(uVar26 >> 8);
                sStack_5b6 = (short)(uVar26 >> 0x10);
                sStack_5b4 = (short)(uVar26 >> 0x20);
                uStack_5b2 = (undefined2)(uVar26 >> 0x30);
                if ((int)uStack_5c0 != 0) {
                  lVar22 = func_0x0ca40030(*(undefined8 *)(pbStack_5d0 + 0x298),
                                           *(undefined8 *)(pbStack_5d0 + 0x2a0),&bStack_5b8);
                  if (((lVar22 != 0) &&
                      (plVar32 = *(long **)(lVar22 + 0x38), plVar32 != (long *)0x0)) &&
                     (*plVar32 != 0)) {
                    plVar20 = (long *)(lVar22 + 0x38);
                    plVar21 = *(long **)(pbStack_5d0 + 0x280);
                    if (plVar21 < *(long **)(pbStack_5d0 + 0x288)) {
                      *plVar21 = (long)plVar32;
                      LOCK();
                      *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                      UNLOCK();
                      plVar21 = plVar21 + 1;
                    }
                    else {
                      plVar21 = (long *)func_0x04a21e80(pbStack_5d0 + 0x278,plVar20);
                    }
                    *(long **)(pbStack_5d0 + 0x280) = plVar21;
                    plVar32 = (long *)*plVar20;
                    if (plVar32 != (long *)0x0) {
                      LOCK();
                      *(int *)(plVar32 + 1) = (int)plVar32[1] + -1;
                      UNLOCK();
                      if ((int)plVar32[1] < 1) {
                        plVar21 = (long *)*plVar32;
                        if (plVar21 != (long *)0x0) {
                          *plVar32 = 0;
                          (**(code **)(*plVar21 + 8))();
                        }
                        if ((*(int *)((long)plVar32 + 0xc) < 1) && (*plVar20 != 0)) {
                          func_0x0412a280(*plVar20,0x10);
                        }
                      }
                      *plVar20 = 0;
                    }
                  }
                  *(short *)(pbStack_5d0 + 0x1b8) = *(short *)(pbStack_5d0 + 0x1b8) + 1;
                  func_0x0ca003c0(&uStack_4c8,pbStack_5d0,&bStack_5b8,pbStack_5d0 + 0x1b8,lStack_4e0
                                 );
                  auStack_2c8._0_8_ = uStack_4c8;
                  if (uStack_4c8 == (uint7 *)0x0) goto LAB_0ca03a35;
                  LOCK();
                  *(int *)((long)uStack_4c8 + 0xc) = *(int *)((long)uStack_4c8 + 0xc) + 1;
                  UNLOCK();
                  goto LAB_0ca03a00;
                }
                lVar22 = func_0x0ca40030(*(undefined8 *)(pbStack_5d0 + 0x298),
                                         *(undefined8 *)(pbStack_5d0 + 0x2a0),&bStack_5b8);
                if (((lVar22 != 0) &&
                    (puVar29 = *(uint7 **)(lVar22 + 0x38), puVar29 != (uint7 *)0x0)) &&
                   (*(long *)puVar29 != 0)) {
                  LOCK();
                  *(int *)(puVar29 + 1) = (int)puVar29[1] + 1;
                  UNLOCK();
                  plVar32 = *(long **)(lVar22 + 0x38);
                  uStack_4c8 = puVar29;
                  if (plVar32 != (long *)0x0) {
                    LOCK();
                    *(int *)(plVar32 + 1) = (int)plVar32[1] + -1;
                    UNLOCK();
                    if ((int)plVar32[1] < 1) {
                      plVar21 = (long *)*plVar32;
                      if (plVar21 != (long *)0x0) {
                        *plVar32 = 0;
                        (**(code **)(*plVar21 + 8))();
                      }
                      if ((*(int *)((long)plVar32 + 0xc) < 1) && (*(long *)(lVar22 + 0x38) != 0)) {
                        func_0x0412a280(*(long *)(lVar22 + 0x38),0x10);
                      }
                    }
                    *(undefined8 *)(lVar22 + 0x38) = 0;
                  }
                  uStack_278 = uStack_4c8;
                  if (uStack_4c8 != (uint7 *)0x0) {
                    LOCK();
                    *(int *)(uStack_4c8 + 1) = (int)uStack_4c8[1] + 1;
                    UNLOCK();
                  }
                  func_0x0c9fdfc0(pbStack_5d0,&uStack_278);
                  puVar29 = uStack_278;
                  if (uStack_278 != (uint7 *)0x0) {
                    LOCK();
                    *(int *)(uStack_278 + 1) = (int)uStack_278[1] + -1;
                    UNLOCK();
                    if ((int)uStack_278[1] < 1) {
                      plVar32 = *(long **)uStack_278;
                      if (plVar32 != (long *)0x0) {
                        *(long *)uStack_278 = 0;
                        (**(code **)(*plVar32 + 8))();
                      }
                      if ((*(int *)((long)puVar29 + 0xc) < 1) && (uStack_278 != (uint7 *)0x0)) {
                        func_0x0412a280(uStack_278,0x10);
                      }
                    }
                    uStack_278 = (uint7 *)0x0;
                  }
                  puVar29 = uStack_4c8;
                  auStack_2c8._0_8_ = uStack_4c8;
                  if (uStack_4c8 == (uint7 *)0x0) goto LAB_0ca03157;
                  LOCK();
                  *(int *)((long)uStack_4c8 + 0xc) = *(int *)((long)uStack_4c8 + 0xc) + 1;
                  UNLOCK();
                  if (uStack_4c8 == (uint7 *)0x0) goto LAB_0ca03157;
                  LOCK();
                  *(int *)(uStack_4c8 + 1) = (int)uStack_4c8[1] + -1;
                  UNLOCK();
                  if (0 < (int)uStack_4c8[1]) goto LAB_0ca03157;
                  plVar32 = *(long **)uStack_4c8;
                  if (plVar32 != (long *)0x0) {
                    *(long *)uStack_4c8 = 0;
                    (**(code **)(*plVar32 + 8))();
                  }
                  if (0 < *(int *)((long)puVar29 + 0xc)) goto LAB_0ca03157;
                  if (uStack_4c8 == (uint7 *)0x0) goto LAB_0ca03157;
                  func_0x0412a280(uStack_4c8,0x10);
                  goto LAB_0ca03157;
                }
                if (DAT_0f6e2da8 == '\0') goto LAB_0ca05788;
                goto LAB_0ca0313b;
              }
              uStack_4c0 = (byte *)(ulong)(bStack_350 >> 1);
              uStack_4c8 = &uStack_34f;
              if ((bStack_350 & 1) != 0) {
                uStack_4c0 = pbStack_348;
                uStack_4c8 = puStack_340;
              }
              func_0x0470d9a0(&bStack_5b8,&UNK_0146fe97,0x5e,0xd,&uStack_4c8);
              if ((bStack_5b8 & 1) == 0) {
                uStack_278 = (uint7 *)&uStack_5b7;
              }
              else {
                uStack_278 = (uint7 *)CONCAT71(uStack_5a7,cStack_5a8);
              }
              func_0x09adffe0(1,3,0x10,&uStack_278);
            }
            else {
              func_0x0412e5e0(auStack_1a8,CONCAT71(uStack_59f,uStack_5a0),
                              CONCAT71(uStack_5a7,cStack_5a8));
              if ((bStack_5b0 & 1) != 0) {
                func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                                CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
                goto joined_r0x0ca02895;
              }
              if (((ulong)uStack_4c0 & 1) == 0) goto LAB_0ca0264e;
LAB_0ca025f7:
              func_0x0412a280(pbStack_4b0,(ulong)uStack_4c0 & 0xfffffffffffffffe);
              plVar27 = plStack_f8;
              if (plStack_f8 == (long *)0x0) goto LAB_0ca028ee;
LAB_0ca0265f:
              plVar27 = plStack_f8;
              if (*plStack_f8 == 0) goto LAB_0ca028ee;
              lVar22 = func_0x06cfb940(piStack_4e8,auStack_1a8);
              if (lVar22 == 0) {
                if ((long *)*plVar27 == (long *)0x0) goto LAB_0ca057c7;
                cVar11 = (**(code **)(*(long *)*plVar27 + 0x50))();
                if (cVar11 != (byte)uStack_5c0) goto joined_r0x0ca0376d;
                if (*plVar27 != 0) goto LAB_0ca03aef;
                goto LAB_0ca028ee;
              }
              if ((char)uStack_4f8 != '\0') goto joined_r0x0ca0376d;
              uStack_4c0 = (byte *)(ulong)(bStack_350 >> 1);
              uStack_4c8 = &uStack_34f;
              if ((bStack_350 & 1) != 0) {
                uStack_4c0 = pbStack_348;
                uStack_4c8 = puStack_340;
              }
              func_0x0470d9a0(&bStack_5b8,&UNK_013bcdd2,0x49,0xd,&uStack_4c8);
              if ((bStack_5b8 & 1) == 0) {
                uStack_278 = (uint7 *)&uStack_5b7;
              }
              else {
                uStack_278 = (uint7 *)CONCAT71(uStack_5a7,cStack_5a8);
              }
              func_0x09adffe0(1,2,0x10,&uStack_278);
            }
LAB_0ca030a5:
            if ((bStack_5b8 & 1) == 0) goto joined_r0x0ca0376d;
            puVar29 = (uint7 *)CONCAT26(uStack_5b2,
                                        CONCAT24(sStack_5b4,
                                                 CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8)
                                                         )));
            uVar19 = CONCAT71(uStack_5a7,cStack_5a8);
LAB_0ca030b6:
            func_0x0412a280(uVar19,(ulong)puVar29 & 0xfffffffffffffffe);
            goto joined_r0x0ca0376d;
          }
          puStack_500 = (uint7 *)CONCAT44(puStack_500._4_4_,*piStack_4d0);
          func_0x0ee252c0(&bStack_5b8,puVar29,pbVar33);
          bVar35 = (bStack_5b0 & 1) != 0;
          puVar28 = &uStack_5af;
          if (bVar35) {
            puVar28 = (uint7 *)CONCAT71(uStack_59f,uStack_5a0);
          }
          uStack_4c8 = (uint7 *)((ulong)uStack_4c8 & 0xffffffff00000000);
          uVar19 = (ulong)(bStack_5b0 >> 1);
          if (bVar35) {
            uVar19 = CONCAT71(uStack_5a7,cStack_5a8);
          }
          func_0x0ca0c260(auStack_2c8,pbStack_5d0,&uStack_4c8,puVar28,uVar19);
          if ((bStack_5b0 & 1) != 0) {
            func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                            CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
          }
          func_0x0ee252c0(&uStack_4c8,puVar29,pbVar33);
          func_0x0ca011b0(&bStack_5b8,pbStack_5d0,&uStack_4c8,uStack_308);
          if ((bStack_5b0 & 1) == 0) {
            auStack_400._9_7_ = uStack_59f;
            auStack_400[8] = uStack_5a0;
            pbStack_408 = (byte *)CONCAT71(uStack_5af,bStack_5b0);
            auStack_400._1_7_ = uStack_5a7;
            auStack_400[0] = cStack_5a8;
joined_r0x0ca028bb:
            if (((ulong)uStack_4c0 & 1) != 0) goto LAB_0ca02252;
LAB_0ca0272e:
            plVar27 = (long *)auStack_2c8._0_8_;
            if ((long *)auStack_2c8._0_8_ != (long *)0x0) goto LAB_0ca02743;
LAB_0ca02a56:
            if (cVar10 == '\x06') {
              uStack_4c8 = puVar29;
              uStack_4c0 = pbVar33;
              func_0x0470d9a0(&bStack_5b8,&UNK_0146fe97,0x5e,0xd,&uStack_4c8);
              if ((bStack_5b8 & 1) == 0) {
                auStack_1a8 = (undefined1  [8])&uStack_5b7;
              }
              else {
                auStack_1a8 = (undefined1  [8])CONCAT71(uStack_5a7,cStack_5a8);
              }
              func_0x09adffe0(1,3,0x10,auStack_1a8);
LAB_0ca03b60:
              if ((bStack_5b8 & 1) != 0) {
                func_0x0412a280(CONCAT71(uStack_5a7,cStack_5a8),
                                CONCAT26(uStack_5b2,
                                         CONCAT24(sStack_5b4,
                                                  CONCAT22(sStack_5b6,
                                                           CONCAT11(uStack_5b7,bStack_5b8)))) &
                                0xfffffffffffffffe);
              }
LAB_0ca03b7a:
              plStack_5c8 = (long *)0x0;
              goto LAB_0ca03b83;
            }
            if ((bStack_338 & 1) == 0) {
              uStack_330 = (ulong)(bStack_338 >> 1);
            }
            if (uStack_330 == 9) {
              puVar28 = puStack_328;
              if ((bStack_338 & 1) == 0) {
                puVar28 = &uStack_337;
              }
              if (((byte)puVar28[1] == 0x74 && *(long *)puVar28 == 0x66617263656e696d) &&
                  (uStack_4f8 & 1) == 0) {
                if ((int)puStack_500 == 1) {
                  func_0x04907e30(piVar9 + 0xe,&pbStack_408);
                }
                else if ((int)puStack_500 == 0) {
                  uStack_4c8 = puVar29;
                  uStack_4c0 = pbVar33;
                  func_0x0470d9a0(&bStack_5b8,&UNK_013a2479,0x44,0xd,&uStack_4c8);
                  if ((bStack_5b8 & 1) == 0) {
                    auStack_1a8 = (undefined1  [8])&uStack_5b7;
                  }
                  else {
                    auStack_1a8 = (undefined1  [8])CONCAT71(uStack_5a7,cStack_5a8);
                  }
                  func_0x09adffe0(1,3,0x10,auStack_1a8);
                  goto LAB_0ca03b60;
                }
              }
            }
            func_0x0c403130(&uStack_4c8,lStack_4e0);
            cVar10 = func_0x0d678aa0(plStack_300);
            if (cVar10 == '\0') {
              bVar12 = 1;
              if ((byte)pbStack_4b0 == '\x01') {
                bVar12 = func_0x04fa7a10(auStack_1c8,&uStack_4c8);
              }
              if (((byte)uStack_5c0 & bVar12) == 0) goto LAB_0ca0341d;
              if ((byte)pbStack_4b0 == '\x01') {
                func_0x0ee34300(&uStack_278,&uStack_4c8);
                uVar26 = (ulong)uStack_278 >> 1 & 0x7f;
                uVar19 = (long)&uStack_278 + 1;
                if (((ulong)uStack_278 & 1) != 0) {
                  uVar26 = uStack_270;
                  uVar19 = uStack_268;
                }
                bStack_5b8 = (byte)puVar29;
                uStack_5b7 = (byte)((ulong)puVar29 >> 8);
                sStack_5b6 = (short)((ulong)puVar29 >> 0x10);
                sStack_5b4 = (short)((ulong)puVar29 >> 0x20);
                uStack_5b2 = (undefined2)((ulong)puVar29 >> 0x30);
                bStack_5b0 = (byte)pbVar33;
                uStack_5af = (uint7)((ulong)pbVar33 >> 8);
                cStack_5a8 = (char)uVar19;
                uStack_5a7 = (uint7)(uVar19 >> 8);
                uStack_5a0 = (undefined1)uVar26;
                uStack_59f = (undefined7)(uVar26 >> 8);
                func_0x0470d9a0(auStack_1a8,&UNK_014a5404,0x36,0xdd,&bStack_5b8);
                plStack_f8 = plStack_198;
                if (((ulong)auStack_1a8 & 1) == 0) {
                  plStack_f8 = (long *)(auStack_1a8 + 1);
                }
                func_0x09adffe0(1,3,0x10,&plStack_f8);
                if (((ulong)auStack_1a8 & 1) != 0) {
                  func_0x0412a280(plStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
                }
                puVar29 = uStack_278;
                uStack_b0 = uStack_268;
                if (((ulong)uStack_278 & 1) == 0) goto LAB_0ca03590;
                goto LAB_0ca03587;
              }
            }
            else {
LAB_0ca0341d:
              if ((int)uStack_5c0 == 0) {
                func_0x0ee252c0(auStack_c8,puVar29,pbVar33);
                *(short *)(pbStack_5d0 + 0x1b8) = *(short *)(pbStack_5d0 + 0x1b8) + 1;
                func_0x0c40b510(&bStack_5b8,pbStack_5d0,auStack_c8,pbStack_5d0 + 0x1b8);
LAB_0ca034b7:
                lVar22 = CONCAT26(uStack_5b2,
                                  CONCAT24(sStack_5b4,
                                           CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8))));
                if (lVar22 == 0) goto LAB_0ca034c7;
                LOCK();
                *(int *)(lVar22 + 0xc) = *(int *)(lVar22 + 0xc) + 1;
                UNLOCK();
              }
              else {
                func_0x0ee252c0(auStack_c8,puVar29,pbVar33);
                *(short *)(pbStack_5d0 + 0x1b8) = *(short *)(pbStack_5d0 + 0x1b8) + 1;
                func_0x0ca003c0(&plStack_1b0,pbStack_5d0,auStack_c8,pbStack_5d0 + 0x1b8,lStack_4e0);
                bStack_5b8 = (byte)plStack_1b0;
                uStack_5b7 = (byte)((ulong)plStack_1b0 >> 8);
                sStack_5b6 = (short)((ulong)plStack_1b0 >> 0x10);
                sStack_5b4 = (short)((ulong)plStack_1b0 >> 0x20);
                uStack_5b2 = (undefined2)((ulong)plStack_1b0 >> 0x30);
                if (plStack_1b0 != (long *)0x0) {
                  LOCK();
                  *(int *)((long)plStack_1b0 + 0xc) = *(int *)((long)plStack_1b0 + 0xc) + 1;
                  UNLOCK();
                  goto LAB_0ca034b7;
                }
LAB_0ca034c7:
                lVar22 = 0;
              }
              uVar24 = auStack_2c8._0_8_;
              auStack_2c8._0_8_ = lVar22;
              if ((long *)uVar24 != (long *)0x0) {
                LOCK();
                *(int *)(uVar24 + 0xc) = *(int *)(uVar24 + 0xc) + -1;
                UNLOCK();
                if ((*(int *)(uVar24 + 0xc) < 1) && (*(long *)uVar24 == 0)) {
                  func_0x0412a280(uVar24,0x10);
                }
              }
              plVar27 = (long *)CONCAT26(uStack_5b2,
                                         CONCAT24(sStack_5b4,
                                                  CONCAT22(sStack_5b6,
                                                           CONCAT11(uStack_5b7,bStack_5b8))));
              if (plVar27 != (long *)0x0) {
                LOCK();
                *(int *)((long)plVar27 + 0xc) = *(int *)((long)plVar27 + 0xc) + -1;
                UNLOCK();
                if (((*(int *)((long)plVar27 + 0xc) < 1) && (*plVar27 == 0)) &&
                   (lVar22 = CONCAT26(uStack_5b2,
                                      CONCAT24(sStack_5b4,
                                               CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8)))
                                     ), lVar22 != 0)) {
                  func_0x0412a280(lVar22,0x10);
                }
                bStack_5b8 = 0;
                uStack_5b7 = 0;
                sStack_5b6 = 0;
                sStack_5b4 = 0;
                uStack_5b2 = 0;
              }
              if (((int)uStack_5c0 != 0) && (plStack_1b0 != (long *)0x0)) {
                LOCK();
                *(int *)((long)plStack_1b0 + 0xc) = *(int *)((long)plStack_1b0 + 0xc) + -1;
                UNLOCK();
                if ((*(int *)((long)plStack_1b0 + 0xc) < 1) &&
                   ((*plStack_1b0 == 0 && (plStack_1b0 != (long *)0x0)))) {
                  func_0x0412a280(plStack_1b0,0x10);
                }
              }
              if ((bStack_c0 & 1) != 0) {
                puVar29 = (uint7 *)CONCAT71(uStack_bf,bStack_c0);
LAB_0ca03587:
                func_0x0412a280(uStack_b0,(ulong)puVar29 & 0xfffffffffffffffe);
              }
            }
LAB_0ca03590:
            if ((byte)pbStack_4b0 == '\x01') {
              if ((uStack_4b8 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_4b8 & 0xff00ffffffffffff) - 8);
              }
              uStack_4b8 = 0;
              if (((ulong)uStack_4c0 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)uStack_4c0 & 0xff00ffffffffffff) - 8);
              }
            }
            if ((long *)auStack_2c8._0_8_ == (long *)0x0) {
              plVar27 = (long *)0x0;
            }
            else {
              plVar32 = *(long **)auStack_2c8._0_8_;
              plVar27 = (long *)auStack_2c8._0_8_;
              if (plVar32 != (long *)0x0) goto LAB_0ca03605;
            }
          }
          else {
            func_0x0412e5e0(&pbStack_408,CONCAT71(uStack_59f,uStack_5a0),
                            CONCAT71(uStack_5a7,cStack_5a8));
            if ((bStack_5b0 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                              CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
              goto joined_r0x0ca028bb;
            }
            if (((ulong)uStack_4c0 & 1) == 0) goto LAB_0ca0272e;
LAB_0ca02252:
            func_0x0412a280(pbStack_4b0,(ulong)uStack_4c0 & 0xfffffffffffffffe);
            plVar27 = (long *)auStack_2c8._0_8_;
            if ((long *)auStack_2c8._0_8_ == (long *)0x0) goto LAB_0ca02a56;
LAB_0ca02743:
            piVar34 = piVar9 + 0xe;
            if (*plVar27 == 0) goto LAB_0ca02a56;
            if ((((char)uStack_4f8 != '\0') &&
                (lVar22 = func_0x06cfb940(piVar34,&pbStack_408), lVar22 != 0)) &&
               (lVar22 = func_0x049216f0(piVar34,&pbStack_408), lVar22 != 0)) {
              func_0x064b2310(&bStack_5b8,piVar34,lVar22);
              lStack_a0 = CONCAT26(uStack_5b2,
                                   CONCAT24(sStack_5b4,
                                            CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8))));
              bStack_5b8 = 0;
              uStack_5b7 = 0;
              sStack_5b6 = 0;
              sStack_5b4 = 0;
              uStack_5b2 = 0;
              if (lStack_a0 != 0) {
                if ((cStack_5a8 == '\x01') && ((*(byte *)(lStack_a0 + 0x10) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lStack_a0 + 0x20),
                                  *(ulong *)(lStack_a0 + 0x10) & 0xfffffffffffffffe);
                }
                func_0x0412a280(lStack_a0,0x28);
              }
            }
            if (((int)puStack_500 == 1) ||
               (((int)puStack_500 == 0 &&
                (lVar22 = func_0x06cfb940(piStack_4e8,&pbStack_408), lVar22 != 0)))) {
              if ((char)uStack_4f8 == '\0') {
                uStack_4c8 = puVar29;
                uStack_4c0 = pbVar33;
                func_0x0470d9a0(&bStack_5b8,&UNK_013bcdd2,0x49,0xd,&uStack_4c8);
                if ((bStack_5b8 & 1) == 0) {
                  auStack_1a8 = (undefined1  [8])&uStack_5b7;
                }
                else {
                  auStack_1a8 = (undefined1  [8])CONCAT71(uStack_5a7,cStack_5a8);
                }
                func_0x09adffe0(1,2,0x10,auStack_1a8);
                goto LAB_0ca03b60;
              }
              goto LAB_0ca03b7a;
            }
            plVar32 = (long *)*plVar27;
            if (plVar32 == (long *)0x0) goto LAB_0ca02a56;
LAB_0ca03605:
            cVar10 = (**(code **)(*plVar32 + 0x50))();
            if (cVar10 == (byte)uStack_5c0) {
              func_0x04907e30(piStack_4e8,&pbStack_408);
              if (*plVar27 == 0) {
LAB_0ca057c7:
                uVar24 = func_0x04890760();
                if (((ulong)uStack_4c8 & 1) != 0) {
                  func_0x0412a280(uStack_4b8,(ulong)uStack_4c8 & 0xfffffffffffffffe);
                }
                if (((ulong)uStack_278 & 1) != 0) {
                  func_0x0412a280(uStack_268,(ulong)uStack_278 & 0xfffffffffffffffe);
                }
                if (((ulong)auStack_1a8 & 1) != 0) {
                  func_0x0412a280(plStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
                }
                if (((ulong)pbStack_408 & 1) != 0) {
                  func_0x0412a280(auStack_400._8_8_,(ulong)pbStack_408 & 0xfffffffffffffffe);
                }
                func_0x04963c80(&plStack_f8);
                func_0x0ca06cf0(&bStack_350);
                do {
                  FUN_0ee386e0(&uStack_1b8);
                  FUN_0ee386e0(&uStack_1c0);
                  uVar24 = func_0x0eee2d70(uVar24);
                } while( true );
              }
              *(int *)(*plVar27 + 8) = (int)uStack_5c0;
              LOCK();
              *(int *)((long)plVar27 + 0xc) = *(int *)((long)plVar27 + 0xc) + 1;
              UNLOCK();
              plStack_5c8 = plVar27;
LAB_0ca03b83:
              if (((ulong)pbStack_408 & 1) != 0) {
                func_0x0412a280(auStack_400._8_8_,(ulong)pbStack_408 & 0xfffffffffffffffe);
              }
              if ((long *)auStack_2c8._0_8_ == (long *)0x0) goto LAB_0ca03bdb;
              LOCK();
              *(int *)(auStack_2c8._0_8_ + 0xc) = *(int *)(auStack_2c8._0_8_ + 0xc) + -1;
              UNLOCK();
              if (0 < *(int *)(auStack_2c8._0_8_ + 0xc)) goto LAB_0ca03bdb;
              lVar22 = *(long *)auStack_2c8._0_8_;
              plVar27 = (long *)auStack_2c8._0_8_;
              do {
                if ((lVar22 == 0) && (plVar27 != (long *)0x0)) {
                  func_0x0412a280(plVar27,0x10);
                }
LAB_0ca03bdb:
                do {
                  do {
                    if (plStack_5c8 == (long *)0x0) goto LAB_0ca03cd3;
                    if (*plStack_5c8 == 0) {
                      LOCK();
                      *(int *)((long)plStack_5c8 + 0xc) = *(int *)((long)plStack_5c8 + 0xc) + -1;
                      UNLOCK();
                      if (((*(int *)((long)plStack_5c8 + 0xc) < 1) && (*plStack_5c8 == 0)) &&
                         (plStack_5c8 != (long *)0x0)) {
                        func_0x0412a280(plStack_5c8,0x10);
                      }
                      goto LAB_0ca03cd3;
                    }
                    uVar14 = func_0x0d8a1d70(auStack_1c8);
                    if (piStack_4d0[1] == 1) {
                      plVar27 = *(long **)(pbStack_5d0 + 0x20);
                      auStack_2f0 = *(undefined1 (*) [16])(pbStack_5d0 + 0x18);
                      if (plVar27 == (long *)0x0) {
                        uStack_2e0 = *(undefined8 *)(pbStack_5d0 + 0x28);
                        auStack_2f0._8_8_ = 0;
                        auStack_2f0._0_8_ = *(ulong *)*(undefined1 (*) [16])(pbStack_5d0 + 0x18);
                        goto LAB_0ca03e26;
                      }
                      LOCK();
                      plVar27[1] = plVar27[1] + 1;
                      UNLOCK();
                      uStack_2e0 = *(undefined8 *)(pbStack_5d0 + 0x28);
                      uStack_2f8 = CONCAT62(uStack_2f8._2_6_,uVar14);
                      LOCK();
                      plVar27[1] = plVar27[1] + 1;
                      UNLOCK();
                      piStack_4e8 = (int *)&uStack_2d8;
                      uStack_2d8 = 0;
                      uStack_2d0 = 0x100;
                      LOCK();
                      plVar32 = plVar27 + 1;
                      lVar22 = *plVar32;
                      *plVar32 = *plVar32 + -1;
                      UNLOCK();
                      if (lVar22 == 0) {
                        (**(code **)(*plVar27 + 0x10))(plVar27);
                        func_0x0412c2d0(plVar27);
                      }
                    }
                    else {
                      auStack_2f0 = (undefined1  [16])0x0;
                      uStack_2e0 = 0;
LAB_0ca03e26:
                      uStack_2f8 = CONCAT62(uStack_2f8._2_6_,uVar14);
                      piStack_4e8 = (int *)&uStack_2d8;
                      uStack_2d8 = 0;
                    }
                    plVar27 = plStack_4f0;
                    uStack_2d0 = CONCAT11((byte)((*(uint *)plStack_4f0[0x24] & 2) >> 1) |
                                          *(byte *)((long)plStack_4f0 + 0x159),1);
                    if (plStack_5c8 == (long *)0x0) {
                      puVar29 = (uint7 *)0x0;
                    }
                    else {
                      puVar29 = (uint7 *)*plStack_5c8;
                    }
                    lVar22 = *(long *)(pbStack_5d0 + 0x30);
                    lStack_4e0 = plStack_4f0[0x2c];
                    uStack_4f8 = *(ulong *)(pbStack_5d0 + 0x10);
                    uVar13 = (**(code **)(*(long *)puVar29 + 0x50))(puVar29);
                    bVar35 = ((byte)puVar29[0x1e] & 1) != 0;
                    pbStack_5d0 = (byte *)((long)puVar29 + 0xf1);
                    if (bVar35) {
                      pbStack_5d0 = *(byte **)(puVar29 + 0x20);
                    }
                    uStack_5c0 = (ulong)(byte)((byte)puVar29[0x1e] >> 1);
                    if (bVar35) {
                      uStack_5c0 = *(ulong *)(puVar29 + 0x1f);
                    }
                    (**(code **)(*plVar27 + 0x10))(&bStack_5b8,plVar27);
                    uVar19 = CONCAT71(uStack_5af,bStack_5b0);
                    if ((uStack_5af & 0x800000000000) == 0) {
                      if ((uStack_5af & 0x7f0000000000) == 0) goto LAB_0ca03f7e;
                      uVar26 = (ulong)((ushort)(uStack_5af >> 0x28) & 0x7f);
LAB_0ca03f44:
                      if (uVar26 != 4) goto LAB_0ca03f7e;
                      bVar35 = false;
                      if (((*(int *)(uVar19 & 0xff00ffffffffffff) == 0x61746562) &&
                          (bVar35 = false, CONCAT11(uStack_5b7,bStack_5b8) == 9999)) &&
                         (bVar35 = false, sStack_5b6 == 9999)) {
                        bVar35 = sStack_5b4 == 9999;
                      }
                    }
                    else {
                      uVar26 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
                      if (uVar26 != 0) goto LAB_0ca03f44;
LAB_0ca03f7e:
                      bVar35 = false;
                    }
                    puStack_500 = puVar29;
                    if ((uStack_5a7 & 0x800000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,
                                 (CONCAT71(uStack_5a7,cStack_5a8) & 0xff00ffffffffffff) - 8);
                      uVar19 = CONCAT71(uStack_5af,bStack_5b0);
                    }
                    cStack_5a8 = 0;
                    uStack_5a7 = 0;
                    if ((uStack_5af & 0x800000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,(uVar19 & 0xff00ffffffffffff) - 8);
                    }
                    pcStack_70 = &cStack_5d1;
                    uStack_60 = 1;
                    cStack_5d1 = bVar35;
                    lStack_78 = lVar22;
                    puStack_68 = &uStack_2f8;
                    (**(code **)(*plStack_4f0 + 0x10))(&bStack_5b8);
                    uVar15 = func_0x0551ca70(&bStack_5b8,&UNK_0f3eb890);
                    plVar27 = (long *)(ulong)uVar15;
                    if ((uStack_5a7 & 0x800000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,
                                 (CONCAT71(uStack_5a7,cStack_5a8) & 0xff00ffffffffffff) - 8);
                    }
                    cStack_5a8 = '\0';
                    uStack_5a7 = 0;
                    if ((uStack_5af & 0x800000000000) != 0) {
                      (**(code **)(_DAT_0f5463b0 + 0x28))
                                (&DAT_0f5463b0,
                                 (CONCAT71(uStack_5af,bStack_5b0) & 0xff00ffffffffffff) - 8);
                    }
                    if ((char)uVar15 != '\0') {
                      (**(code **)(*plStack_4f0 + 0x10))(&bStack_5b8);
                      uVar3 = CONCAT71(uStack_5a7,cStack_5a8);
                      cStack_5a8 = 0;
                      uStack_5a7 = 0;
                      puVar18 = *(undefined1 **)(lVar22 + 0xf0);
                      uVar19 = *(ulong *)(puVar18 + 0x10);
                      uVar24 = CONCAT71(uStack_5af,bStack_5b0);
                      bStack_5b0 = 0;
                      uStack_5af = 0;
                      *puVar18 = uVar13;
                      *(ulong *)(puVar18 + 8) =
                           CONCAT26(uStack_5b2,
                                    CONCAT24(sStack_5b4,
                                             CONCAT22(sStack_5b6,CONCAT11(uStack_5b7,bStack_5b8))));
                      *(undefined8 *)(puVar18 + 0x10) = uVar24;
                      uVar26 = *(ulong *)(puVar18 + 0x18);
                      *(undefined8 *)(puVar18 + 0x18) = uVar3;
                      *(ulong **)(puVar18 + 0x20) = &uStack_2f8;
                      *(long **)(puVar18 + 0x28) = plStack_300;
                      *(ulong *)(puVar18 + 0x30) = uStack_4f8;
                      if ((uVar26 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uVar26 & 0xff00ffffffffffff) - 8);
                      }
                      if ((uVar19 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uVar19 & 0xff00ffffffffffff) - 8);
                      }
                      if ((uStack_5a7 & 0x800000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,
                                   (CONCAT71(uStack_5a7,cStack_5a8) & 0xff00ffffffffffff) - 8);
                      }
                      cStack_5a8 = '\0';
                      uStack_5a7 = 0;
                      if ((uStack_5af & 0x800000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,
                                   (CONCAT71(uStack_5af,bStack_5b0) & 0xff00ffffffffffff) - 8);
                      }
                    }
                    if (cStack_5d1 == '\x01') {
                      plStack_f8 = (long *)CONCAT62(plStack_f8._2_6_,(undefined2)uStack_2f8);
                      auStack_f0._0_8_ = auStack_2f0._0_8_;
                      auStack_f0._8_8_ = auStack_2f0._8_8_;
                      if ((long *)auStack_2f0._8_8_ != (long *)0x0) {
                        LOCK();
                        *(long *)(auStack_2f0._8_8_ + 8) = *(long *)(auStack_2f0._8_8_ + 8) + 1;
                        UNLOCK();
                      }
                      uStack_e0 = uStack_2e0;
                      uStack_d8 = *(undefined8 *)piStack_4e8;
                      uStack_d0 = (undefined2)piStack_4e8[2];
                      func_0x0ca320d0(lVar22,&plStack_f8);
                      uVar24 = auStack_f0._8_8_;
                      auStack_f0 = (undefined1  [16])0x0;
                      if ((long *)uVar24 == (long *)0x0) {
                        uStack_e0 = 0;
                      }
                      else {
                        LOCK();
                        plVar32 = (long *)(uVar24 + 8);
                        lVar25 = *plVar32;
                        *plVar32 = *plVar32 + -1;
                        UNLOCK();
                        if (lVar25 == 0) {
                          (**(code **)(*(long *)uVar24 + 0x10))(uVar24);
                          func_0x0412c2d0(uVar24);
                        }
                        uVar24 = auStack_f0._8_8_;
                        uStack_e0 = 0;
                        if ((long *)auStack_f0._8_8_ != (long *)0x0) {
                          LOCK();
                          plVar32 = (long *)(auStack_f0._8_8_ + 8);
                          lVar25 = *plVar32;
                          *plVar32 = *plVar32 + -1;
                          UNLOCK();
                          if (lVar25 == 0) {
                            (**(code **)(*(long *)auStack_f0._8_8_ + 0x10))(auStack_f0._8_8_);
                            func_0x0412c2d0(uVar24);
                          }
                        }
                      }
                    }
                    auStack_98 = (undefined1  [16])0x0;
                    uStack_88 = 0;
                    func_0x0d6afff0(&pbStack_408,lVar22,plStack_4f0,auStack_98,1);
                    if ((auStack_3e8._8_8_ & 0x80000000000000) == 0) {
                      if ((auStack_3e8._8_8_ & 0x7f000000000000) == 0) goto LAB_0ca04368;
                      uVar19 = (ulong)(auStack_3e8._14_2_ & 0x7f);
LAB_0ca04321:
                      if (((uVar19 != 4) ||
                          (*(int *)(auStack_3e8._8_8_ & 0xff00ffffffffffff) != 0x61746562)) ||
                         ((auStack_3e8._0_2_ != 9999 ||
                          ((auStack_3e8._2_2_ != 9999 || (auStack_3e8._4_2_ != 9999))))))
                      goto LAB_0ca04368;
                      bVar35 = true;
                      lVar25 = 0x80;
                    }
                    else {
                      uVar19 = *(ulong *)((auStack_3e8._8_8_ & 0xff00ffffffffffff) - 8);
                      if (uVar19 != 0) goto LAB_0ca04321;
LAB_0ca04368:
                      lVar25 = 0x50;
                      bVar35 = false;
                    }
                    if (*(long *)(lVar22 + lVar25) == 0 || ((bStack_35c ^ 1) & auStack_3e8[6]) != 1)
                    {
LAB_0ca04446:
                      uVar24 = uStack_368;
                      uVar26 = uStack_380;
                      uVar19 = uStack_398;
                      if (((~auStack_3e8[6] | bStack_35c) & 1) == 0) {
                        if (bVar35) {
                          func_0x05ebb920(&uStack_278,&pbStack_408);
                          func_0x05ebb920(auStack_1a8,&uStack_278);
                          func_0x05ebb920(&bStack_5b8,auStack_1a8);
                          uStack_508 = 1;
                          uStack_4c8 = (uint7 *)((ulong)uStack_4c8 & 0xffffffffffffff00);
                          uStack_418 = 0xffffffff;
                          func_0x05ebb920(&uStack_4c8,&bStack_5b8);
                          uStack_418 = 1;
                          if ((ulong)uStack_508 != 0xffffffff) {
                            (**(code **)(&UNK_0f3eb8b8 + (ulong)uStack_508 * 8))
                                      (auStack_2c8,&bStack_5b8);
                          }
                          uStack_508 = 0xffffffff;
                          func_0x05d85c50(auStack_148);
                          if (pcStack_158 != (code *)0x0) {
                            (*pcStack_158)(auStack_170);
                          }
                          if ((uStack_178 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_178 = 0;
                          if ((uStack_180 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_180 = 0;
                          func_0x05d85c50(auStack_218);
                          if (pcStack_228 != (code *)0x0) {
                            (*pcStack_228)(&uStack_240);
                          }
                          if ((uStack_248 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_248 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_248 = 0;
                          if ((uStack_250 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
                          }
                        }
                        else {
                          func_0x05ebb920(&uStack_278,&pbStack_408);
                          func_0x05ebb920(auStack_1a8,&uStack_278);
                          func_0x05ebb920(&bStack_5b8,auStack_1a8);
                          uStack_508 = 0;
                          uStack_4c8 = (uint7 *)((ulong)uStack_4c8 & 0xffffffffffffff00);
                          uStack_418 = 0xffffffff;
                          func_0x05ebb920(&uStack_4c8,&bStack_5b8);
                          uStack_418 = 0;
                          if ((ulong)uStack_508 != 0xffffffff) {
                            (**(code **)(&UNK_0f3eb8b8 + (ulong)uStack_508 * 8))
                                      (auStack_2c8,&bStack_5b8);
                          }
                          uStack_508 = 0xffffffff;
                          func_0x05d85c50(auStack_148);
                          if (pcStack_158 != (code *)0x0) {
                            (*pcStack_158)(auStack_170);
                          }
                          if ((uStack_178 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_178 = 0;
                          if ((uStack_180 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_180 = 0;
                          func_0x05d85c50(auStack_218);
                          if (pcStack_228 != (code *)0x0) {
                            (*pcStack_228)(&uStack_240);
                          }
                          if ((uStack_248 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_248 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_248 = 0;
                          if ((uStack_250 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
                          }
                        }
                        uStack_250 = 0;
                      }
                      else {
                        uStack_278 = (uint7 *)auStack_3a8._0_8_;
                        uStack_270 = auStack_3a8._8_8_;
                        uStack_260 = auStack_390._0_8_;
                        uStack_258 = auStack_390._8_8_;
                        uStack_248 = auStack_378._0_8_;
                        uStack_240 = auStack_378._8_8_;
                        if (bVar35) {
                          auStack_3a8 = (undefined1  [16])0x0;
                          uStack_398 = 0;
                          auStack_390 = (undefined1  [16])0x0;
                          uStack_380 = 0;
                          auStack_378 = (undefined1  [16])0x0;
                          uStack_368 = 0;
                          uStack_280 = uStack_360;
                          bStack_27c = bStack_35c;
                          uStack_268 = uVar19;
                          auStack_2c8 = (undefined1  [16])0x0;
                          puStack_2b8 = (undefined1 *)0x0;
                          uStack_250 = uVar26;
                          auStack_2b0 = (undefined1  [16])0x0;
                          uStack_2a0 = 0;
                          uStack_238 = uVar24;
                          auStack_298 = (undefined1  [16])0x0;
                          uStack_288 = 0;
                          uStack_230 = uStack_360;
                          bStack_22c = bStack_35c;
                          bStack_5b8 = 0;
                          uStack_5b7 = 0;
                          sStack_5b6 = 0;
                          sStack_5b4 = 0;
                          uStack_5b2 = 0;
                          bStack_5b0 = 0;
                          uStack_5af = 0;
                          cStack_5a8 = '\0';
                          uStack_5a7 = 0;
                          uStack_5a0 = 1;
                          plStack_598 = (long *)0x0;
                          piStack_590 = (int *)0x0;
                          uStack_588 = 0;
                          plStack_570 = (long *)&UNK_0488e0b0;
                          uStack_560 = 0x48b5725f;
                          pcStack_568 = (code *)0x0;
                          uStack_55c = 0;
                          auVar4._8_8_ = 0;
                          auVar4._0_8_ = auStack_580._8_8_;
                          auStack_580 = auVar4 << 0x40;
                          auStack_528 = (undefined1  [16])0x0;
                          auStack_538 = (undefined1  [16])0x0;
                          auStack_548 = (undefined1  [16])0x0;
                          auStack_558 = (undefined1  [16])0x0;
                          uStack_518 = 0;
                          uStack_510 = 0xfefffffc;
                          uStack_50c = 0;
                          func_0x0c4a4310(auStack_558,&uStack_278);
                          uStack_5a0 = 0;
                          func_0x05ebb920(auStack_1a8,&bStack_5b8);
                          func_0x05d85c50(auStack_558);
                          if (pcStack_568 != (code *)0x0) {
                            (*pcStack_568)(auStack_580);
                          }
                          if ((uStack_588 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_588 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_588 = 0;
                          if (((ulong)piStack_590 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,((ulong)piStack_590 & 0xff00ffffffffffff) - 8);
                          }
                          piStack_590 = (int *)0x0;
                          func_0x05d85c50(&uStack_278);
                          func_0x05ebb920(&bStack_5b8,auStack_1a8);
                          uStack_508 = 1;
                          uStack_4c8 = (uint7 *)((ulong)uStack_4c8 & 0xffffffffffffff00);
                          uStack_418 = 0xffffffff;
                          func_0x05ebb920(&uStack_4c8,&bStack_5b8);
                          uStack_418 = 1;
                          if ((ulong)uStack_508 != 0xffffffff) {
                            (**(code **)(&UNK_0f3eb8b8 + (ulong)uStack_508 * 8))
                                      (&uStack_278,&bStack_5b8);
                          }
                          uStack_508 = 0xffffffff;
                          func_0x05d85c50(auStack_148);
                          if (pcStack_158 != (code *)0x0) {
                            (*pcStack_158)(auStack_170);
                          }
                          if ((uStack_178 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_178 = 0;
                          if ((uStack_180 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_180 = 0;
                          func_0x05d85c50(auStack_2c8);
                        }
                        else {
                          uStack_268 = uStack_398;
                          auStack_3a8 = (undefined1  [16])0x0;
                          uStack_398 = 0;
                          uStack_250 = uStack_380;
                          auStack_390 = (undefined1  [16])0x0;
                          uStack_380 = 0;
                          uStack_238 = uStack_368;
                          auStack_378 = (undefined1  [16])0x0;
                          uStack_368 = 0;
                          uStack_230 = uStack_360;
                          bStack_22c = bStack_35c;
                          func_0x0ca32510(auStack_1a8,&uStack_278);
                          func_0x05ebb920(&bStack_5b8,auStack_1a8);
                          uStack_508 = 0;
                          uStack_4c8 = (uint7 *)((ulong)uStack_4c8 & 0xffffffffffffff00);
                          uStack_418 = 0xffffffff;
                          func_0x05ebb920(&uStack_4c8,&bStack_5b8);
                          uStack_418 = 0;
                          if ((ulong)uStack_508 != 0xffffffff) {
                            (**(code **)(&UNK_0f3eb8b8 + (ulong)uStack_508 * 8))
                                      (auStack_2c8,&bStack_5b8);
                          }
                          uStack_508 = 0xffffffff;
                          func_0x05d85c50(auStack_148);
                          if (pcStack_158 != (code *)0x0) {
                            (*pcStack_158)(auStack_170);
                          }
                          if ((uStack_178 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_178 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_178 = 0;
                          if ((uStack_180 & 0x80000000000000) != 0) {
                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                      (&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
                          }
                          uStack_180 = 0;
                          func_0x05d85c50(&uStack_278);
                        }
                      }
                      func_0x05d85c50(auStack_3a8);
                      if (pcStack_3b8 != (code *)0x0) {
                        (*pcStack_3b8)(auStack_3d0);
                      }
                      if ((uStack_3d8 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uStack_3d8 & 0xff00ffffffffffff) - 8);
                      }
                      uStack_3d8 = 0;
                      if ((auStack_3e8._8_8_ & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(auStack_3e8._8_8_ & 0xff00ffffffffffff) - 8);
                      }
                      if ((uStack_88 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
                      }
                      uStack_88 = 0;
                      if ((auStack_98._8_8_ & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(auStack_98._8_8_ & 0xff00ffffffffffff) - 8);
                      }
                      if ((ulong)uStack_418 == 0xffffffff) {
LAB_0ca05779:
                        func_0x04931450();
                        goto LAB_0ca0577e;
                      }
                      bStack_5b8 = (byte)&pbStack_408;
                      uStack_5b7 = (byte)((ulong)&pbStack_408 >> 8);
                      sStack_5b6 = (short)((ulong)&pbStack_408 >> 0x10);
                      sStack_5b4 = (short)((ulong)&pbStack_408 >> 0x20);
                      uStack_5b2 = (undefined2)((ulong)&pbStack_408 >> 0x30);
                      lVar22 = (**(code **)(&UNK_0f3eb8f0 + (ulong)uStack_418 * 8))
                                         (&bStack_5b8,&uStack_4c8);
                      (**(code **)(*plStack_4f0 + 0x10))(&uStack_278);
                      if (*(char *)(lVar22 + 0xac) == '\x01') {
                        pbStack_408 = pbStack_5d0;
                        auStack_400._0_8_ = uStack_5c0;
                        func_0x0470d9a0(&bStack_5b8,&UNK_012338c4,0x1a,0xd,&pbStack_408);
                        if ((bStack_5b8 & 1) == 0) {
                          auStack_1a8 = (undefined1  [8])&uStack_5b7;
                        }
                        else {
                          auStack_1a8 = (undefined1  [8])CONCAT71(uStack_5a7,cStack_5a8);
                        }
                        func_0x09adffe0(1,3,0x10,auStack_1a8);
                        if ((bStack_5b8 & 1) != 0) {
                          func_0x0412a280(CONCAT71(uStack_5a7,cStack_5a8),
                                          CONCAT26(uStack_5b2,
                                                   CONCAT24(sStack_5b4,
                                                            CONCAT22(sStack_5b6,
                                                                     CONCAT11(uStack_5b7,bStack_5b8)
                                                                    ))) & 0xfffffffffffffffe);
                        }
                      }
                      bStack_5b8 = 0xff;
                      uStack_5b7 = 0xff;
                      sStack_5b6 = -1;
                      bStack_5b0 = 0;
                      uStack_5af = 0;
                      cStack_5a8 = '\0';
                      uStack_5a7 = 0;
                      uStack_5a0 = 0;
                      uStack_59f = 0;
                      plStack_598 = (long *)0x0;
                      piStack_590 = (int *)0x0;
                      uStack_588 = 0;
                      auStack_580 = (undefined1  [16])0x0;
                      plStack_570 = (long *)0x0;
                      uVar14 = *(undefined2 *)(lVar22 + 0xa8);
                      puVar23 = (undefined8 *)
                                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                      if (puVar23 == (undefined8 *)0x0) {
                        func_0x0eec74c0(0x20,0);
                      }
                      uVar24 = _UNK_013374ed;
                      *(ulong *)((long)puVar23 + 0xb) = CONCAT35(_UNK_013374ea,_DAT_013374e5);
                      *(undefined8 *)((long)puVar23 + 0x13) = uVar24;
                      uVar24 = CONCAT53(_DAT_013374e5,_UNK_013374e2);
                      *puVar23 = _DAT_013374da;
                      puVar23[1] = uVar24;
                      *(undefined1 *)((long)puVar23 + 0x1b) = 0;
                      pbStack_408 = (byte *)CONCAT62(pbStack_408._2_6_,uVar14);
                      func_0x0412e5e0(auStack_400,puVar23,0x1b);
                      func_0x0d5cf800(&bStack_5b0,&pbStack_408);
                      if ((auStack_400[0] & 1) != 0) {
                        func_0x0412a280(plStack_3f0,auStack_400._0_8_ & 0xfffffffffffffffe);
                      }
                      func_0x0412a280(puVar23,0x20);
                      cVar10 = func_0x0551ca70(&uStack_278,&UNK_0f3eb8c8);
                      if (cVar10 == '\0') {
                        pbStack_408 = pbStack_5d0;
                        auStack_400._0_8_ = uStack_5c0;
                        func_0x0470d9a0(auStack_1a8,&UNK_0148aa42,4,0xd,&pbStack_408);
                        pbStack_408 = (byte *)CONCAT62(pbStack_408._2_6_,4);
                        if (((ulong)auStack_1a8 & 1) == 0) {
                          plStack_3f0 = plStack_198;
                          auStack_400._8_8_ = uStack_1a0;
                          auStack_400._0_8_ = auStack_1a8;
                        }
                        else {
                          func_0x0412e5e0(auStack_400,plStack_198,uStack_1a0);
                        }
                        func_0x0d5cf800(&bStack_5b0,&pbStack_408);
                        if ((auStack_400[0] & 1) != 0) {
                          func_0x0412a280(plStack_3f0,auStack_400._0_8_ & 0xfffffffffffffffe);
                        }
                        if (((ulong)auStack_1a8 & 1) != 0) {
                          func_0x0412a280(plStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
                        }
                      }
                      else {
                        bStack_5b8 = 0xfb;
                        uStack_5b7 = 0xff;
                      }
                      pbStack_408 = (byte *)CONCAT44(pbStack_408._4_4_,
                                                     CONCAT22(sStack_5b6,
                                                              CONCAT11(uStack_5b7,bStack_5b8)));
                      auStack_400 = (undefined1  [16])0x0;
                      plStack_3f0 = (long *)0x0;
                      func_0x0ca32940(auStack_400,CONCAT71(uStack_5af,bStack_5b0),
                                      CONCAT71(uStack_5a7,cStack_5a8),
                                      CONCAT71(uStack_5a7,cStack_5a8) -
                                      CONCAT71(uStack_5af,bStack_5b0) >> 5);
                      plVar27 = (long *)auStack_3e8;
                      auStack_3e8 = (undefined1  [16])0x0;
                      uStack_3d8 = 0;
                      func_0x0ca32b80(plVar27,plStack_598,piStack_590,
                                      (long)piStack_590 - (long)plStack_598 >> 5);
                      auStack_3d0 = (undefined1  [16])0x0;
                      uStack_3c0 = 0;
                      func_0x0ca32dc0(auStack_3d0,auStack_580._0_8_,auStack_580._8_8_,
                                      (long)(auStack_580._8_8_ - auStack_580._0_8_) >> 5);
                      func_0x0d5cf650(lVar22,0x10,&pbStack_408);
                      func_0x05f43a40(&pbStack_408);
                      func_0x05f43a40(&bStack_5b8);
                      if ((uStack_268 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
                      }
                      uStack_268 = 0;
                      if ((uStack_270 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
                      }
                      func_0x0ca321b0(&lStack_78);
                      if ((ulong)uStack_418 == 0xffffffff) {
LAB_0ca05774:
                        func_0x04931450();
                        goto LAB_0ca05779;
                      }
                      bStack_5b8 = (byte)&pbStack_408;
                      bVar12 = bStack_5b8;
                      uStack_5b7 = (byte)((ulong)&pbStack_408 >> 8);
                      bVar6 = uStack_5b7;
                      sStack_5b6 = (short)((ulong)&pbStack_408 >> 0x10);
                      sVar7 = sStack_5b6;
                      sStack_5b4 = (short)((ulong)&pbStack_408 >> 0x20);
                      sVar8 = sStack_5b4;
                      uStack_5b2 = (undefined2)((ulong)&pbStack_408 >> 0x30);
                      uVar14 = uStack_5b2;
                      lVar22 = (**(code **)(&UNK_0f3eb900 + (ulong)uStack_418 * 8))
                                         (&bStack_5b8,&uStack_4c8);
                      if (*(char *)(lVar22 + 0x26) != '\x01') {
LAB_0ca0537f:
                        if ((ulong)uStack_418 == 0xffffffff) goto LAB_0ca05774;
                        bStack_5b8 = bVar12;
                        uStack_5b7 = bVar6;
                        sStack_5b6 = sVar7;
                        sStack_5b4 = sVar8;
                        uStack_5b2 = uVar14;
                        puVar23 = (undefined8 *)
                                  (**(code **)(&UNK_0f3eb900 + (ulong)uStack_418 * 8))
                                            (&bStack_5b8,&uStack_4c8);
                        uStack_58 = *puVar23;
                        uStack_50 = (undefined1)puVar23[1];
                        uStack_4f = (undefined7)((ulong)puVar23[1] >> 8);
                        uStack_48 = (undefined1)puVar23[2];
                        uStack_47 = (undefined7)((ulong)puVar23[2] >> 8);
                        uStack_40 = (undefined1)puVar23[3];
                        uStack_3f = (undefined7)((ulong)puVar23[3] >> 8);
                        if ((ulong)uStack_418 != 0xffffffff) {
                          (**(code **)(&UNK_0f3eb8b8 + (ulong)uStack_418 * 8))
                                    (&bStack_5b8,&uStack_4c8);
                        }
                        *(long **)*pauStack_4d8 = plStack_5c8;
                        if (plStack_5c8 != (long *)0x0) {
                          LOCK();
                          *(int *)((long)plStack_5c8 + 0xc) = *(int *)((long)plStack_5c8 + 0xc) + 1;
                          UNLOCK();
                        }
                        *(ulong *)(pauStack_4d8[1] + 1) = CONCAT17(uStack_48,uStack_4f);
                        *(ulong *)(pauStack_4d8[1] + 9) = CONCAT17(uStack_40,uStack_47);
                        *(undefined8 *)(*pauStack_4d8 + 8) = uStack_58;
                        *(ulong *)pauStack_4d8[1] = CONCAT71(uStack_4f,uStack_50);
                        uVar24 = auStack_2f0._8_8_;
                        auStack_2f0 = (undefined1  [16])0x0;
                        if ((long *)uVar24 != (long *)0x0) {
                          LOCK();
                          plVar27 = (long *)(uVar24 + 8);
                          lVar22 = *plVar27;
                          *plVar27 = *plVar27 + -1;
                          UNLOCK();
                          if (lVar22 == 0) {
                            (**(code **)(*(long *)uVar24 + 0x10))(uVar24);
                            func_0x0412c2d0(uVar24);
                          }
                          uVar24 = auStack_2f0._8_8_;
                          uStack_2e0 = 0;
                          if ((long *)auStack_2f0._8_8_ != (long *)0x0) {
                            LOCK();
                            plVar27 = (long *)(auStack_2f0._8_8_ + 8);
                            lVar22 = *plVar27;
                            *plVar27 = *plVar27 + -1;
                            UNLOCK();
                            if (lVar22 == 0) {
                              (**(code **)(*(long *)auStack_2f0._8_8_ + 0x10))(auStack_2f0._8_8_);
                              func_0x0412c2d0(uVar24);
                            }
                          }
                        }
                        if (plStack_5c8 != (long *)0x0) {
                          LOCK();
                          *(int *)((long)plStack_5c8 + 0xc) = *(int *)((long)plStack_5c8 + 0xc) + -1
                          ;
                          UNLOCK();
                          if (((*(int *)((long)plStack_5c8 + 0xc) < 1) && (*plStack_5c8 == 0)) &&
                             (plStack_5c8 != (long *)0x0)) {
                            func_0x0412a280(plStack_5c8,0x10);
                          }
                        }
                        goto LAB_0ca03cec;
                      }
                      if ((ulong)uStack_418 == 0xffffffff) goto LAB_0ca05774;
                      bStack_5b8 = bVar12;
                      uStack_5b7 = bVar6;
                      sStack_5b6 = sVar7;
                      sStack_5b4 = sVar8;
                      uStack_5b2 = uVar14;
                      lVar22 = (**(code **)(&UNK_0f3eb900 + (ulong)uStack_418 * 8))
                                         (&bStack_5b8,&uStack_4c8);
                      if (*(char *)(lVar22 + 0xac) != '\0') goto LAB_0ca0537f;
                      bStack_5b8 = (byte)piStack_4d0;
                      uStack_5b7 = (byte)((ulong)piStack_4d0 >> 8);
                      sStack_5b6 = (short)((ulong)piStack_4d0 >> 0x10);
                      sStack_5b4 = (short)((ulong)piStack_4d0 >> 0x20);
                      uStack_5b2 = (undefined2)((ulong)piStack_4d0 >> 0x30);
                      bStack_5b0 = (byte)lStack_4e0;
                      uStack_5af = (uint7)((ulong)lStack_4e0 >> 8);
                      cStack_5a8 = (char)plStack_4f0;
                      uStack_5a7 = (uint7)((ulong)plStack_4f0 >> 8);
                      uStack_5a0 = SUB81(puStack_500,0);
                      uStack_59f = (undefined7)((ulong)puStack_500 >> 8);
                      plStack_598 = plStack_300;
                      piStack_590 = piStack_4d0;
                      uStack_588 = lStack_4e0;
                      auStack_580._8_8_ = puStack_500;
                      auStack_580._0_8_ = plStack_4f0;
                      plStack_570 = plStack_300;
                      if ((ulong)uStack_418 != 0xffffffff) {
                        auStack_1a8 = (undefined1  [8])&uStack_278;
                        auVar39 = (**(code **)(&UNK_0f3eb978 + (ulong)uStack_418 * 8))
                                            (auStack_1a8,&uStack_4c8);
                        pbStack_408 = auVar39._0_8_;
                        auStack_400._0_4_ = auVar39._8_4_;
                        if (auVar39._8_4_ != -1) {
                          auStack_1a8 = (undefined1  [8])&bStack_5b8;
                          (**(code **)(&UNK_0f3eb910 + (auVar39._8_8_ & 0xffffffff) * 8))
                                    (auStack_1a8,&pbStack_408);
                          goto LAB_0ca0537f;
                        }
                      }
                    }
                    else {
                      lVar25 = func_0x0417cc60();
                      if (cStack_3ac == '\x02') {
                        puVar18 = auStack_3d0;
                      }
                      else {
                        puVar18 = (undefined1 *)auStack_3d0._0_8_;
                      }
                      puVar31 = (undefined1 *)0x0;
                      if (bVar35) {
                        if (iStack_3b0 == -0x2702181f) {
                          puVar31 = puVar18;
                        }
                        plVar32 = *(long **)(lVar22 + 0x80);
                      }
                      else {
                        if (iStack_3b0 == -0x2659eae9) {
                          puVar31 = puVar18;
                        }
                        plVar32 = *(long **)(lVar22 + 0x50);
                      }
                      if (plVar32 != (long *)0x0) {
                        (**(code **)(*plVar32 + 0x30))(plVar32,puVar31,auStack_3a8);
                        lVar22 = func_0x0417cc60();
                        auStack_400._8_8_ = (double)(lVar22 - lVar25) / _DAT_014f0138;
                        plStack_3f0 = (long *)CONCAT71(plStack_3f0._1_7_,
                                                       (byte)plStack_3f0 &
                                                       ~bStack_35c & auStack_3e8[6]);
                        goto LAB_0ca04446;
                      }
LAB_0ca0577e:
                      func_0x04891200();
                    }
                    func_0x04931450();
LAB_0ca05788:
                    iVar16 = func_0x04108328(&DAT_0f6e2da8);
                    if (iVar16 != 0) {
                      func_0x0eee2f40(&SUB_04963c80,&DAT_0f6e2da0,0xf53dab8);
                      FUN_0410844d(&DAT_0f6e2da8);
                    }
LAB_0ca0313b:
                    auStack_2c8._0_8_ = _DAT_0f6e2da0;
                    if (_DAT_0f6e2da0 == 0) {
LAB_0ca03213:
                      plVar32 = (long *)0x0;
LAB_0ca03216:
                      *(short *)(pbStack_5d0 + 0x1b8) = *(short *)(pbStack_5d0 + 0x1b8) + 1;
                      func_0x0c40b510(&uStack_4c8,pbStack_5d0,&bStack_5b8,pbStack_5d0 + 0x1b8);
                      if (uStack_4c8 != (uint7 *)0x0) {
                        LOCK();
                        *(int *)((long)uStack_4c8 + 0xc) = *(int *)((long)uStack_4c8 + 0xc) + 1;
                        UNLOCK();
                        plVar32 = (long *)auStack_2c8._0_8_;
                      }
                      auStack_2c8._0_8_ = uStack_4c8;
                      if (plVar32 != (long *)0x0) {
                        LOCK();
                        *(int *)((long)plVar32 + 0xc) = *(int *)((long)plVar32 + 0xc) + -1;
                        UNLOCK();
                        if ((*(int *)((long)plVar32 + 0xc) < 1) && (*plVar32 == 0)) {
                          func_0x0412a280(plVar32,0x10);
                        }
                      }
LAB_0ca03a00:
                      if (uStack_4c8 != (uint7 *)0x0) {
                        LOCK();
                        *(int *)((long)uStack_4c8 + 0xc) = *(int *)((long)uStack_4c8 + 0xc) + -1;
                        UNLOCK();
                        if (((*(int *)((long)uStack_4c8 + 0xc) < 1) && (*(long *)uStack_4c8 == 0))
                           && (uStack_4c8 != (uint7 *)0x0)) {
                          func_0x0412a280(uStack_4c8,0x10);
                        }
                      }
                    }
                    else {
                      LOCK();
                      *(int *)(_DAT_0f6e2da0 + 0xc) = *(int *)(_DAT_0f6e2da0 + 0xc) + 1;
                      UNLOCK();
LAB_0ca03157:
                      if ((long *)auStack_2c8._0_8_ == (long *)0x0) goto LAB_0ca03213;
                      plVar32 = (long *)auStack_2c8._0_8_;
                      if (*(long *)auStack_2c8._0_8_ == 0) goto LAB_0ca03216;
                    }
LAB_0ca03a35:
                    if ((long *)auStack_2c8._0_8_ != (long *)0x0) {
                      LOCK();
                      *(int *)(auStack_2c8._0_8_ + 0xc) = *(int *)(auStack_2c8._0_8_ + 0xc) + 1;
                      UNLOCK();
                      plVar27 = plStack_f8;
                    }
                    plStack_f8 = (long *)auStack_2c8._0_8_;
                    if (plVar27 != (long *)0x0) {
                      LOCK();
                      *(int *)((long)plVar27 + 0xc) = *(int *)((long)plVar27 + 0xc) + -1;
                      UNLOCK();
                      if ((*(int *)((long)plVar27 + 0xc) < 1) && (*plVar27 == 0)) {
                        func_0x0412a280(plVar27,0x10);
                      }
                    }
                    if ((long *)auStack_2c8._0_8_ != (long *)0x0) {
                      LOCK();
                      *(int *)(auStack_2c8._0_8_ + 0xc) = *(int *)(auStack_2c8._0_8_ + 0xc) + -1;
                      UNLOCK();
                      if (((*(int *)(auStack_2c8._0_8_ + 0xc) < 1) &&
                          (*(long *)auStack_2c8._0_8_ == 0)) &&
                         ((long *)auStack_2c8._0_8_ != (long *)0x0)) {
                        func_0x0412a280(auStack_2c8._0_8_,0x10);
                      }
                    }
                    if ((bStack_5b0 & 1) != 0) {
                      func_0x0412a280(CONCAT71(uStack_59f,uStack_5a0),
                                      CONCAT71(uStack_5af,bStack_5b0) & 0xfffffffffffffffe);
                    }
                    if ((plStack_f8 == (long *)0x0) || (plVar27 = plStack_f8, *plStack_f8 == 0)) {
joined_r0x0ca0376d:
                      plStack_5c8 = (long *)0x0;
                    }
                    else {
LAB_0ca03aef:
                      func_0x04907e30(piStack_4e8,auStack_1a8);
                      if (*plVar27 == 0) goto LAB_0ca057c7;
                      *(int *)(*plVar27 + 8) = (int)uStack_5c0;
                      LOCK();
                      *(int *)((long)plVar27 + 0xc) = *(int *)((long)plVar27 + 0xc) + 1;
                      UNLOCK();
                      plStack_5c8 = plVar27;
                    }
joined_r0x0ca0375e:
                    if (((ulong)auStack_1a8 & 1) != 0) {
                      func_0x0412a280(plStack_198,(ulong)auStack_1a8 & 0xfffffffffffffffe);
                    }
                    if (((ulong)pbStack_408 & 1) != 0) {
                      func_0x0412a280(auStack_400._8_8_,(ulong)pbStack_408 & 0xfffffffffffffffe);
                    }
                  } while (plStack_f8 == (long *)0x0);
                  LOCK();
                  *(int *)((long)plStack_f8 + 0xc) = *(int *)((long)plStack_f8 + 0xc) + -1;
                  UNLOCK();
                } while (0 < *(int *)((long)plStack_f8 + 0xc));
                lVar22 = *plStack_f8;
                plVar27 = plStack_f8;
              } while( true );
            }
          }
          if (((ulong)pbStack_408 & 1) != 0) {
            func_0x0412a280(auStack_400._8_8_,(ulong)pbStack_408 & 0xfffffffffffffffe);
          }
          if (plVar27 != (long *)0x0) {
            LOCK();
            *(int *)((long)plVar27 + 0xc) = *(int *)((long)plVar27 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)plVar27 + 0xc) < 1) && (*plVar27 == 0)) && (auStack_2c8._0_8_ != 0)
               ) {
              func_0x0412a280(auStack_2c8._0_8_,0x10);
            }
          }
        }
      }
      else {
        if (pbVar33 == (byte *)0x13) {
          auVar37[0] = -(*(char *)((long)puVar29 + 3) == DAT_014e7010);
          auVar37[1] = -(*(char *)((long)puVar29 + 4) == UNK_014e7011);
          auVar37[2] = -(*(char *)((long)puVar29 + 5) == UNK_014e7012);
          auVar37[3] = -(*(char *)((long)puVar29 + 6) == UNK_014e7013);
          auVar37[4] = -(*(char *)((long)puVar29 + 7) == UNK_014e7014);
          auVar37[5] = -((char)puVar29[1] == UNK_014e7015);
          auVar37[6] = -(*(char *)((long)puVar29 + 9) == UNK_014e7016);
          auVar37[7] = -(*(char *)((long)puVar29 + 10) == UNK_014e7017);
          auVar37[8] = -(*(char *)((long)puVar29 + 0xb) == UNK_014e7018);
          auVar37[9] = -(*(char *)((long)puVar29 + 0xc) == UNK_014e7019);
          auVar37[10] = -(*(char *)((long)puVar29 + 0xd) == UNK_014e701a);
          auVar37[0xb] = -(*(char *)((long)puVar29 + 0xe) == UNK_014e701b);
          auVar37[0xc] = -(*(char *)((long)puVar29 + 0xf) == UNK_014e701c);
          auVar37[0xd] = -((char)puVar29[2] == UNK_014e701d);
          auVar37[0xe] = -(*(char *)((long)puVar29 + 0x11) == UNK_014e701e);
          auVar37[0xf] = -(*(char *)((long)puVar29 + 0x12) == UNK_014e701f);
          auVar36[0] = -((char)*puVar29 == DAT_014e9470);
          auVar36[1] = -(*(char *)((long)puVar29 + 1) == UNK_014e9471);
          auVar36[2] = -(*(char *)((long)puVar29 + 2) == UNK_014e9472);
          auVar36[3] = -(*(char *)((long)puVar29 + 3) == UNK_014e9473);
          auVar36[4] = -(*(char *)((long)puVar29 + 4) == UNK_014e9474);
          auVar36[5] = -(*(char *)((long)puVar29 + 5) == UNK_014e9475);
          auVar36[6] = -(*(char *)((long)puVar29 + 6) == UNK_014e9476);
          auVar36[7] = -(*(char *)((long)puVar29 + 7) == UNK_014e9477);
          auVar36[8] = -((char)puVar29[1] == UNK_014e9478);
          auVar36[9] = -(*(char *)((long)puVar29 + 9) == UNK_014e9479);
          auVar36[10] = -(*(char *)((long)puVar29 + 10) == UNK_014e947a);
          auVar36[0xb] = -(*(char *)((long)puVar29 + 0xb) == UNK_014e947b);
          auVar36[0xc] = -(*(char *)((long)puVar29 + 0xc) == UNK_014e947c);
          auVar36[0xd] = -(*(char *)((long)puVar29 + 0xd) == UNK_014e947d);
          auVar36[0xe] = -(*(char *)((long)puVar29 + 0xe) == UNK_014e947e);
          auVar36[0xf] = -(*(char *)((long)puVar29 + 0xf) == UNK_014e947f);
          auVar36 = auVar36 & auVar37;
          uVar2 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(byte)(auVar36[0xf] >> 7) << 0xf;
          goto joined_r0x0ca020dc;
        }
        if ((pbVar33 != (byte *)0xf) ||
           (*(long *)((long)puVar29 + 7) != 0x6472616f623a7466 ||
            *(long *)puVar29 != 0x66617263656e696d)) goto LAB_0ca020e2;
      }
LAB_0ca03cd3:
      pauStack_4d8[1] = (undefined1  [16])0x0;
      *pauStack_4d8 = (undefined1  [16])0x0;
      pauStack_4d8[2][0] = 1;
      goto LAB_0ca03cec;
    }
  }
  pauStack_4d8[1] = (undefined1  [16])0x0;
  *pauStack_4d8 = (undefined1  [16])0x0;
  pauStack_4d8[2][0] = 1;
LAB_0ca03cec:
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(puStack_310,CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe);
  }
  if ((bStack_338 & 1) != 0) {
    func_0x0412a280(puStack_328,CONCAT71(uStack_337,bStack_338) & 0xfffffffffffffffe);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(puStack_340,CONCAT71(uStack_34f,bStack_350) & 0xfffffffffffffffe);
  }
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1b8 = 0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13374da   Failed to parse field '%s'
 * 0x13374e5  parse field '%s'
 * 0x14e8500  item
 */
