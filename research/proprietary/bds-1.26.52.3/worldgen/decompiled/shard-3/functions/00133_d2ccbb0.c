/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ccbb0
 * Label: string:ZN12BastionPiece9addPiecesE8BlockPosRNSt3__16vectorINS1_10un
 * Body:  [[0d2cc10a, 0d2cc149] [0d2cc150, 0d2cc2a1] [0d2cc2b0, 0d2cc2bc] [0d2cc2c0, 0d2cc9cb] [0d2cc9d0, 0d2ccacd] [0d2ccad0, 0d2ccbab] [0d2ccbb0, 0d2ccd8d] [0d2ccd90, 0d2ccdae] [0d2ccdb0, 0d2cce63] [0d2cce70, 0d2cceae] [0d2cceb0, 0d2ccf94] [0d2ccfa0, 0d2cd142] [0d2cd150, 0d2cd36e] [0d2cd370, 0d2cd3fb] [0d2cd400, 0d2cd444] [0d2cd450, 0d2cd6bf] [0d2cd768, 0d2cd78e] [0d2cd878, 0d2cd886] [0d2cd8a5, 0d2cd8c4]]
 * Ghidra: FUN_0d2ccbb0
 */


/* WARNING: Removing unreachable block (ram,0x0d2cc509) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2ccbb0(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *unaff_RBX;
  byte *pbVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  long unaff_RBP;
  ulong uVar24;
  long lVar25;
  long *unaff_R12;
  long lVar26;
  byte *unaff_R13;
  long *unaff_R14;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long *unaff_R15;
  ulong uVar29;
  bool bVar30;
  long *in_stack_00000008;
  undefined2 *puStack0000000000000010;
  undefined8 *in_stack_00000018;
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
  long *in_stack_000002a0;
  long *in_stack_000002b0;
  byte *in_stack_000002b8;
  
  do {
    *(undefined4 *)unaff_R12 = uStack0000000000000040;
    *(undefined4 *)((long)unaff_R12 + 4) = uStack0000000000000044;
    *(undefined4 *)(unaff_R12 + 1) = uStack0000000000000048;
    *(undefined4 *)((long)unaff_R12 + 0xc) = uStack000000000000004c;
    unaff_R12 = unaff_R12 + 2;
LAB_0d2ccbc6:
    unaff_RBX = unaff_RBX + 7;
    plVar19 = in_stack_000002a0;
    if (unaff_RBX == in_stack_00000018) goto LAB_0d2ccd90;
LAB_0d2ccbd5:
    _uStack0000000000000040 = (undefined8 *)0x0;
    _uStack0000000000000048 = (long *)0x0;
    in_stack_000000a0 = (undefined8 *)&stack0x00000040;
    if ((ulong)*(uint *)(unaff_RBX + 6) == 0xffffffff) {
      func_0x04931450();
      func_0x0eec74c0(unaff_R14,0);
      *in_stack_00000008 = (long)unaff_R15;
      in_stack_00000008[1] = (long)unaff_R15;
      in_stack_00000008[2] = (long)unaff_R14 + (long)unaff_R15;
      unaff_R13 = (byte *)*unaff_RBX;
      pbVar21 = (byte *)unaff_RBX[1];
      in_stack_00000090 = pbVar21;
      if (unaff_R13 == pbVar21) {
        return in_stack_00000008;
      }
      do {
        cVar15 = func_0x0b5f94a0(unaff_R13,0x1f,1,0);
        if (cVar15 == '\0') {
          func_0x0b5c3630(1,3,0x1f,&UNK_012e9ccc,&stack0x000002a0);
        }
        else {
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
          if ((byte *)&stack0x000000d0 != unaff_R13) {
            if ((*unaff_R13 & 1) == 0) {
              in_stack_000000e0 = *(undefined8 *)(unaff_R13 + 0x10);
              in_stack_000000d0 = *(undefined8 *)unaff_R13;
              in_stack_000000d8 = *(undefined8 *)(unaff_R13 + 8);
            }
            else {
              func_0x04885070(&stack0x000000d0,*(undefined8 *)(unaff_R13 + 0x10),
                              *(undefined8 *)(unaff_R13 + 8));
            }
          }
          puVar1 = (ulong *)(unaff_R13 + 0x18);
          if (&stack0x00000158 != puVar1) {
            bVar5 = (byte)*puVar1;
            if ((in_stack_00000158 & 1) == 0) {
              if ((bVar5 & 1) == 0) {
                in_stack_00000168 = *(undefined8 *)(unaff_R13 + 0x28);
                in_stack_00000158 = *puVar1;
                in_stack_00000160 = *(undefined8 *)(unaff_R13 + 0x20);
              }
              else {
                func_0x04885070(&stack0x00000158,*(undefined8 *)(unaff_R13 + 0x28),
                                *(undefined8 *)(unaff_R13 + 0x20));
              }
            }
            else {
              bVar30 = (bVar5 & 1) != 0;
              pbVar21 = unaff_R13 + 0x19;
              if (bVar30) {
                pbVar21 = *(byte **)(unaff_R13 + 0x28);
              }
              uVar29 = (ulong)(bVar5 >> 1);
              if (bVar30) {
                uVar29 = *(ulong *)(unaff_R13 + 0x20);
              }
              func_0x04885120(&stack0x00000158,pbVar21,uVar29);
            }
          }
          in_stack_00000110 = (char)*(undefined4 *)(unaff_R13 + 0xf0);
          if (9 < (byte)(in_stack_00000110 - 1U)) {
            in_stack_00000110 = '\0';
          }
          in_stack_000000b0 = unaff_R13[0xf1];
          if (4 < in_stack_000000b0) {
            in_stack_000000b0 = 0;
          }
          puVar1 = (ulong *)(unaff_R13 + 0xf8);
          if ((ulong *)&stack0x00000170 != puVar1) {
            bVar5 = (byte)*puVar1;
            if ((_uStack0000000000000170 & 1) == 0) {
              if ((bVar5 & 1) == 0) {
                in_stack_00000180 = *(undefined8 *)(unaff_R13 + 0x108);
                _uStack0000000000000170 = *puVar1;
                _uStack0000000000000178 = *(undefined8 *)(unaff_R13 + 0x100);
              }
              else {
                func_0x04885070(&stack0x00000170,*(undefined8 *)(unaff_R13 + 0x108),
                                *(undefined8 *)(unaff_R13 + 0x100));
              }
            }
            else {
              bVar30 = (bVar5 & 1) != 0;
              pbVar21 = unaff_R13 + 0xf9;
              if (bVar30) {
                pbVar21 = *(byte **)(unaff_R13 + 0x108);
              }
              uVar29 = (ulong)(bVar5 >> 1);
              if (bVar30) {
                uVar29 = *(ulong *)(unaff_R13 + 0x100);
              }
              func_0x04885120(&stack0x00000170,pbVar21,uVar29);
            }
          }
          in_stack_00000188 = unaff_R13[0x110];
          in_stack_000001f0 = *(ulong *)(unaff_R13 + 0x124);
          in_stack_000001e0 = *(undefined8 **)(unaff_R13 + 0x114);
          uStack00000000000001e8 = *(undefined4 *)(unaff_R13 + 0x11c);
          uStack00000000000001ec = *(undefined4 *)(unaff_R13 + 0x120);
          in_stack_000001f8 = 1;
          in_stack_00000030 = (undefined8 *)&stack0x000002a0;
          if (in_stack_000001f0 >> 0x20 == 0xffffffff) goto LAB_0d2cd64c;
          _uStack0000000000000040 = &stack0x00000030;
          (**(code **)(&UNK_0f45ed60 + (in_stack_000001f0 >> 0x20) * 8))
                    (&stack0x00000040,(long)&stack0x000001e0 + 4);
          in_stack_000001e0 = &stack0x00000198;
          (*_UNK_0f45ee58)(&stack0x000001e0,in_stack_000001e0,&stack0x000002a8);
          (*_UNK_0f45ed90)(&stack0x000001e0,&stack0x000002a8);
          cStack00000000000001d8 = (unaff_R13[300] == 2) * '\x02';
          if (unaff_R13[300] == 1) {
            cStack00000000000001d8 = '\x01';
          }
          in_stack_000001e0 = (undefined8 *)((ulong)in_stack_000001e0 & 0xffffffffffffff00);
          uVar7 = *(uint *)(unaff_R13 + 0xe8);
          uVar29 = (ulong)uVar7;
          if (uVar29 == 0xffffffff) goto LAB_0d2cd651;
          (**(code **)(&UNK_0f45edb8 + uVar29 * 8))(&stack0x000002a0,unaff_R13 + 0x30);
          _uStack0000000000000048 = (long *)((ulong)_uStack0000000000000048 & 0xffffffff00000000);
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          _uStack0000000000000040 = (undefined8 *)&UNK_0ef516f8;
          in_stack_00000030 = (undefined8 *)&stack0x000002a0;
          cVar15 = (**(code **)(&UNK_0f3957b0 + uVar29 * 8))(&stack0x00000030,&stack0x000001e0);
          if (cVar15 == '\0') {
            func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
          }
          func_0x04a6dda0(&stack0x00000040,in_stack_00000088);
          lVar26 = (**(code **)(*in_stack_00000088 + 0x18))();
          in_stack_000002b8 = (byte *)0x0;
          plVar19 = *(long **)(lVar26 + 0x380);
          plVar8 = *(long **)(lVar26 + 0x388);
          in_stack_00000038 = unaff_R13;
          if (plVar19 == plVar8) {
            lStack0000000000000020 = 0;
            puVar23 = (undefined2 *)0x0;
            puStack0000000000000010 = (undefined2 *)0x0;
          }
          else {
            lStack0000000000000020 = 0;
            puVar23 = (undefined2 *)0x0;
            puStack0000000000000010 = (undefined2 *)0x0;
            do {
              while (lVar17 = *plVar19, lVar17 != *(long *)(lVar26 + 0x3b8)) {
                cVar15 = func_0x0c5c3630(&stack0x00000040,&stack0x000002a0);
                lVar25 = lStack0000000000000020;
                if (cVar15 != '\0') {
                  uVar6 = *(undefined2 *)(lVar17 + 0x168);
                  if (puVar23 < puStack0000000000000010) {
                    *puVar23 = uVar6;
                    puVar23 = puVar23 + 1;
                    break;
                  }
                  lVar17 = (long)puVar23 - lStack0000000000000020;
                  lVar25 = lVar17 >> 1;
                  if (lVar25 < -1) goto LAB_0d2cd642;
                  uVar24 = (long)puStack0000000000000010 - lStack0000000000000020;
                  uVar29 = lVar25 + 1U;
                  if (lVar25 + 1U < uVar24) {
                    uVar29 = uVar24;
                  }
                  uVar20 = 0x7fffffffffffffff;
                  if (uVar24 < 0x7ffffffffffffffe) {
                    uVar20 = uVar29;
                  }
                  if ((long)uVar20 < 0) goto LAB_0d2cd647;
                  in_stack_00000098 = uVar20 * 2;
                  lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                  if (lVar16 == 0) {
                    func_0x0eec74c0(in_stack_00000098,0);
                  }
                  puStack0000000000000010 = (undefined2 *)(lVar16 + uVar20 * 2);
                  *(undefined2 *)(lVar16 + lVar17) = uVar6;
                  puVar23 = (undefined2 *)(lVar16 + lVar17 + 2);
                  lVar25 = lVar16 + lVar17 + lVar25 * -2;
                  func_0x0eee2f00(lVar25,lStack0000000000000020,lVar17);
                  if (lStack0000000000000020 != 0) {
                    func_0x0412a280(lStack0000000000000020,uVar24);
                  }
                }
                lStack0000000000000020 = lVar25;
                plVar19 = plVar19 + 1;
                if (plVar19 == plVar8) goto LAB_0d2cca13;
              }
              plVar19 = plVar19 + 1;
            } while (plVar19 != plVar8);
          }
LAB_0d2cca13:
          func_0x049d2400(&stack0x00000040);
          if (in_stack_000000b8 != 0) {
            in_stack_000000c0 = (undefined2 *)in_stack_000000b8;
            func_0x0412a280(in_stack_000000b8,(long)in_stack_000000c8 - in_stack_000000b8);
          }
          unaff_R13 = in_stack_00000038;
          in_stack_000000b8 = lStack0000000000000020;
          in_stack_000000c8 = puStack0000000000000010;
          unaff_RBP = 0x100000001b3;
          in_stack_000000c0 = puVar23;
          if ((ulong)uVar7 != 0xffffffff) {
            (**(code **)(&UNK_0f45eda0 + (ulong)uVar7 * 8))(&stack0x000002a0,&stack0x000001e0);
          }
          if ((*(ulong *)(unaff_R13 + 0x138) >> 0x20 & 1) == 0) {
            uVar18 = 0;
          }
          else {
            uVar29 = *(ulong *)(unaff_R13 + 0x138) & 0xffffffff;
            if (uVar29 == 0xffffffff) goto LAB_0d2cd6a7;
            _uStack0000000000000040 = &stack0x00000030;
            uVar18 = (**(code **)(&UNK_0f45edd0 + uVar29 * 8))(&stack0x00000040,&stack0x000002a0);
          }
          uStack00000000000001d0 = (undefined4)uVar18;
          uStack00000000000001d4 = (undefined4)((ulong)uVar18 >> 0x20);
          _uStack00000000000001c8 = *(undefined8 *)(unaff_R13 + 0x140);
          in_stack_000002a0 = (long *)0x0;
          unaff_R12 = (long *)0x0;
          in_stack_000002b0 = (long *)0x0;
          unaff_RBX = *(undefined8 **)(unaff_R13 + 0x148);
          in_stack_00000018 = *(undefined8 **)(unaff_R13 + 0x150);
          if ((long)in_stack_00000018 - (long)unaff_RBX != 0) goto code_r0x0d2ccb46;
LAB_0d2ccd90:
          plVar8 = in_stack_00000140;
          plVar19 = in_stack_00000148;
          if (in_stack_00000140 != (long *)0x0) {
            for (; plVar8 != plVar19; plVar19 = plVar19 + -2) {
              plVar9 = (long *)plVar19[-1];
              if (plVar9 != (long *)0x0) {
                LOCK();
                plVar2 = plVar9 + 1;
                lVar26 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar26 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  func_0x0412c2d0(plVar9);
                }
              }
            }
            in_stack_00000148 = plVar8;
            func_0x0412a280(in_stack_00000140,(long)in_stack_00000150 - (long)in_stack_00000140);
          }
          uStack00000000000001da = unaff_R13[0x160] == 1;
          in_stack_00000140 = in_stack_000002a0;
          in_stack_00000148 = unaff_R12;
          in_stack_00000150 = in_stack_000002b0;
          if ((*unaff_R13 & 1) == 0) {
            in_stack_000002b8 = *(byte **)(unaff_R13 + 0x10);
            unaff_R12 = *(long **)unaff_R13;
            in_stack_000002b0 = *(long **)(unaff_R13 + 8);
          }
          else {
            func_0x0412e5e0(&stack0x000002a8,*(undefined8 *)(unaff_R13 + 0x10),
                            *(undefined8 *)(unaff_R13 + 8));
          }
          if (((ulong)unaff_R12 & 1) == 0) {
            if ((byte)((byte)unaff_R12 >> 1) != 0) goto LAB_0d2ccebd;
LAB_0d2ccfa0:
            uVar29 = 0;
          }
          else {
            if (in_stack_000002b0 == (long *)0x0) goto LAB_0d2ccfa0;
LAB_0d2ccebd:
            pbVar21 = &stack0x000002a9;
            if (((ulong)unaff_R12 & 1) != 0) {
              pbVar21 = in_stack_000002b8;
            }
            if (pbVar21 == (byte *)0x0) {
              uVar29 = 0;
            }
            else {
              if (*pbVar21 == 0) goto LAB_0d2ccfa0;
              uVar24 = func_0x0eee2e90(pbVar21);
              uVar29 = 0xcbf29ce484222325;
              if (uVar24 != 0) {
                if (7 < uVar24) {
                  uVar20 = uVar24 & 0xfffffffffffffff8;
                  do {
                    uVar29 = (((((((uVar29 * unaff_RBP ^ (ulong)*pbVar21) * unaff_RBP ^
                                  (ulong)pbVar21[1]) * unaff_RBP ^ (ulong)pbVar21[2]) * unaff_RBP ^
                                (ulong)pbVar21[3]) * unaff_RBP ^ (ulong)pbVar21[4]) * unaff_RBP ^
                              (ulong)pbVar21[5]) * unaff_RBP ^ (ulong)pbVar21[6]) * unaff_RBP ^
                             (ulong)pbVar21[7];
                    pbVar21 = pbVar21 + 8;
                    uVar20 = uVar20 - 8;
                  } while (uVar20 != 0);
                }
                if ((uVar24 & 7) != 0) {
                  uVar20 = 0;
                  do {
                    uVar29 = uVar29 * unaff_RBP ^ (ulong)pbVar21[uVar20];
                    uVar20 = uVar20 + 1;
                  } while (((uint)uVar24 & 7) != uVar20);
                }
              }
            }
          }
          if (((ulong)in_stack_00000120 & 1) != 0) {
            func_0x0412a280(in_stack_00000130,(ulong)in_stack_00000120 & 0xfffffffffffffffe);
          }
          in_stack_00000138 = 0;
          puVar28 = (undefined8 *)in_stack_00000008[1];
          in_stack_00000118 = uVar29;
          in_stack_00000120 = unaff_R12;
          in_stack_00000128 = in_stack_000002b0;
          in_stack_00000130 = in_stack_000002b8;
          if (puVar28 < (undefined8 *)in_stack_00000008[2]) {
            func_0x0d2e01b0(puVar28,&stack0x000000a8);
            uVar7 = in_stack_000001c0;
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
              (**(code **)(&UNK_0f45ee48 + (ulong)in_stack_000001c0 * 8))
                        (&stack0x000002a0,&stack0x00000198);
              *(uint *)(puVar28 + 0x23) = uVar7;
            }
            *(uint *)((long)puVar28 + 0x12f) =
                 CONCAT13(uStack00000000000001da,
                          CONCAT12(uStack00000000000001d9,
                                   CONCAT11(cStack00000000000001d8,uStack00000000000001d4._3_1_)));
            *(undefined4 *)(puVar28 + 0x24) = uStack00000000000001c8;
            *(undefined4 *)((long)puVar28 + 0x124) = uStack00000000000001cc;
            *(undefined4 *)(puVar28 + 0x25) = uStack00000000000001d0;
            *(undefined4 *)((long)puVar28 + 300) = uStack00000000000001d4;
            puVar28 = puVar28 + 0x27;
          }
          else {
            lVar26 = (long)puVar28 - *in_stack_00000008;
            uVar29 = (lVar26 >> 3) * 0x6f96f96f96f96f97 + 1;
            if (0xd20d20d20d20d2 < uVar29) goto LAB_0d2cd6ac;
            lVar17 = in_stack_00000008[2] - *in_stack_00000008 >> 3;
            uVar24 = lVar17 * -0x20d20d20d20d20d2;
            if (uVar29 < uVar24) {
              uVar29 = uVar24;
            }
            if (0x69069069069068 < (ulong)(lVar17 * 0x6f96f96f96f96f97)) {
              uVar29 = 0xd20d20d20d20d2;
            }
            if (uVar29 == 0) {
              lVar17 = 0;
            }
            else {
              if (0xd20d20d20d20d2 < uVar29) goto LAB_0d2cd6b1;
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x138);
              if (lVar17 == 0) {
                func_0x0eec74c0(uVar29 * 0x138,0);
                lVar17 = 0;
              }
            }
            puVar27 = (undefined8 *)(lVar26 + lVar17);
            func_0x0d2e01b0(puVar27,&stack0x000000a8);
            uVar7 = in_stack_000001c0;
            *puVar27 = &UNK_0f4604f0;
            puVar27[0x18] = in_stack_00000168;
            puVar27[0x16] = in_stack_00000158;
            puVar27[0x17] = in_stack_00000160;
            in_stack_00000158 = 0;
            in_stack_00000160 = 0;
            in_stack_00000168 = 0;
            puVar27[0x1b] = in_stack_00000180;
            *(undefined4 *)(puVar27 + 0x19) = uStack0000000000000170;
            *(undefined4 *)((long)puVar27 + 0xcc) = uStack0000000000000174;
            *(undefined4 *)(puVar27 + 0x1a) = uStack0000000000000178;
            *(undefined4 *)((long)puVar27 + 0xd4) = uStack000000000000017c;
            _uStack0000000000000170 = 0;
            _uStack0000000000000178 = 0;
            in_stack_00000180 = 0;
            *(byte *)(puVar27 + 0x1c) = in_stack_00000188;
            puVar27[0x1d] = &UNK_0f45f520;
            *(undefined1 *)(puVar27 + 0x1e) = 0;
            *(undefined4 *)(puVar27 + 0x23) = 0xffffffff;
            if ((ulong)in_stack_000001c0 != 0xffffffff) {
              in_stack_000001e0 = puVar27 + 0x1e;
              (**(code **)(&UNK_0f45ee48 + (ulong)in_stack_000001c0 * 8))
                        (&stack0x000001e0,&stack0x00000198);
              *(uint *)(puVar27 + 0x23) = uVar7;
            }
            *(uint *)((long)puVar27 + 0x12f) =
                 CONCAT13(uStack00000000000001da,
                          CONCAT12(uStack00000000000001d9,
                                   CONCAT11(cStack00000000000001d8,uStack00000000000001d4._3_1_)));
            *(undefined4 *)(puVar27 + 0x24) = uStack00000000000001c8;
            *(undefined4 *)((long)puVar27 + 0x124) = uStack00000000000001cc;
            *(undefined4 *)(puVar27 + 0x25) = uStack00000000000001d0;
            *(undefined4 *)((long)puVar27 + 300) = uStack00000000000001d4;
            puVar28 = puVar27 + 0x27;
            puVar22 = (undefined8 *)*in_stack_00000008;
            puVar10 = (undefined8 *)in_stack_00000008[1];
            lVar26 = (long)puVar27 - ((long)puVar10 - (long)puVar22);
            if (puVar10 != puVar22) {
              lVar25 = 0;
              do {
                func_0x0d2e01b0(lVar26 + lVar25,(long)puVar22 + lVar25);
                *(undefined **)(lVar26 + lVar25) = &UNK_0f4604f0;
                lVar16 = lVar26 + lVar25;
                if ((*(byte *)((long)puVar22 + lVar25 + 0xb0) & 1) == 0) {
                  *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)((long)puVar22 + lVar25 + 0xc0);
                  uVar12 = *(undefined4 *)((long)puVar22 + lVar25 + 0xb4);
                  uVar13 = *(undefined4 *)((long)puVar22 + lVar25 + 0xb8);
                  uVar14 = *(undefined4 *)((long)puVar22 + lVar25 + 0xbc);
                  *(undefined4 *)(lVar16 + 0xb0) = *(undefined4 *)((long)puVar22 + lVar25 + 0xb0);
                  *(undefined4 *)(lVar16 + 0xb4) = uVar12;
                  *(undefined4 *)(lVar16 + 0xb8) = uVar13;
                  *(undefined4 *)(lVar16 + 0xbc) = uVar14;
                }
                else {
                  func_0x0412e5e0((undefined4 *)(lVar16 + 0xb0),
                                  *(undefined8 *)((long)puVar22 + lVar25 + 0xc0),
                                  *(undefined8 *)((long)puVar22 + lVar25 + 0xb8));
                }
                lVar16 = lVar26 + lVar25;
                if ((*(byte *)((long)puVar22 + lVar25 + 200) & 1) == 0) {
                  *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)((long)puVar22 + lVar25 + 0xd8);
                  uVar12 = *(undefined4 *)((long)puVar22 + lVar25 + 0xcc);
                  uVar13 = *(undefined4 *)((long)puVar22 + lVar25 + 0xd0);
                  uVar14 = *(undefined4 *)((long)puVar22 + lVar25 + 0xd4);
                  *(undefined4 *)(lVar16 + 200) = *(undefined4 *)((long)puVar22 + lVar25 + 200);
                  *(undefined4 *)(lVar16 + 0xcc) = uVar12;
                  *(undefined4 *)(lVar16 + 0xd0) = uVar13;
                  *(undefined4 *)(lVar16 + 0xd4) = uVar14;
                }
                else {
                  func_0x0412e5e0((undefined4 *)(lVar16 + 200),
                                  *(undefined8 *)((long)puVar22 + lVar25 + 0xd8),
                                  *(undefined8 *)((long)puVar22 + lVar25 + 0xd0));
                }
                *(undefined1 *)(lVar26 + 0xe0 + lVar25) =
                     *(undefined1 *)((long)puVar22 + lVar25 + 0xe0);
                *(undefined **)(lVar26 + 0xe8 + lVar25) = &UNK_0f45f520;
                *(undefined1 *)(lVar26 + 0xf0 + lVar25) = 0;
                *(undefined4 *)(lVar26 + 0x118 + lVar25) = 0xffffffff;
                uVar7 = *(uint *)((long)puVar22 + lVar25 + 0x118);
                if ((ulong)uVar7 != 0xffffffff) {
                  in_stack_000001e0 = (undefined8 *)(lVar26 + lVar25 + 0xf0);
                  (**(code **)(&UNK_0f45ee38 + (ulong)uVar7 * 8))
                            (&stack0x000001e0,(long)puVar22 + lVar25 + 0xf0);
                  *(uint *)(lVar26 + 0x118 + lVar25) = uVar7;
                }
                unaff_R13 = in_stack_00000038;
                *(undefined4 *)(lVar26 + 0x12f + lVar25) =
                     *(undefined4 *)((long)puVar22 + lVar25 + 0x12f);
                puVar3 = (undefined4 *)((long)puVar22 + lVar25 + 0x120);
                uVar12 = puVar3[1];
                uVar13 = puVar3[2];
                uVar14 = puVar3[3];
                puVar4 = (undefined4 *)(lVar26 + 0x120 + lVar25);
                *puVar4 = *puVar3;
                puVar4[1] = uVar12;
                puVar4[2] = uVar13;
                puVar4[3] = uVar14;
                lVar16 = lVar25 + 0x138;
                lVar25 = lVar25 + 0x138;
              } while ((undefined8 *)((long)puVar22 + lVar16) != puVar10);
              do {
                (**(code **)*puVar22)(puVar22);
                puVar22 = puVar22 + 0x27;
              } while (puVar22 != puVar10);
              puVar22 = (undefined8 *)*in_stack_00000008;
            }
            *in_stack_00000008 = lVar26;
            in_stack_00000008[1] = (long)puVar28;
            lVar26 = in_stack_00000008[2];
            in_stack_00000008[2] = uVar29 * 0x138 + lVar17;
            if (puVar22 != (undefined8 *)0x0) {
              func_0x0412a280(puVar22,lVar26 - (long)puVar22);
            }
          }
          pbVar21 = in_stack_00000090;
          in_stack_00000008[1] = (long)puVar28;
          in_stack_000000a8 = &UNK_0f4604f0;
          in_stack_00000190 = &UNK_0f45f520;
          if ((ulong)in_stack_000001c0 != 0xffffffff) {
            (**(code **)(&UNK_0f45ed90 + (ulong)in_stack_000001c0 * 8))
                      (&stack0x000002a0,&stack0x00000198);
          }
          in_stack_000001c0 = 0xffffffff;
          if ((_uStack0000000000000170 & 1) != 0) {
            func_0x0412a280(in_stack_00000180,_uStack0000000000000170 & 0xfffffffffffffffe);
          }
          if ((in_stack_00000158 & 1) != 0) {
            func_0x0412a280(in_stack_00000168,in_stack_00000158 & 0xfffffffffffffffe);
          }
          func_0x0d2de2e0(&stack0x000000a8);
        }
        unaff_R13 = unaff_R13 + 0x168;
        if (unaff_R13 == pbVar21) {
          return in_stack_00000008;
        }
      } while( true );
    }
    in_stack_00000030 = &stack0x000000a0;
    (**(code **)(&UNK_0f45ede0 + (ulong)*(uint *)(unaff_RBX + 6) * 8))(&stack0x00000030);
    unaff_R14 = in_stack_000002b0;
    in_stack_000002a0 = plVar19;
  } while (unaff_R12 < in_stack_000002b0);
  lVar26 = (long)unaff_R12 - (long)plVar19;
  uVar29 = (lVar26 >> 4) + 1;
  if (0xfffffffffffffff < uVar29) {
    func_0x0d2de6d0();
LAB_0d2cd63d:
    func_0x04882eb0();
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
    uVar18 = func_0x0d2e0140();
    func_0x0d2cd8d0(in_stack_00000008);
    uVar18 = func_0x0eee2d70(uVar18);
    func_0x049d2400(&stack0x00000040);
    func_0x05472b20(&stack0x000001e0);
    func_0x0d2c81e0(&stack0x000000a8);
    func_0x0d2cd8d0(in_stack_00000008);
    func_0x0eee2d70(uVar18);
    pcVar11 = (code *)swi(3);
    plVar19 = (long *)(*pcVar11)();
    return plVar19;
  }
  unaff_R14 = (long *)((long)in_stack_000002b0 - (long)plVar19);
  uVar24 = (long)unaff_R14 >> 3;
  if ((ulong)((long)unaff_R14 >> 3) <= uVar29) {
    uVar24 = uVar29;
  }
  if ((long *)0x7fffffffffffffef < unaff_R14) {
    uVar24 = 0xfffffffffffffff;
  }
  if (0xfffffffffffffff < uVar24) goto LAB_0d2cd63d;
  lVar25 = uVar24 * 0x10;
  lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
  if (lVar17 == 0) {
    func_0x0eec74c0(lVar25,0);
  }
  in_stack_000002b0 = (long *)(lVar25 + lVar17);
  *(undefined8 *)(lVar17 + lVar26) = _uStack0000000000000040;
  ((undefined8 *)(lVar17 + lVar26))[1] = _uStack0000000000000048;
  _uStack0000000000000040 = (undefined8 *)0x0;
  _uStack0000000000000048 = (long *)0x0;
  unaff_R15 = (long *)(lVar17 + lVar26 + 0x10);
  in_stack_000002a0 = (long *)(lVar17 + lVar26 + (lVar26 >> 4) * -0x10);
  func_0x0eee2f00(in_stack_000002a0,plVar19,lVar26);
  unaff_R12 = unaff_R15;
  if (plVar19 == (long *)0x0) {
    unaff_RBP = 0x100000001b3;
    unaff_R13 = in_stack_00000038;
  }
  else {
    func_0x0412a280(plVar19);
    unaff_R14 = _uStack0000000000000048;
    unaff_R13 = in_stack_00000038;
    unaff_RBP = 0x100000001b3;
    if (_uStack0000000000000048 != (long *)0x0) {
      LOCK();
      plVar19 = _uStack0000000000000048 + 1;
      lVar26 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*_uStack0000000000000048 + 0x10))(_uStack0000000000000048);
        func_0x0412c2d0(unaff_R14);
      }
    }
  }
  goto LAB_0d2ccbc6;
code_r0x0d2ccb46:
  lVar26 = (long)in_stack_00000018 - (long)unaff_RBX >> 3;
  if (0xfffffffffffffff < (ulong)(lVar26 * 0x6db6db6db6db6db7)) goto LAB_0d2cd6a2;
  unaff_R15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
  if (unaff_R15 == (long *)0x0) {
    func_0x0eec74c0(lVar26 * -0x2492492492492490,0);
  }
  unaff_R14 = unaff_R15 + lVar26 * -0x492492492492492;
  plVar19 = unaff_R15;
  unaff_R12 = unaff_R15;
  in_stack_000002b0 = unaff_R14;
  goto LAB_0d2ccbd5;
}


