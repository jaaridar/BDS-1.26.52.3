/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2de2f0
 * Label: string:JigsawJunction
 * Body:  [[0e2de2f0, 0e2de8bb] [0e2deb20, 0e2deb63]]
 * Ghidra: FUN_0e2de2f0
 */


/* WARNING: Removing unreachable block (ram,0x0e2de70a) */
/* WARNING: Removing unreachable block (ram,0x0e2de71c) */
/* WARNING: Removing unreachable block (ram,0x0e2de436) */
/* WARNING: Removing unreachable block (ram,0x0e2de448) */
/* WARNING: Removing unreachable block (ram,0x0e2de5a0) */
/* WARNING: Removing unreachable block (ram,0x0e2de5b2) */
/* WARNING: Removing unreachable block (ram,0x0e2de874) */
/* WARNING: Removing unreachable block (ram,0x0e2de886) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2de2f0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  long *in_stack_00000088;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined1 in_stack_00000170;
  
  func_0x0e395b80((ulong)&stack0x00000070 & 0xffffffff);
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e395920(&stack0x00000070,&stack0x00000ab0,&UNK_012ccabc,0x13);
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar2 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar2 = (long)&UNK_0f4b1d60;
  if (in_stack_00000088 != (long *)0x0) {
    lVar1 = *in_stack_00000088;
    in_stack_00000088 = plVar2;
    (**(code **)(lVar1 + 8))();
    plVar2 = in_stack_00000088;
  }
  in_stack_00000088 = plVar2;
  in_stack_00000008 = in_stack_00000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0e1d0950;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e395b80(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e395920(&stack0x00000070,&stack0x00000af0,&UNK_0138617a,0x17);
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar2 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar2 = (long)&UNK_0f4b1dd8;
  if (in_stack_00000088 != (long *)0x0) {
    lVar1 = *in_stack_00000088;
    in_stack_00000088 = plVar2;
    (**(code **)(lVar1 + 8))();
    plVar2 = in_stack_00000088;
  }
  in_stack_00000088 = plVar2;
  in_stack_00000008 = in_stack_00000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0e1d1aa0;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e395b80(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e395920(&stack0x00000070,&stack0x00000b30,&UNK_012e74a9,0x17);
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar2 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar2 = (long)&UNK_0f4b1e50;
  if (in_stack_00000088 != (long *)0x0) {
    lVar1 = *in_stack_00000088;
    in_stack_00000088 = plVar2;
    (**(code **)(lVar1 + 8))();
    plVar2 = in_stack_00000088;
  }
  in_stack_00000088 = plVar2;
  in_stack_00000008 = in_stack_00000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0e1d2f70;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e395b80(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e395920(&stack0x00000070,&stack0x00000140,&UNK_011fddb3,0x12);
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar3 = &UNK_0f4b8458;
  if (in_stack_00000088 != (long *)0x0) {
    lVar1 = *in_stack_00000088;
    in_stack_00000088 = puVar3;
    (**(code **)(lVar1 + 8))();
    puVar3 = in_stack_00000088;
  }
  in_stack_00000088 = puVar3;
  in_stack_00000008 = in_stack_00000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0e2fd230;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e395b80(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  return;
}


