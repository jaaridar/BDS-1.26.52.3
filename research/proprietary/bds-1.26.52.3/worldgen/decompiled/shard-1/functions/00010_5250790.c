/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350790 (ELF vaddr 0x5250790)
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot3
 * Body:  [[04136a20, 04136a24] [05350790, 05350919] [05350920, 05350a84] [0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3
 */


/* WARNING: Possible PIC construction at 0x05350a6d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05350a72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  byte ****ppppbVar7;
  byte bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_RBX;
  long *plVar12;
  char cVar13;
  undefined8 unaff_R14;
  bool bVar14;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_48;
  char cStack_40;
  byte ***pppbStack_38;
  long *plStack_30;
  long lStack_28;
  long *plStack_20;
  
  cVar13 = *(char *)((long)param_3 + 0x24);
  puVar9 = (undefined8 *)*param_3;
  puVar5 = puVar9;
  if (cVar13 == '\x02') {
    puVar5 = param_3;
  }
  if (puVar5 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0xee37b33) {
    uVar4 = param_3[5];
    lVar6 = param_3[6];
    if (lVar6 == 0) {
      plStack_20 = (long *)0x53507e0;
      (*(code *)param_3[7])(0,param_3,0);
      lVar6 = param_3[6];
      cVar13 = *(char *)((long)param_3 + 0x24);
      puVar9 = (undefined8 *)*param_3;
    }
    if (cVar13 == '\x02') {
      puVar9 = param_3;
    }
    plStack_20 = (long *)0x5350804;
    puVar5 = (undefined8 *)func_0x0488e200(uVar4,lVar6,0xf11c84cd,puVar9);
  }
  bVar14 = (*(byte *)(param_2 + 0x198) & 1) != 0;
  plVar12 = (long *)(param_2 + 0x199);
  if (bVar14) {
    plVar12 = *(long **)(param_2 + 0x1a8);
  }
  uVar10 = (ulong)(*(byte *)(param_2 + 0x198) >> 1);
  if (bVar14) {
    uVar10 = *(ulong *)(param_2 + 0x1a0);
  }
  uVar11 = uVar10;
  if (uVar10 != 0) {
    do {
      if (uVar11 == 0) goto LAB_05350920;
      uVar1 = uVar11 - 1;
      lVar6 = uVar11 - 1;
      uVar11 = uVar1;
    } while (*(char *)((long)plVar12 + lVar6) != ':');
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    if (((uVar1 != 0xffffffffffffffff) && (uVar10 == 9)) &&
       ((char)plVar12[1] == 't' && *plVar12 == 0x66617263656e696d)) {
      plStack_20 = (long *)0x53508a3;
      lVar6 = func_0x0535d650(param_2 + 0x170);
      if (*(char *)((long)puVar5 + 0xc) == '\x01') {
        *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(puVar5 + 1);
        cVar13 = *(char *)((long)puVar5 + 0x14);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x14);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(puVar5 + 2);
        cVar13 = *(char *)((long)puVar5 + 0x1c);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x1c);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(puVar5 + 3);
        cVar13 = *(char *)((long)puVar5 + 0x24);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x24);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(puVar5 + 4);
        cVar13 = *(char *)((long)puVar5 + 0x2c);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x2c);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(puVar5 + 5);
        return;
      }
      return;
    }
  }
LAB_05350920:
  uStack_60 = 0x535093d;
  plStack_20 = unaff_RBX;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_60 = 0x5350954;
  func_0x0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar7 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_48 = 0;
    cStack_40 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_60;
    uStack_60 = 0x5350a72;
    lVar6 = 0xf552e80;
  }
  else {
    bVar8 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar8 = *(byte *)ppppbVar7;
    }
    lStack_48 = 0xf552e80;
    cStack_40 = '\x01';
    pppbStack_38 = (byte ***)ppppbVar7;
    plStack_30 = plVar2;
    lStack_28 = _DAT_0f552f70;
    if (((bVar8 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      puStack_58 = &DAT_01e36650;
      uStack_60 = 0x53509d3;
      func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_012d75ad,plVar12);
    }
    ppppbVar7 = &pppbStack_38;
    pppbStack_38 = (byte ***)0x0;
    plStack_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar12 = plVar2 + 1;
      ppppbVar7 = (byte ****)*plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (ppppbVar7 == (byte ****)0x0) {
        uStack_60 = 0x53509fe;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_60 = 0x5350a06;
        ppppbVar7 = (byte ****)func_0x0412c2d0(plVar2);
      }
      plVar12 = plStack_30;
      lStack_28 = 0;
      if (plStack_30 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        ppppbVar7 = (byte ****)*plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (ppppbVar7 == (byte ****)0x0) {
          uStack_60 = 0x5350a34;
          (**(code **)(*plStack_30 + 0x10))(plStack_30);
          uStack_60 = 0x5350a3c;
          ppppbVar7 = (byte ****)func_0x0412c2d0(plVar12);
        }
      }
    }
    plVar12 = plStack_20;
    lVar6 = lStack_48;
    if (cStack_40 != '\x01') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x10) = plVar12;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar7;
  LOCK();
  plVar12 = (long *)(lVar6 + 0xd0);
  lVar3 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar3 == -0x7fffffffffffffff) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
    func_0x0412d450();
    LOCK();
    *(ulong *)(lVar6 + 0xd0) = *(ulong *)(lVar6 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
    func_0x0412d520(lVar6);
    uVar4 = *(undefined8 *)(lVar6 + 0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
    func_0x0412d680(uVar4);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
    func_0x0412d6b0(uVar4);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar6 + 0x90);
    return;
  }
  return;
}



/* ---- assembly ---- */
/* 04136a20 */  JMP 0x0eee2d80
/* 05350790 */  PUSH R15
/* 05350792 */  PUSH R14
/* 05350794 */  PUSH RBX
/* 05350795 */  CMP dword ptr [RDX + 0x20],0xf11c84cd
/* 0535079c */  MOV RBX,RSI
/* 0535079f */  SETNZ SIL
/* 053507a3 */  MOVZX EDI,byte ptr [RDX + 0x24]
/* 053507a7 */  CMP DIL,0x2
/* 053507ab */  MOV RCX,qword ptr [RDX]
/* 053507ae */  MOV RAX,RCX
/* 053507b1 */  CMOVZ RAX,RDX
/* 053507b5 */  TEST RAX,RAX
/* 053507b8 */  SETZ R8B
/* 053507bc */  OR R8B,SIL
/* 053507bf */  CMP R8B,0x1
/* 053507c3 */  JNZ 0x05350804
/* 053507c5 */  MOV R14,qword ptr [RDX + 0x28]
/* 053507c9 */  MOV RSI,qword ptr [RDX + 0x30]
/* 053507cd */  TEST RSI,RSI
/* 053507d0 */  JNZ 0x053507ef
/* 053507d2 */  XOR EDI,EDI
/* 053507d4 */  MOV RSI,RDX
/* 053507d7 */  MOV R15,RDX
/* 053507da */  XOR EDX,EDX
/* 053507dc */  CALL qword ptr [R15 + 0x38]
/* 053507e0 */  MOV RDX,R15
/* 053507e3 */  MOV RSI,qword ptr [R15 + 0x30]
/* 053507e7 */  MOVZX EDI,byte ptr [R15 + 0x24]
/* 053507ec */  MOV RCX,qword ptr [R15]
/* 053507ef */  CMP DIL,0x2
/* 053507f3 */  CMOVZ RCX,RDX
/* 053507f7 */  MOV RDI,R14
/* 053507fa */  MOV EDX,0xf11c84cd
/* 053507ff */  CALL 0x0488e200
/* 05350804 */  MOVZX EDX,byte ptr [RBX + 0x198]
/* 0535080b */  LEA RDI,[RBX + 0x199]
/* 05350812 */  MOV ECX,EDX
/* 05350814 */  SHR ECX,0x1
/* 05350816 */  TEST DL,0x1
/* 05350819 */  CMOVNZ RDI,qword ptr [RBX + 0x1a8]
/* 05350821 */  CMOVNZ RCX,qword ptr [RBX + 0x1a0]
/* 05350829 */  TEST RCX,RCX
/* 0535082c */  JZ 0x05350880
/* 0535082e */  MOV RDX,RCX
/* 05350831 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 05350840 */  TEST RDX,RDX
/* 05350843 */  JZ 0x05350880
/* 05350845 */  LEA RSI,[RDX + -0x1]
/* 05350849 */  CMP byte ptr [RDI + RDX*0x1 + -0x1],0x3a
/* 0535084e */  MOV RDX,RSI
/* 05350851 */  JNZ 0x05350840
/* 05350853 */  CMP RCX,RSI
/* 05350856 */  CMOVNC RCX,RSI
/* 0535085a */  CMP RSI,-0x1
/* 0535085e */  JZ 0x05350880
/* 05350860 */  CMP RCX,0x9
/* 05350864 */  JNZ 0x05350880
/* 05350866 */  MOV RCX,0x66617263656e696d
/* 05350870 */  XOR RCX,qword ptr [RDI]
/* 05350873 */  MOVZX EDX,byte ptr [RDI + 0x8]
/* 05350877 */  XOR RDX,0x74
/* 0535087b */  OR RDX,RCX
/* 0535087e */  JZ 0x05350891
/* 05350880 */  LEA RSI,[0x1e36650]
/* 05350887 */  POP RBX
/* 05350888 */  POP R14
/* 0535088a */  POP R15
/* 0535088c */  JMP 0x05350920
/* 05350891 */  ADD RBX,0x170
/* 05350898 */  MOV RDI,RBX
/* 0535089b */  MOV RBX,RAX
/* 0535089e */  CALL 0x0535d650
/* 053508a3 */  MOV RCX,RBX
/* 053508a6 */  CMP byte ptr [RBX + 0xc],0x1
/* 053508aa */  JZ 0x053508ca
/* 053508ac */  CMP byte ptr [RCX + 0x14],0x1
/* 053508b0 */  JZ 0x053508da
/* 053508b2 */  CMP byte ptr [RCX + 0x1c],0x1
/* 053508b6 */  JZ 0x053508ea
/* 053508b8 */  CMP byte ptr [RCX + 0x24],0x1
/* 053508bc */  JZ 0x053508fa
/* 053508be */  CMP byte ptr [RCX + 0x2c],0x1
/* 053508c2 */  JZ 0x0535090a
/* 053508c4 */  POP RBX
/* 053508c5 */  POP R14
/* 053508c7 */  POP R15
/* 053508c9 */  RET
/* 053508ca */  MOVSS XMM0,dword ptr [RCX + 0x8]
/* 053508cf */  MOVSS dword ptr [RAX + 0x8],XMM0
/* 053508d4 */  CMP byte ptr [RCX + 0x14],0x1
/* 053508d8 */  JNZ 0x053508b2
/* 053508da */  MOVSS XMM0,dword ptr [RCX + 0x10]
/* 053508df */  MOVSS dword ptr [RAX + 0xc],XMM0
/* 053508e4 */  CMP byte ptr [RCX + 0x1c],0x1
/* 053508e8 */  JNZ 0x053508b8
/* 053508ea */  MOVSS XMM0,dword ptr [RCX + 0x18]
/* 053508ef */  MOVSS dword ptr [RAX + 0x10],XMM0
/* 053508f4 */  CMP byte ptr [RCX + 0x24],0x1
/* 053508f8 */  JNZ 0x053508be
/* 053508fa */  MOVSS XMM0,dword ptr [RCX + 0x20]
/* 053508ff */  MOVSS dword ptr [RAX + 0x14],XMM0
/* 05350904 */  CMP byte ptr [RCX + 0x2c],0x1
/* 05350908 */  JNZ 0x053508c4
/* 0535090a */  MOVSS XMM0,dword ptr [RCX + 0x28]
/* 0535090f */  MOVSS dword ptr [RAX + 0x18],XMM0
/* 05350914 */  POP RBX
/* 05350915 */  POP R14
/* 05350917 */  POP R15
/* 05350919 */  RET
/* 05350920 */  PUSH R15
/* 05350922 */  PUSH R14
/* 05350924 */  PUSH R12
/* 05350926 */  PUSH RBX
/* 05350927 */  SUB RSP,0x38
/* 0535092b */  MOV R15,RSI
/* 0535092e */  MOV RBX,RDI
/* 05350931 */  LEA RDI,[0xf552e80]
/* 05350938 */  CALL 0x0412d550
/* 0535093d */  INC.LOCK qword ptr [0x0f552f50]
/* 05350945 */  LEA R12,[0xf552e80]
/* 0535094c */  MOV RDI,R12
/* 0535094f */  CALL 0x0412d610
/* 05350954 */  MOV RAX,qword ptr [0x0f552f60]
/* 0535095b */  TEST RAX,RAX
/* 0535095e */  JZ 0x05350a58
/* 05350964 */  MOVZX ECX,byte ptr [RAX]
/* 05350967 */  CMP CL,0x1
/* 0535096a */  JNZ 0x05350a58
/* 05350970 */  MOV R14,qword ptr [0x0f552f68]
/* 05350977 */  TEST R14,R14
/* 0535097a */  JZ 0x05350984
/* 0535097c */  INC.LOCK qword ptr [R14 + 0x8]
/* 05350981 */  MOVZX ECX,byte ptr [RAX]
/* 05350984 */  MOV RDI,qword ptr [0x0f552f70]
/* 0535098b */  MOV qword ptr [RSP + 0x10],R12
/* 05350990 */  MOV byte ptr [RSP + 0x18],0x1
/* 05350995 */  MOV qword ptr [RSP + 0x20],RAX
/* 0535099a */  MOV qword ptr [RSP + 0x28],R14
/* 0535099f */  MOV qword ptr [RSP + 0x30],RDI
/* 053509a4 */  TEST CL,0x1
/* 053509a7 */  JZ 0x053509d3
/* 053509a9 */  CMP byte ptr [RDI + 0x18],0x1
/* 053509ad */  JNZ 0x053509d3
/* 053509af */  MOV qword ptr [RSP],R15
/* 053509b3 */  LEA R8,[0x12d75ad]
/* 053509ba */  MOV ESI,0x1
/* 053509bf */  MOV EDX,0x3
/* 053509c4 */  MOV ECX,0x5
/* 053509c9 */  MOV R9,RBX
/* 053509cc */  XOR EAX,EAX
/* 053509ce */  CALL 0x0eeb61d0
/* 053509d3 */  LEA RAX,[RSP + 0x20]
/* 053509d8 */  XORPS XMM0,XMM0
/* 053509db */  MOVUPS xmmword ptr [RAX],XMM0
/* 053509de */  TEST R14,R14
/* 053509e1 */  JZ 0x05350a3c
/* 053509e3 */  MOV RAX,-0x1
/* 053509ea */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 053509f0 */  TEST RAX,RAX
/* 053509f3 */  JNZ 0x05350a06
/* 053509f5 */  MOV RAX,qword ptr [R14]
/* 053509f8 */  MOV RDI,R14
/* 053509fb */  CALL qword ptr [RAX + 0x10]
/* 053509fe */  MOV RDI,R14
/* 05350a01 */  CALL 0x0412c2d0
/* 05350a06 */  MOV RBX,qword ptr [RSP + 0x28]
/* 05350a0b */  MOV qword ptr [RSP + 0x30],0x0
/* 05350a14 */  TEST RBX,RBX
/* 05350a17 */  JZ 0x05350a3c
/* 05350a19 */  MOV RAX,-0x1
/* 05350a20 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 05350a26 */  TEST RAX,RAX
/* 05350a29 */  JNZ 0x05350a3c
/* 05350a2b */  MOV RAX,qword ptr [RBX]
/* 05350a2e */  MOV RDI,RBX
/* 05350a31 */  CALL qword ptr [RAX + 0x10]
/* 05350a34 */  MOV RDI,RBX
/* 05350a37 */  CALL 0x0412c2d0
/* 05350a3c */  CMP byte ptr [RSP + 0x18],0x1
/* 05350a41 */  JNZ 0x05350a79
/* 05350a43 */  MOV RDI,qword ptr [RSP + 0x10]
/* 05350a48 */  ADD RSP,0x38
/* 05350a4c */  POP RBX
/* 05350a4d */  POP R12
/* 05350a4f */  POP R14
/* 05350a51 */  POP R15
/* 05350a53 */  JMP 0x0eee02f0
/* 05350a58 */  MOV qword ptr [RSP + 0x10],0x0
/* 05350a61 */  MOV byte ptr [RSP + 0x18],0x0
/* 05350a66 */  LEA RDI,[0xf552e80]
/* 05350a6d */  CALL 0x0eee02f0
/* 05350a72 */  CMP byte ptr [RSP + 0x18],0x1
/* 05350a77 */  JZ 0x05350a43
/* 05350a79 */  ADD RSP,0x38
/* 05350a7d */  POP RBX
/* 05350a7e */  POP R12
/* 05350a80 */  POP R14
/* 05350a82 */  POP R15
/* 05350a84 */  RET
/* 0eee02f0 */  PUSH R14
/* 0eee02f2 */  PUSH RBX
/* 0eee02f3 */  PUSH RAX
/* 0eee02f4 */  MOV RAX,-0x1
/* 0eee02fb */  XADD.LOCK qword ptr [RDI + 0xd0],RAX
/* 0eee0304 */  MOV RCX,-0x7fffffffffffffff
/* 0eee030e */  CMP RAX,RCX
/* 0eee0311 */  JNZ 0x0eee0362
/* 0eee0313 */  MOV RBX,RDI
/* 0eee0316 */  CALL 0x0412d450
/* 0eee031b */  MOV RAX,0x7fffffffffffffff
/* 0eee0325 */  AND.LOCK qword ptr [RBX + 0xd0],RAX
/* 0eee032d */  MOV RDI,RBX
/* 0eee0330 */  CALL 0x0412d520
/* 0eee0335 */  MOV R14,qword ptr [RBX + 0xc0]
/* 0eee033c */  MOV RDI,R14
/* 0eee033f */  CALL 0x0412d680
/* 0eee0344 */  ADD RBX,0x90
/* 0eee034b */  MOV RDI,R14
/* 0eee034e */  CALL 0x0412d6b0
/* 0eee0353 */  MOV RDI,RBX
/* 0eee0356 */  ADD RSP,0x8
/* 0eee035a */  POP RBX
/* 0eee035b */  POP R14
/* 0eee035d */  JMP 0x04136a20
/* 0eee0362 */  ADD RSP,0x8
/* 0eee0366 */  POP RBX
/* 0eee0367 */  POP R14
/* 0eee0369 */  RET
/* 0eee2d80 */  JMP qword ptr [0x0f546458]
