/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cd240 (ELF vaddr 0xc5cd240)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c6cd240, 0c6cd38c]]
 * Ghidra: FUN_0c6cd240
 */


long FUN_0c6cd240(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  ulong *puStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_48 = param_3 + (ulong)(param_3 == 0);
  uStack_50 = *(ulong *)(param_2 + 8);
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    lVar5 = param_1 + 0x1b0;
    do {
      bVar6 = *(ulong *)(lVar2 + 0x20) < uStack_50;
      if (!bVar6) {
        lVar5 = lVar2;
      }
      lVar2 = *(long *)(lVar2 + (ulong)bVar6 * 8);
    } while (lVar2 != 0);
    if ((lVar5 != param_1 + 0x1b0) && (*(ulong *)(lVar5 + 0x20) <= uStack_50)) {
      return param_1;
    }
  }
  plVar3 = *(long **)(param_1 + 0x350);
  while( true ) {
    if (plVar3 == *(long **)(param_1 + 0x358)) {
      uVar4 = lStack_48 - 1;
      lStack_58 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lStack_58 == 0; lStack_58 = lStack_58 + -1) {
        }
      }
      lStack_58 = lStack_58 + 1;
      if (uVar4 == 0) {
        lStack_58 = 0;
      }
      puStack_60 = &uStack_50;
      lStack_40 = param_1 + 0x1a0;
      plStack_38 = &lStack_58;
      plStack_30 = &lStack_48;
      lStack_28 = param_2;
      func_0x0c6e2f30(param_1 + 0x1a8,&UNK_01563a4f,&puStack_60,&lStack_40);
      uVar1 = *(undefined8 *)(param_2 + 8);
      lStack_40 = param_2 + 0x18;
      lVar2 = func_0x072b0640(param_1 + 0x1c0,lStack_40,&UNK_01563a4f,&lStack_40,&puStack_60);
      *(undefined8 *)(lVar2 + 0x38) = uVar1;
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + (int)lStack_58;
      return param_1;
    }
    if (*(ulong *)(*(long *)(*plVar3 + 8) + 8) == uStack_50) break;
    plVar3 = plVar3 + 2;
  }
  return param_1;
}


