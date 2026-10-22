/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe429c70 (ELF vaddr 0xe329c70)
 * Label: string:minecraft:biome_music
 * Body:  [[0e429c70, 0e429e6f]]
 * Ghidra: FUN_0e429c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0e429c70(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uStack_71;
  byte bStack_70;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined5 uStack_5f;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  code *pcStack_58;
  char cStack_4c;
  long lStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  cVar4 = *(char *)((long)param_1 + 0x24);
  if (cVar4 == '\x04') {
    return 0;
  }
  puVar8 = (undefined8 *)*param_1;
  puVar5 = puVar8;
  if (cVar4 == '\x02') {
    puVar5 = param_1;
  }
  if (puVar5 == (undefined8 *)0x0 || *(int *)(param_1 + 4) != -0x42f4fef0) {
    if ((code *)param_1[7] == (code *)0x0) {
      return 0;
    }
    uVar2 = param_1[5];
    lVar7 = param_1[6];
    if (lVar7 == 0) {
      (*(code *)param_1[7])(0,param_1,0);
      lVar7 = param_1[6];
      cVar4 = *(char *)((long)param_1 + 0x24);
      puVar8 = (undefined8 *)*param_1;
    }
    if (cVar4 == '\x02') {
      puVar8 = param_1;
    }
    puVar5 = (undefined8 *)func_0x0488e200(uVar2,lVar7,0xbd0b0110,puVar8);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  if (*(int *)(param_2 + 4) != -0x27304ca3) {
    func_0x0e42a050(&bStack_70,param_2);
    if ((lStack_38 != 0) && ((byte)(cStack_4c - 1U) < 2)) {
      func_0x048b0900(param_2,&bStack_70);
    }
    if (pcStack_58 != (code *)0x0) {
      (*pcStack_58)(&bStack_70);
    }
    if (lStack_38 == 0) {
      return 0;
    }
  }
  cVar4 = *(char *)((long)param_2 + 0x24);
  if (cVar4 == '\x04') {
    return 0;
  }
  puVar8 = (undefined8 *)*param_2;
  puVar6 = puVar8;
  if (cVar4 == '\x02') {
    puVar6 = param_2;
  }
  if (puVar6 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != -0x27304ca3) {
    uVar2 = param_2[5];
    lVar7 = param_2[6];
    if (lVar7 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar7 = param_2[6];
      cVar4 = *(char *)((long)param_2 + 0x24);
      puVar8 = (undefined8 *)*param_2;
    }
    if (cVar4 == '\x02') {
      puVar8 = param_2;
    }
    puVar6 = (undefined8 *)func_0x0488e200(uVar2,lVar7,0xd8cfb35d,puVar8);
  }
  uStack_28 = *puVar6;
  uStack_20 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  bStack_70 = 0x2a;
  uStack_6f = _DAT_01e190c0;
  uStack_6b = _UNK_01e190c4;
  uStack_67 = _UNK_01e190c8;
  uStack_63 = (undefined1)_UNK_01e190cc;
  uStack_62 = 0x656d;
  uStack_60 = 0x5f;
  uStack_5f = 0x636973756d;
  uStack_5a = 0;
  pbStack_30 = &bStack_70;
  lVar7 = func_0x0e334040(puVar5,pbStack_30,&UNK_01563a4f,&pbStack_30,&uStack_71);
  plVar3 = *(long **)(lVar7 + 0x40);
  *(undefined4 *)(lVar7 + 0x38) = (undefined4)uStack_28;
  *(undefined4 *)(lVar7 + 0x3c) = uStack_28._4_4_;
  *(undefined4 *)(lVar7 + 0x40) = (undefined4)uStack_20;
  *(undefined4 *)(lVar7 + 0x44) = uStack_20._4_4_;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  if ((bStack_70 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_59,CONCAT16(uStack_5a,CONCAT51(uStack_5f,uStack_60))),
                    CONCAT35((undefined3)uStack_6b,CONCAT41(uStack_6f,bStack_70)) &
                    0xfffffffffffffffe);
  }
  return 1;
}



/* ---- referenced strings ----
 * 0x1e190c0  minecraft:biome_music
 */
