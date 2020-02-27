#include <iostream>
#include "xtensor/xarray.hpp"
#include "xtensor/xview.hpp"

#include "det.hpp"

int main()
{
    xt::xarray<double> M({{
        1, 3
    }, {
        2, 5
    }});

    xt::xarray<double> MA({{
        1, 3, 0
    }, {
        2, 5, 1
    }, {
        2, 1, 3
    }});

    xt::xarray<double> A({{
        1, 0, 2, 0
    }, {
        2, 1, 1, 1
    }, {
        2, 3, 0, 1
    }, {
        -1, 1, 2, 2
    }});

    std::cout << Laplace::Determinant(A) << std::endl;
    std::cout << Laplace::Determinant(M) << std::endl;
    std::cout << Laplace::Determinant(MA) << std::endl;

    return 0;
}
