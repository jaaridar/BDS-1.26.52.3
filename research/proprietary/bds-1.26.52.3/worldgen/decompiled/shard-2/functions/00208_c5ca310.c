/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca310
 * Label: JigsawBlock::vslot7
 * Body:  [[0c5ca310, 0c5ca359]]
 * Ghidra: wg_JigsawBlock__vslot7
 */


/* WARNING: Possible PIC construction at 0x0c5ca320: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot7(void)

{
  code *pcVar1;
  undefined *in_RAX;
  byte *in_RCX;
  undefined8 *unaff_RBX;
  undefined8 *puVar2;
  undefined8 uStack_8;
  
  *in_RCX = *in_RCX ^ (byte)in_RAX;
  if (*in_RCX == 0) {
    in_RAX = &UNK_0f38cd68;
    *unaff_RBX = &UNK_0f38cd68;
    if ((*(char *)(unaff_RBX + 5) == '\x01') && ((*(byte *)(unaff_RBX + 2) & 1) != 0)) {
      uStack_8 = 0xc5ca34c;
      in_RAX = (undefined *)func_0x0412a280(unaff_RBX[4],unaff_RBX[2] & 0xfffffffffffffffe);
    }
    puVar2 = (undefined8 *)&stack0x00000008;
  }
  else {
    unaff_RBX = (undefined8 *)unaff_RBX[8];
    puVar2 = &uStack_8;
    uStack_8 = 0xc5ca325;
  }
  *(undefined **)((long)puVar2 + -8) = in_RAX;
  if (unaff_RBX != (undefined8 *)0x0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)puVar2 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,unaff_RBX);
  }
  return *(undefined8 *)((long)puVar2 + -8);
}


