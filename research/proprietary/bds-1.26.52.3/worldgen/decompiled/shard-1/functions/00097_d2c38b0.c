/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c38b0
 * Label: FlatWorldGenerator::vslot0
 * Body:  [[0d2c2c70, 0d2c2e22] [0d2c2e30, 0d2c2f13] [0d2c2f20, 0d2c2f76] [0d2c2f80, 0d2c2ff2] [0d2c3000, 0d2c38a9] [0d2c38b0, 0d2c3b85] [0d2c3b90, 0d2c3c57] [0d2c3c62, 0d2c3c8e]]
 * Ghidra: wg_FlatWorldGenerator__vslot0
 */


/* WARNING: Instruction at (ram,0x0d2c38b1) overlaps instruction at (ram,0x0d2c38b0)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot0(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long unaff_RBX;
  long unaff_RBP;
  uint uVar26;
  int unaff_R12D;
  long lVar27;
  long unaff_R14;
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
  
code_r0x0d2c38b8:
  func_0x0410844d(param_1);
  uVar16 = in_stack_00000030;
LAB_0d2c2f98:
  in_stack_00000030 = uVar16;
  psVar14 = *(short **)(in_stack_00000028 + 0x170);
  if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) {
LAB_0d2c3bf8:
    cVar9 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6);
LAB_0d2c3c20:
    if (cVar9 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    lVar27 = (unaff_RBX * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * unaff_RBX + unaff_R14;
    while (*psVar14 != _DAT_0f5573c0) {
      psVar14 = psVar14 + 8;
      if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c3bf8;
    }
    lVar20 = *(long *)(psVar14 + 4);
    if (lVar20 != 0) {
      if ((*(byte *)(unaff_RBP + 0x88) & 1) != 0) {
        if ((*(byte *)(lVar20 + 0x10) & 1) == 0) goto LAB_0d2c3c39;
        uVar16 = *(ulong *)(unaff_RBP + 0x80);
        lVar23 = *(long *)(unaff_RBP + 0x58);
        lVar24 = *(long *)(lVar20 + 8) * 0x30;
        lVar20 = *(long *)(lVar23 + 0x18 + lVar24);
        if (uVar16 < (ulong)(*(long *)(lVar23 + 0x20 + lVar24) - lVar20 >> 3)) {
          uVar25 = *(ulong *)(lVar20 + uVar16 * 8);
          lVar20 = *(long *)(lVar23 + lVar24);
          if (((uVar25 < (ulong)(((long *)(lVar23 + lVar24))[1] - lVar20 >> 3)) &&
              (*(ulong *)(lVar20 + uVar25 * 8) == uVar16)) &&
             (cVar9 = func_0x0c8cd8d0(*(long *)(in_stack_00000008 + 0x40),in_stack_00000028,
                                      *(long *)(in_stack_00000008 + 0x40) + 0x1d0), cVar9 != '\0'))
          {
            lVar20 = (lVar27 >> 0x18) % 3;
            if (((uint)(lVar20 >> 0x3f) & 3) + (int)lVar20 != 0) goto LAB_0d2c35a0;
            lVar27 = (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar27 + unaff_R14;
          }
        }
      }
      if ((DAT_0f557428 == '\0') && (iVar10 = func_0x04108328(&DAT_0f557428), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f557420 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f557428);
      }
      psVar14 = *(short **)(in_stack_00000028 + 0x170);
      while( true ) {
        if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c35a0;
        if (*psVar14 == _DAT_0f557420) break;
        psVar14 = psVar14 + 8;
      }
      lVar20 = *(long *)(psVar14 + 4);
      if (lVar20 == 0) goto LAB_0d2c35a0;
      plVar22 = *(long **)(lVar20 + 8);
      plVar4 = *(long **)(lVar20 + 0x10);
      if ((long)plVar4 - (long)plVar22 == 0x10) goto LAB_0d2c33ef;
      if (plVar22 == plVar4) {
        lVar27 = (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar27 + unaff_R14;
        goto LAB_0d2c33e8;
      }
      uVar26 = 0;
      plVar17 = plVar22;
      do {
        uVar26 = uVar26 + (int)plVar17[1];
        plVar17 = plVar17 + 2;
      } while (plVar17 != plVar4);
      uVar16 = lVar27 >> 0x18;
      if (uVar16 >> 0x20 == 0) {
        iVar10 = (int)((uVar16 & 0xffffffff) % (ulong)uVar26);
      }
      else {
        iVar10 = (int)((long)uVar16 % (long)(ulong)uVar26);
      }
      lVar27 = lVar27 * (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) + unaff_R14;
      uVar26 = (iVar10 >> 0x1f & uVar26) + iVar10;
LAB_0d2c33d0:
      bVar28 = *(uint *)(plVar22 + 1) <= uVar26;
      uVar26 = uVar26 - *(uint *)(plVar22 + 1);
      if (bVar28) goto code_r0x0d2c33d5;
      lVar20 = *plVar22;
      if (unaff_R12D == 0) goto LAB_0d2c33fb;
LAB_0d2c350d:
      if (lVar20 == in_stack_00000028) goto LAB_0d2c35a0;
      lVar27 = *(long *)(in_stack_00000010 + 0x20);
      lVar23 = *(long *)(lVar27 + (in_stack_00000080 + in_stack_00000030) * 8);
      lVar24 = *(long *)(lVar27 + (long)((int)in_stack_00000078 + (int)unaff_R15) * 8);
      lVar5 = *(long *)(lVar27 + (in_stack_00000060 + unaff_R15) * 8);
      lVar27 = *(long *)(lVar27 + (in_stack_00000070 + in_stack_00000030) * 8);
      if ((DAT_0f5569d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5569d8), iVar10 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f5569d0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5569d8);
      }
      psVar14 = *(short **)(in_stack_00000028 + 0x170);
      iVar10 = 0x12;
      goto joined_r0x0d2c3580;
    }
  }
LAB_0d2c3c2f:
  func_0x04890760();
LAB_0d2c3c34:
  func_0x048a88b0();
LAB_0d2c3c39:
  uVar18 = func_0x048a88b0();
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  uVar18 = func_0x04882e20(uVar18);
  if (unaff_RBP != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,unaff_RBP);
  }
  uVar18 = func_0x0eee2d70(uVar18);
  func_0x04882e20(uVar18);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_r0x0d2c33d5:
  plVar22 = plVar22 + 2;
  if (plVar22 == plVar4) goto LAB_0d2c33e8;
  goto LAB_0d2c33d0;
LAB_0d2c33e8:
  plVar22 = plVar4 + -2;
LAB_0d2c33ef:
  lVar20 = *plVar22;
  if (unaff_R12D != 0) goto LAB_0d2c350d;
LAB_0d2c33fb:
  if (lVar20 == in_stack_00000028) goto LAB_0d2c350d;
  if ((DAT_0f557418 == '\0') && (iVar10 = func_0x04108328(&DAT_0f557418), iVar10 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557410 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557418);
  }
  for (psVar14 = *(short **)(lVar20 + 0x170); psVar14 != *(short **)(lVar20 + 0x178);
      psVar14 = psVar14 + 8) {
    if (*psVar14 == _DAT_0f557410) {
      lVar20 = *(long *)(psVar14 + 4);
      if (lVar20 != 0) {
        plVar22 = *(long **)(lVar20 + 8);
        plVar4 = *(long **)(lVar20 + 0x10);
        if ((long)plVar4 - (long)plVar22 != 0x10) {
          if (plVar22 != plVar4) {
            uVar26 = 0;
            plVar17 = plVar22;
            do {
              uVar26 = uVar26 + (int)plVar17[1];
              plVar17 = plVar17 + 2;
            } while (plVar17 != plVar4);
            uVar16 = lVar27 >> 0x18;
            if (uVar16 >> 0x20 == 0) {
              iVar10 = (int)((uVar16 & 0xffffffff) % (ulong)uVar26);
            }
            else {
              auVar7._8_8_ = lVar27 >> 0x3f;
              auVar7._0_8_ = uVar16;
              iVar10 = SUB164(auVar7 % SEXT816((long)(ulong)uVar26),0);
            }
            uVar26 = (iVar10 >> 0x1f & uVar26) + iVar10;
            do {
              bVar28 = uVar26 < *(uint *)(plVar22 + 1);
              uVar26 = uVar26 - *(uint *)(plVar22 + 1);
              if (bVar28) goto LAB_0d2c3505;
              plVar22 = plVar22 + 2;
            } while (plVar22 != plVar4);
          }
          plVar22 = plVar4 + -2;
        }
LAB_0d2c3505:
        lVar20 = *plVar22;
        goto LAB_0d2c350d;
      }
      break;
    }
  }
LAB_0d2c35a0:
  uVar26 = *in_stack_00000020;
LAB_0d2c2cd3:
  *(long *)(*(long *)(in_stack_00000010 + 0x30) + ((int)uVar26 * in_stack_00000050 + unaff_R15) * 8)
       = in_stack_00000028;
LAB_0d2c2ce2:
  do {
    while( true ) {
      lVar27 = in_stack_00000058;
      if (in_stack_00000030 == in_stack_00000090) {
        do {
          in_stack_00000058 = lVar27;
          if (in_stack_00000058 == in_stack_00000088) {
            if (in_stack_00000048 != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,in_stack_00000048);
            }
            return;
          }
          lVar27 = in_stack_00000058 + 1;
        } while (*in_stack_00000020 == 0);
        in_stack_00000060 = lVar27 * in_stack_00000068;
        in_stack_00000080 = in_stack_00000058 * in_stack_00000068;
        in_stack_00000078 = in_stack_00000060 + 2;
        in_stack_00000070 = (in_stack_00000058 + 2) * in_stack_00000068;
        in_stack_00000090 = (ulong)*in_stack_00000020;
        in_stack_00000030 = 0;
        in_stack_00000050 = in_stack_00000058;
        in_stack_00000058 = lVar27;
      }
      unaff_R14 = *(long *)(in_stack_00000008 + 8);
      lVar27 = (unaff_R14 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * unaff_R14 +
               (long)*in_stack_00000018 + in_stack_00000030;
      lVar27 = (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar27 +
               in_stack_00000018[1] + in_stack_00000050;
      lVar27 = (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar27 +
               (long)*in_stack_00000018 + in_stack_00000030;
      unaff_RBX = (lVar27 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar27 +
                  in_stack_00000018[1] + in_stack_00000050;
      in_stack_00000028 =
           *(long *)(*(long *)(in_stack_00000010 + 0x20) +
                    (in_stack_00000060 + in_stack_00000030 + 1) * 8);
      iVar10 = *(int *)(in_stack_00000048 +
                       ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 4);
      iVar19 = (int)((ulong)((long)(iVar10 + -2) * -0x72c234f7) >> 0x20) + iVar10 + -2;
      unaff_R12D = iVar10 + ((iVar19 >> 4) - (iVar19 >> 0x1f)) * -0x1d + -2;
      uVar16 = in_stack_00000030 + 1;
      uVar25 = unaff_RBX >> 0x18;
      unaff_R15 = in_stack_00000030;
      if (unaff_R12D == 1 && 1 < iVar10) break;
LAB_0d2c2eb0:
      if ((((uint)((long)uVar25 % 3 >> 0x3f) & 3) + (int)((long)uVar25 % 3) == 0) ||
         (unaff_R12D == 0)) {
        unaff_RBP = *(long *)(in_stack_00000008 + 0x40);
        if ((DAT_0f5573c8 != '\0') || (iVar10 = func_0x04108328(&DAT_0f5573c8), iVar10 == 0))
        goto LAB_0d2c2f98;
        LOCK();
        UNLOCK();
        _DAT_0f5573c0 = _DAT_0f556458;
        param_1 = &DAT_0f5573c8;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        in_stack_00000030 = uVar16;
        goto code_r0x0d2c38b8;
      }
      *(long *)(*(long *)(in_stack_00000010 + 0x30) +
               ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) =
           in_stack_00000028;
      in_stack_00000030 = uVar16;
    }
    lVar27 = *(long *)(in_stack_00000008 + 0x40);
    if ((DAT_0f5573c8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5573c8), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573c0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573c8);
    }
    psVar14 = *(short **)(in_stack_00000028 + 0x170);
    while( true ) {
      unaff_RBP = in_stack_00000048;
      if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) {
        cVar9 = func_0x0eeddcf0(&UNK_0123d3db,&UNK_01198d5e,0x73,&UNK_012086f1,&UNK_01340bd6);
        goto LAB_0d2c3c20;
      }
      if (*psVar14 == _DAT_0f5573c0) break;
      psVar14 = psVar14 + 8;
    }
    lVar20 = *(long *)(psVar14 + 4);
    if (lVar20 == 0) goto LAB_0d2c3c2f;
    if ((*(byte *)(lVar27 + 0x1c0) & 1) != 0) {
      if ((*(byte *)(lVar20 + 0x10) & 1) == 0) goto LAB_0d2c3c34;
      uVar1 = *(ulong *)(lVar27 + 0x1b8);
      lVar27 = *(long *)(lVar27 + 0x58);
      lVar23 = *(long *)(lVar20 + 8) * 0x30;
      lVar20 = *(long *)(lVar27 + 0x18 + lVar23);
      if (uVar1 < (ulong)(*(long *)(lVar27 + 0x20 + lVar23) - lVar20 >> 3)) {
        uVar2 = *(ulong *)(lVar20 + uVar1 * 8);
        lVar20 = *(long *)(lVar27 + lVar23);
        if ((uVar2 < (ulong)(((long *)(lVar27 + lVar23))[1] - lVar20 >> 3)) &&
           (*(ulong *)(lVar20 + uVar2 * 8) == uVar1)) goto LAB_0d2c2eb0;
      }
    }
    if ((DAT_0f557418 == '\0') && (iVar10 = func_0x04108328(&DAT_0f557418), iVar10 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f557410 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557418);
    }
    psVar14 = *(short **)(in_stack_00000028 + 0x170);
    while( true ) {
      if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c2cd0;
      if (*psVar14 == _DAT_0f557410) break;
      psVar14 = psVar14 + 8;
    }
    lVar27 = *(long *)(psVar14 + 4);
    if (lVar27 == 0) goto LAB_0d2c2cd0;
    puVar21 = *(undefined8 **)(lVar27 + 8);
    puVar3 = *(undefined8 **)(lVar27 + 0x10);
    if ((long)puVar3 - (long)puVar21 != 0x10) {
      if (puVar21 != puVar3) {
        uVar26 = 0;
        puVar15 = puVar21;
        do {
          uVar26 = uVar26 + *(int *)(puVar15 + 1);
          puVar15 = puVar15 + 2;
        } while (puVar15 != puVar3);
        if (uVar25 >> 0x20 == 0) {
          iVar10 = (int)((uVar25 & 0xffffffff) % (ulong)uVar26);
        }
        else {
          auVar6._8_8_ = unaff_RBX >> 0x3f;
          auVar6._0_8_ = uVar25;
          iVar10 = SUB164(auVar6 % SEXT816((long)(ulong)uVar26),0);
        }
        uVar26 = (iVar10 >> 0x1f & uVar26) + iVar10;
        do {
          bVar28 = uVar26 < *(uint *)(puVar21 + 1);
          uVar26 = uVar26 - *(uint *)(puVar21 + 1);
          if (bVar28) goto LAB_0d2c32b5;
          puVar21 = puVar21 + 2;
        } while (puVar21 != puVar3);
      }
      puVar21 = puVar3 + -2;
    }
LAB_0d2c32b5:
    *(undefined8 *)
     (*(long *)(in_stack_00000010 + 0x30) +
     ((int)*in_stack_00000020 * in_stack_00000050 + in_stack_00000030) * 8) = *puVar21;
    in_stack_00000030 = uVar16;
  } while( true );
joined_r0x0d2c3580:
  if (psVar14 == *(short **)(in_stack_00000028 + 0x178)) goto LAB_0d2c35ba;
  if (*psVar14 == _DAT_0f5569d0) {
    if (*(long *)(psVar14 + 4) != 0) {
      iVar10 = *(int *)(*(long *)(psVar14 + 4) + 8);
    }
    goto LAB_0d2c35ba;
  }
  psVar14 = psVar14 + 8;
  goto joined_r0x0d2c3580;
LAB_0d2c35ba:
  if ((DAT_0f5569d8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f5569d8), iVar19 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5569d0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5569d8);
  }
  iVar19 = 0x12;
  for (psVar14 = *(short **)(lVar23 + 0x170); psVar14 != *(short **)(lVar23 + 0x178);
      psVar14 = psVar14 + 8) {
    if (*psVar14 == _DAT_0f5569d0) {
      if (*(long *)(psVar14 + 4) != 0) {
        iVar19 = *(int *)(*(long *)(psVar14 + 4) + 8);
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
  for (psVar14 = *(short **)(lVar24 + 0x170); psVar14 != *(short **)(lVar24 + 0x178);
      psVar14 = psVar14 + 8) {
    if (*psVar14 == _DAT_0f5569d0) {
      if (*(long *)(psVar14 + 4) != 0) {
        iVar11 = *(int *)(*(long *)(psVar14 + 4) + 8);
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
  for (psVar14 = *(short **)(lVar5 + 0x170); psVar14 != *(short **)(lVar5 + 0x178);
      psVar14 = psVar14 + 8) {
    if (*psVar14 == _DAT_0f5569d0) {
      if (*(long *)(psVar14 + 4) != 0) {
        iVar12 = *(int *)(*(long *)(psVar14 + 4) + 8);
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
  psVar14 = *(short **)(lVar27 + 0x170);
  iVar13 = 0x12;
  do {
    if (psVar14 == *(short **)(lVar27 + 0x178)) {
LAB_0d2c371c:
      if (2 < (byte)((iVar13 == iVar10) +
                    (iVar12 == iVar10) + (iVar11 == iVar10) + (iVar19 == iVar10))) {
        in_stack_00000028 = lVar20;
      }
      *(long *)(*(long *)(in_stack_00000010 + 0x30) +
               ((int)*in_stack_00000020 * in_stack_00000050 + unaff_R15) * 8) = in_stack_00000028;
      goto LAB_0d2c2ce2;
    }
    if (*psVar14 == _DAT_0f5569d0) {
      if (*(long *)(psVar14 + 4) != 0) {
        iVar13 = *(int *)(*(long *)(psVar14 + 4) + 8);
      }
      goto LAB_0d2c371c;
    }
    psVar14 = psVar14 + 8;
  } while( true );
LAB_0d2c2cd0:
  uVar26 = *in_stack_00000020;
  in_stack_00000030 = uVar16;
  goto LAB_0d2c2cd3;
}


