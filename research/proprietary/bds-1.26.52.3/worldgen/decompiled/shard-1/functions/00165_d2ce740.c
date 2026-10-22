/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3ce740 (ELF vaddr 0xd2ce740)
 * Label: string:ZN15JigsawPlacement16_tryPlacingPieceERK25PoolElementStructu
 * Body:  [[0d3ce740, 0d3ce755]]
 * Ghidra: FUN_0d3ce740
 */


long FUN_0d3ce740(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01da2a87) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


