/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb32f20 (ELF vaddr 0xca32f20)
 * Label: WorldGenerator::vslot18
 * Body:  [[0cb32f20, 0cb330df]]
 * Ghidra: wg_WorldGenerator__vslot18
 */


void wg_WorldGenerator__vslot18(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_80;
  ulong uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long alStack_48 [4];
  long *plStack_28;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lStack_80 = *param_2;
  *param_2 = 0;
  uStack_78 = param_2[1];
  param_2[1] = 0;
  plStack_70 = (long *)param_2[2];
  lStack_68 = param_2[3];
  uStack_60 = (undefined4)param_2[4];
  if (lStack_68 != 0) {
    uVar4 = plStack_70[1];
    if ((uStack_78 & uStack_78 - 1) == 0) {
      uVar4 = uVar4 & uStack_78 - 1;
    }
    else if (uStack_78 <= uVar4) {
      if ((uVar4 | uStack_78) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (uStack_78 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 % uStack_78;
      }
    }
    *(long ***)(lStack_80 + uVar4 * 8) = &plStack_70;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    plStack_28 = (long *)0x0;
  }
  else if (plVar2 == param_3) {
    plStack_28 = alStack_48;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    param_3[4] = 0;
    plStack_28 = plVar2;
  }
  uStack_58 = *param_4;
  plStack_50 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  (**(code **)(*plVar1 + 0x90))(plVar1,&lStack_80,alStack_48,&uStack_58);
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      FUN_0412c2d0(plVar1);
    }
  }
  if (plStack_28 == alStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    lVar3 = lStack_80;
    plVar1 = plStack_70;
    if (plStack_28 == (long *)0x0) goto joined_r0x0cb330dc;
  }
  (**(code **)(*plStack_28 + lVar5))();
  lVar3 = lStack_80;
  plVar1 = plStack_70;
joined_r0x0cb330dc:
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    lStack_80 = lVar3;
    func_0x0412a280(plVar1,0x18);
    lVar3 = lStack_80;
    plVar1 = plVar2;
  }
  lStack_80 = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,uStack_78 << 3);
  }
  return;
}



/* ---- assembly ---- */
/* 0cb32f20 */  PUSH R14
/* 0cb32f22 */  PUSH RBX
/* 0cb32f23 */  SUB RSP,0x78
/* 0cb32f27 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb32f2b */  TEST RDI,RDI
/* 0cb32f2e */  JZ 0x0cb330a6
/* 0cb32f34 */  MOV R8,qword ptr [RSI]
/* 0cb32f37 */  MOV qword ptr [RSI],0x0
/* 0cb32f3e */  MOV qword ptr [RSP + 0x8],R8
/* 0cb32f43 */  MOV R10,qword ptr [RSI + 0x8]
/* 0cb32f47 */  MOV qword ptr [RSP + 0x10],R10
/* 0cb32f4c */  MOV qword ptr [RSI + 0x8],0x0
/* 0cb32f54 */  MOV RAX,qword ptr [RSI + 0x10]
/* 0cb32f58 */  MOV qword ptr [RSP + 0x18],RAX
/* 0cb32f5d */  MOV R9,qword ptr [RSI + 0x18]
/* 0cb32f61 */  MOV qword ptr [RSP + 0x20],R9
/* 0cb32f66 */  MOVSS XMM0,dword ptr [RSI + 0x20]
/* 0cb32f6b */  MOVSS dword ptr [RSP + 0x28],XMM0
/* 0cb32f71 */  TEST R9,R9
/* 0cb32f74 */  JZ 0x0cb32fc3
/* 0cb32f76 */  LEA R9,[RSP + 0x18]
/* 0cb32f7b */  ADD RSI,0x10
/* 0cb32f7f */  MOV RAX,qword ptr [RAX + 0x8]
/* 0cb32f83 */  LEA R11,[R10 + -0x1]
/* 0cb32f87 */  TEST R10,R11
/* 0cb32f8a */  JNZ 0x0cb32f91
/* 0cb32f8c */  AND RAX,R11
/* 0cb32f8f */  JMP 0x0cb32fb9
/* 0cb32f91 */  CMP RAX,R10
/* 0cb32f94 */  JC 0x0cb32fb9
/* 0cb32f96 */  MOV R11,RDX
/* 0cb32f99 */  MOV RDX,RAX
/* 0cb32f9c */  OR RDX,R10
/* 0cb32f9f */  SHR RDX,0x20
/* 0cb32fa3 */  JZ 0x0cb32faf
/* 0cb32fa5 */  XOR EDX,EDX
/* 0cb32fa7 */  DIV R10
/* 0cb32faa */  MOV RAX,RDX
/* 0cb32fad */  JMP 0x0cb32fb6
/* 0cb32faf */  XOR EDX,EDX
/* 0cb32fb1 */  DIV R10D
/* 0cb32fb4 */  MOV EAX,EDX
/* 0cb32fb6 */  MOV RDX,R11
/* 0cb32fb9 */  MOV qword ptr [R8 + RAX*0x8],R9
/* 0cb32fbd */  XORPS XMM0,XMM0
/* 0cb32fc0 */  MOVUPS xmmword ptr [RSI],XMM0
/* 0cb32fc3 */  MOV RAX,qword ptr [RDX + 0x20]
/* 0cb32fc7 */  TEST RAX,RAX
/* 0cb32fca */  JZ 0x0cb32fe0
/* 0cb32fcc */  CMP RAX,RDX
/* 0cb32fcf */  JZ 0x0cb32feb
/* 0cb32fd1 */  MOV qword ptr [RSP + 0x60],RAX
/* 0cb32fd6 */  MOV qword ptr [RDX + 0x20],0x0
/* 0cb32fde */  JMP 0x0cb3300a
/* 0cb32fe0 */  MOV qword ptr [RSP + 0x60],0x0
/* 0cb32fe9 */  JMP 0x0cb3300a
/* 0cb32feb */  LEA RSI,[RSP + 0x40]
/* 0cb32ff0 */  MOV qword ptr [RSP + 0x60],RSI
/* 0cb32ff5 */  MOV RDX,qword ptr [RAX]
/* 0cb32ff8 */  MOV RBX,RDI
/* 0cb32ffb */  MOV RDI,RAX
/* 0cb32ffe */  MOV R14,RCX
/* 0cb33001 */  CALL qword ptr [RDX + 0x18]
/* 0cb33004 */  MOV RCX,R14
/* 0cb33007 */  MOV RDI,RBX
/* 0cb3300a */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0cb3300d */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0cb33012 */  XORPS XMM0,XMM0
/* 0cb33015 */  MOVUPS xmmword ptr [RCX],XMM0
/* 0cb33018 */  MOV RAX,qword ptr [RDI]
/* 0cb3301b */  LEA RSI,[RSP + 0x8]
/* 0cb33020 */  LEA RBX,[RSP + 0x40]
/* 0cb33025 */  LEA RCX,[RSP + 0x30]
/* 0cb3302a */  MOV RDX,RBX
/* 0cb3302d */  CALL qword ptr [RAX + 0x90]
/* 0cb33033 */  MOV R14,qword ptr [RSP + 0x38]
/* 0cb33038 */  TEST R14,R14
/* 0cb3303b */  JZ 0x0cb3304f
/* 0cb3303d */  MOV RAX,-0x1
/* 0cb33044 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3304a */  TEST RAX,RAX
/* 0cb3304d */  JZ 0x0cb330ae
/* 0cb3304f */  MOV RDI,qword ptr [RSP + 0x60]
/* 0cb33054 */  CMP RDI,RBX
/* 0cb33057 */  JZ 0x0cb330c9
/* 0cb33059 */  MOV EAX,0x28
/* 0cb3305e */  TEST RDI,RDI
/* 0cb33061 */  JNZ 0x0cb330ce
/* 0cb33063 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0cb33068 */  TEST RDI,RDI
/* 0cb3306b */  JZ 0x0cb33085
/* 0cb3306d */  NOP dword ptr [RAX]
/* 0cb33070 */  MOV RBX,qword ptr [RDI]
/* 0cb33073 */  MOV ESI,0x18
/* 0cb33078 */  CALL 0x0412a280
/* 0cb3307d */  MOV RDI,RBX
/* 0cb33080 */  TEST RBX,RBX
/* 0cb33083 */  JNZ 0x0cb33070
/* 0cb33085 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0cb3308a */  MOV qword ptr [RSP + 0x8],0x0
/* 0cb33093 */  TEST RDI,RDI
/* 0cb33096 */  JZ 0x0cb330a6
/* 0cb33098 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0cb3309d */  SHL RSI,0x3
/* 0cb330a1 */  CALL 0x0412a280
/* 0cb330a6 */  ADD RSP,0x78
/* 0cb330aa */  POP RBX
/* 0cb330ab */  POP R14
/* 0cb330ad */  RET
/* 0cb330ae */  MOV RAX,qword ptr [R14]
/* 0cb330b1 */  MOV RDI,R14
/* 0cb330b4 */  CALL qword ptr [RAX + 0x10]
/* 0cb330b7 */  MOV RDI,R14
/* 0cb330ba */  CALL 0x0412c2d0
/* 0cb330bf */  MOV RDI,qword ptr [RSP + 0x60]
/* 0cb330c4 */  CMP RDI,RBX
/* 0cb330c7 */  JNZ 0x0cb33059
/* 0cb330c9 */  MOV EAX,0x20
/* 0cb330ce */  MOV RCX,qword ptr [RDI]
/* 0cb330d1 */  CALL qword ptr [RCX + RAX*0x1]
/* 0cb330d4 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0cb330d9 */  TEST RDI,RDI
/* 0cb330dc */  JNZ 0x0cb33070
/* 0cb330de */  JMP 0x0cb33085
