/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27bf80 (ELF vaddr 0xd17bf80)
 * Label: callee-of:0xc96a5d0
 * Body:  [[0d27bf80, 0d27c0be]]
 * Ghidra: FUN_0d27bf80
 */


void FUN_0d27bf80(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  uint uStack_10;
  uint uStack_c;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x70);
  iVar4 = (int)((ulong)param_2 >> 0x20);
  if (lVar1 != 0) {
    uVar5 = (*(long *)(*(long *)(param_1 + 0x60) + 0x78) - lVar1 >> 4) * -0x3333333333333333;
    if (param_4 <= uVar5 && uVar5 - param_4 != 0) {
      func_0x0d27bcc0(param_1 + 0x48,
                      (param_3 - *(int *)(param_1 + 0x38) & 0x1ffU) << 0x12 |
                      (iVar4 - *(int *)(param_1 + 0x34) & 0x1ffU) << 9 |
                      (int)param_2 - *(int *)(param_1 + 0x30) & 0x1ffU,
                      param_4 & 0xffff |
                      (uint)*(byte *)(lVar1 + 0x4a + (ulong)(param_4 * 0x50)) << 0x10);
      uStack_10 = (*(uint *)(param_1 + 0x38) & 0x1fffe00) << 7 |
                  *(uint *)(param_1 + 0x30) >> 9 & 0xffff;
      plVar2 = *(long **)(param_1 + 0x20);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_10);
        return;
      }
      goto LAB_0d27c0b9;
    }
  }
  func_0x0d27bcc0(param_1 + 0x48,
                  (param_3 - *(int *)(param_1 + 0x38) & 0x1ffU) << 0x12 |
                  (iVar4 - *(int *)(param_1 + 0x34) & 0x1ffU) << 9 |
                  (int)param_2 - *(int *)(param_1 + 0x30) & 0x1ffU,param_4 & 0xffff);
  uStack_c = (*(uint *)(param_1 + 0x38) & 0x1fffe00) << 7 | *(uint *)(param_1 + 0x30) >> 9 & 0xffff;
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_c);
    return;
  }
LAB_0d27c0b9:
  FUN_04891200();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


