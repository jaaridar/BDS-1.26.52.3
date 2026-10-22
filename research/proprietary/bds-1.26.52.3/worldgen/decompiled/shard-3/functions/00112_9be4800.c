/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9be4800
 * Label: string:ZN12_GLOBAL__N_116PlaceCommandAnon21_placeOrDeferSectionsER1
 * Body:  [[09be4800, 09be48a2]]
 * Ghidra: FUN_09be4800
 */


void FUN_09be4800(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 uStack0000000000000070;
  long *plStack0000000000000078;
  long lStack0000000000000080;
  
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000064 = 0;
  uStack0000000000000070 = 0;
  plStack0000000000000078 = (long *)0x0;
  lStack0000000000000080 = 0;
  func_0x048aee30(param_1,param_2,&stack0x00000008,0xf389ef04);
  lVar2 = lStack0000000000000080;
  lStack0000000000000080 = 0;
  if (lVar2 != 0) {
    func_0x048ae940(lVar2);
    func_0x0412a280(lVar2,0x78);
  }
  plVar3 = plStack0000000000000078;
  if (plStack0000000000000078 != (long *)0x0) {
    LOCK();
    plVar1 = plStack0000000000000078 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack0000000000000078 + 0x10))(plStack0000000000000078);
      func_0x0412c2d0(plVar3);
      return;
    }
  }
  return;
}


