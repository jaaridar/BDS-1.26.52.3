/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9d0c10 (ELF vaddr 0xc8d0c10)
 * Label: callee-of:0x517c470
 * Body:  [[0c9d0c10, 0c9d0dd8]]
 * Ghidra: FUN_0c9d0c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9d0c10(long *param_1,long *param_2,long param_3,long param_4,char param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&UNK_0f3ea710;
  lVar3 = func_0x0eee2fc0();
  param_1[3] = lVar3;
  *(undefined1 *)(param_1 + 4) = param_6;
  *(char *)((long)param_1 + 0x21) = param_5;
  *(undefined1 *)((long)param_1 + 0x22) = param_8;
  param_1[5] = (long)param_2;
  param_1[6] = param_4;
  param_1[7] = param_3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)(param_3 + 0xa8);
  auVar6 = pshuflw(auVar6,auVar6,0xe1);
  *(int *)(param_1 + 8) = auVar6._0_4_;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_7;
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  *(undefined1 (*) [16])(param_1 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xd) = (undefined1  [16])0x0;
  iVar4 = _DAT_0f72b584 << 4;
  *(int *)(param_1 + 0x13) = _DAT_0f72b580 << 4;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0x14) = iVar4;
  *(undefined1 (*) [16])(param_1 + 0x15) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0xb1) = (undefined1  [16])0x0;
  param_1[0x19] = CONCAT44(_DAT_0f72b584,_DAT_0f72b580);
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = (undefined1  [16])0x0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_3 + 0x11c);
  *(undefined1 (*) [16])(param_1 + 0x2a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  cVar2 = (**(code **)(*param_2 + 0xc38))(param_2);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (param_5 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,param_2 + 3);
    lVar3 = param_1[0x15];
    if (param_1[0x16] != lVar3) {
      uVar5 = 0;
      do {
        plVar1 = *(long **)(lVar3 + uVar5 * 8);
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        uVar5 = uVar5 + 1;
        lVar3 = param_1[0x15];
      } while (uVar5 < (ulong)(param_1[0x16] - lVar3 >> 3));
    }
  }
  return;
}


