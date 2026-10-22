/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493b290
 * Label: BiomeSource3d::vslot11
 * Body:  [[0412d6b0, 0412d6b4] [0493b290, 0493b359] [0eee2d60, 0eee2d65]]
 * Ghidra: wg_BiomeSource3d__vslot11
 */


/* WARNING: Possible PIC construction at 0x0493b2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0493b34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0493b2b5) */
/* WARNING: Removing unreachable block (ram,0x0493b339) */
/* WARNING: Removing unreachable block (ram,0x0493b2be) */
/* WARNING: Removing unreachable block (ram,0x0493b351) */

void wg_BiomeSource3d__vslot11(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  func_0x0412d680(param_1 + 0x18);
  if (*(char *)(param_1 + 0x41) == '\0') {
    uVar1 = *(ulong *)(param_1 + 0x70);
    if (uVar1 < *(ulong *)(param_1 + 0x78)) {
      lVar2 = *(long *)(param_2 + 0x20);
      if (lVar2 == 0) {
        *(undefined8 *)(uVar1 + 0x20) = 0;
      }
      else if (lVar2 == param_2) {
        *(ulong *)(uVar1 + 0x20) = uVar1;
        (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),uVar1);
      }
      else {
        *(long *)(uVar1 + 0x20) = lVar2;
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      lVar2 = uVar1 + 0x30;
    }
    else {
      lVar2 = func_0x0493b370(param_1 + 0x68,param_2);
    }
    *(long *)(param_1 + 0x70) = lVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(param_1 + 0x18);
  return;
}


