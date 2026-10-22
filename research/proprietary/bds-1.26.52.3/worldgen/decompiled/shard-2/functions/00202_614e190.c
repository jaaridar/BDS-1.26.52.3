/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614e190
 * Label: Editor::Services::EditorJigsawService::vslot20
 * Body:  [[0614e190, 0614e366]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot20
 */


/* WARNING: Removing unreachable block (ram,0x0614e332) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Editor__Services__EditorJigsawService__vslot20(void)

{
  long lVar1;
  undefined8 uVar2;
  char *in_RAX;
  undefined8 *puVar3;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined5 uStack00000000000000c8;
  undefined3 uStack00000000000000cd;
  undefined5 in_stack_000000d0;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar3 = &UNK_0f01e170;
  if (in_stack_00000020 != (long *)0x0) {
    lVar1 = *in_stack_00000020;
    in_stack_00000020 = puVar3;
    (**(code **)(lVar1 + 8))();
    puVar3 = in_stack_00000020;
  }
  in_stack_00000020 = puVar3;
  if ((in_stack_00000048 & 1) != 0) {
    func_0x0412a280(in_stack_00000058,in_stack_00000048 & 0xfffffffffffffffe);
  }
  in_stack_00000058 = in_stack_00000018;
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000010;
  func_0x0412f5e0(&stack0x00000030);
  uVar2 = in_stack_00000028;
  puVar3 = in_stack_00000020;
  in_stack_00000020 = (long *)0x0;
  in_stack_00000028 = 0;
  *unaff_RBX = puVar3;
  unaff_RBX[1] = uVar2;
  unaff_RBX[4] = in_stack_00000040;
  unaff_RBX[2] = in_stack_00000030;
  unaff_RBX[3] = in_stack_00000038;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  unaff_RBX[7] = in_stack_00000058;
  unaff_RBX[5] = in_stack_00000048;
  unaff_RBX[6] = in_stack_00000050;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  unaff_RBX[8] = in_stack_00000060;
  unaff_RBX[9] = in_stack_00000068;
  unaff_RBX[10] = in_stack_00000070;
  *unaff_R12 = 0;
  unaff_R12[1] = 0;
  unaff_R12[2] = 0;
  unaff_RBX[0xb] = in_stack_00000078;
  unaff_RBX[0xc] = in_stack_00000080;
  unaff_RBX[0xd] = in_stack_00000088;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  *(undefined4 *)(unaff_RBX + 0xe) = in_stack_00000090;
  unaff_RBX[0xf] = in_stack_00000098;
  unaff_RBX[0x10] = in_stack_000000a0;
  unaff_RBX[0x11] = in_stack_000000a8;
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  unaff_RBX[0x14] = in_stack_000000c0;
  *(undefined4 *)(unaff_RBX + 0x12) = uStack00000000000000b0;
  *(undefined4 *)((long)unaff_RBX + 0x94) = uStack00000000000000b4;
  *(undefined4 *)(unaff_RBX + 0x13) = uStack00000000000000b8;
  *(undefined4 *)((long)unaff_RBX + 0x9c) = uStack00000000000000bc;
  _uStack00000000000000b0 = 0;
  _uStack00000000000000b8 = 0;
  in_stack_000000c0 = 0;
  *(ulong *)((long)unaff_RBX + 0xad) = CONCAT53(in_stack_000000d0,uStack00000000000000cd);
  unaff_RBX[0x15] = CONCAT35(uStack00000000000000cd,uStack00000000000000c8);
  func_0x048b0bc0(&stack0x00000020);
  return;
}


