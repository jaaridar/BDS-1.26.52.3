/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf96ea0 (ELF vaddr 0xce96ea0)
 * Label: caller-of-seed
 * Body:  [[0cf96ea0, 0cf9708f]]
 * Ghidra: FUN_0cf96ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf96ea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  ushort uStack_1a;
  
  lVar5 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar5 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar5));
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  *param_1 = &UNK_0f423488;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x3a9) = param_5;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e3f80;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  if ((DAT_0f55a0c8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f55a0c8), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f55a0c0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f55a0c8);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    uStack_1a = _DAT_0f55a0c0;
    puVar4 = (ushort *)param_1[0xb];
    lVar5 = (long)param_1[0xc] - (long)puVar4;
    if (lVar5 != 0) {
      uVar2 = lVar5 >> 1;
      do {
        uVar6 = ~(uVar2 >> 1) + uVar2;
        uVar3 = uVar2 & 0xfffffffffffffffe;
        uVar2 = uVar2 >> 1;
        if (*(ushort *)((long)puVar4 + uVar3) < _DAT_0f55a0c0) {
          puVar4 = (ushort *)((long)puVar4 + uVar3 + 2);
          uVar2 = uVar6;
        }
      } while (uVar2 != 0);
    }
    if ((puVar4 == (ushort *)param_1[0xc]) || (_DAT_0f55a0c0 < *puVar4)) {
      func_0x05cfc480(param_1 + 0xb,puVar4,&uStack_1a);
    }
  }
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  param_1[0x21] = 0x808;
  param_1[0x25] = _DAT_014e3550;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe97b;
  func_0x0cf970b0(param_1,&UNK_0cf97230,0,1);
  func_0x0cf972f0(param_1,&UNK_0cf97470,0,1);
  func_0x0cf97520(param_1,&UNK_0cf976a0,0,0);
  return;
}


