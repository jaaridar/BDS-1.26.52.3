/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a02610
 * Label: string:ZNK24SpeleothemClusterFeature12_placeColumnER17IBlockWorldGe
 * Body:  [[04a02610, 04a02614] [04a02639, 04a0264a] [04a02650, 04a02672]]
 * Ghidra: FUN_04a02610
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_04a02610(void)

{
  long in_RAX;
  char in_CL;
  undefined8 unaff_RBX;
  undefined1 *unaff_R15;
  
  if (in_CL <= *(char *)(in_RAX + -0x75)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    unaff_RBX = func_0x0eee2d70(unaff_RBX);
    do {
      if ((unaff_R15[-0x20] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(unaff_R15 + -0x10),
                        *(ulong *)(unaff_R15 + -0x20) & 0xfffffffffffffffe);
      }
      unaff_R15 = unaff_R15 + -0x28;
    } while (unaff_R15 != &stack0x00000008);
  } while( true );
}


