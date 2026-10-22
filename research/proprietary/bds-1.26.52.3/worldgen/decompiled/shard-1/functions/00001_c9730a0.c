/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9730a0
 * Label: WorldGenerator::vslot17
 * Body:  [[0c9730a0, 0c97330f] [0c973486, 0c9734b8] [0c97353e, 0c97356e]]
 * Ghidra: wg_WorldGenerator__vslot17
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot17(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long *plVar6;
  char cVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined4 *unaff_RBX;
  undefined *puVar10;
  undefined1 *puVar11;
  long unaff_R14;
  bool bVar12;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000058;
  ulong in_stack_00000060;
  byte bStack0000000000000068;
  undefined7 uStack0000000000000069;
  char in_stack_00000070;
  byte *in_stack_00000078;
  long *in_stack_00000080;
  long *in_stack_00000088;
  byte in_stack_000000a8;
  
  cVar7 = func_0x0eeddcf0(param_1,param_2,300);
  if (cVar7 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(unaff_R14 + 0xd0) == '\0') &&
     (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar3 = *(long *)(unaff_R14 + 0xe0);
  bVar12 = (*(byte *)(lVar3 + 0x78) & 1) != 0;
  in_stack_00000058 = lVar3 + 0x79;
  if (bVar12) {
    in_stack_00000058 = *(long *)(lVar3 + 0x88);
  }
  in_stack_00000060 = (ulong)(*(byte *)(lVar3 + 0x78) >> 1);
  if (bVar12) {
    in_stack_00000060 = *(ulong *)(lVar3 + 0x80);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&stack0x00000068,&DAT_0f7b8f98,&stack0x00000058);
  if (in_stack_000000a8 == 0) {
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    func_0x0eedeb80(2,0x2d,&stack0x00000068,&stack0x00000020,&stack0x00000470);
    if ((in_stack_00000020 & 1) != 0) {
      func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
    }
  }
  if ((in_stack_000000a8 & 1) == 0) {
    func_0x048e6d60(&stack0x00000068);
    *unaff_RBX = 1;
    return;
  }
  if (in_stack_00000018._4_4_ != 0) {
    return;
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar6 = _DAT_0f5523a0;
  pbVar5 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar8 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x09e00460();
    uVar8 = func_0x0eee2d70(uVar8);
    func_0x0412a280(0xf5522b8,0x10);
    func_0x09e00460();
    uVar8 = func_0x0eee2d70(uVar8);
    func_0x09e00460();
    func_0x0eee2d70(uVar8);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar9 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar9 = *pbVar5;
  }
  plVar1 = _DAT_0f5523a8;
  _bStack0000000000000068 = 0xf5522b8;
  in_stack_00000070 = '\x01';
  in_stack_00000078 = pbVar5;
  in_stack_00000080 = plVar6;
  in_stack_00000088 = _DAT_0f5523a8;
  if (((bVar9 & 1) == 0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar7 = (**(code **)(*plVar1 + 0x608))(plVar1);
  in_stack_00000078 = (byte *)0x0;
  in_stack_00000080 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
    plVar6 = in_stack_00000080;
    in_stack_00000088 = (long *)0x0;
    if (in_stack_00000080 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000080 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080);
        func_0x0412c2d0(plVar6);
      }
    }
  }
  if (in_stack_00000070 == '\x01') {
    func_0x0eee02f0(_bStack0000000000000068);
  }
  if (cVar7 != '\0') {
    return;
  }
  puVar10 = &UNK_0120767b;
  bVar12 = *(char *)(unaff_R14 + 0x170) != '\0';
  if (bVar12) {
    puVar10 = &UNK_0131c045;
  }
  cVar7 = '\x05';
  puVar11 = (undefined1 *)((long)&stack0x00000068 + 6);
  if (bVar12) {
    cVar7 = '\f';
    puVar11 = &stack0x00000075;
  }
  _bStack0000000000000068 = CONCAT71(uStack0000000000000069,cVar7 * '\x02');
  func_0x0eee2f00((long)&stack0x00000068 + 1,puVar10);
  *puVar11 = 0;
  func_0x0412d680();
  iVar2 = *(int *)(unaff_R14 + 200);
  func_0x0412d6b0();
  if (iVar2 == 1) {
    puVar10 = &UNK_011ff111;
  }
  else {
    bVar9 = cVar7 * '\x02';
    if (iVar2 != 2) goto LAB_0c9733ff;
    puVar10 = &UNK_013d6565;
  }
  func_0x0412f8c0(&stack0x00000068,puVar10,0xf);
  func_0x0c97b1f0();
  bVar9 = bStack0000000000000068;
LAB_0c9733ff:
  if ((bVar9 & 1) != 0) {
    func_0x0412a280(in_stack_00000078,_bStack0000000000000068 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c9730a0 */  LEA EAX,[0x13b66ec]
/* 0c9730a6 */  MOV EDX,0x12c
/* 0c9730ab */  XOR EAX,EAX
/* 0c9730ad */  CALL 0x0eeddcf0
/* 0c9730b2 */  TEST AL,AL
/* 0c9730b4 */  JZ 0x0c9730c1
/* 0c9730b6 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0c9730c1 */  MOV RAX,qword ptr [R14 + 0xd0]
/* 0c9730c8 */  CMP byte ptr [RAX],0x0
/* 0c9730cb */  JNZ 0x0c973104
/* 0c9730cd */  LEA RDI,[0x130991f]
/* 0c9730d4 */  LEA RSI,[0x147828b]
/* 0c9730db */  LEA RCX,[0x142bd41]
/* 0c9730e2 */  LEA R8,[0x13b66ec]
/* 0c9730e9 */  MOV EDX,0x130
/* 0c9730ee */  XOR EAX,EAX
/* 0c9730f0 */  CALL 0x0eeddcf0
/* 0c9730f5 */  TEST AL,AL
/* 0c9730f7 */  JZ 0x0c973104
/* 0c9730f9 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0c973104 */  MOV RAX,qword ptr [R14 + 0xe0]
/* 0c97310b */  MOVZX ECX,byte ptr [RAX + 0x78]
/* 0c97310f */  LEA RDX,[RAX + 0x79]
/* 0c973113 */  MOV ESI,ECX
/* 0c973115 */  SHR ESI,0x1
/* 0c973117 */  TEST CL,0x1
/* 0c97311a */  CMOVNZ RDX,qword ptr [RAX + 0x88]
/* 0c973122 */  CMOVNZ RSI,qword ptr [RAX + 0x80]
/* 0c97312a */  MOV qword ptr [RSP + 0x58],RDX
/* 0c97312f */  MOV qword ptr [RSP + 0x60],RSI
/* 0c973134 */  LEA RSI,[0xf7b8f98]
/* 0c97313b */  MOV RAX,qword ptr [0x0f7b8f98]
/* 0c973142 */  LEA RDI,[RSP + 0x68]
/* 0c973147 */  LEA RDX,[RSP + 0x58]
/* 0c97314c */  CALL qword ptr [RAX + 0x80]
/* 0c973152 */  MOV RAX,0x4e11f0a723cb56a9
/* 0c97315c */  MOV qword ptr [RSP + 0x470],RAX
/* 0c973164 */  LEA RAX,[0x140f690]
/* 0c97316b */  MOV qword ptr [RSP + 0x478],RAX
/* 0c973173 */  MOV qword ptr [RSP + 0x480],0x1
/* 0c97317f */  MOV dword ptr [RSP + 0x488],0x20b
/* 0c97318a */  MOVZX EAX,byte ptr [RSP + 0xa8]
/* 0c973192 */  TEST AL,AL
/* 0c973194 */  JNZ 0x0c9731ea
/* 0c973196 */  XORPS XMM0,XMM0
/* 0c973199 */  MOVAPS xmmword ptr [RSP + 0x20],XMM0
/* 0c97319e */  MOV qword ptr [RSP + 0x30],0x0
/* 0c9731a7 */  LEA RDX,[RSP + 0x68]
/* 0c9731ac */  LEA RCX,[RSP + 0x20]
/* 0c9731b1 */  LEA R8,[RSP + 0x470]
/* 0c9731b9 */  MOV EDI,0x2
/* 0c9731be */  MOV ESI,0x2d
/* 0c9731c3 */  CALL 0x0eedeb80
/* 0c9731c8 */  TEST byte ptr [RSP + 0x20],0x1
/* 0c9731cd */  JZ 0x0c9731e2
/* 0c9731cf */  MOV RSI,qword ptr [RSP + 0x20]
/* 0c9731d4 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0c9731d9 */  AND RSI,-0x2
/* 0c9731dd */  CALL 0x0412a280
/* 0c9731e2 */  MOVZX EAX,byte ptr [RSP + 0xa8]
/* 0c9731ea */  TEST AL,0x1
/* 0c9731ec */  JZ 0x0c9733c8
/* 0c9731f2 */  CMP dword ptr [RSP + 0x1c],0x0
/* 0c9731f7 */  JNZ 0x0c973418
/* 0c9731fd */  LEA RDI,[0xf5522b8]
/* 0c973204 */  CALL 0x0412d550
/* 0c973209 */  INC.LOCK qword ptr [0x0f552388]
/* 0c973211 */  LEA RBP,[0xf5522b8]
/* 0c973218 */  MOV RDI,RBP
/* 0c97321b */  CALL 0x0412d610
/* 0c973220 */  MOV RAX,qword ptr [0x0f552398]
/* 0c973227 */  TEST RAX,RAX
/* 0c97322a */  JZ 0x0c973486
/* 0c973230 */  MOVZX ECX,byte ptr [RAX]
/* 0c973233 */  CMP CL,0x1
/* 0c973236 */  JNZ 0x0c973486
/* 0c97323c */  MOV R12,qword ptr [0x0f5523a0]
/* 0c973243 */  TEST R12,R12
/* 0c973246 */  JZ 0x0c973251
/* 0c973248 */  INC.LOCK qword ptr [R12 + 0x8]
/* 0c97324e */  MOVZX ECX,byte ptr [RAX]
/* 0c973251 */  MOV R13,qword ptr [0x0f5523a8]
/* 0c973258 */  MOV qword ptr [RSP + 0x68],RBP
/* 0c97325d */  MOV byte ptr [RSP + 0x70],0x1
/* 0c973262 */  MOV qword ptr [RSP + 0x78],RAX
/* 0c973267 */  MOV qword ptr [RSP + 0x80],R12
/* 0c97326f */  MOV qword ptr [RSP + 0x88],R13
/* 0c973277 */  TEST CL,0x1
/* 0c97327a */  JNZ 0x0c9732b3
/* 0c97327c */  LEA RDI,[0x123c452]
/* 0c973283 */  LEA RSI,[0x12072da]
/* 0c97328a */  LEA RCX,[0x142bd41]
/* 0c973291 */  LEA R8,[0x14ad871]
/* 0c973298 */  MOV EDX,0xea
/* 0c97329d */  XOR EAX,EAX
/* 0c97329f */  CALL 0x0eeddcf0
/* 0c9732a4 */  TEST AL,AL
/* 0c9732a6 */  JZ 0x0c9732b3
/* 0c9732a8 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0c9732b3 */  MOV RAX,qword ptr [R13]
/* 0c9732b7 */  MOV RDI,R13
/* 0c9732ba */  CALL qword ptr [RAX + 0x608]
/* 0c9732c0 */  MOV EBP,EAX
/* 0c9732c2 */  LEA RAX,[RSP + 0x78]
/* 0c9732c7 */  XORPS XMM0,XMM0
/* 0c9732ca */  MOVUPS xmmword ptr [RAX],XMM0
/* 0c9732cd */  TEST R12,R12
/* 0c9732d0 */  JZ 0x0c973335
/* 0c9732d2 */  MOV RAX,-0x1
/* 0c9732d9 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0c9732e0 */  TEST RAX,RAX
/* 0c9732e3 */  JNZ 0x0c9732f7
/* 0c9732e5 */  MOV RAX,qword ptr [R12]
/* 0c9732e9 */  MOV RDI,R12
/* 0c9732ec */  CALL qword ptr [RAX + 0x10]
/* 0c9732ef */  MOV RDI,R12
/* 0c9732f2 */  CALL 0x0412c2d0
/* 0c9732f7 */  MOV R12,qword ptr [RSP + 0x80]
/* 0c9732ff */  MOV qword ptr [RSP + 0x88],0x0
/* 0c97330b */  TEST R12,R12
/* 0c97330e */  JZ 0x0c973335
/* 0c973486 */  LEA RDI,[0xf5522b8]
/* 0c97348d */  CALL 0x0eee02f0
/* 0c973492 */  MOV R14,RAX
/* 0c973495 */  LEA RDI,[0xf7b8fb8]
/* 0c97349c */  CALL 0x041084d6
/* 0c9734a1 */  MOV RDI,RBX
/* 0c9734a4 */  CALL 0x09e00460
/* 0c9734a9 */  MOV RDI,R14
/* 0c9734ac */  CALL 0x0eee2d70
/* 0c9734b1 */  MOV R14,RAX
/* 0c9734b4 */  JMP 0x0c97353e
/* 0c97353e */  MOV ESI,0x10
/* 0c973543 */  MOV RDI,RBP
/* 0c973546 */  CALL 0x0412a280
/* 0c97354b */  MOV RDI,RBX
/* 0c97354e */  CALL 0x09e00460
/* 0c973553 */  MOV RDI,R14
/* 0c973556 */  CALL 0x0eee2d70
/* 0c97355b */  MOV R14,RAX
/* 0c97355e */  MOV RDI,RBX
/* 0c973561 */  CALL 0x09e00460
/* 0c973566 */  MOV RDI,R14
/* 0c973569 */  CALL 0x0eee2d70
/* 0c97356e */  INT3
