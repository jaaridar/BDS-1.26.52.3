/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc67fa90 (ELF vaddr 0xc57fa90)
 * Label: caller-of-seed
 * Body:  [[0c67fa90, 0c67fb82]]
 * Ghidra: FUN_0c67fa90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c67fa90(undefined8 *param_1)

{
  long lVar1;
  undefined4 in_R8D;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3b2390;
  *(undefined4 *)(param_1 + 0x75) = in_R8D;
  param_1[0x31] = _DAT_0f72b528;
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f72b530;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f72b534;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f72b53c;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0x200;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6cf060(param_1,0xf70e158);
  lVar1 = func_0x0c64edf0(param_1);
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 8) = &UNK_0c67fba0;
  }
  func_0x0c67fd60(param_1,&UNK_0c67fee0,0,0);
  func_0x0c67ff50(param_1,&UNK_0c6800d0,0,0);
  func_0x0c680130(param_1,&UNK_0c6802b0,0,0);
  return;
}


