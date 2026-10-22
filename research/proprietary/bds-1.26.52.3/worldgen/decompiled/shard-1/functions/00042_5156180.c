/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5156180
 * Label: callee-of:0x5182630
 * Body:  [[05156180, 05156338]]
 * Ghidra: FUN_05156180
 */


void FUN_05156180(void)

{
  ulong uVar1;
  ulong *puVar2;
  long in_stack_00000020;
  long in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000080;
  long in_stack_00000090;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  ulong *in_stack_00000100;
  undefined1 uStack0000000000000108;
  undefined8 in_stack_00000118;
  
  if ((_uStack0000000000000108 & 1) != 0) {
    func_0x0412a280(in_stack_00000118,_uStack0000000000000108 & 0xfffffffffffffffe);
  }
  func_0x0516a060(&stack0x00000100,&UNK_012a408b,&stack0x000000a0);
  func_0x0d3301c0(in_stack_000000b8,&stack0x00000100);
  puVar2 = in_stack_00000100;
  in_stack_00000100 = (ulong *)0x0;
  if (puVar2 != (ulong *)0x0) {
    if ((puVar2[6] & 1) != 0) {
      func_0x0412a280(puVar2[8],puVar2[6] & 0xfffffffffffffffe);
    }
    uVar1 = puVar2[3];
    if (uVar1 != 0) {
      puVar2[4] = uVar1;
      func_0x0412a280(uVar1,puVar2[5] - uVar1);
    }
    if ((*puVar2 & 1) != 0) {
      func_0x0412a280(puVar2[2],*puVar2 & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar2,0x48);
  }
  if (in_stack_000000a0 != 0) {
    in_stack_000000a8 = in_stack_000000a0;
    func_0x0412a280(in_stack_000000a0,in_stack_000000b0 - in_stack_000000a0);
  }
  if (in_stack_00000060 != 0) {
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000080 != 0) {
    func_0x0412a280(in_stack_00000080,in_stack_00000090 - in_stack_00000080);
  }
  if (in_stack_00000040 != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000050 - in_stack_00000040);
  }
  if (in_stack_000000c0 != 0) {
    in_stack_000000c8 = in_stack_000000c0;
    func_0x0412a280(in_stack_000000c0,in_stack_000000d0 - in_stack_000000c0);
  }
  if (in_stack_00000020 != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000030 - in_stack_00000020);
  }
  if (in_stack_000000e0 != 0) {
    in_stack_000000e8 = in_stack_000000e0;
    func_0x0412a280(in_stack_000000e0,in_stack_000000f0 - in_stack_000000e0);
  }
  return;
}


