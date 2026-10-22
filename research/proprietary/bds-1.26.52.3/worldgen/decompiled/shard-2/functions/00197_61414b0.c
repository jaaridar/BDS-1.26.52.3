/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x61414b0
 * Label: Editor::Services::EditorJigsawService::vslot5
 * Body:  [[061414b0, 061414bd] [061414c0, 0614156a] [06141570, 061415d7] [061415e0, 061417b0] [061417c0, 0614185e]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_Editor__Services__EditorJigsawService__vslot5(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  char *in_RAX;
  long *plVar5;
  long lVar6;
  byte *in_RCX;
  long unaff_RBX;
  undefined8 *unaff_RBP;
  undefined8 *puVar7;
  undefined1 *unaff_R12;
  undefined8 *unaff_R14;
  undefined1 *unaff_R15;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined *in_stack_00000060;
  code *in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined1 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_000000a0;
  code *in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined1 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined *in_stack_000000c8;
  undefined *in_stack_000000d0;
  code *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  code *in_stack_00000108;
  code *in_stack_00000110;
  int iStack0000000000000118;
  char cStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 *in_stack_000001a8;
  code *in_stack_000001c0;
  int iStack00000000000001c8;
  char cStack00000000000001cc;
  long *in_stack_000001f0;
  code *in_stack_00000218;
  code *in_stack_00000258;
  code *in_stack_000002a0;
  code *in_stack_000002e0;
  
  *in_RCX = *in_RCX | (byte)in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
code_r0x061414b4:
  if (in_RAX != (char *)0x0) {
LAB_061417e5:
    if (in_stack_000001c0 != (code *)0x0) {
      (*in_stack_000001c0)(&stack0x000001a8);
    }
    if (in_stack_00000110 != (code *)0x0) {
      (*in_stack_00000110)(&stack0x000000f8);
    }
    uVar4 = (**(code **)(*in_stack_00000008 + 0x18))();
    if (in_stack_00000068 != (code *)0x0) {
      (*in_stack_00000068)(&stack0x00000050);
    }
    if (in_stack_000000a8 != (code *)0x0) {
      (*in_stack_000000a8)(&stack0x00000090);
    }
    return uVar4 ^ 1;
  }
  do {
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
    uStack00000000000000b0 = 0xa24c74b7;
    in_stack_000000a8 = (code *)0x0;
    uStack00000000000000b4 = 3;
    in_stack_000000c8 = &UNK_048b1e80;
    if (puVar3 != &UNK_048b1e80) {
      in_stack_000000c0 = 0;
    }
    in_stack_00000090 = unaff_R14;
    if (in_stack_00000068 != (code *)0x0) {
      (*in_stack_00000068)(&stack0x00000050);
    }
    puVar3 = in_stack_00000088;
    in_stack_00000060 = &UNK_05dbbd80;
    uStack0000000000000070 = 0xdcaa237f;
    in_stack_00000068 = (code *)0x0;
    uStack0000000000000074 = 3;
    in_stack_00000088 = &UNK_05dbbd60;
    if (puVar3 != &UNK_05dbbd60) {
      in_stack_00000080 = 0;
    }
    in_stack_000000d0 = &UNK_0f4e39e8;
    in_stack_00000050 = unaff_RBP;
    func_0x05ea0220(unaff_R15);
    func_0x05ea04f0(unaff_R12,unaff_R15);
    if (in_stack_00000258 != (code *)0x0) {
      (*in_stack_00000258)(&stack0x00000240);
    }
    if (in_stack_00000218 != (code *)0x0) {
      (*in_stack_00000218)(unaff_R15);
    }
    func_0x0ed75470(&stack0x000000e0,&stack0x000000d0,unaff_R12,&stack0x00000090,in_stack_00000008);
    if (in_stack_000002e0 != (code *)0x0) {
      (*in_stack_000002e0)(&stack0x000002c8);
    }
    if (in_stack_000002a0 != (code *)0x0) {
      (*in_stack_000002a0)(unaff_R12);
    }
    lVar6 = in_stack_00000020;
    uVar1 = in_stack_00000018;
    uVar2 = in_stack_00000010;
    in_stack_000001f0 = (long *)0x0;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    if ((uVar2 & 1) == 0) {
      lVar6 = (long)&stack0x00000010 + 1;
      uVar1 = uVar2 >> 1 & 0x7f;
    }
    *plVar5 = (long)&UNK_0f01dee0;
    plVar5[1] = (long)&stack0x000000d8;
    plVar5[2] = unaff_RBX;
    plVar5[3] = (long)&stack0x00000050;
    plVar5[4] = (long)in_stack_00000008;
    plVar5[5] = in_stack_00000048;
    unaff_R14 = &stack0x00000010;
    plVar5[6] = (long)unaff_R14;
    unaff_RBP = &stack0x00000120;
    plVar5[7] = (long)unaff_RBP;
    in_stack_000001f0 = plVar5;
    (**(code **)(*in_stack_00000008 + 0x28))(in_stack_00000008,lVar6,uVar1,&stack0x000001d0);
    unaff_R15 = &stack0x00000200;
    unaff_R12 = &stack0x00000288;
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
    puVar7 = &stack0x000000f8;
    if (cStack000000000000011c != '\x02') {
      puVar7 = in_stack_000000f8;
    }
    if (cStack000000000000011c == '\x04') {
      puVar7 = (undefined8 *)0x0;
    }
    (*in_stack_000000f0)(puVar7,0);
    if ((cStack00000000000001cc != '\0') && (iStack0000000000000118 == iStack00000000000001c8))
    break;
    if (cStack00000000000001cc == '\0' && cStack000000000000011c == '\0') goto LAB_061417e5;
  } while( true );
  puVar7 = &stack0x000001a8;
  if (cStack00000000000001cc != '\x02') {
    puVar7 = in_stack_000001a8;
  }
  in_RAX = (char *)(*in_stack_00000108)(3,&stack0x000000f8,puVar7);
  goto code_r0x061414b4;
}


