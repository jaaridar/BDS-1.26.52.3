/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb299fb0 (ELF vaddr 0xb199fb0)
 * Label: string:minecraft:cave_s
 * Body:  [[0b299fb0, 0b29a220] [0b29a230, 0b29a390] [0b29aba9, 0b29abba] [0b29ad20, 0b29ad59] [0b29adac, 0b29add9]]
 * Ghidra: FUN_0b299fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b299fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  ushort uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  
  plVar17 = (long *)0x0;
  uVar13 = 0;
  if (*(int *)(param_3 + 0x28) == 6) {
    bStack_b0 = 0x14;
    uStack_af = 0x6669746e656469;
    uStack_a8 = 0x69;
    uStack_a7 = 0x7265;
    uStack_a5 = 0;
    lVar6 = func_0x09a3ccb0(param_3,&bStack_b0);
    if ((bStack_b0 & 1) != 0) {
      func_0x0412a280(puStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
    }
    if (lVar6 == 0) {
      plVar17 = (long *)0x0;
      uVar13 = 0;
      goto LAB_0b29a0ec;
    }
    bStack_b0 = 0x14;
    uStack_af = 0x6669746e656469;
    uStack_a8 = 0x69;
    uStack_a7 = 0x7265;
    uStack_a5 = 0;
    if (*(int *)(param_3 + 0x28) == 6) {
LAB_0b29a089:
      lVar6 = func_0x09a3ccb0(param_3,&bStack_b0);
      if (lVar6 != 0) {
        if ((bStack_b0 & 1) != 0) {
          func_0x0412a280(puStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
        }
        plVar17 = (long *)0x0;
        uVar13 = 0;
        if (*(int *)(lVar6 + 0x50) == 4) {
          bVar19 = (*(byte *)(lVar6 + 0x28) & 1) != 0;
          plVar17 = (long *)(lVar6 + 0x29);
          if (bVar19) {
            plVar17 = *(long **)(lVar6 + 0x38);
          }
          uVar13 = (ulong)(*(byte *)(lVar6 + 0x28) >> 1);
          if (bVar19) {
            uVar13 = *(ulong *)(lVar6 + 0x30);
          }
        }
        goto LAB_0b29a0ec;
      }
      func_0x04882ef0(&UNK_012a1eae);
    }
    else {
      cVar5 = func_0x0eeddcf0(&UNK_013c1bcc,&UNK_012edd38,0xb7,&UNK_0126deb6,&UNK_012b9f7c);
      if (cVar5 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      if (*(int *)(param_3 + 0x28) == 6) goto LAB_0b29a089;
    }
    func_0x04931450();
code_r0x0b29ad31:
    func_0x056be720();
code_r0x0b29ad36:
    uVar9 = FUN_04882eb0();
    uVar9 = func_0x04882e20(uVar9);
    func_0x056be690(&bStack_b0);
    uVar9 = func_0x0eee2d70(uVar9);
    if ((bStack_b0 & 1) != 0) {
      func_0x0412a280(puStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
    }
    uVar9 = func_0x0eee2d70(uVar9);
    func_0x04882e20(uVar9);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_0b29a0ec:
  lVar6 = param_3 + 0x98;
  uStack_58 = uVar13;
  plStack_50 = plVar17;
  cVar5 = func_0x0d6897a0(lVar6,&UNK_012cb0e4,0xb);
  if (cVar5 != '\0') {
    bStack_b0 = 0xea;
    uStack_af = 0x13ecd;
    uStack_a8 = 0x22;
    uStack_a7 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    auVar39 = func_0x05f28760(*(undefined8 *)(param_3 + 0x98),*(undefined8 *)(param_3 + 0xa0),
                              &bStack_b0,auStack_88,&puStack_68);
    lVar15 = auVar39._0_8_;
    if (lVar15 == auVar39._8_8_) {
      lVar14 = *(long *)(param_3 + 0xb8);
      lVar16 = lVar14;
    }
    else {
      lVar14 = ((ulong)(lVar15 - *(long *)(param_3 + 0x98)) >> 3) * -0x5555555555555540 +
               *(long *)(param_3 + 0xb0);
      lVar16 = *(long *)(param_3 + 0xb8);
      if (lVar15 != *(long *)(param_3 + 0xa0)) goto LAB_0b29a1ee;
    }
    if (lVar14 == lVar16) {
      auStack_88._8_8_ = 0x22;
      auStack_88._0_8_ = &UNK_013ecdea;
      func_0x0b29aee0(&bStack_b0,lVar6);
      func_0x0b29ae10(lVar6);
    }
  }
LAB_0b29a1ee:
  plVar17 = *(long **)(param_3 + 0xd8);
  lStack_48 = lVar6;
  lStack_40 = param_3;
  if (plVar17 != (long *)0x0) {
    do {
      plVar10 = plVar17 + 5;
      cVar5 = func_0x0d6897a0(plVar10,&UNK_012cb0e4,0xb);
      if (cVar5 != '\0') {
        bStack_b0 = 0xea;
        uStack_af = 0x13ecd;
        uStack_a8 = 0x22;
        uStack_a7 = 0;
        uStack_a5 = 0;
        uStack_a4 = 0;
        auVar39 = func_0x05f28760(plVar17[5],plVar17[6],&bStack_b0,auStack_88,&puStack_68);
        lVar6 = auVar39._0_8_;
        if (lVar6 == auVar39._8_8_) {
          lVar15 = plVar17[9];
          lVar14 = lVar15;
        }
        else {
          lVar15 = ((ulong)(lVar6 - plVar17[5]) >> 3) * -0x5555555555555540 + plVar17[8];
          lVar14 = plVar17[9];
          if (lVar6 != plVar17[6]) goto LAB_0b29a230;
        }
        if (lVar15 == lVar14) {
          auStack_88._8_8_ = 0x22;
          auStack_88._0_8_ = &UNK_013ecdea;
          func_0x0b29aee0(&bStack_b0,plVar10);
          func_0x0b29ae10(plVar10);
        }
      }
LAB_0b29a230:
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  lVar15 = lStack_40;
  lVar6 = lStack_48;
  auStack_88._8_8_ = 0x24;
  auStack_88._0_8_ = &UNK_012fe1e6;
  func_0x0b29bc40(&bStack_b0,lStack_48,*(undefined8 *)(lStack_40 + 0x98),
                  *(undefined8 *)(lStack_40 + 0xb0),*(undefined8 *)(lStack_40 + 0xa0),
                  *(undefined8 *)(lStack_40 + 0xb8),auStack_88,&puStack_68);
  switch(uStack_58) {
  case 0xf:
    if (*(long *)((long)plStack_50 + 7) != 0x79617274733a7466 || *plStack_50 != 0x66617263656e696d)
    {
      if (*(long *)((long)plStack_50 + 7) != 0x657a616c623a7466 || *plStack_50 != 0x66617263656e696d
         ) {
        return;
      }
      goto code_r0x0b29aa4f;
    }
    break;
  case 0x10:
    auVar22[0] = -((char)*plStack_50 == UNK_014e44a0);
    auVar22[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e44a1);
    auVar22[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e44a2);
    auVar22[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e44a3);
    auVar22[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e44a4);
    auVar22[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e44a5);
    auVar22[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e44a6);
    auVar22[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e44a7);
    auVar22[8] = -((char)plStack_50[1] == UNK_014e44a8);
    auVar22[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e44a9);
    auVar22[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e44aa);
    auVar22[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e44ab);
    auVar22[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e44ac);
    auVar22[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e44ad);
    auVar22[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e44ae);
    auVar22[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e44af);
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf
                ) == 0xffff) {
code_r0x0b29a5a3:
      bStack_b0 = 0x2c;
      uStack_af = 0x12657;
      uStack_a8 = 0x2a;
      uStack_a7 = 0;
      uStack_a5 = 0;
      uStack_a4 = 0;
      auVar39 = func_0x05f28760(*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0),
                                &bStack_b0,auStack_88,&puStack_68);
      lVar14 = auVar39._0_8_;
      if (lVar14 == auVar39._8_8_) {
        lVar16 = *(long *)(lVar15 + 0xb8);
        lVar18 = lVar16;
code_r0x0b29a646:
        if (lVar16 == lVar18) {
          auStack_88 = (undefined1  [16])0x0;
          uStack_78 = 0;
          puStack_68 = &UNK_0126572c;
          uStack_60 = 0x2a;
          func_0x0b29c9a0(&bStack_b0,lVar6);
          bStack_b0 = (byte)auStack_88;
          uStack_af = (undefined7)((ulong)auStack_88 >> 8);
          func_0x054761f0(&bStack_b0);
          bStack_b0 = 0x2c;
          uStack_af = 0x12657;
          uStack_a8 = 0x2a;
          uStack_a7 = 0;
          uStack_a5 = 0;
          uStack_a4 = 0;
          auVar39 = func_0x0537efb0(*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0),
                                    &bStack_b0,auStack_88,&puStack_68);
          if (auVar39._0_8_ == auVar39._8_8_) {
            plVar17 = *(long **)(lVar15 + 0xb8);
          }
          else {
            plVar17 = (long *)(((ulong)(auVar39._0_8_ - *(long *)(lVar15 + 0x98)) >> 3) *
                               -0x5555555555555540 + *(long *)(lVar15 + 0xb0));
          }
          cVar5 = *(char *)((long)plVar17 + 0x24);
          plVar10 = (long *)*plVar17;
          plVar8 = plVar10;
          if (cVar5 == '\x02') {
            plVar8 = plVar17;
          }
          if (plVar8 == (long *)0x0 || (int)plVar17[4] != -0xbf44ab0) {
            lVar14 = plVar17[5];
            lVar16 = plVar17[6];
            if (lVar16 == 0) {
              (*(code *)plVar17[7])(0,plVar17,0);
              lVar16 = plVar17[6];
              cVar5 = *(char *)((long)plVar17 + 0x24);
              plVar10 = (long *)*plVar17;
            }
            if (cVar5 == '\x02') {
              plVar10 = plVar17;
            }
            plVar8 = (long *)func_0x0488e200(lVar14,lVar16,0xf40bb550,plVar10);
          }
          puVar7 = (undefined8 *)plVar8[1];
          if (puVar7 < (undefined8 *)plVar8[2]) {
            *puVar7 = 0x617263656e696d1a;
            puVar7[1] = 0x6265773a7466;
            puVar7[2] = 0;
            *(undefined1 (*) [16])(puVar7 + 4) = (undefined1  [16])0x0;
            puVar7[3] = puVar7 + 4;
            *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
            puVar7[8] = 0;
            puVar7 = puVar7 + 9;
            plVar8[1] = (long)puVar7;
          }
          else {
            lVar14 = (long)puVar7 - *plVar8;
            uVar13 = (lVar14 >> 3) * -0x71c71c71c71c71c7 + 1;
            if (0x38e38e38e38e38e < uVar13) goto code_r0x0b29ad31;
            lVar16 = plVar8[2] - *plVar8 >> 3;
            uVar4 = lVar16 * 0x1c71c71c71c71c72;
            if (uVar13 < uVar4) {
              uVar13 = uVar4;
            }
            if (0x1c71c71c71c71c6 < (ulong)(lVar16 * -0x71c71c71c71c71c7)) {
              uVar13 = 0x38e38e38e38e38e;
            }
            plStack_90 = plVar8;
            if (uVar13 == 0) {
code_r0x0b29a857:
              lVar16 = 0;
            }
            else {
              if (0x38e38e38e38e38e < uVar13) goto code_r0x0b29ad36;
              lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0x48);
              if (lVar16 == 0) {
                func_0x0eec74c0(uVar13 * 0x48,0);
                goto code_r0x0b29a857;
              }
            }
            bStack_b0 = (byte)lVar16;
            uStack_af = (undefined7)((ulong)lVar16 >> 8);
            lVar18 = lVar16 + lVar14;
            uStack_a8 = (undefined1)lVar18;
            uStack_a7 = (undefined2)((ulong)lVar18 >> 8);
            uStack_a5 = (undefined1)((ulong)lVar18 >> 0x18);
            uStack_a4 = (undefined4)((ulong)lVar18 >> 0x20);
            lStack_98 = lVar16 + uVar13 * 0x48;
            *(undefined8 *)(lVar16 + lVar14) = 0x617263656e696d1a;
            *(undefined8 *)(lVar16 + 8 + lVar14) = 0x6265773a7466;
            *(undefined8 *)(lVar16 + 0x10 + lVar14) = 0;
            *(undefined1 (*) [16])(lVar16 + 0x20 + lVar14) = (undefined1  [16])0x0;
            *(long *)(lVar16 + 0x18 + lVar14) = lVar16 + 0x20 + lVar14;
            *(undefined1 (*) [16])(lVar16 + 0x30 + lVar14) = (undefined1  [16])0x0;
            *(undefined8 *)(lVar16 + 0x40 + lVar14) = 0;
            puVar7 = (undefined8 *)(lVar16 + 0x48 + lVar14);
            lVar18 = (*plVar8 - plVar8[1]) + lVar18;
            puStack_a0 = puVar7;
            func_0x056be730(plVar8,*plVar8,plVar8[1],lVar18);
            lVar14 = *plVar8;
            lVar16 = plVar8[2];
            *plVar8 = lVar18;
            plVar8[1] = (long)puVar7;
            plVar8[2] = lStack_98;
            if (lVar14 != 0) {
              func_0x0412a280(lVar14,lVar16 - lVar14);
            }
          }
          plVar8[1] = (long)puVar7;
        }
      }
      else {
        lVar16 = ((ulong)(lVar14 - *(long *)(lVar15 + 0x98)) >> 3) * -0x5555555555555540 +
                 *(long *)(lVar15 + 0xb0);
        lVar18 = *(long *)(lVar15 + 0xb8);
        if (lVar14 == *(long *)(lVar15 + 0xa0)) goto code_r0x0b29a646;
      }
      switch(uStack_58) {
      case 0x10:
        break;
      case 0x11:
        goto code_r0x0b29a934;
      case 0x12:
        goto code_r0x0b29a968;
      default:
        goto LAB_0b29aba9;
      case 0x14:
        goto code_r0x0b29a9cb;
      case 0x15:
        goto code_r0x0b29a403;
      }
    }
    auVar23[0] = -((char)*plStack_50 == UNK_014eb040);
    auVar23[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014eb041);
    auVar23[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014eb042);
    auVar23[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014eb043);
    auVar23[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014eb044);
    auVar23[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014eb045);
    auVar23[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014eb046);
    auVar23[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014eb047);
    auVar23[8] = -((char)plStack_50[1] == UNK_014eb048);
    auVar23[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014eb049);
    auVar23[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014eb04a);
    auVar23[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014eb04b);
    auVar23[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014eb04c);
    auVar23[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014eb04d);
    auVar23[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014eb04e);
    auVar23[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014eb04f);
    uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    goto joined_r0x0b29a561;
  case 0x11:
code_r0x0b29a934:
    auVar24[0] = -((char)*plStack_50 == UNK_014e54f0);
    auVar24[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e54f1);
    auVar24[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e54f2);
    auVar24[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e54f3);
    auVar24[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e54f4);
    auVar24[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e54f5);
    auVar24[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e54f6);
    auVar24[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e54f7);
    auVar24[8] = -((char)plStack_50[1] == UNK_014e54f8);
    auVar24[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e54f9);
    auVar24[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e54fa);
    auVar24[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e54fb);
    auVar24[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e54fc);
    auVar24[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e54fd);
    auVar24[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e54fe);
    auVar24[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e54ff);
    auVar33[0] = -((char)plStack_50[2] == UNK_014e6980);
    auVar33[1] = -(UNK_014e6981 == '\0');
    auVar33[2] = -(UNK_014e6982 == '\0');
    auVar33[3] = -(UNK_014e6983 == '\0');
    auVar33[4] = -(UNK_014e6984 == '\0');
    auVar33[5] = -(UNK_014e6985 == '\0');
    auVar33[6] = -(UNK_014e6986 == '\0');
    auVar33[7] = -(UNK_014e6987 == '\0');
    auVar33[8] = -(UNK_014e6988 == '\0');
    auVar33[9] = -(UNK_014e6989 == '\0');
    auVar33[10] = -(UNK_014e698a == '\0');
    auVar33[0xb] = -(UNK_014e698b == '\0');
    auVar33[0xc] = -(UNK_014e698c == '\0');
    auVar33[0xd] = -(UNK_014e698d == '\0');
    auVar33[0xe] = -(UNK_014e698e == '\0');
    auVar33[0xf] = -(UNK_014e698f == '\0');
    auVar33 = auVar33 & auVar24;
    uVar3 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
joined_r0x0b29aa49:
    if (uVar3 != 0xffff) {
      return;
    }
code_r0x0b29aa4f:
    bStack_b0 = 0xfa;
    uStack_af = 0x11abe;
    uStack_a8 = 0x1d;
    uStack_a7 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    auVar39 = func_0x05f28760(*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0),
                              &bStack_b0,auStack_88,&puStack_68);
    lVar14 = auVar39._0_8_;
    if (lVar14 == auVar39._8_8_) {
      lVar16 = *(long *)(lVar15 + 0xb8);
      lVar18 = lVar16;
    }
    else {
      lVar16 = ((ulong)(lVar14 - *(long *)(lVar15 + 0x98)) >> 3) * -0x5555555555555540 +
               *(long *)(lVar15 + 0xb0);
      lVar18 = *(long *)(lVar15 + 0xb8);
      if (lVar14 != *(long *)(lVar15 + 0xa0)) {
        return;
      }
    }
    if (lVar16 != lVar18) {
      return;
    }
    auStack_88._8_8_ = 0x1d;
    auStack_88._0_8_ = &UNK_011abefa;
    func_0x0b29e720(&bStack_b0,lVar6);
    bStack_b0 = 0xfa;
    uStack_af = 0x11abe;
    uStack_a8 = 0x1d;
    uStack_a7 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    auVar39 = func_0x0537efb0(*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0),
                              &bStack_b0,auStack_88,&puStack_68);
    if (auVar39._0_8_ == auVar39._8_8_) {
      puVar7 = *(undefined8 **)(lVar15 + 0xb8);
    }
    else {
      puVar7 = (undefined8 *)
               (((ulong)(auVar39._0_8_ - *(long *)(lVar15 + 0x98)) >> 3) * -0x5555555555555540 +
               *(long *)(lVar15 + 0xb0));
    }
    cVar5 = *(char *)((long)puVar7 + 0x24);
    puVar11 = (undefined8 *)*puVar7;
    puVar12 = puVar11;
    if (cVar5 == '\x02') {
      puVar12 = puVar7;
    }
    if ((*(int *)(puVar7 + 4) == -0x198a0221) && (puVar12 != (undefined8 *)0x0)) {
      return;
    }
    uVar9 = puVar7[5];
    lVar6 = puVar7[6];
    if (lVar6 == 0) {
      (*(code *)puVar7[7])(0,puVar7,0);
      lVar6 = puVar7[6];
      cVar5 = *(char *)((long)puVar7 + 0x24);
      puVar11 = (undefined8 *)*puVar7;
    }
    if (cVar5 == '\x02') {
      puVar11 = puVar7;
    }
    func_0x0488e200(uVar9,lVar6,0xe675fddf,puVar11);
    return;
  case 0x12:
code_r0x0b29a968:
    auVar25[0] = -((char)*plStack_50 == UNK_014eab20);
    auVar25[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014eab21);
    auVar25[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014eab22);
    auVar25[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014eab23);
    auVar25[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014eab24);
    auVar25[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014eab25);
    auVar25[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014eab26);
    auVar25[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014eab27);
    auVar25[8] = -((char)plStack_50[1] == UNK_014eab28);
    auVar25[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014eab29);
    auVar25[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014eab2a);
    auVar25[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014eab2b);
    auVar25[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014eab2c);
    auVar25[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014eab2d);
    auVar25[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014eab2e);
    auVar25[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014eab2f);
    auVar34[0] = -((char)(short)plStack_50[2] == UNK_014e4f30);
    auVar34[1] = -((char)((ushort)(short)plStack_50[2] >> 8) == UNK_014e4f31);
    auVar34[2] = -(UNK_014e4f32 == '\0');
    auVar34[3] = -(UNK_014e4f33 == '\0');
    auVar34[4] = -(UNK_014e4f34 == '\0');
    auVar34[5] = -(UNK_014e4f35 == '\0');
    auVar34[6] = -(UNK_014e4f36 == '\0');
    auVar34[7] = -(UNK_014e4f37 == '\0');
    auVar34[8] = -(UNK_014e4f38 == '\0');
    auVar34[9] = -(UNK_014e4f39 == '\0');
    auVar34[10] = -(UNK_014e4f3a == '\0');
    auVar34[0xb] = -(UNK_014e4f3b == '\0');
    auVar34[0xc] = -(UNK_014e4f3c == '\0');
    auVar34[0xd] = -(UNK_014e4f3d == '\0');
    auVar34[0xe] = -(UNK_014e4f3e == '\0');
    auVar34[0xf] = -(UNK_014e4f3f == '\0');
    auVar34 = auVar34 & auVar25;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) != 0xffff) {
      auVar26[0] = -((char)*plStack_50 == UNK_014e7930);
      auVar26[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e7931);
      auVar26[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e7932);
      auVar26[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e7933);
      auVar26[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e7934);
      auVar26[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e7935);
      auVar26[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e7936);
      auVar26[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e7937);
      auVar26[8] = -((char)plStack_50[1] == UNK_014e7938);
      auVar26[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e7939);
      auVar26[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e793a);
      auVar26[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e793b);
      auVar26[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e793c);
      auVar26[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e793d);
      auVar26[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e793e);
      auVar26[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e793f);
      auVar35[0] = -((char)(short)plStack_50[2] == UNK_014e2f40);
      auVar35[1] = -((char)((ushort)(short)plStack_50[2] >> 8) == UNK_014e2f41);
      auVar35[2] = -(UNK_014e2f42 == '\0');
      auVar35[3] = -(UNK_014e2f43 == '\0');
      auVar35[4] = -(UNK_014e2f44 == '\0');
      auVar35[5] = -(UNK_014e2f45 == '\0');
      auVar35[6] = -(UNK_014e2f46 == '\0');
      auVar35[7] = -(UNK_014e2f47 == '\0');
      auVar35[8] = -(UNK_014e2f48 == '\0');
      auVar35[9] = -(UNK_014e2f49 == '\0');
      auVar35[10] = -(UNK_014e2f4a == '\0');
      auVar35[0xb] = -(UNK_014e2f4b == '\0');
      auVar35[0xc] = -(UNK_014e2f4c == '\0');
      auVar35[0xd] = -(UNK_014e2f4d == '\0');
      auVar35[0xe] = -(UNK_014e2f4e == '\0');
      auVar35[0xf] = -(UNK_014e2f4f == '\0');
      auVar35 = auVar35 & auVar26;
      uVar3 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
              (ushort)(byte)(auVar35[0xf] >> 7) << 0xf;
      goto joined_r0x0b29a561;
    }
    break;
  default:
    goto LAB_0b29aba9;
  case 0x14:
code_r0x0b29a9cb:
    uVar1 = (undefined4)plStack_50[2];
    auVar36[0] = -((char)uVar1 == UNK_014e9360);
    auVar36[1] = -((char)((uint)uVar1 >> 8) == UNK_014e9361);
    auVar36[2] = -((char)((uint)uVar1 >> 0x10) == UNK_014e9362);
    auVar36[3] = -((char)((uint)uVar1 >> 0x18) == UNK_014e9363);
    auVar36[4] = -(UNK_014e9364 == '\0');
    auVar36[5] = -(UNK_014e9365 == '\0');
    auVar36[6] = -(UNK_014e9366 == '\0');
    auVar36[7] = -(UNK_014e9367 == '\0');
    auVar36[8] = -(UNK_014e9368 == '\0');
    auVar36[9] = -(UNK_014e9369 == '\0');
    auVar36[10] = -(UNK_014e936a == '\0');
    auVar36[0xb] = -(UNK_014e936b == '\0');
    auVar36[0xc] = -(UNK_014e936c == '\0');
    auVar36[0xd] = -(UNK_014e936d == '\0');
    auVar36[0xe] = -(UNK_014e936e == '\0');
    auVar36[0xf] = -(UNK_014e936f == '\0');
    auVar27[0] = -((char)*plStack_50 == UNK_014e3eb0);
    auVar27[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e3eb1);
    auVar27[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e3eb2);
    auVar27[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e3eb3);
    auVar27[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e3eb4);
    auVar27[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e3eb5);
    auVar27[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e3eb6);
    auVar27[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e3eb7);
    auVar27[8] = -((char)plStack_50[1] == UNK_014e3eb8);
    auVar27[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e3eb9);
    auVar27[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e3eba);
    auVar27[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e3ebb);
    auVar27[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e3ebc);
    auVar27[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e3ebd);
    auVar27[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e3ebe);
    auVar27[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e3ebf);
    auVar27 = auVar27 & auVar36;
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) != 0xffff) {
      uVar1 = (undefined4)plStack_50[2];
      auVar37[0] = -((char)uVar1 == UNK_014e54e0);
      auVar37[1] = -((char)((uint)uVar1 >> 8) == UNK_014e54e1);
      auVar37[2] = -((char)((uint)uVar1 >> 0x10) == UNK_014e54e2);
      auVar37[3] = -((char)((uint)uVar1 >> 0x18) == UNK_014e54e3);
      auVar37[4] = -(UNK_014e54e4 == '\0');
      auVar37[5] = -(UNK_014e54e5 == '\0');
      auVar37[6] = -(UNK_014e54e6 == '\0');
      auVar37[7] = -(UNK_014e54e7 == '\0');
      auVar37[8] = -(UNK_014e54e8 == '\0');
      auVar37[9] = -(UNK_014e54e9 == '\0');
      auVar37[10] = -(UNK_014e54ea == '\0');
      auVar37[0xb] = -(UNK_014e54eb == '\0');
      auVar37[0xc] = -(UNK_014e54ec == '\0');
      auVar37[0xd] = -(UNK_014e54ed == '\0');
      auVar37[0xe] = -(UNK_014e54ee == '\0');
      auVar37[0xf] = -(UNK_014e54ef == '\0');
      auVar28[0] = -((char)*plStack_50 == UNK_014e6ed0);
      auVar28[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e6ed1);
      auVar28[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e6ed2);
      auVar28[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e6ed3);
      auVar28[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e6ed4);
      auVar28[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e6ed5);
      auVar28[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e6ed6);
      auVar28[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e6ed7);
      auVar28[8] = -((char)plStack_50[1] == UNK_014e6ed8);
      auVar28[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e6ed9);
      auVar28[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e6eda);
      auVar28[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e6edb);
      auVar28[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e6edc);
      auVar28[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e6edd);
      auVar28[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e6ede);
      auVar28[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e6edf);
      auVar28 = auVar28 & auVar37;
      if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) != 0xffff) {
        uVar1 = (undefined4)plStack_50[2];
        auVar38[0] = -((char)uVar1 == UNK_014e6420);
        auVar38[1] = -((char)((uint)uVar1 >> 8) == UNK_014e6421);
        auVar38[2] = -((char)((uint)uVar1 >> 0x10) == UNK_014e6422);
        auVar38[3] = -((char)((uint)uVar1 >> 0x18) == UNK_014e6423);
        auVar38[4] = -(UNK_014e6424 == '\0');
        auVar38[5] = -(UNK_014e6425 == '\0');
        auVar38[6] = -(UNK_014e6426 == '\0');
        auVar38[7] = -(UNK_014e6427 == '\0');
        auVar38[8] = -(UNK_014e6428 == '\0');
        auVar38[9] = -(UNK_014e6429 == '\0');
        auVar38[10] = -(UNK_014e642a == '\0');
        auVar38[0xb] = -(UNK_014e642b == '\0');
        auVar38[0xc] = -(UNK_014e642c == '\0');
        auVar38[0xd] = -(UNK_014e642d == '\0');
        auVar38[0xe] = -(UNK_014e642e == '\0');
        auVar38[0xf] = -(UNK_014e642f == '\0');
        auVar29[0] = -((char)*plStack_50 == UNK_014e7ec0);
        auVar29[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e7ec1);
        auVar29[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e7ec2);
        auVar29[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e7ec3);
        auVar29[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e7ec4);
        auVar29[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e7ec5);
        auVar29[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e7ec6);
        auVar29[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e7ec7);
        auVar29[8] = -((char)plStack_50[1] == UNK_014e7ec8);
        auVar29[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e7ec9);
        auVar29[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e7eca);
        auVar29[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e7ecb);
        auVar29[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e7ecc);
        auVar29[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e7ecd);
        auVar29[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e7ece);
        auVar29[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e7ecf);
        auVar29 = auVar29 & auVar38;
        uVar3 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
        goto joined_r0x0b29aa49;
      }
    }
    break;
  case 0x15:
    auVar30[0] = -(*(char *)((long)plStack_50 + 5) == UNK_014e49a0);
    auVar30[1] = -(*(char *)((long)plStack_50 + 6) == UNK_014e49a1);
    auVar30[2] = -(*(char *)((long)plStack_50 + 7) == UNK_014e49a2);
    auVar30[3] = -((char)plStack_50[1] == UNK_014e49a3);
    auVar30[4] = -(*(char *)((long)plStack_50 + 9) == UNK_014e49a4);
    auVar30[5] = -(*(char *)((long)plStack_50 + 10) == UNK_014e49a5);
    auVar30[6] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e49a6);
    auVar30[7] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e49a7);
    auVar30[8] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e49a8);
    auVar30[9] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e49a9);
    auVar30[10] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e49aa);
    auVar30[0xb] = -((char)plStack_50[2] == UNK_014e49ab);
    auVar30[0xc] = -(*(char *)((long)plStack_50 + 0x11) == UNK_014e49ac);
    auVar30[0xd] = -(*(char *)((long)plStack_50 + 0x12) == UNK_014e49ad);
    auVar30[0xe] = -(*(char *)((long)plStack_50 + 0x13) == UNK_014e49ae);
    auVar30[0xf] = -(*(char *)((long)plStack_50 + 0x14) == UNK_014e49af);
    auVar20[0] = -((char)*plStack_50 == UNK_014e3400);
    auVar20[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e3401);
    auVar20[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e3402);
    auVar20[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e3403);
    auVar20[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e3404);
    auVar20[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e3405);
    auVar20[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e3406);
    auVar20[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e3407);
    auVar20[8] = -((char)plStack_50[1] == UNK_014e3408);
    auVar20[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e3409);
    auVar20[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e340a);
    auVar20[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e340b);
    auVar20[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e340c);
    auVar20[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e340d);
    auVar20[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e340e);
    auVar20[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e340f);
    auVar20 = auVar20 & auVar30;
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0b29a5a3;
code_r0x0b29a403:
    auVar31[0] = -(*(char *)((long)plStack_50 + 5) == UNK_014e8900);
    auVar31[1] = -(*(char *)((long)plStack_50 + 6) == UNK_014e8901);
    auVar31[2] = -(*(char *)((long)plStack_50 + 7) == UNK_014e8902);
    auVar31[3] = -((char)plStack_50[1] == UNK_014e8903);
    auVar31[4] = -(*(char *)((long)plStack_50 + 9) == UNK_014e8904);
    auVar31[5] = -(*(char *)((long)plStack_50 + 10) == UNK_014e8905);
    auVar31[6] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e8906);
    auVar31[7] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e8907);
    auVar31[8] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e8908);
    auVar31[9] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e8909);
    auVar31[10] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e890a);
    auVar31[0xb] = -((char)plStack_50[2] == UNK_014e890b);
    auVar31[0xc] = -(*(char *)((long)plStack_50 + 0x11) == UNK_014e890c);
    auVar31[0xd] = -(*(char *)((long)plStack_50 + 0x12) == UNK_014e890d);
    auVar31[0xe] = -(*(char *)((long)plStack_50 + 0x13) == UNK_014e890e);
    auVar31[0xf] = -(*(char *)((long)plStack_50 + 0x14) == UNK_014e890f);
    auVar21[0] = -((char)*plStack_50 == UNK_014e8910);
    auVar21[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e8911);
    auVar21[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e8912);
    auVar21[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e8913);
    auVar21[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e8914);
    auVar21[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e8915);
    auVar21[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e8916);
    auVar21[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e8917);
    auVar21[8] = -((char)plStack_50[1] == UNK_014e8918);
    auVar21[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e8919);
    auVar21[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e891a);
    auVar21[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e891b);
    auVar21[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e891c);
    auVar21[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e891d);
    auVar21[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e891e);
    auVar21[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e891f);
    auVar21 = auVar21 & auVar31;
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) != 0xffff) {
      return;
    }
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar9 = _UNK_0124be34;
    bStack_b0 = 0x29;
    uStack_af = 0;
    uStack_a8 = 0x27;
    uStack_a7 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    puVar7[2] = _UNK_0124be2c;
    puVar7[3] = uVar9;
    uVar9 = _UNK_0124be24;
    *puVar7 = _UNK_0124be1c;
    puVar7[1] = uVar9;
    *(undefined8 *)((long)puVar7 + 0x1f) = 0x6b636f6c625f6874;
    *(undefined1 *)((long)puVar7 + 0x27) = 0;
    puStack_a0 = puVar7;
    lVar6 = func_0x0b29f480(lVar15 + 200,&bStack_b0);
    if ((bStack_b0 & 1) != 0) {
      func_0x0412a280(puStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
    }
    if (lVar6 == 0) {
      return;
    }
    bStack_b0 = 0x7d;
    uStack_af = 0x13186;
    uStack_a8 = 0x19;
    uStack_a7 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    auVar39 = func_0x05f28760(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),&bStack_b0
                              ,auStack_88,&puStack_68);
    lVar15 = auVar39._0_8_;
    if (lVar15 == auVar39._8_8_) {
      lVar15 = *(long *)(lVar6 + 0x30);
      lVar14 = *(long *)(lVar6 + 0x48);
      lVar16 = lVar15;
      lVar18 = lVar14;
    }
    else {
      lVar14 = ((ulong)(lVar15 - *(long *)(lVar6 + 0x28)) >> 3) * -0x5555555555555540 +
               *(long *)(lVar6 + 0x40);
      lVar16 = *(long *)(lVar6 + 0x30);
      lVar18 = *(long *)(lVar6 + 0x48);
    }
    if (lVar15 != lVar16) {
      return;
    }
    if (lVar14 != lVar18) {
      return;
    }
    lVar6 = lVar6 + 0x28;
    auStack_88._8_8_ = 0x19;
    auStack_88._0_8_ = &UNK_0131867d;
    func_0x0b29d9c0(&bStack_b0,lVar6);
    goto code_r0x0b29aba4;
  case 0x16:
    auVar32[0] = -(*(char *)((long)plStack_50 + 6) == UNK_014e38f0);
    auVar32[1] = -(*(char *)((long)plStack_50 + 7) == UNK_014e38f1);
    auVar32[2] = -((char)plStack_50[1] == UNK_014e38f2);
    auVar32[3] = -(*(char *)((long)plStack_50 + 9) == UNK_014e38f3);
    auVar32[4] = -(*(char *)((long)plStack_50 + 10) == UNK_014e38f4);
    auVar32[5] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e38f5);
    auVar32[6] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e38f6);
    auVar32[7] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e38f7);
    auVar32[8] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e38f8);
    auVar32[9] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e38f9);
    auVar32[10] = -((char)plStack_50[2] == UNK_014e38fa);
    auVar32[0xb] = -(*(char *)((long)plStack_50 + 0x11) == UNK_014e38fb);
    auVar32[0xc] = -(*(char *)((long)plStack_50 + 0x12) == UNK_014e38fc);
    auVar32[0xd] = -(*(char *)((long)plStack_50 + 0x13) == UNK_014e38fd);
    auVar32[0xe] = -(*(char *)((long)plStack_50 + 0x14) == UNK_014e38fe);
    auVar32[0xf] = -(*(char *)((long)plStack_50 + 0x15) == UNK_014e38ff);
    auVar39[0] = -((char)*plStack_50 == UNK_014e9880);
    auVar39[1] = -(*(char *)((long)plStack_50 + 1) == UNK_014e9881);
    auVar39[2] = -(*(char *)((long)plStack_50 + 2) == UNK_014e9882);
    auVar39[3] = -(*(char *)((long)plStack_50 + 3) == UNK_014e9883);
    auVar39[4] = -(*(char *)((long)plStack_50 + 4) == UNK_014e9884);
    auVar39[5] = -(*(char *)((long)plStack_50 + 5) == UNK_014e9885);
    auVar39[6] = -(*(char *)((long)plStack_50 + 6) == UNK_014e9886);
    auVar39[7] = -(*(char *)((long)plStack_50 + 7) == UNK_014e9887);
    auVar39[8] = -((char)plStack_50[1] == UNK_014e9888);
    auVar39[9] = -(*(char *)((long)plStack_50 + 9) == UNK_014e9889);
    auVar39[10] = -(*(char *)((long)plStack_50 + 10) == UNK_014e988a);
    auVar39[0xb] = -(*(char *)((long)plStack_50 + 0xb) == UNK_014e988b);
    auVar39[0xc] = -(*(char *)((long)plStack_50 + 0xc) == UNK_014e988c);
    auVar39[0xd] = -(*(char *)((long)plStack_50 + 0xd) == UNK_014e988d);
    auVar39[0xe] = -(*(char *)((long)plStack_50 + 0xe) == UNK_014e988e);
    auVar39[0xf] = -(*(char *)((long)plStack_50 + 0xf) == UNK_014e988f);
    auVar39 = auVar39 & auVar32;
    uVar3 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
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
joined_r0x0b29a561:
    if (uVar3 != 0xffff) {
      return;
    }
  }
  bStack_b0 = 0x7d;
  uStack_af = 0x13186;
  uStack_a8 = 0x19;
  uStack_a7 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  auVar39 = func_0x05f28760(*(undefined8 *)(lVar15 + 0x98),*(undefined8 *)(lVar15 + 0xa0),&bStack_b0
                            ,auStack_88,&puStack_68);
  lVar14 = auVar39._0_8_;
  if (lVar14 == auVar39._8_8_) {
    lVar16 = *(long *)(lVar15 + 0xb8);
    lVar18 = lVar16;
  }
  else {
    lVar16 = ((ulong)(lVar14 - *(long *)(lVar15 + 0x98)) >> 3) * -0x5555555555555540 +
             *(long *)(lVar15 + 0xb0);
    lVar18 = *(long *)(lVar15 + 0xb8);
    if (lVar14 != *(long *)(lVar15 + 0xa0)) {
      return;
    }
  }
  if (lVar16 == lVar18) {
    auStack_88._8_8_ = 0x19;
    auStack_88._0_8_ = &UNK_0131867d;
    func_0x0b29d9c0(&bStack_b0,lVar6);
code_r0x0b29aba4:
    func_0x0b29d8f0(lVar6);
  }
LAB_0b29aba9:
  return;
}


