/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358980 (ELF vaddr 0x5258980)
 * Label: OverworldGenerationRulesBiomeComponentGlue::vslot0
 * Body:  [[05358980, 053589f4]]
 * Ghidra: wg_OverworldGenerationRulesBiomeComponentGlue__vslot0
 */


/* WARNING: Possible PIC construction at 0x053589a2: Changing call to branch */
/* WARNING: Possible PIC construction at 0x053589d4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_OverworldGenerationRulesBiomeComponentGlue__vslot0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0efa56e0;
  *param_1 = &UNK_0efa56e0;
  lVar3 = param_1[10];
  if (lVar3 == 0) {
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      param_1[8] = lVar3;
      uStack_10 = 0x53589c0;
      puVar2 = (undefined *)func_0x0412a280(lVar3,param_1[9] - lVar3);
    }
    lVar3 = param_1[4];
    if (lVar3 == 0) {
      lVar3 = param_1[1];
      if (lVar3 == 0) {
        return puVar2;
      }
      param_1[2] = lVar3;
    }
    else {
      param_1[5] = lVar3;
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x53589d9;
    }
  }
  else {
    param_1[0xb] = lVar3;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x53589a7;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


