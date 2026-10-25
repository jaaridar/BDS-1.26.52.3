# FUN_0c8fa2a0

- entry: `0xc8fa2a0`
- body size: 787 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c8fa2a0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_RBX;
  long lVar12;
  long unaff_RBP;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  long unaff_R14;
  long *unaff_R15;
  ulong uVar17;
  bool bVar18;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000040;
  long in_stack_00000048;
  
  do {
    plVar6 = (long *)FUN_0d6c97a0(param_1);
    if ((plVar6 == unaff_R15 + 2) || ((int)plVar6[0xc] != 4)) {
      lVar12 = 0;
    }
    else {
      lVar12 = plVar6[8];
    }
    plVar6 = *(long **)(unaff_RBP + 0x30);
    if (plVar6 < *(long **)(unaff_RBP + 0x38)) {
      *plVar6 = lVar12;
      plVar6 = plVar6 + 1;
    }
    else {
      lVar10 = *(long *)(unaff_RBP + 0x28);
      lVar16 = (long)plVar6 - lVar10;
      lVar15 = lVar16 >> 3;
      uVar11 = lVar15 + 1;
      if (0x1fffffffffffffff < uVar11) {
LAB_0c8fa543:
        func_0x04aa1db0();
        uVar9 = FUN_04931450();
        func_0x0412a280(lVar15,0xd8);
        _Unwind_Resume(uVar9);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = (long)*(long **)(unaff_RBP + 0x38) - lVar10;
      uVar13 = (long)uVar17 >> 2;
      if ((ulong)((long)uVar17 >> 2) <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x7ffffffffffffff7 < uVar17) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (0x1fffffffffffffff < uVar13) {
        FUN_04882eb0();
        goto LAB_0c8fa543;
      }
      lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 8);
      if (lVar7 == 0) {
        FUN_0eec74c0(uVar13 * 8,0);
      }
      *(long *)(lVar7 + lVar16) = lVar12;
      plVar6 = (long *)(lVar7 + lVar16 + 8);
      lVar12 = lVar7 + lVar16 + lVar15 * -8;
      memcpy(lVar12,lVar10,lVar16);
      *(long *)(in_stack_00000040 + 0x28) = lVar12;
      *(long **)(in_stack_00000040 + 0x30) = plVar6;
      *(ulong *)(in_stack_00000040 + 0x38) = lVar7 + uVar13 * 8;
      unaff_RBX = in_stack_00000018;
      if (lVar10 != 0) {
        func_0x0412a280(lVar10,uVar17);
      }
    }
    *(long **)(in_stack_00000040 + 0x30) = plVar6;
    do {
      unaff_R14 = unaff_R14 + 1;
      if ((int)((ulong)(*(long *)(unaff_RBX + 0x48) - *(long *)(unaff_RBX + 0x40)) >> 3) <=
          unaff_R14) {
        lVar12 = FUN_0d6c97a0(in_stack_00000020,&stack0x00000000);
        if ((lVar12 == in_stack_00000048) || (*(int *)(lVar12 + 0x60) != 3)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(lVar12 + 0x40);
        }
        *(undefined4 *)(in_stack_00000040 + 0x50) = uVar5;
        lVar12 = FUN_0d6c97a0(in_stack_00000020,&stack0x00000000);
        if ((lVar12 == in_stack_00000048) || (*(int *)(lVar12 + 0x60) != 4)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar12 + 0x40);
        }
        *(undefined8 *)(in_stack_00000040 + 0x48) = uVar9;
        lVar12 = FUN_0d6c97a0(in_stack_00000020,&stack0x00000000);
        if ((lVar12 == in_stack_00000048) || (*(int *)(lVar12 + 0x60) != 4)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar12 + 0x40);
        }
        *(undefined8 *)(in_stack_00000040 + 0x40) = uVar9;
        lVar12 = FUN_0d6c97a0(in_stack_00000020,&stack0x00000000);
        if (lVar12 == in_stack_00000048) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if (*(int *)(lVar12 + 0x60) == 8) {
            lVar10 = lVar12 + 0x38;
          }
        }
        pbVar8 = (byte *)(lVar10 + 8);
        if (lVar10 == 0) {
          pbVar8 = &UNK_01e79d90;
        }
        pbVar1 = (byte *)(in_stack_00000040 + 0x60);
        if (pbVar1 != pbVar8) {
          bVar2 = *pbVar8;
          if ((*pbVar1 & 1) == 0) {
            if ((bVar2 & 1) == 0) {
              *(undefined8 *)(in_stack_00000040 + 0x70) = *(undefined8 *)(pbVar8 + 0x10);
              uVar9 = *(undefined8 *)(pbVar8 + 8);
              *(undefined8 *)pbVar1 = *(undefined8 *)pbVar8;
              *(undefined8 *)(in_stack_00000040 + 0x68) = uVar9;
            }
            else {
              func_0x04885070(pbVar1,*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
            }
          }
          else {
            bVar18 = (bVar2 & 1) != 0;
            pbVar14 = pbVar8 + 1;
            if (bVar18) {
              pbVar14 = *(byte **)(pbVar8 + 0x10);
            }
            uVar11 = (ulong)(bVar2 >> 1);
            if (bVar18) {
              uVar11 = *(ulong *)(pbVar8 + 8);
            }
            func_0x04885120(pbVar1,pbVar14,uVar11);
          }
        }
        *(undefined1 *)(in_stack_00000040 + 0x138) = 1;
        return;
      }
      unaff_R15 = *(long **)(*(long *)(unaff_RBX + 0x40) + unaff_R14 * 8);
    } while ((unaff_R15 == (long *)0x0) ||
            (cVar4 = (**(code **)(*unaff_R15 + 0x30))(unaff_R15), cVar4 != '\n'));
    param_1 = unaff_R15 + 1;
    unaff_RBP = in_stack_00000040;
  } while( true );
}


```
