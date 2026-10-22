/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c4000
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_15BlockPlaceEventEE9s
 * Body:  [[0c5c4000, 0c5c42e7]]
 * Ghidra: FUN_0c5c4000
 */


undefined8 FUN_0c5c4000(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_RBX;
  long unaff_R12;
  long unaff_R14;
  long unaff_R15;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  undefined4 uStack0000000000000021;
  undefined2 uStack0000000000000025;
  undefined1 uStack0000000000000027;
  byte bStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int in_stack_00000040;
  undefined1 in_stack_00000050;
  uint in_stack_00000068;
  char in_stack_00000070;
  undefined1 in_stack_00000078;
  uint in_stack_00000090;
  char in_stack_00000098;
  uint in_stack_000000b8;
  char in_stack_000000c0;
  
  (**(code **)(&UNK_0f3957c8 + unaff_R12 * 8))(&stack0x00000048);
  in_stack_000000b8 = (uint)unaff_R12;
  in_stack_000000c0 = '\x01';
  cVar2 = func_0x0c5c44b0();
  if (in_stack_000000c0 == '\x01') {
    if ((ulong)in_stack_000000b8 != 0xffffffff) {
      (**(code **)(&UNK_0f3900c8 + (ulong)in_stack_000000b8 * 8))(&stack0x00000048,&stack0x000000a0)
      ;
    }
    in_stack_000000b8 = 0xffffffff;
  }
  if (((ulong)in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,(ulong)in_stack_00000008 & 0xfffffffffffffffe);
  }
  if (cVar2 != '\0') {
    iVar4 = 0;
    if (in_stack_00000040 - 1U < 5) {
      iVar4 = in_stack_00000040;
    }
    *(short *)(unaff_RBX + 0x30) = (short)iVar4;
  }
  if ((bStack0000000000000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,
                    CONCAT71(uStack0000000000000029,bStack0000000000000028) & 0xfffffffffffffffe);
  }
  if (cVar2 == '\0') {
LAB_0c5c42d6:
    uVar3 = 0;
  }
  else {
    if (*(long *)(unaff_R14 + 0x38) != 0) {
      bStack0000000000000020 = 0xc;
      uStack0000000000000021 = 0x616d6f64;
      uStack0000000000000025 = 0x6e69;
      uStack0000000000000027 = 0;
      in_stack_00000078 = 0;
      in_stack_00000098 = '\0';
      if (*(char *)(unaff_R15 + 0x88) == '\x01') {
        in_stack_00000090 = 0xffffffff;
        uVar1 = *(uint *)(unaff_R15 + 0x80);
        if ((ulong)uVar1 != 0xffffffff) {
          in_stack_00000008 = &stack0x00000078;
          (**(code **)(&UNK_0f3957c8 + (ulong)uVar1 * 8))(&stack0x00000008,unaff_R15 + 0x68);
          in_stack_00000090 = uVar1;
        }
        in_stack_00000098 = '\x01';
      }
      cVar2 = func_0x0c5c44b0();
      if (in_stack_00000098 == '\x01') {
        if ((ulong)in_stack_00000090 != 0xffffffff) {
          (**(code **)(&UNK_0f3900c8 + (ulong)in_stack_00000090 * 8))
                    (&stack0x00000008,&stack0x00000078);
        }
        in_stack_00000090 = 0xffffffff;
      }
      if ((bStack0000000000000020 & 1) != 0) {
        func_0x0412a280(in_stack_00000030,
                        CONCAT17(uStack0000000000000027,
                                 CONCAT25(uStack0000000000000025,
                                          CONCAT41(uStack0000000000000021,bStack0000000000000020)))
                        & 0xfffffffffffffffe);
      }
      if (cVar2 == '\0') goto LAB_0c5c42d6;
    }
    if (*(long *)(unaff_R14 + 0x48) != 0) {
      bStack0000000000000020 = 10;
      uStack0000000000000021 = 0x756c6176;
      uStack0000000000000025 = 0x65;
      in_stack_00000050 = 0;
      in_stack_00000070 = '\0';
      if (*(char *)(unaff_R15 + 0xb0) == '\x01') {
        in_stack_00000068 = 0xffffffff;
        uVar1 = *(uint *)(unaff_R15 + 0xa8);
        if ((ulong)uVar1 != 0xffffffff) {
          in_stack_00000008 = &stack0x00000050;
          (**(code **)(&UNK_0f3957c8 + (ulong)uVar1 * 8))(&stack0x00000008,unaff_R15 + 0x90);
          in_stack_00000068 = uVar1;
        }
        in_stack_00000070 = '\x01';
      }
      cVar2 = func_0x0c5c44b0();
      if (in_stack_00000070 == '\x01') {
        if ((ulong)in_stack_00000068 != 0xffffffff) {
          (**(code **)(&UNK_0f3900c8 + (ulong)in_stack_00000068 * 8))
                    (&stack0x00000008,&stack0x00000050);
        }
        in_stack_00000068 = 0xffffffff;
      }
      if ((bStack0000000000000020 & 1) != 0) {
        func_0x0412a280(in_stack_00000030,
                        CONCAT17(uStack0000000000000027,
                                 CONCAT25(uStack0000000000000025,
                                          CONCAT41(uStack0000000000000021,bStack0000000000000020)))
                        & 0xfffffffffffffffe);
      }
      if (cVar2 == '\0') goto LAB_0c5c42d6;
    }
    uVar3 = 1;
  }
  return uVar3;
}


