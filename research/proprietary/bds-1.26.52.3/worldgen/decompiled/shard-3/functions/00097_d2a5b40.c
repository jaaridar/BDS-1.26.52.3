/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a5b40
 * Label: FlatWorldGenerator::vslot51
 * Body:  [[0d2a5b40, 0d2a5cdd] [0d2a5ce0, 0d2a5d06] [0d2a5f34, 0d2a5f8c] [0d2a5faf, 0d2a5fbf]]
 * Ghidra: wg_FlatWorldGenerator__vslot51
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot51
               (char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_EAX;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_RBX;
  long lVar7;
  long lVar8;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 *in_stack_000000b0;
  int iStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  long in_stack_000000d8;
  long lStack00000000000000e0;
  
  *param_1 = *param_1 + param_4;
  iStack00000000000000d0 = iStack00000000000000d0 - (in_EAX & 0xffffff5c);
  lStack00000000000000e0 = 0;
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  uVar6 = _UNK_013ad1ee;
  in_stack_000000a0 = 0x51;
  in_stack_000000a8 = 0x4a;
  *(ulong *)((long)puVar5 + 0x3a) = CONCAT26(_UNK_013ad1ec,_DAT_013ad1e6);
  *(undefined8 *)((long)puVar5 + 0x42) = uVar6;
  uVar6 = CONCAT62(_DAT_013ad1e6,_UNK_013ad1e4);
  *(undefined8 *)(puVar5 + 0xc) = _DAT_013ad1dc;
  *(undefined8 *)(puVar5 + 0xe) = uVar6;
  uVar6 = _UNK_013ad1d4;
  *(undefined8 *)(puVar5 + 8) = _DAT_013ad1cc;
  *(undefined8 *)(puVar5 + 10) = uVar6;
  uVar6 = _UNK_013ad1c4;
  *(undefined8 *)(puVar5 + 4) = _DAT_013ad1bc;
  *(undefined8 *)(puVar5 + 6) = uVar6;
  uVar4 = _UNK_013ad1b8;
  uVar3 = _UNK_013ad1b4;
  uVar2 = _UNK_013ad1b0;
  *puVar5 = _DAT_013ad1ac;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined1 *)((long)puVar5 + 0x4a) = 0;
  in_stack_000000b0 = puVar5;
  uVar6 = func_0x0d6b13c0(&stack0x00000010,0x10,&stack0x000000d0,&stack0x000000a0);
  func_0x05d86750(&stack0x000004f8,uVar6);
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  *(undefined1 *)(unaff_RBX + 3) = 1;
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  unaff_RBX[9] = &UNK_0488e0b0;
  *(undefined4 *)(unaff_RBX + 0xb) = 0x48b5725f;
  unaff_RBX[10] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x5c) = 0;
  unaff_RBX[0xc] = 0;
  unaff_RBX[0xd] = 0;
  unaff_RBX[0xe] = 0;
  unaff_RBX[0xf] = 0;
  unaff_RBX[0x10] = 0;
  unaff_RBX[0x11] = 0;
  unaff_RBX[0x12] = 0;
  unaff_RBX[0x13] = 0;
  unaff_RBX[0x14] = 0;
  *(undefined4 *)(unaff_RBX + 0x15) = 0xfefffffc;
  *(undefined1 *)((long)unaff_RBX + 0xac) = 0;
  func_0x0c4a4310(unaff_RBX + 0xc,&stack0x000004f8);
  *(undefined1 *)(unaff_RBX + 3) = 0;
  func_0x05d85c50(&stack0x000004f8);
  if ((in_stack_000000a0 & 1) != 0) {
    func_0x0412a280(in_stack_000000b0,in_stack_000000a0 & 0xfffffffffffffffe);
  }
  lVar1 = CONCAT44(uStack00000000000000d4,iStack00000000000000d0);
  if (lVar1 != 0) {
    lVar7 = lVar1;
    lVar8 = in_stack_000000d8;
    if (lVar1 != in_stack_000000d8) {
      do {
        if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe
                         );
        }
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != lVar1);
      lVar7 = CONCAT44(uStack00000000000000d4,iStack00000000000000d0);
    }
    in_stack_000000d8 = lVar1;
    func_0x0412a280(lVar7,lStack00000000000000e0 - lVar7);
  }
  func_0x05d85c50(&stack0x00000010);
  func_0x0d2a6760(&stack0x00000110);
  func_0x0490a470(&stack0x00000180);
  return;
}



/* ---- referenced strings ----
 * 0x13ad1ac  Unsupported input format: PUV's CerealParser only supports JSON and Binary
 * 0x13ad1bc  t format: PUV's CerealParser only supports JSON and Binary
 * 0x13ad1cc  CerealParser only supports JSON and Binary
 * 0x13ad1dc  y supports JSON and Binary
 * 0x13ad1e6   JSON and Binary
 */
