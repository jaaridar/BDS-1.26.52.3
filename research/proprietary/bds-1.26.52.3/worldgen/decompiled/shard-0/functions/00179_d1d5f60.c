/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5f60
 * Label: br::worldgen::processors::BlockEntity::Modifier::vslot3
 * Body:  [[0d1d5f60, 0d1d604f]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Modifier__vslot3
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__BlockEntity__Modifier__vslot3(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long unaff_RBX;
  undefined8 unaff_RBP;
  byte *pbVar6;
  undefined *unaff_R12;
  ulong unaff_R13;
  long unaff_R14;
  long lVar7;
  ulong uVar8;
  byte *unaff_R15;
  bool bVar9;
  long in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  byte in_stack_00000040;
  byte bStack0000000000000050;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  byte bStack0000000000000088;
  undefined7 uStack0000000000000089;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  undefined *in_stack_000000a8;
  ulong in_stack_000000f0;
  undefined8 in_stack_00000100;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  char in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  long *in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  
  while (lVar7 = unaff_R14, unaff_R14 = lVar7 + -0x50, unaff_R14 != unaff_RBX) {
    if ((*(char *)(lVar7 + -0x58) == '\x01') && ((*(byte *)(lVar7 + -0x80) & 1) != 0)) {
      func_0x0412a280(*(undefined8 *)(lVar7 + -0x70),*(ulong *)(lVar7 + -0x80) & 0xfffffffffffffffe)
      ;
    }
  }
  func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
  func_0x0ee56810(&stack0x00000000,&stack0x00000070);
  if (in_stack_00000040 == 0) {
    _bStack0000000000000050 = (undefined1  [16])0x0;
    in_stack_00000060 = 0;
    func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
    if ((bStack0000000000000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
    }
  }
  if ((in_stack_00000040 & 1) == 0) {
    if (in_stack_00000028 != 0) {
      while (in_stack_00000028 != in_stack_00000030) {
        in_stack_00000030 = in_stack_00000030 + -0x40;
        func_0x048b3e80(in_stack_00000030);
      }
      in_stack_00000030 = in_stack_00000028;
      func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
    }
    if (in_stack_00000010 != 0) {
      for (; in_stack_00000010 != unaff_RBX; unaff_RBX = unaff_RBX + -0x50) {
        if ((*(char *)(unaff_RBX + -8) == '\x01') && ((*(byte *)(unaff_RBX + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(unaff_RBX + -0x20),
                          *(ulong *)(unaff_RBX + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
      unaff_RBX = in_stack_00000010;
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7b8fb8), iVar4 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    unaff_R13 = 0xa18c50c1ac79b4c3;
    unaff_R12 = &UNK_0140f690;
  }
  in_stack_000001b0 = in_stack_00000158 >> 1 & 0x7f;
  in_stack_000001a8 = unaff_RBP;
  if ((in_stack_00000158 & 1) != 0) {
    in_stack_000001b0 = in_stack_00000160;
    in_stack_000001a8 = in_stack_00000168;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&stack0x00000000,&DAT_0f7b8f98,&stack0x000001a8);
  in_stack_000000a0 = unaff_R13;
  in_stack_000000a8 = unaff_R12;
  if (in_stack_00000040 == 0) {
    _bStack0000000000000050 = (undefined1  [16])0x0;
    in_stack_00000060 = 0;
    func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
    if ((bStack0000000000000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
    }
  }
  if ((in_stack_00000040 & 1) == 0) {
    if (in_stack_00000028 != 0) {
      while (in_stack_00000028 != in_stack_00000030) {
        in_stack_00000030 = in_stack_00000030 + -0x40;
        func_0x048b3e80(in_stack_00000030);
      }
      in_stack_00000030 = in_stack_00000028;
      func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
    }
    if (in_stack_00000010 != 0) {
      for (; in_stack_00000010 != unaff_RBX; unaff_RBX = unaff_RBX + -0x50) {
        if ((*(char *)(unaff_RBX + -8) == '\x01') && ((*(byte *)(unaff_RBX + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(unaff_RBX + -0x20),
                          *(ulong *)(unaff_RBX + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
      unaff_RBX = in_stack_00000010;
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f7b8fb8), iVar4 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    unaff_R13 = 0xa18c50c1ac79b4c3;
    unaff_R12 = &UNK_0140f690;
  }
  in_stack_00000198 = &stack0x000001c8;
  (**(code **)(_DAT_0f7b8f98 + 0x90))(&stack0x00000000,&DAT_0f7b8f98,&stack0x00000198);
  in_stack_000000a0 = unaff_R13;
  in_stack_000000a8 = unaff_R12;
  if (in_stack_00000040 == 0) {
    _bStack0000000000000050 = (undefined1  [16])0x0;
    in_stack_00000060 = 0;
    func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
    if ((bStack0000000000000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
    }
  }
  if ((in_stack_00000040 & 1) == 0) {
    if (in_stack_00000028 != 0) {
      while (in_stack_00000028 != in_stack_00000030) {
        in_stack_00000030 = in_stack_00000030 + -0x40;
        func_0x048b3e80(in_stack_00000030);
      }
      in_stack_00000030 = in_stack_00000028;
      func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
    }
    if (in_stack_00000010 != 0) {
      for (; in_stack_00000010 != unaff_RBX; unaff_RBX = unaff_RBX + -0x50) {
        if ((*(char *)(unaff_RBX + -8) == '\x01') && ((*(byte *)(unaff_RBX + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(unaff_RBX + -0x20),
                          *(ulong *)(unaff_RBX + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
    }
  }
  uVar8 = (ulong)(bStack0000000000000088 >> 1);
  uVar5 = (long)&stack0x00000088 + 1;
  if ((bStack0000000000000088 & 1) != 0) {
    uVar8 = in_stack_00000090;
    uVar5 = in_stack_00000098;
  }
  func_0x0d6c71b0(&stack0x00000050,&stack0x00000000);
  in_stack_000000a0 = _bStack0000000000000050;
  if ((bStack0000000000000088 & 1) != 0) {
    func_0x0412a280(in_stack_00000098,
                    CONCAT71(uStack0000000000000089,bStack0000000000000088) & 0xfffffffffffffffe);
  }
  if (in_stack_00000150 == '\0') {
    if (in_stack_00000138 != 0) {
      while (in_stack_00000138 != in_stack_00000140) {
        in_stack_00000140 = in_stack_00000140 + -0x40;
        func_0x048b3e80(in_stack_00000140);
      }
      func_0x0412a280(in_stack_00000138,in_stack_00000148 - in_stack_00000138);
    }
    if (in_stack_00000120 != 0) {
      for (; in_stack_00000120 != in_stack_00000128; in_stack_00000128 = in_stack_00000128 + -0x50)
      {
        if ((*(char *)(in_stack_00000128 + -8) == '\x01') &&
           ((*(byte *)(in_stack_00000128 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000128 + -0x20),
                          *(ulong *)(in_stack_00000128 + -0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000120,in_stack_00000130 - in_stack_00000120);
    }
  }
  if ((in_stack_00000070 != (long *)0x0) &&
     (func_0x0ee56810(&stack0x00000000,&stack0x00000070), in_stack_00000040 == 0)) {
    if (in_stack_00000028 != 0) {
      while (in_stack_00000028 != in_stack_00000030) {
        in_stack_00000030 = in_stack_00000030 + -0x40;
        func_0x048b3e80(in_stack_00000030);
      }
      func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
    }
    if (uVar5 != 0) {
      for (; uVar5 != uVar8; uVar8 = uVar8 - 0x50) {
        if ((*(char *)(uVar8 - 8) == '\x01') && ((*(byte *)(uVar8 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar8 - 0x20),
                          *(ulong *)(uVar8 - 0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(uVar5,in_stack_00000020 - uVar5);
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
  if ((in_stack_00000158 & 1) != 0) {
    func_0x0412a280(in_stack_00000168,in_stack_00000158 & 0xfffffffffffffffe);
  }
  plVar3 = in_stack_00000068;
  in_stack_000001d0 = &UNK_0140f690;
  in_stack_000001d8 = 1;
  in_stack_000001e0 = 0x20a;
  plVar2 = (long *)*in_stack_00000068;
  *in_stack_00000068 = in_stack_000000a0;
  in_stack_000001c8 = unaff_R13;
  if (plVar2 != (long *)0x0) {
    in_stack_000001e0 = 0x20a;
    in_stack_000001d8 = 1;
    in_stack_000001d0 = &UNK_0140f690;
    (**(code **)(*plVar2 + 8))();
  }
  if ((in_stack_000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,in_stack_000000f0 & 0xfffffffffffffffe);
  }
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    bVar9 = (*unaff_R15 & 1) != 0;
    pbVar6 = unaff_R15 + 1;
    if (bVar9) {
      pbVar6 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar5 = (ulong)(*unaff_R15 >> 1);
    if (bVar9) {
      uVar5 = *(ulong *)(unaff_R15 + 8);
    }
    func_0x0d1d3090(&stack0x000001c8,pbVar6,uVar5);
    func_0x0d21ed30(&stack0x000001b8,in_stack_00000170,&stack0x000001c8,lVar7,8);
    plVar2 = in_stack_000001c0;
    if (in_stack_000001c0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000001c0 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*in_stack_000001c0 + 0x10))(in_stack_000001c0);
        func_0x0412c2d0(plVar2);
      }
    }
    if ((in_stack_000001c8 & 1) != 0) {
      func_0x0412a280(in_stack_000001d8,in_stack_000001c8 & 0xfffffffffffffffe);
    }
  }
  func_0x0d20be50(&stack0x000005d0);
  return plVar3;
}


