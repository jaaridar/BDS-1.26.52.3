/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527a850 (ELF vaddr 0x517a850)
 * Label: OverworldGeneratorMultinoise::vslot47
 * Body:  [[0527a850, 0527a9f8]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot47
 */


void wg_OverworldGeneratorMultinoise__vslot47
               (long *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
               undefined1 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *apuStack_a0 [4];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  (**(code **)(*param_1 + 0x1e8))(auStack_c8,param_1,*param_3);
  func_0x0d2eeb90(apuStack_a0,
                  CONCAT44((int)(*param_3 >> 0x1c) >> 2,(int)*param_3 << 2) & 0xfffffffcffffffff,
                  param_1 + 0xe,4);
  (**(code **)(*param_1 + 0x1e0))
            (&lStack_d0,param_1,param_3,apuStack_a0,(int)*(short *)(param_1[5] + 0xa8),0x140,
             (int)*(short *)(param_1[5] + 0xac));
  plStack_48 = (long *)0x0;
  (**(code **)(*param_1 + 0x200))
            (param_1,param_2,param_3,auStack_c8,lStack_d0,alStack_68,param_5,param_4);
  if (plStack_48 == alStack_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    lVar1 = lStack_d0;
    if (plStack_48 == (long *)0x0) goto joined_r0x0527a97b;
  }
  (**(code **)(*plStack_48 + lVar2))();
  lVar1 = lStack_d0;
joined_r0x0527a97b:
  lStack_d0 = 0;
  if (lVar1 != 0) {
    lStack_d0 = 0;
    lVar2 = *(long *)(lVar1 + 0x40);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x48) = lVar2;
      thunk_FUN_0ee326a0(lVar2,*(long *)(lVar1 + 0x50) - lVar2);
    }
    thunk_FUN_0ee326a0(lVar1,0x68);
  }
  apuStack_a0[0] = &UNK_0f460460;
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    thunk_FUN_0ee326a0(lStack_80,lStack_70 - lStack_80);
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    thunk_FUN_0ee326a0(lStack_b8,lStack_a8 - lStack_b8);
  }
  return;
}



/* ---- assembly ---- */
/* 0527a850 */  PUSH RBP
/* 0527a851 */  PUSH R15
/* 0527a853 */  PUSH R14
/* 0527a855 */  PUSH R13
/* 0527a857 */  PUSH R12
/* 0527a859 */  PUSH RBX
/* 0527a85a */  SUB RSP,0xa8
/* 0527a861 */  MOV EBP,R8D
/* 0527a864 */  MOV RBX,RCX
/* 0527a867 */  MOV R14,RDX
/* 0527a86a */  MOV R15,RSI
/* 0527a86d */  MOV R12,RDI
/* 0527a870 */  MOV RDX,qword ptr [RDX]
/* 0527a873 */  MOV RAX,qword ptr [RDI]
/* 0527a876 */  LEA RDI,[RSP + 0x10]
/* 0527a87b */  MOV RSI,R12
/* 0527a87e */  CALL qword ptr [RAX + 0x1e8]
/* 0527a884 */  MOV RSI,qword ptr [R14]
/* 0527a887 */  MOV RAX,RSI
/* 0527a88a */  SHR RAX,0x1c
/* 0527a88e */  SHL ESI,0x2
/* 0527a891 */  SAR EAX,0x2
/* 0527a894 */  AND EAX,0xfffffffc
/* 0527a897 */  SHL RAX,0x20
/* 0527a89b */  OR RSI,RAX
/* 0527a89e */  LEA RDX,[R12 + 0x70]
/* 0527a8a3 */  LEA RDI,[RSP + 0x38]
/* 0527a8a8 */  MOV ECX,0x4
/* 0527a8ad */  CALL 0x0d2eeb90
/* 0527a8b2 */  MOV RAX,qword ptr [R12]
/* 0527a8b6 */  MOV RCX,qword ptr [R12 + 0x28]
/* 0527a8bb */  MOVSX R8D,word ptr [RCX + 0xa8]
/* 0527a8c3 */  MOVSX R10D,word ptr [RCX + 0xac]
/* 0527a8cb */  MOV RAX,qword ptr [RAX + 0x1e0]
/* 0527a8d2 */  SUB RSP,0x8
/* 0527a8d6 */  LEA RDI,[RSP + 0x10]
/* 0527a8db */  LEA RCX,[RSP + 0x40]
/* 0527a8e0 */  MOV RSI,R12
/* 0527a8e3 */  MOV RDX,R14
/* 0527a8e6 */  MOV R9D,0x140
/* 0527a8ec */  PUSH R10
/* 0527a8ee */  CALL RAX
/* 0527a8f0 */  ADD RSP,0x10
/* 0527a8f4 */  MOV R8,qword ptr [RSP + 0x8]
/* 0527a8f9 */  MOV qword ptr [RSP + 0x90],0x0
/* 0527a905 */  MOV RAX,qword ptr [R12]
/* 0527a909 */  MOV RAX,qword ptr [RAX + 0x200]
/* 0527a910 */  MOVZX R10D,BPL
/* 0527a914 */  LEA RCX,[RSP + 0x10]
/* 0527a919 */  LEA R13,[RSP + 0x70]
/* 0527a91e */  MOV RDI,R12
/* 0527a921 */  MOV RSI,R15
/* 0527a924 */  MOV RDX,R14
/* 0527a927 */  MOV R9,R13
/* 0527a92a */  PUSH RBX
/* 0527a92b */  PUSH R10
/* 0527a92d */  CALL RAX
/* 0527a92f */  ADD RSP,0x10
/* 0527a933 */  MOV RDI,qword ptr [RSP + 0x90]
/* 0527a93b */  CMP RDI,R13
/* 0527a93e */  JZ 0x0527a95f
/* 0527a940 */  MOV EAX,0x28
/* 0527a945 */  TEST RDI,RDI
/* 0527a948 */  JNZ 0x0527a964
/* 0527a94a */  MOV RBX,qword ptr [RSP + 0x8]
/* 0527a94f */  MOV qword ptr [RSP + 0x8],0x0
/* 0527a958 */  TEST RBX,RBX
/* 0527a95b */  JNZ 0x0527a97d
/* 0527a95d */  JMP 0x0527a9a3
/* 0527a95f */  MOV EAX,0x20
/* 0527a964 */  MOV RCX,qword ptr [RDI]
/* 0527a967 */  CALL qword ptr [RCX + RAX*0x1]
/* 0527a96a */  MOV RBX,qword ptr [RSP + 0x8]
/* 0527a96f */  MOV qword ptr [RSP + 0x8],0x0
/* 0527a978 */  TEST RBX,RBX
/* 0527a97b */  JZ 0x0527a9a3
/* 0527a97d */  MOV RDI,qword ptr [RBX + 0x40]
/* 0527a981 */  TEST RDI,RDI
/* 0527a984 */  JZ 0x0527a996
/* 0527a986 */  MOV qword ptr [RBX + 0x48],RDI
/* 0527a98a */  MOV RSI,qword ptr [RBX + 0x50]
/* 0527a98e */  SUB RSI,RDI
/* 0527a991 */  CALL 0x0412a280
/* 0527a996 */  MOV ESI,0x68
/* 0527a99b */  MOV RDI,RBX
/* 0527a99e */  CALL 0x0412a280
/* 0527a9a3 */  LEA RAX,[0xf460460]
/* 0527a9aa */  MOV qword ptr [RSP + 0x38],RAX
/* 0527a9af */  MOV RDI,qword ptr [RSP + 0x58]
/* 0527a9b4 */  TEST RDI,RDI
/* 0527a9b7 */  JZ 0x0527a9cb
/* 0527a9b9 */  MOV qword ptr [RSP + 0x60],RDI
/* 0527a9be */  MOV RSI,qword ptr [RSP + 0x68]
/* 0527a9c3 */  SUB RSI,RDI
/* 0527a9c6 */  CALL 0x0412a280
/* 0527a9cb */  MOV RDI,qword ptr [RSP + 0x20]
/* 0527a9d0 */  TEST RDI,RDI
/* 0527a9d3 */  JZ 0x0527a9e7
/* 0527a9d5 */  MOV qword ptr [RSP + 0x28],RDI
/* 0527a9da */  MOV RSI,qword ptr [RSP + 0x30]
/* 0527a9df */  SUB RSI,RDI
/* 0527a9e2 */  CALL 0x0412a280
/* 0527a9e7 */  ADD RSP,0xa8
/* 0527a9ee */  POP RBX
/* 0527a9ef */  POP R12
/* 0527a9f1 */  POP R13
/* 0527a9f3 */  POP R14
/* 0527a9f5 */  POP R15
/* 0527a9f7 */  POP RBP
/* 0527a9f8 */  RET
