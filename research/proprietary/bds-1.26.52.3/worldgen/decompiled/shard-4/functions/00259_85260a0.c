/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86260a0 (ELF vaddr 0x85260a0)
 * Label: callee-of:0x8486630
 * Body:  [[086260a0, 086260cd] [086260d0, 0862617b] [08626180, 086261e7]]
 * Ghidra: FUN_086260a0
 */


/* WARNING: Possible PIC construction at 0x08626118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08626160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0862611d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_086260a0(long *param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long lVar4;
  long lVar5;
  undefined8 auStack_30 [2];
  
  if ((char)param_1[8] == '\x01') {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return in_RAX;
    }
    lVar5 = param_1[1];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        if ((*(byte *)(lVar5 + -0x18) & 1) == 0) {
          bVar1 = *(byte *)(lVar5 + -0x30);
        }
        else {
          auStack_30[0] = 0x8626101;
          in_RAX = func_0x0412a280(*(undefined8 *)(lVar5 + -8),
                                   *(ulong *)(lVar5 + -0x18) & 0xfffffffffffffffe);
          bVar1 = *(byte *)(lVar5 + -0x30);
        }
        if ((bVar1 & 1) != 0) {
          lVar4 = *(long *)(lVar5 + -0x20);
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0x862611d;
          goto SUB_0412a280;
        }
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != lVar2);
      lVar4 = *param_1;
    }
    param_1[1] = lVar2;
    in_RAX = 0x10;
  }
  else {
    lVar2 = param_1[5];
    if (lVar2 == 0) {
      lVar2 = param_1[2];
      if (lVar2 == 0) {
        return in_RAX;
      }
      lVar5 = param_1[3];
      lVar4 = lVar2;
      if (lVar2 != lVar5) {
        do {
          if ((*(char *)(lVar5 + -8) == '\x01') && ((*(byte *)(lVar5 + -0x30) & 1) != 0)) {
            auStack_30[0] = 0x86261a8;
            func_0x0412a280(*(undefined8 *)(lVar5 + -0x20),
                            *(ulong *)(lVar5 + -0x30) & 0xfffffffffffffffe);
          }
          lVar5 = lVar5 + -0x50;
        } while (lVar5 != lVar2);
        lVar4 = param_1[2];
      }
      param_1[3] = lVar2;
      in_RAX = 0x20;
    }
    else {
      lVar5 = param_1[6];
      lVar4 = lVar2;
      if (lVar2 != lVar5) {
        do {
          lVar5 = lVar5 + -0x40;
          auStack_30[0] = 0x862614c;
          in_RAX = func_0x048b3e80(lVar5);
        } while (lVar5 != lVar2);
        lVar4 = param_1[5];
      }
      param_1[6] = lVar2;
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x8626165;
    }
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar4 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


