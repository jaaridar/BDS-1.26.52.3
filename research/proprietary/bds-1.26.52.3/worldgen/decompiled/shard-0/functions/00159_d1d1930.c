/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d1930 (ELF vaddr 0xd1d1930)
 * Label: string:JigsawReplacement
 * Body:  [[0d2d1930, 0d2d1ba6]]
 * Ghidra: FUN_0d2d1930
 */


bool FUN_0d2d1930(long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  puStack_38 = &UNK_0149f522;
  uStack_30 = 10;
  lVar6 = param_1 + 8;
  lVar4 = func_0x0d6c97a0(lVar6,&puStack_38);
  param_1 = param_1 + 0x10;
  if (lVar4 != param_1) {
    if ((ulong)*(uint *)(lVar4 + 0x60) == 0xffffffff) goto LAB_0d2d1ba1;
    puStack_40 = &uStack_21;
    plVar5 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar4 + 0x60) * 8))
                               (&puStack_40,lVar4 + 0x38);
    if ((plVar5 != (long *)0x0) && (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), cVar2 == '\x01'))
    {
      puStack_38 = &UNK_0149f522;
      uStack_30 = 10;
      lVar4 = func_0x0d6c97a0(lVar6,&puStack_38);
      if ((lVar4 != param_1) &&
         ((*(int *)(lVar4 + 0x60) == 1 && (*(char *)(lVar4 + 0x40) == '\x03')))) {
        puStack_38 = &DAT_011cb7e1;
        uStack_30 = 0x10;
        lVar4 = func_0x0d6c97a0(lVar6,&puStack_38);
        if (lVar4 != param_1) {
          if ((ulong)*(uint *)(lVar4 + 0x60) == 0xffffffff) {
LAB_0d2d1ba1:
            func_0x04931450();
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          puStack_40 = &uStack_21;
          plVar5 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar4 + 0x60) * 8))
                                     (&puStack_40,lVar4 + 0x38);
          if ((plVar5 != (long *)0x0) &&
             (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), cVar2 == '\n')) {
            puStack_38 = &UNK_014a667e;
            uStack_30 = 9;
            lVar4 = func_0x0d6c97a0(lVar6,&puStack_38);
            if (lVar4 != param_1) {
              if ((ulong)*(uint *)(lVar4 + 0x60) == 0xffffffff) goto LAB_0d2d1ba1;
              puStack_40 = &uStack_21;
              plVar5 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar4 + 0x60) * 8))
                                         (&puStack_40,lVar4 + 0x38);
              if ((plVar5 != (long *)0x0) &&
                 (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), cVar2 == '\n')) {
                puStack_38 = &UNK_01388ce5;
                uStack_30 = 0xb;
                lVar4 = func_0x0d6c97a0(lVar6,&puStack_38);
                if (lVar4 != param_1) {
                  if ((ulong)*(uint *)(lVar4 + 0x60) == 0xffffffff) goto LAB_0d2d1ba1;
                  puStack_40 = &uStack_21;
                  plVar5 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar4 + 0x60) * 8))
                                             (&puStack_40,lVar4 + 0x38);
                  if ((plVar5 != (long *)0x0) &&
                     (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), cVar2 == '\n')) {
                    puStack_38 = &DAT_014249aa;
                    uStack_30 = 0x11;
                    lVar6 = func_0x0d6c97a0(lVar6,&puStack_38);
                    if (lVar6 != param_1) {
                      if ((ulong)*(uint *)(lVar6 + 0x60) == 0xffffffff) goto LAB_0d2d1ba1;
                      puStack_40 = &uStack_21;
                      plVar5 = (long *)(**(code **)(&UNK_0f47e980 +
                                                   (ulong)*(uint *)(lVar6 + 0x60) * 8))
                                                 (&puStack_40,lVar6 + 0x38);
                      if (plVar5 != (long *)0x0) {
                        cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
                        return cVar2 == '\x01';
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


