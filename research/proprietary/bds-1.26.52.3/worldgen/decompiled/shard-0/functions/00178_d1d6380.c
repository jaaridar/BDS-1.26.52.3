/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d6380
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot3
 * Body:  [[0d1d6380, 0d1d63a0] [0d1d63b0, 0d1d65d0] [0d1d65e0, 0d1d6907]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3
 */


/* WARNING: Removing unreachable block (ram,0x0d1d66a9) */
/* WARNING: Removing unreachable block (ram,0x0d1d66e3) */
/* WARNING: Removing unreachable block (ram,0x0d1d66f5) */
/* WARNING: Removing unreachable block (ram,0x0d1d672c) */
/* WARNING: Removing unreachable block (ram,0x0d1d6741) */
/* WARNING: Removing unreachable block (ram,0x0d1d6751) */
/* WARNING: Removing unreachable block (ram,0x0d1d6760) */
/* WARNING: Removing unreachable block (ram,0x0d1d6771) */
/* WARNING: Removing unreachable block (ram,0x0d1d6779) */
/* WARNING: Removing unreachable block (ram,0x0d1d6791) */
/* WARNING: Removing unreachable block (ram,0x0d1d679e) */
/* WARNING: Removing unreachable block (ram,0x0d1d67b9) */
/* WARNING: Removing unreachable block (ram,0x0d1d67c0) */
/* WARNING: Removing unreachable block (ram,0x0d1d67c7) */
/* WARNING: Removing unreachable block (ram,0x0d1d67b0) */
/* WARNING: Removing unreachable block (ram,0x0d1d67da) */
/* WARNING: Removing unreachable block (ram,0x0d1d67ae) */
/* WARNING: Removing unreachable block (ram,0x0d1d67e2) */
/* WARNING: Removing unreachable block (ram,0x0d1d67fa) */

long * wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot3(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong unaff_R13;
  ulong uVar9;
  byte *unaff_R15;
  bool bVar10;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  char in_stack_00000040;
  long in_stack_00000050;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  byte bStack0000000000000088;
  undefined7 uStack0000000000000089;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 in_stack_000000e0;
  byte bStack00000000000000f0;
  undefined7 uStack00000000000000f1;
  undefined8 in_stack_00000100;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  char in_stack_00000150;
  byte bStack0000000000000158;
  undefined7 uStack0000000000000159;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long *in_stack_000001c0;
  ulong in_stack_000001c8;
  
  func_0x0412a280(param_1,param_2 - param_1);
  if (in_stack_00000010 != 0) {
    for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -0x50) {
      if ((*(char *)(in_stack_00000018 + -8) == '\x01') &&
         ((*(byte *)(in_stack_00000018 + -0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000018 + -0x20),
                        *(ulong *)(in_stack_00000018 + -0x30) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
  }
  uVar9 = (ulong)(bStack0000000000000088 >> 1);
  uVar7 = (long)&stack0x00000088 + 1;
  if ((bStack0000000000000088 & 1) != 0) {
    uVar9 = in_stack_00000090;
    uVar7 = in_stack_00000098;
  }
  func_0x0d6c71b0(&stack0x00000050,&stack0x00000000);
  in_stack_000000e0 = 1;
  in_stack_000000a0 = in_stack_00000050;
  if ((bStack0000000000000088 & 1) != 0) {
    func_0x0412a280(in_stack_00000098,
                    CONCAT71(uStack0000000000000089,bStack0000000000000088) & 0xfffffffffffffffe);
  }
  lVar3 = in_stack_00000138;
  if (in_stack_00000150 == '\0') {
    lVar4 = in_stack_00000140;
    if (in_stack_00000138 != 0) {
      while (lVar3 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      in_stack_00000140 = lVar3;
      func_0x0412a280(in_stack_00000138,in_stack_00000148 - in_stack_00000138);
    }
    lVar4 = in_stack_00000120;
    lVar3 = in_stack_00000128;
    if (in_stack_00000120 != 0) {
      for (; lVar4 != lVar3; lVar3 = lVar3 + -0x50) {
        if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                          *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
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
    if (uVar7 != 0) {
      for (; uVar7 != uVar9; uVar9 = uVar9 - 0x50) {
        if ((*(char *)(uVar9 - 8) == '\x01') && ((*(byte *)(uVar9 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar9 - 0x20),
                          *(ulong *)(uVar9 - 0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(uVar7,in_stack_00000020 - uVar7);
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
  uVar6 = in_stack_00000170;
  plVar5 = in_stack_00000068;
  plVar2 = (long *)*in_stack_00000068;
  *in_stack_00000068 = in_stack_000000a0;
  in_stack_000001c8 = unaff_R13;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((bStack00000000000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,
                    CONCAT71(uStack00000000000000f1,bStack00000000000000f0) & 0xfffffffffffffffe);
  }
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    bVar10 = (*unaff_R15 & 1) != 0;
    pbVar8 = unaff_R15 + 1;
    if (bVar10) {
      pbVar8 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar7 = (ulong)(*unaff_R15 >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(unaff_R15 + 8);
    }
    func_0x0d1d3090(&stack0x000001c8,pbVar8,uVar7);
    func_0x0d21ed30(&stack0x000001b8,uVar6,&stack0x000001c8,lVar3,8);
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
  return plVar5;
}


