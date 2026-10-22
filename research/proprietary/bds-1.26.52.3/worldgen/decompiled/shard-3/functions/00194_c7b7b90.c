/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8b7b90 (ELF vaddr 0xc7b7b90)
 * Label: string:worldGenerator
 * Body:  [[0c8b7b90, 0c8b7db7]]
 * Ghidra: FUN_0c8b7b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8b7b90(long param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte bStack_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  undefined4 uStack_48;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  
  uVar8 = *(undefined4 *)(param_1 + 0x4e8);
  cVar6 = *(char *)(param_1 + 0x2f0);
  cVar5 = func_0x0c965b20(param_2,uVar8);
  if (cVar5 == '\0') {
    uStack_68 = uStack_68 & 0xffffffffffff0000;
    uStack_60 = CONCAT31((int3)_DAT_014adbb4,0x20);
    uStack_5c._1_3_ = (undefined3)_UNK_014adbb8;
    uStack_5c = CONCAT31(uStack_5c._1_3_,(char)((uint)_DAT_014adbb4 >> 0x18));
    uStack_58._1_3_ = (undefined3)_UNK_014adbbc;
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)((uint)_UNK_014adbb8 >> 0x18));
    uStack_54._1_3_ = (undefined3)_UNK_014adbc0;
    uStack_54 = CONCAT31(uStack_54._1_3_,(char)((uint)_UNK_014adbbc >> 0x18));
    bStack_50 = (byte)((uint)_UNK_014adbc0 >> 0x18);
    uStack_4f = 0;
    uStack_48 = 0;
    *(undefined2 *)(param_1 + 0x4c8) = 0;
    if ((ulong *)(param_1 + 0x4c8) == &uStack_68) {
LAB_0c8b7c1d:
      *(undefined4 *)(param_1 + 0x4e8) = 0;
    }
    else {
      puVar1 = (uint *)(param_1 + 0x4d0);
      if ((*(byte *)puVar1 & 1) == 0) {
        *(ulong *)(param_1 + 0x4e0) = CONCAT62(uStack_4e,(ushort)bStack_50);
        *puVar1 = uStack_60;
        *(undefined4 *)(param_1 + 0x4d4) = uStack_5c;
        *(undefined4 *)(param_1 + 0x4d8) = uStack_58;
        *(undefined4 *)(param_1 + 0x4dc) = uStack_54;
        goto LAB_0c8b7c1d;
      }
      FUN_04885120(puVar1,(long)&uStack_60 + 1,0x10);
      *(undefined4 *)(param_1 + 0x4e8) = uStack_48;
      if ((uStack_60 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_4e,CONCAT11(uStack_4f,bStack_50)),
                        CONCAT44(uStack_5c,uStack_60) & 0xfffffffffffffffe);
      }
    }
    cVar6 = '\0';
    uVar8 = 0;
  }
  func_0x0c964600(auStack_38,param_2,uVar8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  if (CONCAT44(uStack_2c,auStack_38._8_4_) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)func_0x0412c300();
    uStack_60 = (uint)plVar7;
    uStack_5c = (undefined4)((ulong)plVar7 >> 0x20);
    uVar9 = auStack_38._0_8_;
    uVar4 = auStack_38._0_8_;
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
      uVar4 = uStack_68;
    }
    uStack_68 = uVar4;
    if (CONCAT44(uStack_2c,auStack_38._8_4_) != 0) {
      func_0x0412c2d0();
    }
    if (uVar9 != 0) goto joined_r0x0c8b7cc9;
  }
  cVar5 = func_0x0eeddcf0(&UNK_012e82b9,&UNK_014ca08b,0x1e,&UNK_0131b8cc,&UNK_0131b921);
  if (cVar5 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar9 = 0;
joined_r0x0c8b7cc9:
  if (cVar6 == '\0') {
    plVar3 = *(long **)(uVar9 + 0x1b0);
    if ((plVar3 == (long *)0x0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_011e2e8f,&UNK_01300cb1,0x25,&UNK_0131b8cc,&UNK_0131b921),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_38 = (**(code **)(*plVar3 + 0x198))(plVar3);
    func_0x0d20ac00(param_1,auStack_38);
  }
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14adbb4  minecraft:plains
 */
