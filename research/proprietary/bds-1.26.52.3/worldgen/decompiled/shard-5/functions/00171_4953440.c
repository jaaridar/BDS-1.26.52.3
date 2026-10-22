/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53440 (ELF vaddr 0x4953440)
 * Label: string:minecraft:climate
 * Body:  [[04a53440, 04a534df]]
 * Ghidra: FUN_04a53440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53440(undefined8 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  byte bStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined5 uStack_3d;
  undefined *apuStack_38 [4];
  undefined **ppuStack_18;
  
  bStack_50 = 0x22;
  uStack_4f = _DAT_01e365c0;
  uStack_4b = _UNK_01e365c4;
  uStack_47 = _UNK_01e365c8;
  uStack_43 = _UNK_01e365cc;
  uStack_3f = DAT_01e365d0;
  uStack_3e = 0;
  lVar3 = func_0x04a78aa0(param_1,&bStack_50);
  apuStack_38[0] = &UNK_0ef53698;
  ppuStack_18 = apuStack_38;
  func_0x04a78db0(apuStack_38,lVar3 + 0x40);
  if (ppuStack_18 == apuStack_38) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    uVar2 = uStack_43;
    if (ppuStack_18 == (undefined **)0x0) goto joined_r0x04a534dc;
  }
  (**(code **)(*ppuStack_18 + lVar3))();
  uVar2 = uStack_43;
joined_r0x04a534dc:
  if ((bStack_50 & 1) != 0) {
    uStack_43._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    uVar1 = CONCAT11(uStack_3f,uStack_43._3_1_);
    uStack_43 = uVar2;
    FUN_0412a280(CONCAT53(uStack_3d,CONCAT12(uStack_3e,uVar1)),
                 CONCAT35((undefined3)uStack_4b,CONCAT41(uStack_4f,bStack_50)) & 0xfffffffffffffffe)
    ;
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e365c0  minecraft:climate
 */
