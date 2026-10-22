/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed621a0 (ELF vaddr 0xec621a0)
 * Label: callee-of:0x871a310
 * Body:  [[0ed621a0, 0ed6229a]]
 * Ghidra: FUN_0ed621a0
 */


void FUN_0ed621a0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_48;
  undefined8 uStack_40;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = func_0x048aead0(param_1[1]);
  }
  if (*(long *)(lVar2 + 0x78) != 0) {
    lVar2 = *param_1;
    lVar1 = param_1[1];
    if (lVar2 == 0) {
      lVar6 = func_0x048aead0(lVar1);
      lVar2 = *param_1;
      lVar6 = *(long *)(*(long *)(lVar6 + 0x78) + 0x18);
      if (lVar2 == 0) {
        lVar2 = func_0x048aead0(param_1[1]);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar2 + 0x78) + 0x18);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x78) + 0x20);
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      uVar3 = (**(code **)(lVar6 + 8))(lVar1);
      lVar4 = func_0x048b0c90(lVar1,uVar3,param_2,1);
      if (lVar4 != 0) {
LAB_0ed62262:
        lVar2 = *(long *)(lVar4 + 0x58);
        plVar5 = (long *)*param_1;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)func_0x048aead0(param_1[1]);
        }
        func_0x0ed622a0(lVar2 + 0x78,param_1,*(undefined4 *)(*plVar5 + 4));
        return;
      }
      lStack_48 = 0;
      uStack_40 = 0;
      func_0x048b0d20(&lStack_48);
      lVar4 = lStack_48;
      if (lStack_48 != 0) goto LAB_0ed62262;
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0ed621a0 */  PUSH RBP
/* 0ed621a1 */  PUSH R15
/* 0ed621a3 */  PUSH R14
/* 0ed621a5 */  PUSH R13
/* 0ed621a7 */  PUSH R12
/* 0ed621a9 */  PUSH RBX
/* 0ed621aa */  SUB RSP,0x18
/* 0ed621ae */  MOV EBP,ESI
/* 0ed621b0 */  MOV RBX,RDI
/* 0ed621b3 */  MOV RAX,qword ptr [RDI]
/* 0ed621b6 */  TEST RAX,RAX
/* 0ed621b9 */  JNZ 0x0ed621c4
/* 0ed621bb */  MOV RDI,qword ptr [RBX + 0x8]
/* 0ed621bf */  CALL 0x048aead0
/* 0ed621c4 */  CMP qword ptr [RAX + 0x78],0x0
/* 0ed621c9 */  JZ 0x0ed6228c
/* 0ed621cf */  MOV RAX,qword ptr [RBX]
/* 0ed621d2 */  MOV R14,qword ptr [RBX + 0x8]
/* 0ed621d6 */  TEST RAX,RAX
/* 0ed621d9 */  JZ 0x0ed621e5
/* 0ed621db */  MOV RCX,qword ptr [RAX + 0x78]
/* 0ed621df */  MOV R12,qword ptr [RCX + 0x18]
/* 0ed621e3 */  JMP 0x0ed62209
/* 0ed621e5 */  MOV RDI,R14
/* 0ed621e8 */  CALL 0x048aead0
/* 0ed621ed */  MOV RCX,RAX
/* 0ed621f0 */  MOV RAX,qword ptr [RBX]
/* 0ed621f3 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0ed621f7 */  MOV R12,qword ptr [RCX + 0x18]
/* 0ed621fb */  TEST RAX,RAX
/* 0ed621fe */  JNZ 0x0ed62209
/* 0ed62200 */  MOV RDI,qword ptr [RBX + 0x8]
/* 0ed62204 */  CALL 0x048aead0
/* 0ed62209 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0ed6220d */  MOV R13,qword ptr [RAX + 0x20]
/* 0ed62211 */  CMP R12,R13
/* 0ed62214 */  JZ 0x0ed6228c
/* 0ed62216 */  MOV R15,RSP
/* 0ed62219 */  NOP dword ptr [RAX]
/* 0ed62220 */  MOV RDI,R14
/* 0ed62223 */  CALL qword ptr [R12 + 0x8]
/* 0ed62228 */  MOV RDI,R14
/* 0ed6222b */  MOV RSI,RAX
/* 0ed6222e */  MOV EDX,EBP
/* 0ed62230 */  MOV ECX,0x1
/* 0ed62235 */  CALL 0x048b0c90
/* 0ed6223a */  TEST RAX,RAX
/* 0ed6223d */  JNZ 0x0ed62262
/* 0ed6223f */  XORPS XMM0,XMM0
/* 0ed62242 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0ed62246 */  MOV RDI,R15
/* 0ed62249 */  CALL 0x048b0d20
/* 0ed6224e */  MOV RAX,qword ptr [RSP]
/* 0ed62252 */  TEST RAX,RAX
/* 0ed62255 */  JNZ 0x0ed62262
/* 0ed62257 */  ADD R12,0x18
/* 0ed6225b */  CMP R12,R13
/* 0ed6225e */  JNZ 0x0ed62220
/* 0ed62260 */  JMP 0x0ed6228c
/* 0ed62262 */  MOV R14,qword ptr [RAX + 0x58]
/* 0ed62266 */  ADD R14,0x78
/* 0ed6226a */  MOV RAX,qword ptr [RBX]
/* 0ed6226d */  TEST RAX,RAX
/* 0ed62270 */  JNZ 0x0ed6227b
/* 0ed62272 */  MOV RDI,qword ptr [RBX + 0x8]
/* 0ed62276 */  CALL 0x048aead0
/* 0ed6227b */  MOV RAX,qword ptr [RAX]
/* 0ed6227e */  MOV EDX,dword ptr [RAX + 0x4]
/* 0ed62281 */  MOV RDI,R14
/* 0ed62284 */  MOV RSI,RBX
/* 0ed62287 */  CALL 0x0ed622a0
/* 0ed6228c */  ADD RSP,0x18
/* 0ed62290 */  POP RBX
/* 0ed62291 */  POP R12
/* 0ed62293 */  POP R13
/* 0ed62295 */  POP R14
/* 0ed62297 */  POP R15
/* 0ed62299 */  POP RBP
/* 0ed6229a */  RET
