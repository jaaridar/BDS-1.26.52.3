/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe55d060
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e55d060, 0e55d18b] [0e55d211, 0e55d23e] [0e55d25f, 0e55d26d] [0e55d273, 0e55d29c] [0e55d2e7, 0e55d347]]
 * Ghidra: FUN_0e55d060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0e55d060(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong in_RAX;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *unaff_RBX;
  ulong unaff_R12;
  long unaff_R14;
  long lVar10;
  long in_XMM0_Qb;
  long lStack0000000000000008;
  long lStack0000000000000010;
  uint in_stack_00000038;
  undefined1 uStack0000000000000050;
  
  pcVar5 = (char *)(in_RAX & 0xffffffffffffff38);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  lStack0000000000000010 = 0;
  lVar2 = *unaff_RBX;
  lVar3 = unaff_RBX[1];
  uStack0000000000000050 = 0;
  lVar10 = lVar3 - lVar2;
  if (lVar10 == 0) {
    in_stack_00000038 = 0;
    lStack0000000000000008 = in_XMM0_Qb;
  }
  else {
    uVar9 = (lVar10 >> 3) * 0x14c1bacf914c1bad;
    if (unaff_R12 <= uVar9 && uVar9 - unaff_R12 != 0) {
      uVar7 = func_0x084910e0();
      uVar7 = func_0x04882e20(uVar7);
      func_0x0412a280();
      uVar7 = func_0x0eee2d70(uVar7);
      func_0x08491060(&stack0x00000048);
      func_0x0e5582b0(&stack0x00000020);
      uVar7 = func_0x0eee2d70(uVar7);
      if (lVar10 != 0) {
        do {
          func_0x049ea4f0(unaff_R14 + -0x128 + lVar10);
          lVar10 = lVar10 + -0x128;
        } while (lVar10 != 0);
      }
      func_0x08491060(&stack0x00000000);
      func_0x0eee2d70(uVar7);
      pcVar4 = (code *)swi(3);
      plVar8 = (long *)(*pcVar4)();
      return plVar8;
    }
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
    if (lVar6 == 0) {
      func_0x0eec74c0(lVar10,0);
    }
    lStack0000000000000010 = lVar10 + lVar6;
    lVar10 = 0;
    lStack0000000000000008 = lVar6;
    do {
      func_0x084910f0(lVar6 + lVar10,lVar10 + lVar2);
      lVar1 = lVar10 + lVar2;
      lVar10 = lVar10 + 0x128;
    } while (lVar1 + 0x128 != lVar3);
    lStack0000000000000008 = lVar6 + lVar10;
    plVar8 = (long *)0x0;
    if (in_stack_00000038 == 0) {
      plVar8 = unaff_RBX;
    }
    lVar2 = lStack0000000000000008;
    if (lVar6 != 0) {
      while (lVar2 != lVar6) {
        func_0x049ea4f0(lVar2 + -0x128);
        lVar2 = lVar2 + -0x128;
      }
      lStack0000000000000008 = lVar6;
      func_0x0412a280(lVar6,lStack0000000000000010 - lVar6);
    }
    unaff_RBX = plVar8;
    if (in_stack_00000038 == 0xffffffff) {
      return plVar8;
    }
  }
  (**(code **)(&UNK_0f4bde00 + (ulong)in_stack_00000038 * 8))(&stack0x00000000,&stack0x00000020);
  return unaff_RBX;
}


