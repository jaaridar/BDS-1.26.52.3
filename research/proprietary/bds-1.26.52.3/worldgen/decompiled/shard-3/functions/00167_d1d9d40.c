/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9d40
 * Label: br::worldgen::processors::BlockRules::RandomBlockStateMatch::vslot1
 * Body:  [[0d1d9d40, 0d1d9d4f] [0d1d9d51, 0d1d9d5e] [0d1d9d60, 0d1d9d8f] [0d1d9d91, 0d1d9d95] [0d1d9da0, 0d1d9ddd]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot1
 */


undefined8
wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot1
          (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 in_RAX;
  long *plVar8;
  ulong uVar9;
  long unaff_RBX;
  long *plVar10;
  ulong unaff_RBP;
  long lVar11;
  long unaff_R12;
  long *unaff_R13;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  char *pcVar7;
  
  uVar2 = (ushort)(byte)((ulong)param_3 >> 8);
  cVar4 = (char)((ushort)in_RAX / uVar2);
  cVar5 = cVar4 + '$';
  pcVar7 = (char *)CONCAT71((int7)(CONCAT62((int6)((ulong)in_RAX >> 0x10),
                                            CONCAT11((char)((ushort)in_RAX % uVar2),cVar4)) >> 8),
                            cVar5);
  *param_1 = *param_1 + (int)param_4;
  *pcVar7 = *pcVar7 + cVar5;
  pcVar7 = (char *)(unaff_RBP + 0x74 + param_4 * 4);
  *pcVar7 = *pcVar7 + (char)param_4;
  plVar10 = (long *)(unaff_RBX + 0x10);
  do {
    bVar1 = *(byte *)(plVar10 + -2);
    if ((bVar1 & 1) == 0) {
      uVar9 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar9 = plVar10[-1];
    }
    if (uVar9 == (unaff_RBP >> 1 & 0x7fffffff)) {
      if ((bVar1 & 1) == 0) {
        lVar11 = (long)plVar10 + -0xf;
      }
      else {
        lVar11 = *plVar10;
      }
      iVar6 = func_0x0eee3000(lVar11);
      if (iVar6 == 0) {
        bVar3 = true;
        goto LAB_0d1d9db9;
      }
    }
    plVar8 = plVar10 + 2;
    plVar10 = plVar10 + 4;
    if (plVar8 == unaff_R13) {
      bVar3 = false;
LAB_0d1d9db9:
      func_0x0412d6b0(in_stack_00000020);
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar3) {
        in_stack_00000038 = &UNK_01254d89;
        in_stack_00000040 = 0;
        func_0x041b3a30(in_stack_00000028,3,&stack0x00000000,&stack0x00000038);
      }
      else {
        func_0x0412d680(unaff_R12 + 0xd0);
        (**(code **)(**(long **)(unaff_R12 + 0x10) + 0x18))(in_stack_00000028);
        func_0x0412d6b0(unaff_R12 + 0xd0);
      }
      return in_stack_00000028;
    }
  } while( true );
}


