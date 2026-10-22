/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6e55320 (ELF vaddr 0x6d55320)
 * Label: caller-of-callee
 * Body:  [[06e55320, 06e5576b] [06e55770, 06e557d7] [06e557e0, 06e55ecd] [06e55ed0, 06e55f0d] [06e55f10, 06e5612f] [06e56214, 06e56241] [06e56267, 06e562d6]]
 * Ghidra: FUN_06e55320
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_06e55320(long *param_1,ulong *param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long *plVar24;
  ulong *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  uint *puVar30;
  bool bVar31;
  undefined1 uStack_181;
  ulong *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  byte *pbStack_158;
  long *plStack_150;
  ulong *puStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  undefined8 *puStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  ulong *puStack_e8;
  byte *pbStack_e0;
  ulong *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong *puStack_c0;
  undefined8 *puStack_b8;
  ulong *puStack_b0;
  long lStack_78;
  ulong *puStack_70;
  
  lVar22 = *param_1;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  pbStack_158 = (byte *)0x0;
  func_0x04130630(&uStack_170,param_3);
  if (*param_3 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = 0xcbf29ce484222325;
    uVar13 = func_0x0eee2e90(param_3);
    if (uVar13 != 0) {
      uVar18 = (ulong)((uint)uVar13 & 7);
      if (7 < uVar13) {
        uVar13 = uVar13 & 0xfffffffffffffff8;
        do {
          uVar28 = (((((((uVar28 * 0x100000001b3 ^ (ulong)*param_3) * 0x100000001b3 ^
                        (ulong)param_3[1]) * 0x100000001b3 ^ (ulong)param_3[2]) * 0x100000001b3 ^
                      (ulong)param_3[3]) * 0x100000001b3 ^ (ulong)param_3[4]) * 0x100000001b3 ^
                    (ulong)param_3[5]) * 0x100000001b3 ^ (ulong)param_3[6]) * 0x100000001b3 ^
                   (ulong)param_3[7];
          param_3 = param_3 + 8;
          uVar13 = uVar13 - 8;
        } while (uVar13 != 0);
      }
      if (uVar18 != 0) {
        uVar13 = 0;
        do {
          uVar28 = uVar28 * 0x100000001b3 ^ (ulong)param_3[uVar13];
          uVar13 = uVar13 + 1;
        } while (uVar18 != uVar13);
      }
    }
  }
  lStack_78 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f093200;
  uStack_178 = uVar28;
  puStack_b0 = param_2;
  puStack_70 = param_2;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar14 == (ulong *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_138 = puStack_b8;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = (ulong)&UNK_0f092fd8;
  puStack_b8 = (undefined8 *)0x0;
  puStack_130 = puStack_b0;
  puVar14[4] = (ulong)&UNK_0f2ccd78;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  *(byte *)(puVar14 + 0xd) = 0;
  puStack_180 = puVar14;
  func_0x04aa75f0(puVar14 + 0xe,&uStack_181,&UNK_01254d89);
  *(byte *)(puVar14 + 0x10) = 0;
  puVar14[0x11] = 0;
  puVar14[0x12] = 0;
  puVar14[0x13] = 0;
  puVar14[0x14] = 0;
  puVar14[0x15] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0xffffffff;
  puVar14[0x26] = 0;
  puVar14[0x27] = 0;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x1f] = 0;
  puVar14[4] = (ulong)&UNK_0f093028;
  puVar14[0x2e] = _DAT_014eae60;
  *(byte *)(puVar14 + 0x2f) = 1;
  puVar14[0x30] = 0;
  puVar14[0x31] = 0;
  lStack_f8 = lVar22;
  if (puStack_138 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_138)(&puStack_138,puVar14 + 0x30);
    puVar15 = puStack_138;
  }
  puVar25 = puVar14 + 4;
  puStack_138 = (undefined8 *)0x0;
  puVar14[0x30] = (ulong)puVar15;
  puStack_e8 = puVar14 + 0x12;
  if (puVar14 + 0x11 == (ulong *)&DAT_0f552018) {
    puVar14[0x15] = 0;
  }
  else {
    if ((*puStack_e8 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        puVar14[0x14] = _DAT_0f552030;
        uVar8 = uRam000000000f55202c;
        uVar7 = _DAT_0f552028;
        uVar6 = uRam000000000f552024;
        *(uint *)puStack_e8 = _DAT_0f552020;
        *(undefined4 *)((long)puVar14 + 0x94) = uVar6;
        *(undefined4 *)(puVar14 + 0x13) = uVar7;
        *(undefined4 *)((long)puVar14 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puStack_e8,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar31 = (_DAT_0f552020 & 1) != 0;
      uVar28 = 0xf552021;
      if (bVar31) {
        uVar28 = _DAT_0f552030;
      }
      uVar13 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar31) {
        uVar13 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puStack_e8,uVar28,uVar13);
    }
    puVar14[0x11] = _DAT_0f552018;
    puVar14[0x15] = 0;
    if (puStack_138 != (undefined8 *)0x0) {
      (*(code *)puStack_138[1])(&puStack_138);
    }
  }
  puVar23 = puVar14 + 1;
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  LOCK();
  *puVar23 = *puVar23 + 1;
  UNLOCK();
  puStack_148 = puVar14 + 0x11;
  puStack_d8 = puVar23;
  plStack_150 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_150 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar28 = uStack_178;
  plStack_150[1] = 0;
  plStack_150[2] = 0;
  *plStack_150 = (long)&UNK_0f093108;
  plStack_150[6] = 0;
  plStack_150[7] = 0;
  plStack_150[4] = (long)&UNK_0f093158;
  plStack_150[0xe] = (long)puVar25;
  plStack_150[0xf] = (long)puVar14;
  LOCK();
  puVar14[1] = puVar14[1] + 1;
  UNLOCK();
  plStack_d0 = plStack_150 + 1;
  pbStack_e0 = *(byte **)(lStack_f8 + 0xb8);
  pbVar29 = *(byte **)(lStack_f8 + 0xc0);
  plStack_140 = plStack_150;
  puStack_c0 = puVar25;
  if (pbStack_e0 != pbVar29) {
    if ((uStack_170 & 1) == 0) {
      lStack_c8 = (long)&uStack_170 + 1;
      uVar13 = uStack_170 >> 1 & 0x7f;
    }
    else {
      lStack_c8 = lStack_160;
      uVar13 = uStack_168;
    }
    pbStack_f0 = pbStack_158;
    puVar14 = &uStack_178;
    pbVar27 = pbStack_e0 + 0x19;
    do {
      if (*(ulong *)(pbVar27 + -9) == uVar28) {
        if ((*(ulong **)(pbVar27 + 0x17) == puVar14) && (pbVar27 + -9 == pbStack_f0)) {
LAB_06e55c31:
          pbVar27 = pbVar27 + -0x19;
          puVar14 = puStack_148;
          plVar24 = plStack_150;
          goto LAB_06e55c3f;
        }
        bVar5 = pbVar27[-1];
        if ((bVar5 & 1) == 0) {
          uVar18 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar18 = *(ulong *)(pbVar27 + 7);
        }
        if (uVar18 == uVar13) {
          pbVar26 = pbVar27;
          if ((bVar5 & 1) != 0) {
            pbVar26 = *(byte **)(pbVar27 + 0xf);
          }
          iVar12 = func_0x0eee3000(pbVar26,lStack_c8,uVar13);
          if (iVar12 == 0) {
            *(ulong **)(pbVar27 + 0x17) = puVar14;
            pbStack_158 = pbVar27 + -9;
            goto LAB_06e55c31;
          }
        }
      }
      pbVar27[0x17] = 0;
      pbVar27[0x18] = 0;
      pbVar27[0x19] = 0;
      pbVar27[0x1a] = 0;
      pbVar27[0x1b] = 0;
      pbVar27[0x1c] = 0;
      pbVar27[0x1d] = 0;
      pbVar27[0x1e] = 0;
      pbVar26 = pbVar27 + 0x8f;
      pbVar27 = pbVar27 + 0xa8;
    } while (pbVar26 != pbVar29);
  }
  lVar22 = lStack_f8;
  if (pbVar29 < *(byte **)(lStack_f8 + 200)) {
    func_0x06e57a10(pbVar29);
    puVar14 = (ulong *)(pbVar29 + 0xa8);
    *(ulong **)(lVar22 + 0xc0) = puVar14;
LAB_06e55aa4:
    *(ulong **)(lVar22 + 0xc0) = puVar14;
    FUN_0b63b6d0(puVar14[-0x15],&uStack_178);
    lVar19 = *(long *)(lVar22 + 0xc0);
    *(undefined1 *)(lVar19 + -7) = *(undefined1 *)(lVar22 + 0x60);
    if ((ulong *)(lVar19 + -0x98) != &uStack_178) {
      pbVar29 = (byte *)(lVar19 + -0x90);
      if ((*pbVar29 & 1) == 0) {
        if ((uStack_170 & 1) == 0) {
          *(long *)(lVar19 + -0x80) = lStack_160;
          *(undefined4 *)pbVar29 = (undefined4)uStack_170;
          *(undefined4 *)(lVar19 + -0x8c) = uStack_170._4_4_;
          *(undefined4 *)(lVar19 + -0x88) = (undefined4)uStack_168;
          *(undefined4 *)(lVar19 + -0x84) = uStack_168._4_4_;
        }
        else {
          func_0x04885070(pbVar29,lStack_160,uStack_168);
        }
      }
      else {
        uVar28 = uStack_170 >> 1 & 0x7f;
        lVar21 = (long)&uStack_170 + 1;
        if ((uStack_170 & 1) != 0) {
          uVar28 = uStack_168;
          lVar21 = lStack_160;
        }
        func_0x04885120(pbVar29,lVar21,uVar28);
      }
    }
    *(ulong *)(lVar19 + -0x98) = uStack_178;
    *(undefined8 *)(lVar19 + -0x78) = 0;
    func_0x04aa9390(&puStack_138,&uStack_170,*(undefined1 *)(lVar22 + 0x60));
    lVar19 = *(long *)(lVar22 + 0xc0);
    func_0x04167a70(lVar19 + -0x70,&puStack_138);
    *(ulong **)(lVar19 + -0x68) = puStack_130;
    *(ulong **)(lVar19 + -0x60) = puStack_128;
    *(undefined8 **)(lVar19 + -0x58) = puStack_120;
    *(byte **)(lVar19 + -0x50) = pbStack_118;
    uVar6 = (undefined4)uStack_110;
    uVar7 = uStack_110._4_4_;
    uVar8 = (undefined4)uStack_108;
    uVar11 = uStack_108._4_4_;
    uStack_110 = 0;
    uStack_108 = (byte *)0x0;
    plVar24 = *(long **)(lVar19 + -0x40);
    *(undefined4 *)(lVar19 + -0x48) = uVar6;
    *(undefined4 *)(lVar19 + -0x44) = uVar7;
    *(undefined4 *)(lVar19 + -0x40) = uVar8;
    *(undefined4 *)(lVar19 + -0x3c) = uVar11;
    if (plVar24 != (long *)0x0) {
      LOCK();
      plVar1 = plVar24 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        func_0x0412c2d0(plVar24);
      }
    }
    pbVar29 = uStack_108;
    puVar14 = puStack_148;
    plVar24 = plStack_150;
    *(undefined8 *)(lVar19 + -0x38) = uStack_100;
    if (uStack_108 != (byte *)0x0) {
      LOCK();
      pbVar27 = uStack_108 + 8;
      lVar19 = *(long *)pbVar27;
      *(long *)pbVar27 = *(long *)pbVar27 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)uStack_108 + 0x10))(uStack_108);
        func_0x0412c2d0(pbVar29);
      }
    }
    func_0x04167a40(&puStack_138);
    lVar22 = *(long *)(lVar22 + 0xc0);
    *(undefined1 *)(lVar22 + -8) = 0;
    pbVar27 = (byte *)(lVar22 + -0xa8);
LAB_06e55c3f:
    puVar23 = puStack_180;
    plVar24 = plVar24 + 4;
    puVar25 = *(ulong **)(pbVar27 + 0x90);
    if (puVar25 < *(ulong **)(pbVar27 + 0x98)) {
      puVar25[2] = 0;
      puVar25[3] = 0;
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[4] = 0;
      if (puVar25 != puVar14) {
        if ((*puStack_e8 & 1) == 0) {
          puVar25[3] = puStack_e8[2];
          uVar28 = puStack_e8[1];
          puVar25[1] = *puStack_e8;
          puVar25[2] = uVar28;
        }
        else {
          func_0x04885070(puVar25 + 1,puStack_180[0x14],puStack_180[0x13]);
        }
      }
      *puVar25 = *puVar14;
      puVar25[5] = (ulong)plVar24;
      puVar25[6] = (ulong)plStack_140;
      LOCK();
      plStack_140[1] = plStack_140[1] + 1;
      UNLOCK();
      puVar25 = puVar25 + 7;
      *(ulong **)(pbVar27 + 0x90) = puVar25;
      goto LAB_06e55f69;
    }
    lVar22 = (long)puVar25 - *(long *)(pbVar27 + 0x88);
    uVar28 = (lVar22 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar28 < 0x492492492492493) {
      lVar19 = (long)*(ulong **)(pbVar27 + 0x98) - *(long *)(pbVar27 + 0x88) >> 3;
      uVar13 = lVar19 * -0x2492492492492492;
      if (uVar28 < uVar13) {
        uVar28 = uVar13;
      }
      pbStack_118 = pbVar27 + 0x88;
      if (0x249249249249248 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
        uVar28 = 0x492492492492492;
      }
      plStack_150 = plVar24;
      pbStack_f0 = pbStack_118;
      if (uVar28 == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar28) goto LAB_06e560f8;
        puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0x38);
        if (puVar15 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar28 * 0x38,0);
          puVar15 = (undefined8 *)0x0;
        }
      }
      puVar14 = (ulong *)((long)puVar15 + lVar22);
      puStack_120 = puVar15 + uVar28 * 7;
      puVar4 = (undefined8 *)((long)puVar15 + lVar22 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar15 + lVar22) = 0;
      ((undefined8 *)((long)puVar15 + lVar22))[1] = 0;
      *(undefined8 *)((long)puVar15 + lVar22 + 0x20) = 0;
      puStack_128 = puVar14;
      puStack_138 = puVar15;
      puStack_130 = puVar14;
      if (puVar14 != puStack_148) {
        puVar30 = (uint *)((long)puVar15 + lVar22 + 8);
        if ((*puStack_e8 & 1) == 0) {
          *(ulong *)((long)puVar15 + lVar22 + 0x18) = puStack_e8[2];
          uVar9 = *(uint *)((long)puStack_e8 + 4);
          uVar28 = puStack_e8[1];
          uVar10 = *(uint *)((long)puStack_e8 + 0xc);
          *puVar30 = (uint)*puStack_e8;
          *(uint *)((long)puVar15 + lVar22 + 0xc) = uVar9;
          *(uint *)((long)puVar15 + lVar22 + 0x10) = (uint)uVar28;
          *(uint *)((long)puVar15 + lVar22 + 0x14) = uVar10;
        }
        else {
          func_0x04885070(puVar30,puStack_180[0x14],puStack_180[0x13]);
        }
      }
      pbVar26 = pbStack_f0;
      *puVar14 = *puStack_148;
      puVar14[5] = (ulong)plStack_150;
      puVar14[6] = (ulong)plStack_140;
      LOCK();
      plStack_140[1] = plStack_140[1] + 1;
      UNLOCK();
      puStack_128 = puStack_128 + 7;
      puVar15 = *(undefined8 **)(pbVar27 + 0x88);
      puVar4 = *(undefined8 **)(pbVar27 + 0x90);
      pbVar29 = (byte *)((long)puStack_130 + ((long)puVar15 - (long)puVar4));
      pbVar16 = pbVar29;
      puVar20 = puVar15;
      if ((long)puVar15 - (long)puVar4 != 0) {
        do {
          pbVar16[0x10] = 0;
          pbVar16[0x11] = 0;
          pbVar16[0x12] = 0;
          pbVar16[0x13] = 0;
          pbVar16[0x14] = 0;
          pbVar16[0x15] = 0;
          pbVar16[0x16] = 0;
          pbVar16[0x17] = 0;
          pbVar16[0x18] = 0;
          pbVar16[0x19] = 0;
          pbVar16[0x1a] = 0;
          pbVar16[0x1b] = 0;
          pbVar16[0x1c] = 0;
          pbVar16[0x1d] = 0;
          pbVar16[0x1e] = 0;
          pbVar16[0x1f] = 0;
          pbVar16[0] = 0;
          pbVar16[1] = 0;
          pbVar16[2] = 0;
          pbVar16[3] = 0;
          pbVar16[4] = 0;
          pbVar16[5] = 0;
          pbVar16[6] = 0;
          pbVar16[7] = 0;
          pbVar16[8] = 0;
          pbVar16[9] = 0;
          pbVar16[10] = 0;
          pbVar16[0xb] = 0;
          pbVar16[0xc] = 0;
          pbVar16[0xd] = 0;
          pbVar16[0xe] = 0;
          pbVar16[0xf] = 0;
          pbVar16[0x20] = 0;
          pbVar16[0x21] = 0;
          pbVar16[0x22] = 0;
          pbVar16[0x23] = 0;
          pbVar16[0x24] = 0;
          pbVar16[0x25] = 0;
          pbVar16[0x26] = 0;
          pbVar16[0x27] = 0;
          *(undefined8 *)(pbVar16 + 0x18) = puVar20[3];
          uVar17 = puVar20[2];
          *(undefined8 *)(pbVar16 + 8) = puVar20[1];
          *(undefined8 *)(pbVar16 + 0x10) = uVar17;
          *(undefined2 *)(puVar20 + 1) = 0;
          *(undefined8 *)pbVar16 = *puVar20;
          uVar17 = puVar20[6];
          *(undefined8 *)(pbVar16 + 0x28) = puVar20[5];
          *(undefined8 *)(pbVar16 + 0x30) = uVar17;
          puVar20[5] = 0;
          puVar20[6] = 0;
          puVar20 = puVar20 + 7;
          pbVar16 = pbVar16 + 0x38;
        } while (puVar20 != puVar4);
        do {
          plVar24 = (long *)puVar15[6];
          if (plVar24 == (long *)0x0) {
LAB_06e55ef4:
            bVar5 = *(byte *)(puVar15 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar24 + 1;
            lVar22 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar22 != 0) goto LAB_06e55ef4;
            (**(code **)(*plVar24 + 0x10))(plVar24);
            func_0x0412c2d0(plVar24);
            bVar5 = *(byte *)(puVar15 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar15[3],puVar15[1] & 0xfffffffffffffffe);
          }
          puVar15 = puVar15 + 7;
        } while (puVar15 != puVar4);
        puVar15 = *(undefined8 **)pbVar26;
      }
      puVar25 = puStack_128;
      puVar23 = puStack_180;
      *(byte **)(pbVar27 + 0x88) = pbVar29;
      *(ulong **)(pbVar27 + 0x90) = puStack_128;
      lVar22 = *(long *)(pbVar27 + 0x98);
      *(undefined8 **)(pbVar27 + 0x98) = puStack_120;
      if (puVar15 != (undefined8 *)0x0) {
        func_0x0412a280(puVar15,lVar22 - (long)puVar15);
      }
LAB_06e55f69:
      puVar14 = puStack_d8;
      *(ulong **)(pbVar27 + 0x90) = puVar25;
      uVar6 = *(undefined4 *)pbVar27;
      uVar7 = *(undefined4 *)(pbVar27 + 4);
      uVar8 = *(undefined4 *)(pbVar27 + 8);
      uVar11 = *(undefined4 *)(pbVar27 + 0xc);
      if (*(long *)(pbVar27 + 8) != 0) {
        LOCK();
        plVar24 = (long *)(*(long *)(pbVar27 + 8) + 8);
        *plVar24 = *plVar24 + 1;
        UNLOCK();
      }
      plVar24 = (long *)puVar23[0xf];
      *(undefined4 *)(puVar23 + 0xe) = uVar6;
      *(undefined4 *)((long)puVar23 + 0x74) = uVar7;
      *(undefined4 *)(puVar23 + 0xf) = uVar8;
      *(undefined4 *)((long)puVar23 + 0x7c) = uVar11;
      if (plVar24 != (long *)0x0) {
        LOCK();
        plVar1 = plVar24 + 1;
        lVar22 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          func_0x0412c2d0(plVar24);
        }
      }
      plVar24 = plStack_140;
      *(byte *)(puVar23 + 0x10) = pbVar27[0xa1];
      LOCK();
      lVar22 = *plStack_d0;
      *plStack_d0 = *plStack_d0 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_140 + 0x10))(plStack_140);
        func_0x0412c2d0(plVar24);
        LOCK();
        uVar28 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar28 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
      }
      if (uVar28 == 0) {
        (**(code **)(*puVar23 + 0x10))(puVar23);
        func_0x0412c2d0(puVar23);
        LOCK();
        uVar28 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar28 = *puVar14;
        *puVar14 = *puVar14 - 1;
        UNLOCK();
      }
      if (uVar28 == 0) {
        (**(code **)(*puVar23 + 0x10))(puVar23);
        func_0x0412c2d0(puVar23);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      puVar14 = puStack_c0;
      if ((uStack_170 & 1) != 0) {
        func_0x0412a280(lStack_160,uStack_170 & 0xfffffffffffffffe);
      }
      return puVar14;
    }
  }
  else {
    pbVar29 = pbVar29 + -(long)pbStack_e0;
    uVar28 = ((long)pbVar29 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar28) goto LAB_06e56102;
    lVar19 = (long)*(byte **)(lStack_f8 + 200) - (long)pbStack_e0 >> 3;
    uVar13 = lVar19 * -0x6186186186186186;
    if (uVar28 < uVar13) {
      uVar28 = uVar13;
    }
    pbVar27 = (byte *)(lStack_f8 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar19 * -0x30c30c30c30c30c3)) {
      uVar28 = 0x186186186186186;
    }
    pbStack_118 = pbVar27;
    if (uVar28 == 0) {
      puVar15 = (undefined8 *)0x0;
LAB_06e558d2:
      puStack_130 = (ulong *)(pbVar29 + (long)puVar15);
      puStack_120 = puVar15 + uVar28 * 0x15;
      puStack_138 = puVar15;
      puStack_128 = puStack_130;
      func_0x06e57a10(puStack_130);
      puVar14 = puStack_128 + 0x15;
      lVar19 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(lVar22 + 0xc0);
      pbVar29 = (byte *)((long)puStack_130 + (lVar19 - lVar22));
      if (lVar19 != lVar22) {
        lVar21 = 0;
        do {
          uVar17 = ((undefined8 *)(lVar19 + lVar21))[1];
          *(undefined8 *)(pbVar29 + lVar21) = *(undefined8 *)(lVar19 + lVar21);
          *(undefined8 *)(pbVar29 + lVar21 + 8) = uVar17;
          *(undefined8 *)(lVar19 + lVar21) = 0;
          ((undefined8 *)(lVar19 + lVar21))[1] = 0;
          pbVar26 = pbVar29 + lVar21 + 0x20;
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
          pbVar26 = pbVar29 + lVar21 + 0x10;
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
          pbVar26 = pbVar29 + lVar21 + 0x30;
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          *(undefined8 *)(pbVar29 + lVar21 + 0x28) = *(undefined8 *)(lVar19 + 0x28 + lVar21);
          puVar3 = (undefined4 *)(lVar19 + 0x18 + lVar21);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          pbVar26 = pbVar29 + lVar21 + 0x18;
          *(undefined4 *)pbVar26 = *puVar3;
          *(undefined4 *)(pbVar26 + 4) = uVar6;
          *(undefined4 *)(pbVar26 + 8) = uVar7;
          *(undefined4 *)(pbVar26 + 0xc) = uVar8;
          *(undefined2 *)(lVar19 + 0x18 + lVar21) = 0;
          *(undefined8 *)(pbVar29 + lVar21 + 0x10) = *(undefined8 *)(lVar19 + 0x10 + lVar21);
          func_0x04167a20(pbVar29 + lVar21 + 0x38,lVar21 + lVar19 + 0x38);
          puVar15 = (undefined8 *)(lVar19 + 0x40 + lVar21);
          uVar17 = puVar15[1];
          *(undefined8 *)(pbVar29 + lVar21 + 0x40) = *puVar15;
          *(undefined8 *)(pbVar29 + lVar21 + 0x40 + 8) = uVar17;
          puVar15 = (undefined8 *)(lVar19 + 0x50 + lVar21);
          uVar17 = puVar15[1];
          *(undefined8 *)(pbVar29 + lVar21 + 0x50) = *puVar15;
          *(undefined8 *)(pbVar29 + lVar21 + 0x50 + 8) = uVar17;
          puVar15 = (undefined8 *)(lVar19 + 0x60 + lVar21);
          uVar17 = puVar15[1];
          *(undefined8 *)(pbVar29 + lVar21 + 0x60) = *puVar15;
          *(undefined8 *)(pbVar29 + lVar21 + 0x60 + 8) = uVar17;
          puVar15 = (undefined8 *)(lVar19 + 0x60 + lVar21);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined8 *)(pbVar29 + lVar21 + 0x70) = *(undefined8 *)(lVar19 + 0x70 + lVar21);
          puVar15 = (undefined8 *)(lVar19 + 0x78 + lVar21);
          uVar17 = puVar15[1];
          *(undefined8 *)(pbVar29 + lVar21 + 0x78) = *puVar15;
          *(undefined8 *)(pbVar29 + lVar21 + 0x78 + 8) = uVar17;
          pbVar26 = pbVar29 + lVar21 + 0x88;
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
          pbVar26 = pbVar29 + lVar21 + 0x98;
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          puVar3 = (undefined4 *)(lVar19 + 0x88 + lVar21);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          pbVar26 = pbVar29 + lVar21 + 0x88;
          *(undefined4 *)pbVar26 = *puVar3;
          *(undefined4 *)(pbVar26 + 4) = uVar6;
          *(undefined4 *)(pbVar26 + 8) = uVar7;
          *(undefined4 *)(pbVar26 + 0xc) = uVar8;
          *(undefined8 *)(pbVar29 + lVar21 + 0x98) = *(undefined8 *)(lVar19 + 0x98 + lVar21);
          puVar15 = (undefined8 *)(lVar19 + 0x88 + lVar21);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined8 *)(lVar19 + 0x98 + lVar21) = 0;
          *(undefined2 *)(pbVar29 + lVar21 + 0xa0) = *(undefined2 *)(lVar19 + 0xa0 + lVar21);
          lVar2 = lVar21 + lVar19;
          lVar21 = lVar21 + 0xa8;
        } while (lVar2 + 0xa8 != lVar22);
        do {
          func_0x06e57b90(lVar19);
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar22);
        lVar19 = *(long *)pbVar27;
      }
      lVar22 = lStack_f8;
      *(byte **)(lStack_f8 + 0xb8) = pbVar29;
      *(ulong **)(lStack_f8 + 0xc0) = puVar14;
      lVar21 = *(long *)(lStack_f8 + 200);
      *(undefined8 **)(lStack_f8 + 200) = puStack_120;
      if (lVar19 != 0) {
        func_0x0412a280(lVar19,lVar21 - lVar19);
      }
      goto LAB_06e55aa4;
    }
    if (uVar28 < 0x186186186186187) {
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0xa8);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar28 * 0xa8,0);
        puVar15 = (undefined8 *)0x0;
      }
      goto LAB_06e558d2;
    }
LAB_06e560f8:
    FUN_04882eb0();
  }
  func_0x06e57db0();
LAB_06e56102:
  uVar17 = func_0x06e57b80();
  if ((*pbVar29 & 1) != 0) {
    func_0x0412a280(puVar14[3],puVar14[1] & 0xfffffffffffffffe);
  }
  func_0x06e57cf0(&puStack_138);
  plVar24 = plStack_140;
  LOCK();
  lVar22 = *plStack_d0;
  *plStack_d0 = *plStack_d0 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plStack_140 + 0x10))(plStack_140);
    func_0x0412c2d0(plVar24);
  }
  puVar14 = puStack_180;
  func_0x06e562e0(puStack_180);
  func_0x06e56310(puVar14);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_170 & 1) != 0) goto LAB_06e5621b;
  do {
    do {
      uVar17 = func_0x0eee2d70(uVar17);
    } while ((uStack_170 & 1) == 0);
LAB_06e5621b:
    func_0x0412a280(lStack_160,uStack_170 & 0xfffffffffffffffe);
  } while( true );
}


