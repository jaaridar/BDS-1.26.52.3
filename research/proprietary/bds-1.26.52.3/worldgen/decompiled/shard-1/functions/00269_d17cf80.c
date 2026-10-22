/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd27cf80 (ELF vaddr 0xd17cf80)
 * Label: callee-of:0xc95fb20
 * Body:  [[0412d6b0, 0412d6b4] [0d27cf80, 0d27d289] [0d27d290, 0d27d5cc] [0d27d5d0, 0d27d606] [0d27d610, 0d27d7a8] [0d27d7b0, 0d27da06] [0d27da10, 0d27db1a] [0eee2d60, 0eee2d65]]
 * Ghidra: FUN_0d27cf80
 */


/* WARNING: Possible PIC construction at 0x0d27cfb7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d27cfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d27daec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d27cfdd) */
/* WARNING: Removing unreachable block (ram,0x0d27cfbc) */
/* WARNING: Removing unreachable block (ram,0x0d27cfd5) */
/* WARNING: Removing unreachable block (ram,0x0d27daf1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d27cf80(long *param_1,long param_2)

{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined2 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar13 = param_1 + 0xd;
  lVar1 = param_2 + 0x68;
  func_0x0412d680(plVar13);
  cVar9 = func_0x0412d6a0(lVar1);
  if (cVar9 != '\0') {
    lVar3 = param_1[0x2b];
    param_1[0x2b] = *(long *)(param_2 + 0x158);
    *(long *)(param_2 + 0x158) = lVar3;
    lVar3 = param_1[7];
    param_1[7] = 0;
    lVar12 = *(long *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    lVar4 = param_1[7];
    param_1[7] = lVar12;
    plStack_a0 = plVar13;
    if (lVar4 != 0) {
      func_0x0412a280(lVar4,param_1[8] << 3);
    }
    lVar12 = *(long *)(param_2 + 0x38);
    *(long *)(param_2 + 0x38) = lVar3;
    if (lVar12 != 0) {
      func_0x0412a280(lVar12,*(long *)(param_2 + 0x40) << 3);
    }
    lVar3 = param_1[8];
    param_1[8] = *(long *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = lVar3;
    lVar3 = param_1[9];
    param_1[9] = *(long *)(param_2 + 0x48);
    *(long *)(param_2 + 0x48) = lVar3;
    lVar3 = param_1[10];
    param_1[10] = *(long *)(param_2 + 0x50);
    *(long *)(param_2 + 0x50) = lVar3;
    lVar12 = param_1[0xb];
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
    *(int *)(param_2 + 0x58) = (int)lVar12;
    if (param_1[10] != 0) {
      uVar11 = param_1[8];
      uVar10 = *(ulong *)(param_1[9] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        if ((uVar10 | uVar11) >> 0x20 == 0) {
          uVar10 = (uVar10 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar10 = uVar10 % uVar11;
        }
      }
      *(long **)(param_1[7] + uVar10 * 8) = param_1 + 9;
    }
    if (lVar3 != 0) {
      uVar11 = *(ulong *)(param_2 + 0x40);
      uVar10 = *(ulong *)(*(long *)(param_2 + 0x48) + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        if ((uVar10 | uVar11) >> 0x20 == 0) {
          uVar10 = (uVar10 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar10 = uVar10 % uVar11;
        }
      }
      *(long *)(*(long *)(param_2 + 0x38) + uVar10 * 8) = param_2 + 0x48;
    }
    uStack_118 = (undefined *)*param_1;
    plStack_110 = (long *)param_1[1];
    plStack_108 = (long *)param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lStack_100 = param_1[3];
    lStack_f8 = param_1[4];
    lStack_f0 = param_1[5];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lStack_e8 = CONCAT44(lStack_e8._4_4_,(int)param_1[6]);
    func_0x0d2984c0(param_1,param_2);
    func_0x0d2984c0(param_2,&uStack_118);
    lVar12 = lStack_100;
    lVar3 = lStack_f8;
    if (lStack_100 != 0) {
      for (; lVar12 != lVar3; lVar3 = lVar3 + -0x18) {
        lVar4 = *(long *)(lVar3 + -8);
        *(undefined8 *)(lVar3 + -8) = 0;
        if (lVar4 != 0) {
          func_0x0ca74450(lVar4);
          func_0x0412a280(lVar4,0x70);
        }
      }
      func_0x0412a280(lVar12,lStack_f0 - lVar12);
    }
    if (uStack_118 != (undefined *)0x0) {
      func_0x0412a280(uStack_118,(long)plStack_108 - (long)uStack_118);
    }
    uStack_118 = (undefined *)param_1[0x26];
    param_1[0x26] = 0;
    plStack_110 = (long *)param_1[0x27];
    param_1[0x27] = 0;
    plStack_108 = (long *)param_1[0x28];
    lStack_100 = param_1[0x29];
    lStack_f8 = CONCAT44(lStack_f8._4_4_,(int)param_1[0x2a]);
    if (lStack_100 != 0) {
      uVar11 = plStack_108[1];
      if (((ulong)plStack_110 & (long)plStack_110 - 1U) == 0) {
        uVar11 = uVar11 & (long)plStack_110 - 1U;
      }
      else if (plStack_110 <= uVar11) {
        if ((uVar11 | (ulong)plStack_110) >> 0x20 == 0) {
          uVar11 = (uVar11 & 0xffffffff) % ((ulong)plStack_110 & 0xffffffff);
        }
        else {
          uVar11 = uVar11 % (ulong)plStack_110;
        }
      }
      *(long ***)((long)uStack_118 + uVar11 * 8) = &plStack_108;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
    }
    func_0x0d294ef0(param_1 + 0x26,param_2 + 0x130);
    func_0x0d294ef0(param_2 + 0x130,&uStack_118);
    lVar3 = (long)uStack_118;
    plVar13 = plStack_108;
    while (plVar13 != (long *)0x0) {
      plVar5 = (long *)*plVar13;
      uStack_118 = (undefined *)lVar3;
      if ((*(byte *)(plVar13 + 2) & 1) != 0) {
        func_0x0412a280(plVar13[4],plVar13[2] & 0xfffffffffffffffe);
      }
      func_0x0412a280(plVar13,0x30);
      lVar3 = (long)uStack_118;
      plVar13 = plVar5;
    }
    uStack_118 = (undefined *)0x0;
    if (lVar3 != 0) {
      func_0x0412a280(lVar3,(long)plStack_110 << 3);
    }
    lStack_100 = param_1[0x1b];
    lStack_f8 = param_1[0x1c];
    lStack_f0 = param_1[0x1d];
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    lStack_e8 = param_1[0x1e];
    lStack_e0 = param_1[0x1f];
    lStack_d8 = param_1[0x20];
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    lVar12 = param_1[0x21];
    lVar3 = param_1[0x22];
    lStack_c0 = param_1[0x23];
    lStack_b8 = param_1[0x24];
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    lVar4 = param_1[0x25];
    uStack_118 = &UNK_0f534768;
    uStack_d0 = (int)lVar12;
    lStack_c8 = lVar3;
    uStack_b0 = (short)lVar4;
    lStack_78 = lStack_d8;
    lStack_70 = lStack_f0;
    lStack_68 = lStack_e0;
    lStack_60 = lStack_f8;
    lStack_58 = lStack_e8;
    lStack_50 = lStack_100;
    lStack_48 = lStack_b8;
    lStack_40 = lStack_c0;
    uStack_98 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (uStack_98 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uStack_98[1] = 0;
    uStack_98[2] = 0;
    *uStack_98 = (long)&UNK_0ef44a60;
    plStack_110 = uStack_98 + 3;
    *(undefined1 *)(uStack_98 + 3) = 1;
    uStack_118 = &UNK_0ef471f0;
    lVar15 = param_1[0x1b];
    plStack_108 = uStack_98;
    lStack_a8 = lVar1;
    plStack_80 = plStack_110;
    if (lVar15 != 0) {
      param_1[0x1c] = lVar15;
      func_0x0412a280(lVar15,param_1[0x1d] - lVar15);
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
    }
    uVar6 = *(undefined4 *)(param_2 + 0xdc);
    uVar7 = *(undefined4 *)(param_2 + 0xe0);
    uVar8 = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)((long)param_1 + 0xdc) = uVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    *(undefined4 *)((long)param_1 + 0xe4) = uVar8;
    param_1[0x1d] = *(long *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    puStack_88 = (undefined8 *)(param_2 + 0xd8);
    func_0x0d2985d0(param_1 + 0x1e);
    lVar1 = *(long *)(param_2 + 0xf8);
    param_1[0x1e] = *(long *)(param_2 + 0xf0);
    param_1[0x1f] = lVar1;
    param_1[0x20] = *(long *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x108);
    lVar1 = param_1[0x22];
    if (lVar1 != 0) {
      lVar15 = param_1[0x23];
      lVar14 = lVar1;
      if (lVar1 != lVar15) {
        do {
          if ((*(byte *)(lVar15 + -0x38) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar15 + -0x28),
                            *(ulong *)(lVar15 + -0x38) & 0xfffffffffffffffe);
          }
          lVar15 = lVar15 + -0x38;
        } while (lVar15 != lVar1);
        lVar14 = param_1[0x22];
      }
      param_1[0x23] = lVar1;
      func_0x0412a280(lVar14,param_1[0x24] - lVar14);
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0;
    }
    lVar1 = *(long *)(param_2 + 0x118);
    param_1[0x22] = *(long *)(param_2 + 0x110);
    param_1[0x23] = lVar1;
    param_1[0x24] = *(long *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined2 *)(param_1 + 0x25) = *(undefined2 *)(param_2 + 0x128);
    lVar1 = *(long *)(param_2 + 0xd8);
    if (lVar1 != 0) {
      *(long *)(param_2 + 0xe0) = lVar1;
      func_0x0412a280(lVar1,*(long *)(param_2 + 0xe8) - lVar1);
      *puStack_88 = 0;
      puStack_88[1] = 0;
      puStack_88[2] = 0;
    }
    plVar13 = uStack_98 + 1;
    *(long *)(param_2 + 0xd8) = lStack_50;
    *(long *)(param_2 + 0xe0) = lStack_60;
    *(long *)(param_2 + 0xe8) = lStack_70;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    func_0x0d2985d0(param_2 + 0xf0);
    *(long *)(param_2 + 0xf0) = lStack_58;
    *(long *)(param_2 + 0xf8) = lStack_68;
    *(long *)(param_2 + 0x100) = lStack_78;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    *(int *)(param_2 + 0x108) = (int)lVar12;
    lVar1 = *(long *)(param_2 + 0x110);
    if (lVar1 != 0) {
      lVar12 = *(long *)(param_2 + 0x118);
      lVar15 = lVar1;
      if (lVar1 != lVar12) {
        do {
          if ((*(byte *)(lVar12 + -0x38) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar12 + -0x28),
                            *(ulong *)(lVar12 + -0x38) & 0xfffffffffffffffe);
          }
          lVar12 = lVar12 + -0x38;
        } while (lVar12 != lVar1);
        lVar15 = *(long *)(param_2 + 0x110);
      }
      *(long *)(param_2 + 0x118) = lVar1;
      func_0x0412a280(lVar15,*(long *)(param_2 + 0x120) - lVar15);
      *(long *)(param_2 + 0x110) = 0;
      *(undefined8 *)(param_2 + 0x118) = 0;
      *(undefined8 *)(param_2 + 0x120) = 0;
    }
    plVar5 = uStack_98;
    *(long *)(param_2 + 0x110) = lVar3;
    *(long *)(param_2 + 0x118) = lStack_40;
    *(long *)(param_2 + 0x120) = lStack_48;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    *(short *)(param_2 + 0x128) = (short)lVar4;
    uStack_118 = &UNK_0f534768;
    *(undefined1 *)plStack_80 = 0;
    LOCK();
    lVar1 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_98 + 0x10))(uStack_98);
      func_0x0412c2d0(plVar5);
    }
    lVar3 = lStack_c8;
    lVar1 = lStack_c0;
    if (lStack_c8 != 0) {
      for (; lVar3 != lVar1; lVar1 = lVar1 + -0x38) {
        if ((*(byte *)(lVar1 + -0x38) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar1 + -0x28),
                          *(ulong *)(lVar1 + -0x38) & 0xfffffffffffffffe);
        }
      }
      lStack_c0 = lVar3;
      func_0x0412a280(lVar3,lStack_b8 - lVar3);
    }
    plStack_38 = &lStack_e8;
    func_0x048b0f50(&plStack_38);
    if (lStack_100 != 0) {
      lStack_f8 = lStack_100;
      func_0x0412a280(lStack_100,lStack_f0 - lStack_100);
    }
    lVar1 = param_1[0x12];
    lVar3 = param_1[0x13];
    lVar12 = param_1[0x14];
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    uStack_98 = (long *)param_1[0x15];
    uStack_90 = (undefined4)param_1[0x16];
    uStack_8c = *(undefined4 *)((long)param_1 + 0xb4);
    lVar4 = param_1[0x17];
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    uVar6 = *(undefined4 *)(param_2 + 0x94);
    uVar7 = *(undefined4 *)(param_2 + 0x98);
    uVar8 = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((long)param_1 + 0x94) = uVar6;
    *(undefined4 *)(param_1 + 0x13) = uVar7;
    *(undefined4 *)((long)param_1 + 0x9c) = uVar8;
    param_1[0x14] = *(long *)(param_2 + 0xa0);
    *(undefined2 *)(param_2 + 0x90) = 0;
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      func_0x0412a280(param_1[0x17],param_1[0x15] & 0xfffffffffffffffe);
    }
    param_1[0x17] = *(long *)(param_2 + 0xb8);
    uVar6 = *(undefined4 *)(param_2 + 0xac);
    uVar7 = *(undefined4 *)(param_2 + 0xb0);
    uVar8 = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)((long)param_1 + 0xac) = uVar6;
    *(undefined4 *)(param_1 + 0x16) = uVar7;
    *(undefined4 *)((long)param_1 + 0xb4) = uVar8;
    *(undefined2 *)(param_2 + 0xa8) = 0;
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
      *(long *)(param_2 + 0x90) = lVar1;
      *(long *)(param_2 + 0x98) = lVar3;
      *(long *)(param_2 + 0xa0) = lVar12;
    }
    else {
      func_0x0412a280(*(undefined8 *)(param_2 + 0xa0),
                      *(ulong *)(param_2 + 0x90) & 0xfffffffffffffffe);
      *(long *)(param_2 + 0x90) = lVar1;
      *(long *)(param_2 + 0x98) = lVar3;
      *(long *)(param_2 + 0xa0) = lVar12;
      if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(param_2 + 0xb8),
                        *(ulong *)(param_2 + 0xa8) & 0xfffffffffffffffe);
      }
    }
    *(undefined4 *)(param_2 + 0xa8) = (undefined4)uStack_98;
    *(undefined4 *)(param_2 + 0xac) = uStack_98._4_4_;
    *(undefined4 *)(param_2 + 0xb0) = uStack_90;
    *(undefined4 *)(param_2 + 0xb4) = uStack_8c;
    *(long *)(param_2 + 0xb8) = lVar4;
    uVar2 = *(undefined2 *)((long)param_1 + 100);
    lVar1 = param_1[0xc];
    uStack_118 = (undefined *)CONCAT44(CONCAT22(uStack_118._6_2_,uVar2),(int)lVar1);
    *(undefined2 *)((long)param_1 + 100) = *(undefined2 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
    *(undefined2 *)(param_2 + 100) = uVar2;
    *(int *)(param_2 + 0x60) = (int)lVar1;
    plVar13 = plStack_a0;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(plVar13);
  return;
}


