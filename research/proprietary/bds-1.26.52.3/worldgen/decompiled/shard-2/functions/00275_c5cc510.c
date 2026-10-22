/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cc510 (ELF vaddr 0xc5cc510)
 * Label: JigsawBlock::vslot83
 * Body:  [[0c6cc510, 0c6cc54d]]
 * Ghidra: wg_JigsawBlock__vslot83
 */


ulong wg_JigsawBlock__vslot83
                (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                )

{
  char cVar1;
  char *pcVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    pcVar2 = (char *)func_0x0cdbf900(param_2);
    if (((pcVar2 == (char *)0x0) || (*pcVar2 != '\x03')) || ((*(byte *)(param_5 + 0x108) & 8) == 0))
    {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}


