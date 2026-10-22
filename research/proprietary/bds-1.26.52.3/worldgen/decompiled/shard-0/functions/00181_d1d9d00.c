/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9d00
 * Label: br::worldgen::processors::BlockRules::BlockMatch::vslot1
 * Body:  [[0d1d9d00, 0d1d9d0e]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockMatch__vslot1
 */


long wg_br__worldgen__processors__BlockRules__BlockMatch__vslot1
               (long param_1,undefined1 *param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6,ulong param_7,undefined1 *param_8)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  ulong in_RAX;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  long unaff_RBX;
  long *plVar8;
  long unaff_RBP;
  long lVar9;
  long unaff_R12;
  long *unaff_R13;
  undefined8 unaff_R14;
  undefined1 *puVar10;
  char in_SF;
  char in_OF;
  ulong unaff_retaddr;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (in_OF == in_SF) {
    piVar4 = (int *)(in_RAX & 0xffffffffffffff28);
    *piVar4 = *piVar4 + (int)piVar4;
    *(char *)(unaff_RBP + -0x75) = *(char *)(unaff_RBP + -0x75) + (char)param_4;
    piVar4 = (int *)(CONCAT71((int7)((ulong)piVar4 >> 8),*param_2) & 0xffffffffffffff30);
    *piVar4 = *piVar4 + (int)piVar4;
    pcVar1 = (char *)(param_4 + -0x15 + param_1);
    *pcVar1 = *pcVar1 + (char)param_4;
    if (*pcVar1 != '\0') {
      puVar10 = param_8;
      if ((unaff_retaddr & 1) == 0) {
        param_7 = unaff_retaddr >> 1 & 0x7f;
        puVar10 = &stack0x00000001;
      }
      plVar8 = (long *)(unaff_RBX + 0x10);
      do {
        bVar2 = *(byte *)(plVar8 + -2);
        if ((bVar2 & 1) == 0) {
          uVar6 = (ulong)(bVar2 >> 1);
        }
        else {
          uVar6 = plVar8[-1];
        }
        if (uVar6 == param_7) {
          if ((bVar2 & 1) == 0) {
            lVar9 = (long)plVar8 + -0xf;
          }
          else {
            lVar9 = *plVar8;
          }
          iVar3 = func_0x0eee3000(lVar9,puVar10,param_7);
          if (iVar3 == 0) {
            cVar7 = '\x01';
            goto LAB_0d1d9db9;
          }
        }
        plVar5 = plVar8 + 2;
        plVar8 = plVar8 + 4;
      } while (plVar5 != unaff_R13);
      cVar7 = '\0';
LAB_0d1d9db9:
      func_0x0412d6b0(unaff_R14);
      goto joined_r0x0d1d9d47;
    }
    unaff_RBX = 0;
  }
  cVar7 = (char)unaff_RBX;
  func_0x0412d6b0();
joined_r0x0d1d9d47:
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(param_8,unaff_retaddr & 0xfffffffffffffffe);
  }
  if (cVar7 == '\0') {
    func_0x0412d680(unaff_R12 + 0xd0);
    (**(code **)(**(long **)(unaff_R12 + 0x10) + 0x18))(unaff_RBP);
    func_0x0412d6b0(unaff_R12 + 0xd0);
  }
  else {
    in_stack_00000038 = &UNK_01254d89;
    in_stack_00000040 = 0;
    func_0x041b3a30(unaff_RBP,3,&stack0x00000000,&stack0x00000038);
  }
  return unaff_RBP;
}


