# FUN_0c45ff60

- entry: `0xc45ff60`
- body size: 385 bytes
- callers: `FUN_0c4510a0`

```c

void FUN_0c45ff60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  uVar4 = lVar2 - lVar1 >> 3;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar6 = 0;
  if (lVar2 != lVar1) {
    uVar6 = ((uint)lVar3 ^ 0x3f) * 2 ^ 0x7e;
  }
  func_0x0c471cc0(lVar1,lVar2,uVar6,1);
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar5 = *(ulong **)(param_1 + 0x30);
  if (puVar5 != *(ulong **)(param_1 + 0x38)) {
    uVar4 = 0;
    do {
      uVar8 = *puVar5 >> 0x20;
      uVar7 = ((ulong)(uint)((int)*puVar5 << 3) + 8 ^ uVar8) * -0x622015f714c7d297;
      uVar7 = (uVar7 >> 0x2f ^ uVar8 ^ uVar7) * -0x622015f714c7d297;
      uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
              (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297 ^ uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(ulong **)(param_1 + 0x38));
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58);
  uVar4 = lVar2 - lVar1 >> 3;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar6 = 0;
  if (lVar2 != lVar1) {
    uVar6 = ((uint)lVar3 ^ 0x3f) * 2 ^ 0x7e;
  }
  func_0x0c471cc0(lVar1,lVar2,uVar6,1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar5 = *(ulong **)(param_1 + 0x50);
  if (puVar5 != *(ulong **)(param_1 + 0x58)) {
    uVar4 = 0;
    do {
      uVar8 = *puVar5 >> 0x20;
      uVar7 = ((ulong)(uint)((int)*puVar5 << 3) + 8 ^ uVar8) * -0x622015f714c7d297;
      uVar7 = (uVar7 >> 0x2f ^ uVar8 ^ uVar7) * -0x622015f714c7d297;
      uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
              (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297 ^ uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(ulong **)(param_1 + 0x58));
    *(ulong *)(param_1 + 0x68) = uVar4;
  }
  return;
}


```
