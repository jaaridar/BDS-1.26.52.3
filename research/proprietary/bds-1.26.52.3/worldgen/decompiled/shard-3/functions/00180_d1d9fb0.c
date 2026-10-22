/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9fb0
 * Label: br::worldgen::processors::Gravity::vslot1
 * Body:  [[0d1d9fb0, 0d1da11a]]
 * Ghidra: wg_br__worldgen__processors__Gravity__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__Gravity__vslot1(void)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong in_RAX;
  undefined8 *puVar5;
  ulong uVar6;
  long *unaff_RBX;
  ulong unaff_RBP;
  long lVar7;
  long *unaff_R15;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  
code_r0x0d1d9fb0:
  uVar6 = in_RAX >> 1 & 0x7fffffff;
  plVar2 = unaff_RBX;
  do {
    if (uVar6 == unaff_RBP) {
      if ((in_RAX & 1) == 0) {
        lVar7 = (long)plVar2 + -0xf;
      }
      else {
        lVar7 = *plVar2;
      }
      iVar4 = func_0x0eee3000(lVar7);
      if (iVar4 == 0) {
        bVar1 = true;
        goto LAB_0d1d9fc9;
      }
    }
    unaff_RBX = plVar2 + 4;
    if (plVar2 + 2 == unaff_R15) {
      bVar1 = false;
LAB_0d1d9fc9:
      func_0x0412d6b0();
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar1) {
        in_stack_00000030 = &UNK_01254d89;
        in_stack_00000038 = 0;
        func_0x041b3a30(in_stack_00000028,3,&stack0x00000000,&stack0x00000030);
      }
      else {
        func_0x0412d680(in_stack_00000020 + 0x18);
        puVar3 = in_stack_00000040;
        if (in_stack_00000040 == (undefined8 *)0x0) {
          in_stack_00000030 = &UNK_01254d89;
          in_stack_00000038 = 0;
          func_0x041b3a30(in_stack_00000028,5,&stack0x00000000,&stack0x00000030);
        }
        else {
          (**(code **)(**(long **)(in_stack_00000020 + 0x10) + 0x20))(in_stack_00000028);
          if (*in_stack_00000028 == 0) {
            puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (puVar5 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            *puVar5 = &UNK_0f459958;
            puVar5[1] = 0;
            puVar5[2] = in_stack_00000020 + 0x40;
            *puVar3 = puVar5;
          }
        }
        func_0x0412d6b0(in_stack_00000020 + 0x18);
      }
      return in_stack_00000028;
    }
    in_RAX = (ulong)*(byte *)(plVar2 + 2);
    if ((*(byte *)(plVar2 + 2) & 1) == 0) goto code_r0x0d1d9fb0;
    uVar6 = plVar2[3];
    plVar2 = unaff_RBX;
  } while( true );
}


