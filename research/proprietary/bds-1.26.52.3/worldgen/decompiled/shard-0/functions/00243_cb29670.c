/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc29670 (ELF vaddr 0xcb29670)
 * Label: caller-of-callee
 * Body:  [[0cc29670, 0cc29a5a] [0cc29a60, 0cc29ab0] [0cc29ac0, 0cc29ba4] [0cc29bb0, 0cc29c34] [0cc29c40, 0cc29d95] [0cc29da0, 0cc29e1e] [0cc29e20, 0cc29e70] [0cc29e80, 0cc2a00c] [0cc2a010, 0cc2a15a] [0cc2a160, 0cc2a1ea] [0cc2a1f0, 0cc2a240] [0cc2a250, 0cc2a337] [0cc2a340, 0cc2a4e1] [0cc2a4f0, 0cc2a56a] [0cc2a570, 0cc2a5c2] [0cc2a5d0, 0cc2a6a8] [0cc2a6b0, 0cc2a842] [0cc2a850, 0cc2ab43] [0cc2ab50, 0cc2ab85] [0cc2ab90, 0cc2ac08] [0cc2ac10, 0cc2b1cc] [0cc2b1d0, 0cc2b205] [0cc2b210, 0cc2b288] [0cc2b290, 0cc2b725] [0cc2b730, 0cc2b7f2] [0cc2b800, 0cc2b835] [0cc2b840, 0cc2b8c8] [0cc2b8d0, 0cc2b8e8] [0cc2b8f0, 0cc2bd39] [0cc2bd40, 0cc2bdfe] [0cc2be00, 0cc2c36d] [0cc2c370, 0cc2c490] [0cc2c4a0, 0cc2c51d] [0cc2c520, 0cc2c59a] [0cc2c5a0, 0cc2c688] [0cc2c690, 0cc2c801] [0cc2c810, 0cc2c83a] [0cc2c840, 0cc2c878] [0cc2c880, 0cc2c8aa] [0cc2c8b0, 0cc2c8d2] [0cc2c8e0, 0cc2c942] [0cc2c950, 0cc2c9a1] [0cc2c9b0, 0cc2c9ca] [0cc2c9d0, 0cc2cc23] [0cc2cc30, 0cc2ccf3] [0cc2cd00, 0cc2cd68] [0cc2cd70, 0cc2cd8a] [0cc2cd90, 0cc2ce2a] [0cc2ce30, 0cc2ce72] [0cc2ce80, 0cc2cec0] [0cc2ced0, 0cc2cef7] [0cc2cf00, 0cc2d0b8] [0cc2d0c0, 0cc2d137] [0cc2d140, 0cc2d50f]]
 * Ghidra: FUN_0cc29670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc29670(undefined1 (*param_1) [16],undefined8 param_2,undefined1 (*param_3) [16],
                 undefined8 param_4)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  char *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  char cVar36;
  undefined1 uVar37;
  int iVar38;
  undefined1 (*pauVar39) [16];
  long *plVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined1 (*pauVar43) [16];
  long lVar44;
  undefined8 *puVar45;
  char *pcVar46;
  undefined8 uVar47;
  long *plVar48;
  ulong uVar49;
  byte bVar50;
  uint uVar51;
  long *plVar52;
  ulong uVar53;
  long lVar54;
  byte bVar55;
  undefined *puVar56;
  ulong uVar57;
  undefined1 (*pauVar58) [16];
  long lVar59;
  ulong uVar60;
  undefined1 (*pauVar61) [16];
  undefined1 (*pauVar62) [16];
  undefined *puVar63;
  undefined1 (*unaff_R15) [16];
  long lVar64;
  long lVar65;
  bool bVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar78 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  byte bVar80;
  byte bVar81;
  byte bVar83;
  byte bVar85;
  byte bVar87;
  byte bVar89;
  byte bVar91;
  byte bVar93;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined1 auVar118 [16];
  undefined1 (*pauStack_1a0) [16];
  long *plStack_178;
  undefined1 (*pauStack_170) [16];
  long lStack_168;
  undefined1 (*pauStack_160) [16];
  undefined8 uStack_158;
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined8 uStack_140;
  undefined1 (*pauStack_138) [16];
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d1 [9];
  undefined8 *puStack_c8;
  undefined1 (*pauStack_c0) [16];
  undefined8 *puStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *apuStack_98 [4];
  undefined **ppuStack_78;
  undefined *apuStack_68 [4];
  undefined1 (*pauStack_48) [16];
  undefined1 auVar79 [11];
  char cVar82;
  char cVar84;
  char cVar86;
  char cVar88;
  char cVar90;
  char cVar92;
  
  uStack_a8 = param_4;
  uStack_a0 = param_2;
  param_1[2] = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined4 *)param_1[3] = 0x34;
  *(undefined2 *)(param_1[3] + 4) = 0xffff;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[4] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[5] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[6] + 8) = 0xffffffff;
  param_1[6][0xc] = 1;
  param_1[10][4] = 0;
  *(undefined2 *)(param_1[10] + 8) = 0;
  param_1[10][10] = 0;
  param_1[7] = (undefined1  [16])0x0;
  param_1[8] = (undefined1  [16])0x0;
  param_1[9] = (undefined1  [16])0x0;
  param_1[10][0] = 0;
  param_1[0xd] = (undefined1  [16])0x0;
  param_1[0xc] = (undefined1  [16])0x0;
  param_1[0xb] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0xe] = 6;
  *(undefined1 (*) [16])(param_1[0xe] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0xf] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x10] + 8) = 0x3f800000;
  param_1[0x11][0] = 0;
  *(undefined1 (*) [16])(param_1[0x11] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x12] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x13] + 8) = 0x3f800000;
  param_1[0x14] = (undefined1  [16])0x0;
  param_1[0x15] = (undefined1  [16])0x0;
  param_1[0x16] = (undefined1  [16])0x0;
  param_1[0x17] = (undefined1  [16])0x0;
  param_1[0x18] = (undefined1  [16])0x0;
  param_1[0x19] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0x1a] = 0;
  *(undefined4 *)(param_1[0x1a] + 8) = 0x3f800000;
  bVar66 = ((*param_3)[0] & 1) != 0;
  plVar40 = (long *)(*param_3 + 1);
  if (bVar66) {
    plVar40 = *(long **)param_3[1];
  }
  pauVar39 = (undefined1 (*) [16])(ulong)((byte)(*param_3)[0] >> 1);
  if (bVar66) {
    pauVar39 = *(undefined1 (**) [16])(*param_3 + 8);
  }
  if ((undefined1 (*) [16])0xfffffffffffffff7 < pauVar39) goto LAB_0cc2d467;
  pauVar62 = (undefined1 (*) [16])((long)&uStack_158 + 1);
  if ((undefined1 (*) [16])0x16 < pauVar39) {
    pauVar61 = (undefined1 (*) [16])0x1a;
    if (((ulong)pauVar39 | 7) != 0x17) {
      pauVar61 = (undefined1 (*) [16])(((ulong)pauVar39 | 7) + 1);
    }
    unaff_R15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pauVar61);
    if (unaff_R15 == (undefined1 (*) [16])0x0) goto LAB_0cc2d3bc;
    goto LAB_0cc2981d;
  }
  uStack_158 = (undefined1 (*) [16])CONCAT71(uStack_158._1_7_,(char)pauVar39 * '\x02');
  unaff_R15 = pauVar62;
  if (pauVar39 != (undefined1 (*) [16])0x0) goto LAB_0cc29830;
LAB_0cc2983e:
  (*pauVar39)[(long)*unaff_R15] = 0;
  pauVar39 = (undefined1 (*) [16])((ulong)uStack_158 >> 1 & 0x7f);
  if (((ulong)uStack_158 & 1) != 0) {
    pauVar39 = pauStack_150;
    pauVar62 = pauStack_148;
  }
  if (pauVar39 == (undefined1 (*) [16])0x0) goto LAB_0cc2999d;
  pauVar61 = pauVar62;
  if ((undefined1 (*) [16])0x7 < pauVar39) {
    if (pauVar39 < (undefined1 (*) [16])0x20) {
      pauVar43 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar43 = (undefined1 (*) [16])((ulong)pauVar39 & 0xffffffffffffffe0);
      pauVar61 = (undefined1 (*) [16])0x0;
      do {
        pcVar4 = *pauVar61 + (long)*pauVar62;
        cVar5 = pcVar4[1];
        cVar82 = pcVar4[2];
        cVar84 = pcVar4[3];
        cVar86 = pcVar4[4];
        cVar88 = pcVar4[5];
        cVar90 = pcVar4[6];
        cVar92 = pcVar4[7];
        cVar13 = pcVar4[8];
        cVar14 = pcVar4[9];
        cVar15 = pcVar4[10];
        cVar16 = pcVar4[0xb];
        cVar17 = pcVar4[0xc];
        cVar18 = pcVar4[0xd];
        cVar19 = pcVar4[0xe];
        cVar20 = pcVar4[0xf];
        pcVar46 = *pauVar61 + (long)pauVar62[1];
        cVar21 = *pcVar46;
        cVar22 = pcVar46[1];
        cVar23 = pcVar46[2];
        cVar24 = pcVar46[3];
        cVar25 = pcVar46[4];
        cVar26 = pcVar46[5];
        cVar27 = pcVar46[6];
        cVar28 = pcVar46[7];
        cVar29 = pcVar46[8];
        cVar30 = pcVar46[9];
        cVar31 = pcVar46[10];
        cVar32 = pcVar46[0xb];
        cVar33 = pcVar46[0xc];
        cVar34 = pcVar46[0xd];
        cVar35 = pcVar46[0xe];
        cVar36 = pcVar46[0xf];
        bVar50 = *pcVar4 + DAT_014e86b0;
        bVar55 = cVar5 + DAT_014e86b0._1_1_;
        bVar96 = cVar82 + DAT_014e86b0._2_1_;
        bVar97 = cVar84 + DAT_014e86b0._3_1_;
        bVar98 = cVar86 + DAT_014e86b0._4_1_;
        bVar99 = cVar88 + DAT_014e86b0._5_1_;
        bVar100 = cVar90 + DAT_014e86b0._6_1_;
        bVar101 = cVar92 + DAT_014e86b0._7_1_;
        bVar80 = cVar13 + DAT_014e86b0._8_1_;
        bVar81 = cVar14 + DAT_014e86b0._9_1_;
        bVar83 = cVar15 + DAT_014e86b0._10_1_;
        bVar85 = cVar16 + DAT_014e86b0._11_1_;
        bVar87 = cVar17 + DAT_014e86b0._12_1_;
        bVar89 = cVar18 + DAT_014e86b0._13_1_;
        bVar91 = cVar19 + DAT_014e86b0._14_1_;
        bVar93 = cVar20 + DAT_014e86b0._15_1_;
        bVar102 = cVar21 + DAT_014e86b0;
        bVar103 = cVar22 + DAT_014e86b0._1_1_;
        bVar104 = cVar23 + DAT_014e86b0._2_1_;
        bVar105 = cVar24 + DAT_014e86b0._3_1_;
        bVar106 = cVar25 + DAT_014e86b0._4_1_;
        bVar107 = cVar26 + DAT_014e86b0._5_1_;
        bVar108 = cVar27 + DAT_014e86b0._6_1_;
        bVar109 = cVar28 + DAT_014e86b0._7_1_;
        bVar110 = cVar29 + DAT_014e86b0._8_1_;
        bVar111 = cVar30 + DAT_014e86b0._9_1_;
        bVar112 = cVar31 + DAT_014e86b0._10_1_;
        bVar113 = cVar32 + DAT_014e86b0._11_1_;
        bVar114 = cVar33 + DAT_014e86b0._12_1_;
        bVar115 = cVar34 + DAT_014e86b0._13_1_;
        bVar116 = cVar35 + DAT_014e86b0._14_1_;
        bVar117 = cVar36 + DAT_014e86b0._15_1_;
        auVar118[0] = -((byte)((DAT_014e4170 < bVar50) * DAT_014e4170 |
                              (DAT_014e4170 >= bVar50) * bVar50) == bVar50);
        auVar118[1] = -((byte)((UNK_014e4171 < bVar55) * UNK_014e4171 |
                              (UNK_014e4171 >= bVar55) * bVar55) == bVar55);
        auVar118[2] = -((byte)((UNK_014e4172 < bVar96) * UNK_014e4172 |
                              (UNK_014e4172 >= bVar96) * bVar96) == bVar96);
        auVar118[3] = -((byte)((UNK_014e4173 < bVar97) * UNK_014e4173 |
                              (UNK_014e4173 >= bVar97) * bVar97) == bVar97);
        auVar118[4] = -((byte)((UNK_014e4174 < bVar98) * UNK_014e4174 |
                              (UNK_014e4174 >= bVar98) * bVar98) == bVar98);
        auVar118[5] = -((byte)((UNK_014e4175 < bVar99) * UNK_014e4175 |
                              (UNK_014e4175 >= bVar99) * bVar99) == bVar99);
        auVar118[6] = -((byte)((UNK_014e4176 < bVar100) * UNK_014e4176 |
                              (UNK_014e4176 >= bVar100) * bVar100) == bVar100);
        auVar118[7] = -((byte)((UNK_014e4177 < bVar101) * UNK_014e4177 |
                              (UNK_014e4177 >= bVar101) * bVar101) == bVar101);
        auVar118[8] = -((byte)((UNK_014e4178 < bVar80) * UNK_014e4178 |
                              (UNK_014e4178 >= bVar80) * bVar80) == bVar80);
        auVar118[9] = -((byte)((UNK_014e4179 < bVar81) * UNK_014e4179 |
                              (UNK_014e4179 >= bVar81) * bVar81) == bVar81);
        auVar118[10] = -((byte)((UNK_014e417a < bVar83) * UNK_014e417a |
                               (UNK_014e417a >= bVar83) * bVar83) == bVar83);
        auVar118[0xb] =
             -((byte)((UNK_014e417b < bVar85) * UNK_014e417b | (UNK_014e417b >= bVar85) * bVar85) ==
              bVar85);
        auVar118[0xc] =
             -((byte)((UNK_014e417c < bVar87) * UNK_014e417c | (UNK_014e417c >= bVar87) * bVar87) ==
              bVar87);
        auVar118[0xd] =
             -((byte)((UNK_014e417d < bVar89) * UNK_014e417d | (UNK_014e417d >= bVar89) * bVar89) ==
              bVar89);
        auVar118[0xe] =
             -((byte)((UNK_014e417e < bVar91) * UNK_014e417e | (UNK_014e417e >= bVar91) * bVar91) ==
              bVar91);
        auVar118[0xf] =
             -((byte)((UNK_014e417f < bVar93) * UNK_014e417f | (UNK_014e417f >= bVar93) * bVar93) ==
              bVar93);
        auVar95[0] = -((byte)((DAT_014e4170 < bVar102) * DAT_014e4170 |
                             (DAT_014e4170 >= bVar102) * bVar102) == bVar102);
        auVar95[1] = -((byte)((UNK_014e4171 < bVar103) * UNK_014e4171 |
                             (UNK_014e4171 >= bVar103) * bVar103) == bVar103);
        auVar95[2] = -((byte)((UNK_014e4172 < bVar104) * UNK_014e4172 |
                             (UNK_014e4172 >= bVar104) * bVar104) == bVar104);
        auVar95[3] = -((byte)((UNK_014e4173 < bVar105) * UNK_014e4173 |
                             (UNK_014e4173 >= bVar105) * bVar105) == bVar105);
        auVar95[4] = -((byte)((UNK_014e4174 < bVar106) * UNK_014e4174 |
                             (UNK_014e4174 >= bVar106) * bVar106) == bVar106);
        auVar95[5] = -((byte)((UNK_014e4175 < bVar107) * UNK_014e4175 |
                             (UNK_014e4175 >= bVar107) * bVar107) == bVar107);
        auVar95[6] = -((byte)((UNK_014e4176 < bVar108) * UNK_014e4176 |
                             (UNK_014e4176 >= bVar108) * bVar108) == bVar108);
        auVar95[7] = -((byte)((UNK_014e4177 < bVar109) * UNK_014e4177 |
                             (UNK_014e4177 >= bVar109) * bVar109) == bVar109);
        auVar95[8] = -((byte)((UNK_014e4178 < bVar110) * UNK_014e4178 |
                             (UNK_014e4178 >= bVar110) * bVar110) == bVar110);
        auVar95[9] = -((byte)((UNK_014e4179 < bVar111) * UNK_014e4179 |
                             (UNK_014e4179 >= bVar111) * bVar111) == bVar111);
        auVar95[10] = -((byte)((UNK_014e417a < bVar112) * UNK_014e417a |
                              (UNK_014e417a >= bVar112) * bVar112) == bVar112);
        auVar95[0xb] = -((byte)((UNK_014e417b < bVar113) * UNK_014e417b |
                               (UNK_014e417b >= bVar113) * bVar113) == bVar113);
        auVar95[0xc] = -((byte)((UNK_014e417c < bVar114) * UNK_014e417c |
                               (UNK_014e417c >= bVar114) * bVar114) == bVar114);
        auVar95[0xd] = -((byte)((UNK_014e417d < bVar115) * UNK_014e417d |
                               (UNK_014e417d >= bVar115) * bVar115) == bVar115);
        auVar95[0xe] = -((byte)((UNK_014e417e < bVar116) * UNK_014e417e |
                               (UNK_014e417e >= bVar116) * bVar116) == bVar116);
        auVar95[0xf] = -((byte)((UNK_014e417f < bVar117) * UNK_014e417f |
                               (UNK_014e417f >= bVar117) * bVar117) == bVar117);
        auVar118 = auVar118 & _DAT_014ead50;
        auVar95 = auVar95 & _DAT_014ead50;
        pcVar46 = *pauVar61 + (long)*pauVar62;
        *pcVar46 = auVar118[0] + *pcVar4;
        pcVar46[1] = auVar118[1] + cVar5;
        pcVar46[2] = auVar118[2] + cVar82;
        pcVar46[3] = auVar118[3] + cVar84;
        pcVar46[4] = auVar118[4] + cVar86;
        pcVar46[5] = auVar118[5] + cVar88;
        pcVar46[6] = auVar118[6] + cVar90;
        pcVar46[7] = auVar118[7] + cVar92;
        pcVar46[8] = auVar118[8] + cVar13;
        pcVar46[9] = auVar118[9] + cVar14;
        pcVar46[10] = auVar118[10] + cVar15;
        pcVar46[0xb] = auVar118[0xb] + cVar16;
        pcVar46[0xc] = auVar118[0xc] + cVar17;
        pcVar46[0xd] = auVar118[0xd] + cVar18;
        pcVar46[0xe] = auVar118[0xe] + cVar19;
        pcVar46[0xf] = auVar118[0xf] + cVar20;
        pcVar46 = *pauVar61 + (long)pauVar62[1];
        *pcVar46 = auVar95[0] + cVar21;
        pcVar46[1] = auVar95[1] + cVar22;
        pcVar46[2] = auVar95[2] + cVar23;
        pcVar46[3] = auVar95[3] + cVar24;
        pcVar46[4] = auVar95[4] + cVar25;
        pcVar46[5] = auVar95[5] + cVar26;
        pcVar46[6] = auVar95[6] + cVar27;
        pcVar46[7] = auVar95[7] + cVar28;
        pcVar46[8] = auVar95[8] + cVar29;
        pcVar46[9] = auVar95[9] + cVar30;
        pcVar46[10] = auVar95[10] + cVar31;
        pcVar46[0xb] = auVar95[0xb] + cVar32;
        pcVar46[0xc] = auVar95[0xc] + cVar33;
        pcVar46[0xd] = auVar95[0xd] + cVar34;
        pcVar46[0xe] = auVar95[0xe] + cVar35;
        pcVar46[0xf] = auVar95[0xf] + cVar36;
        pauVar61 = pauVar61 + 2;
      } while (pauVar43 != pauVar61);
      in_XMM2 = _DAT_014ead50;
      if (pauVar39 == pauVar43) goto LAB_0cc2999d;
      if (((ulong)pauVar39 & 0x18) == 0) {
        pauVar61 = (undefined1 (*) [16])(*pauVar62 + (long)*pauVar43);
        goto LAB_0cc29970;
      }
    }
    pauVar58 = (undefined1 (*) [16])((ulong)pauVar39 & 0xfffffffffffffff8);
    pauVar61 = (undefined1 (*) [16])(*pauVar62 + (long)*pauVar58);
    do {
      uVar47 = *(undefined8 *)(*pauVar43 + (long)*pauVar62);
      bVar80 = (char)uVar47 + DAT_014e9110;
      cVar82 = (char)((ulong)uVar47 >> 8);
      bVar81 = cVar82 + DAT_014e9110._1_1_;
      cVar84 = (char)((ulong)uVar47 >> 0x10);
      bVar83 = cVar84 + DAT_014e9110._2_1_;
      cVar86 = (char)((ulong)uVar47 >> 0x18);
      bVar85 = cVar86 + DAT_014e9110._3_1_;
      cVar88 = (char)((ulong)uVar47 >> 0x20);
      bVar87 = cVar88 + DAT_014e9110._4_1_;
      cVar90 = (char)((ulong)uVar47 >> 0x28);
      bVar89 = cVar90 + DAT_014e9110._5_1_;
      cVar92 = (char)((ulong)uVar47 >> 0x30);
      cVar5 = (char)((ulong)uVar47 >> 0x38);
      bVar91 = cVar92 + DAT_014e9110._6_1_;
      bVar93 = cVar5 + DAT_014e9110._7_1_;
      bVar50 = DAT_014e9110._8_1_;
      bVar55 = DAT_014e9110._9_1_;
      bVar96 = DAT_014e9110._10_1_;
      bVar97 = DAT_014e9110._11_1_;
      bVar98 = DAT_014e9110._12_1_;
      bVar99 = DAT_014e9110._13_1_;
      bVar100 = DAT_014e9110._14_1_;
      bVar101 = DAT_014e9110._15_1_;
      auVar94[0] = -((byte)((bVar80 < DAT_014e8cb0) * DAT_014e8cb0 |
                           (bVar80 >= DAT_014e8cb0) * bVar80) == bVar80);
      auVar94[1] = -((byte)((bVar81 < UNK_014e8cb1) * UNK_014e8cb1 |
                           (bVar81 >= UNK_014e8cb1) * bVar81) == bVar81);
      auVar94[2] = -((byte)((bVar83 < UNK_014e8cb2) * UNK_014e8cb2 |
                           (bVar83 >= UNK_014e8cb2) * bVar83) == bVar83);
      auVar94[3] = -((byte)((bVar85 < UNK_014e8cb3) * UNK_014e8cb3 |
                           (bVar85 >= UNK_014e8cb3) * bVar85) == bVar85);
      auVar94[4] = -((byte)((bVar87 < UNK_014e8cb4) * UNK_014e8cb4 |
                           (bVar87 >= UNK_014e8cb4) * bVar87) == bVar87);
      auVar94[5] = -((byte)((bVar89 < UNK_014e8cb5) * UNK_014e8cb5 |
                           (bVar89 >= UNK_014e8cb5) * bVar89) == bVar89);
      auVar94[6] = -((byte)((bVar91 < UNK_014e8cb6) * UNK_014e8cb6 |
                           (bVar91 >= UNK_014e8cb6) * bVar91) == bVar91);
      auVar94[7] = -((byte)((bVar93 < UNK_014e8cb7) * UNK_014e8cb7 |
                           (bVar93 >= UNK_014e8cb7) * bVar93) == bVar93);
      auVar94[8] = -((byte)((bVar50 < UNK_014e8cb8) * UNK_014e8cb8 |
                           (bVar50 >= UNK_014e8cb8) * bVar50) == bVar50);
      auVar94[9] = -((byte)((bVar55 < UNK_014e8cb9) * UNK_014e8cb9 |
                           (bVar55 >= UNK_014e8cb9) * bVar55) == bVar55);
      auVar94[10] = -((byte)((bVar96 < UNK_014e8cba) * UNK_014e8cba |
                            (bVar96 >= UNK_014e8cba) * bVar96) == bVar96);
      auVar94[0xb] = -((byte)((bVar97 < UNK_014e8cbb) * UNK_014e8cbb |
                             (bVar97 >= UNK_014e8cbb) * bVar97) == bVar97);
      auVar94[0xc] = -((byte)((bVar98 < UNK_014e8cbc) * UNK_014e8cbc |
                             (bVar98 >= UNK_014e8cbc) * bVar98) == bVar98);
      auVar94[0xd] = -((byte)((bVar99 < UNK_014e8cbd) * UNK_014e8cbd |
                             (bVar99 >= UNK_014e8cbd) * bVar99) == bVar99);
      auVar94[0xe] = -((byte)((bVar100 < UNK_014e8cbe) * UNK_014e8cbe |
                             (bVar100 >= UNK_014e8cbe) * bVar100) == bVar100);
      auVar94[0xf] = -((byte)((bVar101 < UNK_014e8cbf) * UNK_014e8cbf |
                             (bVar101 >= UNK_014e8cbf) * bVar101) == bVar101);
      auVar95 = ~auVar94 & _DAT_014ea360;
      *(ulong *)(*pauVar43 + (long)*pauVar62) =
           CONCAT17(auVar95[7] + cVar5,
                    CONCAT16(auVar95[6] + cVar92,
                             CONCAT15(auVar95[5] + cVar90,
                                      CONCAT14(auVar95[4] + cVar88,
                                               CONCAT13(auVar95[3] + cVar86,
                                                        CONCAT12(auVar95[2] + cVar84,
                                                                 CONCAT11(auVar95[1] + cVar82,
                                                                          auVar95[0] + (char)uVar47)
                                                                ))))));
      pauVar43 = (undefined1 (*) [16])(*pauVar43 + 8);
    } while (pauVar58 != pauVar43);
    in_XMM2 = _DAT_014ea360;
    if (pauVar39 == pauVar58) goto LAB_0cc2999d;
  }
LAB_0cc29970:
  do {
    cVar5 = (*pauVar61)[0];
    cVar82 = cVar5 + ' ';
    if (0x19 < (byte)(cVar5 + 0xbfU)) {
      cVar82 = cVar5;
    }
    (*pauVar61)[0] = cVar82;
    pauVar61 = (undefined1 (*) [16])(*pauVar61 + 1);
  } while (pauVar61 != (undefined1 (*) [16])(*pauVar39 + (long)*pauVar62));
LAB_0cc2999d:
  if ((param_1[5][0] & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)param_1[6],*(ulong *)param_1[5] & 0xfffffffffffffffe);
  }
  *(undefined1 (**) [16])param_1[6] = pauStack_148;
  *(undefined1 (**) [16])param_1[5] = uStack_158;
  *(undefined1 (**) [16])(param_1[5] + 8) = pauStack_150;
  param_1[0xe][0] = param_3[1][8];
  if (param_3[3][8] == '\x01') {
    if ((param_1[0xc][8] & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(param_1[0xd] + 8),
                         *(ulong *)(param_1[0xc] + 8) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(param_1[0xd] + 8) = *(undefined8 *)param_3[3];
    uVar47 = *(undefined8 *)(param_3[2] + 8);
    *(undefined8 *)(param_1[0xc] + 8) = *(undefined8 *)param_3[2];
    *(undefined8 *)param_1[0xd] = uVar47;
    *(undefined2 *)param_3[2] = 0;
  }
  pauStack_c0 = param_1 + 0xb;
  param_1[0xe][1] = param_3[4][0];
  unaff_R15 = param_1;
  for (puVar45 = *(undefined8 **)(param_3[5] + 8); puVar45 != (undefined8 *)0x0;
      puVar45 = (undefined8 *)*puVar45) {
    pbVar1 = (byte *)(puVar45 + 2);
    uStack_158 = (undefined1 (*) [16])0x0;
    pauStack_150 = (undefined1 (*) [16])0x0;
    pauStack_148 = (undefined1 (*) [16])0x0;
    uStack_140._0_1_ = 1;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if ((byte *)&uStack_158 != pbVar1) {
      if ((*pbVar1 & 1) == 0) {
        pauStack_148 = (undefined1 (*) [16])puVar45[4];
        uStack_158 = *(undefined1 (**) [16])pbVar1;
        pauStack_150 = (undefined1 (*) [16])puVar45[3];
      }
      else {
        func_0x04885070(&uStack_158,puVar45[4],puVar45[3]);
      }
    }
    uStack_140 = CONCAT71(uStack_140._1_7_,8);
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined **)*pauVar39 = &UNK_0f47e350;
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined8 *)(pauVar39[1] + 1) = 0;
    *(undefined8 *)(pauVar39[1] + 9) = 0;
    if (pauStack_138 != (undefined1 (*) [16])0x0) {
      lVar41 = *(long *)pauStack_138;
      pauStack_138 = pauVar39;
      (**(code **)(lVar41 + 8))();
      pauVar39 = pauStack_138;
    }
    pauStack_138 = pauVar39;
    pauStack_1a0 = (undefined1 (*) [16])puVar45[5];
    pauStack_160 = (undefined1 (*) [16])puVar45[6];
    if (pauStack_1a0 != pauStack_160) {
      do {
        pauVar43 = pauStack_138;
        plVar40 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar40 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        if (((*pauStack_1a0)[0] & 1) == 0) {
          lStack_168 = *(long *)pauStack_1a0[1];
          plStack_178 = *(long **)*pauStack_1a0;
          pauStack_170 = *(undefined1 (**) [16])(*pauStack_1a0 + 8);
        }
        else {
          FUN_0412e5e0(&plStack_178,*(undefined8 *)pauStack_1a0[1],
                       *(undefined8 *)(*pauStack_1a0 + 8));
        }
        *plVar40 = (long)&UNK_0f47e5e8;
        plVar40[1] = (long)plStack_178;
        plVar40[2] = (long)pauStack_170;
        plVar40[3] = lStack_168;
        uVar37 = (**(code **)(*plVar40 + 0x30))(plVar40);
        pauVar43[2][0] = uVar37;
        pauVar62 = *(undefined1 (**) [16])pauVar43[1];
        pauVar61 = *(undefined1 (**) [16])(pauVar43[1] + 8);
        if (pauVar62 < pauVar61) {
          *(long **)*pauVar62 = plVar40;
          unaff_R15 = (undefined1 (*) [16])(*pauVar62 + 8);
        }
        else {
          puVar42 = *(undefined8 **)(*pauVar43 + 8);
          pauVar62 = (undefined1 (*) [16])((long)pauVar62 - (long)puVar42);
          pauVar39 = (undefined1 (*) [16])((long)pauVar62 >> 3);
          puVar63 = *pauVar39 + 1;
          if ((undefined *)0x1fffffffffffffff < puVar63) goto LAB_0cc2d394;
          pauVar61 = (undefined1 (*) [16])((long)pauVar61 - (long)puVar42);
          puVar56 = (undefined *)((long)pauVar61 >> 2);
          if ((undefined *)((long)pauVar61 >> 2) <= puVar63) {
            puVar56 = puVar63;
          }
          if ((undefined1 (*) [16])0x7ffffffffffffff7 < pauVar61) {
            puVar56 = (undefined *)0x1fffffffffffffff;
          }
          if ((undefined *)0x1fffffffffffffff < puVar56) goto LAB_0cc2d399;
          auStack_d1._1_8_ = puVar42;
          lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar56 * 8);
          if (lVar41 == 0) {
            func_0x0eec74c0((long)puVar56 * 8,0);
          }
          uVar47 = auStack_d1._1_8_;
          *(long **)(*pauVar62 + lVar41) = plVar40;
          unaff_R15 = (undefined1 (*) [16])(*pauVar62 + lVar41 + 8);
          puVar63 = (undefined *)((long)pauVar62 + (long)pauVar39 * -8 + lVar41);
          func_0x0eee2f00(puVar63,auStack_d1._1_8_,pauVar62);
          *(undefined **)(*pauVar43 + 8) = puVar63;
          *(undefined1 (**) [16])pauVar43[1] = unaff_R15;
          *(long *)(pauVar43[1] + 8) = lVar41 + (long)puVar56 * 8;
          if ((undefined8 *)uVar47 != (undefined8 *)0x0) {
            thunk_FUN_0ee326a0(uVar47,pauVar61);
          }
        }
        *(undefined1 (**) [16])pauVar43[1] = unaff_R15;
        pauStack_1a0 = (undefined1 (*) [16])(pauStack_1a0[1] + 8);
      } while (pauStack_1a0 != pauStack_160);
    }
    pauVar39 = pauStack_138;
    puVar42 = *(undefined8 **)(param_1[0xb] + 8);
    if (puVar42 < *(undefined8 **)param_1[0xc]) {
      puVar42[2] = pauStack_148;
      *puVar42 = uStack_158;
      puVar42[1] = pauStack_150;
      uStack_158 = (undefined1 (*) [16])0x0;
      pauStack_150 = (undefined1 (*) [16])0x0;
      pauStack_148 = (undefined1 (*) [16])0x0;
      *(undefined1 *)(puVar42 + 3) = (undefined1)uStack_140;
      pauStack_138 = (undefined1 (*) [16])0x0;
      puVar42[4] = pauVar39;
      puVar42 = puVar42 + 5;
    }
    else {
      puVar42 = (undefined8 *)func_0x0cc8e1f0(pauStack_c0,&uStack_158);
    }
    pauVar39 = pauStack_138;
    *(undefined8 **)(param_1[0xb] + 8) = puVar42;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if (pauVar39 != (undefined1 (*) [16])0x0) {
      (**(code **)(*(long *)*pauVar39 + 8))();
    }
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(pauStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
  }
  pauVar43 = unaff_R15;
  for (puVar45 = *(undefined8 **)param_3[8]; puVar45 != (undefined8 *)0x0;
      puVar45 = (undefined8 *)*puVar45) {
    pbVar1 = (byte *)(puVar45 + 2);
    uStack_158 = (undefined1 (*) [16])0x0;
    pauStack_150 = (undefined1 (*) [16])0x0;
    pauStack_148 = (undefined1 (*) [16])0x0;
    uStack_140._1_7_ = (undefined7)((ulong)uStack_140 >> 8);
    uStack_140._0_1_ = 1;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if ((byte *)&uStack_158 != pbVar1) {
      if ((*pbVar1 & 1) == 0) {
        pauStack_148 = (undefined1 (*) [16])puVar45[4];
        uStack_158 = *(undefined1 (**) [16])pbVar1;
        pauStack_150 = (undefined1 (*) [16])puVar45[3];
      }
      else {
        func_0x04885070(&uStack_158,puVar45[4],puVar45[3]);
      }
    }
    uStack_140 = CONCAT71(uStack_140._1_7_,1);
    pauVar43 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar43 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined **)*pauVar43 = &UNK_0f47e350;
    *(undefined8 *)(*pauVar43 + 8) = 0;
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)(pauVar43[1] + 1) = 0;
    *(undefined8 *)(pauVar43[1] + 9) = 0;
    pauVar39 = pauVar43;
    if (pauStack_138 != (undefined1 (*) [16])0x0) {
      lVar41 = *(long *)pauStack_138;
      pauStack_138 = pauVar43;
      (**(code **)(lVar41 + 8))();
      pauVar39 = pauStack_138;
    }
    pauStack_138 = pauVar39;
    uVar57 = puVar45[6];
    uStack_ac = (uint)uVar57 & 0x3f;
    puStack_b8 = puVar45;
    if (0x3f < uVar57 || (uVar57 & 0x3f) != 0) {
      pauVar43 = (undefined1 (*) [16])puVar45[5];
      puVar63 = *pauVar43;
      uVar60 = 0;
      do {
        pauVar58 = pauStack_138;
        pauVar61 = (undefined1 (*) [16])0x0;
        plVar40 = (long *)0x1fffffffffffffff;
        pauVar39 = *(undefined1 (**) [16])*pauVar43;
        puVar45 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (puVar45 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        *puVar45 = &UNK_0f47e040;
        *(bool *)(puVar45 + 1) = ((ulong)pauVar39 >> (uVar60 & 0x3f) & 1) != 0;
        uVar37 = func_0x0d6b9d70(puVar45);
        pauVar58[2][0] = uVar37;
        puVar42 = *(undefined8 **)pauVar58[1];
        if (puVar42 < *(undefined8 **)(pauVar58[1] + 8)) {
          *puVar42 = puVar45;
          puVar42 = puVar42 + 1;
        }
        else {
          puVar6 = *(undefined8 **)(*pauVar58 + 8);
          pauVar62 = (undefined1 (*) [16])((long)puVar42 - (long)puVar6);
          unaff_R15 = (undefined1 (*) [16])((long)pauVar62 >> 3);
          pauVar2 = (undefined1 (*) [16])(*unaff_R15 + 1);
          pauStack_160 = pauVar43;
          if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar2) goto LAB_0cc2d3a8;
          uVar49 = (long)*(undefined8 **)(pauVar58[1] + 8) - (long)puVar6;
          pauVar61 = (undefined1 (*) [16])((long)uVar49 >> 2);
          if ((undefined1 (*) [16])((long)uVar49 >> 2) <= pauVar2) {
            pauVar61 = pauVar2;
          }
          if (0x7ffffffffffffff7 < uVar49) {
            pauVar61 = (undefined1 (*) [16])0x1fffffffffffffff;
          }
          if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar61) goto LAB_0cc2d3ad;
          auStack_d1._1_8_ = puVar6;
          lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauVar61 * 8);
          if (lVar41 == 0) {
            func_0x0eec74c0((long)pauVar61 * 8,0);
          }
          uVar47 = auStack_d1._1_8_;
          *(undefined8 **)(*pauVar62 + lVar41) = puVar45;
          puVar42 = (undefined8 *)(*pauVar62 + lVar41 + 8);
          puVar56 = (undefined *)((long)pauVar62 + (long)unaff_R15 * -8 + lVar41);
          func_0x0eee2f00(puVar56,auStack_d1._1_8_,pauVar62);
          *(undefined **)(*pauVar58 + 8) = puVar56;
          *(undefined8 **)pauVar58[1] = puVar42;
          *(long *)(pauVar58[1] + 8) = lVar41 + (long)pauVar61 * 8;
          pauVar43 = pauStack_160;
          if ((undefined8 *)uVar47 != (undefined8 *)0x0) {
            thunk_FUN_0ee326a0(uVar47,uVar49);
            pauVar43 = pauStack_160;
          }
        }
        *(undefined8 **)pauVar58[1] = puVar42;
        iVar38 = (int)uVar60;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + (ulong)(iVar38 == 0x3f) * 8);
        uVar60 = (ulong)(iVar38 + 1);
        if (iVar38 == 0x3f) {
          uVar60 = 0;
        }
      } while ((pauVar43 != (undefined1 (*) [16])(puVar63 + (uVar57 >> 6) * 8)) ||
              ((uint)uVar60 != uStack_ac));
    }
    pauVar39 = pauStack_138;
    puVar42 = *(undefined8 **)(param_1[0xb] + 8);
    if (puVar42 < *(undefined8 **)param_1[0xc]) {
      puVar42[2] = pauStack_148;
      *puVar42 = uStack_158;
      puVar42[1] = pauStack_150;
      uStack_158 = (undefined1 (*) [16])0x0;
      pauStack_150 = (undefined1 (*) [16])0x0;
      pauStack_148 = (undefined1 (*) [16])0x0;
      *(undefined1 *)(puVar42 + 3) = (undefined1)uStack_140;
      pauStack_138 = (undefined1 (*) [16])0x0;
      puVar42[4] = pauVar39;
      puVar42 = puVar42 + 5;
    }
    else {
      puVar42 = (undefined8 *)func_0x0cc8e1f0(pauStack_c0,&uStack_158);
    }
    puVar45 = puStack_b8;
    pauVar39 = pauStack_138;
    *(undefined8 **)(param_1[0xb] + 8) = puVar42;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if (pauVar39 != (undefined1 (*) [16])0x0) {
      (**(code **)(*(long *)*pauVar39 + 8))();
    }
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(pauStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
  }
  puVar45 = *(undefined8 **)(param_3[10] + 8);
  unaff_R15 = pauVar43;
  while (puVar45 != (undefined8 *)0x0) {
    pbVar1 = (byte *)(puVar45 + 2);
    uStack_158 = (undefined1 (*) [16])0x0;
    pauStack_150 = (undefined1 (*) [16])0x0;
    pauStack_148 = (undefined1 (*) [16])0x0;
    uStack_140._1_7_ = (undefined7)((ulong)uStack_140 >> 8);
    uStack_140._0_1_ = 1;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if ((byte *)&uStack_158 != pbVar1) {
      if ((*pbVar1 & 1) == 0) {
        pauStack_148 = (undefined1 (*) [16])puVar45[4];
        uStack_158 = *(undefined1 (**) [16])pbVar1;
        pauStack_150 = (undefined1 (*) [16])puVar45[3];
      }
      else {
        func_0x04885070(&uStack_158,puVar45[4],puVar45[3]);
      }
    }
    uStack_140 = CONCAT71(uStack_140._1_7_,3);
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined **)*pauVar39 = &UNK_0f47e350;
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined8 *)(pauVar39[1] + 1) = 0;
    *(undefined8 *)(pauVar39[1] + 9) = 0;
    if (pauStack_138 != (undefined1 (*) [16])0x0) {
      lVar41 = *(long *)pauStack_138;
      pauStack_138 = pauVar39;
      (**(code **)(lVar41 + 8))();
      pauVar39 = pauStack_138;
    }
    pauStack_138 = pauVar39;
    pauVar58 = (undefined1 (*) [16])puVar45[6];
    auStack_d1._1_8_ = puVar45;
    for (pauVar43 = (undefined1 (*) [16])puVar45[5]; pauVar43 != pauVar58;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 4)) {
      while( true ) {
        pauVar2 = pauStack_138;
        plVar40 = (long *)0x1fffffffffffffff;
        pauVar61 = (undefined1 (*) [16])&UNK_0f47e2e0;
        uVar51 = *(uint *)*pauVar43;
        pauVar39 = (undefined1 (*) [16])(ulong)uVar51;
        puVar45 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (puVar45 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        *puVar45 = &UNK_0f47e2e0;
        *(uint *)(puVar45 + 1) = uVar51;
        uVar37 = func_0x0d6c0310(puVar45);
        pauVar2[2][0] = uVar37;
        puVar42 = *(undefined8 **)pauVar2[1];
        if (puVar42 < *(undefined8 **)(pauVar2[1] + 8)) break;
        pauVar7 = *(undefined1 (**) [16])(*pauVar2 + 8);
        pauVar62 = (undefined1 (*) [16])((long)puVar42 - (long)pauVar7);
        unaff_R15 = (undefined1 (*) [16])((long)pauVar62 >> 3);
        pauVar3 = (undefined1 (*) [16])(*unaff_R15 + 1);
        if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar3) goto LAB_0cc2d39e;
        uVar57 = (long)*(undefined8 **)(pauVar2[1] + 8) - (long)pauVar7;
        pauVar61 = (undefined1 (*) [16])((long)uVar57 >> 2);
        if ((undefined1 (*) [16])((long)uVar57 >> 2) <= pauVar3) {
          pauVar61 = pauVar3;
        }
        if (0x7ffffffffffffff7 < uVar57) {
          pauVar61 = (undefined1 (*) [16])0x1fffffffffffffff;
        }
        if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar61) goto LAB_0cc2d3a3;
        pauStack_160 = pauVar7;
        lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauVar61 * 8);
        if (lVar41 == 0) {
          func_0x0eec74c0((long)pauVar61 * 8,0);
        }
        pauVar39 = pauStack_160;
        *(undefined8 **)(*pauVar62 + lVar41) = puVar45;
        puVar63 = (undefined *)((long)pauVar62 + (long)unaff_R15 * -8 + lVar41);
        func_0x0eee2f00(puVar63,pauStack_160,pauVar62);
        *(undefined **)(*pauVar2 + 8) = puVar63;
        *(undefined1 **)pauVar2[1] = *pauVar62 + lVar41 + 8;
        *(long *)(pauVar2[1] + 8) = lVar41 + (long)pauVar61 * 8;
        if (pauVar39 != (undefined1 (*) [16])0x0) {
          thunk_FUN_0ee326a0(pauVar39,uVar57);
        }
        *(undefined1 **)pauVar2[1] = *pauVar62 + lVar41 + 8;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 4);
        if (pauVar43 == pauVar58) goto LAB_0cc2a2d3;
      }
      *puVar42 = puVar45;
      *(undefined8 **)pauVar2[1] = puVar42 + 1;
    }
LAB_0cc2a2d3:
    pauVar39 = pauStack_138;
    puVar45 = *(undefined8 **)(param_1[0xb] + 8);
    if (puVar45 < *(undefined8 **)param_1[0xc]) {
      puVar45[2] = pauStack_148;
      *puVar45 = uStack_158;
      puVar45[1] = pauStack_150;
      uStack_158 = (undefined1 (*) [16])0x0;
      pauStack_150 = (undefined1 (*) [16])0x0;
      pauStack_148 = (undefined1 (*) [16])0x0;
      *(undefined1 *)(puVar45 + 3) = (undefined1)uStack_140;
      pauStack_138 = (undefined1 (*) [16])0x0;
      puVar45[4] = pauVar39;
      puVar45 = puVar45 + 5;
    }
    else {
      puVar45 = (undefined8 *)func_0x0cc8e1f0(pauStack_c0,&uStack_158);
    }
    uVar47 = auStack_d1._1_8_;
    pauVar39 = pauStack_138;
    *(undefined8 **)(param_1[0xb] + 8) = puVar45;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if (pauVar39 != (undefined1 (*) [16])0x0) {
      (**(code **)(*(long *)*pauVar39 + 8))();
    }
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(pauStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
    unaff_R15 = pauVar43;
    puVar45 = *(undefined8 **)uVar47;
  }
  for (pauVar61 = *(undefined1 (**) [16])param_3[0xd]; pauVar61 != (undefined1 (*) [16])0x0;
      pauVar61 = *(undefined1 (**) [16])*pauVar61) {
    pauVar39 = pauVar61 + 1;
    uStack_158 = (undefined1 (*) [16])0x0;
    pauStack_150 = (undefined1 (*) [16])0x0;
    pauStack_148 = (undefined1 (*) [16])0x0;
    uStack_140._0_1_ = 1;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if ((undefined1 (*) [16])&uStack_158 != pauVar39) {
      if (((*pauVar39)[0] & 1) == 0) {
        pauStack_148 = *(undefined1 (**) [16])pauVar61[2];
        uStack_158 = *(undefined1 (**) [16])*pauVar39;
        pauStack_150 = *(undefined1 (**) [16])(pauVar61[1] + 8);
      }
      else {
        func_0x04885070(&uStack_158,*(undefined8 *)pauVar61[2],*(undefined8 *)(pauVar61[1] + 8));
      }
    }
    uStack_140 = CONCAT71(uStack_140._1_7_,3);
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined **)*pauVar39 = &UNK_0f47e350;
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined8 *)(pauVar39[1] + 1) = 0;
    *(undefined8 *)(pauVar39[1] + 9) = 0;
    if (pauStack_138 != (undefined1 (*) [16])0x0) {
      lVar41 = *(long *)pauStack_138;
      pauStack_138 = pauVar39;
      (**(code **)(lVar41 + 8))();
      pauVar39 = pauStack_138;
    }
    pauStack_138 = pauVar39;
    unaff_R15 = (undefined1 (*) [16])(ulong)*(uint *)(pauVar61[2] + 8);
    pauStack_160 = pauVar61;
    if ((int)*(uint *)(pauVar61[2] + 8) <= *(int *)(pauVar61[2] + 0xc)) {
      do {
        pauVar39 = pauStack_138;
        plVar40 = (long *)0x1fffffffffffffff;
        puVar45 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (puVar45 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        *puVar45 = &UNK_0f47e2e0;
        iVar38 = (int)unaff_R15;
        *(int *)(puVar45 + 1) = iVar38;
        uVar37 = func_0x0d6c0310(puVar45);
        pauVar39[2][0] = uVar37;
        puVar42 = *(undefined8 **)pauVar39[1];
        if (puVar42 < *(undefined8 **)(pauVar39[1] + 8)) {
          *puVar42 = puVar45;
          puVar42 = puVar42 + 1;
        }
        else {
          lVar41 = *(long *)(*pauVar39 + 8);
          pauVar62 = (undefined1 (*) [16])((long)puVar42 - lVar41);
          unaff_R15 = (undefined1 (*) [16])((long)pauVar62 >> 3);
          pauVar43 = (undefined1 (*) [16])(*unaff_R15 + 1);
          if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar43) goto LAB_0cc2d3b2;
          uVar57 = (long)*(undefined8 **)(pauVar39[1] + 8) - lVar41;
          pauVar61 = (undefined1 (*) [16])((long)uVar57 >> 2);
          if ((undefined1 (*) [16])((long)uVar57 >> 2) <= pauVar43) {
            pauVar61 = pauVar43;
          }
          if (0x7ffffffffffffff7 < uVar57) {
            pauVar61 = (undefined1 (*) [16])0x1fffffffffffffff;
          }
          if ((undefined1 (*) [16])0x1fffffffffffffff < pauVar61) goto LAB_0cc2d3b7;
          lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauVar61 * 8);
          if (lVar44 == 0) {
            func_0x0eec74c0((long)pauVar61 * 8,0);
          }
          *(undefined8 **)(*pauVar62 + lVar44) = puVar45;
          puVar42 = (undefined8 *)(*pauVar62 + lVar44 + 8);
          puVar63 = (undefined *)((long)pauVar62 + (long)unaff_R15 * -8 + lVar44);
          func_0x0eee2f00(puVar63,lVar41,pauVar62);
          *(undefined **)(*pauVar39 + 8) = puVar63;
          *(undefined8 **)pauVar39[1] = puVar42;
          *(long *)(pauVar39[1] + 8) = lVar44 + (long)pauVar61 * 8;
          pauVar61 = pauStack_160;
          if (lVar41 != 0) {
            thunk_FUN_0ee326a0(lVar41,uVar57);
            pauVar61 = pauStack_160;
          }
        }
        *(undefined8 **)pauVar39[1] = puVar42;
        unaff_R15 = (undefined1 (*) [16])(ulong)(iVar38 + 1);
      } while (iVar38 < *(int *)(pauVar61[2] + 0xc));
    }
    pauVar39 = pauStack_138;
    puVar45 = *(undefined8 **)(param_1[0xb] + 8);
    if (puVar45 < *(undefined8 **)param_1[0xc]) {
      puVar45[2] = pauStack_148;
      *puVar45 = uStack_158;
      puVar45[1] = pauStack_150;
      uStack_158 = (undefined1 (*) [16])0x0;
      pauStack_150 = (undefined1 (*) [16])0x0;
      pauStack_148 = (undefined1 (*) [16])0x0;
      *(undefined1 *)(puVar45 + 3) = (undefined1)uStack_140;
      pauStack_138 = (undefined1 (*) [16])0x0;
      puVar45[4] = pauVar39;
      puVar45 = puVar45 + 5;
    }
    else {
      puVar45 = (undefined8 *)func_0x0cc8e1f0(pauStack_c0,&uStack_158);
    }
    pauVar39 = pauStack_138;
    *(undefined8 **)(param_1[0xb] + 8) = puVar45;
    pauStack_138 = (undefined1 (*) [16])0x0;
    if (pauVar39 != (undefined1 (*) [16])0x0) {
      (**(code **)(*(long *)*pauVar39 + 8))();
    }
    if (((ulong)uStack_158 & 1) != 0) {
      thunk_FUN_0ee326a0(pauStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
    }
  }
  lVar41 = *(long *)param_1[0xb];
  lVar44 = *(long *)(param_1[0xb] + 8);
  uVar57 = (lVar44 - lVar41 >> 3) * -0x3333333333333333;
  lVar54 = 0x3f;
  if (uVar57 != 0) {
    for (; uVar57 >> lVar54 == 0; lVar54 = lVar54 + -1) {
    }
  }
  uVar51 = 0;
  if (lVar44 != lVar41) {
    uVar51 = ((uint)lVar54 ^ 0x3f) * 2 ^ 0x7e;
  }
  func_0x0cc8e3f0(lVar41,lVar44,uVar51,1);
  pauStack_1a0 = (undefined1 (*) [16])(param_1[0xe] + 8);
  if (param_3[0x12][0] != '\x01') goto LAB_0cc2af9b;
  pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (pauVar39 == (undefined1 (*) [16])0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined8 *)(*pauVar39 + 8) = 0;
  *(undefined8 *)pauVar39[1] = 0;
  *(undefined **)*pauVar39 = &UNK_0f3f96e0;
  plStack_178 = (long *)(pauVar39[1] + 8);
  *(undefined **)(pauVar39[1] + 8) = &UNK_0f3f51d8;
  *(undefined8 *)(pauVar39[2] + 8) = 0;
  *(undefined8 *)pauVar39[3] = 0;
  *(undefined8 *)(pauVar39[3] + 8) = 0;
  bVar50 = param_3[0xf][8];
  pauVar39[2][0] = bVar50 & 1;
  pauVar39[2][1] = bVar50 >> 2 & 1;
  pauVar39[2][2] = bVar50 >> 1 & 1;
  pauVar39[2][3] = bVar50 >> 3 & 1;
  if (param_3[0x10][0] == '\0') {
    uVar67 = 0;
  }
  else {
    uVar67 = *(undefined4 *)(param_3[0xf] + 0xc);
  }
  *(undefined4 *)(pauVar39[2] + 4) = uVar67;
  pauStack_170 = pauVar39;
  func_0x05476090(pauVar39[2] + 8);
  uVar47 = *(undefined8 *)param_3[0x11];
  *(undefined8 *)(pauVar39[2] + 8) = *(undefined8 *)(param_3[0x10] + 8);
  *(undefined8 *)pauVar39[3] = uVar47;
  *(undefined8 *)(pauVar39[3] + 8) = *(undefined8 *)(param_3[0x11] + 8);
  *(undefined8 *)(param_3[0x10] + 8) = 0;
  *(undefined8 *)param_3[0x11] = 0;
  *(undefined8 *)(param_3[0x11] + 8) = 0;
  if (DAT_0f6fdbd8 == '\0') goto LAB_0cc2d46c;
LAB_0cc2aa08:
  uVar57 = _DAT_0f6fdbc8;
  uVar47 = _DAT_0f6fdbd0;
  if ((DAT_0f6fdbc0 & 1) == 0) {
    uVar57 = (ulong)(DAT_0f6fdbc0 >> 1);
    uVar47 = 0xf6fdbc1;
  }
  pauVar61 = (undefined1 (*) [16])func_0x04883620(&uStack_158,uVar47,uVar57);
  pauVar62 = *(undefined1 (**) [16])param_1[0xf];
  if (pauVar62 != (undefined1 (*) [16])0x0) {
    uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555);
    uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333);
    uVar57 = ((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar57 >> 0x38 < 2) {
      pauVar39 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & (ulong)pauVar61);
    }
    else {
      pauVar39 = pauVar61;
      if (pauVar62 <= pauVar61) {
        if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
          pauVar39 = (undefined1 (*) [16])
                     (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
        }
        else {
          pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
        }
      }
    }
    plVar40 = *(long **)(*(long *)*pauStack_1a0 + (long)pauVar39 * 8);
    if ((plVar40 != (long *)0x0) && (plVar40 = (long *)*plVar40, plVar40 != (long *)0x0)) {
      bVar66 = (DAT_0f6fdbc0 & 1) != 0;
      uVar60 = (ulong)(DAT_0f6fdbc0 >> 1);
      if (bVar66) {
        uVar60 = _DAT_0f6fdbc8;
      }
      uVar47 = 0xf6fdbc1;
      if (bVar66) {
        uVar47 = _DAT_0f6fdbd0;
      }
      if ((byte)(uVar57 >> 0x38) < 2) {
        unaff_R15 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
        do {
          if ((undefined1 (*) [16])plVar40[1] == pauVar61) {
            bVar50 = *(byte *)(plVar40 + 2);
            if ((bVar50 & 1) == 0) {
              uVar57 = (ulong)(bVar50 >> 1);
            }
            else {
              uVar57 = plVar40[3];
            }
            if (uVar57 == uVar60) {
              if ((bVar50 & 1) == 0) {
                lVar41 = (long)plVar40 + 0x11;
              }
              else {
                lVar41 = plVar40[4];
              }
              iVar38 = func_0x0eee3000(lVar41,uVar47,uVar60);
              if (iVar38 == 0) goto LAB_0cc2af69;
            }
          }
          else if ((undefined1 (*) [16])((ulong)plVar40[1] & (ulong)unaff_R15) != pauVar39) break;
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
      else {
        do {
          pauVar43 = (undefined1 (*) [16])plVar40[1];
          if (pauVar43 == pauVar61) {
            bVar50 = *(byte *)(plVar40 + 2);
            if ((bVar50 & 1) == 0) {
              uVar57 = (ulong)(bVar50 >> 1);
            }
            else {
              uVar57 = plVar40[3];
            }
            if (uVar57 == uVar60) {
              if ((bVar50 & 1) == 0) {
                lVar41 = (long)plVar40 + 0x11;
              }
              else {
                lVar41 = plVar40[4];
              }
              iVar38 = func_0x0eee3000(lVar41,uVar47,uVar60);
              if (iVar38 == 0) goto LAB_0cc2af69;
            }
          }
          else {
            if (pauVar62 <= pauVar43) {
              if (((ulong)pauVar43 | (ulong)pauVar62) >> 0x20 == 0) {
                pauVar43 = (undefined1 (*) [16])
                           (((ulong)pauVar43 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
              }
              else {
                pauVar43 = (undefined1 (*) [16])((ulong)pauVar43 % (ulong)pauVar62);
              }
            }
            if (pauVar43 != pauVar39) break;
          }
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
    }
  }
  unaff_R15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (unaff_R15 == (undefined1 (*) [16])0x0) {
    func_0x0eec74c0(0x38,0);
  }
  auVar78 = in_XMM2._4_12_;
  pauStack_150 = pauStack_1a0;
  pauStack_148 = (undefined1 (*) [16])0x0;
  *(undefined8 *)*unaff_R15 = 0;
  *(undefined1 (**) [16])(*unaff_R15 + 8) = pauVar61;
  uStack_158 = unaff_R15;
  if ((DAT_0f6fdbc0 & 1) == 0) {
    *(undefined8 *)unaff_R15[2] = _DAT_0f6fdbd0;
    uVar57 = _DAT_0f6fdbc8;
    *(ulong *)unaff_R15[1] = CONCAT71(uRam000000000f6fdbc1,DAT_0f6fdbc0);
    *(ulong *)(unaff_R15[1] + 8) = uVar57;
  }
  else {
    FUN_0412e5e0(unaff_R15 + 1,_DAT_0f6fdbd0,_DAT_0f6fdbc8);
    auVar78 = in_XMM2._4_12_;
  }
  *(long **)(unaff_R15[2] + 8) = plStack_178;
  *(undefined1 (**) [16])unaff_R15[3] = pauStack_170;
  plStack_178 = (long *)0x0;
  pauStack_170 = (undefined1 (*) [16])0x0;
  pauStack_148 = (undefined1 (*) [16])CONCAT71(pauStack_148._1_7_,1);
  fVar68 = (float)(*(long *)param_1[0x10] + 1);
  if ((long)pauVar62 < 0) {
    in_XMM2._0_4_ = (float)pauVar62;
    in_XMM2._4_12_ = auVar78;
    fVar69 = *(float *)(param_1[0x10] + 8);
    if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc2ad44;
LAB_0cc2ad55:
    uVar57 = 1;
    if ((undefined1 (*) [16])0x2 < pauVar62) {
      uVar57 = (ulong)(((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) != 0);
    }
    pauVar62 = (undefined1 (*) [16])(uVar57 | (long)pauVar62 * 2);
    fVar68 = (float)ceilf(fVar68 / fVar69);
    pauVar39 = (undefined1 (*) [16])
               ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
    if (pauVar39 < pauVar62) {
      pauVar39 = pauVar62;
    }
    pauVar62 = (undefined1 (*) [16])0x2;
    if ((pauVar39 == (undefined1 (*) [16])0x1) ||
       (pauVar62 = pauVar39, ((ulong)pauVar39 & (ulong)(pauVar39[-1] + 0xf)) == 0)) {
      unaff_R15 = *(undefined1 (**) [16])param_1[0xf];
      bVar66 = pauVar62 < unaff_R15;
      if (pauVar62 <= unaff_R15) goto LAB_0cc2adf7;
LAB_0cc2adcd:
      func_0x0cba37d0(pauStack_1a0,pauVar62);
    }
    else {
      pauVar62 = (undefined1 (*) [16])func_0x0412c3f0();
      unaff_R15 = *(undefined1 (**) [16])param_1[0xf];
      bVar66 = pauVar62 < unaff_R15;
      if (unaff_R15 < pauVar62) goto LAB_0cc2adcd;
LAB_0cc2adf7:
      if (bVar66) {
        fVar68 = (float)ceilf((float)*(ulong *)param_1[0x10] / *(float *)(param_1[0x10] + 8));
        pauVar39 = (undefined1 (*) [16])
                   ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
        if ((unaff_R15 < (undefined1 (*) [16])0x3) ||
           (uVar57 = (long)unaff_R15 - ((ulong)unaff_R15 >> 1 & 0x5555555555555555),
           uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333),
           1 < (byte)(((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          pauVar39 = (undefined1 (*) [16])func_0x0412c3f0(pauVar39);
        }
        else if ((undefined1 (*) [16])0x1 < pauVar39) {
          lVar41 = 0x3f;
          if (pauVar39[-1] + 0xf != (undefined *)0x0) {
            for (; (ulong)(pauVar39[-1] + 0xf) >> lVar41 == 0; lVar41 = lVar41 + -1) {
            }
          }
          pauVar39 = (undefined1 (*) [16])(1L << (-((byte)lVar41 ^ 0x3f) & 0x3f));
        }
        if (pauVar62 <= pauVar39) {
          pauVar62 = pauVar39;
        }
        if (pauVar62 < unaff_R15) goto LAB_0cc2adcd;
      }
    }
    pauVar62 = *(undefined1 (**) [16])param_1[0xf];
    if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
      pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 & (ulong)(pauVar62[-1] + 0xf));
    }
    else {
      pauVar39 = pauVar61;
      if (pauVar62 <= pauVar61) {
        if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
          pauVar39 = (undefined1 (*) [16])
                     (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
        }
        else {
          pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
        }
      }
    }
  }
  else {
    in_XMM2._0_4_ = (float)(long)pauVar62;
    in_XMM2._4_12_ = auVar78;
    fVar69 = *(float *)(param_1[0x10] + 8);
    if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0cc2ad55;
LAB_0cc2ad44:
    in_XMM2._0_4_ = in_XMM2._0_4_ * fVar69;
    if (in_XMM2._0_4_ < fVar68) goto LAB_0cc2ad55;
  }
  lVar41 = *(long *)*pauStack_1a0;
  puVar45 = *(undefined8 **)(lVar41 + (long)pauVar39 * 8);
  if (puVar45 == (undefined8 *)0x0) {
    *(undefined8 *)*uStack_158 = *(undefined8 *)(param_1[0xf] + 8);
    *(undefined1 (**) [16])(param_1[0xf] + 8) = uStack_158;
    *(undefined1 **)(lVar41 + (long)pauVar39 * 8) = param_1[0xf] + 8;
    if (*(long *)*uStack_158 != 0) {
      pauVar39 = *(undefined1 (**) [16])(*(long *)*uStack_158 + 8);
      if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
        *(undefined1 (**) [16])(lVar41 + ((ulong)pauVar39 & (ulong)(pauVar62[-1] + 0xf)) * 8) =
             uStack_158;
      }
      else {
        if (pauVar62 <= pauVar39) {
          if (((ulong)pauVar39 | (ulong)pauVar62) >> 0x20 == 0) {
            *(undefined1 (**) [16])
             (lVar41 + (((ulong)pauVar39 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff)) * 8) =
                 uStack_158;
            goto LAB_0cc2af5e;
          }
          pauVar39 = (undefined1 (*) [16])((ulong)pauVar39 % (ulong)pauVar62);
        }
        *(undefined1 (**) [16])(lVar41 + (long)pauVar39 * 8) = uStack_158;
      }
    }
  }
  else {
    *(undefined8 *)*uStack_158 = *puVar45;
    *puVar45 = uStack_158;
  }
LAB_0cc2af5e:
  *(long *)param_1[0x10] = *(long *)param_1[0x10] + 1;
LAB_0cc2af69:
  pauVar39 = pauStack_170;
  if (pauStack_170 != (undefined1 (*) [16])0x0) {
    LOCK();
    plVar40 = (long *)(*pauStack_170 + 8);
    lVar41 = *plVar40;
    *plVar40 = *plVar40 + -1;
    UNLOCK();
    if (lVar41 == 0) {
      (**(code **)(*(long *)*pauStack_170 + 0x10))(pauStack_170);
      func_0x0412c2d0(pauVar39);
    }
  }
LAB_0cc2af9b:
  if (param_3[0x12][9] == '\x01') {
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined **)*pauVar39 = &UNK_0f3f9730;
    plStack_178 = (long *)(pauVar39[1] + 8);
    *(undefined **)(pauVar39[1] + 8) = &UNK_0f3f5218;
    bVar50 = param_3[0x12][8];
    pauVar39[2][0] = bVar50 & 1;
    pauVar39[2][1] = bVar50 >> 1 & 1;
    pauStack_170 = pauVar39;
    if ((DAT_0f6fdbf8 == '\0') && (iVar38 = func_0x04108328(&DAT_0f6fdbf8), iVar38 != 0)) {
      func_0x04160690(&DAT_0f6fdbe0,&UNK_013525f8);
      func_0x0eee2f40(&UNK_0412ed50,&DAT_0f6fdbe0,0xf53dab8);
      func_0x0410844d(&DAT_0f6fdbf8);
    }
    uVar57 = _DAT_0f6fdbe8;
    uVar47 = _DAT_0f6fdbf0;
    if ((DAT_0f6fdbe0 & 1) == 0) {
      uVar57 = (ulong)(DAT_0f6fdbe0 >> 1);
      uVar47 = 0xf6fdbe1;
    }
    pauVar61 = (undefined1 (*) [16])func_0x04883620(&uStack_158,uVar47,uVar57);
    pauVar62 = *(undefined1 (**) [16])param_1[0xf];
    if (pauVar62 != (undefined1 (*) [16])0x0) {
      uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555);
      uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333);
      uVar57 = ((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar57 >> 0x38 < 2) {
        pauVar39 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & (ulong)pauVar61);
      }
      else {
        pauVar39 = pauVar61;
        if (pauVar62 <= pauVar61) {
          if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
            pauVar39 = (undefined1 (*) [16])
                       (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
          }
          else {
            pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
          }
        }
      }
      plVar40 = *(long **)(*(long *)*pauStack_1a0 + (long)pauVar39 * 8);
      if ((plVar40 != (long *)0x0) && (plVar40 = (long *)*plVar40, plVar40 != (long *)0x0)) {
        bVar66 = (DAT_0f6fdbe0 & 1) != 0;
        uVar60 = (ulong)(DAT_0f6fdbe0 >> 1);
        if (bVar66) {
          uVar60 = _DAT_0f6fdbe8;
        }
        uVar47 = 0xf6fdbe1;
        if (bVar66) {
          uVar47 = _DAT_0f6fdbf0;
        }
        if ((byte)(uVar57 >> 0x38) < 2) {
          unaff_R15 = (undefined1 (*) [16])(pauVar62[-1] + 0xf);
          do {
            if ((undefined1 (*) [16])plVar40[1] == pauVar61) {
              bVar50 = *(byte *)(plVar40 + 2);
              if ((bVar50 & 1) == 0) {
                uVar57 = (ulong)(bVar50 >> 1);
              }
              else {
                uVar57 = plVar40[3];
              }
              if (uVar57 == uVar60) {
                if ((bVar50 & 1) == 0) {
                  lVar41 = (long)plVar40 + 0x11;
                }
                else {
                  lVar41 = plVar40[4];
                }
                iVar38 = func_0x0eee3000(lVar41,uVar47,uVar60);
                if (iVar38 == 0) goto LAB_0cc2b5e9;
              }
            }
            else if ((undefined1 (*) [16])((ulong)plVar40[1] & (ulong)unaff_R15) != pauVar39) break;
            plVar40 = (long *)*plVar40;
          } while (plVar40 != (long *)0x0);
        }
        else {
          do {
            pauVar43 = (undefined1 (*) [16])plVar40[1];
            if (pauVar43 == pauVar61) {
              bVar50 = *(byte *)(plVar40 + 2);
              if ((bVar50 & 1) == 0) {
                uVar57 = (ulong)(bVar50 >> 1);
              }
              else {
                uVar57 = plVar40[3];
              }
              if (uVar57 == uVar60) {
                if ((bVar50 & 1) == 0) {
                  lVar41 = (long)plVar40 + 0x11;
                }
                else {
                  lVar41 = plVar40[4];
                }
                iVar38 = func_0x0eee3000(lVar41,uVar47,uVar60);
                if (iVar38 == 0) goto LAB_0cc2b5e9;
              }
            }
            else {
              if (pauVar62 <= pauVar43) {
                if (((ulong)pauVar43 | (ulong)pauVar62) >> 0x20 == 0) {
                  pauVar43 = (undefined1 (*) [16])
                             (((ulong)pauVar43 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
                }
                else {
                  pauVar43 = (undefined1 (*) [16])((ulong)pauVar43 % (ulong)pauVar62);
                }
              }
              if (pauVar43 != pauVar39) break;
            }
            plVar40 = (long *)*plVar40;
          } while (plVar40 != (long *)0x0);
        }
      }
    }
    unaff_R15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (unaff_R15 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x38,0);
    }
    auVar78 = in_XMM2._4_12_;
    pauStack_150 = pauStack_1a0;
    pauStack_148 = (undefined1 (*) [16])0x0;
    *(undefined8 *)*unaff_R15 = 0;
    *(undefined1 (**) [16])(*unaff_R15 + 8) = pauVar61;
    uStack_158 = unaff_R15;
    if ((DAT_0f6fdbe0 & 1) == 0) {
      *(undefined8 *)unaff_R15[2] = _DAT_0f6fdbf0;
      uVar57 = _DAT_0f6fdbe8;
      *(ulong *)unaff_R15[1] = CONCAT71(uRam000000000f6fdbe1,DAT_0f6fdbe0);
      *(ulong *)(unaff_R15[1] + 8) = uVar57;
    }
    else {
      FUN_0412e5e0(unaff_R15 + 1,_DAT_0f6fdbf0,_DAT_0f6fdbe8);
      auVar78 = in_XMM2._4_12_;
    }
    *(long **)(unaff_R15[2] + 8) = plStack_178;
    *(undefined1 (**) [16])unaff_R15[3] = pauStack_170;
    plStack_178 = (long *)0x0;
    pauStack_170 = (undefined1 (*) [16])0x0;
    pauStack_148 = (undefined1 (*) [16])CONCAT71(pauStack_148._1_7_,1);
    fVar68 = (float)(*(long *)param_1[0x10] + 1);
    if ((long)pauVar62 < 0) {
      in_XMM2._0_4_ = (float)pauVar62;
      in_XMM2._4_12_ = auVar78;
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc2b3c4;
LAB_0cc2b3d5:
      uVar57 = 1;
      if ((undefined1 (*) [16])0x2 < pauVar62) {
        uVar57 = (ulong)(((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) != 0);
      }
      pauVar62 = (undefined1 (*) [16])(uVar57 | (long)pauVar62 * 2);
      fVar68 = (float)ceilf(fVar68 / fVar69);
      pauVar39 = (undefined1 (*) [16])
                 ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
      if (pauVar39 < pauVar62) {
        pauVar39 = pauVar62;
      }
      pauVar62 = (undefined1 (*) [16])0x2;
      if ((pauVar39 == (undefined1 (*) [16])0x1) ||
         (pauVar62 = pauVar39, ((ulong)pauVar39 & (ulong)(pauVar39[-1] + 0xf)) == 0)) {
        unaff_R15 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar62 < unaff_R15;
        if (pauVar62 <= unaff_R15) goto LAB_0cc2b477;
LAB_0cc2b44d:
        func_0x0cba37d0(pauStack_1a0,pauVar62);
      }
      else {
        pauVar62 = (undefined1 (*) [16])func_0x0412c3f0();
        unaff_R15 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar62 < unaff_R15;
        if (unaff_R15 < pauVar62) goto LAB_0cc2b44d;
LAB_0cc2b477:
        if (bVar66) {
          fVar68 = (float)ceilf((float)*(ulong *)param_1[0x10] / *(float *)(param_1[0x10] + 8));
          pauVar39 = (undefined1 (*) [16])
                     ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
          if ((unaff_R15 < (undefined1 (*) [16])0x3) ||
             (uVar57 = (long)unaff_R15 - ((ulong)unaff_R15 >> 1 & 0x5555555555555555),
             uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333),
             1 < (byte)(((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            pauVar39 = (undefined1 (*) [16])func_0x0412c3f0(pauVar39);
          }
          else if ((undefined1 (*) [16])0x1 < pauVar39) {
            lVar41 = 0x3f;
            if (pauVar39[-1] + 0xf != (undefined *)0x0) {
              for (; (ulong)(pauVar39[-1] + 0xf) >> lVar41 == 0; lVar41 = lVar41 + -1) {
              }
            }
            pauVar39 = (undefined1 (*) [16])(1L << (-((byte)lVar41 ^ 0x3f) & 0x3f));
          }
          if (pauVar62 <= pauVar39) {
            pauVar62 = pauVar39;
          }
          if (pauVar62 < unaff_R15) goto LAB_0cc2b44d;
        }
      }
      pauVar62 = *(undefined1 (**) [16])param_1[0xf];
      if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
        pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 & (ulong)(pauVar62[-1] + 0xf));
      }
      else {
        pauVar39 = pauVar61;
        if (pauVar62 <= pauVar61) {
          if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
            pauVar39 = (undefined1 (*) [16])
                       (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
          }
          else {
            pauVar39 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
          }
        }
      }
    }
    else {
      in_XMM2._0_4_ = (float)(long)pauVar62;
      in_XMM2._4_12_ = auVar78;
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0cc2b3d5;
LAB_0cc2b3c4:
      in_XMM2._0_4_ = in_XMM2._0_4_ * fVar69;
      if (in_XMM2._0_4_ < fVar68) goto LAB_0cc2b3d5;
    }
    lVar41 = *(long *)*pauStack_1a0;
    puVar45 = *(undefined8 **)(lVar41 + (long)pauVar39 * 8);
    if (puVar45 == (undefined8 *)0x0) {
      *(undefined8 *)*uStack_158 = *(undefined8 *)(param_1[0xf] + 8);
      *(undefined1 (**) [16])(param_1[0xf] + 8) = uStack_158;
      *(undefined1 **)(lVar41 + (long)pauVar39 * 8) = param_1[0xf] + 8;
      if (*(long *)*uStack_158 != 0) {
        pauVar39 = *(undefined1 (**) [16])(*(long *)*uStack_158 + 8);
        if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
          *(undefined1 (**) [16])(lVar41 + ((ulong)pauVar39 & (ulong)(pauVar62[-1] + 0xf)) * 8) =
               uStack_158;
        }
        else {
          if (pauVar62 <= pauVar39) {
            if (((ulong)pauVar39 | (ulong)pauVar62) >> 0x20 == 0) {
              *(undefined1 (**) [16])
               (lVar41 + (((ulong)pauVar39 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff)) * 8) =
                   uStack_158;
              goto LAB_0cc2b5de;
            }
            pauVar39 = (undefined1 (*) [16])((ulong)pauVar39 % (ulong)pauVar62);
          }
          *(undefined1 (**) [16])(lVar41 + (long)pauVar39 * 8) = uStack_158;
        }
      }
    }
    else {
      *(undefined8 *)*uStack_158 = *puVar45;
      *puVar45 = uStack_158;
    }
LAB_0cc2b5de:
    *(long *)param_1[0x10] = *(long *)param_1[0x10] + 1;
LAB_0cc2b5e9:
    pauVar39 = pauStack_170;
    if (pauStack_170 != (undefined1 (*) [16])0x0) {
      LOCK();
      plVar40 = (long *)(*pauStack_170 + 8);
      lVar41 = *plVar40;
      *plVar40 = *plVar40 + -1;
      UNLOCK();
      if (lVar41 == 0) {
        (**(code **)(*(long *)*pauStack_170 + 0x10))(pauStack_170);
        func_0x0412c2d0(pauVar39);
      }
    }
  }
  if (param_3[0xe][9] == '\x01') {
    bVar55 = 0;
    for (bVar50 = param_3[0xe][8]; bVar50 != 0; bVar50 = bVar50 - 1 & bVar50) {
      iVar38 = 0;
      for (uVar51 = (uint)bVar50; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
        iVar38 = iVar38 + 1;
      }
      if (iVar38 == 0) {
        bVar96 = 1;
LAB_0cc2b732:
        bVar55 = bVar55 | bVar96;
      }
      else if (iVar38 == 1) {
        bVar96 = 2;
        goto LAB_0cc2b732;
      }
    }
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined **)*pauVar39 = &UNK_0f3f9780;
    plVar40 = (long *)(pauVar39[1] + 8);
    *(undefined **)(pauVar39[1] + 8) = &UNK_0f3f5258;
    *(undefined8 *)pauVar39[2] = 3;
    pauVar39[2][8] = bVar55;
    pauVar62 = *(undefined1 (**) [16])param_1[0xf];
    plStack_178 = plVar40;
    pauStack_170 = pauVar39;
    if (pauVar62 != (undefined1 (*) [16])0x0) {
      uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555);
      uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333);
      uVar57 = ((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar57 >> 0x38 < 2) {
        unaff_R15 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & 0xf7e42da33ffe0448);
      }
      else {
        unaff_R15 = (undefined1 (*) [16])0xf7e42da33ffe0448;
        if (pauVar62 < (undefined1 (*) [16])0xf7e42da33ffe0449) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = pauVar62;
          unaff_R15 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xf7e42da33ffe0448)) % auVar9,0);
        }
      }
      plVar52 = *(long **)(*(long *)*pauStack_1a0 + (long)unaff_R15 * 8);
      if ((plVar52 != (long *)0x0) && (plVar52 = (long *)*plVar52, plVar52 != (long *)0x0)) {
        if ((byte)(uVar57 >> 0x38) < 2) {
          do {
            if (plVar52[1] == 0xf7e42da33ffe0448) {
              bVar50 = *(byte *)(plVar52 + 2);
              if ((bVar50 & 1) == 0) {
                if (bVar50 >> 1 == 0x14) goto LAB_0cc2b84a;
              }
              else if (plVar52[3] == 0x14) {
LAB_0cc2b84a:
                if ((bVar50 & 1) == 0) {
                  pcVar46 = (char *)((long)plVar52 + 0x11);
                }
                else {
                  pcVar46 = (char *)plVar52[4];
                }
                auVar70[0] = -(DAT_01d48489 == *pcVar46);
                auVar70[1] = -(UNK_01d4848a == pcVar46[1]);
                auVar70[2] = -(UNK_01d4848b == pcVar46[2]);
                auVar70[3] = -(UNK_01d4848c == pcVar46[3]);
                auVar70[4] = -(UNK_01d4848d == pcVar46[4]);
                auVar70[5] = -(UNK_01d4848e == pcVar46[5]);
                auVar70[6] = -(UNK_01d4848f == pcVar46[6]);
                auVar70[7] = -(UNK_01d48490 == pcVar46[7]);
                auVar70[8] = -(UNK_01d48491 == pcVar46[8]);
                auVar70[9] = -(UNK_01d48492 == pcVar46[9]);
                auVar70[10] = -(UNK_01d48493 == pcVar46[10]);
                auVar70[0xb] = -(UNK_01d48494 == pcVar46[0xb]);
                auVar70[0xc] = -(UNK_01d48495 == pcVar46[0xc]);
                auVar70[0xd] = -(UNK_01d48496 == pcVar46[0xd]);
                auVar70[0xe] = -(UNK_01d48497 == pcVar46[0xe]);
                auVar70[0xf] = -(DAT_01d48498 == pcVar46[0xf]);
                uVar67 = *(undefined4 *)(pcVar46 + 0x10);
                auVar74[0] = -(DAT_01d48499 == (char)uVar67);
                auVar74[1] = -(UNK_01d4849a == (char)((uint)uVar67 >> 8));
                auVar74[2] = -(UNK_01d4849b == (char)((uint)uVar67 >> 0x10));
                auVar74[3] = -(UNK_01d4849c == (char)((uint)uVar67 >> 0x18));
                auVar79 = SUB1211((undefined1  [12])0x0,1);
                auVar74[4] = 0xff;
                auVar74[5] = 0xff;
                auVar74[6] = 0xff;
                auVar74[7] = 0xff;
                auVar74[8] = 0xff;
                auVar74[9] = 0xff;
                auVar74[10] = 0xff;
                auVar74[0xb] = 0xff;
                auVar74[0xc] = 0xff;
                auVar74[0xd] = -(auVar79[8] == '\0');
                auVar74[0xe] = -(auVar79[9] == '\0');
                auVar74[0xf] = -(auVar79[10] == '\0');
                in_XMM2 = auVar74 & auVar70;
                if ((ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                             (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0cc2b93c;
              }
            }
            else if ((undefined1 (*) [16])(plVar52[1] & (ulong)(pauVar62[-1] + 0xf)) != unaff_R15)
            break;
            plVar52 = (long *)*plVar52;
          } while (plVar52 != (long *)0x0);
        }
        else {
          do {
            pauVar61 = (undefined1 (*) [16])plVar52[1];
            if (pauVar61 == (undefined1 (*) [16])0xf7e42da33ffe0448) {
              bVar50 = *(byte *)(plVar52 + 2);
              if ((bVar50 & 1) == 0) {
                if (bVar50 >> 1 == 0x14) goto LAB_0cc2b8fa;
              }
              else if (plVar52[3] == 0x14) {
LAB_0cc2b8fa:
                if ((bVar50 & 1) == 0) {
                  pcVar46 = (char *)((long)plVar52 + 0x11);
                }
                else {
                  pcVar46 = (char *)plVar52[4];
                }
                auVar71[0] = -(DAT_01d48489 == *pcVar46);
                auVar71[1] = -(UNK_01d4848a == pcVar46[1]);
                auVar71[2] = -(UNK_01d4848b == pcVar46[2]);
                auVar71[3] = -(UNK_01d4848c == pcVar46[3]);
                auVar71[4] = -(UNK_01d4848d == pcVar46[4]);
                auVar71[5] = -(UNK_01d4848e == pcVar46[5]);
                auVar71[6] = -(UNK_01d4848f == pcVar46[6]);
                auVar71[7] = -(UNK_01d48490 == pcVar46[7]);
                auVar71[8] = -(UNK_01d48491 == pcVar46[8]);
                auVar71[9] = -(UNK_01d48492 == pcVar46[9]);
                auVar71[10] = -(UNK_01d48493 == pcVar46[10]);
                auVar71[0xb] = -(UNK_01d48494 == pcVar46[0xb]);
                auVar71[0xc] = -(UNK_01d48495 == pcVar46[0xc]);
                auVar71[0xd] = -(UNK_01d48496 == pcVar46[0xd]);
                auVar71[0xe] = -(UNK_01d48497 == pcVar46[0xe]);
                auVar71[0xf] = -(DAT_01d48498 == pcVar46[0xf]);
                uVar67 = *(undefined4 *)(pcVar46 + 0x10);
                auVar75[0] = -(DAT_01d48499 == (char)uVar67);
                auVar75[1] = -(UNK_01d4849a == (char)((uint)uVar67 >> 8));
                auVar75[2] = -(UNK_01d4849b == (char)((uint)uVar67 >> 0x10));
                auVar75[3] = -(UNK_01d4849c == (char)((uint)uVar67 >> 0x18));
                auVar79 = SUB1211((undefined1  [12])0x0,1);
                auVar75[4] = 0xff;
                auVar75[5] = 0xff;
                auVar75[6] = 0xff;
                auVar75[7] = 0xff;
                auVar75[8] = 0xff;
                auVar75[9] = 0xff;
                auVar75[10] = 0xff;
                auVar75[0xb] = 0xff;
                auVar75[0xc] = 0xff;
                auVar75[0xd] = -(auVar79[8] == '\0');
                auVar75[0xe] = -(auVar79[9] == '\0');
                auVar75[0xf] = -(auVar79[10] == '\0');
                in_XMM2 = auVar75 & auVar71;
                if ((ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                             (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0cc2b93c;
              }
            }
            else {
              if (pauVar62 <= pauVar61) {
                if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
                  pauVar61 = (undefined1 (*) [16])
                             (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
                }
                else {
                  pauVar61 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
                }
              }
              if (pauVar61 != unaff_R15) break;
            }
            plVar52 = (long *)*plVar52;
          } while (plVar52 != (long *)0x0);
        }
      }
    }
    pauVar61 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (pauVar61 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x38,0);
    }
    pauStack_150 = pauStack_1a0;
    pauStack_148 = (undefined1 (*) [16])0x1;
    *(undefined8 *)*pauVar61 = 0;
    *(undefined8 *)(*pauVar61 + 8) = 0xf7e42da33ffe0448;
    uVar47 = CONCAT17(UNK_01d48497,
                      CONCAT16(UNK_01d48496,
                               CONCAT15(UNK_01d48495,
                                        CONCAT14(UNK_01d48494,
                                                 CONCAT13(UNK_01d48493,
                                                          CONCAT12(UNK_01d48492,
                                                                   CONCAT11(UNK_01d48491,
                                                                            UNK_01d48490)))))));
    *(ulong *)pauVar61[1] =
         CONCAT17(UNK_01d4848f,
                  CONCAT16(UNK_01d4848e,
                           CONCAT15(UNK_01d4848d,
                                    CONCAT14(UNK_01d4848c,
                                             CONCAT13(UNK_01d4848b,
                                                      CONCAT12(UNK_01d4848a,
                                                               CONCAT11(DAT_01d48489,DAT_01d48488)))
                                            ))));
    *(undefined8 *)(pauVar61[1] + 8) = uVar47;
    *(ulong *)pauVar61[2] =
         CONCAT44(_UNK_01d4849c,
                  CONCAT13(UNK_01d4849b,CONCAT12(UNK_01d4849a,CONCAT11(DAT_01d48499,DAT_01d48498))))
    ;
    *(long **)(pauVar61[2] + 8) = plVar40;
    *(undefined1 (**) [16])pauVar61[3] = pauVar39;
    plStack_178 = (long *)0x0;
    pauStack_170 = (undefined1 (*) [16])0x0;
    fVar68 = (float)(*(long *)param_1[0x10] + 1);
    uStack_158 = pauVar61;
    if ((long)pauVar62 < 0) {
      in_XMM2 = ZEXT416((uint)(float)pauVar62);
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc2ba55;
LAB_0cc2ba62:
      uVar57 = 1;
      if ((undefined1 (*) [16])0x2 < pauVar62) {
        uVar57 = (ulong)(((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) != 0);
      }
      pauVar62 = (undefined1 (*) [16])(uVar57 | (long)pauVar62 * 2);
      fVar68 = (float)ceilf(fVar68 / fVar69);
      pauVar39 = (undefined1 (*) [16])
                 ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
      if (pauVar39 < pauVar62) {
        pauVar39 = pauVar62;
      }
      pauVar43 = (undefined1 (*) [16])0x2;
      if ((pauVar39 == (undefined1 (*) [16])0x1) ||
         (pauVar43 = pauVar39, ((ulong)pauVar39 & (ulong)(pauVar39[-1] + 0xf)) == 0)) {
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar43 < pauVar62;
        if (pauVar43 <= pauVar62) goto LAB_0cc2bb0c;
LAB_0cc2bada:
        func_0x0cba37d0(pauStack_1a0,pauVar43);
LAB_0cc2bae7:
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
      }
      else {
        pauVar43 = (undefined1 (*) [16])func_0x0412c3f0();
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar43 < pauVar62;
        if (pauVar62 < pauVar43) goto LAB_0cc2bada;
LAB_0cc2bb0c:
        if (bVar66) {
          fVar68 = (float)ceilf((float)*(ulong *)param_1[0x10] / *(float *)(param_1[0x10] + 8));
          pauVar39 = (undefined1 (*) [16])
                     ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
          if ((pauVar62 < (undefined1 (*) [16])0x3) ||
             (uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555),
             uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333),
             1 < (byte)(((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            pauVar39 = (undefined1 (*) [16])func_0x0412c3f0(pauVar39);
          }
          else if ((undefined1 (*) [16])0x1 < pauVar39) {
            lVar41 = 0x3f;
            if (pauVar39[-1] + 0xf != (undefined *)0x0) {
              for (; (ulong)(pauVar39[-1] + 0xf) >> lVar41 == 0; lVar41 = lVar41 + -1) {
              }
            }
            pauVar39 = (undefined1 (*) [16])(1L << (-((byte)lVar41 ^ 0x3f) & 0x3f));
          }
          if (pauVar43 <= pauVar39) {
            pauVar43 = pauVar39;
          }
          if (pauVar43 < pauVar62) goto LAB_0cc2bada;
          goto LAB_0cc2bae7;
        }
      }
      if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
        unaff_R15 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & 0xf7e42da33ffe0448);
      }
      else if (pauVar62 < (undefined1 (*) [16])0xf7e42da33ffe0449) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = pauVar62;
        unaff_R15 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xf7e42da33ffe0448)) % auVar10,0);
      }
      else {
        unaff_R15 = (undefined1 (*) [16])0xf7e42da33ffe0448;
      }
    }
    else {
      in_XMM2 = ZEXT416((uint)(float)(long)pauVar62);
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0cc2ba62;
LAB_0cc2ba55:
      in_XMM2._0_4_ = in_XMM2._0_4_ * fVar69;
      if (in_XMM2._0_4_ < fVar68) goto LAB_0cc2ba62;
    }
    lVar41 = *(long *)*pauStack_1a0;
    puVar45 = *(undefined8 **)(lVar41 + (long)unaff_R15 * 8);
    if (puVar45 == (undefined8 *)0x0) {
      *(undefined8 *)*pauVar61 = *(undefined8 *)(param_1[0xf] + 8);
      *(undefined1 (**) [16])(param_1[0xf] + 8) = pauVar61;
      *(undefined1 **)(lVar41 + (long)unaff_R15 * 8) = param_1[0xf] + 8;
      if (*(long *)*pauVar61 != 0) {
        pauVar39 = *(undefined1 (**) [16])(*(long *)*pauVar61 + 8);
        if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
          *(undefined1 (**) [16])(lVar41 + ((ulong)pauVar39 & (ulong)(pauVar62[-1] + 0xf)) * 8) =
               pauVar61;
        }
        else {
          if (pauVar62 <= pauVar39) {
            if (((ulong)pauVar39 | (ulong)pauVar62) >> 0x20 == 0) {
              *(undefined1 (**) [16])
               (lVar41 + (((ulong)pauVar39 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff)) * 8) =
                   pauVar61;
              goto LAB_0cc2bb77;
            }
            pauVar39 = (undefined1 (*) [16])((ulong)pauVar39 % (ulong)pauVar62);
          }
          *(undefined1 (**) [16])(lVar41 + (long)pauVar39 * 8) = pauVar61;
        }
      }
    }
    else {
      *(undefined8 *)*pauVar61 = *puVar45;
      *puVar45 = pauVar61;
    }
LAB_0cc2bb77:
    *(long *)param_1[0x10] = *(long *)param_1[0x10] + 1;
  }
  goto LAB_0cc2bb82;
LAB_0cc2be65:
  LOCK();
  plVar40 = (long *)(*pauVar39 + 8);
  lVar41 = *plVar40;
  *plVar40 = *plVar40 + -1;
  UNLOCK();
  if (lVar41 == 0) {
    (**(code **)(*(long *)*pauVar39 + 0x10))(pauVar39);
    func_0x0412c2d0(pauVar39);
  }
  goto LAB_0cc2c1fd;
LAB_0cc2d394:
  func_0x0d6c9300();
LAB_0cc2d399:
  func_0x04882eb0();
LAB_0cc2d39e:
  func_0x0d6c9300();
LAB_0cc2d3a3:
  func_0x04882eb0();
LAB_0cc2d3a8:
  func_0x0d6c9300();
LAB_0cc2d3ad:
  func_0x04882eb0();
LAB_0cc2d3b2:
  func_0x0d6c9300();
LAB_0cc2d3b7:
  func_0x04882eb0();
LAB_0cc2d3bc:
  func_0x0eec74c0(pauVar61,0);
LAB_0cc2981d:
  uStack_158 = (undefined1 (*) [16])((ulong)pauVar61 | 1);
  pauStack_150 = pauVar39;
  pauStack_148 = unaff_R15;
LAB_0cc29830:
  func_0x0eee2f00(unaff_R15,plVar40,pauVar39);
  goto LAB_0cc2983e;
LAB_0cc2d458:
  func_0x04931450();
LAB_0cc2d45d:
  func_0x0cc84ea0();
LAB_0cc2d462:
  func_0x04882eb0();
LAB_0cc2d467:
  func_0x04882e30();
LAB_0cc2d46c:
  iVar38 = func_0x04108328(&DAT_0f6fdbd8);
  if (iVar38 != 0) {
    func_0x04160690(&DAT_0f6fdbc0,&UNK_0148ae9b);
    func_0x0eee2f40(&UNK_0412ed50,&DAT_0f6fdbc0,0xf53dab8);
    func_0x0410844d(&DAT_0f6fdbd8);
  }
  goto LAB_0cc2aa08;
LAB_0cc2b93c:
  LOCK();
  plVar40 = (long *)(*pauVar39 + 8);
  lVar41 = *plVar40;
  *plVar40 = *plVar40 + -1;
  UNLOCK();
  if (lVar41 == 0) {
    (**(code **)(*(long *)*pauVar39 + 0x10))(pauVar39);
    func_0x0412c2d0(pauVar39);
  }
LAB_0cc2bb82:
  if ((param_3[0xf][0] == '\x01') && ((param_3[0xe][10] & 1) != 0)) {
    uVar67 = 6;
    if ((ushort)*(undefined4 *)(param_3[0xe] + 0xc) < 6) {
      uVar67 = *(undefined4 *)(param_3[0xe] + 0xc);
    }
    pauVar39 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pauVar39 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined8 *)(*pauVar39 + 8) = 0;
    *(undefined8 *)pauVar39[1] = 0;
    *(undefined **)*pauVar39 = &UNK_0f3f97d0;
    plVar40 = (long *)(pauVar39[1] + 8);
    bVar50 = param_3[0xe][0xe];
    *(undefined **)(pauVar39[1] + 8) = &UNK_0f3f5298;
    pauVar39[2][0] = 1 < bVar50;
    pauVar39[2][1] = (char)uVar67;
    pauVar39[2][2] = bVar50;
    pauVar39[2][3] = 0;
    pauVar62 = *(undefined1 (**) [16])param_1[0xf];
    plStack_178 = plVar40;
    pauStack_170 = pauVar39;
    if (pauVar62 != (undefined1 (*) [16])0x0) {
      uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555);
      uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333);
      uVar57 = ((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar57 >> 0x38 < 2) {
        unaff_R15 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & 0xa26a28df6743128b);
      }
      else {
        unaff_R15 = (undefined1 (*) [16])0xa26a28df6743128b;
        if (pauVar62 < (undefined1 (*) [16])0xa26a28df6743128c) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = pauVar62;
          unaff_R15 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xa26a28df6743128b)) % auVar11,0);
        }
      }
      plVar52 = *(long **)(*(long *)*pauStack_1a0 + (long)unaff_R15 * 8);
      if ((plVar52 != (long *)0x0) && (plVar52 = (long *)*plVar52, plVar52 != (long *)0x0)) {
        if ((byte)(uVar57 >> 0x38) < 2) {
          do {
            if (plVar52[1] == 0xa26a28df6743128b) {
              bVar50 = *(byte *)(plVar52 + 2);
              if ((bVar50 & 1) == 0) {
                if (bVar50 >> 1 == 0x15) goto LAB_0cc2bd80;
              }
              else if (plVar52[3] == 0x15) {
LAB_0cc2bd80:
                if ((bVar50 & 1) == 0) {
                  pcVar46 = (char *)((long)plVar52 + 0x11);
                }
                else {
                  pcVar46 = (char *)plVar52[4];
                }
                auVar72[0] = -(*pcVar46 == DAT_01d4a639);
                auVar72[1] = -(pcVar46[1] == UNK_01d4a63a);
                auVar72[2] = -(pcVar46[2] == UNK_01d4a63b);
                auVar72[3] = -(pcVar46[3] == UNK_01d4a63c);
                auVar72[4] = -(pcVar46[4] == UNK_01d4a63d);
                auVar72[5] = -(pcVar46[5] == DAT_01d4a63e);
                auVar72[6] = -(pcVar46[6] == UNK_01d4a63f);
                auVar72[7] = -(pcVar46[7] == UNK_01d4a640);
                auVar72[8] = -(pcVar46[8] == UNK_01d4a641);
                auVar72[9] = -(pcVar46[9] == UNK_01d4a642);
                auVar72[10] = -(pcVar46[10] == UNK_01d4a643);
                auVar72[0xb] = -(pcVar46[0xb] == UNK_01d4a644);
                auVar72[0xc] = -(pcVar46[0xc] == UNK_01d4a645);
                auVar72[0xd] = -(pcVar46[0xd] == UNK_01d4a646);
                auVar72[0xe] = -(pcVar46[0xe] == UNK_01d4a647);
                auVar72[0xf] = -(pcVar46[0xf] == DAT_01d4a648);
                auVar95 = *(undefined1 (*) [16])(pcVar46 + 5);
                auVar76[0] = -(DAT_01d4a63e == auVar95[0]);
                auVar76[1] = -(UNK_01d4a63f == auVar95[1]);
                auVar76[2] = -(UNK_01d4a640 == auVar95[2]);
                auVar76[3] = -(UNK_01d4a641 == auVar95[3]);
                auVar76[4] = -(UNK_01d4a642 == auVar95[4]);
                auVar76[5] = -(UNK_01d4a643 == auVar95[5]);
                auVar76[6] = -(UNK_01d4a644 == auVar95[6]);
                auVar76[7] = -(UNK_01d4a645 == auVar95[7]);
                auVar76[8] = -(UNK_01d4a646 == auVar95[8]);
                auVar76[9] = -(UNK_01d4a647 == auVar95[9]);
                auVar76[10] = -(DAT_01d4a648 == auVar95[10]);
                auVar76[0xb] = -(UNK_01d4a649 == auVar95[0xb]);
                auVar76[0xc] = -(UNK_01d4a64a == auVar95[0xc]);
                auVar76[0xd] = -(UNK_01d4a64b == auVar95[0xd]);
                auVar76[0xe] = -(UNK_01d4a64c == auVar95[0xe]);
                auVar76[0xf] = -(UNK_01d4a64d == auVar95[0xf]);
                in_XMM2 = auVar76 & auVar72;
                if ((ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                             (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0cc2be65;
              }
            }
            else if ((undefined1 (*) [16])(plVar52[1] & (ulong)(pauVar62[-1] + 0xf)) != unaff_R15)
            break;
            plVar52 = (long *)*plVar52;
          } while (plVar52 != (long *)0x0);
        }
        else {
          do {
            pauVar61 = (undefined1 (*) [16])plVar52[1];
            if (pauVar61 == (undefined1 (*) [16])0xa26a28df6743128b) {
              bVar50 = *(byte *)(plVar52 + 2);
              if ((bVar50 & 1) == 0) {
                if (bVar50 >> 1 == 0x15) goto LAB_0cc2be23;
              }
              else if (plVar52[3] == 0x15) {
LAB_0cc2be23:
                if ((bVar50 & 1) == 0) {
                  pcVar46 = (char *)((long)plVar52 + 0x11);
                }
                else {
                  pcVar46 = (char *)plVar52[4];
                }
                auVar73[0] = -(*pcVar46 == DAT_01d4a639);
                auVar73[1] = -(pcVar46[1] == UNK_01d4a63a);
                auVar73[2] = -(pcVar46[2] == UNK_01d4a63b);
                auVar73[3] = -(pcVar46[3] == UNK_01d4a63c);
                auVar73[4] = -(pcVar46[4] == UNK_01d4a63d);
                auVar73[5] = -(pcVar46[5] == DAT_01d4a63e);
                auVar73[6] = -(pcVar46[6] == UNK_01d4a63f);
                auVar73[7] = -(pcVar46[7] == UNK_01d4a640);
                auVar73[8] = -(pcVar46[8] == UNK_01d4a641);
                auVar73[9] = -(pcVar46[9] == UNK_01d4a642);
                auVar73[10] = -(pcVar46[10] == UNK_01d4a643);
                auVar73[0xb] = -(pcVar46[0xb] == UNK_01d4a644);
                auVar73[0xc] = -(pcVar46[0xc] == UNK_01d4a645);
                auVar73[0xd] = -(pcVar46[0xd] == UNK_01d4a646);
                auVar73[0xe] = -(pcVar46[0xe] == UNK_01d4a647);
                auVar73[0xf] = -(pcVar46[0xf] == DAT_01d4a648);
                auVar95 = *(undefined1 (*) [16])(pcVar46 + 5);
                auVar77[0] = -(DAT_01d4a63e == auVar95[0]);
                auVar77[1] = -(UNK_01d4a63f == auVar95[1]);
                auVar77[2] = -(UNK_01d4a640 == auVar95[2]);
                auVar77[3] = -(UNK_01d4a641 == auVar95[3]);
                auVar77[4] = -(UNK_01d4a642 == auVar95[4]);
                auVar77[5] = -(UNK_01d4a643 == auVar95[5]);
                auVar77[6] = -(UNK_01d4a644 == auVar95[6]);
                auVar77[7] = -(UNK_01d4a645 == auVar95[7]);
                auVar77[8] = -(UNK_01d4a646 == auVar95[8]);
                auVar77[9] = -(UNK_01d4a647 == auVar95[9]);
                auVar77[10] = -(DAT_01d4a648 == auVar95[10]);
                auVar77[0xb] = -(UNK_01d4a649 == auVar95[0xb]);
                auVar77[0xc] = -(UNK_01d4a64a == auVar95[0xc]);
                auVar77[0xd] = -(UNK_01d4a64b == auVar95[0xd]);
                auVar77[0xe] = -(UNK_01d4a64c == auVar95[0xe]);
                auVar77[0xf] = -(UNK_01d4a64d == auVar95[0xf]);
                in_XMM2 = auVar77 & auVar73;
                if ((ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                             (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0cc2be65;
              }
            }
            else {
              if (pauVar62 <= pauVar61) {
                if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
                  pauVar61 = (undefined1 (*) [16])
                             (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
                }
                else {
                  pauVar61 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
                }
              }
              if (pauVar61 != unaff_R15) break;
            }
            plVar52 = (long *)*plVar52;
          } while (plVar52 != (long *)0x0);
        }
      }
    }
    pauVar61 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (pauVar61 == (undefined1 (*) [16])0x0) {
      func_0x0eec74c0(0x38,0);
    }
    pauStack_150 = pauStack_1a0;
    pauStack_148 = (undefined1 (*) [16])0x1;
    *(undefined8 *)*pauVar61 = 0;
    *(undefined8 *)(*pauVar61 + 8) = 0xa26a28df6743128b;
    uVar47 = CONCAT17(UNK_01d4a647,
                      CONCAT16(UNK_01d4a646,
                               CONCAT15(UNK_01d4a645,
                                        CONCAT14(UNK_01d4a644,
                                                 CONCAT13(UNK_01d4a643,
                                                          CONCAT12(UNK_01d4a642,
                                                                   CONCAT11(UNK_01d4a641,
                                                                            UNK_01d4a640)))))));
    *(ulong *)pauVar61[1] =
         CONCAT17(UNK_01d4a63f,
                  CONCAT16(DAT_01d4a63e,
                           CONCAT15(UNK_01d4a63d,
                                    CONCAT14(UNK_01d4a63c,
                                             CONCAT13(UNK_01d4a63b,
                                                      CONCAT12(UNK_01d4a63a,
                                                               CONCAT11(DAT_01d4a639,DAT_01d4a638)))
                                            ))));
    *(undefined8 *)(pauVar61[1] + 8) = uVar47;
    *(ulong *)pauVar61[2] =
         CONCAT26(_UNK_01d4a64e,
                  CONCAT15(UNK_01d4a64d,
                           CONCAT14(UNK_01d4a64c,
                                    CONCAT13(UNK_01d4a64b,
                                             CONCAT12(UNK_01d4a64a,
                                                      CONCAT11(UNK_01d4a649,DAT_01d4a648))))));
    *(long **)(pauVar61[2] + 8) = plVar40;
    *(undefined1 (**) [16])pauVar61[3] = pauVar39;
    plStack_178 = (long *)0x0;
    pauStack_170 = (undefined1 (*) [16])0x0;
    fVar68 = (float)(*(long *)param_1[0x10] + 1);
    uStack_158 = pauVar61;
    if ((long)pauVar62 < 0) {
      in_XMM2 = ZEXT416((uint)(float)pauVar62);
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc2bf7e;
LAB_0cc2bf8b:
      uVar57 = 1;
      if ((undefined1 (*) [16])0x2 < pauVar62) {
        uVar57 = (ulong)(((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) != 0);
      }
      pauVar62 = (undefined1 (*) [16])(uVar57 | (long)pauVar62 * 2);
      fVar68 = (float)ceilf(fVar68 / fVar69);
      pauVar39 = (undefined1 (*) [16])
                 ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
      if (pauVar39 < pauVar62) {
        pauVar39 = pauVar62;
      }
      pauVar43 = (undefined1 (*) [16])0x2;
      if ((pauVar39 == (undefined1 (*) [16])0x1) ||
         (pauVar43 = pauVar39, ((ulong)pauVar39 & (ulong)(pauVar39[-1] + 0xf)) == 0)) {
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar43 < pauVar62;
        if (pauVar43 <= pauVar62) goto LAB_0cc2c178;
LAB_0cc2c00b:
        func_0x0cba37d0(pauStack_1a0,pauVar43);
LAB_0cc2c018:
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
      }
      else {
        pauVar43 = (undefined1 (*) [16])func_0x0412c3f0();
        pauVar62 = *(undefined1 (**) [16])param_1[0xf];
        bVar66 = pauVar43 < pauVar62;
        if (pauVar62 < pauVar43) goto LAB_0cc2c00b;
LAB_0cc2c178:
        if (bVar66) {
          fVar68 = (float)ceilf((float)*(ulong *)param_1[0x10] / *(float *)(param_1[0x10] + 8));
          pauVar39 = (undefined1 (*) [16])
                     ((long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68);
          if ((pauVar62 < (undefined1 (*) [16])0x3) ||
             (uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555),
             uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333),
             1 < (byte)(((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            pauVar39 = (undefined1 (*) [16])func_0x0412c3f0(pauVar39);
          }
          else if ((undefined1 (*) [16])0x1 < pauVar39) {
            lVar41 = 0x3f;
            if (pauVar39[-1] + 0xf != (undefined *)0x0) {
              for (; (ulong)(pauVar39[-1] + 0xf) >> lVar41 == 0; lVar41 = lVar41 + -1) {
              }
            }
            pauVar39 = (undefined1 (*) [16])(1L << (-((byte)lVar41 ^ 0x3f) & 0x3f));
          }
          if (pauVar43 <= pauVar39) {
            pauVar43 = pauVar39;
          }
          if (pauVar43 < pauVar62) goto LAB_0cc2c00b;
          goto LAB_0cc2c018;
        }
      }
      if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
        unaff_R15 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & 0xa26a28df6743128b);
      }
      else {
        unaff_R15 = (undefined1 (*) [16])0xa26a28df6743128b;
        if (pauVar62 < (undefined1 (*) [16])0xa26a28df6743128c) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = pauVar62;
          unaff_R15 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xa26a28df6743128b)) % auVar12,0);
        }
      }
    }
    else {
      in_XMM2 = ZEXT416((uint)(float)(long)pauVar62);
      fVar69 = *(float *)(param_1[0x10] + 8);
      if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0cc2bf8b;
LAB_0cc2bf7e:
      in_XMM2._0_4_ = in_XMM2._0_4_ * fVar69;
      if (in_XMM2._0_4_ < fVar68) goto LAB_0cc2bf8b;
    }
    lVar41 = *(long *)*pauStack_1a0;
    puVar45 = *(undefined8 **)(lVar41 + (long)unaff_R15 * 8);
    if (puVar45 == (undefined8 *)0x0) {
      *(undefined8 *)*pauVar61 = *(undefined8 *)(param_1[0xf] + 8);
      *(undefined1 (**) [16])(param_1[0xf] + 8) = pauVar61;
      *(undefined1 **)(lVar41 + (long)unaff_R15 * 8) = param_1[0xf] + 8;
      if (*(long *)*pauVar61 != 0) {
        pauVar39 = *(undefined1 (**) [16])(*(long *)*pauVar61 + 8);
        if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
          *(undefined1 (**) [16])(lVar41 + ((ulong)pauVar39 & (ulong)(pauVar62[-1] + 0xf)) * 8) =
               pauVar61;
        }
        else {
          if (pauVar62 <= pauVar39) {
            if (((ulong)pauVar39 | (ulong)pauVar62) >> 0x20 == 0) {
              *(undefined1 (**) [16])
               (lVar41 + (((ulong)pauVar39 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff)) * 8) =
                   pauVar61;
              goto LAB_0cc2c1f2;
            }
            pauVar39 = (undefined1 (*) [16])((ulong)pauVar39 % (ulong)pauVar62);
          }
          *(undefined1 (**) [16])(lVar41 + (long)pauVar39 * 8) = pauVar61;
        }
      }
    }
    else {
      *(undefined8 *)*pauVar61 = *puVar45;
      *puVar45 = pauVar61;
    }
LAB_0cc2c1f2:
    *(long *)param_1[0x10] = *(long *)param_1[0x10] + 1;
  }
LAB_0cc2c1fd:
  if (param_3[0x17][8] == '\x01') {
    param_1[6][0xc] = param_3[0x13][4];
    *(undefined4 *)(param_1[6] + 8) = *(undefined4 *)param_3[0x13];
    func_0x05d96ee0(param_1 + 7,param_3[0x13] + 8);
    *(undefined8 *)param_1[10] = *(undefined8 *)(param_3[0x16] + 8);
    *(undefined4 *)(param_1[10] + 7) = *(undefined4 *)(param_3[0x16] + 0xf);
  }
  lVar41 = *(long *)param_3[0x18];
  lVar44 = *(long *)(param_3[0x18] + 8);
  if (lVar41 != lVar44) {
    do {
      func_0x0cbf5de0(uStack_a0,lVar41,param_3 + 0x18,param_1[0x11] + 8);
      lVar41 = lVar41 + 0x18;
    } while (lVar41 != lVar44);
  }
  func_0x0cc30e80(param_1[0x11] + 8,param_3 + 0x1f);
  apuStack_98[0] = &UNK_0f3f9820;
  apuStack_98[1] = (undefined *)uStack_a8;
  ppuStack_78 = apuStack_98;
  puVar45 = *(undefined8 **)(param_1[0x15] + 8);
  pauVar39 = (undefined1 (*) [16])0x20;
  if (puVar45 != *(undefined8 **)param_1[0x16]) {
    do {
      if (ppuStack_78 == (undefined **)0x0) {
        FUN_04891200();
        unaff_R15 = param_1;
        goto LAB_0cc2d458;
      }
      (**(code **)(*ppuStack_78 + 0x30))(ppuStack_78,*puVar45);
      puVar45 = puVar45 + 2;
    } while (puVar45 != *(undefined8 **)param_1[0x16]);
    if ((ppuStack_78 != apuStack_98) &&
       (pauVar39 = (undefined1 (*) [16])0x28, ppuStack_78 == (undefined **)0x0)) goto LAB_0cc2c350;
  }
  (**(code **)(*pauVar39 + (long)*ppuStack_78))();
LAB_0cc2c350:
  pauVar61 = *(undefined1 (**) [16])param_3[0x1b];
  pauVar62 = *(undefined1 (**) [16])(param_3[0x1b] + 8);
  pauVar39 = pauVar62;
  if (pauVar61 != pauVar62) {
    do {
      pauStack_160 = pauVar39;
      uStack_158 = (undefined1 (*) [16])((ulong)uStack_158 & 0xffffffff00000000);
      pauStack_150 = (undefined1 (*) [16])CONCAT44(pauStack_150._4_4_,1);
      pauStack_138 = (undefined1 (*) [16])0x0;
      uStack_130 = 0;
      uStack_12e = 0;
      pauStack_148 = (undefined1 (*) [16])0x0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_126 = 0x3f80;
      plStack_100 = (long *)0x0;
      uStack_f8 = 0;
      uStack_110 = 0;
      plStack_108 = (long *)0x0;
      uStack_120 = 0;
      uStack_11e = 0;
      uStack_118 = 0;
      lVar41 = *(long *)(pauVar61[2] + 8);
      lVar44 = *(long *)pauVar61[3];
      if (lVar41 != lVar44) {
        do {
          func_0x0cbf5de0(uStack_a0,lVar41,pauVar61[2] + 8,&pauStack_148);
          lVar41 = lVar41 + 0x18;
        } while (lVar41 != lVar44);
      }
      func_0x0cc30e80(&pauStack_148,pauVar61[5] + 8);
      apuStack_68[0] = &UNK_0f3f98b0;
      apuStack_68[1] = (undefined *)uStack_a8;
      unaff_R15 = (undefined1 (*) [16])apuStack_68;
      pauStack_48 = unaff_R15;
      pauVar39 = (undefined1 (*) [16])0x20;
      plVar40 = plStack_108;
      if (plStack_108 == plStack_100) {
LAB_0cc2c4a3:
        (**(code **)(*pauVar39 + *(long *)*pauStack_48))();
      }
      else {
        do {
          if (pauStack_48 == (undefined1 (*) [16])0x0) {
            FUN_04891200();
            pauVar62 = param_3;
            goto LAB_0cc2d394;
          }
          (**(code **)(*(long *)*pauStack_48 + 0x30))(pauStack_48,*plVar40);
          plVar40 = plVar40 + 2;
        } while (plVar40 != plStack_100);
        if ((pauStack_48 == unaff_R15) ||
           (pauVar39 = (undefined1 (*) [16])0x28, pauStack_48 != (undefined1 (*) [16])0x0))
        goto LAB_0cc2c4a3;
      }
      if ((ulong)*(uint *)pauVar61[2] == 0xffffffff) goto LAB_0cc2d458;
      puStack_c8 = (undefined8 *)auStack_d1;
      (**(code **)(&UNK_0f3f6878 + (ulong)*(uint *)pauVar61[2] * 8))
                (&plStack_178,&puStack_c8,pauVar61);
      if (((ulong)pauStack_150 & 0xffffffff) == 0xffffffff) {
        if ((int)pauStack_170 != -1) goto LAB_0cc2c525;
      }
      else {
        if ((int)pauStack_170 == -1) {
          (**(code **)(&UNK_0f3f5cd0 + ((ulong)pauStack_150 & 0xffffffff) * 8))
                    (&puStack_c8,&uStack_158);
          pauStack_150 = (undefined1 (*) [16])CONCAT44(pauStack_150._4_4_,0xffffffff);
        }
        else {
LAB_0cc2c525:
          puStack_c8 = &uStack_158;
          (**(code **)(&UNK_0f3f5ce0 + ((ulong)pauStack_170 & 0xffffffff) * 8))
                    (&puStack_c8,puStack_c8,&plStack_178);
        }
        if (((ulong)pauStack_170 & 0xffffffff) != 0xffffffff) {
          (**(code **)(&UNK_0f3f5cd0 + ((ulong)pauStack_170 & 0xffffffff) * 8))
                    (&puStack_c8,&plStack_178);
        }
      }
      uVar57 = *(ulong *)(param_1[0x17] + 8);
      if (uVar57 < *(ulong *)param_1[0x18]) {
        func_0x0cc84cc0(uVar57,&uStack_158);
        puVar56 = (undefined *)(uVar57 + 0x68);
      }
      else {
        pauVar39 = (undefined1 (*) [16])(uVar57 - *(long *)param_1[0x17]);
        pauVar62 = (undefined1 (*) [16])(((long)pauVar39 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1);
        if ((undefined1 (*) [16])0x276276276276276 < pauVar62) goto LAB_0cc2d45d;
        lVar41 = (long)(*(ulong *)param_1[0x18] - *(long *)param_1[0x17]) >> 3;
        pauVar43 = (undefined1 (*) [16])(lVar41 * -0x6276276276276276);
        pauStack_1a0 = pauVar62;
        if (pauVar62 < pauVar43) {
          pauStack_1a0 = pauVar43;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar41 * 0x4ec4ec4ec4ec4ec5)) {
          pauStack_1a0 = (undefined1 (*) [16])0x276276276276276;
        }
        if (pauStack_1a0 == (undefined1 (*) [16])0x0) {
          lVar41 = 0;
        }
        else {
          if ((undefined1 (*) [16])0x276276276276276 < pauStack_1a0) goto LAB_0cc2d462;
          lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauStack_1a0 * 0x68);
          if (lVar41 == 0) {
            func_0x0eec74c0((long)pauStack_1a0 * 0x68,0);
            lVar41 = 0;
          }
        }
        func_0x0cc84cc0(*pauVar39 + lVar41,&uStack_158);
        lVar54 = *(long *)param_1[0x17];
        lVar44 = *(long *)(param_1[0x17] + 8);
        puVar63 = *pauVar39 + lVar41 + (lVar54 - lVar44);
        if (lVar54 - lVar44 != 0) {
          lVar64 = 0;
          do {
            puVar63[lVar64] = 0;
            *(undefined4 *)(puVar63 + lVar64 + 8) = 0xffffffff;
            uVar51 = *(uint *)(lVar54 + 8 + lVar64);
            if ((ulong)uVar51 != 0xffffffff) {
              plStack_178 = (long *)(puVar63 + lVar64);
              (**(code **)(&UNK_0f3f5f60 + (ulong)uVar51 * 8))(&plStack_178,lVar54 + lVar64);
              *(uint *)(puVar63 + lVar64 + 8) = uVar51;
            }
            lVar65 = *(long *)(lVar54 + 0x10 + lVar64);
            *(undefined8 *)(lVar54 + 0x10 + lVar64) = 0;
            *(long *)(puVar63 + lVar64 + 0x10) = lVar65;
            lVar59 = *(long *)(lVar54 + 0x20 + lVar64);
            puVar45 = (undefined8 *)(lVar54 + 0x18 + lVar64);
            uVar47 = puVar45[1];
            *(undefined8 *)(puVar63 + lVar64 + 0x18) = *puVar45;
            *(undefined8 *)((long)(puVar63 + lVar64 + 0x18) + 8) = uVar47;
            *(undefined8 *)(lVar54 + 0x18 + lVar64) = 0;
            lVar8 = *(long *)(lVar54 + 0x28 + lVar64);
            *(long *)(puVar63 + lVar64 + 0x28) = lVar8;
            *(undefined4 *)(puVar63 + lVar64 + 0x30) = *(undefined4 *)(lVar54 + 0x30 + lVar64);
            if (lVar8 != 0) {
              uVar57 = *(ulong *)(lVar59 + 8);
              uVar60 = *(ulong *)((long)(puVar63 + lVar64) + 0x18);
              if ((uVar60 & uVar60 - 1) == 0) {
                uVar57 = uVar57 & uVar60 - 1;
              }
              else if (uVar60 <= uVar57) {
                if ((uVar57 | uVar60) >> 0x20 == 0) {
                  uVar57 = (uVar57 & 0xffffffff) % (uVar60 & 0xffffffff);
                }
                else {
                  uVar57 = uVar57 % uVar60;
                }
              }
              *(undefined **)(lVar65 + uVar57 * 8) = puVar63 + lVar64 + 0x20;
              *(undefined8 *)(lVar54 + lVar64 + 0x20) = 0;
              *(undefined8 *)(lVar54 + lVar64 + 0x28) = 0;
            }
            *(undefined1 (*) [16])(puVar63 + lVar64 + 0x38) = (undefined1  [16])0x0;
            *(undefined8 *)(puVar63 + lVar64 + 0x48) = 0;
            puVar45 = (undefined8 *)(lVar54 + 0x38 + lVar64);
            uVar47 = puVar45[1];
            *(undefined8 *)(puVar63 + lVar64 + 0x38) = *puVar45;
            *(undefined8 *)((long)(puVar63 + lVar64 + 0x38) + 8) = uVar47;
            *(undefined8 *)(puVar63 + lVar64 + 0x48) = *(undefined8 *)(lVar54 + 0x48 + lVar64);
            *(undefined1 (*) [16])(lVar54 + 0x38 + lVar64) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar54 + 0x48 + lVar64) = 0;
            *(undefined1 (*) [16])(puVar63 + lVar64 + 0x50) = (undefined1  [16])0x0;
            *(undefined8 *)(puVar63 + lVar64 + 0x60) = 0;
            puVar45 = (undefined8 *)(lVar54 + 0x50 + lVar64);
            uVar47 = puVar45[1];
            *(undefined8 *)(puVar63 + lVar64 + 0x50) = *puVar45;
            *(undefined8 *)((long)(puVar63 + lVar64 + 0x50) + 8) = uVar47;
            *(undefined8 *)(puVar63 + lVar64 + 0x60) = *(undefined8 *)(lVar54 + 0x60 + lVar64);
            *(undefined1 (*) [16])(lVar54 + 0x50 + lVar64) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar54 + 0x60 + lVar64) = 0;
            lVar65 = lVar54 + lVar64;
            lVar64 = lVar64 + 0x68;
          } while (lVar65 + 0x68 != lVar44);
          do {
            lVar64 = *(long *)(lVar54 + 0x50);
            if (lVar64 != 0) {
              lVar65 = *(long *)(lVar54 + 0x58);
              lVar59 = lVar64;
              if (lVar64 != lVar65) {
                do {
                  plVar40 = *(long **)(lVar65 + -8);
                  if (plVar40 != (long *)0x0) {
                    LOCK();
                    plVar52 = plVar40 + 1;
                    lVar59 = *plVar52;
                    *plVar52 = *plVar52 + -1;
                    UNLOCK();
                    if (lVar59 == 0) {
                      (**(code **)(*plVar40 + 0x10))(plVar40);
                      func_0x0412c2d0(plVar40);
                    }
                  }
                  lVar65 = lVar65 + -0x10;
                } while (lVar65 != lVar64);
                lVar59 = *(long *)(lVar54 + 0x50);
              }
              *(long *)(lVar54 + 0x58) = lVar64;
              thunk_FUN_0ee326a0(lVar59,*(long *)(lVar54 + 0x60) - lVar59);
            }
            lVar64 = *(long *)(lVar54 + 0x38);
            if (lVar64 != 0) {
              lVar65 = *(long *)(lVar54 + 0x40);
              lVar59 = lVar64;
              if (lVar64 != lVar65) {
                do {
                  if ((*(byte *)(lVar65 + -0x20) & 1) != 0) {
                    thunk_FUN_0ee326a0(*(undefined8 *)(lVar65 + -0x10),
                                       *(ulong *)(lVar65 + -0x20) & 0xfffffffffffffffe);
                  }
                  lVar65 = lVar65 + -0x28;
                } while (lVar65 != lVar64);
                lVar59 = *(long *)(lVar54 + 0x38);
              }
              *(long *)(lVar54 + 0x40) = lVar64;
              thunk_FUN_0ee326a0(lVar59,*(long *)(lVar54 + 0x48) - lVar59);
            }
            puVar45 = *(undefined8 **)(lVar54 + 0x20);
            while (puVar45 != (undefined8 *)0x0) {
              puVar42 = (undefined8 *)*puVar45;
              plVar40 = (long *)puVar45[6];
              if (plVar40 == (long *)0x0) {
LAB_0cc2c985:
                bVar50 = *(byte *)(puVar45 + 2);
              }
              else {
                LOCK();
                plVar52 = plVar40 + 1;
                lVar64 = *plVar52;
                *plVar52 = *plVar52 + -1;
                UNLOCK();
                if (lVar64 != 0) goto LAB_0cc2c985;
                (**(code **)(*plVar40 + 0x10))(plVar40);
                func_0x0412c2d0(plVar40);
                bVar50 = *(byte *)(puVar45 + 2);
              }
              if ((bVar50 & 1) != 0) {
                thunk_FUN_0ee326a0(puVar45[4],puVar45[2] & 0xfffffffffffffffe);
              }
              thunk_FUN_0ee326a0(puVar45,0x38);
              puVar45 = puVar42;
            }
            lVar64 = *(long *)(lVar54 + 0x10);
            *(undefined8 *)(lVar54 + 0x10) = 0;
            if (lVar64 != 0) {
              thunk_FUN_0ee326a0(lVar64,*(long *)(lVar54 + 0x18) << 3);
            }
            if ((ulong)*(uint *)(lVar54 + 8) != 0xffffffff) {
              (**(code **)(&UNK_0f3f5cd0 + (ulong)*(uint *)(lVar54 + 8) * 8))(&plStack_178,lVar54);
            }
            *(undefined4 *)(lVar54 + 8) = 0xffffffff;
            lVar54 = lVar54 + 0x68;
          } while (lVar54 != lVar44);
          lVar54 = *(long *)param_1[0x17];
        }
        puVar56 = pauVar39[6] + lVar41 + 8;
        *(undefined **)param_1[0x17] = puVar63;
        *(undefined **)(param_1[0x17] + 8) = puVar56;
        lVar44 = *(long *)param_1[0x18];
        *(long *)param_1[0x18] = (long)pauStack_1a0 * 0x68 + lVar41;
        pauVar62 = pauStack_160;
        if (lVar54 != 0) {
          thunk_FUN_0ee326a0(lVar54,lVar44 - lVar54);
          pauVar62 = pauStack_160;
        }
      }
      *(undefined **)(param_1[0x17] + 8) = puVar56;
      func_0x0cc13b10(&pauStack_148);
      if (((ulong)pauStack_150 & 0xffffffff) != 0xffffffff) {
        (**(code **)(&UNK_0f3f5cd0 + ((ulong)pauStack_150 & 0xffffffff) * 8))
                  (&plStack_178,&uStack_158);
      }
      pauVar61 = pauVar61 + 7;
      pauVar39 = pauStack_160;
      if (pauVar61 == pauVar62) break;
    } while( true );
  }
  pauVar39 = (undefined1 (*) [16])(param_1[0x18] + 8);
  if (*(long *)param_1[0x1a] != 0) {
    puVar45 = *(undefined8 **)(param_1[0x19] + 8);
    while (puVar45 != (undefined8 *)0x0) {
      puVar42 = (undefined8 *)*puVar45;
      func_0x0b69a770(puVar45 + 5);
      if ((*(byte *)(puVar45 + 2) & 1) != 0) {
        thunk_FUN_0ee326a0(puVar45[4],puVar45[2] & 0xfffffffffffffffe);
      }
      thunk_FUN_0ee326a0(puVar45,0xa8);
      puVar45 = puVar42;
    }
    *(undefined8 *)(param_1[0x19] + 8) = 0;
    if (*(long *)param_1[0x19] != 0) {
      func_0x0eee2dd0(*(undefined8 *)*pauVar39,0,*(long *)param_1[0x19] << 3);
    }
    *(undefined8 *)param_1[0x1a] = 0;
  }
  plVar40 = *(long **)(param_3[0x1d] + 8);
  if (plVar40 != (long *)0x0) {
    plVar52 = (long *)(param_1[0x19] + 8);
    do {
      pauStack_150 = (undefined1 (*) [16])0x0;
      uStack_118 = 0;
      uStack_11e = 0;
      uStack_158 = (undefined1 (*) [16])0x3f800000;
      pauStack_148 = (undefined1 (*) [16])0x0;
      uStack_140 = 3;
      uStack_128 = 0;
      uStack_126 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      pauStack_138 = (undefined1 (*) [16])0x0;
      uStack_130 = 0;
      uStack_12e = 0;
      uStack_110 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      plStack_108 = (long *)0x0;
      plStack_100 = (long *)0x0;
      uVar47 = func_0x0bf5d990(&uStack_158,plVar40 + 5);
      lVar41 = (long)plVar40 + 0x11;
      bVar66 = (*(byte *)(plVar40 + 2) & 1) == 0;
      lVar44 = plVar40[4];
      if (bVar66) {
        lVar44 = lVar41;
      }
      uVar57 = (ulong)(*(byte *)(plVar40 + 2) >> 1);
      if (!bVar66) {
        uVar57 = plVar40[3];
      }
      pauVar61 = (undefined1 (*) [16])func_0x04883620(&plStack_178,lVar44,uVar57);
      pauVar62 = *(undefined1 (**) [16])param_1[0x19];
      if (pauVar62 != (undefined1 (*) [16])0x0) {
        uVar57 = (long)pauVar62 - ((ulong)pauVar62 >> 1 & 0x5555555555555555);
        uVar57 = (uVar57 >> 2 & 0x3333333333333333) + (uVar57 & 0x3333333333333333);
        uVar57 = ((uVar57 >> 4) + uVar57 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar57 >> 0x38 < 2) {
          pauStack_1a0 = (undefined1 (*) [16])((ulong)(pauVar62[-1] + 0xf) & (ulong)pauVar61);
        }
        else {
          pauStack_1a0 = pauVar61;
          if (pauVar62 <= pauVar61) {
            if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
              pauStack_1a0 = (undefined1 (*) [16])
                             (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
            }
            else {
              pauStack_1a0 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
            }
          }
        }
        plVar48 = *(long **)(*(long *)*pauVar39 + (long)pauStack_1a0 * 8);
        if ((plVar48 != (long *)0x0) && (plVar48 = (long *)*plVar48, plVar48 != (long *)0x0)) {
          if ((*(byte *)(plVar40 + 2) & 1) == 0) {
            uVar60 = (ulong)(*(byte *)(plVar40 + 2) >> 1);
          }
          else {
            uVar60 = plVar40[3];
            lVar41 = plVar40[4];
          }
          if ((byte)(uVar57 >> 0x38) < 2) {
            do {
              if ((undefined1 (*) [16])plVar48[1] == pauVar61) {
                bVar50 = *(byte *)(plVar48 + 2);
                if ((bVar50 & 1) == 0) {
                  uVar57 = (ulong)(bVar50 >> 1);
                }
                else {
                  uVar57 = plVar48[3];
                }
                if (uVar57 == uVar60) {
                  if ((bVar50 & 1) == 0) {
                    lVar44 = (long)plVar48 + 0x11;
                  }
                  else {
                    lVar44 = plVar48[4];
                  }
                  iVar38 = func_0x0eee3000(lVar44,lVar41,uVar60);
                  if (iVar38 == 0) goto LAB_0cc2d11a;
                }
              }
              else if ((undefined1 (*) [16])((ulong)plVar48[1] & (ulong)(pauVar62[-1] + 0xf)) !=
                       pauStack_1a0) break;
              plVar48 = (long *)*plVar48;
            } while (plVar48 != (long *)0x0);
          }
          else {
            do {
              pauVar43 = (undefined1 (*) [16])plVar48[1];
              if (pauVar43 == pauVar61) {
                bVar50 = *(byte *)(plVar48 + 2);
                if ((bVar50 & 1) == 0) {
                  uVar57 = (ulong)(bVar50 >> 1);
                }
                else {
                  uVar57 = plVar48[3];
                }
                if (uVar57 == uVar60) {
                  if ((bVar50 & 1) == 0) {
                    lVar44 = (long)plVar48 + 0x11;
                  }
                  else {
                    lVar44 = plVar48[4];
                  }
                  iVar38 = func_0x0eee3000(lVar44,lVar41,uVar60);
                  if (iVar38 == 0) goto LAB_0cc2d11a;
                }
              }
              else {
                if (pauVar62 <= pauVar43) {
                  if (((ulong)pauVar43 | (ulong)pauVar62) >> 0x20 == 0) {
                    pauVar43 = (undefined1 (*) [16])
                               (((ulong)pauVar43 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
                  }
                  else {
                    pauVar43 = (undefined1 (*) [16])((ulong)pauVar43 % (ulong)pauVar62);
                  }
                }
                if (pauVar43 != pauStack_1a0) break;
              }
              plVar48 = (long *)*plVar48;
            } while (plVar48 != (long *)0x0);
          }
        }
      }
      plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
      if (plVar48 == (long *)0x0) {
        func_0x0eec74c0(0xa8,0);
      }
      lStack_168 = 0;
      *plVar48 = 0;
      plVar48[1] = (long)pauVar61;
      plStack_178 = plVar48;
      pauStack_170 = pauVar39;
      if ((*(byte *)(plVar40 + 2) & 1) == 0) {
        plVar48[4] = plVar40[4];
        lVar41 = plVar40[3];
        plVar48[2] = plVar40[2];
        plVar48[3] = lVar41;
      }
      else {
        FUN_0412e5e0(plVar48 + 2,plVar40[4],plVar40[3]);
      }
      func_0x0b6a5920(plVar48 + 5,uVar47);
      lStack_168 = CONCAT71(lStack_168._1_7_,1);
      fVar68 = (float)(*(long *)param_1[0x1a] + 1);
      if ((long)pauVar62 < 0) {
        in_XMM2._0_4_ = (float)pauVar62;
        fVar69 = *(float *)(param_1[0x1a] + 8);
        if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc2cee7;
LAB_0cc2cf00:
        uVar57 = 1;
        if ((undefined1 (*) [16])0x2 < pauVar62) {
          uVar57 = (ulong)(((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) != 0);
        }
        uVar57 = (long)pauVar62 * 2 | uVar57;
        fVar68 = (float)ceilf(fVar68 / fVar69);
        uVar60 = (long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68;
        if (uVar60 < uVar57) {
          uVar60 = uVar57;
        }
        uVar57 = 2;
        if ((uVar60 == 1) || (uVar57 = uVar60, (uVar60 & uVar60 - 1) == 0)) {
          uVar60 = *(ulong *)param_1[0x19];
          bVar66 = uVar57 < uVar60;
          if (uVar57 <= uVar60) goto LAB_0cc2cf9d;
LAB_0cc2cf73:
          func_0x0c0ddb40(pauVar39,uVar57);
        }
        else {
          uVar57 = func_0x0412c3f0();
          uVar60 = *(ulong *)param_1[0x19];
          bVar66 = uVar57 < uVar60;
          if (uVar60 < uVar57) goto LAB_0cc2cf73;
LAB_0cc2cf9d:
          if (bVar66) {
            fVar68 = (float)ceilf((float)*(ulong *)param_1[0x1a] / *(float *)(param_1[0x1a] + 8));
            uVar49 = (long)(fVar68 - _DAT_01198778) & (long)fVar68 >> 0x3f | (long)fVar68;
            if ((uVar60 < 3) ||
               (uVar53 = uVar60 - (uVar60 >> 1 & 0x5555555555555555),
               uVar53 = (uVar53 >> 2 & 0x3333333333333333) + (uVar53 & 0x3333333333333333),
               1 < (byte)(((uVar53 >> 4) + uVar53 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar49 = func_0x0412c3f0(uVar49);
            }
            else if (1 < uVar49) {
              lVar41 = 0x3f;
              if (uVar49 - 1 != 0) {
                for (; uVar49 - 1 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                }
              }
              uVar49 = 1L << (-((byte)lVar41 ^ 0x3f) & 0x3f);
            }
            if (uVar57 <= uVar49) {
              uVar57 = uVar49;
            }
            if (uVar57 < uVar60) goto LAB_0cc2cf73;
          }
        }
        pauVar62 = *(undefined1 (**) [16])param_1[0x19];
        if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
          pauVar43 = (undefined1 (*) [16])((ulong)pauVar61 & (ulong)(pauVar62[-1] + 0xf));
        }
        else {
          pauVar43 = pauVar61;
          if (pauVar62 <= pauVar61) {
            if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
              pauVar43 = (undefined1 (*) [16])
                         (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff));
            }
            else {
              pauVar43 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
            }
          }
        }
      }
      else {
        in_XMM2._0_4_ = (float)(long)pauVar62;
        fVar69 = *(float *)(param_1[0x1a] + 8);
        if (pauVar62 == (undefined1 (*) [16])0x0) goto LAB_0cc2cf00;
LAB_0cc2cee7:
        in_XMM2._0_4_ = in_XMM2._0_4_ * fVar69;
        pauVar43 = pauStack_1a0;
        if (in_XMM2._0_4_ < fVar68) goto LAB_0cc2cf00;
      }
      lVar41 = *(long *)*pauVar39;
      plVar48 = *(long **)(lVar41 + (long)pauVar43 * 8);
      if (plVar48 == (long *)0x0) {
        *plStack_178 = *plVar52;
        *plVar52 = (long)plStack_178;
        *(long **)(lVar41 + (long)pauVar43 * 8) = plVar52;
        if (*plStack_178 != 0) {
          pauVar61 = *(undefined1 (**) [16])(*plStack_178 + 8);
          if (((ulong)pauVar62 & (ulong)(pauVar62[-1] + 0xf)) == 0) {
            *(long **)(lVar41 + ((ulong)pauVar61 & (ulong)(pauVar62[-1] + 0xf)) * 8) = plStack_178;
          }
          else {
            if (pauVar62 <= pauVar61) {
              if (((ulong)pauVar61 | (ulong)pauVar62) >> 0x20 == 0) {
                *(long **)(lVar41 + (((ulong)pauVar61 & 0xffffffff) % ((ulong)pauVar62 & 0xffffffff)
                                    ) * 8) = plStack_178;
                goto LAB_0cc2d10f;
              }
              pauVar61 = (undefined1 (*) [16])((ulong)pauVar61 % (ulong)pauVar62);
            }
            *(long **)(lVar41 + (long)pauVar61 * 8) = plStack_178;
          }
        }
      }
      else {
        *plStack_178 = *plVar48;
        *plVar48 = (long)plStack_178;
      }
LAB_0cc2d10f:
      *(long *)param_1[0x1a] = *(long *)param_1[0x1a] + 1;
LAB_0cc2d11a:
      func_0x0b69a770(&uStack_158);
      plVar40 = (long *)*plVar40;
    } while (plVar40 != (long *)0x0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 * 0x1d48488  (minecraft:connection
 * 0x1d48489  minecraft:connection
 * 0x1d48498  ction
 * 0x1d48499  tion
 * 0x1d4a638  *minecraft:multi_block
 * 0x1d4a639  minecraft:multi_block
 * 0x1d4a63e  raft:multi_block
 * 0x1d4a648  _block
 */
