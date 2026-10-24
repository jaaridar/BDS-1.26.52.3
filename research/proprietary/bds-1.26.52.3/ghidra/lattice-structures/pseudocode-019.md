# FUN_04fd3c93

- entry: `0x4fd3c93`
- body size: 262 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04fd3c93(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong in_RAX;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_RBX;
  long lVar5;
  ulong unaff_R12;
  long unaff_R14;
  long lVar6;
  undefined8 uStack0000000000000020;
  
  uVar4 = (ulong)(uint)((int)param_2 * 2);
  if (unaff_R12 < uVar4) {
    unaff_R12 = uVar4;
  }
  if (0xc30c30c30c30c2 < param_2) {
    unaff_R12 = in_RAX;
  }
  uStack0000000000000020 = param_1;
  if (unaff_R12 != 0) {
    if (in_RAX < unaff_R12) {
      uVar3 = func_0x04882eb0();
      func_0x04fd4060(&stack0x00000000);
      _Unwind_Resume(uVar3);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12 * 0xa8);
    if (lVar2 != 0) goto LAB_04fd3ced;
    FUN_0eec74c0(unaff_R12 * 0xa8,0);
  }
  lVar2 = 0;
LAB_04fd3ced:
  lVar6 = unaff_R14 + lVar2;
  func_0x04fd3da0(lVar6);
  func_0x04fd3eb0();
  uVar3 = *(undefined8 *)(unaff_RBX + 8);
  for (lVar5 = lVar6 + 0xa8; lVar6 != lVar5; lVar5 = lVar5 + -0xa8) {
    func_0x04fcf220();
  }
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,unaff_R12 * 0xa8);
  }
  return uVar3;
}


```
