/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf19d20
 * Label: string:density
 * Body:  [[0bf19d20, 0bf19e84]]
 * Ghidra: FUN_0bf19d20
 */


void FUN_0bf19d20(void)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint in_EAX;
  long *plVar5;
  long in_RCX;
  long *plVar6;
  long unaff_RBX;
  ulong uVar7;
  long lVar8;
  undefined *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  plVar5 = (long *)((ulong)*(uint *)(in_RCX + 0x38) +
                   (ulong)((int)(*(long *)(in_RCX + 0x40) - (ulong)*(uint *)(in_RCX + 0x38) >> 3) -
                           1U & 0xfc0dbbb5) * 8);
  do {
    if (*plVar5 == -1) {
      plVar6 = *(long **)(in_RCX + 0x58);
      plVar5 = plVar6;
      goto LAB_0bf19d68;
    }
    lVar8 = *plVar5 * 0x20;
    plVar5 = (long *)(*(long *)(in_RCX + 0x50) + lVar8);
  } while (*(int *)(*(long *)(in_RCX + 0x50) + 8 + lVar8) != -0x3f2444b);
  plVar6 = *(long **)(in_RCX + 0x58);
LAB_0bf19d68:
  if ((plVar5 != plVar6) && (lVar8 = plVar5[2], lVar8 != 0)) {
    uVar7 = (ulong)((in_EAX & 0x3ffff) >> 0xb);
    if ((uVar7 < (ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8) >> 3)) &&
       (lVar2 = *(long *)(*(long *)(lVar8 + 8) + uVar7 * 8), lVar2 != 0)) {
      uVar1 = *(uint *)(lVar2 + (ulong)(in_EAX & 0x7ff) * 4);
      if ((in_EAX & 0xfffc0000 ^ uVar1) < 0x3ffff) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8));
        if (lVar8 != 0) {
          in_stack_00000040 = *(undefined8 *)(lVar8 + (ulong)(uVar1 & 0x7f) * 8);
          in_stack_00000010 = 0x100000002;
          in_stack_00000018 = 0;
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          in_stack_00000030 = 0;
          in_stack_00000008 = &UNK_0f139068;
          in_stack_00000038 = 0;
          in_stack_00000048 = 1;
          plVar5 = (long *)(**(code **)(**(long **)(unaff_RBX + 0x1d0) + 0xa48))();
          (**(code **)(*plVar5 + 0x18))(plVar5,&stack0x00000008);
          if (*(long **)(unaff_RBX + 0x1d0) != (long *)0x0) {
            cVar4 = (**(code **)(**(long **)(unaff_RBX + 0x1d0) + 0x9f0))();
            if (cVar4 == '\0') {
              func_0x0bf19900();
            }
          }
          return;
        }
      }
    }
  }
  func_0x04890760();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


