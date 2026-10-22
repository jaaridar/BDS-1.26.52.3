/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf270c0 (ELF vaddr 0xce270c0)
 * Label: caller-of-seed
 * Body:  [[0cf270c0, 0cf271a7]]
 * Ghidra: FUN_0cf270c0
 */


void FUN_0cf270c0(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_30;
  long lStack_28;
  ulong uStack_20;
  
  func_0x0cf76060();
  bVar1 = (*(byte *)(param_1 + 0x140) & 1) != 0;
  lStack_28 = param_1 + 0x141;
  if (bVar1) {
    lStack_28 = *(long *)(param_1 + 0x150);
  }
  uStack_20 = (ulong)(*(byte *)(param_1 + 0x140) >> 1);
  if (bVar1) {
    uStack_20 = *(ulong *)(param_1 + 0x148);
  }
  func_0x0470d9a0(&bStack_40,&UNK_014db7cd,0x14,0xd,&lStack_28);
  func_0x057d8ed0(param_2,&bStack_40);
  if ((bStack_40 & 1) != 0) {
    func_0x0412a280(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
  }
  lStack_28 = CONCAT44(lStack_28._4_4_,*(undefined4 *)(param_1 + 0x180));
  func_0x0470d9a0(&bStack_40,&UNK_01337f7c,8,1,&lStack_28);
  func_0x057d8ed0(param_2,&bStack_40);
  if ((bStack_40 & 1) != 0) {
    func_0x0412a280(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
  }
  return;
}


