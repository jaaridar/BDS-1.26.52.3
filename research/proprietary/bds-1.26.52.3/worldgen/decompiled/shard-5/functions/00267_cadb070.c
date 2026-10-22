/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbdb070 (ELF vaddr 0xcadb070)
 * Label: caller-of-callee
 * Body:  [[0cbdb070, 0cbdbbff] [0cbdbc02, 0cbdbc14] [0cbdbcc9, 0cbdbd32]]
 * Ghidra: FUN_0cbdb070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cbdb070(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  undefined8 uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  char *pcVar51;
  undefined8 *puVar52;
  byte *pbVar53;
  bool bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
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
  undefined1 uStack_111;
  undefined8 uStack_110;
  ulong uStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  byte bStack_ef;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_98;
  undefined4 uStack_8c;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  
  uStack_8c = param_4;
  puVar39 = (ulong *)func_0x0cbdbd50(param_2,&UNK_01337842,0xc);
  bVar4 = (byte)*puVar39;
  uVar49 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar49 = puVar39[1];
  }
  if (uVar49 == 0) {
    auStack_b8 = (undefined1  [16])0x0;
    auStack_c8 = (undefined1  [16])0x0;
    uStack_a8 = 0;
    if ((DAT_0f7784d8 & 1) == 0) {
      auVar37._1_7_ = uRam000000000f7784d9;
      auVar37[0] = DAT_0f7784d8;
      auVar37._8_8_ = 0;
      auStack_c8 = auVar37 << 0x40;
      auStack_b8._8_8_ = _DAT_0f7784e8;
      auStack_b8._0_8_ = _DAT_0f7784e0;
      uVar49 = _DAT_0f7784d0;
    }
    else {
      func_0x04885070(auStack_c8 + 8,_DAT_0f7784e8,_DAT_0f7784e0);
      uVar49 = _DAT_0f7784d0;
    }
  }
  else {
    auVar36._8_8_ = 0;
    auVar36._0_8_ = auStack_c8._8_8_;
    auStack_c8 = auVar36 << 0x40;
    if ((bVar4 & 1) == 0) {
      uVar48 = *puVar39;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar48;
      auStack_c8 = auVar38 << 0x40;
      auStack_b8 = *(undefined1 (*) [16])(puVar39 + 1);
      uStack_a8 = 0;
      uVar49 = uVar48 & 0xff;
      if ((uVar48 & 1) == 0) goto LAB_0cbdb0f8;
LAB_0cbdb175:
      uVar48 = auStack_b8._0_8_;
    }
    else {
      func_0x0412e5e0(auStack_c8 + 8,puVar39[2]);
      uStack_a8 = 0;
      uVar49 = (ulong)auStack_c8[8];
      if ((auStack_c8[8] & 1) != 0) goto LAB_0cbdb175;
LAB_0cbdb0f8:
      uVar48 = uVar49 >> 1;
    }
    if (uVar48 != 0) {
      uStack_a8 = 0;
      if ((uVar49 & 1) == 0) {
        pbVar53 = auStack_c8 + 9;
      }
      else {
        pbVar53 = (byte *)auStack_b8._8_8_;
      }
      if ((pbVar53 != (byte *)0x0) && (*pbVar53 != 0)) {
        uVar49 = 0xcbf29ce484222325;
        uVar48 = func_0x0eee2e90(pbVar53);
        if (uVar48 != 0) {
          uVar40 = (ulong)((uint)uVar48 & 7);
          if (7 < uVar48) {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            do {
              uVar49 = (((((((uVar49 * 0x100000001b3 ^ (ulong)*pbVar53) * 0x100000001b3 ^
                            (ulong)pbVar53[1]) * 0x100000001b3 ^ (ulong)pbVar53[2]) * 0x100000001b3
                          ^ (ulong)pbVar53[3]) * 0x100000001b3 ^ (ulong)pbVar53[4]) * 0x100000001b3
                        ^ (ulong)pbVar53[5]) * 0x100000001b3 ^ (ulong)pbVar53[6]) * 0x100000001b3 ^
                       (ulong)pbVar53[7];
              pbVar53 = pbVar53 + 8;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar40 != 0) {
            uVar48 = 0;
            do {
              uVar49 = uVar49 * 0x100000001b3 ^ (ulong)pbVar53[uVar48];
              uVar48 = uVar48 + 1;
            } while (uVar40 != uVar48);
          }
        }
        goto LAB_0cbdb295;
      }
    }
    uStack_a8 = 0;
    uVar49 = 0;
  }
LAB_0cbdb295:
  auStack_c8._0_8_ = uVar49;
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar48 = uStack_58;
  uVar49 = uStack_60;
  uStack_48 = 0;
  uVar40 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar40 = uStack_58;
  }
  if (uVar40 == 0) {
LAB_0cbdb42e:
    uStack_68 = 0;
joined_r0x0cbdb43c:
    if ((uVar49 & 1) != 0) goto LAB_0cbdb43e;
LAB_0cbdb412:
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    pbVar53 = pbStack_50;
    if ((uStack_60 & 1) == 0) {
      pbVar53 = (byte *)((long)&uStack_60 + 1);
    }
    if (pbVar53 != (byte *)0x0) {
      if (*pbVar53 == 0) goto LAB_0cbdb42e;
      uVar50 = 0xcbf29ce484222325;
      uVar40 = func_0x0eee2e90(pbVar53);
      uStack_68 = uVar50;
      if (uVar40 != 0) {
        uVar47 = (ulong)((uint)uVar40 & 7);
        if (7 < uVar40) {
          uVar40 = uVar40 & 0xfffffffffffffff8;
          do {
            uVar50 = (((((((uVar50 * 0x100000001b3 ^ (ulong)*pbVar53) * 0x100000001b3 ^
                          (ulong)pbVar53[1]) * 0x100000001b3 ^ (ulong)pbVar53[2]) * 0x100000001b3 ^
                        (ulong)pbVar53[3]) * 0x100000001b3 ^ (ulong)pbVar53[4]) * 0x100000001b3 ^
                      (ulong)pbVar53[5]) * 0x100000001b3 ^ (ulong)pbVar53[6]) * 0x100000001b3 ^
                     (ulong)pbVar53[7];
            pbVar53 = pbVar53 + 8;
            uVar40 = uVar40 - 8;
          } while (uVar40 != 0);
        }
        uStack_68 = uVar50;
        if (uVar47 != 0) {
          uVar40 = 0;
          do {
            uVar50 = uVar50 * 0x100000001b3 ^ (ulong)pbVar53[uVar40];
            uVar40 = uVar40 + 1;
            uStack_68 = uVar50;
          } while (uVar47 != uVar40);
        }
      }
      goto joined_r0x0cbdb43c;
    }
    uStack_68 = 0;
    if ((uStack_60 & 1) == 0) goto LAB_0cbdb412;
LAB_0cbdb43e:
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar48);
  }
  uStack_f8 = *(undefined8 **)(param_1 + 0x148);
  uVar46 = *(undefined8 *)(param_1 + 0x150);
  bStack_f0 = (byte)uVar46;
  bStack_ef = (byte)((ulong)uVar46 >> 8);
  uStack_ee = (undefined2)((ulong)uVar46 >> 0x10);
  uStack_ec = (undefined4)((ulong)uVar46 >> 0x20);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_f8);
  plVar1 = (long *)CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(bStack_ef,bStack_f0)));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar41 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar41 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3f8);
  if (lVar41 == 0) {
    func_0x0eec74c0(0x3f8,0);
  }
  uStack_e8 = (undefined4)_DAT_0170ae44;
  uStack_e4 = (undefined4)((ulong)_DAT_0170ae44 >> 0x20);
  uStack_f8 = (undefined8 *)_DAT_0170ae34;
  bStack_f0 = (byte)_UNK_0170ae3c;
  bStack_ef = (byte)((ulong)_UNK_0170ae3c >> 8);
  uStack_ee = (undefined2)((ulong)_UNK_0170ae3c >> 0x10);
  uStack_ec = (undefined4)((ulong)_UNK_0170ae3c >> 0x20);
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  FUN_0c65ba00(lVar41,&uStack_88,uStack_8c);
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar46 = 0;
    lVar42 = 0;
  }
  else {
    lVar42 = func_0x0412c300();
    uVar46 = 0;
    if (lVar42 != 0) {
      uVar46 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(lVar41 + 0x398) = uVar46;
  plVar1 = *(long **)(lVar41 + 0x3a0);
  *(long *)(lVar41 + 0x3a0) = lVar42;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar42 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar54 = (*(byte *)(lVar41 + 0xd0) & 1) != 0;
  lVar42 = lVar41 + 0xd1;
  if (bVar54) {
    lVar42 = *(long *)(lVar41 + 0xe0);
  }
  uVar49 = (ulong)(*(byte *)(lVar41 + 0xd0) >> 1);
  if (bVar54) {
    uVar49 = *(ulong *)(lVar41 + 0xd8);
  }
  if (0xfffffffffffffff7 < uVar49) {
    func_0x04882e30();
    goto LAB_0cbdbbf9;
  }
  pcVar43 = (char *)((long)&uStack_110 + 1);
  if (uVar49 < 0x17) {
    uStack_110 = CONCAT71(uStack_110._1_7_,(char)uVar49 * '\x02');
    if (uVar49 != 0) goto LAB_0cbdb628;
  }
  else {
    uVar48 = 0x1a;
    if ((uVar49 | 7) != 0x17) {
      uVar48 = (uVar49 | 7) + 1;
    }
    pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pcVar43 == (char *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_110 = uVar48 | 1;
    uStack_108 = uVar49;
    pcStack_100 = pcVar43;
LAB_0cbdb628:
    func_0x0eee2f00(pcVar43,lVar42,uVar49);
  }
  pcVar51 = (char *)((long)&uStack_110 + 1);
  pcVar43[uVar49] = '\0';
  uVar48 = (ulong)((byte)uStack_110 >> 1);
  uVar49 = uStack_108;
  pcVar43 = pcStack_100;
  if ((uStack_110 & 1) == 0) {
    uVar49 = uVar48;
    pcVar43 = pcVar51;
  }
  if (uVar49 != 0) {
    pcVar44 = pcVar43;
    if (uVar49 < 8) {
LAB_0cbdb79c:
      do {
        cVar3 = *pcVar44;
        cVar57 = cVar3 + ' ';
        if (0x19 < (byte)(cVar3 + 0xbfU)) {
          cVar57 = cVar3;
        }
        *pcVar44 = cVar57;
        pcVar44 = pcVar44 + 1;
      } while (pcVar44 != pcVar43 + uVar49);
    }
    else if (uVar49 < 0x20) {
      uVar48 = 0;
LAB_0cbdb735:
      uVar40 = uVar49 & 0xfffffffffffffff8;
      pcVar44 = pcVar43 + uVar40;
      do {
        uVar46 = *(undefined8 *)(pcVar43 + uVar48);
        bVar55 = (char)uVar46 + DAT_014e9110;
        cVar57 = (char)((ulong)uVar46 >> 8);
        bVar56 = cVar57 + DAT_014e9110._1_1_;
        cVar59 = (char)((ulong)uVar46 >> 0x10);
        bVar58 = cVar59 + DAT_014e9110._2_1_;
        cVar61 = (char)((ulong)uVar46 >> 0x18);
        bVar60 = cVar61 + DAT_014e9110._3_1_;
        cVar63 = (char)((ulong)uVar46 >> 0x20);
        bVar62 = cVar63 + DAT_014e9110._4_1_;
        cVar65 = (char)((ulong)uVar46 >> 0x28);
        bVar64 = cVar65 + DAT_014e9110._5_1_;
        cVar67 = (char)((ulong)uVar46 >> 0x30);
        cVar3 = (char)((ulong)uVar46 >> 0x38);
        bVar66 = cVar67 + DAT_014e9110._6_1_;
        bVar68 = cVar3 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar5 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pcVar43 + uVar48) =
             CONCAT17((~-((byte)((bVar68 < bVar11) * bVar11 | (bVar68 >= bVar11) * bVar68) == bVar68
                         ) & UNK_014ea367) + cVar3,
                      CONCAT16((~-((byte)((bVar66 < bVar10) * bVar10 | (bVar66 >= bVar10) * bVar66)
                                  == bVar66) & UNK_014ea366) + cVar67,
                               CONCAT15((~-((byte)((bVar64 < bVar9) * bVar9 |
                                                  (bVar64 >= bVar9) * bVar64) == bVar64) &
                                        UNK_014ea365) + cVar65,
                                        CONCAT14((~-((byte)((bVar62 < bVar8) * bVar8 |
                                                           (bVar62 >= bVar8) * bVar62) == bVar62) &
                                                 UNK_014ea364) + cVar63,
                                                 CONCAT13((~-((byte)((bVar60 < bVar7) * bVar7 |
                                                                    (bVar60 >= bVar7) * bVar60) ==
                                                             bVar60) & UNK_014ea363) + cVar61,
                                                          CONCAT12((~-((byte)((bVar58 < bVar6) *
                                                                              bVar6 | (bVar58 >=
                                                                                      bVar6) * 
                                                  bVar58) == bVar58) & UNK_014ea362) + cVar59,
                                                  CONCAT11((~-((byte)((bVar56 < bVar5) * bVar5 |
                                                                     (bVar56 >= bVar5) * bVar56) ==
                                                              bVar56) & UNK_014ea361) + cVar57,
                                                           (~-((byte)((bVar55 < bVar4) * bVar4 |
                                                                     (bVar55 >= bVar4) * bVar55) ==
                                                              bVar55) & DAT_014ea360) + (char)uVar46
                                                          )))))));
        uVar48 = uVar48 + 8;
      } while (uVar40 != uVar48);
      if (uVar49 != uVar40) goto LAB_0cbdb79c;
    }
    else {
      uVar48 = uVar49 & 0xffffffffffffffe0;
      uVar40 = 0;
      do {
        pcVar44 = pcVar43 + uVar40;
        cVar3 = pcVar44[1];
        cVar57 = pcVar44[2];
        cVar59 = pcVar44[3];
        cVar61 = pcVar44[4];
        cVar63 = pcVar44[5];
        cVar65 = pcVar44[6];
        cVar67 = pcVar44[7];
        cVar12 = pcVar44[8];
        cVar13 = pcVar44[9];
        cVar14 = pcVar44[10];
        cVar15 = pcVar44[0xb];
        cVar16 = pcVar44[0xc];
        cVar17 = pcVar44[0xd];
        cVar18 = pcVar44[0xe];
        cVar19 = pcVar44[0xf];
        pcVar45 = pcVar43 + uVar40 + 0x10;
        cVar20 = *pcVar45;
        cVar21 = pcVar45[1];
        cVar22 = pcVar45[2];
        cVar23 = pcVar45[3];
        cVar24 = pcVar45[4];
        cVar25 = pcVar45[5];
        cVar26 = pcVar45[6];
        cVar27 = pcVar45[7];
        cVar28 = pcVar45[8];
        cVar29 = pcVar45[9];
        cVar30 = pcVar45[10];
        cVar31 = pcVar45[0xb];
        cVar32 = pcVar45[0xc];
        cVar33 = pcVar45[0xd];
        cVar34 = pcVar45[0xe];
        cVar35 = pcVar45[0xf];
        bVar69 = *pcVar44 + DAT_014e86b0;
        bVar70 = cVar3 + DAT_014e86b0._1_1_;
        bVar71 = cVar57 + DAT_014e86b0._2_1_;
        bVar72 = cVar59 + DAT_014e86b0._3_1_;
        bVar73 = cVar61 + DAT_014e86b0._4_1_;
        bVar74 = cVar63 + DAT_014e86b0._5_1_;
        bVar75 = cVar65 + DAT_014e86b0._6_1_;
        bVar76 = cVar67 + DAT_014e86b0._7_1_;
        bVar77 = cVar12 + DAT_014e86b0._8_1_;
        bVar78 = cVar13 + DAT_014e86b0._9_1_;
        bVar79 = cVar14 + DAT_014e86b0._10_1_;
        bVar80 = cVar15 + DAT_014e86b0._11_1_;
        bVar81 = cVar16 + DAT_014e86b0._12_1_;
        bVar82 = cVar17 + DAT_014e86b0._13_1_;
        bVar83 = cVar18 + DAT_014e86b0._14_1_;
        bVar84 = cVar19 + DAT_014e86b0._15_1_;
        bVar85 = cVar20 + DAT_014e86b0;
        bVar86 = cVar21 + DAT_014e86b0._1_1_;
        bVar87 = cVar22 + DAT_014e86b0._2_1_;
        bVar88 = cVar23 + DAT_014e86b0._3_1_;
        bVar89 = cVar24 + DAT_014e86b0._4_1_;
        bVar90 = cVar25 + DAT_014e86b0._5_1_;
        bVar91 = cVar26 + DAT_014e86b0._6_1_;
        bVar92 = cVar27 + DAT_014e86b0._7_1_;
        bVar93 = cVar28 + DAT_014e86b0._8_1_;
        bVar94 = cVar29 + DAT_014e86b0._9_1_;
        bVar95 = cVar30 + DAT_014e86b0._10_1_;
        bVar96 = cVar31 + DAT_014e86b0._11_1_;
        bVar97 = cVar32 + DAT_014e86b0._12_1_;
        bVar98 = cVar33 + DAT_014e86b0._13_1_;
        bVar99 = cVar34 + DAT_014e86b0._14_1_;
        bVar100 = cVar35 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar5 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar55 = DAT_014e4170._8_1_;
        bVar56 = DAT_014e4170._9_1_;
        bVar58 = DAT_014e4170._10_1_;
        bVar60 = DAT_014e4170._11_1_;
        bVar62 = DAT_014e4170._12_1_;
        bVar64 = DAT_014e4170._13_1_;
        bVar66 = DAT_014e4170._14_1_;
        bVar68 = DAT_014e4170._15_1_;
        pcVar45 = pcVar43 + uVar40;
        *pcVar45 = (-((byte)((bVar4 < bVar69) * bVar4 | (bVar4 >= bVar69) * bVar69) == bVar69) &
                   DAT_014ead50) + *pcVar44;
        pcVar45[1] = (-((byte)((bVar5 < bVar70) * bVar5 | (bVar5 >= bVar70) * bVar70) == bVar70) &
                     UNK_014ead51) + cVar3;
        pcVar45[2] = (-((byte)((bVar6 < bVar71) * bVar6 | (bVar6 >= bVar71) * bVar71) == bVar71) &
                     UNK_014ead52) + cVar57;
        pcVar45[3] = (-((byte)((bVar7 < bVar72) * bVar7 | (bVar7 >= bVar72) * bVar72) == bVar72) &
                     UNK_014ead53) + cVar59;
        pcVar45[4] = (-((byte)((bVar8 < bVar73) * bVar8 | (bVar8 >= bVar73) * bVar73) == bVar73) &
                     UNK_014ead54) + cVar61;
        pcVar45[5] = (-((byte)((bVar9 < bVar74) * bVar9 | (bVar9 >= bVar74) * bVar74) == bVar74) &
                     UNK_014ead55) + cVar63;
        pcVar45[6] = (-((byte)((bVar10 < bVar75) * bVar10 | (bVar10 >= bVar75) * bVar75) == bVar75)
                     & UNK_014ead56) + cVar65;
        pcVar45[7] = (-((byte)((bVar11 < bVar76) * bVar11 | (bVar11 >= bVar76) * bVar76) == bVar76)
                     & UNK_014ead57) + cVar67;
        pcVar45[8] = (-((byte)((bVar55 < bVar77) * bVar55 | (bVar55 >= bVar77) * bVar77) == bVar77)
                     & UNK_014ead58) + cVar12;
        pcVar45[9] = (-((byte)((bVar56 < bVar78) * bVar56 | (bVar56 >= bVar78) * bVar78) == bVar78)
                     & UNK_014ead59) + cVar13;
        pcVar45[10] = (-((byte)((bVar58 < bVar79) * bVar58 | (bVar58 >= bVar79) * bVar79) == bVar79)
                      & UNK_014ead5a) + cVar14;
        pcVar45[0xb] = (-((byte)((bVar60 < bVar80) * bVar60 | (bVar60 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5b) + cVar15;
        pcVar45[0xc] = (-((byte)((bVar62 < bVar81) * bVar62 | (bVar62 >= bVar81) * bVar81) == bVar81
                         ) & UNK_014ead5c) + cVar16;
        pcVar45[0xd] = (-((byte)((bVar64 < bVar82) * bVar64 | (bVar64 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead5d) + cVar17;
        pcVar45[0xe] = (-((byte)((bVar66 < bVar83) * bVar66 | (bVar66 >= bVar83) * bVar83) == bVar83
                         ) & UNK_014ead5e) + cVar18;
        pcVar45[0xf] = (-((byte)((bVar68 < bVar84) * bVar68 | (bVar68 >= bVar84) * bVar84) == bVar84
                         ) & UNK_014ead5f) + cVar19;
        pcVar44 = pcVar43 + uVar40 + 0x10;
        *pcVar44 = (-((byte)((bVar4 < bVar85) * bVar4 | (bVar4 >= bVar85) * bVar85) == bVar85) &
                   DAT_014ead50) + cVar20;
        pcVar44[1] = (-((byte)((bVar5 < bVar86) * bVar5 | (bVar5 >= bVar86) * bVar86) == bVar86) &
                     UNK_014ead51) + cVar21;
        pcVar44[2] = (-((byte)((bVar6 < bVar87) * bVar6 | (bVar6 >= bVar87) * bVar87) == bVar87) &
                     UNK_014ead52) + cVar22;
        pcVar44[3] = (-((byte)((bVar7 < bVar88) * bVar7 | (bVar7 >= bVar88) * bVar88) == bVar88) &
                     UNK_014ead53) + cVar23;
        pcVar44[4] = (-((byte)((bVar8 < bVar89) * bVar8 | (bVar8 >= bVar89) * bVar89) == bVar89) &
                     UNK_014ead54) + cVar24;
        pcVar44[5] = (-((byte)((bVar9 < bVar90) * bVar9 | (bVar9 >= bVar90) * bVar90) == bVar90) &
                     UNK_014ead55) + cVar25;
        pcVar44[6] = (-((byte)((bVar10 < bVar91) * bVar10 | (bVar10 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead56) + cVar26;
        pcVar44[7] = (-((byte)((bVar11 < bVar92) * bVar11 | (bVar11 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead57) + cVar27;
        pcVar44[8] = (-((byte)((bVar55 < bVar93) * bVar55 | (bVar55 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead58) + cVar28;
        pcVar44[9] = (-((byte)((bVar56 < bVar94) * bVar56 | (bVar56 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead59) + cVar29;
        pcVar44[10] = (-((byte)((bVar58 < bVar95) * bVar58 | (bVar58 >= bVar95) * bVar95) == bVar95)
                      & UNK_014ead5a) + cVar30;
        pcVar44[0xb] = (-((byte)((bVar60 < bVar96) * bVar60 | (bVar60 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead5b) + cVar31;
        pcVar44[0xc] = (-((byte)((bVar62 < bVar97) * bVar62 | (bVar62 >= bVar97) * bVar97) == bVar97
                         ) & UNK_014ead5c) + cVar32;
        pcVar44[0xd] = (-((byte)((bVar64 < bVar98) * bVar64 | (bVar64 >= bVar98) * bVar98) == bVar98
                         ) & UNK_014ead5d) + cVar33;
        pcVar44[0xe] = (-((byte)((bVar66 < bVar99) * bVar66 | (bVar66 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead5e) + cVar34;
        pcVar44[0xf] = (-((byte)((bVar68 < bVar100) * bVar68 | (bVar68 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5f) + cVar35;
        uVar40 = uVar40 + 0x20;
      } while (uVar48 != uVar40);
      if (uVar49 != uVar48) {
        if ((uVar49 & 0x18) == 0) {
          pcVar44 = pcVar43 + uVar48;
          goto LAB_0cbdb79c;
        }
        goto LAB_0cbdb735;
      }
    }
    uVar48 = (ulong)((byte)uStack_110 >> 1);
  }
  if ((uStack_110 & 1) != 0) {
    uVar48 = uStack_108;
    pcVar51 = pcStack_100;
  }
  pcVar43 = pcVar51 + uVar48;
  uVar49 = uVar48;
  pcVar44 = pcVar51;
  while (((pcVar45 = pcVar43, 0 < (long)uVar49 &&
          (pcVar44 = (char *)memchr(pcVar44,0x3a,uVar49), pcVar44 != (char *)0x0)) &&
         (pcVar45 = pcVar44, *pcVar44 != ':'))) {
    pcVar44 = pcVar44 + 1;
    uVar49 = (long)pcVar43 - (long)pcVar44;
  }
  uVar49 = (long)pcVar45 - (long)pcVar51;
  if (uVar48 < (ulong)((long)pcVar45 - (long)pcVar51)) {
    uVar49 = uVar48;
  }
  if (pcVar45 == pcVar43) {
    uVar49 = uVar48;
  }
  if (0xfffffffffffffff7 < uVar49) {
LAB_0cbdbbf9:
    uVar46 = func_0x04882e30();
    do {
      while( true ) {
        if ((auStack_c8[8] & 1) != 0) {
          func_0x0412a280(auStack_b8._8_8_,auStack_c8._8_8_ & 0xfffffffffffffffe);
        }
        func_0x0eee2d70(uVar46);
        func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
        if ((uStack_60 & 1) == 0) break;
        func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
      }
    } while( true );
  }
  if (uVar49 < 0x17) {
    uStack_f8 = (undefined8 *)CONCAT71(uStack_f8._1_7_,(byte)uVar49 * '\x02');
    lVar42 = (long)&uStack_f8 + 1;
    if (uVar49 != 0) goto LAB_0cbdb8a0;
  }
  else {
    uVar48 = 0x1a;
    if ((uVar49 | 7) != 0x17) {
      uVar48 = (uVar49 | 7) + 1;
    }
    lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (lVar42 == 0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_e8 = (undefined4)lVar42;
    uStack_e4 = (undefined4)((ulong)lVar42 >> 0x20);
    uStack_f8 = (undefined8 *)(uVar48 | 1);
    bStack_ef = (byte)(uVar49 >> 8);
    uStack_ee = (undefined2)(uVar49 >> 0x10);
    uStack_ec = (undefined4)(uVar49 >> 0x20);
    bStack_f0 = (byte)uVar49;
LAB_0cbdb8a0:
    func_0x0eee2ee0(lVar42,pcVar51,uVar49);
  }
  *(undefined1 *)(lVar42 + uVar49) = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_f8,&uStack_f8);
  if (((ulong)uStack_f8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_e4,uStack_e8),(ulong)uStack_f8 & 0xfffffffffffffffe);
  }
  uStack_f8 = (undefined8 *)0x0;
  if ((uStack_110 & 1) == 0) {
    uStack_e0 = SUB84(pcStack_100,0);
    uStack_dc = (undefined4)((ulong)pcStack_100 >> 0x20);
    bStack_f0 = (byte)uStack_110;
    bStack_ef = (byte)(uStack_110 >> 8);
    uStack_ee = (undefined2)(uStack_110 >> 0x10);
    uStack_ec = (undefined4)(uStack_110 >> 0x20);
    uStack_e8 = (undefined4)uStack_108;
    uStack_e4 = (undefined4)(uStack_108 >> 0x20);
  }
  else {
    func_0x0412e5e0(&bStack_f0,pcStack_100,uStack_108);
  }
  uStack_d8 = 0;
  if ((bStack_f0 & 1) == 0) {
    if (bStack_f0 >> 1 != 0) goto LAB_0cbdb950;
  }
  else if (CONCAT44(uStack_e4,uStack_e8) != 0) {
LAB_0cbdb950:
    if ((bStack_f0 & 1) == 0) {
      pbVar53 = &bStack_ef;
    }
    else {
      pbVar53 = (byte *)CONCAT44(uStack_dc,uStack_e0);
    }
    if ((pbVar53 != (byte *)0x0) && (*pbVar53 != 0)) {
      puVar52 = (undefined8 *)0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar53);
      if (uVar49 != 0) {
        uVar48 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            puVar52 = (undefined8 *)
                      (((((((((long)puVar52 * 0x100000001b3 ^ (ulong)*pbVar53) * 0x100000001b3 ^
                            (ulong)pbVar53[1]) * 0x100000001b3 ^ (ulong)pbVar53[2]) * 0x100000001b3
                          ^ (ulong)pbVar53[3]) * 0x100000001b3 ^ (ulong)pbVar53[4]) * 0x100000001b3
                        ^ (ulong)pbVar53[5]) * 0x100000001b3 ^ (ulong)pbVar53[6]) * 0x100000001b3 ^
                      (ulong)pbVar53[7]);
            pbVar53 = pbVar53 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar48 != 0) {
          uVar49 = 0;
          do {
            puVar52 = (undefined8 *)((long)puVar52 * 0x100000001b3 ^ (ulong)pbVar53[uVar49]);
            uVar49 = uVar49 + 1;
          } while (uVar48 != uVar49);
        }
      }
      goto LAB_0cbdba49;
    }
  }
  puVar52 = (undefined8 *)0x0;
LAB_0cbdba49:
  uStack_f8 = puVar52;
  puStack_98 = &uStack_f8;
  lVar42 = func_0x05cf8b10(param_1,&uStack_f8,&UNK_01563a4f,&puStack_98,&uStack_111);
  plVar1 = *(long **)(lVar42 + 0x48);
  *(long *)(lVar42 + 0x48) = lVar41;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = uStack_f8;
  lVar42 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar42 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar42 + 0x28),*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffe);
  }
  *(ulong *)(lVar42 + 0x28) = CONCAT44(uStack_dc,uStack_e0);
  *(ulong *)(lVar42 + 0x18) = CONCAT44(uStack_ec,CONCAT22(uStack_ee,CONCAT11(bStack_ef,bStack_f0)));
  *(ulong *)(lVar42 + 0x20) = CONCAT44(uStack_e4,uStack_e8);
  bStack_f0 = 0;
  bStack_ef = 0;
  *(undefined8 **)(lVar42 + 0x10) = uStack_f8;
  *(undefined8 *)(lVar42 + 0x30) = 0;
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(pcStack_100,uStack_110 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(lVar41,0xf6fd010,_DAT_0f6fd020);
  func_0x0c6cd240(lVar41,0xf6fd068,_DAT_0f6fd078);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  if ((auStack_c8[8] & 1) != 0) {
    func_0x0412a280(auStack_b8._8_8_,auStack_c8._8_8_ & 0xfffffffffffffffe);
  }
  return lVar41;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
