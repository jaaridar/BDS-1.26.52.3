/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3925f0 (ELF vaddr 0xd2925f0)
 * Label: string:ZN12VillagePiece9addPiecesE8BlockPosRNSt3__16vectorINS1_10un
 * Body:  [[0d3925f0, 0d392605]]
 * Ghidra: FUN_0d3925f0
 */


long FUN_0d3925f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01da190d) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


