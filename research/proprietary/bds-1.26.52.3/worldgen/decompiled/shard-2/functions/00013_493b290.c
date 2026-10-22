/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b290 (ELF vaddr 0x493b290)
 * Label: BiomeSource3d::vslot11
 * Body:  [[04a3b290, 04a3b298] [04a3b2a0, 04a3b4b0]]
 * Ghidra: wg_BiomeSource3d__vslot11
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_BiomeSource3d__vslot11(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_68 [56];
  
  if (((char)param_2[3] == '\x01') && (*(char *)(*(long *)(param_1 + 0xd0) + 0xb8) == '\0')) {
    uStack_a8 = CONCAT44(param_2[2] >> 4,*param_2 >> 4);
    func_0x0525af30(&plStack_98,*(long *)(param_1 + 0xd0),&uStack_a8);
    if (plStack_98 == (long *)0x0) {
      bVar10 = true;
      lVar4 = 0;
      plVar3 = plStack_90;
    }
    else {
      iVar6 = (int)(short)plStack_98[4] >> 0x1f;
      iVar7 = iVar6 - (short)plStack_98[4];
      iVar8 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      uVar5 = ((param_2[1] >> 2) - iVar6) + (iVar8 >> 2);
      if (uVar5 < 0x60) {
        iVar8 = *param_2;
        iVar6 = param_2[2];
        pfVar9 = (float *)(((long)(iVar6 >> 2) - (long)*(int *)((long)plStack_98 + 0x1c)) * 0x198 +
                          ((long)(iVar8 >> 2) - (long)(int)plStack_98[3]) * 0x660 + *plStack_98);
        if (*(short *)((long)pfVar9 + (ulong)uVar5 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = *(long *)(param_1 + 8);
        lVar4 = func_0x0c8ccb70(*(undefined8 *)(param_1 + 0xd8));
        if (lVar4 == 0) goto LAB_04a3b3f0;
        fVar11 = (float)func_0x0d3414e0((float)(iVar8 >> 2) * _DAT_011987c4,0,
                                        (float)(iVar6 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar11 = (fVar11 * _DAT_01198494 + *pfVar9) / _DAT_011988e8;
        if (0.0 <= fVar11) {
          fVar12 = _DAT_011983f0;
          if (fVar11 <= _DAT_011983f0) {
            fVar12 = fVar11;
          }
          if (_DAT_011986e0 < fVar12) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar4 = 0;
      }
      bVar10 = lVar4 == 0;
      plVar3 = plStack_90;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (!bVar10) {
      return lVar4;
    }
  }
  func_0x052582f0(&plStack_98,*(long *)(param_1 + 8),*(undefined8 *)param_2,param_2[2]);
  if (*(char *)(param_1 + 200) == '\x01') {
    uStack_a8 = param_1 + 0x28;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      uStack_a8 = 0;
      uStack_a0 = 0x7fffffffffffffff;
      func_0x04a3cfe0(param_1 + 0x28,auStack_68,&uStack_a8);
      if (uStack_a8 == 0) goto LAB_04a3b4a0;
    }
    lVar4 = *(long *)(uStack_a8 + 0x88);
  }
  else {
LAB_04a3b4a0:
    lVar4 = 0;
  }
  return lVar4;
}



/* ---- assembly ---- */
/* 04a3b290 */  ADD RDI,0x8
/* 04a3b294 */  JMP 0x04a3b2a0
/* 04a3b2a0 */  PUSH RBP
/* 04a3b2a1 */  PUSH R15
/* 04a3b2a3 */  PUSH R14
/* 04a3b2a5 */  PUSH R13
/* 04a3b2a7 */  PUSH R12
/* 04a3b2a9 */  PUSH RBX
/* 04a3b2aa */  SUB RSP,0x78
/* 04a3b2ae */  MOV R14,RSI
/* 04a3b2b1 */  MOV RBX,RDI
/* 04a3b2b4 */  CMP byte ptr [RSI + 0xc],0x1
/* 04a3b2b8 */  JNZ 0x04a3b440
/* 04a3b2be */  MOV RSI,qword ptr [RBX + 0xc8]
/* 04a3b2c5 */  CMP byte ptr [RSI + 0xb8],0x0
/* 04a3b2cc */  JNZ 0x04a3b440
/* 04a3b2d2 */  MOV EAX,dword ptr [R14]
/* 04a3b2d5 */  SAR EAX,0x4
/* 04a3b2d8 */  MOV dword ptr [RSP],EAX
/* 04a3b2db */  MOV EAX,dword ptr [R14 + 0x8]
/* 04a3b2df */  SAR EAX,0x4
/* 04a3b2e2 */  MOV dword ptr [RSP + 0x4],EAX
/* 04a3b2e6 */  LEA RDI,[RSP + 0x10]
/* 04a3b2eb */  MOV RDX,RSP
/* 04a3b2ee */  CALL 0x0525af30
/* 04a3b2f3 */  MOV RAX,qword ptr [RSP + 0x10]
/* 04a3b2f8 */  TEST RAX,RAX
/* 04a3b2fb */  JZ 0x04a3b405
/* 04a3b301 */  MOV EDX,dword ptr [R14 + 0x4]
/* 04a3b305 */  SAR EDX,0x2
/* 04a3b308 */  MOVSX ECX,word ptr [RAX + 0x20]
/* 04a3b30c */  MOV ESI,ECX
/* 04a3b30e */  SAR ESI,0x1f
/* 04a3b311 */  SUB ESI,ECX
/* 04a3b313 */  SHR ECX,0x1f
/* 04a3b316 */  LEA EDI,[RSI + 0x3]
/* 04a3b319 */  TEST ESI,ESI
/* 04a3b31b */  CMOVNS EDI,ESI
/* 04a3b31e */  SAR EDI,0x2
/* 04a3b321 */  ADD ECX,EDX
/* 04a3b323 */  ADD ECX,EDI
/* 04a3b325 */  CMP ECX,0x5f
/* 04a3b328 */  JA 0x04a3b3f0
/* 04a3b32e */  MOV R13D,dword ptr [R14]
/* 04a3b331 */  SAR R13D,0x2
/* 04a3b335 */  MOV EBP,dword ptr [R14 + 0x8]
/* 04a3b339 */  SAR EBP,0x2
/* 04a3b33c */  MOVSXD RDX,dword ptr [RAX + 0x18]
/* 04a3b340 */  MOVSXD RSI,R13D
/* 04a3b343 */  SUB RSI,RDX
/* 04a3b346 */  MOVSXD RDX,dword ptr [RAX + 0x1c]
/* 04a3b34a */  MOVSXD RDI,EBP
/* 04a3b34d */  SUB RDI,RDX
/* 04a3b350 */  IMUL RDX,RSI,0x660
/* 04a3b357 */  ADD RDX,qword ptr [RAX]
/* 04a3b35a */  IMUL R12,RDI,0x198
/* 04a3b361 */  ADD R12,RDX
/* 04a3b364 */  MOV EAX,ECX
/* 04a3b366 */  MOVZX ESI,word ptr [R12 + RAX*0x2 + 0xac]
/* 04a3b36f */  CMP SI,-0x1
/* 04a3b373 */  JZ 0x04a3b3f0
/* 04a3b375 */  MOV RDI,qword ptr [RBX + 0xd0]
/* 04a3b37c */  MOV R15D,0x118
/* 04a3b382 */  ADD R15,qword ptr [RBX]
/* 04a3b385 */  CALL 0x0c8ccb70
/* 04a3b38a */  TEST RAX,RAX
/* 04a3b38d */  JZ 0x04a3b3f0
/* 04a3b38f */  CVTSI2SS XMM0,R13D
/* 04a3b394 */  MOVSS XMM1,dword ptr [0x011987c4]
/* 04a3b39c */  MULSS XMM0,XMM1
/* 04a3b3a0 */  CVTSI2SS XMM2,EBP
/* 04a3b3a4 */  MULSS XMM2,XMM1
/* 04a3b3a8 */  XORPS XMM1,XMM1
/* 04a3b3ab */  MOV RDI,R15
/* 04a3b3ae */  MOV R15,RAX
/* 04a3b3b1 */  CALL 0x0d3414e0
/* 04a3b3b6 */  MOV RAX,R15
/* 04a3b3b9 */  MULSS XMM0,dword ptr [0x01198494]
/* 04a3b3c1 */  ADDSS XMM0,dword ptr [R12]
/* 04a3b3c7 */  DIVSS XMM0,dword ptr [0x011988e8]
/* 04a3b3cf */  XORPS XMM1,XMM1
/* 04a3b3d2 */  UCOMISS XMM1,XMM0
/* 04a3b3d5 */  JA 0x04a3b3f2
/* 04a3b3d7 */  MOVSS XMM1,dword ptr [0x011983f0]
/* 04a3b3df */  MINSS XMM1,XMM0
/* 04a3b3e3 */  MOVSS XMM0,dword ptr [0x011986e0]
/* 04a3b3eb */  UCOMISS XMM0,XMM1
/* 04a3b3ee */  JNC 0x04a3b3f2
/* 04a3b3f0 */  XOR EAX,EAX
/* 04a3b3f2 */  TEST RAX,RAX
/* 04a3b3f5 */  SETZ BPL
/* 04a3b3f9 */  MOV R15,qword ptr [RSP + 0x18]
/* 04a3b3fe */  TEST R15,R15
/* 04a3b401 */  JNZ 0x04a3b412
/* 04a3b403 */  JMP 0x04a3b43b
/* 04a3b405 */  MOV BPL,0x1
/* 04a3b408 */  MOV R15,qword ptr [RSP + 0x18]
/* 04a3b40d */  TEST R15,R15
/* 04a3b410 */  JZ 0x04a3b43b
/* 04a3b412 */  MOV RCX,-0x1
/* 04a3b419 */  XADD.LOCK qword ptr [R15 + 0x8],RCX
/* 04a3b41f */  TEST RCX,RCX
/* 04a3b422 */  JNZ 0x04a3b43b
/* 04a3b424 */  MOV RCX,qword ptr [R15]
/* 04a3b427 */  MOV RDI,R15
/* 04a3b42a */  MOV R12,RAX
/* 04a3b42d */  CALL qword ptr [RCX + 0x10]
/* 04a3b430 */  MOV RDI,R15
/* 04a3b433 */  CALL 0x0412c2d0
/* 04a3b438 */  MOV RAX,R12
/* 04a3b43b */  TEST BPL,BPL
/* 04a3b43e */  JZ 0x04a3b4a2
/* 04a3b440 */  MOV RSI,qword ptr [RBX]
/* 04a3b443 */  MOV RDX,qword ptr [R14]
/* 04a3b446 */  MOV ECX,dword ptr [R14 + 0x8]
/* 04a3b44a */  LEA RDI,[RSP + 0x10]
/* 04a3b44f */  CALL 0x052582f0
/* 04a3b454 */  CMP byte ptr [RBX + 0xc0],0x1
/* 04a3b45b */  JNZ 0x04a3b4a0
/* 04a3b45d */  LEA RDI,[RBX + 0x20]
/* 04a3b461 */  CMP byte ptr [RBX + 0xb0],0x0
/* 04a3b468 */  JNZ 0x04a3b497
/* 04a3b46a */  LEA RSI,[RSP + 0x40]
/* 04a3b46f */  MOV qword ptr [RSP],0x0
/* 04a3b477 */  MOV RAX,0x7fffffffffffffff
/* 04a3b481 */  MOV qword ptr [RSP + 0x8],RAX
/* 04a3b486 */  MOV RDX,RSP
/* 04a3b489 */  CALL 0x04a3cfe0
/* 04a3b48e */  MOV RDI,qword ptr [RSP]
/* 04a3b492 */  TEST RDI,RDI
/* 04a3b495 */  JZ 0x04a3b4a0
/* 04a3b497 */  MOV RAX,qword ptr [RDI + 0x88]
/* 04a3b49e */  JMP 0x04a3b4a2
/* 04a3b4a0 */  XOR EAX,EAX
/* 04a3b4a2 */  ADD RSP,0x78
/* 04a3b4a6 */  POP RBX
/* 04a3b4a7 */  POP R12
/* 04a3b4a9 */  POP R13
/* 04a3b4ab */  POP R14
/* 04a3b4ad */  POP R15
/* 04a3b4af */  POP RBP
/* 04a3b4b0 */  RET
