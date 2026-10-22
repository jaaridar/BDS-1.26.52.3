/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48e6440 (ELF vaddr 0x47e6440)
 * Label: callee-of:0x82eb2d0
 * Body:  [[048e6440, 048e65ad]]
 * Ghidra: FUN_048e6440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_048e6440(ulong *param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_2 + 0x430) == '\x01') {
    puVar2 = *(undefined1 **)(param_2 + 0x3c0);
    if (*(long *)(param_2 + 0x3c8) - (long)puVar2 < 1) {
      func_0x048fcad0(param_2 + 0x3a8,1);
      puVar2 = *(undefined1 **)(param_2 + 0x3c0);
    }
    *(undefined1 **)(param_2 + 0x3c0) = puVar2 + 1;
    *puVar2 = 0;
    *(long *)(param_2 + 0x3c0) = *(long *)(param_2 + 0x3c0) + -1;
    uVar7 = *(undefined8 *)(param_2 + 0x3b8);
  }
  else {
    puVar2 = *(undefined1 **)(param_2 + 0x318);
    if (*(long *)(param_2 + 800) - (long)puVar2 < 1) {
      func_0x048fcad0(param_2 + 0x300,1);
      puVar2 = *(undefined1 **)(param_2 + 0x318);
    }
    *(undefined1 **)(param_2 + 0x318) = puVar2 + 1;
    *puVar2 = 0;
    *(long *)(param_2 + 0x318) = *(long *)(param_2 + 0x318) + -1;
    uVar7 = *(undefined8 *)(param_2 + 0x310);
  }
  uVar3 = strlen(uVar7);
  if (0xfffffffffffffff7 < uVar3) {
    func_0x04882e30();
    pcVar1 = (code *)swi(3);
    puVar5 = (ulong *)(*pcVar1)();
    return puVar5;
  }
  if (uVar3 < 0x17) {
    *(char *)param_1 = (char)uVar3 * '\x02';
    pcVar4 = (char *)((long)param_1 + 1);
    if (uVar3 == 0) goto LAB_048e6541;
  }
  else {
    uVar6 = 0x1a;
    if ((uVar3 | 7) != 0x17) {
      uVar6 = (uVar3 | 7) + 1;
    }
    pcVar4 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (pcVar4 == (char *)0x0) {
      func_0x0eec74c0(uVar6,0);
    }
    param_1[2] = (ulong)pcVar4;
    *param_1 = uVar6 | 1;
    param_1[1] = uVar3;
  }
  func_0x0eee2ee0(pcVar4,uVar7,uVar3);
LAB_048e6541:
  pcVar4[uVar3] = '\0';
  return param_1;
}


