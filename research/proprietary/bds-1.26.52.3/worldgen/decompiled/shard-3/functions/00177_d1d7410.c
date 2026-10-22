/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d7410
 * Label: br::worldgen::processors::BlockRules::AlwaysTrue::vslot3
 * Body:  [[0d1d7410, 0d1d762a] [0d1d7642, 0d1d76a9] [0d1d76b4, 0d1d76cf]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot3
 */


/* WARNING: Removing unreachable block (ram,0x0d1d75f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot3(void)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  long *unaff_RBX;
  long *plVar8;
  uint unaff_EBP;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *unaff_R15;
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
  
  *unaff_R15 = in_RAX;
  if (*(long *)*unaff_RBX != 0) {
    *unaff_RBX = *(long *)*unaff_RBX;
  }
  func_0x048bed00(unaff_RBX[1]);
  unaff_RBX[2] = unaff_RBX[2] + 1;
  if ((int)unaff_EBP < 0) {
    puVar9 = &stack0x00000001;
    unaff_retaddr = 0x2d;
    unaff_EBP = -unaff_EBP;
    plVar8 = (long *)unaff_RBX[6];
    lVar4 = (long)&stack0x00000010 + (4 - (long)puVar9);
    if (lVar4 < 10) goto LAB_0d1d7464;
LAB_0d1d749b:
    lVar4 = func_0x04136630(puVar9,unaff_EBP);
    uVar11 = lVar4 - (long)&stack0x00000000;
    if (0xfffffffffffffff7 < uVar11) {
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
    if (uVar11 < 0x17) {
      in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)uVar11 * '\x02');
      lVar4 = (long)&stack0x00000018 + 1;
      if (uVar11 == 0) goto LAB_0d1d74cd;
    }
    else {
      uVar10 = 0x1a;
      if ((uVar11 | 7) != 0x17) {
        uVar10 = (uVar11 | 7) + 1;
      }
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
      if (lVar4 == 0) {
        func_0x0eec74c0(uVar10,0);
      }
      in_stack_00000018 = uVar10 | 1;
      in_stack_00000020 = uVar11;
      in_stack_00000028 = lVar4;
    }
    func_0x0eee2f00(lVar4,&stack0x00000000,uVar11);
  }
  else {
    plVar8 = (long *)unaff_RBX[6];
    lVar4 = (long)&stack0x00000010 + (4 - (long)&stack0x00000000);
    puVar9 = (undefined1 *)register0x00000020;
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
    uVar11 = 0;
  }
  *(undefined1 *)(lVar4 + uVar11) = 0;
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


