/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3a39c0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__113unordered_mapImN11S
 * Body:  [[0e3a39c0, 0e3a39f4]]
 * Ghidra: FUN_0e3a39c0
 */


void FUN_0e3a39c0(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_RBX;
  undefined8 unaff_R14;
  
  func_0x048afca0((int)unaff_RBX + 0x70);
  lVar1 = *(long *)(unaff_RBX + 0x58);
  if (lVar1 != 0) {
    *(long *)(unaff_RBX + 0x60) = lVar1;
    func_0x0412a280(lVar1,*(long *)(unaff_RBX + 0x68) - lVar1);
    unaff_R14 = func_0x04882e20();
  }
  func_0x04882e20(unaff_R14);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


