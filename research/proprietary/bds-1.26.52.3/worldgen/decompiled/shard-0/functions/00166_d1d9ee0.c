/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9ee0
 * Label: br::worldgen::processors::BlockIgnore::vslot1
 * Body:  [[0d1d9ee0, 0d1d9ee3]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__BlockIgnore__vslot1(void)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *unaff_RBX;
  long *plVar9;
  long *unaff_RBP;
  long lVar10;
  long unaff_R14;
  undefined1 *puVar11;
  ulong unaff_retaddr;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar1 = unaff_R14 + 0x140;
  func_0x0412d680(lVar1);
  plVar3 = *(long **)(unaff_R14 + 0x130);
  if (*(long **)(unaff_R14 + 0x128) == plVar3) {
    bVar4 = false;
    func_0x0412d6b0(lVar1);
  }
  else {
    puVar11 = in_stack_00000010;
    if ((unaff_retaddr & 1) == 0) {
      in_stack_00000008 = unaff_retaddr >> 1 & 0x7f;
      puVar11 = &stack0x00000001;
    }
    plVar9 = *(long **)(unaff_R14 + 0x128) + 2;
    do {
      bVar2 = *(byte *)(plVar9 + -2);
      if ((bVar2 & 1) == 0) {
        uVar8 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar8 = plVar9[-1];
      }
      if (uVar8 == in_stack_00000008) {
        if ((bVar2 & 1) == 0) {
          lVar10 = (long)plVar9 + -0xf;
        }
        else {
          lVar10 = *plVar9;
        }
        iVar5 = func_0x0eee3000(lVar10,puVar11,in_stack_00000008);
        if (iVar5 == 0) {
          bVar4 = true;
          goto LAB_0d1d9fc9;
        }
      }
      plVar6 = plVar9 + 2;
      plVar9 = plVar9 + 4;
    } while (plVar6 != plVar3);
    bVar4 = false;
LAB_0d1d9fc9:
    func_0x0412d6b0(lVar1);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
  }
  if (bVar4) {
    in_stack_00000030 = &UNK_01254d89;
    in_stack_00000038 = 0;
    func_0x041b3a30(unaff_RBP,3,&stack0x00000000,&stack0x00000030);
  }
  else {
    func_0x0412d680(unaff_R14 + 0x18);
    if (unaff_RBX == (undefined8 *)0x0) {
      in_stack_00000030 = &UNK_01254d89;
      in_stack_00000038 = 0;
      func_0x041b3a30(unaff_RBP,5,&stack0x00000000,&stack0x00000030);
    }
    else {
      (**(code **)(**(long **)(unaff_R14 + 0x10) + 0x20))(unaff_RBP);
      if (*unaff_RBP == 0) {
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x18,0);
        }
        *puVar7 = &UNK_0f459958;
        puVar7[1] = 0;
        puVar7[2] = unaff_R14 + 0x40;
        *unaff_RBX = puVar7;
      }
    }
    func_0x0412d6b0(unaff_R14 + 0x18);
  }
  return unaff_RBP;
}


