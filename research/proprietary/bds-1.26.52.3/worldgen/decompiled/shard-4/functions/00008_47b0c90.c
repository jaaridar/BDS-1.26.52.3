/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0c90 (ELF vaddr 0x47b0c90)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b0c90, 048b0d14]]
 * Ghidra: FUN_048b0c90
 */


int * FUN_048b0c90(undefined8 param_1,long param_2,int param_3,char param_4)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x78);
  if (lVar4 != 0) {
    for (piVar3 = *(int **)(lVar4 + 0x48); piVar3 != *(int **)(lVar4 + 0x50); piVar3 = piVar3 + 0x1a
        ) {
      if (*piVar3 == param_3) {
        return piVar3;
      }
    }
    if (param_4 != '\0') {
      lVar1 = *(long *)(lVar4 + 0x20);
      for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
        uVar2 = (**(code **)(lVar4 + 8))(param_1);
        piVar3 = (int *)FUN_048b0c90(param_1,uVar2,param_3,1);
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
    }
  }
  return (int *)0x0;
}



/* ---- assembly ---- */
/* 048b0c90 */  PUSH R15
/* 048b0c92 */  PUSH R14
/* 048b0c94 */  PUSH R12
/* 048b0c96 */  PUSH RBX
/* 048b0c97 */  PUSH RAX
/* 048b0c98 */  MOV EBX,EDX
/* 048b0c9a */  MOV RDX,qword ptr [RSI + 0x78]
/* 048b0c9e */  TEST RDX,RDX
/* 048b0ca1 */  JZ 0x048b0d07
/* 048b0ca3 */  MOV R14,RDI
/* 048b0ca6 */  MOV RAX,qword ptr [RDX + 0x48]
/* 048b0caa */  MOV RSI,qword ptr [RDX + 0x50]
/* 048b0cae */  CMP RAX,RSI
/* 048b0cb1 */  JZ 0x048b0ccd
/* 048b0cb3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 048b0cc0 */  CMP dword ptr [RAX],EBX
/* 048b0cc2 */  JZ 0x048b0d09
/* 048b0cc4 */  ADD RAX,0x68
/* 048b0cc8 */  CMP RAX,RSI
/* 048b0ccb */  JNZ 0x048b0cc0
/* 048b0ccd */  TEST CL,CL
/* 048b0ccf */  JZ 0x048b0d07
/* 048b0cd1 */  MOV R15,qword ptr [RDX + 0x18]
/* 048b0cd5 */  MOV R12,qword ptr [RDX + 0x20]
/* 048b0cd9 */  CMP R15,R12
/* 048b0cdc */  JZ 0x048b0d07
/* 048b0cde */  NOP
/* 048b0ce0 */  MOV RDI,R14
/* 048b0ce3 */  CALL qword ptr [R15 + 0x8]
/* 048b0ce7 */  MOV RDI,R14
/* 048b0cea */  MOV RSI,RAX
/* 048b0ced */  MOV EDX,EBX
/* 048b0cef */  MOV ECX,0x1
/* 048b0cf4 */  CALL 0x048b0c90
/* 048b0cf9 */  TEST RAX,RAX
/* 048b0cfc */  JNZ 0x048b0d09
/* 048b0cfe */  ADD R15,0x18
/* 048b0d02 */  CMP R15,R12
/* 048b0d05 */  JNZ 0x048b0ce0
/* 048b0d07 */  XOR EAX,EAX
/* 048b0d09 */  ADD RSP,0x8
/* 048b0d0d */  POP RBX
/* 048b0d0e */  POP R12
/* 048b0d10 */  POP R14
/* 048b0d12 */  POP R15
/* 048b0d14 */  RET
