/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6294b0 (ELF vaddr 0xe5294b0)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e6294b0, 0e62970b]]
 * Ghidra: FUN_0e6294b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6294b0(undefined2 *param_1,long *param_2,char *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined *puStack_40;
  long lStack_38;
  
  if ((DAT_0f75ae48 == '\0') && (iVar4 = func_0x04108328(&DAT_0f75ae48), iVar4 != 0)) {
    func_0x0e628370();
    func_0x0410844d(&DAT_0f75ae48);
  }
  uVar3 = ((int)param_3[4] ^
          ((int)param_3[3] ^
          ((int)param_3[2] ^
          ((int)param_3[1] ^ ((int)*param_3 ^ 0x811c9dc5U) * 0x1000193) * 0x1000193) * 0x1000193) *
          0x1000193) * 0x1000193;
  if ((param_4 != 5) && (uVar3 = (uVar3 ^ (int)param_3[5]) * 0x1000193, param_4 != 6)) {
    uVar3 = (uVar3 ^ (int)param_3[6]) * 0x1000193;
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar3;
  lVar1 = *param_2;
  if ((DAT_0f75ae28 == '\0') && (iVar4 = func_0x04108328(&DAT_0f75ae28), iVar4 != 0)) {
    func_0x0e628260();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ada8,0xf53dab8);
    func_0x0410844d(&DAT_0f75ae28);
  }
  lStack_38 = lVar1 + 0x18;
  plVar5 = (long *)(*(long *)(lVar1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f75ada8 + 4)) * 8);
  do {
    lVar2 = *plVar5;
    if (lVar2 == -1) goto LAB_0e6295c0;
    plVar5 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f75ada8 + 4));
  if (plVar5 == *(long **)(lVar1 + 0x38)) {
LAB_0e6295c0:
    puStack_40 = &DAT_0f75ada8;
  }
  else {
    puStack_40 = (undefined *)plVar5[2];
  }
  func_0x0ed621a0(&puStack_40,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = 1;
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


