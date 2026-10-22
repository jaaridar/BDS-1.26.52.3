/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5293840 (ELF vaddr 0x5193840)
 * Label: OverworldGeneratorMultinoise::vslot39
 * Body:  [[05293840, 0529389a]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot39
 */


bool wg_OverworldGeneratorMultinoise__vslot39(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  long *plStack_18;
  
  func_0x0525af30(&lStack_20,*(undefined8 *)(param_1 + 0xca8),param_2);
  if (plStack_18 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_18 + 0x10))(plStack_18);
      func_0x0412c2d0(plStack_18);
    }
  }
  return lStack_20 != 0;
}



/* ---- assembly ---- */
/* 05293840 */  PUSH R14
/* 05293842 */  PUSH RBX
/* 05293843 */  SUB RSP,0x18
/* 05293847 */  MOV RDX,RSI
/* 0529384a */  MOV RSI,qword ptr [RDI + 0xca8]
/* 05293851 */  LEA RDI,[RSP + 0x8]
/* 05293856 */  CALL 0x0525af30
/* 0529385b */  MOV R14,qword ptr [RSP + 0x8]
/* 05293860 */  MOV RBX,qword ptr [RSP + 0x10]
/* 05293865 */  TEST RBX,RBX
/* 05293868 */  JZ 0x0529388d
/* 0529386a */  MOV RAX,-0x1
/* 05293871 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 05293877 */  TEST RAX,RAX
/* 0529387a */  JNZ 0x0529388d
/* 0529387c */  MOV RAX,qword ptr [RBX]
/* 0529387f */  MOV RDI,RBX
/* 05293882 */  CALL qword ptr [RAX + 0x10]
/* 05293885 */  MOV RDI,RBX
/* 05293888 */  CALL 0x0412c2d0
/* 0529388d */  TEST R14,R14
/* 05293890 */  SETNZ AL
/* 05293893 */  ADD RSP,0x18
/* 05293897 */  POP RBX
/* 05293898 */  POP R14
/* 0529389a */  RET
