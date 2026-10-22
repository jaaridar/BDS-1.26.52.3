/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2925f0
 * Label: string:ZN12VillagePiece9addPiecesE8BlockPosRNSt3__16vectorINS1_10un
 * Body:  [[0d2925f0, 0d292635]]
 * Ghidra: FUN_0d2925f0
 */


void FUN_0d2925f0(void)

{
  long *in_RAX;
  int in_ECX;
  long *unaff_R15;
  
  if (in_ECX == 0) {
    (**(code **)(*in_RAX + 0x10))();
    func_0x0412c2d0();
  }
  (**(code **)(*unaff_R15 + 0x68))();
  func_0x0d292640();
  return;
}


