/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab60 (ELF vaddr 0x48cab60)
 * Label: br::worldgen::WorldGenRandom::vslot15
 * Body:  [[049cab60, 049cab94]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot15(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (_DAT_011987c8 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 <= param_1;
    }
    return bVar1;
  }
  return false;
}



/* ---- assembly ---- */
/* 049cab60 */  UCOMISS XMM0,dword ptr [0x011987c8]
/* 049cab67 */  JBE 0x049cab92
/* 049cab69 */  MOV AL,0x1
/* 049cab6b */  UCOMISS XMM0,dword ptr [0x011983f0]
/* 049cab72 */  JNC 0x049cab91
/* 049cab74 */  PUSH RAX
/* 049cab75 */  MOV RAX,qword ptr [RDI]
/* 049cab78 */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 049cab7e */  CALL qword ptr [RAX + 0x30]
/* 049cab81 */  MOVSS XMM1,dword ptr [RSP + 0x4]
/* 049cab87 */  UCOMISS XMM1,XMM0
/* 049cab8a */  SETNC AL
/* 049cab8d */  ADD RSP,0x8
/* 049cab91 */  RET
/* 049cab92 */  XOR EAX,EAX
/* 049cab94 */  RET
