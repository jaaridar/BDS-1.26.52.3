/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc972c60
 * Label: WorldGenerator::vslot53
 * Body:  [[0c972c60, 0c972c74] [0c972c86, 0c972eef] [0c972ef1, 0c97302e] [0c97342a, 0c97343a]]
 * Ghidra: wg_WorldGenerator__vslot53
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot53
               (undefined4 *param_1,long param_2,uint *param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long in_RAX;
  long *plVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  char in_CF;
  bool bVar16;
  char in_SF;
  char in_OF;
  undefined4 uStack_890;
  uint uStack_88c;
  uint uStack_888;
  uint uStack_884;
  long lStack_880;
  int iStack_874;
  byte bStack_870;
  undefined7 uStack_86f;
  undefined1 uStack_868;
  undefined7 uStack_867;
  long lStack_860;
  ulong uStack_858;
  undefined4 *puStack_848;
  uint *puStack_840;
  long lStack_838;
  ulong uStack_830;
  undefined8 uStack_828;
  char acStack_820 [5];
  undefined1 auStack_81b [3];
  byte *pbStack_818;
  long *plStack_810;
  long *plStack_808;
  byte bStack_7e8;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  ulong uStack_20;
  
  if (in_OF == in_SF) {
    *(char *)(in_RAX + -0x7d) = (*(char *)(in_RAX + -0x7d) - (char)param_4) - in_CF;
    out(0xfe,(char)in_RAX);
    func_0x0412a280();
    func_0x0eee2d70();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  lVar2 = param_2 + 0xa0;
  iStack_874 = param_5;
  func_0x0412d680(lVar2);
  iVar7 = *(int *)(param_2 + 200);
  func_0x0412d6b0(lVar2);
  if (iVar7 != 0) goto LAB_0c972cdd;
  LOCK();
  *(undefined4 *)(param_2 + 0x20) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_2 + 0x24) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_2 + 0x28) = 0;
  UNLOCK();
  func_0x0412d680(param_2 + 0x48);
  pbVar1 = (byte *)(param_2 + 0x70);
  puStack_840 = param_3;
  if (pbVar1 != &UNK_01e79d90) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
    }
    else {
      func_0x04885120(pbVar1,&UNK_01e79d91,0);
    }
  }
  func_0x0412d6b0(param_2 + 0x48);
  func_0x0c97bf40(param_2 + 0x18,&UNK_01e79d90);
  func_0x0412d680(lVar2);
  *(undefined4 *)(param_2 + 200) = 0;
  func_0x0412d6b0(lVar2);
  func_0x0412d680(lVar2);
  *(undefined4 *)(param_2 + 200) = 2;
  func_0x0412d6b0(lVar2);
  bVar10 = *param_4;
  if ((bVar10 & 1) == 0) {
    if (bVar10 >> 1 != 0) goto LAB_0c972da4;
LAB_0c972dc2:
    if ((*(long *)(param_2 + 0xd0) == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_2 + 0xd0) == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar11 = *(long *)(param_2 + 0xe0);
    bVar16 = (*(byte *)(lVar11 + 0x78) & 1) != 0;
    lVar15 = lVar11 + 0x79;
    if (bVar16) {
      lVar15 = *(long *)(lVar11 + 0x88);
    }
    uVar13 = (ulong)(*(byte *)(lVar11 + 0x78) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar11 + 0x80);
    }
    puStack_848 = param_1 + 2;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *plVar8 = lVar15;
    plVar8[1] = uVar13;
    if ((*puStack_840 & 1) == 0) {
      lStack_880 = *(long *)(puStack_840 + 4);
      uStack_890 = *puStack_840;
      uStack_88c = puStack_840[1];
      uStack_888 = puStack_840[2];
      uStack_884 = puStack_840[3];
    }
    else {
      func_0x0412e5e0(&uStack_890,*(undefined8 *)(puStack_840 + 4),*(undefined8 *)(puStack_840 + 2))
      ;
    }
    func_0x08bac160(&uStack_828,plVar8,1,0x2f);
    bVar16 = (uStack_890 & 1) != 0;
    lStack_860 = (long)&uStack_890 + 1;
    if (bVar16) {
      lStack_860 = lStack_880;
    }
    bStack_870 = (byte)&uStack_828;
    uStack_86f = (undefined7)((ulong)&uStack_828 >> 8);
    uStack_858 = (ulong)((byte)uStack_890 >> 1);
    if (bVar16) {
      uStack_858 = CONCAT44(uStack_884,uStack_888);
    }
    uStack_868 = (undefined1)uStack_428;
    uStack_867 = (undefined7)(uStack_428 >> 8);
    func_0x049151c0(&uStack_420,&bStack_870,2,0x2f);
    bStack_870 = 0x10;
    uStack_86f = 0x6c726f77636d2e;
    uStack_868 = 100;
    uStack_867 = 0;
    func_0x0eee2dd0(&uStack_828,0,0x408);
    uVar13 = 0;
    if (uStack_20 < 0x400) {
      if (uStack_20 != 0) {
        func_0x0eee2f00(&uStack_828,&uStack_420,uStack_20);
      }
      uStack_428 = uStack_20;
      acStack_820[uStack_20 - 8] = '\0';
      uVar13 = uStack_428;
      if ((uStack_428 & 0xfffffffffffffff8) != 0x3f8) goto LAB_0c972fe0;
      uStack_828 = uStack_828 & 0xffffffffffffff00;
      uStack_428 = 0;
      lVar11 = 1;
LAB_0c97301a:
      uStack_20 = uStack_428;
      func_0x0eee2f00(&uStack_420,&uStack_828,lVar11);
    }
    else {
LAB_0c972fe0:
      *(ulong *)(acStack_820 + (uVar13 - 8)) = CONCAT17(uStack_868,uStack_86f);
      pcVar4 = acStack_820 + uStack_428;
      uStack_428 = uStack_428 + 8;
      *pcVar4 = '\0';
      uStack_20 = 0xffffffffffffffff;
      lVar11 = uStack_428 + 1;
      if (lVar11 != 0) goto LAB_0c97301a;
    }
    func_0x0412f5e0(puStack_848,&uStack_420,uStack_20);
    if ((uStack_890 & 1) != 0) {
      func_0x0412a280(lStack_880,CONCAT44(uStack_88c,uStack_890) & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar8,0x10);
    if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    if ((*(long *)(param_2 + 0xd0) == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_2 + 0xd0) == '\0') &&
       (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013b66ec),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar11 = *(long *)(param_2 + 0xe0);
    bVar16 = (*(byte *)(lVar11 + 0x78) & 1) != 0;
    lStack_838 = lVar11 + 0x79;
    if (bVar16) {
      lStack_838 = *(long *)(lVar11 + 0x88);
    }
    uStack_830 = (ulong)(*(byte *)(lVar11 + 0x78) >> 1);
    if (bVar16) {
      uStack_830 = *(ulong *)(lVar11 + 0x80);
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_828,&DAT_0f7b8f98,&lStack_838);
    uStack_420 = 0x4e11f0a723cb56a9;
    puStack_418 = &UNK_0140f690;
    uStack_410 = 1;
    uStack_408 = 0x20b;
    if (bStack_7e8 == 0) {
      bStack_870 = 0;
      uStack_86f = 0;
      uStack_868 = 0;
      uStack_867 = 0;
      lStack_860 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_828,&bStack_870,&uStack_420);
      if ((bStack_870 & 1) != 0) {
        func_0x0412a280(lStack_860,CONCAT71(uStack_86f,bStack_870) & 0xfffffffffffffffe);
      }
    }
    if ((bStack_7e8 & 1) == 0) {
      func_0x048e6d60(&uStack_828);
LAB_0c972cdd:
      *param_1 = 1;
      return;
    }
  }
  else {
    if (*(long *)(param_4 + 8) == 0) goto LAB_0c972dc2;
LAB_0c972da4:
    if ((bVar10 & 1) == 0) {
      param_4 = param_4 + 1;
    }
    else {
      param_4 = *(byte **)(param_4 + 0x10);
    }
    func_0x0412f5e0(param_1 + 2,param_4);
  }
  if (iStack_874 != 0) {
    return;
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar8 = _DAT_0f5523a0;
  pbStack_818 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar9 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x09e00460(param_1);
    uVar9 = func_0x0eee2d70(uVar9);
    func_0x0412a280(0xf5522b8,0x10);
    func_0x09e00460(param_1);
    uVar9 = func_0x0eee2d70(uVar9);
    func_0x09e00460(param_1);
    func_0x0eee2d70(uVar9);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar10 = *pbStack_818;
  }
  plVar3 = _DAT_0f5523a8;
  uStack_828 = 0xf5522b8;
  acStack_820[0] = '\x01';
  plStack_810 = plVar8;
  plStack_808 = _DAT_0f5523a8;
  if (((bVar10 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar6 = (**(code **)(*plVar3 + 0x608))(plVar3);
  pbStack_818 = (byte *)0x0;
  plStack_810 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar11 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    plVar8 = plStack_810;
    plStack_808 = (long *)0x0;
    if (plStack_810 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_810 + 1;
      lVar11 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_810 + 0x10))(plStack_810);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  if (acStack_820[0] == '\x01') {
    func_0x0eee02f0(uStack_828);
  }
  if (cVar6 != '\0') {
    return;
  }
  puVar12 = &UNK_0120767b;
  bVar16 = *(char *)(param_2 + 0x170) != '\0';
  if (bVar16) {
    puVar12 = &UNK_0131c045;
  }
  cVar6 = '\x05';
  puVar14 = (undefined1 *)((long)&uStack_828 + 6);
  if (bVar16) {
    cVar6 = '\f';
    puVar14 = auStack_81b;
  }
  uStack_828 = CONCAT71(uStack_828._1_7_,cVar6 * '\x02');
  func_0x0eee2f00((long)&uStack_828 + 1,puVar12);
  *puVar14 = 0;
  func_0x0412d680(lVar2);
  iVar7 = *(int *)(param_2 + 200);
  func_0x0412d6b0(lVar2);
  if (iVar7 == 1) {
    puVar12 = &UNK_011ff111;
  }
  else {
    bVar10 = cVar6 * '\x02';
    if (iVar7 != 2) goto LAB_0c9733ff;
    puVar12 = &UNK_013d6565;
  }
  func_0x0412f8c0(&uStack_828,puVar12,0xf);
  func_0x0c97b1f0(param_2,&uStack_828);
  bVar10 = (byte)uStack_828;
LAB_0c9733ff:
  if ((bVar10 & 1) != 0) {
    func_0x0412a280(pbStack_818,uStack_828 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- assembly ---- */
/* 0c972c60 */  JL 0x0c972c86
/* 0c972c62 */  SBB byte ptr [RAX + -0x7d],CL
/* 0c972c65 */  OUT 0xfe,AL
/* 0c972c67 */  CALL 0x0412a280
/* 0c972c6c */  MOV RDI,RBX
/* 0c972c6f */  CALL 0x0eee2d70
/* 0c972c74 */  INT3
/* 0c972c86 */  PUSH RBP
/* 0c972c87 */  PUSH R12
/* 0c972c89 */  PUSH RBX
/* 0c972c8a */  SUB RSP,0x878
/* 0c972c91 */  MOV dword ptr [RSP + 0x1c],R8D
/* 0c972c96 */  MOV RBP,RCX
/* 0c972c99 */  MOV R13,RDX
/* 0c972c9c */  MOV R14,RSI
/* 0c972c9f */  MOV RBX,RDI
/* 0c972ca2 */  MOV word ptr [RDI + 0x8],0x0
/* 0c972ca8 */  MOV word ptr [RDI + 0x20],0x0
/* 0c972cae */  MOV word ptr [RDI + 0x38],0x0
/* 0c972cb4 */  MOV dword ptr [RDI],0x0
/* 0c972cba */  LEA R15,[RSI + 0xa0]
/* 0c972cc1 */  MOV RDI,R15
/* 0c972cc4 */  CALL 0x0412d680
/* 0c972cc9 */  MOV R12D,dword ptr [R14 + 0xc8]
/* 0c972cd0 */  MOV RDI,R15
/* 0c972cd3 */  CALL 0x0412d6b0
/* 0c972cd8 */  TEST R12D,R12D
/* 0c972cdb */  JZ 0x0c972ce8
/* 0c972cdd */  MOV dword ptr [RBX],0x1
/* 0c972ce3 */  JMP 0x0c973418
/* 0c972ce8 */  XOR EAX,EAX
/* 0c972cea */  XOR ECX,ECX
/* 0c972cec */  XCHG dword ptr [R14 + 0x20],ECX
/* 0c972cf0 */  XOR ECX,ECX
/* 0c972cf2 */  XCHG dword ptr [R14 + 0x24],ECX
/* 0c972cf6 */  XCHG dword ptr [R14 + 0x28],EAX
/* 0c972cfa */  LEA R12,[R14 + 0x48]
/* 0c972cfe */  MOV RDI,R12
/* 0c972d01 */  CALL 0x0412d680
/* 0c972d06 */  MOV qword ptr [RSP + 0x50],R13
/* 0c972d0b */  LEA RDI,[R14 + 0x70]
/* 0c972d0f */  LEA RAX,[0x1e79d90]
/* 0c972d16 */  CMP RDI,RAX
/* 0c972d19 */  JZ 0x0c972d3e
/* 0c972d1b */  TEST byte ptr [RDI],0x1
/* 0c972d1e */  JNZ 0x0c972d30
/* 0c972d20 */  XORPS XMM0,XMM0
/* 0c972d23 */  MOVAPS xmmword ptr [RDI],XMM0
/* 0c972d26 */  MOV qword ptr [RDI + 0x10],0x0
/* 0c972d2e */  JMP 0x0c972d3e
/* 0c972d30 */  LEA RSI,[0x1e79d91]
/* 0c972d37 */  XOR EDX,EDX
/* 0c972d39 */  CALL 0x04885120
/* 0c972d3e */  LEA R13,[R14 + 0x18]
/* 0c972d42 */  MOV RDI,R12
/* 0c972d45 */  CALL 0x0412d6b0
/* 0c972d4a */  LEA RSI,[0x1e79d90]
/* 0c972d51 */  MOV RDI,R13
/* 0c972d54 */  CALL 0x0c97bf40
/* 0c972d59 */  MOV RDI,R15
/* 0c972d5c */  CALL 0x0412d680
/* 0c972d61 */  MOV dword ptr [R14 + 0xc8],0x0
/* 0c972d6c */  MOV RDI,R15
/* 0c972d6f */  CALL 0x0412d6b0
/* 0c972d74 */  MOV RDI,R15
/* 0c972d77 */  CALL 0x0412d680
/* 0c972d7c */  MOV dword ptr [R14 + 0xc8],0x2
/* 0c972d87 */  MOV RDI,R15
/* 0c972d8a */  CALL 0x0412d6b0
/* 0c972d8f */  MOVZX EAX,byte ptr [RBP]
/* 0c972d93 */  TEST AL,0x1
/* 0c972d95 */  JZ 0x0c972db5
/* 0c972d97 */  MOV RDX,qword ptr [RBP + 0x8]
/* 0c972d9b */  LEA R12,[RBX + 0x8]
/* 0c972d9f */  TEST RDX,RDX
/* 0c972da2 */  JZ 0x0c972dc2
/* 0c972da4 */  TEST AL,0x1
/* 0c972da6 */  JZ 0x0c972eb9
/* 0c972dac */  MOV RBP,qword ptr [RBP + 0x10]
/* 0c972db0 */  JMP 0x0c972ebc
/* 0c972db5 */  MOV EDX,EAX
/* 0c972db7 */  SHR EDX,0x1
/* 0c972db9 */  LEA R12,[RBX + 0x8]
/* 0c972dbd */  TEST RDX,RDX
/* 0c972dc0 */  JNZ 0x0c972da4
/* 0c972dc2 */  CMP qword ptr [R14 + 0xd0],0x0
/* 0c972dca */  JNZ 0x0c972e03
/* 0c972dcc */  LEA RDI,[0x1411d19]
/* 0c972dd3 */  LEA RSI,[0x135b312]
/* 0c972dda */  LEA RCX,[0x142bd41]
/* 0c972de1 */  LEA R8,[0x13b66ec]
/* 0c972de8 */  MOV EDX,0x12c
/* 0c972ded */  XOR EAX,EAX
/* 0c972def */  CALL 0x0eeddcf0
/* 0c972df4 */  TEST AL,AL
/* 0c972df6 */  JZ 0x0c972e03
/* 0c972df8 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0c972e03 */  MOV RAX,qword ptr [R14 + 0xd0]
/* 0c972e0a */  CMP byte ptr [RAX],0x0
/* 0c972e0d */  JNZ 0x0c972e46
/* 0c972e0f */  LEA RDI,[0x130991f]
/* 0c972e16 */  LEA RSI,[0x147828b]
/* 0c972e1d */  LEA RCX,[0x142bd41]
/* 0c972e24 */  LEA R8,[0x13b66ec]
/* 0c972e2b */  MOV EDX,0x130
/* 0c972e30 */  XOR EAX,EAX
/* 0c972e32 */  CALL 0x0eeddcf0
/* 0c972e37 */  TEST AL,AL
/* 0c972e39 */  JZ 0x0c972e46
/* 0c972e3b */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0c972e46 */  MOV qword ptr [RSP + 0x48],R12
/* 0c972e4b */  MOV RAX,qword ptr [R14 + 0xe0]
/* 0c972e52 */  MOVZX ECX,byte ptr [RAX + 0x78]
/* 0c972e56 */  LEA R13,[RAX + 0x79]
/* 0c972e5a */  MOV R12D,ECX
/* 0c972e5d */  SHR R12D,0x1
/* 0c972e60 */  TEST CL,0x1
/* 0c972e63 */  CMOVNZ R13,qword ptr [RAX + 0x88]
/* 0c972e6b */  CMOVNZ R12,qword ptr [RAX + 0x80]
/* 0c972e73 */  LEA RDI,[0xf5463b0]
/* 0c972e7a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c972e81 */  MOV ESI,0x10
/* 0c972e86 */  CALL qword ptr [RAX + 0x10]
/* 0c972e89 */  MOV RBP,RAX
/* 0c972e8c */  TEST RAX,RAX
/* 0c972e8f */  JZ 0x0c97342a
/* 0c972e95 */  MOV qword ptr [RBP],R13
/* 0c972e99 */  MOV qword ptr [RBP + 0x8],R12
/* 0c972e9d */  MOV RCX,qword ptr [RSP + 0x50]
/* 0c972ea2 */  TEST byte ptr [RCX],0x1
/* 0c972ea5 */  JNZ 0x0c972ecc
/* 0c972ea7 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0c972eab */  MOV qword ptr [RSP + 0x10],RAX
/* 0c972eb0 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0c972eb3 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0c972eb7 */  JMP 0x0c972edc
/* 0c972eb9 */  INC RBP
/* 0c972ebc */  MOV RDI,R12
/* 0c972ebf */  MOV RSI,RBP
/* 0c972ec2 */  CALL 0x0412f5e0
/* 0c972ec7 */  JMP 0x0c9731f2
/* 0c972ecc */  MOV RDX,qword ptr [RCX + 0x8]
/* 0c972ed0 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0c972ed4 */  MOV RDI,RSP
/* 0c972ed7 */  CALL 0x0412e5e0
/* 0c972edc */  LEA R13,[RSP + 0x68]
/* 0c972ee1 */  MOV EDX,0x1
/* 0c972ee6 */  MOV RDI,R13
/* 0c972ee9 */  MOV RSI,RBP
/* 0c972eec */  MOV ECX,0x2f
/* 0c972ef1 */  CALL 0x08bac160
/* 0c972ef6 */  MOVZX EAX,byte ptr [RSP]
/* 0c972efa */  MOV ECX,EAX
/* 0c972efc */  SHR ECX,0x1
/* 0c972efe */  TEST AL,0x1
/* 0c972f00 */  LEA RAX,[RSP + 0x1]
/* 0c972f05 */  CMOVNZ RAX,qword ptr [RSP + 0x10]
/* 0c972f0b */  MOV qword ptr [RSP + 0x20],R13
/* 0c972f10 */  CMOVNZ RCX,qword ptr [RSP + 0x8]
/* 0c972f16 */  MOV RDX,qword ptr [RSP + 0x468]
/* 0c972f1e */  MOV qword ptr [RSP + 0x28],RDX
/* 0c972f23 */  MOV qword ptr [RSP + 0x30],RAX
/* 0c972f28 */  MOV qword ptr [RSP + 0x38],RCX
/* 0c972f2d */  LEA RDI,[RSP + 0x470]
/* 0c972f35 */  LEA RSI,[RSP + 0x20]
/* 0c972f3a */  MOV EDX,0x2
/* 0c972f3f */  MOV ECX,0x2f
/* 0c972f44 */  CALL 0x049151c0
/* 0c972f49 */  MOV R13,qword ptr [RSP + 0x870]
/* 0c972f51 */  MOV RAX,0x6c726f77636d2e10
/* 0c972f5b */  MOV qword ptr [RSP + 0x20],RAX
/* 0c972f60 */  MOV qword ptr [RSP + 0x28],0x64
/* 0c972f69 */  LEA RDI,[RSP + 0x68]
/* 0c972f6e */  XOR R12D,R12D
/* 0c972f71 */  MOV EDX,0x408
/* 0c972f76 */  XOR ESI,ESI
/* 0c972f78 */  CALL 0x0eee2dd0
/* 0c972f7d */  CMP R13,0x3ff
/* 0c972f84 */  JA 0x0c972fe0
/* 0c972f86 */  TEST R13,R13
/* 0c972f89 */  JZ 0x0c972fa0
/* 0c972f8b */  LEA RDI,[RSP + 0x68]
/* 0c972f90 */  LEA RSI,[RSP + 0x470]
/* 0c972f98 */  MOV RDX,R13
/* 0c972f9b */  CALL 0x0eee2f00
/* 0c972fa0 */  MOV qword ptr [RSP + 0x468],R13
/* 0c972fa8 */  MOV byte ptr [RSP + R13*0x1 + 0x68],0x0
/* 0c972fae */  MOV R12,qword ptr [RSP + 0x468]
/* 0c972fb6 */  MOV RAX,R12
/* 0c972fb9 */  AND RAX,-0x8
/* 0c972fbd */  CMP RAX,0x3f8
/* 0c972fc3 */  JNZ 0x0c972fe0
/* 0c972fc5 */  MOV byte ptr [RSP + 0x68],0x0
/* 0c972fca */  MOV qword ptr [RSP + 0x468],0x0
/* 0c972fd6 */  MOV EDX,0x1
/* 0c972fdb */  XOR R12D,R12D
/* 0c972fde */  JMP 0x0c97301a
/* 0c972fe0 */  MOV RAX,qword ptr [RSP + 0x21]
/* 0c972fe5 */  MOV qword ptr [RSP + R12*0x1 + 0x68],RAX
/* 0c972fea */  MOV RAX,qword ptr [RSP + 0x468]
/* 0c972ff2 */  LEA RCX,[RAX + 0x8]
/* 0c972ff6 */  MOV qword ptr [RSP + 0x468],RCX
/* 0c972ffe */  MOV byte ptr [RSP + RAX*0x1 + 0x70],0x0
/* 0c973003 */  MOV R12,qword ptr [RSP + 0x468]
/* 0c97300b */  MOV RDX,R12
/* 0c97300e */  MOV RAX,-0x1
/* 0c973015 */  INC RDX
/* 0c973018 */  JZ 0x0c97302f
/* 0c97301a */  LEA RDI,[RSP + 0x470]
/* 0c973022 */  LEA RSI,[RSP + 0x68]
/* 0c973027 */  CALL 0x0eee2f00
/* 0c97302c */  MOV RAX,R12
/* 0c97342a */  MOV EDI,0x10
/* 0c97342f */  XOR ESI,ESI
/* 0c973431 */  CALL 0x0eec74c0
/* 0c973436 */  JMP 0x0c972e95
