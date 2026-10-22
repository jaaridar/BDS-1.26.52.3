/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ccf10 (ELF vaddr 0xc5ccf10)
 * Label: JigsawBlock::vslot98
 * Body:  [[0c6ccf10, 0c6cd007]]
 * Ghidra: wg_JigsawBlock__vslot98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * wg_JigsawBlock__vslot98(ulong *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  
  bVar2 = *(byte *)(param_2 + 8);
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x10);
  }
  uVar1 = uVar6 + 5;
  if (0xfffffffffffffff7 < uVar1) {
    func_0x04882e30();
    pcVar3 = (code *)swi(3);
    puVar4 = (ulong *)(*pcVar3)();
    return puVar4;
  }
  if (uVar1 < 0x17) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(char *)param_1 = (char)uVar1 * '\x02';
    pcVar7 = (char *)((long)param_1 + 1);
    if (uVar6 == 0) goto LAB_0c6ccfd4;
    if ((bVar2 & 1) == 0) goto LAB_0c6ccfc5;
LAB_0c6ccf6d:
    param_2 = *(long *)(param_2 + 0x18);
  }
  else {
    uVar5 = 0x1a;
    if ((uVar1 | 7) != 0x17) {
      uVar5 = (uVar1 | 7) + 1;
    }
    pcVar7 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar5);
    if (pcVar7 == (char *)0x0) {
      func_0x0eec74c0(uVar5,0);
    }
    *param_1 = uVar5 | 1;
    param_1[2] = (ulong)pcVar7;
    param_1[1] = uVar1;
    if ((bVar2 & 1) != 0) goto LAB_0c6ccf6d;
LAB_0c6ccfc5:
    param_2 = param_2 + 9;
  }
  func_0x0eee2ee0(pcVar7,param_2,uVar6);
LAB_0c6ccfd4:
  builtin_strncpy(pcVar7 + uVar6,".name",6);
  return param_1;
}


