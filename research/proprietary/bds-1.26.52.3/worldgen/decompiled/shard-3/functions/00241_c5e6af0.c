/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e6af0 (ELF vaddr 0xc5e6af0)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0c6e6af0, 0c6e6bd5]]
 * Ghidra: FUN_0c6e6af0
 */


undefined8 FUN_0c6e6af0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  *(long *)param_1 = param_1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((undefined8 *)(param_1 + 8) != param_2) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      *(undefined8 *)(param_1 + 0x20) = param_2[3];
      uVar2 = *(undefined4 *)((long)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((long)param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
    }
    else {
      FUN_04885070((undefined4 *)(param_1 + 0x10),param_2[3],param_2[2]);
    }
  }
  *(undefined8 *)(param_1 + 8) = *param_2;
  uVar5 = func_0x0cc41880(0xf6ff9e0);
  *(undefined1 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0x100;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  LOCK();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  UNLOCK();
  return uVar1;
}


