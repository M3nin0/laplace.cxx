// #include "matrix.h"

/**
 * Function: det1x1
 * -----------------
 * generates the determinant of a 1x1 matrix
 *
 * matrix: A matrix
 *
 * returns: float determinant
 */
float det1x1(Matrix* matrix) {
	return matrix->data[0][0];
}

/**
 * Function: det2x2
 * -----------------
 * generates the determinant of a 2x2 matrix
 *
 * matrix: A matrix
 *
 * returns: float determinant
 */
float det2x2(Matrix* matrix) {
	float mainDiagonal = matrix->data[0][0] * matrix->data[1][1];
	float secondDiagonal = matrix->data[0][1] * matrix->data[1][0];

	return mainDiagonal - secondDiagonal;
}

/**
 * Function: det3x3
 * -----------------
 * generates the determinant of a 3x3 matrix. Using sarrus method
 *
 * matrix: A matrix
 *
 * returns: float determinant
 */
float det3x3(Matrix* matrix) {
	Matrix* m2det = mcolcat(matrix, matrix, 1);

	Matrix* mprincipal = sdiagonal(m2det);
	Matrix* msecond = sdiagonalreverse(m2det);

	float mprincipalsum = rowcolsum(colmul(mprincipal));
	float msecondsum = rowcolsum(colmul(msecond));

	return mprincipalsum - msecondsum;
}

float det4x4(Matrix* matrix) {
	return NULL;
}
