/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd03d620 (ELF vaddr 0xcf3d620)
 * Label: caller-of-seed
 * Body:  [[0d03d620, 0d03d7c5]]
 * Ghidra: FUN_0d03d620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d03d620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 in_RAX;
  ulong uVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_18;
  
  lVar5 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar5 = 8;
  }
  uStack_18 = in_RAX;
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar5));
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  *param_1 = &UNK_0f43c430;
  if ((DAT_0f707bf0 == '\0') && (iVar1 = func_0x04108328(&DAT_0f707bf0), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f707be8 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f707bf0);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    puVar4 = (ushort *)param_1[0xb];
    uStack_18._0_4_ = CONCAT22(_DAT_0f707be8,(undefined2)uStack_18);
    lVar5 = (long)param_1[0xc] - (long)puVar4;
    if (lVar5 != 0) {
      uVar2 = lVar5 >> 1;
      do {
        uVar6 = ~(uVar2 >> 1) + uVar2;
        uVar3 = uVar2 & 0xfffffffffffffffe;
        uVar2 = uVar2 >> 1;
        if (*(ushort *)((long)puVar4 + uVar3) < _DAT_0f707be8) {
          puVar4 = (ushort *)((long)puVar4 + uVar3 + 2);
          uVar2 = uVar6;
        }
      } while (uVar2 != 0);
    }
    if ((puVar4 == (ushort *)param_1[0xc]) || (_DAT_0f707be8 < *puVar4)) {
      func_0x05cfc480(param_1 + 0xb,puVar4,(long)&uStack_18 + 2);
    }
  }
  uStack_18 = CONCAT44(0x834,(undefined4)uStack_18);
  if ((DAT_0f559fd0 == '\0') && (iVar1 = func_0x04108328(&DAT_0f559fd0), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f559fc8 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f559fd0);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    uStack_18 = CONCAT62(uStack_18._2_6_,_DAT_0f559fc8);
    func_0x0c673e90(param_1 + 5,&uStack_18,&UNK_0ce6b9c0,(long)&uStack_18 + 4);
  }
  return;
}


