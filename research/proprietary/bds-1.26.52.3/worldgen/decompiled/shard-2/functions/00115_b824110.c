/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb824110
 * Label: string:WorldGeneratorType
 * Body:  [[0b82399f, 0b8239ca] [0b824110, 0b8241c9] [0b824218, 0b8242cd] [0b8242d0, 0b82432e] [0b824330, 0b8243bd] [0b8243c0, 0b82440d] [0b824410, 0b824594] [0b8245a0, 0b824a1d] [0b824a28, 0b824a39] [0b824b12, 0b824bad]]
 * Ghidra: FUN_0b824110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0b824110(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  int in_EAX;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *unaff_RBP;
  ulong uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  ulong *unaff_R13;
  long *plVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  long *in_stack_00000008;
  int in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  uint uStack0000000000000020;
  undefined4 uStack0000000000000024;
  ulong in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined *in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long *in_stack_000000b0;
  code *in_stack_000000d0;
  int *in_stack_000000f8;
  int iStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined1 in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001d0;
  code *in_stack_000001d8;
  undefined4 in_stack_000001e0;
  char cStack00000000000001e4;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 uStack00000000000001f0;
  undefined4 uStack00000000000001f4;
  undefined8 in_stack_000002c8;
  long *in_stack_00000300;
  char in_stack_000003c8;
  char in_stack_00000490;
  
  lVar23 = in_stack_000000a0;
  if (in_EAX != iStack0000000000000100) {
    _uStack0000000000000050 = 0;
    _uStack0000000000000058 = (long *)0x0;
    in_stack_00000060 = (undefined *)0x0;
    if (in_stack_00000098 == in_stack_000000a0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar22 = in_stack_00000098;
      do {
        if (in_stack_000000f8 != (int *)CONCAT44(uStack0000000000000104,iStack0000000000000100)) {
          piVar13 = in_stack_000000f8;
          do {
            if (*piVar13 == *(int *)(lVar22 + 0x108)) {
              if (uVar12 < in_stack_00000060) {
                func_0x05ed9170(uVar12,lVar22);
                uVar12 = uVar12 + 0x180;
                _uStack0000000000000058 = (long *)uVar12;
              }
              else {
                uVar12 = func_0x0b71d0a0(&stack0x00000050,lVar22);
                _uStack0000000000000058 = (long *)uVar12;
              }
              break;
            }
            piVar13 = piVar13 + 1;
          } while (piVar13 != (int *)CONCAT44(uStack0000000000000104,iStack0000000000000100));
        }
        lVar22 = lVar22 + 0x180;
      } while (lVar22 != lVar23);
    }
    func_0x05ed8e40(&stack0x00000098,_uStack0000000000000050,uVar12,
                    ((long)(uVar12 - _uStack0000000000000050) >> 7) * -0x5555555555555555);
    uVar20 = _uStack0000000000000050;
    uVar12 = (ulong)_uStack0000000000000058;
    if (_uStack0000000000000050 != 0) {
      while (uVar20 != uVar12) {
        func_0x05ed96b0(uVar12 - 0x180);
        uVar12 = uVar12 - 0x180;
      }
      _uStack0000000000000058 = (long *)uVar20;
      func_0x0412a280(_uStack0000000000000050,(long)in_stack_00000060 - _uStack0000000000000050);
    }
  }
  lVar10 = in_stack_000000a0;
  lVar23 = in_stack_00000098;
  lVar22 = in_stack_00000098;
  do {
    in_stack_00000098 = lVar22;
    if (lVar23 == lVar10) {
      lVar23 = in_stack_000000a0;
      if (lVar22 != 0) {
        while (lVar22 != lVar23) {
          func_0x05ed96b0(lVar23 + -0x180);
          lVar23 = lVar23 + -0x180;
        }
        in_stack_000000a0 = lVar22;
        func_0x0412a280(in_stack_00000098,in_stack_000000a8 - in_stack_00000098);
      }
      if (in_stack_00000300 != (long *)0x0) {
        LOCK();
        plVar3 = in_stack_00000300 + 1;
        lVar23 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*in_stack_00000300 + 0x10))(in_stack_00000300);
          func_0x0412c2d0(in_stack_00000300);
        }
      }
      lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar23 == 0) {
        func_0x048b0de0(&stack0x00000050,&stack0x00000008);
        _DAT_0f54fd90 = uStack0000000000000050;
        uRam000000000f54fd94 = uStack0000000000000054;
        uVar21 = uStack0000000000000058;
        uVar7 = uStack000000000000005c;
        _uStack0000000000000050 = 0;
        _uStack0000000000000058 = (long *)0x0;
        plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar21;
        uRam000000000f54fd9c = uVar7;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar23 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            func_0x0412c2d0(plVar3);
          }
        }
        plVar3 = _uStack0000000000000058;
        if (_uStack0000000000000058 != (long *)0x0) {
          LOCK();
          plVar4 = _uStack0000000000000058 + 1;
          lVar23 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*_uStack0000000000000058 + 0x10))(_uStack0000000000000058);
            func_0x0412c2d0(plVar3);
          }
        }
        lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      in_stack_00000060 = &UNK_0b825ea0;
      in_stack_00000068 = &SUB_0b8266a0;
      in_stack_00000070 = CONCAT35(in_stack_00000070._5_3_,0x160a28c71);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      *puVar16 = in_stack_00000030;
      puVar16[1] = in_stack_00000038;
      puVar16[2] = in_stack_00000040;
      in_stack_000001b8 = 0;
      in_stack_000001d0 = (code *)&UNK_0b825ea0;
      in_stack_000001d8 = (code *)&SUB_0b8266a0;
      in_stack_000001e0 = 0x60a28c71;
      cStack00000000000001e4 = '\x01';
      _uStack0000000000000050 = 0;
      in_stack_00000080 = 0;
      in_stack_00000088 = 0;
      _uStack00000000000001f0 = 0;
      in_stack_00000078 = lVar23;
      in_stack_000001c0 = puVar16;
      _uStack00000000000001e8 = lVar23;
      func_0x0b8266a0(&stack0x00000050);
      func_0x05ebd870(&stack0x00000200);
      func_0x0b779300(&stack0x000000f8);
      if (in_stack_000003c8 == '\x01') {
        func_0x0b779300(&stack0x00000308);
      }
      *unaff_RBP = 0;
      unaff_RBP[2] = &UNK_0b825340;
      *(undefined4 *)(unaff_RBP + 4) = 0xa3bd25df;
      unaff_RBP[3] = &UNK_0b825620;
      *(undefined1 *)((long)unaff_RBP + 0x24) = 1;
      puVar17 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar17 == (undefined1 *)0x0) {
        func_0x0eec74c0(0x48,0);
        uVar11 = in_stack_000001b8;
      }
      else {
        uVar11 = 0;
      }
      puVar16 = in_stack_000001c0;
      *puVar17 = uVar11;
      *(undefined8 *)(puVar17 + 8) = 0;
      *(code **)(puVar17 + 0x18) = in_stack_000001d0;
      *(code **)(puVar17 + 0x20) = in_stack_000001d8;
      *(undefined4 *)(puVar17 + 0x28) = in_stack_000001e0;
      puVar17[0x2c] = cStack00000000000001e4;
      if (cStack00000000000001e4 != '\0') {
        if (cStack00000000000001e4 == '\x02') {
          (*in_stack_000001d0)(5,&stack0x000001c0);
        }
        else {
          in_stack_000001c0 = (undefined8 *)0x0;
          *(undefined8 **)(puVar17 + 8) = puVar16;
        }
      }
      uVar21 = uStack00000000000001f0;
      uVar7 = uStack00000000000001f4;
      _uStack00000000000001f0 = 0;
      *(undefined4 *)(puVar17 + 0x30) = uStack00000000000001e8;
      *(undefined4 *)(puVar17 + 0x34) = uStack00000000000001ec;
      *(undefined4 *)(puVar17 + 0x38) = uVar21;
      *(undefined4 *)(puVar17 + 0x3c) = uVar7;
      *(undefined **)(puVar17 + 0x40) = &UNK_0b825d10;
      *unaff_RBP = puVar17;
      unaff_RBP[5] = in_stack_000002c8;
      unaff_RBP[6] = 0;
      unaff_RBP[7] = &UNK_0b8251d0;
      if (in_stack_000001d8 != (code *)0x0) {
        (*in_stack_000001d8)(&stack0x000001c0);
      }
      if (in_stack_00000490 == '\x01') {
        func_0x0b779300(&stack0x000003d0);
      }
      if (in_stack_000000d0 != (code *)0x0) {
        (*in_stack_000000d0)(&stack0x000000b8);
      }
      return unaff_RBP;
    }
    bVar25 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar22 = lVar23 + 9;
    if (bVar25) {
      lVar22 = *(long *)(lVar23 + 0x18);
    }
    plVar3 = (long *)unaff_R13[2];
    uVar12 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar25) {
      uVar12 = *(ulong *)(lVar23 + 0x10);
    }
    auVar26 = func_0x0eedb4e0(lVar22,uVar12);
    in_stack_00000028 = unaff_R13[1];
    in_stack_00000060 = (undefined *)*unaff_R13;
    in_stack_00000068 = (undefined1 *)unaff_R13[1];
    if (in_stack_00000028 == 0) {
      in_stack_00000070 = *(undefined8 *)unaff_R13[2];
      uVar21 = *(undefined4 *)((undefined8 *)unaff_R13[2] + 1);
    }
    else {
      LOCK();
      *(long *)(in_stack_00000028 + 0x10) = *(long *)(in_stack_00000028 + 0x10) + 1;
      UNLOCK();
      in_stack_00000070 = *(undefined8 *)unaff_R13[2];
      uVar21 = *(undefined4 *)((undefined8 *)unaff_R13[2] + 1);
      LOCK();
      *(long *)(in_stack_00000028 + 0x10) = *(long *)(in_stack_00000028 + 0x10) + 1;
      UNLOCK();
    }
    in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,uVar21);
    plVar4 = (long *)*plVar3;
    _uStack0000000000000050 = auVar26;
    if ((plVar4 == (long *)0x0) || (*plVar4 == 0 || (int)plVar4[1] != (int)plVar3[1])) {
      in_stack_00000008 = _DAT_0f6b6f58;
      in_stack_00000010 = _DAT_0f6b6f60;
      _uStack0000000000000018 = CONCAT44(uRam000000000f6b6f6c,_DAT_0f6b6f68);
      uStack0000000000000020 = uRam000000000f6b6f70;
      uStack0000000000000024 = uRam000000000f6b6f74;
      if ((_DAT_0f6b6f58 != (long *)0x0) &&
         (*_DAT_0f6b6f58 != 0 && (int)_DAT_0f6b6f58[1] == _DAT_0f6b6f60)) {
        func_0x0d8568b0(*_DAT_0f6b6f58,_uStack0000000000000018);
      }
    }
    else {
      func_0x0b82d620(&stack0x00000008,*plVar4,&stack0x00000050);
    }
    plVar4 = in_stack_00000038;
    plVar3 = in_stack_00000030;
    if (in_stack_00000038 < in_stack_00000040) {
      *in_stack_00000038 = (long)in_stack_00000008;
      *(int *)(in_stack_00000038 + 1) = in_stack_00000010;
      *(undefined4 *)(in_stack_00000038 + 2) = uStack0000000000000018;
      *(undefined4 *)((long)in_stack_00000038 + 0x14) = uStack000000000000001c;
      *(uint *)(in_stack_00000038 + 3) = uStack0000000000000020;
      *(undefined4 *)((long)in_stack_00000038 + 0x1c) = uStack0000000000000024;
      in_stack_00000038 = in_stack_00000038 + 4;
      uVar12 = in_stack_00000028;
    }
    else {
      lVar22 = (long)in_stack_00000038 - (long)in_stack_00000030;
      uVar12 = (lVar22 >> 5) + 1;
      if (0x7ffffffffffffff < uVar12) {
        func_0x0b7cc540();
LAB_0b824a17:
        uVar18 = func_0x04882eb0();
        func_0x06426890(&stack0x00000050);
        func_0x06426890(&stack0x00000098);
        func_0x0b76ef80(&stack0x000002f8);
        func_0x0b779420(&stack0x00000030);
        func_0x05ebd870(&stack0x00000200);
        func_0x0b779300(&stack0x000000f8);
        if (in_stack_000003c8 != '\0') {
          func_0x0b779300(&stack0x00000308);
        }
        if (in_stack_00000490 == '\x01') {
          func_0x0b779300(&stack0x000003d0);
        }
        if (in_stack_000000d0 != (code *)0x0) {
          (*in_stack_000000d0)(&stack0x000000b8);
        }
        uVar18 = func_0x0eee2d70(uVar18);
        uVar18 = func_0x04882e20(uVar18);
        func_0x04882e20(uVar18);
        pcVar6 = (code *)swi(3);
        puVar16 = (undefined8 *)(*pcVar6)();
        return puVar16;
      }
      in_stack_000000b0 = in_stack_00000040;
      uVar20 = (long)in_stack_00000040 - (long)in_stack_00000030 >> 4;
      if (uVar20 <= uVar12) {
        uVar20 = uVar12;
      }
      if (0x7fffffffffffffdf < (ulong)((long)in_stack_00000040 - (long)in_stack_00000030)) {
        uVar20 = 0x7ffffffffffffff;
      }
      if (uVar20 == 0) {
        lVar14 = 0;
      }
      else {
        if (0x7ffffffffffffff < uVar20) goto LAB_0b824a17;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar20 << 5);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar20 << 5,0);
          lVar14 = 0;
        }
      }
      *(long **)(lVar14 + lVar22) = in_stack_00000008;
      *(int *)(lVar14 + 8 + lVar22) = in_stack_00000010;
      puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar22);
      *puVar1 = uStack0000000000000018;
      puVar1[1] = uStack000000000000001c;
      puVar1[2] = uStack0000000000000020;
      puVar1[3] = uStack0000000000000024;
      in_stack_00000008 = (long *)0x0;
      in_stack_00000010 = 0;
      _uStack0000000000000018 = 0xffffffffffffff;
      uStack0000000000000020 = uStack0000000000000020 & 0xffffff00;
      plVar24 = (long *)(lVar14 + lVar22 + (lVar22 >> 5) * -0x20);
      if (plVar3 != plVar4) {
        lVar15 = 0;
        do {
          *(undefined8 *)((long)plVar24 + lVar15) = *(undefined8 *)((long)plVar3 + lVar15);
          *(undefined4 *)((long)plVar24 + lVar15 + 8) = *(undefined4 *)((long)plVar3 + lVar15 + 8);
          puVar1 = (undefined4 *)((long)plVar3 + lVar15 + 0x10);
          uVar21 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)((long)plVar24 + lVar15 + 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar21;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          *(undefined8 *)((long)plVar3 + lVar15) = 0;
          *(undefined4 *)((long)plVar3 + lVar15 + 8) = 0;
          *(undefined8 *)((long)plVar3 + lVar15 + 0x10) = 0xffffffffffffff;
          *(undefined1 *)((long)plVar3 + lVar15 + 0x18) = 0;
          lVar9 = lVar15 + 0x20;
          lVar15 = lVar15 + 0x20;
          plVar19 = plVar3;
        } while ((long *)((long)plVar3 + lVar9) != plVar4);
        do {
          plVar5 = (long *)*plVar19;
          if ((plVar5 != (long *)0x0) && (*plVar5 != 0 && (int)plVar5[1] == (int)plVar19[1])) {
            func_0x0d8569b0(*plVar5,plVar19[2],(int)plVar19[3]);
          }
          plVar19 = plVar19 + 4;
        } while (plVar19 != plVar4);
        in_stack_000000b0 = in_stack_00000040;
      }
      in_stack_00000040 = (long *)(uVar20 * 0x20 + lVar14);
      in_stack_00000030 = plVar24;
      if (plVar3 != (long *)0x0) {
        func_0x0412a280(plVar3,(long)in_stack_000000b0 - (long)plVar3);
      }
      uVar12 = in_stack_00000028;
      in_stack_00000038 = (long *)(lVar14 + lVar22 + 0x20);
      if ((in_stack_00000008 != (long *)0x0) &&
         (*in_stack_00000008 != 0 && (int)in_stack_00000008[1] == in_stack_00000010)) {
        func_0x0d8569b0(*in_stack_00000008,_uStack0000000000000018,uStack0000000000000020);
      }
    }
    if (in_stack_00000068 != (undefined1 *)0x0) {
      func_0x0412c2d0();
    }
    if (uVar12 != 0) {
      func_0x0412c2d0(uVar12);
    }
    lVar23 = lVar23 + 0x180;
    lVar22 = in_stack_00000098;
  } while( true );
}


