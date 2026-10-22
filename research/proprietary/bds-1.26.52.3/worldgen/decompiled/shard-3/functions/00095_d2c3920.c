/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c3920
 * Label: FlatWorldGenerator::vslot1
 * Body:  [[0d2c2c70, 0d2c2e22] [0d2c2e30, 0d2c2f13] [0d2c2f20, 0d2c2f76] [0d2c2f80, 0d2c2ff2] [0d2c3000, 0d2c3b85] [0d2c3b90, 0d2c3c57] [0d2c3c62, 0d2c3c8e]]
 * Ghidra: wg_FlatWorldGenerator__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot1(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  char cVar10;
  short in_AX;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long unaff_RBX;
  long unaff_RBP;
  uint uVar26;
  ulong uVar27;
  long unaff_R13;
  ulong unaff_R15;
  bool bVar28;
  long in_stack_00000008;
  long in_stack_00000010;
  int *in_stack_00000018;
  uint *in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  ulong in_stack_00000090;
  
  do {
    LOCK();
    UNLOCK();
    _DAT_0f557410 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + in_AX;
    func_0x0410844d(&DAT_0f557418);
    uVar27 = in_stack_00000030;
    do {
      in_stack_00000030 = uVar27;
      psVar15 = *(short **)(unaff_RBX + 0x170);
      while( true ) {
        uVar27 = in_stack_00000030;
        if (psVar15 == *(short **)(unaff_RBX + 0x178)) goto LAB_0d2c35a0;
        if (*psVar15 == _DAT_0f557410) break;
        psVar15 = psVar15 + 8;
      }
      lVar1 = *(long *)(psVar15 + 4);
      if (lVar1 == 0) goto LAB_0d2c35a0;
      plVar22 = *(long **)(lVar1 + 8);
      plVar6 = *(long **)(lVar1 + 0x10);
      if ((long)plVar6 - (long)plVar22 != 0x10) {
        if (plVar22 != plVar6) {
          uVar26 = 0;
          plVar17 = plVar22;
          do {
            uVar26 = uVar26 + (int)plVar17[1];
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar6);
          uVar27 = unaff_R13 >> 0x18;
          if (uVar27 >> 0x20 == 0) {
            iVar11 = (int)((uVar27 & 0xffffffff) % (ulong)uVar26);
          }
          else {
            auVar8._8_8_ = unaff_R13 >> 0x3f;
            auVar8._0_8_ = uVar27;
            iVar11 = SUB164(auVar8 % SEXT816((long)(ulong)uVar26),0);
          }
          uVar26 = (iVar11 >> 0x1f & uVar26) + iVar11;
          do {
            bVar28 = uVar26 < *(uint *)(plVar22 + 1);
            uVar26 = uVar26 - *(uint *)(plVar22 + 1);
            if (bVar28) goto LAB_0d2c3505;
            plVar22 = plVar22 + 2;
          } while (plVar22 != plVar6);
        }
        plVar22 = plVar6 + -2;
      }
LAB_0d2c3505:
      unaff_RBX = *plVar22;
      uVar27 = in_stack_00000030;
      do {
        in_stack_00000030 = uVar27;
        uVar27 = in_stack_00000030;
        if (unaff_RBX == in_stack_00000028) goto LAB_0d2c35a0;
        lVar1 = *(long *)(in_stack_00000010 + 0x20);
        lVar23 = *(long *)(lVar1 + (in_stack_00000080 + in_stack_00000030) * 8);
        lVar2 = *(long *)(lVar1 + (long)((int)in_stack_00000078 + (int)unaff_R15) * 8);
        lVar25 = *(long *)(lVar1 + (in_stack_00000060 + unaff_R15) * 8);
        lVar1 = *(long *)(lVar1 + (in_stack_00000070 + in_stack_00000030) * 8);
        if ((DAT_0f5569d8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5569d8), iVar11 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569d0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569d8);
        }
        iVar11 = 0x12;
        for (psVar15 = *(short **)(in_stack_00000028 + 0x170);
            psVar15 != *(short **)(in_stack_00000028 + 0x178); psVar15 = psVar15 + 8) {
          if (*psVar15 == _DAT_0f5569d0) {
            if (*(long *)(psVar15 + 4) != 0) {
              iVar11 = *(int *)(*(long *)(psVar15 + 4) + 8);
            }
            break;
          }
        }
        if ((DAT_0f5569d8 == '\0') && (iVar20 = func_0x04108328(&DAT_0f5569d8), iVar20 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569d0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569d8);
        }
        iVar20 = 0x12;
        for (psVar15 = *(short **)(lVar23 + 0x170); psVar15 != *(short **)(lVar23 + 0x178);
            psVar15 = psVar15 + 8) {
          if (*psVar15 == _DAT_0f5569d0) {
            if (*(long *)(psVar15 + 4) != 0) {
              iVar20 = *(int *)(*(long *)(psVar15 + 4) + 8);
            }
            break;
          }
        }
        if ((DAT_0f5569d8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5569d8), iVar12 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569d0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569d8);
        }
        iVar12 = 0x12;
        for (psVar15 = *(short **)(lVar2 + 0x170); psVar15 != *(short **)(lVar2 + 0x178);
            psVar15 = psVar15 + 8) {
          if (*psVar15 == _DAT_0f5569d0) {
            if (*(long *)(psVar15 + 4) != 0) {
              iVar12 = *(int *)(*(long *)(psVar15 + 4) + 8);
            }
            break;
          }
        }
        if ((DAT_0f5569d8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f5569d8), iVar13 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569d0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569d8);
        }
        iVar13 = 0x12;
        for (psVar15 = *(short **)(lVar25 + 0x170); psVar15 != *(short **)(lVar25 + 0x178);
            psVar15 = psVar15 + 8) {
          if (*psVar15 == _DAT_0f5569d0) {
            if (*(long *)(psVar15 + 4) != 0) {
              iVar13 = *(int *)(*(long *)(psVar15 + 4) + 8);
            }
            break;
          }
        }
        if ((DAT_0f5569d8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f5569d8), iVar14 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5569d0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5569d8);
        }
        iVar14 = 0x12;
        for (psVar15 = *(short **)(lVar1 + 0x170); psVar15 != *(short **)(lVar1 + 0x178);
            psVar15 = psVar15 + 8) {
          if (*psVar15 == _DAT_0f5569d0) {
            if (*(long *)(psVar15 + 4) != 0) {
              iVar14 = *(int *)(*(long *)(psVar15 + 4) + 8);
            }
            break;
          }
        }
        if (2 < (byte)((iVar14 == iVar11) +
                      (iVar13 == iVar11) + (iVar12 == iVar11) + (iVar20 == iVar11))) {
          in_stack_00000028 = unaff_RBX;
        }
        *(long *)(*(long *)(in_stack_00000010 + 0x30) +
                 ((int)*in_stack_00000020 * in_stack_00000050 + unaff_R15) * 8) = in_stack_00000028;
LAB_0d2c2ce2:
        while( true ) {
          lVar1 = in_stack_00000058;
          if (in_stack_00000030 == in_stack_00000090) {
            do {
              in_stack_00000058 = lVar1;
              if (in_stack_00000058 == in_stack_00000088) {
                if (unaff_RBP != 0) {
                  (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,unaff_RBP);
                }
                return;
              }
              lVar1 = in_stack_00000058 + 1;
            } while (*in_stack_00000020 == 0);
            in_stack_00000060 = lVar1 * in_stack_00000068;
            in_stack_00000080 = in_stack_00000058 * in_stack_00000068;
            in_stack_00000078 = in_stack_00000060 + 2;
            in_stack_00000070 = (in_stack_00000058 + 2) * in_stack_00000068;
            in_stack_00000090 = (ulong)*in_stack_00000020;
            in_stack_00000030 = 0;
            in_stack_00000050 = in_stack_00000058;
            in_stack_00000058 = lVar1;
          }
          lVar1 = *(long *)(in_stack_00000008 + 8);
          lVar23 = (lVar1 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar1 +
                   (long)*in_stack_00000018 + in_stack_00000030;
          lVar23 = (lVar23 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar23 +
                   in_stack_00000018[1] + in_stack_00000050;
          lVar23 = (lVar23 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar23 +
                   (long)*in_stack_00000018 + in_stack_00000030;
          lVar23 = (lVar23 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar23 +
                   in_stack_00000018[1] + in_stack_00000050;
          in_stack_00000028 =
               *(long *)(*(long *)(in_stack_00000010 + 0x20) +
                        (in_stack_00000060 + in_stack_00000030 + 1) * 8);
          iVar11 = *(int *)(unaff_RBP +
                           ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 4);
          iVar20 = (int)((ulong)((long)(iVar11 + -2) * -0x72c234f7) >> 0x20) + iVar11 + -2;
          iVar20 = iVar11 + ((iVar20 >> 4) - (iVar20 >> 0x1f)) * -0x1d;
          uVar27 = in_stack_00000030 + 1;
          uVar18 = lVar23 >> 0x18;
          unaff_R15 = in_stack_00000030;
          if (iVar20 != 3 || iVar11 < 2) break;
          lVar2 = *(long *)(in_stack_00000008 + 0x40);
          if ((DAT_0f5573c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5573c8), iVar11 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f5573c0 = _DAT_0f556458;
            _DAT_0f556458 = _DAT_0f556458 + 1;
            func_0x0410844d(&DAT_0f5573c8);
          }
          psVar15 = *(short **)(in_stack_00000028 + 0x170);
          while( true ) {
            if (psVar15 == *(short **)(in_stack_00000028 + 0x178)) {
              cVar10 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6)
              ;
              goto LAB_0d2c3c20;
            }
            if (*psVar15 == _DAT_0f5573c0) break;
            psVar15 = psVar15 + 8;
          }
          lVar25 = *(long *)(psVar15 + 4);
          if (lVar25 == 0) goto LAB_0d2c3c2f;
          if ((*(byte *)(lVar2 + 0x1c0) & 1) != 0) {
            if ((*(byte *)(lVar25 + 0x10) & 1) == 0) goto LAB_0d2c3c34;
            uVar3 = *(ulong *)(lVar2 + 0x1b8);
            lVar2 = *(long *)(lVar2 + 0x58);
            lVar24 = *(long *)(lVar25 + 8) * 0x30;
            lVar25 = *(long *)(lVar2 + 0x18 + lVar24);
            if (uVar3 < (ulong)(*(long *)(lVar2 + 0x20 + lVar24) - lVar25 >> 3)) {
              uVar4 = *(ulong *)(lVar25 + uVar3 * 8);
              lVar25 = *(long *)(lVar2 + lVar24);
              if ((uVar4 < (ulong)(((long *)(lVar2 + lVar24))[1] - lVar25 >> 3)) &&
                 (*(ulong *)(lVar25 + uVar4 * 8) == uVar3)) break;
            }
          }
          if ((DAT_0f557418 == '\0') && (iVar11 = func_0x04108328(&DAT_0f557418), iVar11 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f557410 = _DAT_0f556458;
            _DAT_0f556458 = _DAT_0f556458 + 1;
            func_0x0410844d(&DAT_0f557418);
          }
          psVar15 = *(short **)(in_stack_00000028 + 0x170);
          while( true ) {
            if (psVar15 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c2cd0;
            if (*psVar15 == _DAT_0f557410) break;
            psVar15 = psVar15 + 8;
          }
          lVar1 = *(long *)(psVar15 + 4);
          if (lVar1 == 0) goto LAB_0d2c2cd0;
          puVar21 = *(undefined8 **)(lVar1 + 8);
          puVar5 = *(undefined8 **)(lVar1 + 0x10);
          if ((long)puVar5 - (long)puVar21 == 0x10) goto LAB_0d2c32b5;
          if (puVar21 == puVar5) goto LAB_0d2c32ae;
          uVar26 = 0;
          puVar16 = puVar21;
          do {
            uVar26 = uVar26 + *(int *)(puVar16 + 1);
            puVar16 = puVar16 + 2;
          } while (puVar16 != puVar5);
          if (uVar18 >> 0x20 == 0) {
            iVar11 = (int)((uVar18 & 0xffffffff) % (ulong)uVar26);
          }
          else {
            auVar7._8_8_ = lVar23 >> 0x3f;
            auVar7._0_8_ = uVar18;
            iVar11 = SUB164(auVar7 % SEXT816((long)(ulong)uVar26),0);
          }
          uVar26 = (iVar11 >> 0x1f & uVar26) + iVar11;
          do {
            bVar28 = uVar26 < *(uint *)(puVar21 + 1);
            uVar26 = uVar26 - *(uint *)(puVar21 + 1);
            if (bVar28) goto LAB_0d2c32b5;
            puVar21 = puVar21 + 2;
          } while (puVar21 != puVar5);
LAB_0d2c32ae:
          puVar21 = puVar5 + -2;
LAB_0d2c32b5:
          *(undefined8 *)
           (*(long *)(in_stack_00000010 + 0x30) +
           ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) = *puVar21;
          in_stack_00000030 = uVar27;
        }
        if ((((uint)((long)uVar18 % 3 >> 0x3f) & 3) + (int)((long)uVar18 % 3) != 0) && (iVar20 != 2)
           ) goto code_r0x0d2c2ef3;
        unaff_RBP = *(long *)(in_stack_00000008 + 0x40);
        if ((DAT_0f5573c8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5573c8), iVar11 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5573c0 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5573c8);
        }
        psVar15 = *(short **)(in_stack_00000028 + 0x170);
        if (psVar15 == *(short **)(in_stack_00000028 + 0x178)) {
LAB_0d2c3bf8:
          cVar10 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6);
LAB_0d2c3c20:
          if (cVar10 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
LAB_0d2c3c2f:
          func_0x04890760();
LAB_0d2c3c34:
          func_0x048a88b0();
LAB_0d2c3c39:
          uVar19 = func_0x048a88b0();
          uVar19 = func_0x04882e20(uVar19);
          uVar19 = func_0x04882e20(uVar19);
          uVar19 = func_0x04882e20(uVar19);
          if (unaff_RBP != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,unaff_RBP);
          }
          uVar19 = func_0x0eee2d70(uVar19);
          func_0x04882e20(uVar19);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        unaff_R13 = (lVar23 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar23 + lVar1;
        while (*psVar15 != _DAT_0f5573c0) {
          psVar15 = psVar15 + 8;
          if (psVar15 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c3bf8;
        }
        lVar23 = *(long *)(psVar15 + 4);
        if (lVar23 == 0) goto LAB_0d2c3c2f;
        if ((*(byte *)(unaff_RBP + 0x88) & 1) == 0) goto joined_r0x0d2c31cf;
        if ((*(byte *)(lVar23 + 0x10) & 1) == 0) goto LAB_0d2c3c39;
        uVar18 = *(ulong *)(unaff_RBP + 0x80);
        lVar2 = *(long *)(unaff_RBP + 0x58);
        lVar25 = *(long *)(lVar23 + 8) * 0x30;
        lVar23 = *(long *)(lVar2 + 0x18 + lVar25);
        if (uVar18 < (ulong)(*(long *)(lVar2 + 0x20 + lVar25) - lVar23 >> 3)) {
          uVar3 = *(ulong *)(lVar23 + uVar18 * 8);
          lVar23 = *(long *)(lVar2 + lVar25);
          if ((((ulong)(((long *)(lVar2 + lVar25))[1] - lVar23 >> 3) <= uVar3) ||
              (*(ulong *)(lVar23 + uVar3 * 8) != uVar18)) ||
             (cVar10 = func_0x0c8cd8d0(*(long *)(in_stack_00000008 + 0x40),in_stack_00000028,
                                       *(long *)(in_stack_00000008 + 0x40) + 0x1d0), cVar10 == '\0')
             ) goto joined_r0x0d2c31cf;
          lVar23 = (unaff_R13 >> 0x18) % 3;
          unaff_RBP = in_stack_00000048;
          if (((uint)(lVar23 >> 0x3f) & 3) + (int)lVar23 == 0) {
            unaff_R13 = (unaff_R13 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * unaff_R13 + lVar1;
            goto joined_r0x0d2c31cf;
          }
LAB_0d2c35a0:
          in_stack_00000030 = uVar27;
          uVar26 = *in_stack_00000020;
          goto LAB_0d2c2cd3;
        }
joined_r0x0d2c31cf:
        if ((DAT_0f557428 == '\0') && (iVar11 = func_0x04108328(&DAT_0f557428), iVar11 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f557420 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f557428);
        }
        psVar15 = *(short **)(in_stack_00000028 + 0x170);
        while( true ) {
          unaff_RBP = in_stack_00000048;
          if (psVar15 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c35a0;
          if (*psVar15 == _DAT_0f557420) break;
          psVar15 = psVar15 + 8;
        }
        lVar23 = *(long *)(psVar15 + 4);
        if (lVar23 == 0) goto LAB_0d2c35a0;
        plVar22 = *(long **)(lVar23 + 8);
        plVar6 = *(long **)(lVar23 + 0x10);
        if ((long)plVar6 - (long)plVar22 == 0x10) goto LAB_0d2c33ef;
        if (plVar22 == plVar6) {
          unaff_R13 = (unaff_R13 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * unaff_R13 + lVar1;
          goto LAB_0d2c33e8;
        }
        uVar26 = 0;
        plVar17 = plVar22;
        do {
          uVar26 = uVar26 + (int)plVar17[1];
          plVar17 = plVar17 + 2;
        } while (plVar17 != plVar6);
        uVar18 = unaff_R13 >> 0x18;
        if (uVar18 >> 0x20 == 0) {
          iVar11 = (int)((uVar18 & 0xffffffff) % (ulong)uVar26);
        }
        else {
          iVar11 = (int)((long)uVar18 % (long)(ulong)uVar26);
        }
        unaff_R13 = unaff_R13 * (unaff_R13 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) + lVar1;
        uVar26 = (iVar11 >> 0x1f & uVar26) + iVar11;
        do {
          bVar28 = uVar26 < *(uint *)(plVar22 + 1);
          uVar26 = uVar26 - *(uint *)(plVar22 + 1);
          if (bVar28) {
            unaff_RBX = *plVar22;
            goto joined_r0x0d2c3463;
          }
          plVar22 = plVar22 + 2;
        } while (plVar22 != plVar6);
LAB_0d2c33e8:
        plVar22 = plVar6 + -2;
LAB_0d2c33ef:
        unaff_RBX = *plVar22;
joined_r0x0d2c3463:
      } while ((iVar20 != 2) || (unaff_RBX == in_stack_00000028));
    } while ((DAT_0f557418 != '\0') || (iVar11 = func_0x04108328(&DAT_0f557418), iVar11 == 0));
    in_AX = 1;
    in_stack_00000030 = uVar27;
  } while( true );
code_r0x0d2c2ef3:
  *(long *)(*(long *)(in_stack_00000010 + 0x30) +
           ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) =
       in_stack_00000028;
  in_stack_00000030 = uVar27;
  goto LAB_0d2c2ce2;
LAB_0d2c2cd0:
  uVar26 = *in_stack_00000020;
  in_stack_00000030 = uVar27;
LAB_0d2c2cd3:
  *(long *)(*(long *)(in_stack_00000010 + 0x30) + ((int)uVar26 * in_stack_00000050 + unaff_R15) * 8)
       = in_stack_00000028;
  goto LAB_0d2c2ce2;
}


