/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5339dd0 (ELF vaddr 0x5239dd0)
 * Label: caller-of-seed
 * Body:  [[05339dd0, 0533a07c]]
 * Ghidra: FUN_05339dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05339dd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 auStack_c8 [2];
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_78;
  undefined8 uStack_68;
  byte bStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 uStack_50;
  byte bStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined1 uStack_37;
  undefined6 uStack_36;
  
  auStack_c8[0] = *param_2;
  lStack_b8 = 0;
  uStack_b0 = 0;
  if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
    lStack_b8 = 0;
  }
  else {
    (**(code **)param_2[2])(param_2 + 2,&lStack_b8);
    lStack_b8 = param_2[2];
  }
  param_2[2] = 0;
  plStack_78 = (long *)param_2[10];
  param_2[10] = 0;
  uStack_68 = 0x80000000000001;
  bStack_60 = 0xc;
  uStack_5f = 0x6874654e;
  uStack_5b = 0x7265;
  uStack_59 = 0;
  bStack_48 = 0x20;
  uStack_47 = _DAT_014c988a;
  uStack_43 = _UNK_014c988e;
  uStack_3f = _UNK_014c9892;
  uStack_3b = _UNK_014c9896;
  uStack_37 = 0;
  func_0x0ca5c8c0(param_1,auStack_c8);
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_36,CONCAT11(uStack_37,uStack_3b._3_1_)),
                    CONCAT35((undefined3)uStack_43,CONCAT41(uStack_47,bStack_48)) &
                    0xfffffffffffffffe);
  }
  plVar2 = plStack_78;
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,
                    CONCAT17(uStack_59,CONCAT25(uStack_5b,CONCAT41(uStack_5f,bStack_60))) &
                    0xfffffffffffffffe);
    plVar2 = plStack_78;
  }
  plStack_78 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plStack_78 = (long *)0x0;
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  *param_1 = &UNK_0efa3058;
  param_1[1] = &UNK_0efa31f8;
  param_1[2] = &UNK_0efa3308;
  param_1[7] = &UNK_0efa3338;
  *(undefined2 *)((long)param_1 + 0xac) = 0x20;
  *(undefined1 *)((long)param_1 + 0xae) = 0xf;
  uVar1 = *(uint *)(param_1 + 0x19);
  if ((ulong)uVar1 != 0xffffffff) {
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 7;
      goto LAB_05339fae;
    }
    (**(code **)(&UNK_0efa39e0 + (ulong)uVar1 * 8))(auStack_c8,param_1 + 0x17);
  }
  param_1[0x17] = &UNK_0f45e690;
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined4 *)(param_1 + 0x19) = 0;
LAB_05339fae:
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x20] = _DAT_014ea080;
  *(undefined4 *)(param_1 + 0x22) = 0;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[8] = 0;
  puVar4 = &UNK_0efa3718;
  *puVar3 = &UNK_0efa3718;
  plVar2 = (long *)param_1[0x24];
  param_1[0x24] = puVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    puVar3 = (undefined8 *)param_1[0x24];
    puVar4 = (undefined *)*puVar3;
  }
  (**(code **)(puVar4 + 0x10))(puVar3);
  return;
}



/* ---- referenced strings ----
 * 0x14c988a  minecraft:nether
 */
