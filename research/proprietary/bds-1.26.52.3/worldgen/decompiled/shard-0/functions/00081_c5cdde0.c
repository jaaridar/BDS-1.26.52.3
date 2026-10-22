/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cdde0 (ELF vaddr 0xc5cdde0)
 * Label: JigsawBlock::vslot69
 * Body:  [[0c6cdde0, 0c6cde6b]]
 * Ghidra: wg_JigsawBlock__vslot69
 */


ulong wg_JigsawBlock__vslot69
                (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                )

{
  ulong uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = (**(code **)(*param_2 + 0x1c8))
                    (0,0,param_2,*(undefined8 *)(param_1 + 0x200),param_3,1,0,1);
  if ((char)uVar1 != '\0') {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_28 = 1;
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_2 + 0xf8))(param_2,param_3,param_4,3,param_5,&uStack_48);
  }
  return uVar1;
}


