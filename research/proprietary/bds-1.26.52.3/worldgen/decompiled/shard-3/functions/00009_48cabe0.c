/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cabe0 (ELF vaddr 0x48cabe0)
 * Label: br::worldgen::WorldGenRandom::vslot17
 * Body:  [[049cabe0, 049cac13]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot17
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot17(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_011983f0) {
    bVar1 = true;
    if (0.0 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 <= fVar2;
    }
    return bVar1;
  }
  return false;
}



/* ---- assembly ---- */
/* 049cabe0 */  MOVSS XMM1,dword ptr [0x011983f0]
/* 049cabe8 */  UCOMISS XMM1,XMM0
/* 049cabeb */  JBE 0x049cac11
/* 049cabed */  MOV AL,0x1
/* 049cabef */  XORPS XMM1,XMM1
/* 049cabf2 */  UCOMISS XMM1,XMM0
/* 049cabf5 */  JNC 0x049cac10
/* 049cabf7 */  PUSH RAX
/* 049cabf8 */  MOV RAX,qword ptr [RDI]
/* 049cabfb */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 049cac01 */  CALL qword ptr [RAX + 0x30]
/* 049cac04 */  UCOMISS XMM0,dword ptr [RSP + 0x4]
/* 049cac09 */  SETNC AL
/* 049cac0c */  ADD RSP,0x8
/* 049cac10 */  RET
/* 049cac11 */  XOR EAX,EAX
/* 049cac13 */  RET
