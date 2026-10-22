/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2c1920
 * Label: string:minecraft:biome_music
 * Body:  [[0e2c1920, 0e2c1e25]]
 * Ghidra: FUN_0e2c1920
 */


/* WARNING: Instruction at (ram,0x0e2c1921) overlaps instruction at (ram,0x0e2c1920)
    */
/* WARNING: Removing unreachable block (ram,0x0e2c1936) */

void FUN_0e2c1920(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int in_EAX;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte in_CF;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long *in_stack_00000198;
  byte bStack00000000000001a8;
  undefined7 uStack00000000000001a9;
  undefined8 in_stack_000001b8;
  undefined2 in_stack_00000220;
  undefined6 in_stack_00000222;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  long *in_stack_000002c0;
  byte in_stack_000002d0;
  undefined7 in_stack_000002d1;
  undefined8 in_stack_000002e0;
  long *in_stack_00000360;
  byte in_stack_00000370;
  undefined7 in_stack_00000371;
  undefined8 in_stack_00000380;
  long *in_stack_00000440;
  long *in_stack_00000480;
  long *in_stack_000004c0;
  long *in_stack_00000500;
  long *in_stack_00000560;
  byte in_stack_00000570;
  undefined7 in_stack_00000571;
  undefined8 in_stack_00000580;
  long *in_stack_000005e0;
  byte in_stack_000005f0;
  undefined7 in_stack_000005f1;
  undefined8 in_stack_00000600;
  
  uVar9 = in_stack_00000070 >> 1 & 0x7f;
  uVar4 = (ulong)(in_EAX + -0x27ca72b8 + (uint)in_CF);
  if ((in_stack_00000070 & 1) != 0) {
    uVar9 = in_stack_00000078;
    uVar4 = in_stack_00000080;
  }
  if (uVar9 == 0) {
    uVar8 = 0x811c9dc5;
  }
  else {
    uVar7 = (ulong)((uint)uVar9 & 3);
    if (uVar9 < 4) {
      uVar8 = 0x811c9dc5;
      uVar10 = 0;
    }
    else {
      uVar8 = 0x811c9dc5;
      uVar10 = 0;
      do {
        uVar8 = ((int)*(char *)(uVar4 + 3 + uVar10) ^
                ((int)*(char *)(uVar4 + 2 + uVar10) ^
                ((int)*(char *)(uVar4 + 1 + uVar10) ^
                ((int)*(char *)(uVar4 + uVar10) ^ uVar8) * 0x1000193) * 0x1000193) * 0x1000193) *
                0x1000193;
        uVar10 = uVar10 + 4;
      } while ((uVar9 & 0xfffffffffffffffc) != uVar10);
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        uVar8 = ((int)*(char *)(uVar4 + uVar10 + uVar9) ^ uVar8) * 0x1000193;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
  }
  lVar6 = func_0x048b0c90(param_1,0xf74d500,uVar8,1);
  if (lVar6 == 0) {
    func_0x048b0d20(&stack0x00000000);
    bVar3 = *(byte *)(lRam0000000000000058 + 0x90);
    lVar6 = lRam0000000000000058;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x58);
    bVar3 = *(byte *)(lVar6 + 0x90);
  }
  puVar5 = (undefined8 *)(lVar6 + 0x90);
  if ((bVar3 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar6 + 0xa0),*(ulong *)(lVar6 + 0x90) & 0xfffffffffffffffe);
  }
  puVar5[2] = in_stack_00000230;
  *puVar5 = CONCAT62(in_stack_00000222,in_stack_00000220);
  puVar5[1] = in_stack_00000228;
  if ((in_stack_00000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,in_stack_00000070 & 0xfffffffffffffffe);
  }
  if (in_stack_00000440 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000440 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000440 + 0x10))(in_stack_00000440);
      func_0x0412c2d0(in_stack_00000440);
    }
  }
  if (in_stack_00000480 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000480 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000480 + 0x10))(in_stack_00000480);
      func_0x0412c2d0(in_stack_00000480);
    }
  }
  if (in_stack_000004c0 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000004c0 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_000004c0 + 0x10))(in_stack_000004c0);
      func_0x0412c2d0(in_stack_000004c0);
    }
  }
  if (in_stack_00000500 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000500 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000500 + 0x10))(in_stack_00000500);
      func_0x0412c2d0(in_stack_00000500);
    }
  }
  if ((in_stack_000002d0 & 1) != 0) {
    func_0x0412a280(in_stack_000002e0,
                    CONCAT71(in_stack_000002d1,in_stack_000002d0) & 0xfffffffffffffffe);
  }
  if (in_stack_000002c0 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000002c0 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_000002c0 + 0x10))(in_stack_000002c0);
      func_0x0412c2d0(in_stack_000002c0);
    }
  }
  func_0x04167a40(&stack0x00000290);
  if ((in_stack_00000570 & 1) != 0) {
    func_0x0412a280(in_stack_00000580,
                    CONCAT71(in_stack_00000571,in_stack_00000570) & 0xfffffffffffffffe);
  }
  if (in_stack_00000560 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000560 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000560 + 0x10))(in_stack_00000560);
      func_0x0412c2d0(in_stack_00000560);
    }
  }
  func_0x04167a40(&stack0x00000530);
  if ((in_stack_00000370 & 1) != 0) {
    func_0x0412a280(in_stack_00000380,
                    CONCAT71(in_stack_00000371,in_stack_00000370) & 0xfffffffffffffffe);
  }
  if (in_stack_00000360 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_00000360 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000360 + 0x10))(in_stack_00000360);
      func_0x0412c2d0(in_stack_00000360);
    }
  }
  func_0x04167a40(&stack0x00000330);
  if ((in_stack_000005f0 & 1) != 0) {
    func_0x0412a280(in_stack_00000600,
                    CONCAT71(in_stack_000005f1,in_stack_000005f0) & 0xfffffffffffffffe);
  }
  if (in_stack_000005e0 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000005e0 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_000005e0 + 0x10))(in_stack_000005e0);
      func_0x0412c2d0(in_stack_000005e0);
    }
  }
  func_0x04167a40(&stack0x000005b0);
  if ((bStack00000000000001a8 & 1) != 0) {
    func_0x0412a280(in_stack_000001b8,
                    CONCAT71(uStack00000000000001a9,bStack00000000000001a8) & 0xfffffffffffffffe);
  }
  plVar2 = in_stack_00000198;
  if (in_stack_00000198 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000198 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*in_stack_00000198 + 0x10))(in_stack_00000198);
      func_0x0412c2d0(plVar2);
    }
  }
  func_0x04167a40(&stack0x00000168);
  func_0x0412a280(0x10eb0148,0x80);
  return;
}


