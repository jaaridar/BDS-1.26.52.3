/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd059430 (ELF vaddr 0xcf59430)
 * Label: caller-of-seed
 * Body:  [[0d059430, 0d05953b]]
 * Ghidra: FUN_0d059430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d059430(undefined8 *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  func_0x0c6c7010();
  *param_1 = &UNK_0f441c90;
  *(undefined1 *)((long)param_1 + 0x132) = 7;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x136) = 1;
  param_1[0x21] = 0;
  if ((DAT_0f55a0c8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f55a0c8), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f55a0c0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f55a0c8);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    puVar5 = (ushort *)param_1[0xb];
    uStack_18 = CONCAT26(_DAT_0f55a0c0,(undefined6)uStack_18);
    lVar2 = (long)param_1[0xc] - (long)puVar5;
    if (lVar2 != 0) {
      uVar3 = lVar2 >> 1;
      do {
        uVar6 = ~(uVar3 >> 1) + uVar3;
        uVar4 = uVar3 & 0xfffffffffffffffe;
        uVar3 = uVar3 >> 1;
        if (*(ushort *)((long)puVar5 + uVar4) < _DAT_0f55a0c0) {
          puVar5 = (ushort *)((long)puVar5 + uVar4 + 2);
          uVar3 = uVar6;
        }
      } while (uVar3 != 0);
    }
    if ((puVar5 == (ushort *)param_1[0xc]) || (_DAT_0f55a0c0 < *puVar5)) {
      func_0x05cfc480(param_1 + 0xb,puVar5,(long)&uStack_18 + 6);
    }
  }
  lVar2 = func_0x0d059550(param_1,&UNK_0d0596d0,0,0);
  *(undefined1 *)(lVar2 + 0x60) = 0;
  return;
}


