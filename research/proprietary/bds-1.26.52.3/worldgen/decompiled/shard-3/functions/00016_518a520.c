/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x518a520
 * Label: OverworldGeneratorMultinoise::vslot49
 * Body:  [[0518a520, 0518a52b]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot49
 */


void wg_OverworldGeneratorMultinoise__vslot49(void)

{
  long in_RAX;
  uint in_ECX;
  
  *(char *)(in_RAX + -0x77) = *(char *)(in_RAX + -0x77) + -1;
  *(uint *)(in_RAX + -0x77) = *(uint *)(in_RAX + -0x77) | in_ECX;
  return;
}



/* ---- assembly ---- */
/* 0518a520 */  DEC byte ptr [RAX + -0x77]
/* 0518a523 */  FUCOMIP ST0,ST0
/* 0518a525 */  MOV R13B,R10B
/* 0518a528 */  OR dword ptr [RAX + -0x77],ECX
/* 0518a52b */  RET
