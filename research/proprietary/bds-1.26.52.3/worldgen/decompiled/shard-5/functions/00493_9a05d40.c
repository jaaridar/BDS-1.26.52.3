/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b05d40 (ELF vaddr 0x9a05d40)
 * Label: caller-of-callee
 * Body:  [[09b05d40, 09b05db2] [09b05dc0, 09b05dee] [09b05df0, 09b05e75] [09b05e80, 09b05f7a] [09b05f80, 09b06029] [09b06030, 09b06069] [09b06070, 09b060b3] [09b060c0, 09b060cc] [09b060d0, 09b060fd] [09b06100, 09b06112] [09b06120, 09b06151] [09b06160, 09b06250] [09b06260, 09b062d6] [09b062e0, 09b0631e] [09b06320, 09b06416] [09b06420, 09b06477] [09b06480, 09b065bc] [09b065c0, 09b06605] [09b0662e, 09b06656] [09b06660, 09b066cd] [09b066d0, 09b066e2] [09b066f0, 09b06867] [09b06a0d, 09b06cf7] [09b06d00, 09b06d51] [09b06d60, 09b06e97] [09b06ea0, 09b07112] [09b07120, 09b07185] [09b07190, 09b07307] [09b07310, 09b073f4] [09b07400, 09b07441] [09b07450, 09b07622] [09b07630, 09b0776b] [09b07770, 09b07b27] [09b07d19, 09b07d3c] [09b07dc9, 09b07dd0] [09b07e66, 09b07ea2] [09b07eb0, 09b07f4b]]
 * Ghidra: FUN_09b05d40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09b05d40(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  char cVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  ulong uVar24;
  char *pcVar25;
  undefined4 *puVar26;
  uint *puVar27;
  int *piVar28;
  undefined *puVar29;
  undefined4 *puVar30;
  ulong uVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  ushort *puVar35;
  byte *pbVar36;
  long lVar37;
  ulong uVar38;
  long *plVar39;
  ushort *puVar40;
  ushort *puVar41;
  bool bVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  ushort *puStack_540;
  undefined8 uStack_538;
  uint *puStack_530;
  uint *puStack_528;
  undefined1 auStack_518 [8];
  ulong uStack_510;
  ulong uStack_508;
  undefined1 auStack_500 [16];
  byte bStack_4f0;
  undefined7 uStack_4ef;
  undefined8 uStack_4e0;
  byte *pbStack_4d8;
  ulong uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  uint auStack_4b0 [4];
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [8];
  ulong uStack_468;
  ulong uStack_460;
  byte *pbStack_458;
  uint *puStack_450;
  undefined1 auStack_448 [16];
  undefined4 uStack_438;
  byte bStack_434;
  byte abStack_433 [5];
  undefined2 uStack_42e;
  byte bStack_42c;
  byte bStack_42b;
  byte bStack_42a;
  byte bStack_429;
  byte bStack_428;
  byte bStack_427;
  byte bStack_426;
  byte bStack_425;
  undefined4 uStack_424;
  byte *pbStack_420;
  uint *puStack_418;
  uint *puStack_38;
  
  puVar27 = auStack_4b0;
  pbStack_458 = param_1;
  func_0x04863060(puVar27,0);
  func_0x09b05b40(puVar27,&UNK_0135b320);
  func_0x04863060();
  puStack_4c8 = (undefined *)0x0;
  uStack_4c0 = 0;
  pbStack_4d8 = (byte *)0x0;
  uStack_4d0 = 0;
  uStack_4b8 = 0x3f800000;
  for (puVar14 = _DAT_0f6b4c08; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
    plVar17 = (long *)puVar14[9];
    if (plVar17 != (long *)0x0) {
      pbVar36 = (byte *)(puVar14 + 3);
      do {
        plVar39 = plVar17 + 3;
        uStack_438 = (uint)plVar39;
        bStack_434 = (byte)((ulong)plVar39 >> 0x20);
        abStack_433[0] = (byte)((ulong)plVar39 >> 0x28);
        abStack_433[1] = (byte)((ulong)plVar39 >> 0x30);
        abStack_433[2] = (byte)((ulong)plVar39 >> 0x38);
        puVar15 = (uint *)func_0x09b3d3f0(&pbStack_4d8,plVar39,&UNK_01563a4f,&uStack_438,&uStack_538
                                         );
        puVar30 = *(undefined4 **)(puVar15 + 0xc);
        if (puVar30 < *(undefined4 **)(puVar15 + 0xe)) {
          if ((*pbVar36 & 1) == 0) {
            *(undefined8 *)(puVar30 + 4) = puVar14[5];
            uVar43 = *(undefined4 *)((long)puVar14 + 0x1c);
            uVar44 = *(undefined4 *)(puVar14 + 4);
            uVar45 = *(undefined4 *)((long)puVar14 + 0x24);
            *puVar30 = *(undefined4 *)pbVar36;
            puVar30[1] = uVar43;
            puVar30[2] = uVar44;
            puVar30[3] = uVar45;
          }
          else {
            func_0x0412e5e0(puVar30,puVar14[5],puVar14[4]);
          }
          puVar30 = puVar30 + 6;
          *(undefined4 **)(puVar15 + 0xc) = puVar30;
        }
        else {
          puVar16 = puVar15 + 10;
          lVar18 = *(long *)puVar16;
          uVar38 = (long)puVar30 - lVar18;
          uVar31 = ((long)uVar38 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar31) {
            func_0x0488efe0();
            puStack_38 = puVar27;
            goto LAB_09b07ab9;
          }
          lVar21 = (long)*(undefined4 **)(puVar15 + 0xe) - lVar18 >> 3;
          uVar24 = lVar21 * 0x5555555555555556;
          if (uVar31 < uVar24) {
            uVar31 = uVar24;
          }
          if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
            uVar31 = 0xaaaaaaaaaaaaaaa;
          }
          puStack_418 = puVar16;
          if (uVar31 == 0) {
            lVar21 = 0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar31) {
              FUN_04882eb0();
              goto LAB_09b07acd;
            }
            lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0x18);
            if (lVar21 == 0) {
              func_0x0eec74c0(uVar31 * 0x18,0);
              lVar21 = 0;
            }
          }
          uStack_438 = (uint)lVar21;
          bStack_434 = (byte)((ulong)lVar21 >> 0x20);
          abStack_433[0] = (byte)((ulong)lVar21 >> 0x28);
          abStack_433[1] = (byte)((ulong)lVar21 >> 0x30);
          abStack_433[2] = (byte)((ulong)lVar21 >> 0x38);
          puVar26 = (undefined4 *)(lVar21 + uVar38);
          bStack_428 = (byte)puVar26;
          bStack_427 = (byte)((ulong)puVar26 >> 8);
          bStack_426 = (byte)((ulong)puVar26 >> 0x10);
          bStack_425 = (byte)((ulong)puVar26 >> 0x18);
          uStack_424 = (uint)((ulong)puVar26 >> 0x20);
          uStack_42e = (undefined2)((ulong)puVar26 >> 0x10);
          bStack_42c = (byte)((ulong)puVar26 >> 0x20);
          bStack_42b = (byte)((ulong)puVar26 >> 0x28);
          bStack_42a = (byte)((ulong)puVar26 >> 0x30);
          bStack_429 = (byte)((ulong)puVar26 >> 0x38);
          pbStack_420 = (byte *)(lVar21 + uVar31 * 0x18);
          abStack_433[3] = bStack_428;
          abStack_433[4] = bStack_427;
          if ((*pbVar36 & 1) == 0) {
            *(undefined8 *)(puVar26 + 4) = puVar14[5];
            uVar43 = *(undefined4 *)((long)puVar14 + 0x1c);
            uVar44 = *(undefined4 *)(puVar14 + 4);
            uVar45 = *(undefined4 *)((long)puVar14 + 0x24);
            *puVar26 = *(undefined4 *)pbVar36;
            puVar26[1] = uVar43;
            puVar26[2] = uVar44;
            puVar26[3] = uVar45;
            puVar30 = puVar26;
          }
          else {
            func_0x0412e5e0(puVar26,puVar14[5],puVar14[4]);
            puVar26 = (undefined4 *)
                      CONCAT17(bStack_429,
                               CONCAT16(bStack_42a,
                                        CONCAT15(bStack_42b,
                                                 CONCAT14(bStack_42c,
                                                          CONCAT22(uStack_42e,
                                                                   CONCAT11(abStack_433[4],
                                                                            abStack_433[3]))))));
            puVar30 = (undefined4 *)
                      CONCAT44(uStack_424,
                               CONCAT13(bStack_425,
                                        CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428))));
            lVar18 = *(long *)(puVar15 + 10);
            uVar38 = *(long *)(puVar15 + 0xc) - lVar18;
          }
          pbVar9 = pbStack_420;
          puVar30 = puVar30 + 6;
          puVar27 = (uint *)((long)puVar26 - uVar38);
          func_0x0eee2f00(puVar27,lVar18,uVar38);
          lVar18 = *(long *)(puVar15 + 10);
          *(uint **)(puVar15 + 10) = puVar27;
          *(undefined4 **)(puVar15 + 0xc) = puVar30;
          *(byte **)(puVar15 + 0xe) = pbVar9;
          if (lVar18 != 0) {
            func_0x0412a280();
          }
        }
        *(undefined4 **)(puVar15 + 0xc) = puVar30;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  uStack_538 = (uint *)0x0;
  puStack_530 = (uint *)0x0;
  puStack_528 = (uint *)0x0;
  if (_DAT_0f6b4c30 != (long *)0x0) {
    plVar17 = _DAT_0f6b4c30;
    do {
      if ((*(byte *)(plVar17 + 3) & 1) == 0) {
        lVar18 = plVar17[5];
        bStack_428 = (byte)lVar18;
        bStack_427 = (byte)((ulong)lVar18 >> 8);
        bStack_426 = (byte)((ulong)lVar18 >> 0x10);
        bStack_425 = (byte)((ulong)lVar18 >> 0x18);
        uStack_424 = (uint)((ulong)lVar18 >> 0x20);
        uStack_438 = *(uint *)(plVar17 + 3);
        uVar43 = *(undefined4 *)((long)plVar17 + 0x1c);
        uVar44 = (undefined4)plVar17[4];
        uVar45 = *(undefined4 *)((long)plVar17 + 0x24);
        bStack_434 = (byte)uVar43;
        abStack_433[0] = (byte)((uint)uVar43 >> 8);
        abStack_433[1] = (byte)((uint)uVar43 >> 0x10);
        abStack_433[2] = (byte)((uint)uVar43 >> 0x18);
        abStack_433[3] = (byte)uVar44;
        abStack_433[4] = (byte)((uint)uVar44 >> 8);
        uStack_42e = (undefined2)((uint)uVar44 >> 0x10);
        bStack_42c = (byte)uVar45;
        bStack_42b = (byte)((uint)uVar45 >> 8);
        bStack_42a = (byte)((uint)uVar45 >> 0x10);
        bStack_429 = (byte)((uint)uVar45 >> 0x18);
      }
      else {
        func_0x0412e5e0(&uStack_438,plVar17[5],plVar17[4]);
      }
      puVar27 = puStack_530;
      puVar15 = uStack_538;
      if (uStack_538 == puStack_530) {
LAB_09b06120:
        if (puVar15 == puVar27) goto LAB_09b06125;
      }
      else {
        if ((uStack_438 & 1) == 0) {
          uVar31 = (ulong)((byte)uStack_438 >> 1);
          lVar18 = (long)&uStack_438 + 1;
        }
        else {
          uVar31 = CONCAT17(bStack_429,
                            CONCAT16(bStack_42a,
                                     CONCAT15(bStack_42b,
                                              CONCAT14(bStack_42c,
                                                       CONCAT22(uStack_42e,
                                                                CONCAT11(abStack_433[4],
                                                                         abStack_433[3]))))));
          lVar18 = CONCAT44(uStack_424,
                            CONCAT13(bStack_425,CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428))
                                    ));
        }
        do {
          bVar1 = (byte)*puVar15;
          if ((bVar1 & 1) == 0) {
            uVar38 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar38 = *(ulong *)(puVar15 + 2);
          }
          if (uVar38 == uVar31) {
            if ((bVar1 & 1) == 0) {
              pbVar36 = (byte *)((long)puVar15 + 1);
            }
            else {
              pbVar36 = *(byte **)(puVar15 + 4);
            }
            iVar12 = func_0x0eee3000(pbVar36,lVar18,uVar31);
            if (iVar12 == 0) goto LAB_09b06120;
          }
          puVar15 = puVar15 + 6;
        } while (puVar15 != puVar27);
LAB_09b06125:
        if (puVar27 < puStack_528) {
          if ((uStack_438 & 1) == 0) {
            *(ulong *)(puVar27 + 4) =
                 CONCAT44(uStack_424,
                          CONCAT13(bStack_425,CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428))))
            ;
            *puVar27 = uStack_438;
            puVar27[1] = CONCAT13(abStack_433[2],
                                  CONCAT12(abStack_433[1],CONCAT11(abStack_433[0],bStack_434)));
            puVar27[2] = CONCAT22(uStack_42e,CONCAT11(abStack_433[4],abStack_433[3]));
            puVar27[3] = CONCAT13(bStack_429,CONCAT12(bStack_42a,CONCAT11(bStack_42b,bStack_42c)));
          }
          else {
            func_0x0412e5e0(puVar27,CONCAT44(uStack_424,
                                             CONCAT13(bStack_425,
                                                      CONCAT12(bStack_426,
                                                               CONCAT11(bStack_427,bStack_428)))),
                            CONCAT17(bStack_429,
                                     CONCAT16(bStack_42a,
                                              CONCAT15(bStack_42b,
                                                       CONCAT14(bStack_42c,
                                                                CONCAT22(uStack_42e,
                                                                         CONCAT11(abStack_433[4],
                                                                                  abStack_433[3]))))
                                             )));
          }
          puStack_530 = puVar27 + 6;
        }
        else {
          puStack_530 = (uint *)func_0x04909a40(&uStack_538,&uStack_438);
        }
      }
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_424,
                                 CONCAT13(bStack_425,
                                          CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428)))),
                        CONCAT17(abStack_433[2],
                                 CONCAT16(abStack_433[1],
                                          CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))))
                        & 0xfffffffffffffffe);
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  uVar31 = ((long)puStack_530 - (long)uStack_538 >> 3) * -0x5555555555555555;
  lVar18 = 0x3f;
  if (uVar31 != 0) {
    for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar13 = 0;
  if (puStack_530 != uStack_538) {
    uVar13 = ((uint)lVar18 ^ 0x3f) * 2 ^ 0x7e;
  }
  func_0x049498f0(uStack_538,puStack_530,&uStack_438,uVar13,1);
  puStack_450 = puStack_530;
  if (uStack_538 != puStack_530) {
    puVar27 = uStack_538;
    do {
      uStack_438 = 0;
      bStack_434 = 0;
      abStack_433[0] = 0;
      abStack_433[1] = 0;
      abStack_433[2] = 0;
      if ((*puVar27 & 1) == 0) {
        pbStack_420 = *(byte **)(puVar27 + 4);
        uVar13 = *puVar27;
        uVar5 = puVar27[1];
        uVar6 = puVar27[2];
        abStack_433[3] = (byte)uVar13;
        abStack_433[4] = (byte)(uVar13 >> 8);
        uStack_42e = (undefined2)(uVar13 >> 0x10);
        bStack_42c = (byte)uVar5;
        bStack_42b = (byte)(uVar5 >> 8);
        bStack_42a = (byte)(uVar5 >> 0x10);
        bStack_429 = (byte)(uVar5 >> 0x18);
        bStack_428 = (byte)uVar6;
        bStack_427 = (byte)(uVar6 >> 8);
        bStack_426 = (byte)(uVar6 >> 0x10);
        bStack_425 = (byte)(uVar6 >> 0x18);
        uStack_424 = puVar27[3];
      }
      else {
        func_0x0412e5e0(abStack_433 + 3,*(undefined8 *)(puVar27 + 4),*(undefined8 *)(puVar27 + 2));
      }
      puStack_418 = (uint *)0x0;
      if ((abStack_433[3] & 1) == 0) {
        if (abStack_433[3] >> 1 != 0) goto LAB_09b0632d;
LAB_09b06420:
        uVar31 = 0;
      }
      else {
        if (CONCAT44(uStack_424,
                     CONCAT13(bStack_425,CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428)))) == 0
           ) goto LAB_09b06420;
LAB_09b0632d:
        pbVar36 = abStack_433 + 4;
        if ((abStack_433[3] & 1) != 0) {
          pbVar36 = pbStack_420;
        }
        if ((pbVar36 == (byte *)0x0) || (*pbVar36 == 0)) goto LAB_09b06420;
        uVar38 = func_0x0eee2e90(pbVar36);
        uVar31 = 0xcbf29ce484222325;
        if (uVar38 != 0) {
          if (7 < uVar38) {
            uVar24 = uVar38 & 0xfffffffffffffff8;
            do {
              uVar31 = (((((((uVar31 * 0x100000001b3 ^ (ulong)*pbVar36) * 0x100000001b3 ^
                            (ulong)pbVar36[1]) * 0x100000001b3 ^ (ulong)pbVar36[2]) * 0x100000001b3
                          ^ (ulong)pbVar36[3]) * 0x100000001b3 ^ (ulong)pbVar36[4]) * 0x100000001b3
                        ^ (ulong)pbVar36[5]) * 0x100000001b3 ^ (ulong)pbVar36[6]) * 0x100000001b3 ^
                       (ulong)pbVar36[7];
              pbVar36 = pbVar36 + 8;
              uVar24 = uVar24 - 8;
            } while (uVar24 != 0);
          }
          if ((uVar38 & 7) != 0) {
            uVar24 = 0;
            do {
              uVar31 = uVar31 * 0x100000001b3 ^ (ulong)pbVar36[uVar24];
              uVar24 = uVar24 + 1;
            } while (((uint)uVar38 & 7) != uVar24);
          }
        }
      }
      uStack_438 = (uint)uVar31;
      bStack_434 = (byte)(uVar31 >> 0x20);
      abStack_433[0] = (byte)(uVar31 >> 0x28);
      abStack_433[1] = (byte)(uVar31 >> 0x30);
      abStack_433[2] = (byte)(uVar31 >> 0x38);
      plVar17 = (long *)func_0x09b3da50(&DAT_0f6b4c20,&uStack_438);
      bVar1 = abStack_433[3];
      if ((plVar17 == (long *)0x0) || (plVar39 = (long *)*plVar17, plVar39 == (long *)0x0)) {
        plVar39 = (long *)0x0;
      }
      else {
        if ((abStack_433[3] & 1) == 0) {
          uVar31 = (ulong)(abStack_433[3] >> 1);
          pbVar36 = abStack_433 + 4;
        }
        else {
          uVar31 = CONCAT44(uStack_424,
                            CONCAT13(bStack_425,CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428))
                                    ));
          pbVar36 = pbStack_420;
        }
        lVar18 = CONCAT17(abStack_433[2],
                          CONCAT16(abStack_433[1],
                                   CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))));
        puVar15 = puStack_418;
        do {
          if (plVar39[2] != lVar18) {
LAB_09b066f0:
            plVar39[6] = 0;
            goto joined_r0x09b0648d;
          }
          puVar16 = (uint *)(plVar39 + 2);
          if (((undefined4 *)plVar39[6] != &uStack_438) || (puVar15 != puVar16)) {
            bVar2 = *(byte *)(plVar39 + 3);
            if ((bVar2 & 1) == 0) {
              uVar38 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar38 = plVar39[4];
            }
            if (uVar38 == uVar31) {
              if ((bVar2 & 1) == 0) {
                lVar21 = (long)plVar39 + 0x19;
              }
              else {
                lVar21 = plVar39[5];
              }
              iVar12 = func_0x0eee3000(lVar21,pbVar36,uVar31);
              if (iVar12 == 0) {
                plVar39[6] = (long)&uStack_438;
                puVar15 = puVar16;
                puStack_418 = puVar16;
                goto LAB_09b06691;
              }
            }
            goto LAB_09b066f0;
          }
LAB_09b06691:
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
        plVar39 = (long *)0x0;
      }
joined_r0x09b0648d:
      if ((bVar1 & 1) != 0) {
        func_0x0412a280(pbStack_420,
                        CONCAT17(bStack_429,
                                 CONCAT16(bStack_42a,
                                          CONCAT15(bStack_42b,
                                                   CONCAT14(bStack_42c,
                                                            CONCAT22(uStack_42e,
                                                                     CONCAT11(abStack_433[4],
                                                                              abStack_433[3])))))) &
                        0xfffffffffffffffe);
      }
      if (plVar17 != plVar39) {
        func_0x04863060(auStack_500,0);
        func_0x048631d0(&uStack_438,puVar27);
        uVar20 = func_0x04864680(auStack_500,&UNK_01410416);
        func_0x04863790(uVar20,&uStack_438);
        func_0x04863610(&uStack_438);
        if ((*(byte *)(plVar17 + 0xe) & 1) == 0) {
          if (*(byte *)(plVar17 + 0xe) >> 1 == 0) goto LAB_09b065d0;
LAB_09b06519:
          func_0x048631d0(&uStack_438,plVar17 + 0xe);
          uVar20 = func_0x04864680(auStack_500,&UNK_011ea907);
          func_0x04863790(uVar20,&uStack_438);
          func_0x04863610(&uStack_438);
          lVar18 = plVar17[0x16];
          if (0x3ff < lVar18) goto LAB_09b0656d;
LAB_09b065df:
          if (lVar18 < 0x80) {
            switch(lVar18) {
            case 1:
              abStack_433[0] = 0x74;
              uStack_438 = 0x6f6c660a;
              bStack_434 = 0x61;
              pbVar36 = abStack_433 + 1;
              break;
            case 2:
              uStack_438 = 0x73616818;
              bStack_434 = 0x68;
              abStack_433[0] = 0x5f;
              abStack_433[1] = 0x74;
              abStack_433[2] = 0x79;
              abStack_433[3] = 0x70;
              abStack_433[4] = 0x65;
              uStack_42e = 0x365f;
              bStack_42c = 0x34;
              pbVar36 = &bStack_42b;
              break;
            default:
              goto LAB_09b06bac;
            case 4:
              uStack_438 = 0x74636112;
              bStack_434 = 0x6f;
              abStack_433[0] = 0x72;
              abStack_433[1] = 0x5f;
              abStack_433[2] = 0x70;
              abStack_433[3] = 0x74;
              abStack_433[4] = 0x72;
              pbVar36 = (byte *)&uStack_42e;
              break;
            case 8:
              uStack_438 = 0x74636118;
              bStack_434 = 0x6f;
              abStack_433[0] = 0x72;
              abStack_433[1] = 0x5f;
              abStack_433[2] = 0x69;
              abStack_433[3] = 100;
              abStack_433[4] = 0x5f;
              uStack_42e = 0x7470;
              bStack_42c = 0x72;
              pbVar36 = &bStack_42b;
              break;
            case 0xc:
              uStack_438 = 0x74636118;
              bStack_434 = 0x6f;
              abStack_433[0] = 0x72;
              abStack_433[1] = 0x5f;
              abStack_433[2] = 0x73;
              abStack_433[3] = 0x69;
              abStack_433[4] = 0x6e;
              uStack_42e = 0x6c67;
              bStack_42c = 0x65;
              pbVar36 = &bStack_42b;
              break;
            case 0x10:
              abStack_433[4] = 0x72;
              uStack_42e = 0x7961;
              bStack_42c = 0x5f;
              bStack_42b = 0x70;
              bStack_42a = 0x74;
              bStack_429 = 0x72;
              uVar20 = 0x72615f726f746361;
              goto LAB_09b06b20;
            case 0x20:
              uStack_438._1_3_ = (undefined3)_UNK_011dd64a;
              uStack_438 = CONCAT31(uStack_438._1_3_,0x24);
              bStack_434 = (byte)((uint)_UNK_011dd64a >> 0x18);
              abStack_433[0] = (byte)_UNK_011dd64e;
              abStack_433[1] = (byte)((uint)_UNK_011dd64e >> 8);
              abStack_433[2] = (byte)((uint)_UNK_011dd64e >> 0x10);
              abStack_433[3] = (byte)((uint)_UNK_011dd64e >> 0x18);
              abStack_433[4] = (byte)_UNK_011dd652;
              uStack_42e = (undefined2)((uint)_UNK_011dd652 >> 8);
              bStack_42c = (byte)((uint)_UNK_011dd652 >> 0x18);
              bStack_42b = (byte)_UNK_011dd656;
              bStack_42a = (byte)((uint)_UNK_011dd656 >> 8);
              bStack_429 = (byte)((uint)_UNK_011dd656 >> 0x10);
              bStack_428 = (byte)((uint)_UNK_011dd656 >> 0x18);
              bStack_427 = 0x74;
              bStack_426 = 0x72;
              pbVar36 = &bStack_425;
              break;
            case 0x30:
              uStack_438 = 0x74636116;
              bStack_434 = 0x6f;
              abStack_433[0] = 0x72;
              abStack_433[1] = 0x5f;
              abStack_433[2] = 0x61;
              abStack_433[3] = 0x72;
              abStack_433[4] = 0x72;
              uStack_42e = 0x7961;
              pbVar36 = &bStack_42c;
              break;
            case 0x3c:
              abStack_433[0] = 0x72;
              uStack_438 = 0x7463610a;
              bStack_434 = 0x6f;
              pbVar36 = abStack_433 + 1;
              break;
            case 0x40:
              abStack_433[4] = 0x72;
              uStack_42e = 0x6169;
              bStack_42c = 0x62;
              bStack_42b = 0x6c;
              uVar20 = 0x61765f7961727261;
code_r0x09b06b79:
              bStack_42a = 0x65;
              uStack_438._1_3_ = (undefined3)uVar20;
              uStack_438 = CONCAT31(uStack_438._1_3_,0x1c);
              bStack_434 = (byte)((ulong)uVar20 >> 0x18);
              abStack_433[0] = (byte)((ulong)uVar20 >> 0x20);
              abStack_433[1] = (byte)((ulong)uVar20 >> 0x28);
              abStack_433[2] = (byte)((ulong)uVar20 >> 0x30);
              abStack_433[3] = (byte)((ulong)uVar20 >> 0x38);
              pbVar36 = &bStack_429;
            }
          }
          else {
            if (lVar18 == 0x80) {
              abStack_433[4] = 0x65;
              uStack_42e = 0x7478;
              bStack_42c = 0x75;
              bStack_42b = 0x72;
              uVar20 = 0x745f746e65696c63;
              goto code_r0x09b06b79;
            }
            uVar43 = _DAT_0141cd81;
            uVar44 = _UNK_0141cd85;
            uVar45 = _UNK_0141cd89;
            uVar46 = _UNK_0141cd8d;
            if (lVar18 != 0x100) {
              if (lVar18 != 0x200) goto LAB_09b06bac;
              uStack_438._1_3_ = (undefined3)_DAT_01451207;
              uStack_438 = CONCAT31(uStack_438._1_3_,0x28);
              bStack_434 = (byte)((uint)_DAT_01451207 >> 0x18);
              abStack_433[0] = (byte)_UNK_0145120b;
              abStack_433[1] = (byte)((uint)_UNK_0145120b >> 8);
              abStack_433[2] = (byte)((uint)_UNK_0145120b >> 0x10);
              abStack_433[3] = (byte)((uint)_UNK_0145120b >> 0x18);
              abStack_433[4] = (byte)_UNK_0145120f;
              uStack_42e = (undefined2)((uint)_UNK_0145120f >> 8);
              bStack_42c = (byte)((uint)_UNK_0145120f >> 0x18);
              bStack_42b = (byte)_UNK_01451213;
              bStack_42a = (byte)((uint)_UNK_01451213 >> 8);
              bStack_429 = (byte)((uint)_UNK_01451213 >> 0x10);
              bStack_428 = (byte)((uint)_UNK_01451213 >> 0x18);
              bStack_427 = 0x65;
              bStack_426 = 0x74;
              bStack_425 = 0x72;
              uStack_424 = CONCAT31(uStack_424._1_3_,0x79);
              pbVar36 = (byte *)((long)&uStack_424 + 1);
              goto LAB_09b06bd0;
            }
LAB_09b06b96:
            uStack_438._1_3_ = (undefined3)uVar43;
            uStack_438 = CONCAT31(uStack_438._1_3_,0x20);
            bStack_434 = (byte)((uint)uVar43 >> 0x18);
            abStack_433[0] = (byte)uVar44;
            abStack_433[1] = (byte)((uint)uVar44 >> 8);
            abStack_433[2] = (byte)((uint)uVar44 >> 0x10);
            abStack_433[3] = (byte)((uint)uVar44 >> 0x18);
            abStack_433[4] = (byte)uVar45;
            uStack_42e = (undefined2)((uint)uVar45 >> 8);
            bStack_42c = (byte)((uint)uVar45 >> 0x18);
            bStack_42b = (byte)uVar46;
            bStack_42a = (byte)((uint)uVar46 >> 8);
            bStack_429 = (byte)((uint)uVar46 >> 0x10);
            bStack_428 = (byte)((uint)uVar46 >> 0x18);
            pbVar36 = &bStack_427;
          }
        }
        else {
          if (plVar17[0xf] != 0) goto LAB_09b06519;
LAB_09b065d0:
          lVar18 = plVar17[0x16];
          if (lVar18 < 0x400) goto LAB_09b065df;
LAB_09b0656d:
          if (lVar18 < 0x8500) {
            if (lVar18 < 0x2000) {
              if (lVar18 == 0x400) {
                abStack_433[4] = 0x61;
                uStack_42e = 0x6972;
                bStack_42c = 0x61;
                bStack_42b = 0x62;
                bStack_42a = 0x6c;
                bStack_429 = 0x65;
                uVar20 = 0x765f797469746e65;
LAB_09b06b20:
                uStack_438._1_3_ = (undefined3)uVar20;
                uStack_438 = CONCAT31(uStack_438._1_3_,0x1e);
                bStack_434 = (byte)((ulong)uVar20 >> 0x18);
                abStack_433[0] = (byte)((ulong)uVar20 >> 0x20);
                abStack_433[1] = (byte)((ulong)uVar20 >> 0x28);
                abStack_433[2] = (byte)((ulong)uVar20 >> 0x30);
                abStack_433[3] = (byte)((ulong)uVar20 >> 0x38);
                pbVar36 = &bStack_428;
              }
              else {
                uVar43 = _DAT_01211ec1;
                uVar44 = _UNK_01211ec5;
                uVar45 = _UNK_01211ec9;
                uVar46 = _UNK_01211ecd;
                if ((lVar18 == 0x800) ||
                   (uVar43 = _DAT_014021b0, uVar44 = _UNK_014021b4, uVar45 = _UNK_014021b8,
                   uVar46 = _UNK_014021bc, lVar18 == 0x1000)) {
                  uStack_438._1_3_ = (undefined3)uVar43;
                  uStack_438 = CONCAT31(uStack_438._1_3_,0x22);
                  bStack_434 = (byte)((uint)uVar43 >> 0x18);
                  abStack_433[0] = (byte)uVar44;
                  abStack_433[1] = (byte)((uint)uVar44 >> 8);
                  abStack_433[2] = (byte)((uint)uVar44 >> 0x10);
                  abStack_433[3] = (byte)((uint)uVar44 >> 0x18);
                  abStack_433[4] = (byte)uVar45;
                  uStack_42e = (undefined2)((uint)uVar45 >> 8);
                  bStack_42c = (byte)((uint)uVar45 >> 0x18);
                  bStack_42b = (byte)uVar46;
                  bStack_42a = (byte)((uint)uVar46 >> 8);
                  bStack_429 = (byte)((uint)uVar46 >> 0x10);
                  bStack_428 = (byte)((uint)uVar46 >> 0x18);
                  bStack_427 = 0x65;
                  pbVar36 = &bStack_426;
                }
                else {
LAB_09b06bac:
                  pbVar36 = abStack_433 + 3;
                  abStack_433[0] = 0x6f;
                  abStack_433[1] = 0x77;
                  abStack_433[2] = 0x6e;
                  uStack_438 = 0x6b6e750e;
                  bStack_434 = 0x6e;
                }
              }
            }
            else {
              if (lVar18 == 0x2000) {
                abStack_433[4] = 99;
                uStack_42e = 0x6563;
                bStack_42c = 0x73;
                bStack_42b = 0x73;
                bStack_42a = 0x6f;
                bStack_429 = 0x72;
                uVar20 = 0x615f7265626d656d;
                goto LAB_09b06b20;
              }
              if (lVar18 == 0x4000) {
                uStack_438 = 0x6d656d18;
                bStack_434 = 0x62;
                abStack_433[0] = 0x65;
                abStack_433[1] = 0x72;
                abStack_433[2] = 0x5f;
                abStack_433[3] = 0x61;
                abStack_433[4] = 0x72;
                uStack_42e = 0x6172;
                bStack_42c = 0x79;
                pbVar36 = &bStack_42b;
              }
              else {
                if (lVar18 != 0x8000) goto LAB_09b06bac;
                abStack_433[4] = 0x69;
                uStack_42e = 0x6261;
                bStack_42c = 0x6c;
                bStack_42b = 0x65;
                uStack_438 = 0x6d65741a;
                bStack_434 = 0x70;
                abStack_433[0] = 0x5f;
                abStack_433[1] = 0x76;
                abStack_433[2] = 0x61;
                abStack_433[3] = 0x72;
                pbVar36 = &bStack_42a;
              }
            }
          }
          else if (lVar18 < 0x20000) {
            if (lVar18 == 0x8500) {
              uVar20 = 0x656c626169726176;
            }
            else {
              uVar43 = _DAT_0134a310;
              uVar44 = _UNK_0134a314;
              uVar45 = _UNK_0134a318;
              uVar46 = _UNK_0134a31c;
              if (lVar18 == 0x10000) goto LAB_09b06b96;
              if (lVar18 != 0x11880) goto LAB_09b06bac;
              uVar20 = 0x656372756f736572;
            }
            uStack_438._1_3_ = (undefined3)uVar20;
            uStack_438 = CONCAT31(uStack_438._1_3_,0x10);
            bStack_434 = (byte)((ulong)uVar20 >> 0x18);
            abStack_433[0] = (byte)((ulong)uVar20 >> 0x20);
            abStack_433[1] = (byte)((ulong)uVar20 >> 0x28);
            abStack_433[2] = (byte)((ulong)uVar20 >> 0x30);
            abStack_433[3] = (byte)((ulong)uVar20 >> 0x38);
            pbVar36 = abStack_433 + 4;
          }
          else if (lVar18 == 0x20000) {
            uStack_438 = 0x6f6f6208;
            bStack_434 = 0x6c;
            pbVar36 = abStack_433;
          }
          else if (lVar18 == 0x20001) {
            abStack_433[0] = 0x65;
            abStack_433[1] = 0x72;
            uStack_438 = 0x6d756e0c;
            bStack_434 = 0x62;
            pbVar36 = abStack_433 + 2;
          }
          else {
            if (lVar18 != 0x40000) goto LAB_09b06bac;
            abStack_433[0] = 0x69;
            abStack_433[1] = 0x78;
            uStack_438 = 0x74616d0c;
            bStack_434 = 0x72;
            pbVar36 = abStack_433 + 2;
          }
        }
LAB_09b06bd0:
        *pbVar36 = 0;
        func_0x048631d0(auStack_518,&uStack_438);
        uVar20 = func_0x04864680(auStack_500,&UNK_012e18cb);
        func_0x04863790(uVar20,auStack_518);
        func_0x04863610(auStack_518);
        if ((uStack_438 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_424,
                                   CONCAT13(bStack_425,
                                            CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428)))),
                          CONCAT17(abStack_433[2],
                                   CONCAT16(abStack_433[1],
                                            CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))
                                           )) & 0xfffffffffffffffe);
        }
        func_0x048630e0(&uStack_438,(int)plVar17[0x11]);
        uVar20 = func_0x04864680(auStack_500,&UNK_0139bf5c);
        func_0x04863790(uVar20,&uStack_438);
        func_0x04863610(&uStack_438);
        if ((ulong)plVar17[0x12] < 0x7fffffff) {
          func_0x048630e0(&uStack_438);
          uVar20 = func_0x04864680(auStack_500,&UNK_012c7c91);
          func_0x04863790(uVar20,&uStack_438);
          func_0x04863610(&uStack_438);
        }
        if (plVar17[0x13] != plVar17[0x14]) {
          func_0x04863060(&uStack_438,6);
          piVar3 = (int *)plVar17[0x14];
          for (piVar28 = (int *)plVar17[0x13]; piVar28 != piVar3; piVar28 = piVar28 + 1) {
            if ((ulong)*(uint *)(&UNK_01dd204c + (long)*piVar28 * 4) < 7) {
              func_0x048631d0(auStack_518,
                              &DAT_0f720e60 +
                              (ulong)*(uint *)(&UNK_01dd204c + (long)*piVar28 * 4) * 0x18);
              func_0x04864bf0(&uStack_438,auStack_518);
              func_0x04863610(auStack_518);
            }
          }
          cVar10 = func_0x04864220(&uStack_438);
          if (cVar10 == '\0') {
            uVar20 = func_0x04864680(auStack_500,&UNK_014829b8);
            func_0x04863740(uVar20,&uStack_438);
          }
          func_0x04863610(&uStack_438);
        }
        uStack_438 = 0;
        bStack_434 = 0;
        abStack_433[0] = 0;
        abStack_433[1] = 0;
        abStack_433[2] = 0;
        abStack_433[3] = 0;
        abStack_433[4] = 0;
        uStack_42e = 0;
        bStack_42c = 0;
        bStack_42b = 0;
        bStack_42a = 0;
        bStack_429 = 0;
        bStack_428 = 0;
        bStack_427 = 0;
        bStack_426 = 0;
        bStack_425 = 0;
        uStack_424 = 0;
        lVar18 = func_0x09b3dd30(&pbStack_4d8,puVar27);
        if (lVar18 != 0) {
          lVar21 = *(long *)(lVar18 + 0x28);
          lVar37 = *(long *)(lVar18 + 0x30);
          if (lVar21 != lVar37) {
            if (&uStack_438 != (undefined4 *)(lVar18 + 0x28)) {
              func_0x0490ae00(&uStack_438,lVar21,lVar37,(lVar37 - lVar21 >> 3) * -0x5555555555555555
                             );
            }
            lVar21 = CONCAT17(abStack_433[2],
                              CONCAT16(abStack_433[1],
                                       CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))));
            lVar37 = CONCAT17(bStack_429,
                              CONCAT16(bStack_42a,
                                       CONCAT15(bStack_42b,
                                                CONCAT14(bStack_42c,
                                                         CONCAT22(uStack_42e,
                                                                  CONCAT11(abStack_433[4],
                                                                           abStack_433[3]))))));
            uVar31 = (lVar37 - lVar21 >> 3) * -0x5555555555555555;
            lVar18 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar13 = 0;
            if (lVar37 != lVar21) {
              uVar13 = ((uint)lVar18 ^ 0x3f) * 2 ^ 0x7e;
            }
            func_0x049498f0(lVar21,lVar37,auStack_518,uVar13,1);
          }
        }
        func_0x04863060(auStack_480,6);
        do {
          func_0x04863060(auStack_4a0,0);
          func_0x0d8a1ee0(auStack_518,(int)(short)plVar17[0x17]);
          func_0x0d8a1ee0(auStack_470,(int)*(short *)((long)plVar17 + 0xba));
          func_0x0ee34300(&bStack_4f0,auStack_518);
          func_0x048631d0(auStack_448,&bStack_4f0);
          uVar20 = func_0x04864680(auStack_4a0,&UNK_011dd61e);
          func_0x04863790(uVar20,auStack_448);
          func_0x04863610(auStack_448);
          if ((bStack_4f0 & 1) != 0) {
            func_0x0412a280(uStack_4e0,CONCAT71(uStack_4ef,bStack_4f0) & 0xfffffffffffffffe);
          }
          if (*(short *)((long)plVar17 + 0xba) != 0xd) {
            func_0x0ee34300(&bStack_4f0,auStack_470);
            func_0x048631d0(auStack_448,&bStack_4f0);
            uVar20 = func_0x04864680(auStack_4a0,&UNK_011c2bc5);
            func_0x04863790(uVar20,auStack_448);
            func_0x04863610(auStack_448);
            if ((bStack_4f0 & 1) != 0) {
              func_0x0412a280(uStack_4e0,CONCAT71(uStack_4ef,bStack_4f0) & 0xfffffffffffffffe);
            }
          }
          if (CONCAT17(abStack_433[2],
                       CONCAT16(abStack_433[1],
                                CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438)))) !=
              CONCAT17(bStack_429,
                       CONCAT16(bStack_42a,
                                CONCAT15(bStack_42b,
                                         CONCAT14(bStack_42c,
                                                  CONCAT22(uStack_42e,
                                                           CONCAT11(abStack_433[4],abStack_433[3])))
                                        )))) {
            func_0x04863060(&bStack_4f0,6);
            lVar21 = CONCAT17(bStack_429,
                              CONCAT16(bStack_42a,
                                       CONCAT15(bStack_42b,
                                                CONCAT14(bStack_42c,
                                                         CONCAT22(uStack_42e,
                                                                  CONCAT11(abStack_433[4],
                                                                           abStack_433[3]))))));
            for (lVar18 = CONCAT17(abStack_433[2],
                                   CONCAT16(abStack_433[1],
                                            CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))
                                           )); lVar18 != lVar21; lVar18 = lVar18 + 0x18) {
              func_0x048631d0(auStack_448,lVar18);
              func_0x04864bf0(&bStack_4f0,auStack_448);
              func_0x04863610(auStack_448);
            }
            uVar20 = func_0x04864680(auStack_4a0,&UNK_01367847);
            func_0x04863740(uVar20,&bStack_4f0);
            func_0x04863610(&bStack_4f0);
          }
          func_0x04864a50(auStack_480,auStack_4a0);
          if ((uStack_460 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_460 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_460 = 0;
          if ((uStack_468 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_468 & 0xff00ffffffffffff) - 8)
            ;
          }
          if ((uStack_508 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_508 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_508 = 0;
          if ((uStack_510 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
          }
          func_0x04863610(auStack_4a0);
          plVar17 = (long *)*plVar17;
        } while (plVar17 != plVar39);
        uVar20 = func_0x04864680(auStack_500,&UNK_011f7a2f);
        func_0x04863740(uVar20,auStack_480);
        func_0x04864a50(auStack_490,auStack_500);
        func_0x04863610(auStack_480);
        bVar8 = abStack_433[2];
        bVar7 = abStack_433[1];
        bVar2 = abStack_433[0];
        bVar1 = bStack_434;
        uVar13 = uStack_438;
        lVar18 = CONCAT17(abStack_433[2],
                          CONCAT16(abStack_433[1],
                                   CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))));
        if (lVar18 != 0) {
          lVar21 = CONCAT17(bStack_429,
                            CONCAT16(bStack_42a,
                                     CONCAT15(bStack_42b,
                                              CONCAT14(bStack_42c,
                                                       CONCAT22(uStack_42e,
                                                                CONCAT11(abStack_433[4],
                                                                         abStack_433[3]))))));
          if (lVar18 != lVar21) {
            do {
              if ((*(byte *)(lVar21 + -0x18) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar21 + -8),
                                *(ulong *)(lVar21 + -0x18) & 0xfffffffffffffffe);
              }
              lVar21 = lVar21 + -0x18;
            } while (lVar21 != lVar18);
            lVar18 = CONCAT17(abStack_433[2],
                              CONCAT16(abStack_433[1],
                                       CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))));
          }
          abStack_433[3] = (byte)uVar13;
          abStack_433[4] = (byte)(uVar13 >> 8);
          uStack_42e = (undefined2)(uVar13 >> 0x10);
          bStack_42c = bVar1;
          bStack_42b = bVar2;
          bStack_42a = bVar7;
          bStack_429 = bVar8;
          func_0x0412a280(lVar18,CONCAT44(uStack_424,
                                          CONCAT13(bStack_425,
                                                   CONCAT12(bStack_426,
                                                            CONCAT11(bStack_427,bStack_428)))) -
                                 lVar18);
        }
        func_0x04863610(auStack_500);
      }
      puVar27 = puVar27 + 6;
    } while (puVar27 != puStack_450);
  }
  puVar15 = uStack_538;
  puVar27 = puStack_530;
  if (uStack_538 != (uint *)0x0) {
    for (; puVar15 != puVar27; puVar27 = puVar27 + -6) {
      if ((puVar27[-6] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar27 + -2),*(ulong *)(puVar27 + -6) & 0xfffffffffffffffe)
        ;
      }
    }
    puStack_530 = puVar15;
    func_0x0412a280(uStack_538,(long)puStack_528 - (long)uStack_538);
  }
  func_0x04897b30(&pbStack_4d8,puStack_4c8);
  pbVar36 = pbStack_4d8;
  pbStack_4d8 = (byte *)0x0;
  if (pbVar36 != (byte *)0x0) {
    func_0x0412a280(pbVar36,uStack_4d0 << 3);
  }
  uVar20 = func_0x04864680(auStack_4b0,&UNK_011a7981);
  func_0x04863790(uVar20,auStack_490);
  func_0x04863610(auStack_490);
  func_0x04863060(auStack_518,6);
  lVar18 = 0;
  puVar40 = (ushort *)0x0;
  puStack_540 = (ushort *)0x0;
  puVar41 = (ushort *)0x0;
  do {
    lVar21 = (long)&uStack_438 + 1;
    uVar20 = *(undefined8 *)(&UNK_0f2bc880 + lVar18 * 0x30);
    uVar31 = func_0x0eee2e90(uVar20);
    puVar35 = puVar41;
    if (uVar31 != 0) {
      if (0xfffffffffffffff7 < uVar31) goto LAB_09b07acd;
      if (uVar31 < 0x17) {
        uStack_438 = CONCAT31(uStack_438._1_3_,(byte)uVar31 * '\x02');
      }
      else {
        lVar37 = (uVar31 | 7) + 1;
        if ((uVar31 | 7) == 0x17) {
          lVar37 = 0x1a;
        }
        lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
        if (lVar21 == 0) {
          func_0x0eec74c0(lVar37,0);
        }
        bStack_428 = (byte)lVar21;
        bStack_427 = (byte)((ulong)lVar21 >> 8);
        bStack_426 = (byte)((ulong)lVar21 >> 0x10);
        bStack_425 = (byte)((ulong)lVar21 >> 0x18);
        uStack_424 = (uint)((ulong)lVar21 >> 0x20);
        uStack_438 = (uint)lVar37 | 1;
        bStack_434 = (byte)((ulong)lVar37 >> 0x20);
        abStack_433[0] = (byte)((ulong)lVar37 >> 0x28);
        abStack_433[1] = (byte)((ulong)lVar37 >> 0x30);
        abStack_433[2] = (byte)((ulong)lVar37 >> 0x38);
        abStack_433[4] = (byte)(uVar31 >> 8);
        uStack_42e = (undefined2)(uVar31 >> 0x10);
        bStack_42c = (byte)(uVar31 >> 0x20);
        bStack_42b = (byte)(uVar31 >> 0x28);
        bStack_42a = (byte)(uVar31 >> 0x30);
        bStack_429 = (byte)(uVar31 >> 0x38);
        abStack_433[3] = (byte)uVar31;
      }
      func_0x0eee2ee0(lVar21,uVar20,uVar31);
      *(undefined1 *)(lVar21 + uVar31) = 0;
      bVar42 = (uStack_438 & 1) == 0;
      pcVar23 = (char *)CONCAT44(uStack_424,
                                 CONCAT13(bStack_425,
                                          CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428))));
      pcVar22 = pcVar23;
      if (bVar42) {
        pcVar22 = (char *)((long)&uStack_438 + 1);
      }
      uVar31 = (ulong)((byte)uStack_438 >> 1);
      if (!bVar42) {
        uVar31 = CONCAT17(bStack_429,
                          CONCAT16(bStack_42a,
                                   CONCAT15(bStack_42b,
                                            CONCAT14(bStack_42c,
                                                     CONCAT22(uStack_42e,
                                                              CONCAT11(abStack_433[4],abStack_433[3]
                                                                      ))))));
      }
      uVar38 = 5;
      if (uVar31 < 5) {
        uVar38 = uVar31;
      }
      pcVar25 = pcVar22 + uVar38;
      pcVar32 = pcVar25;
      pcVar33 = pcVar22;
      if (uVar31 != 0) {
        while( true ) {
          do {
            do {
              do {
                pcVar34 = pcVar33 + 2;
                while (pcVar33 = pcVar34 + -1, pcVar34[-2] != 'm') {
                  pcVar34 = pcVar34 + 1;
                  if (pcVar33 == pcVar25) goto LAB_09b07450;
                }
                if (pcVar33 == pcVar25) goto LAB_09b07450;
              } while (*pcVar33 != 'a');
              if (pcVar34 == pcVar25) goto LAB_09b07450;
            } while (*pcVar34 != 't');
            if (pcVar34 + 1 == pcVar25) goto LAB_09b07450;
          } while (pcVar34[1] != 'h');
          if (pcVar34 + 2 == pcVar25) break;
          pcVar33 = pcVar34 + -1;
          if (pcVar34[2] == '.') {
            pcVar32 = pcVar34 + -2;
          }
        }
      }
LAB_09b07450:
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(pcVar23,CONCAT17(abStack_433[2],
                                         CONCAT16(abStack_433[1],
                                                  CONCAT15(abStack_433[0],
                                                           CONCAT14(bStack_434,uStack_438)))) &
                                0xfffffffffffffffe);
      }
      if (pcVar32 != pcVar25 && pcVar32 == pcVar22) {
        if (puVar40 < puStack_540) {
          *puVar40 = (ushort)lVar18;
          puVar40 = puVar40 + 1;
        }
        else {
          lVar37 = (long)puVar40 - (long)puVar41;
          lVar21 = lVar37 >> 1;
          if (lVar21 < -1) goto LAB_09b07ae0;
          uVar38 = (long)puStack_540 - (long)puVar41;
          uVar31 = lVar21 + 1U;
          if (lVar21 + 1U < uVar38) {
            uVar31 = uVar38;
          }
          uVar24 = 0x7fffffffffffffff;
          if (uVar38 < 0x7ffffffffffffffe) {
            uVar24 = uVar31;
          }
          if ((long)uVar24 < 0) goto LAB_09b07adb;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 2);
          if (lVar19 == 0) {
            func_0x0eec74c0(uVar24 * 2,0);
          }
          puStack_540 = (ushort *)(uVar24 * 2 + lVar19);
          *(ushort *)(lVar19 + lVar37) = (ushort)lVar18;
          puVar40 = (ushort *)(lVar37 + lVar19 + 2);
          puVar35 = (ushort *)(lVar37 + lVar19 + lVar21 * -2);
          func_0x0eee2f00(puVar35,puVar41);
          if (puVar41 != (ushort *)0x0) {
            func_0x0412a280(puVar41,uVar38);
          }
        }
      }
    }
    lVar18 = lVar18 + 1;
    puVar41 = puVar35;
  } while (lVar18 != 0x6d);
  uVar31 = (long)puVar40 - (long)puVar35 >> 1;
  lVar18 = 0x3f;
  if (uVar31 != 0) {
    for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar13 = 0;
  if (puVar40 != puVar35) {
    uVar13 = ((uint)lVar18 ^ 0x3f) * 2 ^ 0x7e;
  }
  func_0x09b202f0(puVar35,puVar40,uVar13,1);
  if (puVar40 != puVar35) {
    do {
      func_0x04863060(&pbStack_4d8,0);
      puVar29 = &UNK_01be0131;
      if (*puVar41 < 0x6d) {
        puVar29 = *(undefined **)(&UNK_0f2bc880 + (uint)*puVar41 * 0x30);
      }
      uVar31 = func_0x0eee2e90(puVar29);
      if (0xfffffffffffffff7 < uVar31) goto LAB_09b07ad6;
      if (uVar31 < 0x17) {
        uStack_438 = CONCAT31(uStack_438._1_3_,(byte)uVar31 * '\x02');
        lVar21 = (long)&uStack_438 + 1;
        if (uVar31 != 0) goto LAB_09b0768b;
      }
      else {
        lVar18 = 0x1a;
        if ((uVar31 | 7) != 0x17) {
          lVar18 = (uVar31 | 7) + 1;
        }
        lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
        if (lVar21 == 0) {
          func_0x0eec74c0(lVar18,0);
        }
        bStack_428 = (byte)lVar21;
        bStack_427 = (byte)((ulong)lVar21 >> 8);
        bStack_426 = (byte)((ulong)lVar21 >> 0x10);
        bStack_425 = (byte)((ulong)lVar21 >> 0x18);
        uStack_424 = (uint)((ulong)lVar21 >> 0x20);
        uStack_438 = (uint)lVar18 | 1;
        bStack_434 = (byte)((ulong)lVar18 >> 0x20);
        abStack_433[0] = (byte)((ulong)lVar18 >> 0x28);
        abStack_433[1] = (byte)((ulong)lVar18 >> 0x30);
        abStack_433[2] = (byte)((ulong)lVar18 >> 0x38);
        abStack_433[4] = (byte)(uVar31 >> 8);
        uStack_42e = (undefined2)(uVar31 >> 0x10);
        bStack_42c = (byte)(uVar31 >> 0x20);
        bStack_42b = (byte)(uVar31 >> 0x28);
        bStack_42a = (byte)(uVar31 >> 0x30);
        bStack_429 = (byte)(uVar31 >> 0x38);
        abStack_433[3] = (byte)uVar31;
LAB_09b0768b:
        func_0x0eee2ee0(lVar21,puVar29,uVar31);
      }
      *(undefined1 *)(lVar21 + uVar31) = 0;
      func_0x048631d0(&uStack_538,&uStack_438);
      uVar20 = func_0x04864680(&pbStack_4d8,&UNK_01410416);
      func_0x04863790(uVar20,&uStack_538);
      func_0x04863610(&uStack_538);
      if ((uStack_438 & 1) == 0) {
        uVar13 = (uint)*puVar41;
        if (uVar13 < 0x6d) goto LAB_09b07701;
LAB_09b0779e:
        pcVar23 = "<unknown expression op>";
LAB_09b077ae:
        uVar11 = (ushort)uVar13;
        if (*pcVar23 == '\0') goto LAB_09b077c0;
LAB_09b0772d:
        func_0x04863120(&uStack_438);
        uVar20 = func_0x04864680(&pbStack_4d8,&UNK_011ea907);
        func_0x04863790(uVar20,&uStack_438);
        func_0x04863610(&uStack_438);
        uVar11 = *puVar41;
        if (0x6c < uVar11) goto LAB_09b07761;
LAB_09b077c6:
        uVar43 = *(undefined4 *)(&UNK_0f2bc888 + (uint)uVar11 * 0x30);
        uVar31 = *(ulong *)(&UNK_0f2bc890 + (uint)uVar11 * 0x30);
      }
      else {
        func_0x0412a280(CONCAT44(uStack_424,
                                 CONCAT13(bStack_425,
                                          CONCAT12(bStack_426,CONCAT11(bStack_427,bStack_428)))),
                        CONCAT17(abStack_433[2],
                                 CONCAT16(abStack_433[1],
                                          CONCAT15(abStack_433[0],CONCAT14(bStack_434,uStack_438))))
                        & 0xfffffffffffffffe);
        uVar13 = (uint)*puVar41;
        if (0x6c < uVar13) goto LAB_09b0779e;
LAB_09b07701:
        pcVar23 = *(char **)(&UNK_0f2bc878 + uVar13 * 0x30);
        if (pcVar23 != (char *)0x0) goto LAB_09b077ae;
        uVar11 = (ushort)uVar13;
        if (UNK_01bdffa0 != '\0') goto LAB_09b0772d;
LAB_09b077c0:
        if (uVar11 < 0x6d) goto LAB_09b077c6;
LAB_09b07761:
        uVar31 = 0xffffffffffffffff;
        uVar43 = 0;
      }
      func_0x048630e0(&uStack_438,uVar43);
      uVar20 = func_0x04864680(&pbStack_4d8,&UNK_0139bf5c);
      func_0x04863790(uVar20,&uStack_438);
      func_0x04863610(&uStack_438);
      if (uVar31 < 0x7fffffff) {
        func_0x048630e0(&uStack_438,uVar31 & 0xffffffff);
        uVar20 = func_0x04864680(&pbStack_4d8,&UNK_012c7c91);
        func_0x04863790(uVar20,&uStack_438);
        func_0x04863610(&uStack_438);
      }
      if ((*puVar41 < 0x6d) && ((long)*(int *)(&UNK_0f2bc898 + (uint)*puVar41 * 0x30) != 0x18)) {
        uVar13 = *(uint *)(&UNK_01dd204c + (long)*(int *)(&UNK_0f2bc898 + (uint)*puVar41 * 0x30) * 4
                          );
        if ((-1 < (long)(int)uVar13) && (uVar13 < 7)) {
          func_0x04863060(&uStack_438,6);
          func_0x048631d0(&uStack_538,&DAT_0f720e60 + (long)(int)uVar13 * 0x18);
          func_0x04864bf0(&uStack_438,&uStack_538);
          func_0x04863610(&uStack_538);
          uVar20 = func_0x04864680(&pbStack_4d8,&UNK_014829b8);
          func_0x04863740(uVar20,&uStack_438);
          func_0x04863610(&uStack_438);
        }
      }
      func_0x04864a50(auStack_518);
      func_0x04863610(&pbStack_4d8);
      puVar41 = puVar41 + 1;
    } while (puVar41 != puVar40);
  }
  if (puVar35 != (ushort *)0x0) {
    func_0x0412a280(puVar35,(long)puStack_540 - (long)puVar35);
  }
  uVar20 = func_0x04864680(auStack_4b0,&UNK_012fab94);
  func_0x04863790(uVar20,auStack_518);
  func_0x04863610(auStack_518);
  bVar42 = (*pbStack_458 & 1) != 0;
  pbStack_4d8 = pbStack_458 + 1;
  if (bVar42) {
    pbStack_4d8 = *(byte **)(pbStack_458 + 0x10);
  }
  uStack_4d0 = (ulong)(*pbStack_458 >> 1);
  if (bVar42) {
    uStack_4d0 = *(ulong *)(pbStack_458 + 8);
  }
  puStack_4c8 = &UNK_014829c4;
  uStack_4c0 = 0x1a;
  func_0x049151c0(&uStack_438,&pbStack_4d8,2,0x2f);
  if ((uint *)0xfffffffffffffff7 < puStack_38) goto LAB_09b07ae5;
  if (puStack_38 < (uint *)0x17) {
    uStack_538 = (uint *)CONCAT71(uStack_538._1_7_,(char)puStack_38 * '\x02');
    puVar15 = (uint *)((long)&uStack_538 + 1);
    puVar27 = puStack_38;
    if (puStack_38 == (uint *)0x0) goto LAB_09b07a64;
  }
  else {
    uVar38 = 0x1a;
    if (((ulong)puStack_38 | 7) != 0x17) {
      uVar38 = ((ulong)puStack_38 | 7) + 1;
    }
    puVar15 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38);
    if (puVar15 == (uint *)0x0) {
LAB_09b07ab9:
      func_0x0eec74c0(uVar38,0);
    }
    uStack_538 = (uint *)(uVar38 | 1);
    puVar27 = puStack_38;
    puStack_530 = puStack_38;
    puStack_528 = puVar15;
  }
  func_0x0eee2f00(puVar15,&uStack_438,puVar27);
  puStack_38 = puVar27;
LAB_09b07a64:
  *(byte *)((long)puVar15 + (long)puStack_38) = 0;
  func_0x09afaf30(auStack_4b0,&uStack_538);
  if (((ulong)uStack_538 & 1) != 0) {
    func_0x0412a280(puStack_528,(ulong)uStack_538 & 0xfffffffffffffffe);
  }
  func_0x04863610(auStack_4b0);
  return;
LAB_09b07acd:
  func_0x04882e30();
LAB_09b07ad6:
  func_0x04882e30();
LAB_09b07adb:
  FUN_04882eb0();
LAB_09b07ae0:
  func_0x09b202e0();
LAB_09b07ae5:
  uVar20 = func_0x04882e30();
  if (((ulong)uStack_538 & 1) != 0) {
    func_0x0412a280(puStack_528,(ulong)uStack_538 & 0xfffffffffffffffe);
    func_0x04863610(auStack_4b0);
    uVar20 = func_0x0eee2d70(uVar20);
    func_0x04863610(auStack_518);
    func_0x04863610(auStack_4b0);
    uVar20 = func_0x0eee2d70(uVar20);
    func_0x04863610(auStack_480);
    FUN_04886070(&uStack_438);
    func_0x04863610(auStack_500);
    puVar15 = uStack_538;
    puVar27 = puStack_530;
    if (uStack_538 != (uint *)0x0) {
      for (; puVar15 != puVar27; puVar27 = puVar27 + -6) {
        if ((puVar27[-6] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar27 + -2),
                          *(ulong *)(puVar27 + -6) & 0xfffffffffffffffe);
        }
      }
      puStack_530 = puVar15;
      func_0x0412a280(uStack_538,(long)puStack_528 - (long)uStack_538);
    }
    func_0x04897b30(&pbStack_4d8,puStack_4c8);
    pbVar36 = pbStack_4d8;
    pbStack_4d8 = (byte *)0x0;
    if (pbVar36 != (byte *)0x0) {
      func_0x0412a280(pbVar36,uStack_4d0 << 3);
    }
    func_0x04863610(auStack_490);
  }
  func_0x04863610(auStack_4b0);
  func_0x0eee2d70(uVar20);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



/* ---- referenced strings ----
 * 0x1211ec1  geometry_variable
 * 0x134a310  texture_variable
 * 0x14021b0  material_variable
 * 0x141cd81  context_variable
 * 0x1451207  data_driven_geometry
 */
