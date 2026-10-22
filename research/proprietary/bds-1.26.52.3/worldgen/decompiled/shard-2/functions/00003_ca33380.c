/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca33380
 * Label: WorldGenerator::vslot22
 * Body:  [[0ca33380, 0ca33401]]
 * Ghidra: wg_WorldGenerator__vslot22
 */


void wg_WorldGenerator__vslot22(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0c14b090();
  func_0x0ee386e0(&stack0x00000058);
  func_0x0ee386e0(&stack0x00000050);
  func_0x0c14b090(&stack0x00000020);
  uVar2 = func_0x0eee2d70();
  func_0x0c14b090(&stack0x00000020);
  uVar2 = func_0x0eee2d70(uVar2);
  func_0x0ee386e0(&stack0x00000030);
  func_0x0ee386e0(&stack0x00000028);
  uVar2 = func_0x0eee2d70(uVar2);
  func_0x0ee386e0(&stack0x00000010);
  func_0x0ee386e0(&stack0x00000008);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0ca33380 */  MOV RDI,RSP
/* 0ca33383 */  CALL 0x0c14b090
/* 0ca33388 */  LEA RDI,[RSP + 0x58]
/* 0ca3338d */  CALL 0x0ee386e0
/* 0ca33392 */  LEA RDI,[RSP + 0x50]
/* 0ca33397 */  CALL 0x0ee386e0
/* 0ca3339c */  LEA RDI,[RSP + 0x20]
/* 0ca333a1 */  CALL 0x0c14b090
/* 0ca333a6 */  MOV RDI,RBX
/* 0ca333a9 */  CALL 0x0eee2d70
/* 0ca333ae */  MOV RBX,RAX
/* 0ca333b1 */  LEA RDI,[RSP + 0x20]
/* 0ca333b6 */  CALL 0x0c14b090
/* 0ca333bb */  MOV RDI,RBX
/* 0ca333be */  CALL 0x0eee2d70
/* 0ca333c3 */  MOV RBX,RAX
/* 0ca333c6 */  LEA RDI,[RSP + 0x30]
/* 0ca333cb */  CALL 0x0ee386e0
/* 0ca333d0 */  LEA RDI,[RSP + 0x28]
/* 0ca333d5 */  CALL 0x0ee386e0
/* 0ca333da */  MOV RDI,RBX
/* 0ca333dd */  CALL 0x0eee2d70
/* 0ca333e2 */  MOV RBX,RAX
/* 0ca333e5 */  LEA RDI,[RSP + 0x10]
/* 0ca333ea */  CALL 0x0ee386e0
/* 0ca333ef */  LEA RDI,[RSP + 0x8]
/* 0ca333f4 */  CALL 0x0ee386e0
/* 0ca333f9 */  MOV RDI,RBX
/* 0ca333fc */  CALL 0x0eee2d70
/* 0ca33401 */  INT3
