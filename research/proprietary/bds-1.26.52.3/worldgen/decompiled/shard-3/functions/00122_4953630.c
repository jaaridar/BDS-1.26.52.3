/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53630 (ELF vaddr 0x4953630)
 * Label: string:minecraft:humidity
 * Body:  [[04a53630, 04a536d0]]
 * Ghidra: FUN_04a53630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53630(undefined8 param_1)

{
  undefined3 uVar1;
  undefined4 uVar2;
  long lVar3;
  byte bStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined *apuStack_38 [4];
  undefined **ppuStack_18;
  
  bStack_50 = 0x24;
  uStack_4f = _DAT_01e34990;
  uStack_4b = _UNK_01e34994;
  uStack_47 = _UNK_01e34998;
  uStack_43 = _UNK_01e3499c;
  uStack_3f = _DAT_01e349a0;
  uStack_3d = 0;
  lVar3 = func_0x04a78aa0(param_1,&bStack_50);
  apuStack_38[0] = &UNK_0ef53848;
  ppuStack_18 = apuStack_38;
  func_0x04a78db0(apuStack_38,lVar3 + 0x40);
  if (ppuStack_18 == apuStack_38) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    uVar2 = uStack_43;
    if (ppuStack_18 == (undefined **)0x0) goto joined_r0x04a536cd;
  }
  (**(code **)(*ppuStack_18 + lVar3))();
  uVar2 = uStack_43;
joined_r0x04a536cd:
  if ((bStack_50 & 1) != 0) {
    uStack_43._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    uVar1 = CONCAT21(uStack_3f,uStack_43._3_1_);
    uStack_43 = uVar2;
    func_0x0412a280(CONCAT44(uStack_3c,CONCAT13(uStack_3d,uVar1)),
                    CONCAT35((undefined3)uStack_4b,CONCAT41(uStack_4f,bStack_50)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e34990  minecraft:humidity
 */
