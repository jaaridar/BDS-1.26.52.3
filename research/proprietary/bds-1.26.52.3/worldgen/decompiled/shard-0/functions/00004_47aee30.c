/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48aee30 (ELF vaddr 0x47aee30)
 * Label: callee2-of:0x7e4b530
 * Body:  [[048aee30, 048af07e]]
 * Ghidra: FUN_048aee30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048aee30(undefined8 *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar16 = (long *)(*param_2 +
                    (ulong)((int)((ulong)(param_2[1] - *param_2) >> 3) - 1U & param_4) * 8);
  do {
    lVar17 = *plVar16;
    if (lVar17 == -1) goto LAB_048aeea8;
    plVar16 = (long *)(param_2[3] + lVar17 * 0x18);
  } while (*(uint *)(param_2[3] + 8 + lVar17 * 0x18) != param_4);
  if (plVar16 == (long *)param_2[4]) {
LAB_048aeea8:
    uStack_2c = param_4;
    puStack_28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puStack_28 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    uVar2 = param_3[0xb];
    puStack_28[10] = param_3[10];
    puStack_28[0xb] = uVar2;
    uVar2 = param_3[9];
    puStack_28[8] = param_3[8];
    puStack_28[9] = uVar2;
    uVar2 = *param_3;
    uVar15 = param_3[1];
    uVar4 = *(undefined4 *)(param_3 + 2);
    uVar5 = *(undefined4 *)((long)param_3 + 0x14);
    uVar6 = *(undefined4 *)(param_3 + 3);
    uVar7 = *(undefined4 *)((long)param_3 + 0x1c);
    uVar8 = *(undefined4 *)(param_3 + 4);
    uVar9 = *(undefined4 *)((long)param_3 + 0x24);
    uVar10 = *(undefined4 *)(param_3 + 5);
    uVar11 = *(undefined4 *)((long)param_3 + 0x2c);
    uVar12 = *(undefined4 *)((long)param_3 + 0x34);
    uVar13 = *(undefined4 *)(param_3 + 7);
    uVar14 = *(undefined4 *)((long)param_3 + 0x3c);
    *(undefined4 *)(puStack_28 + 6) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)((long)puStack_28 + 0x34) = uVar12;
    *(undefined4 *)(puStack_28 + 7) = uVar13;
    *(undefined4 *)((long)puStack_28 + 0x3c) = uVar14;
    *(undefined4 *)(puStack_28 + 4) = uVar8;
    *(undefined4 *)((long)puStack_28 + 0x24) = uVar9;
    *(undefined4 *)(puStack_28 + 5) = uVar10;
    *(undefined4 *)((long)puStack_28 + 0x2c) = uVar11;
    *(undefined4 *)(puStack_28 + 2) = uVar4;
    *(undefined4 *)((long)puStack_28 + 0x14) = uVar5;
    *(undefined4 *)(puStack_28 + 3) = uVar6;
    *(undefined4 *)((long)puStack_28 + 0x1c) = uVar7;
    *puStack_28 = uVar2;
    puStack_28[1] = uVar15;
    *(undefined4 *)(puStack_28 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    uVar2 = param_3[0xe];
    puStack_28[0xd] = param_3[0xd];
    puStack_28[0xe] = uVar2;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    uVar2 = param_3[0xf];
    param_3[0xf] = 0;
    puStack_28[0xf] = uVar2;
    lVar17 = func_0x048af130(param_2,&uStack_2c,&puStack_28);
    puVar18 = puStack_28;
    lVar17 = *(long *)(lVar17 + 0x10);
    param_1[2] = lVar17;
    puStack_28 = (undefined8 *)0x0;
    if (puVar18 != (undefined8 *)0x0) {
      lVar17 = puVar18[0xf];
      puVar18[0xf] = 0;
      if (lVar17 != 0) {
        func_0x048ae940(lVar17);
        thunk_FUN_0ee326a0(lVar17,0x78);
      }
      plVar16 = (long *)puVar18[0xe];
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar1 = plVar16 + 1;
        lVar17 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
      thunk_FUN_0ee326a0(puVar18,0x80);
      lVar17 = param_1[2];
    }
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x78,0);
    }
    puVar18[0xc] = 0;
    puVar18[0xd] = 0;
    puVar18[10] = 0;
    puVar18[0xb] = 0;
    puVar18[8] = 0;
    puVar18[9] = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[4] = 0;
    puVar18[5] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[0xe] = 0;
    lVar3 = *(long *)(lVar17 + 0x78);
    *(undefined8 **)(lVar17 + 0x78) = puVar18;
    if (lVar3 != 0) {
      func_0x048ae940(lVar3);
      thunk_FUN_0ee326a0(lVar3,0x78);
      lVar17 = param_1[2];
    }
    *(uint *)(lVar17 + 8) = uStack_2c;
  }
  else {
    param_1[2] = plVar16[2];
  }
  return;
}



/* ---- assembly ---- */
/* 048aee30 */  PUSH R15
/* 048aee32 */  PUSH R14
/* 048aee34 */  PUSH R12
/* 048aee36 */  PUSH RBX
/* 048aee37 */  SUB RSP,0x18
/* 048aee3b */  MOV R15,RDX
/* 048aee3e */  MOV R14,RSI
/* 048aee41 */  MOV RBX,RDI
/* 048aee44 */  MOV dword ptr [RSP + 0xc],ECX
/* 048aee48 */  MOV qword ptr [RDI],RSI
/* 048aee4b */  XORPS XMM0,XMM0
/* 048aee4e */  MOVUPS xmmword ptr [RDI + 0x8],XMM0
/* 048aee52 */  MOV qword ptr [RDI + 0x18],0x0
/* 048aee5a */  MOV RAX,qword ptr [RSI]
/* 048aee5d */  MOV RDX,qword ptr [RSI + 0x8]
/* 048aee61 */  SUB RDX,RAX
/* 048aee64 */  SHR RDX,0x3
/* 048aee68 */  DEC EDX
/* 048aee6a */  AND EDX,ECX
/* 048aee6c */  LEA RAX,[RAX + RDX*0x8]
/* 048aee70 */  MOV RDX,qword ptr [RSI + 0x18]
/* 048aee74 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 048aee80 */  MOV RAX,qword ptr [RAX]
/* 048aee83 */  CMP RAX,-0x1
/* 048aee87 */  JZ 0x048af02d
/* 048aee8d */  LEA RSI,[RAX + RAX*0x2]
/* 048aee91 */  LEA RAX,[RDX + RSI*0x8]
/* 048aee95 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],ECX
/* 048aee99 */  JNZ 0x048aee80
/* 048aee9b */  MOV RCX,qword ptr [R14 + 0x20]
/* 048aee9f */  CMP RAX,RCX
/* 048aeea2 */  JNZ 0x048af03d
/* 048aeea8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 048aeeaf */  LEA RDI,[0xf5463b0]
/* 048aeeb6 */  MOV ESI,0x80
/* 048aeebb */  CALL qword ptr [RAX + 0x10]
/* 048aeebe */  TEST RAX,RAX
/* 048aeec1 */  JZ 0x048af051
/* 048aeec7 */  MOVUPS XMM0,xmmword ptr [R15 + 0x50]
/* 048aeecc */  MOVUPS xmmword ptr [RAX + 0x50],XMM0
/* 048aeed0 */  MOVUPS XMM0,xmmword ptr [R15 + 0x40]
/* 048aeed5 */  MOVUPS xmmword ptr [RAX + 0x40],XMM0
/* 048aeed9 */  MOVUPS XMM0,xmmword ptr [R15]
/* 048aeedd */  MOVUPS XMM1,xmmword ptr [R15 + 0x10]
/* 048aeee2 */  MOVUPS XMM2,xmmword ptr [R15 + 0x20]
/* 048aeee7 */  MOVUPS XMM3,xmmword ptr [R15 + 0x30]
/* 048aeeec */  MOVUPS xmmword ptr [RAX + 0x30],XMM3
/* 048aeef0 */  MOVUPS xmmword ptr [RAX + 0x20],XMM2
/* 048aeef4 */  MOVUPS xmmword ptr [RAX + 0x10],XMM1
/* 048aeef8 */  MOVUPS xmmword ptr [RAX],XMM0
/* 048aeefb */  MOV ECX,dword ptr [R15 + 0x60]
/* 048aeeff */  MOV dword ptr [RAX + 0x60],ECX
/* 048aef02 */  MOVUPS XMM0,xmmword ptr [R15 + 0x68]
/* 048aef07 */  MOVUPS xmmword ptr [RAX + 0x68],XMM0
/* 048aef0b */  XORPS XMM0,XMM0
/* 048aef0e */  MOVUPS xmmword ptr [R15 + 0x68],XMM0
/* 048aef13 */  MOV RCX,qword ptr [R15 + 0x78]
/* 048aef17 */  MOV qword ptr [R15 + 0x78],0x0
/* 048aef1f */  MOV qword ptr [RAX + 0x78],RCX
/* 048aef23 */  MOV qword ptr [RSP + 0x10],RAX
/* 048aef28 */  LEA RSI,[RSP + 0xc]
/* 048aef2d */  LEA RDX,[RSP + 0x10]
/* 048aef32 */  MOV RDI,R14
/* 048aef35 */  CALL 0x048af130
/* 048aef3a */  MOV R15,qword ptr [RAX + 0x10]
/* 048aef3e */  MOV qword ptr [RBX + 0x10],R15
/* 048aef42 */  MOV R14,qword ptr [RSP + 0x10]
/* 048aef47 */  MOV qword ptr [RSP + 0x10],0x0
/* 048aef50 */  TEST R14,R14
/* 048aef53 */  JZ 0x048aefb8
/* 048aef55 */  MOV R15,qword ptr [R14 + 0x78]
/* 048aef59 */  MOV qword ptr [R14 + 0x78],0x0
/* 048aef61 */  TEST R15,R15
/* 048aef64 */  JZ 0x048aef7b
/* 048aef66 */  MOV RDI,R15
/* 048aef69 */  CALL 0x048ae940
/* 048aef6e */  MOV ESI,0x78
/* 048aef73 */  MOV RDI,R15
/* 048aef76 */  CALL 0x0412a280
/* 048aef7b */  MOV R15,qword ptr [R14 + 0x70]
/* 048aef7f */  TEST R15,R15
/* 048aef82 */  JZ 0x048aefa7
/* 048aef84 */  MOV RAX,-0x1
/* 048aef8b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 048aef91 */  TEST RAX,RAX
/* 048aef94 */  JNZ 0x048aefa7
/* 048aef96 */  MOV RAX,qword ptr [R15]
/* 048aef99 */  MOV RDI,R15
/* 048aef9c */  CALL qword ptr [RAX + 0x10]
/* 048aef9f */  MOV RDI,R15
/* 048aefa2 */  CALL 0x0412c2d0
/* 048aefa7 */  MOV ESI,0x80
/* 048aefac */  MOV RDI,R14
/* 048aefaf */  CALL 0x0412a280
/* 048aefb4 */  MOV R15,qword ptr [RBX + 0x10]
/* 048aefb8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 048aefbf */  LEA RDI,[0xf5463b0]
/* 048aefc6 */  MOV ESI,0x78
/* 048aefcb */  CALL qword ptr [RAX + 0x10]
/* 048aefce */  TEST RAX,RAX
/* 048aefd1 */  JZ 0x048af068
/* 048aefd7 */  XORPS XMM0,XMM0
/* 048aefda */  MOVUPS xmmword ptr [RAX + 0x60],XMM0
/* 048aefde */  MOVUPS xmmword ptr [RAX + 0x50],XMM0
/* 048aefe2 */  MOVUPS xmmword ptr [RAX + 0x40],XMM0
/* 048aefe6 */  MOVUPS xmmword ptr [RAX + 0x30],XMM0
/* 048aefea */  MOVUPS xmmword ptr [RAX + 0x20],XMM0
/* 048aefee */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 048aeff2 */  MOVUPS xmmword ptr [RAX],XMM0
/* 048aeff5 */  MOV qword ptr [RAX + 0x70],0x0
/* 048aeffd */  MOV R14,qword ptr [R15 + 0x78]
/* 048af001 */  MOV qword ptr [R15 + 0x78],RAX
/* 048af005 */  TEST R14,R14
/* 048af008 */  JZ 0x048af023
/* 048af00a */  MOV RDI,R14
/* 048af00d */  CALL 0x048ae940
/* 048af012 */  MOV ESI,0x78
/* 048af017 */  MOV RDI,R14
/* 048af01a */  CALL 0x0412a280
/* 048af01f */  MOV R15,qword ptr [RBX + 0x10]
/* 048af023 */  MOV EAX,dword ptr [RSP + 0xc]
/* 048af027 */  MOV dword ptr [R15 + 0x8],EAX
/* 048af02b */  JMP 0x048af045
/* 048af02d */  MOV RCX,qword ptr [R14 + 0x20]
/* 048af031 */  MOV RAX,RCX
/* 048af034 */  CMP RAX,RCX
/* 048af037 */  JZ 0x048aeea8
/* 048af03d */  MOV RAX,qword ptr [RAX + 0x10]
/* 048af041 */  MOV qword ptr [RBX + 0x10],RAX
/* 048af045 */  ADD RSP,0x18
/* 048af049 */  POP RBX
/* 048af04a */  POP R12
/* 048af04c */  POP R14
/* 048af04e */  POP R15
/* 048af050 */  RET
/* 048af051 */  MOV EDI,0x80
/* 048af056 */  XOR ESI,ESI
/* 048af058 */  MOV R12,RAX
/* 048af05b */  CALL 0x0eec74c0
/* 048af060 */  MOV RAX,R12
/* 048af063 */  JMP 0x048aeec7
/* 048af068 */  MOV EDI,0x78
/* 048af06d */  XOR ESI,ESI
/* 048af06f */  MOV R14,RAX
/* 048af072 */  CALL 0x0eec74c0
/* 048af077 */  MOV RAX,R14
/* 048af07a */  JMP 0x048aefd7
