/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c7010 (ELF vaddr 0xc5c7010)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c6c7010, 0c6c764d]]
 * Ghidra: FUN_0c6c7010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6c7010(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte bStack_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  byte bStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte bStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  *param_1 = &UNK_0f3c5330;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((long)param_1 + 0x72) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x40000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 5;
  *(undefined2 *)((long)param_1 + 0x133) = 0x9680;
  *(byte *)((long)param_1 + 0x135) = (*(byte *)((long)param_1 + 0x135) & 0xf0) + 1;
  *(undefined8 *)((long)param_1 + 0x136) = 0;
  *(undefined8 *)((long)param_1 + 0x13e) = 0;
  *(undefined2 *)((long)param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f19999a;
  *(undefined2 *)((long)param_1 + 0x14c) = 0;
  *(undefined2 *)((long)param_1 + 0x14e) = param_3;
  *(undefined8 *)((long)param_1 + 0x159) = 0;
  *(undefined8 *)((long)param_1 + 0x161) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  uVar5 = _DAT_0f72b534;
  uVar4 = _DAT_0f72b530;
  uVar3 = uRam000000000f72b52c;
  *(undefined4 *)(param_1 + 0x31) = _DAT_0f72b528;
  *(undefined4 *)((long)param_1 + 0x18c) = uVar3;
  *(undefined4 *)(param_1 + 0x32) = uVar4;
  *(undefined4 *)((long)param_1 + 0x194) = uVar5;
  param_1[0x33] = _DAT_0f72b538;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = param_1 + 0x36;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  func_0x0412d440(param_1 + 0x44);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 1;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)((long)param_1 + 0x33a) = 1;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((long)param_1 + 0x359) = 0;
  *(undefined8 *)((long)param_1 + 0x361) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0xf;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) | 6;
  func_0x0c6c77f0(&uStack_b0,param_2);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    func_0x0412a280(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
  }
  param_1[0x14] = uStack_98;
  *(uint *)(param_1 + 0x12) = CONCAT22(uStack_a6,CONCAT11(uStack_a7,bStack_a8));
  *(undefined4 *)((long)param_1 + 0x94) = uStack_a4;
  *(undefined4 *)(param_1 + 0x13) = uStack_a0;
  *(undefined4 *)((long)param_1 + 0x9c) = uStack_9c;
  bStack_a8 = 0;
  uStack_a7 = 0;
  param_1[0x11] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x15] = 0;
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    func_0x0412a280(param_1[0x18],param_1[0x16] & 0xfffffffffffffffe);
  }
  param_1[0x18] = uStack_78;
  *(uint *)(param_1 + 0x16) = CONCAT22(uStack_86,CONCAT11(uStack_87,bStack_88));
  *(undefined4 *)((long)param_1 + 0xb4) = uStack_84;
  *(undefined4 *)(param_1 + 0x17) = uStack_80;
  *(undefined4 *)((long)param_1 + 0xbc) = uStack_7c;
  bStack_88 = 0;
  uStack_87 = 0;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    func_0x0412a280(param_1[0x1c],param_1[0x1a] & 0xfffffffffffffffe);
  }
  param_1[0x1c] = uStack_58;
  *(uint *)(param_1 + 0x1a) = CONCAT22(uStack_66,CONCAT11(uStack_67,bStack_68));
  *(undefined4 *)((long)param_1 + 0xd4) = uStack_64;
  *(undefined4 *)(param_1 + 0x1b) = uStack_60;
  *(undefined4 *)((long)param_1 + 0xdc) = uStack_5c;
  bStack_68 = 0;
  uStack_67 = 0;
  param_1[0x19] = uStack_70;
  param_1[0x1d] = 0;
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    param_1[0x20] = uStack_38;
    *(uint *)(param_1 + 0x1e) = uStack_48;
    *(undefined4 *)((long)param_1 + 0xf4) = uStack_44;
    *(undefined4 *)(param_1 + 0x1f) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xfc) = uStack_3c;
    uStack_48 = uStack_48 & 0xffff0000;
joined_r0x0c6c747d:
    if ((bStack_88 & 1) != 0) goto LAB_0c6c7399;
LAB_0c6c7435:
    if ((bStack_a8 & 1) != 0) goto LAB_0c6c73b7;
LAB_0c6c7440:
    bVar6 = *(byte *)(param_1 + 0x16);
    if ((bVar6 & 1) == 0) goto LAB_0c6c73d5;
LAB_0c6c744b:
    if (param_1[0x17] == 9) goto LAB_0c6c7458;
LAB_0c6c74a9:
    lVar7 = 200;
  }
  else {
    func_0x0412a280(param_1[0x20],param_1[0x1e] & 0xfffffffffffffffe);
    param_1[0x20] = uStack_38;
    *(uint *)(param_1 + 0x1e) = uStack_48;
    *(undefined4 *)((long)param_1 + 0xf4) = uStack_44;
    *(undefined4 *)(param_1 + 0x1f) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xfc) = uStack_3c;
    uStack_48 = uStack_48 & 0xffff0000;
    if ((bStack_68 & 1) != 0) {
      func_0x0412a280(uStack_58,
                      CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(uStack_67,bStack_68))) &
                      0xfffffffffffffffe);
      goto joined_r0x0c6c747d;
    }
    if ((bStack_88 & 1) == 0) goto LAB_0c6c7435;
LAB_0c6c7399:
    func_0x0412a280(uStack_78,
                    CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                    0xfffffffffffffffe);
    if ((bStack_a8 & 1) == 0) goto LAB_0c6c7440;
LAB_0c6c73b7:
    func_0x0412a280(uStack_98,
                    CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,bStack_a8))) &
                    0xfffffffffffffffe);
    bVar6 = *(byte *)(param_1 + 0x16);
    if ((bVar6 & 1) != 0) goto LAB_0c6c744b;
LAB_0c6c73d5:
    if (bVar6 >> 1 != 9) goto LAB_0c6c74a9;
LAB_0c6c7458:
    if ((bVar6 & 1) == 0) {
      plVar9 = (long *)((long)param_1 + 0xb1);
    }
    else {
      plVar9 = (long *)param_1[0x18];
    }
    if ((char)plVar9[1] != 't' || *plVar9 != 0x66617263656e696d) goto LAB_0c6c74a9;
    lVar7 = 0x88;
  }
  func_0x0c6c8740(&uStack_b0,&UNK_0f3c5758,(long)param_1 + lVar7 + 8);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    func_0x0412a280(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  param_1[3] = CONCAT44(uStack_9c,uStack_a0);
  *(undefined4 *)(param_1 + 1) = uStack_b0;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
  *(uint *)(param_1 + 2) = CONCAT22(uStack_a6,CONCAT11(uStack_a7,bStack_a8));
  *(undefined4 *)((long)param_1 + 0x14) = uStack_a4;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar8 = param_1 + 0x6d;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f3c9ea0;
  plVar9[3] = (long)puVar8;
  param_1[0x71] = puVar8;
  plVar1 = (long *)param_1[0x72];
  param_1[0x72] = plVar9;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar9 = plVar1 + 1;
    lVar7 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
      puVar8 = (undefined8 *)param_1[0x71];
      plVar9 = (long *)param_1[0x72];
    }
    else {
      puVar8 = (undefined8 *)param_1[0x71];
      plVar9 = (long *)param_1[0x72];
    }
    if (plVar9 == (long *)0x0) {
      bVar2 = true;
      plVar9 = (long *)0x0;
      goto LAB_0c6c75ca;
    }
  }
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  LOCK();
  plVar9[2] = plVar9[2] + 1;
  UNLOCK();
  bVar2 = false;
LAB_0c6c75ca:
  param_1[0xf] = puVar8;
  lVar7 = param_1[0x10];
  param_1[0x10] = plVar9;
  if (lVar7 != 0) {
    func_0x0412c2d0();
  }
  if (!bVar2) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0c6c7010 */  PUSH RBP
/* 0c6c7011 */  PUSH R15
/* 0c6c7013 */  PUSH R14
/* 0c6c7015 */  PUSH R13
/* 0c6c7017 */  PUSH R12
/* 0c6c7019 */  PUSH RBX
/* 0c6c701a */  SUB RSP,0x98
/* 0c6c7021 */  MOV R12,RSI
/* 0c6c7024 */  MOV RBX,RDI
/* 0c6c7027 */  LEA RAX,[0xf3c5330]
/* 0c6c702e */  MOV qword ptr [RDI],RAX
/* 0c6c7031 */  LEA RBP,[RDI + 0x8]
/* 0c6c7035 */  XORPS XMM1,XMM1
/* 0c6c7038 */  MOVUPS xmmword ptr [RDI + 0x8],XMM1
/* 0c6c703c */  MOV qword ptr [RDI + 0x18],0x0
/* 0c6c7044 */  MOV qword ptr [RDI + 0x20],RCX
/* 0c6c7048 */  MOVUPS xmmword ptr [RDI + 0x28],XMM1
/* 0c6c704c */  MOVUPS xmmword ptr [RDI + 0x38],XMM1
/* 0c6c7050 */  MOVUPS xmmword ptr [RDI + 0x48],XMM1
/* 0c6c7054 */  MOVUPS xmmword ptr [RDI + 0x58],XMM1
/* 0c6c7058 */  MOV qword ptr [RDI + 0x68],0x0
/* 0c6c7060 */  MOV word ptr [RDI + 0x70],0x1
/* 0c6c7066 */  MOV byte ptr [RDI + 0x72],0x0
/* 0c6c706a */  MOVUPS xmmword ptr [RDI + 0x78],XMM1
/* 0c6c706e */  MOVUPS xmmword ptr [RDI + 0x88],XMM1
/* 0c6c7075 */  MOVUPS xmmword ptr [RDI + 0x98],XMM1
/* 0c6c707c */  MOVUPS xmmword ptr [RDI + 0xa8],XMM1
/* 0c6c7083 */  MOVUPS xmmword ptr [RDI + 0xb8],XMM1
/* 0c6c708a */  MOVUPS xmmword ptr [RDI + 0xc8],XMM1
/* 0c6c7091 */  MOVUPS xmmword ptr [RDI + 0xd8],XMM1
/* 0c6c7098 */  MOVUPS xmmword ptr [RDI + 0xe8],XMM1
/* 0c6c709f */  MOVUPS xmmword ptr [RDI + 0xf8],XMM1
/* 0c6c70a6 */  MOV qword ptr [RDI + 0x108],0x40000
/* 0c6c70b1 */  MOVUPS xmmword ptr [RDI + 0x120],XMM1
/* 0c6c70b8 */  MOVUPS xmmword ptr [RDI + 0x110],XMM1
/* 0c6c70bf */  MOV word ptr [RDI + 0x130],0x0
/* 0c6c70c8 */  MOV byte ptr [RDI + 0x132],0x5
/* 0c6c70cf */  MOV word ptr [RDI + 0x133],0x9680
/* 0c6c70d8 */  MOVZX EAX,byte ptr [RDI + 0x135]
/* 0c6c70df */  AND AL,0xf0
/* 0c6c70e1 */  INC AL
/* 0c6c70e3 */  MOV byte ptr [RDI + 0x135],AL
/* 0c6c70e9 */  MOVUPS xmmword ptr [RDI + 0x136],XMM1
/* 0c6c70f0 */  MOV word ptr [RDI + 0x146],0x0
/* 0c6c70f9 */  MOV dword ptr [RDI + 0x148],0x3f19999a
/* 0c6c7103 */  MOV word ptr [RDI + 0x14c],0x0
/* 0c6c710c */  MOV word ptr [RDI + 0x14e],DX
/* 0c6c7113 */  MOVUPS xmmword ptr [RDI + 0x159],XMM1
/* 0c6c711a */  MOVUPS xmmword ptr [RDI + 0x150],XMM1
/* 0c6c7121 */  MOVUPS xmmword ptr [RDI + 0x170],XMM1
/* 0c6c7128 */  MOV qword ptr [RDI + 0x180],0x0
/* 0c6c7133 */  MOVUPS XMM0,xmmword ptr [0x0f72b528]
/* 0c6c713a */  MOVUPS xmmword ptr [RDI + 0x188],XMM0
/* 0c6c7141 */  MOV RAX,qword ptr [0x0f72b538]
/* 0c6c7148 */  MOV qword ptr [RDI + 0x198],RAX
/* 0c6c714f */  MOV qword ptr [RDI + 0x1a0],0x0
/* 0c6c715a */  LEA RAX,[RDI + 0x1b0]
/* 0c6c7161 */  MOVUPS xmmword ptr [RDI + 0x1b0],XMM1
/* 0c6c7168 */  MOV qword ptr [RDI + 0x1a8],RAX
/* 0c6c716f */  MOVUPS xmmword ptr [RDI + 0x1d0],XMM1
/* 0c6c7176 */  MOVUPS xmmword ptr [RDI + 0x1c0],XMM1
/* 0c6c717d */  MOV dword ptr [RDI + 0x1e0],0x3f800000
/* 0c6c7187 */  LEA R14,[RDI + 0x220]
/* 0c6c718e */  MOVUPS xmmword ptr [RDI + 0x1e8],XMM1
/* 0c6c7195 */  MOVUPS xmmword ptr [RDI + 0x1f8],XMM1
/* 0c6c719c */  MOVUPS xmmword ptr [RDI + 0x208],XMM1
/* 0c6c71a3 */  MOV qword ptr [RDI + 0x218],0x0
/* 0c6c71ae */  MOV RDI,R14
/* 0c6c71b1 */  CALL 0x0412d440
/* 0c6c71b6 */  XORPS XMM0,XMM0
/* 0c6c71b9 */  MOVUPS xmmword ptr [RBX + 0x2c0],XMM0
/* 0c6c71c0 */  MOVUPS xmmword ptr [RBX + 0x2b0],XMM0
/* 0c6c71c7 */  MOV dword ptr [RBX + 0x2d0],0x3f800000
/* 0c6c71d1 */  MOVUPS xmmword ptr [RBX + 0x2d8],XMM0
/* 0c6c71d8 */  MOVUPS xmmword ptr [RBX + 0x2e8],XMM0
/* 0c6c71df */  MOVUPS xmmword ptr [RBX + 0x2f8],XMM0
/* 0c6c71e6 */  MOVUPS xmmword ptr [RBX + 0x308],XMM0
/* 0c6c71ed */  MOVUPS xmmword ptr [RBX + 0x318],XMM0
/* 0c6c71f4 */  MOVUPS xmmword ptr [RBX + 0x328],XMM0
/* 0c6c71fb */  MOV word ptr [RBX + 0x338],0x1
/* 0c6c7204 */  MOVUPS xmmword ptr [RBX + 0x340],XMM0
/* 0c6c720b */  MOV byte ptr [RBX + 0x33a],0x1
/* 0c6c7212 */  LEA R15,[RBX + 0x368]
/* 0c6c7219 */  MOVUPS xmmword ptr [RBX + 0x350],XMM0
/* 0c6c7220 */  MOVUPS xmmword ptr [RBX + 0x359],XMM0
/* 0c6c7227 */  MOVUPS xmmword ptr [RBX + 0x370],XMM0
/* 0c6c722e */  MOVUPS xmmword ptr [RBX + 0x380],XMM0
/* 0c6c7235 */  MOVUPS xmmword ptr [RBX + 0x390],XMM0
/* 0c6c723c */  MOV qword ptr [RBX + 0x3a0],0x0
/* 0c6c7247 */  MOV byte ptr [RBX + 0x136],0xf
/* 0c6c724e */  OR byte ptr [RBX + 0x134],0x6
/* 0c6c7255 */  LEA RDI,[RSP + 0x18]
/* 0c6c725a */  MOV RSI,R12
/* 0c6c725d */  CALL 0x0c6c77f0
/* 0c6c7262 */  LEA R12,[RBX + 0x90]
/* 0c6c7269 */  TEST byte ptr [RBX + 0x90],0x1
/* 0c6c7270 */  JZ 0x0c6c7289
/* 0c6c7272 */  MOV RSI,qword ptr [RBX + 0x90]
/* 0c6c7279 */  MOV RDI,qword ptr [RBX + 0xa0]
/* 0c6c7280 */  AND RSI,-0x2
/* 0c6c7284 */  CALL 0x0412a280
/* 0c6c7289 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0c6c728e */  MOV qword ptr [R12 + 0x10],RAX
/* 0c6c7293 */  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
/* 0c6c7298 */  MOVUPS xmmword ptr [R12],XMM0
/* 0c6c729d */  MOV word ptr [RSP + 0x20],0x0
/* 0c6c72a4 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0c6c72a9 */  MOV qword ptr [RBX + 0x88],RAX
/* 0c6c72b0 */  MOV qword ptr [RBX + 0xa8],0x0
/* 0c6c72bb */  LEA R12,[RBX + 0xb0]
/* 0c6c72c2 */  LEA R13,[RSP + 0x40]
/* 0c6c72c7 */  TEST byte ptr [RBX + 0xb0],0x1
/* 0c6c72ce */  JZ 0x0c6c72e7
/* 0c6c72d0 */  MOV RSI,qword ptr [RBX + 0xb0]
/* 0c6c72d7 */  MOV RDI,qword ptr [RBX + 0xc0]
/* 0c6c72de */  AND RSI,-0x2
/* 0c6c72e2 */  CALL 0x0412a280
/* 0c6c72e7 */  MOV RAX,qword ptr [R13 + 0x10]
/* 0c6c72eb */  MOV qword ptr [R12 + 0x10],RAX
/* 0c6c72f0 */  MOVUPS XMM0,xmmword ptr [R13]
/* 0c6c72f5 */  MOVUPS xmmword ptr [R12],XMM0
/* 0c6c72fa */  MOV word ptr [RSP + 0x40],0x0
/* 0c6c7301 */  LEA R12,[RBX + 0xd0]
/* 0c6c7308 */  TEST byte ptr [RBX + 0xd0],0x1
/* 0c6c730f */  JZ 0x0c6c7328
/* 0c6c7311 */  MOV RSI,qword ptr [RBX + 0xd0]
/* 0c6c7318 */  MOV RDI,qword ptr [RBX + 0xe0]
/* 0c6c731f */  AND RSI,-0x2
/* 0c6c7323 */  CALL 0x0412a280
/* 0c6c7328 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0c6c732d */  MOV qword ptr [R12 + 0x10],RAX
/* 0c6c7332 */  MOVUPS XMM0,xmmword ptr [RSP + 0x60]
/* 0c6c7337 */  MOVUPS xmmword ptr [R12],XMM0
/* 0c6c733c */  MOV word ptr [RSP + 0x60],0x0
/* 0c6c7343 */  MOV RAX,qword ptr [RSP + 0x58]
/* 0c6c7348 */  MOV qword ptr [RBX + 0xc8],RAX
/* 0c6c734f */  MOV qword ptr [RBX + 0xe8],0x0
/* 0c6c735a */  LEA R12,[RBX + 0xf0]
/* 0c6c7361 */  TEST byte ptr [RBX + 0xf0],0x1
/* 0c6c7368 */  JNZ 0x0c6c73e8
/* 0c6c736a */  MOV RAX,qword ptr [RSP + 0x90]
/* 0c6c7372 */  MOV qword ptr [R12 + 0x10],RAX
/* 0c6c7377 */  MOVUPS XMM0,xmmword ptr [RSP + 0x80]
/* 0c6c737f */  MOVUPS xmmword ptr [R12],XMM0
/* 0c6c7384 */  MOV word ptr [RSP + 0x80],0x0
/* 0c6c738e */  TEST byte ptr [RSP + 0x40],0x1
/* 0c6c7393 */  JZ 0x0c6c7435
/* 0c6c7399 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0c6c739e */  MOV RDI,qword ptr [RSP + 0x50]
/* 0c6c73a3 */  AND RSI,-0x2
/* 0c6c73a7 */  CALL 0x0412a280
/* 0c6c73ac */  TEST byte ptr [RSP + 0x20],0x1
/* 0c6c73b1 */  JZ 0x0c6c7440
/* 0c6c73b7 */  MOV RSI,qword ptr [RSP + 0x20]
/* 0c6c73bc */  MOV RDI,qword ptr [RSP + 0x30]
/* 0c6c73c1 */  AND RSI,-0x2
/* 0c6c73c5 */  CALL 0x0412a280
/* 0c6c73ca */  MOVZX EAX,byte ptr [RBX + 0xb0]
/* 0c6c73d1 */  TEST AL,0x1
/* 0c6c73d3 */  JNZ 0x0c6c744b
/* 0c6c73d5 */  MOV ECX,EAX
/* 0c6c73d7 */  SHR CL,0x1
/* 0c6c73d9 */  MOVZX ECX,CL
/* 0c6c73dc */  CMP RCX,0x9
/* 0c6c73e0 */  JNZ 0x0c6c74a9
/* 0c6c73e6 */  JMP 0x0c6c7458
/* 0c6c73e8 */  MOV RSI,qword ptr [RBX + 0xf0]
/* 0c6c73ef */  MOV RDI,qword ptr [RBX + 0x100]
/* 0c6c73f6 */  AND RSI,-0x2
/* 0c6c73fa */  CALL 0x0412a280
/* 0c6c73ff */  TEST byte ptr [RSP + 0x60],0x1
/* 0c6c7404 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0c6c740c */  MOV qword ptr [R12 + 0x10],RAX
/* 0c6c7411 */  MOVUPS XMM0,xmmword ptr [RSP + 0x80]
/* 0c6c7419 */  MOVUPS xmmword ptr [R12],XMM0
/* 0c6c741e */  MOV word ptr [RSP + 0x80],0x0
/* 0c6c7428 */  JNZ 0x0c6c7465
/* 0c6c742a */  TEST byte ptr [RSP + 0x40],0x1
/* 0c6c742f */  JNZ 0x0c6c7399
/* 0c6c7435 */  TEST byte ptr [RSP + 0x20],0x1
/* 0c6c743a */  JNZ 0x0c6c73b7
/* 0c6c7440 */  MOVZX EAX,byte ptr [RBX + 0xb0]
/* 0c6c7447 */  TEST AL,0x1
/* 0c6c7449 */  JZ 0x0c6c73d5
/* 0c6c744b */  MOV RCX,qword ptr [RBX + 0xb8]
/* 0c6c7452 */  CMP RCX,0x9
/* 0c6c7456 */  JNZ 0x0c6c74a9
/* 0c6c7458 */  TEST AL,0x1
/* 0c6c745a */  JZ 0x0c6c7484
/* 0c6c745c */  MOV RAX,qword ptr [RBX + 0xc0]
/* 0c6c7463 */  JMP 0x0c6c748b
/* 0c6c7465 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0c6c746a */  MOV RDI,qword ptr [RSP + 0x70]
/* 0c6c746f */  AND RSI,-0x2
/* 0c6c7473 */  CALL 0x0412a280
/* 0c6c7478 */  TEST byte ptr [RSP + 0x40],0x1
/* 0c6c747d */  JZ 0x0c6c7435
/* 0c6c747f */  JMP 0x0c6c7399
/* 0c6c7484 */  LEA RAX,[RBX + 0xb1]
/* 0c6c748b */  MOV RCX,0x66617263656e696d
/* 0c6c7495 */  XOR RCX,qword ptr [RAX]
/* 0c6c7498 */  MOVZX EAX,byte ptr [RAX + 0x8]
/* 0c6c749c */  XOR RAX,0x74
/* 0c6c74a0 */  OR RAX,RCX
/* 0c6c74a3 */  JZ 0x0c6c7622
/* 0c6c74a9 */  MOV EAX,0xc8
/* 0c6c74ae */  LEA RDX,[RBX + RAX*0x1]
/* 0c6c74b2 */  ADD RDX,0x8
/* 0c6c74b6 */  LEA RSI,[0xf3c5758]
/* 0c6c74bd */  LEA RDI,[RSP + 0x18]
/* 0c6c74c2 */  CALL 0x0c6c8740
/* 0c6c74c7 */  TEST byte ptr [RBP],0x1
/* 0c6c74cb */  JZ 0x0c6c74de
/* 0c6c74cd */  MOV RSI,qword ptr [RBX + 0x8]
/* 0c6c74d1 */  MOV RDI,qword ptr [RBX + 0x18]
/* 0c6c74d5 */  AND RSI,-0x2
/* 0c6c74d9 */  CALL 0x0412a280
/* 0c6c74de */  MOV RAX,qword ptr [RSP + 0x28]
/* 0c6c74e3 */  MOV qword ptr [RBP + 0x10],RAX
/* 0c6c74e7 */  MOVUPS XMM0,xmmword ptr [RSP + 0x18]
/* 0c6c74ec */  MOVUPS xmmword ptr [RBP],XMM0
/* 0c6c74f0 */  LEA RDI,[0xf5463b0]
/* 0c6c74f7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c6c74fe */  MOV ESI,0x8
/* 0c6c7503 */  CALL qword ptr [RAX + 0x10]
/* 0c6c7506 */  MOV R13,RAX
/* 0c6c7509 */  TEST RAX,RAX
/* 0c6c750c */  JZ 0x0c6c762c
/* 0c6c7512 */  MOV qword ptr [R13],R15
/* 0c6c7516 */  LEA RDI,[0xf5463b0]
/* 0c6c751d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0c6c7524 */  MOV ESI,0x20
/* 0c6c7529 */  CALL qword ptr [RAX + 0x10]
/* 0c6c752c */  MOV R12,RAX
/* 0c6c752f */  TEST RAX,RAX
/* 0c6c7532 */  JZ 0x0c6c763d
/* 0c6c7538 */  XORPS XMM0,XMM0
/* 0c6c753b */  MOVUPS xmmword ptr [R12 + 0x8],XMM0
/* 0c6c7541 */  LEA RAX,[0xf3c9ea0]
/* 0c6c7548 */  MOV qword ptr [R12],RAX
/* 0c6c754c */  MOV qword ptr [R12 + 0x18],R13
/* 0c6c7551 */  MOV qword ptr [RBX + 0x388],R13
/* 0c6c7558 */  MOV R14,qword ptr [RBX + 0x390]
/* 0c6c755f */  MOV qword ptr [RBX + 0x390],R12
/* 0c6c7566 */  TEST R14,R14
/* 0c6c7569 */  JZ 0x0c6c7590
/* 0c6c756b */  MOV RAX,-0x1
/* 0c6c7572 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0c6c7578 */  TEST RAX,RAX
/* 0c6c757b */  JZ 0x0c6c75a0
/* 0c6c757d */  MOV R13,qword ptr [RBX + 0x388]
/* 0c6c7584 */  MOV R12,qword ptr [RBX + 0x390]
/* 0c6c758b */  TEST R12,R12
/* 0c6c758e */  JZ 0x0c6c75c4
/* 0c6c7590 */  INC.LOCK qword ptr [R12 + 0x8]
/* 0c6c7596 */  INC.LOCK qword ptr [R12 + 0x10]
/* 0c6c759c */  XOR EBP,EBP
/* 0c6c759e */  JMP 0x0c6c75ca
/* 0c6c75a0 */  MOV RAX,qword ptr [R14]
/* 0c6c75a3 */  MOV RDI,R14
/* 0c6c75a6 */  CALL qword ptr [RAX + 0x10]
/* 0c6c75a9 */  MOV RDI,R14
/* 0c6c75ac */  CALL 0x0412c2d0
/* 0c6c75b1 */  MOV R13,qword ptr [RBX + 0x388]
/* 0c6c75b8 */  MOV R12,qword ptr [RBX + 0x390]
/* 0c6c75bf */  TEST R12,R12
/* 0c6c75c2 */  JNZ 0x0c6c7590
/* 0c6c75c4 */  MOV BPL,0x1
/* 0c6c75c7 */  XOR R12D,R12D
/* 0c6c75ca */  MOV qword ptr [RBX + 0x78],R13
/* 0c6c75ce */  MOV RDI,qword ptr [RBX + 0x80]
/* 0c6c75d5 */  MOV qword ptr [RBX + 0x80],R12
/* 0c6c75dc */  TEST RDI,RDI
/* 0c6c75df */  JZ 0x0c6c75e6
/* 0c6c75e1 */  CALL 0x0412c2d0
/* 0c6c75e6 */  TEST BPL,BPL
/* 0c6c75e9 */  JNZ 0x0c6c7610
/* 0c6c75eb */  MOV RAX,-0x1
/* 0c6c75f2 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0c6c75f9 */  TEST RAX,RAX
/* 0c6c75fc */  JNZ 0x0c6c7610
/* 0c6c75fe */  MOV RAX,qword ptr [R12]
/* 0c6c7602 */  MOV RDI,R12
/* 0c6c7605 */  CALL qword ptr [RAX + 0x10]
/* 0c6c7608 */  MOV RDI,R12
/* 0c6c760b */  CALL 0x0412c2d0
/* 0c6c7610 */  ADD RSP,0x98
/* 0c6c7617 */  POP RBX
/* 0c6c7618 */  POP R12
/* 0c6c761a */  POP R13
/* 0c6c761c */  POP R14
/* 0c6c761e */  POP R15
/* 0c6c7620 */  POP RBP
/* 0c6c7621 */  RET
/* 0c6c7622 */  MOV EAX,0x88
/* 0c6c7627 */  JMP 0x0c6c74ae
/* 0c6c762c */  MOV EDI,0x8
/* 0c6c7631 */  XOR ESI,ESI
/* 0c6c7633 */  CALL 0x0eec74c0
/* 0c6c7638 */  JMP 0x0c6c7512
/* 0c6c763d */  MOV EDI,0x20
/* 0c6c7642 */  XOR ESI,ESI
/* 0c6c7644 */  CALL 0x0eec74c0
/* 0c6c7649 */  JMP 0x0c6c7538
