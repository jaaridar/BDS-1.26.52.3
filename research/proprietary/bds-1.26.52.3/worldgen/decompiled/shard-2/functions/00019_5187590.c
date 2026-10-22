/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5287590 (ELF vaddr 0x5187590)
 * Label: OverworldGeneratorMultinoise::vslot57
 * Body:  [[05287590, 052878db]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot57
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_OverworldGeneratorMultinoise__vslot57(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_38;
  
  func_0x05286c70(auStack_58,*param_3,param_2 + 0x908,*(undefined8 *)(param_2 + 0xca0),
                  *(undefined8 *)(param_2 + 0xca8));
  sVar2 = *(short *)(*(long *)(param_2 + 0x28) + 0xa8);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4180);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x4180,0);
  }
  *plVar7 = param_2 + 0x6e0;
  *(short *)(plVar7 + 1) = sVar2 + 4;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x21] = 0;
  *(undefined4 *)(plVar7 + 0x22) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x27] = 0;
  plVar7[0x28] = 0;
  plVar7[0x25] = 0;
  plVar7[0x26] = 0;
  plVar7[0x23] = 0;
  plVar7[0x24] = 0;
  *(undefined4 *)(plVar7 + 0x2d) = 0;
  func_0x0eee2dd0(plVar7 + 0x2e,0,0x4010);
  uVar6 = _UNK_014ea7cc;
  uVar5 = _UNK_014ea7c8;
  uVar4 = _UNK_014ea7c4;
  uVar3 = _DAT_014ea7c0;
  lVar8 = 0x78;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x478);
  *(undefined4 *)(plVar7 + 0x22e) = 0x3f800000;
  lVar8 = 0x479;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x879);
  *(undefined4 *)((long)plVar7 + 0x2174) = 0x3f800000;
  lVar8 = 0x87a;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0xc7a);
  *(undefined4 *)(plVar7 + 0x62f) = 0x3f800000;
  lVar8 = 0xc7b;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x107b);
  *(undefined4 *)((long)plVar7 + 0x417c) = 0x3f800000;
  lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3160);
  if (lVar8 == 0) {
    FUN_0eec74c0(0x3160,0);
  }
  func_0x05268e90(lVar8,param_2 + 0x7c0);
  func_0x05287930(param_1,param_2,*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),
                  auStack_58,plVar7,lVar8);
  func_0x0412a280(lVar8,0x3160);
  func_0x0412a280(plVar7,0x4180);
  if (lStack_48 != 0) {
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  return param_1;
}



/* ---- assembly ---- */
/* 05287590 */  PUSH RBP
/* 05287591 */  PUSH R15
/* 05287593 */  PUSH R14
/* 05287595 */  PUSH R13
/* 05287597 */  PUSH R12
/* 05287599 */  PUSH RBX
/* 0528759a */  SUB RSP,0x38
/* 0528759e */  MOV R12,RDX
/* 052875a1 */  MOV R15,RSI
/* 052875a4 */  MOV RBX,RDI
/* 052875a7 */  MOV RSI,qword ptr [RDX]
/* 052875aa */  LEA RDX,[R15 + 0x908]
/* 052875b1 */  MOV RCX,qword ptr [R15 + 0xca0]
/* 052875b8 */  MOV R8,qword ptr [R15 + 0xca8]
/* 052875bf */  LEA RDI,[RSP + 0x10]
/* 052875c4 */  CALL 0x05286c70
/* 052875c9 */  MOV RAX,qword ptr [R15 + 0x28]
/* 052875cd */  MOVZX EBP,word ptr [RAX + 0xa8]
/* 052875d4 */  LEA RDI,[0xf5463b0]
/* 052875db */  MOV RAX,qword ptr [0x0f5463b0]
/* 052875e2 */  MOV ESI,0x4180
/* 052875e7 */  CALL qword ptr [RAX + 0x10]
/* 052875ea */  MOV R14,RAX
/* 052875ed */  TEST RAX,RAX
/* 052875f0 */  JZ 0x052878ba
/* 052875f6 */  LEA RAX,[R15 + 0x6e0]
/* 052875fd */  MOV qword ptr [R14],RAX
/* 05287600 */  ADD EBP,0x4
/* 05287603 */  MOV word ptr [R14 + 0x8],BP
/* 05287608 */  XORPS XMM0,XMM0
/* 0528760b */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 05287610 */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 05287615 */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0528761a */  MOVUPS xmmword ptr [R14 + 0x40],XMM0
/* 0528761f */  MOVUPS xmmword ptr [R14 + 0x50],XMM0
/* 05287624 */  MOV dword ptr [R14 + 0x60],0x0
/* 0528762c */  MOVUPS xmmword ptr [R14 + 0x68],XMM0
/* 05287631 */  MOVUPS xmmword ptr [R14 + 0x78],XMM0
/* 05287636 */  MOVUPS xmmword ptr [R14 + 0x88],XMM0
/* 0528763e */  MOVUPS xmmword ptr [R14 + 0x98],XMM0
/* 05287646 */  MOVUPS xmmword ptr [R14 + 0xa8],XMM0
/* 0528764e */  MOV dword ptr [R14 + 0xb8],0x0
/* 05287659 */  MOVUPS xmmword ptr [R14 + 0xc0],XMM0
/* 05287661 */  MOVUPS xmmword ptr [R14 + 0xd0],XMM0
/* 05287669 */  MOVUPS xmmword ptr [R14 + 0xe0],XMM0
/* 05287671 */  MOVUPS xmmword ptr [R14 + 0xf0],XMM0
/* 05287679 */  MOVUPS xmmword ptr [R14 + 0x100],XMM0
/* 05287681 */  MOV dword ptr [R14 + 0x110],0x0
/* 0528768c */  MOVUPS xmmword ptr [R14 + 0x158],XMM0
/* 05287694 */  MOVUPS xmmword ptr [R14 + 0x148],XMM0
/* 0528769c */  MOVUPS xmmword ptr [R14 + 0x138],XMM0
/* 052876a4 */  MOVUPS xmmword ptr [R14 + 0x128],XMM0
/* 052876ac */  MOVUPS xmmword ptr [R14 + 0x118],XMM0
/* 052876b4 */  MOV dword ptr [R14 + 0x168],0x0
/* 052876bf */  MOV RDI,R14
/* 052876c2 */  ADD RDI,0x170
/* 052876c9 */  MOV EDX,0x4010
/* 052876ce */  XOR ESI,ESI
/* 052876d0 */  CALL 0x0eee2dd0
/* 052876d5 */  MOV EAX,0x78
/* 052876da */  MOVAPS XMM0,xmmword ptr [0x014ea7c0]
/* 052876e1 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 052876f0 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
/* 052876f6 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
/* 052876fc */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
/* 05287702 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
/* 05287708 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
/* 0528770e */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
/* 05287714 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
/* 0528771a */  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
/* 0528771f */  ADD RAX,0x20
/* 05287723 */  CMP RAX,0x478
/* 05287729 */  JNZ 0x052876f0
/* 0528772b */  MOV dword ptr [R14 + 0x1170],0x3f800000
/* 05287736 */  MOV EAX,0x479
/* 0528773b */  NOP dword ptr [RAX + RAX*0x1]
/* 05287740 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
/* 05287746 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
/* 0528774c */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
/* 05287752 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
/* 05287758 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
/* 0528775e */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
/* 05287764 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
/* 0528776a */  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
/* 0528776f */  ADD RAX,0x20
/* 05287773 */  CMP RAX,0x879
/* 05287779 */  JNZ 0x05287740
/* 0528777b */  MOV dword ptr [R14 + 0x2174],0x3f800000
/* 05287786 */  MOV EAX,0x87a
/* 0528778b */  NOP dword ptr [RAX + RAX*0x1]
/* 05287790 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
/* 05287796 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
/* 0528779c */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
/* 052877a2 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
/* 052877a8 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
/* 052877ae */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
/* 052877b4 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
/* 052877ba */  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
/* 052877bf */  ADD RAX,0x20
/* 052877c3 */  CMP RAX,0xc7a
/* 052877c9 */  JNZ 0x05287790
/* 052877cb */  MOV dword ptr [R14 + 0x3178],0x3f800000
/* 052877d6 */  MOV EAX,0xc7b
/* 052877db */  NOP dword ptr [RAX + RAX*0x1]
/* 052877e0 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
/* 052877e6 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
/* 052877ec */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
/* 052877f2 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
/* 052877f8 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
/* 052877fe */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
/* 05287804 */  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
/* 0528780a */  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
/* 0528780f */  ADD RAX,0x20
/* 05287813 */  CMP RAX,0x107b
/* 05287819 */  JNZ 0x052877e0
/* 0528781b */  MOV dword ptr [R14 + 0x417c],0x3f800000
/* 05287826 */  LEA RDI,[0xf5463b0]
/* 0528782d */  MOV RAX,qword ptr [0x0f5463b0]
/* 05287834 */  MOV ESI,0x3160
/* 05287839 */  CALL qword ptr [RAX + 0x10]
/* 0528783c */  MOV R13,RAX
/* 0528783f */  TEST RAX,RAX
/* 05287842 */  JZ 0x052878cb
/* 05287848 */  LEA RSI,[R15 + 0x7c0]
/* 0528784f */  MOV RDI,R13
/* 05287852 */  CALL 0x05268e90
/* 05287857 */  MOV EDX,dword ptr [R12]
/* 0528785b */  MOV ECX,dword ptr [R12 + 0x4]
/* 05287860 */  MOV qword ptr [RSP],R13
/* 05287864 */  LEA R8,[RSP + 0x10]
/* 05287869 */  MOV RDI,RBX
/* 0528786c */  MOV RSI,R15
/* 0528786f */  MOV R9,R14
/* 05287872 */  CALL 0x05287930
/* 05287877 */  MOV ESI,0x3160
/* 0528787c */  MOV RDI,R13
/* 0528787f */  CALL 0x0412a280
/* 05287884 */  MOV ESI,0x4180
/* 05287889 */  MOV RDI,R14
/* 0528788c */  CALL 0x0412a280
/* 05287891 */  MOV RDI,qword ptr [RSP + 0x20]
/* 05287896 */  TEST RDI,RDI
/* 05287899 */  JZ 0x052878a8
/* 0528789b */  MOV RSI,qword ptr [RSP + 0x30]
/* 052878a0 */  SUB RSI,RDI
/* 052878a3 */  CALL 0x0412a280
/* 052878a8 */  MOV RAX,RBX
/* 052878ab */  ADD RSP,0x38
/* 052878af */  POP RBX
/* 052878b0 */  POP R12
/* 052878b2 */  POP R13
/* 052878b4 */  POP R14
/* 052878b6 */  POP R15
/* 052878b8 */  POP RBP
/* 052878b9 */  RET
/* 052878ba */  MOV EDI,0x4180
/* 052878bf */  XOR ESI,ESI
/* 052878c1 */  CALL 0x0eec74c0
/* 052878c6 */  JMP 0x052875f6
/* 052878cb */  MOV EDI,0x3160
/* 052878d0 */  XOR ESI,ESI
/* 052878d2 */  CALL 0x0eec74c0
/* 052878d7 */  JMP 0x05287848
