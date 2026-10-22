/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6141330
 * Label: Editor::Services::EditorJigsawService::vslot4
 * Body:  [[06141330, 06141452] [06141460, 061414bd] [061414c0, 061414ff] [06141501, 0614156a] [06141570, 061415d7] [061415e0, 061417b0] [061417c0, 0614185e]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wg_Editor__Services__EditorJigsawService__vslot4(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int in_EAX;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_R14;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000048;
  undefined8 *puStack0000000000000050;
  undefined *puStack0000000000000060;
  code *pcStack0000000000000068;
  undefined4 uStack0000000000000070;
  undefined1 uStack0000000000000074;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined *puStack0000000000000088;
  undefined8 *puStack0000000000000090;
  undefined *puStack00000000000000a0;
  code *pcStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  undefined1 uStack00000000000000b4;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined *puStack00000000000000c8;
  undefined *in_stack_000000d0;
  undefined *puStack00000000000000d8;
  ulong uStack00000000000000e0;
  code *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  code *in_stack_00000108;
  code *in_stack_00000110;
  int iStack0000000000000118;
  char cStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  code *in_stack_00000170;
  char in_stack_00000190;
  undefined8 *in_stack_000001a8;
  code *in_stack_000001c0;
  int iStack00000000000001c8;
  char cStack00000000000001cc;
  long *in_stack_000001f0;
  code *in_stack_00000218;
  code *in_stack_00000258;
  code *in_stack_000002a0;
  code *in_stack_000002e0;
  
  uStack00000000000000e0 = (ulong)(in_EAX + 0x8e037cb);
  puStack00000000000000d8 = &UNK_0f011c18;
  uStack0000000000000078 = *(undefined8 *)(unaff_R14 + 0x28);
  puStack00000000000000a0 = &UNK_0488e0b0;
  uStack00000000000000b0 = 0x48b5725f;
  pcStack00000000000000a8 = (code *)0x0;
  uStack00000000000000b4 = 0;
  puStack0000000000000090 = (undefined8 *)0x0;
  uStack00000000000000c0 = 0;
  puStack00000000000000c8 = (undefined *)0x0;
  puStack0000000000000060 = &UNK_0488e0b0;
  uStack0000000000000070 = 0x48b5725f;
  pcStack0000000000000068 = (code *)0x0;
  uStack0000000000000074 = 0;
  puStack0000000000000050 = (undefined8 *)0x0;
  uStack0000000000000080 = 0;
  puStack0000000000000088 = (undefined *)0x0;
  uVar7 = 0;
  if (in_stack_00000190 == '\0') {
    uVar7 = in_stack_00000138;
  }
  uStack00000000000000b8 = uStack0000000000000078;
  (*in_stack_00000170)(&stack0x000000e8,in_stack_00000130,uVar7,in_stack_00000138,0);
  uVar7 = 0;
  if (in_stack_00000190 == '\0') {
    uVar7 = in_stack_00000138;
  }
  (*in_stack_00000170)(&stack0x00000198,in_stack_00000130,uVar7,in_stack_00000138,1);
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
        uVar4 = (**(code **)(*in_stack_00000008 + 0x18))();
        if (pcStack0000000000000068 != (code *)0x0) {
          (*pcStack0000000000000068)(&stack0x00000050);
        }
        if (pcStack00000000000000a8 != (code *)0x0) {
          (*pcStack00000000000000a8)(&stack0x00000090);
        }
        return uVar4 ^ 1;
      }
    }
    else {
      puVar8 = &stack0x000001a8;
      if (cStack00000000000001cc != '\x02') {
        puVar8 = in_stack_000001a8;
      }
      lVar5 = (*in_stack_00000108)(3,&stack0x000000f8,puVar8);
      if (lVar5 != 0) goto LAB_061417e5;
    }
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000120 = 0;
    in_stack_00000128 = 0;
    if (pcStack00000000000000a8 != (code *)0x0) {
      (*pcStack00000000000000a8)(&stack0x00000090);
    }
    puVar3 = puStack00000000000000c8;
    puStack00000000000000a0 = &UNK_048b1ea0;
    uStack00000000000000b0 = 0xa24c74b7;
    pcStack00000000000000a8 = (code *)0x0;
    uStack00000000000000b4 = 3;
    puStack00000000000000c8 = &UNK_048b1e80;
    if (puVar3 != &UNK_048b1e80) {
      uStack00000000000000c0 = 0;
    }
    puStack0000000000000090 = &stack0x00000010;
    if (pcStack0000000000000068 != (code *)0x0) {
      (*pcStack0000000000000068)(&stack0x00000050);
    }
    puVar3 = puStack0000000000000088;
    puStack0000000000000060 = &UNK_05dbbd80;
    uStack0000000000000070 = 0xdcaa237f;
    pcStack0000000000000068 = (code *)0x0;
    uStack0000000000000074 = 3;
    puStack0000000000000088 = &UNK_05dbbd60;
    if (puVar3 != &UNK_05dbbd60) {
      uStack0000000000000080 = 0;
    }
    in_stack_000000d0 = &UNK_0f4e39e8;
    puStack0000000000000050 = &stack0x00000120;
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
    lVar5 = in_stack_00000020;
    uVar1 = in_stack_00000018;
    uVar2 = in_stack_00000010;
    in_stack_000001f0 = (long *)0x0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    if ((uVar2 & 1) == 0) {
      lVar5 = (long)&stack0x00000010 + 1;
      uVar1 = uVar2 >> 1 & 0x7f;
    }
    *plVar6 = (long)&UNK_0f01dee0;
    plVar6[1] = (long)&stack0x000000d8;
    plVar6[2] = (long)&stack0x000000e8;
    plVar6[3] = (long)&stack0x00000050;
    plVar6[4] = (long)in_stack_00000008;
    plVar6[5] = in_stack_00000048;
    plVar6[6] = (long)&stack0x00000010;
    plVar6[7] = (long)&stack0x00000120;
    in_stack_000001f0 = plVar6;
    (**(code **)(*in_stack_00000008 + 0x28))(in_stack_00000008,lVar5,uVar1,&stack0x000001d0);
    if (in_stack_000001f0 == (long *)&stack0x000001d0) {
      lVar5 = 0x20;
LAB_061417c5:
      (**(code **)(*in_stack_000001f0 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (in_stack_000001f0 != (long *)0x0) goto LAB_061417c5;
    }
    if ((in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
    }
    puVar8 = &stack0x000000f8;
    if (cStack000000000000011c != '\x02') {
      puVar8 = in_stack_000000f8;
    }
    if (cStack000000000000011c == '\x04') {
      puVar8 = (undefined8 *)0x0;
    }
    (*in_stack_000000f0)(puVar8,0);
  } while( true );
}


