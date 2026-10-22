/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdbe70d0
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dbe6e92, 0dbe6ea3] [0dbe70d0, 0dbe740d] [0dbe7410, 0dbe757c]]
 * Ghidra: FUN_0dbe70d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0dbe70d0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  ulong unaff_R12;
  byte *unaff_R13;
  undefined8 *puVar17;
  ulong uVar18;
  long unaff_R15;
  undefined8 *puVar19;
  long lVar20;
  bool in_ZF;
  bool bVar21;
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
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000090;
  
  if (!in_ZF) {
    bVar21 = (*unaff_R13 & 1) != 0;
    pbVar16 = unaff_R13 + 1;
    if (bVar21) {
      pbVar16 = *(byte **)(unaff_R13 + 0x10);
    }
    uVar18 = (ulong)(*unaff_R13 >> 1);
    if (bVar21) {
      uVar18 = *(ulong *)(unaff_R13 + 8);
    }
    iVar8 = func_0x0eee2ff0(in_stack_00000090,pbVar16);
    if (iVar8 == 0) {
      if (uVar18 <= unaff_R12) {
        return 1;
      }
    }
    else if (-1 < iVar8) {
      return 1;
    }
  }
  lVar10 = in_stack_00000050;
  lVar4 = in_stack_00000050 + 0x18;
  puVar19 = (undefined8 *)
            (unaff_R15 + ((ulong)((long)unaff_R13 - in_stack_00000068) >> 3) * -0x5555555555555540);
  func_0x06fd6250(in_stack_00000050);
  puVar17 = *(undefined8 **)(lVar10 + 0x20);
  if (*(undefined8 **)(lVar10 + 0x28) <= puVar17) {
    puVar2 = *(undefined8 **)(lVar10 + 0x18);
    uVar18 = ((long)puVar17 - (long)puVar2 >> 6) + 1;
    if (uVar18 >> 0x3a == 0) {
      uVar9 = (long)*(undefined8 **)(lVar10 + 0x28) - (long)puVar2;
      uVar14 = (long)uVar9 >> 5;
      if (uVar14 <= uVar18) {
        uVar14 = uVar18;
      }
      if (0x7fffffffffffffbf < uVar9) {
        uVar14 = 0x3ffffffffffffff;
      }
      _uStack0000000000000028 = lVar4;
      if (uVar14 == 0) {
        lVar15 = 0;
        lVar10 = 0;
      }
      else {
        if (0x3ffffffffffffff < uVar14) goto LAB_0dbe7526;
        lVar15 = uVar14 << 6;
        lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
        if (lVar10 == 0) {
          lVar10 = 0;
          func_0x0eec74c0(lVar15,0);
        }
      }
      lVar20 = (long)puVar19 - (long)puVar2;
      lVar11 = lVar10 + lVar20;
      in_stack_00000020 = (code *)(lVar10 + lVar15);
      in_stack_00000008 = lVar10;
      in_stack_00000010 = lVar11;
      in_stack_00000018 = (code *)lVar11;
      if (lVar20 == lVar15) {
        if (puVar19 == puVar2) {
          lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (lVar11 == 0) {
            func_0x0eec74c0(0x40,0);
          }
          in_stack_00000020 = (code *)(lVar11 + 0x40);
          in_stack_00000008 = lVar11;
          in_stack_00000010 = lVar11;
          in_stack_00000018 = (code *)lVar11;
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,lVar20);
          }
        }
        else {
          lVar11 = lVar11 + (((lVar20 >> 6) - ((lVar20 >> 6) + 1 >> 0x3f)) + 1U & 0x7fffffffffffffe)
                            * -0x20;
          in_stack_00000010 = lVar11;
          in_stack_00000018 = (code *)lVar11;
        }
      }
      func_0x0dbe7af0(lVar11,in_stack_00000058);
      in_stack_00000018 = (code *)((long)in_stack_00000018 + 0x40);
      func_0x06fd70e0(lVar4,&stack0x00000008,puVar19);
      lVar10 = in_stack_00000010;
      lVar4 = (long)in_stack_00000018;
      while (lVar10 != lVar4) {
        in_stack_00000018 = (code *)(lVar4 + -0x40);
        puVar17 = (undefined8 *)(lVar4 + -0x28);
        lVar4 = (long)in_stack_00000018;
        if ((code *)*puVar17 != (code *)0x0) {
          (*(code *)*puVar17)();
          lVar4 = (long)in_stack_00000018;
        }
      }
      if (in_stack_00000008 == 0) {
        return 1;
      }
      in_stack_00000018 = (code *)lVar4;
      func_0x0412a280(in_stack_00000008,(long)in_stack_00000020 - in_stack_00000008);
      return 1;
    }
    func_0x05d94eb0();
LAB_0dbe7526:
    uVar12 = func_0x04882eb0();
    uVar12 = func_0x04882e20(uVar12);
    *(ulong *)(in_stack_00000050 + 0x20) = uVar18;
    uVar12 = func_0x0eee2d70(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    func_0x06530660(&stack0x00000008);
    uVar12 = func_0x0eee2d70(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    func_0x04882e20(uVar12);
    pcVar13 = (code *)swi(3);
    uVar12 = (*pcVar13)();
    return uVar12;
  }
  if (puVar19 == puVar17) {
    func_0x0dbe7af0(puVar17,in_stack_00000058);
    *(undefined8 **)(in_stack_00000050 + 0x20) = puVar17 + 8;
    return 1;
  }
  lVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  in_stack_00000048 = lVar4;
  if (lVar10 == 0) {
    func_0x048b0de0(&stack0x00000070,&stack0x00000007);
    _DAT_0f54fd90 = uStack0000000000000070;
    uRam000000000f54fd94 = uStack0000000000000074;
    uVar5 = uStack0000000000000078;
    uVar6 = uStack000000000000007c;
    _uStack0000000000000070 = 0;
    _uStack0000000000000078 = (long *)0x0;
    plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar6;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    plVar3 = _uStack0000000000000078;
    lVar15 = in_stack_00000050;
    if (_uStack0000000000000078 != (long *)0x0) {
      LOCK();
      plVar1 = _uStack0000000000000078 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*_uStack0000000000000078 + 0x10))(_uStack0000000000000078);
        func_0x0412c2d0(plVar3);
      }
    }
    lVar10 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    puVar17 = *(undefined8 **)(lVar15 + 0x20);
  }
  in_stack_00000018 = (code *)&UNK_0db2e6f0;
  in_stack_00000020 = (code *)0x0;
  _uStack0000000000000028 = CONCAT35(uStack000000000000002d,0x2b7b7351b);
  in_stack_00000008 = *in_stack_00000058;
  _uStack0000000000000038 = 0;
  in_stack_00000040 = &UNK_0db2e6d0;
  _uStack0000000000000030 = lVar10;
  func_0x06fd6bf0(lVar4,puVar19,puVar17,puVar19 + 8);
  if (puVar19 == &stack0x00000008) {
    puVar19[5] = lVar10;
    puVar19[6] = 0;
    puVar19[7] = &UNK_0db2e6d0;
    return 1;
  }
  pcVar13 = (code *)&UNK_0db2e6f0;
  if ((code *)puVar19[3] != (code *)0x0) {
    (*(code *)puVar19[3])(puVar19);
    uVar12 = in_stack_00000008;
    if (cStack000000000000002c == '\0') goto LAB_0dbe74b0;
    pcVar13 = in_stack_00000018;
    if (cStack000000000000002c != '\x02') {
      in_stack_00000008 = 0;
      *puVar19 = uVar12;
      goto LAB_0dbe74b0;
    }
  }
  (*pcVar13)(5,&stack0x00000008,puVar19);
LAB_0dbe74b0:
  puVar7 = in_stack_00000040;
  puVar19[2] = in_stack_00000018;
  puVar19[3] = in_stack_00000020;
  *(undefined4 *)(puVar19 + 4) = uStack0000000000000028;
  *(char *)((long)puVar19 + 0x24) = cStack000000000000002c;
  uVar5 = uStack0000000000000038;
  uVar6 = uStack000000000000003c;
  _uStack0000000000000038 = 0;
  *(undefined4 *)(puVar19 + 5) = uStack0000000000000030;
  *(undefined4 *)((long)puVar19 + 0x2c) = uStack0000000000000034;
  *(undefined4 *)(puVar19 + 6) = uVar5;
  *(undefined4 *)((long)puVar19 + 0x34) = uVar6;
  in_stack_00000040 = (undefined *)0x0;
  puVar19[7] = puVar7;
  if (in_stack_00000020 != (code *)0x0) {
    (*in_stack_00000020)(&stack0x00000008);
  }
  return 1;
}


