/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d5e40 (ELF vaddr 0xc5d5e40)
 * Label: caller-of-seed
 * Body:  [[0c6d5e40, 0c6d5ed5]]
 * Ghidra: FUN_0c6d5e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d5e40(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_R8B;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3c75a8;
  *(undefined1 *)(param_1 + 0x75) = in_R8B;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  param_1[0x21] = 0x100;
  uVar3 = uRam000000000f7151ec;
  uVar2 = uRam000000000f7151e8;
  uVar1 = uRam000000000f7151e4;
  *(undefined4 *)(param_1 + 0x27) = _DAT_0f7151e0;
  *(undefined4 *)((long)param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)((long)param_1 + 0x144) = uVar3;
  func_0x0c6d5ef0(param_1,&UNK_0c6d6070,0,0);
  func_0x0c6d6130(param_1,&UNK_0c6d62b0,0,0);
  func_0x0c6d6450(param_1,&UNK_0c6d65d0,0,0);
  return;
}


