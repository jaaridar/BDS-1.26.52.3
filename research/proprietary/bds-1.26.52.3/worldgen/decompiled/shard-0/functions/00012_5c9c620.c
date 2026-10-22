/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d9c620 (ELF vaddr 0x5c9c620)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[05d9c620, 05d9c6ee] [05d9c6f0, 05d9c73d] [05d9c740, 05d9ca53]]
 * Ghidra: FUN_05d9c620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_05d9c620(long *param_1,uint *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong in_RAX;
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_RDX_01;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uStack_38;
  
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  uVar8 = param_1[1];
  uStack_38 = in_RAX;
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uStack_38 = (ulong)(uVar1 & (int)uVar8 - 1U);
    }
    else {
      uStack_38 = uVar7;
      if (uVar8 <= uVar7) {
        uStack_38 = uVar7 % (uVar8 & 0xffffffff);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + uStack_38 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (puVar11 = (ulong *)*puVar2, puVar11 != (ulong *)0x0)) {
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (puVar11[1] == uVar7) {
            if ((uint)puVar11[2] == uVar1) goto LAB_05d9c70f;
          }
          else if ((puVar11[1] & uVar8 - 1) != uStack_38) break;
          puVar11 = (ulong *)*puVar11;
        } while (puVar11 != (ulong *)0x0);
      }
      else {
        do {
          uVar5 = puVar11[1];
          if (uVar5 == uVar7) {
            if ((uint)puVar11[2] == uVar1) goto LAB_05d9c70f;
          }
          else {
            if (uVar8 <= uVar5) {
              if ((uVar5 | uVar8) >> 0x20 == 0) {
                uVar5 = (uVar5 & 0xffffffff) % (uVar8 & 0xffffffff);
              }
              else {
                uVar5 = uVar5 % uVar8;
              }
            }
            if (uVar5 != uStack_38) break;
          }
          puVar11 = (ulong *)*puVar11;
        } while (puVar11 != (ulong *)0x0);
      }
    }
  }
  auVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  uVar5 = auVar15._8_8_;
  puVar11 = auVar15._0_8_;
  if (puVar11 == (ulong *)0x0) {
    func_0x0eec74c0(0x18,0);
    uVar5 = extraout_RDX_01;
  }
  *puVar11 = 0;
  puVar11[1] = uVar7;
  *(undefined4 *)(puVar11 + 2) = *param_3;
  *(undefined1 *)((long)puVar11 + 0x14) = *param_4;
  if ((long)uVar8 < 0) {
    fVar14 = (float)uVar8;
    fVar13 = *(float *)(param_1 + 4);
    if (uVar8 != 0) goto LAB_05d9c7f5;
LAB_05d9c807:
    uVar5 = 1;
    if (2 < uVar8) {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 * 2;
    fVar13 = (float)ceilf((float)(param_1[3] + 1) / fVar13);
    uVar9 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    uVar10 = 2;
    if ((uVar9 == 1) || (uVar10 = uVar9, (uVar9 & uVar9 - 1) == 0)) {
      auVar15._8_8_ = extraout_RDX;
      auVar15._0_8_ = uVar10;
      bVar12 = uVar10 < uVar8;
      if (uVar10 <= uVar8) goto LAB_05d9c899;
LAB_05d9c878:
      func_0x05d9ca70(param_1,uVar10);
      uVar5 = extraout_RDX_00;
    }
    else {
      auVar15 = func_0x0412c3f0();
      uVar10 = auVar15._0_8_;
      uVar8 = param_1[1];
      bVar12 = uVar10 < uVar8;
      if (uVar8 < uVar10) goto LAB_05d9c878;
LAB_05d9c899:
      uVar5 = auVar15._8_8_;
      if (bVar12) {
        fVar13 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar5 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
        if (uVar8 < 3) {
LAB_05d9c977:
          auVar16 = func_0x0412c3f0(uVar5);
        }
        else {
          uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
          uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
          uVar9 = (uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f;
          auVar16._8_8_ = uVar9;
          auVar16._0_8_ = uVar5;
          if (1 < (byte)(uVar9 * 0x101010101010101 >> 0x38)) goto LAB_05d9c977;
          if (1 < uVar5) {
            lVar3 = 0x3f;
            if (uVar5 - 1 != 0) {
              for (; uVar5 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            auVar16._0_8_ = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
          }
        }
        uVar5 = auVar16._8_8_;
        uVar10 = auVar15._0_8_;
        if (auVar15._0_8_ <= auVar16._0_8_) {
          uVar10 = auVar16._0_8_;
        }
        if (uVar10 < uVar8) goto LAB_05d9c878;
      }
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uStack_38 = (ulong)(uVar1 & (int)uVar8 - 1U);
    }
    else {
      uStack_38 = uVar7;
      if ((uVar8 <= uVar7) && (uVar8 <= uVar7)) {
        uVar5 = uVar7 % (uVar8 & 0xffffffff);
        uStack_38 = uVar5;
      }
    }
  }
  else {
    fVar14 = (float)(long)uVar8;
    fVar13 = *(float *)(param_1 + 4);
    if (uVar8 == 0) goto LAB_05d9c807;
LAB_05d9c7f5:
    if (fVar14 * fVar13 < (float)(param_1[3] + 1)) goto LAB_05d9c807;
  }
  lVar3 = *param_1;
  puVar4 = *(ulong **)(lVar3 + uStack_38 * 8);
  if (puVar4 == (ulong *)0x0) {
    uVar5 = param_1[2];
    *puVar11 = uVar5;
    param_1[2] = (long)puVar11;
    *(long **)(lVar3 + uStack_38 * 8) = param_1 + 2;
    if (*puVar11 != 0) {
      uVar7 = *(ulong *)(*puVar11 + 8);
      uVar5 = uVar8 - 1;
      if ((uVar8 & uVar5) == 0) {
        *(ulong **)(lVar3 + (uVar7 & uVar5) * 8) = puVar11;
      }
      else {
        if (uVar8 <= uVar7) {
          if ((uVar7 | uVar8) >> 0x20 == 0) {
            uVar5 = (uVar7 & 0xffffffff) % (uVar8 & 0xffffffff);
            *(ulong **)(lVar3 + uVar5 * 8) = puVar11;
            goto LAB_05d9c9cf;
          }
          uVar7 = uVar7 % uVar8;
          uVar5 = uVar7;
        }
        *(ulong **)(lVar3 + uVar7 * 8) = puVar11;
      }
    }
  }
  else {
    *puVar11 = *puVar4;
    *puVar4 = (ulong)puVar11;
  }
LAB_05d9c9cf:
  param_1[3] = param_1[3] + 1;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_05d9c9d5:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = puVar11;
  return auVar17;
LAB_05d9c70f:
  uVar6 = 0;
  goto LAB_05d9c9d5;
}



/* ---- assembly ---- */
/* 05d9c620 */  PUSH RBP
/* 05d9c621 */  PUSH R15
/* 05d9c623 */  PUSH R14
/* 05d9c625 */  PUSH R13
/* 05d9c627 */  PUSH R12
/* 05d9c629 */  PUSH RBX
/* 05d9c62a */  PUSH RAX
/* 05d9c62b */  MOV RBX,RDX
/* 05d9c62e */  MOV R14D,dword ptr [RSI]
/* 05d9c631 */  MOV RBP,qword ptr [RDI + 0x8]
/* 05d9c635 */  TEST RBP,RBP
/* 05d9c638 */  JZ 0x05d9c6ab
/* 05d9c63a */  MOV RAX,RBP
/* 05d9c63d */  SHR RAX,0x1
/* 05d9c640 */  MOV RDX,0x5555555555555555
/* 05d9c64a */  AND RDX,RAX
/* 05d9c64d */  MOV RAX,RBP
/* 05d9c650 */  SUB RAX,RDX
/* 05d9c653 */  MOV RSI,0x3333333333333333
/* 05d9c65d */  MOV RDX,RAX
/* 05d9c660 */  AND RDX,RSI
/* 05d9c663 */  SHR RAX,0x2
/* 05d9c667 */  AND RAX,RSI
/* 05d9c66a */  ADD RAX,RDX
/* 05d9c66d */  MOV RDX,RAX
/* 05d9c670 */  SHR RDX,0x4
/* 05d9c674 */  ADD RDX,RAX
/* 05d9c677 */  MOV RAX,0xf0f0f0f0f0f0f0f
/* 05d9c681 */  AND RAX,RDX
/* 05d9c684 */  MOV RSI,0x101010101010101
/* 05d9c68e */  IMUL RSI,RAX
/* 05d9c692 */  SHR RSI,0x38
/* 05d9c696 */  CMP RSI,0x1
/* 05d9c69a */  JA 0x05d9c6b6
/* 05d9c69c */  MOV EAX,0xffffffff
/* 05d9c6a1 */  ADD EAX,EBP
/* 05d9c6a3 */  MOV R9D,R14D
/* 05d9c6a6 */  AND R9D,EAX
/* 05d9c6a9 */  JMP 0x05d9c6c8
/* 05d9c6ab */  MOV R13,RDI
/* 05d9c6ae */  MOV R12,RCX
/* 05d9c6b1 */  JMP 0x05d9c761
/* 05d9c6b6 */  MOV R9,R14
/* 05d9c6b9 */  CMP RBP,R14
/* 05d9c6bc */  JA 0x05d9c6c8
/* 05d9c6be */  MOV EAX,R14D
/* 05d9c6c1 */  XOR EDX,EDX
/* 05d9c6c3 */  DIV EBP
/* 05d9c6c5 */  MOV R9D,EDX
/* 05d9c6c8 */  MOV RAX,qword ptr [RDI]
/* 05d9c6cb */  MOV RAX,qword ptr [RAX + R9*0x8]
/* 05d9c6cf */  TEST RAX,RAX
/* 05d9c6d2 */  MOV qword ptr [RSP],R9
/* 05d9c6d6 */  JZ 0x05d9c75b
/* 05d9c6dc */  MOV R15,qword ptr [RAX]
/* 05d9c6df */  TEST R15,R15
/* 05d9c6e2 */  JZ 0x05d9c75b
/* 05d9c6e4 */  CMP ESI,0x2
/* 05d9c6e7 */  JNC 0x05d9c72d
/* 05d9c6e9 */  LEA RAX,[RBP + -0x1]
/* 05d9c6ed */  JMP 0x05d9c700
/* 05d9c6f0 */  AND RDX,RAX
/* 05d9c6f3 */  CMP RDX,R9
/* 05d9c6f6 */  JNZ 0x05d9c75b
/* 05d9c6f8 */  MOV R15,qword ptr [R15]
/* 05d9c6fb */  TEST R15,R15
/* 05d9c6fe */  JZ 0x05d9c75b
/* 05d9c700 */  MOV RDX,qword ptr [R15 + 0x8]
/* 05d9c704 */  CMP RDX,R14
/* 05d9c707 */  JNZ 0x05d9c6f0
/* 05d9c709 */  CMP dword ptr [R15 + 0x10],R14D
/* 05d9c70d */  JNZ 0x05d9c6f8
/* 05d9c70f */  XOR EDX,EDX
/* 05d9c711 */  JMP 0x05d9c9d5
/* 05d9c716 */  XOR EDX,EDX
/* 05d9c718 */  DIV EBP
/* 05d9c71a */  MOV EAX,EDX
/* 05d9c71c */  NOP dword ptr [RAX]
/* 05d9c720 */  CMP RAX,R9
/* 05d9c723 */  JNZ 0x05d9c75b
/* 05d9c725 */  MOV R15,qword ptr [R15]
/* 05d9c728 */  TEST R15,R15
/* 05d9c72b */  JZ 0x05d9c75b
/* 05d9c72d */  MOV RAX,qword ptr [R15 + 0x8]
/* 05d9c731 */  CMP RAX,R14
/* 05d9c734 */  JNZ 0x05d9c740
/* 05d9c736 */  CMP dword ptr [R15 + 0x10],R14D
/* 05d9c73a */  JNZ 0x05d9c725
/* 05d9c73c */  JMP 0x05d9c70f
/* 05d9c740 */  CMP RAX,RBP
/* 05d9c743 */  JC 0x05d9c720
/* 05d9c745 */  MOV RDX,RAX
/* 05d9c748 */  OR RDX,RBP
/* 05d9c74b */  SHR RDX,0x20
/* 05d9c74f */  JZ 0x05d9c716
/* 05d9c751 */  XOR EDX,EDX
/* 05d9c753 */  DIV RBP
/* 05d9c756 */  MOV RAX,RDX
/* 05d9c759 */  JMP 0x05d9c720
/* 05d9c75b */  MOV R13,RDI
/* 05d9c75e */  MOV R12,RCX
/* 05d9c761 */  MOV RAX,qword ptr [0x0f5463b0]
/* 05d9c768 */  LEA RDI,[0xf5463b0]
/* 05d9c76f */  MOV ESI,0x18
/* 05d9c774 */  CALL qword ptr [RAX + 0x10]
/* 05d9c777 */  MOV R15,RAX
/* 05d9c77a */  TEST RAX,RAX
/* 05d9c77d */  JZ 0x05d9ca43
/* 05d9c783 */  MOV qword ptr [R15],0x0
/* 05d9c78a */  MOV qword ptr [R15 + 0x8],R14
/* 05d9c78e */  MOV EAX,dword ptr [RBX]
/* 05d9c790 */  MOV dword ptr [R15 + 0x10],EAX
/* 05d9c794 */  MOVZX EAX,byte ptr [R12]
/* 05d9c799 */  MOV byte ptr [R15 + 0x14],AL
/* 05d9c79d */  MOV RAX,qword ptr [R13 + 0x18]
/* 05d9c7a1 */  INC RAX
/* 05d9c7a4 */  JS 0x05d9c7ad
/* 05d9c7a6 */  CVTSI2SS XMM0,RAX
/* 05d9c7ab */  JMP 0x05d9c7c2
/* 05d9c7ad */  MOV RCX,RAX
/* 05d9c7b0 */  SHR RCX,0x1
/* 05d9c7b3 */  AND EAX,0x1
/* 05d9c7b6 */  OR RAX,RCX
/* 05d9c7b9 */  CVTSI2SS XMM0,RAX
/* 05d9c7be */  ADDSS XMM0,XMM0
/* 05d9c7c2 */  MOV RCX,RBP
/* 05d9c7c5 */  SHR RCX,0x1
/* 05d9c7c8 */  MOV EAX,EBP
/* 05d9c7ca */  AND EAX,0x1
/* 05d9c7cd */  OR RAX,RCX
/* 05d9c7d0 */  TEST RBP,RBP
/* 05d9c7d3 */  JS 0x05d9c7e4
/* 05d9c7d5 */  CVTSI2SS XMM2,RBP
/* 05d9c7da */  MOVSS XMM1,dword ptr [R13 + 0x20]
/* 05d9c7e0 */  JNZ 0x05d9c7f5
/* 05d9c7e2 */  JMP 0x05d9c807
/* 05d9c7e4 */  CVTSI2SS XMM2,RAX
/* 05d9c7e9 */  ADDSS XMM2,XMM2
/* 05d9c7ed */  MOVSS XMM1,dword ptr [R13 + 0x20]
/* 05d9c7f3 */  JZ 0x05d9c807
/* 05d9c7f5 */  MULSS XMM2,XMM1
/* 05d9c7f9 */  UCOMISS XMM0,XMM2
/* 05d9c7fc */  JA 0x05d9c807
/* 05d9c7fe */  MOV R14,qword ptr [RSP]
/* 05d9c802 */  JMP 0x05d9c9b9
/* 05d9c807 */  LEA RAX,[RBP*0x2]
/* 05d9c80f */  MOV R12D,0x1
/* 05d9c815 */  CMP RBP,0x3
/* 05d9c819 */  JC 0x05d9c829
/* 05d9c81b */  LEA RCX,[RBP + -0x1]
/* 05d9c81f */  XOR R12D,R12D
/* 05d9c822 */  TEST RBP,RCX
/* 05d9c825 */  SETNZ R12B
/* 05d9c829 */  OR R12,RAX
/* 05d9c82c */  DIVSS XMM0,XMM1
/* 05d9c830 */  CALL 0x0eee3ab0
/* 05d9c835 */  CVTTSS2SI RAX,XMM0
/* 05d9c83a */  MOV RCX,RAX
/* 05d9c83d */  SAR RCX,0x3f
/* 05d9c841 */  SUBSS XMM0,dword ptr [0x01198778]
/* 05d9c849 */  CVTTSS2SI RDI,XMM0
/* 05d9c84e */  AND RDI,RCX
/* 05d9c851 */  OR RDI,RAX
/* 05d9c854 */  CMP R12,RDI
/* 05d9c857 */  CMOVA RDI,R12
/* 05d9c85b */  MOV R12D,0x2
/* 05d9c861 */  CMP RDI,0x1
/* 05d9c865 */  JZ 0x05d9c873
/* 05d9c867 */  LEA RAX,[RDI + -0x1]
/* 05d9c86b */  TEST RDI,RAX
/* 05d9c86e */  JNZ 0x05d9c888
/* 05d9c870 */  MOV R12,RDI
/* 05d9c873 */  CMP R12,RBP
/* 05d9c876 */  JBE 0x05d9c899
/* 05d9c878 */  MOV RDI,R13
/* 05d9c87b */  MOV RSI,R12
/* 05d9c87e */  CALL 0x05d9ca70
/* 05d9c883 */  JMP 0x05d9c98f
/* 05d9c888 */  CALL 0x0412c3f0
/* 05d9c88d */  MOV R12,RAX
/* 05d9c890 */  MOV RBP,qword ptr [R13 + 0x8]
/* 05d9c894 */  CMP R12,RBP
/* 05d9c897 */  JA 0x05d9c878
/* 05d9c899 */  JNC 0x05d9c98f
/* 05d9c89f */  MOV RAX,qword ptr [R13 + 0x18]
/* 05d9c8a3 */  TEST RAX,RAX
/* 05d9c8a6 */  JS 0x05d9c8b2
/* 05d9c8a8 */  XORPS XMM0,XMM0
/* 05d9c8ab */  CVTSI2SS XMM0,RAX
/* 05d9c8b0 */  JMP 0x05d9c8ca
/* 05d9c8b2 */  MOV RCX,RAX
/* 05d9c8b5 */  SHR RCX,0x1
/* 05d9c8b8 */  AND EAX,0x1
/* 05d9c8bb */  OR RAX,RCX
/* 05d9c8be */  XORPS XMM0,XMM0
/* 05d9c8c1 */  CVTSI2SS XMM0,RAX
/* 05d9c8c6 */  ADDSS XMM0,XMM0
/* 05d9c8ca */  DIVSS XMM0,dword ptr [R13 + 0x20]
/* 05d9c8d0 */  CALL 0x0eee3ab0
/* 05d9c8d5 */  CVTTSS2SI RCX,XMM0
/* 05d9c8da */  MOV RDX,RCX
/* 05d9c8dd */  SUBSS XMM0,dword ptr [0x01198778]
/* 05d9c8e5 */  CVTTSS2SI RAX,XMM0
/* 05d9c8ea */  SAR RDX,0x3f
/* 05d9c8ee */  AND RAX,RDX
/* 05d9c8f1 */  OR RAX,RCX
/* 05d9c8f4 */  CMP RBP,0x3
/* 05d9c8f8 */  JC 0x05d9c977
/* 05d9c8fa */  MOV RCX,RBP
/* 05d9c8fd */  SHR RCX,0x1
/* 05d9c900 */  MOV RDX,0x5555555555555555
/* 05d9c90a */  AND RDX,RCX
/* 05d9c90d */  MOV RCX,RBP
/* 05d9c910 */  SUB RCX,RDX
/* 05d9c913 */  MOV RDX,0x3333333333333333
/* 05d9c91d */  MOV RSI,RCX
/* 05d9c920 */  SHR RSI,0x2
/* 05d9c924 */  AND RCX,RDX
/* 05d9c927 */  AND RSI,RDX
/* 05d9c92a */  ADD RSI,RCX
/* 05d9c92d */  MOV RCX,RSI
/* 05d9c930 */  SHR RCX,0x4
/* 05d9c934 */  ADD RCX,RSI
/* 05d9c937 */  MOV RDX,0xf0f0f0f0f0f0f0f
/* 05d9c941 */  AND RDX,RCX
/* 05d9c944 */  MOV RCX,0x101010101010101
/* 05d9c94e */  IMUL RCX,RDX
/* 05d9c952 */  SHR RCX,0x38
/* 05d9c956 */  CMP ECX,0x1
/* 05d9c959 */  JA 0x05d9c977
/* 05d9c95b */  CMP RAX,0x2
/* 05d9c95f */  JC 0x05d9c97f
/* 05d9c961 */  DEC RAX
/* 05d9c964 */  BSR RCX,RAX
/* 05d9c968 */  XOR ECX,0x3f
/* 05d9c96b */  NEG CL
/* 05d9c96d */  MOV EAX,0x1
/* 05d9c972 */  SHL RAX,CL
/* 05d9c975 */  JMP 0x05d9c97f
/* 05d9c977 */  MOV RDI,RAX
/* 05d9c97a */  CALL 0x0412c3f0
/* 05d9c97f */  CMP R12,RAX
/* 05d9c982 */  CMOVBE R12,RAX
/* 05d9c986 */  CMP R12,RBP
/* 05d9c989 */  JC 0x05d9c878
/* 05d9c98f */  MOV RBP,qword ptr [R13 + 0x8]
/* 05d9c993 */  LEA RAX,[RBP + -0x1]
/* 05d9c997 */  TEST RBP,RAX
/* 05d9c99a */  JNZ 0x05d9c9a8
/* 05d9c99c */  MOV EAX,0xffffffff
/* 05d9c9a1 */  ADD EAX,EBP
/* 05d9c9a3 */  AND R14D,EAX
/* 05d9c9a6 */  JMP 0x05d9c9b9
/* 05d9c9a8 */  CMP RBP,R14
/* 05d9c9ab */  JA 0x05d9c9b9
/* 05d9c9ad */  JA 0x05d9c9b9
/* 05d9c9af */  MOV EAX,R14D
/* 05d9c9b2 */  XOR EDX,EDX
/* 05d9c9b4 */  DIV EBP
/* 05d9c9b6 */  MOV R14D,EDX
/* 05d9c9b9 */  MOV RCX,qword ptr [R13]
/* 05d9c9bd */  MOV RAX,qword ptr [RCX + R14*0x8]
/* 05d9c9c1 */  TEST RAX,RAX
/* 05d9c9c4 */  JZ 0x05d9c9e7
/* 05d9c9c6 */  MOV RCX,qword ptr [RAX]
/* 05d9c9c9 */  MOV qword ptr [R15],RCX
/* 05d9c9cc */  MOV qword ptr [RAX],R15
/* 05d9c9cf */  INC qword ptr [R13 + 0x18]
/* 05d9c9d3 */  MOV DL,0x1
/* 05d9c9d5 */  MOV RAX,R15
/* 05d9c9d8 */  ADD RSP,0x8
/* 05d9c9dc */  POP RBX
/* 05d9c9dd */  POP R12
/* 05d9c9df */  POP R13
/* 05d9c9e1 */  POP R14
/* 05d9c9e3 */  POP R15
/* 05d9c9e5 */  POP RBP
/* 05d9c9e6 */  RET
/* 05d9c9e7 */  LEA RAX,[R13 + 0x10]
/* 05d9c9eb */  MOV RDX,qword ptr [R13 + 0x10]
/* 05d9c9ef */  MOV qword ptr [R15],RDX
/* 05d9c9f2 */  MOV qword ptr [R13 + 0x10],R15
/* 05d9c9f6 */  MOV qword ptr [RCX + R14*0x8],RAX
/* 05d9c9fa */  MOV RAX,qword ptr [R15]
/* 05d9c9fd */  TEST RAX,RAX
/* 05d9ca00 */  JZ 0x05d9c9cf
/* 05d9ca02 */  MOV RAX,qword ptr [RAX + 0x8]
/* 05d9ca06 */  LEA RDX,[RBP + -0x1]
/* 05d9ca0a */  TEST RBP,RDX
/* 05d9ca0d */  JNZ 0x05d9ca18
/* 05d9ca0f */  AND RAX,RDX
/* 05d9ca12 */  MOV qword ptr [RCX + RAX*0x8],R15
/* 05d9ca16 */  JMP 0x05d9c9cf
/* 05d9ca18 */  CMP RAX,RBP
/* 05d9ca1b */  JC 0x05d9ca31
/* 05d9ca1d */  MOV RDX,RAX
/* 05d9ca20 */  OR RDX,RBP
/* 05d9ca23 */  SHR RDX,0x20
/* 05d9ca27 */  JZ 0x05d9ca37
/* 05d9ca29 */  XOR EDX,EDX
/* 05d9ca2b */  DIV RBP
/* 05d9ca2e */  MOV RAX,RDX
/* 05d9ca31 */  MOV qword ptr [RCX + RAX*0x8],R15
/* 05d9ca35 */  JMP 0x05d9c9cf
/* 05d9ca37 */  XOR EDX,EDX
/* 05d9ca39 */  DIV EBP
/* 05d9ca3b */  MOV EAX,EDX
/* 05d9ca3d */  MOV qword ptr [RCX + RAX*0x8],R15
/* 05d9ca41 */  JMP 0x05d9c9cf
/* 05d9ca43 */  MOV EDI,0x18
/* 05d9ca48 */  XOR ESI,ESI
/* 05d9ca4a */  CALL 0x0eec74c0
/* 05d9ca4f */  JMP 0x05d9c783
