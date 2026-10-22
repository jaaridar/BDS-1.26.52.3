/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5d3c90 (ELF vaddr 0xd4d3c90)
 * Label: callee-of:0x61416e0
 * Body:  [[0d5d3c90, 0d5d3dfc]]
 * Ghidra: FUN_0d5d3c90
 */


void FUN_0d5d3c90(long *param_1,ulong param_2,char *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar8 = param_1[2] << 6;
    if (uVar8 < param_2) {
      lStack_38 = 0;
      lStack_30 = 0;
      lStack_28 = 0;
      if ((long)param_2 < 0) {
        uVar7 = func_0x048acb40();
        if (lStack_38 != 0) {
          func_0x0412a280(lStack_38,lStack_28 << 3);
        }
        func_0x0eee2d70(uVar7);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 < 0x3fffffffffffffff) {
        uVar6 = param_1[2] << 7;
        uVar8 = param_2 + 0x3f & 0xffffffffffffffc0;
        if (uVar8 < uVar6) {
          uVar8 = uVar6;
        }
      }
      else {
        uVar8 = 0x7fffffffffffffff;
      }
      func_0x048ac710(&lStack_38,uVar8);
      lVar2 = *param_1;
      *param_1 = lStack_38;
      lVar3 = param_1[2];
      lStack_30 = param_1[1];
      lVar5 = param_1[2];
      param_1[1] = param_2;
      param_1[2] = lStack_28;
      lStack_38 = lVar2;
      lStack_28 = lVar5;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,lVar3 << 3);
      }
    }
    else {
      param_1[1] = param_2;
    }
    lVar2 = *param_1;
    uVar8 = param_2 >> 6;
    if (*param_3 == '\x01') {
      if (0x3f < param_2) {
        func_0x0eee2dd0(lVar2,0xff,uVar8 * 8);
      }
      if ((param_2 & 0x3f) != 0) {
        puVar1 = (ulong *)(lVar2 + uVar8 * 8);
        *puVar1 = *puVar1 | 0xffffffffffffffffU >> (-(char)(param_2 & 0x3f) & 0x3fU);
      }
    }
    else {
      if (0x3f < param_2) {
        func_0x0eee2dd0(lVar2,0,uVar8 * 8);
      }
      if ((param_2 & 0x3f) != 0) {
        puVar1 = (ulong *)(lVar2 + uVar8 * 8);
        *puVar1 = *puVar1 & ~(0xffffffffffffffffU >> (-(char)(param_2 & 0x3f) & 0x3fU));
      }
    }
  }
  return;
}


