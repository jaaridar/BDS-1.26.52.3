/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32f20
 * Label: WorldGenerator::vslot18
 * Body:  [[0412a280, 0412a284] [0ca32f20, 0ca32f3c] [0ca32f40, 0ca32f92]]
 * Ghidra: wg_WorldGenerator__vslot18
 */


/* WARNING: Possible PIC construction at 0x0ca32f5f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0ca32f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_WorldGenerator__vslot18(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long *plVar3;
  long *unaff_RBX;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_8;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar6 = param_1[1];
  plVar3 = param_1;
  lVar5 = lVar1;
  if (lVar1 != lVar6) {
    do {
      if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
        lVar5 = *(long *)(lVar6 + -8);
        puVar4 = &uStack_8;
        uStack_8 = 0xca32f64;
        goto SUB_0412a280;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != lVar1);
    plVar3 = (long *)*unaff_RBX;
    lVar5 = *(long *)*unaff_RBX;
  }
  param_1[1] = lVar1;
  puVar4 = (undefined8 *)&stack0x00000028;
  param_1 = plVar3;
SUB_0412a280:
  *(long **)((long)puVar4 + -8) = param_1;
  if (lVar5 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar4 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar5);
  }
  return *(undefined8 *)((long)puVar4 + -8);
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
/* 0ca32f20 */  STI
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
