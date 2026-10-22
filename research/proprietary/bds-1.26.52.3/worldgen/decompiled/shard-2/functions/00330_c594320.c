/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc694320 (ELF vaddr 0xc594320)
 * Label: caller-of-seed
 * Body:  [[0c694320, 0c694500]]
 * Ghidra: FUN_0c694320
 */


void FUN_0c694320(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3bc4c0;
  uStack_48 = 0;
  if ((*param_2 & 1) == 0) {
    pbStack_30 = *(byte **)(param_2 + 4);
    uStack_40 = *param_2;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
  }
  else {
    func_0x0412e5e0(&uStack_40,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
  }
  uStack_28 = 0;
  if ((uStack_40 & 1) == 0) {
    if ((byte)uStack_40 >> 1 != 0) goto LAB_0c6943a5;
  }
  else if (CONCAT44(uStack_34,uStack_38) != 0) {
LAB_0c6943a5:
    pbVar4 = pbStack_30;
    if ((uStack_40 & 1) == 0) {
      pbVar4 = (byte *)((long)&uStack_40 + 1);
    }
    if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
      uVar3 = 0xcbf29ce484222325;
      uVar1 = func_0x0eee2e90(pbVar4);
      if (uVar1 != 0) {
        uVar2 = (ulong)((uint)uVar1 & 7);
        if (7 < uVar1) {
          uVar1 = uVar1 & 0xfffffffffffffff8;
          do {
            uVar3 = (((((((uVar3 * 0x100000001b3 ^ (ulong)*pbVar4) * 0x100000001b3 ^
                         (ulong)pbVar4[1]) * 0x100000001b3 ^ (ulong)pbVar4[2]) * 0x100000001b3 ^
                       (ulong)pbVar4[3]) * 0x100000001b3 ^ (ulong)pbVar4[4]) * 0x100000001b3 ^
                     (ulong)pbVar4[5]) * 0x100000001b3 ^ (ulong)pbVar4[6]) * 0x100000001b3 ^
                    (ulong)pbVar4[7];
            pbVar4 = pbVar4 + 8;
            uVar1 = uVar1 - 8;
          } while (uVar1 != 0);
        }
        if (uVar2 != 0) {
          uVar1 = 0;
          do {
            uVar3 = uVar3 * 0x100000001b3 ^ (ulong)pbVar4[uVar1];
            uVar1 = uVar1 + 1;
          } while (uVar2 != uVar1);
        }
      }
      goto LAB_0c694499;
    }
  }
  uVar3 = 0;
LAB_0c694499:
  uStack_48 = uVar3;
  func_0x0c690a60(param_1 + 0x75,param_4,&uStack_48);
  if ((uStack_40 & 1) != 0) {
    func_0x0412a280(pbStack_30,CONCAT44(uStack_3c,uStack_40) & 0xfffffffffffffffe);
  }
  func_0x0c6a2a90(param_1,&UNK_0c695240,0,1);
  func_0x0c694c70(param_1,&UNK_0c694df0,0,1);
  return;
}


