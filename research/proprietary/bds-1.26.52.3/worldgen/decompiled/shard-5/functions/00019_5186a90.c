/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286a90 (ELF vaddr 0x5186a90)
 * Label: OverworldGeneratorMultinoise::vslot60
 * Body:  [[05286a90, 05286b2e]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_OverworldGeneratorMultinoise__vslot60
                 (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,short param_5,
                 short param_6,short param_7)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (lVar1 == 0) {
    func_0x0eec74c0(0x68,0);
  }
  func_0x052588d0(lVar1,param_3,param_2 + 0x5e8,param_2 + 0x908,param_4,(int)param_5,(int)param_6,
                  (int)param_7);
  *param_1 = lVar1;
  return param_1;
}



/* ---- assembly ---- */
/* 05286a90 */  PUSH RBP
/* 05286a91 */  PUSH R15
/* 05286a93 */  PUSH R14
/* 05286a95 */  PUSH R13
/* 05286a97 */  PUSH R12
/* 05286a99 */  PUSH RBX
/* 05286a9a */  SUB RSP,0x18
/* 05286a9e */  MOV EBP,R9D
/* 05286aa1 */  MOV R15D,R8D
/* 05286aa4 */  MOV qword ptr [RSP + 0x10],RCX
/* 05286aa9 */  MOV qword ptr [RSP + 0x8],RDX
/* 05286aae */  MOV R12,RSI
/* 05286ab1 */  MOV RBX,RDI
/* 05286ab4 */  LEA R13,[RSI + 0x5e8]
/* 05286abb */  ADD R12,0x908
/* 05286ac2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05286ac9 */  LEA RDI,[0xf5463b0]
/* 05286ad0 */  MOV ESI,0x68
/* 05286ad5 */  CALL qword ptr [RAX + 0x10]
/* 05286ad8 */  MOV R14,RAX
/* 05286adb */  TEST RAX,RAX
/* 05286ade */  JZ 0x05286b21
/* 05286ae0 */  MOVSX R9D,R15W
/* 05286ae4 */  MOVSX EAX,BP
/* 05286ae7 */  MOVSX R10D,word ptr [RSP + 0x50]
/* 05286aed */  MOV RDI,R14
/* 05286af0 */  MOV RSI,qword ptr [RSP + 0x8]
/* 05286af5 */  MOV RDX,R13
/* 05286af8 */  MOV RCX,R12
/* 05286afb */  MOV R8,qword ptr [RSP + 0x10]
/* 05286b00 */  PUSH R10
/* 05286b02 */  PUSH RAX
/* 05286b03 */  CALL 0x052588d0
/* 05286b08 */  ADD RSP,0x10
/* 05286b0c */  MOV qword ptr [RBX],R14
/* 05286b0f */  MOV RAX,RBX
/* 05286b12 */  ADD RSP,0x18
/* 05286b16 */  POP RBX
/* 05286b17 */  POP R12
/* 05286b19 */  POP R13
/* 05286b1b */  POP R14
/* 05286b1d */  POP R15
/* 05286b1f */  POP RBP
/* 05286b20 */  RET
/* 05286b21 */  MOV EDI,0x68
/* 05286b26 */  XOR ESI,ESI
/* 05286b28 */  CALL 0x0eec74c0
/* 05286b2d */  JMP 0x05286ae0
