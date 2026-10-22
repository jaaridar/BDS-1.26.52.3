/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ce610
 * Label: string:ZN15JigsawPlacement9addPiecesERK20StructurePoolElementRK8Blo
 * Body:  [[0d2cdb30, 0d2cdd35] [0d2cdd40, 0d2cdd80] [0d2cdd90, 0d2cde6d] [0d2cde70, 0d2cdf8c] [0d2cdf90, 0d2ce0b8] [0d2ce0c0, 0d2ce197] [0d2ce1a0, 0d2ce241] [0d2ce250, 0d2ce378] [0d2ce380, 0d2ce521] [0d2ce530, 0d2ce564] [0d2ce570, 0d2ce5dd] [0d2ce5e0, 0d2ce5fa] [0d2ce600, 0d2ce60c] [0d2ce610, 0d2ceac0] [0d2cebf9, 0d2cec16] [0d2ceca0, 0d2ceccf] [0d2cecd7, 0d2cecf2]]
 * Ghidra: FUN_0d2ce610
 */


/* WARNING: Instruction at (ram,0x0d2ce611) overlaps instruction at (ram,0x0d2ce610)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0d2ce610(void)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 in_RCX;
  ulong uVar25;
  undefined8 unaff_RBX;
  long lVar26;
  byte *unaff_RBP;
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 *in_R8;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  ulong unaff_R12;
  byte *unaff_R13;
  byte *pbVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  byte *unaff_R14;
  ulong uVar36;
  byte *unaff_R15;
  bool bVar37;
  float fVar38;
  float fVar39;
  byte *unaff_retaddr;
  byte *in_stack_00000010;
  byte *in_stack_00000018;
  byte *in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  byte *in_stack_00000060;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  long *in_stack_00000070;
  long *in_stack_00000078;
  byte *in_stack_00000088;
  undefined8 in_stack_00000090;
  byte *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  byte *in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  
  pbVar21 = (byte *)CONCAT71((int7)((ulong)unaff_RBX >> 8),
                             (byte)unaff_RBX & (byte)((ulong)in_RCX >> 8));
  pbVar18 = (byte *)(ulong)((int)unaff_RBP + 0x11);
code_r0x0d2ce617:
  iVar15 = func_0x0eee3000(pbVar18,unaff_R13,unaff_R12);
  uVar23 = in_stack_00000028;
  if (iVar15 != 0) goto LAB_0d2ce5b9;
LAB_0d2ce943:
  pbVar21 = in_stack_00000098;
  plVar1 = in_stack_00000078;
  pbVar18 = in_stack_00000060;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000078 = (long *)0x0;
  *(long **)(unaff_RBP + 0x28) = in_stack_00000030;
  plVar17 = *(long **)(unaff_RBP + 0x30);
  *(long **)(unaff_RBP + 0x30) = plVar1;
  uVar12 = in_stack_00000070;
  plVar1 = in_stack_00000078;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar3 = plVar17 + 1;
    lVar31 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
      uVar12 = in_stack_00000070;
      plVar1 = in_stack_00000078;
    }
  }
joined_r0x0d2cea1f:
  in_stack_00000070 = (long *)uVar12;
  in_stack_00000078 = plVar1;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar17 = plVar1 + 1;
    lVar31 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar31 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  do {
    while( true ) {
      puVar16 = &stack0x00000010;
      pbVar33 = pbVar18 + 0x40;
      if (pbVar33 == pbVar21) {
        return unaff_retaddr;
      }
      cVar14 = func_0x0b5f94a0(pbVar33,0x1f,1,0);
      if (cVar14 != '\0') break;
      if ((*pbVar33 & 1) == 0) {
        in_stack_00000010 = pbVar18 + 0x41;
      }
      else {
        in_stack_00000010 = *(byte **)(pbVar18 + 0x50);
      }
      func_0x0c9209c0(1,3,0x1f);
      in_R8 = puVar16;
      pbVar18 = pbVar33;
    }
    if (pbVar18[0x58] == 0) {
      uVar36 = (ulong)*(uint *)(pbVar18 + 0x5c);
      in_R8 = (undefined8 *)CONCAT71((int7)((ulong)in_R8 >> 8),pbVar18[100] == 1);
      in_stack_00000038._4_4_ = _DAT_011983f0;
      puVar30 = &UNK_0d2e09a0;
      uVar28 = (uint)*(ushort *)(pbVar18 + 0x60);
      uVar24 = (uint)*(ushort *)(pbVar18 + 0x62);
      if ((uint)*(ushort *)(pbVar18 + 0x60) * 2 < (uint)*(ushort *)(pbVar18 + 0x62)) break;
    }
    else {
      uVar36 = 0;
      in_stack_00000038._4_4_ = 0;
      puVar30 = (undefined *)0x0;
      uVar28 = 0;
      in_R8 = (undefined8 *)0x0;
      uVar24 = 0;
      if ((uint)*(ushort *)(pbVar18 + 0x60) * 2 < (uint)*(ushort *)(pbVar18 + 0x62)) break;
    }
    if ((*pbVar33 & 1) == 0) {
      in_stack_00000010 = pbVar18 + 0x41;
    }
    else {
      in_stack_00000010 = *(byte **)(pbVar18 + 0x50);
    }
    func_0x09e3e440(1,3,0x1f);
    in_stack_00000070 = (long *)0x0;
    in_stack_00000078 = (long *)0x0;
    in_R8 = puVar16;
    pbVar18 = pbVar33;
  } while( true );
  uStack000000000000006c = uVar24;
  in_stack_00000040 = (undefined8 *)0x0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000050 = (undefined8 *)0x0;
  pbVar21 = *(byte **)(pbVar18 + 0x68);
  pbVar18 = *(byte **)(pbVar18 + 0x70);
  in_stack_00000060 = pbVar33;
  uStack0000000000000068 = uVar28;
  in_stack_000000a0 = puVar30;
  in_stack_000000a8 = in_R8;
  in_stack_000000b0 = uVar36;
  if ((long)pbVar18 - (long)pbVar21 != 0) {
    uVar36 = (long)pbVar18 - (long)pbVar21 >> 5;
    if (0xaaaaaaaaaaaaaaa < uVar36) {
LAB_0d2cec03:
      func_0x0d2e0470();
LAB_0d2cec08:
      func_0x0d2e0470();
LAB_0d2cec0d:
      uVar23 = func_0x0d2e0470();
      func_0x0d2ea150(unaff_retaddr);
      uVar23 = func_0x0eee2d70(uVar23);
      func_0x0d2cd970(&stack0x00000010);
      func_0x09cb07b0(&stack0x000000d8);
      func_0x0d2cd9a0(&stack0x00000040);
      func_0x0d2ea150(unaff_retaddr);
      func_0x0eee2d70(uVar23);
      pcVar8 = (code *)swi(3);
      pbVar18 = (byte *)(*pcVar8)();
      return pbVar18;
    }
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x18);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(uVar36 * 0x18,0);
    }
    in_stack_00000050 = puVar16 + uVar36 * 3;
    pbVar21 = *(byte **)(in_stack_00000060 + 0x28);
    pbVar18 = *(byte **)(in_stack_00000060 + 0x30);
    in_stack_00000048 = puVar16;
  }
  puVar16 = in_R8;
  in_stack_00000040 = in_stack_00000048;
  in_stack_00000088 = pbVar18;
  if (pbVar21 != pbVar18) {
    do {
      in_R8 = &stack0x00000010;
      cVar14 = func_0x0b5f94a0(pbVar21,0x1f,1,0);
      if (cVar14 == '\0') {
        if ((*pbVar21 & 1) == 0) {
          in_stack_00000010 = pbVar21 + 1;
        }
        else {
          in_stack_00000010 = *(byte **)(pbVar21 + 0x10);
        }
        func_0x0c9209c0(1,3,0x1f);
      }
      else {
        pbVar33 = pbVar21 + 1;
        if ((*pbVar21 & 1) != 0) {
          pbVar33 = *(byte **)(pbVar21 + 0x10);
        }
        func_0x0d330c10(in_R8,uVar23,pbVar33);
        puVar13 = in_stack_00000048;
        puVar34 = in_stack_00000040;
        pbVar33 = in_stack_00000018;
        in_stack_000000d8 = in_stack_00000010;
        in_stack_000000e0 = in_stack_00000018;
        if (in_stack_00000010 != (byte *)0x0) {
          if (in_stack_00000018 != (byte *)0x0) {
            LOCK();
            *(long *)(in_stack_00000018 + 8) = *(long *)(in_stack_00000018 + 8) + 1;
            UNLOCK();
          }
          bVar6 = pbVar21[0x18];
          uVar24 = (uint)bVar6;
          in_stack_00000020 = (byte *)CONCAT44(in_stack_00000020._4_4_,uVar24);
          if (in_stack_00000050 <= in_stack_00000048) {
            in_stack_000000d0 = in_stack_00000010;
            in_stack_00000030 = (long *)((long)in_stack_00000048 - (long)in_stack_00000040);
            uVar36 = ((long)in_stack_00000030 >> 3) * -0x5555555555555555 + 1;
            in_stack_00000090._4_4_ = uVar24;
            if (uVar36 < 0xaaaaaaaaaaaaaab) {
              in_stack_000000c8 = in_stack_00000050;
              lVar31 = (long)in_stack_00000050 - (long)in_stack_00000040 >> 3;
              uVar29 = lVar31 * 0x5555555555555556;
              if (uVar36 < uVar29) {
                uVar36 = uVar29;
              }
              if (0x555555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
                uVar36 = 0xaaaaaaaaaaaaaaa;
              }
              if (uVar36 < 0xaaaaaaaaaaaaaab) {
                in_stack_000000c0 = uVar36 * 0x18;
                puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                if (puVar19 == (undefined8 *)0x0) {
                  func_0x0eec74c0(in_stack_000000c0,0);
                }
                *(byte **)((long)puVar19 + (long)in_stack_00000030) = in_stack_000000d0;
                *(byte **)((long)(puVar19 + 1) + (long)in_stack_00000030) = pbVar33;
                in_stack_00000010 = (byte *)0x0;
                in_stack_00000018 = (byte *)0x0;
                *(uint *)((long)(puVar19 + 2) + (long)in_stack_00000030) = in_stack_00000090._4_4_;
                puVar27 = in_stack_000000c8;
                puVar35 = puVar34;
                if (puVar34 != puVar13) {
                  lVar31 = 0;
                  do {
                    puVar4 = (undefined4 *)((long)puVar34 + lVar31);
                    uVar9 = puVar4[1];
                    uVar10 = puVar4[2];
                    uVar11 = puVar4[3];
                    puVar5 = (undefined4 *)((long)puVar19 + lVar31);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar9;
                    puVar5[2] = uVar10;
                    puVar5[3] = uVar11;
                    *(undefined8 *)((long)puVar34 + lVar31) = 0;
                    ((undefined8 *)((long)puVar34 + lVar31))[1] = 0;
                    *(undefined4 *)((long)puVar19 + lVar31 + 0x10) =
                         *(undefined4 *)((long)puVar34 + lVar31 + 0x10);
                    lVar32 = lVar31 + 0x18;
                    lVar31 = lVar31 + 0x18;
                  } while ((undefined8 *)((long)puVar34 + lVar32) != puVar13);
                  do {
                    plVar17 = (long *)puVar34[1];
                    if (plVar17 != (long *)0x0) {
                      LOCK();
                      plVar1 = plVar17 + 1;
                      lVar31 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar31 == 0) {
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                        func_0x0412c2d0(plVar17);
                      }
                    }
                    puVar34 = puVar34 + 3;
                    puVar27 = in_stack_00000050;
                    puVar35 = in_stack_00000040;
                  } while (puVar34 != puVar13);
                }
                in_stack_00000050 = puVar19 + uVar36 * 3;
                in_stack_00000040 = puVar19;
                if (puVar35 != (undefined8 *)0x0) {
                  func_0x0412a280(puVar35,(long)puVar27 - (long)puVar35);
                }
                uVar23 = in_stack_00000028;
                pbVar33 = in_stack_00000018;
                in_stack_00000048 = (undefined8 *)((long)in_stack_00000030 + (long)puVar19 + 0x18);
                pbVar18 = in_stack_00000088;
                if (in_stack_00000018 != (byte *)0x0) {
                  LOCK();
                  pbVar2 = in_stack_00000018 + 8;
                  lVar31 = *(long *)pbVar2;
                  *(long *)pbVar2 = *(long *)pbVar2 + -1;
                  UNLOCK();
                  if (lVar31 == 0) {
                    (**(code **)(*(long *)in_stack_00000018 + 0x10))(in_stack_00000018);
                    func_0x0412c2d0(pbVar33);
                    pbVar18 = in_stack_00000088;
                  }
                }
                goto LAB_0d2ce070;
              }
              func_0x04882eb0();
            }
            func_0x0d2e0470();
            goto LAB_0d2cec03;
          }
          *in_stack_00000048 = in_stack_00000010;
          in_stack_00000048[1] = in_stack_00000018;
          *(uint *)(in_stack_00000048 + 2) = (uint)bVar6;
          in_stack_00000048 = in_stack_00000048 + 3;
          pbVar18 = in_stack_00000088;
        }
LAB_0d2ce070:
        pbVar33 = in_stack_000000e0;
        in_R8 = puVar16;
        if (in_stack_000000e0 != (byte *)0x0) {
          LOCK();
          pbVar2 = in_stack_000000e0 + 8;
          lVar31 = *(long *)pbVar2;
          *(long *)pbVar2 = *(long *)pbVar2 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*(long *)in_stack_000000e0 + 0x10))(in_stack_000000e0);
            func_0x0412c2d0(pbVar33);
            in_R8 = puVar16;
          }
        }
      }
      pbVar21 = pbVar21 + 0x20;
      puVar16 = in_R8;
    } while (pbVar21 != pbVar18);
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar34 = in_stack_00000048;
  puVar16 = in_stack_00000040;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f45f320;
  in_stack_00000030 = plVar17 + 3;
  in_stack_00000010 = (byte *)0x0;
  in_stack_00000018 = (byte *)0x0;
  in_stack_00000020 = (byte *)0x0;
  lVar31 = (long)in_stack_00000048 - (long)in_stack_00000040;
  if (lVar31 == 0) {
    *in_stack_00000030 = 0;
    plVar17[4] = 0;
    plVar17[5] = 0;
    *(undefined4 *)(plVar17 + 6) = in_stack_00000038._4_4_;
    *(int *)((long)plVar17 + 0x34) = (int)in_stack_000000b0;
    plVar17[7] = (long)in_stack_000000a0;
    *(uint *)(plVar17 + 8) = uStack0000000000000068;
    *(uint *)((long)plVar17 + 0x44) = uStack000000000000006c;
    *(char *)(plVar17 + 9) = (char)in_stack_000000a8;
    *(undefined2 *)((long)plVar17 + 0x49) = 0;
    *(undefined1 *)((long)plVar17 + 0x4b) = 0;
    *(undefined4 *)((long)plVar17 + 0x4c) = 0;
    uVar23 = in_stack_00000028;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < (ulong)((lVar31 >> 3) * -0x5555555555555555)) goto LAB_0d2cec0d;
    pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
    if (pbVar18 == (byte *)0x0) {
      func_0x0eec74c0(lVar31,0);
    }
    in_stack_00000020 = pbVar18 + lVar31;
    lVar32 = 0;
    lVar31 = 0x18;
    do {
      lVar26 = lVar31;
      lVar31 = *(long *)((long)puVar16 + lVar32 + 8);
      uVar23 = ((undefined8 *)((long)puVar16 + lVar32))[1];
      *(undefined8 *)(pbVar18 + lVar32) = *(undefined8 *)((long)puVar16 + lVar32);
      *(undefined8 *)(pbVar18 + lVar32 + 8) = uVar23;
      if (lVar31 != 0) {
        LOCK();
        plVar1 = (long *)(lVar31 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      *(undefined4 *)(pbVar18 + lVar32 + 0x10) = *(undefined4 *)((long)puVar16 + lVar32 + 0x10);
      lVar20 = lVar32 + 0x18;
      lVar32 = lVar32 + 0x18;
      lVar31 = lVar26 + 0x18;
    } while ((undefined8 *)((long)puVar16 + lVar20) != puVar34);
    in_stack_00000018 = pbVar18 + lVar32;
    *in_stack_00000030 = 0;
    in_stack_00000030[1] = 0;
    in_stack_00000030[2] = 0;
    in_stack_00000010 = pbVar18;
    if (0xaaaaaaaaaaaaaaa < (ulong)((lVar32 >> 3) * -0x5555555555555555)) goto LAB_0d2cec08;
    lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar32);
    if (lVar31 == 0) {
      func_0x0eec74c0(lVar32,0);
    }
    uVar23 = in_stack_00000028;
    plVar17[3] = lVar31;
    plVar17[4] = lVar31;
    plVar17[5] = lVar32 + lVar31;
    lVar20 = 0;
    do {
      lVar7 = *(long *)(pbVar18 + lVar20 + 8);
      uVar12 = *(undefined8 *)(pbVar18 + lVar20 + 8);
      *(undefined8 *)(lVar31 + lVar20) = *(undefined8 *)(pbVar18 + lVar20);
      ((undefined8 *)(lVar31 + lVar20))[1] = uVar12;
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar31 + 0x10 + lVar20) = *(undefined4 *)(pbVar18 + lVar20 + 0x10);
      lVar20 = lVar20 + 0x18;
    } while (lVar32 != lVar20);
    plVar17[4] = lVar31 + lVar20;
    *(undefined4 *)(plVar17 + 6) = in_stack_00000038._4_4_;
    *(int *)((long)plVar17 + 0x34) = (int)in_stack_000000b0;
    plVar17[7] = (long)in_stack_000000a0;
    *(uint *)(plVar17 + 8) = uStack0000000000000068;
    *(uint *)((long)plVar17 + 0x44) = uStack000000000000006c;
    *(char *)(plVar17 + 9) = (char)in_stack_000000a8;
    *(undefined2 *)((long)plVar17 + 0x49) = 0;
    *(undefined1 *)((long)plVar17 + 0x4b) = 0;
    *(undefined4 *)((long)plVar17 + 0x4c) = 0;
    if (pbVar18 != (byte *)0x0) {
      do {
        plVar1 = *(long **)(pbVar18 + lVar26 + -0x10);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          lVar31 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            func_0x0412c2d0(plVar1);
          }
        }
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != 0);
      func_0x0412a280(in_stack_00000010,(long)in_stack_00000020 - (long)in_stack_00000010);
      puVar16 = in_stack_00000040;
    }
  }
  in_stack_00000070 = in_stack_00000030;
  in_stack_00000078 = plVar17;
  puVar34 = puVar16;
  puVar13 = in_stack_00000048;
  if (puVar16 == (undefined8 *)0x0) goto LAB_0d2ce3f9;
  for (; puVar16 != puVar13; puVar13 = puVar13 + -3) {
    plVar17 = (long *)puVar13[-2];
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar31 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    puVar34 = in_stack_00000040;
  }
  in_stack_00000048 = puVar16;
  func_0x0412a280(puVar34,(long)in_stack_00000050 - (long)puVar34);
  in_stack_00000030 = in_stack_00000070;
  pbVar18 = in_stack_00000060;
  uVar12 = 0;
  plVar1 = in_stack_00000078;
  pbVar21 = in_stack_00000098;
  if (in_stack_00000070 != (long *)0x0) goto LAB_0d2ce3f9;
  goto joined_r0x0d2cea1f;
LAB_0d2ce3f9:
  unaff_R14 = in_stack_00000060;
  unaff_R13 = in_stack_00000060 + 1;
  bVar37 = (*in_stack_00000060 & 1) == 0;
  pbVar18 = *(byte **)(in_stack_00000060 + 0x10);
  if (bVar37) {
    pbVar18 = unaff_R13;
  }
  uVar36 = (ulong)(*in_stack_00000060 >> 1);
  if (!bVar37) {
    uVar36 = *(ulong *)(in_stack_00000060 + 8);
  }
  in_stack_00000030 = in_stack_00000070;
  pbVar21 = (byte *)func_0x04883620(&stack0x00000010,pbVar18,uVar36);
  unaff_R15 = *(byte **)(unaff_retaddr + 8);
  if (unaff_R15 != (byte *)0x0) {
    uVar36 = (long)unaff_R15 - ((ulong)unaff_R15 >> 1 & 0x5555555555555555);
    uVar36 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
    uVar36 = ((uVar36 >> 4) + uVar36 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar36 >> 0x38 < 2) {
      unaff_R14 = (byte *)((ulong)(unaff_R15 + -1) & (ulong)pbVar21);
    }
    else {
      unaff_R14 = pbVar21;
      if (unaff_R15 <= pbVar21) {
        if (((ulong)pbVar21 | (ulong)unaff_R15) >> 0x20 == 0) {
          unaff_R14 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
        }
        else {
          unaff_R14 = (byte *)((ulong)pbVar21 % (ulong)unaff_R15);
        }
      }
    }
    puVar16 = *(undefined8 **)(*(long *)unaff_retaddr + (long)unaff_R14 * 8);
    if ((puVar16 != (undefined8 *)0x0) && (unaff_RBP = (byte *)*puVar16, unaff_RBP != (byte *)0x0))
    {
      if ((*in_stack_00000060 & 1) == 0) {
        unaff_R12 = (ulong)(*in_stack_00000060 >> 1);
      }
      else {
        unaff_R12 = *(ulong *)(in_stack_00000060 + 8);
        unaff_R13 = *(byte **)(in_stack_00000060 + 0x10);
      }
      if ((byte)(uVar36 >> 0x38) < 2) {
        pbVar18 = unaff_R15 + -1;
        in_stack_00000088 = pbVar18;
        do {
          if (*(byte **)(unaff_RBP + 8) == pbVar21) {
            bVar6 = unaff_RBP[0x10];
            if ((bVar6 & 1) == 0) {
              uVar36 = (ulong)(bVar6 >> 1);
            }
            else {
              uVar36 = *(ulong *)(unaff_RBP + 0x18);
            }
            if (uVar36 == unaff_R12) {
              if ((bVar6 & 1) == 0) {
                pbVar18 = unaff_RBP + 0x11;
              }
              else {
                pbVar18 = *(byte **)(unaff_RBP + 0x20);
              }
              iVar15 = func_0x0eee3000(pbVar18,unaff_R13,unaff_R12);
              pbVar18 = in_stack_00000088;
              uVar23 = in_stack_00000028;
              if (iVar15 == 0) goto LAB_0d2ce943;
            }
          }
          else {
            uVar23 = in_stack_00000028;
            if ((byte *)((ulong)*(byte **)(unaff_RBP + 8) & (ulong)pbVar18) != unaff_R14) break;
          }
          unaff_RBP = *(byte **)unaff_RBP;
          uVar23 = in_stack_00000028;
        } while (unaff_RBP != (byte *)0x0);
      }
      else {
        do {
          pbVar18 = *(byte **)(unaff_RBP + 8);
          if (pbVar18 == pbVar21) {
            bVar6 = unaff_RBP[0x10];
            if ((bVar6 & 1) == 0) {
              uVar36 = (ulong)(bVar6 >> 1);
            }
            else {
              uVar36 = *(ulong *)(unaff_RBP + 0x18);
            }
            if (uVar36 == unaff_R12) {
              if ((bVar6 & 1) == 0) {
                pbVar18 = unaff_RBP + 0x11;
              }
              else {
                pbVar18 = *(byte **)(unaff_RBP + 0x20);
              }
              goto code_r0x0d2ce617;
            }
          }
          else {
            if (unaff_R15 <= pbVar18) {
              if (((ulong)pbVar18 | (ulong)unaff_R15) >> 0x20 == 0) {
                pbVar18 = (byte *)(((ulong)pbVar18 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
              }
              else {
                pbVar18 = (byte *)((ulong)pbVar18 % (ulong)unaff_R15);
              }
            }
            uVar23 = in_stack_00000028;
            if (pbVar18 != unaff_R14) break;
          }
LAB_0d2ce5b9:
          unaff_RBP = *(byte **)unaff_RBP;
          uVar23 = in_stack_00000028;
        } while (unaff_RBP != (byte *)0x0);
      }
    }
  }
  unaff_RBP = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (unaff_RBP == (byte *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  in_stack_00000020 = (byte *)0x0;
  unaff_RBP[0] = 0;
  unaff_RBP[1] = 0;
  unaff_RBP[2] = 0;
  unaff_RBP[3] = 0;
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0;
  unaff_RBP[6] = 0;
  unaff_RBP[7] = 0;
  *(byte **)(unaff_RBP + 8) = pbVar21;
  in_stack_00000010 = unaff_RBP;
  in_stack_00000018 = unaff_retaddr;
  if ((*in_stack_00000060 & 1) == 0) {
    *(undefined8 *)(unaff_RBP + 0x20) = *(undefined8 *)(in_stack_00000060 + 0x10);
    uVar12 = *(undefined8 *)(in_stack_00000060 + 8);
    *(undefined8 *)(unaff_RBP + 0x10) = *(undefined8 *)in_stack_00000060;
    *(undefined8 *)(unaff_RBP + 0x18) = uVar12;
  }
  else {
    func_0x0412e5e0(unaff_RBP + 0x10,*(undefined8 *)(in_stack_00000060 + 0x10),
                    *(undefined8 *)(in_stack_00000060 + 8));
  }
  unaff_RBP[0x28] = 0;
  unaff_RBP[0x29] = 0;
  unaff_RBP[0x2a] = 0;
  unaff_RBP[0x2b] = 0;
  unaff_RBP[0x2c] = 0;
  unaff_RBP[0x2d] = 0;
  unaff_RBP[0x2e] = 0;
  unaff_RBP[0x2f] = 0;
  unaff_RBP[0x30] = 0;
  unaff_RBP[0x31] = 0;
  unaff_RBP[0x32] = 0;
  unaff_RBP[0x33] = 0;
  unaff_RBP[0x34] = 0;
  unaff_RBP[0x35] = 0;
  unaff_RBP[0x36] = 0;
  unaff_RBP[0x37] = 0;
  in_stack_00000020 = (byte *)CONCAT71(in_stack_00000020._1_7_,1);
  if ((long)unaff_R15 < 0) {
    fVar39 = (float)unaff_R15;
    fVar38 = *(float *)(unaff_retaddr + 0x20);
    if (unaff_R15 != (byte *)0x0) goto LAB_0d2ce73b;
LAB_0d2ce74c:
    uVar36 = 1;
    if ((byte *)0x2 < unaff_R15) {
      uVar36 = (ulong)(((ulong)unaff_R15 & (ulong)(unaff_R15 + -1)) != 0);
    }
    uVar36 = (long)unaff_R15 * 2 | uVar36;
    fVar38 = (float)func_0x0eee3ab0((float)(*(long *)(unaff_retaddr + 0x18) + 1) / fVar38);
    uVar29 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
    if (uVar29 < uVar36) {
      uVar29 = uVar36;
    }
    uVar36 = 2;
    if ((uVar29 == 1) || (uVar36 = uVar29, (uVar29 & uVar29 - 1) == 0)) {
      uVar29 = *(ulong *)(unaff_retaddr + 8);
      bVar37 = uVar36 < uVar29;
      if (uVar36 <= uVar29) goto LAB_0d2ce7e3;
LAB_0d2ce7bd:
      func_0x0d2ea210(unaff_retaddr,uVar36);
    }
    else {
      uVar36 = func_0x0412c3f0();
      uVar29 = *(ulong *)(unaff_retaddr + 8);
      bVar37 = uVar36 < uVar29;
      if (uVar29 < uVar36) goto LAB_0d2ce7bd;
LAB_0d2ce7e3:
      if (bVar37) {
        fVar38 = (float)func_0x0eee3ab0((float)*(ulong *)(unaff_retaddr + 0x18) /
                                        *(float *)(unaff_retaddr + 0x20));
        uVar22 = (long)(fVar38 - _DAT_01198778) & (long)fVar38 >> 0x3f | (long)fVar38;
        if ((uVar29 < 3) ||
           (uVar25 = uVar29 - (uVar29 >> 1 & 0x5555555555555555),
           uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
           1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar22 = func_0x0412c3f0(uVar22);
        }
        else if (1 < uVar22) {
          lVar31 = 0x3f;
          if (uVar22 - 1 != 0) {
            for (; uVar22 - 1 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          uVar22 = 1L << (-((byte)lVar31 ^ 0x3f) & 0x3f);
        }
        if (uVar36 <= uVar22) {
          uVar36 = uVar22;
        }
        if (uVar36 < uVar29) goto LAB_0d2ce7bd;
      }
    }
    unaff_R15 = *(byte **)(unaff_retaddr + 8);
    if (((ulong)unaff_R15 & (ulong)(unaff_R15 + -1)) == 0) {
      unaff_R14 = (byte *)((ulong)pbVar21 & (ulong)(unaff_R15 + -1));
    }
    else {
      unaff_R14 = pbVar21;
      if (unaff_R15 <= pbVar21) {
        if (((ulong)pbVar21 | (ulong)unaff_R15) >> 0x20 == 0) {
          unaff_R14 = (byte *)(((ulong)pbVar21 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
        }
        else {
          unaff_R14 = (byte *)((ulong)pbVar21 % (ulong)unaff_R15);
        }
      }
    }
  }
  else {
    fVar39 = (float)(long)unaff_R15;
    fVar38 = *(float *)(unaff_retaddr + 0x20);
    if (unaff_R15 == (byte *)0x0) goto LAB_0d2ce74c;
LAB_0d2ce73b:
    if (fVar39 * fVar38 < (float)(*(long *)(unaff_retaddr + 0x18) + 1)) goto LAB_0d2ce74c;
  }
  lVar31 = *(long *)unaff_retaddr;
  puVar16 = *(undefined8 **)(lVar31 + (long)unaff_R14 * 8);
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)unaff_RBP = *in_stack_000000b8;
    *in_stack_000000b8 = unaff_RBP;
    *(undefined8 **)(lVar31 + (long)unaff_R14 * 8) = in_stack_000000b8;
    if (*(long *)unaff_RBP != 0) {
      pbVar18 = *(byte **)(*(long *)unaff_RBP + 8);
      if (((ulong)unaff_R15 & (ulong)(unaff_R15 + -1)) == 0) {
        *(byte **)(lVar31 + ((ulong)pbVar18 & (ulong)(unaff_R15 + -1)) * 8) = unaff_RBP;
      }
      else {
        if (unaff_R15 <= pbVar18) {
          if (((ulong)pbVar18 | (ulong)unaff_R15) >> 0x20 == 0) {
            *(byte **)(lVar31 + (((ulong)pbVar18 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff)) *
                                8) = unaff_RBP;
            goto LAB_0d2ce93b;
          }
          pbVar18 = (byte *)((ulong)pbVar18 % (ulong)unaff_R15);
        }
        *(byte **)(lVar31 + (long)pbVar18 * 8) = unaff_RBP;
      }
    }
  }
  else {
    *(undefined8 *)unaff_RBP = *puVar16;
    *puVar16 = unaff_RBP;
  }
LAB_0d2ce93b:
  *(long *)(unaff_retaddr + 0x18) = *(long *)(unaff_retaddr + 0x18) + 1;
  goto LAB_0d2ce943;
}


