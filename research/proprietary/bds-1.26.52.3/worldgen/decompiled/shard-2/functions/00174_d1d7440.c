/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d7440
 * Label: br::worldgen::processors::BlockRules::BlockMatch::vslot3
 * Body:  [[0d1d7440, 0d1d744b] [0d1d7464, 0d1d750f] [0d1d7642, 0d1d76a9] [0d1d76b4, 0d1d76cf]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockMatch__vslot3
 */


/* WARNING: Removing unreachable block (ram,0x0d1d75f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_br__worldgen__processors__BlockRules__BlockMatch__vslot3
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long in_RAX;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long *unaff_RBX;
  uint unaff_EBP;
  ulong uVar9;
  ulong uVar10;
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
  
  *(byte *)(in_RAX + 0x29) = *(byte *)(in_RAX + 0x29) ^ param_4;
  if (in_RAX < 10) {
    iVar2 = 0x1f;
    if ((unaff_EBP | 1) != 0) {
      for (; (unaff_EBP | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar8 = iVar2 * 0x4d1 + 0x4d1U >> 0xc;
    if ((long)(ulong)((uVar8 - (unaff_EBP < *(uint *)(&UNK_014edae0 + (ulong)uVar8 * 4))) + 1) <=
        in_RAX) goto LAB_0d1d749b;
    in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
LAB_0d1d74cd:
    lVar5 = (long)&stack0x00000018 + 1;
    uVar10 = 0;
  }
  else {
LAB_0d1d749b:
    lVar5 = func_0x04136630(param_1,unaff_EBP);
    uVar10 = lVar5 - (long)&stack0x00000000;
    if (0xfffffffffffffff7 < uVar10) {
      uVar7 = func_0x04882e30();
      if ((unaff_retaddr & 1) != 0) goto LAB_0d1d7675;
      if ((in_stack_00000030 & 1) != 0) goto LAB_0d1d768e;
      while ((in_stack_00000018 & 1) == 0) {
        while( true ) {
          func_0x0eee2d70(uVar7);
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
      func_0x0eee2d70(uVar7);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar10 < 0x17) {
      in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)uVar10 * '\x02');
      lVar5 = (long)&stack0x00000018 + 1;
      if (uVar10 == 0) goto LAB_0d1d74cd;
    }
    else {
      uVar9 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        uVar9 = (uVar10 | 7) + 1;
      }
      lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
      if (lVar5 == 0) {
        func_0x0eec74c0(uVar9,0);
      }
      in_stack_00000018 = uVar9 | 1;
      in_stack_00000020 = uVar10;
      in_stack_00000028 = lVar5;
    }
    func_0x0eee2f00(lVar5,&stack0x00000000,uVar10);
  }
  *(undefined1 *)(lVar5 + uVar10) = 0;
  puVar6 = (ulong *)func_0x0412f0e0(&stack0x00000018,0,&UNK_01d96991,0x12);
  in_stack_00000040 = puVar6[2];
  in_stack_00000030 = *puVar6;
  in_stack_00000038 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  (**(code **)(*unaff_RBX + 0x58))(&stack0x00000050);
  plVar4 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000058 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058);
      func_0x0412c2d0(plVar4);
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


