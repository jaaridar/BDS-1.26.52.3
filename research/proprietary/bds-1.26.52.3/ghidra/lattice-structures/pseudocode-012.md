# FUN_09cba670

- entry: `0x9cba670`
- body size: 6323 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Instruction at (ram,0x09cba676) overlaps instruction at (ram,0x09cba675)
    */
/* WARNING: Removing unreachable block (ram,0x09cb9b7f) */
/* WARNING: Removing unreachable block (ram,0x09cb9b91) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09cba670(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  int *in_RAX;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long in_RCX;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  undefined *puVar19;
  ulong uVar20;
  short *psVar21;
  long lVar22;
  long unaff_R12;
  ulong *puVar23;
  long *unaff_R13;
  int *unaff_R14;
  ulong uVar24;
  undefined2 in_FS;
  bool bVar25;
  bool bVar26;
  int *in_stack_00000008;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  ulong *in_stack_00000040;
  uint in_stack_00000048;
  long in_stack_00000050;
  uint uStack0000000000000060;
  undefined2 uStack0000000000000064;
  undefined2 uStack0000000000000066;
  undefined4 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined1 uStack000000000000006e;
  undefined1 uStack000000000000006f;
  long *in_stack_00000070;
  uint in_stack_00000078;
  ulong in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined1 uStack000000000000008c;
  long in_stack_00000090;
  long in_stack_00000098;
  byte bStack00000000000000a0;
  undefined7 uStack00000000000000a1;
  long in_stack_000000b0;
  long in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong *in_stack_000000d0;
  long *in_stack_000000d8;
  uint uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  uint uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  ulong *in_stack_00000100;
  ulong *in_stack_00000108;
  ulong *in_stack_00000110;
  uint uStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 uStack0000000000000128;
  long *in_stack_00000130;
  uint uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  ulong *in_stack_00000148;
  long in_stack_00000160;
  ulong *in_stack_00000170;
  ulong *in_stack_00000178;
  undefined8 *in_stack_00000180;
  undefined8 *in_stack_00000188;
  undefined8 *in_stack_00000190;
  ulong in_stack_000001a0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  ulong *in_stack_000001c8;
  undefined1 in_stack_000001d0;
  ulong *in_stack_000001d8;
  uint uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  ulong *in_stack_000001f0;
  uint in_stack_00000200;
  undefined4 in_stack_00000204;
  long *in_stack_00000210;
  long *in_stack_00000238;
  long *in_stack_00000240;
  long in_stack_00000248;
  short in_stack_00000250;
  long in_stack_00000260;
  long in_stack_00000270;
  long in_stack_00000280;
  long in_stack_00000290;
  long *in_stack_000002a8;
  char in_stack_000002b0;
  long *in_stack_000002e8;
  long *in_stack_000002f0;
  long in_stack_00000310;
  long in_stack_00000320;
  long in_stack_00000330;
  long in_stack_00000340;
  long *in_stack_00000358;
  uint in_stack_00000370;
  long *in_stack_000003a0;
  
  *(undefined2 *)in_RAX = in_FS;
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)((long)in_RAX + -0x77) = *(char *)((long)in_RAX + -0x77) + (char)in_RCX;
  *(undefined2 *)((long)in_RAX * 5) = in_FS;
  cVar8 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  pcVar2 = (char *)((long)&__DT_RELA[0x4fef1].r_info + in_RCX + 4);
  *pcVar2 = *pcVar2 + (char)in_RCX;
  bVar26 = SCARRY1((char)*in_RAX,cVar8);
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  bVar25 = (char)*in_RAX < '\0';
code_r0x09cba685:
  uStack000000000000008c = bVar26 == bVar25;
  uVar11 = func_0x0b634790(&stack0x00000060);
  puVar9 = _uStack0000000000000030;
  if ((int)uVar11 == 5) {
    if (_uStack0000000000000038 < in_stack_00000040) {
      *_uStack0000000000000038 = in_stack_000001a0;
      puVar15 = _uStack0000000000000038 + 1;
LAB_09cba83d:
      iVar17 = 0;
      _uStack0000000000000038 = puVar15;
      puVar1 = in_stack_00000180;
      puVar10 = in_stack_00000188;
      goto joined_r0x09cba84f;
    }
    plVar18 = (long *)((long)_uStack0000000000000038 - (long)_uStack0000000000000030);
    plVar12 = (long *)(((long)plVar18 >> 3) + 1);
    if (plVar12 < (long *)0x2000000000000000) {
      uVar24 = (long)in_stack_00000040 - (long)_uStack0000000000000030;
      unaff_R13 = (long *)((long)uVar24 >> 2);
      if ((long *)((long)uVar24 >> 2) <= plVar12) {
        unaff_R13 = plVar12;
      }
      if (0x7ffffffffffffff7 < uVar24) {
        unaff_R13 = (long *)0x1fffffffffffffff;
      }
      if (unaff_R13 < (long *)0x2000000000000000) {
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)unaff_R13 * 8);
        if (lVar13 == 0) {
          FUN_0eec74c0((long)unaff_R13 * 8,0);
        }
        puVar3 = (ulong *)(lVar13 + (long)unaff_R13 * 8);
        *(ulong *)(lVar13 + (long)plVar18) = in_stack_000001a0;
        puVar15 = (ulong *)((long)plVar18 + lVar13 + 8);
        puVar23 = (ulong *)((long)plVar18 + ((long)plVar18 >> 3) * -8 + lVar13);
        memcpy(puVar23,puVar9,plVar18);
        _uStack0000000000000030 = puVar23;
        in_stack_00000040 = puVar3;
        if (puVar9 != (ulong *)0x0) {
          _uStack0000000000000038 = puVar15;
          func_0x0412a280(puVar9,uVar24);
        }
        unaff_R13 = (long *)&stack0x000000e0;
        unaff_R12 = in_stack_00000160;
        goto LAB_09cba83d;
      }
      FUN_04882eb0();
    }
    func_0x05ab4620();
    iVar17 = FUN_04108328(&DAT_0f5ea4a0);
    if (iVar17 != 0) {
      func_0x08b670e0(&DAT_0f5ea138);
      __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
      unaff_R12 = in_stack_00000160;
    }
    uStack0000000000000060 = 0x6574691a;
    uStack0000000000000064 = 0x2e6d;
    uStack0000000000000066 = 0x6961;
    uStack0000000000000068 = 0x616e2e72;
    uStack000000000000006c = 0x656d;
    uStack000000000000006e = 0;
    (**(code **)(_DAT_0f5ea138 + 0x90))
              (&stack0x00000138,&DAT_0f5ea138,&stack0x00000060,&stack0x00000380);
    if ((uStack0000000000000060 & 1) != 0) {
      func_0x0412a280(in_stack_00000070,
                      CONCAT26(uStack0000000000000066,
                               CONCAT24(uStack0000000000000064,uStack0000000000000060)) &
                      0xfffffffffffffffe);
    }
    _uStack0000000000000120 = 0;
    _uStack0000000000000128 = 0;
    in_stack_00000130 = (long *)0x0;
    if (*(int *)(unaff_R12 + 0x20) == 1) {
      if ((long)*(int *)(unaff_R12 + 0x104) == -1) {
        puVar19 = &UNK_013c28d2;
      }
      else {
        puVar19 = *(undefined **)(&UNK_0f37af30 + (long)*(int *)(unaff_R12 + 0x104) * 8);
      }
      func_0x04130630(&stack0x00000120,puVar19);
      puVar9 = in_stack_00000170;
      _uStack0000000000000030 = (ulong *)0x0;
      _uStack0000000000000038 = (ulong *)0x0;
      in_stack_00000040 = (ulong *)0x0;
      uVar24 = in_stack_00000170[1] - *in_stack_00000170 >> 3 & 0xffffffff;
      if (uVar24 != 0) {
        _uStack0000000000000038 = (ulong *)func_0x0ee32660(uVar24 * 8);
        in_stack_00000040 = _uStack0000000000000038 + uVar24;
      }
      puVar15 = in_stack_00000178;
      _uStack0000000000000030 = _uStack0000000000000038;
      if (in_stack_00000178 == (ulong *)0x0) {
        in_stack_00000020 = (ulong *)*puVar9;
        in_stack_00000010 = puVar9;
        in_stack_00000018 = (ulong *)0x0;
      }
      else {
        LOCK();
        in_stack_00000178[1] = in_stack_00000178[1] + 1;
        UNLOCK();
        in_stack_00000020 = (ulong *)*puVar9;
        in_stack_00000010 = puVar9;
        in_stack_00000018 = in_stack_00000178;
        LOCK();
        in_stack_00000178[1] = in_stack_00000178[1] + 1;
        UNLOCK();
        LOCK();
        puVar9 = in_stack_00000178 + 1;
        uVar24 = *puVar9;
        *puVar9 = *puVar9 - 1;
        UNLOCK();
        if (uVar24 == 0) {
          (**(code **)(*in_stack_00000178 + 0x10))(in_stack_00000178);
          func_0x0412c2d0(puVar15);
        }
      }
      puVar9 = in_stack_00000178;
      if (in_stack_00000178 == (ulong *)0x0) {
        in_stack_00000110 = (ulong *)in_stack_00000170[1];
        in_stack_00000100 = in_stack_00000170;
        in_stack_00000108 = (ulong *)0x0;
      }
      else {
        LOCK();
        in_stack_00000178[1] = in_stack_00000178[1] + 1;
        UNLOCK();
        in_stack_00000110 = (ulong *)in_stack_00000170[1];
        in_stack_00000100 = in_stack_00000170;
        in_stack_00000108 = in_stack_00000178;
        LOCK();
        in_stack_00000178[1] = in_stack_00000178[1] + 1;
        UNLOCK();
        LOCK();
        puVar15 = in_stack_00000178 + 1;
        uVar24 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if (uVar24 == 0) {
          (**(code **)(*in_stack_00000178 + 0x10))(in_stack_00000178);
          func_0x0412c2d0(puVar9);
        }
      }
      unaff_R13 = (long *)&stack0x000000e0;
      if ((in_stack_00000010 != in_stack_00000100) || (in_stack_00000020 != in_stack_00000110))
      goto LAB_09cba1a0;
      iVar17 = 2;
      puVar9 = in_stack_00000108;
      goto joined_r0x09cba8a8;
    }
    if (*(int *)(unaff_R12 + 0x20) != 0) goto LAB_09cbaad0;
    if ((long)*(int *)(unaff_R12 + 0x100) == -1) {
      puVar19 = &UNK_013c28d2;
    }
    else {
      puVar19 = *(undefined **)(&UNK_0f3c5280 + (long)*(int *)(unaff_R12 + 0x100) * 8);
    }
    func_0x04130630(&stack0x00000120,puVar19);
    if (*(int *)(unaff_R12 + 0x100) == 0) {
      plVar12 = (long *)(**(code **)(*unaff_R13 + 0xd8))(unaff_R13);
      if (plVar12 == (long *)0x0) {
        if (unaff_R13[5] == 0) goto LAB_09cb9cd3;
        lVar13 = *(long *)(unaff_R13[5] + 8);
      }
      else {
        lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      if (((lVar13 != 0) && (*(char *)((long)unaff_R13 + 0x14) != '\x17')) &&
         ((*(char *)((long)unaff_R13 + 0x14) != '\x10' || (*(int *)(in_stack_00000160 + 8) < 0x1b)))
         ) {
        func_0x0c451750(&stack0x00000060,&stack0x000002e0);
        func_0x09cbbb50(&stack0x00000010,&stack0x00000060);
        uStack0000000000000060 = 0xf371da8;
        uStack0000000000000064 = 0;
        uStack0000000000000066 = 0;
        if ((ulong)uStack00000000000000f0 != 0xffffffff) {
          (**(code **)(&UNK_0f1e08d8 + (ulong)uStack00000000000000f0 * 8))
                    (&stack0x00000030,&stack0x000000e0);
        }
        uStack00000000000000f0 = 0xffffffff;
        func_0x0c44e610(&stack0x00000060);
        _uStack0000000000000030 =
             (ulong *)CONCAT44(uStack0000000000000034,*(undefined4 *)(in_stack_00000160 + 0x108));
        in_stack_00000040 = (ulong *)0x0;
        in_stack_00000048 =
             CONCAT22(in_stack_00000048._2_2_,(ushort)(*(int *)(in_stack_00000160 + 0x120) == 1)) |
             0x100;
        _uStack0000000000000038 = (ulong *)&stack0x00000010;
        in_stack_00000050 = lVar13;
        uVar11 = func_0x0b634640(&stack0x00000030);
        if ((int)uVar11 != 5) {
          func_0x09cbbc90(in_stack_00000160,in_stack_00000008,uVar11,&stack0x00000138);
          func_0x049c8240(&stack0x00000010);
          goto joined_r0x09cbaf7b;
        }
        if (unaff_R13[5] != 0) {
          (**(code **)(*plVar18 + 0x208))(plVar18,unaff_R13);
        }
        if ((_uStack0000000000000120 & 1) == 0) {
          in_stack_00000070 = in_stack_00000130;
          uStack0000000000000060 = uStack0000000000000120;
          uStack0000000000000064 = (undefined2)(_uStack0000000000000120 >> 0x20);
          uStack0000000000000066 = (undefined2)(_uStack0000000000000120 >> 0x30);
          uStack0000000000000068 = uStack0000000000000128;
          uStack000000000000006c = (undefined2)((ulong)_uStack0000000000000128 >> 0x20);
          uStack000000000000006e = (undefined1)((ulong)_uStack0000000000000128 >> 0x30);
          uStack000000000000006f = (undefined1)((ulong)_uStack0000000000000128 >> 0x38);
        }
        else {
          FUN_0412e5e0(&stack0x00000060,in_stack_00000130,_uStack0000000000000128);
        }
        unaff_R12 = in_stack_00000160;
        in_stack_00000078 = 0;
        func_0x09e20be0(&stack0x00000080,*(undefined4 *)(in_stack_00000160 + 0x108));
        func_0x09e20be0(&stack0x000000a0,*(undefined4 *)(unaff_R12 + 0x118));
        if ((uStack0000000000000138 & 1) == 0) {
          in_stack_000000d0 = in_stack_00000148;
          in_stack_000000c0 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
          in_stack_000000c8 = CONCAT44(uStack0000000000000144,uStack0000000000000140);
        }
        else {
          FUN_0412e5e0(&stack0x000000c0,in_stack_00000148,
                       CONCAT44(uStack0000000000000144,uStack0000000000000140));
        }
        in_stack_000000d8 = (long *)((ulong)in_stack_000000d8 & 0xffffffff00000000);
        in_stack_00000100 = (ulong *)0x0;
        in_stack_00000108 = (ulong *)0x0;
        in_stack_00000110 = (ulong *)0x0;
        func_0x09ce36f0(&stack0x00000100,&stack0x00000060,&stack0x000000e0,4);
        func_0x09e232e0(in_stack_00000008,&UNK_012ada88,0x1c,&stack0x00000100);
        func_0x048f03a0(&stack0x00000100);
        if ((in_stack_000000c0 & 1) != 0) {
          func_0x0412a280(in_stack_000000d0,in_stack_000000c0 & 0xfffffffffffffffe);
        }
        if ((bStack00000000000000a0 & 1) != 0) {
          func_0x0412a280(in_stack_000000b0,
                          CONCAT71(uStack00000000000000a1,bStack00000000000000a0) &
                          0xfffffffffffffffe);
        }
        if ((in_stack_00000080 & 1) != 0) {
          func_0x0412a280(in_stack_00000090,in_stack_00000080 & 0xfffffffffffffffe);
        }
        if ((uStack0000000000000060 & 1) != 0) {
          func_0x0412a280(in_stack_00000070,
                          CONCAT26(uStack0000000000000066,
                                   CONCAT24(uStack0000000000000064,uStack0000000000000060)) &
                          0xfffffffffffffffe);
        }
        func_0x049c8240(&stack0x00000010);
        cVar8 = *(char *)(unaff_R12 + 0x138);
        goto joined_r0x09cbb3bf;
      }
    }
LAB_09cb9cd3:
    uStack0000000000000060 = (uint)&stack0x00000150;
    uStack0000000000000064 = (undefined2)((ulong)&stack0x00000150 >> 0x20);
    uStack0000000000000066 = (undefined2)((ulong)&stack0x00000150 >> 0x30);
    uStack0000000000000068 = 0xd89e8b0;
    uStack000000000000006c = 0;
    uStack000000000000006e = 0;
    uStack000000000000006f = 0;
    func_0x0470d9a0(&stack0x00000100,&UNK_012063a8,2,0xf,&stack0x00000060);
    if (((ulong)in_stack_00000100 & 1) == 0) {
      in_stack_00000040 = in_stack_00000110;
      _uStack0000000000000030 = in_stack_00000100;
      _uStack0000000000000038 = in_stack_00000108;
    }
    else {
      FUN_0412e5e0(&stack0x00000030,in_stack_00000110,in_stack_00000108);
    }
    in_stack_00000048 = 0;
    in_stack_00000010 = (ulong *)0x0;
    in_stack_00000018 = (ulong *)0x0;
    in_stack_00000020 = (ulong *)0x0;
    in_stack_00000188 = (undefined8 *)((ulong)in_stack_00000188 & 0xffffffffffffff00);
    in_stack_00000180 = &stack0x00000010;
    puVar9 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (ulong *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    in_stack_00000020 = puVar9 + 4;
    uStack0000000000000060 = (uint)&stack0x00000010;
    uStack0000000000000064 = (undefined2)((ulong)&stack0x00000010 >> 0x20);
    uStack0000000000000066 = (undefined2)((ulong)&stack0x00000010 >> 0x30);
    uStack0000000000000068 = SUB84(&stack0x000001d8,0);
    uStack000000000000006c = (undefined2)((ulong)&stack0x000001d8 >> 0x20);
    uStack000000000000006e = (undefined1)((ulong)&stack0x000001d8 >> 0x30);
    uStack000000000000006f = (undefined1)((ulong)&stack0x000001d8 >> 0x38);
    in_stack_00000070 = (long *)&stack0x000001c8;
    in_stack_00000078 = in_stack_00000078 & 0xffffff00;
    in_stack_00000010 = puVar9;
    in_stack_000001c8 = puVar9;
    in_stack_000001d8 = puVar9;
    if (((ulong)_uStack0000000000000030 & 1) == 0) {
      puVar9[2] = (ulong)in_stack_00000040;
      *(undefined4 *)puVar9 = uStack0000000000000030;
      *(undefined4 *)((long)puVar9 + 4) = uStack0000000000000034;
      *(undefined4 *)(puVar9 + 1) = uStack0000000000000038;
      *(undefined4 *)((long)puVar9 + 0xc) = uStack000000000000003c;
    }
    else {
      in_stack_00000018 = puVar9;
      FUN_0412e5e0(puVar9,in_stack_00000040,_uStack0000000000000038);
    }
    *(uint *)(puVar9 + 3) = in_stack_00000048;
    in_stack_00000018 = in_stack_000001c8 + 4;
    if (*in_stack_00000008 != 0) {
      func_0x09e22e10(in_stack_00000008,&UNK_01469691,0x20,&stack0x00000010,1);
    }
    puVar15 = in_stack_00000010;
    puVar9 = in_stack_00000018;
    if (in_stack_00000010 != (ulong *)0x0) {
      for (; puVar15 != puVar9; puVar9 = puVar9 + -4) {
        if ((puVar9[-4] & 1) != 0) {
          func_0x0412a280(puVar9[-2],puVar9[-4] & 0xfffffffffffffffe);
        }
      }
      in_stack_00000018 = puVar15;
      func_0x0412a280(in_stack_00000010,(long)in_stack_00000020 - (long)in_stack_00000010);
    }
    if (((ulong)_uStack0000000000000030 & 1) != 0) {
      func_0x0412a280(in_stack_00000040,(ulong)_uStack0000000000000030 & 0xfffffffffffffffe);
    }
    puVar9 = in_stack_00000100;
    puVar15 = in_stack_00000110;
    if (((ulong)in_stack_00000100 & 1) == 0) goto joined_r0x09cbaf7b;
    goto LAB_09cbad30;
  }
  iVar17 = 3;
  func_0x09cbbc90(unaff_R12,unaff_R14,uVar11,&stack0x00000138);
  puVar1 = in_stack_00000180;
  puVar10 = in_stack_00000188;
joined_r0x09cba84f:
  in_stack_00000180 = puVar1;
  in_stack_00000188 = puVar10;
  if (puVar1 != (undefined8 *)0x0) {
    while (puVar1 != puVar10) {
      puVar10 = puVar10 + -0x13;
      (**(code **)*puVar10)(puVar10);
    }
    in_stack_00000188 = puVar1;
    func_0x0412a280(in_stack_00000180,(long)in_stack_00000190 - (long)in_stack_00000180);
  }
  puVar9 = in_stack_00000108;
  if ((iVar17 != 3) && (iVar17 != 0)) goto joined_r0x09cba8a8;
  in_stack_00000020 = (ulong *)((long)in_stack_00000020 + 8);
  if ((in_stack_00000010 == in_stack_00000100) && (in_stack_00000020 == in_stack_00000110)) {
    iVar17 = 2;
    goto joined_r0x09cba8a8;
  }
LAB_09cba1a0:
  in_stack_000001a0 = *in_stack_00000020;
  if ((in_stack_00000238 == (long *)0x0) || (lVar13 = *in_stack_00000238, lVar13 == 0)) {
LAB_09cba294:
    iVar17 = *(int *)(unaff_R12 + 8);
    uVar16 = *(uint *)(unaff_R12 + 0x108);
    if (*(int *)(unaff_R12 + 0x104) == 0xc && 0x11 < iVar17) {
      lVar13 = *(long *)(in_stack_000001a0 + 0x10);
      uVar5 = *(uint *)(in_stack_000001a0 + 0x18);
      plVar12 = (long *)(*(long *)(lVar13 + 0x38) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x40) - *(long *)(lVar13 + 0x38))
                                     >> 3) - 1U & 0x88f64e44) * 8);
      do {
        if (*plVar12 == -1) {
          iVar14 = 0;
          goto LAB_09cba3bf;
        }
        lVar22 = *plVar12 * 0x20;
        plVar12 = (long *)(*(long *)(lVar13 + 0x50) + lVar22);
      } while (*(int *)(*(long *)(lVar13 + 0x50) + 8 + lVar22) != -0x7709b1bc);
      iVar14 = 0;
      if (plVar12 != *(long **)(lVar13 + 0x58)) {
        iVar14 = 0;
        lVar13 = plVar12[2];
        if (lVar13 != 0) {
          uVar24 = (ulong)((uVar5 & 0x3ffff) >> 0xb);
          if ((((uVar24 < (ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8) >> 3)) &&
               (lVar22 = *(long *)(*(long *)(lVar13 + 8) + uVar24 * 8), lVar22 != 0)) &&
              (uVar6 = *(uint *)(lVar22 + (ulong)(uVar5 & 0x7ff) * 4),
              (uVar5 & 0xfffc0000 ^ uVar6) < 0x3ffff)) &&
             (lVar13 = *(long *)(*(long *)(lVar13 + 0x50) + (ulong)(uVar6 >> 4 & 0x3ff8)),
             lVar13 != 0)) {
            iVar14 = (int)((ulong)(*(long *)(lVar13 + 8 + (ulong)(uVar6 & 0x7f) * 0x18) -
                                  *(long *)(lVar13 + (ulong)(uVar6 & 0x7f) * 0x18)) >> 3) *
                     0x3e0f83e1;
          }
        }
      }
LAB_09cba3bf:
      uVar16 = uVar16 + iVar14;
    }
    func_0x0c4510a0(&stack0x00000060,&stack0x000002e0);
    uStack0000000000000060 = 0xf371da8;
    uStack0000000000000064 = 0;
    uStack0000000000000066 = 0;
    uStack00000000000000e0 = 0;
    uStack00000000000000f0 = 0;
    if ((ulong)in_stack_00000370 == 0xffffffff) {
      uStack00000000000000f0 = 0xffffffff;
    }
    else {
      in_stack_000001c8 = (ulong *)unaff_R13;
      (**(code **)(&UNK_0f38c5a0 + (ulong)in_stack_00000370 * 8))
                (&stack0x000001c8,unaff_R13,&stack0x00000360);
    }
    in_stack_00000180 = (undefined8 *)0x0;
    in_stack_00000188 = (undefined8 *)0x0;
    in_stack_00000190 = (undefined8 *)0x0;
    in_stack_000001c8 = (ulong *)&stack0x00000180;
    in_stack_000001d0 = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x98,0);
    }
    puVar1 = puVar10 + 0x13;
    in_stack_00000180 = puVar10;
    in_stack_00000188 = puVar10;
    in_stack_00000190 = puVar1;
    func_0x0c4510a0(puVar10,&stack0x00000060);
    *puVar10 = &UNK_0f371da8;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)(puVar10 + 0x12) = 0;
    if ((ulong)uStack00000000000000f0 == 0xffffffff) {
      *(undefined4 *)(puVar10 + 0x12) = 0xffffffff;
    }
    else {
      in_stack_000001d8 = puVar10 + 0x10;
      (**(code **)(&UNK_0f38c5a0 + (ulong)uStack00000000000000f0 * 8))
                (&stack0x000001d8,in_stack_000001d8,unaff_R13);
      unaff_R12 = in_stack_00000160;
    }
    uStack0000000000000060 = 0xf371da8;
    uStack0000000000000064 = 0;
    uStack0000000000000066 = 0;
    in_stack_00000188 = puVar1;
    if ((ulong)uStack00000000000000f0 != 0xffffffff) {
      (**(code **)(&UNK_0f1e08d8 + (ulong)uStack00000000000000f0 * 8))(&stack0x000001c8,unaff_R13);
    }
    plVar12 = in_stack_000000d8;
    uStack00000000000000f0 = 0xffffffff;
    uStack0000000000000060 = 0xf36e918;
    uStack0000000000000064 = 0;
    uStack0000000000000066 = 0;
    in_stack_000000d8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    if (in_stack_000000b0 != 0) {
      in_stack_000000b8 = in_stack_000000b0;
      func_0x0412a280(in_stack_000000b0,in_stack_000000c0 - in_stack_000000b0);
    }
    if (in_stack_00000090 != 0) {
      in_stack_00000098 = in_stack_00000090;
      func_0x0412a280(in_stack_00000090,
                      CONCAT71(uStack00000000000000a1,bStack00000000000000a0) - in_stack_00000090);
    }
    plVar12 = in_stack_00000070;
    in_stack_00000070 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    plVar12 = (long *)CONCAT17(uStack000000000000006f,
                               CONCAT16(uStack000000000000006e,
                                        CONCAT24(uStack000000000000006c,uStack0000000000000068)));
    if (plVar12 != (long *)0x0) {
      LOCK();
      *(int *)((long)plVar12 + 0xc) = *(int *)((long)plVar12 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plVar12 + 0xc) < 1) && (*plVar12 == 0)) &&
         (lVar13 = CONCAT17(uStack000000000000006f,
                            CONCAT16(uStack000000000000006e,
                                     CONCAT24(uStack000000000000006c,uStack0000000000000068))),
         lVar13 != 0)) {
        func_0x0412a280(lVar13,0x10);
      }
    }
    in_stack_00000088 = *(undefined4 *)(unaff_R12 + 0x104);
    bVar26 = SBORROW4(iVar17,0x12);
    bVar25 = iVar17 + -0x12 < 0;
    uStack0000000000000068 = SUB84(&stack0x00000180,0);
    uStack000000000000006c = (undefined2)((ulong)&stack0x00000180 >> 0x20);
    uStack000000000000006e = (undefined1)((ulong)&stack0x00000180 >> 0x30);
    uStack000000000000006f = (undefined1)((ulong)&stack0x00000180 >> 0x38);
    in_stack_00000070 = (long *)0x0;
    in_stack_00000078 =
         CONCAT22(in_stack_00000078._2_2_,(ushort)(*(int *)(unaff_R12 + 0x120) == 1)) | 0x100;
    in_stack_00000080 = in_stack_000001a0;
    unaff_R14 = in_stack_00000008;
    uStack0000000000000060 = uVar16;
    goto code_r0x09cba685;
  }
  if (*(long *)(lVar13 + 0xe8) != _DAT_0f6e52b0) {
LAB_09cba289:
    *(undefined8 *)(lVar13 + 0x108) = 0;
    goto LAB_09cba294;
  }
  if ((*(undefined **)(lVar13 + 0x108) != &DAT_0f6e52b0) || (_DAT_0f6e52d0 != lVar13 + 0xe8)) {
    bVar4 = *(byte *)(lVar13 + 0xf0);
    if ((bVar4 & 1) == 0) {
      uVar24 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar24 = *(ulong *)(lVar13 + 0xf8);
    }
    uVar20 = _DAT_0f6e52c0;
    if ((DAT_0f6e52b8 & 1) == 0) {
      uVar20 = (ulong)(DAT_0f6e52b8 >> 1);
    }
    if (uVar24 == uVar20) {
      if ((bVar4 & 1) == 0) {
        lVar22 = lVar13 + 0xf1;
      }
      else {
        lVar22 = *(long *)(lVar13 + 0x100);
      }
      uVar11 = 0xf6e52b9;
      if ((DAT_0f6e52b8 & 1) != 0) {
        uVar11 = _DAT_0f6e52c8;
      }
      iVar17 = func_0x0eee3000(lVar22,uVar11);
      if (iVar17 == 0) {
        *(undefined **)(lVar13 + 0x108) = &DAT_0f6e52b0;
        _DAT_0f6e52d0 = lVar13 + 0xe8;
        goto LAB_09cba1fc;
      }
    }
    goto LAB_09cba289;
  }
LAB_09cba1fc:
  cVar8 = func_0x09db9c20(in_stack_000001a0,&stack0x00000230,in_stack_00000008);
  if (cVar8 != '\0') goto LAB_09cba294;
  iVar17 = 1;
  puVar9 = in_stack_00000108;
joined_r0x09cba8a8:
  in_stack_00000108 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    LOCK();
    puVar15 = puVar9 + 1;
    uVar24 = *puVar15;
    *puVar15 = *puVar15 - 1;
    UNLOCK();
    if (uVar24 == 0) {
      (**(code **)(*puVar9 + 0x10))(puVar9);
      func_0x0412c2d0(puVar9);
    }
  }
  puVar9 = in_stack_00000018;
  if (in_stack_00000018 != (ulong *)0x0) {
    LOCK();
    puVar15 = in_stack_00000018 + 1;
    uVar24 = *puVar15;
    *puVar15 = *puVar15 - 1;
    UNLOCK();
    if (uVar24 == 0) {
      (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
      func_0x0412c2d0(puVar9);
    }
  }
  if (iVar17 == 2) {
    if (_uStack0000000000000030 != _uStack0000000000000038) {
      if ((_uStack0000000000000120 & 1) == 0) {
        in_stack_00000070 = in_stack_00000130;
        uStack0000000000000060 = uStack0000000000000120;
        uStack0000000000000064 = (undefined2)(_uStack0000000000000120 >> 0x20);
        uStack0000000000000066 = (undefined2)(_uStack0000000000000120 >> 0x30);
        uStack0000000000000068 = uStack0000000000000128;
        uStack000000000000006c = (undefined2)((ulong)_uStack0000000000000128 >> 0x20);
        uStack000000000000006e = (undefined1)((ulong)_uStack0000000000000128 >> 0x30);
        uStack000000000000006f = (undefined1)((ulong)_uStack0000000000000128 >> 0x38);
      }
      else {
        FUN_0412e5e0(&stack0x00000060,in_stack_00000130,_uStack0000000000000128);
      }
      in_stack_00000078 = 0;
      func_0x09e20be0(&stack0x00000080,*(undefined4 *)(unaff_R12 + 0x108));
      func_0x09e20de0(&stack0x000000a0,&stack0x00000030);
      func_0x09e20be0(&stack0x000000c0,*(undefined4 *)(unaff_R12 + 0x118));
      if ((uStack0000000000000138 & 1) == 0) {
        unaff_R13[2] = (long)in_stack_00000148;
        lVar13 = CONCAT44(uStack0000000000000144,uStack0000000000000140);
        *unaff_R13 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
        unaff_R13[1] = lVar13;
      }
      else {
        FUN_0412e5e0(unaff_R13,in_stack_00000148,
                     CONCAT44(uStack0000000000000144,uStack0000000000000140));
      }
      in_stack_000000f8 = 0;
      in_stack_00000010 = (ulong *)0x0;
      in_stack_00000018 = (ulong *)0x0;
      in_stack_00000020 = (ulong *)0x0;
      func_0x09ce36f0(&stack0x00000010,&stack0x00000060,&stack0x00000100,5);
      func_0x09e232e0(in_stack_00000008,&UNK_012e1d50,0x23,&stack0x00000010);
      func_0x048f03a0(&stack0x00000010);
      if ((uStack00000000000000e0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack00000000000000f4,uStack00000000000000f0),
                        CONCAT44(uStack00000000000000e4,uStack00000000000000e0) & 0xfffffffffffffffe
                       );
      }
      if ((in_stack_000000c0 & 1) != 0) {
        func_0x0412a280(in_stack_000000d0,in_stack_000000c0 & 0xfffffffffffffffe);
      }
      if ((bStack00000000000000a0 & 1) != 0) {
        func_0x0412a280(in_stack_000000b0,
                        CONCAT71(uStack00000000000000a1,bStack00000000000000a0) & 0xfffffffffffffffe
                       );
      }
      if ((in_stack_00000080 & 1) != 0) {
        func_0x0412a280(in_stack_00000090,in_stack_00000080 & 0xfffffffffffffffe);
      }
      if ((uStack0000000000000060 & 1) != 0) {
        func_0x0412a280(in_stack_00000070,
                        CONCAT26(uStack0000000000000066,
                                 CONCAT24(uStack0000000000000064,uStack0000000000000060)) &
                        0xfffffffffffffffe);
      }
      iVar17 = 0;
      goto LAB_09cbaaac;
    }
    bVar25 = true;
  }
  else {
LAB_09cbaaac:
    bVar25 = iVar17 == 0;
  }
  if (_uStack0000000000000030 != (ulong *)0x0) {
    _uStack0000000000000038 = _uStack0000000000000030;
    func_0x0412a280(_uStack0000000000000030,(long)in_stack_00000040 - (long)_uStack0000000000000030)
    ;
  }
  if (!bVar25) goto joined_r0x09cbaf7b;
LAB_09cbaad0:
  cVar8 = *(char *)(unaff_R12 + 0x138);
joined_r0x09cbb3bf:
  if (cVar8 == '\x01') {
    if (in_stack_000002f0 == (long *)0x0) {
LAB_09cbab81:
      cVar8 = func_0x0c450a10(&stack0x000002e0);
      if (cVar8 == '\0') goto LAB_09cbabb8;
    }
    else {
      uStack0000000000000060 = 0x1ce4800;
      uStack0000000000000064 = 0;
      uStack0000000000000066 = 0;
      uStack0000000000000068 = 0x13;
      uStack000000000000006c = 0;
      uStack000000000000006e = 0;
      uStack000000000000006f = 0;
      plVar12 = (long *)func_0x0d6c97a0(in_stack_000002f0 + 1,&stack0x00000060);
      if (plVar12 == in_stack_000002f0 + 2) goto LAB_09cbab81;
      if ((ulong)*(uint *)(plVar12 + 0xc) == 0xffffffff) {
        uVar11 = func_0x04931450();
        func_0x041084d6(&DAT_0f5ea4a0);
        func_0x04963c80(&stack0x000001b8);
        func_0x049c2320(&stack0x000002e0);
        if (in_stack_000002b0 == '\x01') {
          func_0x0c44e610(&stack0x00000230);
        }
        func_0x09c70160(&stack0x000001c0);
        func_0x05ab3aa0(&stack0x00000170);
        _Unwind_Resume(uVar11);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      _uStack0000000000000030 = (ulong *)&stack0x00000010;
      lVar13 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar12 + 0xc) * 8))
                         (&stack0x00000030,plVar12 + 7);
      if (lVar13 == 0) goto LAB_09cbab81;
      uStack0000000000000060 = 0x1ce4800;
      uStack0000000000000064 = 0;
      uStack0000000000000066 = 0;
      uStack0000000000000068 = 0x13;
      uStack000000000000006c = 0;
      uStack000000000000006e = 0;
      uStack000000000000006f = 0;
      plVar12 = (long *)func_0x0d6c97a0(in_stack_000002f0 + 1,&stack0x00000060);
      if (((plVar12 == in_stack_000002f0 + 2) || ((int)plVar12[0xc] != 1)) ||
         ((char)plVar12[8] == '\0')) goto LAB_09cbab81;
    }
    plVar12 = (long *)(**(code **)(*in_stack_000003a0 + 0x38))();
    plVar12 = (long *)(**(code **)(*plVar12 + 0x270))(plVar12);
    (**(code **)(*plVar12 + 0x478))(plVar12);
  }
LAB_09cbabb8:
  if ((_uStack0000000000000120 & 1) == 0) {
    in_stack_00000200 = uStack0000000000000120;
    in_stack_00000204 = uStack0000000000000124;
    in_stack_00000210 = in_stack_00000130;
  }
  else {
    FUN_0412e5e0(&stack0x00000200,in_stack_00000130,_uStack0000000000000128);
  }
  func_0x048f0410(in_stack_00000008,&UNK_01330749,&stack0x00000200);
  if ((in_stack_00000200 & 1) != 0) {
    func_0x0412a280(in_stack_00000210,
                    CONCAT44(in_stack_00000204,in_stack_00000200) & 0xfffffffffffffffe);
  }
  func_0x048f35b0(in_stack_00000008,&UNK_0123ef74,*(undefined4 *)(unaff_R12 + 0x108));
  func_0x048f35b0(in_stack_00000008,&UNK_011d1a34,*(undefined4 *)(unaff_R12 + 0x118));
  psVar21 = (short *)(in_stack_00000248 + 0x128);
  if (in_stack_00000250 == 0x7fff) {
    psVar21 = (short *)&stack0x00000250;
  }
  if (in_stack_00000248 == 0) {
    psVar21 = (short *)&stack0x00000250;
  }
  func_0x048f35b0(in_stack_00000008,&UNK_01248199,(int)*psVar21);
  if ((uStack0000000000000138 & 1) == 0) {
    in_stack_000001f0 = in_stack_00000148;
    uStack00000000000001e0 = uStack0000000000000138;
    uStack00000000000001e4 = uStack000000000000013c;
    uStack00000000000001e8 = uStack0000000000000140;
    uStack00000000000001ec = uStack0000000000000144;
  }
  else {
    FUN_0412e5e0(&stack0x000001e0,in_stack_00000148,
                 CONCAT44(uStack0000000000000144,uStack0000000000000140));
  }
  func_0x048f0410(in_stack_00000008,&UNK_014cceb8,&stack0x000001e0);
  if ((uStack00000000000001e0 & 1) != 0) {
    puVar9 = (ulong *)CONCAT44(uStack00000000000001e4,uStack00000000000001e0);
    puVar15 = in_stack_000001f0;
LAB_09cbad30:
    func_0x0412a280(puVar15,(ulong)puVar9 & 0xfffffffffffffffe);
  }
joined_r0x09cbaf7b:
  if ((_uStack0000000000000120 & 1) != 0) {
    func_0x0412a280(in_stack_00000130,_uStack0000000000000120 & 0xfffffffffffffffe);
  }
  if ((uStack0000000000000138 & 1) != 0) {
    func_0x0412a280(in_stack_00000148,
                    CONCAT44(uStack000000000000013c,uStack0000000000000138) & 0xfffffffffffffffe);
  }
  if (in_stack_000001b8 != (long *)0x0) {
    LOCK();
    *(int *)((long)in_stack_000001b8 + 0xc) = *(int *)((long)in_stack_000001b8 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)in_stack_000001b8 + 0xc) < 1) && (*in_stack_000001b8 == 0)) &&
       (in_stack_000001b8 != (long *)0x0)) {
      func_0x0412a280(in_stack_000001b8,0x10);
    }
  }
  if ((ulong)in_stack_00000370 != 0xffffffff) {
    (**(code **)(&UNK_0f1e08d8 + (ulong)in_stack_00000370 * 8))(&stack0x00000060,&stack0x00000360);
  }
  if (in_stack_00000358 != (long *)0x0) {
    (**(code **)(*in_stack_00000358 + 8))();
  }
  if (in_stack_00000330 != 0) {
    func_0x0412a280(in_stack_00000330,in_stack_00000340 - in_stack_00000330);
  }
  if (in_stack_00000310 != 0) {
    func_0x0412a280(in_stack_00000310,in_stack_00000320 - in_stack_00000310);
  }
  if (in_stack_000002f0 != (long *)0x0) {
    (**(code **)(*in_stack_000002f0 + 8))();
  }
  if (in_stack_000002e8 != (long *)0x0) {
    LOCK();
    *(int *)((long)in_stack_000002e8 + 0xc) = *(int *)((long)in_stack_000002e8 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)in_stack_000002e8 + 0xc) < 1) && (*in_stack_000002e8 == 0)) &&
       (in_stack_000002e8 != (long *)0x0)) {
      func_0x0412a280(in_stack_000002e8,0x10);
    }
  }
  if (in_stack_000002b0 == '\x01') {
    if (in_stack_000002a8 != (long *)0x0) {
      (**(code **)(*in_stack_000002a8 + 8))();
    }
    if (in_stack_00000280 != 0) {
      func_0x0412a280(in_stack_00000280,in_stack_00000290 - in_stack_00000280);
    }
    if (in_stack_00000260 != 0) {
      func_0x0412a280(in_stack_00000260,in_stack_00000270 - in_stack_00000260);
    }
    if (in_stack_00000240 != (long *)0x0) {
      (**(code **)(*in_stack_00000240 + 8))();
    }
    if (in_stack_00000238 != (long *)0x0) {
      LOCK();
      *(int *)((long)in_stack_00000238 + 0xc) = *(int *)((long)in_stack_00000238 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)in_stack_00000238 + 0xc) < 1) && (*in_stack_00000238 == 0)) &&
         (in_stack_00000238 != (long *)0x0)) {
        func_0x0412a280(in_stack_00000238,0x10);
      }
    }
  }
  plVar12 = in_stack_000001c0;
  if (in_stack_000001c0 != (long *)0x0) {
    plVar18 = (long *)*in_stack_000001c0;
    *in_stack_000001c0 = 0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    func_0x0412a280(plVar12,8);
  }
  puVar9 = in_stack_00000178;
  if (in_stack_00000178 != (ulong *)0x0) {
    LOCK();
    puVar15 = in_stack_00000178 + 1;
    uVar24 = *puVar15;
    *puVar15 = *puVar15 - 1;
    UNLOCK();
    if (uVar24 == 0) {
      (**(code **)(*in_stack_00000178 + 0x10))(in_stack_00000178);
      func_0x0412c2d0(puVar9);
    }
  }
  return;
}


```
