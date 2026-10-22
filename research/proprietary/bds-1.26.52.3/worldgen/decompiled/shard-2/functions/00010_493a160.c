/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493a160
 * Label: BiomeSource3d::vslot2
 * Body:  [[0493a160, 0493a162]]
 * Ghidra: wg_BiomeSource3d__vslot2
 */


void wg_BiomeSource3d__vslot2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0493a160 */  OR CL,AH
/* 0493a162 */  INT3
