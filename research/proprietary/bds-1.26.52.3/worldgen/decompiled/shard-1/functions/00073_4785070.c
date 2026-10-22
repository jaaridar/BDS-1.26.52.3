/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4885070 (ELF vaddr 0x4785070)
 * Label: callee-of:0x4de9260
 * Body:  [[04885070, 0488511f]]
 * Ghidra: FUN_04885070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_04885070(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_3 < 0x17) {
    pcVar2 = (char *)((long)param_1 + 1);
    *(char *)param_1 = (char)param_3 * '\x02';
    if (param_3 != 0) {
      func_0x0eee2ee0(pcVar2,param_2,param_3);
    }
  }
  else {
    if (param_3 + 9 < 0x1f) {
      func_0x04882e30();
      pcVar1 = (code *)swi(3);
      puVar3 = (ulong *)(*pcVar1)();
      return puVar3;
    }
    uVar4 = 0x2c;
    if (0x2c < param_3) {
      uVar4 = param_3;
    }
    uVar4 = (uVar4 | 7) + 1;
    pcVar2 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar4);
    if (pcVar2 == (char *)0x0) {
      func_0x0eec74c0(uVar4,0);
    }
    memcpy(pcVar2,param_2,param_3);
    param_1[2] = (ulong)pcVar2;
    *param_1 = uVar4 | 1;
    param_1[1] = param_3;
  }
  pcVar2[param_3] = '\0';
  return param_1;
}


