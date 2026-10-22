/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d86d0
 * Label: br::worldgen::processors::Gravity::vslot5
 * Body:  [[0d1d86d0, 0d1d8787]]
 * Ghidra: wg_br__worldgen__processors__Gravity__vslot5
 */


/* WARNING: Removing unreachable block (ram,0x0d1d8702) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__Gravity__vslot5(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *unaff_RBP;
  long unaff_R12;
  undefined8 *puVar5;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  byte in_stack_00000060;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  func_0x0eedeb80(2,0x2d,&stack0x00000020);
  lVar2 = in_stack_00000048;
  if ((in_stack_00000060 & 1) == 0) {
    lVar1 = in_stack_00000050;
    if (in_stack_00000048 != 0) {
      while (lVar2 != lVar1) {
        func_0x048b3e80(lVar1 + -0x40);
        lVar1 = lVar1 + -0x40;
      }
      in_stack_00000050 = lVar2;
      func_0x0412a280(in_stack_00000048,in_stack_00000058 - in_stack_00000048);
    }
    lVar1 = in_stack_00000030;
    lVar2 = in_stack_00000038;
    if (in_stack_00000030 != 0) {
      for (; lVar1 != lVar2; lVar2 = lVar2 + -0x50) {
        if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                          *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000038 = lVar1;
      func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
    }
  }
  puVar3 = *(undefined8 **)(unaff_R12 + 0x2038);
  if (*(undefined8 **)(unaff_R12 + 0x2038) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(unaff_R12 + 0x2038);
    puVar5 = puVar4;
  }
  else {
    do {
      while (puVar4 = puVar3, *(int *)((long)puVar4 + 0x1c) < 1) {
        if (-1 < *(int *)((long)puVar4 + 0x1c)) goto LAB_0d1d8944;
        puVar3 = (undefined8 *)puVar4[1];
        if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
          puVar5 = puVar4 + 1;
          goto LAB_0d1d88d7;
        }
      }
      puVar3 = (undefined8 *)*puVar4;
      puVar5 = puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0d1d88d7:
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar4;
  *puVar5 = puVar3;
  if (**(long **)(unaff_R12 + 0x2030) != 0) {
    *(long *)(unaff_R12 + 0x2030) = **(long **)(unaff_R12 + 0x2030);
  }
  func_0x048bed00(*(undefined8 *)(unaff_R12 + 0x2038),puVar3);
  *(long *)(unaff_R12 + 0x2040) = *(long *)(unaff_R12 + 0x2040) + 1;
  puVar4 = puVar3;
LAB_0d1d8944:
  *(undefined1 *)(puVar4 + 4) = 0;
  return *unaff_RBP != 0;
}


