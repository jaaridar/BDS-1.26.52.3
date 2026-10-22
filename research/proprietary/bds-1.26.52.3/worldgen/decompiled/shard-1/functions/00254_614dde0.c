/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624dde0 (ELF vaddr 0x614dde0)
 * Label: Editor::Services::EditorJigsawService::vslot19
 * Body:  [[0624dde0, 0624dffa]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot19
 */


undefined8
wg_Editor__Services__EditorJigsawService__vslot19
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4)

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
  undefined8 uStack_48;
  long lStack_40;
  uint uStack_38;
  char cStack_30;
  
  uStack_48 = uStack_48 & 0xffffffffffffff00;
  cStack_30 = '\0';
  if (((param_4[1] != 0) && ((param_4[2] & 0x3ffff) != 0x3ffff)) &&
     (plVar6 = (long *)func_0x0412c300(), plVar6 != (long *)0x0)) {
    uVar3 = *param_4;
    if (uVar3 != 0) {
      uVar1 = (uint)param_4[2];
      uVar9 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
      if (((uVar9 < (ulong)(*(long *)(uVar3 + 0xe0) - *(long *)(uVar3 + 0xd8) >> 3)) &&
          (lVar7 = *(long *)(*(long *)(uVar3 + 0xd8) + uVar9 * 8), lVar7 != 0)) &&
         ((uVar2 = *(uint *)(lVar7 + (ulong)(uVar1 & 0x7ff) * 4),
          (uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff &&
          ((ulong)(uVar2 & 0x3ffff) < *(ulong *)(uVar3 + 0x118))))) {
        lStack_40 = uVar3 + 0x28;
        cStack_30 = '\x01';
        uStack_48 = uVar3;
        uStack_38 = uVar1;
      }
    }
    LOCK();
    plVar4 = plVar6 + 1;
    lVar7 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  if (cStack_30 == '\0') {
    plVar6 = (long *)0xf56add8;
  }
  else {
    lVar7 = func_0x0bc62290(&uStack_48,0);
    plVar6 = (long *)0xf56add8;
    if (lVar7 != 0) {
      plVar8 = (long *)func_0x0412c300(*(undefined8 *)(lVar7 + 0x1c8),0xf56add8);
      plVar4 = *(long **)(lVar7 + 0x1c0);
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
      }
      plVar6 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
      lVar7 = (**(code **)(*plVar6 + 0x138))(plVar6,param_3);
      if (lVar7 != 0) {
        uStack_48 = CONCAT71(uStack_48._1_7_,*param_3) & 0xffffffffffffff0f;
        uStack_48 = CONCAT62(uStack_48._2_6_,CONCAT11(param_3[8],(undefined1)uStack_48)) &
                    0xffffffffffff0fff;
        uStack_48._0_4_ =
             CONCAT22(*(short *)(param_3 + 4) - *(short *)((long)plVar6 + 0x42),
                      (undefined2)uStack_48);
        lVar7 = func_0x0cb18130(lVar7 + 0x13d0,&uStack_48);
        if (lVar7 != 0) {
          plVar4 = *(long **)(lVar7 + 0x18);
          plVar6 = (long *)0xf56add8;
          if (plVar4 != (long *)0x0) {
            cVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,0x24);
            plVar6 = (long *)0xf56add8;
            if (cVar5 != '\0') {
              plVar6 = plVar4 + 0x1b;
            }
          }
          goto LAB_0624dfe2;
        }
      }
      plVar6 = (long *)0xf56add8;
    }
  }
LAB_0624dfe2:
  func_0x0624e010(param_1,plVar6);
  return param_1;
}


