#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"

#include "dimension.hpp"

bool Laplace::IsMatrixSquare(const xt::xarray<double> arr)
{
    return arr.shape(0) == arr.shape(1);
}

bool Laplace::CheckDimension(const xt::xarray<double> arr, const unsigned int dimension)
{
    return arr.shape(0) == dimension && arr.shape(1) == dimension;
}
