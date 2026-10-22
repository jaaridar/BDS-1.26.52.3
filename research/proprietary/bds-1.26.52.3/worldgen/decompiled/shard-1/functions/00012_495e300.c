/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a5e300 (ELF vaddr 0x495e300)
 * Label: BiomeSource3d::vslot1
 * Body:  [[04a5e300, 04a5e36b]]
 * Ghidra: wg_BiomeSource3d__vslot1
 */


/* WARNING: Possible PIC construction at 0x04a5e340: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_BiomeSource3d__vslot1(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_10;
  
  puVar3 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e32f;
    puVar3 = (undefined *)func_0x04a67380(param_1 + 0x13);
    param_1 = (undefined8 *)param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e345;
  }
  else {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      uStack_10 = 0x4a5e35e;
      puVar3 = (undefined *)func_0x0412a280(lVar1,param_1[4] - lVar1);
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}



/* ---- assembly ---- */
/* 04a5e300 */  PUSH RBX
/* 04a5e301 */  MOV RBX,RDI
/* 04a5e304 */  LEA RAX,[0xef52f68]
/* 04a5e30b */  MOV qword ptr [RDI],RAX
/* 04a5e30e */  CMP byte ptr [RDI + 0xc8],0x1
/* 04a5e315 */  JNZ 0x04a5e345
/* 04a5e317 */  MOV RSI,qword ptr [RBX + 0x98]
/* 04a5e31e */  TEST RSI,RSI
/* 04a5e321 */  JZ 0x04a5e345
/* 04a5e323 */  LEA RDI,[RBX + 0x98]
/* 04a5e32a */  CALL 0x04a67380
/* 04a5e32f */  MOV RDI,qword ptr [RBX + 0x98]
/* 04a5e336 */  MOV RSI,qword ptr [RBX + 0xa8]
/* 04a5e33d */  SUB RSI,RDI
/* 04a5e340 */  CALL 0x0412a280
/* 04a5e345 */  MOV RDI,qword ptr [RBX + 0x10]
/* 04a5e349 */  TEST RDI,RDI
/* 04a5e34c */  JZ 0x04a5e35e
/* 04a5e34e */  MOV qword ptr [RBX + 0x18],RDI
/* 04a5e352 */  MOV RSI,qword ptr [RBX + 0x20]
/* 04a5e356 */  SUB RSI,RDI
/* 04a5e359 */  CALL 0x0412a280
/* 04a5e35e */  MOV ESI,0xe8
/* 04a5e363 */  MOV RDI,RBX
/* 04a5e366 */  POP RBX
/* 04a5e367 */  JMP 0x0412a280
