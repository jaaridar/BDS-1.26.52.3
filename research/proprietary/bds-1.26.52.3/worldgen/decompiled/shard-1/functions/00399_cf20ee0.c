/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd020ee0 (ELF vaddr 0xcf20ee0)
 * Label: caller-of-seed
 * Body:  [[0d020ee0, 0d020fb2]]
 * Ghidra: FUN_0d020ee0
 */


undefined8 *
FUN_0d020ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  plVar4 = (long *)(**(code **)(*param_4 + 0x20))(param_4,param_5);
  if (plVar4 == (long *)0x0) {
LAB_0d020f3f:
    wg_JigsawBlock__vslot4(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (*(char *)((long)plVar4 + 0x14) == '\x19') {
      cVar3 = (**(code **)(*plVar4 + 0x88))(plVar4,2);
      if (cVar3 == '\0') goto LAB_0d020f3f;
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x138))(plVar4);
    }
    else {
      puVar5 = (undefined8 *)&DAT_0f72b510;
    }
    uVar1 = *(undefined4 *)(puVar5 + 1);
    uVar2 = *puVar5;
    uStack_44 = (undefined4)*(undefined8 *)((long)puVar5 + 0xc);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
    param_1[2] = CONCAT44(*(undefined4 *)((long)puVar5 + 0x14),uStack_40);
    *param_1 = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
  }
  return param_1;
}


