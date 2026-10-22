/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b4d0 (ELF vaddr 0x493b4d0)
 * Label: BiomeSource3d::vslot8
 * Body:  [[04a3b4d0, 04a3b501]]
 * Ghidra: wg_BiomeSource3d__vslot8
 */


undefined8 wg_BiomeSource3d__vslot8(long param_1,short param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = plVar2;
  for (; (plVar2 != plVar1 && (plVar3 = plVar2, *(short *)(*plVar2 + 0x168) != param_2));
      plVar2 = plVar2 + 0x1c) {
    plVar3 = plVar1;
  }
  return CONCAT71((int7)((ulong)plVar1 >> 8),plVar3 != plVar1);
}



/* ---- assembly ---- */
/* 04a3b4d0 */  MOV RCX,qword ptr [RDI + 0x10]
/* 04a3b4d4 */  MOV RAX,qword ptr [RDI + 0x18]
/* 04a3b4d8 */  CMP RCX,RAX
/* 04a3b4db */  JZ 0x04a3b4fb
/* 04a3b4dd */  NOP dword ptr [RAX]
/* 04a3b4e0 */  MOV RDX,qword ptr [RCX]
/* 04a3b4e3 */  CMP word ptr [RDX + 0x168],SI
/* 04a3b4ea */  JZ 0x04a3b4fb
/* 04a3b4ec */  ADD RCX,0xe0
/* 04a3b4f3 */  CMP RCX,RAX
/* 04a3b4f6 */  JNZ 0x04a3b4e0
/* 04a3b4f8 */  MOV RCX,RAX
/* 04a3b4fb */  CMP RCX,RAX
/* 04a3b4fe */  SETNZ AL
/* 04a3b501 */  RET
