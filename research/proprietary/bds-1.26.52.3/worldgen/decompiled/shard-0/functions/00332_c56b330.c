/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc66b330 (ELF vaddr 0xc56b330)
 * Label: caller-of-seed
 * Body:  [[0c66b330, 0c66b42f]]
 * Ghidra: FUN_0c66b330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c66b330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 ulong param_5)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
  *param_1 = &UNK_0f3ac218;
  *(char *)(param_1 + 0x75) = (char)param_4;
  iVar1 = param_4 * 2 + 1;
  if ((param_5 >> 0x20 & 1) != 0) {
    iVar1 = (int)param_5;
  }
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  fVar3 = (float)iVar1 * _DAT_01198a08;
  fVar4 = 0.0;
  if (fVar3 <= 0.0) {
    fVar4 = fVar3;
  }
  param_1[0x31] = (ulong)(uint)fVar4 << 0x20;
  *(undefined4 *)(param_1 + 0x32) = 0;
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  *(ulong *)((long)param_1 + 0x194) = CONCAT44(fVar4,_DAT_014e44c0);
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  func_0x0c66b450(param_1,&UNK_0c66b5d0,0,0);
  func_0x0c66b640(param_1,&UNK_0c66b7c0,0,0);
  return;
}


