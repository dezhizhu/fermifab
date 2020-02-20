/// \file sparse.c
/// \brief Sparse arrays.
//
//  Copyright (c) 2008-2020, Christian B. Mendl
//  All rights reserved.
//  http://christian.mendl.net
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the Simplified BSD License
//  http://www.opensource.org/licenses/bsd-license.php
//
//  Reference:
//      Christian B. Mendl
//      The FermiFab toolbox for fermionic many-particle quantum systems
//      Comput. Phys. Commun. 182, 1327-1337 (2011)
//      preprint http://arxiv.org/abs/1103.0872
//________________________________________________________________________________________________________________________
//

#include "sparse.h"
#include <stdlib.h>


void DeleteSparseArray(sparse_array_t *a)
{
	if (a->dims != NULL) {  free(a->dims); }
	if (a->ind  != NULL) {  free(a->ind);  }
	if (a->val  != NULL) {  free(a->val);  }

	a->nnz  = 0;
	a->rank = 0;
}
