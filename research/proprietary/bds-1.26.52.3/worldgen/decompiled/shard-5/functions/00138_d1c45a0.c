/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c45a0 (ELF vaddr 0xd1c45a0)
 * Label: br::worldgen::processors::Rule::vslot1
 * Body:  [[0d2c45a0, 0d2c4609]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__Rule__vslot1(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = &UNK_0f45e200;
  *param_1 = &UNK_0f45e200;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar4 = param_1[2];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        lVar4 = lVar4 + -0xe8;
        func_0x05192430(lVar4);
      } while (lVar4 != lVar1);
      lVar3 = param_1[1];
    }
    param_1[2] = lVar1;
    puVar2 = (undefined *)FUN_0412a280(lVar3,param_1[3] - lVar3);
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return puVar2;
}


