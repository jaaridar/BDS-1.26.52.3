/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614e4b0
 * Label: Editor::Services::EditorJigsawService::vslot12
 * Body:  [[0614e4b0, 0614e5b0]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot12
 */


void wg_Editor__Services__EditorJigsawService__vslot12
               (undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
               undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *in_RAX;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  long unaff_R15;
  undefined4 uVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uStack0000000000000010;
  long *plStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uStack0000000000000020 = (undefined4)param_1;
  *(undefined1 *)(in_RAX + 0x9200000) = param_4;
  in_RAX[0x14] = (ulong)*(uint *)(param_2 + 0x88);
  *(undefined4 *)(unaff_R15 + 0x78) = uStack0000000000000020;
  *(undefined4 *)(unaff_R15 + 0x7c) = uVar10;
  *(undefined4 *)(unaff_R15 + 0x80) = in_XMM0_Dc;
  *(undefined4 *)(unaff_R15 + 0x84) = in_XMM0_Dd;
  *(undefined8 *)(unaff_R15 + 0x88) = 0;
  in_RAX[0x17] = *(long *)(unaff_R15 + 0xa0);
  uVar3 = *(undefined4 *)(unaff_R15 + 0x94);
  uVar4 = *(undefined4 *)(unaff_R15 + 0x98);
  uVar5 = *(undefined4 *)(unaff_R15 + 0x9c);
  *(undefined4 *)(in_RAX + 0x15) = *(undefined4 *)(unaff_R15 + 0x90);
  *(undefined4 *)((long)in_RAX + 0xac) = uVar3;
  *(undefined4 *)(in_RAX + 0x16) = uVar4;
  *(undefined4 *)((long)in_RAX + 0xb4) = uVar5;
  *(undefined4 *)(unaff_R15 + 0x90) = uStack0000000000000020;
  *(undefined4 *)(unaff_R15 + 0x94) = uVar10;
  *(undefined4 *)(unaff_R15 + 0x98) = in_XMM0_Dc;
  *(undefined4 *)(unaff_R15 + 0x9c) = in_XMM0_Dd;
  *(undefined8 *)(unaff_R15 + 0xa0) = 0;
  lVar2 = *(long *)(unaff_R15 + 0xa8);
  *(undefined8 *)((long)in_RAX + 0xc5) = *(undefined8 *)(unaff_R15 + 0xad);
  in_RAX[0x18] = lVar2;
  uStack0000000000000010 = param_5;
  plStack0000000000000018 = in_RAX;
  uStack0000000000000028 = in_XMM0_Dc;
  uStack000000000000002c = in_XMM0_Dd;
  func_0x048afd20();
  if (plStack0000000000000018 != (long *)0x0) {
    LOCK();
    plVar9 = plStack0000000000000018 + 1;
    lVar2 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack0000000000000018 + 0x10))(plStack0000000000000018);
      func_0x0412c2d0(plStack0000000000000018);
    }
  }
  plVar9 = (long *)CONCAT44(uStack000000000000002c,uStack0000000000000028);
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar6 = *unaff_R14;
  uVar7 = unaff_R14[1];
  uVar8 = unaff_R14[3];
  unaff_RBX[2] = unaff_R14[2];
  unaff_RBX[3] = uVar8;
  *unaff_RBX = uVar6;
  unaff_RBX[1] = uVar7;
  return;
}


