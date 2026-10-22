/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d7430
 * Label: br::worldgen::processors::BlockRules::BlockMatch::vslot2
 * Body:  [[0d1d7430, 0d1d74df] [0d1d74e1, 0d1d760f] [0d1d7611, 0d1d762a] [0d1d7642, 0d1d76a9] [0d1d76b4, 0d1d76cf]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockMatch__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d75f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockRules__BlockMatch__vslot2(void)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  ulong in_RAX;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  char in_CL;
  uint uVar7;
  long unaff_RBX;
  long *plVar8;
  uint unaff_EBP;
  ulong uVar9;
  ulong uVar10;
  char in_CF;
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
  long *in_stack_00000058;
  
  *(char *)(in_RAX - 0x73) = *(char *)(in_RAX - 0x73) + in_CL + in_CF;
  if ((int)unaff_EBP < 0) {
    unaff_retaddr = 0x2d;
    unaff_EBP = -unaff_EBP;
    plVar8 = *(long **)(unaff_RBX + 0x30);
    lVar4 = (in_RAX & 0xffffffffffffff14) - (long)&stack0x00000001;
    if (lVar4 < 10) goto LAB_0d1d7464;
LAB_0d1d749b:
    lVar4 = func_0x04136630();
    uVar10 = lVar4 - (long)&stack0x00000000;
    if (0xfffffffffffffff7 < uVar10) {
      uVar6 = func_0x04882e30();
      if ((unaff_retaddr & 1) != 0) goto LAB_0d1d7675;
      if ((in_stack_00000030 & 1) != 0) goto LAB_0d1d768e;
      while ((in_stack_00000018 & 1) == 0) {
        while( true ) {
          func_0x0eee2d70(uVar6);
LAB_0d1d7675:
          func_0x0412a280(in_stack_00000010,
                          CONCAT53(unaff_retaddr_02,
                                   CONCAT12(unaff_retaddr_01,
                                            CONCAT11(unaff_retaddr_00,unaff_retaddr))) &
                          0xfffffffffffffffe);
          if ((in_stack_00000030 & 1) == 0) break;
LAB_0d1d768e:
          func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
          if ((in_stack_00000018 & 1) != 0) goto LAB_0d1d76b4;
        }
      }
LAB_0d1d76b4:
      func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
      func_0x0eee2d70(uVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar10 < 0x17) {
      in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)uVar10 * '\x02');
      lVar4 = (long)&stack0x00000018 + 1;
      if (uVar10 == 0) goto LAB_0d1d74cd;
    }
    else {
      uVar9 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        uVar9 = (uVar10 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
      if (lVar4 == 0) {
        func_0x0eec74c0(uVar9,0);
      }
      in_stack_00000018 = uVar9 | 1;
      in_stack_00000020 = uVar10;
      in_stack_00000028 = lVar4;
    }
    func_0x0eee2f00(lVar4,&stack0x00000000,uVar10);
  }
  else {
    plVar8 = *(long **)(unaff_RBX + 0x30);
    lVar4 = (in_RAX & 0xffffffffffffff14) - (long)&stack0x00000000;
    if (9 < lVar4) goto LAB_0d1d749b;
LAB_0d1d7464:
    iVar2 = 0x1f;
    if ((unaff_EBP | 1) != 0) {
      for (; (unaff_EBP | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar7 = iVar2 * 0x4d1 + 0x4d1U >> 0xc;
    if ((long)(ulong)((uVar7 - (unaff_EBP < *(uint *)(&UNK_014edae0 + (ulong)uVar7 * 4))) + 1) <=
        lVar4) goto LAB_0d1d749b;
    in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
LAB_0d1d74cd:
    lVar4 = (long)&stack0x00000018 + 1;
    uVar10 = 0;
  }
  *(undefined1 *)(lVar4 + uVar10) = 0;
  puVar5 = (ulong *)func_0x0412f0e0(&stack0x00000018,0,&UNK_01d96991,0x12);
  in_stack_00000040 = puVar5[2];
  in_stack_00000030 = *puVar5;
  in_stack_00000038 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  (**(code **)(*plVar8 + 0x58))(&stack0x00000050,plVar8,&stack0x00000030,&stack0x00000000,9);
  plVar8 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000058 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  return;
}


