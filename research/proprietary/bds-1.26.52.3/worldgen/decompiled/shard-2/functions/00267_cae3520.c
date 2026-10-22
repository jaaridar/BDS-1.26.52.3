/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe3520 (ELF vaddr 0xcae3520)
 * Label: caller-of-callee
 * Body:  [[0cbe3520, 0cbe400b] [0cbe406b, 0cbe408e] [0cbe4092, 0cbe40c3] [0cbe40dd, 0cbe4108]]
 * Ghidra: FUN_0cbe3520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe3520(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
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
  byte bVar43;
  undefined4 uVar44;
  long lVar45;
  ulong *puVar46;
  long lVar47;
  ulong uVar48;
  long *plVar49;
  long lVar50;
  byte *pbVar51;
  ulong uVar52;
  undefined8 uVar53;
  byte bVar54;
  ulong uVar55;
  byte *pbVar56;
  ulong uVar57;
  byte *pbVar58;
  byte *pbVar59;
  byte *pbVar60;
  byte *pbVar61;
  ulong uVar62;
  undefined1 *puVar63;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  
  puVar46 = (ulong *)func_0x0cbe4110(param_2,&UNK_01423b89,0xb);
  uStack_e8 = (undefined1 *)0x0;
  if ((*puVar46 & 1) == 0) {
    pbStack_d0 = (byte *)puVar46[2];
    uStack_e0 = (byte *)*puVar46;
    pbStack_d8 = (byte *)puVar46[1];
    uStack_c8 = 0;
    uVar52 = (ulong)uStack_e0 & 0xff;
    if (((ulong)uStack_e0 & 1) == 0) goto LAB_0cbe3585;
LAB_0cbe35b2:
    if (pbStack_d8 != (byte *)0x0) goto LAB_0cbe35c0;
LAB_0cbe36b6:
    uStack_c8 = 0;
    uVar57 = 0;
  }
  else {
    func_0x0412e5e0(&uStack_e0,puVar46[2],puVar46[1]);
    uStack_c8 = 0;
    uVar52 = (ulong)uStack_e0 & 0xff;
    if (((ulong)uStack_e0 & 1) != 0) goto LAB_0cbe35b2;
LAB_0cbe3585:
    if (uVar52 >> 1 == 0) goto LAB_0cbe36b6;
LAB_0cbe35c0:
    uStack_c8 = 0;
    if ((uVar52 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_e0 + 1);
      if (pbVar58 != (byte *)0x0) goto LAB_0cbe35e1;
      goto LAB_0cbe36b6;
    }
    pbVar58 = pbStack_d0;
    if (pbStack_d0 == (byte *)0x0) goto LAB_0cbe36b6;
LAB_0cbe35e1:
    if (*pbVar58 == 0) goto LAB_0cbe36b6;
    uVar57 = 0xcbf29ce484222325;
    uVar52 = func_0x0eee2e90(pbVar58);
    if (uVar52 != 0) {
      uVar48 = (ulong)((uint)uVar52 & 7);
      if (7 < uVar52) {
        uVar52 = uVar52 & 0xfffffffffffffff8;
        do {
          uVar57 = (((((((uVar57 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                        (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3 ^
                      (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3 ^
                    (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                   (ulong)pbVar58[7];
          pbVar58 = pbVar58 + 8;
          uVar52 = uVar52 - 8;
        } while (uVar52 != 0);
      }
      if (uVar48 != 0) {
        uVar52 = 0;
        do {
          uVar57 = uVar57 * 0x100000001b3 ^ (ulong)pbVar58[uVar52];
          uVar52 = uVar52 + 1;
        } while (uVar48 != uVar52);
      }
    }
  }
  uStack_e8 = (undefined1 *)uVar57;
  lVar47 = FUN_0cc422f0(param_1,&uStack_e8,0,0,0);
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  if (lVar47 == 0) {
    return (long *)0x0;
  }
  uStack_70 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_58 = (byte *)param_3[2];
    uStack_68 = *param_3;
    uStack_60 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_68,param_3[2],param_3[1]);
  }
  uVar57 = uStack_60;
  uVar52 = uStack_68;
  uStack_50 = 0;
  uVar48 = uStack_68 >> 1 & 0x7f;
  if ((uStack_68 & 1) != 0) {
    uVar48 = uStack_60;
  }
  lStack_48 = param_1;
  uStack_94 = param_4;
  if (uVar48 == 0) {
LAB_0cbe3782:
    uStack_70 = 0;
joined_r0x0cbe378e:
    if ((uVar52 & 1) == 0) goto LAB_0cbe38a7;
LAB_0cbe3794:
    func_0x0412e5e0(&uStack_88,pbStack_58,uVar57);
  }
  else {
    pbVar58 = pbStack_58;
    if ((uStack_68 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_68 + 1);
    }
    if (pbVar58 == (byte *)0x0) goto LAB_0cbe3782;
    if (*pbVar58 == 0) {
      uStack_70 = 0;
      goto joined_r0x0cbe378e;
    }
    uVar62 = 0xcbf29ce484222325;
    uVar48 = func_0x0eee2e90(pbVar58);
    if (uVar48 != 0) {
      uVar55 = (ulong)((uint)uVar48 & 7);
      if (7 < uVar48) {
        uVar48 = uVar48 & 0xfffffffffffffff8;
        do {
          uVar62 = (((((((uVar62 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                        (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3 ^
                      (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3 ^
                    (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                   (ulong)pbVar58[7];
          pbVar58 = pbVar58 + 8;
          uVar48 = uVar48 - 8;
        } while (uVar48 != 0);
      }
      uStack_70 = uVar62;
      if (uVar55 != 0) {
        uVar48 = 0;
        do {
          uVar62 = uVar62 * 0x100000001b3 ^ (ulong)pbVar58[uVar48];
          uVar48 = uVar48 + 1;
          uStack_70 = uVar62;
        } while (uVar55 != uVar48);
      }
      goto joined_r0x0cbe378e;
    }
    uStack_70 = 0xcbf29ce484222325;
    if ((uVar52 & 1) != 0) goto LAB_0cbe3794;
LAB_0cbe38a7:
    pbStack_78 = pbStack_58;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
  }
  lVar45 = lStack_48;
  uVar44 = uStack_94;
  uStack_e8 = *(undefined1 **)(lStack_48 + 0x148);
  uStack_e0 = *(byte **)(lStack_48 + 0x150);
  if (*(long *)(lStack_48 + 0x150) != 0) {
    LOCK();
    plVar49 = (long *)(*(long *)(lStack_48 + 0x150) + 8);
    *plVar49 = *plVar49 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_e8);
  pbVar58 = uStack_e0;
  if (uStack_e0 != (byte *)0x0) {
    LOCK();
    pbVar56 = uStack_e0 + 8;
    lVar50 = *(long *)pbVar56;
    *(long *)pbVar56 = *(long *)pbVar56 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_e0 + 0x10))(uStack_e0);
      FUN_0412c2d0(pbVar58);
    }
  }
  plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b8);
  if (plVar49 == (long *)0x0) {
    func_0x0eec74c0(0x3b8,0);
  }
  func_0x0d005bb0(plVar49,&uStack_88,uVar44,lVar47,1,1);
  if (*(long *)(lVar45 + 0x140) == 0) {
    lVar47 = 0;
    lVar50 = 0;
  }
  else {
    lVar50 = func_0x0412c300();
    lVar47 = 0;
    if (lVar50 != 0) {
      lVar47 = *(long *)(lVar45 + 0x138);
    }
  }
  plVar49[0x73] = lVar47;
  plVar4 = (long *)plVar49[0x74];
  plVar49[0x74] = lVar50;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar47 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0412c2d0(plVar4);
    }
  }
  bVar64 = (*(byte *)(plVar49 + 0x1a) & 1) != 0;
  lVar47 = (long)plVar49 + 0xd1;
  if (bVar64) {
    lVar47 = plVar49[0x1c];
  }
  pbVar58 = (byte *)(ulong)(*(byte *)(plVar49 + 0x1a) >> 1);
  if (bVar64) {
    pbVar58 = (byte *)plVar49[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar58) {
    FUN_04882e30();
    goto LAB_0cbe4005;
  }
  pbVar56 = (byte *)((long)&uStack_b0 + 1);
  if (pbVar58 < (byte *)0x17) {
    uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,(char)pbVar58 * '\x02');
    if (pbVar58 != (byte *)0x0) goto LAB_0cbe3a63;
  }
  else {
    uVar52 = 0x1a;
    if (((ulong)pbVar58 | 7) != 0x17) {
      uVar52 = ((ulong)pbVar58 | 7) + 1;
    }
    pbVar56 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar52);
    if (pbVar56 == (byte *)0x0) {
      func_0x0eec74c0(uVar52,0);
    }
    uStack_b0 = (byte *)(uVar52 | 1);
    pbStack_a8 = pbVar58;
    pbStack_a0 = pbVar56;
LAB_0cbe3a63:
    func_0x0eee2f00(pbVar56,lVar47,pbVar58);
  }
  pbVar59 = (byte *)((long)&uStack_b0 + 1);
  pbVar56[(long)pbVar58] = 0;
  pbVar60 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  pbVar56 = pbStack_a8;
  pbVar58 = pbStack_a0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbVar56 = pbVar60;
    pbVar58 = pbVar59;
  }
  if (pbVar56 != (byte *)0x0) {
    pbVar60 = pbVar58;
    if (pbVar56 < (byte *)0x8) {
LAB_0cbe3bd3:
      do {
        bVar3 = *pbVar60;
        bVar54 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar54 = bVar3;
        }
        *pbVar60 = bVar54;
        pbVar60 = pbVar60 + 1;
      } while (pbVar60 != pbVar58 + (long)pbVar56);
    }
    else if (pbVar56 < (byte *)0x20) {
      pbVar51 = (byte *)0x0;
LAB_0cbe3b55:
      pbVar61 = (byte *)((ulong)pbVar56 & 0xfffffffffffffff8);
      pbVar60 = pbVar58 + (long)pbVar61;
      do {
        uVar53 = *(undefined8 *)(pbVar58 + (long)pbVar51);
        bVar65 = (char)uVar53 + DAT_014e9110;
        cVar67 = (char)((ulong)uVar53 >> 8);
        bVar66 = cVar67 + DAT_014e9110._1_1_;
        cVar69 = (char)((ulong)uVar53 >> 0x10);
        bVar68 = cVar69 + DAT_014e9110._2_1_;
        cVar71 = (char)((ulong)uVar53 >> 0x18);
        bVar70 = cVar71 + DAT_014e9110._3_1_;
        cVar73 = (char)((ulong)uVar53 >> 0x20);
        bVar72 = cVar73 + DAT_014e9110._4_1_;
        cVar75 = (char)((ulong)uVar53 >> 0x28);
        bVar74 = cVar75 + DAT_014e9110._5_1_;
        cVar77 = (char)((ulong)uVar53 >> 0x30);
        cVar12 = (char)((ulong)uVar53 >> 0x38);
        bVar76 = cVar77 + DAT_014e9110._6_1_;
        bVar78 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar54 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar58 + (long)pbVar51) =
             CONCAT17((~-((byte)((bVar78 < bVar11) * bVar11 | (bVar78 >= bVar11) * bVar78) == bVar78
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar76 < bVar10) * bVar10 | (bVar76 >= bVar10) * bVar76)
                                  == bVar76) & UNK_014ea366) + cVar77,
                               CONCAT15((~-((byte)((bVar74 < bVar9) * bVar9 |
                                                  (bVar74 >= bVar9) * bVar74) == bVar74) &
                                        UNK_014ea365) + cVar75,
                                        CONCAT14((~-((byte)((bVar72 < bVar8) * bVar8 |
                                                           (bVar72 >= bVar8) * bVar72) == bVar72) &
                                                 UNK_014ea364) + cVar73,
                                                 CONCAT13((~-((byte)((bVar70 < bVar7) * bVar7 |
                                                                    (bVar70 >= bVar7) * bVar70) ==
                                                             bVar70) & UNK_014ea363) + cVar71,
                                                          CONCAT12((~-((byte)((bVar68 < bVar6) *
                                                                              bVar6 | (bVar68 >=
                                                                                      bVar6) * 
                                                  bVar68) == bVar68) & UNK_014ea362) + cVar69,
                                                  CONCAT11((~-((byte)((bVar66 < bVar54) * bVar54 |
                                                                     (bVar66 >= bVar54) * bVar66) ==
                                                              bVar66) & UNK_014ea361) + cVar67,
                                                           (~-((byte)((bVar65 < bVar3) * bVar3 |
                                                                     (bVar65 >= bVar3) * bVar65) ==
                                                              bVar65) & DAT_014ea360) + (char)uVar53
                                                          )))))));
        pbVar51 = pbVar51 + 8;
      } while (pbVar61 != pbVar51);
      if (pbVar56 != pbVar61) goto LAB_0cbe3bd3;
    }
    else {
      pbVar51 = (byte *)((ulong)pbVar56 & 0xffffffffffffffe0);
      pbVar60 = (byte *)0x0;
      do {
        pbVar61 = pbVar58 + (long)pbVar60;
        bVar13 = pbVar61[1];
        bVar14 = pbVar61[2];
        bVar15 = pbVar61[3];
        bVar16 = pbVar61[4];
        bVar17 = pbVar61[5];
        bVar18 = pbVar61[6];
        bVar19 = pbVar61[7];
        bVar20 = pbVar61[8];
        bVar21 = pbVar61[9];
        bVar22 = pbVar61[10];
        bVar23 = pbVar61[0xb];
        bVar24 = pbVar61[0xc];
        bVar25 = pbVar61[0xd];
        bVar26 = pbVar61[0xe];
        bVar27 = pbVar61[0xf];
        pbVar2 = pbVar58 + 0x10 + (long)pbVar60;
        bVar28 = *pbVar2;
        bVar29 = pbVar2[1];
        bVar30 = pbVar2[2];
        bVar31 = pbVar2[3];
        bVar32 = pbVar2[4];
        bVar33 = pbVar2[5];
        bVar34 = pbVar2[6];
        bVar35 = pbVar2[7];
        bVar36 = pbVar2[8];
        bVar37 = pbVar2[9];
        bVar38 = pbVar2[10];
        bVar39 = pbVar2[0xb];
        bVar40 = pbVar2[0xc];
        bVar41 = pbVar2[0xd];
        bVar42 = pbVar2[0xe];
        bVar43 = pbVar2[0xf];
        bVar79 = *pbVar61 + DAT_014e86b0;
        bVar80 = bVar13 + DAT_014e86b0._1_1_;
        bVar81 = bVar14 + DAT_014e86b0._2_1_;
        bVar82 = bVar15 + DAT_014e86b0._3_1_;
        bVar83 = bVar16 + DAT_014e86b0._4_1_;
        bVar84 = bVar17 + DAT_014e86b0._5_1_;
        bVar85 = bVar18 + DAT_014e86b0._6_1_;
        bVar86 = bVar19 + DAT_014e86b0._7_1_;
        bVar87 = bVar20 + DAT_014e86b0._8_1_;
        bVar88 = bVar21 + DAT_014e86b0._9_1_;
        bVar89 = bVar22 + DAT_014e86b0._10_1_;
        bVar90 = bVar23 + DAT_014e86b0._11_1_;
        bVar91 = bVar24 + DAT_014e86b0._12_1_;
        bVar92 = bVar25 + DAT_014e86b0._13_1_;
        bVar93 = bVar26 + DAT_014e86b0._14_1_;
        bVar94 = bVar27 + DAT_014e86b0._15_1_;
        bVar95 = bVar28 + DAT_014e86b0;
        bVar96 = bVar29 + DAT_014e86b0._1_1_;
        bVar97 = bVar30 + DAT_014e86b0._2_1_;
        bVar98 = bVar31 + DAT_014e86b0._3_1_;
        bVar99 = bVar32 + DAT_014e86b0._4_1_;
        bVar100 = bVar33 + DAT_014e86b0._5_1_;
        bVar101 = bVar34 + DAT_014e86b0._6_1_;
        bVar102 = bVar35 + DAT_014e86b0._7_1_;
        bVar103 = bVar36 + DAT_014e86b0._8_1_;
        bVar104 = bVar37 + DAT_014e86b0._9_1_;
        bVar105 = bVar38 + DAT_014e86b0._10_1_;
        bVar106 = bVar39 + DAT_014e86b0._11_1_;
        bVar107 = bVar40 + DAT_014e86b0._12_1_;
        bVar108 = bVar41 + DAT_014e86b0._13_1_;
        bVar109 = bVar42 + DAT_014e86b0._14_1_;
        bVar110 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar54 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar65 = DAT_014e4170._8_1_;
        bVar66 = DAT_014e4170._9_1_;
        bVar68 = DAT_014e4170._10_1_;
        bVar70 = DAT_014e4170._11_1_;
        bVar72 = DAT_014e4170._12_1_;
        bVar74 = DAT_014e4170._13_1_;
        bVar76 = DAT_014e4170._14_1_;
        bVar78 = DAT_014e4170._15_1_;
        pbVar2 = pbVar58 + (long)pbVar60;
        *pbVar2 = (-((byte)((bVar3 < bVar79) * bVar3 | (bVar3 >= bVar79) * bVar79) == bVar79) &
                  DAT_014ead50) + *pbVar61;
        pbVar2[1] = (-((byte)((bVar54 < bVar80) * bVar54 | (bVar54 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar81) * bVar6 | (bVar6 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar82) * bVar7 | (bVar7 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar83) * bVar8 | (bVar8 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar84) * bVar9 | (bVar9 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar85) * bVar10 | (bVar10 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar86) * bVar11 | (bVar11 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar65 < bVar87) * bVar65 | (bVar65 >= bVar87) * bVar87) == bVar87) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar66 < bVar88) * bVar66 | (bVar66 >= bVar88) * bVar88) == bVar88) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar68 < bVar89) * bVar68 | (bVar68 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar70 < bVar90) * bVar70 | (bVar70 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar72 < bVar91) * bVar72 | (bVar72 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar74 < bVar92) * bVar74 | (bVar74 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar76 < bVar93) * bVar76 | (bVar76 >= bVar93) * bVar93) == bVar93)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5f) + bVar27;
        pbVar61 = pbVar58 + 0x10 + (long)pbVar60;
        *pbVar61 = (-((byte)((bVar3 < bVar95) * bVar3 | (bVar3 >= bVar95) * bVar95) == bVar95) &
                   DAT_014ead50) + bVar28;
        pbVar61[1] = (-((byte)((bVar54 < bVar96) * bVar54 | (bVar54 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead51) + bVar29;
        pbVar61[2] = (-((byte)((bVar6 < bVar97) * bVar6 | (bVar6 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead52) + bVar30;
        pbVar61[3] = (-((byte)((bVar7 < bVar98) * bVar7 | (bVar7 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead53) + bVar31;
        pbVar61[4] = (-((byte)((bVar8 < bVar99) * bVar8 | (bVar8 >= bVar99) * bVar99) == bVar99) &
                     UNK_014ead54) + bVar32;
        pbVar61[5] = (-((byte)((bVar9 < bVar100) * bVar9 | (bVar9 >= bVar100) * bVar100) == bVar100)
                     & UNK_014ead55) + bVar33;
        pbVar61[6] = (-((byte)((bVar10 < bVar101) * bVar10 | (bVar10 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead56) + bVar34;
        pbVar61[7] = (-((byte)((bVar11 < bVar102) * bVar11 | (bVar11 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead57) + bVar35;
        pbVar61[8] = (-((byte)((bVar65 < bVar103) * bVar65 | (bVar65 >= bVar103) * bVar103) ==
                       bVar103) & UNK_014ead58) + bVar36;
        pbVar61[9] = (-((byte)((bVar66 < bVar104) * bVar66 | (bVar66 >= bVar104) * bVar104) ==
                       bVar104) & UNK_014ead59) + bVar37;
        pbVar61[10] = (-((byte)((bVar68 < bVar105) * bVar68 | (bVar68 >= bVar105) * bVar105) ==
                        bVar105) & UNK_014ead5a) + bVar38;
        pbVar61[0xb] = (-((byte)((bVar70 < bVar106) * bVar70 | (bVar70 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5b) + bVar39;
        pbVar61[0xc] = (-((byte)((bVar72 < bVar107) * bVar72 | (bVar72 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5c) + bVar40;
        pbVar61[0xd] = (-((byte)((bVar74 < bVar108) * bVar74 | (bVar74 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5d) + bVar41;
        pbVar61[0xe] = (-((byte)((bVar76 < bVar109) * bVar76 | (bVar76 >= bVar109) * bVar109) ==
                         bVar109) & UNK_014ead5e) + bVar42;
        pbVar61[0xf] = (-((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) ==
                         bVar110) & UNK_014ead5f) + bVar43;
        pbVar60 = pbVar60 + 0x20;
      } while (pbVar51 != pbVar60);
      if (pbVar56 != pbVar51) {
        if (((ulong)pbVar56 & 0x18) == 0) {
          pbVar60 = pbVar51 + (long)pbVar58;
          goto LAB_0cbe3bd3;
        }
        goto LAB_0cbe3b55;
      }
    }
    pbVar60 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  }
  if (((ulong)uStack_b0 & 1) != 0) {
    pbVar60 = pbStack_a8;
    pbVar59 = pbStack_a0;
  }
  pbVar58 = pbVar59 + (long)pbVar60;
  pbVar56 = pbVar60;
  pbVar51 = pbVar59;
  while (((pbVar61 = pbVar58, 0 < (long)pbVar56 &&
          (pbVar51 = (byte *)func_0x0eee2ef0(pbVar51,0x3a,pbVar56), pbVar51 != (byte *)0x0)) &&
         (pbVar61 = pbVar51, *pbVar51 != 0x3a))) {
    pbVar51 = pbVar51 + 1;
    pbVar56 = pbVar58 + -(long)pbVar51;
  }
  pbVar56 = pbVar61 + -(long)pbVar59;
  if (pbVar60 < pbVar61 + -(long)pbVar59) {
    pbVar56 = pbVar60;
  }
  if (pbVar61 == pbVar58) {
    pbVar56 = pbVar60;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar56) {
LAB_0cbe4005:
    uVar53 = FUN_04882e30();
    if (((ulong)uStack_b0 & 1) != 0) {
      func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
    }
    if (plVar49 != (long *)0x0) {
      (**(code **)(*plVar49 + 8))(plVar49);
    }
    FUN_0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) {
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    if ((uStack_68 & 1) != 0) {
      func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar53);
    pcVar5 = (code *)swi(3);
    plVar49 = (long *)(*pcVar5)();
    return plVar49;
  }
  if (pbVar56 < (byte *)0x17) {
    uStack_e8 = (undefined1 *)CONCAT71(uStack_e8._1_7_,(char)pbVar56 * '\x02');
    pbVar58 = (byte *)((long)&uStack_e8 + 1);
    if (pbVar56 != (byte *)0x0) goto LAB_0cbe3ce7;
  }
  else {
    uVar52 = 0x1a;
    if (((ulong)pbVar56 | 7) != 0x17) {
      uVar52 = ((ulong)pbVar56 | 7) + 1;
    }
    pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar52);
    if (pbVar58 == (byte *)0x0) {
      func_0x0eec74c0(uVar52,0);
    }
    uStack_e8 = (undefined1 *)(uVar52 | 1);
    uStack_e0 = pbVar56;
    pbStack_d8 = pbVar58;
LAB_0cbe3ce7:
    func_0x0eee2ee0(pbVar58,pbVar59,pbVar56);
  }
  pbVar58[(long)pbVar56] = 0;
  func_0x05cf8990(lVar45 + 0xe0,&uStack_e8,&uStack_e8);
  if (((ulong)uStack_e8 & 1) != 0) {
    func_0x0412a280(pbStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  uStack_e8 = (undefined1 *)0x0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbStack_d0 = pbStack_a0;
    uStack_e0 = uStack_b0;
    pbStack_d8 = pbStack_a8;
  }
  else {
    func_0x0412e5e0(&uStack_e0,pbStack_a0,pbStack_a8);
  }
  uStack_c8 = 0;
  if (((ulong)uStack_e0 & 1) == 0) {
    if ((byte)uStack_e0 >> 1 != 0) goto LAB_0cbe3d8d;
  }
  else if (pbStack_d8 != (byte *)0x0) {
LAB_0cbe3d8d:
    pbVar58 = pbStack_d0;
    if (((ulong)uStack_e0 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_e0 + 1);
    }
    if ((pbVar58 != (byte *)0x0) && (*pbVar58 != 0)) {
      puVar63 = (undefined1 *)0xcbf29ce484222325;
      uVar52 = func_0x0eee2e90(pbVar58);
      if (uVar52 != 0) {
        uVar57 = (ulong)((uint)uVar52 & 7);
        if (7 < uVar52) {
          uVar52 = uVar52 & 0xfffffffffffffff8;
          do {
            puVar63 = (undefined1 *)
                      (((((((((long)puVar63 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                            (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3
                          ^ (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3
                        ^ (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                      (ulong)pbVar58[7]);
            pbVar58 = pbVar58 + 8;
            uVar52 = uVar52 - 8;
          } while (uVar52 != 0);
        }
        if (uVar57 != 0) {
          uVar52 = 0;
          do {
            puVar63 = (undefined1 *)((long)puVar63 * 0x100000001b3 ^ (ulong)pbVar58[uVar52]);
            uVar52 = uVar52 + 1;
          } while (uVar57 != uVar52);
        }
      }
      goto LAB_0cbe3e78;
    }
  }
  puVar63 = (undefined1 *)0x0;
LAB_0cbe3e78:
  uStack_e8 = puVar63;
  puStack_90 = (undefined1 *)&uStack_e8;
  lVar47 = func_0x05cf8b10(lVar45,&uStack_e8,&UNK_01563a4f,&puStack_90,&uStack_b1);
  plVar4 = *(long **)(lVar47 + 0x48);
  *(long **)(lVar47 + 0x48) = plVar49;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_90 = uStack_e8;
  lVar47 = func_0x05cf8dc0(lVar45 + 0xf8,&puStack_90);
  if ((*(byte *)(lVar47 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar47 + 0x28),*(ulong *)(lVar47 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar47 + 0x28) = pbStack_d0;
  *(byte **)(lVar47 + 0x18) = uStack_e0;
  *(byte **)(lVar47 + 0x20) = pbStack_d8;
  uStack_e0 = (byte *)((ulong)uStack_e0 & 0xffffffffffff0000);
  *(undefined1 **)(lVar47 + 0x10) = uStack_e8;
  *(undefined8 *)(lVar47 + 0x30) = 0;
  if (((ulong)uStack_b0 & 1) != 0) {
    func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
  }
  FUN_0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(plVar49,0xf6fe448,_DAT_0f6fe458);
  func_0x0c6cd240(plVar49,0xf6fe760,_DAT_0f6fe770);
  func_0x0c6cd240(plVar49,0xf6fe4a0,_DAT_0f6fe4b0);
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  return plVar49;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
