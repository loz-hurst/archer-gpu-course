/* Note: OpenCL kernel code is often stored in files with extension .cl
 * To allow this file to be edited via jupyter, the extension is .c at
 * the moment. */

__kernel void negate(__global int * d_a)
{
  /* Part 2B: negate an element of d_a */
  const size_t i = get_global_id(0);
  d_a[i] = -1 * d_a[i];
}
