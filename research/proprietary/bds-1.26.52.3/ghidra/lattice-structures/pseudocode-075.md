# FUN_09db9c20

- entry: `0x9db9c20`
- body size: 2021 bytes
- callers: `FUN_09cba670`

```c

ulong FUN_09db9c20(long *param_1,long param_2,int *param_3)

{
  ulong *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  ushort *puVar15;
  char cVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte bStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined8 uStack_138;
  int iStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_188 = uStack_188 & 0xffffffffffffff00;
  bStack_160 = 0;
  puVar15 = (ushort *)(*(long *)(param_2 + 0x18) + 0x128);
  if (*(short *)(param_2 + 0x20) == 0x7fff) {
    puVar15 = (ushort *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar15 = (ushort *)(param_2 + 0x20);
  }
  uVar2 = *puVar15;
  lVar8 = func_0x0c9fccb0((int)(short)uVar2);
  if (lVar8 == 0) {
    cVar16 = '\0';
    uVar7 = 0;
    if (uVar2 < 3) goto LAB_09db9e75;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    if (*param_3 != 0) {
      FUN_09e22e10(param_3,&UNK_01261a3a,0x1d,&uStack_158,1);
    }
    goto LAB_09dba3b1;
  }
  if (&uStack_128 == (undefined8 *)(lVar8 + 0x20)) {
    bVar13 = 0;
  }
  else if ((*(byte *)(lVar8 + 0x28) & 1) == 0) {
    uStack_110 = *(undefined8 *)(lVar8 + 0x38);
    uStack_120 = *(ulong *)(lVar8 + 0x28);
    lStack_118 = *(long *)(lVar8 + 0x30);
    bVar13 = 0;
  }
  else {
    FUN_04885070(&uStack_120,*(undefined8 *)(lVar8 + 0x38),*(undefined8 *)(lVar8 + 0x30));
    bVar13 = bStack_160;
  }
  uStack_128 = *(undefined8 *)(lVar8 + 0x20);
  uStack_108 = 0;
  cVar16 = *(char *)(lVar8 + 4);
  puVar1 = (ulong *)(lVar8 + 0x50);
  if (bVar13 == *(byte *)(lVar8 + 0x78)) {
    uVar7 = 2;
    if ((bVar13 & 1) != 0) {
      if (&uStack_188 != puVar1) {
        bVar13 = *(byte *)(lVar8 + 0x58);
        if ((uStack_180 & 1) == 0) {
          if ((bVar13 & 1) == 0) {
            uStack_170 = *(undefined8 *)(lVar8 + 0x68);
            uStack_180 = *(ulong *)(lVar8 + 0x58);
            uStack_178 = *(undefined8 *)(lVar8 + 0x60);
          }
          else {
            FUN_04885070(&uStack_180,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x60));
          }
        }
        else {
          bVar17 = (bVar13 & 1) != 0;
          lVar11 = lVar8 + 0x59;
          if (bVar17) {
            lVar11 = *(long *)(lVar8 + 0x68);
          }
          uVar14 = (ulong)(bVar13 >> 1);
          if (bVar17) {
            uVar14 = *(ulong *)(lVar8 + 0x60);
          }
          FUN_04885120(&uStack_180,lVar11,uVar14);
        }
      }
      uStack_188 = *puVar1;
      uStack_168 = 0;
      uVar7 = 2;
    }
  }
  else {
    if ((bVar13 & 1) == 0) {
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      if (&uStack_188 != puVar1) {
        if ((*(byte *)(lVar8 + 0x58) & 1) == 0) {
          uStack_170 = *(undefined8 *)(lVar8 + 0x68);
          uStack_180 = *(ulong *)(lVar8 + 0x58);
          uStack_178 = *(undefined8 *)(lVar8 + 0x60);
        }
        else {
          FUN_04885070(&uStack_180,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x60));
        }
      }
      uStack_188 = *puVar1;
      bStack_160 = 1;
    }
    else {
      if ((uStack_180 & 1) != 0) {
        func_0x0412a280(uStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      bStack_160 = 0;
    }
    uVar7 = 2;
  }
LAB_09db9e75:
  uStack_bc = uVar7;
  plVar9 = (long *)FUN_0412c300(param_1[0x39]);
  plVar12 = (long *)param_1[0x38];
  LOCK();
  plVar10 = plVar9 + 1;
  lVar8 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  plVar10 = (long *)(**(code **)(*plVar12 + 0x68))(plVar12);
  plStack_60 = (long *)(**(code **)(*plVar10 + 0x150))(plVar10);
  uStack_138 = 0;
  iStack_130 = 0;
  lStack_90 = param_2;
  if ((uStack_120 & 1) == 0) {
    if ((byte)uStack_120 >> 1 != 0) goto LAB_09db9f13;
LAB_09db9fb5:
    puVar3 = (undefined8 *)param_1[0x41];
    fVar19 = (float)func_0x0eee4390(*(undefined4 *)(puVar3 + 1));
    uStack_88 = *puVar3;
    uStack_80 = 0;
    uStack_78 = func_0x0eee4390();
    fVar18 = (float)func_0x0eee4390(uStack_88._4_4_);
    uStack_138 = CONCAT44((int)fVar18,(int)(float)uStack_78);
    lVar8 = lStack_90;
    iStack_130 = (int)fVar19;
  }
  else {
    if (lStack_118 == 0) goto LAB_09db9fb5;
LAB_09db9f13:
    plVar9 = (long *)FUN_0412c300(param_1[0x39]);
    lVar11 = param_1[0x38];
    LOCK();
    plVar12 = plVar9 + 1;
    lVar8 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
      plVar12 = *(long **)(lVar11 + 0x1b0);
    }
    else {
      plVar12 = *(long **)(lVar11 + 0x1b0);
    }
    if (plVar12 == (long *)0x0) {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      if (*param_3 != 0) {
        FUN_09e22e10(param_3,&UNK_012add25,0x21,&uStack_158,1);
      }
LAB_09dba3b1:
      uVar14 = 0;
      goto joined_r0x09dba377;
    }
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uVar14 = uStack_120;
    lVar8 = lStack_118;
    uVar5 = uStack_110;
    if ((uStack_120 & 1) != 0) {
      FUN_04885070(&uStack_b0,uStack_110,lStack_118);
      uVar14 = uStack_b0;
      lVar8 = lStack_a8;
      uVar5 = uStack_a0;
    }
    uStack_a0 = uVar5;
    lStack_a8 = lVar8;
    uStack_b0 = uVar14;
    uStack_b8 = uStack_128;
    uStack_78._0_4_ = *(float *)((undefined8 *)param_1[0x41] + 1);
    uStack_58 = *(undefined8 *)param_1[0x41];
    uStack_50 = 0;
    uStack_88 = func_0x0eee4390();
    uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    fVar19 = (float)func_0x0eee4390(uStack_58._4_4_);
    uStack_158 = CONCAT44((int)fVar19,(int)(float)uStack_88);
    fVar19 = (float)func_0x0eee4390((float)uStack_78);
    lVar8 = lStack_90;
    uStack_150 = CONCAT44(uStack_150._4_4_,(int)fVar19);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    cStack_d0 = '\0';
    if (bStack_160 == 1) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      if ((uStack_180 & 1) == 0) {
        uStack_e0 = uStack_170;
        uStack_f0 = uStack_180;
        uStack_e8 = uStack_178;
      }
      else {
        FUN_04885070(&uStack_f0,uStack_170,uStack_178);
      }
      uStack_f8 = uStack_188;
      cStack_d0 = '\x01';
    }
    cVar6 = (**(code **)(*plVar12 + 0x160))(plVar12,&uStack_b8,&uStack_158,&uStack_138,1,&uStack_f8)
    ;
    if ((cStack_d0 == '\x01') && ((uStack_f0 & 1) != 0)) {
      func_0x0412a280(uStack_e0,uStack_f0 & 0xfffffffffffffffe);
    }
    if ((uStack_b0 & 1) != 0) {
      func_0x0412a280(uStack_a0,uStack_b0 & 0xfffffffffffffffe);
    }
    if (cVar6 == '\0') {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      if (*param_3 != 0) {
        FUN_09e22e10(param_3,&UNK_012add25,0x21,&uStack_158,1);
      }
      goto LAB_09dba3b1;
    }
  }
  uStack_158 = 0xffffffffffffffff;
  uVar7 = (**(code **)(*plVar10 + 0x98))(plVar10);
  lVar11 = (**(code **)(*plStack_60 + 0x898))(plStack_60,&uStack_158,&uStack_138,uVar7,uStack_bc);
  if (1 < uVar2) {
    func_0x0c4fac60(lVar8);
  }
  func_0x0c467270(lVar8,lVar11);
  if ((uStack_120 & 1) == 0) {
    if ((byte)uStack_120 >> 1 != 0) goto LAB_09dba29b;
  }
  else if (lStack_118 != 0) {
LAB_09dba29b:
    uStack_158 = CONCAT44(uStack_158._4_4_,1);
    uStack_150 = 0xffffffffffffffff;
    uStack_148 = uStack_138;
    iStack_140 = iStack_130;
    func_0x0d292640(auStack_40,lVar11,&uStack_158,plVar10,(int)cVar16);
    if (plStack_38 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_38 + 1;
      lVar8 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        func_0x0412c2d0(plStack_38);
      }
    }
    if (*(char *)(lVar11 + 0x78) == '\0') {
      *(undefined2 *)(lVar11 + 0x79) = 0x101;
    }
    *(undefined1 *)(lVar11 + 0x78) = 1;
    *(undefined1 *)(lVar11 + 0x19) = 1;
    plVar12 = (long *)FUN_0412c300(param_1[0x39]);
    lVar4 = param_1[0x38];
    LOCK();
    plVar10 = plVar12 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
      param_1 = plVar12;
    }
    func_0x0c46a3d0(lVar4,lVar11);
  }
  *(undefined2 *)(lVar11 + 0x79) = 0x101;
  uVar14 = CONCAT71((int7)((ulong)param_1 >> 8),1);
joined_r0x09dba377:
  if ((bStack_160 == 1) && ((uStack_180 & 1) != 0)) {
    func_0x0412a280(uStack_170,uStack_180 & 0xfffffffffffffffe);
  }
  if ((uStack_120 & 1) != 0) {
    func_0x0412a280(uStack_110,uStack_120 & 0xfffffffffffffffe);
  }
  return uVar14 & 0xffffffff;
}


```
