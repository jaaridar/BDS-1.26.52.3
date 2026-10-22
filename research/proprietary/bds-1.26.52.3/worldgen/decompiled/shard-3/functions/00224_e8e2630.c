/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9e2630 (ELF vaddr 0xe8e2630)
 * Label: callee2-of:0xe8e24a0
 * Body:  [[0e9e2630, 0e9e28b9]]
 * Ghidra: FUN_0e9e2630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9e2630(undefined2 *param_1,long *param_2,long param_3,ulong param_4,undefined2 param_5)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((DAT_0f763290 == '\0') && (iVar2 = func_0x04108328(&DAT_0f763290), iVar2 != 0)) {
    func_0x0e86ec10(0xf763278);
    func_0x0410844d(&DAT_0f763290);
  }
  if (param_4 == 0) {
    uVar7 = 0x811c9dc5;
  }
  else {
    uVar3 = (ulong)((uint)param_4 & 3);
    if (param_4 < 4) {
      uVar7 = 0x811c9dc5;
      uVar6 = 0;
    }
    else {
      uVar7 = 0x811c9dc5;
      uVar6 = 0;
      do {
        uVar7 = ((int)*(char *)(param_3 + 3 + uVar6) ^
                ((int)*(char *)(param_3 + 2 + uVar6) ^
                ((int)*(char *)(param_3 + 1 + uVar6) ^
                ((int)*(char *)(param_3 + uVar6) ^ uVar7) * 0x1000193) * 0x1000193) * 0x1000193) *
                0x1000193;
        uVar6 = uVar6 + 4;
      } while ((param_4 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        uVar7 = ((int)*(char *)(uVar6 + param_3 + uVar8) ^ uVar7) * 0x1000193;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
  }
  *(undefined4 *)(param_2 + 5) = 1;
  *(uint *)((long)param_2 + 0x2c) = uVar7;
  lVar4 = *param_2;
  uStack_40 = func_0x0e8703f0(lVar4 + 0x18);
  lStack_38 = lVar4 + 0x18;
  func_0x0ed621a0(&uStack_40,*(undefined4 *)((long)param_2 + 0x2c));
  *param_1 = param_5;
  *(long **)(param_1 + 4) = param_2 + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  if (0xfffffffffffffff7 < param_4) {
    uVar5 = func_0x04882e30();
    func_0x048afca0(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 0x2c);
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x30) = lVar4;
      func_0x0412a280(lVar4,*(long *)(param_1 + 0x34) - lVar4);
      uVar5 = func_0x04882e20(uVar5);
    }
    func_0x04882e20(uVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_4 < 0x17) {
    lVar4 = (long)param_1 + 0x41;
    *(char *)(param_1 + 0x20) = (char)param_4 * '\x02';
    if (param_4 == 0) goto LAB_0e9e27cb;
  }
  else {
    uVar3 = 0x1a;
    if ((param_4 | 7) != 0x17) {
      uVar3 = (param_4 | 7) + 1;
    }
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar3);
    if (lVar4 == 0) {
      FUN_0eec74c0(uVar3,0);
    }
    *(long *)(param_1 + 0x28) = lVar4;
    *(ulong *)(param_1 + 0x20) = uVar3 | 1;
    *(ulong *)(param_1 + 0x24) = param_4;
  }
  func_0x0eee2f00(lVar4,param_3,param_4);
LAB_0e9e27cb:
  *(undefined1 *)(lVar4 + param_4) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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


