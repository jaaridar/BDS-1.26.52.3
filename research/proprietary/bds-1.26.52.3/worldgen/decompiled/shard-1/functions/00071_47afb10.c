/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afb10 (ELF vaddr 0x47afb10)
 * Label: callee-of:0x871a310
 * Body:  [[048afb10, 048afc93]]
 * Ghidra: FUN_048afb10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048afb10(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  float fVar11;
  undefined1 uStack_29;
  
  fVar11 = (float)(ulong)((param_1[4] - param_1[3] >> 4) * -0x3333333333333333) /
           *(float *)(param_1 + 6);
  uVar3 = (ulong)fVar11;
  uVar3 = (long)(fVar11 - _DAT_01198778) & (long)uVar3 >> 0x3f | uVar3;
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  uVar5 = 8;
  if (8 < uVar3) {
    uVar5 = uVar3;
  }
  lVar4 = 0x3f;
  if (uVar5 - 1 != 0) {
    for (; uVar5 - 1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar3 = 1L << (-((byte)lVar4 ^ 0x3f) & 0x3f);
  lVar4 = *param_1;
  uVar5 = param_1[1] - lVar4 >> 3;
  if (uVar3 != uVar5) {
    if (uVar3 < uVar5) {
      lVar7 = lVar4 + uVar3 * 8;
      param_1[1] = lVar7;
    }
    else {
      func_0x048af7e0(param_1);
      lVar4 = *param_1;
      lVar7 = param_1[1];
    }
    if (lVar4 != lVar7) {
      memset(lVar4,0xff,lVar7 - lVar4 & 0xfffffffffffffff8);
    }
    lVar4 = param_1[3];
    if (param_1[4] - lVar4 != 0) {
      lVar9 = (param_1[4] - lVar4 >> 4) * -0x3333333333333333;
      lVar7 = 0x18;
      lVar8 = 0;
      do {
        bVar1 = *(byte *)(lVar4 + -0x10 + lVar7);
        bVar10 = (bVar1 & 1) != 0;
        lVar6 = lVar4 + -0xf + lVar7;
        if (bVar10) {
          lVar6 = *(long *)(lVar4 + lVar7);
        }
        uVar3 = (ulong)(bVar1 >> 1);
        if (bVar10) {
          uVar3 = *(ulong *)(lVar4 + -8 + lVar7);
        }
        uVar3 = func_0x04883620(&uStack_29,lVar6,uVar3);
        lVar4 = *param_1;
        uVar3 = ((ulong)(param_1[1] - lVar4) >> 3) - 1 & uVar3;
        uVar2 = *(undefined8 *)(lVar4 + uVar3 * 8);
        *(long *)(lVar4 + uVar3 * 8) = lVar8;
        lVar4 = param_1[3];
        *(undefined8 *)(lVar4 + -0x18 + lVar7) = uVar2;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (lVar9 + (ulong)(lVar9 == 0) != lVar8);
    }
  }
  return;
}


