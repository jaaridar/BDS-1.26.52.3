/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286930 (ELF vaddr 0x5186930)
 * Label: OverworldGeneratorMultinoise::vslot0
 * Body:  [[05286800, 05286925] [05286930, 05286938] [0ca70460, 0ca7051c]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot0
 */


void wg_OverworldGeneratorMultinoise__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1 + -0xe;
  lVar2 = param_1[0x187];
  param_1[0x187] = 0;
  if (lVar2 != 0) {
    func_0x049db610(lVar2);
    func_0x0412a280(lVar2,0xd0);
  }
  plVar6 = (long *)param_1[0x186];
  param_1[0x186] = 0;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar6[1] = lVar2;
      func_0x0412a280(lVar2,plVar6[2] - lVar2);
    }
    func_0x0412a280(plVar6,0x28);
  }
  lVar2 = param_1[0x185];
  param_1[0x185] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x184];
  param_1[0x184] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,0x10);
  }
  plVar6 = (long *)param_1[0x183];
  param_1[0x183] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x05286720(param_1 + 0x30);
  *puVar7 = &UNK_0ef9d2a0;
  *param_1 = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x1a);
  *puVar7 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *puVar7 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
      }
    }
    if (param_1[-1] != 0) {
      FUN_0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
      }
    }
    if (param_1[-3] != 0) {
      FUN_0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar7 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (plVar6[2] != 0) {
      LOCK();
      plVar1 = plVar6 + 2;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 != 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x20))();
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  return;
}


