/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd510380 (ELF vaddr 0xd410380)
 * Label: string:minecraft:aggregate_feature
 * Body:  [[0d510380, 0d510505] [0d510510, 0d5105e6]]
 * Ghidra: FUN_0d510380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d510380(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_RBX;
  long *plVar5;
  undefined1 auVar6 [16];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(long **)(param_1 + 0x10) != plVar1) {
    puStack_68 = param_2 + 5;
    uStack_70 = 0x1b0000014c90bb;
    uStack_78 = 0x1d000001219d14;
    uVar4 = 0;
    uStack_88 = 0;
    plVar2 = *(long **)(param_1 + 0x10);
    puStack_80 = param_2;
    do {
      plVar5 = plVar2 + 3;
      if (((char)plVar2[1] == '\x01') &&
         (plVar2 = *(long **)(*(long *)(*plVar2 + 0x18) + plVar2[2] * 8), plVar2 != (long *)0x0)) {
        if ((*(char *)(param_1 + 9) == '\0') && ((char)plVar2[1] == '\x01')) {
          uStack_90 = uStack_70;
          uStack_98 = uStack_78;
          func_0x0d3dfbc0(puStack_68,&uStack_90,&uStack_98);
          if ((uStack_98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_98 & 0xff00ffffffffffff) - 8);
          }
          uStack_98 = 0;
          if ((uStack_90 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_90 & 0xff00ffffffffffff) - 8);
          }
          uStack_90 = 0;
          if ((uVar4 & 0x100000000) != 0) {
            uVar4 = uVar4 & 0xffffff00ffffffff;
          }
        }
        else {
          if ((uVar4 & 0x100000000) == 0) {
            auVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,puStack_80);
            uVar3 = auVar6._8_8_;
          }
          else {
            uStack_60 = *puStack_80;
            uStack_58 = uStack_88 & 0xff | unaff_RBX << 8;
            uStack_50 = (undefined4)uVar4;
            uStack_48 = *(undefined4 *)(puStack_80 + 3);
            uStack_44 = *(undefined4 *)((long)puStack_80 + 0x1c);
            uStack_40 = *(undefined4 *)(puStack_80 + 4);
            uStack_3c = *(undefined4 *)((long)puStack_80 + 0x24);
            uStack_38 = puStack_80[5];
            auVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_60);
            uVar3 = auVar6._8_8_;
          }
          if ((uVar3 & 0x100000000) != 0) {
            uStack_88 = auVar6._0_8_;
            unaff_RBX = uStack_88 >> 8;
            uVar4 = auVar6._8_8_ & 0xffffffffff;
            if (*(int *)(param_1 + 0x28) == 2) goto LAB_0d5105c2;
          }
        }
      }
      if ((*(int *)(param_1 + 0x28) == 1 && (uVar4 & 0x100000000) == 0) ||
         (plVar2 = plVar5, plVar5 == plVar1)) goto LAB_0d5105c2;
    } while( true );
  }
  uVar4 = 0;
  uVar3 = 0;
LAB_0d5105d5:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
LAB_0d5105c2:
  uVar3 = uStack_88 & 0xff | unaff_RBX << 8;
  goto LAB_0d5105d5;
}


