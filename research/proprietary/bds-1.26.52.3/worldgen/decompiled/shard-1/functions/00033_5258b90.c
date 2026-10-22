/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358b90 (ELF vaddr 0x5258b90)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot0
 * Body:  [[05358b90, 05358c00] [05358c10, 05358cae]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot0
 */


/* WARNING: Possible PIC construction at 0x05358bbf: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05358c4b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05358c86: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05358c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05358c31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_SurfaceBuilderBiomeComponentGlue__vslot0(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_20;
  
  puVar3 = &UNK_0efa54a8;
  *param_1 = &UNK_0efa54a8;
  lVar4 = param_1[0x1c];
  if (lVar4 == 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      uStack_20 = 0x5358be4;
      puVar3 = (undefined *)func_0x0412a280(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
    }
    lVar1 = param_1[0x15];
    if (lVar1 == 0) {
      lVar4 = param_1[0x12];
      if (lVar4 != 0) {
        param_1[0x13] = lVar4;
        uStack_20 = 0x5358c72;
        puVar3 = (undefined *)func_0x0412a280(lVar4,param_1[0x14] - lVar4);
      }
      lVar4 = param_1[10];
      if (lVar4 == 0) {
        lVar4 = param_1[7];
        if (lVar4 == 0) {
          return puVar3;
        }
        param_1[8] = lVar4;
      }
      else {
        param_1[0xb] = lVar4;
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x5358c8b;
      }
    }
    else {
      lVar5 = param_1[0x16];
      lVar4 = lVar1;
      if (lVar1 != lVar5) {
        do {
          if ((*(byte *)(lVar5 + -0x30) & 1) != 0) {
            lVar4 = *(long *)(lVar5 + -0x20);
            register0x00000020 = (BADSPACEBASE *)&uStack_20;
            uStack_20 = 0x5358c31;
            goto SUB_0412a280;
          }
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != lVar1);
        lVar4 = param_1[0x15];
      }
      param_1[0x16] = lVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x5358c50;
    }
  }
  else {
    param_1[0x1d] = lVar4;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x5358bc4;
  }
SUB_0412a280:
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (lVar4 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


