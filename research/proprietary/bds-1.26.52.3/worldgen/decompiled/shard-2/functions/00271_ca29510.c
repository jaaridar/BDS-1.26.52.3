/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb29510 (ELF vaddr 0xca29510)
 * Label: callee-of:0xc961580
 * Body:  [[0cb29510, 0cb2957e] [0cb29580, 0cb296b2]]
 * Ghidra: FUN_0cb29510
 */


void FUN_0cb29510(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined **ppuStack_58;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x280))(param_2);
  uStack_80 = *puVar4;
  puStack_78 = &UNK_0f3f1a68;
  uStack_70 = param_3;
  puStack_68 = &uStack_80;
  ppuStack_58 = &puStack_78;
  lVar9 = *(long *)(param_1 + 0x18);
  lVar7 = 0x20;
  if (*(long *)(param_1 + 0x20) != lVar9) {
    uVar8 = 0;
    do {
      if (ppuStack_58 == (undefined **)0x0) {
        uVar6 = func_0x04891200();
        lVar9 = 0x20;
        if ((ppuStack_58 == &puStack_78) || (lVar9 = 0x28, ppuStack_58 != (undefined **)0x0)) {
          (**(code **)(*ppuStack_58 + lVar9))();
        }
        func_0x0eee2d70(uVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = lVar9 + uVar8 * 0x70;
      cVar3 = (**(code **)(*ppuStack_58 + 0x30))(ppuStack_58,lVar9);
      if (cVar3 == '\x02') {
        plVar5 = *(long **)(lVar9 + 0x68);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
        }
        plVar5 = (long *)(**(code **)(*param_2 + 0x558))(param_2);
        (**(code **)(*plVar5 + 0x68))(auStack_40,plVar5,lVar9 + 0x50,0);
        plVar5 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_38 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            func_0x0412c2d0(plVar5);
          }
        }
        func_0x0cb287f0((long *)(param_1 + 0x18),uVar8 * 0x70 + *(long *)(param_1 + 0x18));
      }
      else {
        uVar8 = uVar8 + 1;
      }
      lVar9 = *(long *)(param_1 + 0x18);
    } while (uVar8 < (ulong)((*(long *)(param_1 + 0x20) - lVar9 >> 4) * 0x6db6db6db6db6db7));
    if (ppuStack_58 == &puStack_78) {
      lVar7 = 0x20;
    }
    else {
      lVar7 = 0x28;
      if (ppuStack_58 == (undefined **)0x0) {
        return;
      }
    }
  }
  (**(code **)(*ppuStack_58 + lVar7))();
  return;
}


