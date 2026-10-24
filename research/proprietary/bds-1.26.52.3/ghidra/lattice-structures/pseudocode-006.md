# FUN_04e84570

- entry: `0x4e84570`
- body size: 1155 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_04e84570(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long unaff_R14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 *in_stack_00000058;
  undefined4 *in_stack_00000060;
  undefined4 *in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  undefined1 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  do {
    func_0x0eeb81b0(&stack0x000000a8);
joined_r0x04e84583:
    if ((_uStack0000000000000028 & 1) != 0) {
      func_0x0412a280(in_stack_00000038,_uStack0000000000000028 & 0xfffffffffffffffe);
    }
    func_0x04862ba0();
    func_0x048655b0(&stack0x00000078,*(undefined8 *)(unaff_R14 + 0x10));
    cVar4 = func_0x04862c80();
    func_0x04862b40(&stack0x00000078);
    if (cVar4 != '\0') {
      func_0x04862b40(&stack0x00000098);
      puVar3 = in_stack_00000060;
      if ((in_stack_00000040._4_1_ != '\0') && (in_stack_00000060 != in_stack_00000058)) {
        uVar7 = *(undefined8 *)(unaff_R14 + 0x10);
        puVar12 = in_stack_00000058;
        do {
          func_0x048650e0(&stack0x000000c0,uVar7,puVar12);
          FUN_04863610(&stack0x000000c0);
          puVar12 = puVar12 + 6;
        } while (puVar12 != puVar3);
      }
      uVar5 = func_0x048641f0(*(undefined8 *)(unaff_R14 + 0x10));
      if ((ulong)uVar5 < *(ulong *)(in_stack_00000048 + 0x90)) {
        uVar1 = *(undefined4 *)(unaff_R14 + 8);
        uVar6 = func_0x048641f0(*(undefined8 *)(unaff_R14 + 0x10));
        in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,uVar6);
        _uStack0000000000000028 =
             CONCAT44(uStack000000000000002c,*(undefined4 *)(in_stack_00000048 + 0x90));
        func_0x04b0a9a0(1,3,uVar1,&UNK_011ec510,&stack0x00000078,&stack0x00000028);
        in_stack_00000020._4_4_ = 0;
      }
      uVar5 = func_0x048641f0(*(undefined8 *)(unaff_R14 + 0x10));
      if (*(ulong *)(in_stack_00000048 + 0x98) < (ulong)uVar5) {
        uVar1 = *(undefined4 *)(unaff_R14 + 8);
        uVar6 = func_0x048641f0(*(undefined8 *)(unaff_R14 + 0x10));
        in_stack_00000078 = CONCAT44(in_stack_00000078._4_4_,uVar6);
        _uStack0000000000000028 =
             CONCAT44(uStack000000000000002c,*(undefined4 *)(in_stack_00000048 + 0x98));
        func_0x04b0ab40(1,3,uVar1,&UNK_0145eaee,&stack0x00000078,&stack0x00000028);
        in_stack_00000020._4_4_ = 0;
      }
      puVar12 = in_stack_00000058;
      puVar3 = in_stack_00000060;
      if (in_stack_00000058 != (undefined4 *)0x0) {
        for (; puVar12 != puVar3; puVar3 = puVar3 + -6) {
          if ((*(byte *)(puVar3 + -6) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(puVar3 + -2),
                            *(ulong *)(puVar3 + -6) & 0xfffffffffffffffe);
          }
        }
        in_stack_00000060 = puVar12;
        func_0x0412a280(in_stack_00000058,(long)in_stack_00000068 - (long)in_stack_00000058);
      }
      return (ulong)in_stack_00000020._4_4_ & 0xffffffffffffff01;
    }
    uVar7 = func_0x04862ca0();
    uVar8 = func_0x0eee2e90(uVar7);
    if (0xfffffffffffffff7 < uVar8) {
      uVar7 = func_0x04882e30();
      FUN_04886070(&stack0x00000058);
      uVar7 = _Unwind_Resume(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      func_0x04862b40(&stack0x00000098);
      FUN_04886070(&stack0x00000058);
      _Unwind_Resume(uVar7);
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    if (uVar8 < 0x17) {
      _uStack0000000000000028 = CONCAT71(stack0x00000029,(char)uVar8 * '\x02');
      lVar9 = (long)&stack0x00000028 + 1;
      if (uVar8 != 0) goto LAB_04e843ab;
    }
    else {
      uVar11 = (uVar8 | 7) + 1;
      if ((uVar8 | 7) == 0x17) {
        uVar11 = 0x1a;
      }
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
      if (lVar9 == 0) {
        func_0x0eec74c0(uVar11,0);
      }
      _uStack0000000000000028 = uVar11 | 1;
      _uStack0000000000000030 = uVar8;
      in_stack_00000038 = lVar9;
LAB_04e843ab:
      func_0x0eee2ee0(lVar9,uVar7,uVar8);
    }
    *(undefined1 *)(lVar9 + uVar8) = 0;
    in_stack_00000080 = _uStack0000000000000028 >> 1 & 0x7f;
    in_stack_00000078 = (long)&stack0x00000028 + 1;
    if ((_uStack0000000000000028 & 1) != 0) {
      in_stack_00000080 = _uStack0000000000000030;
      in_stack_00000078 = in_stack_00000038;
    }
    in_stack_00000088 = 1;
    in_stack_00000070 = 0;
    func_0x0eeb79f0(&stack0x000000a8,&stack0x00000070);
    if ((in_stack_00000070 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(in_stack_00000070 & 0xff00ffffffffffff) - 8);
    }
    func_0x04862b80();
    plVar10 = (long *)func_0x04e85ae0(in_stack_00000048);
    puVar3 = in_stack_00000060;
    if (plVar10 != (long *)0x0) {
      uVar1 = *(undefined4 *)(unaff_R14 + 8);
      uVar7 = func_0x04862b80();
      uVar7 = (**(code **)(*plVar10 + 0x18))
                        (plVar10,uVar1,uVar7,in_stack_00000090,in_stack_00000050._4_4_);
      in_stack_00000020._4_4_ =
           (uint)CONCAT71((int7)((ulong)uVar7 >> 8),(byte)uVar7 & in_stack_00000020._4_1_);
      func_0x0eeb81b0(&stack0x000000a8);
      goto joined_r0x04e84583;
    }
    if (in_stack_00000040._4_1_ == '\0') {
      in_stack_00000020._4_4_ = 0;
      func_0x0eeb81b0(&stack0x000000a8);
      goto joined_r0x04e84583;
    }
    if (in_stack_00000068 <= in_stack_00000060) {
      in_stack_00000060 = (undefined4 *)func_0x04909a40(&stack0x00000058,&stack0x00000028);
      func_0x0eeb81b0(&stack0x000000a8);
      goto joined_r0x04e84583;
    }
    if ((_uStack0000000000000028 & 1) == 0) {
      *(long *)(in_stack_00000060 + 4) = in_stack_00000038;
      *in_stack_00000060 = uStack0000000000000028;
      in_stack_00000060[1] = uStack000000000000002c;
      in_stack_00000060[2] = uStack0000000000000030;
      in_stack_00000060[3] = uStack0000000000000034;
    }
    else {
      func_0x0412e5e0(in_stack_00000060,in_stack_00000038,_uStack0000000000000030);
    }
    in_stack_00000060 = puVar3 + 6;
  } while( true );
}


```
