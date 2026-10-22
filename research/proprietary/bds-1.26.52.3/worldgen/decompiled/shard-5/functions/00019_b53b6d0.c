/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb63b6d0 (ELF vaddr 0xb53b6d0)
 * Label: callee-of:0x4de9260
 * Body:  [[0b63b6d0, 0b63b8c9]]
 * Ghidra: FUN_0b63b6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b63b6d0(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  byte bStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  undefined4 uStack_24;
  byte bStack_20;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  undefined4 uStack_17;
  undefined4 uStack_13;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined5 uStack_d;
  
  pbVar1 = (byte *)(param_2 + 8);
  if (param_1 != pbVar1) {
    bVar2 = *pbVar1;
    if ((*param_1 & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x18);
        uVar3 = *(undefined4 *)(param_2 + 0xc);
        uVar4 = *(undefined4 *)(param_2 + 0x10);
        uVar5 = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)param_1 = *(undefined4 *)pbVar1;
        *(undefined4 *)(param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 8) = uVar4;
        *(undefined4 *)(param_1 + 0xc) = uVar5;
      }
      else {
        func_0x04885070(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      bVar9 = (bVar2 & 1) != 0;
      lVar7 = param_2 + 9;
      if (bVar9) {
        lVar7 = *(long *)(param_2 + 0x18);
      }
      uVar8 = (ulong)(bVar2 >> 1);
      if (bVar9) {
        uVar8 = *(ulong *)(param_2 + 0x10);
      }
      func_0x04885120(param_1,lVar7,uVar8);
    }
  }
  bStack_20 = 0x1e;
  uStack_1f = 0x7a2d615b;
  uStack_1b = 0x305a2d41;
  uStack_17 = 0x2e5f392d;
  uStack_13 = 0x2b5d2d;
  bStack_38 = 0x18;
  uStack_37 = 0x6564693c;
  uStack_33 = 0x6669746e;
  uStack_2f = 0x3e726569;
  uStack_2b = 0;
  func_0x0edfaf90(param_1,&bStack_20,&bStack_38,0xffffffff);
  if ((bStack_38 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_24,CONCAT13(uStack_25,CONCAT21(uStack_27,uStack_28))),
                    CONCAT35((undefined3)uStack_33,CONCAT41(uStack_37,bStack_38)) &
                    0xfffffffffffffffe);
  }
  if ((bStack_20 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_d,CONCAT12(uStack_e,CONCAT11(uStack_f,uStack_13._3_1_))),
                    CONCAT35((undefined3)uStack_1b,CONCAT41(uStack_1f,bStack_20)) &
                    0xfffffffffffffffe);
  }
  bStack_20 = 0x20;
  uStack_1f = (undefined4)_DAT_0147c4a4;
  uStack_1b = (undefined4)((ulong)_DAT_0147c4a4 >> 0x20);
  uStack_17 = (undefined4)_UNK_0147c4ac;
  uStack_13 = (undefined4)((ulong)_UNK_0147c4ac >> 0x20);
  uStack_f = 0;
  bStack_38 = 0x24;
  uStack_37 = _DAT_012e60d7;
  uStack_33 = _UNK_012e60db;
  uStack_2f = _UNK_012e60df;
  uStack_2b = (undefined1)_UNK_012e60e3;
  uStack_2a = (undefined2)((uint)_UNK_012e60e3 >> 8);
  uStack_28 = (undefined1)((uint)_UNK_012e60e3 >> 0x18);
  uStack_27 = 0x3e72;
  uStack_25 = 0;
  func_0x0edfaf90(param_1,&bStack_20,&bStack_38,0xffffffff);
  if ((bStack_38 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_24,CONCAT13(uStack_25,CONCAT21(uStack_27,uStack_28))),
                    CONCAT35((undefined3)uStack_33,CONCAT41(uStack_37,bStack_38)) &
                    0xfffffffffffffffe);
  }
  if ((bStack_20 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_d,CONCAT12(uStack_e,CONCAT11(uStack_f,uStack_13._3_1_))),
                    CONCAT35((undefined3)uStack_1b,CONCAT41(uStack_1f,bStack_20)) &
                    0xfffffffffffffffe);
  }
  bStack_20 = 0x22;
  uStack_1f = _DAT_013ed736;
  uStack_1b = _UNK_013ed73a;
  uStack_17 = _UNK_013ed73e;
  uStack_13 = _UNK_013ed742;
  uStack_f = 0x3f;
  uStack_e = 0;
  bStack_38 = 0x18;
  uStack_37 = 0x6d69743c;
  uStack_33 = 0x74735f65;
  uStack_2f = 0x3e706d61;
  uStack_2b = 0;
  func_0x0edfaf90(param_1,&bStack_20,&bStack_38,0xffffffff);
  uVar3 = uStack_13;
  if ((bStack_38 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_24,CONCAT13(uStack_25,CONCAT21(uStack_27,uStack_28))),
                    CONCAT35((undefined3)uStack_33,CONCAT41(uStack_37,bStack_38)) &
                    0xfffffffffffffffe);
    uVar3 = uStack_13;
  }
  if ((bStack_20 & 1) != 0) {
    uStack_13._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
    uVar6 = CONCAT11(uStack_f,uStack_13._3_1_);
    uStack_13 = uVar3;
    func_0x0412a280(CONCAT53(uStack_d,CONCAT12(uStack_e,uVar6)),
                    CONCAT35((undefined3)uStack_1b,CONCAT41(uStack_1f,bStack_20)) &
                    0xfffffffffffffffe);
    return;
  }
  return;
}



/* ---- referenced strings ----
 * 0x12e60d7  <scope_identifier>
 * 0x13ed736  [0-9]+(\.[0-9]+)?
 * 0x147c4a4  [a-zA-Z0-9_.:-]+
 */

/* ---- assembly ---- */
/* 0b63b6d0 */  PUSH RBX
/* 0b63b6d1 */  SUB RSP,0x30
/* 0b63b6d5 */  MOV RBX,RDI
/* 0b63b6d8 */  LEA RAX,[RSI + 0x8]
/* 0b63b6dc */  CMP RDI,RAX
/* 0b63b6df */  JZ 0x0b63b730
/* 0b63b6e1 */  MOVZX ECX,byte ptr [RAX]
/* 0b63b6e4 */  TEST byte ptr [RBX],0x1
/* 0b63b6e7 */  JNZ 0x0b63b6fe
/* 0b63b6e9 */  TEST CL,0x1
/* 0b63b6ec */  JNZ 0x0b63b720
/* 0b63b6ee */  MOV RCX,qword ptr [RAX + 0x10]
/* 0b63b6f2 */  MOV qword ptr [RBX + 0x10],RCX
/* 0b63b6f6 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0b63b6f9 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0b63b6fc */  JMP 0x0b63b730
/* 0b63b6fe */  LEA RAX,[RSI + 0x9]
/* 0b63b702 */  MOV EDX,ECX
/* 0b63b704 */  SHR EDX,0x1
/* 0b63b706 */  TEST CL,0x1
/* 0b63b709 */  CMOVNZ RAX,qword ptr [RSI + 0x18]
/* 0b63b70e */  CMOVNZ RDX,qword ptr [RSI + 0x10]
/* 0b63b713 */  MOV RDI,RBX
/* 0b63b716 */  MOV RSI,RAX
/* 0b63b719 */  CALL 0x04885120
/* 0b63b71e */  JMP 0x0b63b730
/* 0b63b720 */  MOV RDX,qword ptr [RSI + 0x10]
/* 0b63b724 */  MOV RSI,qword ptr [RSI + 0x18]
/* 0b63b728 */  MOV RDI,RBX
/* 0b63b72b */  CALL 0x04885070
/* 0b63b730 */  MOV byte ptr [RSP + 0x18],0x1e
/* 0b63b735 */  MOV RAX,0x305a2d417a2d615b
/* 0b63b73f */  MOV qword ptr [RSP + 0x19],RAX
/* 0b63b744 */  MOV RAX,0x2b5d2d2e5f392d30
/* 0b63b74e */  MOV qword ptr [RSP + 0x20],RAX
/* 0b63b753 */  MOV byte ptr [RSP + 0x28],0x0
/* 0b63b758 */  MOV byte ptr [RSP],0x18
/* 0b63b75c */  MOV RAX,0x6669746e6564693c
/* 0b63b766 */  MOV qword ptr [RSP + 0x1],RAX
/* 0b63b76b */  MOV dword ptr [RSP + 0x9],0x3e726569
/* 0b63b773 */  MOV byte ptr [RSP + 0xd],0x0
/* 0b63b778 */  LEA RSI,[RSP + 0x18]
/* 0b63b77d */  MOV RDX,RSP
/* 0b63b780 */  MOV RDI,RBX
/* 0b63b783 */  MOV ECX,0xffffffff
/* 0b63b788 */  CALL 0x0edfaf90
/* 0b63b78d */  TEST byte ptr [RSP],0x1
/* 0b63b791 */  JZ 0x0b63b7a5
/* 0b63b793 */  MOV RSI,qword ptr [RSP]
/* 0b63b797 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0b63b79c */  AND RSI,-0x2
/* 0b63b7a0 */  CALL 0x0412a280
/* 0b63b7a5 */  TEST byte ptr [RSP + 0x18],0x1
/* 0b63b7aa */  JZ 0x0b63b7bf
/* 0b63b7ac */  MOV RSI,qword ptr [RSP + 0x18]
/* 0b63b7b1 */  MOV RDI,qword ptr [RSP + 0x28]
/* 0b63b7b6 */  AND RSI,-0x2
/* 0b63b7ba */  CALL 0x0412a280
/* 0b63b7bf */  MOV byte ptr [RSP + 0x18],0x20
/* 0b63b7c4 */  MOVUPS XMM0,xmmword ptr [0x0147c4a4]
/* 0b63b7cb */  MOVUPS xmmword ptr [RSP + 0x19],XMM0
/* 0b63b7d0 */  MOV byte ptr [RSP + 0x29],0x0
/* 0b63b7d5 */  MOV byte ptr [RSP],0x24
/* 0b63b7d9 */  MOVUPS XMM0,xmmword ptr [0x012e60d7]
/* 0b63b7e0 */  MOVUPS xmmword ptr [RSP + 0x1],XMM0
/* 0b63b7e5 */  MOV word ptr [RSP + 0x11],0x3e72
/* 0b63b7ec */  MOV byte ptr [RSP + 0x13],0x0
/* 0b63b7f1 */  LEA RSI,[RSP + 0x18]
/* 0b63b7f6 */  MOV RDX,RSP
/* 0b63b7f9 */  MOV RDI,RBX
/* 0b63b7fc */  MOV ECX,0xffffffff
/* 0b63b801 */  CALL 0x0edfaf90
/* 0b63b806 */  TEST byte ptr [RSP],0x1
/* 0b63b80a */  JZ 0x0b63b81e
/* 0b63b80c */  MOV RSI,qword ptr [RSP]
/* 0b63b810 */  MOV RDI,qword ptr [RSP + 0x10]
/* 0b63b815 */  AND RSI,-0x2
/* 0b63b819 */  CALL 0x0412a280
/* 0b63b81e */  TEST byte ptr [RSP + 0x18],0x1
/* 0b63b823 */  JZ 0x0b63b838
/* 0b63b825 */  MOV RSI,qword ptr [RSP + 0x18]
/* 0b63b82a */  MOV RDI,qword ptr [RSP + 0x28]
/* 0b63b82f */  AND RSI,-0x2
/* 0b63b833 */  CALL 0x0412a280
/* 0b63b838 */  MOV byte ptr [RSP + 0x18],0x22
/* 0b63b83d */  MOVUPS XMM0,xmmword ptr [0x013ed736]
/* 0b63b844 */  MOVUPS xmmword ptr [RSP + 0x19],XMM0
/* 0b63b849 */  MOV word ptr [RSP + 0x29],0x3f
/* 0b63b850 */  MOV byte ptr [RSP],0x18
/* 0b63b854 */  MOV RAX,0x74735f656d69743c
/* 0b63b85e */  MOV qword ptr [RSP + 0x1],RAX
/* 0b63b863 */  MOV dword ptr [RSP + 0x9],0x3e706d61
/* 0b63b86b */  MOV byte ptr [RSP + 0xd],0x0
/* 0b63b870 */  LEA RSI,[RSP + 0x18]
/* 0b63b875 */  MOV RDX,RSP
/* 0b63b878 */  MOV RDI,RBX
/* 0b63b87b */  MOV ECX,0xffffffff
/* 0b63b880 */  CALL 0x0edfaf90
/* 0b63b885 */  TEST byte ptr [RSP],0x1
/* 0b63b889 */  JNZ 0x0b63b898
/* 0b63b88b */  TEST byte ptr [RSP + 0x18],0x1
/* 0b63b890 */  JNZ 0x0b63b8b1
/* 0b63b892 */  ADD RSP,0x30
/* 0b63b896 */  POP RBX
/* 0b63b897 */  RET
/* 0b63b898 */  MOV RSI,qword ptr [RSP]
/* 0b63b89c */  MOV RDI,qword ptr [RSP + 0x10]
/* 0b63b8a1 */  AND RSI,-0x2
/* 0b63b8a5 */  CALL 0x0412a280
/* 0b63b8aa */  TEST byte ptr [RSP + 0x18],0x1
/* 0b63b8af */  JZ 0x0b63b892
/* 0b63b8b1 */  MOV RSI,qword ptr [RSP + 0x18]
/* 0b63b8b6 */  MOV RDI,qword ptr [RSP + 0x28]
/* 0b63b8bb */  AND RSI,-0x2
/* 0b63b8bf */  CALL 0x0412a280
/* 0b63b8c4 */  ADD RSP,0x30
/* 0b63b8c8 */  POP RBX
/* 0b63b8c9 */  RET
