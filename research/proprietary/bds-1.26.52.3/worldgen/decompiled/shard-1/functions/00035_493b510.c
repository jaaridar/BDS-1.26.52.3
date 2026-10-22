/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b510 (ELF vaddr 0x493b510)
 * Label: BiomeSource3d::vslot9
 * Body:  [[04a3b510, 04a3b541]]
 * Ghidra: wg_BiomeSource3d__vslot9
 */


undefined8 wg_BiomeSource3d__vslot9(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = plVar2;
  for (; (plVar2 != plVar1 && (plVar3 = plVar2, *(long *)(*plVar2 + 400) != param_2));
      plVar2 = plVar2 + 0x1c) {
    plVar3 = plVar1;
  }
  return CONCAT71((int7)((ulong)plVar1 >> 8),plVar3 != plVar1);
}


