/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0200d0 (ELF vaddr 0xcf200d0)
 * Label: caller-of-seed
 * Body:  [[0d0200d0, 0d020256]]
 * Ghidra: FUN_0d0200d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0200d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
  *param_1 = &UNK_0f3c0738;
  *(undefined1 *)(param_1 + 0x75) = 2;
  *(undefined4 *)((long)param_1 + 300) = 0x3f000000;
  param_1[0x31] = (ulong)_DAT_011985b0;
  *(undefined4 *)(param_1 + 0x32) = 0x3ccccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e68d0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f79999a;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x21] = 0x8000;
  *(undefined1 *)((long)param_1 + 0x131) = 2;
  func_0x0c6b33d0(param_1,&UNK_0c6b3550,0,0);
  func_0x0c6b3570(param_1,&UNK_0c6b36f0,0,0);
  *param_1 = &UNK_0f435398;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 0x1e;
    puVar1 = (undefined8 *)((long)param_1 + 9);
  }
  else {
    param_1[2] = 0xf;
    puVar1 = (undefined8 *)param_1[3];
  }
  *(undefined8 *)((long)puVar1 + 7) = 0x786f4272656b6c75;
  *puVar1 = 0x7568732e656c6974;
  *(undefined1 *)((long)puVar1 + 0xf) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 0x19;
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f72b530;
  param_1[0x31] = _DAT_0f72b528;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f72b53c;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f72b534;
  lVar2 = func_0x0c64edf0(param_1);
  if (lVar2 != 0) {
    *(undefined **)(lVar2 + 8) = &UNK_0d020270;
  }
  return;
}


