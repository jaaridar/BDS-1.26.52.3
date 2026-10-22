/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca73030 (ELF vaddr 0xc973030)
 * Label: WorldGenerator::vslot16
 * Body:  [[0ca73030, 0ca73059] [0ca73060, 0ca7309f]]
 * Ghidra: wg_WorldGenerator__vslot16
 */


void wg_WorldGenerator__vslot16
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  for (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30); puVar4 != puVar1;
      puVar4 = puVar4 + 1) {
    plVar2 = (long *)*puVar4;
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (cVar3 != '\0') {
      func_0x0d351430(plVar2,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0ca73030 */  PUSH RBP
/* 0ca73031 */  PUSH R15
/* 0ca73033 */  PUSH R14
/* 0ca73035 */  PUSH R13
/* 0ca73037 */  PUSH R12
/* 0ca73039 */  PUSH RBX
/* 0ca7303a */  PUSH RAX
/* 0ca7303b */  MOV qword ptr [RSP],R8
/* 0ca7303f */  MOV RAX,qword ptr [RDI + 0x78]
/* 0ca73043 */  MOV R13,qword ptr [RAX + 0x30]
/* 0ca73047 */  MOV RBX,qword ptr [RAX + 0x38]
/* 0ca7304b */  CMP R13,RBX
/* 0ca7304e */  JZ 0x0ca73091
/* 0ca73050 */  MOV EBP,ECX
/* 0ca73052 */  MOV R14D,EDX
/* 0ca73055 */  MOV R15,RSI
/* 0ca73058 */  JMP 0x0ca73069
/* 0ca73060 */  ADD R13,0x8
/* 0ca73064 */  CMP R13,RBX
/* 0ca73067 */  JZ 0x0ca73091
/* 0ca73069 */  MOV R12,qword ptr [R13]
/* 0ca7306d */  MOV RAX,qword ptr [R12]
/* 0ca73071 */  MOV RDI,R12
/* 0ca73074 */  CALL qword ptr [RAX + 0x18]
/* 0ca73077 */  TEST AL,AL
/* 0ca73079 */  JZ 0x0ca73060
/* 0ca7307b */  MOV RDI,R12
/* 0ca7307e */  MOV RSI,R15
/* 0ca73081 */  MOV EDX,R14D
/* 0ca73084 */  MOV ECX,EBP
/* 0ca73086 */  MOV R8,qword ptr [RSP]
/* 0ca7308a */  CALL 0x0d351430
/* 0ca7308f */  JMP 0x0ca73060
/* 0ca73091 */  ADD RSP,0x8
/* 0ca73095 */  POP RBX
/* 0ca73096 */  POP R12
/* 0ca73098 */  POP R13
/* 0ca7309a */  POP R14
/* 0ca7309c */  POP R15
/* 0ca7309e */  POP RBP
/* 0ca7309f */  RET
