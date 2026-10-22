/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a5e290 (ELF vaddr 0x495e290)
 * Label: BiomeSource3d::vslot0
 * Body:  [[04a5e290, 04a5e2f0]]
 * Ghidra: wg_BiomeSource3d__vslot0
 */


/* WARNING: Possible PIC construction at 0x04a5e2d0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_BiomeSource3d__vslot0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e2bf;
    puVar2 = (undefined *)func_0x04a67380(param_1 + 0x13);
    lVar3 = param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e2d5;
  }
  else {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      return puVar2;
    }
    param_1[3] = lVar3;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}



/* ---- assembly ---- */
/* 04a5e290 */  PUSH RBX
/* 04a5e291 */  MOV RBX,RDI
/* 04a5e294 */  LEA RAX,[0xef52f68]
/* 04a5e29b */  MOV qword ptr [RDI],RAX
/* 04a5e29e */  CMP byte ptr [RDI + 0xc8],0x1
/* 04a5e2a5 */  JNZ 0x04a5e2d5
/* 04a5e2a7 */  MOV RSI,qword ptr [RBX + 0x98]
/* 04a5e2ae */  TEST RSI,RSI
/* 04a5e2b1 */  JZ 0x04a5e2d5
/* 04a5e2b3 */  LEA RDI,[RBX + 0x98]
/* 04a5e2ba */  CALL 0x04a67380
/* 04a5e2bf */  MOV RDI,qword ptr [RBX + 0x98]
/* 04a5e2c6 */  MOV RSI,qword ptr [RBX + 0xa8]
/* 04a5e2cd */  SUB RSI,RDI
/* 04a5e2d0 */  CALL 0x0412a280
/* 04a5e2d5 */  MOV RDI,qword ptr [RBX + 0x10]
/* 04a5e2d9 */  TEST RDI,RDI
/* 04a5e2dc */  JZ 0x04a5e2ef
/* 04a5e2de */  MOV qword ptr [RBX + 0x18],RDI
/* 04a5e2e2 */  MOV RSI,qword ptr [RBX + 0x20]
/* 04a5e2e6 */  SUB RSI,RDI
/* 04a5e2e9 */  POP RBX
/* 04a5e2ea */  JMP 0x0412a280
/* 04a5e2ef */  POP RBX
/* 04a5e2f0 */  RET
