/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca72b00 (ELF vaddr 0xc972b00)
 * Label: WorldGenerator::vslot41
 * Body:  [[0ca72b00, 0ca72be9]]
 * Ghidra: wg_WorldGenerator__vslot41
 */


undefined8 *
wg_WorldGenerator__vslot41(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  uint uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = func_0x0eee1380(param_2 + 0x108);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_80 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x2d8);
    puStack_78 = &UNK_0f45e800;
    puStack_70 = &UNK_0f2bdd80;
    uStack_68 = 0x5deece66d;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = **(undefined8 **)(param_2 + 0x78);
    uStack_38 = *param_3;
    uStack_30 = func_0x0eee1380(param_2 + 0x108);
    FUN_0d2d2880(param_1,param_4,&uStack_80);
    if ((ulong)uStack_48 != 0xffffffff) {
      (**(code **)(&UNK_0f3ed9b8 + (ulong)uStack_48 * 8))(&uStack_81,&puStack_70);
    }
  }
  return param_1;
}



/* ---- assembly ---- */
/* 0ca72b00 */  PUSH R15
/* 0ca72b02 */  PUSH R14
/* 0ca72b04 */  PUSH R13
/* 0ca72b06 */  PUSH R12
/* 0ca72b08 */  PUSH RBX
/* 0ca72b09 */  SUB RSP,0x60
/* 0ca72b0d */  MOV R14,RCX
/* 0ca72b10 */  MOV R15,RDX
/* 0ca72b13 */  MOV R13,RSI
/* 0ca72b16 */  MOV RBX,RDI
/* 0ca72b19 */  LEA R12,[RSI + 0x108]
/* 0ca72b20 */  MOV RDI,R12
/* 0ca72b23 */  CALL 0x0eee1380
/* 0ca72b28 */  TEST RAX,RAX
/* 0ca72b2b */  JZ 0x0ca72bd3
/* 0ca72b31 */  MOV RAX,qword ptr [R13 + 0x20]
/* 0ca72b35 */  MOV RAX,qword ptr [RAX + 0x2d8]
/* 0ca72b3c */  MOV qword ptr [RSP + 0x8],RAX
/* 0ca72b41 */  LEA RAX,[0xf45e800]
/* 0ca72b48 */  MOV qword ptr [RSP + 0x10],RAX
/* 0ca72b4d */  LEA RAX,[0xf2bdd80]
/* 0ca72b54 */  MOV qword ptr [RSP + 0x18],RAX
/* 0ca72b59 */  MOV RAX,0x5deece66d
/* 0ca72b63 */  MOV qword ptr [RSP + 0x20],RAX
/* 0ca72b68 */  MOV qword ptr [RSP + 0x28],0x0
/* 0ca72b71 */  MOV byte ptr [RSP + 0x30],0x0
/* 0ca72b76 */  MOV dword ptr [RSP + 0x40],0x0
/* 0ca72b7e */  MOV RAX,qword ptr [R13 + 0x78]
/* 0ca72b82 */  MOV RAX,qword ptr [RAX]
/* 0ca72b85 */  MOV qword ptr [RSP + 0x48],RAX
/* 0ca72b8a */  MOV RAX,qword ptr [R15]
/* 0ca72b8d */  MOV qword ptr [RSP + 0x50],RAX
/* 0ca72b92 */  MOV RDI,R12
/* 0ca72b95 */  CALL 0x0eee1380
/* 0ca72b9a */  MOV qword ptr [RSP + 0x58],RAX
/* 0ca72b9f */  LEA RDX,[RSP + 0x8]
/* 0ca72ba4 */  MOV RDI,RBX
/* 0ca72ba7 */  MOV RSI,R14
/* 0ca72baa */  CALL 0x0d2d2880
/* 0ca72baf */  MOV EAX,dword ptr [RSP + 0x40]
/* 0ca72bb3 */  MOV ECX,0xffffffff
/* 0ca72bb8 */  CMP RAX,RCX
/* 0ca72bbb */  JZ 0x0ca72bd9
/* 0ca72bbd */  LEA RSI,[RSP + 0x18]
/* 0ca72bc2 */  LEA RCX,[0xf3ed9b8]
/* 0ca72bc9 */  LEA RDI,[RSP + 0x7]
/* 0ca72bce */  CALL qword ptr [RCX + RAX*0x8]
/* 0ca72bd1 */  JMP 0x0ca72bd9
/* 0ca72bd3 */  XORPS XMM0,XMM0
/* 0ca72bd6 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0ca72bd9 */  MOV RAX,RBX
/* 0ca72bdc */  ADD RSP,0x60
/* 0ca72be0 */  POP RBX
/* 0ca72be1 */  POP R12
/* 0ca72be3 */  POP R13
/* 0ca72be5 */  POP R14
/* 0ca72be7 */  POP R15
/* 0ca72be9 */  RET
