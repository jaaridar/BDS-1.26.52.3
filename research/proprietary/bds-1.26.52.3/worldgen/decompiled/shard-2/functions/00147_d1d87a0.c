/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d87a0
 * Label: br::worldgen::processors::JigsawReplacement::vslot2
 * Body:  [[0d1d87a0, 0d1d87bd] [0d1d8878, 0d1d88a8] [0d1d88b0, 0d1d8952] [0d1d8d46, 0d1d8d5f] [0d1d8d68, 0d1d8d78]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot2
 */


/* WARNING: Instruction at (ram,0x0d1d87a2) overlaps instruction at (ram,0x0d1d87a1)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__processors__JigsawReplacement__vslot2(undefined8 param_1,int param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_RBX;
  undefined8 *puVar3;
  long *unaff_RBP;
  long unaff_R12;
  long lVar4;
  long unaff_R14;
  undefined8 *puVar5;
  long in_stack_00000030;
  long in_stack_00000040;
  
  *(int *)((long)unaff_RBP + -0x14) = *(int *)((long)unaff_RBP + -0x14) + param_2;
  do {
    lVar4 = unaff_R14;
    if ((*(byte *)(unaff_R14 + -0x30) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(unaff_R14 + -0x20),
                      *(ulong *)(unaff_R14 + -0x30) & 0xfffffffffffffffe);
    }
    do {
      unaff_R14 = lVar4 + -0x50;
      if (unaff_R14 == unaff_RBX) {
        func_0x0412a280(in_stack_00000030,in_stack_00000040 - in_stack_00000030);
        puVar2 = *(undefined8 **)(unaff_R12 + 0x2038);
        if (*(undefined8 **)(unaff_R12 + 0x2038) != (undefined8 *)0x0) goto LAB_0d1d88bb;
        puVar3 = (undefined8 *)(unaff_R12 + 0x2038);
        puVar5 = puVar3;
        goto LAB_0d1d88d7;
      }
      pcVar1 = (char *)(lVar4 + -0x58);
      lVar4 = unaff_R14;
    } while (*pcVar1 != '\x01');
  } while( true );
LAB_0d1d88bb:
  puVar3 = puVar2;
  if (0 < *(int *)((long)puVar3 + 0x1c)) {
    puVar2 = (undefined8 *)*puVar3;
    puVar5 = puVar3;
    if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0d1d88d7;
    goto LAB_0d1d88bb;
  }
  if (-1 < *(int *)((long)puVar3 + 0x1c)) goto LAB_0d1d8944;
  puVar2 = (undefined8 *)puVar3[1];
  if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
    puVar5 = puVar3 + 1;
LAB_0d1d88d7:
    puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar2 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar3;
    *puVar5 = puVar2;
    if (**(long **)(unaff_R12 + 0x2030) != 0) {
      *(long *)(unaff_R12 + 0x2030) = **(long **)(unaff_R12 + 0x2030);
    }
    func_0x048bed00(*(undefined8 *)(unaff_R12 + 0x2038),puVar2);
    *(long *)(unaff_R12 + 0x2040) = *(long *)(unaff_R12 + 0x2040) + 1;
    puVar3 = puVar2;
LAB_0d1d8944:
    *(undefined1 *)(puVar3 + 4) = 0;
    return *unaff_RBP != 0;
  }
  goto LAB_0d1d88bb;
}


