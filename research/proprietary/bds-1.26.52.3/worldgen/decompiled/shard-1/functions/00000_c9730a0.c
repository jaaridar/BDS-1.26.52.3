/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca730a0 (ELF vaddr 0xc9730a0)
 * Label: WorldGenerator::vslot17
 * Body:  [[0ca730a0, 0ca730fe] [0ca73100, 0ca73113] [0ca73120, 0ca73165] [0ca73170, 0ca732d1]]
 * Ghidra: wg_WorldGenerator__vslot17
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot17(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  char cVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 **ppuStack_88;
  uint uStack_80;
  ulong uStack_7c;
  uint uStack_74;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  uStack_70 = param_2;
  func_0x0d2d30f0(&puStack_48,*(long *)(param_1 + 0x78) + 0x48);
  puStack_58 = puStack_40;
  puVar22 = puStack_48;
  if (puStack_48 != puStack_40) {
    do {
      plVar13 = (long *)puVar22[1];
      for (plVar21 = (long *)*puVar22; plVar21 != plVar13; plVar21 = plVar21 + 2) {
        lVar14 = *plVar21;
        if ((((*(int *)(lVar14 + 0x18) <= (int)param_3[3]) &&
             ((int)*param_3 <= *(int *)(lVar14 + 0x24))) &&
            (*(int *)(lVar14 + 0x20) <= (int)param_3[5])) &&
           ((((int)param_3[2] <= *(int *)(lVar14 + 0x2c) &&
             (*(int *)(lVar14 + 0x1c) <= (int)param_3[4])) &&
            ((int)param_3[1] <= *(int *)(lVar14 + 0x28))))) {
          plVar15 = *(long **)(lVar14 + 0x40);
          for (plVar19 = *(long **)(lVar14 + 0x38); plVar19 != plVar15; plVar19 = plVar19 + 1) {
            if (*plVar19 == 0) {
              cVar17 = func_0x0eeddcf0(&UNK_01458338,&UNK_01388cf1,0x51,&UNK_013d7966,&UNK_013024d7)
              ;
              if (cVar17 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            puVar16 = (uint *)*plVar19;
            uVar1 = param_3[3];
            uVar2 = *puVar16;
            if ((int)uVar2 <= (int)uVar1) {
              uVar3 = *param_3;
              uVar4 = puVar16[3];
              if ((int)uVar3 <= (int)uVar4) {
                uVar5 = param_3[5];
                uVar6 = puVar16[2];
                if ((int)uVar6 <= (int)uVar5) {
                  uVar7 = param_3[2];
                  uVar8 = puVar16[5];
                  if ((int)uVar7 <= (int)uVar8) {
                    uVar9 = param_3[4];
                    uStack_68 = (ulong)uVar9;
                    uVar10 = puVar16[1];
                    uStack_60 = (ulong)uVar10;
                    if ((int)uVar10 <= (int)uVar9) {
                      uVar11 = param_3[1];
                      uVar12 = puVar16[4];
                      if ((int)uVar11 <= (int)uVar12) {
                        if ((int)uVar2 < (int)uVar3) {
                          uVar2 = uVar3;
                        }
                        uVar18 = uStack_60;
                        if ((int)uVar10 < (int)uVar11) {
                          uVar18 = (ulong)uVar11;
                        }
                        uStack_80 = uVar6;
                        if ((int)uVar6 < (int)uVar7) {
                          uStack_80 = uVar7;
                        }
                        if ((int)uVar4 < (int)uVar1) {
                          uVar1 = uVar4;
                        }
                        uVar20 = uStack_68;
                        if ((int)uVar12 < (int)uVar9) {
                          uVar20 = (ulong)uVar12;
                        }
                        uStack_74 = uVar5;
                        if ((int)uVar8 < (int)uVar5) {
                          uStack_74 = uVar8;
                        }
                        uStack_7c = (ulong)uVar1 | uVar20 << 0x20;
                        ppuStack_88 = (undefined8 **)
                                      ((ulong)uVar2 & 0xff |
                                      (ulong)(uVar2 & 0xffffff00) | uVar18 << 0x20);
                        (**(code **)(**(long **)(puVar16 + 6) + 0x50))
                                  (*(long **)(puVar16 + 6),uStack_70,*(undefined8 *)(puVar16 + 10),
                                   puVar16[0xc],(char)puVar16[9],&ppuStack_88);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puStack_58);
  }
  ppuStack_88 = &puStack_48;
  func_0x0ca7b460(&ppuStack_88);
  return;
}



/* ---- assembly ---- */
/* 0ca730a0 */  PUSH RBP
/* 0ca730a1 */  PUSH R15
/* 0ca730a3 */  PUSH R14
/* 0ca730a5 */  PUSH R13
/* 0ca730a7 */  PUSH R12
/* 0ca730a9 */  PUSH RBX
/* 0ca730aa */  SUB RSP,0x68
/* 0ca730ae */  MOV RBX,RDX
/* 0ca730b1 */  MOV qword ptr [RSP + 0x28],RSI
/* 0ca730b6 */  MOV RSI,qword ptr [RDI + 0x78]
/* 0ca730ba */  ADD RSI,0x48
/* 0ca730be */  LEA RDI,[RSP + 0x50]
/* 0ca730c3 */  CALL 0x0d2d30f0
/* 0ca730c8 */  MOV R14,qword ptr [RSP + 0x50]
/* 0ca730cd */  MOV RAX,qword ptr [RSP + 0x58]
/* 0ca730d2 */  MOV qword ptr [RSP + 0x40],RAX
/* 0ca730d7 */  CMP R14,RAX
/* 0ca730da */  JNZ 0x0ca7310b
/* 0ca730dc */  LEA RAX,[RSP + 0x50]
/* 0ca730e1 */  MOV qword ptr [RSP + 0x10],RAX
/* 0ca730e6 */  LEA RDI,[RSP + 0x10]
/* 0ca730eb */  CALL 0x0ca7b460
/* 0ca730f0 */  ADD RSP,0x68
/* 0ca730f4 */  POP RBX
/* 0ca730f5 */  POP R12
/* 0ca730f7 */  POP R13
/* 0ca730f9 */  POP R14
/* 0ca730fb */  POP R15
/* 0ca730fd */  POP RBP
/* 0ca730fe */  RET
/* 0ca73100 */  ADD R14,0x18
/* 0ca73104 */  CMP R14,qword ptr [RSP + 0x40]
/* 0ca73109 */  JZ 0x0ca730dc
/* 0ca7310b */  MOV R12,qword ptr [R14]
/* 0ca7310e */  MOV R13,qword ptr [R14 + 0x8]
/* 0ca73112 */  JMP 0x0ca73124
/* 0ca73120 */  ADD R12,0x10
/* 0ca73124 */  CMP R12,R13
/* 0ca73127 */  JZ 0x0ca73100
/* 0ca73129 */  MOV RAX,qword ptr [R12]
/* 0ca7312d */  MOV ECX,dword ptr [RBX + 0xc]
/* 0ca73130 */  CMP ECX,dword ptr [RAX + 0x18]
/* 0ca73133 */  JL 0x0ca73120
/* 0ca73135 */  MOV ECX,dword ptr [RBX]
/* 0ca73137 */  CMP ECX,dword ptr [RAX + 0x24]
/* 0ca7313a */  JG 0x0ca73120
/* 0ca7313c */  MOV ECX,dword ptr [RBX + 0x14]
/* 0ca7313f */  CMP ECX,dword ptr [RAX + 0x20]
/* 0ca73142 */  JL 0x0ca73120
/* 0ca73144 */  MOV ECX,dword ptr [RBX + 0x8]
/* 0ca73147 */  CMP ECX,dword ptr [RAX + 0x2c]
/* 0ca7314a */  JG 0x0ca73120
/* 0ca7314c */  MOV ECX,dword ptr [RBX + 0x10]
/* 0ca7314f */  CMP ECX,dword ptr [RAX + 0x1c]
/* 0ca73152 */  JL 0x0ca73120
/* 0ca73154 */  MOV ECX,dword ptr [RBX + 0x4]
/* 0ca73157 */  CMP ECX,dword ptr [RAX + 0x28]
/* 0ca7315a */  JG 0x0ca73120
/* 0ca7315c */  MOV RBP,qword ptr [RAX + 0x38]
/* 0ca73160 */  MOV R15,qword ptr [RAX + 0x40]
/* 0ca73164 */  JMP 0x0ca73174
/* 0ca73170 */  ADD RBP,0x8
/* 0ca73174 */  CMP RBP,R15
/* 0ca73177 */  JZ 0x0ca73120
/* 0ca73179 */  CMP qword ptr [RBP],0x0
/* 0ca7317e */  JNZ 0x0ca731c0
/* 0ca73180 */  LEA RDI,[0x1458338]
/* 0ca73187 */  LEA RSI,[0x1388cf1]
/* 0ca7318e */  MOV EDX,0x51
/* 0ca73193 */  LEA RCX,[0x13d7966]
/* 0ca7319a */  LEA R8,[0x13024d7]
/* 0ca731a1 */  XOR EAX,EAX
/* 0ca731a3 */  CALL 0x0eeddcf0
/* 0ca731a8 */  TEST AL,AL
/* 0ca731aa */  JZ 0x0ca731c0
/* 0ca731ac */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0ca731b7 */  NOP word ptr [RAX + RAX*0x1]
/* 0ca731c0 */  MOV RSI,qword ptr [RBP]
/* 0ca731c4 */  MOV EAX,dword ptr [RBX + 0xc]
/* 0ca731c7 */  MOV R9D,dword ptr [RSI]
/* 0ca731ca */  CMP EAX,R9D
/* 0ca731cd */  JL 0x0ca73170
/* 0ca731cf */  MOV EDX,dword ptr [RBX]
/* 0ca731d1 */  MOV ECX,dword ptr [RSI + 0xc]
/* 0ca731d4 */  CMP EDX,ECX
/* 0ca731d6 */  JG 0x0ca73170
/* 0ca731d8 */  MOV R10D,dword ptr [RBX + 0x14]
/* 0ca731dc */  MOV R11D,dword ptr [RSI + 0x8]
/* 0ca731e0 */  CMP R10D,R11D
/* 0ca731e3 */  JL 0x0ca73170
/* 0ca731e5 */  MOV R8D,dword ptr [RBX + 0x8]
/* 0ca731e9 */  MOV EDI,dword ptr [RSI + 0x14]
/* 0ca731ec */  MOV dword ptr [RSP],R8D
/* 0ca731f0 */  CMP R8D,EDI
/* 0ca731f3 */  JG 0x0ca73170
/* 0ca731f9 */  MOV dword ptr [RSP + 0xc],EDI
/* 0ca731fd */  MOV EDI,dword ptr [RBX + 0x10]
/* 0ca73200 */  MOV qword ptr [RSP + 0x30],RDI
/* 0ca73205 */  MOV R8D,dword ptr [RSI + 0x4]
/* 0ca73209 */  MOV qword ptr [RSP + 0x38],R8
/* 0ca7320e */  CMP EDI,R8D
/* 0ca73211 */  JL 0x0ca73170
/* 0ca73217 */  MOV R8D,dword ptr [RBX + 0x4]
/* 0ca7321b */  MOV EDI,dword ptr [RSI + 0x10]
/* 0ca7321e */  MOV dword ptr [RSP + 0x8],EDI
/* 0ca73222 */  MOV dword ptr [RSP + 0x4],R8D
/* 0ca73227 */  CMP R8D,EDI
/* 0ca7322a */  MOV EDI,dword ptr [RSP + 0xc]
/* 0ca7322e */  JG 0x0ca73170
/* 0ca73234 */  CMP EDX,R9D
/* 0ca73237 */  CMOVG R9D,EDX
/* 0ca7323b */  MOV RDX,qword ptr [RSP + 0x38]
/* 0ca73240 */  MOV R8D,dword ptr [RSP + 0x4]
/* 0ca73245 */  CMP R8D,EDX
/* 0ca73248 */  CMOVG EDX,R8D
/* 0ca7324c */  MOV R8D,dword ptr [RSP]
/* 0ca73250 */  CMP R8D,R11D
/* 0ca73253 */  CMOVG R11D,R8D
/* 0ca73257 */  SHL RDX,0x20
/* 0ca7325b */  CMP ECX,EAX
/* 0ca7325d */  CMOVL EAX,ECX
/* 0ca73260 */  MOV ECX,dword ptr [RSP + 0x8]
/* 0ca73264 */  MOV R8,qword ptr [RSP + 0x30]
/* 0ca73269 */  CMP ECX,R8D
/* 0ca7326c */  CMOVL R8D,ECX
/* 0ca73270 */  CMP EDI,R10D
/* 0ca73273 */  CMOVL R10D,EDI
/* 0ca73277 */  SHL R8,0x20
/* 0ca7327b */  OR RAX,R8
/* 0ca7327e */  MOV ECX,R9D
/* 0ca73281 */  AND ECX,0xffffff00
/* 0ca73287 */  OR RCX,RDX
/* 0ca7328a */  MOV RDI,qword ptr [RSI + 0x18]
/* 0ca7328e */  MOV RDX,qword ptr [RSI + 0x28]
/* 0ca73292 */  MOV R8D,dword ptr [RSI + 0x30]
/* 0ca73296 */  MOV dword ptr [RSP],R8D
/* 0ca7329a */  MOVZX R8D,byte ptr [RSI + 0x24]
/* 0ca7329f */  MOVZX ESI,R9B
/* 0ca732a3 */  OR RSI,RCX
/* 0ca732a6 */  MOV qword ptr [RSP + 0x10],RSI
/* 0ca732ab */  MOV dword ptr [RSP + 0x18],R11D
/* 0ca732b0 */  MOV qword ptr [RSP + 0x1c],RAX
/* 0ca732b5 */  MOV dword ptr [RSP + 0x24],R10D
/* 0ca732ba */  MOV RAX,qword ptr [RDI]
/* 0ca732bd */  MOV RSI,qword ptr [RSP + 0x28]
/* 0ca732c2 */  MOV ECX,dword ptr [RSP]
/* 0ca732c5 */  LEA R9,[RSP + 0x10]
/* 0ca732ca */  CALL qword ptr [RAX + 0x50]
/* 0ca732cd */  JMP 0x0ca73170
