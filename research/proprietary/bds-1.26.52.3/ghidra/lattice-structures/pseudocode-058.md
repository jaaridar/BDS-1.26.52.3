# FUN_04e9c980

- entry: `0x4e9c980`
- body size: 195 bytes
- callers: `FUN_04e9d840`

```c

/* WARNING: Possible PIC construction at 0x04e9ca0e: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_04e9c980(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_10;
  
  if ((*(ulong *)(param_1 + 0x80) >> 0x37 & 1) != 0) {
    uStack_10 = 0x4e9c9b4;
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(*(ulong *)(param_1 + 0x80) & 0xff00ffffffffffff) - 8);
  }
  uVar2 = 0x80000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if ((*(ulong *)(param_1 + 0x78) & 0x80000000000000) != 0) {
    uStack_10 = 0x4e9c9f4;
    uVar2 = (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)(param_1 + 0x78) & 0xff00ffffffffffff) - 8);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uStack_10 = 0x4e9ca29;
      uVar2 = func_0x0412a280(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x50) << 3);
    }
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x4e9ca13;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = uVar2;
  if (lVar3 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```
