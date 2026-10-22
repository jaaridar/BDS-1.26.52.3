/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe349280 (ELF vaddr 0xe249280)
 * Label: string:minecraft:biome_music
 * Body:  [[0e349280, 0e349311]]
 * Ghidra: FUN_0e349280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0e349280(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte bStack_30;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined1 uStack_23;
  undefined2 uStack_22;
  undefined1 uStack_20;
  undefined5 uStack_1f;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  bStack_30 = 0x2a;
  uStack_2f = _DAT_01e13870;
  uStack_2b = _UNK_01e13874;
  uStack_27 = _UNK_01e13878;
  uStack_23 = (undefined1)_UNK_01e1387c;
  uStack_22 = 0x656d;
  uStack_20 = 0x5f;
  uStack_1f = 0x636973756d;
  uStack_1a = 0;
  lVar4 = func_0x0e3341d0(param_2,&bStack_30);
  if ((bStack_30 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT17(uStack_19,CONCAT16(uStack_1a,CONCAT51(uStack_1f,uStack_20))),
                       CONCAT35((undefined3)uStack_2b,CONCAT41(uStack_2f,bStack_30)) &
                       0xfffffffffffffffe);
  }
  if (lVar4 == param_2 + 8) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = *(long *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    *param_1 = *(undefined8 *)(lVar4 + 0x38);
    param_1[1] = uVar3;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x1e13870  minecraft:biome_music
 */
