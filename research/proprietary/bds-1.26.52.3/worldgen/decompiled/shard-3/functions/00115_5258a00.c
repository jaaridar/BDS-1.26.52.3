/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358a00 (ELF vaddr 0x5258a00)
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot1
 * Body:  [[05358a00, 05358a7f]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot1
 */


/* WARNING: Possible PIC construction at 0x05358a22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05358a54: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGenerationRulesBiomeComponentGlue__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uStack_10;
  
  puVar4 = &UNK_0efa56e0;
  *param_1 = &UNK_0efa56e0;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = param_1[7];
    if (lVar2 != 0) {
      param_1[8] = lVar2;
      uStack_10 = 0x5358a40;
      puVar4 = (undefined *)func_0x0412a280(lVar2,param_1[9] - lVar2);
    }
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 == (undefined8 *)0x0) {
      lVar2 = param_1[1];
      if (lVar2 != 0) {
        param_1[2] = lVar2;
        uStack_10 = 0x5358a72;
        puVar4 = (undefined *)func_0x0412a280(lVar2,param_1[3] - lVar2);
      }
    }
    else {
      param_1[5] = puVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x5358a59;
      param_1 = puVar1;
    }
  }
  else {
    param_1[0xb] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x5358a27;
    param_1 = puVar1;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


