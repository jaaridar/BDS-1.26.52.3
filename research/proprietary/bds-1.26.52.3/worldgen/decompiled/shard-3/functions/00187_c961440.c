/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc961440
 * Label: Dimension::vslot47
 * Body:  [[09d46480, 09d465bb] [09d465c0, 09d46757] [09d46760, 09d467c3] [09d467d0, 09d4692e] [09d46930, 09d4697c] [09d46980, 09d46c6a] [09d46c70, 09d46d63] [09d46d70, 09d46e33] [09d46e40, 09d46e52] [09d46e60, 09d46eb3] [09d46ec0, 09d46f13] [09d46f20, 09d46fa9] [09d46fb0, 09d47548] [09d47550, 09d478bd] [09d478c0, 09d47aa1] [09d47ab0, 09d480b6] [09d480c0, 09d482c6] [09d482d0, 09d48331] [09d48340, 09d48407] [09d48410, 09d48435] [09d48440, 09d48465] [09d48470, 09d4856a] [09d48570, 09d48720] [09d48730, 09d487cc] [09d487d0, 09d48859] [09d48860, 09d48971] [09d48980, 09d48a3c] [09d48a40, 09d48bf1] [09d48c00, 09d48d55] [09d48d60, 09d48de3] [09d48df0, 09d48e8a] [09d48e90, 09d48f27] [09d4929e, 09d49335] [09d49673, 09d49681] [09d49687, 09d496c5] [09d496ee, 09d4977d] [0c961440, 0c96144f]]
 * Ghidra: wg_Dimension__vslot47
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot47(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined7 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  short *psVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  char *pcVar18;
  short *psVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  byte *pbVar34;
  undefined8 *puVar35;
  byte *pbVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 uStack_3e0;
  undefined1 uStack_3df;
  undefined1 uStack_3de;
  undefined1 uStack_3dd;
  undefined4 uStack_3dc;
  short *psStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong *puStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 *puStack_328;
  byte bStack_320;
  undefined7 uStack_31f;
  ulong uStack_318;
  undefined7 *puStack_310;
  long lStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  byte bStack_2d8;
  undefined8 uStack_2d7;
  undefined1 uStack_2cf;
  undefined1 uStack_2ce;
  undefined5 uStack_2cd;
  undefined8 *puStack_2c8;
  long *plStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined4 *puStack_298;
  undefined4 *puStack_290;
  undefined4 *puStack_288;
  undefined8 *puStack_278;
  short *psStack_270;
  short *psStack_268;
  long lStack_260;
  int iStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  short *psStack_238;
  undefined8 *puStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  short *psStack_1f8;
  long *plStack_1f0;
  byte bStack_1e8;
  short sStack_1e7;
  char cStack_1e5;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined2 uStack_1da;
  long *plStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  byte bStack_188;
  undefined7 uStack_187;
  undefined8 uStack_178;
  long lStack_170;
  byte bStack_168;
  undefined7 uStack_167;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined4 uStack_138;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  long lStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_80;
  long lStack_78;
  ulong *puStack_70;
  undefined *puStack_68;
  ulong **ppuStack_60;
  undefined **ppuStack_48;
  
  lVar13 = param_1[1];
  uStack_118 = *(undefined8 *)(*param_1 + 0x10);
  puStack_278 = (undefined8 *)(lVar13 + 0x78);
  lStack_b0 = param_2;
  if (*(long *)(lVar13 + 0x90) != 0) {
    puVar16 = *(undefined8 **)(lVar13 + 0x88);
    while (puVar16 != (undefined8 *)0x0) {
      puVar35 = (undefined8 *)*puVar16;
      plVar14 = (long *)puVar16[5];
      puVar16[5] = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if ((*(byte *)(puVar16 + 2) & 1) != 0) {
        func_0x0412a280(puVar16[4],puVar16[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar16,0x30);
      puVar16 = puVar35;
    }
    *(undefined8 *)(lVar13 + 0x88) = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      func_0x0eee2dd0(*puStack_278,0,*(long *)(lVar13 + 0x80) << 3);
    }
    *(undefined8 *)(lVar13 + 0x90) = 0;
  }
  *(undefined8 *)(lVar13 + 0xa8) = *(undefined8 *)(lVar13 + 0xa0);
  puStack_298 = (undefined4 *)0x0;
  puStack_290 = (undefined4 *)0x0;
  puStack_288 = (undefined4 *)0x0;
  lStack_80 = *(long *)(lStack_b0 + 0x98);
  lVar27 = *(long *)(lStack_80 + 8);
  lStack_120 = lVar13;
  if (lVar27 != *(long *)(lStack_80 + 0x10)) {
    puStack_b8 = &UNK_0f1e1e98;
    do {
      lStack_78 = **(long **)(**(long **)(lVar27 + 0xe8) + 8);
      iStack_254 = *(int *)(lStack_78 + 0x198);
      puStack_108 = (ulong *)0x0;
      puStack_100 = (ulong *)0x0;
      lStack_f8 = 0;
      bStack_2d8 = 0x12;
      uStack_2d7._0_7_ = 0x6f6974636e7566;
      uStack_2d7._7_1_ = 0x6e;
      uStack_2cf = 0x73;
      uStack_2ce = 0;
      puStack_68 = &UNK_0f1e2450;
      ppuStack_60 = &puStack_108;
      ppuStack_48 = &puStack_68;
      bStack_1e8 = 0x50;
      sStack_1e7 = 0x1e24;
      cStack_1e5 = 0xf;
      uStack_1e4 = 0;
      uStack_1e0 = SUB84(ppuStack_60,0);
      uStack_1dc = (undefined1)((ulong)ppuStack_60 >> 0x20);
      uStack_1db = (undefined1)((ulong)ppuStack_60 >> 0x28);
      uStack_1da = (undefined2)((ulong)ppuStack_60 >> 0x30);
      pbStack_1c8 = &bStack_1e8;
      func_0x0d62abd0(*(long **)(lVar27 + 0xe8),&bStack_2d8,&bStack_1e8,
                      *(undefined4 *)(lVar27 + 0x108));
      if (pbStack_1c8 == &bStack_1e8) {
        lVar13 = 0x20;
LAB_09d48475:
        (**(code **)(*(long *)pbStack_1c8 + lVar13))();
        if (ppuStack_48 != &puStack_68) goto LAB_09d466f4;
LAB_09d48494:
        lVar13 = 0x20;
LAB_09d48499:
        (**(code **)(*ppuStack_48 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (pbStack_1c8 != (byte *)0x0) goto LAB_09d48475;
        if (ppuStack_48 == &puStack_68) goto LAB_09d48494;
LAB_09d466f4:
        lVar13 = 0x28;
        if (ppuStack_48 != (undefined **)0x0) goto LAB_09d48499;
      }
      if ((bStack_2d8 & 1) != 0) {
        func_0x0412a280(puStack_2c8,CONCAT71((undefined7)uStack_2d7,bStack_2d8) & 0xfffffffffffffffe
                       );
      }
      puStack_70 = puStack_100;
      lStack_308 = lVar27;
      puVar20 = puStack_108;
      puVar25 = puStack_108;
      if (puStack_108 != puStack_100) {
        do {
          pbVar36 = (byte *)((long)puVar20 + 1);
          bVar37 = ((byte)*puVar20 & 1) == 0;
          pbVar34 = (byte *)puVar20[2];
          if (bVar37) {
            pbVar34 = pbVar36;
          }
          puStack_370 = puVar20;
          uVar30 = (ulong)(byte)((byte)*puVar20 >> 1);
          if (!bVar37) {
            uVar30 = puVar20[1];
          }
          if (0xfffffffffffffff7 < uVar30) {
            func_0x04882e30();
LAB_09d48eea:
            func_0x04882e30();
LAB_09d48eef:
            func_0x04882ef0(&UNK_01306d2f);
LAB_09d48efb:
            func_0x09d704e0();
LAB_09d48f00:
            func_0x09d704e0();
LAB_09d48f05:
            func_0x04882eb0();
            goto LAB_09d48f0a;
          }
          if (uVar30 < 0x17) {
            bStack_1e8 = (char)uVar30 * '\x02';
            plVar14 = (long *)&sStack_1e7;
            if (uVar30 != 0) goto LAB_09d4682c;
          }
          else {
            lVar13 = (uVar30 | 7) + 1;
            if ((uVar30 | 7) == 0x17) {
              lVar13 = 0x1a;
            }
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
            if (plVar14 == (long *)0x0) {
              func_0x0eec74c0(lVar13,0);
            }
            bStack_1e8 = (byte)lVar13 | 1;
            sStack_1e7 = (short)((ulong)lVar13 >> 8);
            cStack_1e5 = (char)((ulong)lVar13 >> 0x18);
            uStack_1e4 = (undefined4)((ulong)lVar13 >> 0x20);
            uStack_1e0 = (undefined4)uVar30;
            uStack_1dc = (undefined1)(uVar30 >> 0x20);
            uStack_1db = (undefined1)(uVar30 >> 0x28);
            uStack_1da = (undefined2)(uVar30 >> 0x30);
            lVar27 = lStack_308;
            plStack_1d8 = plVar14;
LAB_09d4682c:
            func_0x0eee2ee0(plVar14,pbVar34,uVar30);
          }
          *(undefined1 *)((long)plVar14 + uVar30) = 0;
          bVar10 = bStack_1e8 & 1;
          plVar14 = plStack_1d8;
          if (bVar10 == 0) {
            plVar14 = (long *)&sStack_1e7;
          }
          uVar30 = (ulong)(bStack_1e8 >> 1);
          if (bVar10 != 0) {
            uVar30 = CONCAT26(uStack_1da,CONCAT15(uStack_1db,CONCAT14(uStack_1dc,uStack_1e0)));
          }
          if ((((uVar30 < 9) || (uVar30 < 0xb)) ||
              ((char)plVar14[1] != 's' || *plVar14 != 0x6e6f6974636e7566)) ||
             (*(long *)((long)plVar14 + (uVar30 - 8)) != 0x6e6f6974636e7566 ||
              *(long *)((long)plVar14 + (uVar30 - 0xb)) != 0x74636e7566636d2e)) {
            uStack_2f8 = 0;
            uStack_2f0 = 0;
            lStack_2e8 = 0;
            puVar20 = puStack_370;
          }
          else {
            func_0x0edfde20(&uStack_2f8,&bStack_1e8,10,(int)uVar30 + -0xb);
            bVar10 = bStack_1e8 & 1;
            puVar20 = puStack_370;
          }
          puStack_370 = puVar20;
          if (bVar10 != 0) {
            func_0x0412a280(plStack_1d8,
                            CONCAT44(uStack_1e4,CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8))
                                    ) & 0xfffffffffffffffe);
          }
          if ((uStack_2f8 & 1) == 0) {
            if ((byte)uStack_2f8 >> 1 != 0) goto LAB_09d46937;
          }
          else if (uStack_2f0 != 0) {
LAB_09d46937:
            lVar13 = func_0x09d71660(puStack_278,&uStack_2f8);
            if (lVar13 == 0) {
              if (*(char *)(lStack_78 + 0x186) == '\0') {
                puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                if (puVar16 == (undefined8 *)0x0) {
                  func_0x0eec74c0(0x28,0);
                }
                *puVar16 = &UNK_0f1e1ec0;
                puVar16[1] = 0;
                puVar16[2] = 0;
                puVar16[3] = 0;
                *(undefined1 *)(puVar16 + 4) = 2;
                bStack_1e8 = (byte)puVar16;
                sStack_1e7 = (short)((ulong)puVar16 >> 8);
                cStack_1e5 = (char)((ulong)puVar16 >> 0x18);
                uStack_1e4 = (undefined4)((ulong)puVar16 >> 0x20);
                func_0x09d718e0(puStack_278,&uStack_2f8,&uStack_2f8,&bStack_1e8);
                puVar20 = puStack_370;
                plVar14 = (long *)CONCAT44(uStack_1e4,
                                           CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8)));
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 8))();
                }
              }
              else {
                uStack_208 = 0;
                uStack_200 = 0;
                psStack_1f8 = (short *)0x0;
                cVar11 = func_0x0d62a0d0(*(undefined8 *)(lVar27 + 0xe8),puVar20,&uStack_208,
                                         *(undefined4 *)(lVar27 + 0x108));
                puVar20 = puStack_370;
                if (cVar11 == '\0') {
                  if ((*puStack_370 & 1) != 0) {
                    pbVar36 = (byte *)puStack_370[2];
                  }
                  bStack_1e8 = (byte)pbVar36;
                  sStack_1e7 = (short)((ulong)pbVar36 >> 8);
                  cStack_1e5 = (char)((ulong)pbVar36 >> 0x18);
                  uStack_1e4 = (undefined4)((ulong)pbVar36 >> 0x20);
                  func_0x09d49780(1,2,9,&UNK_0121237c,&bStack_1e8);
                }
                else {
                  cStack_1e5 = DAT_014290b9;
                  sStack_1e7 = _DAT_014290b7;
                  uVar30 = uStack_208 >> 1 & 0x7f;
                  psVar19 = (short *)((long)&uStack_208 + 1);
                  if ((uStack_208 & 1) != 0) {
                    uVar30 = uStack_200;
                    psVar19 = psStack_1f8;
                  }
                  psVar15 = psVar19;
                  uVar31 = uVar30;
                  if (2 < (long)uVar30) {
                    while( true ) {
                      psVar15 = (short *)func_0x0eee2ef0(psVar15,0xffffffef,uVar31 - 2);
                      if (psVar15 == (short *)0x0) break;
                      if ((char)psVar15[1] == cStack_1e5 && *psVar15 == sStack_1e7) {
                        if (psVar15 == psVar19) {
                          func_0x04130370(&uStack_208,0,3);
                        }
                        break;
                      }
                      uVar31 = (long)psVar19 + (uVar30 - ((long)psVar15 + 1));
                      psVar15 = (short *)((long)psVar15 + 1);
                      if ((long)uVar31 < 3) break;
                    }
                  }
                  bStack_1e8 = 0;
                  sStack_1e7 = 0;
                  cStack_1e5 = 0;
                  uStack_1e4 = 0;
                  uStack_1e0 = 0;
                  uStack_1dc = 0;
                  uStack_1db = 0;
                  uStack_1da = 0;
                  plStack_1d8 = (long *)0x0;
                  bStack_2d8 = (byte)&bStack_1e8;
                  uStack_2d7._0_7_ = (undefined7)((ulong)&bStack_1e8 >> 8);
                  uStack_2d7._7_1_ = 0;
                  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
                  if (puVar16 == (undefined8 *)0x0) {
                    func_0x0eec74c0(0x18,0);
                  }
                  bStack_1e8 = (byte)puVar16;
                  sStack_1e7 = (short)((ulong)puVar16 >> 8);
                  cStack_1e5 = (char)((ulong)puVar16 >> 0x18);
                  uStack_1e4 = (undefined4)((ulong)puVar16 >> 0x20);
                  plStack_1d8 = puVar16 + 3;
                  *puVar16 = 0xa02;
                  uStack_1e0 = SUB84(plStack_1d8,0);
                  uStack_1dc = (undefined1)((ulong)plStack_1d8 >> 0x20);
                  uStack_1db = (undefined1)((ulong)plStack_1d8 >> 0x28);
                  uStack_1da = (undefined2)((ulong)plStack_1d8 >> 0x30);
                  func_0x0edfd890(&puStack_e8,&uStack_208,&bStack_1e8,1,1,&UNK_0edfc6c0);
                  uVar9 = uStack_1e4;
                  uVar5 = CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8));
                  lVar13 = CONCAT44(uStack_1e4,uVar5);
                  if (lVar13 != 0) {
                    lVar32 = CONCAT26(uStack_1da,
                                      CONCAT15(uStack_1db,CONCAT14(uStack_1dc,uStack_1e0)));
                    if (lVar13 != lVar32) {
                      do {
                        if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                          func_0x0412a280(*(undefined8 *)(lVar32 + -8),
                                          *(ulong *)(lVar32 + -0x18) & 0xfffffffffffffffe);
                        }
                        lVar32 = lVar32 + -0x18;
                      } while (lVar32 != lVar13);
                      lVar13 = CONCAT44(uStack_1e4,
                                        CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8)));
                    }
                    uStack_1dc = (undefined1)uVar9;
                    uStack_1db = (undefined1)((uint)uVar9 >> 8);
                    uStack_1da = (undefined2)((uint)uVar9 >> 0x10);
                    uStack_1e0 = uVar5;
                    func_0x0412a280(lVar13,(long)plStack_1d8 - lVar13);
                  }
                  puVar16 = puStack_e8;
                  pbStack_368 = (byte *)0x0;
                  pbStack_360 = (byte *)0x0;
                  pbStack_358 = (byte *)0x0;
                  bStack_2d8 = 0;
                  uStack_2d7._0_7_ = 0;
                  uStack_2d7._7_1_ = 0;
                  uStack_2cf = 0;
                  uStack_2ce = 0;
                  uStack_2cd = 0;
                  puStack_2c8 = (undefined8 *)0x0;
                  if ((long)puStack_e0 - (long)puStack_e8 == 0) {
LAB_09d480e2:
                    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
                    if (puVar16 == (undefined8 *)0x0) {
                      func_0x0eec74c0(0x28,0);
                    }
                    *puVar16 = &UNK_0f1e1ec0;
                    puVar16[1] = CONCAT71((undefined7)uStack_2d7,bStack_2d8);
                    puVar16[2] = CONCAT53(uStack_2cd,
                                          CONCAT12(uStack_2ce,CONCAT11(uStack_2cf,uStack_2d7._7_1_))
                                         );
                    puVar16[3] = puStack_2c8;
                    bStack_2d8 = 0;
                    uStack_2d7._0_7_ = 0;
                    uStack_2d7._7_1_ = 0;
                    uStack_2cf = 0;
                    uStack_2ce = 0;
                    uStack_2cd = 0;
                    puStack_2c8 = (undefined8 *)0x0;
                    *(undefined1 *)(puVar16 + 4) = 3;
                    bStack_1e8 = (byte)puVar16;
                    sStack_1e7 = (short)((ulong)puVar16 >> 8);
                    cStack_1e5 = (char)((ulong)puVar16 >> 0x18);
                    uStack_1e4 = (undefined4)((ulong)puVar16 >> 0x20);
                    func_0x09d718e0(puStack_278,&uStack_2f8,&uStack_2f8,&bStack_1e8);
                    plVar14 = (long *)CONCAT44(uStack_1e4,
                                               CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8)))
                    ;
                    if (plVar14 != (long *)0x0) {
                      (**(code **)(*plVar14 + 8))();
                    }
                  }
                  else {
                    lVar13 = (long)puStack_e0 - (long)puStack_e8 >> 3;
                    if (0x1fffffffffffffff < (ulong)(lVar13 * -0x5555555555555555))
                    goto LAB_09d48efb;
                    lVar32 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                       (&DAT_0f5463b0,lVar13 * 0x5555555555555558);
                    if (lVar32 == 0) {
                      func_0x0eec74c0(lVar13 * 0x5555555555555558,0);
                    }
                    bStack_2d8 = (byte)lVar32;
                    uStack_2d7._0_7_ = (undefined7)((ulong)lVar32 >> 8);
                    uStack_2cf = (undefined1)((ulong)lVar32 >> 8);
                    uStack_2ce = (undefined1)((ulong)lVar32 >> 0x10);
                    uStack_2cd = (undefined5)((ulong)lVar32 >> 0x18);
                    puStack_2c8 = (undefined8 *)(lVar32 + lVar13 * 0x5555555555555558);
                    uVar30 = 0;
                    uStack_2d7._7_1_ = bStack_2d8;
                    do {
                      pcVar18 = (char *)((long)&uStack_250 + 1);
                      bVar37 = (*(byte *)(puVar16 + uVar30 * 3) & 1) != 0;
                      lVar13 = (long)puVar16 + uVar30 * 0x18 + 1;
                      if (bVar37) {
                        lVar13 = puVar16[uVar30 * 3 + 2];
                      }
                      lStack_2e0 = uVar30 * 3;
                      uVar31 = (ulong)(*(byte *)(puVar16 + uVar30 * 3) >> 1);
                      if (bVar37) {
                        uVar31 = puVar16[uVar30 * 3 + 1];
                      }
                      uVar33 = (uint)uVar31;
                      uStack_300 = uVar30;
                      puStack_328 = puVar16;
                      if (uVar33 == 0) {
                        uStack_250 = uStack_250 & 0xffffffffffffff00;
                        uVar30 = 0;
                      }
                      else {
                        if ((int)uVar33 < 1) {
                          uVar30 = 0;
                        }
                        else {
                          uVar30 = 0;
                          do {
                            puVar17 = (undefined *)
                                      func_0x0eee2ef0(&UNK_013ee813,(int)*(char *)(lVar13 + uVar30),
                                                      4);
                            if ((puVar17 == (undefined *)0x0) || (puVar17 == &UNK_013ee817))
                            goto LAB_09d46e63;
                            uVar30 = uVar30 + 1;
                          } while ((uVar33 & 0x7fffffff) != uVar30);
                          uVar30 = uVar31 & 0xffffffff;
                        }
LAB_09d46e63:
                        lVar27 = (long)(int)uVar33;
                        uVar29 = (uint)uVar30;
                        uVar26 = (ulong)(int)uVar29;
                        uVar12 = uVar33;
                        if ((int)uVar29 < (int)uVar33) {
                          uVar12 = uVar29;
                        }
                        puStack_110 = (undefined8 *)CONCAT44(puStack_110._4_4_,uVar12);
                        iVar28 = uVar33 + 1;
                        while ((long)uVar26 < lVar27) {
                          puVar17 = (undefined *)
                                    func_0x0eee2ef0(&UNK_013ee813,
                                                    (int)*(char *)(lVar13 + -1 + lVar27),4);
                          iVar28 = iVar28 + -1;
                          if ((puVar17 == (undefined *)0x0) ||
                             (lVar27 = lVar27 + -1, puVar17 == &UNK_013ee817)) goto LAB_09d46ec7;
                        }
                        iVar28 = (int)puStack_110;
LAB_09d46ec7:
                        pcVar18 = (char *)((long)&uStack_250 + 1);
                        if (uVar31 < uVar26) goto LAB_09d48eef;
                        uVar30 = (long)(int)(iVar28 - uVar29);
                        if (uVar31 - uVar26 < (ulong)(long)(int)(iVar28 - uVar29)) {
                          uVar30 = uVar31 - uVar26;
                        }
                        if (0xfffffffffffffff7 < uVar30) goto LAB_09d48eea;
                        if (uVar30 < 0x17) {
                          uStack_250 = CONCAT71(uStack_250._1_7_,(char)uVar30 * '\x02');
                          if (uVar30 == 0) {
                            uVar30 = 0;
                            lVar27 = lStack_308;
                            goto LAB_09d46f8d;
                          }
                        }
                        else {
                          uVar31 = (uVar30 | 7) + 1;
                          if ((uVar30 | 7) == 0x17) {
                            uVar31 = 0x1a;
                          }
                          pcVar18 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                      (&DAT_0f5463b0,uVar31);
                          if (pcVar18 == (char *)0x0) {
                            func_0x0eec74c0(uVar31,0);
                          }
                          uStack_250 = uVar31 | 1;
                          uStack_248 = uVar30;
                          uStack_240 = pcVar18;
                        }
                        func_0x0eee2ee0(pcVar18,lVar13 + uVar26,uVar30);
                        lVar27 = lStack_308;
                      }
LAB_09d46f8d:
                      pcVar18[uVar30] = '\0';
                      bVar10 = (byte)uStack_250 & 1;
                      uVar30 = uStack_248;
                      if ((uStack_250 & 1) == 0) {
                        uVar30 = (ulong)((byte)uStack_250 >> 1);
                      }
                      if (uVar30 != 0) {
                        pcVar18 = (char *)((long)&uStack_250 + 1);
                        if ((uStack_250 & 1) != 0) {
                          pcVar18 = uStack_240;
                        }
                        if (*pcVar18 != '#') {
                          lVar13 = func_0x0eee2ef0(pcVar18,0x20);
                          func_0x0edfde20(&uStack_3e8,&uStack_250,0,
                                          -(uint)(lVar13 == 0) | (int)lVar13 - (int)pcVar18);
                          lVar13 = func_0x09d830d0(uStack_118,&uStack_3e8);
                          if (lVar13 == 0) {
                            func_0x041348b0(&uStack_348,uStack_300 + 1);
                            puVar20 = (ulong *)func_0x0412f0e0(&uStack_348,0,&UNK_014517e9,0xe);
                            uStack_378 = puVar20[2];
                            uStack_388 = *puVar20;
                            uStack_380 = puVar20[1];
                            *puVar20 = 0;
                            puVar20[1] = 0;
                            puVar20[2] = 0;
                            puVar20 = (ulong *)func_0x0412f8c0(&uStack_388,&UNK_0141d45c,0x1e);
                            uStack_398 = puVar20[2];
                            uStack_3a8 = *puVar20;
                            uStack_3a0 = puVar20[1];
                            *puVar20 = 0;
                            puVar20[1] = 0;
                            puVar20[2] = 0;
                            bVar37 = (uStack_3e8 & 1) == 0;
                            psVar19 = psStack_3d8;
                            if (bVar37) {
                              psVar19 = (short *)((long)&uStack_3e8 + 1);
                            }
                            uVar30 = (ulong)((byte)uStack_3e8 >> 1);
                            if (!bVar37) {
                              uVar30 = CONCAT44(uStack_3dc,
                                                CONCAT13(uStack_3dd,
                                                         CONCAT12(uStack_3de,
                                                                  CONCAT11(uStack_3df,uStack_3e0))))
                              ;
                            }
                            puVar20 = (ulong *)func_0x0412f8c0(&uStack_3a8,psVar19,uVar30);
                            uStack_3b8 = puVar20[2];
                            uStack_3c8 = *puVar20;
                            uStack_3c0 = puVar20[1];
                            *puVar20 = 0;
                            puVar20[1] = 0;
                            puVar20[2] = 0;
                            puVar16 = (undefined8 *)func_0x0412f8c0(&uStack_3c8,&UNK_0125506d,1);
                            plStack_1d8 = (long *)puVar16[2];
                            uVar22 = *puVar16;
                            uVar4 = puVar16[1];
                            bStack_1e8 = (byte)uVar22;
                            sStack_1e7 = (short)((ulong)uVar22 >> 8);
                            cStack_1e5 = (char)((ulong)uVar22 >> 0x18);
                            uStack_1e4 = (undefined4)((ulong)uVar22 >> 0x20);
                            uStack_1e0 = (undefined4)uVar4;
                            uStack_1dc = (undefined1)((ulong)uVar4 >> 0x20);
                            uStack_1db = (undefined1)((ulong)uVar4 >> 0x28);
                            uStack_1da = (undefined2)((ulong)uVar4 >> 0x30);
                            *puVar16 = 0;
                            puVar16[1] = 0;
                            puVar16[2] = 0;
                            if ((uStack_3c8 & 1) != 0) {
                              func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
                            }
                            if ((uStack_3a8 & 1) != 0) {
                              func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
                            }
                            if ((uStack_388 & 1) != 0) {
                              func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
                            }
                            if ((uStack_348 & 1) != 0) {
                              func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
                            }
                            bVar37 = (uStack_3e8 & 1) == 0;
                            psVar19 = psStack_3d8;
                            if (bVar37) {
                              psVar19 = (short *)((long)&uStack_3e8 + 1);
                            }
                            uVar30 = (ulong)((byte)uStack_3e8 >> 1);
                            if (!bVar37) {
                              uVar30 = CONCAT44(uStack_3dc,
                                                CONCAT13(uStack_3dd,
                                                         CONCAT12(uStack_3de,
                                                                  CONCAT11(uStack_3df,uStack_3e0))))
                              ;
                            }
                            if (1 < uVar30) {
                              if (*psVar19 == 0x2f2f) {
                                uVar22 = 0x3c;
                                puVar17 = &UNK_013808f0;
                              }
                              else {
                                uVar22 = 0x2f;
                                puVar17 = &UNK_011a80ca;
                                if ((char)*psVar19 != '/') goto LAB_09d47c7a;
                              }
                              func_0x0412f8c0(&bStack_1e8,puVar17,uVar22);
                            }
LAB_09d47c7a:
                            pbVar36 = pbStack_360;
                            if (pbStack_360 < pbStack_358) {
                              if ((bStack_1e8 & 1) == 0) {
                                *(long **)(pbStack_360 + 0x10) = plStack_1d8;
                                *(uint *)pbStack_360 =
                                     CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8));
                                *(undefined4 *)(pbStack_360 + 4) = uStack_1e4;
                                *(undefined4 *)(pbStack_360 + 8) = uStack_1e0;
                                *(uint *)(pbStack_360 + 0xc) =
                                     CONCAT22(uStack_1da,CONCAT11(uStack_1db,uStack_1dc));
                                pbStack_360 = pbStack_360 + 0x18;
                              }
                              else {
                                func_0x0412e5e0(pbStack_360,plStack_1d8,
                                                CONCAT26(uStack_1da,
                                                         CONCAT15(uStack_1db,
                                                                  CONCAT14(uStack_1dc,uStack_1e0))))
                                ;
                                pbStack_360 = pbVar36 + 0x18;
                              }
                            }
                            else {
                              pbStack_360 = (byte *)func_0x04909bd0(&pbStack_368,&bStack_1e8);
                            }
                            if ((bStack_1e8 & 1) != 0) {
                              uVar30 = CONCAT44(uStack_1e4,
                                                CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8))
                                               ) & 0xfffffffffffffffe;
                              goto LAB_09d47d2f;
                            }
                          }
                          else {
                            func_0x09daa450(&bStack_1e8,uStack_118,iStack_254);
                            cVar11 = func_0x09d82660(&bStack_1e8,puStack_328 + lStack_2e0);
                            if (cVar11 == '\0') {
                              func_0x041348b0(&puStack_220,uStack_300 + 1);
                              puVar20 = (ulong *)func_0x0412f0e0(&puStack_220,0,&UNK_014517e9,0xe);
                              uStack_338 = puVar20[2];
                              uStack_348 = *puVar20;
                              uStack_340 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_348,&UNK_0146979d,0x26);
                              uStack_378 = puVar20[2];
                              uStack_388 = *puVar20;
                              uStack_380 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              if (DAT_0f5ea4a0 == '\0') {
                                iVar28 = func_0x04108328(&DAT_0f5ea4a0);
                                if (iVar28 != 0) {
                                  func_0x08b670e0(&DAT_0f5ea138);
                                  func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                                  func_0x0410844d(&DAT_0f5ea4a0);
                                  lVar27 = lStack_308;
                                }
                              }
                              func_0x09d828b0(&psStack_270,&bStack_1e8);
                              uStack_a8 = 0;
                              plStack_a0 = (long *)0x0;
                              (**(code **)(_DAT_0f5ea138 + 0x88))
                                        (&bStack_320,&DAT_0f5ea138,&bStack_168,&psStack_270,
                                         &uStack_a8);
                              uVar30 = (ulong)(bStack_320 >> 1);
                              puVar6 = &uStack_31f;
                              if ((bStack_320 & 1) != 0) {
                                uVar30 = uStack_318;
                                puVar6 = puStack_310;
                              }
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_388,puVar6,uVar30);
                              uStack_398 = puVar20[2];
                              uStack_3a8 = *puVar20;
                              uStack_3a0 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_3a8,&UNK_0125506d,1);
                              uStack_3b8 = puVar20[2];
                              uStack_3c8 = *puVar20;
                              uStack_3c0 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              if ((uStack_3a8 & 1) != 0) {
                                func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
                              }
                              plVar14 = plStack_a0;
                              if ((bStack_320 & 1) != 0) {
                                func_0x0412a280(puStack_310,
                                                CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe
                                               );
                                plVar14 = plStack_a0;
                              }
                              psVar19 = psStack_270;
                              plStack_a0 = plVar14;
                              if (plVar14 != (long *)0x0) {
                                LOCK();
                                plVar1 = (long *)((long)plVar14 + 8);
                                lVar13 = *plVar1;
                                *plVar1 = *plVar1 + -1;
                                UNLOCK();
                                if (lVar13 == 0) {
                                  (**(code **)(*plVar14 + 0x10))(plVar14);
                                  func_0x0412c2d0(plVar14);
                                  psVar19 = psStack_270;
                                }
                              }
                              psStack_270 = psVar19;
                              psVar15 = psStack_268;
                              if (psVar19 != (short *)0x0) {
                                for (; psVar19 != psVar15; psVar15 = psVar15 + -0xc) {
                                  if ((*(byte *)(psVar15 + -0xc) & 1) != 0) {
                                    func_0x0412a280(*(undefined8 *)(psVar15 + -4),
                                                    *(ulong *)(psVar15 + -0xc) & 0xfffffffffffffffe)
                                    ;
                                  }
                                }
                                psStack_268 = psVar19;
                                func_0x0412a280(psStack_270,lStack_260 - (long)psStack_270);
                              }
                              if ((uStack_388 & 1) == 0) {
                                if ((uStack_348 & 1) == 0) goto LAB_09d475a4;
LAB_09d47621:
                                func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
                                if (((ulong)puStack_220 & 1) != 0) goto LAB_09d47648;
LAB_09d475b2:
                                if (pbStack_360 < pbStack_358) goto LAB_09d475c8;
LAB_09d47677:
                                pbStack_360 = (byte *)func_0x04909a40(&pbStack_368,&uStack_3c8);
                              }
                              else {
                                func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
                                if ((uStack_348 & 1) != 0) goto LAB_09d47621;
LAB_09d475a4:
                                if (((ulong)puStack_220 & 1) == 0) goto LAB_09d475b2;
LAB_09d47648:
                                func_0x0412a280(uStack_210,(ulong)puStack_220 & 0xfffffffffffffffe);
                                if (pbStack_358 <= pbStack_360) goto LAB_09d47677;
LAB_09d475c8:
                                pbVar36 = pbStack_360;
                                if ((uStack_3c8 & 1) == 0) {
                                  *(ulong *)(pbStack_360 + 0x10) = uStack_3b8;
                                  *(undefined4 *)pbStack_360 = (undefined4)uStack_3c8;
                                  *(undefined4 *)(pbStack_360 + 4) = uStack_3c8._4_4_;
                                  *(undefined4 *)(pbStack_360 + 8) = (undefined4)uStack_3c0;
                                  *(undefined4 *)(pbStack_360 + 0xc) = uStack_3c0._4_4_;
                                  pbStack_360 = pbStack_360 + 0x18;
                                }
                                else {
                                  func_0x0412e5e0(pbStack_360,uStack_3b8,uStack_3c0);
                                  pbStack_360 = pbVar36 + 0x18;
                                }
                              }
                              lVar13 = lStack_150;
                              if ((uStack_3c8 & 1) != 0) {
                                func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
                                lVar13 = lStack_150;
                              }
                            }
                            else {
                              if (DAT_0f649ea0 == '\0') {
                                iVar28 = func_0x04108328(&DAT_0f649ea0);
                                if (iVar28 != 0) {
                                  _DAT_0f649e88 = &UNK_0f1e52d8;
                                  auVar38 = func_0x0eeda000(0);
                                  _DAT_0f649e88 = &UNK_0f1e61d8;
                                  _DAT_0f649e90 = auVar38;
                                  func_0x0410844d(&DAT_0f649ea0);
                                }
                              }
                              if (lStack_170 == 0) {
                                plStack_1f0 = (long *)0x0;
                              }
                              else {
                                func_0x09d81070(&plStack_1f0,
                                                CONCAT44(uStack_1e4,
                                                         CONCAT13(cStack_1e5,
                                                                  CONCAT21(sStack_1e7,bStack_1e8))),
                                                lStack_170,&DAT_0f649e88,uStack_138,&bStack_168,
                                                &lStack_150);
                                plVar14 = plStack_1f0;
                                if (plStack_1f0 != (long *)0x0) {
                                  puVar16 = (undefined8 *)
                                            (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
                                  if (puVar16 == (undefined8 *)0x0) {
                                    func_0x0eec74c0(0x10,0);
                                  }
                                  *puVar16 = &UNK_0f1e1e98;
                                  puVar16[1] = plVar14;
                                  puVar35 = (undefined8 *)
                                            CONCAT53(uStack_2cd,
                                                     CONCAT12(uStack_2ce,
                                                              CONCAT11(uStack_2cf,uStack_2d7._7_1_))
                                                    );
                                  if (puVar35 < puStack_2c8) {
                                    *puVar35 = puVar16;
                                  }
                                  else {
                                    lVar13 = CONCAT71((undefined7)uStack_2d7,bStack_2d8);
                                    lVar27 = (long)puVar35 - lVar13;
                                    uVar30 = (lVar27 >> 3) + 1;
                                    puStack_328 = puVar16;
                                    if (0x1fffffffffffffff < uVar30) goto LAB_09d48f00;
                                    uVar26 = (long)puStack_2c8 - lVar13;
                                    uVar31 = (long)uVar26 >> 2;
                                    if ((ulong)((long)uVar26 >> 2) <= uVar30) {
                                      uVar31 = uVar30;
                                    }
                                    if (0x7ffffffffffffff7 < uVar26) {
                                      uVar31 = 0x1fffffffffffffff;
                                    }
                                    lStack_2e0 = lVar13;
                                    if (0x1fffffffffffffff < uVar31) goto LAB_09d48f05;
                                    lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                       (&DAT_0f5463b0,uVar31 * 8);
                                    if (lVar13 == 0) {
                                      func_0x0eec74c0(uVar31 * 8,0);
                                    }
                                    lVar32 = lStack_2e0;
                                    puStack_110 = (undefined8 *)(uVar31 * 8 + lVar13);
                                    *(undefined8 **)(lVar13 + lVar27) = puStack_328;
                                    puVar35 = (undefined8 *)(lVar27 + lVar13);
                                    lVar13 = lVar27 + lVar13 + (lVar27 >> 3) * -8;
                                    func_0x0eee2f00(lVar13,lStack_2e0,lVar27);
                                    bStack_2d8 = (byte)lVar13;
                                    uStack_2d7._0_7_ = (undefined7)((ulong)lVar13 >> 8);
                                    puStack_2c8 = puStack_110;
                                    lVar27 = lStack_308;
                                    if (lVar32 != 0) {
                                      func_0x0412a280(lVar32,uVar26);
                                      lVar27 = lStack_308;
                                    }
                                  }
                                  puVar35 = puVar35 + 1;
                                  uStack_2d7._7_1_ = (byte)puVar35;
                                  uStack_2cf = (undefined1)((ulong)puVar35 >> 8);
                                  uStack_2ce = (undefined1)((ulong)puVar35 >> 0x10);
                                  uStack_2cd = (undefined5)((ulong)puVar35 >> 0x18);
                                  lVar13 = lStack_150;
                                  goto joined_r0x09d4792a;
                                }
                              }
                              func_0x041348b0(&puStack_220,uStack_300 + 1);
                              puVar20 = (ulong *)func_0x0412f0e0(&puStack_220,0,&UNK_014517e9,0xe);
                              uStack_338 = puVar20[2];
                              uStack_348 = *puVar20;
                              uStack_340 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_348,&UNK_0146979d,0x26);
                              uStack_378 = puVar20[2];
                              uStack_388 = *puVar20;
                              uStack_380 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              if (DAT_0f5ea4a0 == '\0') {
                                iVar28 = func_0x04108328(&DAT_0f5ea4a0);
                                if (iVar28 != 0) {
                                  func_0x08b670e0(&DAT_0f5ea138);
                                  func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                                  func_0x0410844d(&DAT_0f5ea4a0);
                                  lVar27 = lStack_308;
                                }
                              }
                              func_0x09d828b0(&psStack_270,&bStack_1e8);
                              uStack_98 = 0;
                              plStack_90 = (long *)0x0;
                              (**(code **)(_DAT_0f5ea138 + 0x88))
                                        (&bStack_320,&DAT_0f5ea138,&bStack_168,&psStack_270,
                                         &uStack_98);
                              uVar30 = (ulong)(bStack_320 >> 1);
                              puVar6 = &uStack_31f;
                              if ((bStack_320 & 1) != 0) {
                                uVar30 = uStack_318;
                                puVar6 = puStack_310;
                              }
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_388,puVar6,uVar30);
                              uStack_398 = puVar20[2];
                              uStack_3a8 = *puVar20;
                              uStack_3a0 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              puVar20 = (ulong *)func_0x0412f8c0(&uStack_3a8,&UNK_0125506d,1);
                              uStack_3b8 = puVar20[2];
                              uStack_3c8 = *puVar20;
                              uStack_3c0 = puVar20[1];
                              *puVar20 = 0;
                              puVar20[1] = 0;
                              puVar20[2] = 0;
                              if ((uStack_3a8 & 1) != 0) {
                                func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
                              }
                              plVar14 = plStack_90;
                              if ((bStack_320 & 1) != 0) {
                                func_0x0412a280(puStack_310,
                                                CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe
                                               );
                                plVar14 = plStack_90;
                              }
                              psVar19 = psStack_270;
                              plStack_90 = plVar14;
                              if (plVar14 != (long *)0x0) {
                                LOCK();
                                plVar1 = (long *)((long)plVar14 + 8);
                                lVar13 = *plVar1;
                                *plVar1 = *plVar1 + -1;
                                UNLOCK();
                                if (lVar13 == 0) {
                                  (**(code **)(*plVar14 + 0x10))(plVar14);
                                  func_0x0412c2d0(plVar14);
                                  psVar19 = psStack_270;
                                }
                              }
                              psStack_270 = psVar19;
                              psVar15 = psStack_268;
                              if (psVar19 != (short *)0x0) {
                                for (; psVar19 != psVar15; psVar15 = psVar15 + -0xc) {
                                  if ((*(byte *)(psVar15 + -0xc) & 1) != 0) {
                                    func_0x0412a280(*(undefined8 *)(psVar15 + -4),
                                                    *(ulong *)(psVar15 + -0xc) & 0xfffffffffffffffe)
                                    ;
                                  }
                                }
                                psStack_268 = psVar19;
                                func_0x0412a280(psStack_270,lStack_260 - (long)psStack_270);
                              }
                              if ((uStack_388 & 1) == 0) {
                                if ((uStack_348 & 1) == 0) goto LAB_09d47966;
LAB_09d479e3:
                                func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
                                if (((ulong)puStack_220 & 1) != 0) goto LAB_09d47a0a;
LAB_09d47974:
                                if (pbStack_360 < pbStack_358) goto LAB_09d4798a;
LAB_09d47a39:
                                pbStack_360 = (byte *)func_0x04909a40(&pbStack_368,&uStack_3c8);
                              }
                              else {
                                func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
                                if ((uStack_348 & 1) != 0) goto LAB_09d479e3;
LAB_09d47966:
                                if (((ulong)puStack_220 & 1) == 0) goto LAB_09d47974;
LAB_09d47a0a:
                                func_0x0412a280(uStack_210,(ulong)puStack_220 & 0xfffffffffffffffe);
                                if (pbStack_358 <= pbStack_360) goto LAB_09d47a39;
LAB_09d4798a:
                                pbVar36 = pbStack_360;
                                if ((uStack_3c8 & 1) == 0) {
                                  *(ulong *)(pbStack_360 + 0x10) = uStack_3b8;
                                  *(undefined4 *)pbStack_360 = (undefined4)uStack_3c8;
                                  *(undefined4 *)(pbStack_360 + 4) = uStack_3c8._4_4_;
                                  *(undefined4 *)(pbStack_360 + 8) = (undefined4)uStack_3c0;
                                  *(undefined4 *)(pbStack_360 + 0xc) = uStack_3c0._4_4_;
                                  pbStack_360 = pbStack_360 + 0x18;
                                }
                                else {
                                  func_0x0412e5e0(pbStack_360,uStack_3b8,uStack_3c0);
                                  pbStack_360 = pbVar36 + 0x18;
                                }
                              }
                              if ((uStack_3c8 & 1) != 0) {
                                func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
                              }
                              lVar13 = lStack_150;
                              if (plStack_1f0 != (long *)0x0) {
                                (**(code **)(*plStack_1f0 + 8))();
                                lVar13 = lStack_150;
                              }
                            }
joined_r0x09d4792a:
                            lStack_150 = lVar13;
                            lVar32 = lStack_148;
                            if (lVar13 != 0) {
                              for (; lVar13 != lVar32; lVar32 = lVar32 + -0x18) {
                                if ((*(byte *)(lVar32 + -0x18) & 1) != 0) {
                                  func_0x0412a280(*(undefined8 *)(lVar32 + -8),
                                                  *(ulong *)(lVar32 + -0x18) & 0xfffffffffffffffe);
                                }
                              }
                              lStack_148 = lVar13;
                              func_0x0412a280(lStack_150,lStack_140 - lStack_150);
                            }
                            if ((bStack_168 & 1) != 0) {
                              func_0x0412a280(uStack_158,
                                              CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
                            }
                            func_0x09d70500(&lStack_170);
                            if ((bStack_188 & 1) != 0) {
                              func_0x0412a280(uStack_178,
                                              CONCAT71(uStack_187,bStack_188) & 0xfffffffffffffffe);
                            }
                            uStack_1b0 = 0;
                            lVar13 = (long)pbStack_1c8 - (long)pbStack_1d0;
                            pbVar36 = pbStack_1d0;
                            pbVar34 = pbStack_1c8;
                            while (uVar30 = lVar13 >> 3, pbStack_1d0 = pbVar36,
                                  pbStack_1c8 = pbVar34, 2 < uVar30) {
                              func_0x0412a280(*(long *)pbVar36,0x1000);
                              pbStack_1d0 = pbStack_1d0 + 8;
                              pbVar36 = pbStack_1d0;
                              pbVar34 = pbStack_1c8;
                              lVar13 = (long)pbStack_1c8 - (long)pbStack_1d0;
                            }
                            if (uVar30 == 1) {
                              uStack_1b8 = 0x80;
LAB_09d47bd1:
                            }
                            else if (uVar30 == 2) {
                              uStack_1b8 = 0x100;
                              goto LAB_09d47bd1;
                            }
                            if (pbVar36 != pbVar34) {
                              do {
                                func_0x0412a280(*(long *)pbVar36,0x1000);
                                pbVar36 = pbVar36 + 8;
                              } while (pbVar36 != pbVar34);
                              if ((long)pbStack_1d0 - (long)pbStack_1c8 != 0) {
                                pbStack_1c8 = pbStack_1c8 +
                                              (((long)pbStack_1d0 - (long)pbStack_1c8) + 7U &
                                              0xfffffffffffffff8);
                              }
                            }
                            if (plStack_1d8 != (long *)0x0) {
                              uVar30 = lStack_1c0 - (long)plStack_1d8;
LAB_09d47d2f:
                              func_0x0412a280(plStack_1d8,uVar30);
                            }
                          }
                          if ((uStack_3e8 & 1) != 0) {
                            func_0x0412a280(psStack_3d8,
                                            CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
                          }
                          bVar10 = (byte)uStack_250 & 1;
                        }
                      }
                      if (bVar10 != 0) {
                        func_0x0412a280(uStack_240,uStack_250 & 0xfffffffffffffffe);
                      }
                      uVar30 = uStack_300 + 1;
                      puVar16 = puStack_e8;
                    } while (uVar30 < (ulong)(((long)puStack_e0 - (long)puStack_e8 >> 3) *
                                             -0x5555555555555555));
                    if ((iStack_254 < 0xc) || (pbStack_368 == pbStack_360)) goto LAB_09d480e2;
                    lVar13 = CONCAT71((undefined7)uStack_2d7,bStack_2d8);
                    if (lVar13 != 0) {
                      for (lVar32 = CONCAT53(uStack_2cd,
                                             CONCAT12(uStack_2ce,
                                                      CONCAT11(uStack_2cf,uStack_2d7._7_1_)));
                          lVar13 != lVar32; lVar32 = lVar32 + -8) {
                        plVar14 = *(long **)(lVar32 + -8);
                        *(undefined8 *)(lVar32 + -8) = 0;
                        if (plVar14 != (long *)0x0) {
                          (**(code **)(*plVar14 + 8))();
                        }
                      }
                      func_0x0412a280(lVar13,(long)puStack_2c8 - lVar13);
                    }
                  }
                  puVar7 = puStack_290;
                  if (pbStack_368 == pbStack_360) {
                    if (puStack_290 < puStack_288) {
                      if ((uStack_2f8 & 1) == 0) {
                        *(long *)(puStack_290 + 4) = lStack_2e8;
                        *puStack_290 = (undefined4)uStack_2f8;
                        puStack_290[1] = uStack_2f8._4_4_;
                        puStack_290[2] = (undefined4)uStack_2f0;
                        puStack_290[3] = uStack_2f0._4_4_;
                      }
                      else {
                        func_0x0412e5e0(puStack_290,lStack_2e8,uStack_2f0);
                      }
                      puStack_290 = puVar7 + 6;
                    }
                    else {
                      puStack_290 = (undefined4 *)func_0x04909a40(&puStack_298,&uStack_2f8);
                    }
                  }
                  else {
                    lVar13 = (long)&uStack_2f8 + 1;
                    if ((uStack_2f8 & 1) != 0) {
                      lVar13 = lStack_2e8;
                    }
                    bStack_1e8 = (byte)lVar13;
                    sStack_1e7 = (short)((ulong)lVar13 >> 8);
                    cStack_1e5 = (char)((ulong)lVar13 >> 0x18);
                    uStack_1e4 = (undefined4)((ulong)lVar13 >> 0x20);
                    func_0x07310bf0(1,2,9,&UNK_013e951a,&bStack_1e8);
                    pbVar34 = pbStack_360;
                    for (pbVar36 = pbStack_368; pbVar36 != pbVar34; pbVar36 = pbVar36 + 0x18) {
                      pbVar21 = pbVar36 + 1;
                      if ((*pbVar36 & 1) != 0) {
                        pbVar21 = *(byte **)(pbVar36 + 0x10);
                      }
                      bStack_1e8 = (byte)pbVar21;
                      sStack_1e7 = (short)((ulong)pbVar21 >> 8);
                      cStack_1e5 = (char)((ulong)pbVar21 >> 0x18);
                      uStack_1e4 = (undefined4)((ulong)pbVar21 >> 0x20);
                      func_0x09a3e1d0(1,2,9,&UNK_012ee1a2,&bStack_1e8);
                    }
                  }
                  pbVar34 = pbStack_368;
                  pbVar36 = pbStack_360;
                  if (pbStack_368 != (byte *)0x0) {
                    for (; pbVar34 != pbVar36; pbVar36 = pbVar36 + -0x18) {
                      if ((pbVar36[-0x18] & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(pbVar36 + -8),
                                        *(ulong *)(pbVar36 + -0x18) & 0xfffffffffffffffe);
                      }
                    }
                    pbStack_360 = pbVar34;
                    func_0x0412a280(pbStack_368,(long)pbStack_358 - (long)pbStack_368);
                  }
                  puVar35 = puStack_e8;
                  puVar16 = puStack_e0;
                  puVar20 = puStack_370;
                  if (puStack_e8 != (undefined8 *)0x0) {
                    for (; puVar35 != puVar16; puVar16 = puVar16 + -3) {
                      if ((*(byte *)(puVar16 + -3) & 1) != 0) {
                        func_0x0412a280(puVar16[-1],puVar16[-3] & 0xfffffffffffffffe);
                      }
                    }
                    puStack_e0 = puVar35;
                    func_0x0412a280(puStack_e8,lStack_d8 - (long)puStack_e8);
                    puVar20 = puStack_370;
                  }
                }
                if ((uStack_208 & 1) != 0) {
                  func_0x0412a280(psStack_1f8,uStack_208 & 0xfffffffffffffffe);
                }
              }
            }
          }
          if ((uStack_2f8 & 1) != 0) {
            func_0x0412a280(lStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
          }
          puVar20 = puVar20 + 3;
          puVar25 = puStack_108;
        } while (puVar20 != puStack_70);
      }
      puStack_108 = puVar25;
      puVar20 = puStack_100;
      if (puVar25 != (ulong *)0x0) {
        for (; puVar25 != puVar20; puVar20 = puVar20 + -3) {
          if ((puVar20[-3] & 1) != 0) {
            func_0x0412a280(puVar20[-1],puVar20[-3] & 0xfffffffffffffffe);
          }
        }
        puStack_100 = puVar25;
        func_0x0412a280(puStack_108,lStack_f8 - (long)puStack_108);
      }
      lVar27 = lVar27 + 0x110;
    } while (lVar27 != *(long *)(lStack_80 + 0x10));
    if (puStack_298 != puStack_290) {
      bStack_1e8 = 0x18;
      sStack_1e7 = 0x7546;
      cStack_1e5 = 0x6e;
      uStack_1e4 = 0x6f697463;
      uStack_1e0 = 0x6d614e6e;
      uStack_1dc = 0x65;
      uStack_1db = 0;
      puStack_d0 = puStack_298;
      puStack_c8 = puStack_290;
      puStack_c0 = puStack_288;
      puStack_298 = (undefined4 *)0x0;
      puStack_290 = (undefined4 *)0x0;
      puStack_288 = (undefined4 *)0x0;
      func_0x09da9830(uStack_118,&bStack_1e8,&puStack_d0);
      puVar8 = puStack_d0;
      puVar7 = puStack_c8;
      if (puStack_d0 != (undefined4 *)0x0) {
        for (; puVar8 != puVar7; puVar7 = puVar7 + -6) {
          if ((*(byte *)(puVar7 + -6) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar7 + -2),
                            *(ulong *)(puVar7 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_c8 = puVar8;
        func_0x0412a280(puStack_d0,(long)puStack_c0 - (long)puStack_d0);
      }
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(plStack_1d8,
                        CONCAT44(uStack_1e4,CONCAT13(cStack_1e5,CONCAT21(sStack_1e7,bStack_1e8))) &
                        0xfffffffffffffffe);
      }
    }
  }
  bStack_1e8 = 0x31;
  sStack_1e7 = 0xa2c6;
  cStack_1e5 = 1;
  uStack_1e4 = 0;
  uStack_1e0 = 9;
  uStack_1dc = 0;
  uStack_1db = 0;
  uStack_1da = 0;
  plStack_1d8 = (long *)&UNK_01a2c661;
  pbStack_1d0 = (byte *)0x9;
  func_0x048ad670(&bStack_2d8,&bStack_1e8,2,0x2f);
  bVar37 = (bStack_2d8 & 1) != 0;
  puStack_220 = &uStack_2d7;
  if (bVar37) {
    puStack_220 = puStack_2c8;
  }
  uStack_218 = (ulong)(bStack_2d8 >> 1);
  if (bVar37) {
    uStack_218 = CONCAT53(uStack_2cd,CONCAT12(uStack_2ce,CONCAT11(uStack_2cf,uStack_2d7._7_1_)));
  }
  func_0x0ee35680(&uStack_250,&puStack_220);
  if ((bStack_2d8 & 1) != 0) {
    func_0x0412a280(puStack_2c8,CONCAT71((undefined7)uStack_2d7,bStack_2d8) & 0xfffffffffffffffe);
  }
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  lVar13 = *(long *)(*(long *)(lStack_b0 + 0x98) + 8);
  lVar27 = *(long *)(*(long *)(lStack_b0 + 0x98) + 0x10);
  func_0x09b0fd30(&uStack_3c8,lVar13,lVar27,(lVar27 - lVar13 >> 4) * -0xf0f0f0f0f0f0f0f);
  func_0x0485e1c0(&bStack_1e8);
  iVar28 = (int)(uStack_3c0 - uStack_3c8 >> 4) * -0xf0f0f0f;
  uVar30 = uStack_3c8;
  do {
    uStack_3c8 = uVar30;
    if (iVar28 == 0) {
      func_0x0485e2d0(&bStack_1e8);
      uVar31 = uStack_3c8;
      uVar30 = uStack_3c0;
      if (uStack_3c8 != 0) {
        while (uVar31 != uVar30) {
          plVar14 = *(long **)(uVar30 - 0x20);
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar13 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              func_0x0412c2d0(plVar14);
            }
          }
          func_0x048fac00(uVar30 - 0x110);
          uVar30 = uVar30 - 0x110;
        }
        uStack_3c0 = uVar31;
        func_0x0412a280(uStack_3c8,uStack_3b8 - uStack_3c8);
      }
      if ((uStack_248 & 1) != 0) {
        func_0x0412a280(psStack_238,uStack_248 & 0xfffffffffffffffe);
      }
      puVar8 = puStack_298;
      puVar7 = puStack_290;
      if (puStack_298 != (undefined4 *)0x0) {
        for (; puVar8 != puVar7; puVar7 = puVar7 + -6) {
          if ((*(byte *)(puVar7 + -6) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar7 + -2),
                            *(ulong *)(puVar7 + -6) & 0xfffffffffffffffe);
          }
        }
        puStack_290 = puVar8;
        func_0x0412a280(puStack_298,(long)puStack_288 - (long)puStack_298);
      }
      return;
    }
    iVar28 = iVar28 + -1;
    lVar13 = (long)iVar28 * 0x110;
    uStack_3e8 = 0x6e756612;
    uStack_3e4 = 0x6f697463;
    uStack_3e0 = 0x6e;
    uStack_3df = 0x73;
    uStack_3de = 0;
    func_0x0d62b830(&bStack_2d8,*(undefined8 *)(uVar30 + 0xe8 + lVar13),&uStack_3e8,
                    *(undefined4 *)(uVar30 + 0x108 + lVar13));
    if ((uStack_3e8 & 1) != 0) {
      func_0x0412a280(psStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
    }
    if ((uStack_248 & 1) == 0) {
      psStack_3d8 = psStack_238;
      uStack_3e8 = (uint)uStack_248;
      uStack_3e4 = uStack_248._4_4_;
      uStack_3e0 = SUB81(uStack_240,0);
      uStack_3df = (undefined1)((ulong)uStack_240 >> 8);
      uStack_3de = (undefined1)((ulong)uStack_240 >> 0x10);
      uStack_3dd = (undefined1)((ulong)uStack_240 >> 0x18);
      uStack_3dc = uStack_240._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_3e8,psStack_238,uStack_240);
    }
    lVar13 = uVar30 + lVar13;
    cVar11 = func_0x0d62c2c0(lVar13,&uStack_3e8);
    if ((uStack_3e8 & 1) != 0) {
      func_0x0412a280(psStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
    }
    if (cVar11 != '\0') {
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      if ((uStack_248 & 1) == 0) {
        psStack_3d8 = psStack_238;
        uStack_3e8 = (uint)uStack_248;
        uStack_3e4 = uStack_248._4_4_;
        uStack_3e0 = SUB81(uStack_240,0);
        uStack_3df = (undefined1)((ulong)uStack_240 >> 8);
        uStack_3de = (undefined1)((ulong)uStack_240 >> 0x10);
        uStack_3dd = (undefined1)((ulong)uStack_240 >> 0x18);
        uStack_3dc = uStack_240._4_4_;
      }
      else {
        func_0x0412e5e0(&uStack_3e8,psStack_238,uStack_240);
      }
      func_0x0d62a0d0(*(undefined8 *)(lVar13 + 0xe8),&uStack_3e8,&uStack_3a8,
                      *(undefined4 *)(lVar13 + 0x108));
      if ((uStack_3e8 & 1) != 0) {
        func_0x0412a280(psStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
      }
      func_0x04863060(&bStack_320,0);
      cVar11 = func_0x0485e320(&bStack_1e8,&uStack_3a8,&bStack_320,0);
      if (cVar11 == '\0') {
        func_0x04860c50(&uStack_3e8,&bStack_1e8);
        psVar19 = (short *)((long)&uStack_3e8 + 1);
        if ((uStack_3e8 & 1) != 0) {
          psVar19 = psStack_3d8;
        }
        func_0x09d4a600(&UNK_01a2c661,psVar19);
        if ((uStack_3e8 & 1) == 0) goto LAB_09d48c8c;
        func_0x0412a280(psStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
        func_0x04863610(&bStack_320);
      }
      else {
        iVar2 = *(int *)(**(long **)(**(long **)(lVar13 + 0xe8) + 8) + 0x198);
        uVar22 = func_0x04864680(&bStack_320,&UNK_01a2c679);
        cVar11 = func_0x04864260(uVar22);
        if (cVar11 == '\0') {
          cVar11 = func_0x04864270(uVar22);
          if (cVar11 != '\0') {
            func_0x04865530(&uStack_388,uVar22);
            func_0x048655b0(&uStack_348,uVar22);
            puStack_328 = (undefined8 *)CONCAT71(puStack_328._1_7_,iVar2 < 0x12);
            lStack_2e0 = CONCAT44(lStack_2e0._4_4_,iVar28);
            while( true ) {
              cVar11 = func_0x04862c80(&uStack_388,&uStack_348);
              if (cVar11 != '\0') break;
              uVar22 = func_0x04862b80(&uStack_388);
              func_0x04863cb0(&uStack_3e8,uVar22,&UNK_01e79d90);
              lVar13 = func_0x09d71660(puStack_278,&uStack_3e8);
              if ((lVar13 == 0) || (uVar30 = *(ulong *)(lVar13 + 0x28), uVar30 == 0)) {
                psStack_270 = (short *)((long)&uStack_3e8 + 1);
                if ((uStack_3e8 & 1) != 0) {
                  psStack_270 = psStack_3d8;
                }
                func_0x04b0ace0(1,2,9,&UNK_011f7ef0,&psStack_270);
              }
              else {
                puVar20 = *(ulong **)(lStack_120 + 0xa8);
                uStack_300 = uVar30;
                if (puVar20 < *(ulong **)(lStack_120 + 0xb0)) {
                  *puVar20 = uVar30;
                  *(byte *)(puVar20 + 1) = (byte)puStack_328;
                  *(ulong **)(lStack_120 + 0xa8) = puVar20 + 2;
                }
                else {
                  puVar25 = *(ulong **)(lStack_120 + 0xa0);
                  lVar13 = (long)puVar20 - (long)puVar25;
                  uVar30 = (lVar13 >> 4) + 1;
                  if (0xfffffffffffffff < uVar30) {
LAB_09d48f0a:
                    func_0x09d70620();
LAB_09d48f0f:
                    uVar22 = func_0x04882eb0();
                    func_0x041084d6(&DAT_0f5ea4a0);
                    if ((uStack_388 & 1) != 0) {
                      func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
                    }
                    if ((uStack_348 & 1) != 0) {
                      func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
                    }
                    if (((ulong)puStack_220 & 1) != 0) {
                      func_0x0412a280(uStack_210,(ulong)puStack_220 & 0xfffffffffffffffe);
                    }
                    if (plStack_1f0 != (long *)0x0) {
                      (**(code **)(*plStack_1f0 + 8))(plStack_1f0);
                    }
                    func_0x09d4a790(&bStack_1e8);
                    if ((uStack_3e8 & 1) != 0) {
                      func_0x0412a280(psStack_3d8,
                                      CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
                    }
                    if ((uStack_250 & 1) != 0) {
                      func_0x0412a280(uStack_240,uStack_250 & 0xfffffffffffffffe);
                    }
                    func_0x09d45750(&bStack_2d8);
                    func_0x04886070(&pbStack_368);
                    func_0x04886070(&puStack_e8);
                    if ((uStack_208 & 1) != 0) {
                      func_0x0412a280(psStack_1f8,uStack_208 & 0xfffffffffffffffe);
                    }
                    if ((uStack_2f8 & 1) != 0) {
                      func_0x0412a280(lStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
                    }
                    func_0x06272c70(&puStack_108);
                    func_0x04886070(&puStack_298);
                    func_0x0eee2d70(uVar22);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar26 = (long)*(ulong **)(lStack_120 + 0xb0) - (long)puVar25;
                  uVar31 = (long)uVar26 >> 3;
                  if ((ulong)((long)uVar26 >> 3) <= uVar30) {
                    uVar31 = uVar30;
                  }
                  if (0x7fffffffffffffef < uVar26) {
                    uVar31 = 0xfffffffffffffff;
                  }
                  puStack_370 = puVar25;
                  if (0xfffffffffffffff < uVar31) goto LAB_09d48f0f;
                  lVar32 = uVar31 * 0x10;
                  lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar32);
                  if (lVar27 == 0) {
                    func_0x0eec74c0(lVar32,0);
                  }
                  *(ulong *)(lVar27 + lVar13) = uStack_300;
                  *(byte *)(lVar27 + 8 + lVar13) = (byte)puStack_328;
                  puVar23 = (ulong *)(lVar27 + lVar13 + (lVar13 >> 4) * -0x10);
                  puVar25 = puVar23;
                  for (puVar24 = puStack_370; puVar24 != puVar20; puVar24 = puVar24 + 2) {
                    *(byte *)(puVar25 + 1) = (byte)puVar24[1];
                    *puVar25 = *puVar24;
                    puVar25 = puVar25 + 2;
                  }
                  lVar13 = lVar27 + lVar13 + 0x10;
                  *(ulong **)(lStack_120 + 0xa0) = puVar23;
                  *(long *)(lStack_120 + 0xa8) = lVar13;
                  *(long *)(lStack_120 + 0xb0) = lVar32 + lVar27;
                  if (puStack_370 != (ulong *)0x0) {
                    func_0x0412a280(puStack_370,uVar26);
                  }
                  *(long *)(lStack_120 + 0xa8) = lVar13;
                  iVar28 = (int)lStack_2e0;
                }
              }
              if ((uStack_3e8 & 1) != 0) {
                func_0x0412a280(psStack_3d8,CONCAT44(uStack_3e4,uStack_3e8) & 0xfffffffffffffffe);
              }
              func_0x04862ba0(&uStack_388);
            }
            func_0x04862b40(&uStack_348);
            func_0x04862b40(&uStack_388);
            func_0x04863610(&bStack_320);
            goto joined_r0x09d48c59;
          }
        }
        uStack_3e8 = 0x1a2c679;
        uStack_3e4 = 0;
        func_0x09d4a860(1,3,9,&UNK_0141d47b,&uStack_3e8);
LAB_09d48c8c:
        func_0x04863610(&bStack_320);
      }
joined_r0x09d48c59:
      if ((uStack_3a8 & 1) != 0) {
        func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
      }
    }
    lVar27 = lStack_2b0;
    lVar13 = lStack_2a8;
    if (lStack_2b0 != 0) {
      while (lVar27 != lVar13) {
        func_0x0d697f30(lVar13 + -0x40);
        lVar13 = lVar13 + -0x40;
      }
      lStack_2a8 = lVar27;
      func_0x0412a280(lStack_2b0,lStack_2a0 - lStack_2b0);
    }
    plVar14 = plStack_2b8;
    if (plStack_2b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2b8 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
        func_0x0412c2d0(plVar14);
      }
    }
    uVar30 = uStack_3c8;
    if ((bStack_2d8 & 1) != 0) {
      func_0x0412a280(puStack_2c8,CONCAT71((undefined7)uStack_2d7,bStack_2d8) & 0xfffffffffffffffe);
      uVar30 = uStack_3c8;
    }
  } while( true );
}


