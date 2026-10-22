/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee06fa0 (ELF vaddr 0xed06fa0)
 * Label: callee-of:0x82e9c40
 * Body:  [[0ee06fa0, 0ee070c6]]
 * Ghidra: FUN_0ee06fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee06fa0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  char cStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_48 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar1 = _UNK_014290e0;
  *(ulong *)((long)puStack_48 + 0xe) = CONCAT62(_UNK_014290da,_DAT_014290d8);
  *(undefined8 *)((long)puStack_48 + 0x16) = uVar1;
  uVar1 = CONCAT26(_DAT_014290d8,_UNK_014290d2);
  *puStack_48 = _DAT_014290ca;
  puStack_48[1] = uVar1;
  *(undefined1 *)((long)puStack_48 + 0x1e) = 0;
  uStack_68 = _DAT_0f533eb0;
  uStack_60 = _UNK_0f533eb8;
  uStack_78 = _DAT_0f533ea0;
  uStack_70 = _UNK_0f533ea8;
  uStack_58 = 0x21;
  uStack_50 = 0x1e;
  uStack_3e = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  cStack_30 = '\x01';
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x0eee17a0(&uStack_98,&uStack_78,auStack_28,1);
  if ((cStack_30 == '\x01') && ((uStack_58 & 1) != 0)) {
    func_0x0412a280(puStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *(undefined8 *)(param_1 + 6) = uStack_90;
  *(undefined8 *)(param_1 + 8) = uStack_88;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}



/* ---- referenced strings ----
 * 0x14290ca  BinaryStream read() incomplete
 * 0x14290d8  ead() incomplete
 */
