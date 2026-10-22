/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x838dd60
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0838dc5a, 0838dc80] [0838dd60, 0838dd84] [0838dd86, 0838deab]]
 * Ghidra: FUN_0838dd60
 */


/* WARNING: Instruction at (ram,0x0838dd86) overlaps instruction at (ram,0x0838dd85)
    */

void FUN_0838dd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  char *pcVar3;
  ulong uVar4;
  char in_SF;
  char in_OF;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  byte bStack0000000000000080;
  undefined7 uStack0000000000000081;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  char in_stack_000000c0;
  code *in_stack_00000108;
  
  if (in_OF == in_SF) {
    *(byte *)(in_RAX + -0x73) = *(byte *)(in_RAX + -0x73) ^ param_4;
    pcVar3 = (char *)CONCAT62((int6)((ulong)in_RAX >> 0x10),CONCAT11(0x24,(char)in_RAX));
  }
  else {
    pcVar3 = (char *)(_uStack0000000000000048 & 0xffffffff);
  }
  *pcVar3 = *pcVar3 + (char)pcVar3;
  func_0x05d9a920(param_1,param_2,&stack0x000000f0);
  func_0x05d9ad30();
  if ((code *)CONCAT44(uStack000000000000004c,uStack0000000000000048) != (code *)0x0) {
    (*(code *)CONCAT44(uStack000000000000004c,uStack0000000000000048))(&stack0x00000030);
  }
  if (in_stack_00000108 != (code *)0x0) {
    (*in_stack_00000108)(&stack0x000000f0);
  }
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  lVar2 = in_stack_000000a8;
  if (in_stack_000000c0 == '\x01') {
    if ((bStack0000000000000080 & 1) == 0) {
      return;
    }
    uVar4 = CONCAT71(uStack0000000000000081,bStack0000000000000080) & 0xfffffffffffffffe;
  }
  else {
    lVar1 = in_stack_000000b0;
    if (in_stack_000000a8 != 0) {
      while (lVar2 != lVar1) {
        func_0x048b3e80(lVar1 + -0x40);
        lVar1 = lVar1 + -0x40;
      }
      in_stack_000000b0 = lVar2;
      func_0x0412a280(in_stack_000000a8,in_stack_000000b8 - in_stack_000000a8);
    }
    lVar1 = in_stack_00000090;
    lVar2 = in_stack_00000098;
    if (in_stack_00000090 == 0) {
      return;
    }
    for (; lVar1 != lVar2; lVar2 = lVar2 + -0x50) {
      if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                        *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
      }
    }
    in_stack_00000098 = lVar1;
    uVar4 = in_stack_000000a0 - in_stack_00000090;
  }
  func_0x0412a280(in_stack_00000090,uVar4);
  return;
}


