/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x58f9780 (ELF vaddr 0x57f9780)
 * Label: caller-of-callee
 * Body:  [[058f9780, 058f9c87] [058f9c90, 058fa385] [058fa390, 058fa3ce] [058fa3d0, 058fa5fa] [058fa70a, 058fa737] [058fa75d, 058fa7cb]]
 * Ghidra: FUN_058f9780
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_058f9780(long param_1,byte *param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *puVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  bool bVar32;
  undefined1 uStack_179;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined8 *puStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  undefined8 *puStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  uint *puStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  byte *pbStack_b0;
  long lStack_78;
  byte *pbStack_70;
  
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  pbStack_158 = (byte *)0x0;
  func_0x04130630(&uStack_170,param_3);
  lStack_f0 = param_1;
  if (*param_3 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0xcbf29ce484222325;
    uVar15 = func_0x0eee2e90(param_3);
    if (uVar15 != 0) {
      uVar20 = (ulong)((uint)uVar15 & 7);
      if (7 < uVar15) {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        do {
          uVar29 = (((((((uVar29 * 0x100000001b3 ^ (ulong)*param_3) * 0x100000001b3 ^
                        (ulong)param_3[1]) * 0x100000001b3 ^ (ulong)param_3[2]) * 0x100000001b3 ^
                      (ulong)param_3[3]) * 0x100000001b3 ^ (ulong)param_3[4]) * 0x100000001b3 ^
                    (ulong)param_3[5]) * 0x100000001b3 ^ (ulong)param_3[6]) * 0x100000001b3 ^
                   (ulong)param_3[7];
          param_3 = param_3 + 8;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar20 != 0) {
        uVar15 = 0;
        do {
          uVar29 = uVar29 * 0x100000001b3 ^ (ulong)param_3[uVar15];
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
      }
    }
  }
  lStack_78 = 0;
  puStack_b8 = (undefined8 *)&UNK_0efec418;
  uStack_178 = uVar29;
  pbStack_b0 = param_2;
  pbStack_70 = param_2;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_138 = puStack_b8;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0efec1f0;
  puStack_b8 = (undefined8 *)0x0;
  pbStack_130 = pbStack_b0;
  plVar16[4] = (long)&UNK_0f2ccd78;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  func_0x04aa75f0(plVar16 + 0xe,&uStack_179,&UNK_01254d89);
  *(undefined1 *)(plVar16 + 0x10) = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0xffffffff;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = 0;
  plVar16[0x1e] = 0;
  plVar16[0x1f] = 0;
  plVar16[4] = (long)&UNK_0efec240;
  plVar16[0x2e] = 0;
  plVar16[0x2f] = 0;
  plVar16[0x30] = 0;
  plVar16[0x31] = 0;
  plVar16[0x32] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  *(undefined4 *)(plVar16 + 0x35) = 0x3f800000;
  plVar16[0x36] = 0;
  plVar16[0x37] = 0;
  if (puStack_138 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_138)(&puStack_138,plVar16 + 0x36);
    puVar18 = puStack_138;
  }
  plVar6 = plVar16 + 4;
  puStack_138 = (undefined8 *)0x0;
  plVar16[0x36] = (long)puVar18;
  *(undefined1 *)(plVar16 + 0x3e) = 0;
  puStack_e0 = (uint *)(plVar16 + 0x12);
  if (plVar16 + 0x11 != (long *)&DAT_0f552138) {
    if ((*puStack_e0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar16[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puStack_e0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar16 + 0x94) = uVar7;
        *(undefined4 *)(plVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar16 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puStack_e0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar32 = (_DAT_0f552140 & 1) != 0;
      lVar25 = 0xf552141;
      if (bVar32) {
        lVar25 = _DAT_0f552150;
      }
      uVar29 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_e0,lVar25,uVar29);
    }
  }
  plVar16[0x11] = _DAT_0f552138;
  plVar16[0x15] = 0;
  if (puStack_138 != (undefined8 *)0x0) {
    (*(code *)puStack_138[1])(&puStack_138);
  }
  plVar23 = plVar16 + 1;
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  LOCK();
  *plVar23 = *plVar23 + 1;
  UNLOCK();
  pbStack_148 = (byte *)(plVar16 + 0x11);
  plStack_c0 = plVar23;
  pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar17 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar29 = uStack_178;
  pbVar17[8] = 0;
  pbVar17[9] = 0;
  pbVar17[10] = 0;
  pbVar17[0xb] = 0;
  pbVar17[0xc] = 0;
  pbVar17[0xd] = 0;
  pbVar17[0xe] = 0;
  pbVar17[0xf] = 0;
  pbVar17[0x10] = 0;
  pbVar17[0x11] = 0;
  pbVar17[0x12] = 0;
  pbVar17[0x13] = 0;
  pbVar17[0x14] = 0;
  pbVar17[0x15] = 0;
  pbVar17[0x16] = 0;
  pbVar17[0x17] = 0;
  *(undefined **)pbVar17 = &UNK_0efec320;
  pbVar17[0x30] = 0;
  pbVar17[0x31] = 0;
  pbVar17[0x32] = 0;
  pbVar17[0x33] = 0;
  pbVar17[0x34] = 0;
  pbVar17[0x35] = 0;
  pbVar17[0x36] = 0;
  pbVar17[0x37] = 0;
  pbVar17[0x38] = 0;
  pbVar17[0x39] = 0;
  pbVar17[0x3a] = 0;
  pbVar17[0x3b] = 0;
  pbVar17[0x3c] = 0;
  pbVar17[0x3d] = 0;
  pbVar17[0x3e] = 0;
  pbVar17[0x3f] = 0;
  *(undefined **)(pbVar17 + 0x20) = &UNK_0efec370;
  *(long **)(pbVar17 + 0x70) = plVar6;
  *(long **)(pbVar17 + 0x78) = plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  pbStack_d8 = pbVar17 + 8;
  pbStack_f8 = *(byte **)(lStack_f0 + 0xb8);
  pbVar27 = *(byte **)(lStack_f0 + 0xc0);
  pbStack_150 = pbVar17;
  pbStack_140 = pbVar17;
  plStack_c8 = plVar6;
  if (pbStack_f8 != pbVar27) {
    if ((uStack_170 & 1) == 0) {
      lStack_d0 = (long)&uStack_170 + 1;
      uVar15 = uStack_170 >> 1 & 0x7f;
    }
    else {
      lStack_d0 = lStack_160;
      uVar15 = uStack_168;
    }
    pbStack_e8 = pbStack_158;
    pbVar31 = pbStack_f8 + 0x19;
    do {
      if (*(ulong *)(pbVar31 + -9) == uVar29) {
        pbVar17 = pbVar31 + -9;
        if ((*(ulong **)(pbVar31 + 0x17) == &uStack_178) && (pbVar17 == pbStack_e8)) {
LAB_058fa0e1:
          pbVar31 = pbVar31 + -0x19;
          pbVar17 = pbStack_148;
          pbVar30 = pbStack_150;
          goto LAB_058fa0ef;
        }
        bVar5 = pbVar31[-1];
        if ((bVar5 & 1) == 0) {
          uVar20 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar20 = *(ulong *)(pbVar31 + 7);
        }
        if (uVar20 == uVar15) {
          pbVar30 = pbVar31;
          if ((bVar5 & 1) != 0) {
            pbVar30 = *(byte **)(pbVar31 + 0xf);
          }
          iVar14 = func_0x0eee3000(pbVar30,lStack_d0,uVar15);
          if (iVar14 == 0) {
            *(ulong **)(pbVar31 + 0x17) = &uStack_178;
            pbStack_158 = pbVar17;
            goto LAB_058fa0e1;
          }
        }
      }
      pbVar31[0x17] = 0;
      pbVar31[0x18] = 0;
      pbVar31[0x19] = 0;
      pbVar31[0x1a] = 0;
      pbVar31[0x1b] = 0;
      pbVar31[0x1c] = 0;
      pbVar31[0x1d] = 0;
      pbVar31[0x1e] = 0;
      pbVar30 = pbVar31 + 0x8f;
      pbVar31 = pbVar31 + 0xa8;
    } while (pbVar30 != pbVar27);
  }
  lVar25 = lStack_f0;
  if (pbVar27 < *(byte **)(lStack_f0 + 200)) {
    func_0x058fc9c0(pbVar27);
    pbVar27 = pbVar27 + 0xa8;
    *(byte **)(lVar25 + 0xc0) = pbVar27;
LAB_058f9f54:
    *(byte **)(lVar25 + 0xc0) = pbVar27;
    FUN_0b63b6d0(*(undefined8 *)(pbVar27 + -0xa8),&uStack_178);
    lVar21 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar25 + 0x60);
    if ((ulong *)(lVar21 + -0x98) != &uStack_178) {
      pbVar17 = (byte *)(lVar21 + -0x90);
      if ((*pbVar17 & 1) == 0) {
        if ((uStack_170 & 1) == 0) {
          *(long *)(lVar21 + -0x80) = lStack_160;
          *(undefined4 *)pbVar17 = (undefined4)uStack_170;
          *(undefined4 *)(lVar21 + -0x8c) = uStack_170._4_4_;
          *(undefined4 *)(lVar21 + -0x88) = (undefined4)uStack_168;
          *(undefined4 *)(lVar21 + -0x84) = uStack_168._4_4_;
        }
        else {
          func_0x04885070(pbVar17,lStack_160,uStack_168);
        }
      }
      else {
        uVar29 = uStack_170 >> 1 & 0x7f;
        lVar24 = (long)&uStack_170 + 1;
        if ((uStack_170 & 1) != 0) {
          uVar29 = uStack_168;
          lVar24 = lStack_160;
        }
        func_0x04885120(pbVar17,lVar24,uVar29);
      }
    }
    *(ulong *)(lVar21 + -0x98) = uStack_178;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&puStack_138,&uStack_170,*(undefined1 *)(lVar25 + 0x60));
    lVar21 = *(long *)(lVar25 + 0xc0);
    func_0x04167a70(lVar21 + -0x70,&puStack_138);
    *(byte **)(lVar21 + -0x68) = pbStack_130;
    *(byte **)(lVar21 + -0x60) = pbStack_128;
    *(undefined8 **)(lVar21 + -0x58) = puStack_120;
    *(byte **)(lVar21 + -0x50) = pbStack_118;
    uVar7 = (undefined4)uStack_110;
    uVar8 = uStack_110._4_4_;
    uVar9 = (undefined4)uStack_108;
    uVar13 = uStack_108._4_4_;
    uStack_110 = 0;
    uStack_108 = (byte *)0x0;
    plVar6 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar7;
    *(undefined4 *)(lVar21 + -0x44) = uVar8;
    *(undefined4 *)(lVar21 + -0x40) = uVar9;
    *(undefined4 *)(lVar21 + -0x3c) = uVar13;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar23 = plVar6 + 1;
      lVar24 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    pbVar27 = uStack_108;
    pbVar17 = pbStack_148;
    pbVar30 = pbStack_150;
    *(undefined8 *)(lVar21 + -0x38) = uStack_100;
    if (uStack_108 != (byte *)0x0) {
      LOCK();
      pbVar31 = uStack_108 + 8;
      lVar21 = *(long *)pbVar31;
      *(long *)pbVar31 = *(long *)pbVar31 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)uStack_108 + 0x10))(uStack_108);
        func_0x0412c2d0(pbVar27);
      }
    }
    func_0x04167a40(&puStack_138);
    lVar25 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 0;
    pbVar31 = (byte *)(lVar25 + -0xa8);
LAB_058fa0ef:
    pbVar30 = pbVar30 + 0x20;
    pbVar26 = *(byte **)(pbVar31 + 0x90);
    if (pbVar26 < *(byte **)(pbVar31 + 0x98)) {
      pbVar26[0x10] = 0;
      pbVar26[0x11] = 0;
      pbVar26[0x12] = 0;
      pbVar26[0x13] = 0;
      pbVar26[0x14] = 0;
      pbVar26[0x15] = 0;
      pbVar26[0x16] = 0;
      pbVar26[0x17] = 0;
      pbVar26[0x18] = 0;
      pbVar26[0x19] = 0;
      pbVar26[0x1a] = 0;
      pbVar26[0x1b] = 0;
      pbVar26[0x1c] = 0;
      pbVar26[0x1d] = 0;
      pbVar26[0x1e] = 0;
      pbVar26[0x1f] = 0;
      pbVar26[0] = 0;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0;
      pbVar26[4] = 0;
      pbVar26[5] = 0;
      pbVar26[6] = 0;
      pbVar26[7] = 0;
      pbVar26[8] = 0;
      pbVar26[9] = 0;
      pbVar26[10] = 0;
      pbVar26[0xb] = 0;
      pbVar26[0xc] = 0;
      pbVar26[0xd] = 0;
      pbVar26[0xe] = 0;
      pbVar26[0xf] = 0;
      pbVar26[0x20] = 0;
      pbVar26[0x21] = 0;
      pbVar26[0x22] = 0;
      pbVar26[0x23] = 0;
      pbVar26[0x24] = 0;
      pbVar26[0x25] = 0;
      pbVar26[0x26] = 0;
      pbVar26[0x27] = 0;
      if (pbVar26 != pbVar17) {
        if ((*puStack_e0 & 1) == 0) {
          *(undefined8 *)(pbVar26 + 0x18) = *(undefined8 *)(puStack_e0 + 4);
          uVar19 = *(undefined8 *)(puStack_e0 + 2);
          *(undefined8 *)(pbVar26 + 8) = *(undefined8 *)puStack_e0;
          *(undefined8 *)(pbVar26 + 0x10) = uVar19;
        }
        else {
          func_0x04885070(pbVar26 + 8,plVar16[0x14],plVar16[0x13]);
        }
      }
      *(undefined8 *)pbVar26 = *(undefined8 *)pbVar17;
      *(byte **)(pbVar26 + 0x28) = pbVar30;
      *(byte **)(pbVar26 + 0x30) = pbStack_140;
      LOCK();
      *(long *)(pbStack_140 + 8) = *(long *)(pbStack_140 + 8) + 1;
      UNLOCK();
      pbVar26 = pbVar26 + 0x38;
      *(byte **)(pbVar31 + 0x90) = pbVar26;
      goto LAB_058fa430;
    }
    lVar25 = (long)pbVar26 - *(long *)(pbVar31 + 0x88);
    uVar29 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar29 < 0x492492492492493) {
      lVar21 = (long)*(byte **)(pbVar31 + 0x98) - *(long *)(pbVar31 + 0x88) >> 3;
      uVar15 = lVar21 * -0x2492492492492492;
      if (uVar29 < uVar15) {
        uVar29 = uVar15;
      }
      pbStack_118 = pbVar31 + 0x88;
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar29 = 0x492492492492492;
      }
      pbStack_150 = pbVar30;
      pbStack_e8 = pbStack_118;
      if (uVar29 == 0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar29) goto LAB_058fa5c3;
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x38);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar29 * 0x38,0);
          puVar18 = (undefined8 *)0x0;
        }
      }
      pbVar17 = (byte *)((long)puVar18 + lVar25);
      puStack_120 = puVar18 + uVar29 * 7;
      puVar4 = (undefined8 *)((long)puVar18 + lVar25 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25) = 0;
      ((undefined8 *)((long)puVar18 + lVar25))[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25 + 0x20) = 0;
      pbStack_128 = pbVar17;
      puStack_138 = puVar18;
      pbStack_130 = pbVar17;
      if (pbVar17 != pbStack_148) {
        puVar28 = (uint *)((long)puVar18 + lVar25 + 8);
        if ((*puStack_e0 & 1) == 0) {
          *(undefined8 *)((long)puVar18 + lVar25 + 0x18) = *(undefined8 *)(puStack_e0 + 4);
          uVar10 = puStack_e0[1];
          uVar11 = puStack_e0[2];
          uVar12 = puStack_e0[3];
          *puVar28 = *puStack_e0;
          *(uint *)((long)puVar18 + lVar25 + 0xc) = uVar10;
          *(uint *)((long)puVar18 + lVar25 + 0x10) = uVar11;
          *(uint *)((long)puVar18 + lVar25 + 0x14) = uVar12;
        }
        else {
          func_0x04885070(puVar28,plVar16[0x14],plVar16[0x13]);
        }
      }
      *(undefined8 *)pbVar17 = *(undefined8 *)pbStack_148;
      *(byte **)(pbVar17 + 0x28) = pbStack_150;
      *(byte **)(pbVar17 + 0x30) = pbStack_140;
      LOCK();
      *(long *)(pbStack_140 + 8) = *(long *)(pbStack_140 + 8) + 1;
      UNLOCK();
      pbStack_128 = pbStack_128 + 0x38;
      puVar18 = *(undefined8 **)(pbVar31 + 0x88);
      puVar4 = *(undefined8 **)(pbVar31 + 0x90);
      pbVar17 = pbStack_130 + ((long)puVar18 - (long)puVar4);
      pbVar27 = pbVar17;
      puVar22 = puVar18;
      if ((long)puVar18 - (long)puVar4 != 0) {
        do {
          pbVar27[0x10] = 0;
          pbVar27[0x11] = 0;
          pbVar27[0x12] = 0;
          pbVar27[0x13] = 0;
          pbVar27[0x14] = 0;
          pbVar27[0x15] = 0;
          pbVar27[0x16] = 0;
          pbVar27[0x17] = 0;
          pbVar27[0x18] = 0;
          pbVar27[0x19] = 0;
          pbVar27[0x1a] = 0;
          pbVar27[0x1b] = 0;
          pbVar27[0x1c] = 0;
          pbVar27[0x1d] = 0;
          pbVar27[0x1e] = 0;
          pbVar27[0x1f] = 0;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          pbVar27[8] = 0;
          pbVar27[9] = 0;
          pbVar27[10] = 0;
          pbVar27[0xb] = 0;
          pbVar27[0xc] = 0;
          pbVar27[0xd] = 0;
          pbVar27[0xe] = 0;
          pbVar27[0xf] = 0;
          pbVar27[0x20] = 0;
          pbVar27[0x21] = 0;
          pbVar27[0x22] = 0;
          pbVar27[0x23] = 0;
          pbVar27[0x24] = 0;
          pbVar27[0x25] = 0;
          pbVar27[0x26] = 0;
          pbVar27[0x27] = 0;
          *(undefined8 *)(pbVar27 + 0x18) = puVar22[3];
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar27 + 8) = puVar22[1];
          *(undefined8 *)(pbVar27 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar27 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar27 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar27 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar27 = pbVar27 + 0x38;
        } while (puVar22 != puVar4);
        do {
          plVar6 = (long *)puVar18[6];
          if (plVar6 == (long *)0x0) {
LAB_058fa3b5:
            bVar5 = *(byte *)(puVar18 + 1);
          }
          else {
            LOCK();
            plVar23 = plVar6 + 1;
            lVar25 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar25 != 0) goto LAB_058fa3b5;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
            bVar5 = *(byte *)(puVar18 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar18[3],puVar18[1] & 0xfffffffffffffffe);
          }
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar4);
        puVar18 = *(undefined8 **)pbStack_e8;
      }
      pbVar26 = pbStack_128;
      *(byte **)(pbVar31 + 0x88) = pbVar17;
      *(byte **)(pbVar31 + 0x90) = pbStack_128;
      lVar25 = *(long *)(pbVar31 + 0x98);
      *(undefined8 **)(pbVar31 + 0x98) = puStack_120;
      if (puVar18 != (undefined8 *)0x0) {
        func_0x0412a280(puVar18,lVar25 - (long)puVar18);
      }
LAB_058fa430:
      plVar6 = plStack_c8;
      *(byte **)(pbVar31 + 0x90) = pbVar26;
      uVar7 = *(undefined4 *)pbVar31;
      uVar8 = *(undefined4 *)(pbVar31 + 4);
      uVar9 = *(undefined4 *)(pbVar31 + 8);
      uVar13 = *(undefined4 *)(pbVar31 + 0xc);
      if (*(long *)(pbVar31 + 8) != 0) {
        LOCK();
        plVar23 = (long *)(*(long *)(pbVar31 + 8) + 8);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
      }
      plVar23 = (long *)plVar16[0xf];
      *(undefined4 *)(plVar16 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar16 + 0x74) = uVar8;
      *(undefined4 *)(plVar16 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar16 + 0x7c) = uVar13;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar1 = plVar23 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
      }
      pbVar17 = pbStack_140;
      *(byte *)(plVar16 + 0x10) = pbVar31[0xa1];
      LOCK();
      lVar25 = *(long *)pbStack_d8;
      *(long *)pbStack_d8 = *(long *)pbStack_d8 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbStack_140 + 0x10))(pbStack_140);
        func_0x0412c2d0(pbVar17);
        LOCK();
        lVar25 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar23 = plStack_c0;
      }
      else {
        LOCK();
        lVar25 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar23 = plStack_c0;
      }
      plStack_c0 = plVar23;
      if (lVar25 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
        LOCK();
        lVar25 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_170 & 1) != 0) {
        func_0x0412a280(lStack_160,uStack_170 & 0xfffffffffffffffe);
      }
      return plVar6;
    }
  }
  else {
    pbVar27 = pbVar27 + -(long)pbStack_f8;
    uVar29 = ((long)pbVar27 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar29) goto LAB_058fa5cd;
    lVar21 = (long)*(byte **)(lStack_f0 + 200) - (long)pbStack_f8 >> 3;
    uVar15 = lVar21 * -0x6186186186186186;
    if (uVar29 < uVar15) {
      uVar29 = uVar15;
    }
    pbVar31 = (byte *)(lStack_f0 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar29 = 0x186186186186186;
    }
    pbStack_118 = pbVar31;
    if (uVar29 == 0) {
      puVar18 = (undefined8 *)0x0;
LAB_058f9d82:
      pbStack_130 = pbVar27 + (long)puVar18;
      puStack_120 = puVar18 + uVar29 * 0x15;
      puStack_138 = puVar18;
      pbStack_128 = pbStack_130;
      func_0x058fc9c0(pbStack_130);
      pbVar27 = pbStack_128 + 0xa8;
      lVar21 = *(long *)(lVar25 + 0xb8);
      lVar25 = *(long *)(lVar25 + 0xc0);
      pbVar17 = pbStack_130 + (lVar21 - lVar25);
      if (lVar21 != lVar25) {
        lVar24 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar24))[1];
          *(undefined8 *)(pbVar17 + lVar24) = *(undefined8 *)(lVar21 + lVar24);
          *(undefined8 *)(pbVar17 + lVar24 + 8) = uVar19;
          *(undefined8 *)(lVar21 + lVar24) = 0;
          ((undefined8 *)(lVar21 + lVar24))[1] = 0;
          pbVar30 = pbVar17 + lVar24 + 0x20;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          pbVar30[8] = 0;
          pbVar30[9] = 0;
          pbVar30[10] = 0;
          pbVar30[0xb] = 0;
          pbVar30[0xc] = 0;
          pbVar30[0xd] = 0;
          pbVar30[0xe] = 0;
          pbVar30[0xf] = 0;
          pbVar30 = pbVar17 + lVar24 + 0x10;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          pbVar30[8] = 0;
          pbVar30[9] = 0;
          pbVar30[10] = 0;
          pbVar30[0xb] = 0;
          pbVar30[0xc] = 0;
          pbVar30[0xd] = 0;
          pbVar30[0xe] = 0;
          pbVar30[0xf] = 0;
          pbVar30 = pbVar17 + lVar24 + 0x30;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          *(undefined8 *)(pbVar17 + lVar24 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar24);
          puVar3 = (undefined4 *)(lVar21 + 0x18 + lVar24);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          pbVar30 = pbVar17 + lVar24 + 0x18;
          *(undefined4 *)pbVar30 = *puVar3;
          *(undefined4 *)(pbVar30 + 4) = uVar7;
          *(undefined4 *)(pbVar30 + 8) = uVar8;
          *(undefined4 *)(pbVar30 + 0xc) = uVar9;
          *(undefined2 *)(lVar21 + 0x18 + lVar24) = 0;
          *(undefined8 *)(pbVar17 + lVar24 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar24);
          func_0x04167a20(pbVar17 + lVar24 + 0x38,lVar24 + lVar21 + 0x38);
          puVar18 = (undefined8 *)(lVar21 + 0x40 + lVar24);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar17 + lVar24 + 0x40) = *puVar18;
          *(undefined8 *)(pbVar17 + lVar24 + 0x40 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x50 + lVar24);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar17 + lVar24 + 0x50) = *puVar18;
          *(undefined8 *)(pbVar17 + lVar24 + 0x50 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar24);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar17 + lVar24 + 0x60) = *puVar18;
          *(undefined8 *)(pbVar17 + lVar24 + 0x60 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar24);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(pbVar17 + lVar24 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar24);
          puVar18 = (undefined8 *)(lVar21 + 0x78 + lVar24);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar17 + lVar24 + 0x78) = *puVar18;
          *(undefined8 *)(pbVar17 + lVar24 + 0x78 + 8) = uVar19;
          pbVar30 = pbVar17 + lVar24 + 0x88;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          pbVar30[8] = 0;
          pbVar30[9] = 0;
          pbVar30[10] = 0;
          pbVar30[0xb] = 0;
          pbVar30[0xc] = 0;
          pbVar30[0xd] = 0;
          pbVar30[0xe] = 0;
          pbVar30[0xf] = 0;
          pbVar30 = pbVar17 + lVar24 + 0x98;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          puVar3 = (undefined4 *)(lVar21 + 0x88 + lVar24);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          pbVar30 = pbVar17 + lVar24 + 0x88;
          *(undefined4 *)pbVar30 = *puVar3;
          *(undefined4 *)(pbVar30 + 4) = uVar7;
          *(undefined4 *)(pbVar30 + 8) = uVar8;
          *(undefined4 *)(pbVar30 + 0xc) = uVar9;
          *(undefined8 *)(pbVar17 + lVar24 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar24);
          puVar18 = (undefined8 *)(lVar21 + 0x88 + lVar24);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar24) = 0;
          *(undefined2 *)(pbVar17 + lVar24 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar24);
          lVar2 = lVar24 + lVar21;
          lVar24 = lVar24 + 0xa8;
        } while (lVar2 + 0xa8 != lVar25);
        do {
          func_0x058f9620(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar25);
        lVar21 = *(long *)pbVar31;
      }
      lVar25 = lStack_f0;
      *(byte **)(lStack_f0 + 0xb8) = pbVar17;
      *(byte **)(lStack_f0 + 0xc0) = pbVar27;
      lVar24 = *(long *)(lStack_f0 + 200);
      *(undefined8 **)(lStack_f0 + 200) = puStack_120;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar24 - lVar21);
      }
      goto LAB_058f9f54;
    }
    if (uVar29 < 0x186186186186187) {
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar29 * 0xa8,0);
        puVar18 = (undefined8 *)0x0;
      }
      goto LAB_058f9d82;
    }
LAB_058fa5c3:
    FUN_04882eb0();
  }
  func_0x058fcc00();
LAB_058fa5cd:
  uVar19 = func_0x058fcb30();
  if ((*pbVar27 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar17 + 0x18),*(ulong *)(pbVar17 + 8) & 0xfffffffffffffffe);
  }
  func_0x058fcb40(&puStack_138);
  pbVar17 = pbStack_140;
  LOCK();
  lVar25 = *(long *)pbStack_d8;
  *(long *)pbStack_d8 = *(long *)pbStack_d8 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*(long *)pbStack_140 + 0x10))(pbStack_140);
    func_0x0412c2d0(pbVar17);
  }
  func_0x058fa7d0(plVar16);
  func_0x058fa800(plVar16);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_170 & 1) != 0) goto LAB_058fa711;
  do {
    do {
      uVar19 = func_0x0eee2d70(uVar19);
    } while ((uStack_170 & 1) == 0);
LAB_058fa711:
    func_0x0412a280(lStack_160,uStack_170 & 0xfffffffffffffffe);
  } while( true );
}


