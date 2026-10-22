/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493aaf0
 * Label: BiomeSource3d::vslot4
 * Body:  [[0493aaf0, 0493ab16]]
 * Ghidra: wg_BiomeSource3d__vslot4
 */


void wg_BiomeSource3d__vslot4(void)

{
  long *plVar1;
  long lVar2;
  long in_RAX;
  long *unaff_RBX;
  
  plVar1 = unaff_RBX + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + in_RAX;
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
    func_0x0412c2d0();
  }
  return;
}



/* ---- assembly ---- */
/* 0493aaf0 */  PUSH RAX
/* 0493aaf2 */  XADD qword ptr [RBX + 0x8],RAX
/* 0493aaf7 */  TEST RAX,RAX
/* 0493aafa */  JNZ 0x0493ab0d
/* 0493aafc */  MOV RAX,qword ptr [RBX]
/* 0493aaff */  MOV RDI,RBX
/* 0493ab02 */  CALL qword ptr [RAX + 0x10]
/* 0493ab05 */  MOV RDI,RBX
/* 0493ab08 */  CALL 0x0412c2d0
/* 0493ab0d */  ADD RSP,0x40
/* 0493ab11 */  POP RBX
/* 0493ab12 */  POP R14
/* 0493ab14 */  POP R15
/* 0493ab16 */  RET
