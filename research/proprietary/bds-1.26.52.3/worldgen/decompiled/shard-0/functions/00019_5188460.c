/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288460 (ELF vaddr 0x5188460)
 * Label: OverworldGeneratorMultinoise::vslot54
 * Body:  [[05288460, 052884bd]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot54(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 0xca8);
  if (*(long *)(lVar1 + 0xc0) != 0) {
    cVar2 = func_0x0eeddcf0(&UNK_0130a7d5,&UNK_012d73ea,0x1e,&UNK_013ac822,&UNK_01376afd);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  return;
}



/* ---- assembly ---- */
/* 05288460 */  PUSH R14
/* 05288462 */  PUSH RBX
/* 05288463 */  PUSH RAX
/* 05288464 */  MOV RBX,RSI
/* 05288467 */  MOV R14,qword ptr [RDI + 0xca8]
/* 0528846e */  CMP qword ptr [R14 + 0xc0],0x0
/* 05288476 */  JZ 0x052884af
/* 05288478 */  LEA RDI,[0x130a7d5]
/* 0528847f */  LEA RSI,[0x12d73ea]
/* 05288486 */  LEA RCX,[0x13ac822]
/* 0528848d */  LEA R8,[0x1376afd]
/* 05288494 */  MOV EDX,0x1e
/* 05288499 */  XOR EAX,EAX
/* 0528849b */  CALL 0x0eeddcf0
/* 052884a0 */  TEST AL,AL
/* 052884a2 */  JZ 0x052884af
/* 052884a4 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 052884af */  MOV qword ptr [R14 + 0xc0],RBX
/* 052884b6 */  ADD RSP,0x8
/* 052884ba */  POP RBX
/* 052884bb */  POP R14
/* 052884bd */  RET
