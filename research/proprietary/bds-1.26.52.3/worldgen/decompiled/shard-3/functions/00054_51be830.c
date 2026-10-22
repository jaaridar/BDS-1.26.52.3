/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x51be830
 * Label: string:ZN18OverworldGenerator9loadChunkER10LevelChunkbE3$_0
 * Body:  [[051be830, 051c6209] [051c85d5, 051c92c7] [051c99df, 051c9c9f] [051ca15a, 051ca359] [051ca63c, 051ca645] [051cd22a, 051cd248] [051cd266, 051cd284] [051cd2a4, 051cd6c5] [051cd6d4, 051cd6fc]]
 * Ghidra: FUN_051be830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_051be830(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  long lVar16;
  long lVar17;
  long unaff_R15;
  bool bVar18;
  long in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_00000080;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  ulong in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  ulong in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  ulong in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 *in_stack_000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 *in_stack_000001e8;
  ulong in_stack_000001f0;
  
  if (unaff_R15 == 0) {
    unaff_R15 = in_stack_00000060;
  }
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar5 = unaff_R12;
  plVar5[1] = unaff_R13;
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f460720;
  plVar5[2] = (long)puVar6;
  plVar5[3] = unaff_R15;
  puVar6 = (undefined8 *)unaff_RBP[1];
  if (puVar6 < (undefined8 *)unaff_RBP[2]) {
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar5;
    puVar6 = puVar6 + 1;
LAB_051be9b1:
    plVar5 = in_stack_00000030;
    unaff_RBP[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar8 = (long *)plVar5[2];
      plVar5[2] = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      plVar8 = (long *)plVar5[1];
      plVar5[1] = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      plVar8 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      func_0x0412a280(plVar5,0x20);
    }
    plVar5 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000000f0);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_000000c8 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051bead3:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar12 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar12 != 0) goto LAB_051beb7d;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051beb75:
        uVar12 = in_stack_000000c8;
      }
      else {
        uVar12 = *(ulong *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051bead3;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051beb75;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (uVar12 = *(ulong *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), uVar12 == 0))
      goto LAB_051beb75;
    }
LAB_051beb7d:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = uVar12;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca164;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051becea;
      }
      goto LAB_051ca169;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051becea:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca16e;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bef28;
      }
      goto LAB_051ca173;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bef28:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca178;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bf167;
      }
      goto LAB_051ca17d;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bf167:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000d8;
    *(undefined4 *)(puVar6 + 2) = 0x3da3d70a;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca182;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bf3b3;
      }
      goto LAB_051ca187;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bf3b3:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000110;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca18c;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bf5ff;
      }
      goto LAB_051ca191;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bf5ff:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000b8;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca196;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bf84b;
      }
      goto LAB_051ca19b;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bf84b:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000108;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1a0;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bfa97;
      }
      goto LAB_051ca1a5;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bfa97:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    uVar10 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = uVar10;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1aa;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bfcf6;
      }
      goto LAB_051ca1af;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bfcf6:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000020;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000190;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000030 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1b4;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *plVar5 = lVar16;
        plVar5[1] = (long)puVar6;
        plVar5[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051bff42;
      }
      goto LAB_051ca1b9;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051bff42:
    plVar8 = in_stack_00000030;
    plVar5[1] = (long)puVar6;
    in_stack_00000030 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar11 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar10 = _UNK_01495162;
    *(undefined8 *)(puVar11 + 4) = _DAT_0149515a;
    *(undefined8 *)(puVar11 + 6) = uVar10;
    uVar4 = _UNK_01495156;
    uVar3 = _UNK_01495152;
    uVar2 = _UNK_0149514e;
    *puVar11 = _DAT_0149514a;
    puVar11[1] = uVar2;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    puVar11[8] = 0x6d726166;
    *(undefined1 *)(puVar11 + 9) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x00000220,&stack0x00000020);
    func_0x0412a280(puVar11,0x28);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    in_stack_00000030 = plVar5;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_00000060 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051c0133:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          lVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_00000060 + 0x128),7);
          if (lVar13 != 0) goto LAB_051c01da;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051c01d5:
        lVar13 = in_stack_00000060;
      }
      else {
        lVar13 = *(long *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051c0133;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051c01d5;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_00000060 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (lVar13 = *(long *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), lVar13 == 0))
      goto LAB_051c01d5;
    }
LAB_051c01da:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = lVar13;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1be;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = uVar15 * 8 + lVar13;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar17 + lVar13 + 8);
        lVar13 = lVar17 + lVar13 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c0351;
      }
      goto LAB_051ca1c3;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c0351:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1c8;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c058f;
      }
      goto LAB_051ca1cd;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c058f:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1d2;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c07ce;
      }
      goto LAB_051ca1d7;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c07ce:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000d8;
    *(undefined4 *)(puVar6 + 2) = 0x3da3d70a;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1dc;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c0a1a;
      }
      goto LAB_051ca1e1;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c0a1a:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000110;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1e6;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c0c66;
      }
      goto LAB_051ca1eb;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c0c66:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000b8;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1f0;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c0eb2;
      }
      goto LAB_051ca1f5;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c0eb2:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000108;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca1fa;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c10fe;
      }
      goto LAB_051ca1ff;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c10fe:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    uVar10 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = uVar10;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca204;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c135d;
      }
      goto LAB_051ca209;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c135d:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000030;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000190;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000038 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca20e;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000038;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c15a9;
      }
      goto LAB_051ca213;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c15a9:
    plVar8 = in_stack_00000038;
    plVar5[1] = (long)puVar6;
    in_stack_00000038 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar11 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar10 = _UNK_013f996b;
    *(undefined8 *)(puVar11 + 4) = _DAT_013f9963;
    *(undefined8 *)(puVar11 + 6) = uVar10;
    uVar4 = _UNK_013f995f;
    uVar3 = _UNK_013f995b;
    uVar2 = _UNK_013f9957;
    *puVar11 = _DAT_013f9953;
    puVar11[1] = uVar2;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    *(undefined8 *)((long)puVar11 + 0x1e) = 0x6d7261665f746f72;
    *(undefined1 *)((long)puVar11 + 0x26) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x00000208,&stack0x00000030);
    func_0x0412a280(puVar11,0x28);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    in_stack_00000038 = plVar5;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_000000c8 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051c17a3:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar12 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar12 != 0) goto LAB_051c184d;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051c1845:
        uVar12 = in_stack_000000c8;
      }
      else {
        uVar12 = *(ulong *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051c17a3;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051c1845;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (uVar12 = *(ulong *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), uVar12 == 0))
      goto LAB_051c1845;
    }
LAB_051c184d:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = uVar12;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca218;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = uVar15 * 8 + lVar13;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar17 + lVar13 + 8);
        lVar13 = lVar17 + lVar13 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c19c4;
      }
      goto LAB_051ca21d;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c19c4:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000000f0);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_000000c8 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051c1ae3:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar12 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar12 != 0) goto LAB_051c1b8d;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051c1b85:
        uVar12 = in_stack_000000c8;
      }
      else {
        uVar12 = *(ulong *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051c1ae3;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051c1b85;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (uVar12 = *(ulong *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), uVar12 == 0))
      goto LAB_051c1b85;
    }
LAB_051c1b8d:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = uVar12;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca222;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c1cfa;
      }
      goto LAB_051ca227;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c1cfa:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca22c;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c1f38;
      }
      goto LAB_051ca231;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c1f38:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca236;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c2177;
      }
      goto LAB_051ca23b;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c2177:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000d8;
    *(undefined4 *)(puVar6 + 2) = 0x3da3d70a;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca240;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c23c3;
      }
      goto LAB_051ca245;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c23c3:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000110;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca24a;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c260f;
      }
      goto LAB_051ca24f;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c260f:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000b8;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca254;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c285b;
      }
      goto LAB_051ca259;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c285b:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000108;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca25e;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c2aa7;
      }
      goto LAB_051ca263;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c2aa7:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    uVar10 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = uVar10;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca268;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c2d06;
      }
      goto LAB_051ca26d;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c2d06:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000038;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000190;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000028 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca272;
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000028;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c2f52;
      }
      goto LAB_051ca277;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c2f52:
    plVar8 = in_stack_00000028;
    plVar5[1] = (long)puVar6;
    in_stack_00000028 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar11 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar10 = _UNK_012d7038;
    in_stack_000001f0 = 0x29;
    *(undefined8 *)(puVar11 + 4) = _DAT_012d7030;
    *(undefined8 *)(puVar11 + 6) = uVar10;
    uVar4 = _UNK_012d702c;
    uVar3 = _UNK_012d7028;
    uVar2 = _UNK_012d7024;
    *puVar11 = _DAT_012d7020;
    puVar11[1] = uVar2;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    *(undefined2 *)(puVar11 + 8) = 0x6d72;
    *(undefined1 *)((long)puVar11 + 0x22) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x000001f0,&stack0x00000038);
    if ((in_stack_000001f0 & 1) != 0) {
      func_0x0412a280(puVar11,in_stack_000001f0 & 0xfffffffffffffffe);
    }
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    in_stack_00000028 = plVar5;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_000000c8 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051c3143:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar12 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar12 != 0) goto LAB_051c31ed;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051c31e5:
        uVar12 = in_stack_000000c8;
      }
      else {
        uVar12 = *(ulong *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051c3143;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051c31e5;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (uVar12 = *(ulong *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), uVar12 == 0))
      goto LAB_051c31e5;
    }
LAB_051c31ed:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = uVar12;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca27c;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = uVar15 * 8 + lVar13;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar17 + lVar13 + 8);
        lVar13 = lVar17 + lVar13 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c336a;
      }
      goto LAB_051ca281;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c336a:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca286;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c35ae;
      }
      goto LAB_051ca28b;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c35ae:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca290;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c37f3;
      }
      goto LAB_051ca295;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c37f3:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000d8;
    *(undefined4 *)(puVar6 + 2) = 0x3da3d70a;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca29a;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3a45;
      }
      goto LAB_051ca29f;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c3a45:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000110;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2a4;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3c97;
      }
      goto LAB_051ca2a9;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c3c97:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000b8;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2ae;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3ee9;
      }
      goto LAB_051ca2b3;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c3ee9:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000108;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2b8;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c413b;
      }
      goto LAB_051ca2bd;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c413b:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    uVar10 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = uVar10;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2c2;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c43a0;
      }
      goto LAB_051ca2c7;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c43a0:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000028;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000190;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000048 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2cc;
      in_stack_000000c8 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000048;
        in_stack_00000060 = lVar13 + uVar15 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c45f2;
      }
      goto LAB_051ca2d1;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c45f2:
    plVar8 = in_stack_00000048;
    plVar5[1] = (long)puVar6;
    in_stack_00000048 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar11 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar10 = _UNK_01495187;
    in_stack_000001d8 = 0x29;
    in_stack_000001e0 = 0x24;
    *(undefined8 *)(puVar11 + 4) = _DAT_0149517f;
    *(undefined8 *)(puVar11 + 6) = uVar10;
    uVar4 = _UNK_0149517b;
    uVar3 = _UNK_01495177;
    uVar2 = _UNK_01495173;
    *puVar11 = _DAT_0149516f;
    puVar11[1] = uVar2;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    puVar11[8] = 0x6d726166;
    *(undefined1 *)(puVar11 + 9) = 0;
    in_stack_000001e8 = puVar11;
    func_0x0d3827b0(in_stack_000000f8,&stack0x000001d8,&stack0x00000028);
    if ((in_stack_000001d8 & 1) != 0) {
      func_0x0412a280(in_stack_000001e8,in_stack_000001d8 & 0xfffffffffffffffe);
    }
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    in_stack_00000048 = plVar5;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    lVar17 = *(long *)(in_stack_000000f0 + 0x68);
    lVar13 = *(long *)(lVar17 + 0x1b0);
    if (lVar13 == 0) {
LAB_051c47e3:
      for (plVar8 = *(long **)(lVar17 + 0x350); plVar8 != *(long **)(lVar17 + 0x358);
          plVar8 = plVar8 + 2) {
        plVar1 = (long *)*plVar8;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar12 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar17,*(ushort *)(in_stack_000000f0 + 0x128),7);
          if (uVar12 != 0) goto LAB_051c488d;
          break;
        }
      }
      if ((*(byte *)(lVar17 + 0x135) & 8) == 0) {
LAB_051c4885:
        uVar12 = in_stack_000000f0;
      }
      else {
        uVar12 = *(ulong *)(lVar17 + 0x200);
      }
    }
    else {
      lVar16 = lVar17 + 0x1b0;
      do {
        bVar18 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6ff178;
        if (!bVar18) {
          lVar16 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar18 * 8);
      } while (lVar13 != 0);
      if ((lVar16 == lVar17 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar16 + 0x20)))
      goto LAB_051c47e3;
      if (*(uint *)(lVar16 + 0x28) < 8) goto LAB_051c4885;
      uVar12 = (ulong)(7 << (((char)*(undefined4 *)(lVar16 + 0x30) -
                             (char)*(undefined4 *)(lVar16 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar16 + 0x34) & (uint)*(ushort *)(in_stack_000000f0 + 0x128));
      if (((ulong)(*(long *)(lVar17 + 0x1f0) - *(long *)(lVar17 + 0x1e8) >> 3) <= uVar12) ||
         (uVar12 = *(ulong *)(*(long *)(lVar17 + 0x1e8) + uVar12 * 8), uVar12 == 0))
      goto LAB_051c4885;
    }
LAB_051c488d:
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = uVar12;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2d6;
      in_stack_00000148 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_00000148 >> 2;
      if ((ulong)((long)in_stack_00000148 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_00000148) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000070;
        in_stack_000000f0 = uVar15 * 8 + lVar13;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar17 + lVar13 + 8);
        lVar13 = lVar17 + lVar13 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_000000f0;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_00000148);
        }
        goto LAB_051c4a10;
      }
      goto LAB_051ca2db;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c4a10:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2e0;
      in_stack_00000148 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_00000148 >> 2;
      if ((ulong)((long)in_stack_00000148 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_00000148) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000070;
        in_stack_000000f0 = lVar13 + uVar15 * 8;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = in_stack_000000f0;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_00000148);
        }
        goto LAB_051c4c5a;
      }
      goto LAB_051ca2e5;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c4c5a:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = lVar7;
    plVar8[1] = (long)puVar6;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = (long)in_stack_00000078;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2ea;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c4e9f;
      }
      goto LAB_051ca2ef;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c4e9f:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000d8;
    *(undefined4 *)(puVar6 + 2) = 0x3da3d70a;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2f4;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c50f1;
      }
      goto LAB_051ca2f9;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c50f1:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000110;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca2fe;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5343;
      }
      goto LAB_051ca303;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c5343:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_000000b8;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca308;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5595;
      }
      goto LAB_051ca30d;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c5595:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000108;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca312;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c57e7;
      }
      goto LAB_051ca317;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c57e7:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    uVar10 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = uVar10;
    *(undefined4 *)(puVar6 + 2) = 0x3e4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if ((undefined8 *)plVar5[2] <= puVar6) {
      lVar7 = *plVar5;
      lVar17 = (long)puVar6 - lVar7;
      uVar12 = (lVar17 >> 3) + 1;
      in_stack_00000070 = plVar8;
      if (0x1fffffffffffffff < uVar12) goto LAB_051ca31c;
      in_stack_00000078 = plVar5;
      in_stack_000000f0 = plVar5[2] - lVar7;
      uVar15 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar16 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        plVar5 = in_stack_00000078;
        *in_stack_00000078 = lVar16;
        in_stack_00000078[1] = (long)puVar6;
        in_stack_00000078[2] = lVar13 + uVar15 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5a4c;
      }
      goto LAB_051ca321;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar6 = plVar8;
    puVar6 = puVar6 + 1;
LAB_051c5a4c:
    plVar8 = in_stack_00000070;
    plVar5[1] = (long)puVar6;
    in_stack_00000070 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar5 = (long *)plVar8[2];
      plVar8[2] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      func_0x0412a280(plVar8,0x20);
    }
    plVar5 = in_stack_00000048;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar6 = &UNK_0f460860;
    puVar6[1] = in_stack_00000190;
    *(undefined4 *)(puVar6 + 2) = 0x3d4ccccd;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f460720;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar8 = (long)puVar6;
    plVar8[1] = (long)puVar9;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f460720;
    plVar8[2] = (long)puVar6;
    plVar8[3] = in_stack_00000018;
    puVar6 = (undefined8 *)plVar5[1];
    if (puVar6 < (undefined8 *)plVar5[2]) {
      in_stack_00000070 = (long *)0x0;
      *puVar6 = plVar8;
      puVar6 = puVar6 + 1;
LAB_051c5c98:
      plVar8 = in_stack_00000070;
      plVar5[1] = (long)puVar6;
      in_stack_00000070 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar5 = (long *)plVar8[2];
        plVar8[2] = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        plVar5 = (long *)plVar8[1];
        plVar8[1] = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        plVar5 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        func_0x0412a280(plVar8,0x20);
      }
      puVar11 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar11 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar10 = _UNK_013df67e;
      in_stack_000001c0 = 0x29;
      in_stack_000001c8 = 0x26;
      *(undefined8 *)(puVar11 + 4) = _DAT_013df676;
      *(undefined8 *)(puVar11 + 6) = uVar10;
      uVar4 = _UNK_013df672;
      uVar3 = _UNK_013df66e;
      uVar2 = _UNK_013df66a;
      *puVar11 = _DAT_013df666;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      *(undefined8 *)((long)puVar11 + 0x1e) = 0x6d7261665f746f72;
      *(undefined1 *)((long)puVar11 + 0x26) = 0;
      in_stack_000001d0 = puVar11;
      func_0x0d3827b0(in_stack_000000f8,&stack0x000001c0,&stack0x00000048);
      if ((in_stack_000001c0 & 1) != 0) {
        func_0x0412a280(in_stack_000001d0,in_stack_000001c0 & 0xfffffffffffffffe);
      }
      plVar5 = in_stack_00000048;
      in_stack_00000048 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        func_0x050ae960(&stack0x00000048);
      }
      plVar5 = in_stack_00000028;
      in_stack_00000028 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        func_0x050ae960(&stack0x00000028);
      }
      plVar5 = in_stack_00000038;
      in_stack_00000038 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        func_0x050ae960(&stack0x00000038);
      }
      plVar5 = in_stack_00000030;
      in_stack_00000030 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        func_0x050ae960(&stack0x00000030);
      }
      plVar5 = in_stack_00000020;
      in_stack_00000020 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        func_0x050ae960(&stack0x00000020);
      }
      lVar7 = in_stack_00000040;
      in_stack_00000040 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000040);
      }
      lVar7 = in_stack_00000050;
      in_stack_00000050 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000050);
      }
      lVar7 = in_stack_00000058;
      in_stack_00000058 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000058);
      }
      lVar7 = in_stack_00000128;
      in_stack_00000128 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000128);
      }
      lVar7 = in_stack_00000178;
      in_stack_00000178 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000178);
      }
      lVar7 = in_stack_00000138;
      in_stack_00000138 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000138);
      }
      lVar7 = in_stack_00000160;
      in_stack_00000160 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000160);
      }
      lVar7 = in_stack_00000140;
      in_stack_00000140 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000140);
      }
      lVar7 = in_stack_00000130;
      in_stack_00000130 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000130);
      }
      lVar7 = in_stack_00000168;
      in_stack_00000168 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000168);
      }
      lVar7 = in_stack_00000180;
      in_stack_00000180 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000180);
      }
      lVar7 = in_stack_00000188;
      in_stack_00000188 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000188);
      }
      lVar7 = in_stack_000000c0;
      in_stack_000000c0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000000c0);
      }
      lVar7 = in_stack_000000a0;
      in_stack_000000a0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000000a0);
      }
      lVar7 = in_stack_000000a8;
      in_stack_000000a8 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000000a8);
      }
      lVar7 = in_stack_00000150;
      in_stack_00000150 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000150);
      }
      lVar7 = in_stack_00000158;
      in_stack_00000158 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000158);
      }
      lVar7 = in_stack_00000118;
      in_stack_00000118 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000118);
      }
      lVar7 = in_stack_00000100;
      in_stack_00000100 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000100);
      }
      lVar7 = in_stack_000000e0;
      in_stack_000000e0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000000e0);
      }
      lVar7 = in_stack_000000d0;
      in_stack_000000d0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000000d0);
      }
      lVar7 = in_stack_00000080;
      in_stack_00000080 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000080);
      }
      lVar7 = in_stack_00000120;
      in_stack_00000120 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000120);
      }
      lVar7 = in_stack_00000198;
      in_stack_00000198 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x00000198);
      }
      lVar7 = in_stack_000001a0;
      in_stack_000001a0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000001a0);
      }
      lVar7 = in_stack_000001b0;
      in_stack_000001b0 = 0;
      if (lVar7 != 0) {
        func_0x050ae960(&stack0x000001b0);
      }
      return;
    }
    lVar7 = *plVar5;
    lVar17 = (long)puVar6 - lVar7;
    uVar12 = (lVar17 >> 3) + 1;
    in_stack_00000070 = plVar8;
    if (uVar12 < 0x2000000000000000) {
      uVar14 = plVar5[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar8 = in_stack_00000070;
        in_stack_00000078 = (long *)(lVar13 + uVar15 * 8);
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar8;
        puVar6 = (undefined8 *)(lVar13 + lVar17 + 8);
        lVar13 = lVar13 + lVar17 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar13,lVar7,lVar17);
        *plVar5 = lVar13;
        plVar5[1] = (long)puVar6;
        plVar5[2] = (long)in_stack_00000078;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051c5c98;
      }
      goto LAB_051ca32b;
    }
  }
  else {
    lVar7 = *unaff_RBP;
    lVar17 = (long)puVar6 - lVar7;
    uVar12 = (lVar17 >> 3) + 1;
    in_stack_00000030 = plVar5;
    if (uVar12 < 0x2000000000000000) {
      uVar14 = unaff_RBP[2] - lVar7;
      uVar15 = (long)uVar14 >> 2;
      if ((ulong)((long)uVar14 >> 2) <= uVar12) {
        uVar15 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 < 0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 8);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar15 * 8,0);
        }
        plVar5 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar13 + lVar17) = plVar5;
        puVar6 = (undefined8 *)(lVar17 + lVar13 + 8);
        lVar16 = lVar17 + lVar13 + (lVar17 >> 3) * -8;
        func_0x0eee2f00(lVar16,lVar7,lVar17);
        *unaff_RBP = lVar16;
        unaff_RBP[1] = (long)puVar6;
        unaff_RBP[2] = uVar15 * 8 + lVar13;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar14);
        }
        goto LAB_051be9b1;
      }
    }
    else {
      func_0x04fa4ea0();
    }
    func_0x04882eb0();
LAB_051ca164:
    func_0x04fa4ea0();
LAB_051ca169:
    func_0x04882eb0();
LAB_051ca16e:
    func_0x04fa4ea0();
LAB_051ca173:
    func_0x04882eb0();
LAB_051ca178:
    func_0x04fa4ea0();
LAB_051ca17d:
    func_0x04882eb0();
LAB_051ca182:
    func_0x04fa4ea0();
LAB_051ca187:
    func_0x04882eb0();
LAB_051ca18c:
    func_0x04fa4ea0();
LAB_051ca191:
    func_0x04882eb0();
LAB_051ca196:
    func_0x04fa4ea0();
LAB_051ca19b:
    func_0x04882eb0();
LAB_051ca1a0:
    func_0x04fa4ea0();
LAB_051ca1a5:
    func_0x04882eb0();
LAB_051ca1aa:
    func_0x04fa4ea0();
LAB_051ca1af:
    func_0x04882eb0();
LAB_051ca1b4:
    func_0x04fa4ea0();
LAB_051ca1b9:
    func_0x04882eb0();
LAB_051ca1be:
    func_0x04fa4ea0();
LAB_051ca1c3:
    func_0x04882eb0();
LAB_051ca1c8:
    func_0x04fa4ea0();
LAB_051ca1cd:
    func_0x04882eb0();
LAB_051ca1d2:
    func_0x04fa4ea0();
LAB_051ca1d7:
    func_0x04882eb0();
LAB_051ca1dc:
    func_0x04fa4ea0();
LAB_051ca1e1:
    func_0x04882eb0();
LAB_051ca1e6:
    func_0x04fa4ea0();
LAB_051ca1eb:
    func_0x04882eb0();
LAB_051ca1f0:
    func_0x04fa4ea0();
LAB_051ca1f5:
    func_0x04882eb0();
LAB_051ca1fa:
    func_0x04fa4ea0();
LAB_051ca1ff:
    func_0x04882eb0();
LAB_051ca204:
    func_0x04fa4ea0();
LAB_051ca209:
    func_0x04882eb0();
LAB_051ca20e:
    func_0x04fa4ea0();
LAB_051ca213:
    func_0x04882eb0();
LAB_051ca218:
    func_0x04fa4ea0();
LAB_051ca21d:
    func_0x04882eb0();
LAB_051ca222:
    func_0x04fa4ea0();
LAB_051ca227:
    func_0x04882eb0();
LAB_051ca22c:
    func_0x04fa4ea0();
LAB_051ca231:
    func_0x04882eb0();
LAB_051ca236:
    func_0x04fa4ea0();
LAB_051ca23b:
    func_0x04882eb0();
LAB_051ca240:
    func_0x04fa4ea0();
LAB_051ca245:
    func_0x04882eb0();
LAB_051ca24a:
    func_0x04fa4ea0();
LAB_051ca24f:
    func_0x04882eb0();
LAB_051ca254:
    func_0x04fa4ea0();
LAB_051ca259:
    func_0x04882eb0();
LAB_051ca25e:
    func_0x04fa4ea0();
LAB_051ca263:
    func_0x04882eb0();
LAB_051ca268:
    func_0x04fa4ea0();
LAB_051ca26d:
    func_0x04882eb0();
LAB_051ca272:
    func_0x04fa4ea0();
LAB_051ca277:
    func_0x04882eb0();
LAB_051ca27c:
    func_0x04fa4ea0();
LAB_051ca281:
    func_0x04882eb0();
LAB_051ca286:
    func_0x04fa4ea0();
LAB_051ca28b:
    func_0x04882eb0();
LAB_051ca290:
    func_0x04fa4ea0();
LAB_051ca295:
    func_0x04882eb0();
LAB_051ca29a:
    func_0x04fa4ea0();
LAB_051ca29f:
    func_0x04882eb0();
LAB_051ca2a4:
    func_0x04fa4ea0();
LAB_051ca2a9:
    func_0x04882eb0();
LAB_051ca2ae:
    func_0x04fa4ea0();
LAB_051ca2b3:
    func_0x04882eb0();
LAB_051ca2b8:
    func_0x04fa4ea0();
LAB_051ca2bd:
    func_0x04882eb0();
LAB_051ca2c2:
    func_0x04fa4ea0();
LAB_051ca2c7:
    func_0x04882eb0();
LAB_051ca2cc:
    func_0x04fa4ea0();
LAB_051ca2d1:
    func_0x04882eb0();
LAB_051ca2d6:
    func_0x04fa4ea0();
LAB_051ca2db:
    func_0x04882eb0();
LAB_051ca2e0:
    func_0x04fa4ea0();
LAB_051ca2e5:
    func_0x04882eb0();
LAB_051ca2ea:
    func_0x04fa4ea0();
LAB_051ca2ef:
    func_0x04882eb0();
LAB_051ca2f4:
    func_0x04fa4ea0();
LAB_051ca2f9:
    func_0x04882eb0();
LAB_051ca2fe:
    func_0x04fa4ea0();
LAB_051ca303:
    func_0x04882eb0();
LAB_051ca308:
    func_0x04fa4ea0();
LAB_051ca30d:
    func_0x04882eb0();
LAB_051ca312:
    func_0x04fa4ea0();
LAB_051ca317:
    func_0x04882eb0();
LAB_051ca31c:
    func_0x04fa4ea0();
LAB_051ca321:
    func_0x04882eb0();
  }
  func_0x04fa4ea0();
LAB_051ca32b:
  uVar10 = func_0x04882eb0();
  if ((in_stack_000001c0 & 1) != 0) {
    func_0x0412a280(in_stack_000001d0,in_stack_000001c0 & 0xfffffffffffffffe);
  }
  plVar5 = in_stack_00000048;
  in_stack_00000048 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    func_0x050ae960(&stack0x00000048);
  }
  plVar5 = in_stack_00000028;
  in_stack_00000028 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    func_0x050ae960(&stack0x00000028);
  }
  plVar8 = in_stack_00000038;
  in_stack_00000038 = (long *)0x0;
  plVar5 = in_stack_00000030;
  if (plVar8 != (long *)0x0) {
    func_0x050ae960(&stack0x00000038);
    plVar5 = in_stack_00000030;
  }
  do {
    in_stack_00000030 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      in_stack_00000030 = (long *)0x0;
      func_0x050ae960(&stack0x00000030);
    }
    plVar5 = in_stack_00000020;
    in_stack_00000020 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x050ae960(&stack0x00000020);
    }
    lVar7 = in_stack_00000040;
    in_stack_00000040 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000040);
    }
    lVar7 = in_stack_00000050;
    in_stack_00000050 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000050);
    }
    lVar7 = in_stack_00000058;
    in_stack_00000058 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000058);
    }
    lVar7 = in_stack_00000128;
    in_stack_00000128 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000128);
    }
    lVar7 = in_stack_00000178;
    in_stack_00000178 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000178);
    }
    lVar7 = in_stack_00000138;
    in_stack_00000138 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000138);
    }
    lVar7 = in_stack_00000160;
    in_stack_00000160 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000160);
    }
    lVar7 = in_stack_00000140;
    in_stack_00000140 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000140);
    }
    lVar7 = in_stack_00000130;
    in_stack_00000130 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000130);
    }
    lVar7 = in_stack_00000168;
    in_stack_00000168 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000168);
    }
    lVar7 = in_stack_00000180;
    in_stack_00000180 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000180);
    }
    lVar7 = in_stack_00000188;
    in_stack_00000188 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000188);
    }
    lVar7 = in_stack_000000c0;
    in_stack_000000c0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000000c0);
    }
    lVar7 = in_stack_000000a0;
    in_stack_000000a0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000000a0);
    }
    lVar7 = in_stack_000000a8;
    in_stack_000000a8 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000000a8);
    }
    lVar7 = in_stack_00000150;
    in_stack_00000150 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000150);
    }
    lVar7 = in_stack_00000158;
    in_stack_00000158 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000158);
    }
    lVar7 = in_stack_00000118;
    in_stack_00000118 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000118);
    }
    lVar7 = in_stack_00000100;
    in_stack_00000100 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000100);
    }
    lVar7 = in_stack_000000e0;
    in_stack_000000e0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000000e0);
    }
    lVar7 = in_stack_000000d0;
    in_stack_000000d0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000000d0);
    }
    lVar7 = in_stack_00000080;
    in_stack_00000080 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000080);
    }
    lVar7 = in_stack_00000120;
    in_stack_00000120 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000120);
    }
    lVar7 = in_stack_00000198;
    in_stack_00000198 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x00000198);
    }
    lVar7 = in_stack_000001a0;
    in_stack_000001a0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000001a0);
    }
    lVar7 = in_stack_000001b0;
    in_stack_000001b0 = 0;
    if (lVar7 != 0) {
      func_0x050ae960(&stack0x000001b0);
    }
    uVar10 = func_0x0eee2d70(uVar10);
    func_0x04f80e60(&stack0x00000038);
    plVar5 = in_stack_00000030;
  } while( true );
}



/* ---- referenced strings ----
 * 0x12d7020  minecraft:abandoned_beet_beet_farm
 * 0x12d7030  ned_beet_beet_farm
 * 0x13df666  minecraft:abandoned_carrot_carrot_farm
 * 0x13df676  ned_carrot_carrot_farm
 * 0x13f9953  minecraft:abandoned_potato_carrot_farm
 * 0x13f9963  ned_potato_carrot_farm
 * 0x149514a  minecraft:abandoned_potato_beet_farm
 * 0x149515a  ned_potato_beet_farm
 * 0x149516f  minecraft:abandoned_beet_carrot_farm
 * 0x149517f  ned_beet_carrot_farm
 */
