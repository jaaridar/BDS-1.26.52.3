/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x51be680
 * Label: callee-of:0x517ab30
 * Body:  [[051be680, 051c6209] [051c85a2, 051c92c7] [051c99df, 051c9c9f] [051ca15a, 051ca359] [051ca63c, 051ca645] [051cd22a, 051cd248] [051cd266, 051cd284] [051cd2a4, 051cd6c5] [051cd6d4, 051cd6fc]]
 * Ghidra: FUN_051be680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_051be680(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong in_RAX;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
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
  byte in_stack_00000238;
  undefined7 in_stack_00000239;
  undefined8 in_stack_00000248;
  
  pcVar5 = (char *)(in_RAX & 0xfffffffffffffff8);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  if ((in_stack_00000238 & 1) != 0) {
    func_0x0412a280(in_stack_00000248,
                    CONCAT71(in_stack_00000239,in_stack_00000238) & 0xfffffffffffffffe);
  }
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  in_stack_00000020 = plVar6;
  lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (lVar7 == 0) {
    func_0x0eec74c0(0x20,0);
  }
  func_0x0d334240(lVar7,in_stack_00000148);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f460720;
  lVar18 = *(long *)(in_stack_00000060 + 0x68);
  lVar14 = *(long *)(lVar18 + 0x1b0);
  if (lVar14 == 0) {
LAB_051be793:
    for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
        plVar9 = plVar9 + 2) {
      plVar1 = (long *)*plVar9;
      if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
        lVar14 = (**(code **)(*plVar1 + 8))(plVar1,lVar18,*(ushort *)(in_stack_00000060 + 0x128),7);
        if (lVar14 != 0) goto LAB_051be83a;
        break;
      }
    }
    if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051be835:
      lVar14 = in_stack_00000060;
    }
    else {
      lVar14 = *(long *)(lVar18 + 0x200);
    }
  }
  else {
    lVar17 = lVar18 + 0x1b0;
    do {
      bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
      if (!bVar19) {
        lVar17 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
    } while (lVar14 != 0);
    if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
    goto LAB_051be793;
    if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051be835;
    uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                           (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                    ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_00000060 + 0x128));
    if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
       (lVar14 = *(long *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), lVar14 == 0)) goto LAB_051be835;
  }
LAB_051be83a:
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *plVar9 = lVar7;
  plVar9[1] = (long)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f460720;
  plVar9[2] = (long)puVar8;
  plVar9[3] = lVar14;
  puVar8 = (undefined8 *)plVar6[1];
  if (puVar8 < (undefined8 *)plVar6[2]) {
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051be9b1:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000000f0);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_000000c8 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051bead3:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar13 != 0) goto LAB_051beb7d;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051beb75:
        uVar13 = in_stack_000000c8;
      }
      else {
        uVar13 = *(ulong *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051bead3;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051beb75;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (uVar13 = *(ulong *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), uVar13 == 0))
      goto LAB_051beb75;
    }
LAB_051beb7d:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = uVar13;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca164;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051becea;
      }
      goto LAB_051ca169;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051becea:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca16e;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bef28;
      }
      goto LAB_051ca173;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bef28:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca178;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bf167;
      }
      goto LAB_051ca17d;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bf167:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000d8;
    *(undefined4 *)(puVar8 + 2) = 0x3da3d70a;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca182;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bf3b3;
      }
      goto LAB_051ca187;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bf3b3:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000110;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca18c;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bf5ff;
      }
      goto LAB_051ca191;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bf5ff:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000b8;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca196;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bf84b;
      }
      goto LAB_051ca19b;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bf84b:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000108;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1a0;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bfa97;
      }
      goto LAB_051ca1a5;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bfa97:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    uVar11 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = uVar11;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1aa;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bfcf6;
      }
      goto LAB_051ca1af;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bfcf6:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000020;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000190;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000030 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1b4;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051bff42;
      }
      goto LAB_051ca1b9;
    }
    in_stack_00000030 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051bff42:
    plVar9 = in_stack_00000030;
    plVar6[1] = (long)puVar8;
    in_stack_00000030 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar11 = _UNK_01495162;
    *(undefined8 *)(puVar12 + 4) = _DAT_0149515a;
    *(undefined8 *)(puVar12 + 6) = uVar11;
    uVar4 = _UNK_01495156;
    uVar3 = _UNK_01495152;
    uVar2 = _UNK_0149514e;
    *puVar12 = _DAT_0149514a;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[8] = 0x6d726166;
    *(undefined1 *)(puVar12 + 9) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x00000220,&stack0x00000020);
    func_0x0412a280(puVar12,0x28);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    in_stack_00000030 = plVar6;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_00000060 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051c0133:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          lVar14 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_00000060 + 0x128),7);
          if (lVar14 != 0) goto LAB_051c01da;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051c01d5:
        lVar14 = in_stack_00000060;
      }
      else {
        lVar14 = *(long *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051c0133;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051c01d5;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_00000060 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (lVar14 = *(long *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), lVar14 == 0))
      goto LAB_051c01d5;
    }
LAB_051c01da:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = lVar14;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1be;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = uVar16 * 8 + lVar14;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar18 + lVar14 + 8);
        lVar14 = lVar18 + lVar14 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c0351;
      }
      goto LAB_051ca1c3;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c0351:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1c8;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c058f;
      }
      goto LAB_051ca1cd;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c058f:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1d2;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c07ce;
      }
      goto LAB_051ca1d7;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c07ce:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000d8;
    *(undefined4 *)(puVar8 + 2) = 0x3da3d70a;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1dc;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c0a1a;
      }
      goto LAB_051ca1e1;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c0a1a:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000110;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1e6;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c0c66;
      }
      goto LAB_051ca1eb;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c0c66:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000b8;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1f0;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c0eb2;
      }
      goto LAB_051ca1f5;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c0eb2:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000108;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca1fa;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c10fe;
      }
      goto LAB_051ca1ff;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c10fe:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    uVar11 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = uVar11;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca204;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c135d;
      }
      goto LAB_051ca209;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c135d:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000030;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000190;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000038 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca20e;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000038;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000038 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c15a9;
      }
      goto LAB_051ca213;
    }
    in_stack_00000038 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c15a9:
    plVar9 = in_stack_00000038;
    plVar6[1] = (long)puVar8;
    in_stack_00000038 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar11 = _UNK_013f996b;
    *(undefined8 *)(puVar12 + 4) = _DAT_013f9963;
    *(undefined8 *)(puVar12 + 6) = uVar11;
    uVar4 = _UNK_013f995f;
    uVar3 = _UNK_013f995b;
    uVar2 = _UNK_013f9957;
    *puVar12 = _DAT_013f9953;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined8 *)((long)puVar12 + 0x1e) = 0x6d7261665f746f72;
    *(undefined1 *)((long)puVar12 + 0x26) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x00000208,&stack0x00000030);
    func_0x0412a280(puVar12,0x28);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    in_stack_00000038 = plVar6;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_000000c8 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051c17a3:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar13 != 0) goto LAB_051c184d;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051c1845:
        uVar13 = in_stack_000000c8;
      }
      else {
        uVar13 = *(ulong *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051c17a3;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051c1845;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (uVar13 = *(ulong *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), uVar13 == 0))
      goto LAB_051c1845;
    }
LAB_051c184d:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = uVar13;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca218;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = uVar16 * 8 + lVar14;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar18 + lVar14 + 8);
        lVar14 = lVar18 + lVar14 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c19c4;
      }
      goto LAB_051ca21d;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c19c4:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000000f0);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_000000c8 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051c1ae3:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar13 != 0) goto LAB_051c1b8d;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051c1b85:
        uVar13 = in_stack_000000c8;
      }
      else {
        uVar13 = *(ulong *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051c1ae3;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051c1b85;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (uVar13 = *(ulong *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), uVar13 == 0))
      goto LAB_051c1b85;
    }
LAB_051c1b8d:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = uVar13;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca222;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c1cfa;
      }
      goto LAB_051ca227;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c1cfa:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca22c;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c1f38;
      }
      goto LAB_051ca231;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c1f38:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca236;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c2177;
      }
      goto LAB_051ca23b;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c2177:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000d8;
    *(undefined4 *)(puVar8 + 2) = 0x3da3d70a;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca240;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c23c3;
      }
      goto LAB_051ca245;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c23c3:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000110;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca24a;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c260f;
      }
      goto LAB_051ca24f;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c260f:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000b8;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca254;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c285b;
      }
      goto LAB_051ca259;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c285b:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000108;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca25e;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c2aa7;
      }
      goto LAB_051ca263;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c2aa7:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    uVar11 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = uVar11;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca268;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c2d06;
      }
      goto LAB_051ca26d;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c2d06:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000038;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000190;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000028 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca272;
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000028;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000028 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c2f52;
      }
      goto LAB_051ca277;
    }
    in_stack_00000028 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c2f52:
    plVar9 = in_stack_00000028;
    plVar6[1] = (long)puVar8;
    in_stack_00000028 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar11 = _UNK_012d7038;
    in_stack_000001f0 = 0x29;
    *(undefined8 *)(puVar12 + 4) = _DAT_012d7030;
    *(undefined8 *)(puVar12 + 6) = uVar11;
    uVar4 = _UNK_012d702c;
    uVar3 = _UNK_012d7028;
    uVar2 = _UNK_012d7024;
    *puVar12 = _DAT_012d7020;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined2 *)(puVar12 + 8) = 0x6d72;
    *(undefined1 *)((long)puVar12 + 0x22) = 0;
    func_0x0d3827b0(in_stack_000000f8,&stack0x000001f0,&stack0x00000038);
    if ((in_stack_000001f0 & 1) != 0) {
      func_0x0412a280(puVar12,in_stack_000001f0 & 0xfffffffffffffffe);
    }
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    in_stack_00000028 = plVar6;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_000000c8 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051c3143:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_000000c8 + 0x128),7);
          if (uVar13 != 0) goto LAB_051c31ed;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051c31e5:
        uVar13 = in_stack_000000c8;
      }
      else {
        uVar13 = *(ulong *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051c3143;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051c31e5;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_000000c8 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (uVar13 = *(ulong *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), uVar13 == 0))
      goto LAB_051c31e5;
    }
LAB_051c31ed:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = uVar13;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca27c;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = uVar16 * 8 + lVar14;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar18 + lVar14 + 8);
        lVar14 = lVar18 + lVar14 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c336a;
      }
      goto LAB_051ca281;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c336a:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca286;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c35ae;
      }
      goto LAB_051ca28b;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c35ae:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca290;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c37f3;
      }
      goto LAB_051ca295;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c37f3:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000d8;
    *(undefined4 *)(puVar8 + 2) = 0x3da3d70a;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca29a;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3a45;
      }
      goto LAB_051ca29f;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c3a45:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000110;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2a4;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3c97;
      }
      goto LAB_051ca2a9;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c3c97:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000b8;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2ae;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c3ee9;
      }
      goto LAB_051ca2b3;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c3ee9:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000108;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2b8;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c413b;
      }
      goto LAB_051ca2bd;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c413b:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    uVar11 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = uVar11;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2c2;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c43a0;
      }
      goto LAB_051ca2c7;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c43a0:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000028;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000190;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000048 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2cc;
      in_stack_000000c8 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000c8 >> 2;
      if ((ulong)((long)in_stack_000000c8 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000c8) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000048;
        in_stack_00000060 = lVar14 + uVar16 * 8;
        in_stack_00000048 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_00000060;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000c8);
        }
        goto LAB_051c45f2;
      }
      goto LAB_051ca2d1;
    }
    in_stack_00000048 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c45f2:
    plVar9 = in_stack_00000048;
    plVar6[1] = (long)puVar8;
    in_stack_00000048 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar11 = _UNK_01495187;
    in_stack_000001d8 = 0x29;
    in_stack_000001e0 = 0x24;
    *(undefined8 *)(puVar12 + 4) = _DAT_0149517f;
    *(undefined8 *)(puVar12 + 6) = uVar11;
    uVar4 = _UNK_0149517b;
    uVar3 = _UNK_01495177;
    uVar2 = _UNK_01495173;
    *puVar12 = _DAT_0149516f;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[8] = 0x6d726166;
    *(undefined1 *)(puVar12 + 9) = 0;
    in_stack_000001e8 = puVar12;
    func_0x0d3827b0(in_stack_000000f8,&stack0x000001d8,&stack0x00000028);
    if ((in_stack_000001d8 & 1) != 0) {
      func_0x0412a280(in_stack_000001e8,in_stack_000001d8 & 0xfffffffffffffffe);
    }
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    in_stack_00000048 = plVar6;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000148);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    lVar18 = *(long *)(in_stack_000000f0 + 0x68);
    lVar14 = *(long *)(lVar18 + 0x1b0);
    if (lVar14 == 0) {
LAB_051c47e3:
      for (plVar9 = *(long **)(lVar18 + 0x350); plVar9 != *(long **)(lVar18 + 0x358);
          plVar9 = plVar9 + 2) {
        plVar1 = (long *)*plVar9;
        if (*(ulong *)(plVar1[1] + 8) == _DAT_0f6ff178) {
          uVar13 = (**(code **)(*plVar1 + 8))
                             (plVar1,lVar18,*(ushort *)(in_stack_000000f0 + 0x128),7);
          if (uVar13 != 0) goto LAB_051c488d;
          break;
        }
      }
      if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_051c4885:
        uVar13 = in_stack_000000f0;
      }
      else {
        uVar13 = *(ulong *)(lVar18 + 0x200);
      }
    }
    else {
      lVar17 = lVar18 + 0x1b0;
      do {
        bVar19 = *(ulong *)(lVar14 + 0x20) < _DAT_0f6ff178;
        if (!bVar19) {
          lVar17 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar19 * 8);
      } while (lVar14 != 0);
      if ((lVar17 == lVar18 + 0x1b0) || (_DAT_0f6ff178 < *(ulong *)(lVar17 + 0x20)))
      goto LAB_051c47e3;
      if (*(uint *)(lVar17 + 0x28) < 8) goto LAB_051c4885;
      uVar13 = (ulong)(7 << (((char)*(undefined4 *)(lVar17 + 0x30) -
                             (char)*(undefined4 *)(lVar17 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar17 + 0x34) & (uint)*(ushort *)(in_stack_000000f0 + 0x128));
      if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar13) ||
         (uVar13 = *(ulong *)(*(long *)(lVar18 + 0x1e8) + uVar13 * 8), uVar13 == 0))
      goto LAB_051c4885;
    }
LAB_051c488d:
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = uVar13;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2d6;
      in_stack_00000148 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_00000148 >> 2;
      if ((ulong)((long)in_stack_00000148 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_00000148) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000070;
        in_stack_000000f0 = uVar16 * 8 + lVar14;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar18 + lVar14 + 8);
        lVar14 = lVar18 + lVar14 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_000000f0;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_00000148);
        }
        goto LAB_051c4a10;
      }
      goto LAB_051ca2db;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c4a10:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_00000170);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2e0;
      in_stack_00000148 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_00000148 >> 2;
      if ((ulong)((long)in_stack_00000148 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_00000148) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000070;
        in_stack_000000f0 = lVar14 + uVar16 * 8;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = in_stack_000000f0;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_00000148);
        }
        goto LAB_051c4c5a;
      }
      goto LAB_051ca2e5;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c4c5a:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (lVar7 == 0) {
      func_0x0eec74c0(0x20,0);
    }
    func_0x0d334240(lVar7,in_stack_000001a8);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = lVar7;
    plVar9[1] = (long)puVar8;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = (long)in_stack_00000078;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2ea;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c4e9f;
      }
      goto LAB_051ca2ef;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c4e9f:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000d8;
    *(undefined4 *)(puVar8 + 2) = 0x3da3d70a;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2f4;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c50f1;
      }
      goto LAB_051ca2f9;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c50f1:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000110;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca2fe;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5343;
      }
      goto LAB_051ca303;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c5343:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_000000b8;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca308;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5595;
      }
      goto LAB_051ca30d;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c5595:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000108;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca312;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c57e7;
      }
      goto LAB_051ca317;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c57e7:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    uVar11 = func_0x0cc41df0(0xf6ff9e0,0xf71b628,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = uVar11;
    *(undefined4 *)(puVar8 + 2) = 0x3e4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if ((undefined8 *)plVar6[2] <= puVar8) {
      lVar7 = *plVar6;
      lVar18 = (long)puVar8 - lVar7;
      uVar13 = (lVar18 >> 3) + 1;
      in_stack_00000070 = plVar9;
      if (0x1fffffffffffffff < uVar13) goto LAB_051ca31c;
      in_stack_00000078 = plVar6;
      in_stack_000000f0 = plVar6[2] - lVar7;
      uVar16 = (long)in_stack_000000f0 >> 2;
      if ((ulong)((long)in_stack_000000f0 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < in_stack_000000f0) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar6 = in_stack_00000070;
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar6;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar17 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        plVar6 = in_stack_00000078;
        *in_stack_00000078 = lVar17;
        in_stack_00000078[1] = (long)puVar8;
        in_stack_00000078[2] = lVar14 + uVar16 * 8;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,in_stack_000000f0);
        }
        goto LAB_051c5a4c;
      }
      goto LAB_051ca321;
    }
    in_stack_00000070 = (long *)0x0;
    *puVar8 = plVar9;
    puVar8 = puVar8 + 1;
LAB_051c5a4c:
    plVar9 = in_stack_00000070;
    plVar6[1] = (long)puVar8;
    in_stack_00000070 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar6 = (long *)plVar9[2];
      plVar9[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)plVar9[1];
      plVar9[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      func_0x0412a280(plVar9,0x20);
    }
    plVar6 = in_stack_00000048;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = &UNK_0f460860;
    puVar8[1] = in_stack_00000190;
    *(undefined4 *)(puVar8 + 2) = 0x3d4ccccd;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f460720;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar9 = (long)puVar8;
    plVar9[1] = (long)puVar10;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f460720;
    plVar9[2] = (long)puVar8;
    plVar9[3] = in_stack_00000018;
    puVar8 = (undefined8 *)plVar6[1];
    if (puVar8 < (undefined8 *)plVar6[2]) {
      in_stack_00000070 = (long *)0x0;
      *puVar8 = plVar9;
      puVar8 = puVar8 + 1;
LAB_051c5c98:
      plVar9 = in_stack_00000070;
      plVar6[1] = (long)puVar8;
      in_stack_00000070 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar6 = (long *)plVar9[2];
        plVar9[2] = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar6 = (long *)plVar9[1];
        plVar9[1] = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        plVar6 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        func_0x0412a280(plVar9,0x20);
      }
      puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar12 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      uVar11 = _UNK_013df67e;
      in_stack_000001c0 = 0x29;
      in_stack_000001c8 = 0x26;
      *(undefined8 *)(puVar12 + 4) = _DAT_013df676;
      *(undefined8 *)(puVar12 + 6) = uVar11;
      uVar4 = _UNK_013df672;
      uVar3 = _UNK_013df66e;
      uVar2 = _UNK_013df66a;
      *puVar12 = _DAT_013df666;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      *(undefined8 *)((long)puVar12 + 0x1e) = 0x6d7261665f746f72;
      *(undefined1 *)((long)puVar12 + 0x26) = 0;
      in_stack_000001d0 = puVar12;
      func_0x0d3827b0(in_stack_000000f8,&stack0x000001c0,&stack0x00000048);
      if ((in_stack_000001c0 & 1) != 0) {
        func_0x0412a280(in_stack_000001d0,in_stack_000001c0 & 0xfffffffffffffffe);
      }
      plVar6 = in_stack_00000048;
      in_stack_00000048 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        func_0x050ae960(&stack0x00000048);
      }
      plVar6 = in_stack_00000028;
      in_stack_00000028 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        func_0x050ae960(&stack0x00000028);
      }
      plVar6 = in_stack_00000038;
      in_stack_00000038 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        func_0x050ae960(&stack0x00000038);
      }
      plVar6 = in_stack_00000030;
      in_stack_00000030 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        func_0x050ae960(&stack0x00000030);
      }
      plVar6 = in_stack_00000020;
      in_stack_00000020 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
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
    lVar7 = *plVar6;
    lVar18 = (long)puVar8 - lVar7;
    uVar13 = (lVar18 >> 3) + 1;
    in_stack_00000070 = plVar9;
    if (uVar13 < 0x2000000000000000) {
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000070;
        in_stack_00000078 = (long *)(lVar14 + uVar16 * 8);
        in_stack_00000070 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar14 + lVar18 + 8);
        lVar14 = lVar14 + lVar18 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar14,lVar7,lVar18);
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar8;
        plVar6[2] = (long)in_stack_00000078;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
        }
        goto LAB_051c5c98;
      }
      goto LAB_051ca32b;
    }
  }
  else {
    lVar7 = *plVar6;
    lVar18 = (long)puVar8 - lVar7;
    uVar13 = (lVar18 >> 3) + 1;
    in_stack_00000030 = plVar9;
    if (uVar13 < 0x2000000000000000) {
      uVar15 = plVar6[2] - lVar7;
      uVar16 = (long)uVar15 >> 2;
      if ((ulong)((long)uVar15 >> 2) <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 < 0x2000000000000000) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
        if (lVar14 == 0) {
          func_0x0eec74c0(uVar16 * 8,0);
        }
        plVar9 = in_stack_00000030;
        in_stack_00000030 = (long *)0x0;
        *(long **)(lVar14 + lVar18) = plVar9;
        puVar8 = (undefined8 *)(lVar18 + lVar14 + 8);
        lVar17 = lVar18 + lVar14 + (lVar18 >> 3) * -8;
        func_0x0eee2f00(lVar17,lVar7,lVar18);
        *plVar6 = lVar17;
        plVar6[1] = (long)puVar8;
        plVar6[2] = uVar16 * 8 + lVar14;
        if (lVar7 != 0) {
          func_0x0412a280(lVar7,uVar15);
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
  uVar11 = func_0x04882eb0();
  if ((in_stack_000001c0 & 1) != 0) {
    func_0x0412a280(in_stack_000001d0,in_stack_000001c0 & 0xfffffffffffffffe);
  }
  plVar6 = in_stack_00000048;
  in_stack_00000048 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    func_0x050ae960(&stack0x00000048);
  }
  plVar6 = in_stack_00000028;
  in_stack_00000028 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    func_0x050ae960(&stack0x00000028);
  }
  plVar9 = in_stack_00000038;
  in_stack_00000038 = (long *)0x0;
  plVar6 = in_stack_00000030;
  if (plVar9 != (long *)0x0) {
    func_0x050ae960(&stack0x00000038);
    plVar6 = in_stack_00000030;
  }
  do {
    in_stack_00000030 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      in_stack_00000030 = (long *)0x0;
      func_0x050ae960(&stack0x00000030);
    }
    plVar6 = in_stack_00000020;
    in_stack_00000020 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
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
    uVar11 = func_0x0eee2d70(uVar11);
    func_0x04f80e60(&stack0x00000038);
    plVar6 = in_stack_00000030;
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
