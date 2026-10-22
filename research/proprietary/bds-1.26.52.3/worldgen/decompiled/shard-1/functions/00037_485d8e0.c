/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485d8e0
 * Label: XoroshiroRandom::vslot0
 * Body:  [[0485d8d0, 0485d922]]
 * Ghidra: wg_XoroshiroRandom__vslot0
 */


void wg_XoroshiroRandom__vslot0
               (undefined8 param_1,long param_2,long param_3,long param_4,byte param_5,long param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 in_ZF;
  
  do {
    if ((bool)in_ZF) {
      return;
    }
    bVar1 = *(byte *)(param_3 + param_2);
    if (param_5 != bVar1) {
      bVar3 = param_5 | 0x20;
      if (0x19 < (byte)(param_5 + 0xbf)) {
        bVar3 = param_5;
      }
      bVar2 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      if (bVar3 != bVar2) {
        return;
      }
    }
    param_2 = param_2 + 1;
    if (param_4 == param_2) {
      return;
    }
    param_5 = *(byte *)(param_6 + param_2);
    in_ZF = param_5 == 0;
  } while( true );
}


