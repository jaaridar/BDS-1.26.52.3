/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd020cb0 (ELF vaddr 0xcf20cb0)
 * Label: caller-of-seed
 * Body:  [[0d020cb0, 0d020ec3]]
 * Ghidra: FUN_0d020cb0
 */


void FUN_0d020cb0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *plStack_38;
  
  plVar2 = (long *)param_2[0x3a];
  cVar5 = (**(code **)(*plVar2 + 0x9f0))(plVar2);
  if (((cVar5 == '\0') && (iVar6 = func_0x0bbfe2d0(param_2 + 1), iVar6 != -1)) &&
     ((iVar7 = (**(code **)(*(long *)param_2[0x3a] + 0x468))(), iVar6 == 1 ||
      ((iVar6 == 5 && (iVar7 == 1)))))) {
    plVar8 = (long *)FUN_0412c300(param_2[0x39]);
    plVar3 = (long *)param_2[0x38];
    LOCK();
    plVar9 = plVar8 + 1;
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
    }
    plVar9 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
    uVar10 = (**(code **)(*param_2 + 0x270))(param_2);
    uStack_3c = (**(code **)(*plVar9 + 0x98))(plVar9);
    uStack_58 = 0x3f80000000000000;
    uStack_48 = *param_3;
    uStack_40 = *(undefined4 *)(param_3 + 1);
    uStack_50 = uVar10;
    plStack_38 = plVar9;
    uVar10 = (**(code **)(*plVar2 + 0xa68))(plVar2);
    func_0x0c6cab70(&puStack_88,param_1,param_4,uVar10,&uStack_58);
    puVar4 = puStack_88;
    if ((puStack_88 != puStack_80) && (lVar1 = puStack_88[2], lVar1 != 0)) {
      puStack_68 = &UNK_014317a6;
      uStack_60 = 5;
      lVar11 = func_0x0d6c97a0(lVar1 + 8,&puStack_68);
      if ((lVar11 != lVar1 + 0x10) &&
         ((*(int *)(lVar11 + 0x60) == 9 &&
          (0 < (int)((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40)) >> 3))))) {
        uVar10 = func_0x0b3c7300(param_2);
        func_0x0c6cb060(uVar10,param_3,puVar4,0);
      }
    }
    puVar4 = puStack_88;
    if (puStack_88 != (undefined8 *)0x0) {
      while (puVar4 != puStack_80) {
        puVar12 = puStack_80 + -0x13;
        (**(code **)*puVar12)(puVar12);
        puStack_80 = puVar12;
      }
      puStack_80 = puVar4;
      func_0x0412a280(puStack_88,lStack_78 - (long)puStack_88);
    }
  }
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


