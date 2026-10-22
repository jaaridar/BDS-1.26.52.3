/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce74f00
 * Label: string:JigsawBlock
 * Body:  [[0ce74f00, 0ce74fd3] [0ce74fe0, 0ce7500c] [0ce7516f, 0ce751c0] [0ce751d0, 0ce751f2] [0ce752b2, 0ce752da]]
 * Ghidra: FUN_0ce74f00
 */


void FUN_0ce74f00(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  long lVar1;
  long lVar2;
  int in_EAX;
  long *plVar3;
  long *plVar4;
  long *unaff_RBP;
  long *unaff_R12;
  long *unaff_R13;
  long lVar5;
  long in_XMM0_Qb;
  long in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  long *in_stack_00000058;
  
  *param_2 = *param_2 & param_5;
  iStack0000000000000030 = iStack0000000000000030 - in_EAX;
  plVar4 = unaff_RBP + -6;
  plVar3 = unaff_RBP;
  if (plVar4 < unaff_RBP) {
    plVar3 = unaff_RBP + 6;
    *unaff_RBP = param_1;
    unaff_RBP[1] = in_XMM0_Qb;
    unaff_RBP[2] = 0;
    *unaff_RBP = *plVar4;
    unaff_RBP[1] = unaff_RBP[-5];
    unaff_RBP[2] = unaff_RBP[-4];
    *plVar4 = param_1;
    unaff_RBP[-5] = in_XMM0_Qb;
    unaff_RBP[-4] = 0;
    unaff_RBP[3] = param_1;
    unaff_RBP[4] = in_XMM0_Qb;
    unaff_RBP[5] = 0;
    unaff_RBP[3] = unaff_RBP[-3];
    unaff_RBP[4] = unaff_RBP[-2];
    unaff_RBP[5] = unaff_RBP[-1];
    unaff_RBP[-3] = param_1;
    unaff_RBP[-2] = in_XMM0_Qb;
    unaff_RBP[-1] = 0;
  }
  unaff_R13[4] = (long)plVar3;
  lStack0000000000000040 = param_1;
  lStack0000000000000048 = in_XMM0_Qb;
  if (unaff_RBP != unaff_R12 + 6) {
    do {
      unaff_RBP = unaff_RBP + -6;
      plVar4 = plVar4 + -6;
      func_0x0ce75570(unaff_RBP,plVar4);
    } while (plVar4 != unaff_R12);
  }
  func_0x0ce75570();
  lVar2 = in_stack_00000038;
  if (in_stack_00000038 != 0) {
    if (in_stack_00000038 != lStack0000000000000040) {
      lVar5 = lStack0000000000000040;
      do {
        lVar1 = lVar5 + -0x18;
        if ((ulong)*(uint *)(lVar5 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4085c8 + (ulong)*(uint *)(lVar5 + -8) * 8))(&stack0x0000000f,lVar1);
        }
        *(undefined4 *)(lVar5 + -8) = 0xffffffff;
        lVar5 = lVar1;
      } while (lVar1 != lVar2);
    }
    func_0x0412a280(in_stack_00000038,lStack0000000000000048 - in_stack_00000038);
    unaff_R13 = in_stack_00000058;
  }
  lVar5 = in_stack_00000020;
  lVar2 = in_stack_00000028;
  if (in_stack_00000020 != 0) {
    for (; lVar5 != lVar2; lVar2 = lVar2 + -0x18) {
      if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -8),*(ulong *)(lVar2 + -0x18) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(lVar5,CONCAT44(uStack0000000000000034,iStack0000000000000030) - lVar5);
  }
  lVar2 = *unaff_R13;
  lVar5 = unaff_R13[3];
  *in_stack_00000018 = in_stack_00000010;
  in_stack_00000018[1] = (in_stack_00000010 - lVar2) * 2 + lVar5;
  *(undefined1 *)(in_stack_00000018 + 2) = 1;
  return;
}


