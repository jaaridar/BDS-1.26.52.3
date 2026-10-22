/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc488e60 (ELF vaddr 0xc388e60)
 * Label: caller-of-callee
 * Body:  [[0c488e60, 0c4893b6] [0c4893c0, 0c489457] [0c489460, 0c4896dd] [0c4896e0, 0c489708] [0c489710, 0c489b3c] [0c489b40, 0c489b58] [0c489b60, 0c489c5e] [0c489c60, 0c489cf6] [0c489d00, 0c489d20] [0c489d30, 0c489f20] [0c48a0cd, 0c48a0f8]]
 * Ghidra: FUN_0c488e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c488e60(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  undefined4 *puVar28;
  char *pcVar29;
  byte *pbVar30;
  ulong uVar31;
  undefined1 auVar32 [8];
  ulong uVar33;
  byte *pbVar34;
  bool bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  ulong uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  byte *pbStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  char *pcStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  byte bStack_60;
  undefined1 auStack_5f [15];
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  char cVar38;
  char cVar40;
  char cVar42;
  char cVar44;
  char cVar46;
  char cVar48;
  
  uVar19 = func_0x048648e0(param_2,&UNK_01ce5d50);
  uVar17 = func_0x04863e00(uVar19,0);
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  uStack_e0 = param_2;
  uVar19 = func_0x048648e0(param_2,&UNK_01ce5d60);
  cVar15 = func_0x04865490(uVar19);
  if (cVar15 == '\0') {
    uVar17 = func_0x04863f80(_DAT_01198584,uVar19);
    *(undefined4 *)(param_1 + 0x14) = uVar17;
  }
  else {
    uStack_108 = uStack_108 & 0xffffffffffff0000;
    func_0x04863cb0(&uStack_d8,uVar19,&uStack_108);
    uVar17 = func_0x0c594990(&uStack_d8);
    *(undefined4 *)(param_1 + 0x14) = uVar17;
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(pbStack_c8,uStack_d8 & 0xfffffffffffffffe);
    }
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
    }
  }
  uVar19 = func_0x048648e0(uStack_e0,&UNK_014be3cb);
  uStack_108 = uStack_108 & 0xffffffffffff0000;
  func_0x04863cb0(&uStack_d8,uVar19,&uStack_108);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(param_1 + 0x28),*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe)
    ;
  }
  *(byte **)(param_1 + 0x28) = pbStack_c8;
  *(ulong *)(param_1 + 0x18) = uStack_d8;
  *(undefined1 (*) [8])(param_1 + 0x20) = auStack_d0;
  uStack_d8 = uStack_d8 & 0xffffffffffff0000;
  if ((uStack_108 & 1) != 0) {
    func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
  }
  uVar19 = func_0x048648e0(uStack_e0,&UNK_013d5ee6);
  func_0x04863cb0(&bStack_60,uVar19,&UNK_01e79d90);
  if ((bStack_60 & 1) == 0) {
    auStack_5f._7_8_ = ZEXT18(bStack_60 >> 1);
    if (auStack_5f._7_8_ != 0x16) goto LAB_0c488fda;
LAB_0c489004:
    plVar20 = plStack_50;
    if ((bStack_60 & 1) == 0) {
      plVar20 = (long *)auStack_5f;
    }
    iVar26 = (uint)((*(long *)((long)plVar20 + 0xe) == 0x7463656666655f77 &&
                    plVar20[1] == 0x5f776574735f7375) &&
                   (*(long *)((long)plVar20 + 6) == 0x6574735f73756f69 &&
                   *plVar20 == 0x6f69636970737573)) * 2 + -1;
  }
  else {
    if (auStack_5f._7_8_ == 0x16) goto LAB_0c489004;
LAB_0c488fda:
    iVar26 = -1;
    if (auStack_5f._7_8_ == 0xf) {
      plVar20 = plStack_50;
      if ((bStack_60 & 1) == 0) {
        plVar20 = (long *)auStack_5f;
      }
      iVar26 = -(uint)(*(long *)((long)plVar20 + 7) != 0x74726f70656c6574 ||
                      *plVar20 != 0x745f7375726f6863);
    }
  }
  *(int *)(param_1 + 0x30) = iVar26;
  uVar19 = func_0x048648e0(uStack_e0,&UNK_0136de2d);
  cVar15 = func_0x04864260(uVar19);
  if (((cVar15 == '\0') && (cVar15 = func_0x04864270(uVar19), cVar15 != '\0')) &&
     (uVar18 = func_0x048641f0(uVar19), 2 < uVar18)) {
    uVar21 = func_0x04864650(uVar19,0);
    uVar17 = func_0x04863f80(0,uVar21);
    *(undefined4 *)(param_1 + 0x34) = uVar17;
    uVar21 = func_0x04864650(uVar19,1);
    uVar17 = func_0x04863f80(0,uVar21);
    *(undefined4 *)(param_1 + 0x38) = uVar17;
    uVar19 = func_0x04864650(uVar19,2);
    uVar17 = func_0x04863f80(0,uVar19);
    *(undefined4 *)(param_1 + 0x3c) = uVar17;
  }
  uVar19 = func_0x048648e0(uStack_e0,&UNK_0133649c);
  func_0x04863cb0(&uStack_108,uVar19,&UNK_01e79d90);
  uStack_d8 = 0;
  if ((uStack_108 & 1) == 0) {
    auStack_c0._0_8_ = pbStack_f8;
    pbStack_c8 = pbStack_100;
    auStack_d0 = (undefined1  [8])uStack_108;
  }
  else {
    func_0x0412e5e0(auStack_d0,pbStack_f8,pbStack_100);
  }
  auStack_c0._8_8_ = 0;
  if ((auStack_d0[0] & 1) == 0) {
    if (auStack_d0[0] >> 1 != 0) goto LAB_0c4891b0;
  }
  else if (pbStack_c8 != (byte *)0x0) {
LAB_0c4891b0:
    if ((auStack_d0[0] & 1) == 0) {
      pbVar34 = auStack_d0 + 1;
      if (pbVar34 != (byte *)0x0) goto LAB_0c4891c6;
LAB_0c4892b7:
      uVar27 = 0;
    }
    else {
      pbVar34 = (byte *)auStack_c0._0_8_;
      if ((byte *)auStack_c0._0_8_ == (byte *)0x0) goto LAB_0c4892b7;
LAB_0c4891c6:
      if (*pbVar34 == 0) goto LAB_0c489296;
      uVar27 = 0xcbf29ce484222325;
      uVar33 = func_0x0eee2e90(pbVar34);
      if (uVar33 != 0) {
        uVar31 = (ulong)((uint)uVar33 & 7);
        if (7 < uVar33) {
          uVar33 = uVar33 & 0xfffffffffffffff8;
          do {
            uVar27 = (((((((uVar27 * 0x100000001b3 ^ (ulong)*pbVar34) * 0x100000001b3 ^
                          (ulong)pbVar34[1]) * 0x100000001b3 ^ (ulong)pbVar34[2]) * 0x100000001b3 ^
                        (ulong)pbVar34[3]) * 0x100000001b3 ^ (ulong)pbVar34[4]) * 0x100000001b3 ^
                      (ulong)pbVar34[5]) * 0x100000001b3 ^ (ulong)pbVar34[6]) * 0x100000001b3 ^
                     (ulong)pbVar34[7];
            pbVar34 = pbVar34 + 8;
            uVar33 = uVar33 - 8;
          } while (uVar33 != 0);
        }
        if (uVar31 != 0) {
          uVar33 = 0;
          do {
            uVar27 = uVar27 * 0x100000001b3 ^ (ulong)pbVar34[uVar33];
            uVar33 = uVar33 + 1;
          } while (uVar31 != uVar33);
        }
      }
    }
    bVar36 = *(byte *)(param_1 + 0x48);
    uStack_d8 = uVar27;
    goto joined_r0x0c4892a5;
  }
LAB_0c489296:
  uStack_d8 = 0;
  bVar36 = *(byte *)(param_1 + 0x48);
joined_r0x0c4892a5:
  if ((bVar36 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(param_1 + 0x58),*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffe)
    ;
  }
  *(undefined8 *)(param_1 + 0x58) = auStack_c0._0_8_;
  *(undefined1 (*) [8])(param_1 + 0x48) = auStack_d0;
  *(byte **)(param_1 + 0x50) = pbStack_c8;
  auVar4._14_2_ = 0;
  auVar4._0_14_ = stack0xffffffffffffff32;
  _auStack_d0 = auVar4 << 0x10;
  *(ulong *)(param_1 + 0x40) = uStack_d8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((uStack_108 & 1) != 0) {
    func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
  }
  uVar19 = func_0x048648e0(uStack_e0,&UNK_011ed250);
  uVar17 = func_0x04863e00(uVar19,0);
  *(undefined4 *)(param_1 + 0x68) = uVar17;
  uVar19 = func_0x048648e0(uStack_e0,&UNK_01ce5d74);
  uVar16 = func_0x04863ff0(uVar19,0);
  *(undefined1 *)(param_1 + 0x6c) = uVar16;
  uVar19 = func_0x048648e0(uStack_e0,&UNK_0137a335);
  func_0x04865530(auStack_78,uVar19);
  func_0x048655b0(auStack_40,uVar19);
  plStack_68 = (long *)(param_1 + 0x70);
  lStack_48 = param_1;
  while( true ) {
    cVar15 = func_0x04862c80(auStack_78,auStack_40);
    if (cVar15 != '\0') break;
    uVar19 = func_0x04862b80(auStack_78);
    uVar21 = func_0x048648e0(uVar19,&UNK_01ce5d94);
    uStack_108 = uStack_108 & 0xffffffffffff0000;
    func_0x04863cb0(&uStack_d8,uVar21,&uStack_108);
    bVar35 = (uStack_d8 & 1) == 0;
    pbVar34 = pbStack_c8;
    if (bVar35) {
      pbVar34 = (byte *)((long)&uStack_d8 + 1);
    }
    auVar32 = (undefined1  [8])(uStack_d8 >> 1 & 0x7f);
    if (!bVar35) {
      auVar32 = auStack_d0;
    }
    if (0xfffffffffffffff7 < (ulong)auVar32) {
      func_0x04882e30();
LAB_0c489ee9:
      func_0x0c4b4ee0();
      goto LAB_0c489eee;
    }
    if ((ulong)auVar32 < 0x17) {
      uStack_90 = CONCAT71(uStack_90._1_7_,SUB81(auVar32,0) * '\x02');
      pcVar22 = (char *)((long)&uStack_90 + 1);
      if (auVar32 != (undefined1  [8])0x0) goto LAB_0c4894b9;
    }
    else {
      uVar33 = ((ulong)auVar32 | 7) + 1;
      if (((ulong)auVar32 | 7) == 0x17) {
        uVar33 = 0x1a;
      }
      pcVar22 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar33);
      if (pcVar22 == (char *)0x0) {
        func_0x0eec74c0(uVar33,0);
      }
      uStack_90 = uVar33 | 1;
      param_1 = lStack_48;
      uStack_88 = (ulong)auVar32;
      pcStack_80 = pcVar22;
LAB_0c4894b9:
      func_0x0eee2f00(pcVar22,pbVar34,auVar32);
    }
    pcVar22[(long)auVar32] = '\0';
    uVar33 = uStack_90 >> 1 & 0x7f;
    pcVar22 = (char *)((long)&uStack_90 + 1);
    if ((uStack_90 & 1) != 0) {
      uVar33 = uStack_88;
      pcVar22 = pcStack_80;
    }
    if (uVar33 != 0) {
      pcVar29 = pcVar22;
      if (7 < uVar33) {
        if (uVar33 < 0x20) {
          uVar27 = 0;
        }
        else {
          uVar27 = uVar33 & 0xffffffffffffffe0;
          uVar31 = 0;
          do {
            auVar4 = *(undefined1 (*) [16])(pcVar22 + uVar31);
            pcVar29 = pcVar22 + uVar31 + 0x10;
            cVar15 = *pcVar29;
            cVar38 = pcVar29[1];
            cVar40 = pcVar29[2];
            cVar42 = pcVar29[3];
            cVar44 = pcVar29[4];
            cVar46 = pcVar29[5];
            cVar48 = pcVar29[6];
            cVar6 = pcVar29[7];
            cVar7 = pcVar29[8];
            cVar8 = pcVar29[9];
            cVar9 = pcVar29[10];
            cVar10 = pcVar29[0xb];
            cVar11 = pcVar29[0xc];
            cVar12 = pcVar29[0xd];
            cVar13 = pcVar29[0xe];
            cVar14 = pcVar29[0xf];
            bVar36 = auVar4[0] + DAT_014e86b0;
            bVar37 = auVar4[1] + UNK_014e86b1;
            bVar39 = auVar4[2] + UNK_014e86b2;
            bVar41 = auVar4[3] + UNK_014e86b3;
            bVar43 = auVar4[4] + UNK_014e86b4;
            bVar45 = auVar4[5] + UNK_014e86b5;
            bVar47 = auVar4[6] + UNK_014e86b6;
            bVar49 = auVar4[7] + UNK_014e86b7;
            bVar50 = auVar4[8] + UNK_014e86b8;
            bVar51 = auVar4[9] + UNK_014e86b9;
            bVar52 = auVar4[10] + UNK_014e86ba;
            bVar53 = auVar4[0xb] + UNK_014e86bb;
            bVar54 = auVar4[0xc] + UNK_014e86bc;
            bVar55 = auVar4[0xd] + UNK_014e86bd;
            bVar56 = auVar4[0xe] + UNK_014e86be;
            bVar57 = auVar4[0xf] + UNK_014e86bf;
            bVar58 = cVar15 + DAT_014e86b0;
            bVar59 = cVar38 + UNK_014e86b1;
            bVar60 = cVar40 + UNK_014e86b2;
            bVar61 = cVar42 + UNK_014e86b3;
            bVar62 = cVar44 + UNK_014e86b4;
            bVar63 = cVar46 + UNK_014e86b5;
            bVar64 = cVar48 + UNK_014e86b6;
            bVar65 = cVar6 + UNK_014e86b7;
            bVar66 = cVar7 + UNK_014e86b8;
            bVar67 = cVar8 + UNK_014e86b9;
            bVar68 = cVar9 + UNK_014e86ba;
            bVar69 = cVar10 + UNK_014e86bb;
            bVar70 = cVar11 + UNK_014e86bc;
            bVar71 = cVar12 + UNK_014e86bd;
            bVar72 = cVar13 + UNK_014e86be;
            bVar73 = cVar14 + UNK_014e86bf;
            pcVar29 = pcVar22 + uVar31;
            *pcVar29 = (-((byte)((DAT_014e4170 < bVar36) * DAT_014e4170 |
                                (DAT_014e4170 >= bVar36) * bVar36) == bVar36) & DAT_014ead50) +
                       auVar4[0];
            pcVar29[1] = (-((byte)((UNK_014e4171 < bVar37) * UNK_014e4171 |
                                  (UNK_014e4171 >= bVar37) * bVar37) == bVar37) & UNK_014ead51) +
                         auVar4[1];
            pcVar29[2] = (-((byte)((UNK_014e4172 < bVar39) * UNK_014e4172 |
                                  (UNK_014e4172 >= bVar39) * bVar39) == bVar39) & UNK_014ead52) +
                         auVar4[2];
            pcVar29[3] = (-((byte)((UNK_014e4173 < bVar41) * UNK_014e4173 |
                                  (UNK_014e4173 >= bVar41) * bVar41) == bVar41) & UNK_014ead53) +
                         auVar4[3];
            pcVar29[4] = (-((byte)((UNK_014e4174 < bVar43) * UNK_014e4174 |
                                  (UNK_014e4174 >= bVar43) * bVar43) == bVar43) & UNK_014ead54) +
                         auVar4[4];
            pcVar29[5] = (-((byte)((UNK_014e4175 < bVar45) * UNK_014e4175 |
                                  (UNK_014e4175 >= bVar45) * bVar45) == bVar45) & UNK_014ead55) +
                         auVar4[5];
            pcVar29[6] = (-((byte)((UNK_014e4176 < bVar47) * UNK_014e4176 |
                                  (UNK_014e4176 >= bVar47) * bVar47) == bVar47) & UNK_014ead56) +
                         auVar4[6];
            pcVar29[7] = (-((byte)((UNK_014e4177 < bVar49) * UNK_014e4177 |
                                  (UNK_014e4177 >= bVar49) * bVar49) == bVar49) & UNK_014ead57) +
                         auVar4[7];
            pcVar29[8] = (-((byte)((UNK_014e4178 < bVar50) * UNK_014e4178 |
                                  (UNK_014e4178 >= bVar50) * bVar50) == bVar50) & UNK_014ead58) +
                         auVar4[8];
            pcVar29[9] = (-((byte)((UNK_014e4179 < bVar51) * UNK_014e4179 |
                                  (UNK_014e4179 >= bVar51) * bVar51) == bVar51) & UNK_014ead59) +
                         auVar4[9];
            pcVar29[10] = (-((byte)((UNK_014e417a < bVar52) * UNK_014e417a |
                                   (UNK_014e417a >= bVar52) * bVar52) == bVar52) & UNK_014ead5a) +
                          auVar4[10];
            pcVar29[0xb] = (-((byte)((UNK_014e417b < bVar53) * UNK_014e417b |
                                    (UNK_014e417b >= bVar53) * bVar53) == bVar53) & UNK_014ead5b) +
                           auVar4[0xb];
            pcVar29[0xc] = (-((byte)((UNK_014e417c < bVar54) * UNK_014e417c |
                                    (UNK_014e417c >= bVar54) * bVar54) == bVar54) & UNK_014ead5c) +
                           auVar4[0xc];
            pcVar29[0xd] = (-((byte)((UNK_014e417d < bVar55) * UNK_014e417d |
                                    (UNK_014e417d >= bVar55) * bVar55) == bVar55) & UNK_014ead5d) +
                           auVar4[0xd];
            pcVar29[0xe] = (-((byte)((UNK_014e417e < bVar56) * UNK_014e417e |
                                    (UNK_014e417e >= bVar56) * bVar56) == bVar56) & UNK_014ead5e) +
                           auVar4[0xe];
            pcVar29[0xf] = (-((byte)((UNK_014e417f < bVar57) * UNK_014e417f |
                                    (UNK_014e417f >= bVar57) * bVar57) == bVar57) & UNK_014ead5f) +
                           auVar4[0xf];
            pcVar29 = pcVar22 + uVar31 + 0x10;
            *pcVar29 = (-((byte)((DAT_014e4170 < bVar58) * DAT_014e4170 |
                                (DAT_014e4170 >= bVar58) * bVar58) == bVar58) & DAT_014ead50) +
                       cVar15;
            pcVar29[1] = (-((byte)((UNK_014e4171 < bVar59) * UNK_014e4171 |
                                  (UNK_014e4171 >= bVar59) * bVar59) == bVar59) & UNK_014ead51) +
                         cVar38;
            pcVar29[2] = (-((byte)((UNK_014e4172 < bVar60) * UNK_014e4172 |
                                  (UNK_014e4172 >= bVar60) * bVar60) == bVar60) & UNK_014ead52) +
                         cVar40;
            pcVar29[3] = (-((byte)((UNK_014e4173 < bVar61) * UNK_014e4173 |
                                  (UNK_014e4173 >= bVar61) * bVar61) == bVar61) & UNK_014ead53) +
                         cVar42;
            pcVar29[4] = (-((byte)((UNK_014e4174 < bVar62) * UNK_014e4174 |
                                  (UNK_014e4174 >= bVar62) * bVar62) == bVar62) & UNK_014ead54) +
                         cVar44;
            pcVar29[5] = (-((byte)((UNK_014e4175 < bVar63) * UNK_014e4175 |
                                  (UNK_014e4175 >= bVar63) * bVar63) == bVar63) & UNK_014ead55) +
                         cVar46;
            pcVar29[6] = (-((byte)((UNK_014e4176 < bVar64) * UNK_014e4176 |
                                  (UNK_014e4176 >= bVar64) * bVar64) == bVar64) & UNK_014ead56) +
                         cVar48;
            pcVar29[7] = (-((byte)((UNK_014e4177 < bVar65) * UNK_014e4177 |
                                  (UNK_014e4177 >= bVar65) * bVar65) == bVar65) & UNK_014ead57) +
                         cVar6;
            pcVar29[8] = (-((byte)((UNK_014e4178 < bVar66) * UNK_014e4178 |
                                  (UNK_014e4178 >= bVar66) * bVar66) == bVar66) & UNK_014ead58) +
                         cVar7;
            pcVar29[9] = (-((byte)((UNK_014e4179 < bVar67) * UNK_014e4179 |
                                  (UNK_014e4179 >= bVar67) * bVar67) == bVar67) & UNK_014ead59) +
                         cVar8;
            pcVar29[10] = (-((byte)((UNK_014e417a < bVar68) * UNK_014e417a |
                                   (UNK_014e417a >= bVar68) * bVar68) == bVar68) & UNK_014ead5a) +
                          cVar9;
            pcVar29[0xb] = (-((byte)((UNK_014e417b < bVar69) * UNK_014e417b |
                                    (UNK_014e417b >= bVar69) * bVar69) == bVar69) & UNK_014ead5b) +
                           cVar10;
            pcVar29[0xc] = (-((byte)((UNK_014e417c < bVar70) * UNK_014e417c |
                                    (UNK_014e417c >= bVar70) * bVar70) == bVar70) & UNK_014ead5c) +
                           cVar11;
            pcVar29[0xd] = (-((byte)((UNK_014e417d < bVar71) * UNK_014e417d |
                                    (UNK_014e417d >= bVar71) * bVar71) == bVar71) & UNK_014ead5d) +
                           cVar12;
            pcVar29[0xe] = (-((byte)((UNK_014e417e < bVar72) * UNK_014e417e |
                                    (UNK_014e417e >= bVar72) * bVar72) == bVar72) & UNK_014ead5e) +
                           cVar13;
            pcVar29[0xf] = (-((byte)((UNK_014e417f < bVar73) * UNK_014e417f |
                                    (UNK_014e417f >= bVar73) * bVar73) == bVar73) & UNK_014ead5f) +
                           cVar14;
            uVar31 = uVar31 + 0x20;
          } while (uVar27 != uVar31);
          if (uVar33 == uVar27) goto LAB_0c48963d;
          if ((uVar33 & 0x18) == 0) {
            pcVar29 = pcVar22 + uVar27;
            goto LAB_0c489610;
          }
        }
        uVar31 = uVar33 & 0xfffffffffffffff8;
        pcVar29 = pcVar22 + uVar31;
        do {
          uVar21 = *(undefined8 *)(pcVar22 + uVar27);
          bVar36 = (char)uVar21 + DAT_014e9110;
          cVar38 = (char)((ulong)uVar21 >> 8);
          bVar37 = cVar38 + UNK_014e9111;
          cVar40 = (char)((ulong)uVar21 >> 0x10);
          bVar39 = cVar40 + UNK_014e9112;
          cVar42 = (char)((ulong)uVar21 >> 0x18);
          bVar41 = cVar42 + UNK_014e9113;
          cVar44 = (char)((ulong)uVar21 >> 0x20);
          bVar43 = cVar44 + UNK_014e9114;
          cVar46 = (char)((ulong)uVar21 >> 0x28);
          bVar45 = cVar46 + UNK_014e9115;
          cVar48 = (char)((ulong)uVar21 >> 0x30);
          cVar15 = (char)((ulong)uVar21 >> 0x38);
          bVar47 = cVar48 + UNK_014e9116;
          bVar49 = cVar15 + UNK_014e9117;
          *(ulong *)(pcVar22 + uVar27) =
               CONCAT17((~-((byte)((bVar49 < UNK_014e8cb7) * UNK_014e8cb7 |
                                  (bVar49 >= UNK_014e8cb7) * bVar49) == bVar49) & UNK_014ea367) +
                        cVar15,CONCAT16((~-((byte)((bVar47 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                  (bVar47 >= UNK_014e8cb6) * bVar47) == bVar47) &
                                        UNK_014ea366) + cVar48,
                                        CONCAT15((~-((byte)((bVar45 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                           (bVar45 >= UNK_014e8cb5) * bVar45) ==
                                                    bVar45) & UNK_014ea365) + cVar46,
                                                 CONCAT14((~-((byte)((bVar43 < UNK_014e8cb4) *
                                                                     UNK_014e8cb4 |
                                                                    (bVar43 >= UNK_014e8cb4) *
                                                                    bVar43) == bVar43) &
                                                          UNK_014ea364) + cVar44,
                                                          CONCAT13((~-((byte)((bVar41 < UNK_014e8cb3
                                                                              ) * UNK_014e8cb3 |
                                                                             (bVar41 >= UNK_014e8cb3
                                                                             ) * bVar41) == bVar41)
                                                                   & UNK_014ea363) + cVar42,
                                                                   CONCAT12((~-((byte)((bVar39 < 
                                                  UNK_014e8cb2) * UNK_014e8cb2 |
                                                  (bVar39 >= UNK_014e8cb2) * bVar39) == bVar39) &
                                                  UNK_014ea362) + cVar40,
                                                  CONCAT11((~-((byte)((bVar37 < UNK_014e8cb1) *
                                                                      UNK_014e8cb1 |
                                                                     (bVar37 >= UNK_014e8cb1) *
                                                                     bVar37) == bVar37) &
                                                           UNK_014ea361) + cVar38,
                                                           (~-((byte)((bVar36 < DAT_014e8cb0) *
                                                                      DAT_014e8cb0 |
                                                                     (bVar36 >= DAT_014e8cb0) *
                                                                     bVar36) == bVar36) &
                                                           DAT_014ea360) + (char)uVar21)))))));
          uVar27 = uVar27 + 8;
        } while (uVar31 != uVar27);
        if (uVar33 == uVar31) goto LAB_0c48963d;
      }
LAB_0c489610:
      do {
        cVar15 = *pcVar29;
        cVar38 = cVar15 + ' ';
        if (0x19 < (byte)(cVar15 + 0xbfU)) {
          cVar38 = cVar15;
        }
        *pcVar29 = cVar38;
        pcVar29 = pcVar29 + 1;
      } while (pcVar29 != pcVar22 + uVar33);
    }
LAB_0c48963d:
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(pbStack_c8,uStack_d8 & 0xfffffffffffffffe);
    }
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
    }
    lVar23 = func_0x0c6308e0(0xf6e9e18,&uStack_90);
    if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x28), lVar23 == 0)) {
      pbVar34 = (byte *)(**(code **)(**(long **)(param_1 + 8) + 0x28))();
      if ((*pbVar34 & 1) == 0) {
        pbVar34 = pbVar34 + 1;
      }
      else {
        pbVar34 = *(byte **)(pbVar34 + 0x10);
      }
      pcVar22 = (char *)((long)&uStack_90 + 1);
      if ((uStack_90 & 1) != 0) {
        pcVar22 = pcStack_80;
      }
      func_0x0c48aff0(pbVar34,pcVar22);
    }
    else {
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      auStack_c0 = (undefined1  [16])0x0;
      _auStack_d0 = (undefined1  [16])0x0;
      pauVar1 = (undefined1 (*) [16])(lVar23 + 0x98);
      if ((undefined1 (*) [16])auStack_d0 != pauVar1) {
        if (((*pauVar1)[0] & 1) == 0) {
          auStack_c0._8_8_ = 0;
          auStack_c0._0_8_ = *(ulong *)(lVar23 + 0xa8);
          _auStack_d0 = *pauVar1;
        }
        else {
          func_0x04885070(auStack_d0,*(undefined8 *)(lVar23 + 0xa8),*(undefined8 *)(lVar23 + 0xa0));
        }
      }
      uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar23 + 8));
      pbVar34 = (byte *)(lVar23 + 0x70);
      if (auStack_c0 + 8 != pbVar34) {
        bVar36 = *pbVar34;
        if ((auStack_c0[8] & 1) == 0) {
          if ((bVar36 & 1) == 0) {
            uStack_a8 = (undefined4)*(undefined8 *)(lVar23 + 0x80);
            uStack_a4 = (undefined4)((ulong)*(undefined8 *)(lVar23 + 0x80) >> 0x20);
            uStack_b0 = *(undefined8 *)(lVar23 + 0x78);
            auStack_c0._8_8_ = *(undefined8 *)pbVar34;
          }
          else {
            func_0x04885070(auStack_c0 + 8,*(undefined8 *)(lVar23 + 0x80),
                            *(undefined8 *)(lVar23 + 0x78));
          }
        }
        else {
          bVar35 = (bVar36 & 1) != 0;
          lVar24 = lVar23 + 0x71;
          if (bVar35) {
            lVar24 = *(long *)(lVar23 + 0x80);
          }
          uVar33 = (ulong)(bVar36 >> 1);
          if (bVar35) {
            uVar33 = *(ulong *)(lVar23 + 0x78);
          }
          FUN_04885120(auStack_c0 + 8,lVar24,uVar33);
        }
      }
      func_0x0bf0af40(uVar19,&uStack_a0,&UNK_01ce5d99,1);
      uVar21 = func_0x048648e0(uVar19,&UNK_01ce5da2);
      uStack_9c = func_0x04863e00(uVar21,1);
      uVar19 = func_0x048648e0(uVar19,&UNK_01ce5dac);
      uStack_98 = func_0x04863f80(_DAT_011983f0,uVar19);
      puVar28 = *(undefined4 **)(param_1 + 0x78);
      if (puVar28 < *(undefined4 **)(param_1 + 0x80)) {
        *puVar28 = (undefined4)uStack_d8;
        if ((auStack_d0[0] & 1) == 0) {
          *(undefined8 *)(puVar28 + 6) = auStack_c0._0_8_;
          *(undefined1 (*) [8])(puVar28 + 2) = auStack_d0;
          *(byte **)(puVar28 + 4) = pbStack_c8;
        }
        else {
          func_0x0412e5e0(puVar28 + 2,auStack_c0._0_8_,pbStack_c8);
        }
        if ((auStack_c0[8] & 1) == 0) {
          *(ulong *)(puVar28 + 0xc) = CONCAT44(uStack_a4,uStack_a8);
          *(undefined8 *)(puVar28 + 8) = auStack_c0._8_8_;
          *(undefined8 *)(puVar28 + 10) = uStack_b0;
        }
        else {
          func_0x0412e5e0(puVar28 + 8,CONCAT44(uStack_a4,uStack_a8),uStack_b0);
        }
        puVar28[0x10] = uStack_98;
        *(ulong *)(puVar28 + 0xe) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined4 **)(param_1 + 0x78) = puVar28 + 0x12;
        *(undefined4 **)(param_1 + 0x78) = puVar28 + 0x12;
      }
      else {
        lVar23 = (long)puVar28 - *plStack_68;
        uVar33 = (lVar23 >> 3) * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar33) goto LAB_0c489ee9;
        lVar24 = (long)*(undefined4 **)(param_1 + 0x80) - *plStack_68 >> 3;
        uVar27 = lVar24 * 0x1c71c71c71c71c72;
        if (uVar33 < uVar27) {
          uVar33 = uVar27;
        }
        if (0x1c71c71c71c71c6 < (ulong)(lVar24 * -0x71c71c71c71c71c7)) {
          uVar33 = 0x38e38e38e38e38e;
        }
        plStack_e8 = plStack_68;
        if (uVar33 == 0) {
          uVar27 = 0;
        }
        else {
          if (0x38e38e38e38e38e < uVar33) goto LAB_0c489ef8;
          uVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar33 * 0x48);
          if (uVar27 == 0) {
            func_0x0eec74c0(uVar33 * 0x48,0);
            uVar27 = 0;
          }
        }
        pbVar34 = (byte *)(uVar27 + lVar23);
        lStack_f0 = uVar27 + uVar33 * 0x48;
        *(undefined4 *)(uVar27 + lVar23) = (undefined4)uStack_d8;
        lVar23 = uVar27 + lVar23;
        uStack_108 = uVar27;
        pbStack_100 = pbVar34;
        pbStack_f8 = pbVar34;
        if ((auStack_d0[0] & 1) == 0) {
          *(undefined8 *)(lVar23 + 0x18) = auStack_c0._0_8_;
          *(undefined8 *)(lVar23 + 8) = auStack_d0;
          *(byte **)(lVar23 + 0x10) = pbStack_c8;
        }
        else {
          func_0x0412e5e0((undefined8 *)(lVar23 + 8),auStack_c0._0_8_,pbStack_c8);
        }
        if ((auStack_c0[8] & 1) == 0) {
          *(ulong *)(pbVar34 + 0x30) = CONCAT44(uStack_a4,uStack_a8);
          *(undefined8 *)(pbVar34 + 0x20) = auStack_c0._8_8_;
          *(undefined8 *)(pbVar34 + 0x28) = uStack_b0;
        }
        else {
          func_0x0412e5e0(pbVar34 + 0x20,CONCAT44(uStack_a4,uStack_a8),uStack_b0);
        }
        pbVar30 = pbStack_f8;
        *(undefined4 *)(pbVar34 + 0x40) = uStack_98;
        *(ulong *)(pbVar34 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
        lVar23 = *(long *)(param_1 + 0x70);
        lVar24 = *(long *)(param_1 + 0x78);
        pbVar34 = pbStack_100 + (lVar23 - lVar24);
        if (lVar23 != lVar24) {
          lVar25 = 0;
          do {
            *(undefined4 *)(pbVar34 + lVar25) = *(undefined4 *)(lVar23 + lVar25);
            *(undefined8 *)(pbVar34 + lVar25 + 0x18) = *(undefined8 *)(lVar23 + 0x18 + lVar25);
            puVar3 = (undefined8 *)(lVar23 + 8 + lVar25);
            uVar19 = puVar3[1];
            *(undefined8 *)(pbVar34 + lVar25 + 8) = *puVar3;
            *(undefined8 *)(pbVar34 + lVar25 + 8 + 8) = uVar19;
            *(undefined1 (*) [16])(lVar23 + 8 + lVar25) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar23 + 0x18 + lVar25) = 0;
            *(undefined8 *)(pbVar34 + lVar25 + 0x30) = *(undefined8 *)(lVar23 + 0x30 + lVar25);
            puVar3 = (undefined8 *)(lVar23 + 0x20 + lVar25);
            uVar19 = puVar3[1];
            *(undefined8 *)(pbVar34 + lVar25 + 0x20) = *puVar3;
            *(undefined8 *)(pbVar34 + lVar25 + 0x20 + 8) = uVar19;
            *(undefined1 (*) [16])(lVar23 + 0x20 + lVar25) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar23 + 0x30 + lVar25) = 0;
            *(undefined4 *)(pbVar34 + lVar25 + 0x40) = *(undefined4 *)(lVar23 + 0x40 + lVar25);
            *(undefined8 *)(pbVar34 + lVar25 + 0x38) = *(undefined8 *)(lVar23 + 0x38 + lVar25);
            lVar2 = lVar23 + lVar25;
            lVar25 = lVar25 + 0x48;
          } while (lVar2 + 0x48 != lVar24);
          do {
            if ((*(byte *)(lVar23 + 0x20) & 1) == 0) {
              bVar36 = *(byte *)(lVar23 + 8);
            }
            else {
              func_0x0412a280(*(undefined8 *)(lVar23 + 0x30),
                              *(ulong *)(lVar23 + 0x20) & 0xfffffffffffffffe);
              bVar36 = *(byte *)(lVar23 + 8);
            }
            if ((bVar36 & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar23 + 0x18),
                              *(ulong *)(lVar23 + 8) & 0xfffffffffffffffe);
            }
            lVar23 = lVar23 + 0x48;
          } while (lVar23 != lVar24);
          lVar23 = *plStack_68;
        }
        *(byte **)(param_1 + 0x70) = pbVar34;
        *(byte **)(param_1 + 0x78) = pbVar30 + 0x48;
        lVar24 = *(long *)(param_1 + 0x80);
        *(long *)(param_1 + 0x80) = lStack_f0;
        if (lVar23 != 0) {
          func_0x0412a280(lVar23,lVar24 - lVar23);
        }
        *(byte **)(param_1 + 0x78) = pbVar30 + 0x48;
      }
      if ((auStack_c0[8] & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_a4,uStack_a8),auStack_c0._8_8_ & 0xfffffffffffffffe);
      }
      if ((auStack_d0[0] & 1) != 0) {
        func_0x0412a280(auStack_c0._0_8_,(ulong)auStack_d0 & 0xfffffffffffffffe);
      }
    }
    if ((uStack_90 & 1) != 0) {
      func_0x0412a280(pcStack_80,uStack_90 & 0xfffffffffffffffe);
    }
    func_0x04862ba0(auStack_78);
  }
  func_0x04862b40(auStack_40);
  func_0x04862b40(auStack_78);
  uVar19 = func_0x048648e0(uStack_e0,&UNK_014b1d79);
  func_0x04865530(&uStack_90,uVar19);
  func_0x048655b0(auStack_78,uVar19);
  do {
    cVar15 = func_0x04862c80(&uStack_90,auStack_78);
    if (cVar15 != '\0') {
      func_0x04862b40(auStack_78);
      func_0x04862b40(&uStack_90);
      *(undefined1 *)(*(long *)(param_1 + 8) + 0x2e) = 1;
      if ((bStack_60 & 1) != 0) {
        func_0x0412a280(plStack_50,CONCAT71(auStack_5f._0_7_,bStack_60) & 0xfffffffffffffffe);
      }
      return;
    }
    uVar19 = func_0x04862b80(&uStack_90);
    uStack_108 = uStack_108 & 0xffffffffffff0000;
    func_0x04863cb0(&uStack_d8,uVar19,&uStack_108);
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
    }
    lVar23 = func_0x0c6308e0(0xf6e9e18,&uStack_d8);
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x28) == 0)) {
      pbVar34 = (byte *)(**(code **)(**(long **)(param_1 + 8) + 0x28))();
      if ((*pbVar34 & 1) == 0) {
        pbVar34 = pbVar34 + 1;
      }
      else {
        pbVar34 = *(byte **)(pbVar34 + 0x10);
      }
      pbVar30 = (byte *)((long)&uStack_d8 + 1);
      if ((uStack_d8 & 1) != 0) {
        pbVar30 = pbStack_c8;
      }
      func_0x0c48b1c0(pbVar34,pbVar30);
    }
    else {
      uVar17 = *(undefined4 *)(*(long *)(lVar23 + 0x28) + 8);
      puVar28 = *(undefined4 **)(param_1 + 0x90);
      if (puVar28 < *(undefined4 **)(param_1 + 0x98)) {
        *puVar28 = uVar17;
        puVar28 = puVar28 + 1;
      }
      else {
        plVar20 = *(long **)(param_1 + 0x88);
        lVar23 = (long)puVar28 - (long)plVar20;
        uVar33 = (lVar23 >> 2) + 1;
        if (0x3fffffffffffffff < uVar33) goto LAB_0c489ef3;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar17);
        uVar31 = (long)*(undefined4 **)(param_1 + 0x98) - (long)plVar20;
        uVar27 = (long)uVar31 >> 1;
        if ((ulong)((long)uVar31 >> 1) <= uVar33) {
          uVar27 = uVar33;
        }
        if (0x7ffffffffffffffb < uVar31) {
          uVar27 = 0x3fffffffffffffff;
        }
        plStack_68 = plVar20;
        if (0x3fffffffffffffff < uVar27) break;
        lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 * 4);
        if (lVar24 == 0) {
          func_0x0eec74c0(uVar27 * 4,0);
        }
        plVar20 = plStack_68;
        *(undefined4 *)(lVar24 + lVar23) = (undefined4)uStack_e0;
        puVar28 = (undefined4 *)(lVar24 + lVar23 + 4);
        lVar25 = lVar24 + lVar23 + (lVar23 >> 2) * -4;
        func_0x0eee2f00(lVar25,plStack_68,lVar23);
        param_1 = lStack_48;
        *(long *)(lStack_48 + 0x88) = lVar25;
        *(undefined4 **)(lStack_48 + 0x90) = puVar28;
        *(ulong *)(lStack_48 + 0x98) = lVar24 + uVar27 * 4;
        if (plVar20 != (long *)0x0) {
          func_0x0412a280(plVar20,uVar31);
        }
      }
      *(undefined4 **)(param_1 + 0x90) = puVar28;
    }
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(pbStack_c8,uStack_d8 & 0xfffffffffffffffe);
    }
    func_0x04862ba0(&uStack_90);
  } while( true );
LAB_0c489eee:
  func_0x04882eb0();
LAB_0c489ef3:
  func_0x0533ee50();
LAB_0c489ef8:
  uVar19 = func_0x04882eb0();
  if ((uStack_108 & 1) != 0) {
    func_0x0412a280(pbStack_f8,uStack_108 & 0xfffffffffffffffe);
  }
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(plStack_50,CONCAT71(auStack_5f._0_7_,bStack_60) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar19);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
