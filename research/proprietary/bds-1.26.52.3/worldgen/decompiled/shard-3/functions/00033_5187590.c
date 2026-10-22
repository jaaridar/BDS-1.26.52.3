/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5287590 (ELF vaddr 0x5187590)
 * Label: OverworldGeneratorMultinoise::vslot57
 * Body:  [[05287590, 052878db]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot57
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
wg_OverworldGeneratorMultinoise__vslot57(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_38;
  
  func_0x05286c70(auStack_58,*param_3,param_2 + 0x908,*(undefined8 *)(param_2 + 0xca0),
                  *(undefined8 *)(param_2 + 0xca8));
  sVar2 = *(short *)(*(long *)(param_2 + 0x28) + 0xa8);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4180);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x4180,0);
  }
  *plVar7 = param_2 + 0x6e0;
  *(short *)(plVar7 + 1) = sVar2 + 4;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x21] = 0;
  *(undefined4 *)(plVar7 + 0x22) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x27] = 0;
  plVar7[0x28] = 0;
  plVar7[0x25] = 0;
  plVar7[0x26] = 0;
  plVar7[0x23] = 0;
  plVar7[0x24] = 0;
  *(undefined4 *)(plVar7 + 0x2d) = 0;
  func_0x0eee2dd0(plVar7 + 0x2e,0,0x4010);
  uVar6 = _UNK_014ea7cc;
  uVar5 = _UNK_014ea7c8;
  uVar4 = _UNK_014ea7c4;
  uVar3 = _DAT_014ea7c0;
  lVar8 = 0x78;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x478);
  *(undefined4 *)(plVar7 + 0x22e) = 0x3f800000;
  lVar8 = 0x479;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x879);
  *(undefined4 *)((long)plVar7 + 0x2174) = 0x3f800000;
  lVar8 = 0x87a;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0xc7a);
  *(undefined4 *)(plVar7 + 0x62f) = 0x3f800000;
  lVar8 = 0xc7b;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x107b);
  *(undefined4 *)((long)plVar7 + 0x417c) = 0x3f800000;
  lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3160);
  if (lVar8 == 0) {
    FUN_0eec74c0(0x3160,0);
  }
  func_0x05268e90(lVar8,param_2 + 0x7c0);
  func_0x05287930(param_1,param_2,*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),
                  auStack_58,plVar7,lVar8);
  func_0x0412a280(lVar8,0x3160);
  func_0x0412a280(plVar7,0x4180);
  if (lStack_48 != 0) {
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  return param_1;
}


