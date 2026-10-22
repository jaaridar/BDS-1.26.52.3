/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53597f0 (ELF vaddr 0x52597f0)
 * Label: string:minecraft:overworld
 * Body:  [[053597f0, 0535989b]]
 * Ghidra: FUN_053597f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_053597f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uStack_50;
  uint uStack_48;
  undefined1 uStack_38;
  undefined1 auStack_30 [24];
  
  lVar1 = *param_1;
  uStack_50 = 0x1300000142bedc;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_38 = 0;
  func_0x0eeb79f0(auStack_30,&uStack_50);
  if ((uStack_50 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uVar2 = func_0x05359ae0(**(undefined8 **)(lVar1 + 0x40),param_2);
  func_0x0eeb81b0(auStack_30);
  return uVar2;
}


