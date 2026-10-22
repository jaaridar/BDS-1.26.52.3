/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5250790
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot3
 * Body:  [[05250790, 052507c5]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3
 */


void wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_RBX;
  
  if ((int)unaff_RBX != 0) {
    LOCK();
    plVar1 = unaff_RBX + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_RBX + 0x10))();
      func_0x0412c2d0();
    }
  }
  return;
}



/* ---- assembly ---- */
/* 05250790 */  TEST EBX,EBX
/* 05250792 */  JZ 0x052507b7
/* 05250794 */  MOV RAX,-0x1
/* 0525079b */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 052507a1 */  TEST RAX,RAX
/* 052507a4 */  JNZ 0x052507b7
/* 052507a6 */  MOV RAX,qword ptr [RBX]
/* 052507a9 */  MOV RDI,RBX
/* 052507ac */  CALL qword ptr [RAX + 0x10]
/* 052507af */  MOV RDI,RBX
/* 052507b2 */  CALL 0x0412c2d0
/* 052507b7 */  ADD RSP,0x48
/* 052507bb */  POP RBX
/* 052507bc */  POP R12
/* 052507be */  POP R13
/* 052507c0 */  POP R14
/* 052507c2 */  POP R15
/* 052507c4 */  POP RBP
/* 052507c5 */  RET
