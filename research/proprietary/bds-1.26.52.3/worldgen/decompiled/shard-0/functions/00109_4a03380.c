/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a03380
 * Label: string:ZN14FeatureLoading28_addCaveFeatureMembersCommonIN8JsonUtil2
 * Body:  [[04a03380, 04a03429] [04a03430, 04a035d3] [04a035e0, 04a0366e]]
 * Ghidra: FUN_04a03380
 */


void FUN_04a03380(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000140;
  long in_stack_00000150;
  long in_stack_00000158;
  
  func_0x049f8770();
  lVar7 = (long)_uStack0000000000000008;
  _uStack0000000000000008 = (long *)CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
  _uStack0000000000000010 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  _uStack0000000000000018 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_00000020 = uStack00000000000000e8;
  uStack0000000000000024 = uStack00000000000000ec;
  in_stack_00000028 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
  in_stack_00000030 = uStack00000000000000f8;
  uStack0000000000000034 = uStack00000000000000fc;
  plVar4 = (long *)func_0x049d3ce0(in_stack_00000150 + 0x28,0x94154cce);
  if (_uStack0000000000000010 != lVar7) {
    do {
      uVar1 = *(uint *)(*_uStack0000000000000008 + -4 + _uStack0000000000000010 * 4);
      uVar6 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
      if ((uVar6 < (ulong)(plVar4[2] - plVar4[1] >> 3)) &&
         (lVar3 = *(long *)(plVar4[1] + uVar6 * 8), lVar3 != 0)) {
        uVar2 = *(uint *)(lVar3 + (ulong)(uVar1 & 0x7ff) * 4);
        if ((uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff) {
          (**(code **)(*plVar4 + 0x10))(plVar4,plVar4 + 4,(uVar2 & 0x3ffff) + 1,plVar4 + 4);
        }
      }
      _uStack0000000000000010 = _uStack0000000000000010 + -1;
      func_0x049f8770(&stack0x00000008);
    } while (_uStack0000000000000010 != lVar7);
  }
  puVar5 = (undefined8 *)func_0x04a045f0(&stack0x00000110);
  in_stack_00000028 = puVar5[4];
  if (in_stack_00000028 == 2) {
    in_stack_00000028 = 0;
    lVar7 = 0;
    _uStack0000000000000008 = (long *)0x0;
    _uStack0000000000000010 = 0;
    _uStack0000000000000018 = 0;
  }
  else {
    lVar3 = puVar5[in_stack_00000028];
    lVar7 = lVar3 + 0x20;
    if (*(char *)(lVar3 + 0x40) == '\x02') {
      _uStack0000000000000008 = *(long **)(lVar3 + 0x48);
    }
    else {
      _uStack0000000000000008 = (long *)(*(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 2);
    }
    _uStack0000000000000010 = *puVar5;
    _uStack0000000000000018 = puVar5[1];
    func_0x049f8770(&stack0x00000000);
  }
  in_stack_00000040 = (undefined4)lVar7;
  uStack0000000000000044 = (undefined4)((ulong)lVar7 >> 0x20);
  in_stack_00000060 = CONCAT44(uStack0000000000000024,in_stack_00000020);
  _uStack0000000000000068 = in_stack_00000028;
  in_stack_00000050 = uStack0000000000000010;
  uStack0000000000000054 = uStack0000000000000014;
  in_stack_00000058 = uStack0000000000000018;
  uStack000000000000005c = uStack000000000000001c;
  in_stack_00000048 = uStack0000000000000008;
  uStack000000000000004c = uStack000000000000000c;
  puVar5 = (undefined8 *)func_0x04a045f0(&stack0x00000110);
  in_stack_00000028 = puVar5[4];
  if (in_stack_00000028 == 2) {
    lVar7 = 0;
  }
  else {
    _uStack0000000000000008 = (long *)0x0;
    _uStack0000000000000010 = *puVar5;
    _uStack0000000000000018 = puVar5[1];
    func_0x049f8770(&stack0x00000000);
    lVar7 = (long)_uStack0000000000000008;
  }
  _uStack0000000000000008 = (long *)CONCAT44(uStack0000000000000044,in_stack_00000040);
  _uStack0000000000000010 = CONCAT44(uStack000000000000004c,in_stack_00000048);
  _uStack0000000000000018 = CONCAT44(uStack0000000000000054,in_stack_00000050);
  in_stack_00000020 = in_stack_00000058;
  uStack0000000000000024 = uStack000000000000005c;
  in_stack_00000028 = in_stack_00000060;
  in_stack_00000030 = uStack0000000000000068;
  uStack0000000000000034 = uStack000000000000006c;
  plVar4 = (long *)func_0x049f8a60(in_stack_00000158 + 0x28,0x91a67f13);
  if (_uStack0000000000000010 != lVar7) {
    do {
      uVar1 = *(uint *)(*_uStack0000000000000008 + -4 + _uStack0000000000000010 * 4);
      uVar6 = (ulong)((uVar1 & 0x3ffff) >> 0xb);
      if ((uVar6 < (ulong)(plVar4[2] - plVar4[1] >> 3)) &&
         (lVar3 = *(long *)(plVar4[1] + uVar6 * 8), lVar3 != 0)) {
        uVar2 = *(uint *)(lVar3 + (ulong)(uVar1 & 0x7ff) * 4);
        if ((uVar1 & 0xfffc0000 ^ uVar2) < 0x3ffff) {
          (**(code **)(*plVar4 + 0x10))(plVar4,plVar4 + 4,(uVar2 & 0x3ffff) + 1,plVar4 + 4);
        }
      }
      _uStack0000000000000010 = _uStack0000000000000010 + -1;
      func_0x049f8770(&stack0x00000008);
    } while (_uStack0000000000000010 != lVar7);
  }
  return;
}


