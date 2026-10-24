# FUN_0b63cba0

- entry: `0xb63cba0`
- body size: 944 bytes
- callers: `FUN_0b63d230`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b63cba0(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  undefined1 uStack_41;
  ulong *puStack_40;
  undefined8 *puStack_38;
  
  FUN_0412d680(0xf6b4d60);
  if ((DAT_0f6b4d58 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b4d58), iVar5 != 0)) {
    _DAT_0f6b4d48 = (undefined8 *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = (undefined8 *)&DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  puStack_40 = param_1;
  lVar6 = func_0x0b5d53e0(&DAT_0f6b4d40,param_1,&UNK_01563a4f,&puStack_40,&uStack_41);
  lVar7 = *(long *)(lVar6 + 0x50);
  if (lVar7 != 0) {
    lVar14 = lVar6 + 0x50;
    do {
      bVar3 = func_0x04fa7a10(lVar7 + 0x20,param_2);
      if (bVar3 == 0) {
        lVar14 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
    } while (lVar7 != 0);
    if ((lVar14 != lVar6 + 0x50) && (cVar4 = func_0x04fa7a10(param_2,lVar14 + 0x20), cVar4 == '\0'))
    {
      func_0x0b6723c0(lVar6 + 0x48,lVar14);
    }
  }
  if ((DAT_0f6b4d58 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b4d58), iVar5 != 0)) {
    _DAT_0f6b4d48 = (undefined8 *)0x0;
    _DAT_0f6b4d50 = 0;
    _DAT_0f6b4d40 = (undefined8 *)&DAT_0f6b4d48;
    func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
    func_0x0410844d(&DAT_0f6b4d58);
  }
  puStack_40 = param_1;
  lVar7 = func_0x0b5d53e0(&DAT_0f6b4d40,param_1,&UNK_01563a4f,&puStack_40,&uStack_41);
  if (*(long *)(lVar7 + 0x58) == 0) {
    if ((DAT_0f6b4d58 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6b4d58), iVar5 != 0)) {
      _DAT_0f6b4d48 = (undefined8 *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = (undefined8 *)&DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    if (_DAT_0f6b4d48 != (undefined8 *)0x0) {
      bVar18 = ((byte)param_1[1] & 1) != 0;
      uVar17 = (long)param_1 + 9;
      if (bVar18) {
        uVar17 = param_1[3];
      }
      uVar15 = (ulong)(byte)((byte)param_1[1] >> 1);
      if (bVar18) {
        uVar15 = param_1[2];
      }
      uVar16 = *param_1;
      puVar12 = (undefined8 *)&DAT_0f6b4d48;
      puStack_38 = _DAT_0f6b4d48;
      puVar9 = _DAT_0f6b4d48;
      do {
        uVar11 = puVar9[4];
        bVar3 = (uVar11 >= uVar16 && uVar11 != uVar16) - (uVar11 < uVar16);
        if (uVar11 == uVar16) {
          if ((*(byte *)(puVar9 + 5) & 1) == 0) {
            uVar11 = (ulong)(*(byte *)(puVar9 + 5) >> 1);
            puVar13 = (undefined *)((long)puVar9 + 0x29);
          }
          else {
            uVar11 = puVar9[6];
            puVar13 = (undefined *)puVar9[7];
          }
          uVar10 = uVar11;
          if (uVar15 < uVar11) {
            uVar10 = uVar15;
          }
          iVar5 = func_0x0eee2ff0(puVar13,uVar17,uVar10);
          if (iVar5 == 0) {
            iVar5 = (int)(char)((uVar15 < uVar11) - (uVar11 < uVar15));
          }
          bVar3 = (0 < iVar5) - (iVar5 < 0);
        }
        puVar1 = puStack_38;
        if (-1 < (char)bVar3) {
          puVar12 = puVar9;
        }
        puVar9 = *(undefined8 **)((long)puVar9 + (ulong)(bVar3 >> 4 & 8));
      } while (puVar9 != (undefined8 *)0x0);
      if (puVar12 != (undefined8 *)&DAT_0f6b4d48) {
        if (uVar16 == puVar12[4]) {
          bVar18 = (*(byte *)(puVar12 + 5) & 1) != 0;
          puVar13 = (undefined *)((long)puVar12 + 0x29);
          if (bVar18) {
            puVar13 = (undefined *)puVar12[7];
          }
          uVar16 = (ulong)(*(byte *)(puVar12 + 5) >> 1);
          if (bVar18) {
            uVar16 = puVar12[6];
          }
          uVar11 = uVar15;
          if (uVar16 < uVar15) {
            uVar11 = uVar16;
          }
          iVar5 = func_0x0eee2ff0(uVar17,puVar13,uVar11);
          bVar18 = uVar15 < uVar16;
          if (iVar5 != 0) {
            bVar18 = iVar5 < 0;
          }
          if (bVar18) goto LAB_0b63cc8b;
        }
        else if (uVar16 < (ulong)puVar12[4]) goto LAB_0b63cc8b;
        puVar9 = puVar12;
        puVar2 = (undefined8 *)puVar12[1];
        if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar9[2];
            bVar18 = puVar9 != (undefined8 *)*puVar8;
            puVar9 = puVar8;
          } while (bVar18);
        }
        else {
          do {
            puVar8 = puVar2;
            puVar2 = (undefined8 *)*puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
        if (_DAT_0f6b4d40 == puVar12) {
          _DAT_0f6b4d40 = puVar8;
        }
        _DAT_0f6b4d50 = _DAT_0f6b4d50 + -1;
        func_0x05fb1340(puVar1,puVar12);
        func_0x0b5d5680(puVar12 + 9,puVar12[10]);
        if ((*(byte *)(puVar12 + 5) & 1) != 0) {
          func_0x0412a280(puVar12[7],puVar12[5] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar12,0x60);
      }
    }
  }
LAB_0b63cc8b:
  pthread_mutex_unlock(0xf6b4d60);
  return;
}


```
