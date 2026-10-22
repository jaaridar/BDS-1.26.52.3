/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x700c450 (ELF vaddr 0x6f0c450)
 * Label: caller-of-callee
 * Body:  [[0700c450, 0700c89d] [0700c8a0, 0700c907] [0700c910, 0700d00d] [0700d010, 0700d04d] [0700d050, 0700d2c1] [0700d3c3, 0700d443]]
 * Ghidra: FUN_0700c450
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0700c450(long *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong *puVar24;
  byte *pbVar25;
  uint *puVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  undefined4 *puVar32;
  bool bVar33;
  undefined1 uStack_189;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long *plStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  long lStack_100;
  long *plStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar23 = *param_1;
  uStack_178 = 0;
  lStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  plStack_168 = (long *)0x0;
  func_0x04130630(&uStack_180,param_3);
  lStack_100 = lVar23;
  if (*param_3 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = 0xcbf29ce484222325;
    uVar15 = func_0x0eee2e90(param_3);
    if (uVar15 != 0) {
      uVar22 = (ulong)((uint)uVar15 & 7);
      if (7 < uVar15) {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        do {
          uVar28 = (((((((uVar28 * 0x100000001b3 ^ (ulong)*param_3) * 0x100000001b3 ^
                        (ulong)param_3[1]) * 0x100000001b3 ^ (ulong)param_3[2]) * 0x100000001b3 ^
                      (ulong)param_3[3]) * 0x100000001b3 ^ (ulong)param_3[4]) * 0x100000001b3 ^
                    (ulong)param_3[5]) * 0x100000001b3 ^ (ulong)param_3[6]) * 0x100000001b3 ^
                   (ulong)param_3[7];
          param_3 = param_3 + 8;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar22 != 0) {
        uVar15 = 0;
        do {
          uVar28 = uVar28 * 0x100000001b3 ^ (ulong)param_3[uVar15];
          uVar15 = uVar15 + 1;
        } while (uVar22 != uVar15);
      }
    }
  }
  puStack_b8 = (undefined8 *)&UNK_0f0a7360;
  uStack_188 = uVar28;
  uStack_b0 = param_2;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar16 == (ulong *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = (ulong)&UNK_0f0a7120;
  puStack_158 = (undefined8 *)0x0;
  puStack_150 = (ulong *)0x0;
  if (puStack_b8 == (undefined8 *)0x0) {
    puStack_158 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b8)(&puStack_b8,&puStack_158);
    puStack_158 = puStack_b8;
  }
  puStack_b8 = (undefined8 *)0x0;
  puVar16[4] = (ulong)&UNK_0f2ccd78;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  *(undefined1 *)(puVar16 + 0xd) = 0;
  func_0x04aa75f0(puVar16 + 0xe,&uStack_189,&UNK_01254d89);
  *(undefined1 *)(puVar16 + 0x10) = 0;
  puVar16[0x11] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  puVar16[0x14] = 0;
  puVar16[0x15] = 0;
  puVar16[0x16] = 0;
  puVar16[0x17] = 0xffffffff;
  puVar16[0x26] = 0;
  puVar16[0x27] = 0;
  puVar16[0x18] = 0;
  puVar16[0x19] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1f] = 0;
  puVar16[4] = (ulong)&UNK_0f0a7170;
  ppuVar2 = (undefined8 **)(puVar16 + 0x2e);
  puVar16[0x2e] = 0;
  puVar16[0x2f] = 0;
  if (ppuVar2 != &puStack_158) {
    if (puStack_158 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_158)(&puStack_158,ppuVar2);
      puVar17 = puStack_158;
    }
    puStack_158 = (undefined8 *)0x0;
    *ppuVar2 = puVar17;
  }
  puVar24 = puVar16 + 4;
  puStack_f0 = puVar16 + 0x12;
  if (puVar16 + 0x11 != (ulong *)&DAT_0f551f58) {
    if ((*puStack_f0 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        puVar16[0x14] = _DAT_0f551f70;
        uVar10 = uRam000000000f551f6c;
        uVar9 = _DAT_0f551f68;
        uVar8 = uRam000000000f551f64;
        *(uint *)puStack_f0 = _DAT_0f551f60;
        *(undefined4 *)((long)puVar16 + 0x94) = uVar8;
        *(undefined4 *)(puVar16 + 0x13) = uVar9;
        *(undefined4 *)((long)puVar16 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_f0,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar33 = (_DAT_0f551f60 & 1) != 0;
      uVar28 = 0xf551f61;
      if (bVar33) {
        uVar28 = _DAT_0f551f70;
      }
      uVar15 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar33) {
        uVar15 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puStack_f0,uVar28,uVar15);
    }
  }
  puVar30 = puVar16 + 1;
  puVar16[0x11] = _DAT_0f551f58;
  puVar16[0x15] = 0;
  if (puStack_158 != (undefined8 *)0x0) {
    (*(code *)puStack_158[1])(&puStack_158);
  }
  LOCK();
  *puVar30 = *puVar30 + 1;
  UNLOCK();
  puStack_110 = puVar16 + 0x11;
  puStack_e8 = puVar30;
  uStack_e0 = param_2;
  plStack_118 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_118 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar15 = uStack_188;
  plStack_118[1] = 0;
  plStack_118[2] = 0;
  *plStack_118 = (long)&UNK_0f0a7268;
  plStack_118[6] = 0;
  plStack_118[7] = 0;
  plStack_118[4] = (long)&UNK_0f0a72b8;
  plStack_118[0xe] = (long)puVar24;
  plStack_118[0xf] = (long)puVar16;
  LOCK();
  puVar16[1] = puVar16[1] + 1;
  UNLOCK();
  plStack_d8 = plStack_118 + 1;
  uStack_108 = *(ulong *)(lStack_100 + 0xb8);
  uVar28 = *(ulong *)(lStack_100 + 0xc0);
  puVar30 = puVar16;
  puStack_c8 = puVar24;
  plStack_c0 = plStack_118;
  if (uStack_108 != uVar28) {
    if ((uStack_180 & 1) == 0) {
      lStack_d0 = (long)&uStack_180 + 1;
      uVar22 = uStack_180 >> 1 & 0x7f;
    }
    else {
      lStack_d0 = lStack_170;
      uVar22 = uStack_178;
    }
    plStack_f8 = plStack_168;
    puVar30 = &uStack_188;
    lVar23 = uStack_108 + 0x19;
    do {
      if (*(ulong *)(lVar23 + -9) == uVar15) {
        if ((*(ulong **)(lVar23 + 0x17) == puVar30) && ((long *)(lVar23 + -9) == plStack_f8)) {
LAB_0700cd5c:
          puVar32 = (undefined4 *)(lVar23 + -0x19);
          goto LAB_0700cd60;
        }
        bVar6 = *(byte *)(lVar23 + -1);
        if ((bVar6 & 1) == 0) {
          uVar31 = (ulong)(bVar6 >> 1);
        }
        else {
          uVar31 = *(ulong *)(lVar23 + 7);
        }
        if (uVar31 == uVar22) {
          lVar20 = lVar23;
          if ((bVar6 & 1) != 0) {
            lVar20 = *(long *)(lVar23 + 0xf);
          }
          iVar14 = func_0x0eee3000(lVar20,lStack_d0,uVar22);
          if (iVar14 == 0) {
            *(ulong **)(lVar23 + 0x17) = puVar30;
            plStack_168 = (long *)(lVar23 + -9);
            goto LAB_0700cd5c;
          }
        }
      }
      *(undefined8 *)(lVar23 + 0x17) = 0;
      uVar31 = lVar23 + 0x8f;
      lVar23 = lVar23 + 0xa8;
    } while (uVar31 != uVar28);
  }
  lVar23 = lStack_100;
  if (uVar28 < *(ulong *)(lStack_100 + 200)) {
    func_0x0703e750(uVar28);
    puVar24 = (ulong *)(uVar28 + 0xa8);
    *(ulong **)(lVar23 + 0xc0) = puVar24;
LAB_0700cbe0:
    *(ulong **)(lVar23 + 0xc0) = puVar24;
    func_0x0b63b6d0(puVar24[-0x15],&uStack_188);
    lVar20 = *(long *)(lVar23 + 0xc0);
    *(undefined1 *)(lVar20 + -7) = *(undefined1 *)(lVar23 + 0x60);
    if ((ulong *)(lVar20 + -0x98) != &uStack_188) {
      pbVar25 = (byte *)(lVar20 + -0x90);
      if ((*pbVar25 & 1) == 0) {
        if ((uStack_180 & 1) == 0) {
          *(long *)(lVar20 + -0x80) = lStack_170;
          *(undefined4 *)pbVar25 = (undefined4)uStack_180;
          *(undefined4 *)(lVar20 + -0x8c) = uStack_180._4_4_;
          *(undefined4 *)(lVar20 + -0x88) = (undefined4)uStack_178;
          *(undefined4 *)(lVar20 + -0x84) = uStack_178._4_4_;
        }
        else {
          func_0x04885070(pbVar25,lStack_170,uStack_178);
        }
      }
      else {
        uVar28 = uStack_180 >> 1 & 0x7f;
        lVar29 = (long)&uStack_180 + 1;
        if ((uStack_180 & 1) != 0) {
          uVar28 = uStack_178;
          lVar29 = lStack_170;
        }
        func_0x04885120(pbVar25,lVar29,uVar28);
      }
    }
    *(ulong *)(lVar20 + -0x98) = uStack_188;
    *(undefined8 *)(lVar20 + -0x78) = 0;
    FUN_04aa9390(&puStack_158,&uStack_180,*(undefined1 *)(lVar23 + 0x60));
    puVar30 = *(ulong **)(lVar23 + 0xc0);
    func_0x04167a70(puVar30 + -0xe,&puStack_158);
    puVar30[-0xd] = (ulong)puStack_150;
    puVar30[-0xc] = (ulong)puStack_148;
    puVar30[-0xb] = (ulong)puStack_140;
    puVar30[-10] = (ulong)plStack_138;
    uVar8 = (undefined4)uStack_130;
    uVar9 = uStack_130._4_4_;
    uVar10 = (undefined4)uStack_128;
    uVar13 = uStack_128._4_4_;
    uStack_130 = 0;
    uStack_128 = (long *)0x0;
    plVar27 = (long *)puVar30[-8];
    *(undefined4 *)(puVar30 + -9) = uVar8;
    *(undefined4 *)((long)puVar30 + -0x44) = uVar9;
    *(undefined4 *)(puVar30 + -8) = uVar10;
    *(undefined4 *)((long)puVar30 + -0x3c) = uVar13;
    if (plVar27 != (long *)0x0) {
      LOCK();
      plVar1 = plVar27 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        FUN_0412c2d0(plVar27);
      }
    }
    plVar27 = uStack_128;
    puVar30[-7] = uStack_120;
    if (uStack_128 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_128 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_128 + 0x10))(uStack_128);
        FUN_0412c2d0(plVar27);
      }
    }
    FUN_04167a40(&puStack_158);
    lVar23 = *(long *)(lVar23 + 0xc0);
    *(undefined1 *)(lVar23 + -8) = 0;
    puVar32 = (undefined4 *)(lVar23 + -0xa8);
LAB_0700cd60:
    plVar27 = plStack_c0 + 4;
    puVar24 = *(ulong **)(puVar32 + 0x24);
    if (puVar24 < *(ulong **)(puVar32 + 0x26)) {
      puVar24[2] = 0;
      puVar24[3] = 0;
      *puVar24 = 0;
      puVar24[1] = 0;
      puVar24[4] = 0;
      if (puVar24 != puStack_110) {
        if ((*puStack_f0 & 1) == 0) {
          puVar24[3] = puStack_f0[2];
          uVar28 = puStack_f0[1];
          puVar24[1] = *puStack_f0;
          puVar24[2] = uVar28;
        }
        else {
          func_0x04885070(puVar24 + 1,puVar16[0x14],puVar16[0x13]);
        }
      }
      *puVar24 = *puStack_110;
      puVar24[5] = (ulong)plVar27;
      puVar24[6] = (ulong)plStack_118;
      LOCK();
      plStack_118[1] = plStack_118[1] + 1;
      UNLOCK();
      puVar24 = puVar24 + 7;
      *(ulong **)(puVar32 + 0x24) = puVar24;
      goto LAB_0700d0a3;
    }
    lVar23 = (long)puVar24 - *(long *)(puVar32 + 0x22);
    pbVar25 = (byte *)((lVar23 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (pbVar25 < (byte *)0x492492492492493) {
      lVar20 = (long)*(ulong **)(puVar32 + 0x26) - *(long *)(puVar32 + 0x22) >> 3;
      pbVar18 = (byte *)(lVar20 * -0x2492492492492492);
      if (pbVar25 < pbVar18) {
        pbVar25 = pbVar18;
      }
      plStack_138 = (long *)(puVar32 + 0x22);
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        pbVar25 = (byte *)0x492492492492492;
      }
      plStack_f8 = plStack_138;
      if (pbVar25 == (byte *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if ((byte *)0x492492492492492 < pbVar25) goto LAB_0700d289;
        puVar17 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar25 * 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          func_0x0eec74c0((long)pbVar25 * 0x38,0);
          puVar17 = (undefined8 *)0x0;
        }
      }
      puVar24 = (ulong *)((long)puVar17 + lVar23);
      puStack_140 = puVar17 + (long)pbVar25 * 7;
      puVar5 = (undefined8 *)((long)puVar17 + lVar23 + 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar23) = 0;
      ((undefined8 *)((long)puVar17 + lVar23))[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar23 + 0x20) = 0;
      puStack_148 = puVar24;
      puStack_158 = puVar17;
      puStack_150 = puVar24;
      if (puVar24 != puStack_110) {
        puVar26 = (uint *)((long)puVar17 + lVar23 + 8);
        if ((*puStack_f0 & 1) == 0) {
          *(ulong *)((long)puVar17 + lVar23 + 0x18) = puStack_f0[2];
          uVar11 = *(uint *)((long)puStack_f0 + 4);
          uVar28 = puStack_f0[1];
          uVar12 = *(uint *)((long)puStack_f0 + 0xc);
          *puVar26 = (uint)*puStack_f0;
          *(uint *)((long)puVar17 + lVar23 + 0xc) = uVar11;
          *(uint *)((long)puVar17 + lVar23 + 0x10) = (uint)uVar28;
          *(uint *)((long)puVar17 + lVar23 + 0x14) = uVar12;
        }
        else {
          func_0x04885070(puVar26,puVar16[0x14],puVar16[0x13]);
        }
      }
      plVar1 = plStack_f8;
      *puVar24 = *puStack_110;
      puVar24[5] = (ulong)plVar27;
      puVar24[6] = (ulong)plStack_118;
      LOCK();
      plStack_118[1] = plStack_118[1] + 1;
      UNLOCK();
      puStack_148 = puStack_148 + 7;
      puVar17 = *(undefined8 **)(puVar32 + 0x22);
      puVar5 = *(undefined8 **)(puVar32 + 0x24);
      pbVar25 = (byte *)((long)puStack_150 + ((long)puVar17 - (long)puVar5));
      pbVar18 = pbVar25;
      puVar21 = puVar17;
      if ((long)puVar17 - (long)puVar5 != 0) {
        do {
          pbVar18[0x10] = 0;
          pbVar18[0x11] = 0;
          pbVar18[0x12] = 0;
          pbVar18[0x13] = 0;
          pbVar18[0x14] = 0;
          pbVar18[0x15] = 0;
          pbVar18[0x16] = 0;
          pbVar18[0x17] = 0;
          pbVar18[0x18] = 0;
          pbVar18[0x19] = 0;
          pbVar18[0x1a] = 0;
          pbVar18[0x1b] = 0;
          pbVar18[0x1c] = 0;
          pbVar18[0x1d] = 0;
          pbVar18[0x1e] = 0;
          pbVar18[0x1f] = 0;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18[0x20] = 0;
          pbVar18[0x21] = 0;
          pbVar18[0x22] = 0;
          pbVar18[0x23] = 0;
          pbVar18[0x24] = 0;
          pbVar18[0x25] = 0;
          pbVar18[0x26] = 0;
          pbVar18[0x27] = 0;
          *(undefined8 *)(pbVar18 + 0x18) = puVar21[3];
          uVar19 = puVar21[2];
          *(undefined8 *)(pbVar18 + 8) = puVar21[1];
          *(undefined8 *)(pbVar18 + 0x10) = uVar19;
          *(undefined2 *)(puVar21 + 1) = 0;
          *(undefined8 *)pbVar18 = *puVar21;
          uVar19 = puVar21[6];
          *(undefined8 *)(pbVar18 + 0x28) = puVar21[5];
          *(undefined8 *)(pbVar18 + 0x30) = uVar19;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          pbVar18 = pbVar18 + 0x38;
        } while (puVar21 != puVar5);
        do {
          plVar27 = (long *)puVar17[6];
          if (plVar27 == (long *)0x0) {
LAB_0700d035:
            bVar6 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar4 = plVar27 + 1;
            lVar23 = *plVar4;
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (lVar23 != 0) goto LAB_0700d035;
            (**(code **)(*plVar27 + 0x10))(plVar27);
            FUN_0412c2d0(plVar27);
            bVar6 = *(byte *)(puVar17 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar5);
        puVar17 = (undefined8 *)*plVar1;
      }
      puVar24 = puStack_148;
      *(byte **)(puVar32 + 0x22) = pbVar25;
      *(ulong **)(puVar32 + 0x24) = puStack_148;
      lVar23 = *(long *)(puVar32 + 0x26);
      *(undefined8 **)(puVar32 + 0x26) = puStack_140;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar23 - (long)puVar17);
      }
LAB_0700d0a3:
      uVar19 = uStack_e0;
      puVar30 = puStack_e8;
      *(ulong **)(puVar32 + 0x24) = puVar24;
      uVar8 = *puVar32;
      uVar9 = puVar32[1];
      uVar10 = puVar32[2];
      uVar13 = puVar32[3];
      if (*(long *)(puVar32 + 2) != 0) {
        LOCK();
        plVar27 = (long *)(*(long *)(puVar32 + 2) + 8);
        *plVar27 = *plVar27 + 1;
        UNLOCK();
      }
      plVar27 = (long *)puVar16[0xf];
      *(undefined4 *)(puVar16 + 0xe) = uVar8;
      *(undefined4 *)((long)puVar16 + 0x74) = uVar9;
      *(undefined4 *)(puVar16 + 0xf) = uVar10;
      *(undefined4 *)((long)puVar16 + 0x7c) = uVar13;
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar23 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          FUN_0412c2d0(plVar27);
        }
      }
      plVar27 = plStack_118;
      *(undefined1 *)(puVar16 + 0x10) = *(undefined1 *)((long)puVar32 + 0xa1);
      LOCK();
      lVar23 = *plStack_d8;
      *plStack_d8 = *plStack_d8 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        FUN_0412c2d0(plVar27);
        LOCK();
        uVar28 = *puVar30;
        *puVar30 = *puVar30 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar28 = *puVar30;
        *puVar30 = *puVar30 - 1;
        UNLOCK();
      }
      if (uVar28 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        FUN_0412c2d0(puVar16);
        LOCK();
        uVar28 = *puVar30;
        *puVar30 = *puVar30 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar28 = *puVar30;
        *puVar30 = *puVar30 - 1;
        UNLOCK();
      }
      puVar24 = puStack_c8;
      if (uVar28 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        FUN_0412c2d0(puVar16);
        puVar24 = puStack_c8;
      }
      puStack_c8 = puVar24;
      if (puStack_b8 != (undefined8 *)0x0) {
        (*(code *)puStack_b8[1])(&puStack_b8);
      }
      if ((uStack_180 & 1) != 0) {
        func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      puStack_78 = &UNK_0f0a8318;
      uStack_70 = uVar19;
      func_0x07039990(puVar24,&puStack_78);
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(puStack_78 + 8))(&puStack_78);
      }
      return puVar24;
    }
  }
  else {
    pbVar25 = (byte *)(uVar28 - uStack_108);
    uVar28 = ((long)pbVar25 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar28) goto LAB_0700d293;
    lVar20 = (long)(*(ulong *)(lStack_100 + 200) - uStack_108) >> 3;
    uVar15 = lVar20 * -0x6186186186186186;
    if (uVar28 < uVar15) {
      uVar28 = uVar15;
    }
    plVar27 = (long *)(lStack_100 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      uVar28 = 0x186186186186186;
    }
    plStack_138 = plVar27;
    if (uVar28 == 0) {
      puVar17 = (undefined8 *)0x0;
LAB_0700c9ff:
      puStack_150 = (ulong *)(pbVar25 + (long)puVar17);
      puStack_140 = puVar17 + uVar28 * 0x15;
      puStack_158 = puVar17;
      puStack_148 = puStack_150;
      func_0x0703e750(puStack_150);
      puVar24 = puStack_148 + 0x15;
      lVar20 = *(long *)(lVar23 + 0xb8);
      lVar23 = *(long *)(lVar23 + 0xc0);
      pbVar25 = (byte *)((long)puStack_150 + (lVar20 - lVar23));
      if (lVar20 != lVar23) {
        lVar29 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar20 + lVar29))[1];
          *(undefined8 *)(pbVar25 + lVar29) = *(undefined8 *)(lVar20 + lVar29);
          *(undefined8 *)(pbVar25 + lVar29 + 8) = uVar19;
          *(undefined8 *)(lVar20 + lVar29) = 0;
          ((undefined8 *)(lVar20 + lVar29))[1] = 0;
          pbVar18 = pbVar25 + lVar29 + 0x20;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18 = pbVar25 + lVar29 + 0x10;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18 = pbVar25 + lVar29 + 0x30;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          *(undefined8 *)(pbVar25 + lVar29 + 0x28) = *(undefined8 *)(lVar20 + 0x28 + lVar29);
          puVar32 = (undefined4 *)(lVar20 + 0x18 + lVar29);
          uVar8 = puVar32[1];
          uVar9 = puVar32[2];
          uVar10 = puVar32[3];
          pbVar18 = pbVar25 + lVar29 + 0x18;
          *(undefined4 *)pbVar18 = *puVar32;
          *(undefined4 *)(pbVar18 + 4) = uVar8;
          *(undefined4 *)(pbVar18 + 8) = uVar9;
          *(undefined4 *)(pbVar18 + 0xc) = uVar10;
          *(undefined2 *)(lVar20 + 0x18 + lVar29) = 0;
          *(undefined8 *)(pbVar25 + lVar29 + 0x10) = *(undefined8 *)(lVar20 + 0x10 + lVar29);
          func_0x04167a20(pbVar25 + lVar29 + 0x38,lVar29 + lVar20 + 0x38);
          puVar17 = (undefined8 *)(lVar20 + 0x40 + lVar29);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar25 + lVar29 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar25 + lVar29 + 0x40 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar20 + 0x50 + lVar29);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar25 + lVar29 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar25 + lVar29 + 0x50 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar20 + 0x60 + lVar29);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar25 + lVar29 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar25 + lVar29 + 0x60 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar20 + 0x60 + lVar29);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar25 + lVar29 + 0x70) = *(undefined8 *)(lVar20 + 0x70 + lVar29);
          puVar17 = (undefined8 *)(lVar20 + 0x78 + lVar29);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar25 + lVar29 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar25 + lVar29 + 0x78 + 8) = uVar19;
          pbVar18 = pbVar25 + lVar29 + 0x88;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18 = pbVar25 + lVar29 + 0x98;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          puVar32 = (undefined4 *)(lVar20 + 0x88 + lVar29);
          uVar8 = puVar32[1];
          uVar9 = puVar32[2];
          uVar10 = puVar32[3];
          pbVar18 = pbVar25 + lVar29 + 0x88;
          *(undefined4 *)pbVar18 = *puVar32;
          *(undefined4 *)(pbVar18 + 4) = uVar8;
          *(undefined4 *)(pbVar18 + 8) = uVar9;
          *(undefined4 *)(pbVar18 + 0xc) = uVar10;
          *(undefined8 *)(pbVar25 + lVar29 + 0x98) = *(undefined8 *)(lVar20 + 0x98 + lVar29);
          puVar17 = (undefined8 *)(lVar20 + 0x88 + lVar29);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar20 + 0x98 + lVar29) = 0;
          *(undefined2 *)(pbVar25 + lVar29 + 0xa0) = *(undefined2 *)(lVar20 + 0xa0 + lVar29);
          lVar3 = lVar29 + lVar20;
          lVar29 = lVar29 + 0xa8;
        } while (lVar3 + 0xa8 != lVar23);
        do {
          func_0x0703e8d0(lVar20);
          lVar20 = lVar20 + 0xa8;
        } while (lVar20 != lVar23);
        lVar20 = *plVar27;
      }
      lVar23 = lStack_100;
      *(byte **)(lStack_100 + 0xb8) = pbVar25;
      *(ulong **)(lStack_100 + 0xc0) = puVar24;
      lVar29 = *(long *)(lStack_100 + 200);
      *(undefined8 **)(lStack_100 + 200) = puStack_140;
      if (lVar20 != 0) {
        func_0x0412a280(lVar20,lVar29 - lVar20);
      }
      goto LAB_0700cbe0;
    }
    if (uVar28 < 0x186186186186187) {
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0xa8);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar28 * 0xa8,0);
        puVar17 = (undefined8 *)0x0;
      }
      goto LAB_0700c9ff;
    }
LAB_0700d289:
    func_0x04882eb0();
  }
  func_0x0703eaf0();
LAB_0700d293:
  uVar19 = func_0x0703e8c0();
  if ((*pbVar25 & 1) != 0) {
    func_0x0412a280(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
  }
  func_0x0703ea30(&puStack_158);
  plVar27 = plStack_118;
  LOCK();
  lVar23 = *plStack_d8;
  *plStack_d8 = *plStack_d8 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plStack_118 + 0x10))(plStack_118);
    FUN_0412c2d0(plVar27);
  }
  func_0x0703c8f0(puVar16);
  func_0x0703c920(puVar16);
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  if ((uStack_180 & 1) != 0) {
    func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar19);
  pcVar7 = (code *)swi(3);
  puVar16 = (ulong *)(*pcVar7)();
  return puVar16;
}


