# thunk_FUN_04144610

- entry: `0x4138180`
- body size: 5 bytes
- callers: `FUN_09e20de0`

```c

/* WARNING: Possible PIC construction at 0x04144669: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0414467b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0414466e) */
/* WARNING: Removing unreachable block (ram,0x04144680) */

void thunk_FUN_04144610(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &UNK_0eeeda50;
  if (param_1[6] != 0) {
    for (lVar1 = param_1[9]; lVar1 != 0; lVar1 = lVar1 + -1) {
      (**(code **)(param_1[7] + -8 + lVar1 * 8))
                (0,param_1,*(undefined4 *)(param_1[8] + -4 + lVar1 * 4));
    }
    FUN_04167a40(param_1 + 6);
    (*(code *)PTR_free_0f5464a8)(param_1[7]);
    return;
  }
  return;
}


```
