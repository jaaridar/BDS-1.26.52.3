/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2430a0
 * Label: callee-of:0x4e2bb50
 * Body:  [[0d2430a0, 0d2430cf] [0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0d2430a0
 */


/* WARNING: Possible PIC construction at 0x0d243098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d24309d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2430a0(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long *unaff_RBX;
  undefined8 *puVar2;
  long unaff_R14;
  undefined8 uStack_8;
  
  if (unaff_R14 == 0) {
    param_1 = *unaff_RBX;
    *unaff_RBX = 0;
    if (param_1 == 0) {
      return in_RAX;
    }
    puVar2 = (undefined8 *)&stack0x00000018;
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = 0xd24309d;
  }
  *(undefined8 *)((long)puVar2 + -8) = in_RAX;
  if (param_1 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar2 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)puVar2 + -8);
}


