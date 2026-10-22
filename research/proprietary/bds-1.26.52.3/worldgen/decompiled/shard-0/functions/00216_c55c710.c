/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc55c710
 * Label: JigsawBlock::vslot1
 * Body:  [[0c55c710, 0c55c800] [0c55c810, 0c55c8c6] [0c55c8d0, 0c55c920]]
 * Ghidra: wg_JigsawBlock__vslot1
 */


/* WARNING: Removing unreachable block (ram,0x0c55c7c0) */
/* WARNING: Removing unreachable block (ram,0x0c55c7d1) */
/* WARNING: Removing unreachable block (ram,0x0c55c819) */
/* WARNING: Removing unreachable block (ram,0x0c55c820) */
/* WARNING: Removing unreachable block (ram,0x0c55c827) */
/* WARNING: Removing unreachable block (ram,0x0c55c810) */
/* WARNING: Removing unreachable block (ram,0x0c55c83a) */
/* WARNING: Removing unreachable block (ram,0x0c55c7b2) */
/* WARNING: Removing unreachable block (ram,0x0c55c7d6) */
/* WARNING: Removing unreachable block (ram,0x0c55c7f2) */
/* WARNING: Removing unreachable block (ram,0x0c55c7ff) */
/* WARNING: Removing unreachable block (ram,0x0c55c83f) */

void wg_JigsawBlock__vslot1(void)

{
  ulong in_RAX;
  int *piVar1;
  char in_CL;
  undefined4 *unaff_RBX;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  piVar1 = (int *)(in_RAX & 0xffffffffffffff10);
  *piVar1 = *piVar1 + (int)piVar1;
  *(char *)((long)piVar1 + -0x77) = *(char *)((long)piVar1 + -0x77) + in_CL;
  func_0x0c55d990();
  in_stack_00000128 = uStack0000000000000008;
  *unaff_RBX = unaff_retaddr;
  unaff_RBX[1] = unaff_retaddr_00;
  unaff_RBX[2] = uStack0000000000000008;
  unaff_RBX[3] = uStack000000000000000c;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  *(undefined1 *)(unaff_RBX + 0x10) = 0;
  unaff_RBX[4] = uStack0000000000000010;
  unaff_RBX[5] = uStack0000000000000014;
  unaff_RBX[6] = uStack0000000000000018;
  unaff_RBX[7] = uStack000000000000001c;
  *(undefined8 *)(unaff_RBX + 8) = in_stack_00000020;
  unaff_RBX[10] = uStack0000000000000028;
  unaff_RBX[0xb] = uStack000000000000002c;
  unaff_RBX[0xc] = uStack0000000000000030;
  unaff_RBX[0xd] = uStack0000000000000034;
  *(undefined8 *)(unaff_RBX + 0xe) = in_stack_00000038;
  func_0x048e6d60(&stack0x00000120);
  if (in_stack_00000090 == '\0') {
    if (in_stack_00000078 != 0) {
      while (in_stack_00000078 != in_stack_00000080) {
        in_stack_00000080 = in_stack_00000080 + -0x40;
        func_0x048b3e80(in_stack_00000080);
      }
      func_0x0412a280(in_stack_00000078,in_stack_00000088 - in_stack_00000078);
    }
    if (in_stack_00000060 != 0) {
      for (; in_stack_00000060 != in_stack_00000068; in_stack_00000068 = in_stack_00000068 + -0x50)
      {
        if ((*(char *)(in_stack_00000068 + -8) == '\x01') &&
           ((*(byte *)(in_stack_00000068 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000068 + -0x20),
                          *(ulong *)(in_stack_00000068 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000060,in_stack_00000070 - in_stack_00000060);
    }
  }
  return;
}


