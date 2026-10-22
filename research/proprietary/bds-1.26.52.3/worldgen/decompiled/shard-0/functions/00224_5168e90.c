/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5268e90 (ELF vaddr 0x5168e90)
 * Label: callee-of:0x5187590
 * Body:  [[05268e90, 052690fd]]
 * Ghidra: FUN_05268e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05268e90(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x3050) = 0;
  *(undefined8 *)(param_1 + 0x3058) = 0;
  *(undefined8 *)(param_1 + 0x3040) = 0;
  *(undefined8 *)(param_1 + 0x3048) = 0;
  *(undefined8 *)(param_1 + 0x3030) = 0;
  *(undefined8 *)(param_1 + 0x3038) = 0;
  *(undefined8 *)(param_1 + 0x3020) = 0;
  *(undefined8 *)(param_1 + 0x3028) = 0;
  *(undefined8 *)(param_1 + 0x3010) = 0;
  *(undefined8 *)(param_1 + 0x3018) = 0;
  *(undefined4 *)(param_1 + 0x3060) = 0;
  *(undefined8 *)(param_1 + 0x3068) = 0;
  *(undefined8 *)(param_1 + 0x3070) = 0;
  *(undefined8 *)(param_1 + 0x3078) = 0;
  *(undefined8 *)(param_1 + 0x3080) = 0;
  *(undefined8 *)(param_1 + 0x3088) = 0;
  *(undefined8 *)(param_1 + 0x3090) = 0;
  *(undefined8 *)(param_1 + 0x3098) = 0;
  *(undefined8 *)(param_1 + 0x30a0) = 0;
  *(undefined8 *)(param_1 + 0x30a8) = 0;
  *(undefined8 *)(param_1 + 0x30b0) = 0;
  *(undefined4 *)(param_1 + 0x30b8) = 0;
  *(undefined8 *)(param_1 + 0x30c0) = 0;
  *(undefined8 *)(param_1 + 0x30c8) = 0;
  *(undefined8 *)(param_1 + 0x30d0) = 0;
  *(undefined8 *)(param_1 + 0x30d8) = 0;
  *(undefined8 *)(param_1 + 0x30e0) = 0;
  *(undefined8 *)(param_1 + 0x30e8) = 0;
  *(undefined8 *)(param_1 + 0x30f0) = 0;
  *(undefined8 *)(param_1 + 0x30f8) = 0;
  *(undefined8 *)(param_1 + 0x3100) = 0;
  *(undefined8 *)(param_1 + 0x3108) = 0;
  *(undefined4 *)(param_1 + 0x3110) = 0;
  *(undefined8 *)(param_1 + 0x3118) = param_2;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71a5f8,1);
  *(undefined8 *)(param_1 + 0x3120) = uVar3;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71a8a0,1);
  *(undefined8 *)(param_1 + 0x3128) = uVar3;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71c328,1);
  *(undefined8 *)(param_1 + 0x3130) = uVar3;
  *(undefined8 *)(param_1 + 0x3138) = 0x3200000000;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71a670,1);
  *(undefined8 *)(param_1 + 0x3140) = uVar3;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71a8f0,1);
  *(undefined8 *)(param_1 + 0x3148) = uVar3;
  uVar3 = func_0x0cc41df0(&DAT_0f6ff9e0,0xf71a490,1);
  *(undefined8 *)(param_1 + 0x3150) = uVar3;
  *(undefined8 *)(param_1 + 0x3158) = 0xfffffff8ffffffc4;
  uVar2 = _UNK_014ea7c8;
  uVar3 = _DAT_014ea7c0;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x30 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x50 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x60 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x70 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x1000) = 0x3f800000;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1004 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1014 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1024 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1034 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1044 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1054 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1064 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1074 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x2004) = 0x3f800000;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x2008 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2018 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2028 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2038 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2048 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2058 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2068 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2078 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x3008) = 0x3f800000;
  return;
}


