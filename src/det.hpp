#ifndef _DET_HEADER_
#define _DET_HEADER_

namespace Laplace
{
    /**
     * Calculates determinant of a 2x2 matrix
     * 
     * @param arr Container of values
     * @return Determinant of a 2x2 matrix
     */
    double Determinant2D(const xt::xarray<double> arr);
    
    /**
     * Calculates determinant of a 3x3 matrix
     * 
     * @param arr Container of values
     * @return Determinant of a 3x3 matrix
     */
    double Determinant3D(const xt::xarray<double> arr);
    
    /**
     * Calculates determinant of a NxN matrix
     * 
     * @param arr Container of values
     * @return Determinant of a NxN matrix
     */
    double Determinant(const xt::xarray<double> arr);
}

#endif
