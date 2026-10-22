/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d59f0
 * Label: br::worldgen::WorldGenRandom::vslot3
 * Body:  [[0d1d59f0, 0d1d5a07] [0d1d5a10, 0d1d5a3d] [0d1d6939, 0d1d6947] [0d1d6998, 0d1d6a54]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot3
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

long * wg_br__worldgen__WorldGenRandom__vslot3(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_RBX;
  undefined8 unaff_RBP;
  byte *pbVar8;
  long lVar9;
  undefined8 unaff_R13;
  ulong uVar10;
  byte *unaff_R15;
  bool in_ZF;
  bool bVar11;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
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
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
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
  ulong in_stack_00000178;
  ulong in_stack_00000190;
  undefined8 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  long *in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  undefined8 in_stack_000005c8;
  
  if (!in_ZF) {
    for (; unaff_RBX != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50) {
      if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
         ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                        *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280();
    in_stack_00000018 = unaff_RBX;
  }
  plVar3 = in_stack_00000070;
  in_stack_00000178 = 0;
  lVar2 = in_stack_00000070[3];
  if (lVar2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar2 + 8;
    func_0x0412d770(lVar9);
  }
  (**(code **)(*plVar3 + 0x80))(&stack0x00000000,plVar3,&stack0x00000178);
  if (lVar2 != 0) {
    func_0x0412d790(lVar9);
  }
  in_stack_000000a0 = unaff_R13;
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
      for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50) {
        if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
           ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                          *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000018 = in_stack_00000010;
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
    }
  }
  uVar10 = in_stack_00000190;
  if (in_stack_00000178 <= in_stack_00000190 - 1) {
    in_stack_000000a0 = 0;
    uVar10 = 0xa18c50c1ac79b4c3;
    goto joined_r0x0d1d5dbc;
  }
  if (in_stack_00000190 < 0xfffffffffffffff8) {
    if (in_stack_00000190 < 0x17) {
      in_stack_00000088 = CONCAT71(in_stack_00000088._1_7_,(char)in_stack_00000190 * '\x02');
      uVar6 = (long)&stack0x00000088 + 1;
    }
    else {
      uVar7 = 0x1a;
      if ((in_stack_00000190 | 7) != 0x17) {
        uVar7 = (in_stack_00000190 | 7) + 1;
      }
      uVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar7);
      if (uVar6 == 0) {
        func_0x0eec74c0(uVar7,0);
      }
      in_stack_00000088 = uVar7 | 1;
      in_stack_00000090 = uVar10;
      in_stack_00000098 = uVar6;
    }
    func_0x0eee2dd0(uVar6,0,uVar10);
    *(undefined1 *)(uVar6 + uVar10) = 0;
    uVar7 = (long)&stack0x00000088 + 1;
    if ((in_stack_00000088 & 1) != 0) {
      uVar7 = in_stack_00000098;
    }
    func_0x0ee76a70(&stack0x00000000,in_stack_00000070,uVar7,uVar10);
    uVar10 = 0xa18c50c1ac79b4c3;
    in_stack_000000a0 = 0xa18c50c1ac79b4c3;
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
        for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50)
        {
          if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
             ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                            *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
          }
        }
        in_stack_00000018 = in_stack_00000010;
        func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
      }
    }
    func_0x0ee56810(&stack0x00000000,&stack0x00000070);
    in_stack_000000a0 = 0xa18c50c1ac79b4c3;
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
        for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50)
        {
          if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
             ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                            *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
          }
        }
        in_stack_00000018 = in_stack_00000010;
        func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
      }
    }
    if (DAT_0f7b8fb8 == '\0') goto LAB_0d1d699d;
  }
  else {
    func_0x04882e30();
LAB_0d1d699d:
    iVar5 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar5 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      uVar10 = 0xa18c50c1ac79b4c3;
    }
  }
  in_stack_000001b0 = in_stack_00000158 >> 1 & 0x7f;
  in_stack_000001a8 = unaff_RBP;
  if ((in_stack_00000158 & 1) != 0) {
    in_stack_000001b0 = in_stack_00000160;
    in_stack_000001a8 = in_stack_00000168;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&stack0x00000000,&DAT_0f7b8f98,&stack0x000001a8);
  in_stack_000000a0 = uVar10;
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
      for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50) {
        if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
           ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                          *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
        }
      }
      in_stack_00000018 = in_stack_00000010;
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7b8fb8), iVar5 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    uVar10 = 0xa18c50c1ac79b4c3;
  }
  in_stack_00000198 = &stack0x000001c8;
  in_stack_000001a0 = in_stack_000005c8;
  (**(code **)(_DAT_0f7b8f98 + 0x90))(&stack0x00000000,&DAT_0f7b8f98,&stack0x00000198);
  in_stack_000000a0 = uVar10;
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
      for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50) {
        if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
           ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                          *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
    }
  }
  in_stack_00000018 = in_stack_00000088 >> 1 & 0x7f;
  in_stack_00000010 = (long)&stack0x00000088 + 1;
  if ((in_stack_00000088 & 1) != 0) {
    in_stack_00000018 = in_stack_00000090;
    in_stack_00000010 = in_stack_00000098;
  }
  func_0x0d6c71b0(&stack0x00000050,&stack0x00000000);
  in_stack_000000a0 = _bStack0000000000000050;
  if ((in_stack_00000088 & 1) != 0) {
    func_0x0412a280(in_stack_00000098,in_stack_00000088 & 0xfffffffffffffffe);
  }
joined_r0x0d1d5dbc:
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
    if (in_stack_00000010 != 0) {
      for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 - 0x50) {
        if ((*(char *)(in_stack_00000018 - 8) == '\x01') &&
           ((*(byte *)(in_stack_00000018 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(in_stack_00000018 - 0x20),
                          *(ulong *)(in_stack_00000018 - 0x30) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(in_stack_00000010,in_stack_00000020 - in_stack_00000010);
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
  if ((in_stack_00000158 & 1) != 0) {
    func_0x0412a280(in_stack_00000168,in_stack_00000158 & 0xfffffffffffffffe);
  }
  plVar4 = in_stack_00000068;
  in_stack_000001d0 = &UNK_0140f690;
  in_stack_000001d8 = 1;
  in_stack_000001e0 = 0x20a;
  plVar3 = (long *)*in_stack_00000068;
  *in_stack_00000068 = in_stack_000000a0;
  in_stack_000001c8 = uVar10;
  if (plVar3 != (long *)0x0) {
    in_stack_000001e0 = 0x20a;
    in_stack_000001d8 = 1;
    in_stack_000001d0 = &UNK_0140f690;
    (**(code **)(*plVar3 + 8))();
  }
  if ((in_stack_000000f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000100,in_stack_000000f0 & 0xfffffffffffffffe);
  }
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    bVar11 = (*unaff_R15 & 1) != 0;
    pbVar8 = unaff_R15 + 1;
    if (bVar11) {
      pbVar8 = *(byte **)(unaff_R15 + 0x10);
    }
    uVar10 = (ulong)(*unaff_R15 >> 1);
    if (bVar11) {
      uVar10 = *(ulong *)(unaff_R15 + 8);
    }
    func_0x0d1d3090(&stack0x000001c8,pbVar8,uVar10);
    func_0x0d21ed30(&stack0x000001b8,in_stack_00000170,&stack0x000001c8,lVar2,8);
    plVar3 = in_stack_000001c0;
    if (in_stack_000001c0 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000001c0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_stack_000001c0 + 0x10))(in_stack_000001c0);
        func_0x0412c2d0(plVar3);
      }
    }
    if ((in_stack_000001c8 & 1) != 0) {
      func_0x0412a280(in_stack_000001d8,in_stack_000001c8 & 0xfffffffffffffffe);
    }
  }
  func_0x0d20be50(&stack0x000005d0);
  return plVar4;
}


