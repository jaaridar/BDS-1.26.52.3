/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd425480 (ELF vaddr 0xd325480)
 * Label: string:minecraft:weighted_random_feature
 * Body:  [[0d425480, 0d4254e9] [0d4254f0, 0d4256d0]]
 * Ghidra: FUN_0d425480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d425480(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar4 != plVar5) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x18) + 0x9f8);
    iVar2 = 0;
    plVar7 = plVar4;
    do {
      iVar2 = (int)((float)iVar2 + *(float *)(plVar7 + 3));
      plVar7 = plVar7 + 4;
    } while (plVar7 != plVar5);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,iVar2);
      plVar4 = *(long **)(param_1 + 0x10);
      plVar5 = *(long **)(param_1 + 0x18);
    }
    for (; plVar4 != plVar5; plVar4 = plVar4 + 4) {
      iVar2 = (int)((float)iVar2 - *(float *)(plVar4 + 3));
      if (iVar2 < 0) {
        if ((char)plVar4[1] == '\x01') {
          plVar4 = *(long **)(*(long *)(*plVar4 + 0x18) + plVar4[2] * 8);
          if (plVar4 != (long *)0x0) {
            if ((*(char *)(param_1 + 9) != '\0') || ((char)plVar4[1] != '\x01')) {
              auVar8 = (**(code **)(*plVar4 + 0x10))();
              uVar3 = auVar8._0_8_;
              uVar6 = auVar8._8_8_ & 0xffffffffff;
              goto LAB_0d4255bf;
            }
            uStack_20 = 0x210000012bd5bc;
            uStack_28 = 0x1d000001219d14;
            func_0x0d3dfbc0(param_2 + 0x28,&uStack_20,&uStack_28);
            if ((uStack_28 >> 0x37 & 1) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_28 & 0xff00ffffffffffff) - 8);
            }
            if ((uStack_20 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_20 & 0xff00ffffffffffff) - 8);
            }
            goto LAB_0d4255bb;
          }
        }
        break;
      }
    }
  }
  uStack_30 = 0x210000012bd5bc;
  uStack_38 = 0x1d0000011cbb78;
  func_0x0d3dfbc0(param_2 + 0x28,&uStack_30,&uStack_38);
  if ((uStack_38 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_38 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_30 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_30 & 0xff00ffffffffffff) - 8);
  }
LAB_0d4255bb:
  uVar3 = 0;
  uVar6 = 0;
LAB_0d4255bf:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar3;
  return auVar8;
}


