/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6bd910 (ELF vaddr 0xd5bd910)
 * Label: callee-of:0x82ea790
 * Body:  [[0d6bd910, 0d6bdbe6]]
 * Ghidra: FUN_0d6bd910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d6bd910(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte bStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puStack_68 = &UNK_0f533920;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_60 = param_2;
  func_0x0d6c6790(&uStack_108,&puStack_68,&uStack_128);
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  uVar11 = _UNK_0f47eb1c;
  uVar10 = _UNK_0f47eb18;
  uVar9 = _UNK_0f47eb14;
  uVar8 = _UNK_0f47eb0c;
  uVar7 = _UNK_0f47eb08;
  uVar6 = _UNK_0f47eb04;
  uVar5 = _DAT_0f47eb00;
  bStack_78 = bStack_c8;
  if (bStack_c8 == 0) {
    uStack_b8 = (long *)CONCAT44(uStack_104,uStack_108);
    uStack_b0 = uStack_100;
    uStack_ac = uStack_fc;
    uStack_a8 = CONCAT44(uStack_f4,uStack_f8);
    puVar17 = (undefined4 *)CONCAT44(uStack_ec,uStack_f0);
    uStack_98 = CONCAT71(uStack_e7,bStack_e8);
    uStack_90 = uStack_e0;
    uStack_88 = uStack_d8;
    uStack_80 = uStack_d0;
    puVar4 = (undefined4 *)CONCAT71(uStack_e7,bStack_e8);
    uStack_f8 = _DAT_0f47eb10;
    uStack_f4 = _UNK_0f47eb14;
    uStack_f0 = _UNK_0f47eb18;
    uStack_ec = _UNK_0f47eb1c;
    uStack_108 = _DAT_0f47eb00;
    uStack_104 = _UNK_0f47eb04;
    uStack_100 = _UNK_0f47eb08;
    uStack_fc = _UNK_0f47eb0c;
    bStack_e8 = 0;
    bStack_c0 = 0;
    if (puVar17 < puVar4) {
      puVar17[4] = _DAT_0f47eb10;
      puVar17[5] = uVar9;
      puVar17[6] = uVar10;
      puVar17[7] = uVar11;
      *puVar17 = uVar5;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      *(undefined1 *)(puVar17 + 8) = 0;
      *(undefined1 *)(puVar17 + 0x12) = 0;
      puVar17 = puVar17 + 0x14;
    }
    else {
      puStack_a0 = (undefined4 *)func_0x0489d2c0(&uStack_a8,&uStack_108);
      puVar17 = puStack_a0;
      if (((bStack_c0 & 1) != 0) && ((bStack_e8 & 1) != 0)) {
        func_0x0412a280(uStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
        puVar17 = puStack_a0;
      }
    }
    uVar15 = uStack_80;
    uVar14 = uStack_88;
    uVar13 = uStack_90;
    uVar12 = uStack_98;
    uVar18 = uStack_a8;
    uStack_a8 = 0;
    puStack_a0 = (undefined4 *)0x0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    *(undefined4 *)param_1 = (undefined4)uStack_b8;
    *(undefined4 *)((long)param_1 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_b0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = uVar18;
    param_1[3] = puVar17;
    param_1[4] = uVar12;
    param_1[5] = uVar13;
    param_1[6] = uVar14;
    param_1[7] = uVar15;
    plVar3 = uStack_b8;
    bStack_c8 = bStack_78;
  }
  else {
    plVar3 = (long *)CONCAT44(uStack_104,uStack_108);
    uStack_b8 = (long *)0x0;
    if (plVar3 == (long *)0x0) {
      uVar18 = FUN_0412dc70();
      func_0x0d6bdcc0(&uStack_58,0x4a,uVar18);
      uVar12 = uStack_20;
      uVar18 = uStack_38;
      *param_1 = uStack_58;
      param_1[1] = uStack_50;
      uVar5 = (undefined4)uStack_48;
      uVar6 = uStack_48._4_4_;
      uVar7 = (undefined4)uStack_40;
      uVar8 = uStack_40._4_4_;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uVar9 = (undefined4)uStack_30;
      uVar10 = uStack_30._4_4_;
      uVar11 = (undefined4)uStack_28;
      uVar16 = uStack_28._4_4_;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar6;
      *(undefined4 *)(param_1 + 3) = uVar7;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
      param_1[4] = uVar18;
      *(undefined4 *)(param_1 + 5) = uVar9;
      *(undefined4 *)((long)param_1 + 0x2c) = uVar10;
      *(undefined4 *)(param_1 + 6) = uVar11;
      *(undefined4 *)((long)param_1 + 0x34) = uVar16;
      param_1[7] = uVar12;
      func_0x048e6d60(&uStack_58);
      plVar3 = uStack_b8;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
      *param_1 = &UNK_0f47e0b0;
      param_1[1] = plVar3[1];
      lVar1 = plVar3[2];
      param_1[2] = lVar1;
      lVar2 = plVar3[3];
      param_1[3] = lVar2;
      if (lVar2 == 0) {
        param_1[1] = param_1 + 2;
      }
      else {
        *(undefined8 **)(lVar1 + 0x10) = param_1 + 2;
        plVar3[1] = (long)(plVar3 + 2);
        plVar3[2] = 0;
        plVar3[3] = 0;
      }
      (**(code **)(*plVar3 + 8))();
      plVar3 = uStack_b8;
    }
  }
  if (((bStack_c8 & 1) != 0) && (uStack_b8 = (long *)0x0, plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}


