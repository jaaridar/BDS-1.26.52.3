/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a8be50 (ELF vaddr 0x498be50)
 * Label: string:Cave placement is only valid in the "pregeneration_pass" pla
 * Body:  [[04a8be50, 04a8bee2]]
 * Ghidra: FUN_04a8be50
 */


undefined8 FUN_04a8be50(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    uVar4 = (ulong)*(byte *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) goto LAB_04a8be69;
LAB_04a8be85:
    if (uVar3 != *(ulong *)(param_1 + 0x58)) goto LAB_04a8bec0;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    uVar4 = (ulong)*(byte *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) goto LAB_04a8be85;
LAB_04a8be69:
    if (uVar3 != uVar4 >> 1) goto LAB_04a8bec0;
  }
  if ((bVar1 & 1) == 0) {
    param_2 = param_2 + 1;
    if ((uVar4 & 1) == 0) goto LAB_04a8be9e;
LAB_04a8bead:
    param_1 = *(long *)(param_1 + 0x60);
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if ((uVar4 & 1) != 0) goto LAB_04a8bead;
LAB_04a8be9e:
    param_1 = param_1 + 0x51;
  }
  iVar2 = func_0x0eee3000(param_2,param_1);
  if (iVar2 == 0) {
    return 1;
  }
LAB_04a8bec0:
  func_0x04a8bef0(1,3,0xe,&UNK_012a3db2);
  return 0;
}


