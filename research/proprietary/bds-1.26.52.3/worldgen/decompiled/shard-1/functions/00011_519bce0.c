/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x529bce0 (ELF vaddr 0x519bce0)
 * Label: OverworldGenerator2d::vslot1
 * Body:  [[0412a280, 0412a284] [0529bce0, 0529bcfd]]
 * Ghidra: wg_OverworldGenerator2d__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGenerator2d__vslot1(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x70;
  uVar1 = func_0x0529ba70(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 0529bce0 */  PUSH RBX
/* 0529bce1 */  MOV RBX,RDI
/* 0529bce4 */  ADD RBX,-0x70
/* 0529bce8 */  MOV RDI,RBX
/* 0529bceb */  CALL 0x0529ba70
/* 0529bcf0 */  MOV ESI,0x240
/* 0529bcf5 */  MOV RDI,RBX
/* 0529bcf8 */  POP RBX
/* 0529bcf9 */  JMP 0x0412a280
