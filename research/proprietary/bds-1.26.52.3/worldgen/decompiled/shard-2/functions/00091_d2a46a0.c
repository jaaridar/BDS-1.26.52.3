/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a46a0
 * Label: FlatWorldGenerator::vslot15
 * Body:  [[0d2a46a0, 0d2a4714] [0d2a479e, 0d2a4b80] [0d2a4ba5, 0d2a4bb5] [0d2a4bc8, 0d2a4bd9]]
 * Ghidra: wg_FlatWorldGenerator__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_FlatWorldGenerator__vslot15(void)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long unaff_RBP;
  long unaff_R15;
  long in_stack_00000018;
  ulong in_stack_00000030;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  undefined2 in_stack_00000080;
  long in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined2 in_stack_000000c0;
  
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))();
  if (unaff_RBP != 0 && plVar2 == (long *)0x0) {
    func_0x0eec74c0();
  }
  *plVar2 = unaff_R15;
  func_0x0eee2f00(plVar2 + 1);
  *(undefined1 *)((long)plVar2 + unaff_R15 + 8) = 0;
  func_0x0d6b3300(&stack0x00000050);
  if (in_stack_00000048._4_4_ == 1) {
    if ((*(long *)(in_stack_00000018 + 0x28) == 0) &&
       (cVar1 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_014c0ba3),
       cVar1 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char **)(in_stack_00000018 + 0x10) == (char *)0x0) ||
       (**(char **)(in_stack_00000018 + 0x10) != '\x01')) {
      cVar1 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_014c0ba3);
      if (cVar1 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(long *)(in_stack_00000018 + 0x10) == 0) &&
         (cVar1 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar1 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if ((**(char **)(in_stack_00000018 + 0x10) == '\0') &&
       (cVar1 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar1 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x0d2a4ca0(&stack0x00000090);
    *in_stack_00000040 = in_stack_00000090;
  }
  else {
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
    if (lVar3 == 0) {
      func_0x0eec74c0(0x90,0);
    }
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_00000090 = in_stack_00000050;
    in_stack_00000098 = in_stack_00000058;
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    uStack00000000000000a8 = uStack0000000000000068;
    uStack00000000000000ac = uStack000000000000006c;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    in_stack_000000c0 = in_stack_00000080;
    func_0x0d2a72b0(lVar3);
    if ((in_stack_000000b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000b8 & 0xff00ffffffffffff) - 8);
    }
    in_stack_000000b8 = 0;
    if ((in_stack_000000b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000b0 & 0xff00ffffffffffff) - 8);
    }
    in_stack_000000b0 = 0;
    if ((in_stack_000000a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_000000a0 & 0xff00ffffffffffff) - 8);
    }
    in_stack_000000a0 = 0;
    if ((in_stack_00000098 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000098 & 0xff00ffffffffffff) - 8);
    }
    *in_stack_00000040 = lVar3;
  }
  if ((in_stack_00000078 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000078 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000078 = 0;
  if ((in_stack_00000070 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000070 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000070 = 0;
  if ((in_stack_00000060 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000060 & 0xff00ffffffffffff) - 8);
  }
  in_stack_00000060 = 0;
  if ((in_stack_00000058 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000058 & 0xff00ffffffffffff) - 8);
  }
  (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)(plVar2 + 1) & 0xff00ffffffffffff) - 8);
  if ((in_stack_00000030 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000030 & 0xff00ffffffffffff) - 8);
  }
  return in_stack_00000040;
}


