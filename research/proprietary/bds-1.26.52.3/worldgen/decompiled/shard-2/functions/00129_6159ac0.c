/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6259ac0 (ELF vaddr 0x6159ac0)
 * Label: string:terrainStrength
 * Body:  [[06259ac0, 06259b6a]]
 * Ghidra: FUN_06259ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06259ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  undefined1 auStack_88 [48];
  char cStack_58;
  undefined1 auStack_50 [56];
  
  uVar1 = _DAT_0f543890;
  uVar2 = strlen(_DAT_0f543890);
  lVar3 = func_0x0638bd70(param_1 + 0x18);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (lVar3 = *(long *)(lVar3 + 0x68), lVar3 != 0)) {
    bVar6 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar5 = lVar3 + 9;
    if (bVar6) {
      lVar5 = *(long *)(lVar3 + 0x18);
    }
    uVar4 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar6) {
      uVar4 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0638cfa0(auStack_88,param_1,lVar5,uVar4,0);
  }
  else {
    func_0x0638cfa0(auStack_88,param_1,uVar1,uVar2,0);
  }
  if (cStack_58 == '\0') {
    func_0x0638d930(auStack_50,auStack_88,&UNK_0123e868,0xf,0);
  }
  return;
}


