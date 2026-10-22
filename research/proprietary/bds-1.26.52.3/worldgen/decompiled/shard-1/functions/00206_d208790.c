/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd308790 (ELF vaddr 0xd208790)
 * Label: JigsawStructureLoader::vslot1
 * Body:  [[0d308790, 0d308851]]
 * Ghidra: wg_JigsawStructureLoader__vslot1
 */


/* WARNING: Possible PIC construction at 0x0d3087ef: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawStructureLoader__vslot1(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 auStack_20 [2];
  
  *param_1 = &UNK_0f45f878;
  auStack_20[0] = 0xd3087ad;
  func_0x0d307a00(param_1 + 0x5e);
  auStack_20[0] = 0xd3087b9;
  func_0x0d307d30(param_1 + 0x40);
  auStack_20[0] = 0xd3087c5;
  func_0x0d308060(param_1 + 0x22);
  auStack_20[0] = 0xd3087ce;
  func_0x0d308390(param_1 + 4);
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    *param_1 = &UNK_0f534768;
    plVar3 = (long *)param_1[2];
    if (plVar3 == (long *)0x0) {
      puVar5 = (undefined1 *)param_1[1];
      *puVar5 = 0;
    }
    else {
      *(undefined1 *)param_1[1] = 0;
      LOCK();
      plVar1 = plVar3 + 1;
      puVar5 = (undefined1 *)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (puVar5 == (undefined1 *)0x0) {
        auStack_20[0] = 0xd30882d;
        (**(code **)(*plVar3 + 0x10))(plVar3);
        auStack_20[0] = 0xd308835;
        puVar5 = (undefined1 *)func_0x0412c2d0(plVar3);
      }
    }
  }
  else {
    auStack_20[0] = 0xd3087e7;
    puVar5 = (undefined1 *)func_0x049e9990(puVar2);
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xd3087f4;
    param_1 = puVar2;
  }
  *(undefined1 **)((long)register0x00000020 + -8) = puVar5;
  if (param_1 != (undefined8 *)0x0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


