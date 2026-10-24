# FUN_0470de60

- entry: `0x470de60`
- body size: 164 bytes
- callers: `FUN_0470d9a0`

```c

undefined8
FUN_0470de60(short *param_1,short *param_2,long param_3,ulong param_4,ulong *param_5,
            undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  short *psStack_58;
  short *psStack_50;
  long lStack_48;
  ulong uStack_40;
  short *psStack_38;
  ulong uStack_30;
  ulong *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if ((param_3 != 2) || (*param_2 != 0x7d7b)) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    psStack_50 = param_2;
    lStack_48 = param_3;
    psStack_38 = param_1;
    uStack_30 = param_4;
    puStack_28 = param_5;
    uStack_20 = param_6;
    uVar3 = func_0x0eedb8d0(param_2,param_3,&psStack_50);
    return uVar3;
  }
  if ((long)param_4 < 0) {
    if ((int)(uint)param_4 < 1) goto LAB_0470e020;
    uVar4 = (uint)param_5[2];
  }
  else {
    uVar4 = (uint)param_4 & 0xf;
    if ((param_4 & 0xf) == 0) goto LAB_0470e020;
  }
  uVar1 = *param_5;
  pcVar2 = (code *)param_5[1];
  psStack_58 = param_1;
  switch(uVar4) {
  case 1:
    uVar3 = func_0x0eedd2f0();
    return uVar3;
  case 2:
    uVar3 = func_0x0470fa00(&psStack_58);
    return uVar3;
  case 3:
    uVar3 = func_0x0d5c1c70();
    return uVar3;
  case 4:
    uVar3 = func_0x0470faf0(&psStack_58);
    return uVar3;
  case 5:
    uVar3 = func_0x0eedd470(param_1,uVar1,pcVar2);
    return uVar3;
  case 6:
    uVar3 = func_0x0eedd910(param_1,uVar1,pcVar2);
    return uVar3;
  case 7:
    uVar3 = func_0x0470fbf0(&psStack_58,(uint)uVar1 & 1);
    return uVar3;
  case 8:
    uVar3 = func_0x0470fc60(&psStack_58,(int)(char)uVar1);
    return uVar3;
  case 9:
    uVar3 = func_0x0470fcc0(uVar1 & 0xffffffff,&psStack_58);
    return uVar3;
  case 10:
    uVar3 = func_0x0470fd80(uVar1,&psStack_58);
    return uVar3;
  case 0xb:
    uVar3 = func_0x05aa3210(param_1,0x2000008000,0xffffffff00000000,0,param_5,param_6,uVar1,
                            (short)pcVar2);
    return uVar3;
  case 0xc:
    uVar3 = func_0x0470fe50(&psStack_58);
    return uVar3;
  case 0xd:
    uVar3 = func_0x05a978c0(uVar1,pcVar2 + uVar1,param_1);
    return uVar3;
  case 0xe:
    uVar3 = func_0x0470fe90(&psStack_58);
    return uVar3;
  case 0xf:
    uStack_18 = 0;
    uStack_10 = 0;
    uStack_8 = 0;
    lStack_48 = 0;
    uStack_40 = 0;
    psStack_38 = (short *)0x0;
    psStack_50 = param_1;
    uVar3 = (*pcVar2)(uVar1,&uStack_18,&psStack_50);
    return uVar3;
  }
LAB_0470e020:
  func_0x0470d660(&UNK_0123b496);
  return 0;
}


```
