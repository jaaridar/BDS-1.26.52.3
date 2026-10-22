/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d645d0 (ELF vaddr 0x5c645d0)
 * Label: callee-of:0x6146460
 * Body:  [[05d645d0, 05d645fe] [05d64600, 05d6469f] [0d366a60, 0d366b3f]]
 * Ghidra: FUN_05d645d0
 */


/* WARNING: Possible PIC construction at 0x05d6463b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05d6468e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05d6461c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05d64621) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_05d645d0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_20;
  
  puVar6 = &UNK_0f011c90;
  *param_1 = &UNK_0f011c90;
  lVar3 = param_1[0x2f];
  if (lVar3 == 0) {
    puVar6 = &UNK_0f011d00;
    param_1[0x21] = &UNK_0f011d00;
    lVar3 = param_1[0x2c];
    param_1[0x2c] = 0;
    if (lVar3 != 0) {
      uStack_20 = 0x5d64671;
      puVar6 = (undefined *)func_0x05f20d40(param_1 + 0x2c);
    }
    lVar7 = param_1[0x25];
    if (lVar7 == 0) {
      *param_1 = &UNK_0f4621c0;
      uStack_20 = 0xd366a84;
      func_0x066975a0(param_1 + 0x1d,param_1[0x1e]);
      plVar4 = (long *)param_1[0x1a];
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      if (plVar4 == (long *)0x0) {
        param_1[0x1b] = 0;
        uStack_20 = 0xd366b22;
        puVar6 = (undefined *)func_0x0d36f010(param_1 + 4);
        bVar2 = *(byte *)(param_1 + 1);
      }
      else {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          uStack_20 = 0xd366ab5;
          (**(code **)(*plVar4 + 0x10))(plVar4);
          uStack_20 = 0xd366abd;
          func_0x0412c2d0(plVar4);
        }
        plVar4 = (long *)param_1[0x1a];
        param_1[0x1b] = 0;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            uStack_20 = 0xd366aef;
            (**(code **)(*plVar4 + 0x10))(plVar4);
            uStack_20 = 0xd366af7;
            func_0x0412c2d0(plVar4);
          }
        }
        uStack_20 = 0xd366b00;
        puVar6 = (undefined *)func_0x0d36f010(param_1 + 4);
        bVar2 = *(byte *)(param_1 + 1);
      }
      if ((bVar2 & 1) == 0) {
        return puVar6;
      }
      lVar7 = param_1[3];
    }
    else {
      param_1[0x26] = lVar7;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x5d64693;
    }
  }
  else {
    lVar8 = param_1[0x30];
    lVar7 = lVar3;
    if (lVar3 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
          lVar7 = *(long *)(lVar8 + -8);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x5d64621;
          goto SUB_0412a280;
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != lVar3);
      lVar7 = param_1[0x2f];
    }
    param_1[0x30] = lVar3;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x5d64640;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar6;
  if (lVar7 != 0) {
    pcVar5 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar5)(&DAT_0f5463b0,lVar7);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


