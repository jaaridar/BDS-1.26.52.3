/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca697c0 (ELF vaddr 0xc9697c0)
 * Label: Dimension::vslot39
 * Body:  [[0ca697c0, 0ca6987a]]
 * Ghidra: wg_Dimension__vslot39
 */


void wg_Dimension__vslot39
               (long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((int)param_1[0x2e] == iVar2) {
    cVar1 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
    if (cVar1 == '\0') {
      uStack_68 = 0x100000002;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      puStack_70 = &UNK_0f12e6c0;
      uStack_34 = param_7;
      uStack_30 = 1;
      uStack_44 = param_3;
      uStack_40 = param_4;
      uStack_3c = param_5;
      uStack_38 = param_6;
      (**(code **)(*param_1 + 0x120))(param_1,&puStack_70,0);
    }
  }
  return;
}


