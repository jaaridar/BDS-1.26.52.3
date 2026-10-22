/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc967b50
 * Label: Dimension::vslot34
 * Body:  [[0c967b50, 0c967be6] [0c967bf6, 0c967f37]]
 * Ghidra: wg_Dimension__vslot34
 */


void wg_Dimension__vslot34(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_RBX;
  byte bStack0000000000000008;
  undefined1 uStack0000000000000009;
  undefined2 uStack000000000000000a;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  byte bStack0000000000000058;
  undefined1 uStack0000000000000059;
  undefined6 uStack000000000000005a;
  undefined8 in_stack_00000068;
  byte bStack0000000000000080;
  undefined7 uStack0000000000000081;
  undefined8 in_stack_00000090;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  ushort uStack0000000000000150;
  undefined1 uStack0000000000000152;
  ulong in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined1 in_stack_00000188;
  
  uVar4 = func_0x048648e0();
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 == '\0') goto LAB_0c967c12;
  uVar4 = func_0x048648e0(uVar4,&UNK_0129a41d);
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 == '\0') goto LAB_0c967c12;
  uVar4 = func_0x048648e0(uVar4,&UNK_0139c2c0);
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 == '\0') {
LAB_0c967bf6:
    uVar3 = 0;
    uStack0000000000000150 = 0;
  }
  else {
    uVar4 = func_0x048648e0(uVar4,&UNK_011ae691);
    cVar1 = func_0x04865410(uVar4);
    if (cVar1 == '\0') goto LAB_0c967bf6;
    bVar2 = func_0x04863ff0(uVar4,0);
    uVar3 = (ushort)bVar2;
    uStack0000000000000150 = 0x100;
  }
  uStack0000000000000150 = uStack0000000000000150 | uVar3;
  uStack0000000000000152 = 1;
LAB_0c967c12:
  uVar4 = func_0x048648e0(&stack0x00000070,&UNK_0146fe75);
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 != '\0') {
    _uStack0000000000000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000030 = 0;
    _uStack0000000000000038 = 0;
    _uStack0000000000000020 = 0;
    _uStack0000000000000028 = 0;
    uVar5 = func_0x048648e0(uVar4,&UNK_0119a681);
    cVar1 = func_0x04865490(uVar5);
    if (cVar1 != '\0') {
      bStack0000000000000058 = 0;
      uStack0000000000000059 = 0;
      func_0x04863cb0(&stack0x00000008,uVar5,&stack0x00000058);
      _uStack0000000000000020 =
           CONCAT44(uStack000000000000000c,
                    CONCAT22(uStack000000000000000a,
                             CONCAT11(uStack0000000000000009,bStack0000000000000008)));
      _uStack0000000000000028 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000030 = in_stack_00000018;
      bStack0000000000000008 = 0;
      uStack0000000000000009 = 0;
      if ((bStack0000000000000058 & 1) != 0) {
        func_0x0412a280(in_stack_00000068,
                        CONCAT62(uStack000000000000005a,
                                 CONCAT11(uStack0000000000000059,bStack0000000000000058)) &
                        0xfffffffffffffffe);
      }
    }
    uVar4 = func_0x048648e0(uVar4,&UNK_012f24d0);
    cVar1 = func_0x04865490(uVar4);
    if (cVar1 != '\0') {
      bStack0000000000000058 = 0;
      uStack0000000000000059 = 0;
      func_0x04863cb0(&stack0x00000008,uVar4,&stack0x00000058);
      _uStack0000000000000038 =
           CONCAT44(uStack000000000000000c,
                    CONCAT22(uStack000000000000000a,
                             CONCAT11(uStack0000000000000009,bStack0000000000000008)));
      _uStack0000000000000040 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000048 = in_stack_00000018;
      bStack0000000000000008 = 0;
      uStack0000000000000009 = 0;
      if ((bStack0000000000000058 & 1) != 0) {
        func_0x0412a280(in_stack_00000068,
                        CONCAT62(uStack000000000000005a,
                                 CONCAT11(uStack0000000000000059,bStack0000000000000058)) &
                        0xfffffffffffffffe);
      }
    }
    in_stack_00000168 = in_stack_00000030;
    in_stack_00000158 = _uStack0000000000000020;
    in_stack_00000160 = _uStack0000000000000028;
    uStack0000000000000170 = uStack0000000000000038;
    uStack0000000000000174 = uStack000000000000003c;
    uStack0000000000000178 = uStack0000000000000040;
    uStack000000000000017c = uStack0000000000000044;
    in_stack_00000180 = in_stack_00000048;
    in_stack_00000188 = 1;
  }
  uVar4 = func_0x048648e0(&stack0x00000070,&UNK_0137a61f);
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 != '\0') {
    uVar5 = func_0x048648e0(uVar4,&UNK_01323668);
    cVar1 = func_0x04864220(uVar5);
    if (cVar1 == '\0') {
      cVar1 = func_0x04865490(uVar5);
      if (cVar1 != '\0') {
        bStack0000000000000008 = 0;
        uStack0000000000000009 = 0;
        func_0x04863cb0(&stack0x00000020,uVar5,&stack0x00000008);
        in_stack_000000e8 = in_stack_00000030;
        uStack00000000000000d8 = uStack0000000000000020;
        uStack00000000000000dc = uStack0000000000000024;
        uStack00000000000000e0 = uStack0000000000000028;
        uStack00000000000000e4 = uStack000000000000002c;
        _uStack0000000000000020 = _uStack0000000000000020 & 0xffffffffffff0000;
        if ((bStack0000000000000008 & 1) != 0) {
          func_0x0412a280(in_stack_00000018,
                          CONCAT44(uStack000000000000000c,
                                   CONCAT22(uStack000000000000000a,
                                            CONCAT11(uStack0000000000000009,bStack0000000000000008))
                                  ) & 0xfffffffffffffffe);
        }
      }
    }
    uVar4 = func_0x048648e0(uVar4,&UNK_0136e344);
    cVar1 = func_0x04865490(uVar4);
    if (cVar1 != '\0') {
      bStack0000000000000008 = 0;
      uStack0000000000000009 = 0;
      func_0x04863cb0(&stack0x00000020,uVar4,&stack0x00000008);
      uStack00000000000000f0 = uStack0000000000000020;
      uStack00000000000000f4 = uStack0000000000000024;
      uStack00000000000000f8 = uStack0000000000000028;
      uStack00000000000000fc = uStack000000000000002c;
      in_stack_00000100 = in_stack_00000030;
      _uStack0000000000000020 = _uStack0000000000000020 & 0xffffffffffff0000;
      if ((bStack0000000000000008 & 1) != 0) {
        func_0x0412a280(in_stack_00000018,
                        CONCAT44(uStack000000000000000c,
                                 CONCAT22(uStack000000000000000a,
                                          CONCAT11(uStack0000000000000009,bStack0000000000000008)))
                        & 0xfffffffffffffffe);
      }
    }
  }
  uVar4 = func_0x048648e0(&stack0x00000070,&UNK_014d3b42);
  cVar1 = func_0x04864290(uVar4);
  if (cVar1 != '\0') {
    func_0x0c96b6f0(uVar4,&stack0x000000a0,&UNK_013f02d1,4);
    func_0x0c96b6f0(uVar4,&stack0x000000a0,&UNK_013521b9,8);
  }
  func_0x048e05d0();
  *(undefined1 *)(unaff_RBX + 0xf0) = 1;
  func_0x048e0830(&stack0x000000a0);
  func_0x0485e2d0(&stack0x00000190);
  func_0x04863610(&stack0x00000070);
  if ((bStack0000000000000080 & 1) != 0) {
    func_0x0412a280(in_stack_00000090,
                    CONCAT71(uStack0000000000000081,bStack0000000000000080) & 0xfffffffffffffffe);
  }
  return;
}


