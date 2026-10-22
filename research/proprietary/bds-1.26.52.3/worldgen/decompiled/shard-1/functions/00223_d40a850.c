/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd50a850 (ELF vaddr 0xd40a850)
 * Label: callee-of:0x517cd10
 * Body:  [[0d50a850, 0d50a946] [0d50a950, 0d50aa91] [0d50aaa0, 0d50aae1]]
 * Ghidra: FUN_0d50a850
 */


undefined8 FUN_0d50a850(undefined8 param_1,long *param_2,int *param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_a44;
  int iStack_a40;
  int iStack_a3c;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  uStack_a20 = *(uint *)(*(long *)(param_4 + 0x9f8) + 8);
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar3 = 7;
  uVar4 = uStack_a20;
  while( true ) {
    uVar5 = ((ulong)((uVar4 >> 0x1e ^ uVar4) * 0x6c078965) + lVar3) - 6;
    uVar4 = (uint)uVar5;
    *(uint *)((long)&uStack_a38 + lVar3 * 4 + 4) = uVar4;
    if (lVar3 == 0x193) break;
    uVar4 = (((uint)(uVar5 >> 0x1e) & 3 ^ uVar4) * 0x6c078965 + (int)lVar3) - 5;
    *(uint *)((long)&puStack_a30 + lVar3 * 4) = uVar4;
    lVar3 = lVar3 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  iVar6 = 3;
  uStack_a38 = param_1;
  uStack_a1c = uStack_a20;
  do {
    iVar7 = -3;
    iVar8 = 3;
    do {
      iStack_a44 = *param_3 + iVar6;
      iStack_a40 = param_3[1];
      iStack_a3c = param_3[2] + iVar8;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a40 = param_3[1];
      iStack_a44 = *param_3 - iVar6;
      iStack_a3c = param_3[2] + iVar7;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a44 = *param_3 + iVar6;
      iStack_a40 = param_3[1];
      iStack_a3c = param_3[2] + iVar7;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') goto LAB_0d50aaaf;
      }
      iStack_a40 = param_3[1];
      iStack_a44 = *param_3 - iVar6;
      iStack_a3c = param_3[2] + iVar8;
      cVar1 = func_0x0c9e3230(param_2,&iStack_a44);
      if (cVar1 != '\0') {
        iStack_a40 = iStack_a40 + 1;
        cVar1 = func_0x0d50aaf0(uStack_a38,param_2,&iStack_a44,&puStack_a30);
        if (cVar1 != '\0') {
LAB_0d50aaaf:
          plVar2 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
          lVar3 = (**(code **)(*plVar2 + 0x568))(plVar2);
          *(undefined1 *)(lVar3 + 0x4ba) = 1;
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != -0xb);
    iVar6 = iVar6 + 1;
    if (iVar6 == 0xb) {
      return 0;
    }
  } while( true );
}


