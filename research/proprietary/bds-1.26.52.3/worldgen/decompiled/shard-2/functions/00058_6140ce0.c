/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6240ce0 (ELF vaddr 0x6140ce0)
 * Label: Editor::Services::EditorJigsawService::vslot3
 * Body:  [[06240ce0, 06240e81]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot3
 */


undefined8 * wg_Editor__Services__EditorJigsawService__vslot3(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined **ppuStack_38;
  
  plVar6 = (long *)func_0x05f95fd0(*(undefined8 *)(param_2 + 0x18));
  if (plVar6 == (long *)0x0) goto LAB_06240e50;
  puStack_58 = &UNK_0f029728;
  lStack_50 = param_2;
  ppuStack_38 = &puStack_58;
  (**(code **)(*plVar6 + 0x20))(&uStack_78,plVar6,&puStack_58);
  if (ppuStack_38 == &puStack_58) {
    lVar7 = 0x20;
LAB_06240d5a:
    (**(code **)(*ppuStack_38 + lVar7))();
    if (&uStack_78 != (undefined8 *)(param_2 + 0x250)) {
LAB_06240d6c:
      if (*(long *)(param_2 + 600) == 0) {
        lVar7 = 0;
      }
      else {
        plVar6 = (long *)func_0x0412c300();
        plStack_60 = plVar6;
        if (plVar6 != (long *)0x0) {
          lStack_68 = *(long *)(param_2 + 0x250);
          if (lStack_68 != 0) {
            (**(code **)(**(long **)(lStack_68 + 0x28) + 0x10))();
          }
          LOCK();
          plVar1 = plVar6 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
          }
        }
        lVar7 = *(long *)(param_2 + 600);
      }
      uVar2 = (undefined4)uStack_78;
      uVar3 = uStack_78._4_4_;
      uVar4 = (undefined4)uStack_70;
      uVar5 = uStack_70._4_4_;
      uStack_78 = 0;
      uStack_70 = 0;
      *(undefined4 *)(param_2 + 0x250) = uVar2;
      *(undefined4 *)(param_2 + 0x254) = uVar3;
      *(undefined4 *)(param_2 + 600) = uVar4;
      *(undefined4 *)(param_2 + 0x25c) = uVar5;
      if (lVar7 != 0) {
        func_0x0412c2d0();
      }
    }
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto LAB_06240d5a;
    if (&uStack_78 != (undefined8 *)(param_2 + 0x250)) goto LAB_06240d6c;
  }
  if (uStack_70 != 0) {
    plVar6 = (long *)func_0x0412c300();
    plStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_68 = uStack_78;
      if (uStack_78 != 0) {
        (**(code **)(**(long **)(uStack_78 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    if (uStack_70 != 0) {
      func_0x0412c2d0();
    }
  }
LAB_06240e50:
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  FUN_05d84ba0(param_1 + 1);
  return param_1;
}


