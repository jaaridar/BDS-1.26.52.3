/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe056cc0
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot2
 * Body:  [[0e056be1, 0e056bf2] [0e056cc0, 0e056d95] [0e056da0, 0e056df6] [0e056e00, 0e057137] [0e057140, 0e0572a4]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot2(byte param_1,byte param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  uint *in_RAX;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 unaff_RBX;
  ulong uVar14;
  code *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  long unaff_R14;
  ulong uVar24;
  undefined1 in_ZF;
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
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  puVar22 = (undefined8 *)CONCAT62((int6)((ulong)unaff_RBX >> 0x10),CONCAT11(in_ZF,(char)unaff_RBX))
  ;
  if ((param_1 | param_2) == 1) {
    uVar12 = *(undefined8 *)(unaff_R14 + 0x68);
    lVar10 = *(long *)(unaff_R14 + 0x70);
    if (lVar10 == 0) {
      (**(code **)(unaff_R14 + 0x78))(0);
      lVar10 = *(long *)(unaff_R14 + 0x70);
    }
    in_RAX = (uint *)func_0x0488e200(uVar12,lVar10,0x685ff748);
  }
  if (in_RAX[4] == 0) {
    auVar26 = ZEXT816(0x1254d89);
  }
  else {
    auVar26 = func_0x0ed6c040(*(long *)(in_RAX + 2) + (ulong)*in_RAX * 0x20 + 8);
  }
  uVar9 = auVar26._8_8_;
  in_stack_00000088 = auVar26._0_8_;
  pbVar19 = (byte *)*puVar22;
  in_stack_00000070 = (byte *)puVar22[1];
  in_stack_00000078 = puVar22[3];
  in_stack_00000058 = pbVar19;
  in_stack_00000080 = puVar22;
  if ((long)in_stack_00000070 - (long)pbVar19 != 0) {
    uVar14 = ((long)in_stack_00000070 - (long)pbVar19 >> 3) * -0x5555555555555555;
    do {
      in_stack_00000090 = auVar26._8_8_;
      in_stack_00000050 = auVar26._0_8_;
      uVar24 = uVar14 >> 1;
      bVar25 = (pbVar19[uVar24 * 0x18] & 1) != 0;
      pbVar18 = pbVar19 + uVar24 * 0x18 + 1;
      if (bVar25) {
        pbVar18 = *(byte **)(pbVar19 + uVar24 * 0x18 + 0x10);
      }
      uVar21 = (ulong)(pbVar19[uVar24 * 0x18] >> 1);
      if (bVar25) {
        uVar21 = *(ulong *)(pbVar19 + uVar24 * 0x18 + 8);
      }
      uVar13 = uVar9;
      if (uVar21 < uVar9) {
        uVar13 = uVar21;
      }
      iVar8 = func_0x0eee2ff0(in_stack_00000050,pbVar18,uVar13);
      auVar26._8_8_ = in_stack_00000090;
      auVar26._0_8_ = in_stack_00000050;
      if (iVar8 == 0) {
        if (uVar21 < uVar9) goto LAB_0e056da0;
      }
      else if (0 < iVar8) {
LAB_0e056da0:
        pbVar19 = pbVar19 + uVar24 * 0x18 + 0x18;
        uVar24 = ~uVar24 + uVar14;
      }
      uVar14 = uVar24;
    } while (uVar24 != 0);
  }
  puVar22 = in_stack_00000080;
  lVar10 = in_stack_00000078;
  in_stack_00000090 = auVar26._8_8_;
  if (pbVar19 != in_stack_00000070) {
    bVar25 = (*pbVar19 & 1) != 0;
    pbVar18 = pbVar19 + 1;
    if (bVar25) {
      pbVar18 = *(byte **)(pbVar19 + 0x10);
    }
    uVar14 = (ulong)(*pbVar19 >> 1);
    if (bVar25) {
      uVar14 = *(ulong *)(pbVar19 + 8);
    }
    uVar24 = uVar9;
    if (uVar14 < uVar9) {
      uVar24 = uVar14;
    }
    iVar8 = func_0x0eee2ff0(auVar26._0_8_,pbVar18,uVar24);
    if (iVar8 == 0) {
      if (uVar14 <= uVar9) {
        return 1;
      }
    }
    else if (-1 < iVar8) {
      return 1;
    }
  }
  puVar1 = puVar22 + 3;
  puVar16 = (undefined8 *)
            (lVar10 + ((ulong)((long)pbVar19 - (long)in_stack_00000058) >> 3) * -0x5555555555555540)
  ;
  func_0x06fd6250(puVar22,pbVar19,&stack0x00000088);
  puVar20 = (undefined8 *)puVar22[4];
  if ((undefined8 *)puVar22[5] <= puVar20) {
    puVar3 = (undefined8 *)puVar22[3];
    puVar20 = (undefined8 *)(((long)puVar20 - (long)puVar3 >> 6) + 1);
    if ((ulong)puVar20 >> 0x3a == 0) {
      uVar9 = (long)puVar22[5] - (long)puVar3;
      puVar22 = (undefined8 *)((long)uVar9 >> 5);
      if (puVar22 <= puVar20) {
        puVar22 = puVar20;
      }
      if (0x7fffffffffffffbf < uVar9) {
        puVar22 = (undefined8 *)0x3ffffffffffffff;
      }
      _uStack0000000000000028 = puVar1;
      if (puVar22 == (undefined8 *)0x0) {
        lVar23 = 0;
        lVar10 = 0;
      }
      else {
        if ((undefined8 *)0x3ffffffffffffff < puVar22) goto LAB_0e057256;
        lVar23 = (long)puVar22 << 6;
        lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar23);
        if (lVar10 == 0) {
          lVar10 = 0;
          func_0x0eec74c0(lVar23,0);
        }
      }
      lVar17 = (long)puVar16 - (long)puVar3;
      lVar11 = lVar10 + lVar17;
      in_stack_00000020 = (code *)(lVar10 + lVar23);
      in_stack_00000008 = lVar10;
      in_stack_00000010 = lVar11;
      in_stack_00000018 = (code *)lVar11;
      if (lVar17 == lVar23) {
        if (puVar16 == puVar3) {
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (lVar11 == 0) {
            func_0x0eec74c0(0x40,0);
          }
          in_stack_00000020 = (code *)(lVar11 + 0x40);
          in_stack_00000008 = lVar11;
          in_stack_00000010 = lVar11;
          in_stack_00000018 = (code *)lVar11;
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,lVar17);
          }
        }
        else {
          lVar11 = lVar11 + (((lVar17 >> 6) - ((lVar17 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe)
                            * -0x20;
          in_stack_00000010 = lVar11;
          in_stack_00000018 = (code *)lVar11;
        }
      }
      func_0x0e057820(lVar11);
      in_stack_00000018 = (code *)((long)in_stack_00000018 + 0x40);
      func_0x06fd70e0(puVar1,&stack0x00000008,puVar16);
      lVar23 = in_stack_00000010;
      lVar10 = (long)in_stack_00000018;
      while (lVar23 != lVar10) {
        in_stack_00000018 = (code *)(lVar10 + -0x40);
        puVar22 = (undefined8 *)(lVar10 + -0x28);
        lVar10 = (long)in_stack_00000018;
        if ((code *)*puVar22 != (code *)0x0) {
          (*(code *)*puVar22)();
          lVar10 = (long)in_stack_00000018;
        }
      }
      if (in_stack_00000008 == 0) {
        return 1;
      }
      in_stack_00000018 = (code *)lVar10;
      func_0x0412a280(in_stack_00000008,(long)in_stack_00000020 - in_stack_00000008);
      return 1;
    }
    func_0x05d94eb0();
LAB_0e057256:
    uVar12 = func_0x04882eb0();
    uVar12 = func_0x04882e20(uVar12);
    puVar22[4] = puVar20;
    uVar12 = func_0x0eee2d70(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    func_0x06530660(&stack0x00000008);
    uVar12 = func_0x0eee2d70(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    func_0x04882e20(uVar12);
    pcVar15 = (code *)swi(3);
    uVar12 = (*pcVar15)();
    return uVar12;
  }
  if (puVar16 == puVar20) {
    func_0x0e057820(puVar20);
    puVar22[4] = puVar20 + 8;
    return 1;
  }
  lVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  in_stack_00000048 = puVar1;
  if (lVar10 == 0) {
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
      lVar10 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x0412c2d0(plVar4);
      }
    }
    plVar4 = _uStack0000000000000068;
    if (_uStack0000000000000068 != (long *)0x0) {
      LOCK();
      plVar2 = _uStack0000000000000068 + 1;
      lVar10 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*_uStack0000000000000068 + 0x10))(_uStack0000000000000068);
        func_0x0412c2d0(plVar4);
      }
    }
    lVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    puVar20 = (undefined8 *)puVar22[4];
  }
  in_stack_00000008 = 0;
  in_stack_00000018 = (code *)&UNK_0e021a70;
  in_stack_00000020 = (code *)0x0;
  _uStack0000000000000028 = (undefined8 *)CONCAT35(uStack000000000000002d,0x2fa5fe78b);
  _uStack0000000000000038 = 0;
  in_stack_00000040 = &UNK_0e021990;
  _uStack0000000000000030 = lVar10;
  func_0x06fd6bf0(puVar1,puVar16,puVar20,puVar16 + 8);
  if (puVar16 == &stack0x00000008) {
    puVar16[5] = lVar10;
    puVar16[6] = 0;
    puVar16[7] = &UNK_0e021990;
    return 1;
  }
  pcVar15 = (code *)&UNK_0e021a70;
  if ((code *)puVar16[3] != (code *)0x0) {
    (*(code *)puVar16[3])(puVar16);
    uVar12 = in_stack_00000008;
    if (cStack000000000000002c == '\0') goto LAB_0e0571e0;
    pcVar15 = in_stack_00000018;
    if (cStack000000000000002c != '\x02') {
      in_stack_00000008 = 0;
      *puVar16 = uVar12;
      goto LAB_0e0571e0;
    }
  }
  (*pcVar15)(5,&stack0x00000008,puVar16);
LAB_0e0571e0:
  puVar7 = in_stack_00000040;
  puVar16[2] = in_stack_00000018;
  puVar16[3] = in_stack_00000020;
  *(undefined4 *)(puVar16 + 4) = uStack0000000000000028;
  *(char *)((long)puVar16 + 0x24) = cStack000000000000002c;
  uVar5 = uStack0000000000000038;
  uVar6 = uStack000000000000003c;
  _uStack0000000000000038 = 0;
  *(undefined4 *)(puVar16 + 5) = uStack0000000000000030;
  *(undefined4 *)((long)puVar16 + 0x2c) = uStack0000000000000034;
  *(undefined4 *)(puVar16 + 6) = uVar5;
  *(undefined4 *)((long)puVar16 + 0x34) = uVar6;
  in_stack_00000040 = (undefined *)0x0;
  puVar16[7] = puVar7;
  if (in_stack_00000020 != (code *)0x0) {
    (*in_stack_00000020)(&stack0x00000008);
  }
  return 1;
}


