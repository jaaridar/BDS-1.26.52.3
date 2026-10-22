/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb715e10
 * Label: string:Invalid Custom Biome Source
 * Body:  [[0b715e10, 0b715f6e] [0b715fbf, 0b716009]]
 * Ghidra: FUN_0b715e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0b715e10(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char unaff_BPL;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 *in_stack_00000018;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  
  func_0x0b716410(param_1,param_2,(ulong)&stack0x00000008 & 0xffffffff);
  func_0x0b7160a0(in_stack_00000040,&stack0x00000020,1);
  if ((bStack0000000000000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT71(uStack0000000000000021,bStack0000000000000020) & 0xfffffffffffffffe);
  }
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  if (unaff_BPL != '\0') {
    if ((DAT_0f5ea4a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5ea4a0), iVar5 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar4 = _UNK_0124cf32;
    in_stack_00000008 = 0x29;
    in_stack_00000010 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _DAT_0124cf2a;
    *(undefined8 *)(puVar6 + 6) = uVar4;
    uVar3 = _UNK_0124cf26;
    uVar2 = _UNK_0124cf22;
    uVar1 = _UNK_0124cf1e;
    *puVar6 = _DAT_0124cf1a;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar6[8] = 0x64657265;
    *(undefined1 *)(puVar6 + 9) = 0;
    in_stack_00000018 = puVar6;
    func_0x0b716680(&stack0x00000020,&DAT_0f5ea138,&stack0x00000008);
    func_0x0b7160a0(in_stack_00000040,&stack0x00000020,0);
    if ((bStack0000000000000020 & 1) != 0) {
      func_0x0412a280(in_stack_00000030,
                      CONCAT71(uStack0000000000000021,bStack0000000000000020) & 0xfffffffffffffffe);
    }
    if ((in_stack_00000008 & 1) != 0) {
      func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
    }
  }
  return 1;
}



/* ---- referenced strings ----
 * 0x124cf1a  chat.logging.warning.messageFiltered
 * 0x124cf2a  ning.messageFiltered
 */
