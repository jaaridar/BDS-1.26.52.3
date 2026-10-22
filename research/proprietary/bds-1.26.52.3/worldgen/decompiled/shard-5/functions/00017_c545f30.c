/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc645f30 (ELF vaddr 0xc545f30)
 * Label: callee2-of:0xc535ca0
 * Body:  [[0c645f30, 0c645fb0] [0c645fc0, 0c645fed] [0c645ff0, 0c646056] [0c646060, 0c646081]]
 * Ghidra: FUN_0c645f30
 */


/* WARNING: Removing unreachable block (ram,0x0c645fa9) */
/* WARNING: Removing unreachable block (ram,0x0c645fcd) */
/* WARNING: Removing unreachable block (ram,0x0c645fe6) */
/* WARNING: Removing unreachable block (ram,0x0c645fc0) */
/* WARNING: Removing unreachable block (ram,0x0c64602a) */
/* WARNING: Removing unreachable block (ram,0x0c646039) */

void FUN_0c645f30(char *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (*param_1 == '\0') {
    plVar5 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    while ((plVar5 != plVar6 && (cVar3 = (**(code **)(*(long *)*plVar5 + 0x10))(), cVar3 != '\x06'))
          ) {
      plVar5 = plVar5 + 1;
    }
    plVar4 = plVar5 + 1;
    if (plVar4 != plVar6 && plVar5 != plVar6) {
      do {
        cVar3 = (**(code **)(*(long *)*plVar4 + 0x10))();
        if (cVar3 != '\x06') {
          lVar1 = *plVar4;
          *plVar4 = 0;
          plVar2 = (long *)*plVar5;
          *plVar5 = lVar1;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar5 = plVar5 + 1;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar6);
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar5 != plVar6) {
      for (; plVar5 != plVar6; plVar6 = plVar6 + -1) {
        plVar4 = (long *)plVar6[-1];
        plVar6[-1] = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      *(long **)(param_1 + 0x10) = plVar5;
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0c645f30 */  CMP byte ptr [RDI],0x0
/* 0c645f33 */  JNZ 0x0c646056
/* 0c645f39 */  PUSH R15
/* 0c645f3b */  PUSH R14
/* 0c645f3d */  PUSH R13
/* 0c645f3f */  PUSH R12
/* 0c645f41 */  PUSH RBX
/* 0c645f42 */  MOV RBX,RDI
/* 0c645f45 */  MOV R14,qword ptr [RDI + 0x8]
/* 0c645f49 */  MOV R15,qword ptr [RDI + 0x10]
/* 0c645f4d */  CMP R14,R15
/* 0c645f50 */  JZ 0x0c645f76
/* 0c645f52 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0c645f60 */  MOV RDI,qword ptr [R14]
/* 0c645f63 */  MOV RAX,qword ptr [RDI]
/* 0c645f66 */  CALL qword ptr [RAX + 0x10]
/* 0c645f69 */  CMP AL,0x6
/* 0c645f6b */  JZ 0x0c645f76
/* 0c645f6d */  ADD R14,0x8
/* 0c645f71 */  CMP R14,R15
/* 0c645f74 */  JNZ 0x0c645f60
/* 0c645f76 */  CMP R14,R15
/* 0c645f79 */  SETZ AL
/* 0c645f7c */  LEA R12,[R14 + 0x8]
/* 0c645f80 */  CMP R12,R15
/* 0c645f83 */  SETZ CL
/* 0c645f86 */  OR CL,AL
/* 0c645f88 */  JZ 0x0c645ffd
/* 0c645f8a */  MOV R15,qword ptr [RBX + 0x10]
/* 0c645f8e */  CMP R14,R15
/* 0c645f91 */  JZ 0x0c64604d
/* 0c645f97 */  MOV RAX,R15
/* 0c645f9a */  SUB RAX,R14
/* 0c645f9d */  ADD RAX,R14
/* 0c645fa0 */  CMP RAX,R15
/* 0c645fa3 */  JZ 0x0c64603b
/* 0c645fa9 */  MOV R13,R15
/* 0c645fac */  MOV R12,R14
/* 0c645faf */  JMP 0x0c645fcd
/* 0c645fc0 */  ADD R12,0x8
/* 0c645fc4 */  ADD R13,0x8
/* 0c645fc8 */  CMP R13,R15
/* 0c645fcb */  JZ 0x0c64602a
/* 0c645fcd */  MOV RAX,qword ptr [R13]
/* 0c645fd1 */  MOV qword ptr [R13],0x0
/* 0c645fd9 */  MOV RDI,qword ptr [R12]
/* 0c645fdd */  MOV qword ptr [R12],RAX
/* 0c645fe1 */  TEST RDI,RDI
/* 0c645fe4 */  JZ 0x0c645fc0
/* 0c645fe6 */  MOV RAX,qword ptr [RDI]
/* 0c645fe9 */  CALL qword ptr [RAX + 0x8]
/* 0c645fec */  JMP 0x0c645fc0
/* 0c645ff0 */  ADD R14,0x8
/* 0c645ff4 */  ADD R12,0x8
/* 0c645ff8 */  CMP R12,R15
/* 0c645ffb */  JZ 0x0c645f8a
/* 0c645ffd */  MOV RDI,qword ptr [R12]
/* 0c646001 */  MOV RAX,qword ptr [RDI]
/* 0c646004 */  CALL qword ptr [RAX + 0x10]
/* 0c646007 */  CMP AL,0x6
/* 0c646009 */  JZ 0x0c645ff4
/* 0c64600b */  MOV RAX,qword ptr [R12]
/* 0c64600f */  MOV qword ptr [R12],0x0
/* 0c646017 */  MOV RDI,qword ptr [R14]
/* 0c64601a */  MOV qword ptr [R14],RAX
/* 0c64601d */  TEST RDI,RDI
/* 0c646020 */  JZ 0x0c645ff0
/* 0c646022 */  MOV RAX,qword ptr [RDI]
/* 0c646025 */  CALL qword ptr [RAX + 0x8]
/* 0c646028 */  JMP 0x0c645ff0
/* 0c64602a */  MOV R15,qword ptr [RBX + 0x10]
/* 0c64602e */  SUB R12,R14
/* 0c646031 */  ADD R12,R14
/* 0c646034 */  CMP R12,R15
/* 0c646037 */  JNZ 0x0c646069
/* 0c646039 */  JMP 0x0c646049
/* 0c64603b */  MOV R12,R14
/* 0c64603e */  SUB R12,R14
/* 0c646041 */  ADD R12,R14
/* 0c646044 */  CMP R12,R15
/* 0c646047 */  JNZ 0x0c646069
/* 0c646049 */  MOV qword ptr [RBX + 0x10],R12
/* 0c64604d */  POP RBX
/* 0c64604e */  POP R12
/* 0c646050 */  POP R13
/* 0c646052 */  POP R14
/* 0c646054 */  POP R15
/* 0c646056 */  RET
/* 0c646060 */  ADD R15,-0x8
/* 0c646064 */  CMP R15,R12
/* 0c646067 */  JZ 0x0c646049
/* 0c646069 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0c64606d */  MOV qword ptr [R15 + -0x8],0x0
/* 0c646075 */  TEST RDI,RDI
/* 0c646078 */  JZ 0x0c646060
/* 0c64607a */  MOV RAX,qword ptr [RDI]
/* 0c64607d */  CALL qword ptr [RAX + 0x8]
/* 0c646080 */  JMP 0x0c646060
