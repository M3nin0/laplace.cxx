#ifndef _DIMENSION_HEADER_
#define _DIMENSION_HEADER_

namespace Laplace
{
    bool IsMatrixSquare(const xt::xarray<double> arr);

    bool CheckDimension(const xt::xarray<double> arr, const unsigned int dimension);
}


#endif