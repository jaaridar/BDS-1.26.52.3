/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6240ab0 (ELF vaddr 0x6140ab0)
 * Label: Editor::Services::EditorJigsawService::vslot0
 * Body:  [[062407e0, 06240ab8]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot0
 */


/* WARNING: Possible PIC construction at 0x062409a9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x062409cb: Changing call to branch */

void wg_Editor__Services__EditorJigsawService__vslot0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  long lStack_68;
  long *plStack_60;
  code *pcStack_50;
  
  param_1[-5] = &UNK_0f022570;
  *param_1 = &UNK_0f022638;
  lVar2 = param_1[-2];
  auVar12 = func_0x06337460();
  plVar8 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lStack_68 = 0;
  plStack_60 = (long *)0x0;
  func_0x048b1dc0(&lStack_68);
  if (plVar8 == plStack_60) {
    if (plVar6 == (long *)0x0) {
      lVar5 = func_0x048aead0(plVar8);
      iVar9 = *(int *)(lVar5 + 8);
      if (lStack_68 == 0) goto LAB_0624085b;
LAB_0624083d:
      if (iVar9 != *(int *)(lStack_68 + 8)) goto LAB_0624086e;
    }
    else {
      iVar9 = (int)plVar6[1];
      if (lStack_68 != 0) goto LAB_0624083d;
LAB_0624085b:
      lVar5 = func_0x048aead0(plStack_60);
      if (iVar9 != *(int *)(lVar5 + 8)) goto LAB_0624086e;
    }
  }
  else {
LAB_0624086e:
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)func_0x048aead0(plVar8);
      lVar5 = *(long *)(lVar2 + 8);
    }
    else {
      lVar5 = *(long *)(lVar2 + 8);
    }
    if (lVar5 != 0) {
      uVar1 = *(uint *)(*plVar6 + 4);
      lVar10 = lVar2 + 8;
      do {
        bVar11 = *(uint *)(lVar5 + 0x20) < uVar1;
        if (!bVar11) {
          lVar10 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)bVar11 * 8);
      } while (lVar5 != 0);
      if ((lVar10 != lVar2 + 8) && (*(uint *)(lVar10 + 0x20) <= uVar1)) {
        lVar5 = *(long *)(lVar10 + 0x28);
        if (*(long *)(lVar5 + 0x60) != 0) {
          func_0x049e8590(&lStack_68,lVar5);
          plVar6 = *(long **)(lVar5 + 0x60);
          if (plVar6 == (long *)0x0) {
            uVar7 = FUN_04891200();
            uVar7 = func_0x04882e20(uVar7);
            uVar7 = func_0x04882e20(uVar7);
            if (pcStack_50 != (code *)0x0) {
              (*pcStack_50)(&lStack_68);
            }
            uVar7 = func_0x04882e20(uVar7);
            uVar7 = func_0x04882e20(uVar7);
            func_0x04894d10(&lStack_68);
            func_0x04882e20(uVar7);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          cVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&lStack_68);
          if (pcStack_50 != (code *)0x0) {
            (*pcStack_50)(&lStack_68);
          }
          if (cVar4 == '\0') goto LAB_06240920;
        }
        func_0x06078020(lVar2,lVar10);
      }
    }
  }
LAB_06240920:
  func_0x06336d60(param_1 + 0x4a,param_1[0x4b]);
  if ((*(byte *)(param_1 + 0x47) & 1) != 0) {
    func_0x0412a280(param_1[0x49],param_1[0x47] & 0xfffffffffffffffe);
  }
  if (param_1[0x46] != 0) {
    plVar6 = (long *)func_0x0412c300();
    plStack_60 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_68 = param_1[0x45];
      if (lStack_68 != 0) {
        (**(code **)(**(long **)(lStack_68 + 0x28) + 0x10))();
      }
      LOCK();
      plVar8 = plVar6 + 1;
      lVar2 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0x46] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[0x43];
  if (plVar6 != (long *)0x0) {
SUB_0412c2d0:
    if (plVar6[2] != 0) {
      LOCK();
      plVar8 = plVar6 + 2;
      lVar2 = *plVar8;
      *plVar8 = *plVar8 + -1;
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
  func_0x06336cd0(param_1 + 0x3f,param_1[0x40]);
  func_0x064252c0(param_1 + 0xb);
  func_0x0edf9c90(param_1 + 6);
  func_0x0edf9c90(param_1 + 1);
  param_1[-5] = &UNK_0f534768;
  plVar6 = (long *)param_1[-3];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-4] = 0;
  }
  else {
    *(undefined1 *)param_1[-4] = 0;
    LOCK();
    plVar8 = plVar6 + 1;
    lVar2 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      goto SUB_0412c2d0;
    }
  }
  return;
}


