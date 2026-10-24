# FUN_04fd30c4

- entry: `0x4fd30c4`
- body size: 75 bytes
- callers: (none in the analysed set)

```c

void FUN_04fd30c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  undefined8 in_RAX;
  byte bVar6;
  long lVar7;
  byte in_CF;
  char in_SF;
  char in_OF;
  char *pcVar5;
  
  if (in_OF == in_SF) {
    bVar6 = (byte)((ulong)param_4 >> 8);
    bVar2 = (byte)in_RAX - bVar6;
    cVar4 = (bVar2 - in_CF) + ((byte)in_RAX < bVar6 || bVar2 < in_CF);
    pcVar5 = (char *)CONCAT71((int7)((ulong)in_RAX >> 8),cVar4);
    *pcVar5 = *pcVar5 + cVar4;
    _Unwind_Resume();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = **(long **)(param_1 + 8);
  for (lVar7 = **(long **)(param_1 + 0x10); lVar7 != lVar1; lVar7 = lVar7 + -0x28) {
    if ((*(byte *)(lVar7 + -0x20) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar7 + -0x10),*(ulong *)(lVar7 + -0x20) & 0xfffffffffffffffe)
      ;
    }
  }
  return;
}


```
