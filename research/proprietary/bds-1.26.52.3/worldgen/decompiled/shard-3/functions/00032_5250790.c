/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5350790 (ELF vaddr 0x5250790)
 * Label: MultinoiseGenerationRulesBiomeComponentGlue::vslot3
 * Body:  [[04136a20, 04136a24] [05350790, 05350919] [05350920, 05350a84] [0eee02f0, 0eee0369] [0eee2d80, 0eee2d85]]
 * Ghidra: wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3
 */


/* WARNING: Possible PIC construction at 0x05350a6d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05350a72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_MultinoiseGenerationRulesBiomeComponentGlue__vslot3
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  byte ****ppppbVar7;
  byte bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_RBX;
  long *plVar12;
  char cVar13;
  undefined8 unaff_R14;
  bool bVar14;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_48;
  char cStack_40;
  byte ***pppbStack_38;
  long *plStack_30;
  long lStack_28;
  long *plStack_20;
  
  cVar13 = *(char *)((long)param_3 + 0x24);
  puVar9 = (undefined8 *)*param_3;
  puVar5 = puVar9;
  if (cVar13 == '\x02') {
    puVar5 = param_3;
  }
  if (puVar5 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0xee37b33) {
    uVar4 = param_3[5];
    lVar6 = param_3[6];
    if (lVar6 == 0) {
      plStack_20 = (long *)0x53507e0;
      (*(code *)param_3[7])(0,param_3,0);
      lVar6 = param_3[6];
      cVar13 = *(char *)((long)param_3 + 0x24);
      puVar9 = (undefined8 *)*param_3;
    }
    if (cVar13 == '\x02') {
      puVar9 = param_3;
    }
    plStack_20 = (long *)0x5350804;
    puVar5 = (undefined8 *)func_0x0488e200(uVar4,lVar6,0xf11c84cd,puVar9);
  }
  bVar14 = (*(byte *)(param_2 + 0x198) & 1) != 0;
  plVar12 = (long *)(param_2 + 0x199);
  if (bVar14) {
    plVar12 = *(long **)(param_2 + 0x1a8);
  }
  uVar10 = (ulong)(*(byte *)(param_2 + 0x198) >> 1);
  if (bVar14) {
    uVar10 = *(ulong *)(param_2 + 0x1a0);
  }
  uVar11 = uVar10;
  if (uVar10 != 0) {
    do {
      if (uVar11 == 0) goto LAB_05350920;
      uVar1 = uVar11 - 1;
      lVar6 = uVar11 - 1;
      uVar11 = uVar1;
    } while (*(char *)((long)plVar12 + lVar6) != ':');
    if (uVar1 <= uVar10) {
      uVar10 = uVar1;
    }
    if (((uVar1 != 0xffffffffffffffff) && (uVar10 == 9)) &&
       ((char)plVar12[1] == 't' && *plVar12 == 0x66617263656e696d)) {
      plStack_20 = (long *)0x53508a3;
      lVar6 = func_0x0535d650(param_2 + 0x170);
      if (*(char *)((long)puVar5 + 0xc) == '\x01') {
        *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(puVar5 + 1);
        cVar13 = *(char *)((long)puVar5 + 0x14);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x14);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(puVar5 + 2);
        cVar13 = *(char *)((long)puVar5 + 0x1c);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x1c);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(puVar5 + 3);
        cVar13 = *(char *)((long)puVar5 + 0x24);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x24);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(puVar5 + 4);
        cVar13 = *(char *)((long)puVar5 + 0x2c);
      }
      else {
        cVar13 = *(char *)((long)puVar5 + 0x2c);
      }
      if (cVar13 == '\x01') {
        *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(puVar5 + 5);
        return;
      }
      return;
    }
  }
LAB_05350920:
  uStack_60 = 0x535093d;
  plStack_20 = unaff_RBX;
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_60 = 0x5350954;
  FUN_0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar7 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_48 = 0;
    cStack_40 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_60;
    uStack_60 = 0x5350a72;
    lVar6 = 0xf552e80;
  }
  else {
    bVar8 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar8 = *(byte *)ppppbVar7;
    }
    lStack_48 = 0xf552e80;
    cStack_40 = '\x01';
    pppbStack_38 = (byte ***)ppppbVar7;
    plStack_30 = plVar2;
    lStack_28 = _DAT_0f552f70;
    if (((bVar8 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      puStack_58 = &DAT_01e36650;
      uStack_60 = 0x53509d3;
      func_0x0eeb61d0(_DAT_0f552f70,1,3,5,&UNK_012d75ad,plVar12);
    }
    ppppbVar7 = &pppbStack_38;
    pppbStack_38 = (byte ***)0x0;
    plStack_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar12 = plVar2 + 1;
      ppppbVar7 = (byte ****)*plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (ppppbVar7 == (byte ****)0x0) {
        uStack_60 = 0x53509fe;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_60 = 0x5350a06;
        ppppbVar7 = (byte ****)func_0x0412c2d0(plVar2);
      }
      plVar12 = plStack_30;
      lStack_28 = 0;
      if (plStack_30 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        ppppbVar7 = (byte ****)*plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (ppppbVar7 == (byte ****)0x0) {
          uStack_60 = 0x5350a34;
          (**(code **)(*plStack_30 + 0x10))(plStack_30);
          uStack_60 = 0x5350a3c;
          ppppbVar7 = (byte ****)func_0x0412c2d0(plVar12);
        }
      }
    }
    plVar12 = plStack_20;
    lVar6 = lStack_48;
    if (cStack_40 != '\x01') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x10) = plVar12;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar7;
  LOCK();
  plVar12 = (long *)(lVar6 + 0xd0);
  lVar3 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar3 == -0x7fffffffffffffff) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
    func_0x0412d450();
    LOCK();
    *(ulong *)(lVar6 + 0xd0) = *(ulong *)(lVar6 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
    func_0x0412d520(lVar6);
    uVar4 = *(undefined8 *)(lVar6 + 0xc0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
    func_0x0412d680(uVar4);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
    func_0x0412d6b0(uVar4);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar6 + 0x90);
    return;
  }
  return;
}


