/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x89256c0 (ELF vaddr 0x88256c0)
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<Biom
 * Body:  [[089256c0, 08925978]]
 * Ghidra: FUN_089256c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089256c0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_68;
  code *pcStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  long *plStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3[7] == 0) {
    if ((DAT_0f5e18e8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e18e8), iVar4 != 0)) {
      func_0x08902a10();
      func_0x0410844d(&DAT_0f5e18e8);
    }
    uStack_38 = _DAT_0f5e18d8;
    uStack_34 = uRam000000000f5e18dc;
    uStack_30 = _DAT_0f5e18e0;
    uStack_2c = uRam000000000f5e18e4;
    func_0x0470d9a0(&uStack_78,&UNK_012075a7,0x4f,0xd,&uStack_38);
    puVar5 = puStack_68;
    if (((ulong)uStack_78 & 1) == 0) {
      puVar5 = (undefined *)((long)&uStack_78 + 1);
    }
    cVar3 = func_0x0eeddcf0(puVar5,&UNK_01288a83,0xf4,&UNK_013ab8cc,&UNK_014d0395);
    if (((ulong)uStack_78 & 1) != 0) {
      func_0x0412a280(puStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
    }
    if (cVar3 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  cVar3 = *(char *)((long)param_3 + 0x24);
  puVar6 = (undefined8 *)*param_3;
  uStack_78 = puVar6;
  if (cVar3 == '\x02') {
    uStack_78 = param_3;
  }
  if (uStack_78 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x598936e7) {
    uVar1 = param_3[5];
    lVar8 = param_3[6];
    if (lVar8 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar8 = param_3[6];
      cVar3 = *(char *)((long)param_3 + 0x24);
      puVar6 = (undefined8 *)*param_3;
    }
    if (cVar3 == '\x02') {
      puVar6 = param_3;
    }
    uStack_78 = (undefined8 *)func_0x0488e200(uVar1,lVar8,0xa676c919,puVar6);
  }
  (**(code **)(*param_2 + 0x80))(param_2,*(undefined1 *)(uStack_78 + 0x15));
  if (*(char *)(uStack_78 + 0x15) == '\x01') {
    plVar2 = (long *)param_3[5];
    puStack_68 = &UNK_08902c30;
    uStack_58 = 0xbfd2286a;
    pcStack_60 = (code *)0x0;
    uStack_54 = 4;
    puStack_48 = (undefined *)0x0;
    puStack_40 = &UNK_08902b50;
    plStack_50 = plVar2;
    if ((DAT_0f5e18c8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e18c8), iVar4 != 0)) {
      func_0x08902900();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e1848,0xf53dab8);
      func_0x0410844d(&DAT_0f5e18c8);
    }
    plVar7 = (long *)(*plVar2 +
                     (ulong)((int)((ulong)(plVar2[1] - *plVar2) >> 3) - 1U &
                            *(uint *)(_DAT_0f5e1848 + 4)) * 8);
    do {
      lVar8 = *plVar7;
      if (lVar8 == -1) goto LAB_089258a0;
      plVar7 = (long *)(plVar2[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar2[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5e1848 + 4));
    if (plVar7 == (long *)plVar2[4]) {
LAB_089258a0:
      puVar5 = &DAT_0f5e1848;
      puStack_48 = &DAT_0f5e1848;
    }
    else {
      puVar5 = (undefined *)plVar7[2];
      puStack_48 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)func_0x048aead0();
      }
    }
    (**(code **)(*(long *)**(undefined8 **)(puVar5 + 0x68) + 0x38))
              ((long *)**(undefined8 **)(puVar5 + 0x68),param_2,&uStack_78,param_4);
    if (pcStack_60 != (code *)0x0) {
      (*pcStack_60)(&uStack_78);
    }
  }
  return;
}


