/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd28cf90
 * Label: string:ZN3Puv8internal21CerealUpgraderVisitor14performUpgradeIN11Sh
 * Body:  [[0d28cf90, 0d28d0d6] [0d28d0ee, 0d28d10f]]
 * Ghidra: FUN_0d28cf90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d28cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long *plVar1;
  long in_RAX;
  long lVar2;
  undefined8 *puVar3;
  long unaff_RBX;
  undefined1 unaff_BPL;
  
  lVar2 = (**(code **)((ulong)((int)in_RAX + 0x22b9418) + 0x10))
                    (param_1,0x20000,param_3,param_4 + *(char *)(in_RAX + -0x75));
  if (lVar2 == 0) {
    func_0x0eec74c0(0x20000,0);
  }
  *(long *)(unaff_RBX + 0x48) = lVar2;
  *(long *)(unaff_RBX + 0x58) = lVar2 + 0x20000;
  func_0x0eee2dd0(lVar2,0,0x20000);
  *(long *)(unaff_RBX + 0x50) = lVar2 + 0x20000;
  *(undefined8 *)(unaff_RBX + 0xa0) = 0;
  *(undefined1 *)(unaff_RBX + 0xa8) = 0;
  *(undefined8 *)(unaff_RBX + 0x60) = 0;
  *(undefined8 *)(unaff_RBX + 0x68) = 0;
  *(undefined8 *)(unaff_RBX + 0x6c) = 0;
  *(undefined8 *)(unaff_RBX + 0x74) = 0;
  *(undefined8 *)(unaff_RBX + 0x80) = 0;
  *(undefined8 *)(unaff_RBX + 0x88) = 0;
  *(undefined8 *)(unaff_RBX + 0x89) = 0;
  *(undefined8 *)(unaff_RBX + 0x91) = 0;
  *(undefined1 *)(unaff_RBX + 0xa9) = unaff_BPL;
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  LOCK();
  lVar2 = puVar3[2];
  puVar3[2] = 0;
  UNLOCK();
  plVar1 = *(long **)(unaff_RBX + 0xa0);
  *(undefined8 **)(unaff_RBX + 0xa0) = puVar3;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[2];
    if ((lVar2 != *plVar1) || ((int)plVar1[1] != 0)) {
      lVar2 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
      if ((char)lVar2 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar1);
    }
    return lVar2;
  }
  return lVar2;
}


