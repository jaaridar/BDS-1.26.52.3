/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3ad330 (ELF vaddr 0xd2ad330)
 * Label: string:const std::vector<Holder<const StructureProcessor>> &br::wor
 * Body:  [[0d3ad330, 0d3ad421]]
 * Ghidra: FUN_0d3ad330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0d3ad330(uint param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar4 = &UNK_01da1b90;
  if (param_1 != 0) {
    if (param_1 != 1) {
      cVar2 = func_0x0eeddcf0(&UNK_013a3c68,&UNK_01198d5e,0xd5,&UNK_0136f638,&UNK_0129cc8a,
                              param_1 & 0xff);
      if (cVar2 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
      return &UNK_01da1b90;
    }
    puVar4 = (undefined *)0xf71fed8;
    if (DAT_0f71fef0 == '\0') {
      puVar4 = (undefined *)0xf71fed8;
      iVar3 = FUN_04108328(&DAT_0f71fef0);
      if (iVar3 != 0) {
        uStack_18 = _DAT_0f71ec78;
        uStack_14 = uRam000000000f71ec7c;
        uStack_10 = _DAT_0f71ec80;
        uStack_c = uRam000000000f71ec84;
        if (CONCAT44(uRam000000000f71ec84,_DAT_0f71ec80) != 0) {
          LOCK();
          plVar1 = (long *)(CONCAT44(uRam000000000f71ec84,_DAT_0f71ec80) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        func_0x0d3ad450(0xf71fed8,&uStack_18,1);
        func_0x05192370(&uStack_18);
        func_0x0eee2f40(&SUB_051922d0,0xf71fed8,0xf53dab8);
        func_0x0410844d(&DAT_0f71fef0);
        return (undefined *)0xf71fed8;
      }
    }
  }
  return puVar4;
}


