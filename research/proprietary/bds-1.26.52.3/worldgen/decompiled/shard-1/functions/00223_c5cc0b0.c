/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cc0b0
 * Label: JigsawBlock::vslot38
 * Body:  [[0c5cc0b0, 0c5cc0df] [0c5cc0e1, 0c5cc286]]
 * Ghidra: wg_JigsawBlock__vslot38
 */


/* WARNING: Removing unreachable block (ram,0x0c5cc0f7) */
/* WARNING: Removing unreachable block (ram,0x0c5cc0fc) */
/* WARNING: Removing unreachable block (ram,0x0c5cc115) */
/* WARNING: Removing unreachable block (ram,0x0c5cbdda) */
/* WARNING: Removing unreachable block (ram,0x0c5cc255) */
/* WARNING: Removing unreachable block (ram,0x0c5cc25a) */
/* WARNING: Removing unreachable block (ram,0x0c5cc277) */
/* WARNING: Removing unreachable block (ram,0x0c5cc266) */
/* WARNING: Removing unreachable block (ram,0x0c5cc26e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot38(void)

{
  long *plVar1;
  long lVar2;
  long unaff_RBP;
  long *unaff_R15;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  lVar2 = _DAT_0f6e9b60;
  _DAT_0f6e9b60 = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,_DAT_0f6e9b68 << 3);
  }
  lVar2 = _DAT_0f6e9b60;
  _DAT_0f6e9b68 = 0;
  plVar1 = *(long **)(_DAT_0f6e9b60 + unaff_RBP * 8);
  if (plVar1 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar2 + unaff_RBP * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      *(long **)(lVar2 + *(long *)(*unaff_R15 + 8) * 8) = unaff_R15;
    }
  }
  else {
    *unaff_R15 = *plVar1;
    *plVar1 = (long)unaff_R15;
  }
  _DAT_0f6e9b78 = _DAT_0f6e9b78 + 1;
  if (in_stack_00000090 == (long *)&stack0x00000070) {
    (**(code **)(*in_stack_00000090 + 0x20))();
joined_r0x0c5cc20d:
    if ((in_stack_00000038 & 1) == 0) goto LAB_0c5cc1bf;
LAB_0c5cc16f:
    func_0x0412a280(in_stack_00000048,in_stack_00000038 & 0xfffffffffffffffe);
    if ((in_stack_00000020 & 1) == 0) goto LAB_0c5cc1c6;
LAB_0c5cc189:
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
    if (in_stack_000000c0 == (long *)&stack0x000000a0) {
LAB_0c5cc1b1:
      lVar2 = 0x20;
      goto LAB_0c5cc1e5;
    }
  }
  else {
    if (in_stack_00000090 == (long *)0x0) goto joined_r0x0c5cc20d;
    (**(code **)(*in_stack_00000090 + 0x28))();
    if ((in_stack_00000038 & 1) != 0) goto LAB_0c5cc16f;
LAB_0c5cc1bf:
    if ((in_stack_00000020 & 1) != 0) goto LAB_0c5cc189;
LAB_0c5cc1c6:
    if (in_stack_000000c0 == (long *)&stack0x000000a0) goto LAB_0c5cc1b1;
  }
  lVar2 = 0x28;
  if (in_stack_000000c0 == (long *)0x0) {
    return;
  }
LAB_0c5cc1e5:
  (**(code **)(*in_stack_000000c0 + lVar2))();
  return;
}


