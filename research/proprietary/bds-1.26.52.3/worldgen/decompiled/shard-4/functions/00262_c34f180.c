/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc44f180 (ELF vaddr 0xc34f180)
 * Label: callee-of:0xc5cb4d0
 * Body:  [[0c44f180, 0c44f399]]
 * Ghidra: FUN_0c44f180
 */


void FUN_0c44f180(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *in_FS_OFFSET;
  undefined4 uStack_c4;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_1 = (long)&UNK_0f36e918;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x1b) = 0;
  *(undefined2 *)((long)param_1 + 0x23) = 0x101;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar1 = *in_FS_OFFSET;
  uStack_c4 = param_5;
  uStack_60 = param_6;
  if (*(char *)(lVar1 + -0xb68) == '\0') {
    *(undefined1 *)(lVar1 + -0xb68) = 1;
    func_0x0417d010(&UNK_0ca00780,lVar1 + -0xb78,0xf53dab8);
  }
  lVar2 = *(long *)(lVar1 + -0xb70);
  uStack_78 = *(undefined4 *)(lVar1 + -0xb78);
  uStack_74 = *(undefined4 *)(lVar1 + -0xb74);
  uStack_70 = *(undefined4 *)(lVar1 + -0xb70);
  uStack_6c = *(undefined4 *)(lVar1 + -0xb6c);
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    UNLOCK();
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    func_0x0412c2d0(lVar2);
    uStack_78 = uStack_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
  }
  func_0x0ca12710(&plStack_c0,&uStack_78,&uStack_c4,param_2,param_3);
  plVar3 = plStack_c0;
  if ((plStack_c0 == (long *)0x0) || (*plStack_c0 == 0)) {
    uStack_58 = param_2;
    uStack_50 = param_3;
    func_0x0470d9a0(&uStack_b8,&UNK_01386e14,0x24,0xd,&uStack_58);
    uStack_98 = uStack_b8;
    uStack_90 = uStack_b0;
    uStack_88 = uStack_a8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    cStack_80 = '\x01';
    (**(code **)(*param_1 + 0x28))(param_1,&uStack_98);
    if ((cStack_80 == '\x01') && ((uStack_98 & 1) != 0)) {
      func_0x0412a280(uStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    if ((uStack_b8 & 1) != 0) {
      func_0x0412a280(uStack_a8,uStack_b8 & 0xfffffffffffffffe);
    }
    if (plVar3 == (long *)0x0) goto LAB_0c44f34a;
  }
  else {
    func_0x0c455bd0(param_1,*plStack_c0,param_4,uStack_c4,uStack_60,0);
  }
  LOCK();
  *(int *)((long)plVar3 + 0xc) = *(int *)((long)plVar3 + 0xc) + -1;
  UNLOCK();
  if (((*(int *)((long)plVar3 + 0xc) < 1) && (*plVar3 == 0)) && (plStack_c0 != (long *)0x0)) {
    func_0x0412a280(plStack_c0,0x10);
  }
LAB_0c44f34a:
  func_0x0c455670(param_1);
  if (CONCAT44(uStack_6c,uStack_70) != 0) {
    func_0x0412c2d0();
  }
  return;
}


