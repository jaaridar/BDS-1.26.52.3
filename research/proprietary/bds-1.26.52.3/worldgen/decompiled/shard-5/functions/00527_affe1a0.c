/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0fe1a0 (ELF vaddr 0xaffe1a0)
 * Label: caller-of-callee
 * Body:  [[0b0fe1a0, 0b0ff634] [0b0ff640, 0b0ff662] [0b0ff670, 0b0ff843] [0b0ff850, 0b0ff872] [0b0ff880, 0b0ffa5a] [0b0ffa60, 0b0ffa82] [0b0ffa90, 0b0ffc58] [0b0ffc60, 0b0ffc82] [0b0ffc90, 0b0ffe92] [0b0ffea0, 0b100071] [0b100080, 0b1000a2] [0b1000b0, 0b100286] [0b100290, 0b1002b2] [0b1002c0, 0b100488] [0b100490, 0b1004b2] [0b1004c0, 0b100696] [0b1006a0, 0b1006c2] [0b1006d0, 0b100898] [0b1008a0, 0b1008c2] [0b1008d0, 0b100ab2] [0b100ac0, 0b100ae2] [0b100af0, 0b100cc2] [0b100cd0, 0b100cf2] [0b100d00, 0b1012f7] [0b101577, 0b101592] [0b101598, 0b101604]]
 * Ghidra: FUN_0b0fe1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0fe1a0(undefined8 *param_1,undefined8 *param_2,short *param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long ***ppplVar10;
  char cVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  short *psVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 ***pppuVar27;
  long ***ppplVar28;
  long ***ppplStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  long ***ppplStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  ulong uStack_158;
  ulong uStack_150;
  undefined2 uStack_148;
  undefined8 *puStack_138;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  long ***ppplStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 ****ppppuStack_c8;
  long ***ppplStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined2 uStack_98;
  undefined8 ***pppuStack_88;
  undefined8 **ppuStack_80;
  short *psStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 ***pppuStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long **pplStack_38;
  
  puVar17 = (undefined8 *)param_2[7];
  puStack_138 = param_2;
  psStack_78 = param_3;
  puStack_70 = param_1;
  if (*(char *)((long)puVar17 + 6) == '\0') {
    *puVar17 = *(undefined8 *)param_3;
    if ((puVar17[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar17[1] & 0xff00ffffffffffff) - 8);
    }
    puVar17[1] = 0;
    uVar25 = *(ulong *)(param_3 + 4);
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar2 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar2 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (plVar12 == (long *)0x0 && lVar24 != 0) {
        func_0x0eec74c0(lVar24,8);
      }
      *plVar12 = lVar2;
      func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar2);
      *(undefined1 *)((long)plVar12 + lVar2 + 8) = 0;
      uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      param_3 = psStack_78;
    }
    puVar17[1] = uVar25;
    if ((puVar17[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar17[2] & 0xff00ffffffffffff) - 8);
    }
    puVar17[2] = 0;
    uVar25 = *(ulong *)(param_3 + 8);
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar2 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar24 = lVar2 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (plVar12 == (long *)0x0 && lVar24 != 0) {
        func_0x0eec74c0(lVar24,8);
      }
      *plVar12 = lVar2;
      func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar2);
      *(undefined1 *)((long)plVar12 + lVar2 + 8) = 0;
      uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      param_3 = psStack_78;
    }
    puVar17[2] = uVar25;
  }
  ppuStack_80 = (undefined8 **)*puStack_138;
  pppuStack_130 = *(undefined8 ****)param_3;
  uStack_128 = *(ulong *)(param_3 + 4);
  uStack_60 = CONCAT71(uStack_60._1_7_,*(undefined1 *)((long)puStack_138 + 0x94));
  if ((uStack_128 & 0x80000000000000) != 0) {
    lVar2 = *(long *)((uStack_128 & 0xff00ffffffffffff) - 8);
    lVar24 = lVar2 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (plVar12 == (long *)0x0 && lVar24 != 0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar12 = lVar2;
    func_0x0eee2f00(plVar12 + 1,uStack_128 & 0xff00ffffffffffff,lVar2);
    *(undefined1 *)((long)plVar12 + lVar2 + 8) = 0;
    uStack_128 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    param_3 = psStack_78;
  }
  uStack_120 = 0;
  uVar25 = *(ulong *)(param_3 + 8);
  if ((uVar25 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar24 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar2,8);
    }
    *plVar12 = lVar24;
    func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
    uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar17 = puStack_138;
  puStack_40 = puStack_138 + 8;
  uVar22 = puStack_138[9];
  uVar13 = uVar22 & 0x80000000000000;
  uVar7 = (ushort)(uVar22 >> 0x30);
  uStack_120 = uVar25;
  if (uVar13 == 0) {
    if ((uVar22 & 0x7f000000000000) == 0) goto LAB_0b0fe594;
    uVar19 = (ulong)(uVar7 & 0x7f);
LAB_0b0fe549:
    if ((((uVar19 != 4) || (*(int *)(uVar22 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*(short *)(puStack_138 + 8) != 9999)) ||
       ((*(short *)((long)puStack_138 + 0x42) != 9999 ||
        (*(short *)((long)puStack_138 + 0x44) != 9999)))) goto LAB_0b0fe594;
LAB_0b0fe7ec:
    if (uVar13 == 0) {
      if ((uVar22 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar7 & 0x7f);
LAB_0b0fe82d:
        uVar20 = 3;
        if ((((uVar19 == 4) &&
             (piVar26 = (int *)(uVar22 & 0xff00ffffffffffff), *piVar26 == 0x61746562)) &&
            (*(short *)(puStack_138 + 8) == 9999)) &&
           ((*(short *)((long)puStack_138 + 0x42) == 9999 &&
            (*(short *)((long)puStack_138 + 0x44) == 9999)))) {
          pppuStack_130 = (undefined8 ***)*puStack_40;
          if ((uStack_128 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8)
            ;
            uVar22 = puVar17[9];
            piVar26 = (int *)(uVar22 & 0xff00ffffffffffff);
            uVar13 = uVar22 & 0x80000000000000;
          }
          uStack_128 = 0;
          if (uVar13 != 0) {
            lVar24 = *(long *)(piVar26 + -2);
            lVar2 = lVar24 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
            if (lVar2 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar2,8);
            }
            *plVar12 = lVar24;
            func_0x0eee2f00(plVar12 + 1,piVar26,lVar24);
            *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
            uVar22 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_128 = uVar22;
          if ((uStack_120 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_120 = 0;
          uVar25 = puVar17[10];
          uVar20 = 3;
          if ((uVar25 & 0x80000000000000) != 0) {
            lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
            lVar2 = lVar24 + 9;
            plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8,3);
            if (lVar2 != 0 && plVar12 == (long *)0x0) {
              func_0x0eec74c0(lVar2,8);
            }
            *plVar12 = lVar24;
            func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
            *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
            uVar20 = 3;
            uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0b0fea5f;
      }
    }
    else {
      uVar19 = *(ulong *)((uVar22 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0b0fe82d;
    }
    uVar20 = 3;
  }
  else {
    uVar19 = *(ulong *)((uVar22 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0b0fe549;
LAB_0b0fe594:
    uVar19 = *(ulong *)(param_3 + 4);
    if ((uVar19 & 0x80000000000000) != 0) {
      uVar21 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
      if (uVar21 != 0) goto LAB_0b0fe5d9;
      goto LAB_0b0fe7ec;
    }
    if ((uVar19 & 0x7f000000000000) == 0) goto LAB_0b0fe7ec;
    uVar21 = (ulong)((ushort)(uVar19 >> 0x30) & 0x7f);
LAB_0b0fe5d9:
    if (((uVar21 != 4) || (*(int *)(uVar19 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*param_3 != 9999 || ((param_3[1] != 9999 || (param_3[2] != 9999)))))) goto LAB_0b0fe7ec;
    puVar3 = (undefined8 *)puStack_138[1];
    pppuStack_130 = (undefined8 ***)*puVar3;
    if ((uStack_128 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
    }
    uStack_128 = 0;
    uVar25 = puVar3[1];
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar2 = lVar24 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
      if (lVar2 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar2,8);
      }
      *plVar12 = lVar24;
      func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
      uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_128 = uVar25;
    if ((uStack_120 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
    }
    uStack_120 = 0;
    uVar25 = puVar3[2];
    uVar20 = 1;
    if ((uVar25 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
      lVar2 = lVar24 + 9;
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8,1);
      if (lVar2 != 0 && plVar12 == (long *)0x0) {
        func_0x0eec74c0(lVar2,8);
      }
      *plVar12 = lVar24;
      func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
      uVar20 = 1;
      uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0b0fea5f:
  uStack_120 = uVar25;
  func_0x0d6b3300(&ppppuStack_c8,puStack_40,&pppuStack_130,uVar20);
  if ((puVar17[5] == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_013d2d4b),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_58 = puVar17 + 5;
  plStack_68 = puVar17 + 2;
  if (((char *)puVar17[2] == (char *)0x0) || (*(char *)puVar17[2] != '\x01')) {
    cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_013d2d4b);
    if (cVar11 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppuVar27 = (undefined8 ***)*plStack_58;
    if ((*plStack_68 == 0) &&
       (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar11 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    pppuVar27 = (undefined8 ***)*plStack_58;
  }
  if ((*(char *)*plStack_68 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar20 = puVar17[4];
  ppppuVar14 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppuVar14 == (undefined8 ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppplStack_e0 = (long ***)puVar17[8];
  ppplVar28 = (long ***)puVar17[9];
  pppuStack_50 = ppplStack_e0;
  uStack_48 = uVar20;
  pplStack_38 = (long **)pppuVar27;
  if (((ulong)ppplVar28 & 0x80000000000000) != 0) {
    lVar24 = *(long *)(((ulong)ppplVar28 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar24 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar2,8);
    }
    *plVar12 = lVar24;
    func_0x0eee2f00(plVar12 + 1,(ulong)ppplVar28 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
    ppplVar28 = (long ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    puVar17 = puStack_138;
  }
  uStack_d0 = 0;
  pppuStack_188 = (undefined8 ***)puVar17[10];
  if (((ulong)pppuStack_188 & 0x80000000000000) != 0) {
    lVar24 = *(long *)(((ulong)pppuStack_188 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar24 + 9;
    pppuStack_d8 = ppplVar28;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar2,8);
    }
    *plVar12 = lVar24;
    func_0x0eee2f00(plVar12 + 1,(ulong)pppuStack_188 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
    pppuStack_188 = (undefined8 ***)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    puVar17 = puStack_138;
  }
  uStack_150 = uStack_a0;
  uStack_158 = uStack_a8;
  ppplStack_168 = (long ***)uStack_b8;
  ppppuStack_170 = (undefined8 ****)ppplStack_c0;
  uStack_e8 = uStack_98;
  uVar1 = *(undefined2 *)((long)puVar17 + 0x92);
  pppuStack_d8 = (undefined8 ***)0x0;
  uStack_d0 = 0;
  ppplStack_118 = (long ***)ppppuStack_c8;
  ppplStack_c0 = (long ***)0x0;
  ppppuStack_178 = ppppuStack_c8;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  uStack_b8 = 0;
  uStack_160 = uStack_b0;
  uStack_15c = uStack_ac;
  uStack_f8 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_f0 = 0;
  uStack_148 = uStack_98;
  ppplStack_198 = pppuStack_50;
  pppuStack_190 = ppplVar28;
  func_0x0d6a8a30(ppppuVar14,uStack_48,&ppplStack_198,&ppppuStack_178);
  puVar17 = puStack_70;
  psVar23 = psStack_78;
  if ((uStack_150 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_150 & 0xff00ffffffffffff) - 8);
  }
  uStack_150 = 0;
  if ((uStack_158 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_158 & 0xff00ffffffffffff) - 8);
  }
  uStack_158 = 0;
  if (((ulong)ppplStack_168 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_168 & 0xff00ffffffffffff) - 8);
  }
  ppplStack_168 = (long ***)0x0;
  if (((ulong)ppppuStack_170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppppuStack_170 & 0xff00ffffffffffff) - 8);
  }
  ppppuStack_170 = (undefined8 ****)0x0;
  if (((ulong)pppuStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_188 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_188 = (long ***)0x0;
  if (((ulong)pppuStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_190 & 0xff00ffffffffffff) - 8);
  }
  *ppppuVar14 = (undefined8 ***)&UNK_0f281a68;
  ppppuVar14[0xe] = (undefined8 ***)pplStack_38;
  *(undefined2 *)(ppppuVar14 + 0xf) = uVar1;
  *(undefined1 *)((long)ppppuVar14 + 0x7a) = (undefined1)uStack_60;
  ppppuStack_178 = ppppuVar14;
  if ((uStack_a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_a0 = 0;
  if ((uStack_a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_a8 = 0;
  if ((uStack_b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_b8 = 0;
  if (((ulong)ppplStack_c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppplStack_c0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_120 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
  }
  uStack_120 = 0;
  if ((uStack_128 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
  }
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    ppppuVar14 = (undefined8 ****)*ppuStack_80;
    ppppuVar15 = (undefined8 ****)ppuStack_80[1];
    while ((ppppuVar14 != ppppuVar15 &&
           (cVar11 = func_0x04fa7a10(*ppppuVar14 + 4,ppppuStack_178 + 7), cVar11 != '\0'))) {
      ppppuVar14 = ppppuVar14 + 1;
    }
    func_0x0d6af860(ppuStack_80,ppppuVar14,&ppppuStack_178);
    ppppuVar15 = ppppuStack_178;
    ppppuStack_178 = (undefined8 ****)0x0;
    if (ppppuVar15 != (undefined8 ****)0x0) {
      (*(code *)(*ppppuVar15)[1])();
    }
  }
  *(undefined1 *)(puStack_138 + 0x12) = 0;
  uVar25 = *(ulong *)(psVar23 + 4);
  if ((uVar25 & 0x80000000000000) == 0) {
    if ((uVar25 & 0x7f000000000000) != 0) {
      uVar22 = (ulong)((ushort)(uVar25 >> 0x30) & 0x7f);
LAB_0b0ff223:
      if ((((uVar22 == 4) && (*(int *)(uVar25 & 0xff00ffffffffffff) == 0x61746562)) &&
          (*psVar23 == 9999)) && ((psVar23[1] == 9999 && (psVar23[2] == 9999)))) goto LAB_0b100ded;
    }
  }
  else {
    uVar22 = *(ulong *)((uVar25 & 0xff00ffffffffffff) - 8);
    if (uVar22 != 0) goto LAB_0b0ff223;
  }
  uStack_60 = *puStack_138;
  if ((((char *)puStack_138[2] == (char *)0x0) || (*(char *)puStack_138[2] == '\0')) &&
     (cVar11 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01215b27),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((puStack_138[6] == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01215b27),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppuVar27 = (undefined8 ***)puStack_138[6];
  if ((puStack_138[2] == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*(char *)*plStack_68 == '\0') &&
     (cVar11 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppuVar4 = (undefined8 ***)puStack_138[4];
  ppppuVar15 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
  if (ppppuVar15 == (undefined8 ****)0x0) {
    func_0x0eec74c0(0x1a0,0);
  }
  func_0x0d6b23d0(ppppuVar15,puStack_40,psVar23);
  ppppuVar15[8] = (undefined8 ***)0x0;
  ppppuVar15[9] = (undefined8 ***)0x0;
  ppppuVar15[10] = (undefined8 ***)0x0;
  pppuVar16 = (undefined8 ***)pppuVar4[1];
  pppuVar5 = (undefined8 ***)pppuVar4[2];
  if (pppuVar5 == (undefined8 ***)0x0) {
    ppppuVar15[8] = pppuVar16;
    ppppuVar15[9] = (undefined8 ***)0x0;
  }
  else {
    LOCK();
    pppuVar5[1] = (undefined8 **)((long)pppuVar5[1] + 1);
    UNLOCK();
    ppppuVar14 = (undefined8 ****)ppppuVar15[9];
    ppppuVar15[8] = pppuVar16;
    ppppuVar15[9] = pppuVar5;
    if (ppppuVar14 != (undefined8 ****)0x0) {
      LOCK();
      ppppuVar18 = ppppuVar14 + 1;
      pppuVar16 = *ppppuVar18;
      *ppppuVar18 = (undefined8 ***)((long)*ppppuVar18 + -1);
      UNLOCK();
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuVar14)[2])(ppppuVar14);
        func_0x0412c2d0(ppppuVar14);
      }
      pppuVar16 = ppppuVar15[8];
    }
  }
  if ((pppuVar16 == (undefined8 ***)0x0) || (ppppuVar15[10] = pppuVar4, *(char *)pppuVar16 == '\0'))
  {
    uVar20 = func_0x04890760();
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    FUN_0ee386e0(pppuVar4);
    func_0x0b0f8940(puStack_70);
    uVar20 = func_0x0eee2d70(uVar20);
    func_0x0b0f8940(puStack_70);
    uVar20 = func_0x0eee2d70(uVar20);
    FUN_0ee386e0(&pppuStack_d8);
    func_0x0412a280(ppppuVar14,0x80);
    func_0x05d864e0(&ppppuStack_c8);
    FUN_0ee386e0(&uStack_120);
    FUN_0ee386e0(&uStack_128);
    ppppuVar18 = (undefined8 ****)func_0x0eee2d70(uVar20);
    ppppuVar14 = ppppuStack_178;
    ppppuStack_178 = (undefined8 ****)0x0;
    if (ppppuVar14 == (undefined8 ****)0x0) {
      ppppuVar14 = ppppuVar18;
      func_0x0eee2d70();
    }
    (*(code *)(*ppppuVar14)[1])();
    uVar20 = func_0x0eee2d70(ppppuVar18);
    (*(code *)(*ppppuVar15)[1])(ppppuVar15);
    func_0x0eee2d70(uVar20);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ppppuVar15[0xe] = (undefined8 ***)0x0;
  ppppuVar15[0xf] = (undefined8 ***)0x0;
  ppppuVar15[0xc] = (undefined8 ***)0x0;
  ppppuVar15[0xd] = (undefined8 ***)0x0;
  *(undefined4 *)(ppppuVar15 + 0x10) = 0x3f800000;
  *(undefined1 *)(ppppuVar15 + 0x12) = 0;
  *(undefined1 *)(ppppuVar15 + 0x24) = 0;
  *ppppuVar15 = (undefined8 ***)&UNK_0f281b20;
  ppppuVar15[0x2a] = (undefined8 ***)0x0;
  ppppuVar15[0x30] = (undefined8 ***)0x0;
  ppppuVar15[0x32] = pppuVar27;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_012a49b9;
  puVar17[2] = _DAT_012a49b1;
  puVar17[3] = uVar20;
  uVar20 = _UNK_012a49a9;
  *puVar17 = _DAT_012a49a1;
  puVar17[1] = uVar20;
  *(undefined2 *)(puVar17 + 4) = 0x6b;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = ppplVar28 + 6;
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = (long **)0x656e6f706d6f6314;
  ppplVar28[1] = (long **)0x73746e;
  ppplStack_198 = ppplVar28 + 3;
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = ppplVar28;
  ppplStack_110 = ppplVar28;
  ppplStack_e0 = ppplVar28;
  func_0x0412e5e0(ppplStack_198,puVar17,0x21);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b298840(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_118;
  ppplVar28 = ppplStack_110;
  if (ppplStack_118 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar10;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x28);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_012a49b9;
  puVar17[2] = _DAT_012a49b1;
  puVar17[3] = uVar20;
  uVar20 = _UNK_012a49a9;
  *puVar17 = _DAT_012a49a1;
  puVar17[1] = uVar20;
  *(undefined2 *)(puVar17 + 4) = 0x6b;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  pppuStack_88 = (undefined8 ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (pppuStack_88 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = pppuStack_88 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  ppuStack_80 = (long **)0x656e6f706d6f6320;
  *pppuStack_88 = (long **)0x656e6f706d6f6320;
  pppuStack_88[1] = (long **)0x70756f72675f746e;
  pppuStack_88[2] = (long **)0x73;
  pppuStack_88[3] = (undefined8 **)&UNK_03020106;
  pppuStack_130 = pppuStack_88 + 6;
  pppuStack_88[4] = (long **)0x0;
  pppuStack_88[5] = (long **)0x0;
  ppplStack_198 = pppuStack_88;
  pppuStack_190 = pppuStack_88;
  ppppuStack_178 = &ppplStack_198;
  func_0x0412e5e0(pppuStack_130,puVar17,0x21);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b298840(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x28);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_01390fa4;
  *(ulong *)((long)puVar17 + 0xf) = CONCAT71(_UNK_01390f9d,DAT_01390f9c);
  *(undefined8 *)((long)puVar17 + 0x17) = uVar20;
  uVar20 = CONCAT17(DAT_01390f9c,_UNK_01390f95);
  *puVar17 = _DAT_01390f8d;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1f) = 0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = ppplVar28 + 6;
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = (long **)0x656e6f706d6f6314;
  ppplVar28[1] = (long **)0x73746e;
  ppplStack_198 = ppplVar28 + 3;
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = ppplVar28;
  ppplStack_110 = ppplVar28;
  ppplStack_e0 = ppplVar28;
  func_0x0412e5e0(ppplStack_198,puVar17,0x1f);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b298b90(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_118;
  ppplVar28 = ppplStack_110;
  if (ppplStack_118 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar10;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_01390fa4;
  *(ulong *)((long)puVar17 + 0xf) = CONCAT71(_UNK_01390f9d,DAT_01390f9c);
  *(undefined8 *)((long)puVar17 + 0x17) = uVar20;
  uVar20 = CONCAT17(DAT_01390f9c,_UNK_01390f95);
  *puVar17 = _DAT_01390f8d;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1f) = 0;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = ppplVar28 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = ppuStack_80;
  ppplVar28[1] = (long **)0x70756f72675f746e;
  ppplVar28[2] = (long **)0x73;
  ppplVar28[3] = (long **)&UNK_03020106;
  pppuStack_130 = ppplVar28 + 6;
  ppplVar28[4] = (long **)0x0;
  ppplVar28[5] = (long **)0x0;
  ppplStack_198 = ppplVar28;
  pppuStack_190 = ppplVar28;
  ppppuStack_178 = &ppplStack_198;
  pppuStack_88 = ppplVar28;
  func_0x0412e5e0(pppuStack_130,puVar17,0x1f);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b298b90(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_01413073;
  puVar17[2] = _DAT_0141306b;
  puVar17[3] = uVar20;
  uVar20 = _UNK_01413063;
  *puVar17 = _DAT_0141305b;
  puVar17[1] = uVar20;
  *(undefined4 *)((long)puVar17 + 0x1f) = 0x6b636174;
  *(undefined1 *)((long)puVar17 + 0x23) = 0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = ppplVar28 + 6;
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = (long **)0x656e6f706d6f6314;
  ppplVar28[1] = (long **)0x73746e;
  ppplStack_198 = ppplVar28 + 3;
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = ppplVar28;
  ppplStack_110 = ppplVar28;
  ppplStack_e0 = ppplVar28;
  func_0x0412e5e0(ppplStack_198,puVar17,0x23);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b298ec0(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_118;
  ppplVar28 = ppplStack_110;
  if (ppplStack_118 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar10;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x28);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_01413073;
  puVar17[2] = _DAT_0141306b;
  puVar17[3] = uVar20;
  uVar20 = _UNK_01413063;
  *puVar17 = _DAT_0141305b;
  puVar17[1] = uVar20;
  *(undefined4 *)((long)puVar17 + 0x1f) = 0x6b636174;
  *(undefined1 *)((long)puVar17 + 0x23) = 0;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = ppplVar28 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = ppuStack_80;
  ppplVar28[1] = (long **)0x70756f72675f746e;
  ppplVar28[2] = (long **)0x73;
  ppplVar28[3] = (long **)&UNK_03020106;
  pppuStack_130 = ppplVar28 + 6;
  ppplVar28[4] = (long **)0x0;
  ppplVar28[5] = (long **)0x0;
  ppplStack_198 = ppplVar28;
  pppuStack_190 = ppplVar28;
  ppppuStack_178 = &ppplStack_198;
  pppuStack_88 = ppplVar28;
  func_0x0412e5e0(pppuStack_130,puVar17,0x23);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b298ec0(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x28);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_0143b898;
  *(ulong *)((long)puVar17 + 0xc) = CONCAT44(_UNK_0143b894,_DAT_0143b890);
  *(undefined8 *)((long)puVar17 + 0x14) = uVar20;
  uVar20 = CONCAT44(_DAT_0143b890,_UNK_0143b88c);
  *puVar17 = _DAT_0143b884;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1c) = 0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = ppplVar28 + 6;
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = (long **)0x656e6f706d6f6314;
  ppplVar28[1] = (long **)0x73746e;
  ppplStack_198 = ppplVar28 + 3;
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = ppplVar28;
  ppplStack_110 = ppplVar28;
  ppplStack_e0 = ppplVar28;
  func_0x0412e5e0(ppplStack_198,puVar17,0x1c);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b2991f0(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_118;
  ppplVar28 = ppplStack_110;
  if (ppplStack_118 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar10;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_0143b898;
  *(ulong *)((long)puVar17 + 0xc) = CONCAT44(_UNK_0143b894,_DAT_0143b890);
  *(undefined8 *)((long)puVar17 + 0x14) = uVar20;
  uVar20 = CONCAT44(_DAT_0143b890,_UNK_0143b88c);
  *puVar17 = _DAT_0143b884;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1c) = 0;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = ppplVar28 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = ppuStack_80;
  ppplVar28[1] = (long **)0x70756f72675f746e;
  ppplVar28[2] = (long **)0x73;
  ppplVar28[3] = (long **)&UNK_03020106;
  pppuStack_130 = ppplVar28 + 6;
  ppplVar28[4] = (long **)0x0;
  ppplVar28[5] = (long **)0x0;
  ppplStack_198 = ppplVar28;
  pppuStack_190 = ppplVar28;
  ppppuStack_178 = &ppplStack_198;
  pppuStack_88 = ppplVar28;
  func_0x0412e5e0(pppuStack_130,puVar17,0x1c);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b2991f0(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_011b90a3;
  *(ulong *)((long)puVar17 + 0xf) = CONCAT71(_UNK_011b909c,DAT_011b909b);
  *(undefined8 *)((long)puVar17 + 0x17) = uVar20;
  uVar20 = CONCAT17(DAT_011b909b,_UNK_011b9094);
  *puVar17 = _DAT_011b908c;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1f) = 0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = ppplVar28 + 6;
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = (long **)0x656e6f706d6f6314;
  ppplVar28[1] = (long **)0x73746e;
  ppplStack_198 = ppplVar28 + 3;
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = ppplVar28;
  ppplStack_110 = ppplVar28;
  ppplStack_e0 = ppplVar28;
  func_0x0412e5e0(ppplStack_198,puVar17,0x1f);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b299500(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_118;
  ppplVar28 = ppplStack_110;
  if (ppplStack_118 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar10;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar20 = _UNK_011b90a3;
  *(ulong *)((long)puVar17 + 0xf) = CONCAT71(_UNK_011b909c,DAT_011b909b);
  *(undefined8 *)((long)puVar17 + 0x17) = uVar20;
  uVar20 = CONCAT17(DAT_011b909b,_UNK_011b9094);
  *puVar17 = _DAT_011b908c;
  puVar17[1] = uVar20;
  *(undefined1 *)((long)puVar17 + 0x1f) = 0;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = ppplVar28 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = ppuStack_80;
  ppplVar28[1] = (long **)0x70756f72675f746e;
  ppplVar28[2] = (long **)0x73;
  ppplVar28[3] = (long **)&UNK_03020106;
  pppuStack_130 = ppplVar28 + 6;
  ppplVar28[4] = (long **)0x0;
  ppplVar28[5] = (long **)0x0;
  ppplStack_198 = ppplVar28;
  pppuStack_190 = ppplVar28;
  ppppuStack_178 = &ppplStack_198;
  pppuStack_88 = ppplVar28;
  func_0x0412e5e0(pppuStack_130,puVar17,0x1f);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b299500(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x20);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_013c55ea;
  puVar17[2] = _DAT_013c55e2;
  puVar17[3] = uVar20;
  uVar20 = _UNK_013c55da;
  *puVar17 = _DAT_013c55d2;
  puVar17[1] = uVar20;
  *(undefined8 *)((long)puVar17 + 0x1d) = 0x6e6f706165775f63;
  *(undefined1 *)((long)puVar17 + 0x25) = 0;
  ppplStack_118 = (long ***)0x0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_c0 = (long ***)((ulong)ppplStack_c0 & 0xffffffffffffff00);
  ppppuStack_c8 = &ppplStack_118;
  ppppuVar14 = (undefined8 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppppuVar14 == (undefined8 ****)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  ppplStack_108 = (long ***)(ppppuVar14 + 6);
  ppppuStack_170 = &ppplStack_e0;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppppuVar14 = (undefined8 ***)0x656e6f706d6f6314;
  ppppuVar14[1] = (undefined8 ***)0x73746e;
  ppplStack_198 = (long ***)(ppppuVar14 + 3);
  ppppuStack_178 = &ppplStack_118;
  ppplStack_168 = (long ***)&ppplStack_198;
  ppplStack_118 = (long ***)ppppuVar14;
  ppplStack_110 = (long ***)ppppuVar14;
  ppplStack_e0 = (long ***)ppppuVar14;
  func_0x0412e5e0(ppplStack_198,puVar17,0x25);
  ppplStack_110 = ppplStack_198 + 3;
  ppppuStack_c8 = (undefined8 ****)0x0;
  ppplStack_c0 = (long ***)0x0;
  uStack_b8 = 0;
  func_0x0b299840(ppppuVar15,&ppplStack_118,&ppppuStack_c8);
  ppppuVar18 = ppppuStack_c8;
  ppppuVar14 = (undefined8 ****)ppplStack_c0;
  if (ppppuStack_c8 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_c0 = (long ***)ppppuVar18;
    func_0x0412a280(ppppuVar18,uStack_b8 - (long)ppppuVar18);
  }
  ppplVar28 = ppplStack_118;
  ppppuVar14 = (undefined8 ****)ppplStack_110;
  if ((undefined8 ****)ppplStack_118 != (undefined8 ****)0x0) {
    for (; (undefined8 ****)ppplVar28 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    ppplStack_110 = ppplVar28;
    func_0x0412a280(ppplStack_118,(long)ppplStack_108 - (long)ppplStack_118);
  }
  func_0x0412a280(puVar17,0x28);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_013c55ea;
  puVar17[2] = _DAT_013c55e2;
  puVar17[3] = uVar20;
  uVar20 = _UNK_013c55da;
  *puVar17 = _DAT_013c55d2;
  puVar17[1] = uVar20;
  *(undefined8 *)((long)puVar17 + 0x1d) = 0x6e6f706165775f63;
  *(undefined1 *)((long)puVar17 + 0x25) = 0;
  ppplStack_198 = (long ***)0x0;
  pppuStack_190 = (undefined8 ***)0x0;
  pppuStack_188 = (undefined8 ***)0x0;
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  ppplStack_e0 = (long ***)&ppplStack_198;
  ppplVar28 = (long ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (ppplVar28 == (long ***)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppuStack_188 = ppplVar28 + 9;
  ppppuStack_170 = &pppuStack_88;
  ppplStack_168 = (long ***)&pppuStack_130;
  uStack_160 = uStack_160 & 0xffffff00;
  *ppplVar28 = ppuStack_80;
  ppplVar28[1] = (long **)0x70756f72675f746e;
  ppplVar28[2] = (long **)0x73;
  ppplVar28[3] = (long **)&UNK_03020106;
  pppuStack_130 = ppplVar28 + 6;
  ppplVar28[4] = (long **)0x0;
  ppplVar28[5] = (long **)0x0;
  ppplStack_198 = ppplVar28;
  pppuStack_190 = ppplVar28;
  ppppuStack_178 = &ppplStack_198;
  pppuStack_88 = ppplVar28;
  func_0x0412e5e0(pppuStack_130,puVar17,0x25);
  pppuStack_190 = pppuStack_130 + 3;
  ppppuStack_178 = (undefined8 ****)0x0;
  ppppuStack_170 = (undefined8 ****)0x0;
  ppplStack_168 = (long ***)0x0;
  func_0x0b299840(ppppuVar15,&ppplStack_198,&ppppuStack_178);
  psVar23 = psStack_78;
  ppppuVar18 = ppppuStack_178;
  ppppuVar14 = ppppuStack_170;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    for (; ppppuVar18 != ppppuVar14; ppppuVar14 = ppppuVar14 + -3) {
      if (((ulong)ppppuVar14[-3] & 1) != 0) {
        func_0x0412a280(ppppuVar14[-1],(ulong)ppppuVar14[-3] & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(ppppuVar18,(long)ppplStack_168 - (long)ppppuVar18);
  }
  ppplVar10 = ppplStack_198;
  ppplVar28 = pppuStack_190;
  if (ppplStack_198 != (long ***)0x0) {
    for (; ppplVar10 != ppplVar28; ppplVar28 = ppplVar28 + -3) {
      if (((ulong)ppplVar28[-3] & 1) != 0) {
        func_0x0412a280(ppplVar28[-1],(ulong)ppplVar28[-3] & 0xfffffffffffffffe);
      }
    }
    pppuStack_190 = ppplVar10;
    func_0x0412a280(ppplStack_198,(long)pppuStack_188 - (long)ppplStack_198);
  }
  func_0x0412a280(puVar17,0x28);
  if ((_DAT_0f6b1120 == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_0145496d,&UNK_011ab986,0x7b,&UNK_0143b7d4,&UNK_014d753e),
     psVar23 = psStack_78, cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar3 = *(undefined8 **)(_DAT_0f6b1120 + 0x178);
  for (puVar17 = *(undefined8 **)(_DAT_0f6b1120 + 0x170); puVar17 != puVar3; puVar17 = puVar17 + 1)
  {
    (*(code *)*puVar17)(ppppuVar15);
  }
  ppppuStack_178 = ppppuVar15;
  func_0x0d6afb30(uStack_60,&ppppuStack_178);
  puVar17 = puStack_70;
  if (ppppuStack_178 != (undefined8 ****)0x0) {
    (*(code *)(*ppppuStack_178)[1])();
  }
LAB_0b100ded:
  uVar20 = puStack_138[1];
  *puVar17 = *puStack_138;
  puVar17[1] = uVar20;
  uVar20 = puStack_138[3];
  puVar17[2] = puStack_138[2];
  puVar17[3] = uVar20;
  *plStack_68 = 0;
  plStack_68[1] = 0;
  puVar17[4] = puStack_138[4];
  puStack_138[4] = 0;
  puVar17[7] = plStack_58[2];
  uVar8 = *(undefined4 *)((long)plStack_58 + 4);
  lVar2 = plStack_58[1];
  uVar9 = *(undefined4 *)((long)plStack_58 + 0xc);
  *(int *)(puVar17 + 5) = (int)*plStack_58;
  *(undefined4 *)((long)puVar17 + 0x2c) = uVar8;
  *(int *)(puVar17 + 6) = (int)lVar2;
  *(undefined4 *)((long)puVar17 + 0x34) = uVar9;
  puVar17[8] = *(undefined8 *)psVar23;
  puVar17[9] = 0;
  uVar25 = *(ulong *)(psVar23 + 4);
  if ((uVar25 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar24 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar2,8);
    }
    *plVar12 = lVar24;
    func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
    uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar17[9] = uVar25;
  puVar17[10] = 0;
  uVar25 = *(ulong *)(psVar23 + 8);
  if ((uVar25 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar25 & 0xff00ffffffffffff) - 8);
    lVar2 = lVar24 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar2,8);
    if (lVar2 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar2,8);
    }
    *plVar12 = lVar24;
    func_0x0eee2f00(plVar12 + 1,uVar25 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar12 + lVar24 + 8) = 0;
    uVar25 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puVar17 = puStack_70;
  }
  puVar17[10] = uVar25;
  puVar17[0x10] = 0;
  *(undefined1 *)(puVar17 + 0x12) = 1;
  *(undefined2 *)((long)puVar17 + 0x92) = 0xfffc;
  *(undefined1 *)((long)puVar17 + 0x94) = 1;
  return;
}



/* ---- referenced strings ----
 * 0x11b908c  minecraft:behavior.stomp_attack
 * 0x11b909b  ior.stomp_attack
 * 0x12a49a1  minecraft:behavior.delayed_attack
 * 0x12a49b1  or.delayed_attack
 * 0x1390f8d  minecraft:behavior.melee_attack
 * 0x1390f9c  ior.melee_attack
 * 0x13c55d2  minecraft:behavior.use_kinetic_weapon
 * 0x13c55e2  or.use_kinetic_weapon
 * 0x141305b  minecraft:behavior.melee_box_attack
 * 0x141306b  or.melee_box_attack
 * 0x143b884  minecraft:pushable_by_entity
 * 0x143b890  shable_by_entity
 */
