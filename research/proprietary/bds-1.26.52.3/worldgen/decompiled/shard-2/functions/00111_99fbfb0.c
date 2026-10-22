/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x99fbfb0
 * Label: string:mojang-biomes.json
 * Body:  [[099fbf9b, 099fbfa5] [099fbfb0, 099fbfe8]]
 * Ghidra: FUN_099fbfb0
 */


void FUN_099fbfb0(void)

{
  byte bVar1;
  undefined1 in_AL;
  ulong *unaff_RBX;
  
  out(0xfe,in_AL);
  func_0x0412a280();
  if ((unaff_RBX[3] & 1) == 0) {
    bVar1 = (byte)*unaff_RBX;
  }
  else {
    func_0x0412a280(unaff_RBX[5],unaff_RBX[3] & 0xfffffffffffffffe);
    bVar1 = (byte)*unaff_RBX;
  }
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(unaff_RBX[2],*unaff_RBX & 0xfffffffffffffffe);
    return;
  }
  return;
}


