/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9cf0
 * Label: br::worldgen::processors::BlockRules::AlwaysTrue::vslot1
 * Body:  [[0d1d9cf0, 0d1d9d2c] [0d1d9d39, 0d1d9d58]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot1
 */


undefined8
wg_br__worldgen__processors__BlockRules__AlwaysTrue__vslot1
          (undefined8 param_1,undefined8 param_2,undefined2 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,ulong param_7,undefined1 *param_8)

{
  char *pcVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 in_RAX;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 unaff_RBP;
  long lVar11;
  long unaff_R12;
  undefined8 unaff_R14;
  undefined1 *puVar12;
  ulong unaff_retaddr;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar5 = in(param_3);
  piVar7 = (int *)(CONCAT71((int7)((ulong)in_RAX >> 8),uVar5) & 0xffffffffffffff40);
  *piVar7 = *piVar7 + (int)piVar7;
  pcVar1 = (char *)(param_4 * 5 + -9);
  *pcVar1 = *pcVar1 + (char)param_4;
  func_0x0412d680();
  plVar3 = *(long **)(unaff_R12 + 0x130);
  if (*(long **)(unaff_R12 + 0x128) == plVar3) {
    bVar4 = false;
    func_0x0412d6b0();
  }
  else {
    puVar12 = param_8;
    if ((unaff_retaddr & 1) == 0) {
      param_7 = unaff_retaddr >> 1 & 0x7f;
      puVar12 = &stack0x00000001;
    }
    plVar10 = *(long **)(unaff_R12 + 0x128) + 2;
    do {
      bVar2 = *(byte *)(plVar10 + -2);
      if ((bVar2 & 1) == 0) {
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = plVar10[-1];
      }
      if (uVar9 == param_7) {
        if ((bVar2 & 1) == 0) {
          lVar11 = (long)plVar10 + -0xf;
        }
        else {
          lVar11 = *plVar10;
        }
        iVar6 = func_0x0eee3000(lVar11,puVar12,param_7);
        if (iVar6 == 0) {
          bVar4 = true;
          goto LAB_0d1d9db9;
        }
      }
      plVar8 = plVar10 + 2;
      plVar10 = plVar10 + 4;
    } while (plVar8 != plVar3);
    bVar4 = false;
LAB_0d1d9db9:
    func_0x0412d6b0(unaff_R14);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(param_8,unaff_retaddr & 0xfffffffffffffffe);
  }
  if (bVar4) {
    in_stack_00000038 = &UNK_01254d89;
    in_stack_00000040 = 0;
    func_0x041b3a30(unaff_RBP,3,&stack0x00000000,&stack0x00000038);
  }
  else {
    func_0x0412d680(unaff_R12 + 0xd0);
    (**(code **)(**(long **)(unaff_R12 + 0x10) + 0x18))(unaff_RBP);
    func_0x0412d6b0(unaff_R12 + 0xd0);
  }
  return unaff_RBP;
}


