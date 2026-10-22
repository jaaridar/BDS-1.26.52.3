/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e2dd0 (ELF vaddr 0xc5e2dd0)
 * Label: callee-of:0xc5cc550
 * Body:  [[0c6e2dd0, 0c6e2e05] [0c6e2e10, 0c6e2f29]]
 * Ghidra: FUN_0c6e2dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0c6e2dd0(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint7 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((DAT_0f559f78 == '\0') && (iVar4 = func_0x04108328(&DAT_0f559f78), iVar4 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f559f70 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    FUN_0410844d(&DAT_0f559f78);
  }
  lVar7 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  uVar5 = (uint7)((ulong)lVar3 >> 8);
  if (lVar3 - lVar7 != 0) {
    lVar6 = lVar3;
    uVar8 = lVar3 - lVar7 >> 1;
    do {
      while( true ) {
        uVar10 = uVar8 >> 1;
        lVar1 = lVar7 + (uVar8 & 0xfffffffffffffffe);
        uVar2 = *(ushort *)(lVar7 + (uVar8 & 0xfffffffffffffffe));
        if (uVar2 < _DAT_0f559f70) break;
        if (uVar2 <= _DAT_0f559f70) {
          if (uVar8 != 1) {
            uVar8 = (long)uVar8 >> 1;
            do {
              uVar11 = ~(uVar8 >> 1) + uVar8;
              uVar10 = uVar8 & 0xfffffffffffffffe;
              uVar8 = uVar8 >> 1;
              if (*(ushort *)(lVar7 + uVar10) < _DAT_0f559f70) {
                lVar7 = lVar7 + 2 + uVar10;
                uVar8 = uVar11;
              }
            } while (uVar8 != 0);
          }
          lVar9 = lVar6 - (lVar1 + 2);
          if (lVar9 != 0) {
            uVar8 = lVar9 >> 1;
            lVar6 = lVar1 + 2;
            do {
              uVar10 = uVar8 >> 1;
              uVar11 = uVar8 & 0xfffffffffffffffe;
              uVar8 = ~uVar10 + uVar8;
              lVar1 = lVar6 + 2 + uVar11;
              if (_DAT_0f559f70 < *(ushort *)(lVar6 + uVar11)) {
                uVar8 = uVar10;
                lVar1 = lVar6;
              }
              lVar6 = lVar1;
            } while (uVar8 != 0);
          }
          if (lVar7 != lVar6) {
            return CONCAT71(uVar5,lVar7 != lVar3);
          }
          goto LAB_0c6e2eda;
        }
        lVar6 = lVar1;
        uVar8 = uVar10;
        if (uVar10 == 0) goto LAB_0c6e2eda;
      }
      lVar7 = lVar1 + 2;
      uVar8 = ~uVar10 + uVar8;
    } while (uVar8 != 0);
  }
LAB_0c6e2eda:
  return (ulong)uVar5 << 8;
}


