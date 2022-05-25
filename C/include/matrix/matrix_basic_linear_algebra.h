/* **************************************************** */
/* Linear Algebra                                     */

#ifndef MATRIX_BASIC_LINEAR_ALGEBRA_H
#define MATRIX_BASIC_LINEAR_ALGEBRA_H

matrix matrix_funapply(matrix a, matrix (*fun)()); //ACHTUNG
matrix matrix_foreach(matrix a, matrix (*fun)());  //ACHTUNG

matrix matrix_add(matrix a, matrix b);
matrix matrix_scalarmul(matrix a, double scalar);
matrix matrix_reciprocal(matrix a);
matrix matrix_mul_scalar(matrix a, matrix b);
matrix matrix_exp_scalar(double base, matrix a);
matrix matrix_power_int_scalar(matrix a, unsigned int n);
matrix matrix_power_scalar(matrix a, double exp);

matrix matrix_mul(matrix a, matrix b);
matrix matrix_exp(double base, matrix a);
matrix matrix_power_int(matrix a, unsigned int n);
matrix matrix_power(matrix a, double exp);

matrix matrix_inverse(matrix a);
matrix matrix_traspose(matrix a);
matrix matrix_conj(matrix a);
matrix matrix_conjtrasp(matrix a);

unsigned int matrix_rank(matrix a);
double matrix_det(matrix a);
double matrix_trace(matrix a);

//change base

/*
array matrix_eigen(matrix a);
matrix matrix_jordan_complex(matrix a);
matrix matrix_jordan_real(matrix a);

unsigned int* matrix_signature(matrix a);
*/

#endif
