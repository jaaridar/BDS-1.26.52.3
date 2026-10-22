/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286a80 (ELF vaddr 0x5186a80)
 * Label: OverworldGeneratorMultinoise::vslot40
 * Body:  [[0525ae50, 0525ae78] [0525ae80, 0525af02] [05286a80, 05286a8b]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot40
 */


void wg_OverworldGeneratorMultinoise__vslot40(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0xca8);
  func_0x0412d450(puVar5 + 5);
  if (puVar5[3] != 0) {
    puVar6 = (undefined8 *)puVar5[2];
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      plVar4 = (long *)puVar6[4];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          func_0x0412c2d0(plVar4);
        }
      }
      func_0x0412a280(puVar6);
      puVar6 = puVar3;
    }
    puVar5[2] = 0;
    if (puVar5[1] != 0) {
      func_0x0eee2dd0(*puVar5,0,puVar5[1] << 3);
    }
    puVar5[3] = 0;
  }
  func_0x0412d520(puVar5 + 5);
  return;
}



/* ---- assembly ---- */
/* 0525ae50 */  PUSH R15
/* 0525ae52 */  PUSH R14
/* 0525ae54 */  PUSH R13
/* 0525ae56 */  PUSH R12
/* 0525ae58 */  PUSH RBX
/* 0525ae59 */  MOV R14,RDI
/* 0525ae5c */  LEA RBX,[RDI + 0x28]
/* 0525ae60 */  MOV RDI,RBX
/* 0525ae63 */  CALL 0x0412d450
/* 0525ae68 */  CMP qword ptr [R14 + 0x18],0x0
/* 0525ae6d */  JZ 0x0525aef1
/* 0525ae73 */  MOV R12,qword ptr [R14 + 0x10]
/* 0525ae77 */  JMP 0x0525ae8a
/* 0525ae80 */  MOV ESI,0x28
/* 0525ae85 */  CALL 0x0412a280
/* 0525ae8a */  TEST R12,R12
/* 0525ae8d */  JZ 0x0525aeca
/* 0525ae8f */  MOV RDI,R12
/* 0525ae92 */  MOV R12,qword ptr [R12]
/* 0525ae96 */  MOV R15,qword ptr [RDI + 0x20]
/* 0525ae9a */  TEST R15,R15
/* 0525ae9d */  JZ 0x0525ae80
/* 0525ae9f */  MOV RAX,-0x1
/* 0525aea6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0525aeac */  TEST RAX,RAX
/* 0525aeaf */  JNZ 0x0525ae80
/* 0525aeb1 */  MOV RAX,qword ptr [R15]
/* 0525aeb4 */  MOV R13,RDI
/* 0525aeb7 */  MOV RDI,R15
/* 0525aeba */  CALL qword ptr [RAX + 0x10]
/* 0525aebd */  MOV RDI,R15
/* 0525aec0 */  CALL 0x0412c2d0
/* 0525aec5 */  MOV RDI,R13
/* 0525aec8 */  JMP 0x0525ae80
/* 0525aeca */  MOV qword ptr [R14 + 0x10],0x0
/* 0525aed2 */  MOV RDX,qword ptr [R14 + 0x8]
/* 0525aed6 */  TEST RDX,RDX
/* 0525aed9 */  JZ 0x0525aee9
/* 0525aedb */  MOV RDI,qword ptr [R14]
/* 0525aede */  SHL RDX,0x3
/* 0525aee2 */  XOR ESI,ESI
/* 0525aee4 */  CALL 0x0eee2dd0
/* 0525aee9 */  MOV qword ptr [R14 + 0x18],0x0
/* 0525aef1 */  MOV RDI,RBX
/* 0525aef4 */  CALL 0x0412d520
/* 0525aef9 */  POP RBX
/* 0525aefa */  POP R12
/* 0525aefc */  POP R13
/* 0525aefe */  POP R14
/* 0525af00 */  POP R15
/* 0525af02 */  RET
/* 05286a80 */  MOV RDI,qword ptr [RDI + 0xca8]
/* 05286a87 */  JMP 0x0525ae50
