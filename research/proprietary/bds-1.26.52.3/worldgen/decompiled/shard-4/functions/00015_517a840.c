/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a840 (ELF vaddr 0x517a840)
 * Label: OverworldGeneratorMultinoise::vslot50
 * Body:  [[0527a840, 0527a84f]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot50
 */


undefined1  [16] wg_OverworldGeneratorMultinoise__vslot50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x140;
  auVar1._0_8_ = 0x1000000010;
  return auVar1;
}



/* ---- assembly ---- */
/* 0527a840 */  MOV RAX,0x1000000010
/* 0527a84a */  MOV EDX,0x140
/* 0527a84f */  RET
