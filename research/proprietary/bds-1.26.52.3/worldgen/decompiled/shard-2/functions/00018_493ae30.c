/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493ae30
 * Label: BiomeSource3d::vslot6
 * Body:  [[0493ae21, 0493ae2e] [0493ae30, 0493ae49]]
 * Ghidra: wg_BiomeSource3d__vslot6
 */


void wg_BiomeSource3d__vslot6(void)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_RBX;
  long *plVar3;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  
  uVar2 = _uStack0000000000000010 & 0xffffffff;
  while (uVar2 == 0) {
    plVar3 = unaff_RBX;
    func_0x0eee2d70();
    (**(code **)(*plVar3 + 8))();
    uVar2 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  }
  (**(code **)(uVar2 + 8))(&stack0x00000010);
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- assembly ---- */
/* 0493ae21 */  MOV RDI,RBX
/* 0493ae24 */  CALL 0x0eee2d70
/* 0493ae29 */  MOV RAX,qword ptr [RDI]
/* 0493ae2c */  CALL qword ptr [RAX + 0x8]
/* 0493ae30 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0493ae34 */  TEST RAX,RAX
/* 0493ae37 */  JZ 0x0493ae21
/* 0493ae39 */  LEA RDI,[RSP + 0x10]
/* 0493ae3e */  CALL qword ptr [RAX + 0x8]
/* 0493ae41 */  MOV RDI,RBX
/* 0493ae44 */  CALL 0x0eee2d70
/* 0493ae49 */  INT3
