/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527e8e0 (ELF vaddr 0x517e8e0)
 * Label: OverworldGenerator2d::vslot56
 * Body:  [[0527e8e0, 0527e9d0] [0527e9e0, 0527ea4d]]
 * Ghidra: wg_OverworldGenerator2d__vslot56
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGenerator2d__vslot56
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar2 = param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar3 = *(long *)(lVar1 + 0xa8);
  lVar1 = *(long *)(lVar1 + 0xb0);
  func_0x0488f040(&lStack_48,lVar3,lVar1,(lVar1 - lVar3 >> 3) * -0x5555555555555555);
  lVar1 = lStack_40;
  if (lStack_48 != lStack_40) {
    lVar3 = lStack_48;
    do {
      func_0x0c8550b0(param_3,param_4,param_5,1,puVar2,lVar3,param_1 + 0x70);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
  }
  lVar3 = lStack_48;
  lVar1 = lStack_40;
  if (lStack_48 != 0) {
    for (; lVar3 != lVar1; lVar1 = lVar1 + -0x18) {
      if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
        FUN_0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_40 = lVar3;
    FUN_0412a280(lStack_48,lStack_38 - lStack_48);
  }
  FUN_0412a280(puVar2,8);
  return;
}



/* ---- assembly ---- */
/* 0527e8e0 */  PUSH RBP
/* 0527e8e1 */  PUSH R15
/* 0527e8e3 */  PUSH R14
/* 0527e8e5 */  PUSH R13
/* 0527e8e7 */  PUSH R12
/* 0527e8e9 */  PUSH RBX
/* 0527e8ea */  SUB RSP,0x28
/* 0527e8ee */  MOV R14,R8
/* 0527e8f1 */  MOV R15,RCX
/* 0527e8f4 */  MOV R12,RDX
/* 0527e8f7 */  MOV RBP,RSI
/* 0527e8fa */  MOV R13,RDI
/* 0527e8fd */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527e904 */  LEA RDI,[0xf5463b0]
/* 0527e90b */  MOV ESI,0x8
/* 0527e910 */  CALL qword ptr [RAX + 0x10]
/* 0527e913 */  TEST RAX,RAX
/* 0527e916 */  JZ 0x0527ea37
/* 0527e91c */  MOV qword ptr [RSP + 0x8],RAX
/* 0527e921 */  MOV qword ptr [RAX],RBP
/* 0527e924 */  MOV RAX,qword ptr [R13 + 0x20]
/* 0527e928 */  MOV RAX,qword ptr [RAX + 0x348]
/* 0527e92f */  XORPS XMM0,XMM0
/* 0527e932 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0527e937 */  MOV qword ptr [RSP + 0x20],0x0
/* 0527e940 */  MOV RSI,qword ptr [RAX + 0xa8]
/* 0527e947 */  MOV RDX,qword ptr [RAX + 0xb0]
/* 0527e94e */  MOV RAX,RDX
/* 0527e951 */  SUB RAX,RSI
/* 0527e954 */  SAR RAX,0x3
/* 0527e958 */  MOV RCX,-0x5555555555555555
/* 0527e962 */  IMUL RCX,RAX
/* 0527e966 */  LEA RDI,[RSP + 0x10]
/* 0527e96b */  CALL 0x0488f040
/* 0527e970 */  MOV RBP,qword ptr [RSP + 0x10]
/* 0527e975 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0527e97a */  CMP RBP,RBX
/* 0527e97d */  JZ 0x0527e9bd
/* 0527e97f */  ADD R13,0x70
/* 0527e983 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0527e990 */  MOV qword ptr [RSP],R13
/* 0527e994 */  MOV ECX,0x1
/* 0527e999 */  MOV RDI,R12
/* 0527e99c */  MOV RSI,R15
/* 0527e99f */  MOV RDX,R14
/* 0527e9a2 */  MOV R8,qword ptr [RSP + 0x8]
/* 0527e9a7 */  MOV R9,RBP
/* 0527e9aa */  CALL 0x0c8550b0
/* 0527e9af */  ADD RBP,0x18
/* 0527e9b3 */  CMP RBP,RBX
/* 0527e9b6 */  JNZ 0x0527e990
/* 0527e9b8 */  MOV RBP,qword ptr [RSP + 0x10]
/* 0527e9bd */  TEST RBP,RBP
/* 0527e9c0 */  JZ 0x0527ea19
/* 0527e9c2 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0527e9c7 */  MOV RDI,RBP
/* 0527e9ca */  CMP RBP,RBX
/* 0527e9cd */  JNZ 0x0527e9e9
/* 0527e9cf */  JMP 0x0527ea07
/* 0527e9e0 */  ADD RBX,-0x18
/* 0527e9e4 */  CMP RBX,RBP
/* 0527e9e7 */  JZ 0x0527ea02
/* 0527e9e9 */  TEST byte ptr [RBX + -0x18],0x1
/* 0527e9ed */  JZ 0x0527e9e0
/* 0527e9ef */  MOV RSI,qword ptr [RBX + -0x18]
/* 0527e9f3 */  MOV RDI,qword ptr [RBX + -0x8]
/* 0527e9f7 */  AND RSI,-0x2
/* 0527e9fb */  CALL 0x0412a280
/* 0527ea00 */  JMP 0x0527e9e0
/* 0527ea02 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0527ea07 */  MOV qword ptr [RSP + 0x18],RBP
/* 0527ea0c */  MOV RSI,qword ptr [RSP + 0x20]
/* 0527ea11 */  SUB RSI,RDI
/* 0527ea14 */  CALL 0x0412a280
/* 0527ea19 */  MOV ESI,0x8
/* 0527ea1e */  MOV RDI,qword ptr [RSP + 0x8]
/* 0527ea23 */  CALL 0x0412a280
/* 0527ea28 */  ADD RSP,0x28
/* 0527ea2c */  POP RBX
/* 0527ea2d */  POP R12
/* 0527ea2f */  POP R13
/* 0527ea31 */  POP R14
/* 0527ea33 */  POP R15
/* 0527ea35 */  POP RBP
/* 0527ea36 */  RET
/* 0527ea37 */  MOV EDI,0x8
/* 0527ea3c */  XOR ESI,ESI
/* 0527ea3e */  MOV RBX,RAX
/* 0527ea41 */  CALL 0x0eec74c0
/* 0527ea46 */  MOV RAX,RBX
/* 0527ea49 */  JMP 0x0527e91c
