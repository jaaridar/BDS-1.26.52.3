/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48e65b0 (ELF vaddr 0x47e65b0)
 * Label: callee-of:0x82eb2d0
 * Body:  [[048e65b0, 048e66ae]]
 * Ghidra: FUN_048e65b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048e65b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  
  *param_1 = &UNK_0ef47258;
  param_1[0x70] = &UNK_0ef473d8;
  func_0x0eee2e20(param_1[0x80]);
  if (param_1[0x7f] != 0) {
    func_0x0412a280(param_1[0x7f],1);
  }
  func_0x0eee2e20(param_1[0x77]);
  if (param_1[0x76] != 0) {
    func_0x0412a280(param_1[0x76],1);
  }
  lVar1 = param_1[0x72];
  if (lVar1 != 0) {
    param_1[0x73] = lVar1;
    func_0x0412a280(lVar1,param_1[0x74] - lVar1);
  }
  param_1[0x5b] = &UNK_0ef472c8;
  func_0x0eee2e20(param_1[0x6b]);
  if (param_1[0x6a] != 0) {
    func_0x0412a280(param_1[0x6a],1);
  }
  uStack_38 = func_0x0eee2e20(param_1[0x62]);
  if (param_1[0x61] != 0) {
    uStack_38 = func_0x0412a280(param_1[0x61],1);
  }
  lVar1 = param_1[0x5d];
  if (lVar1 != 0) {
    param_1[0x5e] = lVar1;
    uStack_38 = func_0x0412a280(lVar1,param_1[0x5f] - lVar1);
  }
  *param_1 = &UNK_0ef474c0;
  puVar2 = (undefined8 *)param_1[0x25];
  if ((ulong)*(uint *)(param_1 + 0x26) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x26) * 0x30;
    puVar2 = puVar2 + 1;
    do {
      if ((ulong)*(uint *)(puVar2 + 1) != 0xffffffff) {
        (**(code **)(&UNK_0ef452b0 + (ulong)*(uint *)(puVar2 + 1) * 8))((long)&uStack_38 + 6,puVar2)
        ;
      }
      *(undefined4 *)(puVar2 + 1) = 0xffffffff;
      puVar2 = puVar2 + 6;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
    puVar2 = (undefined8 *)param_1[0x25];
  }
  if (puVar2 != (undefined8 *)0x0 && param_1 + 0x27 != puVar2) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar2);
  }
  puVar2 = (undefined8 *)param_1[3];
  if ((ulong)*(uint *)(param_1 + 4) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 4) << 5;
    puVar2 = puVar2 + 1;
    do {
      if ((ulong)*(uint *)(puVar2 + 1) != 0xffffffff) {
        (**(code **)(&UNK_0ef452b0 + (ulong)*(uint *)(puVar2 + 1) * 8))((long)&uStack_38 + 7,puVar2)
        ;
      }
      *(undefined4 *)(puVar2 + 1) = 0xffffffff;
      puVar2 = puVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
    puVar2 = (undefined8 *)param_1[3];
  }
  if (puVar2 != (undefined8 *)0x0 && param_1 + 5 != puVar2) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar2);
  }
  return;
}


