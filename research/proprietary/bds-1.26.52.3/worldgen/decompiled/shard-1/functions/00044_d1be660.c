/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2be660 (ELF vaddr 0xd1be660)
 * Label: br::worldgen::processors::Rule::vslot2
 * Body:  [[0d2be660, 0d2be72a] [0d2be730, 0d2beace] [0d2beadb, 0d2beaf2]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * wg_br__worldgen__processors__Rule__vslot2
                  (ulong *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 *param_6,long *****param_7,undefined4 param_8,ulong *param_9)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long ****pppplVar16;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  undefined4 uStack_a8;
  long ****pppplStack_a0;
  undefined4 uStack_98;
  ulong *puStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  undefined8 *puStack_78;
  long ****pppplStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  uint uStack_38;
  
  uVar7 = (long)*(int *)((long)param_9 + 4) ^
          (long)(int)param_9[1] * 0x6ebfff5 ^ (long)(int)*param_9 * 0x2fc20f;
  uStack_58 = (uVar7 * 0x285b825 + 0xb) * uVar7 >> 0x10 ^ 0x5deece66d;
  puStack_68 = &UNK_0f45e800;
  puStack_60 = &UNK_0f2bdd80;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  puStack_90 = param_1;
  puStack_78 = param_6;
  uStack_88 = (**(code **)(*param_3 + 0x10))(param_3);
  pppplStack_80 = *(long *****)(param_2 + 0x10);
  if (*(long ******)(param_2 + 8) != (long *****)pppplStack_80) {
    ppppplVar12 = *(long ******)(param_2 + 8) + 0x11;
    do {
      pppplVar16 = (long ****)param_9[2];
      plVar8 = (long *)*puStack_78;
      uVar13 = (ulong)*(uint *)(puStack_78 + 1);
      uVar7 = *param_9;
      uVar14 = (ulong)(uint)param_9[1];
      uStack_98 = param_8;
      pppplStack_a0 = (long ****)param_7;
      pppplStack_b8 = (long ****)0x0;
      pppplStack_c0 = (long ****)&pppplStack_b8;
      if ((ulong)*(uint *)(ppppplVar12 + -10) == 0xffffffff) {
LAB_0d2bea84:
        FUN_04931450();
LAB_0d2bea89:
        uVar10 = (uint)uVar7;
        func_0x0eec74c0(0x20,0);
LAB_0d2be976:
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&UNK_0f0c2950;
        plVar8[3] = (long)ppppplVar12;
LAB_0d2bea02:
        puVar15 = puStack_90;
        pppplStack_c0 = (long ****)0x0;
        *puStack_90 = uVar14;
        *(uint *)(puStack_90 + 1) = uVar10;
        puStack_90[2] = (ulong)pppplVar16;
        puStack_90[3] = uVar13;
        puStack_90[4] = (ulong)ppppplVar12;
        puStack_90[5] = (ulong)plVar8;
        if (plVar8 == (long *)0x0) {
          *(undefined1 *)(puStack_90 + 6) = 1;
        }
        else {
          LOCK();
          plVar8[1] = plVar8[1] + 1;
          UNLOCK();
          *(undefined1 *)(puStack_90 + 6) = 1;
          LOCK();
          plVar1 = plVar8 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            func_0x0412c2d0(plVar8);
          }
        }
        pppplVar16 = pppplStack_c0;
        pppplStack_c0 = (long ****)0x0;
        if (pppplVar16 != (long ****)0x0) {
          (*(code *)(*pppplVar16)[1])();
        }
        goto LAB_0d2be9c6;
      }
      pppplStack_b0 = (long ****)&pppplStack_c0;
      (**(code **)(&UNK_0f45ef78 + (ulong)*(uint *)(ppppplVar12 + -10) * 8))
                (&pppplStack_b0,ppppplVar12 + -0x10);
      cVar6 = (*(code *)(*pppplStack_b8)[2])(pppplStack_b8,pppplVar16,&puStack_68);
      if (cVar6 != '\0') {
        pppplStack_b8 = (long ****)0x0;
        pppplStack_c0 = (long ****)&pppplStack_b8;
        if ((ulong)*(uint *)(ppppplVar12 + -2) == 0xffffffff) goto LAB_0d2bea84;
        pppplStack_b0 = (long ****)&pppplStack_c0;
        (**(code **)(&UNK_0f45ef78 + (ulong)*(uint *)(ppppplVar12 + -2) * 8))
                  (&pppplStack_b0,ppppplVar12 + -8);
        cVar6 = (*(code *)(*pppplStack_b8)[2])(pppplStack_b8,uStack_88,&puStack_68);
        if (cVar6 == '\0') goto LAB_0d2be730;
        uStack_a8 = uStack_98;
        pppplStack_b0 = pppplStack_a0;
        pppplStack_c0 = (long ****)0x0;
        pppplStack_70 = (long ****)&pppplStack_c0;
        if ((ulong)*(uint *)(ppppplVar12 + 4) == 0xffffffff) goto LAB_0d2bea84;
        pppplStack_b8 = (long ****)&pppplStack_70;
        (**(code **)(&UNK_0f45f038 + (ulong)*(uint *)(ppppplVar12 + 4) * 8))
                  (&pppplStack_b8,ppppplVar12);
        cVar6 = (*(code *)(*pppplStack_c0)[2])
                          (pppplStack_c0,plVar8,uVar13,uVar7,uVar14,&puStack_68,pppplStack_b0,
                           uStack_a8);
        if (cVar6 == '\0') goto LAB_0d2be730;
        uVar14 = *param_9;
        uVar10 = (uint)param_9[1];
        uVar7 = (ulong)uVar10;
        pppplVar16 = ppppplVar12[5];
        uVar13 = param_9[3];
        uVar3 = param_9[4];
        pppplStack_a0 = (long ****)0x0;
        pppplStack_b8 = (long ****)&pppplStack_a0;
        if ((ulong)*(uint *)(ppppplVar12 + 0xb) == 0xffffffff) {
          uVar9 = FUN_04931450();
          pppplVar16 = pppplStack_c0;
          pppplStack_c0 = (long ****)0x0;
          if ((long *****)pppplVar16 != (long *****)0x0) {
            (*(code *)(*pppplVar16)[1])();
            func_0x0624d960(&puStack_68);
            uVar9 = func_0x0eee2d70(uVar9);
          }
          func_0x0624d960(&puStack_68);
          func_0x0eee2d70(uVar9);
          return (ulong *)0x5;
        }
        pppplStack_b0 = (long ****)&pppplStack_b8;
        (**(code **)(&UNK_0f45ef58 + (ulong)*(uint *)(ppppplVar12 + 0xb) * 8))
                  (&pppplStack_b0,ppppplVar12 + 7);
        (*(code *)(*pppplStack_a0)[2])(&pppplStack_c0,pppplStack_a0,&puStack_68,uVar3);
        ppppplVar12 = (long *****)pppplStack_c0;
        if ((long *****)pppplStack_c0 != (long *****)0x0) {
          plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plVar8 == (long *)0x0) goto LAB_0d2bea89;
          goto LAB_0d2be976;
        }
        plVar8 = (long *)0x0;
        goto LAB_0d2bea02;
      }
LAB_0d2be730:
      ppppplVar11 = ppppplVar12 + 0xc;
      ppppplVar12 = ppppplVar12 + 0x1d;
    } while (ppppplVar11 != (long *****)pppplStack_80);
  }
  uVar7 = *param_9;
  uVar14 = param_9[1];
  uVar13 = param_9[3];
  puStack_90[2] = param_9[2];
  puStack_90[3] = uVar13;
  *puStack_90 = uVar7;
  puStack_90[1] = uVar14;
  uVar7 = param_9[5];
  iVar4 = *(int *)((long)param_9 + 0x24);
  uVar14 = param_9[5];
  iVar5 = *(int *)((long)param_9 + 0x2c);
  *(int *)(puStack_90 + 4) = (int)param_9[4];
  *(int *)((long)puStack_90 + 0x24) = iVar4;
  *(int *)(puStack_90 + 5) = (int)uVar14;
  *(int *)((long)puStack_90 + 0x2c) = iVar5;
  if (uVar7 != 0) {
    LOCK();
    plVar8 = (long *)(uVar7 + 8);
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  *(undefined1 *)(puStack_90 + 6) = 1;
  puVar15 = puStack_90;
LAB_0d2be9c6:
  if ((ulong)uStack_38 != 0xffffffff) {
    (**(code **)(&UNK_0f45e3b8 + (ulong)uStack_38 * 8))(&pppplStack_b0,&puStack_60);
  }
  return puVar15;
}


