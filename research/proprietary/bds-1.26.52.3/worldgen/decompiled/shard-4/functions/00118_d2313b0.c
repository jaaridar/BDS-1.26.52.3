/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3313b0 (ELF vaddr 0xd2313b0)
 * Label: StructurePoolBlockPredicateCappedArcheologyBlockReplacement::vslot5
 * Body:  [[0d3313b0, 0d3313ed]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_StructurePoolBlockPredicateCappedArcheologyBlockReplacement__vslot5
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    if (*(byte *)(param_2 + 0x68) >> 1 == 0) goto LAB_0d3313db;
  }
  else if (*(long *)(param_2 + 0x70) == 0) {
LAB_0d3313db:
    *(undefined1 *)param_1 = 0x20;
    uVar1 = _UNK_013d79cf;
    *(undefined8 *)((long)param_1 + 1) = _DAT_013d79c7;
    *(undefined8 *)((long)param_1 + 9) = uVar1;
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ---- referenced strings ----
 * 0x13d79c7  Empty loot table
 */
