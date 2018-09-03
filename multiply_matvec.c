#include "multiply_matvec.h"

void multiply_matvec(const double* A, const double* y, double* z, size_t n, size_t m)
{
    size_t i,j;
    double tmp;
    for(i=0; i<n; i++){
        tmp = 0.0;
        for(j=0; j<m; j++){
            tmp += A[rowidx(i,j,m)] * y[j];
        }
        z[i] = tmp;
    }
}

// an alternative implementation without rowidx as comment
/* 
void multiply_matvec(const double* A, const double* y, double* z, size_t n, size_t m){
    size_t i, j, im;
    double tmp;
    for(i=0; i<n; i++){
        tmp = 0.0;
        im = i*m;
        for(j=0; j<m; j++){
            tmp += A[im+j] * y[j];
        }
        z[i] = tmp;
    }
} */
