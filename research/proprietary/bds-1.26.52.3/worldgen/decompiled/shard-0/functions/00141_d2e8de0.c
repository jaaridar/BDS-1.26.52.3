/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e8de0 (ELF vaddr 0xd2e8de0)
 * Label: string:minecraft:tree_feature
 * Body:  [[0d3e8de0, 0d3e928f]]
 * Ghidra: FUN_0d3e8de0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d3e8de0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong auStack_40 [2];
  
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x98);
    if (plVar1 == (long *)0x0) {
      uStack_80 = 0x160000013252a3;
      uStack_88 = 0x18000001338bb5;
      func_0x0d3dfbc0(param_2 + 5,&uStack_80,&uStack_88);
      if ((uStack_88 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
      }
      if ((uStack_80 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
      }
LAB_0d3e9260:
      auVar5 = ZEXT816(0);
      uVar4 = 0;
      uVar3 = 0;
      goto LAB_0d3e926a;
    }
    auStack_40[1] = 0x100000001;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    auVar5 = (**(code **)(*plVar1 + 0x10))
                       (plVar1,*param_2,param_2 + 1,auStack_40 + 1,param_2[3],param_2[4],
                        param_1 + 0x10,&lStack_a8,&lStack_68);
    if (lStack_68 != 0) {
      lStack_60 = lStack_68;
      func_0x0412a280(lStack_68,lStack_58 - lStack_68);
    }
    uVar4 = auVar5._8_8_ >> 0x20;
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
    }
    if ((uVar4 & 1) == 0) {
      uStack_78 = 0x160000013252a3;
      uStack_b0 = 0x1a000001283751;
      func_0x0d3dfbc0(param_2 + 5,&uStack_78,&uStack_b0);
      if ((uStack_b0 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
      }
      uStack_b0 = 0;
      if ((uStack_78 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_78 & 0xff00ffffffffffff) - 8);
      }
    }
  }
  else {
    lStack_a8 = param_2[1];
    lStack_a0._0_4_ = *(undefined4 *)(param_2 + 2);
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2[3]);
    plVar1 = *(long **)(param_1 + 0xa0);
    if (plVar1 != (long *)0x0) {
      auVar5 = (**(code **)(*plVar1 + 0x10))
                         (plVar1,*param_2,param_2 + 1,param_2[3],uVar2,param_2[4],param_1 + 0x10);
      if ((auVar5._8_8_ >> 0x20 & 1) == 0) {
        auStack_40[0] = 0x160000013252a3;
        uStack_48 = 0x1900000131d86c;
        func_0x0d3dfbc0(param_2 + 5,auStack_40,&uStack_48);
        if ((uStack_48 >> 0x37 & 1) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_48 & 0xff00ffffffffffff) - 8);
        }
        if ((auStack_40[0] & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(auStack_40[0] & 0xff00ffffffffffff) - 8);
        }
        goto LAB_0d3e9260;
      }
      lStack_a0._0_4_ = auVar5._8_4_;
      lStack_a8 = auVar5._0_8_;
    }
    auVar5 = (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                       (*(long **)(param_1 + 0x90),*param_2,&lStack_a8,param_2[3],uVar2,param_2[4],
                        param_1 + 0x10,*(undefined8 *)(param_1 + 0x98));
    if ((auVar5._8_8_ >> 0x20 & 1) == 0) {
      uStack_50 = 0x160000013252a3;
      uStack_70 = 0x190000012695f0;
      func_0x0d3dfbc0(param_2 + 5,&uStack_50,&uStack_70);
      if ((uStack_70 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_70 & 0xff00ffffffffffff) - 8);
      }
      uStack_70 = 0;
      if ((uStack_50 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
      }
    }
    uVar4 = auVar5._8_8_ >> 0x20;
  }
  uVar3 = auVar5._0_8_ & 0xffffffffffffff00;
LAB_0d3e926a:
  auVar6._0_8_ = auVar5._0_8_ & 0xff | uVar3;
  auVar6._8_8_ = auVar5._8_8_ & 0xffffffff | (uVar4 & 0xff) << 0x20;
  return auVar6;
}


