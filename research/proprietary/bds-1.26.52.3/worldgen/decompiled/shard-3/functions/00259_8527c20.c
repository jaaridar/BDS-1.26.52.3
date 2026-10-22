/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8627c20 (ELF vaddr 0x8527c20)
 * Label: callee-of:0x8486630
 * Body:  [[08627c20, 08627d28] [08627d30, 08627d45] [08627d50, 08627dda]]
 * Ghidra: FUN_08627c20
 */


/* WARNING: Possible PIC construction at 0x08627d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x08627d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x08627d79) */
/* WARNING: Removing unreachable block (ram,0x08627d61) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_08627c20(long *param_1,ulong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 auStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  pbVar10 = (byte *)*param_1;
  lStack_38 = param_1[2];
  lVar8 = lStack_38 - (long)pbVar10 >> 4;
  if ((ulong)(lVar8 * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      auStack_50[0] = 0x8627dda;
      func_0x086255a0();
      pcVar4 = (code *)swi(3);
      lVar8 = (*pcVar4)();
      return lVar8;
    }
    pbVar3 = (byte *)param_1[1];
    lStack_40 = param_2 * 0x30;
    auStack_50[0] = 0x8627c9f;
    lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
    lVar8 = lVar9;
    if (lVar9 == 0) {
      auStack_50[0] = 0x8627dd0;
      lVar8 = func_0x0eec74c0(lStack_40,0);
    }
    lVar6 = lVar9 - (long)pbVar10;
    if (pbVar10 != pbVar3) {
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar9 + 0x10 + lVar8) = *(undefined8 *)(pbVar10 + lVar8 + 0x10);
        uVar5 = *(undefined8 *)(pbVar10 + lVar8 + 8);
        *(undefined8 *)(lVar9 + lVar8) = *(undefined8 *)(pbVar10 + lVar8);
        ((undefined8 *)(lVar9 + lVar8))[1] = uVar5;
        pbVar1 = pbVar10 + lVar8;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
        pbVar1 = pbVar10 + lVar8 + 0x10;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        *(undefined8 *)(lVar9 + 0x28 + lVar8) = *(undefined8 *)(pbVar10 + lVar8 + 0x28);
        uVar5 = *(undefined8 *)(pbVar10 + lVar8 + 0x18 + 8);
        puVar2 = (undefined8 *)(lVar9 + 0x18 + lVar8);
        *puVar2 = *(undefined8 *)(pbVar10 + lVar8 + 0x18);
        puVar2[1] = uVar5;
        pbVar1 = pbVar10 + lVar8 + 0x18;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
        pbVar1 = pbVar10 + lVar8 + 0x28;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        lVar7 = lVar8 + 0x30;
        lVar8 = lVar8 + 0x30;
      } while (pbVar10 + lVar7 != pbVar3);
      do {
        if ((pbVar10[0x18] & 1) != 0) {
          pbVar10 = *(byte **)(pbVar10 + 0x28);
          register0x00000020 = (BADSPACEBASE *)auStack_50;
          auStack_50[0] = 0x8627d61;
          goto SUB_0412a280;
        }
        if ((*pbVar10 & 1) != 0) {
          pbVar10 = *(byte **)(pbVar10 + 0x10);
          register0x00000020 = (BADSPACEBASE *)auStack_50;
          auStack_50[0] = 0x8627d79;
          goto SUB_0412a280;
        }
        pbVar10 = pbVar10 + 0x30;
      } while (pbVar10 != pbVar3);
      pbVar10 = (byte *)*param_1;
    }
    *param_1 = lVar9;
    param_1[1] = (long)(pbVar3 + lVar6);
    param_1[2] = param_2 * 0x30 + lVar9;
    if (pbVar10 != (byte *)0x0) {
SUB_0412a280:
      *(long *)((long)register0x00000020 + -8) = lVar8;
      if (pbVar10 != (byte *)0x0) {
        pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar4)(&DAT_0f5463b0,pbVar10);
      }
      return *(long *)((long)register0x00000020 + -8);
    }
  }
  return lVar8;
}


