/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88b3890 (ELF vaddr 0x87b3890)
 * Label: callee2-of:0x87ae540
 * Body:  [[088b3890, 088b3c7b]]
 * Ghidra: FUN_088b3890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_088b3890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_100;
  ulong uStack_f8;
  byte *pbStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  uint uStack_3c;
  uint uStack_38;
  undefined1 uStack_34;
  
  if (0xfffffffffffffff7 < param_4) {
    uVar5 = func_0x04882e30();
    func_0x048afca0(&uStack_90);
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
      uVar5 = func_0x04882e20(uVar5);
    }
    func_0x04882e20(uVar5);
    pcVar2 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar2)();
    return puVar6;
  }
  pbVar3 = (byte *)((long)&uStack_100 + 1);
  if (param_4 < 0x17) {
    uStack_100 = CONCAT71(uStack_100._1_7_,(char)param_4 * '\x02');
    pbVar7 = pbVar3;
    if (param_4 == 0) goto LAB_088b392b;
  }
  else {
    uVar9 = 0x1a;
    if ((param_4 | 7) != 0x17) {
      uVar9 = (param_4 | 7) + 1;
    }
    pbVar7 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9);
    if (pbVar7 == (byte *)0x0) {
      func_0x0eec74c0(uVar9,0);
    }
    uStack_100 = uVar9 | 1;
    uStack_f8 = param_4;
    pbStack_f0 = pbVar7;
  }
  func_0x0eee2f00(pbVar7,param_3,param_4);
LAB_088b392b:
  pbVar7[param_4] = 0;
  uVar9 = uStack_100 >> 1 & 0x7f;
  if ((uStack_100 & 1) != 0) {
    uVar9 = uStack_f8;
    pbVar3 = pbStack_f0;
  }
  if (uVar9 != 0) {
    plVar4 = (long *)func_0x0eee3290();
    pbVar7 = pbVar3;
    for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar7 = *(byte *)(*plVar4 + (ulong)*pbVar7 * 4);
      pbVar7 = pbVar7 + 1;
    }
    if (3 < uVar9) {
      do {
        *pbVar7 = *(byte *)(*plVar4 + (ulong)*pbVar7 * 4);
        pbVar7[1] = *(byte *)(*plVar4 + (ulong)pbVar7[1] * 4);
        pbVar7[2] = *(byte *)(*plVar4 + (ulong)pbVar7[2] * 4);
        pbVar7[3] = *(byte *)(*plVar4 + (ulong)pbVar7[3] * 4);
        pbVar7 = pbVar7 + 4;
      } while (pbVar7 != pbVar3 + uVar9);
    }
  }
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b8 = 0;
  pbStack_b0 = (byte *)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  uStack_78 = 0x3f600000;
  func_0x048afb10(&lStack_a8,8);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_40 = 0xff00;
  uStack_3c = uStack_3c & 0xffffff00;
  uStack_38 = uStack_38 & 0xffffff00;
  uStack_34 = 0;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar4 = (long)&UNK_0f12f680;
  if (plStack_e8 != (long *)0x0) {
    lVar1 = *plStack_e8;
    plStack_e8 = plVar4;
    (**(code **)(lVar1 + 8))();
    plVar4 = plStack_e8;
  }
  plStack_e8 = plVar4;
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(pbStack_b0,uStack_c0 & 0xfffffffffffffffe);
  }
  pbStack_b0 = pbStack_f0;
  uStack_c0 = uStack_100;
  uStack_b8 = uStack_f8;
  uStack_100 = uStack_100 & 0xffffffffffff0000;
  func_0x0412f5e0(&uStack_d8,param_3,param_4);
  uVar5 = uStack_e0;
  plVar4 = plStack_e8;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  *param_1 = plVar4;
  param_1[1] = uVar5;
  param_1[4] = uStack_c8;
  param_1[2] = uStack_d8;
  param_1[3] = uStack_d0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  param_1[7] = pbStack_b0;
  param_1[5] = uStack_c0;
  param_1[6] = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  pbStack_b0 = (byte *)0x0;
  param_1[8] = lStack_a8;
  param_1[9] = lStack_a0;
  param_1[10] = lStack_98;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  param_1[0xb] = uStack_90;
  param_1[0xc] = uStack_88;
  param_1[0xd] = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined4 *)(param_1 + 0xe) = uStack_78;
  param_1[0xf] = uStack_70;
  param_1[0x10] = uStack_68;
  param_1[0x11] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  param_1[0x14] = uStack_48;
  *(undefined4 *)(param_1 + 0x12) = (undefined4)uStack_58;
  *(undefined4 *)((long)param_1 + 0x94) = uStack_58._4_4_;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)uStack_50;
  *(undefined4 *)((long)param_1 + 0x9c) = uStack_50._4_4_;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  *(ulong *)((long)param_1 + 0xad) = CONCAT17(uStack_34,CONCAT43(uStack_38,uStack_3c._1_3_));
  param_1[0x15] = CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
  func_0x048b0bc0(&plStack_e8);
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(pbStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  return param_1;
}


