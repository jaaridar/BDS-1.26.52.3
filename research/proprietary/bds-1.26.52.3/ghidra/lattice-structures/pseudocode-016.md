# FUN_0d228c00

- entry: `0xd228c00`
- body size: 9 bytes
- callers: (none in the analysed set)

```c

void FUN_0d228c00(void)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  cVar2 = in_AL + in_CF;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x41);
  *pcVar1 = *pcVar1 + unaff_BL;
  return;
}


```
