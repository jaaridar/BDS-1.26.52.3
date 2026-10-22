/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62f3d70
 * Label: string:worldgen/processors
 * Body:  [[062f3d70, 062f3e4c] [062f3f05, 062f3f3b] [062f3f40, 062f403b] [062f4040, 062f406e]]
 * Ghidra: FUN_062f3d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_062f3d70(void)

{
  byte bVar1;
  uint uVar2;
  ulong in_RAX;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *unaff_RBX;
  long *unaff_R13;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  code *in_stack_00000038;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  long *in_stack_000000e0;
  
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uVar3 = (*(code *)(in_RAX & 0xffffffffffffff48))();
  plVar4 = (long *)*unaff_R13;
  if (*(char *)((long)unaff_R13 + 0x24) == '\x02') {
    plVar4 = unaff_R13;
  }
  if (plVar4 == (long *)0x0 || (int)unaff_R13[4] != 0x3959ba50) {
    lVar6 = unaff_R13[5];
    lVar7 = unaff_R13[6];
    if (lVar7 == 0) {
      (*(code *)unaff_R13[7])(0);
      lVar7 = unaff_R13[6];
    }
    plVar4 = (long *)func_0x0488e200(lVar6,lVar7,0x3959ba50);
  }
  lVar6 = plVar4[1];
  lVar7 = lVar6 - *plVar4 >> 3;
  bVar9 = uVar3 < (ulong)(lVar7 * -0x71c71c71c71c71c7);
  bVar10 = uVar3 + lVar7 * 0x71c71c71c71c71c7 == 0;
  if (bVar10) {
LAB_062f3e18:
    if (uVar3 == 0) goto LAB_062f3e29;
  }
  else {
    if (bVar9 || bVar10) {
      if (bVar9) {
        lVar7 = *plVar4 + uVar3 * 0x48;
        for (; lVar7 != lVar6; lVar6 = lVar6 + -0x48) {
          if ((*(byte *)(lVar6 + -0x20) & 1) == 0) {
            bVar1 = *(byte *)(lVar6 + -0x48);
          }
          else {
            func_0x0412a280(*(undefined8 *)(lVar6 + -0x10),
                            *(ulong *)(lVar6 + -0x20) & 0xfffffffffffffffe);
            bVar1 = *(byte *)(lVar6 + -0x48);
          }
          if ((bVar1 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar6 + -0x38),
                            *(ulong *)(lVar6 + -0x48) & 0xfffffffffffffffe);
          }
        }
        plVar4[1] = lVar7;
      }
      goto LAB_062f3e18;
    }
    func_0x062f50b0(plVar4);
  }
  uVar8 = 0;
  do {
    in_stack_000000e0 = (long *)0x0;
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *plVar5 = (long)&UNK_0f027c48;
    plVar5[1] = (long)&stack0x00000060;
    plVar5[2] = (long)register0x00000020;
    plVar5[3] = (long)&stack0x00000020;
    plVar5[4] = (long)plVar4;
    plVar5[5] = (long)unaff_RBX;
    in_stack_000000e0 = plVar5;
    (**(code **)(*unaff_RBX + 0x20))();
    if (in_stack_000000e0 == (long *)&stack0x000000c0) {
      lVar6 = 0x20;
LAB_062f3f45:
      (**(code **)(*in_stack_000000e0 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (in_stack_000000e0 != (long *)0x0) goto LAB_062f3f45;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar3);
LAB_062f3e29:
  uVar2 = (**(code **)(*unaff_RBX + 0x18))();
  if (in_stack_00000038 != (code *)0x0) {
    (*in_stack_00000038)(&stack0x00000020);
  }
  return uVar2 ^ 1;
}


