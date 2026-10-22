/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3ce610 (ELF vaddr 0xd2ce610)
 * Label: string:ZN15JigsawPlacement9addPiecesERK20StructurePoolElementRK8Blo
 * Body:  [[0d3ce610, 0d3ce625]]
 * Ghidra: FUN_0d3ce610
 */


long FUN_0d3ce610(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01da28ed) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


