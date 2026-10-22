/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3de2f0 (ELF vaddr 0xe2de2f0)
 * Label: string:JigsawJunction
 * Body:  [[0e3de2f0, 0e3de4dc]]
 * Ghidra: FUN_0e3de2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3de2f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  undefined1 auStack_160 [48];
  char cStack_130;
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [56];
  
  func_0x0e510e40();
  if ((DAT_0f754378 == '\0') && (iVar2 = func_0x04108328(&DAT_0f754378), iVar2 != 0)) {
    func_0x0e4aaf20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7542f8,0xf53dab8);
    func_0x0410844d(&DAT_0f754378);
  }
  plVar4 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f7542f8 + 4)) * 8);
  do {
    lVar1 = *plVar4;
    if (lVar1 == -1) goto LAB_0e3de360;
    plVar4 = (long *)(*(long *)(param_1 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f7542f8 + 4));
  if (plVar4 == *(long **)(param_1 + 0x38)) {
LAB_0e3de360:
    puVar3 = &DAT_0f7542f8;
    iVar2 = iRam000000000f754358;
  }
  else {
    puVar3 = (undefined *)plVar4[2];
    iVar2 = *(int *)(puVar3 + 0x60);
  }
  if ((iVar2 == -0x2b3da790) && (lVar1 = *(long *)(puVar3 + 0x68), lVar1 != 0)) {
    bVar6 = (*(byte *)(lVar1 + 8) & 1) != 0;
    puVar3 = (undefined *)(lVar1 + 9);
    if (bVar6) {
      puVar3 = *(undefined **)(lVar1 + 0x18);
    }
    uVar5 = (ulong)(*(byte *)(lVar1 + 8) >> 1);
    if (bVar6) {
      uVar5 = *(ulong *)(lVar1 + 0x10);
    }
  }
  else {
    puVar3 = &UNK_012ec135;
    uVar5 = 0xe;
  }
  func_0x0e4ab3d0(auStack_160,param_1,puVar3,uVar5,0);
  if (cStack_130 == '\0') {
    func_0x0e4ac060(auStack_f0,auStack_160,&UNK_0126be99,7,1);
    func_0x0e4acb60(auStack_b8,auStack_f0,&UNK_01442b4e,0xd,1);
    func_0x0e4ad030(auStack_80,auStack_b8,&UNK_0148f60d,7,1);
    func_0x0e4ad500(auStack_48,auStack_80,&UNK_0138b188,6,1);
    func_0x0e4ad9d0(auStack_128,auStack_48,&UNK_01442b5c,10,1);
  }
  return;
}


