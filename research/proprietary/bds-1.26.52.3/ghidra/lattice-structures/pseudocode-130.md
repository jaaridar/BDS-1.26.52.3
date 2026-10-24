# FUN_0eee14b0

- entry: `0xeee14b0`
- body size: 176 bytes
- callers: `FUN_0eee1580`

```c

long FUN_0eee14b0(uint param_1)

{
  long lVar1;
  long lVar2;
  long *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -8) == '\0') {
    FUN_0eee07b0(lVar1 + -0x28,&DAT_0f7ba230);
    FUN_0417d010(&UNK_0eee0b40,lVar1 + -0x28,0xf53dab8);
    *(undefined1 *)(lVar1 + -8) = 1;
  }
  lVar2 = *(long *)(lVar1 + -0x20);
  if ((ulong)(*(long *)(lVar1 + -0x18) - lVar2 >> 3) <= (ulong)param_1) {
    FUN_0412d680(&DAT_0f7ba1d0);
    FUN_0eee1060((long *)(lVar1 + -0x20),param_1 + 1);
    func_0x0412d6b0(&DAT_0f7ba1d0);
    lVar2 = *(long *)(lVar1 + -0x20);
  }
  return lVar2 + (ulong)param_1 * 8;
}


```
