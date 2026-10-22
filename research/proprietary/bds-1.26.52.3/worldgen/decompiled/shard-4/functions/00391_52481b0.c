/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x53481b0 (ELF vaddr 0x52481b0)
 * Label: caller-of-seed
 * Body:  [[053481b0, 05348329]]
 * Ghidra: FUN_053481b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_053481b0(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short sStack_2a;
  undefined8 *puStack_28;
  
  if (DAT_0f5573b8 == '\0') goto LAB_053482f1;
  while( true ) {
    sVar2 = _DAT_0f5573b0;
    sStack_2a = _DAT_0f5573b0;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x78,0);
    }
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *puVar4 = &UNK_0efa5368;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 1;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    psVar6 = (short *)*param_1;
    psVar1 = (short *)param_1[1];
    while( true ) {
      puStack_28 = puVar4;
      if (psVar6 == psVar1) {
        if (psVar1 < (short *)param_1[2]) {
          *psVar1 = sVar2;
          *(undefined8 **)(psVar1 + 4) = puVar4;
          param_1[1] = psVar1 + 8;
          return puVar4;
        }
        uVar5 = func_0x05348490(param_1,&sStack_2a,&puStack_28);
        param_1[1] = uVar5;
        puVar7 = puVar4;
        puVar8 = puStack_28;
        if (puStack_28 == (undefined8 *)0x0) {
          return puVar4;
        }
        goto LAB_053482b8;
      }
      if (*psVar6 == sVar2) break;
      psVar6 = psVar6 + 8;
    }
    puVar7 = *(undefined8 **)(psVar6 + 4);
    puVar8 = puVar4;
    if (puVar7 != (undefined8 *)0x0) break;
    func_0x04890760();
LAB_053482f1:
    iVar3 = func_0x04108328(&DAT_0f5573b8);
    if (iVar3 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f5573b0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573b8);
    }
  }
LAB_053482b8:
  puStack_28 = (undefined8 *)0x0;
  wg_NoiseGradientBiomeSurfaceComponent__vslot0(puVar8);
  func_0x0412a280(puVar8,0x78);
  return puVar7;
}


