/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd328aa0 (ELF vaddr 0xd228aa0)
 * Label: callee-of:0x61416e0
 * Body:  [[0d328aa0, 0d328b91] [0d328ba0, 0d328bf2]]
 * Ghidra: FUN_0d328aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d328aa0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar1 != 0) {
    func_0x049e9990(lVar1);
    FUN_0412a280(lVar1,0x60);
  }
  func_0x0d344dc0(param_1 + 0x2e);
  func_0x0d344ce0(param_1 + 0x27);
  puVar4 = (undefined8 *)param_1[0x24];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    plVar3 = (long *)puVar4[5];
    puVar4[5] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x78))();
    }
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      FUN_0412a280(puVar4[4],puVar4[2] & 0xfffffffffffffffe);
    }
    FUN_0412a280(puVar4,0x30);
    puVar4 = puVar2;
  }
  lVar1 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar1 != 0) {
    FUN_0412a280(lVar1,param_1[0x23] << 3);
  }
  func_0x0d3820d0(param_1 + 0x1a);
  func_0x0d3272d0(param_1 + 0x12);
  uVar5 = func_0x0d3826c0(param_1 + 5);
  puVar4 = (undefined8 *)param_1[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0d3465e0(puVar4 + 2);
    uVar5 = FUN_0412a280(puVar4,0x30);
    puVar4 = puVar2;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return uVar5;
  }
  if (lVar1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  }
  return uVar5;
}


