/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc650fa0 (ELF vaddr 0xc550fa0)
 * Label: caller-of-seed
 * Body:  [[0c650fa0, 0c65105e]]
 * Ghidra: FUN_0c650fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c650fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ulong uVar4;
  
  uVar4 = 0xd;
  if (param_4 != 0) {
    uVar4 = 0x17;
  }
  uVar3 = 0x400;
  if (param_4 != 0) {
    uVar3 = 0x1600;
  }
  uVar1 = 1;
  if (uVar4 <= (ulong)(_DAT_0f71e698 - _DAT_0f71e690 >> 3)) {
    uVar1 = uVar4;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + uVar1 * 8));
  *param_1 = &UNK_0f3a5200;
  *(char *)(param_1 + 0x75) = (char)param_4;
  uVar2 = 0xf;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0x3f7ae148;
  *(undefined1 *)((long)param_1 + 0x136) = uVar2;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | uVar3;
  *(char *)((long)param_1 + 0x132) = (char)param_4 * '\x02' + '\x03';
  if (param_4 == 0) {
    func_0x0c651080(param_1,&UNK_0c651200,0,0);
  }
  return;
}


