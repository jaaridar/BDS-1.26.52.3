/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32790
 * Label: WorldGenerator::vslot24
 * Body:  [[0ca32790, 0ca327a8]]
 * Ghidra: wg_WorldGenerator__vslot24
 */


void wg_WorldGenerator__vslot24(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x04882e20();
  uVar2 = func_0x04882e20(uVar2);
  func_0x04882e20(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0ca32790 */  MOV RDI,RAX
/* 0ca32793 */  CALL 0x04882e20
/* 0ca32798 */  MOV RDI,RAX
/* 0ca3279b */  CALL 0x04882e20
/* 0ca327a0 */  MOV RDI,RAX
/* 0ca327a3 */  CALL 0x04882e20
/* 0ca327a8 */  INT3
