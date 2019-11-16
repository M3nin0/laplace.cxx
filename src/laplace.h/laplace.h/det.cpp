#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "matrix.h"
#include "det.h"

int main() {
	// Define matrix
	Matrix* m1x1 = m(1, 1);
	Matrix* m2x2 = m(2, 2);
	Matrix* m3x3 = m(3, 3);

	// set data in matrixes
	magic(m1x1);
	magic(m2x2);
	magic(m3x3);

	std::cout << "M (1x1): " << det1x1(m1x1) << std::endl;
	std::cout << "M (2x2): " << det1x1(m2x2) << std::endl;
	std::cout << "M (3x3): " << det1x1(m3x3) << std::endl;
}
