/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xccae530
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0ccae504, 0ccae51e] [0ccae520, 0ccae556]]
 * Ghidra: FUN_0ccae530
 */


/* WARNING: Possible PIC construction at 0x0ccae544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0ccae549) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ccae530(void)

{
  code *pcVar1;
  long in_RAX;
  long in_RCX;
  long *unaff_RBX;
  undefined8 *puVar2;
  long lVar3;
  long unaff_R14;
  undefined8 uStack_8;
  
  do {
    lVar3 = *(long *)(in_RAX + -0x18);
    if (lVar3 != 0) {
      *(long *)(in_RAX + -0x10) = lVar3;
      puVar2 = &uStack_8;
      uStack_8 = 0xccae549;
      in_RCX = in_RAX;
SUB_0412a280:
      *(long *)((long)puVar2 + -8) = in_RCX;
      if (lVar3 != 0) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)puVar2 + -0x10) = 0xee326ba;
        (*pcVar1)(&DAT_0f5463b0,lVar3);
      }
      return *(long *)((long)puVar2 + -8);
    }
    if (unaff_R14 == in_RCX) {
      lVar3 = *unaff_RBX;
      if (lVar3 == 0) {
        return in_RCX;
      }
      puVar2 = (undefined8 *)&stack0x00000018;
      goto SUB_0412a280;
    }
    unaff_RBX[2] = in_RCX + -0x18;
    in_RAX = in_RCX;
    in_RCX = in_RCX + -0x18;
  } while( true );
}


