/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c45a0 (ELF vaddr 0xd1c45a0)
 * Label: br::worldgen::processors::Rule::vslot1
 * Body:  [[0d2c45a0, 0d2c4609]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d2c45f3: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__Rule__vslot1(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_20;
  
  puVar3 = &UNK_0f45e200;
  *param_1 = &UNK_0f45e200;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = puVar1;
    if (puVar1 != puVar5) {
      do {
        puVar5 = puVar5 + -0x1d;
        uStack_20 = 0xd2c45df;
        puVar3 = (undefined *)func_0x05192430(puVar5);
      } while (puVar5 != puVar1);
      puVar4 = (undefined8 *)param_1[1];
    }
    param_1[2] = puVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd2c45f8;
    param_1 = puVar4;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


