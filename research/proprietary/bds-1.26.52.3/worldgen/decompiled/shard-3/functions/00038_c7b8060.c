/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8b8060 (ELF vaddr 0xc7b8060)
 * Label: Biome::vslot0
 * Body:  [[0c8b8060, 0c8b80bd] [0c8b80c0, 0c8b811e] [0c8b8120, 0c8b8182]]
 * Ghidra: wg_Biome__vslot0
 */


/* WARNING: Possible PIC construction at 0x0c8b809c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_Biome__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_30 [2];
  
  *param_1 = &UNK_0f3e1c90;
  auStack_30[0] = 0xc8b8081;
  lVar4 = FUN_0c8dff60(param_1[0x38]);
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    lVar4 = param_1[0x2e];
    if (lVar4 != 0) {
      lVar7 = param_1[0x2f];
      lVar5 = lVar4;
      if (lVar4 != lVar7) {
        do {
          plVar2 = *(long **)(lVar7 + -8);
          *(undefined8 *)(lVar7 + -8) = 0;
          if (plVar2 != (long *)0x0) {
            auStack_30[0] = 0xc8b80e0;
            (**(code **)(*plVar2 + 8))();
          }
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != lVar4);
        lVar5 = param_1[0x2e];
      }
      param_1[0x2f] = lVar4;
      auStack_30[0] = 0xc8b80ff;
      func_0x0412a280(lVar5,param_1[0x30] - lVar5);
    }
    auStack_30[0] = 0xc8b8108;
    lVar4 = func_0x0c8b7e70(param_1 + 0xd);
    lVar7 = param_1[10];
    if (lVar7 == 0) {
      return lVar4;
    }
    lVar6 = param_1[0xb];
    lVar5 = lVar7;
    if (lVar7 != lVar6) {
      do {
        plVar2 = *(long **)(lVar6 + -8);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            auStack_30[0] = 0xc8b814e;
            (**(code **)(*plVar2 + 0x10))(plVar2);
            auStack_30[0] = 0xc8b8156;
            lVar4 = func_0x0412c2d0(plVar2);
          }
        }
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != lVar7);
      lVar5 = param_1[10];
    }
    param_1[0xb] = lVar7;
  }
  else {
    lVar5 = param_1[0x35];
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0xc8b80a1;
  }
  *(long *)((long)register0x00000020 + -8) = lVar4;
  if (lVar5 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar5);
  }
  return *(long *)((long)register0x00000020 + -8);
}


