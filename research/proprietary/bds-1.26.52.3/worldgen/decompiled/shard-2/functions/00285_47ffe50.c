/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ffe50 (ELF vaddr 0x47ffe50)
 * Label: callee-of:0xd1cf130
 * Body:  [[048ffe50, 048ffe99] [048ffea0, 048fff21] [048fff30, 048fff91]]
 * Ghidra: FUN_048ffe50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048ffe50(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  *param_1 = &UNK_0ef474c0;
  puVar2 = (undefined8 *)param_1[0x25];
  if ((ulong)*(uint *)(param_1 + 0x26) != 0) {
    lVar1 = (ulong)*(uint *)(param_1 + 0x26) * 0x30;
    puVar2 = puVar2 + 1;
    do {
      if ((ulong)*(uint *)(puVar2 + 1) != 0xffffffff) {
        (**(code **)(&UNK_0ef452b0 + (ulong)*(uint *)(puVar2 + 1) * 8))(&uStack_32,puVar2);
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
        (**(code **)(&UNK_0ef452b0 + (ulong)*(uint *)(puVar2 + 1) * 8))(&uStack_31,puVar2);
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


