/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49caba0 (ELF vaddr 0x48caba0)
 * Label: br::worldgen::WorldGenRandom::vslot16
 * Body:  [[049caba0, 049cabd8]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot16(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_0f54fd80) {
    bVar1 = true;
    if (_DAT_011987c8 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 < fVar2;
    }
    return bVar1;
  }
  return false;
}



/* ---- assembly ---- */
/* 049caba0 */  MOVSS XMM1,dword ptr [0x0f54fd80]
/* 049caba8 */  UCOMISS XMM1,XMM0
/* 049cabab */  JBE 0x049cabd6
/* 049cabad */  MOV AL,0x1
/* 049cabaf */  MOVSS XMM1,dword ptr [0x011987c8]
/* 049cabb7 */  UCOMISS XMM1,XMM0
/* 049cabba */  JNC 0x049cabd5
/* 049cabbc */  PUSH RAX
/* 049cabbd */  MOV RAX,qword ptr [RDI]
/* 049cabc0 */  MOVSS dword ptr [RSP + 0x4],XMM0
/* 049cabc6 */  CALL qword ptr [RAX + 0x30]
/* 049cabc9 */  UCOMISS XMM0,dword ptr [RSP + 0x4]
/* 049cabce */  SETA AL
/* 049cabd1 */  ADD RSP,0x8
/* 049cabd5 */  RET
/* 049cabd6 */  XOR EAX,EAX
/* 049cabd8 */  RET
