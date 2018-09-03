#ifndef MULTIPLY_MATVEC_H
#define MULTIPLY_MATVEC_H

#include <stddef.h>
#include "rowidx/rowidx.h"

void multiply_matvec(const double* A, const double* y, double* z, size_t n, size_t m);

#endif /* MULTIPLY_MATVEC_H */
