/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cb4d0 (ELF vaddr 0xc5cb4d0)
 * Label: JigsawBlock::vslot77
 * Body:  [[0c6cb4d0, 0c6cb808]]
 * Ghidra: wg_JigsawBlock__vslot77
 */


undefined8 * wg_JigsawBlock__vslot77(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined *puStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_20;
  
  func_0x0c44ee60(&puStack_98,*(undefined8 *)(param_2 + 0x200),1,0);
  puStack_98 = &UNK_0f36e858;
  if ((plStack_90 == (long *)0x0) || (*plStack_90 == 0)) {
    bVar5 = (*(byte *)(param_2 + 0xd0) & 1) != 0;
    lVar4 = param_2 + 0xd1;
    if (bVar5) {
      lVar4 = *(long *)(param_2 + 0xe0);
    }
    uVar3 = (ulong)(*(byte *)(param_2 + 0xd0) >> 1);
    if (bVar5) {
      uVar3 = *(ulong *)(param_2 + 0xd8);
    }
    func_0x0c44f180(&puStack_118,lVar4,uVar3,1,0,0);
    puStack_118 = &UNK_0f36e858;
    if ((plStack_110 != (long *)0x0) && ((long *)*plStack_110 != (long *)0x0)) {
      cVar2 = (**(code **)(*(long *)*plStack_110 + 0x50))();
      if ((cVar2 != '\0') && ((plStack_110 != (long *)0x0 && (*plStack_110 != 0)))) {
        func_0x0c44ed40(param_1);
        *param_1 = &UNK_0f36e858;
        func_0x0c44f4e0(param_1,&puStack_118);
        plVar1 = plStack_a0;
        puStack_118 = &UNK_0f36e918;
        plStack_a0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_c8 != 0) {
          lStack_c0 = lStack_c8;
          func_0x0412a280(lStack_c8,lStack_b8 - lStack_c8);
        }
        if (lStack_e8 != 0) {
          lStack_e0 = lStack_e8;
          func_0x0412a280(lStack_e8,lStack_d8 - lStack_e8);
        }
        plVar1 = plStack_108;
        plStack_108 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plStack_110 != (long *)0x0) {
          LOCK();
          *(int *)((long)plStack_110 + 0xc) = *(int *)((long)plStack_110 + 0xc) + -1;
          UNLOCK();
          if (((*(int *)((long)plStack_110 + 0xc) < 1) && (*plStack_110 == 0)) &&
             (plStack_110 != (long *)0x0)) {
            func_0x0412a280(plStack_110,0x10);
          }
        }
        goto LAB_0c6cb72d;
      }
    }
    plVar1 = plStack_a0;
    puStack_118 = &UNK_0f36e918;
    plStack_a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_c8 != 0) {
      lStack_c0 = lStack_c8;
      func_0x0412a280(lStack_c8,lStack_b8 - lStack_c8);
    }
    if (lStack_e8 != 0) {
      lStack_e0 = lStack_e8;
      func_0x0412a280(lStack_e8,lStack_d8 - lStack_e8);
    }
    plVar1 = plStack_108;
    plStack_108 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plStack_110 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_110 + 0xc) = *(int *)((long)plStack_110 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_110 + 0xc) < 1) && (*plStack_110 == 0)) &&
         (plStack_110 != (long *)0x0)) {
        func_0x0412a280(plStack_110,0x10);
      }
    }
  }
  func_0x0c44ed40(param_1);
  *param_1 = &UNK_0f36e858;
  func_0x0c44f4e0(param_1,&puStack_98);
LAB_0c6cb72d:
  plVar1 = plStack_20;
  puStack_98 = &UNK_0f36e918;
  plStack_20 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x0412a280(lStack_68,lStack_58 - lStack_68);
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (plStack_90 != (long *)0x0) {
    LOCK();
    *(int *)((long)plStack_90 + 0xc) = *(int *)((long)plStack_90 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)plStack_90 + 0xc) < 1) && (*plStack_90 == 0)) &&
       (plStack_90 != (long *)0x0)) {
      func_0x0412a280(plStack_90,0x10);
    }
  }
  return param_1;
}


