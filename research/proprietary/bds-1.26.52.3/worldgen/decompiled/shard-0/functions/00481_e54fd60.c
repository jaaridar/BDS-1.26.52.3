/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe64fd60 (ELF vaddr 0xe54fd60)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e64fd60, 0e64ffcd]]
 * Ghidra: FUN_0e64fd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e64fd60(undefined2 *param_1,long *param_2,long param_3,long param_4,undefined2 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  long *plVar7;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f75bc58 == '\0') && (iVar2 = func_0x04108328(&DAT_0f75bc58), iVar2 != 0)) {
    func_0x0e64ecf0();
    func_0x0410844d(&DAT_0f75bc58);
  }
  uVar3 = (ulong)((uint)param_4 & 3);
  uVar6 = 0x811c9dc5;
  lVar4 = 0;
  do {
    uVar6 = ((int)*(char *)(param_3 + 3 + lVar4) ^
            ((int)*(char *)(param_3 + 2 + lVar4) ^
            ((int)*(char *)(param_3 + 1 + lVar4) ^
            ((int)*(char *)(param_3 + lVar4) ^ uVar6) * 0x1000193) * 0x1000193) * 0x1000193) *
            0x1000193;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 8);
  if (uVar3 != 0) {
    pcVar5 = (char *)(param_3 + 8);
    do {
      uVar6 = ((int)*pcVar5 ^ uVar6) * 0x1000193;
      pcVar5 = pcVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar6;
  lVar4 = *param_2;
  if ((DAT_0f75bc38 == '\0') && (iVar2 = func_0x04108328(&DAT_0f75bc38), iVar2 != 0)) {
    func_0x0e64ebe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bbb8,0xf53dab8);
    func_0x0410844d(&DAT_0f75bc38);
  }
  lStack_38 = lVar4 + 0x18;
  plVar7 = (long *)(*(long *)(lVar4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f75bbb8 + 4)) * 8);
  do {
    lVar1 = *plVar7;
    if (lVar1 == -1) goto LAB_0e64fe80;
    plVar7 = (long *)(*(long *)(lVar4 + 0x30) + lVar1 * 0x18);
  } while (*(uint *)(*(long *)(lVar4 + 0x30) + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f75bbb8 + 4));
  if (plVar7 == *(long **)(lVar4 + 0x38)) {
LAB_0e64fe80:
    puStack_40 = &DAT_0f75bbb8;
  }
  else {
    puStack_40 = (undefined *)plVar7[2];
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


