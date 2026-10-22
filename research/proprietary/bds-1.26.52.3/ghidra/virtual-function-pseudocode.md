# Recovered world-generation virtual functions

> Mechanically generated pseudocode from the proprietary BDS binary. This is not original source and is not MIT-licensed OpenBDS code. Slot ownership is inferred only from Itanium RTTI/vtable layout.

Binary SHA-256 is recorded by the adjacent inventory report. Analysis intentionally skipped whole-program auto-analysis; unresolved types, calls, and function boundaries remain limitations.

## `0ca70460` — WorldGenerator slot 0

- Ghidra name: `FUN_0ca70460`
- Body: `[[0412c2d0, 0412c2f1] [0ca70460, 0ca7051c] [0cb3ae10, 0cb3af61]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0ca70460(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


```

### Assembly

```asm
0412c2d0  MOV RAX,qword ptr [RDI + 0x10]
0412c2d4  TEST RAX,RAX
0412c2d7  JZ 0x0412c2ec
0412c2d9  MOV RAX,-0x1
0412c2e0  XADD.LOCK qword ptr [RDI + 0x10],RAX
0412c2e6  TEST RAX,RAX
0412c2e9  JZ 0x0412c2ec
0412c2eb  RET
0412c2ec  MOV RAX,qword ptr [RDI]
0412c2ef  JMP qword ptr [RAX + 0x20]
0ca70460  PUSH R14
0ca70462  PUSH RBX
0ca70463  PUSH RAX
0ca70464  MOV RBX,RDI
0ca70467  LEA RAX,[0xf3ed048]
0ca7046e  MOV qword ptr [RDI],RAX
0ca70471  LEA RAX,[0xf3ed220]
0ca70478  MOV qword ptr [RDI + 0x70],RAX
0ca7047c  ADD RDI,0x108
0ca70483  CALL 0x0eee11d0
0ca70488  MOV RDI,qword ptr [RBX + 0xf0]
0ca7048f  TEST RDI,RDI
0ca70492  JZ 0x0ca704b5
0ca70494  NOP word ptr CS:[RAX + RAX*0x1]
0ca704a0  MOV R14,qword ptr [RDI]
0ca704a3  MOV ESI,0x18
0ca704a8  CALL 0x0412a280
0ca704ad  MOV RDI,R14
0ca704b0  TEST R14,R14
0ca704b3  JNZ 0x0ca704a0
0ca704b5  MOV RDI,qword ptr [RBX + 0xe0]
0ca704bc  MOV qword ptr [RBX + 0xe0],0x0
0ca704c7  TEST RDI,RDI
0ca704ca  JZ 0x0ca704dc
0ca704cc  MOV RSI,qword ptr [RBX + 0xe8]
0ca704d3  SHL RSI,0x3
0ca704d7  CALL 0x0412a280
0ca704dc  LEA RDI,[RBX + 0xa8]
0ca704e3  CALL 0x04136a00
0ca704e8  MOV R14,qword ptr [RBX + 0x78]
0ca704ec  MOV qword ptr [RBX + 0x78],0x0
0ca704f4  TEST R14,R14
0ca704f7  JZ 0x0ca7050e
0ca704f9  MOV RDI,R14
0ca704fc  CALL 0x0d352b40
0ca70501  MOV ESI,0x1c8
0ca70506  MOV RDI,R14
0ca70509  CALL 0x0412a280
0ca7050e  MOV RDI,RBX
0ca70511  ADD RSP,0x8
0ca70515  POP RBX
0ca70516  POP R14
0ca70518  JMP 0x0cb3ae10
0cb3ae10  PUSH R14
0cb3ae12  PUSH RBX
0cb3ae13  SUB RSP,0x18
0cb3ae17  MOV RBX,RDI
0cb3ae1a  LEA RAX,[0xf3f0e90]
0cb3ae21  MOV qword ptr [RDI],RAX
0cb3ae24  MOV RDI,qword ptr [RDI + 0x68]
0cb3ae28  TEST RDI,RDI
0cb3ae2b  JZ 0x0cb3ae88
0cb3ae2d  CALL 0x0412c300
0cb3ae32  MOV qword ptr [RSP + 0x10],RAX
0cb3ae37  TEST RAX,RAX
0cb3ae3a  JZ 0x0cb3ae7a
0cb3ae3c  MOV R14,RAX
0cb3ae3f  MOV RSI,qword ptr [RBX + 0x60]
0cb3ae43  MOV qword ptr [RSP + 0x8],RSI
0cb3ae48  TEST RSI,RSI
0cb3ae4b  JZ 0x0cb3ae57
0cb3ae4d  MOV RDI,qword ptr [RSI + 0x28]
0cb3ae51  MOV RAX,qword ptr [RDI]
0cb3ae54  CALL qword ptr [RAX + 0x10]
0cb3ae57  MOV RAX,-0x1
0cb3ae5e  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3ae64  TEST RAX,RAX
0cb3ae67  JNZ 0x0cb3ae7a
0cb3ae69  MOV RAX,qword ptr [R14]
0cb3ae6c  MOV RDI,R14
0cb3ae6f  CALL qword ptr [RAX + 0x10]
0cb3ae72  MOV RDI,R14
0cb3ae75  CALL 0x0412c2d0
0cb3ae7a  MOV RDI,qword ptr [RBX + 0x68]
0cb3ae7e  TEST RDI,RDI
0cb3ae81  JZ 0x0cb3ae88
0cb3ae83  CALL 0x0412c2d0
0cb3ae88  MOV RDI,qword ptr [RBX + 0x58]
0cb3ae8c  TEST RDI,RDI
0cb3ae8f  JZ 0x0cb3aeec
0cb3ae91  CALL 0x0412c300
0cb3ae96  MOV qword ptr [RSP + 0x10],RAX
0cb3ae9b  TEST RAX,RAX
0cb3ae9e  JZ 0x0cb3aede
0cb3aea0  MOV R14,RAX
0cb3aea3  MOV RSI,qword ptr [RBX + 0x50]
0cb3aea7  MOV qword ptr [RSP + 0x8],RSI
0cb3aeac  TEST RSI,RSI
0cb3aeaf  JZ 0x0cb3aebb
0cb3aeb1  MOV RDI,qword ptr [RSI + 0x28]
0cb3aeb5  MOV RAX,qword ptr [RDI]
0cb3aeb8  CALL qword ptr [RAX + 0x10]
0cb3aebb  MOV RAX,-0x1
0cb3aec2  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3aec8  TEST RAX,RAX
0cb3aecb  JNZ 0x0cb3aede
0cb3aecd  MOV RAX,qword ptr [R14]
0cb3aed0  MOV RDI,R14
0cb3aed3  CALL qword ptr [RAX + 0x10]
0cb3aed6  MOV RDI,R14
0cb3aed9  CALL 0x0412c2d0
0cb3aede  MOV RDI,qword ptr [RBX + 0x58]
0cb3aee2  TEST RDI,RDI
0cb3aee5  JZ 0x0cb3aeec
0cb3aee7  CALL 0x0412c2d0
0cb3aeec  MOV RDI,qword ptr [RBX + 0x38]
0cb3aef0  MOV qword ptr [RBX + 0x38],0x0
0cb3aef8  TEST RDI,RDI
0cb3aefb  JZ 0x0cb3af03
0cb3aefd  MOV RAX,qword ptr [RDI]
0cb3af00  CALL qword ptr [RAX + 0x8]
0cb3af03  LEA RAX,[0xf534768]
0cb3af0a  MOV qword ptr [RBX],RAX
0cb3af0d  MOV R14,qword ptr [RBX + 0x10]
0cb3af11  TEST R14,R14
0cb3af14  JZ 0x0cb3af3b
0cb3af16  MOV RAX,qword ptr [R14 + 0x8]
0cb3af1a  MOV RAX,qword ptr [RBX + 0x8]
0cb3af1e  MOV byte ptr [RAX],0x0
0cb3af21  MOV RAX,-0x1
0cb3af28  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3af2e  TEST RAX,RAX
0cb3af31  JZ 0x0cb3af4a
0cb3af33  ADD RSP,0x18
0cb3af37  POP RBX
0cb3af38  POP R14
0cb3af3a  RET
0cb3af3b  MOV RAX,qword ptr [RBX + 0x8]
0cb3af3f  MOV byte ptr [RAX],0x0
0cb3af42  ADD RSP,0x18
0cb3af46  POP RBX
0cb3af47  POP R14
0cb3af49  RET
0cb3af4a  MOV RAX,qword ptr [R14]
0cb3af4d  MOV RDI,R14
0cb3af50  CALL qword ptr [RAX + 0x10]
0cb3af53  MOV RDI,R14
0cb3af56  ADD RSP,0x18
0cb3af5a  POP RBX
0cb3af5b  POP R14
0cb3af5d  JMP 0x0412c2d0
```

## `0ca70bb0` — WorldGenerator slot 1

- Ghidra name: `FUN_0ca70bb0`
- Body: `[[0ca70bb0, 0ca70bb1]]`

### Pseudocode

```c

void FUN_0ca70bb0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

### Assembly

```asm
0ca70bb0  UD2
```

## `0cb31380` — WorldGenerator slot 2

- Ghidra name: `FUN_0cb31380`
- Body: `[[0cb31380, 0cb3138f]]`

### Pseudocode

```c

void FUN_0cb31380(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb31380  MOV RDI,qword ptr [RDI + 0x30]
0cb31384  TEST RDI,RDI
0cb31387  JZ 0x0cb3138f
0cb31389  MOV RAX,qword ptr [RDI]
0cb3138c  JMP qword ptr [RAX + 0x10]
0cb3138f  RET
```

## `0cb31390` — WorldGenerator slot 3

- Ghidra name: `FUN_0cb31390`
- Body: `[[0cb31390, 0cb313a1]]`

### Pseudocode

```c

undefined8 FUN_0cb31390(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    return uVar1;
  }
  return 1;
}


```

### Assembly

```asm
0cb31390  MOV RDI,qword ptr [RDI + 0x30]
0cb31394  TEST RDI,RDI
0cb31397  JZ 0x0cb3139f
0cb31399  MOV RAX,qword ptr [RDI]
0cb3139c  JMP qword ptr [RAX + 0x18]
0cb3139f  MOV AL,0x1
0cb313a1  RET
```

## `0cb313b0` — WorldGenerator slot 4

- Ghidra name: `FUN_0cb313b0`
- Body: `[[0cb313b0, 0cb313b9]]`

### Pseudocode

```c

undefined8 * FUN_0cb313b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


```

### Assembly

```asm
0cb313b0  MOV RAX,RDI
0cb313b3  XORPS XMM0,XMM0
0cb313b6  MOVUPS xmmword ptr [RDI],XMM0
0cb313b9  RET
```

## `0cb313c0` — WorldGenerator slot 5

- Ghidra name: `FUN_0cb313c0`
- Body: `[[0cb313c0, 0cb313c9]]`

### Pseudocode

```c

undefined8 * FUN_0cb313c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


```

### Assembly

```asm
0cb313c0  MOV RAX,RDI
0cb313c3  XORPS XMM0,XMM0
0cb313c6  MOVUPS xmmword ptr [RDI],XMM0
0cb313c9  RET
```

## `0cb313d0` — WorldGenerator slot 6

- Ghidra name: `FUN_0cb313d0`
- Body: `[[0cb313d0, 0cb313e4]]`

### Pseudocode

```c

undefined8 FUN_0cb313d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb313e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
    return uVar1;
  }
  return 0;
}


```

### Assembly

```asm
0cb313d0  MOV RDI,qword ptr [RDI + 0x30]
0cb313d4  TEST RDI,RDI
0cb313d7  JZ 0x0cb313e2
0cb313d9  MOV RAX,qword ptr [RDI]
0cb313dc  MOV RAX,qword ptr [RAX + 0x30]
0cb313e0  JMP RAX
0cb313e2  XOR EAX,EAX
0cb313e4  RET
```

## `0cb313f0` — WorldGenerator slot 7

- Ghidra name: `FUN_0cb313f0`
- Body: `[[0cb313f0, 0cb31404]]`

### Pseudocode

```c

undefined8 FUN_0cb313f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb31400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
    return uVar1;
  }
  return 0;
}


```

### Assembly

```asm
0cb313f0  MOV RDI,qword ptr [RDI + 0x30]
0cb313f4  TEST RDI,RDI
0cb313f7  JZ 0x0cb31402
0cb313f9  MOV RAX,qword ptr [RDI]
0cb313fc  MOV RAX,qword ptr [RAX + 0x38]
0cb31400  JMP RAX
0cb31402  XOR EAX,EAX
0cb31404  RET
```

## `0cb31410` — WorldGenerator slot 8

- Ghidra name: `FUN_0cb31410`
- Body: `[[0cb31410, 0cb314c1]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cb31410(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                   undefined1 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lStack_20;
  
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 == (long *)0x0) {
    if ((int)param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar2 = (undefined8 *)0x0;
      func_0x0cad8990(&lStack_20,*(undefined8 *)(param_2 + 0x28),*param_3,param_5,0,0);
      *param_1 = lStack_20;
      if (lStack_20 != 0) {
        puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar2 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &UNK_0f1f9808;
        puVar2[3] = lStack_20;
      }
      param_1[1] = (long)puVar2;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x40))(param_1,plVar1,param_3,param_4,param_5);
  }
  return param_1;
}


```

### Assembly

```asm
0cb31410  PUSH R15
0cb31412  PUSH R14
0cb31414  PUSH RBX
0cb31415  SUB RSP,0x10
0cb31419  MOV RBX,RDI
0cb3141c  MOV RAX,qword ptr [RSI + 0x30]
0cb31420  TEST RAX,RAX
0cb31423  JZ 0x0cb31438
0cb31425  MOV R9,qword ptr [RAX]
0cb31428  MOVZX R8D,R8B
0cb3142c  MOV RDI,RBX
0cb3142f  MOV RSI,RAX
0cb31432  CALL qword ptr [R9 + 0x40]
0cb31436  JMP 0x0cb314a7
0cb31438  TEST ECX,ECX
0cb3143a  JZ 0x0cb314a1
0cb3143c  MOV RSI,qword ptr [RSI + 0x28]
0cb31440  MOV RDX,qword ptr [RDX]
0cb31443  MOVZX ECX,R8B
0cb31447  LEA RDI,[RSP + 0x8]
0cb3144c  XOR R14D,R14D
0cb3144f  XOR R8D,R8D
0cb31452  XOR R9D,R9D
0cb31455  CALL 0x0cad8990
0cb3145a  MOV R15,qword ptr [RSP + 0x8]
0cb3145f  MOV qword ptr [RBX],R15
0cb31462  TEST R15,R15
0cb31465  JZ 0x0cb3149b
0cb31467  LEA RDI,[0xf5463b0]
0cb3146e  MOV RAX,qword ptr [0x0f5463b0]
0cb31475  MOV ESI,0x20
0cb3147a  CALL qword ptr [RAX + 0x10]
0cb3147d  MOV R14,RAX
0cb31480  TEST RAX,RAX
0cb31483  JZ 0x0cb314b4
0cb31485  XORPS XMM0,XMM0
0cb31488  MOVUPS xmmword ptr [R14 + 0x8],XMM0
0cb3148d  LEA RAX,[0xf1f9808]
0cb31494  MOV qword ptr [R14],RAX
0cb31497  MOV qword ptr [R14 + 0x18],R15
0cb3149b  MOV qword ptr [RBX + 0x8],R14
0cb3149f  JMP 0x0cb314a7
0cb314a1  XORPS XMM0,XMM0
0cb314a4  MOVUPS xmmword ptr [RBX],XMM0
0cb314a7  MOV RAX,RBX
0cb314aa  ADD RSP,0x10
0cb314ae  POP RBX
0cb314af  POP R14
0cb314b1  POP R15
0cb314b3  RET
0cb314b4  MOV EDI,0x20
0cb314b9  XOR ESI,ESI
0cb314bb  CALL 0x0eec74c0
0cb314c0  JMP 0x0cb31485
```

## `0cb314e0` — WorldGenerator slot 9

- Ghidra name: `FUN_0cb314e0`
- Body: `[[0cb314e0, 0cb31648] [0cb31650, 0cb31945] [0cb31950, 0cb31e94] [0cb31ea0, 0cb31f1b] [0cb31f20, 0cb32089] [0cb32090, 0cb320d0] [0cb320e0, 0cb32197] [0cb321a0, 0cb321de] [0cb321e0, 0cb3222d] [0cb32230, 0cb3234c] [0cb32350, 0cb32366] [0cb32370, 0cb3263d] [0cb326c2, 0cb3271e]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0cb314e0(undefined8 *param_1,long *param_2,undefined8 param_3,int param_4,undefined1 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  float *pfVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_f8;
  int iStack_f4;
  long *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plStack_f0 = param_2;
  (**(code **)(*param_2 + 0x20))(&uStack_e8);
  if (CONCAT44(uStack_e4,uStack_e8) == 0) {
    (**(code **)(*plStack_f0 + 0x40))(&uStack_a8,plStack_f0,param_3,param_4,param_5);
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uVar4 = (undefined4)uStack_a0;
    uVar5 = uStack_a0._4_4_;
    uStack_a8 = (long *)0x0;
    uStack_a0 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
    uStack_e0 = uVar4;
    uStack_dc = uVar5;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_a0;
    if (uStack_a0 == (long *)0x0) {
LAB_0cb315a2:
      lVar12 = CONCAT44(uStack_e4,uStack_e8);
    }
    else {
      LOCK();
      plVar8 = uStack_a0 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 != 0) goto LAB_0cb315a2;
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      func_0x0412c2d0(plVar11);
      lVar12 = CONCAT44(uStack_e4,uStack_e8);
    }
    if (lVar12 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
      if (plVar11 == (long *)0x0) {
        return param_1;
      }
      LOCK();
      plVar8 = plVar11 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 != 0) {
        return param_1;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
      return param_1;
    }
    lVar14 = plStack_f0[5];
    lVar9 = plStack_f0[8];
    *(undefined8 *)(lVar12 + 0x1120) = *(undefined8 *)(lVar12 + 0x50);
    *(undefined4 *)(lVar12 + 0x1140) = *(undefined4 *)(lVar14 + 0x3c8);
    *(undefined8 *)(lVar12 + 0x1148) = *(undefined8 *)(lVar14 + 0x3d0);
    *(undefined4 *)(lVar12 + 0x1150) = *(undefined4 *)(lVar9 + 200);
    *(undefined4 *)(lVar12 + 0x1154) = *(undefined4 *)(lVar9 + 0xcc);
    pfVar18 = *(float **)(lVar14 + 0x3b0);
    pfVar1 = *(float **)(lVar14 + 0x3b8);
    if (pfVar18 != pfVar1) {
      bVar24 = *(byte *)(lVar12 + 0x113c);
      fVar30 = _DAT_011987f4;
      do {
        fVar31 = *pfVar18 - (float)(int)(*(int *)(lVar12 + 0x50) << 4 | 8);
        fVar32 = pfVar18[2] - (float)(int)(*(int *)(lVar12 + 0x54) << 4 | 8);
        fVar31 = fVar31 * fVar31 + fVar32 * fVar32;
        if (fVar31 < fVar30) {
          *(float *)(lVar12 + 0x1138) = pfVar18[4];
          uVar15 = *(undefined8 *)(pfVar18 + 2);
          *(undefined8 *)(lVar12 + 0x1128) = *(undefined8 *)pfVar18;
          *(undefined8 *)(lVar12 + 0x1130) = uVar15;
          fVar30 = fVar31;
          if ((bVar24 & 1) == 0) {
            *(undefined1 *)(lVar12 + 0x113c) = 1;
            bVar24 = 1;
          }
        }
        pfVar18 = pfVar18 + 5;
      } while (pfVar18 != pfVar1);
    }
    (**(code **)(**(long **)(CONCAT44(uStack_e4,uStack_e8) + 0x28) + 0x9f0))();
    cVar6 = *(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8);
  }
  else {
    cVar6 = *(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8);
  }
  if ((cVar6 == '\v') ||
     (((((long *)plStack_f0[4] != (long *)0x0 &&
        (cVar6 = (**(code **)(*(long *)plStack_f0[4] + 0xb08))(), cVar6 != '\0')) || (param_4 != 1))
      || ((CONCAT44(uStack_e4,uStack_e8) == 0 ||
          (cVar6 = (**(code **)(*plStack_f0 + 0x130))(), cVar6 == '\0')))))) {
LAB_0cb3251e:
    *param_1 = CONCAT44(uStack_e4,uStack_e8);
    param_1[1] = CONCAT44(uStack_dc,uStack_e0);
    return param_1;
  }
  plStack_90 = (long *)CONCAT44(uStack_e4,uStack_e8);
  plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
  }
  plStack_68 = plStack_90;
  uStack_60 = plVar11;
  uStack_40 = param_3;
  puStack_38 = param_1;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f3f22b0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x3f800000;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 9) = 0;
  plVar8[10] = 0;
  LOCK();
  plVar8[10] = 0;
  UNLOCK();
  plVar19 = (long *)plStack_f0[8];
  lVar9 = func_0x0eee2fc0();
  lVar14 = *plVar19;
  LOCK();
  lVar12 = plVar19[2];
  bVar29 = lVar14 == lVar12;
  if (bVar29) {
    plVar19[2] = lVar9;
    lVar12 = lVar14;
  }
  UNLOCK();
  plStack_88 = plVar19;
  if (!bVar29) {
    iVar17 = 3000;
    do {
      while( true ) {
        if ((lVar12 == lVar9) && (iVar7 = (int)plVar19[1] + 1, iVar7 != -1)) {
          *(int *)(plVar19 + 1) = iVar7;
          goto LAB_0cb317e6;
        }
        if (iVar17 == 0) break;
        iVar17 = iVar17 + -1;
        lVar14 = *plVar19;
        LOCK();
        lVar12 = plVar19[2];
        bVar29 = lVar14 == lVar12;
        if (bVar29) {
          plVar19[2] = lVar9;
          lVar12 = lVar14;
        }
        UNLOCK();
        if (bVar29) goto LAB_0cb317df;
      }
      func_0x0eee35d0();
      iVar17 = 0;
      lVar14 = *plStack_88;
      LOCK();
      lVar12 = plStack_88[2];
      bVar29 = lVar14 == lVar12;
      if (bVar29) {
        plStack_88[2] = lVar9;
        lVar12 = lVar14;
      }
      UNLOCK();
      plVar19 = plStack_88;
    } while (!bVar29);
  }
LAB_0cb317df:
  *(undefined4 *)(plVar19 + 1) = 1;
LAB_0cb317e6:
  plStack_78 = plVar8 + 1;
  plStack_b0 = plStack_90 + 10;
  uStack_c8 = (long *)plStack_f0[8];
  plStack_b8 = (long *)((long)uStack_c8 + 0x18);
  uVar10 = (long)(int)plStack_90[10] + 0x9e3779b9;
  puVar22 = (undefined8 *)
            ((uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + (long)*(int *)((long)plStack_90 + 0x54) ^
            uVar10);
  puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
  plStack_48 = plVar11;
  if (puVar16 != (undefined8 *)0x0) {
    uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      param_1 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar22);
    }
    else {
      param_1 = puVar22;
      if (puVar16 <= puVar22) {
        param_1 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
      }
    }
    puVar26 = *(undefined8 **)(*plStack_b8 + (long)param_1 * 8);
    if ((puVar26 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar26, plVar11 != (long *)0x0)) {
      if ((byte)(uVar10 >> 0x38) < 2) {
        do {
          if ((undefined8 *)plVar11[1] == puVar22) {
            if (plVar11[2] == *plStack_b0) goto LAB_0cb31e35;
          }
          else if ((undefined8 *)((ulong)plVar11[1] & (long)puVar16 - 1U) != param_1) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar26 = (undefined8 *)plVar11[1];
          if (puVar26 == puVar22) {
            if (plVar11[2] == *plStack_b0) goto LAB_0cb31e35;
          }
          else {
            if (puVar16 <= puVar26) {
              if (((ulong)puVar26 | (ulong)puVar16) >> 0x20 == 0) {
                if ((undefined8 *)(((ulong)puVar26 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) ==
                    param_1) goto LAB_0cb319d4;
                break;
              }
              puVar26 = (undefined8 *)((ulong)puVar26 % (ulong)puVar16);
            }
            if (puVar26 != param_1) break;
          }
LAB_0cb319d4:
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_a0 = plStack_b8;
  uStack_98 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)puVar22;
  plVar11[2] = *plStack_b0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  fVar30 = (float)(*(long *)((long)uStack_c8 + 0x30) + 1);
  uStack_a8 = plVar11;
  if ((puVar16 == (undefined8 *)0x0) ||
     ((float)puVar16 * *(float *)((long)uStack_c8 + 0x38) < fVar30)) {
    uVar10 = 1;
    if ((undefined8 *)0x2 < puVar16) {
      uVar10 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar28 = (undefined8 *)(uVar10 | (long)puVar16 * 2);
    fVar30 = (float)func_0x0eee3ab0(fVar30 / *(float *)((long)uStack_c8 + 0x38));
    puVar26 = (undefined8 *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    if (puVar26 < puVar28) {
      puVar26 = puVar28;
    }
    puVar28 = (undefined8 *)0x2;
    if ((puVar26 != (undefined8 *)0x1) &&
       (puVar28 = puVar26, ((ulong)puVar26 & (long)puVar26 - 1U) != 0)) {
      puVar28 = (undefined8 *)func_0x0412c3f0();
      puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
    }
    if (puVar16 < puVar28) {
LAB_0cb31b8b:
      if ((ulong)puVar28 >> 0x3d != 0) {
        uVar15 = func_0x04882eb0();
        uVar15 = func_0x04882e20(uVar15);
        func_0x0cb57b80(&uStack_a8);
        func_0x0eee0720(plStack_88);
        LOCK();
        lVar12 = *plStack_78;
        *plStack_78 = *plStack_78 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
        func_0x04a7efb0(&plStack_68);
        func_0x04a7efb0(&uStack_e8);
        uVar15 = func_0x0eee2d70(uVar15);
        func_0x04882e20(uVar15);
        pcVar3 = (code *)swi(3);
        puVar16 = (undefined8 *)(*pcVar3)();
        return puVar16;
      }
      lStack_80 = (long)puVar28 * 8;
      puStack_50 = puVar28;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar12 == 0) {
        func_0x0eec74c0(lStack_80,0);
      }
      lVar2 = (long)uStack_c8;
      lVar14 = *plStack_b8;
      *plStack_b8 = lVar12;
      puStack_58 = puVar22;
      if (lVar14 != 0) {
        func_0x0412a280(lVar14,*(long *)((long)uStack_c8 + 0x20) << 3);
        lVar12 = *(long *)(lVar2 + 0x18);
      }
      puVar16 = puStack_50;
      *(undefined8 **)(lVar2 + 0x20) = puStack_50;
      func_0x0eee2dd0(lVar12,0,lStack_80);
      plVar19 = *(long **)(lVar2 + 0x28);
      puVar22 = puStack_58;
      if (plVar19 != (long *)0x0) {
        puVar26 = (undefined8 *)plVar19[1];
        uVar10 = (long)puVar16 - 1;
        if (((ulong)puVar16 & uVar10) == 0) {
          *(long *)(lVar12 + ((ulong)puVar26 & uVar10) * 8) = (long)uStack_c8 + 0x28;
          uVar13 = (ulong)puVar26 & uVar10;
          while (plVar27 = plVar19, plVar19 = (long *)*plVar27, plVar19 != (long *)0x0) {
            uVar20 = plVar19[1] & uVar10;
            if (uVar20 != uVar13) {
              if (*(long *)(lVar12 + uVar20 * 8) == 0) {
                *(long **)(lVar12 + uVar20 * 8) = plVar27;
                uVar13 = uVar20;
              }
              else {
                *plVar27 = *plVar19;
                *plVar19 = **(undefined8 **)(lVar12 + uVar20 * 8);
                **(long **)(lVar12 + uVar20 * 8) = (long)plVar19;
                plVar19 = plVar27;
              }
            }
          }
        }
        else {
          if (puVar16 <= puVar26) {
            if (((ulong)puVar26 | (ulong)puVar16) >> 0x20 == 0) {
              puVar26 = (undefined8 *)
                        (((ulong)puVar26 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
            }
            else {
              puVar26 = (undefined8 *)((ulong)puVar26 % (ulong)puVar16);
            }
          }
          *(long *)(lVar12 + (long)puVar26 * 8) = (long)uStack_c8 + 0x28;
          plVar27 = (long *)*plVar19;
          while (plVar27 != (long *)0x0) {
            puVar28 = (undefined8 *)plVar27[1];
            if (puVar16 <= puVar28) {
              if (((ulong)puVar28 | (ulong)puVar16) >> 0x20 == 0) {
                puVar28 = (undefined8 *)
                          (((ulong)puVar28 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
              }
              else {
                puVar28 = (undefined8 *)((ulong)puVar28 % (ulong)puVar16);
              }
            }
            if (puVar28 != puVar26) {
              if (*(long *)(lVar12 + (long)puVar28 * 8) == 0) {
                *(long **)(lVar12 + (long)puVar28 * 8) = plVar19;
                puVar26 = puVar28;
              }
              else {
                *plVar19 = *plVar27;
                *plVar27 = **(long **)(lVar12 + (long)puVar28 * 8);
                **(undefined8 **)(lVar12 + (long)puVar28 * 8) = plVar27;
                plVar27 = plVar19;
              }
            }
            plVar19 = plVar27;
            plVar27 = (long *)*plVar19;
          }
        }
      }
    }
    else if (puVar28 < puVar16) {
      fVar30 = (float)func_0x0eee3ab0((float)*(ulong *)((long)uStack_c8 + 0x30) /
                                      *(float *)((long)uStack_c8 + 0x38));
      puVar26 = (undefined8 *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
      ;
      if ((puVar16 < (undefined8 *)0x3) ||
         (uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
         1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puVar26 = (undefined8 *)func_0x0412c3f0();
      }
      else if ((undefined8 *)0x1 < puVar26) {
        lVar12 = 0x3f;
        if ((long)puVar26 - 1U != 0) {
          for (; (long)puVar26 - 1U >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        puVar26 = (undefined8 *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
      }
      lVar12 = (long)uStack_c8;
      if (puVar26 < puVar28) {
        puVar26 = puVar28;
      }
      if (puVar26 < puVar16) {
        puVar28 = puVar26;
        if (puVar26 != (undefined8 *)0x0) goto LAB_0cb31b8b;
        lVar14 = *plStack_b8;
        *plStack_b8 = 0;
        if (lVar14 != 0) {
          func_0x0412a280(lVar14,*(long *)((long)uStack_c8 + 0x20) << 3);
        }
        *(undefined8 *)(lVar12 + 0x20) = 0;
      }
    }
    puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
    if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
      param_1 = (undefined8 *)((ulong)puVar22 & (long)puVar16 - 1U);
    }
    else {
      param_1 = puVar22;
      if (puVar16 <= puVar22) {
        param_1 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
      }
    }
  }
  lVar12 = *plStack_b8;
  plVar19 = *(long **)(lVar12 + (long)param_1 * 8);
  if (plVar19 == (long *)0x0) {
    *plVar11 = *(long *)((long)uStack_c8 + 0x28);
    *(long **)((long)uStack_c8 + 0x28) = plVar11;
    *(long *)(lVar12 + (long)param_1 * 8) = (long)uStack_c8 + 0x28;
    if (*plVar11 != 0) {
      puVar22 = *(undefined8 **)(*plVar11 + 8);
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        *(long **)(lVar12 + ((ulong)puVar22 & (long)puVar16 - 1U) * 8) = plVar11;
      }
      else {
        if (puVar16 <= puVar22) {
          if (((ulong)puVar22 | (ulong)puVar16) >> 0x20 == 0) {
            *(long **)(lVar12 + (((ulong)puVar22 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) * 8)
                 = plVar11;
            goto LAB_0cb31e31;
          }
          puVar22 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
        }
        *(long **)(lVar12 + (long)puVar22 * 8) = plVar11;
      }
    }
  }
  else {
    *plVar11 = *plVar19;
    *plVar19 = (long)plVar11;
  }
LAB_0cb31e31:
  *(long *)((long)uStack_c8 + 0x30) = *(long *)((long)uStack_c8 + 0x30) + 1;
LAB_0cb31e35:
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plVar11[3] = (long)(plVar8 + 3);
  plVar19 = (long *)plVar11[4];
  plVar11[4] = (long)plVar8;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_c8 = plVar8 + 8;
  iVar17 = *(int *)((long)plStack_90 + 0x54);
  iStack_f8 = (int)plStack_90[10] + -1;
  do {
    iStack_f4 = iVar17 + -1;
    do {
      (**(code **)(*plStack_f0 + 0x20))(&uStack_a8,plStack_f0,&iStack_f8);
      plVar19 = uStack_a0;
      plVar11 = uStack_a8;
      if (uStack_a8 != (long *)0x0) {
        if (uStack_a0 != (long *)0x0) {
          LOCK();
          uStack_a0[2] = uStack_a0[2] + 1;
          UNLOCK();
        }
        lVar14 = plVar8[8];
        LOCK();
        lVar12 = plVar8[10];
        bVar29 = lVar14 == lVar12;
        if (bVar29) {
          plVar8[10] = lVar9;
          lVar12 = lVar14;
        }
        UNLOCK();
        if (!bVar29) {
          iVar17 = 3000;
          do {
            while( true ) {
              if ((lVar12 == lVar9) && (iVar7 = (int)plVar8[9] + 1, iVar7 != -1)) goto LAB_0cb31f5f;
              if (iVar17 == 0) break;
              iVar17 = iVar17 + -1;
              lVar14 = plVar8[8];
              LOCK();
              lVar12 = plVar8[10];
              bVar29 = lVar14 == lVar12;
              if (bVar29) {
                plVar8[10] = lVar9;
                lVar12 = lVar14;
              }
              UNLOCK();
              if (bVar29) goto LAB_0cb31f5a;
            }
            func_0x0eee35d0();
            iVar17 = 0;
            lVar14 = plVar8[8];
            LOCK();
            lVar12 = plVar8[10];
            bVar29 = lVar14 == lVar12;
            if (bVar29) {
              plVar8[10] = lVar9;
              lVar12 = lVar14;
            }
            UNLOCK();
          } while (!bVar29);
        }
LAB_0cb31f5a:
        iVar7 = 1;
LAB_0cb31f5f:
        *(int *)(plVar8 + 9) = iVar7;
        puStack_70 = (undefined1 *)&iStack_f8;
        lVar12 = func_0x0caaf3d0(plVar8 + 3,&iStack_f8,&UNK_01563a4f,&puStack_70,&uStack_c9);
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar19[2] = plVar19[2] + 1;
          UNLOCK();
        }
        *(long **)(lVar12 + 0x18) = plVar11;
        lVar14 = *(long *)(lVar12 + 0x20);
        *(long **)(lVar12 + 0x20) = plVar19;
        if (lVar14 != 0) {
          func_0x0412c2d0();
        }
        if (plVar8[10] == lVar9) {
          iVar17 = (int)plVar8[9];
          if (iVar17 == 1) {
            *(undefined4 *)(plVar8 + 9) = 0;
            plVar8[10] = plVar8[8];
          }
          else {
            if (iVar17 == 0) goto LAB_0cb31fc7;
            *(int *)(plVar8 + 9) = iVar17 + -1;
          }
        }
        else {
LAB_0cb31fc7:
          cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
          if (cVar6 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
        }
        if (plVar19 != (long *)0x0) {
          func_0x0412c2d0(plVar19);
        }
      }
      plVar11 = uStack_a0;
      if (uStack_a0 != (long *)0x0) {
        LOCK();
        plVar19 = uStack_a0 + 1;
        lVar12 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
          func_0x0412c2d0(plVar11);
        }
      }
      iVar17 = *(int *)((long)plStack_90 + 0x54);
      bVar29 = iStack_f4 <= iVar17;
      iStack_f4 = iStack_f4 + 1;
    } while (bVar29);
    iVar7 = (int)*plStack_b0;
    bVar29 = iStack_f8 <= iVar7;
    iStack_f8 = iStack_f8 + 1;
  } while (bVar29);
  iStack_f8 = iVar7 + -1;
LAB_0cb320aa:
  iVar23 = iVar17 + -1;
  if (*(long *)(plStack_f0[8] + 0x20) != 0) {
LAB_0cb320f7:
    plVar11 = uStack_60;
    uVar10 = *(ulong *)(plStack_f0[8] + 0x20);
    iStack_f4 = iVar23;
    if (uVar10 != 0) {
      uVar13 = (long)iStack_f8 + 0x9e3779b9;
      uVar13 = (long)iVar23 + 0x9e3779b9 + uVar13 * 0x40 + (uVar13 >> 2) ^ uVar13;
      uVar20 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
      uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar20 >> 0x38 < 2) {
        uVar21 = uVar10 - 1 & uVar13;
      }
      else {
        uVar21 = uVar13;
        if (uVar10 <= uVar13) {
          uVar21 = uVar13 % uVar10;
        }
      }
      plVar19 = *(long **)(*(long *)(plStack_f0[8] + 0x18) + uVar21 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if ((byte)(uVar20 >> 0x38) < 2) {
          do {
            if (plVar19[1] == uVar13) {
              if (plVar19[2] == CONCAT44(iVar23,iStack_f8)) goto LAB_0cb32258;
            }
            else if ((plVar19[1] & uVar10 - 1) != uVar21) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar19[1];
            if (uVar20 == uVar13) {
              if (plVar19[2] == CONCAT44(iVar23,iStack_f8)) goto LAB_0cb32258;
            }
            else {
              if (uVar10 <= uVar20) {
                if ((uVar20 | uVar10) >> 0x20 == 0) {
                  if ((uVar20 & 0xffffffff) % (uVar10 & 0xffffffff) == uVar21) goto LAB_0cb321e6;
                  break;
                }
                uVar20 = uVar20 % uVar10;
              }
              if (uVar20 != uVar21) break;
            }
LAB_0cb321e6:
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0cb320e0;
  }
  iVar25 = iVar17 + 1;
  if (iVar17 + 1 < iVar23) {
    iVar25 = iVar23;
  }
  iStack_f4 = iVar25 + 1;
  goto LAB_0cb3209a;
LAB_0cb32258:
  lVar12 = plVar19[3];
  if (lVar12 == 0) goto LAB_0cb320e0;
  uStack_c8 = plStack_68;
  uStack_c0 = (undefined4)uStack_60;
  uStack_bc = uStack_60._4_4_;
  if (uStack_60 != (long *)0x0) {
    LOCK();
    uStack_60[2] = uStack_60[2] + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(lVar12 + 0x28);
  LOCK();
  lVar14 = *(long *)(lVar12 + 0x38);
  bVar29 = lVar2 == lVar14;
  if (bVar29) {
    *(long *)(lVar12 + 0x38) = lVar9;
    lVar14 = lVar2;
  }
  UNLOCK();
  if (!bVar29) {
    iVar17 = 3000;
    do {
      while( true ) {
        if ((lVar14 == lVar9) && (iVar7 = *(int *)(lVar12 + 0x30) + 1, iVar7 != -1)) {
          *(int *)(lVar12 + 0x30) = iVar7;
          goto LAB_0cb3229c;
        }
        if (iVar17 == 0) break;
        iVar17 = iVar17 + -1;
        lVar2 = *(long *)(lVar12 + 0x28);
        LOCK();
        lVar14 = *(long *)(lVar12 + 0x38);
        bVar29 = lVar2 == lVar14;
        if (bVar29) {
          *(long *)(lVar12 + 0x38) = lVar9;
          lVar14 = lVar2;
        }
        UNLOCK();
        if (bVar29) goto LAB_0cb32294;
      }
      func_0x0eee35d0();
      iVar17 = 0;
      lVar2 = *(long *)(lVar12 + 0x28);
      LOCK();
      lVar14 = *(long *)(lVar12 + 0x38);
      bVar29 = lVar2 == lVar14;
      if (bVar29) {
        *(long *)(lVar12 + 0x38) = lVar9;
        lVar14 = lVar2;
      }
      UNLOCK();
    } while (!bVar29);
  }
LAB_0cb32294:
  *(undefined4 *)(lVar12 + 0x30) = 1;
LAB_0cb3229c:
  uStack_a8 = plStack_b0;
  lVar14 = func_0x0caaf3d0(lVar12,plStack_b0,&UNK_01563a4f,&uStack_a8,&puStack_70);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(lVar14 + 0x20);
  *(undefined4 *)(lVar14 + 0x18) = (undefined4)uStack_c8;
  *(undefined4 *)(lVar14 + 0x1c) = uStack_c8._4_4_;
  *(undefined4 *)(lVar14 + 0x20) = uStack_c0;
  *(undefined4 *)(lVar14 + 0x24) = uStack_bc;
  if (lVar2 != 0) {
    func_0x0412c2d0();
  }
  if (*(long *)(lVar12 + 0x38) == lVar9) {
    iVar17 = *(int *)(lVar12 + 0x30);
    if (iVar17 == 1) {
      *(undefined4 *)(lVar12 + 0x30) = 0;
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar12 + 0x28);
    }
    else {
      if (iVar17 == 0) goto LAB_0cb32305;
      *(int *)(lVar12 + 0x30) = iVar17 + -1;
    }
  }
  else {
LAB_0cb32305:
    cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if (plVar11 != (long *)0x0) {
    func_0x0412c2d0(plVar11);
  }
LAB_0cb320e0:
  iVar23 = iStack_f4 + 1;
  iVar17 = *(int *)((long)plStack_90 + 0x54);
  if (iVar17 < iStack_f4) goto LAB_0cb32090;
  goto LAB_0cb320f7;
LAB_0cb32090:
  iVar7 = (int)*plStack_b0;
  iStack_f4 = iVar23;
LAB_0cb3209a:
  plVar11 = plStack_48;
  iVar23 = iStack_f8 + 1;
  bVar29 = iVar7 < iStack_f8;
  iStack_f8 = iVar23;
  if (bVar29) goto LAB_0cb323d6;
  goto LAB_0cb320aa;
LAB_0cb323d6:
  if (plStack_88[2] == lVar9) {
    iVar17 = (int)plStack_88[1];
    if (iVar17 == 1) {
      *(undefined4 *)(plStack_88 + 1) = 0;
      plStack_88[2] = *plStack_88;
    }
    else {
      if (iVar17 == 0) goto LAB_0cb323fc;
      *(int *)(plStack_88 + 1) = iVar17 + -1;
    }
  }
  else {
LAB_0cb323fc:
    cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  LOCK();
  lVar12 = *plStack_78;
  *plStack_78 = *plStack_78 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  param_1 = puStack_38;
  if (*(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8) == '\0') {
    func_0x0cb30ba0(plStack_f0[8],uStack_40,0);
  }
  else {
    func_0x0cb2f260(plStack_f0,*(undefined8 *)(CONCAT44(uStack_e4,uStack_e8) + 0x50));
  }
  goto LAB_0cb3251e;
}


```

### Assembly

```asm
0cb314e0  PUSH RBP
0cb314e1  PUSH R15
0cb314e3  PUSH R14
0cb314e5  PUSH R13
0cb314e7  PUSH R12
0cb314e9  PUSH RBX
0cb314ea  SUB RSP,0xc8
0cb314f1  MOV EBP,R8D
0cb314f4  MOV EBX,ECX
0cb314f6  MOV R12,RDX
0cb314f9  MOV R15,RDI
0cb314fc  MOV RAX,qword ptr [RSI]
0cb314ff  LEA RDI,[RSP + 0x10]
0cb31504  MOV qword ptr [RSP + 0x8],RSI
0cb31509  CALL qword ptr [RAX + 0x20]
0cb3150c  MOV RAX,qword ptr [RSP + 0x10]
0cb31511  TEST RAX,RAX
0cb31514  JZ 0x0cb3152a
0cb31516  MOVZX EAX,byte ptr [RAX + 0xb8]
0cb3151d  CMP AL,0xb
0cb3151f  JNZ 0x0cb316c7
0cb31525  JMP 0x0cb3251e
0cb3152a  MOV RSI,qword ptr [RSP + 0x8]
0cb3152f  MOV RAX,qword ptr [RSI]
0cb31532  MOVZX R8D,BPL
0cb31536  LEA RDI,[RSP + 0x50]
0cb3153b  MOV RDX,R12
0cb3153e  MOV ECX,EBX
0cb31540  CALL qword ptr [RAX + 0x40]
0cb31543  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
0cb31548  XORPS XMM1,XMM1
0cb3154b  MOVAPS xmmword ptr [RSP + 0x50],XMM1
0cb31550  MOV R14,qword ptr [RSP + 0x18]
0cb31555  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0cb3155a  TEST R14,R14
0cb3155d  JZ 0x0cb31582
0cb3155f  MOV RAX,-0x1
0cb31566  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3156c  TEST RAX,RAX
0cb3156f  JNZ 0x0cb31582
0cb31571  MOV RAX,qword ptr [R14]
0cb31574  MOV RDI,R14
0cb31577  CALL qword ptr [RAX + 0x10]
0cb3157a  MOV RDI,R14
0cb3157d  CALL 0x0412c2d0
0cb31582  MOV R14,qword ptr [RSP + 0x58]
0cb31587  TEST R14,R14
0cb3158a  JZ 0x0cb315a2
0cb3158c  MOV RAX,-0x1
0cb31593  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb31599  TEST RAX,RAX
0cb3159c  JZ 0x0cb318c9
0cb315a2  MOV RAX,qword ptr [RSP + 0x10]
0cb315a7  TEST RAX,RAX
0cb315aa  JZ 0x0cb318e8
0cb315b0  MOV RCX,qword ptr [RSP + 0x8]
0cb315b5  MOV RDX,qword ptr [RCX + 0x28]
0cb315b9  MOV RCX,qword ptr [RCX + 0x40]
0cb315bd  MOV RSI,qword ptr [RAX + 0x50]
0cb315c1  MOV qword ptr [RAX + 0x1120],RSI
0cb315c8  MOV ESI,dword ptr [RDX + 0x3c8]
0cb315ce  MOV dword ptr [RAX + 0x1140],ESI
0cb315d4  MOV RSI,qword ptr [RDX + 0x3d0]
0cb315db  MOV qword ptr [RAX + 0x1148],RSI
0cb315e2  MOV ESI,dword ptr [RCX + 0xc8]
0cb315e8  MOV dword ptr [RAX + 0x1150],ESI
0cb315ee  MOV ECX,dword ptr [RCX + 0xcc]
0cb315f4  MOV dword ptr [RAX + 0x1154],ECX
0cb315fa  MOV RCX,qword ptr [RDX + 0x3b0]
0cb31601  MOV RDX,qword ptr [RDX + 0x3b8]
0cb31608  CMP RCX,RDX
0cb3160b  JZ 0x0cb316a1
0cb31611  MOV ESI,dword ptr [RAX + 0x50]
0cb31614  MOV EDI,dword ptr [RAX + 0x54]
0cb31617  SHL ESI,0x4
0cb3161a  OR ESI,0x8
0cb3161d  XORPS XMM0,XMM0
0cb31620  CVTSI2SS XMM0,ESI
0cb31624  SHL EDI,0x4
0cb31627  OR EDI,0x8
0cb3162a  XORPS XMM1,XMM1
0cb3162d  CVTSI2SS XMM1,EDI
0cb31631  LEA RSI,[RAX + 0x1128]
0cb31638  MOVZX EDI,byte ptr [RAX + 0x113c]
0cb3163f  MOVSS XMM3,dword ptr [0x011987f4]
0cb31647  JMP 0x0cb3165f
0cb31650  MOVAPS XMM2,XMM3
0cb31653  ADD RCX,0x14
0cb31657  MOVAPS XMM3,XMM2
0cb3165a  CMP RCX,RDX
0cb3165d  JZ 0x0cb316a1
0cb3165f  MOVSS XMM2,dword ptr [RCX]
0cb31663  SUBSS XMM2,XMM0
0cb31667  MOVSS XMM4,dword ptr [RCX + 0x8]
0cb3166c  SUBSS XMM4,XMM1
0cb31670  MULSS XMM4,XMM4
0cb31674  MULSS XMM2,XMM2
0cb31678  ADDSS XMM2,XMM4
0cb3167c  UCOMISS XMM3,XMM2
0cb3167f  JBE 0x0cb31650
0cb31681  MOV R8D,dword ptr [RCX + 0x10]
0cb31685  MOV dword ptr [RSI + 0x10],R8D
0cb31689  MOVUPS XMM3,xmmword ptr [RCX]
0cb3168c  MOVUPS xmmword ptr [RSI],XMM3
0cb3168f  TEST DIL,0x1
0cb31693  JNZ 0x0cb31653
0cb31695  MOV byte ptr [RAX + 0x113c],0x1
0cb3169c  MOV DIL,0x1
0cb3169f  JMP 0x0cb31653
0cb316a1  MOV RAX,qword ptr [RSP + 0x10]
0cb316a6  MOV RDI,qword ptr [RAX + 0x28]
0cb316aa  MOV RAX,qword ptr [RDI]
0cb316ad  CALL qword ptr [RAX + 0x9f0]
0cb316b3  MOV RAX,qword ptr [RSP + 0x10]
0cb316b8  MOVZX EAX,byte ptr [RAX + 0xb8]
0cb316bf  CMP AL,0xb
0cb316c1  JZ 0x0cb3251e
0cb316c7  MOV RAX,qword ptr [RSP + 0x8]
0cb316cc  MOV RDI,qword ptr [RAX + 0x20]
0cb316d0  TEST RDI,RDI
0cb316d3  JZ 0x0cb316e6
0cb316d5  MOV RAX,qword ptr [RDI]
0cb316d8  CALL qword ptr [RAX + 0xb08]
0cb316de  TEST AL,AL
0cb316e0  JNZ 0x0cb3251e
0cb316e6  CMP EBX,0x1
0cb316e9  JNZ 0x0cb3251e
0cb316ef  CMP qword ptr [RSP + 0x10],0x0
0cb316f5  JZ 0x0cb3251e
0cb316fb  MOV RDI,qword ptr [RSP + 0x8]
0cb31700  MOV RAX,qword ptr [RDI]
0cb31703  CALL qword ptr [RAX + 0x130]
0cb31709  TEST AL,AL
0cb3170b  JZ 0x0cb3251e
0cb31711  MOV qword ptr [RSP + 0xb8],R12
0cb31719  MOV qword ptr [RSP + 0xc0],R15
0cb31721  MOV RAX,qword ptr [RSP + 0x10]
0cb31726  MOV RBX,qword ptr [RSP + 0x18]
0cb3172b  MOV qword ptr [RSP + 0x68],RAX
0cb31730  MOV qword ptr [RSP + 0x90],RAX
0cb31738  MOV qword ptr [RSP + 0x98],RBX
0cb31740  TEST RBX,RBX
0cb31743  JZ 0x0cb3174a
0cb31745  INC.LOCK qword ptr [RBX + 0x8]
0cb3174a  LEA RDI,[0xf5463b0]
0cb31751  MOV RAX,qword ptr [0x0f5463b0]
0cb31758  MOV ESI,0x58
0cb3175d  CALL qword ptr [RAX + 0x10]
0cb31760  MOV R12,RAX
0cb31763  TEST RAX,RAX
0cb31766  JZ 0x0cb325ec
0cb3176c  XORPS XMM0,XMM0
0cb3176f  MOVUPS xmmword ptr [R12 + 0x8],XMM0
0cb31775  LEA RAX,[0xf3f22b0]
0cb3177c  MOV qword ptr [R12],RAX
0cb31780  MOVUPS xmmword ptr [R12 + 0x18],XMM0
0cb31786  MOVUPS xmmword ptr [R12 + 0x28],XMM0
0cb3178c  MOV dword ptr [R12 + 0x38],0x3f800000
0cb31795  MOV qword ptr [R12 + 0x40],0x0
0cb3179e  MOV dword ptr [R12 + 0x48],0x0
0cb317a7  MOV qword ptr [R12 + 0x50],0x0
0cb317b0  XOR EAX,EAX
0cb317b2  XCHG qword ptr [R12 + 0x50],RAX
0cb317b7  MOV RAX,qword ptr [RSP + 0x8]
0cb317bc  MOV R14,qword ptr [RAX + 0x40]
0cb317c0  CALL 0x0eee2fc0
0cb317c5  MOV RDX,R14
0cb317c8  MOV R13,RAX
0cb317cb  MOV RAX,qword ptr [R14]
0cb317ce  CMPXCHG.LOCK qword ptr [R14 + 0x10],R13
0cb317d4  MOV qword ptr [RSP + 0x70],R14
0cb317d9  JNZ 0x0cb31929
0cb317df  MOV dword ptr [RDX + 0x8],0x1
0cb317e6  LEA RAX,[R12 + 0x8]
0cb317eb  MOV qword ptr [RSP + 0x80],RAX
0cb317f3  MOV RCX,qword ptr [RSP + 0x68]
0cb317f8  LEA RAX,[RCX + 0x50]
0cb317fc  MOV qword ptr [RSP + 0x48],RAX
0cb31801  MOV ESI,0x9e3779b9
0cb31806  MOV RAX,qword ptr [RSP + 0x8]
0cb3180b  MOV RDI,qword ptr [RAX + 0x40]
0cb3180f  MOV qword ptr [RSP + 0x30],RDI
0cb31814  LEA RAX,[RDI + 0x18]
0cb31818  MOV qword ptr [RSP + 0x40],RAX
0cb3181d  MOVSXD RAX,dword ptr [RCX + 0x50]
0cb31821  ADD RAX,RSI
0cb31824  MOVSXD RCX,dword ptr [RCX + 0x54]
0cb31828  MOV RDX,RAX
0cb3182b  SHL RDX,0x6
0cb3182f  ADD RDX,RCX
0cb31832  MOV RBP,RAX
0cb31835  SHR RBP,0x2
0cb31839  ADD RBP,RSI
0cb3183c  ADD RBP,RDX
0cb3183f  XOR RBP,RAX
0cb31842  MOV R14,qword ptr [RDI + 0x20]
0cb31846  MOV RCX,0x5555555555555555
0cb31850  MOV RDX,0x3333333333333333
0cb3185a  MOV RDI,0xf0f0f0f0f0f0f0f
0cb31864  MOV R8,0x101010101010101
0cb3186e  TEST R14,R14
0cb31871  MOV qword ptr [RSP + 0xb0],RBX
0cb31879  JZ 0x0cb31982
0cb3187f  MOV RAX,R14
0cb31882  SHR RAX,0x1
0cb31885  AND RAX,RCX
0cb31888  MOV RCX,R14
0cb3188b  SUB RCX,RAX
0cb3188e  MOV RAX,RCX
0cb31891  AND RAX,RDX
0cb31894  SHR RCX,0x2
0cb31898  AND RCX,RDX
0cb3189b  ADD RCX,RAX
0cb3189e  MOV RSI,RCX
0cb318a1  SHR RSI,0x4
0cb318a5  ADD RSI,RCX
0cb318a8  AND RSI,RDI
0cb318ab  IMUL RSI,R8
0cb318af  SHR RSI,0x38
0cb318b3  CMP RSI,0x1
0cb318b7  JA 0x0cb31987
0cb318bd  LEA R15,[R14 + -0x1]
0cb318c1  AND R15,RBP
0cb318c4  JMP 0x0cb3199a
0cb318c9  MOV RAX,qword ptr [R14]
0cb318cc  MOV RDI,R14
0cb318cf  CALL qword ptr [RAX + 0x10]
0cb318d2  MOV RDI,R14
0cb318d5  CALL 0x0412c2d0
0cb318da  MOV RAX,qword ptr [RSP + 0x10]
0cb318df  TEST RAX,RAX
0cb318e2  JNZ 0x0cb315b0
0cb318e8  XORPS XMM0,XMM0
0cb318eb  MOVUPS xmmword ptr [R15],XMM0
0cb318ef  MOV RBX,qword ptr [RSP + 0x18]
0cb318f4  TEST RBX,RBX
0cb318f7  JZ 0x0cb32527
0cb318fd  MOV RAX,-0x1
0cb31904  XADD.LOCK qword ptr [RBX + 0x8],RAX
0cb3190a  TEST RAX,RAX
0cb3190d  JNZ 0x0cb32527
0cb31913  MOV RAX,qword ptr [RBX]
0cb31916  MOV RDI,RBX
0cb31919  CALL qword ptr [RAX + 0x10]
0cb3191c  MOV RDI,RBX
0cb3191f  CALL 0x0412c2d0
0cb31924  JMP 0x0cb32527
0cb31929  MOV ECX,0xbb8
0cb3192e  JMP 0x0cb3196b
0cb31930  TEST ECX,ECX
0cb31932  JZ 0x0cb31950
0cb31934  DEC ECX
0cb31936  MOV RAX,qword ptr [RDX]
0cb31939  CMPXCHG.LOCK qword ptr [RDX + 0x10],R13
0cb3193f  JNZ 0x0cb3196b
0cb31941  JMP 0x0cb317df
0cb31950  CALL 0x0eee35d0
0cb31955  MOV RDX,qword ptr [RSP + 0x70]
0cb3195a  XOR ECX,ECX
0cb3195c  MOV RAX,qword ptr [RDX]
0cb3195f  CMPXCHG.LOCK qword ptr [RDX + 0x10],R13
0cb31965  JZ 0x0cb317df
0cb3196b  CMP RAX,R13
0cb3196e  JNZ 0x0cb31930
0cb31970  MOV EAX,dword ptr [RDX + 0x8]
0cb31973  INC EAX
0cb31975  CMP EAX,-0x1
0cb31978  JZ 0x0cb31930
0cb3197a  MOV dword ptr [RDX + 0x8],EAX
0cb3197d  JMP 0x0cb317e6
0cb31982  JMP 0x0cb31a36
0cb31987  MOV R15,RBP
0cb3198a  CMP RBP,R14
0cb3198d  JC 0x0cb3199a
0cb3198f  MOV RAX,RBP
0cb31992  XOR EDX,EDX
0cb31994  DIV R14
0cb31997  MOV R15,RDX
0cb3199a  MOV RAX,qword ptr [RSP + 0x40]
0cb3199f  MOV RAX,qword ptr [RAX]
0cb319a2  MOV RAX,qword ptr [RAX + R15*0x8]
0cb319a6  TEST RAX,RAX
0cb319a9  JZ 0x0cb31a36
0cb319af  MOV RBX,qword ptr [RAX]
0cb319b2  TEST RBX,RBX
0cb319b5  JZ 0x0cb31a36
0cb319b7  MOV RAX,qword ptr [RSP + 0x48]
0cb319bc  MOV RCX,qword ptr [RAX]
0cb319bf  CMP ESI,0x2
0cb319c2  JNC 0x0cb319dc
0cb319c4  LEA RAX,[R14 + -0x1]
0cb319c8  JMP 0x0cb31a25
0cb319ca  CMP qword ptr [RBX + 0x10],RCX
0cb319ce  JZ 0x0cb31e35
0cb319d4  MOV RBX,qword ptr [RBX]
0cb319d7  TEST RBX,RBX
0cb319da  JZ 0x0cb31a36
0cb319dc  MOV RAX,qword ptr [RBX + 0x8]
0cb319e0  CMP RAX,RBP
0cb319e3  JZ 0x0cb319ca
0cb319e5  CMP RAX,R14
0cb319e8  JC 0x0cb319fe
0cb319ea  MOV RDX,RAX
0cb319ed  OR RDX,R14
0cb319f0  SHR RDX,0x20
0cb319f4  JZ 0x0cb31a05
0cb319f6  XOR EDX,EDX
0cb319f8  DIV R14
0cb319fb  MOV RAX,RDX
0cb319fe  CMP RAX,R15
0cb31a01  JZ 0x0cb319d4
0cb31a03  JMP 0x0cb31a36
0cb31a05  XOR EDX,EDX
0cb31a07  DIV R14D
0cb31a0a  MOV EAX,EDX
0cb31a0c  CMP RAX,R15
0cb31a0f  JZ 0x0cb319d4
0cb31a11  JMP 0x0cb31a36
0cb31a13  CMP qword ptr [RBX + 0x10],RCX
0cb31a17  JZ 0x0cb31e35
0cb31a1d  MOV RBX,qword ptr [RBX]
0cb31a20  TEST RBX,RBX
0cb31a23  JZ 0x0cb31a36
0cb31a25  MOV RDX,qword ptr [RBX + 0x8]
0cb31a29  CMP RDX,RBP
0cb31a2c  JZ 0x0cb31a13
0cb31a2e  AND RDX,RAX
0cb31a31  CMP RDX,R15
0cb31a34  JZ 0x0cb31a1d
0cb31a36  LEA RDI,[0xf5463b0]
0cb31a3d  MOV RAX,qword ptr [0x0f5463b0]
0cb31a44  MOV ESI,0x28
0cb31a49  CALL qword ptr [RAX + 0x10]
0cb31a4c  MOV RBX,RAX
0cb31a4f  TEST RAX,RAX
0cb31a52  JZ 0x0cb325fd
0cb31a58  MOV qword ptr [RSP + 0x50],RBX
0cb31a5d  MOV RAX,qword ptr [RSP + 0x40]
0cb31a62  MOV qword ptr [RSP + 0x58],RAX
0cb31a67  MOV qword ptr [RSP + 0x60],0x1
0cb31a70  MOV qword ptr [RBX],0x0
0cb31a77  MOV qword ptr [RBX + 0x8],RBP
0cb31a7b  MOV RAX,qword ptr [RSP + 0x48]
0cb31a80  MOV RAX,qword ptr [RAX]
0cb31a83  MOV qword ptr [RBX + 0x10],RAX
0cb31a87  XORPS XMM0,XMM0
0cb31a8a  MOVUPS xmmword ptr [RBX + 0x18],XMM0
0cb31a8e  MOV RAX,qword ptr [RSP + 0x30]
0cb31a93  MOV RAX,qword ptr [RAX + 0x30]
0cb31a97  INC RAX
0cb31a9a  JS 0x0cb31aa6
0cb31a9c  XORPS XMM0,XMM0
0cb31a9f  CVTSI2SS XMM0,RAX
0cb31aa4  JMP 0x0cb31abe
0cb31aa6  MOV RCX,RAX
0cb31aa9  SHR RCX,0x1
0cb31aac  AND EAX,0x1
0cb31aaf  OR RAX,RCX
0cb31ab2  XORPS XMM0,XMM0
0cb31ab5  CVTSI2SS XMM0,RAX
0cb31aba  ADDSS XMM0,XMM0
0cb31abe  MOV RCX,R14
0cb31ac1  SHR RCX,0x1
0cb31ac4  MOV EAX,R14D
0cb31ac7  AND EAX,0x1
0cb31aca  OR RAX,RCX
0cb31acd  TEST R14,R14
0cb31ad0  JS 0x0cb31ad9
0cb31ad2  CVTSI2SS XMM2,R14
0cb31ad7  JMP 0x0cb31ae2
0cb31ad9  CVTSI2SS XMM2,RAX
0cb31ade  ADDSS XMM2,XMM2
0cb31ae2  MOV RAX,qword ptr [RSP + 0x30]
0cb31ae7  MOVSS XMM1,dword ptr [RAX + 0x38]
0cb31aec  JZ 0x0cb31b04
0cb31aee  MULSS XMM2,XMM1
0cb31af2  UCOMISS XMM0,XMM2
0cb31af5  JA 0x0cb31b04
0cb31af7  MOV RBP,R15
0cb31afa  MOV RSI,qword ptr [RSP + 0x30]
0cb31aff  JMP 0x0cb31e13
0cb31b04  LEA RAX,[R14 + R14*0x1]
0cb31b08  MOV R15D,0x1
0cb31b0e  CMP R14,0x3
0cb31b12  JC 0x0cb31b22
0cb31b14  LEA RCX,[R14 + -0x1]
0cb31b18  XOR R15D,R15D
0cb31b1b  TEST R14,RCX
0cb31b1e  SETNZ R15B
0cb31b22  OR R15,RAX
0cb31b25  DIVSS XMM0,XMM1
0cb31b29  CALL 0x0eee3ab0
0cb31b2e  CVTTSS2SI RAX,XMM0
0cb31b33  MOV RCX,RAX
0cb31b36  SAR RCX,0x3f
0cb31b3a  SUBSS XMM0,dword ptr [0x01198778]
0cb31b42  CVTTSS2SI RDI,XMM0
0cb31b47  AND RDI,RCX
0cb31b4a  OR RDI,RAX
0cb31b4d  CMP R15,RDI
0cb31b50  CMOVA RDI,R15
0cb31b54  MOV R15D,0x2
0cb31b5a  CMP RDI,0x1
0cb31b5e  JZ 0x0cb31b7f
0cb31b60  LEA RAX,[RDI + -0x1]
0cb31b64  TEST RDI,RAX
0cb31b67  JNZ 0x0cb31b6e
0cb31b69  MOV R15,RDI
0cb31b6c  JMP 0x0cb31b7f
0cb31b6e  CALL 0x0412c3f0
0cb31b73  MOV R15,RAX
0cb31b76  MOV RAX,qword ptr [RSP + 0x30]
0cb31b7b  MOV R14,qword ptr [RAX + 0x20]
0cb31b7f  CMP R15,R14
0cb31b82  JBE 0x0cb31c91
0cb31b88  MOV RDI,R15
0cb31b8b  MOV RAX,RDI
0cb31b8e  SHR RAX,0x3d
0cb31b92  JNZ 0x0cb3261f
0cb31b98  MOV qword ptr [RSP + 0xa8],RDI
0cb31ba0  LEA RSI,[RDI*0x8]
0cb31ba8  LEA RDI,[0xf5463b0]
0cb31baf  MOV RAX,qword ptr [0x0f5463b0]
0cb31bb6  MOV qword ptr [RSP + 0x78],RSI
0cb31bbb  CALL qword ptr [RAX + 0x10]
0cb31bbe  MOV R15,RAX
0cb31bc1  TEST RAX,RAX
0cb31bc4  JZ 0x0cb3260e
0cb31bca  MOV qword ptr [RSP + 0xa0],RBP
0cb31bd2  MOV RAX,qword ptr [RSP + 0x40]
0cb31bd7  MOV RDI,qword ptr [RAX]
0cb31bda  MOV qword ptr [RAX],R15
0cb31bdd  TEST RDI,RDI
0cb31be0  MOV R14,qword ptr [RSP + 0x30]
0cb31be5  JZ 0x0cb31bf8
0cb31be7  MOV RSI,qword ptr [R14 + 0x20]
0cb31beb  SHL RSI,0x3
0cb31bef  CALL 0x0412a280
0cb31bf4  MOV R15,qword ptr [R14 + 0x18]
0cb31bf8  MOV RBP,qword ptr [RSP + 0xa8]
0cb31c00  MOV qword ptr [R14 + 0x20],RBP
0cb31c04  MOV RDI,R15
0cb31c07  XOR ESI,ESI
0cb31c09  MOV RDX,qword ptr [RSP + 0x78]
0cb31c0e  CALL 0x0eee2dd0
0cb31c13  MOV R8,RBP
0cb31c16  MOV RSI,qword ptr [R14 + 0x28]
0cb31c1a  TEST RSI,RSI
0cb31c1d  MOV RBP,qword ptr [RSP + 0xa0]
0cb31c25  JZ 0x0cb31dec
0cb31c2b  MOV RAX,qword ptr [RSP + 0x30]
0cb31c30  LEA RDI,[RAX + 0x28]
0cb31c34  MOV RCX,qword ptr [RSI + 0x8]
0cb31c38  LEA RAX,[R8 + -0x1]
0cb31c3c  TEST R8,RAX
0cb31c3f  JNZ 0x0cb31caf
0cb31c41  AND RCX,RAX
0cb31c44  MOV qword ptr [R15 + RCX*0x8],RDI
0cb31c48  JMP 0x0cb31c4d
0cb31c4a  MOV RSI,RDX
0cb31c4d  MOV RDX,qword ptr [RSI]
0cb31c50  TEST RDX,RDX
0cb31c53  JZ 0x0cb31dec
0cb31c59  MOV RDI,qword ptr [RDX + 0x8]
0cb31c5d  AND RDI,RAX
0cb31c60  CMP RDI,RCX
0cb31c63  JZ 0x0cb31c4a
0cb31c65  CMP qword ptr [R15 + RDI*0x8],0x0
0cb31c6a  JZ 0x0cb31c85
0cb31c6c  MOV R8,qword ptr [RDX]
0cb31c6f  MOV qword ptr [RSI],R8
0cb31c72  MOV R8,qword ptr [R15 + RDI*0x8]
0cb31c76  MOV R8,qword ptr [R8]
0cb31c79  MOV qword ptr [RDX],R8
0cb31c7c  MOV RDI,qword ptr [R15 + RDI*0x8]
0cb31c80  MOV qword ptr [RDI],RDX
0cb31c83  JMP 0x0cb31c4d
0cb31c85  MOV qword ptr [R15 + RDI*0x8],RSI
0cb31c89  MOV RSI,RDX
0cb31c8c  MOV RCX,RDI
0cb31c8f  JMP 0x0cb31c4d
0cb31c91  JNC 0x0cb31dec
0cb31c97  MOV RAX,qword ptr [RSP + 0x30]
0cb31c9c  MOV RAX,qword ptr [RAX + 0x30]
0cb31ca0  TEST RAX,RAX
0cb31ca3  JS 0x0cb31cd8
0cb31ca5  XORPS XMM0,XMM0
0cb31ca8  CVTSI2SS XMM0,RAX
0cb31cad  JMP 0x0cb31cf0
0cb31caf  CMP RCX,R8
0cb31cb2  JC 0x0cb32577
0cb31cb8  MOV RAX,RCX
0cb31cbb  OR RAX,R8
0cb31cbe  SHR RAX,0x20
0cb31cc2  JZ 0x0cb3256e
0cb31cc8  MOV RAX,RCX
0cb31ccb  XOR EDX,EDX
0cb31ccd  DIV R8
0cb31cd0  MOV RCX,RDX
0cb31cd3  JMP 0x0cb32577
0cb31cd8  MOV RCX,RAX
0cb31cdb  SHR RCX,0x1
0cb31cde  AND EAX,0x1
0cb31ce1  OR RAX,RCX
0cb31ce4  XORPS XMM0,XMM0
0cb31ce7  CVTSI2SS XMM0,RAX
0cb31cec  ADDSS XMM0,XMM0
0cb31cf0  MOV RAX,qword ptr [RSP + 0x30]
0cb31cf5  DIVSS XMM0,dword ptr [RAX + 0x38]
0cb31cfa  CALL 0x0eee3ab0
0cb31cff  CVTTSS2SI RAX,XMM0
0cb31d04  MOV RCX,RAX
0cb31d07  SUBSS XMM0,dword ptr [0x01198778]
0cb31d0f  CVTTSS2SI RDI,XMM0
0cb31d14  SAR RCX,0x3f
0cb31d18  AND RDI,RCX
0cb31d1b  OR RDI,RAX
0cb31d1e  CMP R14,0x3
0cb31d22  JC 0x0cb31da1
0cb31d24  MOV RAX,R14
0cb31d27  SHR RAX,0x1
0cb31d2a  MOV RCX,0x5555555555555555
0cb31d34  AND RAX,RCX
0cb31d37  MOV RCX,R14
0cb31d3a  SUB RCX,RAX
0cb31d3d  MOV RAX,RCX
0cb31d40  SHR RAX,0x2
0cb31d44  MOV RDX,0x3333333333333333
0cb31d4e  AND RCX,RDX
0cb31d51  AND RAX,RDX
0cb31d54  ADD RAX,RCX
0cb31d57  MOV RCX,RAX
0cb31d5a  SHR RCX,0x4
0cb31d5e  ADD RCX,RAX
0cb31d61  MOV RAX,0xf0f0f0f0f0f0f0f
0cb31d6b  AND RCX,RAX
0cb31d6e  MOV RAX,0x101010101010101
0cb31d78  IMUL RCX,RAX
0cb31d7c  SHR RCX,0x38
0cb31d80  CMP ECX,0x1
0cb31d83  JA 0x0cb31da1
0cb31d85  CMP RDI,0x2
0cb31d89  JC 0x0cb31da9
0cb31d8b  DEC RDI
0cb31d8e  BSR RCX,RDI
0cb31d92  XOR ECX,0x3f
0cb31d95  NEG CL
0cb31d97  MOV EDI,0x1
0cb31d9c  SHL RDI,CL
0cb31d9f  JMP 0x0cb31da9
0cb31da1  CALL 0x0412c3f0
0cb31da6  MOV RDI,RAX
0cb31da9  CMP R15,RDI
0cb31dac  CMOVA RDI,R15
0cb31db0  CMP RDI,R14
0cb31db3  JNC 0x0cb31dec
0cb31db5  TEST RDI,RDI
0cb31db8  JNZ 0x0cb31b8b
0cb31dbe  MOV RAX,qword ptr [RSP + 0x40]
0cb31dc3  MOV RDI,qword ptr [RAX]
0cb31dc6  MOV qword ptr [RAX],0x0
0cb31dcd  TEST RDI,RDI
0cb31dd0  MOV R14,qword ptr [RSP + 0x30]
0cb31dd5  JZ 0x0cb31de4
0cb31dd7  MOV RSI,qword ptr [R14 + 0x20]
0cb31ddb  SHL RSI,0x3
0cb31ddf  CALL 0x0412a280
0cb31de4  MOV qword ptr [R14 + 0x20],0x0
0cb31dec  MOV RSI,qword ptr [RSP + 0x30]
0cb31df1  MOV R14,qword ptr [RSI + 0x20]
0cb31df5  LEA RAX,[R14 + -0x1]
0cb31df9  TEST R14,RAX
0cb31dfc  JNZ 0x0cb31e03
0cb31dfe  AND RBP,RAX
0cb31e01  JMP 0x0cb31e13
0cb31e03  CMP RBP,R14
0cb31e06  JC 0x0cb31e13
0cb31e08  MOV RAX,RBP
0cb31e0b  XOR EDX,EDX
0cb31e0d  DIV R14
0cb31e10  MOV RBP,RDX
0cb31e13  MOV RAX,qword ptr [RSP + 0x40]
0cb31e18  MOV RCX,qword ptr [RAX]
0cb31e1b  MOV RAX,qword ptr [RCX + RBP*0x8]
0cb31e1f  TEST RAX,RAX
0cb31e22  JZ 0x0cb32435
0cb31e28  MOV RCX,qword ptr [RAX]
0cb31e2b  MOV qword ptr [RBX],RCX
0cb31e2e  MOV qword ptr [RAX],RBX
0cb31e31  INC qword ptr [RSI + 0x30]
0cb31e35  LEA RBP,[R12 + 0x18]
0cb31e3a  INC.LOCK qword ptr [R12 + 0x8]
0cb31e40  MOV qword ptr [RBX + 0x18],RBP
0cb31e44  MOV R14,qword ptr [RBX + 0x20]
0cb31e48  MOV qword ptr [RBX + 0x20],R12
0cb31e4c  TEST R14,R14
0cb31e4f  JZ 0x0cb31e74
0cb31e51  MOV RAX,-0x1
0cb31e58  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb31e5e  TEST RAX,RAX
0cb31e61  JNZ 0x0cb31e74
0cb31e63  MOV RAX,qword ptr [R14]
0cb31e66  MOV RDI,R14
0cb31e69  CALL qword ptr [RAX + 0x10]
0cb31e6c  MOV RDI,R14
0cb31e6f  CALL 0x0412c2d0
0cb31e74  MOV RAX,R12
0cb31e77  ADD RAX,0x40
0cb31e7b  MOV qword ptr [RSP + 0x30],RAX
0cb31e80  MOV RCX,qword ptr [RSP + 0x68]
0cb31e85  MOV EAX,dword ptr [RCX + 0x50]
0cb31e88  DEC EAX
0cb31e8a  MOV dword ptr [RSP],EAX
0cb31e8d  MOV EAX,dword ptr [RCX + 0x54]
0cb31e90  MOV R15,RSP
0cb31e93  JMP 0x0cb31eb8
0cb31ea0  MOV RCX,qword ptr [RSP + 0x48]
0cb31ea5  MOV ECX,dword ptr [RCX]
0cb31ea7  MOV EDX,dword ptr [RSP]
0cb31eaa  LEA ESI,[RDX + 0x1]
0cb31ead  MOV dword ptr [RSP],ESI
0cb31eb0  CMP EDX,ECX
0cb31eb2  JG 0x0cb32075
0cb31eb8  DEC EAX
0cb31eba  MOV dword ptr [RSP + 0x4],EAX
0cb31ebe  JMP 0x0cb31ed7
0cb31ec0  MOV ECX,dword ptr [RSP + 0x4]
0cb31ec4  LEA EAX,[RCX + 0x1]
0cb31ec7  MOV dword ptr [RSP + 0x4],EAX
0cb31ecb  MOV RAX,qword ptr [RSP + 0x68]
0cb31ed0  MOV EAX,dword ptr [RAX + 0x54]
0cb31ed3  CMP ECX,EAX
0cb31ed5  JG 0x0cb31ea0
0cb31ed7  MOV RSI,qword ptr [RSP + 0x8]
0cb31edc  MOV RAX,qword ptr [RSI]
0cb31edf  LEA RDI,[RSP + 0x50]
0cb31ee4  MOV RDX,R15
0cb31ee7  CALL qword ptr [RAX + 0x20]
0cb31eea  MOV RBX,qword ptr [RSP + 0x50]
0cb31eef  TEST RBX,RBX
0cb31ef2  JZ 0x0cb3202d
0cb31ef8  MOV R14,qword ptr [RSP + 0x58]
0cb31efd  TEST R14,R14
0cb31f00  JZ 0x0cb31f07
0cb31f02  INC.LOCK qword ptr [R14 + 0x10]
0cb31f07  MOV RAX,qword ptr [R12 + 0x40]
0cb31f0c  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
0cb31f13  JZ 0x0cb31f5a
0cb31f15  MOV ECX,0xbb8
0cb31f1a  JMP 0x0cb31f35
0cb31f20  CALL 0x0eee35d0
0cb31f25  XOR ECX,ECX
0cb31f27  MOV RAX,qword ptr [R12 + 0x40]
0cb31f2c  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
0cb31f33  JZ 0x0cb31f5a
0cb31f35  CMP RAX,R13
0cb31f38  JNZ 0x0cb31f46
0cb31f3a  MOV EAX,dword ptr [R12 + 0x48]
0cb31f3f  INC EAX
0cb31f41  CMP EAX,-0x1
0cb31f44  JNZ 0x0cb31f5f
0cb31f46  TEST ECX,ECX
0cb31f48  JZ 0x0cb31f20
0cb31f4a  DEC ECX
0cb31f4c  MOV RAX,qword ptr [R12 + 0x40]
0cb31f51  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
0cb31f58  JNZ 0x0cb31f35
0cb31f5a  MOV EAX,0x1
0cb31f5f  MOV dword ptr [R12 + 0x48],EAX
0cb31f64  MOV qword ptr [RSP + 0x88],R15
0cb31f6c  MOV RDI,RBP
0cb31f6f  MOV RSI,R15
0cb31f72  LEA RDX,[0x1563a4f]
0cb31f79  LEA RCX,[RSP + 0x88]
0cb31f81  LEA R8,[RSP + 0x2f]
0cb31f86  CALL 0x0caaf3d0
0cb31f8b  TEST R14,R14
0cb31f8e  JZ 0x0cb31f95
0cb31f90  INC.LOCK qword ptr [R14 + 0x10]
0cb31f95  MOV qword ptr [RAX + 0x18],RBX
0cb31f99  MOV RDI,qword ptr [RAX + 0x20]
0cb31f9d  MOV qword ptr [RAX + 0x20],R14
0cb31fa1  TEST RDI,RDI
0cb31fa4  JZ 0x0cb31fab
0cb31fa6  CALL 0x0412c2d0
0cb31fab  MOV RAX,qword ptr [R12 + 0x50]
0cb31fb0  CMP RAX,R13
0cb31fb3  JNZ 0x0cb31fc7
0cb31fb5  MOV EAX,dword ptr [R12 + 0x48]
0cb31fba  CMP EAX,0x1
0cb31fbd  JZ 0x0cb32005
0cb31fbf  TEST EAX,EAX
0cb31fc1  JNZ 0x0cb32067
0cb31fc7  LEA RDI,[0x1239425]
0cb31fce  LEA RSI,[0x1198d5e]
0cb31fd5  MOV EDX,0x6d
0cb31fda  LEA RCX,[0x126e3df]
0cb31fe1  LEA R8,[0x121f006]
0cb31fe8  XOR EAX,EAX
0cb31fea  CALL 0x0eeddcf0
0cb31fef  TEST AL,AL
0cb31ff1  JZ 0x0cb32020
0cb31ff3  MOV dword ptr [0x00000000],0xdeadc0de
0cb31ffe  TEST R14,R14
0cb32001  JNZ 0x0cb32025
0cb32003  JMP 0x0cb3202d
0cb32005  MOV dword ptr [R12 + 0x48],0x0
0cb3200e  MOV RAX,qword ptr [R12 + 0x40]
0cb32013  MOV qword ptr [R12 + 0x50],RAX
0cb32018  NOP dword ptr [RAX + RAX*0x1]
0cb32020  TEST R14,R14
0cb32023  JZ 0x0cb3202d
0cb32025  MOV RDI,R14
0cb32028  CALL 0x0412c2d0
0cb3202d  MOV R14,qword ptr [RSP + 0x58]
0cb32032  TEST R14,R14
0cb32035  JZ 0x0cb31ec0
0cb3203b  MOV RAX,-0x1
0cb32042  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb32048  TEST RAX,RAX
0cb3204b  JNZ 0x0cb31ec0
0cb32051  MOV RAX,qword ptr [R14]
0cb32054  MOV RDI,R14
0cb32057  CALL qword ptr [RAX + 0x10]
0cb3205a  MOV RDI,R14
0cb3205d  CALL 0x0412c2d0
0cb32062  JMP 0x0cb31ec0
0cb32067  DEC EAX
0cb32069  MOV dword ptr [R12 + 0x48],EAX
0cb3206e  TEST R14,R14
0cb32071  JNZ 0x0cb32025
0cb32073  JMP 0x0cb3202d
0cb32075  LEA EDX,[RCX + -0x1]
0cb32078  MOV dword ptr [RSP],EDX
0cb3207b  LEA RBX,[RSP + 0x88]
0cb32083  MOV EBP,0x9e3779b9
0cb32088  JMP 0x0cb320aa
0cb32090  MOV EDX,dword ptr [RSP]
0cb32093  MOV RCX,qword ptr [RSP + 0x48]
0cb32098  MOV ECX,dword ptr [RCX]
0cb3209a  LEA ESI,[RDX + 0x1]
0cb3209d  MOV dword ptr [RSP],ESI
0cb320a0  CMP EDX,ECX
0cb320a2  MOV EDX,ESI
0cb320a4  JG 0x0cb323d6
0cb320aa  LEA ESI,[RAX + -0x1]
0cb320ad  MOV dword ptr [RSP + 0x4],ESI
0cb320b1  MOV RDI,qword ptr [RSP + 0x8]
0cb320b6  MOV RDI,qword ptr [RDI + 0x40]
0cb320ba  CMP qword ptr [RDI + 0x20],0x0
0cb320bf  JNZ 0x0cb320f7
0cb320c1  LEA EDI,[RAX + 0x1]
0cb320c4  CMP ESI,EDI
0cb320c6  CMOVG EDI,ESI
0cb320c9  INC EDI
0cb320cb  MOV dword ptr [RSP + 0x4],EDI
0cb320cf  JMP 0x0cb3209a
0cb320e0  MOV ECX,dword ptr [RSP + 0x4]
0cb320e4  LEA ESI,[RCX + 0x1]
0cb320e7  MOV dword ptr [RSP + 0x4],ESI
0cb320eb  MOV RAX,qword ptr [RSP + 0x68]
0cb320f0  MOV EAX,dword ptr [RAX + 0x54]
0cb320f3  CMP ECX,EAX
0cb320f5  JG 0x0cb32090
0cb320f7  MOV RAX,qword ptr [RSP + 0x8]
0cb320fc  MOV R8,qword ptr [RAX + 0x40]
0cb32100  MOV RDI,qword ptr [R8 + 0x20]
0cb32104  TEST RDI,RDI
0cb32107  JZ 0x0cb320e0
0cb32109  MOVSXD RAX,dword ptr [RSP]
0cb3210d  ADD RAX,RBP
0cb32110  MOVSXD RCX,ESI
0cb32113  MOV RDX,RAX
0cb32116  SHL RDX,0x6
0cb3211a  MOV RSI,RAX
0cb3211d  SHR RSI,0x2
0cb32121  ADD RCX,RBP
0cb32124  ADD RCX,RDX
0cb32127  ADD RCX,RSI
0cb3212a  XOR RCX,RAX
0cb3212d  MOV RAX,RDI
0cb32130  SHR RAX,0x1
0cb32133  MOV RDX,0x5555555555555555
0cb3213d  AND RAX,RDX
0cb32140  MOV RDX,RDI
0cb32143  SUB RDX,RAX
0cb32146  MOV RAX,RDX
0cb32149  MOV RSI,0x3333333333333333
0cb32153  AND RAX,RSI
0cb32156  SHR RDX,0x2
0cb3215a  AND RDX,RSI
0cb3215d  ADD RDX,RAX
0cb32160  MOV R10,RDX
0cb32163  SHR R10,0x4
0cb32167  ADD R10,RDX
0cb3216a  MOV RAX,0xf0f0f0f0f0f0f0f
0cb32174  AND R10,RAX
0cb32177  MOV RAX,0x101010101010101
0cb32181  IMUL R10,RAX
0cb32185  SHR R10,0x38
0cb32189  CMP R10,0x1
0cb3218d  JA 0x0cb321a0
0cb3218f  LEA RSI,[RDI + -0x1]
0cb32193  AND RSI,RCX
0cb32196  JMP 0x0cb321b3
0cb321a0  MOV RSI,RCX
0cb321a3  CMP RCX,RDI
0cb321a6  JC 0x0cb321b3
0cb321a8  MOV RAX,RCX
0cb321ab  XOR EDX,EDX
0cb321ad  DIV RDI
0cb321b0  MOV RSI,RDX
0cb321b3  MOV RAX,qword ptr [R8 + 0x18]
0cb321b7  MOV RAX,qword ptr [RAX + RSI*0x8]
0cb321bb  TEST RAX,RAX
0cb321be  JZ 0x0cb320e0
0cb321c4  MOV R8,qword ptr [RAX]
0cb321c7  TEST R8,R8
0cb321ca  JZ 0x0cb320e0
0cb321d0  MOV R9,qword ptr [RSP]
0cb321d4  CMP R10D,0x2
0cb321d8  JNC 0x0cb321f2
0cb321da  DEC RDI
0cb321dd  JMP 0x0cb32242
0cb321e0  CMP qword ptr [R8 + 0x10],R9
0cb321e4  JZ 0x0cb32258
0cb321e6  MOV R8,qword ptr [R8]
0cb321e9  TEST R8,R8
0cb321ec  JZ 0x0cb320e0
0cb321f2  MOV RAX,qword ptr [R8 + 0x8]
0cb321f6  CMP RAX,RCX
0cb321f9  JZ 0x0cb321e0
0cb321fb  CMP RAX,RDI
0cb321fe  JC 0x0cb32214
0cb32200  MOV RDX,RAX
0cb32203  OR RDX,RDI
0cb32206  SHR RDX,0x20
0cb3220a  JZ 0x0cb3221e
0cb3220c  XOR EDX,EDX
0cb3220e  DIV RDI
0cb32211  MOV RAX,RDX
0cb32214  CMP RAX,RSI
0cb32217  JZ 0x0cb321e6
0cb32219  JMP 0x0cb320e0
0cb3221e  XOR EDX,EDX
0cb32220  DIV EDI
0cb32222  MOV EAX,EDX
0cb32224  CMP RAX,RSI
0cb32227  JZ 0x0cb321e6
0cb32229  JMP 0x0cb320e0
0cb32230  CMP qword ptr [R8 + 0x10],R9
0cb32234  JZ 0x0cb32258
0cb32236  MOV R8,qword ptr [R8]
0cb32239  TEST R8,R8
0cb3223c  JZ 0x0cb320e0
0cb32242  MOV RAX,qword ptr [R8 + 0x8]
0cb32246  CMP RAX,RCX
0cb32249  JZ 0x0cb32230
0cb3224b  AND RAX,RDI
0cb3224e  CMP RAX,RSI
0cb32251  JZ 0x0cb32236
0cb32253  JMP 0x0cb320e0
0cb32258  MOV R14,qword ptr [R8 + 0x18]
0cb3225c  TEST R14,R14
0cb3225f  JZ 0x0cb320e0
0cb32265  MOV R15,qword ptr [RSP + 0x98]
0cb3226d  MOVAPS XMM0,xmmword ptr [RSP + 0x90]
0cb32275  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0cb3227a  TEST R15,R15
0cb3227d  JZ 0x0cb32284
0cb3227f  INC.LOCK qword ptr [R15 + 0x10]
0cb32284  MOV RAX,qword ptr [R14 + 0x28]
0cb32288  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
0cb3228e  JNZ 0x0cb32346
0cb32294  MOV dword ptr [R14 + 0x30],0x1
0cb3229c  LEA RBP,[R14 + 0x28]
0cb322a0  MOV RSI,qword ptr [RSP + 0x48]
0cb322a5  MOV qword ptr [RSP + 0x50],RSI
0cb322aa  MOV RDI,R14
0cb322ad  LEA RDX,[0x1563a4f]
0cb322b4  LEA RCX,[RSP + 0x50]
0cb322b9  MOV R8,RBX
0cb322bc  CALL 0x0caaf3d0
0cb322c1  TEST R15,R15
0cb322c4  JZ 0x0cb322cb
0cb322c6  INC.LOCK qword ptr [R15 + 0x10]
0cb322cb  MOV RDI,qword ptr [RAX + 0x20]
0cb322cf  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
0cb322d4  MOVUPS xmmword ptr [RAX + 0x18],XMM0
0cb322d8  TEST RDI,RDI
0cb322db  MOV EBP,0x9e3779b9
0cb322e0  JZ 0x0cb322e7
0cb322e2  CALL 0x0412c2d0
0cb322e7  MOV RAX,qword ptr [R14 + 0x38]
0cb322eb  CMP RAX,R13
0cb322ee  JNZ 0x0cb32305
0cb322f0  MOV EAX,dword ptr [R14 + 0x30]
0cb322f4  CMP EAX,0x1
0cb322f7  JZ 0x0cb323a0
0cb322fd  TEST EAX,EAX
0cb322ff  JNZ 0x0cb323c6
0cb32305  LEA RDI,[0x1239425]
0cb3230c  LEA RSI,[0x1198d5e]
0cb32313  MOV EDX,0x6d
0cb32318  LEA RCX,[0x126e3df]
0cb3231f  LEA R8,[0x121f006]
0cb32326  XOR EAX,EAX
0cb32328  CALL 0x0eeddcf0
0cb3232d  TEST AL,AL
0cb3232f  JZ 0x0cb323b0
0cb32331  MOV dword ptr [0x00000000],0xdeadc0de
0cb3233c  TEST R15,R15
0cb3233f  JNZ 0x0cb323b9
0cb32341  JMP 0x0cb320e0
0cb32346  MOV ECX,0xbb8
0cb3234b  JMP 0x0cb32387
0cb32350  TEST ECX,ECX
0cb32352  JZ 0x0cb32370
0cb32354  DEC ECX
0cb32356  MOV RAX,qword ptr [R14 + 0x28]
0cb3235a  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
0cb32360  JNZ 0x0cb32387
0cb32362  JMP 0x0cb32294
0cb32370  CALL 0x0eee35d0
0cb32375  XOR ECX,ECX
0cb32377  MOV RAX,qword ptr [R14 + 0x28]
0cb3237b  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
0cb32381  JZ 0x0cb32294
0cb32387  CMP RAX,R13
0cb3238a  JNZ 0x0cb32350
0cb3238c  MOV EAX,dword ptr [R14 + 0x30]
0cb32390  INC EAX
0cb32392  CMP EAX,-0x1
0cb32395  JZ 0x0cb32350
0cb32397  MOV dword ptr [R14 + 0x30],EAX
0cb3239b  JMP 0x0cb3229c
0cb323a0  MOV dword ptr [R14 + 0x30],0x0
0cb323a8  MOV RAX,qword ptr [R14 + 0x28]
0cb323ac  MOV qword ptr [R14 + 0x38],RAX
0cb323b0  TEST R15,R15
0cb323b3  JZ 0x0cb320e0
0cb323b9  MOV RDI,R15
0cb323bc  CALL 0x0412c2d0
0cb323c1  JMP 0x0cb320e0
0cb323c6  DEC EAX
0cb323c8  MOV dword ptr [R14 + 0x30],EAX
0cb323cc  TEST R15,R15
0cb323cf  JNZ 0x0cb323b9
0cb323d1  JMP 0x0cb320e0
0cb323d6  MOV RCX,qword ptr [RSP + 0x70]
0cb323db  MOV RAX,qword ptr [RCX + 0x10]
0cb323df  CMP RAX,R13
0cb323e2  MOV RBX,qword ptr [RSP + 0xb0]
0cb323ea  JNZ 0x0cb323fc
0cb323ec  MOV EAX,dword ptr [RCX + 0x8]
0cb323ef  CMP EAX,0x1
0cb323f2  JZ 0x0cb32471
0cb323f4  TEST EAX,EAX
0cb323f6  JNZ 0x0cb32481
0cb323fc  LEA RDI,[0x1239425]
0cb32403  LEA RSI,[0x1198d5e]
0cb3240a  LEA RCX,[0x126e3df]
0cb32411  LEA R8,[0x121f006]
0cb32418  MOV EDX,0x6d
0cb3241d  XOR EAX,EAX
0cb3241f  CALL 0x0eeddcf0
0cb32424  TEST AL,AL
0cb32426  JZ 0x0cb32486
0cb32428  MOV dword ptr [0x00000000],0xdeadc0de
0cb32433  JMP 0x0cb32486
0cb32435  LEA RAX,[RSI + 0x28]
0cb32439  MOV RDX,qword ptr [RSI + 0x28]
0cb3243d  MOV qword ptr [RBX],RDX
0cb32440  MOV qword ptr [RSI + 0x28],RBX
0cb32444  MOV qword ptr [RCX + RBP*0x8],RAX
0cb32448  MOV RAX,qword ptr [RBX]
0cb3244b  TEST RAX,RAX
0cb3244e  JZ 0x0cb31e31
0cb32454  MOV RAX,qword ptr [RAX + 0x8]
0cb32458  LEA RDX,[R14 + -0x1]
0cb3245c  TEST R14,RDX
0cb3245f  JNZ 0x0cb3253c
0cb32465  AND RAX,RDX
0cb32468  MOV qword ptr [RCX + RAX*0x8],RBX
0cb3246c  JMP 0x0cb31e31
0cb32471  MOV dword ptr [RCX + 0x8],0x0
0cb32478  MOV RAX,qword ptr [RCX]
0cb3247b  MOV qword ptr [RCX + 0x10],RAX
0cb3247f  JMP 0x0cb32486
0cb32481  DEC EAX
0cb32483  MOV dword ptr [RCX + 0x8],EAX
0cb32486  MOV RAX,-0x1
0cb3248d  MOV RCX,qword ptr [RSP + 0x80]
0cb32495  XADD.LOCK qword ptr [RCX],RAX
0cb3249a  TEST RAX,RAX
0cb3249d  JNZ 0x0cb324b1
0cb3249f  MOV RAX,qword ptr [R12]
0cb324a3  MOV RDI,R12
0cb324a6  CALL qword ptr [RAX + 0x10]
0cb324a9  MOV RDI,R12
0cb324ac  CALL 0x0412c2d0
0cb324b1  TEST RBX,RBX
0cb324b4  JZ 0x0cb324d9
0cb324b6  MOV RAX,-0x1
0cb324bd  XADD.LOCK qword ptr [RBX + 0x8],RAX
0cb324c3  TEST RAX,RAX
0cb324c6  JNZ 0x0cb324d9
0cb324c8  MOV RAX,qword ptr [RBX]
0cb324cb  MOV RDI,RBX
0cb324ce  CALL qword ptr [RAX + 0x10]
0cb324d1  MOV RDI,RBX
0cb324d4  CALL 0x0412c2d0
0cb324d9  MOV RAX,qword ptr [RSP + 0x10]
0cb324de  MOVZX EAX,byte ptr [RAX + 0xb8]
0cb324e5  TEST AL,AL
0cb324e7  MOV R15,qword ptr [RSP + 0xc0]
0cb324ef  MOV RSI,qword ptr [RSP + 0xb8]
0cb324f7  JZ 0x0cb3250e
0cb324f9  MOV RAX,qword ptr [RSP + 0x10]
0cb324fe  MOV RSI,qword ptr [RAX + 0x50]
0cb32502  MOV RDI,qword ptr [RSP + 0x8]
0cb32507  CALL 0x0cb2f260
0cb3250c  JMP 0x0cb3251e
0cb3250e  MOV RAX,qword ptr [RSP + 0x8]
0cb32513  MOV RDI,qword ptr [RAX + 0x40]
0cb32517  XOR EDX,EDX
0cb32519  CALL 0x0cb30ba0
0cb3251e  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0cb32523  MOVUPS xmmword ptr [R15],XMM0
0cb32527  MOV RAX,R15
0cb3252a  ADD RSP,0xc8
0cb32531  POP RBX
0cb32532  POP R12
0cb32534  POP R13
0cb32536  POP R14
0cb32538  POP R15
0cb3253a  POP RBP
0cb3253b  RET
0cb3253c  CMP RAX,R14
0cb3253f  JC 0x0cb32555
0cb32541  MOV RDX,RAX
0cb32544  OR RDX,R14
0cb32547  SHR RDX,0x20
0cb3254b  JZ 0x0cb3255e
0cb3254d  XOR EDX,EDX
0cb3254f  DIV R14
0cb32552  MOV RAX,RDX
0cb32555  MOV qword ptr [RCX + RAX*0x8],RBX
0cb32559  JMP 0x0cb31e31
0cb3255e  XOR EDX,EDX
0cb32560  DIV R14D
0cb32563  MOV EAX,EDX
0cb32565  MOV qword ptr [RCX + RAX*0x8],RBX
0cb32569  JMP 0x0cb31e31
0cb3256e  MOV EAX,ECX
0cb32570  XOR EDX,EDX
0cb32572  DIV R8D
0cb32575  MOV ECX,EDX
0cb32577  MOV qword ptr [R15 + RCX*0x8],RDI
0cb3257b  MOV RDI,qword ptr [RSI]
0cb3257e  JMP 0x0cb325a6
0cb32580  MOV RDX,qword ptr [RDI]
0cb32583  MOV qword ptr [RSI],RDX
0cb32586  MOV RDX,qword ptr [R15 + RAX*0x8]
0cb3258a  MOV RDX,qword ptr [RDX]
0cb3258d  MOV qword ptr [RDI],RDX
0cb32590  MOV RAX,qword ptr [R15 + RAX*0x8]
0cb32594  MOV qword ptr [RAX],RDI
0cb32597  MOV RDI,RSI
0cb3259a  MOV RAX,RCX
0cb3259d  MOV RSI,RDI
0cb325a0  MOV RDI,qword ptr [RDI]
0cb325a3  MOV RCX,RAX
0cb325a6  TEST RDI,RDI
0cb325a9  JZ 0x0cb31dec
0cb325af  MOV RAX,qword ptr [RDI + 0x8]
0cb325b3  CMP RAX,R8
0cb325b6  JC 0x0cb325cc
0cb325b8  MOV RDX,RAX
0cb325bb  OR RDX,R8
0cb325be  SHR RDX,0x20
0cb325c2  JZ 0x0cb325de
0cb325c4  XOR EDX,EDX
0cb325c6  DIV R8
0cb325c9  MOV RAX,RDX
0cb325cc  CMP RAX,RCX
0cb325cf  JZ 0x0cb3259a
0cb325d1  CMP qword ptr [R15 + RAX*0x8],0x0
0cb325d6  JNZ 0x0cb32580
0cb325d8  MOV qword ptr [R15 + RAX*0x8],RSI
0cb325dc  JMP 0x0cb3259d
0cb325de  XOR EDX,EDX
0cb325e0  DIV R8D
0cb325e3  MOV EAX,EDX
0cb325e5  CMP RAX,RCX
0cb325e8  JZ 0x0cb3259a
0cb325ea  JMP 0x0cb325d1
0cb325ec  MOV EDI,0x58
0cb325f1  XOR ESI,ESI
0cb325f3  CALL 0x0eec74c0
0cb325f8  JMP 0x0cb3176c
0cb325fd  MOV EDI,0x28
0cb32602  XOR ESI,ESI
0cb32604  CALL 0x0eec74c0
0cb32609  JMP 0x0cb31a58
0cb3260e  MOV RDI,qword ptr [RSP + 0x78]
0cb32613  XOR ESI,ESI
0cb32615  CALL 0x0eec74c0
0cb3261a  JMP 0x0cb31bca
0cb3261f  CALL 0x04882eb0
0cb32624  MOV RDI,RAX
0cb32627  CALL 0x04882e20
0cb3262c  MOV RBX,RAX
0cb3262f  LEA RDI,[RSP + 0x50]
0cb32634  CALL 0x0cb57b80
0cb32639  JMP 0x0cb326c2
0cb326c2  MOV RDI,qword ptr [RSP + 0x70]
0cb326c7  CALL 0x0eee0720
0cb326cc  MOV RAX,-0x1
0cb326d3  MOV RCX,qword ptr [RSP + 0x80]
0cb326db  XADD.LOCK qword ptr [RCX],RAX
0cb326e0  TEST RAX,RAX
0cb326e3  JNZ 0x0cb326f7
0cb326e5  MOV RAX,qword ptr [R12]
0cb326e9  MOV RDI,R12
0cb326ec  CALL qword ptr [RAX + 0x10]
0cb326ef  MOV RDI,R12
0cb326f2  CALL 0x0412c2d0
0cb326f7  LEA RDI,[RSP + 0x90]
0cb326ff  CALL 0x04a7efb0
0cb32704  LEA RDI,[RSP + 0x10]
0cb32709  CALL 0x04a7efb0
0cb3270e  MOV RDI,RBX
0cb32711  CALL 0x0eee2d70
0cb32716  MOV RDI,RAX
0cb32719  CALL 0x04882e20
0cb3271e  INT3
```

## `0cb32720` — WorldGenerator slot 10

- Ghidra name: `FUN_0cb32720`
- Body: `[[0cb32720, 0cb32722]]`

### Pseudocode

```c

undefined1 FUN_0cb32720(void)

{
  return 1;
}


```

### Assembly

```asm
0cb32720  MOV AL,0x1
0cb32722  RET
```

## `0cb32730` — WorldGenerator slot 11

- Ghidra name: `FUN_0cb32730`
- Body: `[[0cb32730, 0cb32732]]`

### Pseudocode

```c

undefined1 FUN_0cb32730(void)

{
  return 1;
}


```

### Assembly

```asm
0cb32730  MOV AL,0x1
0cb32732  RET
```

## `0cb32740` — WorldGenerator slot 12

- Ghidra name: `FUN_0cb32740`
- Body: `[[0cb32740, 0cb32740]]`

### Pseudocode

```c

void FUN_0cb32740(void)

{
  return;
}


```

### Assembly

```asm
0cb32740  RET
```

## `0cb32750` — WorldGenerator slot 13

- Ghidra name: `FUN_0cb32750`
- Body: `[[0cb32750, 0cb32752]]`

### Pseudocode

```c

undefined8 FUN_0cb32750(void)

{
  return 0;
}


```

### Assembly

```asm
0cb32750  XOR EAX,EAX
0cb32752  RET
```

## `0cb32760` — WorldGenerator slot 14

- Ghidra name: `FUN_0cb32760`
- Body: `[[0cb32760, 0cb32760]]`

### Pseudocode

```c

void FUN_0cb32760(void)

{
  return;
}


```

### Assembly

```asm
0cb32760  RET
```

## `0cb32770` — WorldGenerator slot 15

- Ghidra name: `FUN_0cb32770`
- Body: `[[0cb32770, 0cb32785]]`

### Pseudocode

```c

void FUN_0cb32770(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2,param_3);
    return;
  }
  return;
}


```

### Assembly

```asm
0cb32770  MOV RDI,qword ptr [RDI + 0x30]
0cb32774  TEST RDI,RDI
0cb32777  JZ 0x0cb32785
0cb32779  MOV RAX,qword ptr [RDI]
0cb3277c  MOV RAX,qword ptr [RAX + 0x78]
0cb32780  MOVZX EDX,DL
0cb32783  JMP RAX
0cb32785  RET
```

## `0ca73030` — WorldGenerator slot 16

- Ghidra name: `FUN_0ca73030`
- Body: `[[0ca73030, 0ca73059] [0ca73060, 0ca7309f]]`

### Pseudocode

```c

void FUN_0ca73030(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  for (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30); puVar4 != puVar1;
      puVar4 = puVar4 + 1) {
    plVar2 = (long *)*puVar4;
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (cVar3 != '\0') {
      func_0x0d351430(plVar2,param_2,param_3,param_4,param_5);
    }
  }
  return;
}


```

### Assembly

```asm
0ca73030  PUSH RBP
0ca73031  PUSH R15
0ca73033  PUSH R14
0ca73035  PUSH R13
0ca73037  PUSH R12
0ca73039  PUSH RBX
0ca7303a  PUSH RAX
0ca7303b  MOV qword ptr [RSP],R8
0ca7303f  MOV RAX,qword ptr [RDI + 0x78]
0ca73043  MOV R13,qword ptr [RAX + 0x30]
0ca73047  MOV RBX,qword ptr [RAX + 0x38]
0ca7304b  CMP R13,RBX
0ca7304e  JZ 0x0ca73091
0ca73050  MOV EBP,ECX
0ca73052  MOV R14D,EDX
0ca73055  MOV R15,RSI
0ca73058  JMP 0x0ca73069
0ca73060  ADD R13,0x8
0ca73064  CMP R13,RBX
0ca73067  JZ 0x0ca73091
0ca73069  MOV R12,qword ptr [R13]
0ca7306d  MOV RAX,qword ptr [R12]
0ca73071  MOV RDI,R12
0ca73074  CALL qword ptr [RAX + 0x18]
0ca73077  TEST AL,AL
0ca73079  JZ 0x0ca73060
0ca7307b  MOV RDI,R12
0ca7307e  MOV RSI,R15
0ca73081  MOV EDX,R14D
0ca73084  MOV ECX,EBP
0ca73086  MOV R8,qword ptr [RSP]
0ca7308a  CALL 0x0d351430
0ca7308f  JMP 0x0ca73060
0ca73091  ADD RSP,0x8
0ca73095  POP RBX
0ca73096  POP R12
0ca73098  POP R13
0ca7309a  POP R14
0ca7309c  POP R15
0ca7309e  POP RBP
0ca7309f  RET
```

## `0ca730a0` — WorldGenerator slot 17

- Ghidra name: `FUN_0ca730a0`
- Body: `[[0ca730a0, 0ca730fe] [0ca73100, 0ca73113] [0ca73120, 0ca73165] [0ca73170, 0ca732d1]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca730a0(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  char cVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 **ppuStack_88;
  uint uStack_80;
  ulong uStack_7c;
  uint uStack_74;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  uStack_70 = param_2;
  func_0x0d2d30f0(&puStack_48,*(long *)(param_1 + 0x78) + 0x48);
  puStack_58 = puStack_40;
  puVar22 = puStack_48;
  if (puStack_48 != puStack_40) {
    do {
      plVar13 = (long *)puVar22[1];
      for (plVar21 = (long *)*puVar22; plVar21 != plVar13; plVar21 = plVar21 + 2) {
        lVar14 = *plVar21;
        if ((((*(int *)(lVar14 + 0x18) <= (int)param_3[3]) &&
             ((int)*param_3 <= *(int *)(lVar14 + 0x24))) &&
            (*(int *)(lVar14 + 0x20) <= (int)param_3[5])) &&
           ((((int)param_3[2] <= *(int *)(lVar14 + 0x2c) &&
             (*(int *)(lVar14 + 0x1c) <= (int)param_3[4])) &&
            ((int)param_3[1] <= *(int *)(lVar14 + 0x28))))) {
          plVar15 = *(long **)(lVar14 + 0x40);
          for (plVar19 = *(long **)(lVar14 + 0x38); plVar19 != plVar15; plVar19 = plVar19 + 1) {
            if (*plVar19 == 0) {
              cVar17 = func_0x0eeddcf0(&UNK_01458338,&UNK_01388cf1,0x51,&UNK_013d7966,&UNK_013024d7)
              ;
              if (cVar17 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            puVar16 = (uint *)*plVar19;
            uVar1 = param_3[3];
            uVar2 = *puVar16;
            if ((int)uVar2 <= (int)uVar1) {
              uVar3 = *param_3;
              uVar4 = puVar16[3];
              if ((int)uVar3 <= (int)uVar4) {
                uVar5 = param_3[5];
                uVar6 = puVar16[2];
                if ((int)uVar6 <= (int)uVar5) {
                  uVar7 = param_3[2];
                  uVar8 = puVar16[5];
                  if ((int)uVar7 <= (int)uVar8) {
                    uVar9 = param_3[4];
                    uStack_68 = (ulong)uVar9;
                    uVar10 = puVar16[1];
                    uStack_60 = (ulong)uVar10;
                    if ((int)uVar10 <= (int)uVar9) {
                      uVar11 = param_3[1];
                      uVar12 = puVar16[4];
                      if ((int)uVar11 <= (int)uVar12) {
                        if ((int)uVar2 < (int)uVar3) {
                          uVar2 = uVar3;
                        }
                        uVar18 = uStack_60;
                        if ((int)uVar10 < (int)uVar11) {
                          uVar18 = (ulong)uVar11;
                        }
                        uStack_80 = uVar6;
                        if ((int)uVar6 < (int)uVar7) {
                          uStack_80 = uVar7;
                        }
                        if ((int)uVar4 < (int)uVar1) {
                          uVar1 = uVar4;
                        }
                        uVar20 = uStack_68;
                        if ((int)uVar12 < (int)uVar9) {
                          uVar20 = (ulong)uVar12;
                        }
                        uStack_74 = uVar5;
                        if ((int)uVar8 < (int)uVar5) {
                          uStack_74 = uVar8;
                        }
                        uStack_7c = (ulong)uVar1 | uVar20 << 0x20;
                        ppuStack_88 = (undefined8 **)
                                      ((ulong)uVar2 & 0xff |
                                      (ulong)(uVar2 & 0xffffff00) | uVar18 << 0x20);
                        (**(code **)(**(long **)(puVar16 + 6) + 0x50))
                                  (*(long **)(puVar16 + 6),uStack_70,*(undefined8 *)(puVar16 + 10),
                                   puVar16[0xc],(char)puVar16[9],&ppuStack_88);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puStack_58);
  }
  ppuStack_88 = &puStack_48;
  func_0x0ca7b460(&ppuStack_88);
  return;
}


```

### Assembly

```asm
0ca730a0  PUSH RBP
0ca730a1  PUSH R15
0ca730a3  PUSH R14
0ca730a5  PUSH R13
0ca730a7  PUSH R12
0ca730a9  PUSH RBX
0ca730aa  SUB RSP,0x68
0ca730ae  MOV RBX,RDX
0ca730b1  MOV qword ptr [RSP + 0x28],RSI
0ca730b6  MOV RSI,qword ptr [RDI + 0x78]
0ca730ba  ADD RSI,0x48
0ca730be  LEA RDI,[RSP + 0x50]
0ca730c3  CALL 0x0d2d30f0
0ca730c8  MOV R14,qword ptr [RSP + 0x50]
0ca730cd  MOV RAX,qword ptr [RSP + 0x58]
0ca730d2  MOV qword ptr [RSP + 0x40],RAX
0ca730d7  CMP R14,RAX
0ca730da  JNZ 0x0ca7310b
0ca730dc  LEA RAX,[RSP + 0x50]
0ca730e1  MOV qword ptr [RSP + 0x10],RAX
0ca730e6  LEA RDI,[RSP + 0x10]
0ca730eb  CALL 0x0ca7b460
0ca730f0  ADD RSP,0x68
0ca730f4  POP RBX
0ca730f5  POP R12
0ca730f7  POP R13
0ca730f9  POP R14
0ca730fb  POP R15
0ca730fd  POP RBP
0ca730fe  RET
0ca73100  ADD R14,0x18
0ca73104  CMP R14,qword ptr [RSP + 0x40]
0ca73109  JZ 0x0ca730dc
0ca7310b  MOV R12,qword ptr [R14]
0ca7310e  MOV R13,qword ptr [R14 + 0x8]
0ca73112  JMP 0x0ca73124
0ca73120  ADD R12,0x10
0ca73124  CMP R12,R13
0ca73127  JZ 0x0ca73100
0ca73129  MOV RAX,qword ptr [R12]
0ca7312d  MOV ECX,dword ptr [RBX + 0xc]
0ca73130  CMP ECX,dword ptr [RAX + 0x18]
0ca73133  JL 0x0ca73120
0ca73135  MOV ECX,dword ptr [RBX]
0ca73137  CMP ECX,dword ptr [RAX + 0x24]
0ca7313a  JG 0x0ca73120
0ca7313c  MOV ECX,dword ptr [RBX + 0x14]
0ca7313f  CMP ECX,dword ptr [RAX + 0x20]
0ca73142  JL 0x0ca73120
0ca73144  MOV ECX,dword ptr [RBX + 0x8]
0ca73147  CMP ECX,dword ptr [RAX + 0x2c]
0ca7314a  JG 0x0ca73120
0ca7314c  MOV ECX,dword ptr [RBX + 0x10]
0ca7314f  CMP ECX,dword ptr [RAX + 0x1c]
0ca73152  JL 0x0ca73120
0ca73154  MOV ECX,dword ptr [RBX + 0x4]
0ca73157  CMP ECX,dword ptr [RAX + 0x28]
0ca7315a  JG 0x0ca73120
0ca7315c  MOV RBP,qword ptr [RAX + 0x38]
0ca73160  MOV R15,qword ptr [RAX + 0x40]
0ca73164  JMP 0x0ca73174
0ca73170  ADD RBP,0x8
0ca73174  CMP RBP,R15
0ca73177  JZ 0x0ca73120
0ca73179  CMP qword ptr [RBP],0x0
0ca7317e  JNZ 0x0ca731c0
0ca73180  LEA RDI,[0x1458338]
0ca73187  LEA RSI,[0x1388cf1]
0ca7318e  MOV EDX,0x51
0ca73193  LEA RCX,[0x13d7966]
0ca7319a  LEA R8,[0x13024d7]
0ca731a1  XOR EAX,EAX
0ca731a3  CALL 0x0eeddcf0
0ca731a8  TEST AL,AL
0ca731aa  JZ 0x0ca731c0
0ca731ac  MOV dword ptr [0x00000000],0xdeadc0de
0ca731b7  NOP word ptr [RAX + RAX*0x1]
0ca731c0  MOV RSI,qword ptr [RBP]
0ca731c4  MOV EAX,dword ptr [RBX + 0xc]
0ca731c7  MOV R9D,dword ptr [RSI]
0ca731ca  CMP EAX,R9D
0ca731cd  JL 0x0ca73170
0ca731cf  MOV EDX,dword ptr [RBX]
0ca731d1  MOV ECX,dword ptr [RSI + 0xc]
0ca731d4  CMP EDX,ECX
0ca731d6  JG 0x0ca73170
0ca731d8  MOV R10D,dword ptr [RBX + 0x14]
0ca731dc  MOV R11D,dword ptr [RSI + 0x8]
0ca731e0  CMP R10D,R11D
0ca731e3  JL 0x0ca73170
0ca731e5  MOV R8D,dword ptr [RBX + 0x8]
0ca731e9  MOV EDI,dword ptr [RSI + 0x14]
0ca731ec  MOV dword ptr [RSP],R8D
0ca731f0  CMP R8D,EDI
0ca731f3  JG 0x0ca73170
0ca731f9  MOV dword ptr [RSP + 0xc],EDI
0ca731fd  MOV EDI,dword ptr [RBX + 0x10]
0ca73200  MOV qword ptr [RSP + 0x30],RDI
0ca73205  MOV R8D,dword ptr [RSI + 0x4]
0ca73209  MOV qword ptr [RSP + 0x38],R8
0ca7320e  CMP EDI,R8D
0ca73211  JL 0x0ca73170
0ca73217  MOV R8D,dword ptr [RBX + 0x4]
0ca7321b  MOV EDI,dword ptr [RSI + 0x10]
0ca7321e  MOV dword ptr [RSP + 0x8],EDI
0ca73222  MOV dword ptr [RSP + 0x4],R8D
0ca73227  CMP R8D,EDI
0ca7322a  MOV EDI,dword ptr [RSP + 0xc]
0ca7322e  JG 0x0ca73170
0ca73234  CMP EDX,R9D
0ca73237  CMOVG R9D,EDX
0ca7323b  MOV RDX,qword ptr [RSP + 0x38]
0ca73240  MOV R8D,dword ptr [RSP + 0x4]
0ca73245  CMP R8D,EDX
0ca73248  CMOVG EDX,R8D
0ca7324c  MOV R8D,dword ptr [RSP]
0ca73250  CMP R8D,R11D
0ca73253  CMOVG R11D,R8D
0ca73257  SHL RDX,0x20
0ca7325b  CMP ECX,EAX
0ca7325d  CMOVL EAX,ECX
0ca73260  MOV ECX,dword ptr [RSP + 0x8]
0ca73264  MOV R8,qword ptr [RSP + 0x30]
0ca73269  CMP ECX,R8D
0ca7326c  CMOVL R8D,ECX
0ca73270  CMP EDI,R10D
0ca73273  CMOVL R10D,EDI
0ca73277  SHL R8,0x20
0ca7327b  OR RAX,R8
0ca7327e  MOV ECX,R9D
0ca73281  AND ECX,0xffffff00
0ca73287  OR RCX,RDX
0ca7328a  MOV RDI,qword ptr [RSI + 0x18]
0ca7328e  MOV RDX,qword ptr [RSI + 0x28]
0ca73292  MOV R8D,dword ptr [RSI + 0x30]
0ca73296  MOV dword ptr [RSP],R8D
0ca7329a  MOVZX R8D,byte ptr [RSI + 0x24]
0ca7329f  MOVZX ESI,R9B
0ca732a3  OR RSI,RCX
0ca732a6  MOV qword ptr [RSP + 0x10],RSI
0ca732ab  MOV dword ptr [RSP + 0x18],R11D
0ca732b0  MOV qword ptr [RSP + 0x1c],RAX
0ca732b5  MOV dword ptr [RSP + 0x24],R10D
0ca732ba  MOV RAX,qword ptr [RDI]
0ca732bd  MOV RSI,qword ptr [RSP + 0x28]
0ca732c2  MOV ECX,dword ptr [RSP]
0ca732c5  LEA R9,[RSP + 0x10]
0ca732ca  CALL qword ptr [RAX + 0x50]
0ca732cd  JMP 0x0ca73170
```

## `0cb32f20` — WorldGenerator slot 18

- Ghidra name: `FUN_0cb32f20`
- Body: `[[0cb32f20, 0cb330df]]`

### Pseudocode

```c

void FUN_0cb32f20(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_80;
  ulong uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long alStack_48 [4];
  long *plStack_28;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lStack_80 = *param_2;
  *param_2 = 0;
  uStack_78 = param_2[1];
  param_2[1] = 0;
  plStack_70 = (long *)param_2[2];
  lStack_68 = param_2[3];
  uStack_60 = (undefined4)param_2[4];
  if (lStack_68 != 0) {
    uVar4 = plStack_70[1];
    if ((uStack_78 & uStack_78 - 1) == 0) {
      uVar4 = uVar4 & uStack_78 - 1;
    }
    else if (uStack_78 <= uVar4) {
      if ((uVar4 | uStack_78) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (uStack_78 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 % uStack_78;
      }
    }
    *(long ***)(lStack_80 + uVar4 * 8) = &plStack_70;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    plStack_28 = (long *)0x0;
  }
  else if (plVar2 == param_3) {
    plStack_28 = alStack_48;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    param_3[4] = 0;
    plStack_28 = plVar2;
  }
  uStack_58 = *param_4;
  plStack_50 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  (**(code **)(*plVar1 + 0x90))(plVar1,&lStack_80,alStack_48,&uStack_58);
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar1);
    }
  }
  if (plStack_28 == alStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    lVar3 = lStack_80;
    plVar1 = plStack_70;
    if (plStack_28 == (long *)0x0) goto joined_r0x0cb330dc;
  }
  (**(code **)(*plStack_28 + lVar5))();
  lVar3 = lStack_80;
  plVar1 = plStack_70;
joined_r0x0cb330dc:
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    lStack_80 = lVar3;
    func_0x0412a280(plVar1,0x18);
    lVar3 = lStack_80;
    plVar1 = plVar2;
  }
  lStack_80 = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,uStack_78 << 3);
  }
  return;
}


```

### Assembly

```asm
0cb32f20  PUSH R14
0cb32f22  PUSH RBX
0cb32f23  SUB RSP,0x78
0cb32f27  MOV RDI,qword ptr [RDI + 0x30]
0cb32f2b  TEST RDI,RDI
0cb32f2e  JZ 0x0cb330a6
0cb32f34  MOV R8,qword ptr [RSI]
0cb32f37  MOV qword ptr [RSI],0x0
0cb32f3e  MOV qword ptr [RSP + 0x8],R8
0cb32f43  MOV R10,qword ptr [RSI + 0x8]
0cb32f47  MOV qword ptr [RSP + 0x10],R10
0cb32f4c  MOV qword ptr [RSI + 0x8],0x0
0cb32f54  MOV RAX,qword ptr [RSI + 0x10]
0cb32f58  MOV qword ptr [RSP + 0x18],RAX
0cb32f5d  MOV R9,qword ptr [RSI + 0x18]
0cb32f61  MOV qword ptr [RSP + 0x20],R9
0cb32f66  MOVSS XMM0,dword ptr [RSI + 0x20]
0cb32f6b  MOVSS dword ptr [RSP + 0x28],XMM0
0cb32f71  TEST R9,R9
0cb32f74  JZ 0x0cb32fc3
0cb32f76  LEA R9,[RSP + 0x18]
0cb32f7b  ADD RSI,0x10
0cb32f7f  MOV RAX,qword ptr [RAX + 0x8]
0cb32f83  LEA R11,[R10 + -0x1]
0cb32f87  TEST R10,R11
0cb32f8a  JNZ 0x0cb32f91
0cb32f8c  AND RAX,R11
0cb32f8f  JMP 0x0cb32fb9
0cb32f91  CMP RAX,R10
0cb32f94  JC 0x0cb32fb9
0cb32f96  MOV R11,RDX
0cb32f99  MOV RDX,RAX
0cb32f9c  OR RDX,R10
0cb32f9f  SHR RDX,0x20
0cb32fa3  JZ 0x0cb32faf
0cb32fa5  XOR EDX,EDX
0cb32fa7  DIV R10
0cb32faa  MOV RAX,RDX
0cb32fad  JMP 0x0cb32fb6
0cb32faf  XOR EDX,EDX
0cb32fb1  DIV R10D
0cb32fb4  MOV EAX,EDX
0cb32fb6  MOV RDX,R11
0cb32fb9  MOV qword ptr [R8 + RAX*0x8],R9
0cb32fbd  XORPS XMM0,XMM0
0cb32fc0  MOVUPS xmmword ptr [RSI],XMM0
0cb32fc3  MOV RAX,qword ptr [RDX + 0x20]
0cb32fc7  TEST RAX,RAX
0cb32fca  JZ 0x0cb32fe0
0cb32fcc  CMP RAX,RDX
0cb32fcf  JZ 0x0cb32feb
0cb32fd1  MOV qword ptr [RSP + 0x60],RAX
0cb32fd6  MOV qword ptr [RDX + 0x20],0x0
0cb32fde  JMP 0x0cb3300a
0cb32fe0  MOV qword ptr [RSP + 0x60],0x0
0cb32fe9  JMP 0x0cb3300a
0cb32feb  LEA RSI,[RSP + 0x40]
0cb32ff0  MOV qword ptr [RSP + 0x60],RSI
0cb32ff5  MOV RDX,qword ptr [RAX]
0cb32ff8  MOV RBX,RDI
0cb32ffb  MOV RDI,RAX
0cb32ffe  MOV R14,RCX
0cb33001  CALL qword ptr [RDX + 0x18]
0cb33004  MOV RCX,R14
0cb33007  MOV RDI,RBX
0cb3300a  MOVUPS XMM0,xmmword ptr [RCX]
0cb3300d  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0cb33012  XORPS XMM0,XMM0
0cb33015  MOVUPS xmmword ptr [RCX],XMM0
0cb33018  MOV RAX,qword ptr [RDI]
0cb3301b  LEA RSI,[RSP + 0x8]
0cb33020  LEA RBX,[RSP + 0x40]
0cb33025  LEA RCX,[RSP + 0x30]
0cb3302a  MOV RDX,RBX
0cb3302d  CALL qword ptr [RAX + 0x90]
0cb33033  MOV R14,qword ptr [RSP + 0x38]
0cb33038  TEST R14,R14
0cb3303b  JZ 0x0cb3304f
0cb3303d  MOV RAX,-0x1
0cb33044  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3304a  TEST RAX,RAX
0cb3304d  JZ 0x0cb330ae
0cb3304f  MOV RDI,qword ptr [RSP + 0x60]
0cb33054  CMP RDI,RBX
0cb33057  JZ 0x0cb330c9
0cb33059  MOV EAX,0x28
0cb3305e  TEST RDI,RDI
0cb33061  JNZ 0x0cb330ce
0cb33063  MOV RDI,qword ptr [RSP + 0x18]
0cb33068  TEST RDI,RDI
0cb3306b  JZ 0x0cb33085
0cb3306d  NOP dword ptr [RAX]
0cb33070  MOV RBX,qword ptr [RDI]
0cb33073  MOV ESI,0x18
0cb33078  CALL 0x0412a280
0cb3307d  MOV RDI,RBX
0cb33080  TEST RBX,RBX
0cb33083  JNZ 0x0cb33070
0cb33085  MOV RDI,qword ptr [RSP + 0x8]
0cb3308a  MOV qword ptr [RSP + 0x8],0x0
0cb33093  TEST RDI,RDI
0cb33096  JZ 0x0cb330a6
0cb33098  MOV RSI,qword ptr [RSP + 0x10]
0cb3309d  SHL RSI,0x3
0cb330a1  CALL 0x0412a280
0cb330a6  ADD RSP,0x78
0cb330aa  POP RBX
0cb330ab  POP R14
0cb330ad  RET
0cb330ae  MOV RAX,qword ptr [R14]
0cb330b1  MOV RDI,R14
0cb330b4  CALL qword ptr [RAX + 0x10]
0cb330b7  MOV RDI,R14
0cb330ba  CALL 0x0412c2d0
0cb330bf  MOV RDI,qword ptr [RSP + 0x60]
0cb330c4  CMP RDI,RBX
0cb330c7  JNZ 0x0cb33059
0cb330c9  MOV EAX,0x20
0cb330ce  MOV RCX,qword ptr [RDI]
0cb330d1  CALL qword ptr [RCX + RAX*0x1]
0cb330d4  MOV RDI,qword ptr [RSP + 0x18]
0cb330d9  TEST RDI,RDI
0cb330dc  JNZ 0x0cb33070
0cb330de  JMP 0x0cb33085
```

## `0cb33130` — WorldGenerator slot 19

- Ghidra name: `FUN_0cb33130`
- Body: `[[0cb33130, 0cb332ef]]`

### Pseudocode

```c

void FUN_0cb33130(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_80;
  ulong uStack_78;
  long *plStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long alStack_48 [4];
  long *plStack_28;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lStack_80 = *param_2;
  *param_2 = 0;
  uStack_78 = param_2[1];
  param_2[1] = 0;
  plStack_70 = (long *)param_2[2];
  lStack_68 = param_2[3];
  uStack_60 = (undefined4)param_2[4];
  if (lStack_68 != 0) {
    uVar4 = plStack_70[1];
    if ((uStack_78 & uStack_78 - 1) == 0) {
      uVar4 = uVar4 & uStack_78 - 1;
    }
    else if (uStack_78 <= uVar4) {
      if ((uVar4 | uStack_78) >> 0x20 == 0) {
        uVar4 = (uVar4 & 0xffffffff) % (uStack_78 & 0xffffffff);
      }
      else {
        uVar4 = uVar4 % uStack_78;
      }
    }
    *(long ***)(lStack_80 + uVar4 * 8) = &plStack_70;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    plStack_28 = (long *)0x0;
  }
  else if (plVar2 == param_3) {
    plStack_28 = alStack_48;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    param_3[4] = 0;
    plStack_28 = plVar2;
  }
  uStack_58 = *param_4;
  plStack_50 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  (**(code **)(*plVar1 + 0x98))(plVar1,&lStack_80,alStack_48,&uStack_58);
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar1);
    }
  }
  if (plStack_28 == alStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    lVar3 = lStack_80;
    plVar1 = plStack_70;
    if (plStack_28 == (long *)0x0) goto joined_r0x0cb332ec;
  }
  (**(code **)(*plStack_28 + lVar5))();
  lVar3 = lStack_80;
  plVar1 = plStack_70;
joined_r0x0cb332ec:
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    lStack_80 = lVar3;
    func_0x0412a280(plVar1,0x18);
    lVar3 = lStack_80;
    plVar1 = plVar2;
  }
  lStack_80 = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,uStack_78 << 3);
  }
  return;
}


```

### Assembly

```asm
0cb33130  PUSH R14
0cb33132  PUSH RBX
0cb33133  SUB RSP,0x78
0cb33137  MOV RDI,qword ptr [RDI + 0x30]
0cb3313b  TEST RDI,RDI
0cb3313e  JZ 0x0cb332b6
0cb33144  MOV R8,qword ptr [RSI]
0cb33147  MOV qword ptr [RSI],0x0
0cb3314e  MOV qword ptr [RSP + 0x8],R8
0cb33153  MOV R10,qword ptr [RSI + 0x8]
0cb33157  MOV qword ptr [RSP + 0x10],R10
0cb3315c  MOV qword ptr [RSI + 0x8],0x0
0cb33164  MOV RAX,qword ptr [RSI + 0x10]
0cb33168  MOV qword ptr [RSP + 0x18],RAX
0cb3316d  MOV R9,qword ptr [RSI + 0x18]
0cb33171  MOV qword ptr [RSP + 0x20],R9
0cb33176  MOVSS XMM0,dword ptr [RSI + 0x20]
0cb3317b  MOVSS dword ptr [RSP + 0x28],XMM0
0cb33181  TEST R9,R9
0cb33184  JZ 0x0cb331d3
0cb33186  LEA R9,[RSP + 0x18]
0cb3318b  ADD RSI,0x10
0cb3318f  MOV RAX,qword ptr [RAX + 0x8]
0cb33193  LEA R11,[R10 + -0x1]
0cb33197  TEST R10,R11
0cb3319a  JNZ 0x0cb331a1
0cb3319c  AND RAX,R11
0cb3319f  JMP 0x0cb331c9
0cb331a1  CMP RAX,R10
0cb331a4  JC 0x0cb331c9
0cb331a6  MOV R11,RDX
0cb331a9  MOV RDX,RAX
0cb331ac  OR RDX,R10
0cb331af  SHR RDX,0x20
0cb331b3  JZ 0x0cb331bf
0cb331b5  XOR EDX,EDX
0cb331b7  DIV R10
0cb331ba  MOV RAX,RDX
0cb331bd  JMP 0x0cb331c6
0cb331bf  XOR EDX,EDX
0cb331c1  DIV R10D
0cb331c4  MOV EAX,EDX
0cb331c6  MOV RDX,R11
0cb331c9  MOV qword ptr [R8 + RAX*0x8],R9
0cb331cd  XORPS XMM0,XMM0
0cb331d0  MOVUPS xmmword ptr [RSI],XMM0
0cb331d3  MOV RAX,qword ptr [RDX + 0x20]
0cb331d7  TEST RAX,RAX
0cb331da  JZ 0x0cb331f0
0cb331dc  CMP RAX,RDX
0cb331df  JZ 0x0cb331fb
0cb331e1  MOV qword ptr [RSP + 0x60],RAX
0cb331e6  MOV qword ptr [RDX + 0x20],0x0
0cb331ee  JMP 0x0cb3321a
0cb331f0  MOV qword ptr [RSP + 0x60],0x0
0cb331f9  JMP 0x0cb3321a
0cb331fb  LEA RSI,[RSP + 0x40]
0cb33200  MOV qword ptr [RSP + 0x60],RSI
0cb33205  MOV RDX,qword ptr [RAX]
0cb33208  MOV RBX,RDI
0cb3320b  MOV RDI,RAX
0cb3320e  MOV R14,RCX
0cb33211  CALL qword ptr [RDX + 0x18]
0cb33214  MOV RCX,R14
0cb33217  MOV RDI,RBX
0cb3321a  MOVUPS XMM0,xmmword ptr [RCX]
0cb3321d  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0cb33222  XORPS XMM0,XMM0
0cb33225  MOVUPS xmmword ptr [RCX],XMM0
0cb33228  MOV RAX,qword ptr [RDI]
0cb3322b  LEA RSI,[RSP + 0x8]
0cb33230  LEA RBX,[RSP + 0x40]
0cb33235  LEA RCX,[RSP + 0x30]
0cb3323a  MOV RDX,RBX
0cb3323d  CALL qword ptr [RAX + 0x98]
0cb33243  MOV R14,qword ptr [RSP + 0x38]
0cb33248  TEST R14,R14
0cb3324b  JZ 0x0cb3325f
0cb3324d  MOV RAX,-0x1
0cb33254  XADD.LOCK qword ptr [R14 + 0x8],RAX
0cb3325a  TEST RAX,RAX
0cb3325d  JZ 0x0cb332be
0cb3325f  MOV RDI,qword ptr [RSP + 0x60]
0cb33264  CMP RDI,RBX
0cb33267  JZ 0x0cb332d9
0cb33269  MOV EAX,0x28
0cb3326e  TEST RDI,RDI
0cb33271  JNZ 0x0cb332de
0cb33273  MOV RDI,qword ptr [RSP + 0x18]
0cb33278  TEST RDI,RDI
0cb3327b  JZ 0x0cb33295
0cb3327d  NOP dword ptr [RAX]
0cb33280  MOV RBX,qword ptr [RDI]
0cb33283  MOV ESI,0x18
0cb33288  CALL 0x0412a280
0cb3328d  MOV RDI,RBX
0cb33290  TEST RBX,RBX
0cb33293  JNZ 0x0cb33280
0cb33295  MOV RDI,qword ptr [RSP + 0x8]
0cb3329a  MOV qword ptr [RSP + 0x8],0x0
0cb332a3  TEST RDI,RDI
0cb332a6  JZ 0x0cb332b6
0cb332a8  MOV RSI,qword ptr [RSP + 0x10]
0cb332ad  SHL RSI,0x3
0cb332b1  CALL 0x0412a280
0cb332b6  ADD RSP,0x78
0cb332ba  POP RBX
0cb332bb  POP R14
0cb332bd  RET
0cb332be  MOV RAX,qword ptr [R14]
0cb332c1  MOV RDI,R14
0cb332c4  CALL qword ptr [RAX + 0x10]
0cb332c7  MOV RDI,R14
0cb332ca  CALL 0x0412c2d0
0cb332cf  MOV RDI,qword ptr [RSP + 0x60]
0cb332d4  CMP RDI,RBX
0cb332d7  JNZ 0x0cb33269
0cb332d9  MOV EAX,0x20
0cb332de  MOV RCX,qword ptr [RDI]
0cb332e1  CALL qword ptr [RCX + RAX*0x1]
0cb332e4  MOV RDI,qword ptr [RSP + 0x18]
0cb332e9  TEST RDI,RDI
0cb332ec  JNZ 0x0cb33280
0cb332ee  JMP 0x0cb33295
```

## `0cb33340` — WorldGenerator slot 20

- Ghidra name: `FUN_0cb33340`
- Body: `[[0cb33340, 0cb33357]]`

### Pseudocode

```c

undefined8 FUN_0cb33340(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))();
    return uVar1;
  }
  return 0;
}


```

### Assembly

```asm
0cb33340  MOV RDI,qword ptr [RDI + 0x30]
0cb33344  TEST RDI,RDI
0cb33347  JZ 0x0cb33355
0cb33349  MOV RAX,qword ptr [RDI]
0cb3334c  MOV RAX,qword ptr [RAX + 0xa0]
0cb33353  JMP RAX
0cb33355  XOR EAX,EAX
0cb33357  RET
```

## `0cb33360` — WorldGenerator slot 21

- Ghidra name: `FUN_0cb33360`
- Body: `[[0cb33360, 0cb33375]]`

### Pseudocode

```c

void FUN_0cb33360(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb33360  MOV RDI,qword ptr [RDI + 0x30]
0cb33364  TEST RDI,RDI
0cb33367  JZ 0x0cb33375
0cb33369  MOV RAX,qword ptr [RDI]
0cb3336c  MOV RAX,qword ptr [RAX + 0xa8]
0cb33373  JMP RAX
0cb33375  RET
```

## `0cb33380` — WorldGenerator slot 22

- Ghidra name: `FUN_0cb33380`
- Body: `[[0cb33380, 0cb33395]]`

### Pseudocode

```c

void FUN_0cb33380(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb33393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb33380  MOV RDI,qword ptr [RDI + 0x30]
0cb33384  TEST RDI,RDI
0cb33387  JZ 0x0cb33395
0cb33389  MOV RAX,qword ptr [RDI]
0cb3338c  MOV RAX,qword ptr [RAX + 0xb0]
0cb33393  JMP RAX
0cb33395  RET
```

## `0cb333a0` — WorldGenerator slot 23

- Ghidra name: `FUN_0cb333a0`
- Body: `[[0cb333a0, 0cb333b5]]`

### Pseudocode

```c

void FUN_0cb333a0(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb333b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb8))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb333a0  MOV RDI,qword ptr [RDI + 0x30]
0cb333a4  TEST RDI,RDI
0cb333a7  JZ 0x0cb333b5
0cb333a9  MOV RAX,qword ptr [RDI]
0cb333ac  MOV RAX,qword ptr [RAX + 0xb8]
0cb333b3  JMP RAX
0cb333b5  RET
```

## `0cb32790` — WorldGenerator slot 24

- Ghidra name: `FUN_0cb32790`
- Body: `[[0cb32790, 0cb327a2]]`

### Pseudocode

```c

void FUN_0cb32790(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xc0))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb32790  MOV RDI,qword ptr [RDI + 0x30]
0cb32794  TEST RDI,RDI
0cb32797  JZ 0x0cb327a2
0cb32799  MOV RAX,qword ptr [RDI]
0cb3279c  JMP qword ptr [RAX + 0xc0]
0cb327a2  RET
```

## `0cb327b0` — WorldGenerator slot 25

- Ghidra name: `FUN_0cb327b0`
- Body: `[[0cb327b0, 0cb327c2]]`

### Pseudocode

```c

void FUN_0cb327b0(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 200))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb327b0  MOV RDI,qword ptr [RDI + 0x30]
0cb327b4  TEST RDI,RDI
0cb327b7  JZ 0x0cb327c2
0cb327b9  MOV RAX,qword ptr [RDI]
0cb327bc  JMP qword ptr [RAX + 0xc8]
0cb327c2  RET
```

## `0cb32c90` — WorldGenerator slot 26

- Ghidra name: `FUN_0cb32c90`
- Body: `[[0cb32c90, 0cb32d17]]`

### Pseudocode

```c

void FUN_0cb32c90(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_18;
  
  func_0x0cb327d0(param_1,*param_2 + 0x50,1);
  (**(code **)(**(long **)(*param_2 + 0x28) + 0x9f0))();
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    lStack_18 = *param_2;
    *param_2 = 0;
    (**(code **)(*plVar1 + 0xd0))(plVar1,&lStack_18);
    lVar2 = lStack_18;
    lStack_18 = 0;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      func_0x0cadbac0(lVar2);
      func_0x0412a280(lVar2,0x18b0);
    }
  }
  return;
}


```

### Assembly

```asm
0cb32c90  PUSH R14
0cb32c92  PUSH RBX
0cb32c93  PUSH RAX
0cb32c94  MOV RBX,RSI
0cb32c97  MOV R14,RDI
0cb32c9a  MOV RSI,qword ptr [RSI]
0cb32c9d  ADD RSI,0x50
0cb32ca1  MOV EDX,0x1
0cb32ca6  CALL 0x0cb327d0
0cb32cab  MOV RAX,qword ptr [RBX]
0cb32cae  MOV RDI,qword ptr [RAX + 0x28]
0cb32cb2  MOV RAX,qword ptr [RDI]
0cb32cb5  CALL qword ptr [RAX + 0x9f0]
0cb32cbb  MOV RDI,qword ptr [R14 + 0x30]
0cb32cbf  TEST RDI,RDI
0cb32cc2  JZ 0x0cb32d10
0cb32cc4  MOV RAX,qword ptr [RBX]
0cb32cc7  MOV qword ptr [RBX],0x0
0cb32cce  MOV qword ptr [RSP],RAX
0cb32cd2  MOV RAX,qword ptr [RDI]
0cb32cd5  MOV RSI,RSP
0cb32cd8  CALL qword ptr [RAX + 0xd0]
0cb32cde  MOV RBX,qword ptr [RSP]
0cb32ce2  MOV qword ptr [RSP],0x0
0cb32cea  TEST RBX,RBX
0cb32ced  JZ 0x0cb32d10
0cb32cef  MOV RAX,qword ptr [RBX + 0x30]
0cb32cf3  DEC.LOCK qword ptr [RAX + 0x370]
0cb32cfb  MOV RDI,RBX
0cb32cfe  CALL 0x0cadbac0
0cb32d03  MOV ESI,0x18b0
0cb32d08  MOV RDI,RBX
0cb32d0b  CALL 0x0412a280
0cb32d10  ADD RSP,0x8
0cb32d14  POP RBX
0cb32d15  POP R14
0cb32d17  RET
```

## `0cb333c0` — WorldGenerator slot 27

- Ghidra name: `FUN_0cb333c0`
- Body: `[[0cb333c0, 0cb333d2]]`

### Pseudocode

```c

void FUN_0cb333c0(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb333cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xd8))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb333c0  MOV RDI,qword ptr [RDI + 0x30]
0cb333c4  TEST RDI,RDI
0cb333c7  JZ 0x0cb333d2
0cb333c9  MOV RAX,qword ptr [RDI]
0cb333cc  JMP qword ptr [RAX + 0xd8]
0cb333d2  RET
```

## `0cb32d30` — WorldGenerator slot 28

- Ghidra name: `FUN_0cb32d30`
- Body: `[[0cb32d30, 0cb32d42]]`

### Pseudocode

```c

void FUN_0cb32d30(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe0))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb32d30  MOV RDI,qword ptr [RDI + 0x30]
0cb32d34  TEST RDI,RDI
0cb32d37  JZ 0x0cb32d42
0cb32d39  MOV RAX,qword ptr [RDI]
0cb32d3c  JMP qword ptr [RAX + 0xe0]
0cb32d42  RET
```

## `0cb32d50` — WorldGenerator slot 29

- Ghidra name: `FUN_0cb32d50`
- Body: `[[0cb32d50, 0cb32d62]]`

### Pseudocode

```c

void FUN_0cb32d50(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb32d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb32d50  MOV RDI,qword ptr [RDI + 0x30]
0cb32d54  TEST RDI,RDI
0cb32d57  JZ 0x0cb32d62
0cb32d59  MOV RAX,qword ptr [RDI]
0cb32d5c  JMP qword ptr [RAX + 0xe8]
0cb32d62  RET
```

## `0cb33420` — WorldGenerator slot 30

- Ghidra name: `FUN_0cb33420`
- Body: `[[0cb33420, 0cb33422]]`

### Pseudocode

```c

undefined1 FUN_0cb33420(void)

{
  return 1;
}


```

### Assembly

```asm
0cb33420  MOV AL,0x1
0cb33422  RET
```

## `0cb33430` — WorldGenerator slot 31

- Ghidra name: `FUN_0cb33430`
- Body: `[[0cb33430, 0cb33432]]`

### Pseudocode

```c

undefined8 FUN_0cb33430(void)

{
  return 0;
}


```

### Assembly

```asm
0cb33430  XOR EAX,EAX
0cb33432  RET
```

## `0cb32f10` — WorldGenerator slot 32

- Ghidra name: `FUN_0cb32f10`
- Body: `[[0cb32f10, 0cb32f1c]]`

### Pseudocode

```c

void FUN_0cb32f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0cb32f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x100))();
  return;
}


```

### Assembly

```asm
0cb32f10  MOV RDI,qword ptr [RDI + 0x30]
0cb32f14  MOV RAX,qword ptr [RDI]
0cb32f17  JMP qword ptr [RAX + 0x100]
```

## `0529ba60` — WorldGenerator slot 33

- Ghidra name: `FUN_0529ba60`
- Body: `[[0529ba60, 0529ba60]]`

### Pseudocode

```c

void FUN_0529ba60(void)

{
  return;
}


```

### Assembly

```asm
0529ba60  RET
```

## `0cb2f090` — WorldGenerator slot 34

- Ghidra name: `FUN_0cb2f090`
- Body: `[[0cb2f090, 0cb2f092]]`

### Pseudocode

```c

undefined8 FUN_0cb2f090(void)

{
  return 0;
}


```

### Assembly

```asm
0cb2f090  XOR EAX,EAX
0cb2f092  RET
```

## `0cb2f0a0` — WorldGenerator slot 35

- Ghidra name: `FUN_0cb2f0a0`
- Body: `[[0cb2f0a0, 0cb2f0c5]]`

### Pseudocode

```c

undefined8 * FUN_0cb2f0a0(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x118))();
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


```

### Assembly

```asm
0cb2f0a0  MOV RSI,qword ptr [RSI + 0x30]
0cb2f0a4  TEST RSI,RSI
0cb2f0a7  JZ 0x0cb2f0bb
0cb2f0a9  PUSH RBX
0cb2f0aa  MOV RAX,qword ptr [RSI]
0cb2f0ad  MOV RBX,RDI
0cb2f0b0  CALL qword ptr [RAX + 0x118]
0cb2f0b6  MOV RAX,RBX
0cb2f0b9  POP RBX
0cb2f0ba  RET
0cb2f0bb  MOV qword ptr [RDI],0x0
0cb2f0c2  MOV RAX,RDI
0cb2f0c5  RET
```

## `0cb2f0d0` — WorldGenerator slot 36

- Ghidra name: `FUN_0cb2f0d0`
- Body: `[[0cb2f0d0, 0cb2f1a7]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0cb2f0d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_2 + 0x30) == (long *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,200);
    if (puVar1 == (undefined8 *)0x0) {
      func_0x0eec74c0(200,0);
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &UNK_0f3f2120;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[3] = puVar1 + 4;
    func_0x0412d440(puVar1 + 7);
    *param_1 = puVar1 + 3;
    param_1[1] = puVar1;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x120))(param_1);
  }
  return param_1;
}


```

### Assembly

```asm
0cb2f0d0  PUSH R15
0cb2f0d2  PUSH R14
0cb2f0d4  PUSH RBX
0cb2f0d5  MOV RBX,RDI
0cb2f0d8  MOV RSI,qword ptr [RSI + 0x30]
0cb2f0dc  TEST RSI,RSI
0cb2f0df  JZ 0x0cb2f0f2
0cb2f0e1  MOV RAX,qword ptr [RSI]
0cb2f0e4  MOV RDI,RBX
0cb2f0e7  CALL qword ptr [RAX + 0x120]
0cb2f0ed  JMP 0x0cb2f18e
0cb2f0f2  MOV RAX,qword ptr [0x0f5463b0]
0cb2f0f9  LEA RDI,[0xf5463b0]
0cb2f100  MOV ESI,0xc8
0cb2f105  CALL qword ptr [RAX + 0x10]
0cb2f108  MOV R14,RAX
0cb2f10b  TEST RAX,RAX
0cb2f10e  JZ 0x0cb2f197
0cb2f114  XORPS XMM0,XMM0
0cb2f117  MOVUPS xmmword ptr [R14 + 0x8],XMM0
0cb2f11c  LEA RAX,[0xf3f2120]
0cb2f123  MOV qword ptr [R14],RAX
0cb2f126  LEA R15,[R14 + 0x18]
0cb2f12a  LEA RAX,[R14 + 0x20]
0cb2f12e  MOVUPS xmmword ptr [R14 + 0x20],XMM0
0cb2f133  MOVUPS xmmword ptr [R14 + 0x30],XMM0
0cb2f138  MOVUPS xmmword ptr [R14 + 0x40],XMM0
0cb2f13d  MOVUPS xmmword ptr [R14 + 0x50],XMM0
0cb2f142  MOVUPS xmmword ptr [R14 + 0x60],XMM0
0cb2f147  MOVUPS xmmword ptr [R14 + 0x70],XMM0
0cb2f14c  MOVUPS xmmword ptr [R14 + 0x80],XMM0
0cb2f154  MOVUPS xmmword ptr [R14 + 0x90],XMM0
0cb2f15c  MOVUPS xmmword ptr [R14 + 0xa0],XMM0
0cb2f164  MOVUPS xmmword ptr [R14 + 0xb0],XMM0
0cb2f16c  MOV qword ptr [R14 + 0xc0],0x0
0cb2f177  MOV qword ptr [R14 + 0x18],RAX
0cb2f17b  MOV RDI,R14
0cb2f17e  ADD RDI,0x38
0cb2f182  CALL 0x0412d440
0cb2f187  MOV qword ptr [RBX],R15
0cb2f18a  MOV qword ptr [RBX + 0x8],R14
0cb2f18e  MOV RAX,RBX
0cb2f191  POP RBX
0cb2f192  POP R14
0cb2f194  POP R15
0cb2f196  RET
0cb2f197  MOV EDI,0xc8
0cb2f19c  XOR ESI,ESI
0cb2f19e  CALL 0x0eec74c0
0cb2f1a3  JMP 0x0cb2f114
```

## `0cb33440` — WorldGenerator slot 37

- Ghidra name: `FUN_0cb33440`
- Body: `[[0cb33440, 0cb33440]]`

### Pseudocode

```c

void FUN_0cb33440(void)

{
  return;
}


```

### Assembly

```asm
0cb33440  RET
```

## `0cb334c0` — WorldGenerator slot 38

- Ghidra name: `FUN_0cb334c0`
- Body: `[[0cb334c0, 0cb334d4]]`

### Pseudocode

```c

undefined8 FUN_0cb334c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb334cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))();
    return uVar1;
  }
  return 1;
}


```

### Assembly

```asm
0cb334c0  MOV RDI,qword ptr [RDI + 0x30]
0cb334c4  TEST RDI,RDI
0cb334c7  JZ 0x0cb334d2
0cb334c9  MOV RAX,qword ptr [RDI]
0cb334cc  JMP qword ptr [RAX + 0x130]
0cb334d2  MOV AL,0x1
0cb334d4  RET
```

## `0cb334e0` — WorldGenerator slot 39

- Ghidra name: `FUN_0cb334e0`
- Body: `[[0cb334e0, 0cb334f7]]`

### Pseudocode

```c

undefined8 FUN_0cb334e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb334f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x138))();
    return uVar1;
  }
  return 0;
}


```

### Assembly

```asm
0cb334e0  MOV RDI,qword ptr [RDI + 0x30]
0cb334e4  TEST RDI,RDI
0cb334e7  JZ 0x0cb334f5
0cb334e9  MOV RAX,qword ptr [RDI]
0cb334ec  MOV RAX,qword ptr [RAX + 0x138]
0cb334f3  JMP RAX
0cb334f5  XOR EAX,EAX
0cb334f7  RET
```

## `0cb33450` — WorldGenerator slot 40

- Ghidra name: `FUN_0cb33450`
- Body: `[[0cb33450, 0cb33462]]`

### Pseudocode

```c

void FUN_0cb33450(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0cb3345c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x140))();
    return;
  }
  return;
}


```

### Assembly

```asm
0cb33450  MOV RDI,qword ptr [RDI + 0x30]
0cb33454  TEST RDI,RDI
0cb33457  JZ 0x0cb33462
0cb33459  MOV RAX,qword ptr [RDI]
0cb3345c  JMP qword ptr [RAX + 0x140]
0cb33462  RET
```

## `0ca72b00` — WorldGenerator slot 41

- Ghidra name: `FUN_0ca72b00`
- Body: `[[0ca72b00, 0ca72be9]]`

### Pseudocode

```c

undefined8 * FUN_0ca72b00(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  uint uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = func_0x0eee1380(param_2 + 0x108);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_80 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x2d8);
    puStack_78 = &UNK_0f45e800;
    puStack_70 = &UNK_0f2bdd80;
    uStack_68 = 0x5deece66d;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = **(undefined8 **)(param_2 + 0x78);
    uStack_38 = *param_3;
    uStack_30 = func_0x0eee1380(param_2 + 0x108);
    func_0x0d2d2880(param_1,param_4,&uStack_80);
    if ((ulong)uStack_48 != 0xffffffff) {
      (**(code **)(&UNK_0f3ed9b8 + (ulong)uStack_48 * 8))(&uStack_81,&puStack_70);
    }
  }
  return param_1;
}


```

### Assembly

```asm
0ca72b00  PUSH R15
0ca72b02  PUSH R14
0ca72b04  PUSH R13
0ca72b06  PUSH R12
0ca72b08  PUSH RBX
0ca72b09  SUB RSP,0x60
0ca72b0d  MOV R14,RCX
0ca72b10  MOV R15,RDX
0ca72b13  MOV R13,RSI
0ca72b16  MOV RBX,RDI
0ca72b19  LEA R12,[RSI + 0x108]
0ca72b20  MOV RDI,R12
0ca72b23  CALL 0x0eee1380
0ca72b28  TEST RAX,RAX
0ca72b2b  JZ 0x0ca72bd3
0ca72b31  MOV RAX,qword ptr [R13 + 0x20]
0ca72b35  MOV RAX,qword ptr [RAX + 0x2d8]
0ca72b3c  MOV qword ptr [RSP + 0x8],RAX
0ca72b41  LEA RAX,[0xf45e800]
0ca72b48  MOV qword ptr [RSP + 0x10],RAX
0ca72b4d  LEA RAX,[0xf2bdd80]
0ca72b54  MOV qword ptr [RSP + 0x18],RAX
0ca72b59  MOV RAX,0x5deece66d
0ca72b63  MOV qword ptr [RSP + 0x20],RAX
0ca72b68  MOV qword ptr [RSP + 0x28],0x0
0ca72b71  MOV byte ptr [RSP + 0x30],0x0
0ca72b76  MOV dword ptr [RSP + 0x40],0x0
0ca72b7e  MOV RAX,qword ptr [R13 + 0x78]
0ca72b82  MOV RAX,qword ptr [RAX]
0ca72b85  MOV qword ptr [RSP + 0x48],RAX
0ca72b8a  MOV RAX,qword ptr [R15]
0ca72b8d  MOV qword ptr [RSP + 0x50],RAX
0ca72b92  MOV RDI,R12
0ca72b95  CALL 0x0eee1380
0ca72b9a  MOV qword ptr [RSP + 0x58],RAX
0ca72b9f  LEA RDX,[RSP + 0x8]
0ca72ba4  MOV RDI,RBX
0ca72ba7  MOV RSI,R14
0ca72baa  CALL 0x0d2d2880
0ca72baf  MOV EAX,dword ptr [RSP + 0x40]
0ca72bb3  MOV ECX,0xffffffff
0ca72bb8  CMP RAX,RCX
0ca72bbb  JZ 0x0ca72bd9
0ca72bbd  LEA RSI,[RSP + 0x18]
0ca72bc2  LEA RCX,[0xf3ed9b8]
0ca72bc9  LEA RDI,[RSP + 0x7]
0ca72bce  CALL qword ptr [RCX + RAX*0x8]
0ca72bd1  JMP 0x0ca72bd9
0ca72bd3  XORPS XMM0,XMM0
0ca72bd6  MOVUPS xmmword ptr [RBX],XMM0
0ca72bd9  MOV RAX,RBX
0ca72bdc  ADD RSP,0x60
0ca72be0  POP RBX
0ca72be1  POP R12
0ca72be3  POP R13
0ca72be5  POP R14
0ca72be7  POP R15
0ca72be9  RET
```

## `0ca70bd0` — WorldGenerator slot 42

- Ghidra name: `FUN_0ca70bd0`
- Body: `[[0ca70bd0, 0ca70be1]]`

### Pseudocode

```c

undefined8 FUN_0ca70bd0(undefined8 param_1,long param_2)

{
  func_0x0d352ef0(param_1,*(undefined8 *)(param_2 + 0x78));
  return param_1;
}


```

### Assembly

```asm
0ca70bd0  PUSH RBX
0ca70bd1  MOV RBX,RDI
0ca70bd4  MOV RSI,qword ptr [RSI + 0x78]
0ca70bd8  CALL 0x0d352ef0
0ca70bdd  MOV RAX,RBX
0ca70be0  POP RBX
0ca70be1  RET
```

## `0ca70bf0` — WorldGenerator slot 43

- Ghidra name: `FUN_0ca70bf0`
- Body: `[[0ca70bf0, 0ca70c96]]`

### Pseudocode

```c

ulong FUN_0ca70bf0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  if (&uStack_48 != param_3) {
    if ((param_3[1] & 1) == 0) {
      uStack_30 = param_3[3];
      uStack_40 = param_3[1];
      uStack_38 = param_3[2];
    }
    else {
      func_0x04885070(&uStack_40,param_3[3],param_3[2]);
    }
  }
  uStack_48 = *param_3;
  uVar2 = func_0x0d3530d0(uVar1,param_2,&uStack_48);
  if ((uStack_40 & 1) != 0) {
    uVar2 = uVar2 & 0xffffffff;
    func_0x0412a280(uStack_30,uStack_40 & 0xfffffffffffffffe);
  }
  return uVar2;
}


```

### Assembly

```asm
0ca70bf0  PUSH R15
0ca70bf2  PUSH R14
0ca70bf4  PUSH RBX
0ca70bf5  SUB RSP,0x30
0ca70bf9  MOV RDI,qword ptr [RDI + 0x78]
0ca70bfd  MOV RAX,RSP
0ca70c00  XORPS XMM0,XMM0
0ca70c03  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0ca70c08  MOVAPS xmmword ptr [RSP],XMM0
0ca70c0c  MOV qword ptr [RSP + 0x20],0x0
0ca70c15  CMP RAX,RDX
0ca70c18  JZ 0x0ca70c60
0ca70c1a  LEA RAX,[RSP + 0x8]
0ca70c1f  LEA RCX,[RDX + 0x8]
0ca70c23  TEST byte ptr [RCX],0x1
0ca70c26  JNZ 0x0ca70c38
0ca70c28  MOV R8,qword ptr [RCX + 0x10]
0ca70c2c  MOV qword ptr [RAX + 0x10],R8
0ca70c30  MOVUPS XMM0,xmmword ptr [RCX]
0ca70c33  MOVUPS xmmword ptr [RAX],XMM0
0ca70c36  JMP 0x0ca70c60
0ca70c38  MOV RCX,qword ptr [RDX + 0x10]
0ca70c3c  MOV R8,qword ptr [RDX + 0x18]
0ca70c40  MOV RBX,RDI
0ca70c43  MOV RDI,RAX
0ca70c46  MOV R14,RSI
0ca70c49  MOV RSI,R8
0ca70c4c  MOV R15,RDX
0ca70c4f  MOV RDX,RCX
0ca70c52  CALL 0x04885070
0ca70c57  MOV RDX,R15
0ca70c5a  MOV RDI,RBX
0ca70c5d  MOV RSI,R14
0ca70c60  MOV RAX,qword ptr [RDX]
0ca70c63  MOV qword ptr [RSP],RAX
0ca70c67  MOV RDX,RSP
0ca70c6a  CALL 0x0d3530d0
0ca70c6f  TEST byte ptr [RSP + 0x8],0x1
0ca70c74  JZ 0x0ca70c8d
0ca70c76  MOV RSI,qword ptr [RSP + 0x8]
0ca70c7b  MOV RDI,qword ptr [RSP + 0x18]
0ca70c80  AND RSI,-0x2
0ca70c84  MOV EBX,EAX
0ca70c86  CALL 0x0412a280
0ca70c8b  MOV EAX,EBX
0ca70c8d  ADD RSP,0x30
0ca70c91  POP RBX
0ca70c92  POP R14
0ca70c94  POP R15
0ca70c96  RET
```

## `0ca70cc0` — WorldGenerator slot 44

- Ghidra name: `FUN_0ca70cc0`
- Body: `[[0ca70cc0, 0ca70e3d]]`

### Pseudocode

```c

ulong FUN_0ca70cc0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,ulong *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1[5];
  lVar2 = param_1[0xf];
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  if (&uStack_68 != param_2) {
    if ((param_2[1] & 1) == 0) {
      uStack_50 = param_2[3];
      uStack_60 = param_2[1];
      uStack_58 = param_2[2];
    }
    else {
      func_0x04885070(&uStack_60,param_2[3],param_2[2]);
    }
  }
  uStack_68 = *param_2;
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1);
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  cStack_70 = '\0';
  if ((char)param_6[5] == '\x01') {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    if (&uStack_98 != param_6) {
      if ((param_6[1] & 1) == 0) {
        uStack_80 = param_6[3];
        uStack_90 = param_6[1];
        uStack_88 = param_6[2];
      }
      else {
        func_0x04885070(&uStack_90,param_6[3],param_6[2]);
      }
    }
    uStack_98 = *param_6;
    cStack_70 = '\x01';
  }
  uVar4 = func_0x0d353580(lVar2,lVar1,param_1 + 0xe,&uStack_68,uStack_40,uStack_38,uVar3,param_5,
                          &uStack_98);
  if ((cStack_70 == '\x01') && ((uStack_90 & 1) != 0)) {
    uVar4 = uVar4 & 0xffffffff;
    func_0x0412a280(uStack_80,uStack_90 & 0xfffffffffffffffe);
  }
  if ((uStack_60 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff;
    func_0x0412a280(uStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return uVar4;
}


```

### Assembly

```asm
0ca70cc0  PUSH RBP
0ca70cc1  PUSH R15
0ca70cc3  PUSH R14
0ca70cc5  PUSH R13
0ca70cc7  PUSH R12
0ca70cc9  PUSH RBX
0ca70cca  SUB RSP,0x68
0ca70cce  MOV RBX,R9
0ca70cd1  MOV EBP,R8D
0ca70cd4  MOV qword ptr [RSP + 0x60],RCX
0ca70cd9  MOV qword ptr [RSP + 0x58],RDX
0ca70cde  MOV R15,RDI
0ca70ce1  MOV R12,qword ptr [RDI + 0x28]
0ca70ce5  MOV R13,qword ptr [RDI + 0x78]
0ca70ce9  LEA RAX,[RSP + 0x30]
0ca70cee  XORPS XMM0,XMM0
0ca70cf1  MOVAPS xmmword ptr [RSP + 0x40],XMM0
0ca70cf6  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0ca70cfb  MOV qword ptr [RSP + 0x50],0x0
0ca70d04  CMP RAX,RSI
0ca70d07  JZ 0x0ca70d3d
0ca70d09  LEA RDI,[RSP + 0x38]
0ca70d0e  LEA RAX,[RSI + 0x8]
0ca70d12  TEST byte ptr [RAX],0x1
0ca70d15  JNZ 0x0ca70d27
0ca70d17  MOV RCX,qword ptr [RAX + 0x10]
0ca70d1b  MOV qword ptr [RDI + 0x10],RCX
0ca70d1f  MOVUPS XMM0,xmmword ptr [RAX]
0ca70d22  MOVUPS xmmword ptr [RDI],XMM0
0ca70d25  JMP 0x0ca70d3d
0ca70d27  MOV RDX,qword ptr [RSI + 0x10]
0ca70d2b  MOV RAX,qword ptr [RSI + 0x18]
0ca70d2f  MOV R14,RSI
0ca70d32  MOV RSI,RAX
0ca70d35  CALL 0x04885070
0ca70d3a  MOV RSI,R14
0ca70d3d  MOV RAX,qword ptr [RSI]
0ca70d40  MOV qword ptr [RSP + 0x30],RAX
0ca70d45  MOV RAX,qword ptr [R15]
0ca70d48  MOV RDI,R15
0ca70d4b  CALL qword ptr [RAX + 0x188]
0ca70d51  MOV R14,RAX
0ca70d54  MOV byte ptr [RSP],0x0
0ca70d58  MOV byte ptr [RSP + 0x28],0x0
0ca70d5d  CMP byte ptr [RBX + 0x28],0x1
0ca70d61  MOV R10,RSP
0ca70d64  JNZ 0x0ca70dba
0ca70d66  XORPS XMM0,XMM0
0ca70d69  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0ca70d6e  MOVAPS xmmword ptr [RSP],XMM0
0ca70d72  MOV qword ptr [RSP + 0x20],0x0
0ca70d7b  CMP R10,RBX
0ca70d7e  JZ 0x0ca70dae
0ca70d80  LEA RDI,[RSP + 0x8]
0ca70d85  LEA RAX,[RBX + 0x8]
0ca70d89  TEST byte ptr [RAX],0x1
0ca70d8c  JNZ 0x0ca70d9e
0ca70d8e  MOV RCX,qword ptr [RAX + 0x10]
0ca70d92  MOV qword ptr [RDI + 0x10],RCX
0ca70d96  MOVUPS XMM0,xmmword ptr [RAX]
0ca70d99  MOVUPS xmmword ptr [RDI],XMM0
0ca70d9c  JMP 0x0ca70dae
0ca70d9e  MOV RDX,qword ptr [RBX + 0x10]
0ca70da2  MOV RSI,qword ptr [RBX + 0x18]
0ca70da6  CALL 0x04885070
0ca70dab  MOV R10,RSP
0ca70dae  MOV RAX,qword ptr [RBX]
0ca70db1  MOV qword ptr [RSP],RAX
0ca70db5  MOV byte ptr [RSP + 0x28],0x1
0ca70dba  ADD R15,0x70
0ca70dbe  SUB RSP,0x8
0ca70dc2  MOVZX EAX,BPL
0ca70dc6  LEA RCX,[RSP + 0x38]
0ca70dcb  MOV RDI,R13
0ca70dce  MOV RSI,R12
0ca70dd1  MOV RDX,R15
0ca70dd4  MOV R8,qword ptr [RSP + 0x60]
0ca70dd9  MOV R9,qword ptr [RSP + 0x68]
0ca70dde  PUSH R10
0ca70de0  PUSH RAX
0ca70de1  PUSH R14
0ca70de3  CALL 0x0d353580
0ca70de8  ADD RSP,0x20
0ca70dec  CMP byte ptr [RSP + 0x28],0x1
0ca70df1  JNZ 0x0ca70e11
0ca70df3  TEST byte ptr [RSP + 0x8],0x1
0ca70df8  JZ 0x0ca70e11
0ca70dfa  MOV RSI,qword ptr [RSP + 0x8]
0ca70dff  MOV RDI,qword ptr [RSP + 0x18]
0ca70e04  AND RSI,-0x2
0ca70e08  MOV EBX,EAX
0ca70e0a  CALL 0x0412a280
0ca70e0f  MOV EAX,EBX
0ca70e11  TEST byte ptr [RSP + 0x38],0x1
0ca70e16  JZ 0x0ca70e2f
0ca70e18  MOV RSI,qword ptr [RSP + 0x38]
0ca70e1d  MOV RDI,qword ptr [RSP + 0x48]
0ca70e22  AND RSI,-0x2
0ca70e26  MOV EBX,EAX
0ca70e28  CALL 0x0412a280
0ca70e2d  MOV EAX,EBX
0ca70e2f  ADD RSP,0x68
0ca70e33  POP RBX
0ca70e34  POP R12
0ca70e36  POP R13
0ca70e38  POP R14
0ca70e3a  POP R15
0ca70e3c  POP RBP
0ca70e3d  RET
```

## `0ca70eb0` — WorldGenerator slot 45

- Ghidra name: `FUN_0ca70eb0`
- Body: `[[0ca70eb0, 0ca70f4b]]`

### Pseudocode

```c

undefined8 FUN_0ca70eb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  if (&uStack_38 != param_2) {
    if ((param_2[1] & 1) == 0) {
      uStack_20 = param_2[3];
      uStack_30 = param_2[1];
      uStack_28 = param_2[2];
    }
    else {
      func_0x04885070(&uStack_30,param_2[3],param_2[2]);
    }
  }
  uStack_38 = *param_2;
  uVar1 = func_0x0d352d10(uVar1,&uStack_38);
  if ((uStack_30 & 1) != 0) {
    func_0x0412a280(uStack_20,uStack_30 & 0xfffffffffffffffe);
  }
  return uVar1;
}


```

### Assembly

```asm
0ca70eb0  PUSH R14
0ca70eb2  PUSH RBX
0ca70eb3  SUB RSP,0x28
0ca70eb7  MOV RDI,qword ptr [RDI + 0x78]
0ca70ebb  MOV RAX,RSP
0ca70ebe  XORPS XMM0,XMM0
0ca70ec1  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0ca70ec6  MOVAPS xmmword ptr [RSP],XMM0
0ca70eca  MOV qword ptr [RSP + 0x20],0x0
0ca70ed3  CMP RAX,RSI
0ca70ed6  JZ 0x0ca70f15
0ca70ed8  LEA RAX,[RSP + 0x8]
0ca70edd  LEA RCX,[RSI + 0x8]
0ca70ee1  TEST byte ptr [RCX],0x1
0ca70ee4  JNZ 0x0ca70ef6
0ca70ee6  MOV RDX,qword ptr [RCX + 0x10]
0ca70eea  MOV qword ptr [RAX + 0x10],RDX
0ca70eee  MOVUPS XMM0,xmmword ptr [RCX]
0ca70ef1  MOVUPS xmmword ptr [RAX],XMM0
0ca70ef4  JMP 0x0ca70f15
0ca70ef6  MOV RDX,qword ptr [RSI + 0x10]
0ca70efa  MOV RCX,qword ptr [RSI + 0x18]
0ca70efe  MOV RBX,RDI
0ca70f01  MOV RDI,RAX
0ca70f04  MOV R14,RSI
0ca70f07  MOV RSI,RCX
0ca70f0a  CALL 0x04885070
0ca70f0f  MOV RSI,R14
0ca70f12  MOV RDI,RBX
0ca70f15  MOV RAX,qword ptr [RSI]
0ca70f18  MOV qword ptr [RSP],RAX
0ca70f1c  MOV RSI,RSP
0ca70f1f  CALL 0x0d352d10
0ca70f24  TEST byte ptr [RSP + 0x8],0x1
0ca70f29  JZ 0x0ca70f44
0ca70f2b  MOV RSI,qword ptr [RSP + 0x8]
0ca70f30  MOV RDI,qword ptr [RSP + 0x18]
0ca70f35  AND RSI,-0x2
0ca70f39  MOV RBX,RAX
0ca70f3c  CALL 0x0412a280
0ca70f41  MOV RAX,RBX
0ca70f44  ADD RSP,0x28
0ca70f48  POP RBX
0ca70f49  POP R14
0ca70f4b  RET
```

## `0ca72c10` — WorldGenerator slot 46

- Ghidra name: `FUN_0ca72c10`
- Body: `[[0ca72c10, 0ca72c57]]`

### Pseudocode

```c

void FUN_0ca72c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x38);
  for (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x30); puVar2 != puVar1;
      puVar2 = puVar2 + 1) {
    func_0x0d352860(*puVar2,param_2,param_3,2);
  }
  return;
}


```

### Assembly

```asm
0ca72c10  PUSH R15
0ca72c12  PUSH R14
0ca72c14  PUSH R12
0ca72c16  PUSH RBX
0ca72c17  PUSH RAX
0ca72c18  MOV RAX,qword ptr [RDI + 0x78]
0ca72c1c  MOV R15,qword ptr [RAX + 0x30]
0ca72c20  MOV R12,qword ptr [RAX + 0x38]
0ca72c24  CMP R15,R12
0ca72c27  JZ 0x0ca72c4c
0ca72c29  MOV RBX,RDX
0ca72c2c  MOV R14,RSI
0ca72c2f  NOP
0ca72c30  MOV RDI,qword ptr [R15]
0ca72c33  MOV RSI,R14
0ca72c36  MOV RDX,RBX
0ca72c39  MOV ECX,0x2
0ca72c3e  CALL 0x0d352860
0ca72c43  ADD R15,0x8
0ca72c47  CMP R15,R12
0ca72c4a  JNZ 0x0ca72c30
0ca72c4c  ADD RSP,0x8
0ca72c50  POP RBX
0ca72c51  POP R12
0ca72c53  POP R14
0ca72c55  POP R15
0ca72c57  RET
```

## `0412bcc0` — WorldGenerator slot 47

- Ghidra name: `FUN_0412bcc0`
- Body: `[[0412bcc0, 0412bccf]]`

### Pseudocode

```c

void FUN_0412bcc0(void)

{
  code *pcVar1;
  
  func_0x041085a0(&UNK_01198df7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

### Assembly

```asm
0412bcc0  PUSH RAX
0412bcc1  LEA RDI,[0x1198df7]
0412bcc8  XOR EAX,EAX
0412bcca  CALL 0x041085a0
0412bccf  INT3
```

## `0ca73300` — WorldGenerator slot 52

- Ghidra name: `FUN_0ca73300`
- Body: `[[0ca73300, 0ca73302]]`

### Pseudocode

```c

undefined8 FUN_0ca73300(void)

{
  return 0;
}


```

### Assembly

```asm
0ca73300  XOR EAX,EAX
0ca73302  RET
```

## `0ca72c60` — WorldGenerator slot 53

- Ghidra name: `FUN_0ca72c60`
- Body: `[[0ca72c60, 0ca72c60]]`

### Pseudocode

```c

void FUN_0ca72c60(void)

{
  return;
}


```

### Assembly

```asm
0ca72c60  RET
```

## `0ca72ef0` — WorldGenerator slot 54

- Ghidra name: `FUN_0ca72ef0`
- Body: `[[0ca72ef0, 0ca72ef0]]`

### Pseudocode

```c

void FUN_0ca72ef0(void)

{
  return;
}


```

### Assembly

```asm
0ca72ef0  RET
```

## `0ca70ba0` — WorldGenerator slot 0

- Ghidra name: `FUN_0ca70ba0`
- Body: `[[0ca70ba0, 0ca70ba8]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0ca70ba0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1 + -0xe;
  *puVar6 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar4 = (undefined8 *)param_1[0x10];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *puVar6 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *puVar6 = &UNK_0f534768;
  plVar5 = (long *)param_1[-0xc];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


```

### Assembly

```asm
0ca70ba0  ADD RDI,-0x70
0ca70ba4  JMP 0x0ca70460
```

## `0ca70bc0` — WorldGenerator slot 1

- Ghidra name: `FUN_0ca70bc0`
- Body: `[[0ca70bc0, 0ca70bc1]]`

### Pseudocode

```c

void FUN_0ca70bc0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

### Assembly

```asm
0ca70bc0  UD2
```

## `0ca73310` — WorldGenerator slot 2

- Ghidra name: `FUN_0ca73310`
- Body: `[[0ca73310, 0ca73312]]`

### Pseudocode

```c

undefined8 FUN_0ca73310(void)

{
  return 0;
}


```

### Assembly

```asm
0ca73310  XOR EAX,EAX
0ca73312  RET
```

## `0527a670` — OverworldGenerator slot 0

- Ghidra name: `FUN_0527a670`
- Body: `[[0527a670, 0527a69d]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0527a670(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


```

### Assembly

```asm
0527a670  PUSH RBX
0527a671  MOV RBX,RDI
0527a674  LEA RAX,[0xef9d2a0]
0527a67b  MOV qword ptr [RDI],RAX
0527a67e  LEA RAX,[0xef9d4b8]
0527a685  MOV qword ptr [RDI + 0x70],RAX
0527a689  ADD RDI,0x140
0527a690  CALL 0x0527a590
0527a695  MOV RDI,RBX
0527a698  POP RBX
0527a699  JMP 0x0ca70460
```

## `0527a6d0` — OverworldGenerator slot 1

- Ghidra name: `FUN_0527a6d0`
- Body: `[[0527a6d0, 0527a6d1]]`

### Pseudocode

```c

void FUN_0527a6d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

### Assembly

```asm
0527a6d0  UD2
```

## `0527c470` — OverworldGenerator slot 10

- Ghidra name: `OverworldGenerator__loadChunk`
- Body: `[[0527c470, 0527c577] [0527c580, 0527c629] [0527c630, 0527cb79] [0527cb80, 0527cc1e]]`

### Pseudocode

```c

byte OverworldGenerator__loadChunk(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  int iStack_520;
  int iStack_51c;
  long lStack_518;
  long *plStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  byte bStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  long lStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  undefined2 uStack_470;
  undefined6 uStack_46e;
  undefined2 uStack_468;
  undefined6 uStack_466;
  undefined2 uStack_460;
  long lStack_450;
  long lStack_448;
  int *piStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined2 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d4;
  undefined4 uStack_3cc;
  int iStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  int **ppiStack_2e0;
  long *plStack_2d8;
  undefined *apuStack_258 [4];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_1d8 [144];
  undefined1 auStack_148 [144];
  int iStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_90;
  
  func_0x0412d550(param_2 + 0x22);
  lVar11 = param_2[0x34];
  lVar6 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_520 = (int)lVar11 + 1;
  iStack_51c = (int)lVar6 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_518,param_2,&iStack_520);
  lVar11 = lStack_518;
  func_0x0ca8a1f0(&lStack_508,*(undefined8 *)(*(long *)(lStack_518 + 0x30) + 0x198),
                  lStack_518 + 0x50,param_2);
  bVar7 = bStack_4f0;
  if (bStack_4f0 != 0) {
    func_0x0cb35860(apuStack_258,param_2);
    lStack_448 = param_1;
    func_0x0412d550(auStack_148);
    lStack_450 = lVar11;
    func_0x0412d610(auStack_148);
    iVar2 = iStack_b8;
    iVar3 = iStack_b0;
    for (iVar15 = iStack_90; iVar15 != 0; iVar15 = iVar15 + -1) {
      uStack_4e8 = (undefined *)CONCAT44(iVar3,iVar2);
      (**(code **)(apuStack_258[0] + 0x20))(&iStack_3c8,apuStack_258,&uStack_4e8);
      if ((CONCAT44(uStack_3c4,iStack_3c8) == 0) ||
         (*(byte *)(CONCAT44(uStack_3c4,iStack_3c8) + 0xb8) < 2)) {
        lStack_4b8 = 0;
        plStack_4b0 = (long *)0x0;
joined_r0x0527c646:
        if (CONCAT44(uStack_3bc,iStack_3c0) != 0) {
          plVar17 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
          LOCK();
          plVar16 = plVar17 + 1;
          lVar11 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
          }
        }
      }
      else {
        lStack_4b8 = CONCAT44(uStack_3c4,iStack_3c8);
        plStack_4b0 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
        if (plStack_4b0 != (long *)0x0) {
          LOCK();
          plStack_4b0[1] = plStack_4b0[1] + 1;
          UNLOCK();
          goto joined_r0x0527c646;
        }
      }
      if ((lStack_4b8 != 0) && (6 < *(byte *)(lStack_4b8 + 0xb8))) {
        iStack_3c8 = (int)uStack_4e8 << 4;
        iStack_3c0 = uStack_4e8._4_4_ << 4;
        uStack_3c4 = 0;
        piStack_440 = &iStack_3c8;
        func_0x0cb59800(auStack_148,&piStack_440);
      }
      plVar16 = plStack_4b0;
      if (plStack_4b0 != (long *)0x0) {
        LOCK();
        plVar17 = plStack_4b0 + 1;
        lVar11 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
          func_0x0412c2d0(plVar16);
        }
      }
      iVar10 = iVar3 + 1;
      if (iStack_a4 <= iVar3) {
        iVar10 = iStack_b0;
      }
      iVar1 = iVar2 + 1;
      bVar5 = iVar2 < iStack_ac;
      iVar2 = iStack_b8;
      if (bVar5) {
        iVar10 = iVar3;
        iVar2 = iVar1;
      }
      iVar3 = iVar10;
    }
    func_0x0c9d0c10(&iStack_3c8,uStack_238,uStack_230,apuStack_258,0,1,1,0);
    lVar6 = lStack_448;
    lStack_4b8 = 0;
    plStack_4b0 = (long *)0x1;
    lStack_4a8 = 0;
    lStack_4a0 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_478 = 0;
    uStack_470 = 0;
    uStack_46e = 0;
    uStack_468 = 0;
    uStack_466 = 0;
    uStack_460 = 0;
    piStack_440 = (int *)0x0;
    uStack_438 = 1;
    lStack_430 = 0;
    lStack_428 = 0;
    lStack_420 = 0;
    lStack_418 = 0;
    lStack_410 = 0;
    lStack_408 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    uStack_3e8 = 1;
    plStack_2d8 = &lStack_4b8;
    ppiStack_2e0 = &piStack_440;
    lVar11 = FUN_052be680(lStack_448 + 0x140);
    uVar12 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x438))();
    plVar16 = (long *)(lVar11 + 0xa1810);
    lVar11 = *(long *)(lVar11 + 0xa2208);
    if (*(char *)(lVar11 + 0x9e7) == '\x01') {
      *(int *)(lVar11 + 8) = (int)uVar12;
      *(undefined2 *)(lVar11 + 0x9e4) = 0;
      *(undefined4 *)(lVar11 + 0x9d4) = 0;
      *(undefined8 *)(lVar11 + 0x9d8) = 0;
      *(int *)(lVar11 + 0xc) = (int)uVar12;
      lVar13 = 5;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar13) - 4;
        uVar9 = (uint)uVar12;
        *(uint *)(lVar11 + -4 + lVar13 * 4) = uVar9;
        if (lVar13 == 0x191) break;
        uVar9 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar9) * 0x6c078965 + (int)lVar13) - 3;
        uVar12 = (ulong)uVar9;
        *(uint *)(lVar11 + lVar13 * 4) = uVar9;
        lVar13 = lVar13 + 2;
      }
      *(undefined8 *)(lVar11 + 0x9cc) = 0x18e00000270;
    }
    iVar15 = (**(code **)(*plVar16 + 0x10))(plVar16);
    iVar10 = (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar11 = lStack_450;
    iVar2 = *(int *)(lStack_450 + 0x50);
    iVar3 = *(int *)(lStack_450 + 0x54);
    uVar9 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x438))();
    func_0x0ca70f80(lVar6,&iStack_3c8,plVar16,
                    uVar9 ^ iVar3 * (iVar10 - (iVar10 >> 0x1f) | 1U) +
                            iVar2 * (iVar15 - (iVar15 >> 0x1f) | 1U),*(undefined4 *)(lVar11 + 0x50),
                    *(undefined4 *)(lVar11 + 0x54));
    func_0x0ca72420(lVar6,&iStack_3c8,plVar16,*(undefined4 *)(lVar11 + 0x50),
                    *(undefined4 *)(lVar11 + 0x54));
    puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0x78) + 0x30);
    puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x78) + 0x38);
    if (puVar14 != puVar4) {
      do {
        plVar16 = (long *)*puVar14;
        cVar8 = (**(code **)(*plVar16 + 0x10))(plVar16);
        if (cVar8 != '\0') {
          uStack_3d8 = *(undefined4 *)(lStack_518 + 0x40);
          uStack_3e0 = *(undefined8 *)(lStack_518 + 0x38);
          uStack_3cc = *(undefined4 *)(lStack_518 + 0x4c);
          uStack_3d4 = *(undefined8 *)(lStack_518 + 0x44);
          uStack_4e8 = &UNK_0f461970;
          lStack_4d8 = lStack_518;
          puStack_4d0 = &uStack_3e0;
          lStack_4e0 = lStack_518 + 0x1538;
          plStack_4c8 = &uStack_4e8;
          func_0x0d351180(plVar16,puStack_4d0,&uStack_4e8);
          if (plStack_4c8 == &uStack_4e8) {
            lVar11 = 0x20;
          }
          else {
            lVar11 = 0x28;
            if (plStack_4c8 == (long *)0x0) goto LAB_0527c995;
          }
          (**(code **)(*plStack_4c8 + lVar11))();
        }
LAB_0527c995:
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar4);
    }
    if (lStack_400 != 0) {
      lStack_3f8 = lStack_400;
      func_0x0412a280(lStack_400,lStack_3f0 - lStack_400);
    }
    if (lStack_418 != 0) {
      lStack_410 = lStack_418;
      func_0x0412a280(lStack_418,lStack_408 - lStack_418);
    }
    if (lStack_430 != 0) {
      lStack_428 = lStack_430;
      func_0x0412a280(lStack_430,lStack_420 - lStack_430);
    }
    if (lStack_478 != 0) {
      uStack_470 = (undefined2)lStack_478;
      uStack_46e = (undefined6)((ulong)lStack_478 >> 0x10);
      func_0x0412a280(lStack_478,CONCAT62(uStack_466,uStack_468) - lStack_478);
    }
    if (lStack_490 != 0) {
      lStack_488 = lStack_490;
      func_0x0412a280(lStack_490,lStack_480 - lStack_490);
    }
    if (lStack_4a8 != 0) {
      lStack_4a0 = lStack_4a8;
      func_0x0412a280(lStack_4a8,lStack_498 - lStack_4a8);
    }
    func_0x0c9d0f40(&iStack_3c8);
    apuStack_258[0] = &UNK_0f3f24c8;
    FUN_052a3830(auStack_1d8);
    func_0x0cb3ae10(apuStack_258);
  }
  lVar11 = lStack_508;
  if (((bStack_4f0 & 1) != 0) && (lVar6 = lStack_500, lStack_508 != 0)) {
    for (; lVar11 != lVar6; lVar6 = lVar6 + -0x20) {
      if (*(char *)(lVar6 + -8) == '\x01') {
        func_0x0412d6b0(*(undefined8 *)(lVar6 + -0x10));
      }
      plVar16 = *(long **)(lVar6 + -0x18);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar17 = plVar16 + 1;
        lVar13 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          func_0x0412c2d0(plVar16);
        }
      }
    }
    lStack_500 = lVar11;
    func_0x0412a280(lStack_508,lStack_4f8 - lStack_508);
  }
  if (plStack_510 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_510 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_510 + 0x10))(plStack_510);
      func_0x0412c2d0(plStack_510);
    }
  }
  return bVar7;
}


```

### Assembly

```asm
0527c470  PUSH RBP
0527c471  PUSH R15
0527c473  PUSH R14
0527c475  PUSH R13
0527c477  PUSH R12
0527c479  PUSH RBX
0527c47a  SUB RSP,0x508
0527c481  MOV RBX,RSI
0527c484  MOV R12,RDI
0527c487  LEA R14,[RSI + 0x110]
0527c48e  MOV RDI,R14
0527c491  CALL 0x0412d550
0527c496  MOV EBP,dword ptr [RBX + 0x1a0]
0527c49c  MOV R15D,dword ptr [RBX + 0x1a8]
0527c4a3  MOV RDI,R14
0527c4a6  CALL 0x0412d610
0527c4ab  INC EBP
0527c4ad  INC R15D
0527c4b0  MOV dword ptr [RSP + 0x18],EBP
0527c4b4  MOV dword ptr [RSP + 0x1c],R15D
0527c4b9  MOV RAX,qword ptr [RBX]
0527c4bc  LEA RDI,[RSP + 0x20]
0527c4c1  LEA RDX,[RSP + 0x18]
0527c4c6  MOV RSI,RBX
0527c4c9  CALL qword ptr [RAX + 0x20]
0527c4cc  MOV R14,qword ptr [RSP + 0x20]
0527c4d1  LEA RDX,[R14 + 0x50]
0527c4d5  MOV RAX,qword ptr [R14 + 0x30]
0527c4d9  MOV RSI,qword ptr [RAX + 0x198]
0527c4e0  LEA RDI,[RSP + 0x30]
0527c4e5  MOV RCX,RBX
0527c4e8  CALL 0x0ca8a1f0
0527c4ed  MOVZX EBP,byte ptr [RSP + 0x48]
0527c4f2  MOV EAX,EBP
0527c4f4  TEST BPL,BPL
0527c4f7  JZ 0x0527cb59
0527c4fd  LEA RDI,[RSP + 0x2e0]
0527c505  MOV RSI,RBX
0527c508  CALL 0x0cb35860
0527c50d  MOV qword ptr [RSP + 0xf0],R12
0527c515  LEA R15,[RSP + 0x3f0]
0527c51d  MOV RDI,R15
0527c520  CALL 0x0412d550
0527c525  MOV qword ptr [RSP + 0xe8],R14
0527c52d  MOV byte ptr [RSP + 0x7],BPL
0527c532  MOV EBX,dword ptr [RSP + 0x480]
0527c539  MOV R12D,dword ptr [RSP + 0x488]
0527c541  MOV EAX,dword ptr [RSP + 0x48c]
0527c548  MOV dword ptr [RSP + 0x8],EAX
0527c54c  MOV EAX,dword ptr [RSP + 0x494]
0527c553  MOV dword ptr [RSP + 0x10],EAX
0527c557  MOV R13D,dword ptr [RSP + 0x4a8]
0527c55f  MOV RDI,R15
0527c562  CALL 0x0412d610
0527c567  TEST R13D,R13D
0527c56a  JZ 0x0527c70c
0527c570  MOV EBP,R12D
0527c573  MOV R14D,EBX
0527c576  JMP 0x0527c5a8
0527c580  LEA EAX,[RBP + 0x1]
0527c583  CMP EBP,dword ptr [RSP + 0x10]
0527c587  CMOVGE EAX,R12D
0527c58b  CMP R14D,dword ptr [RSP + 0x8]
0527c590  LEA ECX,[R14 + 0x1]
0527c594  CMOVGE ECX,EBX
0527c597  CMOVL EAX,EBP
0527c59a  MOV EBP,EAX
0527c59c  MOV R14D,ECX
0527c59f  DEC R13D
0527c5a2  JZ 0x0527c70c
0527c5a8  MOV dword ptr [RSP + 0x50],R14D
0527c5ad  MOV dword ptr [RSP + 0x54],EBP
0527c5b1  MOV RAX,qword ptr [RSP + 0x2e0]
0527c5b9  LEA RDI,[RSP + 0x170]
0527c5c1  LEA RSI,[RSP + 0x2e0]
0527c5c9  LEA RDX,[RSP + 0x50]
0527c5ce  CALL qword ptr [RAX + 0x20]
0527c5d1  MOV RAX,qword ptr [RSP + 0x170]
0527c5d9  TEST RAX,RAX
0527c5dc  LEA RDI,[RSP + 0x3f0]
0527c5e4  JZ 0x0527c630
0527c5e6  MOVZX EAX,byte ptr [RAX + 0xb8]
0527c5ed  CMP AL,0x2
0527c5ef  JC 0x0527c630
0527c5f1  MOV RAX,qword ptr [RSP + 0x170]
0527c5f9  MOV RCX,qword ptr [RSP + 0x178]
0527c601  MOV qword ptr [RSP + 0x80],RAX
0527c609  MOV qword ptr [RSP + 0x88],RCX
0527c611  TEST RCX,RCX
0527c614  JZ 0x0527c67b
0527c616  INC.LOCK qword ptr [RCX + 0x8]
0527c61b  MOV R15,qword ptr [RSP + 0x178]
0527c623  TEST R15,R15
0527c626  JNZ 0x0527c648
0527c628  JMP 0x0527c673
0527c630  XORPS XMM0,XMM0
0527c633  MOVAPS xmmword ptr [RSP + 0x80],XMM0
0527c63b  MOV R15,qword ptr [RSP + 0x178]
0527c643  TEST R15,R15
0527c646  JZ 0x0527c673
0527c648  MOV RAX,-0x1
0527c64f  XADD.LOCK qword ptr [R15 + 0x8],RAX
0527c655  TEST RAX,RAX
0527c658  JNZ 0x0527c673
0527c65a  MOV RAX,qword ptr [R15]
0527c65d  MOV RDI,R15
0527c660  CALL qword ptr [RAX + 0x10]
0527c663  MOV RDI,R15
0527c666  CALL 0x0412c2d0
0527c66b  LEA RDI,[RSP + 0x3f0]
0527c673  MOV RAX,qword ptr [RSP + 0x80]
0527c67b  TEST RAX,RAX
0527c67e  JZ 0x0527c6cf
0527c680  MOVZX EAX,byte ptr [RAX + 0xb8]
0527c687  CMP AL,0x7
0527c689  JC 0x0527c6cf
0527c68b  MOV EAX,dword ptr [RSP + 0x50]
0527c68f  MOV ECX,dword ptr [RSP + 0x54]
0527c693  SHL EAX,0x4
0527c696  SHL ECX,0x4
0527c699  MOV dword ptr [RSP + 0x170],EAX
0527c6a0  MOV dword ptr [RSP + 0x174],0x0
0527c6ab  MOV dword ptr [RSP + 0x178],ECX
0527c6b2  LEA RAX,[RSP + 0x170]
0527c6ba  MOV qword ptr [RSP + 0xf8],RAX
0527c6c2  LEA RSI,[RSP + 0xf8]
0527c6ca  CALL 0x0cb59800
0527c6cf  MOV R15,qword ptr [RSP + 0x88]
0527c6d7  TEST R15,R15
0527c6da  JZ 0x0527c580
0527c6e0  MOV RAX,-0x1
0527c6e7  XADD.LOCK qword ptr [R15 + 0x8],RAX
0527c6ed  TEST RAX,RAX
0527c6f0  JNZ 0x0527c580
0527c6f6  MOV RAX,qword ptr [R15]
0527c6f9  MOV RDI,R15
0527c6fc  CALL qword ptr [RAX + 0x10]
0527c6ff  MOV RDI,R15
0527c702  CALL 0x0412c2d0
0527c707  JMP 0x0527c580
0527c70c  MOV RSI,qword ptr [RSP + 0x300]
0527c714  MOV RDX,qword ptr [RSP + 0x308]
0527c71c  LEA RDI,[RSP + 0x170]
0527c724  LEA RCX,[RSP + 0x2e0]
0527c72c  XOR R8D,R8D
0527c72f  MOV R9D,0x1
0527c735  PUSH 0x0
0527c737  PUSH 0x1
0527c739  CALL 0x0c9d0c10
0527c73e  ADD RSP,0x10
0527c742  MOV qword ptr [RSP + 0x80],0x0
0527c74e  MOV qword ptr [RSP + 0x88],0x1
0527c75a  XORPS XMM0,XMM0
0527c75d  MOVUPS xmmword ptr [RSP + 0x90],XMM0
0527c765  MOVUPS xmmword ptr [RSP + 0xa0],XMM0
0527c76d  MOVUPS xmmword ptr [RSP + 0xb0],XMM0
0527c775  MOVUPS xmmword ptr [RSP + 0xc0],XMM0
0527c77d  MOVUPS xmmword ptr [RSP + 0xca],XMM0
0527c785  MOV qword ptr [RSP + 0xf8],0x0
0527c791  MOV qword ptr [RSP + 0x100],0x1
0527c79d  MOVUPS xmmword ptr [RSP + 0x108],XMM0
0527c7a5  MOVUPS xmmword ptr [RSP + 0x118],XMM0
0527c7ad  MOVUPS xmmword ptr [RSP + 0x128],XMM0
0527c7b5  MOVUPS xmmword ptr [RSP + 0x138],XMM0
0527c7bd  MOV qword ptr [RSP + 0x148],0x0
0527c7c9  MOV word ptr [RSP + 0x150],0x1
0527c7d3  LEA RAX,[RSP + 0x80]
0527c7db  MOV qword ptr [RSP + 0x260],RAX
0527c7e3  LEA RAX,[RSP + 0xf8]
0527c7eb  MOV qword ptr [RSP + 0x258],RAX
0527c7f3  MOV R15,qword ptr [RSP + 0xf0]
0527c7fb  LEA RDI,[R15 + 0x140]
0527c802  CALL 0x052be680
0527c807  MOV R14,RAX
0527c80a  MOV RBX,R15
0527c80d  MOV RDI,qword ptr [R15 + 0x20]
0527c811  MOV RAX,qword ptr [RDI]
0527c814  CALL qword ptr [RAX + 0x438]
0527c81a  MOV RCX,R14
0527c81d  ADD R14,0xa1810
0527c824  MOV RCX,qword ptr [RCX + 0xa2208]
0527c82b  CMP byte ptr [RCX + 0x9e7],0x1
0527c832  JNZ 0x0527c8bd
0527c838  MOV dword ptr [RCX + 0x8],EAX
0527c83b  MOV word ptr [RCX + 0x9e4],0x0
0527c844  MOV dword ptr [RCX + 0x9d4],0x0
0527c84e  MOV qword ptr [RCX + 0x9d8],0x0
0527c859  MOV dword ptr [RCX + 0xc],EAX
0527c85c  MOV EDX,0x5
0527c861  NOP dword ptr CS:[RAX + RAX*0x1]
0527c870  MOV ESI,EAX
0527c872  SHR ESI,0x1e
0527c875  XOR ESI,EAX
0527c877  IMUL EAX,ESI,0x6c078965
0527c87d  ADD RAX,RDX
0527c880  ADD RAX,-0x4
0527c884  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
0527c888  CMP RDX,0x191
0527c88f  JZ 0x0527c8ac
0527c891  MOV ESI,EAX
0527c893  SHR ESI,0x1e
0527c896  XOR ESI,EAX
0527c898  IMUL EAX,ESI,0x6c078965
0527c89e  ADD EAX,EDX
0527c8a0  ADD EAX,-0x3
0527c8a3  MOV dword ptr [RCX + RDX*0x4],EAX
0527c8a6  ADD RDX,0x2
0527c8aa  JMP 0x0527c870
0527c8ac  MOV RAX,0x18e00000270
0527c8b6  MOV qword ptr [RCX + 0x9cc],RAX
0527c8bd  MOV RAX,qword ptr [R14]
0527c8c0  MOV RDI,R14
0527c8c3  CALL qword ptr [RAX + 0x10]
0527c8c6  MOV dword ptr [RSP + 0x8],EAX
0527c8ca  MOV RAX,qword ptr [R14]
0527c8cd  MOV RDI,R14
0527c8d0  CALL qword ptr [RAX + 0x10]
0527c8d3  MOV EBP,EAX
0527c8d5  MOV R13,qword ptr [RSP + 0xe8]
0527c8dd  MOV R12D,dword ptr [R13 + 0x50]
0527c8e1  MOV R15D,dword ptr [R13 + 0x54]
0527c8e5  MOV RDI,qword ptr [RBX + 0x20]
0527c8e9  MOV RAX,qword ptr [RDI]
0527c8ec  CALL qword ptr [RAX + 0x438]
0527c8f2  MOV EDX,dword ptr [RSP + 0x8]
0527c8f6  MOV ECX,EDX
0527c8f8  SHR ECX,0x1f
0527c8fb  ADD ECX,EDX
0527c8fd  OR ECX,0x1
0527c900  IMUL R12D,ECX
0527c904  MOV ECX,EBP
0527c906  SHR ECX,0x1f
0527c909  ADD ECX,EBP
0527c90b  OR ECX,0x1
0527c90e  IMUL R15D,ECX
0527c912  ADD R15D,R12D
0527c915  XOR EAX,R15D
0527c918  MOV R8D,dword ptr [R13 + 0x50]
0527c91c  MOV R9D,dword ptr [R13 + 0x54]
0527c920  LEA RSI,[RSP + 0x170]
0527c928  MOV RDI,RBX
0527c92b  MOV RDX,R14
0527c92e  MOV ECX,EAX
0527c930  CALL 0x0ca70f80
0527c935  MOV ECX,dword ptr [R13 + 0x50]
0527c939  MOV R8D,dword ptr [R13 + 0x54]
0527c93d  LEA RSI,[RSP + 0x170]
0527c945  MOV RDI,RBX
0527c948  MOV RDX,R14
0527c94b  CALL 0x0ca72420
0527c950  MOV RAX,qword ptr [RBX + 0x78]
0527c954  MOV R12,qword ptr [RAX + 0x30]
0527c958  MOV R13,qword ptr [RAX + 0x38]
0527c95c  CMP R12,R13
0527c95f  JZ 0x0527ca3b
0527c965  MOV RAX,qword ptr [RSP + 0x20]
0527c96a  LEA RCX,[RAX + 0x1538]
0527c971  MOV qword ptr [RSP + 0x10],RCX
0527c976  LEA RBX,[RAX + 0x38]
0527c97a  MOV qword ptr [RSP + 0x8],RAX
0527c97f  LEA RBP,[RAX + 0x44]
0527c983  LEA R14,[RSP + 0x50]
0527c988  JMP 0x0527c9a2
0527c98a  MOV EAX,0x20
0527c98f  MOV RCX,qword ptr [RDI]
0527c992  CALL qword ptr [RCX + RAX*0x1]
0527c995  ADD R12,0x8
0527c999  CMP R12,R13
0527c99c  JZ 0x0527ca3b
0527c9a2  MOV R15,qword ptr [R12]
0527c9a6  MOV RAX,qword ptr [R15]
0527c9a9  MOV RDI,R15
0527c9ac  CALL qword ptr [RAX + 0x10]
0527c9af  TEST AL,AL
0527c9b1  JZ 0x0527c995
0527c9b3  MOV EAX,dword ptr [RBX + 0x8]
0527c9b6  MOV dword ptr [RSP + 0x160],EAX
0527c9bd  MOV RAX,qword ptr [RBX]
0527c9c0  MOV qword ptr [RSP + 0x158],RAX
0527c9c8  MOV EAX,dword ptr [RBP + 0x8]
0527c9cb  LEA RCX,[RSP + 0x164]
0527c9d3  MOV dword ptr [RCX + 0x8],EAX
0527c9d6  MOV RAX,qword ptr [RBP]
0527c9da  MOV qword ptr [RCX],RAX
0527c9dd  LEA RAX,[0xf461970]
0527c9e4  MOV qword ptr [RSP + 0x50],RAX
0527c9e9  MOV RAX,qword ptr [RSP + 0x10]
0527c9ee  MOV qword ptr [RSP + 0x58],RAX
0527c9f3  MOV RAX,qword ptr [RSP + 0x8]
0527c9f8  MOV qword ptr [RSP + 0x60],RAX
0527c9fd  LEA RSI,[RSP + 0x158]
0527ca05  MOV qword ptr [RSP + 0x68],RSI
0527ca0a  MOV qword ptr [RSP + 0x70],R14
0527ca0f  MOV RDI,R15
0527ca12  MOV RDX,R14
0527ca15  CALL 0x0d351180
0527ca1a  MOV RDI,qword ptr [RSP + 0x70]
0527ca1f  CMP RDI,R14
0527ca22  JZ 0x0527c98a
0527ca28  MOV EAX,0x28
0527ca2d  TEST RDI,RDI
0527ca30  JNZ 0x0527c98f
0527ca36  JMP 0x0527c995
0527ca3b  MOV RDI,qword ptr [RSP + 0x138]
0527ca43  TEST RDI,RDI
0527ca46  JZ 0x0527ca60
0527ca48  MOV qword ptr [RSP + 0x140],RDI
0527ca50  MOV RSI,qword ptr [RSP + 0x148]
0527ca58  SUB RSI,RDI
0527ca5b  CALL 0x0412a280
0527ca60  MOV RDI,qword ptr [RSP + 0x120]
0527ca68  TEST RDI,RDI
0527ca6b  MOVZX EBP,byte ptr [RSP + 0x7]
0527ca70  JZ 0x0527ca8a
0527ca72  MOV qword ptr [RSP + 0x128],RDI
0527ca7a  MOV RSI,qword ptr [RSP + 0x130]
0527ca82  SUB RSI,RDI
0527ca85  CALL 0x0412a280
0527ca8a  MOV RDI,qword ptr [RSP + 0x108]
0527ca92  TEST RDI,RDI
0527ca95  JZ 0x0527caaf
0527ca97  MOV qword ptr [RSP + 0x110],RDI
0527ca9f  MOV RSI,qword ptr [RSP + 0x118]
0527caa7  SUB RSI,RDI
0527caaa  CALL 0x0412a280
0527caaf  MOV RDI,qword ptr [RSP + 0xc0]
0527cab7  TEST RDI,RDI
0527caba  JZ 0x0527cad4
0527cabc  MOV qword ptr [RSP + 0xc8],RDI
0527cac4  MOV RSI,qword ptr [RSP + 0xd0]
0527cacc  SUB RSI,RDI
0527cacf  CALL 0x0412a280
0527cad4  MOV RDI,qword ptr [RSP + 0xa8]
0527cadc  TEST RDI,RDI
0527cadf  JZ 0x0527caf9
0527cae1  MOV qword ptr [RSP + 0xb0],RDI
0527cae9  MOV RSI,qword ptr [RSP + 0xb8]
0527caf1  SUB RSI,RDI
0527caf4  CALL 0x0412a280
0527caf9  MOV RDI,qword ptr [RSP + 0x90]
0527cb01  TEST RDI,RDI
0527cb04  JZ 0x0527cb1e
0527cb06  MOV qword ptr [RSP + 0x98],RDI
0527cb0e  MOV RSI,qword ptr [RSP + 0xa0]
0527cb16  SUB RSI,RDI
0527cb19  CALL 0x0412a280
0527cb1e  LEA RDI,[RSP + 0x170]
0527cb26  CALL 0x0c9d0f40
0527cb2b  LEA RAX,[0xf3f24c8]
0527cb32  MOV qword ptr [RSP + 0x2e0],RAX
0527cb3a  LEA RDI,[RSP + 0x360]
0527cb42  CALL 0x052a3830
0527cb47  LEA RDI,[RSP + 0x2e0]
0527cb4f  CALL 0x0cb3ae10
0527cb54  MOVZX EAX,byte ptr [RSP + 0x48]
0527cb59  TEST AL,0x1
0527cb5b  JZ 0x0527cbde
0527cb61  MOV R14,qword ptr [RSP + 0x30]
0527cb66  TEST R14,R14
0527cb69  JZ 0x0527cbde
0527cb6b  MOV R15,qword ptr [RSP + 0x38]
0527cb70  MOV RDI,R14
0527cb73  CMP R14,R15
0527cb76  JNZ 0x0527cb89
0527cb78  JMP 0x0527cbcc
0527cb80  ADD R15,-0x20
0527cb84  CMP R15,R14
0527cb87  JZ 0x0527cbc7
0527cb89  CMP byte ptr [R15 + -0x8],0x1
0527cb8e  JNZ 0x0527cb99
0527cb90  MOV RDI,qword ptr [R15 + -0x10]
0527cb94  CALL 0x0412d6b0
0527cb99  MOV RBX,qword ptr [R15 + -0x18]
0527cb9d  TEST RBX,RBX
0527cba0  JZ 0x0527cb80
0527cba2  MOV RAX,-0x1
0527cba9  XADD.LOCK qword ptr [RBX + 0x8],RAX
0527cbaf  TEST RAX,RAX
0527cbb2  JNZ 0x0527cb80
0527cbb4  MOV RAX,qword ptr [RBX]
0527cbb7  MOV RDI,RBX
0527cbba  CALL qword ptr [RAX + 0x10]
0527cbbd  MOV RDI,RBX
0527cbc0  CALL 0x0412c2d0
0527cbc5  JMP 0x0527cb80
0527cbc7  MOV RDI,qword ptr [RSP + 0x30]
0527cbcc  MOV qword ptr [RSP + 0x38],R14
0527cbd1  MOV RSI,qword ptr [RSP + 0x40]
0527cbd6  SUB RSI,RDI
0527cbd9  CALL 0x0412a280
0527cbde  MOV RBX,qword ptr [RSP + 0x28]
0527cbe3  TEST RBX,RBX
0527cbe6  JZ 0x0527cc0b
0527cbe8  MOV RAX,-0x1
0527cbef  XADD.LOCK qword ptr [RBX + 0x8],RAX
0527cbf5  TEST RAX,RAX
0527cbf8  JNZ 0x0527cc0b
0527cbfa  MOV RAX,qword ptr [RBX]
0527cbfd  MOV RDI,RBX
0527cc00  CALL qword ptr [RAX + 0x10]
0527cc03  MOV RDI,RBX
0527cc06  CALL 0x0412c2d0
0527cc0b  MOV EAX,EBP
0527cc0d  ADD RSP,0x508
0527cc14  POP RBX
0527cc15  POP R12
0527cc17  POP R13
0527cc19  POP R14
0527cc1b  POP R15
0527cc1d  POP RBP
0527cc1e  RET
```

## `0527cd10` — OverworldGenerator slot 11

- Ghidra name: `OverworldGenerator__structurePostProcessChunk`
- Body: `[[0527cd10, 0527ceb1] [0527cec0, 0527cf73] [0527cf80, 0527de36] [0527de40, 0527de81] [0527de90, 0527df03] [0527df10, 0527e0a3] [0527e0b0, 0527e142] [0527e150, 0527e169] [0527e170, 0527e5bd] [0527e5c0, 0527e66e]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte OverworldGenerator__structurePostProcessChunk(long *param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  uint uVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  undefined *puVar26;
  long *plVar27;
  bool bVar28;
  undefined1 auVar29 [12];
  undefined8 in_stack_fffffffffffff958;
  long lStack_670;
  long *plStack_668;
  uint uStack_65c;
  undefined8 uStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  ulong uStack_638;
  undefined1 auStack_630 [12];
  long lStack_620;
  ulong uStack_618;
  long lStack_610;
  undefined8 uStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  byte bStack_5e0;
  undefined7 uStack_5df;
  undefined8 uStack_5d0;
  byte bStack_5b8;
  undefined7 uStack_5b7;
  undefined8 uStack_5a8;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  uint uStack_580;
  uint uStack_57c;
  undefined8 uStack_578;
  ulong uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  int iStack_520;
  int iStack_51c;
  ulong uStack_518;
  undefined4 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined2 uStack_450;
  int *piStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined2 uStack_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  undefined2 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  byte bStack_3d0;
  int iStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  long *plStack_3a0;
  short sStack_386;
  undefined8 *puStack_2e0;
  int **ppiStack_2d8;
  undefined *apuStack_258 [4];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_1d8 [144];
  undefined1 auStack_148 [144];
  int iStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_90;
  
  lVar14 = (**(code **)(*(long *)param_1[4] + 0x568))();
  puVar18 = (undefined *)(lVar14 + 0x50);
  puVar21 = puVar18;
  if ((*(char *)(lVar14 + 0x77) == '\0') &&
     (((puVar26 = (undefined *)(lVar14 + 0x70), *(char *)(lVar14 + 0x68) != '\0' ||
       (puVar21 = puVar26, (*(byte *)(lVar14 + 0x56) & 1) != 0)) &&
      (cVar4 = func_0x04fa7a10(puVar26,puVar18), puVar21 = puVar18, cVar4 != '\0')))) {
    puVar21 = puVar26;
  }
  puVar18 = &DAT_0f72b850;
  if (((puVar21[6] | puVar21[0x18]) & 1) != 0) {
    puVar18 = puVar21;
  }
  bVar5 = 1;
  if ((DAT_0f5a2858 == '\0') && (puVar18[0x18] == '\0')) {
    if (((DAT_0f5a2846 & 1) == 0) || (puVar18[7] != '\0')) {
      bVar5 = 0;
    }
    else {
      bVar5 = func_0x04fa7a10(puVar18,0xf5a2840);
    }
  }
  func_0x0412d550(param_2 + 0x22);
  lVar14 = param_2[0x34];
  lVar20 = param_2[0x35];
  func_0x0412d610(param_2 + 0x22);
  iStack_520 = (int)lVar14 + 1;
  iStack_51c = (int)lVar20 + 1;
  (**(code **)(*param_2 + 0x20))(&lStack_670,param_2,&iStack_520);
  lVar14 = lStack_670;
  func_0x0ca8a1f0(&lStack_3e8,*(undefined8 *)(*(long *)(lStack_670 + 0x30) + 0x198),
                  lStack_670 + 0x50,param_2);
  bVar3 = bStack_3d0;
  if (bStack_3d0 == 0) goto LAB_0527e597;
  func_0x0cb35860(apuStack_258,param_2);
  func_0x0412d550(auStack_148);
  lStack_610 = lVar14;
  func_0x0412d610(auStack_148);
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffff958 >> 0x20);
  iVar10 = iStack_b8;
  iVar11 = iStack_b0;
  for (iVar24 = iStack_90; iVar24 != 0; iVar24 = iVar24 + -1) {
    uStack_4a8 = CONCAT44(iVar11,iVar10);
    (**(code **)(apuStack_258[0] + 0x20))(&iStack_3c8,apuStack_258,&uStack_4a8);
    if ((CONCAT44(uStack_3c4,iStack_3c8) == 0) ||
       (*(byte *)(CONCAT44(uStack_3c4,iStack_3c8) + 0xb8) < 2)) {
      uStack_608 = (undefined *)0x0;
      plStack_600 = (long *)0x0;
joined_r0x0527cf96:
      if (CONCAT44(uStack_3bc,iStack_3c0) != 0) {
        plVar27 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
        LOCK();
        plVar17 = plVar27 + 1;
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          func_0x0412c2d0(plVar27);
        }
      }
    }
    else {
      uStack_608 = (undefined *)CONCAT44(uStack_3c4,iStack_3c8);
      plStack_600 = (long *)CONCAT44(uStack_3bc,iStack_3c0);
      if (plStack_600 != (long *)0x0) {
        LOCK();
        plStack_600[1] = plStack_600[1] + 1;
        UNLOCK();
        goto joined_r0x0527cf96;
      }
    }
    if ((uStack_608 != (undefined *)0x0) && (6 < (byte)uStack_608[0xb8])) {
      iStack_3c8 = (int)uStack_4a8 << 4;
      iStack_3c0 = uStack_4a8._4_4_ << 4;
      uStack_3c4 = 0;
      piStack_448 = &iStack_3c8;
      func_0x0cb59800(auStack_148,&piStack_448);
    }
    plVar17 = plStack_600;
    if (plStack_600 != (long *)0x0) {
      LOCK();
      plVar27 = plStack_600 + 1;
      lVar14 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_600 + 0x10))(plStack_600);
        func_0x0412c2d0(plVar17);
      }
    }
    uVar13 = (undefined4)((ulong)in_stack_fffffffffffff958 >> 0x20);
    iVar12 = iVar11 + 1;
    if (iStack_a4 <= iVar11) {
      iVar12 = iStack_b0;
    }
    iVar8 = iVar10 + 1;
    bVar28 = iVar10 < iStack_ac;
    iVar10 = iStack_b8;
    if (bVar28) {
      iVar12 = iVar11;
      iVar10 = iVar8;
    }
    iVar11 = iVar12;
  }
  func_0x0c9d0c10(&iStack_3c8,uStack_238,uStack_230,apuStack_258,0,1,CONCAT44(uVar13,1),0);
  piStack_448 = (int *)0x0;
  uStack_440 = 1;
  lStack_438 = 0;
  lStack_430 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  lStack_418 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  uStack_400 = 0;
  uStack_3fe = 0;
  uStack_3f8 = 0;
  uStack_3f6 = 0;
  uStack_3f0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 1;
  lStack_498 = 0;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_480 = 0;
  lStack_478 = 0;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  lStack_458 = 0;
  uStack_450 = 1;
  ppiStack_2d8 = &piStack_448;
  puStack_2e0 = &uStack_4a8;
  uStack_618 = func_0x0c9e2ed0(&iStack_3c8,lStack_670 + 0x44);
  lVar20 = lStack_610;
  lStack_620 = FUN_052be680(param_1 + 0x28);
  iVar10 = *(int *)(lVar20 + 0x50);
  iVar11 = *(int *)(lVar20 + 0x54);
  uVar15 = (**(code **)(*(long *)param_1[4] + 0x438))();
  plVar17 = (long *)(lStack_620 + 0xa1810);
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    *(int *)(lVar14 + 8) = (int)uVar15;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(int *)(lVar14 + 0xc) = (int)uVar15;
    lVar19 = 5;
    while( true ) {
      uVar15 = ((ulong)(((uint)(uVar15 >> 0x1e) & 3 ^ (uint)uVar15) * 0x6c078965) + lVar19) - 4;
      uVar7 = (uint)uVar15;
      *(uint *)(lVar14 + -4 + lVar19 * 4) = uVar7;
      if (lVar19 == 0x191) break;
      uVar7 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar7) * 0x6c078965 + (int)lVar19) - 3;
      uVar15 = (ulong)uVar7;
      *(uint *)(lVar14 + lVar19 * 4) = uVar7;
      lVar19 = lVar19 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  iVar8 = (**(code **)(*plVar17 + 0x10))();
  iVar9 = (**(code **)(*plVar17 + 0x10))();
  iVar24 = *(int *)(lVar20 + 0x50);
  iVar12 = *(int *)(lVar20 + 0x54);
  uVar7 = (**(code **)(*(long *)param_1[4] + 0x438))();
  uStack_57c = iVar8 - (iVar8 >> 0x1f) | 1;
  uStack_580 = iVar9 - (iVar9 >> 0x1f) | 1;
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    uVar7 = uVar7 ^ iVar24 * uStack_57c + iVar12 * uStack_580;
    *(uint *)(lVar14 + 8) = uVar7;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(uint *)(lVar14 + 0xc) = uVar7;
    lVar20 = 5;
    while( true ) {
      uVar15 = ((ulong)((uVar7 >> 0x1e ^ uVar7) * 0x6c078965) + lVar20) - 4;
      uVar7 = (uint)uVar15;
      *(uint *)(lVar14 + -4 + lVar20 * 4) = uVar7;
      if (lVar20 == 0x191) break;
      uVar7 = (((uint)(uVar15 >> 0x1e) & 3 ^ uVar7) * 0x6c078965 + (int)lVar20) - 3;
      *(uint *)(lVar14 + lVar20 * 4) = uVar7;
      lVar20 = lVar20 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  iVar24 = (int)*(short *)(param_1[5] + 0xac);
  uVar1 = *(ushort *)(uStack_618 + 0x168);
  cVar4 = (**(code **)(**(long **)(lStack_670 + 0x28) + 0xbe8))();
  uVar25 = iVar10 * 0x10;
  uStack_638 = (ulong)uVar25;
  uVar7 = iVar11 * 0x10;
  if (cVar4 == '\0') {
    bVar28 = uVar1 != 2 && uVar1 != 0x11;
LAB_0527d3c8:
    if ((bVar28 & bVar5) != 1) goto LAB_0527d405;
    cVar4 = (**(code **)(**(long **)(lStack_670 + 0x28) + 0xbe8))();
    uVar23 = 4;
    if (cVar4 != '\0') {
      uVar23 = 0x20;
    }
    iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,uVar23);
    if (iVar10 != 0) goto LAB_0527d405;
    iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
    iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x80);
    iVar12 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
    if ((iVar11 < iVar24 + -3) && ((char)param_1[0x26] != '\0')) goto LAB_0527d405;
    auStack_630._8_4_ = iVar12 + uVar7 + 3;
    auStack_630._0_8_ = CONCAT44(iVar11,iVar10 + uVar25 + 3);
    lStack_548 = 0;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    if ((DAT_0f713f08 & 1) == 0) {
      uStack_530 = _DAT_0f713f18;
      uStack_540 = CONCAT71(uRam000000000f713f09,DAT_0f713f08);
      uStack_538 = _DAT_0f713f10;
    }
    else {
      func_0x04885070(&uStack_540,_DAT_0f713f18,_DAT_0f713f10);
    }
    lStack_548 = _DAT_0f713f00;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    if ((DAT_0f71bd90 & 1) == 0) {
      uStack_4c0 = _DAT_0f71bda0;
      uStack_4d0 = CONCAT71(uRam000000000f71bd91,DAT_0f71bd90);
      uStack_4c8 = _DAT_0f71bd98;
    }
    else {
      func_0x04885070(&uStack_4d0,_DAT_0f71bda0,_DAT_0f71bd98);
    }
    uStack_4d8 = _DAT_0f71bd88;
    uStack_658 = 0;
    plStack_650 = (long *)0x0;
    uStack_648 = 0;
    FUN_052ce620(&uStack_608,&lStack_548,&uStack_4d8,&uStack_658);
    if ((uStack_4d0 & 1) != 0) {
      func_0x0412a280(uStack_4c0,uStack_4d0 & 0xfffffffffffffffe);
    }
    if ((uStack_540 & 1) != 0) {
      func_0x0412a280(uStack_530,uStack_540 & 0xfffffffffffffffe);
    }
    FUN_052ce810(&uStack_608,&iStack_3c8,auStack_630);
LAB_0527d82a:
    uStack_608 = &UNK_0efa00a8;
    if (lStack_598 != 0) {
      lStack_590 = lStack_598;
      func_0x0412a280(lStack_598,lStack_588 - lStack_598);
    }
    if ((bStack_5b8 & 1) != 0) {
      func_0x0412a280(uStack_5a8,CONCAT71(uStack_5b7,bStack_5b8) & 0xfffffffffffffffe);
    }
    if ((bStack_5e0 & 1) != 0) {
      func_0x0412a280(uStack_5d0,CONCAT71(uStack_5df,bStack_5e0) & 0xfffffffffffffffe);
    }
  }
  else {
    uVar22 = (uint)uVar1;
    if (((0x27 < uVar22) || ((0xf800030884U >> ((ulong)uVar22 & 0x3f) & 1) == 0)) &&
       (1 < uVar22 - 0xa3)) {
      bVar28 = true;
      goto LAB_0527d3c8;
    }
LAB_0527d405:
    if (((char)param_1[0x26] == '\0') &&
       (iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,8), iVar10 == 0)) {
      iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x78);
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar11 + 8);
      iVar12 = (**(code **)(*plVar17 + 0x18))(plVar17,9);
      if ((iVar24 + -3 <= iVar11) &&
         ((iVar11 <= iVar24 || (iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,10), iVar24 == 0))))
      {
        auStack_630._8_4_ = uVar7 + iVar12 + 3;
        auStack_630._0_8_ = CONCAT44(iVar11,(int)uStack_638 + iVar10 + 3);
        uStack_578 = 0;
        uStack_570 = 0;
        uStack_568 = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        if ((DAT_0f713b98 & 1) == 0) {
          uStack_560 = _DAT_0f713ba8;
          uStack_570 = CONCAT71(uRam000000000f713b99,DAT_0f713b98);
          uStack_568 = _DAT_0f713ba0;
        }
        else {
          func_0x04885070(&uStack_570,_DAT_0f713ba8,_DAT_0f713ba0);
        }
        uStack_578 = _DAT_0f713b90;
        uStack_508 = 0;
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        uStack_4e8 = 0;
        if ((DAT_0f71bd90 & 1) == 0) {
          uStack_4f0 = _DAT_0f71bda0;
          uStack_500 = CONCAT71(uRam000000000f71bd91,DAT_0f71bd90);
          uStack_4f8 = _DAT_0f71bd98;
        }
        else {
          func_0x04885070(&uStack_500,_DAT_0f71bda0,_DAT_0f71bd98);
        }
        uStack_508 = _DAT_0f71bd88;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        uStack_648 = 0;
        FUN_052ce620(&uStack_608,&uStack_578,&uStack_508,&uStack_658);
        if ((uStack_500 & 1) != 0) {
          func_0x0412a280(uStack_4f0,uStack_500 & 0xfffffffffffffffe);
        }
        if ((uStack_570 & 1) != 0) {
          func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
        }
        FUN_052ce810(&uStack_608,&iStack_3c8,auStack_630);
        goto LAB_0527d82a;
      }
    }
  }
  if ((char)param_1[0x26] == '\0') {
    iVar10 = 8;
    if (bVar5 == 0) {
      uVar25 = (uint)uStack_638;
      if (*(short *)(param_1[5] + 0xa8) < 0) {
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        uVar25 = (uint)uStack_638 | 8;
        uStack_65c = uVar7 | 8;
        plVar27 = param_1 + 0x36;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        plStack_600._0_4_ = iVar24 + uStack_65c;
        FUN_052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        plStack_600._0_4_ = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        plStack_600._0_4_ = (int)plStack_600 + uStack_65c;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        FUN_052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        plStack_600._0_4_ = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        plStack_600._0_4_ = (int)plStack_600 + uStack_65c;
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        FUN_052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        iVar24 = *(short *)(param_1[5] + 0xa8) + 6;
        iVar10 = -iVar24;
        if (iVar10 < 0) {
          iVar10 = iVar24;
        }
        iVar10 = (**(code **)(*plVar17 + 0x18))(plVar17,iVar10);
        sVar2 = *(short *)(param_1[5] + 0xa8);
        iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
        uStack_608 = (undefined *)CONCAT44(iVar10 + sVar2 + 6,iVar11 + uVar25);
        plStack_600 = (long *)CONCAT44(plStack_600._4_4_,iVar24 + uStack_65c);
        FUN_052d8680(plVar27,&iStack_3c8,&uStack_608,plVar17);
        iVar10 = 10;
        goto LAB_0527db48;
      }
    }
    else {
LAB_0527db48:
      uVar25 = (uint)uStack_638;
    }
    do {
      iVar11 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
      uVar13 = (**(code **)(*param_1 + 0x1d0))();
      uVar13 = (**(code **)(*plVar17 + 0x18))(plVar17,uVar13);
      iVar24 = (**(code **)(*plVar17 + 0x18))(plVar17,0x10);
      uStack_608 = (undefined *)CONCAT44(uVar13,iVar11 + (uVar25 | 8));
      plStack_600 = (long *)CONCAT44(plStack_600._4_4_,iVar24 + (uVar7 | 8));
      FUN_052d8680(param_1 + 0x36,&iStack_3c8,&uStack_608);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  lVar20 = (**(code **)(*plStack_3a0 + 0x568))();
  lVar14 = lStack_610;
  uVar15 = uStack_638;
  if ((*(char *)(lVar20 + 0x4b9) == '\x01') &&
     (lVar20 = (**(code **)(*plStack_3a0 + 0x568))(), *(char *)(lVar20 + 0x4ba) == '\0')) {
    plStack_600 = (long *)CONCAT62(plStack_600._2_6_,0x101);
    uStack_5f8 = _DAT_0f6b3a90;
    uStack_5f0 = 0;
    uStack_608 = &UNK_0f474ec0;
    lVar20 = (**(code **)(*(long *)param_1[4] + 0x568))();
    lVar19 = func_0x0d2279e0(lVar20 + 0x518,0xf71d600);
    if ((lVar19 == 0) && (lVar19 = func_0x0d2279e0(lVar20 + 0x4f0,0xf71d600), lVar19 == 0)) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = (undefined *)0x0;
      if (*(int *)(lVar19 + 0x50) == 6) {
        puVar18 = (undefined *)(lVar19 + 0x38);
      }
    }
    puVar21 = &UNK_01de6224;
    if (puVar18 != (undefined *)0x0) {
      puVar21 = puVar18;
    }
    func_0x0d50a850(&uStack_608,&iStack_3c8,puVar21,plVar17);
  }
  iVar10 = *(int *)(lVar14 + 0x50);
  iVar11 = *(int *)(lVar14 + 0x54);
  uVar25 = (**(code **)(*(long *)param_1[4] + 0x438))();
  lVar14 = *(long *)(lStack_620 + 0xa2208);
  if (*(char *)(lVar14 + 0x9e7) == '\x01') {
    uVar25 = uVar25 ^ iVar10 * uStack_57c + iVar11 * uStack_580;
    *(uint *)(lVar14 + 8) = uVar25;
    *(undefined2 *)(lVar14 + 0x9e4) = 0;
    *(undefined4 *)(lVar14 + 0x9d4) = 0;
    *(undefined8 *)(lVar14 + 0x9d8) = 0;
    *(uint *)(lVar14 + 0xc) = uVar25;
    lVar20 = 5;
    while( true ) {
      uVar16 = ((ulong)((uVar25 >> 0x1e ^ uVar25) * 0x6c078965) + lVar20) - 4;
      uVar25 = (uint)uVar16;
      *(uint *)(lVar14 + -4 + lVar20 * 4) = uVar25;
      if (lVar20 == 0x191) break;
      uVar25 = (((uint)(uVar16 >> 0x1e) & 3 ^ uVar25) * 0x6c078965 + (int)lVar20) - 3;
      *(uint *)(lVar14 + lVar20 * 4) = uVar25;
      lVar20 = lVar20 + 2;
    }
    *(undefined8 *)(lVar14 + 0x9cc) = 0x18e00000270;
  }
  (**(code **)(*param_1 + 0x1c0))(param_1,uStack_618,lStack_670,&iStack_3c8,plVar17);
  uVar23 = func_0x0cc41df0(0xf6ff9e0,0xf712e90,1);
  lStack_620 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f715218,1);
  uStack_618 = uVar15 & 0xffffffff;
  lVar14 = 0;
  do {
    lVar20 = uStack_618 + lVar14;
    iVar10 = 0;
    lStack_610 = lVar14;
    do {
      uStack_608 = (undefined *)CONCAT44((int)(uVar7 + iVar10) >> 4,(int)lVar20 >> 4);
      lVar19 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x148))(&iStack_3c8,&uStack_608);
      if (lVar19 == 0) {
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
      }
      else {
        uStack_608 = (undefined *)
                     (CONCAT44(uStack_608._4_4_,
                               CONCAT22((short)((ulong)lVar20 >> 0x20) -
                                        *(short *)(*(long *)(lVar19 + 0x30) + 0xa8),
                                        CONCAT11((char)iVar10,(char)lVar14))) & 0xffffffffffffff0f);
        auVar29 = func_0x0cafbac0(lVar19,&uStack_608);
      }
      uStack_510 = auVar29._8_4_;
      uStack_518 = auVar29._0_8_ & 0xffffffff | (auVar29._0_8_ & 0xffffffff00000000) - 0x100000000;
      auStack_630 = auVar29;
      cVar4 = func_0x0c902a10(&iStack_3c8,&uStack_518,0);
      if (cVar4 != '\0') {
        uStack_5f8 = 0;
        uStack_5f0 = 0;
        uStack_608 = (undefined *)0x0;
        plStack_600 = (long *)0x0;
        uStack_5e8 = 1;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        func_0x0c9d4820(&iStack_3c8,&uStack_518,uVar23,2,&uStack_658,0,&uStack_608);
        plVar17 = plStack_650;
        if (plStack_650 != (long *)0x0) {
          LOCK();
          plVar27 = plStack_650 + 1;
          lVar19 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plStack_650 + 0x10))(plStack_650);
            func_0x0412c2d0(plVar17);
          }
        }
      }
      cVar4 = func_0x0c9028a0(&iStack_3c8,auStack_630);
      if (cVar4 != '\0') {
        uStack_5f8 = 0;
        uStack_5f0 = 0;
        uStack_608 = (undefined *)0x0;
        plStack_600 = (long *)0x0;
        uStack_5e8 = 1;
        uStack_658 = 0;
        plStack_650 = (long *)0x0;
        func_0x0c9d4820(&iStack_3c8,auStack_630,lStack_620,2,&uStack_658,0,&uStack_608);
        plVar17 = plStack_650;
        if (plStack_650 != (long *)0x0) {
          LOCK();
          plVar27 = plStack_650 + 1;
          lVar19 = *plVar27;
          *plVar27 = *plVar27 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plStack_650 + 0x10))(plStack_650);
            func_0x0412c2d0(plVar17);
          }
        }
      }
      lVar19 = lStack_670;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x10);
    lVar14 = lStack_610 + 1;
  } while (lVar14 != 0x10);
  lVar14 = 0;
  do {
    uStack_658 = CONCAT44(*(int *)(&UNK_01641944 + lVar14) + *(int *)(lVar19 + 0x3c),
                          *(int *)(&UNK_01641940 + lVar14) + *(int *)(lVar19 + 0x38));
    plStack_650 = (long *)CONCAT44(plStack_650._4_4_,
                                   *(int *)(&UNK_01641948 + lVar14) + *(int *)(lVar19 + 0x40));
    lVar20 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x138))(&iStack_3c8,&uStack_658);
    sVar2 = sStack_386;
    if (lVar20 != 0) {
      sVar2 = *(short *)(*(long *)(lVar20 + 0x30) + 0xa8) +
              *(short *)(lVar20 + 0xbd0 +
                        (ulong)(((uint)plStack_650 & 0xf) << 4 | (uint)uStack_658 & 0xf) * 2);
    }
    if (uStack_658._4_4_ < sVar2) {
      bVar5 = 1;
      do {
        lVar20 = (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x10))(&iStack_3c8,&uStack_658);
        bVar28 = *(long *)(*(long *)(lVar20 + 0x68) + 200) != _DAT_0f713f00;
        if ((bool)(~bVar5 & 1) || bVar28) {
          bVar5 = bVar28 | bVar5;
        }
        else {
          uVar23 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
          uStack_5f8 = 0;
          uStack_5f0 = 0;
          uStack_608 = (undefined *)0x0;
          plStack_600 = (long *)0x0;
          uStack_5e8 = 1;
          (**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0xf8))
                    (&iStack_3c8,&uStack_658,uVar23,0,0,&uStack_608);
          uVar23 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
          bVar5 = 0;
          func_0x0c9d2c20(&piStack_448,&iStack_3c8,&uStack_658,uVar23,1,0);
        }
        iVar10 = uStack_658._4_4_ + 1;
        uStack_658 = CONCAT44(iVar10,(uint)uStack_658);
      } while (iVar10 < sVar2);
    }
    lVar14 = lVar14 + 0xc;
  } while (lVar14 != 0x2d0);
  cVar4 = func_0x0cafcba0(lStack_670);
  if (cVar4 != '\0') {
    func_0x0cafad60(lStack_670,0);
    func_0x0cafca30(lStack_670,&iStack_3c8);
  }
  func_0x0c9e7730(&piStack_448,*(undefined8 *)(lStack_670 + 0xf8));
  plVar17 = (long *)(**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x150))(&iStack_3c8);
  bVar5 = (**(code **)(*plVar17 + 0xc38))(plVar17);
  bVar6 = (**(code **)(*plStack_3a0 + 0x9f0))();
  if (((byte)(bVar5 | bVar6 ^ 1) == 1) && (lStack_430 != lStack_438)) {
    uVar15 = 0;
    do {
      func_0x0c9e4770(&piStack_448,&iStack_3c8,&UNK_01d38818,0x7fffffff,1);
      if (lStack_430 == lStack_438) break;
      bVar28 = uVar15 < 0x7f;
      uVar15 = uVar15 + 1;
    } while (bVar28);
  }
  plVar17 = (long *)(**(code **)(CONCAT44(uStack_3c4,iStack_3c8) + 0x150))(&iStack_3c8);
  bVar5 = (**(code **)(*plVar17 + 0xc38))(plVar17);
  bVar6 = (**(code **)(*plStack_3a0 + 0x9f0))();
  if (((byte)(bVar5 | bVar6 ^ 1) == 1) && (lStack_490 != lStack_498)) {
    uVar15 = 0;
    do {
      func_0x0c9e4770(&uStack_4a8,&iStack_3c8,&UNK_01d38818,0x7fffffff,1);
      if (lStack_490 == lStack_498) break;
      bVar28 = uVar15 < 0x7f;
      uVar15 = uVar15 + 1;
    } while (bVar28);
  }
  func_0x0c9e7730(*(undefined8 *)(lStack_670 + 0xf8),&piStack_448);
  func_0x0c9e7730(*(undefined8 *)(lStack_670 + 0x100),&uStack_4a8);
  plVar17 = *(long **)(lStack_670 + 0xfd0);
  *(undefined8 *)(lStack_670 + 0xfd0) = 0;
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    if (lVar14 != 0) {
      plVar17[1] = lVar14;
      func_0x0412a280(lVar14,plVar17[2] - lVar14);
    }
    func_0x0412a280(plVar17,0x18);
  }
  func_0x0cafd630(lStack_670);
  if (lStack_468 != 0) {
    lStack_460 = lStack_468;
    func_0x0412a280(lStack_468,lStack_458 - lStack_468);
  }
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    func_0x0412a280(lStack_480,lStack_470 - lStack_480);
  }
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    func_0x0412a280(lStack_498,lStack_488 - lStack_498);
  }
  if (lStack_408 != 0) {
    uStack_400 = (undefined2)lStack_408;
    uStack_3fe = (undefined6)((ulong)lStack_408 >> 0x10);
    func_0x0412a280(lStack_408,CONCAT62(uStack_3f6,uStack_3f8) - lStack_408);
  }
  if (lStack_420 != 0) {
    lStack_418 = lStack_420;
    func_0x0412a280(lStack_420,lStack_410 - lStack_420);
  }
  if (lStack_438 != 0) {
    lStack_430 = lStack_438;
    func_0x0412a280(lStack_438,lStack_428 - lStack_438);
  }
  func_0x0c9d0f40(&iStack_3c8);
  apuStack_258[0] = &UNK_0f3f24c8;
  FUN_052a3830(auStack_1d8);
  func_0x0cb3ae10(apuStack_258);
LAB_0527e597:
  lVar14 = lStack_3e8;
  if (((bStack_3d0 & 1) != 0) && (lVar20 = lStack_3e0, lStack_3e8 != 0)) {
    for (; lVar14 != lVar20; lVar20 = lVar20 + -0x20) {
      if (*(char *)(lVar20 + -8) == '\x01') {
        func_0x0412d6b0(*(undefined8 *)(lVar20 + -0x10));
      }
      plVar17 = *(long **)(lVar20 + -0x18);
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar27 = plVar17 + 1;
        lVar19 = *plVar27;
        *plVar27 = *plVar27 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
    }
    lStack_3e0 = lVar14;
    func_0x0412a280(lStack_3e8,lStack_3d8 - lStack_3e8);
  }
  if (plStack_668 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_668 + 1;
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_668 + 0x10))(plStack_668);
      func_0x0412c2d0(plStack_668);
    }
  }
  return bVar3;
}


```

### Assembly

```asm
0527cd10  PUSH RBP
0527cd11  PUSH R15
0527cd13  PUSH R14
0527cd15  PUSH R13
0527cd17  PUSH R12
0527cd19  PUSH RBX
0527cd1a  SUB RSP,0x678
0527cd21  MOV R15,RSI
0527cd24  MOV R12,RDI
0527cd27  MOV RDI,qword ptr [RDI + 0x20]
0527cd2b  MOV RAX,qword ptr [RDI]
0527cd2e  CALL qword ptr [RAX + 0x568]
0527cd34  LEA RBX,[RAX + 0x50]
0527cd38  CMP byte ptr [RAX + 0x77],0x0
0527cd3c  JNZ 0x0527cd67
0527cd3e  MOV R14,RAX
0527cd41  ADD R14,0x70
0527cd45  CMP byte ptr [RAX + 0x68],0x0
0527cd49  JNZ 0x0527cd56
0527cd4b  TEST byte ptr [RAX + 0x56],0x1
0527cd4f  JNZ 0x0527cd56
0527cd51  MOV RBX,R14
0527cd54  JMP 0x0527cd67
0527cd56  MOV RDI,R14
0527cd59  MOV RSI,RBX
0527cd5c  CALL 0x04fa7a10
0527cd61  TEST AL,AL
0527cd63  CMOVNZ RBX,R14
0527cd67  MOVZX EAX,byte ptr [RBX + 0x6]
0527cd6b  OR AL,byte ptr [RBX + 0x18]
0527cd6e  LEA RDI,[0xf72b850]
0527cd75  TEST AL,0x1
0527cd77  CMOVNZ RDI,RBX
0527cd7b  MOV R13B,0x1
0527cd7e  CMP byte ptr [0x0f5a2858],0x0
0527cd85  JNZ 0x0527cdb0
0527cd87  CMP byte ptr [RDI + 0x18],0x0
0527cd8b  JNZ 0x0527cdb0
0527cd8d  TEST byte ptr [0x0f5a2846],0x1
0527cd94  JZ 0x0527cd9c
0527cd96  CMP byte ptr [RDI + 0x7],0x0
0527cd9a  JZ 0x0527cda1
0527cd9c  XOR R13D,R13D
0527cd9f  JMP 0x0527cdb0
0527cda1  LEA RSI,[0xf5a2840]
0527cda8  CALL 0x04fa7a10
0527cdad  MOV R13D,EAX
0527cdb0  LEA RBX,[R15 + 0x110]
0527cdb7  MOV RDI,RBX
0527cdba  CALL 0x0412d550
0527cdbf  MOV EBP,dword ptr [R15 + 0x1a0]
0527cdc6  MOV R14D,dword ptr [R15 + 0x1a8]
0527cdcd  MOV RDI,RBX
0527cdd0  CALL 0x0412d610
0527cdd5  INC EBP
0527cdd7  INC R14D
0527cdda  MOV dword ptr [RSP + 0x188],EBP
0527cde1  MOV dword ptr [RSP + 0x18c],R14D
0527cde9  MOV RAX,qword ptr [R15]
0527cdec  LEA RDI,[RSP + 0x38]
0527cdf1  LEA RDX,[RSP + 0x188]
0527cdf9  MOV RSI,R15
0527cdfc  CALL qword ptr [RAX + 0x20]
0527cdff  MOV RBX,qword ptr [RSP + 0x38]
0527ce04  LEA RDX,[RBX + 0x50]
0527ce08  MOV RAX,qword ptr [RBX + 0x30]
0527ce0c  MOV RSI,qword ptr [RAX + 0x198]
0527ce13  LEA RDI,[RSP + 0x2c0]
0527ce1b  MOV RCX,R15
0527ce1e  CALL 0x0ca8a1f0
0527ce23  MOVZX EBP,byte ptr [RSP + 0x2d8]
0527ce2b  MOV EAX,EBP
0527ce2d  TEST BPL,BPL
0527ce30  JZ 0x0527e597
0527ce36  LEA RDI,[RSP + 0x450]
0527ce3e  MOV RSI,R15
0527ce41  CALL 0x0cb35860
0527ce46  MOV qword ptr [RSP + 0x30],R12
0527ce4b  LEA R14,[RSP + 0x560]
0527ce53  MOV RDI,R14
0527ce56  CALL 0x0412d550
0527ce5b  MOV dword ptr [RSP + 0x28],R13D
0527ce60  MOV qword ptr [RSP + 0x98],RBX
0527ce68  MOV byte ptr [RSP + 0x1f],BPL
0527ce6d  MOV EBX,dword ptr [RSP + 0x5f0]
0527ce74  MOV R15D,dword ptr [RSP + 0x5f8]
0527ce7c  MOV EAX,dword ptr [RSP + 0x5fc]
0527ce83  MOV dword ptr [RSP + 0x20],EAX
0527ce87  MOV EAX,dword ptr [RSP + 0x604]
0527ce8e  MOV dword ptr [RSP + 0x10],EAX
0527ce92  MOV R12D,dword ptr [RSP + 0x618]
0527ce9a  MOV RDI,R14
0527ce9d  CALL 0x0412d610
0527cea2  TEST R12D,R12D
0527cea5  JZ 0x0527d062
0527ceab  MOV R13D,R15D
0527ceae  MOV EBP,EBX
0527ceb0  JMP 0x0527cee9
0527cec0  LEA EAX,[R13 + 0x1]
0527cec4  CMP R13D,dword ptr [RSP + 0x10]
0527cec9  CMOVGE EAX,R15D
0527cecd  CMP EBP,dword ptr [RSP + 0x20]
0527ced1  LEA ECX,[RBP + 0x1]
0527ced4  CMOVGE ECX,EBX
0527ced7  CMOVL EAX,R13D
0527cedb  MOV R13D,EAX
0527cede  MOV EBP,ECX
0527cee0  DEC R12D
0527cee3  JZ 0x0527d062
0527cee9  MOV dword ptr [RSP + 0x200],EBP
0527cef0  MOV dword ptr [RSP + 0x204],R13D
0527cef8  MOV RAX,qword ptr [RSP + 0x450]
0527cf00  LEA RDI,[RSP + 0x2e0]
0527cf08  LEA RSI,[RSP + 0x450]
0527cf10  LEA RDX,[RSP + 0x200]
0527cf18  CALL qword ptr [RAX + 0x20]
0527cf1b  MOV RAX,qword ptr [RSP + 0x2e0]
0527cf23  TEST RAX,RAX
0527cf26  LEA RDI,[RSP + 0x560]
0527cf2e  JZ 0x0527cf80
0527cf30  MOVZX EAX,byte ptr [RAX + 0xb8]
0527cf37  CMP AL,0x2
0527cf39  JC 0x0527cf80
0527cf3b  MOV RAX,qword ptr [RSP + 0x2e0]
0527cf43  MOV RCX,qword ptr [RSP + 0x2e8]
0527cf4b  MOV qword ptr [RSP + 0xa0],RAX
0527cf53  MOV qword ptr [RSP + 0xa8],RCX
0527cf5b  TEST RCX,RCX
0527cf5e  JZ 0x0527cfcb
0527cf60  INC.LOCK qword ptr [RCX + 0x8]
0527cf65  MOV R14,qword ptr [RSP + 0x2e8]
0527cf6d  TEST R14,R14
0527cf70  JNZ 0x0527cf98
0527cf72  JMP 0x0527cfc3
0527cf80  XORPS XMM0,XMM0
0527cf83  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
0527cf8b  MOV R14,qword ptr [RSP + 0x2e8]
0527cf93  TEST R14,R14
0527cf96  JZ 0x0527cfc3
0527cf98  MOV RAX,-0x1
0527cf9f  XADD.LOCK qword ptr [R14 + 0x8],RAX
0527cfa5  TEST RAX,RAX
0527cfa8  JNZ 0x0527cfc3
0527cfaa  MOV RAX,qword ptr [R14]
0527cfad  MOV RDI,R14
0527cfb0  CALL qword ptr [RAX + 0x10]
0527cfb3  MOV RDI,R14
0527cfb6  CALL 0x0412c2d0
0527cfbb  LEA RDI,[RSP + 0x560]
0527cfc3  MOV RAX,qword ptr [RSP + 0xa0]
0527cfcb  TEST RAX,RAX
0527cfce  JZ 0x0527d025
0527cfd0  MOVZX EAX,byte ptr [RAX + 0xb8]
0527cfd7  CMP AL,0x7
0527cfd9  JC 0x0527d025
0527cfdb  MOV EAX,dword ptr [RSP + 0x200]
0527cfe2  MOV ECX,dword ptr [RSP + 0x204]
0527cfe9  SHL EAX,0x4
0527cfec  SHL ECX,0x4
0527cfef  MOV dword ptr [RSP + 0x2e0],EAX
0527cff6  MOV dword ptr [RSP + 0x2e4],0x0
0527d001  MOV dword ptr [RSP + 0x2e8],ECX
0527d008  LEA RAX,[RSP + 0x2e0]
0527d010  MOV qword ptr [RSP + 0x260],RAX
0527d018  LEA RSI,[RSP + 0x260]
0527d020  CALL 0x0cb59800
0527d025  MOV R14,qword ptr [RSP + 0xa8]
0527d02d  TEST R14,R14
0527d030  JZ 0x0527cec0
0527d036  MOV RAX,-0x1
0527d03d  XADD.LOCK qword ptr [R14 + 0x8],RAX
0527d043  TEST RAX,RAX
0527d046  JNZ 0x0527cec0
0527d04c  MOV RAX,qword ptr [R14]
0527d04f  MOV RDI,R14
0527d052  CALL qword ptr [RAX + 0x10]
0527d055  MOV RDI,R14
0527d058  CALL 0x0412c2d0
0527d05d  JMP 0x0527cec0
0527d062  MOV RSI,qword ptr [RSP + 0x470]
0527d06a  MOV RDX,qword ptr [RSP + 0x478]
0527d072  MOV dword ptr [RSP + 0x8],0x0
0527d07a  MOV dword ptr [RSP],0x1
0527d081  LEA RDI,[RSP + 0x2e0]
0527d089  LEA RCX,[RSP + 0x450]
0527d091  XOR R8D,R8D
0527d094  MOV R9D,0x1
0527d09a  CALL 0x0c9d0c10
0527d09f  MOV qword ptr [RSP + 0x260],0x0
0527d0ab  MOV qword ptr [RSP + 0x268],0x1
0527d0b7  XORPS XMM0,XMM0
0527d0ba  MOVUPS xmmword ptr [RSP + 0x270],XMM0
0527d0c2  MOVUPS xmmword ptr [RSP + 0x280],XMM0
0527d0ca  MOVUPS xmmword ptr [RSP + 0x290],XMM0
0527d0d2  MOVUPS xmmword ptr [RSP + 0x2a0],XMM0
0527d0da  MOVUPS xmmword ptr [RSP + 0x2aa],XMM0
0527d0e2  MOV qword ptr [RSP + 0x200],0x0
0527d0ee  MOV qword ptr [RSP + 0x208],0x1
0527d0fa  MOVUPS xmmword ptr [RSP + 0x210],XMM0
0527d102  MOVUPS xmmword ptr [RSP + 0x220],XMM0
0527d10a  MOVUPS xmmword ptr [RSP + 0x230],XMM0
0527d112  MOVUPS xmmword ptr [RSP + 0x240],XMM0
0527d11a  MOV qword ptr [RSP + 0x250],0x0
0527d126  MOV word ptr [RSP + 0x258],0x1
0527d130  LEA RAX,[RSP + 0x260]
0527d138  MOV qword ptr [RSP + 0x3d0],RAX
0527d140  LEA RAX,[RSP + 0x200]
0527d148  MOV qword ptr [RSP + 0x3c8],RAX
0527d150  MOV RSI,qword ptr [RSP + 0x38]
0527d155  ADD RSI,0x44
0527d159  LEA RDI,[RSP + 0x2e0]
0527d161  CALL 0x0c9e2ed0
0527d166  MOV qword ptr [RSP + 0x90],RAX
0527d16e  MOV R12,qword ptr [RSP + 0x30]
0527d173  MOV R15,qword ptr [RSP + 0x98]
0527d17b  LEA RDI,[R12 + 0x140]
0527d183  CALL 0x052be680
0527d188  MOV qword ptr [RSP + 0x88],RAX
0527d190  MOV R13D,dword ptr [R15 + 0x50]
0527d194  MOV EAX,dword ptr [R15 + 0x54]
0527d198  MOV qword ptr [RSP + 0x20],RAX
0527d19d  MOV RDI,qword ptr [R12 + 0x20]
0527d1a2  MOV RAX,qword ptr [RDI]
0527d1a5  CALL qword ptr [RAX + 0x438]
0527d1ab  MOV RDX,qword ptr [RSP + 0x88]
0527d1b3  MOV RCX,RDX
0527d1b6  ADD RCX,0xa1810
0527d1bd  MOV qword ptr [RSP + 0x10],RCX
0527d1c2  MOV RCX,qword ptr [RDX + 0xa2208]
0527d1c9  CMP byte ptr [RCX + 0x9e7],0x1
0527d1d0  JNZ 0x0527d24d
0527d1d2  MOV dword ptr [RCX + 0x8],EAX
0527d1d5  MOV word ptr [RCX + 0x9e4],0x0
0527d1de  MOV dword ptr [RCX + 0x9d4],0x0
0527d1e8  MOV qword ptr [RCX + 0x9d8],0x0
0527d1f3  MOV dword ptr [RCX + 0xc],EAX
0527d1f6  MOV EDX,0x5
0527d1fb  NOP dword ptr [RAX + RAX*0x1]
0527d200  MOV ESI,EAX
0527d202  SHR ESI,0x1e
0527d205  XOR ESI,EAX
0527d207  IMUL EAX,ESI,0x6c078965
0527d20d  ADD RAX,RDX
0527d210  ADD RAX,-0x4
0527d214  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
0527d218  CMP RDX,0x191
0527d21f  JZ 0x0527d23c
0527d221  MOV ESI,EAX
0527d223  SHR ESI,0x1e
0527d226  XOR ESI,EAX
0527d228  IMUL EAX,ESI,0x6c078965
0527d22e  ADD EAX,EDX
0527d230  ADD EAX,-0x3
0527d233  MOV dword ptr [RCX + RDX*0x4],EAX
0527d236  ADD RDX,0x2
0527d23a  JMP 0x0527d200
0527d23c  MOV RAX,0x18e00000270
0527d246  MOV qword ptr [RCX + 0x9cc],RAX
0527d24d  MOV RDI,qword ptr [RSP + 0x10]
0527d252  MOV RAX,qword ptr [RDI]
0527d255  CALL qword ptr [RAX + 0x10]
0527d258  MOV EBX,EAX
0527d25a  MOV RDI,qword ptr [RSP + 0x10]
0527d25f  MOV RAX,qword ptr [RDI]
0527d262  CALL qword ptr [RAX + 0x10]
0527d265  MOV EBP,EAX
0527d267  MOV R14D,dword ptr [R15 + 0x50]
0527d26b  MOV R15D,dword ptr [R15 + 0x54]
0527d26f  MOV RDI,qword ptr [R12 + 0x20]
0527d274  MOV RAX,qword ptr [RDI]
0527d277  CALL qword ptr [RAX + 0x438]
0527d27d  MOV EDI,EBX
0527d27f  SHR EDI,0x1f
0527d282  ADD EDI,EBX
0527d284  OR EDI,0x1
0527d287  MOV R8D,EBP
0527d28a  SHR R8D,0x1f
0527d28e  ADD R8D,EBP
0527d291  OR R8D,0x1
0527d295  MOV RCX,qword ptr [RSP + 0x88]
0527d29d  MOV RCX,qword ptr [RCX + 0xa2208]
0527d2a4  CMP byte ptr [RCX + 0x9e7],0x1
0527d2ab  JNZ 0x0527d33d
0527d2b1  IMUL R15D,R8D
0527d2b5  IMUL R14D,EDI
0527d2b9  ADD R14D,R15D
0527d2bc  XOR EAX,R14D
0527d2bf  MOV dword ptr [RCX + 0x8],EAX
0527d2c2  MOV word ptr [RCX + 0x9e4],0x0
0527d2cb  MOV dword ptr [RCX + 0x9d4],0x0
0527d2d5  MOV qword ptr [RCX + 0x9d8],0x0
0527d2e0  MOV dword ptr [RCX + 0xc],EAX
0527d2e3  MOV EDX,0x5
0527d2e8  NOP dword ptr [RAX + RAX*0x1]
0527d2f0  MOV ESI,EAX
0527d2f2  SHR ESI,0x1e
0527d2f5  XOR ESI,EAX
0527d2f7  IMUL EAX,ESI,0x6c078965
0527d2fd  ADD RAX,RDX
0527d300  ADD RAX,-0x4
0527d304  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
0527d308  CMP RDX,0x191
0527d30f  JZ 0x0527d32c
0527d311  MOV ESI,EAX
0527d313  SHR ESI,0x1e
0527d316  XOR ESI,EAX
0527d318  IMUL EAX,ESI,0x6c078965
0527d31e  ADD EAX,EDX
0527d320  ADD EAX,-0x3
0527d323  MOV dword ptr [RCX + RDX*0x4],EAX
0527d326  ADD RDX,0x2
0527d32a  JMP 0x0527d2f0
0527d32c  MOV RAX,0x18e00000270
0527d336  MOV qword ptr [RCX + 0x9cc],RAX
0527d33d  MOV dword ptr [RSP + 0x128],R8D
0527d345  MOV dword ptr [RSP + 0x12c],EDI
0527d34c  MOV RAX,qword ptr [R12 + 0x28]
0527d351  MOVSX R14D,word ptr [RAX + 0xac]
0527d359  MOV RAX,qword ptr [RSP + 0x90]
0527d361  MOVZX EBX,word ptr [RAX + 0x168]
0527d368  MOV RAX,qword ptr [RSP + 0x38]
0527d36d  MOV RDI,qword ptr [RAX + 0x28]
0527d371  MOV RAX,qword ptr [RDI]
0527d374  CALL qword ptr [RAX + 0xbe8]
0527d37a  SHL R13D,0x4
0527d37e  MOV RCX,qword ptr [RSP + 0x20]
0527d383  SHL ECX,0x4
0527d386  MOV qword ptr [RSP + 0x20],RCX
0527d38b  CMP EBX,0x2
0527d38e  SETNZ CL
0527d391  CMP EBX,0x11
0527d394  SETNZ DL
0527d397  TEST AL,AL
0527d399  MOV qword ptr [RSP + 0x70],R13
0527d39e  JZ 0x0527d3c6
0527d3a0  CMP EBX,0x27
0527d3a3  JA 0x0527d3b7
0527d3a5  MOV EAX,EBX
0527d3a7  MOV RCX,0xf800030884
0527d3b1  BT RCX,RAX
0527d3b5  JC 0x0527d405
0527d3b7  ADD EBX,0xffffff5d
0527d3bd  CMP EBX,0x2
0527d3c0  JC 0x0527d405
0527d3c2  MOV CL,0x1
0527d3c4  JMP 0x0527d3c8
0527d3c6  AND CL,DL
0527d3c8  AND CL,byte ptr [RSP + 0x28]
0527d3cc  CMP CL,0x1
0527d3cf  JNZ 0x0527d405
0527d3d1  MOV RAX,qword ptr [RSP + 0x38]
0527d3d6  MOV RDI,qword ptr [RAX + 0x28]
0527d3da  MOV RAX,qword ptr [RDI]
0527d3dd  CALL qword ptr [RAX + 0xbe8]
0527d3e3  TEST AL,AL
0527d3e5  MOV EAX,0x20
0527d3ea  MOV ESI,0x4
0527d3ef  CMOVNZ ESI,EAX
0527d3f2  MOV RDI,qword ptr [RSP + 0x10]
0527d3f7  MOV RAX,qword ptr [RDI]
0527d3fa  CALL qword ptr [RAX + 0x18]
0527d3fd  TEST EAX,EAX
0527d3ff  JZ 0x0527d51a
0527d405  CMP byte ptr [R12 + 0x130],0x0
0527d40e  JNZ 0x0527d8a4
0527d414  MOV RDI,qword ptr [RSP + 0x10]
0527d419  MOV RAX,qword ptr [RDI]
0527d41c  MOV ESI,0x8
0527d421  CALL qword ptr [RAX + 0x18]
0527d424  TEST EAX,EAX
0527d426  JNZ 0x0527d8a4
0527d42c  MOV R13,qword ptr [RSP + 0x10]
0527d431  MOV RAX,qword ptr [R13]
0527d435  MOV RDI,R13
0527d438  MOV ESI,0x9
0527d43d  CALL qword ptr [RAX + 0x18]
0527d440  MOV EBX,EAX
0527d442  MOV RAX,qword ptr [R13]
0527d446  MOV RDI,R13
0527d449  MOV ESI,0x78
0527d44e  CALL qword ptr [RAX + 0x18]
0527d451  ADD EAX,0x8
0527d454  MOV RCX,qword ptr [R13]
0527d458  MOV RDI,R13
0527d45b  MOV ESI,EAX
0527d45d  CALL qword ptr [RCX + 0x18]
0527d460  MOV R15D,EAX
0527d463  MOV RAX,qword ptr [R13]
0527d467  MOV RDI,R13
0527d46a  MOV ESI,0x9
0527d46f  CALL qword ptr [RAX + 0x18]
0527d472  MOV R13D,EAX
0527d475  LEA EAX,[R14 + -0x3]
0527d479  CMP R15D,EAX
0527d47c  JL 0x0527d8a4
0527d482  CMP R15D,R14D
0527d485  JLE 0x0527d49f
0527d487  MOV RDI,qword ptr [RSP + 0x10]
0527d48c  MOV RAX,qword ptr [RDI]
0527d48f  MOV ESI,0xa
0527d494  CALL qword ptr [RAX + 0x18]
0527d497  TEST EAX,EAX
0527d499  JNZ 0x0527d8a4
0527d49f  MOV RAX,qword ptr [RSP + 0x70]
0527d4a4  ADD EAX,EBX
0527d4a6  ADD EAX,0x3
0527d4a9  MOV RCX,qword ptr [RSP + 0x20]
0527d4ae  ADD ECX,R13D
0527d4b1  ADD ECX,0x3
0527d4b4  SHL R15,0x20
0527d4b8  OR RAX,R15
0527d4bb  MOV qword ptr [RSP + 0x78],RAX
0527d4c0  MOV dword ptr [RSP + 0x80],ECX
0527d4c7  LEA RDI,[RSP + 0x138]
0527d4cf  XORPS XMM0,XMM0
0527d4d2  MOVAPS xmmword ptr [RSP + 0x130],XMM0
0527d4da  MOVAPS xmmword ptr [RSP + 0x140],XMM0
0527d4e2  MOV qword ptr [RSP + 0x150],0x0
0527d4ee  TEST byte ptr [0x0f713b98],0x1
0527d4f5  JNZ 0x0527d704
0527d4fb  MOV RAX,qword ptr [0x0f713ba8]
0527d502  MOV qword ptr [RDI + 0x10],RAX
0527d506  MOVUPS XMM0,xmmword ptr [0x0f713b98]
0527d50d  MOVUPS xmmword ptr [RDI],XMM0
0527d510  MOV RBX,qword ptr [RSP + 0x10]
0527d515  JMP 0x0527d71c
0527d51a  MOV RBP,qword ptr [RSP + 0x10]
0527d51f  MOV RAX,qword ptr [RBP]
0527d523  MOV RDI,RBP
0527d526  MOV ESI,0x9
0527d52b  CALL qword ptr [RAX + 0x18]
0527d52e  MOV EBX,EAX
0527d530  MOV RAX,qword ptr [RBP]
0527d534  MOV RDI,RBP
0527d537  MOV ESI,0x80
0527d53c  CALL qword ptr [RAX + 0x18]
0527d53f  MOV R15D,EAX
0527d542  MOV RAX,qword ptr [RBP]
0527d546  MOV RDI,RBP
0527d549  MOV ESI,0x9
0527d54e  CALL qword ptr [RAX + 0x18]
0527d551  LEA ECX,[R14 + -0x3]
0527d555  CMP R15D,ECX
0527d558  JGE 0x0527d569
0527d55a  CMP byte ptr [R12 + 0x130],0x0
0527d563  JNZ 0x0527d405
0527d569  LEA ECX,[RBX + R13*0x1]
0527d56d  ADD ECX,0x3
0527d570  MOV RDX,qword ptr [RSP + 0x20]
0527d575  ADD EAX,EDX
0527d577  ADD EAX,0x3
0527d57a  SHL R15,0x20
0527d57e  OR RCX,R15
0527d581  MOV qword ptr [RSP + 0x78],RCX
0527d586  MOV dword ptr [RSP + 0x80],EAX
0527d58d  LEA RDI,[RSP + 0x168]
0527d595  XORPS XMM0,XMM0
0527d598  MOVAPS xmmword ptr [RSP + 0x160],XMM0
0527d5a0  MOVAPS xmmword ptr [RSP + 0x170],XMM0
0527d5a8  MOV qword ptr [RSP + 0x180],0x0
0527d5b4  TEST byte ptr [0x0f713f08],0x1
0527d5bb  JNZ 0x0527d5d9
0527d5bd  MOV RAX,qword ptr [0x0f713f18]
0527d5c4  MOV qword ptr [RDI + 0x10],RAX
0527d5c8  MOVUPS XMM0,xmmword ptr [0x0f713f08]
0527d5cf  MOVUPS xmmword ptr [RDI],XMM0
0527d5d2  MOV RBX,qword ptr [RSP + 0x10]
0527d5d7  JMP 0x0527d5f1
0527d5d9  MOV RSI,qword ptr [0x0f713f18]
0527d5e0  MOV RDX,qword ptr [0x0f713f10]
0527d5e7  CALL 0x04885070
0527d5ec  MOV RBX,qword ptr [RSP + 0x10]
0527d5f1  MOV RAX,qword ptr [0x0f713f00]
0527d5f8  MOV qword ptr [RSP + 0x160],RAX
0527d600  LEA RDI,[RSP + 0x1d8]
0527d608  XORPS XMM0,XMM0
0527d60b  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
0527d613  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
0527d61b  MOV qword ptr [RSP + 0x1f0],0x0
0527d627  TEST byte ptr [0x0f71bd90],0x1
0527d62e  JNZ 0x0527d647
0527d630  MOV RAX,qword ptr [0x0f71bda0]
0527d637  MOV qword ptr [RDI + 0x10],RAX
0527d63b  MOVUPS XMM0,xmmword ptr [0x0f71bd90]
0527d642  MOVUPS xmmword ptr [RDI],XMM0
0527d645  JMP 0x0527d65a
0527d647  MOV RSI,qword ptr [0x0f71bda0]
0527d64e  MOV RDX,qword ptr [0x0f71bd98]
0527d655  CALL 0x04885070
0527d65a  MOV RAX,qword ptr [0x0f71bd88]
0527d661  MOV qword ptr [RSP + 0x1d0],RAX
0527d669  XORPS XMM0,XMM0
0527d66c  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0527d671  MOV qword ptr [RSP + 0x60],0x0
0527d67a  LEA RDI,[RSP + 0xa0]
0527d682  LEA RSI,[RSP + 0x160]
0527d68a  LEA RDX,[RSP + 0x1d0]
0527d692  LEA RCX,[RSP + 0x50]
0527d697  CALL 0x052ce620
0527d69c  TEST byte ptr [RSP + 0x1d8],0x1
0527d6a4  JZ 0x0527d6bf
0527d6a6  MOV RSI,qword ptr [RSP + 0x1d8]
0527d6ae  MOV RDI,qword ptr [RSP + 0x1e8]
0527d6b6  AND RSI,-0x2
0527d6ba  CALL 0x0412a280
0527d6bf  TEST byte ptr [RSP + 0x168],0x1
0527d6c7  JZ 0x0527d6e2
0527d6c9  MOV RSI,qword ptr [RSP + 0x168]
0527d6d1  MOV RDI,qword ptr [RSP + 0x178]
0527d6d9  AND RSI,-0x2
0527d6dd  CALL 0x0412a280
0527d6e2  LEA RDI,[RSP + 0xa0]
0527d6ea  LEA RSI,[RSP + 0x2e0]
0527d6f2  LEA RDX,[RSP + 0x78]
0527d6f7  MOV RCX,RBX
0527d6fa  CALL 0x052ce810
0527d6ff  JMP 0x0527d82a
0527d704  MOV RSI,qword ptr [0x0f713ba8]
0527d70b  MOV RDX,qword ptr [0x0f713ba0]
0527d712  CALL 0x04885070
0527d717  MOV RBX,qword ptr [RSP + 0x10]
0527d71c  MOV RAX,qword ptr [0x0f713b90]
0527d723  MOV qword ptr [RSP + 0x130],RAX
0527d72b  LEA RDI,[RSP + 0x1a8]
0527d733  XORPS XMM0,XMM0
0527d736  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
0527d73e  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
0527d746  MOV qword ptr [RSP + 0x1c0],0x0
0527d752  TEST byte ptr [0x0f71bd90],0x1
0527d759  JNZ 0x0527d772
0527d75b  MOV RAX,qword ptr [0x0f71bda0]
0527d762  MOV qword ptr [RDI + 0x10],RAX
0527d766  MOVUPS XMM0,xmmword ptr [0x0f71bd90]
0527d76d  MOVUPS xmmword ptr [RDI],XMM0
0527d770  JMP 0x0527d785
0527d772  MOV RSI,qword ptr [0x0f71bda0]
0527d779  MOV RDX,qword ptr [0x0f71bd98]
0527d780  CALL 0x04885070
0527d785  MOV RAX,qword ptr [0x0f71bd88]
0527d78c  MOV qword ptr [RSP + 0x1a0],RAX
0527d794  XORPS XMM0,XMM0
0527d797  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0527d79c  MOV qword ptr [RSP + 0x60],0x0
0527d7a5  LEA RDI,[RSP + 0xa0]
0527d7ad  LEA RSI,[RSP + 0x130]
0527d7b5  LEA RDX,[RSP + 0x1a0]
0527d7bd  LEA RCX,[RSP + 0x50]
0527d7c2  CALL 0x052ce620
0527d7c7  TEST byte ptr [RSP + 0x1a8],0x1
0527d7cf  JZ 0x0527d7ea
0527d7d1  MOV RSI,qword ptr [RSP + 0x1a8]
0527d7d9  MOV RDI,qword ptr [RSP + 0x1b8]
0527d7e1  AND RSI,-0x2
0527d7e5  CALL 0x0412a280
0527d7ea  TEST byte ptr [RSP + 0x138],0x1
0527d7f2  JZ 0x0527d80d
0527d7f4  MOV RSI,qword ptr [RSP + 0x138]
0527d7fc  MOV RDI,qword ptr [RSP + 0x148]
0527d804  AND RSI,-0x2
0527d808  CALL 0x0412a280
0527d80d  LEA RDI,[RSP + 0xa0]
0527d815  LEA RSI,[RSP + 0x2e0]
0527d81d  LEA RDX,[RSP + 0x78]
0527d822  MOV RCX,RBX
0527d825  CALL 0x052ce810
0527d82a  LEA RAX,[0xefa00a8]
0527d831  MOV qword ptr [RSP + 0xa0],RAX
0527d839  MOV RDI,qword ptr [RSP + 0x110]
0527d841  TEST RDI,RDI
0527d844  JZ 0x0527d85e
0527d846  MOV qword ptr [RSP + 0x118],RDI
0527d84e  MOV RSI,qword ptr [RSP + 0x120]
0527d856  SUB RSI,RDI
0527d859  CALL 0x0412a280
0527d85e  TEST byte ptr [RSP + 0xf0],0x1
0527d866  JZ 0x0527d881
0527d868  MOV RSI,qword ptr [RSP + 0xf0]
0527d870  MOV RDI,qword ptr [RSP + 0x100]
0527d878  AND RSI,-0x2
0527d87c  CALL 0x0412a280
0527d881  TEST byte ptr [RSP + 0xc8],0x1
0527d889  JZ 0x0527d8a4
0527d88b  MOV RSI,qword ptr [RSP + 0xc8]
0527d893  MOV RDI,qword ptr [RSP + 0xd8]
0527d89b  AND RSI,-0x2
0527d89f  CALL 0x0412a280
0527d8a4  CMP byte ptr [R12 + 0x130],0x0
0527d8ad  MOV R13,qword ptr [RSP + 0x10]
0527d8b2  JNZ 0x0527dbef
0527d8b8  MOV EBP,0x8
0527d8bd  CMP byte ptr [RSP + 0x28],0x0
0527d8c2  JNZ 0x0527db48
0527d8c8  MOV RAX,qword ptr [RSP + 0x30]
0527d8cd  MOV RAX,qword ptr [RAX + 0x28]
0527d8d1  CMP word ptr [RAX + 0xa8],0x0
0527d8d9  MOV RAX,qword ptr [RSP + 0x70]
0527d8de  JNS 0x0527db4d
0527d8e4  MOV RAX,qword ptr [R13]
0527d8e8  MOV RDI,R13
0527d8eb  MOV ESI,0x10
0527d8f0  CALL qword ptr [RAX + 0x18]
0527d8f3  MOV R12,qword ptr [RSP + 0x30]
0527d8f8  MOV EBP,EAX
0527d8fa  MOV RAX,qword ptr [R12 + 0x28]
0527d8ff  MOVSX EAX,word ptr [RAX + 0xa8]
0527d906  ADD EAX,0x6
0527d909  MOV ESI,EAX
0527d90b  NEG ESI
0527d90d  CMOVS ESI,EAX
0527d910  MOV RAX,qword ptr [R13]
0527d914  MOV RDI,R13
0527d917  CALL qword ptr [RAX + 0x18]
0527d91a  MOV R15D,EAX
0527d91d  MOV RAX,qword ptr [R12 + 0x28]
0527d922  MOVSX R14D,word ptr [RAX + 0xa8]
0527d92a  MOV RAX,qword ptr [R13]
0527d92e  MOV RDI,R13
0527d931  MOV ESI,0x10
0527d936  CALL qword ptr [RAX + 0x18]
0527d939  MOV RCX,qword ptr [RSP + 0x70]
0527d93e  MOV EBX,ECX
0527d940  OR EBX,0x8
0527d943  MOV RCX,qword ptr [RSP + 0x20]
0527d948  MOV EDX,ECX
0527d94a  OR EDX,0x8
0527d94d  LEA RDI,[R12 + 0x1b0]
0527d955  ADD EBP,EBX
0527d957  LEA ECX,[R15 + R14*0x1]
0527d95b  ADD ECX,0x6
0527d95e  MOV dword ptr [RSP + 0x4c],EDX
0527d962  ADD EAX,EDX
0527d964  MOV dword ptr [RSP + 0xa0],EBP
0527d96b  MOV dword ptr [RSP + 0xa4],ECX
0527d972  MOV dword ptr [RSP + 0xa8],EAX
0527d979  LEA RSI,[RSP + 0x2e0]
0527d981  LEA RDX,[RSP + 0xa0]
0527d989  MOV qword ptr [RSP + 0x28],RDI
0527d98e  MOV RCX,R13
0527d991  CALL 0x052d8680
0527d996  MOV RAX,qword ptr [R13]
0527d99a  MOV RDI,R13
0527d99d  MOV ESI,0x10
0527d9a2  CALL qword ptr [RAX + 0x18]
0527d9a5  MOV EBP,EAX
0527d9a7  MOV RAX,qword ptr [R12 + 0x28]
0527d9ac  MOVSX EAX,word ptr [RAX + 0xa8]
0527d9b3  ADD EAX,0x6
0527d9b6  MOV ESI,EAX
0527d9b8  NEG ESI
0527d9ba  CMOVS ESI,EAX
0527d9bd  MOV RAX,qword ptr [R13]
0527d9c1  MOV RDI,R13
0527d9c4  CALL qword ptr [RAX + 0x18]
0527d9c7  MOV R14D,EAX
0527d9ca  MOV RAX,qword ptr [R12 + 0x28]
0527d9cf  MOVSX R15D,word ptr [RAX + 0xa8]
0527d9d7  MOV RAX,qword ptr [R13]
0527d9db  MOV RDI,R13
0527d9de  MOV ESI,0x10
0527d9e3  CALL qword ptr [RAX + 0x18]
0527d9e6  ADD EBP,EBX
0527d9e8  LEA ECX,[R14 + R15*0x1]
0527d9ec  ADD ECX,0x6
0527d9ef  ADD EAX,dword ptr [RSP + 0x4c]
0527d9f3  MOV dword ptr [RSP + 0xa0],EBP
0527d9fa  MOV dword ptr [RSP + 0xa4],ECX
0527da01  MOV dword ptr [RSP + 0xa8],EAX
0527da08  LEA RSI,[RSP + 0x2e0]
0527da10  LEA RDX,[RSP + 0xa0]
0527da18  MOV RDI,qword ptr [RSP + 0x28]
0527da1d  MOV RCX,R13
0527da20  CALL 0x052d8680
0527da25  MOV RAX,qword ptr [R13]
0527da29  MOV RDI,R13
0527da2c  MOV ESI,0x10
0527da31  CALL qword ptr [RAX + 0x18]
0527da34  MOV EBP,EAX
0527da36  MOV RAX,qword ptr [R12 + 0x28]
0527da3b  MOVSX EAX,word ptr [RAX + 0xa8]
0527da42  ADD EAX,0x6
0527da45  MOV ESI,EAX
0527da47  NEG ESI
0527da49  CMOVS ESI,EAX
0527da4c  MOV RAX,qword ptr [R13]
0527da50  MOV RDI,R13
0527da53  CALL qword ptr [RAX + 0x18]
0527da56  MOV R14D,EAX
0527da59  MOV RAX,qword ptr [R12 + 0x28]
0527da5e  MOVSX R15D,word ptr [RAX + 0xa8]
0527da66  MOV RAX,qword ptr [R13]
0527da6a  MOV RDI,R13
0527da6d  MOV ESI,0x10
0527da72  CALL qword ptr [RAX + 0x18]
0527da75  ADD EBP,EBX
0527da77  LEA ECX,[R14 + R15*0x1]
0527da7b  ADD ECX,0x6
0527da7e  ADD EAX,dword ptr [RSP + 0x4c]
0527da82  MOV dword ptr [RSP + 0xa0],EBP
0527da89  MOV dword ptr [RSP + 0xa4],ECX
0527da90  MOV dword ptr [RSP + 0xa8],EAX
0527da97  LEA RSI,[RSP + 0x2e0]
0527da9f  LEA RDX,[RSP + 0xa0]
0527daa7  MOV RDI,qword ptr [RSP + 0x28]
0527daac  MOV RCX,R13
0527daaf  CALL 0x052d8680
0527dab4  MOV RAX,qword ptr [R13]
0527dab8  MOV RDI,R13
0527dabb  MOV ESI,0x10
0527dac0  CALL qword ptr [RAX + 0x18]
0527dac3  MOV EBP,EAX
0527dac5  MOV RAX,qword ptr [R12 + 0x28]
0527daca  MOVSX EAX,word ptr [RAX + 0xa8]
0527dad1  ADD EAX,0x6
0527dad4  MOV ESI,EAX
0527dad6  NEG ESI
0527dad8  CMOVS ESI,EAX
0527dadb  MOV RAX,qword ptr [R13]
0527dadf  MOV RDI,R13
0527dae2  CALL qword ptr [RAX + 0x18]
0527dae5  MOV R14D,EAX
0527dae8  MOV RAX,qword ptr [R12 + 0x28]
0527daed  MOVSX R15D,word ptr [RAX + 0xa8]
0527daf5  MOV RAX,qword ptr [R13]
0527daf9  MOV RDI,R13
0527dafc  MOV ESI,0x10
0527db01  CALL qword ptr [RAX + 0x18]
0527db04  ADD EBP,EBX
0527db06  LEA ECX,[R14 + R15*0x1]
0527db0a  ADD ECX,0x6
0527db0d  ADD EAX,dword ptr [RSP + 0x4c]
0527db11  MOV dword ptr [RSP + 0xa0],EBP
0527db18  MOV dword ptr [RSP + 0xa4],ECX
0527db1f  MOV dword ptr [RSP + 0xa8],EAX
0527db26  LEA RSI,[RSP + 0x2e0]
0527db2e  LEA RDX,[RSP + 0xa0]
0527db36  MOV RDI,qword ptr [RSP + 0x28]
0527db3b  MOV RCX,R13
0527db3e  CALL 0x052d8680
0527db43  MOV EBP,0xa
0527db48  MOV RAX,qword ptr [RSP + 0x70]
0527db4d  MOV R15D,EAX
0527db50  OR R15D,0x8
0527db54  MOV RAX,qword ptr [RSP + 0x20]
0527db59  MOV R12D,EAX
0527db5c  OR R12D,0x8
0527db60  MOV RAX,qword ptr [RSP + 0x30]
0527db65  ADD RAX,0x1b0
0527db6b  MOV qword ptr [RSP + 0x28],RAX
0527db70  MOV RAX,qword ptr [R13]
0527db74  MOV RDI,R13
0527db77  MOV ESI,0x10
0527db7c  CALL qword ptr [RAX + 0x18]
0527db7f  MOV EBX,EAX
0527db81  MOV RDI,qword ptr [RSP + 0x30]
0527db86  MOV RAX,qword ptr [RDI]
0527db89  CALL qword ptr [RAX + 0x1d0]
0527db8f  MOV R13,qword ptr [RSP + 0x10]
0527db94  MOV RCX,qword ptr [R13]
0527db98  MOV RDI,R13
0527db9b  MOV ESI,EAX
0527db9d  CALL qword ptr [RCX + 0x18]
0527dba0  MOV R14D,EAX
0527dba3  MOV RAX,qword ptr [R13]
0527dba7  MOV RDI,R13
0527dbaa  MOV ESI,0x10
0527dbaf  CALL qword ptr [RAX + 0x18]
0527dbb2  ADD EBX,R15D
0527dbb5  ADD EAX,R12D
0527dbb8  MOV dword ptr [RSP + 0xa0],EBX
0527dbbf  MOV dword ptr [RSP + 0xa4],R14D
0527dbc7  MOV dword ptr [RSP + 0xa8],EAX
0527dbce  MOV RDI,qword ptr [RSP + 0x28]
0527dbd3  LEA RSI,[RSP + 0x2e0]
0527dbdb  LEA RDX,[RSP + 0xa0]
0527dbe3  MOV RCX,R13
0527dbe6  CALL 0x052d8680
0527dbeb  DEC EBP
0527dbed  JNZ 0x0527db70
0527dbef  MOV RDI,qword ptr [RSP + 0x308]
0527dbf7  MOV RAX,qword ptr [RDI]
0527dbfa  CALL qword ptr [RAX + 0x568]
0527dc00  MOV R14,qword ptr [RSP + 0x30]
0527dc05  MOV R15,qword ptr [RSP + 0x98]
0527dc0d  MOV R12,qword ptr [RSP + 0x70]
0527dc12  CMP byte ptr [RAX + 0x4b9],0x1
0527dc19  JNZ 0x0527dcec
0527dc1f  MOV RDI,qword ptr [RSP + 0x308]
0527dc27  MOV RAX,qword ptr [RDI]
0527dc2a  CALL qword ptr [RAX + 0x568]
0527dc30  CMP byte ptr [RAX + 0x4ba],0x0
0527dc37  JNZ 0x0527dcec
0527dc3d  MOV word ptr [RSP + 0xa8],0x101
0527dc47  MOV RAX,qword ptr [0x0f6b3a90]
0527dc4e  MOV qword ptr [RSP + 0xb0],RAX
0527dc56  MOV qword ptr [RSP + 0xb8],0x0
0527dc62  LEA RAX,[0xf474ec0]
0527dc69  MOV qword ptr [RSP + 0xa0],RAX
0527dc71  MOV RDI,qword ptr [R14 + 0x20]
0527dc75  MOV RAX,qword ptr [RDI]
0527dc78  CALL qword ptr [RAX + 0x568]
0527dc7e  MOV RBX,RAX
0527dc81  LEA RDI,[RAX + 0x518]
0527dc88  LEA RSI,[0xf71d600]
0527dc8f  CALL 0x0d2279e0
0527dc94  TEST RAX,RAX
0527dc97  JNZ 0x0527dcb8
0527dc99  ADD RBX,0x4f0
0527dca0  LEA RSI,[0xf71d600]
0527dca7  MOV RDI,RBX
0527dcaa  CALL 0x0d2279e0
0527dcaf  TEST RAX,RAX
0527dcb2  JZ 0x0527e668
0527dcb8  LEA RDX,[RAX + 0x38]
0527dcbc  XOR ECX,ECX
0527dcbe  CMP dword ptr [RAX + 0x50],0x6
0527dcc2  CMOVZ RCX,RDX
0527dcc6  TEST RCX,RCX
0527dcc9  LEA RDX,[0x1de6224]
0527dcd0  CMOVNZ RDX,RCX
0527dcd4  LEA RDI,[RSP + 0xa0]
0527dcdc  LEA RSI,[RSP + 0x2e0]
0527dce4  MOV RCX,R13
0527dce7  CALL 0x0d50a850
0527dcec  MOV EBX,dword ptr [R15 + 0x50]
0527dcf0  MOV EBP,dword ptr [R15 + 0x54]
0527dcf4  MOV RDI,qword ptr [R14 + 0x20]
0527dcf8  MOV RAX,qword ptr [RDI]
0527dcfb  CALL qword ptr [RAX + 0x438]
0527dd01  MOV RCX,qword ptr [RSP + 0x88]
0527dd09  MOV RCX,qword ptr [RCX + 0xa2208]
0527dd10  CMP byte ptr [RCX + 0x9e7],0x1
0527dd17  JNZ 0x0527ddad
0527dd1d  IMUL EBP,dword ptr [RSP + 0x128]
0527dd25  IMUL EBX,dword ptr [RSP + 0x12c]
0527dd2d  ADD EBX,EBP
0527dd2f  XOR EAX,EBX
0527dd31  MOV dword ptr [RCX + 0x8],EAX
0527dd34  MOV word ptr [RCX + 0x9e4],0x0
0527dd3d  MOV dword ptr [RCX + 0x9d4],0x0
0527dd47  MOV qword ptr [RCX + 0x9d8],0x0
0527dd52  MOV dword ptr [RCX + 0xc],EAX
0527dd55  MOV EDX,0x5
0527dd5a  NOP word ptr [RAX + RAX*0x1]
0527dd60  MOV ESI,EAX
0527dd62  SHR ESI,0x1e
0527dd65  XOR ESI,EAX
0527dd67  IMUL EAX,ESI,0x6c078965
0527dd6d  ADD RAX,RDX
0527dd70  ADD RAX,-0x4
0527dd74  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
0527dd78  CMP RDX,0x191
0527dd7f  JZ 0x0527dd9c
0527dd81  MOV ESI,EAX
0527dd83  SHR ESI,0x1e
0527dd86  XOR ESI,EAX
0527dd88  IMUL EAX,ESI,0x6c078965
0527dd8e  ADD EAX,EDX
0527dd90  ADD EAX,-0x3
0527dd93  MOV dword ptr [RCX + RDX*0x4],EAX
0527dd96  ADD RDX,0x2
0527dd9a  JMP 0x0527dd60
0527dd9c  MOV RAX,0x18e00000270
0527dda6  MOV qword ptr [RCX + 0x9cc],RAX
0527ddad  MOV RDX,qword ptr [RSP + 0x38]
0527ddb2  MOV RAX,qword ptr [R14]
0527ddb5  LEA RCX,[RSP + 0x2e0]
0527ddbd  MOV RDI,R14
0527ddc0  MOV RSI,qword ptr [RSP + 0x90]
0527ddc8  MOV R8,R13
0527ddcb  CALL qword ptr [RAX + 0x1c0]
0527ddd1  LEA RDI,[0xf6ff9e0]
0527ddd8  LEA RSI,[0xf712e90]
0527dddf  MOV EDX,0x1
0527dde4  CALL 0x0cc41df0
0527dde9  MOV qword ptr [RSP + 0x28],RAX
0527ddee  LEA RDI,[0xf6ff9e0]
0527ddf5  LEA RSI,[0xf715218]
0527ddfc  MOV EDX,0x1
0527de01  CALL 0x0cc41df0
0527de06  MOV qword ptr [RSP + 0x88],RAX
0527de0e  MOV RBP,-0x100000000
0527de18  MOV EAX,R12D
0527de1b  MOV qword ptr [RSP + 0x90],RAX
0527de23  XOR ECX,ECX
0527de25  LEA R15,[RSP + 0x2e0]
0527de2d  LEA R12,[RSP + 0xa0]
0527de35  JMP 0x0527de55
0527de40  MOV RCX,qword ptr [RSP + 0x98]
0527de48  INC RCX
0527de4b  CMP RCX,0x10
0527de4f  JZ 0x0527e081
0527de55  MOV RAX,qword ptr [RSP + 0x90]
0527de5d  ADD RAX,RCX
0527de60  MOV EBX,EAX
0527de62  SAR EBX,0x4
0527de65  MOV qword ptr [RSP + 0x98],RCX
0527de6d  AND CL,0xf
0527de70  MOV byte ptr [RSP + 0x30],CL
0527de74  SHR RAX,0x20
0527de78  MOV qword ptr [RSP + 0x10],RAX
0527de7d  XOR R13D,R13D
0527de80  JMP 0x0527de99
0527de90  INC R13D
0527de93  CMP R13D,0x10
0527de97  JZ 0x0527de40
0527de99  MOV RAX,qword ptr [RSP + 0x20]
0527de9e  ADD EAX,R13D
0527dea1  MOV dword ptr [RSP + 0xa0],EBX
0527dea8  SAR EAX,0x4
0527deab  MOV dword ptr [RSP + 0xa4],EAX
0527deb2  MOV RAX,qword ptr [RSP + 0x2e0]
0527deba  MOV RDI,R15
0527debd  MOV RSI,R12
0527dec0  CALL qword ptr [RAX + 0x148]
0527dec6  TEST RAX,RAX
0527dec9  JZ 0x0527df10
0527decb  MOV RCX,qword ptr [RAX + 0x30]
0527decf  MOV RDX,qword ptr [RSP + 0x10]
0527ded4  SUB DX,word ptr [RCX + 0xa8]
0527dedb  MOVZX ECX,byte ptr [RSP + 0x30]
0527dee0  MOV byte ptr [RSP + 0xa0],CL
0527dee7  MOV byte ptr [RSP + 0xa1],R13B
0527deef  MOV word ptr [RSP + 0xa2],DX
0527def7  MOV RDI,RAX
0527defa  MOV RSI,R12
0527defd  CALL 0x0cafbac0
0527df02  JMP 0x0527df1c
0527df10  MOV RAX,-0x1
0527df17  MOV EDX,0xffffffff
0527df1c  MOV qword ptr [RSP + 0x78],RAX
0527df21  MOV dword ptr [RSP + 0x80],EDX
0527df28  MOV RCX,RAX
0527df2b  AND RCX,RBP
0527df2e  ADD RCX,RBP
0527df31  MOV EAX,EAX
0527df33  OR RAX,RCX
0527df36  MOV qword ptr [RSP + 0x190],RAX
0527df3e  MOV dword ptr [RSP + 0x198],EDX
0527df45  MOV RDI,R15
0527df48  LEA RSI,[RSP + 0x190]
0527df50  XOR EDX,EDX
0527df52  CALL 0x0c902a10
0527df57  TEST AL,AL
0527df59  JZ 0x0527dfe0
0527df5f  XORPS XMM0,XMM0
0527df62  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
0527df6a  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
0527df72  MOV qword ptr [RSP + 0xc0],0x0
0527df7e  MOV byte ptr [RSP + 0xc0],0x1
0527df86  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0527df8b  MOV qword ptr [RSP],R12
0527df8f  MOV RDI,R15
0527df92  LEA RSI,[RSP + 0x190]
0527df9a  MOV RDX,qword ptr [RSP + 0x28]
0527df9f  MOV ECX,0x2
0527dfa4  LEA R8,[RSP + 0x50]
0527dfa9  XOR R9D,R9D
0527dfac  CALL 0x0c9d4820
0527dfb1  MOV R14,qword ptr [RSP + 0x58]
0527dfb6  TEST R14,R14
0527dfb9  JZ 0x0527dfe0
0527dfbb  MOV RAX,-0x1
0527dfc2  XADD.LOCK qword ptr [R14 + 0x8],RAX
0527dfc8  TEST RAX,RAX
0527dfcb  JNZ 0x0527dfe0
0527dfcd  MOV RAX,qword ptr [R14]
0527dfd0  MOV RDI,R14
0527dfd3  CALL qword ptr [RAX + 0x10]
0527dfd6  MOV RDI,R14
0527dfd9  CALL 0x0412c2d0
0527dfde  NOP
0527dfe0  MOV RDI,R15
0527dfe3  LEA RSI,[RSP + 0x78]
0527dfe8  CALL 0x0c9028a0
0527dfed  TEST AL,AL
0527dfef  JZ 0x0527de90
0527dff5  XORPS XMM0,XMM0
0527dff8  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
0527e000  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
0527e008  MOV qword ptr [RSP + 0xc0],0x0
0527e014  MOV byte ptr [RSP + 0xc0],0x1
0527e01c  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0527e021  MOV qword ptr [RSP],R12
0527e025  MOV RDI,R15
0527e028  LEA RSI,[RSP + 0x78]
0527e02d  MOV RDX,qword ptr [RSP + 0x88]
0527e035  MOV ECX,0x2
0527e03a  LEA R8,[RSP + 0x50]
0527e03f  XOR R9D,R9D
0527e042  CALL 0x0c9d4820
0527e047  MOV R14,qword ptr [RSP + 0x58]
0527e04c  TEST R14,R14
0527e04f  JZ 0x0527de90
0527e055  MOV RAX,-0x1
0527e05c  XADD.LOCK qword ptr [R14 + 0x8],RAX
0527e062  TEST RAX,RAX
0527e065  JNZ 0x0527de90
0527e06b  MOV RAX,qword ptr [R14]
0527e06e  MOV RDI,R14
0527e071  CALL qword ptr [RAX + 0x10]
0527e074  MOV RDI,R14
0527e077  CALL 0x0412c2d0
0527e07c  JMP 0x0527de90
0527e081  MOV RAX,qword ptr [RSP + 0x38]
0527e086  MOV qword ptr [RSP + 0x20],RAX
0527e08b  XOR R13D,R13D
0527e08e  LEA RBX,[RSP + 0x2e0]
0527e096  LEA R14,[RSP + 0x50]
0527e09b  LEA R12,[0xf713f00]
0527e0a2  JMP 0x0527e0c1
0527e0b0  ADD R13,0xc
0527e0b4  CMP R13,0x2d0
0527e0bb  JZ 0x0527e255
0527e0c1  LEA RDX,[0x1641940]
0527e0c8  MOV EAX,dword ptr [R13 + RDX*0x1]
0527e0cd  MOV ECX,dword ptr [R13 + RDX*0x1 + 0x4]
0527e0d2  MOV RSI,qword ptr [RSP + 0x20]
0527e0d7  ADD EAX,dword ptr [RSI + 0x38]
0527e0da  ADD ECX,dword ptr [RSI + 0x3c]
0527e0dd  MOV EDX,dword ptr [R13 + RDX*0x1 + 0x8]
0527e0e2  ADD EDX,dword ptr [RSI + 0x40]
0527e0e5  SHL RCX,0x20
0527e0e9  OR RAX,RCX
0527e0ec  MOV qword ptr [RSP + 0x50],RAX
0527e0f1  MOV dword ptr [RSP + 0x58],EDX
0527e0f5  MOV RAX,qword ptr [RSP + 0x2e0]
0527e0fd  MOV RDI,RBX
0527e100  MOV RSI,R14
0527e103  CALL qword ptr [RAX + 0x138]
0527e109  TEST RAX,RAX
0527e10c  JZ 0x0527e150
0527e10e  MOV ECX,dword ptr [RSP + 0x50]
0527e112  MOV EDX,dword ptr [RSP + 0x58]
0527e116  AND ECX,0xf
0527e119  SHL EDX,0x4
0527e11c  MOVZX EDX,DL
0527e11f  OR EDX,ECX
0527e121  MOV RCX,qword ptr [RAX + 0x30]
0527e125  MOVZX ECX,word ptr [RCX + 0xa8]
0527e12c  ADD CX,word ptr [RAX + RDX*0x2 + 0xbd0]
0527e134  MOVSX EBP,CX
0527e137  CMP dword ptr [RSP + 0x54],EBP
0527e13b  JGE 0x0527e0b0
0527e141  JMP 0x0527e165
0527e150  MOVZX ECX,word ptr [RSP + 0x322]
0527e158  MOVSX EBP,CX
0527e15b  CMP dword ptr [RSP + 0x54],EBP
0527e15f  JGE 0x0527e0b0
0527e165  MOV R15B,0x1
0527e168  JMP 0x0527e188
0527e170  OR AL,R15B
0527e173  MOV R15D,EAX
0527e176  MOV EAX,dword ptr [RSP + 0x54]
0527e17a  INC EAX
0527e17c  MOV dword ptr [RSP + 0x54],EAX
0527e180  CMP EAX,EBP
0527e182  JGE 0x0527e0b0
0527e188  MOV RAX,qword ptr [RSP + 0x2e0]
0527e190  MOV RDI,RBX
0527e193  MOV RSI,R14
0527e196  CALL qword ptr [RAX + 0x10]
0527e199  MOV RAX,qword ptr [RAX + 0x68]
0527e19d  MOV RAX,qword ptr [RAX + 0xc8]
0527e1a4  CMP RAX,qword ptr [0x0f713f00]
0527e1ab  SETNZ AL
0527e1ae  MOV ECX,R15D
0527e1b1  NOT CL
0527e1b3  OR CL,AL
0527e1b5  TEST CL,0x1
0527e1b8  JNZ 0x0527e170
0527e1ba  LEA RDI,[0xf6ff9e0]
0527e1c1  MOV RSI,R12
0527e1c4  MOV EDX,0x1
0527e1c9  CALL 0x0cc41df0
0527e1ce  XORPS XMM0,XMM0
0527e1d1  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
0527e1d9  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
0527e1e1  MOV qword ptr [RSP + 0xc0],0x0
0527e1ed  MOV byte ptr [RSP + 0xc0],0x1
0527e1f5  MOV R10,qword ptr [RSP + 0x2e0]
0527e1fd  MOV RDI,RBX
0527e200  MOV RSI,R14
0527e203  MOV RDX,RAX
0527e206  XOR ECX,ECX
0527e208  XOR R8D,R8D
0527e20b  LEA R9,[RSP + 0xa0]
0527e213  CALL qword ptr [R10 + 0xf8]
0527e21a  LEA RDI,[0xf6ff9e0]
0527e221  MOV RSI,R12
0527e224  MOV EDX,0x1
0527e229  CALL 0x0cc41df0
0527e22e  XOR R15D,R15D
0527e231  LEA RDI,[RSP + 0x260]
0527e239  MOV RSI,RBX
0527e23c  MOV RDX,R14
0527e23f  MOV RCX,RAX
0527e242  MOV R8D,0x1
0527e248  XOR R9D,R9D
0527e24b  CALL 0x0c9d2c20
0527e250  JMP 0x0527e176
0527e255  MOV RDI,qword ptr [RSP + 0x38]
0527e25a  CALL 0x0cafcba0
0527e25f  TEST AL,AL
0527e261  JZ 0x0527e281
0527e263  MOV RDI,qword ptr [RSP + 0x38]
0527e268  XOR ESI,ESI
0527e26a  CALL 0x0cafad60
0527e26f  MOV RDI,qword ptr [RSP + 0x38]
0527e274  LEA RSI,[RSP + 0x2e0]
0527e27c  CALL 0x0cafca30
0527e281  MOV RAX,qword ptr [RSP + 0x38]
0527e286  MOV RSI,qword ptr [RAX + 0xf8]
0527e28d  LEA RDI,[RSP + 0x260]
0527e295  CALL 0x0c9e7730
0527e29a  MOV RAX,qword ptr [RSP + 0x2e0]
0527e2a2  LEA RDI,[RSP + 0x2e0]
0527e2aa  CALL qword ptr [RAX + 0x150]
0527e2b0  MOV RCX,qword ptr [RAX]
0527e2b3  MOV RDI,RAX
0527e2b6  CALL qword ptr [RCX + 0xc38]
0527e2bc  MOV EBX,EAX
0527e2be  MOV RDI,qword ptr [RSP + 0x308]
0527e2c6  MOV RAX,qword ptr [RDI]
0527e2c9  CALL qword ptr [RAX + 0x9f0]
0527e2cf  XOR AL,0x1
0527e2d1  OR BL,AL
0527e2d3  CMP BL,0x1
0527e2d6  JNZ 0x0527e349
0527e2d8  MOV RAX,qword ptr [RSP + 0x278]
0527e2e0  CMP RAX,qword ptr [RSP + 0x270]
0527e2e8  JZ 0x0527e349
0527e2ea  XOR R12D,R12D
0527e2ed  LEA RBX,[0x1d38818]
0527e2f4  LEA R14,[RSP + 0x260]
0527e2fc  LEA R15,[RSP + 0x2e0]
0527e304  NOP word ptr CS:[RAX + RAX*0x1]
0527e310  MOV RDI,R14
0527e313  MOV RSI,R15
0527e316  MOV RDX,RBX
0527e319  MOV ECX,0x7fffffff
0527e31e  MOV R8D,0x1
0527e324  CALL 0x0c9e4770
0527e329  MOV RAX,qword ptr [RSP + 0x278]
0527e331  CMP RAX,qword ptr [RSP + 0x270]
0527e339  JZ 0x0527e349
0527e33b  LEA RAX,[R12 + 0x1]
0527e340  CMP R12,0x7f
0527e344  MOV R12,RAX
0527e347  JC 0x0527e310
0527e349  MOV RAX,qword ptr [RSP + 0x2e0]
0527e351  LEA RDI,[RSP + 0x2e0]
0527e359  CALL qword ptr [RAX + 0x150]
0527e35f  MOV RCX,qword ptr [RAX]
0527e362  MOV RDI,RAX
0527e365  CALL qword ptr [RCX + 0xc38]
0527e36b  MOV EBX,EAX
0527e36d  MOV RDI,qword ptr [RSP + 0x308]
0527e375  MOV RAX,qword ptr [RDI]
0527e378  CALL qword ptr [RAX + 0x9f0]
0527e37e  XOR AL,0x1
0527e380  OR BL,AL
0527e382  CMP BL,0x1
0527e385  JNZ 0x0527e3f9
0527e387  MOV RAX,qword ptr [RSP + 0x218]
0527e38f  CMP RAX,qword ptr [RSP + 0x210]
0527e397  JZ 0x0527e3f9
0527e399  XOR R12D,R12D
0527e39c  LEA RBX,[0x1d38818]
0527e3a3  LEA R14,[RSP + 0x200]
0527e3ab  LEA R15,[RSP + 0x2e0]
0527e3b3  NOP dword ptr CS:[RAX + RAX*0x1]
0527e3c0  MOV RDI,R14
0527e3c3  MOV RSI,R15
0527e3c6  MOV RDX,RBX
0527e3c9  MOV ECX,0x7fffffff
0527e3ce  MOV R8D,0x1
0527e3d4  CALL 0x0c9e4770
0527e3d9  MOV RAX,qword ptr [RSP + 0x218]
0527e3e1  CMP RAX,qword ptr [RSP + 0x210]
0527e3e9  JZ 0x0527e3f9
0527e3eb  LEA RAX,[R12 + 0x1]
0527e3f0  CMP R12,0x7f
0527e3f4  MOV R12,RAX
0527e3f7  JC 0x0527e3c0
0527e3f9  MOV RAX,qword ptr [RSP + 0x38]
0527e3fe  MOV RDI,qword ptr [RAX + 0xf8]
0527e405  LEA RSI,[RSP + 0x260]
0527e40d  CALL 0x0c9e7730
0527e412  MOV RAX,qword ptr [RSP + 0x38]
0527e417  MOV RDI,qword ptr [RAX + 0x100]
0527e41e  LEA RSI,[RSP + 0x200]
0527e426  CALL 0x0c9e7730
0527e42b  MOV RDI,qword ptr [RSP + 0x38]
0527e430  MOV RBX,qword ptr [RDI + 0xfd0]
0527e437  MOV qword ptr [RDI + 0xfd0],0x0
0527e442  TEST RBX,RBX
0527e445  JZ 0x0527e471
0527e447  MOV RDI,qword ptr [RBX]
0527e44a  TEST RDI,RDI
0527e44d  JZ 0x0527e45f
0527e44f  MOV qword ptr [RBX + 0x8],RDI
0527e453  MOV RSI,qword ptr [RBX + 0x10]
0527e457  SUB RSI,RDI
0527e45a  CALL 0x0412a280
0527e45f  MOV ESI,0x18
0527e464  MOV RDI,RBX
0527e467  CALL 0x0412a280
0527e46c  MOV RDI,qword ptr [RSP + 0x38]
0527e471  CALL 0x0cafd630
0527e476  MOV RDI,qword ptr [RSP + 0x240]
0527e47e  TEST RDI,RDI
0527e481  JZ 0x0527e49b
0527e483  MOV qword ptr [RSP + 0x248],RDI
0527e48b  MOV RSI,qword ptr [RSP + 0x250]
0527e493  SUB RSI,RDI
0527e496  CALL 0x0412a280
0527e49b  MOV RDI,qword ptr [RSP + 0x228]
0527e4a3  TEST RDI,RDI
0527e4a6  MOVZX EBP,byte ptr [RSP + 0x1f]
0527e4ab  JZ 0x0527e4c5
0527e4ad  MOV qword ptr [RSP + 0x230],RDI
0527e4b5  MOV RSI,qword ptr [RSP + 0x238]
0527e4bd  SUB RSI,RDI
0527e4c0  CALL 0x0412a280
0527e4c5  MOV RDI,qword ptr [RSP + 0x210]
0527e4cd  TEST RDI,RDI
0527e4d0  JZ 0x0527e4ea
0527e4d2  MOV qword ptr [RSP + 0x218],RDI
0527e4da  MOV RSI,qword ptr [RSP + 0x220]
0527e4e2  SUB RSI,RDI
0527e4e5  CALL 0x0412a280
0527e4ea  MOV RDI,qword ptr [RSP + 0x2a0]
0527e4f2  TEST RDI,RDI
0527e4f5  JZ 0x0527e50f
0527e4f7  MOV qword ptr [RSP + 0x2a8],RDI
0527e4ff  MOV RSI,qword ptr [RSP + 0x2b0]
0527e507  SUB RSI,RDI
0527e50a  CALL 0x0412a280
0527e50f  MOV RDI,qword ptr [RSP + 0x288]
0527e517  TEST RDI,RDI
0527e51a  JZ 0x0527e534
0527e51c  MOV qword ptr [RSP + 0x290],RDI
0527e524  MOV RSI,qword ptr [RSP + 0x298]
0527e52c  SUB RSI,RDI
0527e52f  CALL 0x0412a280
0527e534  MOV RDI,qword ptr [RSP + 0x270]
0527e53c  TEST RDI,RDI
0527e53f  JZ 0x0527e559
0527e541  MOV qword ptr [RSP + 0x278],RDI
0527e549  MOV RSI,qword ptr [RSP + 0x280]
0527e551  SUB RSI,RDI
0527e554  CALL 0x0412a280
0527e559  LEA RDI,[RSP + 0x2e0]
0527e561  CALL 0x0c9d0f40
0527e566  LEA RAX,[0xf3f24c8]
0527e56d  MOV qword ptr [RSP + 0x450],RAX
0527e575  LEA RDI,[RSP + 0x4d0]
0527e57d  CALL 0x052a3830
0527e582  LEA RDI,[RSP + 0x450]
0527e58a  CALL 0x0cb3ae10
0527e58f  MOVZX EAX,byte ptr [RSP + 0x2d8]
0527e597  TEST AL,0x1
0527e599  JZ 0x0527e627
0527e59f  MOV R14,qword ptr [RSP + 0x2c0]
0527e5a7  TEST R14,R14
0527e5aa  JZ 0x0527e627
0527e5ac  MOV R15,qword ptr [RSP + 0x2c8]
0527e5b4  MOV RDI,R14
0527e5b7  CMP R14,R15
0527e5ba  JNZ 0x0527e5c9
0527e5bc  JMP 0x0527e60f
0527e5c0  ADD R15,-0x20
0527e5c4  CMP R15,R14
0527e5c7  JZ 0x0527e607
0527e5c9  CMP byte ptr [R15 + -0x8],0x1
0527e5ce  JNZ 0x0527e5d9
0527e5d0  MOV RDI,qword ptr [R15 + -0x10]
0527e5d4  CALL 0x0412d6b0
0527e5d9  MOV RBX,qword ptr [R15 + -0x18]
0527e5dd  TEST RBX,RBX
0527e5e0  JZ 0x0527e5c0
0527e5e2  MOV RAX,-0x1
0527e5e9  XADD.LOCK qword ptr [RBX + 0x8],RAX
0527e5ef  TEST RAX,RAX
0527e5f2  JNZ 0x0527e5c0
0527e5f4  MOV RAX,qword ptr [RBX]
0527e5f7  MOV RDI,RBX
0527e5fa  CALL qword ptr [RAX + 0x10]
0527e5fd  MOV RDI,RBX
0527e600  CALL 0x0412c2d0
0527e605  JMP 0x0527e5c0
0527e607  MOV RDI,qword ptr [RSP + 0x2c0]
0527e60f  MOV qword ptr [RSP + 0x2c8],R14
0527e617  MOV RSI,qword ptr [RSP + 0x2d0]
0527e61f  SUB RSI,RDI
0527e622  CALL 0x0412a280
0527e627  MOV RBX,qword ptr [RSP + 0x40]
0527e62c  TEST RBX,RBX
0527e62f  JZ 0x0527e654
0527e631  MOV RAX,-0x1
0527e638  XADD.LOCK qword ptr [RBX + 0x8],RAX
0527e63e  TEST RAX,RAX
0527e641  JNZ 0x0527e654
0527e643  MOV RAX,qword ptr [RBX]
0527e646  MOV RDI,RBX
0527e649  CALL qword ptr [RAX + 0x10]
0527e64c  MOV RDI,RBX
0527e64f  CALL 0x0412c2d0
0527e654  MOV EAX,EBP
0527e656  ADD RSP,0x678
0527e65d  POP RBX
0527e65e  POP R12
0527e660  POP R13
0527e662  POP R14
0527e664  POP R15
0527e666  POP RBP
0527e667  RET
0527e668  XOR ECX,ECX
0527e66a  JMP 0x0527dcc6
```

## `0527ab30` — OverworldGenerator slot 15

- Ghidra name: `OverworldGenerator__decorationPostProcessChunk`
- Body: `[[0527ab30, 0527afa8] [0527afb0, 0527afbe] [0527afc0, 0527b073] [0527b080, 0527b375] [0527b380, 0527b580] [0527b590, 0527b64e] [0527b650, 0527b69b] [0527b6a0, 0527ba07] [0527ba10, 0527bb04] [0527bb10, 0527bba0] [0527bbb0, 0527c10e] [0527c1f8, 0527c225] [0527c38d, 0527c42a]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGenerator__decorationPostProcessChunk(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  float *pfVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  long **pplVar7;
  long *plVar8;
  char cVar9;
  short sVar10;
  float extraout_EAX;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  undefined1 (*pauVar15) [16];
  float extraout_var;
  undefined8 *puVar16;
  uint *puVar17;
  short *psVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  ulong uVar28;
  undefined1 uVar29;
  int iVar30;
  short sVar31;
  int iVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined1 uVar39;
  float fVar40;
  undefined *puVar41;
  float fVar42;
  float fStack_3a4;
  long **pplStack_378;
  long *plStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  long *plStack_358;
  long lStack_350;
  uint uStack_348;
  int iStack_344;
  long *plStack_340;
  undefined8 uStack_338;
  long alStack_330 [6];
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  long alStack_2b8 [2];
  undefined **ppuStack_2a8;
  long *plStack_298;
  long lStack_288;
  undefined1 (*pauStack_280) [16];
  long *plStack_278;
  ulong uStack_270;
  long alStack_268 [6];
  undefined8 uStack_238;
  int iStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  uint uStack_218;
  short sStack_214;
  byte bStack_212;
  long lStack_210;
  ulong uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined *apuStack_1f0 [4];
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined2 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined4 uStack_170;
  long lStack_16c;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  long **pplStack_128;
  long alStack_118 [4];
  long *plStack_f8;
  undefined8 uStack_e8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  byte bStack_40;
  
  lVar13 = FUN_052be680(param_1 + 0x28);
  uStack_1f8 = (**(code **)(*(long *)param_1[4] + 0x438))();
  plVar14 = (long *)(**(code **)(*param_1 + 0x188))(param_1);
  (**(code **)(*param_1 + 0x1e8))(auStack_1b8,param_1,param_2[10]);
  func_0x0d2eeb90(apuStack_1f0,
                  CONCAT44((int)((ulong)param_2[10] >> 0x1c) >> 2,(int)param_2[10] << 2) &
                  0xfffffffcffffffff,param_1 + 0xe,4);
  puVar1 = (ulong *)(param_2 + 10);
  func_0x0ca71350(param_1,param_1[5],puVar1,plVar14);
  func_0x0ca71230(param_1,param_1[5],puVar1,plVar14,apuStack_1f0);
  lVar25 = *(long *)(lVar13 + 0xa2208);
  if (*(char *)(lVar25 + 0x9e7) == '\x01') {
    uVar27 = (int)param_2[10] * 0x14609048 + *(int *)((long)param_2 + 0x54) * 0x7ebe2d5;
    *(uint *)(lVar25 + 8) = uVar27;
    *(undefined2 *)(lVar25 + 0x9e4) = 0;
    *(undefined4 *)(lVar25 + 0x9d4) = 0;
    *(undefined8 *)(lVar25 + 0x9d8) = 0;
    *(uint *)(lVar25 + 0xc) = uVar27;
    lVar24 = 5;
    while( true ) {
      uVar28 = ((ulong)((uVar27 >> 0x1e ^ uVar27) * 0x6c078965) + lVar24) - 4;
      uVar27 = (uint)uVar28;
      *(uint *)(lVar25 + -4 + lVar24 * 4) = uVar27;
      if (lVar24 == 0x191) break;
      uVar27 = (((uint)(uVar28 >> 0x1e) & 3 ^ uVar27) * 0x6c078965 + (int)lVar24) - 3;
      *(uint *)(lVar25 + lVar24 * 4) = uVar27;
      lVar24 = lVar24 + 2;
    }
    *(undefined8 *)(lVar25 + 0x9cc) = 0x18e00000270;
  }
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar2 = (long *)(lVar13 + 0xa1810);
  lStack_300 = lVar13 + 0x1800;
  lStack_2f8 = lVar13 + 0xa1800;
  uStack_2e0 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
  uStack_2dc = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
  iStack_2e4 = (int)*(short *)(param_2[6] + 0xa8);
  uStack_2f0 = 0x14000000010;
  iStack_2e8 = 0x10;
  lVar25 = 0x312;
  do {
    puVar4 = (undefined4 *)(lVar13 + -0x90 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x80 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x70 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x60 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x50 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x40 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x30 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x20 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + -0x10 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    puVar4 = (undefined4 *)(lVar13 + lVar25 * 8);
    *puVar4 = uStack_2e0;
    puVar4[1] = uStack_2dc;
    puVar4[2] = uStack_2e0;
    puVar4[3] = uStack_2dc;
    lVar25 = lVar25 + 0x14;
  } while (lVar25 != 0x14312);
  (**(code **)(*param_1 + 0x1e0))
            (&pplStack_378,param_1,puVar1,apuStack_1f0,(int)*(short *)(param_1[5] + 0xa8),0x140,
             (int)*(short *)(param_1[5] + 0xac));
  (**(code **)(*plVar14 + 0x20))(plVar14,param_2,auStack_1b8);
  pauVar15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (pauVar15 == (undefined1 (*) [16])0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *pauVar15 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar15[1] = 0;
  lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (lVar25 == 0) {
    func_0x0eec74c0(0x200,0);
  }
  *(long *)*pauVar15 = lVar25;
  *(long *)pauVar15[1] = lVar25 + 0x200;
  func_0x0eee2dd0(lVar25,0,0x200);
  *(long *)(*pauVar15 + 8) = lVar25 + 0x200;
  puStack_158 = &UNK_0ef9fb50;
  pauStack_280 = pauVar15;
  plStack_150 = param_2;
  ppuStack_138 = &puStack_158;
  (**(code **)(*param_1 + 0x200))
            (param_1,&lStack_300,puVar1,auStack_1b8,pplStack_378,&puStack_158,1,pauVar15);
  if (ppuStack_138 == &puStack_158) {
    lVar25 = 0x20;
LAB_0527af14:
    (**(code **)(*ppuStack_138 + lVar25))();
  }
  else {
    lVar25 = 0x28;
    if (ppuStack_138 != (undefined **)0x0) goto LAB_0527af14;
  }
  pauStack_280 = (undefined1 (*) [16])0x0;
  plVar20 = (long *)param_2[0x1fa];
  param_2[0x1fa] = (long)pauVar15;
  if (plVar20 != (long *)0x0) {
    lVar25 = *plVar20;
    if (lVar25 != 0) {
      plVar20[1] = lVar25;
      func_0x0412a280(lVar25,plVar20[2] - lVar25);
    }
    func_0x0412a280(plVar20,0x18);
  }
  plStack_358 = plVar14;
  lStack_350 = lVar13;
  func_0x0cc41df0(0xf6ff9e0,0xf713fc8,1);
  iVar30 = 0;
  fStack_368 = extraout_EAX;
  fStack_364 = extraout_var;
  fStack_360 = extraout_EAX;
  fStack_35c = extraout_var;
  do {
    iVar32 = 0;
    do {
      iVar11 = (**(code **)(*plVar2 + 0x18))(plVar2,4);
      uVar27 = iVar11 + 2;
      if (uVar27 != 0) {
        iVar11 = iStack_2e8 * iVar30 + iVar32;
        uVar28 = (ulong)uVar27;
        if (uVar27 < 0xe) {
LAB_0527b003:
          uVar33 = 0;
        }
        else {
          uVar34 = iVar11 * uStack_2f0._4_4_;
          if (CARRY4((uint)(uVar28 - 1),uVar34)) goto LAB_0527b003;
          uVar33 = 0;
          if (uVar28 - 1 >> 0x20 == 0) {
            uVar33 = (ulong)(uVar27 & 0xfffffffc);
            uVar35 = uVar33;
            do {
              puVar16 = (undefined8 *)(lStack_300 + (ulong)uVar34 * 8);
              *puVar16 = CONCAT44(fStack_364,fStack_368);
              puVar16[1] = CONCAT44(fStack_35c,fStack_360);
              puVar16 = (undefined8 *)(lStack_300 + 0x10 + (ulong)uVar34 * 8);
              *puVar16 = CONCAT44(fStack_364,fStack_368);
              puVar16[1] = CONCAT44(fStack_35c,fStack_360);
              uVar34 = uVar34 + 4;
              uVar35 = uVar35 - 4;
            } while (uVar35 != 0);
            if ((uVar27 & 0xfffffffc) == uVar27) goto LAB_0527afc0;
          }
        }
        uVar36 = uVar28 & 3;
        uVar35 = uVar33;
        if ((uVar27 & 3) != 0) {
          do {
            pfVar3 = (float *)(lStack_300 +
                              (ulong)(uint)(iVar11 * uStack_2f0._4_4_ + (int)uVar35) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            uVar35 = uVar35 + 1;
            uVar36 = uVar36 - 1;
          } while (uVar36 != 0);
        }
        if (uVar33 - uVar28 < 0xfffffffffffffffd) {
          iVar11 = iVar11 * uStack_2f0._4_4_;
          do {
            iVar6 = (int)uVar35;
            pfVar3 = (float *)(lStack_300 + (ulong)(uint)(iVar11 + iVar6) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(iVar11 + iVar6 + 1) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(uint)(iVar11 + 2 + iVar6) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            pfVar3 = (float *)(lStack_300 + (ulong)(iVar11 + iVar6 + 3) * 8);
            *pfVar3 = extraout_EAX;
            pfVar3[1] = extraout_var;
            uVar35 = uVar35 + 4;
          } while (uVar28 != uVar35);
        }
      }
LAB_0527afc0:
      iVar32 = iVar32 + 1;
    } while (iVar32 != 0x10);
    iVar30 = iVar30 + 1;
  } while (iVar30 != 0x10);
  lVar25 = (**(code **)(*(long *)param_2[5] + 0x568))();
  puVar38 = (undefined *)(lVar25 + 0x50);
  puVar41 = puVar38;
  if ((*(char *)(lVar25 + 0x77) == '\0') &&
     (((puVar37 = (undefined *)(lVar25 + 0x70), *(char *)(lVar25 + 0x68) != '\0' ||
       (puVar41 = puVar37, (*(byte *)(lVar25 + 0x56) & 1) != 0)) &&
      (cVar9 = func_0x04fa7a10(puVar37,puVar38), puVar41 = puVar38, cVar9 != '\0')))) {
    puVar41 = puVar37;
  }
  if (((puVar41[6] | puVar41[0x18]) & 1) == 0) {
    puVar41 = &DAT_0f72b850;
  }
  if ((DAT_0f5a2858 == '\0') && (puVar41[0x18] == '\0')) {
    bStack_212 = 1;
    if (((DAT_0f5a2846 & 1) != 0) && (puVar41[7] == '\0')) {
      bStack_212 = func_0x04fa7a10(puVar41,0xf5a2840);
      bStack_212 = bStack_212 ^ 1;
    }
  }
  else {
    bStack_212 = 0;
  }
  lVar25 = param_1[5];
  sVar31 = *(short *)(lVar25 + 0xa8);
  uVar12 = *(undefined4 *)(lVar25 + 0xa8);
  sVar10 = *(short *)(lVar25 + 0xac);
  puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x1f8))();
  sStack_214 = sVar10 - sVar31;
  uStack_220 = *puVar16;
  uStack_218 = (uint)(bStack_212 ^ 1);
  plStack_228 = plVar2;
  func_0x0c855c80(&puStack_158,param_2);
  plStack_370 = (long *)CONCAT71(plStack_370._1_7_,bStack_40);
  iStack_344 = (int)sVar31;
  if (bStack_40 == 0) {
    lVar13 = lStack_350 + 0x1000;
    lVar25 = 0;
  }
  else {
    puVar17 = (uint *)(**(code **)(*param_1 + 0x1f0))();
    lVar13 = lStack_350 + 0x1000;
    func_0x0eee2dd0(lVar13,0,0x400);
    uVar27 = *puVar17;
    if ((ulong)uVar27 != 0) {
      lVar25 = 0;
      fVar42 = _DAT_011983f0;
      do {
        fStack_368 = fVar42;
        func_0x0d2ebd50(*(long *)(puVar17 + 2) + lVar25,lVar13,0x10,0x10);
        fVar42 = fStack_368 * _DAT_011986e0;
        lVar25 = lVar25 + 0x80c;
      } while ((ulong)uVar27 * 0x80c - lVar25 != 0);
    }
    lVar25 = 0;
    if ((bStack_40 & 1) != 0) {
      lVar25 = lVar13;
    }
  }
  func_0x0c856760(param_2,&lStack_300,apuStack_1f0,uVar12,lVar25,&plStack_228,&puStack_158);
  cVar9 = (**(code **)(*(long *)param_2[5] + 0xbe8))();
  if (cVar9 != '\0') {
    plStack_278 = alStack_268;
    uStack_270 = 0x600000000;
    func_0x0cafcfe0(param_2 + 0x24,&plStack_278);
    if ((uStack_270 & 0xffffffff) != 0) {
      plVar14 = plStack_278 + (uStack_270 & 0xffffffff);
      plVar20 = plStack_278;
      do {
        lVar25 = *plVar20;
        if ((DAT_0f5570f0 == '\0') && (iVar30 = func_0x04108328(&DAT_0f5570f0), iVar30 != 0)) {
          LOCK();
          UNLOCK();
          _DAT_0f5570e8 = _DAT_0f556458;
          _DAT_0f556458 = _DAT_0f556458 + 1;
          func_0x0410844d(&DAT_0f5570f0);
        }
        for (psVar18 = *(short **)(lVar25 + 0x170); psVar18 != *(short **)(lVar25 + 0x178);
            psVar18 = psVar18 + 8) {
          if (*psVar18 == _DAT_0f5570e8) {
            if ((*(long *)(psVar18 + 4) != 0) &&
               (plVar26 = plVar20, *(char *)(*(long *)(psVar18 + 4) + 0x48) != '\0'))
            goto LAB_0527b417;
            break;
          }
        }
        plVar20 = plVar20 + 1;
        plVar26 = plVar14;
      } while (plVar20 != plVar14);
LAB_0527b417:
      if (plVar26 != plStack_278 + (uStack_270 & 0xffffffff)) {
        if ((char)plStack_370 == '\0') {
          uVar28 = *puVar1;
          puVar17 = (uint *)(**(code **)(*param_1 + 0x1f0))(param_1);
          func_0x0eee2dd0(lVar13,0,0x400);
          uVar27 = *puVar17;
          if ((ulong)uVar27 != 0) {
            lVar25 = 0;
            fVar42 = _DAT_011983f0;
            do {
              fStack_368 = fVar42;
              func_0x0d2ebd50((float)((int)uVar28 << 4),
                              (float)(int)((uint)(uVar28 >> 0x1c) & 0xfffffff0),
                              fStack_368 * _DAT_01198a50,fStack_368 * _DAT_01198a50,
                              _DAT_01198b7c / fStack_368,*(long *)(puVar17 + 2) + lVar25,lVar13,0x10
                              ,0x10);
              lVar25 = lVar25 + 0x80c;
              fVar42 = fStack_368 * _DAT_011986e0;
            } while ((ulong)uVar27 * 0x80c - lVar25 != 0);
          }
        }
        lVar25 = 0;
        sVar31 = 0;
        do {
          lVar13 = 0;
          do {
            uVar21 = uStack_2d8;
            plStack_340 = alStack_330;
            uStack_338 = 0x200000000;
            uVar39 = (undefined1)lVar25;
            uVar29 = (undefined1)lVar13;
            uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
            uStack_2d8._4_4_ = SUB84(uVar21,4);
            uStack_2d8._0_4_ = (uint)(ushort)uStack_2d8;
            lVar24 = func_0x0caf8020(param_2,&uStack_2d8);
            iVar30 = iStack_344;
            iVar32 = (int)param_2[7] + (int)lVar25;
            iStack_230 = (int)param_2[8] + (int)lVar13;
            uStack_238 = CONCAT44(((int)sVar31 + *(int *)((long)param_2 + 0x3c)) - iStack_344,iVar32
                                 );
            uVar28 = (**(code **)(apuStack_1f0[0] + 0x10))
                               (apuStack_1f0,CONCAT44(iStack_230 >> 2,iVar32 >> 2));
            if ((uVar28 & 0x10000) == 0) {
              sVar31 = *(short *)(param_1[5] + 0xa8);
            }
            else {
              sVar10 = (short)uVar28 + -8;
              sVar31 = *(short *)(param_1[5] + 0xa8);
              if ((sVar31 <= sVar10) &&
                 (sVar23 = *(short *)(param_1[5] + 0xaa) + -1, sVar31 = sVar10, sVar23 < sVar10)) {
                sVar31 = sVar23;
              }
            }
            fVar42 = 0.0;
            fStack_368 = (float)(sVar31 - iVar30);
            if ((int)fStack_368 < 0) {
              sVar31 = 0;
            }
            else {
              fStack_3a4 = 0.0;
              sVar31 = 0;
              do {
                uVar21 = uStack_2d8;
                uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
                uStack_2d8._4_4_ = SUB84(uVar21,4);
                uStack_2d8._0_4_ = CONCAT22(sVar31,(ushort)uStack_2d8);
                lVar19 = func_0x0caf8020(param_2,&uStack_2d8);
                fVar40 = (float)(int)sVar31;
                if (*(short *)(lVar19 + 0x168) == *(short *)(lVar24 + 0x168)) {
                  fVar42 = fVar40;
                }
                if ((fStack_368 == fVar40) ||
                   (*(short *)(lVar19 + 0x168) != *(short *)(lVar24 + 0x168))) {
                  if ((DAT_0f5570f0 == '\0') &&
                     (iVar30 = func_0x04108328(&DAT_0f5570f0), iVar30 != 0)) {
                    LOCK();
                    UNLOCK();
                    _DAT_0f5570e8 = _DAT_0f556458;
                    _DAT_0f556458 = _DAT_0f556458 + 1;
                    func_0x0410844d(&DAT_0f5570f0);
                  }
                  for (psVar18 = *(short **)(lVar24 + 0x170); psVar18 != *(short **)(lVar24 + 0x178)
                      ; psVar18 = psVar18 + 8) {
                    if (*psVar18 == _DAT_0f5570e8) {
                      lVar19 = *(long *)(psVar18 + 4);
                      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x48) == '\x01')) {
                        uVar28 = uStack_338 & 0xffffffff;
                        plVar14 = plStack_340 + uVar28 * 3;
                        if ((uint)uStack_338 == uStack_338._4_4_) {
                          lStack_288 = uVar28 * 3;
                          plStack_200 = plVar14;
                          if ((uint)uStack_338 == 0xffffffff) {
                            puVar16 = (undefined8 *)func_0x041086b0(0x10);
                            func_0x0412bf30(puVar16,&UNK_011ed0d9);
                            *puVar16 = &UNK_0eeec920;
                            lVar25 = func_0x041088a0(puVar16,&UNK_0eeec938,&UNK_0412bce0);
                            lVar13 = 0x20;
                            if ((ppuStack_2a8 == (undefined **)(ulong)(uint)fVar40) ||
                               (lVar13 = 0x28, ppuStack_2a8 != (undefined **)0x0)) {
                              (**(code **)((long)*ppuStack_2a8 + lVar13))();
                            }
                            FUN_0527c430(&pauStack_280);
                            FUN_0527aaa0(&pplStack_378);
                            apuStack_1f0[0] = &UNK_0f460460;
                            if (lStack_1d0 != 0) goto LAB_0527c3d5;
                            while (lStack_1a8 == 0) {
                              lStack_1d0 = lVar25;
                              func_0x0eee2d70();
LAB_0527c3d5:
                              lStack_1c8 = lStack_1d0;
                              func_0x0412a280();
                            }
                            func_0x0412a280(lStack_1a8,lStack_198 - lStack_1a8);
                            uVar21 = func_0x0eee2d70(lVar25);
                            uVar21 = func_0x04882e20(uVar21);
                            func_0x04882e20(uVar21);
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uStack_348 = (uint)uStack_338 + 1;
                          uVar33 = (ulong)((float)uVar28 * _DAT_0119858c);
                          uStack_208 = uVar33 & 0xffffffff;
                          if ((uint)uVar33 < uStack_348) {
                            uStack_208 = (ulong)uStack_348;
                          }
                          uVar27 = (uint)(long)((float)uVar28 / _DAT_0119858c);
                          if (CARRY4(uVar27,(uint)uStack_338)) {
                            uStack_208 = 0xffffffff;
                          }
                          lStack_210 = uStack_208 * 0x18;
                          plStack_370 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,lStack_210,uStack_348,
                                                           uVar27 + (uint)uStack_338);
                          if (plStack_370 == (long *)0x0) {
                            func_0x0eec74c0(lStack_210,0);
                          }
                          plVar8 = plStack_340;
                          plVar14 = plStack_370;
                          plStack_370[lStack_288] = lVar24;
                          plStack_370[lStack_288 + 1] = lVar19 + 0x28;
                          plStack_370[lStack_288 + 2] = CONCAT44(fVar42,fStack_3a4);
                          plVar20 = plStack_370;
                          plVar26 = plStack_340;
                          if (plStack_200 == plStack_340 + (uStack_338 & 0xffffffff) * 3) {
                            if ((uStack_338 & 0xffffffff) != 0) {
                              do {
                                plVar20[2] = plVar26[2];
                                lVar24 = plVar26[1];
                                *plVar20 = *plVar26;
                                plVar20[1] = lVar24;
                                plVar26 = plVar26 + 3;
                                plVar20 = plVar20 + 3;
                              } while (plVar26 != plStack_200);
                            }
                          }
                          else {
                            for (; plVar26 != plStack_200; plVar26 = plVar26 + 3) {
                              plVar20[2] = plVar26[2];
                              lVar24 = plVar26[1];
                              *plVar20 = *plVar26;
                              plVar20[1] = lVar24;
                              plVar20 = plVar20 + 3;
                            }
                            func_0x0eee2f00(plStack_370 + lStack_288 + 3,plStack_200,
                                            ((ulong)((long)(plStack_340 +
                                                           (uStack_338 & 0xffffffff) * 3) +
                                                    (-0x18 - (long)plStack_200)) / 0x18) * 0x18 +
                                            0x18);
                          }
                          if (plVar8 != (long *)0x0 && alStack_330 != plVar8) {
                            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar8);
                          }
                          uStack_338 = uStack_208 << 0x20;
                          uVar27 = uStack_348;
                          plStack_340 = plVar14;
                        }
                        else {
                          *plVar14 = lVar24;
                          plVar14[1] = lVar19 + 0x28;
                          plVar14[2] = CONCAT44(fVar42,fStack_3a4);
                          uVar27 = (uint)uStack_338 + 1;
                        }
                        uStack_338 = CONCAT44(uStack_338._4_4_,uVar27);
                      }
                      break;
                    }
                  }
                  uVar21 = uStack_2d8;
                  uStack_2d8._0_2_ = CONCAT11(uVar29,uVar39);
                  uStack_2d8._4_4_ = SUB84(uVar21,4);
                  uStack_2d8._0_4_ = CONCAT22(sVar31,(ushort)uStack_2d8);
                  lVar24 = func_0x0caf8020(param_2,&uStack_2d8);
                  fVar42 = fVar40;
                  fStack_3a4 = fVar40;
                }
                sVar31 = sVar31 + 1;
              } while ((int)sVar31 <= (int)fStack_368);
            }
            if ((uStack_338 & 0xffffffff) != 0) {
              plVar14 = plStack_340 + (uStack_338 & 0xffffffff) * 3;
              plVar20 = plStack_340;
              do {
                func_0x0c851900(&uStack_2d8,*plVar20,plVar20[1]);
                uStack_170 = *(undefined4 *)(lStack_350 + 0x1000 + (lVar13 * 0x10 + lVar25) * 4);
                lStack_16c = plVar20[2];
                lStack_190 = param_2[0x1fa];
                uStack_188 = *(undefined2 *)((long)param_2 + 0x3c);
                plStack_180 = &lStack_300;
                puStack_178 = &uStack_238;
                plStack_160 = &lStack_190;
                if (plStack_2d0 != (long *)0x0) {
                  (**(code **)(*plStack_2d0 + 0x28))
                            (plStack_2d0,&plStack_228,&uStack_2d8,&plStack_180);
                }
                if (plStack_298 == alStack_2b8) {
                  lVar24 = 0x20;
LAB_0527ba15:
                  (**(code **)(*plStack_298 + lVar24))();
                }
                else {
                  lVar24 = 0x28;
                  if (plStack_298 != (long *)0x0) goto LAB_0527ba15;
                }
                plVar20 = plVar20 + 3;
              } while (plVar20 != plVar14);
            }
            if (plStack_340 != (long *)0x0 && alStack_330 != plStack_340) {
              (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_340);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x10);
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0x10);
      }
    }
    if (plStack_278 != (long *)0x0 && alStack_268 != plStack_278) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
  }
  lVar13 = lStack_58;
  lVar25 = lStack_50;
  if (lStack_58 != 0) {
    for (; lVar13 != lVar25; lVar25 = lVar25 + -0x50) {
      plVar14 = *(long **)(lVar25 + -0x10);
      if ((long *)(lVar25 + -0x30) == plVar14) {
        lVar24 = 0x20;
LAB_0527bbb5:
        (**(code **)(*plVar14 + lVar24))();
      }
      else {
        lVar24 = 0x28;
        if (plVar14 != (long *)0x0) goto LAB_0527bbb5;
      }
    }
    lStack_50 = lVar13;
    func_0x0412a280(lStack_58,lStack_48 - lStack_58);
  }
  uStack_2d8 = pplStack_378;
  puStack_2c8 = &UNK_0ef9fb50;
  plStack_298 = (long *)0x0;
  plStack_2c0 = param_2;
  ppuStack_2a8 = &puStack_2c8;
  if ((char)param_1[0x26] == '\0') {
    lVar25 = param_2[5];
    uVar12 = (**(code **)(*(long *)param_2[6] + 0x18))();
    puStack_158 = &UNK_0f3eb4b0;
    plStack_150 = &lStack_300;
    plStack_148 = plStack_358;
    ppuStack_138 = (undefined **)CONCAT44(ppuStack_138._4_4_,uVar12);
    pplStack_128 = uStack_2d8;
    lStack_140 = lVar25;
    if (ppuStack_2a8 == (undefined **)0x0) {
      plStack_f8 = (long *)0x0;
    }
    else if (ppuStack_2a8 == &puStack_2c8) {
      plStack_f8 = alStack_118;
      (**(code **)(*ppuStack_2a8 + 0x18))(ppuStack_2a8,alStack_118);
    }
    else {
      plStack_f8 = (long *)(**(code **)(*ppuStack_2a8 + 0x10))();
    }
    uStack_e8 = plStack_298;
    plStack_278 = (long *)((ulong)CONCAT42((int)((ulong)plStack_278 >> 0x20),
                                           -*(short *)(param_2[6] + 0xa8)) << 0x10);
    uVar21 = func_0x0caf8020(param_2,&plStack_278);
    (**(code **)(*param_1 + 0x1b8))(param_1,uVar21,param_2,&puStack_158,plVar2,puVar1);
    uVar21 = uStack_1f8;
    puStack_158 = &UNK_0f3eb4b0;
    if (plStack_f8 == alStack_118) {
      lVar25 = 0x20;
LAB_0527bd85:
      (**(code **)(*plStack_f8 + lVar25))();
    }
    else {
      lVar25 = 0x28;
      if (plStack_f8 != (long *)0x0) goto LAB_0527bd85;
    }
    lVar25 = (**(code **)(*(long *)param_2[5] + 0x568))();
    puVar38 = (undefined *)(lVar25 + 0x50);
    puVar41 = puVar38;
    if ((*(char *)(lVar25 + 0x77) == '\0') &&
       (((puVar37 = (undefined *)(lVar25 + 0x70), *(char *)(lVar25 + 0x68) != '\0' ||
         (puVar41 = puVar37, (*(byte *)(lVar25 + 0x56) & 1) != 0)) &&
        (cVar9 = func_0x04fa7a10(puVar37,puVar38), puVar41 = puVar38, cVar9 != '\0')))) {
      puVar41 = puVar37;
    }
    puVar38 = &DAT_0f72b850;
    if (((puVar41[6] | puVar41[0x18]) & 1) != 0) {
      puVar38 = puVar41;
    }
    if (((((DAT_0f5a2e08 != '\0') || (puVar38[0x18] != '\0')) ||
         ((puVar41 = &UNK_0158fc54, (DAT_0f5a2df6 & 1) != 0 &&
          ((puVar38[7] == '\0' && (cVar9 = func_0x04fa7a10(puVar38,0xf5a2df0), cVar9 != '\0'))))))
        && (puVar41 = &UNK_0158fc34, DAT_0f5a2858 == '\0')) &&
       ((puVar38[0x18] == '\0' &&
        ((((DAT_0f5a2846 & 1) == 0 || (puVar38[7] != '\0')) ||
         (cVar9 = func_0x04fa7a10(puVar38,0xf5a2840), cVar9 == '\0')))))) {
      puVar41 = &UNK_0158fc44;
    }
    uVar22 = (**(code **)(*(long *)param_2[5] + 0x2b0))();
    if (((DAT_0f5a2858 != '\0') || (puVar38[0x18] != '\0')) ||
       (((DAT_0f5a2846 & 1) != 0 &&
        ((puVar38[7] == '\0' && (cVar9 = func_0x04fa7a10(puVar38,0xf5a2840), cVar9 != '\0')))))) {
      puStack_158 = (undefined *)0x0;
      pplStack_128 = (long **)0x0;
      alStack_118[0] = 0;
      func_0x04a89150(param_1 + 0x3c,&lStack_300,puVar1,plStack_358,puVar41,plVar2,uVar21,
                      &puStack_158,uVar22);
      if (pplStack_128 == &plStack_148) {
        lVar25 = 0x20;
      }
      else {
        lVar25 = 0x28;
        if (pplStack_128 == (long **)0x0) goto LAB_0527bf1a;
      }
      (**(code **)((long)*pplStack_128 + lVar25))();
    }
LAB_0527bf1a:
    func_0x04a89150(param_1 + 0x3a,&lStack_300,puVar1,plStack_358,puVar41,plVar2,uVar21,&uStack_2d8,
                    uVar22);
  }
  func_0x0cae2040(param_2,&lStack_300,0);
  func_0x0cafad60(param_2,0);
  if (param_2[0xc] == 0) {
    param_2[0xc] = (long)param_1;
  }
  func_0x0cae0970(param_2,1,2);
  if (ppuStack_2a8 == &puStack_2c8) {
    lVar25 = 0x20;
  }
  else {
    lVar25 = 0x28;
    pplVar7 = pplStack_378;
    if (ppuStack_2a8 == (undefined **)0x0) goto joined_r0x0527bfe2;
  }
  (**(code **)(*ppuStack_2a8 + lVar25))();
  pplVar7 = pplStack_378;
joined_r0x0527bfe2:
  pplStack_378 = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    pplStack_378 = (long **)0x0;
    plVar14 = pplVar7[8];
    if (plVar14 != (long *)0x0) {
      pplVar7[9] = plVar14;
      func_0x0412a280(plVar14,(long)pplVar7[10] - (long)plVar14);
    }
    func_0x0412a280(pplVar7,0x68);
  }
  apuStack_1f0[0] = &UNK_0f460460;
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    func_0x0412a280(lStack_1d0,lStack_1c0 - lStack_1d0);
  }
  if (lStack_1a8 != 0) {
    lStack_1a0 = lStack_1a8;
    func_0x0412a280(lStack_1a8,lStack_198 - lStack_1a8);
  }
  return;
}


```

### Assembly

```asm
0527ab30  PUSH RBP
0527ab31  PUSH R15
0527ab33  PUSH R14
0527ab35  PUSH R13
0527ab37  PUSH R12
0527ab39  PUSH RBX
0527ab3a  SUB RSP,0x378
0527ab41  MOV R15,RSI
0527ab44  MOV RBX,RDI
0527ab47  ADD RDI,0x140
0527ab4e  CALL 0x052be680
0527ab53  MOV RBP,RAX
0527ab56  MOV RDI,qword ptr [RBX + 0x20]
0527ab5a  MOV RAX,qword ptr [RDI]
0527ab5d  CALL qword ptr [RAX + 0x438]
0527ab63  MOV qword ptr [RSP + 0x1b0],RAX
0527ab6b  MOV RAX,qword ptr [RBX]
0527ab6e  MOV RDI,RBX
0527ab71  CALL qword ptr [RAX + 0x188]
0527ab77  MOV R13,RAX
0527ab7a  MOV RDX,qword ptr [R15 + 0x50]
0527ab7e  MOV RAX,qword ptr [RBX]
0527ab81  LEA RDI,[RSP + 0x1f0]
0527ab89  MOV RSI,RBX
0527ab8c  CALL qword ptr [RAX + 0x1e8]
0527ab92  MOV RSI,qword ptr [R15 + 0x50]
0527ab96  MOV RAX,RSI
0527ab99  SHR RAX,0x1c
0527ab9d  SHL ESI,0x2
0527aba0  SAR EAX,0x2
0527aba3  AND EAX,0xfffffffc
0527aba6  SHL RAX,0x20
0527abaa  OR RSI,RAX
0527abad  LEA RDX,[RBX + 0x70]
0527abb1  LEA RDI,[RSP + 0x1b8]
0527abb9  MOV ECX,0x4
0527abbe  CALL 0x0d2eeb90
0527abc3  LEA R14,[R15 + 0x50]
0527abc7  MOV RSI,qword ptr [RBX + 0x28]
0527abcb  MOV RDI,RBX
0527abce  MOV RDX,R14
0527abd1  MOV RCX,R13
0527abd4  CALL 0x0ca71350
0527abd9  MOV RSI,qword ptr [RBX + 0x28]
0527abdd  LEA R8,[RSP + 0x1b8]
0527abe5  MOV RDI,RBX
0527abe8  MOV RDX,R14
0527abeb  MOV RCX,R13
0527abee  CALL 0x0ca71230
0527abf3  MOV qword ptr [RSP + 0x18],R14
0527abf8  MOV RAX,qword ptr [RBP + 0xa2208]
0527abff  CMP byte ptr [RAX + 0x9e7],0x1
0527ac06  JNZ 0x0527ac9d
0527ac0c  IMUL ECX,dword ptr [R15 + 0x54],0x7ebe2d5
0527ac14  IMUL EDX,dword ptr [R15 + 0x50],0x14609048
0527ac1c  ADD EDX,ECX
0527ac1e  MOV dword ptr [RAX + 0x8],EDX
0527ac21  MOV word ptr [RAX + 0x9e4],0x0
0527ac2a  MOV dword ptr [RAX + 0x9d4],0x0
0527ac34  MOV qword ptr [RAX + 0x9d8],0x0
0527ac3f  MOV dword ptr [RAX + 0xc],EDX
0527ac42  MOV ECX,0x5
0527ac47  NOP word ptr [RAX + RAX*0x1]
0527ac50  MOV ESI,EDX
0527ac52  SHR ESI,0x1e
0527ac55  XOR ESI,EDX
0527ac57  IMUL EDX,ESI,0x6c078965
0527ac5d  ADD RDX,RCX
0527ac60  ADD RDX,-0x4
0527ac64  MOV dword ptr [RAX + RCX*0x4 + -0x4],EDX
0527ac68  CMP RCX,0x191
0527ac6f  JZ 0x0527ac8c
0527ac71  MOV ESI,EDX
0527ac73  SHR ESI,0x1e
0527ac76  XOR ESI,EDX
0527ac78  IMUL EDX,ESI,0x6c078965
0527ac7e  ADD EDX,ECX
0527ac80  ADD EDX,-0x3
0527ac83  MOV dword ptr [RAX + RCX*0x4],EDX
0527ac86  ADD RCX,0x2
0527ac8a  JMP 0x0527ac50
0527ac8c  MOV RCX,0x18e00000270
0527ac96  MOV qword ptr [RAX + 0x9cc],RCX
0527ac9d  CMP qword ptr [0x0f6ffb10],0x0
0527aca5  JNZ 0x0527acde
0527aca7  LEA RDI,[0x13a28c0]
0527acae  LEA RSI,[0x11e3821]
0527acb5  LEA RCX,[0x13a2868]
0527acbc  LEA R8,[0x13a2901]
0527acc3  MOV EDX,0x2fd
0527acc8  XOR EAX,EAX
0527acca  CALL 0x0eeddcf0
0527accf  TEST AL,AL
0527acd1  JZ 0x0527acde
0527acd3  MOV dword ptr [0x00000000],0xdeadc0de
0527acde  LEA R14,[RBP + 0xa1810]
0527ace5  LEA RCX,[RBP + 0x1800]
0527acec  LEA RDX,[RBP + 0xa1800]
0527acf3  MOV RAX,qword ptr [0x0f6ffb10]
0527acfa  MOV RAX,qword ptr [RAX]
0527acfd  MOV RAX,qword ptr [RAX + 0x200]
0527ad04  MOV RSI,qword ptr [R15 + 0x30]
0527ad08  MOVSX ESI,word ptr [RSI + 0xa8]
0527ad0f  MOV qword ptr [RSP + 0xa8],RCX
0527ad17  MOV qword ptr [RSP + 0xb0],RDX
0527ad1f  MOV RCX,0x14000000010
0527ad29  MOV qword ptr [RSP + 0xb8],RCX
0527ad31  MOV dword ptr [RSP + 0xc0],0x10
0527ad3c  MOV dword ptr [RSP + 0xc4],ESI
0527ad43  MOVQ XMM0,RAX
0527ad48  PSHUFD XMM0,XMM0,0x44
0527ad4d  MOV ECX,0x312
0527ad52  NOP word ptr CS:[RAX + RAX*0x1]
0527ad60  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x90],XMM0
0527ad69  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x80],XMM0
0527ad6f  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x70],XMM0
0527ad75  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x60],XMM0
0527ad7b  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x50],XMM0
0527ad81  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x40],XMM0
0527ad87  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x30],XMM0
0527ad8d  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x20],XMM0
0527ad93  MOVDQU xmmword ptr [RBP + RCX*0x8 + -0x10],XMM0
0527ad99  MOVDQU xmmword ptr [RBP + RCX*0x8],XMM0
0527ad9f  ADD RCX,0x14
0527ada3  CMP RCX,0x14312
0527adaa  JNZ 0x0527ad60
0527adac  MOV qword ptr [RSP + 0xc8],RAX
0527adb4  MOV RAX,qword ptr [RBX]
0527adb7  MOV RCX,qword ptr [RBX + 0x28]
0527adbb  MOVSX R8D,word ptr [RCX + 0xa8]
0527adc3  MOVSX R10D,word ptr [RCX + 0xac]
0527adcb  MOV RAX,qword ptr [RAX + 0x1e0]
0527add2  SUB RSP,0x8
0527add6  LEA RDI,[RSP + 0x38]
0527addb  LEA RCX,[RSP + 0x1c0]
0527ade3  MOV RSI,RBX
0527ade6  MOV RDX,qword ptr [RSP + 0x20]
0527adeb  MOV R9D,0x140
0527adf1  PUSH R10
0527adf3  CALL RAX
0527adf5  ADD RSP,0x10
0527adf9  MOV RAX,qword ptr [R13]
0527adfd  LEA RDX,[RSP + 0x1f0]
0527ae05  MOV RDI,R13
0527ae08  MOV RSI,R15
0527ae0b  CALL qword ptr [RAX + 0x20]
0527ae0e  MOV qword ptr [RSP + 0x28],R14
0527ae13  MOV qword ptr [RSP + 0x8],RBX
0527ae18  LEA RDI,[0xf5463b0]
0527ae1f  MOV RAX,qword ptr [0x0f5463b0]
0527ae26  MOV ESI,0x18
0527ae2b  CALL qword ptr [RAX + 0x10]
0527ae2e  MOV R14,RAX
0527ae31  TEST RAX,RAX
0527ae34  JZ 0x0527c0a8
0527ae3a  PXOR XMM0,XMM0
0527ae3e  MOVDQU xmmword ptr [R14],XMM0
0527ae43  MOV qword ptr [R14 + 0x10],0x0
0527ae4b  LEA RDI,[0xf5463b0]
0527ae52  MOV RAX,qword ptr [0x0f5463b0]
0527ae59  MOV ESI,0x200
0527ae5e  CALL qword ptr [RAX + 0x10]
0527ae61  MOV R12,RAX
0527ae64  TEST RAX,RAX
0527ae67  JZ 0x0527c0b9
0527ae6d  MOV qword ptr [R14],R12
0527ae70  MOV RBX,R12
0527ae73  ADD RBX,0x200
0527ae7a  MOV qword ptr [R14 + 0x10],RBX
0527ae7e  MOV EDX,0x200
0527ae83  MOV RDI,R12
0527ae86  XOR ESI,ESI
0527ae88  CALL 0x0eee2dd0
0527ae8d  MOV qword ptr [R14 + 0x8],RBX
0527ae91  MOV qword ptr [RSP + 0x128],R14
0527ae99  MOV R8,qword ptr [RSP + 0x30]
0527ae9e  LEA RAX,[0xef9fb50]
0527aea5  MOV qword ptr [RSP + 0x250],RAX
0527aead  MOV qword ptr [RSP + 0x258],R15
0527aeb5  LEA R12,[RSP + 0x250]
0527aebd  MOV qword ptr [RSP + 0x270],R12
0527aec5  MOV RDI,qword ptr [RSP + 0x8]
0527aeca  MOV RAX,qword ptr [RDI]
0527aecd  MOV RAX,qword ptr [RAX + 0x200]
0527aed4  LEA RSI,[RSP + 0xa8]
0527aedc  LEA RCX,[RSP + 0x1f0]
0527aee4  MOV RDX,qword ptr [RSP + 0x18]
0527aee9  MOV R9,R12
0527aeec  PUSH R14
0527aeee  PUSH 0x1
0527aef0  CALL RAX
0527aef2  ADD RSP,0x10
0527aef6  MOV RDI,qword ptr [RSP + 0x270]
0527aefe  CMP RDI,R12
0527af01  JZ 0x0527af0f
0527af03  MOV EAX,0x28
0527af08  TEST RDI,RDI
0527af0b  JNZ 0x0527af14
0527af0d  JMP 0x0527af1a
0527af0f  MOV EAX,0x20
0527af14  MOV RCX,qword ptr [RDI]
0527af17  CALL qword ptr [RCX + RAX*0x1]
0527af1a  MOV qword ptr [RSP + 0x128],0x0
0527af26  MOV R12,qword ptr [R15 + 0xfd0]
0527af2d  MOV qword ptr [R15 + 0xfd0],R14
0527af34  TEST R12,R12
0527af37  JZ 0x0527af61
0527af39  MOV RDI,qword ptr [R12]
0527af3d  TEST RDI,RDI
0527af40  JZ 0x0527af54
0527af42  MOV qword ptr [R12 + 0x8],RDI
0527af47  MOV RSI,qword ptr [R12 + 0x10]
0527af4c  SUB RSI,RDI
0527af4f  CALL 0x0412a280
0527af54  MOV ESI,0x18
0527af59  MOV RDI,R12
0527af5c  CALL 0x0412a280
0527af61  MOV qword ptr [RSP + 0x58],RBP
0527af66  MOV qword ptr [RSP + 0x50],R13
0527af6b  MOV qword ptr [RSP + 0x10],R15
0527af70  LEA RDI,[0xf6ff9e0]
0527af77  LEA RSI,[0xf713fc8]
0527af7e  MOV EDX,0x1
0527af83  CALL 0x0cc41df0
0527af88  MOV R14,RAX
0527af8b  MOVQ XMM0,RAX
0527af90  PSHUFD XMM0,XMM0,0x44
0527af95  XOR EBX,EBX
0527af97  MOV R15,qword ptr [RSP + 0x10]
0527af9c  MOV R12,qword ptr [RSP + 0x28]
0527afa1  MOVDQA xmmword ptr [RSP + 0x40],XMM0
0527afa7  JMP 0x0527afbb
0527afb0  INC EBX
0527afb2  CMP EBX,0x10
0527afb5  JZ 0x0527b0d7
0527afbb  XOR EBP,EBP
0527afbd  JMP 0x0527afc7
0527afc0  INC EBP
0527afc2  CMP EBP,0x10
0527afc5  JZ 0x0527afb0
0527afc7  MOV RAX,qword ptr [R12]
0527afcb  MOV RDI,R12
0527afce  MOV ESI,0x4
0527afd3  CALL qword ptr [RAX + 0x18]
0527afd6  ADD EAX,0x2
0527afd9  MOVDQA XMM0,xmmword ptr [RSP + 0x40]
0527afdf  JZ 0x0527afc0
0527afe1  MOV ECX,dword ptr [RSP + 0xc0]
0527afe8  IMUL ECX,EBX
0527afeb  ADD ECX,EBP
0527afed  MOV EDI,dword ptr [RSP + 0xbc]
0527aff4  MOV RDX,qword ptr [RSP + 0xa8]
0527affc  MOV ESI,EAX
0527affe  CMP EAX,0xe
0527b001  JNC 0x0527b080
0527b003  XOR EAX,EAX
0527b005  MOV R9,RSI
0527b008  MOV R8,RAX
0527b00b  AND R9,0x3
0527b00f  JZ 0x0527b030
0527b011  MOV R10D,ECX
0527b014  IMUL R10D,EDI
0527b018  MOV R8,RAX
0527b01b  NOP dword ptr [RAX + RAX*0x1]
0527b020  LEA R11D,[R10 + R8*0x1]
0527b024  MOV qword ptr [RDX + R11*0x8],R14
0527b028  INC R8
0527b02b  DEC R9
0527b02e  JNZ 0x0527b020
0527b030  SUB RAX,RSI
0527b033  CMP RAX,-0x4
0527b037  JA 0x0527afc0
0527b039  IMUL ECX,EDI
0527b03c  NOP dword ptr [RAX]
0527b040  LEA EAX,[RCX + R8*0x1]
0527b044  MOV qword ptr [RDX + RAX*0x8],R14
0527b048  LEA EAX,[RCX + R8*0x1]
0527b04c  INC EAX
0527b04e  MOV qword ptr [RDX + RAX*0x8],R14
0527b052  LEA EAX,[RCX + R8*0x1 + 0x2]
0527b057  MOV qword ptr [RDX + RAX*0x8],R14
0527b05b  LEA EAX,[RCX + R8*0x1]
0527b05f  ADD EAX,0x3
0527b062  MOV qword ptr [RDX + RAX*0x8],R14
0527b066  ADD R8,0x4
0527b06a  CMP RSI,R8
0527b06d  JNZ 0x0527b040
0527b06f  JMP 0x0527afc0
0527b080  MOV R8D,ECX
0527b083  IMUL R8D,EDI
0527b087  LEA RAX,[RSI + -0x1]
0527b08b  MOV R9D,EAX
0527b08e  ADD R9D,R8D
0527b091  JC 0x0527b003
0527b097  SHR RAX,0x20
0527b09b  MOV EAX,0x0
0527b0a0  JNZ 0x0527b005
0527b0a6  MOV EAX,ESI
0527b0a8  AND EAX,0xfffffffc
0527b0ab  MOV R9,RAX
0527b0ae  NOP
0527b0b0  MOV R10D,R8D
0527b0b3  MOVDQU xmmword ptr [RDX + R10*0x8],XMM0
0527b0b9  MOVDQU xmmword ptr [RDX + R10*0x8 + 0x10],XMM0
0527b0c0  ADD R8D,0x4
0527b0c4  ADD R9,-0x4
0527b0c8  JNZ 0x0527b0b0
0527b0ca  CMP EAX,ESI
0527b0cc  JZ 0x0527afc0
0527b0d2  JMP 0x0527b005
0527b0d7  MOV RDI,qword ptr [R15 + 0x28]
0527b0db  MOV RAX,qword ptr [RDI]
0527b0de  CALL qword ptr [RAX + 0x568]
0527b0e4  LEA R14,[RAX + 0x50]
0527b0e8  CMP byte ptr [RAX + 0x77],0x0
0527b0ec  JNZ 0x0527b117
0527b0ee  MOV R12,RAX
0527b0f1  ADD R12,0x70
0527b0f5  CMP byte ptr [RAX + 0x68],0x0
0527b0f9  JNZ 0x0527b106
0527b0fb  TEST byte ptr [RAX + 0x56],0x1
0527b0ff  JNZ 0x0527b106
0527b101  MOV R14,R12
0527b104  JMP 0x0527b117
0527b106  MOV RDI,R12
0527b109  MOV RSI,R14
0527b10c  CALL 0x04fa7a10
0527b111  TEST AL,AL
0527b113  CMOVNZ R14,R12
0527b117  MOVZX EAX,byte ptr [R14 + 0x6]
0527b11c  OR AL,byte ptr [R14 + 0x18]
0527b120  LEA RCX,[0xf72b850]
0527b127  TEST AL,0x1
0527b129  CMOVZ R14,RCX
0527b12d  CMP byte ptr [0x0f5a2858],0x0
0527b134  JNZ 0x0527b141
0527b136  CMP byte ptr [R14 + 0x18],0x0
0527b13b  JZ 0x0527b437
0527b141  XOR R12D,R12D
0527b144  MOV RDI,qword ptr [RSP + 0x8]
0527b149  MOV RAX,qword ptr [RDI + 0x28]
0527b14d  MOVSX R14D,word ptr [RAX + 0xa8]
0527b155  MOV EBP,dword ptr [RAX + 0xa8]
0527b15b  MOVZX EBX,word ptr [RAX + 0xac]
0527b162  MOV RAX,qword ptr [RDI]
0527b165  CALL qword ptr [RAX + 0x1f8]
0527b16b  SUB EBX,R14D
0527b16e  MOV ECX,R12D
0527b171  XOR CL,0x1
0527b174  MOVZX ECX,CL
0527b177  MOV RAX,qword ptr [RAX]
0527b17a  MOV RDX,qword ptr [RSP + 0x28]
0527b17f  MOV qword ptr [RSP + 0x180],RDX
0527b187  MOV qword ptr [RSP + 0x188],RAX
0527b18f  MOV dword ptr [RSP + 0x190],ECX
0527b196  MOV word ptr [RSP + 0x194],BX
0527b19e  MOV byte ptr [RSP + 0x196],R12B
0527b1a6  LEA R13,[RSP + 0x250]
0527b1ae  MOV RDI,R13
0527b1b1  MOV RSI,qword ptr [RSP + 0x10]
0527b1b6  CALL 0x0c855c80
0527b1bb  MOV dword ptr [RSP + 0x64],R14D
0527b1c0  MOVZX EAX,byte ptr [RSP + 0x368]
0527b1c8  MOV byte ptr [RSP + 0x38],AL
0527b1cc  TEST AL,AL
0527b1ce  JZ 0x0527b2c1
0527b1d4  MOV RAX,qword ptr [RSP + 0x18]
0527b1d9  MOV RBX,qword ptr [RAX]
0527b1dc  MOV RDI,qword ptr [RSP + 0x8]
0527b1e1  MOV RAX,qword ptr [RDI]
0527b1e4  CALL qword ptr [RAX + 0x1f0]
0527b1ea  MOV R12,RAX
0527b1ed  MOV R14,qword ptr [RSP + 0x58]
0527b1f2  ADD R14,0x1000
0527b1f9  MOV EDX,0x400
0527b1fe  MOV RDI,R14
0527b201  XOR ESI,ESI
0527b203  CALL 0x0eee2dd0
0527b208  MOV EAX,dword ptr [R12]
0527b20c  TEST RAX,RAX
0527b20f  JZ 0x0527b2b0
0527b215  MOV ECX,EBX
0527b217  SHL ECX,0x4
0527b21a  SHR RBX,0x1c
0527b21e  CVTSI2SS XMM0,ECX
0527b222  MOVSS dword ptr [RSP + 0x20],XMM0
0527b228  AND EBX,0xfffffff0
0527b22b  XORPS XMM0,XMM0
0527b22e  CVTSI2SS XMM0,EBX
0527b232  MOVSS dword ptr [RSP + 0x4],XMM0
0527b238  IMUL R15,RAX,0x80c
0527b23f  MOVSS XMM0,dword ptr [0x011983f0]
0527b247  XOR EBX,EBX
0527b249  NOP dword ptr [RAX]
0527b250  MOV RDI,qword ptr [R12 + 0x8]
0527b255  ADD RDI,RBX
0527b258  MOVAPS XMM2,XMM0
0527b25b  MULSS XMM2,dword ptr [0x01198a50]
0527b263  MOVSS XMM4,dword ptr [0x01198b7c]
0527b26b  MOVSS dword ptr [RSP + 0x40],XMM0
0527b271  DIVSS XMM4,XMM0
0527b275  MOV RSI,R14
0527b278  MOVSS XMM0,dword ptr [RSP + 0x20]
0527b27e  MOVSS XMM1,dword ptr [RSP + 0x4]
0527b284  MOV EDX,0x10
0527b289  MOV ECX,0x10
0527b28e  MOVAPS XMM3,XMM2
0527b291  CALL 0x0d2ebd50
0527b296  MOVSS XMM0,dword ptr [RSP + 0x40]
0527b29c  MULSS XMM0,dword ptr [0x011986e0]
0527b2a4  ADD RBX,0x80c
0527b2ab  CMP R15,RBX
0527b2ae  JNZ 0x0527b250
0527b2b0  XOR R8D,R8D
0527b2b3  TEST byte ptr [RSP + 0x368],0x1
0527b2bb  CMOVNZ R8,R14
0527b2bf  JMP 0x0527b2d0
0527b2c1  MOV R14,qword ptr [RSP + 0x58]
0527b2c6  ADD R14,0x1000
0527b2cd  XOR R8D,R8D
0527b2d0  MOV R12,qword ptr [RSP + 0x8]
0527b2d5  SUB RSP,0x8
0527b2d9  LEA RSI,[RSP + 0xb0]
0527b2e1  LEA RDX,[RSP + 0x1c0]
0527b2e9  LEA R9,[RSP + 0x188]
0527b2f1  MOV RDI,qword ptr [RSP + 0x18]
0527b2f6  MOV ECX,EBP
0527b2f8  PUSH R13
0527b2fa  MOV RBX,RDI
0527b2fd  CALL 0x0c856760
0527b302  ADD RSP,0x10
0527b306  MOV RDI,qword ptr [RBX + 0x28]
0527b30a  MOV RAX,qword ptr [RDI]
0527b30d  CALL qword ptr [RAX + 0xbe8]
0527b313  TEST AL,AL
0527b315  JZ 0x0527bb82
0527b31b  LEA RBP,[RSP + 0x140]
0527b323  MOV qword ptr [RSP + 0x130],RBP
0527b32b  MOV RAX,0x600000000
0527b335  MOV qword ptr [RSP + 0x138],RAX
0527b33d  LEA RDI,[RBX + 0x120]
0527b344  LEA RSI,[RSP + 0x130]
0527b34c  CALL 0x0cafcfe0
0527b351  MOV RSI,qword ptr [RSP + 0x130]
0527b359  MOV EAX,dword ptr [RSP + 0x138]
0527b360  TEST RAX,RAX
0527b363  JZ 0x0527b46d
0527b369  LEA R15,[RSI + RAX*0x8]
0527b36d  LEA R13,[0xf5570f0]
0527b374  JMP 0x0527b38d
0527b380  ADD RSI,0x8
0527b384  CMP RSI,R15
0527b387  JZ 0x0527b414
0527b38d  MOV RBX,qword ptr [RSI]
0527b390  MOVZX EAX,byte ptr [0x0f5570f0]
0527b397  TEST AL,AL
0527b399  JZ 0x0527b3e1
0527b39b  MOV RAX,qword ptr [RBX + 0x170]
0527b3a2  MOV RCX,qword ptr [RBX + 0x178]
0527b3a9  CMP RAX,RCX
0527b3ac  MOV R12,qword ptr [RSP + 0x8]
0527b3b1  JZ 0x0527b380
0527b3b3  MOVZX EDX,word ptr [0x0f5570e8]
0527b3ba  NOP word ptr [RAX + RAX*0x1]
0527b3c0  CMP word ptr [RAX],DX
0527b3c3  JZ 0x0527b3d0
0527b3c5  ADD RAX,0x10
0527b3c9  CMP RAX,RCX
0527b3cc  JNZ 0x0527b3c0
0527b3ce  JMP 0x0527b380
0527b3d0  MOV RAX,qword ptr [RAX + 0x8]
0527b3d4  TEST RAX,RAX
0527b3d7  JZ 0x0527b380
0527b3d9  CMP byte ptr [RAX + 0x48],0x0
0527b3dd  JZ 0x0527b380
0527b3df  JMP 0x0527b417
0527b3e1  MOV RDI,R13
0527b3e4  MOV R12,RSI
0527b3e7  CALL 0x04108328
0527b3ec  MOV RSI,R12
0527b3ef  TEST EAX,EAX
0527b3f1  JZ 0x0527b39b
0527b3f3  MOV AX,0x1
0527b3f7  XADD.LOCK word ptr [0x0f556458],AX
0527b400  MOV word ptr [0x0f5570e8],AX
0527b407  MOV RDI,R13
0527b40a  CALL 0x0410844d
0527b40f  MOV RSI,R12
0527b412  JMP 0x0527b39b
0527b414  MOV RSI,R15
0527b417  MOV RCX,RSI
0527b41a  MOV RSI,qword ptr [RSP + 0x130]
0527b422  MOV EAX,dword ptr [RSP + 0x138]
0527b429  LEA RAX,[RSI + RAX*0x8]
0527b42d  CMP RCX,RAX
0527b430  JNZ 0x0527b47f
0527b432  JMP 0x0527bb61
0527b437  MOV R12B,0x1
0527b43a  TEST byte ptr [0x0f5a2846],0x1
0527b441  JZ 0x0527b144
0527b447  CMP byte ptr [R14 + 0x7],0x0
0527b44c  JNZ 0x0527b144
0527b452  LEA RSI,[0xf5a2840]
0527b459  MOV RDI,R14
0527b45c  CALL 0x04fa7a10
0527b461  MOV R12D,EAX
0527b464  XOR R12B,0x1
0527b468  JMP 0x0527b144
0527b46d  XOR EAX,EAX
0527b46f  MOV RCX,RSI
0527b472  LEA RAX,[RSI + RAX*0x8]
0527b476  CMP RCX,RAX
0527b479  JZ 0x0527bb61
0527b47f  CMP byte ptr [RSP + 0x38],0x0
0527b484  JNZ 0x0527b55f
0527b48a  MOV RAX,qword ptr [RSP + 0x18]
0527b48f  MOV RBX,qword ptr [RAX]
0527b492  MOV RAX,qword ptr [R12]
0527b496  MOV RDI,R12
0527b499  CALL qword ptr [RAX + 0x1f0]
0527b49f  MOV R13,RAX
0527b4a2  MOV EDX,0x400
0527b4a7  MOV RDI,R14
0527b4aa  XOR ESI,ESI
0527b4ac  CALL 0x0eee2dd0
0527b4b1  MOV EAX,dword ptr [R13]
0527b4b5  TEST RAX,RAX
0527b4b8  JZ 0x0527b55f
0527b4be  MOV ECX,EBX
0527b4c0  SHL ECX,0x4
0527b4c3  SHR RBX,0x1c
0527b4c7  CVTSI2SS XMM0,ECX
0527b4cb  MOVSS dword ptr [RSP + 0x20],XMM0
0527b4d1  AND EBX,0xfffffff0
0527b4d4  XORPS XMM0,XMM0
0527b4d7  CVTSI2SS XMM0,EBX
0527b4db  MOVSS dword ptr [RSP + 0x4],XMM0
0527b4e1  IMUL RBX,RAX,0x80c
0527b4e8  MOVSS XMM0,dword ptr [0x011983f0]
0527b4f0  XOR R15D,R15D
0527b4f3  NOP dword ptr CS:[RAX + RAX*0x1]
0527b500  MOV RDI,qword ptr [R13 + 0x8]
0527b504  ADD RDI,R15
0527b507  MOVAPS XMM2,XMM0
0527b50a  MULSS XMM2,dword ptr [0x01198a50]
0527b512  MOVSS XMM4,dword ptr [0x01198b7c]
0527b51a  MOVSS dword ptr [RSP + 0x40],XMM0
0527b520  DIVSS XMM4,XMM0
0527b524  MOV RSI,R14
0527b527  MOVD XMM0,dword ptr [RSP + 0x20]
0527b52d  MOVSS XMM1,dword ptr [RSP + 0x4]
0527b533  MOV EDX,0x10
0527b538  MOV ECX,0x10
0527b53d  MOVAPS XMM3,XMM2
0527b540  CALL 0x0d2ebd50
0527b545  MOVSS XMM0,dword ptr [RSP + 0x40]
0527b54b  MULSS XMM0,dword ptr [0x011986e0]
0527b553  ADD R15,0x80c
0527b55a  CMP RBX,R15
0527b55d  JNZ 0x0527b500
0527b55f  LEA R15,[RSP + 0x78]
0527b564  XOR R13D,R13D
0527b567  XOR EBP,EBP
0527b569  MOV R12,qword ptr [RSP + 0x10]
0527b56e  JMP 0x0527b57d
0527b570  INC R13
0527b573  CMP R13,0x10
0527b577  JZ 0x0527bb4c
0527b57d  XOR EBX,EBX
0527b57f  JMP 0x0527b599
0527b590  INC RBX
0527b593  CMP RBX,0x10
0527b597  JZ 0x0527b570
0527b599  MOV qword ptr [RSP + 0x68],R15
0527b59e  MOV RAX,0x200000000
0527b5a8  MOV qword ptr [RSP + 0x70],RAX
0527b5ad  MOV byte ptr [RSP + 0xd0],R13B
0527b5b5  MOV byte ptr [RSP + 0xd1],BL
0527b5bc  MOV word ptr [RSP + 0xd2],0x0
0527b5c6  MOV RDI,R12
0527b5c9  LEA RSI,[RSP + 0xd0]
0527b5d1  CALL 0x0caf8020
0527b5d6  MOV R14,RAX
0527b5d9  MOV ESI,dword ptr [R12 + 0x38]
0527b5de  ADD ESI,R13D
0527b5e1  MOVSX EAX,BP
0527b5e4  ADD EAX,dword ptr [R12 + 0x3c]
0527b5e9  MOV ECX,dword ptr [R12 + 0x40]
0527b5ee  ADD ECX,EBX
0527b5f0  MOV RDX,RAX
0527b5f3  SHL RDX,0x20
0527b5f7  ADD RDX,RSI
0527b5fa  MOV qword ptr [RSP + 0x170],RDX
0527b602  MOV dword ptr [RSP + 0x178],ECX
0527b609  MOV EBP,dword ptr [RSP + 0x64]
0527b60d  SUB EAX,EBP
0527b60f  MOV dword ptr [RSP + 0x174],EAX
0527b616  SAR ESI,0x2
0527b619  SAR ECX,0x2
0527b61c  SHL RCX,0x20
0527b620  OR RSI,RCX
0527b623  MOV RAX,qword ptr [RSP + 0x1b8]
0527b62b  LEA RDI,[RSP + 0x1b8]
0527b633  CALL qword ptr [RAX + 0x10]
0527b636  TEST EAX,0x10000
0527b63b  JNZ 0x0527b650
0527b63d  MOV RAX,qword ptr [RSP + 0x8]
0527b642  MOV RAX,qword ptr [RAX + 0x28]
0527b646  MOVZX ECX,word ptr [RAX + 0xa8]
0527b64d  JMP 0x0527b679
0527b650  ADD EAX,-0x8
0527b653  MOV RCX,qword ptr [RSP + 0x8]
0527b658  MOV RDX,qword ptr [RCX + 0x28]
0527b65c  MOVZX ECX,word ptr [RDX + 0xa8]
0527b663  CMP AX,CX
0527b666  JL 0x0527b679
0527b668  MOVZX ECX,word ptr [RDX + 0xaa]
0527b66f  DEC ECX
0527b671  CMP CX,AX
0527b674  CMOVL EAX,ECX
0527b677  MOV ECX,EAX
0527b679  MOVSX EAX,CX
0527b67c  XOR R15D,R15D
0527b67f  SUB EAX,EBP
0527b681  MOV dword ptr [RSP + 0x40],EAX
0527b685  MOV qword ptr [RSP + 0x20],RBX
0527b68a  JS 0x0527b9e0
0527b690  MOV dword ptr [RSP + 0x4],0x0
0527b698  XOR EBP,EBP
0527b69a  JMP 0x0527b6c2
0527b6a0  MOV R13D,R15D
0527b6a3  INC EBP
0527b6a5  MOVSX EAX,BP
0527b6a8  MOV R15D,R13D
0527b6ab  CMP dword ptr [RSP + 0x40],EAX
0527b6af  MOV R12,qword ptr [RSP + 0x10]
0527b6b4  MOV R13,RBX
0527b6b7  MOV RBX,qword ptr [RSP + 0x20]
0527b6bc  JL 0x0527b9e2
0527b6c2  MOV byte ptr [RSP + 0xd0],R13B
0527b6ca  MOV byte ptr [RSP + 0xd1],BL
0527b6d1  MOV word ptr [RSP + 0xd2],BP
0527b6d9  MOV RDI,R12
0527b6dc  LEA RSI,[RSP + 0xd0]
0527b6e4  CALL 0x0caf8020
0527b6e9  MOV RBX,R13
0527b6ec  MOVZX EAX,word ptr [RAX + 0x168]
0527b6f3  MOVZX ECX,word ptr [R14 + 0x168]
0527b6fb  CMP AX,CX
0527b6fe  MOVSX R13D,BP
0527b702  CMOVZ R15D,R13D
0527b706  CMP dword ptr [RSP + 0x40],R13D
0527b70b  JZ 0x0527b712
0527b70d  CMP AX,CX
0527b710  JZ 0x0527b6a0
0527b712  MOVZX EAX,byte ptr [0x0f5570f0]
0527b719  TEST AL,AL
0527b71b  JZ 0x0527b989
0527b721  MOV RAX,qword ptr [R14 + 0x170]
0527b728  MOV RCX,qword ptr [R14 + 0x178]
0527b72f  CMP RAX,RCX
0527b732  JZ 0x0527b7a0
0527b734  MOVZX EDX,word ptr [0x0f5570e8]
0527b73b  NOP dword ptr [RAX + RAX*0x1]
0527b740  CMP word ptr [RAX],DX
0527b743  JZ 0x0527b750
0527b745  ADD RAX,0x10
0527b749  CMP RAX,RCX
0527b74c  JNZ 0x0527b740
0527b74e  JMP 0x0527b7a0
0527b750  MOV R12,qword ptr [RAX + 0x8]
0527b754  TEST R12,R12
0527b757  JZ 0x0527b7a0
0527b759  CMP byte ptr [R12 + 0x48],0x1
0527b75f  JNZ 0x0527b7a0
0527b761  ADD R12,0x28
0527b765  MOV EAX,dword ptr [RSP + 0x70]
0527b769  LEA RDX,[RAX + RAX*0x2]
0527b76d  LEA RCX,[RDX*0x8]
0527b775  ADD RCX,qword ptr [RSP + 0x68]
0527b77a  CMP EAX,dword ptr [RSP + 0x74]
0527b77e  JZ 0x0527b7da
0527b780  MOV qword ptr [RCX],R14
0527b783  MOV qword ptr [RCX + 0x8],R12
0527b787  SHL R15,0x20
0527b78b  MOV EAX,dword ptr [RSP + 0x4]
0527b78f  OR RAX,R15
0527b792  MOV qword ptr [RCX + 0x10],RAX
0527b796  MOV EAX,dword ptr [RSP + 0x70]
0527b79a  INC EAX
0527b79c  MOV dword ptr [RSP + 0x70],EAX
0527b7a0  MOV byte ptr [RSP + 0xd0],BL
0527b7a7  MOV RAX,qword ptr [RSP + 0x20]
0527b7ac  MOV byte ptr [RSP + 0xd1],AL
0527b7b3  MOV word ptr [RSP + 0xd2],BP
0527b7bb  MOV RDI,qword ptr [RSP + 0x10]
0527b7c0  LEA RSI,[RSP + 0xd0]
0527b7c8  CALL 0x0caf8020
0527b7cd  MOV R14,RAX
0527b7d0  MOV dword ptr [RSP + 0x4],R13D
0527b7d5  JMP 0x0527b6a3
0527b7da  MOV qword ptr [RSP + 0x120],RDX
0527b7e2  MOV qword ptr [RSP + 0x1a8],RCX
0527b7ea  CMP EAX,-0x1
0527b7ed  JZ 0x0527c0ca
0527b7f3  LEA EDX,[RAX + 0x1]
0527b7f6  CVTSI2SS XMM0,RAX
0527b7fb  MOVAPS XMM1,XMM0
0527b7fe  MOVSS XMM2,dword ptr [0x0119858c]
0527b806  DIVSS XMM1,XMM2
0527b80a  CVTTSS2SI RCX,XMM1
0527b80f  MULSS XMM0,XMM2
0527b813  CVTTSS2SI RSI,XMM0
0527b818  CMP EDX,ESI
0527b81a  MOV dword ptr [RSP + 0x60],EDX
0527b81e  CMOVA ESI,EDX
0527b821  ADD ECX,EAX
0527b823  JC 0x0527b9c2
0527b829  MOV qword ptr [RSP + 0x1a0],RSI
0527b831  MOV EAX,ESI
0527b833  SHL RAX,0x3
0527b837  LEA RSI,[RAX + RAX*0x2]
0527b83b  MOV RAX,qword ptr [0x0f5463b0]
0527b842  LEA RDI,[0xf5463b0]
0527b849  MOV qword ptr [RSP + 0x198],RSI
0527b851  CALL qword ptr [RAX + 0x10]
0527b854  MOV qword ptr [RSP + 0x38],RAX
0527b859  CMP qword ptr [RSP + 0x38],0x0
0527b85f  JZ 0x0527b9cc
0527b865  MOV RCX,qword ptr [RSP + 0x120]
0527b86d  MOV RDX,qword ptr [RSP + 0x38]
0527b872  MOV qword ptr [RDX + RCX*0x8],R14
0527b876  MOV qword ptr [RDX + RCX*0x8 + 0x8],R12
0527b87b  SHL R15,0x20
0527b87f  MOV EAX,dword ptr [RSP + 0x4]
0527b883  OR RAX,R15
0527b886  MOV qword ptr [RDX + RCX*0x8 + 0x10],RAX
0527b88b  MOV R14,qword ptr [RSP + 0x68]
0527b890  MOV ECX,dword ptr [RSP + 0x70]
0527b894  LEA RAX,[RCX + RCX*0x2]
0527b898  LEA RAX,[R14 + RAX*0x8]
0527b89c  MOV RSI,qword ptr [RSP + 0x1a8]
0527b8a4  CMP RSI,RAX
0527b8a7  MOV R12,RDX
0527b8aa  JZ 0x0527b916
0527b8ac  CMP R14,RSI
0527b8af  LEA R15,[RSP + 0x78]
0527b8b4  JZ 0x0527b8db
0527b8b6  MOV RCX,R12
0527b8b9  MOV RDX,R14
0527b8bc  NOP dword ptr [RAX]
0527b8c0  MOV RDI,qword ptr [RDX + 0x10]
0527b8c4  MOV qword ptr [RCX + 0x10],RDI
0527b8c8  MOVUPS XMM0,xmmword ptr [RDX]
0527b8cb  MOVUPS xmmword ptr [RCX],XMM0
0527b8ce  ADD RCX,0x18
0527b8d2  ADD RDX,0x18
0527b8d6  CMP RDX,RSI
0527b8d9  JNZ 0x0527b8c0
0527b8db  MOV RCX,qword ptr [RSP + 0x120]
0527b8e3  LEA RDI,[R12 + RCX*0x8]
0527b8e7  ADD RDI,0x18
0527b8eb  SUB RAX,RSI
0527b8ee  ADD RAX,-0x18
0527b8f2  MOV RCX,-0x5555555555555555
0527b8fc  MUL RCX
0527b8ff  SHR RDX,0x4
0527b903  LEA RAX,[RDX + RDX*0x2]
0527b907  LEA RDX,[0x18 + RAX*0x8]
0527b90f  CALL 0x0eee2f00
0527b914  JMP 0x0527b94b
0527b916  TEST RCX,RCX
0527b919  LEA R15,[RSP + 0x78]
0527b91e  JZ 0x0527b94b
0527b920  MOV RAX,R12
0527b923  MOV RCX,R14
0527b926  NOP word ptr CS:[RAX + RAX*0x1]
0527b930  MOV RDX,qword ptr [RCX + 0x10]
0527b934  MOV qword ptr [RAX + 0x10],RDX
0527b938  MOVUPS XMM0,xmmword ptr [RCX]
0527b93b  MOVUPS xmmword ptr [RAX],XMM0
0527b93e  ADD RAX,0x18
0527b942  ADD RCX,0x18
0527b946  CMP RCX,RSI
0527b949  JNZ 0x0527b930
0527b94b  CMP R15,R14
0527b94e  SETZ AL
0527b951  TEST R14,R14
0527b954  SETZ CL
0527b957  OR CL,AL
0527b959  JNZ 0x0527b96f
0527b95b  MOV RAX,qword ptr [0x0f5463b0]
0527b962  LEA RDI,[0xf5463b0]
0527b969  MOV RSI,R14
0527b96c  CALL qword ptr [RAX + 0x18]
0527b96f  MOV qword ptr [RSP + 0x68],R12
0527b974  MOV RAX,qword ptr [RSP + 0x1a0]
0527b97c  MOV dword ptr [RSP + 0x74],EAX
0527b980  MOV EAX,dword ptr [RSP + 0x60]
0527b984  JMP 0x0527b79c
0527b989  LEA RDI,[0xf5570f0]
0527b990  CALL 0x04108328
0527b995  TEST EAX,EAX
0527b997  JZ 0x0527b721
0527b99d  MOV AX,0x1
0527b9a1  XADD.LOCK word ptr [0x0f556458],AX
0527b9aa  MOV word ptr [0x0f5570e8],AX
0527b9b1  LEA RDI,[0xf5570f0]
0527b9b8  CALL 0x0410844d
0527b9bd  JMP 0x0527b721
0527b9c2  MOV ESI,0xffffffff
0527b9c7  JMP 0x0527b829
0527b9cc  MOV RDI,qword ptr [RSP + 0x198]
0527b9d4  XOR ESI,ESI
0527b9d6  CALL 0x0eec74c0
0527b9db  JMP 0x0527b865
0527b9e0  XOR EBP,EBP
0527b9e2  MOV R14,qword ptr [RSP + 0x68]
0527b9e7  MOV EAX,dword ptr [RSP + 0x70]
0527b9eb  TEST RAX,RAX
0527b9ee  JZ 0x0527bb1a
0527b9f4  LEA RAX,[RAX + RAX*0x2]
0527b9f8  MOV R15,RBX
0527b9fb  LEA RBX,[R14 + RAX*0x8]
0527b9ff  SHL R15,0x4
0527ba03  ADD R15,R13
0527ba06  JMP 0x0527ba28
0527ba10  MOV EAX,0x20
0527ba15  MOV RCX,qword ptr [RDI]
0527ba18  CALL qword ptr [RCX + RAX*0x1]
0527ba1b  ADD R14,0x18
0527ba1f  CMP R14,RBX
0527ba22  JZ 0x0527bb10
0527ba28  MOV RSI,qword ptr [R14]
0527ba2b  MOV RDX,qword ptr [R14 + 0x8]
0527ba2f  LEA RDI,[RSP + 0xd0]
0527ba37  CALL 0x0c851900
0527ba3c  MOV RAX,qword ptr [RSP + 0x58]
0527ba41  MOVD XMM0,dword ptr [RAX + R15*0x4 + 0x1000]
0527ba4b  MOV RAX,qword ptr [R14 + 0x10]
0527ba4f  MOV RCX,qword ptr [R12 + 0xfd0]
0527ba57  MOVZX EDX,word ptr [R12 + 0x3c]
0527ba5d  MOV qword ptr [RSP + 0x218],RCX
0527ba65  MOV word ptr [RSP + 0x220],DX
0527ba6d  LEA RCX,[RSP + 0xa8]
0527ba75  MOV qword ptr [RSP + 0x228],RCX
0527ba7d  LEA RCX,[RSP + 0x170]
0527ba85  MOV qword ptr [RSP + 0x230],RCX
0527ba8d  MOVD dword ptr [RSP + 0x238],XMM0
0527ba96  MOV qword ptr [RSP + 0x23c],RAX
0527ba9e  LEA RAX,[RSP + 0x218]
0527baa6  MOV qword ptr [RSP + 0x248],RAX
0527baae  MOV RDI,qword ptr [RSP + 0xd8]
0527bab6  TEST RDI,RDI
0527bab9  JZ 0x0527bad9
0527babb  MOV RAX,qword ptr [RDI]
0527babe  LEA RSI,[RSP + 0x180]
0527bac6  LEA RDX,[RSP + 0xd0]
0527bace  LEA RCX,[RSP + 0x228]
0527bad6  CALL qword ptr [RAX + 0x28]
0527bad9  MOV RDI,qword ptr [RSP + 0x110]
0527bae1  LEA RAX,[RSP + 0xf0]
0527bae9  CMP RDI,RAX
0527baec  JZ 0x0527ba10
0527baf2  MOV EAX,0x28
0527baf7  TEST RDI,RDI
0527bafa  JNZ 0x0527ba15
0527bb00  JMP 0x0527ba1b
0527bb10  MOV R14,qword ptr [RSP + 0x68]
0527bb15  MOV RBX,qword ptr [RSP + 0x20]
0527bb1a  LEA R15,[RSP + 0x78]
0527bb1f  CMP R15,R14
0527bb22  SETZ AL
0527bb25  TEST R14,R14
0527bb28  SETZ CL
0527bb2b  OR CL,AL
0527bb2d  JNZ 0x0527b590
0527bb33  MOV RAX,qword ptr [0x0f5463b0]
0527bb3a  LEA RDI,[0xf5463b0]
0527bb41  MOV RSI,R14
0527bb44  CALL qword ptr [RAX + 0x18]
0527bb47  JMP 0x0527b590
0527bb4c  MOV RSI,qword ptr [RSP + 0x130]
0527bb54  MOV R12,qword ptr [RSP + 0x8]
0527bb59  LEA RBP,[RSP + 0x140]
0527bb61  CMP RBP,RSI
0527bb64  SETZ AL
0527bb67  TEST RSI,RSI
0527bb6a  SETZ CL
0527bb6d  OR CL,AL
0527bb6f  JNZ 0x0527bb82
0527bb71  LEA RDI,[0xf5463b0]
0527bb78  MOV RAX,qword ptr [0x0f5463b0]
0527bb7f  CALL qword ptr [RAX + 0x18]
0527bb82  MOV RBX,qword ptr [RSP + 0x350]
0527bb8a  TEST RBX,RBX
0527bb8d  JZ 0x0527bbfd
0527bb8f  MOV R14,qword ptr [RSP + 0x358]
0527bb97  MOV RDI,RBX
0527bb9a  CMP RBX,R14
0527bb9d  JNZ 0x0527bbc4
0527bb9f  JMP 0x0527bbe5
0527bbb0  MOV EAX,0x20
0527bbb5  MOV RCX,qword ptr [RDI]
0527bbb8  CALL qword ptr [RCX + RAX*0x1]
0527bbbb  ADD R14,-0x50
0527bbbf  CMP R14,RBX
0527bbc2  JZ 0x0527bbdd
0527bbc4  LEA RAX,[R14 + -0x30]
0527bbc8  MOV RDI,qword ptr [R14 + -0x10]
0527bbcc  CMP RAX,RDI
0527bbcf  JZ 0x0527bbb0
0527bbd1  MOV EAX,0x28
0527bbd6  TEST RDI,RDI
0527bbd9  JNZ 0x0527bbb5
0527bbdb  JMP 0x0527bbbb
0527bbdd  MOV RDI,qword ptr [RSP + 0x350]
0527bbe5  MOV qword ptr [RSP + 0x358],RBX
0527bbed  MOV RSI,qword ptr [RSP + 0x360]
0527bbf5  SUB RSI,RDI
0527bbf8  CALL 0x0412a280
0527bbfd  MOV RAX,qword ptr [RSP + 0x30]
0527bc02  MOV qword ptr [RSP + 0xd0],RAX
0527bc0a  LEA R13,[RSP + 0xe0]
0527bc12  MOV qword ptr [RSP + 0x100],R13
0527bc1a  LEA RAX,[0xef9fb50]
0527bc21  MOV qword ptr [RSP + 0xe0],RAX
0527bc29  MOV R14,qword ptr [RSP + 0x10]
0527bc2e  MOV qword ptr [RSP + 0xe8],R14
0527bc36  MOV qword ptr [RSP + 0x110],0x0
0527bc42  CMP byte ptr [R12 + 0x130],0x0
0527bc4b  JNZ 0x0527bf61
0527bc51  MOV RBX,qword ptr [R14 + 0x28]
0527bc55  MOV RDI,qword ptr [R14 + 0x30]
0527bc59  MOV RAX,qword ptr [RDI]
0527bc5c  CALL qword ptr [RAX + 0x18]
0527bc5f  LEA R12,[0xf3eb4b0]
0527bc66  MOV qword ptr [RSP + 0x250],R12
0527bc6e  LEA RCX,[RSP + 0xa8]
0527bc76  MOV qword ptr [RSP + 0x258],RCX
0527bc7e  MOV RCX,qword ptr [RSP + 0x50]
0527bc83  MOV qword ptr [RSP + 0x260],RCX
0527bc8b  MOV qword ptr [RSP + 0x268],RBX
0527bc93  MOV dword ptr [RSP + 0x270],EAX
0527bc9a  MOV RAX,qword ptr [RSP + 0xd0]
0527bca2  MOV RDI,qword ptr [RSP + 0x100]
0527bcaa  MOV qword ptr [RSP + 0x280],RAX
0527bcb2  LEA R15,[RSP + 0x290]
0527bcba  TEST RDI,RDI
0527bcbd  JZ 0x0527bccc
0527bcbf  CMP RDI,R13
0527bcc2  JZ 0x0527bcd8
0527bcc4  MOV RAX,qword ptr [RDI]
0527bcc7  CALL qword ptr [RAX + 0x10]
0527bcca  JMP 0x0527bcce
0527bccc  XOR EAX,EAX
0527bcce  MOV qword ptr [RSP + 0x2b0],RAX
0527bcd6  JMP 0x0527bce9
0527bcd8  MOV qword ptr [RSP + 0x2b0],R15
0527bce0  MOV RAX,qword ptr [RDI]
0527bce3  MOV RSI,R15
0527bce6  CALL qword ptr [RAX + 0x18]
0527bce9  MOV RAX,qword ptr [RSP + 0x110]
0527bcf1  MOV qword ptr [RSP + 0x2c0],RAX
0527bcf9  MOV RBX,qword ptr [RSP + 0x10]
0527bcfe  MOV RAX,qword ptr [RBX + 0x30]
0527bd02  XOR ECX,ECX
0527bd04  SUB CX,word ptr [RAX + 0xa8]
0527bd0b  MOV word ptr [RSP + 0x130],0x0
0527bd15  MOV word ptr [RSP + 0x132],CX
0527bd1d  LEA RSI,[RSP + 0x130]
0527bd25  MOV RDI,RBX
0527bd28  CALL 0x0caf8020
0527bd2d  MOV RDI,qword ptr [RSP + 0x8]
0527bd32  MOV R10,qword ptr [RDI]
0527bd35  LEA R14,[RSP + 0x250]
0527bd3d  MOV RSI,RAX
0527bd40  MOV RDX,RBX
0527bd43  MOV RCX,R14
0527bd46  MOV R8,qword ptr [RSP + 0x28]
0527bd4b  MOV R9,qword ptr [RSP + 0x18]
0527bd50  CALL qword ptr [R10 + 0x1b8]
0527bd57  MOV qword ptr [RSP + 0x250],R12
0527bd5f  MOV RDI,qword ptr [RSP + 0x2b0]
0527bd67  CMP RDI,R15
0527bd6a  MOV RBX,qword ptr [RSP + 0x1b0]
0527bd72  JZ 0x0527bd80
0527bd74  MOV EAX,0x28
0527bd79  TEST RDI,RDI
0527bd7c  JNZ 0x0527bd85
0527bd7e  JMP 0x0527bd8b
0527bd80  MOV EAX,0x20
0527bd85  MOV RCX,qword ptr [RDI]
0527bd88  CALL qword ptr [RCX + RAX*0x1]
0527bd8b  MOV RAX,qword ptr [RSP + 0x10]
0527bd90  MOV RDI,qword ptr [RAX + 0x28]
0527bd94  MOV RAX,qword ptr [RDI]
0527bd97  CALL qword ptr [RAX + 0x568]
0527bd9d  LEA R15,[RAX + 0x50]
0527bda1  CMP byte ptr [RAX + 0x77],0x0
0527bda5  JNZ 0x0527bdd0
0527bda7  MOV R12,RAX
0527bdaa  ADD R12,0x70
0527bdae  CMP byte ptr [RAX + 0x68],0x0
0527bdb2  JNZ 0x0527bdbf
0527bdb4  TEST byte ptr [RAX + 0x56],0x1
0527bdb8  JNZ 0x0527bdbf
0527bdba  MOV R15,R12
0527bdbd  JMP 0x0527bdd0
0527bdbf  MOV RDI,R12
0527bdc2  MOV RSI,R15
0527bdc5  CALL 0x04fa7a10
0527bdca  TEST AL,AL
0527bdcc  CMOVNZ R15,R12
0527bdd0  MOVZX EAX,byte ptr [R15 + 0x6]
0527bdd5  OR AL,byte ptr [R15 + 0x18]
0527bdd9  TEST AL,0x1
0527bddb  LEA R12,[0xf72b850]
0527bde2  CMOVNZ R12,R15
0527bde6  CMP byte ptr [0x0f5a2e08],0x0
0527bded  JNZ 0x0527bdf7
0527bdef  CMP byte ptr [R12 + 0x18],0x0
0527bdf5  JZ 0x0527be3c
0527bdf7  LEA R15,[0x158fc34]
0527bdfe  CMP byte ptr [0x0f5a2858],0x0
0527be05  JNZ 0x0527be67
0527be07  CMP byte ptr [R12 + 0x18],0x0
0527be0d  JNZ 0x0527be67
0527be0f  TEST byte ptr [0x0f5a2846],0x1
0527be16  JZ 0x0527be33
0527be18  CMP byte ptr [R12 + 0x7],0x0
0527be1e  JNZ 0x0527be33
0527be20  LEA RSI,[0xf5a2840]
0527be27  MOV RDI,R12
0527be2a  CALL 0x04fa7a10
0527be2f  TEST AL,AL
0527be31  JNZ 0x0527be67
0527be33  LEA R15,[0x158fc44]
0527be3a  JMP 0x0527be67
0527be3c  LEA R15,[0x158fc54]
0527be43  TEST byte ptr [0x0f5a2df6],0x1
0527be4a  JZ 0x0527be67
0527be4c  CMP byte ptr [R12 + 0x7],0x0
0527be52  JNZ 0x0527be67
0527be54  LEA RSI,[0xf5a2df0]
0527be5b  MOV RDI,R12
0527be5e  CALL 0x04fa7a10
0527be63  TEST AL,AL
0527be65  JNZ 0x0527bdf7
0527be67  MOV RBP,R12
0527be6a  MOV RAX,qword ptr [RSP + 0x10]
0527be6f  MOV RDI,qword ptr [RAX + 0x28]
0527be73  MOV RAX,qword ptr [RDI]
0527be76  CALL qword ptr [RAX + 0x2b0]
0527be7c  MOV R12,RAX
0527be7f  CMP byte ptr [0x0f5a2858],0x0
0527be86  JNZ 0x0527be92
0527be88  CMP byte ptr [RBP + 0x18],0x0
0527be8c  JZ 0x0527c075
0527be92  MOV RAX,qword ptr [RSP + 0x8]
0527be97  LEA RDI,[RAX + 0x1e0]
0527be9e  MOV qword ptr [RSP + 0x250],0x0
0527beaa  MOV qword ptr [RSP + 0x280],0x0
0527beb6  MOV qword ptr [RSP + 0x290],0x0
0527bec2  SUB RSP,0x8
0527bec6  LEA RSI,[RSP + 0xb0]
0527bece  MOV RDX,qword ptr [RSP + 0x20]
0527bed3  MOV RCX,qword ptr [RSP + 0x58]
0527bed8  MOV R8,R15
0527bedb  MOV R9,qword ptr [RSP + 0x30]
0527bee0  PUSH R12
0527bee2  PUSH R14
0527bee4  PUSH RBX
0527bee5  CALL 0x04a89150
0527beea  ADD RSP,0x20
0527beee  LEA RAX,[RSP + 0x260]
0527bef6  MOV RDI,qword ptr [RSP + 0x280]
0527befe  CMP RDI,RAX
0527bf01  JZ 0x0527bf0f
0527bf03  MOV EAX,0x28
0527bf08  TEST RDI,RDI
0527bf0b  JNZ 0x0527bf14
0527bf0d  JMP 0x0527bf1a
0527bf0f  MOV EAX,0x20
0527bf14  MOV RCX,qword ptr [RDI]
0527bf17  CALL qword ptr [RCX + RAX*0x1]
0527bf1a  MOV R10,qword ptr [RSP + 0x8]
0527bf1f  LEA RDI,[R10 + 0x1d0]
0527bf26  SUB RSP,0x8
0527bf2a  LEA RAX,[RSP + 0xd8]
0527bf32  LEA RSI,[RSP + 0xb0]
0527bf3a  MOV RDX,qword ptr [RSP + 0x20]
0527bf3f  MOV RCX,qword ptr [RSP + 0x58]
0527bf44  MOV R8,R15
0527bf47  MOV R9,qword ptr [RSP + 0x30]
0527bf4c  PUSH R12
0527bf4e  MOV R12,R10
0527bf51  PUSH RAX
0527bf52  PUSH RBX
0527bf53  CALL 0x04a89150
0527bf58  ADD RSP,0x20
0527bf5c  MOV R14,qword ptr [RSP + 0x10]
0527bf61  LEA RSI,[RSP + 0xa8]
0527bf69  MOV RDI,R14
0527bf6c  XOR EDX,EDX
0527bf6e  CALL 0x0cae2040
0527bf73  MOV RDI,R14
0527bf76  XOR ESI,ESI
0527bf78  CALL 0x0cafad60
0527bf7d  CMP qword ptr [R14 + 0x60],0x0
0527bf82  JNZ 0x0527bf88
0527bf84  MOV qword ptr [R14 + 0x60],R12
0527bf88  MOV RDI,R14
0527bf8b  MOV ESI,0x1
0527bf90  MOV EDX,0x2
0527bf95  CALL 0x0cae0970
0527bf9a  MOV RDI,qword ptr [RSP + 0x100]
0527bfa2  CMP RDI,R13
0527bfa5  JZ 0x0527bfc6
0527bfa7  MOV EAX,0x28
0527bfac  TEST RDI,RDI
0527bfaf  JNZ 0x0527bfcb
0527bfb1  MOV RBX,qword ptr [RSP + 0x30]
0527bfb6  MOV qword ptr [RSP + 0x30],0x0
0527bfbf  TEST RBX,RBX
0527bfc2  JNZ 0x0527bfe4
0527bfc4  JMP 0x0527c00a
0527bfc6  MOV EAX,0x20
0527bfcb  MOV RCX,qword ptr [RDI]
0527bfce  CALL qword ptr [RCX + RAX*0x1]
0527bfd1  MOV RBX,qword ptr [RSP + 0x30]
0527bfd6  MOV qword ptr [RSP + 0x30],0x0
0527bfdf  TEST RBX,RBX
0527bfe2  JZ 0x0527c00a
0527bfe4  MOV RDI,qword ptr [RBX + 0x40]
0527bfe8  TEST RDI,RDI
0527bfeb  JZ 0x0527bffd
0527bfed  MOV qword ptr [RBX + 0x48],RDI
0527bff1  MOV RSI,qword ptr [RBX + 0x50]
0527bff5  SUB RSI,RDI
0527bff8  CALL 0x0412a280
0527bffd  MOV ESI,0x68
0527c002  MOV RDI,RBX
0527c005  CALL 0x0412a280
0527c00a  LEA RAX,[0xf460460]
0527c011  MOV qword ptr [RSP + 0x1b8],RAX
0527c019  MOV RDI,qword ptr [RSP + 0x1d8]
0527c021  TEST RDI,RDI
0527c024  JZ 0x0527c03e
0527c026  MOV qword ptr [RSP + 0x1e0],RDI
0527c02e  MOV RSI,qword ptr [RSP + 0x1e8]
0527c036  SUB RSI,RDI
0527c039  CALL 0x0412a280
0527c03e  MOV RDI,qword ptr [RSP + 0x200]
0527c046  TEST RDI,RDI
0527c049  JZ 0x0527c063
0527c04b  MOV qword ptr [RSP + 0x208],RDI
0527c053  MOV RSI,qword ptr [RSP + 0x210]
0527c05b  SUB RSI,RDI
0527c05e  CALL 0x0412a280
0527c063  ADD RSP,0x378
0527c06a  POP RBX
0527c06b  POP R12
0527c06d  POP R13
0527c06f  POP R14
0527c071  POP R15
0527c073  POP RBP
0527c074  RET
0527c075  TEST byte ptr [0x0f5a2846],0x1
0527c07c  JZ 0x0527bf1a
0527c082  CMP byte ptr [RBP + 0x7],0x0
0527c086  JNZ 0x0527bf1a
0527c08c  LEA RSI,[0xf5a2840]
0527c093  MOV RDI,RBP
0527c096  CALL 0x04fa7a10
0527c09b  TEST AL,AL
0527c09d  JNZ 0x0527be92
0527c0a3  JMP 0x0527bf1a
0527c0a8  MOV EDI,0x18
0527c0ad  XOR ESI,ESI
0527c0af  CALL 0x0eec74c0
0527c0b4  JMP 0x0527ae3a
0527c0b9  MOV EDI,0x200
0527c0be  XOR ESI,ESI
0527c0c0  CALL 0x0eec74c0
0527c0c5  JMP 0x0527ae6d
0527c0ca  MOV EDI,0x10
0527c0cf  CALL 0x041086b0
0527c0d4  MOV R14,RAX
0527c0d7  LEA RSI,[0x11ed0d9]
0527c0de  MOV RDI,RAX
0527c0e1  CALL 0x0412bf30
0527c0e6  LEA RAX,[0xeeec910]
0527c0ed  ADD RAX,0x10
0527c0f1  MOV qword ptr [R14],RAX
0527c0f4  LEA RSI,[0xeeec938]
0527c0fb  LEA RDX,[0x412bce0]
0527c102  MOV RDI,R14
0527c105  CALL 0x041088a0
0527c10a  JMP 0x0527c1f8
0527c1f8  MOV RBX,RAX
0527c1fb  MOV RDI,qword ptr [RSP + 0x100]
0527c203  MOV EAX,0x20
0527c208  CMP RDI,R13
0527c20b  JZ 0x0527c21b
0527c20d  MOV EAX,0x28
0527c212  TEST RDI,RDI
0527c215  JZ 0x0527c38d
0527c21b  MOV RCX,qword ptr [RDI]
0527c21e  CALL qword ptr [RCX + RAX*0x1]
0527c221  JMP 0x0527c38d
0527c38d  LEA RDI,[RSP + 0x128]
0527c395  CALL 0x0527c430
0527c39a  LEA RDI,[RSP + 0x30]
0527c39f  CALL 0x0527aaa0
0527c3a4  LEA RAX,[0xf460460]
0527c3ab  MOV qword ptr [RSP + 0x1b8],RAX
0527c3b3  MOV RDI,qword ptr [RSP + 0x1d8]
0527c3bb  TEST RDI,RDI
0527c3be  JNZ 0x0527c3d5
0527c3c0  MOV RDI,qword ptr [RSP + 0x200]
0527c3c8  TEST RDI,RDI
0527c3cb  JNZ 0x0527c3fa
0527c3cd  MOV RDI,RBX
0527c3d0  CALL 0x0eee2d70
0527c3d5  MOV qword ptr [RSP + 0x1e0],RDI
0527c3dd  MOV RSI,qword ptr [RSP + 0x1e8]
0527c3e5  SUB RSI,RDI
0527c3e8  CALL 0x0412a280
0527c3ed  MOV RDI,qword ptr [RSP + 0x200]
0527c3f5  TEST RDI,RDI
0527c3f8  JZ 0x0527c3cd
0527c3fa  MOV qword ptr [RSP + 0x208],RDI
0527c402  MOV RSI,qword ptr [RSP + 0x210]
0527c40a  SUB RSI,RDI
0527c40d  CALL 0x0412a280
0527c412  MOV RDI,RBX
0527c415  CALL 0x0eee2d70
0527c41a  MOV RDI,RAX
0527c41d  CALL 0x04882e20
0527c422  MOV RDI,RAX
0527c425  CALL 0x04882e20
0527c42a  INT3
```

## `0527a850` — OverworldGenerator slot 47

- Ghidra name: `OverworldGenerator__prepareHeights`
- Body: `[[0527a850, 0527a9f8]]`

### Pseudocode

```c

void OverworldGenerator__prepareHeights
               (long *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
               undefined1 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *apuStack_a0 [4];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long alStack_68 [4];
  long *plStack_48;
  
  (**(code **)(*param_1 + 0x1e8))(auStack_c8,param_1,*param_3);
  func_0x0d2eeb90(apuStack_a0,
                  CONCAT44((int)(*param_3 >> 0x1c) >> 2,(int)*param_3 << 2) & 0xfffffffcffffffff,
                  param_1 + 0xe,4);
  (**(code **)(*param_1 + 0x1e0))
            (&lStack_d0,param_1,param_3,apuStack_a0,(int)*(short *)(param_1[5] + 0xa8),0x140,
             (int)*(short *)(param_1[5] + 0xac));
  plStack_48 = (long *)0x0;
  (**(code **)(*param_1 + 0x200))
            (param_1,param_2,param_3,auStack_c8,lStack_d0,alStack_68,param_5,param_4);
  if (plStack_48 == alStack_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    lVar1 = lStack_d0;
    if (plStack_48 == (long *)0x0) goto joined_r0x0527a97b;
  }
  (**(code **)(*plStack_48 + lVar2))();
  lVar1 = lStack_d0;
joined_r0x0527a97b:
  lStack_d0 = 0;
  if (lVar1 != 0) {
    lStack_d0 = 0;
    lVar2 = *(long *)(lVar1 + 0x40);
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x48) = lVar2;
      func_0x0412a280(lVar2,*(long *)(lVar1 + 0x50) - lVar2);
    }
    func_0x0412a280(lVar1,0x68);
  }
  apuStack_a0[0] = &UNK_0f460460;
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    func_0x0412a280(lStack_80,lStack_70 - lStack_80);
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  return;
}


```

### Assembly

```asm
0527a850  PUSH RBP
0527a851  PUSH R15
0527a853  PUSH R14
0527a855  PUSH R13
0527a857  PUSH R12
0527a859  PUSH RBX
0527a85a  SUB RSP,0xa8
0527a861  MOV EBP,R8D
0527a864  MOV RBX,RCX
0527a867  MOV R14,RDX
0527a86a  MOV R15,RSI
0527a86d  MOV R12,RDI
0527a870  MOV RDX,qword ptr [RDX]
0527a873  MOV RAX,qword ptr [RDI]
0527a876  LEA RDI,[RSP + 0x10]
0527a87b  MOV RSI,R12
0527a87e  CALL qword ptr [RAX + 0x1e8]
0527a884  MOV RSI,qword ptr [R14]
0527a887  MOV RAX,RSI
0527a88a  SHR RAX,0x1c
0527a88e  SHL ESI,0x2
0527a891  SAR EAX,0x2
0527a894  AND EAX,0xfffffffc
0527a897  SHL RAX,0x20
0527a89b  OR RSI,RAX
0527a89e  LEA RDX,[R12 + 0x70]
0527a8a3  LEA RDI,[RSP + 0x38]
0527a8a8  MOV ECX,0x4
0527a8ad  CALL 0x0d2eeb90
0527a8b2  MOV RAX,qword ptr [R12]
0527a8b6  MOV RCX,qword ptr [R12 + 0x28]
0527a8bb  MOVSX R8D,word ptr [RCX + 0xa8]
0527a8c3  MOVSX R10D,word ptr [RCX + 0xac]
0527a8cb  MOV RAX,qword ptr [RAX + 0x1e0]
0527a8d2  SUB RSP,0x8
0527a8d6  LEA RDI,[RSP + 0x10]
0527a8db  LEA RCX,[RSP + 0x40]
0527a8e0  MOV RSI,R12
0527a8e3  MOV RDX,R14
0527a8e6  MOV R9D,0x140
0527a8ec  PUSH R10
0527a8ee  CALL RAX
0527a8f0  ADD RSP,0x10
0527a8f4  MOV R8,qword ptr [RSP + 0x8]
0527a8f9  MOV qword ptr [RSP + 0x90],0x0
0527a905  MOV RAX,qword ptr [R12]
0527a909  MOV RAX,qword ptr [RAX + 0x200]
0527a910  MOVZX R10D,BPL
0527a914  LEA RCX,[RSP + 0x10]
0527a919  LEA R13,[RSP + 0x70]
0527a91e  MOV RDI,R12
0527a921  MOV RSI,R15
0527a924  MOV RDX,R14
0527a927  MOV R9,R13
0527a92a  PUSH RBX
0527a92b  PUSH R10
0527a92d  CALL RAX
0527a92f  ADD RSP,0x10
0527a933  MOV RDI,qword ptr [RSP + 0x90]
0527a93b  CMP RDI,R13
0527a93e  JZ 0x0527a95f
0527a940  MOV EAX,0x28
0527a945  TEST RDI,RDI
0527a948  JNZ 0x0527a964
0527a94a  MOV RBX,qword ptr [RSP + 0x8]
0527a94f  MOV qword ptr [RSP + 0x8],0x0
0527a958  TEST RBX,RBX
0527a95b  JNZ 0x0527a97d
0527a95d  JMP 0x0527a9a3
0527a95f  MOV EAX,0x20
0527a964  MOV RCX,qword ptr [RDI]
0527a967  CALL qword ptr [RCX + RAX*0x1]
0527a96a  MOV RBX,qword ptr [RSP + 0x8]
0527a96f  MOV qword ptr [RSP + 0x8],0x0
0527a978  TEST RBX,RBX
0527a97b  JZ 0x0527a9a3
0527a97d  MOV RDI,qword ptr [RBX + 0x40]
0527a981  TEST RDI,RDI
0527a984  JZ 0x0527a996
0527a986  MOV qword ptr [RBX + 0x48],RDI
0527a98a  MOV RSI,qword ptr [RBX + 0x50]
0527a98e  SUB RSI,RDI
0527a991  CALL 0x0412a280
0527a996  MOV ESI,0x68
0527a99b  MOV RDI,RBX
0527a99e  CALL 0x0412a280
0527a9a3  LEA RAX,[0xf460460]
0527a9aa  MOV qword ptr [RSP + 0x38],RAX
0527a9af  MOV RDI,qword ptr [RSP + 0x58]
0527a9b4  TEST RDI,RDI
0527a9b7  JZ 0x0527a9cb
0527a9b9  MOV qword ptr [RSP + 0x60],RDI
0527a9be  MOV RSI,qword ptr [RSP + 0x68]
0527a9c3  SUB RSI,RDI
0527a9c6  CALL 0x0412a280
0527a9cb  MOV RDI,qword ptr [RSP + 0x20]
0527a9d0  TEST RDI,RDI
0527a9d3  JZ 0x0527a9e7
0527a9d5  MOV qword ptr [RSP + 0x28],RDI
0527a9da  MOV RSI,qword ptr [RSP + 0x30]
0527a9df  SUB RSI,RDI
0527a9e2  CALL 0x0412a280
0527a9e7  ADD RSP,0xa8
0527a9ee  POP RBX
0527a9ef  POP R12
0527a9f1  POP R13
0527a9f3  POP R14
0527a9f5  POP R15
0527a9f7  POP RBP
0527a9f8  RET
```

## `0527aae0` — OverworldGenerator slot 48

- Ghidra name: `OverworldGenerator__getBiomeArea`
- Body: `[[0527aae0, 0527ab13]]`

### Pseudocode

```c

undefined8
OverworldGenerator__getBiomeArea
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x188))(param_2);
  (**(code **)(*plVar1 + 0x28))(param_1,plVar1,param_3,param_4);
  return param_1;
}


```

### Assembly

```asm
0527aae0  PUSH R15
0527aae2  PUSH R14
0527aae4  PUSH RBX
0527aae5  MOV EBX,ECX
0527aae7  MOV R14,RDX
0527aaea  MOV R15,RDI
0527aaed  MOV RAX,qword ptr [RSI]
0527aaf0  MOV RDI,RSI
0527aaf3  CALL qword ptr [RAX + 0x188]
0527aaf9  MOV R8,qword ptr [RAX]
0527aafc  MOV RDI,R15
0527aaff  MOV RSI,RAX
0527ab02  MOV RDX,R14
0527ab05  MOV ECX,EBX
0527ab07  CALL qword ptr [R8 + 0x28]
0527ab0b  MOV RAX,R15
0527ab0e  POP RBX
0527ab0f  POP R14
0527ab11  POP R15
0527ab13  RET
```

## `0527a840` — OverworldGenerator slot 50

- Ghidra name: `OverworldGenerator__getBlockVolumeDimensions`
- Body: `[[0527a840, 0527a84f]]`

### Pseudocode

```c

undefined1  [16] OverworldGenerator__getBlockVolumeDimensions(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x140;
  auVar1._0_8_ = 0x1000000010;
  return auVar1;
}


```

### Assembly

```asm
0527a840  MOV RAX,0x1000000010
0527a84a  MOV EDX,0x140
0527a84f  RET
```

## `0527a720` — OverworldGenerator slot 55

- Ghidra name: `OverworldGenerator__decorateWorldGenLoadChunk`
- Body: `[[0527a720, 0527a7d9] [0527a7e0, 0527a827]]`

### Pseudocode

```c

void OverworldGenerator__decorateWorldGenLoadChunk
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  lVar1 = *(long *)(lVar3 + 0x90);
  lVar3 = *(long *)(lVar3 + 0x98);
  uStack_38 = param_6;
  func_0x0488f040(&lStack_58,lVar1,lVar3,(lVar3 - lVar1 >> 3) * -0x5555555555555555);
  lVar2 = lStack_50;
  lVar1 = lStack_58;
  for (lVar3 = lStack_58; lStack_58 = lVar1, lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
    func_0x0c855940(param_2,param_3,param_4,param_5,uStack_38,lVar3);
    lVar1 = lStack_58;
  }
  lVar3 = lStack_50;
  if (lVar1 != 0) {
    for (; lVar1 != lVar3; lVar3 = lVar3 + -0x18) {
      if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar3 + -8),*(ulong *)(lVar3 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_50 = lVar1;
    func_0x0412a280(lStack_58,lStack_48 - lStack_58);
  }
  return;
}


```

### Assembly

```asm
0527a720  PUSH RBP
0527a721  PUSH R15
0527a723  PUSH R14
0527a725  PUSH R13
0527a727  PUSH R12
0527a729  PUSH RBX
0527a72a  SUB RSP,0x28
0527a72e  MOV qword ptr [RSP + 0x20],R9
0527a733  MOV R15,R8
0527a736  MOV R12,RCX
0527a739  MOV R13,RDX
0527a73c  MOV RBP,RSI
0527a73f  MOV RAX,qword ptr [RDI + 0x20]
0527a743  MOV RAX,qword ptr [RAX + 0x348]
0527a74a  XORPS XMM0,XMM0
0527a74d  MOVAPS xmmword ptr [RSP],XMM0
0527a751  MOV qword ptr [RSP + 0x10],0x0
0527a75a  MOV RSI,qword ptr [RAX + 0x90]
0527a761  MOV RDX,qword ptr [RAX + 0x98]
0527a768  MOV RAX,RDX
0527a76b  SUB RAX,RSI
0527a76e  SAR RAX,0x3
0527a772  MOV RCX,-0x5555555555555555
0527a77c  IMUL RCX,RAX
0527a780  MOV RDI,RSP
0527a783  CALL 0x0488f040
0527a788  MOV RBX,qword ptr [RSP]
0527a78c  MOV R14,qword ptr [RSP + 0x8]
0527a791  CMP RBX,R14
0527a794  JZ 0x0527a7c6
0527a796  NOP word ptr CS:[RAX + RAX*0x1]
0527a7a0  MOV RDI,RBP
0527a7a3  MOV RSI,R13
0527a7a6  MOV RDX,R12
0527a7a9  MOV RCX,R15
0527a7ac  MOV R8,qword ptr [RSP + 0x20]
0527a7b1  MOV R9,RBX
0527a7b4  CALL 0x0c855940
0527a7b9  ADD RBX,0x18
0527a7bd  CMP RBX,R14
0527a7c0  JNZ 0x0527a7a0
0527a7c2  MOV RBX,qword ptr [RSP]
0527a7c6  TEST RBX,RBX
0527a7c9  JZ 0x0527a819
0527a7cb  MOV R14,qword ptr [RSP + 0x8]
0527a7d0  MOV RDI,RBX
0527a7d3  CMP RBX,R14
0527a7d6  JNZ 0x0527a7e9
0527a7d8  JMP 0x0527a807
0527a7e0  ADD R14,-0x18
0527a7e4  CMP R14,RBX
0527a7e7  JZ 0x0527a803
0527a7e9  TEST byte ptr [R14 + -0x18],0x1
0527a7ee  JZ 0x0527a7e0
0527a7f0  MOV RSI,qword ptr [R14 + -0x18]
0527a7f4  MOV RDI,qword ptr [R14 + -0x8]
0527a7f8  AND RSI,-0x2
0527a7fc  CALL 0x0412a280
0527a801  JMP 0x0527a7e0
0527a803  MOV RDI,qword ptr [RSP]
0527a807  MOV qword ptr [RSP + 0x8],RBX
0527a80c  MOV RSI,qword ptr [RSP + 0x10]
0527a811  SUB RSI,RDI
0527a814  CALL 0x0412a280
0527a819  ADD RSP,0x28
0527a81d  POP RBX
0527a81e  POP R12
0527a820  POP R13
0527a822  POP R14
0527a824  POP R15
0527a826  POP RBP
0527a827  RET
```

## `0527ab20` — OverworldGenerator slot 60

- Ghidra name: `OverworldGenerator__tryMakeAquifer`
- Body: `[[0527ab20, 0527ab2a]]`

### Pseudocode

```c

undefined8 * OverworldGenerator__tryMakeAquifer(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}


```

### Assembly

```asm
0527ab20  MOV RAX,RDI
0527ab23  MOV qword ptr [RDI],0x0
0527ab2a  RET
```

## `0527a6f0` — OverworldGenerator slot 61

- Ghidra name: `OverworldGenerator__createNoiseCache`
- Body: `[[0527a6f0, 0527a710]]`

### Pseudocode

```c

undefined8 * OverworldGenerator__createNoiseCache(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}


```

### Assembly

```asm
0527a6f0  MOV RAX,RDI
0527a6f3  MOV qword ptr [RDI],0x0
0527a6fa  MOV dword ptr [RDI + 0x8],0x0
0527a701  XORPS XMM0,XMM0
0527a704  MOVUPS xmmword ptr [RDI + 0x10],XMM0
0527a708  MOV qword ptr [RDI + 0x20],0x0
0527a710  RET
```

## `0527a6a0` — OverworldGenerator slot 0

- Ghidra name: `FUN_0527a6a0`
- Body: `[[0527a6a0, 0527a6ce]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0527a6a0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar2 = param_1 + -0xe;
  param_1[-0xe] = &UNK_0ef9d2a0;
  *param_1 = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x1a);
  *puVar2 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar3;
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar4 = param_1[1];
  param_1[1] = 0;
  if (lVar4 != 0) {
    func_0x0d352b40(lVar4);
    func_0x0412a280(lVar4,0x1c8);
  }
  *puVar2 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar2 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
0527a6a0  PUSH RBX
0527a6a1  LEA RBX,[RDI + -0x70]
0527a6a5  LEA RAX,[0xef9d2a0]
0527a6ac  MOV qword ptr [RDI + -0x70],RAX
0527a6b0  LEA RAX,[0xef9d4b8]
0527a6b7  MOV qword ptr [RDI],RAX
0527a6ba  ADD RDI,0xd0
0527a6c1  CALL 0x0527a590
0527a6c6  MOV RDI,RBX
0527a6c9  POP RBX
0527a6ca  JMP 0x0ca70460
```

## `0527a6e0` — OverworldGenerator slot 1

- Ghidra name: `FUN_0527a6e0`
- Body: `[[0527a6e0, 0527a6e1]]`

### Pseudocode

```c

void FUN_0527a6e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

### Assembly

```asm
0527a6e0  UD2
```

## `0529ba70` — OverworldGenerator2d slot 0

- Ghidra name: `FUN_0529ba70`
- Body: `[[0529ba70, 0529bcab]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0529ba70(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  lVar2 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x42];
  param_1[0x42] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x41];
  param_1[0x41] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x40];
  param_1[0x40] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x3f];
  param_1[0x3f] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar5 = (undefined8 *)param_1[0x1e];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar6 = (long *)param_1[2];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
0529ba70  PUSH R14
0529ba72  PUSH RBX
0529ba73  PUSH RAX
0529ba74  MOV RBX,RDI
0529ba77  MOV RDI,qword ptr [RDI + 0x238]
0529ba7e  MOV qword ptr [RBX + 0x238],0x0
0529ba89  TEST RDI,RDI
0529ba8c  JZ 0x0529ba94
0529ba8e  MOV RAX,qword ptr [RDI]
0529ba91  CALL qword ptr [RAX + 0x8]
0529ba94  MOV R14,qword ptr [RBX + 0x228]
0529ba9b  MOV qword ptr [RBX + 0x228],0x0
0529baa6  TEST R14,R14
0529baa9  JZ 0x0529bad1
0529baab  MOV RDI,qword ptr [R14 + 0x8]
0529baaf  TEST RDI,RDI
0529bab2  JZ 0x0529bac4
0529bab4  MOV qword ptr [R14 + 0x10],RDI
0529bab8  MOV RSI,qword ptr [R14 + 0x18]
0529babc  SUB RSI,RDI
0529babf  CALL 0x0412a280
0529bac4  MOV ESI,0x28
0529bac9  MOV RDI,R14
0529bacc  CALL 0x0412a280
0529bad1  MOV R14,qword ptr [RBX + 0x220]
0529bad8  MOV qword ptr [RBX + 0x220],0x0
0529bae3  TEST R14,R14
0529bae6  JZ 0x0529bb0e
0529bae8  MOV RDI,qword ptr [R14 + 0x8]
0529baec  TEST RDI,RDI
0529baef  JZ 0x0529bb01
0529baf1  MOV qword ptr [R14 + 0x10],RDI
0529baf5  MOV RSI,qword ptr [R14 + 0x18]
0529baf9  SUB RSI,RDI
0529bafc  CALL 0x0412a280
0529bb01  MOV ESI,0x28
0529bb06  MOV RDI,R14
0529bb09  CALL 0x0412a280
0529bb0e  MOV R14,qword ptr [RBX + 0x218]
0529bb15  MOV qword ptr [RBX + 0x218],0x0
0529bb20  TEST R14,R14
0529bb23  JZ 0x0529bb4b
0529bb25  MOV RDI,qword ptr [R14 + 0x8]
0529bb29  TEST RDI,RDI
0529bb2c  JZ 0x0529bb3e
0529bb2e  MOV qword ptr [R14 + 0x10],RDI
0529bb32  MOV RSI,qword ptr [R14 + 0x18]
0529bb36  SUB RSI,RDI
0529bb39  CALL 0x0412a280
0529bb3e  MOV ESI,0x28
0529bb43  MOV RDI,R14
0529bb46  CALL 0x0412a280
0529bb4b  MOV R14,qword ptr [RBX + 0x210]
0529bb52  MOV qword ptr [RBX + 0x210],0x0
0529bb5d  TEST R14,R14
0529bb60  JZ 0x0529bb88
0529bb62  MOV RDI,qword ptr [R14 + 0x8]
0529bb66  TEST RDI,RDI
0529bb69  JZ 0x0529bb7b
0529bb6b  MOV qword ptr [R14 + 0x10],RDI
0529bb6f  MOV RSI,qword ptr [R14 + 0x18]
0529bb73  SUB RSI,RDI
0529bb76  CALL 0x0412a280
0529bb7b  MOV ESI,0x28
0529bb80  MOV RDI,R14
0529bb83  CALL 0x0412a280
0529bb88  MOV R14,qword ptr [RBX + 0x208]
0529bb8f  MOV qword ptr [RBX + 0x208],0x0
0529bb9a  TEST R14,R14
0529bb9d  JZ 0x0529bbc5
0529bb9f  MOV RDI,qword ptr [R14 + 0x8]
0529bba3  TEST RDI,RDI
0529bba6  JZ 0x0529bbb8
0529bba8  MOV qword ptr [R14 + 0x10],RDI
0529bbac  MOV RSI,qword ptr [R14 + 0x18]
0529bbb0  SUB RSI,RDI
0529bbb3  CALL 0x0412a280
0529bbb8  MOV ESI,0x28
0529bbbd  MOV RDI,R14
0529bbc0  CALL 0x0412a280
0529bbc5  MOV R14,qword ptr [RBX + 0x200]
0529bbcc  MOV qword ptr [RBX + 0x200],0x0
0529bbd7  TEST R14,R14
0529bbda  JZ 0x0529bc02
0529bbdc  MOV RDI,qword ptr [R14 + 0x8]
0529bbe0  TEST RDI,RDI
0529bbe3  JZ 0x0529bbf5
0529bbe5  MOV qword ptr [R14 + 0x10],RDI
0529bbe9  MOV RSI,qword ptr [R14 + 0x18]
0529bbed  SUB RSI,RDI
0529bbf0  CALL 0x0412a280
0529bbf5  MOV ESI,0x28
0529bbfa  MOV RDI,R14
0529bbfd  CALL 0x0412a280
0529bc02  MOV R14,qword ptr [RBX + 0x1f8]
0529bc09  MOV qword ptr [RBX + 0x1f8],0x0
0529bc14  TEST R14,R14
0529bc17  JZ 0x0529bc3f
0529bc19  MOV RDI,qword ptr [R14 + 0x8]
0529bc1d  TEST RDI,RDI
0529bc20  JZ 0x0529bc32
0529bc22  MOV qword ptr [R14 + 0x10],RDI
0529bc26  MOV RSI,qword ptr [R14 + 0x18]
0529bc2a  SUB RSI,RDI
0529bc2d  CALL 0x0412a280
0529bc32  MOV ESI,0x28
0529bc37  MOV RDI,R14
0529bc3a  CALL 0x0412a280
0529bc3f  MOV R14,qword ptr [RBX + 0x1f0]
0529bc46  MOV qword ptr [RBX + 0x1f0],0x0
0529bc51  TEST R14,R14
0529bc54  JZ 0x0529bc7c
0529bc56  MOV RDI,qword ptr [R14 + 0x8]
0529bc5a  TEST RDI,RDI
0529bc5d  JZ 0x0529bc6f
0529bc5f  MOV qword ptr [R14 + 0x10],RDI
0529bc63  MOV RSI,qword ptr [R14 + 0x18]
0529bc67  SUB RSI,RDI
0529bc6a  CALL 0x0412a280
0529bc6f  MOV ESI,0x28
0529bc74  MOV RDI,R14
0529bc77  CALL 0x0412a280
0529bc7c  LEA RAX,[0xef9d2a0]
0529bc83  MOV qword ptr [RBX],RAX
0529bc86  LEA RAX,[0xef9d4b8]
0529bc8d  MOV qword ptr [RBX + 0x70],RAX
0529bc91  LEA RDI,[RBX + 0x140]
0529bc98  CALL 0x0527a590
0529bc9d  MOV RDI,RBX
0529bca0  ADD RSP,0x8
0529bca4  POP RBX
0529bca5  POP R14
0529bca7  JMP 0x0ca70460
```

## `0529bcb0` — OverworldGenerator2d slot 1

- Ghidra name: `FUN_0529bcb0`
- Body: `[[0412a280, 0412a284] [0529bcb0, 0529bcc6]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0529bcb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0529ba70();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

### Assembly

```asm
0412a280  JMP 0x0ee326a0
0529bcb0  PUSH RBX
0529bcb1  MOV RBX,RDI
0529bcb4  CALL 0x0529ba70
0529bcb9  MOV ESI,0x240
0529bcbe  MOV RDI,RBX
0529bcc1  POP RBX
0529bcc2  JMP 0x0412a280
```

## `05281620` — OverworldGenerator2d slot 49

- Ghidra name: `FUN_05281620`
- Body: `[[05281620, 05281627]]`

### Pseudocode

```c

undefined8 FUN_05281620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}


```

### Assembly

```asm
05281620  MOV RAX,qword ptr [RDI + 0x238]
05281627  RET
```

## `052815f0` — OverworldGenerator2d slot 51

- Ghidra name: `FUN_052815f0`
- Body: `[[052815f0, 0528161f]]`

### Pseudocode

```c

undefined1  [16] FUN_052815f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = func_0x0c851100(0xf5566f8,*(undefined8 *)(param_1 + 0x238),0);
  uVar2 = auVar3._0_8_;
  uVar1 = auVar3._8_8_ & 0xffffffff;
  if ((auVar3._8_8_ >> 0x20 & 1) == 0) {
    uVar2 = 0x7fff00000000;
    uVar1 = 0;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


```

### Assembly

```asm
052815f0  PUSH RBX
052815f1  MOV RSI,qword ptr [RDI + 0x238]
052815f8  LEA RDI,[0xf5566f8]
052815ff  XOR EBX,EBX
05281601  XOR EDX,EDX
05281603  CALL 0x0c851100
05281608  BT RDX,0x20
0528160d  CMOVNC EDX,EBX
05281610  MOV RCX,0x7fff00000000
0528161a  CMOVNC RAX,RCX
0528161e  POP RBX
0528161f  RET
```

## `0527e8e0` — OverworldGenerator2d slot 56

- Ghidra name: `FUN_0527e8e0`
- Body: `[[0527e8e0, 0527e9d0] [0527e9e0, 0527ea4d]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0527e8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar2 = param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar3 = *(long *)(lVar1 + 0xa8);
  lVar1 = *(long *)(lVar1 + 0xb0);
  func_0x0488f040(&lStack_48,lVar3,lVar1,(lVar1 - lVar3 >> 3) * -0x5555555555555555);
  lVar1 = lStack_40;
  if (lStack_48 != lStack_40) {
    lVar3 = lStack_48;
    do {
      func_0x0c8550b0(param_3,param_4,param_5,1,puVar2,lVar3,param_1 + 0x70);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
  }
  lVar3 = lStack_48;
  lVar1 = lStack_40;
  if (lStack_48 != 0) {
    for (; lVar3 != lVar1; lVar1 = lVar1 + -0x18) {
      if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_40 = lVar3;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  func_0x0412a280(puVar2,8);
  return;
}


```

### Assembly

```asm
0527e8e0  PUSH RBP
0527e8e1  PUSH R15
0527e8e3  PUSH R14
0527e8e5  PUSH R13
0527e8e7  PUSH R12
0527e8e9  PUSH RBX
0527e8ea  SUB RSP,0x28
0527e8ee  MOV R14,R8
0527e8f1  MOV R15,RCX
0527e8f4  MOV R12,RDX
0527e8f7  MOV RBP,RSI
0527e8fa  MOV R13,RDI
0527e8fd  MOV RAX,qword ptr [0x0f5463b0]
0527e904  LEA RDI,[0xf5463b0]
0527e90b  MOV ESI,0x8
0527e910  CALL qword ptr [RAX + 0x10]
0527e913  TEST RAX,RAX
0527e916  JZ 0x0527ea37
0527e91c  MOV qword ptr [RSP + 0x8],RAX
0527e921  MOV qword ptr [RAX],RBP
0527e924  MOV RAX,qword ptr [R13 + 0x20]
0527e928  MOV RAX,qword ptr [RAX + 0x348]
0527e92f  XORPS XMM0,XMM0
0527e932  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0527e937  MOV qword ptr [RSP + 0x20],0x0
0527e940  MOV RSI,qword ptr [RAX + 0xa8]
0527e947  MOV RDX,qword ptr [RAX + 0xb0]
0527e94e  MOV RAX,RDX
0527e951  SUB RAX,RSI
0527e954  SAR RAX,0x3
0527e958  MOV RCX,-0x5555555555555555
0527e962  IMUL RCX,RAX
0527e966  LEA RDI,[RSP + 0x10]
0527e96b  CALL 0x0488f040
0527e970  MOV RBP,qword ptr [RSP + 0x10]
0527e975  MOV RBX,qword ptr [RSP + 0x18]
0527e97a  CMP RBP,RBX
0527e97d  JZ 0x0527e9bd
0527e97f  ADD R13,0x70
0527e983  NOP dword ptr CS:[RAX + RAX*0x1]
0527e990  MOV qword ptr [RSP],R13
0527e994  MOV ECX,0x1
0527e999  MOV RDI,R12
0527e99c  MOV RSI,R15
0527e99f  MOV RDX,R14
0527e9a2  MOV R8,qword ptr [RSP + 0x8]
0527e9a7  MOV R9,RBP
0527e9aa  CALL 0x0c8550b0
0527e9af  ADD RBP,0x18
0527e9b3  CMP RBP,RBX
0527e9b6  JNZ 0x0527e990
0527e9b8  MOV RBP,qword ptr [RSP + 0x10]
0527e9bd  TEST RBP,RBP
0527e9c0  JZ 0x0527ea19
0527e9c2  MOV RBX,qword ptr [RSP + 0x18]
0527e9c7  MOV RDI,RBP
0527e9ca  CMP RBP,RBX
0527e9cd  JNZ 0x0527e9e9
0527e9cf  JMP 0x0527ea07
0527e9e0  ADD RBX,-0x18
0527e9e4  CMP RBX,RBP
0527e9e7  JZ 0x0527ea02
0527e9e9  TEST byte ptr [RBX + -0x18],0x1
0527e9ed  JZ 0x0527e9e0
0527e9ef  MOV RSI,qword ptr [RBX + -0x18]
0527e9f3  MOV RDI,qword ptr [RBX + -0x8]
0527e9f7  AND RSI,-0x2
0527e9fb  CALL 0x0412a280
0527ea00  JMP 0x0527e9e0
0527ea02  MOV RDI,qword ptr [RSP + 0x10]
0527ea07  MOV qword ptr [RSP + 0x18],RBP
0527ea0c  MOV RSI,qword ptr [RSP + 0x20]
0527ea11  SUB RSI,RDI
0527ea14  CALL 0x0412a280
0527ea19  MOV ESI,0x8
0527ea1e  MOV RDI,qword ptr [RSP + 0x8]
0527ea23  CALL 0x0412a280
0527ea28  ADD RSP,0x28
0527ea2c  POP RBX
0527ea2d  POP R12
0527ea2f  POP R13
0527ea31  POP R14
0527ea33  POP R15
0527ea35  POP RBP
0527ea36  RET
0527ea37  MOV EDI,0x8
0527ea3c  XOR ESI,ESI
0527ea3e  MOV RBX,RAX
0527ea41  CALL 0x0eec74c0
0527ea46  MOV RAX,RBX
0527ea49  JMP 0x0527e91c
```

## `05280730` — OverworldGenerator2d slot 57

- Ghidra name: `FUN_05280730`
- Body: `[[05280730, 0528073d]]`

### Pseudocode

```c

undefined8 FUN_05280730(undefined8 param_1)

{
  func_0x0527f6c0();
  return param_1;
}


```

### Assembly

```asm
05280730  PUSH RBX
05280731  MOV RBX,RDI
05280734  CALL 0x0527f6c0
05280739  MOV RAX,RBX
0528073c  POP RBX
0528073d  RET
```

## `05281640` — OverworldGenerator2d slot 58

- Ghidra name: `FUN_05281640`
- Body: `[[05281640, 05281645]]`

### Pseudocode

```c

undefined8 FUN_05281640(void)

{
  return 0x80;
}


```

### Assembly

```asm
05281640  MOV EAX,0x80
05281645  RET
```

## `05281630` — OverworldGenerator2d slot 59

- Ghidra name: `FUN_05281630`
- Body: `[[05281630, 0528163a]]`

### Pseudocode

```c

undefined1 * FUN_05281630(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return param_1;
}


```

### Assembly

```asm
05281630  MOV RAX,RDI
05281633  MOV byte ptr [RDI],0x0
05281636  MOV byte ptr [RDI + 0x18],0x0
0528163a  RET
```

## `052815d0` — OverworldGenerator2d slot 62

- Ghidra name: `FUN_052815d0`
- Body: `[[052815d0, 052815d7]]`

### Pseudocode

```c

undefined8 FUN_052815d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}


```

### Assembly

```asm
052815d0  MOV RAX,qword ptr [RDI + 0x208]
052815d7  RET
```

## `052815e0` — OverworldGenerator2d slot 63

- Ghidra name: `FUN_052815e0`
- Body: `[[052815e0, 052815e7]]`

### Pseudocode

```c

long FUN_052815e0(long param_1)

{
  return param_1 + 0x228;
}


```

### Assembly

```asm
052815e0  LEA RAX,[RDI + 0x228]
052815e7  RET
```

## `0527ea80` — OverworldGenerator2d slot 64

- Ghidra name: `FUN_0527ea80`
- Body: `[[0527ea80, 0527f01e] [0527f020, 0527f1e7] [0527f1f0, 0527f27b] [0527f280, 0527f2f6] [0527f300, 0527f62c]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0527ea80(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  short sVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  short sVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  char in_stack_00000008;
  long *in_stack_00000010;
  uint uStack_21f0;
  int iStack_21ec;
  long lStack_21e8;
  long lStack_21e0;
  long lStack_21d8;
  long lStack_21d0;
  long lStack_21c8;
  long lStack_21c0;
  ulong uStack_21b0;
  ulong uStack_21a8;
  ulong uStack_21a0;
  uint uStack_2194;
  int iStack_2190;
  uint uStack_218c;
  undefined8 uStack_2188;
  undefined8 uStack_2180;
  long lStack_2178;
  long lStack_2170;
  long lStack_2168;
  long lStack_2160;
  undefined1 auStack_2138 [16];
  long lStack_2120;
  long lStack_2118;
  long lStack_2110;
  long lStack_2108;
  long lStack_2100;
  long lStack_20f8;
  long lStack_20f0;
  long lStack_20e8;
  long lStack_20e0;
  ulong uStack_20d8;
  ulong uStack_20d0;
  long lStack_20c8;
  long lStack_20c0;
  long lStack_20b8;
  long lStack_20b0;
  long lStack_20a8;
  long lStack_20a0;
  undefined8 uStack_2098;
  float *pfStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined4 uStack_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  float fStack_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  long lStack_2038;
  long lStack_2030;
  undefined8 uStack_2028;
  long lStack_2020;
  long lStack_2018;
  undefined8 uStack_2010;
  long lStack_2008;
  long lStack_2000;
  undefined8 uStack_1ff8;
  float afStack_1034 [1025];
  
  puVar23 = *(undefined8 **)(param_1 + 0x28);
  uStack_2194 = (uint)*(short *)(puVar23 + 0x15);
  iStack_2190 = (int)*(short *)((long)puVar23 + 0xac);
  if ((in_stack_00000010 != (long *)0x0) && (0 < in_stack_00000010[1] - *in_stack_00000010)) {
    func_0x0eee2dd0(*in_stack_00000010,0);
  }
  uStack_2058 = 0;
  uStack_2054 = 0;
  fStack_2050 = 0.0;
  uStack_204c = 0;
  uStack_2068 = 0;
  uStack_2060 = 0;
  uStack_205c = 0;
  uStack_2078 = 0;
  uStack_2070 = 0;
  uStack_2088 = 0;
  uStack_2080 = 0;
  uStack_2098 = 0;
  pfStack_2090 = (float *)0x0;
  uStack_2048 = 0;
  func_0x0eee2dd0(afStack_1034,0,0x1004);
  func_0x0527f6c0(&lStack_2038,param_1,param_3);
  func_0x0eee2f00(afStack_1034,&lStack_2038,0x1004);
  uStack_2088 = 0;
  uStack_2080 = 0;
  uStack_2078 = 0;
  uStack_2070 = 0;
  uStack_2068 = 0;
  uStack_2060 = 0;
  uStack_205c = 0;
  uStack_2058 = 0;
  uStack_2054 = 0;
  fStack_2050 = 0.0;
  uStack_2098 = 0x401;
  uStack_204c = (undefined4)_DAT_014e9c40;
  uStack_2048 = (undefined4)((ulong)_DAT_014e9c40 >> 0x20);
  pfStack_2090 = afStack_1034;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&uStack_2098;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *plVar14 = (long)&uStack_2098;
  func_0x0412a280(plVar13,8);
  lStack_2008 = 0;
  lStack_2000 = 0;
  lStack_2018 = 0;
  uStack_2010 = 0;
  uStack_2028 = 0;
  lStack_2020 = 0;
  lStack_2038 = 0;
  lStack_2030 = 0;
  uStack_1ff8 = 0;
  lStack_21c8 = 0;
  lStack_21c0 = 0;
  lStack_21d8 = 0;
  lStack_21d0 = 0;
  lStack_21e8 = 0;
  lStack_21e0 = 0;
  if (in_stack_00000008 != '\0') {
    func_0x0ca729d0(param_1);
    lVar16 = *(long *)(param_1 + 0x78);
    func_0x0d2ee510(&uStack_2188,puVar23 + 0x44,param_3);
    puVar23 = &uStack_2188;
    func_0x0d2ecfa0(&lStack_2038,puVar23);
    func_0x0d2ecea0(puVar23);
    func_0x0d2efee0(&uStack_2188,lVar16 + 0x48,*(undefined8 *)param_3);
    if (lStack_21e8 != 0) {
      func_0x0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    lStack_21e8 = uStack_2188;
    lStack_21e0 = uStack_2180;
    lStack_21d8 = lStack_2178;
    uStack_2188 = 0;
    uStack_2180 = 0;
    lStack_2178 = 0;
    if (lStack_21d0 != 0) {
      func_0x0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    lStack_21d0 = lStack_2170;
    lStack_21c8 = lStack_2168;
    lStack_21c0 = lStack_2160;
    lStack_2170 = 0;
    lStack_2168 = 0;
    lStack_2160 = 0;
    if (uStack_2188 != 0) {
      uStack_2180 = uStack_2188;
      func_0x0412a280(uStack_2188,lStack_2178 - uStack_2188);
    }
    bVar8 = true;
    if (lStack_2018 != lStack_2020) goto LAB_0527edd1;
  }
  bVar8 = true;
  if ((lStack_2000 == lStack_2008) && (lStack_2030 == lStack_2038)) {
    bVar8 = lStack_21c8 != lStack_21d0 || lStack_21e8 != lStack_21e0;
  }
LAB_0527edd1:
  uStack_218c = *(int *)((long)param_2 + 0x14) * (int)param_2[2] * (int)param_2[3];
  uStack_2188 = 0;
  uStack_2180 = (ulong)uStack_2180._4_4_ << 0x20;
  lVar16 = *(long *)(param_2[4] + 0x68);
  if (*(long *)(lVar16 + 200) == _DAT_0f6eaec0) {
    puVar23 = (undefined8 *)(lVar16 + 200);
    plVar13 = (long *)&DAT_0f6eaec0;
    bVar9 = true;
    if ((*(undefined **)(lVar16 + 0xe8) == &DAT_0f6eaec0) && (_DAT_0f6eaee0 == puVar23))
    goto LAB_0527eec7;
    bVar3 = *(byte *)(lVar16 + 0xd0);
    if ((bVar3 & 1) == 0) {
      uVar18 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar18 = *(ulong *)(lVar16 + 0xd8);
    }
    uVar1 = _DAT_0f6eaed0;
    if ((DAT_0f6eaec8 & 1) == 0) {
      uVar1 = (ulong)(DAT_0f6eaec8 >> 1);
    }
    if (uVar18 == uVar1) {
      uVar18 = (ulong)DAT_0f6eaec8;
      if ((bVar3 & 1) == 0) goto LAB_0527f5d4;
      lVar22 = *(long *)(lVar16 + 0xe0);
      if ((DAT_0f6eaec8 & 1) != 0) goto LAB_0527f5e4;
      goto LAB_0527eea0;
    }
  }
LAB_0527eeb4:
  *(undefined8 *)(lVar16 + 0xe8) = 0;
  bVar9 = false;
LAB_0527eec7:
  do {
    uStack_21a8 = (ulong)*param_3;
    uStack_21b0 = (ulong)param_3[1];
    lStack_20a0 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
    lStack_20a8 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
    uStack_21a8 = (ulong)(uint)((int)uStack_21a8 << 4);
    uStack_21b0 = (ulong)(uint)((int)uStack_21b0 << 4);
    iStack_21ec = 0;
    lVar22 = 0;
LAB_0527ef40:
    lStack_20c8 = lVar22 * 4;
    lStack_2110 = lVar22 * 5;
    lStack_2118 = lVar22 * 5 + 5;
    uStack_21f0 = 0;
    lVar21 = 0;
    lStack_2120 = lVar22;
LAB_0527efaa:
    lStack_20e8 = (lVar21 + lStack_2110) * 0x29;
    lStack_20f0 = (lVar21 + lStack_2110) * 0x29 + 0x29;
    lStack_20f8 = (lStack_2118 + lVar21) * 0x29;
    lStack_2100 = (lStack_2118 + lVar21) * 0x29 + 0x29;
    uStack_20d8 = (ulong)(uint)((int)lVar21 * 4);
    iVar11 = 0;
    uStack_21a0 = (ulong)uStack_2194;
    lVar22 = 0;
    lStack_2108 = lVar21;
    while( true ) {
      uVar1 = lVar22 + lStack_20e8;
      uVar18 = lStack_20f0 + lVar22;
      uVar2 = lVar22 + lStack_20f8;
      uVar15 = lStack_2100 + lVar22;
      lStack_20e0 = lVar22;
      if (((((!bVar9) || (afStack_1034[uVar1] != _DAT_011988ac)) ||
           (afStack_1034[uVar18] != _DAT_011988ac)) ||
          ((afStack_1034[uVar2] != _DAT_011988ac || (afStack_1034[uVar15] != _DAT_011988ac)))) ||
         ((afStack_1034[uVar1 + 1] != _DAT_011988ac ||
          ((afStack_1034[uVar18 + 1] != _DAT_011988ac || (afStack_1034[uVar2 + 1] != _DAT_011988ac))
          )))) break;
      if ((afStack_1034[uVar15 + 1] != _DAT_011988ac) ||
         (NAN(afStack_1034[uVar15 + 1]) || NAN(_DAT_011988ac))) break;
LAB_0527f020:
      lVar22 = lStack_20e0 + 1;
      uStack_21a0 = (ulong)((int)uStack_21a0 + 8);
      iVar11 = iVar11 + 8;
      if (lVar22 == 0x10) goto LAB_0527ef80;
    }
    puVar5 = (ulong *)*plVar14;
    uVar6 = *puVar5;
    if (uVar1 < uVar6) {
      uVar7 = puVar5[1];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(uVar7 + uVar1 * 4);
      if (uVar2 < uVar6) {
        *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)(uVar7 + uVar2 * 4);
        *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(uVar7 + uVar18 * 4);
        if (uVar15 < uVar6) {
          *(undefined4 *)((long)puVar5 + 0x1c) = *(undefined4 *)(uVar7 + uVar15 * 4);
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(uVar7 + 4 + uVar1 * 4);
          *(undefined4 *)((long)puVar5 + 0x24) = *(undefined4 *)(uVar7 + 4 + uVar2 * 4);
          *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(uVar7 + 4 + uVar18 * 4);
          if (uVar15 + 1 < uVar6) {
            *(undefined4 *)((long)puVar5 + 0x2c) = *(undefined4 *)(uVar7 + 4 + uVar15 * 4);
            uVar18 = 0;
            puVar23 = (undefined8 *)(ulong)uStack_21f0;
            do {
              lVar16 = *plVar14;
              fVar24 = (float)(int)uVar18 * *(float *)(lVar16 + 0x4c);
              fVar28 = (float)*(undefined8 *)(lVar16 + 0x10);
              fVar26 = (float)((ulong)*(undefined8 *)(lVar16 + 0x10) >> 0x20);
              fVar27 = (float)*(undefined8 *)(lVar16 + 0x20);
              fVar29 = (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
              *(float *)(lVar16 + 0x30) =
                   fVar28 + fVar24 * ((float)*(undefined8 *)(lVar16 + 0x18) - fVar28);
              *(float *)(lVar16 + 0x34) =
                   fVar26 + fVar24 * ((float)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20) -
                                     fVar26);
              *(float *)(lVar16 + 0x38) =
                   fVar27 + fVar24 * ((float)*(undefined8 *)(lVar16 + 0x28) - fVar27);
              *(float *)(lVar16 + 0x3c) =
                   fVar29 + fVar24 * ((float)((ulong)*(undefined8 *)(lVar16 + 0x28) >> 0x20) -
                                     fVar29);
              iVar12 = (int)uStack_20d8 + (int)uVar18;
              uStack_2180 = CONCAT44(uStack_2180._4_4_,(int)uStack_21b0 + iVar12);
              lStack_20b8 = (long)(iVar12 * (int)param_2[2]);
              lVar16 = 0;
              iVar12 = iStack_21ec;
              uStack_20d0 = uVar18;
              do {
                lVar22 = *plVar14;
                fVar24 = (float)((uint)lVar16 & 0xff) * *(float *)(lVar22 + 0x4c);
                *(ulong *)(lVar22 + 0x40) =
                     CONCAT44(fVar24 * (*(float *)(lVar22 + 0x3c) - *(float *)(lVar22 + 0x38)) +
                              *(float *)(lVar22 + 0x38),
                              fVar24 * (*(float *)(lVar22 + 0x34) - *(float *)(lVar22 + 0x30)) +
                              *(float *)(lVar22 + 0x30));
                lStack_20b0 = lVar16 + lStack_20c8;
                uStack_2188 = CONCAT44(uStack_2188._4_4_,(int)uStack_21a8 + (int)lStack_20b0);
                iVar19 = 0;
                lStack_20c0 = lVar16;
                do {
                  lVar16 = *plVar14;
                  *(float *)(lVar16 + 0x48) =
                       (*(float *)(lVar16 + 0x44) - *(float *)(lVar16 + 0x40)) *
                       (float)(int)(short)iVar19 * *(float *)(lVar16 + 0x50) +
                       *(float *)(lVar16 + 0x40);
                  fVar28 = fStack_2050 * _DAT_01198cf8;
                  fVar24 = fVar28;
                  if (fVar28 <= _DAT_011985d4) {
                    fVar24 = _DAT_011985d4;
                  }
                  fVar24 = (float)(~-(uint)(_DAT_011983f0 < fVar28) & (uint)fVar24 |
                                  -(uint)(_DAT_011983f0 < fVar28) & (uint)_DAT_011983f0);
                  uVar20 = ((int)param_2[3] * iVar12 + (int)puVar23) *
                           *(int *)((long)param_2 + 0x14) + iVar11 + iVar19;
                  param_3 = (uint *)(ulong)uVar20;
                  if (uVar20 < uStack_218c) {
                    fVar24 = fVar24 * _DAT_011986e0 + (fVar24 * fVar24 * fVar24) / _DAT_01198350;
                    uStack_2188 = CONCAT44((int)uStack_21a0 + iVar19,(undefined4)uStack_2188);
                    if (bVar8) {
                      auStack_2138 = ZEXT416((uint)fVar24);
                      dVar25 = (double)func_0x0d2f06a0(&lStack_21e8,uStack_2188,
                                                       uStack_2180 & 0xffffffff);
                      auStack_2138._0_4_ = (float)(dVar25 + (double)(float)auStack_2138._0_4_);
                      fVar24 = (float)func_0x0d2ee730(&lStack_2038,&uStack_2188);
                      fVar24 = fVar24 + (float)auStack_2138._0_4_;
                    }
                    lVar16 = lStack_20a0;
                    if ((fVar24 <= _DAT_011983fc) &&
                       (lVar16 = lStack_20a8, iStack_2190 <= uStack_2188._4_4_)) {
                      if ((_DAT_0f6ffb10 == (long *)0x0) &&
                         (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                   &UNK_013a2901), cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      lVar16 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                    }
                    *(long *)(*param_2 + (ulong)uVar20 * 8) = lVar16;
                    if (in_stack_00000010 != (long *)0x0) {
                      if ((_DAT_0f6ffb10 == (long *)0x0) &&
                         (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                   &UNK_013a2901), cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      if (lVar16 != *(long *)(*_DAT_0f6ffb10 + 0x200)) {
                        lVar16 = lStack_20b0 * 2 + *in_stack_00000010;
                        sVar17 = (short)((ulong)uStack_2188 >> 0x20) + 1;
                        sVar4 = *(short *)(lVar16 + lStack_20b8 * 2);
                        if (sVar17 < sVar4) {
                          sVar17 = sVar4;
                        }
                        *(short *)(lVar16 + lStack_20b8 * 2) = sVar17;
                      }
                    }
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 != 8);
                lVar16 = lStack_20c0 + 1;
                iVar12 = iVar12 + 1;
              } while (lVar16 != 4);
              uVar20 = (int)uStack_20d0 + 1;
              uVar18 = (ulong)uVar20;
              puVar23 = (undefined8 *)(ulong)((int)puVar23 + 1);
              lVar16 = 8;
            } while (uVar20 != 4);
            goto LAB_0527f020;
          }
        }
      }
    }
    func_0x04890760();
    plVar13 = plVar14;
LAB_0527f5d4:
    lVar22 = lVar16 + 0xd1;
    if ((uVar18 & 1) == 0) {
LAB_0527eea0:
      iVar11 = func_0x0eee3000(lVar22,0xf6eaec9);
    }
    else {
LAB_0527f5e4:
      iVar11 = func_0x0eee3000(lVar22,_DAT_0f6eaed8);
    }
    if (iVar11 != 0) goto LAB_0527eeb4;
    *(long **)(lVar16 + 0xe8) = plVar13;
    _DAT_0f6eaee0 = puVar23;
  } while( true );
LAB_0527ef80:
  lVar21 = lStack_2108 + 1;
  uStack_21f0 = uStack_21f0 + 4;
  if (lVar21 == 4) goto LAB_0527f551;
  goto LAB_0527efaa;
LAB_0527f551:
  lVar22 = lStack_2120 + 1;
  iStack_21ec = iStack_21ec + 4;
  if (lVar22 == 4) {
    if (lStack_21d0 != 0) {
      lStack_21c8 = lStack_21d0;
      func_0x0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    if (lStack_21e8 != 0) {
      lStack_21e0 = lStack_21e8;
      func_0x0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    func_0x0d2ecea0(&lStack_2038);
    func_0x0412a280(plVar14,0x40);
    return;
  }
  goto LAB_0527ef40;
}


```

### Assembly

```asm
0527ea80  PUSH RBP
0527ea81  PUSH R15
0527ea83  PUSH R14
0527ea85  PUSH R13
0527ea87  PUSH R12
0527ea89  PUSH RBX
0527ea8a  SUB RSP,0x21e8
0527ea91  MOV RBP,RDX
0527ea94  MOV R14,RSI
0527ea97  MOV R12,RDI
0527ea9a  MOV R15,qword ptr [RDI + 0x28]
0527ea9e  MOVSX EAX,word ptr [R15 + 0xa8]
0527eaa6  MOV dword ptr [RSP + 0x84],EAX
0527eaad  MOVSX EAX,word ptr [R15 + 0xac]
0527eab5  MOV dword ptr [RSP + 0x88],EAX
0527eabc  CMP qword ptr [RSP + 0x2228],0x0
0527eac5  JZ 0x0527eae5
0527eac7  MOV RAX,qword ptr [RSP + 0x2228]
0527eacf  MOV RDI,qword ptr [RAX]
0527ead2  MOV RDX,qword ptr [RAX + 0x8]
0527ead6  SUB RDX,RDI
0527ead9  TEST RDX,RDX
0527eadc  JLE 0x0527eae5
0527eade  XOR ESI,ESI
0527eae0  CALL 0x0eee2dd0
0527eae5  XORPS XMM0,XMM0
0527eae8  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
0527eaf0  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
0527eaf8  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
0527eb00  MOVAPS xmmword ptr [RSP + 0x190],XMM0
0527eb08  MOVAPS xmmword ptr [RSP + 0x180],XMM0
0527eb10  MOV dword ptr [RSP + 0x1d0],0x0
0527eb1b  LEA RBX,[RSP + 0x11e4]
0527eb23  MOV EDX,0x1004
0527eb28  MOV RDI,RBX
0527eb2b  XOR ESI,ESI
0527eb2d  CALL 0x0eee2dd0
0527eb32  LEA RDI,[RSP + 0x1e0]
0527eb3a  MOV RSI,R12
0527eb3d  MOV RDX,RBP
0527eb40  CALL 0x0527f6c0
0527eb45  MOV qword ptr [RSP + 0x18],R12
0527eb4a  LEA RSI,[RSP + 0x1e0]
0527eb52  MOV EDX,0x1004
0527eb57  MOV RDI,RBX
0527eb5a  CALL 0x0eee2f00
0527eb5f  XORPS XMM0,XMM0
0527eb62  MOVAPS xmmword ptr [RSP + 0x190],XMM0
0527eb6a  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
0527eb72  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
0527eb7a  MOVUPS xmmword ptr [RSP + 0x1bc],XMM0
0527eb82  MOV qword ptr [RSP + 0x180],0x401
0527eb8e  MOV qword ptr [RSP + 0x188],RBX
0527eb96  MOVSD XMM0,qword ptr [0x014e9c40]
0527eb9e  MOVSD qword ptr [RSP + 0x1cc],XMM0
0527eba7  LEA RDI,[0xf5463b0]
0527ebae  MOV RAX,qword ptr [0x0f5463b0]
0527ebb5  MOV ESI,0x8
0527ebba  CALL qword ptr [RAX + 0x10]
0527ebbd  MOV R12,RAX
0527ebc0  TEST RAX,RAX
0527ebc3  JZ 0x0527f60b
0527ebc9  LEA RBX,[RSP + 0x180]
0527ebd1  MOV qword ptr [R12],RBX
0527ebd5  LEA RDI,[0xf5463b0]
0527ebdc  MOV RAX,qword ptr [0x0f5463b0]
0527ebe3  MOV ESI,0x40
0527ebe8  CALL qword ptr [RAX + 0x10]
0527ebeb  MOV R13,RAX
0527ebee  TEST RAX,RAX
0527ebf1  JZ 0x0527f61c
0527ebf7  MOV qword ptr [RSP + 0x10],R13
0527ebfc  MOV qword ptr [R13],RBX
0527ec00  MOV ESI,0x8
0527ec05  MOV RDI,R12
0527ec08  CALL 0x0412a280
0527ec0d  XORPS XMM0,XMM0
0527ec10  MOVAPS xmmword ptr [RSP + 0x210],XMM0
0527ec18  MOVAPS xmmword ptr [RSP + 0x200],XMM0
0527ec20  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
0527ec28  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
0527ec30  MOV qword ptr [RSP + 0x220],0x0
0527ec3c  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0527ec41  MOVAPS xmmword ptr [RSP + 0x40],XMM0
0527ec46  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0527ec4b  CMP byte ptr [RSP + 0x2220],0x0
0527ec53  JZ 0x0527ed8c
0527ec59  MOV RBX,qword ptr [RSP + 0x18]
0527ec5e  MOV RDI,RBX
0527ec61  CALL 0x0ca729d0
0527ec66  MOV R12,qword ptr [RBX + 0x78]
0527ec6a  ADD R15,0x220
0527ec71  LEA RDI,[RSP + 0x90]
0527ec79  MOV RSI,R15
0527ec7c  MOV RDX,RBP
0527ec7f  CALL 0x0d2ee510
0527ec84  LEA RDI,[RSP + 0x1e0]
0527ec8c  LEA R15,[RSP + 0x90]
0527ec94  MOV RSI,R15
0527ec97  CALL 0x0d2ecfa0
0527ec9c  MOV RDI,R15
0527ec9f  CALL 0x0d2ecea0
0527eca4  ADD R12,0x48
0527eca8  MOV RDX,qword ptr [RBP]
0527ecac  LEA RDI,[RSP + 0x90]
0527ecb4  MOV RSI,R12
0527ecb7  CALL 0x0d2efee0
0527ecbc  MOV RDI,qword ptr [RSP + 0x30]
0527ecc1  TEST RDI,RDI
0527ecc4  JZ 0x0527ecd3
0527ecc6  MOV RSI,qword ptr [RSP + 0x40]
0527eccb  SUB RSI,RDI
0527ecce  CALL 0x0412a280
0527ecd3  MOVAPS XMM0,xmmword ptr [RSP + 0x90]
0527ecdb  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0527ece0  MOV RAX,qword ptr [RSP + 0xa0]
0527ece8  MOV qword ptr [RSP + 0x40],RAX
0527eced  XORPS XMM1,XMM1
0527ecf0  MOVAPS xmmword ptr [RSP + 0x90],XMM1
0527ecf8  MOV qword ptr [RSP + 0xa0],0x0
0527ed04  MOV RDI,qword ptr [RSP + 0x48]
0527ed09  TEST RDI,RDI
0527ed0c  JZ 0x0527ed28
0527ed0e  MOV RSI,qword ptr [RSP + 0x58]
0527ed13  SUB RSI,RDI
0527ed16  CALL 0x0412a280
0527ed1b  XORPS XMM1,XMM1
0527ed1e  MOV RDI,qword ptr [RSP + 0x90]
0527ed26  JMP 0x0527ed2a
0527ed28  XOR EDI,EDI
0527ed2a  MOVUPS XMM0,xmmword ptr [RSP + 0xa8]
0527ed32  MOVUPS xmmword ptr [RSP + 0x48],XMM0
0527ed37  MOV RAX,qword ptr [RSP + 0xb8]
0527ed3f  MOV qword ptr [RSP + 0x58],RAX
0527ed44  MOVUPS xmmword ptr [RSP + 0xa8],XMM1
0527ed4c  MOV qword ptr [RSP + 0xb8],0x0
0527ed58  TEST RDI,RDI
0527ed5b  JZ 0x0527ed75
0527ed5d  MOV qword ptr [RSP + 0x98],RDI
0527ed65  MOV RSI,qword ptr [RSP + 0xa0]
0527ed6d  SUB RSI,RDI
0527ed70  CALL 0x0412a280
0527ed75  MOV RAX,qword ptr [RSP + 0x200]
0527ed7d  MOV byte ptr [RSP + 0xf],0x1
0527ed82  CMP RAX,qword ptr [RSP + 0x1f8]
0527ed8a  JNZ 0x0527edd1
0527ed8c  MOV RAX,qword ptr [RSP + 0x218]
0527ed94  MOV byte ptr [RSP + 0xf],0x1
0527ed99  CMP RAX,qword ptr [RSP + 0x210]
0527eda1  JNZ 0x0527edd1
0527eda3  MOV RAX,qword ptr [RSP + 0x1e8]
0527edab  CMP RAX,qword ptr [RSP + 0x1e0]
0527edb3  JNZ 0x0527edd1
0527edb5  MOV RAX,qword ptr [RSP + 0x30]
0527edba  XOR RAX,qword ptr [RSP + 0x38]
0527edbf  MOV RCX,qword ptr [RSP + 0x50]
0527edc4  XOR RCX,qword ptr [RSP + 0x48]
0527edc9  OR RCX,RAX
0527edcc  SETNZ byte ptr [RSP + 0xf]
0527edd1  MOV EAX,dword ptr [R14 + 0x14]
0527edd5  IMUL EAX,dword ptr [R14 + 0x10]
0527edda  IMUL EAX,dword ptr [R14 + 0x18]
0527eddf  MOV dword ptr [RSP + 0x8c],EAX
0527ede6  MOV qword ptr [RSP + 0x90],0x0
0527edf2  MOV dword ptr [RSP + 0x98],0x0
0527edfd  MOV RAX,qword ptr [R14 + 0x20]
0527ee01  MOV RBX,qword ptr [RAX + 0x68]
0527ee05  MOV RAX,qword ptr [RBX + 0xc8]
0527ee0c  CMP RAX,qword ptr [0x0f6eaec0]
0527ee13  JNZ 0x0527eeb4
0527ee19  LEA R15,[RBX + 0xc8]
0527ee20  LEA R12,[0xf6eaec0]
0527ee27  MOV AL,0x1
0527ee29  MOV dword ptr [RSP + 0x24],EAX
0527ee2d  CMP qword ptr [RBX + 0xe8],R12
0527ee34  JNZ 0x0527ee43
0527ee36  CMP qword ptr [0x0f6eaee0],R15
0527ee3d  JZ 0x0527eec7
0527ee43  MOVZX EAX,byte ptr [RBX + 0xd0]
0527ee4a  TEST AL,0x1
0527ee4c  JZ 0x0527ee6c
0527ee4e  MOV RDX,qword ptr [RBX + 0xd8]
0527ee55  MOVZX ECX,byte ptr [0x0f6eaec8]
0527ee5c  TEST CL,0x1
0527ee5f  JNZ 0x0527ee7c
0527ee61  MOV ESI,ECX
0527ee63  SHR ESI,0x1
0527ee65  CMP RDX,RSI
0527ee68  JZ 0x0527ee88
0527ee6a  JMP 0x0527eeb4
0527ee6c  MOV EDX,EAX
0527ee6e  SHR EDX,0x1
0527ee70  MOVZX ECX,byte ptr [0x0f6eaec8]
0527ee77  TEST CL,0x1
0527ee7a  JZ 0x0527ee61
0527ee7c  MOV RSI,qword ptr [0x0f6eaed0]
0527ee83  CMP RDX,RSI
0527ee86  JNZ 0x0527eeb4
0527ee88  TEST AL,0x1
0527ee8a  JZ 0x0527f5d4
0527ee90  MOV RDI,qword ptr [RBX + 0xe0]
0527ee97  TEST CL,0x1
0527ee9a  JNZ 0x0527f5e4
0527eea0  LEA RSI,[0xf6eaec9]
0527eea7  CALL 0x0eee3000
0527eeac  TEST EAX,EAX
0527eeae  JZ 0x0527f5f8
0527eeb4  MOV qword ptr [RBX + 0xe8],0x0
0527eebf  MOV dword ptr [RSP + 0x24],0x0
0527eec7  MOV EAX,dword ptr [RBP]
0527eeca  MOV qword ptr [RSP + 0x70],RAX
0527eecf  MOV EAX,dword ptr [RBP + 0x4]
0527eed2  MOV qword ptr [RSP + 0x68],RAX
0527eed7  LEA RDI,[0xf6ff9e0]
0527eede  LEA RSI,[0xf71bd88]
0527eee5  MOV EDX,0x1
0527eeea  MOV R12,qword ptr [RSP + 0x10]
0527eeef  CALL 0x0cc41df0
0527eef4  MOV qword ptr [RSP + 0x178],RAX
0527eefc  LEA RDI,[0xf6ff9e0]
0527ef03  LEA RSI,[0xf713f00]
0527ef0a  MOV EDX,0x1
0527ef0f  CALL 0x0cc41df0
0527ef14  MOV qword ptr [RSP + 0x170],RAX
0527ef1c  MOV RAX,qword ptr [RSP + 0x70]
0527ef21  SHL EAX,0x4
0527ef24  MOV qword ptr [RSP + 0x70],RAX
0527ef29  MOV RAX,qword ptr [RSP + 0x68]
0527ef2e  SHL EAX,0x4
0527ef31  MOV qword ptr [RSP + 0x68],RAX
0527ef36  MOV dword ptr [RSP + 0x2c],0x0
0527ef3e  XOR EAX,EAX
0527ef40  LEA RCX,[RAX*0x4]
0527ef48  MOV qword ptr [RSP + 0x150],RCX
0527ef50  LEA RCX,[RAX + RAX*0x4]
0527ef54  MOV qword ptr [RSP + 0xf8],RAX
0527ef5c  LEA RDX,[RAX + RAX*0x4]
0527ef60  ADD RDX,0x5
0527ef64  MOV dword ptr [RSP + 0x28],0x0
0527ef6c  XOR ESI,ESI
0527ef6e  MOV qword ptr [RSP + 0x108],RCX
0527ef76  MOV qword ptr [RSP + 0x100],RDX
0527ef7e  JMP 0x0527efaa
0527ef80  MOV RSI,qword ptr [RSP + 0x110]
0527ef88  INC RSI
0527ef8b  ADD dword ptr [RSP + 0x28],0x4
0527ef90  CMP RSI,0x4
0527ef94  MOV RCX,qword ptr [RSP + 0x108]
0527ef9c  MOV RDX,qword ptr [RSP + 0x100]
0527efa4  JZ 0x0527f551
0527efaa  LEA RAX,[RSI + RCX*0x1]
0527efae  LEA RCX,[RAX + RAX*0x4]
0527efb2  LEA RDI,[RAX + RCX*0x8]
0527efb6  MOV qword ptr [RSP + 0x130],RDI
0527efbe  LEA RAX,[RAX + RCX*0x8]
0527efc2  ADD RAX,0x29
0527efc6  MOV qword ptr [RSP + 0x128],RAX
0527efce  LEA RAX,[RDX + RSI*0x1]
0527efd2  LEA RCX,[RAX + RAX*0x4]
0527efd6  LEA RDX,[RAX + RCX*0x8]
0527efda  MOV qword ptr [RSP + 0x120],RDX
0527efe2  LEA RAX,[RAX + RCX*0x8 + 0x29]
0527efe7  MOV qword ptr [RSP + 0x118],RAX
0527efef  MOV qword ptr [RSP + 0x110],RSI
0527eff7  LEA EAX,[RSI*0x4]
0527effe  MOV qword ptr [RSP + 0x140],RAX
0527f006  MOV qword ptr [RSP + 0x18],0x0
0527f00f  MOV EAX,dword ptr [RSP + 0x84]
0527f016  MOV qword ptr [RSP + 0x78],RAX
0527f01b  XOR EDI,EDI
0527f01d  JMP 0x0527f04f
0527f020  MOV RDI,qword ptr [RSP + 0x138]
0527f028  INC RDI
0527f02b  MOV RAX,qword ptr [RSP + 0x78]
0527f030  ADD EAX,0x8
0527f033  MOV qword ptr [RSP + 0x78],RAX
0527f038  MOV RAX,qword ptr [RSP + 0x18]
0527f03d  ADD EAX,0x8
0527f040  MOV qword ptr [RSP + 0x18],RAX
0527f045  CMP RDI,0x10
0527f049  JZ 0x0527ef80
0527f04f  MOV RAX,qword ptr [RSP + 0x130]
0527f057  LEA RDX,[RDI + RAX*0x1]
0527f05b  MOV RAX,qword ptr [RSP + 0x128]
0527f063  LEA RCX,[RAX + RDI*0x1]
0527f067  MOV RAX,qword ptr [RSP + 0x120]
0527f06f  LEA RSI,[RDI + RAX*0x1]
0527f073  MOV RAX,qword ptr [RSP + 0x118]
0527f07b  MOV qword ptr [RSP + 0x138],RDI
0527f083  ADD RAX,RDI
0527f086  CMP byte ptr [RSP + 0x24],0x0
0527f08b  JZ 0x0527f150
0527f091  MOVSS XMM0,dword ptr [RSP + RDX*0x4 + 0x11e4]
0527f09a  UCOMISS XMM0,dword ptr [0x011988ac]
0527f0a1  JNZ 0x0527f150
0527f0a7  JP 0x0527f150
0527f0ad  MOVSS XMM0,dword ptr [RSP + RCX*0x4 + 0x11e4]
0527f0b6  UCOMISS XMM0,dword ptr [0x011988ac]
0527f0bd  JNZ 0x0527f150
0527f0c3  JP 0x0527f150
0527f0c9  MOVSS XMM0,dword ptr [RSP + RSI*0x4 + 0x11e4]
0527f0d2  UCOMISS XMM0,dword ptr [0x011988ac]
0527f0d9  JNZ 0x0527f150
0527f0db  JP 0x0527f150
0527f0dd  MOVSS XMM0,dword ptr [RSP + RAX*0x4 + 0x11e4]
0527f0e6  UCOMISS XMM0,dword ptr [0x011988ac]
0527f0ed  JNZ 0x0527f150
0527f0ef  JP 0x0527f150
0527f0f1  MOVSS XMM0,dword ptr [RSP + RDX*0x4 + 0x11e8]
0527f0fa  UCOMISS XMM0,dword ptr [0x011988ac]
0527f101  JNZ 0x0527f150
0527f103  JP 0x0527f150
0527f105  MOVSS XMM0,dword ptr [RSP + RCX*0x4 + 0x11e8]
0527f10e  UCOMISS XMM0,dword ptr [0x011988ac]
0527f115  JNZ 0x0527f150
0527f117  JP 0x0527f150
0527f119  MOVSS XMM0,dword ptr [RSP + RSI*0x4 + 0x11e8]
0527f122  UCOMISS XMM0,dword ptr [0x011988ac]
0527f129  JNZ 0x0527f150
0527f12b  JP 0x0527f150
0527f12d  MOVSS XMM0,dword ptr [RSP + RAX*0x4 + 0x11e8]
0527f136  UCOMISS XMM0,dword ptr [0x011988ac]
0527f13d  JNZ 0x0527f150
0527f13f  JNP 0x0527f020
0527f145  NOP dword ptr CS:[RAX + RAX*0x1]
0527f150  MOV RDI,qword ptr [R12]
0527f154  MOV R8,qword ptr [RDI]
0527f157  CMP R8,RDX
0527f15a  JBE 0x0527f5cf
0527f160  MOV R9,qword ptr [RDI + 0x8]
0527f164  MOVSS XMM0,dword ptr [R9 + RDX*0x4]
0527f16a  MOVSS dword ptr [RDI + 0x10],XMM0
0527f16f  CMP R8,RSI
0527f172  JBE 0x0527f5cf
0527f178  MOVSS XMM0,dword ptr [R9 + RSI*0x4]
0527f17e  MOVSS dword ptr [RDI + 0x14],XMM0
0527f183  MOVSS XMM0,dword ptr [R9 + RCX*0x4]
0527f189  MOVSS dword ptr [RDI + 0x18],XMM0
0527f18e  CMP R8,RAX
0527f191  JBE 0x0527f5cf
0527f197  LEA R10,[RAX + 0x1]
0527f19b  MOVSS XMM0,dword ptr [R9 + RAX*0x4]
0527f1a1  MOVSS dword ptr [RDI + 0x1c],XMM0
0527f1a6  MOVSS XMM0,dword ptr [R9 + RDX*0x4 + 0x4]
0527f1ad  MOVSS dword ptr [RDI + 0x20],XMM0
0527f1b2  MOVSS XMM0,dword ptr [R9 + RSI*0x4 + 0x4]
0527f1b9  MOVSS dword ptr [RDI + 0x24],XMM0
0527f1be  MOVSS XMM0,dword ptr [R9 + RCX*0x4 + 0x4]
0527f1c5  MOVSS dword ptr [RDI + 0x28],XMM0
0527f1ca  CMP R8,R10
0527f1cd  JBE 0x0527f5cf
0527f1d3  MOVSS XMM0,dword ptr [R9 + RAX*0x4 + 0x4]
0527f1da  MOVSS dword ptr [RDI + 0x2c],XMM0
0527f1df  XOR ECX,ECX
0527f1e1  MOV R15D,dword ptr [RSP + 0x28]
0527f1e6  JMP 0x0527f206
0527f1f0  MOV RCX,qword ptr [RSP + 0x148]
0527f1f8  INC ECX
0527f1fa  INC R15D
0527f1fd  CMP ECX,0x4
0527f200  JZ 0x0527f020
0527f206  XORPS XMM0,XMM0
0527f209  CVTSI2SS XMM0,ECX
0527f20d  MOV RAX,qword ptr [R12]
0527f211  MULSS XMM0,dword ptr [RAX + 0x4c]
0527f216  MOVSD XMM1,qword ptr [RAX + 0x10]
0527f21b  MOVSD XMM2,qword ptr [RAX + 0x18]
0527f220  MOVSD XMM3,qword ptr [RAX + 0x20]
0527f225  MOVSD XMM4,qword ptr [RAX + 0x28]
0527f22a  SUBPS XMM2,XMM1
0527f22d  SUBPS XMM4,XMM3
0527f230  MOVLHPS XMM2,XMM4
0527f233  SHUFPS XMM0,XMM0,0x0
0527f237  MULPS XMM0,XMM2
0527f23a  MOVLHPS XMM1,XMM3
0527f23d  ADDPS XMM1,XMM0
0527f240  MOVUPS xmmword ptr [RAX + 0x30],XMM1
0527f244  MOV RAX,qword ptr [RSP + 0x140]
0527f24c  MOV qword ptr [RSP + 0x148],RCX
0527f254  ADD EAX,ECX
0527f256  MOV RCX,qword ptr [RSP + 0x68]
0527f25b  ADD ECX,EAX
0527f25d  MOV dword ptr [RSP + 0x98],ECX
0527f264  IMUL EAX,dword ptr [R14 + 0x10]
0527f269  CDQE
0527f26b  MOV qword ptr [RSP + 0x160],RAX
0527f273  MOV R13D,dword ptr [RSP + 0x2c]
0527f278  XOR ECX,ECX
0527f27a  JMP 0x0527f298
0527f280  MOV RCX,qword ptr [RSP + 0x158]
0527f288  INC RCX
0527f28b  INC R13D
0527f28e  CMP RCX,0x4
0527f292  JZ 0x0527f1f0
0527f298  MOVZX EAX,CL
0527f29b  XORPS XMM0,XMM0
0527f29e  CVTSI2SS XMM0,EAX
0527f2a2  MOV RAX,qword ptr [R12]
0527f2a6  MULSS XMM0,dword ptr [RAX + 0x4c]
0527f2ab  MOVUPS XMM1,xmmword ptr [RAX + 0x30]
0527f2af  MOVAPS XMM2,XMM1
0527f2b2  SHUFPS XMM2,XMM1,0xed
0527f2b6  SHUFPS XMM1,XMM1,0xe8
0527f2ba  SUBPS XMM2,XMM1
0527f2bd  UNPCKLPS XMM0,XMM0
0527f2c0  MULPS XMM0,XMM2
0527f2c3  ADDPS XMM0,XMM1
0527f2c6  MOVLPS qword ptr [RAX + 0x40],XMM0
0527f2ca  MOV RAX,qword ptr [RSP + 0x150]
0527f2d2  MOV qword ptr [RSP + 0x158],RCX
0527f2da  ADD RCX,RAX
0527f2dd  MOV RAX,qword ptr [RSP + 0x70]
0527f2e2  MOV qword ptr [RSP + 0x168],RCX
0527f2ea  ADD EAX,ECX
0527f2ec  MOV dword ptr [RSP + 0x90],EAX
0527f2f3  XOR EBX,EBX
0527f2f5  JMP 0x0527f310
0527f300  INC EBX
0527f302  CMP EBX,0x8
0527f305  MOV R12,qword ptr [RSP + 0x10]
0527f30a  JZ 0x0527f280
0527f310  MOVSX EAX,BX
0527f313  XORPS XMM0,XMM0
0527f316  CVTSI2SS XMM0,EAX
0527f31a  MOV RAX,qword ptr [R12]
0527f31e  MULSS XMM0,dword ptr [RAX + 0x50]
0527f323  MOVSS XMM1,dword ptr [RAX + 0x40]
0527f328  MOVSS XMM2,dword ptr [RAX + 0x44]
0527f32d  SUBSS XMM2,XMM1
0527f331  MULSS XMM2,XMM0
0527f335  ADDSS XMM2,XMM1
0527f339  MOVSS dword ptr [RAX + 0x48],XMM2
0527f33e  MOVSS XMM3,dword ptr [RSP + 0x1c8]
0527f347  MULSS XMM3,dword ptr [0x01198cf8]
0527f34f  MOVSS XMM2,dword ptr [0x011983f0]
0527f357  MOVAPS XMM0,XMM2
0527f35a  CMPLTSS XMM0,XMM3
0527f35f  MAXSS XMM3,dword ptr [0x011985d4]
0527f367  MOVAPS XMM1,XMM0
0527f36a  ANDPS XMM1,XMM2
0527f36d  ANDNPS XMM0,XMM3
0527f370  ORPS XMM0,XMM1
0527f373  MOVAPS XMM1,XMM0
0527f376  MULSS XMM1,XMM0
0527f37a  MULSS XMM1,XMM0
0527f37e  DIVSS XMM1,dword ptr [0x01198350]
0527f386  MOV EBP,dword ptr [R14 + 0x18]
0527f38a  IMUL EBP,R13D
0527f38e  ADD EBP,R15D
0527f391  IMUL EBP,dword ptr [R14 + 0x14]
0527f396  MULSS XMM0,dword ptr [0x011986e0]
0527f39e  MOV RAX,qword ptr [RSP + 0x18]
0527f3a3  ADD EAX,EBX
0527f3a5  ADD EBP,EAX
0527f3a7  CMP EBP,dword ptr [RSP + 0x8c]
0527f3ae  JNC 0x0527f300
0527f3b4  ADDSS XMM0,XMM1
0527f3b8  MOV RAX,qword ptr [RSP + 0x78]
0527f3bd  ADD EAX,EBX
0527f3bf  MOV dword ptr [RSP + 0x94],EAX
0527f3c6  CMP byte ptr [RSP + 0xf],0x0
0527f3cb  JZ 0x0527f429
0527f3cd  MOV RSI,qword ptr [RSP + 0x90]
0527f3d5  MOV EDX,dword ptr [RSP + 0x98]
0527f3dc  LEA RDI,[RSP + 0x30]
0527f3e1  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
0527f3e9  CALL 0x0d2f06a0
0527f3ee  MOVAPS XMM1,xmmword ptr [RSP + 0xe0]
0527f3f6  CVTSS2SD XMM1,XMM1
0527f3fa  ADDSD XMM0,XMM1
0527f3fe  CVTSD2SS XMM0,XMM0
0527f402  LEA RDI,[RSP + 0x1e0]
0527f40a  LEA RSI,[RSP + 0x90]
0527f412  MOVSS dword ptr [RSP + 0xe0],XMM0
0527f41b  CALL 0x0d2ee730
0527f420  ADDSS XMM0,dword ptr [RSP + 0xe0]
0527f429  UCOMISS XMM0,dword ptr [0x011983fc]
0527f430  MOV R12,qword ptr [RSP + 0x178]
0527f438  JA 0x0527f4a4
0527f43a  MOV R12,qword ptr [RSP + 0x170]
0527f442  MOV EAX,dword ptr [RSP + 0x88]
0527f449  CMP dword ptr [RSP + 0x94],EAX
0527f450  JL 0x0527f4a4
0527f452  CMP qword ptr [0x0f6ffb10],0x0
0527f45a  JNZ 0x0527f493
0527f45c  LEA RDI,[0x13a28c0]
0527f463  LEA RSI,[0x11e3821]
0527f46a  MOV EDX,0x2fd
0527f46f  LEA RCX,[0x13a2868]
0527f476  LEA R8,[0x13a2901]
0527f47d  XOR EAX,EAX
0527f47f  CALL 0x0eeddcf0
0527f484  TEST AL,AL
0527f486  JZ 0x0527f493
0527f488  MOV dword ptr [0x00000000],0xdeadc0de
0527f493  MOV RAX,qword ptr [0x0f6ffb10]
0527f49a  MOV RAX,qword ptr [RAX]
0527f49d  MOV R12,qword ptr [RAX + 0x200]
0527f4a4  MOV RAX,qword ptr [R14]
0527f4a7  MOV ECX,EBP
0527f4a9  MOV qword ptr [RAX + RCX*0x8],R12
0527f4ad  CMP qword ptr [RSP + 0x2228],0x0
0527f4b6  JZ 0x0527f300
0527f4bc  CMP qword ptr [0x0f6ffb10],0x0
0527f4c4  JNZ 0x0527f500
0527f4c6  LEA RDI,[0x13a28c0]
0527f4cd  LEA RSI,[0x11e3821]
0527f4d4  MOV EDX,0x2fd
0527f4d9  LEA RCX,[0x13a2868]
0527f4e0  LEA R8,[0x13a2901]
0527f4e7  XOR EAX,EAX
0527f4e9  CALL 0x0eeddcf0
0527f4ee  TEST AL,AL
0527f4f0  JZ 0x0527f500
0527f4f2  MOV dword ptr [0x00000000],0xdeadc0de
0527f4fd  NOP dword ptr [RAX]
0527f500  MOV RAX,qword ptr [0x0f6ffb10]
0527f507  MOV RAX,qword ptr [RAX]
0527f50a  CMP R12,qword ptr [RAX + 0x200]
0527f511  JZ 0x0527f300
0527f517  MOV RAX,qword ptr [RSP + 0x168]
0527f51f  ADD RAX,RAX
0527f522  MOV RCX,qword ptr [RSP + 0x2228]
0527f52a  ADD RAX,qword ptr [RCX]
0527f52d  MOV ECX,dword ptr [RSP + 0x94]
0527f534  INC ECX
0527f536  MOV RSI,qword ptr [RSP + 0x160]
0527f53e  MOVZX EDX,word ptr [RAX + RSI*0x2]
0527f542  CMP DX,CX
0527f545  CMOVG ECX,EDX
0527f548  MOV word ptr [RAX + RSI*0x2],CX
0527f54c  JMP 0x0527f300
0527f551  MOV RAX,qword ptr [RSP + 0xf8]
0527f559  INC RAX
0527f55c  ADD dword ptr [RSP + 0x2c],0x4
0527f561  CMP RAX,0x4
0527f565  JNZ 0x0527ef40
0527f56b  MOV RDI,qword ptr [RSP + 0x48]
0527f570  TEST RDI,RDI
0527f573  JZ 0x0527f587
0527f575  MOV qword ptr [RSP + 0x50],RDI
0527f57a  MOV RSI,qword ptr [RSP + 0x58]
0527f57f  SUB RSI,RDI
0527f582  CALL 0x0412a280
0527f587  MOV RDI,qword ptr [RSP + 0x30]
0527f58c  TEST RDI,RDI
0527f58f  JZ 0x0527f5a3
0527f591  MOV qword ptr [RSP + 0x38],RDI
0527f596  MOV RSI,qword ptr [RSP + 0x40]
0527f59b  SUB RSI,RDI
0527f59e  CALL 0x0412a280
0527f5a3  LEA RDI,[RSP + 0x1e0]
0527f5ab  CALL 0x0d2ecea0
0527f5b0  MOV ESI,0x40
0527f5b5  MOV RDI,R12
0527f5b8  CALL 0x0412a280
0527f5bd  ADD RSP,0x21e8
0527f5c4  POP RBX
0527f5c5  POP R12
0527f5c7  POP R13
0527f5c9  POP R14
0527f5cb  POP R15
0527f5cd  POP RBP
0527f5ce  RET
0527f5cf  CALL 0x04890760
0527f5d4  LEA RDI,[RBX + 0xd1]
0527f5db  TEST CL,0x1
0527f5de  JZ 0x0527eea0
0527f5e4  MOV RSI,qword ptr [0x0f6eaed8]
0527f5eb  CALL 0x0eee3000
0527f5f0  TEST EAX,EAX
0527f5f2  JNZ 0x0527eeb4
0527f5f8  MOV qword ptr [RBX + 0xe8],R12
0527f5ff  MOV qword ptr [0x0f6eaee0],R15
0527f606  JMP 0x0527eec7
0527f60b  MOV EDI,0x8
0527f610  XOR ESI,ESI
0527f612  CALL 0x0eec74c0
0527f617  JMP 0x0527ebc9
0527f61c  MOV EDI,0x40
0527f621  XOR ESI,ESI
0527f623  CALL 0x0eec74c0
0527f628  JMP 0x0527ebf7
```

## `0529bcd0` — OverworldGenerator2d slot 0

- Ghidra name: `FUN_0529bcd0`
- Body: `[[0529bcd0, 0529bcd8]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0529bcd0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1 + -0xe;
  plVar6 = (long *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  lVar2 = param_1[0x37];
  param_1[0x37] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x34];
  param_1[0x34] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x33];
  param_1[0x33] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x30];
  param_1[0x30] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  *puVar7 = &UNK_0ef9d2a0;
  *param_1 = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x1a);
  *puVar7 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *puVar7 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar7 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
0529bcd0  ADD RDI,-0x70
0529bcd4  JMP 0x0529ba70
```

## `0529bce0` — OverworldGenerator2d slot 1

- Ghidra name: `FUN_0529bce0`
- Body: `[[0529bce0, 0529bcfd]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0529bce0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x70;
  uVar1 = FUN_0529ba70(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

### Assembly

```asm
0529bce0  PUSH RBX
0529bce1  MOV RBX,RDI
0529bce4  ADD RBX,-0x70
0529bce8  MOV RDI,RBX
0529bceb  CALL 0x0529ba70
0529bcf0  MOV ESI,0x240
0529bcf5  MOV RDI,RBX
0529bcf8  POP RBX
0529bcf9  JMP 0x0412a280
```

## `05286800` — OverworldGeneratorMultinoise slot 0

- Ghidra name: `FUN_05286800`
- Body: `[[05286800, 05286925]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_05286800(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  lVar2 = param_1[0x195];
  param_1[0x195] = 0;
  if (lVar2 != 0) {
    func_0x049db610(lVar2);
    func_0x0412a280(lVar2,0xd0);
  }
  plVar6 = (long *)param_1[0x194];
  param_1[0x194] = 0;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar6[1] = lVar2;
      func_0x0412a280(lVar2,plVar6[2] - lVar2);
    }
    func_0x0412a280(plVar6,0x28);
  }
  lVar2 = param_1[0x193];
  param_1[0x193] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x192];
  param_1[0x192] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,0x10);
  }
  plVar6 = (long *)param_1[0x191];
  param_1[0x191] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x05286720(param_1 + 0x3e);
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x28);
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar5 = (undefined8 *)param_1[0x1e];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar6 = (long *)param_1[2];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
05286800  PUSH R14
05286802  PUSH RBX
05286803  PUSH RAX
05286804  MOV RBX,RDI
05286807  MOV R14,qword ptr [RDI + 0xca8]
0528680e  MOV qword ptr [RDI + 0xca8],0x0
05286819  TEST R14,R14
0528681c  JZ 0x05286833
0528681e  MOV RDI,R14
05286821  CALL 0x049db610
05286826  MOV ESI,0xd0
0528682b  MOV RDI,R14
0528682e  CALL 0x0412a280
05286833  MOV R14,qword ptr [RBX + 0xca0]
0528683a  MOV qword ptr [RBX + 0xca0],0x0
05286845  TEST R14,R14
05286848  JZ 0x0528686f
0528684a  MOV RDI,qword ptr [R14]
0528684d  TEST RDI,RDI
05286850  JZ 0x05286862
05286852  MOV qword ptr [R14 + 0x8],RDI
05286856  MOV RSI,qword ptr [R14 + 0x10]
0528685a  SUB RSI,RDI
0528685d  CALL 0x0412a280
05286862  MOV ESI,0x28
05286867  MOV RDI,R14
0528686a  CALL 0x0412a280
0528686f  MOV R14,qword ptr [RBX + 0xc98]
05286876  MOV qword ptr [RBX + 0xc98],0x0
05286881  TEST R14,R14
05286884  JZ 0x052868ac
05286886  MOV RDI,qword ptr [R14 + 0x8]
0528688a  TEST RDI,RDI
0528688d  JZ 0x0528689f
0528688f  MOV qword ptr [R14 + 0x10],RDI
05286893  MOV RSI,qword ptr [R14 + 0x18]
05286897  SUB RSI,RDI
0528689a  CALL 0x0412a280
0528689f  MOV ESI,0x28
052868a4  MOV RDI,R14
052868a7  CALL 0x0412a280
052868ac  MOV RDI,qword ptr [RBX + 0xc90]
052868b3  MOV qword ptr [RBX + 0xc90],0x0
052868be  TEST RDI,RDI
052868c1  JZ 0x052868cd
052868c3  MOV ESI,0x10
052868c8  CALL 0x0412a280
052868cd  MOV RDI,qword ptr [RBX + 0xc88]
052868d4  MOV qword ptr [RBX + 0xc88],0x0
052868df  TEST RDI,RDI
052868e2  JZ 0x052868ea
052868e4  MOV RAX,qword ptr [RDI]
052868e7  CALL qword ptr [RAX + 0x8]
052868ea  LEA RDI,[RBX + 0x1f0]
052868f1  CALL 0x05286720
052868f6  LEA RAX,[0xef9d2a0]
052868fd  MOV qword ptr [RBX],RAX
05286900  LEA RAX,[0xef9d4b8]
05286907  MOV qword ptr [RBX + 0x70],RAX
0528690b  LEA RDI,[RBX + 0x140]
05286912  CALL 0x0527a590
05286917  MOV RDI,RBX
0528691a  ADD RSP,0x8
0528691e  POP RBX
0528691f  POP R14
05286921  JMP 0x0ca70460
```

## `05286940` — OverworldGeneratorMultinoise slot 1

- Ghidra name: `FUN_05286940`
- Body: `[[05286940, 05286956]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05286940(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_05286800();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

### Assembly

```asm
05286940  PUSH RBX
05286941  MOV RBX,RDI
05286944  CALL 0x05286800
05286949  MOV ESI,0xcb0
0528694e  MOV RDI,RBX
05286951  POP RBX
05286952  JMP 0x0412a280
```

## `05293840` — OverworldGeneratorMultinoise slot 39

- Ghidra name: `OverworldGeneratorMultinoise__chunkPosNeedsBlending`
- Body: `[[05293840, 0529389a]]`

### Pseudocode

```c

bool OverworldGeneratorMultinoise__chunkPosNeedsBlending(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  long *plStack_18;
  
  FUN_0525af30(&lStack_20,*(undefined8 *)(param_1 + 0xca8),param_2);
  if (plStack_18 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_18 + 0x10))(plStack_18);
      func_0x0412c2d0(plStack_18);
    }
  }
  return lStack_20 != 0;
}


```

### Assembly

```asm
05293840  PUSH R14
05293842  PUSH RBX
05293843  SUB RSP,0x18
05293847  MOV RDX,RSI
0529384a  MOV RSI,qword ptr [RDI + 0xca8]
05293851  LEA RDI,[RSP + 0x8]
05293856  CALL 0x0525af30
0529385b  MOV R14,qword ptr [RSP + 0x8]
05293860  MOV RBX,qword ptr [RSP + 0x10]
05293865  TEST RBX,RBX
05293868  JZ 0x0529388d
0529386a  MOV RAX,-0x1
05293871  XADD.LOCK qword ptr [RBX + 0x8],RAX
05293877  TEST RAX,RAX
0529387a  JNZ 0x0529388d
0529387c  MOV RAX,qword ptr [RBX]
0529387f  MOV RDI,RBX
05293882  CALL qword ptr [RAX + 0x10]
05293885  MOV RDI,RBX
05293888  CALL 0x0412c2d0
0529388d  TEST R14,R14
05293890  SETNZ AL
05293893  ADD RSP,0x18
05293897  POP RBX
05293898  POP R14
0529389a  RET
```

## `05286a80` — OverworldGeneratorMultinoise slot 40

- Ghidra name: `OverworldGeneratorMultinoise___clearBlendingCache`
- Body: `[[0525ae50, 0525ae78] [0525ae80, 0525af02] [05286a80, 05286a8b]]`

### Pseudocode

```c

void OverworldGeneratorMultinoise___clearBlendingCache(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0xca8);
  func_0x0412d450(puVar5 + 5);
  if (puVar5[3] != 0) {
    puVar6 = (undefined8 *)puVar5[2];
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      plVar4 = (long *)puVar6[4];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          func_0x0412c2d0(plVar4);
        }
      }
      func_0x0412a280(puVar6);
      puVar6 = puVar3;
    }
    puVar5[2] = 0;
    if (puVar5[1] != 0) {
      func_0x0eee2dd0(*puVar5,0,puVar5[1] << 3);
    }
    puVar5[3] = 0;
  }
  func_0x0412d520(puVar5 + 5);
  return;
}


```

### Assembly

```asm
0525ae50  PUSH R15
0525ae52  PUSH R14
0525ae54  PUSH R13
0525ae56  PUSH R12
0525ae58  PUSH RBX
0525ae59  MOV R14,RDI
0525ae5c  LEA RBX,[RDI + 0x28]
0525ae60  MOV RDI,RBX
0525ae63  CALL 0x0412d450
0525ae68  CMP qword ptr [R14 + 0x18],0x0
0525ae6d  JZ 0x0525aef1
0525ae73  MOV R12,qword ptr [R14 + 0x10]
0525ae77  JMP 0x0525ae8a
0525ae80  MOV ESI,0x28
0525ae85  CALL 0x0412a280
0525ae8a  TEST R12,R12
0525ae8d  JZ 0x0525aeca
0525ae8f  MOV RDI,R12
0525ae92  MOV R12,qword ptr [R12]
0525ae96  MOV R15,qword ptr [RDI + 0x20]
0525ae9a  TEST R15,R15
0525ae9d  JZ 0x0525ae80
0525ae9f  MOV RAX,-0x1
0525aea6  XADD.LOCK qword ptr [R15 + 0x8],RAX
0525aeac  TEST RAX,RAX
0525aeaf  JNZ 0x0525ae80
0525aeb1  MOV RAX,qword ptr [R15]
0525aeb4  MOV R13,RDI
0525aeb7  MOV RDI,R15
0525aeba  CALL qword ptr [RAX + 0x10]
0525aebd  MOV RDI,R15
0525aec0  CALL 0x0412c2d0
0525aec5  MOV RDI,R13
0525aec8  JMP 0x0525ae80
0525aeca  MOV qword ptr [R14 + 0x10],0x0
0525aed2  MOV RDX,qword ptr [R14 + 0x8]
0525aed6  TEST RDX,RDX
0525aed9  JZ 0x0525aee9
0525aedb  MOV RDI,qword ptr [R14]
0525aede  SHL RDX,0x3
0525aee2  XOR ESI,ESI
0525aee4  CALL 0x0eee2dd0
0525aee9  MOV qword ptr [R14 + 0x18],0x0
0525aef1  MOV RDI,RBX
0525aef4  CALL 0x0412d520
0525aef9  POP RBX
0525aefa  POP R12
0525aefc  POP R13
0525aefe  POP R14
0525af00  POP R15
0525af02  RET
05286a80  MOV RDI,qword ptr [RDI + 0xca8]
05286a87  JMP 0x0525ae50
```

## `0528a520` — OverworldGeneratorMultinoise slot 49

- Ghidra name: `OverworldGeneratorMultinoise__getBiomeSource`
- Body: `[[0528a520, 0528a527]]`

### Pseudocode

```c

undefined8 OverworldGeneratorMultinoise__getBiomeSource(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc88);
}


```

### Assembly

```asm
0528a520  MOV RAX,qword ptr [RDI + 0xc88]
0528a527  RET
```

## `05288770` — OverworldGeneratorMultinoise slot 51

- Ghidra name: `OverworldGeneratorMultinoise__findSpawnPosition`
- Body: `[[05288770, 05288ab7]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] OverworldGeneratorMultinoise__findSpawnPosition(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (_DAT_0f5566f0 == 1) {
    puStack_b8 = &UNK_0f1e0e30;
    lStack_b0 = 0xf5566f8;
    plStack_98 = (long *)&puStack_b8;
    auVar6 = func_0x09c7abc0(0,0,*(undefined8 *)(param_1 + 0x28),&puStack_b8);
    if ((undefined **)plStack_98 == &puStack_b8) {
      lVar4 = 0x20;
LAB_052887e8:
      (**(code **)(*plStack_98 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (plStack_98 != (long *)0x0) goto LAB_052887e8;
    }
    if ((auVar6._8_8_ >> 0x20 & 1) != 0) goto LAB_05288a7e;
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0xa0) + 0x568))();
  if ((*(char *)(lVar4 + 0x77) == '\0') &&
     ((*(char *)(lVar4 + 0x68) != '\0' || ((*(byte *)(lVar4 + 0x56) & 1) != 0)))) {
    func_0x04fa7a10(lVar4 + 0x70,lVar4 + 0x50);
  }
  uVar3 = _DAT_0f5568f8;
  uVar1 = CONCAT44(uRam000000000f556744,_DAT_0f556740);
  uVar2 = CONCAT44(uRam000000000f55674c,_DAT_0f556748);
  uStack_48 = _DAT_0f556740;
  uStack_44 = uRam000000000f556744;
  uStack_40 = _DAT_0f556748;
  uStack_3c = uRam000000000f55674c;
  uStack_88 = _DAT_0f556740;
  uStack_84 = uRam000000000f556744;
  uStack_80 = _DAT_0f556748;
  uStack_7c = uRam000000000f55674c;
  uStack_68 = _DAT_0f556740;
  uStack_64 = uRam000000000f556744;
  uStack_60 = _DAT_0f556748;
  uStack_5c = uRam000000000f55674c;
  uStack_58 = _DAT_0f556740;
  uStack_54 = uRam000000000f556744;
  uStack_50 = _DAT_0f556748;
  uStack_4c = uRam000000000f55674c;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  puVar5[4] = uVar3;
  puVar5[5] = uVar2;
  puVar5[6] = CONCAT44(uStack_84,uStack_88);
  puVar5[7] = CONCAT44(uStack_7c,uStack_80);
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0xffffffffffffd8f0;
  puVar5[0xb] = 0xfffffffffffff9c1;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar1;
  puVar5[0xe] = uVar2;
  puVar5[0xf] = uVar1;
  puVar5[0x10] = uVar2;
  puVar5[0x11] = uVar3;
  puVar5[0x12] = uVar2;
  puVar5[0x13] = CONCAT44(uStack_44,uStack_48);
  puVar5[0x14] = CONCAT44(uStack_3c,uStack_40);
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0xffffffffffffd8f0;
  puVar5[0x18] = 0xfffffffffffff9c1;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = uVar1;
  puVar5[0x1c] = uVar2;
  puVar5[0x1d] = uVar1;
  puVar5[0x1e] = uVar2;
  puVar5[0x1f] = uVar3;
  puVar5[0x20] = uVar2;
  puVar5[0x21] = CONCAT44(uStack_54,uStack_58);
  puVar5[0x22] = CONCAT44(uStack_4c,uStack_50);
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0x63f;
  puVar5[0x26] = 10000;
  puVar5[0x27] = 0;
  puVar5[0x28] = uVar1;
  puVar5[0x29] = uVar2;
  puVar5[0x2a] = uVar1;
  puVar5[0x2b] = uVar2;
  puVar5[0x2c] = uVar3;
  puVar5[0x2d] = uVar2;
  *(uint *)(puVar5 + 0x2e) = uStack_68;
  *(undefined4 *)((long)puVar5 + 0x174) = uStack_64;
  *(undefined4 *)(puVar5 + 0x2f) = uStack_60;
  *(undefined4 *)((long)puVar5 + 0x17c) = uStack_5c;
  puVar5[0x30] = 0;
  puVar5[0x31] = 0;
  puVar5[0x32] = 0x63f;
  puVar5[0x33] = 10000;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  lStack_b0 = *(long *)(param_1 + 0x28) + 0xa8;
  puStack_b8 = (undefined *)(param_1 + 0x908);
  lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (lVar4 == 0) {
    func_0x0eec74c0(0x1b0,0);
  }
  lStack_a8 = lVar4;
  plStack_98 = (long *)(lVar4 + 0x1b0);
  func_0x0eee2f00(lVar4,puVar5,0x1b0);
  lStack_a0 = lVar4 + 0x1b0;
  func_0x0412a280(puVar5,0x1b0);
  func_0x04a43200(&uStack_88,&puStack_b8);
  auVar6._8_4_ = uStack_80;
  auVar6._0_8_ = (ulong)uStack_88 | 0x7fff00000000;
  auVar6._12_4_ = 0;
  func_0x0412a280(lVar4,0x1b0);
LAB_05288a7e:
  auVar7._8_8_ = auVar6._8_8_ & 0xffffffff;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}


```

### Assembly

```asm
05288770  PUSH RBP
05288771  PUSH R15
05288773  PUSH R14
05288775  PUSH R13
05288777  PUSH R12
05288779  PUSH RBX
0528877a  SUB RSP,0x88
05288781  MOV RBX,RDI
05288784  CMP word ptr [0x0f5566f0],0x1
0528878c  JNZ 0x052887f9
0528878e  MOV RDX,qword ptr [RBX + 0x28]
05288792  LEA RAX,[0xf1e0e30]
05288799  MOV qword ptr [RSP],RAX
0528879d  LEA RAX,[0xf5566f8]
052887a4  MOV qword ptr [RSP + 0x8],RAX
052887a9  MOV R13,RSP
052887ac  MOV qword ptr [RSP + 0x20],R13
052887b1  XOR EDI,EDI
052887b3  XOR ESI,ESI
052887b5  MOV RCX,R13
052887b8  CALL 0x09c7abc0
052887bd  MOV R15,RAX
052887c0  MOV R14,RDX
052887c3  MOV RDI,qword ptr [RSP + 0x20]
052887c8  CMP RDI,R13
052887cb  JZ 0x052887e3
052887cd  MOV EAX,0x28
052887d2  TEST RDI,RDI
052887d5  JNZ 0x052887e8
052887d7  BT R14,0x20
052887dc  JNC 0x052887f9
052887de  JMP 0x05288a7e
052887e3  MOV EAX,0x20
052887e8  MOV RCX,qword ptr [RDI]
052887eb  CALL qword ptr [RCX + RAX*0x1]
052887ee  BT R14,0x20
052887f3  JC 0x05288a7e
052887f9  MOV RAX,qword ptr [RBX + 0x28]
052887fd  MOV RDI,qword ptr [RAX + 0xa0]
05288804  MOV RAX,qword ptr [RDI]
05288807  CALL qword ptr [RAX + 0x568]
0528880d  CMP byte ptr [RAX + 0x77],0x0
05288811  JNZ 0x0528882f
05288813  CMP byte ptr [RAX + 0x68],0x0
05288817  JNZ 0x0528881f
05288819  TEST byte ptr [RAX + 0x56],0x1
0528881d  JZ 0x0528882f
0528881f  LEA RDI,[RAX + 0x70]
05288823  ADD RAX,0x50
05288827  MOV RSI,RAX
0528882a  CALL 0x04fa7a10
0528882f  MOV R13,qword ptr [0x0f556740]
05288836  MOV R12,qword ptr [0x0f556748]
0528883d  MOV RBP,qword ptr [0x0f5568f8]
05288844  MOVUPS XMM0,xmmword ptr [0x0f556740]
0528884b  MOVAPS xmmword ptr [RSP + 0x70],XMM0
05288850  MOVAPS xmmword ptr [RSP + 0x30],XMM0
05288855  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0528885a  MOVAPS xmmword ptr [RSP + 0x60],XMM0
0528885f  MOV RAX,qword ptr [0x0f5463b0]
05288866  LEA RDI,[0xf5463b0]
0528886d  MOV ESI,0x1b0
05288872  CALL qword ptr [RAX + 0x10]
05288875  MOV R15,RAX
05288878  TEST RAX,RAX
0528887b  JZ 0x05288a96
05288881  MOV R14,R15
05288884  ADD R14,0x1b0
0528888b  MOV qword ptr [R15],R13
0528888e  MOV qword ptr [R15 + 0x8],R12
05288892  MOV qword ptr [R15 + 0x10],R13
05288896  MOV qword ptr [R15 + 0x18],R12
0528889a  MOV qword ptr [R15 + 0x20],RBP
0528889e  MOV qword ptr [R15 + 0x28],R12
052888a2  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
052888a7  MOVUPS xmmword ptr [R15 + 0x30],XMM0
052888ac  XORPS XMM0,XMM0
052888af  MOVUPS xmmword ptr [R15 + 0x40],XMM0
052888b4  MOV qword ptr [R15 + 0x50],-0x2710
052888bc  MOV qword ptr [R15 + 0x58],-0x63f
052888c4  MOV qword ptr [R15 + 0x60],0x0
052888cc  MOV qword ptr [R15 + 0x68],R13
052888d0  MOV qword ptr [R15 + 0x70],R12
052888d4  MOV qword ptr [R15 + 0x78],R13
052888d8  MOV qword ptr [R15 + 0x80],R12
052888df  MOV qword ptr [R15 + 0x88],RBP
052888e6  MOV qword ptr [R15 + 0x90],R12
052888ed  MOVAPS XMM1,xmmword ptr [RSP + 0x70]
052888f2  MOVUPS xmmword ptr [R15 + 0x98],XMM1
052888fa  MOVUPS xmmword ptr [R15 + 0xa8],XMM0
05288902  MOV qword ptr [R15 + 0xb8],-0x2710
0528890d  MOV qword ptr [R15 + 0xc0],-0x63f
05288918  MOVUPS xmmword ptr [R15 + 0xc8],XMM0
05288920  MOV qword ptr [R15 + 0xd8],R13
05288927  MOV qword ptr [R15 + 0xe0],R12
0528892e  MOV qword ptr [R15 + 0xe8],R13
05288935  MOV qword ptr [R15 + 0xf0],R12
0528893c  MOV qword ptr [R15 + 0xf8],RBP
05288943  MOV qword ptr [R15 + 0x100],R12
0528894a  MOVAPS XMM1,xmmword ptr [RSP + 0x60]
0528894f  MOVUPS xmmword ptr [R15 + 0x108],XMM1
05288957  MOVUPS xmmword ptr [R15 + 0x118],XMM0
0528895f  MOV qword ptr [R15 + 0x128],0x63f
0528896a  MOV qword ptr [R15 + 0x130],0x2710
05288975  MOV qword ptr [R15 + 0x138],0x0
05288980  MOV qword ptr [R15 + 0x140],R13
05288987  MOV qword ptr [R15 + 0x148],R12
0528898e  MOV qword ptr [R15 + 0x150],R13
05288995  MOV qword ptr [R15 + 0x158],R12
0528899c  MOV qword ptr [R15 + 0x160],RBP
052889a3  MOV qword ptr [R15 + 0x168],R12
052889aa  MOVAPS XMM1,xmmword ptr [RSP + 0x50]
052889af  MOVUPS xmmword ptr [R15 + 0x170],XMM1
052889b7  MOVUPS xmmword ptr [R15 + 0x180],XMM0
052889bf  MOV qword ptr [R15 + 0x190],0x63f
052889ca  MOV qword ptr [R15 + 0x198],0x2710
052889d5  MOVUPS xmmword ptr [R15 + 0x1a0],XMM0
052889dd  MOV EAX,0xa8
052889e2  ADD RAX,qword ptr [RBX + 0x28]
052889e6  ADD RBX,0x908
052889ed  MOV qword ptr [RSP],RBX
052889f1  MOV qword ptr [RSP + 0x8],RAX
052889f6  LEA RDI,[0xf5463b0]
052889fd  MOV RAX,qword ptr [0x0f5463b0]
05288a04  MOV ESI,0x1b0
05288a09  CALL qword ptr [RAX + 0x10]
05288a0c  MOV RBX,RAX
05288a0f  TEST RAX,RAX
05288a12  JZ 0x05288aa7
05288a18  MOV qword ptr [RSP + 0x10],RBX
05288a1d  MOV R14,RBX
05288a20  ADD R14,0x1b0
05288a27  MOV qword ptr [RSP + 0x20],R14
05288a2c  MOV EDX,0x1b0
05288a31  MOV RDI,RBX
05288a34  MOV RSI,R15
05288a37  CALL 0x0eee2f00
05288a3c  MOV qword ptr [RSP + 0x18],R14
05288a41  MOV ESI,0x1b0
05288a46  MOV RDI,R15
05288a49  CALL 0x0412a280
05288a4e  LEA RDI,[RSP + 0x30]
05288a53  MOV RSI,RSP
05288a56  CALL 0x04a43200
05288a5b  MOV EAX,dword ptr [RSP + 0x30]
05288a5f  MOV R14D,dword ptr [RSP + 0x38]
05288a64  MOV R15,0x7fff00000000
05288a6e  OR R15,RAX
05288a71  MOV ESI,0x1b0
05288a76  MOV RDI,RBX
05288a79  CALL 0x0412a280
05288a7e  MOV RAX,R15
05288a81  MOV EDX,R14D
05288a84  ADD RSP,0x88
05288a8b  POP RBX
05288a8c  POP R12
05288a8e  POP R13
05288a90  POP R14
05288a92  POP R15
05288a94  POP RBP
05288a95  RET
05288a96  MOV EDI,0x1b0
05288a9b  XOR ESI,ESI
05288a9d  CALL 0x0eec74c0
05288aa2  JMP 0x05288881
05288aa7  MOV EDI,0x1b0
05288aac  XOR ESI,ESI
05288aae  CALL 0x0eec74c0
05288ab3  JMP 0x05288a18
```

## `052884e0` — OverworldGeneratorMultinoise slot 52

- Ghidra name: `OverworldGeneratorMultinoise__getPreliminarySurfaceLevel`
- Body: `[[052884e0, 05288739]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint OverworldGeneratorMultinoise__getPreliminarySurfaceLevel(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *in_FS_OFFSET;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uVar1 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  puStack_50 = &UNK_011b8ea4;
  puStack_48 = &UNK_0144800b;
  uStack_40 = uVar1;
  lVar4 = func_0x0417cc60();
  puStack_78 = param_2;
  lStack_38 = lVar4;
  FUN_052586c0(param_1 + 0x908,&puStack_78);
  uVar10 = FUN_05286980(param_2,*(undefined8 *)(param_1 + 0xca0),*(undefined8 *)(param_1 + 0xca8));
  iVar2 = (int)*(short *)(*(long *)(param_1 + 0x28) + 0xa8);
  iVar5 = iVar2 >> 0x1f;
  iVar2 = iVar5 - iVar2;
  iVar6 = (int)*(short *)(*(long *)(param_1 + 0x28) + 0xaa);
  iVar8 = iVar6 >> 0x1f;
  iVar6 = iVar8 - iVar6;
  iVar3 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar6 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar3 = (((iVar8 + (iVar6 >> 3)) - (iVar3 >> 3)) - iVar5) + -0x2f;
  uVar7 = (iVar5 - (iVar6 >> 3)) * 8 + 0x138;
  iVar2 = 0x28;
  while( true ) {
    fVar11 = ((float)(int)uVar7 * _DAT_01198698 + _DAT_011983f0 + (float)uVar10) *
             (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar11 * *(float *)(&UNK_014f0a50 + (ulong)(0.0 < fVar11) * 4) + _DAT_0119880c;
    fVar13 = (float)iVar3 * _DAT_011986e0;
    fVar11 = _DAT_01198aa4;
    if ((0.0 <= fVar13) && (fVar11 = fVar12, fVar13 <= _DAT_011983f0)) {
      fVar11 = (fVar12 + _DAT_01198400) * fVar13 + _DAT_01198aa4;
    }
    fVar12 = (float)(iVar2 - 1U & 0xff) / _DAT_01198af0;
    uVar9 = -(uint)(_DAT_011983f0 < fVar12);
    if (_DAT_01198690 <
        (float)(uVar9 & (uint)fVar11 |
               ~uVar9 & (uint)((fVar11 + _DAT_01198c1c) * fVar12 + _DAT_01198358))) break;
    iVar3 = iVar3 + 1;
    uVar7 = uVar7 - 8;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      uVar7 = 0x17fff;
LAB_052886ff:
      puStack_78 = &UNK_011b8ea4;
      puStack_70 = &UNK_0144800b;
      uStack_68 = uVar1;
      lStack_60 = func_0x0417cc60();
      lStack_60 = lStack_60 - lVar4;
      func_0x0cad8200(&puStack_78);
      return uVar7;
    }
  }
  uVar7 = uVar7 & 0xfff8 | 0x10000;
  goto LAB_052886ff;
}


```

### Assembly

```asm
052884e0  PUSH RBP
052884e1  PUSH R15
052884e3  PUSH R14
052884e5  PUSH R13
052884e7  PUSH R12
052884e9  PUSH RBX
052884ea  SUB RSP,0x48
052884ee  MOV R15,RSI
052884f1  MOV R14,RDI
052884f4  CMP qword ptr [0x0f53c8c0],0x0
052884fc  JZ 0x05288503
052884fe  CALL 0x0eee3820
05288503  MOV RAX,qword ptr FS:[0x0]
0528850f  MOVZX R12D,byte ptr [RAX + -0xb67]
05288517  LEA RAX,[0x11b8ea4]
0528851e  MOV qword ptr [RSP + 0x28],RAX
05288523  LEA R13,[0x144800b]
0528852a  MOV qword ptr [RSP + 0x30],R13
0528852f  MOV byte ptr [RSP + 0x38],R12B
05288534  CALL 0x0417cc60
05288539  MOV RBX,RAX
0528853c  MOV qword ptr [RSP + 0x40],RAX
05288541  MOV qword ptr [RSP],R15
05288545  LEA RDI,[R14 + 0x908]
0528854c  MOV RSI,RSP
0528854f  CALL 0x052586c0
05288554  MOV RSI,qword ptr [R14 + 0xca0]
0528855b  MOV RDX,qword ptr [R14 + 0xca8]
05288562  MOV RDI,R15
05288565  CALL 0x05286980
0528856a  MOVAPS XMM1,XMM0
0528856d  MOV RDX,qword ptr [R14 + 0x28]
05288571  MOVSX EAX,word ptr [RDX + 0xa8]
05288578  MOV ECX,EAX
0528857a  SAR ECX,0x1f
0528857d  MOV ESI,ECX
0528857f  SUB ESI,EAX
05288581  MOVSX EDX,word ptr [RDX + 0xaa]
05288588  MOV EDI,EDX
0528858a  SAR EDI,0x1f
0528858d  SHR EAX,0x1f
05288590  MOV R8D,EDI
05288593  SUB R8D,EDX
05288596  LEA EDX,[R8 + 0x7]
0528859a  TEST R8D,R8D
0528859d  CMOVNS EDX,R8D
052885a1  SAR EDX,0x3
052885a4  LEA R8D,[RSI + 0x7]
052885a8  TEST ESI,ESI
052885aa  CMOVNS R8D,ESI
052885ae  SHUFPS XMM1,XMM0,0x55
052885b2  SAR R8D,0x3
052885b6  ADD EDI,R8D
052885b9  SUB EDI,EDX
052885bb  ADD EAX,EDI
052885bd  ADD EAX,-0x2f
052885c0  SUB ECX,R8D
052885c3  LEA EBP,[0x138 + RCX*0x8]
052885ca  MOV ECX,0x28
052885cf  MOVSS XMM2,dword ptr [0x01198698]
052885d7  MOVSS XMM12,dword ptr [0x011983f0]
052885e0  XORPS XMM4,XMM4
052885e3  LEA RDX,[0x14f0a50]
052885ea  MOVSS XMM5,dword ptr [0x0119880c]
052885f2  MOVSS XMM6,dword ptr [0x011986e0]
052885fa  MOVSS XMM7,dword ptr [0x01198aa4]
05288602  MOVSS XMM8,dword ptr [0x01198af0]
0528860b  MOVSS XMM9,dword ptr [0x01198c1c]
05288614  MOVSS XMM10,dword ptr [0x01198358]
0528861d  MOVSS XMM11,dword ptr [0x01198690]
05288626  NOP word ptr CS:[RAX + RAX*0x1]
05288630  XORPS XMM13,XMM13
05288634  CVTSI2SS XMM13,EBP
05288639  MULSS XMM13,XMM2
0528863e  ADDSS XMM13,XMM12
05288643  ADDSS XMM13,XMM0
05288648  MULSS XMM13,XMM1
0528864d  XOR ESI,ESI
0528864f  UCOMISS XMM13,XMM4
05288653  SETA SIL
05288657  MULSS XMM13,dword ptr [RDX + RSI*0x4]
0528865d  ADDSS XMM13,XMM5
05288662  XORPS XMM15,XMM15
05288666  CVTSI2SS XMM15,EAX
0528866b  MULSS XMM15,XMM6
05288670  UCOMISS XMM4,XMM15
05288674  MOVAPS XMM14,XMM7
05288678  JA 0x05288697
0528867a  UCOMISS XMM15,XMM12
0528867e  JA 0x05288693
05288680  ADDSS XMM13,dword ptr [0x01198400]
05288689  MULSS XMM13,XMM15
0528868e  ADDSS XMM13,XMM7
05288693  MOVAPS XMM14,XMM13
05288697  LEA ESI,[RCX + -0x1]
0528869a  MOVZX ESI,SIL
0528869e  XORPS XMM13,XMM13
052886a2  CVTSI2SS XMM13,ESI
052886a7  DIVSS XMM13,XMM8
052886ac  MOVAPS XMM15,XMM14
052886b0  ADDSS XMM15,XMM9
052886b5  MULSS XMM15,XMM13
052886ba  ADDSS XMM15,XMM10
052886bf  MOVAPS XMM3,XMM12
052886c3  CMPLTSS XMM3,XMM13
052886c9  MOVAPS XMM13,XMM3
052886cd  ANDNPS XMM13,XMM15
052886d1  ANDPS XMM3,XMM14
052886d5  ORPS XMM3,XMM13
052886d9  UCOMISS XMM3,XMM11
052886dd  JA 0x052886f3
052886df  INC EAX
052886e1  ADD EBP,-0x8
052886e4  DEC ECX
052886e6  JNZ 0x05288630
052886ec  MOV EBP,0x17fff
052886f1  JMP 0x052886ff
052886f3  AND EBP,0xfff8
052886f9  OR EBP,0x10000
052886ff  LEA RAX,[0x11b8ea4]
05288706  MOV qword ptr [RSP],RAX
0528870a  MOV qword ptr [RSP + 0x8],R13
0528870f  MOV byte ptr [RSP + 0x10],R12B
05288714  CALL 0x0417cc60
05288719  SUB RAX,RBX
0528871c  MOV qword ptr [RSP + 0x18],RAX
05288721  MOV RDI,RSP
05288724  CALL 0x0cad8200
05288729  MOV EAX,EBP
0528872b  ADD RSP,0x48
0528872f  POP RBX
05288730  POP R12
05288732  POP R13
05288734  POP R14
05288736  POP R15
05288738  POP RBP
05288739  RET
```

## `05288460` — OverworldGeneratorMultinoise slot 54

- Ghidra name: `OverworldGeneratorMultinoise__propagateCombinedChunkSource`
- Body: `[[05288460, 052884bd]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGeneratorMultinoise__propagateCombinedChunkSource(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 0xca8);
  if (*(long *)(lVar1 + 0xc0) != 0) {
    cVar2 = func_0x0eeddcf0(&UNK_0130a7d5,&UNK_012d73ea,0x1e,&UNK_013ac822,&UNK_01376afd);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  return;
}


```

### Assembly

```asm
05288460  PUSH R14
05288462  PUSH RBX
05288463  PUSH RAX
05288464  MOV RBX,RSI
05288467  MOV R14,qword ptr [RDI + 0xca8]
0528846e  CMP qword ptr [R14 + 0xc0],0x0
05288476  JZ 0x052884af
05288478  LEA RDI,[0x130a7d5]
0528847f  LEA RSI,[0x12d73ea]
05288486  LEA RCX,[0x13ac822]
0528848d  LEA R8,[0x1376afd]
05288494  MOV EDX,0x1e
05288499  XOR EAX,EAX
0528849b  CALL 0x0eeddcf0
052884a0  TEST AL,AL
052884a2  JZ 0x052884af
052884a4  MOV dword ptr [0x00000000],0xdeadc0de
052884af  MOV qword ptr [R14 + 0xc0],RBX
052884b6  ADD RSP,0x8
052884ba  POP RBX
052884bb  POP R14
052884bd  RET
```

## `05281650` — OverworldGeneratorMultinoise slot 56

- Ghidra name: `OverworldGeneratorMultinoise__decorateWorldGenPostProcess`
- Body: `[[05281650, 05281783] [05281790, 05281848] [05281860, 052818cc]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGeneratorMultinoise__decorateWorldGenPostProcess
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *apuStack_68 [4];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puStack_98 = auStack_88;
  uStack_90 = 0x400000000;
  uStack_a0 = param_5;
  func_0x0cafcfe0(param_3 + 0x120,&puStack_98);
  puVar4 = puStack_98;
  uVar7 = uStack_90 & 0xffffffff;
  if (puStack_98 == (undefined1 *)0x0 && uVar7 != 0) {
    uVar5 = func_0x04890760();
    uVar5 = func_0x04882e20(uVar5);
    apuStack_68[0] = &UNK_0f460460;
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      func_0x0412a280(lStack_48,lStack_38 - lStack_48);
    }
    if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
    uVar5 = func_0x0eee2d70(uVar5);
    func_0x04882e20(uVar5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_0x0d2eeb90(apuStack_68,
                  CONCAT44((int)(*(ulong *)(param_3 + 0x50) >> 0x1c) >> 2,
                           (int)*(ulong *)(param_3 + 0x50) << 2) & 0xfffffffcffffffff,param_1 + 0x70
                  ,4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x348);
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lVar1 = *(long *)(lVar6 + 0xa8);
  lVar6 = *(long *)(lVar6 + 0xb0);
  func_0x0488f040(&lStack_b8,lVar1,lVar6,(lVar6 - lVar1 >> 3) * -0x5555555555555555);
  lVar3 = lStack_b0;
  lVar1 = lStack_b8;
  for (lVar6 = lStack_b8; lStack_b8 = lVar1, lVar6 != lVar3; lVar6 = lVar6 + 0x18) {
    func_0x0c8550b0(param_3,param_4,uStack_a0,uVar7,puVar4,lVar6,apuStack_68);
    lVar1 = lStack_b8;
  }
  lVar6 = lStack_b0;
  if (lVar1 != 0) {
    for (; lVar1 != lVar6; lVar6 = lVar6 + -0x18) {
      if ((*(byte *)(lVar6 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar6 + -8),*(ulong *)(lVar6 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_b0 = lVar1;
    func_0x0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  apuStack_68[0] = &UNK_0f460460;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  if (puStack_98 != (undefined1 *)0x0 && auStack_88 != puStack_98) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return;
}


```

### Assembly

```asm
05281650  PUSH RBP
05281651  PUSH R15
05281653  PUSH R14
05281655  PUSH R13
05281657  PUSH R12
05281659  PUSH RBX
0528165a  SUB RSP,0x98
05281661  MOV qword ptr [RSP + 0x28],R8
05281666  MOV R14,RCX
05281669  MOV R15,RDX
0528166c  MOV RBP,RDI
0528166f  LEA RAX,[RSP + 0x40]
05281674  MOV qword ptr [RSP + 0x30],RAX
05281679  MOV RAX,0x400000000
05281683  MOV qword ptr [RSP + 0x38],RAX
05281688  LEA RDI,[RDX + 0x120]
0528168f  LEA RSI,[RSP + 0x30]
05281694  CALL 0x0cafcfe0
05281699  MOV R12,qword ptr [RSP + 0x30]
0528169e  MOV R13D,dword ptr [RSP + 0x38]
052816a3  TEST R13,R13
052816a6  SETZ AL
052816a9  TEST R12,R12
052816ac  SETNZ CL
052816af  OR CL,AL
052816b1  JZ 0x05281837
052816b7  MOV RSI,qword ptr [R15 + 0x50]
052816bb  MOV RAX,RSI
052816be  SHR RAX,0x1c
052816c2  SHL ESI,0x2
052816c5  SAR EAX,0x2
052816c8  AND EAX,0xfffffffc
052816cb  SHL RAX,0x20
052816cf  OR RSI,RAX
052816d2  LEA RDX,[RBP + 0x70]
052816d6  LEA RDI,[RSP + 0x60]
052816db  MOV ECX,0x4
052816e0  CALL 0x0d2eeb90
052816e5  MOV RAX,qword ptr [RBP + 0x20]
052816e9  MOV RAX,qword ptr [RAX + 0x348]
052816f0  XORPS XMM0,XMM0
052816f3  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052816f8  MOV qword ptr [RSP + 0x20],0x0
05281701  MOV RSI,qword ptr [RAX + 0xa8]
05281708  MOV RDX,qword ptr [RAX + 0xb0]
0528170f  MOV RAX,RDX
05281712  SUB RAX,RSI
05281715  SAR RAX,0x3
05281719  MOV RCX,-0x5555555555555555
05281723  IMUL RCX,RAX
05281727  LEA RDI,[RSP + 0x10]
0528172c  CALL 0x0488f040
05281731  MOV RBP,qword ptr [RSP + 0x10]
05281736  MOV RBX,qword ptr [RSP + 0x18]
0528173b  CMP RBP,RBX
0528173e  JZ 0x05281770
05281740  LEA RAX,[RSP + 0x60]
05281745  MOV qword ptr [RSP],RAX
05281749  MOV RDI,R15
0528174c  MOV RSI,R14
0528174f  MOV RDX,qword ptr [RSP + 0x28]
05281754  MOV RCX,R13
05281757  MOV R8,R12
0528175a  MOV R9,RBP
0528175d  CALL 0x0c8550b0
05281762  ADD RBP,0x18
05281766  CMP RBP,RBX
05281769  JNZ 0x05281740
0528176b  MOV RBP,qword ptr [RSP + 0x10]
05281770  TEST RBP,RBP
05281773  JZ 0x052817c9
05281775  MOV RBX,qword ptr [RSP + 0x18]
0528177a  MOV RDI,RBP
0528177d  CMP RBP,RBX
05281780  JNZ 0x05281799
05281782  JMP 0x052817b7
05281790  ADD RBX,-0x18
05281794  CMP RBX,RBP
05281797  JZ 0x052817b2
05281799  TEST byte ptr [RBX + -0x18],0x1
0528179d  JZ 0x05281790
0528179f  MOV RSI,qword ptr [RBX + -0x18]
052817a3  MOV RDI,qword ptr [RBX + -0x8]
052817a7  AND RSI,-0x2
052817ab  CALL 0x0412a280
052817b0  JMP 0x05281790
052817b2  MOV RDI,qword ptr [RSP + 0x10]
052817b7  MOV qword ptr [RSP + 0x18],RBP
052817bc  MOV RSI,qword ptr [RSP + 0x20]
052817c1  SUB RSI,RDI
052817c4  CALL 0x0412a280
052817c9  LEA RAX,[0xf460460]
052817d0  MOV qword ptr [RSP + 0x60],RAX
052817d5  MOV RDI,qword ptr [RSP + 0x80]
052817dd  TEST RDI,RDI
052817e0  JZ 0x052817fa
052817e2  MOV qword ptr [RSP + 0x88],RDI
052817ea  MOV RSI,qword ptr [RSP + 0x90]
052817f2  SUB RSI,RDI
052817f5  CALL 0x0412a280
052817fa  MOV RSI,qword ptr [RSP + 0x30]
052817ff  LEA RAX,[RSP + 0x40]
05281804  CMP RAX,RSI
05281807  SETZ AL
0528180a  TEST RSI,RSI
0528180d  SETZ CL
05281810  OR CL,AL
05281812  JNZ 0x05281825
05281814  LEA RDI,[0xf5463b0]
0528181b  MOV RAX,qword ptr [0x0f5463b0]
05281822  CALL qword ptr [RAX + 0x18]
05281825  ADD RSP,0x98
0528182c  POP RBX
0528182d  POP R12
0528182f  POP R13
05281831  POP R14
05281833  POP R15
05281835  POP RBP
05281836  RET
05281837  CALL 0x04890760
0528183c  MOV RDI,RAX
0528183f  CALL 0x04882e20
05281844  MOV RBX,RAX
05281847  JMP 0x05281860
05281860  LEA RAX,[0xf460460]
05281867  MOV qword ptr [RSP + 0x60],RAX
0528186c  MOV RDI,qword ptr [RSP + 0x80]
05281874  TEST RDI,RDI
05281877  JZ 0x05281891
05281879  MOV qword ptr [RSP + 0x88],RDI
05281881  MOV RSI,qword ptr [RSP + 0x90]
05281889  SUB RSI,RDI
0528188c  CALL 0x0412a280
05281891  MOV RSI,qword ptr [RSP + 0x30]
05281896  LEA RAX,[RSP + 0x40]
0528189b  CMP RAX,RSI
0528189e  SETZ AL
052818a1  TEST RSI,RSI
052818a4  SETZ CL
052818a7  OR CL,AL
052818a9  JNZ 0x052818bc
052818ab  LEA RDI,[0xf5463b0]
052818b2  MOV RAX,qword ptr [0x0f5463b0]
052818b9  CALL qword ptr [RAX + 0x18]
052818bc  MOV RDI,RBX
052818bf  CALL 0x0eee2d70
052818c4  MOV RDI,RAX
052818c7  CALL 0x04882e20
052818cc  INT3
```

## `05287590` — OverworldGeneratorMultinoise slot 57

- Ghidra name: `OverworldGeneratorMultinoise__generateDensityCellsForChunk`
- Body: `[[05287590, 052878db]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OverworldGeneratorMultinoise__generateDensityCellsForChunk
          (undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_38;
  
  OverworldGeneratorMultinoise__createNoiseCache_static
            (auStack_58,*param_3,param_2 + 0x908,*(undefined8 *)(param_2 + 0xca0),
             *(undefined8 *)(param_2 + 0xca8));
  sVar2 = *(short *)(*(long *)(param_2 + 0x28) + 0xa8);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4180);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x4180,0);
  }
  *plVar7 = param_2 + 0x6e0;
  *(short *)(plVar7 + 1) = sVar2 + 4;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  *(undefined4 *)(plVar7 + 0x17) = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x21] = 0;
  *(undefined4 *)(plVar7 + 0x22) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x27] = 0;
  plVar7[0x28] = 0;
  plVar7[0x25] = 0;
  plVar7[0x26] = 0;
  plVar7[0x23] = 0;
  plVar7[0x24] = 0;
  *(undefined4 *)(plVar7 + 0x2d) = 0;
  func_0x0eee2dd0(plVar7 + 0x2e,0,0x4010);
  uVar6 = _UNK_014ea7cc;
  uVar5 = _UNK_014ea7c8;
  uVar4 = _UNK_014ea7c4;
  uVar3 = _DAT_014ea7c0;
  lVar8 = 0x78;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x478);
  *(undefined4 *)(plVar7 + 0x22e) = 0x3f800000;
  lVar8 = 0x479;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x879);
  *(undefined4 *)((long)plVar7 + 0x2174) = 0x3f800000;
  lVar8 = 0x87a;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0xc7a);
  *(undefined4 *)(plVar7 + 0x62f) = 0x3f800000;
  lVar8 = 0xc7b;
  do {
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x70);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x60);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x50);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x40);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x30);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4 + -0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)((long)plVar7 + lVar8 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x107b);
  *(undefined4 *)((long)plVar7 + 0x417c) = 0x3f800000;
  lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3160);
  if (lVar8 == 0) {
    func_0x0eec74c0(0x3160,0);
  }
  FUN_05268e90(lVar8,param_2 + 0x7c0);
  OverworldGeneratorMultinoise___generateDensityCellsForChunk
            (param_1,param_2,*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),auStack_58,
             plVar7,lVar8);
  func_0x0412a280(lVar8,0x3160);
  func_0x0412a280(plVar7,0x4180);
  if (lStack_48 != 0) {
    func_0x0412a280(lStack_48,lStack_38 - lStack_48);
  }
  return param_1;
}


```

### Assembly

```asm
05287590  PUSH RBP
05287591  PUSH R15
05287593  PUSH R14
05287595  PUSH R13
05287597  PUSH R12
05287599  PUSH RBX
0528759a  SUB RSP,0x38
0528759e  MOV R12,RDX
052875a1  MOV R15,RSI
052875a4  MOV RBX,RDI
052875a7  MOV RSI,qword ptr [RDX]
052875aa  LEA RDX,[R15 + 0x908]
052875b1  MOV RCX,qword ptr [R15 + 0xca0]
052875b8  MOV R8,qword ptr [R15 + 0xca8]
052875bf  LEA RDI,[RSP + 0x10]
052875c4  CALL 0x05286c70
052875c9  MOV RAX,qword ptr [R15 + 0x28]
052875cd  MOVZX EBP,word ptr [RAX + 0xa8]
052875d4  LEA RDI,[0xf5463b0]
052875db  MOV RAX,qword ptr [0x0f5463b0]
052875e2  MOV ESI,0x4180
052875e7  CALL qword ptr [RAX + 0x10]
052875ea  MOV R14,RAX
052875ed  TEST RAX,RAX
052875f0  JZ 0x052878ba
052875f6  LEA RAX,[R15 + 0x6e0]
052875fd  MOV qword ptr [R14],RAX
05287600  ADD EBP,0x4
05287603  MOV word ptr [R14 + 0x8],BP
05287608  XORPS XMM0,XMM0
0528760b  MOVUPS xmmword ptr [R14 + 0x10],XMM0
05287610  MOVUPS xmmword ptr [R14 + 0x20],XMM0
05287615  MOVUPS xmmword ptr [R14 + 0x30],XMM0
0528761a  MOVUPS xmmword ptr [R14 + 0x40],XMM0
0528761f  MOVUPS xmmword ptr [R14 + 0x50],XMM0
05287624  MOV dword ptr [R14 + 0x60],0x0
0528762c  MOVUPS xmmword ptr [R14 + 0x68],XMM0
05287631  MOVUPS xmmword ptr [R14 + 0x78],XMM0
05287636  MOVUPS xmmword ptr [R14 + 0x88],XMM0
0528763e  MOVUPS xmmword ptr [R14 + 0x98],XMM0
05287646  MOVUPS xmmword ptr [R14 + 0xa8],XMM0
0528764e  MOV dword ptr [R14 + 0xb8],0x0
05287659  MOVUPS xmmword ptr [R14 + 0xc0],XMM0
05287661  MOVUPS xmmword ptr [R14 + 0xd0],XMM0
05287669  MOVUPS xmmword ptr [R14 + 0xe0],XMM0
05287671  MOVUPS xmmword ptr [R14 + 0xf0],XMM0
05287679  MOVUPS xmmword ptr [R14 + 0x100],XMM0
05287681  MOV dword ptr [R14 + 0x110],0x0
0528768c  MOVUPS xmmword ptr [R14 + 0x158],XMM0
05287694  MOVUPS xmmword ptr [R14 + 0x148],XMM0
0528769c  MOVUPS xmmword ptr [R14 + 0x138],XMM0
052876a4  MOVUPS xmmword ptr [R14 + 0x128],XMM0
052876ac  MOVUPS xmmword ptr [R14 + 0x118],XMM0
052876b4  MOV dword ptr [R14 + 0x168],0x0
052876bf  MOV RDI,R14
052876c2  ADD RDI,0x170
052876c9  MOV EDX,0x4010
052876ce  XOR ESI,ESI
052876d0  CALL 0x0eee2dd0
052876d5  MOV EAX,0x78
052876da  MOVAPS XMM0,xmmword ptr [0x014ea7c0]
052876e1  NOP dword ptr CS:[RAX + RAX*0x1]
052876f0  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
052876f6  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
052876fc  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
05287702  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
05287708  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
0528770e  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
05287714  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
0528771a  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
0528771f  ADD RAX,0x20
05287723  CMP RAX,0x478
05287729  JNZ 0x052876f0
0528772b  MOV dword ptr [R14 + 0x1170],0x3f800000
05287736  MOV EAX,0x479
0528773b  NOP dword ptr [RAX + RAX*0x1]
05287740  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
05287746  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
0528774c  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
05287752  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
05287758  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
0528775e  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
05287764  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
0528776a  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
0528776f  ADD RAX,0x20
05287773  CMP RAX,0x879
05287779  JNZ 0x05287740
0528777b  MOV dword ptr [R14 + 0x2174],0x3f800000
05287786  MOV EAX,0x87a
0528778b  NOP dword ptr [RAX + RAX*0x1]
05287790  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
05287796  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
0528779c  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
052877a2  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
052877a8  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
052877ae  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
052877b4  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
052877ba  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
052877bf  ADD RAX,0x20
052877c3  CMP RAX,0xc7a
052877c9  JNZ 0x05287790
052877cb  MOV dword ptr [R14 + 0x3178],0x3f800000
052877d6  MOV EAX,0xc7b
052877db  NOP dword ptr [RAX + RAX*0x1]
052877e0  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x70],XMM0
052877e6  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x60],XMM0
052877ec  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x50],XMM0
052877f2  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x40],XMM0
052877f8  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x30],XMM0
052877fe  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x20],XMM0
05287804  MOVUPS xmmword ptr [R14 + RAX*0x4 + -0x10],XMM0
0528780a  MOVUPS xmmword ptr [R14 + RAX*0x4],XMM0
0528780f  ADD RAX,0x20
05287813  CMP RAX,0x107b
05287819  JNZ 0x052877e0
0528781b  MOV dword ptr [R14 + 0x417c],0x3f800000
05287826  LEA RDI,[0xf5463b0]
0528782d  MOV RAX,qword ptr [0x0f5463b0]
05287834  MOV ESI,0x3160
05287839  CALL qword ptr [RAX + 0x10]
0528783c  MOV R13,RAX
0528783f  TEST RAX,RAX
05287842  JZ 0x052878cb
05287848  LEA RSI,[R15 + 0x7c0]
0528784f  MOV RDI,R13
05287852  CALL 0x05268e90
05287857  MOV EDX,dword ptr [R12]
0528785b  MOV ECX,dword ptr [R12 + 0x4]
05287860  MOV qword ptr [RSP],R13
05287864  LEA R8,[RSP + 0x10]
05287869  MOV RDI,RBX
0528786c  MOV RSI,R15
0528786f  MOV R9,R14
05287872  CALL 0x05287930
05287877  MOV ESI,0x3160
0528787c  MOV RDI,R13
0528787f  CALL 0x0412a280
05287884  MOV ESI,0x4180
05287889  MOV RDI,R14
0528788c  CALL 0x0412a280
05287891  MOV RDI,qword ptr [RSP + 0x20]
05287896  TEST RDI,RDI
05287899  JZ 0x052878a8
0528789b  MOV RSI,qword ptr [RSP + 0x30]
052878a0  SUB RSI,RDI
052878a3  CALL 0x0412a280
052878a8  MOV RAX,RBX
052878ab  ADD RSP,0x38
052878af  POP RBX
052878b0  POP R12
052878b2  POP R13
052878b4  POP R14
052878b6  POP R15
052878b8  POP RBP
052878b9  RET
052878ba  MOV EDI,0x4180
052878bf  XOR ESI,ESI
052878c1  CALL 0x0eec74c0
052878c6  JMP 0x052875f6
052878cb  MOV EDI,0x3160
052878d0  XOR ESI,ESI
052878d2  CALL 0x0eec74c0
052878d7  JMP 0x05287848
```

## `05287580` — OverworldGeneratorMultinoise slot 58

- Ghidra name: `OverworldGeneratorMultinoise__getLevelGenHeight`
- Body: `[[05287580, 05287585]]`

### Pseudocode

```c

undefined8 OverworldGeneratorMultinoise__getLevelGenHeight(void)

{
  return 0x140;
}


```

### Assembly

```asm
05287580  MOV EAX,0x140
05287585  RET
```

## `05286b50` — OverworldGeneratorMultinoise slot 59

- Ghidra name: `OverworldGeneratorMultinoise__getXoroshiroPositionalRandomFactory`
- Body: `[[05286b50, 05286c30]]`

### Pseudocode

```c

undefined8 *
OverworldGeneratorMultinoise__getXoroshiroPositionalRandomFactory(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x440))();
  uVar1 = uVar1 ^ 0x6a09e667f3bcc909;
  uVar3 = (uVar1 >> 0x1e ^ uVar1) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  uVar3 = uVar3 >> 0x1f ^ uVar3;
  uVar1 = (uVar1 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar1 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
  uVar1 = uVar1 >> 0x1f ^ uVar1;
  if (uVar1 == 0 && uVar3 == 0) {
    uVar3 = 0x9e3779b97f4a7c15;
    uVar1 = 0x6a09e667f3bcc909;
  }
  uVar2 = uVar1 ^ uVar3;
  uVar4 = uVar2 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar2;
  uVar2 = (uVar2 << 0x1c | uVar2 >> 0x24) + uVar4;
  *param_1 = &UNK_0ef51388;
  param_1[1] = ((uVar1 + uVar3) * 0x20000 | uVar1 + uVar3 >> 0x2f) + uVar3;
  param_1[2] = (uVar2 * 0x20000 | uVar2 >> 0x2f) + uVar4;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}


```

### Assembly

```asm
05286b50  PUSH RBX
05286b51  MOV RBX,RDI
05286b54  MOV RDI,qword ptr [RSI + 0x20]
05286b58  MOV RAX,qword ptr [RDI]
05286b5b  CALL qword ptr [RAX + 0x440]
05286b61  MOV RCX,0x6a09e667f3bcc909
05286b6b  XOR RAX,RCX
05286b6e  MOV RDX,RAX
05286b71  SHR RDX,0x1e
05286b75  XOR RDX,RAX
05286b78  MOV RSI,-0x40a7b892e31b1a47
05286b82  IMUL RDX,RSI
05286b86  MOV RDI,RDX
05286b89  SHR RDI,0x1b
05286b8d  XOR RDI,RDX
05286b90  MOV R8,-0x6b2fb644ecceee15
05286b9a  IMUL RDI,R8
05286b9e  MOV RDX,RDI
05286ba1  SHR RDX,0x1f
05286ba5  XOR RDX,RDI
05286ba8  MOV RDI,-0x61c8864680b583eb
05286bb2  ADD RAX,RDI
05286bb5  MOV R9,RAX
05286bb8  SHR R9,0x1e
05286bbc  XOR R9,RAX
05286bbf  IMUL R9,RSI
05286bc3  MOV RSI,R9
05286bc6  SHR RSI,0x1b
05286bca  XOR RSI,R9
05286bcd  IMUL RSI,R8
05286bd1  MOV RAX,RSI
05286bd4  SHR RAX,0x1f
05286bd8  XOR RAX,RSI
05286bdb  MOV RSI,RAX
05286bde  OR RSI,RDX
05286be1  CMOVZ RDX,RDI
05286be5  CMOVZ RAX,RCX
05286be9  LEA RCX,[RAX + RDX*0x1]
05286bed  ROL RCX,0x11
05286bf1  ADD RCX,RDX
05286bf4  XOR RAX,RDX
05286bf7  ROL RDX,0x31
05286bfb  MOV RSI,RAX
05286bfe  SHL RSI,0x15
05286c02  XOR RSI,RDX
05286c05  XOR RSI,RAX
05286c08  ROL RAX,0x1c
05286c0c  ADD RAX,RSI
05286c0f  ROL RAX,0x11
05286c13  ADD RAX,RSI
05286c16  LEA RDX,[0xef51388]
05286c1d  MOV qword ptr [RBX],RDX
05286c20  MOV qword ptr [RBX + 0x8],RCX
05286c24  MOV qword ptr [RBX + 0x10],RAX
05286c28  MOV byte ptr [RBX + 0x18],0x1
05286c2c  MOV RAX,RBX
05286c2f  POP RBX
05286c30  RET
```

## `05286a90` — OverworldGeneratorMultinoise slot 60

- Ghidra name: `OverworldGeneratorMultinoise__tryMakeAquifer`
- Body: `[[05286a90, 05286b2e]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * OverworldGeneratorMultinoise__tryMakeAquifer
                 (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,short param_5,
                 short param_6,short param_7)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (lVar1 == 0) {
    func_0x0eec74c0(0x68,0);
  }
  Aquifer__Aquifer(lVar1,param_3,param_2 + 0x5e8,param_2 + 0x908,param_4,(int)param_5,(int)param_6,
                   (int)param_7);
  *param_1 = lVar1;
  return param_1;
}


```

### Assembly

```asm
05286a90  PUSH RBP
05286a91  PUSH R15
05286a93  PUSH R14
05286a95  PUSH R13
05286a97  PUSH R12
05286a99  PUSH RBX
05286a9a  SUB RSP,0x18
05286a9e  MOV EBP,R9D
05286aa1  MOV R15D,R8D
05286aa4  MOV qword ptr [RSP + 0x10],RCX
05286aa9  MOV qword ptr [RSP + 0x8],RDX
05286aae  MOV R12,RSI
05286ab1  MOV RBX,RDI
05286ab4  LEA R13,[RSI + 0x5e8]
05286abb  ADD R12,0x908
05286ac2  MOV RAX,qword ptr [0x0f5463b0]
05286ac9  LEA RDI,[0xf5463b0]
05286ad0  MOV ESI,0x68
05286ad5  CALL qword ptr [RAX + 0x10]
05286ad8  MOV R14,RAX
05286adb  TEST RAX,RAX
05286ade  JZ 0x05286b21
05286ae0  MOVSX R9D,R15W
05286ae4  MOVSX EAX,BP
05286ae7  MOVSX R10D,word ptr [RSP + 0x50]
05286aed  MOV RDI,R14
05286af0  MOV RSI,qword ptr [RSP + 0x8]
05286af5  MOV RDX,R13
05286af8  MOV RCX,R12
05286afb  MOV R8,qword ptr [RSP + 0x10]
05286b00  PUSH R10
05286b02  PUSH RAX
05286b03  CALL 0x052588d0
05286b08  ADD RSP,0x10
05286b0c  MOV qword ptr [RBX],R14
05286b0f  MOV RAX,RBX
05286b12  ADD RSP,0x18
05286b16  POP RBX
05286b17  POP R12
05286b19  POP R13
05286b1b  POP R14
05286b1d  POP R15
05286b1f  POP RBP
05286b20  RET
05286b21  MOV EDI,0x68
05286b26  XOR ESI,ESI
05286b28  CALL 0x0eec74c0
05286b2d  JMP 0x05286ae0
```

## `05286c40` — OverworldGeneratorMultinoise slot 61

- Ghidra name: `OverworldGeneratorMultinoise__createNoiseCache`
- Body: `[[05286c40, 05286c68]]`

### Pseudocode

```c

undefined8
OverworldGeneratorMultinoise__createNoiseCache(undefined8 param_1,long param_2,undefined8 param_3)

{
  OverworldGeneratorMultinoise__createNoiseCache_static
            (param_1,param_3,param_2 + 0x908,*(undefined8 *)(param_2 + 0xca0),
             *(undefined8 *)(param_2 + 0xca8));
  return param_1;
}


```

### Assembly

```asm
05286c40  PUSH RBX
05286c41  MOV RBX,RDI
05286c44  LEA RAX,[RSI + 0x908]
05286c4b  MOV RCX,qword ptr [RSI + 0xca0]
05286c52  MOV R8,qword ptr [RSI + 0xca8]
05286c59  MOV RSI,RDX
05286c5c  MOV RDX,RAX
05286c5f  CALL 0x05286c70
05286c64  MOV RAX,RBX
05286c67  POP RBX
05286c68  RET
```

## `052884c0` — OverworldGeneratorMultinoise slot 62

- Ghidra name: `OverworldGeneratorMultinoise__getSurfaceNoise`
- Body: `[[052884c0, 052884c7]]`

### Pseudocode

```c

long OverworldGeneratorMultinoise__getSurfaceNoise(long param_1)

{
  return param_1 + 0x8e0;
}


```

### Assembly

```asm
052884c0  LEA RAX,[RDI + 0x8e0]
052884c7  RET
```

## `052884d0` — OverworldGeneratorMultinoise slot 63

- Ghidra name: `OverworldGeneratorMultinoise__getMaterialAdjNoise`
- Body: `[[052884d0, 052884d7]]`

### Pseudocode

```c

long OverworldGeneratorMultinoise__getMaterialAdjNoise(long param_1)

{
  return param_1 + 0xc98;
}


```

### Assembly

```asm
052884d0  LEA RAX,[RDI + 0xc98]
052884d7  RET
```

## `05288b10` — OverworldGeneratorMultinoise slot 64

- Ghidra name: `OverworldGeneratorMultinoise___prepareHeights`
- Body: `[[05288b10, 052896b1] [052896c0, 0528980d] [05289810, 052898d1] [052898e0, 05289979] [05289980, 05289b85] [05289b90, 05289cc4] [05289cd0, 0528a23d] [0528a240, 0528a37f]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGeneratorMultinoise___prepareHeights
               (ulong param_1,long *param_2,ulong param_3,long param_4,long param_5,long param_6,
               char param_7,long *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  ulong *puVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [8];
  char cVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  short sVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  ulong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_2258;
  int iStack_2250;
  uint uStack_224c;
  undefined1 auStack_2248 [8];
  float fStack_2240;
  float fStack_223c;
  long *plStack_2238;
  long *plStack_2230;
  long *plStack_2228;
  long lStack_2220;
  long *plStack_2218;
  ulong uStack_2210;
  long *plStack_2208;
  long *plStack_2200;
  long lStack_21f8;
  long lStack_21f0;
  long lStack_21e8;
  long lStack_21e0;
  long lStack_21d0;
  ulong uStack_21c8;
  ulong uStack_21c0;
  long *plStack_21b8;
  long lStack_21b0;
  long *plStack_21a8;
  long lStack_21a0;
  long lStack_2198;
  long lStack_2190;
  long lStack_2188;
  long *plStack_2180;
  long *plStack_2178;
  long *plStack_2170;
  float fStack_2168;
  undefined4 uStack_2164;
  long *plStack_2160;
  long lStack_2158;
  ulong uStack_2150;
  long *plStack_2148;
  long *plStack_2140;
  long lStack_2138;
  long lStack_2130;
  long lStack_2128;
  long lStack_2120;
  long lStack_20f8;
  ulong uStack_20f0;
  long lStack_20e8;
  long lStack_20e0;
  long lStack_20d8;
  long lStack_20d0;
  ulong uStack_20c8;
  ulong uStack_20c0;
  ulong uStack_20b8;
  ulong uStack_20b0;
  ulong uStack_20a8;
  long lStack_20a0;
  undefined8 uStack_2098;
  float *pfStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined4 uStack_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  float fStack_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  long *plStack_2038;
  long *plStack_2030;
  long *plStack_2028;
  long *plStack_2020;
  long alStack_2018 [508];
  float afStack_1034 [1025];
  
  lStack_2198 = *(long *)(param_1 + 0x28);
  uStack_21c0 = (ulong)(uint)(int)*(short *)(lStack_2198 + 0xa8);
  uStack_224c = (uint)*(ushort *)(lStack_2198 + 0xac);
  lStack_21b0 = param_4;
  plStack_21a8 = param_2;
  lStack_2188 = param_5;
  lStack_2158 = param_6;
  uStack_2150 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
  if ((param_8 != (long *)0x0) && (0 < param_8[1] - *param_8)) {
    func_0x0eee2dd0(*param_8,0);
  }
  plVar16 = (long *)(param_1 + 0x6e0);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4180);
  if (plVar14 == (long *)0x0) goto LAB_0528a33c;
  do {
    *plVar14 = (long)plVar16;
    *(short *)(plVar14 + 1) = (short)uStack_21c0 + 4;
    plStack_2170 = plVar14 + 2;
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    plVar14[0xb] = 0;
    *(undefined4 *)(plVar14 + 0xc) = 0;
    plStack_2178 = plVar14 + 0xd;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    *(undefined4 *)(plVar14 + 0x17) = 0;
    plStack_2180 = plVar14 + 0x18;
    plVar14[0x18] = 0;
    plVar14[0x19] = 0;
    plVar14[0x1a] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1c] = 0;
    plVar14[0x1d] = 0;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    plVar14[0x20] = 0;
    plVar14[0x21] = 0;
    *(undefined4 *)(plVar14 + 0x22) = 0;
    plStack_21b8 = plVar14 + 0x23;
    plVar14[0x2b] = 0;
    plVar14[0x2c] = 0;
    plVar14[0x29] = 0;
    plVar14[0x2a] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x23] = 0;
    plVar14[0x24] = 0;
    *(undefined4 *)(plVar14 + 0x2d) = 0;
    plStack_2218 = plVar14 + 0x2e;
    func_0x0eee2dd0(plStack_2218,0,0x4010);
    uVar8 = _UNK_014ea7cc;
    uVar7 = _UNK_014ea7c8;
    uVar6 = _UNK_014ea7c4;
    uVar5 = _DAT_014ea7c0;
    lVar15 = 0x78;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x478);
    *(undefined4 *)(plVar14 + 0x22e) = 0x3f800000;
    lStack_2190 = (long)plVar14 + 0x1174;
    lVar15 = 0x479;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x879);
    auStack_2248 = (undefined1  [8])param_3;
    *(undefined4 *)((long)plVar14 + 0x2174) = 0x3f800000;
    lVar15 = 0x87a;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0xc7a);
    *(undefined4 *)(plVar14 + 0x62f) = 0x3f800000;
    lVar15 = 0xc7b;
    do {
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x70);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x60);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x50);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x40);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x30);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4 + -0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar1 = (undefined4 *)((long)plVar14 + lVar15 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != 0x107b);
    *(undefined4 *)((long)plVar14 + 0x417c) = 0x3f800000;
    uStack_21c8 = param_1;
    lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3160);
    if (lVar15 == 0) {
      func_0x0eec74c0(0x3160,0);
    }
    uVar18 = uStack_21c8;
    FUN_05268e90(lVar15,uStack_21c8 + 0x7c0);
    uStack_2058 = 0;
    uStack_2054 = 0;
    fStack_2050 = 0.0;
    uStack_204c = 0;
    uStack_2068 = 0;
    uStack_2060 = 0;
    uStack_205c = 0;
    uStack_2078 = 0;
    uStack_2070 = 0;
    uStack_2088 = 0;
    uStack_2080 = 0;
    uStack_2098 = 0;
    pfStack_2090 = (float *)0x0;
    uStack_2048 = 0;
    plStack_2238 = (long *)0x0;
    plStack_2230 = (long *)0x0;
    plStack_2228 = (long *)0x0;
    func_0x0eee2dd0(afStack_1034,0,0x1004);
    lStack_2220 = lVar15;
    OverworldGeneratorMultinoise___generateDensityCellsForChunk
              (&plStack_2038,uVar18,*(undefined4 *)auStack_2248,
               *(undefined4 *)((long)auStack_2248 + 4),lStack_21b0,plVar14,lVar15);
    func_0x0eee2f00(afStack_1034,&plStack_2038,0x1004);
    uStack_2088 = 0;
    uStack_2080 = 0;
    uStack_2078 = 0;
    uStack_2070 = 0;
    uStack_2068 = 0;
    uStack_2060 = 0;
    uStack_205c = 0;
    uStack_2058 = 0;
    uStack_2054 = 0;
    fStack_2050 = 0.0;
    uStack_2098 = 0x401;
    uStack_204c = (undefined4)_DAT_014e9c40;
    uStack_2048 = (undefined4)((ulong)_DAT_014e9c40 >> 0x20);
    pfStack_2090 = afStack_1034;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    plStack_2228 = plVar16 + 1;
    *plVar16 = (long)&uStack_2098;
    plStack_2238 = plVar16;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    plStack_2228 = plVar17 + 8;
    *plVar17 = *plVar16;
    plStack_2238 = plVar17;
    plStack_2230 = plVar17 + 1;
    func_0x0412a280(plVar16,8);
    plVar14[2] = 0x401;
    plVar14[3] = (long)plStack_2218;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    *(undefined8 *)((long)plVar14 + 0x4c) = 0;
    *(undefined8 *)((long)plVar14 + 0x54) = 0;
    uVar32 = _DAT_014e9c40;
    *(undefined8 *)((long)plVar14 + 0x5c) = _DAT_014e9c40;
    plVar14[0xd] = 0x401;
    plVar14[0xe] = lStack_2190;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    *(undefined8 *)((long)plVar14 + 0xa4) = 0;
    *(undefined8 *)((long)plVar14 + 0xac) = 0;
    *(undefined8 *)((long)plVar14 + 0xb4) = uVar32;
    plVar14[0x18] = 0x401;
    plVar14[0x19] = (long)(plVar14 + 0x42f);
    plVar14[0x1a] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1c] = 0;
    plVar14[0x1d] = 0;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    *(undefined8 *)((long)plVar14 + 0xfc) = 0;
    *(undefined8 *)((long)plVar14 + 0x104) = 0;
    *(undefined8 *)((long)plVar14 + 0x10c) = uVar32;
    plVar14[0x23] = 0x401;
    plVar14[0x24] = (long)plVar14 + 0x317c;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
    plVar14[0x29] = 0;
    plVar14[0x2a] = 0;
    *(undefined8 *)((long)plVar14 + 0x154) = 0;
    *(undefined8 *)((long)plVar14 + 0x15c) = 0;
    *(undefined8 *)((long)plVar14 + 0x164) = uVar32;
    plStack_2038 = plStack_2170;
    plStack_2030 = plStack_2178;
    plStack_2028 = plStack_2180;
    plStack_2020 = plStack_21b8;
    FUN_052bd680(&plStack_2238,plVar17 + 1,&plStack_2038,alStack_2018,4);
    plStack_2148 = (long *)(lStack_2220 + 0x3010);
    *(undefined8 *)(lStack_2220 + 0x3010) = 0x401;
    *(long *)(lStack_2220 + 0x3018) = lStack_2220;
    *(undefined8 *)(lStack_2220 + 0x3020) = 0;
    *(undefined8 *)(lStack_2220 + 0x3028) = 0;
    *(undefined8 *)(lStack_2220 + 0x3030) = 0;
    *(undefined8 *)(lStack_2220 + 0x3038) = 0;
    *(undefined8 *)(lStack_2220 + 0x3040) = 0;
    *(undefined8 *)(lStack_2220 + 0x3048) = 0;
    *(undefined8 *)(lStack_2220 + 0x304c) = 0;
    *(undefined8 *)(lStack_2220 + 0x3054) = 0;
    uVar32 = _DAT_014e9c40;
    *(undefined8 *)(lStack_2220 + 0x305c) = _DAT_014e9c40;
    plStack_2140 = (long *)(lStack_2220 + 0x3068);
    *(undefined8 *)(lStack_2220 + 0x3068) = 0x401;
    *(long *)(lStack_2220 + 0x3070) = lStack_2220 + 0x1004;
    *(undefined8 *)(lStack_2220 + 0x3078) = 0;
    *(undefined8 *)(lStack_2220 + 0x3080) = 0;
    *(undefined8 *)(lStack_2220 + 0x3088) = 0;
    *(undefined8 *)(lStack_2220 + 0x3090) = 0;
    *(undefined8 *)(lStack_2220 + 0x3098) = 0;
    *(undefined8 *)(lStack_2220 + 0x30a0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30a4) = 0;
    *(undefined8 *)(lStack_2220 + 0x30ac) = 0;
    *(undefined8 *)(lStack_2220 + 0x30b4) = uVar32;
    lStack_2138 = lStack_2220 + 0x30c0;
    *(undefined8 *)(lStack_2220 + 0x30c0) = 0x401;
    *(long *)(lStack_2220 + 0x30c8) = lStack_2220 + 0x2008;
    *(undefined8 *)(lStack_2220 + 0x30d0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30d8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30e0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30e8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30f0) = 0;
    *(undefined8 *)(lStack_2220 + 0x30f8) = 0;
    *(undefined8 *)(lStack_2220 + 0x30fc) = 0;
    *(undefined8 *)(lStack_2220 + 0x3104) = 0;
    *(undefined8 *)(lStack_2220 + 0x310c) = uVar32;
    FUN_052bd680(&plStack_2238,plStack_2230,&plStack_2148,&lStack_2130,3);
    uVar18 = uStack_21c8;
    auVar9 = auStack_2248;
    lStack_21e8 = 0;
    lStack_21e0 = 0;
    lStack_21f8 = 0;
    lStack_21f0 = 0;
    plStack_2208 = (long *)0x0;
    plStack_2200 = (long *)0x0;
    alStack_2018[2] = 0;
    alStack_2018[3] = 0;
    alStack_2018[0] = 0;
    alStack_2018[1] = 0;
    plStack_2028 = (long *)0x0;
    plStack_2020 = (long *)0x0;
    plStack_2038 = (long *)0x0;
    plStack_2030 = (long *)0x0;
    alStack_2018[4] = 0;
    if (param_7 == '\0') {
LAB_0528941f:
      plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,1);
      if ((alStack_2018[3] == alStack_2018[2]) && (plStack_2030 == plStack_2038)) {
        plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,
                                        lStack_21e8 != lStack_21f0 || plStack_2208 != plStack_2200);
      }
    }
    else {
      func_0x0ca729d0(uStack_21c8);
      lVar15 = *(long *)(uVar18 + 0x78);
      func_0x0d2ee510(&plStack_2148,lStack_2198 + 0x220,auVar9);
      func_0x0d2ecfa0(&plStack_2038,&plStack_2148);
      func_0x0d2ecea0(&plStack_2148);
      func_0x0d2efee0(&plStack_2148,lVar15 + 0x48,*(undefined8 *)auVar9);
      if (plStack_2208 != (long *)0x0) {
        plStack_2200 = plStack_2208;
        func_0x0412a280(plStack_2208,lStack_21f8 - (long)plStack_2208);
      }
      plStack_2208 = plStack_2148;
      plStack_2200 = plStack_2140;
      lStack_21f8 = lStack_2138;
      plStack_2148 = (long *)0x0;
      plStack_2140 = (long *)0x0;
      lStack_2138 = 0;
      if (lStack_21f0 != 0) {
        lStack_21e8 = lStack_21f0;
        func_0x0412a280(lStack_21f0,lStack_21e0 - lStack_21f0);
      }
      lStack_21f0 = lStack_2130;
      lStack_21e8 = lStack_2128;
      lStack_21e0 = lStack_2120;
      lStack_2130 = 0;
      lStack_2128 = 0;
      lStack_2120 = 0;
      if (plStack_2148 != (long *)0x0) {
        plStack_2140 = plStack_2148;
        func_0x0412a280(plStack_2148,lStack_2138 - (long)plStack_2148);
      }
      plStack_2218 = (long *)CONCAT71(plStack_2218._1_7_,1);
      if ((long *)alStack_2018[0] == plStack_2020) goto LAB_0528941f;
    }
    plStack_2180 = (long *)CONCAT44(plStack_2180._4_4_,
                                    *(int *)((long)plStack_21a8 + 0x14) * (int)plStack_21a8[2] *
                                    (int)plStack_21a8[3]);
    uStack_2258 = 0;
    iStack_2250 = 0;
    plStack_21b8 = *(long **)(lStack_2158 + 0x20);
    iVar24 = *(int *)auVar9;
    iVar13 = *(int *)((long)auVar9 + 4);
    FUN_0525af30(&plStack_2148,*(undefined8 *)(uVar18 + 0xca8),auVar9);
    uVar19 = (ulong)(uint)(iVar13 << 4);
    uStack_224c = CONCAT31((int3)(uStack_224c - (int)uStack_21c0 >> 8),
                           (byte)(uStack_224c - (int)uStack_21c0) >> 3);
    param_1 = (ulong)(uint)(iVar24 << 4);
    lVar15 = 0;
    uStack_20c0 = uVar19;
    uStack_20a8 = param_1;
LAB_052894f0:
    lStack_20e0 = lVar15 * 5;
    lStack_20e8 = lVar15 * 5 + 5;
    lStack_20a0 = lVar15 * 4;
    uStack_20f0 = (ulong)(uint)((int)lStack_20a0 + (int)param_1 >> 2);
    plVar17 = (long *)0x0;
    lStack_20f8 = lVar15;
    while( true ) {
      sVar11 = OverworldGeneratorMultinoise__getPreliminarySurfaceLevel
                         (uVar18,(ulong)(uint)((int)uVar19 + (int)plVar17 * 4 >> 2) << 0x20 |
                                 uStack_20f0);
      lStack_21a0 = (lStack_20e0 + (long)plVar17) * 0x29;
      lStack_21d0 = (lStack_20e8 + (long)plVar17) * 0x29;
      bVar25 = 0x28;
      plVar16 = plVar17;
      plStack_2160 = plVar17;
      if ((char)plStack_2218 != '\0') break;
      uVar12 = sVar11 - (int)uStack_21c0;
      uVar22 = uVar12 + 7;
      if (-1 < (int)uVar12) {
        uVar22 = uVar12;
      }
      bVar26 = (byte)(uVar22 >> 3);
      uVar22 = uVar22 >> 3;
      if (bVar26 < (byte)uStack_224c) {
        uVar22 = uStack_224c & 0xff;
      }
      if (0x26 < bVar26) break;
      bVar25 = 0x28;
      uVar12 = 0x28;
      do {
        uVar28 = (ulong)uVar12;
        plVar16 = (long *)(lStack_21a0 + -1 + uVar28);
        if ((((0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0) ||
             (plVar16 = (long *)(lStack_21a0 + 0x28 + uVar28),
             0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0)) ||
            (plVar16 = (long *)(ulong)((int)lStack_21d0 + -1 + uVar12),
            0.0 < afStack_1034[(long)plVar16] || afStack_1034[(long)plVar16] == 0.0)) ||
           (0.0 < afStack_1034[uVar28 + lStack_21d0 + 0x28] ||
            afStack_1034[uVar28 + lStack_21d0 + 0x28] == 0.0)) break;
        bVar25 = bVar25 - 1;
        uVar12 = (uint)bVar25;
      } while ((uVar22 & 0xff) + 1 < uVar12);
      if (bVar25 != 0) break;
LAB_0528a240:
      plVar16 = plStack_2140;
      plVar17 = (long *)((long)plStack_2160 + 1);
      if (plVar17 == (long *)0x4) goto code_r0x0528a25d;
    }
    lStack_20d0 = (lStack_20e8 + (long)plVar17) * 0x29 + 0x29;
    uStack_20b8 = (ulong)(uint)((int)plVar17 * 4);
    lStack_20d8 = lStack_21d0 + 0x2a;
    uStack_20c8 = (ulong)bVar25;
    uStack_2210 = 0;
    while (param_3 = uStack_2210, plStack_2238 == plStack_2230) {
LAB_052897f7:
      plStack_2178 = (long *)(ulong)((int)uStack_2210 * 8 & 0xffff);
      uVar18 = 0;
      do {
        if (plStack_2238 != plStack_2230) {
          plVar17 = plStack_2238;
          do {
            lVar15 = *plVar17;
            fVar33 = *(float *)(lVar15 + 0x4c) * (float)(int)uVar18;
            fVar30 = (float)*(undefined8 *)(lVar15 + 0x10);
            fVar31 = (float)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20);
            fVar34 = (float)*(undefined8 *)(lVar15 + 0x20);
            fVar35 = (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
            *(float *)(lVar15 + 0x30) =
                 fVar30 + fVar33 * ((float)*(undefined8 *)(lVar15 + 0x18) - fVar30);
            *(float *)(lVar15 + 0x34) =
                 fVar31 + fVar33 * ((float)((ulong)*(undefined8 *)(lVar15 + 0x18) >> 0x20) - fVar31)
            ;
            *(float *)(lVar15 + 0x38) =
                 fVar34 + fVar33 * ((float)*(undefined8 *)(lVar15 + 0x28) - fVar34);
            *(float *)(lVar15 + 0x3c) =
                 fVar35 + fVar33 * ((float)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20) - fVar35)
            ;
            plVar17 = plVar17 + 1;
          } while (plVar17 != plStack_2230);
        }
        uVar22 = (int)uVar18 + (int)uStack_20b8;
        plStack_2170 = (long *)(ulong)uVar22;
        iStack_2250 = uVar22 + (int)uVar19;
        lStack_2190 = (long)(int)((int)plStack_21a8[2] * uVar22);
        lVar15 = 0;
        uStack_20b0 = uVar18;
        do {
          if (plStack_2238 != plStack_2230) {
            plVar17 = plStack_2238;
            do {
              lVar20 = *plVar17;
              fVar33 = *(float *)(lVar20 + 0x4c) * (float)((uint)lVar15 & 0xff);
              *(ulong *)(lVar20 + 0x40) =
                   CONCAT44(fVar33 * (*(float *)(lVar20 + 0x3c) - *(float *)(lVar20 + 0x38)) +
                            *(float *)(lVar20 + 0x38),
                            fVar33 * (*(float *)(lVar20 + 0x34) - *(float *)(lVar20 + 0x30)) +
                            *(float *)(lVar20 + 0x30));
              plVar17 = plVar17 + 1;
            } while (plVar17 != plStack_2230);
          }
          lStack_21b0 = lStack_20a0 + lVar15;
          uStack_2258 = CONCAT44(uStack_2258._4_4_,(int)lStack_21b0 + (int)param_1);
          iVar24 = 0;
          lStack_2198 = lVar15;
          do {
            if (plStack_2238 != plStack_2230) {
              plVar17 = plStack_2238;
              do {
                lVar15 = *plVar17;
                *(float *)(lVar15 + 0x48) =
                     (*(float *)(lVar15 + 0x44) - *(float *)(lVar15 + 0x40)) *
                     *(float *)(lVar15 + 0x50) * (float)iVar24 + *(float *)(lVar15 + 0x40);
                plVar17 = plVar17 + 1;
              } while (plVar17 != plStack_2230);
            }
            iVar13 = (int)plStack_2178 + iVar24;
            uVar22 = ((int)plStack_21a8[3] * (int)lStack_21b0 + (int)plStack_2170) *
                     *(int *)((long)plStack_21a8 + 0x14) + iVar13;
            param_3 = (ulong)uVar22;
            if (uVar22 < (uint)plStack_2180) {
              iVar13 = (short)iVar13 + (int)uStack_21c0;
              uStack_2258 = CONCAT44(iVar13,(int)uStack_2258);
              fVar30 = fStack_2050 * _DAT_01198cf8;
              fVar33 = fVar30;
              if (fVar30 <= _DAT_011985d4) {
                fVar33 = _DAT_011985d4;
              }
              fVar33 = (float)(~-(uint)(_DAT_011983f0 < fVar30) & (uint)fVar33 |
                              -(uint)(_DAT_011983f0 < fVar30) & (uint)_DAT_011983f0);
              fVar33 = fVar33 * _DAT_011986e0 + (fVar33 * fVar33 * fVar33) / _DAT_01198350;
              _auStack_2248 = ZEXT416((uint)fVar33);
              if ((((short)plVar14[1] <= iVar13) && (0.0 < fVar33)) &&
                 (0.0 < *(float *)(plVar14 + 0xb) || *(float *)(plVar14 + 0xb) == 0.0)) {
                fVar30 = (*(float *)(plVar14 + 0x16) + _DAT_011983f0) * _DAT_011986e0;
                auStack_2248._4_4_ = _DAT_01198844;
                if ((0.0 <= fVar30) && (auStack_2248._4_4_ = _DAT_01198a9c, fVar30 <= _DAT_011983f0)
                   ) {
                  auStack_2248._4_4_ = fVar30 * _DAT_01198844 + _DAT_01198844;
                }
                fVar30 = (float)((uint)(*(float *)(plVar14 + 0x21) * _DAT_014e57e0) & _DAT_014e7ba0)
                         - (float)auStack_2248._4_4_;
                auStack_2248._4_4_ =
                     (float)((uint)(*(float *)(plVar14 + 0x2c) * _UNK_014e57e4) & _UNK_014e7ba4) -
                     (float)auStack_2248._4_4_;
                auStack_2248._0_4_ = auStack_2248._4_4_;
                if ((float)auStack_2248._4_4_ <= fVar30) {
                  auStack_2248._0_4_ = fVar30;
                }
                if (fVar33 <= (float)auStack_2248._0_4_) {
                  auStack_2248._0_4_ = fVar33;
                }
                fStack_2240 = (float)auStack_2248._4_4_;
                fStack_223c = (float)auStack_2248._4_4_;
              }
              if ((char)plStack_2218 == '\0') {
              }
              else {
                dVar4 = (double)func_0x0d2f06a0(&plStack_2208,uStack_2258,iStack_2250);
                auStack_2248._0_4_ = (float)(dVar4 + (double)(float)auStack_2248._0_4_);
                uVar32 = func_0x0d2ee730(&plStack_2038);
                auStack_2248._0_4_ = (float)uVar32 + (float)auStack_2248._0_4_;
                auStack_2248._4_4_ = (int)((ulong)uVar32 >> 0x20);
                fStack_2240 = (float)extraout_XMM0_Dc;
                fStack_223c = (float)extraout_XMM0_Dd;
              }
              plVar16 = plStack_2148;
              if ((float)auStack_2248._0_4_ <= 0.0) {
                Aquifer__computeSubstance(lStack_2188);
                if ((float)auStack_2248._0_4_ + *(float *)(lStack_2188 + 0x20) <= _DAT_011983fc)
                goto LAB_05289d01;
LAB_05289bcb:
                uVar18 = (long)(uStack_2258 * 0x2fc20f00000000 ^ uStack_2258) >> 0x20 ^
                         (long)iStack_2250 * 0x6ebfff5;
                uVar18 = (long)((uVar18 * 0x285b825 + 0xb) * uVar18) >> 0x10 ^
                         *(ulong *)(uStack_21c8 + 0xc68);
                lVar15 = *(long *)(uStack_21c8 + 0xc70);
                bVar29 = uVar18 == 0;
                if (bVar29 && lVar15 == 0) {
                  uVar18 = 0x9e3779b97f4a7c15;
                }
                if (bVar29 && lVar15 == 0) {
                  lVar15 = 0x6a09e667f3bcc909;
                }
                uVar12 = (uint)(uStack_2258 >> 0x20);
                param_1 = *(ulong *)(uStack_21c8 + 0xc78);
                if (((-1 < (long)uStack_2258) && (param_1 = uStack_2150, uVar12 < 9)) &&
                   (param_1 = *(ulong *)(uStack_21c8 + 0xc78),
                   (float)(~-(uint)(_DAT_011983f0 < (float)(int)uVar12 * _DAT_01198a50) &
                          (uint)(_DAT_011983f0 - (float)(int)uVar12 * _DAT_01198a50)) <=
                   (float)(uint)(((lVar15 + uVar18) * 0x20000 | lVar15 + uVar18 >> 0x2f) + uVar18 >>
                                0x28) * _DAT_01198a44)) {
                  param_1 = uStack_2150;
                }
                fVar33 = (float)(int)uVar12;
                lVar15 = (ulong)(*(float *)(lStack_2220 + 0x3058) <= 0.0) * 0x20;
                fVar30 = fVar33 - (float)*(int *)(lVar15 + 0x3138 + lStack_2220);
                cVar10 = '\0';
                if ((0.0 <= fVar30) &&
                   (fVar31 = (float)*(int *)(lVar15 + 0x313c + lStack_2220) - fVar33, cVar10 = '\0',
                   0.0 <= fVar31)) {
                  if (fVar30 <= fVar31) {
                    fVar31 = fVar30;
                  }
                  fVar30 = (float)((uint)*(float *)(lStack_2220 + 0x3058) & _DAT_014e7ba0);
                  if ((float)(~-(uint)(_DAT_011983f0 < fVar31 / _DAT_011987c0) &
                             (uint)((fVar31 / _DAT_011987c0) * _DAT_011987c4 + _DAT_01198728)) +
                      fVar30 < _DAT_01198c0c) {
LAB_0528a071:
                    cVar10 = '\0';
                  }
                  else {
                    lVar20 = *(long *)(lStack_2220 + 0x3118);
                    uVar18 = (long)(CONCAT44((int)fVar33,(int)(float)(int)uStack_2258) *
                                    0x2fc20f00000000 ^ (ulong)(uint)(int)fVar33 << 0x20) >> 0x20 ^
                             (long)(int)(float)iStack_2250 * 0x6ebfff5;
                    uVar19 = (long)((uVar18 * 0x285b825 + 0xb) * uVar18) >> 0x10 ^
                             *(ulong *)(lVar20 + 0xe8);
                    uVar18 = *(ulong *)(lVar20 + 0xf0);
                    if (uVar19 == 0 && uVar18 == 0) {
                      uVar19 = 0x9e3779b97f4a7c15;
                      uVar18 = 0x6a09e667f3bcc909;
                    }
                    if ((float)(uint)(((uVar19 + uVar18) * 0x20000 | uVar19 + uVar18 >> 0x2f) +
                                      uVar19 >> 0x28) * _DAT_01198a44 <= _DAT_01198c10) {
                      fVar33 = (float)(*(uint *)(lStack_2220 + 0x30b0) & _DAT_014e7ba0) +
                               _DAT_014e8750;
                      fVar31 = (float)(*(uint *)(lStack_2220 + 0x3108) & _UNK_014e7ba4) +
                               _UNK_014e8754;
                      if (fVar33 <= fVar31) {
                        fVar33 = fVar31;
                      }
                      if (fVar33 < 0.0) {
                        uVar18 = uVar18 ^ uVar19;
                        uVar28 = uVar18 << 0x15 ^ (uVar19 << 0x31 | uVar19 >> 0xf) ^ uVar18;
                        uVar19 = uVar18 << 0x1c | uVar18 >> 0x24;
                        uVar18 = uVar28 + uVar19;
                        auStack_2248._0_4_ =
                             (float)(uint)((uVar18 * 0x20000 | uVar18 >> 0x2f) + uVar28 >> 0x28) *
                             _DAT_01198a44;
                        fVar33 = (fVar30 + _DAT_01198450) / _DAT_01198414;
                        fStack_2168 = _DAT_01198a9c;
                        if ((0.0 <= fVar33) &&
                           (fStack_2168 = _DAT_01198aec, fVar33 <= _DAT_011983f0)) {
                          fStack_2168 = fVar33 * _DAT_01198414 + _DAT_01198a9c;
                        }
                        fVar33 = (float)func_0x0d3414e0(lVar20 + 0xa8);
                        lVar20 = 0x10;
                        if (((float)auStack_2248._0_4_ < fStack_2168) && (_DAT_011985d4 <= fVar33))
                        {
                          fVar30 = _DAT_011983f0;
                          if (fVar33 <= _DAT_011983f0) {
                            fVar30 = fVar33;
                          }
                          if (_DAT_01198b44 < fVar30) {
                            uVar19 = uVar19 ^ uVar28;
                            uVar28 = uVar19 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar19;
                            uVar18 = (uVar19 << 0x1c | uVar19 >> 0x24) + uVar28;
                            lVar20 = (ulong)((float)(uint)((uVar18 * 0x20000 | uVar18 >> 0x2f) +
                                                           uVar28 >> 0x28) * _DAT_01198a44 <
                                            _DAT_01198b4c) << 3;
                          }
                        }
                        param_1 = *(ulong *)(lStack_2220 + lVar15 + 0x3120 + lVar20);
                      }
                    }
LAB_0528a135:
                    cVar10 = '\0';
                  }
                }
              }
              else {
                if (_DAT_011983fc < (float)auStack_2248._0_4_) goto LAB_05289bcb;
LAB_05289d01:
                if (*(int *)(lStack_2188 + 0x1c) <= uStack_2258._4_4_) {
                  if ((_DAT_0f6ffb10 == (long *)0x0) &&
                     (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                               &UNK_013a2901), cVar10 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  param_1 = *(ulong *)(*_DAT_0f6ffb10 + 0x200);
                  goto LAB_0528a071;
                }
                bVar29 = *(char *)(lStack_2188 + 0x24) != '\0';
                if (plStack_21b8 == (long *)0x0) {
                  cVar10 = '\0';
                  param_1 = *(ulong *)(lStack_2188 + 0x58 + (ulong)bVar29 * 8);
                  cVar2 = '\0';
                  if (plVar16 == (long *)0x0) goto LAB_0528a140;
LAB_0528a08b:
                  cVar10 = cVar2;
                  lVar15 = ((long)((int)uStack_2258 >> 2) - (long)(int)plVar16[3]) * 0x660 +
                           *plVar16;
                  lVar20 = ((long)(iStack_2250 >> 2) - (long)*(int *)((long)plVar16 + 0x1c)) * 0x198
                  ;
                  if (_DAT_0119845c < *(float *)(lVar20 + lVar15)) goto LAB_0528a140;
                  iVar23 = uStack_2258._4_4_ - (short)plVar16[4];
                  iVar27 = iVar23 >> 0x1f;
                  iVar23 = iVar27 - iVar23;
                  iVar13 = iVar23 + 7;
                  if (-1 < iVar23) {
                    iVar13 = iVar23;
                  }
                  uVar12 = iVar27 - (iVar13 >> 3);
                  if ((((0x28 < uVar12) ||
                       (cVar2 = *(char *)(lVar15 + lVar20 + 0x16c + (ulong)uVar12), cVar2 == '\0'))
                      || (cVar2 != '\x01')) ||
                     (**(char **)(*(long *)(param_1 + 0x68) + 0x20) != '\x05')) goto LAB_0528a140;
                  param_1 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
                  goto LAB_0528a135;
                }
                cVar10 = *(char *)(lStack_2188 + 0x25);
                param_1 = *(ulong *)(lStack_2188 + 0x58 + (ulong)bVar29 * 8);
                cVar2 = cVar10;
                if (plVar16 != (long *)0x0) goto LAB_0528a08b;
              }
LAB_0528a140:
              *(ulong *)(*plStack_21a8 + (ulong)uVar22 * 8) = param_1;
              plVar16 = plVar14;
              if ((plStack_21b8 != (long *)0x0) && (cVar10 != '\0')) {
                uStack_2164 = 1;
                plVar17 = *(long **)(lStack_2158 + 0x20);
                if (plVar17 == (long *)0x0) goto LAB_0528a337;
                (**(code **)(*plVar17 + 0x30))(plVar17,&uStack_2258,param_1,&uStack_2164);
              }
              if (param_8 != (long *)0x0) {
                if ((_DAT_0f6ffb10 == (long *)0x0) &&
                   (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                             &UNK_013a2901), cVar10 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if (param_1 != *(ulong *)(*_DAT_0f6ffb10 + 0x200)) {
                  lVar15 = lStack_21b0 * 2 + *param_8;
                  sVar21 = (short)(uStack_2258 >> 0x20) + 1;
                  sVar11 = *(short *)(lVar15 + lStack_2190 * 2);
                  if (sVar21 < sVar11) {
                    sVar21 = sVar11;
                  }
                  *(short *)(lVar15 + lStack_2190 * 2) = sVar21;
                }
              }
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 != 8);
          lVar15 = lStack_2198 + 1;
          param_1 = uStack_20a8;
        } while (lVar15 != 4);
        uVar22 = (int)uStack_20b0 + 1;
        uVar18 = (ulong)uVar22;
        uVar19 = uStack_20c0;
      } while (uVar22 != 4);
      uStack_2210 = uStack_2210 + 1;
      uVar18 = uStack_21c8;
      if (uStack_2210 == uStack_20c8) goto LAB_0528a240;
    }
    plVar17 = plStack_2238;
    while( true ) {
      puVar3 = (ulong *)*plVar17;
      uVar18 = *puVar3;
      if (uVar18 <= lStack_21a0 + uStack_2210) break;
      uVar28 = puVar3[1];
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(uVar28 + (lStack_21a0 + uStack_2210) * 4);
      if (uVar18 <= lStack_21d0 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x14) =
           *(undefined4 *)(uVar28 + (lStack_21d0 + uStack_2210) * 4);
      plVar16 = (long *)(uVar28 + lStack_21a0 * 4);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 0xa4);
      if (uVar18 <= lStack_20d0 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x1c) =
           *(undefined4 *)(uVar28 + (lStack_20d0 + uStack_2210) * 4);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 4);
      *(undefined4 *)((long)puVar3 + 0x24) =
           *(undefined4 *)(uVar28 + lStack_21d0 * 4 + 4 + uStack_2210 * 4);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)((long)plVar16 + uStack_2210 * 4 + 0xa8);
      if (uVar18 <= lStack_20d8 + uStack_2210) break;
      *(undefined4 *)((long)puVar3 + 0x2c) =
           *(undefined4 *)(uVar28 + (lStack_20d8 + uStack_2210) * 4);
      plVar17 = plVar17 + 1;
      if (plVar17 == plStack_2230) goto LAB_052897f7;
    }
    func_0x04890760();
LAB_0528a337:
    func_0x04891200();
LAB_0528a33c:
    func_0x0eec74c0(0x4180);
  } while( true );
code_r0x0528a25d:
  lVar15 = lStack_20f8 + 1;
  if (lVar15 == 4) {
    if (plStack_2140 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_2140 + 1;
      lVar15 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_2140 + 0x10))(plStack_2140);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0d2ecea0(&plStack_2038);
    if (lStack_21f0 != 0) {
      lStack_21e8 = lStack_21f0;
      func_0x0412a280(lStack_21f0,lStack_21e0 - lStack_21f0);
    }
    if (plStack_2208 != (long *)0x0) {
      plStack_2200 = plStack_2208;
      func_0x0412a280(plStack_2208,lStack_21f8 - (long)plStack_2208);
    }
    if (plStack_2238 != (long *)0x0) {
      func_0x0412a280(plStack_2238,(long)plStack_2228 - (long)plStack_2238);
    }
    func_0x0412a280(lStack_2220,0x3160);
    func_0x0412a280(plVar14,0x4180);
    return;
  }
  goto LAB_052894f0;
}


```

### Assembly

```asm
05288b10  PUSH RBP
05288b11  PUSH R15
05288b13  PUSH R14
05288b15  PUSH R13
05288b17  PUSH R12
05288b19  PUSH RBX
05288b1a  SUB RSP,0x2238
05288b21  MOV qword ptr [RSP + 0x110],R9
05288b29  MOV qword ptr [RSP + 0xe0],R8
05288b31  MOV qword ptr [RSP + 0xb8],RCX
05288b39  MOV R14,RDX
05288b3c  MOV qword ptr [RSP + 0xc0],RSI
05288b44  MOV R15,RDI
05288b47  MOV RCX,qword ptr [RDI + 0x28]
05288b4b  MOVSX EAX,word ptr [RCX + 0xa8]
05288b52  MOV qword ptr [RSP + 0xa8],RAX
05288b5a  MOV qword ptr [RSP + 0xd0],RCX
05288b62  MOVZX EAX,word ptr [RCX + 0xac]
05288b69  MOV dword ptr [RSP + 0x1c],EAX
05288b6d  LEA RDI,[0xf6ff9e0]
05288b74  LEA RSI,[0xf71bd88]
05288b7b  MOV EDX,0x1
05288b80  CALL 0x0cc41df0
05288b85  MOV qword ptr [RSP + 0x118],RAX
05288b8d  CMP qword ptr [RSP + 0x2278],0x0
05288b96  JZ 0x05288bb6
05288b98  MOV RAX,qword ptr [RSP + 0x2278]
05288ba0  MOV RDI,qword ptr [RAX]
05288ba3  MOV RDX,qword ptr [RAX + 0x8]
05288ba7  SUB RDX,RDI
05288baa  TEST RDX,RDX
05288bad  JLE 0x05288bb6
05288baf  XOR ESI,ESI
05288bb1  CALL 0x0eee2dd0
05288bb6  LEA RBX,[R15 + 0x6e0]
05288bbd  MOV RAX,qword ptr [0x0f5463b0]
05288bc4  LEA RDI,[0xf5463b0]
05288bcb  MOV ESI,0x4180
05288bd0  CALL qword ptr [RAX + 0x10]
05288bd3  MOV R13,RAX
05288bd6  TEST RAX,RAX
05288bd9  JZ 0x0528a33c
05288bdf  MOV qword ptr [R13],RBX
05288be3  MOV RAX,qword ptr [RSP + 0xa8]
05288beb  ADD EAX,0x4
05288bee  MOV word ptr [R13 + 0x8],AX
05288bf3  LEA RAX,[R13 + 0x10]
05288bf7  MOV qword ptr [RSP + 0xf8],RAX
05288bff  XORPS XMM0,XMM0
05288c02  MOVUPS xmmword ptr [R13 + 0x10],XMM0
05288c07  MOVUPS xmmword ptr [R13 + 0x20],XMM0
05288c0c  MOVUPS xmmword ptr [R13 + 0x30],XMM0
05288c11  MOVUPS xmmword ptr [R13 + 0x40],XMM0
05288c16  MOVUPS xmmword ptr [R13 + 0x50],XMM0
05288c1b  MOV dword ptr [R13 + 0x60],0x0
05288c23  LEA RAX,[R13 + 0x68]
05288c27  MOV qword ptr [RSP + 0xf0],RAX
05288c2f  MOVUPS xmmword ptr [R13 + 0x68],XMM0
05288c34  MOVUPS xmmword ptr [R13 + 0x78],XMM0
05288c39  MOVUPS xmmword ptr [R13 + 0x88],XMM0
05288c41  MOVUPS xmmword ptr [R13 + 0x98],XMM0
05288c49  MOVUPS xmmword ptr [R13 + 0xa8],XMM0
05288c51  MOV dword ptr [R13 + 0xb8],0x0
05288c5c  LEA RAX,[R13 + 0xc0]
05288c63  MOV qword ptr [RSP + 0xe8],RAX
05288c6b  MOVUPS xmmword ptr [R13 + 0xc0],XMM0
05288c73  MOVUPS xmmword ptr [R13 + 0xd0],XMM0
05288c7b  MOVUPS xmmword ptr [R13 + 0xe0],XMM0
05288c83  MOVUPS xmmword ptr [R13 + 0xf0],XMM0
05288c8b  MOVUPS xmmword ptr [R13 + 0x100],XMM0
05288c93  MOV dword ptr [R13 + 0x110],0x0
05288c9e  LEA RAX,[R13 + 0x118]
05288ca5  MOV qword ptr [RSP + 0xb0],RAX
05288cad  MOVUPS xmmword ptr [R13 + 0x158],XMM0
05288cb5  MOVUPS xmmword ptr [R13 + 0x148],XMM0
05288cbd  MOVUPS xmmword ptr [R13 + 0x138],XMM0
05288cc5  MOVUPS xmmword ptr [R13 + 0x128],XMM0
05288ccd  MOVUPS xmmword ptr [R13 + 0x118],XMM0
05288cd5  MOV dword ptr [R13 + 0x168],0x0
05288ce0  LEA RDI,[R13 + 0x170]
05288ce7  MOV EDX,0x4010
05288cec  MOV qword ptr [RSP + 0x50],RDI
05288cf1  XOR ESI,ESI
05288cf3  CALL 0x0eee2dd0
05288cf8  MOV EAX,0x78
05288cfd  MOVAPS XMM0,xmmword ptr [0x014ea7c0]
05288d04  NOP word ptr CS:[RAX + RAX*0x1]
05288d10  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
05288d16  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
05288d1c  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
05288d22  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
05288d28  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
05288d2e  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
05288d34  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
05288d3a  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
05288d40  ADD RAX,0x20
05288d44  CMP RAX,0x478
05288d4a  JNZ 0x05288d10
05288d4c  MOV dword ptr [R13 + 0x1170],0x3f800000
05288d57  LEA RAX,[R13 + 0x1174]
05288d5e  MOV qword ptr [RSP + 0xd8],RAX
05288d66  MOV EAX,0x479
05288d6b  NOP dword ptr [RAX + RAX*0x1]
05288d70  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
05288d76  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
05288d7c  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
05288d82  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
05288d88  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
05288d8e  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
05288d94  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
05288d9a  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
05288da0  ADD RAX,0x20
05288da4  CMP RAX,0x879
05288daa  JNZ 0x05288d70
05288dac  MOV qword ptr [RSP + 0x20],R14
05288db1  MOV qword ptr [RSP + 0xa0],R15
05288db9  MOV dword ptr [R13 + 0x2174],0x3f800000
05288dc4  LEA R12,[R13 + 0x2178]
05288dcb  MOV EAX,0x87a
05288dd0  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
05288dd6  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
05288ddc  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
05288de2  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
05288de8  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
05288dee  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
05288df4  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
05288dfa  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
05288e00  ADD RAX,0x20
05288e04  CMP RAX,0xc7a
05288e0a  JNZ 0x05288dd0
05288e0c  MOV dword ptr [R13 + 0x3178],0x3f800000
05288e17  MOV RBP,R13
05288e1a  ADD RBP,0x317c
05288e21  MOV EAX,0xc7b
05288e26  NOP word ptr CS:[RAX + RAX*0x1]
05288e30  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x70],XMM0
05288e36  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x60],XMM0
05288e3c  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x50],XMM0
05288e42  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x40],XMM0
05288e48  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x30],XMM0
05288e4e  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x20],XMM0
05288e54  MOVUPS xmmword ptr [R13 + RAX*0x4 + -0x10],XMM0
05288e5a  MOVUPS xmmword ptr [R13 + RAX*0x4],XMM0
05288e60  ADD RAX,0x20
05288e64  CMP RAX,0x107b
05288e6a  JNZ 0x05288e30
05288e6c  MOV dword ptr [R13 + 0x417c],0x3f800000
05288e77  LEA RDI,[0xf5463b0]
05288e7e  MOV RAX,qword ptr [0x0f5463b0]
05288e85  MOV ESI,0x3160
05288e8a  CALL qword ptr [RAX + 0x10]
05288e8d  MOV RBX,RAX
05288e90  TEST RAX,RAX
05288e93  JZ 0x0528a34d
05288e99  MOV R14,qword ptr [RSP + 0xa0]
05288ea1  LEA RSI,[R14 + 0x7c0]
05288ea8  MOV RDI,RBX
05288eab  CALL 0x05268e90
05288eb0  XORPS XMM0,XMM0
05288eb3  MOVAPS xmmword ptr [RSP + 0x210],XMM0
05288ebb  MOVAPS xmmword ptr [RSP + 0x200],XMM0
05288ec3  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
05288ecb  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
05288ed3  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
05288edb  MOV dword ptr [RSP + 0x220],0x0
05288ee6  MOVAPS xmmword ptr [RSP + 0x30],XMM0
05288eeb  MOV qword ptr [RSP + 0x40],0x0
05288ef4  LEA R15,[RSP + 0x1234]
05288efc  MOV EDX,0x1004
05288f01  MOV RDI,R15
05288f04  XOR ESI,ESI
05288f06  CALL 0x0eee2dd0
05288f0b  MOV RAX,qword ptr [RSP + 0x20]
05288f10  MOV EDX,dword ptr [RAX]
05288f12  MOV ECX,dword ptr [RAX + 0x4]
05288f15  MOV qword ptr [RSP + 0x48],RBX
05288f1a  MOV qword ptr [RSP],RBX
05288f1e  LEA RDI,[RSP + 0x230]
05288f26  MOV RSI,R14
05288f29  MOV R8,qword ptr [RSP + 0xb8]
05288f31  MOV R9,R13
05288f34  CALL 0x05287930
05288f39  LEA RSI,[RSP + 0x230]
05288f41  MOV EDX,0x1004
05288f46  MOV RDI,R15
05288f49  CALL 0x0eee2f00
05288f4e  XORPS XMM0,XMM0
05288f51  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
05288f59  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
05288f61  MOVAPS xmmword ptr [RSP + 0x200],XMM0
05288f69  MOVUPS xmmword ptr [RSP + 0x20c],XMM0
05288f71  MOV qword ptr [RSP + 0x1d0],0x401
05288f7d  MOV qword ptr [RSP + 0x1d8],R15
05288f85  MOVSD XMM0,qword ptr [0x014e9c40]
05288f8d  MOVSD qword ptr [RSP + 0x21c],XMM0
05288f96  LEA RDI,[0xf5463b0]
05288f9d  MOV RAX,qword ptr [0x0f5463b0]
05288fa4  MOV ESI,0x8
05288fa9  CALL qword ptr [RAX + 0x10]
05288fac  MOV RBX,RAX
05288faf  TEST RAX,RAX
05288fb2  JZ 0x0528a35e
05288fb8  MOV qword ptr [RSP + 0x30],RBX
05288fbd  MOV RAX,RBX
05288fc0  ADD RAX,0x8
05288fc4  MOV qword ptr [RSP + 0x40],RAX
05288fc9  LEA RAX,[RSP + 0x1d0]
05288fd1  MOV qword ptr [RBX],RAX
05288fd4  LEA RDI,[0xf5463b0]
05288fdb  MOV RAX,qword ptr [0x0f5463b0]
05288fe2  MOV ESI,0x40
05288fe7  CALL qword ptr [RAX + 0x10]
05288fea  MOV R15,RAX
05288fed  TEST RAX,RAX
05288ff0  JZ 0x0528a36f
05288ff6  LEA R14,[R15 + 0x8]
05288ffa  MOV RAX,R15
05288ffd  ADD RAX,0x40
05289001  MOV RCX,qword ptr [RBX]
05289004  MOV qword ptr [R15],RCX
05289007  MOV qword ptr [RSP + 0x30],R15
0528900c  MOV qword ptr [RSP + 0x38],R14
05289011  MOV qword ptr [RSP + 0x40],RAX
05289016  MOV ESI,0x8
0528901b  MOV RDI,RBX
0528901e  CALL 0x0412a280
05289023  MOV qword ptr [R13 + 0x10],0x401
0528902b  MOV RAX,qword ptr [RSP + 0x50]
05289030  MOV qword ptr [R13 + 0x18],RAX
05289034  XORPS XMM1,XMM1
05289037  MOVUPS xmmword ptr [R13 + 0x20],XMM1
0528903c  MOVUPS xmmword ptr [R13 + 0x30],XMM1
05289041  MOVUPS xmmword ptr [R13 + 0x40],XMM1
05289046  MOVUPS xmmword ptr [R13 + 0x4c],XMM1
0528904b  MOVSD XMM0,qword ptr [0x014e9c40]
05289053  MOVSD qword ptr [R13 + 0x5c],XMM0
05289059  MOV qword ptr [R13 + 0x68],0x401
05289061  MOV RAX,qword ptr [RSP + 0xd8]
05289069  MOV qword ptr [R13 + 0x70],RAX
0528906d  MOVUPS xmmword ptr [R13 + 0x78],XMM1
05289072  MOVUPS xmmword ptr [R13 + 0x88],XMM1
0528907a  MOVUPS xmmword ptr [R13 + 0x98],XMM1
05289082  MOVUPS xmmword ptr [R13 + 0xa4],XMM1
0528908a  MOVSD qword ptr [R13 + 0xb4],XMM0
05289093  MOV qword ptr [R13 + 0xc0],0x401
0528909e  MOV qword ptr [R13 + 0xc8],R12
052890a5  MOVUPS xmmword ptr [R13 + 0xd0],XMM1
052890ad  MOVUPS xmmword ptr [R13 + 0xe0],XMM1
052890b5  MOVUPS xmmword ptr [R13 + 0xf0],XMM1
052890bd  MOVUPS xmmword ptr [R13 + 0xfc],XMM1
052890c5  MOVSD qword ptr [R13 + 0x10c],XMM0
052890ce  MOV qword ptr [R13 + 0x118],0x401
052890d9  MOV qword ptr [R13 + 0x120],RBP
052890e0  MOVUPS xmmword ptr [R13 + 0x128],XMM1
052890e8  MOVUPS xmmword ptr [R13 + 0x138],XMM1
052890f0  MOVUPS xmmword ptr [R13 + 0x148],XMM1
052890f8  MOVUPS xmmword ptr [R13 + 0x154],XMM1
05289100  MOVSD qword ptr [R13 + 0x164],XMM0
05289109  MOV RAX,qword ptr [RSP + 0xf8]
05289111  MOV qword ptr [RSP + 0x230],RAX
05289119  MOV RAX,qword ptr [RSP + 0xf0]
05289121  MOV qword ptr [RSP + 0x238],RAX
05289129  MOV RAX,qword ptr [RSP + 0xe8]
05289131  MOV qword ptr [RSP + 0x240],RAX
05289139  MOV RAX,qword ptr [RSP + 0xb0]
05289141  MOV qword ptr [RSP + 0x248],RAX
05289149  LEA RCX,[RSP + 0x250]
05289151  LEA RDI,[RSP + 0x30]
05289156  LEA RDX,[RSP + 0x230]
0528915e  MOV R8D,0x4
05289164  MOV RSI,R14
05289167  CALL 0x052bd680
0528916c  MOV RDI,qword ptr [RSP + 0x48]
05289171  LEA RAX,[RDI + 0x3010]
05289178  MOV qword ptr [RDI + 0x3010],0x401
05289183  MOV qword ptr [RDI + 0x3018],RDI
0528918a  XORPS XMM0,XMM0
0528918d  MOVUPS xmmword ptr [RDI + 0x3020],XMM0
05289194  MOVUPS xmmword ptr [RDI + 0x3030],XMM0
0528919b  MOVUPS xmmword ptr [RDI + 0x3040],XMM0
052891a2  MOVUPS xmmword ptr [RDI + 0x304c],XMM0
052891a9  MOVSD XMM1,qword ptr [0x014e9c40]
052891b1  MOVSD qword ptr [RDI + 0x305c],XMM1
052891b9  LEA RCX,[RDI + 0x1004]
052891c0  LEA RDX,[RDI + 0x3068]
052891c7  MOV qword ptr [RDI + 0x3068],0x401
052891d2  MOV qword ptr [RDI + 0x3070],RCX
052891d9  MOVUPS xmmword ptr [RDI + 0x3078],XMM0
052891e0  MOVUPS xmmword ptr [RDI + 0x3088],XMM0
052891e7  MOVUPS xmmword ptr [RDI + 0x3098],XMM0
052891ee  MOVUPS xmmword ptr [RDI + 0x30a4],XMM0
052891f5  MOVSD qword ptr [RDI + 0x30b4],XMM1
052891fd  LEA RCX,[RDI + 0x2008]
05289204  LEA RSI,[RDI + 0x30c0]
0528920b  MOV qword ptr [RDI + 0x30c0],0x401
05289216  MOV qword ptr [RDI + 0x30c8],RCX
0528921d  MOVUPS xmmword ptr [RDI + 0x30d0],XMM0
05289224  MOVUPS xmmword ptr [RDI + 0x30e0],XMM0
0528922b  MOVUPS xmmword ptr [RDI + 0x30f0],XMM0
05289232  MOVUPS xmmword ptr [RDI + 0x30fc],XMM0
05289239  MOVSD qword ptr [RDI + 0x310c],XMM1
05289241  MOV qword ptr [RSP + 0x120],RAX
05289249  MOV qword ptr [RSP + 0x128],RDX
05289251  MOV qword ptr [RSP + 0x130],RSI
05289259  MOV RSI,qword ptr [RSP + 0x38]
0528925e  LEA RCX,[RSP + 0x138]
05289266  LEA RDI,[RSP + 0x30]
0528926b  LEA RDX,[RSP + 0x120]
05289273  MOV R8D,0x3
05289279  CALL 0x052bd680
0528927e  MOV R14,qword ptr [RSP + 0xa0]
05289286  MOV RBX,qword ptr [RSP + 0x20]
0528928b  XORPS XMM0,XMM0
0528928e  MOVAPS xmmword ptr [RSP + 0x80],XMM0
05289296  MOVAPS xmmword ptr [RSP + 0x70],XMM0
0528929b  MOVAPS xmmword ptr [RSP + 0x60],XMM0
052892a0  MOVAPS xmmword ptr [RSP + 0x260],XMM0
052892a8  MOVAPS xmmword ptr [RSP + 0x250],XMM0
052892b0  MOVAPS xmmword ptr [RSP + 0x240],XMM0
052892b8  MOVAPS xmmword ptr [RSP + 0x230],XMM0
052892c0  MOV qword ptr [RSP + 0x270],0x0
052892cc  CMP byte ptr [RSP + 0x2270],0x0
052892d4  JZ 0x0528941f
052892da  MOV RDI,R14
052892dd  CALL 0x0ca729d0
052892e2  MOV R15,qword ptr [R14 + 0x78]
052892e6  MOV RSI,qword ptr [RSP + 0xd0]
052892ee  ADD RSI,0x220
052892f5  LEA RDI,[RSP + 0x120]
052892fd  MOV RDX,RBX
05289300  CALL 0x0d2ee510
05289305  LEA RDI,[RSP + 0x230]
0528930d  LEA R12,[RSP + 0x120]
05289315  MOV RSI,R12
05289318  CALL 0x0d2ecfa0
0528931d  MOV RDI,R12
05289320  CALL 0x0d2ecea0
05289325  ADD R15,0x48
05289329  MOV RDX,qword ptr [RBX]
0528932c  LEA RDI,[RSP + 0x120]
05289334  MOV RSI,R15
05289337  CALL 0x0d2efee0
0528933c  MOV RDI,qword ptr [RSP + 0x60]
05289341  TEST RDI,RDI
05289344  JZ 0x05289358
05289346  MOV qword ptr [RSP + 0x68],RDI
0528934b  MOV RSI,qword ptr [RSP + 0x70]
05289350  SUB RSI,RDI
05289353  CALL 0x0412a280
05289358  MOVAPS XMM0,xmmword ptr [RSP + 0x120]
05289360  MOVAPS xmmword ptr [RSP + 0x60],XMM0
05289365  MOV RAX,qword ptr [RSP + 0x130]
0528936d  MOV qword ptr [RSP + 0x70],RAX
05289372  XORPS XMM1,XMM1
05289375  MOVAPS xmmword ptr [RSP + 0x120],XMM1
0528937d  MOV qword ptr [RSP + 0x130],0x0
05289389  MOV RDI,qword ptr [RSP + 0x78]
0528938e  TEST RDI,RDI
05289391  JZ 0x052893b8
05289393  MOV qword ptr [RSP + 0x80],RDI
0528939b  MOV RSI,qword ptr [RSP + 0x88]
052893a3  SUB RSI,RDI
052893a6  CALL 0x0412a280
052893ab  XORPS XMM1,XMM1
052893ae  MOV RDI,qword ptr [RSP + 0x120]
052893b6  JMP 0x052893ba
052893b8  XOR EDI,EDI
052893ba  MOVUPS XMM0,xmmword ptr [RSP + 0x138]
052893c2  MOVUPS xmmword ptr [RSP + 0x78],XMM0
052893c7  MOV RAX,qword ptr [RSP + 0x148]
052893cf  MOV qword ptr [RSP + 0x88],RAX
052893d7  MOVUPS xmmword ptr [RSP + 0x138],XMM1
052893df  MOV qword ptr [RSP + 0x148],0x0
052893eb  TEST RDI,RDI
052893ee  JZ 0x05289408
052893f0  MOV qword ptr [RSP + 0x128],RDI
052893f8  MOV RSI,qword ptr [RSP + 0x130]
05289400  SUB RSI,RDI
05289403  CALL 0x0412a280
05289408  MOV RAX,qword ptr [RSP + 0x250]
05289410  MOV byte ptr [RSP + 0x50],0x1
05289415  CMP RAX,qword ptr [RSP + 0x248]
0528941d  JNZ 0x05289467
0528941f  MOV RAX,qword ptr [RSP + 0x268]
05289427  MOV byte ptr [RSP + 0x50],0x1
0528942c  CMP RAX,qword ptr [RSP + 0x260]
05289434  JNZ 0x05289467
05289436  MOV RAX,qword ptr [RSP + 0x238]
0528943e  CMP RAX,qword ptr [RSP + 0x230]
05289446  JNZ 0x05289467
05289448  MOV RAX,qword ptr [RSP + 0x60]
0528944d  XOR RAX,qword ptr [RSP + 0x68]
05289452  MOV RCX,qword ptr [RSP + 0x80]
0528945a  XOR RCX,qword ptr [RSP + 0x78]
0528945f  OR RCX,RAX
05289462  SETNZ byte ptr [RSP + 0x50]
05289467  MOV RAX,qword ptr [RSP + 0xc0]
0528946f  MOV ECX,dword ptr [RAX + 0x14]
05289472  IMUL ECX,dword ptr [RAX + 0x10]
05289476  IMUL ECX,dword ptr [RAX + 0x18]
0528947a  MOV dword ptr [RSP + 0xe8],ECX
05289481  MOV qword ptr [RSP + 0x10],0x0
0528948a  MOV dword ptr [RSP + 0x18],0x0
05289492  MOV RAX,qword ptr [RSP + 0x110]
0528949a  MOV RAX,qword ptr [RAX + 0x20]
0528949e  MOV qword ptr [RSP + 0xb0],RAX
052894a6  MOV R15D,dword ptr [RBX]
052894a9  MOV R12D,dword ptr [RBX + 0x4]
052894ad  MOV RSI,qword ptr [R14 + 0xca8]
052894b4  LEA RDI,[RSP + 0x120]
052894bc  MOV RDX,RBX
052894bf  CALL 0x0525af30
052894c4  SHL R12D,0x4
052894c8  MOV EAX,dword ptr [RSP + 0x1c]
052894cc  SUB EAX,dword ptr [RSP + 0xa8]
052894d3  SHR AL,0x3
052894d6  MOV dword ptr [RSP + 0x1c],EAX
052894da  SHL R15D,0x4
052894de  XOR EAX,EAX
052894e0  MOV qword ptr [RSP + 0x1c0],R15
052894e8  MOV qword ptr [RSP + 0x1a8],R12
052894f0  LEA RCX,[RAX + RAX*0x4]
052894f4  MOV qword ptr [RSP + 0x188],RCX
052894fc  LEA RCX,[RAX + RAX*0x4]
05289500  ADD RCX,0x5
05289504  MOV qword ptr [RSP + 0x180],RCX
0528950c  MOV qword ptr [RSP + 0x170],RAX
05289514  LEA RAX,[RAX*0x4]
0528951c  MOV qword ptr [RSP + 0x1c8],RAX
05289524  ADD EAX,R15D
05289527  SAR EAX,0x2
0528952a  XOR ECX,ECX
0528952c  MOV qword ptr [RSP + 0x178],RAX
05289534  LEA ESI,[R12 + RCX*0x4]
05289538  SAR ESI,0x2
0528953b  SHL RSI,0x20
0528953f  OR RSI,RAX
05289542  MOV RDI,R14
05289545  MOV RBX,RCX
05289548  CALL 0x052884e0
0528954d  MOV RCX,qword ptr [RSP + 0x188]
05289555  ADD RCX,RBX
05289558  LEA RDX,[RCX + RCX*0x4]
0528955c  LEA RCX,[RCX + RDX*0x8]
05289560  MOV qword ptr [RSP + 0xc8],RCX
05289568  MOV RCX,qword ptr [RSP + 0x180]
05289570  MOV qword ptr [RSP + 0x108],RBX
05289578  ADD RCX,RBX
0528957b  LEA RDX,[RCX + RCX*0x4]
0528957f  LEA RSI,[RCX + RDX*0x8]
05289583  MOV qword ptr [RSP + 0x98],RSI
0528958b  MOV SIL,0x28
0528958e  CMP byte ptr [RSP + 0x50],0x0
05289593  JNZ 0x05289660
05289599  CWDE
0528959a  SUB EAX,dword ptr [RSP + 0xa8]
052895a1  LEA EDI,[RAX + 0x7]
052895a4  TEST EAX,EAX
052895a6  CMOVNS EDI,EAX
052895a9  SHR EDI,0x3
052895ac  MOVZX EAX,byte ptr [RSP + 0x1c]
052895b1  CMP AL,DIL
052895b4  MOV R9D,EDI
052895b7  CMOVA R9D,EAX
052895bb  CMP DIL,0x26
052895bf  JA 0x05289660
052895c5  MOV RSI,qword ptr [RSP + 0xc8]
052895cd  LEA RAX,[RSI + -0x1]
052895d1  LEA RDI,[RSI + 0x28]
052895d5  MOV RSI,qword ptr [RSP + 0x98]
052895dd  LEA R8,[RSI + 0x28]
052895e1  MOVZX R9D,R9B
052895e5  INC R9D
052895e8  LEA R10D,[RSI + -0x1]
052895ec  MOV SIL,0x28
052895ef  MOV R11D,0x28
052895f5  NOP dword ptr CS:[RAX + RAX*0x1]
05289600  MOV R11D,R11D
05289603  LEA RBX,[RAX + R11*0x1]
05289607  XORPS XMM0,XMM0
0528960a  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
05289612  JBE 0x05289650
05289614  LEA RBX,[RDI + R11*0x1]
05289618  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
05289620  JBE 0x05289650
05289622  LEA EBX,[R10 + R11*0x1]
05289626  UCOMISS XMM0,dword ptr [RSP + RBX*0x4 + 0x1234]
0528962e  JBE 0x05289650
05289630  ADD R11,R8
05289633  UCOMISS XMM0,dword ptr [RSP + R11*0x4 + 0x1234]
0528963c  JBE 0x05289650
0528963e  DEC SIL
05289641  MOVZX R11D,SIL
05289645  CMP R9D,R11D
05289648  JC 0x05289600
0528964a  NOP word ptr [RAX + RAX*0x1]
05289650  TEST SIL,SIL
05289653  JZ 0x0528a240
05289659  NOP dword ptr [RAX]
05289660  LEA RAX,[RCX + RDX*0x8]
05289664  ADD RAX,0x29
05289668  MOV qword ptr [RSP + 0x198],RAX
05289670  MOV RAX,qword ptr [RSP + 0x108]
05289678  LEA EAX,[RAX*0x4]
0528967f  MOV qword ptr [RSP + 0x1b0],RAX
05289687  MOV RAX,qword ptr [RSP + 0x98]
0528968f  ADD RAX,0x2a
05289693  MOV qword ptr [RSP + 0x190],RAX
0528969b  MOVZX EAX,SIL
0528969f  MOV qword ptr [RSP + 0x1a0],RAX
052896a7  MOV qword ptr [RSP + 0x58],0x0
052896b0  JMP 0x052896e3
052896c0  MOV RCX,qword ptr [RSP + 0x58]
052896c5  INC RCX
052896c8  MOV qword ptr [RSP + 0x58],RCX
052896cd  CMP RCX,qword ptr [RSP + 0x1a0]
052896d5  MOV R14,qword ptr [RSP + 0xa0]
052896dd  JZ 0x0528a240
052896e3  MOV RAX,qword ptr [RSP + 0x30]
052896e8  MOV RCX,qword ptr [RSP + 0x38]
052896ed  CMP RAX,RCX
052896f0  MOV R14,qword ptr [RSP + 0x58]
052896f5  JZ 0x052897f7
052896fb  MOV RDX,qword ptr [RSP + 0x198]
05289703  ADD RDX,R14
05289706  MOV RSI,qword ptr [RSP + 0x98]
0528970e  ADD RSI,R14
05289711  MOV RDI,qword ptr [RSP + 0xc8]
05289719  ADD RDI,R14
0528971c  MOV R8,qword ptr [RSP + 0x190]
05289724  ADD R8,R14
05289727  NOP word ptr [RAX + RAX*0x1]
05289730  MOV R9,qword ptr [RAX]
05289733  MOV R10,qword ptr [R9]
05289736  CMP R10,RDI
05289739  JBE 0x0528a332
0528973f  MOV R11,qword ptr [R9 + 0x8]
05289743  MOVSS XMM0,dword ptr [R11 + RDI*0x4]
05289749  MOVSS dword ptr [R9 + 0x10],XMM0
0528974f  CMP R10,RSI
05289752  JBE 0x0528a332
05289758  MOVSS XMM0,dword ptr [R11 + RSI*0x4]
0528975e  MOVSS dword ptr [R9 + 0x14],XMM0
05289764  MOV RBX,qword ptr [RSP + 0xc8]
0528976c  LEA RBX,[R11 + RBX*0x4]
05289770  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0xa4]
0528977a  MOVSS dword ptr [R9 + 0x18],XMM0
05289780  CMP R10,RDX
05289783  JBE 0x0528a332
05289789  MOVSS XMM0,dword ptr [R11 + RDX*0x4]
0528978f  MOVSS dword ptr [R9 + 0x1c],XMM0
05289795  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0x4]
0528979c  MOVSS dword ptr [R9 + 0x20],XMM0
052897a2  MOV R14,qword ptr [RSP + 0x98]
052897aa  LEA R14,[R11 + R14*0x4]
052897ae  MOV RBP,qword ptr [RSP + 0x58]
052897b3  MOVSS XMM0,dword ptr [R14 + RBP*0x4 + 0x4]
052897ba  MOV R14,qword ptr [RSP + 0x58]
052897bf  MOVSS dword ptr [R9 + 0x24],XMM0
052897c5  MOVSS XMM0,dword ptr [RBX + R14*0x4 + 0xa8]
052897cf  MOVSS dword ptr [R9 + 0x28],XMM0
052897d5  CMP R10,R8
052897d8  JBE 0x0528a332
052897de  MOVSS XMM0,dword ptr [R11 + R8*0x4]
052897e4  MOVSS dword ptr [R9 + 0x2c],XMM0
052897ea  ADD RAX,0x8
052897ee  CMP RAX,RCX
052897f1  JNZ 0x05289730
052897f7  LEA EAX,[R14*0x8]
052897ff  MOVZX EAX,AX
05289802  MOV qword ptr [RSP + 0xf0],RAX
0528980a  XOR ESI,ESI
0528980c  JMP 0x0528982b
05289810  MOV RSI,qword ptr [RSP + 0x1b8]
05289818  INC ESI
0528981a  CMP ESI,0x4
0528981d  MOV R12,qword ptr [RSP + 0x1a8]
05289825  JZ 0x052896c0
0528982b  MOV RAX,qword ptr [RSP + 0x30]
05289830  MOV RCX,qword ptr [RSP + 0x38]
05289835  CMP RAX,RCX
05289838  JZ 0x05289893
0528983a  XORPS XMM0,XMM0
0528983d  CVTSI2SS XMM0,ESI
05289841  NOP dword ptr CS:[RAX + RAX*0x1]
05289850  MOV RDX,qword ptr [RAX]
05289853  MOVSS XMM1,dword ptr [RDX + 0x4c]
05289858  MULSS XMM1,XMM0
0528985c  MOVSD XMM2,qword ptr [RDX + 0x10]
05289861  MOVSD XMM3,qword ptr [RDX + 0x18]
05289866  MOVSD XMM4,qword ptr [RDX + 0x20]
0528986b  MOVSD XMM5,qword ptr [RDX + 0x28]
05289870  SUBPS XMM3,XMM2
05289873  SUBPS XMM5,XMM4
05289876  MOVLHPS XMM3,XMM5
05289879  SHUFPS XMM1,XMM1,0x0
0528987d  MULPS XMM1,XMM3
05289880  MOVLHPS XMM2,XMM4
05289883  ADDPS XMM2,XMM1
05289886  MOVUPS xmmword ptr [RDX + 0x30],XMM2
0528988a  ADD RAX,0x8
0528988e  CMP RAX,RCX
05289891  JNZ 0x05289850
05289893  MOV RAX,qword ptr [RSP + 0x1b0]
0528989b  MOV qword ptr [RSP + 0x1b8],RSI
052898a3  LEA ECX,[RSI + RAX*0x1]
052898a6  LEA EAX,[RCX + R12*0x1]
052898aa  MOV dword ptr [RSP + 0x18],EAX
052898ae  MOV RAX,qword ptr [RSP + 0xc0]
052898b6  MOV EAX,dword ptr [RAX + 0x10]
052898b9  MOV qword ptr [RSP + 0xf8],RCX
052898c1  IMUL EAX,ECX
052898c4  CDQE
052898c6  MOV qword ptr [RSP + 0xd8],RAX
052898ce  XOR ESI,ESI
052898d0  JMP 0x052898fd
052898e0  MOV RSI,qword ptr [RSP + 0xd0]
052898e8  INC RSI
052898eb  CMP RSI,0x4
052898ef  MOV R15,qword ptr [RSP + 0x1c0]
052898f7  JZ 0x05289810
052898fd  MOV RAX,qword ptr [RSP + 0x30]
05289902  MOV RCX,qword ptr [RSP + 0x38]
05289907  CMP RAX,RCX
0528990a  JZ 0x05289954
0528990c  MOVZX EDX,SIL
05289910  XORPS XMM0,XMM0
05289913  CVTSI2SS XMM0,EDX
05289917  NOP word ptr [RAX + RAX*0x1]
05289920  MOV RDX,qword ptr [RAX]
05289923  MOVSS XMM1,dword ptr [RDX + 0x4c]
05289928  MULSS XMM1,XMM0
0528992c  MOVUPS XMM2,xmmword ptr [RDX + 0x30]
05289930  MOVAPS XMM3,XMM2
05289933  SHUFPS XMM3,XMM2,0xed
05289937  SHUFPS XMM2,XMM2,0xe8
0528993b  SUBPS XMM3,XMM2
0528993e  UNPCKLPS XMM1,XMM1
05289941  MULPS XMM1,XMM3
05289944  ADDPS XMM1,XMM2
05289947  MOVLPS qword ptr [RDX + 0x40],XMM1
0528994b  ADD RAX,0x8
0528994f  CMP RAX,RCX
05289952  JNZ 0x05289920
05289954  MOV RAX,qword ptr [RSP + 0x1c8]
0528995c  MOV qword ptr [RSP + 0xd0],RSI
05289964  ADD RAX,RSI
05289967  MOV qword ptr [RSP + 0xb8],RAX
0528996f  ADD EAX,R15D
05289972  MOV dword ptr [RSP + 0x10],EAX
05289976  XOR EBP,EBP
05289978  JMP 0x0528998b
05289980  INC EBP
05289982  CMP EBP,0x8
05289985  JZ 0x052898e0
0528998b  MOV RAX,qword ptr [RSP + 0x30]
05289990  MOV RCX,qword ptr [RSP + 0x38]
05289995  CMP RAX,RCX
05289998  JZ 0x052899e0
0528999a  XORPS XMM0,XMM0
0528999d  CVTSI2SS XMM0,EBP
052899a1  NOP dword ptr CS:[RAX + RAX*0x1]
052899b0  MOV RDX,qword ptr [RAX]
052899b3  MOVSS XMM1,dword ptr [RDX + 0x50]
052899b8  MULSS XMM1,XMM0
052899bc  MOVSS XMM2,dword ptr [RDX + 0x40]
052899c1  MOVSS XMM3,dword ptr [RDX + 0x44]
052899c6  SUBSS XMM3,XMM2
052899ca  MULSS XMM3,XMM1
052899ce  ADDSS XMM3,XMM2
052899d2  MOVSS dword ptr [RDX + 0x48],XMM3
052899d7  ADD RAX,0x8
052899db  CMP RAX,RCX
052899de  JNZ 0x052899b0
052899e0  MOV RAX,qword ptr [RSP + 0xf0]
052899e8  ADD EAX,EBP
052899ea  MOV RCX,qword ptr [RSP + 0xc0]
052899f2  MOV R14D,dword ptr [RCX + 0x18]
052899f6  IMUL R14D,dword ptr [RSP + 0xb8]
052899ff  ADD R14D,dword ptr [RSP + 0xf8]
05289a07  IMUL R14D,dword ptr [RCX + 0x14]
05289a0c  ADD R14D,EAX
05289a0f  CMP R14D,dword ptr [RSP + 0xe8]
05289a17  JNC 0x05289980
05289a1d  MOVSS XMM0,dword ptr [RSP + 0x218]
05289a26  CWDE
05289a27  ADD EAX,dword ptr [RSP + 0xa8]
05289a2e  MOV dword ptr [RSP + 0x14],EAX
05289a32  MULSS XMM0,dword ptr [0x01198cf8]
05289a3a  MOVSS XMM2,dword ptr [0x011983f0]
05289a42  MOVAPS XMM3,XMM2
05289a45  CMPLTSS XMM3,XMM0
05289a4a  MAXSS XMM0,dword ptr [0x011985d4]
05289a52  MOVAPS XMM1,XMM3
05289a55  ANDPS XMM1,XMM2
05289a58  ANDNPS XMM3,XMM0
05289a5b  ORPS XMM3,XMM1
05289a5e  MOVAPS XMM0,XMM3
05289a61  MULSS XMM0,XMM3
05289a65  MULSS XMM0,XMM3
05289a69  DIVSS XMM0,dword ptr [0x01198350]
05289a71  MULSS XMM3,dword ptr [0x011986e0]
05289a79  ADDSS XMM3,XMM0
05289a7d  MOVSX ECX,word ptr [R13 + 0x8]
05289a82  CMP EAX,ECX
05289a84  MOVAPS xmmword ptr [RSP + 0x20],XMM3
05289a89  JL 0x05289b38
05289a8f  XORPS XMM2,XMM2
05289a92  UCOMISS XMM2,XMM3
05289a95  JNC 0x05289b38
05289a9b  UCOMISS XMM2,dword ptr [R13 + 0x58]
05289aa0  JA 0x05289b38
05289aa6  MOVSS XMM1,dword ptr [R13 + 0xb0]
05289aaf  MOVSS XMM0,dword ptr [0x011983f0]
05289ab7  ADDSS XMM1,XMM0
05289abb  MULSS XMM1,dword ptr [0x011986e0]
05289ac3  UCOMISS XMM2,XMM1
05289ac6  MOVSS XMM0,dword ptr [0x01198844]
05289ace  JA 0x05289af8
05289ad0  MOVSS XMM0,dword ptr [0x011983f0]
05289ad8  UCOMISS XMM1,XMM0
05289adb  MOVSS XMM0,dword ptr [0x01198a9c]
05289ae3  JA 0x05289af8
05289ae5  MOVSS XMM0,dword ptr [0x01198844]
05289aed  MULSS XMM1,XMM0
05289af1  ADDSS XMM1,XMM0
05289af5  MOVAPS XMM0,XMM1
05289af8  MOVSS XMM1,dword ptr [R13 + 0x108]
05289b01  MOVSS XMM2,dword ptr [R13 + 0x160]
05289b0a  UNPCKLPS XMM1,XMM2
05289b0d  MULPS XMM1,xmmword ptr [0x014e57e0]
05289b14  ANDPS XMM1,xmmword ptr [0x014e7ba0]
05289b1b  SHUFPS XMM0,XMM0,0x0
05289b1f  SUBPS XMM1,XMM0
05289b22  MOVAPS XMM0,XMM1
05289b25  SHUFPS XMM0,XMM1,0x55
05289b29  MAXSS XMM0,XMM1
05289b2d  MINSS XMM0,dword ptr [RSP + 0x20]
05289b33  MOVAPS xmmword ptr [RSP + 0x20],XMM0
05289b38  CMP byte ptr [RSP + 0x50],0x0
05289b3d  JZ 0x05289b90
05289b3f  MOV RSI,qword ptr [RSP + 0x10]
05289b44  MOV EDX,dword ptr [RSP + 0x18]
05289b48  LEA RDI,[RSP + 0x60]
05289b4d  CALL 0x0d2f06a0
05289b52  MOVAPS XMM1,xmmword ptr [RSP + 0x20]
05289b57  CVTSS2SD XMM1,XMM1
05289b5b  ADDSD XMM0,XMM1
05289b5f  CVTSD2SS XMM0,XMM0
05289b63  LEA RDI,[RSP + 0x230]
05289b6b  LEA RSI,[RSP + 0x10]
05289b70  MOVSS dword ptr [RSP + 0x20],XMM0
05289b76  CALL 0x0d2ee730
05289b7b  MOVAPS XMM1,XMM0
05289b7e  ADDSS XMM1,dword ptr [RSP + 0x20]
05289b84  JMP 0x05289b95
05289b90  MOVAPS XMM1,xmmword ptr [RSP + 0x20]
05289b95  MOV RBX,R13
05289b98  MOV R12,qword ptr [RSP + 0x120]
05289ba0  XORPS XMM0,XMM0
05289ba3  MOVAPS xmmword ptr [RSP + 0x20],XMM1
05289ba8  UCOMISS XMM0,XMM1
05289bab  JNC 0x05289cd0
05289bb1  MOV RAX,qword ptr [RSP + 0xe0]
05289bb9  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05289bbe  UCOMISS XMM0,dword ptr [0x011983fc]
05289bc5  JBE 0x05289d01
05289bcb  MOV RCX,qword ptr [RSP + 0x10]
05289bd0  MOVSXD RDX,dword ptr [RSP + 0x18]
05289bd5  MOV RAX,RCX
05289bd8  MOV RSI,0x2fc20f00000000
05289be2  IMUL RAX,RSI
05289be6  IMUL RSI,RDX,0x6ebfff5
05289bed  XOR RAX,RCX
05289bf0  SAR RAX,0x20
05289bf4  XOR RAX,RSI
05289bf7  IMUL RSI,RAX,0x285b825
05289bfe  ADD RSI,0xb
05289c02  IMUL RSI,RAX
05289c06  SAR RSI,0x10
05289c0a  MOV R9,qword ptr [RSP + 0xa0]
05289c12  XOR RSI,qword ptr [R9 + 0xc68]
05289c19  MOV RAX,RCX
05289c1c  SHR RAX,0x20
05289c20  MOV R8,qword ptr [R9 + 0xc70]
05289c27  MOV RDI,RSI
05289c2a  OR RDI,R8
05289c2d  MOV RDI,-0x61c8864680b583eb
05289c37  CMOVZ RSI,RDI
05289c3b  MOV RDI,qword ptr [R9 + 0xc78]
05289c42  MOV R9,0x6a09e667f3bcc909
05289c4c  CMOVZ R8,R9
05289c50  TEST RCX,RCX
05289c53  JS 0x05289da0
05289c59  MOV R15,qword ptr [RSP + 0x118]
05289c61  CMP EAX,0x8
05289c64  MOV R13,RBX
05289c67  JA 0x05289da6
05289c6d  XORPS XMM0,XMM0
05289c70  CVTSI2SS XMM0,EAX
05289c74  MULSS XMM0,dword ptr [0x01198a50]
05289c7c  MOVSS XMM2,dword ptr [0x011983f0]
05289c84  MOVAPS XMM1,XMM2
05289c87  SUBSS XMM1,XMM0
05289c8b  CMPLTSS XMM2,XMM0
05289c90  ADD R8,RSI
05289c93  ROL R8,0x11
05289c97  ADD R8,RSI
05289c9a  SHR R8,0x28
05289c9e  XORPS XMM0,XMM0
05289ca1  CVTSI2SS XMM0,R8D
05289ca6  ANDNPS XMM2,XMM1
05289ca9  MULSS XMM0,dword ptr [0x01198a44]
05289cb1  UCOMISS XMM2,XMM0
05289cb4  CMOVBE RDI,qword ptr [RSP + 0x118]
05289cbd  MOV R15,RDI
05289cc0  JMP 0x05289da6
05289cd0  MOV RDI,qword ptr [RSP + 0xe0]
05289cd8  LEA RSI,[RSP + 0x10]
05289cdd  CALL 0x05258c60
05289ce2  MOV RAX,qword ptr [RSP + 0xe0]
05289cea  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05289cef  ADDSS XMM0,dword ptr [RAX + 0x20]
05289cf4  UCOMISS XMM0,dword ptr [0x011983fc]
05289cfb  JA 0x05289bcb
05289d01  MOV ECX,dword ptr [RSP + 0x14]
05289d05  CMP ECX,dword ptr [RAX + 0x1c]
05289d08  JGE 0x05289d43
05289d0a  XOR EDX,EDX
05289d0c  CMP byte ptr [RAX + 0x24],0x0
05289d10  SETNZ SIL
05289d14  CMP qword ptr [RSP + 0xb0],0x0
05289d1d  MOV RDI,RAX
05289d20  MOV R13,RBX
05289d23  JZ 0x0528a078
05289d29  MOVZX EAX,byte ptr [RDI + 0x25]
05289d2d  MOV DL,SIL
05289d30  MOV R15,qword ptr [RDI + RDX*0x8 + 0x58]
05289d35  TEST R12,R12
05289d38  JNZ 0x0528a08b
05289d3e  JMP 0x0528a140
05289d43  CMP qword ptr [0x0f6ffb10],0x0
05289d4b  MOV R13,RBX
05289d4e  JNZ 0x05289d8a
05289d50  LEA RDI,[0x13a28c0]
05289d57  LEA RSI,[0x11e3821]
05289d5e  MOV EDX,0x2fd
05289d63  LEA RCX,[0x13a2868]
05289d6a  LEA R8,[0x13a2901]
05289d71  XOR EAX,EAX
05289d73  CALL 0x0eeddcf0
05289d78  TEST AL,AL
05289d7a  MOV R13,RBX
05289d7d  JZ 0x05289d8a
05289d7f  MOV dword ptr [0x00000000],0xdeadc0de
05289d8a  MOV RAX,qword ptr [0x0f6ffb10]
05289d91  MOV RAX,qword ptr [RAX]
05289d94  MOV R15,qword ptr [RAX + 0x200]
05289d9b  JMP 0x0528a071
05289da0  MOV R15,RDI
05289da3  MOV R13,RBX
05289da6  XORPS XMM1,XMM1
05289da9  CVTSI2SS XMM1,EAX
05289dad  MOV RSI,qword ptr [RSP + 0x48]
05289db2  MOVSS XMM3,dword ptr [RSI + 0x3058]
05289dba  XOR R12D,R12D
05289dbd  XORPS XMM4,XMM4
05289dc0  UCOMISS XMM3,XMM4
05289dc3  SETBE R12B
05289dc7  SHL R12D,0x5
05289dcb  XORPS XMM0,XMM0
05289dce  CVTSI2SS XMM0,dword ptr [R12 + RSI*0x1 + 0x3138]
05289dd8  MOVAPS XMM2,XMM1
05289ddb  SUBSS XMM2,XMM0
05289ddf  XOR EAX,EAX
05289de1  UCOMISS XMM4,XMM2
05289de4  JA 0x0528a140
05289dea  XORPS XMM0,XMM0
05289ded  CVTSI2SS XMM0,dword ptr [R12 + RSI*0x1 + 0x313c]
05289df7  SUBSS XMM0,XMM1
05289dfb  UCOMISS XMM4,XMM0
05289dfe  JA 0x0528a140
05289e04  MINSS XMM0,XMM2
05289e08  DIVSS XMM0,dword ptr [0x011987c0]
05289e10  MOVSS XMM2,dword ptr [0x011983f0]
05289e18  CMPLTSS XMM2,XMM0
05289e1d  MULSS XMM0,dword ptr [0x011987c4]
05289e25  ADDSS XMM0,dword ptr [0x01198728]
05289e2d  ANDNPS XMM2,XMM0
05289e30  ANDPS XMM3,xmmword ptr [0x014e7ba0]
05289e37  ADDSS XMM2,XMM3
05289e3b  MOVSS XMM0,dword ptr [0x01198c0c]
05289e43  UCOMISS XMM0,XMM2
05289e46  JA 0x0528a071
05289e4c  XORPS XMM0,XMM0
05289e4f  CVTSI2SS XMM0,ECX
05289e53  XORPS XMM2,XMM2
05289e56  CVTSI2SS XMM2,EDX
05289e5a  CVTTSS2SI ECX,XMM0
05289e5e  CVTTSS2SI EAX,XMM1
05289e62  SHL RAX,0x20
05289e66  OR RCX,RAX
05289e69  CVTTSS2SI EDX,XMM2
05289e6d  MOV RSI,qword ptr [RSP + 0x48]
05289e72  MOV RDI,qword ptr [RSI + 0x3118]
05289e79  MOV R8,0x2fc20f00000000
05289e83  IMUL RCX,R8
05289e87  MOVSXD RDX,EDX
05289e8a  IMUL RDX,RDX,0x6ebfff5
05289e91  XOR RCX,RAX
05289e94  SAR RCX,0x20
05289e98  XOR RCX,RDX
05289e9b  IMUL RAX,RCX,0x285b825
05289ea2  ADD RAX,0xb
05289ea6  IMUL RAX,RCX
05289eaa  SAR RAX,0x10
05289eae  XOR RAX,qword ptr [RDI + 0xe8]
05289eb5  MOV R13,qword ptr [RDI + 0xf0]
05289ebc  MOV RCX,RAX
05289ebf  OR RCX,R13
05289ec2  MOV RCX,-0x61c8864680b583eb
05289ecc  CMOVZ RAX,RCX
05289ed0  MOV RCX,0x6a09e667f3bcc909
05289eda  CMOVZ R13,RCX
05289ede  LEA RCX,[RAX + R13*0x1]
05289ee2  ROL RCX,0x11
05289ee6  ADD RCX,RAX
05289ee9  SHR RCX,0x28
05289eed  XORPS XMM4,XMM4
05289ef0  CVTSI2SS XMM4,ECX
05289ef4  MULSS XMM4,dword ptr [0x01198a44]
05289efc  UCOMISS XMM4,dword ptr [0x01198c10]
05289f03  JA 0x0528a135
05289f09  MOVSS XMM4,dword ptr [RSI + 0x30b0]
05289f11  MOVSS XMM5,dword ptr [RSI + 0x3108]
05289f19  UNPCKLPS XMM4,XMM5
05289f1c  ANDPS XMM4,xmmword ptr [0x014e7ba0]
05289f23  ADDPS XMM4,xmmword ptr [0x014e8750]
05289f2a  MOVAPS XMM5,XMM4
05289f2d  SHUFPS XMM5,XMM4,0x55
05289f31  MAXSS XMM4,XMM5
05289f35  XORPS XMM5,XMM5
05289f38  UCOMISS XMM5,XMM4
05289f3b  JBE 0x0528a135
05289f41  XOR R13,RAX
05289f44  ROL RAX,0x31
05289f48  MOV R15,R13
05289f4b  SHL R15,0x15
05289f4f  XOR R15,RAX
05289f52  XOR R15,R13
05289f55  ROL R13,0x1c
05289f59  LEA RAX,[R15 + R13*0x1]
05289f5d  ROL RAX,0x11
05289f61  ADD RAX,R15
05289f64  SHR RAX,0x28
05289f68  XORPS XMM4,XMM4
05289f6b  CVTSI2SS XMM4,EAX
05289f6f  MULSS XMM4,dword ptr [0x01198a44]
05289f77  MOVSS dword ptr [RSP + 0x20],XMM4
05289f7d  ADDSS XMM3,dword ptr [0x01198450]
05289f85  DIVSS XMM3,dword ptr [0x01198414]
05289f8d  UCOMISS XMM5,XMM3
05289f90  MOVSS XMM4,dword ptr [0x01198a9c]
05289f98  JA 0x05289fc2
05289f9a  MOVSS XMM4,dword ptr [0x011983f0]
05289fa2  UCOMISS XMM3,XMM4
05289fa5  MOVSS XMM4,dword ptr [0x01198aec]
05289fad  JA 0x05289fc2
05289faf  MULSS XMM3,dword ptr [0x01198414]
05289fb7  ADDSS XMM3,dword ptr [0x01198a9c]
05289fbf  MOVAPS XMM4,XMM3
05289fc2  MOVSS dword ptr [RSP + 0x100],XMM4
05289fcb  ADD RDI,0xa8
05289fd2  CALL 0x0d3414e0
05289fd7  MOVSS XMM1,dword ptr [RSP + 0x100]
05289fe0  UCOMISS XMM1,dword ptr [RSP + 0x20]
05289fe5  MOV EAX,0x10
05289fea  JBE 0x0528a059
05289fec  MOVSS XMM1,dword ptr [0x011985d4]
05289ff4  UCOMISS XMM1,XMM0
05289ff7  JA 0x0528a059
05289ff9  MOVSS XMM1,dword ptr [0x011983f0]
0528a001  MINSS XMM1,XMM0
0528a005  UCOMISS XMM1,dword ptr [0x01198b44]
0528a00c  JBE 0x0528a059
0528a00e  XOR R13,R15
0528a011  MOV RAX,R13
0528a014  ROL RAX,0x1c
0528a018  ROL R15,0x31
0528a01c  MOV RCX,R13
0528a01f  SHL RCX,0x15
0528a023  XOR RCX,R15
0528a026  XOR RCX,R13
0528a029  ADD RAX,RCX
0528a02c  ROL RAX,0x11
0528a030  ADD RAX,RCX
0528a033  SHR RAX,0x28
0528a037  XORPS XMM0,XMM0
0528a03a  CVTSI2SS XMM0,EAX
0528a03e  MULSS XMM0,dword ptr [0x01198a44]
0528a046  XOR EAX,EAX
0528a048  MOVSS XMM1,dword ptr [0x01198b4c]
0528a050  UCOMISS XMM1,XMM0
0528a053  SETA AL
0528a056  SHL EAX,0x3
0528a059  MOV RCX,qword ptr [RSP + 0x48]
0528a05e  ADD RCX,R12
0528a061  ADD RCX,0x3120
0528a068  MOV R15,qword ptr [RCX + RAX*0x1]
0528a06c  JMP 0x0528a135
0528a071  XOR EAX,EAX
0528a073  JMP 0x0528a140
0528a078  XOR EAX,EAX
0528a07a  MOV DL,SIL
0528a07d  MOV R15,qword ptr [RDI + RDX*0x8 + 0x58]
0528a082  TEST R12,R12
0528a085  JZ 0x0528a140
0528a08b  MOV EDX,dword ptr [RSP + 0x10]
0528a08f  MOV ESI,dword ptr [RSP + 0x18]
0528a093  SAR EDX,0x2
0528a096  SAR ESI,0x2
0528a099  MOVSXD RDI,dword ptr [R12 + 0x18]
0528a09e  MOVSXD RDX,EDX
0528a0a1  SUB RDX,RDI
0528a0a4  MOVSXD RDI,dword ptr [R12 + 0x1c]
0528a0a9  MOVSXD RSI,ESI
0528a0ac  SUB RSI,RDI
0528a0af  IMUL RDX,RDX,0x660
0528a0b6  ADD RDX,qword ptr [R12]
0528a0ba  IMUL RSI,RSI,0x198
0528a0c1  MOVSS XMM0,dword ptr [RSI + RDX*0x1]
0528a0c6  UCOMISS XMM0,dword ptr [0x0119845c]
0528a0cd  JA 0x0528a140
0528a0cf  MOVSX EDI,word ptr [R12 + 0x20]
0528a0d5  SUB ECX,EDI
0528a0d7  MOV EDI,ECX
0528a0d9  SAR EDI,0x1f
0528a0dc  MOV R8D,EDI
0528a0df  SUB R8D,ECX
0528a0e2  LEA ECX,[R8 + 0x7]
0528a0e6  TEST R8D,R8D
0528a0e9  CMOVNS ECX,R8D
0528a0ed  SAR ECX,0x3
0528a0f0  SUB EDI,ECX
0528a0f2  CMP EDI,0x28
0528a0f5  JA 0x0528a140
0528a0f7  ADD RDX,RSI
0528a0fa  MOV ECX,EDI
0528a0fc  MOVZX ECX,byte ptr [RDX + RCX*0x1 + 0x16c]
0528a104  TEST CL,CL
0528a106  JZ 0x0528a140
0528a108  CMP CL,0x1
0528a10b  JNZ 0x0528a140
0528a10d  MOV RCX,qword ptr [R15 + 0x68]
0528a111  MOV RCX,qword ptr [RCX + 0x20]
0528a115  CMP byte ptr [RCX],0x5
0528a118  JNZ 0x0528a140
0528a11a  LEA RDI,[0xf6ff9e0]
0528a121  LEA RSI,[0xf6eaec0]
0528a128  MOV EDX,0x1
0528a12d  CALL 0x0cc41df0
0528a132  MOV R15,RAX
0528a135  XOR EAX,EAX
0528a137  MOV R13,RBX
0528a13a  NOP word ptr [RAX + RAX*0x1]
0528a140  MOV RCX,qword ptr [RSP + 0xc0]
0528a148  MOV RCX,qword ptr [RCX]
0528a14b  MOV EDX,R14D
0528a14e  MOV qword ptr [RCX + RDX*0x8],R15
0528a152  CMP qword ptr [RSP + 0xb0],0x0
0528a15b  JZ 0x0528a197
0528a15d  TEST AL,AL
0528a15f  JZ 0x0528a197
0528a161  MOV dword ptr [RSP + 0x104],0x1
0528a16c  MOV RAX,qword ptr [RSP + 0x110]
0528a174  MOV RDI,qword ptr [RAX + 0x20]
0528a178  TEST RDI,RDI
0528a17b  JZ 0x0528a337
0528a181  MOV RAX,qword ptr [RDI]
0528a184  LEA RSI,[RSP + 0x10]
0528a189  MOV RDX,R15
0528a18c  LEA RCX,[RSP + 0x104]
0528a194  CALL qword ptr [RAX + 0x30]
0528a197  CMP qword ptr [RSP + 0x2278],0x0
0528a1a0  JZ 0x05289980
0528a1a6  CMP qword ptr [0x0f6ffb10],0x0
0528a1ae  JNZ 0x0528a1f0
0528a1b0  LEA RDI,[0x13a28c0]
0528a1b7  LEA RSI,[0x11e3821]
0528a1be  MOV EDX,0x2fd
0528a1c3  LEA RCX,[0x13a2868]
0528a1ca  LEA R8,[0x13a2901]
0528a1d1  XOR EAX,EAX
0528a1d3  CALL 0x0eeddcf0
0528a1d8  TEST AL,AL
0528a1da  MOV R13,RBX
0528a1dd  JZ 0x0528a1f0
0528a1df  MOV dword ptr [0x00000000],0xdeadc0de
0528a1ea  NOP word ptr [RAX + RAX*0x1]
0528a1f0  MOV RAX,qword ptr [0x0f6ffb10]
0528a1f7  MOV RAX,qword ptr [RAX]
0528a1fa  CMP R15,qword ptr [RAX + 0x200]
0528a201  JZ 0x05289980
0528a207  MOV RAX,qword ptr [RSP + 0xb8]
0528a20f  ADD RAX,RAX
0528a212  MOV RCX,qword ptr [RSP + 0x2278]
0528a21a  ADD RAX,qword ptr [RCX]
0528a21d  MOV ECX,dword ptr [RSP + 0x14]
0528a221  INC ECX
0528a223  MOV RSI,qword ptr [RSP + 0xd8]
0528a22b  MOVZX EDX,word ptr [RAX + RSI*0x2]
0528a22f  CMP DX,CX
0528a232  CMOVG ECX,EDX
0528a235  MOV word ptr [RAX + RSI*0x2],CX
0528a239  JMP 0x05289980
0528a240  MOV RCX,qword ptr [RSP + 0x108]
0528a248  INC RCX
0528a24b  CMP RCX,0x4
0528a24f  MOV RAX,qword ptr [RSP + 0x178]
0528a257  JNZ 0x05289534
0528a25d  MOV RAX,qword ptr [RSP + 0x170]
0528a265  INC RAX
0528a268  CMP RAX,0x4
0528a26c  JNZ 0x052894f0
0528a272  MOV R15,qword ptr [RSP + 0x128]
0528a27a  TEST R15,R15
0528a27d  JZ 0x0528a2a2
0528a27f  MOV RAX,-0x1
0528a286  XADD.LOCK qword ptr [R15 + 0x8],RAX
0528a28c  TEST RAX,RAX
0528a28f  JNZ 0x0528a2a2
0528a291  MOV RAX,qword ptr [R15]
0528a294  MOV RDI,R15
0528a297  CALL qword ptr [RAX + 0x10]
0528a29a  MOV RDI,R15
0528a29d  CALL 0x0412c2d0
0528a2a2  LEA RDI,[RSP + 0x230]
0528a2aa  CALL 0x0d2ecea0
0528a2af  MOV RDI,qword ptr [RSP + 0x78]
0528a2b4  TEST RDI,RDI
0528a2b7  JZ 0x0528a2d1
0528a2b9  MOV qword ptr [RSP + 0x80],RDI
0528a2c1  MOV RSI,qword ptr [RSP + 0x88]
0528a2c9  SUB RSI,RDI
0528a2cc  CALL 0x0412a280
0528a2d1  MOV RDI,qword ptr [RSP + 0x60]
0528a2d6  TEST RDI,RDI
0528a2d9  JZ 0x0528a2ed
0528a2db  MOV qword ptr [RSP + 0x68],RDI
0528a2e0  MOV RSI,qword ptr [RSP + 0x70]
0528a2e5  SUB RSI,RDI
0528a2e8  CALL 0x0412a280
0528a2ed  MOV RDI,qword ptr [RSP + 0x30]
0528a2f2  TEST RDI,RDI
0528a2f5  JZ 0x0528a304
0528a2f7  MOV RSI,qword ptr [RSP + 0x40]
0528a2fc  SUB RSI,RDI
0528a2ff  CALL 0x0412a280
0528a304  MOV ESI,0x3160
0528a309  MOV RDI,qword ptr [RSP + 0x48]
0528a30e  CALL 0x0412a280
0528a313  MOV ESI,0x4180
0528a318  MOV RDI,R13
0528a31b  CALL 0x0412a280
0528a320  ADD RSP,0x2238
0528a327  POP RBX
0528a328  POP R12
0528a32a  POP R13
0528a32c  POP R14
0528a32e  POP R15
0528a330  POP RBP
0528a331  RET
0528a332  CALL 0x04890760
0528a337  CALL 0x04891200
0528a33c  MOV EDI,0x4180
0528a341  XOR ESI,ESI
0528a343  CALL 0x0eec74c0
0528a348  JMP 0x05288bdf
0528a34d  MOV EDI,0x3160
0528a352  XOR ESI,ESI
0528a354  CALL 0x0eec74c0
0528a359  JMP 0x05288e99
0528a35e  MOV EDI,0x8
0528a363  XOR ESI,ESI
0528a365  CALL 0x0eec74c0
0528a36a  JMP 0x05288fb8
0528a36f  MOV EDI,0x40
0528a374  XOR ESI,ESI
0528a376  CALL 0x0eec74c0
0528a37b  JMP 0x05288ff6
```

## `05286930` — OverworldGeneratorMultinoise slot 0

- Ghidra name: `FUN_05286930`
- Body: `[[05286930, 05286938]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_05286930(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1 + -0xe;
  lVar2 = param_1[0x187];
  param_1[0x187] = 0;
  if (lVar2 != 0) {
    func_0x049db610(lVar2);
    func_0x0412a280(lVar2,0xd0);
  }
  plVar6 = (long *)param_1[0x186];
  param_1[0x186] = 0;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar6[1] = lVar2;
      func_0x0412a280(lVar2,plVar6[2] - lVar2);
    }
    func_0x0412a280(plVar6,0x28);
  }
  lVar2 = param_1[0x185];
  param_1[0x185] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
      func_0x0412a280(lVar3,*(long *)(lVar2 + 0x18) - lVar3);
    }
    func_0x0412a280(lVar2,0x28);
  }
  lVar2 = param_1[0x184];
  param_1[0x184] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,0x10);
  }
  plVar6 = (long *)param_1[0x183];
  param_1[0x183] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x05286720(param_1 + 0x30);
  *puVar7 = &UNK_0ef9d2a0;
  *param_1 = &UNK_0ef9d4b8;
  func_0x0527a590(param_1 + 0x1a);
  *puVar7 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar4;
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    func_0x0d352b40(lVar2);
    func_0x0412a280(lVar2,0x1c8);
  }
  *puVar7 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar7 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
05286930  ADD RDI,-0x70
05286934  JMP 0x05286800
```

## `05286960` — OverworldGeneratorMultinoise slot 1

- Ghidra name: `FUN_05286960`
- Body: `[[05286960, 0528697d]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05286960(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x70;
  uVar1 = FUN_05286800(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

### Assembly

```asm
05286960  PUSH RBX
05286961  MOV RBX,RDI
05286964  ADD RBX,-0x70
05286968  MOV RDI,RBX
0528696b  CALL 0x05286800
05286970  MOV ESI,0xcb0
05286975  MOV RDI,RBX
05286978  POP RBX
05286979  JMP 0x0412a280
```

## `05288760` — OverworldGeneratorMultinoise slot 2

- Ghidra name: `FUN_05288760`
- Body: `[[05288760, 05288768]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_05288760(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *in_FS_OFFSET;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uVar1 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  puStack_50 = &UNK_011b8ea4;
  puStack_48 = &UNK_0144800b;
  uStack_40 = uVar1;
  lVar4 = func_0x0417cc60();
  puStack_78 = param_2;
  lStack_38 = lVar4;
  FUN_052586c0(param_1 + 0x898,&puStack_78);
  uVar10 = FUN_05286980(param_2,*(undefined8 *)(param_1 + 0xc30),*(undefined8 *)(param_1 + 0xc38));
  iVar2 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xa8);
  iVar5 = iVar2 >> 0x1f;
  iVar2 = iVar5 - iVar2;
  iVar6 = (int)*(short *)(*(long *)(param_1 + -0x48) + 0xaa);
  iVar8 = iVar6 >> 0x1f;
  iVar6 = iVar8 - iVar6;
  iVar3 = iVar6 + 7;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar6 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar3 = (((iVar8 + (iVar6 >> 3)) - (iVar3 >> 3)) - iVar5) + -0x2f;
  uVar7 = (iVar5 - (iVar6 >> 3)) * 8 + 0x138;
  iVar2 = 0x28;
  while( true ) {
    fVar11 = ((float)(int)uVar7 * _DAT_01198698 + _DAT_011983f0 + (float)uVar10) *
             (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar11 * *(float *)(&UNK_014f0a50 + (ulong)(0.0 < fVar11) * 4) + _DAT_0119880c;
    fVar13 = (float)iVar3 * _DAT_011986e0;
    fVar11 = _DAT_01198aa4;
    if ((0.0 <= fVar13) && (fVar11 = fVar12, fVar13 <= _DAT_011983f0)) {
      fVar11 = (fVar12 + _DAT_01198400) * fVar13 + _DAT_01198aa4;
    }
    fVar12 = (float)(iVar2 - 1U & 0xff) / _DAT_01198af0;
    uVar9 = -(uint)(_DAT_011983f0 < fVar12);
    if (_DAT_01198690 <
        (float)(uVar9 & (uint)fVar11 |
               ~uVar9 & (uint)((fVar11 + _DAT_01198c1c) * fVar12 + _DAT_01198358))) break;
    iVar3 = iVar3 + 1;
    uVar7 = uVar7 - 8;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      uVar7 = 0x17fff;
LAB_052886ff:
      puStack_78 = &UNK_011b8ea4;
      puStack_70 = &UNK_0144800b;
      uStack_68 = uVar1;
      lStack_60 = func_0x0417cc60();
      lStack_60 = lStack_60 - lVar4;
      func_0x0cad8200(&puStack_78);
      return uVar7;
    }
  }
  uVar7 = uVar7 & 0xfff8 | 0x10000;
  goto LAB_052886ff;
}


```

### Assembly

```asm
05288760  ADD RDI,-0x70
05288764  JMP 0x052884e0
```

## `04a5e290` — BiomeSource3d slot 0

- Ghidra name: `FUN_04a5e290`
- Body: `[[04a5e290, 04a5e2f0]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x04a5e2d0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_04a5e290(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_10;
  
  puVar2 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e2bf;
    puVar2 = (undefined *)func_0x04a67380(param_1 + 0x13);
    lVar3 = param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e2d5;
  }
  else {
    lVar3 = param_1[2];
    if (lVar3 == 0) {
      return puVar2;
    }
    param_1[3] = lVar3;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
04a5e290  PUSH RBX
04a5e291  MOV RBX,RDI
04a5e294  LEA RAX,[0xef52f68]
04a5e29b  MOV qword ptr [RDI],RAX
04a5e29e  CMP byte ptr [RDI + 0xc8],0x1
04a5e2a5  JNZ 0x04a5e2d5
04a5e2a7  MOV RSI,qword ptr [RBX + 0x98]
04a5e2ae  TEST RSI,RSI
04a5e2b1  JZ 0x04a5e2d5
04a5e2b3  LEA RDI,[RBX + 0x98]
04a5e2ba  CALL 0x04a67380
04a5e2bf  MOV RDI,qword ptr [RBX + 0x98]
04a5e2c6  MOV RSI,qword ptr [RBX + 0xa8]
04a5e2cd  SUB RSI,RDI
04a5e2d0  CALL 0x0412a280
04a5e2d5  MOV RDI,qword ptr [RBX + 0x10]
04a5e2d9  TEST RDI,RDI
04a5e2dc  JZ 0x04a5e2ef
04a5e2de  MOV qword ptr [RBX + 0x18],RDI
04a5e2e2  MOV RSI,qword ptr [RBX + 0x20]
04a5e2e6  SUB RSI,RDI
04a5e2e9  POP RBX
04a5e2ea  JMP 0x0412a280
04a5e2ef  POP RBX
04a5e2f0  RET
```

## `04a5e300` — BiomeSource3d slot 1

- Ghidra name: `FUN_04a5e300`
- Body: `[[04a5e300, 04a5e36b]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x04a5e340: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04a5e300(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_10;
  
  puVar3 = &UNK_0ef52f68;
  *param_1 = &UNK_0ef52f68;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
    uStack_10 = 0x4a5e32f;
    puVar3 = (undefined *)func_0x04a67380(param_1 + 0x13);
    param_1 = (undefined8 *)param_1[0x13];
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4a5e345;
  }
  else {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      uStack_10 = 0x4a5e35e;
      puVar3 = (undefined *)func_0x0412a280(lVar1,param_1[4] - lVar1);
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
04a5e300  PUSH RBX
04a5e301  MOV RBX,RDI
04a5e304  LEA RAX,[0xef52f68]
04a5e30b  MOV qword ptr [RDI],RAX
04a5e30e  CMP byte ptr [RDI + 0xc8],0x1
04a5e315  JNZ 0x04a5e345
04a5e317  MOV RSI,qword ptr [RBX + 0x98]
04a5e31e  TEST RSI,RSI
04a5e321  JZ 0x04a5e345
04a5e323  LEA RDI,[RBX + 0x98]
04a5e32a  CALL 0x04a67380
04a5e32f  MOV RDI,qword ptr [RBX + 0x98]
04a5e336  MOV RSI,qword ptr [RBX + 0xa8]
04a5e33d  SUB RSI,RDI
04a5e340  CALL 0x0412a280
04a5e345  MOV RDI,qword ptr [RBX + 0x10]
04a5e349  TEST RDI,RDI
04a5e34c  JZ 0x04a5e35e
04a5e34e  MOV qword ptr [RBX + 0x18],RDI
04a5e352  MOV RSI,qword ptr [RBX + 0x20]
04a5e356  SUB RSI,RDI
04a5e359  CALL 0x0412a280
04a5e35e  MOV ESI,0xe8
04a5e363  MOV RDI,RBX
04a5e366  POP RBX
04a5e367  JMP 0x0412a280
```

## `04a3a160` — BiomeSource3d slot 2

- Ghidra name: `FUN_04a3a160`
- Body: `[[04a3a160, 04a3a2bb]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_04a3a160(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,undefined8 param_5,
            undefined4 param_6,long param_7)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iStack_48 = (int)param_5 + -8;
  lStack_50 = ((ulong)((int)param_4 - 8) | param_4 & 0xffffffff00000000) - 0x800000000;
  iStack_44 = (param_3 >> 3) + 2;
  uVar3 = iStack_44 * 0x10;
  lVar1 = (ulong)uVar3 * 8;
  uStack_40 = param_5;
  uStack_38 = param_2;
  lStack_68 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_68 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_58 = (ulong)uVar3 * 8 + lStack_68;
  lStack_60 = lStack_68;
  if (param_7 == 0) {
    cVar2 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x20,&UNK_012d6c22,&UNK_01207c1f);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  func_0x04a3a2f0(uStack_38,&lStack_68,param_7);
  func_0x0c84eb20(param_1,&lStack_68,(int)(short)param_3,param_4,uStack_40,param_6);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x0412a280(lStack_68,lStack_58 - lStack_68);
  }
  return param_1;
}


```

### Assembly

```asm
04a3a160  PUSH RBP
04a3a161  PUSH R15
04a3a163  PUSH R14
04a3a165  PUSH R13
04a3a167  PUSH R12
04a3a169  PUSH RBX
04a3a16a  SUB RSP,0x48
04a3a16e  MOV dword ptr [RSP + 0xc],R9D
04a3a173  MOV R15,RCX
04a3a176  MOV R12D,EDX
04a3a179  MOV qword ptr [RSP + 0x40],RSI
04a3a17e  MOV R14,RDI
04a3a181  LEA EAX,[RCX + -0x8]
04a3a184  MOV qword ptr [RSP + 0x38],R8
04a3a189  LEA ECX,[R8 + -0x8]
04a3a18d  MOV RDX,-0x100000000
04a3a197  AND RDX,R15
04a3a19a  OR RAX,RDX
04a3a19d  MOV RDX,-0x800000000
04a3a1a7  ADD RDX,RAX
04a3a1aa  MOV qword ptr [RSP + 0x28],RDX
04a3a1af  MOV dword ptr [RSP + 0x30],ECX
04a3a1b3  MOV EBX,R12D
04a3a1b6  SHR EBX,0x3
04a3a1b9  ADD EBX,0x2
04a3a1bc  MOV dword ptr [RSP + 0x34],EBX
04a3a1c0  SHL EBX,0x4
04a3a1c3  LEA RBP,[RBX*0x8]
04a3a1cb  MOV RAX,qword ptr [0x0f5463b0]
04a3a1d2  LEA RDI,[0xf5463b0]
04a3a1d9  MOV RSI,RBP
04a3a1dc  CALL qword ptr [RAX + 0x10]
04a3a1df  MOV R13,RAX
04a3a1e2  TEST RAX,RAX
04a3a1e5  JZ 0x04a3a2ad
04a3a1eb  LEA RAX,[RBX*0x8]
04a3a1f3  ADD RAX,R13
04a3a1f6  MOV qword ptr [RSP + 0x10],R13
04a3a1fb  MOV qword ptr [RSP + 0x18],R13
04a3a200  MOV qword ptr [RSP + 0x20],RAX
04a3a205  MOV RAX,qword ptr [RSP + 0x80]
04a3a20d  TEST RAX,RAX
04a3a210  MOV RBX,R14
04a3a213  MOV R14,RAX
04a3a216  JNZ 0x04a3a24f
04a3a218  LEA RDI,[0x1221f1d]
04a3a21f  LEA RSI,[0x1390418]
04a3a226  LEA RCX,[0x12d6c22]
04a3a22d  LEA R8,[0x1207c1f]
04a3a234  MOV EDX,0x20
04a3a239  XOR EAX,EAX
04a3a23b  CALL 0x0eeddcf0
04a3a240  TEST AL,AL
04a3a242  JZ 0x04a3a24f
04a3a244  MOV dword ptr [0x00000000],0xdeadc0de
04a3a24f  LEA RSI,[RSP + 0x10]
04a3a254  MOV RDI,qword ptr [RSP + 0x40]
04a3a259  MOV RDX,R14
04a3a25c  CALL 0x04a3a2f0
04a3a261  MOVSX EDX,R12W
04a3a265  LEA RSI,[RSP + 0x10]
04a3a26a  MOV RDI,RBX
04a3a26d  MOV RCX,R15
04a3a270  MOV R8,qword ptr [RSP + 0x38]
04a3a275  MOV R9D,dword ptr [RSP + 0xc]
04a3a27a  CALL 0x0c84eb20
04a3a27f  MOV RDI,qword ptr [RSP + 0x10]
04a3a284  TEST RDI,RDI
04a3a287  JZ 0x04a3a29b
04a3a289  MOV qword ptr [RSP + 0x18],RDI
04a3a28e  MOV RSI,qword ptr [RSP + 0x20]
04a3a293  SUB RSI,RDI
04a3a296  CALL 0x0412a280
04a3a29b  MOV RAX,RBX
04a3a29e  ADD RSP,0x48
04a3a2a2  POP RBX
04a3a2a3  POP R12
04a3a2a5  POP R13
04a3a2a7  POP R14
04a3a2a9  POP R15
04a3a2ab  POP RBP
04a3a2ac  RET
04a3a2ad  MOV RDI,RBP
04a3a2b0  XOR ESI,ESI
04a3a2b2  CALL 0x0eec74c0
04a3a2b7  JMP 0x04a3a1eb
```

## `0c84fde0` — BiomeSource3d slot 3

- Ghidra name: `FUN_0c84fde0`
- Body: `[[0c84fde0, 0c84fdea]]`

### Pseudocode

```c

undefined1 * FUN_0c84fde0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  return param_1;
}


```

### Assembly

```asm
0c84fde0  MOV RAX,RDI
0c84fde3  MOV byte ptr [RDI],0x0
0c84fde6  MOV byte ptr [RDI + 0x8],0x0
0c84fdea  RET
```

## `04a3aaf0` — BiomeSource3d slot 4

- Ghidra name: `FUN_04a3aaf0`
- Body: `[[04a3aaf0, 04a3aca8] [04a3acb0, 04a3acd1] [04a3ace0, 04a3ad55]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a3aaf0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  sVar2 = *(short *)(*(long *)(param_2 + 0x30) + 0xaa);
  sVar3 = *(short *)(*(long *)(param_2 + 0x30) + 0xa8);
  uVar5 = *(ulong *)(param_2 + 0x38);
  uVar4 = *(uint *)(param_2 + 0x40);
  uStack_38 = param_1;
  uVar9 = (**(code **)(**(long **)(param_2 + 0x28) + 0x438))();
  iStack_70 = uVar4 - 8;
  lStack_78 = ((ulong)((int)uVar5 - 8) | uVar5 & 0xffffffff00000000) - 0x800000000;
  uVar10 = (uint)(short)(sVar2 - sVar3);
  iStack_6c = (uVar10 >> 3) + 2;
  uVar11 = iStack_6c * 0x10;
  lVar1 = (ulong)uVar11 * 8;
  uStack_48 = uVar5;
  uStack_40 = (ulong)uVar4;
  lStack_90 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
  if (lStack_90 == 0) {
    func_0x0eec74c0(lVar1,0);
  }
  lStack_80 = lStack_90 + (ulong)uVar11 * 8;
  lStack_88 = lStack_90;
  if ((param_3 == 0) &&
     (cVar8 = func_0x0eeddcf0(&UNK_01221f1d,&UNK_01390418,0x53,&UNK_012d6c22,&UNK_011b82db),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x04a3a2f0(uStack_38,&lStack_90,param_3);
  func_0x0c84f340(&lStack_a8,&lStack_90,uVar10,uStack_48,uStack_40,uVar9);
  lStack_68 = lStack_a8;
  lStack_60 = lStack_a0;
  lStack_58 = lStack_98;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  func_0x0caf8fb0(param_2,&lStack_68);
  lVar7 = lStack_68;
  lVar1 = lStack_60;
  if (lStack_68 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x0412a280(lVar7,lStack_58 - lVar7);
  }
  lVar7 = lStack_a8;
  lVar1 = lStack_a0;
  if (lStack_a8 != 0) {
    for (; lVar7 != lVar1; lVar1 = lVar1 + -8) {
      plVar6 = *(long **)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    lStack_a0 = lVar7;
    func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    func_0x0412a280(lStack_90,lStack_80 - lStack_90);
  }
  return;
}


```

### Assembly

```asm
04a3aaf0  PUSH RBP
04a3aaf1  PUSH R15
04a3aaf3  PUSH R14
04a3aaf5  PUSH R13
04a3aaf7  PUSH R12
04a3aaf9  PUSH RBX
04a3aafa  SUB RSP,0x88
04a3ab01  MOV R14,RDX
04a3ab04  MOV RBX,RSI
04a3ab07  MOV qword ptr [RSP + 0x80],RDI
04a3ab0f  MOV RAX,qword ptr [RSI + 0x30]
04a3ab13  MOVZX EBP,word ptr [RAX + 0xaa]
04a3ab1a  SUB BP,word ptr [RAX + 0xa8]
04a3ab21  MOV RDI,qword ptr [RSI + 0x28]
04a3ab25  MOV R12,qword ptr [RSI + 0x38]
04a3ab29  MOV R15D,dword ptr [RSI + 0x40]
04a3ab2d  MOV RAX,qword ptr [RDI]
04a3ab30  CALL qword ptr [RAX + 0x438]
04a3ab36  MOV dword ptr [RSP + 0xc],EAX
04a3ab3a  LEA EAX,[R12 + -0x8]
04a3ab3f  MOV qword ptr [RSP + 0x78],R15
04a3ab44  LEA ECX,[R15 + -0x8]
04a3ab48  MOV RDX,-0x100000000
04a3ab52  MOV qword ptr [RSP + 0x70],R12
04a3ab57  AND RDX,R12
04a3ab5a  OR RAX,RDX
04a3ab5d  MOV RDX,-0x800000000
04a3ab67  ADD RDX,RAX
04a3ab6a  MOV qword ptr [RSP + 0x40],RDX
04a3ab6f  MOV dword ptr [RSP + 0x48],ECX
04a3ab73  MOVSX EBP,BP
04a3ab76  MOV R12D,EBP
04a3ab79  SHR R12D,0x3
04a3ab7d  ADD R12D,0x2
04a3ab81  MOV dword ptr [RSP + 0x4c],R12D
04a3ab86  SHL R12D,0x4
04a3ab8a  LEA R13,[R12*0x8]
04a3ab92  MOV RAX,qword ptr [0x0f5463b0]
04a3ab99  LEA RDI,[0xf5463b0]
04a3aba0  MOV RSI,R13
04a3aba3  CALL qword ptr [RAX + 0x10]
04a3aba6  MOV R15,RAX
04a3aba9  TEST RAX,RAX
04a3abac  JZ 0x04a3ad47
04a3abb2  LEA RAX,[R15 + R12*0x8]
04a3abb6  MOV qword ptr [RSP + 0x28],R15
04a3abbb  MOV qword ptr [RSP + 0x30],R15
04a3abc0  MOV qword ptr [RSP + 0x38],RAX
04a3abc5  TEST R14,R14
04a3abc8  JNZ 0x04a3ac01
04a3abca  LEA RDI,[0x1221f1d]
04a3abd1  LEA RSI,[0x1390418]
04a3abd8  LEA RCX,[0x12d6c22]
04a3abdf  LEA R8,[0x11b82db]
04a3abe6  MOV EDX,0x53
04a3abeb  XOR EAX,EAX
04a3abed  CALL 0x0eeddcf0
04a3abf2  TEST AL,AL
04a3abf4  JZ 0x04a3ac01
04a3abf6  MOV dword ptr [0x00000000],0xdeadc0de
04a3ac01  LEA RSI,[RSP + 0x28]
04a3ac06  MOV RDI,qword ptr [RSP + 0x80]
04a3ac0e  MOV RDX,R14
04a3ac11  CALL 0x04a3a2f0
04a3ac16  LEA RDI,[RSP + 0x10]
04a3ac1b  LEA RSI,[RSP + 0x28]
04a3ac20  MOV EDX,EBP
04a3ac22  MOV RCX,qword ptr [RSP + 0x70]
04a3ac27  MOV R8,qword ptr [RSP + 0x78]
04a3ac2c  MOV R9D,dword ptr [RSP + 0xc]
04a3ac31  CALL 0x0c84f340
04a3ac36  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
04a3ac3b  MOVAPS xmmword ptr [RSP + 0x50],XMM0
04a3ac40  MOV RAX,qword ptr [RSP + 0x20]
04a3ac45  MOV qword ptr [RSP + 0x60],RAX
04a3ac4a  XORPS XMM0,XMM0
04a3ac4d  MOVAPS xmmword ptr [RSP + 0x10],XMM0
04a3ac52  MOV qword ptr [RSP + 0x20],0x0
04a3ac5b  LEA RSI,[RSP + 0x50]
04a3ac60  MOV RDI,RBX
04a3ac63  CALL 0x0caf8fb0
04a3ac68  MOV RBX,qword ptr [RSP + 0x50]
04a3ac6d  TEST RBX,RBX
04a3ac70  JZ 0x04a3ac8c
04a3ac72  MOV R14,qword ptr [RSP + 0x58]
04a3ac77  CMP RBX,R14
04a3ac7a  JNZ 0x04a3acb9
04a3ac7c  MOV RSI,qword ptr [RSP + 0x60]
04a3ac81  SUB RSI,RBX
04a3ac84  MOV RDI,RBX
04a3ac87  CALL 0x0412a280
04a3ac8c  MOV RBX,qword ptr [RSP + 0x10]
04a3ac91  TEST RBX,RBX
04a3ac94  JZ 0x04a3ad19
04a3ac9a  MOV R14,qword ptr [RSP + 0x18]
04a3ac9f  MOV RDI,RBX
04a3aca2  CMP RBX,R14
04a3aca5  JNZ 0x04a3ace9
04a3aca7  JMP 0x04a3ad07
04a3acb0  ADD R14,-0x8
04a3acb4  CMP R14,RBX
04a3acb7  JZ 0x04a3ac7c
04a3acb9  MOV RDI,qword ptr [R14 + -0x8]
04a3acbd  MOV qword ptr [R14 + -0x8],0x0
04a3acc5  TEST RDI,RDI
04a3acc8  JZ 0x04a3acb0
04a3acca  MOV RAX,qword ptr [RDI]
04a3accd  CALL qword ptr [RAX + 0x8]
04a3acd0  JMP 0x04a3acb0
04a3ace0  ADD R14,-0x8
04a3ace4  CMP R14,RBX
04a3ace7  JZ 0x04a3ad02
04a3ace9  MOV RDI,qword ptr [R14 + -0x8]
04a3aced  MOV qword ptr [R14 + -0x8],0x0
04a3acf5  TEST RDI,RDI
04a3acf8  JZ 0x04a3ace0
04a3acfa  MOV RAX,qword ptr [RDI]
04a3acfd  CALL qword ptr [RAX + 0x8]
04a3ad00  JMP 0x04a3ace0
04a3ad02  MOV RDI,qword ptr [RSP + 0x10]
04a3ad07  MOV qword ptr [RSP + 0x18],RBX
04a3ad0c  MOV RSI,qword ptr [RSP + 0x20]
04a3ad11  SUB RSI,RDI
04a3ad14  CALL 0x0412a280
04a3ad19  MOV RDI,qword ptr [RSP + 0x28]
04a3ad1e  TEST RDI,RDI
04a3ad21  JZ 0x04a3ad35
04a3ad23  MOV qword ptr [RSP + 0x30],RDI
04a3ad28  MOV RSI,qword ptr [RSP + 0x38]
04a3ad2d  SUB RSI,RDI
04a3ad30  CALL 0x0412a280
04a3ad35  ADD RSP,0x88
04a3ad3c  POP RBX
04a3ad3d  POP R12
04a3ad3f  POP R13
04a3ad41  POP R14
04a3ad43  POP R15
04a3ad45  POP RBP
04a3ad46  RET
04a3ad47  MOV RDI,R13
04a3ad4a  XOR ESI,ESI
04a3ad4c  CALL 0x0eec74c0
04a3ad51  JMP 0x04a3abb2
```

## `04a3ae00` — BiomeSource3d slot 5

- Ghidra name: `FUN_04a3ae00`
- Body: `[[04a3ae00, 04a3ae25]]`

### Pseudocode

```c

undefined8 FUN_04a3ae00(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x30))();
  return param_1;
}


```

### Assembly

```asm
04a3ae00  PUSH RBX
04a3ae01  SUB RSP,0x10
04a3ae05  MOV RBX,RDI
04a3ae08  XORPS XMM0,XMM0
04a3ae0b  MOVAPS xmmword ptr [RSP],XMM0
04a3ae0f  MOV byte ptr [RSP + 0xc],0x1
04a3ae14  MOV RAX,qword ptr [RSI]
04a3ae17  MOV R8,RSP
04a3ae1a  CALL qword ptr [RAX + 0x30]
04a3ae1d  MOV RAX,RBX
04a3ae20  ADD RSP,0x10
04a3ae24  POP RBX
04a3ae25  RET
```

## `04a3ae30` — BiomeSource3d slot 6

- Ghidra name: `FUN_04a3ae30`
- Body: `[[04a3ae30, 04a3affd]]`

### Pseudocode

```c

undefined1  [16] FUN_04a3ae30(int *param_1,long param_2,int *param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_58;
  int iStack_50;
  undefined1 uStack_4c;
  long lStack_48;
  int *piStack_40;
  long lStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar6 = param_3[3] - *param_3;
  uVar8 = param_3[5] - param_3[2];
  uVar5 = param_3[4] - param_3[1];
  param_1[1] = uVar5 / param_4;
  iVar7 = (uVar6 / param_4) * (uVar5 / param_4);
  *param_1 = iVar7;
  iVar7 = (uVar8 / param_4) * iVar7;
  uStack_58 = 0;
  lStack_48 = param_2;
  lStack_38 = param_5;
  if (iVar7 != 0) {
    func_0x0c859e50(param_1 + 2,iVar7,&uStack_58);
    uVar6 = param_3[3] - *param_3;
    uVar5 = param_3[4] - param_3[1];
    uVar8 = param_3[5] - param_3[2];
  }
  uVar4 = (long)(int)uVar8 % (long)(int)param_4 & 0xffffffff;
  if ((((int)uVar6 / (int)param_4 != 0) && ((int)uVar8 / (int)param_4 != 0)) &&
     ((int)uVar5 / (int)param_4 != 0)) {
    lStack_48 = lStack_48 + 8;
    iVar7 = 0;
    piStack_40 = param_1 + 2;
    do {
      iVar1 = *param_3;
      iVar9 = 0;
      do {
        iVar2 = param_3[2];
        iVar10 = 0;
        iVar11 = 0;
        do {
          uStack_4c = *(undefined1 *)(lStack_38 + 0xc);
          uStack_58 = CONCAT44(param_3[1] + iVar10,iVar7 * param_4 + iVar1);
          iStack_50 = iVar9 * param_4 + iVar2;
          uVar3 = func_0x04a3b2a0(lStack_48,&uStack_58);
          uVar4 = (ulong)(uint)(*param_1 * iVar9 + param_1[1] * iVar7 + iVar11);
          *(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8) = uVar3;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + param_4;
        } while ((int)uVar5 / (int)param_4 != iVar11);
        iVar9 = iVar9 + 1;
      } while (iVar9 != (int)uVar8 / (int)param_4);
      iVar7 = iVar7 + 1;
    } while (iVar7 != (int)uVar6 / (int)param_4);
  }
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_1;
  return auVar12;
}


```

### Assembly

```asm
04a3ae30  PUSH RBP
04a3ae31  PUSH R15
04a3ae33  PUSH R14
04a3ae35  PUSH R13
04a3ae37  PUSH R12
04a3ae39  PUSH RBX
04a3ae3a  SUB RSP,0x48
04a3ae3e  MOV qword ptr [RSP + 0x40],R8
04a3ae43  MOV qword ptr [RSP + 0x30],RSI
04a3ae48  MOV RBX,RDI
04a3ae4b  LEA R15,[RDI + 0x8]
04a3ae4f  XORPS XMM0,XMM0
04a3ae52  MOVUPS xmmword ptr [RDI + 0x8],XMM0
04a3ae56  MOV qword ptr [RDI + 0x18],0x0
04a3ae5e  MOV EDI,dword ptr [RDX + 0xc]
04a3ae61  SUB EDI,dword ptr [RDX]
04a3ae63  MOV ESI,dword ptr [RDX + 0x10]
04a3ae66  MOV R10D,dword ptr [RDX + 0x14]
04a3ae6a  SUB R10D,dword ptr [RDX + 0x8]
04a3ae6e  MOV qword ptr [RSP + 0x10],RDX
04a3ae73  SUB ESI,dword ptr [RDX + 0x4]
04a3ae76  MOV EAX,ESI
04a3ae78  XOR EDX,EDX
04a3ae7a  DIV ECX
04a3ae7c  MOV R8D,EAX
04a3ae7f  MOV dword ptr [RBX + 0x4],EAX
04a3ae82  MOV EAX,EDI
04a3ae84  XOR EDX,EDX
04a3ae86  DIV ECX
04a3ae88  MOV R9D,EAX
04a3ae8b  IMUL R9D,R8D
04a3ae8f  MOV dword ptr [RBX],R9D
04a3ae92  MOV EAX,R10D
04a3ae95  XOR EDX,EDX
04a3ae97  MOV dword ptr [RSP + 0x4],ECX
04a3ae9b  DIV ECX
04a3ae9d  IMUL EAX,R9D
04a3aea1  MOV qword ptr [RSP + 0x20],0x0
04a3aeaa  TEST EAX,EAX
04a3aeac  JZ 0x04a3aed5
04a3aeae  MOV ESI,EAX
04a3aeb0  LEA RDX,[RSP + 0x20]
04a3aeb5  MOV RDI,R15
04a3aeb8  CALL 0x0c859e50
04a3aebd  MOV RAX,qword ptr [RSP + 0x10]
04a3aec2  MOV EDI,dword ptr [RAX + 0xc]
04a3aec5  MOV ESI,dword ptr [RAX + 0x10]
04a3aec8  MOV R10D,dword ptr [RAX + 0x14]
04a3aecc  SUB EDI,dword ptr [RAX]
04a3aece  SUB ESI,dword ptr [RAX + 0x4]
04a3aed1  SUB R10D,dword ptr [RAX + 0x8]
04a3aed5  MOV qword ptr [RSP + 0x38],R15
04a3aeda  MOV EAX,EDI
04a3aedc  CDQ
04a3aedd  MOV ECX,dword ptr [RSP + 0x4]
04a3aee1  IDIV ECX
04a3aee3  MOV EDI,EAX
04a3aee5  MOV EAX,ESI
04a3aee7  CDQ
04a3aee8  IDIV ECX
04a3aeea  MOV dword ptr [RSP + 0xc],EAX
04a3aeee  MOV EAX,R10D
04a3aef1  CDQ
04a3aef2  IDIV ECX
04a3aef4  MOV dword ptr [RSP + 0x8],EAX
04a3aef8  MOV dword ptr [RSP + 0x18],EDI
04a3aefc  TEST EDI,EDI
04a3aefe  JZ 0x04a3afec
04a3af04  CMP dword ptr [RSP + 0x8],0x0
04a3af09  JZ 0x04a3afec
04a3af0f  CMP dword ptr [RSP + 0xc],0x0
04a3af14  JZ 0x04a3afec
04a3af1a  ADD qword ptr [RSP + 0x30],0x8
04a3af20  XOR R13D,R13D
04a3af23  NOP dword ptr CS:[RAX + RAX*0x1]
04a3af30  MOV ECX,R13D
04a3af33  IMUL ECX,dword ptr [RSP + 0x4]
04a3af38  MOV RAX,qword ptr [RSP + 0x10]
04a3af3d  ADD ECX,dword ptr [RAX]
04a3af3f  MOV dword ptr [RSP + 0x1c],ECX
04a3af43  XOR R12D,R12D
04a3af46  NOP word ptr CS:[RAX + RAX*0x1]
04a3af50  MOV EBP,R12D
04a3af53  IMUL EBP,dword ptr [RSP + 0x4]
04a3af58  MOV RAX,qword ptr [RSP + 0x10]
04a3af5d  ADD EBP,dword ptr [RAX + 0x8]
04a3af60  XOR R14D,R14D
04a3af63  XOR R15D,R15D
04a3af66  NOP word ptr CS:[RAX + RAX*0x1]
04a3af70  MOV RAX,qword ptr [RSP + 0x10]
04a3af75  MOV EAX,dword ptr [RAX + 0x4]
04a3af78  ADD EAX,R14D
04a3af7b  MOV RCX,qword ptr [RSP + 0x40]
04a3af80  MOVZX ECX,byte ptr [RCX + 0xc]
04a3af84  MOV EDX,dword ptr [RSP + 0x1c]
04a3af88  MOV dword ptr [RSP + 0x20],EDX
04a3af8c  MOV dword ptr [RSP + 0x24],EAX
04a3af90  MOV dword ptr [RSP + 0x28],EBP
04a3af94  MOV byte ptr [RSP + 0x2c],CL
04a3af98  MOV RDI,qword ptr [RSP + 0x30]
04a3af9d  LEA RSI,[RSP + 0x20]
04a3afa2  CALL 0x04a3b2a0
04a3afa7  MOV ECX,dword ptr [RBX + 0x4]
04a3afaa  IMUL ECX,R13D
04a3afae  MOV EDX,dword ptr [RBX]
04a3afb0  IMUL EDX,R12D
04a3afb4  ADD EDX,ECX
04a3afb6  ADD EDX,R15D
04a3afb9  MOV RCX,qword ptr [RBX + 0x8]
04a3afbd  MOV qword ptr [RCX + RDX*0x8],RAX
04a3afc1  INC R15D
04a3afc4  ADD R14D,dword ptr [RSP + 0x4]
04a3afc9  CMP dword ptr [RSP + 0xc],R15D
04a3afce  JNZ 0x04a3af70
04a3afd0  INC R12D
04a3afd3  CMP R12D,dword ptr [RSP + 0x8]
04a3afd8  JNZ 0x04a3af50
04a3afde  INC R13D
04a3afe1  CMP R13D,dword ptr [RSP + 0x18]
04a3afe6  JNZ 0x04a3af30
04a3afec  MOV RAX,RBX
04a3afef  ADD RSP,0x48
04a3aff3  POP RBX
04a3aff4  POP R12
04a3aff6  POP R13
04a3aff8  POP R14
04a3affa  POP R15
04a3affc  POP RBP
04a3affd  RET
```

## `04a3b030` — BiomeSource3d slot 7

- Ghidra name: `FUN_04a3b030`
- Body: `[[04a3b030, 04a3b0d3] [04a3b0e0, 04a3b0f4] [04a3b100, 04a3b16b] [04a3b170, 04a3b28f]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04a3b030(long *param_1,int param_2,short param_3,int param_4,int param_5,undefined8 param_6
                 ,long param_7,ulong param_8)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 auStack_d0 [56];
  int *piStack_98;
  long *plStack_90;
  int *piStack_88;
  ulong uStack_80;
  ulong uStack_78;
  code *pcStack_70;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  ulong uStack_40;
  long lStack_38;
  ulong uVar18;
  
  iStack_5c = param_5 + param_2;
  uVar21 = (ulong)(uint)(param_2 - param_5);
  if (param_2 - param_5 <= iStack_5c) {
    sVar14 = (short)param_5 + param_3;
    if (*(short *)((long)param_1 + 0xe2) < sVar14) {
      sVar14 = *(short *)((long)param_1 + 0xe2);
    }
    param_3 = param_3 - (short)param_5;
    sVar11 = (short)(int)param_1[0x1c];
    if (param_3 < sVar11) {
      param_3 = sVar11;
    }
    if (param_3 <= sVar14) {
      uStack_60 = param_4 - param_5;
      piVar4 = (int *)(ulong)uStack_60;
      uVar17 = param_5 + param_4;
      uVar18 = (ulong)uVar17;
      uStack_58 = (uint)param_3;
      iStack_54 = (int)sVar14;
      if (param_7 == 0) {
        uVar20 = uStack_58;
        do {
          do {
            uStack_44 = 1;
            pcStack_70 = (code *)0x4a3b1df;
            iStack_50 = (int)uVar21;
            uStack_4c = uVar20;
            iStack_48 = (int)piVar4;
            lVar5 = (**(code **)(*param_1 + 0x58))(param_1,&iStack_50);
            if (lVar5 != 0) {
              return 0;
            }
            uVar20 = uVar20 + 4;
          } while (((int)uVar20 <= iStack_54) ||
                  (uVar9 = (int)piVar4 + 4, piVar4 = (int *)(ulong)uVar9, uVar20 = uStack_58,
                  (int)uVar9 <= (int)uVar17));
          uVar9 = (int)uVar21 + 4;
          uVar21 = (ulong)uVar9;
          piVar4 = (int *)(ulong)uStack_60;
        } while ((int)uVar9 <= iStack_5c);
      }
      else {
        uStack_40 = uVar18;
        if (param_8 == 0) {
          piVar7 = &iStack_50;
          uVar20 = uStack_58;
          piVar8 = piVar4;
          do {
            do {
              uVar10 = (ulong)uVar20;
              uStack_44 = 1;
              pcStack_70 = (code *)0x4a3b25f;
              piVar4 = piVar7;
              plVar16 = param_1;
              iStack_50 = (int)uVar21;
              uStack_4c = uVar20;
              iStack_48 = (int)piVar8;
              lVar5 = (**(code **)(*param_1 + 0x58))();
              param_8 = uVar18;
              if (lVar5 != 0) goto LAB_04a3b28b;
              uVar20 = uVar20 + 4;
            } while (((int)uVar20 <= iStack_54) ||
                    (uVar9 = (int)piVar8 + 4, uVar20 = uStack_58, piVar8 = (int *)(ulong)uVar9,
                    (int)uVar9 <= (int)uVar17));
            uVar9 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar9;
            piVar8 = (int *)(ulong)uStack_60;
          } while ((int)uVar9 <= iStack_5c);
        }
        else {
          lStack_38 = param_8 + param_7 * 2;
          piVar8 = (int *)(param_7 * 2);
          uVar17 = uStack_58;
          piVar7 = piVar4;
          do {
            do {
              do {
                uVar10 = (ulong)uVar17;
                uStack_44 = 1;
                piVar4 = &iStack_50;
                pcStack_70 = (code *)0x4a3b134;
                plVar16 = param_1;
                iStack_50 = (int)uVar21;
                uStack_4c = uVar17;
                iStack_48 = (int)piVar7;
                lVar5 = (**(code **)(*param_1 + 0x58))();
                if (lVar5 != 0) {
                  piVar6 = (int *)0x0;
                  do {
                    if (*(short *)(param_8 + (long)piVar6) == *(short *)(lVar5 + 0x168))
                    goto joined_r0x04a3b176;
                    piVar6 = (int *)((long)piVar6 + 2);
                  } while (piVar8 != piVar6);
                  piVar6 = (int *)(lStack_38 - param_8);
joined_r0x04a3b176:
                  if ((piVar6 != (int *)0x0) &&
                     (((long)piVar6 < 1 || ((long)piVar8 < (long)piVar6)))) goto LAB_04a3b28b;
                  if (piVar6 == piVar8) {
                    return 0;
                  }
                }
                uVar17 = uVar17 + 4;
              } while ((int)uVar17 <= iStack_54);
              uVar20 = (int)piVar7 + 4;
              bVar22 = (int)uVar20 <= (int)uStack_40;
              uVar17 = uStack_58;
              piVar7 = (int *)(ulong)uVar20;
            } while (bVar22);
            uVar20 = (int)uVar21 + 4;
            uVar21 = (ulong)uVar20;
            piVar7 = (int *)(ulong)uStack_60;
          } while ((int)uVar20 <= iStack_5c);
        }
      }
    }
  }
  return 1;
LAB_04a3b28b:
  pcStack_70 = FUN_04a3b290;
  func_0x04890760();
  piStack_98 = piVar8;
  plStack_90 = param_1;
  piStack_88 = piVar7;
  uStack_80 = param_8;
  uStack_78 = uVar21;
  pcStack_70 = (code *)uVar10;
  if (((char)piVar4[3] == '\x01') && (*(char *)(plVar16[0x1a] + 0xb8) == '\0')) {
    uStack_110 = (long *)CONCAT44(piVar4[2] >> 4,*piVar4 >> 4);
    FUN_0525af30(&plStack_100,plVar16[0x1a],&uStack_110);
    if (plStack_100 == (long *)0x0) {
      bVar22 = true;
      lVar5 = 0;
      plVar3 = plStack_f8;
    }
    else {
      iVar12 = (int)(short)plStack_100[4] >> 0x1f;
      iVar13 = iVar12 - (short)plStack_100[4];
      iVar15 = iVar13 + 3;
      if (-1 < iVar13) {
        iVar15 = iVar13;
      }
      uVar17 = ((piVar4[1] >> 2) - iVar12) + (iVar15 >> 2);
      if (uVar17 < 0x60) {
        iVar15 = *piVar4;
        iVar12 = piVar4[2];
        pfVar19 = (float *)(((long)(iVar12 >> 2) - (long)*(int *)((long)plStack_100 + 0x1c)) * 0x198
                           + ((long)(iVar15 >> 2) - (long)(int)plStack_100[3]) * 0x660 +
                             *plStack_100);
        if (*(short *)((long)pfVar19 + (ulong)uVar17 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = plVar16[1];
        lVar5 = func_0x0c8ccb70(plVar16[0x1b]);
        if (lVar5 == 0) goto LAB_04a3b3f0;
        fVar23 = (float)func_0x0d3414e0((float)(iVar15 >> 2) * _DAT_011987c4,0,
                                        (float)(iVar12 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar23 = (fVar23 * _DAT_01198494 + *pfVar19) / _DAT_011988e8;
        if (0.0 <= fVar23) {
          fVar24 = _DAT_011983f0;
          if (fVar23 <= _DAT_011983f0) {
            fVar24 = fVar23;
          }
          if (_DAT_011986e0 < fVar24) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar5 = 0;
      }
      bVar22 = lVar5 == 0;
      plVar3 = plStack_f8;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (!bVar22) {
      return lVar5;
    }
  }
  func_0x052582f0(&plStack_100,plVar16[1],*(undefined8 *)piVar4,piVar4[2]);
  if ((char)plVar16[0x19] == '\x01') {
    uStack_110 = plVar16 + 5;
    if ((char)plVar16[0x17] == '\0') {
      uStack_110 = (long *)0x0;
      uStack_108 = 0x7fffffffffffffff;
      func_0x04a3cfe0(plVar16 + 5,auStack_d0,&uStack_110);
      if (uStack_110 == (long *)0x0) goto LAB_04a3b4a0;
    }
    lVar5 = uStack_110[0x11];
  }
  else {
LAB_04a3b4a0:
    lVar5 = 0;
  }
  return lVar5;
}


```

### Assembly

```asm
04a3b030  PUSH RBP
04a3b031  PUSH R15
04a3b033  PUSH R14
04a3b035  PUSH R13
04a3b037  PUSH R12
04a3b039  PUSH RBX
04a3b03a  SUB RSP,0x38
04a3b03e  MOV R15D,ESI
04a3b041  LEA R9D,[R8 + R15*0x1]
04a3b045  SUB R15D,R8D
04a3b048  MOV AL,0x1
04a3b04a  CMP R15D,R9D
04a3b04d  JG 0x04a3b20b
04a3b053  MOV R12,RDI
04a3b056  MOVZX ESI,word ptr [RDI + 0xe2]
04a3b05d  LEA EDI,[R8 + RDX*0x1]
04a3b061  CMP SI,DI
04a3b064  CMOVL EDI,ESI
04a3b067  MOV ESI,dword ptr [R12 + 0xe0]
04a3b06f  SUB EDX,R8D
04a3b072  CMP SI,DX
04a3b075  CMOVG EDX,ESI
04a3b078  CMP DX,DI
04a3b07b  JG 0x04a3b20b
04a3b081  LEA RSI,[RSP + 0x70]
04a3b086  MOV EAX,ECX
04a3b088  SUB EAX,R8D
04a3b08b  ADD R8D,ECX
04a3b08e  MOVSX ECX,DX
04a3b091  MOV dword ptr [RSP + 0x10],ECX
04a3b095  MOVSX ECX,DI
04a3b098  MOV dword ptr [RSP + 0x14],ECX
04a3b09c  MOV RBX,qword ptr [RSI]
04a3b09f  TEST RBX,RBX
04a3b0a2  MOV dword ptr [RSP + 0x8],EAX
04a3b0a6  MOV dword ptr [RSP + 0xc],R9D
04a3b0ab  JZ 0x04a3b1aa
04a3b0b1  MOV qword ptr [RSP + 0x28],R8
04a3b0b6  MOV R14,qword ptr [RSI + 0x8]
04a3b0ba  TEST R14,R14
04a3b0bd  JZ 0x04a3b21a
04a3b0c3  LEA RCX,[R14 + RBX*0x2]
04a3b0c7  MOV qword ptr [RSP + 0x30],RCX
04a3b0cc  ADD RBX,RBX
04a3b0cf  MOV R13D,EAX
04a3b0d2  JMP 0x04a3b0ef
04a3b0e0  ADD R13D,0x4
04a3b0e4  CMP R13D,dword ptr [RSP + 0x28]
04a3b0e9  JG 0x04a3b18f
04a3b0ef  MOV EBP,dword ptr [RSP + 0x10]
04a3b0f3  JMP 0x04a3b112
04a3b100  CMP RAX,RBX
04a3b103  JZ 0x04a3b209
04a3b109  ADD EBP,0x4
04a3b10c  CMP EBP,dword ptr [RSP + 0x14]
04a3b110  JG 0x04a3b0e0
04a3b112  MOV dword ptr [RSP + 0x18],R15D
04a3b117  MOV dword ptr [RSP + 0x1c],EBP
04a3b11b  MOV dword ptr [RSP + 0x20],R13D
04a3b120  MOV byte ptr [RSP + 0x24],0x1
04a3b125  MOV RAX,qword ptr [R12]
04a3b129  MOV RDI,R12
04a3b12c  LEA RSI,[RSP + 0x18]
04a3b131  CALL qword ptr [RAX + 0x58]
04a3b134  TEST RAX,RAX
04a3b137  JZ 0x04a3b109
04a3b139  MOVZX ECX,word ptr [RAX + 0x168]
04a3b140  XOR EAX,EAX
04a3b142  NOP word ptr CS:[RAX + RAX*0x1]
04a3b150  CMP word ptr [R14 + RAX*0x1],CX
04a3b155  JZ 0x04a3b170
04a3b157  ADD RAX,0x2
04a3b15b  CMP RBX,RAX
04a3b15e  JNZ 0x04a3b150
04a3b160  MOV RAX,qword ptr [RSP + 0x30]
04a3b165  SUB RAX,R14
04a3b168  JNZ 0x04a3b178
04a3b16a  JMP 0x04a3b100
04a3b170  ADD RAX,R14
04a3b173  SUB RAX,R14
04a3b176  JZ 0x04a3b100
04a3b178  TEST RAX,RAX
04a3b17b  JLE 0x04a3b28b
04a3b181  CMP RBX,RAX
04a3b184  JGE 0x04a3b100
04a3b18a  JMP 0x04a3b28b
04a3b18f  ADD R15D,0x4
04a3b193  MOV R9D,dword ptr [RSP + 0xc]
04a3b198  CMP R15D,R9D
04a3b19b  MOV EAX,dword ptr [RSP + 0x8]
04a3b19f  JLE 0x04a3b0cf
04a3b1a5  JMP 0x04a3b287
04a3b1aa  LEA R13,[RSP + 0x18]
04a3b1af  MOV EBX,EAX
04a3b1b1  MOV R14,R8
04a3b1b4  MOV EBP,dword ptr [RSP + 0x10]
04a3b1b8  NOP dword ptr [RAX + RAX*0x1]
04a3b1c0  MOV dword ptr [RSP + 0x18],R15D
04a3b1c5  MOV dword ptr [RSP + 0x1c],EBP
04a3b1c9  MOV dword ptr [RSP + 0x20],EBX
04a3b1cd  MOV byte ptr [RSP + 0x24],0x1
04a3b1d2  MOV RAX,qword ptr [R12]
04a3b1d6  MOV RDI,R12
04a3b1d9  MOV RSI,R13
04a3b1dc  CALL qword ptr [RAX + 0x58]
04a3b1df  TEST RAX,RAX
04a3b1e2  JNZ 0x04a3b209
04a3b1e4  ADD EBP,0x4
04a3b1e7  CMP EBP,dword ptr [RSP + 0x14]
04a3b1eb  JLE 0x04a3b1c0
04a3b1ed  ADD EBX,0x4
04a3b1f0  MOV R8,R14
04a3b1f3  CMP EBX,R8D
04a3b1f6  JLE 0x04a3b1b1
04a3b1f8  ADD R15D,0x4
04a3b1fc  CMP R15D,dword ptr [RSP + 0xc]
04a3b201  MOV EAX,dword ptr [RSP + 0x8]
04a3b205  JLE 0x04a3b1af
04a3b207  JMP 0x04a3b287
04a3b209  XOR EAX,EAX
04a3b20b  ADD RSP,0x38
04a3b20f  POP RBX
04a3b210  POP R12
04a3b212  POP R13
04a3b214  POP R14
04a3b216  POP R15
04a3b218  POP RBP
04a3b219  RET
04a3b21a  LEA R13,[RSP + 0x18]
04a3b21f  MOV R14,qword ptr [RSP + 0x28]
04a3b224  MOV EBX,EAX
04a3b226  NOP word ptr CS:[RAX + RAX*0x1]
04a3b230  MOV EBP,dword ptr [RSP + 0x10]
04a3b234  NOP word ptr CS:[RAX + RAX*0x1]
04a3b240  MOV dword ptr [RSP + 0x18],R15D
04a3b245  MOV dword ptr [RSP + 0x1c],EBP
04a3b249  MOV dword ptr [RSP + 0x20],EBX
04a3b24d  MOV byte ptr [RSP + 0x24],0x1
04a3b252  MOV RAX,qword ptr [R12]
04a3b256  MOV RDI,R12
04a3b259  MOV RSI,R13
04a3b25c  CALL qword ptr [RAX + 0x58]
04a3b25f  TEST RAX,RAX
04a3b262  JNZ 0x04a3b28b
04a3b264  ADD EBP,0x4
04a3b267  CMP EBP,dword ptr [RSP + 0x14]
04a3b26b  JLE 0x04a3b240
04a3b26d  ADD EBX,0x4
04a3b270  CMP EBX,R14D
04a3b273  JLE 0x04a3b230
04a3b275  ADD R15D,0x4
04a3b279  MOV R9D,dword ptr [RSP + 0xc]
04a3b27e  CMP R15D,R9D
04a3b281  MOV EAX,dword ptr [RSP + 0x8]
04a3b285  JLE 0x04a3b224
04a3b287  MOV AL,0x1
04a3b289  JMP 0x04a3b20b
04a3b28b  CALL 0x04890760
```

## `04a3b4d0` — BiomeSource3d slot 8

- Ghidra name: `FUN_04a3b4d0`
- Body: `[[04a3b4d0, 04a3b501]]`

### Pseudocode

```c

undefined8 FUN_04a3b4d0(long param_1,short param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = plVar2;
  for (; (plVar2 != plVar1 && (plVar3 = plVar2, *(short *)(*plVar2 + 0x168) != param_2));
      plVar2 = plVar2 + 0x1c) {
    plVar3 = plVar1;
  }
  return CONCAT71((int7)((ulong)plVar1 >> 8),plVar3 != plVar1);
}


```

### Assembly

```asm
04a3b4d0  MOV RCX,qword ptr [RDI + 0x10]
04a3b4d4  MOV RAX,qword ptr [RDI + 0x18]
04a3b4d8  CMP RCX,RAX
04a3b4db  JZ 0x04a3b4fb
04a3b4dd  NOP dword ptr [RAX]
04a3b4e0  MOV RDX,qword ptr [RCX]
04a3b4e3  CMP word ptr [RDX + 0x168],SI
04a3b4ea  JZ 0x04a3b4fb
04a3b4ec  ADD RCX,0xe0
04a3b4f3  CMP RCX,RAX
04a3b4f6  JNZ 0x04a3b4e0
04a3b4f8  MOV RCX,RAX
04a3b4fb  CMP RCX,RAX
04a3b4fe  SETNZ AL
04a3b501  RET
```

## `04a3b510` — BiomeSource3d slot 9

- Ghidra name: `FUN_04a3b510`
- Body: `[[04a3b510, 04a3b541]]`

### Pseudocode

```c

undefined8 FUN_04a3b510(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar3 = plVar2;
  for (; (plVar2 != plVar1 && (plVar3 = plVar2, *(long *)(*plVar2 + 400) != param_2));
      plVar2 = plVar2 + 0x1c) {
    plVar3 = plVar1;
  }
  return CONCAT71((int7)((ulong)plVar1 >> 8),plVar3 != plVar1);
}


```

### Assembly

```asm
04a3b510  MOV RCX,qword ptr [RDI + 0x10]
04a3b514  MOV RAX,qword ptr [RDI + 0x18]
04a3b518  CMP RCX,RAX
04a3b51b  JZ 0x04a3b53b
04a3b51d  NOP dword ptr [RAX]
04a3b520  MOV RDX,qword ptr [RCX]
04a3b523  CMP qword ptr [RDX + 0x190],RSI
04a3b52a  JZ 0x04a3b53b
04a3b52c  ADD RCX,0xe0
04a3b533  CMP RCX,RAX
04a3b536  JNZ 0x04a3b520
04a3b538  MOV RCX,RAX
04a3b53b  CMP RCX,RAX
04a3b53e  SETNZ AL
04a3b541  RET
```

## `04a3b550` — BiomeSource3d slot 10

- Ghidra name: `FUN_04a3b550`
- Body: `[[04a3b550, 04a3b552]]`

### Pseudocode

```c

undefined8 FUN_04a3b550(void)

{
  return 0;
}


```

### Assembly

```asm
04a3b550  XOR EAX,EAX
04a3b552  RET
```

## `04a3b290` — BiomeSource3d slot 11

- Ghidra name: `FUN_04a3b290`
- Body: `[[04a3b290, 04a3b298] [04a3b2a0, 04a3b4b0]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04a3b290(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_68 [56];
  
  if (((char)param_2[3] == '\x01') && (*(char *)(*(long *)(param_1 + 0xd0) + 0xb8) == '\0')) {
    uStack_a8 = CONCAT44(param_2[2] >> 4,*param_2 >> 4);
    FUN_0525af30(&plStack_98,*(long *)(param_1 + 0xd0),&uStack_a8);
    if (plStack_98 == (long *)0x0) {
      bVar10 = true;
      lVar4 = 0;
      plVar3 = plStack_90;
    }
    else {
      iVar6 = (int)(short)plStack_98[4] >> 0x1f;
      iVar7 = iVar6 - (short)plStack_98[4];
      iVar8 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      uVar5 = ((param_2[1] >> 2) - iVar6) + (iVar8 >> 2);
      if (uVar5 < 0x60) {
        iVar8 = *param_2;
        iVar6 = param_2[2];
        pfVar9 = (float *)(((long)(iVar6 >> 2) - (long)*(int *)((long)plStack_98 + 0x1c)) * 0x198 +
                          ((long)(iVar8 >> 2) - (long)(int)plStack_98[3]) * 0x660 + *plStack_98);
        if (*(short *)((long)pfVar9 + (ulong)uVar5 * 2 + 0xac) == -1) goto LAB_04a3b3f0;
        lVar2 = *(long *)(param_1 + 8);
        lVar4 = func_0x0c8ccb70(*(undefined8 *)(param_1 + 0xd8));
        if (lVar4 == 0) goto LAB_04a3b3f0;
        fVar11 = (float)func_0x0d3414e0((float)(iVar8 >> 2) * _DAT_011987c4,0,
                                        (float)(iVar6 >> 2) * _DAT_011987c4,lVar2 + 0x118);
        fVar11 = (fVar11 * _DAT_01198494 + *pfVar9) / _DAT_011988e8;
        if (0.0 <= fVar11) {
          fVar12 = _DAT_011983f0;
          if (fVar11 <= _DAT_011983f0) {
            fVar12 = fVar11;
          }
          if (_DAT_011986e0 < fVar12) goto LAB_04a3b3f0;
        }
      }
      else {
LAB_04a3b3f0:
        lVar4 = 0;
      }
      bVar10 = lVar4 == 0;
      plVar3 = plStack_90;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    if (!bVar10) {
      return lVar4;
    }
  }
  func_0x052582f0(&plStack_98,*(long *)(param_1 + 8),*(undefined8 *)param_2,param_2[2]);
  if (*(char *)(param_1 + 200) == '\x01') {
    uStack_a8 = param_1 + 0x28;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      uStack_a8 = 0;
      uStack_a0 = 0x7fffffffffffffff;
      func_0x04a3cfe0(param_1 + 0x28,auStack_68,&uStack_a8);
      if (uStack_a8 == 0) goto LAB_04a3b4a0;
    }
    lVar4 = *(long *)(uStack_a8 + 0x88);
  }
  else {
LAB_04a3b4a0:
    lVar4 = 0;
  }
  return lVar4;
}


```

### Assembly

```asm
04a3b290  ADD RDI,0x8
04a3b294  JMP 0x04a3b2a0
04a3b2a0  PUSH RBP
04a3b2a1  PUSH R15
04a3b2a3  PUSH R14
04a3b2a5  PUSH R13
04a3b2a7  PUSH R12
04a3b2a9  PUSH RBX
04a3b2aa  SUB RSP,0x78
04a3b2ae  MOV R14,RSI
04a3b2b1  MOV RBX,RDI
04a3b2b4  CMP byte ptr [RSI + 0xc],0x1
04a3b2b8  JNZ 0x04a3b440
04a3b2be  MOV RSI,qword ptr [RBX + 0xc8]
04a3b2c5  CMP byte ptr [RSI + 0xb8],0x0
04a3b2cc  JNZ 0x04a3b440
04a3b2d2  MOV EAX,dword ptr [R14]
04a3b2d5  SAR EAX,0x4
04a3b2d8  MOV dword ptr [RSP],EAX
04a3b2db  MOV EAX,dword ptr [R14 + 0x8]
04a3b2df  SAR EAX,0x4
04a3b2e2  MOV dword ptr [RSP + 0x4],EAX
04a3b2e6  LEA RDI,[RSP + 0x10]
04a3b2eb  MOV RDX,RSP
04a3b2ee  CALL 0x0525af30
04a3b2f3  MOV RAX,qword ptr [RSP + 0x10]
04a3b2f8  TEST RAX,RAX
04a3b2fb  JZ 0x04a3b405
04a3b301  MOV EDX,dword ptr [R14 + 0x4]
04a3b305  SAR EDX,0x2
04a3b308  MOVSX ECX,word ptr [RAX + 0x20]
04a3b30c  MOV ESI,ECX
04a3b30e  SAR ESI,0x1f
04a3b311  SUB ESI,ECX
04a3b313  SHR ECX,0x1f
04a3b316  LEA EDI,[RSI + 0x3]
04a3b319  TEST ESI,ESI
04a3b31b  CMOVNS EDI,ESI
04a3b31e  SAR EDI,0x2
04a3b321  ADD ECX,EDX
04a3b323  ADD ECX,EDI
04a3b325  CMP ECX,0x5f
04a3b328  JA 0x04a3b3f0
04a3b32e  MOV R13D,dword ptr [R14]
04a3b331  SAR R13D,0x2
04a3b335  MOV EBP,dword ptr [R14 + 0x8]
04a3b339  SAR EBP,0x2
04a3b33c  MOVSXD RDX,dword ptr [RAX + 0x18]
04a3b340  MOVSXD RSI,R13D
04a3b343  SUB RSI,RDX
04a3b346  MOVSXD RDX,dword ptr [RAX + 0x1c]
04a3b34a  MOVSXD RDI,EBP
04a3b34d  SUB RDI,RDX
04a3b350  IMUL RDX,RSI,0x660
04a3b357  ADD RDX,qword ptr [RAX]
04a3b35a  IMUL R12,RDI,0x198
04a3b361  ADD R12,RDX
04a3b364  MOV EAX,ECX
04a3b366  MOVZX ESI,word ptr [R12 + RAX*0x2 + 0xac]
04a3b36f  CMP SI,-0x1
04a3b373  JZ 0x04a3b3f0
04a3b375  MOV RDI,qword ptr [RBX + 0xd0]
04a3b37c  MOV R15D,0x118
04a3b382  ADD R15,qword ptr [RBX]
04a3b385  CALL 0x0c8ccb70
04a3b38a  TEST RAX,RAX
04a3b38d  JZ 0x04a3b3f0
04a3b38f  CVTSI2SS XMM0,R13D
04a3b394  MOVSS XMM1,dword ptr [0x011987c4]
04a3b39c  MULSS XMM0,XMM1
04a3b3a0  CVTSI2SS XMM2,EBP
04a3b3a4  MULSS XMM2,XMM1
04a3b3a8  XORPS XMM1,XMM1
04a3b3ab  MOV RDI,R15
04a3b3ae  MOV R15,RAX
04a3b3b1  CALL 0x0d3414e0
04a3b3b6  MOV RAX,R15
04a3b3b9  MULSS XMM0,dword ptr [0x01198494]
04a3b3c1  ADDSS XMM0,dword ptr [R12]
04a3b3c7  DIVSS XMM0,dword ptr [0x011988e8]
04a3b3cf  XORPS XMM1,XMM1
04a3b3d2  UCOMISS XMM1,XMM0
04a3b3d5  JA 0x04a3b3f2
04a3b3d7  MOVSS XMM1,dword ptr [0x011983f0]
04a3b3df  MINSS XMM1,XMM0
04a3b3e3  MOVSS XMM0,dword ptr [0x011986e0]
04a3b3eb  UCOMISS XMM0,XMM1
04a3b3ee  JNC 0x04a3b3f2
04a3b3f0  XOR EAX,EAX
04a3b3f2  TEST RAX,RAX
04a3b3f5  SETZ BPL
04a3b3f9  MOV R15,qword ptr [RSP + 0x18]
04a3b3fe  TEST R15,R15
04a3b401  JNZ 0x04a3b412
04a3b403  JMP 0x04a3b43b
04a3b405  MOV BPL,0x1
04a3b408  MOV R15,qword ptr [RSP + 0x18]
04a3b40d  TEST R15,R15
04a3b410  JZ 0x04a3b43b
04a3b412  MOV RCX,-0x1
04a3b419  XADD.LOCK qword ptr [R15 + 0x8],RCX
04a3b41f  TEST RCX,RCX
04a3b422  JNZ 0x04a3b43b
04a3b424  MOV RCX,qword ptr [R15]
04a3b427  MOV RDI,R15
04a3b42a  MOV R12,RAX
04a3b42d  CALL qword ptr [RCX + 0x10]
04a3b430  MOV RDI,R15
04a3b433  CALL 0x0412c2d0
04a3b438  MOV RAX,R12
04a3b43b  TEST BPL,BPL
04a3b43e  JZ 0x04a3b4a2
04a3b440  MOV RSI,qword ptr [RBX]
04a3b443  MOV RDX,qword ptr [R14]
04a3b446  MOV ECX,dword ptr [R14 + 0x8]
04a3b44a  LEA RDI,[RSP + 0x10]
04a3b44f  CALL 0x052582f0
04a3b454  CMP byte ptr [RBX + 0xc0],0x1
04a3b45b  JNZ 0x04a3b4a0
04a3b45d  LEA RDI,[RBX + 0x20]
04a3b461  CMP byte ptr [RBX + 0xb0],0x0
04a3b468  JNZ 0x04a3b497
04a3b46a  LEA RSI,[RSP + 0x40]
04a3b46f  MOV qword ptr [RSP],0x0
04a3b477  MOV RAX,0x7fffffffffffffff
04a3b481  MOV qword ptr [RSP + 0x8],RAX
04a3b486  MOV RDX,RSP
04a3b489  CALL 0x04a3cfe0
04a3b48e  MOV RDI,qword ptr [RSP]
04a3b492  TEST RDI,RDI
04a3b495  JZ 0x04a3b4a0
04a3b497  MOV RAX,qword ptr [RDI + 0x88]
04a3b49e  JMP 0x04a3b4a2
04a3b4a0  XOR EAX,EAX
04a3b4a2  ADD RSP,0x78
04a3b4a6  POP RBX
04a3b4a7  POP R12
04a3b4a9  POP R13
04a3b4ab  POP R14
04a3b4ad  POP R15
04a3b4af  POP RBP
04a3b4b0  RET
```

## `0c859aa0` — FixedBiomeSource slot 0

- Ghidra name: `FUN_0c859aa0`
- Body: `[[0c859aa0, 0c859aa0]]`

### Pseudocode

```c

void FUN_0c859aa0(void)

{
  return;
}


```

### Assembly

```asm
0c859aa0  RET
```

## `0c859ab0` — FixedBiomeSource slot 1

- Ghidra name: `FUN_0c859ab0`
- Body: `[[0c859ab0, 0c859ab9]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c859ab0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

### Assembly

```asm
0c859ab0  MOV ESI,0x10
0c859ab5  JMP 0x0412a280
```

## `0c84fdd0` — FixedBiomeSource slot 2

- Ghidra name: `FUN_0c84fdd0`
- Body: `[[0c84fdd0, 0c84fddd]]`

### Pseudocode

```c

undefined8 * FUN_0c84fdd0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


```

### Assembly

```asm
0c84fdd0  MOV RAX,RDI
0c84fdd3  XORPS XMM0,XMM0
0c84fdd6  MOVUPS xmmword ptr [RDI + 0x10],XMM0
0c84fdda  MOVUPS xmmword ptr [RDI],XMM0
0c84fddd  RET
```

## `0c851460` — FixedBiomeSource slot 4

- Ghidra name: `FUN_0c851460`
- Body: `[[0c851460, 0c8515a0] [0cae88c0, 0cae89e7] [0cae89f0, 0cae8af1] [0cae8b00, 0cae8b4e] [0cae8b50, 0cae8bd3] [0cae8be0, 0cae8c41] [0cae8c50, 0cae8c99] [0cae8ca0, 0cae8d01] [0cae8d10, 0cae8d50] [0cae8d60, 0cae8d81] [0cae8d90, 0cae8db8] [0cae8dc0, 0cae8dce] [0cae8dd0, 0cae8f12] [0cae8f20, 0cae8f4d] [0cae8f50, 0cae9029] [0cae9030, 0cae905c]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c851460(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *extraout_RDX;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  ushort uStack_8a;
  long lStack_88;
  ulong uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  ulong uStack_58;
  long alStack_50 [5];
  
  plVar7 = *(long **)(param_1 + 8);
  if (*(char *)(param_2 + 0x110b) == '\x01') {
    func_0x0cada270(param_2 + 0x120);
  }
  else {
    auVar14 = pshuflw(ZEXT416(*(uint *)(plVar7 + 0x2d)),ZEXT416(*(uint *)(plVar7 + 0x2d)),0);
    uVar13 = auVar14._0_4_;
    *(undefined4 *)(param_2 + 0x120) = uVar13;
    *(undefined4 *)(param_2 + 0x124) = uVar13;
    *(undefined4 *)(param_2 + 0x128) = uVar13;
    *(undefined4 *)(param_2 + 300) = uVar13;
    *(undefined4 *)(param_2 + 0x130) = uVar13;
    *(undefined4 *)(param_2 + 0x134) = uVar13;
    *(undefined4 *)(param_2 + 0x138) = uVar13;
    *(undefined4 *)(param_2 + 0x13c) = uVar13;
    *(undefined4 *)(param_2 + 0x140) = uVar13;
    *(undefined4 *)(param_2 + 0x144) = uVar13;
    *(undefined4 *)(param_2 + 0x148) = uVar13;
    *(undefined4 *)(param_2 + 0x14c) = uVar13;
    *(undefined4 *)(param_2 + 0x150) = uVar13;
    *(undefined4 *)(param_2 + 0x154) = uVar13;
    *(undefined4 *)(param_2 + 0x158) = uVar13;
    *(undefined4 *)(param_2 + 0x15c) = uVar13;
    *(undefined4 *)(param_2 + 0x160) = uVar13;
    *(undefined4 *)(param_2 + 0x164) = uVar13;
    *(undefined4 *)(param_2 + 0x168) = uVar13;
    *(undefined4 *)(param_2 + 0x16c) = uVar13;
    *(undefined4 *)(param_2 + 0x170) = uVar13;
    *(undefined4 *)(param_2 + 0x174) = uVar13;
    *(undefined4 *)(param_2 + 0x178) = uVar13;
    *(undefined4 *)(param_2 + 0x17c) = uVar13;
    *(undefined4 *)(param_2 + 0x180) = uVar13;
    *(undefined4 *)(param_2 + 0x184) = uVar13;
    *(undefined4 *)(param_2 + 0x188) = uVar13;
    *(undefined4 *)(param_2 + 0x18c) = uVar13;
    *(undefined4 *)(param_2 + 400) = uVar13;
    *(undefined4 *)(param_2 + 0x194) = uVar13;
    *(undefined4 *)(param_2 + 0x198) = uVar13;
    *(undefined4 *)(param_2 + 0x19c) = uVar13;
    *(undefined4 *)(param_2 + 0x1a0) = uVar13;
    *(undefined4 *)(param_2 + 0x1a4) = uVar13;
    *(undefined4 *)(param_2 + 0x1a8) = uVar13;
    *(undefined4 *)(param_2 + 0x1ac) = uVar13;
    *(undefined4 *)(param_2 + 0x1b0) = uVar13;
    *(undefined4 *)(param_2 + 0x1b4) = uVar13;
    *(undefined4 *)(param_2 + 0x1b8) = uVar13;
    *(undefined4 *)(param_2 + 0x1bc) = uVar13;
    *(undefined4 *)(param_2 + 0x1c0) = uVar13;
    *(undefined4 *)(param_2 + 0x1c4) = uVar13;
    *(undefined4 *)(param_2 + 0x1c8) = uVar13;
    *(undefined4 *)(param_2 + 0x1cc) = uVar13;
    *(undefined4 *)(param_2 + 0x1d0) = uVar13;
    *(undefined4 *)(param_2 + 0x1d4) = uVar13;
    *(undefined4 *)(param_2 + 0x1d8) = uVar13;
    *(undefined4 *)(param_2 + 0x1dc) = uVar13;
    *(undefined4 *)(param_2 + 0x1e0) = uVar13;
    *(undefined4 *)(param_2 + 0x1e4) = uVar13;
    *(undefined4 *)(param_2 + 0x1e8) = uVar13;
    *(undefined4 *)(param_2 + 0x1ec) = uVar13;
    *(undefined4 *)(param_2 + 0x1f0) = uVar13;
    *(undefined4 *)(param_2 + 500) = uVar13;
    *(undefined4 *)(param_2 + 0x1f8) = uVar13;
    *(undefined4 *)(param_2 + 0x1fc) = uVar13;
    *(undefined4 *)(param_2 + 0x200) = uVar13;
    *(undefined4 *)(param_2 + 0x204) = uVar13;
    *(undefined4 *)(param_2 + 0x208) = uVar13;
    *(undefined4 *)(param_2 + 0x20c) = uVar13;
    *(undefined4 *)(param_2 + 0x210) = uVar13;
    *(undefined4 *)(param_2 + 0x214) = uVar13;
    *(undefined4 *)(param_2 + 0x218) = uVar13;
    *(undefined4 *)(param_2 + 0x21c) = uVar13;
    *(undefined4 *)(param_2 + 0x220) = uVar13;
    *(undefined4 *)(param_2 + 0x224) = uVar13;
    *(undefined4 *)(param_2 + 0x228) = uVar13;
    *(undefined4 *)(param_2 + 0x22c) = uVar13;
    *(undefined4 *)(param_2 + 0x230) = uVar13;
    *(undefined4 *)(param_2 + 0x234) = uVar13;
    *(undefined4 *)(param_2 + 0x238) = uVar13;
    *(undefined4 *)(param_2 + 0x23c) = uVar13;
    *(undefined4 *)(param_2 + 0x240) = uVar13;
    *(undefined4 *)(param_2 + 0x244) = uVar13;
    *(undefined4 *)(param_2 + 0x248) = uVar13;
    *(undefined4 *)(param_2 + 0x24c) = uVar13;
    *(undefined4 *)(param_2 + 0x250) = uVar13;
    *(undefined4 *)(param_2 + 0x254) = uVar13;
    *(undefined4 *)(param_2 + 600) = uVar13;
    *(undefined4 *)(param_2 + 0x25c) = uVar13;
    *(undefined4 *)(param_2 + 0x260) = uVar13;
    *(undefined4 *)(param_2 + 0x264) = uVar13;
    *(undefined4 *)(param_2 + 0x268) = uVar13;
    *(undefined4 *)(param_2 + 0x26c) = uVar13;
    *(undefined4 *)(param_2 + 0x270) = uVar13;
    *(undefined4 *)(param_2 + 0x274) = uVar13;
    *(undefined4 *)(param_2 + 0x278) = uVar13;
    *(undefined4 *)(param_2 + 0x27c) = uVar13;
    *(undefined4 *)(param_2 + 0x280) = uVar13;
    *(undefined4 *)(param_2 + 0x284) = uVar13;
    *(undefined4 *)(param_2 + 0x288) = uVar13;
    *(undefined4 *)(param_2 + 0x28c) = uVar13;
    *(undefined4 *)(param_2 + 0x290) = uVar13;
    *(undefined4 *)(param_2 + 0x294) = uVar13;
    *(undefined4 *)(param_2 + 0x298) = uVar13;
    *(undefined4 *)(param_2 + 0x29c) = uVar13;
    *(undefined4 *)(param_2 + 0x2a0) = uVar13;
    *(undefined4 *)(param_2 + 0x2a4) = uVar13;
    *(undefined4 *)(param_2 + 0x2a8) = uVar13;
    *(undefined4 *)(param_2 + 0x2ac) = uVar13;
    *(undefined4 *)(param_2 + 0x2b0) = uVar13;
    *(undefined4 *)(param_2 + 0x2b4) = uVar13;
    *(undefined4 *)(param_2 + 0x2b8) = uVar13;
    *(undefined4 *)(param_2 + 700) = uVar13;
    *(undefined4 *)(param_2 + 0x2c0) = uVar13;
    *(undefined4 *)(param_2 + 0x2c4) = uVar13;
    *(undefined4 *)(param_2 + 0x2c8) = uVar13;
    *(undefined4 *)(param_2 + 0x2cc) = uVar13;
    *(undefined4 *)(param_2 + 0x2d0) = uVar13;
    *(undefined4 *)(param_2 + 0x2d4) = uVar13;
    *(undefined4 *)(param_2 + 0x2d8) = uVar13;
    *(undefined4 *)(param_2 + 0x2dc) = uVar13;
    *(undefined4 *)(param_2 + 0x2e0) = uVar13;
    *(undefined4 *)(param_2 + 0x2e4) = uVar13;
    *(undefined4 *)(param_2 + 0x2e8) = uVar13;
    *(undefined4 *)(param_2 + 0x2ec) = uVar13;
    *(undefined4 *)(param_2 + 0x2f0) = uVar13;
    *(undefined4 *)(param_2 + 0x2f4) = uVar13;
    *(undefined4 *)(param_2 + 0x2f8) = uVar13;
    *(undefined4 *)(param_2 + 0x2fc) = uVar13;
    *(undefined4 *)(param_2 + 0x300) = uVar13;
    *(undefined4 *)(param_2 + 0x304) = uVar13;
    *(undefined4 *)(param_2 + 0x308) = uVar13;
    *(undefined4 *)(param_2 + 0x30c) = uVar13;
    *(undefined4 *)(param_2 + 0x310) = uVar13;
    *(undefined4 *)(param_2 + 0x314) = uVar13;
    *(undefined4 *)(param_2 + 0x318) = uVar13;
    *(undefined4 *)(param_2 + 0x31c) = uVar13;
  }
  lStack_88 = *(long *)(param_2 + 0xfe0);
  *(undefined8 *)(param_2 + 0xfe0) = 0;
  uVar8 = *(ulong *)(param_2 + 0xfe8);
  *(undefined8 *)(param_2 + 0xfe8) = 0;
  plStack_78 = *(long **)(param_2 + 0xff0);
  lStack_70 = *(long *)(param_2 + 0xff8);
  uStack_68 = *(undefined4 *)(param_2 + 0x1000);
  if (lStack_70 != 0) {
    plVar7 = (long *)(param_2 + 0xff0);
    uVar3 = plStack_78[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar3 = uVar3 & uVar8 - 1;
    }
    else if (uVar8 <= uVar3) {
      if ((uVar3 | uVar8) >> 0x20 == 0) {
        uVar3 = (uVar3 & 0xffffffff) % (uVar8 & 0xffffffff);
      }
      else {
        uVar3 = uVar3 % uVar8;
      }
    }
    *(long ***)(lStack_88 + uVar3 * 8) = &plStack_78;
    *plVar7 = 0;
    *(undefined8 *)(param_2 + 0xff8) = 0;
  }
  lVar1 = param_2 + 0xfe0;
  uStack_80 = uVar8;
  if (*(char *)(param_2 + 0x110b) != '\x01') {
    lVar4 = (**(code **)(**(long **)(param_2 + 0x28) + 0x2b0))();
    plVar10 = *(long **)(param_2 + 0x30);
    uVar2 = (**(code **)(*plVar10 + 0xd0))();
    plVar9 = *(long **)(lVar4 + 0x380);
    plVar6 = *(long **)(lVar4 + 0x388);
    uVar3 = 0;
    if ((long)plVar6 - (long)plVar9 != 0) {
      plVar7 = plVar6;
      uVar3 = (long)plVar6 - (long)plVar9 >> 3;
      do {
        while( true ) {
          uVar8 = uVar3 >> 1;
          plVar10 = plVar9 + uVar8;
          if (*(ushort *)(plVar9[uVar8] + 0x168) < uVar2) break;
          if (*(ushort *)(plVar9[uVar8] + 0x168) <= uVar2) goto LAB_0cae8c20;
          plVar7 = plVar10;
          uVar3 = uVar8;
          if (uVar8 == 0) goto LAB_0cae8c1b;
        }
        plVar9 = plVar10 + 1;
        uVar3 = ~uVar8 + uVar3;
        uVar8 = 0;
        plVar10 = plVar9;
      } while (uVar3 != 0);
    }
LAB_0cae8c1b:
    do {
      uVar2 = func_0x04890760();
      plVar9 = extraout_RDX;
LAB_0cae8c20:
      if (uVar3 != 1) {
        do {
          uVar11 = uVar8 >> 1;
          if (*(ushort *)(plVar9[uVar11] + 0x168) < uVar2) {
            plVar9 = plVar9 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar8;
          }
          uVar3 = 0;
          uVar8 = uVar11;
        } while (uVar11 != 0);
      }
      plVar10 = plVar10 + 1;
      lVar4 = (long)plVar7 - (long)plVar10;
      if (lVar4 != 0) {
        plVar7 = plVar10;
        uVar8 = lVar4 >> 3;
        do {
          uVar11 = uVar8 >> 1;
          uVar3 = plVar7[uVar11];
          if (*(ushort *)(uVar3 + 0x168) <= uVar2) {
            plVar7 = plVar7 + uVar11 + 1;
            uVar11 = ~uVar11 + uVar8;
          }
          plVar10 = (long *)0x0;
          uVar8 = uVar11;
        } while (uVar11 != 0);
      }
      uVar8 = 0;
    } while (((plVar9 == plVar7) || (plVar9 == plVar6)) || (lVar4 = *plVar9, lVar4 == 0));
    lVar12 = 0;
LAB_0cae8cc6:
    uVar2 = *(ushort *)(param_2 + 0x120 + lVar12 * 2);
    lVar5 = (**(code **)(**(long **)(param_2 + 0x28) + 0x2b0))();
    plVar7 = *(long **)(lVar5 + 0x380);
    plVar10 = *(long **)(lVar5 + 0x388);
    if ((long)plVar10 - (long)plVar7 != 0) {
      plVar9 = plVar10;
      uVar8 = (long)plVar10 - (long)plVar7 >> 3;
LAB_0cae8d29:
      do {
        uVar3 = uVar8 >> 1;
        plVar6 = plVar7 + uVar3;
        if (*(ushort *)(plVar7[uVar3] + 0x168) < uVar2) goto LAB_0cae8d10;
        if (*(ushort *)(plVar7[uVar3] + 0x168) <= uVar2) {
          if (uVar8 != 1) {
            do {
              uVar8 = uVar3 >> 1;
              if (*(ushort *)(plVar7[uVar8] + 0x168) < uVar2) {
                plVar7 = plVar7 + uVar8 + 1;
                uVar8 = ~uVar8 + uVar3;
              }
              uVar3 = uVar8;
            } while (uVar8 != 0);
          }
          lVar5 = (long)plVar9 - (long)(plVar6 + 1);
          if (lVar5 != 0) {
            plVar9 = plVar6 + 1;
            uVar8 = lVar5 >> 3;
            do {
              uVar3 = uVar8 >> 1;
              if (*(ushort *)(plVar9[uVar3] + 0x168) <= uVar2) {
                plVar9 = plVar9 + uVar3 + 1;
                uVar3 = ~uVar3 + uVar8;
              }
              uVar8 = uVar3;
            } while (uVar3 != 0);
          }
          if ((plVar7 == plVar9) || (plVar7 == plVar10)) break;
          lVar5 = *plVar7;
          goto LAB_0cae8dd2;
        }
        plVar9 = plVar6;
        uVar8 = uVar3;
      } while (uVar3 != 0);
    }
LAB_0cae8dd0:
    lVar5 = 0;
LAB_0cae8dd2:
    if (lVar5 == 0) {
      lVar5 = lVar4;
    }
    if ((_DAT_011983fc < *(float *)(lVar5 + 0x2c)) &&
       (*(float *)(lVar5 + 8) + _DAT_01198c3c < _DAT_01198788)) {
      uVar2 = *(ushort *)(lVar5 + 0x168);
      if (uStack_80 != 0) {
        uVar3 = (ulong)uVar2;
        uVar8 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar8 >> 0x38 < 2) {
          uVar11 = (ulong)((uint)uVar2 & (int)uStack_80 - 1U);
        }
        else {
          uVar11 = uVar3;
          if (uStack_80 <= uVar3) {
            uVar11 = (ulong)(ushort)(uVar2 % (ushort)uStack_80);
          }
        }
        plVar7 = *(long **)(lStack_88 + uVar11 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          if ((byte)(uVar8 >> 0x38) < 2) {
            do {
              if (plVar7[1] == uVar3) {
                if (*(ushort *)(plVar7 + 2) == uVar2) goto LAB_0cae8f7d;
              }
              else if ((plVar7[1] & uStack_80 - 1) != uVar11) break;
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar7[1];
              if (uVar8 == uVar3) {
                if (*(ushort *)(plVar7 + 2) == uVar2) goto LAB_0cae8f7d;
              }
              else {
                if (uStack_80 <= uVar8) {
                  if ((uVar8 | uStack_80) >> 0x20 == 0) {
                    if ((uVar8 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11)
                    goto LAB_0cae8ecb;
                    break;
                  }
                  uVar8 = uVar8 % uStack_80;
                }
                if (uVar8 != uVar11) break;
              }
LAB_0cae8ecb:
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
        }
      }
      plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar2);
      lVar5 = func_0x0cb14930(lVar1,uVar2,&plStack_60);
      *(undefined1 *)(lVar5 + 0x12) = 0;
    }
    goto LAB_0cae8cb6;
  }
  plStack_60 = alStack_50;
  uStack_58 = 0x400000000;
  func_0x0cafcfe0(param_2 + 0x120,&plStack_60);
  if ((uStack_58 & 0xffffffff) == 0) {
LAB_0cae8fa6:
    lVar5 = lStack_88;
    plVar7 = plStack_78;
    if (plStack_60 != (long *)0x0 && alStack_50 != plStack_60) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plStack_60);
      lVar5 = lStack_88;
      plVar7 = plStack_78;
    }
joined_r0x0cae8fd2:
    while (plVar7 != (long *)0x0) {
      plVar10 = (long *)*plVar7;
      lStack_88 = lVar5;
      func_0x0412a280(plVar7,0x18);
      lVar5 = lStack_88;
      plVar7 = plVar10;
    }
    lStack_88 = 0;
    if (lVar5 != 0) {
      func_0x0412a280(lVar5,uStack_80 << 3);
    }
    return;
  }
  plVar7 = plStack_60 + (uStack_58 & 0xffffffff);
  plVar10 = plStack_60;
  fVar15 = _DAT_01198c3c;
LAB_0cae8a1c:
  lVar4 = *plVar10;
  if ((0.0 < *(float *)(lVar4 + 0x2c)) && (*(float *)(lVar4 + 8) + fVar15 < _DAT_01198788)) {
    uStack_8a = *(ushort *)(lVar4 + 0x168);
    if (uStack_80 != 0) {
      uVar3 = (ulong)uStack_8a;
      uVar8 = uStack_80 - (uStack_80 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar8 >> 0x38 < 2) {
        uVar11 = (ulong)((uint)uStack_8a & (int)uStack_80 - 1U);
      }
      else {
        uVar11 = uVar3;
        if (uStack_80 <= uVar3) {
          uVar11 = (ulong)(ushort)(uStack_8a % (ushort)uStack_80);
        }
      }
      plVar9 = *(long **)(lStack_88 + uVar11 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if ((byte)(uVar8 >> 0x38) < 2) {
          do {
            if (plVar9[1] == uVar3) {
              if (*(ushort *)(plVar9 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else if ((plVar9[1] & uStack_80 - 1) != uVar11) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar9[1];
            if (uVar8 == uVar3) {
              if (*(ushort *)(plVar9 + 2) == uStack_8a) goto LAB_0cae8b79;
            }
            else {
              if (uStack_80 <= uVar8) {
                if ((uVar8 | uStack_80) >> 0x20 == 0) {
                  if ((uVar8 & 0xffffffff) % (uStack_80 & 0xffffffff) == uVar11) goto LAB_0cae8b06;
                  break;
                }
                uVar8 = uVar8 % uStack_80;
              }
              if (uVar8 != uVar11) break;
            }
LAB_0cae8b06:
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    lVar4 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
    *(undefined1 *)(lVar4 + 0x12) = 0;
    fVar15 = _DAT_01198c3c;
  }
  goto LAB_0cae8a0f;
LAB_0cae8d10:
  plVar7 = plVar6 + 1;
  uVar8 = ~uVar3 + uVar8;
  if (uVar8 == 0) goto LAB_0cae8dd0;
  goto LAB_0cae8d29;
LAB_0cae8f7d:
  plStack_60 = (long *)CONCAT62(plStack_60._2_6_,uVar2);
  lVar5 = func_0x0cb14930(lVar1,uVar2,&plStack_60);
  *(undefined1 *)(lVar5 + 0x12) = *(undefined1 *)((long)plVar7 + 0x12);
LAB_0cae8cb6:
  lVar12 = lVar12 + 1;
  lVar5 = lStack_88;
  plVar7 = plStack_78;
  if (lVar12 == 0x100) goto joined_r0x0cae8fd2;
  goto LAB_0cae8cc6;
LAB_0cae8b79:
  lVar4 = func_0x0cb14930(lVar1,uStack_8a,&uStack_8a);
  *(undefined1 *)(lVar4 + 0x12) = *(undefined1 *)((long)plVar9 + 0x12);
  fVar15 = _DAT_01198c3c;
LAB_0cae8a0f:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar7) goto LAB_0cae8fa6;
  goto LAB_0cae8a1c;
}


```

### Assembly

```asm
0c851460  PUSH RBX
0c851461  MOV RBX,RSI
0c851464  MOV RSI,qword ptr [RDI + 0x8]
0c851468  CMP byte ptr [RBX + 0x110b],0x1
0c85146f  JNZ 0x0c851486
0c851471  LEA RDI,[RBX + 0x120]
0c851478  CALL 0x0cada270
0c85147d  MOV RDI,RBX
0c851480  POP RBX
0c851481  JMP 0x0cae88c0
0c851486  MOVD XMM0,dword ptr [RSI + 0x168]
0c85148e  PSHUFLW XMM0,XMM0,0x0
0c851493  PSHUFD XMM0,XMM0,0x0
0c851498  MOVDQU xmmword ptr [RBX + 0x120],XMM0
0c8514a0  MOVDQU xmmword ptr [RBX + 0x130],XMM0
0c8514a8  MOVDQU xmmword ptr [RBX + 0x140],XMM0
0c8514b0  MOVDQU xmmword ptr [RBX + 0x150],XMM0
0c8514b8  MOVDQU xmmword ptr [RBX + 0x160],XMM0
0c8514c0  MOVDQU xmmword ptr [RBX + 0x170],XMM0
0c8514c8  MOVDQU xmmword ptr [RBX + 0x180],XMM0
0c8514d0  MOVDQU xmmword ptr [RBX + 0x190],XMM0
0c8514d8  MOVDQU xmmword ptr [RBX + 0x1a0],XMM0
0c8514e0  MOVDQU xmmword ptr [RBX + 0x1b0],XMM0
0c8514e8  MOVDQU xmmword ptr [RBX + 0x1c0],XMM0
0c8514f0  MOVDQU xmmword ptr [RBX + 0x1d0],XMM0
0c8514f8  MOVDQU xmmword ptr [RBX + 0x1e0],XMM0
0c851500  MOVDQU xmmword ptr [RBX + 0x1f0],XMM0
0c851508  MOVDQU xmmword ptr [RBX + 0x200],XMM0
0c851510  MOVDQU xmmword ptr [RBX + 0x210],XMM0
0c851518  MOVDQU xmmword ptr [RBX + 0x220],XMM0
0c851520  MOVDQU xmmword ptr [RBX + 0x230],XMM0
0c851528  MOVDQU xmmword ptr [RBX + 0x240],XMM0
0c851530  MOVDQU xmmword ptr [RBX + 0x250],XMM0
0c851538  MOVDQU xmmword ptr [RBX + 0x260],XMM0
0c851540  MOVDQU xmmword ptr [RBX + 0x270],XMM0
0c851548  MOVDQU xmmword ptr [RBX + 0x280],XMM0
0c851550  MOVDQU xmmword ptr [RBX + 0x290],XMM0
0c851558  MOVDQU xmmword ptr [RBX + 0x2a0],XMM0
0c851560  MOVDQU xmmword ptr [RBX + 0x2b0],XMM0
0c851568  MOVDQU xmmword ptr [RBX + 0x2c0],XMM0
0c851570  MOVDQU xmmword ptr [RBX + 0x2d0],XMM0
0c851578  MOVDQU xmmword ptr [RBX + 0x2e0],XMM0
0c851580  MOVDQU xmmword ptr [RBX + 0x2f0],XMM0
0c851588  MOVDQU xmmword ptr [RBX + 0x300],XMM0
0c851590  MOVDQU xmmword ptr [RBX + 0x310],XMM0
0c851598  MOV RDI,RBX
0c85159b  POP RBX
0c85159c  JMP 0x0cae88c0
0cae88c0  PUSH RBP
0cae88c1  PUSH R15
0cae88c3  PUSH R14
0cae88c5  PUSH R13
0cae88c7  PUSH R12
0cae88c9  PUSH RBX
0cae88ca  SUB RSP,0x68
0cae88ce  MOV R14,RDI
0cae88d1  MOV RCX,qword ptr [RDI + 0xfe0]
0cae88d8  MOV qword ptr [RDI + 0xfe0],0x0
0cae88e3  MOV qword ptr [RSP + 0x10],RCX
0cae88e8  MOV R8,qword ptr [RDI + 0xfe8]
0cae88ef  MOV qword ptr [RSP + 0x18],R8
0cae88f4  MOV qword ptr [RDI + 0xfe8],0x0
0cae88ff  MOV RAX,qword ptr [RDI + 0xff0]
0cae8906  MOV qword ptr [RSP + 0x20],RAX
0cae890b  MOV RDX,qword ptr [RDI + 0xff8]
0cae8912  MOV qword ptr [RSP + 0x28],RDX
0cae8917  MOVSS XMM0,dword ptr [RDI + 0x1000]
0cae891f  MOVSS dword ptr [RSP + 0x30],XMM0
0cae8925  TEST RDX,RDX
0cae8928  JZ 0x0cae8974
0cae892a  LEA RDI,[RSP + 0x20]
0cae892f  LEA RSI,[R14 + 0xff0]
0cae8936  MOV RAX,qword ptr [RAX + 0x8]
0cae893a  LEA RDX,[R8 + -0x1]
0cae893e  TEST R8,RDX
0cae8941  JNZ 0x0cae8948
0cae8943  AND RAX,RDX
0cae8946  JMP 0x0cae896a
0cae8948  CMP RAX,R8
0cae894b  JC 0x0cae896a
0cae894d  MOV RDX,RAX
0cae8950  OR RDX,R8
0cae8953  SHR RDX,0x20
0cae8957  JZ 0x0cae8963
0cae8959  XOR EDX,EDX
0cae895b  DIV R8
0cae895e  MOV RAX,RDX
0cae8961  JMP 0x0cae896a
0cae8963  XOR EDX,EDX
0cae8965  DIV R8D
0cae8968  MOV EAX,EDX
0cae896a  MOV qword ptr [RCX + RAX*0x8],RDI
0cae896e  XORPS XMM0,XMM0
0cae8971  MOVUPS xmmword ptr [RSI],XMM0
0cae8974  LEA RBX,[R14 + 0xfe0]
0cae897b  CMP byte ptr [R14 + 0x110b],0x1
0cae8983  JNZ 0x0cae8b95
0cae8989  LEA R15,[RSP + 0x48]
0cae898e  MOV qword ptr [RSP + 0x38],R15
0cae8993  MOV RAX,0x400000000
0cae899d  MOV qword ptr [RSP + 0x40],RAX
0cae89a2  ADD R14,0x120
0cae89a9  LEA RSI,[RSP + 0x38]
0cae89ae  MOV RDI,R14
0cae89b1  CALL 0x0cafcfe0
0cae89b6  MOV R14,qword ptr [RSP + 0x38]
0cae89bb  MOV EAX,dword ptr [RSP + 0x40]
0cae89bf  TEST RAX,RAX
0cae89c2  JZ 0x0cae8fa6
0cae89c8  LEA R13,[R14 + RAX*0x8]
0cae89cc  XORPS XMM1,XMM1
0cae89cf  MOVSS XMM2,dword ptr [0x01198c3c]
0cae89d7  LEA R15,[RSP + 0xe]
0cae89dc  MOV R12,0x3333333333333333
0cae89e6  JMP 0x0cae8a1c
0cae89f0  MOV word ptr [RSP + 0xe],SI
0cae89f5  MOV RDI,RBX
0cae89f8  MOV RDX,R15
0cae89fb  CALL 0x0cb14930
0cae8a00  MOV byte ptr [RAX + 0x12],0x0
0cae8a04  XORPS XMM1,XMM1
0cae8a07  MOVSS XMM2,dword ptr [0x01198c3c]
0cae8a0f  ADD R14,0x8
0cae8a13  CMP R14,R13
0cae8a16  JZ 0x0cae8f9c
0cae8a1c  MOV RAX,qword ptr [R14]
0cae8a1f  MOVSS XMM0,dword ptr [RAX + 0x2c]
0cae8a24  UCOMISS XMM0,XMM1
0cae8a27  MOVSS XMM0,dword ptr [RAX + 0x8]
0cae8a2c  ADDSS XMM0,XMM2
0cae8a30  JBE 0x0cae8a0f
0cae8a32  MOVSS XMM3,dword ptr [0x01198788]
0cae8a3a  UCOMISS XMM3,XMM0
0cae8a3d  JBE 0x0cae8a0f
0cae8a3f  MOVZX ESI,word ptr [RAX + 0x168]
0cae8a46  MOV RCX,qword ptr [RSP + 0x18]
0cae8a4b  TEST RCX,RCX
0cae8a4e  JZ 0x0cae89f0
0cae8a50  MOVZX EDI,SI
0cae8a53  MOV RAX,RCX
0cae8a56  SHR RAX,0x1
0cae8a59  MOV RDX,0x5555555555555555
0cae8a63  AND RAX,RDX
0cae8a66  MOV RDX,RCX
0cae8a69  SUB RDX,RAX
0cae8a6c  MOV RAX,RDX
0cae8a6f  AND RAX,R12
0cae8a72  SHR RDX,0x2
0cae8a76  AND RDX,R12
0cae8a79  ADD RDX,RAX
0cae8a7c  MOV R9,RDX
0cae8a7f  SHR R9,0x4
0cae8a83  ADD R9,RDX
0cae8a86  MOV RAX,0xf0f0f0f0f0f0f0f
0cae8a90  AND R9,RAX
0cae8a93  MOV RAX,0x101010101010101
0cae8a9d  IMUL R9,RAX
0cae8aa1  SHR R9,0x38
0cae8aa5  CMP R9,0x1
0cae8aa9  JA 0x0cae8ab6
0cae8aab  LEA EAX,[RCX + -0x1]
0cae8aae  MOV R8D,EDI
0cae8ab1  AND R8D,EAX
0cae8ab4  JMP 0x0cae8ac9
0cae8ab6  MOV R8,RDI
0cae8ab9  CMP RCX,RDI
0cae8abc  JA 0x0cae8ac9
0cae8abe  MOV EAX,ESI
0cae8ac0  XOR EDX,EDX
0cae8ac2  DIV CX
0cae8ac5  MOVZX R8D,DX
0cae8ac9  MOV RAX,qword ptr [RSP + 0x10]
0cae8ace  MOV RAX,qword ptr [RAX + R8*0x8]
0cae8ad2  TEST RAX,RAX
0cae8ad5  JZ 0x0cae89f0
0cae8adb  MOV RBP,qword ptr [RAX]
0cae8ade  TEST RBP,RBP
0cae8ae1  JZ 0x0cae89f0
0cae8ae7  CMP R9D,0x2
0cae8aeb  JNC 0x0cae8b13
0cae8aed  DEC RCX
0cae8af0  JMP 0x0cae8b63
0cae8b00  CMP word ptr [RBP + 0x10],SI
0cae8b04  JZ 0x0cae8b79
0cae8b06  MOV RBP,qword ptr [RBP]
0cae8b0a  TEST RBP,RBP
0cae8b0d  JZ 0x0cae89f0
0cae8b13  MOV RAX,qword ptr [RBP + 0x8]
0cae8b17  CMP RAX,RDI
0cae8b1a  JZ 0x0cae8b00
0cae8b1c  CMP RAX,RCX
0cae8b1f  JC 0x0cae8b35
0cae8b21  MOV RDX,RAX
0cae8b24  OR RDX,RCX
0cae8b27  SHR RDX,0x20
0cae8b2b  JZ 0x0cae8b3f
0cae8b2d  XOR EDX,EDX
0cae8b2f  DIV RCX
0cae8b32  MOV RAX,RDX
0cae8b35  CMP RAX,R8
0cae8b38  JZ 0x0cae8b06
0cae8b3a  JMP 0x0cae89f0
0cae8b3f  XOR EDX,EDX
0cae8b41  DIV ECX
0cae8b43  MOV EAX,EDX
0cae8b45  CMP RAX,R8
0cae8b48  JZ 0x0cae8b06
0cae8b4a  JMP 0x0cae89f0
0cae8b50  CMP word ptr [RBP + 0x10],SI
0cae8b54  JZ 0x0cae8b79
0cae8b56  MOV RBP,qword ptr [RBP]
0cae8b5a  TEST RBP,RBP
0cae8b5d  JZ 0x0cae89f0
0cae8b63  MOV RAX,qword ptr [RBP + 0x8]
0cae8b67  CMP RAX,RDI
0cae8b6a  JZ 0x0cae8b50
0cae8b6c  AND RAX,RCX
0cae8b6f  CMP RAX,R8
0cae8b72  JZ 0x0cae8b56
0cae8b74  JMP 0x0cae89f0
0cae8b79  MOV word ptr [RSP + 0xe],SI
0cae8b7e  MOV RDI,RBX
0cae8b81  MOV RDX,R15
0cae8b84  CALL 0x0cb14930
0cae8b89  MOVZX ECX,byte ptr [RBP + 0x12]
0cae8b8d  MOV byte ptr [RAX + 0x12],CL
0cae8b90  JMP 0x0cae8a04
0cae8b95  MOV RDI,qword ptr [R14 + 0x28]
0cae8b99  MOV RAX,qword ptr [RDI]
0cae8b9c  CALL qword ptr [RAX + 0x2b0]
0cae8ba2  MOV R15,RAX
0cae8ba5  MOV RDI,qword ptr [R14 + 0x30]
0cae8ba9  MOV RAX,qword ptr [RDI]
0cae8bac  CALL qword ptr [RAX + 0xd0]
0cae8bb2  MOV RDX,qword ptr [R15 + 0x380]
0cae8bb9  MOV RCX,qword ptr [R15 + 0x388]
0cae8bc0  MOV R9,RCX
0cae8bc3  SUB R9,RDX
0cae8bc6  JZ 0x0cae8c1b
0cae8bc8  SAR R9,0x3
0cae8bcc  MOV RSI,RCX
0cae8bcf  MOV R8,R9
0cae8bd2  JMP 0x0cae8bf5
0cae8be0  ADD RDI,0x8
0cae8be4  NOT R8
0cae8be7  ADD R8,R9
0cae8bea  MOV RDX,RDI
0cae8bed  MOV R9,R8
0cae8bf0  TEST R8,R8
0cae8bf3  JZ 0x0cae8c1b
0cae8bf5  SHR R8,0x1
0cae8bf8  LEA RDI,[RDX + R8*0x8]
0cae8bfc  MOV R10,qword ptr [RDX + R8*0x8]
0cae8c00  MOVZX R10D,word ptr [R10 + 0x168]
0cae8c08  CMP R10W,AX
0cae8c0c  JC 0x0cae8be0
0cae8c0e  JBE 0x0cae8c20
0cae8c10  MOV RSI,RDI
0cae8c13  MOV R9,R8
0cae8c16  TEST R8,R8
0cae8c19  JNZ 0x0cae8bf5
0cae8c1b  CALL 0x04890760
0cae8c20  CMP R9,0x1
0cae8c24  JNZ 0x0cae9025
0cae8c2a  ADD RDI,0x8
0cae8c2e  MOV R8,RSI
0cae8c31  SUB R8,RDI
0cae8c34  JZ 0x0cae8c79
0cae8c36  SAR R8,0x3
0cae8c3a  MOV RSI,RDI
0cae8c3d  MOV RDI,R8
0cae8c40  JMP 0x0cae8c58
0cae8c50  MOV R8,RDI
0cae8c53  TEST RDI,RDI
0cae8c56  JZ 0x0cae8c79
0cae8c58  SHR RDI,0x1
0cae8c5b  MOV R9,qword ptr [RSI + RDI*0x8]
0cae8c5f  CMP AX,word ptr [R9 + 0x168]
0cae8c67  JC 0x0cae8c50
0cae8c69  LEA RSI,[RSI + RDI*0x8]
0cae8c6d  ADD RSI,0x8
0cae8c71  NOT RDI
0cae8c74  ADD RDI,R8
0cae8c77  JMP 0x0cae8c50
0cae8c79  CMP RDX,RSI
0cae8c7c  JZ 0x0cae8c1b
0cae8c7e  CMP RDX,RCX
0cae8c81  JZ 0x0cae8c1b
0cae8c83  MOV R12,qword ptr [RDX]
0cae8c86  TEST R12,R12
0cae8c89  JZ 0x0cae8c1b
0cae8c8b  MOV RBP,0x3333333333333333
0cae8c95  XOR R13D,R13D
0cae8c98  JMP 0x0cae8cc6
0cae8ca0  MOV word ptr [RSP + 0x38],SI
0cae8ca5  MOV RDI,RBX
0cae8ca8  LEA RDX,[RSP + 0x38]
0cae8cad  CALL 0x0cb14930
0cae8cb2  MOV byte ptr [RAX + 0x12],0x0
0cae8cb6  INC R13
0cae8cb9  CMP R13,0x100
0cae8cc0  JZ 0x0cae8fca
0cae8cc6  MOVZX R15D,word ptr [R14 + R13*0x2 + 0x120]
0cae8ccf  MOV RDI,qword ptr [R14 + 0x28]
0cae8cd3  MOV RAX,qword ptr [RDI]
0cae8cd6  CALL qword ptr [RAX + 0x2b0]
0cae8cdc  MOV RCX,qword ptr [RAX + 0x380]
0cae8ce3  MOV RAX,qword ptr [RAX + 0x388]
0cae8cea  MOV R8,RAX
0cae8ced  SUB R8,RCX
0cae8cf0  JZ 0x0cae8dd0
0cae8cf6  SAR R8,0x3
0cae8cfa  MOV RDX,RAX
0cae8cfd  MOV RDI,R8
0cae8d00  JMP 0x0cae8d29
0cae8d10  ADD RSI,0x8
0cae8d14  NOT RDI
0cae8d17  ADD RDI,R8
0cae8d1a  MOV RCX,RSI
0cae8d1d  MOV R8,RDI
0cae8d20  TEST RDI,RDI
0cae8d23  JZ 0x0cae8dd0
0cae8d29  SHR RDI,0x1
0cae8d2c  LEA RSI,[RCX + RDI*0x8]
0cae8d30  MOV R9,qword ptr [RCX + RDI*0x8]
0cae8d34  MOVZX R9D,word ptr [R9 + 0x168]
0cae8d3c  CMP R9W,R15W
0cae8d40  JC 0x0cae8d10
0cae8d42  JBE 0x0cae8d60
0cae8d44  MOV RDX,RSI
0cae8d47  MOV R8,RDI
0cae8d4a  TEST RDI,RDI
0cae8d4d  JNZ 0x0cae8d29
0cae8d4f  JMP 0x0cae8dd0
0cae8d60  CMP R8,0x1
0cae8d64  JNZ 0x0cae8f49
0cae8d6a  ADD RSI,0x8
0cae8d6e  MOV RDI,RDX
0cae8d71  SUB RDI,RSI
0cae8d74  JZ 0x0cae8dc0
0cae8d76  SAR RDI,0x3
0cae8d7a  MOV RDX,RSI
0cae8d7d  MOV RSI,RDI
0cae8d80  JMP 0x0cae8d98
0cae8d90  MOV RDI,RSI
0cae8d93  TEST RSI,RSI
0cae8d96  JZ 0x0cae8dc0
0cae8d98  SHR RSI,0x1
0cae8d9b  MOV R8,qword ptr [RDX + RSI*0x8]
0cae8d9f  CMP R15W,word ptr [R8 + 0x168]
0cae8da7  JC 0x0cae8d90
0cae8da9  LEA RDX,[RDX + RSI*0x8]
0cae8dad  ADD RDX,0x8
0cae8db1  NOT RSI
0cae8db4  ADD RSI,RDI
0cae8db7  JMP 0x0cae8d90
0cae8dc0  CMP RCX,RDX
0cae8dc3  JZ 0x0cae8dd0
0cae8dc5  CMP RCX,RAX
0cae8dc8  JZ 0x0cae8dd0
0cae8dca  MOV RAX,qword ptr [RCX]
0cae8dcd  JMP 0x0cae8dd2
0cae8dd0  XOR EAX,EAX
0cae8dd2  TEST RAX,RAX
0cae8dd5  CMOVZ RAX,R12
0cae8dd9  MOVSS XMM0,dword ptr [RAX + 0x2c]
0cae8dde  UCOMISS XMM0,dword ptr [0x011983fc]
0cae8de5  MOVSS XMM0,dword ptr [RAX + 0x8]
0cae8dea  ADDSS XMM0,dword ptr [0x01198c3c]
0cae8df2  JBE 0x0cae8cb6
0cae8df8  MOVSS XMM1,dword ptr [0x01198788]
0cae8e00  UCOMISS XMM1,XMM0
0cae8e03  JBE 0x0cae8cb6
0cae8e09  MOVZX ESI,word ptr [RAX + 0x168]
0cae8e10  MOV RCX,qword ptr [RSP + 0x18]
0cae8e15  TEST RCX,RCX
0cae8e18  JZ 0x0cae8ca0
0cae8e1e  MOVZX EDI,SI
0cae8e21  MOV RAX,RCX
0cae8e24  SHR RAX,0x1
0cae8e27  MOV RDX,0x5555555555555555
0cae8e31  AND RAX,RDX
0cae8e34  MOV RDX,RCX
0cae8e37  SUB RDX,RAX
0cae8e3a  MOV RAX,RDX
0cae8e3d  AND RAX,RBP
0cae8e40  SHR RDX,0x2
0cae8e44  AND RDX,RBP
0cae8e47  ADD RDX,RAX
0cae8e4a  MOV R9,RDX
0cae8e4d  SHR R9,0x4
0cae8e51  ADD R9,RDX
0cae8e54  MOV RAX,0xf0f0f0f0f0f0f0f
0cae8e5e  AND R9,RAX
0cae8e61  MOV RAX,0x101010101010101
0cae8e6b  IMUL R9,RAX
0cae8e6f  SHR R9,0x38
0cae8e73  CMP R9,0x1
0cae8e77  JA 0x0cae8e84
0cae8e79  LEA EAX,[RCX + -0x1]
0cae8e7c  MOV R8D,EDI
0cae8e7f  AND R8D,EAX
0cae8e82  JMP 0x0cae8e97
0cae8e84  MOV R8,RDI
0cae8e87  CMP RCX,RDI
0cae8e8a  JA 0x0cae8e97
0cae8e8c  MOV EAX,ESI
0cae8e8e  XOR EDX,EDX
0cae8e90  DIV CX
0cae8e93  MOVZX R8D,DX
0cae8e97  MOV RAX,qword ptr [RSP + 0x10]
0cae8e9c  MOV RAX,qword ptr [RAX + R8*0x8]
0cae8ea0  TEST RAX,RAX
0cae8ea3  JZ 0x0cae8ca0
0cae8ea9  MOV R15,qword ptr [RAX]
0cae8eac  TEST R15,R15
0cae8eaf  JZ 0x0cae8ca0
0cae8eb5  CMP R9D,0x2
0cae8eb9  JNC 0x0cae8ed7
0cae8ebb  DEC RCX
0cae8ebe  JMP 0x0cae8f33
0cae8ec0  CMP word ptr [R15 + 0x10],SI
0cae8ec5  JZ 0x0cae8f7d
0cae8ecb  MOV R15,qword ptr [R15]
0cae8ece  TEST R15,R15
0cae8ed1  JZ 0x0cae8ca0
0cae8ed7  MOV RAX,qword ptr [R15 + 0x8]
0cae8edb  CMP RAX,RDI
0cae8ede  JZ 0x0cae8ec0
0cae8ee0  CMP RAX,RCX
0cae8ee3  JC 0x0cae8ef9
0cae8ee5  MOV RDX,RAX
0cae8ee8  OR RDX,RCX
0cae8eeb  SHR RDX,0x20
0cae8eef  JZ 0x0cae8f03
0cae8ef1  XOR EDX,EDX
0cae8ef3  DIV RCX
0cae8ef6  MOV RAX,RDX
0cae8ef9  CMP RAX,R8
0cae8efc  JZ 0x0cae8ecb
0cae8efe  JMP 0x0cae8ca0
0cae8f03  XOR EDX,EDX
0cae8f05  DIV ECX
0cae8f07  MOV EAX,EDX
0cae8f09  CMP RAX,R8
0cae8f0c  JZ 0x0cae8ecb
0cae8f0e  JMP 0x0cae8ca0
0cae8f20  CMP word ptr [R15 + 0x10],SI
0cae8f25  JZ 0x0cae8f7d
0cae8f27  MOV R15,qword ptr [R15]
0cae8f2a  TEST R15,R15
0cae8f2d  JZ 0x0cae8ca0
0cae8f33  MOV RAX,qword ptr [R15 + 0x8]
0cae8f37  CMP RAX,RDI
0cae8f3a  JZ 0x0cae8f20
0cae8f3c  AND RAX,RCX
0cae8f3f  CMP RAX,R8
0cae8f42  JZ 0x0cae8f27
0cae8f44  JMP 0x0cae8ca0
0cae8f49  MOV R8,RDI
0cae8f4c  JMP 0x0cae8f5c
0cae8f50  MOV RDI,R8
0cae8f53  TEST R8,R8
0cae8f56  JZ 0x0cae8d6a
0cae8f5c  SHR R8,0x1
0cae8f5f  MOV R9,qword ptr [RCX + R8*0x8]
0cae8f63  CMP word ptr [R9 + 0x168],R15W
0cae8f6b  JNC 0x0cae8f50
0cae8f6d  LEA RCX,[RCX + R8*0x8]
0cae8f71  ADD RCX,0x8
0cae8f75  NOT R8
0cae8f78  ADD R8,RDI
0cae8f7b  JMP 0x0cae8f50
0cae8f7d  MOV word ptr [RSP + 0x38],SI
0cae8f82  MOV RDI,RBX
0cae8f85  LEA RDX,[RSP + 0x38]
0cae8f8a  CALL 0x0cb14930
0cae8f8f  MOVZX ECX,byte ptr [R15 + 0x12]
0cae8f94  MOV byte ptr [RAX + 0x12],CL
0cae8f97  JMP 0x0cae8cb6
0cae8f9c  MOV R14,qword ptr [RSP + 0x38]
0cae8fa1  LEA R15,[RSP + 0x48]
0cae8fa6  CMP R15,R14
0cae8fa9  SETZ AL
0cae8fac  TEST R14,R14
0cae8faf  SETZ CL
0cae8fb2  OR CL,AL
0cae8fb4  JNZ 0x0cae8fca
0cae8fb6  LEA RDI,[0xf5463b0]
0cae8fbd  MOV RAX,qword ptr [0x0f5463b0]
0cae8fc4  MOV RSI,R14
0cae8fc7  CALL qword ptr [RAX + 0x18]
0cae8fca  MOV RDI,qword ptr [RSP + 0x20]
0cae8fcf  TEST RDI,RDI
0cae8fd2  JZ 0x0cae8ff5
0cae8fd4  NOP word ptr CS:[RAX + RAX*0x1]
0cae8fe0  MOV RBX,qword ptr [RDI]
0cae8fe3  MOV ESI,0x18
0cae8fe8  CALL 0x0412a280
0cae8fed  MOV RDI,RBX
0cae8ff0  TEST RBX,RBX
0cae8ff3  JNZ 0x0cae8fe0
0cae8ff5  MOV RDI,qword ptr [RSP + 0x10]
0cae8ffa  MOV qword ptr [RSP + 0x10],0x0
0cae9003  TEST RDI,RDI
0cae9006  JZ 0x0cae9016
0cae9008  MOV RSI,qword ptr [RSP + 0x18]
0cae900d  SHL RSI,0x3
0cae9011  CALL 0x0412a280
0cae9016  ADD RSP,0x68
0cae901a  POP RBX
0cae901b  POP R12
0cae901d  POP R13
0cae901f  POP R14
0cae9021  POP R15
0cae9023  POP RBP
0cae9024  RET
0cae9025  MOV R9,R8
0cae9028  JMP 0x0cae903c
0cae9030  MOV R8,R9
0cae9033  TEST R9,R9
0cae9036  JZ 0x0cae8c2a
0cae903c  SHR R9,0x1
0cae903f  MOV R10,qword ptr [RDX + R9*0x8]
0cae9043  CMP word ptr [R10 + 0x168],AX
0cae904b  JNC 0x0cae9030
0cae904d  LEA RDX,[RDX + R9*0x8]
0cae9051  ADD RDX,0x8
0cae9055  NOT R9
0cae9058  ADD R9,R8
0cae905b  JMP 0x0cae9030
```

## `0c851640` — FixedBiomeSource slot 5

- Ghidra name: `FUN_0c851640`
- Body: `[[0c851640, 0c85164d]]`

### Pseudocode

```c

undefined8 FUN_0c851640(undefined8 param_1)

{
  FUN_0c851650();
  return param_1;
}


```

### Assembly

```asm
0c851640  PUSH RBX
0c851641  MOV RBX,RDI
0c851644  CALL 0x0c851650
0c851649  MOV RAX,RBX
0c85164c  POP RBX
0c85164d  RET
```

## `0c851650` — FixedBiomeSource slot 6

- Ghidra name: `FUN_0c851650`
- Body: `[[0c851650, 0c851753] [0c851760, 0c8517ab] [0c8517b0, 0c8517d6]]`

### Pseudocode

```c

int * FUN_0c851650(int *param_1,long param_2,int *param_3,uint param_4)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar8 = param_3[3] - *param_3;
  uVar10 = param_3[5] - param_3[2];
  uVar9 = param_3[4] - param_3[1];
  bVar2 = false;
  uVar14 = 0;
  uVar3 = uVar9 / param_4;
  param_1[1] = uVar3;
  iVar7 = (uVar8 / param_4) * uVar3;
  *param_1 = iVar7;
  iVar4 = (uVar10 / param_4) * iVar7;
  uStack_38 = 0;
  if (iVar4 == 0) {
    lVar12 = 0;
  }
  else {
    func_0x0c859e50(param_1 + 2,iVar4,&uStack_38);
    uVar8 = param_3[3] - *param_3;
    uVar9 = param_3[4] - param_3[1];
    uVar10 = param_3[5] - param_3[2];
    iVar7 = *param_1;
    uVar3 = param_1[1];
    lVar12 = *(long *)(param_1 + 2);
  }
  uVar8 = (int)uVar8 / (int)param_4 - 1;
  uVar9 = (int)uVar9 / (int)param_4 - 1;
  uVar10 = (int)uVar10 / (int)param_4 - 1;
  uVar5 = (int)uVar8 >> 0x1f & uVar8;
  uVar11 = (int)uVar9 >> 0x1f & uVar9;
  uVar13 = (int)uVar10 >> 0x1f & uVar10;
  if ((int)uVar8 < 1) {
    uVar8 = uVar14;
  }
  if ((int)uVar9 < 1) {
    uVar9 = uVar14;
  }
  if ((int)uVar10 < 1) {
    uVar10 = uVar14;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar14 = uVar13;
  uVar6 = uVar11;
  do {
    *(undefined8 *)(lVar12 + (ulong)(iVar7 * uVar14 + uVar3 * uVar5 + uVar6) * 8) = uVar1;
    if ((int)uVar14 < (int)uVar10) {
      uVar14 = uVar14 + 1;
    }
    else if ((int)uVar6 < (int)uVar9) {
      uVar14 = uVar13;
      uVar6 = uVar6 + 1;
    }
    else if ((int)uVar5 < (int)uVar8) {
      uVar5 = uVar5 + 1;
      uVar14 = uVar13;
      uVar6 = uVar11;
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2 || (uVar14 != uVar10 || (uVar6 != uVar9 || uVar5 != uVar8)));
  return param_1;
}


```

### Assembly

```asm
0c851650  PUSH RBP
0c851651  PUSH R15
0c851653  PUSH R14
0c851655  PUSH R13
0c851657  PUSH R12
0c851659  PUSH RBX
0c85165a  SUB RSP,0x18
0c85165e  MOV EBP,ECX
0c851660  MOV R15,RDX
0c851663  MOV RBX,RDI
0c851666  XORPS XMM0,XMM0
0c851669  MOVUPS xmmword ptr [RDI + 0x8],XMM0
0c85166d  MOV qword ptr [RDI + 0x18],0x0
0c851675  MOV EDI,dword ptr [RDX + 0xc]
0c851678  MOV R8D,dword ptr [RDX + 0x10]
0c85167c  SUB EDI,dword ptr [RDX]
0c85167e  MOV R9D,dword ptr [RDX + 0x14]
0c851682  SUB R9D,dword ptr [RDX + 0x8]
0c851686  SUB R8D,dword ptr [RDX + 0x4]
0c85168a  MOV R14,RSI
0c85168d  XOR R13D,R13D
0c851690  MOV EAX,R8D
0c851693  XOR EDX,EDX
0c851695  DIV ECX
0c851697  MOV ECX,EAX
0c851699  MOV dword ptr [RBX + 0x4],EAX
0c85169c  MOV EAX,EDI
0c85169e  XOR EDX,EDX
0c8516a0  DIV EBP
0c8516a2  MOV ESI,EAX
0c8516a4  IMUL ESI,ECX
0c8516a7  MOV dword ptr [RBX],ESI
0c8516a9  MOV EAX,R9D
0c8516ac  XOR EDX,EDX
0c8516ae  DIV EBP
0c8516b0  IMUL EAX,ESI
0c8516b3  MOV qword ptr [RSP + 0x10],0x0
0c8516bc  TEST EAX,EAX
0c8516be  MOV qword ptr [RSP + 0x8],RBX
0c8516c3  JZ 0x0c8516fa
0c8516c5  LEA R12,[RBX + 0x8]
0c8516c9  MOV ESI,EAX
0c8516cb  LEA RDX,[RSP + 0x10]
0c8516d0  MOV RDI,R12
0c8516d3  CALL 0x0c859e50
0c8516d8  MOV EDI,dword ptr [R15 + 0xc]
0c8516dc  MOV R8D,dword ptr [R15 + 0x10]
0c8516e0  MOV R9D,dword ptr [R15 + 0x14]
0c8516e4  SUB EDI,dword ptr [R15]
0c8516e7  SUB R8D,dword ptr [R15 + 0x4]
0c8516eb  SUB R9D,dword ptr [R15 + 0x8]
0c8516ef  MOV ESI,dword ptr [RBX]
0c8516f1  MOV ECX,dword ptr [RBX + 0x4]
0c8516f4  MOV R10,qword ptr [RBX + 0x8]
0c8516f8  JMP 0x0c8516fd
0c8516fa  XOR R10D,R10D
0c8516fd  MOV EAX,EDI
0c8516ff  CDQ
0c851700  IDIV EBP
0c851702  MOV EDI,EAX
0c851704  MOV EAX,R8D
0c851707  CDQ
0c851708  IDIV EBP
0c85170a  MOV R8D,EAX
0c85170d  MOV EAX,R9D
0c851710  CDQ
0c851711  IDIV EBP
0c851713  DEC EDI
0c851715  DEC R8D
0c851718  DEC EAX
0c85171a  MOV EDX,EDI
0c85171c  SAR EDX,0x1f
0c85171f  AND EDX,EDI
0c851721  MOV R9D,R8D
0c851724  SAR R9D,0x1f
0c851728  AND R9D,R8D
0c85172b  MOV R11D,EAX
0c85172e  SAR R11D,0x1f
0c851732  AND R11D,EAX
0c851735  TEST EDI,EDI
0c851737  CMOVLE EDI,R13D
0c85173b  TEST R8D,R8D
0c85173e  CMOVLE R8D,R13D
0c851742  TEST EAX,EAX
0c851744  CMOVLE EAX,R13D
0c851748  MOV R14,qword ptr [R14 + 0x8]
0c85174c  MOV R15D,R11D
0c85174f  MOV EBP,R9D
0c851752  JMP 0x0c851787
0c851760  INC R15D
0c851763  MOV EBX,EDX
0c851765  XOR EBX,EDI
0c851767  MOV R12D,EBP
0c85176a  XOR R12D,R8D
0c85176d  OR R12D,EBX
0c851770  MOV EBX,R15D
0c851773  XOR EBX,EAX
0c851775  OR EBX,R12D
0c851778  SETNZ BL
0c85177b  TEST R13B,R13B
0c85177e  SETZ R12B
0c851782  OR R12B,BL
0c851785  JZ 0x0c8517c3
0c851787  MOV R12D,ECX
0c85178a  IMUL R12D,EDX
0c85178e  ADD R12D,EBP
0c851791  MOV EBX,ESI
0c851793  IMUL EBX,R15D
0c851797  ADD EBX,R12D
0c85179a  MOV qword ptr [R10 + RBX*0x8],R14
0c85179e  CMP R15D,EAX
0c8517a1  JL 0x0c851760
0c8517a3  CMP EBP,R8D
0c8517a6  JGE 0x0c8517b0
0c8517a8  INC EBP
0c8517aa  JMP 0x0c8517b9
0c8517b0  CMP EDX,EDI
0c8517b2  JGE 0x0c8517be
0c8517b4  INC EDX
0c8517b6  MOV EBP,R9D
0c8517b9  MOV R15D,R11D
0c8517bc  JMP 0x0c851763
0c8517be  MOV R13B,0x1
0c8517c1  JMP 0x0c851763
0c8517c3  MOV RAX,qword ptr [RSP + 0x8]
0c8517c8  ADD RSP,0x18
0c8517cc  POP RBX
0c8517cd  POP R12
0c8517cf  POP R13
0c8517d1  POP R14
0c8517d3  POP R15
0c8517d5  POP RBP
0c8517d6  RET
```

## `0c8515b0` — FixedBiomeSource slot 7

- Ghidra name: `FUN_0c8515b0`
- Body: `[[0c8515b0, 0c851625]]`

### Pseudocode

```c

undefined8 FUN_0c8515b0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  
  lVar2 = in_stack_00000008 * 2;
  uVar4 = (undefined7)((ulong)lVar2 >> 8);
  if (in_stack_00000008 != 0) {
    lVar5 = 0;
    do {
      if (*(short *)(in_stack_00000010 + lVar5) == *(short *)(*(long *)(param_1 + 8) + 0x168)) {
        if (lVar5 == 0) goto LAB_0c851616;
        goto LAB_0c8515f4;
      }
      lVar5 = lVar5 + 2;
    } while (lVar2 != lVar5);
    lVar5 = in_stack_00000008 * 2;
    if (in_stack_00000008 * 2 != 0) {
LAB_0c8515f4:
      if (((in_stack_00000010 != 0) && (0 < lVar5)) && (lVar5 <= lVar2)) {
        return CONCAT71(uVar4,lVar5 != lVar2);
      }
      func_0x04890760();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
LAB_0c851616:
  return CONCAT71(uVar4,lVar2 != 0);
}


```

### Assembly

```asm
0c8515b0  PUSH RAX
0c8515b1  MOV RCX,qword ptr [RSP + 0x10]
0c8515b6  LEA RAX,[RCX + RCX*0x1]
0c8515ba  TEST RCX,RCX
0c8515bd  JZ 0x0c851616
0c8515bf  MOV RDX,qword ptr [RSP + 0x18]
0c8515c4  LEA RCX,[RDX + RCX*0x2]
0c8515c8  MOV RSI,qword ptr [RDI + 0x8]
0c8515cc  MOVZX EDI,word ptr [RSI + 0x168]
0c8515d3  XOR ESI,ESI
0c8515d5  NOP dword ptr CS:[RAX + RAX*0x1]
0c8515e0  CMP word ptr [RDX + RSI*0x1],DI
0c8515e4  JZ 0x0c85160b
0c8515e6  ADD RSI,0x2
0c8515ea  CMP RAX,RSI
0c8515ed  JNZ 0x0c8515e0
0c8515ef  SUB RCX,RDX
0c8515f2  JZ 0x0c851616
0c8515f4  TEST RDX,RDX
0c8515f7  JZ 0x0c851620
0c8515f9  TEST RCX,RCX
0c8515fc  JLE 0x0c851620
0c8515fe  CMP RAX,RCX
0c851601  JL 0x0c851620
0c851603  CMP RCX,RAX
0c851606  SETNZ AL
0c851609  POP RCX
0c85160a  RET
0c85160b  ADD RSI,RDX
0c85160e  MOV RCX,RSI
0c851611  SUB RCX,RDX
0c851614  JNZ 0x0c8515f4
0c851616  XOR ECX,ECX
0c851618  CMP RCX,RAX
0c85161b  SETNZ AL
0c85161e  POP RCX
0c85161f  RET
0c851620  CALL 0x04890760
0c851625  INT3
```

## `0c851800` — FixedBiomeSource slot 8

- Ghidra name: `FUN_0c851800`
- Body: `[[0c851800, 0c85180e]]`

### Pseudocode

```c

undefined8 FUN_0c851800(long param_1,short param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),
                  *(short *)(*(long *)(param_1 + 8) + 0x168) == param_2);
}


```

### Assembly

```asm
0c851800  MOV RAX,qword ptr [RDI + 0x8]
0c851804  CMP word ptr [RAX + 0x168],SI
0c85180b  SETZ AL
0c85180e  RET
```

## `0c851810` — FixedBiomeSource slot 9

- Ghidra name: `FUN_0c851810`
- Body: `[[0c851810, 0c85181e]]`

### Pseudocode

```c

undefined8 FUN_0c851810(long param_1,long param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),
                  *(long *)(*(long *)(param_1 + 8) + 400) == param_2);
}


```

### Assembly

```asm
0c851810  MOV RAX,qword ptr [RDI + 0x8]
0c851814  CMP qword ptr [RAX + 0x190],RSI
0c85181b  SETZ AL
0c85181e  RET
```

## `0c851820` — FixedBiomeSource slot 10

- Ghidra name: `FUN_0c851820`
- Body: `[[0c851820, 0c851825]]`

### Pseudocode

```c

undefined8 FUN_0c851820(void)

{
  return 2;
}


```

### Assembly

```asm
0c851820  MOV EAX,0x2
0c851825  RET
```

## `0c851630` — FixedBiomeSource slot 11

- Ghidra name: `FUN_0c851630`
- Body: `[[0c851630, 0c851634]]`

### Pseudocode

```c

undefined8 FUN_0c851630(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


```

### Assembly

```asm
0c851630  MOV RAX,qword ptr [RDI + 0x8]
0c851634  RET
```

## `052a2800` — VanillaOverworldBiomeSource<Pos2d> slot 0

- Ghidra name: `FUN_052a2800`
- Body: `[[052a2800, 052a289a]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x052a2851: Changing call to branch */

void FUN_052a2800(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &UNK_0ef9dfe0;
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    param_1[7] = lVar2;
    func_0x0412a280(lVar2,param_1[8] - lVar2);
  }
  plVar3 = (long *)param_1[4];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto SUB_0412c2d0;
    }
  }
  *param_1 = &UNK_0ef9e080;
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
SUB_0412c2d0:
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}


```

### Assembly

```asm
052a2800  PUSH R14
052a2802  PUSH RBX
052a2803  PUSH RAX
052a2804  MOV RBX,RDI
052a2807  LEA RAX,[0xef9dfe0]
052a280e  MOV qword ptr [RDI],RAX
052a2811  MOV RDI,qword ptr [RDI + 0x30]
052a2815  TEST RDI,RDI
052a2818  JZ 0x052a282a
052a281a  MOV qword ptr [RBX + 0x38],RDI
052a281e  MOV RSI,qword ptr [RBX + 0x40]
052a2822  SUB RSI,RDI
052a2825  CALL 0x0412a280
052a282a  MOV R14,qword ptr [RBX + 0x20]
052a282e  TEST R14,R14
052a2831  JZ 0x052a2856
052a2833  MOV RAX,-0x1
052a283a  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a2840  TEST RAX,RAX
052a2843  JNZ 0x052a2856
052a2845  MOV RAX,qword ptr [R14]
052a2848  MOV RDI,R14
052a284b  CALL qword ptr [RAX + 0x10]
052a284e  MOV RDI,R14
052a2851  CALL 0x0412c2d0
052a2856  LEA RAX,[0xef9e080]
052a285d  MOV qword ptr [RBX],RAX
052a2860  MOV RBX,qword ptr [RBX + 0x10]
052a2864  TEST RBX,RBX
052a2867  JZ 0x052a287b
052a2869  MOV RAX,-0x1
052a2870  XADD.LOCK qword ptr [RBX + 0x8],RAX
052a2876  TEST RAX,RAX
052a2879  JZ 0x052a2883
052a287b  ADD RSP,0x8
052a287f  POP RBX
052a2880  POP R14
052a2882  RET
052a2883  MOV RAX,qword ptr [RBX]
052a2886  MOV RDI,RBX
052a2889  CALL qword ptr [RAX + 0x10]
052a288c  MOV RDI,RBX
052a288f  ADD RSP,0x8
052a2893  POP RBX
052a2894  POP R14
052a2896  JMP 0x0412c2d0
```

## `052a28a0` — VanillaOverworldBiomeSource<Pos2d> slot 1

- Ghidra name: `FUN_052a28a0`
- Body: `[[052a28a0, 052a293f]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x052a28c5: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052a28a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 auStack_20 [2];
  
  puVar6 = &UNK_0ef9dfe0;
  *param_1 = &UNK_0ef9dfe0;
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 == (undefined8 *)0x0) {
    plVar4 = (long *)param_1[4];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        auStack_20[0] = 0x52a28ee;
        (**(code **)(*plVar4 + 0x10))(plVar4);
        auStack_20[0] = 0x52a28f6;
        func_0x0412c2d0(plVar4);
      }
    }
    puVar6 = &UNK_0ef9e080;
    *param_1 = &UNK_0ef9e080;
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      puVar6 = (undefined *)*plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (puVar6 == (undefined *)0x0) {
        auStack_20[0] = 0x52a2924;
        (**(code **)(*plVar4 + 0x10))(plVar4);
        auStack_20[0] = 0x52a292c;
        puVar6 = (undefined *)func_0x0412c2d0(plVar4);
      }
    }
  }
  else {
    param_1[7] = puVar3;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x52a28ca;
    param_1 = puVar3;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar6;
  if (param_1 != (undefined8 *)0x0) {
    pcVar5 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar5)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
052a28a0  PUSH R14
052a28a2  PUSH RBX
052a28a3  PUSH RAX
052a28a4  MOV RBX,RDI
052a28a7  LEA RAX,[0xef9dfe0]
052a28ae  MOV qword ptr [RDI],RAX
052a28b1  MOV RDI,qword ptr [RDI + 0x30]
052a28b5  TEST RDI,RDI
052a28b8  JZ 0x052a28ca
052a28ba  MOV qword ptr [RBX + 0x38],RDI
052a28be  MOV RSI,qword ptr [RBX + 0x40]
052a28c2  SUB RSI,RDI
052a28c5  CALL 0x0412a280
052a28ca  MOV R14,qword ptr [RBX + 0x20]
052a28ce  TEST R14,R14
052a28d1  JZ 0x052a28f6
052a28d3  MOV RAX,-0x1
052a28da  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a28e0  TEST RAX,RAX
052a28e3  JNZ 0x052a28f6
052a28e5  MOV RAX,qword ptr [R14]
052a28e8  MOV RDI,R14
052a28eb  CALL qword ptr [RAX + 0x10]
052a28ee  MOV RDI,R14
052a28f1  CALL 0x0412c2d0
052a28f6  LEA RAX,[0xef9e080]
052a28fd  MOV qword ptr [RBX],RAX
052a2900  MOV R14,qword ptr [RBX + 0x10]
052a2904  TEST R14,R14
052a2907  JZ 0x052a292c
052a2909  MOV RAX,-0x1
052a2910  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a2916  TEST RAX,RAX
052a2919  JNZ 0x052a292c
052a291b  MOV RAX,qword ptr [R14]
052a291e  MOV RDI,R14
052a2921  CALL qword ptr [RAX + 0x10]
052a2924  MOV RDI,R14
052a2927  CALL 0x0412c2d0
052a292c  MOV ESI,0x48
052a2931  MOV RDI,RBX
052a2934  ADD RSP,0x8
052a2938  POP RBX
052a2939  POP R14
052a293b  JMP 0x0412a280
```

## `052a2940` — VanillaOverworldBiomeSource<Pos2d> slot 3

- Ghidra name: `FUN_052a2940`
- Body: `[[052a2940, 052a29df]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_052a2940(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  long lStack_20;
  long lStack_18;
  
  uStack_40 = *(undefined4 *)(param_3 + 0x38);
  uStack_3c = *(undefined4 *)(param_3 + 0x40);
  uStack_38 = 0x1000000010;
  (**(code **)(**(long **)(param_2 + 8) + 0x18))
            (auStack_30,*(long **)(param_2 + 8),0,&uStack_40,&uStack_38);
  lVar2 = lStack_18;
  lVar1 = lStack_20;
  lStack_20 = 0;
  lStack_18 = 0;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    lVar2 = lStack_20;
    lStack_20 = 0;
    if (lVar2 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
  }
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}


```

### Assembly

```asm
052a2940  PUSH R14
052a2942  PUSH RBX
052a2943  SUB RSP,0x38
052a2947  MOV RBX,RDI
052a294a  MOV EAX,dword ptr [RDX + 0x38]
052a294d  MOV ECX,dword ptr [RDX + 0x40]
052a2950  MOV dword ptr [RSP + 0x8],EAX
052a2954  MOV dword ptr [RSP + 0xc],ECX
052a2958  MOV RAX,0x1000000010
052a2962  MOV qword ptr [RSP + 0x10],RAX
052a2967  MOV RSI,qword ptr [RSI + 0x8]
052a296b  MOV RAX,qword ptr [RSI]
052a296e  LEA RDI,[RSP + 0x18]
052a2973  LEA RCX,[RSP + 0x8]
052a2978  LEA R8,[RSP + 0x10]
052a297d  XOR EDX,EDX
052a297f  CALL qword ptr [RAX + 0x18]
052a2982  MOV R14,qword ptr [RSP + 0x28]
052a2987  MOV RSI,qword ptr [RSP + 0x30]
052a298c  XORPS XMM0,XMM0
052a298f  MOVUPS xmmword ptr [RSP + 0x28],XMM0
052a2994  TEST RSI,RSI
052a2997  JZ 0x052a29ce
052a2999  LEA RDI,[0xf5463b0]
052a29a0  MOV RAX,qword ptr [0x0f5463b0]
052a29a7  CALL qword ptr [RAX + 0x18]
052a29aa  MOV RSI,qword ptr [RSP + 0x28]
052a29af  MOV qword ptr [RSP + 0x28],0x0
052a29b8  TEST RSI,RSI
052a29bb  JZ 0x052a29ce
052a29bd  LEA RDI,[0xf5463b0]
052a29c4  MOV RAX,qword ptr [0x0f5463b0]
052a29cb  CALL qword ptr [RAX + 0x18]
052a29ce  MOV qword ptr [RBX],R14
052a29d1  MOV byte ptr [RBX + 0x8],0x1
052a29d5  MOV RAX,RBX
052a29d8  ADD RSP,0x38
052a29dc  POP RBX
052a29dd  POP R14
052a29df  RET
```

## `052a29f0` — VanillaOverworldBiomeSource<Pos2d> slot 4

- Ghidra name: `FUN_052a29f0`
- Body: `[[052a29f0, 052a2d11]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052a29f0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined4 *)(param_2 + 0x38);
  uStack_34 = *(undefined4 *)(param_2 + 0x40);
  uStack_30 = 0x1000000010;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&uStack_58,*(long **)(param_1 + 8),0,&uStack_38,&uStack_30);
  lVar4 = lStack_40;
  lVar1 = lStack_48;
  lStack_48 = 0;
  lStack_40 = 0;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    lVar4 = lStack_48;
    lStack_48 = 0;
    if (lVar4 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
  }
  puVar2 = (undefined8 *)(lVar1 + 0x78);
  lVar4 = 0;
  do {
    uStack_58 = 0;
    uVar3 = (undefined1)lVar4;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-0xf],&uStack_58,1);
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-0xe],&uStack_58,1);
    uStack_58 = 2;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-0xd],&uStack_58,1);
    uStack_58 = 3;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-0xc],&uStack_58,1);
    uStack_58 = 4;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-0xb],&uStack_58,1);
    uStack_58 = 5;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-10],&uStack_58,1);
    uStack_58 = 6;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-9],&uStack_58,1);
    uStack_58 = 7;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-8],&uStack_58,1);
    uStack_58 = 8;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-7],&uStack_58,1);
    uStack_58 = 9;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-6],&uStack_58,1);
    uStack_58 = 10;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-5],&uStack_58,1);
    uStack_58 = 0xb;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-4],&uStack_58,1);
    uStack_58 = 0xc;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-3],&uStack_58,1);
    uStack_58 = 0xd;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-2],&uStack_58,1);
    uStack_58 = 0xe;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,puVar2[-1],&uStack_58,1);
    uStack_58 = 0xf;
    uStack_56 = 0;
    uStack_57 = uVar3;
    func_0x0caf8430(param_2,*puVar2,&uStack_58,1);
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 0x10;
  } while (lVar4 != 0x10);
  (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  return;
}


```

### Assembly

```asm
052a29f0  PUSH R15
052a29f2  PUSH R14
052a29f4  PUSH R13
052a29f6  PUSH R12
052a29f8  PUSH RBX
052a29f9  SUB RSP,0x30
052a29fd  MOV RBX,RSI
052a2a00  MOV EAX,dword ptr [RSI + 0x38]
052a2a03  MOV ECX,dword ptr [RSI + 0x40]
052a2a06  MOV dword ptr [RSP + 0x20],EAX
052a2a0a  MOV dword ptr [RSP + 0x24],ECX
052a2a0e  MOV RAX,0x1000000010
052a2a18  MOV qword ptr [RSP + 0x28],RAX
052a2a1d  MOV RSI,qword ptr [RDI + 0x8]
052a2a21  MOV RAX,qword ptr [RSI]
052a2a24  MOV RDI,RSP
052a2a27  LEA RCX,[RSP + 0x20]
052a2a2c  LEA R8,[RSP + 0x28]
052a2a31  XOR EDX,EDX
052a2a33  CALL qword ptr [RAX + 0x18]
052a2a36  MOV R14,qword ptr [RSP + 0x10]
052a2a3b  MOV RSI,qword ptr [RSP + 0x18]
052a2a40  XORPS XMM0,XMM0
052a2a43  MOVUPS xmmword ptr [RSP + 0x10],XMM0
052a2a48  TEST RSI,RSI
052a2a4b  JZ 0x052a2a82
052a2a4d  LEA RDI,[0xf5463b0]
052a2a54  MOV RAX,qword ptr [0x0f5463b0]
052a2a5b  CALL qword ptr [RAX + 0x18]
052a2a5e  MOV RSI,qword ptr [RSP + 0x10]
052a2a63  MOV qword ptr [RSP + 0x10],0x0
052a2a6c  TEST RSI,RSI
052a2a6f  JZ 0x052a2a82
052a2a71  LEA RDI,[0xf5463b0]
052a2a78  MOV RAX,qword ptr [0x0f5463b0]
052a2a7f  CALL qword ptr [RAX + 0x18]
052a2a82  LEA R12,[R14 + 0x78]
052a2a86  XOR R13D,R13D
052a2a89  MOV R15,RSP
052a2a8c  NOP dword ptr [RAX]
052a2a90  MOV byte ptr [RSP],0x0
052a2a94  MOV byte ptr [RSP + 0x1],R13B
052a2a99  MOV word ptr [RSP + 0x2],0x0
052a2aa0  MOV RSI,qword ptr [R12 + -0x78]
052a2aa5  MOV RDI,RBX
052a2aa8  MOV RDX,R15
052a2aab  MOV ECX,0x1
052a2ab0  CALL 0x0caf8430
052a2ab5  MOV byte ptr [RSP],0x1
052a2ab9  MOV byte ptr [RSP + 0x1],R13B
052a2abe  MOV word ptr [RSP + 0x2],0x0
052a2ac5  MOV RSI,qword ptr [R12 + -0x70]
052a2aca  MOV RDI,RBX
052a2acd  MOV RDX,R15
052a2ad0  MOV ECX,0x1
052a2ad5  CALL 0x0caf8430
052a2ada  MOV byte ptr [RSP],0x2
052a2ade  MOV byte ptr [RSP + 0x1],R13B
052a2ae3  MOV word ptr [RSP + 0x2],0x0
052a2aea  MOV RSI,qword ptr [R12 + -0x68]
052a2aef  MOV RDI,RBX
052a2af2  MOV RDX,R15
052a2af5  MOV ECX,0x1
052a2afa  CALL 0x0caf8430
052a2aff  MOV byte ptr [RSP],0x3
052a2b03  MOV byte ptr [RSP + 0x1],R13B
052a2b08  MOV word ptr [RSP + 0x2],0x0
052a2b0f  MOV RSI,qword ptr [R12 + -0x60]
052a2b14  MOV RDI,RBX
052a2b17  MOV RDX,R15
052a2b1a  MOV ECX,0x1
052a2b1f  CALL 0x0caf8430
052a2b24  MOV byte ptr [RSP],0x4
052a2b28  MOV byte ptr [RSP + 0x1],R13B
052a2b2d  MOV word ptr [RSP + 0x2],0x0
052a2b34  MOV RSI,qword ptr [R12 + -0x58]
052a2b39  MOV RDI,RBX
052a2b3c  MOV RDX,R15
052a2b3f  MOV ECX,0x1
052a2b44  CALL 0x0caf8430
052a2b49  MOV byte ptr [RSP],0x5
052a2b4d  MOV byte ptr [RSP + 0x1],R13B
052a2b52  MOV word ptr [RSP + 0x2],0x0
052a2b59  MOV RSI,qword ptr [R12 + -0x50]
052a2b5e  MOV RDI,RBX
052a2b61  MOV RDX,R15
052a2b64  MOV ECX,0x1
052a2b69  CALL 0x0caf8430
052a2b6e  MOV byte ptr [RSP],0x6
052a2b72  MOV byte ptr [RSP + 0x1],R13B
052a2b77  MOV word ptr [RSP + 0x2],0x0
052a2b7e  MOV RSI,qword ptr [R12 + -0x48]
052a2b83  MOV RDI,RBX
052a2b86  MOV RDX,R15
052a2b89  MOV ECX,0x1
052a2b8e  CALL 0x0caf8430
052a2b93  MOV byte ptr [RSP],0x7
052a2b97  MOV byte ptr [RSP + 0x1],R13B
052a2b9c  MOV word ptr [RSP + 0x2],0x0
052a2ba3  MOV RSI,qword ptr [R12 + -0x40]
052a2ba8  MOV RDI,RBX
052a2bab  MOV RDX,R15
052a2bae  MOV ECX,0x1
052a2bb3  CALL 0x0caf8430
052a2bb8  MOV byte ptr [RSP],0x8
052a2bbc  MOV byte ptr [RSP + 0x1],R13B
052a2bc1  MOV word ptr [RSP + 0x2],0x0
052a2bc8  MOV RSI,qword ptr [R12 + -0x38]
052a2bcd  MOV RDI,RBX
052a2bd0  MOV RDX,R15
052a2bd3  MOV ECX,0x1
052a2bd8  CALL 0x0caf8430
052a2bdd  MOV byte ptr [RSP],0x9
052a2be1  MOV byte ptr [RSP + 0x1],R13B
052a2be6  MOV word ptr [RSP + 0x2],0x0
052a2bed  MOV RSI,qword ptr [R12 + -0x30]
052a2bf2  MOV RDI,RBX
052a2bf5  MOV RDX,R15
052a2bf8  MOV ECX,0x1
052a2bfd  CALL 0x0caf8430
052a2c02  MOV byte ptr [RSP],0xa
052a2c06  MOV byte ptr [RSP + 0x1],R13B
052a2c0b  MOV word ptr [RSP + 0x2],0x0
052a2c12  MOV RSI,qword ptr [R12 + -0x28]
052a2c17  MOV RDI,RBX
052a2c1a  MOV RDX,R15
052a2c1d  MOV ECX,0x1
052a2c22  CALL 0x0caf8430
052a2c27  MOV byte ptr [RSP],0xb
052a2c2b  MOV byte ptr [RSP + 0x1],R13B
052a2c30  MOV word ptr [RSP + 0x2],0x0
052a2c37  MOV RSI,qword ptr [R12 + -0x20]
052a2c3c  MOV RDI,RBX
052a2c3f  MOV RDX,R15
052a2c42  MOV ECX,0x1
052a2c47  CALL 0x0caf8430
052a2c4c  MOV byte ptr [RSP],0xc
052a2c50  MOV byte ptr [RSP + 0x1],R13B
052a2c55  MOV word ptr [RSP + 0x2],0x0
052a2c5c  MOV RSI,qword ptr [R12 + -0x18]
052a2c61  MOV RDI,RBX
052a2c64  MOV RDX,R15
052a2c67  MOV ECX,0x1
052a2c6c  CALL 0x0caf8430
052a2c71  MOV byte ptr [RSP],0xd
052a2c75  MOV byte ptr [RSP + 0x1],R13B
052a2c7a  MOV word ptr [RSP + 0x2],0x0
052a2c81  MOV RSI,qword ptr [R12 + -0x10]
052a2c86  MOV RDI,RBX
052a2c89  MOV RDX,R15
052a2c8c  MOV ECX,0x1
052a2c91  CALL 0x0caf8430
052a2c96  MOV byte ptr [RSP],0xe
052a2c9a  MOV byte ptr [RSP + 0x1],R13B
052a2c9f  MOV word ptr [RSP + 0x2],0x0
052a2ca6  MOV RSI,qword ptr [R12 + -0x8]
052a2cab  MOV RDI,RBX
052a2cae  MOV RDX,R15
052a2cb1  MOV ECX,0x1
052a2cb6  CALL 0x0caf8430
052a2cbb  MOV byte ptr [RSP],0xf
052a2cbf  MOV byte ptr [RSP + 0x1],R13B
052a2cc4  MOV word ptr [RSP + 0x2],0x0
052a2ccb  MOV RSI,qword ptr [R12]
052a2ccf  MOV RDI,RBX
052a2cd2  MOV RDX,R15
052a2cd5  MOV ECX,0x1
052a2cda  CALL 0x0caf8430
052a2cdf  INC R13
052a2ce2  SUB R12,-0x80
052a2ce6  CMP R13,0x10
052a2cea  JNZ 0x052a2a90
052a2cf0  LEA RDI,[0xf5463b0]
052a2cf7  MOV RAX,qword ptr [0x0f5463b0]
052a2cfe  MOV RSI,R14
052a2d01  CALL qword ptr [RAX + 0x18]
052a2d04  ADD RSP,0x30
052a2d08  POP RBX
052a2d09  POP R12
052a2d0b  POP R13
052a2d0d  POP R14
052a2d0f  POP R15
052a2d11  RET
```

## `052a2d60` — VanillaOverworldBiomeSource<Pos2d> slot 5

- Ghidra name: `FUN_052a2d60`
- Body: `[[052a2d60, 052a2ebd]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_052a2d60(int *param_1,long param_2,int *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar10;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar5 = param_3[3];
  iVar1 = *param_3;
  iVar2 = param_3[5];
  iVar3 = param_3[2];
  uVar4 = (uint)(param_3[4] - param_3[1]) / param_4;
  param_1[1] = uVar4;
  iVar5 = ((uint)(iVar5 - iVar1) / param_4) * uVar4;
  *param_1 = iVar5;
  iVar5 = ((uint)(iVar2 - iVar3) / param_4) * iVar5;
  uStack_58 = 0;
  if (iVar5 != 0) {
    func_0x0c859e50(param_1 + 2,iVar5,&uStack_58);
  }
  if ((param_4 & 3) == 0) {
    fVar6 = (float)*param_3 * _DAT_014e5ce0;
    fVar8 = (float)param_3[1] * _UNK_014e5ce4;
    fVar9 = (float)param_3[2] * _UNK_014e5ce8;
    fVar7 = (float)func_0x0eee4390((float)param_3[3] * _UNK_014e5cec);
    fVar9 = (float)func_0x0eee4390(fVar9);
    uStack_38 = func_0x0eee4390(fVar6);
    fVar6 = (float)func_0x0eee4390(fVar8);
    iStack_50 = (int)fVar9;
    iStack_4c = (int)fVar7;
    uStack_58 = CONCAT44((int)fVar6,(int)(float)uStack_38);
    fVar6 = (float)(int)*(undefined8 *)(param_3 + 4) * _DAT_014ea8c0;
    fVar9 = (float)(int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * _UNK_014ea8c4;
    fVar8 = _UNK_014ea8c8 * 0.0;
    fVar7 = (float)func_0x0eee4390();
    uVar10 = extraout_XMM0_Dc;
    fVar9 = (float)func_0x0eee4390(fVar9);
    uStack_48 = CONCAT44((int)fVar9,(int)fVar7);
    func_0x052a3240(*(undefined8 *)(param_2 + 0x18),&uStack_58,param_4 >> 2,param_1,param_5,param_6,
                    fVar6,fVar8,fVar7,uVar10);
  }
  else {
    func_0x052a3240(*(undefined8 *)(param_2 + 8),param_3,param_4,param_1);
  }
  return param_1;
}


```

### Assembly

```asm
052a2d60  PUSH RBP
052a2d61  PUSH R15
052a2d63  PUSH R14
052a2d65  PUSH R12
052a2d67  PUSH RBX
052a2d68  SUB RSP,0x50
052a2d6c  MOV EBP,ECX
052a2d6e  MOV R12,RDX
052a2d71  MOV R15,RSI
052a2d74  MOV RBX,RDI
052a2d77  LEA R14,[RDI + 0x8]
052a2d7b  XORPS XMM0,XMM0
052a2d7e  MOVUPS xmmword ptr [RDI + 0x8],XMM0
052a2d82  MOV qword ptr [RDI + 0x18],0x0
052a2d8a  MOV ECX,dword ptr [RDX + 0xc]
052a2d8d  SUB ECX,dword ptr [RDX]
052a2d8f  MOV EAX,dword ptr [RDX + 0x10]
052a2d92  MOV ESI,dword ptr [RDX + 0x14]
052a2d95  SUB ESI,dword ptr [RDX + 0x8]
052a2d98  SUB EAX,dword ptr [RDX + 0x4]
052a2d9b  XOR EDX,EDX
052a2d9d  DIV EBP
052a2d9f  MOV EDI,EAX
052a2da1  MOV dword ptr [RBX + 0x4],EAX
052a2da4  MOV EAX,ECX
052a2da6  XOR EDX,EDX
052a2da8  DIV EBP
052a2daa  MOV ECX,EAX
052a2dac  IMUL ECX,EDI
052a2daf  MOV dword ptr [RBX],ECX
052a2db1  MOV EAX,ESI
052a2db3  XOR EDX,EDX
052a2db5  DIV EBP
052a2db7  IMUL EAX,ECX
052a2dba  MOV qword ptr [RSP + 0x20],0x0
052a2dc3  TEST EAX,EAX
052a2dc5  JZ 0x052a2dd6
052a2dc7  MOV ESI,EAX
052a2dc9  LEA RDX,[RSP + 0x20]
052a2dce  MOV RDI,R14
052a2dd1  CALL 0x0c859e50
052a2dd6  TEST BPL,0x3
052a2dda  JZ 0x052a2df2
052a2ddc  MOV RDI,qword ptr [R15 + 0x8]
052a2de0  MOV RSI,R12
052a2de3  MOV EDX,EBP
052a2de5  MOV RCX,RBX
052a2de8  CALL 0x052a3240
052a2ded  JMP 0x052a2eae
052a2df2  MOVUPS XMM0,xmmword ptr [R12]
052a2df7  CVTDQ2PS XMM0,XMM0
052a2dfa  MULPS XMM0,xmmword ptr [0x014e5ce0]
052a2e01  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052a2e06  SHUFPS XMM0,XMM0,0xff
052a2e0a  CALL 0x0eee4390
052a2e0f  MOVAPS xmmword ptr [RSP],XMM0
052a2e13  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
052a2e18  MOVHLPS XMM0,XMM0
052a2e1b  CALL 0x0eee4390
052a2e20  UNPCKLPS XMM0,xmmword ptr [RSP]
052a2e24  MOVAPS xmmword ptr [RSP],XMM0
052a2e28  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
052a2e2d  CALL 0x0eee4390
052a2e32  MOVAPS xmmword ptr [RSP + 0x40],XMM0
052a2e37  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
052a2e3c  SHUFPS XMM0,XMM0,0x55
052a2e40  CALL 0x0eee4390
052a2e45  MOVAPS XMM1,xmmword ptr [RSP + 0x40]
052a2e4a  UNPCKLPS XMM1,XMM0
052a2e4d  UNPCKLPD XMM1,xmmword ptr [RSP]
052a2e52  CVTTPS2DQ XMM0,XMM1
052a2e56  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052a2e5b  MOVSD XMM0,qword ptr [R12 + 0x10]
052a2e62  CVTDQ2PS XMM0,XMM0
052a2e65  MULPS XMM0,xmmword ptr [0x014ea8c0]
052a2e6c  MOVAPS xmmword ptr [RSP],XMM0
052a2e70  CALL 0x0eee4390
052a2e75  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052a2e7a  MOVAPS XMM0,xmmword ptr [RSP]
052a2e7e  SHUFPS XMM0,XMM0,0x55
052a2e82  CALL 0x0eee4390
052a2e87  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
052a2e8c  UNPCKLPS XMM1,XMM0
052a2e8f  CVTTPS2DQ XMM0,XMM1
052a2e93  MOVLPS qword ptr [RSP + 0x30],XMM0
052a2e98  MOV RDI,qword ptr [R15 + 0x18]
052a2e9c  SHR EBP,0x2
052a2e9f  LEA RSI,[RSP + 0x20]
052a2ea4  MOV EDX,EBP
052a2ea6  MOV RCX,RBX
052a2ea9  CALL 0x052a3240
052a2eae  MOV RAX,RBX
052a2eb1  ADD RSP,0x50
052a2eb5  POP RBX
052a2eb6  POP R12
052a2eb8  POP R14
052a2eba  POP R15
052a2ebc  POP RBP
052a2ebd  RET
```

## `052a2ef0` — VanillaOverworldBiomeSource<Pos2d> slot 6

- Ghidra name: `FUN_052a2ef0`
- Body: `[[052a2ef0, 052a2efe]]`

### Pseudocode

```c

undefined8 FUN_052a2ef0(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x28))();
  return param_1;
}


```

### Assembly

```asm
052a2ef0  PUSH RBX
052a2ef1  MOV RBX,RDI
052a2ef4  MOV RAX,qword ptr [RSI]
052a2ef7  CALL qword ptr [RAX + 0x28]
052a2efa  MOV RAX,RBX
052a2efd  POP RBX
052a2efe  RET
```

## `052a2f00` — VanillaOverworldBiomeSource<Pos2d> slot 7

- Ghidra name: `FUN_052a2f00`
- Body: `[[052a2f00, 052a3009] [052a3010, 052a3082]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_052a2f00(long param_1,int param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [16];
  long lStack_28;
  long lStack_20;
  
  iStack_40 = param_2 - param_5 >> 2;
  iStack_3c = param_4 - param_5 >> 2;
  iVar7 = ((param_5 + param_2 >> 2) - iStack_40) + 1;
  iVar11 = ((param_5 + param_4 >> 2) - iStack_3c) + 1;
  iStack_48 = iVar7;
  iStack_44 = iVar11;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (auStack_38,*(long **)(param_1 + 0x18),0,&iStack_40,&iStack_48);
  lVar2 = lStack_20;
  lVar4 = lStack_28;
  lStack_28 = 0;
  lStack_20 = 0;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))();
    lVar2 = lStack_28;
    lStack_28 = 0;
    if (lVar2 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))();
    }
  }
  uVar8 = iVar7 * iVar11;
  if ((int)uVar8 < 1) {
    uVar6 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
  }
  else if (param_7 == 0) {
    uVar6 = 0;
  }
  else {
    if (param_8 == 0) {
LAB_052a3065:
      uVar5 = func_0x04890760();
      uVar5 = func_0x04882e20(uVar5);
      uVar5 = func_0x04882e20(uVar5);
      func_0x04882e20(uVar5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    lVar2 = param_7 * 2;
    uVar9 = 0;
    uVar6 = (ulong)uVar8;
    do {
      lVar10 = 0;
      do {
        lVar3 = lVar10;
        if (*(short *)(param_8 + lVar10) == *(short *)(*(long *)(lVar4 + uVar9 * 8) + 0x168)) break;
        lVar10 = lVar10 + 2;
        lVar3 = param_7 * 2;
      } while (lVar2 != lVar10);
      if ((lVar3 != 0) && ((lVar3 < 1 || (lVar2 < lVar3)))) goto LAB_052a3065;
      uVar6 = CONCAT71((int7)(uVar6 >> 8),lVar3 != lVar2);
    } while ((lVar3 != lVar2) && (uVar9 = uVar9 + 1, uVar9 != uVar8));
  }
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar4);
  }
  return uVar6;
}


```

### Assembly

```asm
052a2f00  PUSH RBP
052a2f01  PUSH R14
052a2f03  PUSH RBX
052a2f04  SUB RSP,0x30
052a2f08  MOV R14D,R8D
052a2f0b  LEA EBP,[R14 + RSI*0x1]
052a2f0f  SUB ESI,R8D
052a2f12  SAR ESI,0x2
052a2f15  MOV EAX,ECX
052a2f17  SUB EAX,R8D
052a2f1a  SAR EAX,0x2
052a2f1d  SAR EBP,0x2
052a2f20  ADD R14D,ECX
052a2f23  SAR R14D,0x2
052a2f27  SUB EBP,ESI
052a2f29  INC EBP
052a2f2b  SUB R14D,EAX
052a2f2e  INC R14D
052a2f31  MOV dword ptr [RSP + 0x8],ESI
052a2f35  MOV dword ptr [RSP + 0xc],EAX
052a2f39  MOV dword ptr [RSP],EBP
052a2f3c  MOV dword ptr [RSP + 0x4],R14D
052a2f41  MOV RSI,qword ptr [RDI + 0x18]
052a2f45  MOV RAX,qword ptr [RSI]
052a2f48  LEA RDI,[RSP + 0x10]
052a2f4d  LEA RCX,[RSP + 0x8]
052a2f52  MOV R8,RSP
052a2f55  XOR EDX,EDX
052a2f57  CALL qword ptr [RAX + 0x18]
052a2f5a  MOV RBX,qword ptr [RSP + 0x20]
052a2f5f  MOV RSI,qword ptr [RSP + 0x28]
052a2f64  XORPS XMM0,XMM0
052a2f67  MOVUPS xmmword ptr [RSP + 0x20],XMM0
052a2f6c  TEST RSI,RSI
052a2f6f  JZ 0x052a2fa6
052a2f71  LEA RDI,[0xf5463b0]
052a2f78  MOV RAX,qword ptr [0x0f5463b0]
052a2f7f  CALL qword ptr [RAX + 0x18]
052a2f82  MOV RSI,qword ptr [RSP + 0x20]
052a2f87  MOV qword ptr [RSP + 0x20],0x0
052a2f90  TEST RSI,RSI
052a2f93  JZ 0x052a2fa6
052a2f95  LEA RDI,[0xf5463b0]
052a2f9c  MOV RAX,qword ptr [0x0f5463b0]
052a2fa3  CALL qword ptr [RAX + 0x18]
052a2fa6  IMUL EBP,R14D
052a2faa  TEST EBP,EBP
052a2fac  JLE 0x052a3035
052a2fb2  LEA RCX,[RSP + 0x50]
052a2fb7  MOV RAX,qword ptr [RCX]
052a2fba  TEST RAX,RAX
052a2fbd  JZ 0x052a305c
052a2fc3  MOV RCX,qword ptr [RCX + 0x8]
052a2fc7  TEST RCX,RCX
052a2fca  JZ 0x052a3065
052a2fd0  LEA RDX,[RCX + RAX*0x2]
052a2fd4  ADD RAX,RAX
052a2fd7  MOV ESI,EBP
052a2fd9  XOR EDI,EDI
052a2fdb  NOP dword ptr [RAX + RAX*0x1]
052a2fe0  MOV R8,qword ptr [RBX + RDI*0x8]
052a2fe4  MOVZX R9D,word ptr [R8 + 0x168]
052a2fec  XOR R8D,R8D
052a2fef  NOP
052a2ff0  CMP word ptr [RCX + R8*0x1],R9W
052a2ff5  JZ 0x052a3010
052a2ff7  ADD R8,0x2
052a2ffb  CMP RAX,R8
052a2ffe  JNZ 0x052a2ff0
052a3000  MOV R8,RDX
052a3003  SUB R8,RCX
052a3006  JNZ 0x052a3018
052a3008  JMP 0x052a3022
052a3010  ADD R8,RCX
052a3013  SUB R8,RCX
052a3016  JZ 0x052a3022
052a3018  TEST R8,R8
052a301b  JLE 0x052a3065
052a301d  CMP RAX,R8
052a3020  JL 0x052a3065
052a3022  CMP R8,RAX
052a3025  SETNZ BPL
052a3029  JZ 0x052a3038
052a302b  INC RDI
052a302e  CMP RDI,RSI
052a3031  JNZ 0x052a2fe0
052a3033  JMP 0x052a3038
052a3035  MOV BPL,0x1
052a3038  TEST RBX,RBX
052a303b  JZ 0x052a3051
052a303d  LEA RDI,[0xf5463b0]
052a3044  MOV RAX,qword ptr [0x0f5463b0]
052a304b  MOV RSI,RBX
052a304e  CALL qword ptr [RAX + 0x18]
052a3051  MOV EAX,EBP
052a3053  ADD RSP,0x30
052a3057  POP RBX
052a3058  POP R14
052a305a  POP RBP
052a305b  RET
052a305c  XOR EBP,EBP
052a305e  TEST RBX,RBX
052a3061  JNZ 0x052a303d
052a3063  JMP 0x052a3051
052a3065  CALL 0x04890760
052a306a  MOV RDI,RAX
052a306d  CALL 0x04882e20
052a3072  MOV RDI,RAX
052a3075  CALL 0x04882e20
052a307a  MOV RDI,RAX
052a307d  CALL 0x04882e20
052a3082  INT3
```

## `052a3090` — VanillaOverworldBiomeSource<Pos2d> slot 8

- Ghidra name: `FUN_052a3090`
- Body: `[[052a3090, 052a30cf]]`

### Pseudocode

```c

undefined8 FUN_052a3090(long param_1,short param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == *(long **)(param_1 + 0x38)) {
    return 0;
  }
  do {
    plVar3 = plVar1 + 1;
    bVar4 = *(short *)(*plVar1 + 0x168) == param_2;
    uVar2 = CONCAT71((int7)((ulong)*plVar1 >> 8),bVar4);
    if (bVar4) {
      return uVar2;
    }
    plVar1 = plVar3;
  } while (plVar3 != *(long **)(param_1 + 0x38));
  return uVar2;
}


```

### Assembly

```asm
052a3090  MOV RDX,qword ptr [RDI + 0x30]
052a3094  MOV RCX,qword ptr [RDI + 0x38]
052a3098  CMP RDX,RCX
052a309b  JZ 0x052a30cd
052a309d  ADD RDX,0x8
052a30a1  NOP dword ptr CS:[RAX + RAX*0x1]
052a30b0  MOV RAX,qword ptr [RDX + -0x8]
052a30b4  CMP word ptr [RAX + 0x168],SI
052a30bb  SETZ AL
052a30be  JZ 0x052a30cc
052a30c0  LEA RDI,[RDX + 0x8]
052a30c4  CMP RDX,RCX
052a30c7  MOV RDX,RDI
052a30ca  JNZ 0x052a30b0
052a30cc  RET
052a30cd  XOR EAX,EAX
052a30cf  RET
```

## `052a30d0` — VanillaOverworldBiomeSource<Pos2d> slot 9

- Ghidra name: `FUN_052a30d0`
- Body: `[[052a30d0, 052a310f]]`

### Pseudocode

```c

undefined8 FUN_052a30d0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == *(long **)(param_1 + 0x38)) {
    return 0;
  }
  do {
    plVar3 = plVar1 + 1;
    bVar4 = *(long *)(*plVar1 + 400) == param_2;
    uVar2 = CONCAT71((int7)((ulong)*plVar1 >> 8),bVar4);
    if (bVar4) {
      return uVar2;
    }
    plVar1 = plVar3;
  } while (plVar3 != *(long **)(param_1 + 0x38));
  return uVar2;
}


```

### Assembly

```asm
052a30d0  MOV RDX,qword ptr [RDI + 0x30]
052a30d4  MOV RCX,qword ptr [RDI + 0x38]
052a30d8  CMP RDX,RCX
052a30db  JZ 0x052a310d
052a30dd  ADD RDX,0x8
052a30e1  NOP dword ptr CS:[RAX + RAX*0x1]
052a30f0  MOV RAX,qword ptr [RDX + -0x8]
052a30f4  CMP qword ptr [RAX + 0x190],RSI
052a30fb  SETZ AL
052a30fe  JZ 0x052a310c
052a3100  LEA RDI,[RDX + 0x8]
052a3104  CMP RDX,RCX
052a3107  MOV RDX,RDI
052a310a  JNZ 0x052a30f0
052a310c  RET
052a310d  XOR EAX,EAX
052a310f  RET
```

## `052a3110` — VanillaOverworldBiomeSource<Pos2d> slot 10

- Ghidra name: `FUN_052a3110`
- Body: `[[052a3110, 052a3115]]`

### Pseudocode

```c

undefined8 FUN_052a3110(void)

{
  return 3;
}


```

### Assembly

```asm
052a3110  MOV EAX,0x3
052a3115  RET
```

## `052a3120` — VanillaOverworldBiomeSource<Pos2d> slot 11

- Ghidra name: `FUN_052a3120`
- Body: `[[052a3120, 052a31cb]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052a3120(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 *puStack_20;
  long lStack_18;
  
  uStack_40 = *param_2;
  uStack_3c = param_2[2];
  uStack_38 = 0x100000001;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (auStack_30,*(long **)(param_1 + 8),0,&uStack_40,&uStack_38);
  lVar4 = lStack_18;
  puVar2 = puStack_20;
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  if (lVar4 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    puVar3 = puStack_20;
    puStack_20 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
    }
  }
  uVar1 = *puVar2;
  (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar2);
  return uVar1;
}


```

### Assembly

```asm
052a3120  PUSH R14
052a3122  PUSH RBX
052a3123  SUB RSP,0x38
052a3127  MOV EAX,dword ptr [RSI]
052a3129  MOV ECX,dword ptr [RSI + 0x8]
052a312c  MOV dword ptr [RSP + 0x8],EAX
052a3130  MOV dword ptr [RSP + 0xc],ECX
052a3134  MOV RAX,0x100000001
052a313e  MOV qword ptr [RSP + 0x10],RAX
052a3143  MOV RSI,qword ptr [RDI + 0x8]
052a3147  MOV RAX,qword ptr [RSI]
052a314a  LEA RDI,[RSP + 0x18]
052a314f  LEA RCX,[RSP + 0x8]
052a3154  LEA R8,[RSP + 0x10]
052a3159  XOR EDX,EDX
052a315b  CALL qword ptr [RAX + 0x18]
052a315e  MOV RBX,qword ptr [RSP + 0x28]
052a3163  MOV RSI,qword ptr [RSP + 0x30]
052a3168  XORPS XMM0,XMM0
052a316b  MOVUPS xmmword ptr [RSP + 0x28],XMM0
052a3170  TEST RSI,RSI
052a3173  JZ 0x052a31aa
052a3175  LEA RDI,[0xf5463b0]
052a317c  MOV RAX,qword ptr [0x0f5463b0]
052a3183  CALL qword ptr [RAX + 0x18]
052a3186  MOV RSI,qword ptr [RSP + 0x28]
052a318b  MOV qword ptr [RSP + 0x28],0x0
052a3194  TEST RSI,RSI
052a3197  JZ 0x052a31aa
052a3199  LEA RDI,[0xf5463b0]
052a31a0  MOV RAX,qword ptr [0x0f5463b0]
052a31a7  CALL qword ptr [RAX + 0x18]
052a31aa  MOV R14,qword ptr [RBX]
052a31ad  LEA RDI,[0xf5463b0]
052a31b4  MOV RAX,qword ptr [0x0f5463b0]
052a31bb  MOV RSI,RBX
052a31be  CALL qword ptr [RAX + 0x18]
052a31c1  MOV RAX,R14
052a31c4  ADD RSP,0x38
052a31c8  POP RBX
052a31c9  POP R14
052a31cb  RET
```

## `052a31f0` — NodeGraphBiomeSource<Pos2d> slot 0

- Ghidra name: `FUN_052a31f0`
- Body: `[[052a31f0, 052a3229]]`

### Pseudocode

```c

void FUN_052a31f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &UNK_0ef9e080;
  plVar3 = (long *)param_1[2];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}


```

### Assembly

```asm
052a31f0  PUSH RBX
052a31f1  LEA RAX,[0xef9e080]
052a31f8  MOV qword ptr [RDI],RAX
052a31fb  MOV RBX,qword ptr [RDI + 0x10]
052a31ff  TEST RBX,RBX
052a3202  JZ 0x052a3216
052a3204  MOV RAX,-0x1
052a320b  XADD.LOCK qword ptr [RBX + 0x8],RAX
052a3211  TEST RAX,RAX
052a3214  JZ 0x052a3218
052a3216  POP RBX
052a3217  RET
052a3218  MOV RAX,qword ptr [RBX]
052a321b  MOV RDI,RBX
052a321e  CALL qword ptr [RAX + 0x10]
052a3221  MOV RDI,RBX
052a3224  POP RBX
052a3225  JMP 0x0412c2d0
```

## `052a3230` — NodeGraphBiomeSource<Pos2d> slot 1

- Ghidra name: `FUN_052a3230`
- Body: `[[052a3230, 052a3231]]`

### Pseudocode

```c

void FUN_052a3230(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


```

### Assembly

```asm
052a3230  UD2
```

## `052bed20` — CachedBiomeSource<BiomeSource3d> slot 0

- Ghidra name: `FUN_052bed20`
- Body: `[[052bed20, 052bee42]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x052beda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052bedd9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052bee1a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x052bedad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_052bed20(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_20;
  
  *param_1 = &UNK_0ef9fc68;
  plVar4 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar4 == (long *)0x0) {
    puVar3 = &UNK_0ef52f68;
    *param_1 = &UNK_0ef52f68;
    if ((*(char *)(param_1 + 0x19) == '\x01') && (param_1[0x13] != 0)) {
      uStack_20 = 0x52bee09;
      puVar3 = (undefined *)func_0x04a67380(param_1 + 0x13);
      plVar4 = (long *)param_1[0x13];
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x52bee1f;
    }
    else {
      plVar4 = (long *)param_1[2];
      if (plVar4 == (long *)0x0) {
        return puVar3;
      }
      param_1[3] = plVar4;
    }
  }
  else {
    puVar3 = (undefined *)plVar4[7];
    if ((puVar3 != (undefined *)plVar4[5]) || ((int)plVar4[6] != 0)) {
      uStack_20 = 0x52bed86;
      puVar3 = (undefined *)
               func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
      if ((char)puVar3 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if ((long *)plVar4[2] == (long *)0x0) {
      lVar1 = *plVar4;
      *plVar4 = 0;
      if (lVar1 != 0) {
        uStack_20 = 0x52bedd1;
        puVar3 = (undefined *)func_0x0412a280(lVar1,plVar4[1] << 3);
      }
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x52bedde;
    }
    else {
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x52bedad;
      plVar4 = (long *)plVar4[2];
    }
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar3;
  if (plVar4 != (long *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,plVar4);
  }
  return *(undefined **)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
052bed20  PUSH R15
052bed22  PUSH R14
052bed24  PUSH RBX
052bed25  MOV RBX,RDI
052bed28  LEA RAX,[0xef9fc68]
052bed2f  MOV qword ptr [RDI],RAX
052bed32  MOV R14,qword ptr [RDI + 0xe8]
052bed39  MOV qword ptr [RDI + 0xe8],0x0
052bed44  TEST R14,R14
052bed47  JZ 0x052bedde
052bed4d  MOV RAX,qword ptr [R14 + 0x38]
052bed51  CMP RAX,qword ptr [R14 + 0x28]
052bed55  JNZ 0x052bed5e
052bed57  CMP dword ptr [R14 + 0x30],0x0
052bed5c  JZ 0x052bed95
052bed5e  LEA RDI,[0x14756d5]
052bed65  LEA RSI,[0x1198d5e]
052bed6c  LEA RCX,[0x126e3df]
052bed73  LEA R8,[0x13a8ed3]
052bed7a  MOV EDX,0x25
052bed7f  XOR EAX,EAX
052bed81  CALL 0x0eeddcf0
052bed86  TEST AL,AL
052bed88  JZ 0x052bed95
052bed8a  MOV dword ptr [0x00000000],0xdeadc0de
052bed95  MOV RDI,qword ptr [R14 + 0x10]
052bed99  TEST RDI,RDI
052bed9c  JZ 0x052bedb5
052bed9e  NOP
052beda0  MOV R15,qword ptr [RDI]
052beda3  MOV ESI,0x28
052beda8  CALL 0x0412a280
052bedad  MOV RDI,R15
052bedb0  TEST R15,R15
052bedb3  JNZ 0x052beda0
052bedb5  MOV RDI,qword ptr [R14]
052bedb8  MOV qword ptr [R14],0x0
052bedbf  TEST RDI,RDI
052bedc2  JZ 0x052bedd1
052bedc4  MOV RSI,qword ptr [R14 + 0x8]
052bedc8  SHL RSI,0x3
052bedcc  CALL 0x0412a280
052bedd1  MOV ESI,0x40
052bedd6  MOV RDI,R14
052bedd9  CALL 0x0412a280
052bedde  LEA RAX,[0xef52f68]
052bede5  MOV qword ptr [RBX],RAX
052bede8  CMP byte ptr [RBX + 0xc8],0x1
052bedef  JNZ 0x052bee1f
052bedf1  MOV RSI,qword ptr [RBX + 0x98]
052bedf8  TEST RSI,RSI
052bedfb  JZ 0x052bee1f
052bedfd  LEA RDI,[RBX + 0x98]
052bee04  CALL 0x04a67380
052bee09  MOV RDI,qword ptr [RBX + 0x98]
052bee10  MOV RSI,qword ptr [RBX + 0xa8]
052bee17  SUB RSI,RDI
052bee1a  CALL 0x0412a280
052bee1f  MOV RDI,qword ptr [RBX + 0x10]
052bee23  TEST RDI,RDI
052bee26  JZ 0x052bee3d
052bee28  MOV qword ptr [RBX + 0x18],RDI
052bee2c  MOV RSI,qword ptr [RBX + 0x20]
052bee30  SUB RSI,RDI
052bee33  POP RBX
052bee34  POP R14
052bee36  POP R15
052bee38  JMP 0x0412a280
052bee3d  POP RBX
052bee3e  POP R14
052bee40  POP R15
052bee42  RET
```

## `052bee50` — CachedBiomeSource<BiomeSource3d> slot 1

- Ghidra name: `FUN_052bee50`
- Body: `[[052bee50, 052bee66]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052bee50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_052bed20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


```

### Assembly

```asm
052bee50  PUSH RBX
052bee51  MOV RBX,RDI
052bee54  CALL 0x052bed20
052bee59  MOV ESI,0xf0
052bee5e  MOV RDI,RBX
052bee61  POP RBX
052bee62  JMP 0x0412a280
```

## `052bee70` — CachedBiomeSource<BiomeSource3d> slot 11

- Ghidra name: `FUN_052bee70`
- Body: `[[052bee70, 052beea6] [052beeb0, 052bf042] [052bf050, 052bf13a]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052bee70(long param_1,int *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  lVar6 = *(long *)(param_1 + 0xe8);
  lVar5 = func_0x0eee2fc0();
  lVar1 = *(long *)(lVar6 + 0x28);
  LOCK();
  lVar8 = *(long *)(lVar6 + 0x38);
  bVar12 = lVar1 == lVar8;
  if (bVar12) {
    *(long *)(lVar6 + 0x38) = lVar5;
    lVar8 = lVar1;
  }
  UNLOCK();
  if (!bVar12) {
    iVar9 = 3000;
    do {
      while( true ) {
        if ((lVar8 == lVar5) && (iVar4 = *(int *)(lVar6 + 0x30) + 1, iVar4 != -1)) {
          *(int *)(lVar6 + 0x30) = iVar4;
          goto LAB_052beef7;
        }
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        lVar1 = *(long *)(lVar6 + 0x28);
        LOCK();
        lVar8 = *(long *)(lVar6 + 0x38);
        bVar12 = lVar1 == lVar8;
        if (bVar12) {
          *(long *)(lVar6 + 0x38) = lVar5;
          lVar8 = lVar1;
        }
        UNLOCK();
        if (bVar12) goto LAB_052beeee;
      }
      func_0x0eee35d0();
      iVar9 = 0;
      lVar1 = *(long *)(lVar6 + 0x28);
      LOCK();
      lVar8 = *(long *)(lVar6 + 0x38);
      bVar12 = lVar1 == lVar8;
      if (bVar12) {
        *(long *)(lVar6 + 0x38) = lVar5;
        lVar8 = lVar1;
      }
      UNLOCK();
    } while (!bVar12);
  }
LAB_052beeee:
  *(undefined4 *)(lVar6 + 0x30) = 1;
LAB_052beef7:
  iStack_34 = *param_2 >> 2;
  iStack_2c = param_2[2] >> 2;
  iStack_30 = param_2[1];
  puVar11 = *(undefined8 **)(param_1 + 0xe8);
  lVar8 = puVar11[1];
  lVar6 = func_0x052bce40(*puVar11,lVar8,&iStack_34);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    lVar8 = puVar11[7];
    goto joined_r0x052bf0c0;
  }
  if (4000 < (ulong)puVar11[3]) {
    plVar10 = (long *)puVar11[2];
    if ((long *)puVar11[2] != (long *)0x0) {
      do {
        plVar2 = (long *)*plVar10;
        func_0x0412a280(plVar10,0x28);
        plVar10 = plVar2;
      } while (plVar2 != (long *)0x0);
      lVar8 = puVar11[1];
    }
    puVar11[2] = 0;
    if (lVar8 != 0) {
      func_0x0eee2dd0(*puVar11,0,lVar8 << 3);
    }
    puVar11[3] = 0;
    puVar11 = *(undefined8 **)(param_1 + 0xe8);
  }
  if (puVar11[7] == lVar5) {
    iVar9 = *(int *)(puVar11 + 6);
    if (iVar9 == 1) {
      *(undefined4 *)(puVar11 + 6) = 0;
      puVar11[7] = puVar11[5];
    }
    else {
      if (iVar9 == 0) goto LAB_052befbd;
      *(int *)(puVar11 + 6) = iVar9 + -1;
    }
  }
  else {
LAB_052befbd:
    cVar3 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar3 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar7 = func_0x04a3b2a0(param_1 + 8,param_2);
  lVar6 = *(long *)(param_1 + 0xe8);
  lVar1 = *(long *)(lVar6 + 0x28);
  LOCK();
  lVar8 = *(long *)(lVar6 + 0x38);
  bVar12 = lVar1 == lVar8;
  if (bVar12) {
    *(long *)(lVar6 + 0x38) = lVar5;
    lVar8 = lVar1;
  }
  UNLOCK();
  if (!bVar12) {
    iVar9 = 3000;
    do {
      while( true ) {
        if ((lVar8 == lVar5) && (iVar4 = *(int *)(lVar6 + 0x30) + 1, iVar4 != -1)) {
          *(int *)(lVar6 + 0x30) = iVar4;
          goto LAB_052bf097;
        }
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        lVar1 = *(long *)(lVar6 + 0x28);
        LOCK();
        lVar8 = *(long *)(lVar6 + 0x38);
        bVar12 = lVar1 == lVar8;
        if (bVar12) {
          *(long *)(lVar6 + 0x38) = lVar5;
          lVar8 = lVar1;
        }
        UNLOCK();
        if (bVar12) goto LAB_052bf08e;
      }
      func_0x0eee35d0();
      iVar9 = 0;
      lVar1 = *(long *)(lVar6 + 0x28);
      LOCK();
      lVar8 = *(long *)(lVar6 + 0x38);
      bVar12 = lVar1 == lVar8;
      if (bVar12) {
        *(long *)(lVar6 + 0x38) = lVar5;
        lVar8 = lVar1;
      }
      UNLOCK();
    } while (!bVar12);
  }
LAB_052bf08e:
  *(undefined4 *)(lVar6 + 0x30) = 1;
LAB_052bf097:
  lVar8 = func_0x052bcfe0(*(undefined8 *)(param_1 + 0xe8),&iStack_34,&iStack_34,uVar7);
  puVar11 = *(undefined8 **)(param_1 + 0xe8);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  lVar8 = puVar11[7];
joined_r0x052bf0c0:
  if (lVar8 == lVar5) {
    iVar9 = *(int *)(puVar11 + 6);
    if (iVar9 == 1) {
      *(undefined4 *)(puVar11 + 6) = 0;
      puVar11[7] = puVar11[5];
      return uVar7;
    }
    if (iVar9 != 0) {
      *(int *)(puVar11 + 6) = iVar9 + -1;
      return uVar7;
    }
  }
  cVar3 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar3 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return uVar7;
}


```

### Assembly

```asm
052bee70  PUSH R15
052bee72  PUSH R14
052bee74  PUSH R13
052bee76  PUSH R12
052bee78  PUSH RBX
052bee79  SUB RSP,0x10
052bee7d  MOV R15,RSI
052bee80  MOV R14,RDI
052bee83  MOV R12,qword ptr [RDI + 0xe8]
052bee8a  CALL 0x0eee2fc0
052bee8f  MOV RBX,RAX
052bee92  MOV RAX,qword ptr [R12 + 0x28]
052bee97  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052bee9e  JZ 0x052beeee
052beea0  MOV ECX,0xbb8
052beea5  JMP 0x052beec5
052beeb0  CALL 0x0eee35d0
052beeb5  XOR ECX,ECX
052beeb7  MOV RAX,qword ptr [R12 + 0x28]
052beebc  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052beec3  JZ 0x052beeee
052beec5  CMP RAX,RBX
052beec8  JNZ 0x052beeda
052beeca  MOV EAX,dword ptr [R12 + 0x30]
052beecf  INC EAX
052beed1  CMP EAX,-0x1
052beed4  JNZ 0x052beff6
052beeda  TEST ECX,ECX
052beedc  JZ 0x052beeb0
052beede  DEC ECX
052beee0  MOV RAX,qword ptr [R12 + 0x28]
052beee5  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052beeec  JNZ 0x052beec5
052beeee  MOV dword ptr [R12 + 0x30],0x1
052beef7  MOV EAX,dword ptr [R15]
052beefa  MOV ECX,dword ptr [R15 + 0x8]
052beefe  SAR EAX,0x2
052bef01  SAR ECX,0x2
052bef04  MOV EDX,dword ptr [R15 + 0x4]
052bef08  MOV dword ptr [RSP + 0x4],EAX
052bef0c  MOV dword ptr [RSP + 0x8],EDX
052bef10  MOV dword ptr [RSP + 0xc],ECX
052bef14  MOV R13,qword ptr [R14 + 0xe8]
052bef1b  MOV RDI,qword ptr [R13]
052bef1f  MOV R12,qword ptr [R13 + 0x8]
052bef23  LEA RDX,[RSP + 0x4]
052bef28  MOV RSI,R12
052bef2b  CALL 0x052bce40
052bef30  TEST RAX,RAX
052bef33  JZ 0x052bef4b
052bef35  MOV R14,qword ptr [RAX + 0x20]
052bef39  MOV RAX,qword ptr [R13 + 0x38]
052bef3d  CMP RAX,RBX
052bef40  JZ 0x052bf0c2
052bef46  JMP 0x052bf0cf
052bef4b  CMP qword ptr [R13 + 0x18],0xfa1
052bef53  JC 0x052befa7
052bef55  MOV RDI,qword ptr [R13 + 0x10]
052bef59  TEST RDI,RDI
052bef5c  JZ 0x052bef79
052bef5e  NOP
052bef60  MOV R12,qword ptr [RDI]
052bef63  MOV ESI,0x28
052bef68  CALL 0x0412a280
052bef6d  MOV RDI,R12
052bef70  TEST R12,R12
052bef73  JNZ 0x052bef60
052bef75  MOV R12,qword ptr [R13 + 0x8]
052bef79  MOV qword ptr [R13 + 0x10],0x0
052bef81  TEST R12,R12
052bef84  JZ 0x052bef98
052bef86  MOV RDI,qword ptr [R13]
052bef8a  SHL R12,0x3
052bef8e  XOR ESI,ESI
052bef90  MOV RDX,R12
052bef93  CALL 0x0eee2dd0
052bef98  MOV qword ptr [R13 + 0x18],0x0
052befa0  MOV R13,qword ptr [R14 + 0xe8]
052befa7  MOV RAX,qword ptr [R13 + 0x38]
052befab  CMP RAX,RBX
052befae  JNZ 0x052befbd
052befb0  MOV EAX,dword ptr [R13 + 0x30]
052befb4  CMP EAX,0x1
052befb7  JZ 0x052bf000
052befb9  TEST EAX,EAX
052befbb  JNZ 0x052bf012
052befbd  LEA RDI,[0x1239425]
052befc4  LEA RSI,[0x1198d5e]
052befcb  LEA RCX,[0x126e3df]
052befd2  LEA R8,[0x121f006]
052befd9  MOV EDX,0x6d
052befde  XOR EAX,EAX
052befe0  CALL 0x0eeddcf0
052befe5  TEST AL,AL
052befe7  JZ 0x052bf018
052befe9  MOV dword ptr [0x00000000],0xdeadc0de
052beff4  JMP 0x052bf018
052beff6  MOV dword ptr [R12 + 0x30],EAX
052beffb  JMP 0x052beef7
052bf000  MOV dword ptr [R13 + 0x30],0x0
052bf008  MOV RAX,qword ptr [R13 + 0x28]
052bf00c  MOV qword ptr [R13 + 0x38],RAX
052bf010  JMP 0x052bf018
052bf012  DEC EAX
052bf014  MOV dword ptr [R13 + 0x30],EAX
052bf018  LEA RDI,[R14 + 0x8]
052bf01c  MOV RSI,R15
052bf01f  CALL 0x04a3b2a0
052bf024  MOV R15,RAX
052bf027  MOV R12,qword ptr [R14 + 0xe8]
052bf02e  MOV RAX,qword ptr [R12 + 0x28]
052bf033  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052bf03a  JZ 0x052bf08e
052bf03c  MOV ECX,0xbb8
052bf041  JMP 0x052bf065
052bf050  CALL 0x0eee35d0
052bf055  XOR ECX,ECX
052bf057  MOV RAX,qword ptr [R12 + 0x28]
052bf05c  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052bf063  JZ 0x052bf08e
052bf065  CMP RAX,RBX
052bf068  JNZ 0x052bf07a
052bf06a  MOV EAX,dword ptr [R12 + 0x30]
052bf06f  INC EAX
052bf071  CMP EAX,-0x1
052bf074  JNZ 0x052bf131
052bf07a  TEST ECX,ECX
052bf07c  JZ 0x052bf050
052bf07e  DEC ECX
052bf080  MOV RAX,qword ptr [R12 + 0x28]
052bf085  CMPXCHG.LOCK qword ptr [R12 + 0x38],RBX
052bf08c  JNZ 0x052bf065
052bf08e  MOV dword ptr [R12 + 0x30],0x1
052bf097  MOV RDI,qword ptr [R14 + 0xe8]
052bf09e  LEA RDX,[RSP + 0x4]
052bf0a3  MOV RSI,RDX
052bf0a6  MOV RCX,R15
052bf0a9  CALL 0x052bcfe0
052bf0ae  MOV R13,qword ptr [R14 + 0xe8]
052bf0b5  MOV R14,qword ptr [RAX + 0x20]
052bf0b9  MOV RAX,qword ptr [R13 + 0x38]
052bf0bd  CMP RAX,RBX
052bf0c0  JNZ 0x052bf0cf
052bf0c2  MOV EAX,dword ptr [R13 + 0x30]
052bf0c6  CMP EAX,0x1
052bf0c9  JZ 0x052bf108
052bf0cb  TEST EAX,EAX
052bf0cd  JNZ 0x052bf11a
052bf0cf  LEA RDI,[0x1239425]
052bf0d6  LEA RSI,[0x1198d5e]
052bf0dd  LEA RCX,[0x126e3df]
052bf0e4  LEA R8,[0x121f006]
052bf0eb  MOV EDX,0x6d
052bf0f0  XOR EAX,EAX
052bf0f2  CALL 0x0eeddcf0
052bf0f7  TEST AL,AL
052bf0f9  JZ 0x052bf120
052bf0fb  MOV dword ptr [0x00000000],0xdeadc0de
052bf106  JMP 0x052bf120
052bf108  MOV dword ptr [R13 + 0x30],0x0
052bf110  MOV RAX,qword ptr [R13 + 0x28]
052bf114  MOV qword ptr [R13 + 0x38],RAX
052bf118  JMP 0x052bf120
052bf11a  DEC EAX
052bf11c  MOV dword ptr [R13 + 0x30],EAX
052bf120  MOV RAX,R14
052bf123  ADD RSP,0x10
052bf127  POP RBX
052bf128  POP R12
052bf12a  POP R13
052bf12c  POP R14
052bf12e  POP R15
052bf130  RET
052bf131  MOV dword ptr [R12 + 0x30],EAX
052bf136  JMP 0x052bf097
```

## `0d3c37d0` — FlatWorldGenerator slot 0

- Ghidra name: `FUN_0d3c37d0`
- Body: `[[0d3c37d0, 0d3c3830]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0d3c37d0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &UNK_0f462370;
  param_1[0xe] = &UNK_0f462548;
  plVar5 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    param_1[0x23] = lVar3;
    func_0x0412a280(lVar3,param_1[0x24] - lVar3);
  }
  *param_1 = &UNK_0f3ed048;
  param_1[0xe] = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x21);
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    func_0x0412a280(puVar4,0x18);
    puVar4 = puVar2;
  }
  lVar3 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar3 != 0) {
    func_0x0412a280(lVar3,param_1[0x1d] << 3);
  }
  func_0x04136a00(param_1 + 0x15);
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    func_0x0d352b40(lVar3);
    func_0x0412a280(lVar3,0x1c8);
  }
  *param_1 = &UNK_0f3f0e90;
  if (param_1[0xd] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[0xc] != 0) {
        (**(code **)(**(long **)(param_1[0xc] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xd] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[0xb] != 0) {
    plVar5 = (long *)func_0x0412c300();
    if (plVar5 != (long *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(**(long **)(param_1[10] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[0xb] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar5 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *param_1 = &UNK_0f534768;
  plVar5 = (long *)param_1[2];
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1[1] = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
SUB_0412c2d0:
  if (plVar5[2] != 0) {
    LOCK();
    plVar1 = plVar5 + 2;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))();
  return;
}


```

### Assembly

```asm
0d3c37d0  PUSH RBX
0d3c37d1  MOV RBX,RDI
0d3c37d4  LEA RAX,[0xf462370]
0d3c37db  MOV qword ptr [RDI],RAX
0d3c37de  LEA RAX,[0xf462548]
0d3c37e5  MOV qword ptr [RDI + 0x70],RAX
0d3c37e9  MOV RDI,qword ptr [RDI + 0x160]
0d3c37f0  MOV qword ptr [RBX + 0x160],0x0
0d3c37fb  TEST RDI,RDI
0d3c37fe  JZ 0x0d3c3806
0d3c3800  MOV RAX,qword ptr [RDI]
0d3c3803  CALL qword ptr [RAX + 0x8]
0d3c3806  MOV RDI,qword ptr [RBX + 0x110]
0d3c380d  TEST RDI,RDI
0d3c3810  JZ 0x0d3c3828
0d3c3812  MOV qword ptr [RBX + 0x118],RDI
0d3c3819  MOV RSI,qword ptr [RBX + 0x120]
0d3c3820  SUB RSI,RDI
0d3c3823  CALL 0x0412a280
0d3c3828  MOV RDI,RBX
0d3c382b  POP RBX
0d3c382c  JMP 0x0ca70460
```

## `0d3c3840` — FlatWorldGenerator slot 1

- Ghidra name: `FUN_0d3c3840`
- Body: `[[0d3c3840, 0d3c38ad]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0d3c3893: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d3c3840(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uStack_10;
  
  *param_1 = &UNK_0f462370;
  puVar4 = &UNK_0f462548;
  param_1[0xe] = &UNK_0f462548;
  plVar1 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar1 != (long *)0x0) {
    uStack_10 = 0xd3c3876;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[0x22];
  if (puVar2 == (undefined8 *)0x0) {
    uStack_10 = 0xd3c38a0;
    puVar4 = (undefined *)FUN_0ca70460(param_1);
  }
  else {
    param_1[0x23] = puVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0xd3c3898;
    param_1 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,param_1);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
0d3c3840  PUSH RBX
0d3c3841  MOV RBX,RDI
0d3c3844  LEA RAX,[0xf462370]
0d3c384b  MOV qword ptr [RDI],RAX
0d3c384e  LEA RAX,[0xf462548]
0d3c3855  MOV qword ptr [RDI + 0x70],RAX
0d3c3859  MOV RDI,qword ptr [RDI + 0x160]
0d3c3860  MOV qword ptr [RBX + 0x160],0x0
0d3c386b  TEST RDI,RDI
0d3c386e  JZ 0x0d3c3876
0d3c3870  MOV RAX,qword ptr [RDI]
0d3c3873  CALL qword ptr [RAX + 0x8]
0d3c3876  MOV RDI,qword ptr [RBX + 0x110]
0d3c387d  TEST RDI,RDI
0d3c3880  JZ 0x0d3c3898
0d3c3882  MOV qword ptr [RBX + 0x118],RDI
0d3c3889  MOV RSI,qword ptr [RBX + 0x120]
0d3c3890  SUB RSI,RDI
0d3c3893  CALL 0x0412a280
0d3c3898  MOV RDI,RBX
0d3c389b  CALL 0x0ca70460
0d3c38a0  MOV ESI,0x170
0d3c38a5  MOV RDI,RBX
0d3c38a8  POP RBX
0d3c38a9  JMP 0x0412a280
```

## `0d3a4db0` — FlatWorldGenerator slot 10

- Ghidra name: `FUN_0d3a4db0`
- Body: `[[0d3a4db0, 0d3a4db2]]`

### Pseudocode

```c

undefined1 FUN_0d3a4db0(void)

{
  return 1;
}


```

### Assembly

```asm
0d3a4db0  MOV AL,0x1
0d3a4db2  RET
```

## `0d3a4dc0` — FlatWorldGenerator slot 11

- Ghidra name: `FUN_0d3a4dc0`
- Body: `[[0d3a4dc0, 0d3a51e8]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d3a4dc0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 unaff_RBX;
  int iStack_bf8;
  int iStack_bf4;
  long lStack_bf0;
  long *plStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  byte bStack_bc8;
  undefined *puStack_bc0;
  undefined2 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined1 auStack_ba0 [364];
  uint uStack_a34;
  undefined *puStack_a30;
  undefined *puStack_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))();
  uVar12 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((*(char *)(lVar11 + 0x4b9) == '\x01') &&
     (lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))(),
     *(char *)(lVar11 + 0x4ba) == '\0')) {
    func_0x0412d550(param_2 + 0x22);
    lVar11 = param_2[0x34];
    lVar13 = param_2[0x35];
    func_0x0412d610(param_2 + 0x22);
    iStack_bf8 = (int)lVar11 + 1;
    iStack_bf4 = (int)lVar13 + 1;
    (**(code **)(*param_2 + 0x20))(&lStack_bf0,param_2,&iStack_bf8);
    lVar11 = lStack_bf0;
    func_0x0ca8a1f0(&lStack_be0,*(undefined8 *)(*(long *)(lStack_bf0 + 0x30) + 0x198),
                    lStack_bf0 + 0x50,param_2);
    bVar6 = bStack_bc8;
    if (bStack_bc8 == 1) {
      uVar12 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
      puStack_a30 = &UNK_0f147b18;
      ppuStack_38 = &puStack_a28;
      puStack_a28 = &UNK_0f5356d0;
      uStack_48 = 0x100000000000000;
      uStack_a20 = (undefined4)uVar12;
      uStack_54 = 0;
      uStack_50 = 0;
      lVar13 = 7;
      while( true ) {
        uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar13) - 6;
        uVar8 = (uint)uVar12;
        (&uStack_a34)[lVar13] = uVar8;
        if (lVar13 == 0x193) break;
        uVar8 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar13) - 5;
        uVar12 = (ulong)uVar8;
        *(uint *)((long)&puStack_a30 + lVar13 * 4) = uVar8;
        lVar13 = lVar13 + 2;
      }
      uStack_5c = 0x18e00000270;
      uStack_40 = 1;
      uStack_a1c = uStack_a20;
      uVar8 = func_0x0ee4a030(ppuStack_38,0);
      uVar9 = func_0x0ee4a030(ppuStack_38,0);
      iVar3 = *(int *)(lVar11 + 0x50);
      iVar4 = *(int *)(lVar11 + 0x54);
      uVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x438))();
      ppuVar7 = ppuStack_38;
      if (*(char *)((long)ppuStack_38 + 0x9e7) == '\x01') {
        uVar10 = uVar10 ^ iVar3 * (uVar8 >> 1 | 1) + iVar4 * (uVar9 >> 1 | 1);
        *(uint *)(ppuStack_38 + 1) = uVar10;
        *(undefined2 *)((long)ppuVar7 + 0x9e4) = 0;
        *(undefined4 *)((long)ppuVar7 + 0x9d4) = 0;
        ppuVar7[0x13b] = (undefined *)0x0;
        *(uint *)((long)ppuVar7 + 0xc) = uVar10;
        lVar11 = 5;
        while( true ) {
          uVar12 = ((ulong)((uVar10 >> 0x1e ^ uVar10) * 0x6c078965) + lVar11) - 4;
          uVar8 = (uint)uVar12;
          *(uint *)((long)ppuVar7 + lVar11 * 4 + -4) = uVar8;
          if (lVar11 == 0x191) break;
          uVar10 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar11) - 3;
          *(uint *)((long)ppuVar7 + lVar11 * 4) = uVar10;
          lVar11 = lVar11 + 2;
        }
        *(undefined8 *)((long)ppuVar7 + 0x9cc) = 0x18e00000270;
      }
      func_0x0c9d0c10(auStack_ba0,param_2[4],param_2[5],param_2,0,1,0,0);
      uStack_bb8 = 0x101;
      uStack_bb0 = _DAT_0f6b3a90;
      uStack_ba8 = 0;
      puStack_bc0 = &UNK_0f474ec0;
      lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x568))();
      lVar13 = func_0x0d2279e0(lVar11 + 0x518,0xf71d600);
      if ((lVar13 == 0) && (lVar13 = func_0x0d2279e0(lVar11 + 0x4f0,0xf71d600), lVar13 == 0)) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = (undefined *)0x0;
        if (*(int *)(lVar13 + 0x50) == 6) {
          puVar14 = (undefined *)(lVar13 + 0x38);
        }
      }
      puVar15 = &UNK_01de6224;
      if (puVar14 != (undefined *)0x0) {
        puVar15 = puVar14;
      }
      func_0x0d50a850(&puStack_bc0,auStack_ba0,puVar15,&puStack_a30);
      func_0x0cafd630(lStack_bf0);
      func_0x0c9d0f40(auStack_ba0);
    }
    lVar11 = lStack_be0;
    uVar12 = (ulong)bVar6;
    if (((bStack_bc8 & 1) != 0) && (lVar13 = lStack_bd8, lStack_be0 != 0)) {
      for (; lVar11 != lVar13; lVar13 = lVar13 + -0x20) {
        if (*(char *)(lVar13 + -8) == '\x01') {
          func_0x0412d6b0(*(undefined8 *)(lVar13 + -0x10));
        }
        plVar5 = *(long **)(lVar13 + -0x18);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
      }
      lStack_bd8 = lVar11;
      func_0x0412a280(lStack_be0,lStack_bd0 - lStack_be0);
    }
    if (plStack_be8 != (long *)0x0) {
      LOCK();
      plVar5 = plStack_be8 + 1;
      lVar11 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_be8 + 0x10))(plStack_be8);
        func_0x0412c2d0(plStack_be8);
      }
    }
  }
  return uVar12 & 0xffffffff;
}


```

### Assembly

```asm
0d3a4dc0  PUSH RBP
0d3a4dc1  PUSH R15
0d3a4dc3  PUSH R14
0d3a4dc5  PUSH R13
0d3a4dc7  PUSH R12
0d3a4dc9  PUSH RBX
0d3a4dca  SUB RSP,0xbd8
0d3a4dd1  MOV R15,RSI
0d3a4dd4  MOV R14,RDI
0d3a4dd7  MOV RDI,qword ptr [RDI + 0x20]
0d3a4ddb  MOV RAX,qword ptr [RDI]
0d3a4dde  CALL qword ptr [RAX + 0x568]
0d3a4de4  MOV BL,0x1
0d3a4de6  CMP byte ptr [RAX + 0x4b9],0x1
0d3a4ded  JNZ 0x0d3a51ce
0d3a4df3  MOV RDI,qword ptr [R14 + 0x20]
0d3a4df7  MOV RAX,qword ptr [RDI]
0d3a4dfa  CALL qword ptr [RAX + 0x568]
0d3a4e00  CMP byte ptr [RAX + 0x4ba],0x0
0d3a4e07  JNZ 0x0d3a51ce
0d3a4e0d  LEA RBX,[R15 + 0x110]
0d3a4e14  MOV RDI,RBX
0d3a4e17  CALL 0x0412d550
0d3a4e1c  MOV EBP,dword ptr [R15 + 0x1a0]
0d3a4e23  MOV R12D,dword ptr [R15 + 0x1a8]
0d3a4e2a  MOV RDI,RBX
0d3a4e2d  CALL 0x0412d610
0d3a4e32  INC EBP
0d3a4e34  INC R12D
0d3a4e37  MOV dword ptr [RSP + 0x10],EBP
0d3a4e3b  MOV dword ptr [RSP + 0x14],R12D
0d3a4e40  MOV RAX,qword ptr [R15]
0d3a4e43  LEA RDI,[RSP + 0x18]
0d3a4e48  LEA RDX,[RSP + 0x10]
0d3a4e4d  MOV RSI,R15
0d3a4e50  CALL qword ptr [RAX + 0x20]
0d3a4e53  MOV R13,qword ptr [RSP + 0x18]
0d3a4e58  LEA RDX,[R13 + 0x50]
0d3a4e5c  MOV RAX,qword ptr [R13 + 0x30]
0d3a4e60  MOV RSI,qword ptr [RAX + 0x198]
0d3a4e67  LEA RDI,[RSP + 0x28]
0d3a4e6c  MOV RCX,R15
0d3a4e6f  CALL 0x0ca8a1f0
0d3a4e74  MOVZX EBX,byte ptr [RSP + 0x40]
0d3a4e79  MOV EAX,EBX
0d3a4e7b  CMP BL,0x1
0d3a4e7e  JNZ 0x0d3a5123
0d3a4e84  MOV RDI,qword ptr [R14 + 0x20]
0d3a4e88  MOV RAX,qword ptr [RDI]
0d3a4e8b  CALL qword ptr [RAX + 0x438]
0d3a4e91  LEA RCX,[0xf147b18]
0d3a4e98  MOV qword ptr [RSP + 0x1d8],RCX
0d3a4ea0  LEA RDI,[RSP + 0x1e0]
0d3a4ea8  LEA RCX,[0xf5356d0]
0d3a4eaf  MOV qword ptr [RSP + 0x1e0],RCX
0d3a4eb7  MOV RCX,0x100000000000000
0d3a4ec1  MOV qword ptr [RSP + 0xbc0],RCX
0d3a4ec9  MOV dword ptr [RSP + 0x1e8],EAX
0d3a4ed0  MOV dword ptr [RSP + 0xbb4],0x0
0d3a4edb  MOV qword ptr [RSP + 0xbb8],0x0
0d3a4ee7  MOV dword ptr [RSP + 0x1ec],EAX
0d3a4eee  MOV ECX,0x7
0d3a4ef3  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a4f00  MOV EDX,EAX
0d3a4f02  SHR EDX,0x1e
0d3a4f05  XOR EDX,EAX
0d3a4f07  IMUL EAX,EDX,0x6c078965
0d3a4f0d  ADD RAX,RCX
0d3a4f10  ADD RAX,-0x6
0d3a4f14  MOV dword ptr [RSP + RCX*0x4 + 0x1d4],EAX
0d3a4f1b  CMP RCX,0x193
0d3a4f22  JZ 0x0d3a4f43
0d3a4f24  MOV EDX,EAX
0d3a4f26  SHR EDX,0x1e
0d3a4f29  XOR EDX,EAX
0d3a4f2b  IMUL EAX,EDX,0x6c078965
0d3a4f31  ADD EAX,ECX
0d3a4f33  ADD EAX,-0x5
0d3a4f36  MOV dword ptr [RSP + RCX*0x4 + 0x1d8],EAX
0d3a4f3d  ADD RCX,0x2
0d3a4f41  JMP 0x0d3a4f00
0d3a4f43  MOV byte ptr [RSP + 0xf],BL
0d3a4f47  MOV RAX,0x18e00000270
0d3a4f51  MOV qword ptr [RSP + 0xbac],RAX
0d3a4f59  MOV byte ptr [RSP + 0xbc8],0x1
0d3a4f61  MOV qword ptr [RSP + 0xbd0],RDI
0d3a4f69  XOR ESI,ESI
0d3a4f6b  CALL 0x0ee4a030
0d3a4f70  MOV EBP,EAX
0d3a4f72  MOV RDI,qword ptr [RSP + 0xbd0]
0d3a4f7a  XOR ESI,ESI
0d3a4f7c  CALL 0x0ee4a030
0d3a4f81  MOV R12D,EAX
0d3a4f84  MOV EBX,dword ptr [R13 + 0x50]
0d3a4f88  MOV R13D,dword ptr [R13 + 0x54]
0d3a4f8c  MOV RDI,qword ptr [R14 + 0x20]
0d3a4f90  MOV RAX,qword ptr [RDI]
0d3a4f93  CALL qword ptr [RAX + 0x438]
0d3a4f99  MOV RCX,qword ptr [RSP + 0xbd0]
0d3a4fa1  CMP byte ptr [RCX + 0x9e7],0x1
0d3a4fa8  JNZ 0x0d3a503d
0d3a4fae  SHR R12D,0x1
0d3a4fb1  OR R12D,0x1
0d3a4fb5  IMUL R13D,R12D
0d3a4fb9  SHR EBP,0x1
0d3a4fbb  OR EBP,0x1
0d3a4fbe  IMUL EBX,EBP
0d3a4fc1  ADD EBX,R13D
0d3a4fc4  XOR EAX,EBX
0d3a4fc6  MOV dword ptr [RCX + 0x8],EAX
0d3a4fc9  MOV word ptr [RCX + 0x9e4],0x0
0d3a4fd2  MOV dword ptr [RCX + 0x9d4],0x0
0d3a4fdc  MOV qword ptr [RCX + 0x9d8],0x0
0d3a4fe7  MOV dword ptr [RCX + 0xc],EAX
0d3a4fea  MOV EDX,0x5
0d3a4fef  NOP
0d3a4ff0  MOV ESI,EAX
0d3a4ff2  SHR ESI,0x1e
0d3a4ff5  XOR ESI,EAX
0d3a4ff7  IMUL EAX,ESI,0x6c078965
0d3a4ffd  ADD RAX,RDX
0d3a5000  ADD RAX,-0x4
0d3a5004  MOV dword ptr [RCX + RDX*0x4 + -0x4],EAX
0d3a5008  CMP RDX,0x191
0d3a500f  JZ 0x0d3a502c
0d3a5011  MOV ESI,EAX
0d3a5013  SHR ESI,0x1e
0d3a5016  XOR ESI,EAX
0d3a5018  IMUL EAX,ESI,0x6c078965
0d3a501e  ADD EAX,EDX
0d3a5020  ADD EAX,-0x3
0d3a5023  MOV dword ptr [RCX + RDX*0x4],EAX
0d3a5026  ADD RDX,0x2
0d3a502a  JMP 0x0d3a4ff0
0d3a502c  MOV RAX,0x18e00000270
0d3a5036  MOV qword ptr [RCX + 0x9cc],RAX
0d3a503d  MOV RSI,qword ptr [R15 + 0x20]
0d3a5041  MOV RDX,qword ptr [R15 + 0x28]
0d3a5045  LEA RDI,[RSP + 0x68]
0d3a504a  MOV RCX,R15
0d3a504d  XOR R8D,R8D
0d3a5050  MOV R9D,0x1
0d3a5056  PUSH 0x0
0d3a5058  PUSH 0x0
0d3a505a  CALL 0x0c9d0c10
0d3a505f  ADD RSP,0x10
0d3a5063  MOV word ptr [RSP + 0x50],0x101
0d3a506a  MOV RAX,qword ptr [0x0f6b3a90]
0d3a5071  MOV qword ptr [RSP + 0x58],RAX
0d3a5076  MOV qword ptr [RSP + 0x60],0x0
0d3a507f  LEA RAX,[0xf474ec0]
0d3a5086  MOV qword ptr [RSP + 0x48],RAX
0d3a508b  MOV RDI,qword ptr [R14 + 0x20]
0d3a508f  MOV RAX,qword ptr [RDI]
0d3a5092  CALL qword ptr [RAX + 0x568]
0d3a5098  MOVZX EBX,byte ptr [RSP + 0xf]
0d3a509d  MOV R14,RAX
0d3a50a0  LEA RDI,[RAX + 0x518]
0d3a50a7  LEA RSI,[0xf71d600]
0d3a50ae  CALL 0x0d2279e0
0d3a50b3  TEST RAX,RAX
0d3a50b6  JNZ 0x0d3a50d7
0d3a50b8  ADD R14,0x4f0
0d3a50bf  LEA RSI,[0xf71d600]
0d3a50c6  MOV RDI,R14
0d3a50c9  CALL 0x0d2279e0
0d3a50ce  TEST RAX,RAX
0d3a50d1  JZ 0x0d3a51e2
0d3a50d7  LEA RDX,[RAX + 0x38]
0d3a50db  XOR ECX,ECX
0d3a50dd  CMP dword ptr [RAX + 0x50],0x6
0d3a50e1  CMOVZ RCX,RDX
0d3a50e5  TEST RCX,RCX
0d3a50e8  LEA RDX,[0x1de6224]
0d3a50ef  CMOVNZ RDX,RCX
0d3a50f3  LEA RDI,[RSP + 0x48]
0d3a50f8  LEA RSI,[RSP + 0x68]
0d3a50fd  LEA RCX,[RSP + 0x1d8]
0d3a5105  CALL 0x0d50a850
0d3a510a  MOV RDI,qword ptr [RSP + 0x18]
0d3a510f  CALL 0x0cafd630
0d3a5114  LEA RDI,[RSP + 0x68]
0d3a5119  CALL 0x0c9d0f40
0d3a511e  MOVZX EAX,byte ptr [RSP + 0x40]
0d3a5123  TEST AL,0x1
0d3a5125  JZ 0x0d3a51a1
0d3a5127  MOV R15,qword ptr [RSP + 0x28]
0d3a512c  TEST R15,R15
0d3a512f  JZ 0x0d3a51a1
0d3a5131  MOV R12,qword ptr [RSP + 0x30]
0d3a5136  MOV RDI,R15
0d3a5139  CMP R15,R12
0d3a513c  JNZ 0x0d3a5149
0d3a513e  JMP 0x0d3a518f
0d3a5140  ADD R12,-0x20
0d3a5144  CMP R12,R15
0d3a5147  JZ 0x0d3a518a
0d3a5149  CMP byte ptr [R12 + -0x8],0x1
0d3a514f  JNZ 0x0d3a515b
0d3a5151  MOV RDI,qword ptr [R12 + -0x10]
0d3a5156  CALL 0x0412d6b0
0d3a515b  MOV R14,qword ptr [R12 + -0x18]
0d3a5160  TEST R14,R14
0d3a5163  JZ 0x0d3a5140
0d3a5165  MOV RAX,-0x1
0d3a516c  XADD.LOCK qword ptr [R14 + 0x8],RAX
0d3a5172  TEST RAX,RAX
0d3a5175  JNZ 0x0d3a5140
0d3a5177  MOV RAX,qword ptr [R14]
0d3a517a  MOV RDI,R14
0d3a517d  CALL qword ptr [RAX + 0x10]
0d3a5180  MOV RDI,R14
0d3a5183  CALL 0x0412c2d0
0d3a5188  JMP 0x0d3a5140
0d3a518a  MOV RDI,qword ptr [RSP + 0x28]
0d3a518f  MOV qword ptr [RSP + 0x30],R15
0d3a5194  MOV RSI,qword ptr [RSP + 0x38]
0d3a5199  SUB RSI,RDI
0d3a519c  CALL 0x0412a280
0d3a51a1  MOV R14,qword ptr [RSP + 0x20]
0d3a51a6  TEST R14,R14
0d3a51a9  JZ 0x0d3a51ce
0d3a51ab  MOV RAX,-0x1
0d3a51b2  XADD.LOCK qword ptr [R14 + 0x8],RAX
0d3a51b8  TEST RAX,RAX
0d3a51bb  JNZ 0x0d3a51ce
0d3a51bd  MOV RAX,qword ptr [R14]
0d3a51c0  MOV RDI,R14
0d3a51c3  CALL qword ptr [RAX + 0x10]
0d3a51c6  MOV RDI,R14
0d3a51c9  CALL 0x0412c2d0
0d3a51ce  MOV EAX,EBX
0d3a51d0  ADD RSP,0xbd8
0d3a51d7  POP RBX
0d3a51d8  POP R12
0d3a51da  POP R13
0d3a51dc  POP R14
0d3a51de  POP R15
0d3a51e0  POP RBP
0d3a51e1  RET
0d3a51e2  XOR ECX,ECX
0d3a51e4  JMP 0x0d3a50e5
```

## `0d3a46a0` — FlatWorldGenerator slot 15

- Ghidra name: `FUN_0d3a46a0`
- Body: `[[0d3a46a0, 0d3a49d9] [0d3a49e0, 0d3a4b02] [0d3a4b10, 0d3a4b51] [0d3a4b60, 0d3a4d67]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3a46a0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_18c;
  undefined1 auStack_188 [24];
  long lStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    if ((DAT_0f71ff48 == '\0') && (iVar5 = func_0x04108328(&DAT_0f71ff48), iVar5 != 0)) {
      auStack_158._8_8_ = _DAT_014e1bb0;
      auStack_158._0_8_ = 0xffffffffffffffff;
      auStack_148[8] = 0;
      auStack_148._0_8_ = _UNK_014e1bb8;
      uStack_138 = 0xffffffff00000000;
      uStack_130 = _DAT_014e1bb0;
      uStack_128 = _UNK_014e1bb8;
      uStack_120 = 0;
      uStack_118 = 0xffffffff00000001;
      uStack_110 = _DAT_014e6630;
      uStack_10c = _UNK_014e6634;
      uStack_108 = _UNK_014e6638;
      uStack_104 = _UNK_014e663c;
      uStack_100 = 0;
      uStack_f8 = 0xffffffff;
      uStack_f0 = _DAT_014e1bb0;
      uStack_e8 = _UNK_014e1bb8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = _DAT_014e1bb0;
      uStack_c8 = _UNK_014e1bb8;
      uStack_c0 = 1;
      uStack_b8 = 1;
      uStack_b0 = _DAT_014e6630;
      uStack_ac = _UNK_014e6634;
      uStack_a8 = _UNK_014e6638;
      uStack_a4 = _UNK_014e663c;
      uStack_a0 = 0;
      uStack_98 = 0x1ffffffff;
      uStack_90 = _DAT_014eb1f0;
      uStack_88 = _UNK_014eb1f8;
      uStack_80 = 0;
      uStack_78 = 0x100000000;
      uStack_70 = _DAT_014eb1f0;
      uStack_68 = _UNK_014eb1f8;
      uStack_60 = 0;
      uStack_58 = 0x100000001;
      uStack_50 = _DAT_014e0dd0;
      uStack_48 = _UNK_014e0dd8;
      uStack_40 = 0;
      func_0x0d3c59d0(auStack_158);
      func_0x0eee2f40(&UNK_0d3c6160,&DAT_0f71ff20,0xf53dab8);
      func_0x0410844d(&DAT_0f71ff48);
    }
    if (_DAT_0f71ff28 != 0) {
      uVar6 = (long)*(int *)(param_2 + 0x50) + 0x9e3779b9;
      uVar6 = (long)*(int *)(param_2 + 0x54) + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
      uVar7 = _DAT_0f71ff28 - (_DAT_0f71ff28 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
      uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar7 >> 0x38 < 2) {
        uVar12 = _DAT_0f71ff28 - 1 & uVar6;
      }
      else {
        uVar12 = uVar6;
        if (_DAT_0f71ff28 <= uVar6) {
          uVar12 = uVar6 % _DAT_0f71ff28;
        }
      }
      plVar14 = *(long **)(_DAT_0f71ff20 + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if ((byte)(uVar7 >> 0x38) < 2) {
          do {
            if (uVar6 == plVar14[1]) {
              if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0d3a4a08;
            }
            else if ((plVar14[1] & _DAT_0f71ff28 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar7 = plVar14[1];
            if (uVar6 == uVar7) {
              if (plVar14[2] == *(long *)(param_2 + 0x50)) goto LAB_0d3a4a08;
            }
            else {
              if (_DAT_0f71ff28 <= uVar7) {
                if ((uVar7 | _DAT_0f71ff28) >> 0x20 == 0) {
                  uVar7 = (uVar7 & 0xffffffff) % (_DAT_0f71ff28 & 0xffffffff);
                }
                else {
                  uVar7 = uVar7 % _DAT_0f71ff28;
                }
              }
              if (uVar7 != uVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
  }
  else {
    func_0x0cae2040(param_2,param_1 + 0x128,0);
  }
LAB_0d3a479e:
  func_0x0cafad60(param_2,0);
  if (*(char *)(param_2 + 0x110b) == '\x01') {
    func_0x0cada270(param_2 + 0x120);
  }
  else {
    auVar16 = ZEXT416(*(uint *)(*(long *)(param_1 + 0x158) + 0x168));
    auVar16 = pshuflw(auVar16,auVar16,0);
    uVar15 = auVar16._0_4_;
    *(undefined4 *)(param_2 + 0x120) = uVar15;
    *(undefined4 *)(param_2 + 0x124) = uVar15;
    *(undefined4 *)(param_2 + 0x128) = uVar15;
    *(undefined4 *)(param_2 + 300) = uVar15;
    *(undefined4 *)(param_2 + 0x130) = uVar15;
    *(undefined4 *)(param_2 + 0x134) = uVar15;
    *(undefined4 *)(param_2 + 0x138) = uVar15;
    *(undefined4 *)(param_2 + 0x13c) = uVar15;
    *(undefined4 *)(param_2 + 0x140) = uVar15;
    *(undefined4 *)(param_2 + 0x144) = uVar15;
    *(undefined4 *)(param_2 + 0x148) = uVar15;
    *(undefined4 *)(param_2 + 0x14c) = uVar15;
    *(undefined4 *)(param_2 + 0x150) = uVar15;
    *(undefined4 *)(param_2 + 0x154) = uVar15;
    *(undefined4 *)(param_2 + 0x158) = uVar15;
    *(undefined4 *)(param_2 + 0x15c) = uVar15;
    *(undefined4 *)(param_2 + 0x160) = uVar15;
    *(undefined4 *)(param_2 + 0x164) = uVar15;
    *(undefined4 *)(param_2 + 0x168) = uVar15;
    *(undefined4 *)(param_2 + 0x16c) = uVar15;
    *(undefined4 *)(param_2 + 0x170) = uVar15;
    *(undefined4 *)(param_2 + 0x174) = uVar15;
    *(undefined4 *)(param_2 + 0x178) = uVar15;
    *(undefined4 *)(param_2 + 0x17c) = uVar15;
    *(undefined4 *)(param_2 + 0x180) = uVar15;
    *(undefined4 *)(param_2 + 0x184) = uVar15;
    *(undefined4 *)(param_2 + 0x188) = uVar15;
    *(undefined4 *)(param_2 + 0x18c) = uVar15;
    *(undefined4 *)(param_2 + 400) = uVar15;
    *(undefined4 *)(param_2 + 0x194) = uVar15;
    *(undefined4 *)(param_2 + 0x198) = uVar15;
    *(undefined4 *)(param_2 + 0x19c) = uVar15;
    *(undefined4 *)(param_2 + 0x1a0) = uVar15;
    *(undefined4 *)(param_2 + 0x1a4) = uVar15;
    *(undefined4 *)(param_2 + 0x1a8) = uVar15;
    *(undefined4 *)(param_2 + 0x1ac) = uVar15;
    *(undefined4 *)(param_2 + 0x1b0) = uVar15;
    *(undefined4 *)(param_2 + 0x1b4) = uVar15;
    *(undefined4 *)(param_2 + 0x1b8) = uVar15;
    *(undefined4 *)(param_2 + 0x1bc) = uVar15;
    *(undefined4 *)(param_2 + 0x1c0) = uVar15;
    *(undefined4 *)(param_2 + 0x1c4) = uVar15;
    *(undefined4 *)(param_2 + 0x1c8) = uVar15;
    *(undefined4 *)(param_2 + 0x1cc) = uVar15;
    *(undefined4 *)(param_2 + 0x1d0) = uVar15;
    *(undefined4 *)(param_2 + 0x1d4) = uVar15;
    *(undefined4 *)(param_2 + 0x1d8) = uVar15;
    *(undefined4 *)(param_2 + 0x1dc) = uVar15;
    *(undefined4 *)(param_2 + 0x1e0) = uVar15;
    *(undefined4 *)(param_2 + 0x1e4) = uVar15;
    *(undefined4 *)(param_2 + 0x1e8) = uVar15;
    *(undefined4 *)(param_2 + 0x1ec) = uVar15;
    *(undefined4 *)(param_2 + 0x1f0) = uVar15;
    *(undefined4 *)(param_2 + 500) = uVar15;
    *(undefined4 *)(param_2 + 0x1f8) = uVar15;
    *(undefined4 *)(param_2 + 0x1fc) = uVar15;
    *(undefined4 *)(param_2 + 0x200) = uVar15;
    *(undefined4 *)(param_2 + 0x204) = uVar15;
    *(undefined4 *)(param_2 + 0x208) = uVar15;
    *(undefined4 *)(param_2 + 0x20c) = uVar15;
    *(undefined4 *)(param_2 + 0x210) = uVar15;
    *(undefined4 *)(param_2 + 0x214) = uVar15;
    *(undefined4 *)(param_2 + 0x218) = uVar15;
    *(undefined4 *)(param_2 + 0x21c) = uVar15;
    *(undefined4 *)(param_2 + 0x220) = uVar15;
    *(undefined4 *)(param_2 + 0x224) = uVar15;
    *(undefined4 *)(param_2 + 0x228) = uVar15;
    *(undefined4 *)(param_2 + 0x22c) = uVar15;
    *(undefined4 *)(param_2 + 0x230) = uVar15;
    *(undefined4 *)(param_2 + 0x234) = uVar15;
    *(undefined4 *)(param_2 + 0x238) = uVar15;
    *(undefined4 *)(param_2 + 0x23c) = uVar15;
    *(undefined4 *)(param_2 + 0x240) = uVar15;
    *(undefined4 *)(param_2 + 0x244) = uVar15;
    *(undefined4 *)(param_2 + 0x248) = uVar15;
    *(undefined4 *)(param_2 + 0x24c) = uVar15;
    *(undefined4 *)(param_2 + 0x250) = uVar15;
    *(undefined4 *)(param_2 + 0x254) = uVar15;
    *(undefined4 *)(param_2 + 600) = uVar15;
    *(undefined4 *)(param_2 + 0x25c) = uVar15;
    *(undefined4 *)(param_2 + 0x260) = uVar15;
    *(undefined4 *)(param_2 + 0x264) = uVar15;
    *(undefined4 *)(param_2 + 0x268) = uVar15;
    *(undefined4 *)(param_2 + 0x26c) = uVar15;
    *(undefined4 *)(param_2 + 0x270) = uVar15;
    *(undefined4 *)(param_2 + 0x274) = uVar15;
    *(undefined4 *)(param_2 + 0x278) = uVar15;
    *(undefined4 *)(param_2 + 0x27c) = uVar15;
    *(undefined4 *)(param_2 + 0x280) = uVar15;
    *(undefined4 *)(param_2 + 0x284) = uVar15;
    *(undefined4 *)(param_2 + 0x288) = uVar15;
    *(undefined4 *)(param_2 + 0x28c) = uVar15;
    *(undefined4 *)(param_2 + 0x290) = uVar15;
    *(undefined4 *)(param_2 + 0x294) = uVar15;
    *(undefined4 *)(param_2 + 0x298) = uVar15;
    *(undefined4 *)(param_2 + 0x29c) = uVar15;
    *(undefined4 *)(param_2 + 0x2a0) = uVar15;
    *(undefined4 *)(param_2 + 0x2a4) = uVar15;
    *(undefined4 *)(param_2 + 0x2a8) = uVar15;
    *(undefined4 *)(param_2 + 0x2ac) = uVar15;
    *(undefined4 *)(param_2 + 0x2b0) = uVar15;
    *(undefined4 *)(param_2 + 0x2b4) = uVar15;
    *(undefined4 *)(param_2 + 0x2b8) = uVar15;
    *(undefined4 *)(param_2 + 700) = uVar15;
    *(undefined4 *)(param_2 + 0x2c0) = uVar15;
    *(undefined4 *)(param_2 + 0x2c4) = uVar15;
    *(undefined4 *)(param_2 + 0x2c8) = uVar15;
    *(undefined4 *)(param_2 + 0x2cc) = uVar15;
    *(undefined4 *)(param_2 + 0x2d0) = uVar15;
    *(undefined4 *)(param_2 + 0x2d4) = uVar15;
    *(undefined4 *)(param_2 + 0x2d8) = uVar15;
    *(undefined4 *)(param_2 + 0x2dc) = uVar15;
    *(undefined4 *)(param_2 + 0x2e0) = uVar15;
    *(undefined4 *)(param_2 + 0x2e4) = uVar15;
    *(undefined4 *)(param_2 + 0x2e8) = uVar15;
    *(undefined4 *)(param_2 + 0x2ec) = uVar15;
    *(undefined4 *)(param_2 + 0x2f0) = uVar15;
    *(undefined4 *)(param_2 + 0x2f4) = uVar15;
    *(undefined4 *)(param_2 + 0x2f8) = uVar15;
    *(undefined4 *)(param_2 + 0x2fc) = uVar15;
    *(undefined4 *)(param_2 + 0x300) = uVar15;
    *(undefined4 *)(param_2 + 0x304) = uVar15;
    *(undefined4 *)(param_2 + 0x308) = uVar15;
    *(undefined4 *)(param_2 + 0x30c) = uVar15;
    *(undefined4 *)(param_2 + 0x310) = uVar15;
    *(undefined4 *)(param_2 + 0x314) = uVar15;
    *(undefined4 *)(param_2 + 0x318) = uVar15;
    *(undefined4 *)(param_2 + 0x31c) = uVar15;
  }
  func_0x0cae88c0(param_2);
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) &&
     (cVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x9f0))(), cVar3 != '\0')) {
    *(long *)(param_2 + 0x60) = param_1;
  }
  uVar2 = _UNK_014ea428;
  uVar9 = _DAT_014ea420;
  *(undefined8 *)(param_2 + 0x1180) = _DAT_014ea420;
  *(undefined8 *)(param_2 + 0x1188) = uVar2;
  *(undefined8 *)(param_2 + 0x1170) = uVar9;
  *(undefined8 *)(param_2 + 0x1178) = uVar2;
  *(undefined8 *)(param_2 + 0x1160) = uVar9;
  *(undefined8 *)(param_2 + 0x1168) = uVar2;
  lVar8 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x110) != lVar8) {
    lVar10 = 0;
    uVar6 = 0;
    do {
      *(undefined8 *)(lVar8 + lVar10) = 0x80000000;
      uVar6 = uVar6 + 1;
      lVar8 = *(long *)(param_2 + 0x108);
      lVar10 = lVar10 + 0x68;
    } while (uVar6 < (ulong)((*(long *)(param_2 + 0x110) - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  *(undefined8 *)(param_2 + 0x1190) = 0x80000000;
  func_0x0cae0970(param_2,1,2);
  return;
LAB_0d3a4a08:
  uVar11 = *(uint *)(plVar14 + 4);
  iVar5 = *(int *)((long)plVar14 + 0x24);
  lStack_170 = param_1;
  if (((int)uVar11 < iVar5) && (iVar4 = *(int *)((long)plVar14 + 0x1c), (int)plVar14[3] < iVar4)) {
    do {
      uVar13 = *(uint *)(plVar14 + 3);
      if ((int)uVar13 < iVar4) {
        do {
          auStack_188._0_4_ = uVar13 & 0xff | (uVar11 & 0xff) << 8;
          uVar9 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
          auStack_168 = (undefined1  [16])0x0;
          auStack_148 = (undefined1  [16])0x0;
          auStack_158 = (undefined1  [16])0x0;
          uStack_138 = 1;
          func_0x0cadd930(param_2,auStack_188,uVar9,0,auStack_168,auStack_158);
          uVar9 = auStack_168._8_8_;
          if ((long *)auStack_168._8_8_ != (long *)0x0) {
            LOCK();
            plVar1 = (long *)(auStack_168._8_8_ + 8);
            lVar8 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar8 == 0) {
              (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
              func_0x0412c2d0(uVar9);
            }
          }
          uVar13 = uVar13 + 1;
          iVar4 = *(int *)((long)plVar14 + 0x1c);
        } while ((int)uVar13 < iVar4);
        iVar5 = *(int *)((long)plVar14 + 0x24);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar5);
  }
  param_1 = lStack_170;
  if ((char)plVar14[5] != '\0') {
    uStack_18c = 0;
    uVar9 = func_0x0cc41df0(0xf6ff9e0,0xf71bea0,1);
    auStack_188._0_16_ = (undefined1  [16])0x0;
    auStack_148 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
    uStack_138 = 1;
    func_0x0cadd930(param_2,&uStack_18c,uVar9,0,auStack_188,auStack_158);
    uVar9 = auStack_188._8_8_;
    if ((long *)auStack_188._8_8_ != (long *)0x0) {
      LOCK();
      plVar14 = (long *)(auStack_188._8_8_ + 8);
      lVar8 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*(long *)auStack_188._8_8_ + 0x10))(auStack_188._8_8_);
        func_0x0412c2d0(uVar9);
      }
    }
  }
  goto LAB_0d3a479e;
}


```

### Assembly

```asm
0d3a46a0  PUSH RBP
0d3a46a1  PUSH R15
0d3a46a3  PUSH R14
0d3a46a5  PUSH R13
0d3a46a7  PUSH R12
0d3a46a9  PUSH RBX
0d3a46aa  SUB RSP,0x168
0d3a46b1  MOV RBX,RSI
0d3a46b4  MOV R15,RDI
0d3a46b7  MOV R12D,0x80000000
0d3a46bd  CMP byte ptr [RDI + 0x150],0x1
0d3a46c4  JNZ 0x0d3a478d
0d3a46ca  MOVZX EAX,byte ptr [0x0f71ff48]
0d3a46d1  TEST AL,AL
0d3a46d3  JZ 0x0d3a4c03
0d3a46d9  MOV RDI,qword ptr [0x0f71ff28]
0d3a46e0  TEST RDI,RDI
0d3a46e3  JZ 0x0d3a479e
0d3a46e9  MOVSXD RAX,dword ptr [RBX + 0x50]
0d3a46ed  MOVSXD RCX,dword ptr [RBX + 0x54]
0d3a46f1  ADD RAX,R12
0d3a46f4  ADD RAX,0x1e3779b9
0d3a46fa  MOV RDX,RAX
0d3a46fd  SHL RDX,0x6
0d3a4701  MOV RSI,RAX
0d3a4704  SHR RSI,0x2
0d3a4708  ADD RCX,R12
0d3a470b  ADD RCX,0x1e3779b9
0d3a4712  ADD RCX,RDX
0d3a4715  ADD RCX,RSI
0d3a4718  XOR RCX,RAX
0d3a471b  MOV RAX,RDI
0d3a471e  SHR RAX,0x1
0d3a4721  MOV RDX,0x5555555555555555
0d3a472b  AND RDX,RAX
0d3a472e  MOV RAX,RDI
0d3a4731  SUB RAX,RDX
0d3a4734  MOV RDX,0x3333333333333333
0d3a473e  MOV RSI,RAX
0d3a4741  AND RSI,RDX
0d3a4744  SHR RAX,0x2
0d3a4748  AND RAX,RDX
0d3a474b  ADD RAX,RSI
0d3a474e  MOV RDX,RAX
0d3a4751  SHR RDX,0x4
0d3a4755  ADD RDX,RAX
0d3a4758  MOV RAX,0xf0f0f0f0f0f0f0f
0d3a4762  AND RAX,RDX
0d3a4765  MOV R9,0x101010101010101
0d3a476f  IMUL R9,RAX
0d3a4773  SHR R9,0x38
0d3a4777  CMP R9,0x1
0d3a477b  JA 0x0d3a4994
0d3a4781  LEA RSI,[RDI + -0x1]
0d3a4785  AND RSI,RCX
0d3a4788  JMP 0x0d3a49a7
0d3a478d  LEA RSI,[R15 + 0x128]
0d3a4794  MOV RDI,RBX
0d3a4797  XOR EDX,EDX
0d3a4799  CALL 0x0cae2040
0d3a479e  MOV RDI,RBX
0d3a47a1  XOR ESI,ESI
0d3a47a3  CALL 0x0cafad60
0d3a47a8  MOV RSI,qword ptr [R15 + 0x158]
0d3a47af  CMP byte ptr [RBX + 0x110b],0x1
0d3a47b6  JNZ 0x0d3a47c9
0d3a47b8  LEA RDI,[RBX + 0x120]
0d3a47bf  CALL 0x0cada270
0d3a47c4  JMP 0x0d3a48db
0d3a47c9  MOVD XMM0,dword ptr [RSI + 0x168]
0d3a47d1  PSHUFLW XMM0,XMM0,0x0
0d3a47d6  PSHUFD XMM0,XMM0,0x0
0d3a47db  MOVDQU xmmword ptr [RBX + 0x120],XMM0
0d3a47e3  MOVDQU xmmword ptr [RBX + 0x130],XMM0
0d3a47eb  MOVDQU xmmword ptr [RBX + 0x140],XMM0
0d3a47f3  MOVDQU xmmword ptr [RBX + 0x150],XMM0
0d3a47fb  MOVDQU xmmword ptr [RBX + 0x160],XMM0
0d3a4803  MOVDQU xmmword ptr [RBX + 0x170],XMM0
0d3a480b  MOVDQU xmmword ptr [RBX + 0x180],XMM0
0d3a4813  MOVDQU xmmword ptr [RBX + 0x190],XMM0
0d3a481b  MOVDQU xmmword ptr [RBX + 0x1a0],XMM0
0d3a4823  MOVDQU xmmword ptr [RBX + 0x1b0],XMM0
0d3a482b  MOVDQU xmmword ptr [RBX + 0x1c0],XMM0
0d3a4833  MOVDQU xmmword ptr [RBX + 0x1d0],XMM0
0d3a483b  MOVDQU xmmword ptr [RBX + 0x1e0],XMM0
0d3a4843  MOVDQU xmmword ptr [RBX + 0x1f0],XMM0
0d3a484b  MOVDQU xmmword ptr [RBX + 0x200],XMM0
0d3a4853  MOVDQU xmmword ptr [RBX + 0x210],XMM0
0d3a485b  MOVDQU xmmword ptr [RBX + 0x220],XMM0
0d3a4863  MOVDQU xmmword ptr [RBX + 0x230],XMM0
0d3a486b  MOVDQU xmmword ptr [RBX + 0x240],XMM0
0d3a4873  MOVDQU xmmword ptr [RBX + 0x250],XMM0
0d3a487b  MOVDQU xmmword ptr [RBX + 0x260],XMM0
0d3a4883  MOVDQU xmmword ptr [RBX + 0x270],XMM0
0d3a488b  MOVDQU xmmword ptr [RBX + 0x280],XMM0
0d3a4893  MOVDQU xmmword ptr [RBX + 0x290],XMM0
0d3a489b  MOVDQU xmmword ptr [RBX + 0x2a0],XMM0
0d3a48a3  MOVDQU xmmword ptr [RBX + 0x2b0],XMM0
0d3a48ab  MOVDQU xmmword ptr [RBX + 0x2c0],XMM0
0d3a48b3  MOVDQU xmmword ptr [RBX + 0x2d0],XMM0
0d3a48bb  MOVDQU xmmword ptr [RBX + 0x2e0],XMM0
0d3a48c3  MOVDQU xmmword ptr [RBX + 0x2f0],XMM0
0d3a48cb  MOVDQU xmmword ptr [RBX + 0x300],XMM0
0d3a48d3  MOVDQU xmmword ptr [RBX + 0x310],XMM0
0d3a48db  MOV RDI,RBX
0d3a48de  CALL 0x0cae88c0
0d3a48e3  MOV RDI,qword ptr [R15 + 0x20]
0d3a48e7  TEST RDI,RDI
0d3a48ea  JZ 0x0d3a48fd
0d3a48ec  MOV RAX,qword ptr [RDI]
0d3a48ef  CALL qword ptr [RAX + 0x9f0]
0d3a48f5  TEST AL,AL
0d3a48f7  JZ 0x0d3a48fd
0d3a48f9  MOV qword ptr [RBX + 0x60],R15
0d3a48fd  MOVAPS XMM0,xmmword ptr [0x014ea420]
0d3a4904  MOVUPS xmmword ptr [RBX + 0x1180],XMM0
0d3a490b  MOVUPS xmmword ptr [RBX + 0x1170],XMM0
0d3a4912  MOVUPS xmmword ptr [RBX + 0x1160],XMM0
0d3a4919  MOV RAX,qword ptr [RBX + 0x108]
0d3a4920  CMP qword ptr [RBX + 0x110],RAX
0d3a4927  JZ 0x0d3a4969
0d3a4929  XOR ECX,ECX
0d3a492b  MOV RDX,0x4ec4ec4ec4ec4ec5
0d3a4935  XOR ESI,ESI
0d3a4937  NOP word ptr [RAX + RAX*0x1]
0d3a4940  MOV qword ptr [RAX + RCX*0x1],R12
0d3a4944  INC RSI
0d3a4947  MOV RAX,qword ptr [RBX + 0x108]
0d3a494e  MOV RDI,qword ptr [RBX + 0x110]
0d3a4955  SUB RDI,RAX
0d3a4958  SAR RDI,0x3
0d3a495c  IMUL RDI,RDX
0d3a4960  ADD RCX,0x68
0d3a4964  CMP RSI,RDI
0d3a4967  JC 0x0d3a4940
0d3a4969  MOV qword ptr [RBX + 0x1190],R12
0d3a4970  MOV RDI,RBX
0d3a4973  MOV ESI,0x1
0d3a4978  MOV EDX,0x2
0d3a497d  CALL 0x0cae0970
0d3a4982  ADD RSP,0x168
0d3a4989  POP RBX
0d3a498a  POP R12
0d3a498c  POP R13
0d3a498e  POP R14
0d3a4990  POP R15
0d3a4992  POP RBP
0d3a4993  RET
0d3a4994  MOV RSI,RCX
0d3a4997  CMP RCX,RDI
0d3a499a  JC 0x0d3a49a7
0d3a499c  MOV RAX,RCX
0d3a499f  XOR EDX,EDX
0d3a49a1  DIV RDI
0d3a49a4  MOV RSI,RDX
0d3a49a7  MOV RAX,qword ptr [0x0f71ff20]
0d3a49ae  MOV RAX,qword ptr [RAX + RSI*0x8]
0d3a49b2  TEST RAX,RAX
0d3a49b5  JZ 0x0d3a479e
0d3a49bb  MOV R13,qword ptr [RAX]
0d3a49be  TEST R13,R13
0d3a49c1  JZ 0x0d3a479e
0d3a49c7  MOV R8,qword ptr [RBX + 0x50]
0d3a49cb  CMP R9D,0x2
0d3a49cf  JNC 0x0d3a4aef
0d3a49d5  DEC RDI
0d3a49d8  JMP 0x0d3a49f9
0d3a49e0  AND RAX,RDI
0d3a49e3  CMP RAX,RSI
0d3a49e6  JNZ 0x0d3a479e
0d3a49ec  MOV R13,qword ptr [R13]
0d3a49f0  TEST R13,R13
0d3a49f3  JZ 0x0d3a479e
0d3a49f9  MOV RAX,qword ptr [R13 + 0x8]
0d3a49fd  CMP RCX,RAX
0d3a4a00  JNZ 0x0d3a49e0
0d3a4a02  CMP qword ptr [R13 + 0x10],R8
0d3a4a06  JNZ 0x0d3a49ec
0d3a4a08  MOV qword ptr [RSP + 0x28],R15
0d3a4a0d  MOV EDX,dword ptr [R13 + 0x20]
0d3a4a11  MOV ECX,dword ptr [R13 + 0x24]
0d3a4a15  CMP EDX,ECX
0d3a4a17  JGE 0x0d3a4a27
0d3a4a19  MOV EAX,dword ptr [R13 + 0x1c]
0d3a4a1d  CMP dword ptr [R13 + 0x18],EAX
0d3a4a21  JL 0x0d3a4b3b
0d3a4a27  CMP byte ptr [R13 + 0x28],0x0
0d3a4a2c  MOV R15,qword ptr [RSP + 0x28]
0d3a4a31  JZ 0x0d3a479e
0d3a4a37  MOV dword ptr [RSP + 0xc],0x0
0d3a4a3f  LEA RDI,[0xf6ff9e0]
0d3a4a46  LEA RSI,[0xf71bea0]
0d3a4a4d  MOV EDX,0x1
0d3a4a52  CALL 0x0cc41df0
0d3a4a57  PXOR XMM0,XMM0
0d3a4a5b  MOVDQA xmmword ptr [RSP + 0x10],XMM0
0d3a4a61  MOVDQA xmmword ptr [RSP + 0x50],XMM0
0d3a4a67  MOVDQA xmmword ptr [RSP + 0x40],XMM0
0d3a4a6d  MOV qword ptr [RSP + 0x60],0x0
0d3a4a76  MOV byte ptr [RSP + 0x60],0x1
0d3a4a7b  LEA RSI,[RSP + 0xc]
0d3a4a80  LEA R8,[RSP + 0x10]
0d3a4a85  LEA R9,[RSP + 0x40]
0d3a4a8a  MOV RDI,RBX
0d3a4a8d  MOV RDX,RAX
0d3a4a90  XOR ECX,ECX
0d3a4a92  CALL 0x0cadd930
0d3a4a97  MOV R14,qword ptr [RSP + 0x18]
0d3a4a9c  TEST R14,R14
0d3a4a9f  JZ 0x0d3a479e
0d3a4aa5  MOV RAX,-0x1
0d3a4aac  XADD.LOCK qword ptr [R14 + 0x8],RAX
0d3a4ab2  TEST RAX,RAX
0d3a4ab5  JNZ 0x0d3a479e
0d3a4abb  MOV RAX,qword ptr [R14]
0d3a4abe  MOV RDI,R14
0d3a4ac1  CALL qword ptr [RAX + 0x10]
0d3a4ac4  MOV RDI,R14
0d3a4ac7  CALL 0x0412c2d0
0d3a4acc  JMP 0x0d3a479e
0d3a4ad1  XOR EDX,EDX
0d3a4ad3  DIV RDI
0d3a4ad6  MOV RAX,RDX
0d3a4ad9  CMP RAX,RSI
0d3a4adc  JNZ 0x0d3a479e
0d3a4ae2  MOV R13,qword ptr [R13]
0d3a4ae6  TEST R13,R13
0d3a4ae9  JZ 0x0d3a479e
0d3a4aef  MOV RAX,qword ptr [R13 + 0x8]
0d3a4af3  CMP RCX,RAX
0d3a4af6  JNZ 0x0d3a4b10
0d3a4af8  CMP qword ptr [R13 + 0x10],R8
0d3a4afc  JNZ 0x0d3a4ae2
0d3a4afe  JMP 0x0d3a4a08
0d3a4b10  CMP RAX,RDI
0d3a4b13  JC 0x0d3a4ad9
0d3a4b15  MOV RDX,RAX
0d3a4b18  OR RDX,RDI
0d3a4b1b  SHR RDX,0x20
0d3a4b1f  JNZ 0x0d3a4ad1
0d3a4b21  XOR EDX,EDX
0d3a4b23  DIV EDI
0d3a4b25  MOV EAX,EDX
0d3a4b27  JMP 0x0d3a4ad9
0d3a4b29  MOV ECX,dword ptr [R13 + 0x24]
0d3a4b2d  MOV EDX,dword ptr [RSP + 0x8]
0d3a4b31  INC EDX
0d3a4b33  CMP EDX,ECX
0d3a4b35  JGE 0x0d3a4a27
0d3a4b3b  MOV EBP,dword ptr [R13 + 0x18]
0d3a4b3f  CMP EBP,EAX
0d3a4b41  JGE 0x0d3a4b31
0d3a4b43  MOV dword ptr [RSP + 0x8],EDX
0d3a4b47  MOV EAX,EDX
0d3a4b49  SHL EAX,0x8
0d3a4b4c  MOVZX R14D,AX
0d3a4b50  JMP 0x0d3a4b6a
0d3a4b60  INC EBP
0d3a4b62  MOV EAX,dword ptr [R13 + 0x1c]
0d3a4b66  CMP EBP,EAX
0d3a4b68  JGE 0x0d3a4b29
0d3a4b6a  MOVZX EAX,BPL
0d3a4b6e  OR EAX,R14D
0d3a4b71  MOV dword ptr [RSP + 0x10],EAX
0d3a4b75  LEA RDI,[0xf6ff9e0]
0d3a4b7c  LEA RSI,[0xf71bd88]
0d3a4b83  MOV EDX,0x1
0d3a4b88  CALL 0x0cc41df0
0d3a4b8d  PXOR XMM0,XMM0
0d3a4b91  MOVDQA xmmword ptr [RSP + 0x30],XMM0
0d3a4b97  MOVDQA xmmword ptr [RSP + 0x50],XMM0
0d3a4b9d  MOVDQA xmmword ptr [RSP + 0x40],XMM0
0d3a4ba3  MOV qword ptr [RSP + 0x60],0x0
0d3a4bac  MOV byte ptr [RSP + 0x60],0x1
0d3a4bb1  MOV RDI,RBX
0d3a4bb4  LEA RSI,[RSP + 0x10]
0d3a4bb9  MOV RDX,RAX
0d3a4bbc  XOR ECX,ECX
0d3a4bbe  LEA R8,[RSP + 0x30]
0d3a4bc3  LEA R9,[RSP + 0x40]
0d3a4bc8  CALL 0x0cadd930
0d3a4bcd  MOV R15,qword ptr [RSP + 0x38]
0d3a4bd2  TEST R15,R15
0d3a4bd5  JZ 0x0d3a4b60
0d3a4bd7  MOV RAX,-0x1
0d3a4bde  XADD.LOCK qword ptr [R15 + 0x8],RAX
0d3a4be4  TEST RAX,RAX
0d3a4be7  JNZ 0x0d3a4b60
0d3a4bed  MOV RAX,qword ptr [R15]
0d3a4bf0  MOV RDI,R15
0d3a4bf3  CALL qword ptr [RAX + 0x10]
0d3a4bf6  MOV RDI,R15
0d3a4bf9  CALL 0x0412c2d0
0d3a4bfe  JMP 0x0d3a4b60
0d3a4c03  LEA RDI,[0xf71ff48]
0d3a4c0a  CALL 0x04108328
0d3a4c0f  TEST EAX,EAX
0d3a4c11  JZ 0x0d3a46d9
0d3a4c17  MOV qword ptr [RSP + 0x40],-0x1
0d3a4c20  MOVAPS XMM0,xmmword ptr [0x014e1bb0]
0d3a4c27  MOVUPS xmmword ptr [RSP + 0x48],XMM0
0d3a4c2c  MOV byte ptr [RSP + 0x58],0x0
0d3a4c31  MOV RAX,-0x100000000
0d3a4c3b  MOV qword ptr [RSP + 0x60],RAX
0d3a4c40  MOVUPS xmmword ptr [RSP + 0x68],XMM0
0d3a4c45  MOV byte ptr [RSP + 0x78],0x0
0d3a4c4a  INC RAX
0d3a4c4d  MOV qword ptr [RSP + 0x80],RAX
0d3a4c55  MOVAPS XMM1,xmmword ptr [0x014e6630]
0d3a4c5c  MOVUPS xmmword ptr [RSP + 0x88],XMM1
0d3a4c64  MOV byte ptr [RSP + 0x98],0x0
0d3a4c6c  LEA RAX,[R12 + 0x7fffffff]
0d3a4c74  MOV qword ptr [RSP + 0xa0],RAX
0d3a4c7c  MOVUPS xmmword ptr [RSP + 0xa8],XMM0
0d3a4c84  MOV byte ptr [RSP + 0xb8],0x0
0d3a4c8c  MOV qword ptr [RSP + 0xc0],0x0
0d3a4c98  MOVUPS xmmword ptr [RSP + 0xc8],XMM0
0d3a4ca0  MOV byte ptr [RSP + 0xd8],0x1
0d3a4ca8  MOV qword ptr [RSP + 0xe0],0x1
0d3a4cb4  MOVUPS xmmword ptr [RSP + 0xe8],XMM1
0d3a4cbc  MOV byte ptr [RSP + 0xf8],0x0
0d3a4cc4  MOV RAX,0x1ffffffff
0d3a4cce  MOV qword ptr [RSP + 0x100],RAX
0d3a4cd6  MOVAPS XMM0,xmmword ptr [0x014eb1f0]
0d3a4cdd  MOVUPS xmmword ptr [RSP + 0x108],XMM0
0d3a4ce5  MOV byte ptr [RSP + 0x118],0x0
0d3a4ced  MOV RAX,0x100000000
0d3a4cf7  MOV qword ptr [RSP + 0x120],RAX
0d3a4cff  MOVUPS xmmword ptr [RSP + 0x128],XMM0
0d3a4d07  MOV byte ptr [RSP + 0x138],0x0
0d3a4d0f  INC RAX
0d3a4d12  MOV qword ptr [RSP + 0x140],RAX
0d3a4d1a  MOVDQA XMM0,xmmword ptr [0x014e0dd0]
0d3a4d22  MOVDQU xmmword ptr [RSP + 0x148],XMM0
0d3a4d2b  MOV byte ptr [RSP + 0x158],0x0
0d3a4d33  LEA RDI,[RSP + 0x40]
0d3a4d38  CALL 0x0d3c59d0
0d3a4d3d  LEA RDI,[0xd3c6160]
0d3a4d44  LEA RSI,[0xf71ff20]
0d3a4d4b  LEA RDX,[0xf53dab8]
0d3a4d52  CALL 0x0eee2f40
0d3a4d57  LEA RDI,[0xf71ff48]
0d3a4d5e  CALL 0x0410844d
0d3a4d63  JMP 0x0d3a46d9
```

## `0d3a5240` — FlatWorldGenerator slot 42

- Ghidra name: `FUN_0d3a5240`
- Body: `[[0d3a5240, 0d3a5255]]`

### Pseudocode

```c

undefined8 * FUN_0d3a5240(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return param_1;
}


```

### Assembly

```asm
0d3a5240  MOV RAX,RDI
0d3a5243  XORPS XMM0,XMM0
0d3a5246  MOVUPS xmmword ptr [RDI + 0x10],XMM0
0d3a524a  MOVUPS xmmword ptr [RDI],XMM0
0d3a524d  MOV qword ptr [RDI + 0x20],0x0
0d3a5255  RET
```

## `0d3a5260` — FlatWorldGenerator slot 43

- Ghidra name: `FUN_0d3a5260`
- Body: `[[0d3a5260, 0d3a5262]]`

### Pseudocode

```c

undefined8 FUN_0d3a5260(void)

{
  return 0;
}


```

### Assembly

```asm
0d3a5260  XOR EAX,EAX
0d3a5262  RET
```

## `0d3a5270` — FlatWorldGenerator slot 44

- Ghidra name: `FUN_0d3a5270`
- Body: `[[0d3a5270, 0d3a5272]]`

### Pseudocode

```c

undefined8 FUN_0d3a5270(void)

{
  return 0;
}


```

### Assembly

```asm
0d3a5270  XOR EAX,EAX
0d3a5272  RET
```

## `0d3a5ae0` — FlatWorldGenerator slot 46

- Ghidra name: `FUN_0d3a5ae0`
- Body: `[[0d3a5ae0, 0d3a5ae0]]`

### Pseudocode

```c

void FUN_0d3a5ae0(void)

{
  return;
}


```

### Assembly

```asm
0d3a5ae0  RET
```

## `0d3a5280` — FlatWorldGenerator slot 47

- Ghidra name: `FUN_0d3a5280`
- Body: `[[0d3a5280, 0d3a541a] [0d3a5420, 0d3a549b] [0d3a54a0, 0d3a5566] [0d3a5570, 0d3a56f4] [0d3a5700, 0d3a573b] [0d3a5740, 0d3a57fe] [0d3a5800, 0d3a5856] [0d3a5860, 0d3a5916] [0d3a5920, 0d3a5ad2]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3a5280(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ushort *puVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  bool bVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  
  uVar24 = param_2[2];
  iVar6 = (int)param_2[3];
  uVar29 = *(uint *)(param_1 + 0x13c);
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  iVar23 = (int)(uVar24 >> 0x20);
  uVar32 = (ulong)uVar29;
  if (iVar23 < (int)uVar29) {
    uVar32 = uVar24 >> 0x20;
  }
  iVar15 = (int)uVar24;
  if ((0 < iVar15) && (0 < iVar6)) {
    uVar46 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
    uVar9 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
    uVar34 = (uint)uVar32;
    if ((int)uVar34 < 1) {
      if (iVar23 > (int)uVar29) {
        iVar44 = *(int *)((long)param_2 + 0x14);
        lVar7 = *param_2;
        iVar28 = uVar34 + 1;
        if ((int)(uVar34 + 1) <= iVar23) {
          iVar28 = iVar23;
        }
        iVar26 = (int)param_2[3] * iVar44;
        uVar29 = iVar28 - uVar34;
        uVar36 = uVar29 & 0xfffffffc;
        iVar31 = 0;
        iVar43 = 0;
        uVar24 = uVar32;
        do {
          iVar18 = (int)uVar24;
          iVar42 = 0;
          iVar16 = iVar31;
          do {
            iVar35 = (int)uVar24;
            uVar30 = uVar32;
            if ((uVar29 < 6) ||
               (uVar19 = uVar36, uVar34 - iVar28 < iVar44 * iVar42 + iVar26 * iVar43 + uVar34)) {
LAB_0d3a57b0:
              do {
                puVar2 = (undefined4 *)(lVar7 + (ulong)(uint)((int)uVar30 + iVar16) * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                uVar19 = (int)uVar30 + 1;
                uVar30 = (ulong)uVar19;
              } while ((int)uVar19 < iVar23);
            }
            else {
              do {
                puVar2 = (undefined4 *)(lVar7 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                puVar2 = (undefined4 *)(lVar7 + 0x10 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                uVar24 = (ulong)((int)uVar24 + 4);
                uVar19 = uVar19 - 4;
              } while (uVar19 != 0);
              uVar30 = (ulong)(uVar34 + uVar36);
              if (uVar29 != uVar36) goto LAB_0d3a57b0;
            }
            iVar42 = iVar42 + 1;
            uVar24 = (ulong)(uint)(iVar35 + iVar44);
            iVar16 = iVar16 + iVar44;
          } while (iVar42 != iVar6);
          iVar43 = iVar43 + 1;
          uVar24 = (ulong)(uint)(iVar18 + iVar26);
          iVar31 = iVar31 + iVar26;
        } while (iVar43 != iVar15);
      }
    }
    else {
      iVar44 = (int)param_2[3];
      iVar28 = *(int *)((long)param_2 + 0x14);
      iVar26 = *(int *)(param_1 + 0x140);
      iVar31 = *(int *)(param_1 + 0x13c);
      lVar7 = *(long *)(param_1 + 0x128);
      lVar8 = *param_2;
      if (iVar23 <= (int)uVar29) {
        uVar30 = (ulong)(uVar34 & 0x7ffffffc);
        uVar24 = (ulong)(uVar34 & 3);
        uVar36 = 0;
        uVar29 = 0;
        iVar23 = 0;
        do {
          iVar43 = 0;
          uVar19 = uVar36;
          uVar40 = uVar29;
          do {
            uVar25 = uVar24;
            if (uVar34 < 0x12) {
LAB_0d3a5880:
              uVar37 = 0;
              uVar21 = 0;
joined_r0x0d3a5888:
              for (; uVar25 != 0; uVar25 = uVar25 - 1) {
                *(undefined8 *)(lVar8 + (ulong)(uVar19 + (int)uVar37) * 8) =
                     *(undefined8 *)(lVar7 + (ulong)(uVar40 + (int)uVar37) * 8);
                uVar37 = uVar37 + 1;
              }
              if (uVar21 - uVar32 < 0xfffffffffffffffd) {
                do {
                  iVar16 = (int)uVar37;
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar16 + 1) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 1 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 2 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 2 + iVar16) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 3 + iVar16) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar16 + 3) * 8);
                  uVar37 = uVar37 + 4;
                } while (uVar32 != uVar37);
              }
            }
            else {
              uVar17 = iVar28 * iVar43 + iVar44 * iVar28 * iVar23;
              uVar39 = iVar31 * iVar43 + iVar26 * iVar31 * iVar23;
              uVar22 = (uint)(uVar32 - 1);
              if (((CARRY4(uVar17,uVar22)) || (CARRY4(uVar39,uVar22))) || (uVar32 - 1 >> 0x20 != 0))
              goto LAB_0d3a5880;
              uVar38 = uVar30;
              uVar22 = uVar40;
              uVar13 = uVar19;
              uVar37 = 0;
              uVar21 = 0;
              if ((lVar8 + (ulong)uVar17 * 8) - (lVar7 + (ulong)uVar39 * 8) < 0x20)
              goto joined_r0x0d3a5888;
              do {
                puVar1 = (undefined8 *)(lVar7 + (ulong)uVar22 * 8);
                uVar10 = puVar1[1];
                puVar4 = (undefined8 *)(lVar7 + 0x10 + (ulong)uVar22 * 8);
                uVar11 = *puVar4;
                uVar12 = puVar4[1];
                puVar4 = (undefined8 *)(lVar8 + (ulong)uVar13 * 8);
                *puVar4 = *puVar1;
                puVar4[1] = uVar10;
                puVar1 = (undefined8 *)(lVar8 + 0x10 + (ulong)uVar13 * 8);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                uVar38 = uVar38 - 4;
                uVar22 = uVar22 + 4;
                uVar13 = uVar13 + 4;
              } while (uVar38 != 0);
              uVar37 = uVar30;
              uVar21 = uVar30;
              if ((uVar34 & 0x7ffffffc) != uVar34) goto joined_r0x0d3a5888;
            }
            iVar43 = iVar43 + 1;
            uVar19 = uVar19 + iVar28;
            uVar40 = uVar40 + iVar31;
          } while (iVar43 != iVar6);
          iVar23 = iVar23 + 1;
          uVar29 = uVar29 + iVar26 * iVar31;
          uVar36 = uVar36 + iVar28 * iVar44;
        } while (iVar23 != iVar15);
      }
      else {
        iVar43 = uVar34 + 1;
        if ((int)(uVar34 + 1) <= iVar23) {
          iVar43 = iVar23;
        }
        iVar44 = iVar44 * iVar28;
        uVar37 = (ulong)(~uVar34 + iVar43) + 1;
        uVar30 = (ulong)(uVar34 & 0x7ffffffc);
        uVar25 = (ulong)(uVar34 & 3);
        uVar38 = uVar37 & 0xfffffffffffffffc;
        uVar29 = 0;
        uVar36 = 0;
        iVar16 = 0;
        uVar24 = uVar32;
        do {
          iVar18 = (int)uVar24;
          iVar42 = 0;
          uVar19 = uVar29;
          uVar40 = uVar36;
          do {
            uVar21 = uVar25;
            if (uVar34 < 0x12) {
LAB_0d3a54c7:
              uVar27 = 0;
              uVar20 = 0;
joined_r0x0d3a54d2:
              for (; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined8 *)(lVar8 + (ulong)(uVar19 + (int)uVar27) * 8) =
                     *(undefined8 *)(lVar7 + (ulong)(uVar40 + (int)uVar27) * 8);
                uVar27 = uVar27 + 1;
              }
              if (uVar20 - uVar32 < 0xfffffffffffffffd) {
                do {
                  iVar35 = (int)uVar27;
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + iVar35 + 1) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 1 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 2 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + 2 + iVar35) * 8);
                  *(undefined8 *)(lVar8 + (ulong)(uVar19 + 3 + iVar35) * 8) =
                       *(undefined8 *)(lVar7 + (ulong)(uVar40 + iVar35 + 3) * 8);
                  uVar27 = uVar27 + 4;
                } while (uVar32 != uVar27);
              }
            }
            else {
              uVar17 = iVar28 * iVar42 + iVar44 * iVar16;
              uVar39 = iVar31 * iVar42 + iVar26 * iVar31 * iVar16;
              uVar22 = (uint)(uVar32 - 1);
              if (((CARRY4(uVar17,uVar22)) || (CARRY4(uVar39,uVar22))) || (uVar32 - 1 >> 0x20 != 0))
              goto LAB_0d3a54c7;
              uVar41 = uVar30;
              uVar22 = uVar40;
              uVar13 = uVar19;
              uVar27 = 0;
              uVar20 = 0;
              if ((lVar8 + (ulong)uVar17 * 8) - (lVar7 + (ulong)uVar39 * 8) < 0x20)
              goto joined_r0x0d3a54d2;
              do {
                puVar1 = (undefined8 *)(lVar7 + (ulong)uVar22 * 8);
                uVar10 = puVar1[1];
                puVar4 = (undefined8 *)(lVar7 + 0x10 + (ulong)uVar22 * 8);
                uVar11 = *puVar4;
                uVar12 = puVar4[1];
                puVar4 = (undefined8 *)(lVar8 + (ulong)uVar13 * 8);
                *puVar4 = *puVar1;
                puVar4[1] = uVar10;
                puVar1 = (undefined8 *)(lVar8 + 0x10 + (ulong)uVar13 * 8);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                uVar41 = uVar41 - 4;
                uVar22 = uVar22 + 4;
                uVar13 = uVar13 + 4;
              } while (uVar41 != 0);
              uVar27 = uVar30;
              uVar20 = uVar30;
              if ((uVar34 & 0x7ffffffc) != uVar34) goto joined_r0x0d3a54d2;
            }
            iVar35 = (int)uVar24;
            uVar21 = uVar32;
            if ((~uVar34 + iVar43 < 5) ||
               (uVar27 = uVar38, uVar34 - iVar43 < iVar28 * iVar42 + uVar34 + iVar44 * iVar16)) {
LAB_0d3a5690:
              do {
                puVar2 = (undefined4 *)(lVar8 + (ulong)(uVar19 + (int)uVar21) * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                uVar17 = (int)uVar21 + 1;
                uVar21 = (ulong)uVar17;
              } while ((int)uVar17 < iVar23);
            }
            else {
              do {
                puVar2 = (undefined4 *)(lVar8 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                puVar2 = (undefined4 *)(lVar8 + 0x10 + uVar24 * 8);
                *puVar2 = uVar46;
                puVar2[1] = uVar9;
                puVar2[2] = uVar46;
                puVar2[3] = uVar9;
                uVar24 = (ulong)((int)uVar24 + 4);
                uVar27 = uVar27 - 4;
              } while (uVar27 != 0);
              uVar21 = uVar38 + uVar32;
              if (uVar37 != uVar38) goto LAB_0d3a5690;
            }
            iVar42 = iVar42 + 1;
            uVar19 = uVar19 + iVar28;
            uVar40 = uVar40 + iVar31;
            uVar24 = (ulong)(uint)(iVar35 + iVar28);
          } while (iVar42 != iVar6);
          iVar16 = iVar16 + 1;
          uVar36 = uVar36 + iVar31 * iVar26;
          uVar29 = uVar29 + iVar44;
          uVar24 = (ulong)(uint)(iVar18 + iVar44);
        } while (iVar16 != iVar15);
      }
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    return;
  }
  puVar33 = (ushort *)*param_4;
  lVar7 = param_4[1];
  uVar24 = lVar7 - (long)puVar33 >> 1;
  if ((long)uVar24 < 1) {
    return;
  }
  uVar5 = *(ushort *)(param_1 + 0x168);
  if (3 < uVar24) {
    uVar29 = (uint)uVar5;
    if (uVar24 < 0x10) {
      uVar32 = 0;
    }
    else {
      uVar32 = uVar24 & 0x7ffffffffffffff0;
      auVar47 = pshuflw(ZEXT416(uVar29),ZEXT416(uVar29),0);
      uVar46 = auVar47._0_4_;
      uVar30 = 0;
      do {
        puVar3 = puVar33 + uVar30;
        *(undefined4 *)puVar3 = uVar46;
        *(undefined4 *)(puVar3 + 2) = uVar46;
        *(undefined4 *)(puVar3 + 4) = uVar46;
        *(undefined4 *)(puVar3 + 6) = uVar46;
        puVar3 = puVar33 + uVar30 + 8;
        *(undefined4 *)puVar3 = uVar46;
        *(undefined4 *)(puVar3 + 2) = uVar46;
        *(undefined4 *)(puVar3 + 4) = uVar46;
        *(undefined4 *)(puVar3 + 6) = uVar46;
        uVar30 = uVar30 + 0x10;
      } while (uVar32 != uVar30);
      if (uVar24 == uVar32) {
        return;
      }
      if ((lVar7 - (long)puVar33 & 0x18U) == 0) {
        uVar24 = (ulong)((uint)uVar24 & 0xf);
        puVar33 = puVar33 + uVar32;
        goto LAB_0d3a5a9f;
      }
    }
    uVar30 = uVar24 & 0x7ffffffffffffffc;
    auVar47 = pshuflw(ZEXT416(uVar29),ZEXT416(uVar29),0);
    do {
      *(long *)(puVar33 + uVar32) = auVar47._0_8_;
      uVar32 = uVar32 + 4;
    } while (uVar30 != uVar32);
    bVar45 = uVar24 == uVar30;
    uVar24 = (ulong)((uint)uVar24 & 3);
    puVar33 = puVar33 + uVar30;
    if (bVar45) {
      return;
    }
  }
LAB_0d3a5a9f:
  uVar24 = uVar24 + 1;
  do {
    *puVar33 = uVar5;
    puVar33 = puVar33 + 1;
    uVar24 = uVar24 - 1;
  } while (1 < uVar24);
  return;
}


```

### Assembly

```asm
0d3a5280  PUSH RBP
0d3a5281  PUSH R15
0d3a5283  PUSH R14
0d3a5285  PUSH R13
0d3a5287  PUSH R12
0d3a5289  PUSH RBX
0d3a528a  SUB RSP,0xb8
0d3a5291  MOV qword ptr [RSP + 0x80],RCX
0d3a5299  MOV R15,RSI
0d3a529c  MOV RAX,qword ptr [RSI + 0x10]
0d3a52a0  MOV qword ptr [RSP + 0x30],RAX
0d3a52a5  MOV EAX,dword ptr [RSI + 0x18]
0d3a52a8  MOV dword ptr [RSP + 0x10],EAX
0d3a52ac  MOV qword ptr [RSP + 0x70],RDI
0d3a52b1  MOV EBX,dword ptr [RDI + 0x13c]
0d3a52b7  CMP qword ptr [0x0f6ffb10],0x0
0d3a52bf  JNZ 0x0d3a52f8
0d3a52c1  LEA RDI,[0x13a28c0]
0d3a52c8  LEA RSI,[0x11e3821]
0d3a52cf  LEA RCX,[0x13a2868]
0d3a52d6  LEA R8,[0x13a2901]
0d3a52dd  MOV EDX,0x2fd
0d3a52e2  XOR EAX,EAX
0d3a52e4  CALL 0x0eeddcf0
0d3a52e9  TEST AL,AL
0d3a52eb  JZ 0x0d3a52f8
0d3a52ed  MOV dword ptr [0x00000000],0xdeadc0de
0d3a52f8  MOV RAX,qword ptr [RSP + 0x30]
0d3a52fd  MOV R9,RAX
0d3a5300  SHR R9,0x20
0d3a5304  CMP R9D,EBX
0d3a5307  MOV ECX,EBX
0d3a5309  CMOVL ECX,R9D
0d3a530d  MOV qword ptr [RSP + 0x8],RCX
0d3a5312  TEST EAX,EAX
0d3a5314  JLE 0x0d3a59c5
0d3a531a  CMP EBX,R9D
0d3a531d  SETL AL
0d3a5320  CMP dword ptr [RSP + 0x10],0x0
0d3a5325  JLE 0x0d3a59c5
0d3a532b  MOV RCX,qword ptr [0x0f6ffb10]
0d3a5332  MOV RCX,qword ptr [RCX]
0d3a5335  MOV R10,qword ptr [RCX + 0x200]
0d3a533c  MOV R11,qword ptr [RSP + 0x8]
0d3a5341  TEST R11D,R11D
0d3a5344  JLE 0x0d3a56a4
0d3a534a  MOV R14D,dword ptr [R15 + 0x18]
0d3a534e  MOV ECX,dword ptr [R15 + 0x14]
0d3a5352  MOV RDX,qword ptr [RSP + 0x70]
0d3a5357  MOV R12D,dword ptr [RDX + 0x140]
0d3a535e  MOV EBP,dword ptr [RDX + 0x13c]
0d3a5364  MOV RSI,qword ptr [RDX + 0x128]
0d3a536b  MOV RDI,qword ptr [R15]
0d3a536e  MOV R8D,R11D
0d3a5371  TEST AL,AL
0d3a5373  MOV qword ptr [RSP + 0x40],RBP
0d3a5378  JZ 0x0d3a57c4
0d3a537e  MOV RDX,R11
0d3a5381  LEA EAX,[R11 + 0x1]
0d3a5385  CMP EAX,R9D
0d3a5388  CMOVLE EAX,R9D
0d3a538c  IMUL R14D,ECX
0d3a5390  NOT R11D
0d3a5393  ADD R11D,EAX
0d3a5396  MOV qword ptr [RSP + 0x28],R11
0d3a539b  INC R11
0d3a539e  LEA RBX,[R8 + -0x1]
0d3a53a2  MOV qword ptr [RSP + 0x38],RBX
0d3a53a7  MOV EBX,R12D
0d3a53aa  IMUL EBX,EBP
0d3a53ad  MOV dword ptr [RSP + 0x64],EBX
0d3a53b1  MOV EBX,R8D
0d3a53b4  AND EBX,0x7ffffffc
0d3a53ba  MOV qword ptr [RSP + 0x78],RBX
0d3a53bf  MOV EBX,R8D
0d3a53c2  AND EBX,0x3
0d3a53c5  MOV qword ptr [RSP + 0x20],RBX
0d3a53ca  MOV EBX,EDX
0d3a53cc  SUB EBX,EAX
0d3a53ce  MOV dword ptr [RSP + 0x58],EBX
0d3a53d2  MOV qword ptr [RSP + 0xb0],R11
0d3a53da  AND R11,-0x4
0d3a53de  MOV qword ptr [RSP + 0x18],R11
0d3a53e3  LEA RAX,[R11 + R8*0x1]
0d3a53e7  MOV qword ptr [RSP + 0xa8],RAX
0d3a53ef  MOVQ XMM0,R10
0d3a53f4  PSHUFD XMM0,XMM0,0x44
0d3a53f9  MOV EAX,EBP
0d3a53fb  IMUL EAX,R12D
0d3a53ff  MOV qword ptr [RSP + 0x88],RAX
0d3a5407  XOR EBX,EBX
0d3a5409  MOV R11D,EDX
0d3a540c  XOR R15D,R15D
0d3a540f  XOR EAX,EAX
0d3a5411  MOV qword ptr [RSP + 0x90],R14
0d3a5419  JMP 0x0d3a545b
0d3a5420  MOV EAX,dword ptr [RSP + 0x68]
0d3a5424  INC EAX
0d3a5426  MOV R15,qword ptr [RSP + 0x98]
0d3a542e  ADD R15,qword ptr [RSP + 0x88]
0d3a5436  MOV R14,qword ptr [RSP + 0x90]
0d3a543e  MOV RBX,qword ptr [RSP + 0xa0]
0d3a5446  ADD RBX,R14
0d3a5449  MOV R11D,dword ptr [RSP + 0x6c]
0d3a544e  ADD R11D,R14D
0d3a5451  CMP EAX,dword ptr [RSP + 0x30]
0d3a5455  JZ 0x0d3a59c5
0d3a545b  IMUL R14D,EAX
0d3a545f  MOV EDX,dword ptr [RSP + 0x64]
0d3a5463  MOV dword ptr [RSP + 0x68],EAX
0d3a5467  IMUL EDX,EAX
0d3a546a  MOV dword ptr [RSP + 0x48],EDX
0d3a546e  MOV RAX,qword ptr [RSP + 0x8]
0d3a5473  MOV qword ptr [RSP + 0x50],R14
0d3a5478  ADD EAX,R14D
0d3a547b  MOV dword ptr [RSP + 0x14],EAX
0d3a547f  MOV dword ptr [RSP + 0x6c],R11D
0d3a5484  MOV qword ptr [RSP + 0xa0],RBX
0d3a548c  MOV R14,RBX
0d3a548f  MOV qword ptr [RSP + 0x98],R15
0d3a5497  XOR R13D,R13D
0d3a549a  JMP 0x0d3a54bc
0d3a54a0  INC R13D
0d3a54a3  ADD R14,RCX
0d3a54a6  MOV RBP,qword ptr [RSP + 0x40]
0d3a54ab  ADD R15,RBP
0d3a54ae  ADD R11D,ECX
0d3a54b1  CMP R13D,dword ptr [RSP + 0x10]
0d3a54b6  JZ 0x0d3a5420
0d3a54bc  CMP dword ptr [RSP + 0x8],0x12
0d3a54c1  JNC 0x0d3a5570
0d3a54c7  XOR EAX,EAX
0d3a54c9  MOV RBP,RAX
0d3a54cc  CMP qword ptr [RSP + 0x20],0x0
0d3a54d2  JZ 0x0d3a54f8
0d3a54d4  MOV R12,qword ptr [RSP + 0x20]
0d3a54d9  MOV RBP,RAX
0d3a54dc  NOP dword ptr [RAX]
0d3a54e0  LEA EBX,[R14 + RBP*0x1]
0d3a54e4  LEA EDX,[R15 + RBP*0x1]
0d3a54e8  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a54ec  MOV qword ptr [RDI + RBX*0x8],RDX
0d3a54f0  INC RBP
0d3a54f3  DEC R12
0d3a54f6  JNZ 0x0d3a54e0
0d3a54f8  SUB RAX,R8
0d3a54fb  CMP RAX,-0x4
0d3a54ff  JA 0x0d3a5620
0d3a5505  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a5510  LEA EAX,[R14 + RBP*0x1]
0d3a5514  LEA EDX,[R15 + RBP*0x1]
0d3a5518  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a551c  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a5520  LEA EAX,[R14 + RBP*0x1]
0d3a5524  INC EAX
0d3a5526  LEA EDX,[R15 + RBP*0x1 + 0x1]
0d3a552b  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a552f  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a5533  LEA EAX,[R14 + RBP*0x1 + 0x2]
0d3a5538  LEA EDX,[R15 + RBP*0x1 + 0x2]
0d3a553d  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a5541  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a5545  LEA EAX,[R14 + RBP*0x1 + 0x3]
0d3a554a  LEA EDX,[R15 + RBP*0x1]
0d3a554e  ADD EDX,0x3
0d3a5551  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a5555  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a5559  ADD RBP,0x4
0d3a555d  CMP R8,RBP
0d3a5560  JNZ 0x0d3a5510
0d3a5562  JMP 0x0d3a5620
0d3a5570  MOV EAX,ECX
0d3a5572  IMUL EAX,R13D
0d3a5576  ADD EAX,dword ptr [RSP + 0x50]
0d3a557a  MOV R12D,EBP
0d3a557d  IMUL R12D,R13D
0d3a5581  ADD R12D,dword ptr [RSP + 0x48]
0d3a5586  MOV EBP,R12D
0d3a5589  MOV RDX,qword ptr [RSP + 0x38]
0d3a558e  ADD EBP,EDX
0d3a5590  SETC BPL
0d3a5594  MOV EBX,EAX
0d3a5596  ADD EBX,EDX
0d3a5598  JC 0x0d3a54c7
0d3a559e  TEST BPL,BPL
0d3a55a1  JNZ 0x0d3a54c7
0d3a55a7  MOV RBX,qword ptr [RSP + 0x38]
0d3a55ac  SHR RBX,0x20
0d3a55b0  JNZ 0x0d3a54c7
0d3a55b6  LEA RBX,[RDI + RAX*0x8]
0d3a55ba  LEA RAX,[RSI + R12*0x8]
0d3a55be  SUB RBX,RAX
0d3a55c1  MOV EAX,0x0
0d3a55c6  CMP RBX,0x20
0d3a55ca  JC 0x0d3a54c9
0d3a55d0  MOV EAX,R15D
0d3a55d3  MOV EBP,R14D
0d3a55d6  MOV R12,qword ptr [RSP + 0x78]
0d3a55db  NOP dword ptr [RAX + RAX*0x1]
0d3a55e0  MOV EBX,EAX
0d3a55e2  MOVUPS XMM1,xmmword ptr [RSI + RBX*0x8]
0d3a55e6  MOVUPS XMM2,xmmword ptr [RSI + RBX*0x8 + 0x10]
0d3a55eb  MOV EBX,EBP
0d3a55ed  MOVUPS xmmword ptr [RDI + RBX*0x8],XMM1
0d3a55f1  MOVUPS xmmword ptr [RDI + RBX*0x8 + 0x10],XMM2
0d3a55f6  ADD EBP,0x4
0d3a55f9  ADD EAX,0x4
0d3a55fc  ADD R12,-0x4
0d3a5600  JNZ 0x0d3a55e0
0d3a5602  MOV RDX,qword ptr [RSP + 0x78]
0d3a5607  MOV RAX,RDX
0d3a560a  CMP EDX,R8D
0d3a560d  JNZ 0x0d3a54c9
0d3a5613  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a5620  MOV RAX,R8
0d3a5623  CMP dword ptr [RSP + 0x28],0x5
0d3a5628  JC 0x0d3a5690
0d3a562a  MOV EDX,ECX
0d3a562c  IMUL EDX,R13D
0d3a5630  ADD EDX,dword ptr [RSP + 0x14]
0d3a5634  MOV RAX,R8
0d3a5637  CMP dword ptr [RSP + 0x58],EDX
0d3a563b  JC 0x0d3a5690
0d3a563d  MOV RAX,qword ptr [RSP + 0x18]
0d3a5642  MOV EBP,R11D
0d3a5645  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a5650  MOV EDX,EBP
0d3a5652  MOVDQU xmmword ptr [RDI + RDX*0x8],XMM0
0d3a5657  MOVDQU xmmword ptr [RDI + RDX*0x8 + 0x10],XMM0
0d3a565d  ADD EBP,0x4
0d3a5660  ADD RAX,-0x4
0d3a5664  JNZ 0x0d3a5650
0d3a5666  MOV RAX,qword ptr [RSP + 0xa8]
0d3a566e  MOV RDX,qword ptr [RSP + 0x18]
0d3a5673  CMP qword ptr [RSP + 0xb0],RDX
0d3a567b  JZ 0x0d3a54a0
0d3a5681  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a5690  LEA EDX,[R14 + RAX*0x1]
0d3a5694  MOV qword ptr [RDI + RDX*0x8],R10
0d3a5698  INC EAX
0d3a569a  CMP EAX,R9D
0d3a569d  JL 0x0d3a5690
0d3a569f  JMP 0x0d3a54a0
0d3a56a4  TEST AL,AL
0d3a56a6  JZ 0x0d3a59c5
0d3a56ac  MOV ECX,dword ptr [R15 + 0x14]
0d3a56b0  MOV RDX,qword ptr [R15]
0d3a56b3  MOV RAX,qword ptr [RSP + 0x8]
0d3a56b8  LEA ESI,[RAX + 0x1]
0d3a56bb  CMP ESI,R9D
0d3a56be  CMOVLE ESI,R9D
0d3a56c2  MOV EBP,dword ptr [R15 + 0x18]
0d3a56c6  IMUL EBP,ECX
0d3a56c9  MOV R8D,EAX
0d3a56cc  SUB R8D,ESI
0d3a56cf  SUB ESI,EAX
0d3a56d1  MOV R11D,ESI
0d3a56d4  AND R11D,0xfffffffc
0d3a56d8  LEA EDI,[RAX + R11*0x1]
0d3a56dc  MOV dword ptr [RSP + 0x40],EDI
0d3a56e0  MOVQ XMM0,R10
0d3a56e5  PSHUFD XMM0,XMM0,0x44
0d3a56ea  XOR EDI,EDI
0d3a56ec  XOR R12D,R12D
0d3a56ef  MOV dword ptr [RSP + 0x18],EBP
0d3a56f3  JMP 0x0d3a571e
0d3a5700  INC R12D
0d3a5703  MOV EBP,dword ptr [RSP + 0x18]
0d3a5707  MOV EAX,dword ptr [RSP + 0x28]
0d3a570b  ADD EAX,EBP
0d3a570d  MOV EDI,dword ptr [RSP + 0x20]
0d3a5711  ADD EDI,EBP
0d3a5713  CMP R12D,dword ptr [RSP + 0x30]
0d3a5718  JZ 0x0d3a59c5
0d3a571e  IMUL EBP,R12D
0d3a5722  MOV R15,qword ptr [RSP + 0x8]
0d3a5727  ADD EBP,R15D
0d3a572a  MOV dword ptr [RSP + 0x20],EDI
0d3a572e  MOV R13D,EDI
0d3a5731  MOV dword ptr [RSP + 0x28],EAX
0d3a5735  MOV EDI,EAX
0d3a5737  XOR R14D,R14D
0d3a573a  JMP 0x0d3a574f
0d3a5740  INC R14D
0d3a5743  ADD EDI,ECX
0d3a5745  ADD R13D,ECX
0d3a5748  CMP R14D,dword ptr [RSP + 0x10]
0d3a574d  JZ 0x0d3a5700
0d3a574f  MOV EAX,R15D
0d3a5752  CMP ESI,0x6
0d3a5755  JC 0x0d3a57b0
0d3a5757  MOV R15D,ECX
0d3a575a  IMUL R15D,R14D
0d3a575e  ADD R15D,EBP
0d3a5761  MOV RAX,qword ptr [RSP + 0x8]
0d3a5766  CMP R8D,R15D
0d3a5769  MOV R15,qword ptr [RSP + 0x8]
0d3a576e  JC 0x0d3a57b0
0d3a5770  MOV EAX,R11D
0d3a5773  MOV R15D,EDI
0d3a5776  NOP word ptr CS:[RAX + RAX*0x1]
0d3a5780  MOV EBX,R15D
0d3a5783  MOVDQU xmmword ptr [RDX + RBX*0x8],XMM0
0d3a5788  MOVDQU xmmword ptr [RDX + RBX*0x8 + 0x10],XMM0
0d3a578e  ADD R15D,0x4
0d3a5792  ADD EAX,-0x4
0d3a5795  JNZ 0x0d3a5780
0d3a5797  MOV EAX,dword ptr [RSP + 0x40]
0d3a579b  CMP ESI,R11D
0d3a579e  MOV R15,qword ptr [RSP + 0x8]
0d3a57a3  JZ 0x0d3a5740
0d3a57a5  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a57b0  LEA EBX,[RAX + R13*0x1]
0d3a57b4  MOV qword ptr [RDX + RBX*0x8],R10
0d3a57b8  INC EAX
0d3a57ba  CMP EAX,R9D
0d3a57bd  JL 0x0d3a57b0
0d3a57bf  JMP 0x0d3a5740
0d3a57c4  LEA R9,[R8 + -0x1]
0d3a57c8  MOV EAX,R14D
0d3a57cb  IMUL EAX,ECX
0d3a57ce  MOV dword ptr [RSP + 0x50],EAX
0d3a57d2  IMUL R12D,EBP
0d3a57d6  MOV R11D,R8D
0d3a57d9  AND R11D,0x7ffffffc
0d3a57e0  MOV EBX,R8D
0d3a57e3  AND EBX,0x3
0d3a57e6  MOV EAX,ECX
0d3a57e8  IMUL EAX,R14D
0d3a57ec  MOV qword ptr [RSP + 0x48],RAX
0d3a57f1  XOR R15D,R15D
0d3a57f4  XOR EAX,EAX
0d3a57f6  XOR EDX,EDX
0d3a57f8  MOV qword ptr [RSP + 0x58],R12
0d3a57fd  JMP 0x0d3a5827
0d3a5800  MOV EDX,dword ptr [RSP + 0x14]
0d3a5804  INC EDX
0d3a5806  MOV R12,qword ptr [RSP + 0x58]
0d3a580b  MOV RAX,qword ptr [RSP + 0x38]
0d3a5810  ADD RAX,R12
0d3a5813  MOV R15,qword ptr [RSP + 0x18]
0d3a5818  ADD R15,qword ptr [RSP + 0x48]
0d3a581d  CMP EDX,dword ptr [RSP + 0x30]
0d3a5821  JZ 0x0d3a59c5
0d3a5827  MOV R10D,dword ptr [RSP + 0x50]
0d3a582c  IMUL R10D,EDX
0d3a5830  MOV dword ptr [RSP + 0x20],R10D
0d3a5835  MOV R10D,R12D
0d3a5838  MOV dword ptr [RSP + 0x14],EDX
0d3a583c  IMUL R10D,EDX
0d3a5840  MOV dword ptr [RSP + 0x28],R10D
0d3a5845  MOV qword ptr [RSP + 0x18],R15
0d3a584a  MOV qword ptr [RSP + 0x38],RAX
0d3a584f  MOV R12,RAX
0d3a5852  XOR R13D,R13D
0d3a5855  JMP 0x0d3a5875
0d3a5860  INC R13D
0d3a5863  ADD R15,RCX
0d3a5866  MOV RBP,qword ptr [RSP + 0x40]
0d3a586b  ADD R12,RBP
0d3a586e  CMP R13D,dword ptr [RSP + 0x10]
0d3a5873  JZ 0x0d3a5800
0d3a5875  CMP dword ptr [RSP + 0x8],0x12
0d3a587a  JNC 0x0d3a5920
0d3a5880  XOR EAX,EAX
0d3a5882  MOV R14,RAX
0d3a5885  TEST RBX,RBX
0d3a5888  JZ 0x0d3a58a8
0d3a588a  MOV RBP,RBX
0d3a588d  MOV R14,RAX
0d3a5890  LEA EDX,[R15 + R14*0x1]
0d3a5894  LEA R10D,[R12 + R14*0x1]
0d3a5898  MOV R10,qword ptr [RSI + R10*0x8]
0d3a589c  MOV qword ptr [RDI + RDX*0x8],R10
0d3a58a0  INC R14
0d3a58a3  DEC RBP
0d3a58a6  JNZ 0x0d3a5890
0d3a58a8  SUB RAX,R8
0d3a58ab  CMP RAX,-0x4
0d3a58af  JA 0x0d3a5860
0d3a58b1  NOP dword ptr CS:[RAX + RAX*0x1]
0d3a58c0  LEA EAX,[R15 + R14*0x1]
0d3a58c4  LEA EDX,[R12 + R14*0x1]
0d3a58c8  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a58cc  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a58d0  LEA EAX,[R15 + R14*0x1]
0d3a58d4  INC EAX
0d3a58d6  LEA EDX,[R12 + R14*0x1 + 0x1]
0d3a58db  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a58df  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a58e3  LEA EAX,[R15 + R14*0x1 + 0x2]
0d3a58e8  LEA EDX,[R12 + R14*0x1 + 0x2]
0d3a58ed  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a58f1  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a58f5  LEA EAX,[R15 + R14*0x1 + 0x3]
0d3a58fa  LEA EDX,[R12 + R14*0x1]
0d3a58fe  ADD EDX,0x3
0d3a5901  MOV RDX,qword ptr [RSI + RDX*0x8]
0d3a5905  MOV qword ptr [RDI + RAX*0x8],RDX
0d3a5909  ADD R14,0x4
0d3a590d  CMP R8,R14
0d3a5910  JNZ 0x0d3a58c0
0d3a5912  JMP 0x0d3a5860
0d3a5920  MOV EAX,ECX
0d3a5922  IMUL EAX,R13D
0d3a5926  ADD EAX,dword ptr [RSP + 0x20]
0d3a592a  MOV R14D,EBP
0d3a592d  IMUL R14D,R13D
0d3a5931  ADD R14D,dword ptr [RSP + 0x28]
0d3a5936  MOV EDX,R14D
0d3a5939  ADD EDX,R9D
0d3a593c  SETC BPL
0d3a5940  MOV EDX,EAX
0d3a5942  ADD EDX,R9D
0d3a5945  JC 0x0d3a5880
0d3a594b  TEST BPL,BPL
0d3a594e  JNZ 0x0d3a5880
0d3a5954  MOV RDX,R9
0d3a5957  SHR RDX,0x20
0d3a595b  JNZ 0x0d3a5880
0d3a5961  LEA RDX,[RDI + RAX*0x8]
0d3a5965  LEA RAX,[RSI + R14*0x8]
0d3a5969  SUB RDX,RAX
0d3a596c  MOV EAX,0x0
0d3a5971  CMP RDX,0x20
0d3a5975  JC 0x0d3a5882
0d3a597b  MOV EAX,R12D
0d3a597e  MOV EBP,R15D
0d3a5981  MOV R14,R11
0d3a5984  NOP word ptr CS:[RAX + RAX*0x1]
0d3a5990  MOV EDX,EAX
0d3a5992  MOVDQU XMM0,xmmword ptr [RSI + RDX*0x8]
0d3a5997  MOVUPS XMM1,xmmword ptr [RSI + RDX*0x8 + 0x10]
0d3a599c  MOV EDX,EBP
0d3a599e  MOVDQU xmmword ptr [RDI + RDX*0x8],XMM0
0d3a59a3  MOVUPS xmmword ptr [RDI + RDX*0x8 + 0x10],XMM1
0d3a59a8  ADD EBP,0x4
0d3a59ab  ADD EAX,0x4
0d3a59ae  ADD R14,-0x4
0d3a59b2  JNZ 0x0d3a5990
0d3a59b4  MOV RAX,R11
0d3a59b7  CMP R11D,R8D
0d3a59ba  JZ 0x0d3a5860
0d3a59c0  JMP 0x0d3a5882
0d3a59c5  MOV RAX,qword ptr [RSP + 0x80]
0d3a59cd  TEST RAX,RAX
0d3a59d0  JZ 0x0d3a5ac1
0d3a59d6  MOV RCX,qword ptr [RAX]
0d3a59d9  MOV R8,qword ptr [RAX + 0x8]
0d3a59dd  SUB R8,RCX
0d3a59e0  MOV RDX,R8
0d3a59e3  SAR RDX,0x1
0d3a59e6  TEST RDX,RDX
0d3a59e9  JLE 0x0d3a5ac1
0d3a59ef  MOV RAX,qword ptr [RSP + 0x70]
0d3a59f4  MOVZX EAX,word ptr [RAX + 0x168]
0d3a59fb  CMP RDX,0x4
0d3a59ff  JNC 0x0d3a5a0c
0d3a5a01  MOV R8,RDX
0d3a5a04  MOV R9,RCX
0d3a5a07  JMP 0x0d3a5a9f
0d3a5a0c  MOV RSI,0x7ffffffffffffff0
0d3a5a16  CMP RDX,0x10
0d3a5a1a  JNC 0x0d3a5a20
0d3a5a1c  XOR EDI,EDI
0d3a5a1e  JMP 0x0d3a5a61
0d3a5a20  MOV RDI,RDX
0d3a5a23  AND RDI,RSI
0d3a5a26  MOVD XMM0,EAX
0d3a5a2a  PSHUFLW XMM0,XMM0,0x0
0d3a5a2f  PSHUFD XMM0,XMM0,0x0
0d3a5a34  XOR R9D,R9D
0d3a5a37  NOP word ptr [RAX + RAX*0x1]
0d3a5a40  MOVDQU xmmword ptr [RCX + R9*0x2],XMM0
0d3a5a46  MOVDQU xmmword ptr [RCX + R9*0x2 + 0x10],XMM0
0d3a5a4d  ADD R9,0x10
0d3a5a51  CMP RDI,R9
0d3a5a54  JNZ 0x0d3a5a40
0d3a5a56  CMP RDX,RDI
0d3a5a59  JZ 0x0d3a5ac1
0d3a5a5b  TEST R8B,0x18
0d3a5a5f  JZ 0x0d3a5a95
0d3a5a61  ADD RSI,0xc
0d3a5a65  AND RSI,RDX
0d3a5a68  MOV R8D,EDX
0d3a5a6b  AND R8D,0x3
0d3a5a6f  LEA R9,[RCX + RSI*0x2]
0d3a5a73  MOVD XMM0,EAX
0d3a5a77  PSHUFLW XMM0,XMM0,0x0
0d3a5a7c  NOP dword ptr [RAX]
0d3a5a80  MOVQ qword ptr [RCX + RDI*0x2],XMM0
0d3a5a85  ADD RDI,0x4
0d3a5a89  CMP RSI,RDI
0d3a5a8c  JNZ 0x0d3a5a80
0d3a5a8e  CMP RDX,RSI
0d3a5a91  JNZ 0x0d3a5a9f
0d3a5a93  JMP 0x0d3a5ac1
0d3a5a95  AND EDX,0xf
0d3a5a98  LEA R9,[RCX + RDI*0x2]
0d3a5a9c  MOV R8,RDX
0d3a5a9f  INC R8
0d3a5aa2  NOP word ptr CS:[RAX + RAX*0x1]
0d3a5ab0  MOV word ptr [R9],AX
0d3a5ab4  ADD R9,0x2
0d3a5ab8  DEC R8
0d3a5abb  CMP R8,0x1
0d3a5abf  JA 0x0d3a5ab0
0d3a5ac1  ADD RSP,0xb8
0d3a5ac8  POP RBX
0d3a5ac9  POP R12
0d3a5acb  POP R13
0d3a5acd  POP R14
0d3a5acf  POP R15
0d3a5ad1  POP RBP
0d3a5ad2  RET
```

## `0d3a5b10` — FlatWorldGenerator slot 48

- Ghidra name: `FUN_0d3a5b10`
- Body: `[[0d3a5b10, 0d3a5b3f]]`

### Pseudocode

```c

undefined8 FUN_0d3a5b10(undefined8 param_1,long param_2)

{
  undefined *puStack_18;
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_2 + 0x158);
  puStack_18 = &UNK_0f3dc940;
  FUN_0c851650(param_1,&puStack_18);
  return param_1;
}


```

### Assembly

```asm
0d3a5b10  PUSH RBX
0d3a5b11  SUB RSP,0x10
0d3a5b15  MOV RBX,RDI
0d3a5b18  MOV RAX,qword ptr [RSI + 0x158]
0d3a5b1f  LEA RSI,[0xf3dc940]
0d3a5b26  MOV qword ptr [RSP],RSI
0d3a5b2a  MOV qword ptr [RSP + 0x8],RAX
0d3a5b2f  MOV RSI,RSP
0d3a5b32  CALL 0x0c851650
0d3a5b37  MOV RAX,RBX
0d3a5b3a  ADD RSP,0x10
0d3a5b3e  POP RBX
0d3a5b3f  RET
```

## `0d3a5b50` — FlatWorldGenerator slot 49

- Ghidra name: `FUN_0d3a5b50`
- Body: `[[0d3a5b50, 0d3a5b57]]`

### Pseudocode

```c

undefined8 FUN_0d3a5b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}


```

### Assembly

```asm
0d3a5b50  MOV RAX,qword ptr [RDI + 0x160]
0d3a5b57  RET
```

## `0d3a5b60` — FlatWorldGenerator slot 50

- Ghidra name: `FUN_0d3a5b60`
- Body: `[[0d3a5b60, 0d3a5b79]]`

### Pseudocode

```c

undefined1  [16] FUN_0d3a5b60(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = *(undefined4 *)(param_1 + 0x140);
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x138);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x13c);
  auVar1._12_4_ = 0;
  return auVar1;
}


```

### Assembly

```asm
0d3a5b60  MOV ECX,dword ptr [RDI + 0x138]
0d3a5b66  MOV EDX,dword ptr [RDI + 0x13c]
0d3a5b6c  MOV EAX,dword ptr [RDI + 0x140]
0d3a5b72  SHL RAX,0x20
0d3a5b76  OR RAX,RCX
0d3a5b79  RET
```

## `0d3a5b40` — FlatWorldGenerator slot 51

- Ghidra name: `FUN_0d3a5b40`
- Body: `[[0d3a5b40, 0d3a5b4c]]`

### Pseudocode

```c

undefined1  [16] FUN_0d3a5b40(void)

{
  return ZEXT816(0x7fff00000000);
}


```

### Assembly

```asm
0d3a5b40  MOV RAX,0x7fff00000000
0d3a5b4a  XOR EDX,EDX
0d3a5b4c  RET
```

## `0d3a5af0` — FlatWorldGenerator slot 55

- Ghidra name: `FUN_0d3a5af0`
- Body: `[[0d3a5af0, 0d3a5af0]]`

### Pseudocode

```c

void FUN_0d3a5af0(void)

{
  return;
}


```

### Assembly

```asm
0d3a5af0  RET
```

## `0d3a5b00` — FlatWorldGenerator slot 56

- Ghidra name: `FUN_0d3a5b00`
- Body: `[[0d3a5b00, 0d3a5b00]]`

### Pseudocode

```c

void FUN_0d3a5b00(void)

{
  return;
}


```

### Assembly

```asm
0d3a5b00  RET
```

## `0d3c38b0` — FlatWorldGenerator slot 0

- Ghidra name: `FUN_0d3c38b0`
- Body: `[[0d3c38b0, 0d3c391d]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0cb3ae75: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb3aed9: Changing call to branch */

void FUN_0d3c38b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  param_1[-0xe] = &UNK_0f462370;
  *param_1 = &UNK_0f462548;
  plVar6 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puVar2 = param_1 + -0xe;
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    param_1[0x15] = lVar4;
    func_0x0412a280(lVar4,param_1[0x16] - lVar4);
  }
  *puVar2 = &UNK_0f3ed048;
  *param_1 = &UNK_0f3ed220;
  func_0x0eee11d0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x10];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    func_0x0412a280(puVar5,0x18);
    puVar5 = puVar3;
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    func_0x0412a280(lVar4,param_1[0xf] << 3);
  }
  func_0x04136a00(param_1 + 7);
  lVar4 = param_1[1];
  param_1[1] = 0;
  if (lVar4 != 0) {
    func_0x0d352b40(lVar4);
    func_0x0412a280(lVar4,0x1c8);
  }
  *puVar2 = &UNK_0f3f0e90;
  if (param_1[-1] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-2] != 0) {
        (**(code **)(**(long **)(param_1[-2] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-1] != 0) {
      func_0x0412c2d0();
    }
  }
  if (param_1[-3] != 0) {
    plVar6 = (long *)func_0x0412c300();
    if (plVar6 != (long *)0x0) {
      if (param_1[-4] != 0) {
        (**(code **)(**(long **)(param_1[-4] + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto SUB_0412c2d0;
      }
    }
    if (param_1[-3] != 0) {
      func_0x0412c2d0();
    }
  }
  plVar6 = (long *)param_1[-7];
  param_1[-7] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *puVar2 = &UNK_0f534768;
  plVar6 = (long *)param_1[-0xc];
  if (plVar6 == (long *)0x0) {
    *(undefined1 *)param_1[-0xd] = 0;
    return;
  }
  *(undefined1 *)param_1[-0xd] = 0;
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
SUB_0412c2d0:
  if (plVar6[2] != 0) {
    LOCK();
    plVar1 = plVar6 + 2;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


```

### Assembly

```asm
0d3c38b0  PUSH R14
0d3c38b2  PUSH RBX
0d3c38b3  PUSH RAX
0d3c38b4  MOV RBX,RDI
0d3c38b7  LEA RAX,[0xf462370]
0d3c38be  MOV qword ptr [RDI + -0x70],RAX
0d3c38c2  LEA RAX,[0xf462548]
0d3c38c9  MOV qword ptr [RDI],RAX
0d3c38cc  MOV RDI,qword ptr [RDI + 0xf0]
0d3c38d3  MOV qword ptr [RBX + 0xf0],0x0
0d3c38de  TEST RDI,RDI
0d3c38e1  JZ 0x0d3c38e9
0d3c38e3  MOV RAX,qword ptr [RDI]
0d3c38e6  CALL qword ptr [RAX + 0x8]
0d3c38e9  LEA R14,[RBX + -0x70]
0d3c38ed  MOV RDI,qword ptr [RBX + 0xa0]
0d3c38f4  TEST RDI,RDI
0d3c38f7  JZ 0x0d3c390f
0d3c38f9  MOV qword ptr [RBX + 0xa8],RDI
0d3c3900  MOV RSI,qword ptr [RBX + 0xb0]
0d3c3907  SUB RSI,RDI
0d3c390a  CALL 0x0412a280
0d3c390f  MOV RDI,R14
0d3c3912  ADD RSP,0x8
0d3c3916  POP RBX
0d3c3917  POP R14
0d3c3919  JMP 0x0ca70460
```

## `0d3c3920` — FlatWorldGenerator slot 1

- Ghidra name: `FUN_0d3c3920`
- Body: `[[0d3c3920, 0d3c399a] [0ee326a0, 0ee326bb]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0d3c397a: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d3c3920(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_20 [2];
  
  param_1[-0xe] = &UNK_0f462370;
  puVar4 = &UNK_0f462548;
  *param_1 = &UNK_0f462548;
  plVar1 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar1 != (long *)0x0) {
    auStack_20[0] = 0xd3c3959;
    puVar4 = (undefined *)(**(code **)(*plVar1 + 8))();
  }
  puVar5 = param_1 + -0xe;
  puVar2 = (undefined8 *)param_1[0x14];
  if (puVar2 == (undefined8 *)0x0) {
    auStack_20[0] = 0xd3c3987;
    puVar4 = (undefined *)FUN_0ca70460(puVar5);
  }
  else {
    param_1[0x15] = puVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0xd3c397f;
    puVar5 = puVar2;
  }
  *(undefined **)((long)register0x00000020 + -8) = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,puVar5);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
0d3c3920  PUSH R14
0d3c3922  PUSH RBX
0d3c3923  PUSH RAX
0d3c3924  MOV RBX,RDI
0d3c3927  LEA RAX,[0xf462370]
0d3c392e  MOV qword ptr [RDI + -0x70],RAX
0d3c3932  LEA RAX,[0xf462548]
0d3c3939  MOV qword ptr [RDI],RAX
0d3c393c  MOV RDI,qword ptr [RDI + 0xf0]
0d3c3943  MOV qword ptr [RBX + 0xf0],0x0
0d3c394e  TEST RDI,RDI
0d3c3951  JZ 0x0d3c3959
0d3c3953  MOV RAX,qword ptr [RDI]
0d3c3956  CALL qword ptr [RAX + 0x8]
0d3c3959  LEA R14,[RBX + -0x70]
0d3c395d  MOV RDI,qword ptr [RBX + 0xa0]
0d3c3964  TEST RDI,RDI
0d3c3967  JZ 0x0d3c397f
0d3c3969  MOV qword ptr [RBX + 0xa8],RDI
0d3c3970  MOV RSI,qword ptr [RBX + 0xb0]
0d3c3977  SUB RSI,RDI
0d3c397a  CALL 0x0412a280
0d3c397f  MOV RDI,R14
0d3c3982  CALL 0x0ca70460
0d3c3987  MOV ESI,0x170
0d3c398c  MOV RDI,R14
0d3c398f  ADD RSP,0x8
0d3c3993  POP RBX
0d3c3994  POP R14
0d3c3996  JMP 0x0412a280
0ee326a0  PUSH RAX
0ee326a1  TEST RDI,RDI
0ee326a4  JZ 0x0ee326ba
0ee326a6  MOV RSI,RDI
0ee326a9  LEA RDI,[0xf5463b0]
0ee326b0  MOV RAX,qword ptr [0x0f5463b0]
0ee326b7  CALL qword ptr [RAX + 0x18]
0ee326ba  POP RAX
0ee326bb  RET
```

## `0495d8e0` — XoroshiroRandom slot 0

- Ghidra name: `FUN_0495d8e0`
- Body: `[[0495d8e0, 0495d8e0]]`

### Pseudocode

```c

void FUN_0495d8e0(void)

{
  return;
}


```

### Assembly

```asm
0495d8e0  RET
```

## `049ca700` — XoroshiroRandom slot 1

- Ghidra name: `FUN_049ca700`
- Body: `[[049ca700, 049ca709]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_049ca700(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

### Assembly

```asm
049ca700  MOV ESI,0x28
049ca705  JMP 0x0412a280
```

## `049ca710` — XoroshiroRandom slot 2

- Ghidra name: `FUN_049ca710`
- Body: `[[049ca710, 049ca742]]`

### Pseudocode

```c

int FUN_049ca710(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  lVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar2;
}


```

### Assembly

```asm
049ca710  MOV RCX,qword ptr [RDI + 0x8]
049ca714  MOV RDX,qword ptr [RDI + 0x10]
049ca718  LEA RAX,[RDX + RCX*0x1]
049ca71c  ROL RAX,0x11
049ca720  ADD EAX,ECX
049ca722  XOR RDX,RCX
049ca725  ROL RCX,0x31
049ca729  MOV RSI,RDX
049ca72c  SHL RSI,0x15
049ca730  XOR RSI,RCX
049ca733  XOR RSI,RDX
049ca736  MOV qword ptr [RDI + 0x8],RSI
049ca73a  ROL RDX,0x1c
049ca73e  MOV qword ptr [RDI + 0x10],RDX
049ca742  RET
```

## `049ca750` — XoroshiroRandom slot 3

- Ghidra name: `FUN_049ca750`
- Body: `[[049ca750, 049ca7da]]`

### Pseudocode

```c

ulong FUN_049ca750(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar1 = *(ulong *)(param_1 + 0x10) + uVar3;
  uVar4 = *(ulong *)(param_1 + 0x10) ^ uVar3;
  uVar5 = uVar4 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar4;
  *(ulong *)(param_1 + 8) = uVar5;
  uVar4 = uVar4 << 0x1c | uVar4 >> 0x24;
  *(ulong *)(param_1 + 0x10) = uVar4;
  uVar3 = (ulong)(((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar3) *
          (ulong)param_2;
  if (((uint)uVar3 < param_2) && ((uint)uVar3 < -param_2 % param_2)) {
    do {
      lVar1 = uVar4 + uVar5;
      iVar2 = (int)uVar5;
      uVar4 = uVar4 ^ uVar5;
      uVar5 = (uVar5 << 0x31 | uVar5 >> 0xf) ^ uVar4 << 0x15 ^ uVar4;
      uVar4 = uVar4 << 0x1c | uVar4 >> 0x24;
      uVar3 = (ulong)(iVar2 + ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f))) *
              (ulong)param_2;
    } while ((uint)uVar3 < -param_2 % param_2);
    *(ulong *)(param_1 + 8) = uVar5;
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  return uVar3 >> 0x20;
}


```

### Assembly

```asm
049ca750  MOV RAX,qword ptr [RDI + 0x8]
049ca754  MOV R8,qword ptr [RDI + 0x10]
049ca758  LEA RCX,[R8 + RAX*0x1]
049ca75c  ROL RCX,0x11
049ca760  ADD ECX,EAX
049ca762  XOR R8,RAX
049ca765  ROL RAX,0x31
049ca769  MOV R9,R8
049ca76c  SHL R9,0x15
049ca770  XOR R9,RAX
049ca773  XOR R9,R8
049ca776  MOV qword ptr [RDI + 0x8],R9
049ca77a  ROL R8,0x1c
049ca77e  MOV qword ptr [RDI + 0x10],R8
049ca782  MOV R10D,ESI
049ca785  IMUL RCX,R10
049ca789  CMP ESI,ECX
049ca78b  JBE 0x049ca7d4
049ca78d  MOV EAX,ESI
049ca78f  NEG EAX
049ca791  XOR EDX,EDX
049ca793  DIV ESI
049ca795  CMP EDX,ECX
049ca797  JBE 0x049ca7d4
049ca799  NOP dword ptr [RAX]
049ca7a0  LEA RAX,[R8 + R9*0x1]
049ca7a4  ROL RAX,0x11
049ca7a8  LEA ECX,[R9 + RAX*0x1]
049ca7ac  XOR R8,R9
049ca7af  ROL R9,0x31
049ca7b3  MOV RAX,R8
049ca7b6  SHL RAX,0x15
049ca7ba  XOR R9,RAX
049ca7bd  XOR R9,R8
049ca7c0  ROL R8,0x1c
049ca7c4  IMUL RCX,R10
049ca7c8  CMP EDX,ECX
049ca7ca  JA 0x049ca7a0
049ca7cc  MOV qword ptr [RDI + 0x8],R9
049ca7d0  MOV qword ptr [RDI + 0x10],R8
049ca7d4  SHR RCX,0x20
049ca7d8  MOV EAX,ECX
049ca7da  RET
```

## `049ca7e0` — XoroshiroRandom slot 4

- Ghidra name: `FUN_049ca7e0`
- Body: `[[049ca7e0, 049ca813]]`

### Pseudocode

```c

long FUN_049ca7e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar2;
}


```

### Assembly

```asm
049ca7e0  MOV RCX,qword ptr [RDI + 0x8]
049ca7e4  MOV RDX,qword ptr [RDI + 0x10]
049ca7e8  LEA RAX,[RDX + RCX*0x1]
049ca7ec  ROL RAX,0x11
049ca7f0  ADD RAX,RCX
049ca7f3  XOR RDX,RCX
049ca7f6  ROL RCX,0x31
049ca7fa  MOV RSI,RDX
049ca7fd  SHL RSI,0x15
049ca801  XOR RSI,RCX
049ca804  XOR RSI,RDX
049ca807  MOV qword ptr [RDI + 0x8],RSI
049ca80b  ROL RDX,0x1c
049ca80f  MOV qword ptr [RDI + 0x10],RDX
049ca813  RET
```

## `049ca820` — XoroshiroRandom slot 5

- Ghidra name: `FUN_049ca820`
- Body: `[[049ca820, 049ca854]]`

### Pseudocode

```c

uint FUN_049ca820(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar2 ^ uVar1;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar1 << 0x31 | uVar1 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (uint)(uVar2 + uVar1 >> 0x2f) + (int)uVar1 & 0xffffff01;
}


```

### Assembly

```asm
049ca820  MOV RCX,qword ptr [RDI + 0x8]
049ca824  MOV RDX,qword ptr [RDI + 0x10]
049ca828  LEA RAX,[RDX + RCX*0x1]
049ca82c  SHR RAX,0x2f
049ca830  ADD EAX,ECX
049ca832  XOR RDX,RCX
049ca835  ROL RCX,0x31
049ca839  MOV RSI,RDX
049ca83c  SHL RSI,0x15
049ca840  XOR RSI,RCX
049ca843  XOR RSI,RDX
049ca846  ROL RDX,0x1c
049ca84a  MOV qword ptr [RDI + 0x8],RSI
049ca84e  MOV qword ptr [RDI + 0x10],RDX
049ca852  AND AL,0x1
049ca854  RET
```

## `049ca860` — XoroshiroRandom slot 6

- Ghidra name: `FUN_049ca860`
- Body: `[[049ca860, 049ca8a3]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_049ca860(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (float)(uint)((uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar2 >> 0x28) * _DAT_01198a44;
}


```

### Assembly

```asm
049ca860  MOV RAX,qword ptr [RDI + 0x8]
049ca864  MOV RCX,qword ptr [RDI + 0x10]
049ca868  LEA RDX,[RCX + RAX*0x1]
049ca86c  ROL RDX,0x11
049ca870  ADD RDX,RAX
049ca873  XOR RCX,RAX
049ca876  ROL RAX,0x31
049ca87a  MOV RSI,RCX
049ca87d  SHL RSI,0x15
049ca881  XOR RSI,RAX
049ca884  XOR RSI,RCX
049ca887  MOV qword ptr [RDI + 0x8],RSI
049ca88b  ROL RCX,0x1c
049ca88f  SHR RDX,0x28
049ca893  CVTSI2SS XMM0,EDX
049ca897  MOV qword ptr [RDI + 0x10],RCX
049ca89b  MULSS XMM0,dword ptr [0x01198a44]
049ca8a3  RET
```

## `049ca8b0` — XoroshiroRandom slot 7

- Ghidra name: `FUN_049ca8b0`
- Body: `[[049ca8b0, 049ca8f4]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_049ca8b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10) + uVar2;
  uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;
  *(ulong *)(param_1 + 8) = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return (double)((uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar2 >> 0xb) * _DAT_014f04b8;
}


```

### Assembly

```asm
049ca8b0  MOV RAX,qword ptr [RDI + 0x8]
049ca8b4  MOV RCX,qword ptr [RDI + 0x10]
049ca8b8  LEA RDX,[RCX + RAX*0x1]
049ca8bc  ROL RDX,0x11
049ca8c0  ADD RDX,RAX
049ca8c3  XOR RCX,RAX
049ca8c6  ROL RAX,0x31
049ca8ca  MOV RSI,RCX
049ca8cd  SHL RSI,0x15
049ca8d1  XOR RSI,RAX
049ca8d4  XOR RSI,RCX
049ca8d7  ROL RCX,0x1c
049ca8db  MOV qword ptr [RDI + 0x8],RSI
049ca8df  SHR RDX,0xb
049ca8e3  CVTSI2SD XMM0,RDX
049ca8e8  MOV qword ptr [RDI + 0x10],RCX
049ca8ec  MULSD XMM0,qword ptr [0x014f04b8]
049ca8f4  RET
```

## `049ca900` — XoroshiroRandom slot 8

- Ghidra name: `FUN_049ca900`
- Body: `[[049ca900, 049caa58]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_049ca900(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    return *(double *)(param_1 + 0x18);
  }
  uVar4 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  do {
    do {
      uVar1 = uVar3 ^ uVar4;
      uVar5 = uVar1 << 0x15 ^ (uVar4 << 0x31 | uVar4 >> 0xf) ^ uVar1;
      uVar2 = uVar1 << 0x1c | uVar1 >> 0x24;
      dVar7 = (double)(((uVar4 + uVar3) * 0x20000 | uVar4 + uVar3 >> 0x2f) + uVar4 >> 0xb) *
              _DAT_014f04b8;
      uVar1 = uVar5 + uVar2;
      uVar2 = uVar2 ^ uVar5;
      dVar8 = dVar7 + dVar7 + _DAT_014f0160;
      uVar4 = uVar2 << 0x15 ^ (uVar5 << 0x31 | uVar5 >> 0xf) ^ uVar2;
      uVar3 = uVar2 << 0x1c | uVar2 >> 0x24;
      dVar7 = (double)((uVar1 * 0x20000 | uVar1 >> 0x2f) + uVar5 >> 0xb) * _DAT_014f04b8;
      dVar9 = dVar7 + dVar7 + _DAT_014f0160;
      dVar7 = dVar9 * dVar9 + dVar8 * dVar8;
    } while (_DAT_014f0478 <= dVar7);
  } while ((dVar7 == 0.0) && (!NAN(dVar7)));
  *(ulong *)(param_1 + 8) = uVar4;
  *(ulong *)(param_1 + 0x10) = uVar3;
  dVar6 = (double)func_0x0eee37c0();
  dVar7 = (dVar6 * _DAT_014f04a0) / dVar7;
  if (dVar7 < 0.0) {
    dVar7 = (double)func_0x0eee3800();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  *(double *)(param_1 + 0x18) = dVar9 * dVar7;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return dVar8 * dVar7;
}


```

### Assembly

```asm
049ca900  PUSH RBX
049ca901  SUB RSP,0x20
049ca905  MOV RBX,RDI
049ca908  CMP byte ptr [RDI + 0x20],0x0
049ca90c  JZ 0x049ca91d
049ca90e  MOV byte ptr [RBX + 0x20],0x0
049ca912  MOVSD XMM0,qword ptr [RBX + 0x18]
049ca917  ADD RSP,0x20
049ca91b  POP RBX
049ca91c  RET
049ca91d  MOV RCX,qword ptr [RBX + 0x8]
049ca921  MOV RAX,qword ptr [RBX + 0x10]
049ca925  MOVSD XMM7,qword ptr [0x014f04b8]
049ca92d  MOVSD XMM1,qword ptr [0x014f0160]
049ca935  MOVSD XMM2,qword ptr [0x014f0478]
049ca93d  XORPD XMM3,XMM3
049ca941  NOP dword ptr CS:[RAX + RAX*0x1]
049ca950  LEA RDX,[RCX + RAX*0x1]
049ca954  ROL RDX,0x11
049ca958  ADD RDX,RCX
049ca95b  XOR RAX,RCX
049ca95e  ROL RCX,0x31
049ca962  MOV RSI,RAX
049ca965  SHL RSI,0x15
049ca969  XOR RSI,RCX
049ca96c  XOR RSI,RAX
049ca96f  ROL RAX,0x1c
049ca973  SHR RDX,0xb
049ca977  XORPS XMM5,XMM5
049ca97a  CVTSI2SD XMM5,RDX
049ca97f  MULSD XMM5,XMM7
049ca983  ADDSD XMM5,XMM5
049ca987  LEA RDX,[RSI + RAX*0x1]
049ca98b  ROL RDX,0x11
049ca98f  ADD RDX,RSI
049ca992  XOR RAX,RSI
049ca995  ROL RSI,0x31
049ca999  ADDSD XMM5,XMM1
049ca99d  MOV RCX,RAX
049ca9a0  SHL RCX,0x15
049ca9a4  XOR RCX,RSI
049ca9a7  XOR RCX,RAX
049ca9aa  ROL RAX,0x1c
049ca9ae  SHR RDX,0xb
049ca9b2  XORPS XMM6,XMM6
049ca9b5  CVTSI2SD XMM6,RDX
049ca9ba  MULSD XMM6,XMM7
049ca9be  ADDSD XMM6,XMM6
049ca9c2  ADDSD XMM6,XMM1
049ca9c6  MOVAPD XMM4,XMM5
049ca9ca  MULSD XMM4,XMM5
049ca9ce  MOVAPD XMM0,XMM6
049ca9d2  MULSD XMM0,XMM6
049ca9d6  ADDSD XMM0,XMM4
049ca9da  UCOMISD XMM0,XMM2
049ca9de  JNC 0x049ca950
049ca9e4  UCOMISD XMM0,XMM3
049ca9e8  JNZ 0x049ca9f0
049ca9ea  JNP 0x049ca950
049ca9f0  MOVSD qword ptr [RSP + 0x10],XMM6
049ca9f6  MOVSD qword ptr [RSP + 0x18],XMM5
049ca9fc  MOV qword ptr [RBX + 0x8],RCX
049caa00  MOV qword ptr [RBX + 0x10],RAX
049caa04  MOVSD qword ptr [RSP + 0x8],XMM0
049caa0a  CALL 0x0eee37c0
049caa0f  MULSD XMM0,qword ptr [0x014f04a0]
049caa17  DIVSD XMM0,qword ptr [RSP + 0x8]
049caa1d  XORPD XMM1,XMM1
049caa21  UCOMISD XMM0,XMM1
049caa25  JC 0x049caa2d
049caa27  SQRTSD XMM0,XMM0
049caa2b  JMP 0x049caa32
049caa2d  CALL 0x0eee3800
049caa32  MOVSD XMM1,qword ptr [RSP + 0x10]
049caa38  MULSD XMM1,XMM0
049caa3c  MOVSD qword ptr [RBX + 0x18],XMM1
049caa41  MOV byte ptr [RBX + 0x20],0x1
049caa45  MOVSD XMM1,qword ptr [RSP + 0x18]
049caa4b  MULSD XMM1,XMM0
049caa4f  MOVAPD XMM0,XMM1
049caa53  ADD RSP,0x20
049caa57  POP RBX
049caa58  RET
```

## `049caa60` — XoroshiroRandom slot 9

- Ghidra name: `FUN_049caa60`
- Body: `[[049caa60, 049caade]]`

### Pseudocode

```c

void FUN_049caa60(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (param_2 != 1) {
      uVar2 = param_2 & 0xfffffffe;
      do {
        uVar1 = uVar1 ^ uVar3;
        uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
        uVar1 = (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar3;
        uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
        uVar1 = uVar1 << 0x1c | uVar1 >> 0x24;
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      uVar1 = uVar1 ^ uVar3;
      uVar3 = uVar1 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar1;
      uVar1 = uVar1 << 0x1c | uVar1 >> 0x24;
    }
    *(ulong *)(param_1 + 8) = uVar3;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}


```

### Assembly

```asm
049caa60  TEST ESI,ESI
049caa62  JZ 0x049caade
049caa64  MOV RCX,qword ptr [RDI + 0x8]
049caa68  MOV RAX,qword ptr [RDI + 0x10]
049caa6c  CMP ESI,0x1
049caa6f  JZ 0x049caab5
049caa71  MOV EDX,ESI
049caa73  AND EDX,0xfffffffe
049caa76  NOP word ptr CS:[RAX + RAX*0x1]
049caa80  XOR RAX,RCX
049caa83  ROL RCX,0x31
049caa87  MOV R8,RAX
049caa8a  SHL R8,0x15
049caa8e  XOR R8,RCX
049caa91  XOR R8,RAX
049caa94  ROL RAX,0x1c
049caa98  XOR RAX,R8
049caa9b  ROL R8,0x31
049caa9f  MOV RCX,RAX
049caaa2  SHL RCX,0x15
049caaa6  XOR RCX,R8
049caaa9  XOR RCX,RAX
049caaac  ROL RAX,0x1c
049caab0  ADD EDX,-0x2
049caab3  JNZ 0x049caa80
049caab5  TEST SIL,0x1
049caab9  JZ 0x049caad6
049caabb  XOR RAX,RCX
049caabe  ROL RCX,0x31
049caac2  MOV RDX,RAX
049caac5  SHL RDX,0x15
049caac9  XOR RDX,RCX
049caacc  XOR RDX,RAX
049caacf  ROL RAX,0x1c
049caad3  MOV RCX,RDX
049caad6  MOV qword ptr [RDI + 0x8],RCX
049caada  MOV qword ptr [RDI + 0x10],RAX
049caade  RET
```

## `0495b6e0` — XoroshiroRandom slot 10

- Ghidra name: `FUN_0495b6e0`
- Body: `[[0495b6e0, 0495b7a3]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0495b6e0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  uVar4 = uVar6 ^ uVar1;
  uVar3 = uVar4 << 0x15 ^ (uVar1 << 0x31 | uVar1 >> 0xf) ^ uVar4;
  uVar5 = uVar4 << 0x1c | uVar4 >> 0x24;
  uVar4 = uVar3 ^ uVar5;
  *(ulong *)(param_2 + 8) = uVar4 << 0x15 ^ (uVar3 << 0x31 | uVar3 >> 0xf) ^ uVar4;
  *(ulong *)(param_2 + 0x10) = uVar4 << 0x1c | uVar4 >> 0x24;
  puVar2 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar2 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  uVar5 = uVar5 + uVar3;
  uVar6 = uVar6 + uVar1;
  *puVar2 = &UNK_0ef51388;
  puVar2[1] = (uVar6 * 0x20000 | uVar6 >> 0x2f) + uVar1;
  puVar2[2] = (uVar5 * 0x20000 | uVar5 >> 0x2f) + uVar3;
  *param_1 = puVar2;
  return param_1;
}


```

### Assembly

```asm
0495b6e0  PUSH RBP
0495b6e1  PUSH R15
0495b6e3  PUSH R14
0495b6e5  PUSH R13
0495b6e7  PUSH R12
0495b6e9  PUSH RBX
0495b6ea  PUSH RAX
0495b6eb  MOV R12,qword ptr [RSI + 0x8]
0495b6ef  MOV R15,qword ptr [RSI + 0x10]
0495b6f3  MOV R14,R15
0495b6f6  XOR R14,R12
0495b6f9  MOV RAX,R12
0495b6fc  ROL RAX,0x31
0495b700  MOV R13,R14
0495b703  SHL R13,0x15
0495b707  XOR R13,RAX
0495b70a  XOR R13,R14
0495b70d  ROL R14,0x1c
0495b711  MOV RBX,RDI
0495b714  MOV RAX,R13
0495b717  XOR RAX,R14
0495b71a  MOV RCX,R13
0495b71d  ROL RCX,0x31
0495b721  MOV RDX,RAX
0495b724  SHL RDX,0x15
0495b728  XOR RDX,RCX
0495b72b  XOR RDX,RAX
0495b72e  ROL RAX,0x1c
0495b732  MOV qword ptr [RSI + 0x8],RDX
0495b736  MOV qword ptr [RSI + 0x10],RAX
0495b73a  MOV RAX,qword ptr [0x0f5463b0]
0495b741  LEA RDI,[0xf5463b0]
0495b748  MOV ESI,0x18
0495b74d  CALL qword ptr [RAX + 0x10]
0495b750  TEST RAX,RAX
0495b753  JZ 0x0495b790
0495b755  ADD R14,R13
0495b758  ROL R14,0x11
0495b75c  ADD R15,R12
0495b75f  ROL R15,0x11
0495b763  ADD R14,R13
0495b766  ADD R15,R12
0495b769  LEA RCX,[0xef51388]
0495b770  MOV qword ptr [RAX],RCX
0495b773  MOV qword ptr [RAX + 0x8],R15
0495b777  MOV qword ptr [RAX + 0x10],R14
0495b77b  MOV qword ptr [RBX],RAX
0495b77e  MOV RAX,RBX
0495b781  ADD RSP,0x8
0495b785  POP RBX
0495b786  POP R12
0495b788  POP R13
0495b78a  POP R14
0495b78c  POP R15
0495b78e  POP RBP
0495b78f  RET
0495b790  MOV EDI,0x18
0495b795  XOR ESI,ESI
0495b797  MOV RBP,RAX
0495b79a  CALL 0x0eec74c0
0495b79f  MOV RAX,RBP
0495b7a2  JMP 0x0495b755
```

## `049caae0` — XoroshiroRandom slot 11

- Ghidra name: `FUN_049caae0`
- Body: `[[049caae0, 049caafe]]`

### Pseudocode

```c

bool FUN_049caae0(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_3) {
    bVar1 = true;
    if (param_2 < param_3) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      bVar1 = iVar2 < param_2;
    }
    return bVar1;
  }
  return false;
}


```

### Assembly

```asm
049caae0  TEST EDX,EDX
049caae2  JLE 0x049caafc
049caae4  MOV AL,0x1
049caae6  CMP ESI,EDX
049caae8  JGE 0x049caafb
049caaea  PUSH RBX
049caaeb  MOV RAX,qword ptr [RDI]
049caaee  MOV EBX,ESI
049caaf0  MOV ESI,EDX
049caaf2  CALL qword ptr [RAX + 0x18]
049caaf5  CMP EBX,EAX
049caaf7  SETG AL
049caafa  POP RBX
049caafb  RET
049caafc  XOR EAX,EAX
049caafe  RET
```

## `049cab00` — XoroshiroRandom slot 12

- Ghidra name: `FUN_049cab00`
- Body: `[[049cab00, 049cab0f]]`

### Pseudocode

```c

void FUN_049cab00(long *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x049cab0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,1,param_2);
  return;
}


```

### Assembly

```asm
049cab00  MOV EDX,ESI
049cab02  MOV RAX,qword ptr [RDI]
049cab05  MOV RAX,qword ptr [RAX + 0x58]
049cab09  MOV ESI,0x1
049cab0e  JMP RAX
```

## `049cab10` — XoroshiroRandom slot 13

- Ghidra name: `FUN_049cab10`
- Body: `[[049cab10, 049cab1d]]`

### Pseudocode

```c

void FUN_049cab10(long *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x049cab1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,param_2 + -1);
  return;
}


```

### Assembly

```asm
049cab10  MOV EDX,ESI
049cab12  LEA ESI,[RDX + -0x1]
049cab15  MOV RAX,qword ptr [RDI]
049cab18  MOV RAX,qword ptr [RAX + 0x58]
049cab1c  JMP RAX
```

## `049cab20` — XoroshiroRandom slot 14

- Ghidra name: `FUN_049cab20`
- Body: `[[049cab20, 049cab53]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_049cab20(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (0.0 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 < param_1;
    }
    return bVar1;
  }
  return false;
}


```

### Assembly

```asm
049cab20  XORPS XMM1,XMM1
049cab23  UCOMISS XMM0,XMM1
049cab26  JBE 0x049cab51
049cab28  MOV AL,0x1
049cab2a  UCOMISS XMM0,dword ptr [0x011983f0]
049cab31  JNC 0x049cab50
049cab33  PUSH RAX
049cab34  MOV RAX,qword ptr [RDI]
049cab37  MOVSS dword ptr [RSP + 0x4],XMM0
049cab3d  CALL qword ptr [RAX + 0x30]
049cab40  MOVSS XMM1,dword ptr [RSP + 0x4]
049cab46  UCOMISS XMM1,XMM0
049cab49  SETA AL
049cab4c  ADD RSP,0x8
049cab50  RET
049cab51  XOR EAX,EAX
049cab53  RET
```

## `049cab60` — XoroshiroRandom slot 15

- Ghidra name: `FUN_049cab60`
- Body: `[[049cab60, 049cab94]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_049cab60(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (_DAT_011987c8 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 <= param_1;
    }
    return bVar1;
  }
  return false;
}


```

### Assembly

```asm
049cab60  UCOMISS XMM0,dword ptr [0x011987c8]
049cab67  JBE 0x049cab92
049cab69  MOV AL,0x1
049cab6b  UCOMISS XMM0,dword ptr [0x011983f0]
049cab72  JNC 0x049cab91
049cab74  PUSH RAX
049cab75  MOV RAX,qword ptr [RDI]
049cab78  MOVSS dword ptr [RSP + 0x4],XMM0
049cab7e  CALL qword ptr [RAX + 0x30]
049cab81  MOVSS XMM1,dword ptr [RSP + 0x4]
049cab87  UCOMISS XMM1,XMM0
049cab8a  SETNC AL
049cab8d  ADD RSP,0x8
049cab91  RET
049cab92  XOR EAX,EAX
049cab94  RET
```

## `049caba0` — XoroshiroRandom slot 16

- Ghidra name: `FUN_049caba0`
- Body: `[[049caba0, 049cabd8]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_049caba0(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_0f54fd80) {
    bVar1 = true;
    if (_DAT_011987c8 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 < fVar2;
    }
    return bVar1;
  }
  return false;
}


```

### Assembly

```asm
049caba0  MOVSS XMM1,dword ptr [0x0f54fd80]
049caba8  UCOMISS XMM1,XMM0
049cabab  JBE 0x049cabd6
049cabad  MOV AL,0x1
049cabaf  MOVSS XMM1,dword ptr [0x011987c8]
049cabb7  UCOMISS XMM1,XMM0
049cabba  JNC 0x049cabd5
049cabbc  PUSH RAX
049cabbd  MOV RAX,qword ptr [RDI]
049cabc0  MOVSS dword ptr [RSP + 0x4],XMM0
049cabc6  CALL qword ptr [RAX + 0x30]
049cabc9  UCOMISS XMM0,dword ptr [RSP + 0x4]
049cabce  SETA AL
049cabd1  ADD RSP,0x8
049cabd5  RET
049cabd6  XOR EAX,EAX
049cabd8  RET
```

## `049cabe0` — XoroshiroRandom slot 17

- Ghidra name: `FUN_049cabe0`
- Body: `[[049cabe0, 049cac13]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_049cabe0(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_011983f0) {
    bVar1 = true;
    if (0.0 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 <= fVar2;
    }
    return bVar1;
  }
  return false;
}


```

### Assembly

```asm
049cabe0  MOVSS XMM1,dword ptr [0x011983f0]
049cabe8  UCOMISS XMM1,XMM0
049cabeb  JBE 0x049cac11
049cabed  MOV AL,0x1
049cabef  XORPS XMM1,XMM1
049cabf2  UCOMISS XMM1,XMM0
049cabf5  JNC 0x049cac10
049cabf7  PUSH RAX
049cabf8  MOV RAX,qword ptr [RDI]
049cabfb  MOVSS dword ptr [RSP + 0x4],XMM0
049cac01  CALL qword ptr [RAX + 0x30]
049cac04  UCOMISS XMM0,dword ptr [RSP + 0x4]
049cac09  SETNC AL
049cac0c  ADD RSP,0x8
049cac10  RET
049cac11  XOR EAX,EAX
049cac13  RET
```

## `0495b7b0` — XoroshiroPositionalRandomFactory slot 0

- Ghidra name: `FUN_0495b7b0`
- Body: `[[0495b7b0, 0495b7b0]]`

### Pseudocode

```c

void FUN_0495b7b0(void)

{
  return;
}


```

### Assembly

```asm
0495b7b0  RET
```

## `049cc560` — XoroshiroPositionalRandomFactory slot 1

- Ghidra name: `FUN_049cc560`
- Body: `[[049cc560, 049cc569]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_049cc560(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


```

### Assembly

```asm
049cc560  MOV ESI,0x18
049cc565  JMP 0x0412a280
```

## `049cc570` — XoroshiroPositionalRandomFactory slot 2

- Ghidra name: `FUN_049cc570`
- Body: `[[049cc570, 049cc64c]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_049cc570(undefined8 *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(ulong *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar6 = (long)(int)uVar2 * 0x6ebfff5 ^ (long)(uVar6 * 0x2fc20f00000000 ^ uVar6) >> 0x20;
  uVar4 = (long)((uVar6 * 0x285b825 + 0xb) * uVar6) >> 0x10 ^ uVar4;
  uVar6 = 0x9e3779b97f4a7c15;
  if (uVar4 != 0 || lVar1 != 0) {
    uVar6 = uVar4;
  }
  lVar5 = 0x6a09e667f3bcc909;
  if (uVar4 != 0 || lVar1 != 0) {
    lVar5 = lVar1;
  }
  *puVar3 = &UNK_0ef512d0;
  puVar3[1] = uVar6;
  puVar3[2] = lVar5;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *param_1 = puVar3;
  return param_1;
}


```

### Assembly

```asm
049cc570  PUSH RBP
049cc571  PUSH R15
049cc573  PUSH R14
049cc575  PUSH R13
049cc577  PUSH R12
049cc579  PUSH RBX
049cc57a  PUSH RAX
049cc57b  MOV RBX,RDI
049cc57e  MOV R13,qword ptr [RDX]
049cc581  MOVSXD R12,dword ptr [RDX + 0x8]
049cc585  MOV R15,qword ptr [RSI + 0x8]
049cc589  MOV R14,qword ptr [RSI + 0x10]
049cc58d  MOV RAX,qword ptr [0x0f5463b0]
049cc594  LEA RDI,[0xf5463b0]
049cc59b  MOV ESI,0x28
049cc5a0  CALL qword ptr [RAX + 0x10]
049cc5a3  TEST RAX,RAX
049cc5a6  JZ 0x049cc636
049cc5ac  MOV RCX,0x2fc20f00000000
049cc5b6  IMUL RCX,R13
049cc5ba  XOR RCX,R13
049cc5bd  SAR RCX,0x20
049cc5c1  IMUL RDX,R12,0x6ebfff5
049cc5c8  XOR RDX,RCX
049cc5cb  IMUL RCX,RDX,0x285b825
049cc5d2  ADD RCX,0xb
049cc5d6  IMUL RCX,RDX
049cc5da  SAR RCX,0x10
049cc5de  XOR RCX,R15
049cc5e1  MOV RDX,RCX
049cc5e4  OR RDX,R14
049cc5e7  MOV RDX,-0x61c8864680b583eb
049cc5f1  CMOVNZ RDX,RCX
049cc5f5  MOV RCX,0x6a09e667f3bcc909
049cc5ff  CMOVNZ RCX,R14
049cc603  LEA RSI,[0xef512d0]
049cc60a  MOV qword ptr [RAX],RSI
049cc60d  MOV qword ptr [RAX + 0x8],RDX
049cc611  MOV qword ptr [RAX + 0x10],RCX
049cc615  MOV qword ptr [RAX + 0x18],0x0
049cc61d  MOV byte ptr [RAX + 0x20],0x0
049cc621  MOV qword ptr [RBX],RAX
049cc624  MOV RAX,RBX
049cc627  ADD RSP,0x8
049cc62b  POP RBX
049cc62c  POP R12
049cc62e  POP R13
049cc630  POP R14
049cc632  POP R15
049cc634  POP RBP
049cc635  RET
049cc636  MOV EDI,0x28
049cc63b  XOR ESI,ESI
049cc63d  MOV RBP,RAX
049cc640  CALL 0x0eec74c0
049cc645  MOV RAX,RBP
049cc648  JMP 0x049cc5ac
```

## `049cc650` — XoroshiroPositionalRandomFactory slot 3

- Ghidra name: `FUN_049cc650`
- Body: `[[049cc650, 049cc7ea]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_049cc650(undefined8 *param_1,long param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long *in_FS_OFFSET;
  ulong uStack_48;
  ulong uStack_40;
  
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0x16b0) == '\0') {
    *(undefined1 *)(lVar2 + -0x16b0) = 1;
    *(undefined **)(lVar2 + -0x1750) = &UNK_0f53bd88;
    *(undefined8 *)(lVar2 + -0x1738) = 0x1032547698badcfe;
    uVar3 = _UNK_014e11d8;
    *(undefined8 *)(lVar2 + -0x1748) = _DAT_014e11d0;
    *(undefined8 *)(lVar2 + -0x1740) = uVar3;
    *(undefined8 *)(lVar2 + -0x1730) = 0;
    *(undefined8 *)(lVar2 + -0x1728) = 0;
    *(undefined8 *)(lVar2 + -0x1720) = 0;
    *(undefined8 *)(lVar2 + -0x1718) = 0;
    *(undefined8 *)(lVar2 + -0x1710) = 0;
    *(undefined8 *)(lVar2 + -0x1708) = 0;
    *(undefined8 *)(lVar2 + -0x1700) = 0;
    *(undefined8 *)(lVar2 + -0x16f8) = 0;
    *(undefined8 *)(lVar2 + -0x16f0) = 0;
    *(undefined8 *)(lVar2 + -0x16e8) = 0;
    *(undefined8 *)(lVar2 + -0x16e0) = 0;
    *(undefined8 *)(lVar2 + -0x16d8) = 0;
    *(undefined8 *)(lVar2 + -0x16d0) = 0;
    *(undefined8 *)(lVar2 + -0x16c8) = 0;
    *(undefined8 *)(lVar2 + -0x16c0) = 0;
    *(undefined8 *)(lVar2 + -0x16b8) = 0;
  }
  lVar1 = lVar2 + -0x1750;
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x10))(lVar1);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
    uVar6 = (uint)(*param_3 >> 1);
  }
  else {
    uVar6 = *(uint *)(param_3 + 8);
    pbVar9 = *(byte **)(param_3 + 0x10);
  }
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x18))(lVar1,pbVar9,uVar6);
  (**(code **)(*(long *)(lVar2 + -0x1750) + 0x20))(lVar1,&uStack_48);
  uVar10 = *(ulong *)(param_2 + 8);
  uVar8 = *(ulong *)(param_2 + 0x10);
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar8 = uVar8 ^ (uStack_40 >> 0x38 | (uStack_40 & 0xff000000000000) >> 0x28 |
                   (uStack_40 & 0xff0000000000) >> 0x18 | (uStack_40 & 0xff00000000) >> 8 |
                   (uStack_40 & 0xff000000) << 8 | (uStack_40 & 0xff0000) << 0x18 |
                   (uStack_40 & 0xff00) << 0x28 | uStack_40 << 0x38);
  uVar10 = uVar10 ^ (uStack_48 >> 0x38 | (uStack_48 & 0xff000000000000) >> 0x28 |
                     (uStack_48 & 0xff0000000000) >> 0x18 | (uStack_48 & 0xff00000000) >> 8 |
                     (uStack_48 & 0xff000000) << 8 | (uStack_48 & 0xff0000) << 0x18 |
                     (uStack_48 & 0xff00) << 0x28 | uStack_48 << 0x38);
  uVar5 = 0x9e3779b97f4a7c15;
  if (uVar8 != 0 || uVar10 != 0) {
    uVar5 = uVar10;
  }
  uVar7 = 0x6a09e667f3bcc909;
  if (uVar8 != 0 || uVar10 != 0) {
    uVar7 = uVar8;
  }
  *puVar4 = &UNK_0ef512d0;
  puVar4[1] = uVar5;
  puVar4[2] = uVar7;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  *param_1 = puVar4;
  return param_1;
}


```

### Assembly

```asm
049cc650  PUSH RBP
049cc651  PUSH R15
049cc653  PUSH R14
049cc655  PUSH R13
049cc657  PUSH R12
049cc659  PUSH RBX
049cc65a  SUB RSP,0x18
049cc65e  MOV R15,RDX
049cc661  MOV R14,RSI
049cc664  MOV RBX,RDI
049cc667  MOV RAX,qword ptr FS:[0x0]
049cc673  CMP byte ptr [RAX + -0x16b0],0x0
049cc67a  JZ 0x049cc760
049cc680  MOV R13,RAX
049cc683  LEA R12,[RAX + -0x1750]
049cc68a  MOV RAX,qword ptr [RAX + -0x1750]
049cc691  MOV RDI,R12
049cc694  CALL qword ptr [RAX + 0x10]
049cc697  MOVZX EDX,byte ptr [R15]
049cc69b  TEST DL,0x1
049cc69e  JZ 0x049cc6aa
049cc6a0  MOV EDX,dword ptr [R15 + 0x8]
049cc6a4  MOV R15,qword ptr [R15 + 0x10]
049cc6a8  JMP 0x049cc6af
049cc6aa  INC R15
049cc6ad  SHR EDX,0x1
049cc6af  MOV RAX,qword ptr [R13 + -0x1750]
049cc6b6  MOV RDI,R12
049cc6b9  MOV RSI,R15
049cc6bc  CALL qword ptr [RAX + 0x18]
049cc6bf  MOV RAX,qword ptr [R13 + -0x1750]
049cc6c6  MOV RSI,RSP
049cc6c9  MOV RDI,R12
049cc6cc  CALL qword ptr [RAX + 0x20]
049cc6cf  MOV R12,qword ptr [RSP]
049cc6d3  MOV R13,qword ptr [RSP + 0x8]
049cc6d8  MOV R15,qword ptr [R14 + 0x8]
049cc6dc  MOV R14,qword ptr [R14 + 0x10]
049cc6e0  MOV RAX,qword ptr [0x0f5463b0]
049cc6e7  LEA RDI,[0xf5463b0]
049cc6ee  MOV ESI,0x28
049cc6f3  CALL qword ptr [RAX + 0x10]
049cc6f6  TEST RAX,RAX
049cc6f9  JZ 0x049cc7d4
049cc6ff  BSWAP R13
049cc702  XOR R14,R13
049cc705  BSWAP R12
049cc708  XOR R15,R12
049cc70b  MOV RCX,R14
049cc70e  OR RCX,R15
049cc711  MOV RCX,-0x61c8864680b583eb
049cc71b  CMOVNZ RCX,R15
049cc71f  MOV RDX,0x6a09e667f3bcc909
049cc729  CMOVNZ RDX,R14
049cc72d  LEA RSI,[0xef512d0]
049cc734  MOV qword ptr [RAX],RSI
049cc737  MOV qword ptr [RAX + 0x8],RCX
049cc73b  MOV qword ptr [RAX + 0x10],RDX
049cc73f  MOV qword ptr [RAX + 0x18],0x0
049cc747  MOV byte ptr [RAX + 0x20],0x0
049cc74b  MOV qword ptr [RBX],RAX
049cc74e  MOV RAX,RBX
049cc751  ADD RSP,0x18
049cc755  POP RBX
049cc756  POP R12
049cc758  POP R13
049cc75a  POP R14
049cc75c  POP R15
049cc75e  POP RBP
049cc75f  RET
049cc760  MOV byte ptr [RAX + -0x16b0],0x1
049cc767  LEA RDX,[0xf53bd88]
049cc76e  MOV qword ptr [RAX + -0x1750],RDX
049cc775  MOV RDX,0x1032547698badcfe
049cc77f  MOV qword ptr [RAX + -0x1738],RDX
049cc786  MOVAPS XMM0,xmmword ptr [0x014e11d0]
049cc78d  MOVUPS xmmword ptr [RAX + -0x1748],XMM0
049cc794  XORPS XMM0,XMM0
049cc797  MOVUPS xmmword ptr [RAX + -0x1730],XMM0
049cc79e  MOVUPS xmmword ptr [RAX + -0x1720],XMM0
049cc7a5  MOVUPS xmmword ptr [RAX + -0x1710],XMM0
049cc7ac  MOVUPS xmmword ptr [RAX + -0x1700],XMM0
049cc7b3  MOVUPS xmmword ptr [RAX + -0x16f0],XMM0
049cc7ba  MOVUPS xmmword ptr [RAX + -0x16e0],XMM0
049cc7c1  MOVUPS xmmword ptr [RAX + -0x16d0],XMM0
049cc7c8  MOVUPS xmmword ptr [RAX + -0x16c0],XMM0
049cc7cf  JMP 0x049cc680
049cc7d4  MOV EDI,0x28
049cc7d9  XOR ESI,ESI
049cc7db  MOV RBP,RAX
049cc7de  CALL 0x0eec74c0
049cc7e3  MOV RAX,RBP
049cc7e6  JMP 0x049cc6ff
```

