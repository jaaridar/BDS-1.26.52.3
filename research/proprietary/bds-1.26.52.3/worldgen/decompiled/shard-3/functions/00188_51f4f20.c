/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f4f20 (ELF vaddr 0x51f4f20)
 * Label: callee-of:0x51f40e0
 * Body:  [[052f4f20, 052f4fc7]]
 * Ghidra: FUN_052f4f20
 */


/* WARNING: Possible PIC construction at 0x052f4f41: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052f4f76: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052f4fa8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052f4f20(long *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_10;
  
  lVar2 = param_1[0x11];
  if (lVar2 == 0) {
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
      param_1[0xf] = lVar2;
      uStack_10 = 0x52f4f62;
      in_RAX = func_0x0412a280(lVar2,param_1[0x10] - lVar2);
    }
    lVar2 = param_1[10];
    if (lVar2 == 0) {
      lVar2 = param_1[7];
      if (lVar2 != 0) {
        param_1[8] = lVar2;
        uStack_10 = 0x52f4f94;
        in_RAX = func_0x0412a280(lVar2,param_1[9] - lVar2);
      }
      lVar2 = param_1[3];
      if (lVar2 == 0) {
        lVar2 = *param_1;
        if (lVar2 == 0) {
          return in_RAX;
        }
        param_1[1] = lVar2;
      }
      else {
        param_1[4] = lVar2;
        register0x00000020 = (BADSPACEBASE *)&uStack_10;
        uStack_10 = 0x52f4fad;
      }
    }
    else {
      param_1[0xb] = lVar2;
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x52f4f7b;
    }
  }
  else {
    param_1[0x12] = lVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x52f4f46;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


