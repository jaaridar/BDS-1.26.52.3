/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5ae0
 * Label: br::worldgen::WorldGenRandom::vslot6
 * Body:  [[0d1d5ae0, 0d1d5ba7]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot6
 */


/* WARNING: Removing unreachable block (ram,0x0d1d64aa) */
/* WARNING: Removing unreachable block (ram,0x0d1d64b0) */
/* WARNING: Removing unreachable block (ram,0x0d1d64c1) */
/* WARNING: Removing unreachable block (ram,0x0d1d649a) */
/* WARNING: Removing unreachable block (ram,0x0d1d64c9) */
/* WARNING: Removing unreachable block (ram,0x0d1d66e3) */

long * wg_br__worldgen__WorldGenRandom__vslot6(undefined8 param_1,int param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_RBX;
  byte *pbVar8;
  undefined1 (*unaff_R12) [16];
  ulong unaff_R13;
  byte *unaff_R15;
  bool bVar9;
  long in_stack_00000010;
  long in_stack_00000018;
  uint uStack0000000000000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  char in_stack_00000040;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
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
  long in_stack_00000120;
  long in_stack_00000128;
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
  
  *(int *)(param_3 + -10) = *(int *)(param_3 + -10) + param_2;
  piVar2 = (int *)(unaff_RBX * 2 + 0x48);
  *piVar2 = *piVar2 + param_2;
  func_0x0412a280(in_stack_00000030,uStack0000000000000020 & 0xfffffffe);
  in_stack_000000d8 = in_stack_00000148;
  lVar4 = in_stack_00000120;
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
  in_stack_000000b8 = in_stack_00000128;
  in_stack_000000c0 = in_stack_00000130;
  if (in_stack_00000150 == '\0') {
    in_stack_00000148 = 0;
    _uStack0000000000000138 = (undefined1  [16])0x0;
    in_stack_000000e0 = 0;
    lVar5 = in_stack_00000128;
    if (in_stack_00000120 != 0) {
      for (; lVar4 != lVar5; lVar5 = lVar5 + -0x50) {
        if ((*(char *)(lVar5 + -8) == '\x01') && ((*(byte *)(lVar5 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar5 + -0x20),
                          *(ulong *)(lVar5 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000128 = lVar4;
      func_0x0412a280(in_stack_00000120,in_stack_00000130 - in_stack_00000120);
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
    if (in_stack_00000010 != 0) {
      for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -0x50)
      {
        if ((*(char *)(in_stack_00000018 + -8) == '\x01') &&
           ((*(byte *)(in_stack_00000018 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000018 + -0x20),
                          *(ulong *)(in_stack_00000018 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,_uStack0000000000000020 - in_stack_00000010);
    }
  }
  plVar3 = in_stack_00000078;
  in_stack_00000078 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = in_stack_00000070;
  in_stack_00000070 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((bStack0000000000000158 & 1) != 0) {
    func_0x0412a280(in_stack_00000168,
                    CONCAT71(uStack0000000000000159,bStack0000000000000158) & 0xfffffffffffffffe);
  }
  in_stack_000001c8 = unaff_R13;
  func_0x0eedeb80(2,0x2d,&stack0x000000a0,&stack0x00000000,&stack0x000001c8);
  uVar6 = in_stack_00000170;
  lVar4 = in_stack_000000c8;
  if ((in_stack_000000e0 & 1) == 0) {
    lVar5 = in_stack_000000d0;
    if (in_stack_000000c8 != 0) {
      while (lVar4 != lVar5) {
        func_0x048b3e80(lVar5 + -0x40);
        lVar5 = lVar5 + -0x40;
      }
      in_stack_000000d0 = lVar4;
      func_0x0412a280(in_stack_000000c8,in_stack_000000d8 - in_stack_000000c8);
    }
    lVar5 = in_stack_000000b0;
    lVar4 = in_stack_000000b8;
    if (in_stack_000000b0 != 0) {
      for (; lVar5 != lVar4; lVar4 = lVar4 + -0x50) {
        if ((*(char *)(lVar4 + -8) == '\x01') && ((*(byte *)(lVar4 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar4 + -0x20),
                          *(ulong *)(lVar4 + -0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_000000b8 = lVar5;
      func_0x0412a280(in_stack_000000b0,in_stack_000000c0 - in_stack_000000b0);
    }
    plVar3 = (long *)*in_stack_00000068;
    *in_stack_00000068 = 0;
  }
  else {
    plVar3 = (long *)*in_stack_00000068;
    *in_stack_00000068 = in_stack_000000a0;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((bStack00000000000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,
                    CONCAT71(uStack00000000000000f1,bStack00000000000000f0) & 0xfffffffffffffffe);
  }
  lVar4 = *in_stack_00000068;
  if (lVar4 != 0) {
    bVar9 = (*unaff_R15 & 1) != 0;
    pbVar8 = unaff_R15 + 1;
    if (bVar9) {
      pbVar8 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar7 = (ulong)(*unaff_R15 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(unaff_R15 + 8);
    }
    func_0x0d1d3090(&stack0x000001c8,pbVar8,uVar7);
    func_0x0d21ed30(&stack0x000001b8,uVar6,&stack0x000001c8,lVar4,8);
    plVar3 = in_stack_000001c0;
    if (in_stack_000001c0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000001c0 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*in_stack_000001c0 + 0x10))(in_stack_000001c0);
        func_0x0412c2d0(plVar3);
      }
    }
    if ((in_stack_000001c8 & 1) != 0) {
      func_0x0412a280(1,in_stack_000001c8 & 0xfffffffffffffffe);
    }
  }
  func_0x0d20be50(&stack0x000005d0);
  return in_stack_00000068;
}


