/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6e64d60 (ELF vaddr 0x6d64d60)
 * Label: caller-of-callee
 * Body:  [[06e64d60, 06e64f8e] [06e64f90, 06e64ffa] [06e65000, 06e6571a] [06e65720, 06e65761] [06e65770, 06e65934] [06e65a0b, 06e65a32]]
 * Ghidra: FUN_06e64d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_06e64d60(long *param_1,long *param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined4 *puVar30;
  bool bVar31;
  undefined1 uStack_e9;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_8c;
  long *plStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plStack_e0 = param_1;
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    puStack_78 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_4)(param_4,&puStack_78);
    puStack_78 = (undefined8 *)*param_4;
  }
  *param_4 = 0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x170);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x170,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f096018;
  puStack_d8 = (undefined8 *)0x0;
  plStack_d0 = (long *)0x0;
  if (puStack_78 == (undefined8 *)0x0) {
    puStack_d8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_78)(&puStack_78,&puStack_d8);
    puStack_d8 = puStack_78;
  }
  puStack_78 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar12 + 0xe,&uStack_e9,&UNK_01254d89);
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
  plVar12[4] = (long)&UNK_0f096068;
  if (puStack_d8 != (undefined8 *)0x0) {
    (*(code *)puStack_d8[1])(&puStack_d8);
  }
  plVar13 = plVar12 + 1;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  uStack_8c = param_3;
  plStack_88 = plVar13;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_80 = plVar12 + 4;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f096148;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[4] = (long)&UNK_0f096198;
  plVar13[0xe] = (long)plStack_80;
  plVar13[0xf] = (long)plVar12;
  LOCK();
  plVar12[1] = plVar12[1] + 1;
  UNLOCK();
  plStack_e8 = (long *)plStack_e0[0x17];
  plVar23 = (long *)plStack_e0[0x18];
  plVar22 = plVar12;
  if (plStack_e8 != plVar23) {
    lVar24 = *param_2;
    lVar18 = (long)plStack_e8 + 0x19;
    do {
      if (*(long *)(lVar18 + -9) == lVar24) {
        plVar22 = (long *)(lVar18 + -9);
        if ((*(long **)(lVar18 + 0x17) != param_2) || (plVar22 != (long *)param_2[4])) {
          bVar4 = *(byte *)(lVar18 + -1);
          if ((bVar4 & 1) == 0) {
            uVar20 = (ulong)(bVar4 >> 1);
            uVar17 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_06e64ff0;
LAB_06e6500e:
            if (uVar20 != param_2[2]) goto LAB_06e64f9d;
          }
          else {
            uVar20 = *(ulong *)(lVar18 + 7);
            uVar17 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_06e6500e;
LAB_06e64ff0:
            if (uVar20 != uVar17 >> 1) goto LAB_06e64f9d;
          }
          lVar25 = lVar18;
          if ((bVar4 & 1) != 0) {
            lVar25 = *(long *)(lVar18 + 0xf);
          }
          lVar21 = (long)param_2 + 9;
          if ((uVar17 & 1) != 0) {
            lVar21 = param_2[3];
          }
          iVar11 = func_0x0eee3000(lVar25,lVar21);
          if (iVar11 != 0) goto LAB_06e64f9d;
          *(long **)(lVar18 + 0x17) = param_2;
          param_2[4] = (long)plVar22;
        }
        puVar30 = (undefined4 *)(lVar18 + -0x19);
        goto LAB_06e65475;
      }
LAB_06e64f9d:
      *(undefined8 *)(lVar18 + 0x17) = 0;
      plVar29 = (long *)(lVar18 + 0x8f);
      lVar18 = lVar18 + 0xa8;
    } while (plVar29 != plVar23);
  }
  plVar29 = plStack_e0;
  if (plVar23 < (long *)plStack_e0[0x19]) {
    func_0x06ef40d0(plVar23);
    plVar23 = plVar23 + 0x15;
    plVar29[0x18] = (long)plVar23;
LAB_06e652f2:
    plVar29[0x18] = (long)plVar23;
    func_0x0b63b6d0(plVar23[-0x15],param_2);
    lVar24 = plVar29[0x18];
    *(char *)(lVar24 + -7) = (char)plVar29[0xc];
    pbVar26 = (byte *)(param_2 + 1);
    if ((long *)(lVar24 + -0x98) != param_2) {
      pbVar2 = (byte *)(lVar24 + -0x90);
      bVar4 = *pbVar26;
      if ((*pbVar2 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          *(long *)(lVar24 + -0x80) = param_2[3];
          uVar7 = *(undefined4 *)((long)param_2 + 0xc);
          lVar18 = param_2[2];
          uVar8 = *(undefined4 *)((long)param_2 + 0x14);
          *(undefined4 *)pbVar2 = *(undefined4 *)pbVar26;
          *(undefined4 *)(lVar24 + -0x8c) = uVar7;
          *(int *)(lVar24 + -0x88) = (int)lVar18;
          *(undefined4 *)(lVar24 + -0x84) = uVar8;
        }
        else {
          func_0x04885070(pbVar2,param_2[3],param_2[2]);
        }
      }
      else {
        bVar31 = (bVar4 & 1) != 0;
        lVar18 = (long)param_2 + 9;
        if (bVar31) {
          lVar18 = param_2[3];
        }
        uVar20 = (ulong)(bVar4 >> 1);
        if (bVar31) {
          uVar20 = param_2[2];
        }
        func_0x04885120(pbVar2,lVar18,uVar20);
      }
    }
    *(long *)(lVar24 + -0x98) = *param_2;
    *(undefined8 *)(lVar24 + -0x78) = 0;
    func_0x04aa9390(&puStack_d8,pbVar26,(char)plVar29[0xc]);
    lVar24 = plVar29[0x18];
    func_0x04167a70(lVar24 + -0x70,&puStack_d8);
    *(long **)(lVar24 + -0x68) = plStack_d0;
    *(long **)(lVar24 + -0x60) = plStack_c8;
    *(undefined8 **)(lVar24 + -0x58) = puStack_c0;
    *(long **)(lVar24 + -0x50) = plStack_b8;
    uVar7 = (undefined4)uStack_b0;
    uVar8 = uStack_b0._4_4_;
    uVar9 = (undefined4)uStack_a8;
    uVar10 = uStack_a8._4_4_;
    uStack_b0 = 0;
    uStack_a8 = (long *)0x0;
    plVar22 = *(long **)(lVar24 + -0x40);
    *(undefined4 *)(lVar24 + -0x48) = uVar7;
    *(undefined4 *)(lVar24 + -0x44) = uVar8;
    *(undefined4 *)(lVar24 + -0x40) = uVar9;
    *(undefined4 *)(lVar24 + -0x3c) = uVar10;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar23 = plVar22 + 1;
      lVar18 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
    uVar7 = uStack_8c;
    plVar22 = uStack_a8;
    *(undefined8 *)(lVar24 + -0x38) = uStack_a0;
    if (uStack_a8 != (long *)0x0) {
      LOCK();
      plVar23 = uStack_a8 + 1;
      lVar24 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
        func_0x0412c2d0(plVar22);
      }
    }
    func_0x04167a40(&puStack_d8);
    lVar24 = plVar29[0x18];
    *(char *)(lVar24 + -8) = (char)uVar7;
    puVar30 = (undefined4 *)(lVar24 + -0xa8);
LAB_06e65475:
    plVar23 = plVar12 + 0x11;
    plVar22 = plVar13 + 4;
    plVar29 = *(long **)(puVar30 + 0x24);
    if (plVar29 < *(long **)(puVar30 + 0x26)) {
      plVar29[2] = 0;
      plVar29[3] = 0;
      *plVar29 = 0;
      plVar29[1] = 0;
      plVar29[4] = 0;
      if (plVar29 != plVar23) {
        if ((*(byte *)(plVar12 + 0x12) & 1) == 0) {
          plVar29[3] = plVar12[0x14];
          lVar24 = plVar12[0x13];
          plVar29[1] = plVar12[0x12];
          plVar29[2] = lVar24;
        }
        else {
          func_0x04885070(plVar29 + 1,plVar12[0x14],plVar12[0x13]);
        }
      }
      *plVar29 = *plVar23;
      plVar29[5] = (long)plVar22;
      plVar29[6] = (long)plVar13;
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
      plVar29 = plVar29 + 7;
      *(long **)(puVar30 + 0x24) = plVar29;
      plVar22 = plStack_88;
      goto LAB_06e657d1;
    }
    lVar24 = (long)plVar29 - *(long *)(puVar30 + 0x22);
    pbVar26 = (byte *)((lVar24 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (pbVar26 < (byte *)0x492492492492493) {
      lVar18 = (long)*(long **)(puVar30 + 0x26) - *(long *)(puVar30 + 0x22) >> 3;
      pbVar2 = (byte *)(lVar18 * -0x2492492492492492);
      if (pbVar26 < pbVar2) {
        pbVar26 = pbVar2;
      }
      plStack_e8 = (long *)(puVar30 + 0x22);
      if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
        pbVar26 = (byte *)0x492492492492492;
      }
      plStack_e0 = plVar22;
      plStack_b8 = plStack_e8;
      if (pbVar26 == (byte *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        if ((byte *)0x492492492492492 < pbVar26) goto LAB_06e658fc;
        puVar14 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar26 * 0x38);
        if (puVar14 == (undefined8 *)0x0) {
          func_0x0eec74c0((long)pbVar26 * 0x38,0);
          puVar14 = (undefined8 *)0x0;
        }
      }
      plVar22 = (long *)((long)puVar14 + lVar24);
      puStack_c0 = puVar14 + (long)pbVar26 * 7;
      puVar28 = (undefined8 *)((long)puVar14 + lVar24 + 0x10);
      *puVar28 = 0;
      puVar28[1] = 0;
      *(undefined8 *)((long)puVar14 + lVar24) = 0;
      ((undefined8 *)((long)puVar14 + lVar24))[1] = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x20) = 0;
      plStack_c8 = plVar22;
      puStack_d8 = puVar14;
      plStack_d0 = plVar22;
      if (plVar22 != plVar23) {
        puVar27 = (undefined4 *)((long)puVar14 + lVar24 + 8);
        if ((*(byte *)(plVar12 + 0x12) & 1) == 0) {
          *(long *)((long)puVar14 + lVar24 + 0x18) = plVar12[0x14];
          uVar7 = *(undefined4 *)((long)plVar12 + 0x94);
          lVar18 = plVar12[0x13];
          uVar8 = *(undefined4 *)((long)plVar12 + 0x9c);
          *puVar27 = *(undefined4 *)(plVar12 + 0x12);
          *(undefined4 *)((long)puVar14 + lVar24 + 0xc) = uVar7;
          *(int *)((long)puVar14 + lVar24 + 0x10) = (int)lVar18;
          *(undefined4 *)((long)puVar14 + lVar24 + 0x14) = uVar8;
        }
        else {
          func_0x04885070(puVar27,plVar12[0x14],plVar12[0x13]);
        }
      }
      plVar29 = plStack_e8;
      *plVar22 = *plVar23;
      plVar22[5] = (long)plStack_e0;
      plVar22[6] = (long)plVar13;
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
      plStack_c8 = plStack_c8 + 7;
      puVar28 = *(undefined8 **)(puVar30 + 0x22);
      puVar5 = *(undefined8 **)(puVar30 + 0x24);
      puVar14 = (undefined8 *)((long)plStack_d0 + ((long)puVar28 - (long)puVar5));
      puVar15 = puVar14;
      puVar19 = puVar28;
      if ((long)puVar28 - (long)puVar5 != 0) {
        do {
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[4] = 0;
          puVar15[3] = puVar19[3];
          uVar16 = puVar19[2];
          puVar15[1] = puVar19[1];
          puVar15[2] = uVar16;
          *(undefined2 *)(puVar19 + 1) = 0;
          *puVar15 = *puVar19;
          uVar16 = puVar19[6];
          puVar15[5] = puVar19[5];
          puVar15[6] = uVar16;
          puVar19[5] = 0;
          puVar19[6] = 0;
          puVar19 = puVar19 + 7;
          puVar15 = puVar15 + 7;
        } while (puVar19 != puVar5);
        do {
          plVar22 = (long *)puVar28[6];
          if (plVar22 == (long *)0x0) {
LAB_06e65745:
            bVar4 = *(byte *)(puVar28 + 1);
          }
          else {
            LOCK();
            plVar23 = plVar22 + 1;
            lVar24 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar24 != 0) goto LAB_06e65745;
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
            bVar4 = *(byte *)(puVar28 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar28[3],puVar28[1] & 0xfffffffffffffffe);
          }
          puVar28 = puVar28 + 7;
        } while (puVar28 != puVar5);
        puVar28 = (undefined8 *)*plVar29;
      }
      plVar22 = plStack_88;
      plVar29 = plStack_c8;
      *(undefined8 **)(puVar30 + 0x22) = puVar14;
      *(long **)(puVar30 + 0x24) = plStack_c8;
      lVar24 = *(long *)(puVar30 + 0x26);
      *(undefined8 **)(puVar30 + 0x26) = puStack_c0;
      if (puVar28 != (undefined8 *)0x0) {
        func_0x0412a280(puVar28,lVar24 - (long)puVar28);
      }
LAB_06e657d1:
      *(long **)(puVar30 + 0x24) = plVar29;
      uVar7 = *puVar30;
      uVar8 = puVar30[1];
      uVar9 = puVar30[2];
      uVar10 = puVar30[3];
      if (*(long *)(puVar30 + 2) != 0) {
        LOCK();
        plVar23 = (long *)(*(long *)(puVar30 + 2) + 8);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
      }
      plVar29 = plVar13 + 1;
      plVar23 = (long *)plVar12[0xf];
      *(undefined4 *)(plVar12 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar12 + 0x74) = uVar8;
      *(undefined4 *)(plVar12 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar12 + 0x7c) = uVar10;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar1 = plVar23 + 1;
        lVar24 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
      }
      *(undefined1 *)(plVar12 + 0x10) = *(undefined1 *)((long)puVar30 + 0xa1);
      LOCK();
      lVar24 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
        LOCK();
        lVar24 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar24 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
      }
      if (lVar24 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        LOCK();
        lVar24 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar24 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
      }
      if (lVar24 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
      return plStack_80;
    }
  }
  else {
    lVar24 = (long)plVar23 - (long)plStack_e8;
    pbVar26 = (byte *)((lVar24 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((byte *)0x186186186186186 < pbVar26) goto LAB_06e65906;
    lVar18 = plStack_e0[0x19] - (long)plStack_e8 >> 3;
    pbVar2 = (byte *)(lVar18 * -0x6186186186186186);
    if (pbVar26 < pbVar2) {
      pbVar26 = pbVar2;
    }
    plVar22 = plStack_e0 + 0x17;
    if (0xc30c30c30c30c2 < (ulong)(lVar18 * -0x30c30c30c30c30c3)) {
      pbVar26 = (byte *)0x186186186186186;
    }
    plStack_b8 = plVar22;
    if (pbVar26 == (byte *)0x0) {
      puVar14 = (undefined8 *)0x0;
LAB_06e65115:
      plStack_d0 = (long *)(lVar24 + (long)puVar14);
      puStack_c0 = puVar14 + (long)pbVar26 * 0x15;
      puStack_d8 = puVar14;
      plStack_c8 = plStack_d0;
      func_0x06ef40d0(plStack_d0);
      plVar23 = plStack_c8 + 0x15;
      lVar24 = plVar29[0x17];
      lVar18 = plVar29[0x18];
      lVar25 = (lVar24 - lVar18) + (long)plStack_d0;
      if (lVar24 != lVar18) {
        lVar21 = 0;
        plStack_e8 = plVar22;
        do {
          uVar16 = ((undefined8 *)(lVar24 + lVar21))[1];
          *(undefined8 *)(lVar25 + lVar21) = *(undefined8 *)(lVar24 + lVar21);
          ((undefined8 *)(lVar25 + lVar21))[1] = uVar16;
          *(undefined8 *)(lVar24 + lVar21) = 0;
          ((undefined8 *)(lVar24 + lVar21))[1] = 0;
          puVar14 = (undefined8 *)(lVar25 + 0x20 + lVar21);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14 = (undefined8 *)(lVar25 + 0x10 + lVar21);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined8 *)(lVar25 + 0x30 + lVar21) = 0;
          *(undefined8 *)(lVar25 + 0x28 + lVar21) = *(undefined8 *)(lVar24 + 0x28 + lVar21);
          puVar30 = (undefined4 *)(lVar24 + 0x18 + lVar21);
          uVar7 = puVar30[1];
          uVar8 = puVar30[2];
          uVar9 = puVar30[3];
          puVar27 = (undefined4 *)(lVar25 + 0x18 + lVar21);
          *puVar27 = *puVar30;
          puVar27[1] = uVar7;
          puVar27[2] = uVar8;
          puVar27[3] = uVar9;
          *(undefined2 *)(lVar24 + 0x18 + lVar21) = 0;
          *(undefined8 *)(lVar25 + 0x10 + lVar21) = *(undefined8 *)(lVar24 + 0x10 + lVar21);
          func_0x04167a20(lVar25 + lVar21 + 0x38,lVar24 + lVar21 + 0x38);
          puVar14 = (undefined8 *)(lVar24 + 0x40 + lVar21);
          uVar16 = puVar14[1];
          puVar28 = (undefined8 *)(lVar25 + 0x40 + lVar21);
          *puVar28 = *puVar14;
          puVar28[1] = uVar16;
          puVar14 = (undefined8 *)(lVar24 + 0x50 + lVar21);
          uVar16 = puVar14[1];
          puVar28 = (undefined8 *)(lVar25 + 0x50 + lVar21);
          *puVar28 = *puVar14;
          puVar28[1] = uVar16;
          puVar14 = (undefined8 *)(lVar24 + 0x60 + lVar21);
          uVar16 = puVar14[1];
          puVar28 = (undefined8 *)(lVar25 + 0x60 + lVar21);
          *puVar28 = *puVar14;
          puVar28[1] = uVar16;
          puVar14 = (undefined8 *)(lVar24 + 0x60 + lVar21);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined8 *)(lVar25 + 0x70 + lVar21) = *(undefined8 *)(lVar24 + 0x70 + lVar21);
          puVar14 = (undefined8 *)(lVar24 + 0x78 + lVar21);
          uVar16 = puVar14[1];
          puVar28 = (undefined8 *)(lVar25 + 0x78 + lVar21);
          *puVar28 = *puVar14;
          puVar28[1] = uVar16;
          puVar14 = (undefined8 *)(lVar25 + 0x88 + lVar21);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined8 *)(lVar25 + 0x98 + lVar21) = 0;
          puVar30 = (undefined4 *)(lVar24 + 0x88 + lVar21);
          uVar7 = puVar30[1];
          uVar8 = puVar30[2];
          uVar9 = puVar30[3];
          puVar27 = (undefined4 *)(lVar25 + 0x88 + lVar21);
          *puVar27 = *puVar30;
          puVar27[1] = uVar7;
          puVar27[2] = uVar8;
          puVar27[3] = uVar9;
          *(undefined8 *)(lVar25 + 0x98 + lVar21) = *(undefined8 *)(lVar24 + 0x98 + lVar21);
          puVar14 = (undefined8 *)(lVar24 + 0x88 + lVar21);
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined8 *)(lVar24 + 0x98 + lVar21) = 0;
          *(undefined2 *)(lVar25 + 0xa0 + lVar21) = *(undefined2 *)(lVar24 + 0xa0 + lVar21);
          lVar3 = lVar24 + lVar21;
          lVar21 = lVar21 + 0xa8;
        } while (lVar3 + 0xa8 != lVar18);
        do {
          func_0x06ef4250(lVar24);
          lVar24 = lVar24 + 0xa8;
        } while (lVar24 != lVar18);
        lVar24 = *plStack_e8;
      }
      plVar29 = plStack_e0;
      plStack_e0[0x17] = lVar25;
      plStack_e0[0x18] = (long)plVar23;
      lVar18 = plStack_e0[0x19];
      plStack_e0[0x19] = (long)puStack_c0;
      if (lVar24 != 0) {
        func_0x0412a280(lVar24,lVar18 - lVar24);
      }
      goto LAB_06e652f2;
    }
    if (pbVar26 < (byte *)0x186186186186187) {
      puVar14 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar26 * 0xa8);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)pbVar26 * 0xa8,0);
        puVar14 = (undefined8 *)0x0;
      }
      goto LAB_06e65115;
    }
LAB_06e658fc:
    func_0x04882eb0();
  }
  func_0x06ef4470();
LAB_06e65906:
  uVar16 = func_0x06ef4240();
  if ((*pbVar26 & 1) != 0) {
    func_0x0412a280(plVar22[3],plVar22[1] & 0xfffffffffffffffe);
  }
  func_0x06ef43b0(&puStack_d8);
  func_0x06ef2b50(plVar13);
  func_0x06ef2b80(plVar12);
  func_0x06ef2bb0(plVar12);
  _Unwind_Resume(uVar16);
  pcVar6 = (code *)swi(3);
  plVar12 = (long *)(*pcVar6)();
  return plVar12;
}


