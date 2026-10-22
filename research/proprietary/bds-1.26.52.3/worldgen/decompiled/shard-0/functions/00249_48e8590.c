/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49e8590 (ELF vaddr 0x48e8590)
 * Label: callee-of:0x61407e0
 * Body:  [[049e8590, 049e864c]]
 * Ghidra: FUN_049e8590
 */


undefined8 * FUN_049e8590(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *apuStack_38 [2];
  code *pcStack_28;
  code *pcStack_20;
  undefined4 uStack_18;
  char cStack_14;
  
  pcStack_20 = (code *)0x0;
  cVar1 = *(char *)((long)param_2 + 0x24);
  puVar5 = param_2;
  if (cVar1 != '\x02') {
    puVar5 = (undefined8 *)*param_2;
  }
  pcStack_28 = (code *)param_2[2];
  uStack_18 = *(undefined4 *)(param_2 + 4);
  cStack_14 = '\x04';
  if (cVar1 != '\x04') {
    cStack_14 = (cVar1 != '\0') * '\x03';
  }
  *param_1 = 0;
  param_1[2] = pcStack_28;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = uStack_18;
  *(char *)((long)param_1 + 0x24) = cStack_14;
  apuStack_38[0] = puVar5;
  if (cStack_14 != '\0') {
    if (cStack_14 == '\x02') {
      (*pcStack_28)(5,apuStack_38,param_1);
    }
    else {
      apuStack_38[0] = (undefined8 *)0x0;
      *param_1 = puVar5;
    }
  }
  uVar2 = *(undefined4 *)((long)param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((long)param_1 + 0x34) = uVar4;
  param_1[7] = param_2[7];
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(apuStack_38);
  }
  return param_1;
}


