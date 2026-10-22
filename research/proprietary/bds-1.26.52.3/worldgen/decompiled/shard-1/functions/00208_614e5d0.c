/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x614e5d0
 * Label: Editor::Services::EditorJigsawService::vslot13
 * Body:  [[0614e3d3, 0614e5c7] [0614e5d0, 0614e5f8]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot13
 */


/* WARNING: Removing unreachable block (ram,0x0614e572) */
/* WARNING: Removing unreachable block (ram,0x0614e584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Editor__Services__EditorJigsawService__vslot13(void)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_EAX;
  long *plVar9;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  long *unaff_R15;
  
  if (in_EAX != 0) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  lVar2 = *unaff_R15;
  lVar5 = unaff_R15[1];
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
  plVar9[3] = lVar2;
  plVar9[4] = lVar5;
  plVar9[7] = unaff_R15[4];
  lVar2 = unaff_R15[3];
  plVar9[5] = unaff_R15[2];
  plVar9[6] = lVar2;
  unaff_R15[2] = 0;
  unaff_R15[3] = 0;
  unaff_R15[4] = 0;
  plVar9[10] = unaff_R15[7];
  lVar2 = unaff_R15[6];
  plVar9[8] = unaff_R15[5];
  plVar9[9] = lVar2;
  unaff_R15[5] = 0;
  unaff_R15[6] = 0;
  unaff_R15[7] = 0;
  lVar2 = unaff_R15[9];
  plVar9[0xb] = unaff_R15[8];
  plVar9[0xc] = lVar2;
  plVar9[0xd] = unaff_R15[10];
  unaff_R15[8] = 0;
  unaff_R15[9] = 0;
  unaff_R15[10] = 0;
  lVar2 = unaff_R15[0xc];
  plVar9[0xe] = unaff_R15[0xb];
  plVar9[0xf] = lVar2;
  plVar9[0x10] = unaff_R15[0xd];
  unaff_R15[0xb] = 0;
  unaff_R15[0xc] = 0;
  unaff_R15[0xd] = 0;
  *(int *)(plVar9 + 0x11) = (int)unaff_R15[0xe];
  lVar2 = unaff_R15[0x10];
  plVar9[0x12] = unaff_R15[0xf];
  plVar9[0x13] = lVar2;
  plVar9[0x14] = unaff_R15[0x11];
  unaff_R15[0xf] = 0;
  unaff_R15[0x10] = 0;
  unaff_R15[0x11] = 0;
  plVar9[0x17] = unaff_R15[0x14];
  uVar3 = *(undefined4 *)((long)unaff_R15 + 0x94);
  lVar2 = unaff_R15[0x13];
  uVar4 = *(undefined4 *)((long)unaff_R15 + 0x9c);
  *(int *)(plVar9 + 0x15) = (int)unaff_R15[0x12];
  *(undefined4 *)((long)plVar9 + 0xac) = uVar3;
  *(int *)(plVar9 + 0x16) = (int)lVar2;
  *(undefined4 *)((long)plVar9 + 0xb4) = uVar4;
  unaff_R15[0x12] = 0;
  unaff_R15[0x13] = 0;
  unaff_R15[0x14] = 0;
  lVar2 = unaff_R15[0x15];
  *(undefined8 *)((long)plVar9 + 0xc5) = *(undefined8 *)((long)unaff_R15 + 0xad);
  plVar9[0x18] = lVar2;
  func_0x048afd20();
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


