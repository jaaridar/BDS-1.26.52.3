/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9ede150 (ELF vaddr 0x9dde150)
 * Label: caller-of-callee
 * Body:  [[09ede150, 09ede49e] [09ede4a0, 09ede509] [09ede510, 09edec15] [09edec20, 09edec5e] [09edec60, 09edee25] [09edef4d, 09edef75]]
 * Ghidra: FUN_09ede150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_09ede150(long param_1,undefined8 *param_2,uint param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  long *plVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  long *plVar27;
  byte *pbVar28;
  uint *puVar29;
  ulong uVar30;
  bool bVar31;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 *puStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b0;
  long lStack_a8;
  uint uStack_9c;
  uint *puStack_98;
  byte *pbStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  pbVar23 = (byte *)(ulong)param_3;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lStack_a8 = param_1;
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_4)(param_4,&puStack_78);
    puVar17 = (undefined8 *)*param_4;
  }
  *param_4 = 0;
  puStack_78 = puVar17;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f1eec28;
  puStack_f8 = (undefined8 *)0x0;
  pbStack_f0 = (byte *)0x0;
  if (puVar17 == (undefined8 *)0x0) {
    puStack_f8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar17)(&puStack_78,&puStack_f8);
    puStack_f8 = puStack_78;
  }
  puStack_78 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_f9,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  pbStack_b0 = (byte *)(plVar15 + 0x11);
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f1eec78;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  plVar15[0x32] = 0;
  plVar15[0x33] = 0;
  plVar15[0x34] = 0;
  *(undefined4 *)(plVar15 + 0x35) = 0x3f800000;
  plVar15[0x36] = 0;
  plVar15[0x37] = 0;
  uStack_9c = param_3;
  if (puStack_f8 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_f8)(&puStack_f8,plVar15 + 0x36);
    puVar17 = puStack_f8;
  }
  plVar5 = plVar15 + 4;
  puStack_f8 = (undefined8 *)0x0;
  plVar15[0x36] = (long)puVar17;
  *(undefined1 *)(plVar15 + 0x3e) = 0;
  puStack_98 = (uint *)(plVar15 + 0x12);
  if (pbStack_b0 != &DAT_0f552138) {
    pbVar23 = (byte *)(plVar15 + 0x2e);
    if ((*puStack_98 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puStack_98 = _DAT_0f552140;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar7;
        *(undefined4 *)(plVar15 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puStack_98,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar31 = (_DAT_0f552140 & 1) != 0;
      lVar22 = 0xf552141;
      if (bVar31) {
        lVar22 = _DAT_0f552150;
      }
      uVar30 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar31) {
        uVar30 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_98,lVar22,uVar30);
    }
  }
  plVar15[0x11] = _DAT_0f552138;
  plVar15[0x15] = 0;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  plVar27 = plVar15 + 1;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  LOCK();
  *plVar27 = *plVar27 + 1;
  UNLOCK();
  plStack_80 = plVar27;
  pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar16 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar22 = lStack_a8;
  pbVar16[8] = 0;
  pbVar16[9] = 0;
  pbVar16[10] = 0;
  pbVar16[0xb] = 0;
  pbVar16[0xc] = 0;
  pbVar16[0xd] = 0;
  pbVar16[0xe] = 0;
  pbVar16[0xf] = 0;
  pbVar16[0x10] = 0;
  pbVar16[0x11] = 0;
  pbVar16[0x12] = 0;
  pbVar16[0x13] = 0;
  pbVar16[0x14] = 0;
  pbVar16[0x15] = 0;
  pbVar16[0x16] = 0;
  pbVar16[0x17] = 0;
  *(undefined **)pbVar16 = &UNK_0f1eed58;
  pbVar16[0x30] = 0;
  pbVar16[0x31] = 0;
  pbVar16[0x32] = 0;
  pbVar16[0x33] = 0;
  pbVar16[0x34] = 0;
  pbVar16[0x35] = 0;
  pbVar16[0x36] = 0;
  pbVar16[0x37] = 0;
  pbVar16[0x38] = 0;
  pbVar16[0x39] = 0;
  pbVar16[0x3a] = 0;
  pbVar16[0x3b] = 0;
  pbVar16[0x3c] = 0;
  pbVar16[0x3d] = 0;
  pbVar16[0x3e] = 0;
  pbVar16[0x3f] = 0;
  *(undefined **)(pbVar16 + 0x20) = &UNK_0f1eeda8;
  *(long **)(pbVar16 + 0x70) = plVar5;
  *(long **)(pbVar16 + 0x78) = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  pbStack_90 = *(byte **)(lStack_a8 + 0xb8);
  pbVar28 = *(byte **)(lStack_a8 + 0xc0);
  plStack_88 = plVar5;
  if (pbStack_90 != pbVar28) {
    pbVar23 = (byte *)*param_2;
    pbVar26 = pbStack_90 + 0x19;
    do {
      if (*(byte **)(pbVar26 + -9) == pbVar23) {
        if ((*(undefined8 **)(pbVar26 + 0x17) != param_2) || (pbVar26 + -9 != (byte *)param_2[4])) {
          bVar4 = pbVar26[-1];
          if ((bVar4 & 1) == 0) {
            uVar30 = (ulong)(bVar4 >> 1);
            uVar19 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_09ede51d;
LAB_09ede4ff:
            if (uVar30 != uVar19 >> 1) goto LAB_09ede4ad;
          }
          else {
            uVar30 = *(ulong *)(pbVar26 + 7);
            uVar19 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_09ede4ff;
LAB_09ede51d:
            if (uVar30 != param_2[2]) goto LAB_09ede4ad;
          }
          pbVar25 = pbVar26;
          if ((bVar4 & 1) != 0) {
            pbVar25 = *(byte **)(pbVar26 + 0xf);
          }
          lVar20 = (long)param_2 + 9;
          if ((uVar19 & 1) != 0) {
            lVar20 = param_2[3];
          }
          iVar14 = func_0x0eee3000(pbVar25,lVar20);
          if (iVar14 != 0) goto LAB_09ede4ad;
          *(undefined8 **)(pbVar26 + 0x17) = param_2;
          param_2[4] = pbVar26 + -9;
        }
        pbVar26 = pbVar26 + -0x19;
        goto LAB_09ede98e;
      }
LAB_09ede4ad:
      pbVar26[0x17] = 0;
      pbVar26[0x18] = 0;
      pbVar26[0x19] = 0;
      pbVar26[0x1a] = 0;
      pbVar26[0x1b] = 0;
      pbVar26[0x1c] = 0;
      pbVar26[0x1d] = 0;
      pbVar26[0x1e] = 0;
      pbVar25 = pbVar26 + 0x8f;
      pbVar26 = pbVar26 + 0xa8;
    } while (pbVar25 != pbVar28);
  }
  if (pbVar28 < *(byte **)(lVar22 + 200)) {
    func_0x09ee11a0(pbVar28);
    pbVar28 = pbVar28 + 0xa8;
    *(byte **)(lVar22 + 0xc0) = pbVar28;
LAB_09ede816:
    *(byte **)(lVar22 + 0xc0) = pbVar28;
    FUN_0b63b6d0(*(undefined8 *)(pbVar28 + -0xa8),param_2);
    lVar20 = *(long *)(lVar22 + 0xc0);
    *(undefined1 *)(lVar20 + -7) = *(undefined1 *)(lVar22 + 0x60);
    pbVar23 = (byte *)(param_2 + 1);
    if ((undefined8 *)(lVar20 + -0x98) != param_2) {
      pbVar28 = (byte *)(lVar20 + -0x90);
      bVar4 = *pbVar23;
      if ((*pbVar28 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          *(undefined8 *)(lVar20 + -0x80) = param_2[3];
          uVar7 = *(undefined4 *)((long)param_2 + 0xc);
          uVar8 = *(undefined4 *)(param_2 + 2);
          uVar9 = *(undefined4 *)((long)param_2 + 0x14);
          *(undefined4 *)pbVar28 = *(undefined4 *)pbVar23;
          *(undefined4 *)(lVar20 + -0x8c) = uVar7;
          *(undefined4 *)(lVar20 + -0x88) = uVar8;
          *(undefined4 *)(lVar20 + -0x84) = uVar9;
        }
        else {
          func_0x04885070(pbVar28,param_2[3],param_2[2]);
        }
      }
      else {
        bVar31 = (bVar4 & 1) != 0;
        lVar24 = (long)param_2 + 9;
        if (bVar31) {
          lVar24 = param_2[3];
        }
        uVar30 = (ulong)(bVar4 >> 1);
        if (bVar31) {
          uVar30 = param_2[2];
        }
        func_0x04885120(pbVar28,lVar24,uVar30);
      }
    }
    *(undefined8 *)(lVar20 + -0x98) = *param_2;
    *(undefined8 *)(lVar20 + -0x78) = 0;
    func_0x04aa9390(&puStack_f8,pbVar23,*(undefined1 *)(lVar22 + 0x60));
    lVar22 = *(long *)(lVar22 + 0xc0);
    func_0x04167a70(lVar22 + -0x70,&puStack_f8);
    *(byte **)(lVar22 + -0x68) = pbStack_f0;
    *(byte **)(lVar22 + -0x60) = pbStack_e8;
    *(undefined8 **)(lVar22 + -0x58) = puStack_e0;
    *(byte **)(lVar22 + -0x50) = pbStack_d8;
    uVar7 = (undefined4)uStack_d0;
    uVar8 = uStack_d0._4_4_;
    uVar9 = (undefined4)uStack_c8;
    uVar13 = uStack_c8._4_4_;
    uStack_d0 = 0;
    uStack_c8 = (byte *)0x0;
    plVar5 = *(long **)(lVar22 + -0x40);
    *(undefined4 *)(lVar22 + -0x48) = uVar7;
    *(undefined4 *)(lVar22 + -0x44) = uVar8;
    *(undefined4 *)(lVar22 + -0x40) = uVar9;
    *(undefined4 *)(lVar22 + -0x3c) = uVar13;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar27 = plVar5 + 1;
      lVar20 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
    pbVar28 = uStack_c8;
    *(undefined8 *)(lVar22 + -0x38) = uStack_c0;
    if (uStack_c8 != (byte *)0x0) {
      LOCK();
      pbVar23 = uStack_c8 + 8;
      lVar22 = *(long *)pbVar23;
      *(long *)pbVar23 = *(long *)pbVar23 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)uStack_c8 + 0x10))(uStack_c8);
        func_0x0412c2d0(pbVar28);
      }
    }
    func_0x04167a40(&puStack_f8);
    lVar22 = *(long *)(lStack_a8 + 0xc0);
    *(char *)(lVar22 + -8) = (char)uStack_9c;
    pbVar26 = (byte *)(lVar22 + -0xa8);
LAB_09ede98e:
    pbVar23 = *(byte **)(pbVar26 + 0x90);
    if (pbVar23 < *(byte **)(pbVar26 + 0x98)) {
      pbVar23[0x10] = 0;
      pbVar23[0x11] = 0;
      pbVar23[0x12] = 0;
      pbVar23[0x13] = 0;
      pbVar23[0x14] = 0;
      pbVar23[0x15] = 0;
      pbVar23[0x16] = 0;
      pbVar23[0x17] = 0;
      pbVar23[0x18] = 0;
      pbVar23[0x19] = 0;
      pbVar23[0x1a] = 0;
      pbVar23[0x1b] = 0;
      pbVar23[0x1c] = 0;
      pbVar23[0x1d] = 0;
      pbVar23[0x1e] = 0;
      pbVar23[0x1f] = 0;
      pbVar23[0] = 0;
      pbVar23[1] = 0;
      pbVar23[2] = 0;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 0;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      pbVar23[0x20] = 0;
      pbVar23[0x21] = 0;
      pbVar23[0x22] = 0;
      pbVar23[0x23] = 0;
      pbVar23[0x24] = 0;
      pbVar23[0x25] = 0;
      pbVar23[0x26] = 0;
      pbVar23[0x27] = 0;
      if (pbVar23 != pbStack_b0) {
        if ((*puStack_98 & 1) == 0) {
          *(undefined8 *)(pbVar23 + 0x18) = *(undefined8 *)(puStack_98 + 4);
          uVar18 = *(undefined8 *)(puStack_98 + 2);
          *(undefined8 *)(pbVar23 + 8) = *(undefined8 *)puStack_98;
          *(undefined8 *)(pbVar23 + 0x10) = uVar18;
        }
        else {
          func_0x04885070(pbVar23 + 8,plVar15[0x14],plVar15[0x13]);
        }
      }
      *(undefined8 *)pbVar23 = *(undefined8 *)pbStack_b0;
      *(byte **)(pbVar23 + 0x28) = pbVar16 + 0x20;
      *(byte **)(pbVar23 + 0x30) = pbVar16;
      LOCK();
      *(long *)(pbVar16 + 8) = *(long *)(pbVar16 + 8) + 1;
      UNLOCK();
      pbVar23 = pbVar23 + 0x38;
      *(byte **)(pbVar26 + 0x90) = pbVar23;
      goto LAB_09edecbd;
    }
    lVar22 = (long)pbVar23 - *(long *)(pbVar26 + 0x88);
    uVar30 = (lVar22 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar23 = pbVar16;
    if (uVar30 < 0x492492492492493) {
      lVar20 = (long)*(byte **)(pbVar26 + 0x98) - *(long *)(pbVar26 + 0x88) >> 3;
      uVar19 = lVar20 * -0x2492492492492492;
      if (uVar30 < uVar19) {
        uVar30 = uVar19;
      }
      pbVar25 = pbVar26 + 0x88;
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        uVar30 = 0x492492492492492;
      }
      pbStack_d8 = pbVar25;
      if (uVar30 == 0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar30) goto LAB_09ededeb;
        puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar30 * 0x38,0);
          puVar17 = (undefined8 *)0x0;
        }
      }
      pbVar23 = (byte *)((long)puVar17 + lVar22);
      puStack_e0 = puVar17 + uVar30 * 7;
      puVar3 = (undefined8 *)((long)puVar17 + lVar22 + 0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar22) = 0;
      ((undefined8 *)((long)puVar17 + lVar22))[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar22 + 0x20) = 0;
      pbStack_e8 = pbVar23;
      puStack_f8 = puVar17;
      pbStack_f0 = pbVar23;
      if (pbVar23 != pbStack_b0) {
        puVar29 = (uint *)((long)puVar17 + lVar22 + 8);
        if ((*puStack_98 & 1) == 0) {
          *(undefined8 *)((long)puVar17 + lVar22 + 0x18) = *(undefined8 *)(puStack_98 + 4);
          uVar10 = puStack_98[1];
          uVar11 = puStack_98[2];
          uVar12 = puStack_98[3];
          *puVar29 = *puStack_98;
          *(uint *)((long)puVar17 + lVar22 + 0xc) = uVar10;
          *(uint *)((long)puVar17 + lVar22 + 0x10) = uVar11;
          *(uint *)((long)puVar17 + lVar22 + 0x14) = uVar12;
        }
        else {
          func_0x04885070(puVar29,plVar15[0x14],plVar15[0x13]);
        }
      }
      *(undefined8 *)pbVar23 = *(undefined8 *)pbStack_b0;
      *(byte **)(pbVar23 + 0x28) = pbVar16 + 0x20;
      *(byte **)(pbVar23 + 0x30) = pbVar16;
      LOCK();
      *(long *)(pbVar16 + 8) = *(long *)(pbVar16 + 8) + 1;
      UNLOCK();
      pbStack_e8 = pbStack_e8 + 0x38;
      puVar17 = *(undefined8 **)(pbVar26 + 0x88);
      puVar3 = *(undefined8 **)(pbVar26 + 0x90);
      pbVar28 = pbStack_f0 + ((long)puVar17 - (long)puVar3);
      pbVar23 = pbVar28;
      puVar21 = puVar17;
      if ((long)puVar17 - (long)puVar3 != 0) {
        do {
          pbVar23[0x10] = 0;
          pbVar23[0x11] = 0;
          pbVar23[0x12] = 0;
          pbVar23[0x13] = 0;
          pbVar23[0x14] = 0;
          pbVar23[0x15] = 0;
          pbVar23[0x16] = 0;
          pbVar23[0x17] = 0;
          pbVar23[0x18] = 0;
          pbVar23[0x19] = 0;
          pbVar23[0x1a] = 0;
          pbVar23[0x1b] = 0;
          pbVar23[0x1c] = 0;
          pbVar23[0x1d] = 0;
          pbVar23[0x1e] = 0;
          pbVar23[0x1f] = 0;
          pbVar23[0] = 0;
          pbVar23[1] = 0;
          pbVar23[2] = 0;
          pbVar23[3] = 0;
          pbVar23[4] = 0;
          pbVar23[5] = 0;
          pbVar23[6] = 0;
          pbVar23[7] = 0;
          pbVar23[8] = 0;
          pbVar23[9] = 0;
          pbVar23[10] = 0;
          pbVar23[0xb] = 0;
          pbVar23[0xc] = 0;
          pbVar23[0xd] = 0;
          pbVar23[0xe] = 0;
          pbVar23[0xf] = 0;
          pbVar23[0x20] = 0;
          pbVar23[0x21] = 0;
          pbVar23[0x22] = 0;
          pbVar23[0x23] = 0;
          pbVar23[0x24] = 0;
          pbVar23[0x25] = 0;
          pbVar23[0x26] = 0;
          pbVar23[0x27] = 0;
          *(undefined8 *)(pbVar23 + 0x18) = puVar21[3];
          uVar18 = puVar21[2];
          *(undefined8 *)(pbVar23 + 8) = puVar21[1];
          *(undefined8 *)(pbVar23 + 0x10) = uVar18;
          *(undefined2 *)(puVar21 + 1) = 0;
          *(undefined8 *)pbVar23 = *puVar21;
          uVar18 = puVar21[6];
          *(undefined8 *)(pbVar23 + 0x28) = puVar21[5];
          *(undefined8 *)(pbVar23 + 0x30) = uVar18;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          pbVar23 = pbVar23 + 0x38;
        } while (puVar21 != puVar3);
        do {
          plVar5 = (long *)puVar17[6];
          if (plVar5 == (long *)0x0) {
LAB_09edec45:
            bVar4 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar27 = plVar5 + 1;
            lVar22 = *plVar27;
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (lVar22 != 0) goto LAB_09edec45;
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
            bVar4 = *(byte *)(puVar17 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar3);
        puVar17 = *(undefined8 **)pbVar25;
      }
      pbVar23 = pbStack_e8;
      *(byte **)(pbVar26 + 0x88) = pbVar28;
      *(byte **)(pbVar26 + 0x90) = pbStack_e8;
      lVar22 = *(long *)(pbVar26 + 0x98);
      *(undefined8 **)(pbVar26 + 0x98) = puStack_e0;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar22 - (long)puVar17);
      }
LAB_09edecbd:
      *(byte **)(pbVar26 + 0x90) = pbVar23;
      uVar7 = *(undefined4 *)pbVar26;
      uVar8 = *(undefined4 *)(pbVar26 + 4);
      uVar9 = *(undefined4 *)(pbVar26 + 8);
      uVar13 = *(undefined4 *)(pbVar26 + 0xc);
      if (*(long *)(pbVar26 + 8) != 0) {
        LOCK();
        plVar5 = (long *)(*(long *)(pbVar26 + 8) + 8);
        *plVar5 = *plVar5 + 1;
        UNLOCK();
      }
      pbVar23 = pbVar16 + 8;
      plVar5 = (long *)plVar15[0xf];
      *(undefined4 *)(plVar15 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar15 + 0x74) = uVar8;
      *(undefined4 *)(plVar15 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar15 + 0x7c) = uVar13;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar27 = plVar5 + 1;
        lVar22 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
      *(byte *)(plVar15 + 0x10) = pbVar26[0xa1];
      LOCK();
      lVar22 = *(long *)pbVar23;
      *(long *)pbVar23 = *(long *)pbVar23 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        func_0x0412c2d0(pbVar16);
      }
      plVar27 = plStack_80;
      plVar5 = plStack_88;
      LOCK();
      lVar22 = *plStack_80;
      *plStack_80 = *plStack_80 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
        LOCK();
        lVar22 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar22 = *plStack_80;
        *plStack_80 = *plStack_80 + -1;
        UNLOCK();
      }
      if (lVar22 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
      return plVar5;
    }
  }
  else {
    pbVar28 = pbVar28 + -(long)pbStack_90;
    uVar30 = ((long)pbVar28 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar30) goto LAB_09ededf5;
    lVar20 = (long)*(byte **)(lVar22 + 200) - (long)pbStack_90 >> 3;
    uVar19 = lVar20 * -0x6186186186186186;
    if (uVar30 < uVar19) {
      uVar30 = uVar19;
    }
    pbVar23 = (byte *)(lVar22 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      uVar30 = 0x186186186186186;
    }
    pbStack_d8 = pbVar23;
    if (uVar30 == 0) {
      puVar17 = (undefined8 *)0x0;
LAB_09ede629:
      pbStack_f0 = pbVar28 + (long)puVar17;
      puStack_e0 = puVar17 + uVar30 * 0x15;
      puStack_f8 = puVar17;
      pbStack_e8 = pbStack_f0;
      func_0x09ee11a0(pbStack_f0);
      pbVar28 = pbStack_e8 + 0xa8;
      lVar20 = *(long *)(lVar22 + 0xb8);
      lVar24 = *(long *)(lVar22 + 0xc0);
      pbVar26 = pbStack_f0 + (lVar20 - lVar24);
      if (lVar20 != lVar24) {
        lVar22 = 0;
        do {
          uVar18 = ((undefined8 *)(lVar20 + lVar22))[1];
          *(undefined8 *)(pbVar26 + lVar22) = *(undefined8 *)(lVar20 + lVar22);
          *(undefined8 *)(pbVar26 + lVar22 + 8) = uVar18;
          *(undefined8 *)(lVar20 + lVar22) = 0;
          ((undefined8 *)(lVar20 + lVar22))[1] = 0;
          pbVar25 = pbVar26 + lVar22 + 0x20;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar22 + 0x10;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar22 + 0x30;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          *(undefined8 *)(pbVar26 + lVar22 + 0x28) = *(undefined8 *)(lVar20 + 0x28 + lVar22);
          puVar2 = (undefined4 *)(lVar20 + 0x18 + lVar22);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          pbVar25 = pbVar26 + lVar22 + 0x18;
          *(undefined4 *)pbVar25 = *puVar2;
          *(undefined4 *)(pbVar25 + 4) = uVar7;
          *(undefined4 *)(pbVar25 + 8) = uVar8;
          *(undefined4 *)(pbVar25 + 0xc) = uVar9;
          *(undefined2 *)(lVar20 + 0x18 + lVar22) = 0;
          *(undefined8 *)(pbVar26 + lVar22 + 0x10) = *(undefined8 *)(lVar20 + 0x10 + lVar22);
          func_0x04167a20(pbVar26 + lVar22 + 0x38,lVar22 + lVar20 + 0x38);
          puVar17 = (undefined8 *)(lVar20 + 0x40 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar26 + lVar22 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar26 + lVar22 + 0x40 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar20 + 0x50 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar26 + lVar22 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar26 + lVar22 + 0x50 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar20 + 0x60 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar26 + lVar22 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar26 + lVar22 + 0x60 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar20 + 0x60 + lVar22);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar26 + lVar22 + 0x70) = *(undefined8 *)(lVar20 + 0x70 + lVar22);
          puVar17 = (undefined8 *)(lVar20 + 0x78 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar26 + lVar22 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar26 + lVar22 + 0x78 + 8) = uVar18;
          pbVar25 = pbVar26 + lVar22 + 0x88;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar22 + 0x98;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          puVar2 = (undefined4 *)(lVar20 + 0x88 + lVar22);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          pbVar25 = pbVar26 + lVar22 + 0x88;
          *(undefined4 *)pbVar25 = *puVar2;
          *(undefined4 *)(pbVar25 + 4) = uVar7;
          *(undefined4 *)(pbVar25 + 8) = uVar8;
          *(undefined4 *)(pbVar25 + 0xc) = uVar9;
          *(undefined8 *)(pbVar26 + lVar22 + 0x98) = *(undefined8 *)(lVar20 + 0x98 + lVar22);
          puVar17 = (undefined8 *)(lVar20 + 0x88 + lVar22);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar20 + 0x98 + lVar22) = 0;
          *(undefined2 *)(pbVar26 + lVar22 + 0xa0) = *(undefined2 *)(lVar20 + 0xa0 + lVar22);
          lVar1 = lVar22 + lVar20;
          lVar22 = lVar22 + 0xa8;
        } while (lVar1 + 0xa8 != lVar24);
        do {
          func_0x09ee1320(lVar20);
          lVar20 = lVar20 + 0xa8;
        } while (lVar20 != lVar24);
        lVar20 = *(long *)pbVar23;
        lVar22 = lStack_a8;
      }
      *(byte **)(lVar22 + 0xb8) = pbVar26;
      *(byte **)(lVar22 + 0xc0) = pbVar28;
      lVar24 = *(long *)(lVar22 + 200);
      *(undefined8 **)(lVar22 + 200) = puStack_e0;
      if (lVar20 != 0) {
        func_0x0412a280(lVar20,lVar24 - lVar20);
      }
      goto LAB_09ede816;
    }
    if (uVar30 < 0x186186186186187) {
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0xa8);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar30 * 0xa8,0);
        puVar17 = (undefined8 *)0x0;
      }
      goto LAB_09ede629;
    }
LAB_09ededeb:
    FUN_04882eb0();
  }
  func_0x09ee1540();
LAB_09ededf5:
  uVar18 = func_0x09ee1310();
  if ((*pbVar28 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar23 + 0x18),*(ulong *)(pbVar23 + 8) & 0xfffffffffffffffe);
  }
  func_0x09ee1480(&puStack_f8);
  func_0x09edef80(pbVar16);
  func_0x09edefb0(plVar15);
  func_0x09edefe0(plVar15);
  func_0x0eee2d70(uVar18);
  pcVar6 = (code *)swi(3);
  plVar15 = (long *)(*pcVar6)();
  return plVar15;
}


