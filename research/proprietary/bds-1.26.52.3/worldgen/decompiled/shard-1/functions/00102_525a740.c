/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525a740
 * Label: string:minecraft:overworld
 * Body:  [[0525a740, 0525a7bb]]
 * Ghidra: FUN_0525a740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0525a740(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float *unaff_RBX;
  float fVar1;
  float in_stack_00000010;
  
  fVar1 = (_DAT_01198af0 * param_1 * param_1 + param_2 * param_4 + param_5) /
          ((param_1 * param_3 + param_4) * _DAT_01198c54);
  return CONCAT44(_UNK_014e91b4 + in_stack_00000010 * (unaff_RBX[1] + _DAT_01198b48),
                  fVar1 + in_stack_00000010 * (*unaff_RBX - fVar1));
}


