# FUN_04b0ab40

- entry: `0x4b0ab40`
- body size: 374 bytes
- callers: `FUN_04e84570`, `FUN_04fbbda0`

```c

/* WARNING: Possible PIC construction at 0x04b0ac9b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04b0aca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04b0ab40(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte ****ppppbVar5;
  byte bVar6;
  undefined4 *unaff_RBX;
  long lVar7;
  undefined8 unaff_R14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  long lStack_58;
  char cStack_50;
  byte ***pppbStack_48;
  long *plStack_40;
  long lStack_38;
  
  uStack_70 = 0x4b0ab6d;
  uStack_5c = param_3;
  FUN_0412d550(0xf552e80);
  LOCK();
  _DAT_0f552f50 = _DAT_0f552f50 + 1;
  UNLOCK();
  uStack_70 = 0x4b0ab84;
  FUN_0412d610(0xf552e80);
  plVar2 = _DAT_0f552f68;
  ppppbVar5 = _DAT_0f552f60;
  if ((_DAT_0f552f60 == (byte ****)0x0) || (*(byte *)_DAT_0f552f60 != 1)) {
    lStack_58 = 0;
    cStack_50 = '\0';
    register0x00000020 = (BADSPACEBASE *)&uStack_70;
    uStack_70 = 0x4b0aca0;
    unaff_RBX = param_5;
    lVar7 = 0xf552e80;
    unaff_R14 = param_4;
  }
  else {
    bVar6 = 1;
    if (_DAT_0f552f68 != (long *)0x0) {
      LOCK();
      _DAT_0f552f68[1] = _DAT_0f552f68[1] + 1;
      UNLOCK();
      bVar6 = *(byte *)ppppbVar5;
    }
    lStack_58 = 0xf552e80;
    cStack_50 = '\x01';
    pppbStack_48 = (byte ***)ppppbVar5;
    plStack_40 = plVar2;
    lStack_38 = _DAT_0f552f70;
    if (((bVar6 & 1) != 0) && (*(char *)(_DAT_0f552f70 + 0x18) == '\x01')) {
      uStack_68 = *param_6;
      uStack_70 = 0x4b0abfe;
      FUN_0eeb61d0(_DAT_0f552f70,param_1,param_2,uStack_5c,param_4,*param_5);
    }
    ppppbVar5 = &pppbStack_48;
    pppbStack_48 = (byte ***)0x0;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      ppppbVar5 = (byte ****)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (ppppbVar5 == (byte ****)0x0) {
        uStack_70 = 0x4b0ac29;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uStack_70 = 0x4b0ac31;
        ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
      }
      plVar2 = plStack_40;
      lStack_38 = 0;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        ppppbVar5 = (byte ****)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (ppppbVar5 == (byte ****)0x0) {
          uStack_70 = 0x4b0ac5f;
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          uStack_70 = 0x4b0ac67;
          ppppbVar5 = (byte ****)func_0x0412c2d0(plVar2);
        }
      }
    }
    lVar7 = lStack_58;
    if (cStack_50 != '\x01') {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(undefined4 **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(byte *****)((long)register0x00000020 + -0x18) = ppppbVar5;
  LOCK();
  plVar2 = (long *)(lVar7 + 0xd0);
  lVar3 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (lVar3 != -0x7fffffffffffffff) {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee031b;
  FUN_0412d450();
  LOCK();
  *(ulong *)(lVar7 + 0xd0) = *(ulong *)(lVar7 + 0xd0) & 0x7fffffffffffffff;
  UNLOCK();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0335;
  FUN_0412d520(lVar7);
  uVar4 = *(undefined8 *)(lVar7 + 0xc0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0344;
  FUN_0412d680(uVar4);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0xeee0353;
  pthread_mutex_unlock(uVar4);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(lVar7 + 0x90);
  return;
}


```
