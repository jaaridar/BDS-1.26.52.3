/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc637de0 (ELF vaddr 0xc537de0)
 * Label: caller-of-seed
 * Body:  [[0c637de0, 0c637eaf]]
 * Ghidra: FUN_0c637de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c637de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f39c280;
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
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe1ff | 0x800;
  *(undefined1 *)((long)param_1 + 0x132) = 0xf;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c637ef0(param_1,&UNK_0c638070,0,0);
  return;
}


