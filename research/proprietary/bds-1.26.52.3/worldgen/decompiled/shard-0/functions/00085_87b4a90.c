/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x87b4a90
 * Label: callee-of:0x871a310
 * Body:  [[087b4a90, 087b4ba0]]
 * Ghidra: FUN_087b4a90
 */


void FUN_087b4a90(ulong param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  char *in_RAX;
  ulong *puVar9;
  char *pcVar10;
  byte bVar11;
  ulong unaff_R12;
  ulong in_XMM0_Qb;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar11 = (byte)param_5;
  in_RAX[-0x75] = in_RAX[-0x75] + bVar11;
  puVar9 = (ulong *)((ulong)&stack0x00000000 & 0xffffffff);
  *(byte *)puVar9 = (byte)*puVar9;
  *(char *)((long)param_5 + -0x77) = *(char *)((long)param_5 + -0x77) + bVar11;
  pcVar10 = (char *)((ulong)in_RAX & 0xffffff98);
  *pcVar10 = *pcVar10 + (char)pcVar10;
  bVar2 = *param_2;
  *param_2 = *param_2 + bVar11;
  *param_5 = *param_5 + (int)pcVar10 + (uint)CARRY1(bVar2,bVar11);
  param_5[4] = 0;
  param_5[5] = 0;
  *(ulong *)(unaff_R12 + 0xb0) = puVar9[0x17];
  uVar6 = *(undefined4 *)((long)puVar9 + 0xac);
  uVar8 = puVar9[0x16];
  uVar7 = *(undefined4 *)((long)puVar9 + 0xb4);
  *(int *)(unaff_R12 + 0xa0) = (int)puVar9[0x15];
  *(undefined4 *)(unaff_R12 + 0xa4) = uVar6;
  *(int *)(unaff_R12 + 0xa8) = (int)uVar8;
  *(undefined4 *)(unaff_R12 + 0xac) = uVar7;
  puVar9[0x15] = param_1;
  puVar9[0x16] = in_XMM0_Qb;
  puVar9[0x17] = 0;
  puVar9[0x1a] = (ulong)pcVar10;
  puVar9[0x1b] = unaff_R12;
  puVar9[0x1c] = param_1;
  puVar9[0x1d] = in_XMM0_Qb;
  puVar9[-1] = 0x87b4b0d;
  func_0x048afd20(puVar9[3],puVar9 + 0x19);
  plVar4 = (long *)puVar9[0x1b];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
      puVar9[-1] = 0x87b4b35;
      (*pcVar5)(plVar4);
      puVar9[-1] = 0x87b4b3d;
      func_0x0412c2d0(plVar4);
    }
  }
  plVar4 = (long *)puVar9[0x1d];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
      puVar9[-1] = 0x87b4b65;
      (*pcVar5)(plVar4);
      puVar9[-1] = 0x87b4b6d;
      func_0x0412c2d0(plVar4);
    }
  }
  puVar9[-1] = 0x87b4b77;
  func_0x048aeca0(puVar9 + 4);
  if ((*puVar9 & 1) != 0) {
    puVar9[-1] = 0x87b4b8f;
    func_0x0412a280(puVar9[2],*puVar9 & 0xfffffffffffffffe);
  }
  return;
}


