/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3a160 (ELF vaddr 0x493a160)
 * Label: BiomeSource3d::vslot2
 * Body:  [[04a3a160, 04a3a2bb]]
 * Ghidra: wg_BiomeSource3d__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_BiomeSource3d__vslot2
          (undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,undefined8 param_5,
          undefined4 param_6,long param_7)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iStack_48 = (int)param_5 + -8;
  lStack_50 = ((ulong)((int)param_4 - 8) | param_4 & 0xffffffff00000000) - 0x800000000;
  iStack_44 = (param_3 >> 3) + 2;
  uVar3 = iStack_44 * 0x10;
  lVar1 = (ulong)uVar3 * 8;
  uStack_40 = param_5;
  uStack_38 = param_2;
  lStack_68 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_68 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_58 = (ulong)uVar3 * 8 + lStack_68;
  lStack_60 = lStack_68;
  if (param_7 == 0) {
    cVar2 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x20,&UNK_012d6c22,&UNK_01207c1f);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  func_0x04a3a2f0(uStack_38,&lStack_68,param_7);
  func_0x0c84eb20(param_1,&lStack_68,(int)(short)param_3,param_4,uStack_40,param_6);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x0412a280(lStack_68,lStack_58 - lStack_68);
  }
  return param_1;
}



/* ---- assembly ---- */
/* 04a3a160 */  PUSH RBP
/* 04a3a161 */  PUSH R15
/* 04a3a163 */  PUSH R14
/* 04a3a165 */  PUSH R13
/* 04a3a167 */  PUSH R12
/* 04a3a169 */  PUSH RBX
/* 04a3a16a */  SUB RSP,0x48
/* 04a3a16e */  MOV dword ptr [RSP + 0xc],R9D
/* 04a3a173 */  MOV R15,RCX
/* 04a3a176 */  MOV R12D,EDX
/* 04a3a179 */  MOV qword ptr [RSP + 0x40],RSI
/* 04a3a17e */  MOV R14,RDI
/* 04a3a181 */  LEA EAX,[RCX + -0x8]
/* 04a3a184 */  MOV qword ptr [RSP + 0x38],R8
/* 04a3a189 */  LEA ECX,[R8 + -0x8]
/* 04a3a18d */  MOV RDX,-0x100000000
/* 04a3a197 */  AND RDX,R15
/* 04a3a19a */  OR RAX,RDX
/* 04a3a19d */  MOV RDX,-0x800000000
/* 04a3a1a7 */  ADD RDX,RAX
/* 04a3a1aa */  MOV qword ptr [RSP + 0x28],RDX
/* 04a3a1af */  MOV dword ptr [RSP + 0x30],ECX
/* 04a3a1b3 */  MOV EBX,R12D
/* 04a3a1b6 */  SHR EBX,0x3
/* 04a3a1b9 */  ADD EBX,0x2
/* 04a3a1bc */  MOV dword ptr [RSP + 0x34],EBX
/* 04a3a1c0 */  SHL EBX,0x4
/* 04a3a1c3 */  LEA RBP,[RBX*0x8]
/* 04a3a1cb */  MOV RAX,qword ptr [0x0f5463b0]
/* 04a3a1d2 */  LEA RDI,[0xf5463b0]
/* 04a3a1d9 */  MOV RSI,RBP
/* 04a3a1dc */  CALL qword ptr [RAX + 0x10]
/* 04a3a1df */  MOV R13,RAX
/* 04a3a1e2 */  TEST RAX,RAX
/* 04a3a1e5 */  JZ 0x04a3a2ad
/* 04a3a1eb */  LEA RAX,[RBX*0x8]
/* 04a3a1f3 */  ADD RAX,R13
/* 04a3a1f6 */  MOV qword ptr [RSP + 0x10],R13
/* 04a3a1fb */  MOV qword ptr [RSP + 0x18],R13
/* 04a3a200 */  MOV qword ptr [RSP + 0x20],RAX
/* 04a3a205 */  MOV RAX,qword ptr [RSP + 0x80]
/* 04a3a20d */  TEST RAX,RAX
/* 04a3a210 */  MOV RBX,R14
/* 04a3a213 */  MOV R14,RAX
/* 04a3a216 */  JNZ 0x04a3a24f
/* 04a3a218 */  LEA RDI,[0x1221f1d]
/* 04a3a21f */  LEA RSI,[0x1390418]
/* 04a3a226 */  LEA RCX,[0x12d6c22]
/* 04a3a22d */  LEA R8,[0x1207c1f]
/* 04a3a234 */  MOV EDX,0x20
/* 04a3a239 */  XOR EAX,EAX
/* 04a3a23b */  CALL 0x0eeddcf0
/* 04a3a240 */  TEST AL,AL
/* 04a3a242 */  JZ 0x04a3a24f
/* 04a3a244 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 04a3a24f */  LEA RSI,[RSP + 0x10]
/* 04a3a254 */  MOV RDI,qword ptr [RSP + 0x40]
/* 04a3a259 */  MOV RDX,R14
/* 04a3a25c */  CALL 0x04a3a2f0
/* 04a3a261 */  MOVSX EDX,R12W
/* 04a3a265 */  LEA RSI,[RSP + 0x10]
/* 04a3a26a */  MOV RDI,RBX
/* 04a3a26d */  MOV RCX,R15
/* 04a3a270 */  MOV R8,qword ptr [RSP + 0x38]
/* 04a3a275 */  MOV R9D,dword ptr [RSP + 0xc]
/* 04a3a27a */  CALL 0x0c84eb20
/* 04a3a27f */  MOV RDI,qword ptr [RSP + 0x10]
/* 04a3a284 */  TEST RDI,RDI
/* 04a3a287 */  JZ 0x04a3a29b
/* 04a3a289 */  MOV qword ptr [RSP + 0x18],RDI
/* 04a3a28e */  MOV RSI,qword ptr [RSP + 0x20]
/* 04a3a293 */  SUB RSI,RDI
/* 04a3a296 */  CALL 0x0412a280
/* 04a3a29b */  MOV RAX,RBX
/* 04a3a29e */  ADD RSP,0x48
/* 04a3a2a2 */  POP RBX
/* 04a3a2a3 */  POP R12
/* 04a3a2a5 */  POP R13
/* 04a3a2a7 */  POP R14
/* 04a3a2a9 */  POP R15
/* 04a3a2ab */  POP RBP
/* 04a3a2ac */  RET
/* 04a3a2ad */  MOV RDI,RBP
/* 04a3a2b0 */  XOR ESI,ESI
/* 04a3a2b2 */  CALL 0x0eec74c0
/* 04a3a2b7 */  JMP 0x04a3a1eb
