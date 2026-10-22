/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8ccf420 (ELF vaddr 0x8bcf420)
 * Label: callee2-of:0xc535ca0
 * Body:  [[08ccf420, 08ccf4dc]]
 * Ghidra: FUN_08ccf420
 */


undefined8 FUN_08ccf420(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long alStack_48 [4];
  long *plStack_28;
  
  plStack_60 = (long *)0x0;
  uStack_50 = 0;
  puStack_58 = &UNK_0f1590c8;
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    plStack_28 = (long *)0x0;
  }
  else if (plVar1 == param_3) {
    plStack_28 = alStack_48;
    (**(code **)(*plVar1 + 0x18))(plVar1,plStack_28);
  }
  else {
    param_3[4] = 0;
    plStack_28 = plVar1;
  }
  (**(code **)(*(long *)(param_2 + 0x58) + 0x10))
            (param_1,(long *)(param_2 + 0x58),&puStack_58,1,&plStack_60,0);
  if (puStack_58 != (undefined *)0x0) {
    (**(code **)(puStack_58 + 8))(&puStack_58);
  }
  plVar1 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* ---- assembly ---- */
/* 08ccf420 */  PUSH R14
/* 08ccf422 */  PUSH RBX
/* 08ccf423 */  SUB RSP,0x58
/* 08ccf427 */  MOV RBX,RDI
/* 08ccf42a */  MOV qword ptr [RSP + 0x8],0x0
/* 08ccf433 */  XORPS XMM0,XMM0
/* 08ccf436 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 08ccf43b */  LEA RAX,[0xf1590c8]
/* 08ccf442 */  MOV qword ptr [RSP + 0x10],RAX
/* 08ccf447 */  MOV RDI,qword ptr [RDX + 0x20]
/* 08ccf44b */  TEST RDI,RDI
/* 08ccf44e */  JZ 0x08ccf464
/* 08ccf450 */  CMP RDI,RDX
/* 08ccf453 */  JZ 0x08ccf46f
/* 08ccf455 */  MOV qword ptr [RSP + 0x40],RDI
/* 08ccf45a */  MOV qword ptr [RDX + 0x20],0x0
/* 08ccf462 */  JMP 0x08ccf488
/* 08ccf464 */  MOV qword ptr [RSP + 0x40],0x0
/* 08ccf46d */  JMP 0x08ccf488
/* 08ccf46f */  LEA RAX,[RSP + 0x20]
/* 08ccf474 */  MOV qword ptr [RSP + 0x40],RAX
/* 08ccf479 */  MOV RCX,qword ptr [RDI]
/* 08ccf47c */  MOV R14,RSI
/* 08ccf47f */  MOV RSI,RAX
/* 08ccf482 */  CALL qword ptr [RCX + 0x18]
/* 08ccf485 */  MOV RSI,R14
/* 08ccf488 */  ADD RSI,0x58
/* 08ccf48c */  MOV RAX,qword ptr [RSI]
/* 08ccf48f */  LEA RDX,[RSP + 0x10]
/* 08ccf494 */  LEA R8,[RSP + 0x8]
/* 08ccf499 */  MOV RDI,RBX
/* 08ccf49c */  MOV ECX,0x1
/* 08ccf4a1 */  XOR R9D,R9D
/* 08ccf4a4 */  CALL qword ptr [RAX + 0x10]
/* 08ccf4a7 */  MOV RAX,qword ptr [RSP + 0x10]
/* 08ccf4ac */  TEST RAX,RAX
/* 08ccf4af */  JZ 0x08ccf4b9
/* 08ccf4b1 */  LEA RDI,[RSP + 0x10]
/* 08ccf4b6 */  CALL qword ptr [RAX + 0x8]
/* 08ccf4b9 */  MOV RDI,qword ptr [RSP + 0x8]
/* 08ccf4be */  MOV qword ptr [RSP + 0x8],0x0
/* 08ccf4c7 */  TEST RDI,RDI
/* 08ccf4ca */  JZ 0x08ccf4d2
/* 08ccf4cc */  MOV RAX,qword ptr [RDI]
/* 08ccf4cf */  CALL qword ptr [RAX + 0x8]
/* 08ccf4d2 */  MOV RAX,RBX
/* 08ccf4d5 */  ADD RSP,0x58
/* 08ccf4d9 */  POP RBX
/* 08ccf4da */  POP R14
/* 08ccf4dc */  RET
