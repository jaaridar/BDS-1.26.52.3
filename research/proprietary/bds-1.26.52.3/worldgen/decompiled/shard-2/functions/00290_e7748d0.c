/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8748d0 (ELF vaddr 0xe7748d0)
 * Label: callee-of:0xe7748a0
 * Body:  [[0e8748d0, 0e874913] [0e874920, 0e874998]]
 * Ghidra: FUN_0e8748d0
 */


void FUN_0e8748d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  if (((char)param_1[3] == '\x01') && (lVar1 = *param_1, lVar1 != 0)) {
    lVar3 = param_1[1];
    lVar2 = lVar1;
    if (lVar1 != lVar3) {
      do {
        if (*(char *)(lVar3 + -0x10) == '\x01') {
          if ((ulong)*(uint *)(lVar3 + -0x18) != 0xffffffff) {
            (**(code **)(&UNK_0f4cdf60 + (ulong)*(uint *)(lVar3 + -0x18) * 8))
                      (&uStack_31,lVar3 + -0x30);
          }
          *(undefined4 *)(lVar3 + -0x18) = 0xffffffff;
          if ((ulong)*(uint *)(lVar3 + -0x38) != 0xffffffff) {
            (**(code **)(&UNK_0f4cdf60 + (ulong)*(uint *)(lVar3 + -0x38) * 8))
                      (&uStack_31,lVar3 + -0x50);
          }
          *(undefined4 *)(lVar3 + -0x38) = 0xffffffff;
        }
        lVar3 = lVar3 + -0x1c8;
        func_0x0e8733e0(lVar3);
      } while (lVar3 != lVar1);
      lVar2 = *param_1;
    }
    param_1[1] = lVar1;
    func_0x0412a280(lVar2,param_1[2] - lVar2);
  }
  return;
}


