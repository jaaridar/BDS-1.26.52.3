/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd20bae0
 * Label: string:ZN25FeatureTerrainAdjustments13setBeardifierERK11BoundingBox
 * Body:  [[0d20bae0, 0d20bdcd]]
 * Ghidra: FUN_0d20bae0
 */


void FUN_0d20bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *in_RAX;
  ulong uVar8;
  undefined8 unaff_RBX;
  long lVar9;
  long unaff_R14;
  undefined8 in_XMM2_Qb;
  
  LOCK();
  in_RAX[4] = (char)((ulong)param_6 >> 8);
  UNLOCK();
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(param_7 + -0x75) = *(char *)(param_7 + -0x75) + (char)param_7;
  LOCK();
  cVar1 = in_RAX[0x48000004];
  in_RAX[0x48000004] = (char)((ulong)unaff_RBX >> 8);
  lVar9 = CONCAT62((int6)((ulong)unaff_RBX >> 0x10),CONCAT11(cVar1,(char)unaff_RBX));
  UNLOCK();
  *(int *)(lVar9 + 0x4b8) = (int)in_RAX;
  *(undefined4 *)(lVar9 + 0x4c0) = *(undefined4 *)(unaff_R14 + 0x4c0);
  *(undefined2 *)(lVar9 + 0x4c8) = *(undefined2 *)(unaff_R14 + 0x4c8);
  *(undefined8 *)(lVar9 + 0x4e0) = *(undefined8 *)(unaff_R14 + 0x4e0);
  uVar6 = *(undefined8 *)(unaff_R14 + 0x4d8);
  *(undefined8 *)(lVar9 + 0x4d0) = *(undefined8 *)(unaff_R14 + 0x4d0);
  *(undefined8 *)(lVar9 + 0x4d8) = uVar6;
  *(undefined8 *)(unaff_R14 + 0x4d0) = param_3;
  *(undefined8 *)(unaff_R14 + 0x4d8) = in_XMM2_Qb;
  *(undefined8 *)(unaff_R14 + 0x4e0) = 0;
  *(undefined4 *)(lVar9 + 0x4e8) = *(undefined4 *)(unaff_R14 + 0x4e8);
  lVar2 = *(long *)(unaff_R14 + 0x4f0);
  *(undefined8 *)(unaff_R14 + 0x4f0) = 0;
  *(long *)(lVar9 + 0x4f0) = lVar2;
  lVar3 = *(long *)(unaff_R14 + 0x500);
  uVar6 = *(undefined8 *)(unaff_R14 + 0x500);
  *(undefined8 *)(lVar9 + 0x4f8) = *(undefined8 *)(unaff_R14 + 0x4f8);
  *(undefined8 *)(lVar9 + 0x500) = uVar6;
  *(undefined8 *)(unaff_R14 + 0x4f8) = 0;
  lVar4 = *(long *)(unaff_R14 + 0x508);
  *(long *)(lVar9 + 0x508) = lVar4;
  *(undefined4 *)(lVar9 + 0x510) = *(undefined4 *)(unaff_R14 + 0x510);
  if (lVar4 != 0) {
    uVar8 = *(ulong *)(lVar3 + 8);
    uVar5 = *(ulong *)(lVar9 + 0x4f8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      if ((uVar8 | uVar5) >> 0x20 == 0) {
        uVar8 = (uVar8 & 0xffffffff) % (uVar5 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 % uVar5;
      }
    }
    *(long *)(lVar2 + uVar8 * 8) = lVar9 + 0x500;
    *(undefined8 *)(unaff_R14 + 0x500) = 0;
    *(undefined8 *)(unaff_R14 + 0x508) = 0;
  }
  lVar2 = *(long *)(unaff_R14 + 0x518);
  *(undefined8 *)(unaff_R14 + 0x518) = 0;
  *(long *)(lVar9 + 0x518) = lVar2;
  lVar3 = *(long *)(unaff_R14 + 0x528);
  uVar6 = *(undefined8 *)(unaff_R14 + 0x528);
  *(undefined8 *)(lVar9 + 0x520) = *(undefined8 *)(unaff_R14 + 0x520);
  *(undefined8 *)(lVar9 + 0x528) = uVar6;
  *(undefined8 *)(unaff_R14 + 0x520) = 0;
  lVar4 = *(long *)(unaff_R14 + 0x530);
  *(long *)(lVar9 + 0x530) = lVar4;
  *(undefined4 *)(lVar9 + 0x538) = *(undefined4 *)(unaff_R14 + 0x538);
  if (lVar4 != 0) {
    uVar8 = *(ulong *)(lVar3 + 8);
    uVar5 = *(ulong *)(lVar9 + 0x520);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      if ((uVar8 | uVar5) >> 0x20 == 0) {
        uVar8 = (uVar8 & 0xffffffff) % (uVar5 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 % uVar5;
      }
    }
    *(long *)(lVar2 + uVar8 * 8) = lVar9 + 0x528;
    *(undefined8 *)(unaff_R14 + 0x528) = 0;
    *(undefined8 *)(unaff_R14 + 0x530) = 0;
  }
  *(undefined8 *)(lVar9 + 0x550) = *(undefined8 *)(unaff_R14 + 0x550);
  uVar6 = *(undefined8 *)(unaff_R14 + 0x548);
  *(undefined8 *)(lVar9 + 0x540) = *(undefined8 *)(unaff_R14 + 0x540);
  *(undefined8 *)(lVar9 + 0x548) = uVar6;
  *(undefined8 *)(unaff_R14 + 0x540) = 0;
  *(undefined8 *)(unaff_R14 + 0x548) = 0;
  *(undefined8 *)(unaff_R14 + 0x550) = 0;
  *(undefined1 *)(lVar9 + 0x560) = *(undefined1 *)(unaff_R14 + 0x560);
  *(undefined8 *)(lVar9 + 0x558) = *(undefined8 *)(unaff_R14 + 0x558);
  uVar6 = *(undefined8 *)(unaff_R14 + 0x568);
  uVar7 = *(undefined8 *)(unaff_R14 + 0x570);
  *(undefined8 *)(unaff_R14 + 0x568) = 0;
  *(undefined8 *)(lVar9 + 0x568) = uVar6;
  *(undefined8 *)(lVar9 + 0x570) = uVar7;
  *(undefined8 *)(lVar9 + 0x578) = *(undefined8 *)(unaff_R14 + 0x578);
  *(undefined8 *)(unaff_R14 + 0x570) = 0;
  *(undefined8 *)(unaff_R14 + 0x578) = 0;
  *(undefined8 *)(lVar9 + 0x580) = 0;
  *(undefined8 *)(lVar9 + 0x588) = 0;
  *(undefined8 *)(lVar9 + 0x590) = 0;
  uVar6 = *(undefined8 *)(unaff_R14 + 0x588);
  *(undefined8 *)(lVar9 + 0x580) = *(undefined8 *)(unaff_R14 + 0x580);
  *(undefined8 *)(lVar9 + 0x588) = uVar6;
  *(undefined8 *)(lVar9 + 0x590) = *(undefined8 *)(unaff_R14 + 0x590);
  *(undefined8 *)(unaff_R14 + 0x580) = 0;
  *(undefined8 *)(unaff_R14 + 0x588) = 0;
  *(undefined8 *)(unaff_R14 + 0x590) = 0;
  *(undefined8 *)(lVar9 + 0x598) = 0;
  *(undefined8 *)(lVar9 + 0x5a0) = 0;
  *(undefined8 *)(lVar9 + 0x5a8) = 0;
  uVar6 = *(undefined8 *)(unaff_R14 + 0x5a0);
  *(undefined8 *)(lVar9 + 0x598) = *(undefined8 *)(unaff_R14 + 0x598);
  *(undefined8 *)(lVar9 + 0x5a0) = uVar6;
  *(undefined8 *)(lVar9 + 0x5a8) = *(undefined8 *)(unaff_R14 + 0x5a8);
  *(undefined8 *)(unaff_R14 + 0x598) = 0;
  *(undefined8 *)(unaff_R14 + 0x5a0) = 0;
  *(undefined8 *)(unaff_R14 + 0x5a8) = 0;
  *(undefined4 *)(lVar9 + 0x5b0) = *(undefined4 *)(unaff_R14 + 0x5b0);
  return;
}


