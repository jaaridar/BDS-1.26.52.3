/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc973030
 * Label: WorldGenerator::vslot16
 * Body:  [[0c973030, 0c97309e] [0c97343b, 0c973485]]
 * Ghidra: wg_WorldGenerator__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot16(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  byte *pbVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined4 *unaff_RBX;
  undefined *puVar10;
  undefined1 *puVar11;
  long unaff_R14;
  bool bVar12;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  ulong in_stack_00000060;
  byte bStack0000000000000068;
  undefined7 uStack0000000000000069;
  char in_stack_00000070;
  byte *in_stack_00000078;
  long *in_stack_00000080;
  long *in_stack_00000088;
  byte in_stack_000000a8;
  
  func_0x0412f5e0(in_stack_00000048,&stack0x00000470);
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  func_0x0412a280();
  if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  if ((*(long *)(unaff_R14 + 0xd0) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(unaff_R14 + 0xd0) == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar2 = *(long *)(unaff_R14 + 0xe0);
  bVar12 = (*(byte *)(lVar2 + 0x78) & 1) != 0;
  in_stack_00000058 = lVar2 + 0x79;
  if (bVar12) {
    in_stack_00000058 = *(long *)(lVar2 + 0x88);
  }
  in_stack_00000060 = (ulong)(*(byte *)(lVar2 + 0x78) >> 1);
  if (bVar12) {
    in_stack_00000060 = *(ulong *)(lVar2 + 0x80);
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
  plVar5 = _DAT_0f5523a0;
  pbVar4 = _DAT_0f552398;
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar9 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar9 = *pbVar4;
  }
  plVar1 = _DAT_0f5523a8;
  _bStack0000000000000068 = 0xf5522b8;
  in_stack_00000070 = '\x01';
  in_stack_00000078 = pbVar4;
  in_stack_00000080 = plVar5;
  in_stack_00000088 = _DAT_0f5523a8;
  if (((bVar9 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar6 = (**(code **)(*plVar1 + 0x608))(plVar1);
  in_stack_00000078 = (byte *)0x0;
  in_stack_00000080 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
    plVar5 = in_stack_00000080;
    in_stack_00000088 = (long *)0x0;
    if (in_stack_00000080 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_00000080 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_stack_00000080 + 0x10))(in_stack_00000080);
        func_0x0412c2d0(plVar5);
      }
    }
  }
  if (in_stack_00000070 == '\x01') {
    func_0x0eee02f0(_bStack0000000000000068);
  }
  if (cVar6 != '\0') {
    return;
  }
  puVar10 = &UNK_0120767b;
  bVar12 = *(char *)(unaff_R14 + 0x170) != '\0';
  if (bVar12) {
    puVar10 = &UNK_0131c045;
  }
  cVar6 = '\x05';
  puVar11 = (undefined1 *)((long)&stack0x00000068 + 6);
  if (bVar12) {
    cVar6 = '\f';
    puVar11 = &stack0x00000075;
  }
  _bStack0000000000000068 = CONCAT71(uStack0000000000000069,cVar6 * '\x02');
  func_0x0eee2f00((long)&stack0x00000068 + 1,puVar10);
  *puVar11 = 0;
  func_0x0412d680();
  iVar7 = *(int *)(unaff_R14 + 200);
  func_0x0412d6b0();
  if (iVar7 == 1) {
    puVar10 = &UNK_011ff111;
  }
  else {
    bVar9 = cVar6 * '\x02';
    if (iVar7 != 2) goto LAB_0c9733ff;
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
/* 0c973030 */  MOV dword ptr [RSP + 0x870],EAX
/* 0c973037 */  LEA RSI,[RSP + 0x470]
/* 0c97303f */  MOV RDI,qword ptr [RSP + 0x48]
/* 0c973044 */  MOV RDX,RAX
/* 0c973047 */  CALL 0x0412f5e0
/* 0c97304c */  TEST byte ptr [RSP],0x1
/* 0c973050 */  JZ 0x0c973064
/* 0c973052 */  MOV RSI,qword ptr [RSP]
/* 0c973056 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0c97305b */  AND RSI,-0x2
/* 0c97305f */  CALL 0x0412a280
/* 0c973064 */  MOV ESI,0x10
/* 0c973069 */  MOV RDI,RBP
/* 0c97306c */  CALL 0x0412a280
/* 0c973071 */  MOVZX EAX,byte ptr [0x0f7b8fb8]
/* 0c973078 */  TEST AL,AL
/* 0c97307a */  JZ 0x0c97343b
/* 0c973080 */  CMP qword ptr [R14 + 0xd0],0x0
/* 0c973088 */  JNZ 0x0c9730c1
/* 0c97308a */  LEA RDI,[0x1411d19]
/* 0c973091 */  LEA RSI,[0x135b312]
/* 0c973098 */  LEA RCX,[0x142bd41]
/* 0c97343b */  LEA RDI,[0xf7b8fb8]
/* 0c973442 */  CALL 0x04108328
/* 0c973447 */  TEST EAX,EAX
/* 0c973449 */  JZ 0x0c973080
/* 0c97344f */  LEA RDI,[0xf7b8f98]
/* 0c973456 */  CALL 0x0ee5ea20
/* 0c97345b */  LEA RDI,[0xee5ebd0]
/* 0c973462 */  LEA RSI,[0xf7b8f98]
/* 0c973469 */  LEA RDX,[0xf53dab8]
/* 0c973470 */  CALL 0x0eee2f40
/* 0c973475 */  LEA RDI,[0xf7b8fb8]
/* 0c97347c */  CALL 0x0410844d
/* 0c973481 */  JMP 0x0c973080
