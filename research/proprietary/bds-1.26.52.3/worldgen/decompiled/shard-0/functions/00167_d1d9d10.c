/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9d10
 * Label: br::worldgen::processors::BlockRules::RandomBlockMatch::vslot1
 * Body:  [[0d1d9d10, 0d1d9d5e] [0d1d9d60, 0d1d9d95] [0d1d9da0, 0d1d9e66]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot1
 */


undefined8 wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot1(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *in_RAX;
  long *plVar4;
  byte *in_RCX;
  ulong uVar5;
  long *unaff_RBX;
  long *plVar6;
  undefined8 unaff_RBP;
  long lVar7;
  long unaff_R12;
  long *unaff_R13;
  undefined8 unaff_R14;
  undefined1 *puVar8;
  ulong unaff_retaddr;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  *in_RCX = *in_RCX ^ (byte)in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  if (unaff_RBX == unaff_R13) {
    bVar2 = false;
    func_0x0412d6b0();
  }
  else {
    puVar8 = in_stack_00000010;
    if ((unaff_retaddr & 1) == 0) {
      in_stack_00000008 = unaff_retaddr >> 1 & 0x7f;
      puVar8 = &stack0x00000001;
    }
    plVar6 = unaff_RBX + 2;
    do {
      bVar1 = *(byte *)(plVar6 + -2);
      if ((bVar1 & 1) == 0) {
        uVar5 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar5 = plVar6[-1];
      }
      if (uVar5 == in_stack_00000008) {
        if ((bVar1 & 1) == 0) {
          lVar7 = (long)plVar6 + -0xf;
        }
        else {
          lVar7 = *plVar6;
        }
        iVar3 = func_0x0eee3000(lVar7,puVar8,in_stack_00000008);
        if (iVar3 == 0) {
          bVar2 = true;
          goto LAB_0d1d9db9;
        }
      }
      plVar4 = plVar6 + 2;
      plVar6 = plVar6 + 4;
    } while (plVar4 != unaff_R13);
    bVar2 = false;
LAB_0d1d9db9:
    func_0x0412d6b0(unaff_R14);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
  }
  if (bVar2) {
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


