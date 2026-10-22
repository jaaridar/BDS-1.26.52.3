/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x534f1c0 (ELF vaddr 0x524f1c0)
 * Label: ClimateBiomeComponentGlue::vslot2
 * Body:  [[0534f1c0, 0534f2ee]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_ClimateBiomeComponentGlue__vslot2
                (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  uint uVar7;
  ulong uStack_50;
  uint uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_38;
  uint7 uStack_37;
  undefined1 auStack_30 [24];
  
  cVar5 = *(char *)((long)param_2 + 0x24);
  puVar4 = (undefined8 *)*param_2;
  puVar3 = puVar4;
  if (cVar5 == '\x02') {
    puVar3 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != -0x1a0f8f0) {
    uVar1 = param_2[5];
    lVar2 = param_2[6];
    if (lVar2 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar2 = param_2[6];
      cVar5 = *(char *)((long)param_2 + 0x24);
      puVar4 = (undefined8 *)*param_2;
    }
    if (cVar5 == '\x02') {
      puVar4 = param_2;
    }
    puVar3 = (undefined8 *)func_0x0488e200(uVar1,lVar2,0xfe5f0710,puVar4);
  }
  uStack_50 = 0x110000012d759b;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_38 = 0;
  lVar2 = (ulong)uStack_37 << 8;
  uVar7 = uStack_48;
  FUN_0eeb79f0(auStack_30,&uStack_50);
  if ((uStack_50 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((*(char *)(puVar3 + 3) == '\x01') &&
     (*(float *)((long)puVar3 + 0x14) <= *(float *)(puVar3 + 2) &&
      *(float *)(puVar3 + 2) != *(float *)((long)puVar3 + 0x14))) {
    func_0x0534f330(1,3,5,&UNK_01222a94,param_5,param_6,uVar7,uStack_40,lVar2);
    uVar6 = 0;
  }
  func_0x0eeb81b0(auStack_30);
  return uVar6 & 0xffffffff;
}



/* ---- assembly ---- */
/* 0534f1c0 */  PUSH RBP
/* 0534f1c1 */  PUSH R14
/* 0534f1c3 */  PUSH RBX
/* 0534f1c4 */  SUB RSP,0x50
/* 0534f1c8 */  CMP dword ptr [RSI + 0x20],0xfe5f0710
/* 0534f1cf */  SETNZ AL
/* 0534f1d2 */  MOVZX EDX,byte ptr [RSI + 0x24]
/* 0534f1d6 */  CMP DL,0x2
/* 0534f1d9 */  MOV RCX,qword ptr [RSI]
/* 0534f1dc */  MOV RBX,RCX
/* 0534f1df */  CMOVZ RBX,RSI
/* 0534f1e3 */  TEST RBX,RBX
/* 0534f1e6 */  SETZ DIL
/* 0534f1ea */  OR DIL,AL
/* 0534f1ed */  CMP DIL,0x1
/* 0534f1f1 */  JNZ 0x0534f233
/* 0534f1f3 */  MOV RBX,qword ptr [RSI + 0x28]
/* 0534f1f7 */  MOV RAX,qword ptr [RSI + 0x30]
/* 0534f1fb */  TEST RAX,RAX
/* 0534f1fe */  JNZ 0x0534f219
/* 0534f200 */  XOR EDI,EDI
/* 0534f202 */  MOV R14,RSI
/* 0534f205 */  XOR EDX,EDX
/* 0534f207 */  CALL qword ptr [RSI + 0x38]
/* 0534f20a */  MOV RSI,R14
/* 0534f20d */  MOV RAX,qword ptr [R14 + 0x30]
/* 0534f211 */  MOVZX EDX,byte ptr [R14 + 0x24]
/* 0534f216 */  MOV RCX,qword ptr [R14]
/* 0534f219 */  CMP DL,0x2
/* 0534f21c */  CMOVZ RCX,RSI
/* 0534f220 */  MOV RDI,RBX
/* 0534f223 */  MOV RSI,RAX
/* 0534f226 */  MOV EDX,0xfe5f0710
/* 0534f22b */  CALL 0x0488e200
/* 0534f230 */  MOV RBX,RAX
/* 0534f233 */  MOV R14,-0xff000000000001
/* 0534f23d */  LEA RAX,[0x12d759b]
/* 0534f244 */  AND RAX,R14
/* 0534f247 */  MOV RCX,0x11000000000000
/* 0534f251 */  OR RCX,RAX
/* 0534f254 */  MOV qword ptr [RSP + 0x18],RCX
/* 0534f259 */  MOV byte ptr [RSP + 0x20],0x0
/* 0534f25e */  MOV byte ptr [RSP + 0x30],0x0
/* 0534f263 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0534f268 */  MOV qword ptr [RSP + 0x10],RAX
/* 0534f26d */  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
/* 0534f272 */  MOVUPS xmmword ptr [RSP],XMM0
/* 0534f276 */  LEA RDI,[RSP + 0x38]
/* 0534f27b */  LEA RSI,[RSP + 0x18]
/* 0534f280 */  CALL 0x0eeb79f0
/* 0534f285 */  MOV RSI,qword ptr [RSP + 0x18]
/* 0534f28a */  BT RSI,0x37
/* 0534f28f */  JNC 0x0534f2a9
/* 0534f291 */  AND RSI,R14
/* 0534f294 */  ADD RSI,-0x8
/* 0534f298 */  LEA RDI,[0xf5463b0]
/* 0534f29f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0534f2a6 */  CALL qword ptr [RAX + 0x28]
/* 0534f2a9 */  MOV BPL,0x1
/* 0534f2ac */  CMP byte ptr [RBX + 0x18],0x1
/* 0534f2b0 */  JNZ 0x0534f2da
/* 0534f2b2 */  MOVSS XMM0,dword ptr [RBX + 0x10]
/* 0534f2b7 */  UCOMISS XMM0,dword ptr [RBX + 0x14]
/* 0534f2bb */  JBE 0x0534f2da
/* 0534f2bd */  LEA RCX,[0x1222a94]
/* 0534f2c4 */  MOV EDI,0x1
/* 0534f2c9 */  MOV ESI,0x3
/* 0534f2ce */  MOV EDX,0x5
/* 0534f2d3 */  CALL 0x0534f330
/* 0534f2d8 */  XOR EBP,EBP
/* 0534f2da */  LEA RDI,[RSP + 0x38]
/* 0534f2df */  CALL 0x0eeb81b0
/* 0534f2e4 */  MOV EAX,EBP
/* 0534f2e6 */  ADD RSP,0x50
/* 0534f2ea */  POP RBX
/* 0534f2eb */  POP R14
/* 0534f2ed */  POP RBP
/* 0534f2ee */  RET
