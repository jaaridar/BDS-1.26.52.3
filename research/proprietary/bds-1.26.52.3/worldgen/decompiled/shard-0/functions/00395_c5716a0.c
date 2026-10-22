/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6716a0 (ELF vaddr 0xc5716a0)
 * Label: caller-of-seed
 * Body:  [[0c6716a0, 0c67193b]]
 * Ghidra: FUN_0c6716a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6716a0(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_68;
  long *plStack_60;
  undefined4 *puStack_58;
  long *plStack_48;
  
  iVar4 = func_0x0bbfe2d0(param_2 + 1);
  if ((iVar4 != -1) &&
     ((iVar5 = (**(code **)(*(long *)param_2[0x3a] + 0x468))(), iVar4 == 1 ||
      ((iVar4 == 5 && (iVar5 == 1)))))) goto LAB_0c671909;
  lVar6 = (**(code **)(*param_2 + 0x270))(param_2);
  cVar3 = func_0x0c020060(0x10,lVar6);
  if (cVar3 == '\0') goto LAB_0c671766;
  if ((*(long **)(lVar6 + 8) == (long *)0x0) || (lVar6 = **(long **)(lVar6 + 8), lVar6 == 0))
  goto LAB_0c671909;
  if (*(long *)(lVar6 + 0xe8) == _DAT_0f6e4be8) {
    if ((*(undefined **)(lVar6 + 0x108) == &DAT_0f6e4be8) && (_DAT_0f6e4c08 == lVar6 + 0xe8)) {
LAB_0c671766:
      plVar7 = (long *)func_0x0412c300(param_2[0x39]);
      plVar2 = (long *)param_2[0x38];
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
      plVar8 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2);
      lVar6 = (**(code **)(*plVar8 + 0x128))(plVar8);
      if (*(char *)(lVar6 + 0x176) == '\0') {
        puStack_68 = (undefined *)CONCAT44(param_3[1] + -1,*param_3);
        plStack_60 = (long *)CONCAT44(plStack_60._4_4_,param_3[2]);
        lVar6 = (**(code **)(*plVar8 + 0x60))(plVar8,&puStack_68);
        if ((*(char *)(lVar6 + 3) == '\0') && (*(char *)(lVar6 + 2) != '\x01')) goto LAB_0c671909;
        (**(code **)(*plVar8 + 0x1f8))(plVar8,param_2,0xf6e9de0,param_3,param_4);
        uVar9 = (**(code **)(*(long *)param_2[0x3a] + 0x628))();
        puStack_68 = &UNK_0f39b2c0;
        plStack_60 = param_2;
        puStack_58 = param_3;
        plStack_48 = (long *)&puStack_68;
        func_0x0c618c50(uVar9,&puStack_68);
        if ((undefined **)plStack_48 == &puStack_68) {
          lVar6 = 0x20;
        }
        else {
          lVar6 = 0x28;
          if (plStack_48 == (long *)0x0) goto LAB_0c671871;
        }
        (**(code **)(*plStack_48 + lVar6))();
LAB_0c671871:
        func_0x0cc41df0(&DAT_0f6ff9e0,&DAT_0f714b20,1);
        return;
      }
      goto LAB_0c671909;
    }
    bVar1 = *(byte *)(lVar6 + 0xf0);
    if ((bVar1 & 1) == 0) {
      uVar10 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar10 = *(ulong *)(lVar6 + 0xf8);
    }
    uVar11 = _DAT_0f6e4bf8;
    if ((DAT_0f6e4bf0 & 1) == 0) {
      uVar11 = (ulong)(DAT_0f6e4bf0 >> 1);
    }
    if (uVar10 == uVar11) {
      if ((bVar1 & 1) == 0) {
        lVar12 = lVar6 + 0xf1;
      }
      else {
        lVar12 = *(long *)(lVar6 + 0x100);
      }
      uVar9 = _DAT_0f6e4c00;
      if ((DAT_0f6e4bf0 & 1) == 0) {
        uVar9 = 0xf6e4bf1;
      }
      iVar4 = func_0x0eee3000(lVar12,uVar9);
      if (iVar4 == 0) {
        *(undefined **)(lVar6 + 0x108) = &DAT_0f6e4be8;
        _DAT_0f6e4c08 = lVar6 + 0xe8;
        goto LAB_0c671766;
      }
    }
  }
  *(undefined8 *)(lVar6 + 0x108) = 0;
LAB_0c671909:
  func_0x0c6ca820(param_1,param_2,param_3,param_4);
  return;
}


