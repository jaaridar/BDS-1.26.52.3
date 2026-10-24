# FUN_0412d680

- entry: `0x412d680`
- body size: 27 bytes
- callers: `FUN_0412d450`, `FUN_0412d520`, `FUN_0412d550`, `FUN_0412d610`, `FUN_04e5fb80`, `FUN_04fbc500`, `FUN_0eeb79f0`, `FUN_0eec09c0`, `FUN_0eee07b0`

```c

undefined8 FUN_0412d680(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  
  iVar2 = func_0x0eee2d30();
  if (iVar2 == 0) {
    return in_RAX;
  }
  func_0x0412e520(iVar2,&UNK_0133d1cb);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


```
