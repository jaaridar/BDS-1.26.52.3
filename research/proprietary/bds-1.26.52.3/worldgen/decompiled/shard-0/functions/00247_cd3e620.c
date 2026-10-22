/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd3e620
 * Label: JigsawBlockActor::vslot0
 * Body:  [[0cd3e620, 0cd3e64d]]
 * Ghidra: wg_JigsawBlockActor__vslot0
 */


/* WARNING: Possible PIC construction at 0x0cd3e63b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cd3e640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlockActor__vslot0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_10;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xcd3e640;
    param_1 = lVar1;
  }
  *(long *)((long)register0x00000020 + -8) = lVar1;
  if (param_1 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


