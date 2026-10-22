/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86280e0 (ELF vaddr 0x85280e0)
 * Label: callee-of:0x8486630
 * Body:  [[086280e0, 0862825a] [08628260, 08628277] [08628280, 086282fc]]
 * Ghidra: FUN_086280e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_086280e0(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  
  lVar13 = param_1[1] - *param_1;
  uVar12 = (lVar13 >> 4) * -0x5555555555555555 + 1;
  if (uVar12 < 0x555555555555556) {
    lVar11 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar7) {
      uVar12 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0x555555555555555;
    }
    if (uVar12 < 0x555555555555556) {
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12 * 0x30);
      if (lVar11 == 0) {
        func_0x0eec74c0(uVar12 * 0x30,0);
      }
      *(undefined8 *)(lVar11 + 0x10 + lVar13) = param_2[2];
      uVar8 = param_2[1];
      *(undefined8 *)(lVar11 + lVar13) = *param_2;
      ((undefined8 *)(lVar11 + lVar13))[1] = uVar8;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined8 *)(lVar11 + 0x28 + lVar13) = param_2[5];
      uVar8 = param_2[4];
      puVar2 = (undefined8 *)(lVar11 + 0x18 + lVar13);
      *puVar2 = param_2[3];
      puVar2[1] = uVar8;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      lVar3 = lVar11 + 0x30 + lVar13;
      puVar14 = (ulong *)*param_1;
      puVar5 = (ulong *)param_1[1];
      lVar13 = ((long)puVar14 - (long)puVar5) + lVar11 + lVar13;
      if ((long)puVar14 - (long)puVar5 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar13 + 0x10 + lVar10) = *(undefined8 *)((long)puVar14 + lVar10 + 0x10);
          uVar8 = *(undefined8 *)((byte *)((long)puVar14 + lVar10) + 8);
          *(undefined8 *)(lVar13 + lVar10) = *(undefined8 *)((long)puVar14 + lVar10);
          ((undefined8 *)(lVar13 + lVar10))[1] = uVar8;
          pbVar1 = (byte *)((long)puVar14 + lVar10);
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
          pbVar1 = (byte *)((long)puVar14 + lVar10 + 0x10);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(lVar13 + 0x28 + lVar10) = *(undefined8 *)((long)puVar14 + lVar10 + 0x28);
          pbVar1 = (byte *)((long)puVar14 + lVar10 + 0x18);
          uVar8 = *(undefined8 *)(pbVar1 + 8);
          puVar2 = (undefined8 *)(lVar13 + 0x18 + lVar10);
          *puVar2 = *(undefined8 *)pbVar1;
          puVar2[1] = uVar8;
          pbVar1 = (byte *)((long)puVar14 + lVar10 + 0x18);
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
          pbVar1 = (byte *)((long)puVar14 + lVar10 + 0x28);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          lVar9 = lVar10 + 0x30;
          lVar10 = lVar10 + 0x30;
        } while ((ulong *)((long)puVar14 + lVar9) != puVar5);
        do {
          if ((puVar14[3] & 1) == 0) {
            bVar4 = (byte)*puVar14;
          }
          else {
            func_0x0412a280(puVar14[5],puVar14[3] & 0xfffffffffffffffe);
            bVar4 = (byte)*puVar14;
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar14[2],*puVar14 & 0xfffffffffffffffe);
          }
          puVar14 = puVar14 + 6;
        } while (puVar14 != puVar5);
        puVar14 = (ulong *)*param_1;
      }
      *param_1 = lVar13;
      param_1[1] = lVar3;
      lVar13 = param_1[2];
      param_1[2] = uVar12 * 0x30 + lVar11;
      if (puVar14 != (ulong *)0x0) {
        func_0x0412a280(puVar14,lVar13 - (long)puVar14);
      }
      return lVar3;
    }
  }
  else {
    func_0x086255a0();
  }
  func_0x04882eb0();
  pcVar6 = (code *)swi(3);
  lVar13 = (*pcVar6)();
  return lVar13;
}


