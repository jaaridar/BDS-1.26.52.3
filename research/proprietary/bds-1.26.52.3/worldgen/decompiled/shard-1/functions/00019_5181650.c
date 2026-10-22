/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5281650 (ELF vaddr 0x5181650)
 * Label: OverworldGeneratorMultinoise::vslot56
 * Body:  [[05281650, 05281783] [05281790, 05281848] [05281860, 052818cc]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot56
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot56
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *apuStack_68 [4];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puStack_98 = auStack_88;
  uStack_90 = 0x400000000;
  uStack_a0 = param_5;
  func_0x0cafcfe0(param_3 + 0x120,&puStack_98);
  puVar4 = puStack_98;
  uVar7 = uStack_90 & 0xffffffff;
  if (puStack_98 == (undefined1 *)0x0 && uVar7 != 0) {
    uVar5 = func_0x04890760();
    uVar5 = func_0x04882e20(uVar5);
    apuStack_68[0] = &UNK_0f460460;
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      func_0x0412a280(lStack_48,lStack_38 - lStack_48);
    }
    if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
    uVar5 = func_0x0eee2d70(uVar5);
    func_0x04882e20(uVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_0x0d2eeb90(apuStack_68,
                  CONCAT44((int)(*(ulong *)(param_3 + 0x50) >> 0x1c) >> 2,
                           (int)*(ulong *)(param_3 + 0x50) << 2) & 0xfffffffcffffffff,param_1 + 0x70
                  ,4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lVar1 = *(long *)(lVar6 + 0xa8);
  lVar6 = *(long *)(lVar6 + 0xb0);
  func_0x0488f040(&lStack_b8,lVar1,lVar6,(lVar6 - lVar1 >> 3) * -0x5555555555555555);
  lVar3 = lStack_b0;
  lVar1 = lStack_b8;
  for (lVar6 = lStack_b8; lStack_b8 = lVar1, lVar6 != lVar3; lVar6 = lVar6 + 0x18) {
    func_0x0c8550b0(param_3,param_4,uStack_a0,uVar7,puVar4,lVar6,apuStack_68);
    lVar1 = lStack_b8;
  }
  lVar6 = lStack_b0;
  if (lVar1 != 0) {
    for (; lVar1 != lVar6; lVar6 = lVar6 + -0x18) {
      if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar6 + -8),*(ulong *)(lVar6 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_b0 = lVar1;
    func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  apuStack_68[0] = &UNK_0f460460;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return;
}



/* ---- assembly ---- */
/* 05281650 */  PUSH RBP
/* 05281651 */  PUSH R15
/* 05281653 */  PUSH R14
/* 05281655 */  PUSH R13
/* 05281657 */  PUSH R12
/* 05281659 */  PUSH RBX
/* 0528165a */  SUB RSP,0x98
/* 05281661 */  MOV qword ptr [RSP + 0x28],R8
/* 05281666 */  MOV R14,RCX
/* 05281669 */  MOV R15,RDX
/* 0528166c */  MOV RBP,RDI
/* 0528166f */  LEA RAX,[RSP + 0x40]
/* 05281674 */  MOV qword ptr [RSP + 0x30],RAX
/* 05281679 */  MOV RAX,0x400000000
/* 05281683 */  MOV qword ptr [RSP + 0x38],RAX
/* 05281688 */  LEA RDI,[RDX + 0x120]
/* 0528168f */  LEA RSI,[RSP + 0x30]
/* 05281694 */  CALL 0x0cafcfe0
/* 05281699 */  MOV R12,qword ptr [RSP + 0x30]
/* 0528169e */  MOV R13D,dword ptr [RSP + 0x38]
/* 052816a3 */  TEST R13,R13
/* 052816a6 */  SETZ AL
/* 052816a9 */  TEST R12,R12
/* 052816ac */  SETNZ CL
/* 052816af */  OR CL,AL
/* 052816b1 */  JZ 0x05281837
/* 052816b7 */  MOV RSI,qword ptr [R15 + 0x50]
/* 052816bb */  MOV RAX,RSI
/* 052816be */  SHR RAX,0x1c
/* 052816c2 */  SHL ESI,0x2
/* 052816c5 */  SAR EAX,0x2
/* 052816c8 */  AND EAX,0xfffffffc
/* 052816cb */  SHL RAX,0x20
/* 052816cf */  OR RSI,RAX
/* 052816d2 */  LEA RDX,[RBP + 0x70]
/* 052816d6 */  LEA RDI,[RSP + 0x60]
/* 052816db */  MOV ECX,0x4
/* 052816e0 */  CALL 0x0d2eeb90
/* 052816e5 */  MOV RAX,qword ptr [RBP + 0x20]
/* 052816e9 */  MOV RAX,qword ptr [RAX + 0x348]
/* 052816f0 */  XORPS XMM0,XMM0
/* 052816f3 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 052816f8 */  MOV qword ptr [RSP + 0x20],0x0
/* 05281701 */  MOV RSI,qword ptr [RAX + 0xa8]
/* 05281708 */  MOV RDX,qword ptr [RAX + 0xb0]
/* 0528170f */  MOV RAX,RDX
/* 05281712 */  SUB RAX,RSI
/* 05281715 */  SAR RAX,0x3
/* 05281719 */  MOV RCX,-0x5555555555555555
/* 05281723 */  IMUL RCX,RAX
/* 05281727 */  LEA RDI,[RSP + 0x10]
/* 0528172c */  CALL 0x0488f040
/* 05281731 */  MOV RBP,qword ptr [RSP + 0x10]
/* 05281736 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0528173b */  CMP RBP,RBX
/* 0528173e */  JZ 0x05281770
/* 05281740 */  LEA RAX,[RSP + 0x60]
/* 05281745 */  MOV qword ptr [RSP],RAX
/* 05281749 */  MOV RDI,R15
/* 0528174c */  MOV RSI,R14
/* 0528174f */  MOV RDX,qword ptr [RSP + 0x28]
/* 05281754 */  MOV RCX,R13
/* 05281757 */  MOV R8,R12
/* 0528175a */  MOV R9,RBP
/* 0528175d */  CALL 0x0c8550b0
/* 05281762 */  ADD RBP,0x18
/* 05281766 */  CMP RBP,RBX
/* 05281769 */  JNZ 0x05281740
/* 0528176b */  MOV RBP,qword ptr [RSP + 0x10]
/* 05281770 */  TEST RBP,RBP
/* 05281773 */  JZ 0x052817c9
/* 05281775 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0528177a */  MOV RDI,RBP
/* 0528177d */  CMP RBP,RBX
/* 05281780 */  JNZ 0x05281799
/* 05281782 */  JMP 0x052817b7
/* 05281790 */  ADD RBX,-0x18
/* 05281794 */  CMP RBX,RBP
/* 05281797 */  JZ 0x052817b2
/* 05281799 */  TEST byte ptr [RBX + -0x18],0x1
/* 0528179d */  JZ 0x05281790
/* 0528179f */  MOV RSI,qword ptr [RBX + -0x18]
/* 052817a3 */  MOV RDI,qword ptr [RBX + -0x8]
/* 052817a7 */  AND RSI,-0x2
/* 052817ab */  CALL 0x0412a280
/* 052817b0 */  JMP 0x05281790
/* 052817b2 */  MOV RDI,qword ptr [RSP + 0x10]
/* 052817b7 */  MOV qword ptr [RSP + 0x18],RBP
/* 052817bc */  MOV RSI,qword ptr [RSP + 0x20]
/* 052817c1 */  SUB RSI,RDI
/* 052817c4 */  CALL 0x0412a280
/* 052817c9 */  LEA RAX,[0xf460460]
/* 052817d0 */  MOV qword ptr [RSP + 0x60],RAX
/* 052817d5 */  MOV RDI,qword ptr [RSP + 0x80]
/* 052817dd */  TEST RDI,RDI
/* 052817e0 */  JZ 0x052817fa
/* 052817e2 */  MOV qword ptr [RSP + 0x88],RDI
/* 052817ea */  MOV RSI,qword ptr [RSP + 0x90]
/* 052817f2 */  SUB RSI,RDI
/* 052817f5 */  CALL 0x0412a280
/* 052817fa */  MOV RSI,qword ptr [RSP + 0x30]
/* 052817ff */  LEA RAX,[RSP + 0x40]
/* 05281804 */  CMP RAX,RSI
/* 05281807 */  SETZ AL
/* 0528180a */  TEST RSI,RSI
/* 0528180d */  SETZ CL
/* 05281810 */  OR CL,AL
/* 05281812 */  JNZ 0x05281825
/* 05281814 */  LEA RDI,[0xf5463b0]
/* 0528181b */  MOV RAX,qword ptr [0x0f5463b0]
/* 05281822 */  CALL qword ptr [RAX + 0x18]
/* 05281825 */  ADD RSP,0x98
/* 0528182c */  POP RBX
/* 0528182d */  POP R12
/* 0528182f */  POP R13
/* 05281831 */  POP R14
/* 05281833 */  POP R15
/* 05281835 */  POP RBP
/* 05281836 */  RET
/* 05281837 */  CALL 0x04890760
/* 0528183c */  MOV RDI,RAX
/* 0528183f */  CALL 0x04882e20
/* 05281844 */  MOV RBX,RAX
/* 05281847 */  JMP 0x05281860
/* 05281860 */  LEA RAX,[0xf460460]
/* 05281867 */  MOV qword ptr [RSP + 0x60],RAX
/* 0528186c */  MOV RDI,qword ptr [RSP + 0x80]
/* 05281874 */  TEST RDI,RDI
/* 05281877 */  JZ 0x05281891
/* 05281879 */  MOV qword ptr [RSP + 0x88],RDI
/* 05281881 */  MOV RSI,qword ptr [RSP + 0x90]
/* 05281889 */  SUB RSI,RDI
/* 0528188c */  CALL 0x0412a280
/* 05281891 */  MOV RSI,qword ptr [RSP + 0x30]
/* 05281896 */  LEA RAX,[RSP + 0x40]
/* 0528189b */  CMP RAX,RSI
/* 0528189e */  SETZ AL
/* 052818a1 */  TEST RSI,RSI
/* 052818a4 */  SETZ CL
/* 052818a7 */  OR CL,AL
/* 052818a9 */  JNZ 0x052818bc
/* 052818ab */  LEA RDI,[0xf5463b0]
/* 052818b2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 052818b9 */  CALL qword ptr [RAX + 0x18]
/* 052818bc */  MOV RDI,RBX
/* 052818bf */  CALL 0x0eee2d70
/* 052818c4 */  MOV RDI,RAX
/* 052818c7 */  CALL 0x04882e20
/* 052818cc */  INT3
