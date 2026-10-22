/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6b13c0 (ELF vaddr 0xd5b13c0)
 * Label: callee-of:0xaf95f80
 * Body:  [[0d6b13c0, 0d6b15ce]]
 * Ghidra: FUN_0d6b13c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d6b13c0(long *param_1,ushort param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  ulong uVar15;
  ushort auStack_80 [4];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar9 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_50 = param_4[2];
  uStack_60 = *(undefined4 *)param_4;
  uStack_5c = *(undefined4 *)((long)param_4 + 4);
  uVar7 = *param_4;
  uStack_58 = *(undefined4 *)(param_4 + 1);
  uStack_54 = *(undefined4 *)((long)param_4 + 0xc);
  uVar8 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar13 = (ushort *)param_1[1];
  if (puVar13 < (ushort *)param_1[2]) {
    *puVar13 = param_2;
    *(undefined8 *)(puVar13 + 4) = uVar9;
    *(undefined8 *)(puVar13 + 8) = uVar2;
    *(undefined8 *)(puVar13 + 0xc) = uVar3;
    *(undefined8 *)(puVar13 + 0x10) = uVar7;
    *(undefined8 *)(puVar13 + 0x14) = uVar8;
    *(undefined8 *)(puVar13 + 0x18) = uStack_50;
    puVar13 = puVar13 + 0x1c;
  }
  else {
    lVar12 = (long)puVar13 - *param_1;
    uVar15 = (lVar12 >> 3) * 0x6db6db6db6db6db7 + 1;
    auStack_80[0] = param_2;
    uStack_78 = uVar9;
    uStack_70 = uVar2;
    uStack_68 = uVar3;
    if (0x492492492492492 < uVar15) {
      func_0x05d86990();
LAB_0d6b15aa:
      uVar9 = func_0x04882eb0();
      func_0x0d6b1630(auStack_80);
      func_0x05d546e0(&uStack_48);
      func_0x0eee2d70(uVar9);
      pcVar5 = (code *)swi(3);
      plVar10 = (long *)(*pcVar5)();
      return plVar10;
    }
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar11 * -0x2492492492492492;
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    if (0x249249249249248 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
      uVar15 = 0x492492492492492;
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      if (0x492492492492492 < uVar15) goto LAB_0d6b15aa;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar11 == 0) {
        func_0x0eec74c0(uVar15 * 0x38,0);
        lVar11 = 0;
      }
    }
    *(ushort *)(lVar11 + lVar12) = param_2;
    *(undefined8 *)(lVar11 + 8 + lVar12) = uVar9;
    *(undefined8 *)(lVar11 + 0x10 + lVar12) = uVar2;
    *(undefined8 *)(lVar11 + 0x18 + lVar12) = uVar3;
    puVar1 = (undefined4 *)(lVar11 + 0x20 + lVar12);
    *puVar1 = uStack_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    *(undefined8 *)(lVar11 + 0x30 + lVar12) = uStack_50;
    puVar13 = (ushort *)(lVar11 + 0x38 + lVar12);
    lVar14 = (*param_1 - param_1[1]) + lVar11 + lVar12;
    func_0x0d6b4470(*param_1,param_1[1],lVar14);
    lVar12 = *param_1;
    lVar4 = param_1[2];
    *param_1 = lVar14;
    param_1[1] = (long)puVar13;
    param_1[2] = uVar15 * 0x38 + lVar11;
    if (lVar12 != 0) {
      func_0x0412a280(lVar12,lVar4 - lVar12);
    }
  }
  param_1[1] = (long)puVar13;
  *(byte *)((long)param_1 + 0x4c) =
       (*(ushort *)(param_1 + 9) & param_2) != 0 | *(byte *)((long)param_1 + 0x4c) & 1;
  return param_1;
}


