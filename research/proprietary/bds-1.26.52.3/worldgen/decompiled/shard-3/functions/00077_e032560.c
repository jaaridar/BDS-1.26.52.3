/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe032560
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot1
 * Body:  [[0e032560, 0e03269e] [0e033381, 0e033392] [0e0333af, 0e0333c0]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot1(void)

{
  long lVar1;
  undefined8 in_RAX;
  char *pcVar2;
  long *plVar3;
  ulong unaff_RBP;
  long unaff_R14;
  long unaff_R15;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  ulong uStack0000000000000080;
  ulong in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_000001b0;
  
  pcVar2 = (char *)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  *pcVar2 = *pcVar2 + '\x01';
  if (*pcVar2 != '\0') {
    unaff_R14 = in_stack_000001a8;
  }
  uStack0000000000000080 = 0;
  if (unaff_R15 == 0) {
    uStack0000000000000080 = (ulong)((uint)unaff_R14 & 0x7f) << 0x30;
  }
  else {
    lVar1 = unaff_R14 + 9;
    plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar3 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar3 = unaff_R14;
    func_0x0eee2f00(plVar3 + 1);
    *(undefined1 *)((long)plVar3 + unaff_R14 + 8) = 0;
    uStack0000000000000080 = (ulong)(plVar3 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  func_0x0ed5ffe0();
  if ((uStack0000000000000080 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(uStack0000000000000080 & 0xff00ffffffffffff) - 8);
  }
  uStack0000000000000080 = 0;
  if ((in_stack_000001a0 & 1) != 0) {
    func_0x0412a280(in_stack_000001b0,in_stack_000001a0 & 0xfffffffffffffffe);
  }
  if ((unaff_RBP & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


