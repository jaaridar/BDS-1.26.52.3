/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca33430
 * Label: WorldGenerator::vslot31
 * Body:  [[0ca33430, 0ca3344f] [0ca33451, 0ca337e4] [0ca337f0, 0ca3395d] [0ca33960, 0ca339c7]]
 * Ghidra: wg_WorldGenerator__vslot31
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_WorldGenerator__vslot31(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  char *in_RAX;
  undefined8 *unaff_RBX;
  long unaff_R15;
  bool bVar4;
  ulong unaff_retaddr;
  ulong uVar5;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  char in_stack_00000038;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined1 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined2 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 uStack00000000000000d0;
  undefined1 uStack00000000000000d8;
  undefined1 uStack0000000000000128;
  undefined1 uStack0000000000000130;
  undefined1 uStack0000000000000180;
  undefined1 uStack0000000000000188;
  undefined1 uStack00000000000001d0;
  undefined1 uStack00000000000001d8;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  uStack0000000000000128 = 0;
  uStack0000000000000130 = 0;
  uStack0000000000000180 = 0;
  uStack0000000000000188 = 0;
  uStack00000000000001d0 = 0;
  uStack00000000000001d8 = 0;
  uStack00000000000000d8 = 0;
  uStack0000000000000078 = *(undefined1 *)(unaff_RBX + 3);
  uStack0000000000000070 = unaff_RBX[2];
  uStack0000000000000060 = *unaff_RBX;
  uStack0000000000000068 = unaff_RBX[1];
  *(undefined2 *)unaff_RBX = 0;
  if (*(char *)(unaff_RBX + 7) != '\0') {
    in_stack_00000090 = unaff_RBX[6];
    in_stack_00000080 = unaff_RBX[4];
    in_stack_00000088 = unaff_RBX[5];
    unaff_RBX[4] = 0;
    unaff_RBX[5] = 0;
    unaff_RBX[6] = 0;
    in_stack_00000098 = 1;
  }
  uStack00000000000000a0 = *(undefined2 *)(unaff_RBX + 8);
  uStack00000000000000b8 = unaff_RBX[0xb];
  uStack00000000000000a8 = unaff_RBX[9];
  uStack00000000000000b0 = unaff_RBX[10];
  unaff_RBX[9] = 0;
  unaff_RBX[10] = 0;
  unaff_RBX[0xb] = 0;
  uStack00000000000000d0 = unaff_RBX[0xe];
  uStack00000000000000c0 = *(undefined4 *)(unaff_RBX + 0xc);
  uStack00000000000000c4 = *(undefined4 *)((long)unaff_RBX + 100);
  uStack00000000000000c8 = *(undefined4 *)(unaff_RBX + 0xd);
  uStack00000000000000cc = *(undefined4 *)((long)unaff_RBX + 0x6c);
  unaff_RBX[0xc] = 0;
  unaff_RBX[0xd] = 0;
  unaff_RBX[0xe] = 0;
  func_0x0c1fc980(&stack0x000000d8,unaff_RBX + 0xf);
  func_0x0c204b70(&stack0x00000378,unaff_RBX + 99);
  func_0x0a79c420(&stack0x000003d0,unaff_RBX + 0x6e);
  func_0x0a79d560(&stack0x00000448,unaff_RBX + 0x7d);
  func_0x0c1cf8f0(&stack0x00000470,unaff_RBX + 0x82);
  if (*(int *)(*(long *)(unaff_R15 + 0x28) + 4) == 1) {
    uVar1 = *(undefined8 *)(unaff_R15 + 0x30);
    (**(code **)(**(long **)(unaff_R15 + 0x38) + 0x10))(&stack0x00000000);
    func_0x0c44dbf0(&stack0x00000020,uVar1,&stack0x00000000,&stack0x00000060);
    if ((in_stack_00000010 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000010 & 0xff00ffffffffffff) - 8);
    }
    in_stack_00000010 = 0;
    if ((in_stack_00000008 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000008 & 0xff00ffffffffffff) - 8);
    }
    plVar2 = *(long **)(unaff_R15 + 0x40);
    (**(code **)(**(long **)(unaff_R15 + 0x38) + 0x10))(&stack0x00000048);
    uVar3 = in_stack_00000020;
    bVar4 = in_stack_00000038 == '\x01';
    uVar5 = unaff_retaddr & 0xffffffffffffff00;
    if (bVar4) {
      in_stack_00000008 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000030;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      uVar5 = uVar3;
    }
    (**(code **)(*plVar2 + 0x10))
              (plVar2,&stack0x00000060,&stack0x00000048,*(long *)(unaff_R15 + 0x48) + 0x10,
               &stack0x00000000);
    if ((bVar4) && (uVar5 != 0)) {
      for (; uVar5 != in_stack_00000008; in_stack_00000008 = in_stack_00000008 - 0x98) {
        func_0x0b69a770(in_stack_00000008 - 0x80);
        if ((*(byte *)(in_stack_00000008 - 0x98) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000008 - 0x88),
                          *(ulong *)(in_stack_00000008 - 0x98) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(uVar5,in_stack_00000010 - uVar5);
    }
    if ((in_stack_00000058 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000058 & 0xff00ffffffffffff) - 8);
    }
    in_stack_00000058 = 0;
    if ((in_stack_00000050 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000050 & 0xff00ffffffffffff) - 8);
    }
    uVar3 = in_stack_00000020;
    if ((in_stack_00000038 == '\x01') && (uVar5 = in_stack_00000028, in_stack_00000020 != 0)) {
      for (; uVar3 != uVar5; uVar5 = uVar5 - 0x98) {
        func_0x0b69a770(uVar5 - 0x80);
        if ((*(byte *)(uVar5 - 0x98) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar5 - 0x88),
                          *(ulong *)(uVar5 - 0x98) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000028 = uVar3;
      func_0x0412a280(in_stack_00000020,in_stack_00000030 - in_stack_00000020);
    }
  }
  else {
    plVar2 = *(long **)(unaff_R15 + 0x40);
    (**(code **)(**(long **)(unaff_R15 + 0x38) + 0x10))(&stack0x00000020);
    (**(code **)(*plVar2 + 0x3a0))
              (plVar2,&stack0x00000060,&stack0x00000020,*(long *)(unaff_R15 + 0x48) + 0x10,
               *(undefined8 *)(*(long *)(unaff_R15 + 0x28) + 8));
    if ((in_stack_00000030 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000030 & 0xff00ffffffffffff) - 8);
    }
    in_stack_00000030 = 0;
    if ((in_stack_00000028 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000028 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c4a5a60(&stack0x00000060);
  return;
}



/* ---- assembly ---- */
/* 0ca33430 */  ADD byte ptr [RAX],AL
/* 0ca33432 */  ADD byte ptr [RAX],AL
/* 0ca33434 */  MOV word ptr [RSP + 0xa0],0x0
/* 0ca3343e */  MOV byte ptr [RSP + 0x128],0x0
/* 0ca33446 */  MOV byte ptr [RSP + 0x130],0x0
/* 0ca3344e */  MOV byte ptr [RSP + 0x180],0x0
/* 0ca33456 */  MOV byte ptr [RSP + 0x188],0x0
/* 0ca3345e */  MOV byte ptr [RSP + 0x1d0],0x0
/* 0ca33466 */  MOV byte ptr [RSP + 0x1d8],0x0
/* 0ca3346e */  MOV byte ptr [RSP + 0x268],0x0
/* 0ca33476 */  MOV byte ptr [RSP + 0x270],0x0
/* 0ca3347e */  MOV byte ptr [RSP + 0x2c0],0x0
/* 0ca33486 */  MOV byte ptr [RSP + 0x2c8],0x0
/* 0ca3348e */  MOV byte ptr [RSP + 0x318],0x0
/* 0ca33496 */  MOV byte ptr [RSP + 0x320],0x0
/* 0ca3349e */  MOV byte ptr [RSP + 0x370],0x0
/* 0ca334a6 */  LEA R14,[RSP + 0x378]
/* 0ca334ae */  MOV byte ptr [RSP + 0x378],0x0
/* 0ca334b6 */  MOV byte ptr [RSP + 0x3c8],0x0
/* 0ca334be */  MOV byte ptr [RSP + 0x3d0],0x0
/* 0ca334c6 */  MOV byte ptr [RSP + 0x440],0x0
/* 0ca334ce */  MOV byte ptr [RSP + 0x448],0x0
/* 0ca334d6 */  MOV byte ptr [RSP + 0x468],0x0
/* 0ca334de */  MOV byte ptr [RSP + 0x470],0x0
/* 0ca334e6 */  MOV byte ptr [RSP + 0x488],0x0
/* 0ca334ee */  MOV byte ptr [RSP + 0x4c0],0x0
/* 0ca334f6 */  MOV byte ptr [RSP + 0x4c8],0x0
/* 0ca334fe */  MOV byte ptr [RSP + 0x4e0],0x0
/* 0ca33506 */  MOV byte ptr [RSP + 0x4e8],0x0
/* 0ca3350e */  MOV byte ptr [RSP + 0x4ec],0x0
/* 0ca33516 */  MOV byte ptr [RSP + 0x4f0],0x0
/* 0ca3351e */  MOV byte ptr [RSP + 0x4f4],0x0
/* 0ca33526 */  MOV byte ptr [RSP + 0x4f8],0x0
/* 0ca3352e */  MOV byte ptr [RSP + 0x4fc],0x0
/* 0ca33536 */  MOV byte ptr [RSP + 0x500],0x0
/* 0ca3353e */  MOV byte ptr [RSP + 0x504],0x0
/* 0ca33546 */  MOV byte ptr [RSP + 0x508],0x0
/* 0ca3354e */  MOV byte ptr [RSP + 0x50c],0x0
/* 0ca33556 */  MOV byte ptr [RSP + 0x518],0x0
/* 0ca3355e */  MOV byte ptr [RSP + 0x540],0x0
/* 0ca33566 */  MOV byte ptr [RSP + 0x548],0x0
/* 0ca3356e */  MOV byte ptr [RSP + 0x558],0x0
/* 0ca33576 */  XORPS XMM0,XMM0
/* 0ca33579 */  MOVUPS xmmword ptr [RSP + 0x499],XMM0
/* 0ca33581 */  MOVAPS xmmword ptr [RSP + 0x490],XMM0
/* 0ca33589 */  MOV dword ptr [RSP + 0x510],0x0
/* 0ca33594 */  MOV byte ptr [RSP + 0x514],0x0
/* 0ca3359c */  MOVUPS xmmword ptr [RSP + 0x51c],XMM0
/* 0ca335a4 */  MOV qword ptr [RSP + 0x529],0x0
/* 0ca335b0 */  LEA RDI,[RSP + 0xd8]
/* 0ca335b8 */  MOV byte ptr [RSP + 0xd8],0x0
/* 0ca335c0 */  MOVZX EAX,byte ptr [RBX + 0x18]
/* 0ca335c4 */  MOV RCX,qword ptr [RBX + 0x10]
/* 0ca335c8 */  CMP byte ptr [RBX + 0x38],0x0
/* 0ca335cc */  MOV qword ptr [RSP + 0x70],RCX
/* 0ca335d1 */  MOVUPS XMM1,xmmword ptr [RBX]
/* 0ca335d4 */  MOVAPS xmmword ptr [RSP + 0x60],XMM1
/* 0ca335d9 */  MOV word ptr [RBX],0x0
/* 0ca335de */  MOV byte ptr [RSP + 0x78],AL
/* 0ca335e2 */  JZ 0x0ca3360f
/* 0ca335e4 */  LEA RAX,[RSP + 0x80]
/* 0ca335ec */  MOV RCX,qword ptr [RBX + 0x30]
/* 0ca335f0 */  MOV qword ptr [RAX + 0x10],RCX
/* 0ca335f4 */  MOVUPS XMM1,xmmword ptr [RBX + 0x20]
/* 0ca335f8 */  MOVUPS xmmword ptr [RAX],XMM1
/* 0ca335fb */  MOVUPS xmmword ptr [RBX + 0x20],XMM0
/* 0ca335ff */  MOV qword ptr [RBX + 0x30],0x0
/* 0ca33607 */  MOV byte ptr [RSP + 0x98],0x1
/* 0ca3360f */  MOVZX EAX,word ptr [RBX + 0x40]
/* 0ca33613 */  MOV word ptr [RSP + 0xa0],AX
/* 0ca3361b */  MOV RAX,qword ptr [RBX + 0x58]
/* 0ca3361f */  MOVUPS XMM1,xmmword ptr [RBX + 0x48]
/* 0ca33623 */  MOVUPS xmmword ptr [RSP + 0xa8],XMM1
/* 0ca3362b */  MOV qword ptr [RSP + 0xb8],RAX
/* 0ca33633 */  MOVUPS xmmword ptr [RBX + 0x48],XMM0
/* 0ca33637 */  MOV qword ptr [RBX + 0x58],0x0
/* 0ca3363f */  MOV RAX,qword ptr [RBX + 0x70]
/* 0ca33643 */  MOVUPS XMM1,xmmword ptr [RBX + 0x60]
/* 0ca33647 */  MOVAPS xmmword ptr [RSP + 0xc0],XMM1
/* 0ca3364f */  MOV qword ptr [RSP + 0xd0],RAX
/* 0ca33657 */  MOVUPS xmmword ptr [RBX + 0x60],XMM0
/* 0ca3365b */  MOV qword ptr [RBX + 0x70],0x0
/* 0ca33663 */  LEA RSI,[RBX + 0x78]
/* 0ca33667 */  CALL 0x0c1fc980
/* 0ca3366c */  LEA RSI,[RBX + 0x318]
/* 0ca33673 */  MOV RDI,R14
/* 0ca33676 */  CALL 0x0c204b70
/* 0ca3367b */  LEA RDI,[RSP + 0x3d0]
/* 0ca33683 */  LEA RSI,[RBX + 0x370]
/* 0ca3368a */  CALL 0x0a79c420
/* 0ca3368f */  LEA RDI,[RSP + 0x448]
/* 0ca33697 */  LEA RSI,[RBX + 0x3e8]
/* 0ca3369e */  CALL 0x0a79d560
/* 0ca336a3 */  LEA RDI,[RSP + 0x470]
/* 0ca336ab */  ADD RBX,0x410
/* 0ca336b2 */  MOV RSI,RBX
/* 0ca336b5 */  CALL 0x0c1cf8f0
/* 0ca336ba */  MOV RAX,qword ptr [R15 + 0x28]
/* 0ca336be */  CMP dword ptr [RAX + 0x4],0x1
/* 0ca336c2 */  JNZ 0x0ca3382c
/* 0ca336c8 */  MOV RBX,qword ptr [R15 + 0x30]
/* 0ca336cc */  MOV RSI,qword ptr [R15 + 0x38]
/* 0ca336d0 */  MOV RAX,qword ptr [RSI]
/* 0ca336d3 */  MOV RDI,RSP
/* 0ca336d6 */  CALL qword ptr [RAX + 0x10]
/* 0ca336d9 */  LEA RDI,[RSP + 0x20]
/* 0ca336de */  MOV RDX,RSP
/* 0ca336e1 */  LEA RCX,[RSP + 0x60]
/* 0ca336e6 */  MOV RSI,RBX
/* 0ca336e9 */  CALL 0x0c44dbf0
/* 0ca336ee */  MOV R14,-0xff000000000001
/* 0ca336f8 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0ca336fd */  BT RSI,0x37
/* 0ca33702 */  JNC 0x0ca3371c
/* 0ca33704 */  AND RSI,R14
/* 0ca33707 */  ADD RSI,-0x8
/* 0ca3370b */  LEA RDI,[0xf5463b0]
/* 0ca33712 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca33719 */  CALL qword ptr [RAX + 0x28]
/* 0ca3371c */  MOV R12,0x80000000000000
/* 0ca33726 */  MOV qword ptr [RSP + 0x10],0x0
/* 0ca3372f */  MOV RSI,qword ptr [RSP + 0x8]
/* 0ca33734 */  TEST RSI,R12
/* 0ca33737 */  JZ 0x0ca33751
/* 0ca33739 */  AND RSI,R14
/* 0ca3373c */  ADD RSI,-0x8
/* 0ca33740 */  LEA RDI,[0xf5463b0]
/* 0ca33747 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca3374e */  CALL qword ptr [RAX + 0x28]
/* 0ca33751 */  MOV RBX,qword ptr [R15 + 0x40]
/* 0ca33755 */  MOV RSI,qword ptr [R15 + 0x38]
/* 0ca33759 */  MOV RAX,qword ptr [RSI]
/* 0ca3375c */  LEA RDI,[RSP + 0x48]
/* 0ca33761 */  CALL qword ptr [RAX + 0x10]
/* 0ca33764 */  MOV RCX,qword ptr [R15 + 0x48]
/* 0ca33768 */  ADD RCX,0x10
/* 0ca3376c */  MOV byte ptr [RSP],0x0
/* 0ca33770 */  MOV byte ptr [RSP + 0x18],0x0
/* 0ca33775 */  CMP byte ptr [RSP + 0x38],0x1
/* 0ca3377a */  JNZ 0x0ca337a5
/* 0ca3377c */  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
/* 0ca33781 */  MOVAPS xmmword ptr [RSP],XMM0
/* 0ca33785 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0ca3378a */  MOV qword ptr [RSP + 0x10],RAX
/* 0ca3378f */  XORPS XMM0,XMM0
/* 0ca33792 */  MOVAPS xmmword ptr [RSP + 0x20],XMM0
/* 0ca33797 */  MOV qword ptr [RSP + 0x30],0x0
/* 0ca337a0 */  MOV byte ptr [RSP + 0x18],0x1
/* 0ca337a5 */  MOV RAX,qword ptr [RBX]
/* 0ca337a8 */  LEA RSI,[RSP + 0x60]
/* 0ca337ad */  LEA RDX,[RSP + 0x48]
/* 0ca337b2 */  MOV R8,RSP
/* 0ca337b5 */  MOV RDI,RBX
/* 0ca337b8 */  CALL qword ptr [RAX + 0x10]
/* 0ca337bb */  CMP byte ptr [RSP + 0x18],0x1
/* 0ca337c0 */  JNZ 0x0ca338f1
/* 0ca337c6 */  MOV RBX,qword ptr [RSP]
/* 0ca337ca */  TEST RBX,RBX
/* 0ca337cd */  JZ 0x0ca338f1
/* 0ca337d3 */  MOV R15,qword ptr [RSP + 0x8]
/* 0ca337d8 */  MOV RDI,RBX
/* 0ca337db */  CMP RBX,R15
/* 0ca337de */  JNZ 0x0ca33800
/* 0ca337e0 */  JMP 0x0ca338df
/* 0ca337f0 */  ADD R15,-0x98
/* 0ca337f7 */  CMP R15,RBX
/* 0ca337fa */  JZ 0x0ca338db
/* 0ca33800 */  LEA RDI,[R15 + -0x80]
/* 0ca33804 */  CALL 0x0b69a770
/* 0ca33809 */  TEST byte ptr [R15 + -0x98],0x1
/* 0ca33811 */  JZ 0x0ca337f0
/* 0ca33813 */  MOV RSI,qword ptr [R15 + -0x98]
/* 0ca3381a */  MOV RDI,qword ptr [R15 + -0x88]
/* 0ca33821 */  AND RSI,-0x2
/* 0ca33825 */  CALL 0x0412a280
/* 0ca3382a */  JMP 0x0ca337f0
/* 0ca3382c */  MOV RBX,qword ptr [R15 + 0x40]
/* 0ca33830 */  MOV RSI,qword ptr [R15 + 0x38]
/* 0ca33834 */  MOV RAX,qword ptr [RSI]
/* 0ca33837 */  LEA RDI,[RSP + 0x20]
/* 0ca3383c */  CALL qword ptr [RAX + 0x10]
/* 0ca3383f */  MOV RAX,qword ptr [R15 + 0x28]
/* 0ca33843 */  MOV RCX,qword ptr [R15 + 0x48]
/* 0ca33847 */  ADD RCX,0x10
/* 0ca3384b */  MOV R8,qword ptr [RAX + 0x8]
/* 0ca3384f */  MOV RAX,qword ptr [RBX]
/* 0ca33852 */  LEA RSI,[RSP + 0x60]
/* 0ca33857 */  LEA RDX,[RSP + 0x20]
/* 0ca3385c */  MOV RDI,RBX
/* 0ca3385f */  CALL qword ptr [RAX + 0x3a0]
/* 0ca33865 */  MOV RSI,qword ptr [RSP + 0x30]
/* 0ca3386a */  BT RSI,0x37
/* 0ca3386f */  JNC 0x0ca33893
/* 0ca33871 */  MOV RAX,-0xff000000000001
/* 0ca3387b */  AND RSI,RAX
/* 0ca3387e */  ADD RSI,-0x8
/* 0ca33882 */  LEA RDI,[0xf5463b0]
/* 0ca33889 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca33890 */  CALL qword ptr [RAX + 0x28]
/* 0ca33893 */  MOV RAX,0x80000000000000
/* 0ca3389d */  MOV qword ptr [RSP + 0x30],0x0
/* 0ca338a6 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0ca338ab */  TEST RSI,RAX
/* 0ca338ae */  JZ 0x0ca339af
/* 0ca338b4 */  MOV RAX,-0xff000000000001
/* 0ca338be */  AND RSI,RAX
/* 0ca338c1 */  ADD RSI,-0x8
/* 0ca338c5 */  LEA RDI,[0xf5463b0]
/* 0ca338cc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca338d3 */  CALL qword ptr [RAX + 0x28]
/* 0ca338d6 */  JMP 0x0ca339af
/* 0ca338db */  MOV RDI,qword ptr [RSP]
/* 0ca338df */  MOV qword ptr [RSP + 0x8],RBX
/* 0ca338e4 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0ca338e9 */  SUB RSI,RDI
/* 0ca338ec */  CALL 0x0412a280
/* 0ca338f1 */  MOV RSI,qword ptr [RSP + 0x58]
/* 0ca338f6 */  TEST RSI,R12
/* 0ca338f9 */  JZ 0x0ca33913
/* 0ca338fb */  AND RSI,R14
/* 0ca338fe */  ADD RSI,-0x8
/* 0ca33902 */  LEA RDI,[0xf5463b0]
/* 0ca33909 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca33910 */  CALL qword ptr [RAX + 0x28]
/* 0ca33913 */  MOV qword ptr [RSP + 0x58],0x0
/* 0ca3391c */  MOV RSI,qword ptr [RSP + 0x50]
/* 0ca33921 */  TEST RSI,R12
/* 0ca33924 */  JZ 0x0ca3393e
/* 0ca33926 */  AND RSI,R14
/* 0ca33929 */  ADD RSI,-0x8
/* 0ca3392d */  LEA RDI,[0xf5463b0]
/* 0ca33934 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0ca3393b */  CALL qword ptr [RAX + 0x28]
/* 0ca3393e */  CMP byte ptr [RSP + 0x38],0x1
/* 0ca33943 */  JNZ 0x0ca339af
/* 0ca33945 */  MOV RBX,qword ptr [RSP + 0x20]
/* 0ca3394a */  TEST RBX,RBX
/* 0ca3394d */  JZ 0x0ca339af
/* 0ca3394f */  MOV R14,qword ptr [RSP + 0x28]
/* 0ca33954 */  MOV RDI,RBX
/* 0ca33957 */  CMP RBX,R14
/* 0ca3395a */  JNZ 0x0ca3396c
/* 0ca3395c */  JMP 0x0ca3399d
/* 0ca33960 */  ADD R14,-0x98
/* 0ca33967 */  CMP R14,RBX
/* 0ca3396a */  JZ 0x0ca33998
/* 0ca3396c */  LEA RDI,[R14 + -0x80]
/* 0ca33970 */  CALL 0x0b69a770
/* 0ca33975 */  TEST byte ptr [R14 + -0x98],0x1
/* 0ca3397d */  JZ 0x0ca33960
/* 0ca3397f */  MOV RSI,qword ptr [R14 + -0x98]
/* 0ca33986 */  MOV RDI,qword ptr [R14 + -0x88]
/* 0ca3398d */  AND RSI,-0x2
/* 0ca33991 */  CALL 0x0412a280
/* 0ca33996 */  JMP 0x0ca33960
/* 0ca33998 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0ca3399d */  MOV qword ptr [RSP + 0x28],RBX
/* 0ca339a2 */  MOV RSI,qword ptr [RSP + 0x30]
/* 0ca339a7 */  SUB RSI,RDI
/* 0ca339aa */  CALL 0x0412a280
/* 0ca339af */  LEA RDI,[RSP + 0x60]
/* 0ca339b4 */  CALL 0x0c4a5a60
/* 0ca339b9 */  ADD RSP,0x568
/* 0ca339c0 */  POP RBX
/* 0ca339c1 */  POP R12
/* 0ca339c3 */  POP R14
/* 0ca339c5 */  POP R15
/* 0ca339c7 */  RET
