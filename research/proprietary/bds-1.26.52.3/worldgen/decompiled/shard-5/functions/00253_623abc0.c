/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633abc0 (ELF vaddr 0x623abc0)
 * Label: callee-of:0x6146460
 * Body:  [[0633abc0, 0633ae19] [0633ae46, 0633ae56]]
 * Ghidra: FUN_0633abc0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0633abc0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 *apuStack_a8 [3];
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_70;
  long lStack_68;
  long lStack_60;
  code *pcStack_50;
  char cStack_44;
  long lStack_30;
  
  auVar13 = func_0x06337460();
  lVar8 = auVar13._8_8_;
  plVar7 = auVar13._0_8_;
  lStack_68 = 0;
  lStack_60 = 0;
  func_0x048b1dc0(&lStack_68);
  if (lVar8 == lStack_60) {
    if (plVar7 == (long *)0x0) {
      lVar6 = func_0x048aead0(lVar8);
      iVar2 = *(int *)(lVar6 + 8);
    }
    else {
      iVar2 = (int)plVar7[1];
    }
    if (lStack_68 == 0) {
      lVar6 = func_0x048aead0(lStack_60);
      iVar1 = *(int *)(lVar6 + 8);
    }
    else {
      iVar1 = *(int *)(lStack_68 + 8);
    }
    if (iVar2 == iVar1) {
      return (undefined1 *)0x0;
    }
  }
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)func_0x048aead0(lVar8);
    lVar8 = *(long *)(param_1 + 8);
  }
  else {
    lVar8 = *(long *)(param_1 + 8);
  }
  if (lVar8 == 0) {
    return (undefined1 *)0x0;
  }
  uVar3 = *(uint *)(*plVar7 + 4);
  lVar6 = param_1 + 8;
  do {
    bVar12 = *(uint *)(lVar8 + 0x20) < uVar3;
    if (!bVar12) {
      lVar6 = lVar8;
    }
    lVar8 = *(long *)(lVar8 + (ulong)bVar12 * 8);
  } while (lVar8 != 0);
  if (lVar6 == param_1 + 8) {
    return (undefined1 *)0x0;
  }
  if (uVar3 < *(uint *)(lVar6 + 0x20)) {
    return (undefined1 *)0x0;
  }
  lVar8 = *(long *)(lVar6 + 0x28);
  if (*(long *)(lVar8 + 0x60) != 0) {
    func_0x049e8590(&lStack_68,lVar8);
    plVar7 = *(long **)(lVar8 + 0x60);
    if (plVar7 == (long *)0x0) {
      uVar10 = func_0x04891200();
      uVar10 = func_0x04882e20(uVar10);
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(apuStack_a8);
      }
      uVar10 = func_0x0eee2d70(uVar10);
      func_0x04882e20(uVar10);
      pcVar4 = (code *)swi(3);
      puVar11 = (undefined1 *)(*pcVar4)();
      return puVar11;
    }
    cVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,&lStack_68);
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(&lStack_68);
    }
    if (cVar5 == '\0') {
      return (undefined1 *)0x0;
    }
  }
  func_0x06075860(apuStack_a8,*(undefined8 *)(lVar6 + 0x28));
  if (iStack_88 == 0x377ed510) {
LAB_0633ad4d:
    if (cStack_84 != '\x04') {
      ppuVar9 = (undefined1 **)apuStack_a8[0];
      if (cStack_84 == '\x02') {
        ppuVar9 = apuStack_a8;
      }
      if (ppuVar9 != (undefined1 **)0x0 && iStack_88 == 0x377ed510) goto LAB_0633ade1;
      if (pcStack_70 != (code *)0x0) {
        if (lStack_78 == 0) {
          (*pcStack_70)(0,apuStack_a8,0);
        }
        if (cStack_84 == '\x02') {
          apuStack_a8[0] = (undefined1 *)apuStack_a8;
        }
        ppuVar9 = (undefined1 **)func_0x0488e200(uStack_80,lStack_78,0x377ed510,apuStack_a8[0]);
        goto LAB_0633ade1;
      }
    }
  }
  else {
    func_0x0633ae60(&lStack_68,apuStack_a8);
    if ((lStack_30 != 0) && ((byte)(cStack_44 - 1U) < 2)) {
      func_0x048b0900(apuStack_a8,&lStack_68);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(&lStack_68);
    }
    if (lStack_30 != 0) goto LAB_0633ad4d;
  }
  ppuVar9 = (undefined1 **)0x0;
LAB_0633ade1:
  if (pcStack_90 != (code *)0x0) {
    (*pcStack_90)(apuStack_a8);
    return (undefined1 *)ppuVar9;
  }
  return (undefined1 *)ppuVar9;
}


