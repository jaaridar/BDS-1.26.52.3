/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7723900
 * Label: string:Temperature
 * Body:  [[07723900, 07723b38] [07723b40, 07723bc3]]
 * Ghidra: FUN_07723900
 */


/* WARNING: Removing unreachable block (ram,0x0772399d) */
/* WARNING: Removing unreachable block (ram,0x077239b0) */
/* WARNING: Removing unreachable block (ram,0x07723a9a) */
/* WARNING: Removing unreachable block (ram,0x07723ab1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07723900(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined1 uStack00000000000000a4;
  undefined *puStack00000000000000c0;
  undefined8 in_stack_000000c8;
  undefined *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined1 uStack00000000000000ec;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined1 *in_stack_00000108;
  
  puStack00000000000000c0 = &UNK_0f0e6f88;
  lVar4 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar4 == 0) {
    func_0x048b0de0(&stack0x00000080,&stack0x0000000f);
    _DAT_0f54fd90 = uStack0000000000000080;
    uRam000000000f54fd94 = uStack0000000000000084;
    _uStack0000000000000080 = 0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uStack0000000000000088;
    uRam000000000f54fd9c = uStack000000000000008c;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar4 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  in_stack_000000d8 = &UNK_077d64b0;
  in_stack_000000e8 = 0xe125457f;
  in_stack_000000e0 = 0;
  uStack00000000000000ec = 4;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  uStack00000000000000a4 = 4;
  in_stack_000000c8 = 0;
  in_stack_000000f0 = lVar4;
  func_0x0ed6b850(&stack0x00000108,&stack0x000003e0,&stack0x00000080,&stack0x000000c0);
  func_0x048e6440();
  func_0x048e65b0(&stack0x00000108);
  if (in_stack_00000020 == (long *)0x0) {
    *in_stack_00000018 = 0;
  }
  else {
    *in_stack_00000018 = 0;
    LOCK();
    plVar2 = in_stack_00000020 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*in_stack_00000020 + 0x10))(in_stack_00000020);
      func_0x0412c2d0(in_stack_00000020);
    }
  }
  lVar3 = in_stack_00000060;
  lVar4 = in_stack_00000068;
  if (in_stack_00000060 != 0) {
    for (; lVar3 != lVar4; lVar4 = lVar4 + -0x38) {
      if ((*(byte *)(lVar4 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar4 + -0x28),
                        *(ulong *)(lVar4 + -0x38) & 0xfffffffffffffffe);
      }
    }
    in_stack_00000068 = lVar3;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  in_stack_00000108 = &stack0x00000040;
  func_0x048b0f50(&stack0x00000108);
  if (in_stack_00000028 != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
  }
  return;
}


