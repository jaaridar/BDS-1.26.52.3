/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f0c00 (ELF vaddr 0x51f0c00)
 * Label: callee-of:0x51f0250
 * Body:  [[052f0c00, 052f0d04]]
 * Ghidra: FUN_052f0c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_052f0c00(long param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (0 < *param_5) {
    fStack_48 = (float)param_2 * _DAT_014e7d20;
    fStack_44 = (float)param_4 * _UNK_014e7d24;
    fStack_40 = _UNK_014e7d28 * 0.0;
    fStack_3c = _UNK_014e7d2c * 0.0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    lVar4 = 0;
    lVar3 = 0;
    fVar5 = _DAT_011983f0;
    do {
      uStack_60 = CONCAT44(fVar5 * fStack_44,fVar5 * fStack_48);
      fStack_58 = fVar5;
      func_0x0d2eb5d0(*(long *)(param_5 + 2) + lVar4,&uStack_60);
      fVar5 = fStack_58 * _DAT_011986e0;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x80c;
    } while (lVar3 < *param_5);
  }
  fVar5 = (float)func_0x0eee43a0();
  uVar2 = param_3 + (int)fVar5 + 0x40;
  uVar1 = (int)fVar5 + param_3 + 0x7f;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  return *(undefined1 *)(param_1 + 8 + (long)(int)(uVar2 - (uVar1 & 0xffffffc0)));
}


