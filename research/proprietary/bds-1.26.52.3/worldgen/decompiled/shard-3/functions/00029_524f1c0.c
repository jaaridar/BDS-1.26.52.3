/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x534f1c0 (ELF vaddr 0x524f1c0)
 * Label: ClimateBiomeComponentGlue::vslot2
 * Body:  [[0534f1c0, 0534f2ee]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_ClimateBiomeComponentGlue__vslot2
                (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  uint uVar7;
  ulong uStack_50;
  uint uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_38;
  uint7 uStack_37;
  undefined1 auStack_30 [24];
  
  cVar5 = *(char *)((long)param_2 + 0x24);
  puVar4 = (undefined8 *)*param_2;
  puVar3 = puVar4;
  if (cVar5 == '\x02') {
    puVar3 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0 || *(int *)(param_2 + 4) != -0x1a0f8f0) {
    uVar1 = param_2[5];
    lVar2 = param_2[6];
    if (lVar2 == 0) {
      (*(code *)param_2[7])(0,param_2,0);
      lVar2 = param_2[6];
      cVar5 = *(char *)((long)param_2 + 0x24);
      puVar4 = (undefined8 *)*param_2;
    }
    if (cVar5 == '\x02') {
      puVar4 = param_2;
    }
    puVar3 = (undefined8 *)func_0x0488e200(uVar1,lVar2,0xfe5f0710,puVar4);
  }
  uStack_50 = 0x110000012d759b;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_38 = 0;
  lVar2 = (ulong)uStack_37 << 8;
  uVar7 = uStack_48;
  func_0x0eeb79f0(auStack_30,&uStack_50);
  if ((uStack_50 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_50 & 0xff00ffffffffffff) - 8);
  }
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((*(char *)(puVar3 + 3) == '\x01') &&
     (*(float *)((long)puVar3 + 0x14) <= *(float *)(puVar3 + 2) &&
      *(float *)(puVar3 + 2) != *(float *)((long)puVar3 + 0x14))) {
    func_0x0534f330(1,3,5,&UNK_01222a94,param_5,param_6,uVar7,uStack_40,lVar2);
    uVar6 = 0;
  }
  func_0x0eeb81b0(auStack_30);
  return uVar6 & 0xffffffff;
}


