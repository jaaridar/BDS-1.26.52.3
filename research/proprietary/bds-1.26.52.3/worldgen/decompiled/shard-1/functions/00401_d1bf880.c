/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2bf880 (ELF vaddr 0xd1bf880)
 * Label: caller-of-seed
 * Body:  [[0d2bf880, 0d2bfb59]]
 * Ghidra: FUN_0d2bf880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2bf880(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_R14;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined1 uStack_38;
  
  puStack_40 = (undefined1 *)&lStack_78;
  lStack_78 = 0;
  lVar8 = *param_2;
  lVar9 = param_2[1];
  uStack_38 = 0;
  lVar10 = lVar9 - lVar8;
  if (lVar10 == 0) {
    lVar10 = 0;
    lVar4 = 0;
    lVar8 = 0;
    puStack_40 = (undefined1 *)&lStack_78;
  }
  else {
    if (0x11a7b9611a7b961 < (ulong)((lVar10 >> 3) * 0x34f72c234f72c235)) {
      uVar6 = func_0x0d2c5090();
      func_0x0d2beb00(&puStack_60);
      func_0x051923d0(&lStack_78);
      uVar6 = func_0x0eee2d70(uVar6);
      func_0x0525e600(&puStack_40);
      uVar6 = func_0x0eee2d70(uVar6);
      if (lVar10 != 0) {
        do {
          func_0x05192430(unaff_R14 + -0xe8 + lVar10);
          lVar10 = lVar10 + -0xe8;
        } while (lVar10 != 0);
      }
      func_0x0525e600(&puStack_40);
      func_0x0eee2d70(uVar6);
      pcVar3 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar3)();
      return puVar7;
    }
    puStack_40 = (undefined1 *)&lStack_78;
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
    if (lVar4 == 0) {
      func_0x0eec74c0(lVar10,0);
    }
    lVar10 = lVar10 + lVar4;
    lVar11 = 0;
    lStack_78 = lVar4;
    do {
      func_0x0525e680(lVar4 + lVar11,lVar8 + lVar11);
      lVar2 = lVar8 + lVar11;
      lVar11 = lVar11 + 0xe8;
    } while (lVar2 + 0xe8 != lVar9);
    lVar4 = lVar4 + lVar11;
    lVar8 = lStack_78;
  }
  puStack_60 = &UNK_0f45e200;
  lStack_78 = 0;
  lVar9 = 0;
  lStack_58 = lVar8;
  lStack_50 = lVar4;
  lStack_48 = lVar10;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0f45e568;
  plVar5[3] = (long)&UNK_0f45e200;
  plVar5[4] = lVar8;
  plVar5[5] = lVar4;
  plVar5[6] = lVar10;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  *param_1 = plVar5 + 3;
  param_1[1] = plVar5;
  LOCK();
  plVar5[1] = plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar5 + 1;
  lVar8 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    func_0x0412c2d0(plVar5);
  }
  lVar10 = lStack_58;
  puStack_60 = &UNK_0f45e200;
  lVar8 = lStack_50;
  if (lStack_58 != 0) {
    while (lVar10 != lVar8) {
      func_0x05192430(lVar8 + -0xe8);
      lVar8 = lVar8 + -0xe8;
    }
    lStack_50 = lVar10;
    func_0x0412a280(lStack_58,lStack_48 - lStack_58);
  }
  lVar8 = lStack_78;
  if (lStack_78 != 0) {
    if (lStack_78 != 0) {
      do {
        lVar9 = lVar9 + -0xe8;
        func_0x05192430(lVar9);
      } while (lVar9 != lVar8);
    }
    func_0x0412a280(lStack_78,-lStack_78);
  }
  return param_1;
}


