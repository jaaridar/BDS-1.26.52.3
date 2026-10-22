/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca72c10 (ELF vaddr 0xc972c10)
 * Label: WorldGenerator::vslot46
 * Body:  [[0ca72c10, 0ca72c57]]
 * Ghidra: wg_WorldGenerator__vslot46
 */


void wg_WorldGenerator__vslot46(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  for (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30); puVar2 != puVar1;
      puVar2 = puVar2 + 1) {
    func_0x0d352860(*puVar2,param_2,param_3,2);
  }
  return;
}



/* ---- assembly ---- */
/* 0ca72c10 */  PUSH R15
/* 0ca72c12 */  PUSH R14
/* 0ca72c14 */  PUSH R12
/* 0ca72c16 */  PUSH RBX
/* 0ca72c17 */  PUSH RAX
/* 0ca72c18 */  MOV RAX,qword ptr [RDI + 0x78]
/* 0ca72c1c */  MOV R15,qword ptr [RAX + 0x30]
/* 0ca72c20 */  MOV R12,qword ptr [RAX + 0x38]
/* 0ca72c24 */  CMP R15,R12
/* 0ca72c27 */  JZ 0x0ca72c4c
/* 0ca72c29 */  MOV RBX,RDX
/* 0ca72c2c */  MOV R14,RSI
/* 0ca72c2f */  NOP
/* 0ca72c30 */  MOV RDI,qword ptr [R15]
/* 0ca72c33 */  MOV RSI,R14
/* 0ca72c36 */  MOV RDX,RBX
/* 0ca72c39 */  MOV ECX,0x2
/* 0ca72c3e */  CALL 0x0d352860
/* 0ca72c43 */  ADD R15,0x8
/* 0ca72c47 */  CMP R15,R12
/* 0ca72c4a */  JNZ 0x0ca72c30
/* 0ca72c4c */  ADD RSP,0x8
/* 0ca72c50 */  POP RBX
/* 0ca72c51 */  POP R12
/* 0ca72c53 */  POP R14
/* 0ca72c55 */  POP R15
/* 0ca72c57 */  RET
