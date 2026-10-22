/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6f8f90 (ELF vaddr 0xe5f8f90)
 * Label: string:minecraft:biome_music
 * Body:  [[0e6f8f90, 0e6f901e]]
 * Ghidra: FUN_0e6f8f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0e6f8f90(undefined8 *param_1,long param_2)

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
  uStack_2f = _DAT_01e2f670;
  uStack_2b = _UNK_01e2f674;
  uStack_27 = _UNK_01e2f678;
  uStack_23 = (undefined1)_UNK_01e2f67c;
  uStack_22 = (undefined2)((uint)_UNK_01e2f67c >> 8);
  uStack_20 = (undefined1)((uint)_UNK_01e2f67c >> 0x18);
  uStack_1f = _UNK_01e2f680;
  uStack_1a = 0;
  lVar4 = func_0x0e3341d0(param_2,&bStack_30);
  if ((bStack_30 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_19,CONCAT16(uStack_1a,CONCAT51(uStack_1f,uStack_20))),
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
 * 0x1e2f670  minecraft:biome_music
 * 0x1e2f67d  me_music
 */
