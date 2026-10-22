/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c3840
 * Label: FlatWorldGenerator::vslot1
 * Body:  [[0d2c2c70, 0d2c2e22] [0d2c2e30, 0d2c2f13] [0d2c2f20, 0d2c2f76] [0d2c2f80, 0d2c2ff2] [0d2c3000, 0d2c383d] [0d2c3840, 0d2c3b85] [0d2c3b90, 0d2c3c57] [0d2c3c62, 0d2c3c8e]]
 * Ghidra: wg_FlatWorldGenerator__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot1(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long unaff_RBX;
  long unaff_RBP;
  uint uVar26;
  ulong uVar27;
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
  
  in(0xf6);
  uVar27 = unaff_R15;
  uVar24 = in_stack_00000030;
  do {
    in_stack_00000030 = uVar24;
    psVar12 = *(short **)(in_stack_00000028 + 0x170);
    while( true ) {
      if (psVar12 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c2cd0;
      if (*psVar12 == _DAT_0f557410) break;
      psVar12 = psVar12 + 8;
    }
    lVar25 = *(long *)(psVar12 + 4);
    if (lVar25 == 0) {
LAB_0d2c2cd0:
      uVar26 = *in_stack_00000020;
      goto LAB_0d2c2cd3;
    }
    puVar19 = *(undefined8 **)(lVar25 + 8);
    puVar2 = *(undefined8 **)(lVar25 + 0x10);
    if ((long)puVar2 - (long)puVar19 != 0x10) {
      if (puVar19 != puVar2) {
        uVar26 = 0;
        puVar13 = puVar19;
        do {
          uVar26 = uVar26 + *(int *)(puVar13 + 1);
          puVar13 = puVar13 + 2;
        } while (puVar13 != puVar2);
        uVar24 = unaff_RBX >> 0x18;
        if (uVar24 >> 0x20 == 0) {
          iVar8 = (int)((uVar24 & 0xffffffff) % (ulong)uVar26);
        }
        else {
          auVar4._8_8_ = unaff_RBX >> 0x3f;
          auVar4._0_8_ = uVar24;
          iVar8 = SUB164(auVar4 % SEXT816((long)(ulong)uVar26),0);
        }
        uVar26 = (iVar8 >> 0x1f & uVar26) + iVar8;
        do {
          bVar28 = uVar26 < *(uint *)(puVar19 + 1);
          uVar26 = uVar26 - *(uint *)(puVar19 + 1);
          if (bVar28) goto LAB_0d2c32b5;
          puVar19 = puVar19 + 2;
        } while (puVar19 != puVar2);
      }
      puVar19 = puVar2 + -2;
    }
LAB_0d2c32b5:
    *(undefined8 *)
     (*(long *)(in_stack_00000010 + 0x30) +
     ((int)*in_stack_00000020 * in_stack_00000050 + uVar27) * 8) = *puVar19;
LAB_0d2c2ce2:
    lVar25 = in_stack_00000058;
    if (in_stack_00000030 == in_stack_00000090) {
      do {
        in_stack_00000058 = lVar25;
        if (in_stack_00000058 == in_stack_00000088) {
          if (unaff_RBP != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,unaff_RBP);
          }
          return;
        }
        lVar25 = in_stack_00000058 + 1;
      } while (*in_stack_00000020 == 0);
      in_stack_00000060 = lVar25 * in_stack_00000068;
      in_stack_00000080 = in_stack_00000058 * in_stack_00000068;
      in_stack_00000078 = in_stack_00000060 + 2;
      in_stack_00000070 = (in_stack_00000058 + 2) * in_stack_00000068;
      in_stack_00000090 = (ulong)*in_stack_00000020;
      in_stack_00000030 = 0;
      in_stack_00000050 = in_stack_00000058;
      in_stack_00000058 = lVar25;
    }
    lVar25 = *(long *)(in_stack_00000008 + 8);
    lVar21 = (lVar25 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar25 +
             (long)*in_stack_00000018 + in_stack_00000030;
    lVar21 = (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar21 +
             in_stack_00000018[1] + in_stack_00000050;
    lVar21 = (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar21 +
             (long)*in_stack_00000018 + in_stack_00000030;
    unaff_RBX = (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar21 +
                in_stack_00000018[1] + in_stack_00000050;
    in_stack_00000028 =
         *(long *)(*(long *)(in_stack_00000010 + 0x20) +
                  (in_stack_00000060 + in_stack_00000030 + 1) * 8);
    iVar8 = *(int *)(unaff_RBP +
                    ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 4);
    iVar17 = (int)((ulong)((long)(iVar8 + -2) * -0x72c234f7) >> 0x20) + iVar8 + -2;
    iVar17 = iVar8 + ((iVar17 >> 4) - (iVar17 >> 0x1f)) * -0x1d;
    uVar24 = in_stack_00000030 + 1;
    uVar27 = in_stack_00000030;
    if (iVar17 != 3 || iVar8 < 2) {
LAB_0d2c2eb0:
      lVar21 = (unaff_RBX >> 0x18) % 3;
      if ((((uint)(lVar21 >> 0x3f) & 3) + (int)lVar21 != 0) && (iVar17 != 2)) break;
      unaff_RBP = *(long *)(in_stack_00000008 + 0x40);
      if ((DAT_0f5573c8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5573c8), iVar8 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f5573c0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5573c8);
      }
      psVar12 = *(short **)(in_stack_00000028 + 0x170);
      if (psVar12 == *(short **)(in_stack_00000028 + 0x178)) {
LAB_0d2c3bf8:
        cVar7 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6);
LAB_0d2c3c20:
        if (cVar7 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
LAB_0d2c3c2f:
        func_0x04890760();
        goto LAB_0d2c3c34;
      }
      lVar21 = (unaff_RBX * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * unaff_RBX + lVar25;
      while (*psVar12 != _DAT_0f5573c0) {
        psVar12 = psVar12 + 8;
        if (psVar12 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c3bf8;
      }
      lVar18 = *(long *)(psVar12 + 4);
      if (lVar18 == 0) goto LAB_0d2c3c2f;
      if ((*(byte *)(unaff_RBP + 0x88) & 1) == 0) goto joined_r0x0d2c31cf;
      if ((*(byte *)(lVar18 + 0x10) & 1) == 0) goto LAB_0d2c3c39;
      uVar14 = *(ulong *)(unaff_RBP + 0x80);
      lVar22 = *(long *)(unaff_RBP + 0x58);
      lVar23 = *(long *)(lVar18 + 8) * 0x30;
      lVar18 = *(long *)(lVar22 + 0x18 + lVar23);
      if ((ulong)(*(long *)(lVar22 + 0x20 + lVar23) - lVar18 >> 3) <= uVar14) {
joined_r0x0d2c31cf:
        if ((DAT_0f557428 == '\0') && (iVar8 = func_0x04108328(&DAT_0f557428), iVar8 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f557420 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f557428);
        }
        psVar12 = *(short **)(in_stack_00000028 + 0x170);
joined_r0x0d2c31e6:
        if (psVar12 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c35a0;
        if (*psVar12 != _DAT_0f557420) goto code_r0x0d2c3205;
        lVar18 = *(long *)(psVar12 + 4);
        if (lVar18 == 0) goto LAB_0d2c35a0;
        plVar20 = *(long **)(lVar18 + 8);
        plVar3 = *(long **)(lVar18 + 0x10);
        if ((long)plVar3 - (long)plVar20 == 0x10) goto LAB_0d2c33ef;
        if (plVar20 == plVar3) {
          lVar21 = (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar21 + lVar25;
          goto LAB_0d2c33e8;
        }
        uVar26 = 0;
        plVar15 = plVar20;
        do {
          uVar26 = uVar26 + (int)plVar15[1];
          plVar15 = plVar15 + 2;
        } while (plVar15 != plVar3);
        uVar14 = lVar21 >> 0x18;
        if (uVar14 >> 0x20 == 0) {
          iVar8 = (int)((uVar14 & 0xffffffff) % (ulong)uVar26);
        }
        else {
          iVar8 = (int)((long)uVar14 % (long)(ulong)uVar26);
        }
        lVar21 = lVar21 * (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) + lVar25;
        uVar26 = (iVar8 >> 0x1f & uVar26) + iVar8;
LAB_0d2c33d0:
        bVar28 = *(uint *)(plVar20 + 1) <= uVar26;
        uVar26 = uVar26 - *(uint *)(plVar20 + 1);
        if (bVar28) goto code_r0x0d2c33d5;
        lVar25 = *plVar20;
        if (iVar17 != 2) goto LAB_0d2c350d;
LAB_0d2c33fb:
        if (lVar25 == in_stack_00000028) goto LAB_0d2c350d;
        if ((DAT_0f557418 == '\0') && (iVar8 = func_0x04108328(&DAT_0f557418), iVar8 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f557410 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f557418);
        }
        psVar12 = *(short **)(lVar25 + 0x170);
        while( true ) {
          if (psVar12 == *(short **)(lVar25 + 0x178)) goto LAB_0d2c35a0;
          if (*psVar12 == _DAT_0f557410) break;
          psVar12 = psVar12 + 8;
        }
        lVar25 = *(long *)(psVar12 + 4);
        if (lVar25 != 0) {
          plVar20 = *(long **)(lVar25 + 8);
          plVar3 = *(long **)(lVar25 + 0x10);
          if ((long)plVar3 - (long)plVar20 != 0x10) {
            if (plVar20 != plVar3) {
              uVar26 = 0;
              plVar15 = plVar20;
              do {
                uVar26 = uVar26 + (int)plVar15[1];
                plVar15 = plVar15 + 2;
              } while (plVar15 != plVar3);
              uVar14 = lVar21 >> 0x18;
              if (uVar14 >> 0x20 == 0) {
                iVar8 = (int)((uVar14 & 0xffffffff) % (ulong)uVar26);
              }
              else {
                auVar5._8_8_ = lVar21 >> 0x3f;
                auVar5._0_8_ = uVar14;
                iVar8 = SUB164(auVar5 % SEXT816((long)(ulong)uVar26),0);
              }
              uVar26 = (iVar8 >> 0x1f & uVar26) + iVar8;
              do {
                bVar28 = uVar26 < *(uint *)(plVar20 + 1);
                uVar26 = uVar26 - *(uint *)(plVar20 + 1);
                if (bVar28) goto LAB_0d2c3505;
                plVar20 = plVar20 + 2;
              } while (plVar20 != plVar3);
            }
            plVar20 = plVar3 + -2;
          }
LAB_0d2c3505:
          lVar25 = *plVar20;
          goto LAB_0d2c350d;
        }
        goto LAB_0d2c35a0;
      }
      uVar1 = *(ulong *)(lVar18 + uVar14 * 8);
      lVar18 = *(long *)(lVar22 + lVar23);
      if ((((ulong)(((long *)(lVar22 + lVar23))[1] - lVar18 >> 3) <= uVar1) ||
          (*(ulong *)(lVar18 + uVar1 * 8) != uVar14)) ||
         (cVar7 = func_0x0c8cd8d0(*(long *)(in_stack_00000008 + 0x40),in_stack_00000028,
                                  *(long *)(in_stack_00000008 + 0x40) + 0x1d0), cVar7 == '\0'))
      goto joined_r0x0d2c31cf;
      lVar18 = (lVar21 >> 0x18) % 3;
      if (((uint)(lVar18 >> 0x3f) & 3) + (int)lVar18 == 0) {
        lVar21 = (lVar21 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar21 + lVar25;
        goto joined_r0x0d2c31cf;
      }
      goto LAB_0d2c35a0;
    }
    lVar21 = *(long *)(in_stack_00000008 + 0x40);
    if ((DAT_0f5573c8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5573c8), iVar8 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573c0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573c8);
    }
    psVar12 = *(short **)(in_stack_00000028 + 0x170);
    while( true ) {
      if (psVar12 == *(short **)(in_stack_00000028 + 0x178)) {
        cVar7 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6);
        goto LAB_0d2c3c20;
      }
      if (*psVar12 == _DAT_0f5573c0) break;
      psVar12 = psVar12 + 8;
    }
    lVar18 = *(long *)(psVar12 + 4);
    if (lVar18 == 0) goto LAB_0d2c3c2f;
    if ((*(byte *)(lVar21 + 0x1c0) & 1) != 0) {
      if ((*(byte *)(lVar18 + 0x10) & 1) == 0) {
LAB_0d2c3c34:
        func_0x048a88b0();
LAB_0d2c3c39:
        uVar16 = func_0x048a88b0();
        uVar16 = func_0x04882e20(uVar16);
        uVar16 = func_0x04882e20(uVar16);
        uVar16 = func_0x04882e20(uVar16);
        if (unaff_RBP != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,unaff_RBP);
        }
        uVar16 = func_0x0eee2d70(uVar16);
        func_0x04882e20(uVar16);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = *(ulong *)(lVar21 + 0x1b8);
      lVar21 = *(long *)(lVar21 + 0x58);
      lVar22 = *(long *)(lVar18 + 8) * 0x30;
      lVar18 = *(long *)(lVar21 + 0x18 + lVar22);
      if (uVar14 < (ulong)(*(long *)(lVar21 + 0x20 + lVar22) - lVar18 >> 3)) {
        uVar1 = *(ulong *)(lVar18 + uVar14 * 8);
        lVar18 = *(long *)(lVar21 + lVar22);
        if ((uVar1 < (ulong)(((long *)(lVar21 + lVar22))[1] - lVar18 >> 3)) &&
           (*(ulong *)(lVar18 + uVar1 * 8) == uVar14)) goto LAB_0d2c2eb0;
      }
    }
    if ((DAT_0f557418 == '\0') && (iVar8 = func_0x04108328(&DAT_0f557418), iVar8 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f557410 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557418);
    }
  } while( true );
  *(long *)(*(long *)(in_stack_00000010 + 0x30) +
           ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) =
       in_stack_00000028;
  in_stack_00000030 = uVar24;
  goto LAB_0d2c2ce2;
code_r0x0d2c3205:
  psVar12 = psVar12 + 8;
  goto joined_r0x0d2c31e6;
code_r0x0d2c33d5:
  plVar20 = plVar20 + 2;
  if (plVar20 == plVar3) goto LAB_0d2c33e8;
  goto LAB_0d2c33d0;
LAB_0d2c33e8:
  plVar20 = plVar3 + -2;
LAB_0d2c33ef:
  lVar25 = *plVar20;
  if (iVar17 == 2) goto LAB_0d2c33fb;
LAB_0d2c350d:
  if (lVar25 == in_stack_00000028) {
LAB_0d2c35a0:
    uVar26 = *in_stack_00000020;
    unaff_RBP = in_stack_00000048;
    in_stack_00000030 = uVar24;
LAB_0d2c2cd3:
    *(long *)(*(long *)(in_stack_00000010 + 0x30) + ((int)uVar26 * in_stack_00000050 + uVar27) * 8)
         = in_stack_00000028;
  }
  else {
    lVar21 = *(long *)(in_stack_00000010 + 0x20);
    lVar18 = *(long *)(lVar21 + (in_stack_00000080 + uVar24) * 8);
    lVar22 = *(long *)(lVar21 + (long)((int)in_stack_00000078 + (int)in_stack_00000030) * 8);
    lVar23 = *(long *)(lVar21 + (in_stack_00000060 + in_stack_00000030) * 8);
    lVar21 = *(long *)(lVar21 + (in_stack_00000070 + uVar24) * 8);
    if ((DAT_0f5569d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5569d8), iVar8 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5569d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5569d8);
    }
    iVar8 = 0x12;
    for (psVar12 = *(short **)(in_stack_00000028 + 0x170);
        psVar12 != *(short **)(in_stack_00000028 + 0x178); psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f5569d0) {
        if (*(long *)(psVar12 + 4) != 0) {
          iVar8 = *(int *)(*(long *)(psVar12 + 4) + 8);
        }
        break;
      }
    }
    if ((DAT_0f5569d8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f5569d8), iVar17 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5569d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5569d8);
    }
    iVar17 = 0x12;
    for (psVar12 = *(short **)(lVar18 + 0x170); psVar12 != *(short **)(lVar18 + 0x178);
        psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f5569d0) {
        if (*(long *)(psVar12 + 4) != 0) {
          iVar17 = *(int *)(*(long *)(psVar12 + 4) + 8);
        }
        break;
      }
    }
    if ((DAT_0f5569d8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5569d8), iVar9 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5569d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5569d8);
    }
    iVar9 = 0x12;
    for (psVar12 = *(short **)(lVar22 + 0x170); psVar12 != *(short **)(lVar22 + 0x178);
        psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f5569d0) {
        if (*(long *)(psVar12 + 4) != 0) {
          iVar9 = *(int *)(*(long *)(psVar12 + 4) + 8);
        }
        break;
      }
    }
    if ((DAT_0f5569d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5569d8), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5569d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5569d8);
    }
    iVar10 = 0x12;
    for (psVar12 = *(short **)(lVar23 + 0x170); psVar12 != *(short **)(lVar23 + 0x178);
        psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f5569d0) {
        if (*(long *)(psVar12 + 4) != 0) {
          iVar10 = *(int *)(*(long *)(psVar12 + 4) + 8);
        }
        break;
      }
    }
    if ((DAT_0f5569d8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5569d8), iVar11 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5569d0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5569d8);
    }
    iVar11 = 0x12;
    for (psVar12 = *(short **)(lVar21 + 0x170); psVar12 != *(short **)(lVar21 + 0x178);
        psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f5569d0) {
        if (*(long *)(psVar12 + 4) != 0) {
          iVar11 = *(int *)(*(long *)(psVar12 + 4) + 8);
        }
        break;
      }
    }
    if (2 < (byte)((iVar11 == iVar8) + (iVar10 == iVar8) + (iVar9 == iVar8) + (iVar17 == iVar8))) {
      in_stack_00000028 = lVar25;
    }
    *(long *)(*(long *)(in_stack_00000010 + 0x30) +
             ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) =
         in_stack_00000028;
    unaff_RBP = in_stack_00000048;
    in_stack_00000030 = uVar24;
  }
  goto LAB_0d2c2ce2;
}


