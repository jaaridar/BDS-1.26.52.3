/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd287f20
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0d287d10, 0d287d87] [0d287d90, 0d287ee3] [0d287ef0, 0d287f10] [0d287f20, 0d2883ad] [0d2883b0, 0d2884db] [0d2884e0, 0d28856c] [0d2885a0, 0d2885fc] [0d288677, 0d288690] [0d288720, 0d28873b]]
 * Ghidra: FUN_0d287f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d287f20(void)

{
  long *plVar1;
  byte *pbVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long unaff_RBP;
  long lVar13;
  long unaff_R12;
  ulong uVar14;
  long unaff_R13;
  ulong *puVar15;
  long lVar16;
  ulong *unaff_R15;
  ulong *in_stack_00000010;
  ulong *puStack0000000000000018;
  ulong *in_stack_00000020;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined2 in_stack_000000a8;
  undefined6 uStack00000000000000aa;
  undefined2 in_stack_000000b0;
  undefined6 uStack00000000000000b2;
  undefined2 in_stack_000000b8;
  undefined6 uStack00000000000000ba;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined *in_stack_000000d0;
  code *in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined1 uStack00000000000000e4;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined *in_stack_000000f8;
  long *in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  undefined *in_stack_00000118;
  undefined *in_stack_00000120;
  byte bStack0000000000000128;
  undefined1 uStack0000000000000129;
  undefined6 uStack000000000000012a;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined1 in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined *in_stack_00000178;
  code *in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined1 uStack000000000000018c;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined *in_stack_000001a8;
  undefined2 in_stack_000001b0;
  undefined8 *in_stack_000001b8;
  long *in_stack_000001c8;
  undefined8 *in_stack_000001d0;
  undefined8 *in_stack_000001d8;
  ulong in_stack_000001e0;
  undefined2 uStack00000000000001e8;
  undefined6 uStack00000000000001ea;
  undefined8 in_stack_000001f0;
  
  while( true ) {
    puVar12 = (ulong *)(unaff_R12 + unaff_RBP + 0x20);
    puVar7 = unaff_R15;
    puVar15 = (ulong *)(unaff_R13 + unaff_RBP);
    if (in_stack_00000010 != (ulong *)0x0) {
      lVar13 = (long)in_stack_00000020 - (long)in_stack_00000010;
      puVar7 = in_stack_00000010;
      in_stack_00000010 = unaff_R15;
      puStack0000000000000018 = puVar12;
      in_stack_00000020 = (ulong *)(unaff_R13 + unaff_RBP);
      func_0x0412a280(puVar7,lVar13);
      puVar7 = in_stack_00000010;
      puVar15 = in_stack_00000020;
    }
    in_stack_00000020 = puVar15;
    in_stack_00000010 = puVar7;
    lVar16 = in_stack_00000110;
    lVar13 = in_stack_00000108;
    puStack0000000000000018 = puVar12;
    if (((ulong)in_stack_000001d0 & 1) != 0) {
      func_0x0412a280(in_stack_000001e0,(ulong)in_stack_000001d0 & 0xfffffffffffffffe);
    }
    while( true ) {
      lVar11 = lVar16 + 0x28;
      if (lVar11 == lVar13) {
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000140 = (long)&stack0x00000030 + 1;
        bStack0000000000000128 = 0;
        uStack0000000000000129 = 0;
        in_stack_00000148 = 0;
        in_stack_00000150 = 0;
        in_stack_00000158 = 0;
        in_stack_00000120 = &UNK_0f533820;
        in_stack_00000160 = &stack0x00000030;
        in_stack_00000090 = 0;
        in_stack_000000b0 = 0;
        uStack00000000000000b2 = 0;
        in_stack_000000b8 = 0;
        uStack00000000000000ba = 0;
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        uStack00000000000000aa = 0;
        in_stack_00000080 = 0;
        in_stack_00000088 = 0;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        in_stack_00000060 = (long *)0x0;
        in_stack_00000068 = 0;
        in_stack_00000050 = (undefined *)0x0;
        in_stack_00000058 = (long *)0x0;
        in_stack_00000098 = 0x3f600000;
        func_0x048af640(&stack0x00000068,8);
        in_stack_000000b0 = 0;
        uStack00000000000000b2 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        uStack00000000000000aa = 0;
        in_stack_00000050 = &UNK_0f534768;
        plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar8 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&UNK_0ef44a60;
        in_stack_00000058 = plVar8 + 3;
        *(undefined1 *)(plVar8 + 3) = 1;
        in_stack_00000050 = &UNK_0ef471f0;
        in_stack_00000060 = plVar8;
        func_0x0e4d9af0(&stack0x00000050);
        in_stack_000001b0 = 0;
        in_stack_000001a8 = &UNK_0f4e3390;
        in_stack_000001b8 = &stack0x00000120;
        in_stack_000001d0 = (undefined8 *)&UNK_0ef474c0;
        in_stack_000001e0 = CONCAT44(in_stack_000001e0._4_4_,0xffffffff);
        _uStack00000000000001e8 = &stack0x000001f8;
        in_stack_000001f0 = 0x800000000;
        in_stack_00000118 = &UNK_0f45da28;
        lVar13 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        in_stack_000001d8 = &stack0x00000050;
        if (lVar13 == 0) {
          func_0x048b0de0(&stack0x000000c0,&stack0x0000000f);
          _DAT_0f54fd90 = uStack00000000000000c0;
          uRam000000000f54fd94 = uStack00000000000000c4;
          uVar5 = uStack00000000000000c8;
          uVar6 = uStack00000000000000cc;
          _uStack00000000000000c0 = (undefined8 *)0x0;
          _uStack00000000000000c8 = (long *)0x0;
          plVar8 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
          _DAT_0f54fd98 = uVar5;
          uRam000000000f54fd9c = uVar6;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar13 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              func_0x0412c2d0(plVar8);
            }
          }
          plVar8 = _uStack00000000000000c8;
          if (_uStack00000000000000c8 != (long *)0x0) {
            LOCK();
            plVar1 = _uStack00000000000000c8 + 1;
            lVar13 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*_uStack00000000000000c8 + 0x10))(_uStack00000000000000c8);
              func_0x0412c2d0(plVar8);
            }
          }
          lVar13 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
        }
        in_stack_00000178 = &UNK_0d2abd60;
        in_stack_00000188 = 0x3411ee68;
        in_stack_00000180 = (code *)0x0;
        uStack000000000000018c = 4;
        in_stack_00000198 = 0;
        in_stack_000001a0 = 0;
        in_stack_000000d0 = &UNK_0d2abd60;
        in_stack_000000d8 = (code *)0x0;
        in_stack_000000e0 = 0x3411ee68;
        uStack00000000000000e4 = 4;
        in_stack_00000168 = 0;
        _uStack00000000000000c0 = &stack0x00000010;
        in_stack_000000f0 = 0;
        in_stack_000000f8 = &UNK_0d2abbd0;
        in_stack_000000e8 = &stack0x00000068;
        in_stack_00000190 = lVar13;
        func_0x0ed6b850(&stack0x000001d0,&stack0x000001a8,&stack0x000000c0,&stack0x00000118);
        if ((in_stack_000000d8 != (code *)0x0) &&
           ((*in_stack_000000d8)(&stack0x000000c0), in_stack_00000180 != (code *)0x0)) {
          (*in_stack_00000180)(&stack0x00000168);
        }
        func_0x048ffe50(&stack0x000001d0);
        plVar8 = in_stack_00000060;
        in_stack_00000050 = &UNK_0f534768;
        if (in_stack_00000060 == (long *)0x0) {
          *(undefined1 *)in_stack_00000058 = 0;
        }
        else {
          *(undefined1 *)in_stack_00000058 = 0;
          LOCK();
          plVar1 = in_stack_00000060 + 1;
          lVar13 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060);
            func_0x0412c2d0(plVar8);
          }
        }
        lVar13 = in_stack_000000a0;
        if (in_stack_000000a0 != 0) {
          for (lVar16 = CONCAT62(uStack00000000000000aa,in_stack_000000a8); lVar13 != lVar16;
              lVar16 = lVar16 + -0x38) {
            if ((*(byte *)(lVar16 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar16 + -0x28),
                              *(ulong *)(lVar16 + -0x38) & 0xfffffffffffffffe);
            }
          }
          in_stack_000000a8 = (undefined2)lVar13;
          uStack00000000000000aa = (undefined6)((ulong)lVar13 >> 0x10);
          func_0x0412a280(in_stack_000000a0,
                          CONCAT62(uStack00000000000000b2,in_stack_000000b0) - in_stack_000000a0);
        }
        in_stack_000001d0 = &stack0x00000080;
        func_0x048b0f50(&stack0x000001d0);
        if (in_stack_00000068 != 0) {
          in_stack_00000070 = in_stack_00000068;
          func_0x0412a280(in_stack_00000068,in_stack_00000078 - in_stack_00000068);
        }
        in_stack_00000120 = &UNK_0f534730;
        if ((bStack0000000000000128 & 1) != 0) {
          func_0x0412a280(in_stack_00000138,
                          CONCAT62(uStack000000000000012a,
                                   CONCAT11(uStack0000000000000129,bStack0000000000000128)) &
                          0xfffffffffffffffe);
        }
        (**(code **)(*in_stack_00000100 + 0x58))
                  (&stack0x000001c0,in_stack_00000100,&UNK_01d9b948,&stack0x00000030,0xc);
        plVar8 = in_stack_000001c8;
        if (in_stack_000001c8 != (long *)0x0) {
          LOCK();
          plVar1 = in_stack_000001c8 + 1;
          lVar13 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*in_stack_000001c8 + 0x10))(in_stack_000001c8);
            func_0x0412c2d0(plVar8);
          }
        }
        if ((in_stack_00000030 & 1) != 0) {
          func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
        }
        puVar15 = in_stack_00000010;
        puVar7 = puStack0000000000000018;
        if (in_stack_00000010 != (ulong *)0x0) {
          for (; puVar15 != puVar7; puVar7 = puVar7 + -4) {
            if ((puVar7[-4] & 1) != 0) {
              func_0x0412a280(puVar7[-2],puVar7[-4] & 0xfffffffffffffffe);
            }
          }
          puStack0000000000000018 = puVar15;
          func_0x0412a280(in_stack_00000010,(long)in_stack_00000020 - (long)in_stack_00000010);
        }
        return;
      }
      if ((*(byte *)(lVar16 + 0x30) & 1) == 0) {
        in_stack_000001e0 = *(ulong *)(lVar16 + 0x40);
        in_stack_000001d0 = *(undefined8 **)(lVar16 + 0x30);
        in_stack_000001d8 = *(undefined8 **)(lVar16 + 0x38);
      }
      else {
        func_0x0412e5e0(&stack0x000001d0,*(undefined8 *)(lVar16 + 0x40),
                        *(undefined8 *)(lVar16 + 0x38));
      }
      uVar3 = *(undefined2 *)(lVar16 + 0x48);
      _uStack00000000000001e8 = (undefined1 *)CONCAT62(uStack00000000000001ea,uVar3);
      if (in_stack_00000020 <= puStack0000000000000018) break;
      puStack0000000000000018[2] = in_stack_000001e0;
      *puStack0000000000000018 = (ulong)in_stack_000001d0;
      puStack0000000000000018[1] = (ulong)in_stack_000001d8;
      in_stack_000001d0 = (undefined8 *)0x0;
      in_stack_000001d8 = (undefined8 *)0x0;
      in_stack_000001e0 = 0;
      *(undefined2 *)(puStack0000000000000018 + 3) = uVar3;
      puStack0000000000000018 = puStack0000000000000018 + 4;
      lVar16 = lVar11;
    }
    unaff_R12 = (long)puStack0000000000000018 - (long)in_stack_00000010;
    uVar10 = (unaff_R12 >> 5) + 1;
    if (0x7ffffffffffffff < uVar10) break;
    uVar14 = (long)in_stack_00000020 - (long)in_stack_00000010 >> 4;
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (0x7fffffffffffffdf < (ulong)((long)in_stack_00000020 - (long)in_stack_00000010)) {
      uVar14 = 0x7ffffffffffffff;
    }
    if (0x7ffffffffffffff < uVar14) goto LAB_0d288563;
    unaff_R13 = uVar14 << 5;
    in_stack_00000110 = lVar11;
    unaff_RBP = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R13);
    if (unaff_RBP == 0) {
      func_0x0eec74c0(unaff_R13,0);
    }
    puVar7 = puStack0000000000000018;
    *(ulong *)(unaff_RBP + 0x10 + unaff_R12) = in_stack_000001e0;
    *(ulong *)(unaff_RBP + unaff_R12) = (ulong)in_stack_000001d0;
    ((ulong *)(unaff_RBP + unaff_R12))[1] = (ulong)in_stack_000001d8;
    in_stack_000001d0 = (undefined8 *)0x0;
    in_stack_000001d8 = (undefined8 *)0x0;
    in_stack_000001e0 = 0;
    *(undefined2 *)(unaff_RBP + 0x18 + unaff_R12) = uStack00000000000001e8;
    unaff_R15 = (ulong *)(((long)in_stack_00000010 - (long)puStack0000000000000018) +
                         unaff_R12 + unaff_RBP);
    if ((long)in_stack_00000010 - (long)puStack0000000000000018 != 0) {
      lVar13 = 0;
      do {
        *(undefined8 *)((long)unaff_R15 + lVar13 + 0x10) =
             *(undefined8 *)((long)in_stack_00000010 + lVar13 + 0x10);
        uVar9 = *(undefined8 *)((byte *)((long)in_stack_00000010 + lVar13) + 8);
        *(undefined8 *)((long)unaff_R15 + lVar13) =
             *(undefined8 *)((long)in_stack_00000010 + lVar13);
        *(undefined8 *)((byte *)((long)unaff_R15 + lVar13) + 8) = uVar9;
        pbVar2 = (byte *)((long)in_stack_00000010 + lVar13);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2 = (byte *)((long)in_stack_00000010 + lVar13 + 0x10);
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        *(undefined2 *)((long)unaff_R15 + lVar13 + 0x18) =
             *(undefined2 *)((long)in_stack_00000010 + lVar13 + 0x18);
        lVar16 = lVar13 + 0x20;
        lVar13 = lVar13 + 0x20;
        puVar15 = in_stack_00000010;
      } while ((ulong *)((long)in_stack_00000010 + lVar16) != puStack0000000000000018);
      do {
        if ((*puVar15 & 1) != 0) {
          func_0x0412a280(puVar15[2],*puVar15 & 0xfffffffffffffffe);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 != puVar7);
    }
  }
  func_0x0d298d00();
LAB_0d288563:
  uVar9 = func_0x04882eb0();
  func_0x048ffe50(&stack0x000001d0);
  func_0x04904f60(&stack0x00000050);
  in_stack_00000120 = &UNK_0f534730;
  if ((bStack0000000000000128 & 1) != 0) {
    func_0x0412a280(in_stack_00000138,
                    CONCAT62(uStack000000000000012a,
                             CONCAT11(uStack0000000000000129,bStack0000000000000128)) &
                    0xfffffffffffffffe);
  }
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  func_0x0d287c20(&stack0x00000010);
  func_0x0eee2d70(uVar9);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


