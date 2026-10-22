/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd06aac0 (ELF vaddr 0xcf6aac0)
 * Label: caller-of-seed
 * Body:  [[0d06aac0, 0d06ac13]]
 * Ghidra: FUN_0d06aac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d06aac0(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar4 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar4));
  *param_1 = &UNK_0f4475b0;
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    if ((DAT_0f714d38 & 1) != 0) goto LAB_0d06ab35;
LAB_0d06ab1a:
    if (uVar3 == DAT_0f714d38 >> 1) {
LAB_0d06ab41:
      if ((bVar1 & 1) == 0) {
        param_2 = param_2 + 1;
        if ((DAT_0f714d38 & 1) != 0) goto LAB_0d06abf0;
LAB_0d06ab56:
        iVar2 = func_0x0eee3000(param_2,0xf714d39);
        uVar5 = _DAT_014e3ac0;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
        if ((DAT_0f714d38 & 1) == 0) goto LAB_0d06ab56;
LAB_0d06abf0:
        iVar2 = func_0x0eee3000(param_2,_DAT_0f714d48);
        uVar5 = _DAT_014e3ac0;
      }
      _DAT_014e3ac0 = uVar5;
      if (iVar2 == 0) goto LAB_0d06ab75;
    }
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if ((DAT_0f714d38 & 1) == 0) goto LAB_0d06ab1a;
LAB_0d06ab35:
    if (uVar3 == _DAT_0f714d40) goto LAB_0d06ab41;
  }
  uVar5 = _DAT_014e4080;
LAB_0d06ab75:
  param_1[0x31] = (ulong)_DAT_01198838;
  *(undefined4 *)(param_1 + 0x32) = 0x3e8a3d70;
  *(undefined8 *)((long)param_1 + 0x194) = uVar5;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f3ae148;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x21] = 0;
  func_0x0d06ac30(param_1,&UNK_0d06adb0,0,0);
  return;
}


