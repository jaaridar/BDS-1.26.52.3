/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce091b0
 * Label: JigsawBlockActor::vslot3
 * Body:  [[0ce091b0, 0ce091f6]]
 * Ghidra: wg_JigsawBlockActor__vslot3
 */


void wg_JigsawBlockActor__vslot3(void)

{
  char cVar1;
  undefined8 in_RAX;
  ulong in_RCX;
  ulong *unaff_RBX;
  bool in_SF;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  code *pcVar2;
  
  in_RCX = in_RCX & 0xffffffff;
  if (in_SF) {
    in_RCX = (ulong)*(uint *)((long)unaff_RBX + -0x38b7dbf4);
  }
  cVar1 = (char)in_RAX + '$';
  pcVar2 = (code *)CONCAT71((int7)((ulong)in_RAX >> 8),cVar1);
  *pcVar2 = (code)((char)*pcVar2 + cVar1);
  *pcVar2 = (code)((char)*pcVar2 + cVar1);
  *unaff_RBX = in_RCX;
  *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000028;
  *(undefined4 *)((long)unaff_RBX + 0x2c) = uStack000000000000002c;
  *(undefined4 *)(unaff_RBX + 6) = uStack0000000000000030;
  *(undefined4 *)((long)unaff_RBX + 0x34) = uStack0000000000000034;
  unaff_RBX[7] = in_stack_00000038;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  return;
}


