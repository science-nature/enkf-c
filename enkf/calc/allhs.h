/******************************************************************************
 *
 * File:        allhs.h        
 *
 * Created:     12/2012
 *
 * Author:      Pavel Sakov
 *              Bureau of Meteorology
 *
 * Description:
 *
 * Revisions:
 *
 *****************************************************************************/

#if !defined(_ALLHS_H)

#include "dasystem.h"

typedef void (*H_fn) (dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, void* psrc, ENSOBSTYPE dst[]);

void describe_hentries(char* obstypename);
H_fn getH(char obstypename[], char mappingname[]);

#define _ALLHS_H
#endif
