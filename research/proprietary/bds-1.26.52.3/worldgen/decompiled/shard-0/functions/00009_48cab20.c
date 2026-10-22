/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab20 (ELF vaddr 0x48cab20)
 * Label: br::worldgen::WorldGenRandom::vslot14
 * Body:  [[049cab20, 049cab53]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot14(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (0.0 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 < param_1;
    }
    return bVar1;
  }
  return false;
}



/* ---- assembly ---- */
/* 049cab20 */  XORPS XMM1,XMM1
/* 049cab23 */  UCOMISS XMM0,XMM1
/* 049cab26 */  JBE 0x049cab51
/* 049cab28 */  MOV AL,0x1
/* 049cab2a */  UCOMISS XMM0,dword ptr [0x011983f0]
/* 049cab31 */  JNC 0x049cab50
/* 049cab33 */  PUSH RAX
/* 049cab34 */  MOV RAX,qword ptr [RDI]
/* 049cab37 */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 049cab3d */  CALL qword ptr [RAX + 0x30]
/* 049cab40 */  MOVSS XMM1,dword ptr [RSP + 0x4]
/* 049cab46 */  UCOMISS XMM1,XMM0
/* 049cab49 */  SETA AL
/* 049cab4c */  ADD RSP,0x8
/* 049cab50 */  RET
/* 049cab51 */  XOR EAX,EAX
/* 049cab53 */  RET
