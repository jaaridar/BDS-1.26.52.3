/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee11d0 (ELF vaddr 0xede11d0)
 * Label: callee-of:0xc970460
 * Body:  [[0eee11d0, 0eee1227] [0eee1230, 0eee1360] [0eee2d60, 0eee2d65]]
 * Ghidra: FUN_0eee11d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee11d0(uint *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (DAT_0f7ba228 == '\0') {
    iVar6 = func_0x04108328(&DAT_0f7ba228);
    if (iVar6 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar8 + 0x10;
      _DAT_0f7ba1f8 = puVar8;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      _DAT_0f7ba210 = (long *)0x0;
      _DAT_0f7ba218 = (long *)0x0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      func_0x0eee2f40(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      func_0x0410844d(&DAT_0f7ba228);
    }
  }
  uVar2 = *param_1;
  FUN_0412d680(&DAT_0f7ba1d0);
  bVar4 = (byte)uVar2 & 0x3f;
  puVar1 = (ulong *)((long)_DAT_0f7ba1f8 +
                    (ulong)(uVar2 >> 3 & 0x78) + (ulong)(uVar2 >> 3 & 0x1fffff80));
  *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
  plVar5 = _DAT_0f7ba218;
  for (plVar7 = _DAT_0f7ba210; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    lVar3 = *(long *)(*plVar7 + 8);
    if ((ulong)uVar2 < (ulong)(*(long *)(*plVar7 + 0x10) - lVar3 >> 3)) {
      *(undefined8 *)(lVar3 + (ulong)uVar2 * 8) = 0;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(&DAT_0f7ba1d0);
  return;
}


