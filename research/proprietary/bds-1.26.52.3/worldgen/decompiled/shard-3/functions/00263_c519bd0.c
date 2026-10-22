/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc619bd0 (ELF vaddr 0xc519bd0)
 * Label: callee-of:0xc5cc0e0
 * Body:  [[0c619bd0, 0c619e2b] [0c619e30, 0c61a05c] [0c61a060, 0c61a072]]
 * Ghidra: FUN_0c619bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c619bd0(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_RBP;
  long lVar8;
  long lVar9;
  uint unaff_R12D;
  long *in_FS_OFFSET;
  undefined1 uStack_161;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  undefined **ppuStack_138;
  long alStack_128 [4];
  long *plStack_108;
  undefined1 auStack_f0 [176];
  undefined8 uStack_40;
  
  if (((((int)param_2[0x19] != 2) || (((*(byte *)(param_2 + 0x18) ^ 1) & 1) == 0 && *param_2 == 0))
      && ((int)param_2[0x19] == 4)) && (((*(byte *)(param_2 + 5) ^ 1) & 1) != 0 || *param_2 != 0)) {
    if (DAT_0f7ba168 == '\0') {
      uStack_40 = 0xc619d8c;
      iVar2 = func_0x04108328(&DAT_0f7ba168);
      if (iVar2 != 0) {
        _DAT_0f7ba150 = 0;
        uRam000000000f7ba158 = 0;
        _DAT_0f7ba140 = 0;
        uRam000000000f7ba148 = 0;
        _DAT_0f7ba130 = 0;
        uRam000000000f7ba138 = 0;
        _DAT_0f7ba120 = 0;
        uRam000000000f7ba128 = 0;
        _DAT_0f7ba160 = 0;
        uStack_40 = 0xc619dc3;
        _DAT_0f7ba118 = func_0x0eee2fc0();
        uStack_40 = 0xc619dd6;
        func_0x0410844d(&DAT_0f7ba168);
      }
    }
    lVar6 = *in_FS_OFFSET;
    if (*(char *)(lVar6 + -0x30) == '\0') {
      uStack_40 = 0xc619d49;
      func_0x0417d010(&UNK_0eee1ac0,lVar6 + -0x48,0xf53dab8);
      *(undefined1 *)(lVar6 + -0x30) = 1;
    }
    lVar3 = *(long *)(lVar6 + -0x40);
    do {
      lVar9 = lVar3;
      if (lVar9 == *(long *)(lVar6 + -0x48)) goto LAB_0c619ca6;
      lVar3 = lVar9 + -0x10;
    } while (*(undefined **)(lVar9 + -0x10) != &DAT_0f7ba118);
    unaff_RBP = *(long *)(lVar9 + -8);
LAB_0c619ca6:
    if (lVar9 == *(long *)(lVar6 + -0x48)) {
      unaff_RBP = _DAT_0f7ba118;
    }
    uStack_40 = 0xc619cb7;
    lVar3 = func_0x0eee2fc0();
    if (lVar3 != unaff_RBP) {
      if (DAT_0f7ba1c0 == '\0') {
        uStack_40 = 0xc619de7;
        iVar2 = func_0x04108328(&DAT_0f7ba1c0);
        if (iVar2 != 0) {
          _DAT_0f7ba1b0 = 0;
          uRam000000000f7ba1b8 = 0;
          _DAT_0f7ba1a0 = 0;
          uRam000000000f7ba1a8 = 0;
          _DAT_0f7ba190 = 0;
          uRam000000000f7ba198 = 0;
          _DAT_0f7ba180 = 0;
          uRam000000000f7ba188 = 0;
          _DAT_0f7ba170 = 0;
          uRam000000000f7ba178 = 0;
          uStack_40 = 0xc619e24;
          func_0x0410844d(&DAT_0f7ba1c0);
        }
      }
      if (*(char *)(lVar6 + -0x30) == '\0') {
        uStack_40 = 0xc619d70;
        func_0x0417d010(&UNK_0eee1ac0,lVar6 + -0x48,0xf53dab8);
        *(undefined1 *)(lVar6 + -0x30) = 1;
      }
      lVar9 = *(long *)(lVar6 + -0x40);
      do {
        lVar8 = lVar9;
        lVar9 = lVar8;
        if (lVar8 == *(long *)(lVar6 + -0x48)) goto LAB_0c619d06;
        lVar9 = lVar8 + -0x10;
      } while (*(undefined **)(lVar8 + -0x10) != &DAT_0f7ba170);
      lVar9 = *(long *)(lVar8 + -8);
LAB_0c619d06:
      if (lVar8 == *(long *)(lVar6 + -0x48)) {
        lVar9 = _DAT_0f7ba170;
      }
      if (lVar3 != lVar9) {
        return 1;
      }
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),param_2);
  if ((int)uVar4 != 1) goto LAB_0c619fd4;
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
    puStack_158 = &UNK_0f39a568;
    plStack_150 = param_2;
    ppuStack_138 = &puStack_158;
    func_0x0c618c50(param_1,&puStack_158);
    if (ppuStack_138 == &puStack_158) {
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (ppuStack_138 == (undefined **)0x0) goto LAB_0c619fd4;
    }
    (**(code **)(*ppuStack_138 + lVar6))();
    goto LAB_0c619fd4;
  }
  if ((ulong)*(uint *)(param_2 + 0x19) == 0xffffffff) {
    uVar7 = func_0x04931450();
    lVar6 = 0x20;
    if ((ppuStack_138 == (undefined **)param_2) || (lVar6 = 0x28, ppuStack_138 != (undefined **)0x0)
       ) {
      (**(code **)((long)*ppuStack_138 + lVar6))();
      uVar7 = func_0x0eee2d70(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      lVar6 = 0x20;
      if ((plStack_108 == param_2) || (lVar6 = 0x28, plStack_108 != (long *)0x0)) {
        (**(code **)(*plStack_108 + lVar6))();
      }
      func_0x0c6275a0(auStack_f0);
    }
    func_0x0eee2d70(uVar7);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  plStack_160 = (long *)&uStack_161;
  (**(code **)(&UNK_0f39a640 + (ulong)*(uint *)(param_2 + 0x19) * 8))
            (auStack_f0,&plStack_160,param_2);
  plStack_108 = (long *)0x0;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xd8,0);
  }
  *plVar5 = (long)&UNK_0f39a6b8;
  *(undefined1 *)(plVar5 + 1) = 0;
  *(undefined4 *)(plVar5 + 0x1a) = 0xffffffff;
  if ((ulong)unaff_R12D != 0xffffffff) {
    plStack_160 = plVar5 + 1;
    (**(code **)(&UNK_0f39a780 + (ulong)unaff_R12D * 8))(&plStack_160,auStack_f0);
    *(uint *)(plVar5 + 0x1a) = unaff_R12D;
  }
  plStack_108 = plVar5;
  func_0x0c618c50(param_1,alStack_128);
  if (plStack_108 == alStack_128) {
    lVar6 = 0x20;
LAB_0c619f9c:
    (**(code **)(*plStack_108 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (plStack_108 != (long *)0x0) goto LAB_0c619f9c;
  }
  if (unaff_R12D != 0xffffffff) {
    (**(code **)(&UNK_0f39a718 + (ulong)unaff_R12D * 8))(&plStack_160,auStack_f0);
  }
LAB_0c619fd4:
  return uVar4 >> 0x20;
}


