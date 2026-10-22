/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe34ad30 (ELF vaddr 0xe24ad30)
 * Label: string:minecraft:biome_music
 * Body:  [[0e34ad30, 0e34aea8]]
 * Ghidra: FUN_0e34ad30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0e34ad30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  byte bStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_28;
  undefined5 uStack_27;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puVar2 = (undefined8 *)*param_2;
  if (*(char *)((long)param_2 + 0x24) == '\x02') {
    puVar2 = param_2;
  }
  if (puVar2 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != 0x1e9caf7f) {
    if ((code *)param_2[7] == (code *)0x0) {
LAB_0e34ae21:
      uVar1 = param_2[5];
      param_1[2] = &UNK_0488e0b0;
      *(undefined4 *)(param_1 + 4) = 0x48b5725f;
      param_1[3] = 0;
      *(undefined1 *)((long)param_1 + 0x24) = 0;
      *param_1 = 0;
      param_1[5] = uVar1;
      param_1[6] = 0;
      param_1[7] = 0;
      return param_1;
    }
    uVar1 = param_2[5];
    lVar5 = param_2[6];
    if (lVar5 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar5 = param_2[6];
    }
    puVar2 = (undefined8 *)func_0x0488e200(uVar1,lVar5,0x1e9caf7f);
    if (puVar2 == (undefined8 *)0x0) goto LAB_0e34ae21;
  }
  uVar1 = param_2[5];
  bStack_38 = 0x2a;
  uStack_37 = _DAT_01e13870;
  uStack_33 = _UNK_01e13874;
  uStack_2f = _UNK_01e13878;
  uStack_2b = (undefined1)_UNK_01e1387c;
  uStack_2a = 0x656d;
  uStack_28 = 0x5f;
  uStack_27 = 0x636973756d;
  uStack_22 = 0;
  puVar3 = (undefined8 *)func_0x0e3341d0(puVar2,&bStack_38);
  if ((bStack_38 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_21,CONCAT16(uStack_22,CONCAT51(uStack_27,uStack_28))),
                    CONCAT35((undefined3)uStack_33,CONCAT41(uStack_37,bStack_38)) &
                    0xfffffffffffffffe);
  }
  if (puVar3 == puVar2 + 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar3[7];
    lVar5 = puVar3[8];
    if (lVar5 != 0) {
      LOCK();
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      UNLOCK();
      goto LAB_0e34ae5b;
    }
  }
  lVar5 = 0;
LAB_0e34ae5b:
  param_1[2] = &UNK_0e34a600;
  *(undefined4 *)(param_1 + 4) = 0xc38ce079;
  param_1[3] = &UNK_0e34a760;
  *(undefined1 *)((long)param_1 + 0x24) = 2;
  *param_1 = uVar4;
  param_1[1] = lVar5;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = &UNK_0e34a560;
  return param_1;
}



/* ---- referenced strings ----
 * 0x1e13870  minecraft:biome_music
 */
