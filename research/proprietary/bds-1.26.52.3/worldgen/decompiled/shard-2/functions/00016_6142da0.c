/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6142da0
 * Label: string:Jigsaw path does not exist:
 * Body:  [[06142980, 06142bf4] [06142c00, 06142c69] [06142c70, 06142d9d] [06142da0, 06142dec] [06142df0, 06142e3a]]
 * Ghidra: FUN_06142da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06142da0(void)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong in_RCX;
  ulong unaff_RBP;
  uint *unaff_R12;
  undefined8 *unaff_R13;
  ulong unaff_R14;
  uint unaff_R15D;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000040;
  undefined *in_stack_00000050;
  code *in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined1 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined *in_stack_00000078;
  undefined8 *in_stack_00000088;
  ulong in_stack_00000098;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  long in_stack_000000c0;
  uint in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined *in_stack_000000e0;
  code *in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined1 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined *in_stack_00000108;
  undefined8 in_stack_00000110;
  ulong in_stack_00000138;
  ulong in_stack_00000140;
  
  do {
    lVar5 = *(long *)(unaff_R12 + 2);
    uVar2 = *(uint *)(lVar5 + 0x1c + in_RCX * 0x20);
    *unaff_R12 = uVar2;
    if (unaff_R12[0x48] == 0) {
      uVar7 = unaff_R12[4];
LAB_06142df5:
      lVar1 = lVar5 + (ulong)uVar7 * 0x20;
      uVar6 = (ulong)*(uint *)(lVar5 + -0x10 + (ulong)uVar7 * 0x20);
      if (uVar6 != 0xffffffff) {
        (**(code **)(&UNK_0f4e40d0 + uVar6 * 8))(&stack0x00000040,lVar1 + -0x18);
        uVar7 = unaff_R12[4];
      }
      *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
      unaff_R12[4] = uVar7 - 1;
    }
    else if ((*(uint *)(*(long *)(unaff_R12 + 0x46) + 0x18 + (ulong)(unaff_R12[0x48] - 1) * 0x30) !=
              uVar2) && (uVar7 = unaff_R12[4], uVar2 == uVar7 - 1)) goto LAB_06142df5;
    if ((unaff_RBP <= unaff_R15D) ||
       ((*(uint *)(in_stack_000000c0 + 0x2b0) != 0xffffffff &&
        (in_stack_000000c8 <= *(uint *)(in_stack_000000c0 + 0x2b0))))) {
      return;
    }
    unaff_R12 = (uint *)*in_stack_00000088;
    func_0x0ed6d4a0(unaff_R12,unaff_R15D);
    (**(code **)(*in_stack_00000010 + 200))(in_stack_00000010,(ulong)unaff_R15D);
    cVar4 = (**(code **)(*in_stack_00000010 + 0x18))();
    if ((cVar4 == '\x01') && (lVar5 = (**(code **)(*in_stack_00000010 + 0xa8))(), lVar5 != 2)) {
      in_stack_000000b8 = in_stack_00000140;
      func_0x0ed5ffe0(*in_stack_00000088,8,&stack0x000000b8);
      if ((in_stack_000000b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_000000b8 & 0xff00ffffffffffff) - 8);
      }
      in_stack_000000b8 = 0;
    }
    else {
      cVar4 = (**(code **)(*in_stack_00000010 + 0xb8))(in_stack_00000010,&UNK_013aac9a,3);
      plVar3 = in_stack_00000010;
      if (cVar4 == '\0') {
        in_stack_00000098 = unaff_R14;
        func_0x0ed5ffe0(*in_stack_00000088,8,unaff_R13);
        if ((in_stack_00000098 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(in_stack_00000098 & 0xff00ffffffffffff) - 8);
        }
        in_stack_00000098 = 0;
      }
      else {
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        in_stack_00000030 = 0;
        in_stack_00000068 = *(undefined8 *)(in_stack_000000a8 + 0x28);
        in_stack_00000050 = &UNK_048b1ea0;
        uStack0000000000000060 = 0xa24c74b7;
        in_stack_00000058 = (code *)0x0;
        uStack0000000000000064 = 3;
        in_stack_00000040 = &stack0x00000020;
        in_stack_00000070 = 0;
        in_stack_00000078 = &UNK_048b1e80;
        func_0x0ed75bc0(&stack0x00000130,in_stack_00000010,&stack0x00000040,in_stack_00000110,
                        &stack0x00000148);
        (**(code **)(*plVar3 + 0xd0))(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,&UNK_0138e8dd,5);
        if (cVar4 == '\0') {
          in_stack_000000b0 = in_stack_00000138;
          func_0x0ed5ffe0(*in_stack_00000088,8,&stack0x000000b0);
          if ((in_stack_000000b0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(in_stack_000000b0 & 0xff00ffffffffffff) - 8);
          }
          in_stack_000000b0 = 0;
        }
        else {
          in_stack_000000d0 = &stack0x00000020;
          lVar5 = func_0x06146f90(in_stack_00000018,in_stack_000000d0,&UNK_01563a4f,&stack0x000000d0
                                  ,&stack0x0000000f);
          plVar3 = in_stack_00000010;
          in_stack_000000d0 = (undefined8 *)(lVar5 + 0x28);
          in_stack_000000f8 = *(undefined8 *)(in_stack_000000a8 + 0x28);
          in_stack_000000e0 = &UNK_05dbbd80;
          uStack00000000000000f0 = 0xdcaa237f;
          in_stack_000000e8 = (code *)0x0;
          uStack00000000000000f4 = 3;
          in_stack_00000100 = 0;
          in_stack_00000108 = &UNK_05dbbd60;
          func_0x0ed75bc0(&stack0x00000128,in_stack_00000010,&stack0x000000d0,in_stack_00000110,
                          &stack0x00000170);
          (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (in_stack_000000e8 != (code *)0x0) {
            (*in_stack_000000e8)(&stack0x000000d0);
          }
          unaff_R13 = &stack0x00000098;
        }
        if (in_stack_00000058 != (code *)0x0) {
          (*in_stack_00000058)(&stack0x00000040);
        }
        if ((in_stack_00000020 & 1) != 0) {
          func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
        }
      }
    }
    (**(code **)(*in_stack_00000010 + 0xd0))();
    in_RCX = (ulong)*unaff_R12;
    unaff_R15D = unaff_R15D + 1;
  } while( true );
}



/* ---- assembly ---- */
/* 06142980 */  MOV ECX,dword ptr [R12 + 0x10]
/* 06142985 */  MOV dword ptr [RBX + -0x10],0xffffffff
/* 0614298c */  DEC ECX
/* 0614298e */  MOV dword ptr [R12 + 0x10],ECX
/* 06142993 */  MOV EBX,R15D
/* 06142996 */  INC R15D
/* 06142999 */  CMP RBP,RBX
/* 0614299c */  JBE 0x06142e29
/* 061429a2 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 061429aa */  MOV EAX,dword ptr [RAX + 0x2b0]
/* 061429b0 */  CMP EAX,-0x1
/* 061429b3 */  JZ 0x061429c2
/* 061429b5 */  CMP EAX,dword ptr [RSP + 0xc8]
/* 061429bc */  JNC 0x06142e29
/* 061429c2 */  LEA ESI,[R15 + -0x1]
/* 061429c6 */  MOV RAX,qword ptr [RSP + 0x88]
/* 061429ce */  MOV R12,qword ptr [RAX]
/* 061429d1 */  MOV RDI,R12
/* 061429d4 */  CALL 0x0ed6d4a0
/* 061429d9 */  MOV RDI,qword ptr [RSP + 0x10]
/* 061429de */  MOV RAX,qword ptr [RDI]
/* 061429e1 */  MOV RSI,RBX
/* 061429e4 */  CALL qword ptr [RAX + 0xc8]
/* 061429ea */  MOV RDI,qword ptr [RSP + 0x10]
/* 061429ef */  MOV RAX,qword ptr [RDI]
/* 061429f2 */  CALL qword ptr [RAX + 0x18]
/* 061429f5 */  CMP AL,0x1
/* 061429f7 */  JNZ 0x06142a11
/* 061429f9 */  MOV RDI,qword ptr [RSP + 0x10]
/* 061429fe */  MOV RAX,qword ptr [RDI]
/* 06142a01 */  CALL qword ptr [RAX + 0xa8]
/* 06142a07 */  CMP RAX,0x2
/* 06142a0b */  JNZ 0x06142c70
/* 06142a11 */  MOV RDI,qword ptr [RSP + 0x10]
/* 06142a16 */  MOV RAX,qword ptr [RDI]
/* 06142a19 */  MOV EDX,0x3
/* 06142a1e */  LEA RSI,[0x13aac9a]
/* 06142a25 */  CALL qword ptr [RAX + 0xb8]
/* 06142a2b */  TEST AL,AL
/* 06142a2d */  JZ 0x06142c00
/* 06142a33 */  XORPS XMM0,XMM0
/* 06142a36 */  MOVAPS xmmword ptr [RSP + 0x20],XMM0
/* 06142a3b */  MOV qword ptr [RSP + 0x30],0x0
/* 06142a44 */  MOV RAX,qword ptr [RSP + 0xa8]
/* 06142a4c */  MOV RAX,qword ptr [RAX + 0x28]
/* 06142a50 */  LEA RCX,[0x48b1ea0]
/* 06142a57 */  MOV qword ptr [RSP + 0x50],RCX
/* 06142a5c */  MOV dword ptr [RSP + 0x60],0xa24c74b7
/* 06142a64 */  MOV qword ptr [RSP + 0x58],0x0
/* 06142a6d */  MOV byte ptr [RSP + 0x64],0x3
/* 06142a72 */  LEA RCX,[RSP + 0x20]
/* 06142a77 */  MOV qword ptr [RSP + 0x40],RCX
/* 06142a7c */  MOV qword ptr [RSP + 0x68],RAX
/* 06142a81 */  MOV qword ptr [RSP + 0x70],0x0
/* 06142a8a */  LEA RAX,[0x48b1e80]
/* 06142a91 */  MOV qword ptr [RSP + 0x78],RAX
/* 06142a96 */  LEA RDI,[RSP + 0x130]
/* 06142a9e */  MOV RBX,qword ptr [RSP + 0x10]
/* 06142aa3 */  MOV RSI,RBX
/* 06142aa6 */  LEA RDX,[RSP + 0x40]
/* 06142aab */  MOV RCX,qword ptr [RSP + 0x110]
/* 06142ab3 */  LEA R8,[RSP + 0x148]
/* 06142abb */  CALL 0x0ed75bc0
/* 06142ac0 */  MOV RAX,qword ptr [RBX]
/* 06142ac3 */  MOV RDI,RBX
/* 06142ac6 */  CALL qword ptr [RAX + 0xd0]
/* 06142acc */  MOV RAX,qword ptr [RBX]
/* 06142acf */  MOV EDX,0x5
/* 06142ad4 */  MOV RDI,RBX
/* 06142ad7 */  LEA RSI,[0x138e8dd]
/* 06142ade */  CALL qword ptr [RAX + 0xb8]
/* 06142ae4 */  TEST AL,AL
/* 06142ae6 */  JZ 0x06142ce7
/* 06142aec */  MOV R13,RBP
/* 06142aef */  MOV RBP,R14
/* 06142af2 */  LEA RSI,[RSP + 0x20]
/* 06142af7 */  MOV qword ptr [RSP + 0xd0],RSI
/* 06142aff */  MOV RDI,qword ptr [RSP + 0x18]
/* 06142b04 */  LEA RDX,[0x1563a4f]
/* 06142b0b */  LEA R14,[RSP + 0xd0]
/* 06142b13 */  MOV RCX,R14
/* 06142b16 */  LEA R8,[RSP + 0xf]
/* 06142b1b */  CALL 0x06146f90
/* 06142b20 */  ADD RAX,0x28
/* 06142b24 */  MOV RCX,qword ptr [RSP + 0xa8]
/* 06142b2c */  MOV RCX,qword ptr [RCX + 0x28]
/* 06142b30 */  LEA RDX,[0x5dbbd80]
/* 06142b37 */  MOV qword ptr [RSP + 0xe0],RDX
/* 06142b3f */  MOV dword ptr [RSP + 0xf0],0xdcaa237f
/* 06142b4a */  MOV qword ptr [RSP + 0xe8],0x0
/* 06142b56 */  MOV byte ptr [RSP + 0xf4],0x3
/* 06142b5e */  MOV qword ptr [RSP + 0xd0],RAX
/* 06142b66 */  MOV qword ptr [RSP + 0xf8],RCX
/* 06142b6e */  MOV qword ptr [RSP + 0x100],0x0
/* 06142b7a */  LEA RAX,[0x5dbbd60]
/* 06142b81 */  MOV qword ptr [RSP + 0x108],RAX
/* 06142b89 */  LEA RDI,[RSP + 0x128]
/* 06142b91 */  MOV RBX,qword ptr [RSP + 0x10]
/* 06142b96 */  MOV RSI,RBX
/* 06142b99 */  MOV RDX,R14
/* 06142b9c */  MOV RCX,qword ptr [RSP + 0x110]
/* 06142ba4 */  LEA R8,[RSP + 0x170]
/* 06142bac */  CALL 0x0ed75bc0
/* 06142bb1 */  MOV RAX,qword ptr [RBX]
/* 06142bb4 */  MOV RDI,RBX
/* 06142bb7 */  CALL qword ptr [RAX + 0xd0]
/* 06142bbd */  MOV RAX,qword ptr [RSP + 0xe8]
/* 06142bc5 */  TEST RAX,RAX
/* 06142bc8 */  LEA RDI,[RSP + 0xd0]
/* 06142bd0 */  MOV R14,RBP
/* 06142bd3 */  JZ 0x06142bd7
/* 06142bd5 */  CALL RAX
/* 06142bd7 */  MOV RBP,R13
/* 06142bda */  LEA R13,[RSP + 0x98]
/* 06142be2 */  MOV RAX,qword ptr [RSP + 0x58]
/* 06142be7 */  TEST RAX,RAX
/* 06142bea */  JNZ 0x06142d63
/* 06142bf0 */  JMP 0x06142d6a
/* 06142c00 */  MOV RAX,qword ptr [RSP + 0x88]
/* 06142c08 */  MOV RDI,qword ptr [RAX]
/* 06142c0b */  MOV qword ptr [RSP + 0x98],R14
/* 06142c13 */  MOV ESI,0x8
/* 06142c18 */  MOV RDX,R13
/* 06142c1b */  CALL 0x0ed5ffe0
/* 06142c20 */  MOV RSI,qword ptr [RSP + 0x98]
/* 06142c28 */  MOV RAX,0x80000000000000
/* 06142c32 */  TEST RSI,RAX
/* 06142c35 */  JZ 0x06142c59
/* 06142c37 */  MOV RAX,-0xff000000000001
/* 06142c41 */  AND RSI,RAX
/* 06142c44 */  ADD RSI,-0x8
/* 06142c48 */  MOV RAX,qword ptr [0x0f5463b0]
/* 06142c4f */  LEA RDI,[0xf5463b0]
/* 06142c56 */  CALL qword ptr [RAX + 0x28]
/* 06142c59 */  MOV qword ptr [RSP + 0x98],0x0
/* 06142c65 */  JMP 0x06142d90
/* 06142c70 */  MOV RAX,qword ptr [RSP + 0x88]
/* 06142c78 */  MOV RDI,qword ptr [RAX]
/* 06142c7b */  MOV RAX,qword ptr [RSP + 0x140]
/* 06142c83 */  MOV qword ptr [RSP + 0xb8],RAX
/* 06142c8b */  MOV ESI,0x8
/* 06142c90 */  LEA RDX,[RSP + 0xb8]
/* 06142c98 */  CALL 0x0ed5ffe0
/* 06142c9d */  MOV RSI,qword ptr [RSP + 0xb8]
/* 06142ca5 */  MOV RAX,0x80000000000000
/* 06142caf */  TEST RSI,RAX
/* 06142cb2 */  JZ 0x06142cd6
/* 06142cb4 */  MOV RAX,-0xff000000000001
/* 06142cbe */  AND RSI,RAX
/* 06142cc1 */  ADD RSI,-0x8
/* 06142cc5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 06142ccc */  LEA RDI,[0xf5463b0]
/* 06142cd3 */  CALL qword ptr [RAX + 0x28]
/* 06142cd6 */  MOV qword ptr [RSP + 0xb8],0x0
/* 06142ce2 */  JMP 0x06142d90
/* 06142ce7 */  MOV RAX,qword ptr [RSP + 0x88]
/* 06142cef */  MOV RDI,qword ptr [RAX]
/* 06142cf2 */  MOV RAX,qword ptr [RSP + 0x138]
/* 06142cfa */  MOV qword ptr [RSP + 0xb0],RAX
/* 06142d02 */  MOV ESI,0x8
/* 06142d07 */  LEA RDX,[RSP + 0xb0]
/* 06142d0f */  CALL 0x0ed5ffe0
/* 06142d14 */  MOV RSI,qword ptr [RSP + 0xb0]
/* 06142d1c */  MOV RAX,0x80000000000000
/* 06142d26 */  TEST RSI,RAX
/* 06142d29 */  JZ 0x06142d4d
/* 06142d2b */  MOV RAX,-0xff000000000001
/* 06142d35 */  AND RSI,RAX
/* 06142d38 */  ADD RSI,-0x8
/* 06142d3c */  MOV RAX,qword ptr [0x0f5463b0]
/* 06142d43 */  LEA RDI,[0xf5463b0]
/* 06142d4a */  CALL qword ptr [RAX + 0x28]
/* 06142d4d */  MOV qword ptr [RSP + 0xb0],0x0
/* 06142d59 */  MOV RAX,qword ptr [RSP + 0x58]
/* 06142d5e */  TEST RAX,RAX
/* 06142d61 */  JZ 0x06142d6a
/* 06142d63 */  LEA RDI,[RSP + 0x40]
/* 06142d68 */  CALL RAX
/* 06142d6a */  TEST byte ptr [RSP + 0x20],0x1
/* 06142d6f */  JZ 0x06142d90
/* 06142d71 */  MOV RSI,qword ptr [RSP + 0x20]
/* 06142d76 */  MOV RDI,qword ptr [RSP + 0x30]
/* 06142d7b */  AND RSI,-0x2
/* 06142d7f */  CALL 0x0412a280
/* 06142d84 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 06142d90 */  MOV RDI,qword ptr [RSP + 0x10]
/* 06142d95 */  MOV RAX,qword ptr [RDI]
/* 06142d98 */  CALL qword ptr [RAX + 0xd0]
/* 06142da0 */  OR AL,0x24
/* 06142da2 */  MOV RAX,qword ptr [R12 + 0x8]
/* 06142da7 */  SHL RCX,0x5
/* 06142dab */  MOV EDX,dword ptr [RAX + RCX*0x1 + 0x1c]
/* 06142daf */  MOV dword ptr [R12],EDX
/* 06142db3 */  MOV ECX,dword ptr [R12 + 0x120]
/* 06142dbb */  TEST ECX,ECX
/* 06142dbd */  JZ 0x06142df0
/* 06142dbf */  MOV RSI,qword ptr [R12 + 0x118]
/* 06142dc7 */  DEC ECX
/* 06142dc9 */  LEA RCX,[RCX + RCX*0x2]
/* 06142dcd */  SHL RCX,0x4
/* 06142dd1 */  CMP dword ptr [RSI + RCX*0x1 + 0x18],EDX
/* 06142dd5 */  JZ 0x06142993
/* 06142ddb */  MOV ECX,dword ptr [R12 + 0x10]
/* 06142de0 */  LEA ESI,[RCX + -0x1]
/* 06142de3 */  CMP EDX,ESI
/* 06142de5 */  JNZ 0x06142993
/* 06142deb */  JMP 0x06142df5
/* 06142df0 */  MOV ECX,dword ptr [R12 + 0x10]
/* 06142df5 */  MOV EDX,ECX
/* 06142df7 */  SHL RDX,0x5
/* 06142dfb */  LEA RBX,[RAX + RDX*0x1]
/* 06142dff */  MOV EAX,dword ptr [RAX + RDX*0x1 + -0x10]
/* 06142e03 */  MOV EDX,0xffffffff
/* 06142e08 */  CMP RAX,RDX
/* 06142e0b */  JZ 0x06142985
/* 06142e11 */  LEA RSI,[RBX + -0x18]
/* 06142e15 */  LEA RDI,[RSP + 0x40]
/* 06142e1a */  LEA RCX,[0xf4e40d0]
/* 06142e21 */  CALL qword ptr [RCX + RAX*0x8]
/* 06142e24 */  JMP 0x06142980
/* 06142e29 */  ADD RSP,0x198
/* 06142e30 */  POP RBX
/* 06142e31 */  POP R12
/* 06142e33 */  POP R13
/* 06142e35 */  POP R14
/* 06142e37 */  POP R15
/* 06142e39 */  POP RBP
/* 06142e3a */  RET
