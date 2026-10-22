/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7af270
 * Label: callee-of:0xda370f0
 * Body:  [[0e7af270, 0e7af2c3]]
 * Ghidra: FUN_0e7af270
 */


/* WARNING: This function may have set the stack pointer */

void FUN_0e7af270(void)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  undefined8 uVar2;
  undefined8 in_MM1;
  
  psadbw(in_MM1,*(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + -0x73));
  *unaff_RBX = *unaff_RBX >> 0x10 | *unaff_RBX << 0x10;
  uRam000000000000e01c = 0xe7af287;
  uVar2 = func_0x04882e20();
  uRam000000000000e01c = 0xe7af294;
  func_0x048afca0(0xe094);
  if (lRam000000000000e07c != 0) {
    lRam000000000000e084 = lRam000000000000e07c;
    uRam000000000000e01c = 0xe7af2b0;
    func_0x0412a280(lRam000000000000e07c,lRam000000000000e08c - lRam000000000000e07c);
    uRam000000000000e01c = 0xe7af2b8;
    uVar2 = func_0x04882e20(uVar2);
  }
  uRam000000000000e01c = 0xe7af2c3;
  func_0x04882e20(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


