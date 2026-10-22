/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9687e0
 * Label: Dimension::vslot2
 * Body:  [[0c9687e0, 0c9687ef] [0c9687f1, 0c968822] [0c968cef, 0c968db0] [0c969269, 0c9696bf] [0c9696c1, 0c9697bf] [0c9697c1, 0c969b6f] [0c969b71, 0c969e4f] [0c969e51, 0c96a11f] [0c96a121, 0c96a8d9]]
 * Ghidra: wg_Dimension__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0c969954) */
/* WARNING: Removing unreachable block (ram,0x0c96995b) */
/* WARNING: Removing unreachable block (ram,0x0c969d9b) */
/* WARNING: Removing unreachable block (ram,0x0c969da2) */
/* WARNING: Removing unreachable block (ram,0x0c96a065) */
/* WARNING: Removing unreachable block (ram,0x0c96a06c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot2
               (undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined1 *puVar14;
  undefined8 unaff_R12;
  long unaff_R13;
  undefined8 unaff_R15;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uVar15;
  undefined4 *puStack0000000000000008;
  char cStack0000000000000010;
  undefined4 *puStack0000000000000018;
  undefined4 *puStack0000000000000020;
  char cStack0000000000000028;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined4 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 *in_stack_00000058;
  char cStack0000000000000060;
  undefined4 *in_stack_00000068;
  undefined4 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  byte in_stack_00000088;
  undefined4 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 *in_stack_000000a8;
  undefined4 *in_stack_000000b0;
  undefined4 *in_stack_000000b8;
  undefined4 *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  byte in_stack_000000d8;
  undefined4 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 *in_stack_000000f8;
  undefined4 *in_stack_00000100;
  undefined4 *in_stack_00000108;
  undefined4 *in_stack_00000110;
  char cStack0000000000000118;
  undefined8 in_stack_00000120;
  byte in_stack_00000128;
  undefined4 *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 *in_stack_00000148;
  char cStack0000000000000150;
  undefined4 *in_stack_00000158;
  undefined4 *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  byte in_stack_00000178;
  undefined4 *in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 *in_stack_00000198;
  char in_stack_000001a0;
  undefined4 *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 *in_stack_000001b8;
  undefined4 *in_stack_000001c0;
  undefined4 *in_stack_000001c8;
  undefined4 *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined1 in_stack_000001e8;
  char cStack00000000000001f8;
  undefined7 uVar16;
  undefined8 in_stack_00000200;
  undefined4 *in_stack_00000208;
  undefined4 *in_stack_00000210;
  undefined4 *in_stack_00000218;
  undefined4 *puVar17;
  undefined4 *in_stack_00000220;
  undefined4 *puVar18;
  undefined8 in_stack_00000228;
  undefined8 uVar19;
  char in_stack_00000238;
  ulong in_stack_00000248;
  undefined4 *in_stack_00000258;
  undefined4 *in_stack_00000260;
  undefined4 *in_stack_00000270;
  char cVar20;
  ulong in_stack_00000298;
  undefined4 *in_stack_000002a8;
  undefined4 *in_stack_000002b0;
  undefined4 *in_stack_000002c0;
  byte in_stack_000002e8;
  undefined7 in_stack_000002e9;
  undefined8 in_stack_000002f8;
  char in_stack_00000328;
  byte in_stack_00000338;
  undefined7 in_stack_00000339;
  undefined8 in_stack_00000348;
  char in_stack_00000378;
  byte in_stack_00000388;
  undefined7 in_stack_00000389;
  undefined8 in_stack_00000398;
  char in_stack_000003c8;
  byte in_stack_000003d8;
  undefined7 in_stack_000003d9;
  undefined8 in_stack_000003e8;
  char in_stack_00000418;
  char in_stack_000004d8;
  char in_stack_00000528;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 uStack_8;
  
  *(int *)param_2 = *(int *)param_2 + param_5;
  *param_2 = *param_2 + (char)param_5 + (char)((uint)param_5 >> 8);
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  puStack0000000000000020 = (undefined4 *)CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  _cStack0000000000000010 = (undefined4 *)CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  uVar15 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
  _bStack0000000000000038 = 1;
  puStack0000000000000008 = param_1;
  puStack0000000000000018 = param_1;
  uStack_8 = param_1;
  if (in_stack_00000238 == '\0') {
    func_0x048e6d60(&stack0x000001f8);
    in_stack_00000178 = bStack0000000000000038;
    if (bStack0000000000000038 == 1) goto LAB_0c968d03;
    in_stack_00000138 = uStack_8;
    in_stack_00000148 = puStack0000000000000008;
    _cStack0000000000000150 = _cStack0000000000000010;
    in_stack_00000158 = puStack0000000000000018;
    puStack0000000000000008 = (undefined4 *)0x0;
    _cStack0000000000000010 = (undefined4 *)0x0;
    puStack0000000000000018 = (undefined4 *)0x0;
    in_stack_00000160 = puStack0000000000000020;
    in_stack_00000168 = _cStack0000000000000028;
    in_stack_00000170 = in_stack_00000030;
    puStack0000000000000020 = (undefined4 *)0x0;
    _cStack0000000000000028 = 0;
    in_stack_00000030 = 0;
    in_stack_00000140 = uVar15;
    func_0x048e6d60(&uStack_8);
    bVar1 = in_stack_00000178;
    uVar19 = in_stack_00000030;
    uVar2 = _cStack0000000000000028;
  }
  else {
    in_stack_00000178 = 1;
LAB_0c968d03:
    in_stack_00000138 = (undefined4 *)CONCAT44(in_stack_00000138._4_4_,(undefined4)uStack_8);
    bVar1 = in_stack_00000178;
    uVar19 = in_stack_00000030;
    uVar2 = _cStack0000000000000028;
  }
  in_stack_00000178 = bVar1;
  if ((bVar1 & 1) == 0) {
    in_stack_00000148 = (undefined4 *)0x0;
    _cStack0000000000000150 = (undefined4 *)0x0;
    in_stack_00000158 = (undefined4 *)0x0;
    in_stack_00000160 = (undefined4 *)0x0;
    in_stack_00000168 = 0;
    in_stack_00000170 = 0;
    func_0x048e6d60(&stack0x00000138);
  }
  if ((bVar1 & 1) == 0) {
    func_0x0c96b0e0(&stack0x00000448);
    func_0x0c96aca0();
    func_0x048e6d60(&stack0x000007b8);
    goto LAB_0c96a773;
  }
  in_stack_00000188 = (undefined4 *)((ulong)in_stack_00000188 & 0xffffffffffffff00);
  in_stack_000001a0 = '\0';
  func_0x0ba65e80(&uStack_8);
  in_stack_00000088 = bStack0000000000000038;
  if (bStack0000000000000038 == 1) {
    in_stack_00000048 = (undefined4 *)((ulong)in_stack_00000048 & 0xffffffffffffff00);
    uVar3 = (ulong)_cStack0000000000000060 >> 8;
    _cStack0000000000000060 = (undefined4 *)((ulong)_cStack0000000000000060 & 0xffffffffffffff00);
    _cStack0000000000000028 = uVar2;
    in_stack_00000030 = uVar19;
    if (cStack0000000000000010 == '\x01') {
      in_stack_00000058 = puStack0000000000000008;
      in_stack_00000048 = uStack_8;
      in_stack_00000050 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
      _cStack0000000000000060 = (undefined4 *)CONCAT71((int7)uVar3,1);
    }
LAB_0c96939f:
    in_stack_00000138 = (undefined4 *)((ulong)in_stack_00000138 & 0xffffffffffffff00);
    uVar3 = (ulong)_cStack0000000000000150 >> 8;
    _cStack0000000000000150 = (undefined4 *)((ulong)_cStack0000000000000150 & 0xffffffffffffff00);
    in_stack_00000178 = in_stack_00000088;
    if (cStack0000000000000060 == '\x01') {
      in_stack_00000148 = in_stack_00000058;
      in_stack_00000138 = in_stack_00000048;
      in_stack_00000140 = in_stack_00000050;
      _cStack0000000000000150 = (undefined4 *)CONCAT71((int7)uVar3,1);
    }
  }
  else {
    in_stack_00000048 = uStack_8;
    in_stack_00000058 = puStack0000000000000008;
    _cStack0000000000000060 = _cStack0000000000000010;
    in_stack_00000068 = puStack0000000000000018;
    puStack0000000000000008 = (undefined4 *)0x0;
    _cStack0000000000000010 = (undefined4 *)0x0;
    puStack0000000000000018 = (undefined4 *)0x0;
    in_stack_00000070 = puStack0000000000000020;
    puStack0000000000000020 = (undefined4 *)0x0;
    _cStack0000000000000028 = 0;
    in_stack_00000030 = 0;
    in_stack_00000050 = uVar15;
    in_stack_00000078 = uVar2;
    in_stack_00000080 = uVar19;
    func_0x048e6d60(&uStack_8);
    if ((in_stack_00000088 & 1) != 0) goto LAB_0c96939f;
    in_stack_00000178 = in_stack_00000088;
    in_stack_00000030 = 0;
    _cStack0000000000000028 = 0;
    in_stack_00000138 = in_stack_00000048;
    in_stack_00000140 = in_stack_00000050;
    in_stack_00000148 = in_stack_00000058;
    _cStack0000000000000150 = _cStack0000000000000060;
    in_stack_00000158 = in_stack_00000068;
    in_stack_00000058 = (undefined4 *)0x0;
    _cStack0000000000000060 = (undefined4 *)0x0;
    in_stack_00000068 = (undefined4 *)0x0;
    in_stack_00000160 = in_stack_00000070;
    in_stack_00000168 = in_stack_00000078;
    in_stack_00000170 = in_stack_00000080;
    in_stack_00000070 = (undefined4 *)0x0;
    in_stack_00000078 = 0;
    in_stack_00000080 = 0;
    func_0x048e6d60(&stack0x00000048);
  }
  if ((in_stack_00000178 & 1) == 0) {
    func_0x0c96b1a0(&stack0x00000138);
    in_stack_00000148 = (undefined4 *)0x0;
    _cStack0000000000000150 = (undefined4 *)0x0;
    in_stack_00000158 = (undefined4 *)0x0;
    in_stack_00000160 = (undefined4 *)0x0;
    in_stack_00000168 = 0;
    in_stack_00000170 = 0;
    puVar14 = &stack0x00000778;
    func_0x0c96aca0();
LAB_0c96a6fb:
    func_0x048e6d60(puVar14);
  }
  else {
    if (in_stack_000001a0 == cStack0000000000000150) {
      if (in_stack_000001a0 != '\0') {
        if (((ulong)in_stack_00000188 & 1) != 0) {
          func_0x0412a280(in_stack_00000198,(ulong)in_stack_00000188 & 0xfffffffffffffffe);
        }
        in_stack_00000198 = in_stack_00000148;
        in_stack_00000188 = in_stack_00000138;
        in_stack_00000190 = in_stack_00000140;
        in_stack_00000138 = (undefined4 *)((ulong)in_stack_00000138 & 0xffffffffffff0000);
      }
    }
    else if (in_stack_000001a0 == '\0') {
      in_stack_00000198 = in_stack_00000148;
      in_stack_00000188 = in_stack_00000138;
      in_stack_00000190 = in_stack_00000140;
      in_stack_00000138 = (undefined4 *)0x0;
      in_stack_00000140 = 0;
      in_stack_00000148 = (undefined4 *)0x0;
      in_stack_000001a0 = '\x01';
    }
    else {
      if (((ulong)in_stack_00000188 & 1) != 0) {
        func_0x0412a280(in_stack_00000198,(ulong)in_stack_00000188 & 0xfffffffffffffffe);
      }
      in_stack_000001a0 = '\0';
    }
    func_0x0ee075b0(&uStack_8);
    uVar3 = _bStack0000000000000038;
    cVar11 = bStack0000000000000038;
    if (bStack0000000000000038 != '\x01') {
      puStack0000000000000008 = (undefined4 *)0x0;
      _cStack0000000000000010 = (undefined4 *)0x0;
      puStack0000000000000018 = (undefined4 *)0x0;
      puStack0000000000000020 = (undefined4 *)0x0;
      _cStack0000000000000028 = 0;
      in_stack_00000030 = 0;
      func_0x048e6d60(&uStack_8);
    }
    uVar19 = _cStack0000000000000028;
    if ((uVar3 & 1) == 0) {
      func_0x0c96b260(&stack0x00000568);
      puVar14 = &stack0x00000738;
      func_0x0c96aca0();
LAB_0c96a6e4:
      func_0x048e6d60(puVar14);
    }
    else {
      func_0x048b4400(&stack0x00000698,&stack0x00000188);
      func_0x0ee075b0(&uStack_8);
      puVar12 = uStack_8;
      uVar3 = _bStack0000000000000038;
      puVar18 = puStack0000000000000020;
      puVar17 = puStack0000000000000018;
      puVar22 = _cStack0000000000000010;
      puVar21 = puStack0000000000000008;
      cVar20 = bStack0000000000000038;
      if (bStack0000000000000038 == '\x01') {
        uVar16 = (undefined7)((ulong)_cStack00000000000001f8 >> 8);
        _cStack00000000000001f8 = (undefined4 *)CONCAT71(uVar16,(undefined1)uStack_8);
        puVar21 = in_stack_00000208;
        puVar22 = in_stack_00000210;
        puVar17 = in_stack_00000218;
        puVar18 = in_stack_00000220;
        uVar19 = in_stack_00000228;
      }
      else {
        puStack0000000000000008 = (undefined4 *)0x0;
        _cStack0000000000000010 = (undefined4 *)0x0;
        puStack0000000000000018 = (undefined4 *)0x0;
        puStack0000000000000020 = (undefined4 *)0x0;
        _cStack0000000000000028 = 0;
        in_stack_00000030 = 0;
        func_0x048e6d60(&uStack_8);
        _cStack00000000000001f8 = puVar12;
        in_stack_00000200 = uVar15;
      }
      if ((uVar3 & 1) == 0) {
        func_0x0c9b5d50(&stack0x000001f8);
        in_stack_000000a8 = (undefined4 *)0x0;
        in_stack_000000b0 = (undefined4 *)0x0;
        in_stack_000000b8 = (undefined4 *)0x0;
        in_stack_000000c0 = (undefined4 *)0x0;
        in_stack_000000c8 = 0;
        in_stack_000000d0 = 0;
        _bStack0000000000000038 = _bStack0000000000000038 & 0xffffffffffffff00;
        in_stack_00000058 = (undefined4 *)0x0;
        _cStack0000000000000060 = (undefined4 *)0x0;
        in_stack_00000068 = (undefined4 *)0x0;
        in_stack_00000070 = (undefined4 *)0x0;
        in_stack_00000078 = 0;
        in_stack_00000080 = 0;
        puStack0000000000000008 = puVar21;
        _cStack0000000000000010 = puVar22;
        puStack0000000000000018 = puVar17;
        puStack0000000000000020 = puVar18;
        in_stack_00000048 = _cStack00000000000001f8;
        in_stack_00000050 = in_stack_00000200;
        in_stack_00000098 = _cStack00000000000001f8;
        in_stack_000000a0 = in_stack_00000200;
        uStack_8 = _cStack00000000000001f8;
        func_0x048e6d60(&stack0x00000048);
        func_0x048e6d60(&stack0x00000098);
        cStack0000000000000028 = (char)uVar19;
joined_r0x0c96a620:
        if (cVar20 == '\0') goto LAB_0c96a183;
LAB_0c969b6e:
        bVar13 = bStack0000000000000038;
        if (bStack0000000000000038 != 1) goto LAB_0c96a1a4;
LAB_0c969b82:
        cStack0000000000000028 = cStack0000000000000028 == '\x01';
        puVar21 = (undefined4 *)(in_stack_00000298 & 0xffffffffffffff00);
        if ((bool)cStack0000000000000028) {
          puVar21 = uStack_8;
          in_stack_000002a8 = puStack0000000000000008;
          in_stack_000002b0 = _cStack0000000000000010;
          in_stack_000002c0 = puStack0000000000000020;
        }
        bVar13 = bStack0000000000000038;
        cVar20 = cStack0000000000000028;
        if ((bStack0000000000000038 & 1) == 0) goto LAB_0c96a222;
LAB_0c969be3:
        cVar20 = '\0';
        puVar22 = (undefined4 *)(in_stack_00000248 & 0xffffffffffffff00);
        if (cStack0000000000000028 == '\x01') {
          cVar20 = '\x01';
          puVar22 = puVar21;
          in_stack_00000258 = in_stack_000002a8;
          in_stack_00000260 = in_stack_000002b0;
          in_stack_00000270 = in_stack_000002c0;
        }
      }
      else {
        if (cStack00000000000001f8 == '\x01') {
          func_0x0ee0afd0(&uStack_8);
          puVar21 = uStack_8;
          puVar22 = puStack0000000000000008;
          in_stack_00000088 = bStack0000000000000038;
          if (bStack0000000000000038 == 0) {
            in_stack_00000048 = uStack_8;
            in_stack_00000058 = puStack0000000000000008;
            _cStack0000000000000060 = _cStack0000000000000010;
            in_stack_00000068 = puStack0000000000000018;
            puStack0000000000000008 = (undefined4 *)0x0;
            _cStack0000000000000010 = (undefined4 *)0x0;
            puStack0000000000000018 = (undefined4 *)0x0;
            in_stack_00000070 = puStack0000000000000020;
            in_stack_00000078 = _cStack0000000000000028;
            in_stack_00000080 = in_stack_00000030;
            puStack0000000000000020 = (undefined4 *)0x0;
            in_stack_00000050 = uVar15;
            func_0x048e6d60(&uStack_8);
            uVar10 = _UNK_0f3e9074;
            uVar9 = _UNK_0f3e9070;
            uVar8 = _UNK_0f3e906c;
            uVar7 = _UNK_0f3e9064;
            uVar6 = _UNK_0f3e9060;
            uVar5 = _UNK_0f3e905c;
            uVar4 = _DAT_0f3e9058;
            puStack0000000000000008 = (undefined4 *)CONCAT44(_UNK_0f3e906c,_DAT_0f3e9068);
            _cStack0000000000000010 = (undefined4 *)CONCAT44(_UNK_0f3e9074,_UNK_0f3e9070);
            uStack_8 = (undefined4 *)CONCAT44(_UNK_0f3e905c,_DAT_0f3e9058);
            puStack0000000000000018 =
                 (undefined4 *)((ulong)puStack0000000000000018 & 0xffffffffffffff00);
            if (_cStack0000000000000060 < in_stack_00000068) {
              _cStack0000000000000060[4] = _DAT_0f3e9068;
              _cStack0000000000000060[5] = uVar8;
              _cStack0000000000000060[6] = uVar9;
              _cStack0000000000000060[7] = uVar10;
              *_cStack0000000000000060 = uVar4;
              _cStack0000000000000060[1] = uVar5;
              _cStack0000000000000060[2] = uVar6;
              _cStack0000000000000060[3] = uVar7;
              *(undefined1 *)(_cStack0000000000000060 + 8) = 0;
              *(undefined1 *)(_cStack0000000000000060 + 0x12) = 0;
              in_stack_000001c0 = _cStack0000000000000060 + 0x14;
            }
            else {
              in_stack_000001c0 = (undefined4 *)func_0x0489d2c0(&stack0x00000058,&uStack_8);
            }
            unaff_R15 = in_stack_00000080;
            unaff_R12 = in_stack_00000078;
            in_stack_000001d0 = in_stack_00000070;
            in_stack_000001c8 = in_stack_00000068;
            in_stack_000001b8 = in_stack_00000058;
            in_stack_00000098 = in_stack_00000048;
            in_stack_000000a0 = in_stack_00000050;
            in_stack_00000058 = (undefined4 *)0x0;
            _cStack0000000000000060 = (undefined4 *)0x0;
            in_stack_00000068 = (undefined4 *)0x0;
            in_stack_00000070 = (undefined4 *)0x0;
            in_stack_00000078 = 0;
            in_stack_00000080 = 0;
            uStack_8 = in_stack_00000048;
            in_stack_000000a8 = (undefined4 *)0x0;
            in_stack_000000b0 = (undefined4 *)0x0;
            in_stack_000000b8 = (undefined4 *)0x0;
            in_stack_000000c0 = (undefined4 *)0x0;
            in_stack_000000c8 = 0;
            in_stack_000000d0 = 0;
            in_stack_000001e8 = 0;
            in_stack_000001a8 = in_stack_00000048;
            in_stack_000001b0 = in_stack_00000050;
            puStack0000000000000008 = (undefined4 *)0x0;
            _cStack0000000000000010 = (undefined4 *)0x0;
            puStack0000000000000018 = (undefined4 *)0x0;
            in_stack_000001d8 = unaff_R12;
            in_stack_000001e0 = unaff_R15;
            puStack0000000000000020 = (undefined4 *)0x0;
            func_0x048e6d60(&uStack_8);
            func_0x048e6d60(&stack0x00000098);
            bVar13 = 0;
            puVar21 = (undefined4 *)0x0;
            puVar22 = (undefined4 *)0x0;
joined_r0x0c969a52:
            if (in_stack_00000088 == 1) goto LAB_0c969a58;
LAB_0c969ed1:
            func_0x048e6d60(&stack0x00000048);
joined_r0x0c969a6b:
            if (((ulong)puVar21 & 1) != 0) goto LAB_0c969ee9;
LAB_0c969a71:
            if (bVar13 == 0) goto LAB_0c969f13;
LAB_0c969a82:
            in_stack_000000e8 = (undefined4 *)0x0;
            in_stack_000000f0 = 0;
            in_stack_000000f8 = (undefined4 *)0x0;
            in_stack_00000100 = (undefined4 *)0x0;
            in_stack_00000108 = (undefined4 *)0x0;
            in_stack_00000110 = (undefined4 *)0x0;
            _bStack0000000000000038 = CONCAT71(uStack0000000000000039,1);
            cStack0000000000000028 = '\x01';
            in_stack_00000128 = bVar13;
            puStack0000000000000008 = in_stack_000001b8;
            _cStack0000000000000010 = in_stack_000001c0;
            puStack0000000000000018 = in_stack_000001c8;
            puStack0000000000000020 = in_stack_000001d0;
            uStack_8 = in_stack_000001a8;
          }
          else {
            in_stack_00000058 = puStack0000000000000008;
            in_stack_00000050 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
            puVar17 = uStack_8;
            in_stack_00000048 = (undefined4 *)((ulong)uStack_8 & 0xffffffffffff0000);
            func_0x0ee0afd0(&uStack_8);
            in_stack_000000d8 = bStack0000000000000038;
            if (bStack0000000000000038 == 0) {
              in_stack_00000098 = uStack_8;
              in_stack_000000a8 = puStack0000000000000008;
              in_stack_000000b0 = _cStack0000000000000010;
              in_stack_000000b8 = puStack0000000000000018;
              puStack0000000000000008 = (undefined4 *)0x0;
              _cStack0000000000000010 = (undefined4 *)0x0;
              puStack0000000000000018 = (undefined4 *)0x0;
              in_stack_000000c0 = puStack0000000000000020;
              in_stack_000000c8 = _cStack0000000000000028;
              in_stack_000000d0 = in_stack_00000030;
              puStack0000000000000020 = (undefined4 *)0x0;
              in_stack_000000a0 = uVar15;
              func_0x048e6d60(&uStack_8);
              uVar10 = _UNK_0f3e9094;
              uVar9 = _UNK_0f3e9090;
              uVar8 = _UNK_0f3e908c;
              uVar7 = _UNK_0f3e9084;
              uVar6 = _UNK_0f3e9080;
              uVar5 = _UNK_0f3e907c;
              uVar4 = _DAT_0f3e9078;
              puStack0000000000000008 = (undefined4 *)CONCAT44(_UNK_0f3e908c,_DAT_0f3e9088);
              _cStack0000000000000010 = (undefined4 *)CONCAT44(_UNK_0f3e9094,_UNK_0f3e9090);
              uStack_8 = (undefined4 *)CONCAT44(_UNK_0f3e907c,_DAT_0f3e9078);
              puStack0000000000000018 =
                   (undefined4 *)((ulong)puStack0000000000000018 & 0xffffffffffffff00);
              if (in_stack_000000b0 < in_stack_000000b8) {
                in_stack_000000b0[4] = _DAT_0f3e9088;
                in_stack_000000b0[5] = uVar8;
                in_stack_000000b0[6] = uVar9;
                in_stack_000000b0[7] = uVar10;
                *in_stack_000000b0 = uVar4;
                in_stack_000000b0[1] = uVar5;
                in_stack_000000b0[2] = uVar6;
                in_stack_000000b0[3] = uVar7;
                *(undefined1 *)(in_stack_000000b0 + 8) = 0;
                *(undefined1 *)(in_stack_000000b0 + 0x12) = 0;
                in_stack_000001c0 = in_stack_000000b0 + 0x14;
              }
              else {
                in_stack_000001c0 = (undefined4 *)func_0x0489d2c0(&stack0x000000a8,&uStack_8);
              }
              unaff_R15 = in_stack_000000d0;
              unaff_R12 = in_stack_000000c8;
              in_stack_000001d0 = in_stack_000000c0;
              in_stack_000001c8 = in_stack_000000b8;
              in_stack_000001b8 = in_stack_000000a8;
              in_stack_000000a8 = (undefined4 *)0x0;
              in_stack_000000b0 = (undefined4 *)0x0;
              in_stack_000000b8 = (undefined4 *)0x0;
              in_stack_000000c0 = (undefined4 *)0x0;
              in_stack_000000c8 = 0;
              in_stack_000000d0 = 0;
              uStack_8 = in_stack_00000098;
              in_stack_000001e8 = 0;
              in_stack_000001a8 = in_stack_00000098;
              in_stack_000001b0 = in_stack_000000a0;
              puStack0000000000000008 = (undefined4 *)0x0;
              _cStack0000000000000010 = (undefined4 *)0x0;
              puStack0000000000000018 = (undefined4 *)0x0;
              in_stack_000001d8 = unaff_R12;
              in_stack_000001e0 = unaff_R15;
              puStack0000000000000020 = (undefined4 *)0x0;
              func_0x048e6d60(&uStack_8);
              func_0x048e6d60(&stack0x00000978);
              bVar13 = 0;
              if ((in_stack_000000d8 & 1) != 0) goto LAB_0c96982a;
            }
            else {
              in_stack_000000a8 = puStack0000000000000008;
              in_stack_000000a0 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
              in_stack_00000098 = (undefined4 *)((ulong)uStack_8 & 0xffffffffffff0000);
              in_stack_000001e8 = 1;
              in_stack_000001b8 = puVar22;
              puVar21 = (undefined4 *)0x0;
              puVar22 = (undefined4 *)0x0;
              in_stack_000001d0 = puStack0000000000000008;
              in_stack_000001c0 = uStack_8;
              in_stack_000001c8 = (undefined4 *)CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
              bVar13 = 1;
              in_stack_000001a8 = puVar17;
              in_stack_000001b0 = CONCAT44(in_XMM0_Dd,in_XMM0_Dc);
              if ((_bStack0000000000000038 & 1) != 0) {
LAB_0c96982a:
                if (((ulong)in_stack_00000098 & 1) != 0) {
                  func_0x0412a280(in_stack_000000a8,(ulong)in_stack_00000098 & 0xfffffffffffffffe);
                }
                goto joined_r0x0c969a52;
              }
            }
            func_0x048e6d60(&stack0x00000098);
            if (in_stack_00000088 != 1) goto LAB_0c969ed1;
LAB_0c969a58:
            if (((ulong)in_stack_00000048 & 1) == 0) goto joined_r0x0c969a6b;
            func_0x0412a280(in_stack_00000058,(ulong)in_stack_00000048 & 0xfffffffffffffffe);
            if (((ulong)puVar21 & 1) == 0) goto LAB_0c969a71;
LAB_0c969ee9:
            func_0x0412a280(puVar22,(ulong)puVar21 & 0xfffffffffffffffe);
            if (bVar13 != 0) goto LAB_0c969a82;
LAB_0c969f13:
            puVar12 = in_stack_000001d0;
            puVar18 = in_stack_000001c8;
            puVar17 = in_stack_000001c0;
            puVar22 = in_stack_000001b8;
            uVar15 = in_stack_000001b0;
            puVar21 = in_stack_000001a8;
            in_stack_000001b8 = (undefined4 *)0x0;
            in_stack_000001c0 = (undefined4 *)0x0;
            in_stack_000001c8 = (undefined4 *)0x0;
            in_stack_000001d0 = (undefined4 *)0x0;
            in_stack_000001d8 = 0;
            in_stack_000001e0 = 0;
            func_0x048e6d60(&stack0x000001a8);
            in_stack_000000e8 = puVar21;
            in_stack_000000f0 = uVar15;
            in_stack_000000f8 = puVar22;
            in_stack_00000100 = puVar17;
            in_stack_00000108 = puVar18;
            in_stack_00000110 = puVar12;
            _cStack0000000000000118 = unaff_R12;
            in_stack_00000120 = unaff_R15;
            in_stack_00000128 = bVar13;
            func_0x048e6d60(&stack0x000005b8);
            uVar10 = _UNK_0f3e8fd4;
            uVar9 = _UNK_0f3e8fd0;
            uVar8 = _UNK_0f3e8fcc;
            uVar7 = _UNK_0f3e8fc4;
            uVar6 = _UNK_0f3e8fc0;
            uVar5 = _UNK_0f3e8fbc;
            uVar4 = _DAT_0f3e8fb8;
            puStack0000000000000008 = (undefined4 *)CONCAT44(_UNK_0f3e8fcc,_DAT_0f3e8fc8);
            _cStack0000000000000010 = (undefined4 *)CONCAT44(_UNK_0f3e8fd4,_UNK_0f3e8fd0);
            uStack_8 = (undefined4 *)CONCAT44(_UNK_0f3e8fbc,_DAT_0f3e8fb8);
            puStack0000000000000018 =
                 (undefined4 *)((ulong)puStack0000000000000018 & 0xffffffffffffff00);
            if (in_stack_00000100 < in_stack_00000108) {
              in_stack_00000100[4] = _DAT_0f3e8fc8;
              in_stack_00000100[5] = uVar8;
              in_stack_00000100[6] = uVar9;
              in_stack_00000100[7] = uVar10;
              *in_stack_00000100 = uVar4;
              in_stack_00000100[1] = uVar5;
              in_stack_00000100[2] = uVar6;
              in_stack_00000100[3] = uVar7;
              *(undefined1 *)(in_stack_00000100 + 8) = 0;
              *(undefined1 *)(in_stack_00000100 + 0x12) = 0;
              _cStack0000000000000010 = in_stack_00000100 + 0x14;
            }
            else {
              _cStack0000000000000010 = (undefined4 *)func_0x0489d2c0(&stack0x000000f8,&uStack_8);
            }
            puStack0000000000000020 = in_stack_00000110;
            puStack0000000000000018 = in_stack_00000108;
            puStack0000000000000008 = in_stack_000000f8;
            cStack0000000000000028 = cStack0000000000000118;
            in_stack_00000098 = in_stack_000000e8;
            in_stack_000000a0 = in_stack_000000f0;
            in_stack_000000f8 = (undefined4 *)0x0;
            in_stack_00000100 = (undefined4 *)0x0;
            in_stack_00000108 = (undefined4 *)0x0;
            in_stack_00000110 = (undefined4 *)0x0;
            _cStack0000000000000118 = 0;
            in_stack_00000120 = 0;
            in_stack_00000048 = in_stack_000000e8;
            in_stack_00000050 = in_stack_000000f0;
            in_stack_000000a8 = (undefined4 *)0x0;
            in_stack_000000b0 = (undefined4 *)0x0;
            in_stack_000000b8 = (undefined4 *)0x0;
            in_stack_000000c0 = (undefined4 *)0x0;
            in_stack_000000c8 = 0;
            in_stack_000000d0 = 0;
            _bStack0000000000000038 = _bStack0000000000000038 & 0xffffffffffffff00;
            uStack_8 = in_stack_000000e8;
            in_stack_00000058 = (undefined4 *)0x0;
            _cStack0000000000000060 = (undefined4 *)0x0;
            in_stack_00000068 = (undefined4 *)0x0;
            in_stack_00000070 = (undefined4 *)0x0;
            in_stack_00000078 = 0;
            in_stack_00000080 = 0;
            func_0x048e6d60(&stack0x00000048);
            func_0x048e6d60(&stack0x00000098);
            bVar13 = in_stack_00000128 & 1;
          }
          if (bVar13 == 0) {
            func_0x048e6d60(&stack0x000000e8);
          }
          else {
            if (((ulong)in_stack_00000100 & 1) != 0) {
              func_0x0412a280(in_stack_00000110,(ulong)in_stack_00000100 & 0xfffffffffffffffe);
            }
            if (((ulong)in_stack_000000e8 & 1) != 0) {
              func_0x0412a280(in_stack_000000f8,(ulong)in_stack_000000e8 & 0xfffffffffffffffe);
              goto joined_r0x0c96a620;
            }
          }
        }
        else {
          cStack0000000000000028 = '\0';
          puStack0000000000000018 = (undefined4 *)0x0;
          puStack0000000000000020 = (undefined4 *)0x0;
          puStack0000000000000008 = (undefined4 *)0x0;
          _cStack0000000000000010 = (undefined4 *)0x0;
          uStack_8 = (undefined4 *)0x0;
          _bStack0000000000000038 = 1;
        }
        if (cVar20 != '\0') goto LAB_0c969b6e;
LAB_0c96a183:
        func_0x048e6d60(&stack0x000001f8);
        bVar13 = bStack0000000000000038;
        if (bStack0000000000000038 == 1) goto LAB_0c969b82;
LAB_0c96a1a4:
        puVar21 = uStack_8;
        in_stack_000002c0 = puStack0000000000000020;
        in_stack_000002b0 = _cStack0000000000000010;
        in_stack_000002a8 = puStack0000000000000008;
        puStack0000000000000008 = (undefined4 *)0x0;
        _cStack0000000000000010 = (undefined4 *)0x0;
        puStack0000000000000018 = (undefined4 *)0x0;
        puStack0000000000000020 = (undefined4 *)0x0;
        func_0x048e6d60(&uStack_8);
        cVar20 = cStack0000000000000028;
        if ((bVar13 & 1) != 0) goto LAB_0c969be3;
LAB_0c96a222:
        func_0x048e6d60(&stack0x00000298);
        puVar22 = puVar21;
        in_stack_00000258 = in_stack_000002a8;
        in_stack_00000260 = in_stack_000002b0;
        in_stack_00000270 = in_stack_000002c0;
      }
      if ((bVar13 & 1) == 0) {
        func_0x0c96b320(&stack0x00000248);
        in_stack_00000258 = (undefined4 *)0x0;
        in_stack_00000260 = (undefined4 *)0x0;
        in_stack_00000270 = (undefined4 *)0x0;
        func_0x0c96aca0();
        func_0x048e6d60(&stack0x000006f8);
        cVar20 = '\0';
      }
      else {
        func_0x07d0cd00(&stack0x000006c0,&stack0x00000248);
        *(undefined1 *)(unaff_R13 + 0xf0) = 1;
        func_0x048e05d0();
      }
      if (bVar13 != 1) {
        puVar14 = &stack0x00000248;
        goto LAB_0c96a6e4;
      }
      if (cVar20 == '\x01') {
        if (((ulong)in_stack_00000260 & 1) != 0) {
          func_0x0412a280(in_stack_00000270,(ulong)in_stack_00000260 & 0xfffffffffffffffe);
        }
        if (((ulong)puVar22 & 1) != 0) {
          func_0x0412a280(in_stack_00000258,(ulong)puVar22 & 0xfffffffffffffffe);
        }
      }
    }
    if (cVar11 == '\0') {
      puVar14 = &stack0x00000568;
      goto LAB_0c96a6fb;
    }
  }
  if (in_stack_00000178 == 1) {
    if ((cStack0000000000000150 == '\x01') && (((ulong)in_stack_00000138 & 1) != 0)) {
      func_0x0412a280(in_stack_00000148,(ulong)in_stack_00000138 & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000138);
  }
  if ((in_stack_000001a0 == '\x01') && (((ulong)in_stack_00000188 & 1) != 0)) {
    func_0x0412a280(in_stack_00000198,(ulong)in_stack_00000188 & 0xfffffffffffffffe);
  }
LAB_0c96a773:
  if (bVar1 == 0) {
    func_0x048e6d60(&stack0x00000448);
  }
  if (in_stack_00000328 == '\x01') {
    if ((in_stack_000002e8 & 1) != 0) {
      func_0x0412a280(in_stack_000002f8,
                      CONCAT71(in_stack_000002e9,in_stack_000002e8) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000002e8);
  }
  if (in_stack_00000378 == '\x01') {
    if ((in_stack_00000338 & 1) != 0) {
      func_0x0412a280(in_stack_00000348,
                      CONCAT71(in_stack_00000339,in_stack_00000338) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000338);
  }
  if (in_stack_000004d8 == '\0') {
    func_0x048e6d60(&stack0x00000498);
  }
  if (in_stack_00000528 == '\0') {
    func_0x048e6d60(&stack0x000004e8);
  }
  if (in_stack_000003c8 == '\x01') {
    if ((in_stack_00000388 & 1) != 0) {
      func_0x0412a280(in_stack_00000398,
                      CONCAT71(in_stack_00000389,in_stack_00000388) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000388);
  }
  if (in_stack_00000418 == '\x01') {
    if ((in_stack_000003d8 & 1) != 0) {
      func_0x0412a280(in_stack_000003e8,
                      CONCAT71(in_stack_000003d9,in_stack_000003d8) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000003d8);
  }
  func_0x048e0830(&stack0x00000608);
  return;
}


