/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27c100 (ELF vaddr 0xd17c100)
 * Label: callee-of:0xc96a5d0
 * Body:  [[0d27c100, 0d27c1ca]]
 * Ghidra: FUN_0d27c100
 */


undefined8 FUN_0d27c100(long param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 in_EAX;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uStack_8;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  puVar6 = *(uint **)(param_1 + 0x48);
  puVar1 = *(uint **)(param_1 + 0x50);
  if (puVar6 != puVar1) {
    do {
      if (*puVar6 ==
          ((param_3 - uVar4 & 0x1ff) << 0x12 |
          ((int)((ulong)param_2 >> 0x20) - *(int *)(param_1 + 0x34) & 0x1ffU) << 9 |
          (int)param_2 - *(int *)(param_1 + 0x30) & 0x1ffU)) {
        if (puVar6 != puVar1) {
          uVar4 = *puVar6;
          *puVar6 = puVar1[-2];
          puVar1[-2] = uVar4;
          uVar4 = puVar6[1];
          *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)puVar1 + -2);
          *(short *)(puVar6 + 1) = (short)puVar1[-1];
          *(short *)(puVar1 + -1) = (short)uVar4;
          *(char *)((long)puVar1 + -2) = (char)(uVar4 >> 0x10);
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -8;
          uVar4 = *(uint *)(param_1 + 0x38);
        }
        break;
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar1);
  }
  uStack_8 = CONCAT44((uVar4 & 0x1fffe00) << 7 | *(uint *)(param_1 + 0x30) >> 9 & 0xffff,in_EAX);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    func_0x04891200();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,(long)&uStack_8 + 4);
  return uStack_8;
}


