/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf09600 (ELF vaddr 0xce09600)
 * Label: JigsawBlockActor::vslot19
 * Body:  [[0cf09600, 0cf09833]]
 * Ghidra: wg_JigsawBlockActor__vslot19
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_JigsawBlockActor__vslot19(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  puStack_a0 = &UNK_0f47e0b0;
  lStack_90 = 0;
  lStack_88 = 0;
  plStack_98 = &lStack_90;
  puVar1 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
  if (puVar1 == (undefined1 *)0x0) {
    func_0x0eec74c0(1,0);
  }
  *puVar1 = 1;
  (**(code **)(*param_2 + 0x18))(param_2,&puStack_a0,puVar1);
  func_0x0412a280(puVar1,1);
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puStack_50 = &UNK_0f47e0b0;
  plStack_48 = &lStack_40;
  lStack_40 = lStack_90;
  lStack_38 = lStack_88;
  if (lStack_88 == 0) {
    lStack_80 = param_2[1];
    uStack_78 = (undefined4)param_2[2];
    plStack_68 = &lStack_60;
  }
  else {
    *(long **)(lStack_90 + 0x10) = plStack_48;
    uStack_78 = (undefined4)param_2[2];
    lStack_80 = param_2[1];
    *(long **)(lStack_90 + 0x10) = &lStack_60;
    lStack_40 = 0;
    lStack_38 = 0;
    plStack_68 = plStack_98;
    plStack_98 = &lStack_90;
  }
  lStack_58 = lStack_88;
  lStack_60 = lStack_90;
  puVar2[1] = 0x100000002;
  *(undefined2 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = &UNK_0f12e620;
  puVar2[6] = lStack_80;
  *(undefined4 *)(puVar2 + 7) = uStack_78;
  puVar2[8] = &UNK_0f47e0b0;
  puVar2[9] = plStack_68;
  puVar2[10] = lStack_90;
  puVar2[0xb] = lStack_88;
  if (lStack_88 == 0) {
    puVar2[9] = puVar2 + 10;
  }
  else {
    *(undefined8 **)(lStack_90 + 0x10) = puVar2 + 10;
    lStack_60 = 0;
    lStack_58 = 0;
    plStack_68 = &lStack_60;
  }
  *(undefined4 *)(puVar2 + 0xc) = 1;
  puStack_70 = &UNK_0f47e0b0;
  lStack_90 = lStack_40;
  lStack_88 = lStack_38;
  func_0x0d6c9500(&plStack_68,lStack_60);
  puStack_50 = &UNK_0f47e0b0;
  func_0x0d6c9500(&plStack_48,lStack_40);
  *param_1 = puVar2;
  puStack_a0 = &UNK_0f47e0b0;
  func_0x0d6c9500(&plStack_98,lStack_90);
  return param_1;
}


