#include "vector.h"

float compute_inner_product( const float *vector_a, const float *vector_b, int len )
{
    int sum = 0;
    for( int i = 0; i < len; i++ ) {
        sum += vector_a[i] * vector_b[i];
    }

    return sum;
}
