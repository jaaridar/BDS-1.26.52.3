/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd065010 (ELF vaddr 0xcf65010)
 * Label: callee-of:0x5a1f120
 * Body:  [[0d065010, 0d065142]]
 * Ghidra: FUN_0d065010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d065010(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined8 *in_R8;
  ulong uVar7;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  func_0x0c6c7010();
  *param_1 = &UNK_0f4468f0;
  uVar1 = *in_R8;
  *in_R8 = 0;
  param_1[0x75] = uVar1;
  if ((DAT_0f55a0c8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f55a0c8), iVar2 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f55a0c0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f55a0c8);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    puVar6 = (ushort *)param_1[0xb];
    uStack_18 = CONCAT26(_DAT_0f55a0c0,(undefined6)uStack_18);
    lVar3 = (long)param_1[0xc] - (long)puVar6;
    if (lVar3 != 0) {
      uVar4 = lVar3 >> 1;
      do {
        uVar7 = ~(uVar4 >> 1) + uVar4;
        uVar5 = uVar4 & 0xfffffffffffffffe;
        uVar4 = uVar4 >> 1;
        if (*(ushort *)((long)puVar6 + uVar5) < _DAT_0f55a0c0) {
          puVar6 = (ushort *)((long)puVar6 + uVar5 + 2);
          uVar4 = uVar7;
        }
      } while (uVar4 != 0);
    }
    if ((puVar6 == (ushort *)param_1[0xc]) || (_DAT_0f55a0c0 < *puVar6)) {
      func_0x05cfc480(param_1 + 0xb,puVar6,(long)&uStack_18 + 6);
    }
  }
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0d065180(param_1,&UNK_0d065300,0,0);
  return;
}


