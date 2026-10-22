/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cac20 (ELF vaddr 0x48cac20)
 * Label: EditorCustomBiomeSource::vslot0
 * Body:  [[049cac20, 049cad5b]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_EditorCustomBiomeSource__vslot0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &UNK_0ef48cf0;
  func_0x0edf9c90(param_1 + 0x82);
  func_0x049db5d0(param_1[0x7e]);
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    func_0x0495d8f0(param_1 + 0xf);
  }
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    FUN_049db610(lVar1);
    func_0x0412a280(lVar1,0xd0);
  }
  if (param_1[10] != 0) {
    func_0x0412a280(param_1[10],param_1[0xc] << 3);
  }
  if (param_1[7] != 0) {
    func_0x0412a280(param_1[7],param_1[9] << 3);
  }
  if (((ulong)param_1[5] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[5] & 0xff00ffffffffffff) - 8);
  }
  param_1[5] = 0;
  if ((param_1[4] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[4] & 0xff00ffffffffffff) - 8);
  }
  param_1[4] = 0;
  plVar2 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x049cad51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


