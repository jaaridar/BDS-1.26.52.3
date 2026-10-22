/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afca0 (ELF vaddr 0x47afca0)
 * Label: callee-of:0x871a310
 * Body:  [[048afca0, 048afcbd] [048afcc0, 048afd0f]]
 * Ghidra: FUN_048afca0
 */


/* WARNING: Possible PIC construction at 0x048afceb: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x048afcf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048afca0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX;
  }
  lVar4 = param_1[1];
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    do {
      in_RAX = 0;
      if (*(code **)(lVar4 + -0x10) != (code *)0x0) {
        uStack_20 = 0x48afcd8;
        in_RAX = (**(code **)(lVar4 + -0x10))(lVar4 + -0x28);
      }
      if ((*(byte *)(lVar4 + -0x48) & 1) != 0) {
        lVar3 = *(long *)(lVar4 + -0x38);
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x48afcf0;
        goto SUB_0412a280;
      }
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != lVar1);
    lVar3 = *param_1;
  }
  param_1[1] = lVar1;
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


