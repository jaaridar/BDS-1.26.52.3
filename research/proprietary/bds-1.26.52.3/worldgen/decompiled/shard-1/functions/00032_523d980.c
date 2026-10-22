/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x523d980
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot1
 * Body:  [[0523d980, 0523d995]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot1
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  char *in_RAX;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  long *unaff_RBX;
  undefined8 *puVar9;
  undefined8 *unaff_RBP;
  ulong uVar10;
  undefined8 uStack_1000e;
  ulong uStack_10006;
  long lStack_fffe;
  char *pcStack_fff6;
  long *plStack_ffee;
  undefined8 uStack_ffe6;
  long *plStack_ffde;
  ulong uStack_78e6;
  undefined8 uStack_78d6;
  undefined8 uStack_10;
  
  puVar9 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x15';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar9 = puVar9 + -1;
    *puVar9 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  LOCK();
  cVar2 = *in_RAX;
  *in_RAX = (char)in_RAX;
  UNLOCK();
  *param_4 = *param_4 + cVar2;
  if (*param_4 != '\0') {
    param_2 = (undefined8 *)(uStack_78e6 & 0xfffffffffffffffe);
    func_0x0412a280(uStack_78d6);
  }
  func_0x0eee2d70();
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (lVar5 == 0) goto LAB_05249b68;
  while( true ) {
    pcStack_fff6 = (char *)*param_2;
    plStack_ffee = (long *)param_2[1];
    if (plStack_ffee != (long *)0x0) {
      LOCK();
      plStack_ffee[1] = plStack_ffee[1] + 1;
      UNLOCK();
    }
    uStack_ffe6 = param_2[2];
    if ((pcStack_fff6 != (char *)0x0) && (*pcStack_fff6 != '\0')) break;
    func_0x04890760();
LAB_05249b68:
    func_0x0eec74c0(0x108,0);
  }
  uVar6 = func_0x0eee2e90(extraout_RDX);
  if (0xfffffffffffffff7 < uVar6) {
    uVar8 = func_0x04882e30();
    if ((uStack_1000e & 1) != 0) {
      func_0x0412a280(lStack_fffe,uStack_1000e & 0xfffffffffffffffe);
    }
    func_0x050d26f0(&pcStack_fff6);
    func_0x0412a280(lVar5,0x108);
    func_0x0eee2d70(uVar8);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plStack_ffde = unaff_RBX;
  if (uVar6 < 0x17) {
    uStack_1000e = CONCAT71(uStack_1000e._1_7_,(char)uVar6 * '\x02');
    lVar7 = (long)&uStack_1000e + 1;
    if (uVar6 == 0) goto LAB_05249aa2;
  }
  else {
    uVar10 = 0x1a;
    if ((uVar6 | 7) != 0x17) {
      uVar10 = (uVar6 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
    if (lVar7 == 0) {
      func_0x0eec74c0(uVar10,0);
    }
    uStack_1000e = uVar10 | 1;
    uStack_10006 = uVar6;
    lStack_fffe = lVar7;
  }
  func_0x0eee2f00(lVar7,extraout_RDX,uVar6);
LAB_05249aa2:
  *(undefined1 *)(lVar7 + uVar6) = 0;
  func_0x0d336610(lVar5,&pcStack_fff6,&uStack_1000e,param_4,0,0,0,3);
  *plStack_ffde = lVar5;
  if ((uStack_1000e & 1) != 0) {
    func_0x0412a280(lStack_fffe,uStack_1000e & 0xfffffffffffffffe);
  }
  plVar4 = plStack_ffee;
  pcStack_fff6 = (char *)0x0;
  plStack_ffee = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = plStack_ffee;
    uStack_ffe6 = 0;
    if (plStack_ffee != (long *)0x0) {
      LOCK();
      plVar1 = plStack_ffee + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_ffee + 0x10))(plStack_ffee);
        func_0x0412c2d0(plVar4);
      }
    }
  }
  return;
}


