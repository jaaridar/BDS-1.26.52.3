/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b479d0 (ELF vaddr 0x9a479d0)
 * Label: callee-of:0xc7e3540
 * Body:  [[09b479d0, 09b47b35]]
 * Ghidra: FUN_09b479d0
 */


/* WARNING: Removing unreachable block (ram,0x09b47ac6) */
/* WARNING: Removing unreachable block (ram,0x09b47ad8) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x0f552f50 : 0x0eee02fb */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_09b479d0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  byte bVar6;
  
  func_0x0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  func_0x0412d610(0xf552e80);
  plVar5 = _DAT_0f552f68;
  pbVar4 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte *)0x0) || (*_DAT_0f552f60 != 1)) {
    FUN_0eee02f0(0xf552e80);
    return;
  }
  bVar6 = 1;
  if (_DAT_0f552f68 != (long *)0x0) {
    LOCK();
    _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
    UNLOCK();
    bVar6 = *pbVar4;
  }
  if (((bVar6 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
    func_0x0eeb61d0(_DAT_0f552f70,param_1,param_2,param_3,param_4,*param_5);
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  lVar2 = _DAT_0f552f50;
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 - 1;
  UNLOCK();
  if (lVar2 != -0x7fffffffffffffff) {
    return;
  }
  func_0x0412d450();
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 & 0x7fffffffffffffff;
  UNLOCK();
  FUN_0412d520(0xf552e80);
  uVar3 = uRam000000000f552f40;
  func_0x0412d680(uRam000000000f552f40);
  func_0x0412d6b0(uVar3);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(0xf552f10);
  return;
}


