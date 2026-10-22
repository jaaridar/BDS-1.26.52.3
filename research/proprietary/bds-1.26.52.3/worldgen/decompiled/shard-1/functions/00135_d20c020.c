/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd20c020
 * Label: string:ZN25FeatureTerrainAdjustments17setBeardAndShaverERK11Boundin
 * Body:  [[0d20c020, 0d20c0b4] [0d20c193, 0d20c507]]
 * Ghidra: FUN_0d20c020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d20c020(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_RBX;
  undefined8 in_XMM0_Qb;
  
  plVar3 = *(long **)(unaff_RBX + 0x310);
  *(undefined8 *)(unaff_RBX + 0x308) = param_1;
  *(undefined8 *)(unaff_RBX + 0x310) = in_XMM0_Qb;
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(unaff_RBX + 0x318) = 0;
    uVar4 = *(ulong *)(unaff_RBX + 0x2e0);
  }
  else {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    plVar3 = *(long **)(unaff_RBX + 0x310);
    *(undefined8 *)(unaff_RBX + 0x318) = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    uVar4 = *(ulong *)(unaff_RBX + 0x2e0);
  }
  if ((uVar4 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar4 & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x2e0) = 0;
  if ((*(ulong *)(unaff_RBX + 0x2d8) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x2d8) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x2d8) = 0;
  if ((*(byte *)(unaff_RBX + 0x2b0) & 1) == 0) {
    bVar2 = *(byte *)(unaff_RBX + 0x278);
  }
  else {
    func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x2c0),
                    *(ulong *)(unaff_RBX + 0x2b0) & 0xfffffffffffffffe);
    bVar2 = *(byte *)(unaff_RBX + 0x278);
  }
  if ((bVar2 & 1) == 0) {
    plVar3 = *(long **)(unaff_RBX + 0x270);
  }
  else {
    func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x288),
                    *(ulong *)(unaff_RBX + 0x278) & 0xfffffffffffffffe);
    plVar3 = *(long **)(unaff_RBX + 0x270);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  if (*(long *)(unaff_RBX + 0x150) != 0) {
    func_0x0412a280(*(long *)(unaff_RBX + 0x150),*(long *)(unaff_RBX + 0x160) << 3);
  }
  if (*(long *)(unaff_RBX + 0x138) != 0) {
    func_0x0412a280(*(long *)(unaff_RBX + 0x138),*(long *)(unaff_RBX + 0x148) << 3);
  }
  *(undefined **)(unaff_RBX + 0x98) = &UNK_0f45a0c0;
  *(undefined **)(unaff_RBX + 0xe0) = &UNK_0f4e68b8;
  func_0x0edf9f50(unaff_RBX + 0xe0);
  *(undefined **)(unaff_RBX + 0xe0) = &UNK_0f4e6848;
  plVar3 = (long *)(unaff_RBX + 0xe8);
  plVar5 = *(long **)(unaff_RBX + 0xe8);
  while (plVar5 != plVar3) {
    lVar1 = *plVar5;
    plVar6 = (long *)plVar5[1];
    *plVar6 = lVar1;
    *(long **)(lVar1 + 8) = plVar6;
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    plVar5 = (long *)*plVar3;
  }
  if (plVar5 != plVar3) {
    puVar7 = *(undefined8 **)(unaff_RBX + 0xf0);
    *puVar7 = plVar5;
    plVar5[1] = (long)puVar7;
    *(long **)(unaff_RBX + 0xe8) = plVar3;
    *(long **)(unaff_RBX + 0xf0) = plVar3;
  }
  func_0x0d225f00(unaff_RBX + 200,*(undefined8 *)(unaff_RBX + 0xd0));
  if (*(long *)(unaff_RBX + 0xb0) != 0) {
    func_0x06cf3710(unaff_RBX + 0xb0);
    func_0x0412a280(*(long *)(unaff_RBX + 0xb0),
                    *(long *)(unaff_RBX + 0xc0) - *(long *)(unaff_RBX + 0xb0));
  }
  *(undefined **)(unaff_RBX + 0x98) = &UNK_0f534768;
  plVar3 = *(long **)(unaff_RBX + 0xa8);
  if (plVar3 == (long *)0x0) {
    **(undefined1 **)(unaff_RBX + 0xa0) = 0;
    uVar4 = *(ulong *)(unaff_RBX + 0x80);
  }
  else {
    **(undefined1 **)(unaff_RBX + 0xa0) = 0;
    LOCK();
    plVar5 = plVar3 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
    uVar4 = *(ulong *)(unaff_RBX + 0x80);
  }
  if ((uVar4 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar4 & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x80) = 0;
  if ((*(ulong *)(unaff_RBX + 0x78) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x78) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x78) = 0;
  if ((*(ulong *)(unaff_RBX + 0x60) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x60) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x60) = 0;
  if ((*(ulong *)(unaff_RBX + 0x58) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x58) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x58) = 0;
  if ((*(ulong *)(unaff_RBX + 0x40) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x40) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x40) = 0;
  if ((*(ulong *)(unaff_RBX + 0x38) & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(unaff_RBX + 0x38) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(unaff_RBX + 0x38) = 0;
  return;
}


