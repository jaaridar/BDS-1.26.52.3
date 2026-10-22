/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6339e70 (ELF vaddr 0x6239e70)
 * Label: callee-of:0x61416e0
 * Body:  [[06339e70, 06339eee]]
 * Ghidra: FUN_06339e70
 */


/* WARNING: Possible PIC construction at 0x06339eb7: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06339e70(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 auStack_20 [2];
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    if ((char)param_1[2] == '\x01') {
      auStack_20[0] = 0x6339e96;
      in_RAX = FUN_0629d8f0(lVar3 + 0x40,*(undefined8 *)(lVar3 + 0x48));
      lVar1 = *(long *)(lVar3 + 0x38);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      if (lVar1 == 0) {
        if ((*(byte *)(lVar3 + 0x20) & 1) != 0) {
          auStack_20[0] = 0x6339ed3;
          in_RAX = func_0x0412a280(*(undefined8 *)(lVar3 + 0x30),
                                   *(ulong *)(lVar3 + 0x20) & 0xfffffffffffffffe);
        }
      }
      else {
        auStack_20[0] = 0x6339eaf;
        in_RAX = func_0x0d328aa0(lVar1);
        register0x00000020 = (BADSPACEBASE *)auStack_20;
        auStack_20[0] = 0x6339ebc;
        lVar3 = lVar1;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
    if (lVar3 != 0) {
      pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
      (*pcVar2)(&DAT_0f5463b0,lVar3);
    }
    return *(undefined8 *)((long)register0x00000020 + -8);
  }
  return in_RAX;
}


