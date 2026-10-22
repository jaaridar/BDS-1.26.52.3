/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47afd20
 * Label: callee-of:0x871a310
 * Body:  [[047afd20, 047afd3a]]
 * Ghidra: FUN_047afd20
 */


undefined8 FUN_047afd20(void)

{
  char cVar1;
  char *in_RAX;
  long in_RCX;
  char *in_R8;
  
  cVar1 = (char)in_RAX;
  *in_R8 = *in_R8 + cVar1;
  *(char *)(in_RCX + -0x48) = *(char *)(in_RCX + -0x48) + cVar1;
  out(1,(int)in_RAX);
  *in_RAX = *in_RAX + cVar1;
  func_0x047c6f20();
  return 0;
}


