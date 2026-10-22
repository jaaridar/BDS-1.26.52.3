/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1beb00
 * Label: br::worldgen::processors::Rule::vslot0
 * Body:  [[0d1beb00, 0d1beb49] [0d1beb50, 0d1beb6f]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot0
 */


/* WARNING: Possible PIC construction at 0x0d1beb24: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__Rule__vslot0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcStack_20;
  
  puVar4 = &UNK_0f457ca0;
  *param_1 = &UNK_0f457ca0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar4 = &UNK_0f458140;
    *param_1 = &UNK_0f458140;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar6 = param_1[2];
      lVar5 = lVar1;
      if (lVar1 != lVar6) {
        do {
          plVar2 = *(long **)(lVar6 + -8);
          *(undefined8 *)(lVar6 + -8) = 0;
          if (plVar2 != (long *)0x0) {
            pcStack_20 = wg_br__worldgen__processors__Rule__vslot5;
            (**(code **)(*plVar2 + 8))();
          }
          lVar6 = lVar6 + -8;
        } while (lVar6 != lVar1);
        lVar5 = param_1[1];
      }
      param_1[2] = lVar1;
      pcStack_20 = (code *)0xd1beb86;
      puVar4 = (undefined *)func_0x0412a280(lVar5,param_1[3] - lVar5);
    }
  }
  else {
    param_1 = (undefined8 *)param_1[6];
    register0x00000020 = (BADSPACEBASE *)&pcStack_20;
    pcStack_20 = (code *)0xd1beb29;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


