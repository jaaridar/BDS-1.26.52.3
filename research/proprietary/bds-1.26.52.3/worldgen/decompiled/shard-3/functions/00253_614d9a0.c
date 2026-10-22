/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624d9a0 (ELF vaddr 0x614d9a0)
 * Label: callee-of:0x6146460
 * Body:  [[0624d9a0, 0624da4e] [0624da50, 0624daa0]]
 * Ghidra: FUN_0624d9a0
 */


/* WARNING: Possible PIC construction at 0x0624da7a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0624da7f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0624d9a0(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined4 uStack_54;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  uStack_60 = 0x624d9d3;
  uStack_54 = param_3;
  plStack_50 = param_1;
  lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (lVar2 == 0) {
    uStack_60 = 0x624da9c;
    func_0x0eec74c0(0x88,0);
  }
  lVar5 = *param_4;
  lVar4 = param_4[1];
  lStack_38 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uStack_60 = 0x624da21;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x05d80b70(lVar2,param_2,uStack_54,&lStack_48);
  *plStack_50 = lVar2;
  if (lVar5 == 0) {
    return plStack_50;
  }
  do {
    plVar3 = plStack_50;
    if (lVar5 == lVar4) {
SUB_0412a280:
      *(long **)((long)register0x00000020 + -8) = plVar3;
      if (lVar5 != 0) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar1)(&DAT_0f5463b0,lVar5);
      }
      return *(long **)((long)register0x00000020 + -8);
    }
    lVar2 = *(long *)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (lVar2 != 0) {
      uStack_60 = 0x624da72;
      plVar3 = (long *)func_0x0cadbac0(lVar2);
      register0x00000020 = (BADSPACEBASE *)&uStack_60;
      uStack_60 = 0x624da7f;
      lVar5 = lVar2;
      goto SUB_0412a280;
    }
    lVar4 = lVar4 + -8;
  } while( true );
}


