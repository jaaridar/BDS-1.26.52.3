/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32c90
 * Label: WorldGenerator::vslot26
 * Body:  [[0ca32c90, 0ca32cc8]]
 * Ghidra: wg_WorldGenerator__vslot26
 */


void wg_WorldGenerator__vslot26(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_RBX;
  undefined8 unaff_R12;
  
  func_0x0ca32cd0(&stack0x00000010);
  uVar2 = func_0x0eee2d70();
  func_0x0ca32d70(&stack0x00000020);
  *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
  func_0x0ca32cd0(&stack0x00000010);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0ca32c90 */  MOV R14,RAX
/* 0ca32c93 */  LEA RDI,[RSP + 0x10]
/* 0ca32c98 */  CALL 0x0ca32cd0
/* 0ca32c9d */  MOV RDI,R14
/* 0ca32ca0 */  CALL 0x0eee2d70
/* 0ca32ca5 */  MOV R14,RAX
/* 0ca32ca8 */  LEA RDI,[RSP + 0x20]
/* 0ca32cad */  CALL 0x0ca32d70
/* 0ca32cb2 */  MOV qword ptr [RBX + 0x8],R12
/* 0ca32cb6 */  LEA RDI,[RSP + 0x10]
/* 0ca32cbb */  CALL 0x0ca32cd0
/* 0ca32cc0 */  MOV RDI,R14
/* 0ca32cc3 */  CALL 0x0eee2d70
/* 0ca32cc8 */  INT3
