/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc99350
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0cc99300, 0cc99323] [0cc99330, 0cc9936e] [0cc99370, 0cc993a9] [0cc993b0, 0cc99446] [0cc99461, 0cc9946f]]
 * Ghidra: FUN_0cc99350
 */


void FUN_0cc99350(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,ulong param_9)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_RBX;
  long unaff_RBP;
  long *plVar6;
  long lVar7;
  ulong unaff_R12;
  long *unaff_R13;
  ulong unaff_R14;
  uint unaff_retaddr;
  ulong uStack0000000000000020;
  
code_r0x0cc99350:
  uStack0000000000000020 = param_2;
  uVar5 = unaff_R12;
  if (unaff_R12 == param_2) goto LAB_0cc99303;
LAB_0cc99355:
  do {
    param_2 = uVar5;
    if (*(long *)(unaff_RBP + param_2 * 8) == 0) {
      *(long **)(unaff_RBP + param_2 * 8) = unaff_RBX;
    }
    else {
      plVar2 = unaff_R13;
LAB_0cc9937d:
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
        if (plVar2 == (long *)0x0) break;
        bVar1 = *(byte *)(unaff_R13 + 2);
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
          uVar4 = (ulong)*(byte *)(plVar2 + 2);
          if ((*(byte *)(plVar2 + 2) & 1) == 0) goto LAB_0cc9939f;
LAB_0cc993bd:
          if (uVar5 != plVar2[3]) break;
        }
        else {
          uVar5 = unaff_R13[3];
          uVar4 = (ulong)*(byte *)(plVar2 + 2);
          if ((*(byte *)(plVar2 + 2) & 1) != 0) goto LAB_0cc993bd;
LAB_0cc9939f:
          if (uVar5 != uVar4 >> 1) break;
        }
        lVar7 = (long)unaff_R13 + 0x11;
        if ((bVar1 & 1) != 0) {
          lVar7 = unaff_R13[4];
        }
        if ((uVar4 & 1) != 0) {
          iVar3 = func_0x0eee3000(lVar7,plVar2[4]);
          if (iVar3 != 0) break;
          goto LAB_0cc9937d;
        }
        iVar3 = func_0x0eee3000(lVar7,(long)plVar2 + 0x11);
      } while (iVar3 == 0);
      *unaff_RBX = (long)plVar2;
      *plVar6 = **(long **)(param_7 + param_2 * 8);
      **(undefined8 **)(param_7 + param_2 * 8) = unaff_R13;
      unaff_R13 = unaff_RBX;
      unaff_RBP = param_7;
      param_2 = uStack0000000000000020;
      unaff_R14 = param_8;
      param_4 = unaff_retaddr;
    }
LAB_0cc99303:
    do {
      while( true ) {
        unaff_RBX = unaff_R13;
        unaff_R13 = (long *)*unaff_RBX;
        if (unaff_R13 == (long *)0x0) {
          return;
        }
        unaff_R12 = unaff_R13[1];
        uStack0000000000000020 = param_2;
        if (1 < param_4) break;
        uVar5 = unaff_R12 & param_9;
        if ((unaff_R12 & param_9) != param_2) goto LAB_0cc99355;
      }
      if (unaff_R12 < unaff_R14) goto code_r0x0cc99350;
      if ((unaff_R12 | unaff_R14) >> 0x20 != 0) {
        unaff_R12 = unaff_R12 % unaff_R14;
        goto code_r0x0cc99350;
      }
      uVar5 = (unaff_R12 & 0xffffffff) % (unaff_R14 & 0xffffffff);
    } while (uVar5 == param_2);
  } while( true );
}


