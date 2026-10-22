/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee17a0 (ELF vaddr 0xede17a0)
 * Label: callee-of:0x8486630
 * Body:  [[0eee17a0, 0eee1861] [0eee1870, 0eee1962]]
 * Ghidra: FUN_0eee17a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee17a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_RBX;
  undefined8 unaff_R12;
  undefined8 *puVar12;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  
  uStack_58 = 0;
  if (param_4 != 0) {
    puStack_60 = param_1;
    if (0x333333333333333 < param_4) {
      uVar11 = func_0x0489af80();
      func_0x0489aef0(&puStack_60);
      uVar11 = func_0x0eee2d70(uVar11);
      func_0x048980a0(param_4);
      func_0x0489af90(&puStack_50);
      *(undefined8 *)(unaff_RBX + 8) = unaff_R12;
      func_0x0489aef0(&puStack_60);
      func_0x0eee2d70(uVar11);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar9 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_4 * 0x50);
    if (puVar9 == (undefined4 *)0x0) {
      FUN_0eec74c0(param_4 * 0x50,0);
    }
    *param_1 = puVar9;
    param_1[1] = puVar9;
    param_1[2] = puVar9 + param_4 * 0x14;
    ppuStack_48 = &puStack_68;
    ppuStack_40 = &puStack_70;
    uStack_38 = 0;
    if (param_2 != param_3) {
      puVar12 = param_2 + 7;
      puStack_68 = puVar9;
      puStack_50 = param_1;
      do {
        uVar2 = *(undefined4 *)(puVar12 + -7);
        uVar3 = *(undefined4 *)((long)puVar12 + -0x34);
        uVar4 = *(undefined4 *)(puVar12 + -6);
        uVar5 = *(undefined4 *)((long)puVar12 + -0x2c);
        uVar6 = *(undefined4 *)((long)puVar12 + -0x24);
        uVar7 = *(undefined4 *)(puVar12 + -4);
        uVar8 = *(undefined4 *)((long)puVar12 + -0x1c);
        puVar9[4] = *(undefined4 *)(puVar12 + -5);
        puVar9[5] = uVar6;
        puVar9[6] = uVar7;
        puVar9[7] = uVar8;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined1 *)(puVar9 + 0x12) = 0;
        puStack_70 = puVar9;
        if (*(char *)(puVar12 + 2) == '\x01') {
          if ((*(byte *)(puVar12 + -3) & 1) == 0) {
            *(undefined8 *)(puVar9 + 0xc) = puVar12[-1];
            uVar11 = puVar12[-2];
            *(undefined8 *)(puVar9 + 8) = puVar12[-3];
            *(undefined8 *)(puVar9 + 10) = uVar11;
          }
          else {
            func_0x0412e5e0(puVar9 + 8,puVar12[-1],puVar12[-2]);
          }
          *(undefined1 *)(puVar9 + 0x10) = *(undefined1 *)(puVar12 + 1);
          *(undefined8 *)(puVar9 + 0xe) = *puVar12;
          *(undefined1 *)(puVar9 + 0x12) = 1;
        }
        puVar9 = puStack_70 + 0x14;
        puVar10 = puVar12 + 3;
        puVar12 = puVar12 + 10;
      } while (puVar10 != param_3);
    }
    param_1[1] = puVar9;
  }
  return;
}


