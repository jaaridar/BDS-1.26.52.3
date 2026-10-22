/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286960 (ELF vaddr 0x5186960)
 * Label: OverworldGeneratorMultinoise::vslot1
 * Body:  [[0412a280, 0412a284] [05286960, 0528697d]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGeneratorMultinoise__vslot1(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x70;
  uVar1 = wg_OverworldGeneratorMultinoise__vslot0(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 05286960 */  PUSH RBX
/* 05286961 */  MOV RBX,RDI
/* 05286964 */  ADD RBX,-0x70
/* 05286968 */  MOV RDI,RBX
/* 0528696b */  CALL 0x05286800
/* 05286970 */  MOV ESI,0xcb0
/* 05286975 */  MOV RDI,RBX
/* 05286978 */  POP RBX
/* 05286979 */  JMP 0x0412a280
