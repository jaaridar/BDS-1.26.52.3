/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb721290 (ELF vaddr 0xb621290)
 * Label: caller-of-callee
 * Body:  [[0b721290, 0b721610] [0b721620, 0b721651] [0b721660, 0b721d97] [0b721da0, 0b721fd0] [0b721fe0, 0b7224c3] [0b7224d0, 0b7229f0]]
 * Ghidra: FUN_0b721290
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b721290(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  long *******ppppppplVar1;
  long ******pppppplVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  byte *pbVar7;
  undefined1 auVar8 [8];
  long *******ppppppplVar9;
  char cVar10;
  int iVar11;
  long *******ppppppplVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long *******ppppppplVar18;
  char cVar19;
  long *******unaff_RBP;
  byte *pbVar20;
  ulong unaff_R13;
  long *******unaff_R14;
  long lVar21;
  long *****ppppplVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_5f8 [8];
  long *******ppppppplStack_5f0;
  long *******ppppppplStack_5e8;
  undefined1 auStack_5d8 [16];
  long *******ppppppplStack_5c8;
  undefined1 auStack_5b8 [16];
  long *******ppppppplStack_5a8;
  undefined1 auStack_598 [16];
  undefined1 auStack_588 [16];
  long *******ppppppplStack_578;
  undefined1 auStack_568 [16];
  undefined1 auStack_558 [16];
  long *******ppppppplStack_548;
  long *******ppppppplStack_540;
  long *******ppppppplStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ulong uStack_520;
  char cStack_510;
  undefined1 auStack_508 [16];
  long *******ppppppplStack_4f8;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  long lStack_4d8;
  long *******ppppppplStack_4c8;
  long *******ppppppplStack_4c0;
  undefined8 uStack_4b8;
  long *******ppppppplStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  undefined4 uStack_488;
  uint uStack_478;
  uint uStack_438;
  long *******ppppppplStack_428;
  long *******ppppppplStack_420;
  undefined1 auStack_418 [16];
  long *******ppppppplStack_408;
  long *******ppppppplStack_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined1 auStack_3d8 [8];
  long *******ppppppplStack_3d0;
  undefined8 uStack_3c8;
  long *******ppppppplStack_3c0;
  undefined8 uStack_3b8;
  long *******ppppppplStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined4 uStack_398;
  char cStack_390;
  uint auStack_388 [16];
  uint uStack_348;
  uint uStack_208;
  int iStack_200;
  char cStack_1f8;
  long *******ppppppplStack_1e8;
  ulong uStack_1e0;
  long *******ppppppplStack_1d8;
  ulong uStack_1d0;
  byte *pbStack_1c8;
  ulong uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 uStack_e8;
  undefined1 auStack_e4 [12];
  undefined4 uStack_d8;
  undefined1 auStack_d4 [12];
  undefined4 uStack_c8;
  undefined1 auStack_c4 [16];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_40;
  
  ppppppplVar1 = (long *******)*param_2;
  ppppppplStack_428 = (long *******)0x0;
  ppppppplStack_420 = (long *******)0x0;
  pbStack_4e8 = (byte *)0x0;
  pbStack_4e0 = (byte *)0x0;
  lStack_4d8 = 0;
  puStack_3e0 = param_1;
  if (*(int *)(param_3 + 0x40) == 1) {
    bVar23 = (param_3[0x18] & 1) != 0;
    pbVar20 = param_3 + 0x19;
    if (bVar23) {
      pbVar20 = *(byte **)(param_3 + 0x28);
    }
    uVar15 = (ulong)(param_3[0x18] >> 1);
    if (bVar23) {
      uVar15 = *(ulong *)(param_3 + 0x20);
    }
    auStack_418 = func_0x0eedb4e0(pbVar20,uVar15);
    auVar24._8_8_ = _DAT_0f7ba060;
    auVar24._0_8_ = _DAT_0f7ba058;
    if (auStack_418 == auVar24) {
      unaff_R14 = (long *******)func_0x0412dc70();
      uStack_3c8 = _DAT_0f2d0e98;
      ppppppplStack_3c0 = _UNK_0f2d0ea0;
      auStack_3d8 = (undefined1  [8])_DAT_0f2d0e88;
      ppppppplStack_3d0 = _UNK_0f2d0e90;
      uStack_3b8 = (long *******)((ulong)uStack_3b8 & 0xffffffffffffff00);
      cStack_390 = '\0';
      auStack_1b8 = ZEXT816(0);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar3 << 0x40;
      func_0x0eee17a0(auStack_1b8,auStack_3d8,auStack_388,1);
      if ((cStack_390 == '\x01') && (((ulong)uStack_3b8 & 1) != 0)) {
        func_0x0412a280(uStack_3a8,(ulong)uStack_3b8 & 0xfffffffffffffffe);
      }
      ppppppplStack_428 = (long *******)auStack_1b8._0_8_;
      ppppppplStack_420 = (long *******)auStack_1b8._8_8_;
      unaff_RBP = (long *******)auStack_1a8._0_8_;
    }
    else {
      if (DAT_0f7b8fb8 == '\0') {
        iVar11 = FUN_04108328(&DAT_0f7b8fb8);
        if (iVar11 != 0) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
      }
      bVar23 = (*param_3 & 1) != 0;
      pbStack_1c8 = param_3 + 1;
      if (bVar23) {
        pbStack_1c8 = *(byte **)(param_3 + 0x10);
      }
      uStack_1c0 = (ulong)(*param_3 >> 1);
      if (bVar23) {
        uStack_1c0 = *(ulong *)(param_3 + 8);
      }
      (**(code **)(_DAT_0f7b8f98 + 200))(auStack_3d8,&DAT_0f7b8f98,&pbStack_4e8);
      auStack_1b8._8_8_ = &UNK_0140f690;
      auStack_1b8._0_8_ = 0xb73a56ee5b2b7c89;
      auStack_1a8._8_4_ = 0x354;
      auStack_1a8._0_8_ = 1;
      if ((byte)uStack_398 == 0) {
        unaff_R14 = (long *******)&ppppppplStack_4c8;
        func_0x0eedea30(unaff_R14);
        func_0x0eedeb80(2,0x2d,auStack_3d8,unaff_R14,auStack_1b8);
        if (((ulong)ppppppplStack_4c8 & 1) != 0) {
          func_0x0412a280(uStack_4b8,(ulong)ppppppplStack_4c8 & 0xfffffffffffffffe);
        }
      }
      ppppppplVar9 = ppppppplStack_3b0;
      ppppppplStack_408 = ppppppplVar1;
      if (((byte)uStack_398 & 1) == 0) {
        ppppppplVar1 = uStack_3a8;
        if (ppppppplStack_3b0 != (long *******)0x0) {
          while (unaff_R14 = ppppppplVar1, ppppppplVar9 != unaff_R14) {
            FUN_048b3e80(unaff_R14 + -8);
            ppppppplVar1 = unaff_R14 + -8;
          }
          uStack_3a8 = ppppppplVar9;
          func_0x0412a280(ppppppplStack_3b0,uStack_3a0 - (long)ppppppplStack_3b0);
        }
        ppppppplVar1 = uStack_3c8;
        ppppppplVar9 = ppppppplStack_3c0;
        if (uStack_3c8 != (long *******)0x0) {
          while (unaff_R14 = ppppppplVar9, ppppppplVar1 != unaff_R14) {
            if ((*(char *)(unaff_R14 + -1) == '\x01') && (((ulong)unaff_R14[-6] & 1) != 0)) {
              func_0x0412a280(unaff_R14[-4],(ulong)unaff_R14[-6] & 0xfffffffffffffffe);
            }
            ppppppplVar9 = unaff_R14 + -10;
          }
          ppppppplStack_3c0 = ppppppplVar1;
          func_0x0412a280(uStack_3c8,(long)uStack_3b8 - (long)uStack_3c8);
        }
      }
      auStack_5d8 = (undefined1  [16])0x0;
      ppppppplStack_5c8 = (long *******)0x0;
      _auStack_5f8 = (undefined1  [16])0x0;
      ppppppplStack_5e8 = (long *******)0x0;
      auStack_568._0_8_ = pbStack_4e0;
      pbVar20 = pbStack_4e8;
      if (pbStack_4e8 == pbStack_4e0) {
        ppppppplStack_5f0 = (long *******)0x0;
        uVar17 = 0;
      }
      else {
        do {
          if ((*pbVar20 & 1) == 0) {
            uStack_3c8 = *(long ********)(pbVar20 + 0x10);
            auStack_3d8 = *(undefined1 (*) [8])pbVar20;
            ppppppplStack_3d0 = *(long ********)(pbVar20 + 8);
          }
          else {
            func_0x0412e5e0(auStack_3d8,*(undefined8 *)(pbVar20 + 0x10),*(undefined8 *)(pbVar20 + 8)
                           );
          }
          ppppppplVar9 = ppppppplStack_3d0;
          auVar8 = auStack_3d8;
          unaff_R14 = (long *******)((ulong)auStack_3d8 >> 1 & 0x7f);
          auStack_598._0_8_ = uStack_3c8;
          ppppppplVar1 = (long *******)(auStack_3d8 + 1);
          if (((ulong)auStack_3d8 & 1) != 0) {
            unaff_R14 = ppppppplStack_3d0;
            ppppppplVar1 = uStack_3c8;
          }
          if (7 < (long)unaff_R14) {
            ppppppplVar12 = ppppppplVar1;
            ppppppplVar18 = unaff_R14;
            while( true ) {
              plVar14 = (long *)func_0x0eee2ef0(ppppppplVar12,0x6d,(long)ppppppplVar18 + -7);
              if (plVar14 == (long *)0x0) break;
              if (*plVar14 == 0x617461646174656d) {
                if ((long)plVar14 - (long)ppppppplVar1 != -1 &&
                    plVar14 != (long *)((long)unaff_R14 + (long)ppppppplVar1)) {
                  if ((auStack_5f8[0] & 1) == 0) {
                    if (((ulong)auVar8 & 1) == 0) {
                      ppppppplStack_5e8 = uStack_3c8;
                      ppppppplStack_5f0 = ppppppplStack_3d0;
                      auStack_5f8 = auStack_3d8;
                    }
                    else {
                      func_0x04885070(auStack_5f8,auStack_598._0_8_,ppppppplVar9);
                    }
                  }
                  else {
                    FUN_04885120(auStack_5f8,ppppppplVar1,unaff_R14);
                  }
                }
                break;
              }
              ppppppplVar12 = (long *******)((long)plVar14 + 1);
              ppppppplVar18 =
                   (long *******)(((long)unaff_R14 + (long)ppppppplVar1) - (long)ppppppplVar12);
              if ((long)ppppppplVar18 < 8) break;
            }
          }
          ppppppplVar9 = ppppppplStack_3d0;
          auVar8 = auStack_3d8;
          unaff_R13 = (ulong)auStack_3d8 & 0xff;
          unaff_RBP = (long *******)((ulong)auStack_3d8 >> 1 & 0x7f);
          auStack_598._0_8_ = uStack_3c8;
          ppppppplVar1 = (long *******)(auStack_3d8 + 1);
          if (((ulong)auStack_3d8 & 1) != 0) {
            unaff_RBP = ppppppplStack_3d0;
            ppppppplVar1 = uStack_3c8;
          }
          if (0xb < (long)unaff_RBP) {
            unaff_R14 = (long *******)((long)ppppppplVar1 + (long)unaff_RBP);
            ppppppplVar12 = ppppppplVar1;
            ppppppplVar18 = unaff_RBP;
            while( true ) {
              ppppppplVar12 =
                   (long *******)func_0x0eee2ef0(ppppppplVar12,0x2e,(long)ppppppplVar18 + -0xb);
              if (ppppppplVar12 == (long *******)0x0) break;
              if (*(int *)(ppppppplVar12 + 1) == 0x65727574 &&
                  *ppppppplVar12 == (long ******)0x6375727473636d2e) {
                if ((long)ppppppplVar12 - (long)ppppppplVar1 != -1 && ppppppplVar12 != unaff_R14) {
                  if ((auStack_5d8[0] & 1) == 0) {
                    if (((ulong)auVar8 & 1) == 0) {
                      ppppppplStack_5c8 = uStack_3c8;
                      auStack_5d8._8_8_ = ppppppplStack_3d0;
                      auStack_5d8._0_8_ = auStack_3d8;
                    }
                    else {
                      func_0x04885070(auStack_5d8,auStack_598._0_8_,ppppppplVar9);
                    }
                  }
                  else {
                    FUN_04885120(auStack_5d8,ppppppplVar1,unaff_RBP);
                  }
                }
                break;
              }
              ppppppplVar12 = (long *******)((long)ppppppplVar12 + 1);
              ppppppplVar18 = (long *******)((long)unaff_R14 - (long)ppppppplVar12);
              if ((long)ppppppplVar18 < 0xc) break;
            }
          }
          if (((ulong)auStack_3d8 & 1) != 0) {
            func_0x0412a280(uStack_3c8,(ulong)auStack_3d8 & 0xfffffffffffffffe);
          }
          pbVar20 = pbVar20 + 0x18;
        } while (pbVar20 != (byte *)auStack_568._0_8_);
        uVar17 = (uint)auStack_5f8[0];
      }
      uVar15 = (ulong)(uVar17 >> 1);
      if ((uVar17 & 1) != 0) {
        uVar15 = (ulong)ppppppplStack_5f0;
      }
      if (uVar15 != 0) {
        auStack_588 = (undefined1  [16])0x0;
        ppppppplStack_578 = (long *******)0x0;
        auStack_f8 = (undefined1  [16])0x0;
        auStack_108 = (undefined1  [16])0x0;
        auStack_118 = (undefined1  [16])0x0;
        auStack_128 = (undefined1  [16])0x0;
        auStack_138 = (undefined1  [16])0x0;
        auStack_148 = (undefined1  [16])0x0;
        auStack_158 = (undefined1  [16])0x0;
        auStack_168 = (undefined1  [16])0x0;
        auStack_178 = (undefined1  [16])0x0;
        auStack_188 = (undefined1  [16])0x0;
        auStack_198 = (undefined1  [16])0x0;
        auStack_1a8 = (undefined1  [16])0x0;
        auStack_1b8 = (undefined1  [16])0x0;
        uStack_e8 = 0;
        auStack_e4 = SUB1612((undefined1  [16])0x0,0);
        uStack_d8 = 0;
        auStack_d4 = SUB1612((undefined1  [16])0x0,4);
        uStack_c8 = 0xbf800000;
        auStack_c4 = (undefined1  [16])0x0;
        uStack_b4 = 0;
        uStack_b0 = 4;
        uStack_ac = 1;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_40 = 0;
        if (DAT_0f7b8fb8 == '\0') {
          iVar11 = FUN_04108328(&DAT_0f7b8fb8);
          if (iVar11 != 0) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
        }
        bVar23 = (auStack_5f8[0] & 1) == 0;
        ppppppplStack_1d8 = ppppppplStack_5e8;
        if (bVar23) {
          ppppppplStack_1d8 = (long *******)(auStack_5f8 + 1);
        }
        uStack_1d0 = (ulong)(auStack_5f8[0] >> 1);
        if (!bVar23) {
          uStack_1d0 = (ulong)ppppppplStack_5f0;
        }
        cVar10 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&ppppppplStack_1d8);
        if (cVar10 == '\0') {
LAB_0b721b27:
          ppppppplVar1 = ppppppplStack_408;
          func_0x0b6f6770(auStack_3d8,ppppppplStack_408,auStack_588,auStack_1b8);
          if (cStack_1f8 == '\0') {
            pppppplVar2 = ppppppplVar1[3];
            auStack_558 = (undefined1  [16])0x0;
            ppppppplStack_548 = (long *******)0x0;
            ppppppplStack_4c8 = (long *******)auStack_558;
            ppppppplStack_4c0 = (long *******)((ulong)ppppppplStack_4c0 & 0xffffffffffffff00);
            puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (puVar13 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x28,0);
            }
            ppppppplStack_548 = (long *******)(puVar13 + 5);
            puVar13[4] = 0;
            puVar13[1] = 0x7574637572745314;
            puVar13[2] = 0x736572;
            puVar13[3] = 0;
            *puVar13 = 0x158cbbf7ce6f4e7;
            auStack_558._8_8_ = ppppppplStack_548;
            auStack_558._0_8_ = puVar13;
            uStack_478 = auStack_418._8_4_ & 0xffff;
            ppppppplStack_4c8 = (long *******)CONCAT44(ppppppplStack_4c8._4_4_,auStack_418._4_4_);
            uStack_4b8 = (long *******)
                         (CONCAT44(uStack_4b8._4_4_,auStack_418._2_4_) & 0xffffffff0000ffff);
            uStack_4a8 = (long *******)
                         (CONCAT44(uStack_4a8._4_4_,auStack_418._0_4_) & 0xffffffff0000ffff);
            uStack_498 = CONCAT44(uStack_498._4_4_,(uint)auStack_418._14_2_);
            uStack_488 = auStack_418._10_4_;
            func_0x0470d9a0(auStack_5b8,&UNK_01287ba2,0x28,0x122112,&ppppppplStack_4c8);
            plVar14 = (long *)func_0x0412f0e0(auStack_5b8,0,&UNK_013d3bf7,0x26);
            ppppppplStack_4b0 = (long *******)plVar14[2];
            ppppppplStack_4c0 = (long *******)*plVar14;
            uStack_4b8 = (long *******)plVar14[1];
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar14[2] = 0;
            uStack_438 = 0;
            func_0x060aeeb0(pppppplVar2,1,1,auStack_558,&ppppppplStack_4c8,1);
            if ((ulong)uStack_438 != 0xffffffff) {
              (**(code **)(&UNK_0f2d0a38 + (ulong)uStack_438 * 8))(auStack_508,&ppppppplStack_4c0);
            }
            uStack_438 = 0xffffffff;
            if ((auStack_5b8._0_8_ & 1) != 0) {
              func_0x0412a280(ppppppplStack_5a8,auStack_5b8._0_8_ & 0xfffffffffffffffe);
            }
            uVar16 = auStack_558._0_8_;
            if ((long *****)auStack_558._0_8_ != (long *****)0x0) {
              for (ppppplVar22 = (long *****)auStack_558._8_8_; (long *****)uVar16 != ppppplVar22;
                  ppppplVar22 = ppppplVar22 + -5) {
                if (((ulong)ppppplVar22[-4] & 1) != 0) {
                  func_0x0412a280(ppppplVar22[-2],(ulong)ppppplVar22[-4] & 0xfffffffffffffffe);
                }
              }
              auStack_558._8_8_ = uVar16;
              func_0x0412a280(auStack_558._0_8_,(long)ppppppplStack_548 - auStack_558._0_8_);
            }
            unaff_R14 = (long *******)func_0x0412dc70();
            ppppppplStack_548 = _DAT_0f2d0f18;
            ppppppplStack_540 = _UNK_0f2d0f20;
            auStack_558._8_8_ = _UNK_0f2d0f10;
            auStack_558._0_8_ = _DAT_0f2d0f08;
            ppppppplStack_538 = (long *******)((ulong)ppppppplStack_538 & 0xffffffffffffff00);
            cStack_510 = '\0';
            auStack_5b8 = ZEXT816(0);
            ppppppplStack_5a8 = (long *******)0x0;
            func_0x0eee17a0(auStack_5b8,auStack_558,auStack_508,1);
            if ((cStack_510 == '\x01') && (((ulong)ppppppplStack_538 & 1) != 0)) {
              func_0x0412a280(uStack_528,(ulong)ppppppplStack_538 & 0xfffffffffffffffe);
            }
            auStack_598 = ZEXT416(0x26);
            auStack_568 = (undefined1  [16])0x0;
            unaff_R13 = 0;
            bVar6 = false;
            bVar23 = false;
            unaff_RBP = ppppppplStack_5a8;
            ppppppplStack_408 = (long *******)auStack_5b8._0_8_;
            ppppppplStack_400 = (long *******)auStack_5b8._8_8_;
          }
          else {
            if (iStack_200 == 1) {
              if ((auStack_5d8[0] & 1) == 0) {
                uVar15 = (ulong)(auStack_5d8[0] >> 1);
              }
              else {
                uVar15 = auStack_5d8._8_8_;
              }
              if (uVar15 == 0) {
                pppppplVar2 = ppppppplVar1[3];
                func_0x0ee25020(auStack_558,&UNK_012d9366);
                auStack_5b8 = (undefined1  [16])0x0;
                ppppppplStack_5a8 = (long *******)0x0;
                func_0x07288820(auStack_5b8,auStack_558,&uStack_530,1);
                func_0x0eedb7e0(&bStack_3f8,auStack_418);
                func_0x04168460(auStack_508,&UNK_012e6373,&bStack_3f8);
                ppppppplStack_4b0 = ppppppplStack_4f8;
                ppppppplStack_4c0 = (long *******)auStack_508._0_8_;
                uStack_4b8 = (long *******)auStack_508._8_8_;
                auStack_508 = (undefined1  [16])0x0;
                ppppppplStack_4f8 = (long *******)0x0;
                uStack_438 = 0;
                func_0x060aeeb0(pppppplVar2,1,1,auStack_5b8,&ppppppplStack_4c8,1);
                func_0x060af910(&ppppppplStack_4c8);
                if ((auStack_508[0] & 1) == 0) {
                  if ((bStack_3f8 & 1) != 0) goto LAB_0b722804;
LAB_0b722704:
                  func_0x04aa5c60(auStack_5b8);
                }
                else {
                  func_0x0412a280(ppppppplStack_4f8,auStack_508._0_8_ & 0xfffffffffffffffe);
                  if ((bStack_3f8 & 1) == 0) goto LAB_0b722704;
LAB_0b722804:
                  func_0x0412a280(uStack_3e8,CONCAT71(uStack_3f7,bStack_3f8) & 0xfffffffffffffffe);
                  func_0x04aa5c60(auStack_5b8);
                }
                if ((auStack_558[8] & 1) != 0) {
                  func_0x0412a280(ppppppplStack_540,auStack_558._8_8_ & 0xfffffffffffffffe);
                }
                uVar16 = func_0x0412dc70();
                func_0x0b722e40(auStack_558,0x26,uVar16);
                unaff_R13 = uStack_520;
                unaff_RBP = ppppppplStack_538;
                ppppppplStack_408 = ppppppplStack_548;
                ppppppplStack_400 = ppppppplStack_540;
                ppppppplStack_548 = (long *******)0x0;
                ppppppplStack_540 = (long *******)0x0;
                ppppppplStack_538 = (long *******)0x0;
                auStack_568._8_4_ = (undefined4)uStack_528;
                auStack_568._0_8_ = uStack_530;
                auStack_568._12_4_ = uStack_528._4_4_;
                uStack_530 = 0;
                uStack_528 = 0;
                uStack_520 = 0;
                auStack_598._8_8_ = 0;
                auStack_598._0_8_ = auStack_558._0_8_;
                unaff_R14 = (long *******)auStack_558._8_8_;
                func_0x048e6d60(auStack_558);
                bVar6 = false;
                bVar23 = false;
                goto joined_r0x0b7227d2;
              }
              func_0x0b6f5f10(&ppppppplStack_4c8,ppppppplVar1,auStack_1b8,auStack_3d8);
            }
            else {
              func_0x0b6f5f10(&ppppppplStack_4c8,ppppppplVar1,auStack_1b8,auStack_3d8);
            }
            bVar6 = true;
            bVar23 = true;
          }
joined_r0x0b7227d2:
          if ((cStack_1f8 == '\x01') && (bVar23 = bVar6, (ulong)uStack_208 != 0xffffffff)) {
            (**(code **)(&UNK_0f2d0d08 + (ulong)uStack_208 * 8))(auStack_5b8,auStack_3d8);
          }
          func_0x05ed96b0(auStack_1b8);
          if ((auStack_588[0] & 1) == 0) {
            if ((auStack_5f8[0] & 1) != 0) goto LAB_0b722587;
LAB_0b722467:
            if ((auStack_5d8[0] & 1) != 0) goto LAB_0b7225a4;
LAB_0b722472:
          }
          else {
            func_0x0412a280(ppppppplStack_578,auStack_588._0_8_ & 0xfffffffffffffffe);
            if ((auStack_5f8[0] & 1) == 0) goto LAB_0b722467;
LAB_0b722587:
            func_0x0412a280(ppppppplStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
            if ((auStack_5d8[0] & 1) == 0) goto LAB_0b722472;
LAB_0b7225a4:
            func_0x0412a280(ppppppplStack_5c8,auStack_5d8._0_8_ & 0xfffffffffffffffe);
          }
          if (bVar23) goto LAB_0b722482;
          ppppppplStack_428 = ppppppplStack_408;
          ppppppplStack_420 = ppppppplStack_400;
        }
        else {
          if (DAT_0f7b8fb8 == '\0') {
            iVar11 = FUN_04108328(&DAT_0f7b8fb8);
            if (iVar11 != 0) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
            }
          }
          bVar23 = (auStack_5f8[0] & 1) != 0;
          ppppppplStack_1e8 = (long *******)(auStack_5f8 + 1);
          if (bVar23) {
            ppppppplStack_1e8 = ppppppplStack_5e8;
          }
          uStack_1e0 = (ulong)(auStack_5f8[0] >> 1);
          if (bVar23) {
            uStack_1e0 = (ulong)ppppppplStack_5f0;
          }
          (**(code **)(_DAT_0f7b8f98 + 0x60))(&ppppppplStack_4c8,&DAT_0f7b8f98,&ppppppplStack_1e8);
          ppppppplVar12 = uStack_4b8;
          ppppppplVar9 = ppppppplStack_4c0;
          ppppppplVar1 = ppppppplStack_4c8;
          uStack_398 = CONCAT31(uStack_398._1_3_,(char)uStack_488);
          if ((char)uStack_488 == '\0') {
            auStack_3d8 = (undefined1  [8])ppppppplStack_4c8;
            ppppppplStack_3d0 = ppppppplStack_4c0;
            uStack_3c8 = uStack_4b8;
            ppppppplStack_3c0 = ppppppplStack_4b0;
            uStack_3b8 = uStack_4a8;
            ppppppplStack_3b0 = (long *******)uStack_4a0;
            uStack_3a8 = (long *******)uStack_498;
            uStack_3a0 = uStack_490;
            func_0x0b722cc0(auStack_3d8);
            unaff_R13 = uStack_3a0;
            unaff_RBP = uStack_3b8;
            unaff_R14 = ppppppplStack_3d0;
            ppppppplStack_4c8 = (long *******)auStack_3d8;
            ppppppplStack_4c0 = ppppppplStack_3d0;
            ppppppplStack_428 = uStack_3c8;
            ppppppplStack_420 = ppppppplStack_3c0;
            uStack_3c8 = (long *******)0x0;
            ppppppplStack_3c0 = (long *******)0x0;
            uStack_3b8 = (long *******)0x0;
            auStack_568._8_4_ = (undefined4)uStack_3a8;
            auStack_568._0_8_ = ppppppplStack_3b0;
            auStack_568._12_4_ = uStack_3a8._4_4_;
            ppppppplStack_3b0 = (long *******)0x0;
            uStack_3a8 = (long *******)0x0;
            uStack_3a0 = 0;
            uStack_4b8 = (long *******)0x0;
            ppppppplStack_4b0 = (long *******)0x0;
            uStack_4a8 = (long *******)0x0;
            uStack_4a0 = 0;
            uStack_498 = 0;
            uStack_490 = 0;
            auStack_598._8_8_ = 0;
            auStack_598._0_8_ = auStack_3d8;
            func_0x048e6d60(&ppppppplStack_4c8);
            func_0x0646d340(auStack_3d8);
          }
          else {
            uStack_3c8 = uStack_4b8;
            auStack_3d8 = (undefined1  [8])ppppppplStack_4c8;
            ppppppplStack_3d0 = ppppppplStack_4c0;
            ppppppplVar18 = (long *******)(ulong)((uint)((ulong)ppppppplStack_4c8 >> 1) & 0x7f);
            if (((ulong)ppppppplStack_4c8 & 1) != 0) {
              ppppppplVar18 = ppppppplStack_4c0;
            }
            if (ppppppplVar18 != (long *******)0x0) {
              if ((auStack_588[0] & 1) != 0) {
                func_0x0412a280(ppppppplStack_578,auStack_588._0_8_ & 0xfffffffffffffffe);
              }
              auStack_588._8_8_ = ppppppplVar9;
              auStack_588._0_8_ = ppppppplVar1;
              ppppppplStack_578 = ppppppplVar12;
              goto LAB_0b721b27;
            }
            uVar16 = func_0x0412dc70();
            func_0x0b722d80(&ppppppplStack_4c8,0x16,uVar16);
            unaff_R13 = uStack_490;
            unaff_RBP = uStack_4a8;
            unaff_R14 = ppppppplStack_4c0;
            ppppppplStack_428 = uStack_4b8;
            ppppppplStack_420 = ppppppplStack_4b0;
            uStack_4b8 = (long *******)0x0;
            ppppppplStack_4b0 = (long *******)0x0;
            uStack_4a8 = (long *******)0x0;
            auStack_568._8_4_ = (undefined4)uStack_498;
            auStack_568._0_8_ = uStack_4a0;
            auStack_568._12_4_ = uStack_498._4_4_;
            uStack_4a0 = 0;
            uStack_498 = 0;
            uStack_490 = 0;
            auStack_598._8_8_ = 0;
            auStack_598._0_8_ = ppppppplStack_4c8;
            func_0x048e6d60(&ppppppplStack_4c8);
            if (((ulong)ppppppplVar1 & 1) != 0) {
              func_0x0412a280(ppppppplVar12,(ulong)ppppppplVar1 & 0xfffffffffffffffe);
            }
          }
          func_0x05ed96b0(auStack_1b8);
          if ((auStack_588[0] & 1) == 0) {
            if ((auStack_5f8[0] & 1) != 0) goto LAB_0b7223c4;
LAB_0b72213b:
          }
          else {
            func_0x0412a280(ppppppplStack_578,auStack_588._0_8_ & 0xfffffffffffffffe);
            if ((auStack_5f8[0] & 1) == 0) goto LAB_0b72213b;
LAB_0b7223c4:
            func_0x0412a280(ppppppplStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
          }
          if ((auStack_5d8[0] & 1) != 0) {
            func_0x0412a280(ppppppplStack_5c8,auStack_5d8._0_8_ & 0xfffffffffffffffe);
          }
        }
        cVar19 = '\0';
        cVar10 = '\0';
        auVar24 = auStack_598;
        pbVar7 = pbStack_4e8;
        pbVar20 = pbStack_4e0;
        goto joined_r0x0b72249e;
      }
      pppppplVar2 = ppppppplStack_408[3];
      auStack_1b8 = (undefined1  [16])0x0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_1a8._8_8_;
      auStack_1a8 = auVar4 << 0x40;
      auStack_3d8 = (undefined1  [8])auStack_1b8;
      ppppppplStack_3d0 = (long *******)((ulong)ppppppplStack_3d0 & 0xffffffffffffff00);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      auStack_1a8._0_8_ = puVar13 + 5;
      puVar13[4] = 0;
      puVar13[1] = 0x7574637572745314;
      puVar13[2] = 0x736572;
      puVar13[3] = 0;
      *puVar13 = 0x158cbbf7ce6f4e7;
      auStack_1b8._8_8_ = puVar13 + 5;
      auStack_1b8._0_8_ = puVar13;
      auStack_388[0] = auStack_418._8_4_ & 0xffff;
      auStack_3d8._0_4_ = auStack_418._4_4_;
      uStack_3c8 = (long *******)(CONCAT44(uStack_3c8._4_4_,auStack_418._2_4_) & 0xffffffff0000ffff)
      ;
      uStack_3b8 = (long *******)(CONCAT44(uStack_3b8._4_4_,auStack_418._0_4_) & 0xffffffff0000ffff)
      ;
      uStack_3a8 = (long *******)CONCAT44(uStack_3a8._4_4_,(uint)auStack_418._14_2_);
      uStack_398 = auStack_418._10_4_;
      func_0x0470d9a0(&ppppppplStack_4c8,&UNK_01287ba2,0x28,0x122112,auStack_3d8);
      plVar14 = (long *)func_0x0412f0e0(&ppppppplStack_4c8,0,&UNK_011c7a2e,0x4e);
      ppppppplStack_3c0 = (long *******)plVar14[2];
      ppppppplStack_3d0 = (long *******)*plVar14;
      uStack_3c8 = (long *******)plVar14[1];
      *plVar14 = 0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      uStack_348 = 0;
      func_0x060aeeb0(pppppplVar2,1,1,auStack_1b8,auStack_3d8,1);
      if ((ulong)uStack_348 != 0xffffffff) {
        (**(code **)(&UNK_0f2d0a38 + (ulong)uStack_348 * 8))(auStack_558,&ppppppplStack_3d0);
      }
      uStack_348 = 0xffffffff;
      if (((ulong)ppppppplStack_4c8 & 1) != 0) {
        func_0x0412a280(uStack_4b8,(ulong)ppppppplStack_4c8 & 0xfffffffffffffffe);
      }
      uVar16 = auStack_1b8._0_8_;
      if (auStack_1b8._0_8_ != 0) {
        for (lVar21 = auStack_1b8._8_8_; uVar16 != lVar21; lVar21 = lVar21 + -0x28) {
          if ((*(byte *)(lVar21 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar21 + -0x10),
                            *(ulong *)(lVar21 + -0x20) & 0xfffffffffffffffe);
          }
        }
        auStack_1b8._8_8_ = uVar16;
        func_0x0412a280(auStack_1b8._0_8_,auStack_1a8._0_8_ - auStack_1b8._0_8_);
      }
      unaff_R14 = (long *******)func_0x0412dc70();
      auStack_1a8._8_8_ = _UNK_0f2d0ec0;
      auStack_1a8._0_8_ = _DAT_0f2d0eb8;
      auStack_1b8._8_8_ = _UNK_0f2d0eb0;
      auStack_1b8._0_8_ = _DAT_0f2d0ea8;
      auVar5[0xf] = 0;
      auVar5._0_15_ = auStack_198._1_15_;
      auStack_198 = auVar5 << 8;
      auStack_178[8] = 0;
      ppppppplStack_4c8 = (long *******)0x0;
      ppppppplStack_4c0 = (long *******)0x0;
      uStack_4b8 = (long *******)0x0;
      func_0x0eee17a0(&ppppppplStack_4c8,auStack_1b8,auStack_168,1);
      if ((auStack_178[8] == '\x01') && ((auStack_198[0] & 1) != 0)) {
        func_0x0412a280(auStack_188._0_8_,auStack_198._0_8_ & 0xfffffffffffffffe);
      }
      unaff_RBP = uStack_4b8;
      ppppppplStack_428 = ppppppplStack_4c8;
      ppppppplStack_420 = ppppppplStack_4c0;
      if ((auStack_5f8[0] & 1) != 0) {
        func_0x0412a280(ppppppplStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
      }
      if ((auStack_5d8[0] & 1) != 0) {
        func_0x0412a280(ppppppplStack_5c8,auStack_5d8._0_8_ & 0xfffffffffffffffe);
      }
    }
    auVar24 = ZEXT416(0x26);
    auStack_598._0_8_ = 0x26;
    cVar19 = '\0';
    cVar10 = '\0';
  }
  else {
LAB_0b722482:
    auVar24 = (undefined1  [16])0x0;
    auStack_598._0_8_ = 0;
    cVar19 = '\x01';
    cVar10 = '\x01';
    unaff_R14 = (long *******)0x0;
    unaff_RBP = (long *******)0x0;
  }
  unaff_R13 = 0;
  auStack_568._12_4_ = 0;
  auStack_568._8_4_ = 0;
  auStack_568._4_4_ = 0;
  auStack_568._0_4_ = 0;
  pbVar7 = pbStack_4e8;
  pbVar20 = pbStack_4e0;
joined_r0x0b72249e:
  if (pbVar7 != (byte *)0x0) {
    auStack_598 = auVar24;
    pbStack_4e8 = pbVar7;
    pbStack_4e0 = pbVar20;
    for (; pbVar7 != pbVar20; pbVar20 = pbVar20 + -0x18) {
      if ((pbVar20[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar20 + -8),
                        *(ulong *)(pbVar20 + -0x18) & 0xfffffffffffffffe);
      }
    }
    pbStack_4e0 = pbVar7;
    func_0x0412a280(pbStack_4e8,lStack_4d8 - (long)pbStack_4e8);
    cVar10 = cVar19;
  }
  *(char *)(puStack_3e0 + 8) = cVar10;
  if (cVar10 == '\0') {
    *puStack_3e0 = auStack_598._0_8_;
    puStack_3e0[1] = unaff_R14;
    puStack_3e0[2] = ppppppplStack_428;
    puStack_3e0[3] = ppppppplStack_420;
    puStack_3e0[4] = unaff_RBP;
    *(undefined4 *)(puStack_3e0 + 5) = auStack_568._0_4_;
    *(undefined4 *)((long)puStack_3e0 + 0x2c) = auStack_568._4_4_;
    *(undefined4 *)(puStack_3e0 + 6) = auStack_568._8_4_;
    *(undefined4 *)((long)puStack_3e0 + 0x34) = auStack_568._12_4_;
    puStack_3e0[7] = unaff_R13;
  }
  return;
}


