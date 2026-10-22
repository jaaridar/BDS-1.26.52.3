/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd352860 (ELF vaddr 0xd252860)
 * Label: callee-of:0xc972c10
 * Body:  [[0d352860, 0d35297a]]
 * Ghidra: FUN_0d352860
 */


void FUN_0d352860(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 uStack_30;
  
  func_0x0d3520e0(&lStack_50,param_1,param_2,param_3,param_4);
  lVar1 = param_1 + 0x58;
  uStack_30 = 1;
  lStack_38 = lVar1;
  func_0x0412d450(lVar1);
  if (lStack_50 != lStack_48) {
    lVar4 = lStack_50;
    do {
      func_0x0d3865a0(param_1 + 0x30,lVar4);
      lVar4 = lVar4 + 8;
    } while (lVar4 != lStack_48);
  }
  func_0x0412d520(lVar1);
  func_0x0412d680(param_1 + 0x120);
  if (*(long *)(param_1 + 0x100) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      func_0x0412a280(puVar3,0x18);
      puVar3 = puVar2;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      func_0x0eee2dd0(*(undefined8 *)(param_1 + 0xe8),0,*(long *)(param_1 + 0xf0) << 3);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  func_0x0412d6b0(param_1 + 0x120);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    func_0x0412a280(lStack_50,lStack_40 - lStack_50);
  }
  return;
}


