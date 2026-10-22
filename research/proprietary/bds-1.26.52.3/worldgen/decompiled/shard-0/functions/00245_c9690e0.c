/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca690e0 (ELF vaddr 0xc9690e0)
 * Label: Dimension::vslot40
 * Body:  [[0ca690e0, 0ca692ca] [0ca692d0, 0ca6937d]]
 * Ghidra: wg_Dimension__vslot40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot40
               (long param_1,long *param_2,int *param_3,int param_4,long param_5,long param_6,
               int param_7,undefined8 *param_8,char param_9,undefined8 *param_10)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iStack_4c;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  if (((param_9 == '\0') &&
      (iVar3 = (**(code **)(*param_2 + 0x98))(param_2), *(int *)(param_1 + 0x170) == iVar3)) &&
     (cVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x9f0))(), cVar2 == '\0')) {
    iStack_38 = param_3[2] >> 4;
    uStack_40 = CONCAT44((int)((long)*(undefined8 *)param_3 >> 0x24),
                         (int)*(undefined8 *)param_3 >> 4);
    puStack_48 = &uStack_40;
    lVar4 = func_0x0ca7d600(param_1 + 0x410,puStack_48,&UNK_01563a4f,&puStack_48,&iStack_4c);
    iStack_4c = param_7;
    puStack_48 = param_8;
    if (param_4 == 1) {
      puVar6 = *(undefined8 **)(lVar4 + 0x40);
      if (puVar6 < *(undefined8 **)(lVar4 + 0x48)) {
        *(int *)(puVar6 + 1) = param_3[2];
        *puVar6 = *(undefined8 *)param_3;
        *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)(param_5 + 0x11c);
        *(char *)(puVar6 + 2) = (char)param_7;
        puVar6[3] = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 4) = 0;
        if (param_8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_8 + 1);
          puVar6[3] = *param_8;
        }
        puVar6 = puVar6 + 5;
      }
      else {
        puVar6 = (undefined8 *)func_0x07751f70(lVar4 + 0x38,param_3,param_5,&iStack_4c,&puStack_48);
      }
      *(undefined8 **)(lVar4 + 0x40) = puVar6;
    }
    else if (param_4 == 0) {
      puVar6 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar6 < *(undefined8 **)(lVar4 + 0x30)) {
        *(int *)(puVar6 + 1) = param_3[2];
        *puVar6 = *(undefined8 *)param_3;
        *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)(param_5 + 0x11c);
        *(char *)(puVar6 + 2) = (char)param_7;
        puVar6[3] = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 4) = 0;
        if (param_8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_8 + 1);
          puVar6[3] = *param_8;
        }
        *(undefined8 **)(lVar4 + 0x28) = puVar6 + 5;
      }
      else {
        uVar5 = func_0x07751f70(lVar4 + 0x20,param_3,param_5,&iStack_4c,&puStack_48);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
      }
    }
    if ((*(long *)(param_5 + 0x68) != *(long *)(param_6 + 0x68)) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0x180) + 0x28), plVar7 != (long *)0x0)) {
      fVar11 = _DAT_011986e0;
      do {
        lVar4 = plVar7[3];
        if (lVar4 == 0) {
          return;
        }
        fVar8 = ((float)*param_3 + fVar11) - *(float *)(lVar4 + 0x30);
        fVar9 = ((float)param_3[1] + fVar11) - *(float *)(lVar4 + 0x34);
        fVar10 = ((float)param_3[2] + fVar11) - *(float *)(lVar4 + 0x38);
        if (fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 <= *(float *)(lVar4 + 0x3c)) {
          puStack_48 = param_10;
          plVar1 = *(long **)(lVar4 + 0x20);
          iStack_4c = param_4;
          if (plVar1 == (long *)0x0) {
            func_0x04891200();
            return;
          }
          (**(code **)(*plVar1 + 0x30))(plVar1,param_3,&iStack_4c,param_6,&puStack_48);
          fVar11 = _DAT_011986e0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


