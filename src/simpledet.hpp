#ifndef SIMPLEDET_HEADER
#define SIMPLEDET_HEADER

#include "matrix.h"
#include "validator.hpp"

float det1x1(Matrix * matrix) { 
    verifyDimensions(matrix, 1, 1);
    return matrix->data[0][0];
}

float det2x2(Matrix * matrix) {
    float a0xa4 = matrix->data[0][0] * matrix->data[1][1];
    float a1xa3 = matrix->data[0][1] * matrix->data[1][0];

    return a0xa4 - a1xa3;
}

#endif
