/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe056cd0
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot3
 * Body:  [[0e056be1, 0e056bf2] [0e056cd0, 0e056d95] [0e056da0, 0e056df6] [0e056e00, 0e057137] [0e057140, 0e0572a4]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot3(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *unaff_RBX;
  ulong uVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long unaff_R14;
  ulong uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  code *in_stack_00000018;
  code *in_stack_00000020;
  undefined4 uStack0000000000000028;
  char cStack000000000000002c;
  undefined3 uStack000000000000002d;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  byte *in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  byte *in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (*(long *)(unaff_R14 + 0x70) == 0) {
    (**(code **)(unaff_R14 + 0x78))(0);
  }
  puVar9 = (uint *)func_0x0488e200();
  if (puVar9[4] == 0) {
    auVar26 = ZEXT816(0x1254d89);
  }
  else {
    auVar26 = func_0x0ed6c040(*(long *)(puVar9 + 2) + (ulong)*puVar9 * 0x20 + 8);
  }
  uVar10 = auVar26._8_8_;
  in_stack_00000088 = auVar26._0_8_;
  pbVar20 = (byte *)*unaff_RBX;
  in_stack_00000070 = (byte *)unaff_RBX[1];
  in_stack_00000078 = unaff_RBX[3];
  in_stack_00000058 = pbVar20;
  if ((long)in_stack_00000070 - (long)pbVar20 != 0) {
    uVar15 = ((long)in_stack_00000070 - (long)pbVar20 >> 3) * -0x5555555555555555;
    do {
      in_stack_00000090 = auVar26._8_8_;
      in_stack_00000050 = auVar26._0_8_;
      uVar24 = uVar15 >> 1;
      bVar25 = (pbVar20[uVar24 * 0x18] & 1) != 0;
      pbVar19 = pbVar20 + uVar24 * 0x18 + 1;
      if (bVar25) {
        pbVar19 = *(byte **)(pbVar20 + uVar24 * 0x18 + 0x10);
      }
      uVar22 = (ulong)(pbVar20[uVar24 * 0x18] >> 1);
      if (bVar25) {
        uVar22 = *(ulong *)(pbVar20 + uVar24 * 0x18 + 8);
      }
      uVar14 = uVar10;
      if (uVar22 < uVar10) {
        uVar14 = uVar22;
      }
      iVar8 = func_0x0eee2ff0(in_stack_00000050,pbVar19,uVar14);
      auVar26._8_8_ = in_stack_00000090;
      auVar26._0_8_ = in_stack_00000050;
      if (iVar8 == 0) {
        if (uVar22 < uVar10) goto LAB_0e056da0;
      }
      else if (0 < iVar8) {
LAB_0e056da0:
        pbVar20 = pbVar20 + uVar24 * 0x18 + 0x18;
        uVar24 = ~uVar24 + uVar15;
      }
      uVar15 = uVar24;
    } while (uVar24 != 0);
  }
  lVar11 = in_stack_00000078;
  in_stack_00000090 = auVar26._8_8_;
  if (pbVar20 != in_stack_00000070) {
    bVar25 = (*pbVar20 & 1) != 0;
    pbVar19 = pbVar20 + 1;
    if (bVar25) {
      pbVar19 = *(byte **)(pbVar20 + 0x10);
    }
    uVar15 = (ulong)(*pbVar20 >> 1);
    if (bVar25) {
      uVar15 = *(ulong *)(pbVar20 + 8);
    }
    uVar24 = uVar10;
    if (uVar15 < uVar10) {
      uVar24 = uVar15;
    }
    iVar8 = func_0x0eee2ff0(auVar26._0_8_,pbVar19,uVar24);
    if (iVar8 == 0) {
      if (uVar15 <= uVar10) {
        return 1;
      }
    }
    else if (-1 < iVar8) {
      return 1;
    }
  }
  puVar1 = unaff_RBX + 3;
  puVar17 = (undefined8 *)
            (lVar11 + ((ulong)((long)pbVar20 - (long)in_stack_00000058) >> 3) * -0x5555555555555540)
  ;
  func_0x06fd6250(unaff_RBX,pbVar20,&stack0x00000088);
  puVar21 = (undefined8 *)unaff_RBX[4];
  if ((undefined8 *)unaff_RBX[5] <= puVar21) {
    puVar3 = (undefined8 *)unaff_RBX[3];
    puVar21 = (undefined8 *)(((long)puVar21 - (long)puVar3 >> 6) + 1);
    if ((ulong)puVar21 >> 0x3a == 0) {
      uVar10 = (long)unaff_RBX[5] - (long)puVar3;
      unaff_RBX = (undefined8 *)((long)uVar10 >> 5);
      if (unaff_RBX <= puVar21) {
        unaff_RBX = puVar21;
      }
      if (0x7fffffffffffffbf < uVar10) {
        unaff_RBX = (undefined8 *)0x3ffffffffffffff;
      }
      _uStack0000000000000028 = puVar1;
      if (unaff_RBX == (undefined8 *)0x0) {
        lVar23 = 0;
        lVar11 = 0;
      }
      else {
        if ((undefined8 *)0x3ffffffffffffff < unaff_RBX) goto LAB_0e057256;
        lVar23 = (long)unaff_RBX << 6;
        lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
        if (lVar11 == 0) {
          lVar11 = 0;
          func_0x0eec74c0(lVar23,0);
        }
      }
      lVar18 = (long)puVar17 - (long)puVar3;
      lVar12 = lVar11 + lVar18;
      in_stack_00000020 = (code *)(lVar11 + lVar23);
      in_stack_00000008 = lVar11;
      in_stack_00000010 = lVar12;
      in_stack_00000018 = (code *)lVar12;
      if (lVar18 == lVar23) {
        if (puVar17 == puVar3) {
          lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (lVar12 == 0) {
            func_0x0eec74c0(0x40,0);
          }
          in_stack_00000020 = (code *)(lVar12 + 0x40);
          in_stack_00000008 = lVar12;
          in_stack_00000010 = lVar12;
          in_stack_00000018 = (code *)lVar12;
          if (lVar11 != 0) {
            func_0x0412a280(lVar11,lVar18);
          }
        }
        else {
          lVar12 = lVar12 + (((lVar18 >> 6) - ((lVar18 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe)
                            * -0x20;
          in_stack_00000010 = lVar12;
          in_stack_00000018 = (code *)lVar12;
        }
      }
      func_0x0e057820(lVar12);
      in_stack_00000018 = (code *)((long)in_stack_00000018 + 0x40);
      func_0x06fd70e0(puVar1,&stack0x00000008,puVar17);
      lVar23 = in_stack_00000010;
      lVar11 = (long)in_stack_00000018;
      while (lVar23 != lVar11) {
        in_stack_00000018 = (code *)(lVar11 + -0x40);
        puVar1 = (undefined8 *)(lVar11 + -0x28);
        lVar11 = (long)in_stack_00000018;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
          lVar11 = (long)in_stack_00000018;
        }
      }
      if (in_stack_00000008 == 0) {
        return 1;
      }
      in_stack_00000018 = (code *)lVar11;
      func_0x0412a280(in_stack_00000008,(long)in_stack_00000020 - in_stack_00000008);
      return 1;
    }
    func_0x05d94eb0();
LAB_0e057256:
    uVar13 = func_0x04882eb0();
    uVar13 = func_0x04882e20(uVar13);
    unaff_RBX[4] = puVar21;
    uVar13 = func_0x0eee2d70(uVar13);
    uVar13 = func_0x04882e20(uVar13);
    uVar13 = func_0x04882e20(uVar13);
    func_0x06530660(&stack0x00000008);
    uVar13 = func_0x0eee2d70(uVar13);
    uVar13 = func_0x04882e20(uVar13);
    func_0x04882e20(uVar13);
    pcVar16 = (code *)swi(3);
    uVar13 = (*pcVar16)();
    return uVar13;
  }
  if (puVar17 == puVar21) {
    func_0x0e057820(puVar21);
    unaff_RBX[4] = puVar21 + 8;
    return 1;
  }
  lVar11 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  in_stack_00000048 = puVar1;
  if (lVar11 == 0) {
    func_0x048b0de0(&stack0x00000060,&stack0x00000007);
    _DAT_0f54fd90 = uStack0000000000000060;
    uRam000000000f54fd94 = uStack0000000000000064;
    uVar5 = uStack0000000000000068;
    uVar6 = uStack000000000000006c;
    _uStack0000000000000060 = 0;
    _uStack0000000000000068 = (long *)0x0;
    plVar4 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar6;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x0412c2d0(plVar4);
      }
    }
    plVar4 = _uStack0000000000000068;
    if (_uStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar2 = _uStack0000000000000068 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*_uStack0000000000000068 + 0x10))(_uStack0000000000000068);
        func_0x0412c2d0(plVar4);
      }
    }
    lVar11 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    puVar21 = (undefined8 *)unaff_RBX[4];
  }
  in_stack_00000008 = 0;
  in_stack_00000018 = (code *)&UNK_0e021a70;
  in_stack_00000020 = (code *)0x0;
  _uStack0000000000000028 = (undefined8 *)CONCAT35(uStack000000000000002d,0x2fa5fe78b);
  _uStack0000000000000038 = 0;
  in_stack_00000040 = &UNK_0e021990;
  _uStack0000000000000030 = lVar11;
  func_0x06fd6bf0(puVar1,puVar17,puVar21,puVar17 + 8);
  if (puVar17 == &stack0x00000008) {
    puVar17[5] = lVar11;
    puVar17[6] = 0;
    puVar17[7] = &UNK_0e021990;
    return 1;
  }
  pcVar16 = (code *)&UNK_0e021a70;
  if ((code *)puVar17[3] != (code *)0x0) {
    (*(code *)puVar17[3])(puVar17);
    uVar13 = in_stack_00000008;
    if (cStack000000000000002c == '\0') goto LAB_0e0571e0;
    pcVar16 = in_stack_00000018;
    if (cStack000000000000002c != '\x02') {
      in_stack_00000008 = 0;
      *puVar17 = uVar13;
      goto LAB_0e0571e0;
    }
  }
  (*pcVar16)(5,&stack0x00000008,puVar17);
LAB_0e0571e0:
  puVar7 = in_stack_00000040;
  puVar17[2] = in_stack_00000018;
  puVar17[3] = in_stack_00000020;
  *(undefined4 *)(puVar17 + 4) = uStack0000000000000028;
  *(char *)((long)puVar17 + 0x24) = cStack000000000000002c;
  uVar5 = uStack0000000000000038;
  uVar6 = uStack000000000000003c;
  _uStack0000000000000038 = 0;
  *(undefined4 *)(puVar17 + 5) = uStack0000000000000030;
  *(undefined4 *)((long)puVar17 + 0x2c) = uStack0000000000000034;
  *(undefined4 *)(puVar17 + 6) = uVar5;
  *(undefined4 *)((long)puVar17 + 0x34) = uVar6;
  in_stack_00000040 = (undefined *)0x0;
  puVar17[7] = puVar7;
  if (in_stack_00000020 != (code *)0x0) {
    (*in_stack_00000020)(&stack0x00000008);
  }
  return 1;
}


