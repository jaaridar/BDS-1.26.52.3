/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd88e390 (ELF vaddr 0xd78e390)
 * Label: callee-of:0x61416e0
 * Body:  [[0d88e390, 0d88e513]]
 * Ghidra: FUN_0d88e390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d88e390(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  uVar4 = param_2[1];
  if ((uVar4 >> 0x37 & 1) != 0) {
    lVar1 = *(long *)((uVar4 & 0xff00ffffffffffff) - 8);
    lVar3 = lVar1 + 9;
    plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar3,8);
    if (plVar2 == (long *)0x0 && lVar3 != 0) {
      func_0x0eec74c0(lVar3,8);
    }
    *plVar2 = lVar1;
    func_0x0eee2f00(plVar2 + 1,uVar4 & 0xff00ffffffffffff,lVar1);
    *(undefined1 *)((long)plVar2 + lVar1 + 8) = 0;
    uVar4 = (ulong)(plVar2 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[1] = uVar4;
  param_1[2] = 0;
  uVar4 = param_2[2];
  if ((uVar4 & 0x80000000000000) != 0) {
    lVar3 = *(long *)((uVar4 & 0xff00ffffffffffff) - 8);
    lVar1 = lVar3 + 9;
    plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
    if (lVar1 != 0 && plVar2 == (long *)0x0) {
      func_0x0eec74c0(lVar1,8);
    }
    *plVar2 = lVar3;
    func_0x0eee2f00(plVar2 + 1,uVar4 & 0xff00ffffffffffff,lVar3);
    *(undefined1 *)((long)plVar2 + lVar3 + 8) = 0;
    uVar4 = (ulong)(plVar2 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}


