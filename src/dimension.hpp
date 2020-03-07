#ifndef _DIMENSION_HEADER_
#define _DIMENSION_HEADER_

namespace Laplace
{
    /**
     * Verify if the input matrix is square (NxM, where N = M)
     * 
     * @param arr Container of matrix
     * @return Flag indicating whether the matrix is square
     */
    bool IsMatrixSquare(const xt::xarray<double> arr);

    /**
     * Utilitary function to verify the dimensions of matrixs
     * 
     * @param arr Container of matrix
     * @param dimension Dimension verified in matrix
     * @return Flag indicating whether the matrix dimension is equals inserted dimension
     */
    bool CheckDimension(const xt::xarray<double> arr, const unsigned int dimension);
}


#endif