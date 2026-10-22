/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a54d60 (ELF vaddr 0x4954d60)
 * Label: caller-of-seed
 * Body:  [[04a54d60, 04a54e03] [04a54e10, 04a54ecd] [0533d980, 0533d9d0]]
 * Ghidra: FUN_04a54d60
 */


/* WARNING: Possible PIC construction at 0x0533d9b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0533d9bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04a54d60(long *param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *puVar3 = &UNK_0efa5140;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar7 = param_1 + 1;
    plVar8 = plVar7;
  }
  else {
    do {
      while (plVar7 = plVar2, (int)plVar7[4] <= param_2) {
        if (param_2 <= (int)plVar7[4]) {
          puVar6 = &UNK_0efa5140;
          *puVar3 = &UNK_0efa5140;
          puVar4 = (undefined8 *)puVar3[0x19];
          puVar3[0x19] = 0;
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = (undefined *)FUN_052f1e60(puVar4);
            register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
            puVar3 = puVar4;
          }
          *(undefined **)((long)register0x00000020 + -8) = puVar6;
          if (puVar3 != (undefined8 *)0x0) {
            pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
            (*pcVar1)(&DAT_0f5463b0,puVar3);
          }
          return *(undefined8 *)((long)register0x00000020 + -8);
        }
        plVar2 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_04a54e37;
        }
      }
      plVar2 = (long *)*plVar7;
      plVar8 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_04a54e37:
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *(int *)(puVar4 + 4) = param_2;
  puVar4[5] = puVar3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar7;
  *plVar8 = (long)puVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  uVar5 = func_0x048bed00(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return uVar5;
}


