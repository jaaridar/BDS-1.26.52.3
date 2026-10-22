/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc966020
 * Label: Dimension::vslot12
 * Body:  [[0c965e70, 0c96601b] [0c966020, 0c96607a] [0c966080, 0c966364] [0c966370, 0c966507] [0c96651f, 0c966529] [0c966530, 0c966545]]
 * Ghidra: wg_Dimension__vslot12
 */


/* WARNING: Instruction at (ram,0x0c966022) overlaps instruction at (ram,0x0c966020)
    */
/* WARNING: Removing unreachable block (ram,0x0c96645b) */
/* WARNING: Removing unreachable block (ram,0x0c96641e) */
/* WARNING: Removing unreachable block (ram,0x0c96643f) */
/* WARNING: Removing unreachable block (ram,0x0c966414) */
/* WARNING: Removing unreachable block (ram,0x0c966136) */
/* WARNING: Removing unreachable block (ram,0x0c966151) */
/* WARNING: Removing unreachable block (ram,0x0c966164) */
/* WARNING: Removing unreachable block (ram,0x0c966179) */
/* WARNING: Removing unreachable block (ram,0x0c96618c) */
/* WARNING: Removing unreachable block (ram,0x0c9661a1) */
/* WARNING: Removing unreachable block (ram,0x0c966435) */
/* WARNING: Removing unreachable block (ram,0x0c966456) */
/* WARNING: Removing unreachable block (ram,0x0c966476) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_Dimension__vslot12
                (int *param_1,int *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                undefined8 param_6,ulong param_7,char *param_8)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
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
  char cVar16;
  char cVar17;
  undefined8 uVar18;
  char in_AL;
  uint uVar19;
  char *pcVar20;
  int *extraout_RDX;
  int *piVar21;
  ulong uVar22;
  long unaff_RBX;
  uint uVar23;
  char *pcVar24;
  int *piVar25;
  uint uVar26;
  bool bVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  undefined8 extraout_XMM0_Qa;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  undefined8 extraout_XMM0_Qb;
  byte bVar44;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  
  _DAT_0e575668 = _DAT_0e575668 << 0xf | _DAT_0e575668 >> 0x11;
  *(char *)(param_4 + -0x3f) = *(char *)(param_4 + -0x3f) + in_AL;
  pcVar20 = (char *)func_0xffffffffcd8ca13b();
  auVar47._8_8_ = extraout_XMM1_Qb;
  auVar47._0_8_ = extraout_XMM1_Qa;
  *param_1 = *param_1 + (int)param_4;
  *pcVar20 = *pcVar20 + (char)pcVar20;
LAB_0c96603a:
  uVar1 = auVar47._12_2_;
  if ((uVar1 & 1) != 0) goto LAB_0c9662c0;
LAB_0c96604a:
  if ((uVar1 >> 8 & 1) != 0) goto LAB_0c9662d3;
LAB_0c966058:
  uVar1 = auVar47._14_2_;
  do {
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_4 + 0x1e + (long)param_2) = 0x20;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_4 + 0x1f + (long)param_2) = 0x20;
    }
    cVar37 = UNK_014e6ac4;
    cVar36 = UNK_014e5a16;
    cVar35 = UNK_014e566f;
    cVar34 = UNK_014e566e;
    cVar33 = UNK_014e566d;
    cVar32 = UNK_014e566c;
    cVar31 = UNK_014e566b;
    cVar30 = UNK_014e566a;
    cVar29 = UNK_014e5669;
    cVar28 = UNK_014e5668;
    cVar9 = UNK_014e5667;
    cVar8 = UNK_014e5666;
    cVar7 = UNK_014e5665;
    cVar6 = UNK_014e5664;
    cVar5 = UNK_014e5663;
    cVar4 = UNK_014e5662;
    cVar3 = UNK_014e5661;
    cVar2 = DAT_014e5660;
    uVar18 = _DAT_014e4aa0;
    param_2 = param_2 + 8;
    if (extraout_RDX == param_2) {
      if (param_1 == extraout_RDX) goto LAB_0c966489;
      piVar25 = extraout_RDX;
      if (((ulong)param_1 & 0x18) == 0) goto LAB_0c966525;
      piVar25 = (int *)((ulong)param_1 & 0xfffffffffffffff8);
      piVar21 = extraout_RDX;
      do {
        uVar22 = *(ulong *)(param_4 + (long)piVar21);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar22;
        if ((char)uVar22 == (char)uVar18) {
          *(undefined1 *)(param_4 + (long)piVar21) = 0x20;
        }
        auVar46[0] = -(cVar2 == '\0');
        auVar46[1] = -((char)uVar22 == cVar3);
        auVar46[2] = -((char)(uVar22 >> 8) == cVar4);
        auVar46[3] = -((char)(uVar22 >> 0x10) == cVar5);
        auVar46[4] = -(cVar6 == '\0');
        auVar46[5] = -((char)(uVar22 >> 0x20) == cVar7);
        auVar46[6] = -((char)(uVar22 >> 0x28) == cVar8);
        auVar46[7] = -((char)(uVar22 >> 0x30) == cVar9);
        auVar46[8] = -(cVar28 == '\0');
        auVar46[9] = -(cVar29 == '\0');
        auVar46[10] = -(cVar30 == '\0');
        auVar46[0xb] = -(cVar31 == '\0');
        auVar46[0xc] = -(cVar32 == '\0');
        auVar46[0xd] = -(cVar33 == '\0');
        auVar46[0xe] = -(cVar34 == '\0');
        auVar46[0xf] = -(cVar35 == '\0');
        if ((auVar46[2] & 1) != 0) {
          *(undefined1 *)(param_4 + 1 + (long)piVar21) = 0x20;
        }
        auVar47 = pshuflw(auVar46,auVar45,0x55);
        if (auVar47[4] == cVar37) {
          *(undefined1 *)(param_4 + 2 + (long)piVar21) = 0x20;
        }
        if ((char)(uVar22 >> 0x18) == cVar36) {
          *(undefined1 *)(param_4 + 3 + (long)piVar21) = 0x20;
        }
        piVar21 = piVar21 + 2;
      } while (piVar25 != piVar21);
      if (param_1 != piVar25) {
LAB_0c966525:
        pcVar24 = (char *)(param_4 + (long)piVar25);
        do {
          if (*pcVar24 == '_') {
            *pcVar24 = ' ';
          }
          pcVar24 = pcVar24 + 1;
        } while (pcVar24 != (char *)(param_4 + (long)param_1));
      }
LAB_0c966489:
      uVar22 = (ulong)(unaff_retaddr >> 1);
      if ((unaff_retaddr & 1) != 0) {
        uVar22 = param_7;
        pcVar20 = param_8;
      }
      uVar19 = func_0x0c964de0(*(undefined8 *)(unaff_RBX + 8),pcVar20,uVar22);
      uVar23 = uVar19 & 0xffff;
      uVar26 = uVar19 & 0xff00;
      bVar27 = (short)uVar19 != -1;
      if (!bVar27) {
        uVar23 = 0;
        uVar26 = 0;
      }
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(param_8,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe);
      }
      return (ulong)CONCAT14(bVar27,uVar23 & 0xff | uVar26);
    }
    pcVar24 = (char *)(param_4 + (long)param_2);
    cVar2 = pcVar24[1];
    cVar3 = pcVar24[2];
    cVar4 = pcVar24[3];
    cVar5 = pcVar24[4];
    cVar6 = pcVar24[5];
    cVar7 = pcVar24[6];
    cVar8 = pcVar24[7];
    cVar9 = pcVar24[8];
    cVar28 = (char)extraout_XMM0_Qa;
    cVar29 = (char)((ulong)extraout_XMM0_Qa >> 8);
    cVar30 = (char)((ulong)extraout_XMM0_Qa >> 0x10);
    cVar31 = (char)((ulong)extraout_XMM0_Qa >> 0x18);
    cVar32 = (char)((ulong)extraout_XMM0_Qa >> 0x20);
    cVar33 = (char)((ulong)extraout_XMM0_Qa >> 0x28);
    cVar34 = (char)((ulong)extraout_XMM0_Qa >> 0x30);
    cVar35 = (char)((ulong)extraout_XMM0_Qa >> 0x38);
    cVar36 = (char)extraout_XMM0_Qb;
    cVar37 = (char)((ulong)extraout_XMM0_Qb >> 8);
    cVar38 = (char)((ulong)extraout_XMM0_Qb >> 0x10);
    cVar39 = (char)((ulong)extraout_XMM0_Qb >> 0x18);
    cVar40 = (char)((ulong)extraout_XMM0_Qb >> 0x20);
    cVar41 = (char)((ulong)extraout_XMM0_Qb >> 0x28);
    cVar42 = (char)((ulong)extraout_XMM0_Qb >> 0x30);
    cVar43 = (char)((ulong)extraout_XMM0_Qb >> 0x38);
    if (*pcVar24 == cVar28) {
      *(undefined1 *)(param_4 + (long)param_2) = 0x20;
    }
    if (cVar2 == cVar29) {
      *(undefined1 *)(param_4 + 1 + (long)param_2) = 0x20;
    }
    if (cVar3 == cVar30) {
      *(undefined1 *)(param_4 + 2 + (long)param_2) = 0x20;
    }
    if (cVar4 == cVar31) {
      *(undefined1 *)(param_4 + 3 + (long)param_2) = 0x20;
    }
    if (cVar5 == cVar32) {
      *(undefined1 *)(param_4 + 4 + (long)param_2) = 0x20;
    }
    if (cVar6 == cVar33) {
      *(undefined1 *)(param_4 + 5 + (long)param_2) = 0x20;
    }
    if (cVar7 == cVar34) {
      *(undefined1 *)(param_4 + 6 + (long)param_2) = 0x20;
    }
    if (cVar8 == cVar35) {
      *(undefined1 *)(param_4 + 7 + (long)param_2) = 0x20;
    }
    if (cVar9 == cVar36) {
      *(undefined1 *)(param_4 + 8 + (long)param_2) = 0x20;
    }
    pcVar24 = (char *)(param_4 + 0x10 + (long)param_2);
    cVar2 = pcVar24[1];
    cVar3 = pcVar24[2];
    cVar4 = pcVar24[3];
    cVar5 = pcVar24[4];
    cVar6 = pcVar24[5];
    cVar7 = pcVar24[6];
    cVar9 = pcVar24[7];
    cVar10 = pcVar24[8];
    cVar11 = pcVar24[9];
    cVar12 = pcVar24[10];
    cVar13 = pcVar24[0xb];
    cVar14 = pcVar24[0xc];
    cVar15 = pcVar24[0xd];
    cVar16 = pcVar24[0xe];
    cVar17 = pcVar24[0xf];
    if (cVar8 == cVar35) {
      *(undefined1 *)(param_4 + 0xf + (long)param_2) = 0x20;
      bVar44 = -(*pcVar24 == cVar28);
      auVar47._0_4_ =
           CONCAT13(-(cVar4 == cVar31),
                    CONCAT12(-(cVar3 == cVar30),CONCAT11(-(cVar2 == cVar29),bVar44)));
      auVar47[4] = -(cVar5 == cVar32);
      auVar47[5] = -(cVar6 == cVar33);
      auVar47[6] = -(cVar7 == cVar34);
      auVar47[7] = -(cVar9 == cVar35);
      auVar47[8] = -(cVar10 == cVar36);
      auVar47[9] = -(cVar11 == cVar37);
      auVar47[10] = -(cVar12 == cVar38);
      auVar47[0xb] = -(cVar13 == cVar39);
      auVar47[0xc] = -(cVar14 == cVar40);
      auVar47[0xd] = -(cVar15 == cVar41);
      auVar47[0xe] = -(cVar16 == cVar42);
      auVar47[0xf] = -(cVar17 == cVar43);
      uVar23 = auVar47._0_4_;
      if ((bVar44 & 1) != 0) goto LAB_0c9661cc;
LAB_0c965f92:
      if ((uVar23 >> 8 & 1) == 0) goto LAB_0c965fa3;
LAB_0c9661e2:
      *(undefined1 *)(param_4 + 0x11 + (long)param_2) = 0x20;
      if ((uVar23 >> 0x10 & 1) != 0) goto LAB_0c9661f8;
LAB_0c965fb4:
      if ((uVar23 >> 0x18 & 1) == 0) goto LAB_0c965fc2;
LAB_0c96620b:
      *(undefined1 *)(param_4 + 0x13 + (long)param_2) = 0x20;
      uVar1 = auVar47._4_2_;
      if ((uVar1 & 1) != 0) goto LAB_0c966220;
LAB_0c965fd2:
      if ((uVar1 >> 8 & 1) == 0) goto LAB_0c965fe0;
LAB_0c966233:
      *(undefined1 *)(param_4 + 0x15 + (long)param_2) = 0x20;
      uVar1 = auVar47._6_2_;
      if ((uVar1 & 1) != 0) goto LAB_0c966248;
LAB_0c965ff0:
      if ((uVar1 >> 8 & 1) == 0) goto LAB_0c965ffe;
LAB_0c96625b:
      *(undefined1 *)(param_4 + 0x17 + (long)param_2) = 0x20;
      uVar1 = auVar47._8_2_;
      if ((uVar1 & 1) != 0) goto LAB_0c966270;
LAB_0c96600e:
      if ((uVar1 >> 8 & 1) == 0) goto LAB_0c96601c;
LAB_0c966283:
      *(undefined1 *)(param_4 + 0x19 + (long)param_2) = 0x20;
      uVar1 = auVar47._10_2_;
    }
    else {
      bVar44 = -(*pcVar24 == cVar28);
      auVar47._0_4_ =
           CONCAT13(-(cVar4 == cVar31),
                    CONCAT12(-(cVar3 == cVar30),CONCAT11(-(cVar2 == cVar29),bVar44)));
      auVar47[4] = -(cVar5 == cVar32);
      auVar47[5] = -(cVar6 == cVar33);
      auVar47[6] = -(cVar7 == cVar34);
      auVar47[7] = -(cVar9 == cVar35);
      auVar47[8] = -(cVar10 == cVar36);
      auVar47[9] = -(cVar11 == cVar37);
      auVar47[10] = -(cVar12 == cVar38);
      auVar47[0xb] = -(cVar13 == cVar39);
      auVar47[0xc] = -(cVar14 == cVar40);
      auVar47[0xd] = -(cVar15 == cVar41);
      auVar47[0xe] = -(cVar16 == cVar42);
      auVar47[0xf] = -(cVar17 == cVar43);
      uVar23 = auVar47._0_4_;
      if ((bVar44 & 1) == 0) goto LAB_0c965f92;
LAB_0c9661cc:
      *(undefined1 *)(param_4 + 0x10 + (long)param_2) = 0x20;
      if ((uVar23 >> 8 & 1) != 0) goto LAB_0c9661e2;
LAB_0c965fa3:
      if ((uVar23 >> 0x10 & 1) == 0) goto LAB_0c965fb4;
LAB_0c9661f8:
      *(undefined1 *)(param_4 + 0x12 + (long)param_2) = 0x20;
      if ((uVar23 >> 0x18 & 1) != 0) goto LAB_0c96620b;
LAB_0c965fc2:
      uVar1 = auVar47._4_2_;
      if ((uVar1 & 1) == 0) goto LAB_0c965fd2;
LAB_0c966220:
      *(undefined1 *)(param_4 + 0x14 + (long)param_2) = 0x20;
      if ((uVar1 >> 8 & 1) != 0) goto LAB_0c966233;
LAB_0c965fe0:
      uVar1 = auVar47._6_2_;
      if ((uVar1 & 1) == 0) goto LAB_0c965ff0;
LAB_0c966248:
      *(undefined1 *)(param_4 + 0x16 + (long)param_2) = 0x20;
      if ((uVar1 >> 8 & 1) != 0) goto LAB_0c96625b;
LAB_0c965ffe:
      uVar1 = auVar47._8_2_;
      if ((uVar1 & 1) == 0) goto LAB_0c96600e;
LAB_0c966270:
      *(undefined1 *)(param_4 + 0x18 + (long)param_2) = 0x20;
      if ((uVar1 >> 8 & 1) != 0) goto LAB_0c966283;
LAB_0c96601c:
      uVar1 = auVar47._10_2_;
    }
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_4 + 0x1a + (long)param_2) = 0x20;
    }
    if ((uVar1 >> 8 & 1) == 0) goto LAB_0c96603a;
    *(undefined1 *)(param_4 + 0x1b + (long)param_2) = 0x20;
    uVar1 = auVar47._12_2_;
    if ((uVar1 & 1) == 0) goto LAB_0c96604a;
LAB_0c9662c0:
    *(undefined1 *)(param_4 + 0x1c + (long)param_2) = 0x20;
    if ((uVar1 >> 8 & 1) == 0) goto LAB_0c966058;
LAB_0c9662d3:
    *(undefined1 *)(param_4 + 0x1d + (long)param_2) = 0x20;
    uVar1 = auVar47._14_2_;
  } while( true );
}


