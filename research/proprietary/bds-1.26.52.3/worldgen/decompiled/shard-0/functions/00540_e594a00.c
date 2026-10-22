/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe694a00 (ELF vaddr 0xe594a00)
 * Label: callee-of:0xe3f1ef0
 * Body:  [[0e694a00, 0e694c7d]]
 * Ghidra: FUN_0e694a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e694a00(undefined2 *param_1,long *param_2,long param_3,long param_4,undefined2 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  long *plVar8;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f75cc30 == '\0') && (iVar3 = func_0x04108328(&DAT_0f75cc30), iVar3 != 0)) {
    func_0x0e693bb0();
    func_0x0410844d(&DAT_0f75cc30);
  }
  uVar4 = (ulong)((uint)param_4 & 3);
  uVar7 = 0x811c9dc5;
  uVar5 = 0;
  do {
    uVar7 = ((int)*(char *)(param_3 + 3 + uVar5) ^
            ((int)*(char *)(param_3 + 2 + uVar5) ^
            ((int)*(char *)(param_3 + 1 + uVar5) ^
            ((int)*(char *)(param_3 + uVar5) ^ uVar7) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    uVar5 = uVar5 + 4;
  } while (((uint)param_4 & 0xc) != uVar5);
  if (uVar4 != 0) {
    pcVar6 = (char *)(uVar5 + param_3);
    do {
      uVar7 = ((int)*pcVar6 ^ uVar7) * 0x1000193;
      pcVar6 = pcVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar7;
  lVar1 = *param_2;
  if ((DAT_0f75cc10 == '\0') && (iVar3 = func_0x04108328(&DAT_0f75cc10), iVar3 != 0)) {
    func_0x0e693aa0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75cb90,0xf53dab8);
    func_0x0410844d(&DAT_0f75cc10);
  }
  lStack_38 = lVar1 + 0x18;
  plVar8 = (long *)(*(long *)(lVar1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f75cb90 + 4)) * 8);
  do {
    lVar2 = *plVar8;
    if (lVar2 == -1) goto LAB_0e694b30;
    plVar8 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f75cb90 + 4));
  if (plVar8 == *(long **)(lVar1 + 0x38)) {
LAB_0e694b30:
    puStack_40 = &DAT_0f75cb90;
  }
  else {
    puStack_40 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_40,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = param_5;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x20) = (char)param_4 * '\x02';
  func_0x0eee2f00((long)param_1 + 0x41,param_3,param_4);
  *(undefined1 *)((long)param_1 + param_4 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f600000;
  func_0x048afb10(param_1 + 0x2c,8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x60] = 0xff00;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  return;
}


