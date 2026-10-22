/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525d920
 * Label: WorldGenMultiNoiseClimateAttributes::vslot1
 * Body:  [[0525d920, 0525d930]]
 * Ghidra: wg_WorldGenMultiNoiseClimateAttributes__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_WorldGenMultiNoiseClimateAttributes__vslot1(long param_1)

{
  undefined8 in_RAX;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = in_RAX;
  if (param_1 != 0) {
    uStack0000000000000008 = 0xee326ba;
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uStack0000000000000010;
}



/* ---- assembly ---- */
/* 0525d920 */  MOV ESI,0x40
/* 0525d925 */  ADD RSP,0x8
/* 0525d929 */  POP RBX
/* 0525d92a */  POP R14
/* 0525d92c */  JMP 0x0412a280
