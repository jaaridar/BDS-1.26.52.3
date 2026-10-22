/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7876a0
 * Label: string:minecraft:biome_music
 * Body:  [[0e7876a0, 0e7876bd] [0e7876c2, 0e787770]]
 * Ghidra: FUN_0e7876a0
 */


void FUN_0e7876a0(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  int in_EAX;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *unaff_RBX;
  long lVar6;
  undefined8 unaff_R13;
  long unaff_R14;
  undefined8 *puVar7;
  
  pcVar1 = (char *)((long)unaff_RBX * 2 + 0x49);
  *pcVar1 = *pcVar1 << 1;
  puVar7 = (undefined8 *)
           ((ulong)((uint)(in_EAX - *param_2) >> 3) * -0x5555555555555540 +
           *(long *)(unaff_R14 + 0x18));
  cVar5 = *(char *)((long)puVar7 + 0x24);
  puVar4 = (undefined8 *)*puVar7;
  puVar3 = puVar4;
  if (cVar5 == '\x02') {
    puVar3 = puVar7;
  }
  if (puVar3 == (undefined8 *)0x0 || *(int *)(puVar7 + 4) != 0x3cafa35a) {
    uVar2 = puVar7[5];
    lVar6 = puVar7[6];
    if (lVar6 == 0) {
      (*(code *)puVar7[7])(0,puVar7,0);
      lVar6 = puVar7[6];
      cVar5 = *(char *)((long)puVar7 + 0x24);
      puVar4 = (undefined8 *)*puVar7;
    }
    if (cVar5 == '\x02') {
      puVar4 = puVar7;
    }
    puVar3 = (undefined8 *)func_0x0488e200(uVar2,lVar6,0x3cafa35a,puVar4);
  }
  unaff_RBX[2] = &UNK_0e785ea0;
  *(undefined4 *)(unaff_RBX + 4) = 0x3cafa35a;
  unaff_RBX[3] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 4;
  *unaff_RBX = puVar3;
  unaff_RBX[5] = unaff_R13;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = &UNK_0e785dc0;
  return;
}


