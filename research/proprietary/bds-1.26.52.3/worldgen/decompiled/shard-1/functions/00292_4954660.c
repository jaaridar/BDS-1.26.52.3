/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a54660 (ELF vaddr 0x4954660)
 * Label: caller-of-seed
 * Body:  [[04a54660, 04a546ad] [04a546b0, 04a5476d] [0c859bd0, 0c859bd9]]
 * Ghidra: FUN_04a54660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_04a54660(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar3 = &UNK_0f3de8f0;
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar6 = param_1 + 1;
    plVar7 = plVar6;
  }
  else {
    do {
      while( true ) {
        plVar6 = plVar2;
        uVar1 = *(uint *)(plVar6 + 4);
        if (param_2 < (int)uVar1) break;
        if (param_2 <= (int)uVar1) {
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar3);
          }
          return (ulong)uVar1;
        }
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 1;
          goto LAB_04a546d7;
        }
      }
      plVar2 = (long *)*plVar6;
      plVar7 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_04a546d7:
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *(int *)(puVar4 + 4) = param_2;
  puVar4[5] = puVar3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar6;
  *plVar7 = (long)puVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  uVar5 = FUN_048bed00(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return uVar5;
}


