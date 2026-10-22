/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7b8060
 * Label: Biome::vslot0
 * Body:  [[0c7b8060, 0c7b816b] [0c7b8188, 0c7b8196] [0c7b81bf, 0c7b81d7]]
 * Ghidra: wg_Biome__vslot0
 */


void wg_Biome__vslot0(undefined8 param_1,uint *param_2)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined8 uVar2;
  ulong *unaff_R15;
  byte in_stack_00000018;
  
  DAT_aee8c78948fffffe = in_AL;
  uVar2 = func_0x04882e20(*param_2 | 0xf8,param_2 + 1);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(unaff_R15[2],*unaff_R15 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


