/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x535a740 (ELF vaddr 0x525a740)
 * Label: string:minecraft:overworld
 * Body:  [[0535a740, 0535a7eb]]
 * Ghidra: FUN_0535a740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0535a740(long *param_1,undefined8 param_2)

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
  FUN_0eeb79f0(auStack_30,&uStack_50);
  if ((uStack_50 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uVar2 = func_0x05359ae0(**(undefined8 **)(lVar1 + 0x40),param_2);
  func_0x0eeb81b0(auStack_30);
  return uVar2;
}


