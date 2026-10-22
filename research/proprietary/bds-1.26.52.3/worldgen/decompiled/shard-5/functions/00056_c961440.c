/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca61440 (ELF vaddr 0xc961440)
 * Label: Dimension::vslot47
 * Body:  [[0ca61440, 0ca614c4]]
 * Ghidra: wg_Dimension__vslot47
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_Dimension__vslot47(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  *puVar1 = &UNK_0f3ec7b8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  LOCK();
  puVar1[8] = 0;
  UNLOCK();
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *param_1 = puVar1;
  return param_1;
}


