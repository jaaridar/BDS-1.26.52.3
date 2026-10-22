/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533f400 (ELF vaddr 0x523f400)
 * Label: callee-of:0x5254ab0
 * Body:  [[0533f400, 0533f426] [0533f430, 0533f50c] [0533f510, 0533f563]]
 * Ghidra: FUN_0533f400
 */


void FUN_0533f400(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *in_RAX;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puStack_38;
  
  if (param_2 != param_3) {
    puVar15 = (undefined1 *)(param_4 + 0x20);
    lVar13 = param_2 + 0x10;
    puStack_38 = in_RAX;
    do {
      *(undefined4 *)(puVar15 + -0x18) = *(undefined4 *)(lVar13 + -8);
      *(undefined8 *)(puVar15 + -0x20) = *(undefined8 *)(lVar13 + -0x10);
      puVar15[-0x10] = 0;
      *(undefined4 *)(puVar15 + -8) = 0xffffffff;
      uVar1 = *(uint *)(lVar13 + 8);
      if ((ulong)uVar1 != 0xffffffff) {
        puStack_38 = puVar15 + -0x10;
        (**(code **)(&UNK_0efa3790 + (ulong)uVar1 * 8))(&puStack_38,lVar13);
        *(uint *)(puVar15 + -8) = uVar1;
      }
      *puVar15 = 0;
      *(undefined4 *)(puVar15 + 8) = 0xffffffff;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if ((ulong)uVar1 != 0xffffffff) {
        puStack_38 = puVar15;
        (**(code **)(&UNK_0efa3790 + (ulong)uVar1 * 8))(&puStack_38,lVar13 + 0x10);
        *(uint *)(puVar15 + 8) = uVar1;
      }
      *(undefined **)(puVar15 + 0x10) = &UNK_0efa53a0;
      uVar2 = *(undefined4 *)(lVar13 + 0x2c);
      uVar3 = *(undefined4 *)(lVar13 + 0x30);
      uVar4 = *(undefined4 *)(lVar13 + 0x34);
      uVar5 = *(undefined4 *)(lVar13 + 0x38);
      uVar6 = *(undefined4 *)(lVar13 + 0x3c);
      uVar7 = *(undefined4 *)(lVar13 + 0x40);
      uVar8 = *(undefined4 *)(lVar13 + 0x44);
      uVar9 = *(undefined4 *)(lVar13 + 0x44);
      uVar10 = *(undefined4 *)(lVar13 + 0x48);
      uVar11 = *(undefined4 *)(lVar13 + 0x4c);
      uVar12 = *(undefined4 *)(lVar13 + 0x50);
      *(undefined4 *)(puVar15 + 0x18) = *(undefined4 *)(lVar13 + 0x28);
      *(undefined4 *)(puVar15 + 0x1c) = uVar2;
      *(undefined4 *)(puVar15 + 0x20) = uVar3;
      *(undefined4 *)(puVar15 + 0x24) = uVar4;
      *(undefined4 *)(puVar15 + 0x28) = uVar5;
      *(undefined4 *)(puVar15 + 0x2c) = uVar6;
      *(undefined4 *)(puVar15 + 0x30) = uVar7;
      *(undefined4 *)(puVar15 + 0x34) = uVar8;
      *(undefined4 *)(puVar15 + 0x34) = uVar9;
      *(undefined4 *)(puVar15 + 0x38) = uVar10;
      *(undefined4 *)(puVar15 + 0x3c) = uVar11;
      *(undefined4 *)(puVar15 + 0x40) = uVar12;
      puVar15 = puVar15 + 0x68;
      lVar14 = lVar13 + 0x58;
      lVar13 = lVar13 + 0x68;
    } while (lVar14 != param_3);
    do {
      if ((ulong)*(uint *)(param_2 + 0x28) != 0xffffffff) {
        (**(code **)(&UNK_0efa3780 + (ulong)*(uint *)(param_2 + 0x28) * 8))
                  (&puStack_38,param_2 + 0x20);
      }
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
      if ((ulong)*(uint *)(param_2 + 0x18) != 0xffffffff) {
        (**(code **)(&UNK_0efa3780 + (ulong)*(uint *)(param_2 + 0x18) * 8))
                  (&puStack_38,param_2 + 0x10);
      }
      *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
      param_2 = param_2 + 0x68;
    } while (param_2 != param_3);
  }
  return;
}


