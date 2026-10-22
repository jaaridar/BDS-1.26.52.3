/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6140ae0
 * Label: Editor::Services::EditorJigsawService::vslot1
 * Body:  [[06140ae0, 06140cce] [06140d0a, 06140d16]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot1
 */


void wg_Editor__Services__EditorJigsawService__vslot1(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *in_RAX;
  undefined8 in_RCX;
  int *piVar7;
  long unaff_RBX;
  int *unaff_R14;
  long *in_XMM0_Qb;
  undefined8 uStack0000000000000010;
  long *plStack0000000000000018;
  undefined8 uStack0000000000000020;
  long *plStack0000000000000028;
  
  lVar3 = *(long *)(unaff_R14 + 6);
  lVar6 = *(long *)(unaff_R14 + 8);
  *(undefined8 *)(unaff_R14 + 6) = param_1;
  *(long **)(unaff_R14 + 8) = in_XMM0_Qb;
  in_RAX[3] = lVar3;
  in_RAX[4] = lVar6;
  in_RAX[7] = *(long *)(unaff_R14 + 0xe);
  lVar3 = *(long *)(unaff_R14 + 0xc);
  in_RAX[5] = *(long *)(unaff_R14 + 10);
  in_RAX[6] = lVar3;
  *(undefined8 *)(unaff_R14 + 10) = param_1;
  *(long **)(unaff_R14 + 0xc) = in_XMM0_Qb;
  unaff_R14[0xe] = 0;
  unaff_R14[0xf] = 0;
  in_RAX[10] = *(long *)(unaff_R14 + 0x14);
  lVar3 = *(long *)(unaff_R14 + 0x12);
  in_RAX[8] = *(long *)(unaff_R14 + 0x10);
  in_RAX[9] = lVar3;
  *(undefined8 *)(unaff_R14 + 0x10) = param_1;
  *(long **)(unaff_R14 + 0x12) = in_XMM0_Qb;
  unaff_R14[0x14] = 0;
  unaff_R14[0x15] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x18);
  in_RAX[0xb] = *(long *)(unaff_R14 + 0x16);
  in_RAX[0xc] = lVar3;
  in_RAX[0xd] = *(long *)(unaff_R14 + 0x1a);
  *(undefined8 *)(unaff_R14 + 0x16) = param_1;
  *(long **)(unaff_R14 + 0x18) = in_XMM0_Qb;
  unaff_R14[0x1a] = 0;
  unaff_R14[0x1b] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x1e);
  in_RAX[0xe] = *(long *)(unaff_R14 + 0x1c);
  in_RAX[0xf] = lVar3;
  in_RAX[0x10] = *(long *)(unaff_R14 + 0x20);
  *(undefined8 *)(unaff_R14 + 0x1c) = param_1;
  *(long **)(unaff_R14 + 0x1e) = in_XMM0_Qb;
  unaff_R14[0x20] = 0;
  unaff_R14[0x21] = 0;
  *(int *)(in_RAX + 0x11) = unaff_R14[0x22];
  lVar3 = *(long *)(unaff_R14 + 0x26);
  in_RAX[0x12] = *(long *)(unaff_R14 + 0x24);
  in_RAX[0x13] = lVar3;
  in_RAX[0x14] = *(long *)(unaff_R14 + 0x28);
  *(undefined8 *)(unaff_R14 + 0x24) = param_1;
  *(long **)(unaff_R14 + 0x26) = in_XMM0_Qb;
  unaff_R14[0x28] = 0;
  unaff_R14[0x29] = 0;
  in_RAX[0x17] = *(long *)(unaff_R14 + 0x2e);
  iVar2 = unaff_R14[0x2b];
  iVar4 = unaff_R14[0x2c];
  iVar5 = unaff_R14[0x2d];
  *(int *)(in_RAX + 0x15) = unaff_R14[0x2a];
  *(int *)((long)in_RAX + 0xac) = iVar2;
  *(int *)(in_RAX + 0x16) = iVar4;
  *(int *)((long)in_RAX + 0xb4) = iVar5;
  *(undefined8 *)(unaff_R14 + 0x2a) = param_1;
  *(long **)(unaff_R14 + 0x2c) = in_XMM0_Qb;
  unaff_R14[0x2e] = 0;
  unaff_R14[0x2f] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x30);
  *(undefined8 *)((long)in_RAX + 0xc5) = *(undefined8 *)((long)unaff_R14 + 0xc5);
  in_RAX[0x18] = lVar3;
  uStack0000000000000010 = in_RCX;
  plStack0000000000000018 = in_RAX;
  uStack0000000000000020 = param_1;
  plStack0000000000000028 = in_XMM0_Qb;
  func_0x048afd20();
  if (plStack0000000000000018 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000018 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000018 + 0x10))(plStack0000000000000018);
      func_0x0412c2d0(plStack0000000000000018);
    }
  }
  if (plStack0000000000000028 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000028 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack0000000000000028 + 0x10))(plStack0000000000000028);
      func_0x0412c2d0(plStack0000000000000028);
    }
  }
  lVar3 = *(long *)(unaff_RBX + 0x10);
  iVar2 = *(int *)(unaff_RBX + 0x1c);
  if (iVar2 == 2) {
    piVar7 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
    iVar2 = *piVar7;
    while (iVar2 != *(int *)(unaff_RBX + 0x18)) {
      piVar7 = piVar7 + 0x16;
      iVar2 = *piVar7;
    }
    for (; *(long *)(piVar7 + 0xc) != *(long *)(unaff_RBX + 8); piVar7 = *(int **)(piVar7 + 0xe)) {
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return;
      }
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | *unaff_R14 << 0x10;
      return;
    }
    piVar7 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
    iVar2 = *piVar7;
    while (iVar2 != *(int *)(unaff_RBX + 0x18)) {
      piVar7 = piVar7 + 0x1a;
      iVar2 = *piVar7;
    }
  }
  piVar7[4] = piVar7[4] | *unaff_R14 << 0x10;
  return;
}


