/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb65d50 (ELF vaddr 0xda65d50)
 * Label: string:Factory<Type> cereal::BasicFactory<SurfaceBuilderType>::scop
 * Body:  [[0db65d50, 0db65edb]]
 * Ghidra: FUN_0db65d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0db65d50(long *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined4 in_EAX;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  if (param_4 == 0) {
    uVar12 = 0x811c9dc5;
  }
  else {
    uVar7 = (ulong)((uint)param_4 & 3);
    if (param_4 < 4) {
      uVar12 = 0x811c9dc5;
      uVar13 = 0;
    }
    else {
      uVar12 = 0x811c9dc5;
      uVar13 = 0;
      do {
        uVar12 = ((int)*(char *)(param_3 + 3 + uVar13) ^
                 ((int)*(char *)(param_3 + 2 + uVar13) ^
                 ((int)*(char *)(param_3 + 1 + uVar13) ^
                 ((int)*(char *)(param_3 + uVar13) ^ uVar12) * 0x1000193) * 0x1000193) * 0x1000193)
                 * 0x1000193;
        uVar13 = uVar13 + 4;
      } while ((param_4 & 0xfffffffffffffffc) != uVar13);
    }
    if (uVar7 != 0) {
      uVar10 = 0;
      do {
        uVar12 = ((int)*(char *)(param_3 + uVar13 + uVar10) ^ uVar12) * 0x1000193;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
  }
  *(uint *)((long)param_2 + 0x34) = uVar12;
  *(undefined1 *)(param_2 + 7) = 1;
  uVar14 = CONCAT44(uVar12,in_EAX);
  lVar8 = func_0x0db61aa0(*param_2 + 0x18);
  lVar8 = *(long *)(lVar8 + 0x68);
  puVar9 = *(uint **)(lVar8 + 0x28);
  for (puVar11 = *(uint **)(lVar8 + 0x20); (puVar11 != puVar9 && (*puVar11 != uVar12));
      puVar11 = puVar11 + 0xe) {
  }
  if (puVar11 == puVar9) {
    if (puVar9 < *(uint **)(lVar8 + 0x30)) {
      *puVar9 = uVar12;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0x3f800000;
      *(undefined1 *)(puVar9 + 0xc) = 0;
      *(undefined1 *)(puVar9 + 0xd) = 0;
      puVar9 = puVar9 + 0xe;
    }
    else {
      puVar9 = (uint *)func_0x05d9c2b0(lVar8 + 0x20,&stack0xffffffffffffffdc);
    }
    *(uint **)(lVar8 + 0x28) = puVar9;
  }
  else if ((*(long *)(puVar11 + 8) != 0) &&
          (cVar6 = FUN_0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01339aaf,
                                param_6,uVar14), cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar8 = *param_2;
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar4 = param_2[4];
  lVar5 = param_2[5];
  uVar14 = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = uVar14;
  param_1[4] = lVar4;
  param_1[5] = lVar5;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  *param_1 = lVar8;
  param_1[1] = lVar1;
  return param_1;
}


