/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6141200
 * Label: Editor::Services::EditorJigsawService::vslot13
 * Body:  [[06141200, 0614132d]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot13
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_Editor__Services__EditorJigsawService__vslot13(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *unaff_R14;
  long unaff_R15;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
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
  undefined *in_stack_000000d0;
  undefined *in_stack_000000d8;
  undefined *in_stack_000000e0;
  code *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  code *in_stack_00000108;
  code *in_stack_00000110;
  int iStack0000000000000118;
  char cStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000160;
  int iStack0000000000000170;
  undefined4 uStack0000000000000174;
  char cStack0000000000000190;
  undefined8 *in_stack_000001a8;
  code *in_stack_000001c0;
  int iStack00000000000001c8;
  char cStack00000000000001cc;
  long *in_stack_000001f0;
  code *in_stack_00000218;
  code *in_stack_00000258;
  code *in_stack_000002a0;
  code *in_stack_000002e0;
  
  uStack0000000000000134 = (undefined4)((ulong)param_1 >> 0x20);
  uStack0000000000000130 = (undefined4)param_1;
  iStack0000000000000170 = iStack0000000000000170 - in_EAX;
  _cStack0000000000000190 = 0;
  uStack0000000000000138 = in_XMM0_Dc;
  uStack000000000000013c = in_XMM0_Dd;
  uStack0000000000000140 = uStack0000000000000130;
  uStack0000000000000150 = uStack0000000000000130;
  uStack0000000000000160 = uStack0000000000000130;
  if (*(code **)(unaff_R15 + 0x38) != (code *)0x0) {
    uStack0000000000000148 = in_XMM0_Dc;
    uStack000000000000014c = in_XMM0_Dd;
    (**(code **)(unaff_R15 + 0x38))(0x800);
    if ((code *)CONCAT44(uStack000000000000014c,uStack0000000000000148) != (code *)0x0) {
      (*(code *)CONCAT44(uStack000000000000014c,uStack0000000000000148))
                (CONCAT44(uStack0000000000000134,uStack0000000000000130));
      goto LAB_061412c1;
    }
  }
  func_0x048b1dc0(&stack0x00000200);
  cVar4 = func_0x0eeddcf0(&UNK_0130b358,&UNK_011b9795,0x728,&UNK_013ab8cc,&UNK_0119e0f8);
  if (cVar4 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_061412c1:
  in_stack_00000048 = (undefined8 *)*unaff_R14;
  if (*(char *)((long)unaff_R14 + 0x24) == '\x02') {
    in_stack_00000048 = unaff_R14;
  }
  if (in_stack_00000048 == (undefined8 *)0x0 || *(int *)(unaff_R14 + 4) != -0x63a0c203) {
    uVar8 = unaff_R14[5];
    lVar6 = unaff_R14[6];
    if (lVar6 == 0) {
      (*(code *)unaff_R14[7])(0);
      lVar6 = unaff_R14[6];
    }
    in_stack_00000048 = (undefined8 *)func_0x0488e200(uVar8,lVar6,0x9c5f3dfd);
  }
  in_stack_000000e0 = &UNK_0ef44b00;
  in_stack_000000d8 = &UNK_0f011c18;
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
  uVar8 = 0;
  if (cStack0000000000000190 == '\0') {
    uVar8 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
  }
  in_stack_000000b8 = in_stack_00000078;
  (*(code *)CONCAT44(uStack0000000000000174,iStack0000000000000170))
            (&stack0x000000e8,CONCAT44(uStack0000000000000134,uStack0000000000000130),uVar8,
             CONCAT44(uStack000000000000013c,uStack0000000000000138),0);
  uVar8 = 0;
  if (cStack0000000000000190 == '\0') {
    uVar8 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
  }
  (*(code *)CONCAT44(uStack0000000000000174,iStack0000000000000170))
            (&stack0x00000198,CONCAT44(uStack0000000000000134,uStack0000000000000130),uVar8,
             CONCAT44(uStack000000000000013c,uStack0000000000000138),1);
  do {
    if ((cStack00000000000001cc == '\0') || (iStack0000000000000118 != iStack00000000000001c8)) {
      if (cStack00000000000001cc == '\0' && cStack000000000000011c == '\0') {
LAB_061417e5:
        if (in_stack_000001c0 != (code *)0x0) {
          (*in_stack_000001c0)(&stack0x000001a8);
        }
        if (in_stack_00000110 != (code *)0x0) {
          (*in_stack_00000110)(&stack0x000000f8);
        }
        uVar5 = (**(code **)(*in_stack_00000008 + 0x18))();
        if (in_stack_00000068 != (code *)0x0) {
          (*in_stack_00000068)(&stack0x00000050);
        }
        if (in_stack_000000a8 != (code *)0x0) {
          (*in_stack_000000a8)(&stack0x00000090);
        }
        return uVar5 ^ 1;
      }
    }
    else {
      puVar9 = &stack0x000001a8;
      if (cStack00000000000001cc != '\x02') {
        puVar9 = in_stack_000001a8;
      }
      lVar6 = (*in_stack_00000108)(3,&stack0x000000f8,puVar9);
      if (lVar6 != 0) goto LAB_061417e5;
    }
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000120 = 0;
    in_stack_00000128 = 0;
    if (in_stack_000000a8 != (code *)0x0) {
      (*in_stack_000000a8)(&stack0x00000090);
    }
    puVar3 = in_stack_000000c8;
    in_stack_000000a0 = &UNK_048b1ea0;
    in_stack_000000b0 = 0xa24c74b7;
    in_stack_000000a8 = (code *)0x0;
    uStack00000000000000b4 = 3;
    in_stack_000000c8 = &UNK_048b1e80;
    if (puVar3 != &UNK_048b1e80) {
      in_stack_000000c0 = 0;
    }
    in_stack_00000090 = &stack0x00000010;
    if (in_stack_00000068 != (code *)0x0) {
      (*in_stack_00000068)(&stack0x00000050);
    }
    puVar3 = in_stack_00000088;
    in_stack_00000060 = &UNK_05dbbd80;
    in_stack_00000070 = 0xdcaa237f;
    in_stack_00000068 = (code *)0x0;
    uStack0000000000000074 = 3;
    in_stack_00000088 = &UNK_05dbbd60;
    if (puVar3 != &UNK_05dbbd60) {
      in_stack_00000080 = 0;
    }
    in_stack_000000d0 = &UNK_0f4e39e8;
    in_stack_00000050 = &stack0x00000120;
    func_0x05ea0220(&stack0x00000200,&stack0x000000e8);
    func_0x05ea04f0(&stack0x00000288,&stack0x00000200);
    if (in_stack_00000258 != (code *)0x0) {
      (*in_stack_00000258)(&stack0x00000240);
    }
    if (in_stack_00000218 != (code *)0x0) {
      (*in_stack_00000218)(&stack0x00000200);
    }
    func_0x0ed75470(&stack0x000000e0,&stack0x000000d0,&stack0x00000288,&stack0x00000090,
                    in_stack_00000008);
    if (in_stack_000002e0 != (code *)0x0) {
      (*in_stack_000002e0)(&stack0x000002c8);
    }
    if (in_stack_000002a0 != (code *)0x0) {
      (*in_stack_000002a0)(&stack0x00000288);
    }
    lVar6 = in_stack_00000020;
    uVar1 = in_stack_00000018;
    uVar2 = in_stack_00000010;
    in_stack_000001f0 = (long *)0x0;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    if ((uVar2 & 1) == 0) {
      lVar6 = (long)&stack0x00000010 + 1;
      uVar1 = uVar2 >> 1 & 0x7f;
    }
    *plVar7 = (long)&UNK_0f01dee0;
    plVar7[1] = (long)&stack0x000000d8;
    plVar7[2] = (long)&stack0x000000e8;
    plVar7[3] = (long)&stack0x00000050;
    plVar7[4] = (long)in_stack_00000008;
    plVar7[5] = (long)in_stack_00000048;
    plVar7[6] = (long)&stack0x00000010;
    plVar7[7] = (long)&stack0x00000120;
    in_stack_000001f0 = plVar7;
    (**(code **)(*in_stack_00000008 + 0x28))(in_stack_00000008,lVar6,uVar1,&stack0x000001d0);
    if (in_stack_000001f0 == (long *)&stack0x000001d0) {
      lVar6 = 0x20;
LAB_061417c5:
      (**(code **)(*in_stack_000001f0 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (in_stack_000001f0 != (long *)0x0) goto LAB_061417c5;
    }
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    puVar9 = &stack0x000000f8;
    if (cStack000000000000011c != '\x02') {
      puVar9 = in_stack_000000f8;
    }
    if (cStack000000000000011c == '\x04') {
      puVar9 = (undefined8 *)0x0;
    }
    (*in_stack_000000f0)(puVar9,0);
  } while( true );
}


