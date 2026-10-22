/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6f8eb0 (ELF vaddr 0xe5f8eb0)
 * Label: string:minecraft:biome_music
 * Body:  [[0e6f8eb0, 0e6f8f5b]]
 * Ghidra: FUN_0e6f8eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6f8eb0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 uStack_29;
  byte bStack_28;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined1 uStack_1b;
  undefined2 uStack_1a;
  undefined1 uStack_18;
  undefined5 uStack_17;
  undefined1 uStack_12;
  undefined1 uStack_11;
  byte *pbStack_10;
  
  bStack_28 = 0x2a;
  uStack_27 = _DAT_01e2f670;
  uStack_23 = _UNK_01e2f674;
  uStack_1f = _UNK_01e2f678;
  uStack_1b = (undefined1)_UNK_01e2f67c;
  uStack_1a = (undefined2)((uint)_UNK_01e2f67c >> 8);
  uStack_18 = (undefined1)((uint)_UNK_01e2f67c >> 0x18);
  uStack_17 = _UNK_01e2f680;
  uStack_12 = 0;
  pbStack_10 = &bStack_28;
  lVar7 = func_0x0e334040(param_1,pbStack_10,&UNK_01563a4f,&pbStack_10,&uStack_29);
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((long)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(long **)(lVar7 + 0x40);
  *(undefined4 *)(lVar7 + 0x38) = uVar3;
  *(undefined4 *)(lVar7 + 0x3c) = uVar4;
  *(undefined4 *)(lVar7 + 0x40) = uVar5;
  *(undefined4 *)(lVar7 + 0x44) = uVar6;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
    }
  }
  if ((bStack_28 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_11,CONCAT16(uStack_12,CONCAT51(uStack_17,uStack_18))),
                    CONCAT35((undefined3)uStack_23,CONCAT41(uStack_27,bStack_28)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e2f670  minecraft:biome_music
 * 0x1e2f67d  me_music
 */
