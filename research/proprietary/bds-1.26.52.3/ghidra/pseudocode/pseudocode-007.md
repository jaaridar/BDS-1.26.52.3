# Decompiled bodies, part 7

> Mechanically generated pseudocode from the proprietary BDS binary.
> Not original source; not MIT-licensed OpenBDS code.

## `eedeb80`

- instructions: 326
- calls: 4108328, 410844d, 412a280, 470d9a0, 4882e20, 489d2c0, 4931450, eede540, eede920, eedee20, eee2f40

```c

/* WARNING: Possible PIC construction at 0x0eededa5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0eededaa) */
/* WARNING: Removing unreachable block (ram,0x0eededb0) */
/* WARNING: Removing unreachable block (ram,0x0eededc2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eedeb80(ulong param_1,uint param_2,undefined8 ****param_3,undefined8 ****param_4,
                 undefined8 ****param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  byte *pbVar9;
  byte *extraout_RDX;
  byte *pbVar10;
  undefined8 *puVar11;
  ushort uVar12;
  ulong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 **ppuVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined8 *****pppppuVar18;
  bool bVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  uint uStack_7c;
  undefined1 uStack_78;
  byte bStack_70;
  undefined8 ***pppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  ulong uStack_38;
  
  pbVar10 = (byte *)&uStack_b8;
  puVar11 = &uStack_b8;
  uVar6 = (ulong)param_2;
  pppppuVar18 = &ppppuStack_58;
  uStack_c0 = 0xeedebaf;
  ppppuVar8 = param_4;
  ppppuVar14 = param_3;
  func_0x0eede540(pppppuVar18);
  uStack_b8 = param_4;
  uStack_b0 = pppppuVar18;
  pppuStack_a8 = param_5;
  uStack_38 = param_1;
  if (param_1 >> 0x20 == 0xffffffff) {
    uStack_c0 = 0xeededd9;
    param_2 = (uint)ppppuVar14;
    uVar6 = FUN_04931450();
    if ((bStack_70 == 1) && (((ulong)ppuStack_98 & 1) != 0)) {
      param_2 = (uint)ppuStack_98 & 0xfffffffe;
      uStack_c0 = 0xeededfd;
      FUN_0412a280(ppuStack_88);
      uStack_c0 = 0xeedee05;
      uVar7 = FUN_04882e20(uVar6);
      uStack_c0 = 0xeedee0d;
      uVar6 = FUN_04882e20(uVar7);
    }
    uStack_c0 = 0xeedee18;
    uVar2 = FUN_04882e20(uVar6);
    uStack_c0 = 0xeedee20;
    FUN_04882e20();
    uVar13 = 0xffffffff;
    pbVar10 = extraout_RDX;
    goto SUB_0eedee20;
  }
  uStack_c0 = 0xeedebf9;
  pppuStack_60 = (undefined8 ***)&uStack_b8;
  uVar2 = (**(code **)(&UNK_0f53c578 + (param_1 >> 0x20) * 8))(&pppuStack_60,&uStack_38);
  uVar13 = (ulong)uVar2;
  if (((ulong)ppppuStack_58 & 1) != 0) {
    uStack_c0 = 0xeedec15;
    FUN_0412a280(uStack_48,(ulong)ppppuStack_58 & 0xfffffffffffffffe);
  }
  pppuVar5 = param_4[1];
  pppuVar4 = (undefined8 ***)(ulong)(*(byte *)param_4 >> 1);
  if ((*(byte *)param_4 & 1) != 0) {
    pppuVar4 = pppuVar5;
  }
  if (pppuVar4 == (undefined8 ***)0x0) {
    uStack_b8 = (undefined8 ****)*param_5;
    uStack_b0 = (undefined8 *****)param_5[1];
    pppuStack_a8 = param_5[2];
    uStack_a0 = *(undefined4 *)(param_5 + 3);
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    bStack_70 = 0;
    bVar19 = false;
    pppuVar4 = param_3[3];
    if (param_3[4] <= pppuVar4) goto LAB_0eeded34;
LAB_0eedec9d:
    pppuVar4[2] = pppuStack_a8;
    pppuVar4[3] = (undefined8 **)CONCAT44(uStack_9c,uStack_a0);
    *(undefined4 *)pppuVar4 = (undefined4)uStack_b8;
    *(undefined4 *)((long)pppuVar4 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(pppuVar4 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((long)pppuVar4 + 0xc) = uStack_b0._4_4_;
    *(undefined1 *)(pppuVar4 + 4) = 0;
    *(undefined1 *)(pppuVar4 + 9) = 0;
    if (bVar19) {
      pppuVar4[6] = ppuStack_88;
      pppuVar4[4] = ppuStack_98;
      pppuVar4[5] = ppuStack_90;
      ppuStack_98 = (undefined8 ***)0x0;
      ppuStack_90 = (undefined8 ***)0x0;
      ppuStack_88 = (undefined8 ***)0x0;
      *(undefined1 *)(pppuVar4 + 8) = uStack_78;
      pppuVar4[7] = (undefined8 **)
                    CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)));
      *(undefined1 *)(pppuVar4 + 9) = 1;
    }
    param_3[3] = pppuVar4 + 10;
    if (bVar19) {
LAB_0eeded4d:
      if (((ulong)ppuStack_98 & 1) != 0) {
        uStack_c0 = 0xeeded67;
        FUN_0412a280(ppuStack_88,(ulong)ppuStack_98 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    ppuStack_98 = *param_4;
    ppuStack_88 = param_4[2];
    *param_4 = (undefined8 ***)0x0;
    param_4[1] = (undefined8 ***)0x0;
    param_4[2] = (undefined8 ***)0x0;
    uStack_b8 = (undefined8 ****)*param_5;
    uStack_b0 = (undefined8 *****)param_5[1];
    pppuStack_a8 = param_5[2];
    uStack_a0 = *(undefined4 *)(param_5 + 3);
    uStack_9c = *(undefined4 *)((long)param_5 + 0x1c);
    uStack_80 = (undefined2)uVar2;
    uStack_7e = 1;
    uStack_78 = 1;
    bStack_70 = 1;
    bVar19 = true;
    pppuVar4 = param_3[3];
    ppuStack_90 = pppuVar5;
    uStack_7c = param_2;
    if (pppuVar4 < param_3[4]) goto LAB_0eedec9d;
LAB_0eeded34:
    uStack_c0 = 0xeeded3f;
    pppuVar5 = (undefined8 ***)FUN_0489d2c0(param_3 + 2,&uStack_b8);
    param_3[3] = pppuVar5;
    if ((bStack_70 & 1) != 0) goto LAB_0eeded4d;
  }
  ppppuVar8 = param_3 + 2;
  puStack_50 = &UNK_0eee2430;
  uStack_c0 = 0xeeded9b;
  pppuStack_60 = param_3;
  ppppuStack_58 = &pppuStack_60;
  FUN_0470d9a0(&uStack_b8,&UNK_012063a8,2,0xf,&ppppuStack_58);
  puVar11 = &uStack_c0;
  uStack_c0 = 0xeededaa;
  param_5 = ppppuVar8;
  pppppuVar18 = (undefined8 *****)&pppuStack_60;
SUB_0eedee20:
  *(ulong *)((long)puVar11 + -8) = uVar13;
  *(undefined8 ******)((long)puVar11 + -0x10) = pppppuVar18;
  *(undefined8 *****)((long)puVar11 + -0x18) = param_3;
  *(undefined8 *****)((long)puVar11 + -0x20) = param_4;
  *(undefined8 *****)((long)puVar11 + -0x28) = param_5;
  *(ulong *)((long)puVar11 + -0x30) = uVar6;
  *(uint *)((long)puVar11 + -0x74) = param_2;
  *(uint *)((long)puVar11 + -0x78) = uVar2;
  pppuVar5 = *ppppuVar8;
  pppuVar4 = ppppuVar8[1];
  do {
    if (pppuVar5 == pppuVar4) {
      bVar19 = (*pbVar10 & 1) != 0;
      pbVar9 = pbVar10 + 1;
      if (bVar19) {
        pbVar9 = *(byte **)(pbVar10 + 0x10);
      }
      uVar6 = (ulong)(*pbVar10 >> 1);
      if (bVar19) {
        uVar6 = *(ulong *)(pbVar10 + 8);
      }
      *(byte **)((long)puVar11 + -0x58) = pbVar9;
      *(ulong *)((long)puVar11 + -0x50) = uVar6;
      *(undefined8 *****)((long)puVar11 + -0x48) = ppppuVar8;
      *(undefined **)((long)puVar11 + -0x40) = &UNK_0eee2580;
      *(undefined8 *)((long)puVar11 + -0x90) = 0xeedefad;
      FUN_0470d9a0((undefined1 *)((long)puVar11 + -0x70),&UNK_013731d8,0x17,0xfd,
                   (undefined1 *)((long)puVar11 + -0x58));
      uVar17 = *(undefined4 *)((long)puVar11 + -0x74);
      uVar2 = *(uint *)((long)puVar11 + -0x78);
      if (DAT_0f7ba110 == '\0') {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf067;
        iVar3 = FUN_04108328(&DAT_0f7ba110);
        if (iVar3 != 0) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf093;
          __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf09f;
          FUN_0410844d(&DAT_0f7ba110);
        }
      }
      if (_DAT_0f7ba0d0 != 0) {
        *(short *)((long)puVar11 + -0x7a) = (short)uVar2;
        *(undefined4 *)((long)puVar11 + -0x58) = uVar17;
        pcVar1 = *(code **)(_DAT_0f7ba0d0 + 0x10);
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedeff2;
        (*pcVar1)(&DAT_0f7ba0d0,(undefined1 *)((long)puVar11 + -0x7a),
                  (undefined1 *)((long)puVar11 + -0x58),(undefined1 *)((long)puVar11 + -0x70));
      }
      if ((uVar2 & 0x100) != 0) {
        if ((*(byte *)((long)puVar11 + -0x70) & 1) == 0) {
          puVar16 = (undefined1 *)((long)puVar11 + -0x6f);
        }
        else {
          puVar16 = *(undefined1 **)((long)puVar11 + -0x60);
        }
        *(undefined1 **)((long)puVar11 + -0x90) = puVar16;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x5e;
        *(undefined8 *)((long)puVar11 + -0xa0) = 0xeedf02e;
        func_0x0eede920(0,1,0,uVar17,uVar2 & 0xff,&UNK_013c1f41);
      }
      if ((*(byte *)((long)puVar11 + -0x70) & 1) != 0) {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedf04c;
        FUN_0412a280(*(undefined8 *)((long)puVar11 + -0x60),
                     *(ulong *)((long)puVar11 + -0x70) & 0xfffffffffffffffe);
      }
      return;
    }
    if (*(char *)(pppuVar5 + 9) == '\x01') {
      if (*(char *)((long)pppuVar5 + 0x3a) == '\0') {
        if (((ulong)pppuVar5[8] & 1) == 0) goto LAB_0eedee70;
        uVar17 = *(undefined4 *)((long)pppuVar5 + 0x3c);
        uVar12 = 2;
      }
      else {
        uVar17 = 0x2d;
        if (((ulong)pppuVar5[8] & 1) != 0) {
          uVar17 = *(undefined4 *)((long)pppuVar5 + 0x3c);
        }
        uVar12 = *(ushort *)(pppuVar5 + 7);
      }
      if (DAT_0f7ba110 == '\0') {
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef21;
        iVar3 = FUN_04108328(&DAT_0f7ba110);
        if (iVar3 != 0) {
          _DAT_0f7ba0d0 = 0;
          uRam000000000f7ba0d8 = 0;
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef49;
          __cxa_atexit(&UNK_0eedf0c0,&DAT_0f7ba0d0,0xf53dab8);
          *(undefined8 *)((long)puVar11 + -0x90) = 0xeedef55;
          FUN_0410844d(&DAT_0f7ba110);
        }
      }
      if (_DAT_0f7ba0d0 != 0) {
        *(ushort *)((long)puVar11 + -0x70) = uVar12;
        *(undefined4 *)((long)puVar11 + -0x58) = uVar17;
        pcVar1 = *(code **)(_DAT_0f7ba0d0 + 0x10);
        *(undefined8 *)((long)puVar11 + -0x90) = 0xeedeef5;
        (*pcVar1)(&DAT_0f7ba0d0,(undefined1 *)((long)puVar11 + -0x70),
                  (undefined1 *)((long)puVar11 + -0x58),pppuVar5 + 4);
      }
      if ((uVar12 & 0x100) != 0) {
        if (((ulong)pppuVar5[4] & 1) == 0) {
          ppuVar15 = (undefined8 **)((long)pppuVar5 + 0x21);
        }
        else {
          ppuVar15 = pppuVar5[6];
        }
        *(undefined8 ***)((long)puVar11 + -0x90) = ppuVar15;
        *(undefined8 *)((long)puVar11 + -0x98) = 0x5e;
        *(undefined8 *)((long)puVar11 + -0xa0) = 0xeedee6b;
        func_0x0eede920(0,1,0,uVar17,(char)uVar12,&UNK_013c1f41);
      }
    }
LAB_0eedee70:
    pppuVar5 = pppuVar5 + 10;
  } while( true );
}


```

## `eee02f0`

- instructions: 30
- calls: 412d450, 412d520, 412d680, 412d6b0

```c

void FUN_0eee02f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  LOCK();
  plVar1 = (long *)(param_1 + 0xd0);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == -0x7fffffffffffffff) {
    FUN_0412d450();
    LOCK();
    *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0x7fffffffffffffff;
    UNLOCK();
    FUN_0412d520(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    FUN_0412d680(uVar3);
    FUN_0412d6b0(uVar3);
    (*(code *)PTR_pthread_cond_broadcast_0f546458)(param_1 + 0x90);
    return;
  }
  return;
}


```

## `eee0720` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot6

- instructions: 40
- calls: eeddcf0, eee2fc0

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  lVar2 = param_1[2];
  lVar4 = pthread_self();
  if (lVar2 == lVar4) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = *param_1;
      return;
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 1) = iVar1 + -1;
      return;
    }
  }
  cVar3 = ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v6
                    (&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar3 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


```

## `eee11d0`

- instructions: 90
- calls: 4108328, 410844d, 412d680, eec74c0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee11d0(uint *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (DAT_0f7ba228 == '\0') {
    iVar6 = FUN_04108328(&DAT_0f7ba228);
    if (iVar6 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar8 + 0x10;
      _DAT_0f7ba1f8 = puVar8;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      _DAT_0f7ba210 = (long *)0x0;
      _DAT_0f7ba218 = (long *)0x0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  uVar2 = *param_1;
  FUN_0412d680(&DAT_0f7ba1d0);
  bVar4 = (byte)uVar2 & 0x3f;
  puVar1 = (ulong *)((long)_DAT_0f7ba1f8 +
                    (ulong)(uVar2 >> 3 & 0x78) + (ulong)(uVar2 >> 3 & 0x1fffff80));
  *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
  plVar5 = _DAT_0f7ba218;
  for (plVar7 = _DAT_0f7ba210; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    lVar3 = *(long *)(*plVar7 + 8);
    if ((ulong)uVar2 < (ulong)(*(long *)(*plVar7 + 0x10) - lVar3 >> 3)) {
      *(undefined8 *)(lVar3 + (ulong)uVar2 * 8) = 0;
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(&DAT_0f7ba1d0);
  return;
}


```

## `eee1380`

- instructions: 61
- calls: 4108328, 410844d, eec74c0, eee14b0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0eee1380(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_0f7ba228 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f7ba228);
    if (iVar1 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar2 + 0x10;
      _DAT_0f7ba1f8 = puVar2;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      _DAT_0f7ba210 = 0;
      _DAT_0f7ba218 = 0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  puVar2 = (undefined8 *)func_0x0eee14b0(*param_1);
  return *puVar2;
}


```

## `eee1580`

- instructions: 62
- calls: 4108328, 410844d, eec74c0, eee14b0, eee2f40

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee1580(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_0f7ba228 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f7ba228);
    if (iVar1 != 0) {
      _DAT_0f7ba200 = (undefined8 *)0x0;
      _DAT_0f7ba208 = (undefined8 *)0x0;
      _DAT_0f7ba1f0 = 0;
      _DAT_0f7ba1f8 = (undefined8 *)0x0;
      _DAT_0f7ba1e0 = 0;
      uRam000000000f7ba1e8 = 0;
      _DAT_0f7ba1d0 = 0;
      uRam000000000f7ba1d8 = 0;
      puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      _DAT_0f7ba200 = puVar2 + 0x10;
      _DAT_0f7ba1f8 = puVar2;
      _DAT_0f7ba208 = _DAT_0f7ba200;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      _DAT_0f7ba210 = 0;
      _DAT_0f7ba218 = 0;
      _DAT_0f7ba220 = 0;
      _DAT_0f7ba230 = &DAT_0f7ba1d0;
      __cxa_atexit(&UNK_0eee1c80,&DAT_0f7ba1d0,0xf53dab8);
      FUN_0410844d(&DAT_0f7ba228);
    }
  }
  puVar2 = (undefined8 *)func_0x0eee14b0(*param_1);
  *puVar2 = param_2;
  return;
}


```

## `eee2d70`

- instructions: 1

```c

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_0f546450)();
  return;
}


```

## `eee2dd0`

- instructions: 1

```c

void memset(void)

{
  (*(code *)PTR_memset_0f546480)();
  return;
}


```

## `eee2e90`

- instructions: 1

```c

void strlen(void)

{
  (*(code *)PTR_strlen_0f5464e0)();
  return;
}


```

## `eee2ee0` — ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot14

- instructions: 1

```c

void ScriptDebuggerMessages_NetworkPayload_S_CommandMessage_v14(void)

{
  (*(code *)PTR_memmove_0f546508)();
  return;
}


```

## `eee2ef0`

- instructions: 1

```c

void memchr(void)

{
  (*(code *)PTR_memchr_0f546510)();
  return;
}


```

## `eee2f00`

- instructions: 1

```c

void memcpy(void)

{
  (*(code *)PTR_memcpy_0f546518)();
  return;
}


```

## `eee2f40`

- instructions: 1

```c

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0f546538)();
  return;
}


```

## `eee2fc0`

- instructions: 1

```c

void pthread_self(void)

{
  (*(code *)PTR_pthread_self_0f546578)();
  return;
}


```

## `eee2ff0`

- instructions: 1

```c

void memcmp(void)

{
  (*(code *)PTR_memcmp_0f546590)();
  return;
}


```

## `eee3000`

- instructions: 1

```c

void bcmp(void)

{
  (*(code *)PTR_bcmp_0f546598)();
  return;
}


```

## `eee3290`

- instructions: 1

```c

void __ctype_tolower_loc(void)

{
  (*(code *)PTR___ctype_tolower_loc_0f5466e0)();
  return;
}


```

## `eee35d0`

- instructions: 1

```c

void sched_yield(void)

{
  (*(code *)PTR_sched_yield_0f546880)();
  return;
}


```

## `eee37c0`

- instructions: 1

```c

void log(void)

{
  (*(code *)PTR_log_0f546978)();
  return;
}


```

## `eee3800`

- instructions: 1

```c

void sqrt(void)

{
  (*(code *)PTR_sqrt_0f546998)();
  return;
}


```

## `eee3810`

- instructions: 1

```c

void cosf(void)

{
  (*(code *)PTR_cosf_0f5469a0)();
  return;
}


```

## `eee3820`

- instructions: 1

```c

void _ZTHN11ChunkSource17gPerfIsClientSideE(void)

{
  (*(code *)PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f5469a8)();
  return;
}


```

## `eee3ab0`

- instructions: 1

```c

void ceilf(void)

{
  (*(code *)PTR_ceilf_0f546af0)();
  return;
}


```

## `eee3b20`

- instructions: 1

```c

void roundf(void)

{
  (*(code *)PTR_roundf_0f546b28)();
  return;
}


```

## `eee4390`

- instructions: 1

```c

void floorf(void)

{
  (*(code *)PTR_floorf_0f546f60)();
  return;
}


```

## `eee43a0`

- instructions: 1

```c

void nearbyintf(void)

{
  (*(code *)PTR_nearbyintf_0f546f68)();
  return;
}


```

