/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32d50
 * Label: WorldGenerator::vslot29
 * Body:  [[0ca32d50, 0ca32d58] [0ca32dc1, 0ca32e59] [0ca32e60, 0ca32f08]]
 * Ghidra: wg_WorldGenerator__vslot29
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot29
               (undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long unaff_RBX;
  undefined8 unaff_R12;
  long lVar6;
  bool in_ZF;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  undefined1 **ppuStack_40;
  undefined1 *puStack_38;
  undefined1 uStack_30;
  
  if (in_ZF) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_50 = 0;
  if (param_4 != 0) {
    puStack_58 = param_1;
    if (param_4 >> 0x3b != 0) {
      uVar5 = func_0x0ca32fa0();
      func_0x0ca32f10(&puStack_58);
      uVar5 = func_0x0eee2d70(uVar5);
      func_0x0ca32fb0(&puStack_48);
      *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
      func_0x0ca32f10(&puStack_58);
      func_0x0eee2d70(uVar5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar6 = param_4 * 0x20;
    puStack_68 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
    if (puStack_68 == (undefined1 *)0x0) {
      func_0x0eec74c0(lVar6,0);
    }
    *param_1 = puStack_68;
    param_1[1] = puStack_68;
    param_1[2] = puStack_68 + lVar6;
    ppuStack_40 = &puStack_60;
    uStack_30 = 0;
    puStack_38 = (undefined1 *)&puStack_68;
    puStack_60 = puStack_68;
    puStack_48 = param_1;
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      *puStack_68 = *param_2;
      if ((param_2[8] & 1) == 0) {
        *(undefined8 *)(puStack_68 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar2 = *(undefined4 *)(param_2 + 0xc);
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(puStack_68 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(puStack_68 + 0xc) = uVar2;
        *(undefined4 *)(puStack_68 + 0x10) = uVar3;
        *(undefined4 *)(puStack_68 + 0x14) = uVar4;
      }
      else {
        func_0x0412e5e0(puStack_68 + 8,*(undefined8 *)(param_2 + 0x18),
                        *(undefined8 *)(param_2 + 0x10));
      }
      puStack_68 = puStack_68 + 0x20;
    }
    param_1[1] = puStack_68;
  }
  return;
}



/* ---- assembly ---- */
/* 0ca32d50 */  JNZ 0x0ca32dc1
/* 0ca32d52 */  TEST ESP,0xcccccccc
/* 0ca32d58 */  INT3
/* 0ca32dc1 */  PUSH RDI
/* 0ca32dc2 */  PUSH R14
/* 0ca32dc4 */  PUSH R13
/* 0ca32dc6 */  PUSH R12
/* 0ca32dc8 */  PUSH RBX
/* 0ca32dc9 */  SUB RSP,0x40
/* 0ca32dcd */  MOV qword ptr [RSP + 0x10],RDI
/* 0ca32dd2 */  MOV byte ptr [RSP + 0x18],0x0
/* 0ca32dd7 */  TEST RCX,RCX
/* 0ca32dda */  JZ 0x0ca32eae
/* 0ca32de0 */  MOV R13,RCX
/* 0ca32de3 */  MOV RAX,RCX
/* 0ca32de6 */  SHR RAX,0x3b
/* 0ca32dea */  JNZ 0x0ca32ecb
/* 0ca32df0 */  MOV R14,RDX
/* 0ca32df3 */  MOV R15,RSI
/* 0ca32df6 */  MOV RBX,RDI
/* 0ca32df9 */  SHL R13,0x5
/* 0ca32dfd */  LEA RDI,[0xf5463b0]
/* 0ca32e04 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca32e0b */  MOV RSI,R13
/* 0ca32e0e */  CALL qword ptr [RAX + 0x10]
/* 0ca32e11 */  MOV R12,RAX
/* 0ca32e14 */  TEST RAX,RAX
/* 0ca32e17 */  JZ 0x0ca32ebc
/* 0ca32e1d */  MOV qword ptr [RBX],R12
/* 0ca32e20 */  MOV qword ptr [RBX + 0x8],R12
/* 0ca32e24 */  ADD R13,R12
/* 0ca32e27 */  MOV qword ptr [RBX + 0x10],R13
/* 0ca32e2b */  MOV qword ptr [RSP],R12
/* 0ca32e2f */  MOV qword ptr [RSP + 0x8],R12
/* 0ca32e34 */  MOV qword ptr [RSP + 0x20],RBX
/* 0ca32e39 */  LEA RAX,[RSP + 0x8]
/* 0ca32e3e */  MOV qword ptr [RSP + 0x28],RAX
/* 0ca32e43 */  MOV RAX,RSP
/* 0ca32e46 */  MOV qword ptr [RSP + 0x30],RAX
/* 0ca32e4b */  MOV byte ptr [RSP + 0x38],0x0
/* 0ca32e50 */  CMP R15,R14
/* 0ca32e53 */  JZ 0x0ca32ea7
/* 0ca32e55 */  MOV RAX,R12
/* 0ca32e58 */  JMP 0x0ca32e83
/* 0ca32e60 */  LEA RCX,[R15 + 0x8]
/* 0ca32e64 */  MOV RDX,qword ptr [RCX + 0x10]
/* 0ca32e68 */  MOV qword ptr [RDI + 0x10],RDX
/* 0ca32e6c */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0ca32e6f */  MOVUPS xmmword ptr [RDI],XMM0
/* 0ca32e72 */  ADD R15,0x20
/* 0ca32e76 */  ADD RAX,0x20
/* 0ca32e7a */  MOV qword ptr [RSP],RAX
/* 0ca32e7e */  CMP R15,R14
/* 0ca32e81 */  JZ 0x0ca32eaa
/* 0ca32e83 */  MOVZX ECX,byte ptr [R15]
/* 0ca32e87 */  MOV byte ptr [RAX],CL
/* 0ca32e89 */  LEA RDI,[RAX + 0x8]
/* 0ca32e8d */  TEST byte ptr [R15 + 0x8],0x1
/* 0ca32e92 */  JZ 0x0ca32e60
/* 0ca32e94 */  MOV RDX,qword ptr [R15 + 0x10]
/* 0ca32e98 */  MOV RSI,qword ptr [R15 + 0x18]
/* 0ca32e9c */  CALL 0x0412e5e0
/* 0ca32ea1 */  MOV RAX,qword ptr [RSP]
/* 0ca32ea5 */  JMP 0x0ca32e72
/* 0ca32ea7 */  MOV RAX,R12
/* 0ca32eaa */  MOV qword ptr [RBX + 0x8],RAX
/* 0ca32eae */  ADD RSP,0x40
/* 0ca32eb2 */  POP RBX
/* 0ca32eb3 */  POP R12
/* 0ca32eb5 */  POP R13
/* 0ca32eb7 */  POP R14
/* 0ca32eb9 */  POP R15
/* 0ca32ebb */  RET
/* 0ca32ebc */  MOV RDI,R13
/* 0ca32ebf */  XOR ESI,ESI
/* 0ca32ec1 */  CALL 0x0eec74c0
/* 0ca32ec6 */  JMP 0x0ca32e1d
/* 0ca32ecb */  CALL 0x0ca32fa0
/* 0ca32ed0 */  MOV R14,RAX
/* 0ca32ed3 */  LEA RDI,[RSP + 0x10]
/* 0ca32ed8 */  CALL 0x0ca32f10
/* 0ca32edd */  MOV RDI,R14
/* 0ca32ee0 */  CALL 0x0eee2d70
/* 0ca32ee5 */  MOV R14,RAX
/* 0ca32ee8 */  LEA RDI,[RSP + 0x20]
/* 0ca32eed */  CALL 0x0ca32fb0
/* 0ca32ef2 */  MOV qword ptr [RBX + 0x8],R12
/* 0ca32ef6 */  LEA RDI,[RSP + 0x10]
/* 0ca32efb */  CALL 0x0ca32f10
/* 0ca32f00 */  MOV RDI,R14
/* 0ca32f03 */  CALL 0x0eee2d70
/* 0ca32f08 */  INT3
