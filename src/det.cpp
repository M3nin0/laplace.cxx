#include <math.h>
#include <stdexcept>

#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"
#include "xtensor/xslice.hpp"

#include "det.hpp"
#include "dimension.hpp"

double Laplace::Determinant2D(const xt::xarray<double> arr)
{
    auto arrData = arr.data();
    
    return (arrData[0] * arrData[3]) - (arrData[1] * arrData[2]);
}

double Laplace::Determinant3D(const xt::xarray<double> arr)
{
    double left, right = 0;
    xt::xarray<double> arrH = xt::hstack(xt::xtuple(arr, xt::view(arr, xt::all(), xt::keep(0, 1))));
    xt::xarray<double> arrHInverse = xt::flip(arrH, 0);
    
    // Apply sarrus rule
    for (int i = 0; i < 3; i++)
    {
        xt::xarray<double> l = xt::prod(xt::diagonal(arrH, i));
        xt::xarray<double> r = xt::prod(xt::diagonal(arrHInverse, i));
        
        left += l.data()[0];
        right += r.data()[0];
    }
    return left - right;
}

double Laplace::Determinant(const xt::xarray<double> arr)
{    
    double result;
    
    if (!IsMatrixSquare(arr))
    {
        throw std::runtime_error("Non square Matrix");
    }
    
    if (CheckDimension(arr, 2))
        return Determinant2D(arr);
    if (CheckDimension(arr, 3))
        return Determinant3D(arr);
    
    // Laplace determinant theorem
    for (auto i: xt::arange<int>(0, arr.shape(1)))
    {
        auto arrWithoutIAndJ = xt::view(arr, xt::drop(0), xt::drop(i));
        double cofactor = std::pow(-1, i) * Determinant(arrWithoutIAndJ);
        
        result += xt::view(arr, 0, 1).data()[i] * cofactor;
    }
    return result;
}
