/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc74fde0
 * Label: FixedBiomeSource::vslot3
 * Body:  [[0c74fde0, 0c74fee8] [0c750a03, 0c750a28]]
 * Ghidra: wg_FixedBiomeSource__vslot3
 */


void wg_FixedBiomeSource__vslot3(void)

{
  long lVar1;
  long unaff_RBX;
  byte bStack0000000000000008;
  undefined7 uStack0000000000000009;
  undefined4 in_stack_00000010;
  undefined1 uStack0000000000000014;
  undefined8 in_stack_00000018;
  byte in_stack_00000020;
  undefined7 uStack0000000000000021;
  undefined1 in_stack_00000028;
  undefined1 uStack0000000000000029;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined2 uStack0000000000000041;
  undefined8 in_stack_00000048;
  
  uStack0000000000000041 = 0x6e;
  bStack0000000000000008 = (byte)&stack0x00000038;
  uStack0000000000000009 = (undefined7)((ulong)&stack0x00000038 >> 8);
  lVar1 = func_0x0d6c9580(unaff_RBX + 8,&stack0x00000038,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000020);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,
                    CONCAT71(uStack0000000000000039,bStack0000000000000038) & 0xfffffffffffffffe);
  }
  bStack0000000000000008 = 0x16;
  uStack0000000000000009 = 0x6c6c61775f6e69;
  in_stack_00000010 = 0x7469625f;
  uStack0000000000000014 = 0;
  func_0x0d6bbef0();
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  in_stack_00000020 = 0x10;
  uStack0000000000000021 = 0x69625f6e65706f;
  in_stack_00000028 = 0x74;
  uStack0000000000000029 = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT71(uStack0000000000000021,in_stack_00000020) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c74fde0 */  MOV word ptr [RSP + 0x41],0x6e
/* 0c74fde7 */  LEA RDI,[RBX + 0x8]
/* 0c74fdeb */  LEA R14,[RSP + 0x38]
/* 0c74fdf0 */  MOV qword ptr [RSP + 0x8],R14
/* 0c74fdf5 */  LEA RDX,[0x1563a4f]
/* 0c74fdfc */  LEA RCX,[RSP + 0x8]
/* 0c74fe01 */  LEA R8,[RSP + 0x20]
/* 0c74fe06 */  MOV RSI,R14
/* 0c74fe09 */  CALL 0x0d6c9580
/* 0c74fe0e */  MOV R15,RAX
/* 0c74fe11 */  MOV EAX,dword ptr [RAX + 0x60]
/* 0c74fe14 */  MOV ECX,0xffffffff
/* 0c74fe19 */  CMP RAX,RCX
/* 0c74fe1c */  JZ 0x0c74fe34
/* 0c74fe1e */  MOV RSI,R15
/* 0c74fe21 */  ADD RSI,0x38
/* 0c74fe25 */  LEA RCX,[0xf47e8c0]
/* 0c74fe2c */  LEA RDI,[RSP + 0x8]
/* 0c74fe31 */  CALL qword ptr [RCX + RAX*0x8]
/* 0c74fe34 */  LEA RAX,[0xf47e2e0]
/* 0c74fe3b */  MOV qword ptr [R15 + 0x38],RAX
/* 0c74fe3f */  MOV dword ptr [R15 + 0x40],0x1
/* 0c74fe47 */  MOV dword ptr [R15 + 0x60],0x3
/* 0c74fe4f */  TEST byte ptr [RSP + 0x38],0x1
/* 0c74fe54 */  JZ 0x0c74fe69
/* 0c74fe56 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0c74fe5b */  MOV RDI,qword ptr [RSP + 0x48]
/* 0c74fe60 */  AND RSI,-0x2
/* 0c74fe64 */  CALL 0x0412a280
/* 0c74fe69 */  MOV byte ptr [RSP + 0x8],0x16
/* 0c74fe6e */  MOV RAX,0x5f6c6c61775f6e69
/* 0c74fe78 */  MOV qword ptr [RSP + 0x9],RAX
/* 0c74fe7d */  MOV dword ptr [RSP + 0x10],0x7469625f
/* 0c74fe85 */  MOV byte ptr [RSP + 0x14],0x0
/* 0c74fe8a */  LEA R14,[RSP + 0x8]
/* 0c74fe8f */  MOV RDI,RBX
/* 0c74fe92 */  MOV RSI,R14
/* 0c74fe95 */  MOV EDX,0x1
/* 0c74fe9a */  CALL 0x0d6bbef0
/* 0c74fe9f */  TEST byte ptr [RSP + 0x8],0x1
/* 0c74fea4 */  JZ 0x0c74feb9
/* 0c74fea6 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0c74feab */  MOV RDI,qword ptr [RSP + 0x18]
/* 0c74feb0 */  AND RSI,-0x2
/* 0c74feb4 */  CALL 0x0412a280
/* 0c74feb9 */  MOV byte ptr [RSP + 0x20],0x10
/* 0c74febe */  MOV RAX,0x7469625f6e65706f
/* 0c74fec8 */  MOV qword ptr [RSP + 0x21],RAX
/* 0c74fecd */  MOV byte ptr [RSP + 0x29],0x0
/* 0c74fed2 */  LEA R14,[RSP + 0x20]
/* 0c74fed7 */  MOV RDI,RBX
/* 0c74feda */  MOV RSI,R14
/* 0c74fedd */  XOR EDX,EDX
/* 0c74fedf */  CALL 0x0d6bbef0
/* 0c74fee4 */  JMP 0x0c750a03
/* 0c750a03 */  TEST byte ptr [RSP + 0x20],0x1
/* 0c750a08 */  JZ 0x0c750a1f
/* 0c750a0a */  LEA RAX,[RSP + 0x20]
/* 0c750a0f */  MOV RSI,qword ptr [RAX]
/* 0c750a12 */  MOV RDI,qword ptr [RAX + 0x10]
/* 0c750a16 */  AND RSI,-0x2
/* 0c750a1a */  CALL 0x0412a280
/* 0c750a1f */  ADD RSP,0x50
/* 0c750a23 */  POP RBX
/* 0c750a24 */  POP R14
/* 0c750a26 */  POP R15
/* 0c750a28 */  RET
