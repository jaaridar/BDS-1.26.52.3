/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851900 (ELF vaddr 0xc751900)
 * Label: callee-of:0x517ab30
 * Body:  [[0c851900, 0c851b26]]
 * Ghidra: FUN_0c851900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c851900(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  short *psVar3;
  
  *param_1 = param_3;
  param_1[1] = 0;
  if ((DAT_0f557470 == '\0') && (iVar1 = func_0x04108328(&DAT_0f557470), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557468 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557470);
  }
  for (psVar3 = *(short **)(param_2 + 0x170); psVar3 != *(short **)(param_2 + 0x178);
      psVar3 = psVar3 + 8) {
    if (*psVar3 == _DAT_0f557468) {
      param_1[2] = *(undefined8 *)(psVar3 + 4);
      goto joined_r0x0c851978;
    }
  }
  param_1[2] = 0;
joined_r0x0c851978:
  if ((DAT_0f557480 == '\0') && (iVar1 = func_0x04108328(&DAT_0f557480), iVar1 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557478 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557480);
  }
  psVar3 = *(short **)(param_2 + 0x170);
  if (psVar3 == *(short **)(param_2 + 0x178)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*psVar3 == _DAT_0f557478) {
        uVar2 = *(undefined8 *)(psVar3 + 4);
        break;
      }
      psVar3 = psVar3 + 8;
    } while (psVar3 != *(short **)(param_2 + 0x178));
  }
  param_1[3] = uVar2;
  param_1[4] = &UNK_0f3deb80;
  param_1[5] = param_2;
  param_1[8] = param_1 + 4;
  if (param_3 != (undefined8 *)0x0) {
    if ((DAT_0f6eaf00 == '\0') && (iVar1 = func_0x04108328(&DAT_0f6eaf00), iVar1 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f6eaef8 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f6eaf00);
    }
    for (psVar3 = (short *)*param_3; psVar3 != (short *)param_3[1]; psVar3 = psVar3 + 8) {
      if (*psVar3 == _DAT_0f6eaef8) {
        if (*(long *)(psVar3 + 4) == 0) {
          return;
        }
        param_1[1] = *(undefined8 *)(*(long *)(psVar3 + 4) + 8);
        return;
      }
    }
  }
  return;
}


