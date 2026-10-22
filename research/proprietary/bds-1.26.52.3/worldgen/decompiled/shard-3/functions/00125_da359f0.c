/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda359f0
 * Label: string:minecraft:biome
 * Body:  [[0da359f0, 0da35a5c] [0da35a60, 0da35ab3] [0da35ac0, 0da35b38] [0da35b40, 0da35b95] [0da35ba0, 0da35c05] [0da35c2a, 0da35c73]]
 * Ghidra: FUN_0da359f0
 */


undefined8 * FUN_0da359f0(void)

{
  uint uVar1;
  long lVar2;
  undefined1 *unaff_RBP;
  undefined1 *puVar3;
  long unaff_R12;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_R15;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000048;
  
  *unaff_RBP = 0;
  *(undefined4 *)(unaff_RBP + 0x40) = 0xffffffff;
  uVar1 = *(uint *)(unaff_R12 + 0x40);
  if ((ulong)uVar1 != 0xffffffff) {
    in_stack_00000010 = unaff_RBP;
    (**(code **)(&UNK_0f48eb38 + (ulong)uVar1 * 8))(&stack0x00000010);
    *(uint *)(unaff_RBP + 0x40) = uVar1;
  }
  lVar4 = in_stack_00000020[1];
  lVar5 = unaff_R15;
  puVar3 = unaff_RBP + 0x48;
  if (unaff_R15 != lVar4) {
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 0x40) = 0xffffffff;
      uVar1 = *(uint *)(lVar5 + 0x40);
      if ((ulong)uVar1 != 0xffffffff) {
        in_stack_00000010 = puVar3;
        (**(code **)(&UNK_0f48ef08 + (ulong)uVar1 * 8))(&stack0x00000010,lVar5);
        *(uint *)(puVar3 + 0x40) = uVar1;
      }
      lVar5 = lVar5 + 0x48;
      puVar3 = puVar3 + 0x48;
    } while (lVar5 != lVar4);
    lVar5 = unaff_R15;
    do {
      if ((ulong)*(uint *)(lVar5 + 0x40) != 0xffffffff) {
        (**(code **)(&UNK_0f48eb00 + (ulong)*(uint *)(lVar5 + 0x40) * 8))(&stack0x00000010,lVar5);
      }
      *(undefined4 *)(lVar5 + 0x40) = 0xffffffff;
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != lVar4);
    lVar5 = in_stack_00000020[1];
  }
  in_stack_00000020[1] = unaff_R15;
  lVar4 = *in_stack_00000020;
  lVar2 = lVar4 - unaff_R15;
  puVar3 = unaff_RBP + lVar2;
  lVar6 = lVar4;
  if (lVar2 != 0) {
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 0x40) = 0xffffffff;
      uVar1 = *(uint *)(lVar6 + 0x40);
      if ((ulong)uVar1 != 0xffffffff) {
        in_stack_00000010 = puVar3;
        (**(code **)(&UNK_0f48ef08 + (ulong)uVar1 * 8))(&stack0x00000010,lVar6);
        *(uint *)(puVar3 + 0x40) = uVar1;
      }
      lVar6 = lVar6 + 0x48;
      puVar3 = puVar3 + 0x48;
    } while (lVar6 != unaff_R15);
    do {
      if ((ulong)*(uint *)(lVar4 + 0x40) != 0xffffffff) {
        (**(code **)(&UNK_0f48eb00 + (ulong)*(uint *)(lVar4 + 0x40) * 8))(&stack0x00000010,lVar4);
      }
      *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
      lVar4 = lVar4 + 0x48;
    } while (lVar4 != unaff_R15);
    lVar4 = *in_stack_00000020;
  }
  *in_stack_00000020 = (long)(unaff_RBP + lVar2);
  in_stack_00000020[1] = (long)(unaff_RBP + 0x48 + (lVar5 - unaff_R15));
  lVar5 = in_stack_00000020[2];
  in_stack_00000020[2] = in_stack_00000048;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,lVar5 - lVar4);
  }
  *in_stack_00000028 = in_stack_00000018;
  in_stack_00000028[1] = &UNK_0da360e0;
  in_stack_00000028[4] = &UNK_0da36160;
  *(undefined4 *)(in_stack_00000028 + 6) = 0x575ab9c5;
  in_stack_00000028[5] = 0;
  *(undefined1 *)((long)in_stack_00000028 + 0x34) = 2;
  in_stack_00000028[2] = unaff_RBP;
  return in_stack_00000028;
}


