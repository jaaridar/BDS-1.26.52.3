/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8800c0
 * Label: callee-of:0xe875070
 * Body:  [[0e8800c0, 0e88024d]]
 * Ghidra: FUN_0e8800c0
 */


void FUN_0e8800c0(char param_1,int param_2,undefined8 param_3,undefined8 *param_4,byte param_5)

{
  undefined8 in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  long lVar4;
  bool in_ZF;
  
  puVar1 = (undefined8 *)CONCAT71((int7)((ulong)in_RAX >> 8),!in_ZF);
  puVar2 = param_4;
  if (param_1 == '\x02') {
    puVar2 = unaff_RBX;
  }
  if ((puVar2 == (undefined8 *)0x0 | param_5) == 1) {
    if ((code *)unaff_RBX[7] != (code *)0x0) {
      uVar3 = unaff_RBX[5];
      lVar4 = unaff_RBX[6];
      if (lVar4 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar4 = unaff_RBX[6];
      }
      puVar2 = (undefined8 *)func_0x0488e200(uVar3,lVar4,0x6e2961cf);
      if (puVar2 != (undefined8 *)0x0) goto LAB_0e88012c;
      param_1 = *(char *)((long)unaff_RBX + 0x24);
      param_4 = (undefined8 *)*unaff_RBX;
      param_2 = *(int *)(unaff_RBX + 4);
    }
    puVar2 = param_4;
    if (param_1 == '\x02') {
      puVar2 = unaff_RBX;
    }
    if ((param_2 != 0x6e2961cf) || (puVar2 == (undefined8 *)0x0)) {
      if ((code *)unaff_RBX[7] == (code *)0x0) {
LAB_0e880214:
        uVar3 = unaff_RBX[5];
        puVar1[2] = &UNK_0488e0b0;
        *(undefined4 *)(puVar1 + 4) = 0x48b5725f;
        puVar1[3] = 0;
        *(undefined1 *)((long)puVar1 + 0x24) = 0;
        *puVar1 = 0;
        puVar1[5] = uVar3;
        puVar1[6] = 0;
        puVar1[7] = 0;
        return;
      }
      uVar3 = unaff_RBX[5];
      lVar4 = unaff_RBX[6];
      if (lVar4 == 0) {
        (*(code *)unaff_RBX[7])(0);
        lVar4 = unaff_RBX[6];
      }
      puVar2 = (undefined8 *)func_0x0488e200(uVar3,lVar4,0x6e2961cf);
      if (puVar2 == (undefined8 *)0x0) goto LAB_0e880214;
    }
    uVar3 = unaff_RBX[5];
    puVar1[2] = &UNK_0e87d9e0;
    *(undefined4 *)(puVar1 + 4) = 0x7f53bda6;
    puVar1[3] = 0;
    *(undefined1 *)((long)puVar1 + 0x24) = 4;
  }
  else {
LAB_0e88012c:
    uVar3 = unaff_RBX[5];
    puVar1[2] = &UNK_0e87d9e0;
    *(undefined4 *)(puVar1 + 4) = 0x7f53bda6;
    puVar1[3] = 0;
    *(undefined1 *)((long)puVar1 + 0x24) = 3;
  }
  *puVar1 = puVar2;
  puVar1[5] = uVar3;
  puVar1[6] = 0;
  puVar1[7] = &UNK_0e87d900;
  return;
}



/* ---- assembly ---- */
/* 0e8800c0 */  SETNZ AL
/* 0e8800c3 */  CMP DIL,0x2
/* 0e8800c7 */  MOV RDX,RCX
/* 0e8800ca */  CMOVZ RDX,RBX
/* 0e8800ce */  TEST RDX,RDX
/* 0e8800d1 */  SETZ R9B
/* 0e8800d5 */  OR R9B,R8B
/* 0e8800d8 */  CMP R9B,0x1
/* 0e8800dc */  JNZ 0x0e88012c
/* 0e8800de */  MOV R8,qword ptr [RBX + 0x38]
/* 0e8800e2 */  TEST R8,R8
/* 0e8800e5 */  JZ 0x0e88015d
/* 0e8800e7 */  MOV R15,RAX
/* 0e8800ea */  MOV R14,qword ptr [RBX + 0x28]
/* 0e8800ee */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e8800f2 */  TEST RSI,RSI
/* 0e8800f5 */  JNZ 0x0e88010c
/* 0e8800f7 */  XOR EDI,EDI
/* 0e8800f9 */  MOV RSI,RBX
/* 0e8800fc */  XOR EDX,EDX
/* 0e8800fe */  CALL R8
/* 0e880101 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e880105 */  MOVZX EDI,byte ptr [RBX + 0x24]
/* 0e880109 */  MOV RCX,qword ptr [RBX]
/* 0e88010c */  CMP DIL,0x2
/* 0e880110 */  CMOVZ RCX,RBX
/* 0e880114 */  MOV RDI,R14
/* 0e880117 */  MOV EDX,0x6e2961cf
/* 0e88011c */  CALL 0x0488e200
/* 0e880121 */  MOV RDX,RAX
/* 0e880124 */  TEST RAX,RAX
/* 0e880127 */  MOV RAX,R15
/* 0e88012a */  JZ 0x0e880153
/* 0e88012c */  MOV RCX,qword ptr [RBX + 0x28]
/* 0e880130 */  LEA RSI,[0xe87d9e0]
/* 0e880137 */  MOV qword ptr [RAX + 0x10],RSI
/* 0e88013b */  MOV dword ptr [RAX + 0x20],0x7f53bda6
/* 0e880142 */  MOV qword ptr [RAX + 0x18],0x0
/* 0e88014a */  MOV byte ptr [RAX + 0x24],0x3
/* 0e88014e */  JMP 0x0e8801f4
/* 0e880153 */  MOVZX EDI,byte ptr [RBX + 0x24]
/* 0e880157 */  MOV RCX,qword ptr [RBX]
/* 0e88015a */  MOV ESI,dword ptr [RBX + 0x20]
/* 0e88015d */  CMP ESI,0x6e2961cf
/* 0e880163 */  SETNZ R9B
/* 0e880167 */  CMP DIL,0x2
/* 0e88016b */  MOV RDX,RCX
/* 0e88016e */  CMOVZ RDX,RBX
/* 0e880172 */  MOV R8D,EDI
/* 0e880175 */  TEST R9B,R9B
/* 0e880178 */  JNZ 0x0e88017f
/* 0e88017a */  TEST RDX,RDX
/* 0e88017d */  JNZ 0x0e8801d2
/* 0e88017f */  MOV R9,qword ptr [RBX + 0x38]
/* 0e880183 */  TEST R9,R9
/* 0e880186 */  JZ 0x0e880214
/* 0e88018c */  MOV R15,RAX
/* 0e88018f */  MOV R14,qword ptr [RBX + 0x28]
/* 0e880193 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e880197 */  TEST RSI,RSI
/* 0e88019a */  JNZ 0x0e8801b2
/* 0e88019c */  XOR EDI,EDI
/* 0e88019e */  MOV RSI,RBX
/* 0e8801a1 */  XOR EDX,EDX
/* 0e8801a3 */  CALL R9
/* 0e8801a6 */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e8801aa */  MOVZX R8D,byte ptr [RBX + 0x24]
/* 0e8801af */  MOV RCX,qword ptr [RBX]
/* 0e8801b2 */  CMP R8B,0x2
/* 0e8801b6 */  CMOVZ RCX,RBX
/* 0e8801ba */  MOV RDI,R14
/* 0e8801bd */  MOV EDX,0x6e2961cf
/* 0e8801c2 */  CALL 0x0488e200
/* 0e8801c7 */  MOV RDX,RAX
/* 0e8801ca */  TEST RAX,RAX
/* 0e8801cd */  MOV RAX,R15
/* 0e8801d0 */  JZ 0x0e880214
/* 0e8801d2 */  MOV RCX,qword ptr [RBX + 0x28]
/* 0e8801d6 */  LEA RSI,[0xe87d9e0]
/* 0e8801dd */  MOV qword ptr [RAX + 0x10],RSI
/* 0e8801e1 */  MOV dword ptr [RAX + 0x20],0x7f53bda6
/* 0e8801e8 */  MOV qword ptr [RAX + 0x18],0x0
/* 0e8801f0 */  MOV byte ptr [RAX + 0x24],0x4
/* 0e8801f4 */  MOV qword ptr [RAX],RDX
/* 0e8801f7 */  MOV qword ptr [RAX + 0x28],RCX
/* 0e8801fb */  MOV qword ptr [RAX + 0x30],0x0
/* 0e880203 */  LEA RCX,[0xe87d900]
/* 0e88020a */  MOV qword ptr [RAX + 0x38],RCX
/* 0e88020e */  POP RBX
/* 0e88020f */  POP R14
/* 0e880211 */  POP R15
/* 0e880213 */  RET
/* 0e880214 */  MOV RCX,qword ptr [RBX + 0x28]
/* 0e880218 */  LEA RDX,[0x488e0b0]
/* 0e88021f */  MOV qword ptr [RAX + 0x10],RDX
/* 0e880223 */  MOV dword ptr [RAX + 0x20],0x48b5725f
/* 0e88022a */  MOV qword ptr [RAX + 0x18],0x0
/* 0e880232 */  MOV byte ptr [RAX + 0x24],0x0
/* 0e880236 */  MOV qword ptr [RAX],0x0
/* 0e88023d */  MOV qword ptr [RAX + 0x28],RCX
/* 0e880241 */  XORPS XMM0,XMM0
/* 0e880244 */  MOVUPS xmmword ptr [RAX + 0x30],XMM0
/* 0e880248 */  POP RBX
/* 0e880249 */  POP R14
/* 0e88024b */  POP R15
/* 0e88024d */  RET
