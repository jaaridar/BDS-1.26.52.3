/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe030f60
 * Label: string:minecraft:biome
 * Body:  [[0e030f60, 0e0315b6] [0e0315c0, 0e031742] [0e031750, 0e031785] [0e031790, 0e031884] [0e031890, 0e031a31] [0e031a40, 0e031b48] [0e031b50, 0e031ba8] [0e031bb0, 0e031bc6] [0e031bd0, 0e031c16] [0e031c20, 0e031e56] [0e031e60, 0e03283e] [0e032840, 0e032a31] [0e032a40, 0e032ca3] [0e032cb0, 0e032f9c] [0e032fa0, 0e033292] [0e0332a0, 0e033435] [0e033441, 0e033452] [0e033679, 0e0336ab] [0e0336eb, 0e033719]]
 * Ghidra: FUN_0e030f60
 */


/* WARNING: Removing unreachable block (ram,0x0e0322ba) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e030f60(void)

{
  byte *pbVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  long in_RAX;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  int in_ECX;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint *puVar31;
  char unaff_BL;
  byte *pbVar32;
  uint uVar33;
  undefined8 *unaff_R12;
  long *plVar34;
  ulong *unaff_R13;
  long *unaff_R14;
  uint *puVar35;
  ulong unaff_R15;
  long *plVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 uStack0000000000000008;
  undefined1 uStack0000000000000009;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint *in_stack_00000038;
  char cStack0000000000000040;
  undefined7 uStack0000000000000041;
  long *in_stack_00000050;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined *in_stack_00000098;
  code *in_stack_000000a0;
  int iStack00000000000000a8;
  undefined1 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined *in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000100;
  ulong in_stack_00000108;
  long in_stack_00000110;
  uint in_stack_00000118;
  ulong in_stack_00000120;
  long in_stack_00000128;
  ulong in_stack_00000130;
  undefined *in_stack_00000138;
  undefined *in_stack_00000140;
  ulong in_stack_00000148;
  ulong in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined4 in_stack_00000160;
  byte bStack0000000000000164;
  undefined1 in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  byte bStack000000000000018c;
  undefined1 in_stack_00000190;
  long *in_stack_00000198;
  ulong in_stack_000001a0;
  undefined8 *in_stack_000001a8;
  code *in_stack_000001b0;
  undefined4 uStack00000000000001b8;
  char cStack00000000000001bc;
  long in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined *in_stack_000001d0;
  long *plStack_8;
  
  *(int *)(in_RAX + -0x73) = *(int *)(in_RAX + -0x73) + in_ECX;
  plStack_8 = (long *)(**(code **)(in_RAX + 0x10))();
  if (plStack_8 == (long *)0x0) {
    func_0x0eec74c0(0x28);
    unaff_R14 = in_stack_00000050;
  }
  plStack_8[2] = 0;
  plStack_8[3] = 0;
  *plStack_8 = 0;
  plStack_8[1] = 0;
  *(undefined4 *)(plStack_8 + 4) = 0x3f800000;
  *unaff_R12 = plStack_8;
  unaff_R12[7] = &UNK_0e034db0;
  if (unaff_BL == '\0') {
    uVar20 = 0;
  }
  else {
    uVar20 = unaff_R12[6];
  }
  unaff_R12[6] = uVar20;
  in_stack_00000140 = &UNK_0f012348;
  if (plStack_8 == (long *)0x0) {
    uVar20 = unaff_R12[5];
    lVar14 = unaff_R12[6];
    if (lVar14 == 0) {
      (*(code *)&UNK_0e034db0)(0);
      lVar14 = unaff_R12[6];
    }
    plStack_8 = (long *)func_0x0488e200(uVar20,lVar14,0x808c6b19);
  }
  uVar12 = *unaff_R13;
  uVar13 = unaff_R13[1];
  plVar17 = (long *)unaff_R13[2];
  in_stack_00000148 = uVar12;
  in_stack_00000150 = uVar13;
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)0x0;
    in_stack_00000158 = (undefined8 *)0x0;
  }
  else {
    in_stack_00000158 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,0);
    uVar12 = *unaff_R13;
    uVar13 = unaff_R13[1];
    plVar17 = (long *)unaff_R13[2];
  }
  in_stack_00000160 = (undefined4)unaff_R13[3];
  bStack0000000000000164 = *(byte *)((long)unaff_R13 + 0x1c);
  in_stack_00000168 = 1;
  in_stack_00000138 = &UNK_0f4a9d48;
  in_stack_00000170 = uVar12;
  in_stack_00000178 = uVar13;
  if (plVar17 == (long *)0x0) {
    in_stack_00000180 = 0;
  }
  else {
    in_stack_00000180 = (**(code **)(*plVar17 + 0x30))(plVar17,1);
  }
  in_stack_00000188 = (undefined4)unaff_R13[3];
  bStack000000000000018c = *(byte *)((long)unaff_R13 + 0x1c);
  in_stack_00000190 = 1;
  bVar9 = (**(code **)(*unaff_R14 + 0x18))(unaff_R14);
  if (bVar9 == 1) {
    uVar12 = (**(code **)(*unaff_R14 + 0xa8))(unaff_R14);
    if (((long *)unaff_R13[2] != (long *)0x0) &&
       (uVar13 = (**(code **)(*(long *)unaff_R13[2] + 0x10))(), uVar13 < uVar12)) {
      in_stack_00000120 = 0x34000001208ec0;
      func_0x0ed5ffe0(*unaff_R13,0x40,&stack0x00000120);
      if ((in_stack_00000120 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_00000120 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    func_0x0ed6d600(&stack0x00000110,*unaff_R13);
    if (uVar12 == 0) {
      return;
    }
    in_stack_000000f8 = plStack_8 + 2;
    in_stack_000000d0 = 0;
    in_stack_000000c8 = uVar12;
LAB_0e0312a8:
    uVar33 = in_stack_00000118;
    lVar14 = in_stack_00000110;
    if (in_stack_00000118 <= *(uint *)(in_stack_00000110 + 0x2b0) &&
        *(uint *)(in_stack_00000110 + 0x2b0) != 0xffffffff) {
      return;
    }
    auVar40 = (**(code **)(*in_stack_00000050 + 0xc0))();
    puVar18 = in_stack_00000158;
    _in_stack_00000128 = auVar40;
    if (in_stack_00000158 != (undefined8 *)0x0) {
      lVar14 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lVar14 == 0) {
        func_0x048b0de0(&stack0x00000088,&stack0x00000008);
        _DAT_0f54fd90 = uStack0000000000000088;
        uRam000000000f54fd94 = uStack000000000000008c;
        uVar6 = uStack0000000000000090;
        uVar7 = uStack0000000000000094;
        _uStack0000000000000088 = (long *)0x0;
        _uStack0000000000000090 = (long *)0x0;
        plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar6;
        uRam000000000f54fd9c = uVar7;
        if (plVar17 != (long *)0x0) {
          LOCK();
          plVar19 = plVar17 + 1;
          lVar14 = *plVar19;
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
          }
        }
        plVar17 = _uStack0000000000000090;
        if (_uStack0000000000000090 != (long *)0x0) {
          LOCK();
          plVar19 = _uStack0000000000000090 + 1;
          lVar14 = *plVar19;
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*_uStack0000000000000090 + 0x10))(_uStack0000000000000090);
            func_0x0412c2d0(plVar17);
          }
        }
        lVar14 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        uVar12 = in_stack_000000c8;
      }
      in_stack_000001a8 = (undefined8 *)&UNK_05ea5bd0;
      uStack00000000000001b8 = 0x989eedf9;
      in_stack_000001b0 = (code *)0x0;
      cStack00000000000001bc = '\x04';
      in_stack_00000198 = &stack0x00000128;
      in_stack_000001c8 = 0;
      in_stack_000001d0 = &UNK_05ea5bb0;
      in_stack_000001c0 = lVar14;
      (**(code **)*puVar18)(puVar18,&stack0x00000198,in_stack_00000148);
      lVar14 = in_stack_00000110;
      uVar33 = in_stack_00000118;
      if (in_stack_000001b0 != (code *)0x0) {
        (*in_stack_000001b0)(&stack0x00000198);
        lVar14 = in_stack_00000110;
        uVar33 = in_stack_00000118;
      }
    }
    uVar13 = in_stack_00000130;
    lVar25 = in_stack_00000128;
    if ((*(uint *)(lVar14 + 0x2b0) != 0xffffffff) && (uVar33 <= *(uint *)(lVar14 + 0x2b0)))
    goto LAB_0e03129c;
    uVar12 = *unaff_R13;
    in_stack_00000080 = 0;
    if (in_stack_00000128 == 0) {
      uVar13 = (in_stack_00000130 & 0x7f) << 0x30;
      puVar15 = unaff_R13;
    }
    else {
      lVar14 = in_stack_00000130 + 9;
      puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && puVar15 == (ulong *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *puVar15 = uVar13;
      func_0x0eee2f00(puVar15 + 1,lVar25,uVar13);
      *(byte *)((long)puVar15 + uVar13 + 8) = 0;
      uVar13 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    in_stack_00000080 = uVar13;
    puVar16 = (uint *)func_0x0ed6d180(uVar12,&stack0x00000080,0);
    if ((in_stack_00000080 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000080 & 0xff00ffffffffffff) - 8);
    }
    uVar12 = in_stack_00000130;
    lVar14 = in_stack_00000128;
    in_stack_00000080 = 0;
    in_stack_00000038 = puVar16;
    if (in_stack_00000130 < 0xfffffffffffffff8) {
      if (in_stack_00000130 < 0x17) {
        _uStack0000000000000008 =
             (uint *)CONCAT71(_uStack0000000000000009,in_stack_00000128._8_1_ * '\x02');
        uVar26 = (long)&stack0x00000008 + 1;
        if (in_stack_00000130 != 0) goto LAB_0e031607;
      }
      else {
        uVar13 = (in_stack_00000130 | 7) + 1;
        if ((in_stack_00000130 | 7) == 0x17) {
          uVar13 = 0x1a;
        }
        uVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (uVar26 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        _uStack0000000000000008 = (uint *)(uVar13 | 1);
        _uStack0000000000000010 = uVar12;
        _uStack0000000000000018 = uVar26;
LAB_0e031607:
        func_0x0eee2ee0(uVar26,lVar14,uVar12);
      }
      *(undefined1 *)(uVar26 + uVar12) = 0;
      in_stack_000001a8 = (undefined8 *)0x0;
      in_stack_000001b0 = (code *)0x0;
      in_stack_00000198 = (long *)0x0;
      in_stack_000001a0 = 0;
      uStack00000000000001b8 = 0x3f800000;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2a8);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x2a8,0);
      }
      _uStack0000000000000090 = plStack_8;
      in_stack_00000098 = (undefined *)0x0;
      pbVar1 = (byte *)(plVar17 + 3);
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      uVar5 = uStack0000000000000008;
      _uStack0000000000000088 = plVar17;
      if (((ulong)_uStack0000000000000008 & 1) == 0) {
        plVar17[5] = _uStack0000000000000018;
        *(undefined4 *)pbVar1 = _uStack0000000000000008;
        *(undefined4 *)((long)plVar17 + 0x1c) = uStack000000000000000c;
        *(undefined4 *)(plVar17 + 4) = uStack0000000000000010;
        *(undefined4 *)((long)plVar17 + 0x24) = uStack0000000000000014;
      }
      else {
        func_0x0412e5e0(pbVar1,_uStack0000000000000018,_uStack0000000000000010);
      }
      plVar17[6] = 0;
      bVar9 = *(byte *)(plVar17 + 3);
      if ((bVar9 & 1) == 0) {
        if (bVar9 >> 1 != 0) goto LAB_0e0317a2;
LAB_0e031890:
        uVar12 = 0;
      }
      else {
        if (plVar17[4] == 0) goto LAB_0e031890;
LAB_0e0317a2:
        if ((bVar9 & 1) == 0) {
          pbVar32 = (byte *)((long)plVar17 + 0x19);
          if (pbVar32 != (byte *)0x0) goto LAB_0e0317c1;
          goto LAB_0e031890;
        }
        pbVar32 = (byte *)plVar17[5];
        if (pbVar32 == (byte *)0x0) goto LAB_0e031890;
LAB_0e0317c1:
        if (*pbVar32 == 0) goto LAB_0e031890;
        uVar13 = func_0x0eee2e90(pbVar32);
        uVar12 = 0xcbf29ce484222325;
        if (uVar13 != 0) {
          if (7 < uVar13) {
            uVar26 = uVar13 & 0xfffffffffffffff8;
            do {
              uVar12 = (((((((uVar12 * 0x100000001b3 ^ (ulong)*pbVar32) * 0x100000001b3 ^
                            (ulong)pbVar32[1]) * 0x100000001b3 ^ (ulong)pbVar32[2]) * 0x100000001b3
                          ^ (ulong)pbVar32[3]) * 0x100000001b3 ^ (ulong)pbVar32[4]) * 0x100000001b3
                        ^ (ulong)pbVar32[5]) * 0x100000001b3 ^ (ulong)pbVar32[6]) * 0x100000001b3 ^
                       (ulong)pbVar32[7];
              pbVar32 = pbVar32 + 8;
              uVar26 = uVar26 - 8;
            } while (uVar26 != 0);
          }
          if ((uVar13 & 7) != 0) {
            uVar26 = 0;
            do {
              uVar12 = uVar12 * 0x100000001b3 ^ (ulong)pbVar32[uVar26];
              uVar26 = uVar26 + 1;
            } while (((uint)uVar13 & 7) != uVar26);
          }
        }
      }
      _cStack0000000000000040 = CONCAT71(uStack0000000000000041,uVar5) & 0xffffffffffffff01;
      plVar17[2] = uVar12;
      plVar19 = plVar17 + 7;
      func_0x0e034a70(plVar19,&stack0x00000198);
      in_stack_00000098 = (undefined *)CONCAT71(in_stack_00000098._1_7_,1);
      uVar12 = plVar17[2];
      plVar17[1] = uVar12;
      uVar13 = plStack_8[1];
      if (uVar13 != 0) {
        uVar26 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
        uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar26 >> 0x38 < 2) {
          uVar27 = uVar13 - 1 & uVar12;
        }
        else {
          uVar27 = uVar12;
          if (uVar13 <= uVar12) {
            if ((uVar12 | uVar13) >> 0x20 == 0) {
              uVar27 = (uVar12 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar27 = uVar12 % uVar13;
            }
          }
        }
        puVar18 = *(undefined8 **)(*plStack_8 + uVar27 * 8);
        if ((puVar18 != (undefined8 *)0x0) && (plVar34 = (long *)*puVar18, plVar34 != (long *)0x0))
        {
          plVar2 = plVar17 + 2;
          if ((byte)(uVar26 >> 0x38) < 2) {
            uVar26 = uVar13 - 1;
            in_stack_000000f0 = uVar26;
            do {
              if (plVar34[1] == uVar12) {
                if (plVar34[2] == uVar12) {
                  plVar36 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar2) && ((long *)plVar17[6] == plVar36))
                  goto LAB_0e032070;
                  bVar9 = *(byte *)(plVar34 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar30 = (ulong)(bVar9 >> 1);
                    uVar24 = (ulong)*(byte *)(plVar17 + 3);
                    if ((*(byte *)(plVar17 + 3) & 1) != 0) goto LAB_0e031b68;
LAB_0e031b3e:
                    if (uVar30 != uVar24 >> 1) goto LAB_0e031ae8;
                  }
                  else {
                    uVar30 = plVar34[4];
                    uVar24 = (ulong)*(byte *)(plVar17 + 3);
                    if ((*(byte *)(plVar17 + 3) & 1) == 0) goto LAB_0e031b3e;
LAB_0e031b68:
                    if (uVar30 != plVar17[4]) goto LAB_0e031ae8;
                  }
                  if ((bVar9 & 1) == 0) {
                    lVar14 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar14 = plVar34[5];
                  }
                  lVar25 = (long)plVar17 + 0x19;
                  if ((uVar24 & 1) != 0) {
                    lVar25 = plVar17[5];
                  }
                  iVar11 = func_0x0eee3000(lVar14,lVar25);
                  uVar26 = in_stack_000000f0;
                  if (iVar11 == 0) goto LAB_0e0320de;
                }
LAB_0e031ae8:
                plVar34[6] = 0;
              }
              else if ((plVar34[1] & uVar26) != uVar27) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar26 = plVar34[1];
              if (uVar26 == uVar12) {
                if (plVar34[2] == uVar12) {
                  plVar36 = plVar34 + 2;
                  if (((long *)plVar34[6] == plVar2) && ((long *)plVar17[6] == plVar36))
                  goto LAB_0e032070;
                  bVar9 = *(byte *)(plVar34 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar26 = (ulong)(bVar9 >> 1);
                    uVar30 = (ulong)*(byte *)(plVar17 + 3);
                    if ((*(byte *)(plVar17 + 3) & 1) != 0) goto LAB_0e031a75;
LAB_0e031a27:
                    if (uVar26 != uVar30 >> 1) goto LAB_0e0319d1;
                  }
                  else {
                    uVar26 = plVar34[4];
                    uVar30 = (ulong)*(byte *)(plVar17 + 3);
                    if ((*(byte *)(plVar17 + 3) & 1) == 0) goto LAB_0e031a27;
LAB_0e031a75:
                    if (uVar26 != plVar17[4]) goto LAB_0e0319d1;
                  }
                  if ((bVar9 & 1) == 0) {
                    lVar14 = (long)plVar34 + 0x19;
                  }
                  else {
                    lVar14 = plVar34[5];
                  }
                  lVar25 = (long)plVar17 + 0x19;
                  if ((uVar30 & 1) != 0) {
                    lVar25 = plVar17[5];
                  }
                  iVar11 = func_0x0eee3000(lVar14,lVar25);
                  if (iVar11 == 0) goto LAB_0e0320de;
                }
LAB_0e0319d1:
                plVar34[6] = 0;
              }
              else {
                if (uVar13 <= uVar26) {
                  if ((uVar26 | uVar13) >> 0x20 == 0) {
                    if ((uVar26 & 0xffffffff) % (uVar13 & 0xffffffff) == uVar27) goto LAB_0e0319da;
                    break;
                  }
                  uVar26 = uVar26 % uVar13;
                }
                if (uVar26 != uVar27) break;
              }
LAB_0e0319da:
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
      }
      if ((long)uVar13 < 0) {
        fVar39 = (float)uVar13;
        fVar38 = *(float *)(plStack_8 + 4);
        if (uVar13 == 0) goto LAB_0e031c41;
LAB_0e031c34:
        if (fVar39 * fVar38 < (float)(plStack_8[3] + 1)) goto LAB_0e031c41;
        goto LAB_0e031de0;
      }
      fVar39 = (float)(long)uVar13;
      fVar38 = *(float *)(plStack_8 + 4);
      if (uVar13 != 0) goto LAB_0e031c34;
LAB_0e031c41:
      uVar12 = 1;
      if (2 < uVar13) {
        uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar12 = uVar13 * 2 | uVar12;
      fVar38 = (float)func_0x0eee3ab0((float)(plStack_8[3] + 1) / fVar38);
      uVar26 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
      if (uVar26 < uVar12) {
        uVar26 = uVar12;
      }
      uVar12 = 2;
      if ((uVar26 == 1) || (uVar12 = uVar26, (uVar26 & uVar26 - 1) == 0)) {
        bVar37 = uVar12 < uVar13;
        if (uVar12 <= uVar13) goto LAB_0e031cd4;
LAB_0e031cae:
        func_0x0e02f680(plStack_8,uVar12);
      }
      else {
        uVar12 = func_0x0412c3f0();
        uVar13 = plStack_8[1];
        bVar37 = uVar12 < uVar13;
        if (uVar13 < uVar12) goto LAB_0e031cae;
LAB_0e031cd4:
        if (bVar37) {
          fVar38 = (float)func_0x0eee3ab0((float)(ulong)plStack_8[3] / *(float *)(plStack_8 + 4));
          uVar26 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
          if ((uVar13 < 3) ||
             (uVar27 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
             uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333),
             1 < (byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar26 = func_0x0412c3f0(uVar26);
          }
          else if (1 < uVar26) {
            lVar14 = 0x3f;
            if (uVar26 - 1 != 0) {
              for (; uVar26 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar26 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
          }
          if (uVar12 <= uVar26) {
            uVar12 = uVar26;
          }
          if (uVar12 < uVar13) goto LAB_0e031cae;
        }
      }
LAB_0e031de0:
      uVar12 = plStack_8[1];
      uVar13 = plVar17[1];
      uVar26 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
      uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar26 >> 0x38 < 2) {
        uVar13 = uVar13 & uVar12 - 1;
      }
      else if (uVar12 <= uVar13) {
        if ((uVar13 | uVar12) >> 0x20 == 0) {
          uVar13 = (uVar13 & 0xffffffff) % (uVar12 & 0xffffffff);
        }
        else {
          uVar13 = uVar13 % uVar12;
        }
      }
      lVar14 = *plStack_8;
      plVar19 = *(long **)(lVar14 + uVar13 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar17 = *in_stack_000000f8;
        *in_stack_000000f8 = (long)plVar17;
        *(long **)(lVar14 + uVar13 * 8) = in_stack_000000f8;
        if (*plVar17 != 0) {
          uVar13 = *(ulong *)(*plVar17 + 8);
          if ((byte)(uVar26 >> 0x38) < 2) {
            *(long **)(lVar14 + (uVar13 & uVar12 - 1) * 8) = plVar17;
          }
          else {
            if (uVar12 <= uVar13) {
              if ((uVar13 | uVar12) >> 0x20 == 0) {
                *(long **)(lVar14 + ((uVar13 & 0xffffffff) % (uVar12 & 0xffffffff)) * 8) = plVar17;
                goto LAB_0e031ead;
              }
              uVar13 = uVar13 % uVar12;
            }
            *(long **)(lVar14 + uVar13 * 8) = plVar17;
          }
        }
      }
      else {
        *plVar17 = *plVar19;
        *plVar19 = (long)plVar17;
      }
LAB_0e031ead:
      plStack_8[3] = plStack_8[3] + 1;
      uVar12 = (ulong)_uStack0000000000000008 & 1;
      func_0x0dec9d00(&stack0x00000198);
      plVar34 = plVar17;
      if (uVar12 != 0) goto LAB_0e031ed0;
      goto LAB_0e031ee3;
    }
    func_0x04882e30();
    unaff_R13 = puVar15;
    goto LAB_0e0333e4;
  }
  if ((bVar9 & 2) == 0) {
    uVar20 = unaff_R12[5];
    lVar14 = func_0x048b2190(uVar20);
    plVar17 = *(long **)(lVar14 + 0x78);
    if (plVar17 == (long *)0x0) {
LAB_0e031204:
      if (*(code **)(lVar14 + 0x30) == (code *)0x0) {
        in_stack_00000098 = &UNK_0488e0b0;
        iStack00000000000000a8 = 0x48b5725f;
        in_stack_000000a0 = (code *)0x0;
        uStack00000000000000ac = 0;
        _uStack0000000000000088 = (long *)0x0;
        in_stack_000000b8 = 0;
        in_stack_000000c0 = (undefined *)0x0;
        in_stack_000000b0 = uVar20;
        goto LAB_0e032319;
      }
      (**(code **)(lVar14 + 0x30))(&stack0x00000088,uVar20);
      if (iStack00000000000000a8 != -0x3677df2f) goto LAB_0e032319;
LAB_0e03237e:
      plVar17 = (long *)&UNK_0133e465;
      uVar12 = func_0x0eee2e90(&UNK_0133e465);
    }
    else {
      lVar25 = *plVar17;
      if (lVar25 == 0 || lVar25 == plVar17[1]) goto LAB_0e031204;
      lVar22 = 0;
      bVar37 = false;
      do {
        lVar23 = lVar25;
        if (lVar22 != 0) {
          lVar23 = lVar22;
        }
        bVar4 = lVar22 != 0;
        if (*(long *)(lVar25 + 8) != 0) {
          lVar23 = lVar22;
          bVar4 = bVar37;
        }
        lVar25 = lVar25 + 0x20;
        lVar22 = lVar23;
        bVar37 = bVar4;
      } while (lVar25 != plVar17[1]);
      if (bVar4 || lVar23 == 0) goto LAB_0e031204;
      (**(code **)(lVar23 + 0x18))(&stack0x00000088,uVar20,0);
      if (iStack00000000000000a8 == -0x3677df2f) goto LAB_0e03237e;
LAB_0e032319:
      func_0x05ea6440(&stack0x00000198,&stack0x00000088);
      puVar8 = in_stack_000001d0;
      if ((in_stack_000001d0 != (undefined *)0x0) && ((byte)(cStack00000000000001bc - 1U) < 2)) {
        func_0x048b0900(&stack0x00000088,&stack0x00000198);
      }
      if (in_stack_000001b0 != (code *)0x0) {
        (*in_stack_000001b0)(&stack0x00000198);
      }
      if (puVar8 != (undefined *)0x0) goto LAB_0e03237e;
      plVar17 = (long *)&UNK_01411d3a;
      uVar12 = func_0x0eee2e90(&UNK_01411d3a);
    }
    if (uVar12 < 0xfffffffffffffff8) {
      if (uVar12 < 0x17) {
        _uStack0000000000000009 = (undefined7)((ulong)_uStack0000000000000008 >> 8);
        _uStack0000000000000008 = (uint *)CONCAT71(_uStack0000000000000009,(char)uVar12 * '\x02');
        uVar26 = (long)&stack0x00000008 + 1;
        if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack0000000000000009 = 0;
          goto joined_r0x0e032430;
        }
      }
      else {
        uVar13 = 0x1a;
        if ((uVar12 | 7) != 0x17) {
          uVar13 = (uVar12 | 7) + 1;
        }
        uVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (uVar26 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        _uStack0000000000000008 = (uint *)(uVar13 | 1);
        _uStack0000000000000010 = uVar12;
        _uStack0000000000000018 = uVar26;
      }
      func_0x0eee2f00(uVar26,plVar17,uVar12);
      *(undefined1 *)(uVar26 + uVar12) = 0;
joined_r0x0e032430:
      if (in_stack_000000a0 != (code *)0x0) {
        (*in_stack_000000a0)(&stack0x00000088);
      }
      puVar16 = _uStack0000000000000008;
      uVar13 = (ulong)_uStack0000000000000008 & 0xff;
      uVar26 = _uStack0000000000000010;
      if (((ulong)_uStack0000000000000008 & 1) == 0) {
        uVar26 = (ulong)_uStack0000000000000008 >> 1 & 0x7f;
      }
      uVar12 = uVar26 + 0xc;
      if (uVar12 < 0xfffffffffffffff8) {
        uVar13 = *unaff_R13;
        if (uVar12 < 0x17) {
          in_stack_000001a0 = 0;
          in_stack_000001a8 = (undefined8 *)0x0;
          in_stack_00000198 = (long *)(ulong)(byte)((char)uVar12 * '\x02');
        }
        else {
          uVar27 = 0x1a;
          if ((uVar12 | 7) != 0x17) {
            uVar27 = (uVar12 | 7) + 1;
          }
          puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27);
          if (puVar18 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar27,0);
          }
          in_stack_00000198 = (long *)(uVar27 | 1);
          in_stack_000001a0 = uVar12;
          in_stack_000001a8 = puVar18;
        }
        lVar14 = (long)in_stack_000001a8 + 0xc;
        bVar37 = ((ulong)in_stack_00000198 & 1) == 0;
        puVar18 = in_stack_000001a8;
        if (bVar37) {
          puVar18 = (undefined8 *)((long)&stack0x00000198 + 1);
        }
        *puVar18 = 0x6465746365707865;
        *(undefined4 *)(puVar18 + 1) = 0x206e6120;
        lVar25 = (long)&stack0x000001a0 + 5;
        if (!bVar37) {
          lVar25 = lVar14;
        }
        if (uVar26 != 0) {
          uVar12 = _uStack0000000000000018;
          if (((ulong)puVar16 & 1) == 0) {
            uVar12 = (long)&stack0x00000008 + 1;
          }
          func_0x0eee2ee0(lVar25,uVar12,uVar26);
        }
        *(undefined1 *)(lVar25 + uVar26) = 0;
        uVar12 = (ulong)in_stack_00000198 >> 1 & 0x7f;
        puVar18 = (undefined8 *)((long)&stack0x00000198 + 1);
        if (((ulong)in_stack_00000198 & 1) != 0) {
          uVar12 = in_stack_000001a0;
          puVar18 = in_stack_000001a8;
        }
        in_stack_00000078 = 0;
        if (puVar18 == (undefined8 *)0x0) {
          in_stack_00000078 = (ulong)((uint)uVar12 & 0x7f) << 0x30;
        }
        else {
          lVar14 = uVar12 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
          if (lVar14 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar14,8);
          }
          *puVar15 = uVar12;
          func_0x0eee2f00(puVar15 + 1,puVar18,uVar12);
          *(undefined1 *)((long)puVar15 + uVar12 + 8) = 0;
          in_stack_00000078 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        func_0x0ed5ffe0(uVar13,8,&stack0x00000078);
        if ((in_stack_00000078 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(in_stack_00000078 & 0xff00ffffffffffff) - 8);
        }
        in_stack_00000078 = 0;
        if (((ulong)in_stack_00000198 & 1) != 0) {
          func_0x0412a280(in_stack_000001a8,(ulong)in_stack_00000198 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar16 & 1) != 0) {
          func_0x0412a280(_uStack0000000000000018,
                          (ulong)_uStack0000000000000008 & 0xfffffffffffffffe);
          return;
        }
        return;
      }
LAB_0e0333e4:
      uVar20 = func_0x04882e30();
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x0ee386e0(&stack0x00000108);
      uVar20 = func_0x0eee2d70(uVar20);
      if ((*unaff_R13 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar12 + 0x28),
                        *(ulong *)(uVar12 + 0x18) & 0xfffffffffffffffe);
      }
      func_0x0e02e980(&stack0x00000088);
      if (in_stack_000001b0 != (code *)0x0) {
        (*in_stack_000001b0)(&stack0x00000198);
      }
      if ((_uStack0000000000000010 & 1) != 0) {
        func_0x0412a280(in_stack_00000020,_uStack0000000000000010 & 0xfffffffffffffffe);
      }
      (**(code **)(*in_stack_00000050 + 0xd0))();
      func_0x0ed6d560(uVar13);
      uVar20 = func_0x0eee2d70(uVar20);
      uVar20 = func_0x04882e20(uVar20);
      func_0x04882e20(uVar20);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = func_0x04882e30();
LAB_0e0326bd:
    fVar38 = (float)uVar12;
LAB_0e0326d5:
    fVar38 = (float)func_0x0eee3ab0(fVar38 / *(float *)(plStack_8 + 4));
    plVar19 = (long *)((long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38);
    if ((unaff_R14 < (long *)0x3) ||
       (uVar12 = (long)unaff_R14 - ((ulong)unaff_R14 >> 1 & 0x5555555555555555),
       uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
       1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      plVar19 = (long *)func_0x0412c3f0(plVar19);
    }
    else if ((long *)0x1 < plVar19) {
      lVar14 = 0x3f;
      if ((undefined *)((long)plVar19 + -1) != (undefined *)0x0) {
        for (; (ulong)((long)plVar19 + -1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      plVar19 = (long *)(1L << (-((byte)lVar14 ^ 0x3f) & 0x3f));
    }
    if (plVar17 <= plVar19) {
      plVar17 = plVar19;
    }
    if (unaff_R14 <= plVar17) goto LAB_0e03279d;
  }
  else {
    unaff_R15 = (**(code **)(*unaff_R14 + 0xb0))(unaff_R14,0xffffffffffffffff);
    if (((long *)unaff_R13[2] != (long *)0x0) &&
       (uVar12 = (**(code **)(*(long *)unaff_R13[2] + 0x10))(), uVar12 < unaff_R15)) {
      in_stack_00000108 = 0x34000001208ec0;
      func_0x0ed5ffe0(*unaff_R13,0x40,&stack0x00000108);
      if ((in_stack_00000108 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_00000108 & 0xff00ffffffffffff) - 8);
        return;
      }
      return;
    }
    fVar38 = (float)func_0x0eee3ab0((float)unaff_R15 / *(float *)(plStack_8 + 4));
    plVar19 = (long *)((long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38);
    plVar17 = (long *)0x2;
    if ((plVar19 == (long *)0x1) ||
       (plVar17 = plVar19, ((ulong)plVar19 & (ulong)((long)plVar19 + -1)) == 0)) {
      unaff_R14 = (long *)plStack_8[1];
      bVar37 = plVar17 < unaff_R14;
      if (plVar17 <= unaff_R14) goto LAB_0e0322d8;
    }
    else {
      plVar17 = (long *)func_0x0412c3f0();
      unaff_R14 = (long *)plStack_8[1];
      bVar37 = plVar17 < unaff_R14;
      if (plVar17 <= unaff_R14) {
LAB_0e0322d8:
        if (!bVar37) goto LAB_0e03279d;
        uVar12 = plStack_8[3];
        if ((long)uVar12 < 0) goto LAB_0e0326bd;
        fVar38 = (float)(long)uVar12;
        goto LAB_0e0326d5;
      }
    }
  }
  func_0x0e02f680(plStack_8,plVar17);
LAB_0e03279d:
  func_0x0ed6d600(&stack0x00000110,*unaff_R13);
  if (unaff_R15 == 0) {
    return;
  }
  in_stack_000000c8 = 0x1b0000014af0d9;
  in_stack_000000d0 = 0x38000001448967;
  in_stack_000000f8 = plStack_8 + 2;
  uVar12 = 0;
LAB_0e032858:
  if ((*(uint *)(in_stack_00000110 + 0x2b0) != 0xffffffff) &&
     (in_stack_00000118 <= *(uint *)(in_stack_00000110 + 0x2b0))) {
    return;
  }
  puVar16 = (uint *)*unaff_R13;
  func_0x0ed6d4a0(puVar16,uVar12);
  (**(code **)(*in_stack_00000050 + 200))(in_stack_00000050,uVar12);
  cVar10 = (**(code **)(*in_stack_00000050 + 0x18))(in_stack_00000050);
  if ((cVar10 != '\x01') ||
     (lVar14 = (**(code **)(*in_stack_00000050 + 0xa8))(in_stack_00000050), lVar14 == 2)) {
    cVar10 = (**(code **)(*in_stack_00000050 + 0xb8))(in_stack_00000050,&UNK_013aac9a,3);
    if (cVar10 == '\0') {
      in_stack_000000e0 = in_stack_000000d0;
      func_0x0ed5ffe0(*unaff_R13,8,&stack0x000000e0);
      if ((in_stack_000000e0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_000000e0 & 0xff00ffffffffffff) - 8);
      }
      in_stack_000000e0 = 0;
      goto LAB_0e033240;
    }
    _uStack0000000000000018 = 0;
    in_stack_00000020 = 0;
    _uStack0000000000000008 = (uint *)0x0;
    _uStack0000000000000010 = 0;
    in_stack_00000028 = (long *)0x0;
    in_stack_000001c0 = unaff_R12[5];
    in_stack_000001a8 = (undefined8 *)&UNK_05e9f930;
    uStack00000000000001b8 = 0xc98820d1;
    in_stack_000001b0 = (code *)0x0;
    cStack00000000000001bc = '\x03';
    in_stack_00000198 = (long *)&stack0x00000008;
    in_stack_000001c8 = 0;
    in_stack_000001d0 = &UNK_05e9f910;
    func_0x0ed75bc0(&stack0x00000140,in_stack_00000050,&stack0x00000198,in_stack_00000100,
                    &stack0x00000148);
    (**(code **)(*in_stack_00000050 + 0xd0))(in_stack_00000050);
    cVar10 = (**(code **)(*in_stack_00000050 + 0xb8))(in_stack_00000050,&UNK_0138e8dd,5);
    plVar17 = in_stack_00000028;
    puVar31 = _uStack0000000000000008;
    if (cVar10 != '\0') {
      puVar35 = (uint *)plStack_8[1];
      if (puVar35 != (uint *)0x0) {
        uVar13 = (long)puVar35 - ((ulong)puVar35 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar13 >> 0x38 < 2) {
          puVar28 = (uint *)((long)puVar35 - 1U & (ulong)_uStack0000000000000008);
        }
        else {
          puVar28 = _uStack0000000000000008;
          if (puVar35 <= _uStack0000000000000008) {
            if (((ulong)_uStack0000000000000008 | (ulong)puVar35) >> 0x20 == 0) {
              puVar28 = (uint *)(((ulong)_uStack0000000000000008 & 0xffffffff) %
                                ((ulong)puVar35 & 0xffffffff));
            }
            else {
              puVar28 = (uint *)((ulong)_uStack0000000000000008 % (ulong)puVar35);
            }
          }
        }
        puVar18 = *(undefined8 **)(*plStack_8 + (long)puVar28 * 8);
        in_stack_00000038 = puVar28;
        if ((puVar18 != (undefined8 *)0x0) && (plVar19 = (long *)*puVar18, plVar19 != (long *)0x0))
        {
          lVar14 = in_stack_00000020;
          uVar26 = _uStack0000000000000018;
          if ((_uStack0000000000000010 & 1) == 0) {
            lVar14 = (long)&stack0x00000010 + 1;
            uVar26 = _uStack0000000000000010 >> 1 & 0x7f;
          }
          _cStack0000000000000040 = uVar26;
          if ((byte)(uVar13 >> 0x38) < 2) {
            uVar13 = (long)puVar35 - 1;
            in_stack_000000f0 = uVar13;
            do {
              if ((uint *)plVar19[1] == puVar31) {
                if ((uint *)plVar19[2] == puVar31) {
                  plVar34 = plVar19 + 2;
                  if (plVar17 == plVar34 &&
                      (undefined8 *)plVar19[6] == (undefined8 *)&stack0x00000008) goto LAB_0e033146;
                  bVar9 = *(byte *)(plVar19 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar27 = (ulong)(bVar9 >> 1);
                  }
                  else {
                    uVar27 = plVar19[4];
                  }
                  if (uVar27 == uVar26) {
                    if ((bVar9 & 1) == 0) {
                      lVar25 = (long)plVar19 + 0x19;
                    }
                    else {
                      lVar25 = plVar19[5];
                    }
                    iVar11 = func_0x0eee3000(lVar25,lVar14,uVar26);
                    uVar13 = in_stack_000000f0;
                    puVar28 = in_stack_00000038;
                    uVar26 = _cStack0000000000000040;
                    if (iVar11 == 0) goto LAB_0e033358;
                  }
                }
                plVar19[6] = 0;
              }
              else if ((uint *)((ulong)plVar19[1] & uVar13) != puVar28) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              puVar29 = (uint *)plVar19[1];
              if (puVar29 == puVar31) {
                if ((uint *)plVar19[2] == puVar31) {
                  plVar34 = plVar19 + 2;
                  if (plVar17 == plVar34 &&
                      (undefined8 *)plVar19[6] == (undefined8 *)&stack0x00000008) goto LAB_0e033146;
                  bVar9 = *(byte *)(plVar19 + 3);
                  if ((bVar9 & 1) == 0) {
                    uVar13 = (ulong)(bVar9 >> 1);
                  }
                  else {
                    uVar13 = plVar19[4];
                  }
                  if (uVar13 == uVar26) {
                    if ((bVar9 & 1) == 0) {
                      lVar25 = (long)plVar19 + 0x19;
                    }
                    else {
                      lVar25 = plVar19[5];
                    }
                    iVar11 = func_0x0eee3000(lVar25,lVar14,uVar26);
                    puVar28 = in_stack_00000038;
                    uVar26 = _cStack0000000000000040;
                    if (iVar11 == 0) goto LAB_0e033358;
                  }
                }
                plVar19[6] = 0;
              }
              else {
                if (puVar35 <= puVar29) {
                  if (((ulong)puVar29 | (ulong)puVar35) >> 0x20 == 0) {
                    if ((uint *)(((ulong)puVar29 & 0xffffffff) % ((ulong)puVar35 & 0xffffffff)) ==
                        puVar28) goto LAB_0e032c57;
                    break;
                  }
                  puVar29 = (uint *)((ulong)puVar29 % (ulong)puVar35);
                }
                if (puVar29 != puVar28) break;
              }
LAB_0e032c57:
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2a8);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x2a8,0);
      }
      _uStack0000000000000090 = plStack_8;
      in_stack_00000098 = (undefined *)0x0;
      *plVar19 = 0;
      plVar19[1] = (long)puVar31;
      plVar19[2] = 0;
      plVar19[3] = 0;
      plVar19[4] = 0;
      plVar19[5] = 0;
      plVar19[6] = 0;
      _uStack0000000000000088 = plVar19;
      if (plVar19 + 2 != (long *)&stack0x00000008) {
        if ((_uStack0000000000000010 & 1) == 0) {
          plVar19[5] = in_stack_00000020;
          *(undefined4 *)(plVar19 + 3) = uStack0000000000000010;
          *(undefined4 *)((long)plVar19 + 0x1c) = uStack0000000000000014;
          *(undefined4 *)(plVar19 + 4) = uStack0000000000000018;
          *(undefined4 *)((long)plVar19 + 0x24) = uStack000000000000001c;
        }
        else {
          func_0x04885070(plVar19 + 3,in_stack_00000020,_uStack0000000000000018);
        }
      }
      plVar19[2] = (long)_uStack0000000000000008;
      func_0x0eee2dd0(plVar19 + 7,0,0x270);
      *(undefined4 *)(plVar19 + 0xb) = 0x3f800000;
      *(undefined4 *)(plVar19 + 0x1e) = 2;
      plVar19[0x3b] = 0;
      plVar19[0x3c] = 0;
      plVar19[0x3d] = 0;
      plVar19[0x3e] = 0;
      plVar19[0x20] = 0;
      plVar19[0x21] = 0;
      plVar19[0x22] = 0;
      plVar19[0x23] = 0;
      *(undefined8 *)((long)plVar19 + 0x119) = 0;
      *(undefined8 *)((long)plVar19 + 0x121) = 0;
      *(undefined4 *)(plVar19 + 0x3f) = 0x3f800000;
      *(undefined4 *)(plVar19 + 0x52) = 2;
      in_stack_00000098 = (undefined *)CONCAT71(in_stack_00000098._1_7_,1);
      if ((long)puVar35 < 0) {
        fVar39 = (float)puVar35;
        fVar38 = *(float *)(plStack_8 + 4);
        if (puVar35 != (uint *)0x0) goto LAB_0e032e7d;
LAB_0e032e8e:
        uVar13 = 1;
        if ((uint *)0x2 < puVar35) {
          uVar13 = (ulong)(((ulong)puVar35 & (long)puVar35 - 1U) != 0);
        }
        uVar13 = (long)puVar35 * 2 | uVar13;
        fVar38 = (float)func_0x0eee3ab0((float)(plStack_8[3] + 1) / fVar38);
        uVar26 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
        if (uVar26 < uVar13) {
          uVar26 = uVar13;
        }
        uVar13 = 2;
        if ((uVar26 == 1) || (uVar13 = uVar26, (uVar26 & uVar26 - 1) == 0)) {
          uVar26 = plStack_8[1];
          bVar37 = uVar13 < uVar26;
          if (uVar13 <= uVar26) goto LAB_0e032fe0;
LAB_0e032f07:
          func_0x0e02f680(plStack_8,uVar13);
        }
        else {
          uVar13 = func_0x0412c3f0();
          uVar26 = plStack_8[1];
          bVar37 = uVar13 < uVar26;
          if (uVar26 < uVar13) goto LAB_0e032f07;
LAB_0e032fe0:
          if (bVar37) {
            fVar38 = (float)func_0x0eee3ab0((float)(ulong)plStack_8[3] / *(float *)(plStack_8 + 4));
            uVar27 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
            if ((uVar26 < 3) ||
               (uVar30 = uVar26 - (uVar26 >> 1 & 0x5555555555555555),
               uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333),
               1 < (byte)(((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar27 = func_0x0412c3f0(uVar27);
            }
            else if (1 < uVar27) {
              lVar14 = 0x3f;
              if (uVar27 - 1 != 0) {
                for (; uVar27 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar27 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
            }
            if (uVar13 <= uVar27) {
              uVar13 = uVar27;
            }
            if (uVar13 < uVar26) goto LAB_0e032f07;
          }
        }
        puVar35 = (uint *)plStack_8[1];
        if (((ulong)puVar35 & (long)puVar35 - 1U) == 0) {
          puVar28 = (uint *)((ulong)puVar31 & (long)puVar35 - 1U);
        }
        else {
          puVar28 = puVar31;
          if (puVar35 <= puVar31) {
            if (((ulong)puVar31 | (ulong)puVar35) >> 0x20 == 0) {
              puVar28 = (uint *)(((ulong)puVar31 & 0xffffffff) % ((ulong)puVar35 & 0xffffffff));
            }
            else {
              puVar28 = (uint *)((ulong)puVar31 % (ulong)puVar35);
            }
          }
        }
      }
      else {
        fVar39 = (float)(long)puVar35;
        fVar38 = *(float *)(plStack_8 + 4);
        if (puVar35 == (uint *)0x0) goto LAB_0e032e8e;
LAB_0e032e7d:
        puVar28 = in_stack_00000038;
        if (fVar39 * fVar38 < (float)(plStack_8[3] + 1)) goto LAB_0e032e8e;
      }
      lVar14 = *plStack_8;
      plVar17 = *(long **)(lVar14 + (long)puVar28 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar19 = *in_stack_000000f8;
        *in_stack_000000f8 = (long)plVar19;
        *(long **)(lVar14 + (long)puVar28 * 8) = in_stack_000000f8;
        if (*plVar19 != 0) {
          puVar31 = *(uint **)(*plVar19 + 8);
          if (((ulong)puVar35 & (long)puVar35 - 1U) == 0) {
            *(long **)(lVar14 + ((ulong)puVar31 & (long)puVar35 - 1U) * 8) = plVar19;
          }
          else {
            if (puVar35 <= puVar31) {
              if (((ulong)puVar31 | (ulong)puVar35) >> 0x20 == 0) {
                *(long **)(lVar14 + (((ulong)puVar31 & 0xffffffff) % ((ulong)puVar35 & 0xffffffff))
                                    * 8) = plVar19;
                goto LAB_0e03313e;
              }
              puVar31 = (uint *)((ulong)puVar31 % (ulong)puVar35);
            }
            *(long **)(lVar14 + (long)puVar31 * 8) = plVar19;
          }
        }
      }
      else {
        *plVar19 = *plVar17;
        *plVar17 = (long)plVar19;
      }
LAB_0e03313e:
      plStack_8[3] = plStack_8[3] + 1;
      goto LAB_0e033146;
    }
    in_stack_000000d8 = 0x3a000001208ef5;
    func_0x0ed5ffe0(*unaff_R13,8,&stack0x000000d8);
    if ((in_stack_000000d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000d8 & 0xff00ffffffffffff) - 8);
    }
    in_stack_000000d8 = 0;
    goto LAB_0e033201;
  }
  in_stack_000000e8 = in_stack_000000c8;
  func_0x0ed5ffe0(*unaff_R13,8,&stack0x000000e8);
  if ((in_stack_000000e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000000e8 & 0xff00ffffffffffff) - 8);
  }
  in_stack_000000e8 = 0;
  goto LAB_0e033240;
LAB_0e032070:
  cVar10 = cStack0000000000000040;
  func_0x0dec9d00(plVar19);
  bVar9 = *pbVar1;
  goto joined_r0x0e03208c;
LAB_0e0320de:
  cVar10 = cStack0000000000000040;
  plVar34[6] = (long)plVar2;
  plVar17[6] = (long)plVar36;
  func_0x0dec9d00(plVar19);
  bVar9 = *pbVar1;
joined_r0x0e03208c:
  if ((bVar9 & 1) != 0) {
    func_0x0412a280(plVar17[5],plVar17[3] & 0xfffffffffffffffe);
  }
  func_0x0412a280(plVar17,0x2a8);
  func_0x0dec9d00(&stack0x00000198);
  if (cVar10 != '\0') {
LAB_0e031ed0:
    func_0x0412a280(_uStack0000000000000018,(ulong)_uStack0000000000000008 & 0xfffffffffffffffe);
  }
LAB_0e031ee3:
  in_stack_00000198 = plVar34 + 7;
  in_stack_000001c0 = unaff_R12[5];
  in_stack_000001a8 = (undefined8 *)&UNK_0dec8580;
  uStack00000000000001b8 = 0xb920e31d;
  in_stack_000001b0 = (code *)0x0;
  cStack00000000000001bc = '\x03';
  in_stack_000001c8 = 0;
  in_stack_000001d0 = &UNK_0dec8560;
  func_0x0ed75bc0(&stack0x00000138,in_stack_00000050,&stack0x00000198,in_stack_00000100,
                  &stack0x00000170);
  uVar12 = in_stack_000000c8;
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  lVar14 = *(long *)(in_stack_00000038 + 2);
  uVar33 = *(uint *)(lVar14 + 0x1c + (ulong)*in_stack_00000038 * 0x20);
  *in_stack_00000038 = uVar33;
  if (in_stack_00000038[0x48] == 0) {
    uVar21 = in_stack_00000038[4];
  }
  else if ((*(uint *)(*(long *)(in_stack_00000038 + 0x46) + 0x18 +
                     (ulong)(in_stack_00000038[0x48] - 1) * 0x30) == uVar33) ||
          (uVar21 = in_stack_00000038[4], uVar33 != uVar21 - 1)) goto LAB_0e031288;
  lVar25 = lVar14 + (ulong)uVar21 * 0x20;
  uVar13 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar21 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&stack0x00000198,lVar25 + -0x18);
    uVar21 = in_stack_00000038[4];
  }
  *(undefined4 *)(lVar25 + -0x10) = 0xffffffff;
  in_stack_00000038[4] = uVar21 - 1;
LAB_0e031288:
  (**(code **)(*in_stack_00000050 + 0xd0))(in_stack_00000050);
LAB_0e03129c:
  in_stack_000000d0 = in_stack_000000d0 + 1;
  if (in_stack_000000d0 == uVar12) {
    return;
  }
  goto LAB_0e0312a8;
LAB_0e033358:
  plVar19[6] = (long)&stack0x00000008;
  in_stack_00000028 = plVar34;
LAB_0e033146:
  _uStack0000000000000088 = plVar19 + 7;
  in_stack_000000b0 = unaff_R12[5];
  in_stack_00000098 = &UNK_0dec8580;
  iStack00000000000000a8 = -0x46df1ce3;
  in_stack_000000a0 = (code *)0x0;
  uStack00000000000000ac = 3;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = &UNK_0dec8560;
  func_0x0ed75bc0(&stack0x00000138,in_stack_00000050,&stack0x00000088,in_stack_00000100,
                  &stack0x00000170);
  (**(code **)(*in_stack_00000050 + 0xd0))(in_stack_00000050);
  if (in_stack_000000a0 != (code *)0x0) {
    (*in_stack_000000a0)(&stack0x00000088);
  }
LAB_0e033201:
  if (in_stack_000001b0 != (code *)0x0) {
    (*in_stack_000001b0)(&stack0x00000198);
  }
  if ((_uStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,_uStack0000000000000010 & 0xfffffffffffffffe);
  }
LAB_0e033240:
  (**(code **)(*in_stack_00000050 + 0xd0))(in_stack_00000050);
  lVar14 = *(long *)(puVar16 + 2);
  uVar33 = *(uint *)(lVar14 + 0x1c + (ulong)*puVar16 * 0x20);
  *puVar16 = uVar33;
  if (puVar16[0x48] == 0) {
    uVar21 = puVar16[4];
  }
  else if ((*(uint *)(*(long *)(puVar16 + 0x46) + 0x18 + (ulong)(puVar16[0x48] - 1) * 0x30) ==
            uVar33) || (uVar21 = puVar16[4], uVar33 != uVar21 - 1)) goto LAB_0e03284c;
  lVar25 = lVar14 + (ulong)uVar21 * 0x20;
  uVar13 = (ulong)*(uint *)(lVar14 + -0x10 + (ulong)uVar21 * 0x20);
  if (uVar13 != 0xffffffff) {
    (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&stack0x00000198,lVar25 + -0x18);
    uVar21 = puVar16[4];
  }
  *(undefined4 *)(lVar25 + -0x10) = 0xffffffff;
  puVar16[4] = uVar21 - 1;
LAB_0e03284c:
  uVar12 = (ulong)((int)uVar12 + 1);
  if (unaff_R15 <= uVar12) {
    return;
  }
  goto LAB_0e032858;
}


