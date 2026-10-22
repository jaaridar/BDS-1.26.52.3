/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cc9c0
 * Label: string:ZN16AncientCityPiece9addPiecesE8BlockPosRNSt3__16vectorINS1_
 * Body:  [[0d2cc10a, 0d2cc149] [0d2cc150, 0d2cc2a1] [0d2cc2b0, 0d2cc2bc] [0d2cc2c0, 0d2cc9cb] [0d2cc9d0, 0d2ccacd] [0d2ccad0, 0d2ccbab] [0d2ccbb0, 0d2ccd8d] [0d2ccd90, 0d2ccdae] [0d2ccdb0, 0d2cce63] [0d2cce70, 0d2cceae] [0d2cceb0, 0d2ccf94] [0d2ccfa0, 0d2cd142] [0d2cd150, 0d2cd36e] [0d2cd370, 0d2cd3fb] [0d2cd400, 0d2cd444] [0d2cd450, 0d2cd6bf] [0d2cd768, 0d2cd78e] [0d2cd878, 0d2cd886] [0d2cd8a5, 0d2cd8c4]]
 * Ghidra: FUN_0d2cc9c0
 */


/* WARNING: Removing unreachable block (ram,0x0d2cc509) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2cc9c0(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined2 *unaff_RBP;
  ulong uVar21;
  long lVar22;
  long *unaff_R12;
  byte *pbVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long unaff_R15;
  ulong uVar29;
  bool bVar30;
  long unaff_retaddr;
  long *in_stack_00000008;
  undefined2 *in_stack_00000010;
  long *in_stack_00000018;
  long lStack0000000000000020;
  undefined8 *in_stack_00000030;
  byte *in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000088;
  byte *in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined *in_stack_000000a8;
  byte in_stack_000000b0;
  long in_stack_000000b8;
  undefined2 *in_stack_000000c0;
  undefined2 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  char in_stack_00000110;
  ulong in_stack_00000118;
  long *in_stack_00000120;
  long *in_stack_00000128;
  byte *in_stack_00000130;
  undefined8 in_stack_00000138;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  ulong in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  byte in_stack_00000188;
  undefined *in_stack_00000190;
  undefined *in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined *in_stack_000001a8;
  uint in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  char cStack00000000000001d8;
  undefined1 uStack00000000000001d9;
  undefined1 uStack00000000000001da;
  undefined8 *in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  ulong in_stack_000001f0;
  undefined1 in_stack_000001f8;
  uint in_stack_00000298;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  byte *in_stack_000002b8;
  
code_r0x0d2cc9c0:
  func_0x0412a280(param_1,param_2);
  lVar25 = unaff_retaddr;
  lStack0000000000000020 = unaff_R15;
LAB_0d2cc9d3:
  unaff_R12 = unaff_R12 + 1;
  unaff_retaddr = lVar25;
  if (unaff_R12 != in_stack_00000018) goto LAB_0d2cc8bf;
  do {
    func_0x049d2400(&stack0x00000040);
    if (in_stack_000000b8 != 0) {
      in_stack_000000c0 = (undefined2 *)in_stack_000000b8;
      func_0x0412a280(in_stack_000000b8,(long)in_stack_000000c8 - in_stack_000000b8);
    }
    pbVar23 = in_stack_00000038;
    in_stack_000000b8 = lStack0000000000000020;
    in_stack_000000c8 = in_stack_00000010;
    in_stack_000000c0 = unaff_RBP;
    if ((ulong)in_stack_00000298 != 0xffffffff) {
      (**(code **)(&UNK_0f45eda0 + (ulong)in_stack_00000298 * 8))(&stack0x000002a0,&stack0x000001e0)
      ;
    }
    if ((*(ulong *)(pbVar23 + 0x138) >> 0x20 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar29 = *(ulong *)(pbVar23 + 0x138) & 0xffffffff;
      if (uVar29 == 0xffffffff) goto LAB_0d2cd6a7;
      _uStack0000000000000040 = &stack0x00000030;
      uVar16 = (**(code **)(&UNK_0f45edd0 + uVar29 * 8))(&stack0x00000040,&stack0x000002a0);
    }
    uStack00000000000001d0 = (undefined4)uVar16;
    uStack00000000000001d4 = (undefined4)((ulong)uVar16 >> 0x20);
    _uStack00000000000001c8 = *(undefined8 *)(pbVar23 + 0x140);
    plVar24 = (long *)0x0;
    plVar32 = (long *)0x0;
    plVar33 = (long *)0x0;
    puVar18 = *(undefined8 **)(pbVar23 + 0x148);
    puVar28 = *(undefined8 **)(pbVar23 + 0x150);
    lVar25 = (long)puVar28 - (long)puVar18;
    if (lVar25 != 0) {
      lVar25 = lVar25 >> 3;
      if (0xfffffffffffffff < (ulong)(lVar25 * 0x6db6db6db6db6db7)) goto LAB_0d2cd6a2;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                  (&DAT_0f5463b0,lVar25 * -0x2492492492492490);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar25 * -0x2492492492492490,0);
      }
      plVar26 = plVar14 + lVar25 * -0x492492492492492;
      plVar31 = plVar14;
      plVar32 = plVar14;
      plVar27 = plVar14 + lVar25 * -0x492492492492492;
      do {
        _uStack0000000000000040 = (undefined8 *)0x0;
        _uStack0000000000000048 = (long *)0x0;
        in_stack_000000a0 = (undefined8 *)&stack0x00000040;
        if ((ulong)*(uint *)(puVar18 + 6) == 0xffffffff) {
          func_0x04931450();
          func_0x0eec74c0(plVar26,0);
          *in_stack_00000008 = (long)plVar14;
          in_stack_00000008[1] = (long)plVar14;
          in_stack_00000008[2] = (long)plVar26 + (long)plVar14;
          pbVar23 = (byte *)*puVar18;
          pbVar19 = (byte *)puVar18[1];
          in_stack_00000090 = pbVar19;
          if (pbVar23 != pbVar19) goto LAB_0d2cc16d;
          return in_stack_00000008;
        }
        in_stack_00000030 = &stack0x000000a0;
        (**(code **)(&UNK_0f45ede0 + (ulong)*(uint *)(puVar18 + 6) * 8))(&stack0x00000030);
        if (plVar27 <= plVar32) {
          lVar25 = (long)plVar32 - (long)plVar31;
          uVar29 = (lVar25 >> 4) + 1;
          if (uVar29 < 0x1000000000000000) {
            plVar27 = (long *)((long)plVar27 - (long)plVar31);
            uVar21 = (long)plVar27 >> 3;
            if ((ulong)((long)plVar27 >> 3) <= uVar29) {
              uVar21 = uVar29;
            }
            if ((long *)0x7fffffffffffffef < plVar27) {
              uVar21 = 0xfffffffffffffff;
            }
            if (uVar21 < 0x1000000000000000) {
              lVar22 = uVar21 * 0x10;
              lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar22);
              if (lVar15 == 0) {
                func_0x0eec74c0(lVar22,0);
              }
              plVar33 = (long *)(lVar22 + lVar15);
              *(undefined8 *)(lVar15 + lVar25) = _uStack0000000000000040;
              ((undefined8 *)(lVar15 + lVar25))[1] = _uStack0000000000000048;
              _uStack0000000000000040 = (undefined8 *)0x0;
              _uStack0000000000000048 = (long *)0x0;
              plVar14 = (long *)(lVar15 + lVar25 + 0x10);
              plVar24 = (long *)(lVar15 + lVar25 + (lVar25 >> 4) * -0x10);
              func_0x0eee2f00(plVar24,plVar31,lVar25);
              pbVar23 = in_stack_00000038;
              plVar32 = plVar14;
              if ((plVar31 != (long *)0x0) &&
                 (func_0x0412a280(plVar31), plVar27 = _uStack0000000000000048,
                 pbVar23 = in_stack_00000038, _uStack0000000000000048 != (long *)0x0)) {
                LOCK();
                plVar26 = _uStack0000000000000048 + 1;
                lVar25 = *plVar26;
                *plVar26 = *plVar26 + -1;
                UNLOCK();
                if (lVar25 == 0) {
                  (**(code **)(*_uStack0000000000000048 + 0x10))(_uStack0000000000000048);
                  func_0x0412c2d0(plVar27);
                }
              }
              goto LAB_0d2ccbc6;
            }
          }
          else {
            func_0x0d2de6d0();
          }
          func_0x04882eb0();
          goto LAB_0d2cd642;
        }
        *(undefined4 *)plVar32 = uStack0000000000000040;
        *(undefined4 *)((long)plVar32 + 4) = uStack0000000000000044;
        *(undefined4 *)(plVar32 + 1) = uStack0000000000000048;
        *(undefined4 *)((long)plVar32 + 0xc) = uStack000000000000004c;
        plVar24 = plVar31;
        plVar32 = plVar32 + 2;
        plVar33 = plVar27;
LAB_0d2ccbc6:
        puVar18 = puVar18 + 7;
        plVar26 = plVar27;
        plVar31 = plVar24;
        plVar27 = plVar33;
      } while (puVar18 != puVar28);
    }
    plVar27 = in_stack_00000140;
    plVar14 = in_stack_00000148;
    if (in_stack_00000140 != (long *)0x0) {
      for (; plVar27 != plVar14; plVar14 = plVar14 + -2) {
        plVar26 = (long *)plVar14[-1];
        if (plVar26 != (long *)0x0) {
          LOCK();
          plVar31 = plVar26 + 1;
          lVar25 = *plVar31;
          *plVar31 = *plVar31 + -1;
          UNLOCK();
          if (lVar25 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            func_0x0412c2d0(plVar26);
          }
        }
      }
      in_stack_00000148 = plVar27;
      func_0x0412a280(in_stack_00000140,(long)in_stack_00000150 - (long)in_stack_00000140);
    }
    uStack00000000000001da = pbVar23[0x160] == 1;
    in_stack_00000140 = plVar24;
    in_stack_00000148 = plVar32;
    in_stack_00000150 = plVar33;
    if ((*pbVar23 & 1) == 0) {
      in_stack_000002b8 = *(byte **)(pbVar23 + 0x10);
      plVar32 = *(long **)pbVar23;
      plVar33 = *(long **)(pbVar23 + 8);
    }
    else {
      func_0x0412e5e0(&stack0x000002a8,*(undefined8 *)(pbVar23 + 0x10),*(undefined8 *)(pbVar23 + 8))
      ;
    }
    if (((ulong)plVar32 & 1) == 0) {
      if ((byte)((byte)plVar32 >> 1) != 0) goto LAB_0d2ccebd;
LAB_0d2ccfa0:
      uVar29 = 0;
    }
    else {
      if (plVar33 == (long *)0x0) goto LAB_0d2ccfa0;
LAB_0d2ccebd:
      pbVar19 = &stack0x000002a9;
      if (((ulong)plVar32 & 1) != 0) {
        pbVar19 = in_stack_000002b8;
      }
      if (pbVar19 == (byte *)0x0) {
        uVar29 = 0;
      }
      else {
        if (*pbVar19 == 0) goto LAB_0d2ccfa0;
        uVar21 = func_0x0eee2e90(pbVar19);
        uVar29 = 0xcbf29ce484222325;
        if (uVar21 != 0) {
          if (7 < uVar21) {
            uVar17 = uVar21 & 0xfffffffffffffff8;
            do {
              uVar29 = (((((((uVar29 * 0x100000001b3 ^ (ulong)*pbVar19) * 0x100000001b3 ^
                            (ulong)pbVar19[1]) * 0x100000001b3 ^ (ulong)pbVar19[2]) * 0x100000001b3
                          ^ (ulong)pbVar19[3]) * 0x100000001b3 ^ (ulong)pbVar19[4]) * 0x100000001b3
                        ^ (ulong)pbVar19[5]) * 0x100000001b3 ^ (ulong)pbVar19[6]) * 0x100000001b3 ^
                       (ulong)pbVar19[7];
              pbVar19 = pbVar19 + 8;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          if ((uVar21 & 7) != 0) {
            uVar17 = 0;
            do {
              uVar29 = uVar29 * 0x100000001b3 ^ (ulong)pbVar19[uVar17];
              uVar17 = uVar17 + 1;
            } while (((uint)uVar21 & 7) != uVar17);
          }
        }
      }
    }
    if (((ulong)in_stack_00000120 & 1) != 0) {
      func_0x0412a280(in_stack_00000130,(ulong)in_stack_00000120 & 0xfffffffffffffffe);
    }
    in_stack_00000138 = 0;
    puVar18 = (undefined8 *)in_stack_00000008[1];
    in_stack_00000118 = uVar29;
    in_stack_00000120 = plVar32;
    in_stack_00000128 = plVar33;
    in_stack_00000130 = in_stack_000002b8;
    if (puVar18 < (undefined8 *)in_stack_00000008[2]) {
      func_0x0d2e01b0(puVar18,&stack0x000000a8);
      uVar6 = in_stack_000001c0;
      *puVar18 = &UNK_0f4604f0;
      puVar18[0x18] = in_stack_00000168;
      puVar18[0x16] = in_stack_00000158;
      puVar18[0x17] = in_stack_00000160;
      in_stack_00000158 = 0;
      in_stack_00000160 = 0;
      in_stack_00000168 = 0;
      puVar18[0x1b] = in_stack_00000180;
      *(undefined4 *)(puVar18 + 0x19) = uStack0000000000000170;
      *(undefined4 *)((long)puVar18 + 0xcc) = uStack0000000000000174;
      *(undefined4 *)(puVar18 + 0x1a) = uStack0000000000000178;
      *(undefined4 *)((long)puVar18 + 0xd4) = uStack000000000000017c;
      _uStack0000000000000170 = 0;
      _uStack0000000000000178 = 0;
      in_stack_00000180 = 0;
      *(byte *)(puVar18 + 0x1c) = in_stack_00000188;
      puVar18[0x1d] = &UNK_0f45f520;
      *(undefined1 *)(puVar18 + 0x1e) = 0;
      *(undefined4 *)(puVar18 + 0x23) = 0xffffffff;
      if ((ulong)in_stack_000001c0 != 0xffffffff) {
        (**(code **)(&UNK_0f45ee48 + (ulong)in_stack_000001c0 * 8))
                  (&stack0x000002a0,&stack0x00000198);
        *(uint *)(puVar18 + 0x23) = uVar6;
      }
      *(uint *)((long)puVar18 + 0x12f) =
           CONCAT13(uStack00000000000001da,
                    CONCAT12(uStack00000000000001d9,
                             CONCAT11(cStack00000000000001d8,uStack00000000000001d4._3_1_)));
      *(undefined4 *)(puVar18 + 0x24) = uStack00000000000001c8;
      *(undefined4 *)((long)puVar18 + 0x124) = uStack00000000000001cc;
      *(undefined4 *)(puVar18 + 0x25) = uStack00000000000001d0;
      *(undefined4 *)((long)puVar18 + 300) = uStack00000000000001d4;
      puVar18 = puVar18 + 0x27;
    }
    else {
      lVar25 = (long)puVar18 - *in_stack_00000008;
      uVar29 = (lVar25 >> 3) * 0x6f96f96f96f96f97 + 1;
      if (0xd20d20d20d20d2 < uVar29) goto LAB_0d2cd6ac;
      lVar15 = in_stack_00000008[2] - *in_stack_00000008 >> 3;
      uVar21 = lVar15 * -0x20d20d20d20d20d2;
      if (uVar29 < uVar21) {
        uVar29 = uVar21;
      }
      if (0x69069069069068 < (ulong)(lVar15 * 0x6f96f96f96f96f97)) {
        uVar29 = 0xd20d20d20d20d2;
      }
      if (uVar29 == 0) {
        lVar15 = 0;
      }
      else {
        if (0xd20d20d20d20d2 < uVar29) goto LAB_0d2cd6b1;
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x138);
        if (lVar15 == 0) {
          func_0x0eec74c0(uVar29 * 0x138,0);
          lVar15 = 0;
        }
      }
      puVar28 = (undefined8 *)(lVar25 + lVar15);
      func_0x0d2e01b0(puVar28,&stack0x000000a8);
      uVar6 = in_stack_000001c0;
      *puVar28 = &UNK_0f4604f0;
      puVar28[0x18] = in_stack_00000168;
      puVar28[0x16] = in_stack_00000158;
      puVar28[0x17] = in_stack_00000160;
      in_stack_00000158 = 0;
      in_stack_00000160 = 0;
      in_stack_00000168 = 0;
      puVar28[0x1b] = in_stack_00000180;
      *(undefined4 *)(puVar28 + 0x19) = uStack0000000000000170;
      *(undefined4 *)((long)puVar28 + 0xcc) = uStack0000000000000174;
      *(undefined4 *)(puVar28 + 0x1a) = uStack0000000000000178;
      *(undefined4 *)((long)puVar28 + 0xd4) = uStack000000000000017c;
      _uStack0000000000000170 = 0;
      _uStack0000000000000178 = 0;
      in_stack_00000180 = 0;
      *(byte *)(puVar28 + 0x1c) = in_stack_00000188;
      puVar28[0x1d] = &UNK_0f45f520;
      *(undefined1 *)(puVar28 + 0x1e) = 0;
      *(undefined4 *)(puVar28 + 0x23) = 0xffffffff;
      if ((ulong)in_stack_000001c0 != 0xffffffff) {
        in_stack_000001e0 = puVar28 + 0x1e;
        (**(code **)(&UNK_0f45ee48 + (ulong)in_stack_000001c0 * 8))
                  (&stack0x000001e0,&stack0x00000198);
        *(uint *)(puVar28 + 0x23) = uVar6;
      }
      *(uint *)((long)puVar28 + 0x12f) =
           CONCAT13(uStack00000000000001da,
                    CONCAT12(uStack00000000000001d9,
                             CONCAT11(cStack00000000000001d8,uStack00000000000001d4._3_1_)));
      *(undefined4 *)(puVar28 + 0x24) = uStack00000000000001c8;
      *(undefined4 *)((long)puVar28 + 0x124) = uStack00000000000001cc;
      *(undefined4 *)(puVar28 + 0x25) = uStack00000000000001d0;
      *(undefined4 *)((long)puVar28 + 300) = uStack00000000000001d4;
      puVar18 = puVar28 + 0x27;
      puVar20 = (undefined8 *)*in_stack_00000008;
      puVar7 = (undefined8 *)in_stack_00000008[1];
      lVar25 = (long)puVar28 - ((long)puVar7 - (long)puVar20);
      if (puVar7 != puVar20) {
        lVar22 = 0;
        do {
          func_0x0d2e01b0(lVar25 + lVar22,(long)puVar20 + lVar22);
          *(undefined **)(lVar25 + lVar22) = &UNK_0f4604f0;
          lVar13 = lVar25 + lVar22;
          if ((*(byte *)((long)puVar20 + lVar22 + 0xb0) & 1) == 0) {
            *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)((long)puVar20 + lVar22 + 0xc0);
            uVar9 = *(undefined4 *)((long)puVar20 + lVar22 + 0xb4);
            uVar10 = *(undefined4 *)((long)puVar20 + lVar22 + 0xb8);
            uVar11 = *(undefined4 *)((long)puVar20 + lVar22 + 0xbc);
            *(undefined4 *)(lVar13 + 0xb0) = *(undefined4 *)((long)puVar20 + lVar22 + 0xb0);
            *(undefined4 *)(lVar13 + 0xb4) = uVar9;
            *(undefined4 *)(lVar13 + 0xb8) = uVar10;
            *(undefined4 *)(lVar13 + 0xbc) = uVar11;
          }
          else {
            func_0x0412e5e0((undefined4 *)(lVar13 + 0xb0),
                            *(undefined8 *)((long)puVar20 + lVar22 + 0xc0),
                            *(undefined8 *)((long)puVar20 + lVar22 + 0xb8));
          }
          lVar13 = lVar25 + lVar22;
          if ((*(byte *)((long)puVar20 + lVar22 + 200) & 1) == 0) {
            *(undefined8 *)(lVar13 + 0xd8) = *(undefined8 *)((long)puVar20 + lVar22 + 0xd8);
            uVar9 = *(undefined4 *)((long)puVar20 + lVar22 + 0xcc);
            uVar10 = *(undefined4 *)((long)puVar20 + lVar22 + 0xd0);
            uVar11 = *(undefined4 *)((long)puVar20 + lVar22 + 0xd4);
            *(undefined4 *)(lVar13 + 200) = *(undefined4 *)((long)puVar20 + lVar22 + 200);
            *(undefined4 *)(lVar13 + 0xcc) = uVar9;
            *(undefined4 *)(lVar13 + 0xd0) = uVar10;
            *(undefined4 *)(lVar13 + 0xd4) = uVar11;
          }
          else {
            func_0x0412e5e0((undefined4 *)(lVar13 + 200),
                            *(undefined8 *)((long)puVar20 + lVar22 + 0xd8),
                            *(undefined8 *)((long)puVar20 + lVar22 + 0xd0));
          }
          *(undefined1 *)(lVar25 + 0xe0 + lVar22) = *(undefined1 *)((long)puVar20 + lVar22 + 0xe0);
          *(undefined **)(lVar25 + 0xe8 + lVar22) = &UNK_0f45f520;
          *(undefined1 *)(lVar25 + 0xf0 + lVar22) = 0;
          *(undefined4 *)(lVar25 + 0x118 + lVar22) = 0xffffffff;
          uVar6 = *(uint *)((long)puVar20 + lVar22 + 0x118);
          if ((ulong)uVar6 != 0xffffffff) {
            in_stack_000001e0 = (undefined8 *)(lVar25 + lVar22 + 0xf0);
            (**(code **)(&UNK_0f45ee38 + (ulong)uVar6 * 8))
                      (&stack0x000001e0,(long)puVar20 + lVar22 + 0xf0);
            *(uint *)(lVar25 + 0x118 + lVar22) = uVar6;
          }
          pbVar23 = in_stack_00000038;
          *(undefined4 *)(lVar25 + 0x12f + lVar22) = *(undefined4 *)((long)puVar20 + lVar22 + 0x12f)
          ;
          puVar2 = (undefined4 *)((long)puVar20 + lVar22 + 0x120);
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar3 = (undefined4 *)(lVar25 + 0x120 + lVar22);
          *puVar3 = *puVar2;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          lVar13 = lVar22 + 0x138;
          lVar22 = lVar22 + 0x138;
        } while ((undefined8 *)((long)puVar20 + lVar13) != puVar7);
        do {
          (**(code **)*puVar20)(puVar20);
          puVar20 = puVar20 + 0x27;
        } while (puVar20 != puVar7);
        puVar20 = (undefined8 *)*in_stack_00000008;
      }
      *in_stack_00000008 = lVar25;
      in_stack_00000008[1] = (long)puVar18;
      lVar25 = in_stack_00000008[2];
      in_stack_00000008[2] = uVar29 * 0x138 + lVar15;
      if (puVar20 != (undefined8 *)0x0) {
        func_0x0412a280(puVar20,lVar25 - (long)puVar20);
      }
    }
    pbVar19 = in_stack_00000090;
    in_stack_00000008[1] = (long)puVar18;
    in_stack_000000a8 = &UNK_0f4604f0;
    in_stack_00000190 = &UNK_0f45f520;
    if ((ulong)in_stack_000001c0 != 0xffffffff) {
      (**(code **)(&UNK_0f45ed90 + (ulong)in_stack_000001c0 * 8))(&stack0x000002a0,&stack0x00000198)
      ;
    }
    in_stack_000001c0 = 0xffffffff;
    if ((_uStack0000000000000170 & 1) != 0) {
      func_0x0412a280(in_stack_00000180,_uStack0000000000000170 & 0xfffffffffffffffe);
    }
    if ((in_stack_00000158 & 1) != 0) {
      func_0x0412a280(in_stack_00000168,in_stack_00000158 & 0xfffffffffffffffe);
    }
    func_0x0d2de2e0(&stack0x000000a8);
    while( true ) {
      pbVar23 = pbVar23 + 0x168;
      if (pbVar23 == pbVar19) {
        return in_stack_00000008;
      }
LAB_0d2cc16d:
      cVar12 = func_0x0b5f94a0(pbVar23,0x1f,1,0);
      if (cVar12 != '\0') break;
      func_0x0b5c3630(1,3,0x1f,&UNK_012e9ccc,&stack0x000002a0);
    }
    in_stack_000000b0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000c8 = (undefined2 *)0x0;
    in_stack_000000d0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000c0 = (undefined2 *)0x0;
    in_stack_00000108 = 0x3f800000;
    in_stack_00000110 = 0;
    in_stack_00000148 = (long *)0x0;
    in_stack_00000150 = (long *)0x0;
    in_stack_00000138 = 0;
    in_stack_00000140 = (long *)0x0;
    in_stack_00000128 = (long *)0x0;
    in_stack_00000130 = (byte *)0x0;
    in_stack_00000118 = 0;
    in_stack_00000120 = (long *)0x0;
    in_stack_000000a8 = &UNK_0f4604f0;
    _uStack0000000000000178 = 0;
    in_stack_00000180 = 0;
    in_stack_00000168 = 0;
    _uStack0000000000000170 = 0;
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000188 = 0;
    in_stack_00000190 = &UNK_0f45f520;
    in_stack_00000198 = &UNK_0f460518;
    in_stack_000001a0 = 0;
    in_stack_000001a8 = &UNK_0d2d5840;
    in_stack_000001c0 = 0;
    _uStack00000000000001c8 = 0x7fffffff00000050;
    cStack00000000000001d8 = '\0';
    uStack00000000000001d9 = 0;
    uStack00000000000001da = 0;
    uStack00000000000001d0 = 0;
    uStack00000000000001d4 = 0;
    if ((byte *)&stack0x000000d0 != pbVar23) {
      if ((*pbVar23 & 1) == 0) {
        in_stack_000000e0 = *(undefined8 *)(pbVar23 + 0x10);
        in_stack_000000d0 = *(undefined8 *)pbVar23;
        in_stack_000000d8 = *(undefined8 *)(pbVar23 + 8);
      }
      else {
        func_0x04885070(&stack0x000000d0,*(undefined8 *)(pbVar23 + 0x10),
                        *(undefined8 *)(pbVar23 + 8));
      }
    }
    puVar1 = (ulong *)(pbVar23 + 0x18);
    if (&stack0x00000158 != puVar1) {
      bVar4 = (byte)*puVar1;
      if ((in_stack_00000158 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          in_stack_00000168 = *(undefined8 *)(pbVar23 + 0x28);
          in_stack_00000158 = *puVar1;
          in_stack_00000160 = *(undefined8 *)(pbVar23 + 0x20);
        }
        else {
          func_0x04885070(&stack0x00000158,*(undefined8 *)(pbVar23 + 0x28),
                          *(undefined8 *)(pbVar23 + 0x20));
        }
      }
      else {
        bVar30 = (bVar4 & 1) != 0;
        pbVar19 = pbVar23 + 0x19;
        if (bVar30) {
          pbVar19 = *(byte **)(pbVar23 + 0x28);
        }
        uVar29 = (ulong)(bVar4 >> 1);
        if (bVar30) {
          uVar29 = *(ulong *)(pbVar23 + 0x20);
        }
        func_0x04885120(&stack0x00000158,pbVar19,uVar29);
      }
    }
    in_stack_00000110 = (char)*(undefined4 *)(pbVar23 + 0xf0);
    if (9 < (byte)(in_stack_00000110 - 1U)) {
      in_stack_00000110 = '\0';
    }
    in_stack_000000b0 = pbVar23[0xf1];
    if (4 < in_stack_000000b0) {
      in_stack_000000b0 = 0;
    }
    puVar1 = (ulong *)(pbVar23 + 0xf8);
    if ((ulong *)&stack0x00000170 != puVar1) {
      bVar4 = (byte)*puVar1;
      if ((_uStack0000000000000170 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          in_stack_00000180 = *(undefined8 *)(pbVar23 + 0x108);
          _uStack0000000000000170 = *puVar1;
          _uStack0000000000000178 = *(undefined8 *)(pbVar23 + 0x100);
        }
        else {
          func_0x04885070(&stack0x00000170,*(undefined8 *)(pbVar23 + 0x108),
                          *(undefined8 *)(pbVar23 + 0x100));
        }
      }
      else {
        bVar30 = (bVar4 & 1) != 0;
        pbVar19 = pbVar23 + 0xf9;
        if (bVar30) {
          pbVar19 = *(byte **)(pbVar23 + 0x108);
        }
        uVar29 = (ulong)(bVar4 >> 1);
        if (bVar30) {
          uVar29 = *(ulong *)(pbVar23 + 0x100);
        }
        func_0x04885120(&stack0x00000170,pbVar19,uVar29);
      }
    }
    in_stack_00000188 = pbVar23[0x110];
    in_stack_000001f0 = *(ulong *)(pbVar23 + 0x124);
    in_stack_000001e0 = *(undefined8 **)(pbVar23 + 0x114);
    uStack00000000000001e8 = *(undefined4 *)(pbVar23 + 0x11c);
    uStack00000000000001ec = *(undefined4 *)(pbVar23 + 0x120);
    in_stack_000001f8 = 1;
    in_stack_00000030 = (undefined8 *)&stack0x000002a0;
    if (in_stack_000001f0 >> 0x20 == 0xffffffff) goto LAB_0d2cd64c;
    _uStack0000000000000040 = &stack0x00000030;
    (**(code **)(&UNK_0f45ed60 + (in_stack_000001f0 >> 0x20) * 8))
              (&stack0x00000040,(long)&stack0x000001e0 + 4);
    in_stack_000001e0 = &stack0x00000198;
    (*_UNK_0f45ee58)(&stack0x000001e0,in_stack_000001e0,&stack0x000002a8);
    (*_UNK_0f45ed90)(&stack0x000001e0,&stack0x000002a8);
    cStack00000000000001d8 = (pbVar23[300] == 2) * '\x02';
    if (pbVar23[300] == 1) {
      cStack00000000000001d8 = '\x01';
    }
    in_stack_000001e0 = (undefined8 *)((ulong)in_stack_000001e0 & 0xffffffffffffff00);
    in_stack_00000298 = *(uint *)(pbVar23 + 0xe8);
    uVar29 = (ulong)in_stack_00000298;
    if (uVar29 == 0xffffffff) goto LAB_0d2cd651;
    (**(code **)(&UNK_0f45edb8 + uVar29 * 8))(&stack0x000002a0,pbVar23 + 0x30);
    _uStack0000000000000048 = (long *)((ulong)_uStack0000000000000048 & 0xffffffff00000000);
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    _uStack0000000000000040 = (undefined8 *)&UNK_0ef516f8;
    in_stack_00000030 = (undefined8 *)&stack0x000002a0;
    cVar12 = (**(code **)(&UNK_0f3957b0 + uVar29 * 8))(&stack0x00000030,&stack0x000001e0);
    if (cVar12 == '\0') {
      func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
    }
    func_0x04a6dda0(&stack0x00000040,in_stack_00000088);
    lVar25 = (**(code **)(*in_stack_00000088 + 0x18))();
    in_stack_000002b8 = (byte *)0x0;
    unaff_R12 = *(long **)(lVar25 + 0x380);
    in_stack_00000018 = *(long **)(lVar25 + 0x388);
    in_stack_00000038 = pbVar23;
    if (unaff_R12 == in_stack_00000018) {
      lStack0000000000000020 = 0;
      unaff_RBP = (undefined2 *)0x0;
      in_stack_00000010 = (undefined2 *)0x0;
    }
    else {
      lStack0000000000000020 = 0;
      unaff_RBP = (undefined2 *)0x0;
      in_stack_00000010 = (undefined2 *)0x0;
      unaff_retaddr = lVar25;
LAB_0d2cc8bf:
      do {
        lVar15 = *unaff_R12;
        if (lVar15 != *(long *)(lVar25 + 0x3b8)) {
          cVar12 = func_0x0c5c3630(&stack0x00000040,&stack0x000002a0);
          lVar25 = unaff_retaddr;
          if (cVar12 == '\0') goto LAB_0d2cc9d3;
          uVar5 = *(undefined2 *)(lVar15 + 0x168);
          if (in_stack_00000010 <= unaff_RBP) {
            lVar15 = (long)unaff_RBP - lStack0000000000000020;
            lVar22 = lVar15 >> 1;
            if (lVar22 < -1) goto LAB_0d2cd642;
            param_2 = (long)in_stack_00000010 - lStack0000000000000020;
            uVar29 = lVar22 + 1U;
            if (lVar22 + 1U < param_2) {
              uVar29 = param_2;
            }
            uVar21 = 0x7fffffffffffffff;
            if (param_2 < 0x7ffffffffffffffe) {
              uVar21 = uVar29;
            }
            if ((long)uVar21 < 0) goto LAB_0d2cd647;
            in_stack_00000098 = uVar21 * 2;
            lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
            if (lVar13 == 0) {
              func_0x0eec74c0(in_stack_00000098,0);
            }
            in_stack_00000010 = (undefined2 *)(lVar13 + uVar21 * 2);
            *(undefined2 *)(lVar13 + lVar15) = uVar5;
            unaff_RBP = (undefined2 *)(lVar13 + lVar15 + 2);
            unaff_R15 = lVar13 + lVar15 + lVar22 * -2;
            func_0x0eee2f00(unaff_R15,lStack0000000000000020,lVar15);
            bVar30 = lStack0000000000000020 == 0;
            param_1 = lStack0000000000000020;
            lStack0000000000000020 = unaff_R15;
            if (bVar30) goto LAB_0d2cc9d3;
            goto code_r0x0d2cc9c0;
          }
          *unaff_RBP = uVar5;
          unaff_RBP = unaff_RBP + 1;
        }
        unaff_R12 = unaff_R12 + 1;
      } while (unaff_R12 != in_stack_00000018);
    }
  } while( true );
LAB_0d2cd642:
  func_0x049ce220();
LAB_0d2cd647:
  func_0x04882eb0();
LAB_0d2cd64c:
  func_0x04931450();
LAB_0d2cd651:
  _uStack0000000000000048 = (long *)((ulong)_uStack0000000000000048 & 0xffffffff00000000);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  _uStack0000000000000040 = (undefined8 *)&UNK_0ef516f8;
  func_0x04931450();
LAB_0d2cd6a2:
  func_0x0d2de6d0();
LAB_0d2cd6a7:
  func_0x04931450();
LAB_0d2cd6ac:
  func_0x0d2e0140();
LAB_0d2cd6b1:
  func_0x04882eb0();
  uVar16 = func_0x0d2e0140();
  func_0x0d2cd8d0(in_stack_00000008);
  uVar16 = func_0x0eee2d70(uVar16);
  func_0x049d2400(&stack0x00000040);
  func_0x05472b20(&stack0x000001e0);
  func_0x0d2c81e0(&stack0x000000a8);
  func_0x0d2cd8d0(in_stack_00000008);
  func_0x0eee2d70(uVar16);
  pcVar8 = (code *)swi(3);
  plVar24 = (long *)(*pcVar8)();
  return plVar24;
}


