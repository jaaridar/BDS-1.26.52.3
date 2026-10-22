/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4885120 (ELF vaddr 0x4785120)
 * Label: callee-of:0xcd3eb90
 * Body:  [[04885120, 04885259]]
 * Ghidra: FUN_04885120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_04885120(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar7) {
    uVar2 = param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(uVar2,param_2,param_3);
    }
  }
  else {
    if (-uVar7 - 9 < (param_3 - uVar7) + 1) {
      func_0x04882e30();
      pcVar1 = (code *)swi(3);
      puVar3 = (ulong *)(*pcVar1)();
      return puVar3;
    }
    if ((*param_1 & 1) == 0) {
      uVar5 = (long)param_1 + 1;
    }
    else {
      uVar5 = param_1[2];
    }
    uVar6 = 0xfffffffffffffff7;
    if (uVar7 - 1 < 0x7ffffffffffffff3) {
      uVar2 = (uVar7 - 1) * 2;
      if (uVar2 < param_3) {
        uVar2 = param_3;
      }
      uVar4 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        uVar4 = (uVar2 | 7) + 1;
      }
      uVar6 = 0x17;
      if (0x16 < uVar2) {
        uVar6 = uVar4;
      }
    }
    uVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (uVar6 != 0 && uVar2 == 0) {
      func_0x0eec74c0(uVar6,0);
    }
    if (param_3 != 0) {
      func_0x0eee2f00(uVar2,param_2,param_3);
    }
    func_0x0412a280(uVar5,uVar7);
    param_1[2] = uVar2;
    *param_1 = uVar6 | 1;
    param_1[1] = param_3;
  }
  *(undefined1 *)(uVar2 + param_3) = 0;
  return param_1;
}


