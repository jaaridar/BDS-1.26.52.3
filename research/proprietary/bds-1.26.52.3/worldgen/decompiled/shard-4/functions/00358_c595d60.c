/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc695d60 (ELF vaddr 0xc595d60)
 * Label: caller-of-seed
 * Body:  [[0c695d60, 0c695e33]]
 * Ghidra: FUN_0c695d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c695d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar4 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar4));
  *param_1 = &UNK_0f3b8c50;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  if (param_1 + 0x75 != param_4) {
    if ((*(byte *)(param_4 + 1) & 1) == 0) {
      param_1[0x78] = param_4[3];
      uVar1 = *(undefined4 *)((long)param_4 + 0xc);
      uVar2 = *(undefined4 *)(param_4 + 2);
      uVar3 = *(undefined4 *)((long)param_4 + 0x14);
      *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)((long)param_1 + 0x3b4) = uVar1;
      *(undefined4 *)(param_1 + 0x77) = uVar2;
      *(undefined4 *)((long)param_1 + 0x3bc) = uVar3;
    }
    else {
      func_0x04885070(param_1 + 0x76,param_4[3],param_4[2]);
    }
  }
  param_1[0x75] = *param_4;
  func_0x0c695e70(param_1,&UNK_0c695ff0,0,0);
  func_0x0c6960d0(param_1,&UNK_0c696250,0,0);
  return;
}


