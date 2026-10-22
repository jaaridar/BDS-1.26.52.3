/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe43d670
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e43d670, 0e43d7eb]]
 * Ghidra: FUN_0e43d670
 */


ulong FUN_0e43d670(byte *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 *param_5)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 in_RAX;
  long lVar8;
  uint uVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  long lVar11;
  bool bVar12;
  undefined8 uStack0000000000000008;
  ulong uStack0000000000000018;
  code *pcStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined *puStack0000000000000040;
  long in_stack_00000048;
  uint in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 uStack0000000000000078;
  long in_stack_000000a8;
  uint in_stack_000000b0;
  char *pcVar7;
  
  *param_1 = *param_1 >> 1 | *param_1 << 7;
  bVar10 = (byte)((ulong)unaff_RBX >> 8);
  cVar5 = (byte)in_RAX + bVar10;
  pcVar7 = (char *)CONCAT71((int7)((ulong)in_RAX >> 8),cVar5);
  *pcVar7 = *pcVar7 + cVar5 + CARRY1((byte)in_RAX,bVar10);
  *pcVar7 = *pcVar7 + cVar5;
  pcVar7[-0x73] = pcVar7[-0x73] + param_4;
  uStack0000000000000018 = (ulong)((int)pcVar7 + 0xfdf0f47d);
  uStack0000000000000028 = 0x7890b7e7;
  pcStack0000000000000020 = (code *)0x0;
  uStack000000000000002c = 3;
  uStack0000000000000038 = 0;
  puStack0000000000000040 = &UNK_0c34cae0;
  uStack0000000000000078 = param_5[4];
  uStack0000000000000058 = *(undefined4 *)param_5;
  uStack000000000000005c = *(undefined4 *)((long)param_5 + 4);
  uStack0000000000000060 = *(undefined4 *)(param_5 + 1);
  uStack0000000000000064 = *(undefined4 *)((long)param_5 + 0xc);
  uStack0000000000000068 = param_5[2];
  uStack0000000000000070 = *(undefined4 *)(param_5 + 3);
  uStack0000000000000074 = *(undefined4 *)((long)param_5 + 0x1c);
  plVar4 = (long *)param_5[2];
  uStack0000000000000008 = param_3;
  uStack0000000000000030 = param_2;
  if (plVar4 == (long *)0x0) {
    uStack0000000000000068 = 0;
  }
  else {
    uStack0000000000000068 = (**(code **)(*plVar4 + 0x30))(plVar4,0);
  }
  func_0x0ed6d600(&stack0x00000048,*param_5);
  func_0x0ed75bc0(&stack0x00000000);
  uVar2 = *(uint *)(in_stack_00000048 + 0x2b0);
  bVar12 = uVar2 < in_stack_00000050;
  if (bVar12 || uVar2 == 0xffffffff) {
    uVar6 = 0xffff;
    lVar8 = in_stack_000000a8;
    uVar3 = in_stack_000000b0;
    uVar9 = in_stack_00000050;
  }
  else {
    lVar8 = (ulong)*(uint *)(in_stack_00000048 + 0x120) * 0x30 +
            *(long *)(in_stack_00000048 + 0x118);
    lVar11 = (ulong)*(uint *)(in_stack_00000048 + 0x120) * -0x30;
    do {
      if ((lVar11 == 0) || (*(uint *)(lVar8 + -8) < in_stack_00000050)) goto LAB_0e43d7cc;
      puVar1 = (ushort *)(lVar8 + -0x30);
      lVar8 = lVar8 + -0x30;
      lVar11 = lVar11 + 0x30;
    } while (((*puVar1 & 0xffbf) == 0) || ((*puVar1 & *(ushort *)(in_stack_00000048 + 0x2a8)) == 0))
    ;
    uVar6 = 0x40;
    uVar9 = 0xffffffff;
    lVar8 = in_stack_00000048;
    uVar3 = in_stack_00000050;
  }
  func_0x0ed6bc70(lVar8,uVar3,uVar9,uVar6);
LAB_0e43d7cc:
  if (pcStack0000000000000020 != (code *)0x0) {
    (*pcStack0000000000000020)(&stack0x00000008);
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar12 || uVar2 == 0xffffffff) & 0xffffffff;
}


