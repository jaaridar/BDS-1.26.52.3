/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d76f0
 * Label: br::worldgen::processors::BlockRules::RandomBlockStateMatch::vslot3
 * Body:  [[0d1d76f0, 0d1d77df] [0d1d77e1, 0d1d7a91] [0d1d7a9c, 0d1d7aba] [0d1d7ac5, 0d1d7ae0] [0d1d7aeb, 0d1d7af6] [0d1d7b0b, 0d1d7b1c]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot3
 */


/* WARNING: Instruction at (ram,0x0d1d7719) overlaps instruction at (ram,0x0d1d7718)
    */
/* WARNING: Removing unreachable block (ram,0x0d1d79a0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot3
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long in_RAX;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  uint uVar10;
  byte *unaff_RBX;
  uint unaff_EBP;
  byte *pbVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long unaff_R14;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  byte unaff_retaddr;
  undefined1 unaff_retaddr_00;
  undefined1 unaff_retaddr_01;
  undefined5 unaff_retaddr_02;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long *in_stack_00000090;
  
  pbVar11 = (byte *)(in_RAX + -0x73);
  *pbVar11 = *pbVar11 ^ (byte)param_4;
  if (-1 < (char)*pbVar11) {
    if ((char)((char)in_RAX + *param_4) == '\0') {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(unaff_RBX + 0x10);
      uVar4 = *(undefined4 *)(unaff_RBX + 4);
      uVar5 = *(undefined4 *)(unaff_RBX + 8);
      uVar6 = *(undefined4 *)(unaff_RBX + 0xc);
      *param_1 = *(undefined4 *)unaff_RBX;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
    }
    else {
      func_0x0412e5e0(param_1,*(undefined8 *)(unaff_RBX + 0x10),*(undefined8 *)(unaff_RBX + 8));
    }
  }
  func_0x0d1e9970();
  if ((in_stack_00000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,in_stack_00000038 & 0xfffffffffffffffe);
  }
  if ((int)unaff_EBP < 0) {
    puVar12 = &stack0x00000001;
    unaff_retaddr = 0x2d;
    unaff_EBP = -unaff_EBP;
    plVar14 = *(long **)(unaff_R14 + 0x30);
    lVar7 = (long)&stack0x00000010 + (4 - (long)puVar12);
    if (9 < lVar7) goto LAB_0d1d77ac;
LAB_0d1d7775:
    iVar2 = 0x1f;
    if ((unaff_EBP | 1) != 0) {
      for (; (unaff_EBP | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar10 = iVar2 * 0x4d1 + 0x4d1U >> 0xc;
    if ((long)(ulong)((uVar10 - (unaff_EBP < *(uint *)(&UNK_014edae0 + (ulong)uVar10 * 4))) + 1) <=
        lVar7) goto LAB_0d1d77ac;
    in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
LAB_0d1d77de:
    lVar7 = (long)&stack0x00000018 + 1;
    uVar15 = 0;
  }
  else {
    plVar14 = *(long **)(unaff_R14 + 0x30);
    lVar7 = (long)&stack0x00000010 + (4 - (long)&stack0x00000000);
    puVar12 = (undefined1 *)register0x00000020;
    if (lVar7 < 10) goto LAB_0d1d7775;
LAB_0d1d77ac:
    lVar7 = func_0x04136630(puVar12,unaff_EBP);
    uVar15 = lVar7 - (long)&stack0x00000000;
    if (0xfffffffffffffff7 < uVar15) {
      uVar9 = func_0x04882e30();
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,
                        CONCAT53(unaff_retaddr_02,
                                 CONCAT12(unaff_retaddr_01,CONCAT11(unaff_retaddr_00,unaff_retaddr))
                                ) & 0xfffffffffffffffe);
      }
      if ((in_stack_00000030 & 1) != 0) {
        func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
      }
      if ((in_stack_00000070 & 1) != 0) {
        func_0x0412a280(in_stack_00000080,in_stack_00000070 & 0xfffffffffffffffe);
      }
      if ((in_stack_00000050 & 1) != 0) {
        func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
      }
      if ((in_stack_00000018 & 1) != 0) {
        func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar9);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar15 < 0x17) {
      in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)uVar15 * '\x02');
      lVar7 = (long)&stack0x00000018 + 1;
      if (uVar15 == 0) goto LAB_0d1d77de;
    }
    else {
      uVar13 = 0x1a;
      if ((uVar15 | 7) != 0x17) {
        uVar13 = (uVar15 | 7) + 1;
      }
      lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
      if (lVar7 == 0) {
        func_0x0eec74c0(uVar13,0);
      }
      in_stack_00000018 = uVar13 | 1;
      in_stack_00000020 = uVar15;
      in_stack_00000028 = lVar7;
    }
    func_0x0eee2f00(lVar7,&stack0x00000000,uVar15);
  }
  *(undefined1 *)(lVar7 + uVar15) = 0;
  puVar8 = (ulong *)func_0x0412f0e0(&stack0x00000018,0,&UNK_01d96991,0x12);
  in_stack_00000060 = puVar8[2];
  in_stack_00000050 = *puVar8;
  in_stack_00000058 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8 = (ulong *)func_0x0412f8c0(&stack0x00000050,&UNK_01358b46,1);
  in_stack_00000080 = puVar8[2];
  in_stack_00000070 = *puVar8;
  in_stack_00000078 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  bVar16 = (*unaff_RBX & 1) != 0;
  pbVar11 = unaff_RBX + 1;
  if (bVar16) {
    pbVar11 = *(byte **)(unaff_RBX + 0x10);
  }
  uVar15 = (ulong)(*unaff_RBX >> 1);
  if (bVar16) {
    uVar15 = *(ulong *)(unaff_RBX + 8);
  }
  puVar8 = (ulong *)func_0x0412f8c0(&stack0x00000070,pbVar11,uVar15);
  in_stack_00000040 = puVar8[2];
  in_stack_00000030 = *puVar8;
  in_stack_00000038 = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  (**(code **)(*plVar14 + 0x58))(&stack0x00000088,plVar14,&stack0x00000030,&stack0x00000000,9);
  plVar14 = in_stack_00000090;
  if (in_stack_00000090 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000090 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*in_stack_00000090 + 0x10))(in_stack_00000090);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,in_stack_00000070 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000050 & 1) != 0) {
    func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  return;
}


