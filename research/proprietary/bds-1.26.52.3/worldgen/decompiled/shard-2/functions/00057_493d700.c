/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493d700
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[0493d6cf, 0493d6fc] [0493d700, 0493d799]]
 * Ghidra: FUN_0493d700
 */


/* WARNING: Instruction at (ram,0x0493d702) overlaps instruction at (ram,0x0493d700)
    */

bool FUN_0493d700(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  long in_RAX;
  long lVar2;
  long unaff_RBX;
  ulong uVar3;
  ulong *unaff_R14;
  undefined8 unaff_retaddr;
  byte in_stack_00000008;
  
  uVar3 = (ulong)*param_2;
  while( true ) {
    if (in_RAX < (long)uVar3) {
      lVar2 = func_0x0417cc60();
      if (lVar2 < (long)uVar3) {
        func_0x0417cc60();
        func_0x0417cbd0();
        func_0x04136a70();
        func_0x0417cc60();
      }
      func_0x0417cc60();
    }
    uVar1 = *(uint *)(unaff_RBX + 0x70);
    if ((uVar1 & 4) != 0) goto LAB_0493d76e;
    lVar2 = func_0x0417cc60();
    if ((long)*unaff_R14 <= lVar2) break;
    in_RAX = func_0x0417cc60();
    uVar3 = *unaff_R14;
  }
  uVar1 = *(uint *)(unaff_RBX + 0x70);
LAB_0493d76e:
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412d6b0(unaff_retaddr);
  }
  return (uVar1 & 4) == 0;
}


