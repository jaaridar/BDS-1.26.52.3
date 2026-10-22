/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6f662e0 (ELF vaddr 0x6e662e0)
 * Label: caller-of-callee
 * Body:  [[06f662e0, 06f66650] [06f66660, 06f666c7] [06f666d0, 06f66ddd] [06f66de0, 06f66e1e] [06f66e20, 06f6702b] [06f670f0, 06f6711d] [06f67144, 06f671b2]]
 * Ghidra: FUN_06f662e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06f662e0(byte *param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  undefined4 *puVar26;
  long lVar27;
  byte *pbVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  undefined1 uStack_169;
  byte *pbStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  byte *pbStack_148;
  long *plStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  long lStack_78;
  long *plStack_70;
  
  uStack_158 = 0;
  lStack_150 = 0;
  pbStack_168 = (byte *)0x0;
  uStack_160 = 0;
  pbStack_148 = (byte *)0x0;
  func_0x04130630(&uStack_160,param_3);
  pbStack_e0 = param_1;
  if (*param_3 == 0) {
    pbVar24 = (byte *)0x0;
  }
  else {
    pbVar24 = (byte *)0xcbf29ce484222325;
    uVar11 = func_0x0eee2e90(param_3);
    if (uVar11 != 0) {
      uVar18 = (ulong)((uint)uVar11 & 7);
      if (7 < uVar11) {
        uVar11 = uVar11 & 0xfffffffffffffff8;
        do {
          pbVar24 = (byte *)(((((((((long)pbVar24 * 0x100000001b3 ^ (ulong)*param_3) * 0x100000001b3
                                  ^ (ulong)param_3[1]) * 0x100000001b3 ^ (ulong)param_3[2]) *
                                 0x100000001b3 ^ (ulong)param_3[3]) * 0x100000001b3 ^
                               (ulong)param_3[4]) * 0x100000001b3 ^ (ulong)param_3[5]) *
                              0x100000001b3 ^ (ulong)param_3[6]) * 0x100000001b3 ^ (ulong)param_3[7]
                            );
          param_3 = param_3 + 8;
          uVar11 = uVar11 - 8;
        } while (uVar11 != 0);
      }
      if (uVar18 != 0) {
        uVar11 = 0;
        do {
          pbVar24 = (byte *)((long)pbVar24 * 0x100000001b3 ^ (ulong)param_3[uVar11]);
          uVar11 = uVar11 + 1;
        } while (uVar18 != uVar11);
      }
    }
  }
  lStack_78 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f09db30;
  pbStack_168 = pbVar24;
  plStack_b0 = param_2;
  plStack_70 = param_2;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_128 = puStack_b8;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f09d908;
  puStack_b8 = (undefined8 *)0x0;
  plStack_120 = plStack_b0;
  plVar12[4] = (long)&UNK_0f2ccd78;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  func_0x04aa75f0(plVar12 + 0xe,&uStack_169,&UNK_01254d89);
  *(undefined1 *)(plVar12 + 0x10) = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0xffffffff;
  plVar12[0x26] = 0;
  plVar12[0x27] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar12[0x1c] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[4] = (long)&UNK_0f09d958;
  plVar12[0x2e] = 0;
  plVar12[0x2f] = 0;
  if (puStack_128 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_128)(&puStack_128,plVar12 + 0x2e);
    puVar13 = puStack_128;
  }
  plVar22 = plVar12 + 1;
  plVar12[0x2e] = (long)puVar13;
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  LOCK();
  *plVar22 = *plVar22 + 1;
  UNLOCK();
  plStack_c8 = plVar22;
  plStack_138 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_138 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar28 = pbStack_168;
  plStack_138[1] = 0;
  plStack_138[2] = 0;
  *plStack_138 = (long)&UNK_0f09da38;
  plStack_138[6] = 0;
  plStack_138[7] = 0;
  plStack_138[4] = (long)&UNK_0f09da88;
  plStack_138[0xe] = (long)(plVar12 + 4);
  plStack_138[0xf] = (long)plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  plStack_e8 = plStack_138 + 1;
  uStack_d0 = *(ulong *)(pbStack_e0 + 0xb8);
  uVar11 = *(ulong *)(pbStack_e0 + 0xc0);
  plStack_130 = plStack_138;
  if (uStack_d0 != uVar11) {
    if ((uStack_160 & 1) == 0) {
      lStack_c0 = (long)&uStack_160 + 1;
      uVar18 = uStack_160 >> 1 & 0x7f;
    }
    else {
      lStack_c0 = lStack_150;
      uVar18 = uStack_158;
    }
    pbStack_d8 = pbStack_148;
    lVar23 = uStack_d0 + 0x19;
    do {
      if (*(byte **)(lVar23 + -9) == pbVar28) {
        pbVar24 = (byte *)(lVar23 + -9);
        if ((*(byte ***)(lVar23 + 0x17) == &pbStack_168) && (pbVar24 == pbStack_d8)) {
LAB_06f66b28:
          puVar26 = (undefined4 *)(lVar23 + -0x19);
          goto LAB_06f66b30;
        }
        bVar4 = *(byte *)(lVar23 + -1);
        if ((bVar4 & 1) == 0) {
          uVar25 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar25 = *(ulong *)(lVar23 + 7);
        }
        if (uVar25 == uVar18) {
          lVar16 = lVar23;
          if ((bVar4 & 1) != 0) {
            lVar16 = *(long *)(lVar23 + 0xf);
          }
          iVar10 = func_0x0eee3000(lVar16,lStack_c0,uVar18);
          if (iVar10 == 0) {
            *(byte ***)(lVar23 + 0x17) = &pbStack_168;
            pbStack_148 = pbVar24;
            goto LAB_06f66b28;
          }
        }
      }
      *(undefined8 *)(lVar23 + 0x17) = 0;
      uVar25 = lVar23 + 0x8f;
      lVar23 = lVar23 + 0xa8;
    } while (uVar25 != uVar11);
  }
  pbVar28 = pbStack_e0;
  if (uVar11 < *(ulong *)(pbStack_e0 + 200)) {
    func_0x06f6a920(uVar11);
    plVar22 = (long *)(uVar11 + 0xa8);
    *(long **)(pbVar28 + 0xc0) = plVar22;
LAB_06f669a3:
    *(long **)(pbVar28 + 0xc0) = plVar22;
    func_0x0b63b6d0(plVar22[-0x15],&pbStack_168);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    *(byte *)(lVar23 + -7) = pbVar28[0x60];
    if ((byte **)(lVar23 + -0x98) != &pbStack_168) {
      pbVar24 = (byte *)(lVar23 + -0x90);
      if ((*pbVar24 & 1) == 0) {
        if ((uStack_160 & 1) == 0) {
          *(long *)(lVar23 + -0x80) = lStack_150;
          *(undefined4 *)pbVar24 = (undefined4)uStack_160;
          *(undefined4 *)(lVar23 + -0x8c) = uStack_160._4_4_;
          *(undefined4 *)(lVar23 + -0x88) = (undefined4)uStack_158;
          *(undefined4 *)(lVar23 + -0x84) = uStack_158._4_4_;
        }
        else {
          func_0x04885070(pbVar24,lStack_150,uStack_158);
        }
      }
      else {
        uVar11 = uStack_160 >> 1 & 0x7f;
        lVar16 = (long)&uStack_160 + 1;
        if ((uStack_160 & 1) != 0) {
          uVar11 = uStack_158;
          lVar16 = lStack_150;
        }
        func_0x04885120(pbVar24,lVar16,uVar11);
      }
    }
    *(byte **)(lVar23 + -0x98) = pbStack_168;
    *(undefined8 *)(lVar23 + -0x78) = 0;
    func_0x04aa9390(&puStack_128,&uStack_160,pbVar28[0x60]);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    func_0x04167a70(lVar23 + -0x70,&puStack_128);
    *(long **)(lVar23 + -0x68) = plStack_120;
    *(long **)(lVar23 + -0x60) = plStack_118;
    *(undefined8 **)(lVar23 + -0x58) = puStack_110;
    *(byte **)(lVar23 + -0x50) = pbStack_108;
    uVar6 = (undefined4)uStack_100;
    uVar7 = uStack_100._4_4_;
    uVar8 = (undefined4)uStack_f8;
    uVar9 = uStack_f8._4_4_;
    uStack_100 = 0;
    uStack_f8 = (byte *)0x0;
    plVar22 = *(long **)(lVar23 + -0x40);
    *(undefined4 *)(lVar23 + -0x48) = uVar6;
    *(undefined4 *)(lVar23 + -0x44) = uVar7;
    *(undefined4 *)(lVar23 + -0x40) = uVar8;
    *(undefined4 *)(lVar23 + -0x3c) = uVar9;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar21 = plVar22 + 1;
      lVar16 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
    pbVar24 = uStack_f8;
    *(undefined8 *)(lVar23 + -0x38) = uStack_f0;
    if (uStack_f8 != (byte *)0x0) {
      LOCK();
      pbVar3 = uStack_f8 + 8;
      lVar23 = *(long *)pbVar3;
      *(long *)pbVar3 = *(long *)pbVar3 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)uStack_f8 + 0x10))(uStack_f8);
        func_0x0412c2d0(pbVar24);
      }
    }
    func_0x04167a40(&puStack_128);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    *(undefined1 *)(lVar23 + -8) = 0;
    puVar26 = (undefined4 *)(lVar23 + -0xa8);
LAB_06f66b30:
    plVar22 = plVar12 + 0x11;
    plVar20 = plStack_138 + 4;
    plVar21 = *(long **)(puVar26 + 0x24);
    if (plVar21 < *(long **)(puVar26 + 0x26)) {
      plVar21[2] = 0;
      plVar21[3] = 0;
      *plVar21 = 0;
      plVar21[1] = 0;
      plVar21[4] = 0;
      if (plVar21 != plVar22) {
        if ((*(byte *)(plVar12 + 0x12) & 1) == 0) {
          plVar21[3] = plVar12[0x14];
          lVar23 = plVar12[0x13];
          plVar21[1] = plVar12[0x12];
          plVar21[2] = lVar23;
        }
        else {
          func_0x04885070(plVar21 + 1,plVar12[0x14],plVar12[0x13]);
        }
      }
      *plVar21 = *plVar22;
      plVar21[5] = (long)plVar20;
      plVar21[6] = (long)plStack_130;
      LOCK();
      plStack_130[1] = plStack_130[1] + 1;
      UNLOCK();
      plVar21 = plVar21 + 7;
      *(long **)(puVar26 + 0x24) = plVar21;
      goto LAB_06f66e78;
    }
    lVar23 = (long)plVar21 - *(long *)(puVar26 + 0x22);
    uVar11 = (lVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar11 < 0x492492492492493) {
      lVar16 = (long)*(long **)(puVar26 + 0x26) - *(long *)(puVar26 + 0x22) >> 3;
      uVar18 = lVar16 * -0x2492492492492492;
      if (uVar11 < uVar18) {
        uVar11 = uVar18;
      }
      pbStack_108 = (byte *)(puVar26 + 0x22);
      if (0x249249249249248 < (ulong)(lVar16 * 0x6db6db6db6db6db7)) {
        uVar11 = 0x492492492492492;
      }
      plStack_138 = plVar20;
      pbStack_d8 = pbStack_108;
      if (uVar11 == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar11) goto LAB_06f66ff2;
        puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 0x38);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar11 * 0x38,0);
          puVar13 = (undefined8 *)0x0;
        }
      }
      plVar21 = (long *)((long)puVar13 + lVar23);
      puStack_110 = puVar13 + uVar11 * 7;
      puVar30 = (undefined8 *)((long)puVar13 + lVar23 + 0x10);
      *puVar30 = 0;
      puVar30[1] = 0;
      *(undefined8 *)((long)puVar13 + lVar23) = 0;
      ((undefined8 *)((long)puVar13 + lVar23))[1] = 0;
      *(undefined8 *)((long)puVar13 + lVar23 + 0x20) = 0;
      plStack_118 = plVar21;
      puStack_128 = puVar13;
      plStack_120 = plVar21;
      if (plVar21 != plVar22) {
        puVar29 = (undefined4 *)((long)puVar13 + lVar23 + 8);
        if ((*(byte *)(plVar12 + 0x12) & 1) == 0) {
          *(long *)((long)puVar13 + lVar23 + 0x18) = plVar12[0x14];
          uVar6 = *(undefined4 *)((long)plVar12 + 0x94);
          lVar16 = plVar12[0x13];
          uVar7 = *(undefined4 *)((long)plVar12 + 0x9c);
          *puVar29 = *(undefined4 *)(plVar12 + 0x12);
          *(undefined4 *)((long)puVar13 + lVar23 + 0xc) = uVar6;
          *(int *)((long)puVar13 + lVar23 + 0x10) = (int)lVar16;
          *(undefined4 *)((long)puVar13 + lVar23 + 0x14) = uVar7;
        }
        else {
          func_0x04885070(puVar29,plVar12[0x14],plVar12[0x13]);
        }
      }
      pbVar24 = pbStack_d8;
      *plVar21 = *plVar22;
      plVar21[5] = (long)plStack_138;
      plVar21[6] = (long)plStack_130;
      LOCK();
      plStack_130[1] = plStack_130[1] + 1;
      UNLOCK();
      plStack_118 = plStack_118 + 7;
      puVar30 = *(undefined8 **)(puVar26 + 0x22);
      puVar5 = *(undefined8 **)(puVar26 + 0x24);
      puVar13 = (undefined8 *)((long)plStack_120 + ((long)puVar30 - (long)puVar5));
      puVar14 = puVar13;
      puVar17 = puVar30;
      if ((long)puVar30 - (long)puVar5 != 0) {
        do {
          puVar14[2] = 0;
          puVar14[3] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[4] = 0;
          puVar14[3] = puVar17[3];
          uVar15 = puVar17[2];
          puVar14[1] = puVar17[1];
          puVar14[2] = uVar15;
          *(undefined2 *)(puVar17 + 1) = 0;
          *puVar14 = *puVar17;
          uVar15 = puVar17[6];
          puVar14[5] = puVar17[5];
          puVar14[6] = uVar15;
          puVar17[5] = 0;
          puVar17[6] = 0;
          puVar17 = puVar17 + 7;
          puVar14 = puVar14 + 7;
        } while (puVar17 != puVar5);
        do {
          plVar22 = (long *)puVar30[6];
          if (plVar22 == (long *)0x0) {
LAB_06f66e05:
            bVar4 = *(byte *)(puVar30 + 1);
          }
          else {
            LOCK();
            plVar21 = plVar22 + 1;
            lVar23 = *plVar21;
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (lVar23 != 0) goto LAB_06f66e05;
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
            bVar4 = *(byte *)(puVar30 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
          }
          puVar30 = puVar30 + 7;
        } while (puVar30 != puVar5);
        puVar30 = *(undefined8 **)pbVar24;
      }
      plVar21 = plStack_118;
      *(undefined8 **)(puVar26 + 0x22) = puVar13;
      *(long **)(puVar26 + 0x24) = plStack_118;
      lVar23 = *(long *)(puVar26 + 0x26);
      *(undefined8 **)(puVar26 + 0x26) = puStack_110;
      if (puVar30 != (undefined8 *)0x0) {
        func_0x0412a280(puVar30,lVar23 - (long)puVar30);
      }
LAB_06f66e78:
      plVar20 = plStack_c8;
      plVar22 = plStack_e8;
      *(long **)(puVar26 + 0x24) = plVar21;
      uVar6 = *puVar26;
      uVar7 = puVar26[1];
      uVar8 = puVar26[2];
      uVar9 = puVar26[3];
      if (*(long *)(puVar26 + 2) != 0) {
        LOCK();
        plVar21 = (long *)(*(long *)(puVar26 + 2) + 8);
        *plVar21 = *plVar21 + 1;
        UNLOCK();
      }
      plVar21 = (long *)plVar12[0xf];
      *(undefined4 *)(plVar12 + 0xe) = uVar6;
      *(undefined4 *)((long)plVar12 + 0x74) = uVar7;
      *(undefined4 *)(plVar12 + 0xf) = uVar8;
      *(undefined4 *)((long)plVar12 + 0x7c) = uVar9;
      if (plVar21 != (long *)0x0) {
        LOCK();
        plVar1 = plVar21 + 1;
        lVar23 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          func_0x0412c2d0(plVar21);
        }
      }
      plVar21 = plStack_130;
      *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar26 + 0xa1);
      LOCK();
      lVar23 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar21);
        LOCK();
        lVar23 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar23 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar23 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        LOCK();
        lVar23 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar23 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar23 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_160 & 1) != 0) {
        func_0x0412a280(lStack_150,uStack_160 & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar23 = uVar11 - uStack_d0;
    uVar11 = (lVar23 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar11) goto LAB_06f66ffc;
    lVar16 = (long)(*(ulong *)(pbStack_e0 + 200) - uStack_d0) >> 3;
    uVar18 = lVar16 * -0x6186186186186186;
    if (uVar11 < uVar18) {
      uVar11 = uVar18;
    }
    pbVar3 = pbStack_e0 + 0xb8;
    if (0xc30c30c30c30c2 < (ulong)(lVar16 * -0x30c30c30c30c30c3)) {
      uVar11 = 0x186186186186186;
    }
    pbStack_108 = pbVar3;
    if (uVar11 == 0) {
      puVar13 = (undefined8 *)0x0;
LAB_06f667bf:
      plStack_120 = (long *)(lVar23 + (long)puVar13);
      puStack_110 = puVar13 + uVar11 * 0x15;
      puStack_128 = puVar13;
      plStack_118 = plStack_120;
      func_0x06f6a920(plStack_120);
      plVar22 = plStack_118 + 0x15;
      lVar23 = *(long *)(pbVar28 + 0xb8);
      lVar16 = *(long *)(pbVar28 + 0xc0);
      lVar27 = (lVar23 - lVar16) + (long)plStack_120;
      if (lVar23 != lVar16) {
        lVar19 = 0;
        do {
          uVar15 = ((undefined8 *)(lVar23 + lVar19))[1];
          *(undefined8 *)(lVar27 + lVar19) = *(undefined8 *)(lVar23 + lVar19);
          ((undefined8 *)(lVar27 + lVar19))[1] = uVar15;
          *(undefined8 *)(lVar23 + lVar19) = 0;
          ((undefined8 *)(lVar23 + lVar19))[1] = 0;
          puVar13 = (undefined8 *)(lVar27 + 0x20 + lVar19);
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13 = (undefined8 *)(lVar27 + 0x10 + lVar19);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar27 + 0x30 + lVar19) = 0;
          *(undefined8 *)(lVar27 + 0x28 + lVar19) = *(undefined8 *)(lVar23 + 0x28 + lVar19);
          puVar26 = (undefined4 *)(lVar23 + 0x18 + lVar19);
          uVar6 = puVar26[1];
          uVar7 = puVar26[2];
          uVar8 = puVar26[3];
          puVar29 = (undefined4 *)(lVar27 + 0x18 + lVar19);
          *puVar29 = *puVar26;
          puVar29[1] = uVar6;
          puVar29[2] = uVar7;
          puVar29[3] = uVar8;
          *(undefined2 *)(lVar23 + 0x18 + lVar19) = 0;
          *(undefined8 *)(lVar27 + 0x10 + lVar19) = *(undefined8 *)(lVar23 + 0x10 + lVar19);
          func_0x04167a20(lVar27 + lVar19 + 0x38,lVar19 + lVar23 + 0x38);
          puVar13 = (undefined8 *)(lVar23 + 0x40 + lVar19);
          uVar15 = puVar13[1];
          puVar30 = (undefined8 *)(lVar27 + 0x40 + lVar19);
          *puVar30 = *puVar13;
          puVar30[1] = uVar15;
          puVar13 = (undefined8 *)(lVar23 + 0x50 + lVar19);
          uVar15 = puVar13[1];
          puVar30 = (undefined8 *)(lVar27 + 0x50 + lVar19);
          *puVar30 = *puVar13;
          puVar30[1] = uVar15;
          puVar13 = (undefined8 *)(lVar23 + 0x60 + lVar19);
          uVar15 = puVar13[1];
          puVar30 = (undefined8 *)(lVar27 + 0x60 + lVar19);
          *puVar30 = *puVar13;
          puVar30[1] = uVar15;
          puVar13 = (undefined8 *)(lVar23 + 0x60 + lVar19);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar27 + 0x70 + lVar19) = *(undefined8 *)(lVar23 + 0x70 + lVar19);
          puVar13 = (undefined8 *)(lVar23 + 0x78 + lVar19);
          uVar15 = puVar13[1];
          puVar30 = (undefined8 *)(lVar27 + 0x78 + lVar19);
          *puVar30 = *puVar13;
          puVar30[1] = uVar15;
          puVar13 = (undefined8 *)(lVar27 + 0x88 + lVar19);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar27 + 0x98 + lVar19) = 0;
          puVar26 = (undefined4 *)(lVar23 + 0x88 + lVar19);
          uVar6 = puVar26[1];
          uVar7 = puVar26[2];
          uVar8 = puVar26[3];
          puVar29 = (undefined4 *)(lVar27 + 0x88 + lVar19);
          *puVar29 = *puVar26;
          puVar29[1] = uVar6;
          puVar29[2] = uVar7;
          puVar29[3] = uVar8;
          *(undefined8 *)(lVar27 + 0x98 + lVar19) = *(undefined8 *)(lVar23 + 0x98 + lVar19);
          puVar13 = (undefined8 *)(lVar23 + 0x88 + lVar19);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined8 *)(lVar23 + 0x98 + lVar19) = 0;
          *(undefined2 *)(lVar27 + 0xa0 + lVar19) = *(undefined2 *)(lVar23 + 0xa0 + lVar19);
          lVar2 = lVar19 + lVar23;
          lVar19 = lVar19 + 0xa8;
        } while (lVar2 + 0xa8 != lVar16);
        do {
          func_0x06f68dd0(lVar23);
          lVar23 = lVar23 + 0xa8;
        } while (lVar23 != lVar16);
        lVar23 = *(long *)pbVar3;
      }
      pbVar28 = pbStack_e0;
      *(long *)(pbStack_e0 + 0xb8) = lVar27;
      *(long **)(pbStack_e0 + 0xc0) = plVar22;
      lVar16 = *(long *)(pbStack_e0 + 200);
      *(undefined8 **)(pbStack_e0 + 200) = puStack_110;
      if (lVar23 != 0) {
        func_0x0412a280(lVar23,lVar16 - lVar23);
      }
      goto LAB_06f669a3;
    }
    if (uVar11 < 0x186186186186187) {
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11 * 0xa8);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar11 * 0xa8,0);
        puVar13 = (undefined8 *)0x0;
      }
      goto LAB_06f667bf;
    }
LAB_06f66ff2:
    func_0x04882eb0();
  }
  func_0x06f6ab60();
LAB_06f66ffc:
  uVar15 = func_0x06f6aa90();
  if ((*pbVar28 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar24 + 0x18),*(ulong *)(pbVar24 + 8) & 0xfffffffffffffffe);
  }
  func_0x06f6aaa0(&puStack_128);
  plVar22 = plStack_130;
  LOCK();
  lVar23 = *plStack_e8;
  *plStack_e8 = *plStack_e8 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plStack_130 + 0x10))(plStack_130);
    func_0x0412c2d0(plVar22);
  }
  func_0x06f68f30(plVar12);
  func_0x06f68f60(plVar12);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_160 & 1) != 0) goto LAB_06f670f7;
  do {
    do {
      uVar15 = _Unwind_Resume(uVar15);
    } while ((uStack_160 & 1) == 0);
LAB_06f670f7:
    func_0x0412a280(lStack_150,uStack_160 & 0xfffffffffffffffe);
  } while( true );
}


