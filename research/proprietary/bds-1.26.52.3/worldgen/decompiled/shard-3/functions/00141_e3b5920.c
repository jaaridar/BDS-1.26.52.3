/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3b5920
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e3b574f, 0e3b5903] [0e3b5920, 0e3b5b0e] [0e3b5b53, 0e3b5b74]]
 * Ghidra: FUN_0e3b5920
 */


/* WARNING: Removing unreachable block (ram,0x0e3b5844) */
/* WARNING: Removing unreachable block (ram,0x0e3b5856) */
/* WARNING: Removing unreachable block (ram,0x0e3b5a6f) */
/* WARNING: Removing unreachable block (ram,0x0e3b5a81) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3b5920(void)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int in_EAX;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  int in_ECX;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000030;
  long in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  undefined4 in_stack_00000140;
  undefined4 uStack0000000000000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined1 in_stack_00000170;
  undefined4 in_stack_000002b0;
  undefined4 in_stack_000002b4;
  
  piVar6 = (int *)(ulong)(in_EAX + 0x58);
  do {
    piVar5 = piVar6;
    piVar6 = piVar5 + 0x16;
  } while (*piVar5 != in_ECX);
  lVar3 = *(long *)(piVar5 + 0xc);
  while (lVar3 != in_stack_00000078) {
    piVar5 = *(int **)(piVar5 + 0xe);
    lVar3 = *(long *)(piVar5 + 0xc);
  }
  *(byte *)((long)piVar5 + 0x12) = *(byte *)((long)piVar5 + 0x12) | 4;
  func_0x0e3e6e50(&stack0x00000070,&stack0x000002b0,&UNK_0129a658,0xc);
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f493870;
  if (_iStack0000000000000088 != (long *)0x0) {
    lVar3 = *_iStack0000000000000088;
    _iStack0000000000000088 = plVar4;
    (**(code **)(lVar3 + 8))();
    plVar4 = _iStack0000000000000088;
  }
  _iStack0000000000000088 = plVar4;
  in_stack_00000008 = uStack0000000000000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0db0ca50;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e3e7160(&stack0x00000070);
  in_stack_00000140 = in_stack_000002b0;
  uStack0000000000000144 = in_stack_000002b4;
  func_0x048b0bc0(&stack0x00000088);
  func_0x0e3e6880(&stack0x00000070,CONCAT44(uStack0000000000000144,in_stack_00000140) + 0x18);
  if (iStack000000000000008c == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78) +
                      0x60);
    iVar2 = *piVar6;
    while (iVar2 != iStack0000000000000088) {
      piVar6 = piVar6 + 0x16;
      iVar2 = *piVar6;
    }
    lVar3 = *(long *)(piVar6 + 0xc);
    while (lVar3 != in_stack_00000078) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar3 = *(long *)(piVar6 + 0xc);
    }
  }
  else {
    if (iStack000000000000008c != 1) {
      if (iStack000000000000008c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0e3b5993;
    }
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack0000000000000084,uStack0000000000000080) + 0x78) +
                      0x48);
    iVar2 = *piVar6;
    while (iVar2 != iStack0000000000000088) {
      piVar6 = piVar6 + 0x1a;
      iVar2 = *piVar6;
    }
  }
  *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
LAB_0e3b5993:
  func_0x0e3e6e50(&stack0x00000070,&stack0x00000140,&UNK_012ffeae,0xd);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f493870;
  if (_iStack0000000000000088 != (long *)0x0) {
    lVar3 = *_iStack0000000000000088;
    _iStack0000000000000088 = puVar7;
    (**(code **)(lVar3 + 8))();
    puVar7 = _iStack0000000000000088;
  }
  _iStack0000000000000088 = puVar7;
  in_stack_00000008 = uStack0000000000000080;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = &UNK_0db0ca50;
  func_0x048b05a0(in_stack_00000078,&stack0x00000008);
  func_0x0e3e7160(&stack0x00000070);
  func_0x048b0bc0(&stack0x00000088);
  return;
}


