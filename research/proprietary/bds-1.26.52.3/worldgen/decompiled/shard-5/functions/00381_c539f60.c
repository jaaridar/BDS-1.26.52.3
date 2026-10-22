/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc639f60 (ELF vaddr 0xc539f60)
 * Label: caller-of-seed
 * Body:  [[0c639f60, 0c63a1b4]]
 * Ghidra: FUN_0c639f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c639f60(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uVar1 = *param_5;
  func_0x0c6c7010(param_1,param_2,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *param_1 = &UNK_0f39c6b8;
  *(undefined1 *)(param_1 + 0x75) = uVar1;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6385a0(param_1,&UNK_0c638720,0,0);
  func_0x0c638740(param_1,&UNK_0c6388c0,0,0);
  *param_1 = &UNK_0f3a0db8;
  uStack_50 = 0;
  if ((*param_2 & 1) == 0) {
    pbStack_38 = *(byte **)(param_2 + 4);
    uStack_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
  }
  else {
    func_0x0412e5e0(&uStack_48,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
  }
  uStack_30 = 0;
  if ((uStack_48 & 1) == 0) {
    if ((byte)uStack_48 >> 1 != 0) goto LAB_0c63a05d;
  }
  else if (CONCAT44(uStack_3c,uStack_40) != 0) {
LAB_0c63a05d:
    pbVar5 = pbStack_38;
    if ((uStack_48 & 1) == 0) {
      pbVar5 = (byte *)((long)&uStack_48 + 1);
    }
    if ((pbVar5 != (byte *)0x0) && (*pbVar5 != 0)) {
      uVar4 = 0xcbf29ce484222325;
      uVar2 = func_0x0eee2e90(pbVar5);
      if (uVar2 != 0) {
        uVar3 = (ulong)((uint)uVar2 & 7);
        if (7 < uVar2) {
          uVar2 = uVar2 & 0xfffffffffffffff8;
          do {
            uVar4 = (((((((uVar4 * 0x100000001b3 ^ (ulong)*pbVar5) * 0x100000001b3 ^
                         (ulong)pbVar5[1]) * 0x100000001b3 ^ (ulong)pbVar5[2]) * 0x100000001b3 ^
                       (ulong)pbVar5[3]) * 0x100000001b3 ^ (ulong)pbVar5[4]) * 0x100000001b3 ^
                     (ulong)pbVar5[5]) * 0x100000001b3 ^ (ulong)pbVar5[6]) * 0x100000001b3 ^
                    (ulong)pbVar5[7];
            pbVar5 = pbVar5 + 8;
            uVar2 = uVar2 - 8;
          } while (uVar2 != 0);
        }
        if (uVar3 != 0) {
          uVar2 = 0;
          do {
            uVar4 = uVar4 * 0x100000001b3 ^ (ulong)pbVar5[uVar2];
            uVar2 = uVar2 + 1;
          } while (uVar3 != uVar2);
        }
      }
      goto LAB_0c63a149;
    }
  }
  uVar4 = 0;
LAB_0c63a149:
  uStack_50 = uVar4;
  func_0x0c690a60(param_1 + 0x76,param_4,&uStack_50);
  if ((uStack_48 & 1) != 0) {
    FUN_0412a280(pbStack_38,CONCAT44(uStack_44,uStack_48) & 0xfffffffffffffffe);
  }
  func_0x0c646a10(param_1,&UNK_0c646b90,0,1);
  func_0x0c646bd0(param_1,&UNK_0c646d50,0,1);
  return;
}


