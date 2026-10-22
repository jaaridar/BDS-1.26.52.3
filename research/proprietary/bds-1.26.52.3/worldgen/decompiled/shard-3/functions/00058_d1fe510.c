/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1fe510
 * Label: string:[[Jigsaw Structure]] Couldn't find anchor named `%s` in elem
 * Body:  [[0d1fe510, 0d1fe54d]]
 * Ghidra: FUN_0d1fe510
 */


void FUN_0d1fe510(void)

{
  long *in_RAX;
  long *unaff_R12;
  bool in_OF;
  
  if (!in_OF) {
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  }
  (**(code **)(*in_RAX + 0x6f8))();
  (**(code **)(*unaff_R12 + 8))();
  return;
}


