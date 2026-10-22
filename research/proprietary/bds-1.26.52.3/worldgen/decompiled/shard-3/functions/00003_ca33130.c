/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb33130 (ELF vaddr 0xca33130)
 * Label: WorldGenerator::vslot19
 * Body:  [[0cb33130, 0cb332ef]]
 * Ghidra: wg_WorldGenerator__vslot19
 */


void wg_WorldGenerator__vslot19(long param_1,long *param_2,long *param_3,undefined8 *param_4)

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
  (**(code **)(*plVar1 + 0x98))(plVar1,&lStack_80,alStack_48,&uStack_58);
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
    if (plStack_28 == (long *)0x0) goto joined_r0x0cb332ec;
  }
  (**(code **)(*plStack_28 + lVar5))();
  lVar3 = lStack_80;
  plVar1 = plStack_70;
joined_r0x0cb332ec:
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
/* 0cb33130 */  PUSH R14
/* 0cb33132 */  PUSH RBX
/* 0cb33133 */  SUB RSP,0x78
/* 0cb33137 */  MOV RDI,qword ptr [RDI + 0x30]
/* 0cb3313b */  TEST RDI,RDI
/* 0cb3313e */  JZ 0x0cb332b6
/* 0cb33144 */  MOV R8,qword ptr [RSI]
/* 0cb33147 */  MOV qword ptr [RSI],0x0
/* 0cb3314e */  MOV qword ptr [RSP + 0x8],R8
/* 0cb33153 */  MOV R10,qword ptr [RSI + 0x8]
/* 0cb33157 */  MOV qword ptr [RSP + 0x10],R10
/* 0cb3315c */  MOV qword ptr [RSI + 0x8],0x0
/* 0cb33164 */  MOV RAX,qword ptr [RSI + 0x10]
/* 0cb33168 */  MOV qword ptr [RSP + 0x18],RAX
/* 0cb3316d */  MOV R9,qword ptr [RSI + 0x18]
/* 0cb33171 */  MOV qword ptr [RSP + 0x20],R9
/* 0cb33176 */  MOVSS XMM0,dword ptr [RSI + 0x20]
/* 0cb3317b */  MOVSS dword ptr [RSP + 0x28],XMM0
/* 0cb33181 */  TEST R9,R9
/* 0cb33184 */  JZ 0x0cb331d3
/* 0cb33186 */  LEA R9,[RSP + 0x18]
/* 0cb3318b */  ADD RSI,0x10
/* 0cb3318f */  MOV RAX,qword ptr [RAX + 0x8]
/* 0cb33193 */  LEA R11,[R10 + -0x1]
/* 0cb33197 */  TEST R10,R11
/* 0cb3319a */  JNZ 0x0cb331a1
/* 0cb3319c */  AND RAX,R11
/* 0cb3319f */  JMP 0x0cb331c9
/* 0cb331a1 */  CMP RAX,R10
/* 0cb331a4 */  JC 0x0cb331c9
/* 0cb331a6 */  MOV R11,RDX
/* 0cb331a9 */  MOV RDX,RAX
/* 0cb331ac */  OR RDX,R10
/* 0cb331af */  SHR RDX,0x20
/* 0cb331b3 */  JZ 0x0cb331bf
/* 0cb331b5 */  XOR EDX,EDX
/* 0cb331b7 */  DIV R10
/* 0cb331ba */  MOV RAX,RDX
/* 0cb331bd */  JMP 0x0cb331c6
/* 0cb331bf */  XOR EDX,EDX
/* 0cb331c1 */  DIV R10D
/* 0cb331c4 */  MOV EAX,EDX
/* 0cb331c6 */  MOV RDX,R11
/* 0cb331c9 */  MOV qword ptr [R8 + RAX*0x8],R9
/* 0cb331cd */  XORPS XMM0,XMM0
/* 0cb331d0 */  MOVUPS xmmword ptr [RSI],XMM0
/* 0cb331d3 */  MOV RAX,qword ptr [RDX + 0x20]
/* 0cb331d7 */  TEST RAX,RAX
/* 0cb331da */  JZ 0x0cb331f0
/* 0cb331dc */  CMP RAX,RDX
/* 0cb331df */  JZ 0x0cb331fb
/* 0cb331e1 */  MOV qword ptr [RSP + 0x60],RAX
/* 0cb331e6 */  MOV qword ptr [RDX + 0x20],0x0
/* 0cb331ee */  JMP 0x0cb3321a
/* 0cb331f0 */  MOV qword ptr [RSP + 0x60],0x0
/* 0cb331f9 */  JMP 0x0cb3321a
/* 0cb331fb */  LEA RSI,[RSP + 0x40]
/* 0cb33200 */  MOV qword ptr [RSP + 0x60],RSI
/* 0cb33205 */  MOV RDX,qword ptr [RAX]
/* 0cb33208 */  MOV RBX,RDI
/* 0cb3320b */  MOV RDI,RAX
/* 0cb3320e */  MOV R14,RCX
/* 0cb33211 */  CALL qword ptr [RDX + 0x18]
/* 0cb33214 */  MOV RCX,R14
/* 0cb33217 */  MOV RDI,RBX
/* 0cb3321a */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0cb3321d */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0cb33222 */  XORPS XMM0,XMM0
/* 0cb33225 */  MOVUPS xmmword ptr [RCX],XMM0
/* 0cb33228 */  MOV RAX,qword ptr [RDI]
/* 0cb3322b */  LEA RSI,[RSP + 0x8]
/* 0cb33230 */  LEA RBX,[RSP + 0x40]
/* 0cb33235 */  LEA RCX,[RSP + 0x30]
/* 0cb3323a */  MOV RDX,RBX
/* 0cb3323d */  CALL qword ptr [RAX + 0x98]
/* 0cb33243 */  MOV R14,qword ptr [RSP + 0x38]
/* 0cb33248 */  TEST R14,R14
/* 0cb3324b */  JZ 0x0cb3325f
/* 0cb3324d */  MOV RAX,-0x1
/* 0cb33254 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3325a */  TEST RAX,RAX
/* 0cb3325d */  JZ 0x0cb332be
/* 0cb3325f */  MOV RDI,qword ptr [RSP + 0x60]
/* 0cb33264 */  CMP RDI,RBX
/* 0cb33267 */  JZ 0x0cb332d9
/* 0cb33269 */  MOV EAX,0x28
/* 0cb3326e */  TEST RDI,RDI
/* 0cb33271 */  JNZ 0x0cb332de
/* 0cb33273 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0cb33278 */  TEST RDI,RDI
/* 0cb3327b */  JZ 0x0cb33295
/* 0cb3327d */  NOP dword ptr [RAX]
/* 0cb33280 */  MOV RBX,qword ptr [RDI]
/* 0cb33283 */  MOV ESI,0x18
/* 0cb33288 */  CALL 0x0412a280
/* 0cb3328d */  MOV RDI,RBX
/* 0cb33290 */  TEST RBX,RBX
/* 0cb33293 */  JNZ 0x0cb33280
/* 0cb33295 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0cb3329a */  MOV qword ptr [RSP + 0x8],0x0
/* 0cb332a3 */  TEST RDI,RDI
/* 0cb332a6 */  JZ 0x0cb332b6
/* 0cb332a8 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0cb332ad */  SHL RSI,0x3
/* 0cb332b1 */  CALL 0x0412a280
/* 0cb332b6 */  ADD RSP,0x78
/* 0cb332ba */  POP RBX
/* 0cb332bb */  POP R14
/* 0cb332bd */  RET
/* 0cb332be */  MOV RAX,qword ptr [R14]
/* 0cb332c1 */  MOV RDI,R14
/* 0cb332c4 */  CALL qword ptr [RAX + 0x10]
/* 0cb332c7 */  MOV RDI,R14
/* 0cb332ca */  CALL 0x0412c2d0
/* 0cb332cf */  MOV RDI,qword ptr [RSP + 0x60]
/* 0cb332d4 */  CMP RDI,RBX
/* 0cb332d7 */  JNZ 0x0cb33269
/* 0cb332d9 */  MOV EAX,0x20
/* 0cb332de */  MOV RCX,qword ptr [RDI]
/* 0cb332e1 */  CALL qword ptr [RCX + RAX*0x1]
/* 0cb332e4 */  MOV RDI,qword ptr [RSP + 0x18]
/* 0cb332e9 */  TEST RDI,RDI
/* 0cb332ec */  JNZ 0x0cb33280
/* 0cb332ee */  JMP 0x0cb33295
