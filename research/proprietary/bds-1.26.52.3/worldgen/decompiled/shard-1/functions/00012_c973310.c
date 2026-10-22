/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc973310
 * Label: WorldGenerator::vslot2
 * Body:  [[0c973310, 0c9733c7] [0c9733d7, 0c973429]]
 * Ghidra: wg_WorldGenerator__vslot2
 */


void wg_WorldGenerator__vslot2(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char unaff_BPL;
  byte bVar5;
  undefined *puVar6;
  long *unaff_R12;
  undefined1 *puVar7;
  long unaff_R14;
  bool bVar8;
  byte bStack0000000000000068;
  undefined7 uStack0000000000000069;
  char in_stack_00000070;
  undefined8 in_stack_00000078;
  
  LOCK();
  plVar1 = unaff_R12 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*unaff_R12 + 0x10))();
    func_0x0412c2d0();
  }
  if (in_stack_00000070 == '\x01') {
    func_0x0eee02f0(CONCAT71(uStack0000000000000069,bStack0000000000000068));
  }
  if (unaff_BPL != '\0') {
    return;
  }
  puVar6 = &UNK_0120767b;
  bVar8 = *(char *)(unaff_R14 + 0x170) != '\0';
  if (bVar8) {
    puVar6 = &UNK_0131c045;
  }
  cVar4 = '\x05';
  puVar7 = (undefined1 *)((long)&stack0x00000068 + 6);
  if (bVar8) {
    cVar4 = '\f';
    puVar7 = &stack0x00000075;
  }
  bStack0000000000000068 = cVar4 * '\x02';
  func_0x0eee2f00((long)&stack0x00000068 + 1,puVar6);
  *puVar7 = 0;
  func_0x0412d680();
  iVar3 = *(int *)(unaff_R14 + 200);
  func_0x0412d6b0();
  if (iVar3 == 1) {
    puVar6 = &UNK_011ff111;
  }
  else {
    bVar5 = cVar4 * '\x02';
    if (iVar3 != 2) goto LAB_0c9733ff;
    puVar6 = &UNK_013d6565;
  }
  func_0x0412f8c0(&stack0x00000068,puVar6,0xf);
  func_0x0c97b1f0();
  bVar5 = bStack0000000000000068;
LAB_0c9733ff:
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(in_stack_00000078,
                    CONCAT71(uStack0000000000000069,bStack0000000000000068) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c973310 */  MOV RAX,-0x1
/* 0c973317 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0c97331e */  TEST RAX,RAX
/* 0c973321 */  JNZ 0x0c973335
/* 0c973323 */  MOV RAX,qword ptr [R12]
/* 0c973327 */  MOV RDI,R12
/* 0c97332a */  CALL qword ptr [RAX + 0x10]
/* 0c97332d */  MOV RDI,R12
/* 0c973330 */  CALL 0x0412c2d0
/* 0c973335 */  CMP byte ptr [RSP + 0x70],0x1
/* 0c97333a */  JNZ 0x0c973346
/* 0c97333c */  MOV RDI,qword ptr [RSP + 0x68]
/* 0c973341 */  CALL 0x0eee02f0
/* 0c973346 */  TEST BPL,BPL
/* 0c973349 */  JNZ 0x0c973418
/* 0c97334f */  LEA RAX,[0x131c045]
/* 0c973356 */  LEA RSI,[0x120767b]
/* 0c97335d */  CMP byte ptr [R14 + 0x170],0x0
/* 0c973365 */  CMOVNZ RSI,RAX
/* 0c973369 */  MOV EAX,0xc
/* 0c97336e */  MOV EDX,0x5
/* 0c973373 */  CMOVNZ RDX,RAX
/* 0c973377 */  LEA RAX,[RSP + 0x75]
/* 0c97337c */  LEA R12,[RSP + 0x6e]
/* 0c973381 */  CMOVNZ R12,RAX
/* 0c973385 */  LEA EBP,[RDX + RDX*0x1]
/* 0c973388 */  MOV byte ptr [RSP + 0x68],BPL
/* 0c97338d */  LEA RDI,[RSP + 0x69]
/* 0c973392 */  CALL 0x0eee2f00
/* 0c973397 */  MOV byte ptr [R12],0x0
/* 0c97339c */  MOV RDI,R15
/* 0c97339f */  CALL 0x0412d680
/* 0c9733a4 */  MOV R12D,dword ptr [R14 + 0xc8]
/* 0c9733ab */  MOV RDI,R15
/* 0c9733ae */  CALL 0x0412d6b0
/* 0c9733b3 */  CMP R12D,0x1
/* 0c9733b7 */  JZ 0x0c9733d7
/* 0c9733b9 */  CMP R12D,0x2
/* 0c9733bd */  JNZ 0x0c9733ff
/* 0c9733bf */  LEA RSI,[0x13d6565]
/* 0c9733c6 */  JMP 0x0c9733de
/* 0c9733d7 */  LEA RSI,[0x11ff111]
/* 0c9733de */  LEA RDI,[RSP + 0x68]
/* 0c9733e3 */  MOV EDX,0xf
/* 0c9733e8 */  CALL 0x0412f8c0
/* 0c9733ed */  LEA RSI,[RSP + 0x68]
/* 0c9733f2 */  MOV RDI,R14
/* 0c9733f5 */  CALL 0x0c97b1f0
/* 0c9733fa */  MOVZX EBP,byte ptr [RSP + 0x68]
/* 0c9733ff */  TEST BPL,0x1
/* 0c973403 */  JZ 0x0c973418
/* 0c973405 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0c97340a */  MOV RDI,qword ptr [RSP + 0x78]
/* 0c97340f */  AND RSI,-0x2
/* 0c973413 */  CALL 0x0412a280
/* 0c973418 */  ADD RSP,0x878
/* 0c97341f */  POP RBX
/* 0c973420 */  POP R12
/* 0c973422 */  POP R13
/* 0c973424 */  POP R14
/* 0c973426 */  POP R15
/* 0c973428 */  POP RBP
/* 0c973429 */  RET
