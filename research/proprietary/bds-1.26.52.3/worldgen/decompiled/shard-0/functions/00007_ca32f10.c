/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32f10
 * Label: WorldGenerator::vslot32
 * Body:  [[0412a280, 0412a284] [0ca32f10, 0ca32f3c] [0ca32f40, 0ca32f92]]
 * Ghidra: wg_WorldGenerator__vslot32
 */


/* WARNING: Possible PIC construction at 0x0ca32f5f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0ca32f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_WorldGenerator__vslot32(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 in_RAX;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_30 [2];
  
  if ((char)param_1[1] == '\0') {
    plVar3 = (long *)*param_1;
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      lVar6 = plVar3[1];
      plVar4 = plVar3;
      lVar5 = lVar1;
      if (lVar1 != lVar6) {
        do {
          if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
            lVar5 = *(long *)(lVar6 + -8);
            register0x00000020 = (BADSPACEBASE *)auStack_30;
            auStack_30[0] = 0xca32f64;
            goto SUB_0412a280;
          }
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != lVar1);
        plVar4 = (long *)*param_1;
        lVar5 = *(long *)*param_1;
      }
      plVar3[1] = lVar1;
      plVar3 = plVar4;
SUB_0412a280:
      *(long **)((long)register0x00000020 + -8) = plVar3;
      if (lVar5 != 0) {
        pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar2)(&DAT_0f5463b0,lVar5);
      }
      return *(undefined8 *)((long)register0x00000020 + -8);
    }
  }
  return in_RAX;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 0ca32f10 */  PUSH R15
/* 0ca32f12 */  PUSH R14
/* 0ca32f14 */  PUSH R12
/* 0ca32f16 */  PUSH RBX
/* 0ca32f17 */  PUSH RAX
/* 0ca32f18 */  CMP byte ptr [RDI + 0x8],0x0
/* 0ca32f1c */  JNZ 0x0ca32f66
/* 0ca32f1e */  MOV RBX,RDI
/* 0ca32f21 */  MOV R14,qword ptr [RDI]
/* 0ca32f24 */  MOV R15,qword ptr [R14]
/* 0ca32f27 */  TEST R15,R15
/* 0ca32f2a */  JZ 0x0ca32f66
/* 0ca32f2c */  MOV R12,qword ptr [R14 + 0x8]
/* 0ca32f30 */  MOV RDI,R15
/* 0ca32f33 */  MOV RAX,R14
/* 0ca32f36 */  CMP R15,R12
/* 0ca32f39 */  JNZ 0x0ca32f49
/* 0ca32f3b */  JMP 0x0ca32f78
/* 0ca32f40 */  ADD R12,-0x20
/* 0ca32f44 */  CMP R12,R15
/* 0ca32f47 */  JZ 0x0ca32f72
/* 0ca32f49 */  TEST byte ptr [R12 + -0x18],0x1
/* 0ca32f4f */  JZ 0x0ca32f40
/* 0ca32f51 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0ca32f56 */  MOV RDI,qword ptr [R12 + -0x8]
/* 0ca32f5b */  AND RSI,-0x2
/* 0ca32f5f */  CALL 0x0412a280
/* 0ca32f64 */  JMP 0x0ca32f40
/* 0ca32f66 */  ADD RSP,0x8
/* 0ca32f6a */  POP RBX
/* 0ca32f6b */  POP R12
/* 0ca32f6d */  POP R14
/* 0ca32f6f */  POP R15
/* 0ca32f71 */  RET
/* 0ca32f72 */  MOV RAX,qword ptr [RBX]
/* 0ca32f75 */  MOV RDI,qword ptr [RAX]
/* 0ca32f78 */  MOV qword ptr [R14 + 0x8],R15
/* 0ca32f7c */  MOV RSI,qword ptr [RAX + 0x10]
/* 0ca32f80 */  SUB RSI,RDI
/* 0ca32f83 */  ADD RSP,0x8
/* 0ca32f87 */  POP RBX
/* 0ca32f88 */  POP R12
/* 0ca32f8a */  POP R14
/* 0ca32f8c */  POP R15
/* 0ca32f8e */  JMP 0x0412a280
