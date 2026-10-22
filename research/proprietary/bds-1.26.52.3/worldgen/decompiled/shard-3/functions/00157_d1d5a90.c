/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5a90
 * Label: br::worldgen::WorldGenRandom::vslot5
 * Body:  [[0d1d5a90, 0d1d5ba7]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot5
 */


/* WARNING: Removing unreachable block (ram,0x0d1d64aa) */
/* WARNING: Removing unreachable block (ram,0x0d1d64b0) */
/* WARNING: Removing unreachable block (ram,0x0d1d64c1) */
/* WARNING: Removing unreachable block (ram,0x0d1d649a) */
/* WARNING: Removing unreachable block (ram,0x0d1d64c9) */
/* WARNING: Removing unreachable block (ram,0x0d1d66e3) */
/* WARNING: Removing unreachable block (ram,0x0d1d5aed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__WorldGenRandom__vslot5(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_RAX;
  undefined8 *in_RCX;
  ulong uVar9;
  byte *pbVar10;
  char *in_R10;
  undefined1 (*unaff_R12) [16];
  ulong unaff_R13;
  byte *unaff_R15;
  bool bVar11;
  long in_XMM0_Qb;
  long lStack0000000000000010;
  long lStack0000000000000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  char in_stack_00000040;
  undefined1 uStack0000000000000048;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  byte in_stack_000000e0;
  byte bStack00000000000000f0;
  undefined7 uStack00000000000000f1;
  undefined8 in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 *in_stack_00000120;
  undefined8 *in_stack_00000128;
  long in_stack_00000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  long in_stack_00000148;
  char in_stack_00000150;
  byte bStack0000000000000158;
  undefined7 uStack0000000000000159;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long *in_stack_000001c0;
  ulong in_stack_000001c8;
  
  *in_R10 = *in_R10 - (char)in_RAX;
  uVar8 = _UNK_0f459c00;
  uVar7 = _DAT_0f459bf8;
  uStack0000000000000048 = 0;
  lStack0000000000000010 = param_1;
  lStack0000000000000018 = in_XMM0_Qb;
  if (in_RAX < in_RCX) {
    in_RAX[2] = param_1;
    in_RAX[3] = in_XMM0_Qb;
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
    *(undefined1 *)(in_RAX + 4) = 0;
    *(undefined1 *)(in_RAX + 9) = 0;
    in_stack_000000b8 = in_RAX + 10;
  }
  else {
    in_stack_000000b8 = (undefined8 *)func_0x0489d2c0();
    in_stack_00000128 = in_stack_000000b8;
  }
  in_stack_000000d8 = in_stack_00000148;
  puVar6 = in_stack_00000120;
  *unaff_R12 = (undefined1  [16])0x0;
  *(undefined8 *)unaff_R12[1] = 0;
  in_stack_000000c8 = uStack0000000000000138;
  in_stack_000000d0 = uStack0000000000000140;
  _uStack0000000000000138 = (undefined1  [16])0x0;
  in_stack_00000148 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000a0 = in_stack_00000110;
  in_stack_000000a8 = in_stack_00000118;
  in_stack_000000b0 = in_stack_00000120;
  in_stack_000000c0 = in_stack_00000130;
  if (in_stack_00000150 == '\0') {
    in_stack_00000148 = 0;
    _uStack0000000000000138 = (undefined1  [16])0x0;
    in_stack_000000e0 = 0;
    puVar4 = in_stack_00000128;
    if (in_stack_00000120 != (undefined8 *)0x0) {
      for (; puVar6 != puVar4; puVar4 = puVar4 + -10) {
        if ((*(char *)(puVar4 + -1) == '\x01') && ((*(byte *)(puVar4 + -6) & 1) != 0)) {
          func_0x0412a280(puVar4[-4],puVar4[-6] & 0xfffffffffffffffe);
        }
      }
      in_stack_00000128 = puVar6;
      func_0x0412a280(in_stack_00000120,in_stack_00000130 - (long)in_stack_00000120);
    }
  }
  if ((in_stack_00000070 != (long *)0x0) &&
     (func_0x0ee56810(&stack0x00000000,&stack0x00000070), in_stack_00000040 == '\0')) {
    if (in_stack_00000028 != 0) {
      while (in_stack_00000028 != in_stack_00000030) {
        in_stack_00000030 = in_stack_00000030 + -0x40;
        func_0x048b3e80(in_stack_00000030);
      }
      func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
    }
    lVar5 = lStack0000000000000010;
    lVar3 = lStack0000000000000018;
    if (lStack0000000000000010 != 0) {
      for (; lVar5 != lVar3; lVar3 = lVar3 + -0x50) {
        if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                          *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack0000000000000018 = lVar5;
      func_0x0412a280(lStack0000000000000010,
                      (in_stack_00000020 & 0xffffffffffffff00) - lStack0000000000000010);
    }
  }
  plVar2 = in_stack_00000078;
  in_stack_00000078 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = in_stack_00000070;
  in_stack_00000070 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((bStack0000000000000158 & 1) != 0) {
    func_0x0412a280(in_stack_00000168,
                    CONCAT71(uStack0000000000000159,bStack0000000000000158) & 0xfffffffffffffffe);
  }
  lStack0000000000000010 = 0;
  in_stack_000001c8 = unaff_R13;
  func_0x0eedeb80(2,0x2d,&stack0x000000a0,&stack0x00000000,&stack0x000001c8);
  uVar7 = in_stack_00000170;
  lVar3 = in_stack_000000c8;
  if ((in_stack_000000e0 & 1) == 0) {
    lVar5 = in_stack_000000d0;
    if (in_stack_000000c8 != 0) {
      while (lVar3 != lVar5) {
        func_0x048b3e80(lVar5 + -0x40);
        lVar5 = lVar5 + -0x40;
      }
      in_stack_000000d0 = lVar3;
      func_0x0412a280(in_stack_000000c8,in_stack_000000d8 - in_stack_000000c8);
    }
    puVar4 = in_stack_000000b0;
    puVar6 = in_stack_000000b8;
    if (in_stack_000000b0 != (undefined8 *)0x0) {
      for (; puVar4 != puVar6; puVar6 = puVar6 + -10) {
        if ((*(char *)(puVar6 + -1) == '\x01') && ((*(byte *)(puVar6 + -6) & 1) != 0)) {
          func_0x0412a280(puVar6[-4],puVar6[-6] & 0xfffffffffffffffe);
        }
      }
      in_stack_000000b8 = puVar4;
      func_0x0412a280(in_stack_000000b0,in_stack_000000c0 - (long)in_stack_000000b0);
    }
    plVar2 = (long *)*in_stack_00000068;
    *in_stack_00000068 = 0;
  }
  else {
    plVar2 = (long *)*in_stack_00000068;
    *in_stack_00000068 = in_stack_000000a0;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((bStack00000000000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,
                    CONCAT71(uStack00000000000000f1,bStack00000000000000f0) & 0xfffffffffffffffe);
  }
  lVar3 = *in_stack_00000068;
  if (lVar3 != 0) {
    bVar11 = (*unaff_R15 & 1) != 0;
    pbVar10 = unaff_R15 + 1;
    if (bVar11) {
      pbVar10 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar9 = (ulong)(*unaff_R15 >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(unaff_R15 + 8);
    }
    func_0x0d1d3090(&stack0x000001c8,pbVar10,uVar9);
    func_0x0d21ed30(&stack0x000001b8,uVar7,&stack0x000001c8,lVar3,8);
    plVar2 = in_stack_000001c0;
    if (in_stack_000001c0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000001c0 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_000001c0 + 0x10))(in_stack_000001c0);
        func_0x0412c2d0(plVar2);
      }
    }
    if ((in_stack_000001c8 & 1) != 0) {
      func_0x0412a280(1,in_stack_000001c8 & 0xfffffffffffffffe);
    }
  }
  func_0x0d20be50(&stack0x000005d0);
  return in_stack_00000068;
}


