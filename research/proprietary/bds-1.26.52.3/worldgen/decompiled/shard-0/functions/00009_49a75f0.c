/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aa75f0 (ELF vaddr 0x49a75f0)
 * Label: callee-of:0x4de9260
 * Body:  [[04aa75f0, 04aa771f]]
 * Ghidra: FUN_04aa75f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_04aa75f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &UNK_0ef560b8;
  uVar3 = func_0x0eee2e90(param_3);
  if (0xfffffffffffffff7 < uVar3) {
    uVar5 = func_0x04882e30();
    func_0x0412c1f0(puVar2);
    thunk_FUN_0ee326a0(puVar2,0x30);
    func_0x0eee2d70(uVar5);
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  if (uVar3 < 0x17) {
    *(char *)(puVar2 + 3) = (char)uVar3 * '\x02';
    lVar4 = (long)puVar2 + 0x19;
    if (uVar3 == 0) goto LAB_04aa76b7;
  }
  else {
    uVar6 = 0x1a;
    if ((uVar3 | 7) != 0x17) {
      uVar6 = (uVar3 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar4 == 0) {
      func_0x0eec74c0(uVar6,0);
    }
    puVar2[5] = lVar4;
    puVar2[3] = uVar6 | 1;
    puVar2[4] = uVar3;
  }
  func_0x0eee2f00(lVar4,param_3,uVar3);
LAB_04aa76b7:
  *(undefined1 *)(lVar4 + uVar3) = 0;
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return param_1;
}



/* ---- assembly ---- */
/* 04aa75f0 */  PUSH RBP
/* 04aa75f1 */  PUSH R15
/* 04aa75f3 */  PUSH R14
/* 04aa75f5 */  PUSH R13
/* 04aa75f7 */  PUSH R12
/* 04aa75f9 */  PUSH RBX
/* 04aa75fa */  PUSH RAX
/* 04aa75fb */  MOV R15,RDX
/* 04aa75fe */  MOV R14,RDI
/* 04aa7601 */  MOV RAX,qword ptr [0x0f5463b0]
/* 04aa7608 */  LEA RDI,[0xf5463b0]
/* 04aa760f */  MOV ESI,0x30
/* 04aa7614 */  CALL qword ptr [RAX + 0x10]
/* 04aa7617 */  MOV RBX,RAX
/* 04aa761a */  TEST RAX,RAX
/* 04aa761d */  JZ 0x04aa76dd
/* 04aa7623 */  XORPS XMM0,XMM0
/* 04aa7626 */  MOVUPS xmmword ptr [RBX + 0x8],XMM0
/* 04aa762a */  LEA RAX,[0xef560a8]
/* 04aa7631 */  ADD RAX,0x10
/* 04aa7635 */  MOV qword ptr [RBX],RAX
/* 04aa7638 */  MOV RDI,R15
/* 04aa763b */  CALL 0x0eee2e90
/* 04aa7640 */  CMP RAX,-0x8
/* 04aa7644 */  JNC 0x04aa76fa
/* 04aa764a */  MOV R12,RAX
/* 04aa764d */  CMP RAX,0x17
/* 04aa7651 */  JNC 0x04aa7665
/* 04aa7653 */  LEA EAX,[R12 + R12*0x1]
/* 04aa7657 */  MOV byte ptr [RBX + 0x18],AL
/* 04aa765a */  LEA R13,[RBX + 0x19]
/* 04aa765e */  TEST R12,R12
/* 04aa7661 */  JNZ 0x04aa76a9
/* 04aa7663 */  JMP 0x04aa76b7
/* 04aa7665 */  MOV RAX,R12
/* 04aa7668 */  OR RAX,0x7
/* 04aa766c */  LEA RCX,[RAX + 0x1]
/* 04aa7670 */  CMP RAX,0x17
/* 04aa7674 */  MOV EBP,0x1a
/* 04aa7679 */  CMOVNZ RBP,RCX
/* 04aa767d */  LEA RDI,[0xf5463b0]
/* 04aa7684 */  MOV RAX,qword ptr [0x0f5463b0]
/* 04aa768b */  MOV RSI,RBP
/* 04aa768e */  CALL qword ptr [RAX + 0x10]
/* 04aa7691 */  MOV R13,RAX
/* 04aa7694 */  TEST RAX,RAX
/* 04aa7697 */  JZ 0x04aa76ee
/* 04aa7699 */  MOV qword ptr [RBX + 0x28],R13
/* 04aa769d */  OR RBP,0x1
/* 04aa76a1 */  MOV qword ptr [RBX + 0x18],RBP
/* 04aa76a5 */  MOV qword ptr [RBX + 0x20],R12
/* 04aa76a9 */  MOV RDI,R13
/* 04aa76ac */  MOV RSI,R15
/* 04aa76af */  MOV RDX,R12
/* 04aa76b2 */  CALL 0x0eee2f00
/* 04aa76b7 */  MOV RAX,RBX
/* 04aa76ba */  ADD RAX,0x18
/* 04aa76be */  MOV byte ptr [R13 + R12*0x1],0x0
/* 04aa76c4 */  MOV qword ptr [R14],RAX
/* 04aa76c7 */  MOV qword ptr [R14 + 0x8],RBX
/* 04aa76cb */  MOV RAX,R14
/* 04aa76ce */  ADD RSP,0x8
/* 04aa76d2 */  POP RBX
/* 04aa76d3 */  POP R12
/* 04aa76d5 */  POP R13
/* 04aa76d7 */  POP R14
/* 04aa76d9 */  POP R15
/* 04aa76db */  POP RBP
/* 04aa76dc */  RET
/* 04aa76dd */  MOV EDI,0x30
/* 04aa76e2 */  XOR ESI,ESI
/* 04aa76e4 */  CALL 0x0eec74c0
/* 04aa76e9 */  JMP 0x04aa7623
/* 04aa76ee */  MOV RDI,RBP
/* 04aa76f1 */  XOR ESI,ESI
/* 04aa76f3 */  CALL 0x0eec74c0
/* 04aa76f8 */  JMP 0x04aa7699
/* 04aa76fa */  CALL 0x04882e30
/* 04aa76ff */  MOV R14,RAX
/* 04aa7702 */  MOV RDI,RBX
/* 04aa7705 */  CALL 0x0412c1f0
/* 04aa770a */  MOV ESI,0x30
/* 04aa770f */  MOV RDI,RBX
/* 04aa7712 */  CALL 0x0412a280
/* 04aa7717 */  MOV RDI,R14
/* 04aa771a */  CALL 0x0eee2d70
/* 04aa771f */  INT3
