/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x846acf0 (ELF vaddr 0x836acf0)
 * Label: string:These are sent from the client to tell the Server map about
 * Body:  [[0846acf0, 0846ade5]]
 * Ghidra: FUN_0846acf0
 */


void FUN_0846acf0(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined **ppuStack_28;
  
  lStack_68 = *param_1 + 8;
  puStack_88 = &UNK_0846af70;
  puStack_80 = &uStack_89;
  puStack_48 = &UNK_0f0c29a0;
  puStack_40 = &UNK_0846af60;
  puStack_38 = &uStack_8a;
  puStack_78 = &UNK_0f118b80;
  ppuStack_60 = &puStack_88;
  plStack_70 = param_2;
  ppuStack_58 = &puStack_78;
  ppuStack_28 = &puStack_48;
  (**(code **)(*param_2 + 0xe8))(param_2,&puStack_48,&puStack_78,&UNK_014196d3,&UNK_01229684);
  if (ppuStack_58 == &puStack_78) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (ppuStack_58 == (undefined **)0x0) goto joined_r0x0846adcc;
  }
  (**(code **)(*ppuStack_58 + lVar1))();
joined_r0x0846adcc:
  if (ppuStack_28 == &puStack_48) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) {
      return;
    }
  }
  (**(code **)(*ppuStack_28 + lVar1))();
  return;
}


