/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee1380 (ELF vaddr 0xede1380)
 * Label: callee-of:0xc972b00
 * Body:  [[0eee1380, 0eee1490]]
 * Ghidra: FUN_0eee1380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0eee1380(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_0f7ba228 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f7ba228);
    if (iVar1 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar2 + 0x10;
      _DAT_0f7ba1f8 = puVar2;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      _DAT_0f7ba210 = 0;
      _DAT_0f7ba218 = 0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      func_0x0eee2f40(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      func_0x0410844d(&DAT_0f7ba228);
    }
  }
  puVar2 = (undefined8 *)func_0x0eee14b0(*param_1);
  return *puVar2;
}


