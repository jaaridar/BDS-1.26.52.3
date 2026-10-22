/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd331010 (ELF vaddr 0xd231010)
 * Label: callee-of:0xd230f80
 * Body:  [[0d331010, 0d331072] [0d331080, 0d331111] [0d331120, 0d331175] [0d331180, 0d3311fa] [0d331200, 0d33122d] [0d331230, 0d331390] [0d331397, 0d3313ac]]
 * Ghidra: FUN_0d331010
 */


ulong FUN_0d331010(long param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *unaff_RBP;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0412d680();
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != puVar3) {
    puVar13 = (undefined8 *)((long)puVar2 + 0xc);
    puVar18 = puVar2;
    puVar21 = puVar3;
    if (puVar13 != puVar3) {
      lVar20 = 1;
      do {
        iVar6 = (**(code **)(*param_3 + 0x18))(param_3,(int)lVar20 + 1);
        lVar8 = (long)iVar6;
        if (lVar20 != lVar8) {
          uVar1 = *(undefined4 *)(puVar13 + 1);
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
          uStack_58 = *puVar13;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)((long)puVar2 + lVar8 * 0xc + 8);
          *puVar13 = *(undefined8 *)((long)puVar2 + lVar8 * 0xc);
          *(undefined4 *)((long)puVar2 + lVar8 * 0xc + 8) = uVar1;
          *(undefined8 *)((long)puVar2 + lVar8 * 0xc) = uStack_58;
        }
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
        lVar20 = lVar20 + 1;
      } while (puVar13 != puVar3);
      puVar18 = *(undefined8 **)(param_1 + 0x28);
      puVar21 = *(undefined8 **)(param_1 + 0x30);
    }
    if (puVar18 != puVar21) {
      unaff_RBP = (long *)(param_1 + 0x18);
      iVar6 = 0;
      do {
        lVar20 = (**(code **)(*param_2 + 0x10))(param_2,puVar18);
        plVar14 = (long *)*unaff_RBP;
        if (plVar14 != (long *)0x0) {
          lVar8 = *(long *)(lVar20 + 0x68);
          uVar10 = *(ulong *)(lVar8 + 200);
          lVar20 = lVar8 + 0xd1;
          plVar15 = unaff_RBP;
          do {
            uVar19 = plVar14[4];
            bVar5 = (uVar19 >= uVar10 && uVar19 != uVar10) - (uVar19 < uVar10);
            if (uVar19 == uVar10) {
              lVar16 = *(long *)(lVar8 + 0xe0);
              uVar19 = *(ulong *)(lVar8 + 0xd8);
              if ((*(byte *)(lVar8 + 0xd0) & 1) == 0) {
                lVar16 = lVar20;
                uVar19 = (ulong)(*(byte *)(lVar8 + 0xd0) >> 1);
              }
              if ((*(byte *)(plVar14 + 5) & 1) == 0) {
                uVar12 = (ulong)(*(byte *)(plVar14 + 5) >> 1);
                lVar17 = (long)plVar14 + 0x29;
              }
              else {
                uVar12 = plVar14[6];
                lVar17 = plVar14[7];
              }
              uVar11 = uVar12;
              if (uVar19 < uVar12) {
                uVar11 = uVar19;
              }
              iVar7 = func_0x0eee2ff0(lVar17,lVar16,uVar11);
              if (iVar7 == 0) {
                iVar7 = (int)(char)((uVar19 < uVar12) - (uVar12 < uVar19));
              }
              bVar5 = (0 < iVar7) - (iVar7 < 0);
            }
            if (-1 < (char)bVar5) {
              plVar15 = plVar14;
            }
            plVar14 = *(long **)((long)plVar14 + (ulong)(bVar5 >> 4 & 8));
          } while (plVar14 != (long *)0x0);
          if (plVar15 != unaff_RBP) {
            if (uVar10 == plVar15[4]) {
              bVar22 = (*(byte *)(plVar15 + 5) & 1) != 0;
              lVar16 = (long)plVar15 + 0x29;
              if (bVar22) {
                lVar16 = plVar15[7];
              }
              uVar10 = (ulong)(*(byte *)(plVar15 + 5) >> 1);
              if (bVar22) {
                uVar10 = plVar15[6];
              }
              if ((*(byte *)(lVar8 + 0xd0) & 1) == 0) {
                uVar19 = (ulong)(*(byte *)(lVar8 + 0xd0) >> 1);
              }
              else {
                uVar19 = *(ulong *)(lVar8 + 0xd8);
                lVar20 = *(long *)(lVar8 + 0xe0);
              }
              uVar12 = uVar19;
              if (uVar10 < uVar19) {
                uVar12 = uVar10;
              }
              iVar7 = func_0x0eee2ff0(lVar20,lVar16,uVar12);
              bVar22 = -1 < iVar7;
              if (iVar7 == 0) {
                bVar22 = uVar10 <= uVar19;
              }
              if (bVar22) {
LAB_0d3312bf:
                lVar20 = func_0x0cc422f0(0xf6ff9e0,plVar15 + 9,0,0,0);
                if (lVar20 != 0) {
                  uStack_48 = 0;
                  uStack_40 = 0;
                  uStack_58 = 0;
                  uStack_50 = 0;
                  uStack_38 = 1;
                  (**(code **)(*param_2 + 0xf8))
                            (param_2,puVar18,*(undefined8 *)(lVar20 + 0x200),4,0,&uStack_58);
                  plVar14 = *(long **)(param_4 + 0x20);
                  if (plVar14 == (long *)0x0) {
                    uVar9 = func_0x04891200();
                    func_0x0412d6b0(param_1 + 0x40);
                    func_0x0eee2d70(uVar9);
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return uVar10;
                  }
                  (**(code **)(*plVar14 + 0x30))(plVar14,puVar18);
                  iVar6 = iVar6 + 1;
                  if (iVar6 == *(int *)(param_1 + 8)) break;
                }
              }
            }
            else if ((ulong)plVar15[4] <= uVar10) goto LAB_0d3312bf;
          }
        }
        puVar18 = (undefined8 *)((long)puVar18 + 0xc);
      } while (puVar18 != puVar21);
    }
  }
  func_0x0412d6b0(param_1 + 0x40);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),puVar2 != puVar3) & 0xffffffff;
}


