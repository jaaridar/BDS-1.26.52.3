/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1ee9f0
 * Label: string:const br::worldgen::MobFilter *StructureSpawnRegistry::get(c
 * Body:  [[0d1ee9f0, 0d1eeca2]]
 * Ghidra: FUN_0d1ee9f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0d1ee9f0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  long *in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b8;
  long *in_stack_000000c8;
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  byte bStack0000000000000130;
  undefined7 uStack0000000000000131;
  undefined8 in_stack_00000140;
  byte in_stack_00000558;
  undefined7 in_stack_00000559;
  undefined8 in_stack_00000568;
  byte in_stack_000005a0;
  undefined7 in_stack_000005a1;
  undefined8 in_stack_000005b0;
  byte in_stack_000009c8;
  undefined7 in_stack_000009c9;
  undefined8 in_stack_000009d8;
  
  func_0x048a4fd0(param_1,in_stack_00000030);
  if (in_stack_00000050 != 0) {
    (**(code **)(in_stack_00000050 + 8))(&stack0x00000050);
  }
  plVar5 = in_stack_000000c8;
  if (in_stack_000000c8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000c8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000c8 + 0x10))(in_stack_000000c8);
      func_0x0412c2d0(plVar5);
    }
  }
  in_stack_000000d0 = in_stack_00000090;
  in_stack_000000d8 = in_stack_00000098;
  if (in_stack_00000098 != (long *)0x0) {
    LOCK();
    in_stack_00000098[1] = in_stack_00000098[1] + 1;
    UNLOCK();
  }
  iVar4 = (int)in_stack_00000030[0x10];
  if (iVar4 != 1) {
    if (iVar4 == 3) {
      *(undefined4 *)(in_stack_00000090 + 6) = 0;
    }
    else if (iVar4 == 2) {
      (**(code **)(*in_stack_00000090 + 0x10))();
      goto LAB_0d1eeaea;
    }
    in_stack_000000a0 = in_stack_00000090;
    in_stack_000000a8 = in_stack_00000098;
    if (in_stack_00000098 != (long *)0x0) {
      LOCK();
      in_stack_00000098[1] = in_stack_00000098[1] + 1;
      UNLOCK();
    }
    (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030,&stack0x000000a0,0);
    plVar5 = in_stack_000000a8;
    if (in_stack_000000a8 != (long *)0x0) {
      LOCK();
      plVar1 = in_stack_000000a8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_000000a8 + 0x10))(in_stack_000000a8);
        func_0x0412c2d0(plVar5);
      }
    }
  }
LAB_0d1eeaea:
  plVar1 = in_stack_000000d8;
  plVar5 = in_stack_00000098;
  if (in_stack_000000d8 != (long *)0x0) {
    LOCK();
    plVar2 = in_stack_000000d8 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_000000d8 + 0x10))(in_stack_000000d8);
      func_0x0412c2d0(plVar1);
      plVar5 = in_stack_00000098;
    }
  }
  in_stack_00000098 = plVar5;
  if ((in_stack_00000558 & 1) != 0) {
    func_0x0412a280(in_stack_00000568,
                    CONCAT71(in_stack_00000559,in_stack_00000558) & 0xfffffffffffffffe);
  }
  plVar1 = in_stack_000000b8;
  if ((bStack0000000000000130 & 1) != 0) {
    func_0x0412a280(in_stack_00000140,
                    CONCAT71(uStack0000000000000131,bStack0000000000000130) & 0xfffffffffffffffe);
    plVar1 = in_stack_000000b8;
  }
  in_stack_000000b8 = plVar1;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = (long *)((long)plVar5 + 8);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((in_stack_000009c8 & 1) != 0) {
    func_0x0412a280(in_stack_000009d8,
                    CONCAT71(in_stack_000009c9,in_stack_000009c8) & 0xfffffffffffffffe);
  }
  if ((in_stack_000005a0 & 1) != 0) {
    func_0x0412a280(in_stack_000005b0,
                    CONCAT71(in_stack_000005a1,in_stack_000005a0) & 0xfffffffffffffffe);
  }
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  if ((in_stack_00000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,in_stack_00000038 & 0xfffffffffffffffe);
  }
  return;
}


