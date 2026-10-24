# FUN_09e22e10

- entry: `0x9e22e10`
- body size: 1161 bytes
- callers: `FUN_09cba670`, `FUN_09cbbc90`, `FUN_09db9c20`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e22e10(int *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 extraout_RDX;
  int *unaff_RBX;
  long lVar10;
  byte *unaff_RBP;
  int *piVar11;
  byte *unaff_R12;
  ulong uVar12;
  ulong unaff_R13;
  undefined8 *unaff_R14;
  long lVar13;
  int *unaff_R15;
  long lVar14;
  
  do {
    *(byte **)((long)register0x00000020 + -8) = unaff_RBP;
    *(int **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(ulong *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(byte **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(int **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined4 *)((long)register0x00000020 + -0x6c) = param_5;
    *(undefined8 *)((long)register0x00000020 + -0x68) = param_3;
    *(byte **)((long)register0x00000020 + -0x60) = param_2;
    puVar9 = param_4;
    if (*param_1 == 1) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e22e41;
      func_0x07c9d400(param_1 + 4);
    }
    unaff_R12 = (byte *)*param_4;
    unaff_RBP = (byte *)param_4[1];
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    if ((long)unaff_RBP - (long)unaff_R12 == 0) {
LAB_09e22f30:
      unaff_R14 = *(undefined8 **)(param_1 + 6);
      puVar9 = *(undefined8 **)(param_1 + 8);
      if (unaff_R14 < puVar9) {
        *(undefined4 *)unaff_R14 = *(undefined4 *)((long)register0x00000020 + -0x6c);
        unaff_R13 = *(ulong *)((long)register0x00000020 + -0x68);
        if (unaff_R13 < 0xfffffffffffffff8) {
          if (unaff_R13 < 0x17) {
            *(char *)(unaff_R14 + 1) = (char)unaff_R13 * '\x02';
            lVar6 = (long)unaff_R14 + 9;
            if (unaff_R13 == 0) goto LAB_09e23077;
          }
          else {
            uVar12 = 0x1a;
            if ((unaff_R13 | 7) != 0x17) {
              uVar12 = (unaff_R13 | 7) + 1;
            }
            pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2304b;
            lVar6 = (*pcVar1)(&DAT_0f5463b0,uVar12);
            if (lVar6 == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23240;
              FUN_0eec74c0(uVar12,0);
            }
            unaff_R14[3] = lVar6;
            unaff_R14[1] = uVar12 | 1;
            unaff_R14[2] = unaff_R13;
          }
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23077;
          memmove(lVar6,*(undefined8 *)((long)register0x00000020 + -0x60),unaff_R13);
LAB_09e23077:
          *(undefined1 *)(lVar6 + unaff_R13) = 0;
          uVar8 = *(undefined8 *)((long)register0x00000020 + -0x80);
          unaff_R14[4] = *(undefined8 *)((long)register0x00000020 + -0x88);
          unaff_R14[5] = uVar8;
          unaff_R14[6] = *(undefined8 *)((long)register0x00000020 + -0x78);
          *(undefined8 **)(param_1 + 6) = unaff_R14 + 7;
          return;
        }
        goto LAB_09e23259;
      }
      unaff_R14 = (undefined8 *)((long)unaff_R14 - *(long *)(param_1 + 4));
      param_2 = (byte *)0x6db6db6db6db6db7;
      unaff_R13 = ((long)unaff_R14 >> 3) * 0x6db6db6db6db6db7 + 1;
      param_4 = puVar9;
      if (0x492492492492492 < unaff_R13) goto LAB_09e2325e;
      lVar6 = (long)puVar9 - *(long *)(param_1 + 4) >> 3;
      param_4 = (undefined8 *)(lVar6 * 0x6db6db6db6db6db7);
      uVar12 = lVar6 * -0x2492492492492492;
      if (unaff_R13 < uVar12) {
        unaff_R13 = uVar12;
      }
      unaff_R12 = (byte *)(param_1 + 4);
      if ((undefined8 *)0x249249249249248 < param_4) {
        unaff_R13 = 0x492492492492492;
      }
      *(byte **)((long)register0x00000020 + -0x38) = unaff_R12;
      if (unaff_R13 == 0) {
        lVar6 = 0;
LAB_09e2309d:
        *(long *)((long)register0x00000020 + -0x58) = lVar6;
        unaff_RBP = (byte *)(lVar6 + (long)unaff_R14);
        *(byte **)((long)register0x00000020 + -0x48) = unaff_RBP;
        *(byte **)((long)register0x00000020 + -0x50) = unaff_RBP;
        *(ulong *)((long)register0x00000020 + -0x40) = unaff_R13 * 0x38 + lVar6;
        param_4 = (undefined8 *)(ulong)*(uint *)((long)register0x00000020 + -0x6c);
        *(uint *)(lVar6 + (long)unaff_R14) = *(uint *)((long)register0x00000020 + -0x6c);
        unaff_R14 = *(undefined8 **)((long)register0x00000020 + -0x68);
        if (unaff_R14 < (undefined8 *)0xfffffffffffffff8) {
          if (unaff_R14 < (undefined8 *)0x17) {
            unaff_RBP[8] = (char)unaff_R14 * '\x02';
            pbVar7 = unaff_RBP + 9;
            if (unaff_R14 == (undefined8 *)0x0) goto LAB_09e23146;
          }
          else {
            uVar12 = 0x1a;
            if (((ulong)unaff_R14 | 7) != 0x17) {
              uVar12 = ((ulong)unaff_R14 | 7) + 1;
            }
            pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23115;
            pbVar7 = (byte *)(*pcVar1)(&DAT_0f5463b0,uVar12);
            if (pbVar7 == (byte *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2324f;
              FUN_0eec74c0(uVar12,0);
            }
            *(byte **)(unaff_RBP + 0x18) = pbVar7;
            *(ulong *)(unaff_RBP + 8) = uVar12 | 1;
            unaff_R14 = *(undefined8 **)((long)register0x00000020 + -0x68);
            *(undefined8 **)(unaff_RBP + 0x10) = unaff_R14;
          }
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23146;
          memmove(pbVar7,*(undefined8 *)((long)register0x00000020 + -0x60),unaff_R14);
LAB_09e23146:
          pbVar7[(long)unaff_R14] = 0;
          uVar8 = *(undefined8 *)((long)register0x00000020 + -0x80);
          *(undefined8 *)(unaff_RBP + 0x20) = *(undefined8 *)((long)register0x00000020 + -0x88);
          *(undefined8 *)(unaff_RBP + 0x28) = uVar8;
          *(undefined8 *)(unaff_RBP + 0x30) = *(undefined8 *)((long)register0x00000020 + -0x78);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          lVar14 = *(long *)((long)register0x00000020 + -0x48) + 0x38;
          *(long *)((long)register0x00000020 + -0x48) = lVar14;
          lVar6 = *(long *)(param_1 + 4);
          lVar10 = *(long *)(param_1 + 6);
          lVar13 = (lVar6 - lVar10) + *(long *)((long)register0x00000020 + -0x50);
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23198;
          func_0x07ca0560(unaff_R12,lVar6,lVar10,lVar13);
          lVar6 = *(long *)(param_1 + 4);
          lVar10 = *(long *)(param_1 + 8);
          *(long *)(param_1 + 4) = lVar13;
          *(long *)(param_1 + 6) = lVar14;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)((long)register0x00000020 + -0x40);
          if (lVar6 != 0) {
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e231be;
            func_0x0412a280(lVar6,lVar10 - lVar6);
          }
          lVar6 = *(long *)((long)register0x00000020 + -0x88);
          *(long *)(param_1 + 6) = lVar14;
          if (lVar6 == 0) {
            return;
          }
          lVar10 = *(long *)((long)register0x00000020 + -0x80);
          lVar13 = lVar6;
          if (lVar6 != lVar10) {
            do {
              if ((*(byte *)(lVar10 + -0x18) & 1) != 0) {
                uVar12 = *(ulong *)(lVar10 + -0x18);
                uVar8 = *(undefined8 *)(lVar10 + -8);
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23200;
                func_0x0412a280(uVar8,uVar12 & 0xfffffffffffffffe);
              }
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != lVar6);
            lVar13 = *(long *)((long)register0x00000020 + -0x88);
          }
          *(long *)((long)register0x00000020 + -0x80) = lVar6;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23218;
          func_0x0412a280(lVar13,*(long *)((long)register0x00000020 + -0x78) - lVar13);
          return;
        }
        goto LAB_09e23263;
      }
      if (unaff_R13 < 0x492492492492493) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23007;
        param_2 = (byte *)(unaff_R13 * 0x38);
        lVar6 = (*pcVar1)(&DAT_0f5463b0);
        if (lVar6 == 0) {
          param_2 = (byte *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2301a;
          FUN_0eec74c0((byte *)(unaff_R13 * 0x38));
          lVar6 = 0;
        }
        goto LAB_09e2309d;
      }
    }
    else {
      unaff_R14 = (undefined8 *)((long)unaff_RBP - (long)unaff_R12 >> 5);
      if (unaff_R14 < (undefined8 *)0xaaaaaaaaaaaaaab) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e22e9b;
        param_2 = (byte *)((long)unaff_R14 * 0x18);
        puVar5 = (undefined4 *)(*pcVar1)(&DAT_0f5463b0);
        if (puVar5 == (undefined4 *)0x0) {
          param_2 = (byte *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23231;
          FUN_0eec74c0((byte *)((long)unaff_R14 * 0x18));
        }
        *(undefined4 **)((long)register0x00000020 + -0x88) = puVar5;
        *(undefined4 **)((long)register0x00000020 + -0x80) = puVar5;
        *(undefined4 **)((long)register0x00000020 + -0x78) = puVar5 + (long)unaff_R14 * 6;
        do {
          if (*(int *)(unaff_R12 + 0x18) != -1) {
            if (puVar5 < *(undefined4 **)((long)register0x00000020 + -0x78)) {
              if ((*unaff_R12 & 1) == 0) {
                *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(unaff_R12 + 0x10);
                uVar2 = *(undefined4 *)(unaff_R12 + 4);
                uVar3 = *(undefined4 *)(unaff_R12 + 8);
                uVar4 = *(undefined4 *)(unaff_R12 + 0xc);
                *puVar5 = *(undefined4 *)unaff_R12;
                puVar5[1] = uVar2;
                puVar5[2] = uVar3;
                puVar5[3] = uVar4;
              }
              else {
                uVar8 = *(undefined8 *)(unaff_R12 + 8);
                param_2 = *(byte **)(unaff_R12 + 0x10);
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e22f16;
                FUN_0412e5e0(puVar5,param_2,uVar8);
              }
              puVar5 = puVar5 + 6;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e22f2b;
              param_2 = unaff_R12;
              puVar5 = (undefined4 *)
                       func_0x04909a40((undefined1 *)((long)register0x00000020 + -0x88));
            }
            *(undefined4 **)((long)register0x00000020 + -0x80) = puVar5;
          }
          unaff_R12 = unaff_R12 + 0x20;
        } while (unaff_R12 != unaff_RBP);
        goto LAB_09e22f30;
      }
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23259;
      FUN_0488efe0();
LAB_09e23259:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2325e;
      FUN_04882e30();
      param_4 = puVar9;
LAB_09e2325e:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23263;
      func_0x07ca0550();
LAB_09e23263:
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23268;
      FUN_04882e30();
    }
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2326d;
    uVar8 = FUN_04882eb0();
    *(undefined8 **)(param_1 + 6) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e2327c;
    FUN_04886070((undefined1 *)((long)register0x00000020 + -0x88));
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e23284;
    unaff_R15 = (int *)_Unwind_Resume(uVar8);
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e232c8;
    FUN_04886070((undefined1 *)((long)register0x00000020 + -0x88));
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0x9e232d0;
    piVar11 = unaff_R15;
    _Unwind_Resume();
    if (*piVar11 == 0) {
      return;
    }
    param_5 = 0;
    param_3 = extraout_RDX;
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x88);
    param_1 = piVar11;
  } while( true );
}


```
