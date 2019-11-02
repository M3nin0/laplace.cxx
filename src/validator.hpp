#ifndef VALIDATOR_HEADER
#define VALIDATOR_HEADER

#include "matrix.h"
#include <stdexcept>

void verifyDimensions(Matrix * matrix, int col, int row) {
    if (matrix->col != col || matrix->row != row)
        throw std::runtime_error("The array you entered is invalid!");
}

#endif
