/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a54ef0 (ELF vaddr 0x4954ef0)
 * Label: caller-of-seed
 * Body:  [[04a54ef0, 04a54f61] [04a54f70, 04a5502d] [0533d870, 0533d939]]
 * Ghidra: FUN_04a54ef0
 */


/* WARNING: Possible PIC construction at 0x0533d8a6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d8dd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0533d914: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04a54ef0(long *param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *puVar4 = &UNK_0efa5188;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar8 = param_1 + 1;
    plVar9 = plVar8;
  }
  else {
    do {
      while (plVar8 = plVar3, (int)plVar8[4] <= param_2) {
        if (param_2 <= (int)plVar8[4]) {
          puVar7 = &UNK_0efa5188;
          *puVar4 = &UNK_0efa5188;
          lVar1 = puVar4[0xb];
          puVar4[0xb] = 0;
          if (lVar1 != 0) {
            puVar5 = *(undefined8 **)(lVar1 + 8);
            if (puVar5 != (undefined8 *)0x0) {
              *(undefined8 **)(lVar1 + 0x10) = puVar5;
              register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
              puVar4 = puVar5;
              goto SUB_0412a280;
            }
            puVar7 = (undefined *)func_0x0412a280(lVar1,0x28);
          }
          lVar1 = puVar4[10];
          puVar4[10] = 0;
          if (lVar1 != 0) {
            puVar5 = *(undefined8 **)(lVar1 + 8);
            if (puVar5 != (undefined8 *)0x0) {
              *(undefined8 **)(lVar1 + 0x10) = puVar5;
              register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
              puVar4 = puVar5;
              goto SUB_0412a280;
            }
            puVar7 = (undefined *)func_0x0412a280(lVar1,0x28);
          }
          lVar1 = puVar4[9];
          puVar4[9] = 0;
          if (lVar1 != 0) {
            puVar5 = *(undefined8 **)(lVar1 + 8);
            if (puVar5 == (undefined8 *)0x0) {
              puVar7 = (undefined *)func_0x0412a280(lVar1,0x28);
            }
            else {
              *(undefined8 **)(lVar1 + 0x10) = puVar5;
              register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
              puVar4 = puVar5;
            }
          }
SUB_0412a280:
          *(undefined **)((long)register0x00000020 + -8) = puVar7;
          if (puVar4 != (undefined8 *)0x0) {
            pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
            (*pcVar2)(&DAT_0f5463b0,puVar4);
          }
          return *(undefined8 *)((long)register0x00000020 + -8);
        }
        plVar3 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar9 = plVar8 + 1;
          goto LAB_04a54f97;
        }
      }
      plVar3 = (long *)*plVar8;
      plVar9 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
LAB_04a54f97:
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *(int *)(puVar5 + 4) = param_2;
  puVar5[5] = puVar4;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = plVar8;
  *plVar9 = (long)puVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  uVar6 = func_0x048bed00(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  return uVar6;
}


