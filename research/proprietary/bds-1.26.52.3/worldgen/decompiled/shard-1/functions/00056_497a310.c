/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x497a310
 * Label: string:ZN21BiomeJsonDocumentGlue17registerComponentIN11SharedTypes4
 * Body:  [[0497a310, 0497aa94]]
 * Ghidra: FUN_0497a310
 */


/* WARNING: Removing unreachable block (ram,0x0497a8e9) */
/* WARNING: Removing unreachable block (ram,0x0497a5a5) */
/* WARNING: Removing unreachable block (ram,0x0497a74b) */
/* WARNING: Removing unreachable block (ram,0x0497aa5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0497a310(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  bool in_ZF;
  long *unaff_retaddr;
  byte bStack0000000000000008;
  undefined7 uStack0000000000000009;
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  byte in_stack_000000c8;
  undefined7 uStack00000000000000c9;
  undefined1 in_stack_000000d0;
  undefined1 uStack00000000000000d1;
  undefined8 in_stack_000000d8;
  long *in_stack_000001a0;
  
  if (!in_ZF) {
    in_stack_000000b0 = param_1;
    func_0x0412a280(param_1,in_stack_000000b8 - param_1);
  }
  if (in_stack_00000090 != 0) {
    in_stack_00000098 = in_stack_00000090;
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000078 != 0) {
    in_stack_00000080 = in_stack_00000078;
    func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
  }
  if (in_stack_00000060 != 0) {
    in_stack_00000068 = in_stack_00000060;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000048 != 0) {
    in_stack_00000050 = in_stack_00000048;
    func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
  }
  if (in_stack_00000030 != 0) {
    in_stack_00000038 = in_stack_00000030;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  if (unaff_retaddr != (long *)0x0) {
    (**(code **)(*unaff_retaddr + 8))();
  }
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x88,0);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[0x10] = 0;
  *puVar2 = &UNK_0f0e1dc0;
  func_0x076dddd0(&stack0x00000008,&UNK_0139587d,0x22,6);
  in_stack_000000c8 = (byte)puVar2;
  uStack00000000000000c9 = (undefined7)((ulong)puVar2 >> 8);
  func_0x0766c410(*unaff_RBP,&stack0x000000c8,&stack0x00000008,1);
  plVar1 = (long *)CONCAT71(uStack00000000000000c9,in_stack_000000c8);
  in_stack_000000c8 = 0;
  uStack00000000000000c9 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (in_stack_000000a8 != 0) {
    in_stack_000000b0 = in_stack_000000a8;
    func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
  }
  if (in_stack_00000090 != 0) {
    in_stack_00000098 = in_stack_00000090;
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000078 != 0) {
    in_stack_00000080 = in_stack_00000078;
    func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
  }
  if (in_stack_00000060 != 0) {
    in_stack_00000068 = in_stack_00000060;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000048 != 0) {
    in_stack_00000050 = in_stack_00000048;
    func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
  }
  if (in_stack_00000030 != 0) {
    in_stack_00000038 = in_stack_00000030;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[10] = 0;
  *puVar2 = &UNK_0f0e1e40;
  func_0x076decf0(&stack0x00000008,&UNK_011f1bf2,0x1f,6);
  in_stack_000000c8 = (byte)puVar2;
  uStack00000000000000c9 = (undefined7)((ulong)puVar2 >> 8);
  func_0x0766c410(*unaff_RBP,&stack0x000000c8,&stack0x00000008,1);
  plVar1 = (long *)CONCAT71(uStack00000000000000c9,in_stack_000000c8);
  in_stack_000000c8 = 0;
  uStack00000000000000c9 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (in_stack_000000a8 != 0) {
    in_stack_000000b0 = in_stack_000000a8;
    func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
  }
  if (in_stack_00000090 != 0) {
    in_stack_00000098 = in_stack_00000090;
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000078 != 0) {
    in_stack_00000080 = in_stack_00000078;
    func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
  }
  if (in_stack_00000060 != 0) {
    in_stack_00000068 = in_stack_00000060;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000048 != 0) {
    in_stack_00000050 = in_stack_00000048;
    func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
  }
  if (in_stack_00000030 != 0) {
    in_stack_00000038 = in_stack_00000030;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = &UNK_0f0e1ec0;
  func_0x076df430(&stack0x00000008,&UNK_011a1847,0x28,6);
  in_stack_000000c8 = (byte)puVar2;
  uStack00000000000000c9 = (undefined7)((ulong)puVar2 >> 8);
  func_0x0766c410(*unaff_RBP,&stack0x000000c8,&stack0x00000008,1);
  plVar1 = (long *)CONCAT71(uStack00000000000000c9,in_stack_000000c8);
  in_stack_000000c8 = 0;
  uStack00000000000000c9 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (in_stack_000000a8 != 0) {
    in_stack_000000b0 = in_stack_000000a8;
    func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
  }
  if (in_stack_00000090 != 0) {
    in_stack_00000098 = in_stack_00000090;
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000078 != 0) {
    in_stack_00000080 = in_stack_00000078;
    func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
  }
  if (in_stack_00000060 != 0) {
    in_stack_00000068 = in_stack_00000060;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000048 != 0) {
    in_stack_00000050 = in_stack_00000048;
    func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
  }
  if (in_stack_00000030 != 0) {
    in_stack_00000038 = in_stack_00000030;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  in_stack_000000c8 = 0x10;
  uStack00000000000000c9 = 0x6e65206b636974;
  in_stack_000000d0 = 100;
  uStack00000000000000d1 = 0;
  func_0x07556760(&stack0x00000000,&stack0x000000c8);
  in_stack_000001a0 = (long *)0x0;
  func_0x0766c8f0(*unaff_RBP,&stack0x000001a0,&stack0x00000008,1);
  plVar1 = in_stack_000001a0;
  in_stack_000001a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (in_stack_000000a8 != 0) {
    in_stack_000000b0 = in_stack_000000a8;
    func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
  }
  if (in_stack_00000090 != 0) {
    in_stack_00000098 = in_stack_00000090;
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  if (in_stack_00000078 != 0) {
    in_stack_00000080 = in_stack_00000078;
    func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
  }
  if (in_stack_00000060 != 0) {
    in_stack_00000068 = in_stack_00000060;
    func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
  }
  if (in_stack_00000048 != 0) {
    in_stack_00000050 = in_stack_00000048;
    func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
  }
  if (in_stack_00000030 != 0) {
    in_stack_00000038 = in_stack_00000030;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  if ((in_stack_000000c8 & 1) != 0) {
    func_0x0412a280(in_stack_000000d8,
                    CONCAT71(uStack00000000000000c9,in_stack_000000c8) & 0xfffffffffffffffe);
  }
  return;
}


