/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe41e0 (ELF vaddr 0xcae41e0)
 * Label: caller-of-callee
 * Body:  [[0cbe41e0, 0cbe4d75] [0cbe4d7d, 0cbe4d8f] [0cbe4e65, 0cbe4ecb]]
 * Ghidra: FUN_0cbe41e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cbe41e0(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte *pbVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulong *puVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  byte *pbVar52;
  ulong uVar53;
  long lVar54;
  undefined8 uVar55;
  byte bVar56;
  ulong uVar57;
  byte *pbVar58;
  ulong uVar59;
  undefined8 *puVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  bool bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
  byte bVar74;
  byte bVar76;
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
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  
  uStack_f0 = CONCAT44(uStack_f0._4_4_,param_4);
  puVar47 = (ulong *)func_0x0cbe4ed0(param_2,&UNK_011ff86c,10);
  bVar4 = (byte)*puVar47;
  uVar53 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar53 = puVar47[1];
  }
  if (uVar53 == 0) {
    auStack_a8 = (undefined1  [16])0x0;
    auStack_b8 = (undefined1  [16])0x0;
    uStack_98 = 0;
    if ((DAT_0f7784d8 & 1) == 0) {
      auVar45._1_7_ = uRam000000000f7784d9;
      auVar45[0] = DAT_0f7784d8;
      auVar45._8_8_ = 0;
      auStack_b8 = auVar45 << 0x40;
      auStack_a8._8_8_ = _DAT_0f7784e8;
      auStack_a8._0_8_ = _DAT_0f7784e0;
      uVar53 = _DAT_0f7784d0;
    }
    else {
      func_0x04885070(auStack_b8 + 8,_DAT_0f7784e8,_DAT_0f7784e0);
      uVar53 = _DAT_0f7784d0;
    }
  }
  else {
    auVar44._8_8_ = 0;
    auVar44._0_8_ = auStack_b8._8_8_;
    auStack_b8 = auVar44 << 0x40;
    if ((bVar4 & 1) == 0) {
      uVar48 = *puVar47;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar48;
      auStack_b8 = auVar46 << 0x40;
      auStack_a8 = *(undefined1 (*) [16])(puVar47 + 1);
      uStack_98 = 0;
      uVar53 = uVar48 & 0xff;
      if ((uVar48 & 1) == 0) goto LAB_0cbe426d;
LAB_0cbe42e4:
      uVar48 = auStack_a8._0_8_;
    }
    else {
      func_0x0412e5e0(auStack_b8 + 8,puVar47[2]);
      uStack_98 = 0;
      uVar53 = (ulong)auStack_b8[8];
      if ((auStack_b8[8] & 1) != 0) goto LAB_0cbe42e4;
LAB_0cbe426d:
      uVar48 = uVar53 >> 1;
    }
    if (uVar48 != 0) {
      uStack_98 = 0;
      if ((uVar53 & 1) == 0) {
        pbVar63 = auStack_b8 + 9;
      }
      else {
        pbVar63 = (byte *)auStack_a8._8_8_;
      }
      if ((pbVar63 != (byte *)0x0) && (*pbVar63 != 0)) {
        uVar53 = 0xcbf29ce484222325;
        uVar48 = func_0x0eee2e90(pbVar63);
        if (uVar48 != 0) {
          uVar49 = (ulong)((uint)uVar48 & 7);
          if (7 < uVar48) {
            uVar48 = uVar48 & 0xfffffffffffffff8;
            do {
              uVar53 = (((((((uVar53 * 0x100000001b3 ^ (ulong)*pbVar63) * 0x100000001b3 ^
                            (ulong)pbVar63[1]) * 0x100000001b3 ^ (ulong)pbVar63[2]) * 0x100000001b3
                          ^ (ulong)pbVar63[3]) * 0x100000001b3 ^ (ulong)pbVar63[4]) * 0x100000001b3
                        ^ (ulong)pbVar63[5]) * 0x100000001b3 ^ (ulong)pbVar63[6]) * 0x100000001b3 ^
                       (ulong)pbVar63[7];
              pbVar63 = pbVar63 + 8;
              uVar48 = uVar48 - 8;
            } while (uVar48 != 0);
          }
          if (uVar49 != 0) {
            uVar48 = 0;
            do {
              uVar53 = uVar53 * 0x100000001b3 ^ (ulong)pbVar63[uVar48];
              uVar48 = uVar48 + 1;
            } while (uVar49 != uVar48);
          }
        }
        goto LAB_0cbe4416;
      }
    }
    uStack_98 = 0;
    uVar53 = 0;
  }
LAB_0cbe4416:
  auStack_b8._0_8_ = uVar53;
  uStack_70 = 0;
  lStack_c0 = param_1;
  uStack_48 = param_5;
  if ((*param_3 & 1) == 0) {
    pbStack_58 = (byte *)param_3[2];
    uStack_68 = *param_3;
    uStack_60 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_68,param_3[2],param_3[1]);
  }
  uVar48 = uStack_60;
  uVar53 = uStack_68;
  uStack_50 = 0;
  uVar49 = uStack_68 >> 1 & 0x7f;
  if ((uStack_68 & 1) != 0) {
    uVar49 = uStack_60;
  }
  if (uVar49 == 0) {
LAB_0cbe45b4:
    uStack_70 = 0;
joined_r0x0cbe45c2:
    if ((uVar53 & 1) != 0) goto LAB_0cbe45c4;
LAB_0cbe4592:
    pbStack_78 = pbStack_58;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
  }
  else {
    pbVar63 = pbStack_58;
    if ((uStack_68 & 1) == 0) {
      pbVar63 = (byte *)((long)&uStack_68 + 1);
    }
    if (pbVar63 != (byte *)0x0) {
      if (*pbVar63 == 0) goto LAB_0cbe45b4;
      uVar59 = 0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar63);
      uStack_70 = uVar59;
      if (uVar49 != 0) {
        uVar57 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            uVar59 = (((((((uVar59 * 0x100000001b3 ^ (ulong)*pbVar63) * 0x100000001b3 ^
                          (ulong)pbVar63[1]) * 0x100000001b3 ^ (ulong)pbVar63[2]) * 0x100000001b3 ^
                        (ulong)pbVar63[3]) * 0x100000001b3 ^ (ulong)pbVar63[4]) * 0x100000001b3 ^
                      (ulong)pbVar63[5]) * 0x100000001b3 ^ (ulong)pbVar63[6]) * 0x100000001b3 ^
                     (ulong)pbVar63[7];
            pbVar63 = pbVar63 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        uStack_70 = uVar59;
        if (uVar57 != 0) {
          uVar49 = 0;
          do {
            uVar59 = uVar59 * 0x100000001b3 ^ (ulong)pbVar63[uVar49];
            uVar49 = uVar49 + 1;
            uStack_70 = uVar59;
          } while (uVar57 != uVar49);
        }
      }
      goto joined_r0x0cbe45c2;
    }
    uStack_70 = 0;
    if ((uStack_68 & 1) == 0) goto LAB_0cbe4592;
LAB_0cbe45c4:
    func_0x0412e5e0(&uStack_88,pbStack_58,uVar48);
  }
  lVar54 = lStack_c0;
  uStack_e8 = *(undefined8 **)(lStack_c0 + 0x148);
  uStack_e0 = *(byte **)(lStack_c0 + 0x150);
  if (*(long *)(lStack_c0 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(lStack_c0 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_e8);
  pbVar63 = uStack_e0;
  if (uStack_e0 != (byte *)0x0) {
    LOCK();
    pbVar43 = uStack_e0 + 8;
    lVar50 = *(long *)pbVar43;
    *(long *)pbVar43 = *(long *)pbVar43 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_e0 + 0x10))(uStack_e0);
      func_0x0412c2d0(pbVar63);
    }
  }
  lVar50 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d8);
  if (lVar50 == 0) {
    func_0x0eec74c0(0x3d8,0);
  }
  func_0x0d026970(lVar50,&uStack_88,uStack_f0 & 0xffffffff,(byte)puVar47[3],uStack_48,auStack_b8);
  if (*(long *)(lVar54 + 0x140) == 0) {
    uVar55 = 0;
    lVar51 = 0;
  }
  else {
    lVar51 = func_0x0412c300();
    uVar55 = 0;
    if (lVar51 != 0) {
      uVar55 = *(undefined8 *)(lVar54 + 0x138);
    }
  }
  *(undefined8 *)(lVar50 + 0x398) = uVar55;
  plVar1 = *(long **)(lVar50 + 0x3a0);
  *(long *)(lVar50 + 0x3a0) = lVar51;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar51 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar51 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar64 = (*(byte *)(lVar50 + 0xd0) & 1) != 0;
  lVar51 = lVar50 + 0xd1;
  if (bVar64) {
    lVar51 = *(long *)(lVar50 + 0xe0);
  }
  uStack_f0 = lVar50;
  pbVar63 = (byte *)(ulong)(*(byte *)(lVar50 + 0xd0) >> 1);
  if (bVar64) {
    pbVar63 = *(byte **)(lVar50 + 0xd8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar63) {
    func_0x04882e30();
    goto LAB_0cbe4d6f;
  }
  pbVar43 = (byte *)((long)&uStack_108 + 1);
  if (pbVar63 < (byte *)0x17) {
    uStack_108 = (byte *)CONCAT71(uStack_108._1_7_,(char)pbVar63 * '\x02');
    pbVar58 = pbVar43;
    if (pbVar63 != (byte *)0x0) goto LAB_0cbe4794;
  }
  else {
    uVar53 = 0x1a;
    if (((ulong)pbVar63 | 7) != 0x17) {
      uVar53 = ((ulong)pbVar63 | 7) + 1;
    }
    pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar53);
    if (pbVar58 == (byte *)0x0) {
      func_0x0eec74c0(uVar53,0);
    }
    uStack_108 = (byte *)(uVar53 | 1);
    lVar54 = lStack_c0;
    pbStack_100 = pbVar63;
    pbStack_f8 = pbVar58;
LAB_0cbe4794:
    func_0x0eee2f00(pbVar58,lVar51,pbVar63);
  }
  pbVar58[(long)pbVar63] = 0;
  pbVar61 = (byte *)(ulong)((byte)uStack_108 >> 1);
  pbVar58 = pbStack_100;
  pbVar63 = pbStack_f8;
  if (((ulong)uStack_108 & 1) == 0) {
    pbVar58 = pbVar61;
    pbVar63 = pbVar43;
  }
  if (pbVar58 != (byte *)0x0) {
    pbVar61 = pbVar63;
    if (pbVar58 < (byte *)0x8) {
LAB_0cbe490c:
      do {
        bVar4 = *pbVar61;
        bVar56 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar56 = bVar4;
        }
        *pbVar61 = bVar56;
        pbVar61 = pbVar61 + 1;
      } while (pbVar61 != pbVar63 + (long)pbVar58);
    }
    else if (pbVar58 < (byte *)0x20) {
      pbVar52 = (byte *)0x0;
LAB_0cbe48a5:
      pbVar62 = (byte *)((ulong)pbVar58 & 0xfffffffffffffff8);
      pbVar61 = pbVar63 + (long)pbVar62;
      do {
        uVar55 = *(undefined8 *)(pbVar63 + (long)pbVar52);
        bVar65 = (char)uVar55 + DAT_014e9110;
        cVar67 = (char)((ulong)uVar55 >> 8);
        bVar66 = cVar67 + DAT_014e9110._1_1_;
        cVar69 = (char)((ulong)uVar55 >> 0x10);
        bVar68 = cVar69 + DAT_014e9110._2_1_;
        cVar71 = (char)((ulong)uVar55 >> 0x18);
        bVar70 = cVar71 + DAT_014e9110._3_1_;
        cVar73 = (char)((ulong)uVar55 >> 0x20);
        bVar72 = cVar73 + DAT_014e9110._4_1_;
        cVar75 = (char)((ulong)uVar55 >> 0x28);
        bVar74 = cVar75 + DAT_014e9110._5_1_;
        cVar77 = (char)((ulong)uVar55 >> 0x30);
        cVar11 = (char)((ulong)uVar55 >> 0x38);
        bVar76 = cVar77 + DAT_014e9110._6_1_;
        bVar78 = cVar11 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar56 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar63 + (long)pbVar52) =
             CONCAT17((~-((byte)((bVar78 < bVar10) * bVar10 | (bVar78 >= bVar10) * bVar78) == bVar78
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar76 < bVar9) * bVar9 | (bVar76 >= bVar9) * bVar76) ==
                                  bVar76) & UNK_014ea366) + cVar77,
                               CONCAT15((~-((byte)((bVar74 < bVar8) * bVar8 |
                                                  (bVar74 >= bVar8) * bVar74) == bVar74) &
                                        UNK_014ea365) + cVar75,
                                        CONCAT14((~-((byte)((bVar72 < bVar7) * bVar7 |
                                                           (bVar72 >= bVar7) * bVar72) == bVar72) &
                                                 UNK_014ea364) + cVar73,
                                                 CONCAT13((~-((byte)((bVar70 < bVar6) * bVar6 |
                                                                    (bVar70 >= bVar6) * bVar70) ==
                                                             bVar70) & UNK_014ea363) + cVar71,
                                                          CONCAT12((~-((byte)((bVar68 < bVar5) *
                                                                              bVar5 | (bVar68 >=
                                                                                      bVar5) * 
                                                  bVar68) == bVar68) & UNK_014ea362) + cVar69,
                                                  CONCAT11((~-((byte)((bVar66 < bVar56) * bVar56 |
                                                                     (bVar66 >= bVar56) * bVar66) ==
                                                              bVar66) & UNK_014ea361) + cVar67,
                                                           (~-((byte)((bVar65 < bVar4) * bVar4 |
                                                                     (bVar65 >= bVar4) * bVar65) ==
                                                              bVar65) & DAT_014ea360) + (char)uVar55
                                                          )))))));
        pbVar52 = pbVar52 + 8;
      } while (pbVar62 != pbVar52);
      if (pbVar58 != pbVar62) goto LAB_0cbe490c;
    }
    else {
      pbVar52 = (byte *)((ulong)pbVar58 & 0xffffffffffffffe0);
      pbVar61 = (byte *)0x0;
      do {
        pbVar62 = pbVar63 + (long)pbVar61;
        bVar12 = pbVar62[1];
        bVar13 = pbVar62[2];
        bVar14 = pbVar62[3];
        bVar15 = pbVar62[4];
        bVar16 = pbVar62[5];
        bVar17 = pbVar62[6];
        bVar18 = pbVar62[7];
        bVar19 = pbVar62[8];
        bVar20 = pbVar62[9];
        bVar21 = pbVar62[10];
        bVar22 = pbVar62[0xb];
        bVar23 = pbVar62[0xc];
        bVar24 = pbVar62[0xd];
        bVar25 = pbVar62[0xe];
        bVar26 = pbVar62[0xf];
        pbVar3 = pbVar63 + 0x10 + (long)pbVar61;
        bVar27 = *pbVar3;
        bVar28 = pbVar3[1];
        bVar29 = pbVar3[2];
        bVar30 = pbVar3[3];
        bVar31 = pbVar3[4];
        bVar32 = pbVar3[5];
        bVar33 = pbVar3[6];
        bVar34 = pbVar3[7];
        bVar35 = pbVar3[8];
        bVar36 = pbVar3[9];
        bVar37 = pbVar3[10];
        bVar38 = pbVar3[0xb];
        bVar39 = pbVar3[0xc];
        bVar40 = pbVar3[0xd];
        bVar41 = pbVar3[0xe];
        bVar42 = pbVar3[0xf];
        bVar79 = *pbVar62 + DAT_014e86b0;
        bVar80 = bVar12 + DAT_014e86b0._1_1_;
        bVar81 = bVar13 + DAT_014e86b0._2_1_;
        bVar82 = bVar14 + DAT_014e86b0._3_1_;
        bVar83 = bVar15 + DAT_014e86b0._4_1_;
        bVar84 = bVar16 + DAT_014e86b0._5_1_;
        bVar85 = bVar17 + DAT_014e86b0._6_1_;
        bVar86 = bVar18 + DAT_014e86b0._7_1_;
        bVar87 = bVar19 + DAT_014e86b0._8_1_;
        bVar88 = bVar20 + DAT_014e86b0._9_1_;
        bVar89 = bVar21 + DAT_014e86b0._10_1_;
        bVar90 = bVar22 + DAT_014e86b0._11_1_;
        bVar91 = bVar23 + DAT_014e86b0._12_1_;
        bVar92 = bVar24 + DAT_014e86b0._13_1_;
        bVar93 = bVar25 + DAT_014e86b0._14_1_;
        bVar94 = bVar26 + DAT_014e86b0._15_1_;
        bVar95 = bVar27 + DAT_014e86b0;
        bVar96 = bVar28 + DAT_014e86b0._1_1_;
        bVar97 = bVar29 + DAT_014e86b0._2_1_;
        bVar98 = bVar30 + DAT_014e86b0._3_1_;
        bVar99 = bVar31 + DAT_014e86b0._4_1_;
        bVar100 = bVar32 + DAT_014e86b0._5_1_;
        bVar101 = bVar33 + DAT_014e86b0._6_1_;
        bVar102 = bVar34 + DAT_014e86b0._7_1_;
        bVar103 = bVar35 + DAT_014e86b0._8_1_;
        bVar104 = bVar36 + DAT_014e86b0._9_1_;
        bVar105 = bVar37 + DAT_014e86b0._10_1_;
        bVar106 = bVar38 + DAT_014e86b0._11_1_;
        bVar107 = bVar39 + DAT_014e86b0._12_1_;
        bVar108 = bVar40 + DAT_014e86b0._13_1_;
        bVar109 = bVar41 + DAT_014e86b0._14_1_;
        bVar110 = bVar42 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar56 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar65 = DAT_014e4170._8_1_;
        bVar66 = DAT_014e4170._9_1_;
        bVar68 = DAT_014e4170._10_1_;
        bVar70 = DAT_014e4170._11_1_;
        bVar72 = DAT_014e4170._12_1_;
        bVar74 = DAT_014e4170._13_1_;
        bVar76 = DAT_014e4170._14_1_;
        bVar78 = DAT_014e4170._15_1_;
        pbVar3 = pbVar63 + (long)pbVar61;
        *pbVar3 = (-((byte)((bVar4 < bVar79) * bVar4 | (bVar4 >= bVar79) * bVar79) == bVar79) &
                  DAT_014ead50) + *pbVar62;
        pbVar3[1] = (-((byte)((bVar56 < bVar80) * bVar56 | (bVar56 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead51) + bVar12;
        pbVar3[2] = (-((byte)((bVar5 < bVar81) * bVar5 | (bVar5 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead52) + bVar13;
        pbVar3[3] = (-((byte)((bVar6 < bVar82) * bVar6 | (bVar6 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead53) + bVar14;
        pbVar3[4] = (-((byte)((bVar7 < bVar83) * bVar7 | (bVar7 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead54) + bVar15;
        pbVar3[5] = (-((byte)((bVar8 < bVar84) * bVar8 | (bVar8 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead55) + bVar16;
        pbVar3[6] = (-((byte)((bVar9 < bVar85) * bVar9 | (bVar9 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead56) + bVar17;
        pbVar3[7] = (-((byte)((bVar10 < bVar86) * bVar10 | (bVar10 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead57) + bVar18;
        pbVar3[8] = (-((byte)((bVar65 < bVar87) * bVar65 | (bVar65 >= bVar87) * bVar87) == bVar87) &
                    UNK_014ead58) + bVar19;
        pbVar3[9] = (-((byte)((bVar66 < bVar88) * bVar66 | (bVar66 >= bVar88) * bVar88) == bVar88) &
                    UNK_014ead59) + bVar20;
        pbVar3[10] = (-((byte)((bVar68 < bVar89) * bVar68 | (bVar68 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead5a) + bVar21;
        pbVar3[0xb] = (-((byte)((bVar70 < bVar90) * bVar70 | (bVar70 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5b) + bVar22;
        pbVar3[0xc] = (-((byte)((bVar72 < bVar91) * bVar72 | (bVar72 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5c) + bVar23;
        pbVar3[0xd] = (-((byte)((bVar74 < bVar92) * bVar74 | (bVar74 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5d) + bVar24;
        pbVar3[0xe] = (-((byte)((bVar76 < bVar93) * bVar76 | (bVar76 >= bVar93) * bVar93) == bVar93)
                      & UNK_014ead5e) + bVar25;
        pbVar3[0xf] = (-((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5f) + bVar26;
        pbVar62 = pbVar63 + 0x10 + (long)pbVar61;
        *pbVar62 = (-((byte)((bVar4 < bVar95) * bVar4 | (bVar4 >= bVar95) * bVar95) == bVar95) &
                   DAT_014ead50) + bVar27;
        pbVar62[1] = (-((byte)((bVar56 < bVar96) * bVar56 | (bVar56 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead51) + bVar28;
        pbVar62[2] = (-((byte)((bVar5 < bVar97) * bVar5 | (bVar5 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead52) + bVar29;
        pbVar62[3] = (-((byte)((bVar6 < bVar98) * bVar6 | (bVar6 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead53) + bVar30;
        pbVar62[4] = (-((byte)((bVar7 < bVar99) * bVar7 | (bVar7 >= bVar99) * bVar99) == bVar99) &
                     UNK_014ead54) + bVar31;
        pbVar62[5] = (-((byte)((bVar8 < bVar100) * bVar8 | (bVar8 >= bVar100) * bVar100) == bVar100)
                     & UNK_014ead55) + bVar32;
        pbVar62[6] = (-((byte)((bVar9 < bVar101) * bVar9 | (bVar9 >= bVar101) * bVar101) == bVar101)
                     & UNK_014ead56) + bVar33;
        pbVar62[7] = (-((byte)((bVar10 < bVar102) * bVar10 | (bVar10 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead57) + bVar34;
        pbVar62[8] = (-((byte)((bVar65 < bVar103) * bVar65 | (bVar65 >= bVar103) * bVar103) ==
                       bVar103) & UNK_014ead58) + bVar35;
        pbVar62[9] = (-((byte)((bVar66 < bVar104) * bVar66 | (bVar66 >= bVar104) * bVar104) ==
                       bVar104) & UNK_014ead59) + bVar36;
        pbVar62[10] = (-((byte)((bVar68 < bVar105) * bVar68 | (bVar68 >= bVar105) * bVar105) ==
                        bVar105) & UNK_014ead5a) + bVar37;
        pbVar62[0xb] = (-((byte)((bVar70 < bVar106) * bVar70 | (bVar70 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5b) + bVar38;
        pbVar62[0xc] = (-((byte)((bVar72 < bVar107) * bVar72 | (bVar72 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5c) + bVar39;
        pbVar62[0xd] = (-((byte)((bVar74 < bVar108) * bVar74 | (bVar74 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5d) + bVar40;
        pbVar62[0xe] = (-((byte)((bVar76 < bVar109) * bVar76 | (bVar76 >= bVar109) * bVar109) ==
                         bVar109) & UNK_014ead5e) + bVar41;
        pbVar62[0xf] = (-((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) ==
                         bVar110) & UNK_014ead5f) + bVar42;
        pbVar61 = pbVar61 + 0x20;
      } while (pbVar52 != pbVar61);
      if (pbVar58 != pbVar52) {
        if (((ulong)pbVar58 & 0x18) == 0) {
          pbVar61 = pbVar52 + (long)pbVar63;
          goto LAB_0cbe490c;
        }
        goto LAB_0cbe48a5;
      }
    }
    pbVar61 = (byte *)(ulong)((byte)uStack_108 >> 1);
  }
  if (((ulong)uStack_108 & 1) != 0) {
    pbVar61 = pbStack_100;
    pbVar43 = pbStack_f8;
  }
  pbVar63 = pbVar43 + (long)pbVar61;
  pbVar58 = pbVar61;
  pbVar52 = pbVar43;
  while (((pbVar62 = pbVar63, 0 < (long)pbVar58 &&
          (pbVar52 = (byte *)func_0x0eee2ef0(pbVar52,0x3a,pbVar58), pbVar52 != (byte *)0x0)) &&
         (pbVar62 = pbVar52, *pbVar52 != 0x3a))) {
    pbVar52 = pbVar52 + 1;
    pbVar58 = pbVar63 + -(long)pbVar52;
  }
  pbVar58 = pbVar62 + -(long)pbVar43;
  if (pbVar61 < pbVar62 + -(long)pbVar43) {
    pbVar58 = pbVar61;
  }
  if (pbVar62 == pbVar63) {
    pbVar58 = pbVar61;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar58) {
LAB_0cbe4d6f:
    uVar55 = func_0x04882e30();
    do {
      while( true ) {
        if ((auStack_b8[8] & 1) != 0) {
          func_0x0412a280(auStack_a8._8_8_,auStack_b8._8_8_ & 0xfffffffffffffffe);
        }
        func_0x0eee2d70(uVar55);
        func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
        if ((uStack_68 & 1) == 0) break;
        func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
      }
    } while( true );
  }
  if (pbVar58 < (byte *)0x17) {
    uStack_e8 = (undefined8 *)CONCAT71(uStack_e8._1_7_,(char)pbVar58 * '\x02');
    pbVar63 = (byte *)((long)&uStack_e8 + 1);
    if (pbVar58 != (byte *)0x0) goto LAB_0cbe4a15;
  }
  else {
    uVar53 = 0x1a;
    if (((ulong)pbVar58 | 7) != 0x17) {
      uVar53 = ((ulong)pbVar58 | 7) + 1;
    }
    pbVar63 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar53);
    if (pbVar63 == (byte *)0x0) {
      func_0x0eec74c0(uVar53,0);
    }
    uStack_e8 = (undefined8 *)(uVar53 | 1);
    lVar54 = lStack_c0;
    uStack_e0 = pbVar58;
    pbStack_d8 = pbVar63;
LAB_0cbe4a15:
    memmove(pbVar63,pbVar43,pbVar58);
  }
  pbVar63[(long)pbVar58] = 0;
  func_0x05cf8990(lVar54 + 0xe0,&uStack_e8,&uStack_e8);
  if (((ulong)uStack_e8 & 1) != 0) {
    func_0x0412a280(pbStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  uStack_e8 = (undefined8 *)0x0;
  if (((ulong)uStack_108 & 1) == 0) {
    pbStack_d0 = pbStack_f8;
    uStack_e0 = uStack_108;
    pbStack_d8 = pbStack_100;
  }
  else {
    func_0x0412e5e0(&uStack_e0,pbStack_f8,pbStack_100);
  }
  uStack_c8 = 0;
  if (((ulong)uStack_e0 & 1) == 0) {
    if ((byte)uStack_e0 >> 1 != 0) goto LAB_0cbe4ac5;
  }
  else if (pbStack_d8 != (byte *)0x0) {
LAB_0cbe4ac5:
    pbVar63 = pbStack_d0;
    if (((ulong)uStack_e0 & 1) == 0) {
      pbVar63 = (byte *)((long)&uStack_e0 + 1);
    }
    if ((pbVar63 != (byte *)0x0) && (*pbVar63 != 0)) {
      puVar60 = (undefined8 *)0xcbf29ce484222325;
      uVar53 = func_0x0eee2e90(pbVar63);
      if (uVar53 != 0) {
        uVar48 = (ulong)((uint)uVar53 & 7);
        if (7 < uVar53) {
          uVar53 = uVar53 & 0xfffffffffffffff8;
          do {
            puVar60 = (undefined8 *)
                      (((((((((long)puVar60 * 0x100000001b3 ^ (ulong)*pbVar63) * 0x100000001b3 ^
                            (ulong)pbVar63[1]) * 0x100000001b3 ^ (ulong)pbVar63[2]) * 0x100000001b3
                          ^ (ulong)pbVar63[3]) * 0x100000001b3 ^ (ulong)pbVar63[4]) * 0x100000001b3
                        ^ (ulong)pbVar63[5]) * 0x100000001b3 ^ (ulong)pbVar63[6]) * 0x100000001b3 ^
                      (ulong)pbVar63[7]);
            pbVar63 = pbVar63 + 8;
            uVar53 = uVar53 - 8;
          } while (uVar53 != 0);
        }
        if (uVar48 != 0) {
          uVar53 = 0;
          do {
            puVar60 = (undefined8 *)((long)puVar60 * 0x100000001b3 ^ (ulong)pbVar63[uVar53]);
            uVar53 = uVar53 + 1;
          } while (uVar48 != uVar53);
        }
      }
      goto LAB_0cbe4bc9;
    }
  }
  puVar60 = (undefined8 *)0x0;
LAB_0cbe4bc9:
  uStack_e8 = puVar60;
  puStack_90 = &uStack_e8;
  lVar50 = FUN_05cf8b10(lVar54,&uStack_e8,&UNK_01563a4f,&puStack_90,&uStack_109);
  uVar53 = uStack_f0;
  plVar1 = *(long **)(lVar50 + 0x48);
  *(ulong *)(lVar50 + 0x48) = uStack_f0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_90 = uStack_e8;
  lVar54 = FUN_05cf8dc0(lVar54 + 0xf8,&puStack_90);
  if ((*(byte *)(lVar54 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar54 + 0x28),*(ulong *)(lVar54 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar54 + 0x28) = pbStack_d0;
  *(byte **)(lVar54 + 0x18) = uStack_e0;
  *(byte **)(lVar54 + 0x20) = pbStack_d8;
  uStack_e0 = (byte *)((ulong)uStack_e0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar54 + 0x10) = uStack_e8;
  *(undefined8 *)(lVar54 + 0x30) = 0;
  if (((ulong)uStack_108 & 1) != 0) {
    func_0x0412a280(pbStack_f8,(ulong)uStack_108 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  uStack_e8 = (undefined8 *)&UNK_0f3f5218;
  uStack_e0 = (byte *)CONCAT62(uStack_e0._2_6_,0x100);
  func_0x0cb9f7a0(&uStack_e8,uVar53);
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  if ((auStack_b8[8] & 1) != 0) {
    func_0x0412a280(auStack_a8._8_8_,auStack_b8._8_8_ & 0xfffffffffffffffe);
  }
  return uVar53;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
