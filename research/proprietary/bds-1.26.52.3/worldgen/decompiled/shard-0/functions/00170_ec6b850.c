/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xed6b850 (ELF vaddr 0xec6b850)
 * Label: callee-of:0x82eb2d0
 * Body:  [[0ed6b850, 0ed6bb76]]
 * Ghidra: FUN_0ed6b850
 */


bool FUN_0ed6b850(long param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_110;
  long lStack_108;
  undefined1 uStack_100;
  undefined1 uStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e0;
  undefined8 auStack_b0 [2];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  char cStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char cStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((code *)param_3[7] == (code *)0x0) {
    lStack_f8 = 0;
    uStack_f0 = 0;
    func_0x048b1dc0(&lStack_f8);
    lVar1 = lStack_f8;
    uVar5 = uStack_f0;
    if (lStack_f8 != 0) goto LAB_0ed6b8c5;
LAB_0ed6b952:
    lVar1 = func_0x048aead0(uVar5);
    if (*(int *)(lVar1 + 0x60) == -0x2b3da790) goto LAB_0ed6b8d6;
LAB_0ed6b96b:
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  else {
    lVar1 = param_3[6];
    if (param_3[6] == 0) {
      uVar5 = param_3[5];
      (*(code *)param_3[7])(0,param_3,0);
      lVar1 = param_3[6];
      if (param_3[6] == 0) goto LAB_0ed6b952;
    }
LAB_0ed6b8c5:
    if (*(int *)(lVar1 + 0x60) != -0x2b3da790) goto LAB_0ed6b96b;
LAB_0ed6b8d6:
    if (*(long **)(lVar1 + 0x68) == (long *)0x0) goto LAB_0ed6b96b;
    lVar1 = **(long **)(lVar1 + 0x68);
    *(long *)(param_1 + 0x2c8) = lVar1;
    if (lVar1 != 0) {
      auStack_70[0] = 0;
      uStack_60 = *(undefined4 *)(param_3 + 2);
      uStack_5c = *(undefined4 *)((long)param_3 + 0x14);
      uStack_58 = *(undefined4 *)(param_3 + 3);
      uStack_54 = *(undefined4 *)((long)param_3 + 0x1c);
      uStack_50 = *(undefined4 *)(param_3 + 4);
      cStack_4c = *(char *)((long)param_3 + 0x24);
      if (cStack_4c != '\0') {
        if (cStack_4c == '\x02') {
          (*(code *)param_3[2])(5,param_3,auStack_70);
        }
        else {
          auStack_70[0] = *param_3;
          *param_3 = 0;
        }
      }
      uStack_48 = *(undefined4 *)(param_3 + 5);
      uStack_44 = *(undefined4 *)((long)param_3 + 0x2c);
      uStack_40 = *(undefined4 *)(param_3 + 6);
      uStack_3c = *(undefined4 *)((long)param_3 + 0x34);
      param_3[6] = 0;
      uStack_38 = param_3[7];
      param_3[7] = 0;
      FUN_049e8590(&lStack_f8,auStack_70);
      plVar4 = (long *)&UNK_0f4e39d0;
      if (*(long **)(param_1 + 0x2c8) != (long *)0x0) {
        plVar4 = *(long **)(param_1 + 0x2c8);
      }
      uStack_100 = 0;
      uStack_fc = 0;
      lStack_110 = param_1 + 0x10;
      lStack_108 = param_1 + 0x2d0;
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2,&lStack_f8,&lStack_110);
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&lStack_f8);
      }
      iVar3 = *(int *)(param_1 + 0x2c0);
      if ((code *)CONCAT44(uStack_54,uStack_58) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_54,uStack_58))(auStack_70);
      }
      goto LAB_0ed6ba8b;
    }
  }
  puVar2 = (undefined *)0x0;
  if (param_4 != &UNK_0f4e39d0) {
    puVar2 = param_4;
  }
  *(undefined **)(param_1 + 0x2c8) = puVar2;
  auStack_b0[0] = 0;
  uStack_a0 = *(undefined4 *)(param_3 + 2);
  uStack_9c = *(undefined4 *)((long)param_3 + 0x14);
  uStack_98 = *(undefined4 *)(param_3 + 3);
  uStack_94 = *(undefined4 *)((long)param_3 + 0x1c);
  uStack_90 = *(undefined4 *)(param_3 + 4);
  cStack_8c = *(char *)((long)param_3 + 0x24);
  if (cStack_8c != '\0') {
    if (cStack_8c == '\x02') {
      (*(code *)param_3[2])(5,param_3,auStack_b0);
    }
    else {
      auStack_b0[0] = *param_3;
      *param_3 = 0;
    }
  }
  uStack_88 = *(undefined4 *)(param_3 + 5);
  uStack_84 = *(undefined4 *)((long)param_3 + 0x2c);
  uStack_80 = *(undefined4 *)(param_3 + 6);
  uStack_7c = *(undefined4 *)((long)param_3 + 0x34);
  param_3[6] = 0;
  uStack_78 = param_3[7];
  param_3[7] = 0;
  FUN_049e8590(&lStack_f8,auStack_b0);
  plVar4 = (long *)&UNK_0f4e39d0;
  if (*(long **)(param_1 + 0x2c8) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x2c8);
  }
  uStack_100 = 0;
  uStack_fc = 0;
  lStack_110 = param_1 + 0x10;
  lStack_108 = param_1 + 0x2d0;
  (**(code **)(*plVar4 + 0x38))(plVar4,param_2,&lStack_f8,&lStack_110);
  if (pcStack_e0 != (code *)0x0) {
    (*pcStack_e0)(&lStack_f8);
  }
  iVar3 = *(int *)(param_1 + 0x2c0);
  if ((code *)CONCAT44(uStack_94,uStack_98) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_94,uStack_98))(auStack_b0);
  }
LAB_0ed6ba8b:
  return iVar3 == -1;
}


