/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5100e0 (ELF vaddr 0xd4100e0)
 * Label: string:minecraft:aggregate_feature
 * Body:  [[0d5100e0, 0d510157] [0d510160, 0d51024c] [0d510250, 0d51028a] [0d510290, 0d5102d4]]
 * Ghidra: FUN_0d5100e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d5100e0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong unaff_R15;
  undefined1 auVar7 [16];
  ulong uStack_68;
  ulong uStack_60;
  uint uStack_54;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar6 != plVar2) {
    lStack_40 = param_2 + 0x28;
    uStack_48 = 0x1b0000014c90bb;
    uStack_50 = 0x1d000001219d14;
    uVar5 = 0;
    uVar4 = 0;
    lStack_38 = param_2;
    do {
      if (((char)plVar6[1] == '\x01') &&
         (plVar3 = *(long **)(*(long *)(*plVar6 + 0x18) + plVar6[2] * 8), plVar3 != (long *)0x0)) {
        if ((*(char *)(param_1 + 9) == '\0') && ((char)plVar3[1] == '\x01')) {
          uStack_60 = uStack_48;
          uStack_68 = uStack_50;
          func_0x0d3dfbc0(lStack_40,&uStack_60,&uStack_68);
          if ((uStack_68 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
          }
          uStack_68 = 0;
          if ((uStack_60 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_60 & 0xff00ffffffffffff) - 8);
          }
          uStack_60 = 0;
          uVar5 = 0;
          goto LAB_0d510290;
        }
        auVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,lStack_38);
        if ((auVar7._8_8_ >> 0x20 & 1) == 0) goto LAB_0d510290;
        uVar5 = auVar7._8_8_ >> 0x20;
        unaff_R15 = auVar7._0_8_ >> 8;
        iVar1 = *(int *)(param_1 + 0x28);
        uVar4 = auVar7._0_8_ & 0xffffffff;
        uStack_54 = auVar7._8_4_;
        if (iVar1 == 2) goto LAB_0d5102a7;
      }
      else {
LAB_0d510290:
        iVar1 = *(int *)(param_1 + 0x28);
      }
      if (((iVar1 == 1) && ((uVar5 & 1) == 0)) || (plVar6 = plVar6 + 3, plVar6 == plVar2))
      goto LAB_0d5102a7;
    } while( true );
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_0d5102c6:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
LAB_0d5102a7:
  uVar4 = uVar4 & 0xff | unaff_R15 << 8;
  uVar5 = (ulong)uStack_54 | (uVar5 & 0xff) << 0x20;
  goto LAB_0d5102c6;
}


