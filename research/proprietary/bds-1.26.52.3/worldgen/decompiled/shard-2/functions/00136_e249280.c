/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe249280
 * Label: string:minecraft:biome_music
 * Body:  [[0e249280, 0e2493b6]]
 * Ghidra: FUN_0e249280
 */


undefined8
FUN_0e249280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            code *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  long lVar5;
  code *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000038;
  
  (*param_5)(param_1,param_2,0);
  lVar3 = func_0x0488e200();
  if (lVar3 != 0) {
    if (*(int *)(unaff_RBX + 4) != -0x10c6d3e1) {
      func_0x0e249500(&stack0x00000000);
      if ((in_stack_00000038 != 0) && ((byte)(in_stack_00000020._4_1_ - 1U) < 2)) {
        func_0x048b0900();
      }
      if (in_stack_00000018 != (code *)0x0) {
        (*in_stack_00000018)(&stack0x00000000);
      }
      if (in_stack_00000038 == 0) {
        return 0;
      }
    }
    if (*(char *)((long)unaff_RBX + 0x24) != '\x04') {
      puVar4 = (undefined8 *)*unaff_RBX;
      if (*(char *)((long)unaff_RBX + 0x24) == '\x02') {
        puVar4 = unaff_RBX;
      }
      if (puVar4 == (undefined8 *)0x0 || *(int *)(unaff_RBX + 4) != -0x10c6d3e1) {
        uVar1 = unaff_RBX[5];
        lVar5 = unaff_RBX[6];
        if (lVar5 == 0) {
          (*(code *)unaff_RBX[7])(0);
          lVar5 = unaff_RBX[6];
        }
        puVar4 = (undefined8 *)func_0x0488e200(uVar1,lVar5,0xef392c1f);
      }
      uVar2 = puVar4[1];
      if ((uVar2 >> 0x20 & 1) != 0) {
        uVar1 = *puVar4;
        *(int *)(lVar3 + 0x94) = (int)uVar1 + -0x80000000;
        *(int *)(lVar3 + 0x98) = (int)((ulong)uVar1 >> 0x20);
        *(int *)(lVar3 + 0x9c) = (int)uVar2;
        if (*(char *)(lVar3 + 0xa0) == '\0') {
          *(undefined1 *)(lVar3 + 0xa0) = 1;
          return 1;
        }
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


