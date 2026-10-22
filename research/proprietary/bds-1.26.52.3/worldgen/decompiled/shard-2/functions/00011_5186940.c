/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286940 (ELF vaddr 0x5186940)
 * Label: OverworldGeneratorMultinoise::vslot1
 * Body:  [[0412a280, 0412a284] [05286940, 05286956]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGeneratorMultinoise__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x05286800();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 05286940 */  PUSH RBX
/* 05286941 */  MOV RBX,RDI
/* 05286944 */  CALL 0x05286800
/* 05286949 */  MOV ESI,0xcb0
/* 0528694e */  MOV RDI,RBX
/* 05286951 */  POP RBX
/* 05286952 */  JMP 0x0412a280
