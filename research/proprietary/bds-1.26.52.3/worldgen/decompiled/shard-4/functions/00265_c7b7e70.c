/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8b7e70 (ELF vaddr 0xc7b7e70)
 * Label: callee-of:0xc7b8060
 * Body:  [[0c8b7e70, 0c8b7e83] [0c8b7e90, 0c8b7ec7] [0c8b7ed0, 0c8b7f0b] [0c8b7f10, 0c8b7fb2]]
 * Ghidra: FUN_0c8b7e70
 */


void FUN_0c8b7e70(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x100;
  do {
    lVar2 = *(long *)(lVar5 + -0x18);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar5 + -0x10);
      lVar3 = lVar2;
      if (lVar2 != lVar4) {
        do {
          if ((*(byte *)(lVar4 + -0x40) & 1) == 0) {
            if ((*(byte *)(lVar4 + -0x60) & 1) == 0) goto LAB_0c8b7eec;
LAB_0c8b7f2b:
            func_0x0412a280(*(undefined8 *)(lVar4 + -0x50),
                            *(ulong *)(lVar4 + -0x60) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar4 + -0x78) & 1) != 0) goto LAB_0c8b7f46;
LAB_0c8b7ef4:
            if ((*(byte *)(lVar4 + -0x90) & 1) == 0) goto LAB_0c8b7eff;
LAB_0c8b7f64:
            func_0x0412a280(*(undefined8 *)(lVar4 + -0x80),
                            *(ulong *)(lVar4 + -0x90) & 0xfffffffffffffffe);
            bVar1 = *(byte *)(lVar4 + -0xa8);
          }
          else {
            func_0x0412a280(*(undefined8 *)(lVar4 + -0x30),
                            *(ulong *)(lVar4 + -0x40) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar4 + -0x60) & 1) != 0) goto LAB_0c8b7f2b;
LAB_0c8b7eec:
            if ((*(byte *)(lVar4 + -0x78) & 1) == 0) goto LAB_0c8b7ef4;
LAB_0c8b7f46:
            func_0x0412a280(*(undefined8 *)(lVar4 + -0x68),
                            *(ulong *)(lVar4 + -0x78) & 0xfffffffffffffffe);
            if ((*(byte *)(lVar4 + -0x90) & 1) != 0) goto LAB_0c8b7f64;
LAB_0c8b7eff:
            bVar1 = *(byte *)(lVar4 + -0xa8);
          }
          if ((bVar1 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar4 + -0x98),
                            *(ulong *)(lVar4 + -0xa8) & 0xfffffffffffffffe);
          }
          lVar4 = lVar4 + -0xb0;
        } while (lVar4 != lVar2);
        lVar3 = *(long *)(lVar5 + -0x18);
      }
      *(long *)(lVar5 + -0x10) = lVar2;
      func_0x0412a280(lVar3,*(long *)(lVar5 + -8) - lVar3);
    }
    lVar5 = lVar5 + -0x20;
    if (lVar5 == param_1) {
      return;
    }
  } while( true );
}


