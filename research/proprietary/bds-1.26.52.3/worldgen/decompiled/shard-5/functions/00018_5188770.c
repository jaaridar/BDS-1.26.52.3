/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288770 (ELF vaddr 0x5188770)
 * Label: OverworldGeneratorMultinoise::vslot51
 * Body:  [[05288770, 05288ab7]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot51
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] wg_OverworldGeneratorMultinoise__vslot51(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (_DAT_0f5566f0 == 1) {
    puStack_b8 = &UNK_0f1e0e30;
    puStack_b0 = &DAT_0f5566f8;
    plStack_98 = (long *)&puStack_b8;
    auVar6 = func_0x09c7abc0(0,0,*(undefined8 *)(param_1 + 0x28),&puStack_b8);
    if ((undefined **)plStack_98 == &puStack_b8) {
      lVar4 = 0x20;
LAB_052887e8:
      (**(code **)(*plStack_98 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (plStack_98 != (long *)0x0) goto LAB_052887e8;
    }
    if ((auVar6._8_8_ >> 0x20 & 1) != 0) goto LAB_05288a7e;
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0xa0) + 0x568))();
  if ((*(char *)(lVar4 + 0x77) == '\0') &&
     ((*(char *)(lVar4 + 0x68) != '\0' || ((*(byte *)(lVar4 + 0x56) & 1) != 0)))) {
    func_0x04fa7a10(lVar4 + 0x70,lVar4 + 0x50);
  }
  uVar3 = _DAT_0f5568f8;
  uVar1 = CONCAT44(uRam000000000f556744,_DAT_0f556740);
  uVar2 = CONCAT44(uRam000000000f55674c,_DAT_0f556748);
  uStack_48 = _DAT_0f556740;
  uStack_44 = uRam000000000f556744;
  uStack_40 = _DAT_0f556748;
  uStack_3c = uRam000000000f55674c;
  uStack_88 = _DAT_0f556740;
  uStack_84 = uRam000000000f556744;
  uStack_80 = _DAT_0f556748;
  uStack_7c = uRam000000000f55674c;
  uStack_68 = _DAT_0f556740;
  uStack_64 = uRam000000000f556744;
  uStack_60 = _DAT_0f556748;
  uStack_5c = uRam000000000f55674c;
  uStack_58 = _DAT_0f556740;
  uStack_54 = uRam000000000f556744;
  uStack_50 = _DAT_0f556748;
  uStack_4c = uRam000000000f55674c;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  puVar5[4] = uVar3;
  puVar5[5] = uVar2;
  puVar5[6] = CONCAT44(uStack_84,uStack_88);
  puVar5[7] = CONCAT44(uStack_7c,uStack_80);
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0xffffffffffffd8f0;
  puVar5[0xb] = 0xfffffffffffff9c1;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar1;
  puVar5[0xe] = uVar2;
  puVar5[0xf] = uVar1;
  puVar5[0x10] = uVar2;
  puVar5[0x11] = uVar3;
  puVar5[0x12] = uVar2;
  puVar5[0x13] = CONCAT44(uStack_44,uStack_48);
  puVar5[0x14] = CONCAT44(uStack_3c,uStack_40);
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0xffffffffffffd8f0;
  puVar5[0x18] = 0xfffffffffffff9c1;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = uVar1;
  puVar5[0x1c] = uVar2;
  puVar5[0x1d] = uVar1;
  puVar5[0x1e] = uVar2;
  puVar5[0x1f] = uVar3;
  puVar5[0x20] = uVar2;
  puVar5[0x21] = CONCAT44(uStack_54,uStack_58);
  puVar5[0x22] = CONCAT44(uStack_4c,uStack_50);
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0x63f;
  puVar5[0x26] = 10000;
  puVar5[0x27] = 0;
  puVar5[0x28] = uVar1;
  puVar5[0x29] = uVar2;
  puVar5[0x2a] = uVar1;
  puVar5[0x2b] = uVar2;
  puVar5[0x2c] = uVar3;
  puVar5[0x2d] = uVar2;
  *(uint *)(puVar5 + 0x2e) = uStack_68;
  *(undefined4 *)((long)puVar5 + 0x174) = uStack_64;
  *(undefined4 *)(puVar5 + 0x2f) = uStack_60;
  *(undefined4 *)((long)puVar5 + 0x17c) = uStack_5c;
  puVar5[0x30] = 0;
  puVar5[0x31] = 0;
  puVar5[0x32] = 0x63f;
  puVar5[0x33] = 10000;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puStack_b0 = (undefined *)(*(long *)(param_1 + 0x28) + 0xa8);
  puStack_b8 = (undefined *)(param_1 + 0x908);
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (lVar4 == 0) {
    func_0x0eec74c0(0x1b0,0);
  }
  lStack_a8 = lVar4;
  plStack_98 = (long *)(lVar4 + 0x1b0);
  func_0x0eee2f00(lVar4,puVar5,0x1b0);
  lStack_a0 = lVar4 + 0x1b0;
  FUN_0412a280(puVar5,0x1b0);
  func_0x04a43200(&uStack_88,&puStack_b8);
  auVar6._8_4_ = uStack_80;
  auVar6._0_8_ = (ulong)uStack_88 | 0x7fff00000000;
  auVar6._12_4_ = 0;
  FUN_0412a280(lVar4,0x1b0);
LAB_05288a7e:
  auVar7._8_8_ = auVar6._8_8_ & 0xffffffff;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}



/* ---- assembly ---- */
/* 05288770 */  PUSH RBP
/* 05288771 */  PUSH R15
/* 05288773 */  PUSH R14
/* 05288775 */  PUSH R13
/* 05288777 */  PUSH R12
/* 05288779 */  PUSH RBX
/* 0528877a */  SUB RSP,0x88
/* 05288781 */  MOV RBX,RDI
/* 05288784 */  CMP word ptr [0x0f5566f0],0x1
/* 0528878c */  JNZ 0x052887f9
/* 0528878e */  MOV RDX,qword ptr [RBX + 0x28]
/* 05288792 */  LEA RAX,[0xf1e0e30]
/* 05288799 */  MOV qword ptr [RSP],RAX
/* 0528879d */  LEA RAX,[0xf5566f8]
/* 052887a4 */  MOV qword ptr [RSP + 0x8],RAX
/* 052887a9 */  MOV R13,RSP
/* 052887ac */  MOV qword ptr [RSP + 0x20],R13
/* 052887b1 */  XOR EDI,EDI
/* 052887b3 */  XOR ESI,ESI
/* 052887b5 */  MOV RCX,R13
/* 052887b8 */  CALL 0x09c7abc0
/* 052887bd */  MOV R15,RAX
/* 052887c0 */  MOV R14,RDX
/* 052887c3 */  MOV RDI,qword ptr [RSP + 0x20]
/* 052887c8 */  CMP RDI,R13
/* 052887cb */  JZ 0x052887e3
/* 052887cd */  MOV EAX,0x28
/* 052887d2 */  TEST RDI,RDI
/* 052887d5 */  JNZ 0x052887e8
/* 052887d7 */  BT R14,0x20
/* 052887dc */  JNC 0x052887f9
/* 052887de */  JMP 0x05288a7e
/* 052887e3 */  MOV EAX,0x20
/* 052887e8 */  MOV RCX,qword ptr [RDI]
/* 052887eb */  CALL qword ptr [RCX + RAX*0x1]
/* 052887ee */  BT R14,0x20
/* 052887f3 */  JC 0x05288a7e
/* 052887f9 */  MOV RAX,qword ptr [RBX + 0x28]
/* 052887fd */  MOV RDI,qword ptr [RAX + 0xa0]
/* 05288804 */  MOV RAX,qword ptr [RDI]
/* 05288807 */  CALL qword ptr [RAX + 0x568]
/* 0528880d */  CMP byte ptr [RAX + 0x77],0x0
/* 05288811 */  JNZ 0x0528882f
/* 05288813 */  CMP byte ptr [RAX + 0x68],0x0
/* 05288817 */  JNZ 0x0528881f
/* 05288819 */  TEST byte ptr [RAX + 0x56],0x1
/* 0528881d */  JZ 0x0528882f
/* 0528881f */  LEA RDI,[RAX + 0x70]
/* 05288823 */  ADD RAX,0x50
/* 05288827 */  MOV RSI,RAX
/* 0528882a */  CALL 0x04fa7a10
/* 0528882f */  MOV R13,qword ptr [0x0f556740]
/* 05288836 */  MOV R12,qword ptr [0x0f556748]
/* 0528883d */  MOV RBP,qword ptr [0x0f5568f8]
/* 05288844 */  MOVUPS XMM0,xmmword ptr [0x0f556740]
/* 0528884b */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 05288850 */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 05288855 */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0528885a */  MOVAPS xmmword ptr [RSP + 0x60],XMM0
/* 0528885f */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288866 */  LEA RDI,[0xf5463b0]
/* 0528886d */  MOV ESI,0x1b0
/* 05288872 */  CALL qword ptr [RAX + 0x10]
/* 05288875 */  MOV R15,RAX
/* 05288878 */  TEST RAX,RAX
/* 0528887b */  JZ 0x05288a96
/* 05288881 */  MOV R14,R15
/* 05288884 */  ADD R14,0x1b0
/* 0528888b */  MOV qword ptr [R15],R13
/* 0528888e */  MOV qword ptr [R15 + 0x8],R12
/* 05288892 */  MOV qword ptr [R15 + 0x10],R13
/* 05288896 */  MOV qword ptr [R15 + 0x18],R12
/* 0528889a */  MOV qword ptr [R15 + 0x20],RBP
/* 0528889e */  MOV qword ptr [R15 + 0x28],R12
/* 052888a2 */  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
/* 052888a7 */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 052888ac */  XORPS XMM0,XMM0
/* 052888af */  MOVUPS xmmword ptr [R15 + 0x40],XMM0
/* 052888b4 */  MOV qword ptr [R15 + 0x50],-0x2710
/* 052888bc */  MOV qword ptr [R15 + 0x58],-0x63f
/* 052888c4 */  MOV qword ptr [R15 + 0x60],0x0
/* 052888cc */  MOV qword ptr [R15 + 0x68],R13
/* 052888d0 */  MOV qword ptr [R15 + 0x70],R12
/* 052888d4 */  MOV qword ptr [R15 + 0x78],R13
/* 052888d8 */  MOV qword ptr [R15 + 0x80],R12
/* 052888df */  MOV qword ptr [R15 + 0x88],RBP
/* 052888e6 */  MOV qword ptr [R15 + 0x90],R12
/* 052888ed */  MOVAPS XMM1,xmmword ptr [RSP + 0x70]
/* 052888f2 */  MOVUPS xmmword ptr [R15 + 0x98],XMM1
/* 052888fa */  MOVUPS xmmword ptr [R15 + 0xa8],XMM0
/* 05288902 */  MOV qword ptr [R15 + 0xb8],-0x2710
/* 0528890d */  MOV qword ptr [R15 + 0xc0],-0x63f
/* 05288918 */  MOVUPS xmmword ptr [R15 + 0xc8],XMM0
/* 05288920 */  MOV qword ptr [R15 + 0xd8],R13
/* 05288927 */  MOV qword ptr [R15 + 0xe0],R12
/* 0528892e */  MOV qword ptr [R15 + 0xe8],R13
/* 05288935 */  MOV qword ptr [R15 + 0xf0],R12
/* 0528893c */  MOV qword ptr [R15 + 0xf8],RBP
/* 05288943 */  MOV qword ptr [R15 + 0x100],R12
/* 0528894a */  MOVAPS XMM1,xmmword ptr [RSP + 0x60]
/* 0528894f */  MOVUPS xmmword ptr [R15 + 0x108],XMM1
/* 05288957 */  MOVUPS xmmword ptr [R15 + 0x118],XMM0
/* 0528895f */  MOV qword ptr [R15 + 0x128],0x63f
/* 0528896a */  MOV qword ptr [R15 + 0x130],0x2710
/* 05288975 */  MOV qword ptr [R15 + 0x138],0x0
/* 05288980 */  MOV qword ptr [R15 + 0x140],R13
/* 05288987 */  MOV qword ptr [R15 + 0x148],R12
/* 0528898e */  MOV qword ptr [R15 + 0x150],R13
/* 05288995 */  MOV qword ptr [R15 + 0x158],R12
/* 0528899c */  MOV qword ptr [R15 + 0x160],RBP
/* 052889a3 */  MOV qword ptr [R15 + 0x168],R12
/* 052889aa */  MOVAPS XMM1,xmmword ptr [RSP + 0x50]
/* 052889af */  MOVUPS xmmword ptr [R15 + 0x170],XMM1
/* 052889b7 */  MOVUPS xmmword ptr [R15 + 0x180],XMM0
/* 052889bf */  MOV qword ptr [R15 + 0x190],0x63f
/* 052889ca */  MOV qword ptr [R15 + 0x198],0x2710
/* 052889d5 */  MOVUPS xmmword ptr [R15 + 0x1a0],XMM0
/* 052889dd */  MOV EAX,0xa8
/* 052889e2 */  ADD RAX,qword ptr [RBX + 0x28]
/* 052889e6 */  ADD RBX,0x908
/* 052889ed */  MOV qword ptr [RSP],RBX
/* 052889f1 */  MOV qword ptr [RSP + 0x8],RAX
/* 052889f6 */  LEA RDI,[0xf5463b0]
/* 052889fd */  MOV RAX,qword ptr [0x0f5463b0]
/* 05288a04 */  MOV ESI,0x1b0
/* 05288a09 */  CALL qword ptr [RAX + 0x10]
/* 05288a0c */  MOV RBX,RAX
/* 05288a0f */  TEST RAX,RAX
/* 05288a12 */  JZ 0x05288aa7
/* 05288a18 */  MOV qword ptr [RSP + 0x10],RBX
/* 05288a1d */  MOV R14,RBX
/* 05288a20 */  ADD R14,0x1b0
/* 05288a27 */  MOV qword ptr [RSP + 0x20],R14
/* 05288a2c */  MOV EDX,0x1b0
/* 05288a31 */  MOV RDI,RBX
/* 05288a34 */  MOV RSI,R15
/* 05288a37 */  CALL 0x0eee2f00
/* 05288a3c */  MOV qword ptr [RSP + 0x18],R14
/* 05288a41 */  MOV ESI,0x1b0
/* 05288a46 */  MOV RDI,R15
/* 05288a49 */  CALL 0x0412a280
/* 05288a4e */  LEA RDI,[RSP + 0x30]
/* 05288a53 */  MOV RSI,RSP
/* 05288a56 */  CALL 0x04a43200
/* 05288a5b */  MOV EAX,dword ptr [RSP + 0x30]
/* 05288a5f */  MOV R14D,dword ptr [RSP + 0x38]
/* 05288a64 */  MOV R15,0x7fff00000000
/* 05288a6e */  OR R15,RAX
/* 05288a71 */  MOV ESI,0x1b0
/* 05288a76 */  MOV RDI,RBX
/* 05288a79 */  CALL 0x0412a280
/* 05288a7e */  MOV RAX,R15
/* 05288a81 */  MOV EDX,R14D
/* 05288a84 */  ADD RSP,0x88
/* 05288a8b */  POP RBX
/* 05288a8c */  POP R12
/* 05288a8e */  POP R13
/* 05288a90 */  POP R14
/* 05288a92 */  POP R15
/* 05288a94 */  POP RBP
/* 05288a95 */  RET
/* 05288a96 */  MOV EDI,0x1b0
/* 05288a9b */  XOR ESI,ESI
/* 05288a9d */  CALL 0x0eec74c0
/* 05288aa2 */  JMP 0x05288881
/* 05288aa7 */  MOV EDI,0x1b0
/* 05288aac */  XOR ESI,ESI
/* 05288aae */  CALL 0x0eec74c0
/* 05288ab3 */  JMP 0x05288a18
