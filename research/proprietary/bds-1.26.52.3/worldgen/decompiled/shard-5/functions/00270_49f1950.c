/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4af1950 (ELF vaddr 0x49f1950)
 * Label: callee-of:0x4de9260
 * Body:  [[04af1950, 04af198e] [04af1990, 04af19e5] [04af19f0, 04af1a22]]
 * Ghidra: FUN_04af1950
 */


/* WARNING: Possible PIC construction at 0x04af19df: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04af19e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04af1950(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 in_RAX;
  long lVar7;
  undefined8 auStack_30 [2];
  
  puVar6 = (undefined8 *)param_1[2];
  do {
    if (puVar6 == (undefined8 *)0x0) {
      lVar7 = *param_1;
      *param_1 = 0;
      if (lVar7 == 0) {
        return in_RAX;
      }
SUB_0412a280:
      *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
      if (lVar7 != 0) {
        pcVar5 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar5)(&DAT_0f5463b0,lVar7);
      }
      return *(undefined8 *)((long)register0x00000020 + -8);
    }
    puVar3 = (undefined8 *)*puVar6;
    plVar4 = (long *)puVar6[0xd];
    if (plVar4 == (long *)0x0) {
LAB_04af19c3:
      auStack_30[0] = 0x4af19cc;
      in_RAX = func_0x04167a40(puVar6 + 7);
      bVar2 = *(byte *)(puVar6 + 3);
    }
    else {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 != 0) goto LAB_04af19c3;
      auStack_30[0] = 0x4af19f9;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      auStack_30[0] = 0x4af1a01;
      func_0x0412c2d0(plVar4);
      auStack_30[0] = 0x4af1a0a;
      in_RAX = func_0x04167a40(puVar6 + 7);
      bVar2 = *(byte *)(puVar6 + 3);
    }
    if ((bVar2 & 1) != 0) {
      lVar7 = puVar6[5];
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x4af19e4;
      goto SUB_0412a280;
    }
    auStack_30[0] = 0x4af199d;
    in_RAX = func_0x0412a280(puVar6,0x78);
    puVar6 = puVar3;
  } while( true );
}


