/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeeddbb0 (ELF vaddr 0xedddbb0)
 * Label: callee-of:0x8486630
 * Body:  [[0eeddbb0, 0eeddcb5]]
 * Ghidra: FUN_0eeddbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0eeddbb0(undefined2 *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  undefined7 *puVar2;
  byte bStack_68;
  undefined7 uStack_67;
  ulong uStack_60;
  undefined7 *puStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined7 *puStack_40;
  undefined7 *puStack_38;
  ulong uStack_30;
  undefined1 *puStack_28;
  undefined *puStack_20;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    (*param_2)(&bStack_68,param_3);
    puStack_38 = &uStack_67;
    uStack_30 = (ulong)(bStack_68 >> 1);
    if ((bStack_68 & 1) != 0) {
      uStack_30 = uStack_60;
      puStack_38 = puStack_58;
    }
    puStack_20 = &UNK_0eee16c0;
    puStack_28 = &stack0x00000008;
    func_0x0470d9a0(&bStack_50,&UNK_01358346,0x18,0xfd,&puStack_38);
    if ((bStack_68 & 1) != 0) {
      func_0x0412a280(puStack_58,CONCAT71(uStack_67,bStack_68) & 0xfffffffffffffffe);
    }
    puVar2 = puStack_40;
    if ((bStack_50 & 1) == 0) {
      puVar2 = &uStack_4f;
    }
    cVar1 = FUN_0eeddcf0(&UNK_012ee1a2,&UNK_01198d5e,0x11,&UNK_0126e3a6,&UNK_0138d205,puVar2);
    if ((bStack_50 & 1) != 0) {
      func_0x0412a280(puStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
    }
    if (cVar1 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  return *param_1;
}


