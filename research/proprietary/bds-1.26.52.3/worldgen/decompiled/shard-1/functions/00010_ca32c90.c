/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32c90 (ELF vaddr 0xca32c90)
 * Label: WorldGenerator::vslot26
 * Body:  [[0cb32c90, 0cb32d17]]
 * Ghidra: wg_WorldGenerator__vslot26
 */


void wg_WorldGenerator__vslot26(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_18;
  
  func_0x0cb327d0(param_1,*param_2 + 0x50,1);
  (**(code **)(**(long **)(*param_2 + 0x28) + 0x9f0))();
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    lStack_18 = *param_2;
    *param_2 = 0;
    (**(code **)(*plVar1 + 0xd0))(plVar1,&lStack_18);
    lVar2 = lStack_18;
    lStack_18 = 0;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      func_0x0cadbac0(lVar2);
      func_0x0412a280(lVar2,0x18b0);
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0cb32c90 */  PUSH R14
/* 0cb32c92 */  PUSH RBX
/* 0cb32c93 */  PUSH RAX
/* 0cb32c94 */  MOV RBX,RSI
/* 0cb32c97 */  MOV R14,RDI
/* 0cb32c9a */  MOV RSI,qword ptr [RSI]
/* 0cb32c9d */  ADD RSI,0x50
/* 0cb32ca1 */  MOV EDX,0x1
/* 0cb32ca6 */  CALL 0x0cb327d0
/* 0cb32cab */  MOV RAX,qword ptr [RBX]
/* 0cb32cae */  MOV RDI,qword ptr [RAX + 0x28]
/* 0cb32cb2 */  MOV RAX,qword ptr [RDI]
/* 0cb32cb5 */  CALL qword ptr [RAX + 0x9f0]
/* 0cb32cbb */  MOV RDI,qword ptr [R14 + 0x30]
/* 0cb32cbf */  TEST RDI,RDI
/* 0cb32cc2 */  JZ 0x0cb32d10
/* 0cb32cc4 */  MOV RAX,qword ptr [RBX]
/* 0cb32cc7 */  MOV qword ptr [RBX],0x0
/* 0cb32cce */  MOV qword ptr [RSP],RAX
/* 0cb32cd2 */  MOV RAX,qword ptr [RDI]
/* 0cb32cd5 */  MOV RSI,RSP
/* 0cb32cd8 */  CALL qword ptr [RAX + 0xd0]
/* 0cb32cde */  MOV RBX,qword ptr [RSP]
/* 0cb32ce2 */  MOV qword ptr [RSP],0x0
/* 0cb32cea */  TEST RBX,RBX
/* 0cb32ced */  JZ 0x0cb32d10
/* 0cb32cef */  MOV RAX,qword ptr [RBX + 0x30]
/* 0cb32cf3 */  DEC.LOCK qword ptr [RAX + 0x370]
/* 0cb32cfb */  MOV RDI,RBX
/* 0cb32cfe */  CALL 0x0cadbac0
/* 0cb32d03 */  MOV ESI,0x18b0
/* 0cb32d08 */  MOV RDI,RBX
/* 0cb32d0b */  CALL 0x0412a280
/* 0cb32d10 */  ADD RSP,0x8
/* 0cb32d14 */  POP RBX
/* 0cb32d15 */  POP R14
/* 0cb32d17 */  RET
