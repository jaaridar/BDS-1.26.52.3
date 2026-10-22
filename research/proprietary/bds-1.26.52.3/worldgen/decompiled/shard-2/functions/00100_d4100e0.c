/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd4100e0
 * Label: string:minecraft:aggregate_feature
 * Body:  [[0d4100e0, 0d41010e] [0d4101f0, 0d410479]]
 * Ghidra: FUN_0d4100e0
 */


/* WARNING: Removing unreachable block (ram,0x0d410400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d4100e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long *param_9
                 )

{
  long *plVar1;
  byte *pbVar2;
  char *pcVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *in_RAX;
  undefined8 *unaff_RBX;
  undefined4 *unaff_RBP;
  undefined8 *unaff_R12;
  long *plVar10;
  long unaff_R13;
  long *unaff_R14;
  undefined8 unaff_R15;
  long *in_stack_00000058;
  long *in_stack_00000078;
  ulong in_stack_00000138;
  ulong in_stack_00000140;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_00000520;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  pcVar3 = (char *)((long)unaff_RBP + param_4 * 4 + 99);
  *pcVar3 = *pcVar3 + (byte)param_4;
  pbVar2 = (byte *)(param_4 * 5 + -0x10);
  *pbVar2 = *pbVar2 | (byte)param_4;
  if ((*(byte *)(in_RAX + 0x24) & 1) == 0) {
    unaff_R12[2] = *(undefined8 *)(in_RAX + 0x28);
    uVar9 = *(undefined8 *)(in_RAX + 0x26);
    *unaff_R12 = *(undefined8 *)(in_RAX + 0x24);
    unaff_R12[1] = uVar9;
  }
  else {
    func_0x04885070();
  }
  *unaff_RBX = *param_2;
  unaff_RBX[5] = unaff_R15;
  unaff_RBX[6] = unaff_R13;
  LOCK();
  *(long *)(unaff_R13 + 8) = *(long *)(unaff_R13 + 8) + 1;
  UNLOCK();
  *(undefined8 **)(unaff_RBP + 0x24) = unaff_RBX + 7;
  *(undefined8 **)(unaff_RBP + 0x24) = unaff_RBX + 7;
  uVar5 = *unaff_RBP;
  uVar6 = unaff_RBP[1];
  uVar7 = unaff_RBP[2];
  uVar8 = unaff_RBP[3];
  if (*(long *)(unaff_RBP + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(unaff_RBP + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)unaff_R14[0xf];
  *(undefined4 *)(unaff_R14 + 0xe) = uVar5;
  *(undefined4 *)((long)unaff_R14 + 0x74) = uVar6;
  *(undefined4 *)(unaff_R14 + 0xf) = uVar7;
  *(undefined4 *)((long)unaff_R14 + 0x7c) = uVar8;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(unaff_R14 + 0x10) = *(undefined1 *)((long)unaff_RBP + 0xa1);
  if (param_9 != (long *)0x0) {
    LOCK();
    plVar10 = param_9 + 1;
    lVar4 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*param_9 + 0x10))(param_9);
      func_0x0412c2d0(param_9);
    }
  }
  LOCK();
  lVar4 = *in_stack_00000078;
  *in_stack_00000078 = *in_stack_00000078 + -1;
  UNLOCK();
  if (lVar4 == 0) {
    (**(code **)(*unaff_R14 + 0x10))();
    func_0x0412c2d0();
    LOCK();
    lVar4 = *in_stack_00000078;
    *in_stack_00000078 = *in_stack_00000078 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar4 = *in_stack_00000078;
    *in_stack_00000078 = *in_stack_00000078 + -1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    (**(code **)(*unaff_R14 + 0x10))();
    func_0x0412c2d0();
  }
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  (**(code **)(*in_stack_00000058 + 0x10))(in_stack_00000058,&stack0x00000180);
  if ((in_stack_00000180 & 1) != 0) {
    func_0x0412a280(in_stack_00000190,in_stack_00000180 & 0xfffffffffffffffe);
  }
  if (in_stack_00000520 != 0) {
    (**(code **)(in_stack_00000520 + 8))(&stack0x00000520);
  }
  plVar10 = (long *)(param_7 + 0xd0);
  if (plVar10 != (long *)&stack0x00000320) {
    if (*plVar10 != 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    (*_UNK_0f4708a0)(&stack0x00000320,plVar10);
    *plVar10 = (long)&UNK_0f4708a0;
  }
  if ((in_stack_00000140 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000140 & 0xff00ffffffffffff) - 8);
  }
  if ((in_stack_00000138 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_00000138 & 0xff00ffffffffffff) - 8);
  }
  return;
}


