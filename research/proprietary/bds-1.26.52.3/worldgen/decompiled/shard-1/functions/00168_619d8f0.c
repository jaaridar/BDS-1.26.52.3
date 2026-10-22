/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629d8f0 (ELF vaddr 0x619d8f0)
 * Label: callee-of:0x61415a0
 * Body:  [[0629d8f0, 0629d935] [0629d940, 0629d95b] [0629d960, 0629d9bb]]
 * Ghidra: FUN_0629d8f0
 */


/* WARNING: Possible PIC construction at 0x0629d99f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0629d988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0629d98d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0629d8f0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_30 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX;
  }
  auStack_30[0] = 0x629d90f;
  FUN_0629d8f0(param_1,*param_2);
  auStack_30[0] = 0x629d91b;
  uVar4 = FUN_0629d8f0(param_1,param_2[1]);
  puVar2 = (undefined8 *)param_2[5];
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_2[6];
    puVar5 = puVar2;
    if (puVar2 != puVar6) {
      do {
        if ((*(byte *)(puVar6 + -3) & 1) == 0) {
          bVar1 = *(byte *)(puVar6 + -6);
        }
        else {
          auStack_30[0] = 0x629d971;
          uVar4 = func_0x0412a280(puVar6[-1],puVar6[-3] & 0xfffffffffffffffe);
          bVar1 = *(byte *)(puVar6 + -6);
        }
        if ((bVar1 & 1) != 0) {
          param_2 = (undefined8 *)puVar6[-4];
          register0x00000020 = (BADSPACEBASE *)auStack_30;
          auStack_30[0] = 0x629d98d;
          goto SUB_0412a280;
        }
        puVar6 = puVar6 + -6;
      } while (puVar6 != puVar2);
      puVar5 = (undefined8 *)param_2[5];
    }
    param_2[6] = puVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x629d9a4;
    param_2 = puVar5;
  }
SUB_0412a280:
  *(undefined8 *)((long)register0x00000020 + -8) = uVar4;
  if (param_2 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


