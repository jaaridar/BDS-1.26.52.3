# FUN_04b0a270

- entry: `0x4b0a270`
- body size: 684 bytes
- callers: `FUN_04e5fb80`

```c

void FUN_04b0a270(long *param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  sbyte sVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined4 uStack_34;
  
  uVar10 = param_1[1];
  uVar9 = param_2 - uVar10;
  if (param_2 < uVar10 || uVar9 == 0) {
    param_1[1] = param_2;
  }
  else {
    uVar6 = param_1[2] * 0x40;
    if (uVar6 - uVar9 < uVar10 || uVar6 < uVar9) {
      puStack_58 = (ulong *)0x0;
      uStack_50 = 0;
      lStack_48 = 0;
      if ((long)param_2 < 0) {
        uVar3 = func_0x048acb40();
        if (puStack_58 != (ulong *)0x0) {
          func_0x0412a280(puStack_58,lStack_48 << 3);
        }
        _Unwind_Resume(uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 < 0x3fffffffffffffff) {
        uVar6 = param_1[2] << 7;
        uVar10 = param_2 + 0x3f & 0xffffffffffffffc0;
        if (uVar10 < uVar6) {
          uVar10 = uVar6;
        }
      }
      else {
        uVar10 = 0x7fffffffffffffff;
      }
      uStack_34 = param_3;
      func_0x048ac710(&puStack_58,uVar10);
      puVar11 = puStack_58;
      uVar10 = param_1[1];
      uStack_50 = uVar9 + uVar10;
      puVar7 = (ulong *)*param_1;
      if ((long)uVar10 < 1) {
        uVar5 = 0;
      }
      else {
        uVar6 = uVar10 >> 6;
        if (0x3f < uVar10) {
          memmove(puStack_58,puVar7,uVar6 * 8);
        }
        puVar11 = puVar11 + uVar6;
        uVar10 = uVar10 & 0x3f;
        if (uVar10 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)uVar10;
          *puVar11 = ((puVar7[uVar6] ^ *puVar11) << (-(char)uVar10 & 0x3fU)) >>
                     (-(char)uVar10 & 0x3fU) ^ *puVar11;
        }
        puVar7 = (ulong *)*param_1;
        uVar10 = param_1[1];
      }
      *param_1 = (long)puStack_58;
      param_1[1] = uStack_50;
      lVar1 = param_1[2];
      param_1[2] = lStack_48;
      puStack_58 = puVar7;
      uStack_50 = uVar10;
      lStack_48 = lVar1;
      if (puVar7 != (ulong *)0x0) {
        func_0x0412a280(puVar7,lVar1 << 3);
      }
      cVar8 = (char)uStack_34;
    }
    else {
      puVar11 = (ulong *)((uVar10 >> 3 & 0xfffffffffffffff8) + *param_1);
      uVar5 = (uint)uVar10 & 0x3f;
      param_1[1] = param_2;
      cVar8 = (char)param_3;
    }
    sVar4 = (sbyte)uVar5;
    if (cVar8 == '\0') {
      if (uVar5 != 0) {
        uVar5 = 0x40 - uVar5;
        uVar10 = (ulong)uVar5;
        if (uVar9 < uVar5) {
          uVar10 = uVar9;
        }
        *puVar11 = *puVar11 &
                   ~(((0xffffffffffffffffU >> ((char)uVar5 - (char)uVar10 & 0x3fU)) >> sVar4) <<
                    sVar4);
        uVar9 = uVar9 - uVar10;
        puVar11 = puVar11 + 1;
      }
      if (0x3f < uVar9) {
        func_0x0eee2dd0(puVar11,0,(uVar9 >> 6) * 8);
      }
      if ((uVar9 & 0x3f) != 0) {
        puVar11[uVar9 >> 6] =
             puVar11[uVar9 >> 6] & ~(0xffffffffffffffffU >> (-(char)(uVar9 & 0x3f) & 0x3fU));
      }
    }
    else {
      if (uVar5 != 0) {
        uVar5 = 0x40 - uVar5;
        uVar10 = (ulong)uVar5;
        if (uVar9 < uVar5) {
          uVar10 = uVar9;
        }
        *puVar11 = *puVar11 |
                   ((0xffffffffffffffffU >> ((char)uVar5 - (char)uVar10 & 0x3fU)) >> sVar4) << sVar4
        ;
        uVar9 = uVar9 - uVar10;
        puVar11 = puVar11 + 1;
      }
      if (0x3f < uVar9) {
        func_0x0eee2dd0(puVar11,0xff,(uVar9 >> 6) * 8);
      }
      if ((uVar9 & 0x3f) != 0) {
        puVar11[uVar9 >> 6] =
             puVar11[uVar9 >> 6] | 0xffffffffffffffffU >> (-(char)(uVar9 & 0x3f) & 0x3fU);
      }
    }
  }
  return;
}


```
