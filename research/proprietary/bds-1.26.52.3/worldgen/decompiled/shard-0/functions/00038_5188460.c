/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5288460 (ELF vaddr 0x5188460)
 * Label: OverworldGeneratorMultinoise::vslot54
 * Body:  [[05288460, 052884bd]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGeneratorMultinoise__vslot54(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 0xca8);
  if (*(long *)(lVar1 + 0xc0) != 0) {
    cVar2 = func_0x0eeddcf0(&UNK_0130a7d5,&UNK_012d73ea,0x1e,&UNK_013ac822,&UNK_01376afd);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  return;
}


