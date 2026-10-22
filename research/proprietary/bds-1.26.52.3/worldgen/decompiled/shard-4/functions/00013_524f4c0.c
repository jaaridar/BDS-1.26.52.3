/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x534f4c0 (ELF vaddr 0x524f4c0)
 * Label: ClimateBiomeComponentGlue::vslot3
 * Body:  [[0534f4c0, 0534f5c2]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_ClimateBiomeComponentGlue__vslot3(undefined8 param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  cVar5 = *(char *)((long)param_3 + 0x24);
  puVar8 = (undefined8 *)*param_3;
  puVar6 = puVar8;
  if (cVar5 == '\x02') {
    puVar6 = param_3;
  }
  if (puVar6 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1a0f8f0) {
    uVar4 = param_3[5];
    lVar7 = param_3[6];
    if (lVar7 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar7 = param_3[6];
      cVar5 = *(char *)((long)param_3 + 0x24);
      puVar8 = (undefined8 *)*param_3;
    }
    if (cVar5 == '\x02') {
      puVar8 = param_3;
    }
    puVar6 = (undefined8 *)func_0x0488e200(uVar4,lVar7,0xfe5f0710,puVar8);
  }
  lVar7 = func_0x0535cd40(param_2 + 0x170);
  if (*(char *)((long)puVar6 + 0xc) == '\x01') {
    fVar1 = *(float *)(puVar6 + 1);
    *(float *)(lVar7 + 0xc) = fVar1;
    *(float *)(param_2 + 0xc) = fVar1;
    if (fVar1 < _DAT_011986e8) {
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
  }
  if (*(char *)(puVar6 + 3) == '\x01') {
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(puVar6 + 2);
    uVar3 = *(undefined4 *)((long)puVar6 + 0x14);
    *(undefined4 *)(lVar7 + 0x14) = uVar3;
    uVar2 = *(undefined4 *)(puVar6 + 2);
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    cVar5 = *(char *)(puVar6 + 4);
  }
  else {
    cVar5 = *(char *)(puVar6 + 4);
  }
  if (cVar5 != '\x01') {
    return;
  }
  uVar3 = *(undefined4 *)((long)puVar6 + 0x1c);
  *(undefined4 *)(lVar7 + 8) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar3;
  return;
}



/* ---- assembly ---- */
/* 0534f4c0 */  PUSH R15
/* 0534f4c2 */  PUSH R14
/* 0534f4c4 */  PUSH RBX
/* 0534f4c5 */  CMP dword ptr [RDX + 0x20],0xfe5f0710
/* 0534f4cc */  MOV RBX,RSI
/* 0534f4cf */  SETNZ SIL
/* 0534f4d3 */  MOVZX EAX,byte ptr [RDX + 0x24]
/* 0534f4d7 */  CMP AL,0x2
/* 0534f4d9 */  MOV RCX,qword ptr [RDX]
/* 0534f4dc */  MOV R14,RCX
/* 0534f4df */  CMOVZ R14,RDX
/* 0534f4e3 */  TEST R14,R14
/* 0534f4e6 */  SETZ DIL
/* 0534f4ea */  OR DIL,SIL
/* 0534f4ed */  CMP DIL,0x1
/* 0534f4f1 */  JNZ 0x0534f533
/* 0534f4f3 */  MOV R14,qword ptr [RDX + 0x28]
/* 0534f4f7 */  MOV RSI,qword ptr [RDX + 0x30]
/* 0534f4fb */  TEST RSI,RSI
/* 0534f4fe */  JNZ 0x0534f51d
/* 0534f500 */  XOR EDI,EDI
/* 0534f502 */  MOV RSI,RDX
/* 0534f505 */  MOV R15,RDX
/* 0534f508 */  XOR EDX,EDX
/* 0534f50a */  CALL qword ptr [R15 + 0x38]
/* 0534f50e */  MOV RDX,R15
/* 0534f511 */  MOV RSI,qword ptr [R15 + 0x30]
/* 0534f515 */  MOVZX EAX,byte ptr [R15 + 0x24]
/* 0534f51a */  MOV RCX,qword ptr [R15]
/* 0534f51d */  CMP AL,0x2
/* 0534f51f */  CMOVZ RCX,RDX
/* 0534f523 */  MOV RDI,R14
/* 0534f526 */  MOV EDX,0xfe5f0710
/* 0534f52b */  CALL 0x0488e200
/* 0534f530 */  MOV R14,RAX
/* 0534f533 */  LEA RDI,[RBX + 0x170]
/* 0534f53a */  CALL 0x0535cd40
/* 0534f53f */  CMP byte ptr [R14 + 0xc],0x1
/* 0534f544 */  JNZ 0x0534f567
/* 0534f546 */  MOVSS XMM0,dword ptr [R14 + 0x8]
/* 0534f54c */  MOVSS dword ptr [RAX + 0xc],XMM0
/* 0534f551 */  MOVSS dword ptr [RBX + 0xc],XMM0
/* 0534f556 */  MOVSS XMM1,dword ptr [0x011986e8]
/* 0534f55e */  UCOMISS XMM1,XMM0
/* 0534f561 */  JBE 0x0534f567
/* 0534f563 */  MOV byte ptr [RBX + 0x40],0x0
/* 0534f567 */  CMP byte ptr [R14 + 0x18],0x1
/* 0534f56c */  JZ 0x0534f57b
/* 0534f56e */  CMP byte ptr [R14 + 0x20],0x1
/* 0534f573 */  JZ 0x0534f5ad
/* 0534f575 */  POP RBX
/* 0534f576 */  POP R14
/* 0534f578 */  POP R15
/* 0534f57a */  RET
/* 0534f57b */  MOVSS XMM0,dword ptr [R14 + 0x10]
/* 0534f581 */  MOVSS dword ptr [RAX + 0x10],XMM0
/* 0534f586 */  MOVSS XMM0,dword ptr [R14 + 0x14]
/* 0534f58c */  MOVSS dword ptr [RAX + 0x14],XMM0
/* 0534f591 */  MOVSS XMM1,dword ptr [R14 + 0x10]
/* 0534f597 */  MOVSS dword ptr [RBX + 0x20],XMM1
/* 0534f59c */  MOVSS dword ptr [RBX + 0x28],XMM1
/* 0534f5a1 */  MOVSS dword ptr [RBX + 0x2c],XMM0
/* 0534f5a6 */  CMP byte ptr [R14 + 0x20],0x1
/* 0534f5ab */  JNZ 0x0534f575
/* 0534f5ad */  MOVSS XMM0,dword ptr [R14 + 0x1c]
/* 0534f5b3 */  MOVSS dword ptr [RAX + 0x8],XMM0
/* 0534f5b8 */  MOVSS dword ptr [RBX + 0x8],XMM0
/* 0534f5bd */  POP RBX
/* 0534f5be */  POP R14
/* 0534f5c0 */  POP R15
/* 0534f5c2 */  RET
