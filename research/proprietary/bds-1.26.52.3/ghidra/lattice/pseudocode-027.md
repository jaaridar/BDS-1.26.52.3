# thunk_FUN_0eeb5980

- entry: `0xeeb5fa0`
- body size: 5 bytes
- callers: `FUN_0eeddcf0`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
thunk_FUN_0eeb5980(byte *param_1,undefined *param_2,undefined4 param_3,undefined *param_4,
                  byte *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  byte bStack_4e8;
  undefined1 uStack_4e7;
  undefined2 uStack_4e6;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 uStack_4d8;
  byte *pbStack_4d0;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  byte abStack_440 [1024];
  byte *pbStack_40;
  byte *pbStack_38;
  
  pbStack_38 = (byte *)0x0;
  abStack_440[0] = 0;
  pbStack_40 = param_1;
  pbVar6 = pbStack_38;
  if (param_1 == (byte *)0x0) goto LAB_0eeb5bbe;
  pbVar6 = param_1;
  if (*param_1 != 0xb) goto LAB_0eeb5bbe;
  if (DAT_0f7b9a48 == '\0') goto LAB_0eeb5e79;
  do {
    pbVar6 = pbStack_40 + 1;
    if (DAT_0f7b9a40 == '\x01') {
      bVar10 = *pbVar6;
      pbVar9 = abStack_440;
      if (bVar10 != 0) {
        pbVar9 = abStack_440;
        uVar3 = 0;
        do {
          if (bVar10 == 0x25) {
            pbVar11 = pbVar6 + 1;
            bVar7 = pbVar6[1];
            if (((ulong)bVar7 < 0x31) && ((0x1280900000000U >> ((ulong)bVar7 & 0x3f) & 1) != 0)) {
              pbVar11 = pbVar6 + 2;
              bVar7 = pbVar6[2];
            }
            if (bVar7 == 0x2a) {
              bVar7 = pbVar11[1];
              pbVar11 = pbVar11 + 1;
            }
            else {
              pbVar11 = pbVar11 + -1;
              do {
                bVar7 = pbVar11[1];
                pbVar11 = pbVar11 + 1;
              } while ((byte)(bVar7 - 0x30) < 10);
            }
            if (bVar7 == 0x2e) {
              if (pbVar11[1] == 0x2a) {
                bVar7 = pbVar11[2];
                pbVar11 = pbVar11 + 2;
              }
              else {
                do {
                  bVar7 = pbVar11[1];
                  pbVar11 = pbVar11 + 1;
                } while ((byte)(bVar7 - 0x30) < 10);
              }
            }
            uVar8 = (ulong)(bVar7 - 0x4c);
            pbVar12 = pbVar11;
            if (bVar7 - 0x4c < 0x2f) {
              if ((0x410040000001U >> (uVar8 & 0x3f) & 1) == 0) {
                if (uVar8 == 0x1c) {
                  bVar13 = pbVar11[1] == 0x68;
                }
                else {
                  if (uVar8 != 0x20) goto LAB_0eeb5b1d;
                  bVar13 = pbVar11[1] == 0x6c;
                }
                pbVar12 = pbVar11 + 1;
                if (bVar13) {
                  pbVar12 = pbVar11 + 2;
                }
              }
              else {
                pbVar12 = pbVar11 + 1;
              }
            }
LAB_0eeb5b1d:
            switch(*pbVar12) {
            case 0x25:
            case 0x41:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x58:
            case 0x61:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
            case 0x69:
            case 0x6e:
            case 0x6f:
            case 0x70:
            case 0x73:
            case 0x75:
            case 0x78:
              pbVar11 = pbVar12 + 1;
              if (pbVar11 == pbVar6) goto LAB_0eeb5b60;
              if (*pbVar12 == 0x25) {
                if (uVar3 < 0x3fe) {
                  pbVar9[0] = 0x25;
                  pbVar9[1] = 0x25;
                  uVar3 = uVar3 + 2;
                }
              }
              else {
                uVar3 = uVar3 + 1;
                *pbVar9 = 0x2a;
              }
              pbVar9 = abStack_440 + uVar3;
              bVar10 = *pbVar11;
              pbVar6 = pbVar11;
              break;
            default:
              goto LAB_0eeb5b60;
            }
          }
          else {
LAB_0eeb5b60:
            pbVar6 = pbVar6 + 1;
            *pbVar9 = bVar10;
            pbVar9 = abStack_440 + uVar3 + 1;
            bVar10 = *pbVar6;
            uVar3 = uVar3 + 1;
          }
        } while ((bVar10 != 0) && ((long)uVar3 < 0x3ff));
      }
      *pbVar9 = 0;
      pbVar6 = abStack_440;
    }
LAB_0eeb5bbe:
    pbStack_38 = pbVar6;
    func_0x0edfc080(&bStack_4e8,pbStack_38,param_6);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_4b8 = uStack_4d8;
    uStack_4c8 = CONCAT22(uStack_4e6,CONCAT11(uStack_4e7,bStack_4e8));
    uStack_4c4 = uStack_4e4;
    uStack_4c0 = uStack_4e0;
    uStack_4bc = uStack_4dc;
    bStack_4e8 = 0;
    uStack_4e7 = 0;
    if (param_1 == (byte *)0x0) {
      pbVar6 = &UNK_01254d89;
    }
    else {
      pbVar6 = pbStack_40 + (*pbStack_40 == 0xb);
    }
    func_0x04130630(&uStack_4b0,pbVar6);
    if (param_2 == (undefined *)0x0) {
      param_2 = &UNK_01254d89;
    }
    func_0x04130630(&uStack_498,param_2);
    if (param_4 == (undefined *)0x0) {
      param_4 = &UNK_01254d89;
    }
    uStack_480 = param_3;
    func_0x04130630(&uStack_478,param_4);
    param_1 = &UNK_01254d89;
    if (param_5 != (byte *)0x0) {
      param_1 = param_5;
    }
    func_0x04130630(&uStack_460,param_1);
    func_0x0eeb57d0();
    lVar4 = func_0x0eee1380(0xf7b9ab8);
    if (lVar4 != 0) {
      puVar5 = *(undefined8 **)(lVar4 + 0x10);
      goto joined_r0x0eeb5cab;
    }
    param_5 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (param_5 == (byte *)0x0) {
      FUN_0eec74c0(0x18,0);
    }
    *(byte **)param_5 = param_5;
    *(byte **)(param_5 + 8) = param_5;
    pbVar6 = param_5 + 0x10;
    param_5[0x10] = 0;
    param_5[0x11] = 0;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    param_5[0x16] = 0;
    param_5[0x17] = 0;
    pbStack_4d0 = pbVar6;
    if (_DAT_0f7b9a70 != (long *)0x0) {
      (**(code **)(*_DAT_0f7b9a70 + 0x30))(_DAT_0f7b9a70,&pbStack_4d0);
      func_0x0eee1580(0xf7b9ab8,param_5);
      func_0x0412d680(&DAT_0f7b9a90);
      *(byte **)(param_5 + 8) = _DAT_0f7b9a88;
      *(undefined **)param_5 = &DAT_0f7b9a80;
      *(byte **)_DAT_0f7b9a88 = param_5;
      _DAT_0f7b9a88 = param_5;
      func_0x0412d6b0(&DAT_0f7b9a90);
      puVar5 = *(undefined8 **)pbVar6;
joined_r0x0eeb5cab:
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = _DAT_0f7b9ac0;
      }
      uVar1 = (*(code *)*puVar5)(&uStack_4c8);
      if ((uStack_460 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_450,uStack_460 & 0xfffffffffffffffe);
      }
      if ((uStack_478 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_468,uStack_478 & 0xfffffffffffffffe);
      }
      if ((uStack_498 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_488,uStack_498 & 0xfffffffffffffffe);
      }
      if ((uStack_4b0 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
      }
      if ((uStack_4c8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4b8,CONCAT44(uStack_4c4,uStack_4c8) & 0xfffffffffffffffe);
      }
      if ((bStack_4e8 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_4d8,
                           CONCAT44(uStack_4e4,CONCAT22(uStack_4e6,CONCAT11(uStack_4e7,bStack_4e8)))
                           & 0xfffffffffffffffe);
      }
      return uVar1;
    }
    FUN_04891200();
LAB_0eeb5e79:
    iVar2 = func_0x04108328(&DAT_0f7b9a48);
    if (iVar2 != 0) {
      DAT_0f7b9a40 = '\x01';
      func_0x0410844d(&DAT_0f7b9a48);
    }
  } while( true );
}


```
