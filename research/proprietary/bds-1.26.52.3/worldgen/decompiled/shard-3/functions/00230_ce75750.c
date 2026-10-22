/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce75750
 * Label: JigsawBlockActor::vslot5
 * Body:  [[0ce75750, 0ce7575f]]
 * Ghidra: wg_JigsawBlockActor__vslot5
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_JigsawBlockActor__vslot5(void)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined *puVar10;
  char cVar11;
  uint uVar12;
  undefined1 *in_RAX;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  long in_RCX;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *unaff_R14;
  long unaff_R15;
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
  
  *in_RAX = *in_RAX;
  pcVar1 = (char *)(in_RCX * 5 + -0x19);
  *pcVar1 = *pcVar1 + (char)in_RCX;
  lVar13 = func_0x048aead0();
  if ((*(byte *)(lVar13 + 0x19) & 8) == 0) {
    puVar14 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar14 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar16 = _UNK_01258ebc;
    in_stack_00000030 = 0x31;
    in_stack_00000038 = 0x2b;
    *(ulong *)((long)puVar14 + 0x1b) = CONCAT35(_UNK_01258eb9,_DAT_01258eb4);
    *(undefined8 *)((long)puVar14 + 0x23) = uVar16;
    uVar16 = CONCAT53(_DAT_01258eb4,_UNK_01258eb1);
    *(undefined8 *)(puVar14 + 4) = _DAT_01258ea9;
    *(undefined8 *)(puVar14 + 6) = uVar16;
    uVar8 = _UNK_01258ea5;
    uVar7 = _UNK_01258ea1;
    uVar6 = _UNK_01258e9d;
    *puVar14 = _DAT_01258e99;
    puVar14[1] = uVar6;
    puVar14[2] = uVar7;
    puVar14[3] = uVar8;
    *(undefined1 *)((long)puVar14 + 0x2b) = 0;
    in_stack_00000040 = puVar14;
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
    cVar11 = func_0x0eeddcf0(&UNK_0130b358,&UNK_011b9795,0x728,&UNK_013ab8cc,&UNK_011af03f);
    if (cVar11 != '\0') {
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
    uVar16 = unaff_R14[5];
    lVar13 = unaff_R14[6];
    if (lVar13 == 0) {
      (*(code *)unaff_R14[7])(0);
      lVar13 = unaff_R14[6];
    }
    in_stack_00000048 = (undefined8 *)func_0x0488e200(uVar16,lVar13,0xf3246ad4);
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
  uVar16 = 0;
  if (cStack00000000000001b0 == '\0') {
    uVar16 = in_stack_00000158;
  }
  in_stack_000000b8 = in_stack_00000078;
  (*in_stack_00000190)(&stack0x00000100,in_stack_00000150,uVar16,in_stack_00000158,0);
  uVar16 = 0;
  if (cStack00000000000001b0 == '\0') {
    uVar16 = in_stack_00000158;
  }
  (*in_stack_00000190)(&stack0x000001b8,in_stack_00000150,uVar16,in_stack_00000158,1);
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
        uVar12 = (**(code **)(*in_stack_00000008 + 0x18))();
        if (in_stack_00000068 != (code *)0x0) {
          (*in_stack_00000068)(&stack0x00000050);
        }
        if (in_stack_000000a8 != (code *)0x0) {
          (*in_stack_000000a8)(&stack0x00000090);
        }
        return uVar12 ^ 1;
      }
    }
    else {
      puVar17 = &stack0x000001c8;
      if (cStack00000000000001ec != '\x02') {
        puVar17 = in_stack_000001c8;
      }
      lVar13 = (*in_stack_00000120)(3,&stack0x00000110,puVar17);
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
    puVar10 = in_stack_000000c8;
    in_stack_000000a0 = &UNK_048b1ea0;
    in_stack_000000b0 = 0xa24c74b7;
    in_stack_000000a8 = (code *)0x0;
    uStack00000000000000b4 = 3;
    in_stack_00000090 = &stack0x00000010;
    in_stack_000000c8 = &UNK_048b1e80;
    if (puVar10 != &UNK_048b1e80) {
      in_stack_000000c0 = 0;
    }
    if (in_stack_00000068 != (code *)0x0) {
      (*in_stack_00000068)(&stack0x00000050);
    }
    puVar10 = in_stack_00000088;
    in_stack_00000060 = &UNK_0ce7f040;
    in_stack_00000070 = 0x39eb72c7;
    in_stack_00000068 = (code *)0x0;
    uStack0000000000000074 = 3;
    in_stack_00000050 = &stack0x000000d0;
    in_stack_00000088 = &UNK_0ce7eea0;
    if (puVar10 != &UNK_0ce7eea0) {
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
    uVar2 = in_stack_00000018;
    uVar9 = in_stack_00000010;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    if ((uVar9 & 1) == 0) {
      lVar13 = (long)&stack0x00000010 + 1;
      uVar2 = uVar9 >> 1 & 0x7f;
    }
    *plVar15 = (long)&UNK_0f408b78;
    plVar15[1] = (long)&stack0x00000140;
    plVar15[2] = (long)&stack0x00000100;
    plVar15[3] = (long)&stack0x00000050;
    plVar15[4] = (long)in_stack_00000008;
    plVar15[5] = (long)in_stack_00000048;
    plVar15[6] = (long)&stack0x00000010;
    plVar15[7] = (long)&stack0x000000d0;
    (**(code **)(*in_stack_00000008 + 0x28))(in_stack_00000008,lVar13,uVar2,&stack0x000001f0);
    if (plVar15 == (long *)&stack0x000001f0) {
      lVar13 = 0x20;
LAB_0ce75e9b:
      (**(code **)(*plVar15 + lVar13))();
      lVar5 = in_stack_000000e8;
      lVar3 = in_stack_000000f0;
    }
    else {
      lVar13 = 0x28;
      lVar5 = in_stack_000000e8;
      lVar3 = in_stack_000000f0;
      if (plVar15 != (long *)0x0) goto LAB_0ce75e9b;
    }
    in_stack_000000e8 = lVar5;
    in_stack_000000f0 = lVar3;
    lVar4 = in_stack_000000d0;
    lVar13 = in_stack_000000d8;
    if (lVar5 != 0) {
      while (lVar5 != lVar3) {
        if ((ulong)*(uint *)(lVar3 + -8) != 0xffffffff) {
          (**(code **)(&UNK_0f4085c8 + (ulong)*(uint *)(lVar3 + -8) * 8))
                    (&stack0x00000220,lVar3 + -0x18);
        }
        *(undefined4 *)(lVar3 + -8) = 0xffffffff;
        lVar3 = lVar3 + -0x18;
      }
      in_stack_000000f0 = lVar5;
      func_0x0412a280(in_stack_000000e8,in_stack_000000f8 - in_stack_000000e8);
      lVar4 = in_stack_000000d0;
      lVar13 = in_stack_000000d8;
    }
    in_stack_000000d0 = lVar4;
    in_stack_000000d8 = lVar13;
    if (lVar4 != 0) {
      for (; lVar4 != lVar13; lVar13 = lVar13 + -0x18) {
        if ((*(byte *)(lVar13 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar13 + -8),
                          *(ulong *)(lVar13 + -0x18) & 0xfffffffffffffffe);
        }
      }
      in_stack_000000d8 = lVar4;
      func_0x0412a280(in_stack_000000d0,in_stack_000000e0 - in_stack_000000d0);
    }
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    puVar17 = &stack0x00000110;
    if (cStack0000000000000134 != '\x02') {
      puVar17 = in_stack_00000110;
    }
    if (cStack0000000000000134 == '\x04') {
      puVar17 = (undefined8 *)0x0;
    }
    (*in_stack_00000108)(puVar17,0);
  } while( true );
}


