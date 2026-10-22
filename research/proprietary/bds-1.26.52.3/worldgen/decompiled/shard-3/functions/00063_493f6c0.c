/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493f6c0
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[0493f6c0, 0493f70b] [0493f710, 0493f77e] [0493f780, 0493f840]]
 * Ghidra: FUN_0493f6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0493f6c0(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long unaff_RBX;
  undefined4 uVar7;
  long *unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000070;
  
  while( true ) {
    iVar5 = (**(code **)(**(long **)(unaff_RBX + 0x10) + 0x30))();
    if (iVar5 == 1) {
      uVar7 = 2;
      goto LAB_0493f81d;
    }
    if (iVar5 == 2) break;
    lVar1 = *unaff_R14;
    *unaff_R14 = unaff_RBX;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    if (*(long *)(unaff_RBX + 0xd0) == 0) {
      in_stack_00000030 = 0;
    }
    else {
      (**(code **)(*(long *)(unaff_RBX + 0xd0) + 0x18))();
      in_stack_00000030 = *unaff_R13;
    }
    (**(code **)(*in_stack_00000020 + 0x10))(&stack0x00000070,in_stack_00000020,&stack0x00000030);
    if (in_stack_00000030 != 0) {
      (**(code **)(in_stack_00000030 + 8))(&stack0x00000030);
    }
    if (*(char *)(unaff_RBX + 0x160) == '\x01') {
      if (*unaff_R15 != 0) {
        (**(code **)(*unaff_R15 + 8))(unaff_R15);
      }
      *(undefined1 *)(unaff_RBX + 0x160) = 0;
    }
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
    if (in_stack_00000070 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*in_stack_00000070)(&stack0x00000070,unaff_R15);
      puVar6 = in_stack_00000070;
    }
    *(undefined8 **)(unaff_RBX + 0x120) = puVar6;
    *(undefined1 *)(unaff_RBX + 0x160) = 1;
    lVar3 = _DAT_0f778538;
    bVar2 = DAT_0f778530;
    *unaff_R14 = lVar1;
    uVar7 = 1;
    if (((*(char *)(unaff_RBX + 8) != '\x01') || ((bVar2 & 1) != 0)) || (lVar3 != 0))
    goto LAB_0493f81d;
    func_0x0412d680(in_stack_00000018);
    iVar5 = *(int *)(unaff_RBX + 0x198);
    func_0x0412d6b0(in_stack_00000018);
    if ((iVar5 == 3) ||
       (cVar4 = (**(code **)(*in_stack_00000028 + 0x18))(), unaff_R14 = in_stack_00000010,
       cVar4 == '\0')) goto LAB_0493f81d;
  }
  uVar7 = 2;
LAB_0493f81d:
  func_0x0493ee90();
  return uVar7;
}


