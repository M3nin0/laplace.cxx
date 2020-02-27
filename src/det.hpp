#ifndef _DET_HEADER_
#define _DET_HEADER_

namespace Laplace
{
    double Determinant2D(const xt::xarray<double> arr);
    
    double Determinant3D(const xt::xarray<double> arr);
    
    double Determinant(const xt::xarray<double> arr);
}

#endif
