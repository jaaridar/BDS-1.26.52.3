/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b510 (ELF vaddr 0x493b510)
 * Label: BiomeSource3d::vslot9
 * Body:  [[04a3b510, 04a3b541]]
 * Ghidra: wg_BiomeSource3d__vslot9
 */


undefined8 wg_BiomeSource3d__vslot9(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = plVar2;
  for (; (plVar2 != plVar1 && (plVar3 = plVar2, *(long *)(*plVar2 + 400) != param_2));
      plVar2 = plVar2 + 0x1c) {
    plVar3 = plVar1;
  }
  return CONCAT71((int7)((ulong)plVar1 >> 8),plVar3 != plVar1);
}



/* ---- assembly ---- */
/* 04a3b510 */  MOV RCX,qword ptr [RDI + 0x10]
/* 04a3b514 */  MOV RAX,qword ptr [RDI + 0x18]
/* 04a3b518 */  CMP RCX,RAX
/* 04a3b51b */  JZ 0x04a3b53b
/* 04a3b51d */  NOP dword ptr [RAX]
/* 04a3b520 */  MOV RDX,qword ptr [RCX]
/* 04a3b523 */  CMP qword ptr [RDX + 0x190],RSI
/* 04a3b52a */  JZ 0x04a3b53b
/* 04a3b52c */  ADD RCX,0xe0
/* 04a3b533 */  CMP RCX,RAX
/* 04a3b536 */  JNZ 0x04a3b520
/* 04a3b538 */  MOV RCX,RAX
/* 04a3b53b */  CMP RCX,RAX
/* 04a3b53e */  SETNZ AL
/* 04a3b541 */  RET
