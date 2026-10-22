/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x497efb0
 * Label: callee-of:0x517c470
 * Body:  [[0497efb0, 0497f1cc] [0497f1d0, 0497f248] [0497f250, 0497f30f]]
 * Ghidra: FUN_0497efb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0497efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined *param_9,undefined8 param_10,undefined8 param_11,ulong param_12,
                 ulong param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,char param_18,undefined8 param_19,long *param_20,
                 undefined8 param_21)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  char cVar8;
  int *in_RAX;
  int *piVar9;
  ulong unaff_RBP;
  ulong unaff_R13;
  long *unaff_R14;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong uVar10;
  ulong unaff_retaddr;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_00000128;
  uint *in_stack_000001a8;
  byte bVar4;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)((long)in_RAX + -0x39) = *(char *)((long)in_RAX + -0x39) + param_4;
  cVar8 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  pbVar1 = (byte *)((long)in_RAX + -0x77);
  bVar3 = *pbVar1;
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + param_4;
  uVar10 = (ulong)(in_NT & 1) * 0x4000 | (ulong)SCARRY1(bVar4,param_4) * 0x800 |
           (ulong)(in_IF & 1) * 0x200 | (ulong)(in_TF & 1) * 0x100 |
           (ulong)((char)*pbVar1 < '\0') * 0x80 | (ulong)(*pbVar1 == 0) * 0x40 |
           (ulong)(in_AF & 1) * 0x10 | (ulong)((POPCOUNT(*pbVar1) & 1U) == 0) * 4 |
           (ulong)CARRY1(bVar3,param_4) | (ulong)(in_ID & 1) * 0x200000 |
           (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
           (ulong)(in_AC & 1) * 0x40000;
  piVar9 = (int *)((ulong)in_RAX & 0xffffffffffffff48);
  *piVar9 = *piVar9 + (int)piVar9;
  *(char *)((long)piVar9 + -0x39) = *(char *)((long)piVar9 + -0x39) + param_4;
  cVar8 = (char)piVar9;
  *(char *)piVar9 = (char)*piVar9 + cVar8;
  *(char *)piVar9 = (char)*piVar9 + cVar8;
  *(char *)piVar9 = (char)*piVar9 + cVar8;
  *(char *)((long)piVar9 + -0x73) = *(char *)((long)piVar9 + -0x73) + param_4;
  func_0x0ee33d90(&param_9,param_2,&stack0x00000130,0);
  func_0x0497f720(&param_19,&param_9);
  if ((param_13 & unaff_RBP) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_13 & unaff_R13) - 8);
  }
  param_13 = 0;
  if ((param_12 & unaff_RBP) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_12 & unaff_R13) - 8);
  }
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  if ((*unaff_R14 == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014adc19),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*unaff_R14 == '\0') &&
     (cVar8 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014adc19),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar6 = (long *)unaff_R14[2];
  param_15._0_4_ = (uint)param_15 & 0xffffff00;
  param_18 = '\0';
  if ((byte)in_stack_000001a8[6] == 1) {
    if ((*in_stack_000001a8 & 1) == 0) {
      param_17 = *(undefined8 *)(in_stack_000001a8 + 4);
      param_15._0_4_ = *in_stack_000001a8;
      param_15._4_4_ = in_stack_000001a8[1];
      param_16._0_4_ = in_stack_000001a8[2];
      param_16._4_4_ = in_stack_000001a8[3];
    }
    else {
      func_0x0412e5e0(&param_15,*(undefined8 *)(in_stack_000001a8 + 4),
                      *(undefined8 *)(in_stack_000001a8 + 2));
    }
    param_18 = '\x01';
  }
  (**(code **)(*plVar6 + 0x88))(plVar6,&stack0x00000148,&param_15);
  if ((param_18 == '\x01') && (((uint)param_15 & 1) != 0)) {
    func_0x0412a280(param_17,CONCAT44(param_15._4_4_,(uint)param_15) & 0xfffffffffffffffe);
  }
  param_9 = &UNK_0f47b808;
  param_10 = 0;
  param_11 = 0;
  param_12 = 0;
  param_13 = 0;
  func_0x0d62e5e0(&stack0x00000148,&param_9,in_stack_00000128);
  func_0x0d62d000(&param_9);
  if (uVar10 != 0) {
    for (; uVar10 != unaff_retaddr; unaff_retaddr = unaff_retaddr - 0x30) {
      plVar6 = *(long **)(unaff_retaddr - 8);
      if (plVar6 == (long *)0x0) {
LAB_0497f202:
        uVar7 = *(ulong *)(unaff_retaddr - 0x20);
      }
      else {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar5 != 0) goto LAB_0497f202;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
        uVar7 = *(ulong *)(unaff_retaddr - 0x20);
      }
      if ((uVar7 & unaff_RBP) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar7 & unaff_R13) - 8);
      }
      *(undefined8 *)(unaff_retaddr - 0x20) = 0;
      if ((*(ulong *)(unaff_retaddr - 0x28) & unaff_RBP) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(*(ulong *)(unaff_retaddr - 0x28) & unaff_R13) - 8);
      }
      *(undefined8 *)(unaff_retaddr - 0x28) = 0;
    }
    func_0x0412a280(uVar10,param_7 - uVar10);
  }
  plVar6 = param_20;
  param_19 = 0;
  param_20 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
    plVar6 = param_20;
    param_21 = 0;
    if (param_20 != (long *)0x0) {
      LOCK();
      plVar2 = param_20 + 1;
      lVar5 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*param_20 + 0x10))(param_20);
        func_0x0412c2d0(plVar6);
      }
    }
  }
  func_0x0d62d000(&stack0x00000148);
  return;
}


