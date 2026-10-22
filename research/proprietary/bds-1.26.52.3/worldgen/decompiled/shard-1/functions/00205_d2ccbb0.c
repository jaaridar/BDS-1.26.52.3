/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3ccbb0 (ELF vaddr 0xd2ccbb0)
 * Label: string:ZN12BastionPiece9addPiecesE8BlockPosRNSt3__16vectorINS1_10un
 * Body:  [[0d3ccbb0, 0d3ccbc5]]
 * Ghidra: FUN_0d3ccbb0
 */


long FUN_0d3ccbb0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01da2758) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


