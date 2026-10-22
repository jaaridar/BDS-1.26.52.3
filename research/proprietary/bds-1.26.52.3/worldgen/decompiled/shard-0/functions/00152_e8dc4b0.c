/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8dc4b0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e8dc4b0, 0e8dc95b] [0e8dc986, 0e8dc9ff]]
 * Ghidra: FUN_0e8dc4b0
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8dc4b0(byte *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  char *in_RAX;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_RBX;
  ulong *unaff_R14;
  ulong unaff_R15;
  
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX - cVar2;
  *in_RAX = *in_RAX + cVar2;
  *param_1 = *param_1 + (char)param_4;
  *param_1 = *param_1 >> 4 | *param_1 << 4;
  *(char *)(unaff_RBX + -0x178865fb) = *(char *)(unaff_RBX + -0x178865fb) + (char)param_4;
  *(char *)(param_4 + -0x77) = *(char *)(param_4 + -0x77) + cVar2;
  *(undefined1 *)(param_2 + 0x30) = 0;
  if (unaff_R15 < 0xfffffffffffffff8) {
    if (unaff_R15 < 0x17) {
      uRam000000008400e87f = CONCAT71(uRam000000008400e87f._1_7_,(char)unaff_R15 * '\x02');
      lVar4 = 0x8400e880;
      if (unaff_R15 != 0) goto LAB_0e8dc542;
    }
    else {
      uVar8 = 0x1a;
      if ((unaff_R15 | 7) != 0x17) {
        uVar8 = (unaff_R15 | 7) + 1;
      }
      uRam000000008400e86f = 0xe8dc523;
      lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar8);
      if (lVar4 == 0) {
        uRam000000008400e86f = 0xe8dc957;
        func_0x0eec74c0(uVar8,0);
      }
      uRam000000008400e87f = uVar8 | 1;
      uRam000000008400e887 = unaff_R15;
      lRam000000008400e88f = lVar4;
LAB_0e8dc542:
      uRam000000008400e86f = 0xe8dc550;
      func_0x0eee2f00(lVar4);
    }
    *(undefined1 *)(lVar4 + unaff_R15) = 0;
    unaff_R15 = *unaff_R14;
    if (DAT_0f763d10 != '\0') goto LAB_0e8dc568;
  }
  else {
    uRam000000008400e86f = 0xe8dc98b;
    func_0x04882e30();
  }
  uRam000000008400e86f = 0xe8dc997;
  iVar3 = func_0x04108328(&DAT_0f763d10);
  if (iVar3 != 0) {
    uRam000000008400e86f = 0xe8dc9a4;
    func_0x0e8cbe20();
    uRam000000008400e86f = 0xe8dc9be;
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763c90,0xf53dab8);
    uRam000000008400e86f = 0xe8dc9ca;
    func_0x0410844d(&DAT_0f763d10);
  }
LAB_0e8dc568:
  plVar7 = (long *)(*(long *)(unaff_R15 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(unaff_R15 + 0x20) - *(long *)(unaff_R15 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f763c90 + 4)) * 8);
  do {
    lVar4 = *plVar7;
    if (lVar4 == -1) goto LAB_0e8dc5b0;
    plVar7 = (long *)(*(long *)(unaff_R15 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(unaff_R15 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f763c90 + 4)
          );
  if (plVar7 == *(long **)(unaff_R15 + 0x38)) {
LAB_0e8dc5b0:
    puVar5 = &DAT_0f763c90;
    iVar3 = iRam000000000f763cf0;
  }
  else {
    puVar5 = (undefined *)plVar7[2];
    iVar3 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar3 == -0x2b3da790) && (*(long *)(puVar5 + 0x68) != 0)) {
    *(undefined1 *)(unaff_R14 + 6) = 1;
  }
  else {
    lRam000000008400e8e7 = 0;
    lRam000000008400e8ef = 0;
    lRam000000008400e8d7 = 0;
    lRam000000008400e8df = 0;
    lRam000000008400e8c7 = 0;
    lRam000000008400e8cf = 0;
    lRam000000008400e8b7 = 0;
    lRam000000008400e8bf = 0;
    uRam000000008400e8a7 = 0;
    lRam000000008400e8af = 0;
    plRam000000008400e897 = (long *)0x0;
    uRam000000008400e89f = 0;
    lRam000000008400e8f7 = 0;
    uRam000000008400e8ff = 0x3f600000;
    uRam000000008400e86f = 0xe8dc641;
    func_0x048afb10(0x8400e8cf,8);
    uRam000000008400e927 = 0;
    lRam000000008400e92f = 0;
    lRam000000008400e917 = 0;
    uRam000000008400e91f = 0;
    lRam000000008400e907 = 0;
    lRam000000008400e90f = 0;
    uRam000000008400e86f = 0xe8dc672;
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar6 == (undefined8 *)0x0) {
      uRam000000008400e86f = 0xe8dc937;
      func_0x0eec74c0(8,0);
    }
    *puVar6 = &UNK_0f4cf910;
    if (plRam000000008400e897 != (long *)0x0) {
      lVar4 = *plRam000000008400e897;
      uRam000000008400e86f = 0xe8dc69d;
      plRam000000008400e897 = puVar6;
      (**(code **)(lVar4 + 8))();
      puVar6 = plRam000000008400e897;
    }
    plRam000000008400e897 = puVar6;
    if ((uRam000000008400e89f & 1) == 0) {
      if ((uRam000000008400e87f & 1) == 0) {
        lRam000000008400e8af = lRam000000008400e88f;
        uRam000000008400e89f = uRam000000008400e87f;
        uRam000000008400e8a7 = uRam000000008400e887;
      }
      else {
        uRam000000008400e86f = 0xe8dc6f9;
        func_0x04885070(0x8400e89f,lRam000000008400e88f,uRam000000008400e887);
      }
    }
    else {
      uVar8 = uRam000000008400e87f >> 1 & 0x7f;
      lVar4 = 0x8400e880;
      if ((uRam000000008400e87f & 1) != 0) {
        uVar8 = uRam000000008400e887;
        lVar4 = lRam000000008400e88f;
      }
      uRam000000008400e86f = 0xe8dc6e5;
      func_0x04885120(0x8400e89f,lVar4,uVar8);
    }
    if (DAT_0f5509f0 == '\0') {
      uRam000000008400e86f = 0xe8dc9db;
      iVar3 = func_0x04108328(&DAT_0f5509f0);
      if (iVar3 != 0) {
        uRam000000008400e86f = 0xe8dc9ef;
        func_0x048afe70(0xf5509d8);
        uRam000000008400e86f = 0xe8dc9fb;
        func_0x0410844d(&DAT_0f5509f0);
      }
    }
    uRam000000008400e93f = _DAT_0f5509dc;
    uRam000000008400e86f = 0xe8dc72b;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (plVar7 == (long *)0x0) {
      uRam000000008400e86f = 0xe8dc948;
      func_0x0eec74c0(0xb8,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef43980;
    puVar6 = plRam000000008400e897;
    plRam000000008400e947 = plVar7 + 3;
    plRam000000008400e897 = (long *)0x0;
    plVar7[3] = (long)puVar6;
    plVar7[6] = lRam000000008400e8af;
    plVar7[4] = uRam000000008400e89f;
    plVar7[5] = uRam000000008400e8a7;
    uRam000000008400e89f = 0;
    uRam000000008400e8a7 = 0;
    lRam000000008400e8af = 0;
    plVar7[7] = lRam000000008400e8b7;
    plVar7[8] = lRam000000008400e8bf;
    plVar7[9] = lRam000000008400e8c7;
    lRam000000008400e8b7 = 0;
    lRam000000008400e8bf = 0;
    lRam000000008400e8c7 = 0;
    plVar7[10] = lRam000000008400e8cf;
    plVar7[0xb] = lRam000000008400e8d7;
    plVar7[0xc] = lRam000000008400e8df;
    lRam000000008400e8cf = 0;
    lRam000000008400e8d7 = 0;
    lRam000000008400e8df = 0;
    plVar7[0xd] = lRam000000008400e8e7;
    plVar7[0xe] = lRam000000008400e8ef;
    plVar7[0xf] = lRam000000008400e8f7;
    lRam000000008400e8e7 = 0;
    lRam000000008400e8ef = 0;
    lRam000000008400e8f7 = 0;
    *(undefined4 *)(plVar7 + 0x10) = uRam000000008400e8ff;
    plVar7[0x11] = lRam000000008400e907;
    plVar7[0x12] = lRam000000008400e90f;
    plVar7[0x13] = lRam000000008400e917;
    lRam000000008400e907 = 0;
    lRam000000008400e90f = 0;
    lRam000000008400e917 = 0;
    plVar7[0x16] = lRam000000008400e92f;
    *(undefined4 *)(plVar7 + 0x14) = (undefined4)uRam000000008400e91f;
    *(undefined4 *)((long)plVar7 + 0xa4) = uRam000000008400e91f._4_4_;
    *(undefined4 *)(plVar7 + 0x15) = (undefined4)uRam000000008400e927;
    *(undefined4 *)((long)plVar7 + 0xac) = uRam000000008400e927._4_4_;
    uRam000000008400e91f = 0;
    uRam000000008400e927 = 0;
    lRam000000008400e92f = 0;
    uRam000000008400e957 = 0;
    plRam000000008400e95f = (long *)0x0;
    uRam000000008400e86f = 0xe8dc895;
    plRam000000008400e94f = plVar7;
    func_0x048afd20();
    plVar7 = plRam000000008400e94f;
    if (plRam000000008400e94f != (long *)0x0) {
      LOCK();
      plVar1 = plRam000000008400e94f + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        uRam000000008400e86f = 0xe8dc8bd;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uRam000000008400e86f = 0xe8dc8c5;
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = plRam000000008400e95f;
    if (plRam000000008400e95f != (long *)0x0) {
      LOCK();
      plVar1 = plRam000000008400e95f + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        uRam000000008400e86f = 0xe8dc8ed;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uRam000000008400e86f = 0xe8dc8f5;
        func_0x0412c2d0(plVar7);
      }
    }
    uRam000000008400e86f = 0xe8dc8ff;
    func_0x048aeca0(0x8400e897);
  }
  if ((uRam000000008400e87f & 1) != 0) {
    uRam000000008400e86f = 0xe8dc919;
    func_0x0412a280(lRam000000008400e88f,uRam000000008400e87f & 0xfffffffffffffffe);
  }
  return;
}


