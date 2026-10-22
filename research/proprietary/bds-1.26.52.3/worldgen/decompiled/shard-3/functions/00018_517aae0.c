/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527aae0 (ELF vaddr 0x517aae0)
 * Label: OverworldGeneratorMultinoise::vslot48
 * Body:  [[0527aae0, 0527ab13]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot48
 */


undefined8
wg_OverworldGeneratorMultinoise__vslot48
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x188))(param_2);
  (**(code **)(*plVar1 + 0x28))(param_1,plVar1,param_3,param_4);
  return param_1;
}



/* ---- assembly ---- */
/* 0527aae0 */  PUSH R15
/* 0527aae2 */  PUSH R14
/* 0527aae4 */  PUSH RBX
/* 0527aae5 */  MOV EBX,ECX
/* 0527aae7 */  MOV R14,RDX
/* 0527aaea */  MOV R15,RDI
/* 0527aaed */  MOV RAX,qword ptr [RSI]
/* 0527aaf0 */  MOV RDI,RSI
/* 0527aaf3 */  CALL qword ptr [RAX + 0x188]
/* 0527aaf9 */  MOV R8,qword ptr [RAX]
/* 0527aafc */  MOV RDI,R15
/* 0527aaff */  MOV RSI,RAX
/* 0527ab02 */  MOV RDX,R14
/* 0527ab05 */  MOV ECX,EBX
/* 0527ab07 */  CALL qword ptr [R8 + 0x28]
/* 0527ab0b */  MOV RAX,R15
/* 0527ab0e */  POP RBX
/* 0527ab0f */  POP R14
/* 0527ab11 */  POP R15
/* 0527ab13 */  RET
