/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d2840 (ELF vaddr 0xc5d2840)
 * Label: caller-of-seed
 * Body:  [[0c6d2840, 0c6d2b5a]]
 * Ghidra: FUN_0c6d2840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d2840(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar10;
  byte *pbVar11;
  ulong uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  byte *pbStack_38;
  undefined *puStack_30;
  undefined4 uVar9;
  
  lVar5 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar5 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar5));
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  *param_1 = &UNK_0f3c6480;
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
  uVar1 = uStack_48;
  puStack_30 = (undefined *)0x0;
  if ((uStack_48 & 1) == 0) {
    uVar10 = (ulong)((byte)uStack_48 >> 1);
    if (uVar10 != 0) goto LAB_0c6d2927;
joined_r0x0c6d2a48:
    uStack_50 = 0;
    if (_DAT_0f714a68 == 0) {
LAB_0c6d2a4a:
      uVar3 = _DAT_0f714a78;
      if ((DAT_0f714a70 & 1) == 0) {
        uVar3 = (ulong)(DAT_0f714a70 >> 1);
      }
      if (uVar3 == uVar10) {
        if ((DAT_0f714a70 & 1) == 0) {
          uVar6 = 0xf714a71;
          if ((uVar1 & 1) != 0) goto LAB_0c6d2b19;
LAB_0c6d2a85:
          iVar2 = func_0x0eee3000(uVar6,(long)&uStack_48 + 1,uVar10);
        }
        else {
          uVar6 = _DAT_0f714a80;
          if ((uVar1 & 1) == 0) goto LAB_0c6d2a85;
LAB_0c6d2b19:
          iVar2 = func_0x0eee3000(uVar6,pbStack_38,uVar10);
        }
        if (iVar2 == 0) {
          _DAT_0f714a88 = &uStack_50;
          puStack_30 = &DAT_0f714a68;
          uVar9 = 1;
          uVar8 = 1;
          goto joined_r0x0c6d2b50;
        }
      }
    }
  }
  else {
    uVar10 = CONCAT44(uStack_3c,uStack_40);
    if (uVar10 == 0) goto joined_r0x0c6d2a48;
LAB_0c6d2927:
    if ((uStack_48 & 1) == 0) {
      pbVar11 = (byte *)((long)&uStack_48 + 1);
      if (pbVar11 != (byte *)0x0) goto LAB_0c6d293f;
      goto joined_r0x0c6d2a48;
    }
    pbVar11 = pbStack_38;
    if (pbStack_38 == (byte *)0x0) goto joined_r0x0c6d2a48;
LAB_0c6d293f:
    if (*pbVar11 == 0) goto joined_r0x0c6d2a48;
    uVar7 = 0xcbf29ce484222325;
    uVar3 = func_0x0eee2e90(pbVar11);
    if (uVar3 != 0) {
      uVar4 = (ulong)((uint)uVar3 & 7);
      if (7 < uVar3) {
        uVar3 = uVar3 & 0xfffffffffffffff8;
        do {
          uVar7 = (((((((uVar7 * 0x100000001b3 ^ (ulong)*pbVar11) * 0x100000001b3 ^
                       (ulong)pbVar11[1]) * 0x100000001b3 ^ (ulong)pbVar11[2]) * 0x100000001b3 ^
                     (ulong)pbVar11[3]) * 0x100000001b3 ^ (ulong)pbVar11[4]) * 0x100000001b3 ^
                   (ulong)pbVar11[5]) * 0x100000001b3 ^ (ulong)pbVar11[6]) * 0x100000001b3 ^
                  (ulong)pbVar11[7];
          pbVar11 = pbVar11 + 8;
          uVar3 = uVar3 - 8;
        } while (uVar3 != 0);
      }
      if (uVar4 != 0) {
        uVar3 = 0;
        do {
          uVar7 = uVar7 * 0x100000001b3 ^ (ulong)pbVar11[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
    }
    uStack_50 = uVar7;
    if (_DAT_0f714a68 == uVar7) goto LAB_0c6d2a4a;
  }
  _DAT_0f714a88 = (ulong *)0x0;
  uVar9 = 0;
  uVar8 = 0;
joined_r0x0c6d2b50:
  if ((uVar1 & 1) != 0) {
    FUN_0412a280(pbStack_38,CONCAT44(uStack_44,uStack_48) & 0xfffffffffffffffe);
    uVar8 = uVar9;
  }
  *(undefined4 *)(param_1 + 0x75) = uVar8;
  *(undefined1 *)((long)param_1 + 0x131) = 0x34;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,1);
  func_0x0c6d2b80(param_1,&UNK_0c6d2d00,0,1);
  return;
}


