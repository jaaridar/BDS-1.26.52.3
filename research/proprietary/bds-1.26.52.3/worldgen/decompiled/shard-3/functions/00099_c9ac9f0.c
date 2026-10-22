/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9ac9f0
 * Label: string:minecraft:overworld
 * Body:  [[0c9abadf, 0c9abaf0] [0c9abb82, 0c9ac9ee] [0c9ac9f0, 0c9ad344] [0c9ad350, 0c9ad794] [0c9ad7a0, 0c9ae078] [0c9ae147, 0c9ae158] [0c9ae291, 0c9ae2d8] [0c9ae375, 0c9ae39d] [0c9ae3f1, 0c9ae411] [0c9ae43d, 0c9ae4ce]]
 * Ghidra: FUN_0c9ac9f0
 */


/* WARNING: Removing unreachable block (ram,0x0c9ac63e) */
/* WARNING: Removing unreachable block (ram,0x0c9ac51d) */
/* WARNING: Removing unreachable block (ram,0x0c9ac52f) */
/* WARNING: Removing unreachable block (ram,0x0c9ac540) */
/* WARNING: Removing unreachable block (ram,0x0c9ac56d) */
/* WARNING: Removing unreachable block (ram,0x0c9ac583) */
/* WARNING: Removing unreachable block (ram,0x0c9ac619) */
/* WARNING: Removing unreachable block (ram,0x0c9ac62b) */
/* WARNING: Removing unreachable block (ram,0x0c9ac69e) */
/* WARNING: Removing unreachable block (ram,0x0c9ac6b0) */
/* WARNING: Removing unreachable block (ram,0x0c9ac7f0) */
/* WARNING: Removing unreachable block (ram,0x0c9ac802) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9ac9f0(void)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_RBX;
  long *plVar12;
  long lVar13;
  long *unaff_RBP;
  char *pcVar14;
  undefined4 uVar15;
  long *plVar16;
  long *unaff_R12;
  long *unaff_R13;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  bool bVar20;
  char cStack0000000000000008;
  undefined7 uStack0000000000000009;
  byte bStack0000000000000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  undefined4 in_stack_00000028;
  byte bStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  long *in_stack_00000040;
  long in_stack_00000048;
  long *in_stack_00000050;
  char cStack0000000000000058;
  undefined7 uStack0000000000000059;
  byte *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  byte in_stack_00000090;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  byte bStack00000000000000d0;
  undefined4 uStack00000000000000d1;
  undefined2 uStack00000000000000d5;
  undefined1 uStack00000000000000d7;
  undefined2 uStack00000000000000d8;
  undefined4 uStack00000000000000da;
  undefined2 uStack00000000000000de;
  long *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 in_stack_00000108;
  byte bStack0000000000000110;
  undefined2 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  long *in_stack_00000120;
  long *in_stack_00000128;
  long *in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  long *in_stack_00000160;
  long *in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  undefined8 *in_stack_00000180;
  char cStack0000000000000188;
  undefined7 uStack0000000000000189;
  byte *in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined2 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined8 in_stack_000001d0;
  long *in_stack_000001d8;
  long *in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  long in_stack_00000208;
  long *in_stack_00000218;
  long *in_stack_000002d0;
  long *in_stack_000002d8;
  long *in_stack_000002e0;
  byte in_stack_00000310;
  byte in_stack_00000740;
  long *in_stack_00000b00;
  char in_stack_00000b48;
  long *in_stack_00000f08;
  
  bVar20 = (int)unaff_RBX == 0;
code_r0x0c9ac9f2:
  if (bVar20) {
    in_stack_00000060 = (byte *)0x0;
  }
  else {
    LOCK();
    plVar19 = unaff_RBX + 1;
    lVar13 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
      func_0x0412c2d0(unaff_RBX);
    }
    plVar19 = _cStack0000000000000058;
    in_stack_00000060 = (byte *)0x0;
    if (_cStack0000000000000058 != (long *)0x0) {
      LOCK();
      plVar9 = _cStack0000000000000058 + 1;
      lVar13 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*_cStack0000000000000058 + 0x10))(_cStack0000000000000058);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  plVar19 = in_stack_00000198;
  in_stack_00000190 = (byte *)0x0;
  in_stack_00000198 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar9 = plVar19 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    plVar19 = in_stack_00000198;
    in_stack_000001a0 = (long *)0x0;
    if (in_stack_00000198 != (long *)0x0) {
      LOCK();
      plVar9 = in_stack_00000198 + 1;
      lVar13 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*in_stack_00000198 + 0x10))(in_stack_00000198);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  if (cStack0000000000000188 == '\x01') {
    func_0x0eee02f0(in_stack_00000180);
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  plVar19 = (long *)0xf5522b8;
  func_0x0412d610(0xf5522b8);
  plVar9 = _DAT_0f5523a0;
  pbVar1 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0c9ae059:
    uVar10 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x0ee3cd80(&stack0x000000d0);
    plVar19 = in_stack_00000168;
    in_stack_00000168 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
    plVar19 = in_stack_00000170;
    in_stack_00000170 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
    if (((ulong)in_stack_000000b8 & 1) != 0) {
      func_0x0412a280(in_stack_000000c8,(ulong)in_stack_000000b8 & 0xfffffffffffffffe);
    }
    func_0x0ee3cd80(&stack0x00000180);
    do {
      while ((_bStack0000000000000030 & 1) != 0) {
        func_0x0412a280(in_stack_00000040,
                        CONCAT44(uStack0000000000000034,_bStack0000000000000030) &
                        0xfffffffffffffffe);
        func_0x0c978530(in_stack_00000218);
        uVar10 = func_0x0eee2d70(uVar10);
      }
      func_0x0c978530(in_stack_00000218);
      func_0x0eee2d70(uVar10);
      func_0x0412a280(in_stack_000002e0,(ulong)in_stack_000002d0 & 0xfffffffffffffffe);
      if ((bStack00000000000000d0 & 1) != 0) {
        func_0x0412a280(in_stack_000000e0,
                        CONCAT17(uStack00000000000000d7,
                                 CONCAT25(uStack00000000000000d5,
                                          CONCAT41(uStack00000000000000d1,bStack00000000000000d0)))
                        & 0xfffffffffffffffe);
      }
    } while( true );
  }
  bVar4 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar4 = *pbVar1;
  }
  plVar12 = _DAT_0f5523a8;
  in_stack_00000180 = (undefined8 *)0xf5522b8;
  _cStack0000000000000188 = (long *)CONCAT71(uStack0000000000000189,1);
  in_stack_00000190 = pbVar1;
  in_stack_00000198 = plVar9;
  in_stack_000001a0 = _DAT_0f5523a8;
  if (((bVar4 & 1) == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
  plVar12 = (long *)(ulong)uVar7;
  in_stack_00000190 = (byte *)0x0;
  in_stack_00000198 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar16 = plVar9 + 1;
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
    plVar9 = in_stack_00000198;
    in_stack_000001a0 = (long *)0x0;
    if (in_stack_00000198 != (long *)0x0) {
      LOCK();
      plVar16 = in_stack_00000198 + 1;
      lVar13 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*in_stack_00000198 + 0x10))(in_stack_00000198);
        func_0x0412c2d0(plVar9);
      }
    }
  }
  if (cStack0000000000000188 == '\x01') {
    func_0x0eee02f0(in_stack_00000180);
  }
  bVar20 = (_bStack0000000000000030 & 1) != 0;
  if (bVar20) {
    unaff_RBP = in_stack_00000040;
  }
  plVar9 = (long *)(ulong)(bStack0000000000000030 >> 1);
  if (bVar20) {
    plVar9 = (long *)CONCAT44(uStack000000000000003c,uStack0000000000000038);
  }
  cVar5 = (char)in_stack_00000f08;
  if ((long *)0xfffffffffffffff7 < plVar9) goto LAB_0c9adf5c;
  unaff_R12 = (long *)((long)&stack0x00000180 + 1);
  if (plVar9 < (long *)0x17) {
    in_stack_00000180 = (undefined8 *)CONCAT71(in_stack_00000180._1_7_,(char)plVar9 * '\x02');
    plVar19 = unaff_R12;
    if (plVar9 != (long *)0x0) goto LAB_0c9accee;
  }
  else {
    in_stack_00000160 = (long *)CONCAT71(in_stack_00000160._1_7_,(char)uVar7);
    uVar18 = 0x1a;
    if (((ulong)plVar9 | 7) != 0x17) {
      uVar18 = ((ulong)plVar9 | 7) + 1;
    }
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(uVar18,0);
    }
    in_stack_00000180 = (undefined8 *)(uVar18 | 1);
    unaff_R13 = (long *)((ulong)unaff_R13 & 0xffffffff);
    plVar12 = (long *)((ulong)in_stack_00000160 & 0xff);
    _cStack0000000000000188 = plVar9;
    in_stack_00000190 = (byte *)plVar19;
LAB_0c9accee:
    func_0x0eee2ee0(plVar19,unaff_RBP,plVar9);
  }
  *(char *)((long)plVar19 + (long)plVar9) = '\0';
  in_stack_00000018 = (long *)((ulong)in_stack_00000180 >> 1 & 0x7f);
  if (((ulong)in_stack_00000180 & 1) != 0) {
    in_stack_00000018 = _cStack0000000000000188;
    unaff_R12 = (long *)in_stack_00000190;
  }
  _bStack0000000000000010 = unaff_R12;
  uVar7 = func_0x0ee3d1a0(&stack0x00000010,&stack0x00000270,in_stack_00000208,(ulong)plVar12 & 0xff,
                          &stack0x000002d0);
  unaff_RBP = (long *)(ulong)uVar7;
  plVar16 = in_stack_000002d0;
  if (cStack0000000000000008 != '\0') {
    plVar12 = in_stack_00000f08;
    if ((long *)0xfffffffffffffff7 < in_stack_00000f08) goto LAB_0c9adf61;
    if (in_stack_00000f08 < (long *)0x17) {
      in_stack_00000050 = (long *)CONCAT71(in_stack_00000050._1_7_,cVar5 * '\x02');
      plVar9 = (long *)((long)&stack0x00000050 + 1);
      if (in_stack_00000f08 != (long *)0x0) goto LAB_0c9ace04;
    }
    else {
      uVar18 = 0x1a;
      if (((ulong)in_stack_00000f08 | 7) != 0x17) {
        uVar18 = ((ulong)in_stack_00000f08 | 7) + 1;
      }
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (plVar9 == (long *)0x0) {
        func_0x0eec74c0(uVar18,0);
      }
      plVar19 = (long *)(uVar18 | 1);
      in_stack_00000050 = plVar19;
      _cStack0000000000000058 = in_stack_00000f08;
      in_stack_00000060 = (byte *)plVar9;
LAB_0c9ace04:
      func_0x0eee2f00(plVar9,&stack0x00000b08,in_stack_00000f08);
    }
    *(char *)((long)plVar9 + (long)in_stack_00000f08) = '\0';
    func_0x0c97a850(&stack0x00000050);
    if (((ulong)in_stack_00000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,(ulong)in_stack_00000050 & 0xfffffffffffffffe);
    }
  }
  if ((char)unaff_R13 == '\0') goto LAB_0c9acefc;
  plVar12 = in_stack_00000b00;
  if ((long *)0xfffffffffffffff7 < in_stack_00000b00) {
    do {
      func_0x04882e30();
LAB_0c9adf6b:
      func_0x04882e30();
LAB_0c9adf70:
      iVar8 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar8 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      while( true ) {
        (**(code **)(_DAT_0f7b8f98 + 0x60))(&stack0x000002d0,&DAT_0f7b8f98,&stack0x00000290);
        bStack00000000000000d0 = 0xa9;
        uStack00000000000000d1 = 0xa723cb56;
        uStack00000000000000d5 = 0x11f0;
        uStack00000000000000d7 = 0x4e;
        uStack00000000000000d8 = 0xf690;
        uStack00000000000000da = 0x140;
        uStack00000000000000de = 0;
        in_stack_000000e0 = (long *)0x1;
        in_stack_000000e8 = (undefined8 *)CONCAT44(in_stack_000000e8._4_4_,0x37e);
        if (in_stack_00000310 == 0) {
          in_stack_00000050 = (long *)0x0;
          _cStack0000000000000058 = (long *)0x0;
          in_stack_00000060 = (byte *)0x0;
          func_0x0eedeb80(2,0x2d,&stack0x000002d0,&stack0x00000050,&stack0x000000d0);
          if (((ulong)in_stack_00000050 & 1) != 0) {
            func_0x0412a280(in_stack_00000060,(ulong)in_stack_00000050 & 0xfffffffffffffffe);
          }
        }
        if ((in_stack_00000310 & 1) == 0) {
          _bStack0000000000000010 = (long *)((ulong)_bStack0000000000000010 & 0xffffffffffff0000);
          bVar4 = 0;
          in_stack_000002d0 = plVar16;
        }
        else {
          bStack0000000000000010 = (byte)plVar16;
          bVar4 = bStack0000000000000010;
          _bStack0000000000000010 = plVar16;
          in_stack_00000018 = in_stack_000002d8;
          in_stack_00000020 = in_stack_000002e0;
          in_stack_000002d0 = (long *)0x0;
          in_stack_000002e0 = (long *)0x0;
        }
        bVar20 = (bVar4 & 1) != 0;
        plVar16 = (long *)((long)&stack0x00000010 + 1);
        if (bVar20) {
          plVar16 = in_stack_00000020;
        }
        plVar11 = (long *)(ulong)(bVar4 >> 1);
        if (bVar20) {
          plVar11 = in_stack_00000018;
        }
        pcVar14 = *(char **)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x120);
        bStack00000000000000d0 = (byte)pcVar14;
        uStack00000000000000d1 = (undefined4)((ulong)pcVar14 >> 8);
        uStack00000000000000d5 = (undefined2)((ulong)pcVar14 >> 0x28);
        uStack00000000000000d7 = (undefined1)((ulong)pcVar14 >> 0x38);
        lVar13 = *(long *)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x128);
        uStack00000000000000d8 = (undefined2)lVar13;
        uStack00000000000000da = (undefined4)((ulong)lVar13 >> 0x10);
        uStack00000000000000de = (undefined2)((ulong)lVar13 >> 0x30);
        if (lVar13 != 0) {
          LOCK();
          *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        in_stack_000000e0 =
             *(long **)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x130);
        if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) break;
        func_0x0d62d820(&stack0x00000170,plVar16,plVar11,&stack0x000000d0,&stack0x00000270);
        plVar12 = (long *)CONCAT26(uStack00000000000000de,
                                   CONCAT42(uStack00000000000000da,uStack00000000000000d8));
        bStack00000000000000d0 = 0;
        uStack00000000000000d1 = 0;
        uStack00000000000000d5 = 0;
        uStack00000000000000d7 = 0;
        uStack00000000000000d8 = 0;
        uStack00000000000000da = 0;
        uStack00000000000000de = 0;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar16 = plVar12 + 1;
          lVar13 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            func_0x0412c2d0(plVar12);
          }
          plVar12 = (long *)CONCAT26(uStack00000000000000de,
                                     CONCAT42(uStack00000000000000da,uStack00000000000000d8));
          in_stack_000000e0 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar16 = plVar12 + 1;
            lVar13 = *plVar16;
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              func_0x0412c2d0(plVar12);
            }
          }
        }
        if (((ulong)_bStack0000000000000010 & 1) != 0) {
          func_0x0412a280(in_stack_00000020,(ulong)_bStack0000000000000010 & 0xfffffffffffffffe);
        }
        uVar15 = SUB84(unaff_R12,0);
        if (in_stack_00000310 == 1) {
          if (((ulong)in_stack_000002d0 & 1) != 0) {
            func_0x0412a280(in_stack_000002e0,(ulong)in_stack_000002d0 & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x048e6d60(&stack0x000002d0);
        }
        plVar12 = (long *)in_stack_00000170[1];
        unaff_RBP = (long *)in_stack_00000170[2];
        if (plVar12 != unaff_RBP) {
          unaff_R12 = (long *)(in_stack_00000048 + 0x28);
          unaff_R13 = (long *)&stack0x000002d0;
          in_stack_00000160 = unaff_R12;
          do {
            if ((long *)0xfffffffffffffff7 < in_stack_00000f08) {
              func_0x04882e30();
              goto LAB_0c9adea2;
            }
            if (in_stack_00000f08 < (long *)0x17) {
              in_stack_000002d0 =
                   (long *)CONCAT71((int7)((ulong)in_stack_000002d0 >> 8),cVar5 * '\x02');
              plVar19 = (long *)&stack0x000002d1;
              if (in_stack_00000f08 != (long *)0x0) goto LAB_0c9ad3b8;
            }
            else {
              uVar18 = ((ulong)in_stack_00000f08 | 7) + 1;
              if (((ulong)in_stack_00000f08 | 7) == 0x17) {
                uVar18 = 0x1a;
              }
              plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
              if (plVar19 == (long *)0x0) {
                func_0x0eec74c0(uVar18,0);
              }
              in_stack_000002d0 = (long *)(uVar18 | 1);
              unaff_R12 = in_stack_00000160;
              in_stack_000002e0 = plVar19;
LAB_0c9ad3b8:
              func_0x0eee2f00(plVar19,&stack0x00000b08,in_stack_00000f08);
            }
            *(char *)((long)plVar19 + (long)in_stack_00000f08) = '\0';
            func_0x0c978970(CONCAT71(uStack0000000000000009,cStack0000000000000008),plVar12,
                            unaff_R13,unaff_R12);
            if (((ulong)in_stack_000002d0 & 1) != 0) {
              func_0x0412a280(in_stack_000002e0,(ulong)in_stack_000002d0 & 0xfffffffffffffffe);
            }
            if ((int)*unaff_R12 == 2) {
              bVar20 = false;
              uVar7 = 0;
              goto LAB_0c9add38;
            }
            plVar12 = plVar12 + 0x22;
            plVar9 = in_stack_00000f08;
          } while (plVar12 != unaff_RBP);
        }
        plVar16 = (long *)((ulong)in_stack_000000b8 >> 1 & 0x7f);
        plVar12 = (long *)((long)&stack0x000000b8 + 1);
        if (((ulong)in_stack_000000b8 & 1) != 0) {
          plVar16 = in_stack_000000c0;
          plVar12 = in_stack_000000c8;
        }
        bStack00000000000000d0 = (byte)plVar12;
        uStack00000000000000d1 = (undefined4)((ulong)plVar12 >> 8);
        uStack00000000000000d5 = (undefined2)((ulong)plVar12 >> 0x28);
        uStack00000000000000d7 = (undefined1)((ulong)plVar12 >> 0x38);
        uStack00000000000000d8 = SUB82(plVar16,0);
        uStack00000000000000da = (undefined4)((ulong)plVar16 >> 0x10);
        uStack00000000000000de = (undefined2)((ulong)plVar16 >> 0x30);
        in_stack_000000e0 = (long *)&UNK_014af2c8;
        in_stack_000000e8 = (undefined8 *)0x19;
        plVar12 = (long *)&stack0x000002d0;
        func_0x049151c0(plVar12,&stack0x000000d0,2,0x2f);
        if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        (**(code **)(_DAT_0f7b8f98 + 0x60))(&stack0x000000d0,&DAT_0f7b8f98,&stack0x00000260);
        in_stack_00000050 = (long *)0x4e11f0a723cb56a9;
        _cStack0000000000000058 = (long *)&UNK_0140f690;
        in_stack_00000060 = (byte *)0x1;
        in_stack_00000068 = (long *)CONCAT44(in_stack_00000068._4_4_,0x38b);
        if (bStack0000000000000110 == 0) {
          _bStack0000000000000010 = (long *)0x0;
          in_stack_00000018 = (long *)0x0;
          in_stack_00000020 = (long *)0x0;
          func_0x0eedeb80(2,0x2d,&stack0x000000d0,&stack0x00000010,&stack0x00000050);
          if (((ulong)_bStack0000000000000010 & 1) != 0) {
            func_0x0412a280(in_stack_00000020,(ulong)_bStack0000000000000010 & 0xfffffffffffffffe);
          }
        }
        bVar4 = bStack00000000000000d0;
        if ((bStack0000000000000110 & 1) == 0) {
          in_stack_000000a0 = in_stack_000000a0 & 0xffffffffffff0000;
          bVar4 = 0;
        }
        else {
          in_stack_000000a0 =
               CONCAT17(uStack00000000000000d7,
                        CONCAT25(uStack00000000000000d5,
                                 CONCAT41(uStack00000000000000d1,bStack00000000000000d0)));
          in_stack_000000a8 =
               CONCAT26(uStack00000000000000de,
                        CONCAT42(uStack00000000000000da,uStack00000000000000d8));
          in_stack_000000b0 = in_stack_000000e0;
          bStack00000000000000d0 = 0;
          uStack00000000000000d1 = 0;
          uStack00000000000000d5 = 0;
          uStack00000000000000d7 = 0;
          uStack00000000000000d8 = 0;
          uStack00000000000000da = 0;
          uStack00000000000000de = 0;
          in_stack_000000e0 = (long *)0x0;
        }
        bVar20 = (bVar4 & 1) != 0;
        plVar16 = (long *)((long)&stack0x000000a0 + 1);
        if (bVar20) {
          plVar16 = in_stack_000000b0;
        }
        uVar18 = (ulong)(bVar4 >> 1);
        if (bVar20) {
          uVar18 = in_stack_000000a8;
        }
        in_stack_00000050 =
             *(long **)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x120);
        _cStack0000000000000058 =
             *(long **)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x128);
        if (_cStack0000000000000058 != (long *)0x0) {
          LOCK();
          _cStack0000000000000058[1] = _cStack0000000000000058[1] + 1;
          UNLOCK();
        }
        in_stack_00000060 =
             *(byte **)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x130);
        if ((in_stack_00000050 == (long *)0x0) || ((char)*in_stack_00000050 == '\0')) break;
        func_0x0d62d820(&stack0x00000168,plVar16,uVar18,&stack0x00000050,&stack0x000006e0);
        plVar19 = _cStack0000000000000058;
        in_stack_00000050 = (long *)0x0;
        _cStack0000000000000058 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar9 = plVar19 + 1;
          lVar13 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
          plVar19 = _cStack0000000000000058;
          in_stack_00000060 = (byte *)0x0;
          if (_cStack0000000000000058 != (long *)0x0) {
            LOCK();
            plVar9 = _cStack0000000000000058 + 1;
            lVar13 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*_cStack0000000000000058 + 0x10))(_cStack0000000000000058);
              func_0x0412c2d0(plVar19);
            }
          }
        }
        if ((in_stack_000000a0 & 1) != 0) {
          func_0x0412a280(in_stack_000000b0,in_stack_000000a0 & 0xfffffffffffffffe);
        }
        if (bStack0000000000000110 == '\x01') {
          if ((bStack00000000000000d0 & 1) != 0) {
            func_0x0412a280(in_stack_000000e0,
                            CONCAT17(uStack00000000000000d7,
                                     CONCAT25(uStack00000000000000d5,
                                              CONCAT41(uStack00000000000000d1,bStack00000000000000d0
                                                      ))) & 0xfffffffffffffffe);
          }
        }
        else {
          func_0x048e6d60(&stack0x000000d0);
        }
        lVar13 = in_stack_00000168[1];
        lVar2 = in_stack_00000168[2];
        if (lVar13 == lVar2) {
LAB_0c9ad882:
          uStack00000000000000d8 = 0;
          uStack00000000000000da = 0;
          uStack00000000000000de = 0;
          in_stack_000000e0 = (long *)0x0;
          bStack00000000000000d0 = (byte)&stack0x000000d8;
          uStack00000000000000d1 = (undefined4)((ulong)&stack0x000000d8 >> 8);
          uStack00000000000000d5 = (undefined2)((ulong)&stack0x000000d8 >> 0x28);
          uStack00000000000000d7 = (undefined1)((ulong)&stack0x000000d8 >> 0x38);
          in_stack_000000e8 = &stack0x000000f0;
          in_stack_000000f0 = 0;
          in_stack_000000f8 = 0;
          in_stack_00000100 = &stack0x00000108;
          in_stack_00000108 = 0;
          _bStack0000000000000110 = 0;
          uStack0000000000000118 = 0;
          in_stack_00000120 = (long *)0x0;
          in_stack_00000128 = (long *)0x0;
          in_stack_00000130 = (long *)0x0;
          in_stack_00000138 = 0;
          in_stack_00000140 = 0;
          in_stack_00000148 = 0;
          in_stack_00000150 = 1;
          uStack000000000000011c = 0;
          func_0x0412d550(0xf5522b8);
          LOCK();
          _DAT_0f552388 = _DAT_0f552388 + 1;
          UNLOCK();
          func_0x0412d610(0xf5522b8);
          plVar19 = _DAT_0f5523a0;
          pbVar1 = _DAT_0f552398;
          if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
          bVar4 = 1;
          if (_DAT_0f5523a0 != (long *)0x0) {
            LOCK();
            _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
            UNLOCK();
            bVar4 = *pbVar1;
          }
          plVar9 = _DAT_0f5523a8;
          in_stack_00000050 = (long *)0xf5522b8;
          _cStack0000000000000058 = (long *)CONCAT71(uStack0000000000000059,1);
          in_stack_00000060 = pbVar1;
          in_stack_00000068 = plVar19;
          in_stack_00000070 = _DAT_0f5523a8;
          if (((bVar4 & 1) == 0) &&
             (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
             cVar5 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(*plVar9 + 0x228))(&stack0x00000010,plVar9,2);
          plVar16 = in_stack_00000128;
          plVar12 = in_stack_00000020;
          plVar9 = in_stack_00000018;
          plVar19 = _bStack0000000000000010;
          if (in_stack_00000018 != (long *)0x0) {
            LOCK();
            in_stack_00000018[1] = in_stack_00000018[1] + 1;
            UNLOCK();
          }
          in_stack_00000120 = (long *)0x0;
          in_stack_00000128 = (long *)0x0;
          if (plVar16 == (long *)0x0) {
            in_stack_00000120 = _bStack0000000000000010;
            in_stack_00000128 = in_stack_00000018;
          }
          else {
            LOCK();
            plVar11 = plVar16 + 1;
            lVar13 = *plVar11;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              func_0x0412c2d0(plVar16);
            }
            plVar16 = in_stack_00000128;
            in_stack_00000130 = (long *)0x0;
            in_stack_00000120 = plVar19;
            in_stack_00000128 = plVar9;
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar19 = plVar16 + 1;
              lVar13 = *plVar19;
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                func_0x0412c2d0(plVar16);
              }
            }
          }
          plVar19 = in_stack_00000018;
          in_stack_00000130 = plVar12;
          _bStack0000000000000010 = (long *)0x0;
          in_stack_00000018 = (long *)0x0;
          if (plVar19 == (long *)0x0) {
            in_stack_00000020 = (long *)0x0;
          }
          else {
            LOCK();
            plVar9 = plVar19 + 1;
            lVar13 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
            }
            plVar19 = in_stack_00000018;
            in_stack_00000020 = (long *)0x0;
            if (in_stack_00000018 != (long *)0x0) {
              LOCK();
              plVar9 = in_stack_00000018 + 1;
              lVar13 = *plVar9;
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
                func_0x0412c2d0(plVar19);
              }
            }
          }
          plVar19 = in_stack_00000068;
          in_stack_00000060 = (byte *)0x0;
          in_stack_00000068 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            LOCK();
            plVar9 = plVar19 + 1;
            lVar13 = *plVar9;
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              func_0x0412c2d0(plVar19);
            }
            plVar19 = in_stack_00000068;
            in_stack_00000070 = (long *)0x0;
            if (in_stack_00000068 != (long *)0x0) {
              LOCK();
              plVar9 = in_stack_00000068 + 1;
              lVar13 = *plVar9;
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*in_stack_00000068 + 0x10))(in_stack_00000068);
                func_0x0412c2d0(plVar19);
              }
            }
          }
          if (cStack0000000000000058 == '\x01') {
            func_0x0eee02f0(in_stack_00000050);
          }
          uVar7 = func_0x0ee3d1a0(&stack0x00000250,&stack0x00000240,in_stack_00000208,uVar15,
                                  &stack0x000000d0);
          if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          (**(code **)(_DAT_0f7b8f98 + 0x98))(&stack0x00000050,&DAT_0f7b8f98,&stack0x00000230);
          _bStack0000000000000010 = (long *)0x4e11f0a723cb56a9;
          in_stack_00000018 = (long *)&UNK_0140f690;
          in_stack_00000020 = (long *)0x1;
          in_stack_00000028 = 0x39d;
          if (in_stack_00000090 == 0) {
            in_stack_000000a0 = 0;
            in_stack_000000a8 = 0;
            in_stack_000000b0 = (long *)0x0;
            func_0x0eedeb80(2,0x2d,&stack0x00000050,&stack0x000000a0,&stack0x00000010);
            if ((in_stack_000000a0 & 1) != 0) {
              func_0x0412a280(in_stack_000000b0,in_stack_000000a0 & 0xfffffffffffffffe);
            }
          }
          if ((in_stack_00000090 & 1) == 0) {
            func_0x048e6d60(&stack0x00000050);
          }
          func_0x0ee3cd80(&stack0x000000d0);
          bVar20 = true;
LAB_0c9add19:
          plVar19 = in_stack_00000168;
          in_stack_00000168 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 8))();
          }
LAB_0c9add38:
          plVar19 = in_stack_00000170;
          in_stack_00000170 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 8))();
          }
          if (((ulong)in_stack_000000b8 & 1) != 0) {
            func_0x0412a280(in_stack_000000c8,(ulong)in_stack_000000b8 & 0xfffffffffffffffe);
          }
          func_0x0ee3cd80(&stack0x00000180);
          if (bVar20) goto LAB_0c9add8b;
          goto LAB_0c9addd8;
        }
        unaff_R12 = (long *)(in_stack_00000048 + 0x28);
        unaff_R13 = (long *)&stack0x000000d0;
        in_stack_00000160 = unaff_R12;
        while (in_stack_00000f08 < (long *)0xfffffffffffffff8) {
          if (in_stack_00000f08 < (long *)0x17) {
            bStack00000000000000d0 = cVar5 * '\x02';
            plVar19 = (long *)((long)&stack0x000000d0 + 1);
            if (in_stack_00000f08 != (long *)0x0) goto LAB_0c9ad808;
          }
          else {
            lVar17 = ((ulong)in_stack_00000f08 | 7) + 1;
            if (((ulong)in_stack_00000f08 | 7) == 0x17) {
              lVar17 = 0x1a;
            }
            plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
            if (plVar19 == (long *)0x0) {
              func_0x0eec74c0(lVar17,0);
            }
            bStack00000000000000d0 = (byte)lVar17 | 1;
            uStack00000000000000d1 = (undefined4)((ulong)lVar17 >> 8);
            uStack00000000000000d5 = (undefined2)((ulong)lVar17 >> 0x28);
            uStack00000000000000d7 = (undefined1)((ulong)lVar17 >> 0x38);
            uStack00000000000000d8 = SUB82(in_stack_00000f08,0);
            uStack00000000000000da = (undefined4)((ulong)in_stack_00000f08 >> 0x10);
            uStack00000000000000de = (undefined2)((ulong)in_stack_00000f08 >> 0x30);
            unaff_R12 = in_stack_00000160;
            in_stack_000000e0 = plVar19;
LAB_0c9ad808:
            func_0x0eee2f00(plVar19,&stack0x00000b08,in_stack_00000f08);
          }
          *(char *)((long)plVar19 + (long)in_stack_00000f08) = '\0';
          func_0x0c978970(CONCAT71(uStack0000000000000009,cStack0000000000000008),lVar13,unaff_R13,
                          unaff_R12);
          if ((bStack00000000000000d0 & 1) != 0) {
            func_0x0412a280(in_stack_000000e0,
                            CONCAT17(uStack00000000000000d7,
                                     CONCAT25(uStack00000000000000d5,
                                              CONCAT41(uStack00000000000000d1,bStack00000000000000d0
                                                      ))) & 0xfffffffffffffffe);
          }
          if ((int)*unaff_R12 == 2) {
            bVar20 = false;
            uVar7 = 0;
            goto LAB_0c9add19;
          }
          lVar13 = lVar13 + 0x110;
          if (lVar13 == lVar2) goto LAB_0c9ad882;
        }
LAB_0c9adea2:
        func_0x04882e30();
        iVar8 = func_0x04108328(&DAT_0f7b8fb8);
        plVar19 = in_stack_00000f08;
        if (iVar8 != 0) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
          plVar19 = in_stack_00000178;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x20))(&stack0x00000b08,&DAT_0f7b8f98,&stack0x00000220);
        if (in_stack_00000b48 == '\0') {
          func_0x048e6d60(&stack0x00000b08);
        }
        lVar2 = plVar19[4];
        in_stack_00000048 = plVar19[5];
        in_stack_00000218 = (long *)plVar19[6];
        lVar13 = in_stack_00000048;
        if (in_stack_00000218 != (long *)0x0) {
          LOCK();
          in_stack_00000218[1] = in_stack_00000218[1] + 1;
          UNLOCK();
          lVar13 = plVar19[5];
        }
        if ((*(byte *)(lVar13 + 0x98) & 1) == 0) {
          in_stack_00000040 = *(long **)(lVar13 + 0xa8);
          _bStack0000000000000030 = *(uint *)(lVar13 + 0x98);
          uStack0000000000000034 = *(undefined4 *)(lVar13 + 0x9c);
          uStack0000000000000038 = *(undefined4 *)(lVar13 + 0xa0);
          uStack000000000000003c = *(undefined4 *)(lVar13 + 0xa4);
        }
        else {
          func_0x0412e5e0(&stack0x00000030,*(undefined8 *)(lVar13 + 0xa8),
                          *(undefined8 *)(lVar13 + 0xa0));
        }
        lVar13 = CONCAT71(uStack0000000000000009,cStack0000000000000008);
        LOCK();
        *(undefined4 *)(lVar13 + 0x20) = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)(lVar13 + 0x24) = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)(lVar13 + 0x28) = 0;
        UNLOCK();
        func_0x0412d680(lVar13 + 0x48);
        lVar17 = CONCAT71(uStack0000000000000009,cStack0000000000000008);
        pbVar1 = (byte *)(lVar17 + 0x70);
        if (pbVar1 != &UNK_01e79d90) {
          if ((*pbVar1 & 1) == 0) {
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            *(undefined8 *)(lVar17 + 0x78) = 0;
            *(undefined8 *)(lVar17 + 0x80) = 0;
          }
          else {
            func_0x04885120(pbVar1,&UNK_01e79d91,0);
          }
        }
        in_stack_00000208 = CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x18;
        func_0x0412d6b0(lVar13 + 0x48);
        func_0x0c97bf40(in_stack_00000208,&UNK_01e79d90);
        LOCK();
        *(undefined4 *)(CONCAT71(uStack0000000000000009,cStack0000000000000008) + 0x28) =
             *(undefined4 *)(in_stack_00000048 + 0x20);
        UNLOCK();
        if ((char)lVar2 == '\0') {
          bVar20 = (_bStack0000000000000030 & 1) == 0;
          unaff_RBP = (long *)((long)&stack0x00000030 + 1);
          plVar9 = in_stack_00000040;
          if (bVar20) {
            plVar9 = unaff_RBP;
          }
          plVar12 = (long *)(ulong)(bStack0000000000000030 >> 1);
          if (!bVar20) {
            plVar12 = (long *)CONCAT44(uStack000000000000003c,uStack0000000000000038);
          }
          if ((long *)0xfffffffffffffff7 < plVar12) {
            func_0x04882e30();
            goto LAB_0c9adeff;
          }
          unaff_R13 = (long *)((long)&stack0x000000d0 + 1);
          if ((long *)0x16 < plVar12) {
            unaff_R12 = (long *)0x1a;
            if (((ulong)plVar12 | 7) != 0x17) {
              unaff_R12 = (long *)(((ulong)plVar12 | 7) + 1);
            }
            plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12);
            if (plVar19 == (long *)0x0) goto LAB_0c9ade34;
            goto LAB_0c9ac0da;
          }
          bStack00000000000000d0 = (char)plVar12 * '\x02';
          plVar16 = unaff_R12;
          plVar19 = unaff_R13;
          if (plVar12 != (long *)0x0) goto LAB_0c9ac0f6;
          goto LAB_0c9ac104;
        }
        func_0x049151c0(&stack0x00000b08,&stack0x00000700,2,0x2f);
        if (DAT_0f7b8fb8 == '\0') {
LAB_0c9adeff:
          iVar8 = func_0x04108328(&DAT_0f7b8fb8);
          if (iVar8 != 0) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
        }
        (**(code **)(_DAT_0f7b8f98 + 0x80))(&stack0x00000700,&DAT_0f7b8f98,&stack0x000002c0);
        in_stack_000002d0 = (long *)0x4e11f0a723cb56a9;
        in_stack_000002e0 = (long *)0x1;
        if (in_stack_00000740 == 0) {
          in_stack_00000180 = (undefined8 *)0x0;
          _cStack0000000000000188 = (long *)0x0;
          in_stack_00000190 = (byte *)0x0;
          func_0x0eedeb80(2,0x2d,&stack0x00000700,&stack0x00000180,&stack0x000002d0);
          if (((ulong)in_stack_00000180 & 1) != 0) {
            func_0x0412a280(in_stack_00000190,(ulong)in_stack_00000180 & 0xfffffffffffffffe);
          }
        }
        if ((in_stack_00000740 & 1) == 0) {
          func_0x048e6d60(&stack0x00000700);
        }
        in_stack_00000180 = (undefined8 *)&stack0x00000188;
        _cStack0000000000000188 = (long *)0x0;
        in_stack_00000190 = (byte *)0x0;
        in_stack_00000198 = (long *)&stack0x000001a0;
        in_stack_000001a0 = (long *)0x0;
        in_stack_000001a8 = 0;
        in_stack_000001b0 = &stack0x000001b8;
        in_stack_000001b8 = 0;
        in_stack_000001c0 = 0;
        uStack00000000000001cc = 0xffffffff;
        in_stack_000001d0 = 0;
        in_stack_000001d8 = (long *)0x0;
        in_stack_000001e0 = (long *)0x0;
        in_stack_000001e8 = 0;
        in_stack_000001f0 = 0;
        uStack00000000000001c8 = 1;
        func_0x0412d550(0xf5522b8);
        LOCK();
        _DAT_0f552388 = _DAT_0f552388 + 1;
        UNLOCK();
        func_0x0412d610(0xf5522b8);
        plVar19 = _DAT_0f5523a0;
        pbVar1 = _DAT_0f552398;
        if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
        bVar4 = 1;
        if (_DAT_0f5523a0 != (long *)0x0) {
          LOCK();
          _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
          UNLOCK();
          bVar4 = *pbVar1;
        }
        plVar9 = _DAT_0f5523a8;
        if (((bVar4 & 1) == 0) &&
           (cVar3 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
           cVar3 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        (**(code **)(*plVar9 + 0x228))(&stack0x000002d0,plVar9,2);
        plVar9 = in_stack_000001d8;
        LOCK();
        _UNK_0140f698 = _UNK_0140f698 + 1;
        UNLOCK();
        in_stack_000001d0 = 0;
        in_stack_000001d8 = (long *)0x0;
        if (plVar9 == (long *)0x0) {
          in_stack_000001d0 = 0x4e11f0a723cb56a9;
          in_stack_000001d8 = (long *)&UNK_0140f690;
        }
        else {
          LOCK();
          plVar12 = plVar9 + 1;
          lVar13 = *plVar12;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            func_0x0412c2d0(plVar9);
          }
          plVar9 = in_stack_000001d8;
          in_stack_000001e0 = (long *)0x0;
          in_stack_000001d0 = 0x4e11f0a723cb56a9;
          in_stack_000001d8 = (long *)&UNK_0140f690;
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar12 = plVar9 + 1;
            lVar13 = *plVar12;
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              func_0x0412c2d0(plVar9);
            }
          }
        }
        in_stack_000002d0 = (long *)0x0;
        plVar16 = (long *)&stack0x00000b08;
        LOCK();
        lVar13 = _UNK_0140f698 + -1;
        UNLOCK();
        bVar20 = _UNK_0140f698 == 0;
        in_stack_000001e0 = in_stack_000002e0;
        _UNK_0140f698 = lVar13;
        if (bVar20) {
          (**(code **)(_UNK_0140f690 + 0x10))(&UNK_0140f690);
          func_0x0412c2d0(&UNK_0140f690);
        }
        in_stack_000002e0 = (long *)0x0;
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar9 = plVar19 + 1;
          lVar13 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            func_0x0412c2d0(plVar19);
          }
        }
        func_0x0eee02f0(0xf5522b8);
        func_0x0412d550(0xf5522b8);
        LOCK();
        _DAT_0f552388 = _DAT_0f552388 + 1;
        UNLOCK();
        plVar19 = (long *)0xf5522b8;
        func_0x0412d610(0xf5522b8);
        plVar9 = _DAT_0f5523a0;
        pbVar1 = _DAT_0f552398;
        if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
        bVar4 = 1;
        if (_DAT_0f5523a0 != (long *)0x0) {
          LOCK();
          _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
          UNLOCK();
          bVar4 = *pbVar1;
        }
        plVar12 = _DAT_0f5523a8;
        if (((bVar4 & 1) == 0) &&
           (cVar3 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
           cVar3 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        bVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar12 = plVar9 + 1;
          lVar13 = *plVar12;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            func_0x0412c2d0(plVar9);
          }
        }
        func_0x0eee02f0(0xf5522b8);
        uStack00000000000000de = 0;
        in_stack_000000e0 = (long *)0x0;
        bStack00000000000000d0 = 0x1a;
        in_stack_000002e0 = (long *)((long)&stack0x000000d0 + 1);
        uStack00000000000000d1 = 0x6c726f77;
        uStack00000000000000d5 = 0x2e64;
        uStack00000000000000d7 = 0x6d;
        uStack00000000000000d8 = 0x7763;
        uStack00000000000000da = 0x646c726f;
        plVar9 = (long *)&stack0x00000700;
        func_0x049151c0(plVar9,&stack0x000002d0,2,0x2f);
        unaff_R12 = (long *)(ulong)bVar4;
        iVar8 = func_0x0ee3d1a0(&stack0x000002b0,&stack0x000002a0,in_stack_00000208,unaff_R12,
                                &stack0x00000180);
        if ((bStack00000000000000d0 & 1) != 0) {
          func_0x0412a280(in_stack_000000e0,
                          CONCAT17(uStack00000000000000d7,
                                   CONCAT25(uStack00000000000000d5,
                                            CONCAT41(uStack00000000000000d1,bStack00000000000000d0))
                                  ) & 0xfffffffffffffffe);
        }
        if (iVar8 != 0) {
          *(undefined4 *)(in_stack_00000048 + 0x28) = 2;
          func_0x0ee3cd80(&stack0x00000180);
          goto LAB_0c9addd8;
        }
        bVar20 = (_bStack0000000000000030 & 1) != 0;
        unaff_RBP = (long *)((long)&stack0x00000030 + 1);
        if (bVar20) {
          unaff_RBP = in_stack_00000040;
        }
        plVar12 = (long *)(ulong)(bStack0000000000000030 >> 1);
        if (bVar20) {
          plVar12 = (long *)CONCAT44(uStack000000000000003c,uStack0000000000000038);
        }
        in_stack_000002d8 = in_stack_00000f08;
        if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_0c9adf6b;
        plVar9 = (long *)((long)&stack0x000000b8 + 1);
        if (plVar12 < (long *)0x17) {
          in_stack_000000b8 = (long *)CONCAT71(in_stack_000000b8._1_7_,(char)plVar12 * '\x02');
          if (plVar12 != (long *)0x0) goto LAB_0c9acfad;
        }
        else {
          uVar18 = 0x1a;
          if (((ulong)plVar12 | 7) != 0x17) {
            uVar18 = ((ulong)plVar12 | 7) + 1;
          }
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
          if (plVar9 == (long *)0x0) {
            func_0x0eec74c0(uVar18,0);
          }
          plVar19 = (long *)(uVar18 | 1);
          in_stack_000000b8 = plVar19;
          in_stack_000000c0 = plVar12;
          in_stack_000000c8 = plVar9;
LAB_0c9acfad:
          func_0x0eee2ee0(plVar9,unaff_RBP,plVar12);
        }
        *(char *)((long)plVar9 + (long)plVar12) = '\0';
        in_stack_000002d8 = (long *)((ulong)in_stack_000000b8 >> 1 & 0x7f);
        plVar16 = (long *)((long)&stack0x000000b8 + 1);
        if (((ulong)in_stack_000000b8 & 1) != 0) {
          in_stack_000002d8 = in_stack_000000c0;
          plVar16 = in_stack_000000c8;
        }
        in_stack_000002e0 = (long *)&UNK_012d82f4;
        plVar12 = (long *)&stack0x00000700;
        func_0x049151c0(plVar12,&stack0x000002d0,2,0x2f);
        if (DAT_0f7b8fb8 == '\0') goto LAB_0c9adf70;
      }
      func_0x04890760();
LAB_0c9ade34:
      func_0x0eec74c0(unaff_R12,0);
LAB_0c9ac0da:
      plVar16 = (long *)((ulong)unaff_R12 | 1);
      bStack00000000000000d0 = (byte)plVar16;
      uStack00000000000000d1 = (undefined4)((ulong)unaff_R12 >> 8);
      uStack00000000000000d5 = (undefined2)((ulong)unaff_R12 >> 0x28);
      uStack00000000000000d7 = (undefined1)((ulong)unaff_R12 >> 0x38);
      uStack00000000000000d8 = SUB82(plVar12,0);
      uStack00000000000000da = (undefined4)((ulong)plVar12 >> 0x10);
      uStack00000000000000de = (undefined2)((ulong)plVar12 >> 0x30);
      in_stack_000000e0 = plVar19;
LAB_0c9ac0f6:
      func_0x0eee2ee0(plVar19,plVar9,plVar12);
      unaff_R12 = plVar16;
LAB_0c9ac104:
      *(char *)((long)plVar19 + (long)plVar12) = '\0';
      func_0x049151c0(&stack0x00000b08,&stack0x00000700,2,0x2f);
      bVar20 = (bStack00000000000000d0 & 1) != 0;
      if (bVar20) {
        unaff_R13 = in_stack_000000e0;
      }
      in_stack_000002d8 = (long *)(ulong)(bStack00000000000000d0 >> 1);
      if (bVar20) {
        in_stack_000002d8 =
             (long *)CONCAT26(uStack00000000000000de,
                              CONCAT42(uStack00000000000000da,uStack00000000000000d8));
      }
      in_stack_000002e0 = (long *)&UNK_014af2c8;
      func_0x049151c0(&stack0x00000700,&stack0x000002d0,2,0x2f);
      if (in_stack_00000f08 < (long *)0xfffffffffffffff8) {
        if (in_stack_00000f08 < (long *)0x17) {
          in_stack_000002d0 = (long *)CONCAT71((int7)((ulong)unaff_R13 >> 8),cVar5 * '\x02');
          plVar9 = (long *)&stack0x000002d1;
          if (in_stack_00000f08 != (long *)0x0) goto LAB_0c9ac266;
        }
        else {
          uVar18 = 0x1a;
          if (((ulong)in_stack_00000f08 | 7) != 0x17) {
            uVar18 = ((ulong)in_stack_00000f08 | 7) + 1;
          }
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
          if (plVar9 == (long *)0x0) {
            func_0x0eec74c0(uVar18,0);
          }
          plVar19 = (long *)(uVar18 | 1);
          in_stack_000002d0 = plVar19;
          in_stack_000002d8 = in_stack_00000f08;
          in_stack_000002e0 = plVar9;
LAB_0c9ac266:
          func_0x0eee2f00(plVar9,&stack0x00000b08,in_stack_00000f08);
        }
        *(char *)((long)plVar9 + (long)in_stack_00000f08) = '\0';
        uVar7 = func_0x0c979740(CONCAT71(uStack0000000000000009,cStack0000000000000008),
                                &stack0x000002d0);
        unaff_R12 = (long *)(ulong)uVar7;
        if (((ulong)in_stack_000002d0 & 1) != 0) {
          func_0x0412a280(in_stack_000002e0,(ulong)in_stack_000002d0 & 0xfffffffffffffffe);
        }
        plVar12 = in_stack_00000b00;
        if (in_stack_00000b00 < (long *)0xfffffffffffffff8) {
          if (in_stack_00000b00 < (long *)0x17) {
            uVar18 = CONCAT71((int7)((ulong)in_stack_000002d0 >> 8),(char)in_stack_00000b00 * '\x02'
                             );
            plVar19 = (long *)&stack0x000002d1;
            if (in_stack_00000b00 != (long *)0x0) goto LAB_0c9ac33c;
          }
          else {
            uVar18 = 0x1a;
            if (((ulong)in_stack_00000b00 | 7) != 0x17) {
              uVar18 = ((ulong)in_stack_00000b00 | 7) + 1;
            }
            plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
            if (plVar19 == (long *)0x0) {
              func_0x0eec74c0(uVar18,0);
            }
            uVar18 = uVar18 | 1;
            in_stack_000002e0 = plVar19;
LAB_0c9ac33c:
            func_0x0eee2f00(plVar19,&stack0x00000700,in_stack_00000b00);
          }
          *(char *)((long)plVar19 + (long)in_stack_00000b00) = '\0';
          uVar6 = func_0x0c979740(CONCAT71(uStack0000000000000009,cStack0000000000000008),
                                  &stack0x000002d0);
          unaff_R13 = (long *)(ulong)uVar6;
          if ((uVar18 & 1) != 0) {
            func_0x0412a280(in_stack_000002e0,uVar18 & 0xfffffffffffffffe);
          }
          in_stack_000002d0 = (long *)&stack0x000002d8;
          in_stack_000002d8 = (long *)0x0;
          in_stack_000002e0 = (long *)0x0;
          in_stack_00000310 = 0;
          func_0x0412d550(0xf5522b8);
          LOCK();
          _DAT_0f552388 = _DAT_0f552388 + 1;
          UNLOCK();
          func_0x0412d610(0xf5522b8);
          plVar19 = _DAT_0f5523a0;
          pbVar1 = _DAT_0f552398;
          if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0c9ae059;
          bVar4 = 1;
          if (_DAT_0f5523a0 != (long *)0x0) {
            LOCK();
            _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
            UNLOCK();
            bVar4 = *pbVar1;
          }
          plVar9 = _DAT_0f5523a8;
          in_stack_00000180 = (undefined8 *)0xf5522b8;
          _cStack0000000000000188 = (long *)CONCAT71(uStack0000000000000189,1);
          in_stack_00000190 = pbVar1;
          in_stack_00000198 = plVar19;
          in_stack_000001a0 = _DAT_0f5523a8;
          if (((bVar4 & 1) == 0) &&
             (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
             cVar5 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(*plVar9 + 0x228))(&stack0x00000050,plVar9,2);
          unaff_RBX = _cStack0000000000000058;
          unaff_R12 = in_stack_00000050;
          cStack0000000000000008 = (char)uVar7;
          if (_cStack0000000000000058 != (long *)0x0) {
            LOCK();
            _cStack0000000000000058[1] = _cStack0000000000000058[1] + 1;
            UNLOCK();
          }
          in_stack_00000050 = (long *)0x0;
          _cStack0000000000000058 = (long *)0x0;
          bVar20 = unaff_RBX == (long *)0x0;
          goto code_r0x0c9ac9f2;
        }
      }
      else {
        func_0x04882e30();
        plVar12 = in_stack_00000f08;
        in_stack_000002d0 = unaff_R13;
      }
      func_0x04882e30();
LAB_0c9adf5c:
      func_0x04882e30();
      plVar16 = in_stack_000002d0;
LAB_0c9adf61:
      func_0x04882e30();
    } while( true );
  }
  if (in_stack_00000b00 < (long *)0x17) {
    in_stack_00000050 = (long *)CONCAT71(in_stack_00000050._1_7_,(char)in_stack_00000b00 * '\x02');
    plVar19 = (long *)((long)&stack0x00000050 + 1);
    if (in_stack_00000b00 == (long *)0x0) goto LAB_0c9aced3;
  }
  else {
    uVar18 = 0x1a;
    if (((ulong)in_stack_00000b00 | 7) != 0x17) {
      uVar18 = ((ulong)in_stack_00000b00 | 7) + 1;
    }
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
    if (plVar19 == (long *)0x0) {
      func_0x0eec74c0(uVar18,0);
    }
    in_stack_00000050 = (long *)(uVar18 | 1);
    _cStack0000000000000058 = in_stack_00000b00;
    in_stack_00000060 = (byte *)plVar19;
  }
  func_0x0eee2f00(plVar19,&stack0x00000700,in_stack_00000b00);
LAB_0c9aced3:
  *(char *)((long)plVar19 + (long)in_stack_00000b00) = '\0';
  func_0x0c97a850(&stack0x00000050);
  if (((ulong)in_stack_00000050 & 1) != 0) {
    func_0x0412a280(in_stack_00000060,(ulong)in_stack_00000050 & 0xfffffffffffffffe);
  }
LAB_0c9acefc:
  if (((ulong)in_stack_00000180 & 1) != 0) {
    func_0x0412a280(in_stack_00000190,(ulong)in_stack_00000180 & 0xfffffffffffffffe);
  }
  func_0x0ee3cd80(&stack0x000002d0);
  if ((bStack00000000000000d0 & 1) != 0) {
    func_0x0412a280(in_stack_000000e0,
                    CONCAT17(uStack00000000000000d7,
                             CONCAT25(uStack00000000000000d5,
                                      CONCAT41(uStack00000000000000d1,bStack00000000000000d0))) &
                    0xfffffffffffffffe);
  }
LAB_0c9add8b:
  if (uVar7 == 0) {
    *(undefined4 *)(in_stack_00000048 + 0x28) = 0;
    if ((*(byte *)(in_stack_00000178 + 1) & 1) == 0) {
      uVar18 = (ulong)(*(byte *)(in_stack_00000178 + 1) >> 1);
      pcVar14 = (char *)((long)in_stack_00000178 + 9);
    }
    else {
      uVar18 = in_stack_00000178[2];
      pcVar14 = (char *)in_stack_00000178[3];
    }
    func_0x0412f5e0(in_stack_00000048 + 0x30,pcVar14,uVar18);
  }
  else {
    *(undefined4 *)(in_stack_00000048 + 0x28) = 2;
  }
LAB_0c9addd8:
  if ((_bStack0000000000000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,
                    CONCAT44(uStack0000000000000034,_bStack0000000000000030) & 0xfffffffffffffffe);
  }
  if (in_stack_00000218 != (long *)0x0) {
    LOCK();
    plVar19 = in_stack_00000218 + 1;
    lVar13 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*in_stack_00000218 + 0x10))(in_stack_00000218);
      func_0x0412c2d0(in_stack_00000218);
    }
  }
  return;
}


