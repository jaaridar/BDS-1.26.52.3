/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd352d10 (ELF vaddr 0xd252d10)
 * Label: callee-of:0xc970eb0
 * Body:  [[0d352d10, 0d352dd4] [0d352de0, 0d352ec3]]
 * Ghidra: FUN_0d352d10
 */


long FUN_0d352d10(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_38;
  
  plVar8 = *(long **)(param_1 + 0x30);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar8 != plVar1) {
    lStack_38 = (long)param_2 + 9;
    do {
      lVar7 = *plVar8;
      uStack_58 = 0;
      lStack_50 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      plStack_48 = (long *)0x0;
      if (&lStack_68 != (long *)(lVar7 + 8)) {
        if ((*(byte *)(lVar7 + 0x10) & 1) == 0) {
          lStack_50 = *(long *)(lVar7 + 0x20);
          uStack_60 = *(ulong *)(lVar7 + 0x10);
          uStack_58 = *(ulong *)(lVar7 + 0x18);
        }
        else {
          func_0x04885070(&uStack_60,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x18));
        }
      }
      uVar3 = uStack_60;
      lStack_68 = *(long *)(lVar7 + 8);
      if (lStack_68 == *param_2) {
        bVar2 = true;
        if ((plStack_48 != param_2) || ((long *)param_2[4] != &lStack_68)) {
          if ((uStack_60 & 1) == 0) {
            uVar6 = uStack_60 >> 1 & 0x7f;
            uVar5 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0d352df3;
LAB_0d352e0b:
            if (uVar6 != param_2[2]) goto LAB_0d352e40;
          }
          else {
            uVar5 = (ulong)*(byte *)(param_2 + 1);
            uVar6 = uStack_58;
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0d352e0b;
LAB_0d352df3:
            if (uVar6 != uVar5 >> 1) goto LAB_0d352e40;
          }
          if ((uStack_60 & 1) == 0) {
            lVar7 = (long)&uStack_60 + 1;
            if ((uVar5 & 1) != 0) goto LAB_0d352e8b;
LAB_0d352e28:
            iVar4 = func_0x0eee3000(lVar7,lStack_38);
          }
          else {
            lVar7 = lStack_50;
            if ((uVar5 & 1) == 0) goto LAB_0d352e28;
LAB_0d352e8b:
            iVar4 = func_0x0eee3000(lVar7,param_2[3]);
          }
          if (iVar4 != 0) goto LAB_0d352e40;
          param_2[4] = (long)&lStack_68;
          plStack_48 = param_2;
          goto joined_r0x0d352ea5;
        }
        if ((uStack_60 & 1) == 0) goto LAB_0d352dc7;
LAB_0d352e56:
        func_0x0412a280(lStack_50,uStack_60 & 0xfffffffffffffffe);
        if (bVar2) {
LAB_0d352eb1:
          return *plVar8;
        }
      }
      else {
LAB_0d352e40:
        plStack_48 = (long *)0x0;
        bVar2 = false;
joined_r0x0d352ea5:
        if ((uVar3 & 1) != 0) goto LAB_0d352e56;
LAB_0d352dc7:
        if (bVar2) goto LAB_0d352eb1;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return 0;
}


