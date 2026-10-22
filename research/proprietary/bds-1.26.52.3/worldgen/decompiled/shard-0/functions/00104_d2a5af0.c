/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a5af0
 * Label: FlatWorldGenerator::vslot55
 * Body:  [[0d2a5af0, 0d2a5b0f] [0d2a5e34, 0d2a5f33]]
 * Ghidra: wg_FlatWorldGenerator__vslot55
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FlatWorldGenerator__vslot55(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_RBX;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  bool in_OF;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000058;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 *in_stack_000000b0;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  long in_stack_000000d8;
  long in_stack_000000e0;
  
  uStack00000000000000d4 = (undefined4)((ulong)param_1 >> 0x20);
  if (in_OF) {
    in_stack_00000058._2_2_ = 0xfeff;
    in_stack_00000058._4_1_ = 0;
    in_stack_000000d8 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
    in_stack_000000e0 = 0;
    in_stack_000000d0 = (int)param_1;
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    uVar7 = _UNK_013ad1ee;
    in_stack_000000a0 = 0x51;
    in_stack_000000a8 = 0x4a;
    *(ulong *)((long)puVar6 + 0x3a) = CONCAT26(_UNK_013ad1ec,_DAT_013ad1e6);
    *(undefined8 *)((long)puVar6 + 0x42) = uVar7;
    uVar7 = CONCAT62(_DAT_013ad1e6,_UNK_013ad1e4);
    *(undefined8 *)(puVar6 + 0xc) = _DAT_013ad1dc;
    *(undefined8 *)(puVar6 + 0xe) = uVar7;
    uVar7 = _UNK_013ad1d4;
    *(undefined8 *)(puVar6 + 8) = _DAT_013ad1cc;
    *(undefined8 *)(puVar6 + 10) = uVar7;
    uVar7 = _UNK_013ad1c4;
    *(undefined8 *)(puVar6 + 4) = _DAT_013ad1bc;
    *(undefined8 *)(puVar6 + 6) = uVar7;
    uVar4 = _UNK_013ad1b8;
    uVar3 = _UNK_013ad1b4;
    uVar2 = _UNK_013ad1b0;
    *puVar6 = _DAT_013ad1ac;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x4a) = 0;
    in_stack_000000b0 = puVar6;
    uVar7 = func_0x0d6b13c0(&stack0x00000010,0x10,&stack0x000000d0,&stack0x000000a0);
    func_0x05d86750(&stack0x000004f8,uVar7);
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
    lVar1 = CONCAT44(uStack00000000000000d4,in_stack_000000d0);
    if (lVar1 != 0) {
      lVar8 = lVar1;
      lVar10 = in_stack_000000d8;
      if (lVar1 != in_stack_000000d8) {
        do {
          if ((*(byte *)(lVar10 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar10 + -8),
                            *(ulong *)(lVar10 + -0x18) & 0xfffffffffffffffe);
          }
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != lVar1);
        lVar8 = CONCAT44(uStack00000000000000d4,in_stack_000000d0);
      }
      in_stack_000000d8 = lVar1;
      func_0x0412a280(lVar8,in_stack_000000e0 - lVar8);
    }
    puVar9 = &stack0x00000010;
  }
  else {
    cVar5 = func_0x0d2a6170((ulong)&stack0x00000180 & 0xffffffff,&stack0x00000010,&stack0x00000110);
    func_0x04907660(&stack0x00000038);
    if (in_stack_00000020 != 0) {
      in_stack_00000028 = in_stack_00000020;
      func_0x0412a280(in_stack_00000020,in_stack_00000030 - in_stack_00000020);
    }
    if (cVar5 == '\0') {
      func_0x0d6b2c60(&stack0x000004a8);
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
      puVar9 = &stack0x000004a8;
      func_0x0c4a4310(unaff_RBX + 0xc,puVar9);
      *(undefined1 *)(unaff_RBX + 3) = 0;
    }
    else {
      func_0x0d6b2c60(&stack0x00000458);
      func_0x0d2a6400();
      puVar9 = &stack0x00000458;
    }
  }
  func_0x05d85c50(puVar9);
  func_0x0d2a6760(&stack0x00000110);
  func_0x0490a470(&stack0x00000180);
  return;
}


