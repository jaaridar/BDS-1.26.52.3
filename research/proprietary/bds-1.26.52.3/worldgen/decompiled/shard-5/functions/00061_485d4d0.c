/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d4d0 (ELF vaddr 0x485d4d0)
 * Label: EditorCustomBiomeSource::vslot7
 * Body:  [[0495d4d0, 0495d50c] [0495d510, 0495d54c] [0495d550, 0495d5d7]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot7
 */


void wg_EditorCustomBiomeSource__vslot7(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  
  FUN_0495c870();
  lStack_38 = 0;
  lStack_30 = 0;
  plVar5 = (long *)*param_2;
  plStack_40 = &lStack_38;
  if (plVar5 != param_2 + 1) {
    do {
      lVar6 = func_0x049db6c0(&plStack_40,plVar5 + 4);
      uVar1 = *(undefined4 *)((long)plVar5 + 0x3c);
      lVar3 = plVar5[8];
      uVar2 = *(undefined4 *)((long)plVar5 + 0x44);
      *(int *)(lVar6 + 0x38) = (int)plVar5[7];
      *(undefined4 *)(lVar6 + 0x3c) = uVar1;
      *(int *)(lVar6 + 0x40) = (int)lVar3;
      *(undefined4 *)(lVar6 + 0x44) = uVar2;
      plVar4 = (long *)plVar5[1];
      plVar7 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar7[2];
          bVar8 = plVar7 != (long *)*plVar5;
          plVar7 = plVar5;
        } while (bVar8);
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != param_2 + 1);
  }
  FUN_049db5d0(*(undefined8 *)(param_1 + 0x3f0));
  *(long **)(param_1 + 1000) = plStack_40;
  *(long *)(param_1 + 0x3f0) = lStack_38;
  *(long *)(param_1 + 0x3f8) = lStack_30;
  if (lStack_30 == 0) {
    *(long *)(param_1 + 1000) = param_1 + 0x3f0;
  }
  else {
    *(long *)(lStack_38 + 0x10) = param_1 + 0x3f0;
    lStack_38 = 0;
    lStack_30 = 0;
    plStack_40 = &lStack_38;
  }
  FUN_049db5d0(lStack_38);
  FUN_0495d5f0(param_1 + 0x410);
  return;
}


