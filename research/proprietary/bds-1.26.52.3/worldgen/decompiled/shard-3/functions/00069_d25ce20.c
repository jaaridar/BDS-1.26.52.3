/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd25ce20
 * Label: string:minecraft:jigsaw_structure_metadata
 * Body:  [[0d25ce20, 0d25cf1f]]
 * Ghidra: FUN_0d25ce20
 */


void FUN_0d25ce20(void)

{
  bool bVar1;
  char cVar2;
  long in_RAX;
  undefined1 *puVar3;
  undefined8 *unaff_RBX;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  uint in_stack_00000008;
  undefined1 *in_stack_00000010;
  
  cVar2 = (**(code **)(in_RAX + 0xa8))();
  if (cVar2 == '\0') {
    *unaff_RBX = 0;
    goto LAB_0d25cef7;
  }
  if ((unaff_retaddr & 1) == 0) {
    in_stack_00000008 = (uint)(unaff_retaddr >> 1);
    if (0xe0000000 < in_stack_00000008 + 0xe0000000) goto LAB_0d25ce4e;
LAB_0d25ce78:
    bVar1 = true;
    in_stack_00000008 = 0x800;
    puVar3 = &stack0x00000041;
  }
  else {
    if (in_stack_00000008 + 0xe0000000 < 0xe0000001) goto LAB_0d25ce78;
LAB_0d25ce4e:
    puVar3 = in_stack_00000010;
    if ((unaff_retaddr & 1) == 0) {
      puVar3 = &stack0x00000001;
    }
    in_stack_00000008 = in_stack_00000008 << 3;
    bVar1 = false;
  }
  func_0x0d6c71b0();
  if ((bVar1) && (0x800 < in_stack_00000008)) {
    func_0x0d6e4220(puVar3,&UNK_013a4121,0x87);
  }
LAB_0d25cef7:
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return;
}


