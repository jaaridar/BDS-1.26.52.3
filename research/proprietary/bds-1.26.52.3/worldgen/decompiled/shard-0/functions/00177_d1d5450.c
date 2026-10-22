/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5450
 * Label: br::worldgen::UniformHeight::vslot2
 * Body:  [[0d1d5450, 0d1d54d4] [0d1d57fc, 0d1d599e] [0d1d5a3e, 0d1d5ade] [0d1d6928, 0d1d6938] [0d1d694d, 0d1d6997]]
 * Ghidra: wg_br__worldgen__UniformHeight__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d5aed) */
/* WARNING: Removing unreachable block (ram,0x0d1d5ae6) */
/* WARNING: Removing unreachable block (ram,0x0d1d66e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * wg_br__worldgen__UniformHeight__vslot2(void)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int in_EAX;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  char cVar16;
  long in_RCX;
  char *pcVar17;
  ulong *unaff_RBX;
  byte bVar18;
  undefined8 unaff_RBP;
  byte *pbVar19;
  long unaff_R12;
  undefined *puVar20;
  byte *unaff_R15;
  bool bVar21;
  undefined *puStack0000000000000008;
  undefined1 in_stack_00000000 [16];
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined1 uStack0000000000000020;
  undefined7 uStack0000000000000021;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  byte in_stack_00000040;
  byte bStack0000000000000050;
  undefined8 in_stack_00000060;
  ulong *in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  ulong in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  byte in_stack_000000e0;
  byte bStack00000000000000f0;
  undefined7 uStack00000000000000f1;
  undefined8 in_stack_00000100;
  ulong in_stack_00000110;
  undefined *in_stack_00000118;
  long lStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 *in_stack_00000130;
  long lStack0000000000000138;
  undefined8 uStack0000000000000140;
  long in_stack_00000148;
  byte in_stack_00000150;
  byte bStack0000000000000158;
  undefined7 uStack0000000000000159;
  ulong in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000178;
  undefined1 uStack0000000000000180;
  undefined4 uStack0000000000000181;
  undefined4 in_stack_00000188;
  undefined8 *in_stack_00000190;
  undefined8 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001a8;
  ulong in_stack_000001b0;
  long *in_stack_000001c0;
  undefined8 *in_stack_000001c8;
  undefined *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  undefined8 in_stack_000005c8;
  
  puVar14 = _uStack0000000000000020;
  uVar11 = in_EAX + 0xc0854800;
  if (uVar11 == 0) {
    in_RCX = func_0x0d227700(&stack0x00000ac0,0xf71d5d8);
    puVar13 = (undefined8 *)(in_RCX + 0x38);
    if (in_RCX == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    if (*(int *)(puVar13 + 3) != 8) goto LAB_0d1d5828;
LAB_0d1d5469:
    uVar3 = *puVar13;
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *puVar14 = &UNK_0f47e0b0;
    *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
    puVar14[1] = puVar14 + 2;
    func_0x0d6bd5f0(puVar14,uVar3);
    plVar4 = (long *)*unaff_RBX;
    *unaff_RBX = (ulong)puVar14;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      goto LAB_0d1d6835;
    }
  }
  else {
    puVar13 = (undefined8 *)((ulong)uVar11 + 0x38);
    if (*(int *)((ulong)uVar11 + 0x50) == 8) goto LAB_0d1d5469;
LAB_0d1d5828:
    lVar15 = func_0x04931450();
    pcVar17 = (char *)(in_RCX + unaff_R12);
    do {
      cVar2 = *pcVar17;
      cVar16 = cVar2 + ' ';
      if (0x19 < (byte)(cVar2 + 0xbfU)) {
        cVar16 = cVar2;
      }
      *pcVar17 = cVar16;
      pcVar17 = pcVar17 + 1;
    } while (pcVar17 != (char *)(unaff_R12 + lVar15));
    func_0x08b72300(&stack0x00000158,&stack0x00000000,&stack0x00000110,&UNK_0143fcb4);
    if ((in_stack_00000110 & 1) != 0) {
      func_0x0412a280(lStack0000000000000120,in_stack_00000110 & 0xfffffffffffffffe);
    }
    if (in_stack_00000000._0_8_ != 0) {
      puStack0000000000000008 = (undefined *)in_stack_00000000._0_8_;
      func_0x0412a280(in_stack_00000000._0_8_,(long)in_stack_00000010 - in_stack_00000000._0_8_);
    }
    _uStack0000000000000070 = (undefined1  [16])0x0;
    lVar15 = in_stack_00000168;
    uVar5 = in_stack_00000160;
    if ((bStack0000000000000158 & 1) == 0) {
      lVar15 = (long)&stack0x00000158 + 1;
      uVar5 = (ulong)(bStack0000000000000158 >> 1);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f7b8fb8), iVar12 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    in_stack_000000a0 = (undefined8 *)lVar15;
    in_stack_000000a8 = (undefined *)uVar5;
    (**(code **)(_DAT_0f7b8f98 + 0x10))
              (&stack0x00000000,&DAT_0f7b8f98,&stack0x000000a0,&stack0x00000070,0x121,0);
    puVar10 = _UNK_0f459c10;
    puVar9 = _DAT_0f459c08;
    uVar8 = _UNK_0f459c00;
    uVar3 = _DAT_0f459bf8;
    puVar13 = (undefined8 *)0xa18c50c1ac79b4c3;
    in_stack_00000150 = in_stack_00000040;
    if (in_stack_00000040 == 0) {
      in_stack_00000118 = puStack0000000000000008;
      lStack0000000000000120 = (long)in_stack_00000010;
      lStack0000000000000120 = (long)in_stack_00000010;
      uStack0000000000000128 = in_stack_00000018;
      in_stack_00000130 = _uStack0000000000000020;
      lStack0000000000000138 = in_stack_00000028;
      uStack0000000000000140 = in_stack_00000030;
      in_stack_00000148 = in_stack_00000038;
      uStack0000000000000020 = 0;
      in_stack_00000110 = in_stack_00000000._0_8_;
      if (in_stack_00000018 < puVar14) {
        in_stack_00000018[2] = _DAT_0f459c08;
        in_stack_00000018[3] = puVar10;
        *in_stack_00000018 = uVar3;
        in_stack_00000018[1] = uVar8;
        *(undefined1 *)(in_stack_00000018 + 4) = 0;
        *(undefined1 *)(in_stack_00000018 + 9) = 0;
        in_stack_000000b8 = in_stack_00000018 + 10;
      }
      else {
        in_stack_000000b8 = (undefined8 *)func_0x0489d2c0(&stack0x00000120,&stack0x00000000);
      }
      in_stack_000000d8 = in_stack_00000148;
      in_stack_000000d0 = uStack0000000000000140;
      in_stack_000000c8 = lStack0000000000000138;
      in_stack_000000c0 = in_stack_00000130;
      in_stack_000000b0 = (undefined8 *)lStack0000000000000120;
      _lStack0000000000000120 = (undefined1  [16])0x0;
      in_stack_00000130 = (undefined8 *)0x0;
      _lStack0000000000000138 = (undefined1  [16])0x0;
      in_stack_00000148 = 0;
      in_stack_000000e0 = 0;
      bVar18 = 0;
      in_stack_00000010 = puVar9;
      in_stack_00000018 = puVar10;
      in_stack_000000a0 = (undefined8 *)in_stack_00000110;
      in_stack_000000a8 = in_stack_00000118;
    }
    else {
      uStack0000000000000180 = 0;
      uStack0000000000000181 = 0;
      in_stack_00000188 = 0;
      in_stack_00000190 = (undefined8 *)0x0;
      func_0x0ee76a70(&stack0x00000000,uStack0000000000000070,&stack0x00000180,0x18);
      if (in_stack_00000040 == 0) {
        if (in_stack_00000028 != 0) {
          while (in_stack_00000028 != in_stack_00000030) {
            in_stack_00000030 = in_stack_00000030 + -0x40;
            func_0x048b3e80(in_stack_00000030);
          }
          in_stack_00000030 = in_stack_00000028;
          func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
        }
        if (in_stack_00000010 != (undefined8 *)0x0) {
          for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -10
              ) {
            if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
               ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
              func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
            }
          }
          in_stack_00000018 = in_stack_00000010;
          func_0x0412a280(in_stack_00000010,(long)_uStack0000000000000020 - (long)in_stack_00000010)
          ;
        }
      }
      in_stack_00000178 = 0;
      uVar3 = uStack0000000000000070;
      lVar15 = *(long *)(uStack0000000000000070 + 0x18);
      if (lVar15 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = (undefined *)(lVar15 + 8);
        func_0x0412d770(puVar20);
      }
      (**(code **)(*(long *)uVar3 + 0x80))(&stack0x00000000,uVar3,&stack0x00000178);
      if (lVar15 != 0) {
        func_0x0412d790(puVar20);
      }
      in_stack_000000a0 = (undefined8 *)0xa18c50c1ac79b4c3;
      in_stack_000000a8 = &UNK_0140f690;
      in_stack_000000b0 = (undefined8 *)0x1;
      in_stack_000000b8 = (undefined8 *)CONCAT44(in_stack_000000b8._4_4_,0x1f8);
      if (in_stack_00000040 == 0) {
        _bStack0000000000000050 = (undefined1  [16])0x0;
        in_stack_00000060 = 0;
        func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
        if ((bStack0000000000000050 & 1) != 0) {
          func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
        }
      }
      if ((in_stack_00000040 & 1) == 0) {
        if (in_stack_00000028 != 0) {
          while (in_stack_00000028 != in_stack_00000030) {
            in_stack_00000030 = in_stack_00000030 + -0x40;
            func_0x048b3e80(in_stack_00000030);
          }
          in_stack_00000030 = in_stack_00000028;
          func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
        }
        if (in_stack_00000010 != (undefined8 *)0x0) {
          for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -10
              ) {
            if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
               ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
              func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
            }
          }
          in_stack_00000018 = in_stack_00000010;
          func_0x0412a280(in_stack_00000010,(long)_uStack0000000000000020 - (long)in_stack_00000010)
          ;
        }
      }
      puVar13 = in_stack_00000190;
      if ((long)in_stack_00000190 - 1U < in_stack_00000178) {
        if (in_stack_00000190 < (undefined8 *)0xfffffffffffffff8) {
          if (in_stack_00000190 < (undefined8 *)0x17) {
            in_stack_00000088 = CONCAT71(in_stack_00000088._1_7_,(char)in_stack_00000190 * '\x02');
            puVar14 = (undefined8 *)((long)&stack0x00000088 + 1);
          }
          else {
            in_stack_00000000._0_8_ = 0x1a;
            if (((ulong)in_stack_00000190 | 7) != 0x17) {
              in_stack_00000000._0_8_ = ((ulong)in_stack_00000190 | 7) + 1;
            }
            puVar14 = (undefined8 *)
                      (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,in_stack_00000000._0_8_);
            if (puVar14 == (undefined8 *)0x0) {
              func_0x0eec74c0(in_stack_00000000._0_8_,0);
            }
            in_stack_00000088 = in_stack_00000000._0_8_ | 1;
            in_stack_00000090 = puVar13;
            in_stack_00000098 = puVar14;
          }
          func_0x0eee2dd0(puVar14,0,puVar13);
          *(undefined1 *)((long)puVar14 + (long)puVar13) = 0;
          puVar14 = (undefined8 *)((long)&stack0x00000088 + 1);
          if ((in_stack_00000088 & 1) != 0) {
            puVar14 = in_stack_00000098;
          }
          func_0x0ee76a70(&stack0x00000000,uStack0000000000000070,puVar14,puVar13);
          puVar20 = &UNK_0140f690;
          puVar13 = (undefined8 *)0xa18c50c1ac79b4c3;
          in_stack_000000a0 = (undefined8 *)0xa18c50c1ac79b4c3;
          in_stack_000000a8 = &UNK_0140f690;
          in_stack_000000b0 = (undefined8 *)0x1;
          in_stack_000000b8 = (undefined8 *)CONCAT44(in_stack_000000b8._4_4_,0x1fd);
          if (in_stack_00000040 == 0) {
            _bStack0000000000000050 = (undefined1  [16])0x0;
            in_stack_00000060 = 0;
            func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
            if ((bStack0000000000000050 & 1) != 0) {
              func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
            }
          }
          if ((in_stack_00000040 & 1) == 0) {
            if (in_stack_00000028 != 0) {
              while (in_stack_00000028 != in_stack_00000030) {
                in_stack_00000030 = in_stack_00000030 + -0x40;
                func_0x048b3e80(in_stack_00000030);
              }
              in_stack_00000030 = in_stack_00000028;
              func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
            }
            if (in_stack_00000010 != (undefined8 *)0x0) {
              for (; in_stack_00000010 != in_stack_00000018;
                  in_stack_00000018 = in_stack_00000018 + -10) {
                if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
                   ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
                  func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
                }
              }
              in_stack_00000018 = in_stack_00000010;
              func_0x0412a280(in_stack_00000010,
                              (long)_uStack0000000000000020 - (long)in_stack_00000010);
            }
          }
          func_0x0ee56810(&stack0x00000000,&stack0x00000070);
          in_stack_000000a0 = (undefined8 *)0xa18c50c1ac79b4c3;
          in_stack_000000a8 = &UNK_0140f690;
          in_stack_000000b0 = (undefined8 *)0x1;
          in_stack_000000b8 = (undefined8 *)CONCAT44(in_stack_000000b8._4_4_,0x1fe);
          if (in_stack_00000040 == 0) {
            _bStack0000000000000050 = (undefined1  [16])0x0;
            in_stack_00000060 = 0;
            func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
            if ((bStack0000000000000050 & 1) != 0) {
              func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
            }
          }
          if ((in_stack_00000040 & 1) == 0) {
            if (in_stack_00000028 != 0) {
              while (in_stack_00000028 != in_stack_00000030) {
                in_stack_00000030 = in_stack_00000030 + -0x40;
                func_0x048b3e80(in_stack_00000030);
              }
              in_stack_00000030 = in_stack_00000028;
              func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
            }
            if (in_stack_00000010 != (undefined8 *)0x0) {
              for (; in_stack_00000010 != in_stack_00000018;
                  in_stack_00000018 = in_stack_00000018 + -10) {
                if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
                   ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
                  func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
                }
              }
              in_stack_00000018 = in_stack_00000010;
              func_0x0412a280(in_stack_00000010,
                              (long)_uStack0000000000000020 - (long)in_stack_00000010);
            }
          }
          if (DAT_0f7b8fb8 == '\0') goto LAB_0d1d699d;
        }
        else {
          func_0x04882e30();
LAB_0d1d699d:
          iVar12 = func_0x04108328(&DAT_0f7b8fb8);
          if (iVar12 != 0) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
            puVar13 = (undefined8 *)0xa18c50c1ac79b4c3;
            puVar20 = &UNK_0140f690;
          }
        }
        in_stack_000001b0 = (ulong)(bStack0000000000000158 >> 1);
        in_stack_000001a8 = (long)&stack0x00000158 + 1;
        if ((bStack0000000000000158 & 1) != 0) {
          in_stack_000001b0 = in_stack_00000160;
          in_stack_000001a8 = in_stack_00000168;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x20))(&stack0x00000000,&DAT_0f7b8f98,&stack0x000001a8);
        in_stack_000000b0 = (undefined8 *)0x1;
        in_stack_000000b8 = (undefined8 *)CONCAT44(in_stack_000000b8._4_4_,0x201);
        in_stack_000000a0 = puVar13;
        in_stack_000000a8 = puVar20;
        if (in_stack_00000040 == 0) {
          _bStack0000000000000050 = (undefined1  [16])0x0;
          in_stack_00000060 = 0;
          func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
          if ((bStack0000000000000050 & 1) != 0) {
            func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
          }
        }
        if ((in_stack_00000040 & 1) == 0) {
          if (in_stack_00000028 != 0) {
            while (in_stack_00000028 != in_stack_00000030) {
              in_stack_00000030 = in_stack_00000030 + -0x40;
              func_0x048b3e80(in_stack_00000030);
            }
            in_stack_00000030 = in_stack_00000028;
            func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
          }
          if (in_stack_00000010 != (undefined8 *)0x0) {
            for (; in_stack_00000010 != in_stack_00000018;
                in_stack_00000018 = in_stack_00000018 + -10) {
              if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
                 ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
                func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
              }
            }
            in_stack_00000018 = in_stack_00000010;
            func_0x0412a280(in_stack_00000010,
                            (long)_uStack0000000000000020 - (long)in_stack_00000010);
          }
        }
        if ((DAT_0f7b8fb8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f7b8fb8), iVar12 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
          puVar13 = (undefined8 *)0xa18c50c1ac79b4c3;
          puVar20 = &UNK_0140f690;
        }
        in_stack_00000198 = &stack0x000001c8;
        in_stack_000001a0 = in_stack_000005c8;
        (**(code **)(_DAT_0f7b8f98 + 0x90))(&stack0x00000000,&DAT_0f7b8f98,&stack0x00000198);
        in_stack_000000b0 = (undefined8 *)0x1;
        in_stack_000000b8 = (undefined8 *)CONCAT44(in_stack_000000b8._4_4_,0x202);
        in_stack_000000a0 = puVar13;
        in_stack_000000a8 = puVar20;
        if (in_stack_00000040 == 0) {
          _bStack0000000000000050 = (undefined1  [16])0x0;
          in_stack_00000060 = 0;
          func_0x0eedeb80(2,0x2d,&stack0x00000000,&stack0x00000050,&stack0x000000a0);
          if ((bStack0000000000000050 & 1) != 0) {
            func_0x0412a280(in_stack_00000060,_bStack0000000000000050 & 0xfffffffffffffffe);
          }
        }
        if ((in_stack_00000040 & 1) == 0) {
          if (in_stack_00000028 != 0) {
            while (in_stack_00000028 != in_stack_00000030) {
              in_stack_00000030 = in_stack_00000030 + -0x40;
              func_0x048b3e80(in_stack_00000030);
            }
            in_stack_00000030 = in_stack_00000028;
            func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
          }
          if (in_stack_00000010 != (undefined8 *)0x0) {
            for (; in_stack_00000010 != in_stack_00000018;
                in_stack_00000018 = in_stack_00000018 + -10) {
              if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
                 ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
                func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
              }
            }
            func_0x0412a280(in_stack_00000010,
                            (long)_uStack0000000000000020 - (long)in_stack_00000010);
          }
        }
        in_stack_00000018 = (undefined8 *)(in_stack_00000088 >> 1 & 0x7f);
        in_stack_00000010 = (undefined8 *)((long)&stack0x00000088 + 1);
        if ((in_stack_00000088 & 1) != 0) {
          in_stack_00000018 = in_stack_00000090;
          in_stack_00000010 = in_stack_00000098;
        }
        func_0x0d6c71b0(&stack0x00000050,&stack0x00000000);
        in_stack_000000e0 = 1;
        in_stack_000000a0 = (undefined8 *)_bStack0000000000000050;
        if ((in_stack_00000088 & 1) != 0) {
          func_0x0412a280(in_stack_00000098,in_stack_00000088 & 0xfffffffffffffffe);
        }
      }
      else {
        in_stack_000000e0 = 1;
        in_stack_000000a0 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0xa18c50c1ac79b4c3;
      }
      bVar18 = 1;
    }
    if (in_stack_00000150 == 0) {
      uVar3 = lStack0000000000000138;
      if (lStack0000000000000138 != 0) {
        lVar15 = uStack0000000000000140;
        while (uVar3 != lVar15) {
          lVar15 = lVar15 + -0x40;
          func_0x048b3e80(lVar15);
        }
        uStack0000000000000140 = uVar3;
        func_0x0412a280(lStack0000000000000138,in_stack_00000148 - lStack0000000000000138);
      }
      uVar3 = lStack0000000000000120;
      if (lStack0000000000000120 != 0) {
        for (lVar15 = uStack0000000000000128; uVar3 != lVar15; lVar15 = lVar15 + -0x50) {
          if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar15 + -0x20),
                            *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack0000000000000128 = uVar3;
        func_0x0412a280(lStack0000000000000120,(long)in_stack_00000130 - lStack0000000000000120);
      }
    }
    if ((uStack0000000000000070 != 0) &&
       (func_0x0ee56810(&stack0x00000000,&stack0x00000070), in_stack_00000040 == 0)) {
      if (in_stack_00000028 != 0) {
        while (in_stack_00000028 != in_stack_00000030) {
          in_stack_00000030 = in_stack_00000030 + -0x40;
          func_0x048b3e80(in_stack_00000030);
        }
        func_0x0412a280(in_stack_00000028,in_stack_00000038 - in_stack_00000028);
      }
      if (in_stack_00000010 != (undefined8 *)0x0) {
        for (; in_stack_00000010 != in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -10)
        {
          if ((*(char *)(in_stack_00000018 + -1) == '\x01') &&
             ((*(byte *)(in_stack_00000018 + -6) & 1) != 0)) {
            func_0x0412a280(in_stack_00000018[-4],in_stack_00000018[-6] & 0xfffffffffffffffe);
          }
        }
        func_0x0412a280(in_stack_00000010,
                        CONCAT71(uStack0000000000000021,uStack0000000000000020) -
                        (long)in_stack_00000010);
      }
    }
    uVar3 = uStack0000000000000078;
    uStack0000000000000078 = 0;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uVar3 = uStack0000000000000070;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uStack0000000000000078;
    _uStack0000000000000070 = auVar6 << 0x40;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((bStack0000000000000158 & 1) != 0) {
      func_0x0412a280(in_stack_00000168,
                      CONCAT71(uStack0000000000000159,bStack0000000000000158) & 0xfffffffffffffffe);
    }
    in_stack_000001d0 = &UNK_0140f690;
    in_stack_000001d8 = 1;
    in_stack_000001e0 = 0x20a;
    in_stack_000001c8 = puVar13;
    if (bVar18 == 0) {
      func_0x0eedeb80(2,0x2d,&stack0x000000a0,&stack0x00000000,&stack0x000001c8);
      bVar18 = in_stack_000000e0;
    }
    unaff_RBP = in_stack_00000170;
    lVar15 = in_stack_000000c8;
    if ((bVar18 & 1) == 0) {
      lVar7 = in_stack_000000d0;
      if (in_stack_000000c8 != 0) {
        while (lVar15 != lVar7) {
          func_0x048b3e80(lVar7 + -0x40);
          lVar7 = lVar7 + -0x40;
        }
        in_stack_000000d0 = lVar15;
        func_0x0412a280(in_stack_000000c8,in_stack_000000d8 - in_stack_000000c8);
      }
      puVar13 = in_stack_000000b0;
      puVar14 = in_stack_000000b8;
      if (in_stack_000000b0 != (undefined8 *)0x0) {
        for (; puVar13 != puVar14; puVar14 = puVar14 + -10) {
          if ((*(char *)(puVar14 + -1) == '\x01') && ((*(byte *)(puVar14 + -6) & 1) != 0)) {
            func_0x0412a280(puVar14[-4],puVar14[-6] & 0xfffffffffffffffe);
          }
        }
        in_stack_000000b8 = puVar13;
        func_0x0412a280(in_stack_000000b0,(long)in_stack_000000c0 - (long)in_stack_000000b0);
      }
      plVar4 = (long *)*in_stack_00000068;
      *in_stack_00000068 = 0;
      unaff_RBX = in_stack_00000068;
    }
    else {
      plVar4 = (long *)*in_stack_00000068;
      *in_stack_00000068 = (ulong)in_stack_000000a0;
      unaff_RBX = in_stack_00000068;
    }
    in_stack_00000068 = unaff_RBX;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if ((bStack00000000000000f0 & 1) != 0) {
      func_0x0412a280(in_stack_00000100,
                      CONCAT71(uStack00000000000000f1,bStack00000000000000f0) & 0xfffffffffffffffe);
    }
LAB_0d1d6835:
    puVar14 = (undefined8 *)*unaff_RBX;
    if (puVar14 == (undefined8 *)0x0) goto LAB_0d1d68c9;
  }
  bVar21 = (*unaff_R15 & 1) != 0;
  pbVar19 = unaff_R15 + 1;
  if (bVar21) {
    pbVar19 = *(byte **)(unaff_R15 + 0x10);
  }
  in_stack_00000000._0_8_ = (ulong)(*unaff_R15 >> 1);
  if (bVar21) {
    in_stack_00000000._0_8_ = *(ulong *)(unaff_R15 + 8);
  }
  func_0x0d1d3090(&stack0x000001c8,pbVar19,in_stack_00000000._0_8_);
  func_0x0d21ed30(&stack0x000001b8,unaff_RBP,&stack0x000001c8,puVar14,8);
  plVar4 = in_stack_000001c0;
  if (in_stack_000001c0 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000001c0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*in_stack_000001c0 + 0x10))(in_stack_000001c0);
      func_0x0412c2d0(plVar4);
    }
  }
  if (((ulong)in_stack_000001c8 & 1) != 0) {
    func_0x0412a280(in_stack_000001d8,(ulong)in_stack_000001c8 & 0xfffffffffffffffe);
  }
LAB_0d1d68c9:
  func_0x0d20be50(&stack0x000005d0);
  return unaff_RBX;
}


