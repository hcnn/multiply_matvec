#include <stdio.h>  // printf
#include "multiply_matvec.h"

int main()
{
    size_t i;
    size_t n=3, m=4;

    double y[] = {1,2,3,4};

    double A[] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9,10,11,12
    };

    double z[n];

    multiply_matvec(A, y, z, n, m);

    printf("\n z = \n");
    for(i=0; i<n; i++){
        printf("%4.f\n", z[i]);
    }
    printf("\n");
}
