/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe510e40 (ELF vaddr 0xe410e40)
 * Label: string:terrain_matching
 * Body:  [[0e510e40, 0e510ef0]]
 * Ghidra: FUN_0e510e40
 */


void FUN_0e510e40(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 auStack_c8 [48];
  char cStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [64];
  
  lVar1 = func_0x0e4b0a70(param_1 + 0x18);
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
    puVar3 = &UNK_0126c0e9;
    uVar2 = 10;
  }
  func_0x0e6a0730(auStack_c8,param_1,puVar3,uVar2,0);
  uStack_94 = 0;
  uStack_90 = 0;
  if (cStack_98 == '\0') {
    func_0x0e510f80(auStack_48,auStack_c8,&UNK_0140dab2,5);
    func_0x0e511410(auStack_88,auStack_48,&UNK_012532dd,0x10);
  }
  return;
}


