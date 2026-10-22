/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d8520
 * Label: br::worldgen::processors::Gravity::vslot2
 * Body:  [[0d1d8520, 0d1d8540] [0d1d8550, 0d1d8787] [0d1d8790, 0d1d8820] [0d1d8830, 0d1d88a8] [0d1d88b0, 0d1d8952] [0d1d8d46, 0d1d8d5f] [0d1d8d68, 0d1d8d78] [0d1d8ddd, 0d1d8e27]]
 * Ghidra: wg_br__worldgen__processors__Gravity__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d8653) */
/* WARNING: Removing unreachable block (ram,0x0d1d8702) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__Gravity__vslot2(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  undefined8 *puVar5;
  long *unaff_RBP;
  undefined8 *puVar6;
  bool bVar7;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000088;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  func_0x0412a280(param_1,param_2 - param_1);
  lVar2 = in_stack_00000030;
  lVar1 = in_stack_00000038;
  if (in_stack_00000030 != 0) {
    for (; lVar2 != lVar1; lVar1 = lVar1 + -0x50) {
      if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                        *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
      }
    }
    in_stack_00000038 = lVar2;
    func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
  }
  if ((*(byte *)(in_stack_00000088 + 0x18) & 1) != 0) {
    unaff_RBX = *(undefined8 *)(in_stack_00000088 + 0x28);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f7b8fb8), iVar3 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  in_stack_00000068 = unaff_RBX;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&stack0x00000020,&DAT_0f7b8f98,&stack0x00000068);
  if (in_stack_00000060 == 0) {
    func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
  }
  lVar1 = in_stack_00000048;
  if ((in_stack_00000060 & 1) == 0) {
    lVar2 = in_stack_00000050;
    if (in_stack_00000048 != 0) {
      while (lVar1 != lVar2) {
        func_0x048b3e80(lVar2 + -0x40);
        lVar2 = lVar2 + -0x40;
      }
      in_stack_00000050 = lVar1;
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    lVar2 = in_stack_00000030;
    lVar1 = in_stack_00000038;
    if (in_stack_00000030 != 0) {
      for (; lVar2 != lVar1; lVar1 = lVar1 + -0x50) {
        if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                          *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000038 = lVar2;
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
    }
    bVar7 = false;
  }
  else {
    in_stack_000000a0 = 0;
    func_0x0ee768f0(&stack0x00000020,*unaff_RBP,in_stack_00000098,0x1000,&stack0x000000a0);
    if (in_stack_00000060 == 0) {
      func_0x0eedeb80(2,0x2d,&stack0x00000020,&stack0x00000000,&stack0x00000068);
    }
    lVar1 = in_stack_00000048;
    if ((in_stack_00000060 & 1) == 0) {
      lVar2 = in_stack_00000050;
      if (in_stack_00000048 != 0) {
        while (lVar1 != lVar2) {
          func_0x048b3e80(lVar2 + -0x40);
          lVar2 = lVar2 + -0x40;
        }
        in_stack_00000050 = lVar1;
        func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
      }
      lVar2 = in_stack_00000030;
      lVar1 = in_stack_00000038;
      if (in_stack_00000030 != 0) {
        for (; lVar2 != lVar1; lVar1 = lVar1 + -0x50) {
          if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                            *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
          }
        }
        in_stack_00000038 = lVar2;
        func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
      }
    }
    puVar4 = *(undefined8 **)(in_stack_00000088 + 0x2038);
    if (*(undefined8 **)(in_stack_00000088 + 0x2038) == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(in_stack_00000088 + 0x2038);
      puVar6 = puVar5;
    }
    else {
      do {
        while (puVar5 = puVar4, *(int *)((long)puVar5 + 0x1c) < 1) {
          if (-1 < *(int *)((long)puVar5 + 0x1c)) goto LAB_0d1d8944;
          puVar4 = (undefined8 *)puVar5[1];
          if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
            puVar6 = puVar5 + 1;
            goto LAB_0d1d88d7;
          }
        }
        puVar4 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
LAB_0d1d88d7:
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = puVar5;
    *puVar6 = puVar4;
    if (**(long **)(in_stack_00000088 + 0x2030) != 0) {
      *(long *)(in_stack_00000088 + 0x2030) = **(long **)(in_stack_00000088 + 0x2030);
    }
    func_0x048bed00(*(undefined8 *)(in_stack_00000088 + 0x2038),puVar4);
    *(long *)(in_stack_00000088 + 0x2040) = *(long *)(in_stack_00000088 + 0x2040) + 1;
    puVar5 = puVar4;
LAB_0d1d8944:
    *(undefined1 *)(puVar5 + 4) = 0;
    bVar7 = *unaff_RBP != 0;
  }
  return bVar7;
}


