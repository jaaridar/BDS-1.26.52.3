/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6bd5f0 (ELF vaddr 0xd5bd5f0)
 * Label: callee-of:0xc967b50
 * Body:  [[0d6bd5f0, 0d6bd640] [0d6bd650, 0d6bd723]]
 * Ghidra: FUN_0d6bd5f0
 */


void FUN_0d6bd5f0(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  undefined1 uStack_69;
  undefined1 *puStack_68;
  undefined1 auStack_60 [40];
  uint uStack_38;
  
  func_0x0d6c9500(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 8) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(long **)(param_2 + 8);
  if (plVar3 != (long *)(param_2 + 0x10)) {
    do {
      if ((ulong)*(uint *)(plVar3 + 0xc) == 0xffffffff) {
        uVar4 = func_0x04931450();
        uVar4 = func_0x04882e20(uVar4);
        func_0x0d6bc330(auStack_60);
        func_0x0eee2d70(uVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_68 = &uStack_69;
      (**(code **)(&UNK_0f47e860 + (ulong)*(uint *)(plVar3 + 0xc) * 8))
                (auStack_60,&puStack_68,plVar3 + 7);
      func_0x0d6c9960(param_1 + 8,plVar3 + 4,plVar3 + 4,auStack_60);
      if ((ulong)uStack_38 != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)uStack_38 * 8))(&puStack_68,auStack_60);
      }
      plVar2 = (long *)plVar3[1];
      plVar5 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar5[2];
          bVar6 = plVar5 != (long *)*plVar3;
          plVar5 = plVar3;
        } while (bVar6);
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    } while (plVar3 != (long *)(param_2 + 0x10));
  }
  return;
}


