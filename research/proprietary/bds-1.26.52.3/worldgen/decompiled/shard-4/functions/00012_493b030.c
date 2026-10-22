/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3b030 (ELF vaddr 0x493b030)
 * Label: BiomeSource3d::vslot7
 * Body:  [[04a3b030, 04a3b0d3] [04a3b0e0, 04a3b0f4] [04a3b100, 04a3b16b] [04a3b170, 04a3b298] [04a3b2a0, 04a3b4b0]]
 * Ghidra: wg_BiomeSource3d__vslot7
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_BiomeSource3d__vslot7
               (long *param_1,int param_2,short param_3,int param_4,int param_5,undefined8 param_6,
               long param_7,ulong param_8)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 auStack_d0 [56];
  int *piStack_98;
  long *plStack_90;
  int *piStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  ulong uStack_40;
  long lStack_38;
  ulong uVar18;
  
  iStack_5c = param_5 + param_2;
  uVar21 = (ulong)(uint)(param_2 - param_5);
  if (param_2 - param_5 <= iStack_5c) {
    sVar14 = (short)param_5 + param_3;
    if (*(short *)((long)param_1 + 0xe2) < sVar14) {
      sVar14 = *(short *)((long)param_1 + 0xe2);
    }
    param_3 = param_3 - (short)param_5;
    sVar11 = (short)(int)param_1[0x1c];
    if (param_3 < sVar11) {
      param_3 = sVar11;
    }
    if (param_3 <= sVar14) {
      uStack_60 = param_4 - param_5;
      piVar4 = (int *)(ulong)uStack_60;
      uVar17 = param_5 + param_4;
      uVar18 = (ulong)uVar17;
      uStack_58 = (uint)param_3;
      iStack_54 = (int)sVar14;
      if (param_7 == 0) {
        uVar20 = uStack_58;
        do {
          do {
            uStack_44 = 1;
            uStack_70 = 0x4a3b1df;
            iStack_50 = (int)uVar21;
            uStack_4c = uVar20;
            iStack_48 = (int)piVar4;
            lVar5 = (**(code **)(*param_1 + 0x58))(param_1,&iStack_50);
            if (lVar5 != 0) {
              return 0;
            }
            uVar20 = uVar20 + 4;
          } while (((int)uVar20 <= iStack_54) ||
                  (uVar9 = (int)piVar4 + 4, piVar4 = (int *)(ulong)uVar9, uVar20 = uStack_58,
                  (int)uVar9 <= (int)uVar17));
          uVar9 = (int)uVar21 + 4;
          uVar21 = (ulong)uVar9;
          piVar4 = (int *)(ulong)uStack_60;
        } while ((int)uVar9 <= iStack_5c);
      }
      else {
        uStack_40 = uVar18;
        if (param_8 == 0) {
          piVar7 = &iStack_50;
          uVar20 = uStack_58;
          piVar8 = piVar4;
          do {
            do {
              uVar10 = (ulong)uVar20;
              uStack_44 = 1;
              uStack_70 = 0x4a3b25f;
              piVar4 = piVar7;
              plVar16 = param_1;
              iStack_50 = (int)uVar21;
              uStack_4c = uVar20;
              iStack_48 = (int)piVar8;
              lVar5 = (**(code **)(*param_1 + 0x58))();
              param_8 = uVar18;
              if (lVar5 != 0) goto LAB_04a3b28b;
              uVar20 = uVar20 + 4;
            } while (((int)uVar20 <= iStack_54) ||
                    (uVar9 = (int)piVar8 + 4, uVar20 = uStack_58, piVar8 = (int *)(ulong)uVar9,
                    (int)uVar9 <= (int)uVar17));
            uVar9 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar9;
            piVar8 = (int *)(ulong)uStack_60;
          } while ((int)uVar9 <= iStack_5c);
        }
        else {
          lStack_38 = param_8 + param_7 * 2;
          piVar8 = (int *)(param_7 * 2);
          uVar17 = uStack_58;
          piVar7 = piVar4;
          do {
            do {
              do {
                uVar10 = (ulong)uVar17;
                uStack_44 = 1;
                piVar4 = &iStack_50;
                uStack_70 = 0x4a3b134;
                plVar16 = param_1;
                iStack_50 = (int)uVar21;
                uStack_4c = uVar17;
                iStack_48 = (int)piVar7;
                lVar5 = (**(code **)(*param_1 + 0x58))();
                if (lVar5 != 0) {
                  piVar6 = (int *)0x0;
                  do {
                    if (*(short *)(param_8 + (long)piVar6) == *(short *)(lVar5 + 0x168))
                    goto joined_r0x04a3b176;
                    piVar6 = (int *)((long)piVar6 + 2);
                  } while (piVar8 != piVar6);
                  piVar6 = (int *)(lStack_38 - param_8);
joined_r0x04a3b176:
                  if ((piVar6 != (int *)0x0) &&
                     (((long)piVar6 < 1 || ((long)piVar8 < (long)piVar6)))) goto LAB_04a3b28b;
                  if (piVar6 == piVar8) {
                    return 0;
                  }
                }
                uVar17 = uVar17 + 4;
              } while ((int)uVar17 <= iStack_54);
              uVar20 = (int)piVar7 + 4;
              bVar22 = (int)uVar20 <= (int)uStack_40;
              uVar17 = uStack_58;
              piVar7 = (int *)(ulong)uVar20;
            } while (bVar22);
            uVar20 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar20;
            piVar7 = (int *)(ulong)uStack_60;
          } while ((int)uVar20 <= iStack_5c);
        }
      }
    }
  }
  return 1;
LAB_04a3b28b:
  uStack_70 = 0x4a3b290;
  func_0x04890760();
  piStack_98 = piVar8;
  plStack_90 = param_1;
  piStack_88 = piVar7;
  uStack_80 = param_8;
  uStack_78 = uVar21;
  uStack_70 = uVar10;
  if (((char)piVar4[3] == '\x01') && (*(char *)(plVar16[0x1a] + 0xb8) == '\0')) {
    uStack_110 = (long *)CONCAT44(piVar4[2] >> 4,*piVar4 >> 4);
    func_0x0525af30(&plStack_100,plVar16[0x1a],&uStack_110);
    if (plStack_100 == (long *)0x0) {
      bVar22 = true;
      lVar5 = 0;
      plVar3 = plStack_f8;
    }
    else {
      iVar12 = (int)(short)plStack_100[4] >> 0x1f;
      iVar13 = iVar12 - (short)plStack_100[4];
      iVar15 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar15 = iVar13;
      }
      uVar17 = ((piVar4[1] >> 2) - iVar12) + (iVar15 >> 2);
      if (uVar17 < 0x60) {
        iVar15 = *piVar4;
        iVar12 = piVar4[2];
        pfVar19 = (float *)(((long)(iVar12 >> 2) - (long)*(int *)((long)plStack_100 + 0x1c)) * 0x198
                           + ((long)(iVar15 >> 2) - (long)(int)plStack_100[3]) * 0x660 +
                             *plStack_100);
        if (*(short *)((long)pfVar19 + (ulong)uVar17 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = plVar16[1];
        lVar5 = func_0x0c8ccb70(plVar16[0x1b]);
        if (lVar5 == 0) goto LAB_04a3b3f0;
        fVar23 = (float)func_0x0d3414e0((float)(iVar15 >> 2) * _DAT_011987c4,0,
                                        (float)(iVar12 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar23 = (fVar23 * _DAT_01198494 + *pfVar19) / _DAT_011988e8;
        if (0.0 <= fVar23) {
          fVar24 = _DAT_011983f0;
          if (fVar23 <= _DAT_011983f0) {
            fVar24 = fVar23;
          }
          if (_DAT_011986e0 < fVar24) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar5 = 0;
      }
      bVar22 = lVar5 == 0;
      plVar3 = plStack_f8;
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
    if (!bVar22) {
      return lVar5;
    }
  }
  func_0x052582f0(&plStack_100,plVar16[1],*(undefined8 *)piVar4,piVar4[2]);
  if ((char)plVar16[0x19] == '\x01') {
    uStack_110 = plVar16 + 5;
    if ((char)plVar16[0x17] == '\0') {
      uStack_110 = (long *)0x0;
      uStack_108 = 0x7fffffffffffffff;
      func_0x04a3cfe0(plVar16 + 5,auStack_d0,&uStack_110);
      if (uStack_110 == (long *)0x0) goto LAB_04a3b4a0;
    }
    lVar5 = uStack_110[0x11];
  }
  else {
LAB_04a3b4a0:
    lVar5 = 0;
  }
  return lVar5;
}



/* ---- assembly ---- */
/* 04a3b030 */  PUSH RBP
/* 04a3b031 */  PUSH R15
/* 04a3b033 */  PUSH R14
/* 04a3b035 */  PUSH R13
/* 04a3b037 */  PUSH R12
/* 04a3b039 */  PUSH RBX
/* 04a3b03a */  SUB RSP,0x38
/* 04a3b03e */  MOV R15D,ESI
/* 04a3b041 */  LEA R9D,[R8 + R15*0x1]
/* 04a3b045 */  SUB R15D,R8D
/* 04a3b048 */  MOV AL,0x1
/* 04a3b04a */  CMP R15D,R9D
/* 04a3b04d */  JG 0x04a3b20b
/* 04a3b053 */  MOV R12,RDI
/* 04a3b056 */  MOVZX ESI,word ptr [RDI + 0xe2]
/* 04a3b05d */  LEA EDI,[R8 + RDX*0x1]
/* 04a3b061 */  CMP SI,DI
/* 04a3b064 */  CMOVL EDI,ESI
/* 04a3b067 */  MOV ESI,dword ptr [R12 + 0xe0]
/* 04a3b06f */  SUB EDX,R8D
/* 04a3b072 */  CMP SI,DX
/* 04a3b075 */  CMOVG EDX,ESI
/* 04a3b078 */  CMP DX,DI
/* 04a3b07b */  JG 0x04a3b20b
/* 04a3b081 */  LEA RSI,[RSP + 0x70]
/* 04a3b086 */  MOV EAX,ECX
/* 04a3b088 */  SUB EAX,R8D
/* 04a3b08b */  ADD R8D,ECX
/* 04a3b08e */  MOVSX ECX,DX
/* 04a3b091 */  MOV dword ptr [RSP + 0x10],ECX
/* 04a3b095 */  MOVSX ECX,DI
/* 04a3b098 */  MOV dword ptr [RSP + 0x14],ECX
/* 04a3b09c */  MOV RBX,qword ptr [RSI]
/* 04a3b09f */  TEST RBX,RBX
/* 04a3b0a2 */  MOV dword ptr [RSP + 0x8],EAX
/* 04a3b0a6 */  MOV dword ptr [RSP + 0xc],R9D
/* 04a3b0ab */  JZ 0x04a3b1aa
/* 04a3b0b1 */  MOV qword ptr [RSP + 0x28],R8
/* 04a3b0b6 */  MOV R14,qword ptr [RSI + 0x8]
/* 04a3b0ba */  TEST R14,R14
/* 04a3b0bd */  JZ 0x04a3b21a
/* 04a3b0c3 */  LEA RCX,[R14 + RBX*0x2]
/* 04a3b0c7 */  MOV qword ptr [RSP + 0x30],RCX
/* 04a3b0cc */  ADD RBX,RBX
/* 04a3b0cf */  MOV R13D,EAX
/* 04a3b0d2 */  JMP 0x04a3b0ef
/* 04a3b0e0 */  ADD R13D,0x4
/* 04a3b0e4 */  CMP R13D,dword ptr [RSP + 0x28]
/* 04a3b0e9 */  JG 0x04a3b18f
/* 04a3b0ef */  MOV EBP,dword ptr [RSP + 0x10]
/* 04a3b0f3 */  JMP 0x04a3b112
/* 04a3b100 */  CMP RAX,RBX
/* 04a3b103 */  JZ 0x04a3b209
/* 04a3b109 */  ADD EBP,0x4
/* 04a3b10c */  CMP EBP,dword ptr [RSP + 0x14]
/* 04a3b110 */  JG 0x04a3b0e0
/* 04a3b112 */  MOV dword ptr [RSP + 0x18],R15D
/* 04a3b117 */  MOV dword ptr [RSP + 0x1c],EBP
/* 04a3b11b */  MOV dword ptr [RSP + 0x20],R13D
/* 04a3b120 */  MOV byte ptr [RSP + 0x24],0x1
/* 04a3b125 */  MOV RAX,qword ptr [R12]
/* 04a3b129 */  MOV RDI,R12
/* 04a3b12c */  LEA RSI,[RSP + 0x18]
/* 04a3b131 */  CALL qword ptr [RAX + 0x58]
/* 04a3b134 */  TEST RAX,RAX
/* 04a3b137 */  JZ 0x04a3b109
/* 04a3b139 */  MOVZX ECX,word ptr [RAX + 0x168]
/* 04a3b140 */  XOR EAX,EAX
/* 04a3b142 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 04a3b150 */  CMP word ptr [R14 + RAX*0x1],CX
/* 04a3b155 */  JZ 0x04a3b170
/* 04a3b157 */  ADD RAX,0x2
/* 04a3b15b */  CMP RBX,RAX
/* 04a3b15e */  JNZ 0x04a3b150
/* 04a3b160 */  MOV RAX,qword ptr [RSP + 0x30]
/* 04a3b165 */  SUB RAX,R14
/* 04a3b168 */  JNZ 0x04a3b178
/* 04a3b16a */  JMP 0x04a3b100
/* 04a3b170 */  ADD RAX,R14
/* 04a3b173 */  SUB RAX,R14
/* 04a3b176 */  JZ 0x04a3b100
/* 04a3b178 */  TEST RAX,RAX
/* 04a3b17b */  JLE 0x04a3b28b
/* 04a3b181 */  CMP RBX,RAX
/* 04a3b184 */  JGE 0x04a3b100
/* 04a3b18a */  JMP 0x04a3b28b
/* 04a3b18f */  ADD R15D,0x4
/* 04a3b193 */  MOV R9D,dword ptr [RSP + 0xc]
/* 04a3b198 */  CMP R15D,R9D
/* 04a3b19b */  MOV EAX,dword ptr [RSP + 0x8]
/* 04a3b19f */  JLE 0x04a3b0cf
/* 04a3b1a5 */  JMP 0x04a3b287
/* 04a3b1aa */  LEA R13,[RSP + 0x18]
/* 04a3b1af */  MOV EBX,EAX
/* 04a3b1b1 */  MOV R14,R8
/* 04a3b1b4 */  MOV EBP,dword ptr [RSP + 0x10]
/* 04a3b1b8 */  NOP dword ptr [RAX + RAX*0x1]
/* 04a3b1c0 */  MOV dword ptr [RSP + 0x18],R15D
/* 04a3b1c5 */  MOV dword ptr [RSP + 0x1c],EBP
/* 04a3b1c9 */  MOV dword ptr [RSP + 0x20],EBX
/* 04a3b1cd */  MOV byte ptr [RSP + 0x24],0x1
/* 04a3b1d2 */  MOV RAX,qword ptr [R12]
/* 04a3b1d6 */  MOV RDI,R12
/* 04a3b1d9 */  MOV RSI,R13
/* 04a3b1dc */  CALL qword ptr [RAX + 0x58]
/* 04a3b1df */  TEST RAX,RAX
/* 04a3b1e2 */  JNZ 0x04a3b209
/* 04a3b1e4 */  ADD EBP,0x4
/* 04a3b1e7 */  CMP EBP,dword ptr [RSP + 0x14]
/* 04a3b1eb */  JLE 0x04a3b1c0
/* 04a3b1ed */  ADD EBX,0x4
/* 04a3b1f0 */  MOV R8,R14
/* 04a3b1f3 */  CMP EBX,R8D
/* 04a3b1f6 */  JLE 0x04a3b1b1
/* 04a3b1f8 */  ADD R15D,0x4
/* 04a3b1fc */  CMP R15D,dword ptr [RSP + 0xc]
/* 04a3b201 */  MOV EAX,dword ptr [RSP + 0x8]
/* 04a3b205 */  JLE 0x04a3b1af
/* 04a3b207 */  JMP 0x04a3b287
/* 04a3b209 */  XOR EAX,EAX
/* 04a3b20b */  ADD RSP,0x38
/* 04a3b20f */  POP RBX
/* 04a3b210 */  POP R12
/* 04a3b212 */  POP R13
/* 04a3b214 */  POP R14
/* 04a3b216 */  POP R15
/* 04a3b218 */  POP RBP
/* 04a3b219 */  RET
/* 04a3b21a */  LEA R13,[RSP + 0x18]
/* 04a3b21f */  MOV R14,qword ptr [RSP + 0x28]
/* 04a3b224 */  MOV EBX,EAX
/* 04a3b226 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 04a3b230 */  MOV EBP,dword ptr [RSP + 0x10]
/* 04a3b234 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 04a3b240 */  MOV dword ptr [RSP + 0x18],R15D
/* 04a3b245 */  MOV dword ptr [RSP + 0x1c],EBP
/* 04a3b249 */  MOV dword ptr [RSP + 0x20],EBX
/* 04a3b24d */  MOV byte ptr [RSP + 0x24],0x1
/* 04a3b252 */  MOV RAX,qword ptr [R12]
/* 04a3b256 */  MOV RDI,R12
/* 04a3b259 */  MOV RSI,R13
/* 04a3b25c */  CALL qword ptr [RAX + 0x58]
/* 04a3b25f */  TEST RAX,RAX
/* 04a3b262 */  JNZ 0x04a3b28b
/* 04a3b264 */  ADD EBP,0x4
/* 04a3b267 */  CMP EBP,dword ptr [RSP + 0x14]
/* 04a3b26b */  JLE 0x04a3b240
/* 04a3b26d */  ADD EBX,0x4
/* 04a3b270 */  CMP EBX,R14D
/* 04a3b273 */  JLE 0x04a3b230
/* 04a3b275 */  ADD R15D,0x4
/* 04a3b279 */  MOV R9D,dword ptr [RSP + 0xc]
/* 04a3b27e */  CMP R15D,R9D
/* 04a3b281 */  MOV EAX,dword ptr [RSP + 0x8]
/* 04a3b285 */  JLE 0x04a3b224
/* 04a3b287 */  MOV AL,0x1
/* 04a3b289 */  JMP 0x04a3b20b
/* 04a3b28b */  CALL 0x04890760
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
