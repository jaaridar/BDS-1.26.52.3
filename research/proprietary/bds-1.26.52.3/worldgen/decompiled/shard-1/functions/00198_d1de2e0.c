/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2de2e0 (ELF vaddr 0xd1de2e0)
 * Label: br::worldgen::Structure::vslot0
 * Body:  [[0d2de2e0, 0d2de311] [0d2de320, 0d2de400]]
 * Ghidra: wg_br__worldgen__Structure__vslot0
 */


/* WARNING: Possible PIC construction at 0x0d2de370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d2de3b5: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__Structure__vslot0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_30 [2];
  
  puVar5 = &UNK_0f45f4f8;
  *param_1 = &UNK_0f45f4f8;
  lVar2 = param_1[0x13];
  if (lVar2 == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
      auStack_30[0] = 0xd2de38f;
      func_0x0412a280(param_1[0x11],param_1[0xf] & 0xfffffffffffffffe);
    }
    auStack_30[0] = 0xd2de39c;
    puVar5 = (undefined *)func_0x0c9b9150(param_1 + 8,param_1[10]);
    lVar6 = param_1[8];
    param_1[8] = 0;
    if (lVar6 == 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        auStack_30[0] = 0xd2de3d1;
        puVar5 = (undefined *)func_0x0412a280(param_1[7],param_1[5] & 0xfffffffffffffffe);
      }
      lVar6 = param_1[2];
      if (lVar6 == 0) {
        return puVar5;
      }
      param_1[3] = lVar6;
    }
    else {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0xd2de3ba;
    }
  }
  else {
    lVar7 = param_1[0x14];
    lVar6 = lVar2;
    if (lVar2 != lVar7) {
      do {
        plVar3 = *(long **)(lVar7 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          puVar5 = (undefined *)*plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (puVar5 == (undefined *)0x0) {
            auStack_30[0] = 0xd2de34e;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            auStack_30[0] = 0xd2de356;
            puVar5 = (undefined *)func_0x0412c2d0(plVar3);
          }
        }
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != lVar2);
      lVar6 = param_1[0x13];
    }
    param_1[0x14] = lVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0xd2de375;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar5;
  if (lVar6 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar6);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


