/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a95090
 * Label: string:  Jigsaw Persistence Enabled
 * Body:  [[09a94570, 09a9464a] [09a94650, 09a947e4] [09a947f0, 09a94852] [09a94860, 09a948f8] [09a94900, 09a94a53] [09a94a60, 09a94aee] [09a94af0, 09a94c64] [09a94c70, 09a94d49] [09a94d50, 09a94ed9] [09a94ee0, 09a94f45] [09a94f50, 09a9502e] [09a95030, 09a9504b] [09a95050, 09a9508e] [09a95090, 09a950b4] [09a950c0, 09a9518e] [09a95190, 09a95319] [09a95320, 09a95374] [09a95380, 09a95450] [09a95460, 09a9547b] [09a95480, 09a954e4] [09a954f0, 09a955be] [09a955c0, 09a95749] [09a95750, 09a957a4] [09a957b0, 09a95880] [09a95890, 09a958ab] [09a958b0, 09a95914] [09a95920, 09a95a07] [09a95a10, 09a95b99] [09a95ba0, 09a95bf4] [09a95c00, 09a95cd0] [09a95ce0, 09a95d07] [09a95d10, 09a95f42] [09a95f50, 09a95f75] [09a95f80, 09a9600b] [09a96023, 09a9608f] [09a96310, 09a96369]]
 * Ghidra: FUN_09a95090
 */


/* WARNING: Removing unreachable block (ram,0x09a94745) */
/* WARNING: Removing unreachable block (ram,0x09a9479c) */
/* WARNING: Removing unreachable block (ram,0x09a948da) */
/* WARNING: Removing unreachable block (ram,0x09a948e7) */
/* WARNING: Removing unreachable block (ram,0x09a9490f) */
/* WARNING: Removing unreachable block (ram,0x09a9491b) */
/* WARNING: Removing unreachable block (ram,0x09a94900) */
/* WARNING: Removing unreachable block (ram,0x09a94932) */
/* WARNING: Removing unreachable block (ram,0x09a948f7) */
/* WARNING: Removing unreachable block (ram,0x09a9493a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_09a95090(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong *unaff_R12;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong unaff_R15;
  long *in_stack_00000010;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined1 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  long in_stack_00000040;
  char in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  char in_stack_00000068;
  int iStack0000000000000070;
  undefined4 uStack0000000000000074;
  ulong *in_stack_00000078;
  int iStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  ulong *in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  int in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  long *in_stack_000000c8;
  int in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  byte in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined1 in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  char in_stack_00000148;
  undefined8 in_stack_00000150;
  ulong *in_stack_00000158;
  ulong *in_stack_00000160;
  char in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  ulong in_stack_000001a0;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  undefined8 *in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  undefined8 in_stack_00000228;
  ulong *in_stack_00000230;
  ulong *in_stack_00000238;
  
  puVar14 = (undefined8 *)((ulong)&stack0x00000010 & 0xffffffff);
LAB_09a95094:
  do {
    if ((int)in_stack_000000c8[1] == in_stack_000000d0) {
      lVar12 = *in_stack_000000c8;
    }
    else {
      lVar12 = 0;
    }
    lVar12 = func_0x09acce30(lVar12,in_stack_000000d8,in_stack_000000e0);
    plVar11 = *(long **)(lVar12 + 0x58);
    iVar1 = *(int *)(lVar12 + 0x60);
    _iStack0000000000000018 = CONCAT44(uStack000000000000001c,iVar1);
    lVar9 = *(long *)(lVar12 + 0x68);
    _uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x70);
    uStack000000000000002c = *(undefined4 *)(lVar12 + 0x74);
    iVar8 = (int)plVar11[1];
    lVar12 = *plVar11;
    in_stack_00000010 = plVar11;
    in_stack_00000020 = lVar9;
    if (lVar12 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0();
      iVar8 = (int)plVar11[1];
      lVar12 = *plVar11;
    }
    _iStack0000000000000070 = (ulong *)CONCAT44(uStack0000000000000074,iVar1);
    if (iVar8 != iVar1) {
      lVar12 = 0;
    }
    uVar5 = uStack0000000000000028;
    uVar13 = func_0x094c80a0(lVar12,lVar9,uStack0000000000000028);
    func_0x0aaccf20(&stack0x00000078,uVar13);
    if (*plVar11 != 0 && (int)plVar11[1] == iStack0000000000000070) {
      func_0x0d8569b0(*plVar11,lVar9,uVar5);
    }
    _iStack0000000000000070 = _iStack0000000000000080;
    puVar16 = _iStack0000000000000080;
    puVar18 = in_stack_00000078;
    puVar17 = in_stack_00000078;
    if (in_stack_00000078 != _iStack0000000000000080) {
      do {
        in_stack_000001c0 = puVar18[2];
        in_stack_000001b0 = *puVar18;
        in_stack_000001b8 = puVar18[1];
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        func_0x09a26380(puVar14,&stack0x000001b0,&stack0x00000288,&stack0x00000308);
        if ((char)unaff_R12[-1] == '\0') {
          *in_stack_00000098 = 0;
          in_stack_00000098[1] = 0;
          in_stack_00000098[2] = 0;
          *(undefined1 *)(unaff_R12 + -1) = 1;
LAB_09a9533e:
          plVar11 = (long *)func_0x09a3a480(in_stack_00000098,puVar14);
        }
        else {
          plVar11 = (long *)unaff_R12[-3];
          if ((long *)unaff_R12[-2] <= plVar11) goto LAB_09a9533e;
          plVar11[2] = in_stack_00000020;
          *plVar11 = (long)in_stack_00000010;
          plVar11[1] = _iStack0000000000000018;
          in_stack_00000010 = (long *)0x0;
          _iStack0000000000000018 = 0;
          in_stack_00000020 = 0;
          *(undefined1 *)(plVar11 + 3) = uStack0000000000000028;
          *(undefined1 *)(plVar11 + 4) = 0;
          *(undefined1 *)(plVar11 + 7) = 0;
          if (in_stack_00000048 == '\x01') {
            plVar11[4] = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            *(undefined4 *)(plVar11 + 4) = uStack0000000000000030;
            *(undefined4 *)((long)plVar11 + 0x24) = uStack0000000000000034;
            *(undefined4 *)(plVar11 + 5) = uStack0000000000000038;
            *(undefined4 *)((long)plVar11 + 0x2c) = uStack000000000000003c;
            plVar11[6] = in_stack_00000040;
            _uStack0000000000000030 = 0;
            _uStack0000000000000038 = 0;
            in_stack_00000040 = 0;
            *(undefined1 *)(plVar11 + 7) = 1;
          }
          *(undefined1 *)(plVar11 + 8) = 0;
          *(undefined1 *)(plVar11 + 0xb) = 0;
          if (in_stack_00000068 == '\x01') {
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[10] = 0;
            *(undefined4 *)(plVar11 + 8) = uStack0000000000000050;
            *(undefined4 *)((long)plVar11 + 0x44) = uStack0000000000000054;
            *(undefined4 *)(plVar11 + 9) = uStack0000000000000058;
            *(undefined4 *)((long)plVar11 + 0x4c) = uStack000000000000005c;
            plVar11[10] = in_stack_00000060;
            _uStack0000000000000050 = 0;
            _uStack0000000000000058 = 0;
            in_stack_00000060 = 0;
            *(undefined1 *)(plVar11 + 0xb) = 1;
          }
          plVar11 = plVar11 + 0xc;
        }
        unaff_R12[-3] = (ulong)plVar11;
        func_0x06266a40(&stack0x00000050);
        uVar15 = _uStack0000000000000030;
        if ((in_stack_00000048 == '\x01') &&
           (uVar4 = _uStack0000000000000038, _uStack0000000000000030 != 0)) {
          while (uVar15 != uVar4) {
            if (*(uint *)(uVar4 - 8) != unaff_R15) {
              (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(uVar4 - 8) * 8))
                        (&stack0x0000000f,uVar4 - 0x20);
            }
            *(undefined4 *)(uVar4 - 8) = 0xffffffff;
            puVar16 = _iStack0000000000000070;
            uVar4 = uVar4 - 0x20;
          }
          _uStack0000000000000038 = uVar15;
          func_0x0412a280(_uStack0000000000000030,in_stack_00000040 - _uStack0000000000000030);
          puVar14 = &stack0x00000010;
        }
        if (((ulong)in_stack_00000010 & 1) != 0) {
          func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
        }
        func_0x06266a40(&stack0x00000308);
        if (unaff_R15 != 0) {
          (*_UNK_0f1d0908)(&stack0x0000000f,&stack0x00000288);
        }
        if ((in_stack_000001b0 & 1) != 0) {
          func_0x0412a280(in_stack_000001c0,in_stack_000001b0 & 0xfffffffffffffffe);
        }
        puVar18 = puVar18 + 4;
        puVar17 = in_stack_00000078;
      } while (puVar18 != puVar16);
    }
    in_stack_00000078 = puVar17;
    puVar16 = _iStack0000000000000080;
    if (puVar17 != (ulong *)0x0) {
      for (; puVar17 != puVar16; puVar16 = puVar16 + -4) {
        if ((puVar16[-4] & 1) != 0) {
          func_0x0412a280(puVar16[-2],puVar16[-4] & 0xfffffffffffffffe);
        }
      }
      _iStack0000000000000080 = puVar17;
      func_0x0412a280(in_stack_00000078,
                      CONCAT44(uStack000000000000008c,uStack0000000000000088) -
                      (long)in_stack_00000078);
      puVar14 = &stack0x00000010;
    }
    if ((int)in_stack_000000a8[1] == in_stack_000000b0) {
      lVar12 = *in_stack_000000a8;
    }
    else {
      lVar12 = 0;
    }
    lVar12 = func_0x09accf10(lVar12,in_stack_000000b8,in_stack_000000c0);
    plVar11 = *(long **)(lVar12 + 0x38);
    iVar1 = *(int *)(lVar12 + 0x40);
    _iStack0000000000000018 = CONCAT44(uStack000000000000001c,iVar1);
    lVar9 = *(long *)(lVar12 + 0x48);
    _uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x50);
    uStack000000000000002c = *(undefined4 *)(lVar12 + 0x54);
    iVar8 = (int)plVar11[1];
    lVar12 = *plVar11;
    in_stack_00000010 = plVar11;
    in_stack_00000020 = lVar9;
    if (lVar12 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0();
      iVar8 = (int)plVar11[1];
      lVar12 = *plVar11;
    }
    _iStack0000000000000070 = (ulong *)CONCAT44(uStack0000000000000074,iVar1);
    if (iVar8 != iVar1) {
      lVar12 = 0;
    }
    uVar5 = uStack0000000000000028;
    uVar13 = func_0x0963dd40(lVar12,lVar9,uStack0000000000000028);
    func_0x0a8af490(&stack0x00000078,uVar13);
    if (*plVar11 != 0 && (int)plVar11[1] == iStack0000000000000070) {
      func_0x0d8569b0(*plVar11,lVar9,uVar5);
    }
    _iStack0000000000000070 = _iStack0000000000000080;
    puVar16 = _iStack0000000000000080;
    puVar18 = in_stack_00000078;
    puVar17 = in_stack_00000078;
    if (in_stack_00000078 != _iStack0000000000000080) {
      do {
        in_stack_000001a0 = puVar18[2];
        in_stack_00000190 = *puVar18;
        in_stack_00000198 = puVar18[1];
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        func_0x09a26380(puVar14,&stack0x00000190,&stack0x00000268,&stack0x000002e8);
        if ((char)unaff_R12[-1] == '\0') {
          *in_stack_00000098 = 0;
          in_stack_00000098[1] = 0;
          in_stack_00000098[2] = 0;
          *(undefined1 *)(unaff_R12 + -1) = 1;
LAB_09a9576e:
          plVar11 = (long *)func_0x09a3a480(in_stack_00000098,puVar14);
        }
        else {
          plVar11 = (long *)unaff_R12[-3];
          if ((long *)unaff_R12[-2] <= plVar11) goto LAB_09a9576e;
          plVar11[2] = in_stack_00000020;
          *plVar11 = (long)in_stack_00000010;
          plVar11[1] = _iStack0000000000000018;
          in_stack_00000010 = (long *)0x0;
          _iStack0000000000000018 = 0;
          in_stack_00000020 = 0;
          *(undefined1 *)(plVar11 + 3) = uStack0000000000000028;
          *(undefined1 *)(plVar11 + 4) = 0;
          *(undefined1 *)(plVar11 + 7) = 0;
          if (in_stack_00000048 == '\x01') {
            plVar11[4] = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            *(undefined4 *)(plVar11 + 4) = uStack0000000000000030;
            *(undefined4 *)((long)plVar11 + 0x24) = uStack0000000000000034;
            *(undefined4 *)(plVar11 + 5) = uStack0000000000000038;
            *(undefined4 *)((long)plVar11 + 0x2c) = uStack000000000000003c;
            plVar11[6] = in_stack_00000040;
            _uStack0000000000000030 = 0;
            _uStack0000000000000038 = 0;
            in_stack_00000040 = 0;
            *(undefined1 *)(plVar11 + 7) = 1;
          }
          *(undefined1 *)(plVar11 + 8) = 0;
          *(undefined1 *)(plVar11 + 0xb) = 0;
          if (in_stack_00000068 == '\x01') {
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[10] = 0;
            *(undefined4 *)(plVar11 + 8) = uStack0000000000000050;
            *(undefined4 *)((long)plVar11 + 0x44) = uStack0000000000000054;
            *(undefined4 *)(plVar11 + 9) = uStack0000000000000058;
            *(undefined4 *)((long)plVar11 + 0x4c) = uStack000000000000005c;
            plVar11[10] = in_stack_00000060;
            _uStack0000000000000050 = 0;
            _uStack0000000000000058 = 0;
            in_stack_00000060 = 0;
            *(undefined1 *)(plVar11 + 0xb) = 1;
          }
          plVar11 = plVar11 + 0xc;
        }
        unaff_R12[-3] = (ulong)plVar11;
        func_0x06266a40(&stack0x00000050);
        uVar15 = _uStack0000000000000030;
        if ((in_stack_00000048 == '\x01') &&
           (uVar4 = _uStack0000000000000038, _uStack0000000000000030 != 0)) {
          while (uVar15 != uVar4) {
            if (*(uint *)(uVar4 - 8) != unaff_R15) {
              (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(uVar4 - 8) * 8))
                        (&stack0x0000000f,uVar4 - 0x20);
            }
            *(undefined4 *)(uVar4 - 8) = 0xffffffff;
            puVar16 = _iStack0000000000000070;
            uVar4 = uVar4 - 0x20;
          }
          _uStack0000000000000038 = uVar15;
          func_0x0412a280(_uStack0000000000000030,in_stack_00000040 - _uStack0000000000000030);
          puVar14 = &stack0x00000010;
        }
        if (((ulong)in_stack_00000010 & 1) != 0) {
          func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
        }
        func_0x06266a40(&stack0x000002e8);
        if (unaff_R15 != 0) {
          (*_UNK_0f1d0908)(&stack0x0000000f,&stack0x00000268);
        }
        if ((in_stack_00000190 & 1) != 0) {
          func_0x0412a280(in_stack_000001a0,in_stack_00000190 & 0xfffffffffffffffe);
        }
        puVar18 = puVar18 + 4;
        puVar17 = in_stack_00000078;
      } while (puVar18 != puVar16);
    }
    in_stack_00000078 = puVar17;
    puVar16 = _iStack0000000000000080;
    if (puVar17 != (ulong *)0x0) {
      for (; puVar17 != puVar16; puVar16 = puVar16 + -4) {
        if ((puVar16[-4] & 1) != 0) {
          func_0x0412a280(puVar16[-2],puVar16[-4] & 0xfffffffffffffffe);
        }
      }
      _iStack0000000000000080 = puVar17;
      func_0x0412a280(in_stack_00000078,
                      CONCAT44(uStack000000000000008c,uStack0000000000000088) -
                      (long)in_stack_00000078);
      puVar14 = &stack0x00000010;
    }
    if ((int)in_stack_000000a8[1] == in_stack_000000b0) {
      lVar12 = *in_stack_000000a8;
    }
    else {
      lVar12 = 0;
    }
    lVar12 = func_0x09accf10(lVar12,in_stack_000000b8,in_stack_000000c0);
    plVar11 = *(long **)(lVar12 + 0x18);
    iVar1 = *(int *)(lVar12 + 0x20);
    _iStack0000000000000018 = CONCAT44(uStack000000000000001c,iVar1);
    lVar9 = *(long *)(lVar12 + 0x28);
    _uStack0000000000000028 = *(uint *)(lVar12 + 0x30);
    uStack000000000000002c = *(undefined4 *)(lVar12 + 0x34);
    iVar8 = (int)plVar11[1];
    lVar12 = *plVar11;
    in_stack_00000010 = plVar11;
    in_stack_00000020 = lVar9;
    if (lVar12 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0();
      iVar8 = (int)plVar11[1];
      lVar12 = *plVar11;
    }
    _iStack0000000000000070 = (ulong *)CONCAT44(uStack0000000000000074,iVar1);
    if (iVar8 != iVar1) {
      lVar12 = 0;
    }
    uVar5 = uStack0000000000000028;
    uVar13 = func_0x0963dc60(lVar12,lVar9,uStack0000000000000028);
    func_0x0a8a7de0(&stack0x00000078,uVar13);
    if (*plVar11 != 0 && (int)plVar11[1] == iStack0000000000000070) {
      func_0x0d8569b0(*plVar11,lVar9,uVar5);
    }
    _iStack0000000000000070 = _iStack0000000000000080;
    puVar16 = _iStack0000000000000080;
    puVar18 = in_stack_00000078;
    puVar17 = in_stack_00000078;
    plVar11 = in_stack_000000a0;
    if (in_stack_00000078 != _iStack0000000000000080) {
      do {
        in_stack_00000180 = puVar18[2];
        in_stack_00000170 = *puVar18;
        in_stack_00000178 = puVar18[1];
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        func_0x09a26380(puVar14,&stack0x00000170,&stack0x00000248,&stack0x000002c8);
        if ((char)unaff_R12[-1] == '\0') {
          *in_stack_00000098 = 0;
          in_stack_00000098[1] = 0;
          in_stack_00000098[2] = 0;
          *(undefined1 *)(unaff_R12 + -1) = 1;
LAB_09a95bbe:
          plVar11 = (long *)func_0x09a3a480(in_stack_00000098,puVar14);
        }
        else {
          plVar11 = (long *)unaff_R12[-3];
          if ((long *)unaff_R12[-2] <= plVar11) goto LAB_09a95bbe;
          plVar11[2] = in_stack_00000020;
          *plVar11 = (long)in_stack_00000010;
          plVar11[1] = _iStack0000000000000018;
          in_stack_00000010 = (long *)0x0;
          _iStack0000000000000018 = 0;
          in_stack_00000020 = 0;
          *(undefined1 *)(plVar11 + 3) = uStack0000000000000028;
          *(undefined1 *)(plVar11 + 4) = 0;
          *(undefined1 *)(plVar11 + 7) = 0;
          if (in_stack_00000048 == '\x01') {
            plVar11[4] = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            *(undefined4 *)(plVar11 + 4) = uStack0000000000000030;
            *(undefined4 *)((long)plVar11 + 0x24) = uStack0000000000000034;
            *(undefined4 *)(plVar11 + 5) = uStack0000000000000038;
            *(undefined4 *)((long)plVar11 + 0x2c) = uStack000000000000003c;
            plVar11[6] = in_stack_00000040;
            _uStack0000000000000030 = 0;
            _uStack0000000000000038 = 0;
            in_stack_00000040 = 0;
            *(undefined1 *)(plVar11 + 7) = 1;
          }
          *(undefined1 *)(plVar11 + 8) = 0;
          *(undefined1 *)(plVar11 + 0xb) = 0;
          if (in_stack_00000068 == '\x01') {
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[10] = 0;
            *(undefined4 *)(plVar11 + 8) = uStack0000000000000050;
            *(undefined4 *)((long)plVar11 + 0x44) = uStack0000000000000054;
            *(undefined4 *)(plVar11 + 9) = uStack0000000000000058;
            *(undefined4 *)((long)plVar11 + 0x4c) = uStack000000000000005c;
            plVar11[10] = in_stack_00000060;
            _uStack0000000000000050 = 0;
            _uStack0000000000000058 = 0;
            in_stack_00000060 = 0;
            *(undefined1 *)(plVar11 + 0xb) = 1;
          }
          plVar11 = plVar11 + 0xc;
        }
        unaff_R12[-3] = (ulong)plVar11;
        func_0x06266a40(&stack0x00000050);
        uVar15 = _uStack0000000000000030;
        if ((in_stack_00000048 == '\x01') &&
           (uVar4 = _uStack0000000000000038, _uStack0000000000000030 != 0)) {
          while (uVar15 != uVar4) {
            if (*(uint *)(uVar4 - 8) != unaff_R15) {
              (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(uVar4 - 8) * 8))
                        (&stack0x0000000f,uVar4 - 0x20);
            }
            *(undefined4 *)(uVar4 - 8) = 0xffffffff;
            puVar16 = _iStack0000000000000070;
            uVar4 = uVar4 - 0x20;
          }
          _uStack0000000000000038 = uVar15;
          func_0x0412a280(_uStack0000000000000030,in_stack_00000040 - _uStack0000000000000030);
          puVar14 = &stack0x00000010;
        }
        if (((ulong)in_stack_00000010 & 1) != 0) {
          func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
        }
        func_0x06266a40(&stack0x000002c8);
        if (unaff_R15 != 0) {
          (*_UNK_0f1d0908)(&stack0x0000000f,&stack0x00000248);
        }
        if ((in_stack_00000170 & 1) != 0) {
          func_0x0412a280(in_stack_00000180,in_stack_00000170 & 0xfffffffffffffffe);
        }
        puVar18 = puVar18 + 4;
        puVar17 = in_stack_00000078;
        plVar11 = in_stack_000000a0;
      } while (puVar18 != puVar16);
    }
    in_stack_00000078 = puVar17;
    in_stack_000000a0 = plVar11;
    puVar16 = _iStack0000000000000080;
    if (puVar17 != (ulong *)0x0) {
      for (; puVar17 != puVar16; puVar16 = puVar16 + -4) {
        if ((puVar16[-4] & 1) != 0) {
          func_0x0412a280(puVar16[-2],puVar16[-4] & 0xfffffffffffffffe);
        }
      }
      _iStack0000000000000080 = puVar17;
      func_0x0412a280(in_stack_00000078,
                      CONCAT44(uStack000000000000008c,uStack0000000000000088) -
                      (long)in_stack_00000078);
    }
    if ((in_stack_000000a8 != (long *)0x0) &&
       (*in_stack_000000a8 != 0 && (int)in_stack_000000a8[1] == in_stack_000000b0)) {
      func_0x0d8569b0(*in_stack_000000a8,in_stack_000000b8,in_stack_000000c0);
    }
    do {
      puVar16 = in_stack_00000230;
      if ((((in_stack_000000e8 & 1) != 0) && (in_stack_000000c8 != (long *)0x0)) &&
         (*in_stack_000000c8 != 0 && (int)in_stack_000000c8[1] == in_stack_000000d0)) {
        func_0x0d8569b0(*in_stack_000000c8,in_stack_000000d8,in_stack_000000e0);
      }
      lVar12 = in_stack_000001f0;
      in_stack_00000230 = puVar16 + 5;
      if (in_stack_00000230 == in_stack_00000238) {
        if (in_stack_000001f0 != 0) {
          for (; lVar12 != in_stack_000001f8; in_stack_000001f8 = in_stack_000001f8 + -0x28) {
            if ((*(byte *)(in_stack_000001f8 + -0x28) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(in_stack_000001f8 + -0x18),
                              *(ulong *)(in_stack_000001f8 + -0x28) & 0xfffffffffffffffe);
            }
          }
          func_0x0412a280(lVar12,in_stack_00000200 - lVar12);
        }
        puVar14 = in_stack_000001e8;
        in_stack_000001e8[2] = in_stack_00000120;
        *in_stack_000001e8 = in_stack_00000110;
        in_stack_000001e8[1] = in_stack_00000118;
        in_stack_00000110 = 0;
        in_stack_00000118 = 0;
        in_stack_00000120 = 0;
        *(undefined1 *)(in_stack_000001e8 + 3) = in_stack_00000128;
        *(undefined1 *)(in_stack_000001e8 + 4) = 0;
        *(undefined1 *)(in_stack_000001e8 + 7) = 0;
        if (in_stack_00000148 == '\x01') {
          in_stack_000001e8[4] = in_stack_00000130;
          in_stack_000001e8[5] = in_stack_00000138;
          in_stack_000001e8[6] = in_stack_00000140;
          in_stack_00000130 = 0;
          in_stack_00000138 = 0;
          in_stack_00000140 = 0;
          *(undefined1 *)(in_stack_000001e8 + 7) = 1;
        }
        *(undefined1 *)(in_stack_000001e8 + 8) = 0;
        *(undefined1 *)(in_stack_000001e8 + 0xb) = 0;
        if (in_stack_00000168 == '\x01') {
          in_stack_000001e8[8] = in_stack_00000150;
          in_stack_000001e8[9] = in_stack_00000158;
          in_stack_000001e8[10] = in_stack_00000160;
          in_stack_00000150 = 0;
          in_stack_00000158 = (ulong *)0x0;
          in_stack_00000160 = (ulong *)0x0;
          *(undefined1 *)(in_stack_000001e8 + 0xb) = 1;
        }
        *(undefined1 *)(in_stack_000001e8 + 0xc) = 1;
        func_0x06266a40(&stack0x00000150);
        lVar12 = in_stack_00000130;
        if ((in_stack_00000148 == '\x01') && (in_stack_00000130 != 0)) {
          if (in_stack_00000130 != in_stack_00000138) {
            lVar9 = in_stack_00000138;
            do {
              lVar2 = lVar9 + -0x20;
              if ((ulong)*(uint *)(lVar9 + -8) != 0xffffffff) {
                (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(lVar9 + -8) * 8))
                          (&stack0x00000010,lVar2);
              }
              *(undefined4 *)(lVar9 + -8) = 0xffffffff;
              puVar14 = in_stack_000001e8;
              lVar9 = lVar2;
            } while (lVar2 != lVar12);
          }
          in_stack_00000138 = lVar12;
          func_0x0412a280(in_stack_00000130,in_stack_00000140 - in_stack_00000130);
        }
        if ((in_stack_00000110 & 1) != 0) {
          func_0x0412a280(in_stack_00000120,in_stack_00000110 & 0xfffffffffffffffe);
        }
        return puVar14;
      }
      if ((*plVar11 == 0) &&
         (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0139beab),
         cVar7 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(char *)*plVar11 == '\0') &&
         (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0139beab),
         cVar7 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      func_0x093e8600(&stack0x000000c8,puVar16 + 8,plVar11[2]);
    } while (in_stack_000000e8 != 1);
    if ((*in_stack_00000230 & 1) == 0) {
      in_stack_00000100 = puVar16[7];
      in_stack_000000f0 = *in_stack_00000230;
      in_stack_000000f8 = puVar16[6];
    }
    else {
      func_0x0412e5e0(&stack0x000000f0,puVar16[7],puVar16[6]);
    }
    uVar6 = in_stack_00000100;
    uVar4 = in_stack_000000f8;
    uVar15 = in_stack_000000f0;
    in_stack_00000010 = (long *)in_stack_000000f0;
    _iStack0000000000000018 = in_stack_000000f8;
    in_stack_00000020 = in_stack_00000100;
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    _uStack0000000000000028 = _uStack0000000000000028 & 0xffffff00;
    _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffffffffff00;
    in_stack_00000048 = '\0';
    _uStack0000000000000050 = _uStack0000000000000050 & 0xffffffffffffff00;
    in_stack_00000068 = '\0';
    if (in_stack_00000168 == '\0') {
      in_stack_00000150 = 0;
      in_stack_00000158 = (ulong *)0x0;
      in_stack_00000160 = (ulong *)0x0;
      in_stack_00000168 = '\x01';
LAB_09a9480c:
      unaff_R12 = (ulong *)func_0x09a3a480(&stack0x00000150,&stack0x00000010);
    }
    else {
      if (in_stack_00000160 <= in_stack_00000158) goto LAB_09a9480c;
      in_stack_00000158[2] = uVar6;
      *in_stack_00000158 = uVar15;
      in_stack_00000158[1] = uVar4;
      in_stack_00000010 = (long *)0x0;
      _iStack0000000000000018 = 0;
      in_stack_00000020 = 0;
      *(undefined1 *)(in_stack_00000158 + 3) = 0;
      *(undefined1 *)(in_stack_00000158 + 4) = 0;
      *(undefined1 *)(in_stack_00000158 + 7) = 0;
      *(undefined1 *)(in_stack_00000158 + 8) = 0;
      *(undefined1 *)(in_stack_00000158 + 0xb) = 0;
      unaff_R12 = in_stack_00000158 + 0xc;
    }
    in_stack_00000158 = unaff_R12;
    func_0x06266a40(&stack0x00000050);
    uVar15 = _uStack0000000000000030;
    if ((in_stack_00000048 == '\x01') &&
       (uVar4 = _uStack0000000000000038, _uStack0000000000000030 != 0)) {
      while (uVar15 != uVar4) {
        if (*(uint *)(uVar4 - 8) != unaff_R15) {
          (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(uVar4 - 8) * 8))
                    (&stack0x000000a8,uVar4 - 0x20);
        }
        *(undefined4 *)(uVar4 - 8) = 0xffffffff;
        uVar4 = uVar4 - 0x20;
      }
      _uStack0000000000000038 = uVar15;
      func_0x0412a280(_uStack0000000000000030,in_stack_00000040 - _uStack0000000000000030);
    }
    if (((ulong)in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
    }
    func_0x06266a40(&stack0x00000348);
    if ((in_stack_000000f0 & 1) != 0) {
      func_0x0412a280(in_stack_00000100,in_stack_000000f0 & 0xfffffffffffffffe);
    }
    if (in_stack_000000e8 == 0) {
      uVar13 = func_0x048a88b0();
      func_0x06266d00(&stack0x00000110);
      uVar13 = func_0x0eee2d70(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      if (in_stack_000000e8 == 1) {
        func_0x0d85dec0(&stack0x000000c8);
      }
      func_0x09a93030(&stack0x000001f0);
      func_0x06266d00(&stack0x00000110);
      uVar13 = func_0x0eee2d70(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      uVar13 = func_0x04882e20(uVar13);
      func_0x04882e20(uVar13);
      pcVar3 = (code *)swi(3);
      puVar14 = (undefined8 *)(*pcVar3)();
      return puVar14;
    }
    if ((*in_stack_000000a0 == 0) &&
       (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_0139beab),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*in_stack_000000a0 == '\0') &&
       (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_0139beab),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x093a9890(&stack0x000000a8,puVar16 + 8,in_stack_000000a0[2],in_stack_00000228);
    if ((int)in_stack_000000c8[1] == in_stack_000000d0) {
      lVar12 = *in_stack_000000c8;
    }
    else {
      lVar12 = 0;
    }
    lVar12 = func_0x09acce30(lVar12,in_stack_000000d8,in_stack_000000e0);
    plVar11 = *(long **)(lVar12 + 0x58);
    iVar1 = *(int *)(lVar12 + 0x60);
    _iStack0000000000000018 = CONCAT44(uStack000000000000001c,iVar1);
    uVar13 = *(undefined8 *)(lVar12 + 0x68);
    _uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x70);
    uStack000000000000002c = *(undefined4 *)(lVar12 + 0x74);
    iVar8 = (int)plVar11[1];
    lVar12 = *plVar11;
    in_stack_00000010 = plVar11;
    in_stack_00000020 = uVar13;
    if (lVar12 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0(lVar12,uVar13);
      iVar8 = (int)plVar11[1];
      lVar12 = *plVar11;
    }
    if (iVar8 != iVar1) {
      lVar12 = 0;
    }
    lVar12 = func_0x094c80a0(lVar12,uVar13,_uStack0000000000000028);
    if ((int)in_stack_000000a8[1] == in_stack_000000b0) {
      lVar9 = *in_stack_000000a8;
    }
    else {
      lVar9 = 0;
    }
    lVar2 = (*(long **)(lVar12 + 0x98))[1];
    lVar12 = **(long **)(lVar12 + 0x98);
    lVar9 = func_0x09accf10(lVar9,in_stack_000000b8,in_stack_000000c0);
    puVar16 = *(ulong **)(lVar9 + 0x18);
    iVar1 = *(int *)(lVar9 + 0x20);
    _iStack0000000000000080 = (ulong *)CONCAT44(uStack0000000000000084,iVar1);
    uStack0000000000000088 = *(undefined4 *)(lVar9 + 0x28);
    uStack000000000000008c = *(undefined4 *)(lVar9 + 0x2c);
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    uStack0000000000000090 = *(undefined4 *)(lVar9 + 0x30);
    uStack0000000000000094 = *(undefined4 *)(lVar9 + 0x34);
    iVar8 = (int)puVar16[1];
    uVar15 = *puVar16;
    in_stack_00000078 = puVar16;
    if (uVar15 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0(uVar15,uVar13);
      iVar8 = (int)puVar16[1];
      uVar15 = *puVar16;
    }
    if (iVar8 != iVar1) {
      uVar15 = 0;
    }
    lVar10 = func_0x0963dc60(uVar15,uVar13,uStack0000000000000090);
    puVar14 = &stack0x00000010;
    lVar9 = *(long *)(lVar10 + 0x98);
    in_stack_00000098 = unaff_R12 + -4;
    lVar10 = *(long *)(lVar10 + 0x90);
    if ((char)unaff_R12[-1] == '\0') {
      *in_stack_00000098 = 0;
      unaff_R12[-3] = 0;
      unaff_R12[-2] = 0;
      *(undefined1 *)(unaff_R12 + -1) = 1;
    }
    func_0x09a26be0(in_stack_00000098,
                    (lVar9 - lVar10 >> 3) * -0x71c71c71c71c71c7 +
                    (lVar2 - lVar12 >> 3) * -0x71c71c71c71c71c7 + 0x12);
    if (in_stack_00000078 != (ulong *)0x0) {
      if (*in_stack_00000078 != 0 && (int)in_stack_00000078[1] == iStack0000000000000080) {
        func_0x0d8569b0(*in_stack_00000078,CONCAT44(uStack000000000000008c,uStack0000000000000088),
                        uStack0000000000000090);
      }
    }
    if (in_stack_00000010 != (long *)0x0) {
      if (*in_stack_00000010 != 0 && (int)in_stack_00000010[1] == iStack0000000000000018) {
        func_0x0d8569b0(*in_stack_00000010,in_stack_00000020,_uStack0000000000000028);
      }
    }
    if ((int)in_stack_000000c8[1] == in_stack_000000d0) {
      lVar12 = *in_stack_000000c8;
    }
    else {
      lVar12 = 0;
    }
    lVar12 = func_0x09acce30(lVar12,in_stack_000000d8,in_stack_000000e0);
    plVar11 = *(long **)(lVar12 + 0x38);
    iVar1 = *(int *)(lVar12 + 0x40);
    _iStack0000000000000018 = CONCAT44(uStack000000000000001c,iVar1);
    lVar9 = *(long *)(lVar12 + 0x48);
    _uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x50);
    uStack000000000000002c = *(undefined4 *)(lVar12 + 0x54);
    iVar8 = (int)plVar11[1];
    lVar12 = *plVar11;
    in_stack_00000010 = plVar11;
    in_stack_00000020 = lVar9;
    if (lVar12 != 0 && iVar8 == iVar1) {
      func_0x0d8568b0();
      iVar8 = (int)plVar11[1];
      lVar12 = *plVar11;
    }
    _iStack0000000000000070 = (ulong *)CONCAT44(uStack0000000000000074,iVar1);
    if (iVar8 != iVar1) {
      lVar12 = 0;
    }
    uVar5 = uStack0000000000000028;
    uVar13 = func_0x094c7fc0(lVar12,lVar9,uStack0000000000000028);
    func_0x0af49040(&stack0x00000078,uVar13);
    if (*plVar11 != 0 && (int)plVar11[1] == iStack0000000000000070) {
      func_0x0d8569b0(*plVar11,lVar9,uVar5);
    }
    puVar16 = _iStack0000000000000080;
    puVar17 = in_stack_00000078;
    if (in_stack_00000078 != _iStack0000000000000080) goto LAB_09a94d5d;
    puVar16 = in_stack_00000078;
    puVar17 = _iStack0000000000000080;
  } while (in_stack_00000078 == (ulong *)0x0);
  goto joined_r0x09a95048;
LAB_09a94d5d:
  do {
    in_stack_000001e0 = puVar17[2];
    in_stack_000001d0 = *puVar17;
    in_stack_000001d8 = puVar17[1];
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    func_0x09a26380(&stack0x00000010,&stack0x000001d0,&stack0x000002a8,&stack0x00000328);
    if ((char)unaff_R12[-1] == '\0') {
      *in_stack_00000098 = 0;
      in_stack_00000098[1] = 0;
      in_stack_00000098[2] = 0;
      *(undefined1 *)(unaff_R12 + -1) = 1;
LAB_09a94efe:
      plVar11 = (long *)func_0x09a3a480(in_stack_00000098,&stack0x00000010);
    }
    else {
      plVar11 = (long *)unaff_R12[-3];
      if ((long *)unaff_R12[-2] <= plVar11) goto LAB_09a94efe;
      plVar11[2] = in_stack_00000020;
      *plVar11 = (long)in_stack_00000010;
      plVar11[1] = _iStack0000000000000018;
      in_stack_00000010 = (long *)0x0;
      _iStack0000000000000018 = 0;
      in_stack_00000020 = 0;
      *(undefined1 *)(plVar11 + 3) = uStack0000000000000028;
      *(undefined1 *)(plVar11 + 4) = 0;
      *(undefined1 *)(plVar11 + 7) = 0;
      if (in_stack_00000048 == '\x01') {
        plVar11[4] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        *(undefined4 *)(plVar11 + 4) = uStack0000000000000030;
        *(undefined4 *)((long)plVar11 + 0x24) = uStack0000000000000034;
        *(undefined4 *)(plVar11 + 5) = uStack0000000000000038;
        *(undefined4 *)((long)plVar11 + 0x2c) = uStack000000000000003c;
        plVar11[6] = in_stack_00000040;
        _uStack0000000000000030 = 0;
        _uStack0000000000000038 = 0;
        in_stack_00000040 = 0;
        *(undefined1 *)(plVar11 + 7) = 1;
      }
      *(undefined1 *)(plVar11 + 8) = 0;
      *(undefined1 *)(plVar11 + 0xb) = 0;
      if (in_stack_00000068 == '\x01') {
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        *(undefined4 *)(plVar11 + 8) = uStack0000000000000050;
        *(undefined4 *)((long)plVar11 + 0x44) = uStack0000000000000054;
        *(undefined4 *)(plVar11 + 9) = uStack0000000000000058;
        *(undefined4 *)((long)plVar11 + 0x4c) = uStack000000000000005c;
        plVar11[10] = in_stack_00000060;
        _uStack0000000000000050 = 0;
        _uStack0000000000000058 = 0;
        in_stack_00000060 = 0;
        *(undefined1 *)(plVar11 + 0xb) = 1;
      }
      plVar11 = plVar11 + 0xc;
    }
    unaff_R12[-3] = (ulong)plVar11;
    func_0x06266a40(&stack0x00000050);
    uVar15 = _uStack0000000000000030;
    if ((in_stack_00000048 == '\x01') &&
       (uVar4 = _uStack0000000000000038, _uStack0000000000000030 != 0)) {
      while (uVar15 != uVar4) {
        if ((ulong)*(uint *)(uVar4 - 8) != 0xffffffff) {
          (**(code **)(&UNK_0f1d0908 + (ulong)*(uint *)(uVar4 - 8) * 8))
                    (&stack0x0000000f,uVar4 - 0x20);
        }
        *(undefined4 *)(uVar4 - 8) = 0xffffffff;
        uVar4 = uVar4 - 0x20;
      }
      _uStack0000000000000038 = uVar15;
      func_0x0412a280(_uStack0000000000000030,in_stack_00000040 - _uStack0000000000000030);
      unaff_R15 = 0xffffffff;
    }
    puVar14 = &stack0x00000010;
    if (((ulong)in_stack_00000010 & 1) != 0) {
      func_0x0412a280(in_stack_00000020,(ulong)in_stack_00000010 & 0xfffffffffffffffe);
    }
    func_0x06266a40();
    if (unaff_R15 != 0) {
      (*_UNK_0f1d0908)(&stack0x0000000f,&stack0x000002a8);
    }
    if ((in_stack_000001d0 & 1) != 0) {
      func_0x0412a280(in_stack_000001e0,in_stack_000001d0 & 0xfffffffffffffffe);
    }
    puVar17 = puVar17 + 4;
  } while (puVar17 != puVar16);
  puVar16 = in_stack_00000078;
  puVar17 = _iStack0000000000000080;
  if (in_stack_00000078 != (ulong *)0x0) {
joined_r0x09a95048:
    for (; puVar18 = in_stack_00000078, in_stack_00000078 != puVar17; puVar17 = puVar17 + -4) {
      in_stack_00000078 = puVar16;
      if ((puVar17[-4] & 1) != 0) {
        func_0x0412a280(puVar17[-2],puVar17[-4] & 0xfffffffffffffffe);
      }
      puVar16 = in_stack_00000078;
      in_stack_00000078 = puVar18;
    }
    _iStack0000000000000080 = in_stack_00000078;
    in_stack_00000078 = puVar16;
    func_0x0412a280(puVar16,CONCAT44(uStack000000000000008c,uStack0000000000000088) - (long)puVar16)
    ;
    puVar14 = &stack0x00000010;
  }
  goto LAB_09a95094;
}


