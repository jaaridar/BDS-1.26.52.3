/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6140ac0
 * Label: Editor::Services::EditorJigsawService::vslot1
 * Body:  [[06140ac0, 06140afe] [06140d17, 06140d2d]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot1
 */


/* WARNING: Removing unreachable block (ram,0x06140c4f) */
/* WARNING: Removing unreachable block (ram,0x06140c61) */

void wg_Editor__Services__EditorJigsawService__vslot1(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *in_RAX;
  int *piVar7;
  long unaff_RBX;
  int *unaff_R14;
  
  if ((int)in_RAX == 0) {
    func_0x0eec74c0(0xd0,0);
  }
  in_RAX[1] = 0;
  in_RAX[2] = 0;
  *in_RAX = (long)&UNK_0ef439d0;
  lVar3 = *(long *)(unaff_R14 + 6);
  lVar6 = *(long *)(unaff_R14 + 8);
  unaff_R14[6] = 0;
  unaff_R14[7] = 0;
  unaff_R14[8] = 0;
  unaff_R14[9] = 0;
  in_RAX[3] = lVar3;
  in_RAX[4] = lVar6;
  in_RAX[7] = *(long *)(unaff_R14 + 0xe);
  lVar3 = *(long *)(unaff_R14 + 0xc);
  in_RAX[5] = *(long *)(unaff_R14 + 10);
  in_RAX[6] = lVar3;
  unaff_R14[10] = 0;
  unaff_R14[0xb] = 0;
  unaff_R14[0xc] = 0;
  unaff_R14[0xd] = 0;
  unaff_R14[0xe] = 0;
  unaff_R14[0xf] = 0;
  in_RAX[10] = *(long *)(unaff_R14 + 0x14);
  lVar3 = *(long *)(unaff_R14 + 0x12);
  in_RAX[8] = *(long *)(unaff_R14 + 0x10);
  in_RAX[9] = lVar3;
  unaff_R14[0x10] = 0;
  unaff_R14[0x11] = 0;
  unaff_R14[0x12] = 0;
  unaff_R14[0x13] = 0;
  unaff_R14[0x14] = 0;
  unaff_R14[0x15] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x18);
  in_RAX[0xb] = *(long *)(unaff_R14 + 0x16);
  in_RAX[0xc] = lVar3;
  in_RAX[0xd] = *(long *)(unaff_R14 + 0x1a);
  unaff_R14[0x16] = 0;
  unaff_R14[0x17] = 0;
  unaff_R14[0x18] = 0;
  unaff_R14[0x19] = 0;
  unaff_R14[0x1a] = 0;
  unaff_R14[0x1b] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x1e);
  in_RAX[0xe] = *(long *)(unaff_R14 + 0x1c);
  in_RAX[0xf] = lVar3;
  in_RAX[0x10] = *(long *)(unaff_R14 + 0x20);
  unaff_R14[0x1c] = 0;
  unaff_R14[0x1d] = 0;
  unaff_R14[0x1e] = 0;
  unaff_R14[0x1f] = 0;
  unaff_R14[0x20] = 0;
  unaff_R14[0x21] = 0;
  *(int *)(in_RAX + 0x11) = unaff_R14[0x22];
  lVar3 = *(long *)(unaff_R14 + 0x26);
  in_RAX[0x12] = *(long *)(unaff_R14 + 0x24);
  in_RAX[0x13] = lVar3;
  in_RAX[0x14] = *(long *)(unaff_R14 + 0x28);
  unaff_R14[0x24] = 0;
  unaff_R14[0x25] = 0;
  unaff_R14[0x26] = 0;
  unaff_R14[0x27] = 0;
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
  unaff_R14[0x2a] = 0;
  unaff_R14[0x2b] = 0;
  unaff_R14[0x2c] = 0;
  unaff_R14[0x2d] = 0;
  unaff_R14[0x2e] = 0;
  unaff_R14[0x2f] = 0;
  lVar3 = *(long *)(unaff_R14 + 0x30);
  *(undefined8 *)((long)in_RAX + 0xc5) = *(undefined8 *)((long)unaff_R14 + 0xc5);
  in_RAX[0x18] = lVar3;
  func_0x048afd20();
  if (in_RAX != (long *)0x0) {
    LOCK();
    plVar1 = in_RAX + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_RAX + 0x10))(in_RAX);
      func_0x0412c2d0(in_RAX);
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


