/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3b0940 (ELF vaddr 0xd2b0940)
 * Label: callee-of:0xce091b0
 * Body:  [[0d3b0940, 0d3b0e30] [0d3b0e40, 0d3b0e60] [0d3b0e70, 0d3b10fb]]
 * Ghidra: FUN_0d3b0940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3b0940(byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 uStack_181;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined4 uStack_a7;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  undefined8 uStack_98;
  byte bStack_90;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined4 uStack_87;
  undefined4 uStack_83;
  undefined2 uStack_7f;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  byte bStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  byte bStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 uStack_50;
  byte bStack_48;
  undefined4 uStack_47;
  undefined1 uStack_43;
  undefined2 uStack_42;
  undefined8 uStack_38;
  
  bStack_48 = 8;
  uStack_47 = 0x656d616e;
  uStack_43 = 0;
  if ((*param_1 & 1) == 0) {
    uStack_e8 = *(undefined8 *)(param_1 + 0x10);
    uStack_f8 = *(undefined8 *)param_1;
    uStack_f0 = *(undefined8 *)(param_1 + 8);
  }
  else {
    func_0x0412e5e0(&uStack_f8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  }
  param_2 = param_2 + 8;
  pbStack_180 = &bStack_48;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  uVar6 = uStack_e8;
  uVar2 = (undefined4)uStack_f8;
  uVar3 = uStack_f8._4_4_;
  uVar4 = (undefined4)uStack_f0;
  uVar5 = uStack_f0._4_4_;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar5;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  *(undefined4 *)(lVar7 + 0x60) = 8;
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(uStack_38,
                    CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,bStack_48))) &
                    0xfffffffffffffffe);
  }
  bStack_a8 = 0xc;
  uStack_a7 = 0x67726174;
  uStack_a3 = 0x7465;
  uStack_a1 = 0;
  if ((param_1[0x18] & 1) == 0) {
    uStack_108 = *(undefined8 *)(param_1 + 0x28);
    uStack_118 = *(undefined8 *)(param_1 + 0x18);
    uStack_110 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    func_0x0412e5e0(&uStack_118,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  pbStack_180 = &bStack_a8;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  uVar6 = uStack_108;
  uVar2 = (undefined4)uStack_118;
  uVar3 = uStack_118._4_4_;
  uVar4 = (undefined4)uStack_110;
  uVar5 = uStack_110._4_4_;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar5;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  *(undefined4 *)(lVar7 + 0x60) = 8;
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,
                    CONCAT17(uStack_a1,CONCAT25(uStack_a3,CONCAT41(uStack_a7,bStack_a8))) &
                    0xfffffffffffffffe);
  }
  bStack_c0 = 0x16;
  uStack_bf = 0x5f746567726174;
  uStack_b8 = 0x6c6f6f70;
  uStack_b4 = 0;
  if ((param_1[0x30] & 1) == 0) {
    uStack_128 = *(undefined8 *)(param_1 + 0x40);
    uStack_138 = *(undefined8 *)(param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    func_0x0412e5e0(&uStack_138,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
  }
  pbStack_180 = &bStack_c0;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  uVar6 = uStack_128;
  uVar2 = (undefined4)uStack_138;
  uVar3 = uStack_138._4_4_;
  uVar4 = (undefined4)uStack_130;
  uVar5 = uStack_130._4_4_;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar5;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  *(undefined4 *)(lVar7 + 0x60) = 8;
  if ((bStack_c0 & 1) != 0) {
    func_0x0412a280(uStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
  }
  bStack_d8 = 0x16;
  uStack_d7 = 0x735f6c616e6966;
  uStack_d0 = 0x65746174;
  uStack_cc = 0;
  if ((param_1[0x48] & 1) == 0) {
    uStack_148 = *(undefined8 *)(param_1 + 0x58);
    uStack_158 = *(undefined8 *)(param_1 + 0x48);
    uStack_150 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    func_0x0412e5e0(&uStack_158,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
  }
  pbStack_180 = &bStack_d8;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  uVar6 = uStack_148;
  uVar2 = (undefined4)uStack_158;
  uVar3 = uStack_158._4_4_;
  uVar4 = (undefined4)uStack_150;
  uVar5 = uStack_150._4_4_;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar5;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  *(undefined4 *)(lVar7 + 0x60) = 8;
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
  }
  bStack_60 = 10;
  uStack_5f = 0x6e696f6a;
  uStack_5b = 0x74;
  pbVar9 = &UNK_01e79d90;
  if (_DAT_0f71ff00 != 0) {
    bVar1 = param_1[0x60];
    uVar11 = (ulong)bVar1;
    uVar8 = _DAT_0f71ff00 - (_DAT_0f71ff00 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar8 >> 0x38 < 2) {
      uVar10 = (ulong)((uint)bVar1 & (int)_DAT_0f71ff00 - 1U);
    }
    else {
      uVar10 = uVar11;
      if (_DAT_0f71ff00 <= uVar11) {
        uVar10 = (ulong)(byte)(bVar1 % (byte)_DAT_0f71ff00);
      }
    }
    plVar12 = *(long **)(_DAT_0f71fef8 + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if ((byte)(uVar8 >> 0x38) < 2) {
        do {
          if (plVar12[1] == uVar11) {
            if (*(uint *)(plVar12 + 2) == (uint)bVar1) goto LAB_0d3b0eb4;
          }
          else if ((plVar12[1] & _DAT_0f71ff00 - 1) != uVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == uVar11) {
            if (*(uint *)(plVar12 + 2) == (uint)bVar1) goto LAB_0d3b0eb4;
          }
          else {
            if (_DAT_0f71ff00 <= uVar8) {
              if ((uVar8 | _DAT_0f71ff00) >> 0x20 == 0) {
                if ((uVar8 & 0xffffffff) % (_DAT_0f71ff00 & 0xffffffff) == uVar10)
                goto LAB_0d3b0e76;
                break;
              }
              uVar8 = uVar8 % _DAT_0f71ff00;
            }
            if (uVar8 != uVar10) break;
          }
LAB_0d3b0e76:
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_0d3b0ebb:
  if ((*pbVar9 & 1) == 0) {
    uStack_168 = *(undefined8 *)(pbVar9 + 0x10);
    uStack_178 = *(undefined8 *)pbVar9;
    uStack_170 = *(undefined8 *)(pbVar9 + 8);
  }
  else {
    func_0x0412e5e0(&uStack_178,*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
  }
  pbStack_180 = &bStack_60;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  uVar6 = uStack_168;
  uVar2 = (undefined4)uStack_178;
  uVar3 = uStack_178._4_4_;
  uVar4 = (undefined4)uStack_170;
  uVar5 = uStack_170._4_4_;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined4 *)(lVar7 + 0x4c) = uVar5;
  *(undefined8 *)(lVar7 + 0x50) = uVar6;
  *(undefined4 *)(lVar7 + 0x60) = 8;
  if ((bStack_60 & 1) != 0) {
    func_0x0412a280(uStack_50,
                    CONCAT17(uStack_59,CONCAT25(uStack_5b,CONCAT41(uStack_5f,bStack_60))) &
                    0xfffffffffffffffe);
  }
  bStack_78 = 0x24;
  uStack_77 = _DAT_01250538;
  uStack_73 = _UNK_0125053c;
  uStack_6f = _UNK_01250540;
  uStack_6b = _UNK_01250544;
  uStack_67 = 0x7974;
  uStack_65 = 0;
  uVar2 = *(undefined4 *)(param_1 + 100);
  pbStack_180 = &bStack_78;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x60) = 3;
  if ((bStack_78 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,uStack_6b._3_1_))),
                    CONCAT35((undefined3)uStack_73,CONCAT41(uStack_77,bStack_78)) &
                    0xfffffffffffffffe);
  }
  bStack_90 = 0x24;
  uStack_8f = _DAT_014dc0ed;
  uStack_8b = _UNK_014dc0f1;
  uStack_87 = _UNK_014dc0f5;
  uStack_83 = _UNK_014dc0f9;
  uStack_7f = 0x7974;
  uStack_7d = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  pbStack_180 = &bStack_90;
  lVar7 = func_0x0d6c9580(param_2,pbStack_180,&UNK_01563a4f,&pbStack_180,&uStack_181);
  if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&pbStack_180,lVar7 + 0x38);
  }
  *(undefined **)(lVar7 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x60) = 3;
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT21(uStack_7f,uStack_83._3_1_))),
                    CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,bStack_90)) &
                    0xfffffffffffffffe);
  }
  return;
LAB_0d3b0eb4:
  pbVar9 = (byte *)(plVar12 + 3);
  goto LAB_0d3b0ebb;
}



/* ---- referenced strings ----
 * 0x1250538  placement_priority
 * 0x14dc0ed  selection_priority
 */
