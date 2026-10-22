/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49caae0 (ELF vaddr 0x48caae0)
 * Label: br::worldgen::WorldGenRandom::vslot11
 * Body:  [[049caae0, 049caafe]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot11
 */


bool wg_br__worldgen__WorldGenRandom__vslot11(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_3) {
    bVar1 = true;
    if (param_2 < param_3) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      bVar1 = iVar2 < param_2;
    }
    return bVar1;
  }
  return false;
}



/* ---- assembly ---- */
/* 049caae0 */  TEST EDX,EDX
/* 049caae2 */  JLE 0x049caafc
/* 049caae4 */  MOV AL,0x1
/* 049caae6 */  CMP ESI,EDX
/* 049caae8 */  JGE 0x049caafb
/* 049caaea */  PUSH RBX
/* 049caaeb */  MOV RAX,qword ptr [RDI]
/* 049caaee */  MOV EBX,ESI
/* 049caaf0 */  MOV ESI,EDX
/* 049caaf2 */  CALL qword ptr [RAX + 0x18]
/* 049caaf5 */  CMP EBX,EAX
/* 049caaf7 */  SETG AL
/* 049caafa */  POP RBX
/* 049caafb */  RET
/* 049caafc */  XOR EAX,EAX
/* 049caafe */  RET
