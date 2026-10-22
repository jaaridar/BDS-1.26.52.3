/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288760 (ELF vaddr 0x5188760)
 * Label: OverworldGeneratorMultinoise::vslot2
 * Body:  [[052884e0, 05288739] [05288760, 05288768]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_OverworldGeneratorMultinoise__vslot2(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *in_FS_OFFSET;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uVar1 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  puStack_50 = &UNK_011b8ea4;
  puStack_48 = &UNK_0144800b;
  uStack_40 = uVar1;
  lVar4 = func_0x0417cc60();
  puStack_78 = param_2;
  lStack_38 = lVar4;
  FUN_052586c0(param_1 + 0x898,&puStack_78);
  uVar10 = func_0x05286980(param_2,*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xc38)
                          );
  iVar2 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xa8);
  iVar5 = iVar2 >> 0x1f;
  iVar2 = iVar5 - iVar2;
  iVar6 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xaa);
  iVar8 = iVar6 >> 0x1f;
  iVar6 = iVar8 - iVar6;
  iVar3 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar6 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar3 = (((iVar8 + (iVar6 >> 3)) - (iVar3 >> 3)) - iVar5) + -0x2f;
  uVar7 = (iVar5 - (iVar6 >> 3)) * 8 + 0x138;
  iVar2 = 0x28;
  while( true ) {
    fVar11 = ((float)(int)uVar7 * _DAT_01198698 + _DAT_011983f0 + (float)uVar10) *
             (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar11 * *(float *)(&UNK_014f0a50 + (ulong)(0.0 < fVar11) * 4) + _DAT_0119880c;
    fVar13 = (float)iVar3 * _DAT_011986e0;
    fVar11 = _DAT_01198aa4;
    if ((0.0 <= fVar13) && (fVar11 = fVar12, fVar13 <= _DAT_011983f0)) {
      fVar11 = (fVar12 + _DAT_01198400) * fVar13 + _DAT_01198aa4;
    }
    fVar12 = (float)(iVar2 - 1U & 0xff) / _DAT_01198af0;
    uVar9 = -(uint)(_DAT_011983f0 < fVar12);
    if (_DAT_01198690 <
        (float)(uVar9 & (uint)fVar11 |
               ~uVar9 & (uint)((fVar11 + _DAT_01198c1c) * fVar12 + _DAT_01198358))) break;
    iVar3 = iVar3 + 1;
    uVar7 = uVar7 - 8;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      uVar7 = 0x17fff;
LAB_052886ff:
      puStack_78 = &UNK_011b8ea4;
      puStack_70 = &UNK_0144800b;
      uStack_68 = uVar1;
      lStack_60 = func_0x0417cc60();
      lStack_60 = lStack_60 - lVar4;
      func_0x0cad8200(&puStack_78);
      return uVar7;
    }
  }
  uVar7 = uVar7 & 0xfff8 | 0x10000;
  goto LAB_052886ff;
}



/* ---- assembly ---- */
/* 052884e0 */  PUSH RBP
/* 052884e1 */  PUSH R15
/* 052884e3 */  PUSH R14
/* 052884e5 */  PUSH R13
/* 052884e7 */  PUSH R12
/* 052884e9 */  PUSH RBX
/* 052884ea */  SUB RSP,0x48
/* 052884ee */  MOV R15,RSI
/* 052884f1 */  MOV R14,RDI
/* 052884f4 */  CMP qword ptr [0x0f53c8c0],0x0
/* 052884fc */  JZ 0x05288503
/* 052884fe */  CALL 0x0eee3820
/* 05288503 */  MOV RAX,qword ptr FS:[0x0]
/* 0528850f */  MOVZX R12D,byte ptr [RAX + -0xb67]
/* 05288517 */  LEA RAX,[0x11b8ea4]
/* 0528851e */  MOV qword ptr [RSP + 0x28],RAX
/* 05288523 */  LEA R13,[0x144800b]
/* 0528852a */  MOV qword ptr [RSP + 0x30],R13
/* 0528852f */  MOV byte ptr [RSP + 0x38],R12B
/* 05288534 */  CALL 0x0417cc60
/* 05288539 */  MOV RBX,RAX
/* 0528853c */  MOV qword ptr [RSP + 0x40],RAX
/* 05288541 */  MOV qword ptr [RSP],R15
/* 05288545 */  LEA RDI,[R14 + 0x908]
/* 0528854c */  MOV RSI,RSP
/* 0528854f */  CALL 0x052586c0
/* 05288554 */  MOV RSI,qword ptr [R14 + 0xca0]
/* 0528855b */  MOV RDX,qword ptr [R14 + 0xca8]
/* 05288562 */  MOV RDI,R15
/* 05288565 */  CALL 0x05286980
/* 0528856a */  MOVAPS XMM1,XMM0
/* 0528856d */  MOV RDX,qword ptr [R14 + 0x28]
/* 05288571 */  MOVSX EAX,word ptr [RDX + 0xa8]
/* 05288578 */  MOV ECX,EAX
/* 0528857a */  SAR ECX,0x1f
/* 0528857d */  MOV ESI,ECX
/* 0528857f */  SUB ESI,EAX
/* 05288581 */  MOVSX EDX,word ptr [RDX + 0xaa]
/* 05288588 */  MOV EDI,EDX
/* 0528858a */  SAR EDI,0x1f
/* 0528858d */  SHR EAX,0x1f
/* 05288590 */  MOV R8D,EDI
/* 05288593 */  SUB R8D,EDX
/* 05288596 */  LEA EDX,[R8 + 0x7]
/* 0528859a */  TEST R8D,R8D
/* 0528859d */  CMOVNS EDX,R8D
/* 052885a1 */  SAR EDX,0x3
/* 052885a4 */  LEA R8D,[RSI + 0x7]
/* 052885a8 */  TEST ESI,ESI
/* 052885aa */  CMOVNS R8D,ESI
/* 052885ae */  SHUFPS XMM1,XMM0,0x55
/* 052885b2 */  SAR R8D,0x3
/* 052885b6 */  ADD EDI,R8D
/* 052885b9 */  SUB EDI,EDX
/* 052885bb */  ADD EAX,EDI
/* 052885bd */  ADD EAX,-0x2f
/* 052885c0 */  SUB ECX,R8D
/* 052885c3 */  LEA EBP,[0x138 + RCX*0x8]
/* 052885ca */  MOV ECX,0x28
/* 052885cf */  MOVSS XMM2,dword ptr [0x01198698]
/* 052885d7 */  MOVSS XMM12,dword ptr [0x011983f0]
/* 052885e0 */  XORPS XMM4,XMM4
/* 052885e3 */  LEA RDX,[0x14f0a50]
/* 052885ea */  MOVSS XMM5,dword ptr [0x0119880c]
/* 052885f2 */  MOVSS XMM6,dword ptr [0x011986e0]
/* 052885fa */  MOVSS XMM7,dword ptr [0x01198aa4]
/* 05288602 */  MOVSS XMM8,dword ptr [0x01198af0]
/* 0528860b */  MOVSS XMM9,dword ptr [0x01198c1c]
/* 05288614 */  MOVSS XMM10,dword ptr [0x01198358]
/* 0528861d */  MOVSS XMM11,dword ptr [0x01198690]
/* 05288626 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 05288630 */  XORPS XMM13,XMM13
/* 05288634 */  CVTSI2SS XMM13,EBP
/* 05288639 */  MULSS XMM13,XMM2
/* 0528863e */  ADDSS XMM13,XMM12
/* 05288643 */  ADDSS XMM13,XMM0
/* 05288648 */  MULSS XMM13,XMM1
/* 0528864d */  XOR ESI,ESI
/* 0528864f */  UCOMISS XMM13,XMM4
/* 05288653 */  SETA SIL
/* 05288657 */  MULSS XMM13,dword ptr [RDX + RSI*0x4]
/* 0528865d */  ADDSS XMM13,XMM5
/* 05288662 */  XORPS XMM15,XMM15
/* 05288666 */  CVTSI2SS XMM15,EAX
/* 0528866b */  MULSS XMM15,XMM6
/* 05288670 */  UCOMISS XMM4,XMM15
/* 05288674 */  MOVAPS XMM14,XMM7
/* 05288678 */  JA 0x05288697
/* 0528867a */  UCOMISS XMM15,XMM12
/* 0528867e */  JA 0x05288693
/* 05288680 */  ADDSS XMM13,dword ptr [0x01198400]
/* 05288689 */  MULSS XMM13,XMM15
/* 0528868e */  ADDSS XMM13,XMM7
/* 05288693 */  MOVAPS XMM14,XMM13
/* 05288697 */  LEA ESI,[RCX + -0x1]
/* 0528869a */  MOVZX ESI,SIL
/* 0528869e */  XORPS XMM13,XMM13
/* 052886a2 */  CVTSI2SS XMM13,ESI
/* 052886a7 */  DIVSS XMM13,XMM8
/* 052886ac */  MOVAPS XMM15,XMM14
/* 052886b0 */  ADDSS XMM15,XMM9
/* 052886b5 */  MULSS XMM15,XMM13
/* 052886ba */  ADDSS XMM15,XMM10
/* 052886bf */  MOVAPS XMM3,XMM12
/* 052886c3 */  CMPLTSS XMM3,XMM13
/* 052886c9 */  MOVAPS XMM13,XMM3
/* 052886cd */  ANDNPS XMM13,XMM15
/* 052886d1 */  ANDPS XMM3,XMM14
/* 052886d5 */  ORPS XMM3,XMM13
/* 052886d9 */  UCOMISS XMM3,XMM11
/* 052886dd */  JA 0x052886f3
/* 052886df */  INC EAX
/* 052886e1 */  ADD EBP,-0x8
/* 052886e4 */  DEC ECX
/* 052886e6 */  JNZ 0x05288630
/* 052886ec */  MOV EBP,0x17fff
/* 052886f1 */  JMP 0x052886ff
/* 052886f3 */  AND EBP,0xfff8
/* 052886f9 */  OR EBP,0x10000
/* 052886ff */  LEA RAX,[0x11b8ea4]
/* 05288706 */  MOV qword ptr [RSP],RAX
/* 0528870a */  MOV qword ptr [RSP + 0x8],R13
/* 0528870f */  MOV byte ptr [RSP + 0x10],R12B
/* 05288714 */  CALL 0x0417cc60
/* 05288719 */  SUB RAX,RBX
/* 0528871c */  MOV qword ptr [RSP + 0x18],RAX
/* 05288721 */  MOV RDI,RSP
/* 05288724 */  CALL 0x0cad8200
/* 05288729 */  MOV EAX,EBP
/* 0528872b */  ADD RSP,0x48
/* 0528872f */  POP RBX
/* 05288730 */  POP R12
/* 05288732 */  POP R13
/* 05288734 */  POP R14
/* 05288736 */  POP R15
/* 05288738 */  POP RBP
/* 05288739 */  RET
/* 05288760 */  ADD RDI,-0x70
/* 05288764 */  JMP 0x052884e0
