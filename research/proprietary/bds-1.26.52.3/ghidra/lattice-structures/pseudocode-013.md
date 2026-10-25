# thunk_FUN_0c435cf9

- entry: `0xc437fa0`
- body size: 7 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0c435cf9(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_RBX;
  undefined8 unaff_RBP;
  long *unaff_R13;
  undefined8 unaff_R15;
  undefined8 *in_stack_00000010;
  undefined1 in_stack_00000018;
  undefined1 uStack000000000000001c;
  undefined1 in_stack_00000020;
  undefined1 uStack0000000000000024;
  undefined1 in_stack_00000028;
  undefined1 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined3 uStack0000000000000034;
  undefined1 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  long *in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined2 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined1 uStack000000000000009c;
  undefined1 in_stack_000000a0;
  undefined1 uStack00000000000000a4;
  undefined1 in_stack_000000a8;
  undefined1 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined1 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 uStack00000000000000c4;
  undefined4 uStack00000000000000cc;
  long *in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined2 in_stack_00000108;
  undefined8 *in_stack_00000180;
  undefined8 *in_stack_00000188;
  undefined8 *in_stack_00000190;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  *unaff_RBX = unaff_RBP;
  func_0x0c415fb0(unaff_RBX + 3,&stack0x00000110);
  _DAT_0f6e16c0 = unaff_RBX + 3;
  _DAT_0f6e16c8 = unaff_RBX;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c435d50:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c435d50;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e16c0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x9600000000a;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e90 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9e90 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_014da22e,0x11,&UNK_0132e32b,0xc,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e16d0 = puVar10 + 3;
  _DAT_0f6e16d8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c435eb3:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c435eb3;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e16d0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x1c20000000a;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = (undefined4)unaff_R15;
  uVar4 = in_stack_00000030;
  _uStack0000000000000034 = (int)((ulong)unaff_R15 >> 0x20);
  uVar6 = _uStack0000000000000034;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack0000000000000034 = (undefined3)((ulong)unaff_R15 >> 0x20);
  uVar5 = uStack0000000000000034;
  uVar8 = uVar6;
  if (_DAT_0f6e9e90 != 0) {
    _uStack0000000000000034 = CONCAT13(*(undefined1 *)(_DAT_0f6e9e90 + 200),uStack0000000000000034);
    uVar8 = _uStack0000000000000034;
  }
  _uStack0000000000000034 = uVar8;
  func_0x0c3f4d50(&stack0x00000110,&UNK_0131b0be,0x13,&UNK_0132e32b,0xc,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e16e0 = puVar10 + 3;
  _DAT_0f6e16e8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c436009:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436009;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e16e0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0xe1000000005;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e68 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9e68 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_011adf5d,8,&UNK_012cd575,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e16f0 = puVar10 + 3;
  _DAT_0f6e16f8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c43616c:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c43616c;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e16f0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x258000000005;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e68 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9e68 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_0136dda2,0xd,&UNK_012cd575,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1700 = puVar10 + 3;
  _DAT_0f6e1708 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c4362cf:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c4362cf;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1700,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x70800000005;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  _uStack0000000000000034 = uVar6;
  if (_DAT_0f6e9e68 != 0) {
    _uStack0000000000000034 = CONCAT13(*(undefined1 *)(_DAT_0f6e9e68 + 200),uVar5);
  }
  in_stack_00000030 = uVar4;
  func_0x0c3f4d50(&stack0x00000110,&UNK_014da240,0xf,&UNK_012cd575,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1710 = puVar10 + 3;
  _DAT_0f6e1718 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c436425:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436425;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1710,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x70800000012;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9ed0 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9ed0 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_011fe68f,8,&UNK_011fe68f,8,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e2c50 = puVar10 + 3;
  _DAT_0f6e2c58 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c436584:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436584;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e2c50,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x12c000000012;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9ed0 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9ed0 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_01281cb4,0xd,&UNK_011fe68f,8,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1720 = puVar10 + 3;
  _DAT_0f6e1728 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c4366e7:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c4366e7;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1720,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x32000000014;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  _uStack0000000000000034 = uVar6;
  if (_DAT_0f6e9ee0 != 0) {
    _uStack0000000000000034 = CONCAT13(*(undefined1 *)(_DAT_0f6e9ee0 + 200),uVar5);
  }
  in_stack_00000030 = uVar4;
  func_0x0c3f4d50(&stack0x00000110,&UNK_0124bef0,6,&UNK_0124bef0,6,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = unaff_RBP;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1730 = puVar10 + 3;
  _DAT_0f6e1738 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == unaff_R13) {
    lVar9 = 0x20;
LAB_0c436839:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436839;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1730,0xf53dab8);
  in_stack_00000180 = (undefined8 *)0x0;
  in_stack_00000188 = (undefined8 *)0x0;
  in_stack_00000190 = (undefined8 *)0x0;
  in_stack_00000010 = &stack0x00000180;
  in_stack_00000018 = 0;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  in_stack_00000188 = puVar10 + 6;
  *puVar10 = 0x4d656c7472757418;
  puVar10[1] = 0x7265747361;
  puVar10[3] = 0x4d656c747275741a;
  puVar10[4] = 0x327265747361;
  in_stack_00000010 = (undefined8 *)0x19000000002;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 3;
  _uStack0000000000000034 = 0x1000000;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e50 != 0) {
    _uStack0000000000000034 = (uint)*(byte *)(_DAT_0f6e9e50 + 200) << 0x18;
  }
  in_stack_00000090 = 0x1900000000b;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x100000000000002;
  in_stack_000000b8 = 1;
  in_stack_000000c0 = 0;
  uStack00000000000000c4 = _DAT_014e9660;
  uStack00000000000000cc = 0;
  in_stack_000000f0 = (long *)0x0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  if (_DAT_0f6e9e98 != 0) {
    in_stack_000000b0 = CONCAT17(*(undefined1 *)(_DAT_0f6e9e98 + 200),2);
  }
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000180 = puVar10;
  in_stack_00000190 = in_stack_00000188;
  func_0x0c4086c0(&stack0x000001a0,&stack0x00000010,&stack0x00000110);
  func_0x0c3f4f60(&stack0x00000110,&UNK_011fe698,0xd,&stack0x00000180,&stack0x000001a0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1740 = puVar10 + 3;
  _DAT_0f6e1748 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  lVar7 = in_stack_000001a0;
  lVar9 = in_stack_000001a8;
  if (in_stack_000001a0 != 0) {
    for (; lVar7 != lVar9; lVar9 = lVar9 + -0x80) {
      plVar1 = *(long **)(lVar9 + -0x20);
      if ((long *)(lVar9 + -0x40) == plVar1) {
        lVar11 = 0x20;
LAB_0c436b35:
        (**(code **)(*plVar1 + lVar11))();
      }
      else {
        lVar11 = 0x28;
        if (plVar1 != (long *)0x0) goto LAB_0c436b35;
      }
    }
    in_stack_000001a8 = lVar7;
    func_0x0412a280(in_stack_000001a0,in_stack_000001b0 - in_stack_000001a0);
  }
  if (in_stack_000000f0 == (long *)&stack0x000000d0) {
    lVar9 = 0x20;
LAB_0c436bc7:
    (**(code **)(*in_stack_000000f0 + lVar9))();
    if (in_stack_00000070 != unaff_R13) goto LAB_0c436ba6;
LAB_0c436bd7:
    lVar9 = 0x20;
LAB_0c436bdc:
    (**(code **)(*in_stack_00000070 + lVar9))();
    puVar10 = in_stack_00000180;
  }
  else {
    lVar9 = 0x28;
    if (in_stack_000000f0 != (long *)0x0) goto LAB_0c436bc7;
    if (in_stack_00000070 == unaff_R13) goto LAB_0c436bd7;
LAB_0c436ba6:
    lVar9 = 0x28;
    puVar10 = in_stack_00000180;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436bdc;
  }
  in_stack_00000180 = puVar10;
  puVar3 = in_stack_00000188;
  if (puVar10 != (undefined8 *)0x0) {
    for (; puVar10 != puVar3; puVar3 = puVar3 + -3) {
      if ((*(byte *)(puVar3 + -3) & 1) != 0) {
        func_0x0412a280(puVar3[-1],puVar3[-3] & 0xfffffffffffffffe);
      }
    }
    in_stack_00000188 = puVar10;
    func_0x0412a280(in_stack_00000180,(long)in_stack_00000190 - (long)in_stack_00000180);
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1740,0xf53dab8);
  in_stack_00000180 = (undefined8 *)0x0;
  in_stack_00000188 = (undefined8 *)0x0;
  in_stack_00000190 = (undefined8 *)0x0;
  in_stack_00000018 = 0;
  in_stack_00000010 = &stack0x00000180;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  in_stack_00000188 = puVar10 + 6;
  *puVar10 = 0x4d656c7472757418;
  puVar10[1] = 0x7265747361;
  puVar10[3] = 0x4d656c747275741a;
  puVar10[4] = 0x327265747361;
  in_stack_00000010 = (undefined8 *)0x32000000002;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 3;
  _uStack0000000000000034 = 0x1000000;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e50 != 0) {
    _uStack0000000000000034 = (uint)*(byte *)(_DAT_0f6e9e50 + 200) << 0x18;
  }
  in_stack_00000090 = 0x3200000000b;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x100000000000002;
  in_stack_000000b8 = 1;
  in_stack_000000c0 = 0;
  uStack00000000000000c4 = _DAT_014e9660;
  uStack00000000000000cc = 0;
  in_stack_000000f0 = (long *)0x0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  if (_DAT_0f6e9e98 != 0) {
    in_stack_000000b0 = CONCAT17(*(undefined1 *)(_DAT_0f6e9e98 + 200),2);
  }
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000180 = puVar10;
  in_stack_00000190 = in_stack_00000188;
  func_0x0c4086c0(&stack0x000001a0,&stack0x00000010,&stack0x00000110);
  func_0x0c3f4f60(&stack0x00000110,&UNK_012e7e22,0x12,&stack0x00000180,&stack0x000001a0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1750 = puVar10 + 3;
  _DAT_0f6e1758 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  lVar7 = in_stack_000001a0;
  lVar9 = in_stack_000001a8;
  if (in_stack_000001a0 != 0) {
    for (; lVar7 != lVar9; lVar9 = lVar9 + -0x80) {
      plVar1 = *(long **)(lVar9 + -0x20);
      if ((long *)(lVar9 + -0x40) == plVar1) {
        lVar11 = 0x20;
LAB_0c436f35:
        (**(code **)(*plVar1 + lVar11))();
      }
      else {
        lVar11 = 0x28;
        if (plVar1 != (long *)0x0) goto LAB_0c436f35;
      }
    }
    in_stack_000001a8 = lVar7;
    func_0x0412a280(in_stack_000001a0,in_stack_000001b0 - in_stack_000001a0);
  }
  if (in_stack_000000f0 == (long *)&stack0x000000d0) {
    lVar9 = 0x20;
LAB_0c436fcc:
    (**(code **)(*in_stack_000000f0 + lVar9))();
    if (in_stack_00000070 != (long *)&stack0x00000050) goto LAB_0c436fab;
LAB_0c436fe1:
    lVar9 = 0x20;
LAB_0c436fe6:
    (**(code **)(*in_stack_00000070 + lVar9))();
    puVar10 = in_stack_00000180;
  }
  else {
    lVar9 = 0x28;
    if (in_stack_000000f0 != (long *)0x0) goto LAB_0c436fcc;
    if (in_stack_00000070 == (long *)&stack0x00000050) goto LAB_0c436fe1;
LAB_0c436fab:
    lVar9 = 0x28;
    puVar10 = in_stack_00000180;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c436fe6;
  }
  in_stack_00000180 = puVar10;
  puVar3 = in_stack_00000188;
  if (puVar10 != (undefined8 *)0x0) {
    for (; puVar10 != puVar3; puVar3 = puVar3 + -3) {
      if ((*(byte *)(puVar3 + -3) & 1) != 0) {
        func_0x0412a280(puVar3[-1],puVar3[-3] & 0xfffffffffffffffe);
      }
    }
    in_stack_00000188 = puVar10;
    func_0x0412a280(in_stack_00000180,(long)in_stack_00000190 - (long)in_stack_00000180);
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1750,0xf53dab8);
  in_stack_00000180 = (undefined8 *)0x0;
  in_stack_00000188 = (undefined8 *)0x0;
  in_stack_00000190 = (undefined8 *)0x0;
  in_stack_00000018 = 0;
  in_stack_00000010 = &stack0x00000180;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  in_stack_00000188 = puVar10 + 6;
  *puVar10 = 0x4d656c7472757418;
  puVar10[1] = 0x7265747361;
  puVar10[3] = 0x4d656c747275741a;
  puVar10[4] = 0x327265747361;
  in_stack_00000010 = (undefined8 *)0x19000000002;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 5;
  _uStack0000000000000034 = 0x1000000;
  in_stack_00000038 = 1;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9e50 != 0) {
    _uStack0000000000000034 = (uint)*(byte *)(_DAT_0f6e9e50 + 200) << 0x18;
  }
  in_stack_00000090 = 0x1900000000b;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  in_stack_000000a0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b0 = 0x100000000000003;
  in_stack_000000b8 = 1;
  in_stack_000000c0 = 0;
  uStack00000000000000c4 = _DAT_014e9660;
  uStack00000000000000cc = 0;
  in_stack_000000f0 = (long *)0x0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  if (_DAT_0f6e9e98 != 0) {
    in_stack_000000b0 = CONCAT17(*(undefined1 *)(_DAT_0f6e9e98 + 200),3);
  }
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000180 = puVar10;
  in_stack_00000190 = in_stack_00000188;
  func_0x0c4086c0(&stack0x000001a0,&stack0x00000010,&stack0x00000110);
  func_0x0c3f4f60(&stack0x00000110,&UNK_014bec0b,0x14,&stack0x00000180,&stack0x000001a0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1760 = puVar10 + 3;
  _DAT_0f6e1768 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  lVar7 = in_stack_000001a0;
  lVar9 = in_stack_000001a8;
  if (in_stack_000001a0 != 0) {
    for (; lVar7 != lVar9; lVar9 = lVar9 + -0x80) {
      plVar1 = *(long **)(lVar9 + -0x20);
      if ((long *)(lVar9 + -0x40) == plVar1) {
        lVar11 = 0x20;
LAB_0c437335:
        (**(code **)(*plVar1 + lVar11))();
      }
      else {
        lVar11 = 0x28;
        if (plVar1 != (long *)0x0) goto LAB_0c437335;
      }
    }
    in_stack_000001a8 = lVar7;
    func_0x0412a280(in_stack_000001a0,in_stack_000001b0 - in_stack_000001a0);
  }
  if (in_stack_000000f0 == (long *)&stack0x000000d0) {
    lVar9 = 0x20;
LAB_0c4373c7:
    (**(code **)(*in_stack_000000f0 + lVar9))();
    if (in_stack_00000070 != (long *)&stack0x00000050) goto LAB_0c4373a6;
LAB_0c4373d7:
    lVar9 = 0x20;
LAB_0c4373dc:
    (**(code **)(*in_stack_00000070 + lVar9))();
    puVar10 = in_stack_00000180;
  }
  else {
    lVar9 = 0x28;
    if (in_stack_000000f0 != (long *)0x0) goto LAB_0c4373c7;
    if (in_stack_00000070 == (long *)&stack0x00000050) goto LAB_0c4373d7;
LAB_0c4373a6:
    lVar9 = 0x28;
    puVar10 = in_stack_00000180;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c4373dc;
  }
  in_stack_00000180 = puVar10;
  puVar3 = in_stack_00000188;
  if (puVar10 != (undefined8 *)0x0) {
    for (; puVar10 != puVar3; puVar3 = puVar3 + -3) {
      if ((*(byte *)(puVar3 + -3) & 1) != 0) {
        func_0x0412a280(puVar3[-1],puVar3[-3] & 0xfffffffffffffffe);
      }
    }
    in_stack_00000188 = puVar10;
    func_0x0412a280(in_stack_00000180,(long)in_stack_00000190 - (long)in_stack_00000180);
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1760,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x7080000001b;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f18 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f18 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_012b4405,0xc,&UNK_0122b062,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1770 = puVar10 + 3;
  _DAT_0f6e1778 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
LAB_0c4375b0:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c4375b0;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1770,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0x12c00000001b;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f18 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f18 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_014bec20,0x11,&UNK_0122b062,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1780 = puVar10 + 3;
  _DAT_0f6e1788 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
LAB_0c437713:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c437713;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1780,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0xe1000000020;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f40 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f40 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_011fe6a6,0xc,&UNK_01409227,0xb,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e1790 = puVar10 + 3;
  _DAT_0f6e1798 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
LAB_0c437876:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c437876;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e1790,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0xe1000000021;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f48 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f48 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_011e2a16,7,&UNK_011e2a16,7,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e17a0 = puVar10 + 3;
  _DAT_0f6e17a8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
LAB_0c4379d5:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c4379d5;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e17a0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0xe1000000022;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f50 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f50 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_01386d5a,6,&UNK_01386d5a,6,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e17b0 = puVar10 + 3;
  _DAT_0f6e17b8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
LAB_0c437b34:
    (**(code **)(*in_stack_00000070 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 != (long *)0x0) goto LAB_0c437b34;
  }
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e17b0,0xf53dab8);
  in_stack_00000010 = (undefined8 *)0xe1000000023;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uVar2 = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = _DAT_014e9660;
  uStack000000000000004c = 0;
  in_stack_00000070 = (long *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  if (_DAT_0f6e9f58 != 0) {
    uVar2 = (uint)*(byte *)(_DAT_0f6e9f58 + 200);
  }
  _uStack0000000000000034 = uVar2 << 0x18;
  func_0x0c3f4d50(&stack0x00000110,&UNK_01267f19,8,&UNK_01267f19,8,&stack0x00000010);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x88,0);
  }
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0f367d48;
  func_0x0c415fb0(puVar10 + 3,&stack0x00000110);
  _DAT_0f6e17c0 = puVar10 + 3;
  _DAT_0f6e17c8 = puVar10;
  func_0x0c3f4610(&stack0x00000110);
  if (in_stack_00000070 == (long *)&stack0x00000050) {
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (in_stack_00000070 == (long *)0x0) goto LAB_0c437c99;
  }
  (**(code **)(*in_stack_00000070 + lVar9))();
LAB_0c437c99:
  __cxa_atexit(&UNK_06e78570,&DAT_0f6e17c0,0xf53dab8);
  __cxa_atexit(&UNK_0c3f8480,0xf6e17d8,0xf53dab8);
  __cxa_atexit(&UNK_0c3f8530,0xf6e17f0,0xf53dab8);
  __cxa_atexit(&UNK_0c3f8550,0xf6e1808,0xf53dab8);
  _DAT_0f6e1820 = 0;
  uRam000000000f6e1828 = 0;
  _DAT_0f6e1830 = 0;
  uRam000000000f6e1838 = 0;
  _DAT_0f6e1840 = 0x3f800000;
  __cxa_atexit(&UNK_0c3f85c0,&DAT_0f6e1820,0xf53dab8);
  _DAT_0f6e1848 = 0;
  uRam000000000f6e1850 = 0;
  _DAT_0f6e1858 = 0;
  uRam000000000f6e1860 = 0;
  _DAT_0f6e1868 = 0x3f800000;
  __cxa_atexit(&UNK_0c3f85c0,&DAT_0f6e1848,0xf53dab8);
  __cxa_atexit(&UNK_0c3f8610,0xf6e1870,0xf53dab8);
  return;
}


```
