/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4dd970 (ELF vaddr 0xe3dd970)
 * Label: caller-of-seed
 * Body:  [[0e4dd970, 0e4dda9e]]
 * Ghidra: FUN_0e4dd970
 */


void FUN_0e4dd970(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_128 [48];
  char cStack_f8;
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [56];
  
  func_0x0e5003f0();
  func_0x0e501380(param_1);
  func_0x0e4efe20(param_1);
  func_0x0e4f7eb0(param_1);
  func_0x0e4ddaa0(param_1);
  func_0x0e4f1ef0(param_1);
  lVar1 = func_0x08499c90(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x60) == -0x2b3da790) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    bVar4 = (*(byte *)(lVar1 + 8) & 1) != 0;
    puVar3 = (undefined *)(lVar1 + 9);
    if (bVar4) {
      puVar3 = *(undefined **)(lVar1 + 0x18);
    }
    uVar2 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar4) {
      uVar2 = *(ulong *)(lVar1 + 0x10);
    }
  }
  else {
    puVar3 = &UNK_013f3fe2;
    uVar2 = 0x13;
  }
  func_0x0e611720(auStack_128,param_1,puVar3,uVar2,0);
  if (cStack_f8 == '\0') {
    func_0x0e612100(auStack_b8,auStack_128,&UNK_0129f349,10,1);
    func_0x0e6160b0(auStack_80,auStack_b8,&UNK_01304a1f,0xe,1);
    func_0x0e619cd0(auStack_48,auStack_80,&UNK_013e0c25,7,1);
    func_0x0e61daf0(auStack_f0,auStack_48,&UNK_011e72a5,0xe,1);
  }
  return;
}


