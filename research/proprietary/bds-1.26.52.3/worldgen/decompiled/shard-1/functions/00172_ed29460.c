/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee29460 (ELF vaddr 0xed29460)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0ee29460, 0ee296d0] [0ee29703, 0ee29744]]
 * Ghidra: FUN_0ee29460
 */


ulong FUN_0ee29460(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *in_FS_OFFSET;
  long lStack_b8;
  byte bStack_b0;
  long lStack_a8;
  uint uStack_9c;
  undefined *apuStack_98 [4];
  undefined **ppuStack_78;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  
  lVar7 = param_1 + 0x58;
  bStack_b0 = 1;
  lStack_b8 = lVar7;
  func_0x0412d680(lVar7);
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_0ee2963c;
  uVar2 = *(uint *)(param_1 + 0x80);
  LOCK();
  *(undefined4 *)(param_1 + 0x80) = 2;
  UNLOCK();
  apuStack_68[0] = &UNK_0f535168;
  ppuStack_48 = apuStack_68;
  func_0x0ee2bba0(param_1,&lStack_b8,apuStack_68);
  uStack_9c = uVar2;
  if (ppuStack_48 == apuStack_68) {
    lVar7 = 0x20;
LAB_0ee294fd:
    (**(code **)(*ppuStack_48 + lVar7))();
    lVar7 = *(long *)(param_1 + 0x88);
  }
  else {
    lVar7 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0ee294fd;
    lVar7 = *(long *)(param_1 + 0x88);
  }
  if (lVar7 != 0) {
    lVar3 = *in_FS_OFFSET;
    lStack_a8 = param_1;
    do {
      if (*(long *)(lVar3 + -0xa50) == lVar7) {
        lVar4 = *(long *)(lVar7 + 0x20);
        plVar5 = *(long **)(lVar7 + 0x28);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar5 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
        param_1 = lStack_a8;
        if (lVar4 == 0) {
          lVar7 = *(long *)(lStack_a8 + 0x88);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0xf5462e0)) {
            *(undefined8 *)(lVar7 + 0x10) = 0xf5462e0;
            plVar5 = *(long **)(lStack_a8 + 0x90);
            *(undefined8 *)(lStack_a8 + 0x88) = 0;
            *(undefined8 *)(lStack_a8 + 0x90) = 0;
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar7 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                func_0x0412c2d0(plVar5);
              }
            }
          }
          break;
        }
      }
      apuStack_98[0] = &UNK_0f5351e8;
      ppuStack_78 = apuStack_98;
      func_0x0ee2bba0(param_1,&lStack_b8,apuStack_98);
      if (ppuStack_78 == apuStack_98) {
        lVar7 = 0x20;
LAB_0ee295d5:
        (**(code **)(*ppuStack_78 + lVar7))();
      }
      else {
        lVar7 = 0x28;
        if (ppuStack_78 != (undefined **)0x0) goto LAB_0ee295d5;
      }
      lVar7 = lStack_b8;
      if (bStack_b0 == 0) {
        func_0x0412e520(1,&UNK_014757c7);
LAB_0ee296c2:
        ppuVar9 = (undefined **)func_0x04891200();
        lVar7 = 0x20;
        ppuVar10 = ppuStack_48;
        if (ppuStack_48 == apuStack_98) goto LAB_0ee29726;
        lVar7 = 0x28;
        if (ppuStack_48 != (undefined **)0x0) goto LAB_0ee29726;
        while (bStack_b0 != 1) {
          ppuVar10 = ppuVar9;
          lVar7 = func_0x0eee2d70();
LAB_0ee29726:
          (**(code **)(*ppuVar10 + lVar7))();
        }
        func_0x0412d6b0(lStack_b8);
        func_0x0eee2d70(ppuVar9);
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      func_0x0412d6b0(lStack_b8);
      bStack_b0 = 0;
      if (*(long **)(param_2 + 0x20) == (long *)0x0) goto LAB_0ee296c2;
      (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
      func_0x0412d680(lVar7);
      bStack_b0 = 1;
      lVar7 = *(long *)(param_1 + 0x88);
    } while (lVar7 != 0);
  }
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = uStack_9c;
  UNLOCK();
  lVar7 = lStack_b8;
  if ((bStack_b0 & 1) == 0) {
    return (ulong)uVar2;
  }
LAB_0ee2963c:
  uVar8 = func_0x0412d6b0(lVar7);
  return uVar8;
}


