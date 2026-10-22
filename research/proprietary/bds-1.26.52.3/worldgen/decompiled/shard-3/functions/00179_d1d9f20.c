/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9f20
 * Label: br::worldgen::processors::Capped::vslot1
 * Body:  [[0d1d9f20, 0d1d9f3c] [0d1d9f56, 0d1d9f62] [0d1d9f70, 0d1d9fa5]]
 * Ghidra: wg_br__worldgen__processors__Capped__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_br__worldgen__processors__Capped__vslot1(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_RBX;
  long *plVar8;
  long *unaff_RBP;
  long lVar9;
  undefined1 *puVar10;
  long *unaff_R15;
  ulong unaff_retaddr;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  long in_stack_00000020;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  
  puVar10 = in_stack_00000010;
  if ((unaff_retaddr & 1) == 0) {
    in_stack_00000008 = unaff_retaddr >> 1 & 0x7f;
    puVar10 = &stack0x00000001;
  }
  plVar8 = (long *)(unaff_RBX + 0x10);
  do {
    bVar1 = *(byte *)(plVar8 + -2);
    if ((bVar1 & 1) == 0) {
      uVar7 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar7 = plVar8[-1];
    }
    if (uVar7 == in_stack_00000008) {
      if ((bVar1 & 1) == 0) {
        lVar9 = (long)plVar8 + -0xf;
      }
      else {
        lVar9 = *plVar8;
      }
      iVar4 = func_0x0eee3000(lVar9,puVar10,in_stack_00000008);
      if (iVar4 == 0) {
        bVar2 = true;
        goto LAB_0d1d9fc9;
      }
    }
    plVar5 = plVar8 + 2;
    plVar8 = plVar8 + 4;
    if (plVar5 == unaff_R15) {
      bVar2 = false;
LAB_0d1d9fc9:
      func_0x0412d6b0();
      if ((unaff_retaddr & 1) != 0) {
        func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
      }
      if (bVar2) {
        in_stack_00000030 = &UNK_01254d89;
        in_stack_00000038 = 0;
        func_0x041b3a30(unaff_RBP,3,&stack0x00000000,&stack0x00000030);
      }
      else {
        func_0x0412d680(in_stack_00000020 + 0x18);
        puVar3 = in_stack_00000040;
        if (in_stack_00000040 == (undefined8 *)0x0) {
          in_stack_00000030 = &UNK_01254d89;
          in_stack_00000038 = 0;
          func_0x041b3a30(unaff_RBP,5,&stack0x00000000,&stack0x00000030);
        }
        else {
          (**(code **)(**(long **)(in_stack_00000020 + 0x10) + 0x20))(unaff_RBP);
          if (*unaff_RBP == 0) {
            puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
            if (puVar6 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x18,0);
            }
            *puVar6 = &UNK_0f459958;
            puVar6[1] = 0;
            puVar6[2] = in_stack_00000020 + 0x40;
            *puVar3 = puVar6;
          }
        }
        func_0x0412d6b0(in_stack_00000020 + 0x18);
      }
      return unaff_RBP;
    }
  } while( true );
}


