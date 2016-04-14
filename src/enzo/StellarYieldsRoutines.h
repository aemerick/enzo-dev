#ifndef __STELLAR_YIELD_ROUTINES_H
#define __STELLAR_YIELD_ROUTINES_H

#include "typedefs.h"

#ifdef DEFINE_STORAGE
# define ISEXTERN
#else
# define ISEXTERN extern
#endif

float StellarYieldsInterpolateYield(StellarYieldsDataType table, float *M,
                                    float *metallicity, int atomic_number);

int GetYieldIndex(int *atomic_numbers, int number_of_yields, int Z);

#endif
