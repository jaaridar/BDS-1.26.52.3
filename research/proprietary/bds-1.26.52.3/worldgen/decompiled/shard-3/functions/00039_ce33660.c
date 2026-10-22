/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf33660 (ELF vaddr 0xce33660)
 * Label: JigsawBlockActor::vslot0
 * Body:  [[0cf33660, 0cf3382c]]
 * Ghidra: wg_JigsawBlockActor__vslot0
 */


/* WARNING: Type propagation algorithm not settling */

void wg_JigsawBlockActor__vslot0(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  
  *param_1 = &UNK_0f40e2f0;
  param_1[6] = &UNK_0f40e538;
  param_1[7] = &UNK_0f40e620;
  param_1[8] = &UNK_0f40e6b0;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x21);
  }
  else {
    func_0x0412a280(param_1[0x26],param_1[0x24] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0x21);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1e);
  }
  else {
    func_0x0412a280(param_1[0x23],param_1[0x21] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0x1e);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1b);
  }
  else {
    func_0x0412a280(param_1[0x20],param_1[0x1e] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0x1b);
  }
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(param_1[0x1d],param_1[0x1b] & 0xfffffffffffffffe);
  }
  *param_1 = &UNK_0f40def0;
  param_1[6] = &UNK_0f40e138;
  param_1[7] = &UNK_0f40e220;
  param_1[8] = &UNK_0f40e2b0;
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    func_0x0412a280(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
  }
  if ((*(char *)(param_1 + 0x17) == '\x01') && ((*(byte *)(param_1 + 0x14) & 1) != 0)) {
    func_0x0412a280(param_1[0x16],param_1[0x14] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x0412a280(param_1[0x13],param_1[0x11] & 0xfffffffffffffffe);
  }
  *param_1 = &UNK_0f420208;
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cf337b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


