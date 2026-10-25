# FUN_09e232e0

- entry: `0x9e232e0`
- body size: 73 bytes
- callers: `FUN_09cba670`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09e232e0(uint *param_1,uint *param_2,long param_3,long *param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plVar9;
  long extraout_RDX;
  long lVar10;
  uint *unaff_RBX;
  undefined1 *puVar11;
  uint *unaff_RBP;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint *unaff_R12;
  ulong unaff_R13;
  long lVar15;
  long *unaff_R14;
  long lVar16;
  uint *unaff_R15;
  
  lVar13 = *param_4;
  iVar5 = 0;
  if (lVar13 != param_4[1]) {
    do {
      iVar5 = iVar5 + *(int *)(lVar13 + 0x18);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != param_4[1]);
    if (iVar5 == -1) goto LAB_09e23313;
  }
  iVar12 = 1;
  if (1 < iVar5) {
    iVar12 = iVar5;
  }
  param_1[10] = param_1[10] + iVar12;
LAB_09e23313:
  if (((*param_1 & 0xfffffffd) == 0) || (puVar11 = (undefined1 *)register0x00000020, param_3 == 0))
  {
    return;
  }
  do {
    *(uint **)(puVar11 + -8) = unaff_RBP;
    *(uint **)(puVar11 + -0x10) = unaff_R15;
    *(long **)(puVar11 + -0x18) = unaff_R14;
    *(ulong *)(puVar11 + -0x20) = unaff_R13;
    *(uint **)(puVar11 + -0x28) = unaff_R12;
    *(uint **)(puVar11 + -0x30) = unaff_RBX;
    *(undefined4 *)(puVar11 + -0x6c) = 0;
    *(long *)(puVar11 + -0x68) = param_3;
    *(uint **)(puVar11 + -0x60) = param_2;
    plVar9 = param_4;
    if (*param_1 == 1) {
      *(undefined8 *)(puVar11 + -0x90) = 0x9e22e41;
      FUN_07c9d400(param_1 + 4);
    }
    unaff_R12 = (uint *)*param_4;
    unaff_RBP = (uint *)param_4[1];
    *(undefined8 *)(puVar11 + -0x88) = 0;
    *(undefined8 *)(puVar11 + -0x80) = 0;
    *(undefined8 *)(puVar11 + -0x78) = 0;
    if ((long)unaff_RBP - (long)unaff_R12 == 0) {
LAB_09e22f30:
      unaff_R14 = *(long **)(param_1 + 6);
      plVar9 = *(long **)(param_1 + 8);
      if (unaff_R14 < plVar9) {
        *(undefined4 *)unaff_R14 = *(undefined4 *)(puVar11 + -0x6c);
        unaff_R13 = *(ulong *)(puVar11 + -0x68);
        if (unaff_R13 < 0xfffffffffffffff8) {
          if (unaff_R13 < 0x17) {
            *(char *)(unaff_R14 + 1) = (char)unaff_R13 * '\x02';
            lVar13 = (long)unaff_R14 + 9;
            if (unaff_R13 == 0) goto LAB_09e23077;
          }
          else {
            uVar14 = 0x1a;
            if ((unaff_R13 | 7) != 0x17) {
              uVar14 = (unaff_R13 | 7) + 1;
            }
            pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
            *(undefined8 *)(puVar11 + -0x90) = 0x9e2304b;
            lVar13 = (*pcVar1)(&DAT_0f5463b0,uVar14);
            if (lVar13 == 0) {
              *(undefined8 *)(puVar11 + -0x90) = 0x9e23240;
              FUN_0eec74c0(uVar14,0);
            }
            unaff_R14[3] = lVar13;
            unaff_R14[1] = uVar14 | 1;
            unaff_R14[2] = unaff_R13;
          }
          *(undefined8 *)(puVar11 + -0x90) = 0x9e23077;
          memmove(lVar13,*(undefined8 *)(puVar11 + -0x60),unaff_R13);
LAB_09e23077:
          *(undefined1 *)(lVar13 + unaff_R13) = 0;
          lVar13 = *(long *)(puVar11 + -0x80);
          unaff_R14[4] = *(long *)(puVar11 + -0x88);
          unaff_R14[5] = lVar13;
          unaff_R14[6] = *(long *)(puVar11 + -0x78);
          *(long **)(param_1 + 6) = unaff_R14 + 7;
          return;
        }
        goto LAB_09e23259;
      }
      unaff_R14 = (long *)((long)unaff_R14 - *(long *)(param_1 + 4));
      param_2 = (uint *)0x6db6db6db6db6db7;
      unaff_R13 = ((long)unaff_R14 >> 3) * 0x6db6db6db6db6db7 + 1;
      param_4 = plVar9;
      if (0x492492492492492 < unaff_R13) goto LAB_09e2325e;
      lVar13 = (long)plVar9 - *(long *)(param_1 + 4) >> 3;
      param_4 = (long *)(lVar13 * 0x6db6db6db6db6db7);
      uVar14 = lVar13 * -0x2492492492492492;
      if (unaff_R13 < uVar14) {
        unaff_R13 = uVar14;
      }
      unaff_R12 = param_1 + 4;
      if ((long *)0x249249249249248 < param_4) {
        unaff_R13 = 0x492492492492492;
      }
      *(uint **)(puVar11 + -0x38) = unaff_R12;
      if (unaff_R13 == 0) {
        lVar13 = 0;
LAB_09e2309d:
        *(long *)(puVar11 + -0x58) = lVar13;
        unaff_RBP = (uint *)(lVar13 + (long)unaff_R14);
        *(uint **)(puVar11 + -0x48) = unaff_RBP;
        *(uint **)(puVar11 + -0x50) = unaff_RBP;
        *(ulong *)(puVar11 + -0x40) = unaff_R13 * 0x38 + lVar13;
        param_4 = (long *)(ulong)*(uint *)(puVar11 + -0x6c);
        *(uint *)(lVar13 + (long)unaff_R14) = *(uint *)(puVar11 + -0x6c);
        unaff_R14 = *(long **)(puVar11 + -0x68);
        if (unaff_R14 < (long *)0xfffffffffffffff8) {
          if (unaff_R14 < (long *)0x17) {
            *(char *)(unaff_RBP + 2) = (char)unaff_R14 * '\x02';
            pbVar7 = (byte *)((long)unaff_RBP + 9);
            if (unaff_R14 == (long *)0x0) goto LAB_09e23146;
          }
          else {
            uVar14 = 0x1a;
            if (((ulong)unaff_R14 | 7) != 0x17) {
              uVar14 = ((ulong)unaff_R14 | 7) + 1;
            }
            pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
            *(undefined8 *)(puVar11 + -0x90) = 0x9e23115;
            pbVar7 = (byte *)(*pcVar1)(&DAT_0f5463b0,uVar14);
            if (pbVar7 == (byte *)0x0) {
              *(undefined8 *)(puVar11 + -0x90) = 0x9e2324f;
              FUN_0eec74c0(uVar14,0);
            }
            *(byte **)(unaff_RBP + 6) = pbVar7;
            *(ulong *)(unaff_RBP + 2) = uVar14 | 1;
            unaff_R14 = *(long **)(puVar11 + -0x68);
            *(long **)(unaff_RBP + 4) = unaff_R14;
          }
          *(undefined8 *)(puVar11 + -0x90) = 0x9e23146;
          memmove(pbVar7,*(undefined8 *)(puVar11 + -0x60),unaff_R14);
LAB_09e23146:
          pbVar7[(long)unaff_R14] = 0;
          uVar8 = *(undefined8 *)(puVar11 + -0x80);
          *(undefined8 *)(unaff_RBP + 8) = *(undefined8 *)(puVar11 + -0x88);
          *(undefined8 *)(unaff_RBP + 10) = uVar8;
          *(undefined8 *)(unaff_RBP + 0xc) = *(undefined8 *)(puVar11 + -0x78);
          *(undefined8 *)(puVar11 + -0x88) = 0;
          *(undefined8 *)(puVar11 + -0x80) = 0;
          *(undefined8 *)(puVar11 + -0x78) = 0;
          lVar16 = *(long *)(puVar11 + -0x48) + 0x38;
          *(long *)(puVar11 + -0x48) = lVar16;
          lVar13 = *(long *)(param_1 + 4);
          lVar10 = *(long *)(param_1 + 6);
          lVar15 = (lVar13 - lVar10) + *(long *)(puVar11 + -0x50);
          *(undefined8 *)(puVar11 + -0x90) = 0x9e23198;
          FUN_07ca0560(unaff_R12,lVar13,lVar10,lVar15);
          lVar13 = *(long *)(param_1 + 4);
          lVar10 = *(long *)(param_1 + 8);
          *(long *)(param_1 + 4) = lVar15;
          *(long *)(param_1 + 6) = lVar16;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar11 + -0x40);
          if (lVar13 != 0) {
            *(undefined8 *)(puVar11 + -0x90) = 0x9e231be;
            func_0x0412a280(lVar13,lVar10 - lVar13);
          }
          lVar13 = *(long *)(puVar11 + -0x88);
          *(long *)(param_1 + 6) = lVar16;
          if (lVar13 == 0) {
            return;
          }
          lVar10 = *(long *)(puVar11 + -0x80);
          lVar15 = lVar13;
          if (lVar13 != lVar10) {
            do {
              if ((*(byte *)(lVar10 + -0x18) & 1) != 0) {
                uVar14 = *(ulong *)(lVar10 + -0x18);
                uVar8 = *(undefined8 *)(lVar10 + -8);
                *(undefined8 *)(puVar11 + -0x90) = 0x9e23200;
                func_0x0412a280(uVar8,uVar14 & 0xfffffffffffffffe);
              }
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != lVar13);
            lVar15 = *(long *)(puVar11 + -0x88);
          }
          *(long *)(puVar11 + -0x80) = lVar13;
          *(undefined8 *)(puVar11 + -0x90) = 0x9e23218;
          func_0x0412a280(lVar15,*(long *)(puVar11 + -0x78) - lVar15);
          return;
        }
        goto LAB_09e23263;
      }
      if (unaff_R13 < 0x492492492492493) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)(puVar11 + -0x90) = 0x9e23007;
        param_2 = (uint *)(unaff_R13 * 0x38);
        lVar13 = (*pcVar1)(&DAT_0f5463b0);
        if (lVar13 == 0) {
          param_2 = (uint *)0x0;
          *(undefined8 *)(puVar11 + -0x90) = 0x9e2301a;
          FUN_0eec74c0((uint *)(unaff_R13 * 0x38));
          lVar13 = 0;
        }
        goto LAB_09e2309d;
      }
    }
    else {
      unaff_R14 = (long *)((long)unaff_RBP - (long)unaff_R12 >> 5);
      if (unaff_R14 < (long *)0xaaaaaaaaaaaaaab) {
        pcVar1 = *(code **)(_DAT_0f5463b0 + 0x10);
        *(undefined8 *)(puVar11 + -0x90) = 0x9e22e9b;
        param_2 = (uint *)((long)unaff_R14 * 0x18);
        puVar6 = (uint *)(*pcVar1)(&DAT_0f5463b0);
        if (puVar6 == (uint *)0x0) {
          param_2 = (uint *)0x0;
          *(undefined8 *)(puVar11 + -0x90) = 0x9e23231;
          FUN_0eec74c0((uint *)((long)unaff_R14 * 0x18));
        }
        *(uint **)(puVar11 + -0x88) = puVar6;
        *(uint **)(puVar11 + -0x80) = puVar6;
        *(uint **)(puVar11 + -0x78) = puVar6 + (long)unaff_R14 * 6;
        do {
          if (unaff_R12[6] != 0xffffffff) {
            if (puVar6 < *(uint **)(puVar11 + -0x78)) {
              if ((*unaff_R12 & 1) == 0) {
                *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(unaff_R12 + 4);
                uVar2 = unaff_R12[1];
                uVar3 = unaff_R12[2];
                uVar4 = unaff_R12[3];
                *puVar6 = *unaff_R12;
                puVar6[1] = uVar2;
                puVar6[2] = uVar3;
                puVar6[3] = uVar4;
              }
              else {
                uVar8 = *(undefined8 *)(unaff_R12 + 2);
                param_2 = *(uint **)(unaff_R12 + 4);
                *(undefined8 *)(puVar11 + -0x90) = 0x9e22f16;
                FUN_0412e5e0(puVar6,param_2,uVar8);
              }
              puVar6 = puVar6 + 6;
            }
            else {
              *(undefined8 *)(puVar11 + -0x90) = 0x9e22f2b;
              param_2 = unaff_R12;
              puVar6 = (uint *)FUN_04909a40(puVar11 + -0x88);
            }
            *(uint **)(puVar11 + -0x80) = puVar6;
          }
          unaff_R12 = unaff_R12 + 8;
        } while (unaff_R12 != unaff_RBP);
        goto LAB_09e22f30;
      }
      *(undefined8 *)(puVar11 + -0x90) = 0x9e23259;
      FUN_0488efe0();
LAB_09e23259:
      *(undefined8 *)(puVar11 + -0x90) = 0x9e2325e;
      FUN_04882e30();
      param_4 = plVar9;
LAB_09e2325e:
      *(undefined8 *)(puVar11 + -0x90) = 0x9e23263;
      FUN_07ca0550();
LAB_09e23263:
      *(undefined8 *)(puVar11 + -0x90) = 0x9e23268;
      FUN_04882e30();
    }
    *(undefined8 *)(puVar11 + -0x90) = 0x9e2326d;
    uVar8 = FUN_04882eb0();
    *(long **)(param_1 + 6) = unaff_R14;
    *(undefined8 *)(puVar11 + -0x90) = 0x9e2327c;
    FUN_04886070(puVar11 + -0x88);
    *(undefined8 *)(puVar11 + -0x90) = 0x9e23284;
    unaff_R15 = (uint *)_Unwind_Resume(uVar8);
    *(undefined8 *)(puVar11 + -0x90) = 0x9e232c8;
    FUN_04886070(puVar11 + -0x88);
    *(undefined8 *)(puVar11 + -0x90) = 0x9e232d0;
    puVar6 = unaff_R15;
    _Unwind_Resume();
    param_3 = extraout_RDX;
    unaff_RBX = param_1;
    puVar11 = puVar11 + -0x88;
    param_1 = puVar6;
    if (*puVar6 == 0) {
      return;
    }
  } while( true );
}


```
