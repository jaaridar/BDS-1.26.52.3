/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6140fd0
 * Label: Editor::Services::EditorJigsawService::vslot2
 * Body:  [[06140fd0, 061410b5]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot2
 */


void wg_Editor__Services__EditorJigsawService__vslot2(void)

{
  undefined8 uVar1;
  long *in_RAX;
  ulong uVar2;
  ulong in_RCX;
  ulong unaff_RBX;
  long lVar3;
  char in_R9B;
  bool in_ZF;
  
  uVar2 = in_RCX & 0xffffffff;
  if (in_ZF) {
    uVar2 = unaff_RBX;
  }
  if ((in_R9B == '\0') && (uVar2 != 0)) {
LAB_06141036:
    lVar3 = *(long *)(unaff_RBX + 0x28);
    in_RAX[2] = (long)&UNK_048b01f0;
    *(undefined4 *)(in_RAX + 4) = 0xe013e8b;
    in_RAX[3] = 0;
    *(undefined1 *)((long)in_RAX + 0x24) = 4;
    *in_RAX = uVar2 + 8;
    in_RAX[5] = lVar3;
    in_RAX[6] = 0;
    in_RAX[7] = (long)&UNK_048b01d0;
    return;
  }
  if (*(code **)(unaff_RBX + 0x38) != (code *)0x0) {
    uVar1 = *(undefined8 *)(unaff_RBX + 0x28);
    lVar3 = *(long *)(unaff_RBX + 0x30);
    if (lVar3 == 0) {
      (**(code **)(unaff_RBX + 0x38))(0);
      lVar3 = *(long *)(unaff_RBX + 0x30);
    }
    uVar2 = func_0x0488e200(uVar1,lVar3,&UNK_0d0c08f8);
    if (uVar2 != 0) goto LAB_06141036;
  }
  lVar3 = *(long *)(unaff_RBX + 0x28);
  in_RAX[2] = (long)&UNK_0488e0b0;
  *(undefined4 *)(in_RAX + 4) = 0x48b5725f;
  in_RAX[3] = 0;
  *(undefined1 *)((long)in_RAX + 0x24) = 0;
  *in_RAX = 0;
  in_RAX[5] = lVar3;
  in_RAX[6] = 0;
  in_RAX[7] = 0;
  return;
}


