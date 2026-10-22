/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca64ba0 (ELF vaddr 0xc964ba0)
 * Label: Dimension::vslot7
 * Body:  [[0be20610, 0be2090f] [0ca64ba0, 0ca64c43]]
 * Ghidra: wg_Dimension__vslot7
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot7(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if (param_1[0x35] == 0) {
    cVar6 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  func_0x0cb30f40(param_1[0x35],param_2);
  uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 0x79) = uVar7;
  lVar9 = (**(code **)(*(long *)param_1[0x14] + 0x440))();
  param_1[0x7a] = lVar9;
  lVar9 = param_1[0x7b];
  if (lVar9 != 0) {
    plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
    plStack_90 = (long *)0x0;
    puStack_78 = &UNK_0f33baa0;
    plStack_70 = (long *)&UNK_0be20980;
    uStack_68 = 0;
    lStack_60 = lVar9;
    (**(code **)(*plVar8 + 0x10))(&uStack_88,plVar8,&puStack_78,0,&plStack_90,0);
    if (puStack_78 != (undefined *)0x0) {
      (**(code **)(puStack_78 + 8))(&puStack_78);
    }
    puVar2 = (undefined8 *)(lVar9 + 0x168);
    if (&uStack_88 != puVar2) {
      if (*(long *)(lVar9 + 0x170) == 0) {
        lVar10 = 0;
      }
      else {
        plVar8 = (long *)func_0x0412c300();
        plStack_70 = plVar8;
        if (plVar8 != (long *)0x0) {
          puStack_78 = (undefined *)*puVar2;
          if (puStack_78 != (undefined *)0x0) {
            (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
          }
          LOCK();
          plVar1 = plVar8 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            func_0x0412c2d0(plVar8);
          }
        }
        lVar10 = *(long *)(lVar9 + 0x170);
      }
      uVar7 = (undefined4)uStack_88;
      uVar3 = uStack_88._4_4_;
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      *(undefined4 *)puVar2 = uVar7;
      *(undefined4 *)(lVar9 + 0x16c) = uVar3;
      *(undefined4 *)(lVar9 + 0x170) = uVar4;
      *(undefined4 *)(lVar9 + 0x174) = uVar5;
      if (lVar10 != 0) {
        func_0x0412c2d0();
      }
    }
    if (uStack_80 != 0) {
      plVar8 = (long *)func_0x0412c300();
      plStack_70 = plVar8;
      if (plVar8 != (long *)0x0) {
        puStack_78 = uStack_88;
        if (uStack_88 != (undefined *)0x0) {
          (**(code **)(**(long **)(uStack_88 + 0x28) + 0x10))();
        }
        LOCK();
        plVar1 = plVar8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      if (uStack_80 != 0) {
        func_0x0412c2d0();
      }
    }
    plVar8 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
    plStack_90 = (long *)0x0;
    puStack_78 = &UNK_0f33baa0;
    plStack_70 = (long *)&UNK_0be20980;
    uStack_68 = 0;
    lStack_60 = lVar9;
    (**(code **)(*plVar8 + 0x10))(&uStack_88,plVar8,&puStack_78,0,&plStack_90,0);
    if (puStack_78 != (undefined *)0x0) {
      (**(code **)(puStack_78 + 8))(&puStack_78);
    }
    puVar2 = (undefined8 *)(lVar9 + 0x178);
    if (&uStack_88 != puVar2) {
      if (*(long *)(lVar9 + 0x180) == 0) {
        lVar10 = 0;
      }
      else {
        plVar8 = (long *)func_0x0412c300();
        plStack_70 = plVar8;
        if (plVar8 != (long *)0x0) {
          puStack_78 = (undefined *)*puVar2;
          if (puStack_78 != (undefined *)0x0) {
            (**(code **)(**(long **)(puStack_78 + 0x28) + 0x10))();
          }
          LOCK();
          plVar1 = plVar8 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            func_0x0412c2d0(plVar8);
          }
        }
        lVar10 = *(long *)(lVar9 + 0x180);
      }
      uVar7 = (undefined4)uStack_88;
      uVar3 = uStack_88._4_4_;
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      *(undefined4 *)puVar2 = uVar7;
      *(undefined4 *)(lVar9 + 0x17c) = uVar3;
      *(undefined4 *)(lVar9 + 0x180) = uVar4;
      *(undefined4 *)(lVar9 + 0x184) = uVar5;
      if (lVar10 != 0) {
        func_0x0412c2d0();
      }
    }
    if (uStack_80 != 0) {
      plVar8 = (long *)func_0x0412c300();
      plStack_70 = plVar8;
      if (plVar8 != (long *)0x0) {
        puStack_78 = uStack_88;
        if (uStack_88 != (undefined *)0x0) {
          (**(code **)(**(long **)(uStack_88 + 0x28) + 0x10))();
        }
        LOCK();
        plVar1 = plVar8 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      if (uStack_80 != 0) {
        func_0x0412c2d0();
      }
    }
    plVar8 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    return;
  }
  return;
}


