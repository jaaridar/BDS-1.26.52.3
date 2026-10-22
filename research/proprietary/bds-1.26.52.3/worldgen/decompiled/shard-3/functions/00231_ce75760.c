/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce75760
 * Label: JigsawBlockActor::vslot6
 * Body:  [[0ce75760, 0ce757e3] [0ce7581e, 0ce75a87] [0ce75a90, 0ce75aed] [0ce75af0, 0ce75ddb] [0ce75de0, 0ce75e0c] [0ce75e10, 0ce75e88] [0ce75e90, 0ce75ed4] [0ce75ee0, 0ce75f01] [0ce75f10, 0ce75fe1]]
 * Ghidra: wg_JigsawBlockActor__vslot6
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_JigsawBlockActor__vslot6(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined *puVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_R14;
  long unaff_R15;
  bool in_ZF;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined *in_stack_00000060;
  code *in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined1 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_000000a0;
  code *in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined1 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined *in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  code *in_stack_00000108;
  undefined8 *in_stack_00000110;
  code *in_stack_00000120;
  code *in_stack_00000128;
  int iStack0000000000000130;
  char cStack0000000000000134;
  undefined *in_stack_00000138;
  undefined *in_stack_00000140;
  undefined *in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  code *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  code *in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  char cStack00000000000001b0;
  undefined8 *in_stack_000001c8;
  code *in_stack_000001e0;
  int iStack00000000000001e8;
  char cStack00000000000001ec;
  code *in_stack_00000238;
  code *in_stack_00000278;
  code *in_stack_000002c0;
  code *in_stack_00000300;
  
  if (in_ZF) {
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar15 = _UNK_01258ebc;
    in_stack_00000030 = 0x31;
    in_stack_00000038 = 0x2b;
    *(ulong *)((long)puVar12 + 0x1b) = CONCAT35(_UNK_01258eb9,_DAT_01258eb4);
    *(undefined8 *)((long)puVar12 + 0x23) = uVar15;
    uVar15 = CONCAT53(_DAT_01258eb4,_UNK_01258eb1);
    *(undefined8 *)(puVar12 + 4) = _DAT_01258ea9;
    *(undefined8 *)(puVar12 + 6) = uVar15;
    uVar7 = _UNK_01258ea5;
    uVar6 = _UNK_01258ea1;
    uVar5 = _UNK_01258e9d;
    *puVar12 = _DAT_01258e99;
    puVar12[1] = uVar5;
    puVar12[2] = uVar6;
    puVar12[3] = uVar7;
    *(undefined1 *)((long)puVar12 + 0x2b) = 0;
    in_stack_00000040 = puVar12;
    (**(code **)(*in_stack_00000008 + 0x10))(in_stack_00000008,&stack0x00000030);
    if ((in_stack_00000030 & 1) != 0) {
      func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
    }
    return 0;
  }
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_00000190 = (code *)0x0;
  in_stack_00000198 = 0;
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000160 = 0;
  in_stack_00000168 = (code *)0x0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  _cStack00000000000001b0 = 0;
  if ((*(code **)(unaff_R15 + 0x38) == (code *)0x0) ||
     ((**(code **)(unaff_R15 + 0x38))(0x800), in_stack_00000168 == (code *)0x0)) {
    func_0x048b1dc0(&stack0x00000220);
    cVar10 = func_0x0eeddcf0(&UNK_0130b358,&UNK_011b9795,0x728,&UNK_013ab8cc,&UNK_011af03f);
    if (cVar10 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    (*in_stack_00000168)(in_stack_00000150);
  }
  in_stack_00000048 = (undefined8 *)*unaff_R14;
  if (*(char *)((long)unaff_R14 + 0x24) == '\x02') {
    in_stack_00000048 = unaff_R14;
  }
  if (in_stack_00000048 == (undefined8 *)0x0 || *(int *)(unaff_R14 + 4) != -0xcdb952c) {
    uVar15 = unaff_R14[5];
    lVar13 = unaff_R14[6];
    if (lVar13 == 0) {
      (*(code *)unaff_R14[7])(0);
      lVar13 = unaff_R14[6];
    }
    in_stack_00000048 = (undefined8 *)func_0x0488e200(uVar15,lVar13,0xf3246ad4);
  }
  in_stack_00000148 = &UNK_0ef44b00;
  in_stack_00000140 = &UNK_0f408868;
  in_stack_00000078 = unaff_R14[5];
  in_stack_000000a0 = &UNK_0488e0b0;
  in_stack_000000b0 = 0x48b5725f;
  in_stack_000000a8 = (code *)0x0;
  uStack00000000000000b4 = 0;
  in_stack_00000090 = (undefined8 *)0x0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = (undefined *)0x0;
  in_stack_00000060 = &UNK_0488e0b0;
  in_stack_00000070 = 0x48b5725f;
  in_stack_00000068 = (code *)0x0;
  uStack0000000000000074 = 0;
  in_stack_00000050 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = (undefined *)0x0;
  uVar15 = 0;
  if (cStack00000000000001b0 == '\0') {
    uVar15 = in_stack_00000158;
  }
  in_stack_000000b8 = in_stack_00000078;
  (*in_stack_00000190)(&stack0x00000100,in_stack_00000150,uVar15,in_stack_00000158,0);
  uVar15 = 0;
  if (cStack00000000000001b0 == '\0') {
    uVar15 = in_stack_00000158;
  }
  (*in_stack_00000190)(&stack0x000001b8,in_stack_00000150,uVar15,in_stack_00000158,1);
  do {
    if ((cStack00000000000001ec == '\0') || (iStack0000000000000130 != iStack00000000000001e8)) {
      if (cStack00000000000001ec == '\0' && cStack0000000000000134 == '\0') {
LAB_0ce75f51:
        if (in_stack_000001e0 != (code *)0x0) {
          (*in_stack_000001e0)(&stack0x000001c8);
        }
        if (in_stack_00000128 != (code *)0x0) {
          (*in_stack_00000128)(&stack0x00000110);
        }
        uVar11 = (**(code **)(*in_stack_00000008 + 0x18))();
        if (in_stack_00000068 != (code *)0x0) {
          (*in_stack_00000068)(&stack0x00000050);
        }
        if (in_stack_000000a8 != (code *)0x0) {
          (*in_stack_000000a8)(&stack0x00000090);
        }
        return uVar11 ^ 1;
      }
    }
    else {
      puVar16 = &stack0x000001c8;
      if (cStack00000000000001ec != '\x02') {
        puVar16 = in_stack_000001c8;
      }
      lVar13 = (*in_stack_00000120)(3,&stack0x00000110,puVar16);
      if (lVar13 != 0) goto LAB_0ce75f51;
    }
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    if (in_stack_000000a8 != (code *)0x0) {
      (*in_stack_000000a8)(&stack0x00000090);
    }
    puVar9 = in_stack_000000c8;
    in_stack_000000a0 = &UNK_048b1ea0;
    in_stack_000000b0 = 0xa24c74b7;
    in_stack_000000a8 = (code *)0x0;
    uStack00000000000000b4 = 3;
    in_stack_00000090 = &stack0x00000010;
    in_stack_000000c8 = &UNK_048b1e80;
    if (puVar9 != &UNK_048b1e80) {
      in_stack_000000c0 = 0;
    }
    if (in_stack_00000068 != (code *)0x0) {
      (*in_stack_00000068)(&stack0x00000050);
    }
    puVar9 = in_stack_00000088;
    in_stack_00000060 = &UNK_0ce7f040;
    in_stack_00000070 = 0x39eb72c7;
    in_stack_00000068 = (code *)0x0;
    uStack0000000000000074 = 3;
    in_stack_00000050 = &stack0x000000d0;
    in_stack_00000088 = &UNK_0ce7eea0;
    if (puVar9 != &UNK_0ce7eea0) {
      in_stack_00000080 = 0;
    }
    in_stack_00000138 = &UNK_0f4e39e8;
    func_0x05ea0220(&stack0x00000220,&stack0x00000100);
    func_0x05ea04f0(&stack0x000002a8,&stack0x00000220);
    if (in_stack_00000278 != (code *)0x0) {
      (*in_stack_00000278)(&stack0x00000260);
    }
    if (in_stack_00000238 != (code *)0x0) {
      (*in_stack_00000238)(&stack0x00000220);
    }
    func_0x0ed75470(&stack0x00000148,&stack0x00000138,&stack0x000002a8,&stack0x00000090,
                    in_stack_00000008);
    if (in_stack_00000300 != (code *)0x0) {
      (*in_stack_00000300)(&stack0x000002e8);
    }
    if (in_stack_000002c0 != (code *)0x0) {
      (*in_stack_000002c0)(&stack0x000002a8);
    }
    lVar13 = in_stack_00000020;
    uVar1 = in_stack_00000018;
    uVar8 = in_stack_00000010;
    plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar14 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    if ((uVar8 & 1) == 0) {
      lVar13 = (long)&stack0x00000010 + 1;
      uVar1 = uVar8 >> 1 & 0x7f;
    }
    *plVar14 = (long)&UNK_0f408b78;
    plVar14[1] = (long)&stack0x00000140;
    plVar14[2] = (long)&stack0x00000100;
    plVar14[3] = (long)&stack0x00000050;
    plVar14[4] = (long)in_stack_00000008;
    plVar14[5] = (long)in_stack_00000048;
    plVar14[6] = (long)&stack0x00000010;
    plVar14[7] = (long)&stack0x000000d0;
    (**(code **)(*in_stack_00000008 + 0x28))(in_stack_00000008,lVar13,uVar1,&stack0x000001f0);
    if (plVar14 == (long *)&stack0x000001f0) {
      lVar13 = 0x20;
LAB_0ce75e9b:
      (**(code **)(*plVar14 + lVar13))();
      lVar4 = in_stack_000000e8;
      lVar2 = in_stack_000000f0;
    }
    else {
      lVar13 = 0x28;
      lVar4 = in_stack_000000e8;
      lVar2 = in_stack_000000f0;
      if (plVar14 != (long *)0x0) goto LAB_0ce75e9b;
    }
    in_stack_000000e8 = lVar4;
    in_stack_000000f0 = lVar2;
    lVar3 = in_stack_000000d0;
    lVar13 = in_stack_000000d8;
    if (lVar4 != 0) {
      while (lVar4 != lVar2) {
        if ((ulong)*(uint *)(lVar2 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4085c8 + (ulong)*(uint *)(lVar2 + -8) * 8))
                    (&stack0x00000220,lVar2 + -0x18);
        }
        *(undefined4 *)(lVar2 + -8) = 0xffffffff;
        lVar2 = lVar2 + -0x18;
      }
      in_stack_000000f0 = lVar4;
      func_0x0412a280(in_stack_000000e8,in_stack_000000f8 - in_stack_000000e8);
      lVar3 = in_stack_000000d0;
      lVar13 = in_stack_000000d8;
    }
    in_stack_000000d0 = lVar3;
    in_stack_000000d8 = lVar13;
    if (lVar3 != 0) {
      for (; lVar3 != lVar13; lVar13 = lVar13 + -0x18) {
        if ((*(byte *)(lVar13 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar13 + -8),
                          *(ulong *)(lVar13 + -0x18) & 0xfffffffffffffffe);
        }
      }
      in_stack_000000d8 = lVar3;
      func_0x0412a280(in_stack_000000d0,in_stack_000000e0 - in_stack_000000d0);
    }
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    puVar16 = &stack0x00000110;
    if (cStack0000000000000134 != '\x02') {
      puVar16 = in_stack_00000110;
    }
    if (cStack0000000000000134 == '\x04') {
      puVar16 = (undefined8 *)0x0;
    }
    (*in_stack_00000108)(puVar16,0);
  } while( true );
}



/* ---- referenced strings ----
 * 0x1258e99  source type is not an associative container
 * 0x1258ea9  ot an associative container
 * 0x1258eb4  iative container
 */
