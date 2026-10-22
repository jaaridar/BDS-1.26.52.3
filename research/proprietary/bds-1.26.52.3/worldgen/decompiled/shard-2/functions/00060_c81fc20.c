/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc81fc20
 * Label: string:world_gen
 * Body:  [[0c81fc20, 0c81fcad] [0c81fcb0, 0c81fd35] [0c81fd40, 0c81fea5] [0c81feb0, 0c8200ad] [0c8200b0, 0c820108] [0c82011d, 0c82013b] [0c82015e, 0c820162] [0c82018d, 0c8201ac]]
 * Ghidra: FUN_0c81fc20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c81fc20(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  char *in_RAX;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  byte bStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack0000000000000040;
  uint uStack000000000000004c;
  undefined4 *puStack0000000000000050;
  undefined4 *puStack0000000000000058;
  undefined4 *puStack0000000000000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  undefined1 in_stack_00000080;
  long in_stack_00000088;
  
  *(char *)(param_4 + -0x4fc3dbac) = *(char *)(param_4 + -0x4fc3dbac) + (char)param_4;
  *(int *)(in_RAX + 0x190bf) = *(int *)(in_RAX + 0x190bf) + (int)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (*in_RAX == '\0') {
    puStack0000000000000050 = (undefined4 *)0x0;
    puStack0000000000000058 = (undefined4 *)0x0;
    puStack0000000000000060 = (undefined4 *)0x0;
    lStack0000000000000040 = param_1;
    func_0x04b0a270(param_2 + 0x40,
                    (*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 3) *
                    -0x30c30c30c30c30c3,0);
    func_0x04865530(&stack0x00000090,*(undefined8 *)(param_2 + 0x10));
    in_stack_00000088 = param_2 + 0x70;
    _bStack000000000000001c = (uint)CONCAT71((int7)((ulong)in_stack_00000088 >> 8),1);
    uStack000000000000004c = (uint)in_stack_00000038._4_1_;
    while( true ) {
      func_0x048655b0(&stack0x00000070,*(undefined8 *)(param_2 + 0x10));
      cVar4 = func_0x04862c80(&stack0x00000090,&stack0x00000070);
      func_0x04862b40(&stack0x00000070);
      if (cVar4 != '\0') break;
      uVar7 = func_0x04862ca0(&stack0x00000090);
      uVar8 = func_0x0eee2e90(uVar7);
      if (0xfffffffffffffff7 < uVar8) {
        uVar7 = func_0x04882e30();
        func_0x04886070(&stack0x00000050);
        uVar7 = func_0x0eee2d70(uVar7);
        uVar7 = func_0x04882e20(uVar7);
        func_0x04862b40(&stack0x00000090);
        func_0x04886070(&stack0x00000050);
        func_0x0eee2d70(uVar7);
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      if (uVar8 < 0x17) {
        _uStack0000000000000020 = CONCAT71(stack0x00000021,(char)uVar8 * '\x02');
        lVar9 = (long)&stack0x00000020 + 1;
        if (uVar8 != 0) goto LAB_0c81fd8b;
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
        _uStack0000000000000020 = uVar11 | 1;
        _uStack0000000000000028 = uVar8;
        in_stack_00000030 = lVar9;
LAB_0c81fd8b:
        func_0x0eee2ee0(lVar9,uVar7,uVar8);
      }
      *(undefined1 *)(lVar9 + uVar8) = 0;
      in_stack_00000078 = _uStack0000000000000020 >> 1 & 0x7f;
      in_stack_00000070 = (long)&stack0x00000020 + 1;
      if ((_uStack0000000000000020 & 1) != 0) {
        in_stack_00000078 = _uStack0000000000000028;
        in_stack_00000070 = in_stack_00000030;
      }
      in_stack_00000080 = 1;
      in_stack_00000068 = 0;
      func_0x0eeb79f0(&stack0x000000a0,&stack0x00000068);
      if ((in_stack_00000068 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(in_stack_00000068 & 0xff00ffffffffffff) - 8);
      }
      uVar7 = func_0x04862b80(&stack0x00000090);
      plVar10 = (long *)func_0x0c8214c0(lStack0000000000000040,param_2,&stack0x00000020,uVar7,
                                        uStack000000000000004c);
      puVar3 = puStack0000000000000058;
      if (plVar10 == (long *)0x0) {
        if (in_stack_00000038._4_1_ == 0) {
          _bStack000000000000001c = 0;
          func_0x0eeb81b0(&stack0x000000a0);
        }
        else if (puStack0000000000000058 < puStack0000000000000060) {
          if ((_uStack0000000000000020 & 1) == 0) {
            *(long *)(puStack0000000000000058 + 4) = in_stack_00000030;
            *puStack0000000000000058 = uStack0000000000000020;
            puStack0000000000000058[1] = uStack0000000000000024;
            puStack0000000000000058[2] = uStack0000000000000028;
            puStack0000000000000058[3] = uStack000000000000002c;
          }
          else {
            func_0x0412e5e0(puStack0000000000000058,in_stack_00000030,_uStack0000000000000028);
          }
          puStack0000000000000058 = puVar3 + 6;
          func_0x0eeb81b0(&stack0x000000a0);
        }
        else {
          puStack0000000000000058 = (undefined4 *)func_0x04909a40(&stack0x00000050,&stack0x00000020)
          ;
          func_0x0eeb81b0(&stack0x000000a0);
        }
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 8);
        uVar7 = func_0x04862b80(&stack0x00000090);
        uVar7 = (**(code **)(*plVar10 + 0x18))
                          (plVar10,uVar1,uVar7,in_stack_00000088,uStack000000000000004c);
        _bStack000000000000001c =
             (uint)CONCAT71((int7)((ulong)uVar7 >> 8),(byte)uVar7 & bStack000000000000001c);
        func_0x0eeb81b0(&stack0x000000a0);
      }
      if ((_uStack0000000000000020 & 1) != 0) {
        func_0x0412a280(in_stack_00000030,_uStack0000000000000020 & 0xfffffffffffffffe);
      }
      func_0x04862ba0(&stack0x00000090);
    }
    func_0x04862b40(&stack0x00000090);
    puVar3 = puStack0000000000000058;
    if ((in_stack_00000038._4_1_ != 0) && (puStack0000000000000058 != puStack0000000000000050)) {
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      puVar12 = puStack0000000000000050;
      do {
        func_0x048650e0(&stack0x000000b8,uVar7,puVar12);
        func_0x04863610(&stack0x000000b8);
        puVar12 = puVar12 + 6;
      } while (puVar12 != puVar3);
    }
    uVar5 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    if ((ulong)uVar5 < *(ulong *)(lStack0000000000000040 + 0x90)) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar6 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar6);
      _uStack0000000000000020 =
           CONCAT44(uStack0000000000000024,*(undefined4 *)(lStack0000000000000040 + 0x90));
      func_0x04b0a9a0(1,3,uVar1,&UNK_011ec510,&stack0x00000070,&stack0x00000020);
      _bStack000000000000001c = 0;
    }
    uVar5 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
    if (*(ulong *)(lStack0000000000000040 + 0x98) < (ulong)uVar5) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar6 = func_0x048641f0(*(undefined8 *)(param_2 + 0x10));
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar6);
      _uStack0000000000000020 =
           CONCAT44(uStack0000000000000024,*(undefined4 *)(lStack0000000000000040 + 0x98));
      func_0x04b0ab40(1,3,uVar1,&UNK_0145eaee,&stack0x00000070,&stack0x00000020);
      _bStack000000000000001c = 0;
    }
    puVar12 = puStack0000000000000050;
    puVar3 = puStack0000000000000058;
    if (puStack0000000000000050 != (undefined4 *)0x0) {
      for (; puVar12 != puVar3; puVar3 = puVar3 + -6) {
        if ((*(byte *)(puVar3 + -6) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar3 + -2),*(ulong *)(puVar3 + -6) & 0xfffffffffffffffe)
          ;
        }
      }
      puStack0000000000000058 = puVar12;
      func_0x0412a280(puStack0000000000000050,
                      (long)puStack0000000000000060 - (long)puStack0000000000000050);
    }
    in_RAX = (char *)(ulong)_bStack000000000000001c;
  }
  return (ulong)in_RAX & 0xffffffffffffff01;
}


