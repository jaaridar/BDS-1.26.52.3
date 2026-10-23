# FUN_0529c330

- entry: `0x529c330`
- body size: 441 bytes
- callers: (none in the analysed set)

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0529c330(long param_1,long param_2,ulong *param_3,ulong *param_4)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_88 [3];
  float afStack_7c [3];
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar4 = *param_4;
  uStack_50 = uVar4 >> 0x20;
  if ((uStack_50 != 0) && (uStack_58 = uVar4 & 0xffffffff, uStack_58 != 0)) {
    uStack_60 = *param_3;
    uStack_68 = uStack_60 >> 0x20;
    lStack_70 = (long)(int)uVar4 << 2;
    lVar5 = 0;
    uStack_48 = 0;
    fVar8 = _DAT_011988fc;
    lStack_38 = param_2;
    do {
      fVar9 = (float)((int)uStack_68 + (int)uStack_48);
      fVar10 = fVar9 * _DAT_01198af8;
      fVar9 = fVar9 * fVar8 * _DAT_01198af8;
      uVar3 = uStack_60 & 0xffffffff;
      uVar4 = uStack_58;
      lStack_40 = lVar5;
      do {
        fVar6 = (float)(int)uVar3;
        lVar2 = *(long *)(param_1 + 0x20);
        afStack_7c[0] = fVar6 * _DAT_01198af8;
        afStack_7c[1] = 0.0;
        afStack_7c[2] = fVar10;
        fVar7 = (float)FUN_0d342930(lVar2,afStack_7c);
        fVar1 = *(float *)(lVar2 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        afStack_88[0] = fVar6 * fVar8 * _DAT_01198af8;
        afStack_88[1] = 0.0;
        afStack_88[2] = fVar9;
        fVar6 = (float)FUN_0d342930(lVar2,afStack_88);
        fVar8 = _DAT_011988fc;
        *(float *)(*(long *)(lStack_38 + 0x30) + lVar5) =
             (fVar6 * *(float *)(lVar2 + 0x20) + fVar7 * fVar1) * *(float *)(param_1 + 0x30);
        lVar5 = lVar5 + 4;
        uVar3 = (ulong)((int)uVar3 + 1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uStack_48 = uStack_48 + 1;
      lVar5 = lStack_40 + lStack_70;
    } while (uStack_48 != uStack_50);
  }
  return;
}


```
