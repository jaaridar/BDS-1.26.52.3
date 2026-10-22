/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286720 (ELF vaddr 0x5186720)
 * Label: callee-of:0x5186800
 * Body:  [[05286720, 052867fb]]
 * Ghidra: FUN_05286720
 */


/* WARNING: Possible PIC construction at 0x0528675a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052867c2: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05286720(long param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0xa90) != '\x01') {
    return in_RAX;
  }
  uStack_10 = 0x528673d;
  uVar2 = FUN_0495d8f0(param_1 + 0x718);
  lVar3 = *(long *)(param_1 + 0x6f8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x6d0);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x6d8) = lVar3;
      uStack_10 = 0x5286781;
      func_0x0412a280(lVar3,*(long *)(param_1 + 0x6e0) - lVar3);
    }
    uStack_10 = 0x528678d;
    func_0x052930f0(param_1 + 0x5d0);
    uStack_10 = 0x5286799;
    func_0x052931e0(param_1 + 0x4f0);
    uStack_10 = 0x52867a5;
    func_0x052932d0(param_1 + 0x3f8);
    uStack_10 = 0x52867ae;
    uVar2 = func_0x052933c0(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x38) = lVar3;
        uStack_10 = 0x52867e0;
        uVar2 = func_0x0412a280(lVar3,*(long *)(param_1 + 0x40) - lVar3);
      }
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        return uVar2;
      }
      *(long *)(param_1 + 0x10) = lVar3;
    }
    else {
      *(long *)(param_1 + 0x60) = lVar3;
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x52867c7;
    }
  }
  else {
    *(long *)(param_1 + 0x700) = lVar3;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x528675f;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


