/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624e3a0 (ELF vaddr 0x614e3a0)
 * Label: Editor::Services::EditorJigsawService::vslot11
 * Body:  [[0624e3a0, 0624e3a4]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot11
 */


void wg_Editor__Services__EditorJigsawService__vslot11
               (undefined8 param_1,undefined1 *param_2,ulong *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uStack_40;
  long lStack_38;
  uint uStack_30;
  char cStack_28;
  
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  cStack_28 = '\0';
  if (((param_3[1] != 0) && ((param_3[2] & 0x3ffff) != 0x3ffff)) &&
     (plVar6 = (long *)func_0x0412c300(), plVar6 != (long *)0x0)) {
    uVar3 = *param_3;
    if (uVar3 != 0) {
      uVar1 = (uint)param_3[2];
      uVar9 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
      if (((uVar9 < (ulong)(*(long *)(uVar3 + 0xe0) - *(long *)(uVar3 + 0xd8) >> 3)) &&
          (lVar7 = *(long *)(*(long *)(uVar3 + 0xd8) + uVar9 * 8), lVar7 != 0)) &&
         ((uVar2 = *(uint *)(lVar7 + (ulong)(uVar1 & 0x7ff) * 4),
          (uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff &&
          ((ulong)(uVar2 & 0x3ffff) < *(ulong *)(uVar3 + 0x118))))) {
        lStack_38 = uVar3 + 0x28;
        cStack_28 = '\x01';
        uStack_40 = uVar3;
        uStack_30 = uVar1;
      }
    }
    LOCK();
    plVar4 = plVar6 + 1;
    lVar7 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0412c2d0(plVar6);
    }
  }
  if ((cStack_28 != '\0') && (lVar7 = func_0x0bc62290(&uStack_40,0), lVar7 != 0)) {
    plVar8 = (long *)func_0x0412c300(*(undefined8 *)(lVar7 + 0x1c8));
    plVar4 = *(long **)(lVar7 + 0x1c0);
    LOCK();
    plVar6 = plVar8 + 1;
    lVar7 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0412c2d0(plVar8);
    }
    plVar6 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
    lVar7 = (**(code **)(*plVar6 + 0x138))(plVar6,param_2);
    if (lVar7 != 0) {
      uStack_40 = CONCAT71(uStack_40._1_7_,*param_2) & 0xffffffffffffff0f;
      uStack_40 = CONCAT62(uStack_40._2_6_,CONCAT11(param_2[8],(undefined1)uStack_40)) &
                  0xffffffffffff0fff;
      uStack_40._0_4_ =
           CONCAT22(*(short *)(param_2 + 4) - *(short *)((long)plVar6 + 0x42),(undefined2)uStack_40)
      ;
      lVar7 = func_0x0cb18130(lVar7 + 0x13d0,&uStack_40);
      if (((lVar7 != 0) && (plVar6 = *(long **)(lVar7 + 0x18), plVar6 != (long *)0x0)) &&
         (cVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,0x24), cVar5 != '\0')) {
        func_0x0cf09210(plVar6 + 0x1b,param_4);
        *(byte *)((long)plVar6 + 0x4c) = *(byte *)((long)plVar6 + 0x4c) | 1;
      }
    }
  }
  return;
}


